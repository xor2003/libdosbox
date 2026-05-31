/* THIS IS GENERATED FILE */

        
#include "detroit.exe.h"

                

 bool start(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    start:
    _begin:
cs=0x1a2;eip=0x000000; 	T(dx = seg_offset(dseg););	// 42                  mov     dx, seg dseg ;~ 01A2:0000
cs=0x1a2;eip=0x000003; 	X(__dgrouparb = dx;);	// 43                  mov     cs:__DGROUP@, dx ;~ 01A2:0003
cs=0x1a2;eip=0x000008; 	T(ah = 0x30;);	// 44                  mov     ah, 30h ;~ 01A2:0008
cs=0x1a2;eip=0x00000a; 	S(_INT(0x21));	// 45                  int     21h             ; DOS - GET DOS VERSION ;~ 01A2:000A
cs=0x1a2;eip=0x00000c; 	T(MOV(bp, *(dw*)(raddr(ds,2))));	// 47                  mov     bp, ds:2 ;~ 01A2:000C
cs=0x1a2;eip=0x000010; 	T(MOV(bx, *(dw*)(raddr(ds,0x2C))));	// 48                  mov     bx, ds:2Ch ;~ 01A2:0010
cs=0x1a2;eip=0x000014; 	T(ds = dx;);	// 49                  mov     ds, dx ;~ 01A2:0014
cs=0x1a2;eip=0x000016; 	X(word_1895d = ax;);	// 51                  mov     word_1895D, ax ;~ 01A2:0016
cs=0x1a2;eip=0x000019; 	X(__segx = es;);	// 52                  mov     __segx, es ;~ 01A2:0019
cs=0x1a2;eip=0x00001d; 	X(word_18957 = bx;);	// 53                  mov     word_18957, bx ;~ 01A2:001D
cs=0x1a2;eip=0x000021; 	X(word_18971 = bp;);	// 54                  mov     word_18971, bp ;~ 01A2:0021
cs=0x1a2;eip=0x000025; 	J(CALL(sub_1017d,0));	// 55                  call    sub_1017D ;~ 01A2:0025
cs=0x1a2;eip=0x000028; 	T(ax = word_18957;);	// 57                  mov     ax, word_18957 ;~ 01A2:0028
cs=0x1a2;eip=0x00002b; 	T(es = ax;);	// 58                  mov     es, ax ;~ 01A2:002B
cs=0x1a2;eip=0x00002d; 	T(XOR(ax, ax));	// 60                  xor     ax, ax ;~ 01A2:002D
cs=0x1a2;eip=0x00002f; 	T(bx = ax;);	// 61                  mov     bx, ax ;~ 01A2:002F
cs=0x1a2;eip=0x000031; 	T(di = ax;);	// 62                  mov     di, ax ;~ 01A2:0031
cs=0x1a2;eip=0x000033; 	T(cx = 0x7FFF;);	// 63                  mov     cx, 7FFFh ;~ 01A2:0033
cs=0x1a2;eip=0x000036; 	T(CLD);	// 64                  cld ;~ 01A2:0036
loc_10037:
	// 4369 
	// 67                  repne scasb ;~ 01A2:0037
cs=0x1a2;eip=0x000037; 	T(	REPNE SCASB);	// 67                  repne scasb ;~ 01A2:0037
cs=0x1a2;eip=0x000039; 	J(JCXZ(loc_1007e));	// 68                  jcxz    short loc_1007E ;~ 01A2:0039
cs=0x1a2;eip=0x00003b; 	T(INC(bx));	// 69                  inc     bx ;~ 01A2:003B
cs=0x1a2;eip=0x00003c; 	T(CMP(*(raddr(es,di)), al));	// 70                  cmp     es:[di], al ;~ 01A2:003C
cs=0x1a2;eip=0x00003f; 	J(JNZ(loc_10037));	// 71                  jnz     short loc_10037 ;~ 01A2:003F
cs=0x1a2;eip=0x000041; 	T(OR(ch, 0x80));	// 72                  or      ch, 80h ;~ 01A2:0041
cs=0x1a2;eip=0x000044; 	T(NEG(cx));	// 73                  neg     cx ;~ 01A2:0044
cs=0x1a2;eip=0x000046; 	X(word_18955 = cx;);	// 74                  mov     word_18955, cx ;~ 01A2:0046
cs=0x1a2;eip=0x00004a; 	T(cx = 2;);	// 75                  mov     cx, 2 ;~ 01A2:004A
cs=0x1a2;eip=0x00004d; 	T(SHL(bx, cl));	// 76                  shl     bx, cl ;~ 01A2:004D
cs=0x1a2;eip=0x00004f; 	T(ADD(bx, 0x10));	// 77                  add     bx, 10h ;~ 01A2:004F
cs=0x1a2;eip=0x000052; 	T(AND(bx, 0x0FFF0));	// 78                  and     bx, 0FFF0h ;~ 01A2:0052
cs=0x1a2;eip=0x000055; 	X(_size = bx;);	// 79                  mov     _size, bx ;~ 01A2:0055
cs=0x1a2;eip=0x000059; 	T(dx = ss;);	// 80                  mov     dx, ss ;~ 01A2:0059
cs=0x1a2;eip=0x00005b; 	T(SUB(bp, dx));	// 81                  sub     bp, dx ;~ 01A2:005B
cs=0x1a2;eip=0x00005d; 	T(di = seg_offset(dseg););	// 82                  mov     di, seg dseg ;~ 01A2:005D
cs=0x1a2;eip=0x000060; 	T(es = di;);	// 83                  mov     es, di ;~ 01A2:0060
cs=0x1a2;eip=0x000062; 	T(di = word_191e4;);	// 85                  mov     di, es:word_191E4 ;~ 01A2:0062
cs=0x1a2;eip=0x000067; 	T(CMP(di, 0x200));	// 86                  cmp     di, 200h ;~ 01A2:0067
cs=0x1a2;eip=0x00006b; 	J(JNC(loc_10075));	// 87                  jnb     short loc_10075 ;~ 01A2:006B
cs=0x1a2;eip=0x00006d; 	T(di = 0x200;);	// 88                  mov     di, 200h ;~ 01A2:006D
cs=0x1a2;eip=0x000070; 	X(word_191e4 = di;);	// 89                  mov     es:word_191E4, di ;~ 01A2:0070
loc_10075:
	// 4370 
cs=0x1a2;eip=0x000075; 	T(cl = 4;);	// 92                  mov     cl, 4 ;~ 01A2:0075
cs=0x1a2;eip=0x000077; 	T(SHR(di, cl));	// 93                  shr     di, cl ;~ 01A2:0077
cs=0x1a2;eip=0x000079; 	T(INC(di));	// 94                  inc     di ;~ 01A2:0079
cs=0x1a2;eip=0x00007a; 	T(CMP(bp, di));	// 95                  cmp     bp, di ;~ 01A2:007A
cs=0x1a2;eip=0x00007c; 	J(JNC(loc_10081));	// 96                  jnb     short loc_10081 ;~ 01A2:007C
loc_1007e:
	// 4371 
cs=0x1a2;eip=0x00007e; 	J(return _group2(m2c::k___abort, _state););	// 99                  jmp     ___abort ;~ 01A2:007E
loc_10081:
	// 4372 
cs=0x1a2;eip=0x000081; 	T(bx = di;);	// 103                  mov     bx, di ;~ 01A2:0081
cs=0x1a2;eip=0x000083; 	T(ADD(bx, dx));	// 104                  add     bx, dx ;~ 01A2:0083
cs=0x1a2;eip=0x000085; 	X(word_18969 = bx;);	// 105                  mov     word_18969, bx ;~ 01A2:0085
cs=0x1a2;eip=0x000089; 	X(word_1896d = bx;);	// 106                  mov     word_1896D, bx ;~ 01A2:0089
cs=0x1a2;eip=0x00008d; 	T(ax = __segx;);	// 107                  mov     ax, __segx ;~ 01A2:008D
cs=0x1a2;eip=0x000090; 	T(SUB(bx, ax));	// 108                  sub     bx, ax ;~ 01A2:0090
cs=0x1a2;eip=0x000092; 	T(es = ax;);	// 109                  mov     es, ax ;~ 01A2:0092
cs=0x1a2;eip=0x000094; 	T(ah = 0x4A;);	// 111                  mov     ah, 4Ah ; 'J' ;~ 01A2:0094
cs=0x1a2;eip=0x000096; 	X(PUSH(di));	// 112                  push    di ;~ 01A2:0096
cs=0x1a2;eip=0x000097; 	S(_INT(0x21));	// 113                  int     21h             ; DOS - 2+ - ADJUST MEMORY BLOCK SIZE (SETBLOCK) ;~ 01A2:0097
cs=0x1a2;eip=0x000099; 	X(POP(di));	// 116                  pop     di ;~ 01A2:0099
cs=0x1a2;eip=0x00009a; 	T(SHL(di, cl));	// 117                  shl     di, cl ;~ 01A2:009A
cs=0x1a2;eip=0x00009c; 	T(CLI);	// 118                  cli ;~ 01A2:009C
cs=0x1a2;eip=0x00009d; 	S(ss = dx;);	// 119                  mov     ss, dx ;~ 01A2:009D
cs=0x1a2;eip=0x00009f; 	T(sp = di;);	// 120                  mov     sp, di ;~ 01A2:009F
cs=0x1a2;eip=0x0000a1; 	T(STI);	// 121                  sti ;~ 01A2:00A1
cs=0x1a2;eip=0x0000a2; 	T(ax = seg_offset(dseg););	// 122                  mov     ax, seg dseg ;~ 01A2:00A2
cs=0x1a2;eip=0x0000a5; 	T(es = ax;);	// 123                  mov     es, ax ;~ 01A2:00A5
cs=0x1a2;eip=0x0000a7; 	X(word_191e4 = di;);	// 125                  mov     es:word_191E4, di ;~ 01A2:00A7
cs=0x1a2;eip=0x0000ac; 	T(XOR(ax, ax));	// 126                  xor     ax, ax ;~ 01A2:00AC
cs=0x1a2;eip=0x0000ae; 	T(es = __dgrouparb;);	// 127                  mov     es, cs:__DGROUP@ ;~ 01A2:00AE
cs=0x1a2;eip=0x0000b3; 	T(di = 0x9E2;);	// 128                  mov     di, 9E2h ;~ 01A2:00B3
cs=0x1a2;eip=0x0000b6; 	T(cx = 0x0BE8;);	// 129                  mov     cx, 0BE8h ;~ 01A2:00B6
cs=0x1a2;eip=0x0000b9; 	T(SUB(cx, di));	// 130                  sub     cx, di ;~ 01A2:00B9
cs=0x1a2;eip=0x0000bb; 	T(CLD);	// 131                  cld ;~ 01A2:00BB
	// 132                  rep stosb ;~ 01A2:00BC
cs=0x1a2;eip=0x0000bc; 	X(	REP STOSB);	// 132                  rep stosb ;~ 01A2:00BC
cs=0x1a2;eip=0x0000be; 	T(CMP(word_19140, 0x14));	// 133                  cmp     word_19140, 14h ;~ 01A2:00BE
cs=0x1a2;eip=0x0000c3; 	J(JBE(loc_1010c));	// 134                  jbe     short loc_1010C ;~ 01A2:00C3
cs=0x1a2;eip=0x0000c5; 	T(CMP(*(db*)(&word_1895d), 3));	// 135                  cmp     byte ptr word_1895D, 3 ;~ 01A2:00C5
cs=0x1a2;eip=0x0000ca; 	J(JC(loc_1010c));	// 136                  jb      short loc_1010C ;~ 01A2:00CA
cs=0x1a2;eip=0x0000cc; 	J(JA(loc_100d5));	// 137                  ja      short loc_100D5 ;~ 01A2:00CC
cs=0x1a2;eip=0x0000ce; 	T(CMP(*(db*)(((db*)&word_1895d)+1), 0x1E));	// 138                  cmp     byte ptr word_1895D+1, 1Eh ;~ 01A2:00CE
cs=0x1a2;eip=0x0000d3; 	J(JC(loc_1010c));	// 139                  jb      short loc_1010C ;~ 01A2:00D3
loc_100d5:
	// 4373 
cs=0x1a2;eip=0x0000d5; 	T(ax = 0x5801;);	// 142                  mov     ax, 5801h ;~ 01A2:00D5
cs=0x1a2;eip=0x0000d8; 	T(bx = 2;);	// 143                  mov     bx, 2 ;~ 01A2:00D8
cs=0x1a2;eip=0x0000db; 	S(_INT(0x21));	// 144                  int     21h             ; DOS - 3+ - GET/SET MEMORY ALLOCATION STRATEGY ;~ 01A2:00DB
cs=0x1a2;eip=0x0000dd; 	J(JC(loc_10109));	// 146                  jb      short loc_10109 ;~ 01A2:00DD
cs=0x1a2;eip=0x0000df; 	T(ah = 0x67;);	// 147                  mov     ah, 67h ; 'g' ;~ 01A2:00DF
cs=0x1a2;eip=0x0000e1; 	T(bx = word_19140;);	// 148                  mov     bx, word_19140 ;~ 01A2:00E1
cs=0x1a2;eip=0x0000e5; 	S(_INT(0x21));	// 149                  int     21h             ; DOS - 3.3+ - SET HANDLE COUNT ;~ 01A2:00E5
cs=0x1a2;eip=0x0000e7; 	J(JC(loc_10109));	// 151                  jb      short loc_10109 ;~ 01A2:00E7
cs=0x1a2;eip=0x0000e9; 	T(ah = 0x48;);	// 152                  mov     ah, 48h ; 'H' ;~ 01A2:00E9
cs=0x1a2;eip=0x0000eb; 	T(bx = 1;);	// 153                  mov     bx, 1 ;~ 01A2:00EB
cs=0x1a2;eip=0x0000ee; 	S(_INT(0x21));	// 154                  int     21h             ; DOS - 2+ - ALLOCATE MEMORY ;~ 01A2:00EE
cs=0x1a2;eip=0x0000f0; 	J(JC(loc_10109));	// 156                  jb      short loc_10109 ;~ 01A2:00F0
cs=0x1a2;eip=0x0000f2; 	T(INC(ax));	// 157                  inc     ax ;~ 01A2:00F2
cs=0x1a2;eip=0x0000f3; 	X(word_18971 = ax;);	// 158                  mov     word_18971, ax ;~ 01A2:00F3
cs=0x1a2;eip=0x0000f6; 	T(DEC(ax));	// 159                  dec     ax ;~ 01A2:00F6
cs=0x1a2;eip=0x0000f7; 	T(es = ax;);	// 160                  mov     es, ax ;~ 01A2:00F7
cs=0x1a2;eip=0x0000f9; 	T(ah = 0x49;);	// 162                  mov     ah, 49h ;~ 01A2:00F9
cs=0x1a2;eip=0x0000fb; 	S(_INT(0x21));	// 163                  int     21h             ; DOS - 2+ - FREE MEMORY ;~ 01A2:00FB
cs=0x1a2;eip=0x0000fd; 	J(JC(loc_10109));	// 165                  jb      short loc_10109 ;~ 01A2:00FD
cs=0x1a2;eip=0x0000ff; 	T(ax = 0x5801;);	// 166                  mov     ax, 5801h ;~ 01A2:00FF
cs=0x1a2;eip=0x000102; 	T(bx = 0;);	// 167                  mov     bx, 0 ;~ 01A2:0102
cs=0x1a2;eip=0x000105; 	S(_INT(0x21));	// 168                  int     21h             ; DOS - 3+ - GET/SET MEMORY ALLOCATION STRATEGY ;~ 01A2:0105
cs=0x1a2;eip=0x000107; 	J(JNC(loc_1010c));	// 170                  jnb     short loc_1010C ;~ 01A2:0107
loc_10109:
	// 4374 
cs=0x1a2;eip=0x000109; 	J(return _group2(m2c::k___abort, _state););	// 174                  jmp     ___abort ;~ 01A2:0109
loc_1010c:
	// 4375 
cs=0x1a2;eip=0x00010c; 	T(ah = 0;);	// 180                  mov     ah, 0 ;~ 01A2:010C
cs=0x1a2;eip=0x00010e; 	S(_INT(0x1A));	// 181                  int     1Ah             ; CLOCK - GET TIME OF DAY ;~ 01A2:010E
cs=0x1a2;eip=0x000110; 	X(word_18961 = dx;);	// 186                  mov     word_18961, dx ;~ 01A2:0110
cs=0x1a2;eip=0x000114; 	X(word_18963 = cx;);	// 187                  mov     word_18963, cx ;~ 01A2:0114
cs=0x1a2;eip=0x000118; 	T(OR(al, al));	// 188                  or      al, al ;~ 01A2:0118
cs=0x1a2;eip=0x00011a; 	J(JZ(loc_10128));	// 189                  jz      short loc_10128 ;~ 01A2:011A
cs=0x1a2;eip=0x00011c; 	T(ax = 0x40;);	// 190                  mov     ax, 40h ; '@' ;~ 01A2:011C
cs=0x1a2;eip=0x00011f; 	T(es = ax;);	// 191                  mov     es, ax ;~ 01A2:011F
cs=0x1a2;eip=0x000121; 	T(bx = 0x70;);	// 193                  mov     bx, 70h ; 'p' ;~ 01A2:0121
cs=0x1a2;eip=0x000124; 	X(MOV(*(raddr(es,bx)), 1));	// 194                  mov     byte ptr es:[bx], 1 ;~ 01A2:0124
loc_10128:
	// 4376 
cs=0x1a2;eip=0x000128; 	T(XOR(bp, bp));	// 198                  xor     bp, bp ;~ 01A2:0128
cs=0x1a2;eip=0x00012a; 	T(es = __dgrouparb;);	// 199                  mov     es, cs:__DGROUP@ ;~ 01A2:012A
cs=0x1a2;eip=0x00012f; 	T(si = 0x9D0;);	// 200                  mov     si, 9D0h ;~ 01A2:012F
cs=0x1a2;eip=0x000132; 	T(di = 0x9E2;);	// 201                  mov     di, 9E2h ;~ 01A2:0132
cs=0x1a2;eip=0x000135; 	J(CALL(sub_101ed,0));	// 202                  call    sub_101ED ;~ 01A2:0135
cs=0x1a2;eip=0x000138; 	X(PUSH(word_18953));	// 203                  push    word_18953 ;~ 01A2:0138
cs=0x1a2;eip=0x00013c; 	X(PUSH(__envp));	// 204                  push    __envp          ; envp ;~ 01A2:013C
cs=0x1a2;eip=0x000140; 	X(PUSH(word_1894f));	// 205                  push    word_1894F ;~ 01A2:0140
cs=0x1a2;eip=0x000144; 	X(PUSH(__argv));	// 206                  push    __argv          ; argv ;~ 01A2:0144
cs=0x1a2;eip=0x000148; 	X(PUSH(__argc));	// 207                  push    __argc          ; argc ;~ 01A2:0148
cs=0x1a2;eip=0x00014c; 	J(CALLF(___main,0));	// 208                  call    ___main ;~ 01A2:014C
cs=0x1a2;eip=0x000151; 	X(PUSH(ax));	// 209                  push    ax              ; status ;~ 01A2:0151
cs=0x1a2;eip=0x000152; 	T(NOP);	// 210                  nop ;~ 01A2:0152
cs=0x1a2;eip=0x000153; 	X(PUSH(cs));	// 211                  push    cs ;~ 01A2:0153
cs=0x1a2;eip=0x000154; 	J(CALL(___exit_0,0));	// 212                  call    near ptr ___exit_0 ;~ 01A2:0154
____cleanup:
	// 4377 
cs=0x1a2;eip=0x000157; 	T(es = __dgrouparb;);	// 216                  mov     es, cs:__DGROUP@ ;~ 01A2:0157
cs=0x1a2;eip=0x00015c; 	X(PUSH(si));	// 218                  push    si ;~ 01A2:015C
cs=0x1a2;eip=0x00015d; 	X(PUSH(di));	// 219                  push    di ;~ 01A2:015D
cs=0x1a2;eip=0x00015e; 	T(si = 0x9E2;);	// 220                  mov     si, 9E2h ;~ 01A2:015E
cs=0x1a2;eip=0x000161; 	T(di = 0x9E2;);	// 221                  mov     di, 9E2h ;~ 01A2:0161
cs=0x1a2;eip=0x000164; 	J(CALL(sub_10231,0));	// 222                  call    sub_10231 ;~ 01A2:0164
cs=0x1a2;eip=0x000167; 	X(POP(di));	// 223                  pop     di ;~ 01A2:0167
cs=0x1a2;eip=0x000168; 	X(POP(si));	// 224                  pop     si ;~ 01A2:0168
cs=0x1a2;eip=0x000169; 	J(RETF(0));	// 225                  retf ;~ 01A2:0169

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____cleanup: 	goto ____cleanup;
        case m2c::kloc_10037: 	goto loc_10037;
        case m2c::kloc_10075: 	goto loc_10075;
        case m2c::kloc_1007e: 	goto loc_1007e;
        case m2c::kloc_10081: 	goto loc_10081;
        case m2c::kloc_100d5: 	goto loc_100d5;
        case m2c::kloc_10109: 	goto loc_10109;
        case m2c::kloc_1010c: 	goto loc_1010c;
        case m2c::kloc_10128: 	goto loc_10128;
        case m2c::kstart: 	goto start;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____checknull(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____checknull:
    _begin:
cs=0x1a2;eip=0x00016a; 	J(RETF(0));	// 234                  retf ;~ 01A2:016A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____checknull: 	goto ____checknull;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
____terminate:
	// 242 
#undef arg_2
#define arg_2 4
	// 244 arg_2           = byte ptr  4 ;~ 01A2:016B
cs=0x1a2;eip=0x00016b; 	T(bp = sp;);	// 246                  mov     bp, sp ;~ 01A2:016B
cs=0x1a2;eip=0x00016d; 	T(ah = 0x4C;);	// 247                  mov     ah, 4Ch ; 'L' ;~ 01A2:016D
cs=0x1a2;eip=0x00016f; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 248                  mov     al, [bp+arg_2] ;~ 01A2:016F
cs=0x1a2;eip=0x000172; 	S(_INT(0x21));	// 249                  int     21h             ; DOS - 2+ - QUIT WITH EXIT CODE (EXIT) ;~ 01A2:0172
seg000_174_proc:
	// 253 
cs=0x1a2;eip=0x000174; 	T(cx = 0x0E;);	// 253                  mov     cx, 0Eh ;~ 01A2:0174
cs=0x1a2;eip=0x000177; 	T(dx = 0x2F;);	// 254                  mov     dx, 2Fh ; '/' ;~ 01A2:0177
cs=0x1a2;eip=0x00017a; 	J(return _group2(m2c::kloc_10280, _state););	// 255                  jmp     loc_10280 ;~ 01A2:017A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____terminate: 	goto ____terminate;
        case m2c::kseg000_174_proc: 	goto seg000_174_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1017d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1017d:
    _begin:
cs=0x1a2;eip=0x00017d; 	X(PUSH(ds));	// 262                  push    ds ;~ 01A2:017D
cs=0x1a2;eip=0x00017e; 	T(ax = 0x3500;);	// 263                  mov     ax, 3500h ;~ 01A2:017E
cs=0x1a2;eip=0x000181; 	S(_INT(0x21));	// 264                  int     21h             ; DOS - 2+ - GET INTERRUPT VECTOR ;~ 01A2:0181
cs=0x1a2;eip=0x000183; 	X(*(dw*)(&dword_1893b) = bx;);	// 268                  mov     word ptr dword_1893B, bx ;~ 01A2:0183
cs=0x1a2;eip=0x000187; 	X(*(dw*)(((db*)&dword_1893b)+2) = es;);	// 269                  mov     word ptr dword_1893B+2, es ;~ 01A2:0187
cs=0x1a2;eip=0x00018b; 	T(ax = 0x3504;);	// 270                  mov     ax, 3504h ;~ 01A2:018B
cs=0x1a2;eip=0x00018e; 	S(_INT(0x21));	// 271                  int     21h             ; DOS - 2+ - GET INTERRUPT VECTOR ;~ 01A2:018E
cs=0x1a2;eip=0x000190; 	X(*(dw*)(&dword_1893f) = bx;);	// 275                  mov     word ptr dword_1893F, bx ;~ 01A2:0190
cs=0x1a2;eip=0x000194; 	X(*(dw*)(((db*)&dword_1893f)+2) = es;);	// 276                  mov     word ptr dword_1893F+2, es ;~ 01A2:0194
cs=0x1a2;eip=0x000198; 	T(ax = 0x3505;);	// 277                  mov     ax, 3505h ;~ 01A2:0198
cs=0x1a2;eip=0x00019b; 	S(_INT(0x21));	// 278                  int     21h             ; DOS - 2+ - GET INTERRUPT VECTOR ;~ 01A2:019B
cs=0x1a2;eip=0x00019d; 	X(*(dw*)(&dword_18943) = bx;);	// 282                  mov     word ptr dword_18943, bx ;~ 01A2:019D
cs=0x1a2;eip=0x0001a1; 	X(*(dw*)(((db*)&dword_18943)+2) = es;);	// 283                  mov     word ptr dword_18943+2, es ;~ 01A2:01A1
cs=0x1a2;eip=0x0001a5; 	T(ax = 0x3506;);	// 284                  mov     ax, 3506h ;~ 01A2:01A5
cs=0x1a2;eip=0x0001a8; 	S(_INT(0x21));	// 285                  int     21h             ; DOS - 2+ - GET INTERRUPT VECTOR ;~ 01A2:01A8
cs=0x1a2;eip=0x0001aa; 	X(*(dw*)(&dword_18947) = bx;);	// 288                  mov     word ptr dword_18947, bx ;~ 01A2:01AA
cs=0x1a2;eip=0x0001ae; 	X(*(dw*)(((db*)&dword_18947)+2) = es;);	// 289                  mov     word ptr dword_18947+2, es ;~ 01A2:01AE
cs=0x1a2;eip=0x0001b2; 	T(ax = 0x2500;);	// 290                  mov     ax, 2500h ;~ 01A2:01B2
cs=0x1a2;eip=0x0001b5; 	T(dx = cs;);	// 291                  mov     dx, cs ;~ 01A2:01B5
cs=0x1a2;eip=0x0001b7; 	T(ds = dx;);	// 292                  mov     ds, dx ;~ 01A2:01B7
cs=0x1a2;eip=0x0001b9; 	T(dx = 0x174;);	// 294                  mov     dx, 174h ;~ 01A2:01B9
cs=0x1a2;eip=0x0001bc; 	S(_INT(0x21));	// 295                  int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 01A2:01BC
cs=0x1a2;eip=0x0001be; 	X(POP(ds));	// 298                  pop     ds ;~ 01A2:01BE
cs=0x1a2;eip=0x0001bf; 	J(RETN(0));	// 300                  retn ;~ 01A2:01BF

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_1017d: 	goto sub_1017d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____restorezero(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____restorezero:
    _begin:
cs=0x1a2;eip=0x0001c0; 	X(PUSH(ds));	// 309                  push    ds ;~ 01A2:01C0
cs=0x1a2;eip=0x0001c1; 	T(ax = 0x2500;);	// 310                  mov     ax, 2500h ;~ 01A2:01C1
cs=0x1a2;eip=0x0001c4; 	T(LDS(dx, dword_1893b));	// 311                  lds     dx, dword_1893B ;~ 01A2:01C4
cs=0x1a2;eip=0x0001c8; 	S(_INT(0x21));	// 312                  int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 01A2:01C8
cs=0x1a2;eip=0x0001ca; 	X(POP(ds));	// 315                  pop     ds ;~ 01A2:01CA
cs=0x1a2;eip=0x0001cb; 	X(PUSH(ds));	// 316                  push    ds ;~ 01A2:01CB
cs=0x1a2;eip=0x0001cc; 	T(ax = 0x2504;);	// 317                  mov     ax, 2504h ;~ 01A2:01CC
cs=0x1a2;eip=0x0001cf; 	T(LDS(dx, dword_1893f));	// 318                  lds     dx, dword_1893F ;~ 01A2:01CF
cs=0x1a2;eip=0x0001d3; 	S(_INT(0x21));	// 319                  int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 01A2:01D3
cs=0x1a2;eip=0x0001d5; 	X(POP(ds));	// 322                  pop     ds ;~ 01A2:01D5
cs=0x1a2;eip=0x0001d6; 	X(PUSH(ds));	// 323                  push    ds ;~ 01A2:01D6
cs=0x1a2;eip=0x0001d7; 	T(ax = 0x2505;);	// 324                  mov     ax, 2505h ;~ 01A2:01D7
cs=0x1a2;eip=0x0001da; 	T(LDS(dx, dword_18943));	// 325                  lds     dx, dword_18943 ;~ 01A2:01DA
cs=0x1a2;eip=0x0001de; 	S(_INT(0x21));	// 326                  int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 01A2:01DE
cs=0x1a2;eip=0x0001e0; 	X(POP(ds));	// 329                  pop     ds ;~ 01A2:01E0
cs=0x1a2;eip=0x0001e1; 	X(PUSH(ds));	// 330                  push    ds ;~ 01A2:01E1
cs=0x1a2;eip=0x0001e2; 	T(ax = 0x2506;);	// 331                  mov     ax, 2506h ;~ 01A2:01E2
cs=0x1a2;eip=0x0001e5; 	T(LDS(dx, dword_18947));	// 332                  lds     dx, dword_18947 ;~ 01A2:01E5
cs=0x1a2;eip=0x0001e9; 	S(_INT(0x21));	// 333                  int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 01A2:01E9
cs=0x1a2;eip=0x0001eb; 	X(POP(ds));	// 336                  pop     ds ;~ 01A2:01EB
cs=0x1a2;eip=0x0001ec; 	J(RETF(0));	// 337                  retf ;~ 01A2:01EC

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____restorezero: 	goto ____restorezero;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_101ed(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_101ed:
    _begin:
cs=0x1a2;eip=0x0001ed; 	T(ax = 0x100;);	// 347                  mov     ax, 100h ;~ 01A2:01ED
cs=0x1a2;eip=0x0001f0; 	T(dx = di;);	// 348                  mov     dx, di ;~ 01A2:01F0
cs=0x1a2;eip=0x0001f2; 	T(bx = si;);	// 349                  mov     bx, si ;~ 01A2:01F2
loc_101f4:
	// 4378 
cs=0x1a2;eip=0x0001f4; 	T(CMP(bx, di));	// 352                  cmp     bx, di ;~ 01A2:01F4
cs=0x1a2;eip=0x0001f6; 	J(JZ(loc_10211));	// 353                  jz      short loc_10211 ;~ 01A2:01F6
cs=0x1a2;eip=0x0001f8; 	T(CMP(*(raddr(es,bx)), 0x0FF));	// 354                  cmp     byte ptr es:[bx], 0FFh ;~ 01A2:01F8
cs=0x1a2;eip=0x0001fc; 	J(JZ(loc_1020c));	// 355                  jz      short loc_1020C ;~ 01A2:01FC
cs=0x1a2;eip=0x0001fe; 	T(MOV(cl, *(raddr(es,bx+1))));	// 356                  mov     cl, es:[bx+1] ;~ 01A2:01FE
cs=0x1a2;eip=0x000202; 	T(XOR(ch, ch));	// 357                  xor     ch, ch ;~ 01A2:0202
cs=0x1a2;eip=0x000204; 	T(CMP(cx, ax));	// 358                  cmp     cx, ax ;~ 01A2:0204
cs=0x1a2;eip=0x000206; 	J(JNC(loc_1020c));	// 359                  jnb     short loc_1020C ;~ 01A2:0206
cs=0x1a2;eip=0x000208; 	T(ax = cx;);	// 360                  mov     ax, cx ;~ 01A2:0208
cs=0x1a2;eip=0x00020a; 	T(dx = bx;);	// 361                  mov     dx, bx ;~ 01A2:020A
loc_1020c:
	// 4379 
cs=0x1a2;eip=0x00020c; 	T(ADD(bx, 6));	// 365                  add     bx, 6 ;~ 01A2:020C
cs=0x1a2;eip=0x00020f; 	J(JMP(loc_101f4));	// 366                  jmp     short loc_101F4 ;~ 01A2:020F
loc_10211:
	// 4380 
cs=0x1a2;eip=0x000211; 	T(CMP(dx, di));	// 370                  cmp     dx, di ;~ 01A2:0211
cs=0x1a2;eip=0x000213; 	J(JZ(locret_10230));	// 371                  jz      short locret_10230 ;~ 01A2:0213
cs=0x1a2;eip=0x000215; 	T(bx = dx;);	// 372                  mov     bx, dx ;~ 01A2:0215
cs=0x1a2;eip=0x000217; 	T(CMP(*(raddr(es,bx)), 0));	// 373                  cmp     byte ptr es:[bx], 0 ;~ 01A2:0217
cs=0x1a2;eip=0x00021b; 	X(MOV(*(raddr(es,bx)), 0x0FF));	// 374                  mov     byte ptr es:[bx], 0FFh ;~ 01A2:021B
cs=0x1a2;eip=0x00021f; 	X(PUSH(es));	// 375                  push    es ;~ 01A2:021F
cs=0x1a2;eip=0x000220; 	J(JZ(loc_10229));	// 376                  jz      short loc_10229 ;~ 01A2:0220
cs=0x1a2;eip=0x000222; 	J(CALLF(__dispatch_call,*(dd*)(raddr(es,bx+2))));	// 377                  call    dword ptr es:[bx+2] ;~ 01A2:0222
cs=0x1a2;eip=0x000226; 	X(POP(es));	// 378                  pop     es ;~ 01A2:0226
cs=0x1a2;eip=0x000227; 	J(JMP(sub_101ed));	// 380                  jmp     short sub_101ED ;~ 01A2:0227
loc_10229:
	// 4381 
cs=0x1a2;eip=0x000229; 	J(CALL(__dispatch_call,*(dw*)(raddr(es,bx+2))));	// 385                  call    word ptr es:[bx+2] ;~ 01A2:0229
cs=0x1a2;eip=0x00022d; 	X(POP(es));	// 386                  pop     es ;~ 01A2:022D
cs=0x1a2;eip=0x00022e; 	J(JMP(sub_101ed));	// 387                  jmp     short sub_101ED ;~ 01A2:022E
locret_10230:
	// 4382 
cs=0x1a2;eip=0x000230; 	J(RETN(0));	// 391                  retn ;~ 01A2:0230

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_101f4: 	goto loc_101f4;
        case m2c::kloc_1020c: 	goto loc_1020c;
        case m2c::kloc_10211: 	goto loc_10211;
        case m2c::kloc_10229: 	goto loc_10229;
        case m2c::klocret_10230: 	goto locret_10230;
        case m2c::ksub_101ed: 	goto sub_101ed;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_10231(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_10231:
    _begin:
cs=0x1a2;eip=0x000231; 	T(ah = 0;);	// 400                  mov     ah, 0 ;~ 01A2:0231
cs=0x1a2;eip=0x000233; 	T(dx = di;);	// 401                  mov     dx, di ;~ 01A2:0233
cs=0x1a2;eip=0x000235; 	T(bx = si;);	// 402                  mov     bx, si ;~ 01A2:0235
loc_10237:
	// 4383 
cs=0x1a2;eip=0x000237; 	T(CMP(bx, di));	// 405                  cmp     bx, di ;~ 01A2:0237
cs=0x1a2;eip=0x000239; 	J(JZ(loc_10252));	// 406                  jz      short loc_10252 ;~ 01A2:0239
cs=0x1a2;eip=0x00023b; 	T(CMP(*(raddr(es,bx)), 0x0FF));	// 407                  cmp     byte ptr es:[bx], 0FFh ;~ 01A2:023B
cs=0x1a2;eip=0x00023f; 	J(JZ(loc_1024d));	// 408                  jz      short loc_1024D ;~ 01A2:023F
cs=0x1a2;eip=0x000241; 	T(CMP(*(raddr(es,bx+1)), ah));	// 409                  cmp     es:[bx+1], ah ;~ 01A2:0241
cs=0x1a2;eip=0x000245; 	J(JC(loc_1024d));	// 410                  jb      short loc_1024D ;~ 01A2:0245
cs=0x1a2;eip=0x000247; 	T(MOV(ah, *(raddr(es,bx+1))));	// 411                  mov     ah, es:[bx+1] ;~ 01A2:0247
cs=0x1a2;eip=0x00024b; 	T(dx = bx;);	// 412                  mov     dx, bx ;~ 01A2:024B
loc_1024d:
	// 4384 
cs=0x1a2;eip=0x00024d; 	T(ADD(bx, 6));	// 416                  add     bx, 6 ;~ 01A2:024D
cs=0x1a2;eip=0x000250; 	J(JMP(loc_10237));	// 417                  jmp     short loc_10237 ;~ 01A2:0250
loc_10252:
	// 4385 
cs=0x1a2;eip=0x000252; 	T(CMP(dx, di));	// 421                  cmp     dx, di ;~ 01A2:0252
cs=0x1a2;eip=0x000254; 	J(JZ(locret_10271));	// 422                  jz      short locret_10271 ;~ 01A2:0254
cs=0x1a2;eip=0x000256; 	T(bx = dx;);	// 423                  mov     bx, dx ;~ 01A2:0256
cs=0x1a2;eip=0x000258; 	T(CMP(*(raddr(es,bx)), 0));	// 424                  cmp     byte ptr es:[bx], 0 ;~ 01A2:0258
cs=0x1a2;eip=0x00025c; 	X(MOV(*(raddr(es,bx)), 0x0FF));	// 425                  mov     byte ptr es:[bx], 0FFh ;~ 01A2:025C
cs=0x1a2;eip=0x000260; 	X(PUSH(es));	// 426                  push    es ;~ 01A2:0260
cs=0x1a2;eip=0x000261; 	J(JZ(loc_1026a));	// 427                  jz      short loc_1026A ;~ 01A2:0261
cs=0x1a2;eip=0x000263; 	J(CALLF(__dispatch_call,*(dd*)(raddr(es,bx+2))));	// 428                  call    dword ptr es:[bx+2] ;~ 01A2:0263
cs=0x1a2;eip=0x000267; 	X(POP(es));	// 429                  pop     es ;~ 01A2:0267
cs=0x1a2;eip=0x000268; 	J(JMP(sub_10231));	// 431                  jmp     short sub_10231 ;~ 01A2:0268
loc_1026a:
	// 4386 
cs=0x1a2;eip=0x00026a; 	J(CALL(__dispatch_call,*(dw*)(raddr(es,bx+2))));	// 435                  call    word ptr es:[bx+2] ;~ 01A2:026A
cs=0x1a2;eip=0x00026e; 	X(POP(es));	// 436                  pop     es ;~ 01A2:026E
cs=0x1a2;eip=0x00026f; 	J(JMP(sub_10231));	// 437                  jmp     short sub_10231 ;~ 01A2:026F
locret_10271:
	// 4387 
cs=0x1a2;eip=0x000271; 	J(RETN(0));	// 441                  retn ;~ 01A2:0271

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_10237: 	goto loc_10237;
        case m2c::kloc_1024d: 	goto loc_1024d;
        case m2c::kloc_10252: 	goto loc_10252;
        case m2c::kloc_1026a: 	goto loc_1026a;
        case m2c::klocret_10271: 	goto locret_10271;
        case m2c::ksub_10231: 	goto sub_10231;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_10272(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_10272:
    _begin:
cs=0x1a2;eip=0x000272; 	T(ah = 0x40;);	// 449                  mov     ah, 40h ; '@' ;~ 01A2:0272
cs=0x1a2;eip=0x000274; 	T(bx = 2;);	// 450                  mov     bx, 2 ;~ 01A2:0274
cs=0x1a2;eip=0x000277; 	S(_INT(0x21));	// 451                  int     21h             ; DOS - 2+ - WRITE TO FILE WITH HANDLE ;~ 01A2:0277
cs=0x1a2;eip=0x000279; 	J(RETN(0));	// 453                  retn ;~ 01A2:0279

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_10272: 	goto sub_10272;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group2:
    _begin:
seg000_27a_proc:
	// 462 
___abort:
	// 4388 
cs=0x1a2;eip=0x00027a; 	T(cx = 0x1E;);	// 464                  mov     cx, 1Eh ;~ 01A2:027A
cs=0x1a2;eip=0x00027d; 	T(dx = offset(dseg,__unk_1891d););	// 465                  mov     dx, offset __unk_1891D ;~ 01A2:027D
loc_10280:
	// 4389 
cs=0x1a2;eip=0x000280; 	T(ds = __dgrouparb;);	// 468                  mov     ds, cs:__DGROUP@ ;~ 01A2:0280
cs=0x1a2;eip=0x000285; 	J(CALL(sub_10272,0));	// 469                  call    sub_10272 ;~ 01A2:0285
cs=0x1a2;eip=0x000288; 	T(ax = 3;);	// 470                  mov     ax, 3 ;~ 01A2:0288
cs=0x1a2;eip=0x00028b; 	X(PUSH(ax));	// 471                  push    ax              ; status ;~ 01A2:028B
cs=0x1a2;eip=0x00028c; 	T(NOP);	// 472                  nop ;~ 01A2:028C
cs=0x1a2;eip=0x00028d; 	X(PUSH(cs));	// 473                  push    cs ;~ 01A2:028D
cs=0x1a2;eip=0x00028e; 	J(CALL(____exit,0));	// 474                  call    near ptr ____exit ;~ 01A2:028E
____mmodel:
	// 4390 
cs=0x1a2;eip=0x000293; 	T(ADD(al, 0x0C0));	// 482                  add     al, 0C0h ; '
___atexit:
	// 489 
#undef func
#define func 6
	// 491 func            = dword ptr  6 ;~ 01A2:0295
cs=0x1a2;eip=0x000295; 	X(PUSH(bp));	// 493                  push    bp ;~ 01A2:0295
cs=0x1a2;eip=0x000296; 	T(bp = sp;);	// 494                  mov     bp, sp ;~ 01A2:0296
cs=0x1a2;eip=0x000298; 	T(CMP(*(dw*)(&byte_18ea0), 0x20));	// 495                  cmp     word ptr byte_18EA0, 20h ; ' ' ;~ 01A2:0298
cs=0x1a2;eip=0x00029d; 	J(JNZ(loc_102a4));	// 496                  jnz     short loc_102A4 ;~ 01A2:029D
cs=0x1a2;eip=0x00029f; 	T(ax = 1;);	// 497                  mov     ax, 1 ;~ 01A2:029F
cs=0x1a2;eip=0x0002a2; 	J(JMP(loc_102c0));	// 498                  jmp     short loc_102C0 ;~ 01A2:02A2
loc_102a4:
	// 4391 
cs=0x1a2;eip=0x0002a4; 	T(bx = *(dw*)(&byte_18ea0););	// 502                  mov     bx, word ptr byte_18EA0 ;~ 01A2:02A4
cs=0x1a2;eip=0x0002a8; 	T(cl = 2;);	// 503                  mov     cl, 2 ;~ 01A2:02A8
cs=0x1a2;eip=0x0002aa; 	T(SHL(bx, cl));	// 504                  shl     bx, cl ;~ 01A2:02AA
cs=0x1a2;eip=0x0002ac; 	T(MOV(ax, *(dw*)(raddr(ss,bp+func+2))));	// 505                  mov     ax, word ptr [bp+func+2] ;~ 01A2:02AC
cs=0x1a2;eip=0x0002af; 	T(MOV(dx, *(dw*)(raddr(ss,bp+func))));	// 506                  mov     dx, word ptr [bp+func] ;~ 01A2:02AF
cs=0x1a2;eip=0x0002b2; 	X(MOV(*(dw*)(raddr(ds,bx+0x0AB0)), ax));	// 507                  mov     [bx+0AB0h], ax ;~ 01A2:02B2
cs=0x1a2;eip=0x0002b6; 	X(MOV(*(dw*)(raddr(ds,bx+0x0AAE)), dx));	// 508                  mov     [bx+0AAEh], dx ;~ 01A2:02B6
cs=0x1a2;eip=0x0002ba; 	X(INC(*(dw*)(&byte_18ea0)));	// 509                  inc     word ptr byte_18EA0 ;~ 01A2:02BA
cs=0x1a2;eip=0x0002be; 	T(XOR(ax, ax));	// 510                  xor     ax, ax ;~ 01A2:02BE
loc_102c0:
	// 4392 
cs=0x1a2;eip=0x0002c0; 	X(POP(bp));	// 513                  pop     bp ;~ 01A2:02C0
cs=0x1a2;eip=0x0002c1; 	J(RETF(0));	// 514                  retf ;~ 01A2:02C1

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____mmodel: 	goto ____mmodel;
        case m2c::k___abort: 	goto ___abort;
        case m2c::k___atexit: 	goto ___atexit;
        case m2c::kloc_10280: 	goto loc_10280;
        case m2c::kloc_102a4: 	goto loc_102a4;
        case m2c::kloc_102c0: 	goto loc_102c0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____doscmd(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____doscmd:
    _begin:
#undef dest
#define dest -0x0A
	// 524 dest            = dword ptr -0Ah ;~ 01A2:02C2
#undef size1
#define size1 -6
	// 525 size1           = word ptr -6 ;~ 01A2:02C2
#undef var_4
#define var_4 -4
	// 526 var_4           = dword ptr -4 ;~ 01A2:02C2
#undef arg_0
#define arg_0 4
	// 527 arg_0           = word ptr  4 ;~ 01A2:02C2
#undef arg_2
#define arg_2 6
	// 528 arg_2           = word ptr  6 ;~ 01A2:02C2
cs=0x1a2;eip=0x0002c2; 	X(PUSH(bp));	// 530                  push    bp ;~ 01A2:02C2
cs=0x1a2;eip=0x0002c3; 	T(bp = sp;);	// 531                  mov     bp, sp ;~ 01A2:02C3
cs=0x1a2;eip=0x0002c5; 	T(SUB(sp, 0x0A));	// 532                  sub     sp, 0Ah ;~ 01A2:02C5
cs=0x1a2;eip=0x0002c8; 	X(MOV(*(dw*)(raddr(ss,bp+size1)), 1));	// 533                  mov     [bp+size1], 1 ;~ 01A2:02C8
cs=0x1a2;eip=0x0002cd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 534                  mov     ax, [bp+arg_2] ;~ 01A2:02CD
cs=0x1a2;eip=0x0002d0; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_0))));	// 535                  mov     dx, [bp+arg_0] ;~ 01A2:02D0
cs=0x1a2;eip=0x0002d3; 	X(MOV(*(dw*)(raddr(ss,bp+var_4+2)), ax));	// 536                  mov     word ptr [bp+var_4+2], ax ;~ 01A2:02D3
cs=0x1a2;eip=0x0002d6; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 537                  mov     word ptr [bp+var_4], dx ;~ 01A2:02D6
cs=0x1a2;eip=0x0002d9; 	T(OR(dx, ax));	// 538                  or      dx, ax ;~ 01A2:02D9
cs=0x1a2;eip=0x0002db; 	J(JZ(loc_1032c));	// 539                  jz      short loc_1032C ;~ 01A2:02DB
cs=0x1a2;eip=0x0002dd; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 540                  les     bx, [bp+var_4] ;~ 01A2:02DD
cs=0x1a2;eip=0x0002e0; 	X(ADD(*(dw*)(raddr(ss,bp+var_4)), 4));	// 541                  add     word ptr [bp+var_4], 4 ;~ 01A2:02E0
cs=0x1a2;eip=0x0002e4; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 542                  mov     ax, es:[bx] ;~ 01A2:02E4
cs=0x1a2;eip=0x0002e7; 	T(OR(ax, *(dw*)(raddr(es,bx+2))));	// 543                  or      ax, es:[bx+2] ;~ 01A2:02E7
cs=0x1a2;eip=0x0002eb; 	J(JZ(loc_1032c));	// 544                  jz      short loc_1032C ;~ 01A2:02EB
cs=0x1a2;eip=0x0002ed; 	J(JMP(loc_10317));	// 545                  jmp     short loc_10317 ;~ 01A2:02ED
loc_102ef:
	// 4393 
cs=0x1a2;eip=0x0002ef; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 549                  les     bx, [bp+var_4] ;~ 01A2:02EF
cs=0x1a2;eip=0x0002f2; 	X(ADD(*(dw*)(raddr(ss,bp+var_4)), 4));	// 550                  add     word ptr [bp+var_4], 4 ;~ 01A2:02F2
cs=0x1a2;eip=0x0002f6; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 551                  push    word ptr es:[bx+2] ;~ 01A2:02F6
cs=0x1a2;eip=0x0002fa; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 552                  push    word ptr es:[bx] ; s ;~ 01A2:02FA
cs=0x1a2;eip=0x0002fd; 	T(NOP);	// 553                  nop ;~ 01A2:02FD
cs=0x1a2;eip=0x0002fe; 	X(PUSH(cs));	// 554                  push    cs ;~ 01A2:02FE
cs=0x1a2;eip=0x0002ff; 	J(CALL(___strlen,0));	// 555                  call    near ptr ___strlen ;~ 01A2:02FF
cs=0x1a2;eip=0x000302; 	X(POP(cx));	// 556                  pop     cx ;~ 01A2:0302
cs=0x1a2;eip=0x000303; 	X(POP(cx));	// 557                  pop     cx ;~ 01A2:0303
cs=0x1a2;eip=0x000304; 	T(INC(ax));	// 558                  inc     ax ;~ 01A2:0304
cs=0x1a2;eip=0x000305; 	T(dx = ax;);	// 559                  mov     dx, ax ;~ 01A2:0305
cs=0x1a2;eip=0x000307; 	T(MOV(ax, *(dw*)(raddr(ss,bp+size1))));	// 560                  mov     ax, [bp+size1] ;~ 01A2:0307
cs=0x1a2;eip=0x00030a; 	T(ADD(ax, dx));	// 561                  add     ax, dx ;~ 01A2:030A
cs=0x1a2;eip=0x00030c; 	T(CMP(ax, 0x7F));	// 562                  cmp     ax, 7Fh ;~ 01A2:030C
cs=0x1a2;eip=0x00030f; 	J(JBE(loc_10314));	// 563                  jbe     short loc_10314 ;~ 01A2:030F
cs=0x1a2;eip=0x000311; 	J(JMP(loc_103bb));	// 564                  jmp     loc_103BB ;~ 01A2:0311
loc_10314:
	// 4394 
cs=0x1a2;eip=0x000314; 	X(ADD(*(dw*)(raddr(ss,bp+size1)), dx));	// 568                  add     [bp+size1], dx ;~ 01A2:0314
loc_10317:
	// 4395 
cs=0x1a2;eip=0x000317; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 571                  les     bx, [bp+var_4] ;~ 01A2:0317
cs=0x1a2;eip=0x00031a; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 572                  mov     ax, es:[bx] ;~ 01A2:031A
cs=0x1a2;eip=0x00031d; 	T(OR(ax, *(dw*)(raddr(es,bx+2))));	// 573                  or      ax, es:[bx+2] ;~ 01A2:031D
cs=0x1a2;eip=0x000321; 	J(JZ(loc_1032c));	// 574                  jz      short loc_1032C ;~ 01A2:0321
cs=0x1a2;eip=0x000323; 	T(LES(bx, *(dw*)(raddr(es,bx))));	// 575                  les     bx, es:[bx] ;~ 01A2:0323
cs=0x1a2;eip=0x000326; 	T(CMP(*(raddr(es,bx)), 0));	// 576                  cmp     byte ptr es:[bx], 0 ;~ 01A2:0326
cs=0x1a2;eip=0x00032a; 	J(JNZ(loc_102ef));	// 577                  jnz     short loc_102EF ;~ 01A2:032A
loc_1032c:
	// 4396 
cs=0x1a2;eip=0x00032c; 	X(INC(*(dw*)(raddr(ss,bp+size1))));	// 581                  inc     [bp+size1] ;~ 01A2:032C
cs=0x1a2;eip=0x00032f; 	X(PUSH(*(dw*)(raddr(ss,bp+size1))));	// 582                  push    [bp+size1]      ; size ;~ 01A2:032F
cs=0x1a2;eip=0x000332; 	T(NOP);	// 583                  nop ;~ 01A2:0332
cs=0x1a2;eip=0x000333; 	X(PUSH(cs));	// 584                  push    cs ;~ 01A2:0333
cs=0x1a2;eip=0x000334; 	J(CALL(___malloc,0));	// 585                  call    near ptr ___malloc ;~ 01A2:0334
cs=0x1a2;eip=0x000337; 	X(POP(cx));	// 586                  pop     cx ;~ 01A2:0337
cs=0x1a2;eip=0x000338; 	X(MOV(*(dw*)(raddr(ss,bp+dest+2)), dx));	// 587                  mov     word ptr [bp+dest+2], dx ;~ 01A2:0338
cs=0x1a2;eip=0x00033b; 	X(MOV(*(dw*)(raddr(ss,bp+dest)), ax));	// 588                  mov     word ptr [bp+dest], ax ;~ 01A2:033B
cs=0x1a2;eip=0x00033e; 	T(OR(ax, dx));	// 589                  or      ax, dx ;~ 01A2:033E
cs=0x1a2;eip=0x000340; 	J(JZ(loc_103bb));	// 590                  jz      short loc_103BB ;~ 01A2:0340
cs=0x1a2;eip=0x000342; 	T(LES(bx, *(dd*)(raddr(ss,bp+dest))));	// 591                  les     bx, [bp+dest] ;~ 01A2:0342
cs=0x1a2;eip=0x000345; 	X(INC(*(dw*)(raddr(ss,bp+dest))));	// 592                  inc     word ptr [bp+dest] ;~ 01A2:0345
cs=0x1a2;eip=0x000348; 	T(MOV(al, *(raddr(ss,bp+size1))));	// 593                  mov     al, byte ptr [bp+size1] ;~ 01A2:0348
cs=0x1a2;eip=0x00034b; 	T(ADD(al, 0x0FE));	// 594                  add     al, 0FEh ; '
cs=0x1a2;eip=0x00034d; 	X(MOV(*(raddr(es,bx)), al));	// 595                  mov     es:[bx], al ;~ 01A2:034D
cs=0x1a2;eip=0x000350; 	T(OR(al, al));	// 596                  or      al, al ;~ 01A2:0350
cs=0x1a2;eip=0x000352; 	J(JZ(loc_103a6));	// 597                  jz      short loc_103A6 ;~ 01A2:0352
cs=0x1a2;eip=0x000354; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 598                  mov     ax, [bp+arg_2] ;~ 01A2:0354
cs=0x1a2;eip=0x000357; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_0))));	// 599                  mov     dx, [bp+arg_0] ;~ 01A2:0357
cs=0x1a2;eip=0x00035a; 	T(ADD(dx, 4));	// 600                  add     dx, 4 ;~ 01A2:035A
cs=0x1a2;eip=0x00035d; 	X(MOV(*(dw*)(raddr(ss,bp+var_4+2)), ax));	// 601                  mov     word ptr [bp+var_4+2], ax ;~ 01A2:035D
cs=0x1a2;eip=0x000360; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 602                  mov     word ptr [bp+var_4], dx ;~ 01A2:0360
cs=0x1a2;eip=0x000363; 	J(JMP(loc_10391));	// 603                  jmp     short loc_10391 ;~ 01A2:0363
loc_10365:
	// 4397 
cs=0x1a2;eip=0x000365; 	T(LES(bx, *(dd*)(raddr(ss,bp+dest))));	// 607                  les     bx, [bp+dest] ;~ 01A2:0365
cs=0x1a2;eip=0x000368; 	X(MOV(*(raddr(es,bx)), 0x20));	// 608                  mov     byte ptr es:[bx], 20h ; ' ' ;~ 01A2:0368
cs=0x1a2;eip=0x00036c; 	X(INC(*(dw*)(raddr(ss,bp+dest))));	// 609                  inc     word ptr [bp+dest] ;~ 01A2:036C
cs=0x1a2;eip=0x00036f; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 610                  les     bx, [bp+var_4] ;~ 01A2:036F
cs=0x1a2;eip=0x000372; 	X(ADD(*(dw*)(raddr(ss,bp+var_4)), 4));	// 611                  add     word ptr [bp+var_4], 4 ;~ 01A2:0372
cs=0x1a2;eip=0x000376; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 612                  push    word ptr es:[bx+2] ;~ 01A2:0376
cs=0x1a2;eip=0x00037a; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 613                  push    word ptr es:[bx] ; src ;~ 01A2:037A
cs=0x1a2;eip=0x00037d; 	X(PUSH(*(dw*)(raddr(ss,bp+dest+2))));	// 614                  push    word ptr [bp+dest+2] ;~ 01A2:037D
cs=0x1a2;eip=0x000380; 	X(PUSH(*(dw*)(raddr(ss,bp+dest))));	// 615                  push    word ptr [bp+dest] ; dest ;~ 01A2:0380
cs=0x1a2;eip=0x000383; 	T(NOP);	// 616                  nop ;~ 01A2:0383
cs=0x1a2;eip=0x000384; 	X(PUSH(cs));	// 617                  push    cs ;~ 01A2:0384
cs=0x1a2;eip=0x000385; 	J(CALL(___stpcpy,0));	// 618                  call    near ptr ___stpcpy ;~ 01A2:0385
cs=0x1a2;eip=0x000388; 	T(ADD(sp, 8));	// 619                  add     sp, 8 ;~ 01A2:0388
cs=0x1a2;eip=0x00038b; 	X(MOV(*(dw*)(raddr(ss,bp+dest+2)), dx));	// 620                  mov     word ptr [bp+dest+2], dx ;~ 01A2:038B
cs=0x1a2;eip=0x00038e; 	X(MOV(*(dw*)(raddr(ss,bp+dest)), ax));	// 621                  mov     word ptr [bp+dest], ax ;~ 01A2:038E
loc_10391:
	// 4398 
cs=0x1a2;eip=0x000391; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 624                  les     bx, [bp+var_4] ;~ 01A2:0391
cs=0x1a2;eip=0x000394; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 625                  mov     ax, es:[bx] ;~ 01A2:0394
cs=0x1a2;eip=0x000397; 	T(OR(ax, *(dw*)(raddr(es,bx+2))));	// 626                  or      ax, es:[bx+2] ;~ 01A2:0397
cs=0x1a2;eip=0x00039b; 	J(JZ(loc_103a6));	// 627                  jz      short loc_103A6 ;~ 01A2:039B
cs=0x1a2;eip=0x00039d; 	T(LES(bx, *(dw*)(raddr(es,bx))));	// 628                  les     bx, es:[bx] ;~ 01A2:039D
cs=0x1a2;eip=0x0003a0; 	T(CMP(*(raddr(es,bx)), 0));	// 629                  cmp     byte ptr es:[bx], 0 ;~ 01A2:03A0
cs=0x1a2;eip=0x0003a4; 	J(JNZ(loc_10365));	// 630                  jnz     short loc_10365 ;~ 01A2:03A4
loc_103a6:
	// 4399 
cs=0x1a2;eip=0x0003a6; 	T(LES(bx, *(dd*)(raddr(ss,bp+dest))));	// 634                  les     bx, [bp+dest] ;~ 01A2:03A6
cs=0x1a2;eip=0x0003a9; 	X(MOV(*(raddr(es,bx)), 0x0D));	// 635                  mov     byte ptr es:[bx], 0Dh ;~ 01A2:03A9
cs=0x1a2;eip=0x0003ad; 	X(INC(*(dw*)(raddr(ss,bp+dest))));	// 636                  inc     word ptr [bp+dest] ;~ 01A2:03AD
cs=0x1a2;eip=0x0003b0; 	T(MOV(dx, *(dw*)(raddr(ss,bp+dest+2))));	// 637                  mov     dx, word ptr [bp+dest+2] ;~ 01A2:03B0
cs=0x1a2;eip=0x0003b3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+dest))));	// 638                  mov     ax, word ptr [bp+dest] ;~ 01A2:03B3
cs=0x1a2;eip=0x0003b6; 	T(SUB(ax, *(dw*)(raddr(ss,bp+size1))));	// 639                  sub     ax, [bp+size1] ;~ 01A2:03B6
cs=0x1a2;eip=0x0003b9; 	J(JMP(loc_103bf));	// 640                  jmp     short loc_103BF ;~ 01A2:03B9
loc_103bb:
	// 4400 
cs=0x1a2;eip=0x0003bb; 	T(XOR(dx, dx));	// 645                  xor     dx, dx ;~ 01A2:03BB
cs=0x1a2;eip=0x0003bd; 	T(XOR(ax, ax));	// 646                  xor     ax, ax ;~ 01A2:03BD
loc_103bf:
	// 4401 
cs=0x1a2;eip=0x0003bf; 	T(sp = bp;);	// 649                  mov     sp, bp ;~ 01A2:03BF
cs=0x1a2;eip=0x0003c1; 	X(POP(bp));	// 650                  pop     bp ;~ 01A2:03C1
cs=0x1a2;eip=0x0003c2; 	J(RETN(4));	// 651                  retn    4 ;~ 01A2:03C2

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____doscmd: 	goto ____doscmd;
        case m2c::kloc_102ef: 	goto loc_102ef;
        case m2c::kloc_10314: 	goto loc_10314;
        case m2c::kloc_10317: 	goto loc_10317;
        case m2c::kloc_1032c: 	goto loc_1032c;
        case m2c::kloc_10365: 	goto loc_10365;
        case m2c::kloc_10391: 	goto loc_10391;
        case m2c::kloc_103a6: 	goto loc_103a6;
        case m2c::kloc_103bb: 	goto loc_103bb;
        case m2c::kloc_103bf: 	goto loc_103bf;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____dosenv(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____dosenv:
    _begin:
#undef dest
#define dest -8
	// 662 dest            = dword ptr -8 ;~ 01A2:03C5
#undef var_4
#define var_4 -4
	// 663 var_4           = dword ptr -4 ;~ 01A2:03C5
#undef arg_0
#define arg_0 4
	// 664 arg_0           = dword ptr  4 ;~ 01A2:03C5
#undef src
#define src 8
	// 665 src             = dword ptr  8 ;~ 01A2:03C5
#undef arg_8
#define arg_8 0x0C
	// 666 arg_8           = word ptr  0Ch ;~ 01A2:03C5
#undef arg_a
#define arg_a 0x0E
	// 667 arg_A           = word ptr  0Eh ;~ 01A2:03C5
cs=0x1a2;eip=0x0003c5; 	X(PUSH(bp));	// 669                  push    bp ;~ 01A2:03C5
cs=0x1a2;eip=0x0003c6; 	T(bp = sp;);	// 670                  mov     bp, sp ;~ 01A2:03C6
cs=0x1a2;eip=0x0003c8; 	T(SUB(sp, 8));	// 671                  sub     sp, 8 ;~ 01A2:03C8
cs=0x1a2;eip=0x0003cb; 	X(PUSH(si));	// 672                  push    si ;~ 01A2:03CB
cs=0x1a2;eip=0x0003cc; 	T(si = 1;);	// 673                  mov     si, 1 ;~ 01A2:03CC
cs=0x1a2;eip=0x0003cf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 674                  mov     ax, [bp+arg_A] ;~ 01A2:03CF
cs=0x1a2;eip=0x0003d2; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_8))));	// 675                  mov     dx, [bp+arg_8] ;~ 01A2:03D2
cs=0x1a2;eip=0x0003d5; 	X(MOV(*(dw*)(raddr(ss,bp+var_4+2)), ax));	// 676                  mov     word ptr [bp+var_4+2], ax ;~ 01A2:03D5
cs=0x1a2;eip=0x0003d8; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 677                  mov     word ptr [bp+var_4], dx ;~ 01A2:03D8
cs=0x1a2;eip=0x0003db; 	T(OR(dx, ax));	// 678                  or      dx, ax ;~ 01A2:03DB
cs=0x1a2;eip=0x0003dd; 	J(JZ(loc_10410));	// 679                  jz      short loc_10410 ;~ 01A2:03DD
cs=0x1a2;eip=0x0003df; 	T(XOR(si, si));	// 680                  xor     si, si ;~ 01A2:03DF
cs=0x1a2;eip=0x0003e1; 	J(JMP(loc_103fb));	// 681                  jmp     short loc_103FB ;~ 01A2:03E1
loc_103e3:
	// 4402 
cs=0x1a2;eip=0x0003e3; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 685                  les     bx, [bp+var_4] ;~ 01A2:03E3
cs=0x1a2;eip=0x0003e6; 	X(ADD(*(dw*)(raddr(ss,bp+var_4)), 4));	// 686                  add     word ptr [bp+var_4], 4 ;~ 01A2:03E6
cs=0x1a2;eip=0x0003ea; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 687                  push    word ptr es:[bx+2] ;~ 01A2:03EA
cs=0x1a2;eip=0x0003ee; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 688                  push    word ptr es:[bx] ; s ;~ 01A2:03EE
cs=0x1a2;eip=0x0003f1; 	T(NOP);	// 689                  nop ;~ 01A2:03F1
cs=0x1a2;eip=0x0003f2; 	X(PUSH(cs));	// 690                  push    cs ;~ 01A2:03F2
cs=0x1a2;eip=0x0003f3; 	J(CALL(___strlen,0));	// 691                  call    near ptr ___strlen ;~ 01A2:03F3
cs=0x1a2;eip=0x0003f6; 	X(POP(cx));	// 692                  pop     cx ;~ 01A2:03F6
cs=0x1a2;eip=0x0003f7; 	X(POP(cx));	// 693                  pop     cx ;~ 01A2:03F7
cs=0x1a2;eip=0x0003f8; 	T(INC(ax));	// 694                  inc     ax ;~ 01A2:03F8
cs=0x1a2;eip=0x0003f9; 	T(ADD(si, ax));	// 695                  add     si, ax ;~ 01A2:03F9
loc_103fb:
	// 4403 
cs=0x1a2;eip=0x0003fb; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 698                  les     bx, [bp+var_4] ;~ 01A2:03FB
cs=0x1a2;eip=0x0003fe; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 699                  mov     ax, es:[bx] ;~ 01A2:03FE
cs=0x1a2;eip=0x000401; 	T(OR(ax, *(dw*)(raddr(es,bx+2))));	// 700                  or      ax, es:[bx+2] ;~ 01A2:0401
cs=0x1a2;eip=0x000405; 	J(JZ(loc_10410));	// 701                  jz      short loc_10410 ;~ 01A2:0405
cs=0x1a2;eip=0x000407; 	T(LES(bx, *(dw*)(raddr(es,bx))));	// 702                  les     bx, es:[bx] ;~ 01A2:0407
cs=0x1a2;eip=0x00040a; 	T(CMP(*(raddr(es,bx)), 0));	// 703                  cmp     byte ptr es:[bx], 0 ;~ 01A2:040A
cs=0x1a2;eip=0x00040e; 	J(JNZ(loc_103e3));	// 704                  jnz     short loc_103E3 ;~ 01A2:040E
loc_10410:
	// 4404 
cs=0x1a2;eip=0x000410; 	T(INC(si));	// 708                  inc     si ;~ 01A2:0410
cs=0x1a2;eip=0x000411; 	T(MOV(ax, *(dw*)(raddr(ss,bp+src))));	// 709                  mov     ax, word ptr [bp+src] ;~ 01A2:0411
cs=0x1a2;eip=0x000414; 	T(OR(ax, *(dw*)(raddr(ss,bp+src+2))));	// 710                  or      ax, word ptr [bp+src+2] ;~ 01A2:0414
cs=0x1a2;eip=0x000417; 	J(JZ(loc_1042b));	// 711                  jz      short loc_1042B ;~ 01A2:0417
cs=0x1a2;eip=0x000419; 	X(PUSH(*(dw*)(raddr(ss,bp+src+2))));	// 712                  push    word ptr [bp+src+2] ;~ 01A2:0419
cs=0x1a2;eip=0x00041c; 	X(PUSH(*(dw*)(raddr(ss,bp+src))));	// 713                  push    word ptr [bp+src] ; s ;~ 01A2:041C
cs=0x1a2;eip=0x00041f; 	T(NOP);	// 714                  nop ;~ 01A2:041F
cs=0x1a2;eip=0x000420; 	X(PUSH(cs));	// 715                  push    cs ;~ 01A2:0420
cs=0x1a2;eip=0x000421; 	J(CALL(___strlen,0));	// 716                  call    near ptr ___strlen ;~ 01A2:0421
cs=0x1a2;eip=0x000424; 	X(POP(cx));	// 717                  pop     cx ;~ 01A2:0424
cs=0x1a2;eip=0x000425; 	X(POP(cx));	// 718                  pop     cx ;~ 01A2:0425
cs=0x1a2;eip=0x000426; 	T(ADD(ax, 3));	// 719                  add     ax, 3 ;~ 01A2:0426
cs=0x1a2;eip=0x000429; 	T(ADD(si, ax));	// 720                  add     si, ax ;~ 01A2:0429
loc_1042b:
	// 4405 
cs=0x1a2;eip=0x00042b; 	T(CMP(si, 0x2000));	// 723                  cmp     si, 2000h ;~ 01A2:042B
cs=0x1a2;eip=0x00042f; 	J(JC(loc_10434));	// 724                  jb      short loc_10434 ;~ 01A2:042F
cs=0x1a2;eip=0x000431; 	J(JMP(loc_1051c));	// 725                  jmp     loc_1051C ;~ 01A2:0431
loc_10434:
	// 4406 
cs=0x1a2;eip=0x000434; 	T(ax = si;);	// 729                  mov     ax, si ;~ 01A2:0434
cs=0x1a2;eip=0x000436; 	T(ADD(ax, 0x0F));	// 730                  add     ax, 0Fh ;~ 01A2:0436
cs=0x1a2;eip=0x000439; 	X(PUSH(ax));	// 731                  push    ax              ; size ;~ 01A2:0439
cs=0x1a2;eip=0x00043a; 	T(NOP);	// 732                  nop ;~ 01A2:043A
cs=0x1a2;eip=0x00043b; 	X(PUSH(cs));	// 733                  push    cs ;~ 01A2:043B
cs=0x1a2;eip=0x00043c; 	J(CALL(___malloc,0));	// 734                  call    near ptr ___malloc ;~ 01A2:043C
cs=0x1a2;eip=0x00043f; 	X(POP(cx));	// 735                  pop     cx ;~ 01A2:043F
cs=0x1a2;eip=0x000440; 	X(MOV(*(dw*)(raddr(ss,bp+dest+2)), dx));	// 736                  mov     word ptr [bp+dest+2], dx ;~ 01A2:0440
cs=0x1a2;eip=0x000443; 	X(MOV(*(dw*)(raddr(ss,bp+dest)), ax));	// 737                  mov     word ptr [bp+dest], ax ;~ 01A2:0443
cs=0x1a2;eip=0x000446; 	T(OR(ax, dx));	// 738                  or      ax, dx ;~ 01A2:0446
cs=0x1a2;eip=0x000448; 	J(JNZ(loc_1044d));	// 739                  jnz     short loc_1044D ;~ 01A2:0448
cs=0x1a2;eip=0x00044a; 	J(JMP(loc_1051c));	// 740                  jmp     loc_1051C ;~ 01A2:044A
loc_1044d:
	// 4407 
cs=0x1a2;eip=0x00044d; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 744                  les     bx, [bp+arg_0] ;~ 01A2:044D
cs=0x1a2;eip=0x000450; 	T(MOV(ax, *(dw*)(raddr(ss,bp+dest+2))));	// 745                  mov     ax, word ptr [bp+dest+2] ;~ 01A2:0450
cs=0x1a2;eip=0x000453; 	T(MOV(dx, *(dw*)(raddr(ss,bp+dest))));	// 746                  mov     dx, word ptr [bp+dest] ;~ 01A2:0453
cs=0x1a2;eip=0x000456; 	X(MOV(*(dw*)(raddr(es,bx+2)), ax));	// 747                  mov     es:[bx+2], ax ;~ 01A2:0456
cs=0x1a2;eip=0x00045a; 	X(MOV(*(dw*)(raddr(es,bx)), dx));	// 748                  mov     es:[bx], dx ;~ 01A2:045A
cs=0x1a2;eip=0x00045d; 	X(ADD(*(dw*)(raddr(ss,bp+dest)), 0x0F));	// 749                  add     word ptr [bp+dest], 0Fh ;~ 01A2:045D
cs=0x1a2;eip=0x000461; 	X(AND(*(dw*)(raddr(ss,bp+dest)), 0x0FFF0));	// 750                  and     word ptr [bp+dest], 0FFF0h ;~ 01A2:0461
cs=0x1a2;eip=0x000465; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 751                  mov     ax, [bp+arg_A] ;~ 01A2:0465
cs=0x1a2;eip=0x000468; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_8))));	// 752                  mov     dx, [bp+arg_8] ;~ 01A2:0468
cs=0x1a2;eip=0x00046b; 	X(MOV(*(dw*)(raddr(ss,bp+var_4+2)), ax));	// 753                  mov     word ptr [bp+var_4+2], ax ;~ 01A2:046B
cs=0x1a2;eip=0x00046e; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 754                  mov     word ptr [bp+var_4], dx ;~ 01A2:046E
cs=0x1a2;eip=0x000471; 	T(OR(dx, ax));	// 755                  or      dx, ax ;~ 01A2:0471
cs=0x1a2;eip=0x000473; 	J(JZ(loc_104c6));	// 756                  jz      short loc_104C6 ;~ 01A2:0473
cs=0x1a2;eip=0x000475; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 757                  les     bx, [bp+var_4] ;~ 01A2:0475
cs=0x1a2;eip=0x000478; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 758                  mov     ax, es:[bx] ;~ 01A2:0478
cs=0x1a2;eip=0x00047b; 	T(OR(ax, *(dw*)(raddr(es,bx+2))));	// 759                  or      ax, es:[bx+2] ;~ 01A2:047B
cs=0x1a2;eip=0x00047f; 	J(JZ(loc_104c6));	// 760                  jz      short loc_104C6 ;~ 01A2:047F
cs=0x1a2;eip=0x000481; 	J(JMP(loc_104af));	// 761                  jmp     short loc_104AF ;~ 01A2:0481
loc_10483:
	// 4408 
cs=0x1a2;eip=0x000483; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 765                  les     bx, [bp+var_4] ;~ 01A2:0483
cs=0x1a2;eip=0x000486; 	X(ADD(*(dw*)(raddr(ss,bp+var_4)), 4));	// 766                  add     word ptr [bp+var_4], 4 ;~ 01A2:0486
cs=0x1a2;eip=0x00048a; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 767                  push    word ptr es:[bx+2] ;~ 01A2:048A
cs=0x1a2;eip=0x00048e; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 768                  push    word ptr es:[bx] ; src ;~ 01A2:048E
cs=0x1a2;eip=0x000491; 	X(PUSH(*(dw*)(raddr(ss,bp+dest+2))));	// 769                  push    word ptr [bp+dest+2] ;~ 01A2:0491
cs=0x1a2;eip=0x000494; 	X(PUSH(*(dw*)(raddr(ss,bp+dest))));	// 770                  push    word ptr [bp+dest] ; dest ;~ 01A2:0494
cs=0x1a2;eip=0x000497; 	T(NOP);	// 771                  nop ;~ 01A2:0497
cs=0x1a2;eip=0x000498; 	X(PUSH(cs));	// 772                  push    cs ;~ 01A2:0498
cs=0x1a2;eip=0x000499; 	J(CALL(___stpcpy,0));	// 773                  call    near ptr ___stpcpy ;~ 01A2:0499
cs=0x1a2;eip=0x00049c; 	T(ADD(sp, 8));	// 774                  add     sp, 8 ;~ 01A2:049C
cs=0x1a2;eip=0x00049f; 	X(MOV(*(dw*)(raddr(ss,bp+dest+2)), dx));	// 775                  mov     word ptr [bp+dest+2], dx ;~ 01A2:049F
cs=0x1a2;eip=0x0004a2; 	X(MOV(*(dw*)(raddr(ss,bp+dest)), ax));	// 776                  mov     word ptr [bp+dest], ax ;~ 01A2:04A2
cs=0x1a2;eip=0x0004a5; 	T(LES(bx, *(dd*)(raddr(ss,bp+dest))));	// 777                  les     bx, [bp+dest] ;~ 01A2:04A5
cs=0x1a2;eip=0x0004a8; 	X(MOV(*(raddr(es,bx)), 0));	// 778                  mov     byte ptr es:[bx], 0 ;~ 01A2:04A8
cs=0x1a2;eip=0x0004ac; 	X(INC(*(dw*)(raddr(ss,bp+dest))));	// 779                  inc     word ptr [bp+dest] ;~ 01A2:04AC
loc_104af:
	// 4409 
cs=0x1a2;eip=0x0004af; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 782                  les     bx, [bp+var_4] ;~ 01A2:04AF
cs=0x1a2;eip=0x0004b2; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 783                  mov     ax, es:[bx] ;~ 01A2:04B2
cs=0x1a2;eip=0x0004b5; 	T(OR(ax, *(dw*)(raddr(es,bx+2))));	// 784                  or      ax, es:[bx+2] ;~ 01A2:04B5
cs=0x1a2;eip=0x0004b9; 	J(JZ(loc_104d0));	// 785                  jz      short loc_104D0 ;~ 01A2:04B9
cs=0x1a2;eip=0x0004bb; 	T(LES(bx, *(dw*)(raddr(es,bx))));	// 786                  les     bx, es:[bx] ;~ 01A2:04BB
cs=0x1a2;eip=0x0004be; 	T(CMP(*(raddr(es,bx)), 0));	// 787                  cmp     byte ptr es:[bx], 0 ;~ 01A2:04BE
cs=0x1a2;eip=0x0004c2; 	J(JNZ(loc_10483));	// 788                  jnz     short loc_10483 ;~ 01A2:04C2
cs=0x1a2;eip=0x0004c4; 	J(JMP(loc_104d0));	// 789                  jmp     short loc_104D0 ;~ 01A2:04C4
loc_104c6:
	// 4410 
cs=0x1a2;eip=0x0004c6; 	T(LES(bx, *(dd*)(raddr(ss,bp+dest))));	// 794                  les     bx, [bp+dest] ;~ 01A2:04C6
cs=0x1a2;eip=0x0004c9; 	X(MOV(*(raddr(es,bx)), 0));	// 795                  mov     byte ptr es:[bx], 0 ;~ 01A2:04C9
cs=0x1a2;eip=0x0004cd; 	X(INC(*(dw*)(raddr(ss,bp+dest))));	// 796                  inc     word ptr [bp+dest] ;~ 01A2:04CD
loc_104d0:
	// 4411 
cs=0x1a2;eip=0x0004d0; 	T(LES(bx, *(dd*)(raddr(ss,bp+dest))));	// 800                  les     bx, [bp+dest] ;~ 01A2:04D0
cs=0x1a2;eip=0x0004d3; 	X(MOV(*(raddr(es,bx)), 0));	// 801                  mov     byte ptr es:[bx], 0 ;~ 01A2:04D3
cs=0x1a2;eip=0x0004d7; 	X(INC(*(dw*)(raddr(ss,bp+dest))));	// 802                  inc     word ptr [bp+dest] ;~ 01A2:04D7
cs=0x1a2;eip=0x0004da; 	T(MOV(ax, *(dw*)(raddr(ss,bp+src))));	// 803                  mov     ax, word ptr [bp+src] ;~ 01A2:04DA
cs=0x1a2;eip=0x0004dd; 	T(OR(ax, *(dw*)(raddr(ss,bp+src+2))));	// 804                  or      ax, word ptr [bp+src+2] ;~ 01A2:04DD
cs=0x1a2;eip=0x0004e0; 	J(JZ(loc_10512));	// 805                  jz      short loc_10512 ;~ 01A2:04E0
cs=0x1a2;eip=0x0004e2; 	T(LES(bx, *(dd*)(raddr(ss,bp+dest))));	// 806                  les     bx, [bp+dest] ;~ 01A2:04E2
cs=0x1a2;eip=0x0004e5; 	X(MOV(*(dw*)(raddr(es,bx)), 1));	// 807                  mov     word ptr es:[bx], 1 ;~ 01A2:04E5
cs=0x1a2;eip=0x0004ea; 	X(ADD(*(dw*)(raddr(ss,bp+dest)), 2));	// 808                  add     word ptr [bp+dest], 2 ;~ 01A2:04EA
cs=0x1a2;eip=0x0004ee; 	X(PUSH(*(dw*)(raddr(ss,bp+src+2))));	// 809                  push    word ptr [bp+src+2] ;~ 01A2:04EE
cs=0x1a2;eip=0x0004f1; 	X(PUSH(*(dw*)(raddr(ss,bp+src))));	// 810                  push    word ptr [bp+src] ; src ;~ 01A2:04F1
cs=0x1a2;eip=0x0004f4; 	X(PUSH(*(dw*)(raddr(ss,bp+dest+2))));	// 811                  push    word ptr [bp+dest+2] ;~ 01A2:04F4
cs=0x1a2;eip=0x0004f7; 	X(PUSH(*(dw*)(raddr(ss,bp+dest))));	// 812                  push    word ptr [bp+dest] ; dest ;~ 01A2:04F7
cs=0x1a2;eip=0x0004fa; 	T(NOP);	// 813                  nop ;~ 01A2:04FA
cs=0x1a2;eip=0x0004fb; 	X(PUSH(cs));	// 814                  push    cs ;~ 01A2:04FB
cs=0x1a2;eip=0x0004fc; 	J(CALL(___stpcpy,0));	// 815                  call    near ptr ___stpcpy ;~ 01A2:04FC
cs=0x1a2;eip=0x0004ff; 	T(ADD(sp, 8));	// 816                  add     sp, 8 ;~ 01A2:04FF
cs=0x1a2;eip=0x000502; 	X(MOV(*(dw*)(raddr(ss,bp+dest+2)), dx));	// 817                  mov     word ptr [bp+dest+2], dx ;~ 01A2:0502
cs=0x1a2;eip=0x000505; 	X(MOV(*(dw*)(raddr(ss,bp+dest)), ax));	// 818                  mov     word ptr [bp+dest], ax ;~ 01A2:0505
cs=0x1a2;eip=0x000508; 	T(LES(bx, *(dd*)(raddr(ss,bp+dest))));	// 819                  les     bx, [bp+dest] ;~ 01A2:0508
cs=0x1a2;eip=0x00050b; 	X(MOV(*(raddr(es,bx)), 0));	// 820                  mov     byte ptr es:[bx], 0 ;~ 01A2:050B
cs=0x1a2;eip=0x00050f; 	X(INC(*(dw*)(raddr(ss,bp+dest))));	// 821                  inc     word ptr [bp+dest] ;~ 01A2:050F
loc_10512:
	// 4412 
cs=0x1a2;eip=0x000512; 	T(MOV(dx, *(dw*)(raddr(ss,bp+dest+2))));	// 824                  mov     dx, word ptr [bp+dest+2] ;~ 01A2:0512
cs=0x1a2;eip=0x000515; 	T(MOV(ax, *(dw*)(raddr(ss,bp+dest))));	// 825                  mov     ax, word ptr [bp+dest] ;~ 01A2:0515
cs=0x1a2;eip=0x000518; 	T(SUB(ax, si));	// 826                  sub     ax, si ;~ 01A2:0518
cs=0x1a2;eip=0x00051a; 	J(JMP(loc_10520));	// 827                  jmp     short loc_10520 ;~ 01A2:051A
loc_1051c:
	// 4413 
cs=0x1a2;eip=0x00051c; 	T(XOR(dx, dx));	// 832                  xor     dx, dx ;~ 01A2:051C
cs=0x1a2;eip=0x00051e; 	T(XOR(ax, ax));	// 833                  xor     ax, ax ;~ 01A2:051E
loc_10520:
	// 4414 
cs=0x1a2;eip=0x000520; 	X(POP(si));	// 836                  pop     si ;~ 01A2:0520
cs=0x1a2;eip=0x000521; 	T(sp = bp;);	// 837                  mov     sp, bp ;~ 01A2:0521
cs=0x1a2;eip=0x000523; 	X(POP(bp));	// 838                  pop     bp ;~ 01A2:0523
cs=0x1a2;eip=0x000524; 	J(RETN(0x0C));	// 839                  retn    0Ch ;~ 01A2:0524

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____dosenv: 	goto ____dosenv;
        case m2c::kloc_103e3: 	goto loc_103e3;
        case m2c::kloc_103fb: 	goto loc_103fb;
        case m2c::kloc_10410: 	goto loc_10410;
        case m2c::kloc_1042b: 	goto loc_1042b;
        case m2c::kloc_10434: 	goto loc_10434;
        case m2c::kloc_1044d: 	goto loc_1044d;
        case m2c::kloc_10483: 	goto loc_10483;
        case m2c::kloc_104af: 	goto loc_104af;
        case m2c::kloc_104c6: 	goto loc_104c6;
        case m2c::kloc_104d0: 	goto loc_104d0;
        case m2c::kloc_10512: 	goto loc_10512;
        case m2c::kloc_1051c: 	goto loc_1051c;
        case m2c::kloc_10520: 	goto loc_10520;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____dos_getfileattr(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____dos_getfileattr:
    _begin:
#undef filename
#define filename 6
	// 850 filename        = dword ptr  6 ;~ 01A2:0527
#undef attrib
#define attrib 0x0A
	// 851 attrib          = dword ptr  0Ah ;~ 01A2:0527
cs=0x1a2;eip=0x000527; 	X(PUSH(bp));	// 853                  push    bp ;~ 01A2:0527
cs=0x1a2;eip=0x000528; 	T(bp = sp;);	// 854                  mov     bp, sp ;~ 01A2:0528
cs=0x1a2;eip=0x00052a; 	X(PUSH(ds));	// 855                  push    ds ;~ 01A2:052A
cs=0x1a2;eip=0x00052b; 	T(ah = 0x43;);	// 856                  mov     ah, 43h ; 'C' ;~ 01A2:052B
cs=0x1a2;eip=0x00052d; 	T(XOR(al, al));	// 857                  xor     al, al ;~ 01A2:052D
cs=0x1a2;eip=0x00052f; 	T(LDS(dx, *(dd*)(raddr(ss,bp+filename))));	// 858                  lds     dx, [bp+filename] ;~ 01A2:052F
cs=0x1a2;eip=0x000532; 	S(_INT(0x21));	// 859                  int     21h             ; DOS - 2+ - GET FILE ATTRIBUTES ;~ 01A2:0532
cs=0x1a2;eip=0x000534; 	X(POP(ds));	// 862                  pop     ds ;~ 01A2:0534
cs=0x1a2;eip=0x000535; 	J(JC(loc_10541));	// 863                  jb      short loc_10541 ;~ 01A2:0535
cs=0x1a2;eip=0x000537; 	T(LES(bx, *(dd*)(raddr(ss,bp+attrib))));	// 864                  les     bx, [bp+attrib] ;~ 01A2:0537
cs=0x1a2;eip=0x00053a; 	X(MOV(*(dw*)(raddr(es,bx)), cx));	// 865                  mov     es:[bx], cx ;~ 01A2:053A
cs=0x1a2;eip=0x00053d; 	T(XOR(ax, ax));	// 866                  xor     ax, ax ;~ 01A2:053D
cs=0x1a2;eip=0x00053f; 	J(JMP(loc_10545));	// 867                  jmp     short loc_10545 ;~ 01A2:053F
loc_10541:
	// 4415 
cs=0x1a2;eip=0x000541; 	X(PUSH(ax));	// 871                  push    ax ;~ 01A2:0541
cs=0x1a2;eip=0x000542; 	J(CALL(____doserror,0));	// 872                  call    ____DOSERROR ;~ 01A2:0542
loc_10545:
	// 4416 
cs=0x1a2;eip=0x000545; 	X(POP(bp));	// 875                  pop     bp ;~ 01A2:0545
cs=0x1a2;eip=0x000546; 	J(RETF(0));	// 876                  retf ;~ 01A2:0546

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____dos_getfileattr: 	goto ____dos_getfileattr;
        case m2c::kloc_10541: 	goto loc_10541;
        case m2c::kloc_10545: 	goto loc_10545;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____dos_setfileattr(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____dos_setfileattr:
    _begin:
#undef filename
#define filename 6
	// 887 filename        = dword ptr  6 ;~ 01A2:0547
#undef attrib
#define attrib 0x0A
	// 888 attrib          = word ptr  0Ah ;~ 01A2:0547
cs=0x1a2;eip=0x000547; 	X(PUSH(bp));	// 890                  push    bp ;~ 01A2:0547
cs=0x1a2;eip=0x000548; 	T(bp = sp;);	// 891                  mov     bp, sp ;~ 01A2:0548
cs=0x1a2;eip=0x00054a; 	X(PUSH(ds));	// 892                  push    ds ;~ 01A2:054A
cs=0x1a2;eip=0x00054b; 	T(ah = 0x43;);	// 893                  mov     ah, 43h ; 'C' ;~ 01A2:054B
cs=0x1a2;eip=0x00054d; 	T(al = 1;);	// 894                  mov     al, 1 ;~ 01A2:054D
cs=0x1a2;eip=0x00054f; 	T(LDS(dx, *(dd*)(raddr(ss,bp+filename))));	// 895                  lds     dx, [bp+filename] ;~ 01A2:054F
cs=0x1a2;eip=0x000552; 	T(MOV(cx, *(dw*)(raddr(ss,bp+attrib))));	// 896                  mov     cx, [bp+attrib] ;~ 01A2:0552
cs=0x1a2;eip=0x000555; 	S(_INT(0x21));	// 897                  int     21h             ; DOS - 2+ - SET FILE ATTRIBUTES ;~ 01A2:0555
cs=0x1a2;eip=0x000557; 	X(POP(ds));	// 900                  pop     ds ;~ 01A2:0557
cs=0x1a2;eip=0x000558; 	J(JC(loc_1055e));	// 901                  jb      short loc_1055E ;~ 01A2:0558
cs=0x1a2;eip=0x00055a; 	T(XOR(ax, ax));	// 902                  xor     ax, ax ;~ 01A2:055A
cs=0x1a2;eip=0x00055c; 	J(JMP(loc_10562));	// 903                  jmp     short loc_10562 ;~ 01A2:055C
loc_1055e:
	// 4417 
cs=0x1a2;eip=0x00055e; 	X(PUSH(ax));	// 907                  push    ax ;~ 01A2:055E
cs=0x1a2;eip=0x00055f; 	J(CALL(____doserror,0));	// 908                  call    ____DOSERROR ;~ 01A2:055F
loc_10562:
	// 4418 
cs=0x1a2;eip=0x000562; 	X(POP(bp));	// 911                  pop     bp ;~ 01A2:0562
cs=0x1a2;eip=0x000563; 	J(RETF(0));	// 912                  retf ;~ 01A2:0563

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____dos_setfileattr: 	goto ____dos_setfileattr;
        case m2c::kloc_1055e: 	goto loc_1055e;
        case m2c::kloc_10562: 	goto loc_10562;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____dos_findfirst(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____dos_findfirst:
    _begin:
#undef path
#define path 6
	// 923 path            = dword ptr  6 ;~ 01A2:0564
#undef attrib
#define attrib 0x0A
	// 924 attrib          = word ptr  0Ah ;~ 01A2:0564
#undef finfo
#define finfo 0x0C
	// 925 finfo           = dword ptr  0Ch ;~ 01A2:0564
cs=0x1a2;eip=0x000564; 	X(PUSH(bp));	// 927                  push    bp ;~ 01A2:0564
cs=0x1a2;eip=0x000565; 	T(bp = sp;);	// 928                  mov     bp, sp ;~ 01A2:0565
cs=0x1a2;eip=0x000567; 	X(PUSH(ds));	// 929                  push    ds ;~ 01A2:0567
cs=0x1a2;eip=0x000568; 	T(ah = 0x2F;);	// 930                  mov     ah, 2Fh ;~ 01A2:0568
cs=0x1a2;eip=0x00056a; 	S(_INT(0x21));	// 931                  int     21h             ; DOS - GET DISK TRANSFER AREA ADDRESS ;~ 01A2:056A
cs=0x1a2;eip=0x00056c; 	X(PUSH(es));	// 933                  push    es ;~ 01A2:056C
cs=0x1a2;eip=0x00056d; 	X(PUSH(bx));	// 934                  push    bx ;~ 01A2:056D
cs=0x1a2;eip=0x00056e; 	T(ah = 0x1A;);	// 935                  mov     ah, 1Ah ;~ 01A2:056E
cs=0x1a2;eip=0x000570; 	T(LDS(dx, *(dd*)(raddr(ss,bp+finfo))));	// 936                  lds     dx, [bp+finfo] ;~ 01A2:0570
cs=0x1a2;eip=0x000573; 	S(_INT(0x21));	// 937                  int     21h             ; DOS - SET DISK TRANSFER AREA ADDRESS ;~ 01A2:0573
cs=0x1a2;eip=0x000575; 	T(ah = 0x4E;);	// 939                  mov     ah, 4Eh ; 'N' ;~ 01A2:0575
cs=0x1a2;eip=0x000577; 	T(MOV(cx, *(dw*)(raddr(ss,bp+attrib))));	// 940                  mov     cx, [bp+attrib] ;~ 01A2:0577
cs=0x1a2;eip=0x00057a; 	T(LDS(dx, *(dd*)(raddr(ss,bp+path))));	// 941                  lds     dx, [bp+path] ;~ 01A2:057A
cs=0x1a2;eip=0x00057d; 	S(_INT(0x21));	// 942                  int     21h             ; DOS - 2+ - FIND FIRST ASCIZ (FINDFIRST) ;~ 01A2:057D
cs=0x1a2;eip=0x00057f; 	X(PUSHF);	// 946                  pushf ;~ 01A2:057F
cs=0x1a2;eip=0x000580; 	X(POP(cx));	// 947                  pop     cx ;~ 01A2:0580
cs=0x1a2;eip=0x000581; 	T(XCHG(ax, bx));	// 948                  xchg    ax, bx ;~ 01A2:0581
cs=0x1a2;eip=0x000582; 	T(ah = 0x1A;);	// 949                  mov     ah, 1Ah ;~ 01A2:0582
cs=0x1a2;eip=0x000584; 	X(POP(dx));	// 950                  pop     dx ;~ 01A2:0584
cs=0x1a2;eip=0x000585; 	X(POP(ds));	// 951                  pop     ds ;~ 01A2:0585
cs=0x1a2;eip=0x000586; 	S(_INT(0x21));	// 952                  int     21h             ; DOS - SET DISK TRANSFER AREA ADDRESS ;~ 01A2:0586
cs=0x1a2;eip=0x000588; 	X(PUSH(cx));	// 954                  push    cx ;~ 01A2:0588
cs=0x1a2;eip=0x000589; 	X(POPF);	// 955                  popf ;~ 01A2:0589
cs=0x1a2;eip=0x00058a; 	X(POP(ds));	// 956                  pop     ds ;~ 01A2:058A
cs=0x1a2;eip=0x00058b; 	J(JC(loc_10591));	// 957                  jb      short loc_10591 ;~ 01A2:058B
cs=0x1a2;eip=0x00058d; 	T(XOR(ax, ax));	// 958                  xor     ax, ax ;~ 01A2:058D
cs=0x1a2;eip=0x00058f; 	J(JMP(loc_10595));	// 959                  jmp     short loc_10595 ;~ 01A2:058F
loc_10591:
	// 4419 
cs=0x1a2;eip=0x000591; 	X(PUSH(bx));	// 963                  push    bx ;~ 01A2:0591
cs=0x1a2;eip=0x000592; 	J(CALL(____doserror,0));	// 964                  call    ____DOSERROR ;~ 01A2:0592
loc_10595:
	// 4420 
cs=0x1a2;eip=0x000595; 	X(POP(bp));	// 967                  pop     bp ;~ 01A2:0595
cs=0x1a2;eip=0x000596; 	J(RETF(0));	// 968                  retf ;~ 01A2:0596

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____dos_findfirst: 	goto ____dos_findfirst;
        case m2c::kloc_10591: 	goto loc_10591;
        case m2c::kloc_10595: 	goto loc_10595;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____dos_findnext(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____dos_findnext:
    _begin:
#undef finfo
#define finfo 6
	// 979 finfo           = dword ptr  6 ;~ 01A2:0597
cs=0x1a2;eip=0x000597; 	X(PUSH(bp));	// 981                  push    bp ;~ 01A2:0597
cs=0x1a2;eip=0x000598; 	T(bp = sp;);	// 982                  mov     bp, sp ;~ 01A2:0598
cs=0x1a2;eip=0x00059a; 	X(PUSH(ds));	// 983                  push    ds ;~ 01A2:059A
cs=0x1a2;eip=0x00059b; 	T(ah = 0x2F;);	// 984                  mov     ah, 2Fh ;~ 01A2:059B
cs=0x1a2;eip=0x00059d; 	S(_INT(0x21));	// 985                  int     21h             ; DOS - GET DISK TRANSFER AREA ADDRESS ;~ 01A2:059D
cs=0x1a2;eip=0x00059f; 	X(PUSH(es));	// 987                  push    es ;~ 01A2:059F
cs=0x1a2;eip=0x0005a0; 	X(PUSH(bx));	// 988                  push    bx ;~ 01A2:05A0
cs=0x1a2;eip=0x0005a1; 	T(ah = 0x1A;);	// 989                  mov     ah, 1Ah ;~ 01A2:05A1
cs=0x1a2;eip=0x0005a3; 	T(LDS(dx, *(dd*)(raddr(ss,bp+finfo))));	// 990                  lds     dx, [bp+finfo] ;~ 01A2:05A3
cs=0x1a2;eip=0x0005a6; 	S(_INT(0x21));	// 991                  int     21h             ; DOS - SET DISK TRANSFER AREA ADDRESS ;~ 01A2:05A6
cs=0x1a2;eip=0x0005a8; 	T(ah = 0x4F;);	// 993                  mov     ah, 4Fh ;~ 01A2:05A8
cs=0x1a2;eip=0x0005aa; 	S(_INT(0x21));	// 994                  int     21h             ; DOS - 2+ - FIND NEXT ASCIZ (FINDNEXT) ;~ 01A2:05AA
cs=0x1a2;eip=0x0005ac; 	X(PUSHF);	// 997                  pushf ;~ 01A2:05AC
cs=0x1a2;eip=0x0005ad; 	X(POP(cx));	// 998                  pop     cx ;~ 01A2:05AD
cs=0x1a2;eip=0x0005ae; 	T(XCHG(ax, bx));	// 999                  xchg    ax, bx ;~ 01A2:05AE
cs=0x1a2;eip=0x0005af; 	T(ah = 0x1A;);	// 1000                  mov     ah, 1Ah ;~ 01A2:05AF
cs=0x1a2;eip=0x0005b1; 	X(POP(dx));	// 1001                  pop     dx ;~ 01A2:05B1
cs=0x1a2;eip=0x0005b2; 	X(POP(ds));	// 1002                  pop     ds ;~ 01A2:05B2
cs=0x1a2;eip=0x0005b3; 	S(_INT(0x21));	// 1003                  int     21h             ; DOS - SET DISK TRANSFER AREA ADDRESS ;~ 01A2:05B3
cs=0x1a2;eip=0x0005b5; 	X(PUSH(cx));	// 1005                  push    cx ;~ 01A2:05B5
cs=0x1a2;eip=0x0005b6; 	X(POPF);	// 1006                  popf ;~ 01A2:05B6
cs=0x1a2;eip=0x0005b7; 	X(POP(ds));	// 1007                  pop     ds ;~ 01A2:05B7
cs=0x1a2;eip=0x0005b8; 	J(JC(loc_105be));	// 1008                  jb      short loc_105BE ;~ 01A2:05B8
cs=0x1a2;eip=0x0005ba; 	T(XOR(ax, ax));	// 1009                  xor     ax, ax ;~ 01A2:05BA
cs=0x1a2;eip=0x0005bc; 	J(JMP(loc_105c2));	// 1010                  jmp     short loc_105C2 ;~ 01A2:05BC
loc_105be:
	// 4421 
cs=0x1a2;eip=0x0005be; 	X(PUSH(bx));	// 1014                  push    bx ;~ 01A2:05BE
cs=0x1a2;eip=0x0005bf; 	J(CALL(____doserror,0));	// 1015                  call    ____DOSERROR ;~ 01A2:05BF
loc_105c2:
	// 4422 
cs=0x1a2;eip=0x0005c2; 	X(POP(bp));	// 1018                  pop     bp ;~ 01A2:05C2
cs=0x1a2;eip=0x0005c3; 	J(RETF(0));	// 1019                  retf ;~ 01A2:05C3

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____dos_findnext: 	goto ____dos_findnext;
        case m2c::kloc_105be: 	goto loc_105be;
        case m2c::kloc_105c2: 	goto loc_105c2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____dos_getdrive(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____dos_getdrive:
    _begin:
#undef drive
#define drive 6
	// 1030 drive           = dword ptr  6 ;~ 01A2:05C4
cs=0x1a2;eip=0x0005c4; 	X(PUSH(bp));	// 1032                  push    bp ;~ 01A2:05C4
cs=0x1a2;eip=0x0005c5; 	T(bp = sp;);	// 1033                  mov     bp, sp ;~ 01A2:05C5
cs=0x1a2;eip=0x0005c7; 	T(ah = 0x19;);	// 1034                  mov     ah, 19h ;~ 01A2:05C7
cs=0x1a2;eip=0x0005c9; 	S(_INT(0x21));	// 1035                  int     21h             ; DOS - GET DEFAULT DISK NUMBER ;~ 01A2:05C9
cs=0x1a2;eip=0x0005cb; 	T(ah = 0;);	// 1036                  mov     ah, 0 ;~ 01A2:05CB
cs=0x1a2;eip=0x0005cd; 	T(INC(ax));	// 1037                  inc     ax ;~ 01A2:05CD
cs=0x1a2;eip=0x0005ce; 	T(LES(bx, *(dd*)(raddr(ss,bp+drive))));	// 1038                  les     bx, [bp+drive] ;~ 01A2:05CE
cs=0x1a2;eip=0x0005d1; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 1039                  mov     es:[bx], ax ;~ 01A2:05D1
cs=0x1a2;eip=0x0005d4; 	X(POP(bp));	// 1040                  pop     bp ;~ 01A2:05D4
cs=0x1a2;eip=0x0005d5; 	J(RETF(0));	// 1041                  retf ;~ 01A2:05D5

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____dos_getdrive: 	goto ____dos_getdrive;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____dos_setdrive(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____dos_setdrive:
    _begin:
#undef drive
#define drive 6
	// 1052 drive           = word ptr  6 ;~ 01A2:05D6
#undef ndrives
#define ndrives 8
	// 1053 ndrives         = dword ptr  8 ;~ 01A2:05D6
cs=0x1a2;eip=0x0005d6; 	X(PUSH(bp));	// 1055                  push    bp ;~ 01A2:05D6
cs=0x1a2;eip=0x0005d7; 	T(bp = sp;);	// 1056                  mov     bp, sp ;~ 01A2:05D7
cs=0x1a2;eip=0x0005d9; 	T(MOV(dl, *(raddr(ss,bp+drive))));	// 1057                  mov     dl, byte ptr [bp+drive] ;~ 01A2:05D9
cs=0x1a2;eip=0x0005dc; 	T(DEC(dl));	// 1058                  dec     dl ;~ 01A2:05DC
cs=0x1a2;eip=0x0005de; 	T(ah = 0x0E;);	// 1059                  mov     ah, 0Eh ;~ 01A2:05DE
cs=0x1a2;eip=0x0005e0; 	S(_INT(0x21));	// 1060                  int     21h             ; DOS - SELECT DISK ;~ 01A2:05E0
cs=0x1a2;eip=0x0005e2; 	T(ah = 0;);	// 1063                  mov     ah, 0 ;~ 01A2:05E2
cs=0x1a2;eip=0x0005e4; 	T(LES(bx, *(dd*)(raddr(ss,bp+ndrives))));	// 1064                  les     bx, [bp+ndrives] ;~ 01A2:05E4
cs=0x1a2;eip=0x0005e7; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 1065                  mov     es:[bx], ax ;~ 01A2:05E7
cs=0x1a2;eip=0x0005ea; 	X(POP(bp));	// 1066                  pop     bp ;~ 01A2:05EA
cs=0x1a2;eip=0x0005eb; 	J(RETF(0));	// 1067                  retf ;~ 01A2:05EB

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____dos_setdrive: 	goto ____dos_setdrive;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool __nullsub_1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    __nullsub_1:
    _begin:
cs=0x1a2;eip=0x0005ec; 	J(RETF(0));	// 1077                  retf ;~ 01A2:05EC

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k__nullsub_1: 	goto __nullsub_1;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_105ed(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_105ed:
    _begin:
#undef arg_0
#define arg_0 4
	// 1088 arg_0           = word ptr  4 ;~ 01A2:05ED
#undef arg_2
#define arg_2 6
	// 1089 arg_2           = word ptr  6 ;~ 01A2:05ED
#undef arg_4
#define arg_4 8
	// 1090 arg_4           = word ptr  8 ;~ 01A2:05ED
cs=0x1a2;eip=0x0005ed; 	X(PUSH(bp));	// 1092                  push    bp ;~ 01A2:05ED
cs=0x1a2;eip=0x0005ee; 	T(bp = sp;);	// 1093                  mov     bp, sp ;~ 01A2:05EE
cs=0x1a2;eip=0x0005f0; 	X(PUSH(si));	// 1094                  push    si ;~ 01A2:05F0
cs=0x1a2;eip=0x0005f1; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 1095                  mov     si, [bp+arg_4] ;~ 01A2:05F1
cs=0x1a2;eip=0x0005f4; 	T(OR(si, si));	// 1096                  or      si, si ;~ 01A2:05F4
cs=0x1a2;eip=0x0005f6; 	J(JNZ(loc_1061a));	// 1097                  jnz     short loc_1061A ;~ 01A2:05F6
cs=0x1a2;eip=0x0005f8; 	J(JMP(loc_1060a));	// 1098                  jmp     short loc_1060A ;~ 01A2:05F8
loc_105fa:
	// 4423 
cs=0x1a2;eip=0x0005fa; 	X(DEC(*(dw*)(&byte_18ea0)));	// 1102                  dec     word ptr byte_18EA0 ;~ 01A2:05FA
cs=0x1a2;eip=0x0005fe; 	T(bx = *(dw*)(&byte_18ea0););	// 1103                  mov     bx, word ptr byte_18EA0 ;~ 01A2:05FE
cs=0x1a2;eip=0x000602; 	T(cl = 2;);	// 1104                  mov     cl, 2 ;~ 01A2:0602
cs=0x1a2;eip=0x000604; 	T(SHL(bx, cl));	// 1105                  shl     bx, cl ;~ 01A2:0604
cs=0x1a2;eip=0x000606; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ds,bx+0x0AAE))));	// 1106                  call    dword ptr [bx+0AAEh] ;~ 01A2:0606
loc_1060a:
	// 4424 
cs=0x1a2;eip=0x00060a; 	T(CMP(*(dw*)(&byte_18ea0), 0));	// 1109                  cmp     word ptr byte_18EA0, 0 ;~ 01A2:060A
cs=0x1a2;eip=0x00060f; 	J(JNZ(loc_105fa));	// 1110                  jnz     short loc_105FA ;~ 01A2:060F
cs=0x1a2;eip=0x000611; 	T(NOP);	// 1111                  nop ;~ 01A2:0611
cs=0x1a2;eip=0x000612; 	X(PUSH(cs));	// 1112                  push    cs ;~ 01A2:0612
cs=0x1a2;eip=0x000613; 	J(CALL(start,m2c::k____cleanup));	// 1113                  call    ____cleanup ;~ 01A2:0613
cs=0x1a2;eip=0x000616; 	J(CALL(__dispatch_call,__off_18fa4));	// 1115                  call    __off_18FA4 ;~ 01A2:0616
loc_1061a:
	// 4425 
cs=0x1a2;eip=0x00061a; 	T(NOP);	// 1118                  nop ;~ 01A2:061A
cs=0x1a2;eip=0x00061b; 	X(PUSH(cs));	// 1119                  push    cs ;~ 01A2:061B
cs=0x1a2;eip=0x00061c; 	J(CALL(____restorezero,0));	// 1120                  call    near ptr ____restorezero ;~ 01A2:061C
cs=0x1a2;eip=0x00061f; 	T(NOP);	// 1121                  nop ;~ 01A2:061F
cs=0x1a2;eip=0x000620; 	X(PUSH(cs));	// 1122                  push    cs ;~ 01A2:0620
cs=0x1a2;eip=0x000621; 	J(CALL(____checknull,0));	// 1123                  call    near ptr ____checknull ;~ 01A2:0621
cs=0x1a2;eip=0x000624; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 1124                  cmp     [bp+arg_2], 0 ;~ 01A2:0624
cs=0x1a2;eip=0x000628; 	J(JNZ(loc_1063f));	// 1125                  jnz     short loc_1063F ;~ 01A2:0628
cs=0x1a2;eip=0x00062a; 	T(OR(si, si));	// 1126                  or      si, si ;~ 01A2:062A
cs=0x1a2;eip=0x00062c; 	J(JNZ(loc_10636));	// 1127                  jnz     short loc_10636 ;~ 01A2:062C
cs=0x1a2;eip=0x00062e; 	J(CALL(__dispatch_call,__off_18fa8));	// 1128                  call    __off_18FA8 ;~ 01A2:062E
cs=0x1a2;eip=0x000632; 	J(CALLF(__dispatch_call,*(dd*)(&__off_18fac)));	// 1129                  call    dword ptr __off_18FAC ;~ 01A2:0632
loc_10636:
	// 4426 
cs=0x1a2;eip=0x000636; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 1132                  push    [bp+arg_0] ;~ 01A2:0636
cs=0x1a2;eip=0x000639; 	T(NOP);	// 1133                  nop ;~ 01A2:0639
cs=0x1a2;eip=0x00063a; 	X(PUSH(cs));	// 1134                  push    cs ;~ 01A2:063A
cs=0x1a2;eip=0x00063b; 	J(CALL(____terminate,0));	// 1135                  call    ____terminate ;~ 01A2:063B
cs=0x1a2;eip=0x00063e; 	X(POP(cx));	// 1137                  pop     cx ;~ 01A2:063E
loc_1063f:
	// 4427 
cs=0x1a2;eip=0x00063f; 	X(POP(si));	// 1140                  pop     si ;~ 01A2:063F
cs=0x1a2;eip=0x000640; 	X(POP(bp));	// 1141                  pop     bp ;~ 01A2:0640
cs=0x1a2;eip=0x000641; 	J(RETN(6));	// 1142                  retn    6 ;~ 01A2:0641

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_105fa: 	goto loc_105fa;
        case m2c::kloc_1060a: 	goto loc_1060a;
        case m2c::kloc_1061a: 	goto loc_1061a;
        case m2c::kloc_10636: 	goto loc_10636;
        case m2c::kloc_1063f: 	goto loc_1063f;
        case m2c::ksub_105ed: 	goto sub_105ed;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___exit_0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___exit_0:
    _begin:
#undef status
#define status 6
	// 1154 status          = word ptr  6 ;~ 01A2:0644
cs=0x1a2;eip=0x000644; 	X(PUSH(bp));	// 1156                  push    bp ;~ 01A2:0644
cs=0x1a2;eip=0x000645; 	T(bp = sp;);	// 1157                  mov     bp, sp ;~ 01A2:0645
cs=0x1a2;eip=0x000647; 	T(XOR(ax, ax));	// 1158                  xor     ax, ax ;~ 01A2:0647
cs=0x1a2;eip=0x000649; 	X(PUSH(ax));	// 1159                  push    ax ;~ 01A2:0649
cs=0x1a2;eip=0x00064a; 	X(PUSH(ax));	// 1160                  push    ax ;~ 01A2:064A
cs=0x1a2;eip=0x00064b; 	X(PUSH(*(dw*)(raddr(ss,bp+status))));	// 1161                  push    [bp+status] ;~ 01A2:064B
cs=0x1a2;eip=0x00064e; 	J(CALL(sub_105ed,0));	// 1162                  call    sub_105ED ;~ 01A2:064E
cs=0x1a2;eip=0x000651; 	X(POP(bp));	// 1163                  pop     bp ;~ 01A2:0651
cs=0x1a2;eip=0x000652; 	J(RETF(0));	// 1164                  retf ;~ 01A2:0652

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___exit_0: 	goto ___exit_0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____exit(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____exit:
    _begin:
#undef status
#define status 6
	// 1175 status          = word ptr  6 ;~ 01A2:0653
cs=0x1a2;eip=0x000653; 	X(PUSH(bp));	// 1177                  push    bp ;~ 01A2:0653
cs=0x1a2;eip=0x000654; 	T(bp = sp;);	// 1178                  mov     bp, sp ;~ 01A2:0654
cs=0x1a2;eip=0x000656; 	T(ax = 1;);	// 1179                  mov     ax, 1 ;~ 01A2:0656
cs=0x1a2;eip=0x000659; 	X(PUSH(ax));	// 1180                  push    ax ;~ 01A2:0659
cs=0x1a2;eip=0x00065a; 	T(XOR(ax, ax));	// 1181                  xor     ax, ax ;~ 01A2:065A
cs=0x1a2;eip=0x00065c; 	X(PUSH(ax));	// 1182                  push    ax ;~ 01A2:065C
cs=0x1a2;eip=0x00065d; 	X(PUSH(*(dw*)(raddr(ss,bp+status))));	// 1183                  push    [bp+status] ;~ 01A2:065D
cs=0x1a2;eip=0x000660; 	J(CALL(sub_105ed,0));	// 1184                  call    sub_105ED ;~ 01A2:0660
cs=0x1a2;eip=0x000663; 	X(POP(bp));	// 1185                  pop     bp ;~ 01A2:0663
cs=0x1a2;eip=0x000664; 	J(RETF(0));	// 1186                  retf ;~ 01A2:0664

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____exit: 	goto ____exit;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____cexit(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____cexit:
    _begin:
cs=0x1a2;eip=0x000665; 	T(XOR(ax, ax));	// 1196                  xor     ax, ax ;~ 01A2:0665
cs=0x1a2;eip=0x000667; 	X(PUSH(ax));	// 1197                  push    ax ;~ 01A2:0667
cs=0x1a2;eip=0x000668; 	T(ax = 1;);	// 1198                  mov     ax, 1 ;~ 01A2:0668
cs=0x1a2;eip=0x00066b; 	X(PUSH(ax));	// 1199                  push    ax ;~ 01A2:066B
cs=0x1a2;eip=0x00066c; 	T(XOR(ax, ax));	// 1200                  xor     ax, ax ;~ 01A2:066C
cs=0x1a2;eip=0x00066e; 	X(PUSH(ax));	// 1201                  push    ax ;~ 01A2:066E
cs=0x1a2;eip=0x00066f; 	J(CALL(sub_105ed,0));	// 1202                  call    sub_105ED ;~ 01A2:066F
cs=0x1a2;eip=0x000672; 	J(RETF(0));	// 1203                  retf ;~ 01A2:0672

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____cexit: 	goto ____cexit;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____c_exit(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____c_exit:
    _begin:
cs=0x1a2;eip=0x000673; 	T(ax = 1;);	// 1213                  mov     ax, 1 ;~ 01A2:0673
cs=0x1a2;eip=0x000676; 	X(PUSH(ax));	// 1214                  push    ax ;~ 01A2:0676
cs=0x1a2;eip=0x000677; 	X(PUSH(ax));	// 1215                  push    ax ;~ 01A2:0677
cs=0x1a2;eip=0x000678; 	T(XOR(ax, ax));	// 1216                  xor     ax, ax ;~ 01A2:0678
cs=0x1a2;eip=0x00067a; 	X(PUSH(ax));	// 1217                  push    ax ;~ 01A2:067A
cs=0x1a2;eip=0x00067b; 	J(CALL(sub_105ed,0));	// 1218                  call    sub_105ED ;~ 01A2:067B
cs=0x1a2;eip=0x00067e; 	J(RETF(0));	// 1219                  retf ;~ 01A2:067E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____c_exit: 	goto ____c_exit;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool __lxmularb(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    __lxmularb:
    _begin:
cs=0x1a2;eip=0x00067f; 	X(PUSH(si));	// 1228                  push    si ;~ 01A2:067F
cs=0x1a2;eip=0x000680; 	T(XCHG(ax, si));	// 1229                  xchg    ax, si ;~ 01A2:0680
cs=0x1a2;eip=0x000681; 	T(XCHG(ax, dx));	// 1230                  xchg    ax, dx ;~ 01A2:0681
cs=0x1a2;eip=0x000682; 	T(TEST(ax, ax));	// 1231                  test    ax, ax ;~ 01A2:0682
cs=0x1a2;eip=0x000684; 	J(JZ(loc_10688));	// 1232                  jz      short loc_10688 ;~ 01A2:0684
cs=0x1a2;eip=0x000686; 	T(MUL1_2(bx));	// 1233                  mul     bx ;~ 01A2:0686
loc_10688:
	// 4428 
cs=0x1a2;eip=0x000688; 	J(JCXZ(loc_1068f));	// 1236                  jcxz    short loc_1068F ;~ 01A2:0688
cs=0x1a2;eip=0x00068a; 	T(XCHG(ax, cx));	// 1237                  xchg    ax, cx ;~ 01A2:068A
cs=0x1a2;eip=0x00068b; 	T(MUL1_2(si));	// 1238                  mul     si ;~ 01A2:068B
cs=0x1a2;eip=0x00068d; 	T(ADD(ax, cx));	// 1239                  add     ax, cx ;~ 01A2:068D
loc_1068f:
	// 4429 
cs=0x1a2;eip=0x00068f; 	T(XCHG(ax, si));	// 1242                  xchg    ax, si ;~ 01A2:068F
cs=0x1a2;eip=0x000690; 	T(MUL1_2(bx));	// 1243                  mul     bx ;~ 01A2:0690
cs=0x1a2;eip=0x000692; 	T(ADD(dx, si));	// 1244                  add     dx, si ;~ 01A2:0692
cs=0x1a2;eip=0x000694; 	X(POP(si));	// 1245                  pop     si ;~ 01A2:0694
cs=0x1a2;eip=0x000695; 	J(RETF(0));	// 1246                  retf ;~ 01A2:0695

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k__lxmularb: 	goto __lxmularb;
        case m2c::kloc_10688: 	goto loc_10688;
        case m2c::kloc_1068f: 	goto loc_1068f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___getdate(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___getdate:
    _begin:
#undef datep
#define datep 6
	// 1257 datep           = dword ptr  6 ;~ 01A2:0696
cs=0x1a2;eip=0x000696; 	X(PUSH(bp));	// 1259                  push    bp ;~ 01A2:0696
cs=0x1a2;eip=0x000697; 	T(bp = sp;);	// 1260                  mov     bp, sp ;~ 01A2:0697
cs=0x1a2;eip=0x000699; 	T(ah = 0x2A;);	// 1261                  mov     ah, 2Ah ;~ 01A2:0699
cs=0x1a2;eip=0x00069b; 	S(_INT(0x21));	// 1262                  int     21h             ; DOS - GET CURRENT DATE ;~ 01A2:069B
cs=0x1a2;eip=0x00069d; 	T(LES(bx, *(dd*)(raddr(ss,bp+datep))));	// 1265                  les     bx, [bp+datep] ;~ 01A2:069D
cs=0x1a2;eip=0x0006a0; 	X(MOV(*(dw*)(raddr(es,bx)), cx));	// 1266                  mov     es:[bx], cx ;~ 01A2:06A0
cs=0x1a2;eip=0x0006a3; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 1267                  mov     es:[bx+2], dx ;~ 01A2:06A3
cs=0x1a2;eip=0x0006a7; 	X(POP(bp));	// 1268                  pop     bp ;~ 01A2:06A7
cs=0x1a2;eip=0x0006a8; 	J(RETF(0));	// 1269                  retf ;~ 01A2:06A8

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___getdate: 	goto ___getdate;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___gettime(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___gettime:
    _begin:
#undef timep
#define timep 6
	// 1281 timep           = dword ptr  6 ;~ 01A2:06A9
cs=0x1a2;eip=0x0006a9; 	X(PUSH(bp));	// 1283                  push    bp ;~ 01A2:06A9
cs=0x1a2;eip=0x0006aa; 	T(bp = sp;);	// 1284                  mov     bp, sp ;~ 01A2:06AA
cs=0x1a2;eip=0x0006ac; 	T(ah = 0x2C;);	// 1285                  mov     ah, 2Ch ;~ 01A2:06AC
cs=0x1a2;eip=0x0006ae; 	S(_INT(0x21));	// 1286                  int     21h             ; DOS - GET CURRENT TIME ;~ 01A2:06AE
cs=0x1a2;eip=0x0006b0; 	T(LES(bx, *(dd*)(raddr(ss,bp+timep))));	// 1289                  les     bx, [bp+timep] ;~ 01A2:06B0
cs=0x1a2;eip=0x0006b3; 	X(MOV(*(dw*)(raddr(es,bx)), cx));	// 1290                  mov     es:[bx], cx ;~ 01A2:06B3
cs=0x1a2;eip=0x0006b6; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 1291                  mov     es:[bx+2], dx ;~ 01A2:06B6
cs=0x1a2;eip=0x0006ba; 	X(POP(bp));	// 1292                  pop     bp ;~ 01A2:06BA
cs=0x1a2;eip=0x0006bb; 	J(RETF(0));	// 1293                  retf ;~ 01A2:06BB

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___gettime: 	goto ___gettime;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___getvect(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___getvect:
    _begin:
#undef interruptno
#define interruptno 6
	// 1305 interruptno     = word ptr  6 ;~ 01A2:06BC
cs=0x1a2;eip=0x0006bc; 	X(PUSH(bp));	// 1307                  push    bp ;~ 01A2:06BC
cs=0x1a2;eip=0x0006bd; 	T(bp = sp;);	// 1308                  mov     bp, sp ;~ 01A2:06BD
cs=0x1a2;eip=0x0006bf; 	T(ah = 0x35;);	// 1309                  mov     ah, 35h ; '5' ;~ 01A2:06BF
cs=0x1a2;eip=0x0006c1; 	T(MOV(al, *(raddr(ss,bp+interruptno))));	// 1310                  mov     al, byte ptr [bp+interruptno] ;~ 01A2:06C1
cs=0x1a2;eip=0x0006c4; 	S(_INT(0x21));	// 1311                  int     21h             ; DOS - 2+ - GET INTERRUPT VECTOR ;~ 01A2:06C4
cs=0x1a2;eip=0x0006c6; 	T(XCHG(ax, bx));	// 1315                  xchg    ax, bx ;~ 01A2:06C6
cs=0x1a2;eip=0x0006c7; 	T(dx = es;);	// 1316                  mov     dx, es ;~ 01A2:06C7
cs=0x1a2;eip=0x0006c9; 	X(POP(bp));	// 1317                  pop     bp ;~ 01A2:06C9
cs=0x1a2;eip=0x0006ca; 	J(RETF(0));	// 1318                  retf ;~ 01A2:06CA

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___getvect: 	goto ___getvect;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___setvect(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___setvect:
    _begin:
#undef interruptno
#define interruptno 6
	// 1330 interruptno     = word ptr  6 ;~ 01A2:06CB
#undef isr
#define isr 8
	// 1331 isr             = dword ptr  8 ;~ 01A2:06CB
cs=0x1a2;eip=0x0006cb; 	X(PUSH(bp));	// 1333                  push    bp ;~ 01A2:06CB
cs=0x1a2;eip=0x0006cc; 	T(bp = sp;);	// 1334                  mov     bp, sp ;~ 01A2:06CC
cs=0x1a2;eip=0x0006ce; 	T(ah = 0x25;);	// 1335                  mov     ah, 25h ; '%' ;~ 01A2:06CE
cs=0x1a2;eip=0x0006d0; 	T(MOV(al, *(raddr(ss,bp+interruptno))));	// 1336                  mov     al, byte ptr [bp+interruptno] ;~ 01A2:06D0
cs=0x1a2;eip=0x0006d3; 	X(PUSH(ds));	// 1337                  push    ds ;~ 01A2:06D3
cs=0x1a2;eip=0x0006d4; 	T(LDS(dx, *(dd*)(raddr(ss,bp+isr))));	// 1338                  lds     dx, [bp+isr] ;~ 01A2:06D4
cs=0x1a2;eip=0x0006d7; 	S(_INT(0x21));	// 1340                  int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 01A2:06D7
cs=0x1a2;eip=0x0006d9; 	X(POP(ds));	// 1343                  pop     ds ;~ 01A2:06D9
cs=0x1a2;eip=0x0006da; 	X(POP(bp));	// 1345                  pop     bp ;~ 01A2:06DA
cs=0x1a2;eip=0x0006db; 	J(RETF(0));	// 1346                  retf ;~ 01A2:06DB

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___setvect: 	goto ___setvect;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool __n_lxlsharb(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    __n_lxlsharb:
    _begin:
cs=0x1a2;eip=0x0006dc; 	X(POP(bx));	// 1355                  pop     bx ;~ 01A2:06DC
cs=0x1a2;eip=0x0006dd; 	X(PUSH(cs));	// 1356                  push    cs ;~ 01A2:06DD
cs=0x1a2;eip=0x0006de; 	X(PUSH(bx));	// 1357                  push    bx ;~ 01A2:06DE
__lxlsharb:
	// 4430 
cs=0x1a2;eip=0x0006df; 	T(CMP(cl, 0x10));	// 1360                  cmp     cl, 10h ;~ 01A2:06DF
cs=0x1a2;eip=0x0006e2; 	J(JNC(loc_106f4));	// 1361                  jnb     short loc_106F4 ;~ 01A2:06E2
cs=0x1a2;eip=0x0006e4; 	T(bx = ax;);	// 1362                  mov     bx, ax ;~ 01A2:06E4
cs=0x1a2;eip=0x0006e6; 	T(SHL(ax, cl));	// 1363                  shl     ax, cl ;~ 01A2:06E6
cs=0x1a2;eip=0x0006e8; 	T(SHL(dx, cl));	// 1364                  shl     dx, cl ;~ 01A2:06E8
cs=0x1a2;eip=0x0006ea; 	T(NEG(cl));	// 1365                  neg     cl ;~ 01A2:06EA
cs=0x1a2;eip=0x0006ec; 	T(ADD(cl, 0x10));	// 1366                  add     cl, 10h ;~ 01A2:06EC
cs=0x1a2;eip=0x0006ef; 	T(SHR(bx, cl));	// 1367                  shr     bx, cl ;~ 01A2:06EF
cs=0x1a2;eip=0x0006f1; 	T(OR(dx, bx));	// 1368                  or      dx, bx ;~ 01A2:06F1
cs=0x1a2;eip=0x0006f3; 	J(RETF(0));	// 1369                  retf ;~ 01A2:06F3
loc_106f4:
	// 4431 
cs=0x1a2;eip=0x0006f4; 	T(SUB(cl, 0x10));	// 1373                  sub     cl, 10h ;~ 01A2:06F4
cs=0x1a2;eip=0x0006f7; 	T(XCHG(ax, dx));	// 1374                  xchg    ax, dx ;~ 01A2:06F7
cs=0x1a2;eip=0x0006f8; 	T(XOR(ax, ax));	// 1375                  xor     ax, ax ;~ 01A2:06F8
cs=0x1a2;eip=0x0006fa; 	T(SHL(dx, cl));	// 1376                  shl     dx, cl ;~ 01A2:06FA
cs=0x1a2;eip=0x0006fc; 	J(RETF(0));	// 1377                  retf ;~ 01A2:06FC

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k__lxlsharb: 	goto __lxlsharb;
        case m2c::k__n_lxlsharb: 	goto __n_lxlsharb;
        case m2c::kloc_106f4: 	goto loc_106f4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool __n_paddarb(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    __n_paddarb:
    _begin:
cs=0x1a2;eip=0x0006fd; 	X(POP(es));	// 1387                  pop     es ;~ 01A2:06FD
cs=0x1a2;eip=0x0006fe; 	X(PUSH(cs));	// 1389                  push    cs ;~ 01A2:06FE
cs=0x1a2;eip=0x0006ff; 	X(PUSH(es));	// 1390                  push    es ;~ 01A2:06FF
__f_paddarb:
	// 4432 
cs=0x1a2;eip=0x000700; 	T(OR(cx, cx));	// 1393                  or      cx, cx ;~ 01A2:0700
cs=0x1a2;eip=0x000702; 	J(JGE(loc_10710));	// 1394                  jge     short loc_10710 ;~ 01A2:0702
cs=0x1a2;eip=0x000704; 	T(NOT(bx));	// 1395                  not     bx ;~ 01A2:0704
cs=0x1a2;eip=0x000706; 	T(NOT(cx));	// 1396                  not     cx ;~ 01A2:0706
cs=0x1a2;eip=0x000708; 	T(ADD(bx, 1));	// 1397                  add     bx, 1 ;~ 01A2:0708
cs=0x1a2;eip=0x00070b; 	T(ADC(cx, 0));	// 1398                  adc     cx, 0 ;~ 01A2:070B
cs=0x1a2;eip=0x00070e; 	J(JMP(loc_1073f));	// 1399                  jmp     short loc_1073F ;~ 01A2:070E
loc_10710:
	// 4433 
cs=0x1a2;eip=0x000710; 	T(ADD(ax, bx));	// 1404                  add     ax, bx ;~ 01A2:0710
cs=0x1a2;eip=0x000712; 	J(JNC(loc_10718));	// 1405                  jnb     short loc_10718 ;~ 01A2:0712
cs=0x1a2;eip=0x000714; 	T(ADD(dx, 0x1000));	// 1406                  add     dx, 1000h ;~ 01A2:0714
loc_10718:
	// 4434 
cs=0x1a2;eip=0x000718; 	T(ch = cl;);	// 1409                  mov     ch, cl ;~ 01A2:0718
cs=0x1a2;eip=0x00071a; 	T(cl = 4;);	// 1410                  mov     cl, 4 ;~ 01A2:071A
cs=0x1a2;eip=0x00071c; 	T(SHL(ch, cl));	// 1411                  shl     ch, cl ;~ 01A2:071C
cs=0x1a2;eip=0x00071e; 	T(ADD(dh, ch));	// 1412                  add     dh, ch ;~ 01A2:071E
cs=0x1a2;eip=0x000720; 	T(ch = al;);	// 1413                  mov     ch, al ;~ 01A2:0720
cs=0x1a2;eip=0x000722; 	T(SHR(ax, cl));	// 1414                  shr     ax, cl ;~ 01A2:0722
cs=0x1a2;eip=0x000724; 	T(ADD(dx, ax));	// 1415                  add     dx, ax ;~ 01A2:0724
cs=0x1a2;eip=0x000726; 	T(al = ch;);	// 1416                  mov     al, ch ;~ 01A2:0726
cs=0x1a2;eip=0x000728; 	T(AND(ax, 0x0F));	// 1417                  and     ax, 0Fh ;~ 01A2:0728
cs=0x1a2;eip=0x00072b; 	J(RETF(0));	// 1418                  retf ;~ 01A2:072B
__n_psubarb:
	// 4435 
cs=0x1a2;eip=0x00072c; 	X(POP(es));	// 1422                  pop     es ;~ 01A2:072C
cs=0x1a2;eip=0x00072d; 	X(PUSH(cs));	// 1424                  push    cs ;~ 01A2:072D
cs=0x1a2;eip=0x00072e; 	X(PUSH(es));	// 1425                  push    es ;~ 01A2:072E
__f_psubarb:
	// 4436 
cs=0x1a2;eip=0x00072f; 	T(OR(cx, cx));	// 1428                  or      cx, cx ;~ 01A2:072F
cs=0x1a2;eip=0x000731; 	J(JGE(loc_1073f));	// 1429                  jge     short loc_1073F ;~ 01A2:0731
cs=0x1a2;eip=0x000733; 	T(NOT(bx));	// 1430                  not     bx ;~ 01A2:0733
cs=0x1a2;eip=0x000735; 	T(NOT(cx));	// 1431                  not     cx ;~ 01A2:0735
cs=0x1a2;eip=0x000737; 	T(ADD(bx, 1));	// 1432                  add     bx, 1 ;~ 01A2:0737
cs=0x1a2;eip=0x00073a; 	T(ADC(cx, 0));	// 1433                  adc     cx, 0 ;~ 01A2:073A
cs=0x1a2;eip=0x00073d; 	J(JMP(loc_10710));	// 1434                  jmp     short loc_10710 ;~ 01A2:073D
loc_1073f:
	// 4437 
cs=0x1a2;eip=0x00073f; 	T(SUB(ax, bx));	// 1439                  sub     ax, bx ;~ 01A2:073F
cs=0x1a2;eip=0x000741; 	J(JNC(loc_10747));	// 1440                  jnb     short loc_10747 ;~ 01A2:0741
cs=0x1a2;eip=0x000743; 	T(SUB(dx, 0x1000));	// 1441                  sub     dx, 1000h ;~ 01A2:0743
loc_10747:
	// 4438 
cs=0x1a2;eip=0x000747; 	T(bh = cl;);	// 1444                  mov     bh, cl ;~ 01A2:0747
cs=0x1a2;eip=0x000749; 	T(cl = 4;);	// 1445                  mov     cl, 4 ;~ 01A2:0749
cs=0x1a2;eip=0x00074b; 	T(SHL(bh, cl));	// 1446                  shl     bh, cl ;~ 01A2:074B
cs=0x1a2;eip=0x00074d; 	T(XOR(bl, bl));	// 1447                  xor     bl, bl ;~ 01A2:074D
cs=0x1a2;eip=0x00074f; 	T(SUB(dx, bx));	// 1448                  sub     dx, bx ;~ 01A2:074F
cs=0x1a2;eip=0x000751; 	T(ch = al;);	// 1449                  mov     ch, al ;~ 01A2:0751
cs=0x1a2;eip=0x000753; 	T(SHR(ax, cl));	// 1450                  shr     ax, cl ;~ 01A2:0753
cs=0x1a2;eip=0x000755; 	T(ADD(dx, ax));	// 1451                  add     dx, ax ;~ 01A2:0755
cs=0x1a2;eip=0x000757; 	T(al = ch;);	// 1452                  mov     al, ch ;~ 01A2:0757
cs=0x1a2;eip=0x000759; 	T(AND(ax, 0x0F));	// 1453                  and     ax, 0Fh ;~ 01A2:0759
cs=0x1a2;eip=0x00075c; 	J(RETF(0));	// 1454                  retf ;~ 01A2:075C

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k__f_paddarb: 	goto __f_paddarb;
        case m2c::k__f_psubarb: 	goto __f_psubarb;
        case m2c::k__n_paddarb: 	goto __n_paddarb;
        case m2c::k__n_psubarb: 	goto __n_psubarb;
        case m2c::kloc_10710: 	goto loc_10710;
        case m2c::kloc_10718: 	goto loc_10718;
        case m2c::kloc_1073f: 	goto loc_1073f;
        case m2c::kloc_10747: 	goto loc_10747;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool __n_psbparb(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    __n_psbparb:
    _begin:
cs=0x1a2;eip=0x00075d; 	X(POP(es));	// 1464                  pop     es ;~ 01A2:075D
cs=0x1a2;eip=0x00075e; 	X(PUSH(cs));	// 1466                  push    cs ;~ 01A2:075E
cs=0x1a2;eip=0x00075f; 	X(PUSH(es));	// 1467                  push    es ;~ 01A2:075F
__psbparb:
	// 4439 
cs=0x1a2;eip=0x000760; 	X(PUSH(di));	// 1470                  push    di ;~ 01A2:0760
cs=0x1a2;eip=0x000761; 	T(di = cx;);	// 1471                  mov     di, cx ;~ 01A2:0761
cs=0x1a2;eip=0x000763; 	T(ch = dh;);	// 1472                  mov     ch, dh ;~ 01A2:0763
cs=0x1a2;eip=0x000765; 	T(cl = 4;);	// 1473                  mov     cl, 4 ;~ 01A2:0765
cs=0x1a2;eip=0x000767; 	T(SHL(dx, cl));	// 1474                  shl     dx, cl ;~ 01A2:0767
cs=0x1a2;eip=0x000769; 	T(SHR(ch, cl));	// 1475                  shr     ch, cl ;~ 01A2:0769
cs=0x1a2;eip=0x00076b; 	T(ADD(dx, ax));	// 1476                  add     dx, ax ;~ 01A2:076B
cs=0x1a2;eip=0x00076d; 	T(ADC(ch, 0));	// 1477                  adc     ch, 0 ;~ 01A2:076D
cs=0x1a2;eip=0x000770; 	T(ax = di;);	// 1478                  mov     ax, di ;~ 01A2:0770
cs=0x1a2;eip=0x000772; 	T(SHL(di, cl));	// 1479                  shl     di, cl ;~ 01A2:0772
cs=0x1a2;eip=0x000774; 	T(SHR(ah, cl));	// 1480                  shr     ah, cl ;~ 01A2:0774
cs=0x1a2;eip=0x000776; 	T(ADD(bx, di));	// 1481                  add     bx, di ;~ 01A2:0776
cs=0x1a2;eip=0x000778; 	T(ADC(ah, 0));	// 1482                  adc     ah, 0 ;~ 01A2:0778
cs=0x1a2;eip=0x00077b; 	T(SUB(dx, bx));	// 1483                  sub     dx, bx ;~ 01A2:077B
cs=0x1a2;eip=0x00077d; 	T(SBB(ch, ah));	// 1484                  sbb     ch, ah ;~ 01A2:077D
cs=0x1a2;eip=0x00077f; 	T(al = ch;);	// 1485                  mov     al, ch ;~ 01A2:077F
cs=0x1a2;eip=0x000781; 	T(CBW);	// 1486                  cbw ;~ 01A2:0781
cs=0x1a2;eip=0x000782; 	T(XCHG(ax, dx));	// 1487                  xchg    ax, dx ;~ 01A2:0782
cs=0x1a2;eip=0x000783; 	X(POP(di));	// 1488                  pop     di ;~ 01A2:0783
cs=0x1a2;eip=0x000784; 	J(RETF(0));	// 1489                  retf ;~ 01A2:0784

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k__n_psbparb: 	goto __n_psbparb;
        case m2c::k__psbparb: 	goto __psbparb;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____ioerror(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____ioerror:
    _begin:
#undef arg_0
#define arg_0 4
	// 1500 arg_0           = word ptr  4 ;~ 01A2:0785
cs=0x1a2;eip=0x000785; 	X(PUSH(bp));	// 1502                  push    bp ;~ 01A2:0785
cs=0x1a2;eip=0x000786; 	T(bp = sp;);	// 1503                  mov     bp, sp ;~ 01A2:0786
cs=0x1a2;eip=0x000788; 	X(PUSH(si));	// 1504                  push    si ;~ 01A2:0788
cs=0x1a2;eip=0x000789; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 1505                  mov     si, [bp+arg_0] ;~ 01A2:0789
cs=0x1a2;eip=0x00078c; 	T(OR(si, si));	// 1506                  or      si, si ;~ 01A2:078C
cs=0x1a2;eip=0x00078e; 	J(JL(loc_107a5));	// 1507                  jl      short loc_107A5 ;~ 01A2:078E
cs=0x1a2;eip=0x000790; 	T(CMP(si, 0x58));	// 1508                  cmp     si, 58h ; 'X' ;~ 01A2:0790
cs=0x1a2;eip=0x000793; 	J(JLE(loc_10798));	// 1509                  jle     short loc_10798 ;~ 01A2:0793
loc_10795:
	// 4440 
cs=0x1a2;eip=0x000795; 	T(si = 0x57;);	// 1512                  mov     si, 57h ; 'W' ;~ 01A2:0795
loc_10798:
	// 4441 
cs=0x1a2;eip=0x000798; 	X(*(dw*)(&byte_1916e) = si;);	// 1515                  mov     word ptr byte_1916E, si ;~ 01A2:0798
cs=0x1a2;eip=0x00079c; 	T(MOV(al, *(raddr(ds,si+0x890))));	// 1516                  mov     al, [si+890h] ;~ 01A2:079C
cs=0x1a2;eip=0x0007a0; 	T(CBW);	// 1517                  cbw ;~ 01A2:07A0
cs=0x1a2;eip=0x0007a1; 	T(si = ax;);	// 1518                  mov     si, ax ;~ 01A2:07A1
cs=0x1a2;eip=0x0007a3; 	J(JMP(loc_107b2));	// 1519                  jmp     short loc_107B2 ;~ 01A2:07A3
loc_107a5:
	// 4442 
cs=0x1a2;eip=0x0007a5; 	T(NEG(si));	// 1523                  neg     si ;~ 01A2:07A5
cs=0x1a2;eip=0x0007a7; 	T(CMP(si, 0x30));	// 1524                  cmp     si, 30h ; '0' ;~ 01A2:07A7
cs=0x1a2;eip=0x0007aa; 	J(JG(loc_10795));	// 1525                  jg      short loc_10795 ;~ 01A2:07AA
cs=0x1a2;eip=0x0007ac; 	X(*(dw*)(&byte_1916e) = 0x0FFFF;);	// 1526                  mov     word ptr byte_1916E, 0FFFFh ;~ 01A2:07AC
loc_107b2:
	// 4443 
cs=0x1a2;eip=0x0007b2; 	X(*(dw*)(&byte_1895f) = si;);	// 1529                  mov     word ptr byte_1895F, si ;~ 01A2:07B2
cs=0x1a2;eip=0x0007b6; 	T(ax = 0x0FFFF;);	// 1530                  mov     ax, 0FFFFh ;~ 01A2:07B6
cs=0x1a2;eip=0x0007b9; 	X(POP(si));	// 1531                  pop     si ;~ 01A2:07B9
cs=0x1a2;eip=0x0007ba; 	X(POP(bp));	// 1532                  pop     bp ;~ 01A2:07BA
cs=0x1a2;eip=0x0007bb; 	J(RETN(2));	// 1533                  retn    2 ;~ 01A2:07BB

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____ioerror: 	goto ____ioerror;
        case m2c::kloc_10795: 	goto loc_10795;
        case m2c::kloc_10798: 	goto loc_10798;
        case m2c::kloc_107a5: 	goto loc_107a5;
        case m2c::kloc_107b2: 	goto loc_107b2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____doserror(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____doserror:
    _begin:
#undef arg_0
#define arg_0 4
	// 1544 arg_0           = word ptr  4 ;~ 01A2:07BE
cs=0x1a2;eip=0x0007be; 	X(PUSH(bp));	// 1546                  push    bp ;~ 01A2:07BE
cs=0x1a2;eip=0x0007bf; 	T(bp = sp;);	// 1547                  mov     bp, sp ;~ 01A2:07BF
cs=0x1a2;eip=0x0007c1; 	X(PUSH(si));	// 1548                  push    si ;~ 01A2:07C1
cs=0x1a2;eip=0x0007c2; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 1549                  mov     si, [bp+arg_0] ;~ 01A2:07C2
cs=0x1a2;eip=0x0007c5; 	X(PUSH(si));	// 1550                  push    si ;~ 01A2:07C5
cs=0x1a2;eip=0x0007c6; 	J(CALL(____ioerror,0));	// 1551                  call    ____IOERROR ;~ 01A2:07C6
cs=0x1a2;eip=0x0007c9; 	T(ax = si;);	// 1552                  mov     ax, si ;~ 01A2:07C9
cs=0x1a2;eip=0x0007cb; 	X(POP(si));	// 1553                  pop     si ;~ 01A2:07CB
cs=0x1a2;eip=0x0007cc; 	X(POP(bp));	// 1554                  pop     bp ;~ 01A2:07CC
cs=0x1a2;eip=0x0007cd; 	J(RETN(2));	// 1555                  retn    2 ;~ 01A2:07CD

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____doserror: 	goto ____doserror;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___isatty(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___isatty:
    _begin:
#undef handle
#define handle 6
	// 1568 handle          = word ptr  6 ;~ 01A2:07D0
cs=0x1a2;eip=0x0007d0; 	X(PUSH(bp));	// 1570                  push    bp ;~ 01A2:07D0
cs=0x1a2;eip=0x0007d1; 	T(bp = sp;);	// 1571                  mov     bp, sp ;~ 01A2:07D1
cs=0x1a2;eip=0x0007d3; 	T(ax = 0x4400;);	// 1572                  mov     ax, 4400h ;~ 01A2:07D3
cs=0x1a2;eip=0x0007d6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+handle))));	// 1573                  mov     bx, [bp+handle] ;~ 01A2:07D6
cs=0x1a2;eip=0x0007d9; 	S(_INT(0x21));	// 1574                  int     21h             ; DOS - 2+ - IOCTL - GET DEVICE INFORMATION ;~ 01A2:07D9
cs=0x1a2;eip=0x0007db; 	T(XCHG(ax, dx));	// 1576                  xchg    ax, dx ;~ 01A2:07DB
cs=0x1a2;eip=0x0007dc; 	T(AND(ax, 0x80));	// 1577                  and     ax, 80h ;~ 01A2:07DC
cs=0x1a2;eip=0x0007df; 	X(POP(bp));	// 1578                  pop     bp ;~ 01A2:07DF
cs=0x1a2;eip=0x0007e0; 	J(RETF(0));	// 1579                  retf ;~ 01A2:07E0

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___isatty: 	goto ___isatty;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____longtoa(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____longtoa:
    _begin:
#undef var_22
#define var_22 -0x22
	// 1590 var_22          = byte ptr -22h ;~ 01A2:07E1
#undef arg_0
#define arg_0 4
	// 1591 arg_0           = byte ptr  4 ;~ 01A2:07E1
#undef arg_2
#define arg_2 6
	// 1592 arg_2           = byte ptr  6 ;~ 01A2:07E1
#undef arg_4
#define arg_4 8
	// 1593 arg_4           = word ptr  8 ;~ 01A2:07E1
#undef arg_6
#define arg_6 0x0A
	// 1594 arg_6           = dword ptr  0Ah ;~ 01A2:07E1
#undef arg_a
#define arg_a 0x0E
	// 1595 arg_A           = word ptr  0Eh ;~ 01A2:07E1
#undef arg_c
#define arg_c 0x10
	// 1596 arg_C           = word ptr  10h ;~ 01A2:07E1
cs=0x1a2;eip=0x0007e1; 	X(PUSH(bp));	// 1598                  push    bp ;~ 01A2:07E1
cs=0x1a2;eip=0x0007e2; 	T(bp = sp;);	// 1599                  mov     bp, sp ;~ 01A2:07E2
cs=0x1a2;eip=0x0007e4; 	T(SUB(sp, 0x22));	// 1600                  sub     sp, 22h ;~ 01A2:07E4
cs=0x1a2;eip=0x0007e7; 	X(PUSH(si));	// 1601                  push    si ;~ 01A2:07E7
cs=0x1a2;eip=0x0007e8; 	X(PUSH(di));	// 1602                  push    di ;~ 01A2:07E8
cs=0x1a2;eip=0x0007e9; 	X(PUSH(es));	// 1603                  push    es ;~ 01A2:07E9
cs=0x1a2;eip=0x0007ea; 	T(LES(di, *(dd*)(raddr(ss,bp+arg_6))));	// 1604                  les     di, [bp+arg_6] ;~ 01A2:07EA
cs=0x1a2;eip=0x0007ed; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 1606                  mov     bx, [bp+arg_4] ;~ 01A2:07ED
cs=0x1a2;eip=0x0007f0; 	T(CMP(bx, 0x24));	// 1607                  cmp     bx, 24h ; '$' ;~ 01A2:07F0
cs=0x1a2;eip=0x0007f3; 	J(JA(loc_10851));	// 1608                  ja      short loc_10851 ;~ 01A2:07F3
cs=0x1a2;eip=0x0007f5; 	T(CMP(bl, 2));	// 1609                  cmp     bl, 2 ;~ 01A2:07F5
cs=0x1a2;eip=0x0007f8; 	J(JC(loc_10851));	// 1610                  jb      short loc_10851 ;~ 01A2:07F8
cs=0x1a2;eip=0x0007fa; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 1611                  mov     ax, [bp+arg_A] ;~ 01A2:07FA
cs=0x1a2;eip=0x0007fd; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_c))));	// 1612                  mov     cx, [bp+arg_C] ;~ 01A2:07FD
cs=0x1a2;eip=0x000800; 	T(OR(cx, cx));	// 1613                  or      cx, cx ;~ 01A2:0800
cs=0x1a2;eip=0x000802; 	J(JGE(loc_10816));	// 1614                  jge     short loc_10816 ;~ 01A2:0802
cs=0x1a2;eip=0x000804; 	T(CMP(*(raddr(ss,bp+arg_2)), 0));	// 1615                  cmp     [bp+arg_2], 0 ;~ 01A2:0804
cs=0x1a2;eip=0x000808; 	J(JZ(loc_10816));	// 1616                  jz      short loc_10816 ;~ 01A2:0808
cs=0x1a2;eip=0x00080a; 	X(MOV(*(raddr(es,di)), 0x2D));	// 1617                  mov     byte ptr es:[di], 2Dh ; '-' ;~ 01A2:080A
cs=0x1a2;eip=0x00080e; 	T(INC(di));	// 1618                  inc     di ;~ 01A2:080E
cs=0x1a2;eip=0x00080f; 	T(NEG(cx));	// 1619                  neg     cx ;~ 01A2:080F
cs=0x1a2;eip=0x000811; 	T(NEG(ax));	// 1620                  neg     ax ;~ 01A2:0811
cs=0x1a2;eip=0x000813; 	T(SBB(cx, 0));	// 1621                  sbb     cx, 0 ;~ 01A2:0813
loc_10816:
	// 4444 
cs=0x1a2;eip=0x000816; 	T(si = bp+var_22);	// 1625                  lea     si, [bp+var_22] ;~ 01A2:0816
cs=0x1a2;eip=0x000819; 	J(JCXZ(loc_1082b));	// 1626                  jcxz    short loc_1082B ;~ 01A2:0819
loc_1081b:
	// 4445 
cs=0x1a2;eip=0x00081b; 	T(XCHG(ax, cx));	// 1629                  xchg    ax, cx ;~ 01A2:081B
cs=0x1a2;eip=0x00081c; 	T(SUB(dx, dx));	// 1630                  sub     dx, dx ;~ 01A2:081C
cs=0x1a2;eip=0x00081e; 	T(DIV2(bx));	// 1631                  div     bx ;~ 01A2:081E
cs=0x1a2;eip=0x000820; 	T(XCHG(ax, cx));	// 1632                  xchg    ax, cx ;~ 01A2:0820
cs=0x1a2;eip=0x000821; 	T(DIV2(bx));	// 1633                  div     bx ;~ 01A2:0821
cs=0x1a2;eip=0x000823; 	X(MOV(*(raddr(ss,si)), dl));	// 1634                  mov     ss:[si], dl ;~ 01A2:0823
cs=0x1a2;eip=0x000826; 	T(INC(si));	// 1635                  inc     si ;~ 01A2:0826
cs=0x1a2;eip=0x000827; 	J(JCXZ(loc_10833));	// 1636                  jcxz    short loc_10833 ;~ 01A2:0827
cs=0x1a2;eip=0x000829; 	J(JMP(loc_1081b));	// 1637                  jmp     short loc_1081B ;~ 01A2:0829
loc_1082b:
	// 4446 
cs=0x1a2;eip=0x00082b; 	T(SUB(dx, dx));	// 1642                  sub     dx, dx ;~ 01A2:082B
cs=0x1a2;eip=0x00082d; 	T(DIV2(bx));	// 1643                  div     bx ;~ 01A2:082D
cs=0x1a2;eip=0x00082f; 	X(MOV(*(raddr(ss,si)), dl));	// 1644                  mov     ss:[si], dl ;~ 01A2:082F
cs=0x1a2;eip=0x000832; 	T(INC(si));	// 1645                  inc     si ;~ 01A2:0832
loc_10833:
	// 4447 
cs=0x1a2;eip=0x000833; 	T(OR(ax, ax));	// 1648                  or      ax, ax ;~ 01A2:0833
cs=0x1a2;eip=0x000835; 	J(JNZ(loc_1082b));	// 1649                  jnz     short loc_1082B ;~ 01A2:0835
cs=0x1a2;eip=0x000837; 	T(cx = bp+var_22);	// 1650                  lea     cx, [bp+var_22] ;~ 01A2:0837
cs=0x1a2;eip=0x00083a; 	T(NEG(cx));	// 1651                  neg     cx ;~ 01A2:083A
cs=0x1a2;eip=0x00083c; 	T(ADD(cx, si));	// 1652                  add     cx, si ;~ 01A2:083C
cs=0x1a2;eip=0x00083e; 	T(CLD);	// 1653                  cld ;~ 01A2:083E
loc_1083f:
	// 4448 
cs=0x1a2;eip=0x00083f; 	T(DEC(si));	// 1656                  dec     si ;~ 01A2:083F
cs=0x1a2;eip=0x000840; 	T(MOV(al, *(raddr(ss,si))));	// 1657                  mov     al, ss:[si] ;~ 01A2:0840
cs=0x1a2;eip=0x000843; 	T(SUB(al, 0x0A));	// 1658                  sub     al, 0Ah ;~ 01A2:0843
cs=0x1a2;eip=0x000845; 	J(JNC(loc_1084b));	// 1659                  jnb     short loc_1084B ;~ 01A2:0845
cs=0x1a2;eip=0x000847; 	T(ADD(al, 0x3A));	// 1660                  add     al, 3Ah ; ':' ;~ 01A2:0847
cs=0x1a2;eip=0x000849; 	J(JMP(loc_1084e));	// 1661                  jmp     short loc_1084E ;~ 01A2:0849
loc_1084b:
	// 4449 
cs=0x1a2;eip=0x00084b; 	T(ADD(al, *(raddr(ss,bp+arg_0))));	// 1665                  add     al, [bp+arg_0] ;~ 01A2:084B
loc_1084e:
	// 4450 
cs=0x1a2;eip=0x00084e; 	X(STOSB);	// 1668                  stosb ;~ 01A2:084E
cs=0x1a2;eip=0x00084f; 	J(LOOP(loc_1083f));	// 1669                  loop    loc_1083F ;~ 01A2:084F
loc_10851:
	// 4451 
cs=0x1a2;eip=0x000851; 	T(al = 0;);	// 1673                  mov     al, 0 ;~ 01A2:0851
cs=0x1a2;eip=0x000853; 	X(STOSB);	// 1674                  stosb ;~ 01A2:0853
cs=0x1a2;eip=0x000854; 	X(POP(es));	// 1675                  pop     es ;~ 01A2:0854
cs=0x1a2;eip=0x000855; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6+2))));	// 1676                  mov     dx, word ptr [bp+arg_6+2] ;~ 01A2:0855
cs=0x1a2;eip=0x000858; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 1677                  mov     ax, word ptr [bp+arg_6] ;~ 01A2:0858
cs=0x1a2;eip=0x00085b; 	X(POP(di));	// 1678                  pop     di ;~ 01A2:085B
cs=0x1a2;eip=0x00085c; 	X(POP(si));	// 1679                  pop     si ;~ 01A2:085C
cs=0x1a2;eip=0x00085d; 	T(sp = bp;);	// 1680                  mov     sp, bp ;~ 01A2:085D
cs=0x1a2;eip=0x00085f; 	X(POP(bp));	// 1681                  pop     bp ;~ 01A2:085F
cs=0x1a2;eip=0x000860; 	J(RETN(0x0E));	// 1682                  retn    0Eh ;~ 01A2:0860

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____longtoa: 	goto ____longtoa;
        case m2c::kloc_10816: 	goto loc_10816;
        case m2c::kloc_1081b: 	goto loc_1081b;
        case m2c::kloc_1082b: 	goto loc_1082b;
        case m2c::kloc_10833: 	goto loc_10833;
        case m2c::kloc_1083f: 	goto loc_1083f;
        case m2c::kloc_1084b: 	goto loc_1084b;
        case m2c::kloc_1084e: 	goto loc_1084e;
        case m2c::kloc_10851: 	goto loc_10851;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____utoa(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____utoa:
    _begin:
#undef arg_0
#define arg_0 4
	// 1692 arg_0           = word ptr  4 ;~ 01A2:0863
#undef arg_2
#define arg_2 6
	// 1693 arg_2           = word ptr  6 ;~ 01A2:0863
#undef arg_4
#define arg_4 8
	// 1694 arg_4           = word ptr  8 ;~ 01A2:0863
cs=0x1a2;eip=0x000863; 	X(PUSH(bp));	// 1696                  push    bp ;~ 01A2:0863
cs=0x1a2;eip=0x000864; 	T(bp = sp;);	// 1697                  mov     bp, sp ;~ 01A2:0864
cs=0x1a2;eip=0x000866; 	T(XOR(ax, ax));	// 1698                  xor     ax, ax ;~ 01A2:0866
cs=0x1a2;eip=0x000868; 	X(PUSH(ax));	// 1699                  push    ax ;~ 01A2:0868
cs=0x1a2;eip=0x000869; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 1700                  push    [bp+arg_4] ;~ 01A2:0869
cs=0x1a2;eip=0x00086c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 1701                  push    [bp+arg_2] ;~ 01A2:086C
cs=0x1a2;eip=0x00086f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 1702                  push    [bp+arg_0] ;~ 01A2:086F
cs=0x1a2;eip=0x000872; 	T(ax = 0x0A;);	// 1703                  mov     ax, 0Ah ;~ 01A2:0872
cs=0x1a2;eip=0x000875; 	X(PUSH(ax));	// 1704                  push    ax ;~ 01A2:0875
cs=0x1a2;eip=0x000876; 	T(al = 0;);	// 1705                  mov     al, 0 ;~ 01A2:0876
cs=0x1a2;eip=0x000878; 	X(PUSH(ax));	// 1706                  push    ax ;~ 01A2:0878
cs=0x1a2;eip=0x000879; 	T(al = 0x61;);	// 1707                  mov     al, 61h ; 'a' ;~ 01A2:0879
cs=0x1a2;eip=0x00087b; 	X(PUSH(ax));	// 1708                  push    ax ;~ 01A2:087B
cs=0x1a2;eip=0x00087c; 	J(CALL(____longtoa,0));	// 1709                  call    ____LONGTOA ;~ 01A2:087C
cs=0x1a2;eip=0x00087f; 	X(POP(bp));	// 1710                  pop     bp ;~ 01A2:087F
cs=0x1a2;eip=0x000880; 	J(RETN(6));	// 1711                  retn    6 ;~ 01A2:0880

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____utoa: 	goto ____utoa;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___lseek(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___lseek:
    _begin:
#undef handle
#define handle 6
	// 1723 handle          = word ptr  6 ;~ 01A2:0883
#undef offset1
#define offset1 8
	// 1724 offset1         = dword ptr  8 ;~ 01A2:0883
#undef fromwhere
#define fromwhere 0x0C
	// 1725 fromwhere       = word ptr  0Ch ;~ 01A2:0883
cs=0x1a2;eip=0x000883; 	X(PUSH(bp));	// 1727                  push    bp ;~ 01A2:0883
cs=0x1a2;eip=0x000884; 	T(bp = sp;);	// 1728                  mov     bp, sp ;~ 01A2:0884
cs=0x1a2;eip=0x000886; 	T(MOV(bx, *(dw*)(raddr(ss,bp+handle))));	// 1729                  mov     bx, [bp+handle] ;~ 01A2:0886
cs=0x1a2;eip=0x000889; 	T(SHL(bx, 1));	// 1730                  shl     bx, 1 ;~ 01A2:0889
cs=0x1a2;eip=0x00088b; 	X(AND(*(dw*)(raddr(ds,bx+0x862)), 0x0FDFF));	// 1731                  and     word ptr [bx+862h], 0FDFFh ;~ 01A2:088B
cs=0x1a2;eip=0x000891; 	T(ah = 0x42;);	// 1732                  mov     ah, 42h ; 'B' ;~ 01A2:0891
cs=0x1a2;eip=0x000893; 	T(MOV(al, *(raddr(ss,bp+fromwhere))));	// 1733                  mov     al, byte ptr [bp+fromwhere] ;~ 01A2:0893
cs=0x1a2;eip=0x000896; 	T(MOV(bx, *(dw*)(raddr(ss,bp+handle))));	// 1734                  mov     bx, [bp+handle] ;~ 01A2:0896
cs=0x1a2;eip=0x000899; 	T(MOV(cx, *(dw*)(raddr(ss,bp+offset1+2))));	// 1735                  mov     cx, word ptr [bp+offset1+2] ;~ 01A2:0899
cs=0x1a2;eip=0x00089c; 	T(MOV(dx, *(dw*)(raddr(ss,bp+offset1))));	// 1736                  mov     dx, word ptr [bp+offset1] ;~ 01A2:089C
cs=0x1a2;eip=0x00089f; 	S(_INT(0x21));	// 1737                  int     21h             ; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) ;~ 01A2:089F
cs=0x1a2;eip=0x0008a1; 	J(JC(loc_108a5));	// 1740                  jb      short loc_108A5 ;~ 01A2:08A1
cs=0x1a2;eip=0x0008a3; 	J(JMP(loc_108aa));	// 1741                  jmp     short loc_108AA ;~ 01A2:08A3
loc_108a5:
	// 4452 
cs=0x1a2;eip=0x0008a5; 	X(PUSH(ax));	// 1745                  push    ax ;~ 01A2:08A5
cs=0x1a2;eip=0x0008a6; 	J(CALL(____ioerror,0));	// 1746                  call    ____IOERROR ;~ 01A2:08A6
cs=0x1a2;eip=0x0008a9; 	T(CWD);	// 1747                  cwd ;~ 01A2:08A9
loc_108aa:
	// 4453 
cs=0x1a2;eip=0x0008aa; 	X(POP(bp));	// 1750                  pop     bp ;~ 01A2:08AA
cs=0x1a2;eip=0x0008ab; 	J(RETF(0));	// 1751                  retf ;~ 01A2:08AB

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___lseek: 	goto ___lseek;
        case m2c::kloc_108a5: 	goto loc_108a5;
        case m2c::kloc_108aa: 	goto loc_108aa;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____mkname(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____mkname:
    _begin:
#undef arg_0
#define arg_0 4
	// 1763 arg_0           = word ptr  4 ;~ 01A2:08AC
#undef arg_2
#define arg_2 6
	// 1764 arg_2           = word ptr  6 ;~ 01A2:08AC
#undef arg_4
#define arg_4 8
	// 1765 arg_4           = word ptr  8 ;~ 01A2:08AC
#undef dest
#define dest 0x0A
	// 1766 dest            = dword ptr  0Ah ;~ 01A2:08AC
cs=0x1a2;eip=0x0008ac; 	X(PUSH(bp));	// 1768                  push    bp ;~ 01A2:08AC
cs=0x1a2;eip=0x0008ad; 	T(bp = sp;);	// 1769                  mov     bp, sp ;~ 01A2:08AD
cs=0x1a2;eip=0x0008af; 	T(MOV(ax, *(dw*)(raddr(ss,bp+dest))));	// 1770                  mov     ax, word ptr [bp+dest] ;~ 01A2:08AF
cs=0x1a2;eip=0x0008b2; 	T(OR(ax, *(dw*)(raddr(ss,bp+dest+2))));	// 1771                  or      ax, word ptr [bp+dest+2] ;~ 01A2:08B2
cs=0x1a2;eip=0x0008b5; 	J(JNZ(loc_108bf));	// 1772                  jnz     short loc_108BF ;~ 01A2:08B5
cs=0x1a2;eip=0x0008b7; 	X(MOV(*(dw*)(raddr(ss,bp+dest+2)), ds));	// 1773                  mov     word ptr [bp+dest+2], ds ;~ 01A2:08B7
cs=0x1a2;eip=0x0008ba; 	X(MOV(*(dw*)(raddr(ss,bp+dest)), 0x0B2E));	// 1774                  mov     word ptr [bp+dest], 0B2Eh ;~ 01A2:08BA
loc_108bf:
	// 4454 
cs=0x1a2;eip=0x0008bf; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 1777                  push    [bp+arg_0] ;~ 01A2:08BF
cs=0x1a2;eip=0x0008c2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 1778                  mov     ax, [bp+arg_2] ;~ 01A2:08C2
cs=0x1a2;eip=0x0008c5; 	T(OR(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 1779                  or      ax, [bp+arg_4] ;~ 01A2:08C5
cs=0x1a2;eip=0x0008c8; 	J(JNZ(loc_108d1));	// 1780                  jnz     short loc_108D1 ;~ 01A2:08C8
cs=0x1a2;eip=0x0008ca; 	T(dx = ds;);	// 1781                  mov     dx, ds ;~ 01A2:08CA
cs=0x1a2;eip=0x0008cc; 	T(ax = 0x8EA;);	// 1782                  mov     ax, 8EAh ;~ 01A2:08CC
cs=0x1a2;eip=0x0008cf; 	J(JMP(loc_108d7));	// 1783                  jmp     short loc_108D7 ;~ 01A2:08CF
loc_108d1:
	// 4455 
cs=0x1a2;eip=0x0008d1; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 1787                  mov     dx, [bp+arg_4] ;~ 01A2:08D1
cs=0x1a2;eip=0x0008d4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 1788                  mov     ax, [bp+arg_2] ;~ 01A2:08D4
loc_108d7:
	// 4456 
cs=0x1a2;eip=0x0008d7; 	X(PUSH(dx));	// 1791                  push    dx ;~ 01A2:08D7
cs=0x1a2;eip=0x0008d8; 	X(PUSH(ax));	// 1792                  push    ax              ; src ;~ 01A2:08D8
cs=0x1a2;eip=0x0008d9; 	X(PUSH(*(dw*)(raddr(ss,bp+dest+2))));	// 1793                  push    word ptr [bp+dest+2] ;~ 01A2:08D9
cs=0x1a2;eip=0x0008dc; 	X(PUSH(*(dw*)(raddr(ss,bp+dest))));	// 1794                  push    word ptr [bp+dest] ; dest ;~ 01A2:08DC
cs=0x1a2;eip=0x0008df; 	T(NOP);	// 1795                  nop ;~ 01A2:08DF
cs=0x1a2;eip=0x0008e0; 	X(PUSH(cs));	// 1796                  push    cs ;~ 01A2:08E0
cs=0x1a2;eip=0x0008e1; 	J(CALL(___stpcpy,0));	// 1797                  call    near ptr ___stpcpy ;~ 01A2:08E1
cs=0x1a2;eip=0x0008e4; 	T(ADD(sp, 8));	// 1798                  add     sp, 8 ;~ 01A2:08E4
cs=0x1a2;eip=0x0008e7; 	X(PUSH(dx));	// 1799                  push    dx ;~ 01A2:08E7
cs=0x1a2;eip=0x0008e8; 	X(PUSH(ax));	// 1800                  push    ax ;~ 01A2:08E8
cs=0x1a2;eip=0x0008e9; 	J(CALL(____utoa,0));	// 1801                  call    ____UTOA ;~ 01A2:08E9
cs=0x1a2;eip=0x0008ec; 	X(PUSH(ds));	// 1802                  push    ds ;~ 01A2:08EC
cs=0x1a2;eip=0x0008ed; 	T(ax = 0x8EE;);	// 1803                  mov     ax, 8EEh ;~ 01A2:08ED
cs=0x1a2;eip=0x0008f0; 	X(PUSH(ax));	// 1804                  push    ax              ; src ;~ 01A2:08F0
cs=0x1a2;eip=0x0008f1; 	X(PUSH(*(dw*)(raddr(ss,bp+dest+2))));	// 1805                  push    word ptr [bp+dest+2] ;~ 01A2:08F1
cs=0x1a2;eip=0x0008f4; 	X(PUSH(*(dw*)(raddr(ss,bp+dest))));	// 1806                  push    word ptr [bp+dest] ; dest ;~ 01A2:08F4
cs=0x1a2;eip=0x0008f7; 	T(NOP);	// 1807                  nop ;~ 01A2:08F7
cs=0x1a2;eip=0x0008f8; 	X(PUSH(cs));	// 1808                  push    cs ;~ 01A2:08F8
cs=0x1a2;eip=0x0008f9; 	J(CALL(___strcat,0));	// 1809                  call    near ptr ___strcat ;~ 01A2:08F9
cs=0x1a2;eip=0x0008fc; 	T(ADD(sp, 8));	// 1810                  add     sp, 8 ;~ 01A2:08FC
cs=0x1a2;eip=0x0008ff; 	T(MOV(dx, *(dw*)(raddr(ss,bp+dest+2))));	// 1811                  mov     dx, word ptr [bp+dest+2] ;~ 01A2:08FF
cs=0x1a2;eip=0x000902; 	T(MOV(ax, *(dw*)(raddr(ss,bp+dest))));	// 1812                  mov     ax, word ptr [bp+dest] ;~ 01A2:0902
cs=0x1a2;eip=0x000905; 	X(POP(bp));	// 1813                  pop     bp ;~ 01A2:0905
cs=0x1a2;eip=0x000906; 	J(RETN(0x0A));	// 1814                  retn    0Ah ;~ 01A2:0906

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____mkname: 	goto ____mkname;
        case m2c::kloc_108bf: 	goto loc_108bf;
        case m2c::kloc_108d1: 	goto loc_108d1;
        case m2c::kloc_108d7: 	goto loc_108d7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____tmpnam(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____tmpnam:
    _begin:
#undef attrib
#define attrib -2
	// 1825 attrib          = word ptr -2 ;~ 01A2:0909
#undef arg_0
#define arg_0 4
	// 1826 arg_0           = dword ptr  4 ;~ 01A2:0909
#undef filename
#define filename 8
	// 1827 filename        = dword ptr  8 ;~ 01A2:0909
cs=0x1a2;eip=0x000909; 	X(PUSH(bp));	// 1829                  push    bp ;~ 01A2:0909
cs=0x1a2;eip=0x00090a; 	T(bp = sp;);	// 1830                  mov     bp, sp ;~ 01A2:090A
cs=0x1a2;eip=0x00090c; 	T(SUB(sp, 2));	// 1831                  sub     sp, 2 ;~ 01A2:090C
loc_1090f:
	// 4457 
cs=0x1a2;eip=0x00090f; 	X(PUSH(*(dw*)(raddr(ss,bp+filename+2))));	// 1834                  push    word ptr [bp+filename+2] ;~ 01A2:090F
cs=0x1a2;eip=0x000912; 	X(PUSH(*(dw*)(raddr(ss,bp+filename))));	// 1835                  push    word ptr [bp+filename] ; dest ;~ 01A2:0912
cs=0x1a2;eip=0x000915; 	T(XOR(ax, ax));	// 1836                  xor     ax, ax ;~ 01A2:0915
cs=0x1a2;eip=0x000917; 	T(XOR(dx, dx));	// 1837                  xor     dx, dx ;~ 01A2:0917
cs=0x1a2;eip=0x000919; 	X(PUSH(ax));	// 1838                  push    ax              ; int ;~ 01A2:0919
cs=0x1a2;eip=0x00091a; 	X(PUSH(dx));	// 1839                  push    dx              ; int ;~ 01A2:091A
cs=0x1a2;eip=0x00091b; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 1840                  les     bx, [bp+arg_0] ;~ 01A2:091B
cs=0x1a2;eip=0x00091e; 	T(CMP(*(dw*)(raddr(es,bx)), 0x0FFFF));	// 1841                  cmp     word ptr es:[bx], 0FFFFh ;~ 01A2:091E
cs=0x1a2;eip=0x000922; 	J(JNZ(loc_10929));	// 1842                  jnz     short loc_10929 ;~ 01A2:0922
cs=0x1a2;eip=0x000924; 	T(ax = 2;);	// 1843                  mov     ax, 2 ;~ 01A2:0924
cs=0x1a2;eip=0x000927; 	J(JMP(loc_1092c));	// 1844                  jmp     short loc_1092C ;~ 01A2:0927
loc_10929:
	// 4458 
cs=0x1a2;eip=0x000929; 	T(ax = 1;);	// 1848                  mov     ax, 1 ;~ 01A2:0929
loc_1092c:
	// 4459 
cs=0x1a2;eip=0x00092c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 1851                  les     bx, [bp+arg_0] ;~ 01A2:092C
cs=0x1a2;eip=0x00092f; 	X(ADD(*(dw*)(raddr(es,bx)), ax));	// 1852                  add     es:[bx], ax ;~ 01A2:092F
cs=0x1a2;eip=0x000932; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 1853                  mov     ax, es:[bx] ;~ 01A2:0932
cs=0x1a2;eip=0x000935; 	X(PUSH(ax));	// 1854                  push    ax              ; int ;~ 01A2:0935
cs=0x1a2;eip=0x000936; 	J(CALL(____mkname,0));	// 1855                  call    ____MKNAME ;~ 01A2:0936
cs=0x1a2;eip=0x000939; 	X(MOV(*(dw*)(raddr(ss,bp+filename+2)), dx));	// 1856                  mov     word ptr [bp+filename+2], dx ;~ 01A2:0939
cs=0x1a2;eip=0x00093c; 	X(MOV(*(dw*)(raddr(ss,bp+filename)), ax));	// 1857                  mov     word ptr [bp+filename], ax ;~ 01A2:093C
cs=0x1a2;eip=0x00093f; 	X(PUSH(ss));	// 1858                  push    ss ;~ 01A2:093F
cs=0x1a2;eip=0x000940; 	T(ax = bp+attrib);	// 1859                  lea     ax, [bp+attrib] ;~ 01A2:0940
cs=0x1a2;eip=0x000943; 	X(PUSH(ax));	// 1860                  push    ax              ; attrib ;~ 01A2:0943
cs=0x1a2;eip=0x000944; 	X(PUSH(*(dw*)(raddr(ss,bp+filename+2))));	// 1861                  push    word ptr [bp+filename+2] ;~ 01A2:0944
cs=0x1a2;eip=0x000947; 	X(PUSH(*(dw*)(raddr(ss,bp+filename))));	// 1862                  push    word ptr [bp+filename] ; filename ;~ 01A2:0947
cs=0x1a2;eip=0x00094a; 	T(NOP);	// 1863                  nop ;~ 01A2:094A
cs=0x1a2;eip=0x00094b; 	X(PUSH(cs));	// 1864                  push    cs ;~ 01A2:094B
cs=0x1a2;eip=0x00094c; 	J(CALL(____dos_getfileattr,0));	// 1865                  call    near ptr ____dos_getfileattr ;~ 01A2:094C
cs=0x1a2;eip=0x00094f; 	T(ADD(sp, 8));	// 1866                  add     sp, 8 ;~ 01A2:094F
cs=0x1a2;eip=0x000952; 	T(OR(ax, ax));	// 1867                  or      ax, ax ;~ 01A2:0952
cs=0x1a2;eip=0x000954; 	J(JZ(loc_1090f));	// 1868                  jz      short loc_1090F ;~ 01A2:0954
cs=0x1a2;eip=0x000956; 	T(MOV(dx, *(dw*)(raddr(ss,bp+filename+2))));	// 1869                  mov     dx, word ptr [bp+filename+2] ;~ 01A2:0956
cs=0x1a2;eip=0x000959; 	T(MOV(ax, *(dw*)(raddr(ss,bp+filename))));	// 1870                  mov     ax, word ptr [bp+filename] ;~ 01A2:0959
cs=0x1a2;eip=0x00095c; 	T(sp = bp;);	// 1871                  mov     sp, bp ;~ 01A2:095C
cs=0x1a2;eip=0x00095e; 	X(POP(bp));	// 1872                  pop     bp ;~ 01A2:095E
cs=0x1a2;eip=0x00095f; 	J(RETN(8));	// 1873                  retn    8 ;~ 01A2:095F

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____tmpnam: 	goto ____tmpnam;
        case m2c::kloc_1090f: 	goto loc_1090f;
        case m2c::kloc_10929: 	goto loc_10929;
        case m2c::kloc_1092c: 	goto loc_1092c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool __n_lxmularb(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    __n_lxmularb:
    _begin:
cs=0x1a2;eip=0x000962; 	X(PUSH(si));	// 1884                  push    si ;~ 01A2:0962
cs=0x1a2;eip=0x000963; 	T(XCHG(ax, si));	// 1885                  xchg    ax, si ;~ 01A2:0963
cs=0x1a2;eip=0x000964; 	T(XCHG(ax, dx));	// 1886                  xchg    ax, dx ;~ 01A2:0964
cs=0x1a2;eip=0x000965; 	T(TEST(ax, ax));	// 1887                  test    ax, ax ;~ 01A2:0965
cs=0x1a2;eip=0x000967; 	J(JZ(loc_1096b));	// 1888                  jz      short loc_1096B ;~ 01A2:0967
cs=0x1a2;eip=0x000969; 	T(MUL1_2(bx));	// 1889                  mul     bx ;~ 01A2:0969
loc_1096b:
	// 4460 
cs=0x1a2;eip=0x00096b; 	J(JCXZ(loc_10972));	// 1892                  jcxz    short loc_10972 ;~ 01A2:096B
cs=0x1a2;eip=0x00096d; 	T(XCHG(ax, cx));	// 1893                  xchg    ax, cx ;~ 01A2:096D
cs=0x1a2;eip=0x00096e; 	T(MUL1_2(si));	// 1894                  mul     si ;~ 01A2:096E
cs=0x1a2;eip=0x000970; 	T(ADD(ax, cx));	// 1895                  add     ax, cx ;~ 01A2:0970
loc_10972:
	// 4461 
cs=0x1a2;eip=0x000972; 	T(XCHG(ax, si));	// 1898                  xchg    ax, si ;~ 01A2:0972
cs=0x1a2;eip=0x000973; 	T(MUL1_2(bx));	// 1899                  mul     bx ;~ 01A2:0973
cs=0x1a2;eip=0x000975; 	T(ADD(dx, si));	// 1900                  add     dx, si ;~ 01A2:0975
cs=0x1a2;eip=0x000977; 	X(POP(si));	// 1901                  pop     si ;~ 01A2:0977
cs=0x1a2;eip=0x000978; 	J(RETN(0));	// 1902                  retn ;~ 01A2:0978

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k__n_lxmularb: 	goto __n_lxmularb;
        case m2c::kloc_1096b: 	goto loc_1096b;
        case m2c::kloc_10972: 	goto loc_10972;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool __n_pcmparb(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    __n_pcmparb:
    _begin:
cs=0x1a2;eip=0x000979; 	X(PUSH(cx));	// 1912                  push    cx ;~ 01A2:0979
cs=0x1a2;eip=0x00097a; 	T(ch = al;);	// 1913                  mov     ch, al ;~ 01A2:097A
cs=0x1a2;eip=0x00097c; 	T(cl = 4;);	// 1914                  mov     cl, 4 ;~ 01A2:097C
cs=0x1a2;eip=0x00097e; 	T(SHR(ax, cl));	// 1915                  shr     ax, cl ;~ 01A2:097E
cs=0x1a2;eip=0x000980; 	T(ADD(dx, ax));	// 1916                  add     dx, ax ;~ 01A2:0980
cs=0x1a2;eip=0x000982; 	T(al = ch;);	// 1917                  mov     al, ch ;~ 01A2:0982
cs=0x1a2;eip=0x000984; 	T(ah = bl;);	// 1918                  mov     ah, bl ;~ 01A2:0984
cs=0x1a2;eip=0x000986; 	T(SHR(bx, cl));	// 1919                  shr     bx, cl ;~ 01A2:0986
cs=0x1a2;eip=0x000988; 	X(POP(cx));	// 1920                  pop     cx ;~ 01A2:0988
cs=0x1a2;eip=0x000989; 	T(ADD(cx, bx));	// 1921                  add     cx, bx ;~ 01A2:0989
cs=0x1a2;eip=0x00098b; 	T(bl = ah;);	// 1922                  mov     bl, ah ;~ 01A2:098B
cs=0x1a2;eip=0x00098d; 	T(AND(ax, 0x0F));	// 1923                  and     ax, 0Fh ;~ 01A2:098D
cs=0x1a2;eip=0x000990; 	T(AND(bx, 0x0F));	// 1924                  and     bx, 0Fh ;~ 01A2:0990
cs=0x1a2;eip=0x000993; 	T(CMP(dx, cx));	// 1925                  cmp     dx, cx ;~ 01A2:0993
cs=0x1a2;eip=0x000995; 	J(JNZ(locret_10999));	// 1926                  jnz     short locret_10999 ;~ 01A2:0995
cs=0x1a2;eip=0x000997; 	T(CMP(ax, bx));	// 1928                  cmp     ax, bx ;~ 01A2:0997
locret_10999:
	// 4462 
cs=0x1a2;eip=0x000999; 	J(RETN(0));	// 1931                  retn ;~ 01A2:0999

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k__n_pcmparb: 	goto __n_pcmparb;
        case m2c::klocret_10999: 	goto locret_10999;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____read_0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____read_0:
    _begin:
#undef handle
#define handle 6
	// 1943 handle          = word ptr  6 ;~ 01A2:099A
#undef buf
#define buf 8
	// 1944 buf             = dword ptr  8 ;~ 01A2:099A
#undef len
#define len 0x0C
	// 1945 len             = word ptr  0Ch ;~ 01A2:099A
cs=0x1a2;eip=0x00099a; 	X(PUSH(bp));	// 1947                  push    bp ;~ 01A2:099A
cs=0x1a2;eip=0x00099b; 	T(bp = sp;);	// 1948                  mov     bp, sp ;~ 01A2:099B
cs=0x1a2;eip=0x00099d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+handle))));	// 1949                  mov     bx, [bp+handle] ;~ 01A2:099D
cs=0x1a2;eip=0x0009a0; 	T(SHL(bx, 1));	// 1950                  shl     bx, 1 ;~ 01A2:09A0
cs=0x1a2;eip=0x0009a2; 	T(TEST(*(dw*)(raddr(ds,bx+0x862)), 2));	// 1951                  test    word ptr [bx+862h], 2 ;~ 01A2:09A2
cs=0x1a2;eip=0x0009a8; 	J(JZ(loc_109b0));	// 1952                  jz      short loc_109B0 ;~ 01A2:09A8
cs=0x1a2;eip=0x0009aa; 	T(ax = 5;);	// 1953                  mov     ax, 5 ;~ 01A2:09AA
cs=0x1a2;eip=0x0009ad; 	X(PUSH(ax));	// 1954                  push    ax ;~ 01A2:09AD
cs=0x1a2;eip=0x0009ae; 	J(JMP(loc_109c4));	// 1955                  jmp     short loc_109C4 ;~ 01A2:09AE
loc_109b0:
	// 4463 
cs=0x1a2;eip=0x0009b0; 	X(PUSH(ds));	// 1959                  push    ds ;~ 01A2:09B0
cs=0x1a2;eip=0x0009b1; 	T(ah = 0x3F;);	// 1960                  mov     ah, 3Fh ; '?' ;~ 01A2:09B1
cs=0x1a2;eip=0x0009b3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+handle))));	// 1961                  mov     bx, [bp+handle] ;~ 01A2:09B3
cs=0x1a2;eip=0x0009b6; 	T(MOV(cx, *(dw*)(raddr(ss,bp+len))));	// 1962                  mov     cx, [bp+len] ;~ 01A2:09B6
cs=0x1a2;eip=0x0009b9; 	T(LDS(dx, *(dd*)(raddr(ss,bp+buf))));	// 1963                  lds     dx, [bp+buf] ;~ 01A2:09B9
cs=0x1a2;eip=0x0009bc; 	S(_INT(0x21));	// 1964                  int     21h             ; DOS - 2+ - READ FROM FILE WITH HANDLE ;~ 01A2:09BC
cs=0x1a2;eip=0x0009be; 	X(POP(ds));	// 1967                  pop     ds ;~ 01A2:09BE
cs=0x1a2;eip=0x0009bf; 	J(JC(loc_109c3));	// 1968                  jb      short loc_109C3 ;~ 01A2:09BF
cs=0x1a2;eip=0x0009c1; 	J(JMP(loc_109c7));	// 1969                  jmp     short loc_109C7 ;~ 01A2:09C1
loc_109c3:
	// 4464 
cs=0x1a2;eip=0x0009c3; 	X(PUSH(ax));	// 1973                  push    ax ;~ 01A2:09C3
loc_109c4:
	// 4465 
cs=0x1a2;eip=0x0009c4; 	J(CALL(____ioerror,0));	// 1976                  call    ____IOERROR ;~ 01A2:09C4
loc_109c7:
	// 4466 
cs=0x1a2;eip=0x0009c7; 	X(POP(bp));	// 1979                  pop     bp ;~ 01A2:09C7
cs=0x1a2;eip=0x0009c8; 	J(RETF(0));	// 1980                  retf ;~ 01A2:09C8

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____read_0: 	goto ____read_0;
        case m2c::kloc_109b0: 	goto loc_109b0;
        case m2c::kloc_109c3: 	goto loc_109c3;
        case m2c::kloc_109c4: 	goto loc_109c4;
        case m2c::kloc_109c7: 	goto loc_109c7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_109c9(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_109c9:
    _begin:
#undef arg_0
#define arg_0 4
	// 1991 arg_0           = dword ptr  4 ;~ 01A2:09C9
#undef arg_4
#define arg_4 8
	// 1992 arg_4           = dword ptr  8 ;~ 01A2:09C9
cs=0x1a2;eip=0x0009c9; 	X(PUSH(bp));	// 1994                  push    bp ;~ 01A2:09C9
cs=0x1a2;eip=0x0009ca; 	T(bp = sp;);	// 1995                  mov     bp, sp ;~ 01A2:09CA
cs=0x1a2;eip=0x0009cc; 	X(PUSH(si));	// 1996                  push    si ;~ 01A2:09CC
cs=0x1a2;eip=0x0009cd; 	X(PUSH(di));	// 1997                  push    di ;~ 01A2:09CD
cs=0x1a2;eip=0x0009ce; 	X(PUSH(ds));	// 1998                  push    ds ;~ 01A2:09CE
cs=0x1a2;eip=0x0009cf; 	T(LDS(si, *(dd*)(raddr(ss,bp+arg_0))));	// 1999                  lds     si, [bp+arg_0] ;~ 01A2:09CF
cs=0x1a2;eip=0x0009d2; 	T(LES(di, *(dd*)(raddr(ss,bp+arg_4))));	// 2000                  les     di, [bp+arg_4] ;~ 01A2:09D2
cs=0x1a2;eip=0x0009d5; 	T(CLD);	// 2002                  cld ;~ 01A2:09D5
loc_109d6:
	// 4467 
cs=0x1a2;eip=0x0009d6; 	T(LODSB);	// 2005                  lodsb ;~ 01A2:09D6
cs=0x1a2;eip=0x0009d7; 	T(CMP(al, 0x61));	// 2006                  cmp     al, 61h ; 'a' ;~ 01A2:09D7
cs=0x1a2;eip=0x0009d9; 	J(JC(loc_109e1));	// 2007                  jb      short loc_109E1 ;~ 01A2:09D9
cs=0x1a2;eip=0x0009db; 	T(CMP(al, 0x7A));	// 2008                  cmp     al, 7Ah ; 'z' ;~ 01A2:09DB
cs=0x1a2;eip=0x0009dd; 	J(JA(loc_109e1));	// 2009                  ja      short loc_109E1 ;~ 01A2:09DD
cs=0x1a2;eip=0x0009df; 	T(SUB(al, 0x20));	// 2010                  sub     al, 20h ; ' ' ;~ 01A2:09DF
loc_109e1:
	// 4468 
cs=0x1a2;eip=0x0009e1; 	X(STOSB);	// 2014                  stosb ;~ 01A2:09E1
cs=0x1a2;eip=0x0009e2; 	T(OR(al, al));	// 2015                  or      al, al ;~ 01A2:09E2
cs=0x1a2;eip=0x0009e4; 	J(JNZ(loc_109d6));	// 2016                  jnz     short loc_109D6 ;~ 01A2:09E4
cs=0x1a2;eip=0x0009e6; 	T(DEC(di));	// 2017                  dec     di ;~ 01A2:09E6
cs=0x1a2;eip=0x0009e7; 	T(XCHG(ax, di));	// 2018                  xchg    ax, di ;~ 01A2:09E7
cs=0x1a2;eip=0x0009e8; 	X(POP(ds));	// 2019                  pop     ds ;~ 01A2:09E8
cs=0x1a2;eip=0x0009e9; 	T(dx = es;);	// 2020                  mov     dx, es ;~ 01A2:09E9
cs=0x1a2;eip=0x0009eb; 	X(POP(di));	// 2021                  pop     di ;~ 01A2:09EB
cs=0x1a2;eip=0x0009ec; 	X(POP(si));	// 2022                  pop     si ;~ 01A2:09EC
cs=0x1a2;eip=0x0009ed; 	X(POP(bp));	// 2023                  pop     bp ;~ 01A2:09ED
cs=0x1a2;eip=0x0009ee; 	J(RETN(8));	// 2024                  retn    8 ;~ 01A2:09EE

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_109d6: 	goto loc_109d6;
        case m2c::kloc_109e1: 	goto loc_109e1;
        case m2c::ksub_109c9: 	goto sub_109c9;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_109f1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_109f1:
    _begin:
#undef arg_0
#define arg_0 6
	// 2034 arg_0           = dword ptr  6 ;~ 01A2:09F1
#undef arg_4
#define arg_4 0x0A
	// 2035 arg_4           = byte ptr  0Ah ;~ 01A2:09F1
cs=0x1a2;eip=0x0009f1; 	X(PUSH(bp));	// 2037                  push    bp ;~ 01A2:09F1
cs=0x1a2;eip=0x0009f2; 	T(bp = sp;);	// 2038                  mov     bp, sp ;~ 01A2:09F2
cs=0x1a2;eip=0x0009f4; 	X(PUSH(si));	// 2039                  push    si ;~ 01A2:09F4
cs=0x1a2;eip=0x0009f5; 	X(PUSH(ds));	// 2040                  push    ds ;~ 01A2:09F5
cs=0x1a2;eip=0x0009f6; 	T(ah = 0x47;);	// 2041                  mov     ah, 47h ; 'G' ;~ 01A2:09F6
cs=0x1a2;eip=0x0009f8; 	T(MOV(dl, *(raddr(ss,bp+arg_4))));	// 2042                  mov     dl, [bp+arg_4] ;~ 01A2:09F8
cs=0x1a2;eip=0x0009fb; 	T(LDS(si, *(dd*)(raddr(ss,bp+arg_0))));	// 2043                  lds     si, [bp+arg_0] ;~ 01A2:09FB
cs=0x1a2;eip=0x0009fe; 	S(_INT(0x21));	// 2044                  int     21h             ; DOS - 2+ - GET CURRENT DIRECTORY ;~ 01A2:09FE
cs=0x1a2;eip=0x000a00; 	X(POP(ds));	// 2047                  pop     ds ;~ 01A2:0A00
cs=0x1a2;eip=0x000a01; 	J(JC(loc_10a07));	// 2048                  jb      short loc_10A07 ;~ 01A2:0A01
cs=0x1a2;eip=0x000a03; 	T(XOR(ax, ax));	// 2049                  xor     ax, ax ;~ 01A2:0A03
cs=0x1a2;eip=0x000a05; 	J({;});	// 2050                  jmp     short $+2 ;~ 01A2:0A05
loc_10a07:
	// 4469 
cs=0x1a2;eip=0x000a07; 	X(POP(si));	// 2055                  pop     si ;~ 01A2:0A07
cs=0x1a2;eip=0x000a08; 	X(POP(bp));	// 2056                  pop     bp ;~ 01A2:0A08
cs=0x1a2;eip=0x000a09; 	J(RETF(6));	// 2057                  retf    6 ;~ 01A2:0A09

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_10a07: 	goto loc_10a07;
        case m2c::ksub_109f1: 	goto sub_109f1;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_10a0c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_10a0c:
    _begin:
#undef finfo
#define finfo -0x32
	// 2069 finfo           = find_t ptr -32h ;~ 01A2:0A0C
#undef drive
#define drive -6
	// 2070 drive           = word ptr -6 ;~ 01A2:0A0C
#undef s
#define s -4
	// 2071 s               = dword ptr -4 ;~ 01A2:0A0C
#undef arg_0
#define arg_0 4
	// 2072 arg_0           = word ptr  4 ;~ 01A2:0A0C
#undef arg_2
#define arg_2 6
	// 2073 arg_2           = word ptr  6 ;~ 01A2:0A0C
#undef arg_4
#define arg_4 8
	// 2074 arg_4           = word ptr  8 ;~ 01A2:0A0C
#undef arg_6
#define arg_6 0x0A
	// 2075 arg_6           = word ptr  0Ah ;~ 01A2:0A0C
#undef arg_8
#define arg_8 0x0C
	// 2076 arg_8           = word ptr  0Ch ;~ 01A2:0A0C
#undef arg_a
#define arg_a 0x0E
	// 2077 arg_A           = dword ptr  0Eh ;~ 01A2:0A0C
#undef arg_e
#define arg_e 0x12
	// 2078 arg_E           = dword ptr  12h ;~ 01A2:0A0C
#undef path
#define path 0x16
	// 2079 path            = dword ptr  16h ;~ 01A2:0A0C
cs=0x1a2;eip=0x000a0c; 	X(PUSH(bp));	// 2081                  push    bp ;~ 01A2:0A0C
cs=0x1a2;eip=0x000a0d; 	T(bp = sp;);	// 2082                  mov     bp, sp ;~ 01A2:0A0D
cs=0x1a2;eip=0x000a0f; 	T(SUB(sp, 0x32));	// 2083                  sub     sp, 32h ;~ 01A2:0A0F
cs=0x1a2;eip=0x000a12; 	T(MOV(ax, *(dw*)(raddr(ss,bp+path+2))));	// 2084                  mov     ax, word ptr [bp+path+2] ;~ 01A2:0A12
cs=0x1a2;eip=0x000a15; 	T(MOV(dx, *(dw*)(raddr(ss,bp+path))));	// 2085                  mov     dx, word ptr [bp+path] ;~ 01A2:0A15
cs=0x1a2;eip=0x000a18; 	X(MOV(*(dw*)(raddr(ss,bp+s+2)), ax));	// 2086                  mov     word ptr [bp+s+2], ax ;~ 01A2:0A18
cs=0x1a2;eip=0x000a1b; 	X(MOV(*(dw*)(raddr(ss,bp+s)), dx));	// 2087                  mov     word ptr [bp+s], dx ;~ 01A2:0A1B
cs=0x1a2;eip=0x000a1e; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_e))));	// 2088                  les     bx, [bp+arg_E] ;~ 01A2:0A1E
cs=0x1a2;eip=0x000a21; 	T(CMP(*(raddr(es,bx)), 0));	// 2089                  cmp     byte ptr es:[bx], 0 ;~ 01A2:0A21
cs=0x1a2;eip=0x000a25; 	J(JNZ(loc_10a35));	// 2090                  jnz     short loc_10A35 ;~ 01A2:0A25
cs=0x1a2;eip=0x000a27; 	X(PUSH(ss));	// 2091                  push    ss ;~ 01A2:0A27
cs=0x1a2;eip=0x000a28; 	T(ax = bp+drive);	// 2092                  lea     ax, [bp+drive] ;~ 01A2:0A28
cs=0x1a2;eip=0x000a2b; 	X(PUSH(ax));	// 2093                  push    ax              ; drive ;~ 01A2:0A2B
cs=0x1a2;eip=0x000a2c; 	T(NOP);	// 2094                  nop ;~ 01A2:0A2C
cs=0x1a2;eip=0x000a2d; 	X(PUSH(cs));	// 2095                  push    cs ;~ 01A2:0A2D
cs=0x1a2;eip=0x000a2e; 	J(CALL(____dos_getdrive,0));	// 2096                  call    near ptr ____dos_getdrive ;~ 01A2:0A2E
cs=0x1a2;eip=0x000a31; 	X(POP(cx));	// 2097                  pop     cx ;~ 01A2:0A31
cs=0x1a2;eip=0x000a32; 	X(POP(cx));	// 2098                  pop     cx ;~ 01A2:0A32
cs=0x1a2;eip=0x000a33; 	J(JMP(loc_10a42));	// 2099                  jmp     short loc_10A42 ;~ 01A2:0A33
loc_10a35:
	// 4470 
cs=0x1a2;eip=0x000a35; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_e))));	// 2103                  les     bx, [bp+arg_E] ;~ 01A2:0A35
cs=0x1a2;eip=0x000a38; 	T(MOV(al, *(raddr(es,bx))));	// 2104                  mov     al, es:[bx] ;~ 01A2:0A38
cs=0x1a2;eip=0x000a3b; 	T(CBW);	// 2105                  cbw ;~ 01A2:0A3B
cs=0x1a2;eip=0x000a3c; 	T(AND(ax, 0x1F));	// 2106                  and     ax, 1Fh ;~ 01A2:0A3C
cs=0x1a2;eip=0x000a3f; 	X(MOV(*(dw*)(raddr(ss,bp+drive)), ax));	// 2107                  mov     [bp+drive], ax ;~ 01A2:0A3F
loc_10a42:
	// 4471 
cs=0x1a2;eip=0x000a42; 	T(MOV(al, *(raddr(ss,bp+drive))));	// 2110                  mov     al, byte ptr [bp+drive] ;~ 01A2:0A42
cs=0x1a2;eip=0x000a45; 	T(ADD(al, 0x40));	// 2111                  add     al, 40h ; '@' ;~ 01A2:0A45
cs=0x1a2;eip=0x000a47; 	T(LES(bx, *(dd*)(raddr(ss,bp+s))));	// 2112                  les     bx, [bp+s] ;~ 01A2:0A47
cs=0x1a2;eip=0x000a4a; 	X(MOV(*(raddr(es,bx)), al));	// 2113                  mov     es:[bx], al ;~ 01A2:0A4A
cs=0x1a2;eip=0x000a4d; 	X(INC(*(dw*)(raddr(ss,bp+s))));	// 2114                  inc     word ptr [bp+s] ;~ 01A2:0A4D
cs=0x1a2;eip=0x000a50; 	T(LES(bx, *(dd*)(raddr(ss,bp+s))));	// 2115                  les     bx, [bp+s] ;~ 01A2:0A50
cs=0x1a2;eip=0x000a53; 	X(MOV(*(raddr(es,bx)), 0x3A));	// 2116                  mov     byte ptr es:[bx], 3Ah ; ':' ;~ 01A2:0A53
cs=0x1a2;eip=0x000a57; 	X(INC(*(dw*)(raddr(ss,bp+s))));	// 2117                  inc     word ptr [bp+s] ;~ 01A2:0A57
cs=0x1a2;eip=0x000a5a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_a))));	// 2118                  les     bx, [bp+arg_A] ;~ 01A2:0A5A
cs=0x1a2;eip=0x000a5d; 	T(CMP(*(raddr(es,bx)), 0x5C));	// 2119                  cmp     byte ptr es:[bx], 5Ch ; '\' ;~ 01A2:0A5D
cs=0x1a2;eip=0x000a61; 	J(JZ(loc_10aaa));	// 2120                  jz      short loc_10AAA ;~ 01A2:0A61
cs=0x1a2;eip=0x000a63; 	T(CMP(*(raddr(es,bx)), 0x2F));	// 2121                  cmp     byte ptr es:[bx], 2Fh ; '/' ;~ 01A2:0A63
cs=0x1a2;eip=0x000a67; 	J(JZ(loc_10aaa));	// 2122                  jz      short loc_10AAA ;~ 01A2:0A67
cs=0x1a2;eip=0x000a69; 	T(LES(bx, *(dd*)(raddr(ss,bp+s))));	// 2123                  les     bx, [bp+s] ;~ 01A2:0A69
cs=0x1a2;eip=0x000a6c; 	X(MOV(*(raddr(es,bx)), 0x5C));	// 2124                  mov     byte ptr es:[bx], 5Ch ; '\' ;~ 01A2:0A6C
cs=0x1a2;eip=0x000a70; 	X(INC(*(dw*)(raddr(ss,bp+s))));	// 2125                  inc     word ptr [bp+s] ;~ 01A2:0A70
cs=0x1a2;eip=0x000a73; 	X(PUSH(*(dw*)(raddr(ss,bp+drive))));	// 2126                  push    [bp+drive] ;~ 01A2:0A73
cs=0x1a2;eip=0x000a76; 	X(PUSH(*(dw*)(raddr(ss,bp+s+2))));	// 2127                  push    word ptr [bp+s+2] ;~ 01A2:0A76
cs=0x1a2;eip=0x000a79; 	X(PUSH(*(dw*)(raddr(ss,bp+s))));	// 2128                  push    word ptr [bp+s] ;~ 01A2:0A79
cs=0x1a2;eip=0x000a7c; 	X(PUSH(cs));	// 2129                  push    cs ;~ 01A2:0A7C
cs=0x1a2;eip=0x000a7d; 	J(CALL(sub_109f1,0));	// 2130                  call    near ptr sub_109F1 ;~ 01A2:0A7D
cs=0x1a2;eip=0x000a80; 	T(OR(ax, ax));	// 2131                  or      ax, ax ;~ 01A2:0A80
cs=0x1a2;eip=0x000a82; 	J(JZ(loc_10a8a));	// 2132                  jz      short loc_10A8A ;~ 01A2:0A82
cs=0x1a2;eip=0x000a84; 	T(ax = 3;);	// 2133                  mov     ax, 3 ;~ 01A2:0A84
cs=0x1a2;eip=0x000a87; 	J(JMP(loc_10b24));	// 2134                  jmp     loc_10B24 ;~ 01A2:0A87
loc_10a8a:
	// 4472 
cs=0x1a2;eip=0x000a8a; 	X(PUSH(*(dw*)(raddr(ss,bp+s+2))));	// 2138                  push    word ptr [bp+s+2] ;~ 01A2:0A8A
cs=0x1a2;eip=0x000a8d; 	X(PUSH(*(dw*)(raddr(ss,bp+s))));	// 2139                  push    word ptr [bp+s] ; s ;~ 01A2:0A8D
cs=0x1a2;eip=0x000a90; 	T(NOP);	// 2140                  nop ;~ 01A2:0A90
cs=0x1a2;eip=0x000a91; 	X(PUSH(cs));	// 2141                  push    cs ;~ 01A2:0A91
cs=0x1a2;eip=0x000a92; 	J(CALL(___strlen,0));	// 2142                  call    near ptr ___strlen ;~ 01A2:0A92
cs=0x1a2;eip=0x000a95; 	X(POP(cx));	// 2143                  pop     cx ;~ 01A2:0A95
cs=0x1a2;eip=0x000a96; 	X(POP(cx));	// 2144                  pop     cx ;~ 01A2:0A96
cs=0x1a2;eip=0x000a97; 	T(dx = ax;);	// 2145                  mov     dx, ax ;~ 01A2:0A97
cs=0x1a2;eip=0x000a99; 	T(OR(dx, dx));	// 2146                  or      dx, dx ;~ 01A2:0A99
cs=0x1a2;eip=0x000a9b; 	J(JZ(loc_10aaa));	// 2147                  jz      short loc_10AAA ;~ 01A2:0A9B
cs=0x1a2;eip=0x000a9d; 	X(ADD(*(dw*)(raddr(ss,bp+s)), dx));	// 2148                  add     word ptr [bp+s], dx ;~ 01A2:0A9D
cs=0x1a2;eip=0x000aa0; 	T(LES(bx, *(dd*)(raddr(ss,bp+s))));	// 2149                  les     bx, [bp+s] ;~ 01A2:0AA0
cs=0x1a2;eip=0x000aa3; 	X(MOV(*(raddr(es,bx)), 0x5C));	// 2150                  mov     byte ptr es:[bx], 5Ch ; '\' ;~ 01A2:0AA3
cs=0x1a2;eip=0x000aa7; 	X(INC(*(dw*)(raddr(ss,bp+s))));	// 2151                  inc     word ptr [bp+s] ;~ 01A2:0AA7
loc_10aaa:
	// 4473 
cs=0x1a2;eip=0x000aaa; 	X(PUSH(*(dw*)(raddr(ss,bp+s+2))));	// 2155                  push    word ptr [bp+s+2] ;~ 01A2:0AAA
cs=0x1a2;eip=0x000aad; 	X(PUSH(*(dw*)(raddr(ss,bp+s))));	// 2156                  push    word ptr [bp+s] ;~ 01A2:0AAD
cs=0x1a2;eip=0x000ab0; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a+2))));	// 2157                  push    word ptr [bp+arg_A+2] ;~ 01A2:0AB0
cs=0x1a2;eip=0x000ab3; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 2158                  push    word ptr [bp+arg_A] ;~ 01A2:0AB3
cs=0x1a2;eip=0x000ab6; 	J(CALL(sub_109c9,0));	// 2159                  call    sub_109C9 ;~ 01A2:0AB6
cs=0x1a2;eip=0x000ab9; 	X(MOV(*(dw*)(raddr(ss,bp+s+2)), dx));	// 2160                  mov     word ptr [bp+s+2], dx ;~ 01A2:0AB9
cs=0x1a2;eip=0x000abc; 	X(MOV(*(dw*)(raddr(ss,bp+s)), ax));	// 2161                  mov     word ptr [bp+s], ax ;~ 01A2:0ABC
cs=0x1a2;eip=0x000abf; 	T(LES(bx, *(dd*)(raddr(ss,bp+s))));	// 2162                  les     bx, [bp+s] ;~ 01A2:0ABF
cs=0x1a2;eip=0x000ac2; 	T(CMP(*(raddr(es,bx-1)), 0x5C));	// 2163                  cmp     byte ptr es:[bx-1], 5Ch ; '\' ;~ 01A2:0AC2
cs=0x1a2;eip=0x000ac7; 	J(JZ(loc_10ad7));	// 2164                  jz      short loc_10AD7 ;~ 01A2:0AC7
cs=0x1a2;eip=0x000ac9; 	T(CMP(*(raddr(es,bx-1)), 0x2F));	// 2165                  cmp     byte ptr es:[bx-1], 2Fh ; '/' ;~ 01A2:0AC9
cs=0x1a2;eip=0x000ace; 	J(JZ(loc_10ad7));	// 2166                  jz      short loc_10AD7 ;~ 01A2:0ACE
cs=0x1a2;eip=0x000ad0; 	X(MOV(*(raddr(es,bx)), 0x5C));	// 2167                  mov     byte ptr es:[bx], 5Ch ; '\' ;~ 01A2:0AD0
cs=0x1a2;eip=0x000ad4; 	X(INC(*(dw*)(raddr(ss,bp+s))));	// 2168                  inc     word ptr [bp+s] ;~ 01A2:0AD4
loc_10ad7:
	// 4474 
cs=0x1a2;eip=0x000ad7; 	X(PUSH(*(dw*)(raddr(ss,bp+s+2))));	// 2172                  push    word ptr [bp+s+2] ;~ 01A2:0AD7
cs=0x1a2;eip=0x000ada; 	X(PUSH(*(dw*)(raddr(ss,bp+s))));	// 2173                  push    word ptr [bp+s] ;~ 01A2:0ADA
cs=0x1a2;eip=0x000add; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 2174                  push    [bp+arg_8] ;~ 01A2:0ADD
cs=0x1a2;eip=0x000ae0; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 2175                  push    [bp+arg_6] ;~ 01A2:0AE0
cs=0x1a2;eip=0x000ae3; 	J(CALL(sub_109c9,0));	// 2176                  call    sub_109C9 ;~ 01A2:0AE3
cs=0x1a2;eip=0x000ae6; 	X(MOV(*(dw*)(raddr(ss,bp+s+2)), dx));	// 2177                  mov     word ptr [bp+s+2], dx ;~ 01A2:0AE6
cs=0x1a2;eip=0x000ae9; 	X(MOV(*(dw*)(raddr(ss,bp+s)), ax));	// 2178                  mov     word ptr [bp+s], ax ;~ 01A2:0AE9
cs=0x1a2;eip=0x000aec; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 2179                  mov     ax, [bp+arg_2] ;~ 01A2:0AEC
cs=0x1a2;eip=0x000aef; 	T(OR(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 2180                  or      ax, [bp+arg_4] ;~ 01A2:0AEF
cs=0x1a2;eip=0x000af2; 	J(JZ(loc_10b01));	// 2181                  jz      short loc_10B01 ;~ 01A2:0AF2
cs=0x1a2;eip=0x000af4; 	X(PUSH(dx));	// 2182                  push    dx ;~ 01A2:0AF4
cs=0x1a2;eip=0x000af5; 	X(PUSH(*(dw*)(raddr(ss,bp+s))));	// 2183                  push    word ptr [bp+s] ;~ 01A2:0AF5
cs=0x1a2;eip=0x000af8; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 2184                  push    [bp+arg_4] ;~ 01A2:0AF8
cs=0x1a2;eip=0x000afb; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 2185                  push    [bp+arg_2] ;~ 01A2:0AFB
cs=0x1a2;eip=0x000afe; 	J(CALL(sub_109c9,0));	// 2186                  call    sub_109C9 ;~ 01A2:0AFE
loc_10b01:
	// 4475 
cs=0x1a2;eip=0x000b01; 	X(PUSH(ss));	// 2189                  push    ss ;~ 01A2:0B01
cs=0x1a2;eip=0x000b02; 	T(ax = bp+finfo);	// 2190                  lea     ax, [bp+finfo] ;~ 01A2:0B02
cs=0x1a2;eip=0x000b05; 	X(PUSH(ax));	// 2191                  push    ax              ; finfo ;~ 01A2:0B05
cs=0x1a2;eip=0x000b06; 	T(TEST(*(dw*)(raddr(ss,bp+arg_0)), 2));	// 2192                  test    [bp+arg_0], 2 ;~ 01A2:0B06
cs=0x1a2;eip=0x000b0b; 	J(JZ(loc_10b12));	// 2193                  jz      short loc_10B12 ;~ 01A2:0B0B
cs=0x1a2;eip=0x000b0d; 	T(ax = 0x27;);	// 2194                  mov     ax, 27h ; ''' ;~ 01A2:0B0D
cs=0x1a2;eip=0x000b10; 	J(JMP(loc_10b15));	// 2195                  jmp     short loc_10B15 ;~ 01A2:0B10
loc_10b12:
	// 4476 
cs=0x1a2;eip=0x000b12; 	T(ax = 0x37;);	// 2199                  mov     ax, 37h ; '7' ;~ 01A2:0B12
loc_10b15:
	// 4477 
cs=0x1a2;eip=0x000b15; 	X(PUSH(ax));	// 2202                  push    ax              ; attrib ;~ 01A2:0B15
cs=0x1a2;eip=0x000b16; 	X(PUSH(*(dw*)(raddr(ss,bp+path+2))));	// 2203                  push    word ptr [bp+path+2] ;~ 01A2:0B16
cs=0x1a2;eip=0x000b19; 	X(PUSH(*(dw*)(raddr(ss,bp+path))));	// 2204                  push    word ptr [bp+path] ; path ;~ 01A2:0B19
cs=0x1a2;eip=0x000b1c; 	T(NOP);	// 2205                  nop ;~ 01A2:0B1C
cs=0x1a2;eip=0x000b1d; 	X(PUSH(cs));	// 2206                  push    cs ;~ 01A2:0B1D
cs=0x1a2;eip=0x000b1e; 	J(CALL(____dos_findfirst,0));	// 2207                  call    near ptr ____dos_findfirst ;~ 01A2:0B1E
cs=0x1a2;eip=0x000b21; 	T(ADD(sp, 0x0A));	// 2208                  add     sp, 0Ah ;~ 01A2:0B21
loc_10b24:
	// 4478 
cs=0x1a2;eip=0x000b24; 	T(sp = bp;);	// 2211                  mov     sp, bp ;~ 01A2:0B24
cs=0x1a2;eip=0x000b26; 	X(POP(bp));	// 2212                  pop     bp ;~ 01A2:0B26
cs=0x1a2;eip=0x000b27; 	J(RETN(0x16));	// 2213                  retn    16h ;~ 01A2:0B27

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_10a35: 	goto loc_10a35;
        case m2c::kloc_10a42: 	goto loc_10a42;
        case m2c::kloc_10a8a: 	goto loc_10a8a;
        case m2c::kloc_10aaa: 	goto loc_10aaa;
        case m2c::kloc_10ad7: 	goto loc_10ad7;
        case m2c::kloc_10b01: 	goto loc_10b01;
        case m2c::kloc_10b12: 	goto loc_10b12;
        case m2c::kloc_10b15: 	goto loc_10b15;
        case m2c::kloc_10b24: 	goto loc_10b24;
        case m2c::ksub_10a0c: 	goto sub_10a0c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_10b2a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_10b2a:
    _begin:
#undef var_8
#define var_8 -8
	// 2225 var_8           = dword ptr -8 ;~ 01A2:0B2A
#undef var_4
#define var_4 -4
	// 2226 var_4           = dword ptr -4 ;~ 01A2:0B2A
#undef name_
#define name_ 4
	// 2227 name_           = dword ptr  4 ;~ 01A2:0B2A
#undef arg_4
#define arg_4 8
	// 2228 arg_4           = word ptr  8 ;~ 01A2:0B2A
#undef path
#define path 0x0A
	// 2229 path            = dword ptr  0Ah ;~ 01A2:0B2A
cs=0x1a2;eip=0x000b2a; 	X(PUSH(bp));	// 2231                  push    bp ;~ 01A2:0B2A
cs=0x1a2;eip=0x000b2b; 	T(bp = sp;);	// 2232                  mov     bp, sp ;~ 01A2:0B2B
cs=0x1a2;eip=0x000b2d; 	T(SUB(sp, 8));	// 2233                  sub     sp, 8 ;~ 01A2:0B2D
cs=0x1a2;eip=0x000b30; 	X(PUSH(si));	// 2234                  push    si ;~ 01A2:0B30
cs=0x1a2;eip=0x000b31; 	X(PUSH(di));	// 2235                  push    di ;~ 01A2:0B31
cs=0x1a2;eip=0x000b32; 	X(MOV(*(dw*)(raddr(ss,bp+var_4+2)), ds));	// 2236                  mov     word ptr [bp+var_4+2], ds ;~ 01A2:0B32
cs=0x1a2;eip=0x000b35; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0x0B93));	// 2237                  mov     word ptr [bp+var_4], 0B93h ;~ 01A2:0B35
cs=0x1a2;eip=0x000b3a; 	X(MOV(*(dw*)(raddr(ss,bp+var_8+2)), 0));	// 2238                  mov     word ptr [bp+var_8+2], 0 ;~ 01A2:0B3A
cs=0x1a2;eip=0x000b3f; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 2239                  mov     word ptr [bp+var_8], 0 ;~ 01A2:0B3F
cs=0x1a2;eip=0x000b44; 	T(XOR(di, di));	// 2240                  xor     di, di ;~ 01A2:0B44
cs=0x1a2;eip=0x000b46; 	T(MOV(ax, *(dw*)(raddr(ss,bp+path))));	// 2241                  mov     ax, word ptr [bp+path] ;~ 01A2:0B46
cs=0x1a2;eip=0x000b49; 	T(OR(ax, *(dw*)(raddr(ss,bp+path+2))));	// 2242                  or      ax, word ptr [bp+path+2] ;~ 01A2:0B49
cs=0x1a2;eip=0x000b4c; 	J(JNZ(loc_10b57));	// 2243                  jnz     short loc_10B57 ;~ 01A2:0B4C
cs=0x1a2;eip=0x000b4e; 	T(LES(bx, *(dd*)(raddr(ss,bp+path))));	// 2244                  les     bx, [bp+path] ;~ 01A2:0B4E
cs=0x1a2;eip=0x000b51; 	T(CMP(*(raddr(es,bx)), 0));	// 2245                  cmp     byte ptr es:[bx], 0 ;~ 01A2:0B51
cs=0x1a2;eip=0x000b55; 	J(JZ(loc_10b7b));	// 2246                  jz      short loc_10B7B ;~ 01A2:0B55
loc_10b57:
	// 4479 
cs=0x1a2;eip=0x000b57; 	X(PUSH(ds));	// 2249                  push    ds ;~ 01A2:0B57
cs=0x1a2;eip=0x000b58; 	T(ax = 0x0B3C;);	// 2250                  mov     ax, 0B3Ch ;~ 01A2:0B58
cs=0x1a2;eip=0x000b5b; 	X(PUSH(ax));	// 2251                  push    ax              ; ext ;~ 01A2:0B5B
cs=0x1a2;eip=0x000b5c; 	X(PUSH(ds));	// 2252                  push    ds ;~ 01A2:0B5C
cs=0x1a2;eip=0x000b5d; 	T(ax = 0x0B42;);	// 2253                  mov     ax, 0B42h ;~ 01A2:0B5D
cs=0x1a2;eip=0x000b60; 	X(PUSH(ax));	// 2254                  push    ax              ; name ;~ 01A2:0B60
cs=0x1a2;eip=0x000b61; 	X(PUSH(ds));	// 2255                  push    ds ;~ 01A2:0B61
cs=0x1a2;eip=0x000b62; 	T(ax = 0x0B4C;);	// 2256                  mov     ax, 0B4Ch ;~ 01A2:0B62
cs=0x1a2;eip=0x000b65; 	X(PUSH(ax));	// 2257                  push    ax              ; dir ;~ 01A2:0B65
cs=0x1a2;eip=0x000b66; 	X(PUSH(ds));	// 2258                  push    ds ;~ 01A2:0B66
cs=0x1a2;eip=0x000b67; 	T(ax = 0x0B8F;);	// 2259                  mov     ax, 0B8Fh ;~ 01A2:0B67
cs=0x1a2;eip=0x000b6a; 	X(PUSH(ax));	// 2260                  push    ax              ; drive ;~ 01A2:0B6A
cs=0x1a2;eip=0x000b6b; 	X(PUSH(*(dw*)(raddr(ss,bp+path+2))));	// 2261                  push    word ptr [bp+path+2] ;~ 01A2:0B6B
cs=0x1a2;eip=0x000b6e; 	X(PUSH(*(dw*)(raddr(ss,bp+path))));	// 2262                  push    word ptr [bp+path] ; path ;~ 01A2:0B6E
cs=0x1a2;eip=0x000b71; 	T(NOP);	// 2263                  nop ;~ 01A2:0B71
cs=0x1a2;eip=0x000b72; 	X(PUSH(cs));	// 2264                  push    cs ;~ 01A2:0B72
cs=0x1a2;eip=0x000b73; 	J(CALL(____fnsplit,0));	// 2265                  call    near ptr ____fnsplit ;~ 01A2:0B73
cs=0x1a2;eip=0x000b76; 	T(ADD(sp, 0x14));	// 2266                  add     sp, 14h ;~ 01A2:0B76
cs=0x1a2;eip=0x000b79; 	T(di = ax;);	// 2267                  mov     di, ax ;~ 01A2:0B79
loc_10b7b:
	// 4480 
cs=0x1a2;eip=0x000b7b; 	T(ax = di;);	// 2270                  mov     ax, di ;~ 01A2:0B7B
cs=0x1a2;eip=0x000b7d; 	T(AND(ax, 5));	// 2271                  and     ax, 5 ;~ 01A2:0B7D
cs=0x1a2;eip=0x000b80; 	T(CMP(ax, 4));	// 2272                  cmp     ax, 4 ;~ 01A2:0B80
cs=0x1a2;eip=0x000b83; 	J(JZ(loc_10b8c));	// 2273                  jz      short loc_10B8C ;~ 01A2:0B83
cs=0x1a2;eip=0x000b85; 	T(XOR(dx, dx));	// 2274                  xor     dx, dx ;~ 01A2:0B85
cs=0x1a2;eip=0x000b87; 	T(XOR(ax, ax));	// 2275                  xor     ax, ax ;~ 01A2:0B87
cs=0x1a2;eip=0x000b89; 	J(JMP(loc_10cee));	// 2276                  jmp     loc_10CEE ;~ 01A2:0B89
loc_10b8c:
	// 4481 
cs=0x1a2;eip=0x000b8c; 	T(TEST(*(dw*)(raddr(ss,bp+arg_4)), 2));	// 2280                  test    [bp+arg_4], 2 ;~ 01A2:0B8C
cs=0x1a2;eip=0x000b91; 	J(JZ(loc_10ba7));	// 2281                  jz      short loc_10BA7 ;~ 01A2:0B91
cs=0x1a2;eip=0x000b93; 	T(TEST(di, 8));	// 2282                  test    di, 8 ;~ 01A2:0B93
cs=0x1a2;eip=0x000b97; 	J(JZ(loc_10b9d));	// 2283                  jz      short loc_10B9D ;~ 01A2:0B97
cs=0x1a2;eip=0x000b99; 	X(AND(*(dw*)(raddr(ss,bp+arg_4)), 0x0FFFE));	// 2284                  and     [bp+arg_4], 0FFFEh ;~ 01A2:0B99
loc_10b9d:
	// 4482 
cs=0x1a2;eip=0x000b9d; 	T(TEST(di, 2));	// 2287                  test    di, 2 ;~ 01A2:0B9D
cs=0x1a2;eip=0x000ba1; 	J(JZ(loc_10ba7));	// 2288                  jz      short loc_10BA7 ;~ 01A2:0BA1
cs=0x1a2;eip=0x000ba3; 	X(AND(*(dw*)(raddr(ss,bp+arg_4)), 0x0FFFD));	// 2289                  and     [bp+arg_4], 0FFFDh ;~ 01A2:0BA3
loc_10ba7:
	// 4483 
cs=0x1a2;eip=0x000ba7; 	T(TEST(*(dw*)(raddr(ss,bp+arg_4)), 1));	// 2293                  test    [bp+arg_4], 1 ;~ 01A2:0BA7
cs=0x1a2;eip=0x000bac; 	J(JZ(loc_10bc3));	// 2294                  jz      short loc_10BC3 ;~ 01A2:0BAC
cs=0x1a2;eip=0x000bae; 	X(PUSH(*(dw*)(raddr(ss,bp+name_+2))));	// 2295                  push    word ptr [bp+name_+2] ;~ 01A2:0BAE
cs=0x1a2;eip=0x000bb1; 	X(PUSH(*(dw*)(raddr(ss,bp+name_))));	// 2296                  push    word ptr [bp+name_] ; name ;~ 01A2:0BB1
cs=0x1a2;eip=0x000bb4; 	T(NOP);	// 2297                  nop ;~ 01A2:0BB4
cs=0x1a2;eip=0x000bb5; 	X(PUSH(cs));	// 2298                  push    cs ;~ 01A2:0BB5
cs=0x1a2;eip=0x000bb6; 	J(CALL(___getenv,0));	// 2299                  call    near ptr ___getenv ;~ 01A2:0BB6
cs=0x1a2;eip=0x000bb9; 	X(POP(cx));	// 2300                  pop     cx ;~ 01A2:0BB9
cs=0x1a2;eip=0x000bba; 	X(POP(cx));	// 2301                  pop     cx ;~ 01A2:0BBA
cs=0x1a2;eip=0x000bbb; 	X(MOV(*(dw*)(raddr(ss,bp+var_8+2)), dx));	// 2302                  mov     word ptr [bp+var_8+2], dx ;~ 01A2:0BBB
cs=0x1a2;eip=0x000bbe; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 2303                  mov     word ptr [bp+var_8], ax ;~ 01A2:0BBE
cs=0x1a2;eip=0x000bc1; 	J(JMP(loc_10bd6));	// 2304                  jmp     short loc_10BD6 ;~ 01A2:0BC1
loc_10bc3:
	// 4484 
cs=0x1a2;eip=0x000bc3; 	T(TEST(*(dw*)(raddr(ss,bp+arg_4)), 4));	// 2308                  test    [bp+arg_4], 4 ;~ 01A2:0BC3
cs=0x1a2;eip=0x000bc8; 	J(JZ(loc_10bd6));	// 2309                  jz      short loc_10BD6 ;~ 01A2:0BC8
cs=0x1a2;eip=0x000bca; 	T(MOV(ax, *(dw*)(raddr(ss,bp+name_+2))));	// 2310                  mov     ax, word ptr [bp+name_+2] ;~ 01A2:0BCA
cs=0x1a2;eip=0x000bcd; 	T(MOV(dx, *(dw*)(raddr(ss,bp+name_))));	// 2311                  mov     dx, word ptr [bp+name_] ;~ 01A2:0BCD
cs=0x1a2;eip=0x000bd0; 	X(MOV(*(dw*)(raddr(ss,bp+var_8+2)), ax));	// 2312                  mov     word ptr [bp+var_8+2], ax ;~ 01A2:0BD0
cs=0x1a2;eip=0x000bd3; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), dx));	// 2313                  mov     word ptr [bp+var_8], dx ;~ 01A2:0BD3
loc_10bd6:
	// 4485 
cs=0x1a2;eip=0x000bd6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4+2))));	// 2317                  push    word ptr [bp+var_4+2] ;~ 01A2:0BD6
cs=0x1a2;eip=0x000bd9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 2318                  push    word ptr [bp+var_4] ; path ;~ 01A2:0BD9
cs=0x1a2;eip=0x000bdc; 	X(PUSH(ds));	// 2319                  push    ds ;~ 01A2:0BDC
cs=0x1a2;eip=0x000bdd; 	T(ax = 0x0B8F;);	// 2320                  mov     ax, 0B8Fh ;~ 01A2:0BDD
cs=0x1a2;eip=0x000be0; 	X(PUSH(ax));	// 2321                  push    ax              ; __int32 ;~ 01A2:0BE0
cs=0x1a2;eip=0x000be1; 	X(PUSH(ds));	// 2322                  push    ds ;~ 01A2:0BE1
cs=0x1a2;eip=0x000be2; 	T(ax = 0x0B4C;);	// 2323                  mov     ax, 0B4Ch ;~ 01A2:0BE2
cs=0x1a2;eip=0x000be5; 	X(PUSH(ax));	// 2324                  push    ax              ; __int32 ;~ 01A2:0BE5
cs=0x1a2;eip=0x000be6; 	X(PUSH(ds));	// 2325                  push    ds              ; int ;~ 01A2:0BE6
cs=0x1a2;eip=0x000be7; 	T(ax = 0x0B42;);	// 2326                  mov     ax, 0B42h ;~ 01A2:0BE7
cs=0x1a2;eip=0x000bea; 	X(PUSH(ax));	// 2327                  push    ax              ; int ;~ 01A2:0BEA
cs=0x1a2;eip=0x000beb; 	X(PUSH(ds));	// 2328                  push    ds              ; int ;~ 01A2:0BEB
cs=0x1a2;eip=0x000bec; 	T(ax = 0x0B3C;);	// 2329                  mov     ax, 0B3Ch ;~ 01A2:0BEC
cs=0x1a2;eip=0x000bef; 	X(PUSH(ax));	// 2330                  push    ax              ; int ;~ 01A2:0BEF
cs=0x1a2;eip=0x000bf0; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 2331                  push    [bp+arg_4]      ; int ;~ 01A2:0BF0
cs=0x1a2;eip=0x000bf3; 	J(CALL(sub_10a0c,0));	// 2332                  call    sub_10A0C ;~ 01A2:0BF3
cs=0x1a2;eip=0x000bf6; 	T(dx = ax;);	// 2333                  mov     dx, ax ;~ 01A2:0BF6
cs=0x1a2;eip=0x000bf8; 	T(OR(ax, ax));	// 2334                  or      ax, ax ;~ 01A2:0BF8
cs=0x1a2;eip=0x000bfa; 	J(JNZ(loc_10bff));	// 2335                  jnz     short loc_10BFF ;~ 01A2:0BFA
cs=0x1a2;eip=0x000bfc; 	J(JMP(loc_10ce8));	// 2336                  jmp     loc_10CE8 ;~ 01A2:0BFC
loc_10bff:
	// 4486 
cs=0x1a2;eip=0x000bff; 	T(CMP(dx, 3));	// 2340                  cmp     dx, 3 ;~ 01A2:0BFF
cs=0x1a2;eip=0x000c02; 	J(JZ(loc_10c60));	// 2341                  jz      short loc_10C60 ;~ 01A2:0C02
cs=0x1a2;eip=0x000c04; 	T(TEST(*(dw*)(raddr(ss,bp+arg_4)), 2));	// 2342                  test    [bp+arg_4], 2 ;~ 01A2:0C04
cs=0x1a2;eip=0x000c09; 	J(JZ(loc_10c60));	// 2343                  jz      short loc_10C60 ;~ 01A2:0C09
cs=0x1a2;eip=0x000c0b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4+2))));	// 2344                  push    word ptr [bp+var_4+2] ;~ 01A2:0C0B
cs=0x1a2;eip=0x000c0e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 2345                  push    word ptr [bp+var_4] ; path ;~ 01A2:0C0E
cs=0x1a2;eip=0x000c11; 	X(PUSH(ds));	// 2346                  push    ds ;~ 01A2:0C11
cs=0x1a2;eip=0x000c12; 	T(ax = 0x0B8F;);	// 2347                  mov     ax, 0B8Fh ;~ 01A2:0C12
cs=0x1a2;eip=0x000c15; 	X(PUSH(ax));	// 2348                  push    ax              ; __int32 ;~ 01A2:0C15
cs=0x1a2;eip=0x000c16; 	X(PUSH(ds));	// 2349                  push    ds ;~ 01A2:0C16
cs=0x1a2;eip=0x000c17; 	T(ax = 0x0B4C;);	// 2350                  mov     ax, 0B4Ch ;~ 01A2:0C17
cs=0x1a2;eip=0x000c1a; 	X(PUSH(ax));	// 2351                  push    ax              ; __int32 ;~ 01A2:0C1A
cs=0x1a2;eip=0x000c1b; 	X(PUSH(ds));	// 2352                  push    ds              ; int ;~ 01A2:0C1B
cs=0x1a2;eip=0x000c1c; 	T(ax = 0x0B42;);	// 2353                  mov     ax, 0B42h ;~ 01A2:0C1C
cs=0x1a2;eip=0x000c1f; 	X(PUSH(ax));	// 2354                  push    ax              ; int ;~ 01A2:0C1F
cs=0x1a2;eip=0x000c20; 	X(PUSH(ds));	// 2355                  push    ds              ; int ;~ 01A2:0C20
cs=0x1a2;eip=0x000c21; 	T(ax = 0x8F4;);	// 2356                  mov     ax, 8F4h ;~ 01A2:0C21
cs=0x1a2;eip=0x000c24; 	X(PUSH(ax));	// 2357                  push    ax              ; int ;~ 01A2:0C24
cs=0x1a2;eip=0x000c25; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 2358                  push    [bp+arg_4]      ; int ;~ 01A2:0C25
cs=0x1a2;eip=0x000c28; 	J(CALL(sub_10a0c,0));	// 2359                  call    sub_10A0C ;~ 01A2:0C28
cs=0x1a2;eip=0x000c2b; 	T(dx = ax;);	// 2360                  mov     dx, ax ;~ 01A2:0C2B
cs=0x1a2;eip=0x000c2d; 	T(OR(ax, ax));	// 2361                  or      ax, ax ;~ 01A2:0C2D
cs=0x1a2;eip=0x000c2f; 	J(JNZ(loc_10c34));	// 2362                  jnz     short loc_10C34 ;~ 01A2:0C2F
cs=0x1a2;eip=0x000c31; 	J(JMP(loc_10ce8));	// 2363                  jmp     loc_10CE8 ;~ 01A2:0C31
loc_10c34:
	// 4487 
cs=0x1a2;eip=0x000c34; 	T(CMP(dx, 3));	// 2367                  cmp     dx, 3 ;~ 01A2:0C34
cs=0x1a2;eip=0x000c37; 	J(JZ(loc_10c60));	// 2368                  jz      short loc_10C60 ;~ 01A2:0C37
cs=0x1a2;eip=0x000c39; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4+2))));	// 2369                  push    word ptr [bp+var_4+2] ;~ 01A2:0C39
cs=0x1a2;eip=0x000c3c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 2370                  push    word ptr [bp+var_4] ; path ;~ 01A2:0C3C
cs=0x1a2;eip=0x000c3f; 	X(PUSH(ds));	// 2371                  push    ds ;~ 01A2:0C3F
cs=0x1a2;eip=0x000c40; 	T(ax = 0x0B8F;);	// 2372                  mov     ax, 0B8Fh ;~ 01A2:0C40
cs=0x1a2;eip=0x000c43; 	X(PUSH(ax));	// 2373                  push    ax              ; __int32 ;~ 01A2:0C43
cs=0x1a2;eip=0x000c44; 	X(PUSH(ds));	// 2374                  push    ds ;~ 01A2:0C44
cs=0x1a2;eip=0x000c45; 	T(ax = 0x0B4C;);	// 2375                  mov     ax, 0B4Ch ;~ 01A2:0C45
cs=0x1a2;eip=0x000c48; 	X(PUSH(ax));	// 2376                  push    ax              ; __int32 ;~ 01A2:0C48
cs=0x1a2;eip=0x000c49; 	X(PUSH(ds));	// 2377                  push    ds              ; int ;~ 01A2:0C49
cs=0x1a2;eip=0x000c4a; 	T(ax = 0x0B42;);	// 2378                  mov     ax, 0B42h ;~ 01A2:0C4A
cs=0x1a2;eip=0x000c4d; 	X(PUSH(ax));	// 2379                  push    ax              ; int ;~ 01A2:0C4D
cs=0x1a2;eip=0x000c4e; 	X(PUSH(ds));	// 2380                  push    ds              ; int ;~ 01A2:0C4E
cs=0x1a2;eip=0x000c4f; 	T(ax = 0x8F9;);	// 2381                  mov     ax, 8F9h ;~ 01A2:0C4F
cs=0x1a2;eip=0x000c52; 	X(PUSH(ax));	// 2382                  push    ax              ; int ;~ 01A2:0C52
cs=0x1a2;eip=0x000c53; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 2383                  push    [bp+arg_4]      ; int ;~ 01A2:0C53
cs=0x1a2;eip=0x000c56; 	J(CALL(sub_10a0c,0));	// 2384                  call    sub_10A0C ;~ 01A2:0C56
cs=0x1a2;eip=0x000c59; 	T(OR(ax, ax));	// 2385                  or      ax, ax ;~ 01A2:0C59
cs=0x1a2;eip=0x000c5b; 	J(JNZ(loc_10c60));	// 2386                  jnz     short loc_10C60 ;~ 01A2:0C5B
cs=0x1a2;eip=0x000c5d; 	J(JMP(loc_10ce8));	// 2387                  jmp     loc_10CE8 ;~ 01A2:0C5D
loc_10c60:
	// 4488 
cs=0x1a2;eip=0x000c60; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 2392                  mov     ax, word ptr [bp+var_8] ;~ 01A2:0C60
cs=0x1a2;eip=0x000c63; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_8+2))));	// 2393                  or      ax, word ptr [bp+var_8+2] ;~ 01A2:0C63
cs=0x1a2;eip=0x000c66; 	J(JZ(loc_10c71));	// 2394                  jz      short loc_10C71 ;~ 01A2:0C66
cs=0x1a2;eip=0x000c68; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 2395                  les     bx, [bp+var_8] ;~ 01A2:0C68
cs=0x1a2;eip=0x000c6b; 	T(CMP(*(raddr(es,bx)), 0));	// 2396                  cmp     byte ptr es:[bx], 0 ;~ 01A2:0C6B
cs=0x1a2;eip=0x000c6f; 	J(JNZ(loc_10c7d));	// 2397                  jnz     short loc_10C7D ;~ 01A2:0C6F
loc_10c71:
	// 4489 
cs=0x1a2;eip=0x000c71; 	X(MOV(*(dw*)(raddr(ss,bp+var_4+2)), 0));	// 2400                  mov     word ptr [bp+var_4+2], 0 ;~ 01A2:0C71
cs=0x1a2;eip=0x000c76; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 2401                  mov     word ptr [bp+var_4], 0 ;~ 01A2:0C76
cs=0x1a2;eip=0x000c7b; 	J(JMP(loc_10ce8));	// 2402                  jmp     short loc_10CE8 ;~ 01A2:0C7B
loc_10c7d:
	// 4490 
cs=0x1a2;eip=0x000c7d; 	T(XOR(di, di));	// 2406                  xor     di, di ;~ 01A2:0C7D
cs=0x1a2;eip=0x000c7f; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 2407                  les     bx, [bp+var_8] ;~ 01A2:0C7F
cs=0x1a2;eip=0x000c82; 	T(CMP(*(raddr(es,bx+1)), 0x3A));	// 2408                  cmp     byte ptr es:[bx+1], 3Ah ; ':' ;~ 01A2:0C82
cs=0x1a2;eip=0x000c87; 	J(JNZ(loc_10ca2));	// 2409                  jnz     short loc_10CA2 ;~ 01A2:0C87
cs=0x1a2;eip=0x000c89; 	T(MOV(al, *(raddr(es,bx))));	// 2410                  mov     al, es:[bx] ;~ 01A2:0C89
cs=0x1a2;eip=0x000c8c; 	X(MOV(*(raddr(ds,di+0x0B8F)), al));	// 2411                  mov     [di+0B8Fh], al ;~ 01A2:0C8C
cs=0x1a2;eip=0x000c90; 	X(INC(*(dw*)(raddr(ss,bp+var_8))));	// 2412                  inc     word ptr [bp+var_8] ;~ 01A2:0C90
cs=0x1a2;eip=0x000c93; 	T(INC(di));	// 2413                  inc     di ;~ 01A2:0C93
cs=0x1a2;eip=0x000c94; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 2414                  les     bx, [bp+var_8] ;~ 01A2:0C94
cs=0x1a2;eip=0x000c97; 	T(MOV(al, *(raddr(es,bx))));	// 2415                  mov     al, es:[bx] ;~ 01A2:0C97
cs=0x1a2;eip=0x000c9a; 	X(MOV(*(raddr(ds,di+0x0B8F)), al));	// 2416                  mov     [di+0B8Fh], al ;~ 01A2:0C9A
cs=0x1a2;eip=0x000c9e; 	X(INC(*(dw*)(raddr(ss,bp+var_8))));	// 2417                  inc     word ptr [bp+var_8] ;~ 01A2:0C9E
cs=0x1a2;eip=0x000ca1; 	T(INC(di));	// 2418                  inc     di ;~ 01A2:0CA1
loc_10ca2:
	// 4491 
cs=0x1a2;eip=0x000ca2; 	X(MOV(*(raddr(ds,di+0x0B8F)), 0));	// 2421                  mov     byte ptr [di+0B8Fh], 0 ;~ 01A2:0CA2
cs=0x1a2;eip=0x000ca7; 	T(XOR(di, di));	// 2422                  xor     di, di ;~ 01A2:0CA7
cs=0x1a2;eip=0x000ca9; 	J(JMP(loc_10cbd));	// 2423                  jmp     short loc_10CBD ;~ 01A2:0CA9
loc_10cab:
	// 4492 
cs=0x1a2;eip=0x000cab; 	T(CMP(*(raddr(ds,di+0x0B4C)), 0x3B));	// 2427                  cmp     byte ptr [di+0B4Ch], 3Bh ; ';' ;~ 01A2:0CAB
cs=0x1a2;eip=0x000cb0; 	J(JNZ(loc_10cbc));	// 2428                  jnz     short loc_10CBC ;~ 01A2:0CB0
cs=0x1a2;eip=0x000cb2; 	X(MOV(*(raddr(ds,di+0x0B4C)), 0));	// 2429                  mov     byte ptr [di+0B4Ch], 0 ;~ 01A2:0CB2
cs=0x1a2;eip=0x000cb7; 	X(INC(*(dw*)(raddr(ss,bp+var_8))));	// 2430                  inc     word ptr [bp+var_8] ;~ 01A2:0CB7
cs=0x1a2;eip=0x000cba; 	J(JMP(loc_10cce));	// 2431                  jmp     short loc_10CCE ;~ 01A2:0CBA
loc_10cbc:
	// 4493 
cs=0x1a2;eip=0x000cbc; 	T(INC(di));	// 2435                  inc     di ;~ 01A2:0CBC
loc_10cbd:
	// 4494 
cs=0x1a2;eip=0x000cbd; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 2438                  les     bx, [bp+var_8] ;~ 01A2:0CBD
cs=0x1a2;eip=0x000cc0; 	X(INC(*(dw*)(raddr(ss,bp+var_8))));	// 2439                  inc     word ptr [bp+var_8] ;~ 01A2:0CC0
cs=0x1a2;eip=0x000cc3; 	T(MOV(al, *(raddr(es,bx))));	// 2440                  mov     al, es:[bx] ;~ 01A2:0CC3
cs=0x1a2;eip=0x000cc6; 	X(MOV(*(raddr(ds,di+0x0B4C)), al));	// 2441                  mov     [di+0B4Ch], al ;~ 01A2:0CC6
cs=0x1a2;eip=0x000cca; 	T(OR(al, al));	// 2442                  or      al, al ;~ 01A2:0CCA
cs=0x1a2;eip=0x000ccc; 	J(JNZ(loc_10cab));	// 2443                  jnz     short loc_10CAB ;~ 01A2:0CCC
loc_10cce:
	// 4495 
cs=0x1a2;eip=0x000cce; 	X(DEC(*(dw*)(raddr(ss,bp+var_8))));	// 2446                  dec     word ptr [bp+var_8] ;~ 01A2:0CCE
cs=0x1a2;eip=0x000cd1; 	T(CMP(byte_1942c, 0));	// 2447                  cmp     byte_1942C, 0 ;~ 01A2:0CD1
cs=0x1a2;eip=0x000cd6; 	J(JZ(loc_10cdb));	// 2448                  jz      short loc_10CDB ;~ 01A2:0CD6
cs=0x1a2;eip=0x000cd8; 	J(JMP(loc_10bd6));	// 2449                  jmp     loc_10BD6 ;~ 01A2:0CD8
loc_10cdb:
	// 4496 
cs=0x1a2;eip=0x000cdb; 	X(byte_1942c = 0x5C;);	// 2453                  mov     byte_1942C, 5Ch ; '\' ;~ 01A2:0CDB
cs=0x1a2;eip=0x000ce0; 	X(byte_1942d = 0;);	// 2454                  mov     byte_1942D, 0 ;~ 01A2:0CE0
cs=0x1a2;eip=0x000ce5; 	J(JMP(loc_10bd6));	// 2455                  jmp     loc_10BD6 ;~ 01A2:0CE5
loc_10ce8:
	// 4497 
cs=0x1a2;eip=0x000ce8; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4+2))));	// 2460                  mov     dx, word ptr [bp+var_4+2] ;~ 01A2:0CE8
cs=0x1a2;eip=0x000ceb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 2461                  mov     ax, word ptr [bp+var_4] ;~ 01A2:0CEB
loc_10cee:
	// 4498 
cs=0x1a2;eip=0x000cee; 	X(POP(di));	// 2464                  pop     di ;~ 01A2:0CEE
cs=0x1a2;eip=0x000cef; 	X(POP(si));	// 2465                  pop     si ;~ 01A2:0CEF
cs=0x1a2;eip=0x000cf0; 	T(sp = bp;);	// 2466                  mov     sp, bp ;~ 01A2:0CF0
cs=0x1a2;eip=0x000cf2; 	X(POP(bp));	// 2467                  pop     bp ;~ 01A2:0CF2
cs=0x1a2;eip=0x000cf3; 	J(RETN(0x0A));	// 2468                  retn    0Ah ;~ 01A2:0CF3

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_10b57: 	goto loc_10b57;
        case m2c::kloc_10b7b: 	goto loc_10b7b;
        case m2c::kloc_10b8c: 	goto loc_10b8c;
        case m2c::kloc_10b9d: 	goto loc_10b9d;
        case m2c::kloc_10ba7: 	goto loc_10ba7;
        case m2c::kloc_10bc3: 	goto loc_10bc3;
        case m2c::kloc_10bd6: 	goto loc_10bd6;
        case m2c::kloc_10bff: 	goto loc_10bff;
        case m2c::kloc_10c34: 	goto loc_10c34;
        case m2c::kloc_10c60: 	goto loc_10c60;
        case m2c::kloc_10c71: 	goto loc_10c71;
        case m2c::kloc_10c7d: 	goto loc_10c7d;
        case m2c::kloc_10ca2: 	goto loc_10ca2;
        case m2c::kloc_10cab: 	goto loc_10cab;
        case m2c::kloc_10cbc: 	goto loc_10cbc;
        case m2c::kloc_10cbd: 	goto loc_10cbd;
        case m2c::kloc_10cce: 	goto loc_10cce;
        case m2c::kloc_10cdb: 	goto loc_10cdb;
        case m2c::kloc_10ce8: 	goto loc_10ce8;
        case m2c::kloc_10cee: 	goto loc_10cee;
        case m2c::ksub_10b2a: 	goto sub_10b2a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____searchpath(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____searchpath:
    _begin:
#undef arg_0
#define arg_0 4
	// 2479 arg_0           = word ptr  4 ;~ 01A2:0CF6
#undef path
#define path 6
	// 2480 path            = dword ptr  6 ;~ 01A2:0CF6
cs=0x1a2;eip=0x000cf6; 	X(PUSH(bp));	// 2482                  push    bp ;~ 01A2:0CF6
cs=0x1a2;eip=0x000cf7; 	T(bp = sp;);	// 2483                  mov     bp, sp ;~ 01A2:0CF7
cs=0x1a2;eip=0x000cf9; 	X(PUSH(*(dw*)(raddr(ss,bp+path+2))));	// 2484                  push    word ptr [bp+path+2] ;~ 01A2:0CF9
cs=0x1a2;eip=0x000cfc; 	X(PUSH(*(dw*)(raddr(ss,bp+path))));	// 2485                  push    word ptr [bp+path] ; path ;~ 01A2:0CFC
cs=0x1a2;eip=0x000cff; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 2486                  push    [bp+arg_0]      ; int ;~ 01A2:0CFF
cs=0x1a2;eip=0x000d02; 	X(PUSH(ds));	// 2487                  push    ds ;~ 01A2:0D02
cs=0x1a2;eip=0x000d03; 	T(ax = 0x8FE;);	// 2488                  mov     ax, 8FEh ;~ 01A2:0D03
cs=0x1a2;eip=0x000d06; 	X(PUSH(ax));	// 2489                  push    ax              ; name_ ;~ 01A2:0D06
cs=0x1a2;eip=0x000d07; 	J(CALL(sub_10b2a,0));	// 2490                  call    sub_10B2A ;~ 01A2:0D07
cs=0x1a2;eip=0x000d0a; 	X(POP(bp));	// 2491                  pop     bp ;~ 01A2:0D0A
cs=0x1a2;eip=0x000d0b; 	J(RETN(6));	// 2492                  retn    6 ;~ 01A2:0D0B

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____searchpath: 	goto ____searchpath;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____searchenv(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____searchenv:
    _begin:
#undef src
#define src -4
	// 2503 src             = dword ptr -4 ;~ 01A2:0D0E
#undef file
#define file 6
	// 2504 file            = dword ptr  6 ;~ 01A2:0D0E
#undef varname
#define varname 0x0A
	// 2505 varname         = dword ptr  0Ah ;~ 01A2:0D0E
#undef pathname
#define pathname 0x0E
	// 2506 pathname        = dword ptr  0Eh ;~ 01A2:0D0E
cs=0x1a2;eip=0x000d0e; 	X(PUSH(bp));	// 2508                  push    bp ;~ 01A2:0D0E
cs=0x1a2;eip=0x000d0f; 	T(bp = sp;);	// 2509                  mov     bp, sp ;~ 01A2:0D0F
cs=0x1a2;eip=0x000d11; 	T(SUB(sp, 4));	// 2510                  sub     sp, 4 ;~ 01A2:0D11
cs=0x1a2;eip=0x000d14; 	X(PUSH(*(dw*)(raddr(ss,bp+file+2))));	// 2511                  push    word ptr [bp+file+2] ;~ 01A2:0D14
cs=0x1a2;eip=0x000d17; 	X(PUSH(*(dw*)(raddr(ss,bp+file))));	// 2512                  push    word ptr [bp+file] ; path ;~ 01A2:0D17
cs=0x1a2;eip=0x000d1a; 	T(ax = 1;);	// 2513                  mov     ax, 1 ;~ 01A2:0D1A
cs=0x1a2;eip=0x000d1d; 	X(PUSH(ax));	// 2514                  push    ax              ; int ;~ 01A2:0D1D
cs=0x1a2;eip=0x000d1e; 	X(PUSH(*(dw*)(raddr(ss,bp+varname+2))));	// 2515                  push    word ptr [bp+varname+2] ;~ 01A2:0D1E
cs=0x1a2;eip=0x000d21; 	X(PUSH(*(dw*)(raddr(ss,bp+varname))));	// 2516                  push    word ptr [bp+varname] ; name_ ;~ 01A2:0D21
cs=0x1a2;eip=0x000d24; 	J(CALL(sub_10b2a,0));	// 2517                  call    sub_10B2A ;~ 01A2:0D24
cs=0x1a2;eip=0x000d27; 	X(MOV(*(dw*)(raddr(ss,bp+src+2)), dx));	// 2518                  mov     word ptr [bp+src+2], dx ;~ 01A2:0D27
cs=0x1a2;eip=0x000d2a; 	X(MOV(*(dw*)(raddr(ss,bp+src)), ax));	// 2519                  mov     word ptr [bp+src], ax ;~ 01A2:0D2A
cs=0x1a2;eip=0x000d2d; 	T(OR(ax, dx));	// 2520                  or      ax, dx ;~ 01A2:0D2D
cs=0x1a2;eip=0x000d2f; 	J(JNZ(loc_10d3a));	// 2521                  jnz     short loc_10D3A ;~ 01A2:0D2F
cs=0x1a2;eip=0x000d31; 	T(LES(bx, *(dd*)(raddr(ss,bp+pathname))));	// 2522                  les     bx, [bp+pathname] ;~ 01A2:0D31
cs=0x1a2;eip=0x000d34; 	X(MOV(*(raddr(es,bx)), 0));	// 2523                  mov     byte ptr es:[bx], 0 ;~ 01A2:0D34
cs=0x1a2;eip=0x000d38; 	J(JMP(loc_10d4e));	// 2524                  jmp     short loc_10D4E ;~ 01A2:0D38
loc_10d3a:
	// 4499 
cs=0x1a2;eip=0x000d3a; 	X(PUSH(*(dw*)(raddr(ss,bp+src+2))));	// 2528                  push    word ptr [bp+src+2] ;~ 01A2:0D3A
cs=0x1a2;eip=0x000d3d; 	X(PUSH(*(dw*)(raddr(ss,bp+src))));	// 2529                  push    word ptr [bp+src] ; src ;~ 01A2:0D3D
cs=0x1a2;eip=0x000d40; 	X(PUSH(*(dw*)(raddr(ss,bp+pathname+2))));	// 2530                  push    word ptr [bp+pathname+2] ;~ 01A2:0D40
cs=0x1a2;eip=0x000d43; 	X(PUSH(*(dw*)(raddr(ss,bp+pathname))));	// 2531                  push    word ptr [bp+pathname] ; dest ;~ 01A2:0D43
cs=0x1a2;eip=0x000d46; 	T(NOP);	// 2532                  nop ;~ 01A2:0D46
cs=0x1a2;eip=0x000d47; 	X(PUSH(cs));	// 2533                  push    cs ;~ 01A2:0D47
cs=0x1a2;eip=0x000d48; 	J(CALL(___strcpy,0));	// 2534                  call    near ptr ___strcpy ;~ 01A2:0D48
cs=0x1a2;eip=0x000d4b; 	T(ADD(sp, 8));	// 2535                  add     sp, 8 ;~ 01A2:0D4B
loc_10d4e:
	// 4500 
cs=0x1a2;eip=0x000d4e; 	T(sp = bp;);	// 2538                  mov     sp, bp ;~ 01A2:0D4E
cs=0x1a2;eip=0x000d50; 	X(POP(bp));	// 2539                  pop     bp ;~ 01A2:0D50
cs=0x1a2;eip=0x000d51; 	J(RETF(0));	// 2540                  retf ;~ 01A2:0D51

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____searchenv: 	goto ____searchenv;
        case m2c::kloc_10d3a: 	goto loc_10d3a;
        case m2c::kloc_10d4e: 	goto loc_10d4e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____searchstr(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____searchstr:
    _begin:
#undef src
#define src -4
	// 2551 src             = dword ptr -4 ;~ 01A2:0D52
#undef file
#define file 6
	// 2552 file            = dword ptr  6 ;~ 01A2:0D52
#undef ipath
#define ipath 0x0A
	// 2553 ipath           = dword ptr  0Ah ;~ 01A2:0D52
#undef pathname
#define pathname 0x0E
	// 2554 pathname        = dword ptr  0Eh ;~ 01A2:0D52
cs=0x1a2;eip=0x000d52; 	X(PUSH(bp));	// 2556                  push    bp ;~ 01A2:0D52
cs=0x1a2;eip=0x000d53; 	T(bp = sp;);	// 2557                  mov     bp, sp ;~ 01A2:0D53
cs=0x1a2;eip=0x000d55; 	T(SUB(sp, 4));	// 2558                  sub     sp, 4 ;~ 01A2:0D55
cs=0x1a2;eip=0x000d58; 	X(PUSH(*(dw*)(raddr(ss,bp+file+2))));	// 2559                  push    word ptr [bp+file+2] ;~ 01A2:0D58
cs=0x1a2;eip=0x000d5b; 	X(PUSH(*(dw*)(raddr(ss,bp+file))));	// 2560                  push    word ptr [bp+file] ; path ;~ 01A2:0D5B
cs=0x1a2;eip=0x000d5e; 	T(ax = 4;);	// 2561                  mov     ax, 4 ;~ 01A2:0D5E
cs=0x1a2;eip=0x000d61; 	X(PUSH(ax));	// 2562                  push    ax              ; int ;~ 01A2:0D61
cs=0x1a2;eip=0x000d62; 	X(PUSH(*(dw*)(raddr(ss,bp+ipath+2))));	// 2563                  push    word ptr [bp+ipath+2] ;~ 01A2:0D62
cs=0x1a2;eip=0x000d65; 	X(PUSH(*(dw*)(raddr(ss,bp+ipath))));	// 2564                  push    word ptr [bp+ipath] ; name_ ;~ 01A2:0D65
cs=0x1a2;eip=0x000d68; 	J(CALL(sub_10b2a,0));	// 2565                  call    sub_10B2A ;~ 01A2:0D68
cs=0x1a2;eip=0x000d6b; 	X(MOV(*(dw*)(raddr(ss,bp+src+2)), dx));	// 2566                  mov     word ptr [bp+src+2], dx ;~ 01A2:0D6B
cs=0x1a2;eip=0x000d6e; 	X(MOV(*(dw*)(raddr(ss,bp+src)), ax));	// 2567                  mov     word ptr [bp+src], ax ;~ 01A2:0D6E
cs=0x1a2;eip=0x000d71; 	T(OR(ax, dx));	// 2568                  or      ax, dx ;~ 01A2:0D71
cs=0x1a2;eip=0x000d73; 	J(JNZ(loc_10d7e));	// 2569                  jnz     short loc_10D7E ;~ 01A2:0D73
cs=0x1a2;eip=0x000d75; 	T(LES(bx, *(dd*)(raddr(ss,bp+pathname))));	// 2570                  les     bx, [bp+pathname] ;~ 01A2:0D75
cs=0x1a2;eip=0x000d78; 	X(MOV(*(raddr(es,bx)), 0));	// 2571                  mov     byte ptr es:[bx], 0 ;~ 01A2:0D78
cs=0x1a2;eip=0x000d7c; 	J(JMP(loc_10d92));	// 2572                  jmp     short loc_10D92 ;~ 01A2:0D7C
loc_10d7e:
	// 4501 
cs=0x1a2;eip=0x000d7e; 	X(PUSH(*(dw*)(raddr(ss,bp+src+2))));	// 2576                  push    word ptr [bp+src+2] ;~ 01A2:0D7E
cs=0x1a2;eip=0x000d81; 	X(PUSH(*(dw*)(raddr(ss,bp+src))));	// 2577                  push    word ptr [bp+src] ; src ;~ 01A2:0D81
cs=0x1a2;eip=0x000d84; 	X(PUSH(*(dw*)(raddr(ss,bp+pathname+2))));	// 2578                  push    word ptr [bp+pathname+2] ;~ 01A2:0D84
cs=0x1a2;eip=0x000d87; 	X(PUSH(*(dw*)(raddr(ss,bp+pathname))));	// 2579                  push    word ptr [bp+pathname] ; dest ;~ 01A2:0D87
cs=0x1a2;eip=0x000d8a; 	T(NOP);	// 2580                  nop ;~ 01A2:0D8A
cs=0x1a2;eip=0x000d8b; 	X(PUSH(cs));	// 2581                  push    cs ;~ 01A2:0D8B
cs=0x1a2;eip=0x000d8c; 	J(CALL(___strcpy,0));	// 2582                  call    near ptr ___strcpy ;~ 01A2:0D8C
cs=0x1a2;eip=0x000d8f; 	T(ADD(sp, 8));	// 2583                  add     sp, 8 ;~ 01A2:0D8F
loc_10d92:
	// 4502 
cs=0x1a2;eip=0x000d92; 	T(sp = bp;);	// 2586                  mov     sp, bp ;~ 01A2:0D92
cs=0x1a2;eip=0x000d94; 	X(POP(bp));	// 2587                  pop     bp ;~ 01A2:0D94
cs=0x1a2;eip=0x000d95; 	J(RETF(0));	// 2588                  retf ;~ 01A2:0D95

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____searchstr: 	goto ____searchstr;
        case m2c::kloc_10d7e: 	goto loc_10d7e;
        case m2c::kloc_10d92: 	goto loc_10d92;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____setupio(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____setupio:
    _begin:
cs=0x1a2;eip=0x000d96; 	T(cx = 5;);	// 2598                  mov     cx, 5 ;~ 01A2:0D96
cs=0x1a2;eip=0x000d99; 	T(CMP(cx, word_19140));	// 2599                  cmp     cx, word_19140 ;~ 01A2:0D99
cs=0x1a2;eip=0x000d9d; 	J(JNC(loc_10dd7));	// 2600                  jnb     short loc_10DD7 ;~ 01A2:0D9D
loc_10d9f:
	// 4503 
cs=0x1a2;eip=0x000d9f; 	T(bx = cx;);	// 2603                  mov     bx, cx ;~ 01A2:0D9F
cs=0x1a2;eip=0x000da1; 	T(SHL(bx, 1));	// 2604                  shl     bx, 1 ;~ 01A2:0DA1
cs=0x1a2;eip=0x000da3; 	X(MOV(*(dw*)(raddr(ds,bx+0x862)), 0));	// 2605                  mov     word ptr [bx+862h], 0 ;~ 01A2:0DA3
cs=0x1a2;eip=0x000da9; 	T(ax = cx;);	// 2606                  mov     ax, cx ;~ 01A2:0DA9
cs=0x1a2;eip=0x000dab; 	T(dx = 0x14;);	// 2607                  mov     dx, 14h ;~ 01A2:0DAB
cs=0x1a2;eip=0x000dae; 	T(IMUL1_2(dx));	// 2608                  imul    dx ;~ 01A2:0DAE
cs=0x1a2;eip=0x000db0; 	T(bx = ax;);	// 2609                  mov     bx, ax ;~ 01A2:0DB0
cs=0x1a2;eip=0x000db2; 	X(MOV(*(raddr(ds,bx+0x6D4)), 0x0FF));	// 2610                  mov     byte ptr [bx+6D4h], 0FFh ;~ 01A2:0DB2
cs=0x1a2;eip=0x000db7; 	T(ax = cx;);	// 2611                  mov     ax, cx ;~ 01A2:0DB7
cs=0x1a2;eip=0x000db9; 	T(dx = 0x14;);	// 2612                  mov     dx, 14h ;~ 01A2:0DB9
cs=0x1a2;eip=0x000dbc; 	T(IMUL1_2(dx));	// 2613                  imul    dx ;~ 01A2:0DBC
cs=0x1a2;eip=0x000dbe; 	T(ADD(ax, 0x6D0));	// 2614                  add     ax, 6D0h ;~ 01A2:0DBE
cs=0x1a2;eip=0x000dc1; 	X(PUSH(ax));	// 2615                  push    ax ;~ 01A2:0DC1
cs=0x1a2;eip=0x000dc2; 	T(ax = cx;);	// 2616                  mov     ax, cx ;~ 01A2:0DC2
cs=0x1a2;eip=0x000dc4; 	T(dx = 0x14;);	// 2617                  mov     dx, 14h ;~ 01A2:0DC4
cs=0x1a2;eip=0x000dc7; 	T(IMUL1_2(dx));	// 2618                  imul    dx ;~ 01A2:0DC7
cs=0x1a2;eip=0x000dc9; 	T(bx = ax;);	// 2619                  mov     bx, ax ;~ 01A2:0DC9
cs=0x1a2;eip=0x000dcb; 	X(POP(ax));	// 2620                  pop     ax ;~ 01A2:0DCB
cs=0x1a2;eip=0x000dcc; 	X(MOV(*(dw*)(raddr(ds,bx+0x6E2)), ax));	// 2621                  mov     [bx+6E2h], ax ;~ 01A2:0DCC
cs=0x1a2;eip=0x000dd0; 	T(INC(cx));	// 2622                  inc     cx ;~ 01A2:0DD0
cs=0x1a2;eip=0x000dd1; 	T(CMP(cx, word_19140));	// 2623                  cmp     cx, word_19140 ;~ 01A2:0DD1
cs=0x1a2;eip=0x000dd5; 	J(JC(loc_10d9f));	// 2624                  jb      short loc_10D9F ;~ 01A2:0DD5
loc_10dd7:
	// 4504 
cs=0x1a2;eip=0x000dd7; 	T(al = byte_18fb4;);	// 2627                  mov     al, byte_18FB4 ;~ 01A2:0DD7
cs=0x1a2;eip=0x000dda; 	T(CBW);	// 2628                  cbw ;~ 01A2:0DDA
cs=0x1a2;eip=0x000ddb; 	X(PUSH(ax));	// 2629                  push    ax              ; handle ;~ 01A2:0DDB
cs=0x1a2;eip=0x000ddc; 	T(NOP);	// 2630                  nop ;~ 01A2:0DDC
cs=0x1a2;eip=0x000ddd; 	X(PUSH(cs));	// 2631                  push    cs ;~ 01A2:0DDD
cs=0x1a2;eip=0x000dde; 	J(CALL(___isatty,0));	// 2632                  call    near ptr ___isatty ;~ 01A2:0DDE
cs=0x1a2;eip=0x000de1; 	X(POP(cx));	// 2633                  pop     cx ;~ 01A2:0DE1
cs=0x1a2;eip=0x000de2; 	T(OR(ax, ax));	// 2634                  or      ax, ax ;~ 01A2:0DE2
cs=0x1a2;eip=0x000de4; 	J(JNZ(loc_10dec));	// 2635                  jnz     short loc_10DEC ;~ 01A2:0DE4
cs=0x1a2;eip=0x000de6; 	X(AND(word_18fb2, 0x0FDFF));	// 2636                  and     word_18FB2, 0FDFFh ;~ 01A2:0DE6
loc_10dec:
	// 4505 
cs=0x1a2;eip=0x000dec; 	T(ax = 0x200;);	// 2639                  mov     ax, 200h ;~ 01A2:0DEC
cs=0x1a2;eip=0x000def; 	X(PUSH(ax));	// 2640                  push    ax              ; size ;~ 01A2:0DEF
cs=0x1a2;eip=0x000df0; 	T(TEST(word_18fb2, 0x200));	// 2641                  test    word_18FB2, 200h ;~ 01A2:0DF0
cs=0x1a2;eip=0x000df6; 	J(JZ(loc_10dfd));	// 2642                  jz      short loc_10DFD ;~ 01A2:0DF6
cs=0x1a2;eip=0x000df8; 	T(ax = 1;);	// 2643                  mov     ax, 1 ;~ 01A2:0DF8
cs=0x1a2;eip=0x000dfb; 	J(JMP(loc_10dff));	// 2644                  jmp     short loc_10DFF ;~ 01A2:0DFB
loc_10dfd:
	// 4506 
cs=0x1a2;eip=0x000dfd; 	T(XOR(ax, ax));	// 2648                  xor     ax, ax ;~ 01A2:0DFD
loc_10dff:
	// 4507 
cs=0x1a2;eip=0x000dff; 	X(PUSH(ax));	// 2651                  push    ax              ; type ;~ 01A2:0DFF
cs=0x1a2;eip=0x000e00; 	T(XOR(ax, ax));	// 2652                  xor     ax, ax ;~ 01A2:0E00
cs=0x1a2;eip=0x000e02; 	T(XOR(dx, dx));	// 2653                  xor     dx, dx ;~ 01A2:0E02
cs=0x1a2;eip=0x000e04; 	X(PUSH(ax));	// 2654                  push    ax ;~ 01A2:0E04
cs=0x1a2;eip=0x000e05; 	X(PUSH(dx));	// 2655                  push    dx              ; buf ;~ 01A2:0E05
cs=0x1a2;eip=0x000e06; 	X(PUSH(ds));	// 2656                  push    ds ;~ 01A2:0E06
cs=0x1a2;eip=0x000e07; 	T(ax = 0x6D0;);	// 2657                  mov     ax, 6D0h ;~ 01A2:0E07
cs=0x1a2;eip=0x000e0a; 	X(PUSH(ax));	// 2658                  push    ax              ; stream ;~ 01A2:0E0A
cs=0x1a2;eip=0x000e0b; 	T(NOP);	// 2659                  nop ;~ 01A2:0E0B
cs=0x1a2;eip=0x000e0c; 	X(PUSH(cs));	// 2660                  push    cs ;~ 01A2:0E0C
cs=0x1a2;eip=0x000e0d; 	J(CALL(___setvbuf,0));	// 2661                  call    near ptr ___setvbuf ;~ 01A2:0E0D
cs=0x1a2;eip=0x000e10; 	T(ADD(sp, 0x0C));	// 2662                  add     sp, 0Ch ;~ 01A2:0E10
cs=0x1a2;eip=0x000e13; 	T(al = byte_18fc8;);	// 2663                  mov     al, byte_18FC8 ;~ 01A2:0E13
cs=0x1a2;eip=0x000e16; 	T(CBW);	// 2664                  cbw ;~ 01A2:0E16
cs=0x1a2;eip=0x000e17; 	X(PUSH(ax));	// 2665                  push    ax              ; handle ;~ 01A2:0E17
cs=0x1a2;eip=0x000e18; 	T(NOP);	// 2666                  nop ;~ 01A2:0E18
cs=0x1a2;eip=0x000e19; 	X(PUSH(cs));	// 2667                  push    cs ;~ 01A2:0E19
cs=0x1a2;eip=0x000e1a; 	J(CALL(___isatty,0));	// 2668                  call    near ptr ___isatty ;~ 01A2:0E1A
cs=0x1a2;eip=0x000e1d; 	X(POP(cx));	// 2669                  pop     cx ;~ 01A2:0E1D
cs=0x1a2;eip=0x000e1e; 	T(OR(ax, ax));	// 2670                  or      ax, ax ;~ 01A2:0E1E
cs=0x1a2;eip=0x000e20; 	J(JNZ(loc_10e28));	// 2671                  jnz     short loc_10E28 ;~ 01A2:0E20
cs=0x1a2;eip=0x000e22; 	X(AND(word_18fc6, 0x0FDFF));	// 2672                  and     word_18FC6, 0FDFFh ;~ 01A2:0E22
loc_10e28:
	// 4508 
cs=0x1a2;eip=0x000e28; 	T(ax = 0x200;);	// 2675                  mov     ax, 200h ;~ 01A2:0E28
cs=0x1a2;eip=0x000e2b; 	X(PUSH(ax));	// 2676                  push    ax              ; size ;~ 01A2:0E2B
cs=0x1a2;eip=0x000e2c; 	T(TEST(word_18fc6, 0x200));	// 2677                  test    word_18FC6, 200h ;~ 01A2:0E2C
cs=0x1a2;eip=0x000e32; 	J(JZ(loc_10e39));	// 2678                  jz      short loc_10E39 ;~ 01A2:0E32
cs=0x1a2;eip=0x000e34; 	T(ax = 2;);	// 2679                  mov     ax, 2 ;~ 01A2:0E34
cs=0x1a2;eip=0x000e37; 	J(JMP(loc_10e3b));	// 2680                  jmp     short loc_10E3B ;~ 01A2:0E37
loc_10e39:
	// 4509 
cs=0x1a2;eip=0x000e39; 	T(XOR(ax, ax));	// 2684                  xor     ax, ax ;~ 01A2:0E39
loc_10e3b:
	// 4510 
cs=0x1a2;eip=0x000e3b; 	X(PUSH(ax));	// 2687                  push    ax              ; type ;~ 01A2:0E3B
cs=0x1a2;eip=0x000e3c; 	T(XOR(ax, ax));	// 2688                  xor     ax, ax ;~ 01A2:0E3C
cs=0x1a2;eip=0x000e3e; 	T(XOR(dx, dx));	// 2689                  xor     dx, dx ;~ 01A2:0E3E
cs=0x1a2;eip=0x000e40; 	X(PUSH(ax));	// 2690                  push    ax ;~ 01A2:0E40
cs=0x1a2;eip=0x000e41; 	X(PUSH(dx));	// 2691                  push    dx              ; buf ;~ 01A2:0E41
cs=0x1a2;eip=0x000e42; 	X(PUSH(ds));	// 2692                  push    ds ;~ 01A2:0E42
cs=0x1a2;eip=0x000e43; 	T(ax = 0x6E4;);	// 2693                  mov     ax, 6E4h ;~ 01A2:0E43
cs=0x1a2;eip=0x000e46; 	X(PUSH(ax));	// 2694                  push    ax              ; stream ;~ 01A2:0E46
cs=0x1a2;eip=0x000e47; 	T(NOP);	// 2695                  nop ;~ 01A2:0E47
cs=0x1a2;eip=0x000e48; 	X(PUSH(cs));	// 2696                  push    cs ;~ 01A2:0E48
cs=0x1a2;eip=0x000e49; 	J(CALL(___setvbuf,0));	// 2697                  call    near ptr ___setvbuf ;~ 01A2:0E49
cs=0x1a2;eip=0x000e4c; 	T(ADD(sp, 0x0C));	// 2698                  add     sp, 0Ch ;~ 01A2:0E4C
cs=0x1a2;eip=0x000e4f; 	J(RETN(0));	// 2699                  retn ;~ 01A2:0E4F

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____setupio: 	goto ____setupio;
        case m2c::kloc_10d9f: 	goto loc_10d9f;
        case m2c::kloc_10dd7: 	goto loc_10dd7;
        case m2c::kloc_10dec: 	goto loc_10dec;
        case m2c::kloc_10dfd: 	goto loc_10dfd;
        case m2c::kloc_10dff: 	goto loc_10dff;
        case m2c::kloc_10e28: 	goto loc_10e28;
        case m2c::kloc_10e39: 	goto loc_10e39;
        case m2c::kloc_10e3b: 	goto loc_10e3b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___toupper(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___toupper:
    _begin:
#undef arg_0
#define arg_0 6
	// 2710 arg_0           = word ptr  6 ;~ 01A2:0E50
cs=0x1a2;eip=0x000e50; 	X(PUSH(bp));	// 2712                  push    bp ;~ 01A2:0E50
cs=0x1a2;eip=0x000e51; 	T(bp = sp;);	// 2713                  mov     bp, sp ;~ 01A2:0E51
cs=0x1a2;eip=0x000e53; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_0))));	// 2714                  mov     dx, [bp+arg_0] ;~ 01A2:0E53
cs=0x1a2;eip=0x000e56; 	T(CMP(dx, 0x0FFFF));	// 2715                  cmp     dx, 0FFFFh ;~ 01A2:0E56
cs=0x1a2;eip=0x000e59; 	J(JNZ(loc_10e60));	// 2716                  jnz     short loc_10E60 ;~ 01A2:0E59
cs=0x1a2;eip=0x000e5b; 	T(ax = 0x0FFFF;);	// 2717                  mov     ax, 0FFFFh ;~ 01A2:0E5B
cs=0x1a2;eip=0x000e5e; 	J(JMP(loc_10e7a));	// 2718                  jmp     short loc_10E7A ;~ 01A2:0E5E
loc_10e60:
	// 4511 
cs=0x1a2;eip=0x000e60; 	T(al = dl;);	// 2722                  mov     al, dl ;~ 01A2:0E60
cs=0x1a2;eip=0x000e62; 	T(ah = 0;);	// 2723                  mov     ah, 0 ;~ 01A2:0E62
cs=0x1a2;eip=0x000e64; 	T(bx = ax;);	// 2724                  mov     bx, ax ;~ 01A2:0E64
cs=0x1a2;eip=0x000e66; 	T(TEST(*((&byte_18ea3)+bx), 8));	// 2725                  test    byte_18EA3[bx], 8 ;~ 01A2:0E66
cs=0x1a2;eip=0x000e6b; 	J(JZ(loc_10e76));	// 2726                  jz      short loc_10E76 ;~ 01A2:0E6B
cs=0x1a2;eip=0x000e6d; 	T(al = dl;);	// 2727                  mov     al, dl ;~ 01A2:0E6D
cs=0x1a2;eip=0x000e6f; 	T(ah = 0;);	// 2728                  mov     ah, 0 ;~ 01A2:0E6F
cs=0x1a2;eip=0x000e71; 	T(ADD(ax, 0x0FFE0));	// 2729                  add     ax, 0FFE0h ;~ 01A2:0E71
cs=0x1a2;eip=0x000e74; 	J(JMP(loc_10e7a));	// 2730                  jmp     short loc_10E7A ;~ 01A2:0E74
loc_10e76:
	// 4512 
cs=0x1a2;eip=0x000e76; 	T(al = dl;);	// 2734                  mov     al, dl ;~ 01A2:0E76
cs=0x1a2;eip=0x000e78; 	T(ah = 0;);	// 2735                  mov     ah, 0 ;~ 01A2:0E78
loc_10e7a:
	// 4513 
cs=0x1a2;eip=0x000e7a; 	X(POP(bp));	// 2739                  pop     bp ;~ 01A2:0E7A
cs=0x1a2;eip=0x000e7b; 	J(RETF(0));	// 2740                  retf ;~ 01A2:0E7B

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___toupper: 	goto ___toupper;
        case m2c::kloc_10e60: 	goto loc_10e60;
        case m2c::kloc_10e76: 	goto loc_10e76;
        case m2c::kloc_10e7a: 	goto loc_10e7a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___unlink(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___unlink:
    _begin:
#undef path
#define path 6
	// 2751 path            = dword ptr  6 ;~ 01A2:0E7C
cs=0x1a2;eip=0x000e7c; 	X(PUSH(bp));	// 2753                  push    bp ;~ 01A2:0E7C
cs=0x1a2;eip=0x000e7d; 	T(bp = sp;);	// 2754                  mov     bp, sp ;~ 01A2:0E7D
cs=0x1a2;eip=0x000e7f; 	X(PUSH(ds));	// 2755                  push    ds ;~ 01A2:0E7F
cs=0x1a2;eip=0x000e80; 	T(ah = 0x41;);	// 2756                  mov     ah, 41h ; 'A' ;~ 01A2:0E80
cs=0x1a2;eip=0x000e82; 	T(LDS(dx, *(dd*)(raddr(ss,bp+path))));	// 2757                  lds     dx, [bp+path] ;~ 01A2:0E82
cs=0x1a2;eip=0x000e85; 	S(_INT(0x21));	// 2758                  int     21h             ; DOS - 2+ - DELETE A FILE (UNLINK) ;~ 01A2:0E85
cs=0x1a2;eip=0x000e87; 	X(POP(ds));	// 2760                  pop     ds ;~ 01A2:0E87
cs=0x1a2;eip=0x000e88; 	J(JC(loc_10e8e));	// 2761                  jb      short loc_10E8E ;~ 01A2:0E88
cs=0x1a2;eip=0x000e8a; 	T(XOR(ax, ax));	// 2762                  xor     ax, ax ;~ 01A2:0E8A
cs=0x1a2;eip=0x000e8c; 	J(JMP(loc_10e92));	// 2763                  jmp     short loc_10E92 ;~ 01A2:0E8C
loc_10e8e:
	// 4514 
cs=0x1a2;eip=0x000e8e; 	X(PUSH(ax));	// 2767                  push    ax ;~ 01A2:0E8E
cs=0x1a2;eip=0x000e8f; 	J(CALL(____ioerror,0));	// 2768                  call    ____IOERROR ;~ 01A2:0E8F
loc_10e92:
	// 4515 
cs=0x1a2;eip=0x000e92; 	X(POP(bp));	// 2771                  pop     bp ;~ 01A2:0E92
cs=0x1a2;eip=0x000e93; 	J(RETF(0));	// 2772                  retf ;~ 01A2:0E93

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___unlink: 	goto ___unlink;
        case m2c::kloc_10e8e: 	goto loc_10e8e;
        case m2c::kloc_10e92: 	goto loc_10e92;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group3(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group3:
    _begin:
sub_10e94:
	// 2780 
cs=0x1a2;eip=0x000e94; 	T(al = dh;);	// 2782                  mov     al, dh ;~ 01A2:0E94
cs=0x1a2;eip=0x000e96; 	J(CALL(sub_10e9b,0));	// 2783                  call    sub_10E9B ;~ 01A2:0E96
cs=0x1a2;eip=0x000e99; 	T(al = dl;);	// 2784                  mov     al, dl ;~ 01A2:0E99
sub_10e9b:
	// 2792 
cs=0x1a2;eip=0x000e9b; 	X(AAM(0x10));	// 2793                  aam     10h ;~ 01A2:0E9B
cs=0x1a2;eip=0x000e9d; 	T(XCHG(ah, al));	// 2794                  xchg    ah, al ;~ 01A2:0E9D
cs=0x1a2;eip=0x000e9f; 	J(CALL(sub_10ea4,0));	// 2795                  call    sub_10EA4 ;~ 01A2:0E9F
cs=0x1a2;eip=0x000ea2; 	T(XCHG(ah, al));	// 2796                  xchg    ah, al ;~ 01A2:0EA2
sub_10ea4:
	// 2804 
cs=0x1a2;eip=0x000ea4; 	T(ADD(al, 0x90));	// 2805                  add     al, 90h ; '
cs=0x1a2;eip=0x000ea6; 	T(DAA);	// 2806                  daa ;~ 01A2:0EA6
cs=0x1a2;eip=0x000ea7; 	T(ADC(al, 0x40));	// 2807                  adc     al, 40h ; '@' ;~ 01A2:0EA7
cs=0x1a2;eip=0x000ea9; 	T(DAA);	// 2808                  daa ;~ 01A2:0EA9
cs=0x1a2;eip=0x000eaa; 	X(STOSB);	// 2809                  stosb ;~ 01A2:0EAA
cs=0x1a2;eip=0x000eab; 	J(RETN(0));	// 2810                  retn ;~ 01A2:0EAB

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_10e94: 	goto sub_10e94;
        case m2c::ksub_10e9b: 	goto sub_10e9b;
        case m2c::ksub_10ea4: 	goto sub_10ea4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____vprinter(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____vprinter:
    _begin:
#undef var_96
#define var_96 -0x96
	// 2821 var_96          = byte ptr -96h ;~ 01A2:0EAC
#undef var_46
#define var_46 -0x46
	// 2822 var_46          = byte ptr -46h ;~ 01A2:0EAC
#undef var_45
#define var_45 -0x45
	// 2823 var_45          = byte ptr -45h ;~ 01A2:0EAC
#undef var_16
#define var_16 -0x16
	// 2824 var_16          = word ptr -16h ;~ 01A2:0EAC
#undef var_14
#define var_14 -0x14
	// 2825 var_14          = word ptr -14h ;~ 01A2:0EAC
#undef var_12
#define var_12 -0x12
	// 2826 var_12          = word ptr -12h ;~ 01A2:0EAC
#undef var_10
#define var_10 -0x10
	// 2827 var_10          = word ptr -10h ;~ 01A2:0EAC
#undef var_e
#define var_e -0x0E
	// 2828 var_E           = word ptr -0Eh ;~ 01A2:0EAC
#undef var_b
#define var_b -0x0B
	// 2829 var_B           = byte ptr -0Bh ;~ 01A2:0EAC
#undef var_a
#define var_a -0x0A
	// 2830 var_A           = word ptr -0Ah ;~ 01A2:0EAC
#undef var_8
#define var_8 -8
	// 2831 var_8           = word ptr -8 ;~ 01A2:0EAC
#undef var_6
#define var_6 -6
	// 2832 var_6           = byte ptr -6 ;~ 01A2:0EAC
#undef var_5
#define var_5 -5
	// 2833 var_5           = byte ptr -5 ;~ 01A2:0EAC
#undef var_4
#define var_4 -4
	// 2834 var_4           = word ptr -4 ;~ 01A2:0EAC
#undef var_2
#define var_2 -2
	// 2835 var_2           = word ptr -2 ;~ 01A2:0EAC
#undef arg_0
#define arg_0 4
	// 2836 arg_0           = word ptr  4 ;~ 01A2:0EAC
#undef arg_2
#define arg_2 6
	// 2837 arg_2           = dword ptr  6 ;~ 01A2:0EAC
cs=0x1a2;eip=0x000eac; 	X(PUSH(bp));	// 2841                  push    bp ;~ 01A2:0EAC
cs=0x1a2;eip=0x000ead; 	T(bp = sp;);	// 2842                  mov     bp, sp ;~ 01A2:0EAD
cs=0x1a2;eip=0x000eaf; 	T(SUB(sp, 0x96));	// 2843                  sub     sp, 96h ;~ 01A2:0EAF
cs=0x1a2;eip=0x000eb3; 	X(PUSH(si));	// 2844                  push    si ;~ 01A2:0EB3
cs=0x1a2;eip=0x000eb4; 	X(PUSH(di));	// 2845                  push    di ;~ 01A2:0EB4
cs=0x1a2;eip=0x000eb5; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), 0));	// 2846                  mov     [bp+var_12], 0 ;~ 01A2:0EB5
cs=0x1a2;eip=0x000eba; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), 0x50));	// 2847                  mov     [bp+var_14], 50h ; 'P' ;~ 01A2:0EBA
cs=0x1a2;eip=0x000ebf; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), 0));	// 2848                  mov     [bp+var_16], 0 ;~ 01A2:0EBF
cs=0x1a2;eip=0x000ec4; 	J(return seg000_f10_proc(m2c::kloc_10f10, _state););	// 2849                  jmp     short loc_10F10 ;~ 01A2:0EC4

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____vprinter: 	goto ____vprinter;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_10ec6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_10ec6:
    _begin:
cs=0x1a2;eip=0x000ec6; 	X(PUSH(di));	// 2859                  push    di ;~ 01A2:0EC6
cs=0x1a2;eip=0x000ec7; 	T(cx = 0x0FFFF;);	// 2860                  mov     cx, 0FFFFh ;~ 01A2:0EC7
cs=0x1a2;eip=0x000eca; 	T(XOR(al, al));	// 2861                  xor     al, al ;~ 01A2:0ECA
	// 2862                  repne scasb ;~ 01A2:0ECC
cs=0x1a2;eip=0x000ecc; 	T(	REPNE SCASB);	// 2862                  repne scasb ;~ 01A2:0ECC
cs=0x1a2;eip=0x000ece; 	T(NOT(cx));	// 2863                  not     cx ;~ 01A2:0ECE
cs=0x1a2;eip=0x000ed0; 	T(DEC(cx));	// 2864                  dec     cx ;~ 01A2:0ED0
cs=0x1a2;eip=0x000ed1; 	X(POP(di));	// 2865                  pop     di ;~ 01A2:0ED1
cs=0x1a2;eip=0x000ed2; 	J(RETN(0));	// 2866                  retn ;~ 01A2:0ED2

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_10ec6: 	goto sub_10ec6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group4:
    _begin:
sub_10ed3:
	// 2874 
cs=0x1a2;eip=0x000ed3; 	X(MOV(*(raddr(ss,di)), al));	// 2876                  mov     ss:[di], al ;~ 01A2:0ED3
cs=0x1a2;eip=0x000ed6; 	T(INC(di));	// 2877                  inc     di ;~ 01A2:0ED6
cs=0x1a2;eip=0x000ed7; 	X(DEC(*(raddr(ss,bp-0x14))));	// 2878                  dec     byte ptr [bp-14h] ;~ 01A2:0ED7
cs=0x1a2;eip=0x000eda; 	J(JNZ(locret_10f0f));	// 2879                  jnz     short locret_10F0F ;~ 01A2:0EDA
sub_10edc:
	// 2887 
cs=0x1a2;eip=0x000edc; 	X(PUSH(bx));	// 2889                  push    bx ;~ 01A2:0EDC
cs=0x1a2;eip=0x000edd; 	X(PUSH(cx));	// 2890                  push    cx ;~ 01A2:0EDD
cs=0x1a2;eip=0x000ede; 	X(PUSH(dx));	// 2891                  push    dx ;~ 01A2:0EDE
cs=0x1a2;eip=0x000edf; 	X(PUSH(es));	// 2892                  push    es ;~ 01A2:0EDF
cs=0x1a2;eip=0x000ee0; 	T(ax = bp-0x96);	// 2893                  lea     ax, [bp-96h] ;~ 01A2:0EE0
cs=0x1a2;eip=0x000ee4; 	T(SUB(di, ax));	// 2894                  sub     di, ax ;~ 01A2:0EE4
cs=0x1a2;eip=0x000ee6; 	X(PUSH(ss));	// 2895                  push    ss ;~ 01A2:0EE6
cs=0x1a2;eip=0x000ee7; 	T(ax = bp-0x96);	// 2896                  lea     ax, [bp-96h] ;~ 01A2:0EE7
cs=0x1a2;eip=0x000eeb; 	X(PUSH(ax));	// 2897                  push    ax ;~ 01A2:0EEB
cs=0x1a2;eip=0x000eec; 	X(PUSH(di));	// 2898                  push    di ;~ 01A2:0EEC
cs=0x1a2;eip=0x000eed; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0C))));	// 2899                  push    word ptr [bp+0Ch] ;~ 01A2:0EED
cs=0x1a2;eip=0x000ef0; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0A))));	// 2900                  push    word ptr [bp+0Ah] ;~ 01A2:0EF0
cs=0x1a2;eip=0x000ef3; 	J(CALL(__dispatch_call,*(dw*)((&__off_188ee)+bp)));	// 2901                  call    word ptr ss:__off_188EE[bp] ;~ 01A2:0EF3
cs=0x1a2;eip=0x000ef6; 	T(OR(ax, ax));	// 2902                  or      ax, ax ;~ 01A2:0EF6
cs=0x1a2;eip=0x000ef8; 	J(JNZ(loc_10eff));	// 2903                  jnz     short loc_10EFF ;~ 01A2:0EF8
cs=0x1a2;eip=0x000efa; 	X(MOV(*(dw*)(raddr(ss,bp-0x16)), 1));	// 2904                  mov     word ptr [bp-16h], 1 ;~ 01A2:0EFA
loc_10eff:
	// 4516 
cs=0x1a2;eip=0x000eff; 	X(MOV(*(dw*)(raddr(ss,bp-0x14)), 0x50));	// 2907                  mov     word ptr [bp-14h], 50h ; 'P' ;~ 01A2:0EFF
cs=0x1a2;eip=0x000f04; 	X(ADD(*(dw*)(raddr(ss,bp-0x12)), di));	// 2908                  add     [bp-12h], di ;~ 01A2:0F04
cs=0x1a2;eip=0x000f07; 	T(di = bp-0x96);	// 2909                  lea     di, [bp-96h] ;~ 01A2:0F07
cs=0x1a2;eip=0x000f0b; 	X(POP(es));	// 2910                  pop     es ;~ 01A2:0F0B
cs=0x1a2;eip=0x000f0c; 	X(POP(dx));	// 2912                  pop     dx ;~ 01A2:0F0C
cs=0x1a2;eip=0x000f0d; 	X(POP(cx));	// 2913                  pop     cx ;~ 01A2:0F0D
cs=0x1a2;eip=0x000f0e; 	X(POP(bx));	// 2914                  pop     bx ;~ 01A2:0F0E
locret_10f0f:
	// 4517 
cs=0x1a2;eip=0x000f0f; 	J(RETN(0));	// 2917                  retn ;~ 01A2:0F0F

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_10eff: 	goto loc_10eff;
        case m2c::klocret_10f0f: 	goto locret_10f0f;
        case m2c::ksub_10ed3: 	goto sub_10ed3;
        case m2c::ksub_10edc: 	goto sub_10edc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg000_f10_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg000_f10_proc:
    _begin:
loc_10f10:
	// 4518 
cs=0x1a2;eip=0x000f10; 	X(PUSH(es));	// 2924                  push    es ;~ 01A2:0F10
cs=0x1a2;eip=0x000f11; 	T(CLD);	// 2925                  cld ;~ 01A2:0F11
cs=0x1a2;eip=0x000f12; 	T(di = bp+var_96);	// 2926                  lea     di, [bp+var_96] ;~ 01A2:0F12
cs=0x1a2;eip=0x000f16; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), di));	// 2927                  mov     [bp+var_4], di ;~ 01A2:0F16
loc_10f19:
	// 4519 
cs=0x1a2;eip=0x000f19; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_4))));	// 2930                  mov     di, [bp+var_4] ;~ 01A2:0F19
loc_10f1c:
	// 4520 
cs=0x1a2;eip=0x000f1c; 	T(LES(si, *(dd*)(raddr(ss,bp+arg_2))));	// 2933                  les     si, [bp+arg_2] ;~ 01A2:0F1C
loc_10f1f:
	// 4521 
cs=0x1a2;eip=0x000f1f; 	X(LODS(*(raddr(es,si)),si,1));	// 2937                  lods    byte ptr es:[si] ;~ 01A2:0F1F
cs=0x1a2;eip=0x000f21; 	T(OR(al, al));	// 2938                  or      al, al ;~ 01A2:0F21
cs=0x1a2;eip=0x000f23; 	J(JZ(loc_10f37));	// 2939                  jz      short loc_10F37 ;~ 01A2:0F23
cs=0x1a2;eip=0x000f25; 	T(CMP(al, 0x25));	// 2940                  cmp     al, 25h ; '%' ;~ 01A2:0F25
cs=0x1a2;eip=0x000f27; 	J(JZ(loc_10f3a));	// 2941                  jz      short loc_10F3A ;~ 01A2:0F27
loc_10f29:
	// 4522 
cs=0x1a2;eip=0x000f29; 	X(MOV(*(raddr(ss,di)), al));	// 2944                  mov     ss:[di], al ;~ 01A2:0F29
cs=0x1a2;eip=0x000f2c; 	T(INC(di));	// 2945                  inc     di ;~ 01A2:0F2C
cs=0x1a2;eip=0x000f2d; 	X(DEC(*(raddr(ss,bp+var_14))));	// 2946                  dec     byte ptr [bp+var_14] ;~ 01A2:0F2D
cs=0x1a2;eip=0x000f30; 	J(JG(loc_10f1f));	// 2947                  jg      short loc_10F1F ;~ 01A2:0F30
cs=0x1a2;eip=0x000f32; 	J(CALL(sub_10edc,0));	// 2948                  call    sub_10EDC ;~ 01A2:0F32
cs=0x1a2;eip=0x000f35; 	J(JMP(loc_10f1f));	// 2949                  jmp     short loc_10F1F ;~ 01A2:0F35
loc_10f37:
	// 4523 
cs=0x1a2;eip=0x000f37; 	J(JMP(loc_1131f));	// 2953                  jmp     loc_1131F ;~ 01A2:0F37
loc_10f3a:
	// 4524 
cs=0x1a2;eip=0x000f3a; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), si));	// 2957                  mov     [bp+var_10], si ;~ 01A2:0F3A
cs=0x1a2;eip=0x000f3d; 	X(LODS(*(raddr(es,si)),si,1));	// 2958                  lods    byte ptr es:[si] ;~ 01A2:0F3D
cs=0x1a2;eip=0x000f3f; 	T(CMP(al, 0x25));	// 2959                  cmp     al, 25h ; '%' ;~ 01A2:0F3F
cs=0x1a2;eip=0x000f41; 	J(JZ(loc_10f29));	// 2960                  jz      short loc_10F29 ;~ 01A2:0F41
cs=0x1a2;eip=0x000f43; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), di));	// 2961                  mov     [bp+var_4], di ;~ 01A2:0F43
cs=0x1a2;eip=0x000f46; 	T(XOR(cx, cx));	// 2962                  xor     cx, cx ;~ 01A2:0F46
cs=0x1a2;eip=0x000f48; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), cx));	// 2963                  mov     [bp+var_E], cx ;~ 01A2:0F48
cs=0x1a2;eip=0x000f4b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x20));	// 2964                  mov     [bp+var_2], 20h ; ' ' ;~ 01A2:0F4B
cs=0x1a2;eip=0x000f50; 	X(MOV(*(raddr(ss,bp+var_b)), cl));	// 2965                  mov     [bp+var_B], cl ;~ 01A2:0F50
cs=0x1a2;eip=0x000f53; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0x0FFFF));	// 2966                  mov     [bp+var_8], 0FFFFh ;~ 01A2:0F53
cs=0x1a2;eip=0x000f58; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0x0FFFF));	// 2967                  mov     [bp+var_A], 0FFFFh ;~ 01A2:0F58
cs=0x1a2;eip=0x000f5d; 	J(JMP(loc_10f61));	// 2968                  jmp     short loc_10F61 ;~ 01A2:0F5D
loc_10f5f:
	// 4525 
cs=0x1a2;eip=0x000f5f; 	X(LODS(*(raddr(es,si)),si,1));	// 2973                  lods    byte ptr es:[si] ;~ 01A2:0F5F
loc_10f61:
	// 4526 
cs=0x1a2;eip=0x000f61; 	T(XOR(ah, ah));	// 2976                  xor     ah, ah ;~ 01A2:0F61
cs=0x1a2;eip=0x000f63; 	T(dx = ax;);	// 2977                  mov     dx, ax ;~ 01A2:0F63
cs=0x1a2;eip=0x000f65; 	T(bx = ax;);	// 2978                  mov     bx, ax ;~ 01A2:0F65
cs=0x1a2;eip=0x000f67; 	T(SUB(bl, 0x20));	// 2979                  sub     bl, 20h ; ' ' ;~ 01A2:0F67
cs=0x1a2;eip=0x000f6a; 	T(CMP(bl, 0x60));	// 2980                  cmp     bl, 60h ; '`' ;~ 01A2:0F6A
cs=0x1a2;eip=0x000f6d; 	J(JNC(loc_10f82));	// 2981                  jnb     short loc_10F82 ;~ 01A2:0F6D
cs=0x1a2;eip=0x000f6f; 	T(MOV(bl, *(raddr(ds,bx+0x90D))));	// 2982                  mov     bl, [bx+90Dh] ;~ 01A2:0F6F
cs=0x1a2;eip=0x000f73; 	T(CMP(bx, 0x17));	// 2983                  cmp     bx, 17h         ; switch 24 cases ;~ 01A2:0F73
cs=0x1a2;eip=0x000f76; 	J(JBE(loc_10f7b));	// 2984                  jbe     short loc_10F7B ;~ 01A2:0F76
cs=0x1a2;eip=0x000f78; 	J(JMP(__def_10f7d));	// 2985                  jmp     __def_10F7D     ; jumptable 00010F7D default case, cases 19-21 ;~ 01A2:0F78
loc_10f7b:
	// 4527 
cs=0x1a2;eip=0x000f7b; 	T(SHL(bx, 1));	// 2989                  shl     bx, 1 ;~ 01A2:0F7B
cs=0x1a2;eip=0x000f7d; __disp=*(dw*)((&__jpt_10f7d)+bx);
	J(return __dispatch_call(__disp, _state););	// 2990                  jmp     word ptr cs:__jpt_10F7D[bx] ; switch jump ;~ 01A2:0F7D
loc_10f82:
	// 4528 
cs=0x1a2;eip=0x000f82; 	J(JMP(__def_10f7d));	// 2995                  jmp     __def_10F7D     ; jumptable 00010F7D default case, cases 19-21 ;~ 01A2:0F82
loc_10f85:
	// 4529 
cs=0x1a2;eip=0x000f85; 	T(CMP(ch, 0));	// 2999                  cmp     ch, 0           ; jumptable 00010F7D case 1 ;~ 01A2:0F85
cs=0x1a2;eip=0x000f88; 	J(JA(loc_10f82));	// 3000                  ja      short loc_10F82 ;~ 01A2:0F88
cs=0x1a2;eip=0x000f8a; 	X(OR(*(dw*)(raddr(ss,bp+var_2)), 1));	// 3001                  or      [bp+var_2], 1 ;~ 01A2:0F8A
cs=0x1a2;eip=0x000f8e; 	J(JMP(loc_10f5f));	// 3002                  jmp     short loc_10F5F ;~ 01A2:0F8E
loc_10f90:
	// 4530 
cs=0x1a2;eip=0x000f90; 	T(CMP(ch, 0));	// 3006                  cmp     ch, 0           ; jumptable 00010F7D case 3 ;~ 01A2:0F90
cs=0x1a2;eip=0x000f93; 	J(JA(loc_10f82));	// 3007                  ja      short loc_10F82 ;~ 01A2:0F93
cs=0x1a2;eip=0x000f95; 	X(OR(*(dw*)(raddr(ss,bp+var_2)), 2));	// 3008                  or      [bp+var_2], 2 ;~ 01A2:0F95
cs=0x1a2;eip=0x000f99; 	J(JMP(loc_10f5f));	// 3009                  jmp     short loc_10F5F ;~ 01A2:0F99
loc_10f9b:
	// 4531 
cs=0x1a2;eip=0x000f9b; 	T(CMP(ch, 0));	// 3013                  cmp     ch, 0           ; jumptable 00010F7D case 0 ;~ 01A2:0F9B
cs=0x1a2;eip=0x000f9e; 	J(JA(loc_10f82));	// 3014                  ja      short loc_10F82 ;~ 01A2:0F9E
cs=0x1a2;eip=0x000fa0; 	T(CMP(*(raddr(ss,bp+var_b)), 0x2B));	// 3015                  cmp     [bp+var_B], 2Bh ; '+' ;~ 01A2:0FA0
cs=0x1a2;eip=0x000fa4; 	J(JZ(loc_10fa9));	// 3016                  jz      short loc_10FA9 ;~ 01A2:0FA4
cs=0x1a2;eip=0x000fa6; 	X(MOV(*(raddr(ss,bp+var_b)), dl));	// 3017                  mov     [bp+var_B], dl ;~ 01A2:0FA6
loc_10fa9:
	// 4532 
cs=0x1a2;eip=0x000fa9; 	J(JMP(loc_10f5f));	// 3020                  jmp     short loc_10F5F ;~ 01A2:0FA9
loc_10fab:
	// 4533 
cs=0x1a2;eip=0x000fab; 	X(AND(*(dw*)(raddr(ss,bp+var_2)), 0x0FFDF));	// 3024                  and     [bp+var_2], 0FFDFh ; jumptable 00010F7D case 22 ;~ 01A2:0FAB
cs=0x1a2;eip=0x000faf; 	J(JMP(loc_10fb5));	// 3025                  jmp     short loc_10FB5 ;~ 01A2:0FAF
loc_10fb1:
	// 4534 
cs=0x1a2;eip=0x000fb1; 	X(OR(*(dw*)(raddr(ss,bp+var_2)), 0x20));	// 3029                  or      [bp+var_2], 20h ; jumptable 00010F7D case 23 ;~ 01A2:0FB1
loc_10fb5:
	// 4535 
cs=0x1a2;eip=0x000fb5; 	T(ch = 5;);	// 3033                  mov     ch, 5 ;~ 01A2:0FB5
cs=0x1a2;eip=0x000fb7; 	J(JMP(loc_10f5f));	// 3034                  jmp     short loc_10F5F ;~ 01A2:0FB7
loc_10fb9:
	// 4536 
cs=0x1a2;eip=0x000fb9; 	T(CMP(ch, 0));	// 3038                  cmp     ch, 0           ; jumptable 00010F7D case 9 ;~ 01A2:0FB9
cs=0x1a2;eip=0x000fbc; 	J(JA(loc_1100b));	// 3039                  ja      short loc_1100B ; jumptable 00010F7D case 5 ;~ 01A2:0FBC
cs=0x1a2;eip=0x000fbe; 	T(TEST(*(dw*)(raddr(ss,bp+var_2)), 2));	// 3040                  test    [bp+var_2], 2 ;~ 01A2:0FBE
cs=0x1a2;eip=0x000fc3; 	J(JNZ(loc_10fee));	// 3041                  jnz     short loc_10FEE ;~ 01A2:0FC3
cs=0x1a2;eip=0x000fc5; 	X(OR(*(dw*)(raddr(ss,bp+var_2)), 8));	// 3042                  or      [bp+var_2], 8 ;~ 01A2:0FC5
cs=0x1a2;eip=0x000fc9; 	T(ch = 1;);	// 3043                  mov     ch, 1 ;~ 01A2:0FC9
cs=0x1a2;eip=0x000fcb; 	J(JMP(loc_10f5f));	// 3044                  jmp     short loc_10F5F ;~ 01A2:0FCB
loc_10fcd:
	// 4537 
cs=0x1a2;eip=0x000fcd; 	J(JMP(__def_10f7d));	// 3049                  jmp     __def_10F7D     ; jumptable 00010F7D default case, cases 19-21 ;~ 01A2:0FCD
loc_10fd0:
	// 4538 
cs=0x1a2;eip=0x000fd0; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 3053                  mov     di, [bp+arg_0]  ; jumptable 00010F7D case 2 ;~ 01A2:0FD0
cs=0x1a2;eip=0x000fd3; 	T(MOV(ax, *(dw*)(raddr(ss,di))));	// 3054                  mov     ax, ss:[di] ;~ 01A2:0FD3
cs=0x1a2;eip=0x000fd6; 	X(ADD(*(dw*)(raddr(ss,bp+arg_0)), 2));	// 3055                  add     [bp+arg_0], 2 ;~ 01A2:0FD6
cs=0x1a2;eip=0x000fda; 	T(CMP(ch, 2));	// 3056                  cmp     ch, 2 ;~ 01A2:0FDA
cs=0x1a2;eip=0x000fdd; 	J(JNC(loc_10ff1));	// 3057                  jnb     short loc_10FF1 ;~ 01A2:0FDD
cs=0x1a2;eip=0x000fdf; 	T(OR(ax, ax));	// 3058                  or      ax, ax ;~ 01A2:0FDF
cs=0x1a2;eip=0x000fe1; 	J(JNS(loc_10fe9));	// 3059                  jns     short loc_10FE9 ;~ 01A2:0FE1
cs=0x1a2;eip=0x000fe3; 	T(NEG(ax));	// 3060                  neg     ax ;~ 01A2:0FE3
cs=0x1a2;eip=0x000fe5; 	X(OR(*(dw*)(raddr(ss,bp+var_2)), 2));	// 3061                  or      [bp+var_2], 2 ;~ 01A2:0FE5
loc_10fe9:
	// 4539 
cs=0x1a2;eip=0x000fe9; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 3064                  mov     [bp+var_8], ax ;~ 01A2:0FE9
cs=0x1a2;eip=0x000fec; 	T(ch = 3;);	// 3065                  mov     ch, 3 ;~ 01A2:0FEC
loc_10fee:
	// 4540 
cs=0x1a2;eip=0x000fee; 	J(JMP(loc_10f5f));	// 3069                  jmp     loc_10F5F ;~ 01A2:0FEE
loc_10ff1:
	// 4541 
cs=0x1a2;eip=0x000ff1; 	T(CMP(ch, 4));	// 3073                  cmp     ch, 4 ;~ 01A2:0FF1
cs=0x1a2;eip=0x000ff4; 	J(JNZ(loc_10fcd));	// 3074                  jnz     short loc_10FCD ;~ 01A2:0FF4
cs=0x1a2;eip=0x000ff6; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 3075                  mov     [bp+var_A], ax ;~ 01A2:0FF6
cs=0x1a2;eip=0x000ff9; 	T(INC(ch));	// 3076                  inc     ch ;~ 01A2:0FF9
cs=0x1a2;eip=0x000ffb; 	J(JMP(loc_10f5f));	// 3077                  jmp     loc_10F5F ;~ 01A2:0FFB
loc_10ffe:
	// 4542 
cs=0x1a2;eip=0x000ffe; 	T(CMP(ch, 4));	// 3081                  cmp     ch, 4           ; jumptable 00010F7D case 4 ;~ 01A2:0FFE
cs=0x1a2;eip=0x001001; 	J(JNC(loc_10fcd));	// 3082                  jnb     short loc_10FCD ;~ 01A2:1001
cs=0x1a2;eip=0x001003; 	T(ch = 4;);	// 3083                  mov     ch, 4 ;~ 01A2:1003
cs=0x1a2;eip=0x001005; 	X(INC(*(dw*)(raddr(ss,bp+var_a))));	// 3084                  inc     [bp+var_A] ;~ 01A2:1005
cs=0x1a2;eip=0x001008; 	J(JMP(loc_10f5f));	// 3085                  jmp     loc_10F5F ;~ 01A2:1008
loc_1100b:
	// 4543 
cs=0x1a2;eip=0x00100b; 	T(XCHG(ax, dx));	// 3090                  xchg    ax, dx          ; jumptable 00010F7D case 5 ;~ 01A2:100B
cs=0x1a2;eip=0x00100c; 	T(SUB(al, 0x30));	// 3091                  sub     al, 30h ; '0' ;~ 01A2:100C
cs=0x1a2;eip=0x00100e; 	T(CBW);	// 3092                  cbw ;~ 01A2:100E
cs=0x1a2;eip=0x00100f; 	T(CMP(ch, 2));	// 3093                  cmp     ch, 2 ;~ 01A2:100F
cs=0x1a2;eip=0x001012; 	J(JA(loc_1102d));	// 3094                  ja      short loc_1102D ;~ 01A2:1012
cs=0x1a2;eip=0x001014; 	T(ch = 2;);	// 3095                  mov     ch, 2 ;~ 01A2:1014
cs=0x1a2;eip=0x001016; 	X(XCHG(ax, *(dw*)(raddr(ss,bp+var_8))));	// 3096                  xchg    ax, [bp+var_8] ;~ 01A2:1016
cs=0x1a2;eip=0x001019; 	T(OR(ax, ax));	// 3097                  or      ax, ax ;~ 01A2:1019
cs=0x1a2;eip=0x00101b; 	J(JL(loc_10fee));	// 3098                  jl      short loc_10FEE ;~ 01A2:101B
cs=0x1a2;eip=0x00101d; 	T(SHL(ax, 1));	// 3099                  shl     ax, 1 ;~ 01A2:101D
cs=0x1a2;eip=0x00101f; 	T(dx = ax;);	// 3100                  mov     dx, ax ;~ 01A2:101F
cs=0x1a2;eip=0x001021; 	T(SHL(ax, 1));	// 3101                  shl     ax, 1 ;~ 01A2:1021
cs=0x1a2;eip=0x001023; 	T(SHL(ax, 1));	// 3102                  shl     ax, 1 ;~ 01A2:1023
cs=0x1a2;eip=0x001025; 	T(ADD(ax, dx));	// 3103                  add     ax, dx ;~ 01A2:1025
cs=0x1a2;eip=0x001027; 	X(ADD(*(dw*)(raddr(ss,bp+var_8)), ax));	// 3104                  add     [bp+var_8], ax ;~ 01A2:1027
cs=0x1a2;eip=0x00102a; 	J(JMP(loc_10f5f));	// 3105                  jmp     loc_10F5F ;~ 01A2:102A
loc_1102d:
	// 4544 
cs=0x1a2;eip=0x00102d; 	T(CMP(ch, 4));	// 3109                  cmp     ch, 4 ;~ 01A2:102D
cs=0x1a2;eip=0x001030; 	J(JNZ(loc_10fcd));	// 3110                  jnz     short loc_10FCD ;~ 01A2:1030
cs=0x1a2;eip=0x001032; 	X(XCHG(ax, *(dw*)(raddr(ss,bp+var_a))));	// 3111                  xchg    ax, [bp+var_A] ;~ 01A2:1032
cs=0x1a2;eip=0x001035; 	T(OR(ax, ax));	// 3112                  or      ax, ax ;~ 01A2:1035
cs=0x1a2;eip=0x001037; 	J(JZ(loc_10fee));	// 3113                  jz      short loc_10FEE ;~ 01A2:1037
cs=0x1a2;eip=0x001039; 	T(SHL(ax, 1));	// 3114                  shl     ax, 1 ;~ 01A2:1039
cs=0x1a2;eip=0x00103b; 	T(dx = ax;);	// 3115                  mov     dx, ax ;~ 01A2:103B
cs=0x1a2;eip=0x00103d; 	T(SHL(ax, 1));	// 3116                  shl     ax, 1 ;~ 01A2:103D
cs=0x1a2;eip=0x00103f; 	T(SHL(ax, 1));	// 3117                  shl     ax, 1 ;~ 01A2:103F
cs=0x1a2;eip=0x001041; 	T(ADD(ax, dx));	// 3118                  add     ax, dx ;~ 01A2:1041
cs=0x1a2;eip=0x001043; 	X(ADD(*(dw*)(raddr(ss,bp+var_a)), ax));	// 3119                  add     [bp+var_A], ax ;~ 01A2:1043
cs=0x1a2;eip=0x001046; 	J(JMP(loc_10f5f));	// 3120                  jmp     loc_10F5F ;~ 01A2:1046
loc_11049:
	// 4545 
cs=0x1a2;eip=0x001049; 	X(OR(*(dw*)(raddr(ss,bp+var_2)), 0x10));	// 3124                  or      [bp+var_2], 10h ; jumptable 00010F7D case 6 ;~ 01A2:1049
cs=0x1a2;eip=0x00104d; 	J(JMP(loc_10fb5));	// 3125                  jmp     loc_10FB5 ;~ 01A2:104D
loc_11050:
	// 4546 
cs=0x1a2;eip=0x001050; 	X(OR(*(dw*)(raddr(ss,bp+var_2)), 0x100));	// 3129                  or      [bp+var_2], 100h ; jumptable 00010F7D case 7 ;~ 01A2:1050
loc_11055:
	// 4547 
cs=0x1a2;eip=0x001055; 	X(AND(*(dw*)(raddr(ss,bp+var_2)), 0x0FFEF));	// 3132                  and     [bp+var_2], 0FFEFh ; jumptable 00010F7D case 8 ;~ 01A2:1055
cs=0x1a2;eip=0x001059; 	J(JMP(loc_10fb5));	// 3133                  jmp     loc_10FB5 ;~ 01A2:1059
loc_1105c:
	// 4548 
cs=0x1a2;eip=0x00105c; 	T(bh = 8;);	// 3137                  mov     bh, 8           ; jumptable 00010F7D case 11 ;~ 01A2:105C
cs=0x1a2;eip=0x00105e; 	J(JMP(loc_1106a));	// 3138                  jmp     short loc_1106A ;~ 01A2:105E
loc_11060:
	// 4549 
cs=0x1a2;eip=0x001060; 	T(bh = 0x0A;);	// 3142                  mov     bh, 0Ah         ; jumptable 00010F7D case 12 ;~ 01A2:1060
cs=0x1a2;eip=0x001062; 	J(JMP(loc_1106e));	// 3143                  jmp     short loc_1106E ;~ 01A2:1062
loc_11064:
	// 4550 
cs=0x1a2;eip=0x001064; 	T(bh = 0x10;);	// 3147                  mov     bh, 10h         ; jumptable 00010F7D case 13 ;~ 01A2:1064
cs=0x1a2;eip=0x001066; 	T(bl = 0x0E9;);	// 3148                  mov     bl, 0E9h ; '
cs=0x1a2;eip=0x001068; 	T(ADD(bl, dl));	// 3149                  add     bl, dl ;~ 01A2:1068
loc_1106a:
	// 4551 
cs=0x1a2;eip=0x00106a; 	X(MOV(*(raddr(ss,bp+var_b)), 0));	// 3152                  mov     [bp+var_B], 0 ;~ 01A2:106A
loc_1106e:
	// 4552 
cs=0x1a2;eip=0x00106e; 	X(MOV(*(raddr(ss,bp+var_5)), dl));	// 3155                  mov     [bp+var_5], dl ;~ 01A2:106E
cs=0x1a2;eip=0x001071; 	T(XOR(dx, dx));	// 3156                  xor     dx, dx ;~ 01A2:1071
cs=0x1a2;eip=0x001073; 	X(MOV(*(raddr(ss,bp+var_6)), dl));	// 3157                  mov     [bp+var_6], dl ;~ 01A2:1073
cs=0x1a2;eip=0x001076; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 3158                  mov     di, [bp+arg_0] ;~ 01A2:1076
cs=0x1a2;eip=0x001079; 	T(MOV(ax, *(dw*)(raddr(ss,di))));	// 3159                  mov     ax, ss:[di] ;~ 01A2:1079
cs=0x1a2;eip=0x00107c; 	J(JMP(loc_1108e));	// 3160                  jmp     short loc_1108E ;~ 01A2:107C
loc_1107e:
	// 4553 
cs=0x1a2;eip=0x00107e; 	T(bh = 0x0A;);	// 3164                  mov     bh, 0Ah         ; jumptable 00010F7D case 10 ;~ 01A2:107E
cs=0x1a2;eip=0x001080; 	X(MOV(*(raddr(ss,bp+var_6)), 1));	// 3165                  mov     [bp+var_6], 1 ;~ 01A2:1080
cs=0x1a2;eip=0x001084; 	X(MOV(*(raddr(ss,bp+var_5)), dl));	// 3166                  mov     [bp+var_5], dl ;~ 01A2:1084
cs=0x1a2;eip=0x001087; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 3167                  mov     di, [bp+arg_0] ;~ 01A2:1087
cs=0x1a2;eip=0x00108a; 	T(MOV(ax, *(dw*)(raddr(ss,di))));	// 3168                  mov     ax, ss:[di] ;~ 01A2:108A
cs=0x1a2;eip=0x00108d; 	T(CWD);	// 3169                  cwd ;~ 01A2:108D
loc_1108e:
	// 4554 
cs=0x1a2;eip=0x00108e; 	T(INC(di));	// 3172                  inc     di ;~ 01A2:108E
cs=0x1a2;eip=0x00108f; 	T(INC(di));	// 3173                  inc     di ;~ 01A2:108F
cs=0x1a2;eip=0x001090; 	X(MOV(*(dw*)(raddr(ss,bp+arg_2)), si));	// 3174                  mov     word ptr [bp+arg_2], si ;~ 01A2:1090
cs=0x1a2;eip=0x001093; 	T(TEST(*(dw*)(raddr(ss,bp+var_2)), 0x10));	// 3175                  test    [bp+var_2], 10h ;~ 01A2:1093
cs=0x1a2;eip=0x001098; 	J(JZ(loc_1109f));	// 3176                  jz      short loc_1109F ;~ 01A2:1098
cs=0x1a2;eip=0x00109a; 	T(MOV(dx, *(dw*)(raddr(ss,di))));	// 3177                  mov     dx, ss:[di] ;~ 01A2:109A
cs=0x1a2;eip=0x00109d; 	T(INC(di));	// 3178                  inc     di ;~ 01A2:109D
cs=0x1a2;eip=0x00109e; 	T(INC(di));	// 3179                  inc     di ;~ 01A2:109E
loc_1109f:
	// 4555 
cs=0x1a2;eip=0x00109f; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), di));	// 3182                  mov     [bp+arg_0], di ;~ 01A2:109F
cs=0x1a2;eip=0x0010a2; 	T(di = bp+var_45);	// 3183                  lea     di, [bp+var_45] ;~ 01A2:10A2
cs=0x1a2;eip=0x0010a5; 	T(OR(ax, ax));	// 3184                  or      ax, ax ;~ 01A2:10A5
cs=0x1a2;eip=0x0010a7; 	J(JNZ(loc_110bb));	// 3185                  jnz     short loc_110BB ;~ 01A2:10A7
cs=0x1a2;eip=0x0010a9; 	T(OR(dx, dx));	// 3186                  or      dx, dx ;~ 01A2:10A9
cs=0x1a2;eip=0x0010ab; 	J(JNZ(loc_110bb));	// 3187                  jnz     short loc_110BB ;~ 01A2:10AB
cs=0x1a2;eip=0x0010ad; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0));	// 3188                  cmp     [bp+var_A], 0 ;~ 01A2:10AD
cs=0x1a2;eip=0x0010b1; 	J(JNZ(loc_110bf));	// 3189                  jnz     short loc_110BF ;~ 01A2:10B1
cs=0x1a2;eip=0x0010b3; 	X(MOV(*(raddr(ss,di)), 0));	// 3190                  mov     byte ptr ss:[di], 0 ;~ 01A2:10B3
cs=0x1a2;eip=0x0010b7; 	T(ax = di;);	// 3191                  mov     ax, di ;~ 01A2:10B7
cs=0x1a2;eip=0x0010b9; 	J(JMP(loc_110cf));	// 3192                  jmp     short loc_110CF ;~ 01A2:10B9
loc_110bb:
	// 4556 
cs=0x1a2;eip=0x0010bb; 	X(OR(*(dw*)(raddr(ss,bp+var_2)), 4));	// 3197                  or      [bp+var_2], 4 ;~ 01A2:10BB
loc_110bf:
	// 4557 
cs=0x1a2;eip=0x0010bf; 	X(PUSH(dx));	// 3200                  push    dx ;~ 01A2:10BF
cs=0x1a2;eip=0x0010c0; 	X(PUSH(ax));	// 3201                  push    ax ;~ 01A2:10C0
cs=0x1a2;eip=0x0010c1; 	X(PUSH(ss));	// 3202                  push    ss ;~ 01A2:10C1
cs=0x1a2;eip=0x0010c2; 	X(PUSH(di));	// 3203                  push    di ;~ 01A2:10C2
cs=0x1a2;eip=0x0010c3; 	T(al = bh;);	// 3204                  mov     al, bh ;~ 01A2:10C3
cs=0x1a2;eip=0x0010c5; 	T(CBW);	// 3205                  cbw ;~ 01A2:10C5
cs=0x1a2;eip=0x0010c6; 	X(PUSH(ax));	// 3206                  push    ax ;~ 01A2:10C6
cs=0x1a2;eip=0x0010c7; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 3207                  mov     al, [bp+var_6] ;~ 01A2:10C7
cs=0x1a2;eip=0x0010ca; 	X(PUSH(ax));	// 3208                  push    ax ;~ 01A2:10CA
cs=0x1a2;eip=0x0010cb; 	X(PUSH(bx));	// 3209                  push    bx ;~ 01A2:10CB
cs=0x1a2;eip=0x0010cc; 	J(CALL(____longtoa,0));	// 3210                  call    ____LONGTOA ;~ 01A2:10CC
loc_110cf:
	// 4558 
cs=0x1a2;eip=0x0010cf; 	X(PUSH(ss));	// 3213                  push    ss ;~ 01A2:10CF
cs=0x1a2;eip=0x0010d0; 	X(POP(es));	// 3214                  pop     es ;~ 01A2:10D0
cs=0x1a2;eip=0x0010d1; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_a))));	// 3216                  mov     dx, [bp+var_A] ;~ 01A2:10D1
cs=0x1a2;eip=0x0010d4; 	T(OR(dx, dx));	// 3217                  or      dx, dx ;~ 01A2:10D4
cs=0x1a2;eip=0x0010d6; 	J(JGE(loc_110db));	// 3218                  jge     short loc_110DB ;~ 01A2:10D6
cs=0x1a2;eip=0x0010d8; 	J(JMP(loc_111cf));	// 3219                  jmp     loc_111CF ;~ 01A2:10D8
loc_110db:
	// 4559 
cs=0x1a2;eip=0x0010db; 	J(JMP(loc_111dd));	// 3223                  jmp     loc_111DD ;~ 01A2:10DB
loc_110de:
	// 4560 
cs=0x1a2;eip=0x0010de; 	X(MOV(*(raddr(ss,bp+var_5)), dl));	// 3227                  mov     [bp+var_5], dl  ; jumptable 00010F7D case 14 ;~ 01A2:10DE
cs=0x1a2;eip=0x0010e1; 	X(MOV(*(dw*)(raddr(ss,bp+arg_2)), si));	// 3228                  mov     word ptr [bp+arg_2], si ;~ 01A2:10E1
cs=0x1a2;eip=0x0010e4; 	T(di = bp+var_46);	// 3229                  lea     di, [bp+var_46] ;~ 01A2:10E4
cs=0x1a2;eip=0x0010e7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 3230                  mov     bx, [bp+arg_0] ;~ 01A2:10E7
cs=0x1a2;eip=0x0010ea; 	X(PUSH(*(dw*)(raddr(ss,bx))));	// 3231                  push    word ptr ss:[bx] ;~ 01A2:10EA
cs=0x1a2;eip=0x0010ed; 	T(INC(bx));	// 3232                  inc     bx ;~ 01A2:10ED
cs=0x1a2;eip=0x0010ee; 	T(INC(bx));	// 3233                  inc     bx ;~ 01A2:10EE
cs=0x1a2;eip=0x0010ef; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), bx));	// 3234                  mov     [bp+arg_0], bx ;~ 01A2:10EF
cs=0x1a2;eip=0x0010f2; 	T(TEST(*(dw*)(raddr(ss,bp+var_2)), 0x20));	// 3235                  test    [bp+var_2], 20h ;~ 01A2:10F2
cs=0x1a2;eip=0x0010f7; 	J(JZ(loc_11109));	// 3236                  jz      short loc_11109 ;~ 01A2:10F7
cs=0x1a2;eip=0x0010f9; 	T(MOV(dx, *(dw*)(raddr(ss,bx))));	// 3237                  mov     dx, ss:[bx] ;~ 01A2:10F9
cs=0x1a2;eip=0x0010fc; 	T(INC(bx));	// 3238                  inc     bx ;~ 01A2:10FC
cs=0x1a2;eip=0x0010fd; 	T(INC(bx));	// 3239                  inc     bx ;~ 01A2:10FD
cs=0x1a2;eip=0x0010fe; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), bx));	// 3240                  mov     [bp+arg_0], bx ;~ 01A2:10FE
cs=0x1a2;eip=0x001101; 	X(PUSH(ss));	// 3241                  push    ss ;~ 01A2:1101
cs=0x1a2;eip=0x001102; 	X(POP(es));	// 3242                  pop     es ;~ 01A2:1102
cs=0x1a2;eip=0x001103; 	J(CALL(sub_10e94,0));	// 3243                  call    sub_10E94 ;~ 01A2:1103
cs=0x1a2;eip=0x001106; 	T(al = 0x3A;);	// 3244                  mov     al, 3Ah ; ':' ;~ 01A2:1106
cs=0x1a2;eip=0x001108; 	X(STOSB);	// 3245                  stosb ;~ 01A2:1108
loc_11109:
	// 4561 
cs=0x1a2;eip=0x001109; 	X(PUSH(ss));	// 3248                  push    ss ;~ 01A2:1109
cs=0x1a2;eip=0x00110a; 	X(POP(es));	// 3249                  pop     es ;~ 01A2:110A
cs=0x1a2;eip=0x00110b; 	X(POP(dx));	// 3250                  pop     dx ;~ 01A2:110B
cs=0x1a2;eip=0x00110c; 	J(CALL(sub_10e94,0));	// 3251                  call    sub_10E94 ;~ 01A2:110C
cs=0x1a2;eip=0x00110f; 	X(MOV(*(raddr(ss,di)), 0));	// 3252                  mov     byte ptr ss:[di], 0 ;~ 01A2:110F
cs=0x1a2;eip=0x001113; 	X(MOV(*(raddr(ss,bp+var_6)), 0));	// 3253                  mov     [bp+var_6], 0 ;~ 01A2:1113
cs=0x1a2;eip=0x001117; 	X(AND(*(dw*)(raddr(ss,bp+var_2)), 0x0FFFB));	// 3254                  and     [bp+var_2], 0FFFBh ;~ 01A2:1117
cs=0x1a2;eip=0x00111b; 	T(cx = bp+var_46);	// 3255                  lea     cx, [bp+var_46] ;~ 01A2:111B
cs=0x1a2;eip=0x00111e; 	T(SUB(di, cx));	// 3256                  sub     di, cx ;~ 01A2:111E
cs=0x1a2;eip=0x001120; 	T(XCHG(cx, di));	// 3257                  xchg    cx, di ;~ 01A2:1120
cs=0x1a2;eip=0x001122; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_a))));	// 3258                  mov     dx, [bp+var_A] ;~ 01A2:1122
cs=0x1a2;eip=0x001125; 	T(CMP(dx, cx));	// 3259                  cmp     dx, cx ;~ 01A2:1125
cs=0x1a2;eip=0x001127; 	J(JG(loc_1112b));	// 3260                  jg      short loc_1112B ;~ 01A2:1127
cs=0x1a2;eip=0x001129; 	T(dx = cx;);	// 3261                  mov     dx, cx ;~ 01A2:1129
loc_1112b:
	// 4562 
cs=0x1a2;eip=0x00112b; 	J(JMP(loc_111cf));	// 3264                  jmp     loc_111CF ;~ 01A2:112B
loc_1112e:
	// 4563 
cs=0x1a2;eip=0x00112e; 	X(MOV(*(dw*)(raddr(ss,bp+arg_2)), si));	// 3268                  mov     word ptr [bp+arg_2], si ; jumptable 00010F7D case 16 ;~ 01A2:112E
cs=0x1a2;eip=0x001131; 	X(MOV(*(raddr(ss,bp+var_5)), dl));	// 3269                  mov     [bp+var_5], dl ;~ 01A2:1131
cs=0x1a2;eip=0x001134; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 3270                  mov     di, [bp+arg_0] ;~ 01A2:1134
cs=0x1a2;eip=0x001137; 	T(MOV(ax, *(dw*)(raddr(ss,di))));	// 3271                  mov     ax, ss:[di] ;~ 01A2:1137
cs=0x1a2;eip=0x00113a; 	X(ADD(*(dw*)(raddr(ss,bp+arg_0)), 2));	// 3272                  add     [bp+arg_0], 2 ;~ 01A2:113A
cs=0x1a2;eip=0x00113e; 	X(PUSH(ss));	// 3273                  push    ss ;~ 01A2:113E
cs=0x1a2;eip=0x00113f; 	X(POP(es));	// 3274                  pop     es ;~ 01A2:113F
cs=0x1a2;eip=0x001140; 	T(di = bp+var_45);	// 3275                  lea     di, [bp+var_45] ;~ 01A2:1140
cs=0x1a2;eip=0x001143; 	T(XOR(ah, ah));	// 3276                  xor     ah, ah ;~ 01A2:1143
cs=0x1a2;eip=0x001145; 	X(MOV(*(dw*)(raddr(ss,di)), ax));	// 3277                  mov     ss:[di], ax ;~ 01A2:1145
cs=0x1a2;eip=0x001148; 	T(cx = 1;);	// 3278                  mov     cx, 1 ;~ 01A2:1148
cs=0x1a2;eip=0x00114b; 	J(JMP(loc_11212));	// 3279                  jmp     loc_11212 ;~ 01A2:114B
loc_1114e:
	// 4564 
cs=0x1a2;eip=0x00114e; 	X(MOV(*(dw*)(raddr(ss,bp+arg_2)), si));	// 3283                  mov     word ptr [bp+arg_2], si ; jumptable 00010F7D case 17 ;~ 01A2:114E
cs=0x1a2;eip=0x001151; 	X(MOV(*(raddr(ss,bp+var_5)), dl));	// 3284                  mov     [bp+var_5], dl ;~ 01A2:1151
cs=0x1a2;eip=0x001154; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 3285                  mov     di, [bp+arg_0] ;~ 01A2:1154
cs=0x1a2;eip=0x001157; 	T(TEST(*(dw*)(raddr(ss,bp+var_2)), 0x20));	// 3286                  test    [bp+var_2], 20h ;~ 01A2:1157
cs=0x1a2;eip=0x00115c; 	J(JNZ(loc_1116b));	// 3287                  jnz     short loc_1116B ;~ 01A2:115C
cs=0x1a2;eip=0x00115e; 	T(MOV(di, *(dw*)(raddr(ss,di))));	// 3288                  mov     di, ss:[di] ;~ 01A2:115E
cs=0x1a2;eip=0x001161; 	X(ADD(*(dw*)(raddr(ss,bp+arg_0)), 2));	// 3289                  add     [bp+arg_0], 2 ;~ 01A2:1161
cs=0x1a2;eip=0x001165; 	X(PUSH(ds));	// 3290                  push    ds ;~ 01A2:1165
cs=0x1a2;eip=0x001166; 	X(POP(es));	// 3291                  pop     es ;~ 01A2:1166
cs=0x1a2;eip=0x001167; 	T(OR(di, di));	// 3293                  or      di, di ;~ 01A2:1167
cs=0x1a2;eip=0x001169; 	J(JMP(loc_11176));	// 3294                  jmp     short loc_11176 ;~ 01A2:1169
loc_1116b:
	// 4565 
cs=0x1a2;eip=0x00116b; 	T(LES(di, *(dw*)(raddr(ss,di))));	// 3298                  les     di, ss:[di] ;~ 01A2:116B
cs=0x1a2;eip=0x00116e; 	X(ADD(*(dw*)(raddr(ss,bp+arg_0)), 4));	// 3300                  add     [bp+arg_0], 4 ;~ 01A2:116E
cs=0x1a2;eip=0x001172; 	T(ax = es;);	// 3301                  mov     ax, es ;~ 01A2:1172
cs=0x1a2;eip=0x001174; 	T(OR(ax, di));	// 3302                  or      ax, di ;~ 01A2:1174
loc_11176:
	// 4566 
cs=0x1a2;eip=0x001176; 	J(JNZ(loc_1117d));	// 3305                  jnz     short loc_1117D ;~ 01A2:1176
cs=0x1a2;eip=0x001178; 	X(PUSH(ds));	// 3306                  push    ds ;~ 01A2:1178
cs=0x1a2;eip=0x001179; 	X(POP(es));	// 3307                  pop     es ;~ 01A2:1179
cs=0x1a2;eip=0x00117a; 	T(di = 0x906;);	// 3309                  mov     di, 906h ;~ 01A2:117A
loc_1117d:
	// 4567 
cs=0x1a2;eip=0x00117d; 	J(CALL(sub_10ec6,0));	// 3312                  call    sub_10EC6 ;~ 01A2:117D
cs=0x1a2;eip=0x001180; 	T(CMP(cx, *(dw*)(raddr(ss,bp+var_a))));	// 3313                  cmp     cx, [bp+var_A] ;~ 01A2:1180
cs=0x1a2;eip=0x001183; 	J(JBE(loc_11188));	// 3314                  jbe     short loc_11188 ;~ 01A2:1183
cs=0x1a2;eip=0x001185; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_a))));	// 3315                  mov     cx, [bp+var_A] ;~ 01A2:1185
loc_11188:
	// 4568 
cs=0x1a2;eip=0x001188; 	J(JMP(loc_11212));	// 3318                  jmp     loc_11212 ;~ 01A2:1188
loc_1118b:
	// 4569 
cs=0x1a2;eip=0x00118b; 	X(MOV(*(dw*)(raddr(ss,bp+arg_2)), si));	// 3322                  mov     word ptr [bp+arg_2], si ; jumptable 00010F7D case 15 ;~ 01A2:118B
cs=0x1a2;eip=0x00118e; 	X(MOV(*(raddr(ss,bp+var_5)), dl));	// 3323                  mov     [bp+var_5], dl ;~ 01A2:118E
cs=0x1a2;eip=0x001191; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 3324                  mov     di, [bp+arg_0] ;~ 01A2:1191
cs=0x1a2;eip=0x001194; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_a))));	// 3325                  mov     cx, [bp+var_A] ;~ 01A2:1194
cs=0x1a2;eip=0x001197; 	T(OR(cx, cx));	// 3326                  or      cx, cx ;~ 01A2:1197
cs=0x1a2;eip=0x001199; 	J(JGE(loc_1119e));	// 3327                  jge     short loc_1119E ;~ 01A2:1199
cs=0x1a2;eip=0x00119b; 	T(cx = 6;);	// 3328                  mov     cx, 6 ;~ 01A2:119B
loc_1119e:
	// 4570 
cs=0x1a2;eip=0x00119e; 	X(PUSH(ss));	// 3331                  push    ss ;~ 01A2:119E
cs=0x1a2;eip=0x00119f; 	X(PUSH(di));	// 3332                  push    di ;~ 01A2:119F
cs=0x1a2;eip=0x0011a0; 	X(PUSH(cx));	// 3333                  push    cx ;~ 01A2:11A0
cs=0x1a2;eip=0x0011a1; 	X(PUSH(ss));	// 3334                  push    ss ;~ 01A2:11A1
cs=0x1a2;eip=0x0011a2; 	T(bx = bp+var_45);	// 3335                  lea     bx, [bp+var_45] ;~ 01A2:11A2
cs=0x1a2;eip=0x0011a5; 	X(PUSH(bx));	// 3336                  push    bx ;~ 01A2:11A5
cs=0x1a2;eip=0x0011a6; 	X(PUSH(dx));	// 3337                  push    dx ;~ 01A2:11A6
cs=0x1a2;eip=0x0011a7; 	T(ax = 1;);	// 3338                  mov     ax, 1 ;~ 01A2:11A7
cs=0x1a2;eip=0x0011aa; 	T(AND(ax, *(dw*)(raddr(ss,bp+var_2))));	// 3339                  and     ax, [bp+var_2] ;~ 01A2:11AA
cs=0x1a2;eip=0x0011ad; 	X(PUSH(ax));	// 3340                  push    ax ;~ 01A2:11AD
cs=0x1a2;eip=0x0011ae; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 3341                  mov     ax, [bp+var_2] ;~ 01A2:11AE
cs=0x1a2;eip=0x0011b1; 	T(TEST(ax, 0x100));	// 3342                  test    ax, 100h ;~ 01A2:11B1
cs=0x1a2;eip=0x0011b4; 	J(JZ(loc_111bf));	// 3343                  jz      short loc_111BF ;~ 01A2:11B4
cs=0x1a2;eip=0x0011b6; 	T(ax = 8;);	// 3344                  mov     ax, 8 ;~ 01A2:11B6
cs=0x1a2;eip=0x0011b9; 	X(ADD(*(dw*)(raddr(ss,bp+arg_0)), 0x0A));	// 3345                  add     [bp+arg_0], 0Ah ;~ 01A2:11B9
cs=0x1a2;eip=0x0011bd; 	J(JMP(loc_111c6));	// 3346                  jmp     short loc_111C6 ;~ 01A2:11BD
loc_111bf:
	// 4571 
cs=0x1a2;eip=0x0011bf; 	X(ADD(*(dw*)(raddr(ss,bp+arg_0)), 8));	// 3350                  add     [bp+arg_0], 8 ;~ 01A2:11BF
cs=0x1a2;eip=0x0011c3; 	T(ax = 6;);	// 3351                  mov     ax, 6 ;~ 01A2:11C3
loc_111c6:
	// 4572 
cs=0x1a2;eip=0x0011c6; 	X(PUSH(ax));	// 3354                  push    ax ;~ 01A2:11C6
cs=0x1a2;eip=0x0011c7; 	J(CALL(__j_unknown_libname_1,0));	// 3355                  call    __j_unknown_libname_1 ;~ 01A2:11C7
cs=0x1a2;eip=0x0011ca; 	X(PUSH(ss));	// 3356                  push    ss ;~ 01A2:11CA
cs=0x1a2;eip=0x0011cb; 	X(POP(es));	// 3357                  pop     es ;~ 01A2:11CB
cs=0x1a2;eip=0x0011cc; 	T(di = bp+var_45);	// 3359                  lea     di, [bp+var_45] ;~ 01A2:11CC
loc_111cf:
	// 4573 
cs=0x1a2;eip=0x0011cf; 	T(TEST(*(dw*)(raddr(ss,bp+var_2)), 8));	// 3363                  test    [bp+var_2], 8 ;~ 01A2:11CF
cs=0x1a2;eip=0x0011d4; 	J(JZ(loc_111ee));	// 3364                  jz      short loc_111EE ;~ 01A2:11D4
cs=0x1a2;eip=0x0011d6; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_8))));	// 3365                  mov     dx, [bp+var_8] ;~ 01A2:11D6
cs=0x1a2;eip=0x0011d9; 	T(OR(dx, dx));	// 3366                  or      dx, dx ;~ 01A2:11D9
cs=0x1a2;eip=0x0011db; 	J(JLE(loc_111ee));	// 3367                  jle     short loc_111EE ;~ 01A2:11DB
loc_111dd:
	// 4574 
cs=0x1a2;eip=0x0011dd; 	J(CALL(sub_10ec6,0));	// 3370                  call    sub_10EC6 ;~ 01A2:11DD
cs=0x1a2;eip=0x0011e0; 	T(CMP(*(raddr(es,di)), 0x2D));	// 3371                  cmp     byte ptr es:[di], 2Dh ; '-' ;~ 01A2:11E0
cs=0x1a2;eip=0x0011e4; 	J(JNZ(loc_111e7));	// 3372                  jnz     short loc_111E7 ;~ 01A2:11E4
cs=0x1a2;eip=0x0011e6; 	T(DEC(cx));	// 3373                  dec     cx ;~ 01A2:11E6
loc_111e7:
	// 4575 
cs=0x1a2;eip=0x0011e7; 	T(SUB(dx, cx));	// 3376                  sub     dx, cx ;~ 01A2:11E7
cs=0x1a2;eip=0x0011e9; 	J(JLE(loc_111ee));	// 3377                  jle     short loc_111EE ;~ 01A2:11E9
cs=0x1a2;eip=0x0011eb; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), dx));	// 3378                  mov     [bp+var_E], dx ;~ 01A2:11EB
loc_111ee:
	// 4576 
cs=0x1a2;eip=0x0011ee; 	T(CMP(*(raddr(es,di)), 0x2D));	// 3382                  cmp     byte ptr es:[di], 2Dh ; '-' ;~ 01A2:11EE
cs=0x1a2;eip=0x0011f2; 	J(JZ(loc_111ff));	// 3383                  jz      short loc_111FF ;~ 01A2:11F2
cs=0x1a2;eip=0x0011f4; 	T(MOV(al, *(raddr(ss,bp+var_b))));	// 3384                  mov     al, [bp+var_B] ;~ 01A2:11F4
cs=0x1a2;eip=0x0011f7; 	T(OR(al, al));	// 3385                  or      al, al ;~ 01A2:11F7
cs=0x1a2;eip=0x0011f9; 	J(JZ(loc_1120f));	// 3386                  jz      short loc_1120F ;~ 01A2:11F9
cs=0x1a2;eip=0x0011fb; 	T(DEC(di));	// 3387                  dec     di ;~ 01A2:11FB
cs=0x1a2;eip=0x0011fc; 	X(MOV(*(raddr(es,di)), al));	// 3388                  mov     es:[di], al ;~ 01A2:11FC
loc_111ff:
	// 4577 
cs=0x1a2;eip=0x0011ff; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), 0));	// 3391                  cmp     [bp+var_E], 0 ;~ 01A2:11FF
cs=0x1a2;eip=0x001203; 	J(JLE(loc_1120f));	// 3392                  jle     short loc_1120F ;~ 01A2:1203
cs=0x1a2;eip=0x001205; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_a))));	// 3393                  mov     cx, [bp+var_A] ;~ 01A2:1205
cs=0x1a2;eip=0x001208; 	T(OR(cx, cx));	// 3394                  or      cx, cx ;~ 01A2:1208
cs=0x1a2;eip=0x00120a; 	J(JGE(loc_1120f));	// 3395                  jge     short loc_1120F ;~ 01A2:120A
cs=0x1a2;eip=0x00120c; 	X(DEC(*(dw*)(raddr(ss,bp+var_e))));	// 3396                  dec     [bp+var_E] ;~ 01A2:120C
loc_1120f:
	// 4578 
cs=0x1a2;eip=0x00120f; 	J(CALL(sub_10ec6,0));	// 3400                  call    sub_10EC6 ;~ 01A2:120F
loc_11212:
	// 4579 
cs=0x1a2;eip=0x001212; 	T(si = di;);	// 3404                  mov     si, di ;~ 01A2:1212
cs=0x1a2;eip=0x001214; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_4))));	// 3405                  mov     di, [bp+var_4] ;~ 01A2:1214
cs=0x1a2;eip=0x001217; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 3406                  mov     bx, [bp+var_8] ;~ 01A2:1217
cs=0x1a2;eip=0x00121a; 	T(ax = 5;);	// 3407                  mov     ax, 5 ;~ 01A2:121A
cs=0x1a2;eip=0x00121d; 	T(AND(ax, *(dw*)(raddr(ss,bp+var_2))));	// 3408                  and     ax, [bp+var_2] ;~ 01A2:121D
cs=0x1a2;eip=0x001220; 	T(CMP(ax, 5));	// 3409                  cmp     ax, 5 ;~ 01A2:1220
cs=0x1a2;eip=0x001223; 	J(JNZ(loc_11238));	// 3410                  jnz     short loc_11238 ;~ 01A2:1223
cs=0x1a2;eip=0x001225; 	T(MOV(ah, *(raddr(ss,bp+var_5))));	// 3411                  mov     ah, [bp+var_5] ;~ 01A2:1225
cs=0x1a2;eip=0x001228; 	T(CMP(ah, 0x6F));	// 3412                  cmp     ah, 6Fh ; 'o' ;~ 01A2:1228
cs=0x1a2;eip=0x00122b; 	J(JNZ(loc_1123a));	// 3413                  jnz     short loc_1123A ;~ 01A2:122B
cs=0x1a2;eip=0x00122d; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), 0));	// 3414                  cmp     [bp+var_E], 0 ;~ 01A2:122D
cs=0x1a2;eip=0x001231; 	J(JG(loc_11238));	// 3415                  jg      short loc_11238 ;~ 01A2:1231
cs=0x1a2;eip=0x001233; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 1));	// 3416                  mov     [bp+var_E], 1 ;~ 01A2:1233
loc_11238:
	// 4580 
cs=0x1a2;eip=0x001238; 	J(JMP(loc_11255));	// 3420                  jmp     short loc_11255 ;~ 01A2:1238
loc_1123a:
	// 4581 
cs=0x1a2;eip=0x00123a; 	T(CMP(ah, 0x78));	// 3424                  cmp     ah, 78h ; 'x' ;~ 01A2:123A
cs=0x1a2;eip=0x00123d; 	J(JZ(loc_11244));	// 3425                  jz      short loc_11244 ;~ 01A2:123D
cs=0x1a2;eip=0x00123f; 	T(CMP(ah, 0x58));	// 3426                  cmp     ah, 58h ; 'X' ;~ 01A2:123F
cs=0x1a2;eip=0x001242; 	J(JNZ(loc_11255));	// 3427                  jnz     short loc_11255 ;~ 01A2:1242
loc_11244:
	// 4582 
cs=0x1a2;eip=0x001244; 	X(OR(*(dw*)(raddr(ss,bp+var_2)), 0x40));	// 3430                  or      [bp+var_2], 40h ;~ 01A2:1244
cs=0x1a2;eip=0x001248; 	T(DEC(bx));	// 3431                  dec     bx ;~ 01A2:1248
cs=0x1a2;eip=0x001249; 	T(DEC(bx));	// 3432                  dec     bx ;~ 01A2:1249
cs=0x1a2;eip=0x00124a; 	X(SUB(*(dw*)(raddr(ss,bp+var_e)), 2));	// 3433                  sub     [bp+var_E], 2 ;~ 01A2:124A
cs=0x1a2;eip=0x00124e; 	J(JGE(loc_11255));	// 3434                  jge     short loc_11255 ;~ 01A2:124E
cs=0x1a2;eip=0x001250; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0));	// 3435                  mov     [bp+var_E], 0 ;~ 01A2:1250
loc_11255:
	// 4583 
cs=0x1a2;eip=0x001255; 	T(ADD(cx, *(dw*)(raddr(ss,bp+var_e))));	// 3439                  add     cx, [bp+var_E] ;~ 01A2:1255
cs=0x1a2;eip=0x001258; 	T(TEST(*(dw*)(raddr(ss,bp+var_2)), 2));	// 3440                  test    [bp+var_2], 2 ;~ 01A2:1258
cs=0x1a2;eip=0x00125d; 	J(JNZ(loc_1126b));	// 3441                  jnz     short loc_1126B ;~ 01A2:125D
cs=0x1a2;eip=0x00125f; 	J(JMP(loc_11267));	// 3442                  jmp     short loc_11267 ;~ 01A2:125F
loc_11261:
	// 4584 
cs=0x1a2;eip=0x001261; 	T(al = 0x20;);	// 3446                  mov     al, 20h ; ' ' ;~ 01A2:1261
cs=0x1a2;eip=0x001263; 	J(CALL(sub_10ed3,0));	// 3447                  call    sub_10ED3 ;~ 01A2:1263
cs=0x1a2;eip=0x001266; 	T(DEC(bx));	// 3448                  dec     bx ;~ 01A2:1266
loc_11267:
	// 4585 
cs=0x1a2;eip=0x001267; 	T(CMP(bx, cx));	// 3451                  cmp     bx, cx ;~ 01A2:1267
cs=0x1a2;eip=0x001269; 	J(JG(loc_11261));	// 3452                  jg      short loc_11261 ;~ 01A2:1269
loc_1126b:
	// 4586 
cs=0x1a2;eip=0x00126b; 	T(TEST(*(dw*)(raddr(ss,bp+var_2)), 0x40));	// 3455                  test    [bp+var_2], 40h ;~ 01A2:126B
cs=0x1a2;eip=0x001270; 	J(JZ(loc_1127d));	// 3456                  jz      short loc_1127D ;~ 01A2:1270
cs=0x1a2;eip=0x001272; 	T(al = 0x30;);	// 3457                  mov     al, 30h ; '0' ;~ 01A2:1272
cs=0x1a2;eip=0x001274; 	J(CALL(sub_10ed3,0));	// 3458                  call    sub_10ED3 ;~ 01A2:1274
cs=0x1a2;eip=0x001277; 	T(MOV(al, *(raddr(ss,bp+var_5))));	// 3459                  mov     al, [bp+var_5] ;~ 01A2:1277
cs=0x1a2;eip=0x00127a; 	J(CALL(sub_10ed3,0));	// 3460                  call    sub_10ED3 ;~ 01A2:127A
loc_1127d:
	// 4587 
cs=0x1a2;eip=0x00127d; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_e))));	// 3463                  mov     dx, [bp+var_E] ;~ 01A2:127D
cs=0x1a2;eip=0x001280; 	T(OR(dx, dx));	// 3464                  or      dx, dx ;~ 01A2:1280
cs=0x1a2;eip=0x001282; 	J(JLE(loc_112ab));	// 3465                  jle     short loc_112AB ;~ 01A2:1282
cs=0x1a2;eip=0x001284; 	T(SUB(cx, dx));	// 3466                  sub     cx, dx ;~ 01A2:1284
cs=0x1a2;eip=0x001286; 	T(SUB(bx, dx));	// 3467                  sub     bx, dx ;~ 01A2:1286
cs=0x1a2;eip=0x001288; 	T(MOV(al, *(raddr(es,si))));	// 3468                  mov     al, es:[si] ;~ 01A2:1288
cs=0x1a2;eip=0x00128b; 	T(CMP(al, 0x2D));	// 3469                  cmp     al, 2Dh ; '-' ;~ 01A2:128B
cs=0x1a2;eip=0x00128d; 	J(JZ(loc_11297));	// 3470                  jz      short loc_11297 ;~ 01A2:128D
cs=0x1a2;eip=0x00128f; 	T(CMP(al, 0x20));	// 3471                  cmp     al, 20h ; ' ' ;~ 01A2:128F
cs=0x1a2;eip=0x001291; 	J(JZ(loc_11297));	// 3472                  jz      short loc_11297 ;~ 01A2:1291
cs=0x1a2;eip=0x001293; 	T(CMP(al, 0x2B));	// 3473                  cmp     al, 2Bh ; '+' ;~ 01A2:1293
cs=0x1a2;eip=0x001295; 	J(JNZ(loc_1129e));	// 3474                  jnz     short loc_1129E ;~ 01A2:1295
loc_11297:
	// 4588 
cs=0x1a2;eip=0x001297; 	X(LODS(*(raddr(es,si)),si,1));	// 3478                  lods    byte ptr es:[si] ;~ 01A2:1297
cs=0x1a2;eip=0x001299; 	J(CALL(sub_10ed3,0));	// 3479                  call    sub_10ED3 ;~ 01A2:1299
cs=0x1a2;eip=0x00129c; 	T(DEC(cx));	// 3480                  dec     cx ;~ 01A2:129C
cs=0x1a2;eip=0x00129d; 	T(DEC(bx));	// 3481                  dec     bx ;~ 01A2:129D
loc_1129e:
	// 4589 
cs=0x1a2;eip=0x00129e; 	T(XCHG(cx, dx));	// 3484                  xchg    cx, dx ;~ 01A2:129E
cs=0x1a2;eip=0x0012a0; 	J(JCXZ(loc_112a9));	// 3485                  jcxz    short loc_112A9 ;~ 01A2:12A0
loc_112a2:
	// 4590 
cs=0x1a2;eip=0x0012a2; 	T(al = 0x30;);	// 3488                  mov     al, 30h ; '0' ;~ 01A2:12A2
cs=0x1a2;eip=0x0012a4; 	J(CALL(sub_10ed3,0));	// 3489                  call    sub_10ED3 ;~ 01A2:12A4
cs=0x1a2;eip=0x0012a7; 	J(LOOP(loc_112a2));	// 3490                  loop    loc_112A2 ;~ 01A2:12A7
loc_112a9:
	// 4591 
cs=0x1a2;eip=0x0012a9; 	T(XCHG(cx, dx));	// 3493                  xchg    cx, dx ;~ 01A2:12A9
loc_112ab:
	// 4592 
cs=0x1a2;eip=0x0012ab; 	J(JCXZ(loc_112bf));	// 3496                  jcxz    short loc_112BF ;~ 01A2:12AB
cs=0x1a2;eip=0x0012ad; 	T(SUB(bx, cx));	// 3497                  sub     bx, cx ;~ 01A2:12AD
loc_112af:
	// 4593 
cs=0x1a2;eip=0x0012af; 	X(LODS(*(raddr(es,si)),si,1));	// 3500                  lods    byte ptr es:[si] ;~ 01A2:12AF
cs=0x1a2;eip=0x0012b1; 	X(MOV(*(raddr(ss,di)), al));	// 3501                  mov     ss:[di], al ;~ 01A2:12B1
cs=0x1a2;eip=0x0012b4; 	T(INC(di));	// 3502                  inc     di ;~ 01A2:12B4
cs=0x1a2;eip=0x0012b5; 	X(DEC(*(raddr(ss,bp+var_14))));	// 3503                  dec     byte ptr [bp+var_14] ;~ 01A2:12B5
cs=0x1a2;eip=0x0012b8; 	J(JG(loc_112bd));	// 3504                  jg      short loc_112BD ;~ 01A2:12B8
cs=0x1a2;eip=0x0012ba; 	J(CALL(sub_10edc,0));	// 3505                  call    sub_10EDC ;~ 01A2:12BA
loc_112bd:
	// 4594 
cs=0x1a2;eip=0x0012bd; 	J(LOOP(loc_112af));	// 3508                  loop    loc_112AF ;~ 01A2:12BD
loc_112bf:
	// 4595 
cs=0x1a2;eip=0x0012bf; 	T(OR(bx, bx));	// 3511                  or      bx, bx ;~ 01A2:12BF
cs=0x1a2;eip=0x0012c1; 	J(JLE(loc_112cc));	// 3512                  jle     short loc_112CC ;~ 01A2:12C1
cs=0x1a2;eip=0x0012c3; 	T(cx = bx;);	// 3513                  mov     cx, bx ;~ 01A2:12C3
loc_112c5:
	// 4596 
cs=0x1a2;eip=0x0012c5; 	T(al = 0x20;);	// 3516                  mov     al, 20h ; ' ' ;~ 01A2:12C5
cs=0x1a2;eip=0x0012c7; 	J(CALL(sub_10ed3,0));	// 3517                  call    sub_10ED3 ;~ 01A2:12C7
cs=0x1a2;eip=0x0012ca; 	J(LOOP(loc_112c5));	// 3518                  loop    loc_112C5 ;~ 01A2:12CA
loc_112cc:
	// 4597 
cs=0x1a2;eip=0x0012cc; 	J(JMP(loc_10f1c));	// 3521                  jmp     loc_10F1C ;~ 01A2:12CC
loc_112cf:
	// 4598 
cs=0x1a2;eip=0x0012cf; 	X(MOV(*(dw*)(raddr(ss,bp+arg_2)), si));	// 3525                  mov     word ptr [bp+arg_2], si ; jumptable 00010F7D case 18 ;~ 01A2:12CF
cs=0x1a2;eip=0x0012d2; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 3526                  mov     di, [bp+arg_0] ;~ 01A2:12D2
cs=0x1a2;eip=0x0012d5; 	T(TEST(*(dw*)(raddr(ss,bp+var_2)), 0x20));	// 3527                  test    [bp+var_2], 20h ;~ 01A2:12D5
cs=0x1a2;eip=0x0012da; 	J(JNZ(loc_112e7));	// 3528                  jnz     short loc_112E7 ;~ 01A2:12DA
cs=0x1a2;eip=0x0012dc; 	T(MOV(di, *(dw*)(raddr(ss,di))));	// 3529                  mov     di, ss:[di] ;~ 01A2:12DC
cs=0x1a2;eip=0x0012df; 	X(ADD(*(dw*)(raddr(ss,bp+arg_0)), 2));	// 3530                  add     [bp+arg_0], 2 ;~ 01A2:12DF
cs=0x1a2;eip=0x0012e3; 	X(PUSH(ds));	// 3531                  push    ds ;~ 01A2:12E3
cs=0x1a2;eip=0x0012e4; 	X(POP(es));	// 3532                  pop     es ;~ 01A2:12E4
cs=0x1a2;eip=0x0012e5; 	J(JMP(loc_112ee));	// 3534                  jmp     short loc_112EE ;~ 01A2:12E5
loc_112e7:
	// 4599 
cs=0x1a2;eip=0x0012e7; 	T(LES(di, *(dw*)(raddr(ss,di))));	// 3538                  les     di, ss:[di] ;~ 01A2:12E7
cs=0x1a2;eip=0x0012ea; 	X(ADD(*(dw*)(raddr(ss,bp+arg_0)), 4));	// 3540                  add     [bp+arg_0], 4 ;~ 01A2:12EA
loc_112ee:
	// 4600 
cs=0x1a2;eip=0x0012ee; 	T(ax = 0x50;);	// 3543                  mov     ax, 50h ; 'P' ;~ 01A2:12EE
cs=0x1a2;eip=0x0012f1; 	T(SUB(al, *(raddr(ss,bp+var_14))));	// 3544                  sub     al, byte ptr [bp+var_14] ;~ 01A2:12F1
cs=0x1a2;eip=0x0012f4; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_12))));	// 3545                  add     ax, [bp+var_12] ;~ 01A2:12F4
cs=0x1a2;eip=0x0012f7; 	X(MOV(*(dw*)(raddr(es,di)), ax));	// 3546                  mov     es:[di], ax ;~ 01A2:12F7
cs=0x1a2;eip=0x0012fa; 	T(TEST(*(dw*)(raddr(ss,bp+var_2)), 0x10));	// 3547                  test    [bp+var_2], 10h ;~ 01A2:12FA
cs=0x1a2;eip=0x0012ff; 	J(JZ(loc_11308));	// 3548                  jz      short loc_11308 ;~ 01A2:12FF
cs=0x1a2;eip=0x001301; 	T(INC(di));	// 3549                  inc     di ;~ 01A2:1301
cs=0x1a2;eip=0x001302; 	T(INC(di));	// 3550                  inc     di ;~ 01A2:1302
cs=0x1a2;eip=0x001303; 	X(MOV(*(dw*)(raddr(es,di)), 0));	// 3551                  mov     word ptr es:[di], 0 ;~ 01A2:1303
loc_11308:
	// 4601 
cs=0x1a2;eip=0x001308; 	J(JMP(loc_10f19));	// 3554                  jmp     loc_10F19 ;~ 01A2:1308
__def_10f7d:
	// 4602 
cs=0x1a2;eip=0x00130b; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_10))));	// 3559                  mov     si, [bp+var_10] ; jumptable 00010F7D default case, cases 19-21 ;~ 01A2:130B
cs=0x1a2;eip=0x00130e; 	T(MOV(es, *(dw*)(raddr(ss,bp+arg_2+2))));	// 3560                  mov     es, word ptr [bp+arg_2+2] ;~ 01A2:130E
cs=0x1a2;eip=0x001311; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_4))));	// 3561                  mov     di, [bp+var_4] ;~ 01A2:1311
cs=0x1a2;eip=0x001314; 	T(al = 0x25;);	// 3562                  mov     al, 25h ; '%' ;~ 01A2:1314
loc_11316:
	// 4603 
cs=0x1a2;eip=0x001316; 	J(CALL(sub_10ed3,0));	// 3565                  call    sub_10ED3 ;~ 01A2:1316
cs=0x1a2;eip=0x001319; 	X(LODS(*(raddr(es,si)),si,1));	// 3566                  lods    byte ptr es:[si] ;~ 01A2:1319
cs=0x1a2;eip=0x00131b; 	T(OR(al, al));	// 3567                  or      al, al ;~ 01A2:131B
cs=0x1a2;eip=0x00131d; 	J(JNZ(loc_11316));	// 3568                  jnz     short loc_11316 ;~ 01A2:131D
loc_1131f:
	// 4604 
cs=0x1a2;eip=0x00131f; 	T(CMP(*(raddr(ss,bp+var_14)), 0x50));	// 3571                  cmp     byte ptr [bp+var_14], 50h ; 'P' ;~ 01A2:131F
cs=0x1a2;eip=0x001323; 	J(JGE(loc_11328));	// 3572                  jge     short loc_11328 ;~ 01A2:1323
cs=0x1a2;eip=0x001325; 	J(CALL(sub_10edc,0));	// 3573                  call    sub_10EDC ;~ 01A2:1325
loc_11328:
	// 4605 
cs=0x1a2;eip=0x001328; 	X(POP(es));	// 3576                  pop     es ;~ 01A2:1328
cs=0x1a2;eip=0x001329; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0));	// 3577                  cmp     [bp+var_16], 0 ;~ 01A2:1329
cs=0x1a2;eip=0x00132d; 	J(JZ(loc_11334));	// 3578                  jz      short loc_11334 ;~ 01A2:132D
cs=0x1a2;eip=0x00132f; 	T(ax = 0x0FFFF;);	// 3579                  mov     ax, 0FFFFh ;~ 01A2:132F
cs=0x1a2;eip=0x001332; 	J(JMP(loc_11337));	// 3580                  jmp     short loc_11337 ;~ 01A2:1332
loc_11334:
	// 4606 
cs=0x1a2;eip=0x001334; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 3584                  mov     ax, [bp+var_12] ;~ 01A2:1334
loc_11337:
	// 4607 
cs=0x1a2;eip=0x001337; 	X(POP(di));	// 3587                  pop     di ;~ 01A2:1337
cs=0x1a2;eip=0x001338; 	X(POP(si));	// 3588                  pop     si ;~ 01A2:1338
cs=0x1a2;eip=0x001339; 	T(sp = bp;);	// 3589                  mov     sp, bp ;~ 01A2:1339
cs=0x1a2;eip=0x00133b; 	X(POP(bp));	// 3590                  pop     bp ;~ 01A2:133B
cs=0x1a2;eip=0x00133c; 	J(RETN(0x0C));	// 3591                  retn    0Ch ;~ 01A2:133C

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k__def_10f7d: 	goto __def_10f7d;
        case m2c::kloc_10f10: 	goto loc_10f10;
        case m2c::kloc_10f19: 	goto loc_10f19;
        case m2c::kloc_10f1c: 	goto loc_10f1c;
        case m2c::kloc_10f1f: 	goto loc_10f1f;
        case m2c::kloc_10f29: 	goto loc_10f29;
        case m2c::kloc_10f37: 	goto loc_10f37;
        case m2c::kloc_10f3a: 	goto loc_10f3a;
        case m2c::kloc_10f5f: 	goto loc_10f5f;
        case m2c::kloc_10f61: 	goto loc_10f61;
        case m2c::kloc_10f7b: 	goto loc_10f7b;
        case m2c::kloc_10f82: 	goto loc_10f82;
        case m2c::kloc_10f85: 	goto loc_10f85;
        case m2c::kloc_10f90: 	goto loc_10f90;
        case m2c::kloc_10f9b: 	goto loc_10f9b;
        case m2c::kloc_10fa9: 	goto loc_10fa9;
        case m2c::kloc_10fab: 	goto loc_10fab;
        case m2c::kloc_10fb1: 	goto loc_10fb1;
        case m2c::kloc_10fb5: 	goto loc_10fb5;
        case m2c::kloc_10fb9: 	goto loc_10fb9;
        case m2c::kloc_10fcd: 	goto loc_10fcd;
        case m2c::kloc_10fd0: 	goto loc_10fd0;
        case m2c::kloc_10fe9: 	goto loc_10fe9;
        case m2c::kloc_10fee: 	goto loc_10fee;
        case m2c::kloc_10ff1: 	goto loc_10ff1;
        case m2c::kloc_10ffe: 	goto loc_10ffe;
        case m2c::kloc_1100b: 	goto loc_1100b;
        case m2c::kloc_1102d: 	goto loc_1102d;
        case m2c::kloc_11049: 	goto loc_11049;
        case m2c::kloc_11050: 	goto loc_11050;
        case m2c::kloc_11055: 	goto loc_11055;
        case m2c::kloc_1105c: 	goto loc_1105c;
        case m2c::kloc_11060: 	goto loc_11060;
        case m2c::kloc_11064: 	goto loc_11064;
        case m2c::kloc_1106a: 	goto loc_1106a;
        case m2c::kloc_1106e: 	goto loc_1106e;
        case m2c::kloc_1107e: 	goto loc_1107e;
        case m2c::kloc_1108e: 	goto loc_1108e;
        case m2c::kloc_1109f: 	goto loc_1109f;
        case m2c::kloc_110bb: 	goto loc_110bb;
        case m2c::kloc_110bf: 	goto loc_110bf;
        case m2c::kloc_110cf: 	goto loc_110cf;
        case m2c::kloc_110db: 	goto loc_110db;
        case m2c::kloc_110de: 	goto loc_110de;
        case m2c::kloc_11109: 	goto loc_11109;
        case m2c::kloc_1112b: 	goto loc_1112b;
        case m2c::kloc_1112e: 	goto loc_1112e;
        case m2c::kloc_1114e: 	goto loc_1114e;
        case m2c::kloc_1116b: 	goto loc_1116b;
        case m2c::kloc_11176: 	goto loc_11176;
        case m2c::kloc_1117d: 	goto loc_1117d;
        case m2c::kloc_11188: 	goto loc_11188;
        case m2c::kloc_1118b: 	goto loc_1118b;
        case m2c::kloc_1119e: 	goto loc_1119e;
        case m2c::kloc_111bf: 	goto loc_111bf;
        case m2c::kloc_111c6: 	goto loc_111c6;
        case m2c::kloc_111cf: 	goto loc_111cf;
        case m2c::kloc_111dd: 	goto loc_111dd;
        case m2c::kloc_111e7: 	goto loc_111e7;
        case m2c::kloc_111ee: 	goto loc_111ee;
        case m2c::kloc_111ff: 	goto loc_111ff;
        case m2c::kloc_1120f: 	goto loc_1120f;
        case m2c::kloc_11212: 	goto loc_11212;
        case m2c::kloc_11238: 	goto loc_11238;
        case m2c::kloc_1123a: 	goto loc_1123a;
        case m2c::kloc_11244: 	goto loc_11244;
        case m2c::kloc_11255: 	goto loc_11255;
        case m2c::kloc_11261: 	goto loc_11261;
        case m2c::kloc_11267: 	goto loc_11267;
        case m2c::kloc_1126b: 	goto loc_1126b;
        case m2c::kloc_1127d: 	goto loc_1127d;
        case m2c::kloc_11297: 	goto loc_11297;
        case m2c::kloc_1129e: 	goto loc_1129e;
        case m2c::kloc_112a2: 	goto loc_112a2;
        case m2c::kloc_112a9: 	goto loc_112a9;
        case m2c::kloc_112ab: 	goto loc_112ab;
        case m2c::kloc_112af: 	goto loc_112af;
        case m2c::kloc_112bd: 	goto loc_112bd;
        case m2c::kloc_112bf: 	goto loc_112bf;
        case m2c::kloc_112c5: 	goto loc_112c5;
        case m2c::kloc_112cc: 	goto loc_112cc;
        case m2c::kloc_112cf: 	goto loc_112cf;
        case m2c::kloc_112e7: 	goto loc_112e7;
        case m2c::kloc_112ee: 	goto loc_112ee;
        case m2c::kloc_11308: 	goto loc_11308;
        case m2c::kloc_11316: 	goto loc_11316;
        case m2c::kloc_1131f: 	goto loc_1131f;
        case m2c::kloc_11328: 	goto loc_11328;
        case m2c::kloc_11334: 	goto loc_11334;
        case m2c::kloc_11337: 	goto loc_11337;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____vptr(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____vptr:
    _begin:
#undef arg_0
#define arg_0 4
	// 3651 arg_0           = word ptr  4 ;~ 01A2:136F
#undef arg_2
#define arg_2 6
	// 3652 arg_2           = word ptr  6 ;~ 01A2:136F
cs=0x1a2;eip=0x00136f; 	X(PUSH(bp));	// 3654                  push    bp ;~ 01A2:136F
cs=0x1a2;eip=0x001370; 	T(bp = sp;);	// 3655                  mov     bp, sp ;~ 01A2:1370
cs=0x1a2;eip=0x001372; 	T(al = byte_19258;);	// 3656                  mov     al, byte_19258 ;~ 01A2:1372
cs=0x1a2;eip=0x001375; 	T(ah = 0;);	// 3657                  mov     ah, 0 ;~ 01A2:1375
cs=0x1a2;eip=0x001377; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_0))));	// 3658                  mov     dx, [bp+arg_0] ;~ 01A2:1377
cs=0x1a2;eip=0x00137a; 	T(DEC(dx));	// 3659                  dec     dx ;~ 01A2:137A
cs=0x1a2;eip=0x00137b; 	T(IMUL1_2(dx));	// 3660                  imul    dx ;~ 01A2:137B
cs=0x1a2;eip=0x00137d; 	X(PUSH(ax));	// 3661                  push    ax ;~ 01A2:137D
cs=0x1a2;eip=0x00137e; 	T(ax = word_1925b;);	// 3662                  mov     ax, word_1925B ;~ 01A2:137E
cs=0x1a2;eip=0x001381; 	X(POP(dx));	// 3663                  pop     dx ;~ 01A2:1381
cs=0x1a2;eip=0x001382; 	T(ADD(ax, dx));	// 3664                  add     ax, dx ;~ 01A2:1382
cs=0x1a2;eip=0x001384; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 3665                  mov     dx, [bp+arg_2] ;~ 01A2:1384
cs=0x1a2;eip=0x001387; 	T(DEC(dx));	// 3666                  dec     dx ;~ 01A2:1387
cs=0x1a2;eip=0x001388; 	T(ADD(ax, dx));	// 3667                  add     ax, dx ;~ 01A2:1388
cs=0x1a2;eip=0x00138a; 	T(SHL(ax, 1));	// 3668                  shl     ax, 1 ;~ 01A2:138A
cs=0x1a2;eip=0x00138c; 	T(dx = word_1925d;);	// 3669                  mov     dx, word_1925D ;~ 01A2:138C
cs=0x1a2;eip=0x001390; 	X(POP(bp));	// 3670                  pop     bp ;~ 01A2:1390
cs=0x1a2;eip=0x001391; 	J(RETN(4));	// 3671                  retn    4 ;~ 01A2:1391

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____vptr: 	goto ____vptr;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____vram(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____vram:
    _begin:
#undef var_2
#define var_2 -2
	// 3682 var_2           = word ptr -2 ;~ 01A2:1394
#undef arg_0
#define arg_0 4
	// 3683 arg_0           = word ptr  4 ;~ 01A2:1394
#undef arg_2
#define arg_2 6
	// 3684 arg_2           = dword ptr  6 ;~ 01A2:1394
#undef arg_6
#define arg_6 0x0A
	// 3685 arg_6           = dword ptr  0Ah ;~ 01A2:1394
cs=0x1a2;eip=0x001394; 	X(PUSH(bp));	// 3687                  push    bp ;~ 01A2:1394
cs=0x1a2;eip=0x001395; 	T(bp = sp;);	// 3688                  mov     bp, sp ;~ 01A2:1395
cs=0x1a2;eip=0x001397; 	T(SUB(sp, 2));	// 3689                  sub     sp, 2 ;~ 01A2:1397
cs=0x1a2;eip=0x00139a; 	X(PUSH(si));	// 3690                  push    si ;~ 01A2:139A
cs=0x1a2;eip=0x00139b; 	X(PUSH(di));	// 3691                  push    di ;~ 01A2:139B
cs=0x1a2;eip=0x00139c; 	T(al = byte_1925a;);	// 3692                  mov     al, byte_1925A ;~ 01A2:139C
cs=0x1a2;eip=0x00139f; 	T(ah = 0;);	// 3693                  mov     ah, 0 ;~ 01A2:139F
cs=0x1a2;eip=0x0013a1; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 3694                  mov     [bp+var_2], ax ;~ 01A2:13A1
cs=0x1a2;eip=0x0013a4; 	X(PUSH(ds));	// 3695                  push    ds ;~ 01A2:13A4
cs=0x1a2;eip=0x0013a5; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_0))));	// 3696                  mov     cx, [bp+arg_0] ;~ 01A2:13A5
cs=0x1a2;eip=0x0013a8; 	J(JCXZ(loc_11404));	// 3697                  jcxz    short loc_11404 ;~ 01A2:13A8
cs=0x1a2;eip=0x0013aa; 	T(LES(di, *(dd*)(raddr(ss,bp+arg_6))));	// 3698                  les     di, [bp+arg_6] ;~ 01A2:13AA
cs=0x1a2;eip=0x0013ad; 	T(LDS(si, *(dd*)(raddr(ss,bp+arg_2))));	// 3699                  lds     si, [bp+arg_2] ;~ 01A2:13AD
cs=0x1a2;eip=0x0013b0; 	T(CLD);	// 3700                  cld ;~ 01A2:13B0
cs=0x1a2;eip=0x0013b1; 	T(CMP(si, di));	// 3701                  cmp     si, di ;~ 01A2:13B1
cs=0x1a2;eip=0x0013b3; 	J(JNC(loc_113bf));	// 3702                  jnb     short loc_113BF ;~ 01A2:13B3
cs=0x1a2;eip=0x0013b5; 	T(ax = cx;);	// 3703                  mov     ax, cx ;~ 01A2:13B5
cs=0x1a2;eip=0x0013b7; 	T(DEC(ax));	// 3704                  dec     ax ;~ 01A2:13B7
cs=0x1a2;eip=0x0013b8; 	T(SHL(ax, 1));	// 3705                  shl     ax, 1 ;~ 01A2:13B8
cs=0x1a2;eip=0x0013ba; 	T(ADD(si, ax));	// 3706                  add     si, ax ;~ 01A2:13BA
cs=0x1a2;eip=0x0013bc; 	T(ADD(di, ax));	// 3707                  add     di, ax ;~ 01A2:13BC
cs=0x1a2;eip=0x0013be; 	T(STD);	// 3708                  std ;~ 01A2:13BE
loc_113bf:
	// 4608 
cs=0x1a2;eip=0x0013bf; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0));	// 3711                  cmp     [bp+var_2], 0 ;~ 01A2:13BF
cs=0x1a2;eip=0x0013c3; 	J(JNZ(loc_113c9));	// 3712                  jnz     short loc_113C9 ;~ 01A2:13C3
	// 3713                  rep movsw ;~ 01A2:13C5
cs=0x1a2;eip=0x0013c5; 	X(	REP MOVSW);	// 3713                  rep movsw ;~ 01A2:13C5
cs=0x1a2;eip=0x0013c7; 	J(JMP(loc_11404));	// 3714                  jmp     short loc_11404 ;~ 01A2:13C7
loc_113c9:
	// 4609 
cs=0x1a2;eip=0x0013c9; 	T(dx = 0x3DA;);	// 3718                  mov     dx, 3DAh ;~ 01A2:13C9
cs=0x1a2;eip=0x0013cc; 	T(ax = es;);	// 3719                  mov     ax, es ;~ 01A2:13CC
cs=0x1a2;eip=0x0013ce; 	T(bx = ds;);	// 3720                  mov     bx, ds ;~ 01A2:13CE
cs=0x1a2;eip=0x0013d0; 	T(CMP(ax, bx));	// 3721                  cmp     ax, bx ;~ 01A2:13D0
cs=0x1a2;eip=0x0013d2; 	J(JZ(loc_113e5));	// 3722                  jz      short loc_113E5 ;~ 01A2:13D2
loc_113d4:
	// 4610 
cs=0x1a2;eip=0x0013d4; 	T(CLI);	// 3725                  cli ;~ 01A2:13D4
loc_113d5:
	// 4611 
cs=0x1a2;eip=0x0013d5; 	S(IN(al, dx));	// 3728                  in      al, dx          ; Video status bits: ;~ 01A2:13D5
cs=0x1a2;eip=0x0013d6; 	T(ROR(al, 1));	// 3733                  ror     al, 1 ;~ 01A2:13D6
cs=0x1a2;eip=0x0013d8; 	J(JC(loc_113d5));	// 3734                  jb      short loc_113D5 ;~ 01A2:13D8
loc_113da:
	// 4612 
cs=0x1a2;eip=0x0013da; 	S(IN(al, dx));	// 3737                  in      al, dx          ; Video status bits: ;~ 01A2:13DA
cs=0x1a2;eip=0x0013db; 	T(ROR(al, 1));	// 3742                  ror     al, 1 ;~ 01A2:13DB
cs=0x1a2;eip=0x0013dd; 	J(JNC(loc_113da));	// 3743                  jnb     short loc_113DA ;~ 01A2:13DD
cs=0x1a2;eip=0x0013df; 	X(MOVSW);	// 3744                  movsw ;~ 01A2:13DF
cs=0x1a2;eip=0x0013e0; 	T(STI);	// 3745                  sti ;~ 01A2:13E0
cs=0x1a2;eip=0x0013e1; 	J(LOOP(loc_113d4));	// 3746                  loop    loc_113D4 ;~ 01A2:13E1
cs=0x1a2;eip=0x0013e3; 	J(JMP(loc_11404));	// 3747                  jmp     short loc_11404 ;~ 01A2:13E3
loc_113e5:
	// 4613 
cs=0x1a2;eip=0x0013e5; 	T(CLI);	// 3752                  cli ;~ 01A2:13E5
loc_113e6:
	// 4614 
cs=0x1a2;eip=0x0013e6; 	S(IN(al, dx));	// 3755                  in      al, dx          ; Video status bits: ;~ 01A2:13E6
cs=0x1a2;eip=0x0013e7; 	T(ROR(al, 1));	// 3760                  ror     al, 1 ;~ 01A2:13E7
cs=0x1a2;eip=0x0013e9; 	J(JC(loc_113e6));	// 3761                  jb      short loc_113E6 ;~ 01A2:13E9
loc_113eb:
	// 4615 
cs=0x1a2;eip=0x0013eb; 	S(IN(al, dx));	// 3764                  in      al, dx          ; Video status bits: ;~ 01A2:13EB
cs=0x1a2;eip=0x0013ec; 	T(ROR(al, 1));	// 3769                  ror     al, 1 ;~ 01A2:13EC
cs=0x1a2;eip=0x0013ee; 	J(JNC(loc_113eb));	// 3770                  jnb     short loc_113EB ;~ 01A2:13EE
cs=0x1a2;eip=0x0013f0; 	T(LODSW);	// 3771                  lodsw ;~ 01A2:13F0
cs=0x1a2;eip=0x0013f1; 	T(STI);	// 3772                  sti ;~ 01A2:13F1
cs=0x1a2;eip=0x0013f2; 	T(bx = ax;);	// 3773                  mov     bx, ax ;~ 01A2:13F2
loc_113f4:
	// 4616 
cs=0x1a2;eip=0x0013f4; 	S(IN(al, dx));	// 3776                  in      al, dx          ; Video status bits: ;~ 01A2:13F4
cs=0x1a2;eip=0x0013f5; 	T(ROR(al, 1));	// 3781                  ror     al, 1 ;~ 01A2:13F5
cs=0x1a2;eip=0x0013f7; 	J(JC(loc_113f4));	// 3782                  jb      short loc_113F4 ;~ 01A2:13F7
loc_113f9:
	// 4617 
cs=0x1a2;eip=0x0013f9; 	S(IN(al, dx));	// 3785                  in      al, dx          ; Video status bits: ;~ 01A2:13F9
cs=0x1a2;eip=0x0013fa; 	T(ROR(al, 1));	// 3790                  ror     al, 1 ;~ 01A2:13FA
cs=0x1a2;eip=0x0013fc; 	J(JNC(loc_113f9));	// 3791                  jnb     short loc_113F9 ;~ 01A2:13FC
cs=0x1a2;eip=0x0013fe; 	T(ax = bx;);	// 3792                  mov     ax, bx ;~ 01A2:13FE
cs=0x1a2;eip=0x001400; 	X(STOSW);	// 3793                  stosw ;~ 01A2:1400
cs=0x1a2;eip=0x001401; 	T(STI);	// 3794                  sti ;~ 01A2:1401
cs=0x1a2;eip=0x001402; 	J(LOOP(loc_113e5));	// 3795                  loop    loc_113E5 ;~ 01A2:1402
loc_11404:
	// 4618 
cs=0x1a2;eip=0x001404; 	T(CLD);	// 3799                  cld ;~ 01A2:1404
cs=0x1a2;eip=0x001405; 	X(POP(ds));	// 3800                  pop     ds ;~ 01A2:1405
cs=0x1a2;eip=0x001406; 	X(POP(di));	// 3801                  pop     di ;~ 01A2:1406
cs=0x1a2;eip=0x001407; 	X(POP(si));	// 3802                  pop     si ;~ 01A2:1407
cs=0x1a2;eip=0x001408; 	T(sp = bp;);	// 3803                  mov     sp, bp ;~ 01A2:1408
cs=0x1a2;eip=0x00140a; 	X(POP(bp));	// 3804                  pop     bp ;~ 01A2:140A
cs=0x1a2;eip=0x00140b; 	J(RETN(0x0A));	// 3805                  retn    0Ah ;~ 01A2:140B

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____vram: 	goto ____vram;
        case m2c::kloc_113bf: 	goto loc_113bf;
        case m2c::kloc_113c9: 	goto loc_113c9;
        case m2c::kloc_113d4: 	goto loc_113d4;
        case m2c::kloc_113d5: 	goto loc_113d5;
        case m2c::kloc_113da: 	goto loc_113da;
        case m2c::kloc_113e5: 	goto loc_113e5;
        case m2c::kloc_113e6: 	goto loc_113e6;
        case m2c::kloc_113eb: 	goto loc_113eb;
        case m2c::kloc_113f4: 	goto loc_113f4;
        case m2c::kloc_113f9: 	goto loc_113f9;
        case m2c::kloc_11404: 	goto loc_11404;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___stpcpy(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___stpcpy:
    _begin:
#undef dest
#define dest 6
	// 3817 dest            = dword ptr  6 ;~ 01A2:140E
#undef src
#define src 0x0A
	// 3818 src             = dword ptr  0Ah ;~ 01A2:140E
cs=0x1a2;eip=0x00140e; 	X(PUSH(bp));	// 3820                  push    bp ;~ 01A2:140E
cs=0x1a2;eip=0x00140f; 	T(bp = sp;);	// 3821                  mov     bp, sp ;~ 01A2:140F
cs=0x1a2;eip=0x001411; 	X(PUSH(si));	// 3822                  push    si ;~ 01A2:1411
cs=0x1a2;eip=0x001412; 	X(PUSH(*(dw*)(raddr(ss,bp+src+2))));	// 3823                  push    word ptr [bp+src+2] ;~ 01A2:1412
cs=0x1a2;eip=0x001415; 	X(PUSH(*(dw*)(raddr(ss,bp+src))));	// 3824                  push    word ptr [bp+src] ; s ;~ 01A2:1415
cs=0x1a2;eip=0x001418; 	T(NOP);	// 3825                  nop ;~ 01A2:1418
cs=0x1a2;eip=0x001419; 	X(PUSH(cs));	// 3826                  push    cs ;~ 01A2:1419
cs=0x1a2;eip=0x00141a; 	J(CALL(___strlen,0));	// 3827                  call    near ptr ___strlen ;~ 01A2:141A
cs=0x1a2;eip=0x00141d; 	X(POP(cx));	// 3828                  pop     cx ;~ 01A2:141D
cs=0x1a2;eip=0x00141e; 	X(POP(cx));	// 3829                  pop     cx ;~ 01A2:141E
cs=0x1a2;eip=0x00141f; 	T(si = ax;);	// 3830                  mov     si, ax ;~ 01A2:141F
cs=0x1a2;eip=0x001421; 	T(INC(ax));	// 3831                  inc     ax ;~ 01A2:1421
cs=0x1a2;eip=0x001422; 	X(PUSH(ax));	// 3832                  push    ax              ; n ;~ 01A2:1422
cs=0x1a2;eip=0x001423; 	X(PUSH(*(dw*)(raddr(ss,bp+src+2))));	// 3833                  push    word ptr [bp+src+2] ;~ 01A2:1423
cs=0x1a2;eip=0x001426; 	X(PUSH(*(dw*)(raddr(ss,bp+src))));	// 3834                  push    word ptr [bp+src] ; src ;~ 01A2:1426
cs=0x1a2;eip=0x001429; 	X(PUSH(*(dw*)(raddr(ss,bp+dest+2))));	// 3835                  push    word ptr [bp+dest+2] ;~ 01A2:1429
cs=0x1a2;eip=0x00142c; 	X(PUSH(*(dw*)(raddr(ss,bp+dest))));	// 3836                  push    word ptr [bp+dest] ; dest ;~ 01A2:142C
cs=0x1a2;eip=0x00142f; 	T(NOP);	// 3837                  nop ;~ 01A2:142F
cs=0x1a2;eip=0x001430; 	X(PUSH(cs));	// 3838                  push    cs ;~ 01A2:1430
cs=0x1a2;eip=0x001431; 	J(CALL(___memcpy,0));	// 3839                  call    near ptr ___memcpy ;~ 01A2:1431
cs=0x1a2;eip=0x001434; 	T(ADD(sp, 0x0A));	// 3840                  add     sp, 0Ah ;~ 01A2:1434
cs=0x1a2;eip=0x001437; 	T(MOV(dx, *(dw*)(raddr(ss,bp+dest+2))));	// 3841                  mov     dx, word ptr [bp+dest+2] ;~ 01A2:1437
cs=0x1a2;eip=0x00143a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+dest))));	// 3842                  mov     ax, word ptr [bp+dest] ;~ 01A2:143A
cs=0x1a2;eip=0x00143d; 	T(ADD(ax, si));	// 3843                  add     ax, si ;~ 01A2:143D
cs=0x1a2;eip=0x00143f; 	X(POP(si));	// 3844                  pop     si ;~ 01A2:143F
cs=0x1a2;eip=0x001440; 	X(POP(bp));	// 3845                  pop     bp ;~ 01A2:1440
cs=0x1a2;eip=0x001441; 	J(RETF(0));	// 3846                  retf ;~ 01A2:1441

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___stpcpy: 	goto ___stpcpy;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___clrscr(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___clrscr:
    _begin:
cs=0x1a2;eip=0x001442; 	T(al = 6;);	// 3857                  mov     al, 6 ;~ 01A2:1442
cs=0x1a2;eip=0x001444; 	X(PUSH(ax));	// 3858                  push    ax ;~ 01A2:1444
cs=0x1a2;eip=0x001445; 	T(al = byte_19250;);	// 3859                  mov     al, byte_19250 ;~ 01A2:1445
cs=0x1a2;eip=0x001448; 	X(PUSH(ax));	// 3860                  push    ax ;~ 01A2:1448
cs=0x1a2;eip=0x001449; 	T(al = byte_19251;);	// 3861                  mov     al, byte_19251 ;~ 01A2:1449
cs=0x1a2;eip=0x00144c; 	X(PUSH(ax));	// 3862                  push    ax ;~ 01A2:144C
cs=0x1a2;eip=0x00144d; 	T(al = byte_19252;);	// 3863                  mov     al, byte_19252 ;~ 01A2:144D
cs=0x1a2;eip=0x001450; 	X(PUSH(ax));	// 3864                  push    ax ;~ 01A2:1450
cs=0x1a2;eip=0x001451; 	T(al = byte_19253;);	// 3865                  mov     al, byte_19253 ;~ 01A2:1451
cs=0x1a2;eip=0x001454; 	X(PUSH(ax));	// 3866                  push    ax ;~ 01A2:1454
cs=0x1a2;eip=0x001455; 	T(al = 0;);	// 3867                  mov     al, 0 ;~ 01A2:1455
cs=0x1a2;eip=0x001457; 	X(PUSH(ax));	// 3868                  push    ax ;~ 01A2:1457
cs=0x1a2;eip=0x001458; 	J(CALL(____scroll,0));	// 3869                  call    ____SCROLL ;~ 01A2:1458
cs=0x1a2;eip=0x00145b; 	T(dl = byte_19250;);	// 3870                  mov     dl, byte_19250 ;~ 01A2:145B
cs=0x1a2;eip=0x00145f; 	T(dh = byte_19251;);	// 3871                  mov     dh, byte_19251 ;~ 01A2:145F
cs=0x1a2;eip=0x001463; 	T(ah = 2;);	// 3872                  mov     ah, 2 ;~ 01A2:1463
cs=0x1a2;eip=0x001465; 	T(bh = 0;);	// 3873                  mov     bh, 0 ;~ 01A2:1465
cs=0x1a2;eip=0x001467; 	J(CALL(____videoint,0));	// 3874                  call    ____VideoInt ;~ 01A2:1467
cs=0x1a2;eip=0x00146a; 	J(RETF(0));	// 3875                  retf ;~ 01A2:146A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___clrscr: 	goto ___clrscr;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____cputn(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____cputn:
    _begin:
#undef var_8
#define var_8 -8
	// 3885 var_8           = word ptr -8 ;~ 01A2:146B
#undef var_5
#define var_5 -5
	// 3886 var_5           = byte ptr -5 ;~ 01A2:146B
#undef var_4
#define var_4 -4
	// 3887 var_4           = word ptr -4 ;~ 01A2:146B
#undef var_2
#define var_2 -2
	// 3888 var_2           = word ptr -2 ;~ 01A2:146B
#undef arg_4
#define arg_4 8
	// 3889 arg_4           = word ptr  8 ;~ 01A2:146B
#undef arg_6
#define arg_6 0x0A
	// 3890 arg_6           = dword ptr  0Ah ;~ 01A2:146B
cs=0x1a2;eip=0x00146b; 	X(PUSH(bp));	// 3892                  push    bp ;~ 01A2:146B
cs=0x1a2;eip=0x00146c; 	T(bp = sp;);	// 3893                  mov     bp, sp ;~ 01A2:146C
cs=0x1a2;eip=0x00146e; 	T(SUB(sp, 8));	// 3894                  sub     sp, 8 ;~ 01A2:146E
cs=0x1a2;eip=0x001471; 	X(PUSH(si));	// 3895                  push    si ;~ 01A2:1471
cs=0x1a2;eip=0x001472; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 3896                  mov     si, [bp+arg_4] ;~ 01A2:1472
cs=0x1a2;eip=0x001475; 	X(MOV(*(raddr(ss,bp+var_5)), 0));	// 3897                  mov     [bp+var_5], 0 ;~ 01A2:1475
cs=0x1a2;eip=0x001479; 	J(CALL(____wherexy,0));	// 3898                  call    ____wherexy ;~ 01A2:1479
cs=0x1a2;eip=0x00147c; 	T(ah = 0;);	// 3899                  mov     ah, 0 ;~ 01A2:147C
cs=0x1a2;eip=0x00147e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 3900                  mov     [bp+var_2], ax ;~ 01A2:147E
cs=0x1a2;eip=0x001481; 	J(CALL(____wherexy,0));	// 3901                  call    ____wherexy ;~ 01A2:1481
cs=0x1a2;eip=0x001484; 	T(cl = 8;);	// 3902                  mov     cl, 8 ;~ 01A2:1484
cs=0x1a2;eip=0x001486; 	T(SHR(ax, cl));	// 3903                  shr     ax, cl ;~ 01A2:1486
cs=0x1a2;eip=0x001488; 	T(ah = 0;);	// 3904                  mov     ah, 0 ;~ 01A2:1488
cs=0x1a2;eip=0x00148a; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 3905                  mov     [bp+var_4], ax ;~ 01A2:148A
cs=0x1a2;eip=0x00148d; 	J(JMP(loc_1156c));	// 3906                  jmp     loc_1156C ;~ 01A2:148D
loc_11490:
	// 4619 
cs=0x1a2;eip=0x001490; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 3910                  les     bx, [bp+arg_6] ;~ 01A2:1490
cs=0x1a2;eip=0x001493; 	X(INC(*(dw*)(raddr(ss,bp+arg_6))));	// 3912                  inc     word ptr [bp+arg_6] ;~ 01A2:1493
cs=0x1a2;eip=0x001496; 	T(MOV(al, *(raddr(es,bx))));	// 3913                  mov     al, es:[bx] ;~ 01A2:1496
cs=0x1a2;eip=0x001499; 	X(MOV(*(raddr(ss,bp+var_5)), al));	// 3914                  mov     [bp+var_5], al ;~ 01A2:1499
cs=0x1a2;eip=0x00149c; 	T(ah = 0;);	// 3915                  mov     ah, 0 ;~ 01A2:149C
cs=0x1a2;eip=0x00149e; 	T(SUB(ax, 7));	// 3916                  sub     ax, 7 ;~ 01A2:149E
cs=0x1a2;eip=0x0014a1; 	T(bx = ax;);	// 3917                  mov     bx, ax ;~ 01A2:14A1
cs=0x1a2;eip=0x0014a3; 	T(CMP(bx, 6));	// 3918                  cmp     bx, 6           ; switch 7 cases ;~ 01A2:14A3
cs=0x1a2;eip=0x0014a6; 	J(JA(__def_114aa));	// 3919                  ja      short __def_114AA ; jumptable 000114AA default case, cases 2,4,5 ;~ 01A2:14A6
cs=0x1a2;eip=0x0014a8; 	T(SHL(bx, 1));	// 3920                  shl     bx, 1 ;~ 01A2:14A8
cs=0x1a2;eip=0x0014aa; __disp=*(dw*)((&__jpt_114aa)+bx);
	J(return __dispatch_call(__disp, _state););	// 3921                  jmp     word ptr cs:__jpt_114AA[bx] ; switch jump ;~ 01A2:14AA
loc_114af:
	// 4620 
cs=0x1a2;eip=0x0014af; 	T(ah = 0x0E;);	// 3925                  mov     ah, 0Eh         ; jumptable 000114AA case 0 ;~ 01A2:14AF
cs=0x1a2;eip=0x0014b1; 	T(al = 7;);	// 3926                  mov     al, 7 ;~ 01A2:14B1
cs=0x1a2;eip=0x0014b3; 	J(CALL(____videoint,0));	// 3927                  call    ____VideoInt ;~ 01A2:14B3
cs=0x1a2;eip=0x0014b6; 	J(JMP(loc_1152e));	// 3928                  jmp     short loc_1152E ;~ 01A2:14B6
loc_114b8:
	// 4621 
cs=0x1a2;eip=0x0014b8; 	T(al = byte_19250;);	// 3932                  mov     al, byte_19250  ; jumptable 000114AA case 1 ;~ 01A2:14B8
cs=0x1a2;eip=0x0014bb; 	T(ah = 0;);	// 3933                  mov     ah, 0 ;~ 01A2:14BB
cs=0x1a2;eip=0x0014bd; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_2))));	// 3934                  cmp     ax, [bp+var_2] ;~ 01A2:14BD
cs=0x1a2;eip=0x0014c0; 	J(JGE(loc_1152e));	// 3935                  jge     short loc_1152E ;~ 01A2:14C0
cs=0x1a2;eip=0x0014c2; 	X(DEC(*(dw*)(raddr(ss,bp+var_2))));	// 3936                  dec     [bp+var_2] ;~ 01A2:14C2
cs=0x1a2;eip=0x0014c5; 	J(JMP(loc_1152e));	// 3937                  jmp     short loc_1152E ;~ 01A2:14C5
loc_114c7:
	// 4622 
cs=0x1a2;eip=0x0014c7; 	T(al = byte_19250;);	// 3941                  mov     al, byte_19250  ; jumptable 000114AA case 6 ;~ 01A2:14C7
cs=0x1a2;eip=0x0014ca; 	T(ah = 0;);	// 3942                  mov     ah, 0 ;~ 01A2:14CA
cs=0x1a2;eip=0x0014cc; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 3943                  mov     [bp+var_2], ax ;~ 01A2:14CC
cs=0x1a2;eip=0x0014cf; 	J(JMP(loc_1152e));	// 3944                  jmp     short loc_1152E ;~ 01A2:14CF
loc_114d1:
	// 4623 
cs=0x1a2;eip=0x0014d1; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 3948                  inc     [bp+var_4]      ; jumptable 000114AA case 3 ;~ 01A2:14D1
cs=0x1a2;eip=0x0014d4; 	J(JMP(loc_1152e));	// 3949                  jmp     short loc_1152E ;~ 01A2:14D4
__def_114aa:
	// 4624 
cs=0x1a2;eip=0x0014d6; 	T(al = byte_19259;);	// 3954                  mov     al, byte_19259  ; jumptable 000114AA default case, cases 2,4,5 ;~ 01A2:14D6
cs=0x1a2;eip=0x0014d9; 	T(ah = 0;);	// 3955                  mov     ah, 0 ;~ 01A2:14D9
cs=0x1a2;eip=0x0014db; 	T(OR(ax, ax));	// 3956                  or      ax, ax ;~ 01A2:14DB
cs=0x1a2;eip=0x0014dd; 	J(JNZ(loc_1150d));	// 3957                  jnz     short loc_1150D ;~ 01A2:14DD
cs=0x1a2;eip=0x0014df; 	T(CMP(word_1925f, 0));	// 3958                  cmp     word_1925F, 0 ;~ 01A2:14DF
cs=0x1a2;eip=0x0014e4; 	J(JZ(loc_1150d));	// 3959                  jz      short loc_1150D ;~ 01A2:14E4
cs=0x1a2;eip=0x0014e6; 	T(ah = byte_19254;);	// 3960                  mov     ah, byte_19254 ;~ 01A2:14E6
cs=0x1a2;eip=0x0014ea; 	T(MOV(al, *(raddr(ss,bp+var_5))));	// 3961                  mov     al, [bp+var_5] ;~ 01A2:14EA
cs=0x1a2;eip=0x0014ed; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 3962                  mov     [bp+var_8], ax ;~ 01A2:14ED
cs=0x1a2;eip=0x0014f0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 3963                  mov     ax, [bp+var_2] ;~ 01A2:14F0
cs=0x1a2;eip=0x0014f3; 	T(INC(ax));	// 3964                  inc     ax ;~ 01A2:14F3
cs=0x1a2;eip=0x0014f4; 	X(PUSH(ax));	// 3965                  push    ax ;~ 01A2:14F4
cs=0x1a2;eip=0x0014f5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 3966                  mov     ax, [bp+var_4] ;~ 01A2:14F5
cs=0x1a2;eip=0x0014f8; 	T(INC(ax));	// 3967                  inc     ax ;~ 01A2:14F8
cs=0x1a2;eip=0x0014f9; 	X(PUSH(ax));	// 3968                  push    ax ;~ 01A2:14F9
cs=0x1a2;eip=0x0014fa; 	J(CALL(____vptr,0));	// 3969                  call    ____VPTR ;~ 01A2:14FA
cs=0x1a2;eip=0x0014fd; 	X(PUSH(dx));	// 3970                  push    dx ;~ 01A2:14FD
cs=0x1a2;eip=0x0014fe; 	X(PUSH(ax));	// 3971                  push    ax ;~ 01A2:14FE
cs=0x1a2;eip=0x0014ff; 	X(PUSH(ss));	// 3972                  push    ss ;~ 01A2:14FF
cs=0x1a2;eip=0x001500; 	T(ax = bp+var_8);	// 3973                  lea     ax, [bp+var_8] ;~ 01A2:1500
cs=0x1a2;eip=0x001503; 	X(PUSH(ax));	// 3974                  push    ax ;~ 01A2:1503
cs=0x1a2;eip=0x001504; 	T(ax = 1;);	// 3975                  mov     ax, 1 ;~ 01A2:1504
cs=0x1a2;eip=0x001507; 	X(PUSH(ax));	// 3976                  push    ax ;~ 01A2:1507
cs=0x1a2;eip=0x001508; 	J(CALL(____vram,0));	// 3977                  call    ____VRAM ;~ 01A2:1508
cs=0x1a2;eip=0x00150b; 	J(JMP(loc_1152b));	// 3978                  jmp     short loc_1152B ;~ 01A2:150B
loc_1150d:
	// 4625 
cs=0x1a2;eip=0x00150d; 	T(MOV(dl, *(raddr(ss,bp+var_2))));	// 3983                  mov     dl, byte ptr [bp+var_2] ;~ 01A2:150D
cs=0x1a2;eip=0x001510; 	T(MOV(dh, *(raddr(ss,bp+var_4))));	// 3984                  mov     dh, byte ptr [bp+var_4] ;~ 01A2:1510
cs=0x1a2;eip=0x001513; 	T(ah = 2;);	// 3985                  mov     ah, 2 ;~ 01A2:1513
cs=0x1a2;eip=0x001515; 	T(bh = 0;);	// 3986                  mov     bh, 0 ;~ 01A2:1515
cs=0x1a2;eip=0x001517; 	J(CALL(____videoint,0));	// 3987                  call    ____VideoInt ;~ 01A2:1517
cs=0x1a2;eip=0x00151a; 	T(bl = byte_19254;);	// 3988                  mov     bl, byte_19254 ;~ 01A2:151A
cs=0x1a2;eip=0x00151e; 	T(MOV(al, *(raddr(ss,bp+var_5))));	// 3989                  mov     al, [bp+var_5] ;~ 01A2:151E
cs=0x1a2;eip=0x001521; 	T(ah = 9;);	// 3990                  mov     ah, 9 ;~ 01A2:1521
cs=0x1a2;eip=0x001523; 	T(bh = 0;);	// 3991                  mov     bh, 0 ;~ 01A2:1523
cs=0x1a2;eip=0x001525; 	T(cx = 1;);	// 3992                  mov     cx, 1 ;~ 01A2:1525
cs=0x1a2;eip=0x001528; 	J(CALL(____videoint,0));	// 3993                  call    ____VideoInt ;~ 01A2:1528
loc_1152b:
	// 4626 
cs=0x1a2;eip=0x00152b; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 3996                  inc     [bp+var_2] ;~ 01A2:152B
loc_1152e:
	// 4627 
cs=0x1a2;eip=0x00152e; 	T(al = byte_19252;);	// 4000                  mov     al, byte_19252 ;~ 01A2:152E
cs=0x1a2;eip=0x001531; 	T(ah = 0;);	// 4001                  mov     ah, 0 ;~ 01A2:1531
cs=0x1a2;eip=0x001533; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_2))));	// 4002                  cmp     ax, [bp+var_2] ;~ 01A2:1533
cs=0x1a2;eip=0x001536; 	J(JGE(loc_11546));	// 4003                  jge     short loc_11546 ;~ 01A2:1536
cs=0x1a2;eip=0x001538; 	T(al = byte_19250;);	// 4004                  mov     al, byte_19250 ;~ 01A2:1538
cs=0x1a2;eip=0x00153b; 	T(ah = 0;);	// 4005                  mov     ah, 0 ;~ 01A2:153B
cs=0x1a2;eip=0x00153d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 4006                  mov     [bp+var_2], ax ;~ 01A2:153D
cs=0x1a2;eip=0x001540; 	T(ax = *(dw*)(&byte_1924e););	// 4007                  mov     ax, word ptr byte_1924E ;~ 01A2:1540
cs=0x1a2;eip=0x001543; 	X(ADD(*(dw*)(raddr(ss,bp+var_4)), ax));	// 4008                  add     [bp+var_4], ax ;~ 01A2:1543
loc_11546:
	// 4628 
cs=0x1a2;eip=0x001546; 	T(al = byte_19253;);	// 4011                  mov     al, byte_19253 ;~ 01A2:1546
cs=0x1a2;eip=0x001549; 	T(ah = 0;);	// 4012                  mov     ah, 0 ;~ 01A2:1549
cs=0x1a2;eip=0x00154b; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_4))));	// 4013                  cmp     ax, [bp+var_4] ;~ 01A2:154B
cs=0x1a2;eip=0x00154e; 	J(JGE(loc_1156c));	// 4014                  jge     short loc_1156C ;~ 01A2:154E
cs=0x1a2;eip=0x001550; 	T(al = 6;);	// 4015                  mov     al, 6 ;~ 01A2:1550
cs=0x1a2;eip=0x001552; 	X(PUSH(ax));	// 4016                  push    ax ;~ 01A2:1552
cs=0x1a2;eip=0x001553; 	T(al = byte_19250;);	// 4017                  mov     al, byte_19250 ;~ 01A2:1553
cs=0x1a2;eip=0x001556; 	X(PUSH(ax));	// 4018                  push    ax ;~ 01A2:1556
cs=0x1a2;eip=0x001557; 	T(al = byte_19251;);	// 4019                  mov     al, byte_19251 ;~ 01A2:1557
cs=0x1a2;eip=0x00155a; 	X(PUSH(ax));	// 4020                  push    ax ;~ 01A2:155A
cs=0x1a2;eip=0x00155b; 	T(al = byte_19252;);	// 4021                  mov     al, byte_19252 ;~ 01A2:155B
cs=0x1a2;eip=0x00155e; 	X(PUSH(ax));	// 4022                  push    ax ;~ 01A2:155E
cs=0x1a2;eip=0x00155f; 	T(al = byte_19253;);	// 4023                  mov     al, byte_19253 ;~ 01A2:155F
cs=0x1a2;eip=0x001562; 	X(PUSH(ax));	// 4024                  push    ax ;~ 01A2:1562
cs=0x1a2;eip=0x001563; 	T(al = 1;);	// 4025                  mov     al, 1 ;~ 01A2:1563
cs=0x1a2;eip=0x001565; 	X(PUSH(ax));	// 4026                  push    ax ;~ 01A2:1565
cs=0x1a2;eip=0x001566; 	J(CALL(____scroll,0));	// 4027                  call    ____SCROLL ;~ 01A2:1566
cs=0x1a2;eip=0x001569; 	X(DEC(*(dw*)(raddr(ss,bp+var_4))));	// 4028                  dec     [bp+var_4] ;~ 01A2:1569
loc_1156c:
	// 4629 
cs=0x1a2;eip=0x00156c; 	T(ax = si;);	// 4032                  mov     ax, si ;~ 01A2:156C
cs=0x1a2;eip=0x00156e; 	T(DEC(si));	// 4033                  dec     si ;~ 01A2:156E
cs=0x1a2;eip=0x00156f; 	T(OR(ax, ax));	// 4034                  or      ax, ax ;~ 01A2:156F
cs=0x1a2;eip=0x001571; 	J(JZ(loc_11576));	// 4035                  jz      short loc_11576 ;~ 01A2:1571
cs=0x1a2;eip=0x001573; 	J(JMP(loc_11490));	// 4036                  jmp     loc_11490 ;~ 01A2:1573
loc_11576:
	// 4630 
cs=0x1a2;eip=0x001576; 	T(MOV(dl, *(raddr(ss,bp+var_2))));	// 4040                  mov     dl, byte ptr [bp+var_2] ;~ 01A2:1576
cs=0x1a2;eip=0x001579; 	T(MOV(dh, *(raddr(ss,bp+var_4))));	// 4041                  mov     dh, byte ptr [bp+var_4] ;~ 01A2:1579
cs=0x1a2;eip=0x00157c; 	T(ah = 2;);	// 4042                  mov     ah, 2 ;~ 01A2:157C
cs=0x1a2;eip=0x00157e; 	T(bh = 0;);	// 4043                  mov     bh, 0 ;~ 01A2:157E
cs=0x1a2;eip=0x001580; 	J(CALL(____videoint,0));	// 4044                  call    ____VideoInt ;~ 01A2:1580
cs=0x1a2;eip=0x001583; 	T(MOV(al, *(raddr(ss,bp+var_5))));	// 4045                  mov     al, [bp+var_5] ;~ 01A2:1583
cs=0x1a2;eip=0x001586; 	T(ah = 0;);	// 4046                  mov     ah, 0 ;~ 01A2:1586
cs=0x1a2;eip=0x001588; 	X(POP(si));	// 4047                  pop     si ;~ 01A2:1588
cs=0x1a2;eip=0x001589; 	T(sp = bp;);	// 4048                  mov     sp, bp ;~ 01A2:1589
cs=0x1a2;eip=0x00158b; 	X(POP(bp));	// 4049                  pop     bp ;~ 01A2:158B
cs=0x1a2;eip=0x00158c; 	J(RETN(0x0A));	// 4050                  retn    0Ah ;~ 01A2:158C

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____cputn: 	goto ____cputn;
        case m2c::k__def_114aa: 	goto __def_114aa;
        case m2c::kloc_11490: 	goto loc_11490;
        case m2c::kloc_114af: 	goto loc_114af;
        case m2c::kloc_114b8: 	goto loc_114b8;
        case m2c::kloc_114c7: 	goto loc_114c7;
        case m2c::kloc_114d1: 	goto loc_114d1;
        case m2c::kloc_1150d: 	goto loc_1150d;
        case m2c::kloc_1152b: 	goto loc_1152b;
        case m2c::kloc_1152e: 	goto loc_1152e;
        case m2c::kloc_11546: 	goto loc_11546;
        case m2c::kloc_1156c: 	goto loc_1156c;
        case m2c::kloc_11576: 	goto loc_11576;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___cprintf(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___cprintf:
    _begin:
#undef format
#define format 6
	// 4077 format          = dword ptr  6 ;~ 01A2:159D
#undef arg_4
#define arg_4 0x0A
	// 4078 arg_4           = byte ptr  0Ah ;~ 01A2:159D
cs=0x1a2;eip=0x00159d; 	X(PUSH(bp));	// 4080                  push    bp ;~ 01A2:159D
cs=0x1a2;eip=0x00159e; 	T(bp = sp;);	// 4081                  mov     bp, sp ;~ 01A2:159E
cs=0x1a2;eip=0x0015a0; 	T(ax = 0x146B;);	// 4082                  mov     ax, 146Bh ;~ 01A2:15A0
cs=0x1a2;eip=0x0015a3; 	X(PUSH(ax));	// 4083                  push    ax ;~ 01A2:15A3
cs=0x1a2;eip=0x0015a4; 	T(XOR(ax, ax));	// 4084                  xor     ax, ax ;~ 01A2:15A4
cs=0x1a2;eip=0x0015a6; 	T(XOR(dx, dx));	// 4085                  xor     dx, dx ;~ 01A2:15A6
cs=0x1a2;eip=0x0015a8; 	X(PUSH(ax));	// 4086                  push    ax ;~ 01A2:15A8
cs=0x1a2;eip=0x0015a9; 	X(PUSH(dx));	// 4087                  push    dx ;~ 01A2:15A9
cs=0x1a2;eip=0x0015aa; 	X(PUSH(*(dw*)(raddr(ss,bp+format+2))));	// 4088                  push    word ptr [bp+format+2] ;~ 01A2:15AA
cs=0x1a2;eip=0x0015ad; 	X(PUSH(*(dw*)(raddr(ss,bp+format))));	// 4089                  push    word ptr [bp+format] ;~ 01A2:15AD
cs=0x1a2;eip=0x0015b0; 	T(ax = bp+arg_4);	// 4090                  lea     ax, [bp+arg_4] ;~ 01A2:15B0
cs=0x1a2;eip=0x0015b3; 	X(PUSH(ax));	// 4091                  push    ax ;~ 01A2:15B3
cs=0x1a2;eip=0x0015b4; 	J(CALL(____vprinter,0));	// 4092                  call    ____VPRINTER ;~ 01A2:15B4
cs=0x1a2;eip=0x0015b7; 	X(POP(bp));	// 4093                  pop     bp ;~ 01A2:15B7
cs=0x1a2;eip=0x0015b8; 	J(RETF(0));	// 4094                  retf ;~ 01A2:15B8

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___cprintf: 	goto ___cprintf;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_115b9(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_115b9:
    _begin:
#undef arg_0
#define arg_0 4
	// 4105 arg_0           = dword ptr  4 ;~ 01A2:15B9
#undef arg_4
#define arg_4 8
	// 4106 arg_4           = dword ptr  8 ;~ 01A2:15B9
cs=0x1a2;eip=0x0015b9; 	X(PUSH(bp));	// 4108                  push    bp ;~ 01A2:15B9
cs=0x1a2;eip=0x0015ba; 	T(bp = sp;);	// 4109                  mov     bp, sp ;~ 01A2:15BA
cs=0x1a2;eip=0x0015bc; 	J(JMP(loc_115d6));	// 4110                  jmp     short loc_115D6 ;~ 01A2:15BC
loc_115be:
	// 4631 
cs=0x1a2;eip=0x0015be; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 4114                  les     bx, [bp+arg_0] ;~ 01A2:15BE
cs=0x1a2;eip=0x0015c1; 	X(INC(*(dw*)(raddr(ss,bp+arg_0))));	// 4115                  inc     word ptr [bp+arg_0] ;~ 01A2:15C1
cs=0x1a2;eip=0x0015c4; 	T(MOV(al, *(raddr(es,bx))));	// 4116                  mov     al, es:[bx] ;~ 01A2:15C4
cs=0x1a2;eip=0x0015c7; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 4117                  les     bx, [bp+arg_4] ;~ 01A2:15C7
cs=0x1a2;eip=0x0015ca; 	X(INC(*(dw*)(raddr(ss,bp+arg_4))));	// 4119                  inc     word ptr [bp+arg_4] ;~ 01A2:15CA
cs=0x1a2;eip=0x0015cd; 	T(CMP(al, *(raddr(es,bx))));	// 4120                  cmp     al, es:[bx] ;~ 01A2:15CD
cs=0x1a2;eip=0x0015d0; 	J(JZ(loc_115d6));	// 4121                  jz      short loc_115D6 ;~ 01A2:15D0
cs=0x1a2;eip=0x0015d2; 	T(XOR(ax, ax));	// 4122                  xor     ax, ax ;~ 01A2:15D2
cs=0x1a2;eip=0x0015d4; 	J(JMP(loc_115e2));	// 4123                  jmp     short loc_115E2 ;~ 01A2:15D4
loc_115d6:
	// 4632 
cs=0x1a2;eip=0x0015d6; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 4129                  les     bx, [bp+arg_0] ;~ 01A2:15D6
cs=0x1a2;eip=0x0015d9; 	T(CMP(*(raddr(es,bx)), 0));	// 4130                  cmp     byte ptr es:[bx], 0 ;~ 01A2:15D9
cs=0x1a2;eip=0x0015dd; 	J(JNZ(loc_115be));	// 4131                  jnz     short loc_115BE ;~ 01A2:15DD
cs=0x1a2;eip=0x0015df; 	T(ax = 1;);	// 4132                  mov     ax, 1 ;~ 01A2:15DF
loc_115e2:
	// 4633 
cs=0x1a2;eip=0x0015e2; 	X(POP(bp));	// 4136                  pop     bp ;~ 01A2:15E2
cs=0x1a2;eip=0x0015e3; 	J(RETN(8));	// 4137                  retn    8 ;~ 01A2:15E3

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_115be: 	goto loc_115be;
        case m2c::kloc_115d6: 	goto loc_115d6;
        case m2c::kloc_115e2: 	goto loc_115e2;
        case m2c::ksub_115b9: 	goto sub_115b9;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_115e6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_115e6:
    _begin:
cs=0x1a2;eip=0x0015e6; 	T(ah = 0x12;);	// 4147                  mov     ah, 12h ;~ 01A2:15E6
cs=0x1a2;eip=0x0015e8; 	T(bl = 0x10;);	// 4148                  mov     bl, 10h ;~ 01A2:15E8
cs=0x1a2;eip=0x0015ea; 	J(CALL(____videoint,0));	// 4149                  call    ____VideoInt ;~ 01A2:15EA
cs=0x1a2;eip=0x0015ed; 	T(al = bl;);	// 4150                  mov     al, bl ;~ 01A2:15ED
cs=0x1a2;eip=0x0015ef; 	T(ADD(al, 0x0F0));	// 4151                  add     al, 0F0h ; '
cs=0x1a2;eip=0x0015f1; 	T(ah = 0;);	// 4152                  mov     ah, 0 ;~ 01A2:15F1
cs=0x1a2;eip=0x0015f3; 	J(RETN(0));	// 4153                  retn ;~ 01A2:15F3

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_115e6: 	goto sub_115e6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____videoint(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____videoint:
    _begin:
cs=0x1a2;eip=0x0015f4; 	X(PUSH(bp));	// 4163                  push    bp ;~ 01A2:15F4
cs=0x1a2;eip=0x0015f5; 	X(PUSH(ds));	// 4164                  push    ds ;~ 01A2:15F5
cs=0x1a2;eip=0x0015f6; 	X(PUSH(cx));	// 4165                  push    cx ;~ 01A2:15F6
cs=0x1a2;eip=0x0015f7; 	T(cx = 0x40;);	// 4166                  mov     cx, 40h ; '@' ;~ 01A2:15F7
cs=0x1a2;eip=0x0015fa; 	T(ds = cx;);	// 4167                  mov     ds, cx ;~ 01A2:15FA
cs=0x1a2;eip=0x0015fc; 	X(POP(cx));	// 4169                  pop     cx ;~ 01A2:15FC
cs=0x1a2;eip=0x0015fd; 	T(CMP(ah, 0));	// 4170                  cmp     ah, 0 ;~ 01A2:15FD
cs=0x1a2;eip=0x001600; 	J(JZ(loc_1160b));	// 4171                  jz      short loc_1160B ;~ 01A2:1600
cs=0x1a2;eip=0x001602; 	T(CMP(ah, 0x0F));	// 4172                  cmp     ah, 0Fh ;~ 01A2:1602
cs=0x1a2;eip=0x001605; 	J(JZ(loc_11660));	// 4173                  jz      short loc_11660 ;~ 01A2:1605
loc_11607:
	// 4634 
cs=0x1a2;eip=0x001607; 	S(_INT(0x10));	// 4177                  int     10h             ; - VIDEO - ;~ 01A2:1607
cs=0x1a2;eip=0x001609; 	J(JMP(loc_1167c));	// 4178                  jmp     short loc_1167C ;~ 01A2:1609
loc_1160b:
	// 4635 
cs=0x1a2;eip=0x00160b; 	T(CMP(al, 2));	// 4182                  cmp     al, 2 ;~ 01A2:160B
cs=0x1a2;eip=0x00160d; 	J(JZ(loc_11613));	// 4183                  jz      short loc_11613 ;~ 01A2:160D
cs=0x1a2;eip=0x00160f; 	T(CMP(al, 3));	// 4184                  cmp     al, 3 ;~ 01A2:160F
cs=0x1a2;eip=0x001611; 	J(JNZ(loc_1162c));	// 4185                  jnz     short loc_1162C ;~ 01A2:1611
loc_11613:
	// 4636 
cs=0x1a2;eip=0x001613; 	X(PUSH(ax));	// 4188                  push    ax ;~ 01A2:1613
cs=0x1a2;eip=0x001614; 	T(ax = 0x1A00;);	// 4189                  mov     ax, 1A00h ;~ 01A2:1614
cs=0x1a2;eip=0x001617; 	S(_INT(0x10));	// 4190                  int     10h             ; - VIDEO - DISPLAY COMBINATION (PS,VGA/MCGA): read display combination code ;~ 01A2:1617
cs=0x1a2;eip=0x001619; 	T(CMP(al, 0x1A));	// 4191                  cmp     al, 1Ah ;~ 01A2:1619
cs=0x1a2;eip=0x00161b; 	J(JZ(loc_11622));	// 4192                  jz      short loc_11622 ;~ 01A2:161B
cs=0x1a2;eip=0x00161d; 	X(AND(*(raddr(ds,0x87)), 0x0FE));	// 4193                  and     byte ptr ds:87h, 0FEh ;~ 01A2:161D
loc_11622:
	// 4637 
cs=0x1a2;eip=0x001622; 	T(ah = 1;);	// 4196                  mov     ah, 1 ;~ 01A2:1622
cs=0x1a2;eip=0x001624; 	T(cx = 0x607;);	// 4197                  mov     cx, 607h ;~ 01A2:1624
cs=0x1a2;eip=0x001627; 	S(_INT(0x10));	// 4198                  int     10h             ; - VIDEO - SET CURSOR CHARACTERISTICS ;~ 01A2:1627
cs=0x1a2;eip=0x001629; 	X(POP(ax));	// 4202                  pop     ax ;~ 01A2:1629
cs=0x1a2;eip=0x00162a; 	J(JMP(loc_11607));	// 4203                  jmp     short loc_11607 ;~ 01A2:162A
loc_1162c:
	// 4638 
cs=0x1a2;eip=0x00162c; 	T(CMP(al, 0x40));	// 4207                  cmp     al, 40h ; '@' ;~ 01A2:162C
cs=0x1a2;eip=0x00162e; 	J(JNZ(loc_11607));	// 4208                  jnz     short loc_11607 ;~ 01A2:162E
cs=0x1a2;eip=0x001630; 	T(bl = 0x10;);	// 4209                  mov     bl, 10h ;~ 01A2:1630
cs=0x1a2;eip=0x001632; 	T(ah = 0x12;);	// 4210                  mov     ah, 12h ;~ 01A2:1632
cs=0x1a2;eip=0x001634; 	S(_INT(0x10));	// 4211                  int     10h             ; - VIDEO - ALTERNATE FUNCTION SELECT (PS, EGA, VGA, MCGA) - GET EGA INFO ;~ 01A2:1634
cs=0x1a2;eip=0x001636; 	T(CMP(bl, 0x10));	// 4213                  cmp     bl, 10h ;~ 01A2:1636
cs=0x1a2;eip=0x001639; 	J(JZ(loc_1167c));	// 4214                  jz      short loc_1167C ;~ 01A2:1639
cs=0x1a2;eip=0x00163b; 	T(ax = 0x1112;);	// 4215                  mov     ax, 1112h ;~ 01A2:163B
cs=0x1a2;eip=0x00163e; 	T(XOR(bl, bl));	// 4216                  xor     bl, bl ;~ 01A2:163E
cs=0x1a2;eip=0x001640; 	S(_INT(0x10));	// 4217                  int     10h             ; - VIDEO - TEXT-MODE CHARACTER GENERATOR FUNCTIONS (PS, EGA, VGA) ;~ 01A2:1640
cs=0x1a2;eip=0x001642; 	T(ax = 0x1200;);	// 4222                  mov     ax, 1200h ;~ 01A2:1642
cs=0x1a2;eip=0x001645; 	T(bl = 0x20;);	// 4223                  mov     bl, 20h ; ' ' ;~ 01A2:1645
cs=0x1a2;eip=0x001647; 	S(_INT(0x10));	// 4224                  int     10h             ; - VIDEO - ALTERNATE FUNCTION SELECT (PS,EGA,VGA,MCGA) - ALTERNATE PRTSC ;~ 01A2:1647
cs=0x1a2;eip=0x001649; 	T(ax = 0x1A00;);	// 4226                  mov     ax, 1A00h ;~ 01A2:1649
cs=0x1a2;eip=0x00164c; 	S(_INT(0x10));	// 4227                  int     10h             ; - VIDEO - DISPLAY COMBINATION (PS,VGA/MCGA): read display combination code ;~ 01A2:164C
cs=0x1a2;eip=0x00164e; 	T(CMP(al, 0x1A));	// 4228                  cmp     al, 1Ah ;~ 01A2:164E
cs=0x1a2;eip=0x001650; 	J(JZ(loc_1167c));	// 4229                  jz      short loc_1167C ;~ 01A2:1650
cs=0x1a2;eip=0x001652; 	X(OR(*(raddr(ds,0x87)), 1));	// 4230                  or      byte ptr ds:87h, 1 ;~ 01A2:1652
cs=0x1a2;eip=0x001657; 	T(ah = 1;);	// 4231                  mov     ah, 1 ;~ 01A2:1657
cs=0x1a2;eip=0x001659; 	T(cx = 0x600;);	// 4232                  mov     cx, 600h ;~ 01A2:1659
cs=0x1a2;eip=0x00165c; 	S(_INT(0x10));	// 4233                  int     10h             ; - VIDEO - SET CURSOR CHARACTERISTICS ;~ 01A2:165C
cs=0x1a2;eip=0x00165e; 	J(JMP(loc_1167c));	// 4237                  jmp     short loc_1167C ;~ 01A2:165E
loc_11660:
	// 4639 
cs=0x1a2;eip=0x001660; 	S(_INT(0x10));	// 4242                  int     10h             ; - VIDEO - ;~ 01A2:1660
cs=0x1a2;eip=0x001662; 	T(CMP(al, 2));	// 4243                  cmp     al, 2 ;~ 01A2:1662
cs=0x1a2;eip=0x001664; 	J(JZ(loc_1166a));	// 4244                  jz      short loc_1166A ;~ 01A2:1664
cs=0x1a2;eip=0x001666; 	T(CMP(al, 3));	// 4245                  cmp     al, 3 ;~ 01A2:1666
cs=0x1a2;eip=0x001668; 	J(JNZ(loc_1167c));	// 4246                  jnz     short loc_1167C ;~ 01A2:1668
loc_1166a:
	// 4640 
cs=0x1a2;eip=0x00166a; 	X(PUSH(ax));	// 4249                  push    ax ;~ 01A2:166A
cs=0x1a2;eip=0x00166b; 	J(CALL(sub_115e6,0));	// 4250                  call    sub_115E6 ;~ 01A2:166B
cs=0x1a2;eip=0x00166e; 	T(OR(al, al));	// 4251                  or      al, al ;~ 01A2:166E
cs=0x1a2;eip=0x001670; 	X(POP(ax));	// 4252                  pop     ax ;~ 01A2:1670
cs=0x1a2;eip=0x001671; 	J(JZ(loc_1167c));	// 4253                  jz      short loc_1167C ;~ 01A2:1671
cs=0x1a2;eip=0x001673; 	T(CMP(*(raddr(ds,0x84)), 0x18));	// 4254                  cmp     byte ptr ds:84h, 18h ;~ 01A2:1673
cs=0x1a2;eip=0x001678; 	J(JZ(loc_1167c));	// 4255                  jz      short loc_1167C ;~ 01A2:1678
cs=0x1a2;eip=0x00167a; 	T(al = 0x40;);	// 4256                  mov     al, 40h ; '@' ;~ 01A2:167A
loc_1167c:
	// 4641 
cs=0x1a2;eip=0x00167c; 	X(POP(ds));	// 4260                  pop     ds ;~ 01A2:167C
cs=0x1a2;eip=0x00167d; 	X(POP(bp));	// 4262                  pop     bp ;~ 01A2:167D
cs=0x1a2;eip=0x00167e; 	J(RETN(0));	// 4263                  retn ;~ 01A2:167E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____videoint: 	goto ____videoint;
        case m2c::kloc_11607: 	goto loc_11607;
        case m2c::kloc_1160b: 	goto loc_1160b;
        case m2c::kloc_11613: 	goto loc_11613;
        case m2c::kloc_11622: 	goto loc_11622;
        case m2c::kloc_1162c: 	goto loc_1162c;
        case m2c::kloc_11660: 	goto loc_11660;
        case m2c::kloc_1166a: 	goto loc_1166a;
        case m2c::kloc_1167c: 	goto loc_1167c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____c0crtinit(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____c0crtinit:
    _begin:
cs=0x1a2;eip=0x00167f; 	T(ah = 0x0F;);	// 4272                  mov     ah, 0Fh ;~ 01A2:167F
cs=0x1a2;eip=0x001681; 	J(CALL(____videoint,0));	// 4273                  call    ____VideoInt ;~ 01A2:1681
cs=0x1a2;eip=0x001684; 	X(PUSH(ax));	// 4274                  push    ax ;~ 01A2:1684
cs=0x1a2;eip=0x001685; 	J(CALL(____crtinit,0));	// 4275                  call    ____crtinit ;~ 01A2:1685
cs=0x1a2;eip=0x001688; 	X(POP(cx));	// 4277                  pop     cx ;~ 01A2:1688
cs=0x1a2;eip=0x001689; 	T(ah = 8;);	// 4278                  mov     ah, 8 ;~ 01A2:1689
cs=0x1a2;eip=0x00168b; 	T(bh = 0;);	// 4279                  mov     bh, 0 ;~ 01A2:168B
cs=0x1a2;eip=0x00168d; 	J(CALL(____videoint,0));	// 4280                  call    ____VideoInt ;~ 01A2:168D
cs=0x1a2;eip=0x001690; 	T(AND(ah, 0x7F));	// 4281                  and     ah, 7Fh ;~ 01A2:1690
cs=0x1a2;eip=0x001693; 	X(byte_19255 = ah;);	// 4282                  mov     byte_19255, ah ;~ 01A2:1693
cs=0x1a2;eip=0x001697; 	X(byte_19254 = ah;);	// 4283                  mov     byte_19254, ah ;~ 01A2:1697
cs=0x1a2;eip=0x00169b; 	J(RETN(0));	// 4284                  retn ;~ 01A2:169B

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____c0crtinit: 	goto ____c0crtinit;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____crtinit(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____crtinit:
    _begin:
#undef arg_0
#define arg_0 4
	// 4295 arg_0           = byte ptr  4 ;~ 01A2:169C
cs=0x1a2;eip=0x00169c; 	X(PUSH(bp));	// 4297                  push    bp ;~ 01A2:169C
cs=0x1a2;eip=0x00169d; 	T(bp = sp;);	// 4298                  mov     bp, sp ;~ 01A2:169D
cs=0x1a2;eip=0x00169f; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 4299                  mov     al, [bp+arg_0] ;~ 01A2:169F
cs=0x1a2;eip=0x0016a2; 	X(byte_19256 = al;);	// 4300                  mov     byte_19256, al ;~ 01A2:16A2
cs=0x1a2;eip=0x0016a5; 	T(ah = 0x0F;);	// 4301                  mov     ah, 0Fh ;~ 01A2:16A5
cs=0x1a2;eip=0x0016a7; 	J(CALL(____videoint,0));	// 4302                  call    ____VideoInt ;~ 01A2:16A7
cs=0x1a2;eip=0x0016aa; 	X(byte_19258 = ah;);	// 4303                  mov     byte_19258, ah ;~ 01A2:16AA
cs=0x1a2;eip=0x0016ae; 	T(CMP(al, byte_19256));	// 4304                  cmp     al, byte_19256 ;~ 01A2:16AE
cs=0x1a2;eip=0x0016b2; 	J(JZ(loc_116c8));	// 4305                  jz      short loc_116C8 ;~ 01A2:16B2
cs=0x1a2;eip=0x0016b4; 	T(al = byte_19256;);	// 4306                  mov     al, byte_19256 ;~ 01A2:16B4
cs=0x1a2;eip=0x0016b7; 	T(ah = 0;);	// 4307                  mov     ah, 0 ;~ 01A2:16B7
cs=0x1a2;eip=0x0016b9; 	J(CALL(____videoint,0));	// 4308                  call    ____VideoInt ;~ 01A2:16B9
cs=0x1a2;eip=0x0016bc; 	T(ah = 0x0F;);	// 4309                  mov     ah, 0Fh ;~ 01A2:16BC
cs=0x1a2;eip=0x0016be; 	J(CALL(____videoint,0));	// 4310                  call    ____VideoInt ;~ 01A2:16BE
cs=0x1a2;eip=0x0016c1; 	X(byte_19256 = al;);	// 4311                  mov     byte_19256, al ;~ 01A2:16C1
cs=0x1a2;eip=0x0016c4; 	X(byte_19258 = ah;);	// 4312                  mov     byte_19258, ah ;~ 01A2:16C4
loc_116c8:
	// 4642 
cs=0x1a2;eip=0x0016c8; 	T(CMP(byte_19256, 3));	// 4315                  cmp     byte_19256, 3 ;~ 01A2:16C8
cs=0x1a2;eip=0x0016cd; 	J(JBE(loc_116e2));	// 4316                  jbe     short loc_116E2 ;~ 01A2:16CD
cs=0x1a2;eip=0x0016cf; 	T(CMP(byte_19256, 0x40));	// 4317                  cmp     byte_19256, 40h ; '@' ;~ 01A2:16CF
cs=0x1a2;eip=0x0016d4; 	J(JNC(loc_116e2));	// 4318                  jnb     short loc_116E2 ;~ 01A2:16D4
cs=0x1a2;eip=0x0016d6; 	T(CMP(byte_19256, 7));	// 4319                  cmp     byte_19256, 7 ;~ 01A2:16D6
cs=0x1a2;eip=0x0016db; 	J(JZ(loc_116e2));	// 4320                  jz      short loc_116E2 ;~ 01A2:16DB
cs=0x1a2;eip=0x0016dd; 	T(ax = 1;);	// 4321                  mov     ax, 1 ;~ 01A2:16DD
cs=0x1a2;eip=0x0016e0; 	J(JMP(loc_116e4));	// 4322                  jmp     short loc_116E4 ;~ 01A2:16E0
loc_116e2:
	// 4643 
cs=0x1a2;eip=0x0016e2; 	T(XOR(ax, ax));	// 4327                  xor     ax, ax ;~ 01A2:16E2
loc_116e4:
	// 4644 
cs=0x1a2;eip=0x0016e4; 	X(byte_19259 = al;);	// 4330                  mov     byte_19259, al ;~ 01A2:16E4
cs=0x1a2;eip=0x0016e7; 	T(CMP(byte_19256, 0x40));	// 4331                  cmp     byte_19256, 40h ; '@' ;~ 01A2:16E7
cs=0x1a2;eip=0x0016ec; 	J(JZ(loc_116f2));	// 4332                  jz      short loc_116F2 ;~ 01A2:16EC
cs=0x1a2;eip=0x0016ee; 	T(al = 0x19;);	// 4333                  mov     al, 19h ;~ 01A2:16EE
cs=0x1a2;eip=0x0016f0; 	J(JMP(loc_116fd));	// 4334                  jmp     short loc_116FD ;~ 01A2:16F0
loc_116f2:
	// 4645 
cs=0x1a2;eip=0x0016f2; 	T(ax = 0x40;);	// 4338                  mov     ax, 40h ; '@' ;~ 01A2:16F2
cs=0x1a2;eip=0x0016f5; 	T(es = ax;);	// 4339                  mov     es, ax ;~ 01A2:16F5
cs=0x1a2;eip=0x0016f7; 	T(MOV(al, *(raddr(es,0x84))));	// 4341                  mov     al, es:84h ;~ 01A2:16F7
cs=0x1a2;eip=0x0016fb; 	T(INC(al));	// 4342                  inc     al ;~ 01A2:16FB
loc_116fd:
	// 4646 
cs=0x1a2;eip=0x0016fd; 	X(byte_19257 = al;);	// 4346                  mov     byte_19257, al ;~ 01A2:16FD
cs=0x1a2;eip=0x001700; 	T(CMP(byte_19256, 7));	// 4347                  cmp     byte_19256, 7 ;~ 01A2:1700
cs=0x1a2;eip=0x001705; 	J(JZ(loc_11727));	// 4348                  jz      short loc_11727 ;~ 01A2:1705
cs=0x1a2;eip=0x001707; 	T(ax = 0x0F000;);	// 4349                  mov     ax, 0F000h ;~ 01A2:1707
cs=0x1a2;eip=0x00170a; 	T(dx = 0x0FFEA;);	// 4350                  mov     dx, 0FFEAh ;~ 01A2:170A
cs=0x1a2;eip=0x00170d; 	X(PUSH(ax));	// 4351                  push    ax ;~ 01A2:170D
cs=0x1a2;eip=0x00170e; 	X(PUSH(dx));	// 4352                  push    dx ;~ 01A2:170E
cs=0x1a2;eip=0x00170f; 	X(PUSH(ds));	// 4353                  push    ds ;~ 01A2:170F
cs=0x1a2;eip=0x001710; 	T(ax = 0x981;);	// 4354                  mov     ax, 981h ;~ 01A2:1710
cs=0x1a2;eip=0x001713; 	X(PUSH(ax));	// 4355                  push    ax ;~ 01A2:1713
cs=0x1a2;eip=0x001714; 	J(CALL(sub_115b9,0));	// 4356                  call    sub_115B9 ;~ 01A2:1714
cs=0x1a2;eip=0x001717; 	T(OR(ax, ax));	// 4358                  or      ax, ax ;~ 01A2:1717
cs=0x1a2;eip=0x001719; 	J(JNZ(loc_11727));	// 4359                  jnz     short loc_11727 ;~ 01A2:1719
cs=0x1a2;eip=0x00171b; 	J(CALL(sub_115e6,0));	// 4360                  call    sub_115E6 ;~ 01A2:171B
cs=0x1a2;eip=0x00171e; 	T(OR(ax, ax));	// 4361                  or      ax, ax ;~ 01A2:171E
cs=0x1a2;eip=0x001720; 	J(JNZ(loc_11727));	// 4362                  jnz     short loc_11727 ;~ 01A2:1720
cs=0x1a2;eip=0x001722; 	T(ax = 1;);	// 4363                  mov     ax, 1 ;~ 01A2:1722
cs=0x1a2;eip=0x001725; 	J(JMP(loc_11729));	// 4364                  jmp     short loc_11729 ;~ 01A2:1725
loc_11727:
	// 4647 
cs=0x1a2;eip=0x001727; 	T(XOR(ax, ax));	// 4369                  xor     ax, ax ;~ 01A2:1727
loc_11729:
	// 4648 
cs=0x1a2;eip=0x001729; 	X(byte_1925a = al;);	// 4372                  mov     byte_1925A, al ;~ 01A2:1729
cs=0x1a2;eip=0x00172c; 	T(CMP(byte_19256, 7));	// 4373                  cmp     byte_19256, 7 ;~ 01A2:172C
cs=0x1a2;eip=0x001731; 	J(JNZ(loc_11738));	// 4374                  jnz     short loc_11738 ;~ 01A2:1731
cs=0x1a2;eip=0x001733; 	T(ax = 0x0B000;);	// 4375                  mov     ax, 0B000h ;~ 01A2:1733
cs=0x1a2;eip=0x001736; 	J(JMP(loc_1173b));	// 4376                  jmp     short loc_1173B ;~ 01A2:1736
loc_11738:
	// 4649 
cs=0x1a2;eip=0x001738; 	T(ax = 0x0B800;);	// 4380                  mov     ax, 0B800h ;~ 01A2:1738
loc_1173b:
	// 4650 
cs=0x1a2;eip=0x00173b; 	X(word_1925d = ax;);	// 4383                  mov     word_1925D, ax ;~ 01A2:173B
cs=0x1a2;eip=0x00173e; 	X(word_1925b = 0;);	// 4384                  mov     word_1925B, 0 ;~ 01A2:173E
cs=0x1a2;eip=0x001744; 	T(al = 0;);	// 4385                  mov     al, 0 ;~ 01A2:1744
cs=0x1a2;eip=0x001746; 	X(byte_19251 = al;);	// 4386                  mov     byte_19251, al ;~ 01A2:1746
cs=0x1a2;eip=0x001749; 	X(byte_19250 = al;);	// 4387                  mov     byte_19250, al ;~ 01A2:1749
cs=0x1a2;eip=0x00174c; 	T(al = byte_19258;);	// 4388                  mov     al, byte_19258 ;~ 01A2:174C
cs=0x1a2;eip=0x00174f; 	T(ADD(al, 0x0FF));	// 4389                  add     al, 0FFh ;~ 01A2:174F
cs=0x1a2;eip=0x001751; 	X(byte_19252 = al;);	// 4390                  mov     byte_19252, al ;~ 01A2:1751
cs=0x1a2;eip=0x001754; 	T(al = byte_19257;);	// 4391                  mov     al, byte_19257 ;~ 01A2:1754
cs=0x1a2;eip=0x001757; 	T(ADD(al, 0x0FF));	// 4392                  add     al, 0FFh ;~ 01A2:1757
cs=0x1a2;eip=0x001759; 	X(byte_19253 = al;);	// 4393                  mov     byte_19253, al ;~ 01A2:1759
cs=0x1a2;eip=0x00175c; 	X(POP(bp));	// 4394                  pop     bp ;~ 01A2:175C
cs=0x1a2;eip=0x00175d; 	J(RETN(0));	// 4395                  retn ;~ 01A2:175D

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____crtinit: 	goto ____crtinit;
        case m2c::kloc_116c8: 	goto loc_116c8;
        case m2c::kloc_116e2: 	goto loc_116e2;
        case m2c::kloc_116e4: 	goto loc_116e4;
        case m2c::kloc_116f2: 	goto loc_116f2;
        case m2c::kloc_116fd: 	goto loc_116fd;
        case m2c::kloc_11727: 	goto loc_11727;
        case m2c::kloc_11729: 	goto loc_11729;
        case m2c::kloc_11738: 	goto loc_11738;
        case m2c::kloc_1173b: 	goto loc_1173b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool __unknown_libname_1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    __unknown_libname_1:
    _begin:
cs=0x1a2;eip=0x00175e; 	T(dx = 0x988;);	// 4408                  mov     dx, 988h ;~ 01A2:175E
cs=0x1a2;eip=0x001761; 	J(JMP(loc_11766));	// 4409                  jmp     short loc_11766 ;~ 01A2:1761
ret_1a2_1763:
	// 4651 
cs=0x1a2;eip=0x001763; 	T(dx = 0x98D;);	// 4411                  mov     dx, 98Dh ;~ 01A2:1763
loc_11766:
	// 4652 
cs=0x1a2;eip=0x001766; 	T(cx = 5;);	// 4414                  mov     cx, 5 ;~ 01A2:1766
cs=0x1a2;eip=0x001769; 	T(ah = 0x40;);	// 4415                  mov     ah, 40h ; '@' ;~ 01A2:1769
cs=0x1a2;eip=0x00176b; 	T(bx = 2;);	// 4416                  mov     bx, 2 ;~ 01A2:176B
cs=0x1a2;eip=0x00176e; 	S(_INT(0x21));	// 4417                  int     21h             ; DOS - 2+ - WRITE TO FILE WITH HANDLE ;~ 01A2:176E
cs=0x1a2;eip=0x001770; 	T(cx = 0x27;);	// 4419                  mov     cx, 27h ; ''' ;~ 01A2:1770
cs=0x1a2;eip=0x001773; 	T(dx = 0x992;);	// 4420                  mov     dx, 992h ;~ 01A2:1773
cs=0x1a2;eip=0x001776; 	T(ah = 0x40;);	// 4421                  mov     ah, 40h ;~ 01A2:1776
cs=0x1a2;eip=0x001778; 	S(_INT(0x21));	// 4422                  int     21h             ; DOS - 2+ - WRITE TO FILE WITH HANDLE ;~ 01A2:1778
cs=0x1a2;eip=0x00177a; 	J(return _group2(m2c::k___abort, _state););	// 4424                  jmp     ___abort ;~ 01A2:177A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k__unknown_libname_1: 	goto __unknown_libname_1;
        case m2c::kloc_11766: 	goto loc_11766;
        case m2c::kret_1a2_1763: 	goto ret_1a2_1763;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____exec(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____exec:
    _begin:
#undef var_c
#define var_c -0x0C
	// 4796 var_C           = word ptr -0Ch ;~ 01A2:18E4
#undef var_a
#define var_a -0x0A
	// 4797 var_A           = dword ptr -0Ah ;~ 01A2:18E4
#undef var_6
#define var_6 -6
	// 4798 var_6           = word ptr -6 ;~ 01A2:18E4
#undef var_4
#define var_4 -4
	// 4799 var_4           = word ptr -4 ;~ 01A2:18E4
#undef var_2
#define var_2 -2
	// 4800 var_2           = word ptr -2 ;~ 01A2:18E4
#undef arg_0
#define arg_0 4
	// 4801 arg_0           = dword ptr  4 ;~ 01A2:18E4
#undef arg_4
#define arg_4 8
	// 4802 arg_4           = dword ptr  8 ;~ 01A2:18E4
#undef arg_8
#define arg_8 0x0C
	// 4803 arg_8           = word ptr  0Ch ;~ 01A2:18E4
#undef arg_a
#define arg_a 0x0E
	// 4804 arg_A           = word ptr  0Eh ;~ 01A2:18E4
cs=0x1a2;eip=0x0018e4; 	X(PUSH(bp));	// 4806                  push    bp ;~ 01A2:18E4
cs=0x1a2;eip=0x0018e5; 	T(bp = sp;);	// 4807                  mov     bp, sp ;~ 01A2:18E5
cs=0x1a2;eip=0x0018e7; 	T(SUB(sp, 0x0C));	// 4808                  sub     sp, 0Ch ;~ 01A2:18E7
cs=0x1a2;eip=0x0018ea; 	T(CLD);	// 4809                  cld ;~ 01A2:18EA
cs=0x1a2;eip=0x0018eb; 	X(PUSH(si));	// 4810                  push    si ;~ 01A2:18EB
cs=0x1a2;eip=0x0018ec; 	X(PUSH(ds));	// 4811                  push    ds ;~ 01A2:18EC
cs=0x1a2;eip=0x0018ed; 	X(PUSH(di));	// 4812                  push    di ;~ 01A2:18ED
cs=0x1a2;eip=0x0018ee; 	X(PUSH(es));	// 4813                  push    es ;~ 01A2:18EE
cs=0x1a2;eip=0x0018ef; 	T(ax = word_18957;);	// 4814                  mov     ax, word_18957 ;~ 01A2:18EF
cs=0x1a2;eip=0x0018f2; 	X(*(dw*)(&byte_118e1) = ax;);	// 4815                  mov     word ptr cs:byte_118E1, ax ;~ 01A2:18F2
cs=0x1a2;eip=0x0018f6; 	T(ax = 0x3D00;);	// 4816                  mov     ax, 3D00h ;~ 01A2:18F6
cs=0x1a2;eip=0x0018f9; 	X(PUSH(ds));	// 4817                  push    ds ;~ 01A2:18F9
cs=0x1a2;eip=0x0018fa; 	T(LDS(dx, *(dd*)(raddr(ss,bp+arg_0))));	// 4818                  lds     dx, [bp+arg_0] ;~ 01A2:18FA
cs=0x1a2;eip=0x0018fd; 	S(_INT(0x21));	// 4819                  int     21h             ; DOS - 2+ - OPEN DISK FILE WITH HANDLE ;~ 01A2:18FD
cs=0x1a2;eip=0x0018ff; 	X(POP(ds));	// 4823                  pop     ds ;~ 01A2:18FF
cs=0x1a2;eip=0x001900; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 4824                  mov     [bp+var_2], ax ;~ 01A2:1900
cs=0x1a2;eip=0x001903; 	J(JNC(loc_11908));	// 4825                  jnb     short loc_11908 ;~ 01A2:1903
cs=0x1a2;eip=0x001905; 	J(JMP(loc_11b07));	// 4826                  jmp     loc_11B07 ;~ 01A2:1905
loc_11908:
	// 4653 
cs=0x1a2;eip=0x001908; 	T(es = __segx;);	// 4830                  mov     es, __segx ;~ 01A2:1908
cs=0x1a2;eip=0x00190c; 	X(*(dw*)(&byte_1180c) = es;);	// 4832                  mov     word ptr cs:byte_1180C, es ;~ 01A2:190C
cs=0x1a2;eip=0x001911; 	T(MOV(ax, *(dw*)(raddr(es,0x2C))));	// 4833                  mov     ax, es:2Ch ;~ 01A2:1911
cs=0x1a2;eip=0x001915; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 4834                  mov     [bp+var_C], ax ;~ 01A2:1915
cs=0x1a2;eip=0x001918; 	T(di = 0x80;);	// 4835                  mov     di, 80h ; '
cs=0x1a2;eip=0x00191b; 	X(PUSH(ds));	// 4836                  push    ds ;~ 01A2:191B
cs=0x1a2;eip=0x00191c; 	T(LDS(si, *(dd*)(raddr(ss,bp+arg_4))));	// 4837                  lds     si, [bp+arg_4] ;~ 01A2:191C
cs=0x1a2;eip=0x00191f; 	T(LODSB);	// 4838                  lodsb ;~ 01A2:191F
cs=0x1a2;eip=0x001920; 	T(dx = si;);	// 4839                  mov     dx, si ;~ 01A2:1920
cs=0x1a2;eip=0x001922; 	X(STOSB);	// 4840                  stosb ;~ 01A2:1922
cs=0x1a2;eip=0x001923; 	T(XOR(cx, cx));	// 4841                  xor     cx, cx ;~ 01A2:1923
cs=0x1a2;eip=0x001925; 	T(cl = al;);	// 4842                  mov     cl, al ;~ 01A2:1925
cs=0x1a2;eip=0x001927; 	T(INC(cx));	// 4843                  inc     cx ;~ 01A2:1927
	// 4844                  rep movsb ;~ 01A2:1928
cs=0x1a2;eip=0x001928; 	X(	REP MOVSB);	// 4844                  rep movsb ;~ 01A2:1928
cs=0x1a2;eip=0x00192a; 	T(ax = 0x2901;);	// 4845                  mov     ax, 2901h ;~ 01A2:192A
cs=0x1a2;eip=0x00192d; 	T(si = dx;);	// 4846                  mov     si, dx ;~ 01A2:192D
cs=0x1a2;eip=0x00192f; 	T(di = 0x5C;);	// 4847                  mov     di, 5Ch ; '\' ;~ 01A2:192F
cs=0x1a2;eip=0x001932; 	S(_INT(0x21));	// 4848                  int     21h             ; DOS - PARSE FILENAME ;~ 01A2:1932
cs=0x1a2;eip=0x001934; 	X(byte_1185e = al;);	// 4852                  mov     cs:byte_1185E, al ;~ 01A2:1934
loc_11938:
	// 4654 
cs=0x1a2;eip=0x001938; 	T(MOV(al, *(raddr(ds,si))));	// 4855                  mov     al, [si] ;~ 01A2:1938
cs=0x1a2;eip=0x00193a; 	T(CMP(al, 0x20));	// 4856                  cmp     al, 20h ; ' ' ;~ 01A2:193A
cs=0x1a2;eip=0x00193c; 	J(JZ(loc_11949));	// 4857                  jz      short loc_11949 ;~ 01A2:193C
cs=0x1a2;eip=0x00193e; 	T(CMP(al, 9));	// 4858                  cmp     al, 9 ;~ 01A2:193E
cs=0x1a2;eip=0x001940; 	J(JZ(loc_11949));	// 4859                  jz      short loc_11949 ;~ 01A2:1940
cs=0x1a2;eip=0x001942; 	T(CMP(al, 0x0D));	// 4860                  cmp     al, 0Dh ;~ 01A2:1942
cs=0x1a2;eip=0x001944; 	J(JZ(loc_11949));	// 4861                  jz      short loc_11949 ;~ 01A2:1944
cs=0x1a2;eip=0x001946; 	T(INC(si));	// 4862                  inc     si ;~ 01A2:1946
cs=0x1a2;eip=0x001947; 	J(JMP(loc_11938));	// 4863                  jmp     short loc_11938 ;~ 01A2:1947
loc_11949:
	// 4655 
cs=0x1a2;eip=0x001949; 	T(ax = 0x2901;);	// 4868                  mov     ax, 2901h ;~ 01A2:1949
cs=0x1a2;eip=0x00194c; 	T(di = 0x6C;);	// 4869                  mov     di, 6Ch ; 'l' ;~ 01A2:194C
cs=0x1a2;eip=0x00194f; 	S(_INT(0x21));	// 4870                  int     21h             ; DOS - PARSE FILENAME ;~ 01A2:194F
cs=0x1a2;eip=0x001951; 	X(byte_1185f = al;);	// 4874                  mov     cs:byte_1185F, al ;~ 01A2:1951
cs=0x1a2;eip=0x001955; 	X(POP(ds));	// 4875                  pop     ds ;~ 01A2:1955
cs=0x1a2;eip=0x001956; 	T(ah = 0x4A;);	// 4876                  mov     ah, 4Ah ; 'J' ;~ 01A2:1956
cs=0x1a2;eip=0x001958; 	T(bx = 0x0FFFF;);	// 4877                  mov     bx, 0FFFFh ;~ 01A2:1958
cs=0x1a2;eip=0x00195b; 	S(_INT(0x21));	// 4878                  int     21h             ; DOS - 2+ - ADJUST MEMORY BLOCK SIZE (SETBLOCK) ;~ 01A2:195B
cs=0x1a2;eip=0x00195d; 	T(CMP(*(db*)(&word_1895d), 3));	// 4881                  cmp     byte ptr word_1895D, 3 ;~ 01A2:195D
cs=0x1a2;eip=0x001962; 	J(JNC(loc_11968));	// 4882                  jnb     short loc_11968 ;~ 01A2:1962
cs=0x1a2;eip=0x001964; 	T(SUB(bx, 0x280));	// 4883                  sub     bx, 280h ;~ 01A2:1964
loc_11968:
	// 4656 
cs=0x1a2;eip=0x001968; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), bx));	// 4886                  mov     [bp+var_4], bx ;~ 01A2:1968
cs=0x1a2;eip=0x00196b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 4887                  mov     ax, [bp+arg_8] ;~ 01A2:196B
cs=0x1a2;eip=0x00196e; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_a))));	// 4888                  mov     dx, [bp+arg_A] ;~ 01A2:196E
cs=0x1a2;eip=0x001971; 	T(bx = ax;);	// 4889                  mov     bx, ax ;~ 01A2:1971
cs=0x1a2;eip=0x001973; 	T(OR(bx, dx));	// 4890                  or      bx, dx ;~ 01A2:1973
cs=0x1a2;eip=0x001975; 	J(JNZ(loc_1197d));	// 4891                  jnz     short loc_1197D ;~ 01A2:1975
cs=0x1a2;eip=0x001977; 	T(XOR(ax, ax));	// 4892                  xor     ax, ax ;~ 01A2:1977
cs=0x1a2;eip=0x001979; 	T(di = ax;);	// 4893                  mov     di, ax ;~ 01A2:1979
cs=0x1a2;eip=0x00197b; 	J(JMP(loc_1199a));	// 4894                  jmp     short loc_1199A ;~ 01A2:197B
loc_1197d:
	// 4657 
cs=0x1a2;eip=0x00197d; 	T(es = dx;);	// 4898                  mov     es, dx ;~ 01A2:197D
cs=0x1a2;eip=0x00197f; 	T(di = ax;);	// 4899                  mov     di, ax ;~ 01A2:197F
cs=0x1a2;eip=0x001981; 	X(PUSH(di));	// 4900                  push    di ;~ 01A2:1981
cs=0x1a2;eip=0x001982; 	T(cx = 0x0FFFF;);	// 4901                  mov     cx, 0FFFFh ;~ 01A2:1982
cs=0x1a2;eip=0x001985; 	T(XOR(ax, ax));	// 4902                  xor     ax, ax ;~ 01A2:1985
loc_11987:
	// 4658 
	// 4905                  repne scasb ;~ 01A2:1987
cs=0x1a2;eip=0x001987; 	T(	REPNE SCASB);	// 4905                  repne scasb ;~ 01A2:1987
cs=0x1a2;eip=0x001989; 	T(CMP(*(raddr(es,di)), al));	// 4906                  cmp     es:[di], al ;~ 01A2:1989
cs=0x1a2;eip=0x00198c; 	J(JNZ(loc_11987));	// 4907                  jnz     short loc_11987 ;~ 01A2:198C
cs=0x1a2;eip=0x00198e; 	T(DEC(cx));	// 4908                  dec     cx ;~ 01A2:198E
cs=0x1a2;eip=0x00198f; 	T(ADD(di, 3));	// 4909                  add     di, 3 ;~ 01A2:198F
	// 4910                  repne scasb ;~ 01A2:1992
cs=0x1a2;eip=0x001992; 	T(	REPNE SCASB);	// 4910                  repne scasb ;~ 01A2:1992
cs=0x1a2;eip=0x001994; 	T(DEC(cx));	// 4911                  dec     cx ;~ 01A2:1994
cs=0x1a2;eip=0x001995; 	T(ax = cx;);	// 4912                  mov     ax, cx ;~ 01A2:1995
cs=0x1a2;eip=0x001997; 	T(NEG(ax));	// 4913                  neg     ax ;~ 01A2:1997
cs=0x1a2;eip=0x001999; 	X(POP(di));	// 4914                  pop     di ;~ 01A2:1999
loc_1199a:
	// 4659 
cs=0x1a2;eip=0x00199a; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), di));	// 4917                  mov     word ptr [bp+var_A], di ;~ 01A2:199A
cs=0x1a2;eip=0x00199d; 	X(MOV(*(dw*)(raddr(ss,bp+var_a+2)), es));	// 4918                  mov     word ptr [bp+var_A+2], es ;~ 01A2:199D
cs=0x1a2;eip=0x0019a0; 	T(ADD(ax, 0x0F));	// 4919                  add     ax, 0Fh ;~ 01A2:19A0
cs=0x1a2;eip=0x0019a3; 	T(cx = 4;);	// 4920                  mov     cx, 4 ;~ 01A2:19A3
cs=0x1a2;eip=0x0019a6; 	T(SHR(ax, cl));	// 4921                  shr     ax, cl ;~ 01A2:19A6
cs=0x1a2;eip=0x0019a8; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 4922                  mov     [bp+var_6], ax ;~ 01A2:19A8
cs=0x1a2;eip=0x0019ab; 	T(si = word_18957;);	// 4923                  mov     si, word_18957 ;~ 01A2:19AB
cs=0x1a2;eip=0x0019af; 	T(DEC(si));	// 4924                  dec     si ;~ 01A2:19AF
cs=0x1a2;eip=0x0019b0; 	T(es = si;);	// 4925                  mov     es, si ;~ 01A2:19B0
cs=0x1a2;eip=0x0019b2; 	T(CMP(ax, *(dw*)(raddr(es,3))));	// 4926                  cmp     ax, es:3 ;~ 01A2:19B2
cs=0x1a2;eip=0x0019b7; 	J(JBE(loc_119c2));	// 4927                  jbe     short loc_119C2 ;~ 01A2:19B7
cs=0x1a2;eip=0x0019b9; 	X(DEC(byte_118e3));	// 4928                  dec     cs:byte_118E3 ;~ 01A2:19B9
cs=0x1a2;eip=0x0019be; 	T(INC(ax));	// 4929                  inc     ax ;~ 01A2:19BE
cs=0x1a2;eip=0x0019bf; 	X(SUB(*(dw*)(raddr(ss,bp+var_4)), ax));	// 4930                  sub     [bp+var_4], ax ;~ 01A2:19BF
loc_119c2:
	// 4660 
cs=0x1a2;eip=0x0019c2; 	T(LDS(si, *(dd*)(raddr(ss,bp+arg_0))));	// 4933                  lds     si, [bp+arg_0] ;~ 01A2:19C2
cs=0x1a2;eip=0x0019c5; 	X(PUSH(cs));	// 4934                  push    cs ;~ 01A2:19C5
cs=0x1a2;eip=0x0019c6; 	X(POP(es));	// 4935                  pop     es ;~ 01A2:19C6
cs=0x1a2;eip=0x0019c7; 	T(di = 0x180E;);	// 4937                  mov     di, 180Eh ;~ 01A2:19C7
loc_119ca:
	// 4661 
cs=0x1a2;eip=0x0019ca; 	T(LODSB);	// 4940                  lodsb ;~ 01A2:19CA
cs=0x1a2;eip=0x0019cb; 	X(STOSB);	// 4941                  stosb ;~ 01A2:19CB
cs=0x1a2;eip=0x0019cc; 	T(OR(al, al));	// 4942                  or      al, al ;~ 01A2:19CC
cs=0x1a2;eip=0x0019ce; 	J(JNZ(loc_119ca));	// 4943                  jnz     short loc_119CA ;~ 01A2:19CE
cs=0x1a2;eip=0x0019d0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 4944                  mov     bx, [bp+var_2] ;~ 01A2:19D0
cs=0x1a2;eip=0x0019d3; 	T(MOV(ax, *(dw*)(raddr(ds,si-5))));	// 4945                  mov     ax, [si-5] ;~ 01A2:19D3
cs=0x1a2;eip=0x0019d6; 	T(OR(ah, 0x20));	// 4946                  or      ah, 20h ;~ 01A2:19D6
cs=0x1a2;eip=0x0019d9; 	X(PUSH(cs));	// 4947                  push    cs ;~ 01A2:19D9
cs=0x1a2;eip=0x0019da; 	X(POP(ds));	// 4948                  pop     ds ;~ 01A2:19DA
cs=0x1a2;eip=0x0019db; 	T(di = 0x177D;);	// 4950                  mov     di, 177Dh ;~ 01A2:19DB
cs=0x1a2;eip=0x0019de; 	T(CMP(ax, 0x632E));	// 4951                  cmp     ax, 632Eh ;~ 01A2:19DE
cs=0x1a2;eip=0x0019e1; 	J(JNZ(loc_119f1));	// 4952                  jnz     short loc_119F1 ;~ 01A2:19E1
cs=0x1a2;eip=0x0019e3; 	J(JMP(loc_11a45));	// 4953                  jmp     short loc_11A45 ;~ 01A2:19E3
loc_119e5:
	// 4662 
cs=0x1a2;eip=0x0019e5; 	X(PUSH(ax));	// 4958                  push    ax ;~ 01A2:19E5
cs=0x1a2;eip=0x0019e6; 	T(ah = 0x3E;);	// 4959                  mov     ah, 3Eh ; '>' ;~ 01A2:19E6
cs=0x1a2;eip=0x0019e8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 4960                  mov     bx, [bp+var_2] ;~ 01A2:19E8
cs=0x1a2;eip=0x0019eb; 	S(_INT(0x21));	// 4961                  int     21h             ; DOS - 2+ - CLOSE A FILE WITH HANDLE ;~ 01A2:19EB
cs=0x1a2;eip=0x0019ed; 	X(POP(ax));	// 4963                  pop     ax ;~ 01A2:19ED
cs=0x1a2;eip=0x0019ee; 	J(JMP(loc_11b07));	// 4964                  jmp     loc_11B07 ;~ 01A2:19EE
loc_119f1:
	// 4663 
cs=0x1a2;eip=0x0019f1; 	T(ah = 0x3F;);	// 4968                  mov     ah, 3Fh ; '?' ;~ 01A2:19F1
cs=0x1a2;eip=0x0019f3; 	T(cx = 0x18;);	// 4969                  mov     cx, 18h ;~ 01A2:19F3
cs=0x1a2;eip=0x0019f6; 	T(dx = di+0x0E3);	// 4970                  lea     dx, [di+0E3h] ;~ 01A2:19F6
cs=0x1a2;eip=0x0019fa; 	S(_INT(0x21));	// 4971                  int     21h             ; DOS - 2+ - READ FROM FILE WITH HANDLE ;~ 01A2:19FA
cs=0x1a2;eip=0x0019fc; 	J(JC(loc_119e5));	// 4974                  jb      short loc_119E5 ;~ 01A2:19FC
cs=0x1a2;eip=0x0019fe; 	T(CMP(*(dw*)(raddr(ds,di+0x0E3)), 0x5A4D));	// 4975                  cmp     word ptr [di+0E3h], 5A4Dh ;~ 01A2:19FE
cs=0x1a2;eip=0x001a04; 	T(ax = 0x0B;);	// 4976                  mov     ax, 0Bh ;~ 01A2:1A04
cs=0x1a2;eip=0x001a07; 	J(JNZ(loc_119e5));	// 4977                  jnz     short loc_119E5 ;~ 01A2:1A07
cs=0x1a2;eip=0x001a09; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x0E7))));	// 4978                  mov     ax, [di+0E7h] ;~ 01A2:1A09
cs=0x1a2;eip=0x001a0d; 	T(XOR(dx, dx));	// 4979                  xor     dx, dx ;~ 01A2:1A0D
cs=0x1a2;eip=0x001a0f; 	T(dl = ah;);	// 4980                  mov     dl, ah ;~ 01A2:1A0F
cs=0x1a2;eip=0x001a11; 	T(ah = al;);	// 4981                  mov     ah, al ;~ 01A2:1A11
cs=0x1a2;eip=0x001a13; 	T(XOR(al, al));	// 4982                  xor     al, al ;~ 01A2:1A13
cs=0x1a2;eip=0x001a15; 	T(SHL(ax, 1));	// 4983                  shl     ax, 1 ;~ 01A2:1A15
cs=0x1a2;eip=0x001a17; 	T(RCL(dx, 1));	// 4984                  rcl     dx, 1 ;~ 01A2:1A17
cs=0x1a2;eip=0x001a19; 	T(ADD(ax, *(dw*)(raddr(ds,di+0x0E5))));	// 4985                  add     ax, [di+0E5h] ;~ 01A2:1A19
cs=0x1a2;eip=0x001a1d; 	T(ADC(dx, 0));	// 4986                  adc     dx, 0 ;~ 01A2:1A1D
cs=0x1a2;eip=0x001a20; 	T(cx = 4;);	// 4987                  mov     cx, 4 ;~ 01A2:1A20
loc_11a23:
	// 4664 
cs=0x1a2;eip=0x001a23; 	T(SHR(dx, 1));	// 4990                  shr     dx, 1 ;~ 01A2:1A23
cs=0x1a2;eip=0x001a25; 	T(RCR(ax, 1));	// 4991                  rcr     ax, 1 ;~ 01A2:1A25
cs=0x1a2;eip=0x001a27; 	J(LOOP(loc_11a23));	// 4992                  loop    loc_11A23 ;~ 01A2:1A27
cs=0x1a2;eip=0x001a29; 	T(INC(ax));	// 4993                  inc     ax ;~ 01A2:1A29
cs=0x1a2;eip=0x001a2a; 	T(SUB(ax, *(dw*)(raddr(ds,di+0x0EB))));	// 4994                  sub     ax, [di+0EBh] ;~ 01A2:1A2A
cs=0x1a2;eip=0x001a2e; 	T(ADD(ax, *(dw*)(raddr(ds,di+0x0ED))));	// 4995                  add     ax, [di+0EDh] ;~ 01A2:1A2E
cs=0x1a2;eip=0x001a32; 	T(XCHG(ax, bx));	// 4996                  xchg    ax, bx ;~ 01A2:1A32
cs=0x1a2;eip=0x001a33; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x8F))));	// 4997                  mov     ax, [di+8Fh] ;~ 01A2:1A33
cs=0x1a2;eip=0x001a37; 	T(ADD(ax, 0x10));	// 4998                  add     ax, 10h ;~ 01A2:1A37
cs=0x1a2;eip=0x001a3a; 	X(ADD(*(dw*)(raddr(ds,di+0x0F9)), ax));	// 4999                  add     [di+0F9h], ax ;~ 01A2:1A3A
cs=0x1a2;eip=0x001a3e; 	X(ADD(*(dw*)(raddr(ds,di+0x0F1)), ax));	// 5000                  add     [di+0F1h], ax ;~ 01A2:1A3E
cs=0x1a2;eip=0x001a42; 	T(XCHG(ax, bx));	// 5001                  xchg    ax, bx ;~ 01A2:1A42
cs=0x1a2;eip=0x001a43; 	J(JMP(loc_11a6f));	// 5002                  jmp     short loc_11A6F ;~ 01A2:1A43
loc_11a45:
	// 4665 
cs=0x1a2;eip=0x001a45; 	T(ax = 0x4202;);	// 5006                  mov     ax, 4202h ;~ 01A2:1A45
cs=0x1a2;eip=0x001a48; 	T(XOR(cx, cx));	// 5007                  xor     cx, cx ;~ 01A2:1A48
cs=0x1a2;eip=0x001a4a; 	T(XOR(dx, dx));	// 5008                  xor     dx, dx ;~ 01A2:1A4A
cs=0x1a2;eip=0x001a4c; 	S(_INT(0x21));	// 5009                  int     21h             ; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) ;~ 01A2:1A4C
cs=0x1a2;eip=0x001a4e; 	T(cx = 4;);	// 5011                  mov     cx, 4 ;~ 01A2:1A4E
loc_11a51:
	// 4666 
cs=0x1a2;eip=0x001a51; 	T(SHR(dx, 1));	// 5014                  shr     dx, 1 ;~ 01A2:1A51
cs=0x1a2;eip=0x001a53; 	T(RCR(ax, 1));	// 5015                  rcr     ax, 1 ;~ 01A2:1A53
cs=0x1a2;eip=0x001a55; 	J(LOOP(loc_11a51));	// 5016                  loop    loc_11A51 ;~ 01A2:1A55
cs=0x1a2;eip=0x001a57; 	T(INC(ax));	// 5017                  inc     ax ;~ 01A2:1A57
cs=0x1a2;eip=0x001a58; 	T(XCHG(ax, bx));	// 5018                  xchg    ax, bx ;~ 01A2:1A58
cs=0x1a2;eip=0x001a59; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x8F))));	// 5019                  mov     ax, [di+8Fh] ;~ 01A2:1A59
cs=0x1a2;eip=0x001a5d; 	X(MOV(*(dw*)(raddr(ds,di+0x0F9)), ax));	// 5020                  mov     [di+0F9h], ax ;~ 01A2:1A5D
cs=0x1a2;eip=0x001a61; 	X(MOV(*(dw*)(raddr(ds,di+0x0F7)), 0x100));	// 5021                  mov     word ptr [di+0F7h], 100h ;~ 01A2:1A61
cs=0x1a2;eip=0x001a67; 	X(MOV(*(dw*)(raddr(ds,di+0x0F1)), ax));	// 5022                  mov     [di+0F1h], ax ;~ 01A2:1A67
cs=0x1a2;eip=0x001a6b; 	T(ADD(ax, 0x10));	// 5023                  add     ax, 10h ;~ 01A2:1A6B
cs=0x1a2;eip=0x001a6e; 	T(XCHG(ax, bx));	// 5024                  xchg    ax, bx ;~ 01A2:1A6E
loc_11a6f:
	// 4667 
cs=0x1a2;eip=0x001a6f; 	X(MOV(*(dw*)(raddr(ds,di+0x0FB)), bx));	// 5027                  mov     [di+0FBh], bx ;~ 01A2:1A6F
cs=0x1a2;eip=0x001a73; 	X(MOV(*(dw*)(raddr(ds,di+0x0FD)), bx));	// 5028                  mov     [di+0FDh], bx ;~ 01A2:1A73
cs=0x1a2;eip=0x001a77; 	T(ADD(ax, 0x16));	// 5029                  add     ax, 16h ;~ 01A2:1A77
cs=0x1a2;eip=0x001a7a; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_4))));	// 5030                  cmp     ax, [bp+var_4] ;~ 01A2:1A7A
cs=0x1a2;eip=0x001a7d; 	T(ax = 8;);	// 5031                  mov     ax, 8 ;~ 01A2:1A7D
cs=0x1a2;eip=0x001a80; 	J(JBE(loc_11a85));	// 5032                  jbe     short loc_11A85 ;~ 01A2:1A80
cs=0x1a2;eip=0x001a82; 	J(JMP(loc_119e5));	// 5033                  jmp     loc_119E5 ;~ 01A2:1A82
loc_11a85:
	// 4668 
cs=0x1a2;eip=0x001a85; 	T(ah = 0x3E;);	// 5037                  mov     ah, 3Eh ; '>' ;~ 01A2:1A85
cs=0x1a2;eip=0x001a87; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 5038                  mov     bx, [bp+var_2] ;~ 01A2:1A87
cs=0x1a2;eip=0x001a8a; 	S(_INT(0x21));	// 5039                  int     21h             ; DOS - 2+ - CLOSE A FILE WITH HANDLE ;~ 01A2:1A8A
cs=0x1a2;eip=0x001a8c; 	T(MOV(es, *(dw*)(raddr(ds,di+0x8F))));	// 5041                  mov     es, word ptr [di+8Fh] ;~ 01A2:1A8C
cs=0x1a2;eip=0x001a90; 	T(ah = 0x4A;);	// 5043                  mov     ah, 4Ah ; 'J' ;~ 01A2:1A90
cs=0x1a2;eip=0x001a92; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 5044                  mov     bx, [bp+var_4] ;~ 01A2:1A92
cs=0x1a2;eip=0x001a95; 	S(_INT(0x21));	// 5045                  int     21h             ; DOS - 2+ - ADJUST MEMORY BLOCK SIZE (SETBLOCK) ;~ 01A2:1A95
cs=0x1a2;eip=0x001a97; 	J(JNC(loc_11a9c));	// 5048                  jnb     short loc_11A9C ;~ 01A2:1A97
cs=0x1a2;eip=0x001a99; 	J(JMP(loc_119e5));	// 5049                  jmp     loc_119E5 ;~ 01A2:1A99
loc_11a9c:
	// 4669 
cs=0x1a2;eip=0x001a9c; 	T(ADD(bx, *(dw*)(raddr(ds,di+0x8F))));	// 5053                  add     bx, [di+8Fh] ;~ 01A2:1A9C
cs=0x1a2;eip=0x001aa0; 	T(dx = bx;);	// 5054                  mov     dx, bx ;~ 01A2:1AA0
cs=0x1a2;eip=0x001aa2; 	T(SUB(bx, 0x17));	// 5055                  sub     bx, 17h ;~ 01A2:1AA2
cs=0x1a2;eip=0x001aa5; 	X(*(dw*)(&byte_118df) = bx;);	// 5056                  mov     word ptr cs:byte_118DF, bx ;~ 01A2:1AA5
cs=0x1a2;eip=0x001aaa; 	T(es = bx;);	// 5057                  mov     es, bx ;~ 01A2:1AAA
cs=0x1a2;eip=0x001aac; 	T(cx = 0x0B0;);	// 5058                  mov     cx, 0B0h ; '
cs=0x1a2;eip=0x001aaf; 	T(si = 0x177D;);	// 5059                  mov     si, 177Dh ;~ 01A2:1AAF
cs=0x1a2;eip=0x001ab2; 	T(XOR(di, di));	// 5060                  xor     di, di ;~ 01A2:1AB2
	// 5061                  rep movsw ;~ 01A2:1AB4
cs=0x1a2;eip=0x001ab4; 	X(	REP MOVSW);	// 5061                  rep movsw ;~ 01A2:1AB4
cs=0x1a2;eip=0x001ab6; 	T(MOV(es, *(dw*)(raddr(ss,bp+var_c))));	// 5062                  mov     es, [bp+var_C] ;~ 01A2:1AB6
cs=0x1a2;eip=0x001ab9; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_6))));	// 5063                  mov     cx, [bp+var_6] ;~ 01A2:1AB9
cs=0x1a2;eip=0x001abc; 	T(CMP(byte_118e3, 0));	// 5064                  cmp     cs:byte_118E3, 0 ;~ 01A2:1ABC
cs=0x1a2;eip=0x001ac2; 	J(JNZ(loc_11ace));	// 5065                  jnz     short loc_11ACE ;~ 01A2:1AC2
cs=0x1a2;eip=0x001ac4; 	T(ah = 0x48;);	// 5066                  mov     ah, 48h ; 'H' ;~ 01A2:1AC4
cs=0x1a2;eip=0x001ac6; 	T(bx = cx;);	// 5067                  mov     bx, cx ;~ 01A2:1AC6
cs=0x1a2;eip=0x001ac8; 	S(_INT(0x21));	// 5068                  int     21h             ; DOS - 2+ - ALLOCATE MEMORY ;~ 01A2:1AC8
cs=0x1a2;eip=0x001aca; 	J(JC(loc_11b07));	// 5070                  jb      short loc_11B07 ;~ 01A2:1ACA
cs=0x1a2;eip=0x001acc; 	J(JMP(loc_11ad2));	// 5071                  jmp     short loc_11AD2 ;~ 01A2:1ACC
loc_11ace:
	// 4670 
cs=0x1a2;eip=0x001ace; 	T(ax = *(dw*)(&byte_118e1););	// 5075                  mov     ax, word ptr cs:byte_118E1 ;~ 01A2:1ACE
loc_11ad2:
	// 4671 
cs=0x1a2;eip=0x001ad2; 	T(es = ax;);	// 5078                  mov     es, ax ;~ 01A2:1AD2
cs=0x1a2;eip=0x001ad4; 	T(XOR(di, di));	// 5079                  xor     di, di ;~ 01A2:1AD4
cs=0x1a2;eip=0x001ad6; 	T(LDS(si, *(dd*)(raddr(ss,bp+var_a))));	// 5080                  lds     si, [bp+var_A] ;~ 01A2:1AD6
cs=0x1a2;eip=0x001ad9; 	T(ADD(cx, cx));	// 5082                  add     cx, cx ;~ 01A2:1AD9
cs=0x1a2;eip=0x001adb; 	T(ADD(cx, cx));	// 5083                  add     cx, cx ;~ 01A2:1ADB
cs=0x1a2;eip=0x001add; 	T(ADD(cx, cx));	// 5084                  add     cx, cx ;~ 01A2:1ADD
	// 5085                  rep movsw ;~ 01A2:1ADF
cs=0x1a2;eip=0x001adf; 	X(	REP MOVSW);	// 5085                  rep movsw ;~ 01A2:1ADF
cs=0x1a2;eip=0x001ae1; 	X(PUSH(es));	// 5086                  push    es ;~ 01A2:1AE1
cs=0x1a2;eip=0x001ae2; 	X(PUSH(dx));	// 5087                  push    dx ;~ 01A2:1AE2
cs=0x1a2;eip=0x001ae3; 	X(PUSH(ds));	// 5088                  push    ds ;~ 01A2:1AE3
cs=0x1a2;eip=0x001ae4; 	T(ds = __dgrouparb;);	// 5089                  mov     ds, cs:__DGROUP@ ;~ 01A2:1AE4
cs=0x1a2;eip=0x001ae9; 	T(NOP);	// 5090                  nop ;~ 01A2:1AE9
cs=0x1a2;eip=0x001aea; 	X(PUSH(cs));	// 5091                  push    cs ;~ 01A2:1AEA
cs=0x1a2;eip=0x001aeb; 	J(CALL(____cexit,0));	// 5092                  call    near ptr ____cexit ;~ 01A2:1AEB
cs=0x1a2;eip=0x001aee; 	X(POP(ds));	// 5093                  pop     ds ;~ 01A2:1AEE
cs=0x1a2;eip=0x001aef; 	X(POP(dx));	// 5094                  pop     dx ;~ 01A2:1AEF
cs=0x1a2;eip=0x001af0; 	T(CMP(byte_118e3, 0));	// 5095                  cmp     cs:byte_118E3, 0 ;~ 01A2:1AF0
cs=0x1a2;eip=0x001af6; 	J(JNZ(loc_11b01));	// 5096                  jnz     short loc_11B01 ;~ 01A2:1AF6
cs=0x1a2;eip=0x001af8; 	T(es = *(dw*)(&byte_118e1););	// 5097                  mov     es, word ptr cs:byte_118E1 ;~ 01A2:1AF8
cs=0x1a2;eip=0x001afd; 	T(ah = 0x49;);	// 5098                  mov     ah, 49h ;~ 01A2:1AFD
cs=0x1a2;eip=0x001aff; 	S(_INT(0x21));	// 5099                  int     21h             ; DOS - 2+ - FREE MEMORY ;~ 01A2:1AFF
loc_11b01:
	// 4672 
cs=0x1a2;eip=0x001b01; 	X(POP(cx));	// 5103                  pop     cx ;~ 01A2:1B01
cs=0x1a2;eip=0x001b02; __disp=*(dd*)(&byte_118dd);
	J(return __dispatch_call(__disp, _state););	// 5104                  jmp     dword ptr cs:byte_118DD ;~ 01A2:1B02
loc_11b07:
	// 4673 
cs=0x1a2;eip=0x001b07; 	X(POP(es));	// 5109                  pop     es ;~ 01A2:1B07
cs=0x1a2;eip=0x001b08; 	X(POP(di));	// 5110                  pop     di ;~ 01A2:1B08
cs=0x1a2;eip=0x001b09; 	X(POP(ds));	// 5111                  pop     ds ;~ 01A2:1B09
cs=0x1a2;eip=0x001b0a; 	X(POP(si));	// 5112                  pop     si ;~ 01A2:1B0A
cs=0x1a2;eip=0x001b0b; 	X(PUSH(ax));	// 5113                  push    ax ;~ 01A2:1B0B
cs=0x1a2;eip=0x001b0c; 	J(CALL(____ioerror,0));	// 5114                  call    ____IOERROR ;~ 01A2:1B0C
cs=0x1a2;eip=0x001b0f; 	T(sp = bp;);	// 5115                  mov     sp, bp ;~ 01A2:1B0F
cs=0x1a2;eip=0x001b11; 	X(POP(bp));	// 5116                  pop     bp ;~ 01A2:1B11
cs=0x1a2;eip=0x001b12; 	J(RETN(0));	// 5117                  retn ;~ 01A2:1B12

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____exec: 	goto ____exec;
        case m2c::kloc_11908: 	goto loc_11908;
        case m2c::kloc_11938: 	goto loc_11938;
        case m2c::kloc_11949: 	goto loc_11949;
        case m2c::kloc_11968: 	goto loc_11968;
        case m2c::kloc_1197d: 	goto loc_1197d;
        case m2c::kloc_11987: 	goto loc_11987;
        case m2c::kloc_1199a: 	goto loc_1199a;
        case m2c::kloc_119c2: 	goto loc_119c2;
        case m2c::kloc_119ca: 	goto loc_119ca;
        case m2c::kloc_119e5: 	goto loc_119e5;
        case m2c::kloc_119f1: 	goto loc_119f1;
        case m2c::kloc_11a23: 	goto loc_11a23;
        case m2c::kloc_11a45: 	goto loc_11a45;
        case m2c::kloc_11a51: 	goto loc_11a51;
        case m2c::kloc_11a6f: 	goto loc_11a6f;
        case m2c::kloc_11a85: 	goto loc_11a85;
        case m2c::kloc_11a9c: 	goto loc_11a9c;
        case m2c::kloc_11ace: 	goto loc_11ace;
        case m2c::kloc_11ad2: 	goto loc_11ad2;
        case m2c::kloc_11b01: 	goto loc_11b01;
        case m2c::kloc_11b07: 	goto loc_11b07;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___execl(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___execl:
    _begin:
#undef path
#define path 6
	// 5129 path            = dword ptr  6 ;~ 01A2:1B13
#undef arg0
#define arg0 0x0A
	// 5130 arg0            = dword ptr  0Ah ;~ 01A2:1B13
cs=0x1a2;eip=0x001b13; 	X(PUSH(bp));	// 5132                  push    bp ;~ 01A2:1B13
cs=0x1a2;eip=0x001b14; 	T(bp = sp;);	// 5133                  mov     bp, sp ;~ 01A2:1B14
cs=0x1a2;eip=0x001b16; 	T(XOR(ax, ax));	// 5134                  xor     ax, ax ;~ 01A2:1B16
cs=0x1a2;eip=0x001b18; 	X(PUSH(ax));	// 5135                  push    ax              ; int ;~ 01A2:1B18
cs=0x1a2;eip=0x001b19; 	T(XOR(dx, dx));	// 5136                  xor     dx, dx ;~ 01A2:1B19
cs=0x1a2;eip=0x001b1b; 	X(PUSH(ax));	// 5137                  push    ax              ; int ;~ 01A2:1B1B
cs=0x1a2;eip=0x001b1c; 	X(PUSH(dx));	// 5138                  push    dx              ; int ;~ 01A2:1B1C
cs=0x1a2;eip=0x001b1d; 	X(PUSH(ss));	// 5139                  push    ss              ; int ;~ 01A2:1B1D
cs=0x1a2;eip=0x001b1e; 	T(ax = bp+arg0);	// 5140                  lea     ax, [bp+arg0] ;~ 01A2:1B1E
cs=0x1a2;eip=0x001b21; 	X(PUSH(ax));	// 5141                  push    ax              ; int ;~ 01A2:1B21
cs=0x1a2;eip=0x001b22; 	X(PUSH(*(dw*)(raddr(ss,bp+path+2))));	// 5142                  push    word ptr [bp+path+2] ;~ 01A2:1B22
cs=0x1a2;eip=0x001b25; 	X(PUSH(*(dw*)(raddr(ss,bp+path))));	// 5143                  push    word ptr [bp+path] ; src ;~ 01A2:1B25
cs=0x1a2;eip=0x001b28; 	T(ax = 0x18E4;);	// 5144                  mov     ax, 18E4h ;~ 01A2:1B28
cs=0x1a2;eip=0x001b2b; 	X(PUSH(ax));	// 5145                  push    ax              ; int ;~ 01A2:1B2B
cs=0x1a2;eip=0x001b2c; 	J(CALL(____loadprog,0));	// 5146                  call    ____LoadProg ;~ 01A2:1B2C
cs=0x1a2;eip=0x001b2f; 	T(ADD(sp, 0x10));	// 5147                  add     sp, 10h ;~ 01A2:1B2F
cs=0x1a2;eip=0x001b32; 	X(POP(bp));	// 5148                  pop     bp ;~ 01A2:1B32
cs=0x1a2;eip=0x001b33; 	J(RETF(0));	// 5149                  retf ;~ 01A2:1B33

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___execl: 	goto ___execl;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_11b40(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11b40:
    _begin:
cs=0x1a2;eip=0x001b40; 	T(CMP(dx, _____first));	// 5175                  cmp     dx, cs:_____first ;~ 01A2:1B40
cs=0x1a2;eip=0x001b45; 	J(JZ(loc_11b7e));	// 5176                  jz      short loc_11B7E ;~ 01A2:1B45
cs=0x1a2;eip=0x001b47; 	T(ds = dx;);	// 5177                  mov     ds, dx ;~ 01A2:1B47
cs=0x1a2;eip=0x001b49; 	T(MOV(ds, *(dw*)(raddr(ds,2))));	// 5179                  mov     ds, word ptr ds:2 ;~ 01A2:1B49
cs=0x1a2;eip=0x001b4d; 	T(CMP(*(dw*)(raddr(ds,2)), 0));	// 5181                  cmp     word ptr ds:2, 0 ;~ 01A2:1B4D
cs=0x1a2;eip=0x001b52; 	J(JZ(loc_11b5b));	// 5182                  jz      short loc_11B5B ;~ 01A2:1B52
cs=0x1a2;eip=0x001b54; 	X(_____last = ds;);	// 5183                  mov     cs:_____last, ds ;~ 01A2:1B54
cs=0x1a2;eip=0x001b59; 	J(JMP(loc_11b93));	// 5184                  jmp     short loc_11B93 ;~ 01A2:1B59
loc_11b5b:
	// 4674 
cs=0x1a2;eip=0x001b5b; 	T(ax = ds;);	// 5188                  mov     ax, ds ;~ 01A2:1B5B
cs=0x1a2;eip=0x001b5d; 	T(CMP(ax, _____first));	// 5189                  cmp     ax, cs:_____first ;~ 01A2:1B5D
cs=0x1a2;eip=0x001b62; 	J(JZ(loc_11b79));	// 5190                  jz      short loc_11B79 ;~ 01A2:1B62
cs=0x1a2;eip=0x001b64; 	T(MOV(ax, *(dw*)(raddr(ds,8))));	// 5191                  mov     ax, ds:8 ;~ 01A2:1B64
cs=0x1a2;eip=0x001b67; 	X(_____last = ax;);	// 5192                  mov     cs:_____last, ax ;~ 01A2:1B67
cs=0x1a2;eip=0x001b6b; 	X(PUSH(ds));	// 5193                  push    ds ;~ 01A2:1B6B
cs=0x1a2;eip=0x001b6c; 	T(XOR(ax, ax));	// 5194                  xor     ax, ax ;~ 01A2:1B6C
cs=0x1a2;eip=0x001b6e; 	X(PUSH(ax));	// 5195                  push    ax ;~ 01A2:1B6E
cs=0x1a2;eip=0x001b6f; 	J(CALL(sub_11c14,0));	// 5196                  call    sub_11C14 ;~ 01A2:1B6F
cs=0x1a2;eip=0x001b72; 	T(ds = word_11b3a;);	// 5197                  mov     ds, cs:word_11B3A ;~ 01A2:1B72
cs=0x1a2;eip=0x001b77; 	J(JMP(loc_11b9c));	// 5199                  jmp     short loc_11B9C ;~ 01A2:1B77
loc_11b79:
	// 4675 
cs=0x1a2;eip=0x001b79; 	T(dx = _____first;);	// 5203                  mov     dx, cs:_____first ;~ 01A2:1B79
loc_11b7e:
	// 4676 
cs=0x1a2;eip=0x001b7e; 	X(_____first = 0;);	// 5206                  mov     cs:_____first, 0 ;~ 01A2:1B7E
cs=0x1a2;eip=0x001b85; 	X(_____last = 0;);	// 5207                  mov     cs:_____last, 0 ;~ 01A2:1B85
cs=0x1a2;eip=0x001b8c; 	X(_____rover = 0;);	// 5208                  mov     cs:_____rover, 0 ;~ 01A2:1B8C
loc_11b93:
	// 4677 
cs=0x1a2;eip=0x001b93; 	T(ds = word_11b3a;);	// 5212                  mov     ds, cs:word_11B3A ;~ 01A2:1B93
cs=0x1a2;eip=0x001b98; 	X(PUSH(dx));	// 5214                  push    dx ;~ 01A2:1B98
cs=0x1a2;eip=0x001b99; 	T(XOR(ax, ax));	// 5215                  xor     ax, ax ;~ 01A2:1B99
cs=0x1a2;eip=0x001b9b; 	X(PUSH(ax));	// 5216                  push    ax ;~ 01A2:1B9B
loc_11b9c:
	// 4678 
cs=0x1a2;eip=0x001b9c; 	J(CALL(____brk,0));	// 5219                  call    ____brk ;~ 01A2:1B9C
cs=0x1a2;eip=0x001b9f; 	T(ADD(sp, 4));	// 5220                  add     sp, 4 ;~ 01A2:1B9F
cs=0x1a2;eip=0x001ba2; 	J(RETN(0));	// 5221                  retn ;~ 01A2:1BA2

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_11b5b: 	goto loc_11b5b;
        case m2c::kloc_11b79: 	goto loc_11b79;
        case m2c::kloc_11b7e: 	goto loc_11b7e;
        case m2c::kloc_11b93: 	goto loc_11b93;
        case m2c::kloc_11b9c: 	goto loc_11b9c;
        case m2c::ksub_11b40: 	goto sub_11b40;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group5:
    _begin:
sub_11ba3:
	// 5229 
cs=0x1a2;eip=0x001ba3; 	T(ds = dx;);	// 5230                  mov     ds, dx ;~ 01A2:1BA3
cs=0x1a2;eip=0x001ba5; 	X(PUSH(ds));	// 5231                  push    ds ;~ 01A2:1BA5
cs=0x1a2;eip=0x001ba6; 	T(es = *(dw*)(&byte_188e2););	// 5232                  mov     es, word ptr byte_188E2 ;~ 01A2:1BA6
cs=0x1a2;eip=0x001baa; 	X(*(dw*)(&byte_188e2) = 0;);	// 5234                  mov     word ptr byte_188E2, 0 ;~ 01A2:1BAA
cs=0x1a2;eip=0x001bb0; 	X(*(dw*)(&byte_188e8) = es;);	// 5235                  mov     word ptr byte_188E8, es ;~ 01A2:1BB0
cs=0x1a2;eip=0x001bb4; 	T(CMP(dx, _____first));	// 5236                  cmp     dx, cs:_____first ;~ 01A2:1BB4
cs=0x1a2;eip=0x001bb9; 	J(JZ(loc_11be9));	// 5237                  jz      short loc_11BE9 ;~ 01A2:1BB9
cs=0x1a2;eip=0x001bbb; 	T(CMP(*(dw*)(raddr(es,2)), 0));	// 5238                  cmp     word ptr es:2, 0 ;~ 01A2:1BBB
cs=0x1a2;eip=0x001bc1; 	J(JNZ(loc_11be9));	// 5239                  jnz     short loc_11BE9 ;~ 01A2:1BC1
cs=0x1a2;eip=0x001bc3; 	T(ax = *(dw*)(&byte_188e0););	// 5240                  mov     ax, word ptr byte_188E0 ;~ 01A2:1BC3
cs=0x1a2;eip=0x001bc6; 	X(POP(bx));	// 5241                  pop     bx ;~ 01A2:1BC6
cs=0x1a2;eip=0x001bc7; 	X(PUSH(es));	// 5242                  push    es ;~ 01A2:1BC7
cs=0x1a2;eip=0x001bc8; 	X(ADD(*(dw*)(raddr(es,0)), ax));	// 5243                  add     es:0, ax ;~ 01A2:1BC8
cs=0x1a2;eip=0x001bcd; 	T(cx = es;);	// 5244                  mov     cx, es ;~ 01A2:1BCD
cs=0x1a2;eip=0x001bcf; 	T(ADD(dx, ax));	// 5245                  add     dx, ax ;~ 01A2:1BCF
cs=0x1a2;eip=0x001bd1; 	T(es = dx;);	// 5246                  mov     es, dx ;~ 01A2:1BD1
cs=0x1a2;eip=0x001bd3; 	T(CMP(*(dw*)(raddr(es,2)), 0));	// 5247                  cmp     word ptr es:2, 0 ;~ 01A2:1BD3
cs=0x1a2;eip=0x001bd9; 	J(JNZ(loc_11be2));	// 5248                  jnz     short loc_11BE2 ;~ 01A2:1BD9
cs=0x1a2;eip=0x001bdb; 	X(MOV(*(dw*)(raddr(es,8)), cx));	// 5249                  mov     es:8, cx ;~ 01A2:1BDB
cs=0x1a2;eip=0x001be0; 	J(JMP(loc_11bec));	// 5250                  jmp     short loc_11BEC ;~ 01A2:1BE0
loc_11be2:
	// 4679 
cs=0x1a2;eip=0x001be2; 	X(MOV(*(dw*)(raddr(es,2)), cx));	// 5254                  mov     es:2, cx ;~ 01A2:1BE2
cs=0x1a2;eip=0x001be7; 	J(JMP(loc_11bec));	// 5255                  jmp     short loc_11BEC ;~ 01A2:1BE7
loc_11be9:
	// 4680 
cs=0x1a2;eip=0x001be9; 	J(CALL(sub_11c3d,0));	// 5260                  call    sub_11C3D ;~ 01A2:1BE9
loc_11bec:
	// 4681 
cs=0x1a2;eip=0x001bec; 	X(POP(es));	// 5264                  pop     es ;~ 01A2:1BEC
cs=0x1a2;eip=0x001bed; 	T(ax = es;);	// 5265                  mov     ax, es ;~ 01A2:1BED
cs=0x1a2;eip=0x001bef; 	T(ADD(ax, *(dw*)(raddr(es,0))));	// 5266                  add     ax, es:0 ;~ 01A2:1BEF
cs=0x1a2;eip=0x001bf4; 	T(ds = ax;);	// 5267                  mov     ds, ax ;~ 01A2:1BF4
cs=0x1a2;eip=0x001bf6; 	T(CMP(*(dw*)(&byte_188e2), 0));	// 5268                  cmp     word ptr byte_188E2, 0 ;~ 01A2:1BF6
cs=0x1a2;eip=0x001bfb; 	J(JZ(loc_11bfe));	// 5269                  jz      short loc_11BFE ;~ 01A2:1BFB
cs=0x1a2;eip=0x001bfd; 	J(RETN(0));	// 5270                  retn ;~ 01A2:1BFD
loc_11bfe:
	// 4682 
cs=0x1a2;eip=0x001bfe; 	T(ax = *(dw*)(&byte_188e0););	// 5274                  mov     ax, word ptr byte_188E0 ;~ 01A2:1BFE
cs=0x1a2;eip=0x001c01; 	X(ADD(*(dw*)(raddr(es,0)), ax));	// 5275                  add     es:0, ax ;~ 01A2:1C01
cs=0x1a2;eip=0x001c06; 	T(ax = es;);	// 5276                  mov     ax, es ;~ 01A2:1C06
cs=0x1a2;eip=0x001c08; 	T(bx = ds;);	// 5277                  mov     bx, ds ;~ 01A2:1C08
cs=0x1a2;eip=0x001c0a; 	T(ADD(bx, *(dw*)(&byte_188e0)));	// 5278                  add     bx, word ptr byte_188E0 ;~ 01A2:1C0A
cs=0x1a2;eip=0x001c0e; 	T(es = bx;);	// 5279                  mov     es, bx ;~ 01A2:1C0E
cs=0x1a2;eip=0x001c10; 	X(MOV(*(dw*)(raddr(es,2)), ax));	// 5280                  mov     es:2, ax ;~ 01A2:1C10
sub_11c14:
	// 5288 
cs=0x1a2;eip=0x001c14; 	T(bx = ds;);	// 5290                  mov     bx, ds ;~ 01A2:1C14
cs=0x1a2;eip=0x001c16; 	T(CMP(bx, *(dw*)(&byte_188e6)));	// 5291                  cmp     bx, word ptr byte_188E6 ;~ 01A2:1C16
cs=0x1a2;eip=0x001c1a; 	J(JZ(loc_11c35));	// 5292                  jz      short loc_11C35 ;~ 01A2:1C1A
cs=0x1a2;eip=0x001c1c; 	T(es = *(dw*)(&byte_188e6););	// 5293                  mov     es, word ptr byte_188E6 ;~ 01A2:1C1C
cs=0x1a2;eip=0x001c20; 	T(ds = *(dw*)(&byte_188e4););	// 5294                  mov     ds, word ptr byte_188E4 ;~ 01A2:1C20
cs=0x1a2;eip=0x001c24; 	X(*(dw*)(&byte_188e6) = es;);	// 5295                  mov     word ptr byte_188E6, es ;~ 01A2:1C24
cs=0x1a2;eip=0x001c28; 	X(MOV(*(dw*)(raddr(es,4)), ds));	// 5296                  mov     word ptr es:4, ds ;~ 01A2:1C28
cs=0x1a2;eip=0x001c2d; 	X(_____rover = ds;);	// 5297                  mov     cs:_____rover, ds ;~ 01A2:1C2D
cs=0x1a2;eip=0x001c32; 	T(ds = bx;);	// 5298                  mov     ds, bx ;~ 01A2:1C32
cs=0x1a2;eip=0x001c34; 	J(RETN(0));	// 5299                  retn ;~ 01A2:1C34
loc_11c35:
	// 4683 
cs=0x1a2;eip=0x001c35; 	X(_____rover = 0;);	// 5303                  mov     cs:_____rover, 0 ;~ 01A2:1C35
cs=0x1a2;eip=0x001c3c; 	J(RETN(0));	// 5304                  retn ;~ 01A2:1C3C

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_11be2: 	goto loc_11be2;
        case m2c::kloc_11be9: 	goto loc_11be9;
        case m2c::kloc_11bec: 	goto loc_11bec;
        case m2c::kloc_11bfe: 	goto loc_11bfe;
        case m2c::kloc_11c35: 	goto loc_11c35;
        case m2c::ksub_11ba3: 	goto sub_11ba3;
        case m2c::ksub_11c14: 	goto sub_11c14;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_11c3d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11c3d:
    _begin:
cs=0x1a2;eip=0x001c3d; 	T(ax = _____rover;);	// 5313                  mov     ax, cs:_____rover ;~ 01A2:1C3D
cs=0x1a2;eip=0x001c41; 	T(OR(ax, ax));	// 5314                  or      ax, ax ;~ 01A2:1C41
cs=0x1a2;eip=0x001c43; 	J(JZ(loc_11c66));	// 5315                  jz      short loc_11C66 ;~ 01A2:1C43
cs=0x1a2;eip=0x001c45; 	T(bx = ss;);	// 5316                  mov     bx, ss ;~ 01A2:1C45
cs=0x1a2;eip=0x001c47; 	X(PUSHF);	// 5317                  pushf ;~ 01A2:1C47
cs=0x1a2;eip=0x001c48; 	T(CLI);	// 5318                  cli ;~ 01A2:1C48
cs=0x1a2;eip=0x001c49; 	S(ss = ax;);	// 5319                  mov     ss, ax ;~ 01A2:1C49
cs=0x1a2;eip=0x001c4b; 	T(MOV(es, *(dw*)(raddr(ss,6))));	// 5321                  mov     es, word ptr ss:6 ;~ 01A2:1C4B
cs=0x1a2;eip=0x001c50; 	X(MOV(*(dw*)(raddr(ss,6)), ds));	// 5322                  mov     word ptr ss:6, ds ;~ 01A2:1C50
cs=0x1a2;eip=0x001c55; 	X(*(dw*)(&byte_188e4) = ss;);	// 5323                  mov     word ptr byte_188E4, ss ;~ 01A2:1C55
cs=0x1a2;eip=0x001c59; 	S(ss = bx;);	// 5324                  mov     ss, bx ;~ 01A2:1C59
cs=0x1a2;eip=0x001c5b; 	X(POPF);	// 5325                  popf ;~ 01A2:1C5B
cs=0x1a2;eip=0x001c5c; 	X(MOV(*(dw*)(raddr(es,4)), ds));	// 5326                  mov     word ptr es:4, ds ;~ 01A2:1C5C
cs=0x1a2;eip=0x001c61; 	X(*(dw*)(&byte_188e6) = es;);	// 5327                  mov     word ptr byte_188E6, es ;~ 01A2:1C61
cs=0x1a2;eip=0x001c65; 	J(RETN(0));	// 5328                  retn ;~ 01A2:1C65
loc_11c66:
	// 4684 
cs=0x1a2;eip=0x001c66; 	X(_____rover = ds;);	// 5332                  mov     cs:_____rover, ds ;~ 01A2:1C66
cs=0x1a2;eip=0x001c6b; 	X(*(dw*)(&byte_188e4) = ds;);	// 5333                  mov     word ptr byte_188E4, ds ;~ 01A2:1C6B
cs=0x1a2;eip=0x001c6f; 	X(*(dw*)(&byte_188e6) = ds;);	// 5334                  mov     word ptr byte_188E6, ds ;~ 01A2:1C6F
cs=0x1a2;eip=0x001c73; 	J(RETN(0));	// 5335                  retn ;~ 01A2:1C73

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_11c66: 	goto loc_11c66;
        case m2c::ksub_11c3d: 	goto sub_11c3d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___farfree(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___farfree:
    _begin:
#undef arg_2
#define arg_2 8
	// 5348 arg_2           = word ptr  8 ;~ 01A2:1C74
cs=0x1a2;eip=0x001c74; 	X(PUSH(bp));	// 5350                  push    bp ;~ 01A2:1C74
cs=0x1a2;eip=0x001c75; 	T(bp = sp;);	// 5351                  mov     bp, sp ;~ 01A2:1C75
cs=0x1a2;eip=0x001c77; 	X(PUSH(si));	// 5352                  push    si ;~ 01A2:1C77
cs=0x1a2;eip=0x001c78; 	X(PUSH(di));	// 5353                  push    di ;~ 01A2:1C78
cs=0x1a2;eip=0x001c79; 	X(word_11b3a = ds;);	// 5354                  mov     cs:word_11B3A, ds ;~ 01A2:1C79
cs=0x1a2;eip=0x001c7e; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 5355                  mov     dx, [bp+arg_2] ;~ 01A2:1C7E
cs=0x1a2;eip=0x001c81; 	T(OR(dx, dx));	// 5356                  or      dx, dx ;~ 01A2:1C81
cs=0x1a2;eip=0x001c83; 	J(JZ(loc_11c94));	// 5357                  jz      short loc_11C94 ;~ 01A2:1C83
cs=0x1a2;eip=0x001c85; 	T(CMP(dx, _____last));	// 5358                  cmp     dx, cs:_____last ;~ 01A2:1C85
cs=0x1a2;eip=0x001c8a; 	J(JNZ(loc_11c91));	// 5359                  jnz     short loc_11C91 ;~ 01A2:1C8A
cs=0x1a2;eip=0x001c8c; 	J(CALL(sub_11b40,0));	// 5360                  call    sub_11B40 ;~ 01A2:1C8C
cs=0x1a2;eip=0x001c8f; 	J(JMP(loc_11c94));	// 5361                  jmp     short loc_11C94 ;~ 01A2:1C8F
loc_11c91:
	// 4685 
cs=0x1a2;eip=0x001c91; 	J(CALL(sub_11ba3,0));	// 5365                  call    sub_11BA3 ;~ 01A2:1C91
loc_11c94:
	// 4686 
cs=0x1a2;eip=0x001c94; 	T(ds = word_11b3a;);	// 5369                  mov     ds, cs:word_11B3A ;~ 01A2:1C94
cs=0x1a2;eip=0x001c99; 	X(POP(di));	// 5370                  pop     di ;~ 01A2:1C99
cs=0x1a2;eip=0x001c9a; 	X(POP(si));	// 5371                  pop     si ;~ 01A2:1C9A
cs=0x1a2;eip=0x001c9b; 	X(POP(bp));	// 5372                  pop     bp ;~ 01A2:1C9B
cs=0x1a2;eip=0x001c9c; 	J(RETF(0));	// 5373                  retf ;~ 01A2:1C9C

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___farfree: 	goto ___farfree;
        case m2c::kloc_11c91: 	goto loc_11c91;
        case m2c::kloc_11c94: 	goto loc_11c94;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_11c9d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11c9d:
    _begin:
cs=0x1a2;eip=0x001c9d; 	X(PUSH(ax));	// 5382                  push    ax ;~ 01A2:1C9D
cs=0x1a2;eip=0x001c9e; 	T(ds = word_11b3a;);	// 5383                  mov     ds, cs:word_11B3A ;~ 01A2:1C9E
cs=0x1a2;eip=0x001ca3; 	T(XOR(ax, ax));	// 5384                  xor     ax, ax ;~ 01A2:1CA3
cs=0x1a2;eip=0x001ca5; 	X(PUSH(ax));	// 5385                  push    ax ;~ 01A2:1CA5
cs=0x1a2;eip=0x001ca6; 	X(PUSH(ax));	// 5386                  push    ax ;~ 01A2:1CA6
cs=0x1a2;eip=0x001ca7; 	J(CALL(____sbrk,0));	// 5387                  call    ____sbrk ;~ 01A2:1CA7
cs=0x1a2;eip=0x001caa; 	T(ADD(sp, 4));	// 5389                  add     sp, 4 ;~ 01A2:1CAA
cs=0x1a2;eip=0x001cad; 	T(AND(ax, 0x0F));	// 5390                  and     ax, 0Fh ;~ 01A2:1CAD
cs=0x1a2;eip=0x001cb0; 	J(JZ(loc_11cc6));	// 5391                  jz      short loc_11CC6 ;~ 01A2:1CB0
cs=0x1a2;eip=0x001cb2; 	T(dx = 0x10;);	// 5392                  mov     dx, 10h ;~ 01A2:1CB2
cs=0x1a2;eip=0x001cb5; 	T(SUB(dx, ax));	// 5393                  sub     dx, ax ;~ 01A2:1CB5
cs=0x1a2;eip=0x001cb7; 	T(XOR(ax, ax));	// 5394                  xor     ax, ax ;~ 01A2:1CB7
cs=0x1a2;eip=0x001cb9; 	T(ds = word_11b3a;);	// 5395                  mov     ds, cs:word_11B3A ;~ 01A2:1CB9
cs=0x1a2;eip=0x001cbe; 	X(PUSH(ax));	// 5396                  push    ax ;~ 01A2:1CBE
cs=0x1a2;eip=0x001cbf; 	X(PUSH(dx));	// 5397                  push    dx ;~ 01A2:1CBF
cs=0x1a2;eip=0x001cc0; 	J(CALL(____sbrk,0));	// 5398                  call    ____sbrk ;~ 01A2:1CC0
cs=0x1a2;eip=0x001cc3; 	T(ADD(sp, 4));	// 5399                  add     sp, 4 ;~ 01A2:1CC3
loc_11cc6:
	// 4687 
cs=0x1a2;eip=0x001cc6; 	X(POP(ax));	// 5402                  pop     ax ;~ 01A2:1CC6
cs=0x1a2;eip=0x001cc7; 	X(PUSH(ax));	// 5403                  push    ax ;~ 01A2:1CC7
cs=0x1a2;eip=0x001cc8; 	T(XOR(bx, bx));	// 5404                  xor     bx, bx ;~ 01A2:1CC8
cs=0x1a2;eip=0x001cca; 	T(bl = ah;);	// 5405                  mov     bl, ah ;~ 01A2:1CCA
cs=0x1a2;eip=0x001ccc; 	T(cl = 4;);	// 5406                  mov     cl, 4 ;~ 01A2:1CCC
cs=0x1a2;eip=0x001cce; 	T(SHR(bx, cl));	// 5407                  shr     bx, cl ;~ 01A2:1CCE
cs=0x1a2;eip=0x001cd0; 	T(SHL(ax, cl));	// 5408                  shl     ax, cl ;~ 01A2:1CD0
cs=0x1a2;eip=0x001cd2; 	T(ds = word_11b3a;);	// 5409                  mov     ds, cs:word_11B3A ;~ 01A2:1CD2
cs=0x1a2;eip=0x001cd7; 	X(PUSH(bx));	// 5410                  push    bx ;~ 01A2:1CD7
cs=0x1a2;eip=0x001cd8; 	X(PUSH(ax));	// 5411                  push    ax ;~ 01A2:1CD8
cs=0x1a2;eip=0x001cd9; 	J(CALL(____sbrk,0));	// 5412                  call    ____sbrk ;~ 01A2:1CD9
cs=0x1a2;eip=0x001cdc; 	T(ADD(sp, 4));	// 5414                  add     sp, 4 ;~ 01A2:1CDC
cs=0x1a2;eip=0x001cdf; 	X(POP(bx));	// 5415                  pop     bx ;~ 01A2:1CDF
cs=0x1a2;eip=0x001ce0; 	T(CMP(ax, 0x0FFFF));	// 5416                  cmp     ax, 0FFFFh ;~ 01A2:1CE0
cs=0x1a2;eip=0x001ce3; 	J(JZ(loc_11cfd));	// 5417                  jz      short loc_11CFD ;~ 01A2:1CE3
cs=0x1a2;eip=0x001ce5; 	X(_____first = dx;);	// 5418                  mov     cs:_____first, dx ;~ 01A2:1CE5
cs=0x1a2;eip=0x001cea; 	X(_____last = dx;);	// 5419                  mov     cs:_____last, dx ;~ 01A2:1CEA
cs=0x1a2;eip=0x001cef; 	T(ds = dx;);	// 5420                  mov     ds, dx ;~ 01A2:1CEF
cs=0x1a2;eip=0x001cf1; 	X(MOV(*(dw*)(raddr(ds,0)), bx));	// 5422                  mov     ds:0, bx ;~ 01A2:1CF1
cs=0x1a2;eip=0x001cf5; 	X(MOV(*(dw*)(raddr(ds,2)), dx));	// 5423                  mov     ds:2, dx ;~ 01A2:1CF5
cs=0x1a2;eip=0x001cf9; 	T(ax = 4;);	// 5424                  mov     ax, 4 ;~ 01A2:1CF9
cs=0x1a2;eip=0x001cfc; 	J(RETN(0));	// 5425                  retn ;~ 01A2:1CFC
loc_11cfd:
	// 4688 
cs=0x1a2;eip=0x001cfd; 	T(XOR(ax, ax));	// 5429                  xor     ax, ax ;~ 01A2:1CFD
cs=0x1a2;eip=0x001cff; 	T(CWD);	// 5430                  cwd ;~ 01A2:1CFF
cs=0x1a2;eip=0x001d00; 	J(RETN(0));	// 5431                  retn ;~ 01A2:1D00

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_11cc6: 	goto loc_11cc6;
        case m2c::kloc_11cfd: 	goto loc_11cfd;
        case m2c::ksub_11c9d: 	goto sub_11c9d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_11d01(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11d01:
    _begin:
cs=0x1a2;eip=0x001d01; 	X(PUSH(ax));	// 5441                  push    ax ;~ 01A2:1D01
cs=0x1a2;eip=0x001d02; 	T(XOR(bx, bx));	// 5442                  xor     bx, bx ;~ 01A2:1D02
cs=0x1a2;eip=0x001d04; 	T(bl = ah;);	// 5443                  mov     bl, ah ;~ 01A2:1D04
cs=0x1a2;eip=0x001d06; 	T(cl = 4;);	// 5444                  mov     cl, 4 ;~ 01A2:1D06
cs=0x1a2;eip=0x001d08; 	T(SHR(bx, cl));	// 5445                  shr     bx, cl ;~ 01A2:1D08
cs=0x1a2;eip=0x001d0a; 	T(SHL(ax, cl));	// 5446                  shl     ax, cl ;~ 01A2:1D0A
cs=0x1a2;eip=0x001d0c; 	T(ds = word_11b3a;);	// 5447                  mov     ds, cs:word_11B3A ;~ 01A2:1D0C
cs=0x1a2;eip=0x001d11; 	X(PUSH(bx));	// 5448                  push    bx ;~ 01A2:1D11
cs=0x1a2;eip=0x001d12; 	X(PUSH(ax));	// 5449                  push    ax ;~ 01A2:1D12
cs=0x1a2;eip=0x001d13; 	J(CALL(____sbrk,0));	// 5450                  call    ____sbrk ;~ 01A2:1D13
cs=0x1a2;eip=0x001d16; 	T(ADD(sp, 4));	// 5451                  add     sp, 4 ;~ 01A2:1D16
cs=0x1a2;eip=0x001d19; 	X(POP(bx));	// 5452                  pop     bx ;~ 01A2:1D19
cs=0x1a2;eip=0x001d1a; 	T(CMP(ax, 0x0FFFF));	// 5453                  cmp     ax, 0FFFFh ;~ 01A2:1D1A
cs=0x1a2;eip=0x001d1d; 	J(JZ(loc_11d57));	// 5454                  jz      short loc_11D57 ;~ 01A2:1D1D
cs=0x1a2;eip=0x001d1f; 	T(AND(ax, 0x0F));	// 5455                  and     ax, 0Fh ;~ 01A2:1D1F
cs=0x1a2;eip=0x001d22; 	J(JNZ(loc_11d3c));	// 5456                  jnz     short loc_11D3C ;~ 01A2:1D22
loc_11d24:
	// 4689 
cs=0x1a2;eip=0x001d24; 	T(cx = _____last;);	// 5459                  mov     cx, cs:_____last ;~ 01A2:1D24
cs=0x1a2;eip=0x001d29; 	X(_____last = dx;);	// 5460                  mov     cs:_____last, dx ;~ 01A2:1D29
cs=0x1a2;eip=0x001d2e; 	T(ds = dx;);	// 5461                  mov     ds, dx ;~ 01A2:1D2E
cs=0x1a2;eip=0x001d30; 	X(*(dw*)(&byte_188e0) = bx;);	// 5462                  mov     word ptr byte_188E0, bx ;~ 01A2:1D30
cs=0x1a2;eip=0x001d34; 	X(*(dw*)(&byte_188e2) = cx;);	// 5463                  mov     word ptr byte_188E2, cx ;~ 01A2:1D34
cs=0x1a2;eip=0x001d38; 	T(ax = 4;);	// 5464                  mov     ax, 4 ;~ 01A2:1D38
cs=0x1a2;eip=0x001d3b; 	J(RETN(0));	// 5465                  retn ;~ 01A2:1D3B
loc_11d3c:
	// 4690 
cs=0x1a2;eip=0x001d3c; 	X(PUSH(bx));	// 5469                  push    bx ;~ 01A2:1D3C
cs=0x1a2;eip=0x001d3d; 	X(PUSH(dx));	// 5470                  push    dx ;~ 01A2:1D3D
cs=0x1a2;eip=0x001d3e; 	T(NEG(ax));	// 5471                  neg     ax ;~ 01A2:1D3E
cs=0x1a2;eip=0x001d40; 	T(ADD(ax, 0x10));	// 5472                  add     ax, 10h ;~ 01A2:1D40
cs=0x1a2;eip=0x001d43; 	T(XOR(bx, bx));	// 5473                  xor     bx, bx ;~ 01A2:1D43
cs=0x1a2;eip=0x001d45; 	X(PUSH(bx));	// 5474                  push    bx ;~ 01A2:1D45
cs=0x1a2;eip=0x001d46; 	X(PUSH(ax));	// 5475                  push    ax ;~ 01A2:1D46
cs=0x1a2;eip=0x001d47; 	J(CALL(____sbrk,0));	// 5476                  call    ____sbrk ;~ 01A2:1D47
cs=0x1a2;eip=0x001d4a; 	T(ADD(sp, 4));	// 5477                  add     sp, 4 ;~ 01A2:1D4A
cs=0x1a2;eip=0x001d4d; 	X(POP(dx));	// 5478                  pop     dx ;~ 01A2:1D4D
cs=0x1a2;eip=0x001d4e; 	X(POP(bx));	// 5479                  pop     bx ;~ 01A2:1D4E
cs=0x1a2;eip=0x001d4f; 	T(CMP(ax, 0x0FFFF));	// 5480                  cmp     ax, 0FFFFh ;~ 01A2:1D4F
cs=0x1a2;eip=0x001d52; 	J(JZ(loc_11d57));	// 5481                  jz      short loc_11D57 ;~ 01A2:1D52
cs=0x1a2;eip=0x001d54; 	T(INC(dx));	// 5482                  inc     dx ;~ 01A2:1D54
cs=0x1a2;eip=0x001d55; 	J(JMP(loc_11d24));	// 5483                  jmp     short loc_11D24 ;~ 01A2:1D55
loc_11d57:
	// 4691 
cs=0x1a2;eip=0x001d57; 	T(XOR(ax, ax));	// 5488                  xor     ax, ax ;~ 01A2:1D57
cs=0x1a2;eip=0x001d59; 	T(CWD);	// 5489                  cwd ;~ 01A2:1D59
cs=0x1a2;eip=0x001d5a; 	J(RETN(0));	// 5490                  retn ;~ 01A2:1D5A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_11d24: 	goto loc_11d24;
        case m2c::kloc_11d3c: 	goto loc_11d3c;
        case m2c::kloc_11d57: 	goto loc_11d57;
        case m2c::ksub_11d01: 	goto sub_11d01;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_11d5b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11d5b:
    _begin:
cs=0x1a2;eip=0x001d5b; 	T(bx = dx;);	// 5499                  mov     bx, dx ;~ 01A2:1D5B
cs=0x1a2;eip=0x001d5d; 	X(SUB(*(dw*)(&byte_188e0), ax));	// 5500                  sub     word ptr byte_188E0, ax ;~ 01A2:1D5D
cs=0x1a2;eip=0x001d61; 	T(ADD(dx, *(dw*)(&byte_188e0)));	// 5501                  add     dx, word ptr byte_188E0 ;~ 01A2:1D61
cs=0x1a2;eip=0x001d65; 	T(ds = dx;);	// 5502                  mov     ds, dx ;~ 01A2:1D65
cs=0x1a2;eip=0x001d67; 	X(*(dw*)(&byte_188e0) = ax;);	// 5503                  mov     word ptr byte_188E0, ax ;~ 01A2:1D67
cs=0x1a2;eip=0x001d6a; 	X(*(dw*)(&byte_188e2) = bx;);	// 5504                  mov     word ptr byte_188E2, bx ;~ 01A2:1D6A
cs=0x1a2;eip=0x001d6e; 	T(bx = dx;);	// 5505                  mov     bx, dx ;~ 01A2:1D6E
cs=0x1a2;eip=0x001d70; 	T(ADD(bx, *(dw*)(&byte_188e0)));	// 5506                  add     bx, word ptr byte_188E0 ;~ 01A2:1D70
cs=0x1a2;eip=0x001d74; 	T(ds = bx;);	// 5507                  mov     ds, bx ;~ 01A2:1D74
cs=0x1a2;eip=0x001d76; 	X(*(dw*)(&byte_188e2) = dx;);	// 5508                  mov     word ptr byte_188E2, dx ;~ 01A2:1D76
cs=0x1a2;eip=0x001d7a; 	T(ax = 4;);	// 5509                  mov     ax, 4 ;~ 01A2:1D7A
cs=0x1a2;eip=0x001d7d; 	J(RETN(0));	// 5510                  retn ;~ 01A2:1D7D

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_11d5b: 	goto sub_11d5b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___malloc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___malloc:
    _begin:
#undef size1
#define size1 6
	// 5522 size1           = word ptr  6 ;~ 01A2:1D7E
cs=0x1a2;eip=0x001d7e; 	X(PUSH(bp));	// 5524                  push    bp ;~ 01A2:1D7E
cs=0x1a2;eip=0x001d7f; 	T(bp = sp;);	// 5525                  mov     bp, sp ;~ 01A2:1D7F
cs=0x1a2;eip=0x001d81; 	T(XOR(dx, dx));	// 5526                  xor     dx, dx ;~ 01A2:1D81
cs=0x1a2;eip=0x001d83; 	T(MOV(ax, *(dw*)(raddr(ss,bp+size1))));	// 5527                  mov     ax, [bp+size1] ;~ 01A2:1D83
cs=0x1a2;eip=0x001d86; 	J(return ___farmalloc(m2c::kloc_11d91, _state););	// 5528                  jmp     short loc_11D91 ;~ 01A2:1D86

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___malloc: 	goto ___malloc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___farmalloc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___farmalloc:
    _begin:
#undef nbytes
#define nbytes 6
	// 5540 nbytes          = dword ptr  6 ;~ 01A2:1D88
cs=0x1a2;eip=0x001d88; 	X(PUSH(bp));	// 5542                  push    bp ;~ 01A2:1D88
cs=0x1a2;eip=0x001d89; 	T(bp = sp;);	// 5543                  mov     bp, sp ;~ 01A2:1D89
cs=0x1a2;eip=0x001d8b; 	T(MOV(dx, *(dw*)(raddr(ss,bp+nbytes+2))));	// 5544                  mov     dx, word ptr [bp+nbytes+2] ;~ 01A2:1D8B
cs=0x1a2;eip=0x001d8e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+nbytes))));	// 5545                  mov     ax, word ptr [bp+nbytes] ;~ 01A2:1D8E
loc_11d91:
	// 4692 
cs=0x1a2;eip=0x001d91; 	T(cx = ax;);	// 5548                  mov     cx, ax ;~ 01A2:1D91
cs=0x1a2;eip=0x001d93; 	T(OR(cx, dx));	// 5549                  or      cx, dx ;~ 01A2:1D93
cs=0x1a2;eip=0x001d95; 	X(PUSH(si));	// 5550                  push    si ;~ 01A2:1D95
cs=0x1a2;eip=0x001d96; 	X(PUSH(di));	// 5551                  push    di ;~ 01A2:1D96
cs=0x1a2;eip=0x001d97; 	X(word_11b3a = ds;);	// 5552                  mov     cs:word_11B3A, ds ;~ 01A2:1D97
cs=0x1a2;eip=0x001d9c; 	J(JZ(loc_11dfc));	// 5553                  jz      short loc_11DFC ;~ 01A2:1D9C
cs=0x1a2;eip=0x001d9e; 	T(ADD(ax, 0x13));	// 5554                  add     ax, 13h ;~ 01A2:1D9E
cs=0x1a2;eip=0x001da1; 	T(ADC(dx, 0));	// 5555                  adc     dx, 0 ;~ 01A2:1DA1
cs=0x1a2;eip=0x001da4; 	J(JC(loc_11de7));	// 5556                  jb      short loc_11DE7 ;~ 01A2:1DA4
cs=0x1a2;eip=0x001da6; 	T(TEST(dx, 0x0FFF0));	// 5557                  test    dx, 0FFF0h ;~ 01A2:1DA6
cs=0x1a2;eip=0x001daa; 	J(JNZ(loc_11de7));	// 5558                  jnz     short loc_11DE7 ;~ 01A2:1DAA
cs=0x1a2;eip=0x001dac; 	T(cl = 4;);	// 5559                  mov     cl, 4 ;~ 01A2:1DAC
cs=0x1a2;eip=0x001dae; 	T(SHR(ax, cl));	// 5560                  shr     ax, cl ;~ 01A2:1DAE
cs=0x1a2;eip=0x001db0; 	T(SHL(dx, cl));	// 5561                  shl     dx, cl ;~ 01A2:1DB0
cs=0x1a2;eip=0x001db2; 	T(OR(ah, dl));	// 5562                  or      ah, dl ;~ 01A2:1DB2
cs=0x1a2;eip=0x001db4; 	T(dx = _____first;);	// 5563                  mov     dx, cs:_____first ;~ 01A2:1DB4
cs=0x1a2;eip=0x001db9; 	T(OR(dx, dx));	// 5564                  or      dx, dx ;~ 01A2:1DB9
cs=0x1a2;eip=0x001dbb; 	J(JZ(loc_11ddd));	// 5565                  jz      short loc_11DDD ;~ 01A2:1DBB
cs=0x1a2;eip=0x001dbd; 	T(dx = _____rover;);	// 5566                  mov     dx, cs:_____rover ;~ 01A2:1DBD
cs=0x1a2;eip=0x001dc2; 	T(OR(dx, dx));	// 5567                  or      dx, dx ;~ 01A2:1DC2
cs=0x1a2;eip=0x001dc4; 	J(JZ(loc_11dd8));	// 5568                  jz      short loc_11DD8 ;~ 01A2:1DC4
cs=0x1a2;eip=0x001dc6; 	T(bx = dx;);	// 5569                  mov     bx, dx ;~ 01A2:1DC6
loc_11dc8:
	// 4693 
cs=0x1a2;eip=0x001dc8; 	T(ds = dx;);	// 5572                  mov     ds, dx ;~ 01A2:1DC8
cs=0x1a2;eip=0x001dca; 	T(CMP(*(dw*)(&byte_188e0), ax));	// 5573                  cmp     word ptr byte_188E0, ax ;~ 01A2:1DCA
cs=0x1a2;eip=0x001dce; 	J(JNC(loc_11dec));	// 5574                  jnb     short loc_11DEC ;~ 01A2:1DCE
cs=0x1a2;eip=0x001dd0; 	T(dx = *(dw*)(&byte_188e6););	// 5575                  mov     dx, word ptr byte_188E6 ;~ 01A2:1DD0
cs=0x1a2;eip=0x001dd4; 	T(CMP(dx, bx));	// 5576                  cmp     dx, bx ;~ 01A2:1DD4
cs=0x1a2;eip=0x001dd6; 	J(JNZ(loc_11dc8));	// 5577                  jnz     short loc_11DC8 ;~ 01A2:1DD6
loc_11dd8:
	// 4694 
cs=0x1a2;eip=0x001dd8; 	J(CALL(sub_11d01,0));	// 5580                  call    sub_11D01 ;~ 01A2:1DD8
cs=0x1a2;eip=0x001ddb; 	J(JMP(loc_11dfc));	// 5581                  jmp     short loc_11DFC ;~ 01A2:1DDB
loc_11ddd:
	// 4695 
cs=0x1a2;eip=0x001ddd; 	J(CALL(sub_11c9d,0));	// 5586                  call    sub_11C9D ;~ 01A2:1DDD
cs=0x1a2;eip=0x001de0; 	J(JMP(loc_11dfc));	// 5588                  jmp     short loc_11DFC ;~ 01A2:1DE0
loc_11de2:
	// 4696 
cs=0x1a2;eip=0x001de2; 	J(CALL(sub_11d5b,0));	// 5592                  call    sub_11D5B ;~ 01A2:1DE2
cs=0x1a2;eip=0x001de5; 	J(JMP(loc_11dfc));	// 5593                  jmp     short loc_11DFC ;~ 01A2:1DE5
loc_11de7:
	// 4697 
cs=0x1a2;eip=0x001de7; 	T(XOR(ax, ax));	// 5598                  xor     ax, ax ;~ 01A2:1DE7
cs=0x1a2;eip=0x001de9; 	T(CWD);	// 5599                  cwd ;~ 01A2:1DE9
cs=0x1a2;eip=0x001dea; 	J(JMP(loc_11dfc));	// 5600                  jmp     short loc_11DFC ;~ 01A2:1DEA
loc_11dec:
	// 4698 
cs=0x1a2;eip=0x001dec; 	J(JA(loc_11de2));	// 5604                  ja      short loc_11DE2 ;~ 01A2:1DEC
cs=0x1a2;eip=0x001dee; 	J(CALL(sub_11c14,0));	// 5605                  call    sub_11C14 ;~ 01A2:1DEE
cs=0x1a2;eip=0x001df1; 	T(MOV(bx, *(dw*)(raddr(ds,8))));	// 5606                  mov     bx, ds:8 ;~ 01A2:1DF1
cs=0x1a2;eip=0x001df5; 	X(MOV(*(dw*)(raddr(ds,2)), bx));	// 5607                  mov     ds:2, bx ;~ 01A2:1DF5
cs=0x1a2;eip=0x001df9; 	T(ax = offset(dseg,byte_188e4););	// 5608                  mov     ax, offset byte_188E4 ;~ 01A2:1DF9
loc_11dfc:
	// 4699 
cs=0x1a2;eip=0x001dfc; 	T(ds = word_11b3a;);	// 5612                  mov     ds, cs:word_11B3A ;~ 01A2:1DFC
cs=0x1a2;eip=0x001e01; 	X(POP(di));	// 5614                  pop     di ;~ 01A2:1E01
cs=0x1a2;eip=0x001e02; 	X(POP(si));	// 5615                  pop     si ;~ 01A2:1E02
cs=0x1a2;eip=0x001e03; 	X(POP(bp));	// 5616                  pop     bp ;~ 01A2:1E03
cs=0x1a2;eip=0x001e04; 	J(RETF(0));	// 5617                  retf ;~ 01A2:1E04

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___farmalloc: 	goto ___farmalloc;
        case m2c::kloc_11d91: 	goto loc_11d91;
        case m2c::kloc_11dc8: 	goto loc_11dc8;
        case m2c::kloc_11dd8: 	goto loc_11dd8;
        case m2c::kloc_11ddd: 	goto loc_11ddd;
        case m2c::kloc_11de2: 	goto loc_11de2;
        case m2c::kloc_11de7: 	goto loc_11de7;
        case m2c::kloc_11dec: 	goto loc_11dec;
        case m2c::kloc_11dfc: 	goto loc_11dfc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_11e05(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11e05:
    _begin:
cs=0x1a2;eip=0x001e05; 	X(PUSH(bx));	// 5626                  push    bx ;~ 01A2:1E05
cs=0x1a2;eip=0x001e06; 	T(si = *(dw*)(&byte_11b3c););	// 5627                  mov     si, word ptr cs:byte_11B3C ;~ 01A2:1E06
cs=0x1a2;eip=0x001e0b; 	X(PUSH(si));	// 5628                  push    si ;~ 01A2:1E0B
cs=0x1a2;eip=0x001e0c; 	T(si = *(dw*)(&__nbytes););	// 5629                  mov     si, word ptr cs:__nbytes ;~ 01A2:1E0C
cs=0x1a2;eip=0x001e11; 	X(PUSH(si));	// 5630                  push    si              ; nbytes ;~ 01A2:1E11
cs=0x1a2;eip=0x001e12; 	X(PUSH(cs));	// 5631                  push    cs ;~ 01A2:1E12
cs=0x1a2;eip=0x001e13; 	J(CALL(___farmalloc,0));	// 5632                  call    near ptr ___farmalloc ;~ 01A2:1E13
cs=0x1a2;eip=0x001e16; 	T(ADD(sp, 4));	// 5633                  add     sp, 4 ;~ 01A2:1E16
cs=0x1a2;eip=0x001e19; 	T(OR(dx, dx));	// 5634                  or      dx, dx ;~ 01A2:1E19
cs=0x1a2;eip=0x001e1b; 	J(JNZ(loc_11e1f));	// 5635                  jnz     short loc_11E1F ;~ 01A2:1E1B
cs=0x1a2;eip=0x001e1d; 	X(POP(bx));	// 5636                  pop     bx ;~ 01A2:1E1D
cs=0x1a2;eip=0x001e1e; 	J(RETN(0));	// 5637                  retn ;~ 01A2:1E1E
loc_11e1f:
	// 4700 
cs=0x1a2;eip=0x001e1f; 	X(POP(ds));	// 5641                  pop     ds ;~ 01A2:1E1F
cs=0x1a2;eip=0x001e20; 	T(es = dx;);	// 5642                  mov     es, dx ;~ 01A2:1E20
cs=0x1a2;eip=0x001e22; 	X(PUSH(es));	// 5644                  push    es ;~ 01A2:1E22
cs=0x1a2;eip=0x001e23; 	X(PUSH(ds));	// 5645                  push    ds ;~ 01A2:1E23
cs=0x1a2;eip=0x001e24; 	X(PUSH(bx));	// 5646                  push    bx              ; block ;~ 01A2:1E24
cs=0x1a2;eip=0x001e25; 	T(dx = *(dw*)(&byte_188e0););	// 5647                  mov     dx, word ptr byte_188E0 ;~ 01A2:1E25
cs=0x1a2;eip=0x001e29; 	T(CLD);	// 5648                  cld ;~ 01A2:1E29
cs=0x1a2;eip=0x001e2a; 	T(DEC(dx));	// 5649                  dec     dx ;~ 01A2:1E2A
cs=0x1a2;eip=0x001e2b; 	T(di = 4;);	// 5650                  mov     di, 4 ;~ 01A2:1E2B
cs=0x1a2;eip=0x001e2e; 	T(si = di;);	// 5651                  mov     si, di ;~ 01A2:1E2E
cs=0x1a2;eip=0x001e30; 	T(cx = 6;);	// 5652                  mov     cx, 6 ;~ 01A2:1E30
	// 5653                  rep movsw ;~ 01A2:1E33
cs=0x1a2;eip=0x001e33; 	X(	REP MOVSW);	// 5653                  rep movsw ;~ 01A2:1E33
cs=0x1a2;eip=0x001e35; 	T(OR(dx, dx));	// 5654                  or      dx, dx ;~ 01A2:1E35
cs=0x1a2;eip=0x001e37; 	J(JZ(loc_11e70));	// 5655                  jz      short loc_11E70 ;~ 01A2:1E37
cs=0x1a2;eip=0x001e39; 	T(ax = es;);	// 5656                  mov     ax, es ;~ 01A2:1E39
cs=0x1a2;eip=0x001e3b; 	T(INC(ax));	// 5657                  inc     ax ;~ 01A2:1E3B
cs=0x1a2;eip=0x001e3c; 	T(es = ax;);	// 5658                  mov     es, ax ;~ 01A2:1E3C
cs=0x1a2;eip=0x001e3e; 	T(ax = ds;);	// 5660                  mov     ax, ds ;~ 01A2:1E3E
cs=0x1a2;eip=0x001e40; 	T(INC(ax));	// 5661                  inc     ax ;~ 01A2:1E40
cs=0x1a2;eip=0x001e41; 	T(ds = ax;);	// 5662                  mov     ds, ax ;~ 01A2:1E41
loc_11e43:
	// 4701 
cs=0x1a2;eip=0x001e43; 	T(XOR(di, di));	// 5666                  xor     di, di ;~ 01A2:1E43
cs=0x1a2;eip=0x001e45; 	T(si = di;);	// 5667                  mov     si, di ;~ 01A2:1E45
cs=0x1a2;eip=0x001e47; 	T(cx = dx;);	// 5668                  mov     cx, dx ;~ 01A2:1E47
cs=0x1a2;eip=0x001e49; 	T(CMP(cx, 0x1000));	// 5669                  cmp     cx, 1000h ;~ 01A2:1E49
cs=0x1a2;eip=0x001e4d; 	J(JBE(loc_11e52));	// 5670                  jbe     short loc_11E52 ;~ 01A2:1E4D
cs=0x1a2;eip=0x001e4f; 	T(cx = 0x1000;);	// 5671                  mov     cx, 1000h ;~ 01A2:1E4F
loc_11e52:
	// 4702 
cs=0x1a2;eip=0x001e52; 	T(SHL(cx, 1));	// 5674                  shl     cx, 1 ;~ 01A2:1E52
cs=0x1a2;eip=0x001e54; 	T(SHL(cx, 1));	// 5675                  shl     cx, 1 ;~ 01A2:1E54
cs=0x1a2;eip=0x001e56; 	T(SHL(cx, 1));	// 5676                  shl     cx, 1 ;~ 01A2:1E56
	// 5677                  rep movsw ;~ 01A2:1E58
cs=0x1a2;eip=0x001e58; 	X(	REP MOVSW);	// 5677                  rep movsw ;~ 01A2:1E58
cs=0x1a2;eip=0x001e5a; 	T(SUB(dx, 0x1000));	// 5678                  sub     dx, 1000h ;~ 01A2:1E5A
cs=0x1a2;eip=0x001e5e; 	J(JBE(loc_11e70));	// 5679                  jbe     short loc_11E70 ;~ 01A2:1E5E
cs=0x1a2;eip=0x001e60; 	T(ax = es;);	// 5680                  mov     ax, es ;~ 01A2:1E60
cs=0x1a2;eip=0x001e62; 	T(ADD(ax, 0x1000));	// 5681                  add     ax, 1000h ;~ 01A2:1E62
cs=0x1a2;eip=0x001e65; 	T(es = ax;);	// 5682                  mov     es, ax ;~ 01A2:1E65
cs=0x1a2;eip=0x001e67; 	T(ax = ds;);	// 5684                  mov     ax, ds ;~ 01A2:1E67
cs=0x1a2;eip=0x001e69; 	T(ADD(ax, 0x1000));	// 5685                  add     ax, 1000h ;~ 01A2:1E69
cs=0x1a2;eip=0x001e6c; 	T(ds = ax;);	// 5686                  mov     ds, ax ;~ 01A2:1E6C
cs=0x1a2;eip=0x001e6e; 	J(JMP(loc_11e43));	// 5688                  jmp     short loc_11E43 ;~ 01A2:1E6E
loc_11e70:
	// 4703 
cs=0x1a2;eip=0x001e70; 	T(ds = word_11b3a;);	// 5693                  mov     ds, cs:word_11B3A ;~ 01A2:1E70
cs=0x1a2;eip=0x001e75; 	X(PUSH(cs));	// 5695                  push    cs ;~ 01A2:1E75
cs=0x1a2;eip=0x001e76; 	J(CALL(___farfree,0));	// 5696                  call    near ptr ___farfree ;~ 01A2:1E76
cs=0x1a2;eip=0x001e79; 	T(ADD(sp, 4));	// 5697                  add     sp, 4 ;~ 01A2:1E79
cs=0x1a2;eip=0x001e7c; 	X(POP(dx));	// 5698                  pop     dx ;~ 01A2:1E7C
cs=0x1a2;eip=0x001e7d; 	T(ax = 4;);	// 5699                  mov     ax, 4 ;~ 01A2:1E7D
cs=0x1a2;eip=0x001e80; 	J(RETN(0));	// 5700                  retn ;~ 01A2:1E80

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_11e1f: 	goto loc_11e1f;
        case m2c::kloc_11e43: 	goto loc_11e43;
        case m2c::kloc_11e52: 	goto loc_11e52;
        case m2c::kloc_11e70: 	goto loc_11e70;
        case m2c::ksub_11e05: 	goto sub_11e05;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_11e81(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11e81:
    _begin:
cs=0x1a2;eip=0x001e81; 	T(CMP(bx, _____last));	// 5710                  cmp     bx, cs:_____last ;~ 01A2:1E81
cs=0x1a2;eip=0x001e86; 	J(JZ(loc_11ecd));	// 5711                  jz      short loc_11ECD ;~ 01A2:1E86
cs=0x1a2;eip=0x001e88; 	T(di = bx;);	// 5712                  mov     di, bx ;~ 01A2:1E88
cs=0x1a2;eip=0x001e8a; 	T(ADD(di, ax));	// 5713                  add     di, ax ;~ 01A2:1E8A
cs=0x1a2;eip=0x001e8c; 	T(es = di;);	// 5714                  mov     es, di ;~ 01A2:1E8C
cs=0x1a2;eip=0x001e8e; 	T(si = cx;);	// 5716                  mov     si, cx ;~ 01A2:1E8E
cs=0x1a2;eip=0x001e90; 	T(SUB(si, ax));	// 5717                  sub     si, ax ;~ 01A2:1E90
cs=0x1a2;eip=0x001e92; 	X(MOV(*(dw*)(raddr(es,0)), si));	// 5718                  mov     es:0, si ;~ 01A2:1E92
cs=0x1a2;eip=0x001e97; 	X(MOV(*(dw*)(raddr(es,2)), bx));	// 5719                  mov     es:2, bx ;~ 01A2:1E97
cs=0x1a2;eip=0x001e9c; 	X(PUSH(es));	// 5720                  push    es ;~ 01A2:1E9C
cs=0x1a2;eip=0x001e9d; 	X(PUSH(ax));	// 5721                  push    ax              ; block ;~ 01A2:1E9D
cs=0x1a2;eip=0x001e9e; 	T(es = bx;);	// 5722                  mov     es, bx ;~ 01A2:1E9E
cs=0x1a2;eip=0x001ea0; 	X(MOV(*(dw*)(raddr(es,0)), ax));	// 5723                  mov     es:0, ax ;~ 01A2:1EA0
cs=0x1a2;eip=0x001ea4; 	T(dx = bx;);	// 5724                  mov     dx, bx ;~ 01A2:1EA4
cs=0x1a2;eip=0x001ea6; 	T(ADD(dx, cx));	// 5725                  add     dx, cx ;~ 01A2:1EA6
cs=0x1a2;eip=0x001ea8; 	T(es = dx;);	// 5726                  mov     es, dx ;~ 01A2:1EA8
cs=0x1a2;eip=0x001eaa; 	T(CMP(*(dw*)(raddr(es,2)), 0));	// 5727                  cmp     word ptr es:2, 0 ;~ 01A2:1EAA
cs=0x1a2;eip=0x001eb0; 	J(JZ(loc_11eb9));	// 5728                  jz      short loc_11EB9 ;~ 01A2:1EB0
cs=0x1a2;eip=0x001eb2; 	X(MOV(*(dw*)(raddr(es,2)), di));	// 5729                  mov     es:2, di ;~ 01A2:1EB2
cs=0x1a2;eip=0x001eb7; 	J(JMP(loc_11ebe));	// 5730                  jmp     short loc_11EBE ;~ 01A2:1EB7
loc_11eb9:
	// 4704 
cs=0x1a2;eip=0x001eb9; 	X(MOV(*(dw*)(raddr(es,8)), di));	// 5734                  mov     es:8, di ;~ 01A2:1EB9
loc_11ebe:
	// 4705 
cs=0x1a2;eip=0x001ebe; 	T(si = bx;);	// 5737                  mov     si, bx ;~ 01A2:1EBE
cs=0x1a2;eip=0x001ec0; 	X(PUSH(cs));	// 5738                  push    cs ;~ 01A2:1EC0
cs=0x1a2;eip=0x001ec1; 	J(CALL(___farfree,0));	// 5739                  call    near ptr ___farfree ;~ 01A2:1EC1
cs=0x1a2;eip=0x001ec4; 	T(ADD(sp, 4));	// 5740                  add     sp, 4 ;~ 01A2:1EC4
cs=0x1a2;eip=0x001ec7; 	T(dx = si;);	// 5741                  mov     dx, si ;~ 01A2:1EC7
cs=0x1a2;eip=0x001ec9; 	T(ax = 4;);	// 5742                  mov     ax, 4 ;~ 01A2:1EC9
cs=0x1a2;eip=0x001ecc; 	J(RETN(0));	// 5743                  retn ;~ 01A2:1ECC
loc_11ecd:
	// 4706 
cs=0x1a2;eip=0x001ecd; 	X(PUSH(bx));	// 5747                  push    bx ;~ 01A2:1ECD
cs=0x1a2;eip=0x001ece; 	T(es = bx;);	// 5748                  mov     es, bx ;~ 01A2:1ECE
cs=0x1a2;eip=0x001ed0; 	X(MOV(*(dw*)(raddr(es,0)), ax));	// 5749                  mov     es:0, ax ;~ 01A2:1ED0
cs=0x1a2;eip=0x001ed4; 	T(ADD(bx, ax));	// 5750                  add     bx, ax ;~ 01A2:1ED4
cs=0x1a2;eip=0x001ed6; 	X(PUSH(bx));	// 5751                  push    bx ;~ 01A2:1ED6
cs=0x1a2;eip=0x001ed7; 	T(XOR(ax, ax));	// 5752                  xor     ax, ax ;~ 01A2:1ED7
cs=0x1a2;eip=0x001ed9; 	X(PUSH(ax));	// 5753                  push    ax ;~ 01A2:1ED9
cs=0x1a2;eip=0x001eda; 	J(CALL(____brk,0));	// 5754                  call    ____brk ;~ 01A2:1EDA
cs=0x1a2;eip=0x001edd; 	T(ADD(sp, 4));	// 5755                  add     sp, 4 ;~ 01A2:1EDD
cs=0x1a2;eip=0x001ee0; 	X(POP(dx));	// 5756                  pop     dx ;~ 01A2:1EE0
cs=0x1a2;eip=0x001ee1; 	T(ax = 4;);	// 5757                  mov     ax, 4 ;~ 01A2:1EE1
cs=0x1a2;eip=0x001ee4; 	J(RETN(0));	// 5758                  retn ;~ 01A2:1EE4

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_11eb9: 	goto loc_11eb9;
        case m2c::kloc_11ebe: 	goto loc_11ebe;
        case m2c::kloc_11ecd: 	goto loc_11ecd;
        case m2c::ksub_11e81: 	goto sub_11e81;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___realloc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___realloc:
    _begin:
#undef arg_2
#define arg_2 8
	// 5769 arg_2           = word ptr  8 ;~ 01A2:1EE5
#undef size1
#define size1 0x0A
	// 5770 size1           = word ptr  0Ah ;~ 01A2:1EE5
#undef arg_6
#define arg_6 0x0C
	// 5771 arg_6           = word ptr  0Ch ;~ 01A2:1EE5
cs=0x1a2;eip=0x001ee5; 	X(PUSH(bp));	// 5773                  push    bp ;~ 01A2:1EE5
cs=0x1a2;eip=0x001ee6; 	T(bp = sp;);	// 5774                  mov     bp, sp ;~ 01A2:1EE6
cs=0x1a2;eip=0x001ee8; 	T(XOR(dx, dx));	// 5775                  xor     dx, dx ;~ 01A2:1EE8
cs=0x1a2;eip=0x001eea; 	J(JMP(loc_11ef2));	// 5776                  jmp     short loc_11EF2 ;~ 01A2:1EEA
___farrealloc:
	// 4707 
cs=0x1a2;eip=0x001eec; 	X(PUSH(bp));	// 5781                  push    bp ;~ 01A2:1EEC
cs=0x1a2;eip=0x001eed; 	T(bp = sp;);	// 5782                  mov     bp, sp ;~ 01A2:1EED
cs=0x1a2;eip=0x001eef; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 5783                  mov     dx, [bp+arg_6] ;~ 01A2:1EEF
loc_11ef2:
	// 4708 
cs=0x1a2;eip=0x001ef2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+size1))));	// 5786                  mov     ax, [bp+size1] ;~ 01A2:1EF2
cs=0x1a2;eip=0x001ef5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 5787                  mov     bx, [bp+arg_2] ;~ 01A2:1EF5
cs=0x1a2;eip=0x001ef8; 	X(PUSH(si));	// 5788                  push    si ;~ 01A2:1EF8
cs=0x1a2;eip=0x001ef9; 	X(PUSH(di));	// 5789                  push    di ;~ 01A2:1EF9
cs=0x1a2;eip=0x001efa; 	X(word_11b3a = ds;);	// 5790                  mov     cs:word_11B3A, ds ;~ 01A2:1EFA
cs=0x1a2;eip=0x001eff; 	X(*(dw*)(&byte_11b3c) = dx;);	// 5791                  mov     word ptr cs:byte_11B3C, dx ;~ 01A2:1EFF
cs=0x1a2;eip=0x001f04; 	X(*(dw*)(&__nbytes) = ax;);	// 5792                  mov     word ptr cs:__nbytes, ax ;~ 01A2:1F04
cs=0x1a2;eip=0x001f08; 	T(OR(bx, bx));	// 5793                  or      bx, bx ;~ 01A2:1F08
cs=0x1a2;eip=0x001f0a; 	J(JZ(loc_11f46));	// 5794                  jz      short loc_11F46 ;~ 01A2:1F0A
cs=0x1a2;eip=0x001f0c; 	T(cx = ax;);	// 5795                  mov     cx, ax ;~ 01A2:1F0C
cs=0x1a2;eip=0x001f0e; 	T(OR(cx, dx));	// 5796                  or      cx, dx ;~ 01A2:1F0E
cs=0x1a2;eip=0x001f10; 	J(JZ(loc_11f51));	// 5797                  jz      short loc_11F51 ;~ 01A2:1F10
cs=0x1a2;eip=0x001f12; 	T(ADD(ax, 0x13));	// 5798                  add     ax, 13h ;~ 01A2:1F12
cs=0x1a2;eip=0x001f15; 	T(ADC(dx, 0));	// 5799                  adc     dx, 0 ;~ 01A2:1F15
cs=0x1a2;eip=0x001f18; 	J(JC(loc_11f5a));	// 5800                  jb      short loc_11F5A ;~ 01A2:1F18
cs=0x1a2;eip=0x001f1a; 	T(TEST(dx, 0x0FFF0));	// 5801                  test    dx, 0FFF0h ;~ 01A2:1F1A
cs=0x1a2;eip=0x001f1e; 	J(JNZ(loc_11f5a));	// 5802                  jnz     short loc_11F5A ;~ 01A2:1F1E
cs=0x1a2;eip=0x001f20; 	T(cl = 4;);	// 5803                  mov     cl, 4 ;~ 01A2:1F20
cs=0x1a2;eip=0x001f22; 	T(SHR(ax, cl));	// 5804                  shr     ax, cl ;~ 01A2:1F22
cs=0x1a2;eip=0x001f24; 	T(SHL(dx, cl));	// 5805                  shl     dx, cl ;~ 01A2:1F24
cs=0x1a2;eip=0x001f26; 	T(OR(ah, dl));	// 5806                  or      ah, dl          ; block ;~ 01A2:1F26
cs=0x1a2;eip=0x001f28; 	T(es = bx;);	// 5807                  mov     es, bx ;~ 01A2:1F28
cs=0x1a2;eip=0x001f2a; 	T(MOV(cx, *(dw*)(raddr(es,0))));	// 5808                  mov     cx, es:0 ;~ 01A2:1F2A
cs=0x1a2;eip=0x001f2f; 	T(CMP(cx, ax));	// 5809                  cmp     cx, ax ;~ 01A2:1F2F
cs=0x1a2;eip=0x001f31; 	J(JC(loc_11f41));	// 5810                  jb      short loc_11F41 ;~ 01A2:1F31
cs=0x1a2;eip=0x001f33; 	J(JA(loc_11f3c));	// 5811                  ja      short loc_11F3C ;~ 01A2:1F33
cs=0x1a2;eip=0x001f35; 	T(dx = bx;);	// 5812                  mov     dx, bx ;~ 01A2:1F35
cs=0x1a2;eip=0x001f37; 	T(ax = 4;);	// 5813                  mov     ax, 4 ;~ 01A2:1F37
cs=0x1a2;eip=0x001f3a; 	J(JMP(loc_11f5d));	// 5814                  jmp     short loc_11F5D ;~ 01A2:1F3A
loc_11f3c:
	// 4709 
cs=0x1a2;eip=0x001f3c; 	J(CALL(sub_11e81,0));	// 5818                  call    sub_11E81 ;~ 01A2:1F3C
cs=0x1a2;eip=0x001f3f; 	J(JMP(loc_11f5d));	// 5819                  jmp     short loc_11F5D ;~ 01A2:1F3F
loc_11f41:
	// 4710 
cs=0x1a2;eip=0x001f41; 	J(CALL(sub_11e05,0));	// 5823                  call    sub_11E05 ;~ 01A2:1F41
cs=0x1a2;eip=0x001f44; 	J(JMP(loc_11f5d));	// 5824                  jmp     short loc_11F5D ;~ 01A2:1F44
loc_11f46:
	// 4711 
cs=0x1a2;eip=0x001f46; 	X(PUSH(dx));	// 5828                  push    dx ;~ 01A2:1F46
cs=0x1a2;eip=0x001f47; 	X(PUSH(ax));	// 5829                  push    ax              ; nbytes ;~ 01A2:1F47
cs=0x1a2;eip=0x001f48; 	X(PUSH(cs));	// 5830                  push    cs ;~ 01A2:1F48
cs=0x1a2;eip=0x001f49; 	J(CALL(___farmalloc,0));	// 5831                  call    near ptr ___farmalloc ;~ 01A2:1F49
cs=0x1a2;eip=0x001f4c; 	T(ADD(sp, 4));	// 5832                  add     sp, 4 ;~ 01A2:1F4C
cs=0x1a2;eip=0x001f4f; 	J(JMP(loc_11f5d));	// 5833                  jmp     short loc_11F5D ;~ 01A2:1F4F
loc_11f51:
	// 4712 
cs=0x1a2;eip=0x001f51; 	X(PUSH(bx));	// 5837                  push    bx ;~ 01A2:1F51
cs=0x1a2;eip=0x001f52; 	X(PUSH(ax));	// 5838                  push    ax              ; block ;~ 01A2:1F52
cs=0x1a2;eip=0x001f53; 	X(PUSH(cs));	// 5839                  push    cs ;~ 01A2:1F53
cs=0x1a2;eip=0x001f54; 	J(CALL(___farfree,0));	// 5840                  call    near ptr ___farfree ;~ 01A2:1F54
cs=0x1a2;eip=0x001f57; 	T(ADD(sp, 4));	// 5841                  add     sp, 4 ;~ 01A2:1F57
loc_11f5a:
	// 4713 
cs=0x1a2;eip=0x001f5a; 	T(XOR(ax, ax));	// 5845                  xor     ax, ax ;~ 01A2:1F5A
cs=0x1a2;eip=0x001f5c; 	T(CWD);	// 5846                  cwd ;~ 01A2:1F5C
loc_11f5d:
	// 4714 
cs=0x1a2;eip=0x001f5d; 	T(ds = word_11b3a;);	// 5850                  mov     ds, cs:word_11B3A ;~ 01A2:1F5D
cs=0x1a2;eip=0x001f62; 	X(POP(di));	// 5851                  pop     di ;~ 01A2:1F62
cs=0x1a2;eip=0x001f63; 	X(POP(si));	// 5852                  pop     si ;~ 01A2:1F63
cs=0x1a2;eip=0x001f64; 	X(POP(bp));	// 5853                  pop     bp ;~ 01A2:1F64
cs=0x1a2;eip=0x001f65; 	J(RETF(0));	// 5854                  retf ;~ 01A2:1F65

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___farrealloc: 	goto ___farrealloc;
        case m2c::k___realloc: 	goto ___realloc;
        case m2c::kloc_11ef2: 	goto loc_11ef2;
        case m2c::kloc_11f3c: 	goto loc_11f3c;
        case m2c::kloc_11f41: 	goto loc_11f41;
        case m2c::kloc_11f46: 	goto loc_11f46;
        case m2c::kloc_11f51: 	goto loc_11f51;
        case m2c::kloc_11f5a: 	goto loc_11f5a;
        case m2c::kloc_11f5d: 	goto loc_11f5d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_11f66(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11f66:
    _begin:
#undef arg_0
#define arg_0 4
	// 5865 arg_0           = word ptr  4 ;~ 01A2:1F66
#undef arg_2
#define arg_2 6
	// 5866 arg_2           = word ptr  6 ;~ 01A2:1F66
cs=0x1a2;eip=0x001f66; 	X(PUSH(bp));	// 5868                  push    bp ;~ 01A2:1F66
cs=0x1a2;eip=0x001f67; 	T(bp = sp;);	// 5869                  mov     bp, sp ;~ 01A2:1F67
cs=0x1a2;eip=0x001f69; 	X(PUSH(si));	// 5870                  push    si ;~ 01A2:1F69
cs=0x1a2;eip=0x001f6a; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 5871                  mov     si, [bp+arg_2] ;~ 01A2:1F6A
cs=0x1a2;eip=0x001f6d; 	T(INC(si));	// 5872                  inc     si ;~ 01A2:1F6D
cs=0x1a2;eip=0x001f6e; 	T(SUB(si, __segx));	// 5873                  sub     si, __segx ;~ 01A2:1F6E
cs=0x1a2;eip=0x001f72; 	T(ADD(si, 0x3F));	// 5874                  add     si, 3Fh ; '?' ;~ 01A2:1F72
cs=0x1a2;eip=0x001f75; 	T(cl = 6;);	// 5875                  mov     cl, 6 ;~ 01A2:1F75
cs=0x1a2;eip=0x001f77; 	T(SHR(si, cl));	// 5876                  shr     si, cl ;~ 01A2:1F77
cs=0x1a2;eip=0x001f79; 	T(CMP(si, word_1929a));	// 5877                  cmp     si, word_1929A ;~ 01A2:1F79
cs=0x1a2;eip=0x001f7d; 	J(JNZ(loc_11f91));	// 5878                  jnz     short loc_11F91 ;~ 01A2:1F7D
loc_11f7f:
	// 4715 
cs=0x1a2;eip=0x001f7f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 5881                  mov     ax, [bp+arg_2] ;~ 01A2:1F7F
cs=0x1a2;eip=0x001f82; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_0))));	// 5882                  mov     dx, [bp+arg_0] ;~ 01A2:1F82
cs=0x1a2;eip=0x001f85; 	X(word_1896d = ax;);	// 5883                  mov     word_1896D, ax ;~ 01A2:1F85
cs=0x1a2;eip=0x001f88; 	X(word_1896b = dx;);	// 5884                  mov     word_1896B, dx ;~ 01A2:1F88
cs=0x1a2;eip=0x001f8c; 	T(ax = 1;);	// 5885                  mov     ax, 1 ;~ 01A2:1F8C
cs=0x1a2;eip=0x001f8f; 	J(JMP(loc_11fd7));	// 5886                  jmp     short loc_11FD7 ;~ 01A2:1F8F
loc_11f91:
	// 4716 
cs=0x1a2;eip=0x001f91; 	T(cl = 6;);	// 5891                  mov     cl, 6 ;~ 01A2:1F91
cs=0x1a2;eip=0x001f93; 	T(SHL(si, cl));	// 5892                  shl     si, cl ;~ 01A2:1F93
cs=0x1a2;eip=0x001f95; 	T(dx = word_18971;);	// 5893                  mov     dx, word_18971 ;~ 01A2:1F95
cs=0x1a2;eip=0x001f99; 	T(ax = si;);	// 5894                  mov     ax, si ;~ 01A2:1F99
cs=0x1a2;eip=0x001f9b; 	T(ADD(ax, __segx));	// 5895                  add     ax, __segx ;~ 01A2:1F9B
cs=0x1a2;eip=0x001f9f; 	T(CMP(ax, dx));	// 5896                  cmp     ax, dx ;~ 01A2:1F9F
cs=0x1a2;eip=0x001fa1; 	J(JBE(loc_11fa9));	// 5897                  jbe     short loc_11FA9 ;~ 01A2:1FA1
cs=0x1a2;eip=0x001fa3; 	T(si = dx;);	// 5898                  mov     si, dx ;~ 01A2:1FA3
cs=0x1a2;eip=0x001fa5; 	T(SUB(si, __segx));	// 5899                  sub     si, __segx ;~ 01A2:1FA5
loc_11fa9:
	// 4717 
cs=0x1a2;eip=0x001fa9; 	X(PUSH(si));	// 5902                  push    si              ; newsize ;~ 01A2:1FA9
cs=0x1a2;eip=0x001faa; 	X(PUSH(__segx));	// 5903                  push    __segx          ; segx ;~ 01A2:1FAA
cs=0x1a2;eip=0x001fae; 	T(NOP);	// 5904                  nop ;~ 01A2:1FAE
cs=0x1a2;eip=0x001faf; 	X(PUSH(cs));	// 5905                  push    cs ;~ 01A2:1FAF
cs=0x1a2;eip=0x001fb0; 	J(CALL(___setblock,0));	// 5906                  call    near ptr ___setblock ;~ 01A2:1FB0
cs=0x1a2;eip=0x001fb3; 	X(POP(cx));	// 5908                  pop     cx ;~ 01A2:1FB3
cs=0x1a2;eip=0x001fb4; 	X(POP(cx));	// 5909                  pop     cx ;~ 01A2:1FB4
cs=0x1a2;eip=0x001fb5; 	T(dx = ax;);	// 5910                  mov     dx, ax ;~ 01A2:1FB5
cs=0x1a2;eip=0x001fb7; 	T(CMP(dx, 0x0FFFF));	// 5911                  cmp     dx, 0FFFFh ;~ 01A2:1FB7
cs=0x1a2;eip=0x001fba; 	J(JNZ(loc_11fc7));	// 5912                  jnz     short loc_11FC7 ;~ 01A2:1FBA
cs=0x1a2;eip=0x001fbc; 	T(ax = si;);	// 5913                  mov     ax, si ;~ 01A2:1FBC
cs=0x1a2;eip=0x001fbe; 	T(cl = 6;);	// 5914                  mov     cl, 6 ;~ 01A2:1FBE
cs=0x1a2;eip=0x001fc0; 	T(SHR(ax, cl));	// 5915                  shr     ax, cl ;~ 01A2:1FC0
cs=0x1a2;eip=0x001fc2; 	X(word_1929a = ax;);	// 5916                  mov     word_1929A, ax ;~ 01A2:1FC2
cs=0x1a2;eip=0x001fc5; 	J(JMP(loc_11f7f));	// 5917                  jmp     short loc_11F7F ;~ 01A2:1FC5
loc_11fc7:
	// 4718 
cs=0x1a2;eip=0x001fc7; 	T(ax = __segx;);	// 5921                  mov     ax, __segx ;~ 01A2:1FC7
cs=0x1a2;eip=0x001fca; 	T(ADD(ax, dx));	// 5922                  add     ax, dx ;~ 01A2:1FCA
cs=0x1a2;eip=0x001fcc; 	X(word_18971 = ax;);	// 5923                  mov     word_18971, ax ;~ 01A2:1FCC
cs=0x1a2;eip=0x001fcf; 	X(word_1896f = 0;);	// 5924                  mov     word_1896F, 0 ;~ 01A2:1FCF
cs=0x1a2;eip=0x001fd5; 	T(XOR(ax, ax));	// 5925                  xor     ax, ax ;~ 01A2:1FD5
loc_11fd7:
	// 4719 
cs=0x1a2;eip=0x001fd7; 	X(POP(si));	// 5928                  pop     si ;~ 01A2:1FD7
cs=0x1a2;eip=0x001fd8; 	X(POP(bp));	// 5929                  pop     bp ;~ 01A2:1FD8
cs=0x1a2;eip=0x001fd9; 	J(RETN(4));	// 5930                  retn    4 ;~ 01A2:1FD9

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_11f7f: 	goto loc_11f7f;
        case m2c::kloc_11f91: 	goto loc_11f91;
        case m2c::kloc_11fa9: 	goto loc_11fa9;
        case m2c::kloc_11fc7: 	goto loc_11fc7;
        case m2c::kloc_11fd7: 	goto loc_11fd7;
        case m2c::ksub_11f66: 	goto sub_11f66;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____brk(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____brk:
    _begin:
#undef arg_0
#define arg_0 4
	// 5942 arg_0           = word ptr  4 ;~ 01A2:1FDC
#undef arg_2
#define arg_2 6
	// 5943 arg_2           = word ptr  6 ;~ 01A2:1FDC
cs=0x1a2;eip=0x001fdc; 	X(PUSH(bp));	// 5945                  push    bp ;~ 01A2:1FDC
cs=0x1a2;eip=0x001fdd; 	T(bp = sp;);	// 5946                  mov     bp, sp ;~ 01A2:1FDD
cs=0x1a2;eip=0x001fdf; 	T(cx = word_18969;);	// 5947                  mov     cx, word_18969 ;~ 01A2:1FDF
cs=0x1a2;eip=0x001fe3; 	T(bx = word_18967;);	// 5948                  mov     bx, word_18967 ;~ 01A2:1FE3
cs=0x1a2;eip=0x001fe7; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 5949                  mov     dx, [bp+arg_2] ;~ 01A2:1FE7
cs=0x1a2;eip=0x001fea; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 5950                  mov     ax, [bp+arg_0] ;~ 01A2:1FEA
cs=0x1a2;eip=0x001fed; 	J(CALL(__n_pcmparb,0));	// 5951                  call    __N_PCMP@ ;~ 01A2:1FED
cs=0x1a2;eip=0x001ff0; 	J(JC(loc_12012));	// 5952                  jb      short loc_12012 ;~ 01A2:1FF0
cs=0x1a2;eip=0x001ff2; 	T(cx = word_18971;);	// 5953                  mov     cx, word_18971 ;~ 01A2:1FF2
cs=0x1a2;eip=0x001ff6; 	T(bx = word_1896f;);	// 5954                  mov     bx, word_1896F ;~ 01A2:1FF6
cs=0x1a2;eip=0x001ffa; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 5955                  mov     dx, [bp+arg_2] ;~ 01A2:1FFA
cs=0x1a2;eip=0x001ffd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 5956                  mov     ax, [bp+arg_0] ;~ 01A2:1FFD
cs=0x1a2;eip=0x002000; 	J(CALL(__n_pcmparb,0));	// 5957                  call    __N_PCMP@ ;~ 01A2:2000
cs=0x1a2;eip=0x002003; 	J(JA(loc_12012));	// 5958                  ja      short loc_12012 ;~ 01A2:2003
cs=0x1a2;eip=0x002005; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 5959                  push    [bp+arg_2] ;~ 01A2:2005
cs=0x1a2;eip=0x002008; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 5960                  push    [bp+arg_0] ;~ 01A2:2008
cs=0x1a2;eip=0x00200b; 	J(CALL(sub_11f66,0));	// 5961                  call    sub_11F66 ;~ 01A2:200B
cs=0x1a2;eip=0x00200e; 	T(OR(ax, ax));	// 5962                  or      ax, ax ;~ 01A2:200E
cs=0x1a2;eip=0x002010; 	J(JNZ(loc_12017));	// 5963                  jnz     short loc_12017 ;~ 01A2:2010
loc_12012:
	// 4720 
cs=0x1a2;eip=0x002012; 	T(ax = 0x0FFFF;);	// 5967                  mov     ax, 0FFFFh ;~ 01A2:2012
cs=0x1a2;eip=0x002015; 	J(JMP(loc_12019));	// 5968                  jmp     short loc_12019 ;~ 01A2:2015
loc_12017:
	// 4721 
cs=0x1a2;eip=0x002017; 	T(XOR(ax, ax));	// 5972                  xor     ax, ax ;~ 01A2:2017
loc_12019:
	// 4722 
cs=0x1a2;eip=0x002019; 	X(POP(bp));	// 5975                  pop     bp ;~ 01A2:2019
cs=0x1a2;eip=0x00201a; 	J(RETN(0));	// 5976                  retn ;~ 01A2:201A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____brk: 	goto ____brk;
        case m2c::kloc_12012: 	goto loc_12012;
        case m2c::kloc_12017: 	goto loc_12017;
        case m2c::kloc_12019: 	goto loc_12019;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group6:
    _begin:
____sbrk:
	// 5984 
cs=0x1a2;eip=0x00201b; 	X(PUSH(bp));	// 5986                  push    bp ;~ 01A2:201B
cs=0x1a2;eip=0x00201c; 	T(bp = sp;);	// 5987                  mov     bp, sp ;~ 01A2:201C
cs=0x1a2;eip=0x00201e; 	T(SUB(sp, 8));	// 5988                  sub     sp, 8 ;~ 01A2:201E
cs=0x1a2;eip=0x002021; 	T(ax = word_1896d;);	// 5989                  mov     ax, word_1896D ;~ 01A2:2021
cs=0x1a2;eip=0x002024; 	T(XOR(dx, dx));	// 5990                  xor     dx, dx ;~ 01A2:2024
cs=0x1a2;eip=0x002026; 	T(cl = 4;);	// 5991                  mov     cl, 4 ;~ 01A2:2026
cs=0x1a2;eip=0x002028; 	J(CALL(__n_lxlsharb,0));	// 5992                  call    near ptr __N_LXLSH@ ;~ 01A2:2028
sub_1202b:
	// 6000 
cs=0x1a2;eip=0x00202b; 	T(ADD(ax, word_1896b));	// 6001                  add     ax, word_1896B ;~ 01A2:202B
seg000_202f_proc:
	// 6004 
cs=0x1a2;eip=0x00202f; 	T(ADC(dx, 0));	// 6004                  adc     dx, 0 ;~ 01A2:202F
cs=0x1a2;eip=0x002032; 	T(ADD(ax, *(dw*)(raddr(ss,bp+4))));	// 6005                  add     ax, [bp+4] ;~ 01A2:2032
cs=0x1a2;eip=0x002035; 	T(ADC(dx, *(dw*)(raddr(ss,bp+6))));	// 6006                  adc     dx, [bp+6] ;~ 01A2:2035
cs=0x1a2;eip=0x002038; 	T(CMP(dx, 0x0F));	// 6007                  cmp     dx, 0Fh ;~ 01A2:2038
cs=0x1a2;eip=0x00203b; 	J(JL(loc_1204c));	// 6008                  jl      short loc_1204C ;~ 01A2:203B
cs=0x1a2;eip=0x00203d; 	J(JG(loc_12044));	// 6009                  jg      short loc_12044 ;~ 01A2:203D
cs=0x1a2;eip=0x00203f; 	T(CMP(ax, 0x0FFFF));	// 6010                  cmp     ax, 0FFFFh ;~ 01A2:203F
cs=0x1a2;eip=0x002042; 	J(JBE(loc_1204c));	// 6011                  jbe     short loc_1204C ;~ 01A2:2042
loc_12044:
	// 4723 
cs=0x1a2;eip=0x002044; 	T(dx = 0x0FFFF;);	// 6015                  mov     dx, 0FFFFh ;~ 01A2:2044
cs=0x1a2;eip=0x002047; 	T(ax = 0x0FFFF;);	// 6016                  mov     ax, 0FFFFh ;~ 01A2:2047
cs=0x1a2;eip=0x00204a; 	J(JMP(loc_120a2));	// 6017                  jmp     short loc_120A2 ;~ 01A2:204A
loc_1204c:
	// 4724 
cs=0x1a2;eip=0x00204c; 	T(dx = word_1896d;);	// 6022                  mov     dx, word_1896D ;~ 01A2:204C
cs=0x1a2;eip=0x002050; 	T(ax = word_1896b;);	// 6023                  mov     ax, word_1896B ;~ 01A2:2050
cs=0x1a2;eip=0x002053; 	T(MOV(cx, *(dw*)(raddr(ss,bp+6))));	// 6024                  mov     cx, [bp+6] ;~ 01A2:2053
cs=0x1a2;eip=0x002056; 	T(MOV(bx, *(dw*)(raddr(ss,bp+4))));	// 6025                  mov     bx, [bp+4] ;~ 01A2:2056
cs=0x1a2;eip=0x002059; 	J(CALL(__n_paddarb,0));	// 6026                  call    near ptr __N_PADD@ ;~ 01A2:2059
cs=0x1a2;eip=0x00205c; 	X(MOV(*(dw*)(raddr(ss,bp-2)), dx));	// 6028                  mov     [bp-2], dx ;~ 01A2:205C
cs=0x1a2;eip=0x00205f; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 6029                  mov     [bp-4], ax ;~ 01A2:205F
cs=0x1a2;eip=0x002062; 	T(cx = word_18969;);	// 6030                  mov     cx, word_18969 ;~ 01A2:2062
cs=0x1a2;eip=0x002066; 	T(bx = word_18967;);	// 6031                  mov     bx, word_18967 ;~ 01A2:2066
cs=0x1a2;eip=0x00206a; 	J(CALL(__n_pcmparb,0));	// 6032                  call    __N_PCMP@ ;~ 01A2:206A
cs=0x1a2;eip=0x00206d; 	J(JC(loc_12044));	// 6033                  jb      short loc_12044 ;~ 01A2:206D
cs=0x1a2;eip=0x00206f; 	T(cx = word_18971;);	// 6034                  mov     cx, word_18971 ;~ 01A2:206F
cs=0x1a2;eip=0x002073; 	T(bx = word_1896f;);	// 6035                  mov     bx, word_1896F ;~ 01A2:2073
cs=0x1a2;eip=0x002077; 	T(MOV(dx, *(dw*)(raddr(ss,bp-2))));	// 6036                  mov     dx, [bp-2] ;~ 01A2:2077
cs=0x1a2;eip=0x00207a; 	T(MOV(ax, *(dw*)(raddr(ss,bp-4))));	// 6037                  mov     ax, [bp-4] ;~ 01A2:207A
cs=0x1a2;eip=0x00207d; 	J(CALL(__n_pcmparb,0));	// 6038                  call    __N_PCMP@ ;~ 01A2:207D
cs=0x1a2;eip=0x002080; 	J(JA(loc_12044));	// 6039                  ja      short loc_12044 ;~ 01A2:2080
cs=0x1a2;eip=0x002082; 	T(ax = word_1896d;);	// 6040                  mov     ax, word_1896D ;~ 01A2:2082
cs=0x1a2;eip=0x002085; 	T(dx = word_1896b;);	// 6041                  mov     dx, word_1896B ;~ 01A2:2085
cs=0x1a2;eip=0x002089; 	X(MOV(*(dw*)(raddr(ss,bp-6)), ax));	// 6042                  mov     [bp-6], ax ;~ 01A2:2089
cs=0x1a2;eip=0x00208c; 	X(MOV(*(dw*)(raddr(ss,bp-8)), dx));	// 6043                  mov     [bp-8], dx ;~ 01A2:208C
cs=0x1a2;eip=0x00208f; 	X(PUSH(*(dw*)(raddr(ss,bp-2))));	// 6044                  push    word ptr [bp-2] ;~ 01A2:208F
cs=0x1a2;eip=0x002092; 	X(PUSH(*(dw*)(raddr(ss,bp-4))));	// 6045                  push    word ptr [bp-4] ;~ 01A2:2092
cs=0x1a2;eip=0x002095; 	J(CALL(sub_11f66,0));	// 6046                  call    sub_11F66 ;~ 01A2:2095
cs=0x1a2;eip=0x002098; 	T(OR(ax, ax));	// 6047                  or      ax, ax ;~ 01A2:2098
cs=0x1a2;eip=0x00209a; 	J(JZ(loc_12044));	// 6048                  jz      short loc_12044 ;~ 01A2:209A
cs=0x1a2;eip=0x00209c; 	T(MOV(dx, *(dw*)(raddr(ss,bp-6))));	// 6049                  mov     dx, [bp-6] ;~ 01A2:209C
cs=0x1a2;eip=0x00209f; 	T(MOV(ax, *(dw*)(raddr(ss,bp-8))));	// 6050                  mov     ax, [bp-8] ;~ 01A2:209F
loc_120a2:
	// 4725 
cs=0x1a2;eip=0x0020a2; 	T(sp = bp;);	// 6053                  mov     sp, bp ;~ 01A2:20A2
cs=0x1a2;eip=0x0020a4; 	X(POP(bp));	// 6054                  pop     bp ;~ 01A2:20A4
cs=0x1a2;eip=0x0020a5; 	J(RETN(0));	// 6055                  retn ;~ 01A2:20A5

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____sbrk: 	goto ____sbrk;
        case m2c::kloc_12044: 	goto loc_12044;
        case m2c::kloc_1204c: 	goto loc_1204c;
        case m2c::kloc_120a2: 	goto loc_120a2;
        case m2c::kseg000_202f_proc: 	goto seg000_202f_proc;
        case m2c::ksub_1202b: 	goto sub_1202b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_120a6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_120a6:
    _begin:
#undef var_4
#define var_4 -4
	// 6064 var_4           = word ptr -4 ;~ 01A2:20A6
#undef var_2
#define var_2 -2
	// 6065 var_2           = word ptr -2 ;~ 01A2:20A6
cs=0x1a2;eip=0x0020a6; 	X(PUSH(bp));	// 6067                  push    bp ;~ 01A2:20A6
cs=0x1a2;eip=0x0020a7; 	T(bp = sp;);	// 6068                  mov     bp, sp ;~ 01A2:20A7
cs=0x1a2;eip=0x0020a9; 	T(SUB(sp, 4));	// 6069                  sub     sp, 4 ;~ 01A2:20A9
cs=0x1a2;eip=0x0020ac; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 6070                  mov     [bp+var_2], 0 ;~ 01A2:20AC
cs=0x1a2;eip=0x0020b1; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 6071                  mov     [bp+var_4], 0 ;~ 01A2:20B1
cs=0x1a2;eip=0x0020b6; 	T(dx = word_18971;);	// 6072                  mov     dx, word_18971 ;~ 01A2:20B6
cs=0x1a2;eip=0x0020ba; 	T(ax = word_1896f;);	// 6073                  mov     ax, word_1896F ;~ 01A2:20BA
cs=0x1a2;eip=0x0020bd; 	T(cx = word_1896d;);	// 6074                  mov     cx, word_1896D ;~ 01A2:20BD
cs=0x1a2;eip=0x0020c1; 	T(bx = word_1896b;);	// 6075                  mov     bx, word_1896B ;~ 01A2:20C1
cs=0x1a2;eip=0x0020c5; 	J(CALL(__n_psbparb,0));	// 6076                  call    near ptr __N_PSBP@ ;~ 01A2:20C5
cs=0x1a2;eip=0x0020c8; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 6078                  mov     [bp+var_2], dx ;~ 01A2:20C8
cs=0x1a2;eip=0x0020cb; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 6079                  mov     [bp+var_4], ax ;~ 01A2:20CB
cs=0x1a2;eip=0x0020ce; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0));	// 6080                  cmp     [bp+var_2], 0 ;~ 01A2:20CE
cs=0x1a2;eip=0x0020d2; 	J(JC(loc_120e4));	// 6081                  jb      short loc_120E4 ;~ 01A2:20D2
cs=0x1a2;eip=0x0020d4; 	J(JA(loc_120dc));	// 6082                  ja      short loc_120DC ;~ 01A2:20D4
cs=0x1a2;eip=0x0020d6; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0x10));	// 6083                  cmp     [bp+var_4], 10h ;~ 01A2:20D6
cs=0x1a2;eip=0x0020da; 	J(JBE(loc_120e4));	// 6084                  jbe     short loc_120E4 ;~ 01A2:20DA
loc_120dc:
	// 4726 
cs=0x1a2;eip=0x0020dc; 	X(SUB(*(dw*)(raddr(ss,bp+var_4)), 0x10));	// 6087                  sub     [bp+var_4], 10h ;~ 01A2:20DC
cs=0x1a2;eip=0x0020e0; 	X(SBB(*(dw*)(raddr(ss,bp+var_2)), 0));	// 6088                  sbb     [bp+var_2], 0 ;~ 01A2:20E0
loc_120e4:
	// 4727 
cs=0x1a2;eip=0x0020e4; 	X(AND(*(dw*)(raddr(ss,bp+var_4)), 0x0FFF0));	// 6092                  and     [bp+var_4], 0FFF0h ;~ 01A2:20E4
cs=0x1a2;eip=0x0020e8; 	X(AND(*(dw*)(raddr(ss,bp+var_2)), 0x0FFFF));	// 6093                  and     [bp+var_2], 0FFFFh ;~ 01A2:20E8
cs=0x1a2;eip=0x0020ec; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 6094                  mov     dx, [bp+var_2] ;~ 01A2:20EC
cs=0x1a2;eip=0x0020ef; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 6095                  mov     ax, [bp+var_4] ;~ 01A2:20EF
cs=0x1a2;eip=0x0020f2; 	T(sp = bp;);	// 6096                  mov     sp, bp ;~ 01A2:20F2
cs=0x1a2;eip=0x0020f4; 	X(POP(bp));	// 6097                  pop     bp ;~ 01A2:20F4
cs=0x1a2;eip=0x0020f5; 	J(RETF(0));	// 6098                  retf ;~ 01A2:20F5

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_120dc: 	goto loc_120dc;
        case m2c::kloc_120e4: 	goto loc_120e4;
        case m2c::ksub_120a6: 	goto sub_120a6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___getch(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___getch:
    _begin:
cs=0x1a2;eip=0x0020f6; 	T(CMP(byte_1929c, 0));	// 6109                  cmp     byte_1929C, 0 ;~ 01A2:20F6
cs=0x1a2;eip=0x0020fb; 	J(JZ(loc_12107));	// 6110                  jz      short loc_12107 ;~ 01A2:20FB
cs=0x1a2;eip=0x0020fd; 	X(byte_1929c = 0;);	// 6111                  mov     byte_1929C, 0 ;~ 01A2:20FD
cs=0x1a2;eip=0x002102; 	T(al = byte_1929d;);	// 6112                  mov     al, byte_1929D ;~ 01A2:2102
cs=0x1a2;eip=0x002105; 	J(JMP(loc_1210c));	// 6113                  jmp     short loc_1210C ;~ 01A2:2105
loc_12107:
	// 4728 
cs=0x1a2;eip=0x002107; 	T(ax = 0x700;);	// 6117                  mov     ax, 700h ;~ 01A2:2107
cs=0x1a2;eip=0x00210a; 	S(_INT(0x21));	// 6118                  int     21h             ; DOS - DIRECT STDIN INPUT, NO ECHO ;~ 01A2:210A
loc_1210c:
	// 4729 
cs=0x1a2;eip=0x00210c; 	T(ah = 0;);	// 6121                  mov     ah, 0 ;~ 01A2:210C
cs=0x1a2;eip=0x00210e; 	J(RETF(0));	// 6122                  retf ;~ 01A2:210E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___getch: 	goto ___getch;
        case m2c::kloc_12107: 	goto loc_12107;
        case m2c::kloc_1210c: 	goto loc_1210c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group7:
    _begin:
seg000_210f_proc:
	// 6127 
____ngetche:
	// 4730 
cs=0x1a2;eip=0x00210f; 	X(POP(ax));	// 6128                  pop     ax ;~ 01A2:210F
cs=0x1a2;eip=0x002110; 	X(PUSH(cs));	// 6129                  push    cs ;~ 01A2:2110
cs=0x1a2;eip=0x002111; 	X(PUSH(ax));	// 6130                  push    ax ;~ 01A2:2111
cs=0x1a2;eip=0x002112; 	X(PUSH(si));	// 6131                  push    si ;~ 01A2:2112
cs=0x1a2;eip=0x002113; 	T(CMP(byte_1929c, 0));	// 6132                  cmp     byte_1929C, 0 ;~ 01A2:2113
cs=0x1a2;eip=0x002118; 	J(JZ(loc_12122));	// 6133                  jz      short loc_12122 ;~ 01A2:2118
cs=0x1a2;eip=0x00211a; 	X(PUSH(cs));	// 6134                  push    cs ;~ 01A2:211A
cs=0x1a2;eip=0x00211b; 	J(CALL(___getch,0));	// 6135                  call    near ptr ___getch ;~ 01A2:211B
cs=0x1a2;eip=0x00211e; 	T(si = ax;);	// 6136                  mov     si, ax ;~ 01A2:211E
cs=0x1a2;eip=0x002120; 	J(JMP(loc_1212f));	// 6137                  jmp     short loc_1212F ;~ 01A2:2120
loc_12122:
	// 4731 
cs=0x1a2;eip=0x002122; 	X(PUSH(cs));	// 6141                  push    cs ;~ 01A2:2122
cs=0x1a2;eip=0x002123; 	J(CALL(___getch,0));	// 6142                  call    near ptr ___getch ;~ 01A2:2123
cs=0x1a2;eip=0x002126; 	T(si = ax;);	// 6143                  mov     si, ax ;~ 01A2:2126
cs=0x1a2;eip=0x002128; 	X(PUSH(ax));	// 6144                  push    ax              ; c ;~ 01A2:2128
cs=0x1a2;eip=0x002129; 	T(NOP);	// 6145                  nop ;~ 01A2:2129
cs=0x1a2;eip=0x00212a; 	X(PUSH(cs));	// 6146                  push    cs ;~ 01A2:212A
cs=0x1a2;eip=0x00212b; 	J(CALL(___putch,0));	// 6147                  call    near ptr ___putch ;~ 01A2:212B
cs=0x1a2;eip=0x00212e; 	X(POP(cx));	// 6148                  pop     cx ;~ 01A2:212E
loc_1212f:
	// 4732 
cs=0x1a2;eip=0x00212f; 	T(ax = si;);	// 6151                  mov     ax, si ;~ 01A2:212F
cs=0x1a2;eip=0x002131; 	X(POP(si));	// 6152                  pop     si ;~ 01A2:2131
cs=0x1a2;eip=0x002132; 	J(RETF(0));	// 6153                  retf ;~ 01A2:2132
____nungetch:
	// 4733 
cs=0x1a2;eip=0x002133; 	X(POP(ax));	// 6157                  pop     ax ;~ 01A2:2133
cs=0x1a2;eip=0x002134; 	X(PUSH(cs));	// 6158                  push    cs ;~ 01A2:2134
cs=0x1a2;eip=0x002135; 	X(PUSH(ax));	// 6159                  push    ax ;~ 01A2:2135
___ungetch:
	// 6166 
#undef arg_0
#define arg_0 6
	// 6168 arg_0           = word ptr  6 ;~ 01A2:2136
cs=0x1a2;eip=0x002136; 	X(PUSH(bp));	// 6170                  push    bp ;~ 01A2:2136
cs=0x1a2;eip=0x002137; 	T(bp = sp;);	// 6171                  mov     bp, sp ;~ 01A2:2137
cs=0x1a2;eip=0x002139; 	T(CMP(byte_1929c, 0));	// 6172                  cmp     byte_1929C, 0 ;~ 01A2:2139
cs=0x1a2;eip=0x00213e; 	J(JZ(loc_12145));	// 6173                  jz      short loc_12145 ;~ 01A2:213E
cs=0x1a2;eip=0x002140; 	T(ax = 0x0FFFF;);	// 6174                  mov     ax, 0FFFFh ;~ 01A2:2140
cs=0x1a2;eip=0x002143; 	J(JMP(loc_12152));	// 6175                  jmp     short loc_12152 ;~ 01A2:2143
loc_12145:
	// 4734 
cs=0x1a2;eip=0x002145; 	X(byte_1929c = 1;);	// 6179                  mov     byte_1929C, 1 ;~ 01A2:2145
cs=0x1a2;eip=0x00214a; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 6180                  mov     al, byte ptr [bp+arg_0] ;~ 01A2:214A
cs=0x1a2;eip=0x00214d; 	X(byte_1929d = al;);	// 6181                  mov     byte_1929D, al ;~ 01A2:214D
cs=0x1a2;eip=0x002150; 	T(ah = 0;);	// 6182                  mov     ah, 0 ;~ 01A2:2150
loc_12152:
	// 4735 
cs=0x1a2;eip=0x002152; 	X(POP(bp));	// 6185                  pop     bp ;~ 01A2:2152
cs=0x1a2;eip=0x002153; 	J(RETF(0));	// 6186                  retf ;~ 01A2:2153

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____nungetch: 	goto ____nungetch;
        case m2c::k___ungetch: 	goto ___ungetch;
        case m2c::kloc_12122: 	goto loc_12122;
        case m2c::kloc_1212f: 	goto loc_1212f;
        case m2c::kloc_12145: 	goto loc_12145;
        case m2c::kloc_12152: 	goto loc_12152;
        case m2c::kseg000_210f_proc: 	goto seg000_210f_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___gettext(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___gettext:
    _begin:
#undef var_2
#define var_2 -2
	// 6198 var_2           = word ptr -2 ;~ 01A2:2154
#undef left
#define left 6
	// 6199 left            = word ptr  6 ;~ 01A2:2154
#undef top
#define top 8
	// 6200 top             = word ptr  8 ;~ 01A2:2154
#undef right
#define right 0x0A
	// 6201 right           = word ptr  0Ah ;~ 01A2:2154
#undef bottom
#define bottom 0x0C
	// 6202 bottom          = word ptr  0Ch ;~ 01A2:2154
#undef destin
#define destin 0x0E
	// 6203 destin          = dword ptr  0Eh ;~ 01A2:2154
cs=0x1a2;eip=0x002154; 	X(PUSH(bp));	// 6205                  push    bp ;~ 01A2:2154
cs=0x1a2;eip=0x002155; 	T(bp = sp;);	// 6206                  mov     bp, sp ;~ 01A2:2155
cs=0x1a2;eip=0x002157; 	T(SUB(sp, 2));	// 6207                  sub     sp, 2 ;~ 01A2:2157
cs=0x1a2;eip=0x00215a; 	X(PUSH(si));	// 6208                  push    si ;~ 01A2:215A
cs=0x1a2;eip=0x00215b; 	X(PUSH(di));	// 6209                  push    di ;~ 01A2:215B
cs=0x1a2;eip=0x00215c; 	T(MOV(di, *(dw*)(raddr(ss,bp+left))));	// 6210                  mov     di, [bp+left] ;~ 01A2:215C
cs=0x1a2;eip=0x00215f; 	T(MOV(si, *(dw*)(raddr(ss,bp+top))));	// 6211                  mov     si, [bp+top] ;~ 01A2:215F
cs=0x1a2;eip=0x002162; 	X(PUSH(di));	// 6212                  push    di ;~ 01A2:2162
cs=0x1a2;eip=0x002163; 	X(PUSH(si));	// 6213                  push    si ;~ 01A2:2163
cs=0x1a2;eip=0x002164; 	X(PUSH(*(dw*)(raddr(ss,bp+right))));	// 6214                  push    [bp+right] ;~ 01A2:2164
cs=0x1a2;eip=0x002167; 	X(PUSH(*(dw*)(raddr(ss,bp+bottom))));	// 6215                  push    [bp+bottom] ;~ 01A2:2167
cs=0x1a2;eip=0x00216a; 	J(CALL(____validatexy,0));	// 6216                  call    ____VALIDATEXY ;~ 01A2:216A
cs=0x1a2;eip=0x00216d; 	T(OR(ax, ax));	// 6217                  or      ax, ax ;~ 01A2:216D
cs=0x1a2;eip=0x00216f; 	J(JNZ(loc_12175));	// 6218                  jnz     short loc_12175 ;~ 01A2:216F
cs=0x1a2;eip=0x002171; 	T(XOR(ax, ax));	// 6219                  xor     ax, ax ;~ 01A2:2171
cs=0x1a2;eip=0x002173; 	J(JMP(loc_121a4));	// 6220                  jmp     short loc_121A4 ;~ 01A2:2173
loc_12175:
	// 4736 
cs=0x1a2;eip=0x002175; 	T(MOV(ax, *(dw*)(raddr(ss,bp+right))));	// 6224                  mov     ax, [bp+right] ;~ 01A2:2175
cs=0x1a2;eip=0x002178; 	T(SUB(ax, di));	// 6225                  sub     ax, di ;~ 01A2:2178
cs=0x1a2;eip=0x00217a; 	T(INC(ax));	// 6226                  inc     ax ;~ 01A2:217A
cs=0x1a2;eip=0x00217b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 6227                  mov     [bp+var_2], ax ;~ 01A2:217B
cs=0x1a2;eip=0x00217e; 	J(JMP(loc_1219c));	// 6228                  jmp     short loc_1219C ;~ 01A2:217E
loc_12180:
	// 4737 
cs=0x1a2;eip=0x002180; 	X(PUSH(*(dw*)(raddr(ss,bp+destin+2))));	// 6232                  push    word ptr [bp+destin+2] ;~ 01A2:2180
cs=0x1a2;eip=0x002183; 	X(PUSH(*(dw*)(raddr(ss,bp+destin))));	// 6233                  push    word ptr [bp+destin] ;~ 01A2:2183
cs=0x1a2;eip=0x002186; 	X(PUSH(di));	// 6234                  push    di ;~ 01A2:2186
cs=0x1a2;eip=0x002187; 	X(PUSH(si));	// 6235                  push    si ;~ 01A2:2187
cs=0x1a2;eip=0x002188; 	J(CALL(____vptr,0));	// 6236                  call    ____VPTR ;~ 01A2:2188
cs=0x1a2;eip=0x00218b; 	X(PUSH(dx));	// 6237                  push    dx ;~ 01A2:218B
cs=0x1a2;eip=0x00218c; 	X(PUSH(ax));	// 6238                  push    ax ;~ 01A2:218C
cs=0x1a2;eip=0x00218d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 6239                  push    [bp+var_2] ;~ 01A2:218D
cs=0x1a2;eip=0x002190; 	J(CALL(____screenio,0));	// 6240                  call    ____SCREENIO ;~ 01A2:2190
cs=0x1a2;eip=0x002193; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 6241                  mov     ax, [bp+var_2] ;~ 01A2:2193
cs=0x1a2;eip=0x002196; 	T(SHL(ax, 1));	// 6242                  shl     ax, 1 ;~ 01A2:2196
cs=0x1a2;eip=0x002198; 	X(ADD(*(dw*)(raddr(ss,bp+destin)), ax));	// 6243                  add     word ptr [bp+destin], ax ;~ 01A2:2198
cs=0x1a2;eip=0x00219b; 	T(INC(si));	// 6244                  inc     si ;~ 01A2:219B
loc_1219c:
	// 4738 
cs=0x1a2;eip=0x00219c; 	T(CMP(si, *(dw*)(raddr(ss,bp+bottom))));	// 6247                  cmp     si, [bp+bottom] ;~ 01A2:219C
cs=0x1a2;eip=0x00219f; 	J(JLE(loc_12180));	// 6248                  jle     short loc_12180 ;~ 01A2:219F
cs=0x1a2;eip=0x0021a1; 	T(ax = 1;);	// 6249                  mov     ax, 1 ;~ 01A2:21A1
loc_121a4:
	// 4739 
cs=0x1a2;eip=0x0021a4; 	X(POP(di));	// 6252                  pop     di ;~ 01A2:21A4
cs=0x1a2;eip=0x0021a5; 	X(POP(si));	// 6253                  pop     si ;~ 01A2:21A5
cs=0x1a2;eip=0x0021a6; 	T(sp = bp;);	// 6254                  mov     sp, bp ;~ 01A2:21A6
cs=0x1a2;eip=0x0021a8; 	X(POP(bp));	// 6255                  pop     bp ;~ 01A2:21A8
cs=0x1a2;eip=0x0021a9; 	J(RETF(0));	// 6256                  retf ;~ 01A2:21A9

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___gettext: 	goto ___gettext;
        case m2c::kloc_12175: 	goto loc_12175;
        case m2c::kloc_12180: 	goto loc_12180;
        case m2c::kloc_1219c: 	goto loc_1219c;
        case m2c::kloc_121a4: 	goto loc_121a4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___puttext(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___puttext:
    _begin:
#undef var_2
#define var_2 -2
	// 6267 var_2           = word ptr -2 ;~ 01A2:21AA
#undef left
#define left 6
	// 6268 left            = word ptr  6 ;~ 01A2:21AA
#undef top
#define top 8
	// 6269 top             = word ptr  8 ;~ 01A2:21AA
#undef right
#define right 0x0A
	// 6270 right           = word ptr  0Ah ;~ 01A2:21AA
#undef bottom
#define bottom 0x0C
	// 6271 bottom          = word ptr  0Ch ;~ 01A2:21AA
#undef source
#define source 0x0E
	// 6272 source          = dword ptr  0Eh ;~ 01A2:21AA
cs=0x1a2;eip=0x0021aa; 	X(PUSH(bp));	// 6274                  push    bp ;~ 01A2:21AA
cs=0x1a2;eip=0x0021ab; 	T(bp = sp;);	// 6275                  mov     bp, sp ;~ 01A2:21AB
cs=0x1a2;eip=0x0021ad; 	T(SUB(sp, 2));	// 6276                  sub     sp, 2 ;~ 01A2:21AD
cs=0x1a2;eip=0x0021b0; 	X(PUSH(si));	// 6277                  push    si ;~ 01A2:21B0
cs=0x1a2;eip=0x0021b1; 	X(PUSH(di));	// 6278                  push    di ;~ 01A2:21B1
cs=0x1a2;eip=0x0021b2; 	T(MOV(di, *(dw*)(raddr(ss,bp+left))));	// 6279                  mov     di, [bp+left] ;~ 01A2:21B2
cs=0x1a2;eip=0x0021b5; 	T(MOV(si, *(dw*)(raddr(ss,bp+top))));	// 6280                  mov     si, [bp+top] ;~ 01A2:21B5
cs=0x1a2;eip=0x0021b8; 	X(PUSH(di));	// 6281                  push    di ;~ 01A2:21B8
cs=0x1a2;eip=0x0021b9; 	X(PUSH(si));	// 6282                  push    si ;~ 01A2:21B9
cs=0x1a2;eip=0x0021ba; 	X(PUSH(*(dw*)(raddr(ss,bp+right))));	// 6283                  push    [bp+right] ;~ 01A2:21BA
cs=0x1a2;eip=0x0021bd; 	X(PUSH(*(dw*)(raddr(ss,bp+bottom))));	// 6284                  push    [bp+bottom] ;~ 01A2:21BD
cs=0x1a2;eip=0x0021c0; 	J(CALL(____validatexy,0));	// 6285                  call    ____VALIDATEXY ;~ 01A2:21C0
cs=0x1a2;eip=0x0021c3; 	T(OR(ax, ax));	// 6286                  or      ax, ax ;~ 01A2:21C3
cs=0x1a2;eip=0x0021c5; 	J(JNZ(loc_121cb));	// 6287                  jnz     short loc_121CB ;~ 01A2:21C5
cs=0x1a2;eip=0x0021c7; 	T(XOR(ax, ax));	// 6288                  xor     ax, ax ;~ 01A2:21C7
cs=0x1a2;eip=0x0021c9; 	J(JMP(loc_121fa));	// 6289                  jmp     short loc_121FA ;~ 01A2:21C9
loc_121cb:
	// 4740 
cs=0x1a2;eip=0x0021cb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+right))));	// 6293                  mov     ax, [bp+right] ;~ 01A2:21CB
cs=0x1a2;eip=0x0021ce; 	T(SUB(ax, di));	// 6294                  sub     ax, di ;~ 01A2:21CE
cs=0x1a2;eip=0x0021d0; 	T(INC(ax));	// 6295                  inc     ax ;~ 01A2:21D0
cs=0x1a2;eip=0x0021d1; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 6296                  mov     [bp+var_2], ax ;~ 01A2:21D1
cs=0x1a2;eip=0x0021d4; 	J(JMP(loc_121f2));	// 6297                  jmp     short loc_121F2 ;~ 01A2:21D4
loc_121d6:
	// 4741 
cs=0x1a2;eip=0x0021d6; 	X(PUSH(di));	// 6301                  push    di ;~ 01A2:21D6
cs=0x1a2;eip=0x0021d7; 	X(PUSH(si));	// 6302                  push    si ;~ 01A2:21D7
cs=0x1a2;eip=0x0021d8; 	J(CALL(____vptr,0));	// 6303                  call    ____VPTR ;~ 01A2:21D8
cs=0x1a2;eip=0x0021db; 	X(PUSH(dx));	// 6304                  push    dx ;~ 01A2:21DB
cs=0x1a2;eip=0x0021dc; 	X(PUSH(ax));	// 6305                  push    ax ;~ 01A2:21DC
cs=0x1a2;eip=0x0021dd; 	X(PUSH(*(dw*)(raddr(ss,bp+source+2))));	// 6306                  push    word ptr [bp+source+2] ;~ 01A2:21DD
cs=0x1a2;eip=0x0021e0; 	X(PUSH(*(dw*)(raddr(ss,bp+source))));	// 6307                  push    word ptr [bp+source] ;~ 01A2:21E0
cs=0x1a2;eip=0x0021e3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 6308                  push    [bp+var_2] ;~ 01A2:21E3
cs=0x1a2;eip=0x0021e6; 	J(CALL(____screenio,0));	// 6309                  call    ____SCREENIO ;~ 01A2:21E6
cs=0x1a2;eip=0x0021e9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 6310                  mov     ax, [bp+var_2] ;~ 01A2:21E9
cs=0x1a2;eip=0x0021ec; 	T(SHL(ax, 1));	// 6311                  shl     ax, 1 ;~ 01A2:21EC
cs=0x1a2;eip=0x0021ee; 	X(ADD(*(dw*)(raddr(ss,bp+source)), ax));	// 6312                  add     word ptr [bp+source], ax ;~ 01A2:21EE
cs=0x1a2;eip=0x0021f1; 	T(INC(si));	// 6313                  inc     si ;~ 01A2:21F1
loc_121f2:
	// 4742 
cs=0x1a2;eip=0x0021f2; 	T(CMP(si, *(dw*)(raddr(ss,bp+bottom))));	// 6316                  cmp     si, [bp+bottom] ;~ 01A2:21F2
cs=0x1a2;eip=0x0021f5; 	J(JLE(loc_121d6));	// 6317                  jle     short loc_121D6 ;~ 01A2:21F5
cs=0x1a2;eip=0x0021f7; 	T(ax = 1;);	// 6318                  mov     ax, 1 ;~ 01A2:21F7
loc_121fa:
	// 4743 
cs=0x1a2;eip=0x0021fa; 	X(POP(di));	// 6321                  pop     di ;~ 01A2:21FA
cs=0x1a2;eip=0x0021fb; 	X(POP(si));	// 6322                  pop     si ;~ 01A2:21FB
cs=0x1a2;eip=0x0021fc; 	T(sp = bp;);	// 6323                  mov     sp, bp ;~ 01A2:21FC
cs=0x1a2;eip=0x0021fe; 	X(POP(bp));	// 6324                  pop     bp ;~ 01A2:21FE
cs=0x1a2;eip=0x0021ff; 	J(RETF(0));	// 6325                  retf ;~ 01A2:21FF

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___puttext: 	goto ___puttext;
        case m2c::kloc_121cb: 	goto loc_121cb;
        case m2c::kloc_121d6: 	goto loc_121d6;
        case m2c::kloc_121f2: 	goto loc_121f2;
        case m2c::kloc_121fa: 	goto loc_121fa;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___ioctl(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___ioctl:
    _begin:
#undef handle
#define handle 6
	// 6337 handle          = word ptr  6 ;~ 01A2:2200
#undef func
#define func 8
	// 6338 func            = word ptr  8 ;~ 01A2:2200
#undef arg_4
#define arg_4 0x0A
	// 6339 arg_4           = dword ptr  0Ah ;~ 01A2:2200
#undef arg_8
#define arg_8 0x0E
	// 6340 arg_8           = word ptr  0Eh ;~ 01A2:2200
cs=0x1a2;eip=0x002200; 	X(PUSH(bp));	// 6342                  push    bp ;~ 01A2:2200
cs=0x1a2;eip=0x002201; 	T(bp = sp;);	// 6343                  mov     bp, sp ;~ 01A2:2201
cs=0x1a2;eip=0x002203; 	X(PUSH(ds));	// 6344                  push    ds ;~ 01A2:2203
cs=0x1a2;eip=0x002204; 	T(LDS(dx, *(dd*)(raddr(ss,bp+arg_4))));	// 6345                  lds     dx, [bp+arg_4] ;~ 01A2:2204
cs=0x1a2;eip=0x002207; 	T(ah = 0x44;);	// 6347                  mov     ah, 44h ; 'D' ;~ 01A2:2207
cs=0x1a2;eip=0x002209; 	T(MOV(al, *(raddr(ss,bp+func))));	// 6348                  mov     al, byte ptr [bp+func] ;~ 01A2:2209
cs=0x1a2;eip=0x00220c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+handle))));	// 6349                  mov     bx, [bp+handle] ;~ 01A2:220C
cs=0x1a2;eip=0x00220f; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_8))));	// 6350                  mov     cx, [bp+arg_8] ;~ 01A2:220F
cs=0x1a2;eip=0x002212; 	S(_INT(0x21));	// 6351                  int     21h             ; DOS - 2+ - IOCTL - ;~ 01A2:2212
cs=0x1a2;eip=0x002214; 	X(POP(ds));	// 6352                  pop     ds ;~ 01A2:2214
cs=0x1a2;eip=0x002215; 	J(JC(loc_12223));	// 6354                  jb      short loc_12223 ;~ 01A2:2215
cs=0x1a2;eip=0x002217; 	T(CMP(*(dw*)(raddr(ss,bp+func)), 0));	// 6355                  cmp     [bp+func], 0 ;~ 01A2:2217
cs=0x1a2;eip=0x00221b; 	J(JNZ(loc_12221));	// 6356                  jnz     short loc_12221 ;~ 01A2:221B
cs=0x1a2;eip=0x00221d; 	T(ax = dx;);	// 6357                  mov     ax, dx ;~ 01A2:221D
cs=0x1a2;eip=0x00221f; 	J(JMP(loc_12227));	// 6358                  jmp     short loc_12227 ;~ 01A2:221F
loc_12221:
	// 4744 
cs=0x1a2;eip=0x002221; 	J(JMP(loc_12227));	// 6362                  jmp     short loc_12227 ;~ 01A2:2221
loc_12223:
	// 4745 
cs=0x1a2;eip=0x002223; 	X(PUSH(ax));	// 6366                  push    ax ;~ 01A2:2223
cs=0x1a2;eip=0x002224; 	J(CALL(____ioerror,0));	// 6367                  call    ____IOERROR ;~ 01A2:2224
loc_12227:
	// 4746 
cs=0x1a2;eip=0x002227; 	X(POP(bp));	// 6371                  pop     bp ;~ 01A2:2227
cs=0x1a2;eip=0x002228; 	J(RETF(0));	// 6372                  retf ;~ 01A2:2228

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___ioctl: 	goto ___ioctl;
        case m2c::kloc_12221: 	goto loc_12221;
        case m2c::kloc_12223: 	goto loc_12223;
        case m2c::kloc_12227: 	goto loc_12227;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___kbhit(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___kbhit:
    _begin:
cs=0x1a2;eip=0x002229; 	T(CMP(byte_1929c, 0));	// 6384                  cmp     byte_1929C, 0 ;~ 01A2:2229
cs=0x1a2;eip=0x00222e; 	J(JZ(loc_12235));	// 6385                  jz      short loc_12235 ;~ 01A2:222E
cs=0x1a2;eip=0x002230; 	T(ax = 1;);	// 6386                  mov     ax, 1 ;~ 01A2:2230
cs=0x1a2;eip=0x002233; 	J(JMP(locret_1223a));	// 6387                  jmp     short locret_1223A ;~ 01A2:2233
loc_12235:
	// 4747 
cs=0x1a2;eip=0x002235; 	T(ah = 0x0B;);	// 6391                  mov     ah, 0Bh ;~ 01A2:2235
cs=0x1a2;eip=0x002237; 	S(_INT(0x21));	// 6392                  int     21h             ; DOS - CHECK STANDARD INPUT STATUS ;~ 01A2:2237
cs=0x1a2;eip=0x002239; 	T(CBW);	// 6395                  cbw ;~ 01A2:2239
locret_1223a:
	// 4748 
cs=0x1a2;eip=0x00223a; 	J(RETF(0));	// 6398                  retf ;~ 01A2:223A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___kbhit: 	goto ___kbhit;
        case m2c::kloc_12235: 	goto loc_12235;
        case m2c::klocret_1223a: 	goto locret_1223a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____loadprog(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____loadprog:
    _begin:
#undef var_e
#define var_e -0x0E
	// 6409 var_E           = word ptr -0Eh ;~ 01A2:223B
#undef var_c
#define var_c -0x0C
	// 6410 var_C           = dword ptr -0Ch ;~ 01A2:223B
#undef var_8
#define var_8 -8
	// 6411 var_8           = word ptr -8 ;~ 01A2:223B
#undef var_6
#define var_6 -6
	// 6412 var_6           = word ptr -6 ;~ 01A2:223B
#undef block
#define block -4
	// 6413 block           = dword ptr -4 ;~ 01A2:223B
#undef arg_0
#define arg_0 4
	// 6414 arg_0           = word ptr  4 ;~ 01A2:223B
#undef src
#define src 6
	// 6415 src             = dword ptr  6 ;~ 01A2:223B
#undef arg_6
#define arg_6 0x0A
	// 6416 arg_6           = word ptr  0Ah ;~ 01A2:223B
#undef arg_8
#define arg_8 0x0C
	// 6417 arg_8           = word ptr  0Ch ;~ 01A2:223B
#undef arg_a
#define arg_a 0x0E
	// 6418 arg_A           = word ptr  0Eh ;~ 01A2:223B
#undef arg_c
#define arg_c 0x10
	// 6419 arg_C           = word ptr  10h ;~ 01A2:223B
#undef arg_e
#define arg_e 0x12
	// 6420 arg_E           = word ptr  12h ;~ 01A2:223B
cs=0x1a2;eip=0x00223b; 	X(PUSH(bp));	// 6422                  push    bp ;~ 01A2:223B
cs=0x1a2;eip=0x00223c; 	T(bp = sp;);	// 6423                  mov     bp, sp ;~ 01A2:223C
cs=0x1a2;eip=0x00223e; 	T(SUB(sp, 0x0E));	// 6424                  sub     sp, 0Eh ;~ 01A2:223E
cs=0x1a2;eip=0x002241; 	X(PUSH(*(dw*)(raddr(ss,bp+src+2))));	// 6425                  push    word ptr [bp+src+2] ;~ 01A2:2241
cs=0x1a2;eip=0x002244; 	X(PUSH(*(dw*)(raddr(ss,bp+src))));	// 6426                  push    word ptr [bp+src] ; path ;~ 01A2:2244
cs=0x1a2;eip=0x002247; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_e))));	// 6427                  mov     ax, [bp+arg_E] ;~ 01A2:2247
cs=0x1a2;eip=0x00224a; 	T(OR(ax, 2));	// 6428                  or      ax, 2 ;~ 01A2:224A
cs=0x1a2;eip=0x00224d; 	X(PUSH(ax));	// 6429                  push    ax              ; int ;~ 01A2:224D
cs=0x1a2;eip=0x00224e; 	J(CALL(____searchpath,0));	// 6430                  call    ____SEARCHPATH ;~ 01A2:224E
cs=0x1a2;eip=0x002251; 	X(MOV(*(dw*)(raddr(ss,bp+src+2)), dx));	// 6431                  mov     word ptr [bp+src+2], dx ;~ 01A2:2251
cs=0x1a2;eip=0x002254; 	X(MOV(*(dw*)(raddr(ss,bp+src)), ax));	// 6432                  mov     word ptr [bp+src], ax ;~ 01A2:2254
cs=0x1a2;eip=0x002257; 	T(OR(ax, dx));	// 6433                  or      ax, dx ;~ 01A2:2257
cs=0x1a2;eip=0x002259; 	J(JNZ(loc_12267));	// 6434                  jnz     short loc_12267 ;~ 01A2:2259
cs=0x1a2;eip=0x00225b; 	X(*(dw*)(&byte_1895f) = 2;);	// 6435                  mov     word ptr byte_1895F, 2 ;~ 01A2:225B
loc_12261:
	// 4749 
cs=0x1a2;eip=0x002261; 	T(ax = 0x0FFFF;);	// 6439                  mov     ax, 0FFFFh ;~ 01A2:2261
cs=0x1a2;eip=0x002264; 	J(JMP(loc_12306));	// 6440                  jmp     loc_12306 ;~ 01A2:2264
loc_12267:
	// 4750 
cs=0x1a2;eip=0x002267; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 6444                  push    [bp+arg_8] ;~ 01A2:2267
cs=0x1a2;eip=0x00226a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 6445                  push    [bp+arg_6] ;~ 01A2:226A
cs=0x1a2;eip=0x00226d; 	J(CALL(____doscmd,0));	// 6446                  call    ____DOSCMD ;~ 01A2:226D
cs=0x1a2;eip=0x002270; 	X(MOV(*(dw*)(raddr(ss,bp+block+2)), dx));	// 6447                  mov     word ptr [bp+block+2], dx ;~ 01A2:2270
cs=0x1a2;eip=0x002273; 	X(MOV(*(dw*)(raddr(ss,bp+block)), ax));	// 6448                  mov     word ptr [bp+block], ax ;~ 01A2:2273
cs=0x1a2;eip=0x002276; 	T(OR(ax, dx));	// 6449                  or      ax, dx ;~ 01A2:2276
cs=0x1a2;eip=0x002278; 	J(JNZ(loc_12282));	// 6450                  jnz     short loc_12282 ;~ 01A2:2278
cs=0x1a2;eip=0x00227a; 	X(*(dw*)(&byte_1895f) = 8;);	// 6451                  mov     word ptr byte_1895F, 8 ;~ 01A2:227A
cs=0x1a2;eip=0x002280; 	J(JMP(loc_12261));	// 6452                  jmp     short loc_12261 ;~ 01A2:2280
loc_12282:
	// 4751 
cs=0x1a2;eip=0x002282; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 6456                  mov     ax, [bp+arg_A] ;~ 01A2:2282
cs=0x1a2;eip=0x002285; 	T(OR(ax, *(dw*)(raddr(ss,bp+arg_c))));	// 6457                  or      ax, [bp+arg_C] ;~ 01A2:2285
cs=0x1a2;eip=0x002288; 	J(JNZ(loc_12297));	// 6458                  jnz     short loc_12297 ;~ 01A2:2288
cs=0x1a2;eip=0x00228a; 	T(ax = *(dw*)(((db*)&dword_1929e)+2););	// 6459                  mov     ax, word ptr dword_1929E+2 ;~ 01A2:228A
cs=0x1a2;eip=0x00228d; 	T(dx = *(dw*)(&dword_1929e););	// 6460                  mov     dx, word ptr dword_1929E ;~ 01A2:228D
cs=0x1a2;eip=0x002291; 	X(MOV(*(dw*)(raddr(ss,bp+arg_c)), ax));	// 6461                  mov     [bp+arg_C], ax ;~ 01A2:2291
cs=0x1a2;eip=0x002294; 	X(MOV(*(dw*)(raddr(ss,bp+arg_a)), dx));	// 6462                  mov     [bp+arg_A], dx ;~ 01A2:2294
loc_12297:
	// 4752 
cs=0x1a2;eip=0x002297; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 6465                  push    [bp+arg_C]      ; int ;~ 01A2:2297
cs=0x1a2;eip=0x00229a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 6466                  push    [bp+arg_A]      ; int ;~ 01A2:229A
cs=0x1a2;eip=0x00229d; 	X(PUSH(*(dw*)(raddr(ss,bp+src+2))));	// 6467                  push    word ptr [bp+src+2] ;~ 01A2:229D
cs=0x1a2;eip=0x0022a0; 	X(PUSH(*(dw*)(raddr(ss,bp+src))));	// 6468                  push    word ptr [bp+src] ; src ;~ 01A2:22A0
cs=0x1a2;eip=0x0022a3; 	X(PUSH(ss));	// 6469                  push    ss ;~ 01A2:22A3
cs=0x1a2;eip=0x0022a4; 	T(ax = bp+var_c);	// 6470                  lea     ax, [bp+var_C] ;~ 01A2:22A4
cs=0x1a2;eip=0x0022a7; 	X(PUSH(ax));	// 6471                  push    ax              ; __int32 ;~ 01A2:22A7
cs=0x1a2;eip=0x0022a8; 	J(CALL(____dosenv,0));	// 6472                  call    ____DOSENV ;~ 01A2:22A8
cs=0x1a2;eip=0x0022ab; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 6473                  mov     [bp+var_6], dx ;~ 01A2:22AB
cs=0x1a2;eip=0x0022ae; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 6474                  mov     [bp+var_8], ax ;~ 01A2:22AE
cs=0x1a2;eip=0x0022b1; 	T(OR(ax, dx));	// 6475                  or      ax, dx ;~ 01A2:22B1
cs=0x1a2;eip=0x0022b3; 	J(JNZ(loc_122ca));	// 6476                  jnz     short loc_122CA ;~ 01A2:22B3
cs=0x1a2;eip=0x0022b5; 	X(*(dw*)(&byte_1895f) = 8;);	// 6477                  mov     word ptr byte_1895F, 8 ;~ 01A2:22B5
cs=0x1a2;eip=0x0022bb; 	X(PUSH(*(dw*)(raddr(ss,bp+block+2))));	// 6478                  push    word ptr [bp+block+2] ;~ 01A2:22BB
cs=0x1a2;eip=0x0022be; 	X(PUSH(*(dw*)(raddr(ss,bp+block))));	// 6479                  push    word ptr [bp+block] ; block ;~ 01A2:22BE
cs=0x1a2;eip=0x0022c1; 	T(NOP);	// 6480                  nop ;~ 01A2:22C1
cs=0x1a2;eip=0x0022c2; 	X(PUSH(cs));	// 6481                  push    cs ;~ 01A2:22C2
cs=0x1a2;eip=0x0022c3; 	J(CALL(___farfree,0));	// 6482                  call    near ptr ___farfree ;~ 01A2:22C3
cs=0x1a2;eip=0x0022c6; 	X(POP(cx));	// 6483                  pop     cx ;~ 01A2:22C6
cs=0x1a2;eip=0x0022c7; 	X(POP(cx));	// 6484                  pop     cx ;~ 01A2:22C7
cs=0x1a2;eip=0x0022c8; 	J(JMP(loc_12261));	// 6485                  jmp     short loc_12261 ;~ 01A2:22C8
loc_122ca:
	// 4753 
cs=0x1a2;eip=0x0022ca; 	J(CALL(__dispatch_call,__off_18fa4));	// 6489                  call    __off_18FA4 ;~ 01A2:22CA
cs=0x1a2;eip=0x0022ce; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 6490                  push    [bp+var_6] ;~ 01A2:22CE
cs=0x1a2;eip=0x0022d1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 6491                  push    [bp+var_8] ;~ 01A2:22D1
cs=0x1a2;eip=0x0022d4; 	X(PUSH(*(dw*)(raddr(ss,bp+block+2))));	// 6492                  push    word ptr [bp+block+2] ;~ 01A2:22D4
cs=0x1a2;eip=0x0022d7; 	X(PUSH(*(dw*)(raddr(ss,bp+block))));	// 6493                  push    word ptr [bp+block] ;~ 01A2:22D7
cs=0x1a2;eip=0x0022da; 	X(PUSH(*(dw*)(raddr(ss,bp+src+2))));	// 6494                  push    word ptr [bp+src+2] ;~ 01A2:22DA
cs=0x1a2;eip=0x0022dd; 	X(PUSH(*(dw*)(raddr(ss,bp+src))));	// 6495                  push    word ptr [bp+src] ;~ 01A2:22DD
cs=0x1a2;eip=0x0022e0; 	J(CALL(__dispatch_call,*(dw*)(raddr(ss,bp+arg_0))));	// 6496                  call    [bp+arg_0] ;~ 01A2:22E0
cs=0x1a2;eip=0x0022e3; 	T(ADD(sp, 0x0C));	// 6497                  add     sp, 0Ch ;~ 01A2:22E3
cs=0x1a2;eip=0x0022e6; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 6498                  mov     [bp+var_E], ax ;~ 01A2:22E6
cs=0x1a2;eip=0x0022e9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c+2))));	// 6499                  push    word ptr [bp+var_C+2] ;~ 01A2:22E9
cs=0x1a2;eip=0x0022ec; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 6500                  push    word ptr [bp+var_C] ; block ;~ 01A2:22EC
cs=0x1a2;eip=0x0022ef; 	T(NOP);	// 6501                  nop ;~ 01A2:22EF
cs=0x1a2;eip=0x0022f0; 	X(PUSH(cs));	// 6502                  push    cs ;~ 01A2:22F0
cs=0x1a2;eip=0x0022f1; 	J(CALL(___farfree,0));	// 6503                  call    near ptr ___farfree ;~ 01A2:22F1
cs=0x1a2;eip=0x0022f4; 	X(POP(cx));	// 6504                  pop     cx ;~ 01A2:22F4
cs=0x1a2;eip=0x0022f5; 	X(POP(cx));	// 6505                  pop     cx ;~ 01A2:22F5
cs=0x1a2;eip=0x0022f6; 	X(PUSH(*(dw*)(raddr(ss,bp+block+2))));	// 6506                  push    word ptr [bp+block+2] ;~ 01A2:22F6
cs=0x1a2;eip=0x0022f9; 	X(PUSH(*(dw*)(raddr(ss,bp+block))));	// 6507                  push    word ptr [bp+block] ; block ;~ 01A2:22F9
cs=0x1a2;eip=0x0022fc; 	T(NOP);	// 6508                  nop ;~ 01A2:22FC
cs=0x1a2;eip=0x0022fd; 	X(PUSH(cs));	// 6509                  push    cs ;~ 01A2:22FD
cs=0x1a2;eip=0x0022fe; 	J(CALL(___farfree,0));	// 6510                  call    near ptr ___farfree ;~ 01A2:22FE
cs=0x1a2;eip=0x002301; 	X(POP(cx));	// 6511                  pop     cx ;~ 01A2:2301
cs=0x1a2;eip=0x002302; 	X(POP(cx));	// 6512                  pop     cx ;~ 01A2:2302
cs=0x1a2;eip=0x002303; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 6513                  mov     ax, [bp+var_E] ;~ 01A2:2303
loc_12306:
	// 4754 
cs=0x1a2;eip=0x002306; 	T(sp = bp;);	// 6516                  mov     sp, bp ;~ 01A2:2306
cs=0x1a2;eip=0x002308; 	X(POP(bp));	// 6517                  pop     bp ;~ 01A2:2308
cs=0x1a2;eip=0x002309; 	J(RETN(0));	// 6518                  retn ;~ 01A2:2309

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____loadprog: 	goto ____loadprog;
        case m2c::kloc_12261: 	goto loc_12261;
        case m2c::kloc_12267: 	goto loc_12267;
        case m2c::kloc_12282: 	goto loc_12282;
        case m2c::kloc_12297: 	goto loc_12297;
        case m2c::kloc_122ca: 	goto loc_122ca;
        case m2c::kloc_12306: 	goto loc_12306;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___movetext(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___movetext:
    _begin:
#undef var_4
#define var_4 -4
	// 6530 var_4           = word ptr -4 ;~ 01A2:230A
#undef var_2
#define var_2 -2
	// 6531 var_2           = word ptr -2 ;~ 01A2:230A
#undef left
#define left 6
	// 6532 left            = word ptr  6 ;~ 01A2:230A
#undef top
#define top 8
	// 6533 top             = word ptr  8 ;~ 01A2:230A
#undef right
#define right 0x0A
	// 6534 right           = word ptr  0Ah ;~ 01A2:230A
#undef bottom
#define bottom 0x0C
	// 6535 bottom          = word ptr  0Ch ;~ 01A2:230A
#undef destleft
#define destleft 0x0E
	// 6536 destleft        = word ptr  0Eh ;~ 01A2:230A
#undef desttop
#define desttop 0x10
	// 6537 desttop         = word ptr  10h ;~ 01A2:230A
cs=0x1a2;eip=0x00230a; 	X(PUSH(bp));	// 6539                  push    bp ;~ 01A2:230A
cs=0x1a2;eip=0x00230b; 	T(bp = sp;);	// 6540                  mov     bp, sp ;~ 01A2:230B
cs=0x1a2;eip=0x00230d; 	T(SUB(sp, 4));	// 6541                  sub     sp, 4 ;~ 01A2:230D
cs=0x1a2;eip=0x002310; 	X(PUSH(si));	// 6542                  push    si ;~ 01A2:2310
cs=0x1a2;eip=0x002311; 	X(PUSH(di));	// 6543                  push    di ;~ 01A2:2311
cs=0x1a2;eip=0x002312; 	T(MOV(si, *(dw*)(raddr(ss,bp+top))));	// 6544                  mov     si, [bp+top] ;~ 01A2:2312
cs=0x1a2;eip=0x002315; 	T(MOV(di, *(dw*)(raddr(ss,bp+bottom))));	// 6545                  mov     di, [bp+bottom] ;~ 01A2:2315
cs=0x1a2;eip=0x002318; 	X(PUSH(*(dw*)(raddr(ss,bp+left))));	// 6546                  push    [bp+left] ;~ 01A2:2318
cs=0x1a2;eip=0x00231b; 	X(PUSH(si));	// 6547                  push    si ;~ 01A2:231B
cs=0x1a2;eip=0x00231c; 	X(PUSH(*(dw*)(raddr(ss,bp+right))));	// 6548                  push    [bp+right] ;~ 01A2:231C
cs=0x1a2;eip=0x00231f; 	X(PUSH(di));	// 6549                  push    di ;~ 01A2:231F
cs=0x1a2;eip=0x002320; 	J(CALL(____validatexy,0));	// 6550                  call    ____VALIDATEXY ;~ 01A2:2320
cs=0x1a2;eip=0x002323; 	T(OR(ax, ax));	// 6551                  or      ax, ax ;~ 01A2:2323
cs=0x1a2;eip=0x002325; 	J(JZ(loc_1234a));	// 6552                  jz      short loc_1234A ;~ 01A2:2325
cs=0x1a2;eip=0x002327; 	X(PUSH(*(dw*)(raddr(ss,bp+destleft))));	// 6553                  push    [bp+destleft] ;~ 01A2:2327
cs=0x1a2;eip=0x00232a; 	X(PUSH(*(dw*)(raddr(ss,bp+desttop))));	// 6554                  push    [bp+desttop] ;~ 01A2:232A
cs=0x1a2;eip=0x00232d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+right))));	// 6555                  mov     ax, [bp+right] ;~ 01A2:232D
cs=0x1a2;eip=0x002330; 	T(SUB(ax, *(dw*)(raddr(ss,bp+left))));	// 6556                  sub     ax, [bp+left] ;~ 01A2:2330
cs=0x1a2;eip=0x002333; 	T(MOV(dx, *(dw*)(raddr(ss,bp+destleft))));	// 6557                  mov     dx, [bp+destleft] ;~ 01A2:2333
cs=0x1a2;eip=0x002336; 	T(ADD(dx, ax));	// 6558                  add     dx, ax ;~ 01A2:2336
cs=0x1a2;eip=0x002338; 	X(PUSH(dx));	// 6559                  push    dx ;~ 01A2:2338
cs=0x1a2;eip=0x002339; 	T(ax = di;);	// 6560                  mov     ax, di ;~ 01A2:2339
cs=0x1a2;eip=0x00233b; 	T(SUB(ax, si));	// 6561                  sub     ax, si ;~ 01A2:233B
cs=0x1a2;eip=0x00233d; 	T(MOV(dx, *(dw*)(raddr(ss,bp+desttop))));	// 6562                  mov     dx, [bp+desttop] ;~ 01A2:233D
cs=0x1a2;eip=0x002340; 	T(ADD(dx, ax));	// 6563                  add     dx, ax ;~ 01A2:2340
cs=0x1a2;eip=0x002342; 	X(PUSH(dx));	// 6564                  push    dx ;~ 01A2:2342
cs=0x1a2;eip=0x002343; 	J(CALL(____validatexy,0));	// 6565                  call    ____VALIDATEXY ;~ 01A2:2343
cs=0x1a2;eip=0x002346; 	T(OR(ax, ax));	// 6566                  or      ax, ax ;~ 01A2:2346
cs=0x1a2;eip=0x002348; 	J(JNZ(loc_1234e));	// 6567                  jnz     short loc_1234E ;~ 01A2:2348
loc_1234a:
	// 4755 
cs=0x1a2;eip=0x00234a; 	T(XOR(ax, ax));	// 6570                  xor     ax, ax ;~ 01A2:234A
cs=0x1a2;eip=0x00234c; 	J(JMP(loc_123a1));	// 6571                  jmp     short loc_123A1 ;~ 01A2:234C
loc_1234e:
	// 4756 
cs=0x1a2;eip=0x00234e; 	T(dx = si;);	// 6575                  mov     dx, si ;~ 01A2:234E
cs=0x1a2;eip=0x002350; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), di));	// 6576                  mov     [bp+var_2], di ;~ 01A2:2350
cs=0x1a2;eip=0x002353; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 1));	// 6577                  mov     [bp+var_4], 1 ;~ 01A2:2353
cs=0x1a2;eip=0x002358; 	T(CMP(si, *(dw*)(raddr(ss,bp+desttop))));	// 6578                  cmp     si, [bp+desttop] ;~ 01A2:2358
cs=0x1a2;eip=0x00235b; 	J(JGE(loc_12367));	// 6579                  jge     short loc_12367 ;~ 01A2:235B
cs=0x1a2;eip=0x00235d; 	T(dx = di;);	// 6580                  mov     dx, di ;~ 01A2:235D
cs=0x1a2;eip=0x00235f; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), si));	// 6581                  mov     [bp+var_2], si ;~ 01A2:235F
cs=0x1a2;eip=0x002362; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0x0FFFF));	// 6582                  mov     [bp+var_4], 0FFFFh ;~ 01A2:2362
loc_12367:
	// 4757 
cs=0x1a2;eip=0x002367; 	T(di = dx;);	// 6585                  mov     di, dx ;~ 01A2:2367
cs=0x1a2;eip=0x002369; 	J(JMP(loc_12394));	// 6586                  jmp     short loc_12394 ;~ 01A2:2369
loc_1236b:
	// 4758 
cs=0x1a2;eip=0x00236b; 	X(PUSH(*(dw*)(raddr(ss,bp+destleft))));	// 6590                  push    [bp+destleft] ;~ 01A2:236B
cs=0x1a2;eip=0x00236e; 	T(ax = di;);	// 6591                  mov     ax, di ;~ 01A2:236E
cs=0x1a2;eip=0x002370; 	T(SUB(ax, si));	// 6592                  sub     ax, si ;~ 01A2:2370
cs=0x1a2;eip=0x002372; 	T(MOV(dx, *(dw*)(raddr(ss,bp+desttop))));	// 6593                  mov     dx, [bp+desttop] ;~ 01A2:2372
cs=0x1a2;eip=0x002375; 	T(ADD(dx, ax));	// 6594                  add     dx, ax ;~ 01A2:2375
cs=0x1a2;eip=0x002377; 	X(PUSH(dx));	// 6595                  push    dx ;~ 01A2:2377
cs=0x1a2;eip=0x002378; 	J(CALL(____vptr,0));	// 6596                  call    ____VPTR ;~ 01A2:2378
cs=0x1a2;eip=0x00237b; 	X(PUSH(dx));	// 6597                  push    dx ;~ 01A2:237B
cs=0x1a2;eip=0x00237c; 	X(PUSH(ax));	// 6598                  push    ax ;~ 01A2:237C
cs=0x1a2;eip=0x00237d; 	X(PUSH(*(dw*)(raddr(ss,bp+left))));	// 6599                  push    [bp+left] ;~ 01A2:237D
cs=0x1a2;eip=0x002380; 	X(PUSH(di));	// 6600                  push    di ;~ 01A2:2380
cs=0x1a2;eip=0x002381; 	J(CALL(____vptr,0));	// 6601                  call    ____VPTR ;~ 01A2:2381
cs=0x1a2;eip=0x002384; 	X(PUSH(dx));	// 6602                  push    dx ;~ 01A2:2384
cs=0x1a2;eip=0x002385; 	X(PUSH(ax));	// 6603                  push    ax ;~ 01A2:2385
cs=0x1a2;eip=0x002386; 	T(MOV(ax, *(dw*)(raddr(ss,bp+right))));	// 6604                  mov     ax, [bp+right] ;~ 01A2:2386
cs=0x1a2;eip=0x002389; 	T(SUB(ax, *(dw*)(raddr(ss,bp+left))));	// 6605                  sub     ax, [bp+left] ;~ 01A2:2389
cs=0x1a2;eip=0x00238c; 	T(INC(ax));	// 6606                  inc     ax ;~ 01A2:238C
cs=0x1a2;eip=0x00238d; 	X(PUSH(ax));	// 6607                  push    ax ;~ 01A2:238D
cs=0x1a2;eip=0x00238e; 	J(CALL(____screenio,0));	// 6608                  call    ____SCREENIO ;~ 01A2:238E
cs=0x1a2;eip=0x002391; 	T(ADD(di, *(dw*)(raddr(ss,bp+var_4))));	// 6609                  add     di, [bp+var_4] ;~ 01A2:2391
loc_12394:
	// 4759 
cs=0x1a2;eip=0x002394; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 6612                  mov     ax, [bp+var_2] ;~ 01A2:2394
cs=0x1a2;eip=0x002397; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_4))));	// 6613                  add     ax, [bp+var_4] ;~ 01A2:2397
cs=0x1a2;eip=0x00239a; 	T(CMP(ax, di));	// 6614                  cmp     ax, di ;~ 01A2:239A
cs=0x1a2;eip=0x00239c; 	J(JNZ(loc_1236b));	// 6615                  jnz     short loc_1236B ;~ 01A2:239C
cs=0x1a2;eip=0x00239e; 	T(ax = 1;);	// 6616                  mov     ax, 1 ;~ 01A2:239E
loc_123a1:
	// 4760 
cs=0x1a2;eip=0x0023a1; 	X(POP(di));	// 6619                  pop     di ;~ 01A2:23A1
cs=0x1a2;eip=0x0023a2; 	X(POP(si));	// 6620                  pop     si ;~ 01A2:23A2
cs=0x1a2;eip=0x0023a3; 	T(sp = bp;);	// 6621                  mov     sp, bp ;~ 01A2:23A3
cs=0x1a2;eip=0x0023a5; 	X(POP(bp));	// 6622                  pop     bp ;~ 01A2:23A5
cs=0x1a2;eip=0x0023a6; 	J(RETF(0));	// 6623                  retf ;~ 01A2:23A6

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___movetext: 	goto ___movetext;
        case m2c::kloc_1234a: 	goto loc_1234a;
        case m2c::kloc_1234e: 	goto loc_1234e;
        case m2c::kloc_12367: 	goto loc_12367;
        case m2c::kloc_1236b: 	goto loc_1236b;
        case m2c::kloc_12394: 	goto loc_12394;
        case m2c::kloc_123a1: 	goto loc_123a1;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___putch(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___putch:
    _begin:
#undef _c
#define _c 6
	// 6634 _c              = word ptr  6 ;~ 01A2:23A7
cs=0x1a2;eip=0x0023a7; 	X(PUSH(bp));	// 6636                  push    bp ;~ 01A2:23A7
cs=0x1a2;eip=0x0023a8; 	T(bp = sp;);	// 6637                  mov     bp, sp ;~ 01A2:23A8
cs=0x1a2;eip=0x0023aa; 	X(PUSH(ss));	// 6638                  push    ss ;~ 01A2:23AA
cs=0x1a2;eip=0x0023ab; 	T(ax = bp+_c);	// 6639                  lea     ax, [bp+_c] ;~ 01A2:23AB
cs=0x1a2;eip=0x0023ae; 	X(PUSH(ax));	// 6640                  push    ax ;~ 01A2:23AE
cs=0x1a2;eip=0x0023af; 	T(ax = 1;);	// 6641                  mov     ax, 1 ;~ 01A2:23AF
cs=0x1a2;eip=0x0023b2; 	X(PUSH(ax));	// 6642                  push    ax ;~ 01A2:23B2
cs=0x1a2;eip=0x0023b3; 	T(XOR(ax, ax));	// 6643                  xor     ax, ax ;~ 01A2:23B3
cs=0x1a2;eip=0x0023b5; 	T(XOR(dx, dx));	// 6644                  xor     dx, dx ;~ 01A2:23B5
cs=0x1a2;eip=0x0023b7; 	X(PUSH(ax));	// 6645                  push    ax ;~ 01A2:23B7
cs=0x1a2;eip=0x0023b8; 	X(PUSH(dx));	// 6646                  push    dx ;~ 01A2:23B8
cs=0x1a2;eip=0x0023b9; 	J(CALL(____cputn,0));	// 6647                  call    ____CPUTN ;~ 01A2:23B9
cs=0x1a2;eip=0x0023bc; 	X(POP(bp));	// 6648                  pop     bp ;~ 01A2:23BC
cs=0x1a2;eip=0x0023bd; 	J(RETF(0));	// 6649                  retf ;~ 01A2:23BD

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___putch: 	goto ___putch;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool __j_unknown_libname_1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    __j_unknown_libname_1:
    _begin:
cs=0x1a2;eip=0x0023be; __disp=*(dw*)(&__off_192a8);
	J(return __dispatch_call(__disp, _state););	// 6658                  jmp     word ptr __off_192A8 ; TCC/TCC++/BCC++ 16 bit DOS ;~ 01A2:23BE

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k__j_unknown_libname_1: 	goto __j_unknown_libname_1;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_123c2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_123c2:
    _begin:
#undef var_1
#define var_1 -1
	// 6669 var_1           = byte ptr -1 ;~ 01A2:23C2
#undef arg_0
#define arg_0 4
	// 6670 arg_0           = word ptr  4 ;~ 01A2:23C2
cs=0x1a2;eip=0x0023c2; 	X(PUSH(bp));	// 6672                  push    bp ;~ 01A2:23C2
cs=0x1a2;eip=0x0023c3; 	T(bp = sp;);	// 6673                  mov     bp, sp ;~ 01A2:23C3
cs=0x1a2;eip=0x0023c5; 	T(SUB(sp, 2));	// 6674                  sub     sp, 2 ;~ 01A2:23C5
cs=0x1a2;eip=0x0023c8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 6675                  mov     ax, [bp+arg_0] ;~ 01A2:23C8
cs=0x1a2;eip=0x0023cb; 	T(SHR(ax, 1));	// 6676                  shr     ax, 1 ;~ 01A2:23CB
cs=0x1a2;eip=0x0023cd; 	T(cx = ax;);	// 6677                  mov     cx, ax ;~ 01A2:23CD
cs=0x1a2;eip=0x0023cf; 	T(al = byte_19258;);	// 6678                  mov     al, byte_19258 ;~ 01A2:23CF
cs=0x1a2;eip=0x0023d2; 	T(ah = 0;);	// 6679                  mov     ah, 0 ;~ 01A2:23D2
cs=0x1a2;eip=0x0023d4; 	X(PUSH(ax));	// 6680                  push    ax ;~ 01A2:23D4
cs=0x1a2;eip=0x0023d5; 	T(ax = cx;);	// 6681                  mov     ax, cx ;~ 01A2:23D5
cs=0x1a2;eip=0x0023d7; 	T(XOR(dx, dx));	// 6682                  xor     dx, dx ;~ 01A2:23D7
cs=0x1a2;eip=0x0023d9; 	X(POP(bx));	// 6683                  pop     bx ;~ 01A2:23D9
cs=0x1a2;eip=0x0023da; 	T(DIV2(bx));	// 6684                  div     bx ;~ 01A2:23DA
cs=0x1a2;eip=0x0023dc; 	T(bl = al;);	// 6685                  mov     bl, al ;~ 01A2:23DC
cs=0x1a2;eip=0x0023de; 	T(ah = 0;);	// 6686                  mov     ah, 0 ;~ 01A2:23DE
cs=0x1a2;eip=0x0023e0; 	T(dl = byte_19258;);	// 6687                  mov     dl, byte_19258 ;~ 01A2:23E0
cs=0x1a2;eip=0x0023e4; 	T(dh = 0;);	// 6688                  mov     dh, 0 ;~ 01A2:23E4
cs=0x1a2;eip=0x0023e6; 	T(IMUL1_2(dx));	// 6689                  imul    dx ;~ 01A2:23E6
cs=0x1a2;eip=0x0023e8; 	T(dl = cl;);	// 6690                  mov     dl, cl ;~ 01A2:23E8
cs=0x1a2;eip=0x0023ea; 	T(SUB(dl, al));	// 6691                  sub     dl, al ;~ 01A2:23EA
cs=0x1a2;eip=0x0023ec; 	X(MOV(*(raddr(ss,bp+var_1)), dl));	// 6692                  mov     [bp+var_1], dl ;~ 01A2:23EC
cs=0x1a2;eip=0x0023ef; 	T(ah = bl;);	// 6693                  mov     ah, bl ;~ 01A2:23EF
cs=0x1a2;eip=0x0023f1; 	T(MOV(al, *(raddr(ss,bp+var_1))));	// 6694                  mov     al, [bp+var_1] ;~ 01A2:23F1
cs=0x1a2;eip=0x0023f4; 	T(sp = bp;);	// 6695                  mov     sp, bp ;~ 01A2:23F4
cs=0x1a2;eip=0x0023f6; 	X(POP(bp));	// 6696                  pop     bp ;~ 01A2:23F6
cs=0x1a2;eip=0x0023f7; 	J(RETN(4));	// 6697                  retn    4 ;~ 01A2:23F7

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_123c2: 	goto sub_123c2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_123fa(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_123fa:
    _begin:
#undef arg_0
#define arg_0 4
	// 6708 arg_0           = dword ptr  4 ;~ 01A2:23FA
#undef arg_4
#define arg_4 8
	// 6709 arg_4           = dword ptr  8 ;~ 01A2:23FA
cs=0x1a2;eip=0x0023fa; 	X(PUSH(bp));	// 6711                  push    bp ;~ 01A2:23FA
cs=0x1a2;eip=0x0023fb; 	T(bp = sp;);	// 6712                  mov     bp, sp ;~ 01A2:23FB
cs=0x1a2;eip=0x0023fd; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 6713                  les     bx, [bp+arg_4] ;~ 01A2:23FD
cs=0x1a2;eip=0x002400; 	T(MOV(dx, *(dw*)(raddr(es,bx))));	// 6715                  mov     dx, es:[bx] ;~ 01A2:2400
cs=0x1a2;eip=0x002403; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 6716                  les     bx, [bp+arg_0] ;~ 01A2:2403
cs=0x1a2;eip=0x002406; 	T(CMP(dx, *(dw*)(raddr(es,bx))));	// 6717                  cmp     dx, es:[bx] ;~ 01A2:2406
cs=0x1a2;eip=0x002409; 	J(JZ(loc_12418));	// 6718                  jz      short loc_12418 ;~ 01A2:2409
cs=0x1a2;eip=0x00240b; 	T(bh = 0;);	// 6719                  mov     bh, 0 ;~ 01A2:240B
cs=0x1a2;eip=0x00240d; 	T(ah = 2;);	// 6720                  mov     ah, 2 ;~ 01A2:240D
cs=0x1a2;eip=0x00240f; 	J(CALL(____videoint,0));	// 6721                  call    ____VideoInt ;~ 01A2:240F
cs=0x1a2;eip=0x002412; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 6722                  les     bx, [bp+arg_0] ;~ 01A2:2412
cs=0x1a2;eip=0x002415; 	X(MOV(*(dw*)(raddr(es,bx)), dx));	// 6723                  mov     es:[bx], dx ;~ 01A2:2415
loc_12418:
	// 4761 
cs=0x1a2;eip=0x002418; 	T(INC(dl));	// 6726                  inc     dl ;~ 01A2:2418
cs=0x1a2;eip=0x00241a; 	T(CMP(dl, byte_19258));	// 6727                  cmp     dl, byte_19258 ;~ 01A2:241A
cs=0x1a2;eip=0x00241e; 	J(JC(loc_12424));	// 6728                  jb      short loc_12424 ;~ 01A2:241E
cs=0x1a2;eip=0x002420; 	T(INC(dh));	// 6729                  inc     dh ;~ 01A2:2420
cs=0x1a2;eip=0x002422; 	T(dl = 0;);	// 6730                  mov     dl, 0 ;~ 01A2:2422
loc_12424:
	// 4762 
cs=0x1a2;eip=0x002424; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 6733                  les     bx, [bp+arg_4] ;~ 01A2:2424
cs=0x1a2;eip=0x002427; 	X(MOV(*(dw*)(raddr(es,bx)), dx));	// 6734                  mov     es:[bx], dx ;~ 01A2:2427
cs=0x1a2;eip=0x00242a; 	X(POP(bp));	// 6735                  pop     bp ;~ 01A2:242A
cs=0x1a2;eip=0x00242b; 	J(RETN(8));	// 6736                  retn    8 ;~ 01A2:242B

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_12418: 	goto loc_12418;
        case m2c::kloc_12424: 	goto loc_12424;
        case m2c::ksub_123fa: 	goto sub_123fa;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1242e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1242e:
    _begin:
#undef var_c
#define var_c -0x0C
	// 6746 var_C           = word ptr -0Ch ;~ 01A2:242E
#undef var_a
#define var_a -0x0A
	// 6747 var_A           = word ptr -0Ah ;~ 01A2:242E
#undef var_8
#define var_8 -8
	// 6748 var_8           = word ptr -8 ;~ 01A2:242E
#undef var_6
#define var_6 -6
	// 6749 var_6           = word ptr -6 ;~ 01A2:242E
#undef var_4
#define var_4 -4
	// 6750 var_4           = word ptr -4 ;~ 01A2:242E
#undef var_2
#define var_2 -2
	// 6751 var_2           = word ptr -2 ;~ 01A2:242E
#undef arg_0
#define arg_0 4
	// 6752 arg_0           = word ptr  4 ;~ 01A2:242E
#undef arg_2
#define arg_2 6
	// 6753 arg_2           = dword ptr  6 ;~ 01A2:242E
#undef arg_6
#define arg_6 0x0A
	// 6754 arg_6           = dword ptr  0Ah ;~ 01A2:242E
cs=0x1a2;eip=0x00242e; 	X(PUSH(bp));	// 6756                  push    bp ;~ 01A2:242E
cs=0x1a2;eip=0x00242f; 	T(bp = sp;);	// 6757                  mov     bp, sp ;~ 01A2:242F
cs=0x1a2;eip=0x002431; 	T(SUB(sp, 0x0C));	// 6758                  sub     sp, 0Ch ;~ 01A2:2431
cs=0x1a2;eip=0x002434; 	X(PUSH(si));	// 6759                  push    si ;~ 01A2:2434
cs=0x1a2;eip=0x002435; 	X(PUSH(di));	// 6760                  push    di ;~ 01A2:2435
cs=0x1a2;eip=0x002436; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 6761                  mov     di, [bp+arg_0] ;~ 01A2:2436
cs=0x1a2;eip=0x002439; 	J(CALL(____wherexy,0));	// 6762                  call    ____wherexy ;~ 01A2:2439
cs=0x1a2;eip=0x00243c; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 6763                  mov     [bp+var_8], ax ;~ 01A2:243C
cs=0x1a2;eip=0x00243f; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 6764                  mov     [bp+var_6], ax ;~ 01A2:243F
cs=0x1a2;eip=0x002442; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6+2))));	// 6765                  mov     ax, word ptr [bp+arg_6+2] ;~ 01A2:2442
cs=0x1a2;eip=0x002445; 	T(CMP(ax, word_1925d));	// 6766                  cmp     ax, word_1925D ;~ 01A2:2445
cs=0x1a2;eip=0x002449; 	J(JNZ(loc_12450));	// 6767                  jnz     short loc_12450 ;~ 01A2:2449
cs=0x1a2;eip=0x00244b; 	T(ax = 1;);	// 6768                  mov     ax, 1 ;~ 01A2:244B
cs=0x1a2;eip=0x00244e; 	J(JMP(loc_12452));	// 6769                  jmp     short loc_12452 ;~ 01A2:244E
loc_12450:
	// 4763 
cs=0x1a2;eip=0x002450; 	T(XOR(ax, ax));	// 6773                  xor     ax, ax ;~ 01A2:2450
loc_12452:
	// 4764 
cs=0x1a2;eip=0x002452; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 6776                  mov     [bp+var_A], ax ;~ 01A2:2452
cs=0x1a2;eip=0x002455; 	T(OR(ax, ax));	// 6777                  or      ax, ax ;~ 01A2:2455
cs=0x1a2;eip=0x002457; 	J(JZ(loc_12465));	// 6778                  jz      short loc_12465 ;~ 01A2:2457
cs=0x1a2;eip=0x002459; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6+2))));	// 6779                  push    word ptr [bp+arg_6+2] ;~ 01A2:2459
cs=0x1a2;eip=0x00245c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 6780                  push    word ptr [bp+arg_6] ;~ 01A2:245C
cs=0x1a2;eip=0x00245f; 	J(CALL(sub_123c2,0));	// 6781                  call    sub_123C2 ;~ 01A2:245F
cs=0x1a2;eip=0x002462; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 6782                  mov     [bp+var_2], ax ;~ 01A2:2462
loc_12465:
	// 4765 
cs=0x1a2;eip=0x002465; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2+2))));	// 6785                  mov     ax, word ptr [bp+arg_2+2] ;~ 01A2:2465
cs=0x1a2;eip=0x002468; 	T(CMP(ax, word_1925d));	// 6786                  cmp     ax, word_1925D ;~ 01A2:2468
cs=0x1a2;eip=0x00246c; 	J(JNZ(loc_12473));	// 6787                  jnz     short loc_12473 ;~ 01A2:246C
cs=0x1a2;eip=0x00246e; 	T(ax = 1;);	// 6788                  mov     ax, 1 ;~ 01A2:246E
cs=0x1a2;eip=0x002471; 	J(JMP(loc_12475));	// 6789                  jmp     short loc_12475 ;~ 01A2:2471
loc_12473:
	// 4766 
cs=0x1a2;eip=0x002473; 	T(XOR(ax, ax));	// 6793                  xor     ax, ax ;~ 01A2:2473
loc_12475:
	// 4767 
cs=0x1a2;eip=0x002475; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 6796                  mov     [bp+var_C], ax ;~ 01A2:2475
cs=0x1a2;eip=0x002478; 	T(OR(ax, ax));	// 6797                  or      ax, ax ;~ 01A2:2478
cs=0x1a2;eip=0x00247a; 	J(JZ(loc_124df));	// 6798                  jz      short loc_124DF ;~ 01A2:247A
cs=0x1a2;eip=0x00247c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2+2))));	// 6799                  push    word ptr [bp+arg_2+2] ;~ 01A2:247C
cs=0x1a2;eip=0x00247f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 6800                  push    word ptr [bp+arg_2] ;~ 01A2:247F
cs=0x1a2;eip=0x002482; 	J(CALL(sub_123c2,0));	// 6801                  call    sub_123C2 ;~ 01A2:2482
cs=0x1a2;eip=0x002485; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 6802                  mov     [bp+var_4], ax ;~ 01A2:2485
cs=0x1a2;eip=0x002488; 	J(JMP(loc_124df));	// 6803                  jmp     short loc_124DF ;~ 01A2:2488
loc_1248a:
	// 4768 
cs=0x1a2;eip=0x00248a; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), 0));	// 6807                  cmp     [bp+var_C], 0 ;~ 01A2:248A
cs=0x1a2;eip=0x00248e; 	J(JZ(loc_124a8));	// 6808                  jz      short loc_124A8 ;~ 01A2:248E
cs=0x1a2;eip=0x002490; 	X(PUSH(ss));	// 6809                  push    ss ;~ 01A2:2490
cs=0x1a2;eip=0x002491; 	T(ax = bp+var_4);	// 6810                  lea     ax, [bp+var_4] ;~ 01A2:2491
cs=0x1a2;eip=0x002494; 	X(PUSH(ax));	// 6811                  push    ax ;~ 01A2:2494
cs=0x1a2;eip=0x002495; 	X(PUSH(ss));	// 6812                  push    ss ;~ 01A2:2495
cs=0x1a2;eip=0x002496; 	T(ax = bp+var_6);	// 6813                  lea     ax, [bp+var_6] ;~ 01A2:2496
cs=0x1a2;eip=0x002499; 	X(PUSH(ax));	// 6814                  push    ax ;~ 01A2:2499
cs=0x1a2;eip=0x00249a; 	J(CALL(sub_123fa,0));	// 6815                  call    sub_123FA ;~ 01A2:249A
cs=0x1a2;eip=0x00249d; 	T(bh = 0;);	// 6816                  mov     bh, 0 ;~ 01A2:249D
cs=0x1a2;eip=0x00249f; 	T(ah = 8;);	// 6817                  mov     ah, 8 ;~ 01A2:249F
cs=0x1a2;eip=0x0024a1; 	J(CALL(____videoint,0));	// 6818                  call    ____VideoInt ;~ 01A2:24A1
cs=0x1a2;eip=0x0024a4; 	T(si = ax;);	// 6819                  mov     si, ax ;~ 01A2:24A4
cs=0x1a2;eip=0x0024a6; 	J(JMP(loc_124b2));	// 6820                  jmp     short loc_124B2 ;~ 01A2:24A6
loc_124a8:
	// 4769 
cs=0x1a2;eip=0x0024a8; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 6824                  les     bx, [bp+arg_2] ;~ 01A2:24A8
cs=0x1a2;eip=0x0024ab; 	T(MOV(si, *(dw*)(raddr(es,bx))));	// 6825                  mov     si, es:[bx] ;~ 01A2:24AB
cs=0x1a2;eip=0x0024ae; 	X(ADD(*(dw*)(raddr(ss,bp+arg_2)), 2));	// 6826                  add     word ptr [bp+arg_2], 2 ;~ 01A2:24AE
loc_124b2:
	// 4770 
cs=0x1a2;eip=0x0024b2; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0));	// 6829                  cmp     [bp+var_A], 0 ;~ 01A2:24B2
cs=0x1a2;eip=0x0024b6; 	J(JZ(loc_124d5));	// 6830                  jz      short loc_124D5 ;~ 01A2:24B6
cs=0x1a2;eip=0x0024b8; 	X(PUSH(ss));	// 6831                  push    ss ;~ 01A2:24B8
cs=0x1a2;eip=0x0024b9; 	T(ax = bp+var_2);	// 6832                  lea     ax, [bp+var_2] ;~ 01A2:24B9
cs=0x1a2;eip=0x0024bc; 	X(PUSH(ax));	// 6833                  push    ax ;~ 01A2:24BC
cs=0x1a2;eip=0x0024bd; 	X(PUSH(ss));	// 6834                  push    ss ;~ 01A2:24BD
cs=0x1a2;eip=0x0024be; 	T(ax = bp+var_6);	// 6835                  lea     ax, [bp+var_6] ;~ 01A2:24BE
cs=0x1a2;eip=0x0024c1; 	X(PUSH(ax));	// 6836                  push    ax ;~ 01A2:24C1
cs=0x1a2;eip=0x0024c2; 	J(CALL(sub_123fa,0));	// 6837                  call    sub_123FA ;~ 01A2:24C2
cs=0x1a2;eip=0x0024c5; 	T(ax = si;);	// 6838                  mov     ax, si ;~ 01A2:24C5
cs=0x1a2;eip=0x0024c7; 	T(bl = ah;);	// 6839                  mov     bl, ah ;~ 01A2:24C7
cs=0x1a2;eip=0x0024c9; 	T(cx = 1;);	// 6840                  mov     cx, 1 ;~ 01A2:24C9
cs=0x1a2;eip=0x0024cc; 	T(bh = 0;);	// 6841                  mov     bh, 0 ;~ 01A2:24CC
cs=0x1a2;eip=0x0024ce; 	T(ah = 9;);	// 6842                  mov     ah, 9 ;~ 01A2:24CE
cs=0x1a2;eip=0x0024d0; 	J(CALL(____videoint,0));	// 6843                  call    ____VideoInt ;~ 01A2:24D0
cs=0x1a2;eip=0x0024d3; 	J(JMP(loc_124df));	// 6844                  jmp     short loc_124DF ;~ 01A2:24D3
loc_124d5:
	// 4771 
cs=0x1a2;eip=0x0024d5; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 6848                  les     bx, [bp+arg_6] ;~ 01A2:24D5
cs=0x1a2;eip=0x0024d8; 	X(MOV(*(dw*)(raddr(es,bx)), si));	// 6849                  mov     es:[bx], si ;~ 01A2:24D8
cs=0x1a2;eip=0x0024db; 	X(ADD(*(dw*)(raddr(ss,bp+arg_6)), 2));	// 6850                  add     word ptr [bp+arg_6], 2 ;~ 01A2:24DB
loc_124df:
	// 4772 
cs=0x1a2;eip=0x0024df; 	T(ax = di;);	// 6854                  mov     ax, di ;~ 01A2:24DF
cs=0x1a2;eip=0x0024e1; 	T(DEC(di));	// 6855                  dec     di ;~ 01A2:24E1
cs=0x1a2;eip=0x0024e2; 	T(OR(ax, ax));	// 6856                  or      ax, ax ;~ 01A2:24E2
cs=0x1a2;eip=0x0024e4; 	J(JNZ(loc_1248a));	// 6857                  jnz     short loc_1248A ;~ 01A2:24E4
cs=0x1a2;eip=0x0024e6; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_8))));	// 6858                  mov     dx, [bp+var_8] ;~ 01A2:24E6
cs=0x1a2;eip=0x0024e9; 	T(bh = 0;);	// 6859                  mov     bh, 0 ;~ 01A2:24E9
cs=0x1a2;eip=0x0024eb; 	T(ah = 2;);	// 6860                  mov     ah, 2 ;~ 01A2:24EB
cs=0x1a2;eip=0x0024ed; 	J(CALL(____videoint,0));	// 6861                  call    ____VideoInt ;~ 01A2:24ED
cs=0x1a2;eip=0x0024f0; 	X(POP(di));	// 6862                  pop     di ;~ 01A2:24F0
cs=0x1a2;eip=0x0024f1; 	X(POP(si));	// 6863                  pop     si ;~ 01A2:24F1
cs=0x1a2;eip=0x0024f2; 	T(sp = bp;);	// 6864                  mov     sp, bp ;~ 01A2:24F2
cs=0x1a2;eip=0x0024f4; 	X(POP(bp));	// 6865                  pop     bp ;~ 01A2:24F4
cs=0x1a2;eip=0x0024f5; 	J(RETN(0x0A));	// 6866                  retn    0Ah ;~ 01A2:24F5

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_12450: 	goto loc_12450;
        case m2c::kloc_12452: 	goto loc_12452;
        case m2c::kloc_12465: 	goto loc_12465;
        case m2c::kloc_12473: 	goto loc_12473;
        case m2c::kloc_12475: 	goto loc_12475;
        case m2c::kloc_1248a: 	goto loc_1248a;
        case m2c::kloc_124a8: 	goto loc_124a8;
        case m2c::kloc_124b2: 	goto loc_124b2;
        case m2c::kloc_124d5: 	goto loc_124d5;
        case m2c::kloc_124df: 	goto loc_124df;
        case m2c::ksub_1242e: 	goto sub_1242e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____screenio(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____screenio:
    _begin:
#undef arg_0
#define arg_0 4
	// 6877 arg_0           = word ptr  4 ;~ 01A2:24F8
#undef arg_2
#define arg_2 6
	// 6878 arg_2           = word ptr  6 ;~ 01A2:24F8
#undef arg_4
#define arg_4 8
	// 6879 arg_4           = word ptr  8 ;~ 01A2:24F8
#undef arg_6
#define arg_6 0x0A
	// 6880 arg_6           = word ptr  0Ah ;~ 01A2:24F8
#undef arg_8
#define arg_8 0x0C
	// 6881 arg_8           = word ptr  0Ch ;~ 01A2:24F8
cs=0x1a2;eip=0x0024f8; 	X(PUSH(bp));	// 6883                  push    bp ;~ 01A2:24F8
cs=0x1a2;eip=0x0024f9; 	T(bp = sp;);	// 6884                  mov     bp, sp ;~ 01A2:24F9
cs=0x1a2;eip=0x0024fb; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_0))));	// 6885                  mov     dx, [bp+arg_0] ;~ 01A2:24FB
cs=0x1a2;eip=0x0024fe; 	T(al = byte_19259;);	// 6886                  mov     al, byte_19259 ;~ 01A2:24FE
cs=0x1a2;eip=0x002501; 	T(ah = 0;);	// 6887                  mov     ah, 0 ;~ 01A2:2501
cs=0x1a2;eip=0x002503; 	T(OR(ax, ax));	// 6888                  or      ax, ax ;~ 01A2:2503
cs=0x1a2;eip=0x002505; 	J(JNZ(loc_12520));	// 6889                  jnz     short loc_12520 ;~ 01A2:2505
cs=0x1a2;eip=0x002507; 	T(CMP(word_1925f, 0));	// 6890                  cmp     word_1925F, 0 ;~ 01A2:2507
cs=0x1a2;eip=0x00250c; 	J(JZ(loc_12520));	// 6891                  jz      short loc_12520 ;~ 01A2:250C
cs=0x1a2;eip=0x00250e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 6892                  push    [bp+arg_8] ;~ 01A2:250E
cs=0x1a2;eip=0x002511; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 6893                  push    [bp+arg_6] ;~ 01A2:2511
cs=0x1a2;eip=0x002514; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 6894                  push    [bp+arg_4] ;~ 01A2:2514
cs=0x1a2;eip=0x002517; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 6895                  push    [bp+arg_2] ;~ 01A2:2517
cs=0x1a2;eip=0x00251a; 	X(PUSH(dx));	// 6896                  push    dx ;~ 01A2:251A
cs=0x1a2;eip=0x00251b; 	J(CALL(____vram,0));	// 6897                  call    ____VRAM ;~ 01A2:251B
cs=0x1a2;eip=0x00251e; 	J(JMP(loc_12530));	// 6898                  jmp     short loc_12530 ;~ 01A2:251E
loc_12520:
	// 4773 
cs=0x1a2;eip=0x002520; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 6903                  push    [bp+arg_8] ;~ 01A2:2520
cs=0x1a2;eip=0x002523; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 6904                  push    [bp+arg_6] ;~ 01A2:2523
cs=0x1a2;eip=0x002526; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 6905                  push    [bp+arg_4] ;~ 01A2:2526
cs=0x1a2;eip=0x002529; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 6906                  push    [bp+arg_2] ;~ 01A2:2529
cs=0x1a2;eip=0x00252c; 	X(PUSH(dx));	// 6907                  push    dx ;~ 01A2:252C
cs=0x1a2;eip=0x00252d; 	J(CALL(sub_1242e,0));	// 6908                  call    sub_1242E ;~ 01A2:252D
loc_12530:
	// 4774 
cs=0x1a2;eip=0x002530; 	X(POP(bp));	// 6911                  pop     bp ;~ 01A2:2530
cs=0x1a2;eip=0x002531; 	J(RETN(0x0A));	// 6912                  retn    0Ah ;~ 01A2:2531

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____screenio: 	goto ____screenio;
        case m2c::kloc_12520: 	goto loc_12520;
        case m2c::kloc_12530: 	goto loc_12530;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____validatexy(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____validatexy:
    _begin:
#undef arg_0
#define arg_0 4
	// 6923 arg_0           = word ptr  4 ;~ 01A2:2534
#undef arg_2
#define arg_2 6
	// 6924 arg_2           = word ptr  6 ;~ 01A2:2534
#undef arg_4
#define arg_4 8
	// 6925 arg_4           = word ptr  8 ;~ 01A2:2534
#undef arg_6
#define arg_6 0x0A
	// 6926 arg_6           = word ptr  0Ah ;~ 01A2:2534
cs=0x1a2;eip=0x002534; 	X(PUSH(bp));	// 6928                  push    bp ;~ 01A2:2534
cs=0x1a2;eip=0x002535; 	T(bp = sp;);	// 6929                  mov     bp, sp ;~ 01A2:2535
cs=0x1a2;eip=0x002537; 	X(PUSH(si));	// 6930                  push    si ;~ 01A2:2537
cs=0x1a2;eip=0x002538; 	X(PUSH(di));	// 6931                  push    di ;~ 01A2:2538
cs=0x1a2;eip=0x002539; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 6932                  mov     bx, [bp+arg_6] ;~ 01A2:2539
cs=0x1a2;eip=0x00253c; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 6933                  mov     si, [bp+arg_4] ;~ 01A2:253C
cs=0x1a2;eip=0x00253f; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_2))));	// 6934                  mov     di, [bp+arg_2] ;~ 01A2:253F
cs=0x1a2;eip=0x002542; 	T(al = byte_19258;);	// 6935                  mov     al, byte_19258 ;~ 01A2:2542
cs=0x1a2;eip=0x002545; 	T(ah = 0;);	// 6936                  mov     ah, 0 ;~ 01A2:2545
cs=0x1a2;eip=0x002547; 	T(cx = ax;);	// 6937                  mov     cx, ax ;~ 01A2:2547
cs=0x1a2;eip=0x002549; 	T(al = byte_19257;);	// 6938                  mov     al, byte_19257 ;~ 01A2:2549
cs=0x1a2;eip=0x00254c; 	T(ah = 0;);	// 6939                  mov     ah, 0 ;~ 01A2:254C
cs=0x1a2;eip=0x00254e; 	T(dx = ax;);	// 6940                  mov     dx, ax ;~ 01A2:254E
cs=0x1a2;eip=0x002550; 	T(CMP(bx, cx));	// 6941                  cmp     bx, cx ;~ 01A2:2550
cs=0x1a2;eip=0x002552; 	J(JA(loc_12581));	// 6942                  ja      short loc_12581 ;~ 01A2:2552
cs=0x1a2;eip=0x002554; 	T(CMP(di, cx));	// 6943                  cmp     di, cx ;~ 01A2:2554
cs=0x1a2;eip=0x002556; 	J(JA(loc_12581));	// 6944                  ja      short loc_12581 ;~ 01A2:2556
cs=0x1a2;eip=0x002558; 	T(CMP(bx, di));	// 6945                  cmp     bx, di ;~ 01A2:2558
cs=0x1a2;eip=0x00255a; 	J(JG(loc_12581));	// 6946                  jg      short loc_12581 ;~ 01A2:255A
cs=0x1a2;eip=0x00255c; 	T(CMP(si, dx));	// 6947                  cmp     si, dx ;~ 01A2:255C
cs=0x1a2;eip=0x00255e; 	J(JA(loc_12581));	// 6948                  ja      short loc_12581 ;~ 01A2:255E
cs=0x1a2;eip=0x002560; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), dx));	// 6949                  cmp     [bp+arg_0], dx ;~ 01A2:2560
cs=0x1a2;eip=0x002563; 	J(JA(loc_12581));	// 6950                  ja      short loc_12581 ;~ 01A2:2563
cs=0x1a2;eip=0x002565; 	T(CMP(si, *(dw*)(raddr(ss,bp+arg_0))));	// 6951                  cmp     si, [bp+arg_0] ;~ 01A2:2565
cs=0x1a2;eip=0x002568; 	J(JG(loc_12581));	// 6952                  jg      short loc_12581 ;~ 01A2:2568
cs=0x1a2;eip=0x00256a; 	T(OR(bx, bx));	// 6953                  or      bx, bx ;~ 01A2:256A
cs=0x1a2;eip=0x00256c; 	J(JLE(loc_12581));	// 6954                  jle     short loc_12581 ;~ 01A2:256C
cs=0x1a2;eip=0x00256e; 	T(OR(di, di));	// 6955                  or      di, di ;~ 01A2:256E
cs=0x1a2;eip=0x002570; 	J(JLE(loc_12581));	// 6956                  jle     short loc_12581 ;~ 01A2:2570
cs=0x1a2;eip=0x002572; 	T(OR(si, si));	// 6957                  or      si, si ;~ 01A2:2572
cs=0x1a2;eip=0x002574; 	J(JLE(loc_12581));	// 6958                  jle     short loc_12581 ;~ 01A2:2574
cs=0x1a2;eip=0x002576; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 6959                  cmp     [bp+arg_0], 0 ;~ 01A2:2576
cs=0x1a2;eip=0x00257a; 	J(JLE(loc_12581));	// 6960                  jle     short loc_12581 ;~ 01A2:257A
cs=0x1a2;eip=0x00257c; 	T(ax = 1;);	// 6961                  mov     ax, 1 ;~ 01A2:257C
cs=0x1a2;eip=0x00257f; 	J(JMP(loc_12583));	// 6962                  jmp     short loc_12583 ;~ 01A2:257F
loc_12581:
	// 4775 
cs=0x1a2;eip=0x002581; 	T(XOR(ax, ax));	// 6967                  xor     ax, ax ;~ 01A2:2581
loc_12583:
	// 4776 
cs=0x1a2;eip=0x002583; 	X(POP(di));	// 6970                  pop     di ;~ 01A2:2583
cs=0x1a2;eip=0x002584; 	X(POP(si));	// 6971                  pop     si ;~ 01A2:2584
cs=0x1a2;eip=0x002585; 	X(POP(bp));	// 6972                  pop     bp ;~ 01A2:2585
cs=0x1a2;eip=0x002586; 	J(RETN(8));	// 6973                  retn    8 ;~ 01A2:2586

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____validatexy: 	goto ____validatexy;
        case m2c::kloc_12581: 	goto loc_12581;
        case m2c::kloc_12583: 	goto loc_12583;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12589(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12589:
    _begin:
#undef arg_0
#define arg_0 4
	// 6984 arg_0           = word ptr  4 ;~ 01A2:2589
#undef arg_2
#define arg_2 6
	// 6985 arg_2           = word ptr  6 ;~ 01A2:2589
#undef arg_4
#define arg_4 8
	// 6986 arg_4           = dword ptr  8 ;~ 01A2:2589
cs=0x1a2;eip=0x002589; 	X(PUSH(bp));	// 6988                  push    bp ;~ 01A2:2589
cs=0x1a2;eip=0x00258a; 	T(bp = sp;);	// 6989                  mov     bp, sp ;~ 01A2:258A
cs=0x1a2;eip=0x00258c; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 6990                  mov     dx, [bp+arg_2] ;~ 01A2:258C
cs=0x1a2;eip=0x00258f; 	T(ch = byte_19254;);	// 6991                  mov     ch, byte_19254 ;~ 01A2:258F
cs=0x1a2;eip=0x002593; 	T(cl = 0x20;);	// 6992                  mov     cl, 20h ; ' ' ;~ 01A2:2593
cs=0x1a2;eip=0x002595; 	J(JMP(loc_125a2));	// 6993                  jmp     short loc_125A2 ;~ 01A2:2595
loc_12597:
	// 4777 
cs=0x1a2;eip=0x002597; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 6997                  les     bx, [bp+arg_4] ;~ 01A2:2597
cs=0x1a2;eip=0x00259a; 	X(MOV(*(dw*)(raddr(es,bx)), cx));	// 6998                  mov     es:[bx], cx ;~ 01A2:259A
cs=0x1a2;eip=0x00259d; 	X(ADD(*(dw*)(raddr(ss,bp+arg_4)), 2));	// 6999                  add     word ptr [bp+arg_4], 2 ;~ 01A2:259D
cs=0x1a2;eip=0x0025a1; 	T(INC(dx));	// 7000                  inc     dx ;~ 01A2:25A1
loc_125a2:
	// 4778 
cs=0x1a2;eip=0x0025a2; 	T(CMP(dx, *(dw*)(raddr(ss,bp+arg_0))));	// 7003                  cmp     dx, [bp+arg_0] ;~ 01A2:25A2
cs=0x1a2;eip=0x0025a5; 	J(JLE(loc_12597));	// 7004                  jle     short loc_12597 ;~ 01A2:25A5
cs=0x1a2;eip=0x0025a7; 	X(POP(bp));	// 7005                  pop     bp ;~ 01A2:25A7
cs=0x1a2;eip=0x0025a8; 	J(RETN(8));	// 7006                  retn    8 ;~ 01A2:25A8

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_12597: 	goto loc_12597;
        case m2c::kloc_125a2: 	goto loc_125a2;
        case m2c::ksub_12589: 	goto sub_12589;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____scroll(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____scroll:
    _begin:
#undef destin
#define destin -0x0A0
	// 7018 destin          = byte ptr -0A0h ;~ 01A2:25AB
#undef arg_0
#define arg_0 4
	// 7019 arg_0           = byte ptr  4 ;~ 01A2:25AB
#undef arg_2
#define arg_2 6
	// 7020 arg_2           = byte ptr  6 ;~ 01A2:25AB
#undef arg_4
#define arg_4 8
	// 7021 arg_4           = byte ptr  8 ;~ 01A2:25AB
#undef arg_6
#define arg_6 0x0A
	// 7022 arg_6           = byte ptr  0Ah ;~ 01A2:25AB
#undef arg_8
#define arg_8 0x0C
	// 7023 arg_8           = byte ptr  0Ch ;~ 01A2:25AB
#undef arg_a
#define arg_a 0x0E
	// 7024 arg_A           = byte ptr  0Eh ;~ 01A2:25AB
cs=0x1a2;eip=0x0025ab; 	X(PUSH(bp));	// 7026                  push    bp ;~ 01A2:25AB
cs=0x1a2;eip=0x0025ac; 	T(bp = sp;);	// 7027                  mov     bp, sp ;~ 01A2:25AC
cs=0x1a2;eip=0x0025ae; 	T(SUB(sp, 0x0A0));	// 7028                  sub     sp, 0A0h ;~ 01A2:25AE
cs=0x1a2;eip=0x0025b2; 	T(al = byte_19259;);	// 7029                  mov     al, byte_19259 ;~ 01A2:25B2
cs=0x1a2;eip=0x0025b5; 	T(ah = 0;);	// 7030                  mov     ah, 0 ;~ 01A2:25B5
cs=0x1a2;eip=0x0025b7; 	T(OR(ax, ax));	// 7031                  or      ax, ax ;~ 01A2:25B7
cs=0x1a2;eip=0x0025b9; 	J(JZ(loc_125be));	// 7032                  jz      short loc_125BE ;~ 01A2:25B9
cs=0x1a2;eip=0x0025bb; 	J(JMP(loc_126f8));	// 7033                  jmp     loc_126F8 ;~ 01A2:25BB
loc_125be:
	// 4779 
cs=0x1a2;eip=0x0025be; 	T(CMP(word_1925f, 0));	// 7037                  cmp     word_1925F, 0 ;~ 01A2:25BE
cs=0x1a2;eip=0x0025c3; 	J(JNZ(loc_125c8));	// 7038                  jnz     short loc_125C8 ;~ 01A2:25C3
cs=0x1a2;eip=0x0025c5; 	J(JMP(loc_126f8));	// 7039                  jmp     loc_126F8 ;~ 01A2:25C5
loc_125c8:
	// 4780 
cs=0x1a2;eip=0x0025c8; 	T(CMP(*(raddr(ss,bp+arg_0)), 1));	// 7043                  cmp     [bp+arg_0], 1 ;~ 01A2:25C8
cs=0x1a2;eip=0x0025cc; 	J(JZ(loc_125d1));	// 7044                  jz      short loc_125D1 ;~ 01A2:25CC
cs=0x1a2;eip=0x0025ce; 	J(JMP(loc_126f8));	// 7045                  jmp     loc_126F8 ;~ 01A2:25CE
loc_125d1:
	// 4781 
cs=0x1a2;eip=0x0025d1; 	X(INC(*(raddr(ss,bp+arg_8))));	// 7049                  inc     [bp+arg_8] ;~ 01A2:25D1
cs=0x1a2;eip=0x0025d4; 	X(INC(*(raddr(ss,bp+arg_6))));	// 7050                  inc     [bp+arg_6] ;~ 01A2:25D4
cs=0x1a2;eip=0x0025d7; 	X(INC(*(raddr(ss,bp+arg_4))));	// 7051                  inc     [bp+arg_4] ;~ 01A2:25D7
cs=0x1a2;eip=0x0025da; 	X(INC(*(raddr(ss,bp+arg_2))));	// 7052                  inc     [bp+arg_2] ;~ 01A2:25DA
cs=0x1a2;eip=0x0025dd; 	T(CMP(*(raddr(ss,bp+arg_a)), 6));	// 7053                  cmp     [bp+arg_A], 6 ;~ 01A2:25DD
cs=0x1a2;eip=0x0025e1; 	J(JZ(loc_125e6));	// 7054                  jz      short loc_125E6 ;~ 01A2:25E1
cs=0x1a2;eip=0x0025e3; 	J(JMP(loc_12677));	// 7055                  jmp     loc_12677 ;~ 01A2:25E3
loc_125e6:
	// 4782 
cs=0x1a2;eip=0x0025e6; 	T(MOV(al, *(raddr(ss,bp+arg_6))));	// 7059                  mov     al, [bp+arg_6] ;~ 01A2:25E6
cs=0x1a2;eip=0x0025e9; 	T(ah = 0;);	// 7060                  mov     ah, 0 ;~ 01A2:25E9
cs=0x1a2;eip=0x0025eb; 	X(PUSH(ax));	// 7061                  push    ax              ; desttop ;~ 01A2:25EB
cs=0x1a2;eip=0x0025ec; 	T(MOV(al, *(raddr(ss,bp+arg_8))));	// 7062                  mov     al, [bp+arg_8] ;~ 01A2:25EC
cs=0x1a2;eip=0x0025ef; 	T(ah = 0;);	// 7063                  mov     ah, 0 ;~ 01A2:25EF
cs=0x1a2;eip=0x0025f1; 	X(PUSH(ax));	// 7064                  push    ax              ; destleft ;~ 01A2:25F1
cs=0x1a2;eip=0x0025f2; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 7065                  mov     al, [bp+arg_2] ;~ 01A2:25F2
cs=0x1a2;eip=0x0025f5; 	T(ah = 0;);	// 7066                  mov     ah, 0 ;~ 01A2:25F5
cs=0x1a2;eip=0x0025f7; 	X(PUSH(ax));	// 7067                  push    ax              ; bottom ;~ 01A2:25F7
cs=0x1a2;eip=0x0025f8; 	T(MOV(al, *(raddr(ss,bp+arg_4))));	// 7068                  mov     al, [bp+arg_4] ;~ 01A2:25F8
cs=0x1a2;eip=0x0025fb; 	T(ah = 0;);	// 7069                  mov     ah, 0 ;~ 01A2:25FB
cs=0x1a2;eip=0x0025fd; 	X(PUSH(ax));	// 7070                  push    ax              ; right ;~ 01A2:25FD
cs=0x1a2;eip=0x0025fe; 	T(MOV(al, *(raddr(ss,bp+arg_6))));	// 7071                  mov     al, [bp+arg_6] ;~ 01A2:25FE
cs=0x1a2;eip=0x002601; 	T(ah = 0;);	// 7072                  mov     ah, 0 ;~ 01A2:2601
cs=0x1a2;eip=0x002603; 	T(INC(ax));	// 7073                  inc     ax ;~ 01A2:2603
cs=0x1a2;eip=0x002604; 	X(PUSH(ax));	// 7074                  push    ax              ; top ;~ 01A2:2604
cs=0x1a2;eip=0x002605; 	T(MOV(al, *(raddr(ss,bp+arg_8))));	// 7075                  mov     al, [bp+arg_8] ;~ 01A2:2605
cs=0x1a2;eip=0x002608; 	T(ah = 0;);	// 7076                  mov     ah, 0 ;~ 01A2:2608
cs=0x1a2;eip=0x00260a; 	X(PUSH(ax));	// 7077                  push    ax              ; left ;~ 01A2:260A
cs=0x1a2;eip=0x00260b; 	T(NOP);	// 7078                  nop ;~ 01A2:260B
cs=0x1a2;eip=0x00260c; 	X(PUSH(cs));	// 7079                  push    cs ;~ 01A2:260C
cs=0x1a2;eip=0x00260d; 	J(CALL(___movetext,0));	// 7080                  call    near ptr ___movetext ;~ 01A2:260D
cs=0x1a2;eip=0x002610; 	T(ADD(sp, 0x0C));	// 7081                  add     sp, 0Ch ;~ 01A2:2610
cs=0x1a2;eip=0x002613; 	X(PUSH(ss));	// 7082                  push    ss ;~ 01A2:2613
cs=0x1a2;eip=0x002614; 	T(ax = bp+destin);	// 7083                  lea     ax, [bp+destin] ;~ 01A2:2614
cs=0x1a2;eip=0x002618; 	X(PUSH(ax));	// 7084                  push    ax              ; destin ;~ 01A2:2618
cs=0x1a2;eip=0x002619; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 7085                  mov     al, [bp+arg_2] ;~ 01A2:2619
cs=0x1a2;eip=0x00261c; 	T(ah = 0;);	// 7086                  mov     ah, 0 ;~ 01A2:261C
cs=0x1a2;eip=0x00261e; 	X(PUSH(ax));	// 7087                  push    ax              ; bottom ;~ 01A2:261E
cs=0x1a2;eip=0x00261f; 	T(MOV(al, *(raddr(ss,bp+arg_8))));	// 7088                  mov     al, [bp+arg_8] ;~ 01A2:261F
cs=0x1a2;eip=0x002622; 	T(ah = 0;);	// 7089                  mov     ah, 0 ;~ 01A2:2622
cs=0x1a2;eip=0x002624; 	X(PUSH(ax));	// 7090                  push    ax              ; right ;~ 01A2:2624
cs=0x1a2;eip=0x002625; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 7091                  mov     al, [bp+arg_2] ;~ 01A2:2625
cs=0x1a2;eip=0x002628; 	T(ah = 0;);	// 7092                  mov     ah, 0 ;~ 01A2:2628
cs=0x1a2;eip=0x00262a; 	X(PUSH(ax));	// 7093                  push    ax              ; top ;~ 01A2:262A
cs=0x1a2;eip=0x00262b; 	T(MOV(al, *(raddr(ss,bp+arg_8))));	// 7094                  mov     al, [bp+arg_8] ;~ 01A2:262B
cs=0x1a2;eip=0x00262e; 	T(ah = 0;);	// 7095                  mov     ah, 0 ;~ 01A2:262E
cs=0x1a2;eip=0x002630; 	X(PUSH(ax));	// 7096                  push    ax              ; left ;~ 01A2:2630
cs=0x1a2;eip=0x002631; 	T(NOP);	// 7097                  nop ;~ 01A2:2631
cs=0x1a2;eip=0x002632; 	X(PUSH(cs));	// 7098                  push    cs ;~ 01A2:2632
cs=0x1a2;eip=0x002633; 	J(CALL(___gettext,0));	// 7099                  call    near ptr ___gettext ;~ 01A2:2633
cs=0x1a2;eip=0x002636; 	T(ADD(sp, 0x0C));	// 7100                  add     sp, 0Ch ;~ 01A2:2636
cs=0x1a2;eip=0x002639; 	X(PUSH(ss));	// 7101                  push    ss ;~ 01A2:2639
cs=0x1a2;eip=0x00263a; 	T(ax = bp+destin);	// 7102                  lea     ax, [bp+destin] ;~ 01A2:263A
cs=0x1a2;eip=0x00263e; 	X(PUSH(ax));	// 7103                  push    ax ;~ 01A2:263E
cs=0x1a2;eip=0x00263f; 	T(MOV(al, *(raddr(ss,bp+arg_8))));	// 7104                  mov     al, [bp+arg_8] ;~ 01A2:263F
cs=0x1a2;eip=0x002642; 	T(ah = 0;);	// 7105                  mov     ah, 0 ;~ 01A2:2642
cs=0x1a2;eip=0x002644; 	X(PUSH(ax));	// 7106                  push    ax ;~ 01A2:2644
cs=0x1a2;eip=0x002645; 	T(MOV(al, *(raddr(ss,bp+arg_4))));	// 7107                  mov     al, [bp+arg_4] ;~ 01A2:2645
cs=0x1a2;eip=0x002648; 	T(ah = 0;);	// 7108                  mov     ah, 0 ;~ 01A2:2648
cs=0x1a2;eip=0x00264a; 	X(PUSH(ax));	// 7109                  push    ax ;~ 01A2:264A
cs=0x1a2;eip=0x00264b; 	J(CALL(sub_12589,0));	// 7110                  call    sub_12589 ;~ 01A2:264B
cs=0x1a2;eip=0x00264e; 	X(PUSH(ss));	// 7111                  push    ss ;~ 01A2:264E
cs=0x1a2;eip=0x00264f; 	T(ax = bp+destin);	// 7112                  lea     ax, [bp+destin] ;~ 01A2:264F
cs=0x1a2;eip=0x002653; 	X(PUSH(ax));	// 7113                  push    ax              ; source ;~ 01A2:2653
cs=0x1a2;eip=0x002654; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 7114                  mov     al, [bp+arg_2] ;~ 01A2:2654
cs=0x1a2;eip=0x002657; 	T(ah = 0;);	// 7115                  mov     ah, 0 ;~ 01A2:2657
cs=0x1a2;eip=0x002659; 	X(PUSH(ax));	// 7116                  push    ax              ; bottom ;~ 01A2:2659
cs=0x1a2;eip=0x00265a; 	T(MOV(al, *(raddr(ss,bp+arg_4))));	// 7117                  mov     al, [bp+arg_4] ;~ 01A2:265A
cs=0x1a2;eip=0x00265d; 	T(ah = 0;);	// 7118                  mov     ah, 0 ;~ 01A2:265D
cs=0x1a2;eip=0x00265f; 	X(PUSH(ax));	// 7119                  push    ax              ; right ;~ 01A2:265F
cs=0x1a2;eip=0x002660; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 7120                  mov     al, [bp+arg_2] ;~ 01A2:2660
loc_12663:
	// 4783 
cs=0x1a2;eip=0x002663; 	T(ah = 0;);	// 7123                  mov     ah, 0 ;~ 01A2:2663
cs=0x1a2;eip=0x002665; 	X(PUSH(ax));	// 7124                  push    ax              ; top ;~ 01A2:2665
cs=0x1a2;eip=0x002666; 	T(MOV(al, *(raddr(ss,bp+arg_8))));	// 7125                  mov     al, [bp+arg_8] ;~ 01A2:2666
cs=0x1a2;eip=0x002669; 	T(ah = 0;);	// 7126                  mov     ah, 0 ;~ 01A2:2669
cs=0x1a2;eip=0x00266b; 	X(PUSH(ax));	// 7127                  push    ax              ; left ;~ 01A2:266B
cs=0x1a2;eip=0x00266c; 	T(NOP);	// 7128                  nop ;~ 01A2:266C
cs=0x1a2;eip=0x00266d; 	X(PUSH(cs));	// 7129                  push    cs ;~ 01A2:266D
cs=0x1a2;eip=0x00266e; 	J(CALL(___puttext,0));	// 7130                  call    near ptr ___puttext ;~ 01A2:266E
cs=0x1a2;eip=0x002671; 	T(ADD(sp, 0x0C));	// 7131                  add     sp, 0Ch ;~ 01A2:2671
cs=0x1a2;eip=0x002674; 	J(JMP(loc_12711));	// 7132                  jmp     loc_12711 ;~ 01A2:2674
loc_12677:
	// 4784 
cs=0x1a2;eip=0x002677; 	T(MOV(al, *(raddr(ss,bp+arg_6))));	// 7136                  mov     al, [bp+arg_6] ;~ 01A2:2677
cs=0x1a2;eip=0x00267a; 	T(ah = 0;);	// 7137                  mov     ah, 0 ;~ 01A2:267A
cs=0x1a2;eip=0x00267c; 	T(INC(ax));	// 7138                  inc     ax ;~ 01A2:267C
cs=0x1a2;eip=0x00267d; 	X(PUSH(ax));	// 7139                  push    ax              ; desttop ;~ 01A2:267D
cs=0x1a2;eip=0x00267e; 	T(MOV(al, *(raddr(ss,bp+arg_8))));	// 7140                  mov     al, [bp+arg_8] ;~ 01A2:267E
cs=0x1a2;eip=0x002681; 	T(ah = 0;);	// 7141                  mov     ah, 0 ;~ 01A2:2681
cs=0x1a2;eip=0x002683; 	X(PUSH(ax));	// 7142                  push    ax              ; destleft ;~ 01A2:2683
cs=0x1a2;eip=0x002684; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 7143                  mov     al, [bp+arg_2] ;~ 01A2:2684
cs=0x1a2;eip=0x002687; 	T(ah = 0;);	// 7144                  mov     ah, 0 ;~ 01A2:2687
cs=0x1a2;eip=0x002689; 	T(DEC(ax));	// 7145                  dec     ax ;~ 01A2:2689
cs=0x1a2;eip=0x00268a; 	X(PUSH(ax));	// 7146                  push    ax              ; bottom ;~ 01A2:268A
cs=0x1a2;eip=0x00268b; 	T(MOV(al, *(raddr(ss,bp+arg_4))));	// 7147                  mov     al, [bp+arg_4] ;~ 01A2:268B
cs=0x1a2;eip=0x00268e; 	T(ah = 0;);	// 7148                  mov     ah, 0 ;~ 01A2:268E
cs=0x1a2;eip=0x002690; 	X(PUSH(ax));	// 7149                  push    ax              ; right ;~ 01A2:2690
cs=0x1a2;eip=0x002691; 	T(MOV(al, *(raddr(ss,bp+arg_6))));	// 7150                  mov     al, [bp+arg_6] ;~ 01A2:2691
cs=0x1a2;eip=0x002694; 	T(ah = 0;);	// 7151                  mov     ah, 0 ;~ 01A2:2694
cs=0x1a2;eip=0x002696; 	X(PUSH(ax));	// 7152                  push    ax              ; top ;~ 01A2:2696
cs=0x1a2;eip=0x002697; 	T(MOV(al, *(raddr(ss,bp+arg_8))));	// 7153                  mov     al, [bp+arg_8] ;~ 01A2:2697
cs=0x1a2;eip=0x00269a; 	T(ah = 0;);	// 7154                  mov     ah, 0 ;~ 01A2:269A
cs=0x1a2;eip=0x00269c; 	X(PUSH(ax));	// 7155                  push    ax              ; left ;~ 01A2:269C
cs=0x1a2;eip=0x00269d; 	T(NOP);	// 7156                  nop ;~ 01A2:269D
cs=0x1a2;eip=0x00269e; 	X(PUSH(cs));	// 7157                  push    cs ;~ 01A2:269E
cs=0x1a2;eip=0x00269f; 	J(CALL(___movetext,0));	// 7158                  call    near ptr ___movetext ;~ 01A2:269F
cs=0x1a2;eip=0x0026a2; 	T(ADD(sp, 0x0C));	// 7159                  add     sp, 0Ch ;~ 01A2:26A2
cs=0x1a2;eip=0x0026a5; 	X(PUSH(ss));	// 7160                  push    ss ;~ 01A2:26A5
cs=0x1a2;eip=0x0026a6; 	T(ax = bp+destin);	// 7161                  lea     ax, [bp+destin] ;~ 01A2:26A6
cs=0x1a2;eip=0x0026aa; 	X(PUSH(ax));	// 7162                  push    ax              ; destin ;~ 01A2:26AA
cs=0x1a2;eip=0x0026ab; 	T(MOV(al, *(raddr(ss,bp+arg_6))));	// 7163                  mov     al, [bp+arg_6] ;~ 01A2:26AB
cs=0x1a2;eip=0x0026ae; 	T(ah = 0;);	// 7164                  mov     ah, 0 ;~ 01A2:26AE
cs=0x1a2;eip=0x0026b0; 	X(PUSH(ax));	// 7165                  push    ax              ; bottom ;~ 01A2:26B0
cs=0x1a2;eip=0x0026b1; 	T(MOV(al, *(raddr(ss,bp+arg_8))));	// 7166                  mov     al, [bp+arg_8] ;~ 01A2:26B1
cs=0x1a2;eip=0x0026b4; 	T(ah = 0;);	// 7167                  mov     ah, 0 ;~ 01A2:26B4
cs=0x1a2;eip=0x0026b6; 	X(PUSH(ax));	// 7168                  push    ax              ; right ;~ 01A2:26B6
cs=0x1a2;eip=0x0026b7; 	T(MOV(al, *(raddr(ss,bp+arg_6))));	// 7169                  mov     al, [bp+arg_6] ;~ 01A2:26B7
cs=0x1a2;eip=0x0026ba; 	T(ah = 0;);	// 7170                  mov     ah, 0 ;~ 01A2:26BA
cs=0x1a2;eip=0x0026bc; 	X(PUSH(ax));	// 7171                  push    ax              ; top ;~ 01A2:26BC
cs=0x1a2;eip=0x0026bd; 	T(MOV(al, *(raddr(ss,bp+arg_8))));	// 7172                  mov     al, [bp+arg_8] ;~ 01A2:26BD
cs=0x1a2;eip=0x0026c0; 	T(ah = 0;);	// 7173                  mov     ah, 0 ;~ 01A2:26C0
cs=0x1a2;eip=0x0026c2; 	X(PUSH(ax));	// 7174                  push    ax              ; left ;~ 01A2:26C2
cs=0x1a2;eip=0x0026c3; 	T(NOP);	// 7175                  nop ;~ 01A2:26C3
cs=0x1a2;eip=0x0026c4; 	X(PUSH(cs));	// 7176                  push    cs ;~ 01A2:26C4
cs=0x1a2;eip=0x0026c5; 	J(CALL(___gettext,0));	// 7177                  call    near ptr ___gettext ;~ 01A2:26C5
cs=0x1a2;eip=0x0026c8; 	T(ADD(sp, 0x0C));	// 7178                  add     sp, 0Ch ;~ 01A2:26C8
cs=0x1a2;eip=0x0026cb; 	X(PUSH(ss));	// 7179                  push    ss ;~ 01A2:26CB
cs=0x1a2;eip=0x0026cc; 	T(ax = bp+destin);	// 7180                  lea     ax, [bp+destin] ;~ 01A2:26CC
cs=0x1a2;eip=0x0026d0; 	X(PUSH(ax));	// 7181                  push    ax ;~ 01A2:26D0
cs=0x1a2;eip=0x0026d1; 	T(MOV(al, *(raddr(ss,bp+arg_8))));	// 7182                  mov     al, [bp+arg_8] ;~ 01A2:26D1
cs=0x1a2;eip=0x0026d4; 	T(ah = 0;);	// 7183                  mov     ah, 0 ;~ 01A2:26D4
cs=0x1a2;eip=0x0026d6; 	X(PUSH(ax));	// 7184                  push    ax ;~ 01A2:26D6
cs=0x1a2;eip=0x0026d7; 	T(MOV(al, *(raddr(ss,bp+arg_4))));	// 7185                  mov     al, [bp+arg_4] ;~ 01A2:26D7
cs=0x1a2;eip=0x0026da; 	T(ah = 0;);	// 7186                  mov     ah, 0 ;~ 01A2:26DA
cs=0x1a2;eip=0x0026dc; 	X(PUSH(ax));	// 7187                  push    ax ;~ 01A2:26DC
cs=0x1a2;eip=0x0026dd; 	J(CALL(sub_12589,0));	// 7188                  call    sub_12589 ;~ 01A2:26DD
cs=0x1a2;eip=0x0026e0; 	X(PUSH(ss));	// 7189                  push    ss ;~ 01A2:26E0
cs=0x1a2;eip=0x0026e1; 	T(ax = bp+destin);	// 7190                  lea     ax, [bp+destin] ;~ 01A2:26E1
cs=0x1a2;eip=0x0026e5; 	X(PUSH(ax));	// 7191                  push    ax ;~ 01A2:26E5
cs=0x1a2;eip=0x0026e6; 	T(MOV(al, *(raddr(ss,bp+arg_6))));	// 7192                  mov     al, [bp+arg_6] ;~ 01A2:26E6
cs=0x1a2;eip=0x0026e9; 	T(ah = 0;);	// 7193                  mov     ah, 0 ;~ 01A2:26E9
cs=0x1a2;eip=0x0026eb; 	X(PUSH(ax));	// 7194                  push    ax ;~ 01A2:26EB
cs=0x1a2;eip=0x0026ec; 	T(MOV(al, *(raddr(ss,bp+arg_4))));	// 7195                  mov     al, [bp+arg_4] ;~ 01A2:26EC
cs=0x1a2;eip=0x0026ef; 	T(ah = 0;);	// 7196                  mov     ah, 0 ;~ 01A2:26EF
cs=0x1a2;eip=0x0026f1; 	X(PUSH(ax));	// 7197                  push    ax ;~ 01A2:26F1
cs=0x1a2;eip=0x0026f2; 	T(MOV(al, *(raddr(ss,bp+arg_6))));	// 7198                  mov     al, [bp+arg_6] ;~ 01A2:26F2
cs=0x1a2;eip=0x0026f5; 	J(JMP(loc_12663));	// 7199                  jmp     loc_12663 ;~ 01A2:26F5
loc_126f8:
	// 4785 
cs=0x1a2;eip=0x0026f8; 	T(bh = byte_19254;);	// 7204                  mov     bh, byte_19254 ;~ 01A2:26F8
cs=0x1a2;eip=0x0026fc; 	T(MOV(ah, *(raddr(ss,bp+arg_a))));	// 7205                  mov     ah, [bp+arg_A] ;~ 01A2:26FC
cs=0x1a2;eip=0x0026ff; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 7206                  mov     al, [bp+arg_0] ;~ 01A2:26FF
cs=0x1a2;eip=0x002702; 	T(MOV(ch, *(raddr(ss,bp+arg_6))));	// 7207                  mov     ch, [bp+arg_6] ;~ 01A2:2702
cs=0x1a2;eip=0x002705; 	T(MOV(cl, *(raddr(ss,bp+arg_8))));	// 7208                  mov     cl, [bp+arg_8] ;~ 01A2:2705
cs=0x1a2;eip=0x002708; 	T(MOV(dh, *(raddr(ss,bp+arg_2))));	// 7209                  mov     dh, [bp+arg_2] ;~ 01A2:2708
cs=0x1a2;eip=0x00270b; 	T(MOV(dl, *(raddr(ss,bp+arg_4))));	// 7210                  mov     dl, [bp+arg_4] ;~ 01A2:270B
cs=0x1a2;eip=0x00270e; 	J(CALL(____videoint,0));	// 7211                  call    ____VideoInt ;~ 01A2:270E
loc_12711:
	// 4786 
cs=0x1a2;eip=0x002711; 	T(sp = bp;);	// 7214                  mov     sp, bp ;~ 01A2:2711
cs=0x1a2;eip=0x002713; 	X(POP(bp));	// 7215                  pop     bp ;~ 01A2:2713
cs=0x1a2;eip=0x002714; 	J(RETN(0x0C));	// 7216                  retn    0Ch ;~ 01A2:2714

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____scroll: 	goto ____scroll;
        case m2c::kloc_125be: 	goto loc_125be;
        case m2c::kloc_125c8: 	goto loc_125c8;
        case m2c::kloc_125d1: 	goto loc_125d1;
        case m2c::kloc_125e6: 	goto loc_125e6;
        case m2c::kloc_12663: 	goto loc_12663;
        case m2c::kloc_12677: 	goto loc_12677;
        case m2c::kloc_126f8: 	goto loc_126f8;
        case m2c::kloc_12711: 	goto loc_12711;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___setblock(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___setblock:
    _begin:
#undef segx
#define segx 6
	// 7228 segx            = word ptr  6 ;~ 01A2:2717
#undef newsize
#define newsize 8
	// 7229 newsize         = word ptr  8 ;~ 01A2:2717
cs=0x1a2;eip=0x002717; 	X(PUSH(bp));	// 7231                  push    bp ;~ 01A2:2717
cs=0x1a2;eip=0x002718; 	T(bp = sp;);	// 7232                  mov     bp, sp ;~ 01A2:2718
cs=0x1a2;eip=0x00271a; 	T(ah = 0x4A;);	// 7233                  mov     ah, 4Ah ; 'J' ;~ 01A2:271A
cs=0x1a2;eip=0x00271c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+newsize))));	// 7234                  mov     bx, [bp+newsize] ;~ 01A2:271C
cs=0x1a2;eip=0x00271f; 	T(MOV(es, *(dw*)(raddr(ss,bp+segx))));	// 7235                  mov     es, [bp+segx] ;~ 01A2:271F
cs=0x1a2;eip=0x002722; 	S(_INT(0x21));	// 7237                  int     21h             ; DOS - 2+ - ADJUST MEMORY BLOCK SIZE (SETBLOCK) ;~ 01A2:2722
cs=0x1a2;eip=0x002724; 	J(JC(loc_1272b));	// 7240                  jb      short loc_1272B ;~ 01A2:2724
cs=0x1a2;eip=0x002726; 	T(ax = 0x0FFFF;);	// 7241                  mov     ax, 0FFFFh ;~ 01A2:2726
cs=0x1a2;eip=0x002729; 	J(JMP(loc_12731));	// 7242                  jmp     short loc_12731 ;~ 01A2:2729
loc_1272b:
	// 4787 
cs=0x1a2;eip=0x00272b; 	X(PUSH(bx));	// 7246                  push    bx ;~ 01A2:272B
cs=0x1a2;eip=0x00272c; 	X(PUSH(ax));	// 7247                  push    ax ;~ 01A2:272C
cs=0x1a2;eip=0x00272d; 	J(CALL(____ioerror,0));	// 7248                  call    ____IOERROR ;~ 01A2:272D
cs=0x1a2;eip=0x002730; 	X(POP(ax));	// 7249                  pop     ax ;~ 01A2:2730
loc_12731:
	// 4788 
cs=0x1a2;eip=0x002731; 	X(POP(bp));	// 7252                  pop     bp ;~ 01A2:2731
cs=0x1a2;eip=0x002732; 	J(RETF(0));	// 7253                  retf ;~ 01A2:2732

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___setblock: 	goto ___setblock;
        case m2c::kloc_1272b: 	goto loc_1272b;
        case m2c::kloc_12731: 	goto loc_12731;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12733(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12733:
    _begin:
cs=0x1a2;eip=0x002733; 	X(PUSH(si));	// 7265                  push    si ;~ 01A2:2733
cs=0x1a2;eip=0x002734; 	X(PUSH(di));	// 7266                  push    di ;~ 01A2:2734
cs=0x1a2;eip=0x002735; 	T(es = word_18957;);	// 7267                  mov     es, word_18957 ;~ 01A2:2735
cs=0x1a2;eip=0x002739; 	T(XOR(di, di));	// 7269                  xor     di, di ;~ 01A2:2739
cs=0x1a2;eip=0x00273b; 	X(PUSH(es));	// 7270                  push    es ;~ 01A2:273B
cs=0x1a2;eip=0x00273c; 	X(PUSH(_size));	// 7271                  push    _size           ; size ;~ 01A2:273C
cs=0x1a2;eip=0x002740; 	T(NOP);	// 7272                  nop ;~ 01A2:2740
cs=0x1a2;eip=0x002741; 	X(PUSH(cs));	// 7273                  push    cs ;~ 01A2:2741
cs=0x1a2;eip=0x002742; 	J(CALL(___malloc,0));	// 7274                  call    near ptr ___malloc ;~ 01A2:2742
cs=0x1a2;eip=0x002745; 	X(POP(bx));	// 7276                  pop     bx ;~ 01A2:2745
cs=0x1a2;eip=0x002746; 	T(bx = ax;);	// 7277                  mov     bx, ax ;~ 01A2:2746
cs=0x1a2;eip=0x002748; 	X(POP(es));	// 7278                  pop     es ;~ 01A2:2748
cs=0x1a2;eip=0x002749; 	X(*(dw*)(&dword_1929e) = ax;);	// 7280                  mov     word ptr dword_1929E, ax ;~ 01A2:2749
cs=0x1a2;eip=0x00274c; 	X(*(dw*)(((db*)&dword_1929e)+2) = dx;);	// 7281                  mov     word ptr dword_1929E+2, dx ;~ 01A2:274C
cs=0x1a2;eip=0x002750; 	X(PUSH(ds));	// 7282                  push    ds ;~ 01A2:2750
cs=0x1a2;eip=0x002751; 	T(ds = dx;);	// 7283                  mov     ds, dx ;~ 01A2:2751
cs=0x1a2;eip=0x002753; 	T(OR(ax, dx));	// 7285                  or      ax, dx ;~ 01A2:2753
cs=0x1a2;eip=0x002755; 	J(JNZ(loc_1275c));	// 7286                  jnz     short loc_1275C ;~ 01A2:2755
cs=0x1a2;eip=0x002757; 	T(NOP);	// 7287                  nop ;~ 01A2:2757
cs=0x1a2;eip=0x002758; 	T(NOP);	// 7288                  nop ;~ 01A2:2758
cs=0x1a2;eip=0x002759; 	J(return _group2(m2c::k___abort, _state););	// 7289                  jmp     ___abort ;~ 01A2:2759
loc_1275c:
	// 4789 
cs=0x1a2;eip=0x00275c; 	T(XOR(ax, ax));	// 7293                  xor     ax, ax ;~ 01A2:275C
cs=0x1a2;eip=0x00275e; 	T(cx = 0x0FFFF;);	// 7294                  mov     cx, 0FFFFh ;~ 01A2:275E
cs=0x1a2;eip=0x002761; 	T(CMP(*(raddr(es,di)), 0));	// 7295                  cmp     byte ptr es:[di], 0 ;~ 01A2:2761
cs=0x1a2;eip=0x002765; 	J(JZ(loc_12776));	// 7296                  jz      short loc_12776 ;~ 01A2:2765
loc_12767:
	// 4790 
cs=0x1a2;eip=0x002767; 	X(MOV(*(dw*)(raddr(ds,bx)), di));	// 7299                  mov     [bx], di ;~ 01A2:2767
cs=0x1a2;eip=0x002769; 	X(MOV(*(dw*)(raddr(ds,bx+2)), es));	// 7300                  mov     word ptr [bx+2], es ;~ 01A2:2769
cs=0x1a2;eip=0x00276c; 	T(ADD(bx, 4));	// 7301                  add     bx, 4 ;~ 01A2:276C
	// 7302                  repne scasb ;~ 01A2:276F
cs=0x1a2;eip=0x00276f; 	T(	REPNE SCASB);	// 7302                  repne scasb ;~ 01A2:276F
cs=0x1a2;eip=0x002771; 	T(CMP(*(raddr(es,di)), al));	// 7303                  cmp     es:[di], al ;~ 01A2:2771
cs=0x1a2;eip=0x002774; 	J(JNZ(loc_12767));	// 7304                  jnz     short loc_12767 ;~ 01A2:2774
loc_12776:
	// 4791 
cs=0x1a2;eip=0x002776; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 7307                  mov     [bx], ax ;~ 01A2:2776
cs=0x1a2;eip=0x002778; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 7308                  mov     [bx+2], ax ;~ 01A2:2778
cs=0x1a2;eip=0x00277b; 	X(POP(ds));	// 7309                  pop     ds ;~ 01A2:277B
cs=0x1a2;eip=0x00277c; 	X(POP(di));	// 7311                  pop     di ;~ 01A2:277C
cs=0x1a2;eip=0x00277d; 	X(POP(si));	// 7312                  pop     si ;~ 01A2:277D
cs=0x1a2;eip=0x00277e; 	T(ax = *(dw*)(((db*)&dword_1929e)+2););	// 7313                  mov     ax, word ptr dword_1929E+2 ;~ 01A2:277E
cs=0x1a2;eip=0x002781; 	X(word_18953 = ax;);	// 7314                  mov     word_18953, ax ;~ 01A2:2781
cs=0x1a2;eip=0x002784; 	T(ax = *(dw*)(&dword_1929e););	// 7315                  mov     ax, word ptr dword_1929E ;~ 01A2:2784
cs=0x1a2;eip=0x002787; 	X(__envp = ax;);	// 7316                  mov     __envp, ax ;~ 01A2:2787
cs=0x1a2;eip=0x00278a; 	J(RETN(0));	// 7317                  retn ;~ 01A2:278A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1275c: 	goto loc_1275c;
        case m2c::kloc_12767: 	goto loc_12767;
        case m2c::kloc_12776: 	goto loc_12776;
        case m2c::ksub_12733: 	goto sub_12733;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___sleep(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___sleep:
    _begin:
#undef timep
#define timep -4
	// 7328 timep           = time_ ptr -4 ;~ 01A2:278B
#undef seconds
#define seconds 6
	// 7329 seconds         = word ptr  6 ;~ 01A2:278B
cs=0x1a2;eip=0x00278b; 	X(PUSH(bp));	// 7331                  push    bp ;~ 01A2:278B
cs=0x1a2;eip=0x00278c; 	T(bp = sp;);	// 7332                  mov     bp, sp ;~ 01A2:278C
cs=0x1a2;eip=0x00278e; 	T(SUB(sp, 4));	// 7333                  sub     sp, 4 ;~ 01A2:278E
cs=0x1a2;eip=0x002791; 	X(PUSH(si));	// 7334                  push    si ;~ 01A2:2791
cs=0x1a2;eip=0x002792; 	X(PUSH(di));	// 7335                  push    di ;~ 01A2:2792
cs=0x1a2;eip=0x002793; 	X(PUSH(ss));	// 7336                  push    ss ;~ 01A2:2793
cs=0x1a2;eip=0x002794; 	T(ax = bp+timep);	// 7337                  lea     ax, [bp+timep] ;~ 01A2:2794
cs=0x1a2;eip=0x002797; 	X(PUSH(ax));	// 7338                  push    ax              ; timep ;~ 01A2:2797
cs=0x1a2;eip=0x002798; 	T(NOP);	// 7339                  nop ;~ 01A2:2798
cs=0x1a2;eip=0x002799; 	X(PUSH(cs));	// 7340                  push    cs ;~ 01A2:2799
cs=0x1a2;eip=0x00279a; 	J(CALL(___gettime,0));	// 7341                  call    near ptr ___gettime ;~ 01A2:279A
cs=0x1a2;eip=0x00279d; 	X(POP(cx));	// 7342                  pop     cx ;~ 01A2:279D
cs=0x1a2;eip=0x00279e; 	X(POP(cx));	// 7343                  pop     cx ;~ 01A2:279E
cs=0x1a2;eip=0x00279f; 	T(CMP(((time_*)raddr(ss,bp+timep))->ti_hund, 0x5A));	// 7344                  cmp     [bp+timep.ti_hund], 5Ah ; 'Z' ;~ 01A2:279F
cs=0x1a2;eip=0x0027a3; 	J(JBE(loc_127aa));	// 7345                  jbe     short loc_127AA ;~ 01A2:27A3
cs=0x1a2;eip=0x0027a5; 	T(ax = 0x5A;);	// 7346                  mov     ax, 5Ah ; 'Z' ;~ 01A2:27A5
cs=0x1a2;eip=0x0027a8; 	J(JMP(loc_127af));	// 7347                  jmp     short loc_127AF ;~ 01A2:27A8
loc_127aa:
	// 4792 
cs=0x1a2;eip=0x0027aa; 	T(MOV(al, ((time_*)raddr(ss,bp+timep))->ti_hund));	// 7351                  mov     al, [bp+timep.ti_hund] ;~ 01A2:27AA
cs=0x1a2;eip=0x0027ad; 	T(ah = 0;);	// 7352                  mov     ah, 0 ;~ 01A2:27AD
loc_127af:
	// 4793 
cs=0x1a2;eip=0x0027af; 	T(di = ax;);	// 7355                  mov     di, ax ;~ 01A2:27AF
cs=0x1a2;eip=0x0027b1; 	J(JMP(loc_127cf));	// 7356                  jmp     short loc_127CF ;~ 01A2:27B1
loc_127b3:
	// 4794 
cs=0x1a2;eip=0x0027b3; 	T(MOV(al, ((time_*)raddr(ss,bp+timep))->ti_sec));	// 7360                  mov     al, [bp+timep.ti_sec] ;~ 01A2:27B3
cs=0x1a2;eip=0x0027b6; 	T(ah = 0;);	// 7361                  mov     ah, 0 ;~ 01A2:27B6
cs=0x1a2;eip=0x0027b8; 	T(si = ax;);	// 7362                  mov     si, ax ;~ 01A2:27B8
loc_127ba:
	// 4795 
cs=0x1a2;eip=0x0027ba; 	X(PUSH(ss));	// 7365                  push    ss ;~ 01A2:27BA
cs=0x1a2;eip=0x0027bb; 	T(ax = bp+timep);	// 7366                  lea     ax, [bp+timep] ;~ 01A2:27BB
cs=0x1a2;eip=0x0027be; 	X(PUSH(ax));	// 7367                  push    ax              ; timep ;~ 01A2:27BE
cs=0x1a2;eip=0x0027bf; 	T(NOP);	// 7368                  nop ;~ 01A2:27BF
cs=0x1a2;eip=0x0027c0; 	X(PUSH(cs));	// 7369                  push    cs ;~ 01A2:27C0
cs=0x1a2;eip=0x0027c1; 	J(CALL(___gettime,0));	// 7370                  call    near ptr ___gettime ;~ 01A2:27C1
cs=0x1a2;eip=0x0027c4; 	X(POP(cx));	// 7371                  pop     cx ;~ 01A2:27C4
cs=0x1a2;eip=0x0027c5; 	X(POP(cx));	// 7372                  pop     cx ;~ 01A2:27C5
cs=0x1a2;eip=0x0027c6; 	T(MOV(al, ((time_*)raddr(ss,bp+timep))->ti_sec));	// 7373                  mov     al, [bp+timep.ti_sec] ;~ 01A2:27C6
cs=0x1a2;eip=0x0027c9; 	T(ah = 0;);	// 7374                  mov     ah, 0 ;~ 01A2:27C9
cs=0x1a2;eip=0x0027cb; 	T(CMP(ax, si));	// 7375                  cmp     ax, si ;~ 01A2:27CB
cs=0x1a2;eip=0x0027cd; 	J(JZ(loc_127ba));	// 7376                  jz      short loc_127BA ;~ 01A2:27CD
loc_127cf:
	// 4796 
cs=0x1a2;eip=0x0027cf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+seconds))));	// 7379                  mov     ax, [bp+seconds] ;~ 01A2:27CF
cs=0x1a2;eip=0x0027d2; 	X(DEC(*(dw*)(raddr(ss,bp+seconds))));	// 7380                  dec     [bp+seconds] ;~ 01A2:27D2
cs=0x1a2;eip=0x0027d5; 	T(OR(ax, ax));	// 7381                  or      ax, ax ;~ 01A2:27D5
cs=0x1a2;eip=0x0027d7; 	J(JNZ(loc_127b3));	// 7382                  jnz     short loc_127B3 ;~ 01A2:27D7
loc_127d9:
	// 4797 
cs=0x1a2;eip=0x0027d9; 	X(PUSH(ss));	// 7385                  push    ss ;~ 01A2:27D9
cs=0x1a2;eip=0x0027da; 	T(ax = bp+timep);	// 7386                  lea     ax, [bp+timep] ;~ 01A2:27DA
cs=0x1a2;eip=0x0027dd; 	X(PUSH(ax));	// 7387                  push    ax              ; timep ;~ 01A2:27DD
cs=0x1a2;eip=0x0027de; 	T(NOP);	// 7388                  nop ;~ 01A2:27DE
cs=0x1a2;eip=0x0027df; 	X(PUSH(cs));	// 7389                  push    cs ;~ 01A2:27DF
cs=0x1a2;eip=0x0027e0; 	J(CALL(___gettime,0));	// 7390                  call    near ptr ___gettime ;~ 01A2:27E0
cs=0x1a2;eip=0x0027e3; 	X(POP(cx));	// 7391                  pop     cx ;~ 01A2:27E3
cs=0x1a2;eip=0x0027e4; 	X(POP(cx));	// 7392                  pop     cx ;~ 01A2:27E4
cs=0x1a2;eip=0x0027e5; 	T(MOV(al, ((time_*)raddr(ss,bp+timep))->ti_hund));	// 7393                  mov     al, [bp+timep.ti_hund] ;~ 01A2:27E5
cs=0x1a2;eip=0x0027e8; 	T(ah = 0;);	// 7394                  mov     ah, 0 ;~ 01A2:27E8
cs=0x1a2;eip=0x0027ea; 	T(CMP(ax, di));	// 7395                  cmp     ax, di ;~ 01A2:27EA
cs=0x1a2;eip=0x0027ec; 	J(JL(loc_127d9));	// 7396                  jl      short loc_127D9 ;~ 01A2:27EC
cs=0x1a2;eip=0x0027ee; 	X(POP(di));	// 7397                  pop     di ;~ 01A2:27EE
cs=0x1a2;eip=0x0027ef; 	X(POP(si));	// 7398                  pop     si ;~ 01A2:27EF
cs=0x1a2;eip=0x0027f0; 	T(sp = bp;);	// 7399                  mov     sp, bp ;~ 01A2:27F0
cs=0x1a2;eip=0x0027f2; 	X(POP(bp));	// 7400                  pop     bp ;~ 01A2:27F2
cs=0x1a2;eip=0x0027f3; 	J(RETF(0));	// 7401                  retf ;~ 01A2:27F3

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___sleep: 	goto ___sleep;
        case m2c::kloc_127aa: 	goto loc_127aa;
        case m2c::kloc_127af: 	goto loc_127af;
        case m2c::kloc_127b3: 	goto loc_127b3;
        case m2c::kloc_127ba: 	goto loc_127ba;
        case m2c::kloc_127cf: 	goto loc_127cf;
        case m2c::kloc_127d9: 	goto loc_127d9;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____wherexy(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____wherexy:
    _begin:
cs=0x1a2;eip=0x0027f4; 	T(ah = 3;);	// 7411                  mov     ah, 3 ;~ 01A2:27F4
cs=0x1a2;eip=0x0027f6; 	T(bh = 0;);	// 7412                  mov     bh, 0 ;~ 01A2:27F6
cs=0x1a2;eip=0x0027f8; 	J(CALL(____videoint,0));	// 7413                  call    ____VideoInt ;~ 01A2:27F8
cs=0x1a2;eip=0x0027fb; 	T(ax = dx;);	// 7414                  mov     ax, dx ;~ 01A2:27FB
cs=0x1a2;eip=0x0027fd; 	J(RETN(0));	// 7415                  retn ;~ 01A2:27FD

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____wherexy: 	goto ____wherexy;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___wherex(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___wherex:
    _begin:
cs=0x1a2;eip=0x0027fe; 	J(CALL(____wherexy,0));	// 7425                  call    ____wherexy ;~ 01A2:27FE
cs=0x1a2;eip=0x002801; 	T(ah = 0;);	// 7426                  mov     ah, 0 ;~ 01A2:2801
cs=0x1a2;eip=0x002803; 	T(dl = byte_19250;);	// 7427                  mov     dl, byte_19250 ;~ 01A2:2803
cs=0x1a2;eip=0x002807; 	T(dh = 0;);	// 7428                  mov     dh, 0 ;~ 01A2:2807
cs=0x1a2;eip=0x002809; 	T(SUB(ax, dx));	// 7429                  sub     ax, dx ;~ 01A2:2809
cs=0x1a2;eip=0x00280b; 	T(INC(ax));	// 7430                  inc     ax ;~ 01A2:280B
cs=0x1a2;eip=0x00280c; 	J(RETF(0));	// 7431                  retf ;~ 01A2:280C

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___wherex: 	goto ___wherex;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___wherey(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___wherey:
    _begin:
cs=0x1a2;eip=0x00280d; 	J(CALL(____wherexy,0));	// 7441                  call    ____wherexy ;~ 01A2:280D
cs=0x1a2;eip=0x002810; 	T(cl = 8;);	// 7442                  mov     cl, 8 ;~ 01A2:2810
cs=0x1a2;eip=0x002812; 	T(SHR(ax, cl));	// 7443                  shr     ax, cl ;~ 01A2:2812
cs=0x1a2;eip=0x002814; 	T(ah = 0;);	// 7444                  mov     ah, 0 ;~ 01A2:2814
cs=0x1a2;eip=0x002816; 	T(dl = byte_19251;);	// 7445                  mov     dl, byte_19251 ;~ 01A2:2816
cs=0x1a2;eip=0x00281a; 	T(dh = 0;);	// 7446                  mov     dh, 0 ;~ 01A2:281A
cs=0x1a2;eip=0x00281c; 	T(SUB(ax, dx));	// 7447                  sub     ax, dx ;~ 01A2:281C
cs=0x1a2;eip=0x00281e; 	T(INC(ax));	// 7448                  inc     ax ;~ 01A2:281E
cs=0x1a2;eip=0x00281f; 	J(RETF(0));	// 7449                  retf ;~ 01A2:281F

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___wherey: 	goto ___wherey;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____chmod(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____chmod:
    _begin:
#undef pathname
#define pathname 6
	// 7461 pathname        = dword ptr  6 ;~ 01A2:2820
#undef func
#define func 0x0A
	// 7462 func            = word ptr  0Ah ;~ 01A2:2820
#undef arg_6
#define arg_6 0x0C
	// 7463 arg_6           = word ptr  0Ch ;~ 01A2:2820
cs=0x1a2;eip=0x002820; 	X(PUSH(bp));	// 7465                  push    bp ;~ 01A2:2820
cs=0x1a2;eip=0x002821; 	T(bp = sp;);	// 7466                  mov     bp, sp ;~ 01A2:2821
cs=0x1a2;eip=0x002823; 	X(PUSH(ds));	// 7467                  push    ds ;~ 01A2:2823
cs=0x1a2;eip=0x002824; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_6))));	// 7468                  mov     cx, [bp+arg_6] ;~ 01A2:2824
cs=0x1a2;eip=0x002827; 	T(ah = 0x43;);	// 7469                  mov     ah, 43h ; 'C' ;~ 01A2:2827
cs=0x1a2;eip=0x002829; 	T(MOV(al, *(raddr(ss,bp+func))));	// 7470                  mov     al, byte ptr [bp+func] ;~ 01A2:2829
cs=0x1a2;eip=0x00282c; 	T(LDS(dx, *(dd*)(raddr(ss,bp+pathname))));	// 7471                  lds     dx, [bp+pathname] ;~ 01A2:282C
cs=0x1a2;eip=0x00282f; 	S(_INT(0x21));	// 7472                  int     21h             ; DOS - ;~ 01A2:282F
cs=0x1a2;eip=0x002831; 	X(POP(ds));	// 7473                  pop     ds ;~ 01A2:2831
cs=0x1a2;eip=0x002832; 	J(JC(loc_12837));	// 7474                  jb      short loc_12837 ;~ 01A2:2832
cs=0x1a2;eip=0x002834; 	T(XCHG(ax, cx));	// 7475                  xchg    ax, cx ;~ 01A2:2834
cs=0x1a2;eip=0x002835; 	J(JMP(loc_1283b));	// 7476                  jmp     short loc_1283B ;~ 01A2:2835
loc_12837:
	// 4798 
cs=0x1a2;eip=0x002837; 	X(PUSH(ax));	// 7480                  push    ax ;~ 01A2:2837
cs=0x1a2;eip=0x002838; 	J(CALL(____ioerror,0));	// 7481                  call    ____IOERROR ;~ 01A2:2838
loc_1283b:
	// 4799 
cs=0x1a2;eip=0x00283b; 	X(POP(bp));	// 7484                  pop     bp ;~ 01A2:283B
cs=0x1a2;eip=0x00283c; 	J(RETF(0));	// 7485                  retf ;~ 01A2:283C

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____chmod: 	goto ____chmod;
        case m2c::kloc_12837: 	goto loc_12837;
        case m2c::kloc_1283b: 	goto loc_1283b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___close_0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___close_0:
    _begin:
#undef handle
#define handle 6
	// 7497 handle          = word ptr  6 ;~ 01A2:283D
cs=0x1a2;eip=0x00283d; 	X(PUSH(bp));	// 7499                  push    bp ;~ 01A2:283D
cs=0x1a2;eip=0x00283e; 	T(bp = sp;);	// 7500                  mov     bp, sp ;~ 01A2:283E
cs=0x1a2;eip=0x002840; 	T(MOV(dx, *(dw*)(raddr(ss,bp+handle))));	// 7501                  mov     dx, [bp+handle] ;~ 01A2:2840
cs=0x1a2;eip=0x002843; 	T(CMP(dx, word_19140));	// 7502                  cmp     dx, word_19140 ;~ 01A2:2843
cs=0x1a2;eip=0x002847; 	J(JC(loc_12852));	// 7503                  jb      short loc_12852 ;~ 01A2:2847
cs=0x1a2;eip=0x002849; 	T(ax = 6;);	// 7504                  mov     ax, 6 ;~ 01A2:2849
cs=0x1a2;eip=0x00284c; 	X(PUSH(ax));	// 7505                  push    ax ;~ 01A2:284C
cs=0x1a2;eip=0x00284d; 	J(CALL(____ioerror,0));	// 7506                  call    ____IOERROR ;~ 01A2:284D
cs=0x1a2;eip=0x002850; 	J(JMP(loc_12863));	// 7507                  jmp     short loc_12863 ;~ 01A2:2850
loc_12852:
	// 4800 
cs=0x1a2;eip=0x002852; 	T(bx = dx;);	// 7511                  mov     bx, dx ;~ 01A2:2852
cs=0x1a2;eip=0x002854; 	T(SHL(bx, 1));	// 7512                  shl     bx, 1 ;~ 01A2:2854
cs=0x1a2;eip=0x002856; 	X(MOV(*(dw*)(raddr(ds,bx+0x862)), 0));	// 7513                  mov     word ptr [bx+862h], 0 ;~ 01A2:2856
cs=0x1a2;eip=0x00285c; 	X(PUSH(dx));	// 7514                  push    dx              ; handle ;~ 01A2:285C
cs=0x1a2;eip=0x00285d; 	T(NOP);	// 7515                  nop ;~ 01A2:285D
cs=0x1a2;eip=0x00285e; 	X(PUSH(cs));	// 7516                  push    cs ;~ 01A2:285E
cs=0x1a2;eip=0x00285f; 	J(CALL(____close,0));	// 7517                  call    near ptr ____close ;~ 01A2:285F
cs=0x1a2;eip=0x002862; 	X(POP(cx));	// 7518                  pop     cx ;~ 01A2:2862
loc_12863:
	// 4801 
cs=0x1a2;eip=0x002863; 	X(POP(bp));	// 7521                  pop     bp ;~ 01A2:2863
cs=0x1a2;eip=0x002864; 	J(RETF(0));	// 7522                  retf ;~ 01A2:2864

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___close_0: 	goto ___close_0;
        case m2c::kloc_12852: 	goto loc_12852;
        case m2c::kloc_12863: 	goto loc_12863;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____close(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____close:
    _begin:
#undef handle
#define handle 6
	// 7534 handle          = word ptr  6 ;~ 01A2:2865
cs=0x1a2;eip=0x002865; 	X(PUSH(bp));	// 7536                  push    bp ;~ 01A2:2865
cs=0x1a2;eip=0x002866; 	T(bp = sp;);	// 7537                  mov     bp, sp ;~ 01A2:2866
cs=0x1a2;eip=0x002868; 	T(ah = 0x3E;);	// 7538                  mov     ah, 3Eh ; '>' ;~ 01A2:2868
cs=0x1a2;eip=0x00286a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+handle))));	// 7539                  mov     bx, [bp+handle] ;~ 01A2:286A
cs=0x1a2;eip=0x00286d; 	S(_INT(0x21));	// 7540                  int     21h             ; DOS - 2+ - CLOSE A FILE WITH HANDLE ;~ 01A2:286D
cs=0x1a2;eip=0x00286f; 	J(JC(loc_1287d));	// 7542                  jb      short loc_1287D ;~ 01A2:286F
cs=0x1a2;eip=0x002871; 	T(SHL(bx, 1));	// 7543                  shl     bx, 1 ;~ 01A2:2871
cs=0x1a2;eip=0x002873; 	X(MOV(*(dw*)(raddr(ds,bx+0x862)), 0));	// 7544                  mov     word ptr [bx+862h], 0 ;~ 01A2:2873
cs=0x1a2;eip=0x002879; 	T(XOR(ax, ax));	// 7545                  xor     ax, ax ;~ 01A2:2879
cs=0x1a2;eip=0x00287b; 	J(JMP(loc_12881));	// 7546                  jmp     short loc_12881 ;~ 01A2:287B
loc_1287d:
	// 4802 
cs=0x1a2;eip=0x00287d; 	X(PUSH(ax));	// 7550                  push    ax ;~ 01A2:287D
cs=0x1a2;eip=0x00287e; 	J(CALL(____ioerror,0));	// 7551                  call    ____IOERROR ;~ 01A2:287E
loc_12881:
	// 4803 
cs=0x1a2;eip=0x002881; 	X(POP(bp));	// 7554                  pop     bp ;~ 01A2:2881
cs=0x1a2;eip=0x002882; 	J(RETF(0));	// 7555                  retf ;~ 01A2:2882

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____close: 	goto ____close;
        case m2c::kloc_1287d: 	goto loc_1287d;
        case m2c::kloc_12881: 	goto loc_12881;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___eof(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___eof:
    _begin:
#undef var_4
#define var_4 -4
	// 7566 var_4           = word ptr -4 ;~ 01A2:2883
#undef var_2
#define var_2 -2
	// 7567 var_2           = word ptr -2 ;~ 01A2:2883
#undef handle
#define handle 6
	// 7568 handle          = word ptr  6 ;~ 01A2:2883
cs=0x1a2;eip=0x002883; 	X(PUSH(bp));	// 7570                  push    bp ;~ 01A2:2883
cs=0x1a2;eip=0x002884; 	T(bp = sp;);	// 7571                  mov     bp, sp ;~ 01A2:2884
cs=0x1a2;eip=0x002886; 	T(SUB(sp, 4));	// 7572                  sub     sp, 4 ;~ 01A2:2886
cs=0x1a2;eip=0x002889; 	T(MOV(ax, *(dw*)(raddr(ss,bp+handle))));	// 7573                  mov     ax, [bp+handle] ;~ 01A2:2889
cs=0x1a2;eip=0x00288c; 	T(CMP(ax, word_19140));	// 7574                  cmp     ax, word_19140 ;~ 01A2:288C
cs=0x1a2;eip=0x002890; 	J(JC(loc_12898));	// 7575                  jb      short loc_12898 ;~ 01A2:2890
cs=0x1a2;eip=0x002892; 	T(ax = 6;);	// 7576                  mov     ax, 6 ;~ 01A2:2892
cs=0x1a2;eip=0x002895; 	X(PUSH(ax));	// 7577                  push    ax ;~ 01A2:2895
cs=0x1a2;eip=0x002896; 	J(JMP(loc_128f3));	// 7578                  jmp     short loc_128F3 ;~ 01A2:2896
loc_12898:
	// 4804 
cs=0x1a2;eip=0x002898; 	T(MOV(bx, *(dw*)(raddr(ss,bp+handle))));	// 7582                  mov     bx, [bp+handle] ;~ 01A2:2898
cs=0x1a2;eip=0x00289b; 	T(SHL(bx, 1));	// 7583                  shl     bx, 1 ;~ 01A2:289B
cs=0x1a2;eip=0x00289d; 	T(TEST(*(dw*)(raddr(ds,bx+0x862)), 0x200));	// 7584                  test    word ptr [bx+862h], 200h ;~ 01A2:289D
cs=0x1a2;eip=0x0028a3; 	J(JZ(loc_128aa));	// 7585                  jz      short loc_128AA ;~ 01A2:28A3
loc_128a5:
	// 4805 
cs=0x1a2;eip=0x0028a5; 	T(ax = 1;);	// 7588                  mov     ax, 1 ;~ 01A2:28A5
cs=0x1a2;eip=0x0028a8; 	J(JMP(loc_128f6));	// 7589                  jmp     short loc_128F6 ;~ 01A2:28A8
loc_128aa:
	// 4806 
cs=0x1a2;eip=0x0028aa; 	T(ax = 0x4400;);	// 7593                  mov     ax, 4400h ;~ 01A2:28AA
cs=0x1a2;eip=0x0028ad; 	T(MOV(bx, *(dw*)(raddr(ss,bp+handle))));	// 7594                  mov     bx, [bp+handle] ;~ 01A2:28AD
cs=0x1a2;eip=0x0028b0; 	S(_INT(0x21));	// 7595                  int     21h             ; DOS - 2+ - IOCTL - GET DEVICE INFORMATION ;~ 01A2:28B0
cs=0x1a2;eip=0x0028b2; 	J(JC(loc_128f2));	// 7597                  jb      short loc_128F2 ;~ 01A2:28B2
cs=0x1a2;eip=0x0028b4; 	T(TEST(dl, 0x80));	// 7598                  test    dl, 80h ;~ 01A2:28B4
cs=0x1a2;eip=0x0028b7; 	J(JNZ(loc_128ee));	// 7599                  jnz     short loc_128EE ;~ 01A2:28B7
cs=0x1a2;eip=0x0028b9; 	T(ax = 0x4201;);	// 7600                  mov     ax, 4201h ;~ 01A2:28B9
cs=0x1a2;eip=0x0028bc; 	T(XOR(cx, cx));	// 7601                  xor     cx, cx ;~ 01A2:28BC
cs=0x1a2;eip=0x0028be; 	T(dx = cx;);	// 7602                  mov     dx, cx ;~ 01A2:28BE
cs=0x1a2;eip=0x0028c0; 	S(_INT(0x21));	// 7603                  int     21h             ; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) ;~ 01A2:28C0
cs=0x1a2;eip=0x0028c2; 	J(JC(loc_128f2));	// 7605                  jb      short loc_128F2 ;~ 01A2:28C2
cs=0x1a2;eip=0x0028c4; 	X(PUSH(dx));	// 7606                  push    dx ;~ 01A2:28C4
cs=0x1a2;eip=0x0028c5; 	X(PUSH(ax));	// 7607                  push    ax ;~ 01A2:28C5
cs=0x1a2;eip=0x0028c6; 	T(ax = 0x4202;);	// 7608                  mov     ax, 4202h ;~ 01A2:28C6
cs=0x1a2;eip=0x0028c9; 	T(XOR(cx, cx));	// 7609                  xor     cx, cx ;~ 01A2:28C9
cs=0x1a2;eip=0x0028cb; 	T(dx = cx;);	// 7610                  mov     dx, cx ;~ 01A2:28CB
cs=0x1a2;eip=0x0028cd; 	S(_INT(0x21));	// 7611                  int     21h             ; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) ;~ 01A2:28CD
cs=0x1a2;eip=0x0028cf; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 7613                  mov     [bp+var_4], ax ;~ 01A2:28CF
cs=0x1a2;eip=0x0028d2; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 7614                  mov     [bp+var_2], dx ;~ 01A2:28D2
cs=0x1a2;eip=0x0028d5; 	X(POP(dx));	// 7615                  pop     dx ;~ 01A2:28D5
cs=0x1a2;eip=0x0028d6; 	X(POP(cx));	// 7616                  pop     cx ;~ 01A2:28D6
cs=0x1a2;eip=0x0028d7; 	J(JC(loc_128f2));	// 7617                  jb      short loc_128F2 ;~ 01A2:28D7
cs=0x1a2;eip=0x0028d9; 	T(ax = 0x4200;);	// 7618                  mov     ax, 4200h ;~ 01A2:28D9
cs=0x1a2;eip=0x0028dc; 	S(_INT(0x21));	// 7619                  int     21h             ; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) ;~ 01A2:28DC
cs=0x1a2;eip=0x0028de; 	J(JC(loc_128f2));	// 7621                  jb      short loc_128F2 ;~ 01A2:28DE
cs=0x1a2;eip=0x0028e0; 	T(CMP(dx, *(dw*)(raddr(ss,bp+var_2))));	// 7622                  cmp     dx, [bp+var_2] ;~ 01A2:28E0
cs=0x1a2;eip=0x0028e3; 	J(JC(loc_128ee));	// 7623                  jb      short loc_128EE ;~ 01A2:28E3
cs=0x1a2;eip=0x0028e5; 	J(JA(loc_128ec));	// 7624                  ja      short loc_128EC ;~ 01A2:28E5
cs=0x1a2;eip=0x0028e7; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_4))));	// 7625                  cmp     ax, [bp+var_4] ;~ 01A2:28E7
cs=0x1a2;eip=0x0028ea; 	J(JC(loc_128ee));	// 7626                  jb      short loc_128EE ;~ 01A2:28EA
loc_128ec:
	// 4807 
cs=0x1a2;eip=0x0028ec; 	J(JMP(loc_128a5));	// 7629                  jmp     short loc_128A5 ;~ 01A2:28EC
loc_128ee:
	// 4808 
cs=0x1a2;eip=0x0028ee; 	T(XOR(ax, ax));	// 7634                  xor     ax, ax ;~ 01A2:28EE
cs=0x1a2;eip=0x0028f0; 	J(JMP(loc_128f6));	// 7635                  jmp     short loc_128F6 ;~ 01A2:28F0
loc_128f2:
	// 4809 
cs=0x1a2;eip=0x0028f2; 	X(PUSH(ax));	// 7640                  push    ax ;~ 01A2:28F2
loc_128f3:
	// 4810 
cs=0x1a2;eip=0x0028f3; 	J(CALL(____ioerror,0));	// 7643                  call    ____IOERROR ;~ 01A2:28F3
loc_128f6:
	// 4811 
cs=0x1a2;eip=0x0028f6; 	T(sp = bp;);	// 7647                  mov     sp, bp ;~ 01A2:28F6
cs=0x1a2;eip=0x0028f8; 	X(POP(bp));	// 7648                  pop     bp ;~ 01A2:28F8
cs=0x1a2;eip=0x0028f9; 	J(RETF(0));	// 7649                  retf ;~ 01A2:28F9

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___eof: 	goto ___eof;
        case m2c::kloc_12898: 	goto loc_12898;
        case m2c::kloc_128a5: 	goto loc_128a5;
        case m2c::kloc_128aa: 	goto loc_128aa;
        case m2c::kloc_128ec: 	goto loc_128ec;
        case m2c::kloc_128ee: 	goto loc_128ee;
        case m2c::kloc_128f2: 	goto loc_128f2;
        case m2c::kloc_128f3: 	goto loc_128f3;
        case m2c::kloc_128f6: 	goto loc_128f6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___fclose(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___fclose:
    _begin:
#undef stream
#define stream 6
	// 7662 stream          = dword ptr  6 ;~ 01A2:28FA
cs=0x1a2;eip=0x0028fa; 	X(PUSH(bp));	// 7664                  push    bp ;~ 01A2:28FA
cs=0x1a2;eip=0x0028fb; 	T(bp = sp;);	// 7665                  mov     bp, sp ;~ 01A2:28FB
cs=0x1a2;eip=0x0028fd; 	X(PUSH(si));	// 7666                  push    si ;~ 01A2:28FD
cs=0x1a2;eip=0x0028fe; 	T(si = 0x0FFFF;);	// 7667                  mov     si, 0FFFFh ;~ 01A2:28FE
cs=0x1a2;eip=0x002901; 	T(MOV(ax, *(dw*)(raddr(ss,bp+stream))));	// 7668                  mov     ax, word ptr [bp+stream] ;~ 01A2:2901
cs=0x1a2;eip=0x002904; 	T(OR(ax, *(dw*)(raddr(ss,bp+stream+2))));	// 7669                  or      ax, word ptr [bp+stream+2] ;~ 01A2:2904
cs=0x1a2;eip=0x002907; 	J(JNZ(loc_1290c));	// 7670                  jnz     short loc_1290C ;~ 01A2:2907
cs=0x1a2;eip=0x002909; 	J(JMP(loc_129ad));	// 7671                  jmp     loc_129AD ;~ 01A2:2909
loc_1290c:
	// 4812 
cs=0x1a2;eip=0x00290c; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 7675                  les     bx, [bp+stream] ;~ 01A2:290C
cs=0x1a2;eip=0x00290f; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x12))));	// 7677                  mov     ax, es:[bx+12h] ;~ 01A2:290F
cs=0x1a2;eip=0x002913; 	T(CMP(ax, *(dw*)(raddr(ss,bp+stream))));	// 7678                  cmp     ax, word ptr [bp+stream] ;~ 01A2:2913
cs=0x1a2;eip=0x002916; 	J(JZ(loc_1291b));	// 7679                  jz      short loc_1291B ;~ 01A2:2916
cs=0x1a2;eip=0x002918; 	J(JMP(loc_129ad));	// 7680                  jmp     loc_129AD ;~ 01A2:2918
loc_1291b:
	// 4813 
cs=0x1a2;eip=0x00291b; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 7684                  les     bx, [bp+stream] ;~ 01A2:291B
cs=0x1a2;eip=0x00291e; 	T(CMP(*(dw*)(raddr(es,bx+6)), 0));	// 7685                  cmp     word ptr es:[bx+6], 0 ;~ 01A2:291E
cs=0x1a2;eip=0x002923; 	J(JZ(loc_12954));	// 7686                  jz      short loc_12954 ;~ 01A2:2923
cs=0x1a2;eip=0x002925; 	T(CMP(*(dw*)(raddr(es,bx)), 0));	// 7687                  cmp     word ptr es:[bx], 0 ;~ 01A2:2925
cs=0x1a2;eip=0x002929; 	J(JGE(loc_1293a));	// 7688                  jge     short loc_1293A ;~ 01A2:2929
cs=0x1a2;eip=0x00292b; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 7689                  push    word ptr [bp+stream+2] ;~ 01A2:292B
cs=0x1a2;eip=0x00292e; 	X(PUSH(bx));	// 7690                  push    bx              ; stream ;~ 01A2:292E
cs=0x1a2;eip=0x00292f; 	T(NOP);	// 7691                  nop ;~ 01A2:292F
cs=0x1a2;eip=0x002930; 	X(PUSH(cs));	// 7692                  push    cs ;~ 01A2:2930
cs=0x1a2;eip=0x002931; 	J(CALL(___fflush,0));	// 7693                  call    near ptr ___fflush ;~ 01A2:2931
cs=0x1a2;eip=0x002934; 	X(POP(cx));	// 7694                  pop     cx ;~ 01A2:2934
cs=0x1a2;eip=0x002935; 	X(POP(cx));	// 7695                  pop     cx ;~ 01A2:2935
cs=0x1a2;eip=0x002936; 	T(OR(ax, ax));	// 7696                  or      ax, ax ;~ 01A2:2936
cs=0x1a2;eip=0x002938; 	J(JNZ(loc_129ad));	// 7697                  jnz     short loc_129AD ;~ 01A2:2938
loc_1293a:
	// 4814 
cs=0x1a2;eip=0x00293a; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 7700                  les     bx, [bp+stream] ;~ 01A2:293A
cs=0x1a2;eip=0x00293d; 	T(TEST(*(dw*)(raddr(es,bx+2)), 4));	// 7701                  test    word ptr es:[bx+2], 4 ;~ 01A2:293D
cs=0x1a2;eip=0x002943; 	J(JZ(loc_12954));	// 7702                  jz      short loc_12954 ;~ 01A2:2943
cs=0x1a2;eip=0x002945; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 7703                  push    word ptr es:[bx+0Ah] ;~ 01A2:2945
cs=0x1a2;eip=0x002949; 	X(PUSH(*(dw*)(raddr(es,bx+8))));	// 7704                  push    word ptr es:[bx+8] ; block ;~ 01A2:2949
cs=0x1a2;eip=0x00294d; 	T(NOP);	// 7705                  nop ;~ 01A2:294D
cs=0x1a2;eip=0x00294e; 	X(PUSH(cs));	// 7706                  push    cs ;~ 01A2:294E
cs=0x1a2;eip=0x00294f; 	J(CALL(___farfree,0));	// 7707                  call    near ptr ___farfree ;~ 01A2:294F
cs=0x1a2;eip=0x002952; 	X(POP(cx));	// 7708                  pop     cx ;~ 01A2:2952
cs=0x1a2;eip=0x002953; 	X(POP(cx));	// 7709                  pop     cx ;~ 01A2:2953
loc_12954:
	// 4815 
cs=0x1a2;eip=0x002954; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 7713                  les     bx, [bp+stream] ;~ 01A2:2954
cs=0x1a2;eip=0x002957; 	T(CMP(*(raddr(es,bx+4)), 0));	// 7714                  cmp     byte ptr es:[bx+4], 0 ;~ 01A2:2957
cs=0x1a2;eip=0x00295c; 	J(JL(loc_1296c));	// 7715                  jl      short loc_1296C ;~ 01A2:295C
cs=0x1a2;eip=0x00295e; 	T(MOV(al, *(raddr(es,bx+4))));	// 7716                  mov     al, es:[bx+4] ;~ 01A2:295E
cs=0x1a2;eip=0x002962; 	T(CBW);	// 7717                  cbw ;~ 01A2:2962
cs=0x1a2;eip=0x002963; 	X(PUSH(ax));	// 7718                  push    ax              ; handle ;~ 01A2:2963
cs=0x1a2;eip=0x002964; 	T(NOP);	// 7719                  nop ;~ 01A2:2964
cs=0x1a2;eip=0x002965; 	X(PUSH(cs));	// 7720                  push    cs ;~ 01A2:2965
cs=0x1a2;eip=0x002966; 	J(CALL(___close_0,0));	// 7721                  call    near ptr ___close_0 ;~ 01A2:2966
cs=0x1a2;eip=0x002969; 	X(POP(cx));	// 7722                  pop     cx ;~ 01A2:2969
cs=0x1a2;eip=0x00296a; 	T(si = ax;);	// 7723                  mov     si, ax ;~ 01A2:296A
loc_1296c:
	// 4816 
cs=0x1a2;eip=0x00296c; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 7726                  les     bx, [bp+stream] ;~ 01A2:296C
cs=0x1a2;eip=0x00296f; 	X(MOV(*(dw*)(raddr(es,bx+2)), 0));	// 7727                  mov     word ptr es:[bx+2], 0 ;~ 01A2:296F
cs=0x1a2;eip=0x002975; 	X(MOV(*(dw*)(raddr(es,bx+6)), 0));	// 7728                  mov     word ptr es:[bx+6], 0 ;~ 01A2:2975
cs=0x1a2;eip=0x00297b; 	X(MOV(*(dw*)(raddr(es,bx)), 0));	// 7729                  mov     word ptr es:[bx], 0 ;~ 01A2:297B
cs=0x1a2;eip=0x002980; 	X(MOV(*(raddr(es,bx+4)), 0x0FF));	// 7730                  mov     byte ptr es:[bx+4], 0FFh ;~ 01A2:2980
cs=0x1a2;eip=0x002985; 	T(CMP(*(dw*)(raddr(es,bx+0x10)), 0));	// 7731                  cmp     word ptr es:[bx+10h], 0 ;~ 01A2:2985
cs=0x1a2;eip=0x00298a; 	J(JZ(loc_129ad));	// 7732                  jz      short loc_129AD ;~ 01A2:298A
cs=0x1a2;eip=0x00298c; 	T(XOR(ax, ax));	// 7733                  xor     ax, ax ;~ 01A2:298C
cs=0x1a2;eip=0x00298e; 	T(XOR(dx, dx));	// 7734                  xor     dx, dx ;~ 01A2:298E
cs=0x1a2;eip=0x002990; 	X(PUSH(ax));	// 7735                  push    ax ;~ 01A2:2990
cs=0x1a2;eip=0x002991; 	X(PUSH(dx));	// 7736                  push    dx              ; dest ;~ 01A2:2991
cs=0x1a2;eip=0x002992; 	X(PUSH(ax));	// 7737                  push    ax              ; int ;~ 01A2:2992
cs=0x1a2;eip=0x002993; 	X(PUSH(dx));	// 7738                  push    dx              ; int ;~ 01A2:2993
cs=0x1a2;eip=0x002994; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 7739                  push    word ptr es:[bx+10h] ; int ;~ 01A2:2994
cs=0x1a2;eip=0x002998; 	J(CALL(____mkname,0));	// 7740                  call    ____MKNAME ;~ 01A2:2998
cs=0x1a2;eip=0x00299b; 	X(PUSH(dx));	// 7741                  push    dx ;~ 01A2:299B
cs=0x1a2;eip=0x00299c; 	X(PUSH(ax));	// 7742                  push    ax              ; path ;~ 01A2:299C
cs=0x1a2;eip=0x00299d; 	T(NOP);	// 7743                  nop ;~ 01A2:299D
cs=0x1a2;eip=0x00299e; 	X(PUSH(cs));	// 7744                  push    cs ;~ 01A2:299E
cs=0x1a2;eip=0x00299f; 	J(CALL(___unlink,0));	// 7745                  call    near ptr ___unlink ;~ 01A2:299F
cs=0x1a2;eip=0x0029a2; 	X(POP(cx));	// 7746                  pop     cx ;~ 01A2:29A2
cs=0x1a2;eip=0x0029a3; 	X(POP(cx));	// 7747                  pop     cx ;~ 01A2:29A3
cs=0x1a2;eip=0x0029a4; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 7748                  les     bx, [bp+stream] ;~ 01A2:29A4
cs=0x1a2;eip=0x0029a7; 	X(MOV(*(dw*)(raddr(es,bx+0x10)), 0));	// 7750                  mov     word ptr es:[bx+10h], 0 ;~ 01A2:29A7
loc_129ad:
	// 4817 
cs=0x1a2;eip=0x0029ad; 	T(ax = si;);	// 7755                  mov     ax, si ;~ 01A2:29AD
cs=0x1a2;eip=0x0029af; 	X(POP(si));	// 7756                  pop     si ;~ 01A2:29AF
cs=0x1a2;eip=0x0029b0; 	X(POP(bp));	// 7757                  pop     bp ;~ 01A2:29B0
cs=0x1a2;eip=0x0029b1; 	J(RETF(0));	// 7758                  retf ;~ 01A2:29B1

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___fclose: 	goto ___fclose;
        case m2c::kloc_1290c: 	goto loc_1290c;
        case m2c::kloc_1291b: 	goto loc_1291b;
        case m2c::kloc_1293a: 	goto loc_1293a;
        case m2c::kloc_12954: 	goto loc_12954;
        case m2c::kloc_1296c: 	goto loc_1296c;
        case m2c::kloc_129ad: 	goto loc_129ad;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___fflush(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___fflush:
    _begin:
#undef stream
#define stream 6
	// 7770 stream          = dword ptr  6 ;~ 01A2:29B2
cs=0x1a2;eip=0x0029b2; 	X(PUSH(bp));	// 7772                  push    bp ;~ 01A2:29B2
cs=0x1a2;eip=0x0029b3; 	T(bp = sp;);	// 7773                  mov     bp, sp ;~ 01A2:29B3
cs=0x1a2;eip=0x0029b5; 	X(PUSH(si));	// 7774                  push    si ;~ 01A2:29B5
cs=0x1a2;eip=0x0029b6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+stream))));	// 7775                  mov     ax, word ptr [bp+stream] ;~ 01A2:29B6
cs=0x1a2;eip=0x0029b9; 	T(OR(ax, *(dw*)(raddr(ss,bp+stream+2))));	// 7776                  or      ax, word ptr [bp+stream+2] ;~ 01A2:29B9
cs=0x1a2;eip=0x0029bc; 	J(JNZ(loc_129c6));	// 7777                  jnz     short loc_129C6 ;~ 01A2:29BC
cs=0x1a2;eip=0x0029be; 	T(NOP);	// 7778                  nop ;~ 01A2:29BE
cs=0x1a2;eip=0x0029bf; 	X(PUSH(cs));	// 7779                  push    cs ;~ 01A2:29BF
cs=0x1a2;eip=0x0029c0; 	J(CALL(___flushall,0));	// 7780                  call    near ptr ___flushall ;~ 01A2:29C0
cs=0x1a2;eip=0x0029c3; 	J(JMP(loc_12a7a));	// 7781                  jmp     loc_12A7A ;~ 01A2:29C3
loc_129c6:
	// 4818 
cs=0x1a2;eip=0x0029c6; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 7785                  les     bx, [bp+stream] ;~ 01A2:29C6
cs=0x1a2;eip=0x0029c9; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x12))));	// 7787                  mov     ax, es:[bx+12h] ;~ 01A2:29C9
cs=0x1a2;eip=0x0029cd; 	T(CMP(ax, *(dw*)(raddr(ss,bp+stream))));	// 7788                  cmp     ax, word ptr [bp+stream] ;~ 01A2:29CD
cs=0x1a2;eip=0x0029d0; 	J(JZ(loc_129d8));	// 7789                  jz      short loc_129D8 ;~ 01A2:29D0
loc_129d2:
	// 4819 
cs=0x1a2;eip=0x0029d2; 	T(ax = 0x0FFFF;);	// 7792                  mov     ax, 0FFFFh ;~ 01A2:29D2
cs=0x1a2;eip=0x0029d5; 	J(JMP(loc_12a7c));	// 7793                  jmp     loc_12A7C ;~ 01A2:29D5
loc_129d8:
	// 4820 
cs=0x1a2;eip=0x0029d8; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 7797                  les     bx, [bp+stream] ;~ 01A2:29D8
cs=0x1a2;eip=0x0029db; 	T(CMP(*(dw*)(raddr(es,bx)), 0));	// 7798                  cmp     word ptr es:[bx], 0 ;~ 01A2:29DB
cs=0x1a2;eip=0x0029df; 	J(JL(loc_12a32));	// 7799                  jl      short loc_12A32 ;~ 01A2:29DF
cs=0x1a2;eip=0x0029e1; 	T(TEST(*(dw*)(raddr(es,bx+2)), 8));	// 7800                  test    word ptr es:[bx+2], 8 ;~ 01A2:29E1
cs=0x1a2;eip=0x0029e7; 	J(JNZ(loc_12a01));	// 7801                  jnz     short loc_12A01 ;~ 01A2:29E7
cs=0x1a2;eip=0x0029e9; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E))));	// 7802                  mov     ax, es:[bx+0Eh] ;~ 01A2:29E9
cs=0x1a2;eip=0x0029ed; 	T(MOV(dx, *(dw*)(raddr(ss,bp+stream))));	// 7803                  mov     dx, word ptr [bp+stream] ;~ 01A2:29ED
cs=0x1a2;eip=0x0029f0; 	T(ADD(dx, 5));	// 7804                  add     dx, 5 ;~ 01A2:29F0
cs=0x1a2;eip=0x0029f3; 	T(CMP(ax, *(dw*)(raddr(ss,bp+stream+2))));	// 7805                  cmp     ax, word ptr [bp+stream+2] ;~ 01A2:29F3
cs=0x1a2;eip=0x0029f6; 	J(JZ(loc_129fb));	// 7806                  jz      short loc_129FB ;~ 01A2:29F6
cs=0x1a2;eip=0x0029f8; 	J(JMP(loc_12a7a));	// 7807                  jmp     loc_12A7A ;~ 01A2:29F8
loc_129fb:
	// 4821 
cs=0x1a2;eip=0x0029fb; 	T(CMP(*(dw*)(raddr(es,bx+0x0C)), dx));	// 7811                  cmp     es:[bx+0Ch], dx ;~ 01A2:29FB
cs=0x1a2;eip=0x0029ff; 	J(JNZ(loc_12a7a));	// 7812                  jnz     short loc_12A7A ;~ 01A2:29FF
loc_12a01:
	// 4822 
cs=0x1a2;eip=0x002a01; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 7815                  les     bx, [bp+stream] ;~ 01A2:2A01
cs=0x1a2;eip=0x002a04; 	X(MOV(*(dw*)(raddr(es,bx)), 0));	// 7816                  mov     word ptr es:[bx], 0 ;~ 01A2:2A04
cs=0x1a2;eip=0x002a09; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E))));	// 7817                  mov     ax, es:[bx+0Eh] ;~ 01A2:2A09
cs=0x1a2;eip=0x002a0d; 	T(MOV(dx, *(dw*)(raddr(ss,bp+stream))));	// 7818                  mov     dx, word ptr [bp+stream] ;~ 01A2:2A0D
cs=0x1a2;eip=0x002a10; 	T(ADD(dx, 5));	// 7819                  add     dx, 5 ;~ 01A2:2A10
cs=0x1a2;eip=0x002a13; 	T(CMP(ax, *(dw*)(raddr(ss,bp+stream+2))));	// 7820                  cmp     ax, word ptr [bp+stream+2] ;~ 01A2:2A13
cs=0x1a2;eip=0x002a16; 	J(JNZ(loc_12a7a));	// 7821                  jnz     short loc_12A7A ;~ 01A2:2A16
cs=0x1a2;eip=0x002a18; 	T(CMP(*(dw*)(raddr(es,bx+0x0C)), dx));	// 7822                  cmp     es:[bx+0Ch], dx ;~ 01A2:2A18
cs=0x1a2;eip=0x002a1c; 	J(JNZ(loc_12a7a));	// 7823                  jnz     short loc_12A7A ;~ 01A2:2A1C
cs=0x1a2;eip=0x002a1e; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 7824                  mov     ax, es:[bx+0Ah] ;~ 01A2:2A1E
cs=0x1a2;eip=0x002a22; 	T(MOV(dx, *(dw*)(raddr(es,bx+8))));	// 7825                  mov     dx, es:[bx+8] ;~ 01A2:2A22
cs=0x1a2;eip=0x002a26; 	X(MOV(*(dw*)(raddr(es,bx+0x0E)), ax));	// 7826                  mov     es:[bx+0Eh], ax ;~ 01A2:2A26
cs=0x1a2;eip=0x002a2a; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 7827                  mov     es:[bx+0Ch], dx ;~ 01A2:2A2A
cs=0x1a2;eip=0x002a2e; 	J(JMP(loc_12a7a));	// 7828                  jmp     short loc_12A7A ;~ 01A2:2A2E
ret_1a2_2a30:
	// 4823 
cs=0x1a2;eip=0x002a30; 	J(JMP(loc_12a7a));	// 7830                  jmp     short loc_12A7A ;~ 01A2:2A30
loc_12a32:
	// 4824 
cs=0x1a2;eip=0x002a32; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 7834                  les     bx, [bp+stream] ;~ 01A2:2A32
cs=0x1a2;eip=0x002a35; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 7835                  mov     ax, es:[bx+6] ;~ 01A2:2A35
cs=0x1a2;eip=0x002a39; 	T(ADD(ax, *(dw*)(raddr(es,bx))));	// 7836                  add     ax, es:[bx] ;~ 01A2:2A39
cs=0x1a2;eip=0x002a3c; 	T(INC(ax));	// 7837                  inc     ax ;~ 01A2:2A3C
cs=0x1a2;eip=0x002a3d; 	T(si = ax;);	// 7838                  mov     si, ax ;~ 01A2:2A3D
cs=0x1a2;eip=0x002a3f; 	X(SUB(*(dw*)(raddr(es,bx)), si));	// 7839                  sub     es:[bx], si ;~ 01A2:2A3F
cs=0x1a2;eip=0x002a42; 	X(PUSH(ax));	// 7840                  push    ax              ; len ;~ 01A2:2A42
cs=0x1a2;eip=0x002a43; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 7841                  mov     ax, es:[bx+0Ah] ;~ 01A2:2A43
cs=0x1a2;eip=0x002a47; 	T(MOV(dx, *(dw*)(raddr(es,bx+8))));	// 7842                  mov     dx, es:[bx+8] ;~ 01A2:2A47
cs=0x1a2;eip=0x002a4b; 	X(MOV(*(dw*)(raddr(es,bx+0x0E)), ax));	// 7843                  mov     es:[bx+0Eh], ax ;~ 01A2:2A4B
cs=0x1a2;eip=0x002a4f; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 7844                  mov     es:[bx+0Ch], dx ;~ 01A2:2A4F
cs=0x1a2;eip=0x002a53; 	X(PUSH(ax));	// 7845                  push    ax ;~ 01A2:2A53
cs=0x1a2;eip=0x002a54; 	X(PUSH(dx));	// 7846                  push    dx              ; buf ;~ 01A2:2A54
cs=0x1a2;eip=0x002a55; 	T(MOV(al, *(raddr(es,bx+4))));	// 7847                  mov     al, es:[bx+4] ;~ 01A2:2A55
cs=0x1a2;eip=0x002a59; 	T(CBW);	// 7848                  cbw ;~ 01A2:2A59
cs=0x1a2;eip=0x002a5a; 	X(PUSH(ax));	// 7849                  push    ax              ; handle ;~ 01A2:2A5A
cs=0x1a2;eip=0x002a5b; 	T(NOP);	// 7850                  nop ;~ 01A2:2A5B
cs=0x1a2;eip=0x002a5c; 	X(PUSH(cs));	// 7851                  push    cs ;~ 01A2:2A5C
cs=0x1a2;eip=0x002a5d; 	J(CALL(_____write,0));	// 7852                  call    near ptr _____write ;~ 01A2:2A5D
cs=0x1a2;eip=0x002a60; 	T(ADD(sp, 8));	// 7853                  add     sp, 8 ;~ 01A2:2A60
cs=0x1a2;eip=0x002a63; 	T(CMP(ax, si));	// 7854                  cmp     ax, si ;~ 01A2:2A63
cs=0x1a2;eip=0x002a65; 	J(JZ(loc_12a7a));	// 7855                  jz      short loc_12A7A ;~ 01A2:2A65
cs=0x1a2;eip=0x002a67; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 7856                  les     bx, [bp+stream] ;~ 01A2:2A67
cs=0x1a2;eip=0x002a6a; 	T(TEST(*(dw*)(raddr(es,bx+2)), 0x200));	// 7857                  test    word ptr es:[bx+2], 200h ;~ 01A2:2A6A
cs=0x1a2;eip=0x002a70; 	J(JNZ(loc_12a7a));	// 7858                  jnz     short loc_12A7A ;~ 01A2:2A70
cs=0x1a2;eip=0x002a72; 	X(OR(*(dw*)(raddr(es,bx+2)), 0x10));	// 7859                  or      word ptr es:[bx+2], 10h ;~ 01A2:2A72
cs=0x1a2;eip=0x002a77; 	J(JMP(loc_129d2));	// 7860                  jmp     loc_129D2 ;~ 01A2:2A77
loc_12a7a:
	// 4825 
cs=0x1a2;eip=0x002a7a; 	T(XOR(ax, ax));	// 7865                  xor     ax, ax ;~ 01A2:2A7A
loc_12a7c:
	// 4826 
cs=0x1a2;eip=0x002a7c; 	X(POP(si));	// 7868                  pop     si ;~ 01A2:2A7C
cs=0x1a2;eip=0x002a7d; 	X(POP(bp));	// 7869                  pop     bp ;~ 01A2:2A7D
cs=0x1a2;eip=0x002a7e; 	J(RETF(0));	// 7870                  retf ;~ 01A2:2A7E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___fflush: 	goto ___fflush;
        case m2c::kloc_129c6: 	goto loc_129c6;
        case m2c::kloc_129d2: 	goto loc_129d2;
        case m2c::kloc_129d8: 	goto loc_129d8;
        case m2c::kloc_129fb: 	goto loc_129fb;
        case m2c::kloc_12a01: 	goto loc_12a01;
        case m2c::kloc_12a32: 	goto loc_12a32;
        case m2c::kloc_12a7a: 	goto loc_12a7a;
        case m2c::kloc_12a7c: 	goto loc_12a7c;
        case m2c::kret_1a2_2a30: 	goto ret_1a2_2a30;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___filelength(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___filelength:
    _begin:
#undef var_4
#define var_4 -4
	// 7882 var_4           = word ptr -4 ;~ 01A2:2A7F
#undef var_2
#define var_2 -2
	// 7883 var_2           = word ptr -2 ;~ 01A2:2A7F
#undef handle
#define handle 6
	// 7884 handle          = word ptr  6 ;~ 01A2:2A7F
cs=0x1a2;eip=0x002a7f; 	X(PUSH(bp));	// 7886                  push    bp ;~ 01A2:2A7F
cs=0x1a2;eip=0x002a80; 	T(bp = sp;);	// 7887                  mov     bp, sp ;~ 01A2:2A80
cs=0x1a2;eip=0x002a82; 	T(SUB(sp, 4));	// 7888                  sub     sp, 4 ;~ 01A2:2A82
cs=0x1a2;eip=0x002a85; 	T(ax = 0x4201;);	// 7889                  mov     ax, 4201h ;~ 01A2:2A85
cs=0x1a2;eip=0x002a88; 	T(MOV(bx, *(dw*)(raddr(ss,bp+handle))));	// 7890                  mov     bx, [bp+handle] ;~ 01A2:2A88
cs=0x1a2;eip=0x002a8b; 	T(XOR(cx, cx));	// 7891                  xor     cx, cx ;~ 01A2:2A8B
cs=0x1a2;eip=0x002a8d; 	T(XOR(dx, dx));	// 7892                  xor     dx, dx ;~ 01A2:2A8D
cs=0x1a2;eip=0x002a8f; 	S(_INT(0x21));	// 7893                  int     21h             ; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) ;~ 01A2:2A8F
cs=0x1a2;eip=0x002a91; 	J(JC(loc_12ab7));	// 7895                  jb      short loc_12AB7 ;~ 01A2:2A91
cs=0x1a2;eip=0x002a93; 	X(PUSH(dx));	// 7896                  push    dx ;~ 01A2:2A93
cs=0x1a2;eip=0x002a94; 	X(PUSH(ax));	// 7897                  push    ax ;~ 01A2:2A94
cs=0x1a2;eip=0x002a95; 	T(ax = 0x4202;);	// 7898                  mov     ax, 4202h ;~ 01A2:2A95
cs=0x1a2;eip=0x002a98; 	T(XOR(cx, cx));	// 7899                  xor     cx, cx ;~ 01A2:2A98
cs=0x1a2;eip=0x002a9a; 	T(XOR(dx, dx));	// 7900                  xor     dx, dx ;~ 01A2:2A9A
cs=0x1a2;eip=0x002a9c; 	S(_INT(0x21));	// 7901                  int     21h             ; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) ;~ 01A2:2A9C
cs=0x1a2;eip=0x002a9e; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 7903                  mov     [bp+var_4], ax ;~ 01A2:2A9E
cs=0x1a2;eip=0x002aa1; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 7904                  mov     [bp+var_2], dx ;~ 01A2:2AA1
cs=0x1a2;eip=0x002aa4; 	X(POP(dx));	// 7905                  pop     dx ;~ 01A2:2AA4
cs=0x1a2;eip=0x002aa5; 	X(POP(cx));	// 7906                  pop     cx ;~ 01A2:2AA5
cs=0x1a2;eip=0x002aa6; 	J(JC(loc_12ab7));	// 7907                  jb      short loc_12AB7 ;~ 01A2:2AA6
cs=0x1a2;eip=0x002aa8; 	T(ax = 0x4200;);	// 7908                  mov     ax, 4200h ;~ 01A2:2AA8
cs=0x1a2;eip=0x002aab; 	S(_INT(0x21));	// 7909                  int     21h             ; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) ;~ 01A2:2AAB
cs=0x1a2;eip=0x002aad; 	J(JC(loc_12ab7));	// 7911                  jb      short loc_12AB7 ;~ 01A2:2AAD
cs=0x1a2;eip=0x002aaf; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 7912                  mov     dx, [bp+var_2] ;~ 01A2:2AAF
cs=0x1a2;eip=0x002ab2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 7913                  mov     ax, [bp+var_4] ;~ 01A2:2AB2
cs=0x1a2;eip=0x002ab5; 	J(JMP(loc_12abc));	// 7914                  jmp     short loc_12ABC ;~ 01A2:2AB5
loc_12ab7:
	// 4827 
cs=0x1a2;eip=0x002ab7; 	X(PUSH(ax));	// 7919                  push    ax ;~ 01A2:2AB7
cs=0x1a2;eip=0x002ab8; 	J(CALL(____ioerror,0));	// 7920                  call    ____IOERROR ;~ 01A2:2AB8
cs=0x1a2;eip=0x002abb; 	T(CWD);	// 7921                  cwd ;~ 01A2:2ABB
loc_12abc:
	// 4828 
cs=0x1a2;eip=0x002abc; 	T(sp = bp;);	// 7924                  mov     sp, bp ;~ 01A2:2ABC
cs=0x1a2;eip=0x002abe; 	X(POP(bp));	// 7925                  pop     bp ;~ 01A2:2ABE
cs=0x1a2;eip=0x002abf; 	J(RETF(0));	// 7926                  retf ;~ 01A2:2ABF

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___filelength: 	goto ___filelength;
        case m2c::kloc_12ab7: 	goto loc_12ab7;
        case m2c::kloc_12abc: 	goto loc_12abc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___flushall(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___flushall:
    _begin:
#undef stream
#define stream -4
	// 7937 stream          = dword ptr -4 ;~ 01A2:2AC0
cs=0x1a2;eip=0x002ac0; 	X(PUSH(bp));	// 7939                  push    bp ;~ 01A2:2AC0
cs=0x1a2;eip=0x002ac1; 	T(bp = sp;);	// 7940                  mov     bp, sp ;~ 01A2:2AC1
cs=0x1a2;eip=0x002ac3; 	T(SUB(sp, 4));	// 7941                  sub     sp, 4 ;~ 01A2:2AC3
cs=0x1a2;eip=0x002ac6; 	X(PUSH(si));	// 7942                  push    si ;~ 01A2:2AC6
cs=0x1a2;eip=0x002ac7; 	X(PUSH(di));	// 7943                  push    di ;~ 01A2:2AC7
cs=0x1a2;eip=0x002ac8; 	T(XOR(di, di));	// 7944                  xor     di, di ;~ 01A2:2AC8
cs=0x1a2;eip=0x002aca; 	T(si = word_19140;);	// 7945                  mov     si, word_19140 ;~ 01A2:2ACA
cs=0x1a2;eip=0x002ace; 	X(MOV(*(dw*)(raddr(ss,bp+stream+2)), ds));	// 7946                  mov     word ptr [bp+stream+2], ds ;~ 01A2:2ACE
cs=0x1a2;eip=0x002ad1; 	X(MOV(*(dw*)(raddr(ss,bp+stream)), 0x6D0));	// 7947                  mov     word ptr [bp+stream], 6D0h ;~ 01A2:2AD1
cs=0x1a2;eip=0x002ad6; 	J(JMP(loc_12af3));	// 7948                  jmp     short loc_12AF3 ;~ 01A2:2AD6
loc_12ad8:
	// 4829 
cs=0x1a2;eip=0x002ad8; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 7952                  les     bx, [bp+stream] ;~ 01A2:2AD8
cs=0x1a2;eip=0x002adb; 	T(TEST(*(dw*)(raddr(es,bx+2)), 3));	// 7953                  test    word ptr es:[bx+2], 3 ;~ 01A2:2ADB
cs=0x1a2;eip=0x002ae1; 	J(JZ(loc_12aef));	// 7954                  jz      short loc_12AEF ;~ 01A2:2AE1
cs=0x1a2;eip=0x002ae3; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 7955                  push    word ptr [bp+stream+2] ;~ 01A2:2AE3
cs=0x1a2;eip=0x002ae6; 	X(PUSH(bx));	// 7956                  push    bx              ; stream ;~ 01A2:2AE6
cs=0x1a2;eip=0x002ae7; 	T(NOP);	// 7957                  nop ;~ 01A2:2AE7
cs=0x1a2;eip=0x002ae8; 	X(PUSH(cs));	// 7958                  push    cs ;~ 01A2:2AE8
cs=0x1a2;eip=0x002ae9; 	J(CALL(___fflush,0));	// 7959                  call    near ptr ___fflush ;~ 01A2:2AE9
cs=0x1a2;eip=0x002aec; 	X(POP(cx));	// 7960                  pop     cx ;~ 01A2:2AEC
cs=0x1a2;eip=0x002aed; 	X(POP(cx));	// 7961                  pop     cx ;~ 01A2:2AED
cs=0x1a2;eip=0x002aee; 	T(INC(di));	// 7962                  inc     di ;~ 01A2:2AEE
loc_12aef:
	// 4830 
cs=0x1a2;eip=0x002aef; 	X(ADD(*(dw*)(raddr(ss,bp+stream)), 0x14));	// 7965                  add     word ptr [bp+stream], 14h ;~ 01A2:2AEF
loc_12af3:
	// 4831 
cs=0x1a2;eip=0x002af3; 	T(ax = si;);	// 7968                  mov     ax, si ;~ 01A2:2AF3
cs=0x1a2;eip=0x002af5; 	T(DEC(si));	// 7969                  dec     si ;~ 01A2:2AF5
cs=0x1a2;eip=0x002af6; 	T(OR(ax, ax));	// 7970                  or      ax, ax ;~ 01A2:2AF6
cs=0x1a2;eip=0x002af8; 	J(JNZ(loc_12ad8));	// 7971                  jnz     short loc_12AD8 ;~ 01A2:2AF8
cs=0x1a2;eip=0x002afa; 	T(ax = di;);	// 7972                  mov     ax, di ;~ 01A2:2AFA
cs=0x1a2;eip=0x002afc; 	X(POP(di));	// 7973                  pop     di ;~ 01A2:2AFC
cs=0x1a2;eip=0x002afd; 	X(POP(si));	// 7974                  pop     si ;~ 01A2:2AFD
cs=0x1a2;eip=0x002afe; 	T(sp = bp;);	// 7975                  mov     sp, bp ;~ 01A2:2AFE
cs=0x1a2;eip=0x002b00; 	X(POP(bp));	// 7976                  pop     bp ;~ 01A2:2B00
cs=0x1a2;eip=0x002b01; 	J(RETF(0));	// 7977                  retf ;~ 01A2:2B01

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___flushall: 	goto ___flushall;
        case m2c::kloc_12ad8: 	goto loc_12ad8;
        case m2c::kloc_12aef: 	goto loc_12aef;
        case m2c::kloc_12af3: 	goto loc_12af3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12b02(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12b02:
    _begin:
#undef arg_0
#define arg_0 4
	// 7988 arg_0           = dword ptr  4 ;~ 01A2:2B02
#undef arg_4
#define arg_4 8
	// 7989 arg_4           = dword ptr  8 ;~ 01A2:2B02
#undef arg_8
#define arg_8 0x0C
	// 7990 arg_8           = dword ptr  0Ch ;~ 01A2:2B02
cs=0x1a2;eip=0x002b02; 	X(PUSH(bp));	// 7992                  push    bp ;~ 01A2:2B02
cs=0x1a2;eip=0x002b03; 	T(bp = sp;);	// 7993                  mov     bp, sp ;~ 01A2:2B03
cs=0x1a2;eip=0x002b05; 	X(PUSH(si));	// 7994                  push    si ;~ 01A2:2B05
cs=0x1a2;eip=0x002b06; 	X(PUSH(di));	// 7995                  push    di ;~ 01A2:2B06
cs=0x1a2;eip=0x002b07; 	T(XOR(di, di));	// 7996                  xor     di, di ;~ 01A2:2B07
cs=0x1a2;eip=0x002b09; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 7997                  les     bx, [bp+arg_8] ;~ 01A2:2B09
cs=0x1a2;eip=0x002b0c; 	X(INC(*(dw*)(raddr(ss,bp+arg_8))));	// 7998                  inc     word ptr [bp+arg_8] ;~ 01A2:2B0C
cs=0x1a2;eip=0x002b0f; 	T(MOV(cl, *(raddr(es,bx))));	// 7999                  mov     cl, es:[bx] ;~ 01A2:2B0F
cs=0x1a2;eip=0x002b12; 	T(al = cl;);	// 8000                  mov     al, cl ;~ 01A2:2B12
cs=0x1a2;eip=0x002b14; 	T(CMP(al, 0x72));	// 8001                  cmp     al, 72h ; 'r' ;~ 01A2:2B14
cs=0x1a2;eip=0x002b16; 	J(JNZ(loc_12b20));	// 8002                  jnz     short loc_12B20 ;~ 01A2:2B16
cs=0x1a2;eip=0x002b18; 	T(dx = 1;);	// 8003                  mov     dx, 1 ;~ 01A2:2B18
cs=0x1a2;eip=0x002b1b; 	T(si = 1;);	// 8004                  mov     si, 1 ;~ 01A2:2B1B
cs=0x1a2;eip=0x002b1e; 	J(JMP(loc_12b3e));	// 8005                  jmp     short loc_12B3E ;~ 01A2:2B1E
loc_12b20:
	// 4832 
cs=0x1a2;eip=0x002b20; 	T(CMP(cl, 0x77));	// 8009                  cmp     cl, 77h ; 'w' ;~ 01A2:2B20
cs=0x1a2;eip=0x002b23; 	J(JNZ(loc_12b2a));	// 8010                  jnz     short loc_12B2A ;~ 01A2:2B23
cs=0x1a2;eip=0x002b25; 	T(dx = 0x302;);	// 8011                  mov     dx, 302h ;~ 01A2:2B25
cs=0x1a2;eip=0x002b28; 	J(JMP(loc_12b32));	// 8012                  jmp     short loc_12B32 ;~ 01A2:2B28
loc_12b2a:
	// 4833 
cs=0x1a2;eip=0x002b2a; 	T(CMP(cl, 0x61));	// 8016                  cmp     cl, 61h ; 'a' ;~ 01A2:2B2A
cs=0x1a2;eip=0x002b2d; 	J(JNZ(loc_12b3a));	// 8017                  jnz     short loc_12B3A ;~ 01A2:2B2D
cs=0x1a2;eip=0x002b2f; 	T(dx = 0x902;);	// 8018                  mov     dx, 902h ;~ 01A2:2B2F
loc_12b32:
	// 4834 
cs=0x1a2;eip=0x002b32; 	T(di = 0x80;);	// 8021                  mov     di, 80h ; '
cs=0x1a2;eip=0x002b35; 	T(si = 2;);	// 8022                  mov     si, 2 ;~ 01A2:2B35
cs=0x1a2;eip=0x002b38; 	J(JMP(loc_12b3e));	// 8023                  jmp     short loc_12B3E ;~ 01A2:2B38
loc_12b3a:
	// 4835 
cs=0x1a2;eip=0x002b3a; 	T(XOR(ax, ax));	// 8027                  xor     ax, ax ;~ 01A2:2B3A
cs=0x1a2;eip=0x002b3c; 	J(JMP(loc_12bb8));	// 8028                  jmp     short loc_12BB8 ;~ 01A2:2B3C
loc_12b3e:
	// 4836 
cs=0x1a2;eip=0x002b3e; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 8033                  les     bx, [bp+arg_8] ;~ 01A2:2B3E
cs=0x1a2;eip=0x002b41; 	T(MOV(cl, *(raddr(es,bx))));	// 8034                  mov     cl, es:[bx] ;~ 01A2:2B41
cs=0x1a2;eip=0x002b44; 	X(INC(*(dw*)(raddr(ss,bp+arg_8))));	// 8035                  inc     word ptr [bp+arg_8] ;~ 01A2:2B44
cs=0x1a2;eip=0x002b47; 	T(CMP(cl, 0x2B));	// 8036                  cmp     cl, 2Bh ; '+' ;~ 01A2:2B47
cs=0x1a2;eip=0x002b4a; 	J(JZ(loc_12b5f));	// 8037                  jz      short loc_12B5F ;~ 01A2:2B4A
cs=0x1a2;eip=0x002b4c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 8038                  les     bx, [bp+arg_8] ;~ 01A2:2B4C
cs=0x1a2;eip=0x002b4f; 	T(CMP(*(raddr(es,bx)), 0x2B));	// 8039                  cmp     byte ptr es:[bx], 2Bh ; '+' ;~ 01A2:2B4F
cs=0x1a2;eip=0x002b53; 	J(JNZ(loc_12b76));	// 8040                  jnz     short loc_12B76 ;~ 01A2:2B53
cs=0x1a2;eip=0x002b55; 	T(CMP(cl, 0x74));	// 8041                  cmp     cl, 74h ; 't' ;~ 01A2:2B55
cs=0x1a2;eip=0x002b58; 	J(JZ(loc_12b5f));	// 8042                  jz      short loc_12B5F ;~ 01A2:2B58
cs=0x1a2;eip=0x002b5a; 	T(CMP(cl, 0x62));	// 8043                  cmp     cl, 62h ; 'b' ;~ 01A2:2B5A
cs=0x1a2;eip=0x002b5d; 	J(JNZ(loc_12b76));	// 8044                  jnz     short loc_12B76 ;~ 01A2:2B5D
loc_12b5f:
	// 4837 
cs=0x1a2;eip=0x002b5f; 	T(CMP(cl, 0x2B));	// 8048                  cmp     cl, 2Bh ; '+' ;~ 01A2:2B5F
cs=0x1a2;eip=0x002b62; 	J(JNZ(loc_12b6a));	// 8049                  jnz     short loc_12B6A ;~ 01A2:2B62
cs=0x1a2;eip=0x002b64; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 8050                  les     bx, [bp+arg_8] ;~ 01A2:2B64
cs=0x1a2;eip=0x002b67; 	T(MOV(cl, *(raddr(es,bx))));	// 8052                  mov     cl, es:[bx] ;~ 01A2:2B67
loc_12b6a:
	// 4838 
cs=0x1a2;eip=0x002b6a; 	T(AND(dx, 0x0FFFC));	// 8055                  and     dx, 0FFFCh ;~ 01A2:2B6A
cs=0x1a2;eip=0x002b6d; 	T(OR(dx, 4));	// 8056                  or      dx, 4 ;~ 01A2:2B6D
cs=0x1a2;eip=0x002b70; 	T(di = 0x180;);	// 8057                  mov     di, 180h ;~ 01A2:2B70
cs=0x1a2;eip=0x002b73; 	T(si = 3;);	// 8058                  mov     si, 3 ;~ 01A2:2B73
loc_12b76:
	// 4839 
cs=0x1a2;eip=0x002b76; 	T(CMP(cl, 0x74));	// 8063                  cmp     cl, 74h ; 't' ;~ 01A2:2B76
cs=0x1a2;eip=0x002b79; 	J(JNZ(loc_12b81));	// 8064                  jnz     short loc_12B81 ;~ 01A2:2B79
cs=0x1a2;eip=0x002b7b; 	T(OR(dx, 0x4000));	// 8065                  or      dx, 4000h ;~ 01A2:2B7B
cs=0x1a2;eip=0x002b7f; 	J(JMP(loc_12b9e));	// 8066                  jmp     short loc_12B9E ;~ 01A2:2B7F
loc_12b81:
	// 4840 
cs=0x1a2;eip=0x002b81; 	T(CMP(cl, 0x62));	// 8070                  cmp     cl, 62h ; 'b' ;~ 01A2:2B81
cs=0x1a2;eip=0x002b84; 	J(JNZ(loc_12b8c));	// 8071                  jnz     short loc_12B8C ;~ 01A2:2B84
cs=0x1a2;eip=0x002b86; 	T(OR(dx, 0x8000));	// 8072                  or      dx, 8000h ;~ 01A2:2B86
cs=0x1a2;eip=0x002b8a; 	J(JMP(loc_12b9b));	// 8073                  jmp     short loc_12B9B ;~ 01A2:2B8A
loc_12b8c:
	// 4841 
cs=0x1a2;eip=0x002b8c; 	T(ax = *(dw*)(&byte_1916a););	// 8077                  mov     ax, word ptr byte_1916A ;~ 01A2:2B8C
cs=0x1a2;eip=0x002b8f; 	T(AND(ax, 0x0C000));	// 8078                  and     ax, 0C000h ;~ 01A2:2B8F
cs=0x1a2;eip=0x002b92; 	T(OR(dx, ax));	// 8079                  or      dx, ax ;~ 01A2:2B92
cs=0x1a2;eip=0x002b94; 	T(ax = dx;);	// 8080                  mov     ax, dx ;~ 01A2:2B94
cs=0x1a2;eip=0x002b96; 	T(TEST(ax, 0x8000));	// 8081                  test    ax, 8000h ;~ 01A2:2B96
cs=0x1a2;eip=0x002b99; 	J(JZ(loc_12b9e));	// 8082                  jz      short loc_12B9E ;~ 01A2:2B99
loc_12b9b:
	// 4842 
cs=0x1a2;eip=0x002b9b; 	T(OR(si, 0x40));	// 8085                  or      si, 40h ;~ 01A2:2B9B
loc_12b9e:
	// 4843 
cs=0x1a2;eip=0x002b9e; 	X(*(dw*)(((db*)&__off_18fa8)+2) = seg_offset(seg000););	// 8089                  mov     word ptr __off_18FA8+2, seg seg000 ;~ 01A2:2B9E
cs=0x1a2;eip=0x002ba4; 	X(*(dw*)(&__off_18fa8) = 0x416A;);	// 8090                  mov     word ptr __off_18FA8, 416Ah ;~ 01A2:2BA4
cs=0x1a2;eip=0x002baa; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 8091                  les     bx, [bp+arg_4] ;~ 01A2:2BAA
cs=0x1a2;eip=0x002bad; 	X(MOV(*(dw*)(raddr(es,bx)), dx));	// 8093                  mov     es:[bx], dx ;~ 01A2:2BAD
cs=0x1a2;eip=0x002bb0; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 8094                  les     bx, [bp+arg_0] ;~ 01A2:2BB0
cs=0x1a2;eip=0x002bb3; 	X(MOV(*(dw*)(raddr(es,bx)), di));	// 8095                  mov     es:[bx], di ;~ 01A2:2BB3
cs=0x1a2;eip=0x002bb6; 	T(ax = si;);	// 8096                  mov     ax, si ;~ 01A2:2BB6
loc_12bb8:
	// 4844 
cs=0x1a2;eip=0x002bb8; 	X(POP(di));	// 8099                  pop     di ;~ 01A2:2BB8
cs=0x1a2;eip=0x002bb9; 	X(POP(si));	// 8100                  pop     si ;~ 01A2:2BB9
cs=0x1a2;eip=0x002bba; 	X(POP(bp));	// 8101                  pop     bp ;~ 01A2:2BBA
cs=0x1a2;eip=0x002bbb; 	J(RETN(0x0C));	// 8102                  retn    0Ch ;~ 01A2:2BBB

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_12b20: 	goto loc_12b20;
        case m2c::kloc_12b2a: 	goto loc_12b2a;
        case m2c::kloc_12b32: 	goto loc_12b32;
        case m2c::kloc_12b3a: 	goto loc_12b3a;
        case m2c::kloc_12b3e: 	goto loc_12b3e;
        case m2c::kloc_12b5f: 	goto loc_12b5f;
        case m2c::kloc_12b6a: 	goto loc_12b6a;
        case m2c::kloc_12b76: 	goto loc_12b76;
        case m2c::kloc_12b81: 	goto loc_12b81;
        case m2c::kloc_12b8c: 	goto loc_12b8c;
        case m2c::kloc_12b9b: 	goto loc_12b9b;
        case m2c::kloc_12b9e: 	goto loc_12b9e;
        case m2c::kloc_12bb8: 	goto loc_12bb8;
        case m2c::ksub_12b02: 	goto sub_12b02;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____openfp(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____openfp:
    _begin:
#undef var_4
#define var_4 -4
	// 8114 var_4           = word ptr -4 ;~ 01A2:2BBE
#undef var_2
#define var_2 -2
	// 8115 var_2           = word ptr -2 ;~ 01A2:2BBE
#undef arg_0
#define arg_0 4
	// 8116 arg_0           = word ptr  4 ;~ 01A2:2BBE
#undef arg_2
#define arg_2 6
	// 8117 arg_2           = word ptr  6 ;~ 01A2:2BBE
#undef arg_4
#define arg_4 8
	// 8118 arg_4           = word ptr  8 ;~ 01A2:2BBE
#undef path
#define path 0x0A
	// 8119 path            = dword ptr  0Ah ;~ 01A2:2BBE
#undef stream
#define stream 0x0E
	// 8120 stream          = dword ptr  0Eh ;~ 01A2:2BBE
cs=0x1a2;eip=0x002bbe; 	X(PUSH(bp));	// 8122                  push    bp ;~ 01A2:2BBE
cs=0x1a2;eip=0x002bbf; 	T(bp = sp;);	// 8123                  mov     bp, sp ;~ 01A2:2BBF
cs=0x1a2;eip=0x002bc1; 	T(SUB(sp, 4));	// 8124                  sub     sp, 4 ;~ 01A2:2BC1
cs=0x1a2;eip=0x002bc4; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 8125                  push    [bp+arg_4] ;~ 01A2:2BC4
cs=0x1a2;eip=0x002bc7; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 8126                  push    [bp+arg_2] ;~ 01A2:2BC7
cs=0x1a2;eip=0x002bca; 	X(PUSH(ss));	// 8127                  push    ss ;~ 01A2:2BCA
cs=0x1a2;eip=0x002bcb; 	T(ax = bp+var_2);	// 8128                  lea     ax, [bp+var_2] ;~ 01A2:2BCB
cs=0x1a2;eip=0x002bce; 	X(PUSH(ax));	// 8129                  push    ax ;~ 01A2:2BCE
cs=0x1a2;eip=0x002bcf; 	X(PUSH(ss));	// 8130                  push    ss ;~ 01A2:2BCF
cs=0x1a2;eip=0x002bd0; 	T(ax = bp+var_4);	// 8131                  lea     ax, [bp+var_4] ;~ 01A2:2BD0
cs=0x1a2;eip=0x002bd3; 	X(PUSH(ax));	// 8132                  push    ax ;~ 01A2:2BD3
cs=0x1a2;eip=0x002bd4; 	J(CALL(sub_12b02,0));	// 8133                  call    sub_12B02 ;~ 01A2:2BD4
cs=0x1a2;eip=0x002bd7; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 8135                  les     bx, [bp+stream] ;~ 01A2:2BD7
cs=0x1a2;eip=0x002bda; 	X(MOV(*(dw*)(raddr(es,bx+2)), ax));	// 8137                  mov     es:[bx+2], ax ;~ 01A2:2BDA
cs=0x1a2;eip=0x002bde; 	T(OR(ax, ax));	// 8138                  or      ax, ax ;~ 01A2:2BDE
cs=0x1a2;eip=0x002be0; 	J(JZ(loc_12c0c));	// 8139                  jz      short loc_12C0C ;~ 01A2:2BE0
cs=0x1a2;eip=0x002be2; 	T(CMP(*(raddr(es,bx+4)), 0));	// 8140                  cmp     byte ptr es:[bx+4], 0 ;~ 01A2:2BE2
cs=0x1a2;eip=0x002be7; 	J(JGE(loc_12c20));	// 8141                  jge     short loc_12C20 ;~ 01A2:2BE7
cs=0x1a2;eip=0x002be9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 8142                  push    [bp+var_4] ;~ 01A2:2BE9
cs=0x1a2;eip=0x002bec; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 8143                  mov     ax, [bp+var_2] ;~ 01A2:2BEC
cs=0x1a2;eip=0x002bef; 	T(OR(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 8144                  or      ax, [bp+arg_0] ;~ 01A2:2BEF
cs=0x1a2;eip=0x002bf2; 	X(PUSH(ax));	// 8145                  push    ax              ; access ;~ 01A2:2BF2
cs=0x1a2;eip=0x002bf3; 	X(PUSH(*(dw*)(raddr(ss,bp+path+2))));	// 8146                  push    word ptr [bp+path+2] ;~ 01A2:2BF3
cs=0x1a2;eip=0x002bf6; 	X(PUSH(*(dw*)(raddr(ss,bp+path))));	// 8147                  push    word ptr [bp+path] ; path ;~ 01A2:2BF6
cs=0x1a2;eip=0x002bf9; 	T(NOP);	// 8148                  nop ;~ 01A2:2BF9
cs=0x1a2;eip=0x002bfa; 	X(PUSH(cs));	// 8149                  push    cs ;~ 01A2:2BFA
cs=0x1a2;eip=0x002bfb; 	J(CALL(___open_0,0));	// 8150                  call    near ptr ___open_0 ;~ 01A2:2BFB
cs=0x1a2;eip=0x002bfe; 	T(ADD(sp, 8));	// 8151                  add     sp, 8 ;~ 01A2:2BFE
cs=0x1a2;eip=0x002c01; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 8152                  les     bx, [bp+stream] ;~ 01A2:2C01
cs=0x1a2;eip=0x002c04; 	X(MOV(*(raddr(es,bx+4)), al));	// 8153                  mov     es:[bx+4], al ;~ 01A2:2C04
cs=0x1a2;eip=0x002c08; 	T(OR(al, al));	// 8154                  or      al, al ;~ 01A2:2C08
cs=0x1a2;eip=0x002c0a; 	J(JGE(loc_12c20));	// 8155                  jge     short loc_12C20 ;~ 01A2:2C0A
loc_12c0c:
	// 4845 
cs=0x1a2;eip=0x002c0c; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 8158                  les     bx, [bp+stream] ;~ 01A2:2C0C
cs=0x1a2;eip=0x002c0f; 	X(MOV(*(raddr(es,bx+4)), 0x0FF));	// 8160                  mov     byte ptr es:[bx+4], 0FFh ;~ 01A2:2C0F
cs=0x1a2;eip=0x002c14; 	X(MOV(*(dw*)(raddr(es,bx+2)), 0));	// 8161                  mov     word ptr es:[bx+2], 0 ;~ 01A2:2C14
loc_12c1a:
	// 4846 
cs=0x1a2;eip=0x002c1a; 	T(XOR(dx, dx));	// 8164                  xor     dx, dx ;~ 01A2:2C1A
cs=0x1a2;eip=0x002c1c; 	T(XOR(ax, ax));	// 8165                  xor     ax, ax ;~ 01A2:2C1C
cs=0x1a2;eip=0x002c1e; 	J(JMP(loc_12c89));	// 8166                  jmp     short loc_12C89 ;~ 01A2:2C1E
loc_12c20:
	// 4847 
cs=0x1a2;eip=0x002c20; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 8172                  les     bx, [bp+stream] ;~ 01A2:2C20
cs=0x1a2;eip=0x002c23; 	T(MOV(al, *(raddr(es,bx+4))));	// 8173                  mov     al, es:[bx+4] ;~ 01A2:2C23
cs=0x1a2;eip=0x002c27; 	T(CBW);	// 8174                  cbw ;~ 01A2:2C27
cs=0x1a2;eip=0x002c28; 	X(PUSH(ax));	// 8175                  push    ax              ; handle ;~ 01A2:2C28
cs=0x1a2;eip=0x002c29; 	T(NOP);	// 8176                  nop ;~ 01A2:2C29
cs=0x1a2;eip=0x002c2a; 	X(PUSH(cs));	// 8177                  push    cs ;~ 01A2:2C2A
cs=0x1a2;eip=0x002c2b; 	J(CALL(___isatty,0));	// 8178                  call    near ptr ___isatty ;~ 01A2:2C2B
cs=0x1a2;eip=0x002c2e; 	X(POP(cx));	// 8179                  pop     cx ;~ 01A2:2C2E
cs=0x1a2;eip=0x002c2f; 	T(OR(ax, ax));	// 8180                  or      ax, ax ;~ 01A2:2C2F
cs=0x1a2;eip=0x002c31; 	J(JZ(loc_12c3c));	// 8181                  jz      short loc_12C3C ;~ 01A2:2C31
cs=0x1a2;eip=0x002c33; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 8182                  les     bx, [bp+stream] ;~ 01A2:2C33
cs=0x1a2;eip=0x002c36; 	X(OR(*(dw*)(raddr(es,bx+2)), 0x200));	// 8184                  or      word ptr es:[bx+2], 200h ;~ 01A2:2C36
loc_12c3c:
	// 4848 
cs=0x1a2;eip=0x002c3c; 	T(ax = 0x200;);	// 8188                  mov     ax, 200h ;~ 01A2:2C3C
cs=0x1a2;eip=0x002c3f; 	X(PUSH(ax));	// 8189                  push    ax              ; size ;~ 01A2:2C3F
cs=0x1a2;eip=0x002c40; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 8190                  les     bx, [bp+stream] ;~ 01A2:2C40
cs=0x1a2;eip=0x002c43; 	T(TEST(*(dw*)(raddr(es,bx+2)), 0x200));	// 8191                  test    word ptr es:[bx+2], 200h ;~ 01A2:2C43
cs=0x1a2;eip=0x002c49; 	J(JZ(loc_12c50));	// 8192                  jz      short loc_12C50 ;~ 01A2:2C49
cs=0x1a2;eip=0x002c4b; 	T(ax = 1;);	// 8193                  mov     ax, 1 ;~ 01A2:2C4B
cs=0x1a2;eip=0x002c4e; 	J(JMP(loc_12c52));	// 8194                  jmp     short loc_12C52 ;~ 01A2:2C4E
loc_12c50:
	// 4849 
cs=0x1a2;eip=0x002c50; 	T(XOR(ax, ax));	// 8198                  xor     ax, ax ;~ 01A2:2C50
loc_12c52:
	// 4850 
cs=0x1a2;eip=0x002c52; 	X(PUSH(ax));	// 8201                  push    ax              ; type ;~ 01A2:2C52
cs=0x1a2;eip=0x002c53; 	T(XOR(ax, ax));	// 8202                  xor     ax, ax ;~ 01A2:2C53
cs=0x1a2;eip=0x002c55; 	T(XOR(dx, dx));	// 8203                  xor     dx, dx ;~ 01A2:2C55
cs=0x1a2;eip=0x002c57; 	X(PUSH(ax));	// 8204                  push    ax ;~ 01A2:2C57
cs=0x1a2;eip=0x002c58; 	X(PUSH(dx));	// 8205                  push    dx              ; buf ;~ 01A2:2C58
cs=0x1a2;eip=0x002c59; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 8206                  push    word ptr [bp+stream+2] ;~ 01A2:2C59
cs=0x1a2;eip=0x002c5c; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 8207                  push    word ptr [bp+stream] ; stream ;~ 01A2:2C5C
cs=0x1a2;eip=0x002c5f; 	T(NOP);	// 8208                  nop ;~ 01A2:2C5F
cs=0x1a2;eip=0x002c60; 	X(PUSH(cs));	// 8209                  push    cs ;~ 01A2:2C60
cs=0x1a2;eip=0x002c61; 	J(CALL(___setvbuf,0));	// 8210                  call    near ptr ___setvbuf ;~ 01A2:2C61
cs=0x1a2;eip=0x002c64; 	T(ADD(sp, 0x0C));	// 8211                  add     sp, 0Ch ;~ 01A2:2C64
cs=0x1a2;eip=0x002c67; 	T(OR(ax, ax));	// 8212                  or      ax, ax ;~ 01A2:2C67
cs=0x1a2;eip=0x002c69; 	J(JZ(loc_12c7a));	// 8213                  jz      short loc_12C7A ;~ 01A2:2C69
cs=0x1a2;eip=0x002c6b; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 8214                  push    word ptr [bp+stream+2] ;~ 01A2:2C6B
cs=0x1a2;eip=0x002c6e; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 8215                  push    word ptr [bp+stream] ; stream ;~ 01A2:2C6E
cs=0x1a2;eip=0x002c71; 	T(NOP);	// 8216                  nop ;~ 01A2:2C71
cs=0x1a2;eip=0x002c72; 	X(PUSH(cs));	// 8217                  push    cs ;~ 01A2:2C72
cs=0x1a2;eip=0x002c73; 	J(CALL(___fclose,0));	// 8218                  call    near ptr ___fclose ;~ 01A2:2C73
cs=0x1a2;eip=0x002c76; 	X(POP(cx));	// 8219                  pop     cx ;~ 01A2:2C76
cs=0x1a2;eip=0x002c77; 	X(POP(cx));	// 8220                  pop     cx ;~ 01A2:2C77
cs=0x1a2;eip=0x002c78; 	J(JMP(loc_12c1a));	// 8221                  jmp     short loc_12C1A ;~ 01A2:2C78
loc_12c7a:
	// 4851 
cs=0x1a2;eip=0x002c7a; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 8225                  les     bx, [bp+stream] ;~ 01A2:2C7A
cs=0x1a2;eip=0x002c7d; 	X(MOV(*(dw*)(raddr(es,bx+0x10)), 0));	// 8226                  mov     word ptr es:[bx+10h], 0 ;~ 01A2:2C7D
cs=0x1a2;eip=0x002c83; 	T(MOV(dx, *(dw*)(raddr(ss,bp+stream+2))));	// 8227                  mov     dx, word ptr [bp+stream+2] ;~ 01A2:2C83
cs=0x1a2;eip=0x002c86; 	T(MOV(ax, *(dw*)(raddr(ss,bp+stream))));	// 8228                  mov     ax, word ptr [bp+stream] ;~ 01A2:2C86
loc_12c89:
	// 4852 
cs=0x1a2;eip=0x002c89; 	T(sp = bp;);	// 8231                  mov     sp, bp ;~ 01A2:2C89
cs=0x1a2;eip=0x002c8b; 	X(POP(bp));	// 8232                  pop     bp ;~ 01A2:2C8B
cs=0x1a2;eip=0x002c8c; 	J(RETN(0x0E));	// 8233                  retn    0Eh ;~ 01A2:2C8C

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____openfp: 	goto ____openfp;
        case m2c::kloc_12c0c: 	goto loc_12c0c;
        case m2c::kloc_12c1a: 	goto loc_12c1a;
        case m2c::kloc_12c20: 	goto loc_12c20;
        case m2c::kloc_12c3c: 	goto loc_12c3c;
        case m2c::kloc_12c50: 	goto loc_12c50;
        case m2c::kloc_12c52: 	goto loc_12c52;
        case m2c::kloc_12c7a: 	goto loc_12c7a;
        case m2c::kloc_12c89: 	goto loc_12c89;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____getfp(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____getfp:
    _begin:
#undef var_4
#define var_4 -4
	// 8244 var_4           = dword ptr -4 ;~ 01A2:2C8F
cs=0x1a2;eip=0x002c8f; 	X(PUSH(bp));	// 8246                  push    bp ;~ 01A2:2C8F
cs=0x1a2;eip=0x002c90; 	T(bp = sp;);	// 8247                  mov     bp, sp ;~ 01A2:2C90
cs=0x1a2;eip=0x002c92; 	T(SUB(sp, 4));	// 8248                  sub     sp, 4 ;~ 01A2:2C92
cs=0x1a2;eip=0x002c95; 	X(MOV(*(dw*)(raddr(ss,bp+var_4+2)), ds));	// 8249                  mov     word ptr [bp+var_4+2], ds ;~ 01A2:2C95
cs=0x1a2;eip=0x002c98; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0x6D0));	// 8250                  mov     word ptr [bp+var_4], 6D0h ;~ 01A2:2C98
loc_12c9d:
	// 4853 
cs=0x1a2;eip=0x002c9d; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 8253                  les     bx, [bp+var_4] ;~ 01A2:2C9D
cs=0x1a2;eip=0x002ca0; 	T(CMP(*(raddr(es,bx+4)), 0));	// 8255                  cmp     byte ptr es:[bx+4], 0 ;~ 01A2:2CA0
cs=0x1a2;eip=0x002ca5; 	J(JL(loc_12cbf));	// 8256                  jl      short loc_12CBF ;~ 01A2:2CA5
cs=0x1a2;eip=0x002ca7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 8257                  mov     ax, word ptr [bp+var_4] ;~ 01A2:2CA7
cs=0x1a2;eip=0x002caa; 	X(ADD(*(dw*)(raddr(ss,bp+var_4)), 0x14));	// 8258                  add     word ptr [bp+var_4], 14h ;~ 01A2:2CAA
cs=0x1a2;eip=0x002cae; 	X(PUSH(ax));	// 8259                  push    ax ;~ 01A2:2CAE
cs=0x1a2;eip=0x002caf; 	T(ax = word_19140;);	// 8260                  mov     ax, word_19140 ;~ 01A2:2CAF
cs=0x1a2;eip=0x002cb2; 	T(dx = 0x14;);	// 8261                  mov     dx, 14h ;~ 01A2:2CB2
cs=0x1a2;eip=0x002cb5; 	T(IMUL1_2(dx));	// 8262                  imul    dx ;~ 01A2:2CB5
cs=0x1a2;eip=0x002cb7; 	T(ADD(ax, 0x6D0));	// 8263                  add     ax, 6D0h ;~ 01A2:2CB7
cs=0x1a2;eip=0x002cba; 	X(POP(dx));	// 8264                  pop     dx ;~ 01A2:2CBA
cs=0x1a2;eip=0x002cbb; 	T(CMP(dx, ax));	// 8265                  cmp     dx, ax ;~ 01A2:2CBB
cs=0x1a2;eip=0x002cbd; 	J(JC(loc_12c9d));	// 8266                  jb      short loc_12C9D ;~ 01A2:2CBD
loc_12cbf:
	// 4854 
cs=0x1a2;eip=0x002cbf; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 8269                  les     bx, [bp+var_4] ;~ 01A2:2CBF
cs=0x1a2;eip=0x002cc2; 	T(CMP(*(raddr(es,bx+4)), 0));	// 8270                  cmp     byte ptr es:[bx+4], 0 ;~ 01A2:2CC2
cs=0x1a2;eip=0x002cc7; 	J(JL(loc_12ccf));	// 8271                  jl      short loc_12CCF ;~ 01A2:2CC7
cs=0x1a2;eip=0x002cc9; 	T(XOR(dx, dx));	// 8272                  xor     dx, dx ;~ 01A2:2CC9
cs=0x1a2;eip=0x002ccb; 	T(XOR(ax, ax));	// 8273                  xor     ax, ax ;~ 01A2:2CCB
cs=0x1a2;eip=0x002ccd; 	J(JMP(loc_12cd5));	// 8274                  jmp     short loc_12CD5 ;~ 01A2:2CCD
loc_12ccf:
	// 4855 
cs=0x1a2;eip=0x002ccf; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4+2))));	// 8278                  mov     dx, word ptr [bp+var_4+2] ;~ 01A2:2CCF
cs=0x1a2;eip=0x002cd2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 8279                  mov     ax, word ptr [bp+var_4] ;~ 01A2:2CD2
loc_12cd5:
	// 4856 
cs=0x1a2;eip=0x002cd5; 	T(sp = bp;);	// 8282                  mov     sp, bp ;~ 01A2:2CD5
cs=0x1a2;eip=0x002cd7; 	X(POP(bp));	// 8283                  pop     bp ;~ 01A2:2CD7
cs=0x1a2;eip=0x002cd8; 	J(RETN(0));	// 8284                  retn ;~ 01A2:2CD8

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____getfp: 	goto ____getfp;
        case m2c::kloc_12c9d: 	goto loc_12c9d;
        case m2c::kloc_12cbf: 	goto loc_12cbf;
        case m2c::kloc_12ccf: 	goto loc_12ccf;
        case m2c::kloc_12cd5: 	goto loc_12cd5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___fopen(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___fopen:
    _begin:
#undef stream
#define stream -4
	// 8297 stream          = dword ptr -4 ;~ 01A2:2CD9
#undef path
#define path 6
	// 8298 path            = dword ptr  6 ;~ 01A2:2CD9
#undef mode
#define mode 0x0A
	// 8299 mode            = dword ptr  0Ah ;~ 01A2:2CD9
cs=0x1a2;eip=0x002cd9; 	X(PUSH(bp));	// 8301                  push    bp ;~ 01A2:2CD9
cs=0x1a2;eip=0x002cda; 	T(bp = sp;);	// 8302                  mov     bp, sp ;~ 01A2:2CDA
cs=0x1a2;eip=0x002cdc; 	T(SUB(sp, 4));	// 8303                  sub     sp, 4 ;~ 01A2:2CDC
cs=0x1a2;eip=0x002cdf; 	J(CALL(____getfp,0));	// 8304                  call    ____GETFP ;~ 01A2:2CDF
cs=0x1a2;eip=0x002ce2; 	X(MOV(*(dw*)(raddr(ss,bp+stream+2)), dx));	// 8306                  mov     word ptr [bp+stream+2], dx ;~ 01A2:2CE2
cs=0x1a2;eip=0x002ce5; 	X(MOV(*(dw*)(raddr(ss,bp+stream)), ax));	// 8307                  mov     word ptr [bp+stream], ax ;~ 01A2:2CE5
cs=0x1a2;eip=0x002ce8; 	T(OR(ax, dx));	// 8308                  or      ax, dx ;~ 01A2:2CE8
cs=0x1a2;eip=0x002cea; 	J(JNZ(loc_12cf2));	// 8309                  jnz     short loc_12CF2 ;~ 01A2:2CEA
cs=0x1a2;eip=0x002cec; 	T(XOR(dx, dx));	// 8310                  xor     dx, dx ;~ 01A2:2CEC
cs=0x1a2;eip=0x002cee; 	T(XOR(ax, ax));	// 8311                  xor     ax, ax ;~ 01A2:2CEE
cs=0x1a2;eip=0x002cf0; 	J(JMP(loc_12d0a));	// 8312                  jmp     short loc_12D0A ;~ 01A2:2CF0
loc_12cf2:
	// 4857 
cs=0x1a2;eip=0x002cf2; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 8316                  push    word ptr [bp+stream+2] ;~ 01A2:2CF2
cs=0x1a2;eip=0x002cf5; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 8317                  push    word ptr [bp+stream] ; stream ;~ 01A2:2CF5
cs=0x1a2;eip=0x002cf8; 	X(PUSH(*(dw*)(raddr(ss,bp+path+2))));	// 8318                  push    word ptr [bp+path+2] ;~ 01A2:2CF8
cs=0x1a2;eip=0x002cfb; 	X(PUSH(*(dw*)(raddr(ss,bp+path))));	// 8319                  push    word ptr [bp+path] ; path ;~ 01A2:2CFB
cs=0x1a2;eip=0x002cfe; 	X(PUSH(*(dw*)(raddr(ss,bp+mode+2))));	// 8320                  push    word ptr [bp+mode+2] ; int ;~ 01A2:2CFE
cs=0x1a2;eip=0x002d01; 	X(PUSH(*(dw*)(raddr(ss,bp+mode))));	// 8321                  push    word ptr [bp+mode] ; int ;~ 01A2:2D01
cs=0x1a2;eip=0x002d04; 	T(XOR(ax, ax));	// 8322                  xor     ax, ax ;~ 01A2:2D04
cs=0x1a2;eip=0x002d06; 	X(PUSH(ax));	// 8323                  push    ax              ; int ;~ 01A2:2D06
cs=0x1a2;eip=0x002d07; 	J(CALL(____openfp,0));	// 8324                  call    ____OPENFP ;~ 01A2:2D07
loc_12d0a:
	// 4858 
cs=0x1a2;eip=0x002d0a; 	T(sp = bp;);	// 8327                  mov     sp, bp ;~ 01A2:2D0A
cs=0x1a2;eip=0x002d0c; 	X(POP(bp));	// 8328                  pop     bp ;~ 01A2:2D0C
cs=0x1a2;eip=0x002d0d; 	J(RETF(0));	// 8329                  retf ;~ 01A2:2D0D

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___fopen: 	goto ___fopen;
        case m2c::kloc_12cf2: 	goto loc_12cf2;
        case m2c::kloc_12d0a: 	goto loc_12d0a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12d0e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12d0e:
    _begin:
#undef stream
#define stream 4
	// 8341 stream          = dword ptr  4 ;~ 01A2:2D0E
#undef arg_4
#define arg_4 8
	// 8342 arg_4           = word ptr  8 ;~ 01A2:2D0E
#undef buf
#define buf 0x0A
	// 8343 buf             = dword ptr  0Ah ;~ 01A2:2D0E
cs=0x1a2;eip=0x002d0e; 	X(PUSH(bp));	// 8345                  push    bp ;~ 01A2:2D0E
cs=0x1a2;eip=0x002d0f; 	T(bp = sp;);	// 8346                  mov     bp, sp ;~ 01A2:2D0F
cs=0x1a2;eip=0x002d11; 	X(PUSH(si));	// 8347                  push    si ;~ 01A2:2D11
cs=0x1a2;eip=0x002d12; 	X(PUSH(di));	// 8348                  push    di ;~ 01A2:2D12
cs=0x1a2;eip=0x002d13; 	J(JMP(loc_12df0));	// 8349                  jmp     loc_12DF0 ;~ 01A2:2D13
loc_12d16:
	// 4859 
cs=0x1a2;eip=0x002d16; 	X(INC(*(dw*)(raddr(ss,bp+arg_4))));	// 8353                  inc     [bp+arg_4] ;~ 01A2:2D16
cs=0x1a2;eip=0x002d19; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 8354                  les     bx, [bp+stream] ;~ 01A2:2D19
cs=0x1a2;eip=0x002d1c; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 8355                  mov     ax, es:[bx+6] ;~ 01A2:2D1C
cs=0x1a2;eip=0x002d20; 	T(CMP(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 8356                  cmp     ax, [bp+arg_4] ;~ 01A2:2D20
cs=0x1a2;eip=0x002d23; 	J(JBE(loc_12d2a));	// 8357                  jbe     short loc_12D2A ;~ 01A2:2D23
cs=0x1a2;eip=0x002d25; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 8358                  mov     ax, [bp+arg_4] ;~ 01A2:2D25
cs=0x1a2;eip=0x002d28; 	J(JMP(loc_12d31));	// 8359                  jmp     short loc_12D31 ;~ 01A2:2D28
loc_12d2a:
	// 4860 
cs=0x1a2;eip=0x002d2a; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 8363                  les     bx, [bp+stream] ;~ 01A2:2D2A
cs=0x1a2;eip=0x002d2d; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 8365                  mov     ax, es:[bx+6] ;~ 01A2:2D2D
loc_12d31:
	// 4861 
cs=0x1a2;eip=0x002d31; 	T(di = ax;);	// 8369                  mov     di, ax ;~ 01A2:2D31
cs=0x1a2;eip=0x002d33; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 8370                  les     bx, [bp+stream] ;~ 01A2:2D33
cs=0x1a2;eip=0x002d36; 	T(TEST(*(dw*)(raddr(es,bx+2)), 0x40));	// 8371                  test    word ptr es:[bx+2], 40h ;~ 01A2:2D36
cs=0x1a2;eip=0x002d3c; 	J(JZ(loc_12dad));	// 8372                  jz      short loc_12DAD ;~ 01A2:2D3C
cs=0x1a2;eip=0x002d3e; 	T(CMP(*(dw*)(raddr(es,bx+6)), 0));	// 8373                  cmp     word ptr es:[bx+6], 0 ;~ 01A2:2D3E
cs=0x1a2;eip=0x002d43; 	J(JZ(loc_12dad));	// 8374                  jz      short loc_12DAD ;~ 01A2:2D43
cs=0x1a2;eip=0x002d45; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 8375                  mov     ax, es:[bx+6] ;~ 01A2:2D45
cs=0x1a2;eip=0x002d49; 	T(CMP(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 8376                  cmp     ax, [bp+arg_4] ;~ 01A2:2D49
cs=0x1a2;eip=0x002d4c; 	J(JNC(loc_12dad));	// 8377                  jnb     short loc_12DAD ;~ 01A2:2D4C
cs=0x1a2;eip=0x002d4e; 	T(CMP(*(dw*)(raddr(es,bx)), 0));	// 8378                  cmp     word ptr es:[bx], 0 ;~ 01A2:2D4E
cs=0x1a2;eip=0x002d52; 	J(JNZ(loc_12dad));	// 8379                  jnz     short loc_12DAD ;~ 01A2:2D52
cs=0x1a2;eip=0x002d54; 	X(DEC(*(dw*)(raddr(ss,bp+arg_4))));	// 8380                  dec     [bp+arg_4] ;~ 01A2:2D54
cs=0x1a2;eip=0x002d57; 	T(XOR(di, di));	// 8381                  xor     di, di ;~ 01A2:2D57
cs=0x1a2;eip=0x002d59; 	J(JMP(loc_12d69));	// 8382                  jmp     short loc_12D69 ;~ 01A2:2D59
loc_12d5b:
	// 4862 
cs=0x1a2;eip=0x002d5b; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 8386                  les     bx, [bp+stream] ;~ 01A2:2D5B
cs=0x1a2;eip=0x002d5e; 	T(ADD(di, *(dw*)(raddr(es,bx+6))));	// 8388                  add     di, es:[bx+6] ;~ 01A2:2D5E
cs=0x1a2;eip=0x002d62; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 8389                  mov     ax, es:[bx+6] ;~ 01A2:2D62
cs=0x1a2;eip=0x002d66; 	X(SUB(*(dw*)(raddr(ss,bp+arg_4)), ax));	// 8390                  sub     [bp+arg_4], ax ;~ 01A2:2D66
loc_12d69:
	// 4863 
cs=0x1a2;eip=0x002d69; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 8393                  les     bx, [bp+stream] ;~ 01A2:2D69
cs=0x1a2;eip=0x002d6c; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 8394                  mov     ax, es:[bx+6] ;~ 01A2:2D6C
cs=0x1a2;eip=0x002d70; 	T(CMP(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 8395                  cmp     ax, [bp+arg_4] ;~ 01A2:2D70
cs=0x1a2;eip=0x002d73; 	J(JBE(loc_12d5b));	// 8396                  jbe     short loc_12D5B ;~ 01A2:2D73
cs=0x1a2;eip=0x002d75; 	X(PUSH(di));	// 8397                  push    di              ; len ;~ 01A2:2D75
cs=0x1a2;eip=0x002d76; 	X(PUSH(*(dw*)(raddr(ss,bp+buf+2))));	// 8398                  push    word ptr [bp+buf+2] ;~ 01A2:2D76
cs=0x1a2;eip=0x002d79; 	X(PUSH(*(dw*)(raddr(ss,bp+buf))));	// 8399                  push    word ptr [bp+buf] ; buf ;~ 01A2:2D79
cs=0x1a2;eip=0x002d7c; 	T(MOV(al, *(raddr(es,bx+4))));	// 8400                  mov     al, es:[bx+4] ;~ 01A2:2D7C
cs=0x1a2;eip=0x002d80; 	T(CBW);	// 8401                  cbw ;~ 01A2:2D80
cs=0x1a2;eip=0x002d81; 	X(PUSH(ax));	// 8402                  push    ax              ; handle ;~ 01A2:2D81
cs=0x1a2;eip=0x002d82; 	T(NOP);	// 8403                  nop ;~ 01A2:2D82
cs=0x1a2;eip=0x002d83; 	X(PUSH(cs));	// 8404                  push    cs ;~ 01A2:2D83
cs=0x1a2;eip=0x002d84; 	J(CALL(____read_0,0));	// 8405                  call    near ptr ____read_0 ;~ 01A2:2D84
cs=0x1a2;eip=0x002d87; 	T(ADD(sp, 8));	// 8406                  add     sp, 8 ;~ 01A2:2D87
cs=0x1a2;eip=0x002d8a; 	T(dx = ax;);	// 8407                  mov     dx, ax ;~ 01A2:2D8A
cs=0x1a2;eip=0x002d8c; 	X(ADD(*(dw*)(raddr(ss,bp+buf)), dx));	// 8408                  add     word ptr [bp+buf], dx ;~ 01A2:2D8C
cs=0x1a2;eip=0x002d8f; 	T(CMP(dx, di));	// 8409                  cmp     dx, di ;~ 01A2:2D8F
cs=0x1a2;eip=0x002d91; 	J(JZ(loc_12df0));	// 8410                  jz      short loc_12DF0 ;~ 01A2:2D91
cs=0x1a2;eip=0x002d93; 	T(ax = di;);	// 8411                  mov     ax, di ;~ 01A2:2D93
cs=0x1a2;eip=0x002d95; 	T(SUB(ax, dx));	// 8412                  sub     ax, dx ;~ 01A2:2D95
cs=0x1a2;eip=0x002d97; 	X(ADD(*(dw*)(raddr(ss,bp+arg_4)), ax));	// 8413                  add     [bp+arg_4], ax ;~ 01A2:2D97
loc_12d9a:
	// 4864 
cs=0x1a2;eip=0x002d9a; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 8416                  les     bx, [bp+stream] ;~ 01A2:2D9A
cs=0x1a2;eip=0x002d9d; 	X(OR(*(dw*)(raddr(es,bx+2)), 0x20));	// 8417                  or      word ptr es:[bx+2], 20h ;~ 01A2:2D9D
cs=0x1a2;eip=0x002da2; 	J(JMP(loc_12df9));	// 8418                  jmp     short loc_12DF9 ;~ 01A2:2DA2
loc_12da4:
	// 4865 
cs=0x1a2;eip=0x002da4; 	T(LES(bx, *(dd*)(raddr(ss,bp+buf))));	// 8423                  les     bx, [bp+buf] ;~ 01A2:2DA4
cs=0x1a2;eip=0x002da7; 	X(MOV(*(raddr(es,bx)), dl));	// 8425                  mov     es:[bx], dl ;~ 01A2:2DA7
cs=0x1a2;eip=0x002daa; 	X(INC(*(dw*)(raddr(ss,bp+buf))));	// 8426                  inc     word ptr [bp+buf] ;~ 01A2:2DAA
loc_12dad:
	// 4866 
cs=0x1a2;eip=0x002dad; 	X(DEC(*(dw*)(raddr(ss,bp+arg_4))));	// 8430                  dec     [bp+arg_4] ;~ 01A2:2DAD
cs=0x1a2;eip=0x002db0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 8431                  mov     ax, [bp+arg_4] ;~ 01A2:2DB0
cs=0x1a2;eip=0x002db3; 	T(OR(ax, ax));	// 8432                  or      ax, ax ;~ 01A2:2DB3
cs=0x1a2;eip=0x002db5; 	J(JZ(loc_12deb));	// 8433                  jz      short loc_12DEB ;~ 01A2:2DB5
cs=0x1a2;eip=0x002db7; 	T(DEC(di));	// 8434                  dec     di ;~ 01A2:2DB7
cs=0x1a2;eip=0x002db8; 	J(JZ(loc_12deb));	// 8435                  jz      short loc_12DEB ;~ 01A2:2DB8
cs=0x1a2;eip=0x002dba; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 8436                  les     bx, [bp+stream] ;~ 01A2:2DBA
cs=0x1a2;eip=0x002dbd; 	X(DEC(*(dw*)(raddr(es,bx))));	// 8438                  dec     word ptr es:[bx] ;~ 01A2:2DBD
cs=0x1a2;eip=0x002dc0; 	J(JL(loc_12dd7));	// 8439                  jl      short loc_12DD7 ;~ 01A2:2DC0
cs=0x1a2;eip=0x002dc2; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E))));	// 8440                  mov     ax, es:[bx+0Eh] ;~ 01A2:2DC2
cs=0x1a2;eip=0x002dc6; 	T(MOV(si, *(dw*)(raddr(es,bx+0x0C))));	// 8441                  mov     si, es:[bx+0Ch] ;~ 01A2:2DC6
cs=0x1a2;eip=0x002dca; 	X(INC(*(dw*)(raddr(es,bx+0x0C))));	// 8442                  inc     word ptr es:[bx+0Ch] ;~ 01A2:2DCA
cs=0x1a2;eip=0x002dce; 	T(es = ax;);	// 8443                  mov     es, ax ;~ 01A2:2DCE
cs=0x1a2;eip=0x002dd0; 	T(MOV(al, *(raddr(es,si))));	// 8445                  mov     al, es:[si] ;~ 01A2:2DD0
cs=0x1a2;eip=0x002dd3; 	T(ah = 0;);	// 8446                  mov     ah, 0 ;~ 01A2:2DD3
cs=0x1a2;eip=0x002dd5; 	J(JMP(loc_12de4));	// 8447                  jmp     short loc_12DE4 ;~ 01A2:2DD5
loc_12dd7:
	// 4867 
cs=0x1a2;eip=0x002dd7; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 8452                  push    word ptr [bp+stream+2] ;~ 01A2:2DD7
cs=0x1a2;eip=0x002dda; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 8453                  push    word ptr [bp+stream] ; stream ;~ 01A2:2DDA
cs=0x1a2;eip=0x002ddd; 	T(NOP);	// 8454                  nop ;~ 01A2:2DDD
cs=0x1a2;eip=0x002dde; 	X(PUSH(cs));	// 8455                  push    cs ;~ 01A2:2DDE
cs=0x1a2;eip=0x002ddf; 	J(CALL(____fgetc,0));	// 8456                  call    near ptr ____fgetc ;~ 01A2:2DDF
cs=0x1a2;eip=0x002de2; 	X(POP(cx));	// 8458                  pop     cx ;~ 01A2:2DE2
cs=0x1a2;eip=0x002de3; 	X(POP(cx));	// 8459                  pop     cx ;~ 01A2:2DE3
loc_12de4:
	// 4868 
cs=0x1a2;eip=0x002de4; 	T(dx = ax;);	// 8462                  mov     dx, ax ;~ 01A2:2DE4
cs=0x1a2;eip=0x002de6; 	T(CMP(ax, 0x0FFFF));	// 8463                  cmp     ax, 0FFFFh ;~ 01A2:2DE6
cs=0x1a2;eip=0x002de9; 	J(JNZ(loc_12da4));	// 8464                  jnz     short loc_12DA4 ;~ 01A2:2DE9
loc_12deb:
	// 4869 
cs=0x1a2;eip=0x002deb; 	T(CMP(dx, 0x0FFFF));	// 8469                  cmp     dx, 0FFFFh ;~ 01A2:2DEB
cs=0x1a2;eip=0x002dee; 	J(JZ(loc_12d9a));	// 8470                  jz      short loc_12D9A ;~ 01A2:2DEE
loc_12df0:
	// 4870 
cs=0x1a2;eip=0x002df0; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0));	// 8474                  cmp     [bp+arg_4], 0 ;~ 01A2:2DF0
cs=0x1a2;eip=0x002df4; 	J(JZ(loc_12df9));	// 8475                  jz      short loc_12DF9 ;~ 01A2:2DF4
cs=0x1a2;eip=0x002df6; 	J(JMP(loc_12d16));	// 8477                  jmp     loc_12D16 ;~ 01A2:2DF6
loc_12df9:
	// 4871 
cs=0x1a2;eip=0x002df9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 8483                  mov     ax, [bp+arg_4] ;~ 01A2:2DF9
cs=0x1a2;eip=0x002dfc; 	X(POP(di));	// 8484                  pop     di ;~ 01A2:2DFC
cs=0x1a2;eip=0x002dfd; 	X(POP(si));	// 8485                  pop     si ;~ 01A2:2DFD
cs=0x1a2;eip=0x002dfe; 	X(POP(bp));	// 8486                  pop     bp ;~ 01A2:2DFE
cs=0x1a2;eip=0x002dff; 	J(RETN(0x0A));	// 8487                  retn    0Ah ;~ 01A2:2DFF

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_12d16: 	goto loc_12d16;
        case m2c::kloc_12d2a: 	goto loc_12d2a;
        case m2c::kloc_12d31: 	goto loc_12d31;
        case m2c::kloc_12d5b: 	goto loc_12d5b;
        case m2c::kloc_12d69: 	goto loc_12d69;
        case m2c::kloc_12d9a: 	goto loc_12d9a;
        case m2c::kloc_12da4: 	goto loc_12da4;
        case m2c::kloc_12dad: 	goto loc_12dad;
        case m2c::kloc_12dd7: 	goto loc_12dd7;
        case m2c::kloc_12de4: 	goto loc_12de4;
        case m2c::kloc_12deb: 	goto loc_12deb;
        case m2c::kloc_12df0: 	goto loc_12df0;
        case m2c::kloc_12df9: 	goto loc_12df9;
        case m2c::ksub_12d0e: 	goto sub_12d0e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___fread(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___fread:
    _begin:
#undef var_4
#define var_4 -4
	// 8500 var_4           = word ptr -4 ;~ 01A2:2E02
#undef var_2
#define var_2 -2
	// 8501 var_2           = word ptr -2 ;~ 01A2:2E02
#undef ptr1
#define ptr1 6
	// 8502 ptr1            = dword ptr  6 ;~ 01A2:2E02
#undef size1
#define size1 0x0A
	// 8503 size1           = word ptr  0Ah ;~ 01A2:2E02
#undef n
#define n 0x0C
	// 8504 n               = word ptr  0Ch ;~ 01A2:2E02
#undef stream
#define stream 0x0E
	// 8505 stream          = dword ptr  0Eh ;~ 01A2:2E02
cs=0x1a2;eip=0x002e02; 	X(PUSH(bp));	// 8507                  push    bp ;~ 01A2:2E02
cs=0x1a2;eip=0x002e03; 	T(bp = sp;);	// 8508                  mov     bp, sp ;~ 01A2:2E03
cs=0x1a2;eip=0x002e05; 	T(SUB(sp, 4));	// 8509                  sub     sp, 4 ;~ 01A2:2E05
cs=0x1a2;eip=0x002e08; 	X(PUSH(si));	// 8510                  push    si ;~ 01A2:2E08
cs=0x1a2;eip=0x002e09; 	X(PUSH(di));	// 8511                  push    di ;~ 01A2:2E09
cs=0x1a2;eip=0x002e0a; 	T(MOV(di, *(dw*)(raddr(ss,bp+size1))));	// 8512                  mov     di, [bp+size1] ;~ 01A2:2E0A
cs=0x1a2;eip=0x002e0d; 	T(OR(di, di));	// 8513                  or      di, di ;~ 01A2:2E0D
cs=0x1a2;eip=0x002e0f; 	J(JNZ(loc_12e15));	// 8514                  jnz     short loc_12E15 ;~ 01A2:2E0F
cs=0x1a2;eip=0x002e11; 	T(XOR(ax, ax));	// 8515                  xor     ax, ax ;~ 01A2:2E11
cs=0x1a2;eip=0x002e13; 	J(JMP(loc_12e8a));	// 8516                  jmp     short loc_12E8A ;~ 01A2:2E13
loc_12e15:
	// 4872 
cs=0x1a2;eip=0x002e15; 	T(bx = di;);	// 8520                  mov     bx, di ;~ 01A2:2E15
cs=0x1a2;eip=0x002e17; 	T(XOR(cx, cx));	// 8521                  xor     cx, cx ;~ 01A2:2E17
cs=0x1a2;eip=0x002e19; 	T(MOV(ax, *(dw*)(raddr(ss,bp+n))));	// 8522                  mov     ax, [bp+n] ;~ 01A2:2E19
cs=0x1a2;eip=0x002e1c; 	T(XOR(dx, dx));	// 8523                  xor     dx, dx ;~ 01A2:2E1C
cs=0x1a2;eip=0x002e1e; 	J(CALL(__n_lxmularb,0));	// 8524                  call    __N_LXMUL@ ;~ 01A2:2E1E
cs=0x1a2;eip=0x002e21; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 8525                  mov     [bp+var_2], dx ;~ 01A2:2E21
cs=0x1a2;eip=0x002e24; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 8526                  mov     [bp+var_4], ax ;~ 01A2:2E24
cs=0x1a2;eip=0x002e27; 	T(CMP(dx, 1));	// 8527                  cmp     dx, 1 ;~ 01A2:2E27
cs=0x1a2;eip=0x002e2a; 	J(JA(loc_12e51));	// 8528                  ja      short loc_12E51 ;~ 01A2:2E2A
cs=0x1a2;eip=0x002e2c; 	J(JC(loc_12e32));	// 8529                  jb      short loc_12E32 ;~ 01A2:2E2C
cs=0x1a2;eip=0x002e2e; 	T(OR(ax, ax));	// 8530                  or      ax, ax ;~ 01A2:2E2E
cs=0x1a2;eip=0x002e30; 	J(JNC(loc_12e51));	// 8531                  jnb     short loc_12E51 ;~ 01A2:2E30
loc_12e32:
	// 4873 
cs=0x1a2;eip=0x002e32; 	X(PUSH(*(dw*)(raddr(ss,bp+ptr1+2))));	// 8534                  push    word ptr [bp+ptr1+2] ;~ 01A2:2E32
cs=0x1a2;eip=0x002e35; 	X(PUSH(*(dw*)(raddr(ss,bp+ptr1))));	// 8535                  push    word ptr [bp+ptr1] ; buf ;~ 01A2:2E35
cs=0x1a2;eip=0x002e38; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 8536                  push    [bp+var_4]      ; int ;~ 01A2:2E38
cs=0x1a2;eip=0x002e3b; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 8537                  push    word ptr [bp+stream+2] ;~ 01A2:2E3B
cs=0x1a2;eip=0x002e3e; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 8538                  push    word ptr [bp+stream] ; stream ;~ 01A2:2E3E
cs=0x1a2;eip=0x002e41; 	J(CALL(sub_12d0e,0));	// 8539                  call    sub_12D0E ;~ 01A2:2E41
cs=0x1a2;eip=0x002e44; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4))));	// 8541                  mov     dx, [bp+var_4] ;~ 01A2:2E44
cs=0x1a2;eip=0x002e47; 	T(SUB(dx, ax));	// 8542                  sub     dx, ax ;~ 01A2:2E47
cs=0x1a2;eip=0x002e49; 	X(PUSH(dx));	// 8543                  push    dx ;~ 01A2:2E49
cs=0x1a2;eip=0x002e4a; 	T(XOR(dx, dx));	// 8544                  xor     dx, dx ;~ 01A2:2E4A
cs=0x1a2;eip=0x002e4c; 	X(POP(ax));	// 8545                  pop     ax ;~ 01A2:2E4C
cs=0x1a2;eip=0x002e4d; 	T(DIV2(di));	// 8546                  div     di ;~ 01A2:2E4D
cs=0x1a2;eip=0x002e4f; 	J(JMP(loc_12e8a));	// 8547                  jmp     short loc_12E8A ;~ 01A2:2E4F
loc_12e51:
	// 4874 
cs=0x1a2;eip=0x002e51; 	T(MOV(si, *(dw*)(raddr(ss,bp+n))));	// 8552                  mov     si, [bp+n] ;~ 01A2:2E51
cs=0x1a2;eip=0x002e54; 	T(INC(si));	// 8553                  inc     si ;~ 01A2:2E54
cs=0x1a2;eip=0x002e55; 	J(JMP(loc_12e6a));	// 8554                  jmp     short loc_12E6A ;~ 01A2:2E55
loc_12e57:
	// 4875 
cs=0x1a2;eip=0x002e57; 	T(bx = di;);	// 8558                  mov     bx, di ;~ 01A2:2E57
cs=0x1a2;eip=0x002e59; 	T(XOR(cx, cx));	// 8559                  xor     cx, cx ;~ 01A2:2E59
cs=0x1a2;eip=0x002e5b; 	T(MOV(dx, *(dw*)(raddr(ss,bp+ptr1+2))));	// 8560                  mov     dx, word ptr [bp+ptr1+2] ;~ 01A2:2E5B
cs=0x1a2;eip=0x002e5e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+ptr1))));	// 8561                  mov     ax, word ptr [bp+ptr1] ;~ 01A2:2E5E
cs=0x1a2;eip=0x002e61; 	J(CALL(__n_paddarb,0));	// 8562                  call    near ptr __N_PADD@ ;~ 01A2:2E61
cs=0x1a2;eip=0x002e64; 	X(MOV(*(dw*)(raddr(ss,bp+ptr1+2)), dx));	// 8563                  mov     word ptr [bp+ptr1+2], dx ;~ 01A2:2E64
cs=0x1a2;eip=0x002e67; 	X(MOV(*(dw*)(raddr(ss,bp+ptr1)), ax));	// 8564                  mov     word ptr [bp+ptr1], ax ;~ 01A2:2E67
loc_12e6a:
	// 4876 
cs=0x1a2;eip=0x002e6a; 	T(DEC(si));	// 8567                  dec     si ;~ 01A2:2E6A
cs=0x1a2;eip=0x002e6b; 	T(ax = si;);	// 8568                  mov     ax, si ;~ 01A2:2E6B
cs=0x1a2;eip=0x002e6d; 	T(OR(ax, ax));	// 8569                  or      ax, ax ;~ 01A2:2E6D
cs=0x1a2;eip=0x002e6f; 	J(JZ(loc_12e85));	// 8570                  jz      short loc_12E85 ;~ 01A2:2E6F
cs=0x1a2;eip=0x002e71; 	X(PUSH(*(dw*)(raddr(ss,bp+ptr1+2))));	// 8571                  push    word ptr [bp+ptr1+2] ;~ 01A2:2E71
cs=0x1a2;eip=0x002e74; 	X(PUSH(*(dw*)(raddr(ss,bp+ptr1))));	// 8572                  push    word ptr [bp+ptr1] ; buf ;~ 01A2:2E74
cs=0x1a2;eip=0x002e77; 	X(PUSH(di));	// 8573                  push    di              ; int ;~ 01A2:2E77
cs=0x1a2;eip=0x002e78; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 8574                  push    word ptr [bp+stream+2] ;~ 01A2:2E78
cs=0x1a2;eip=0x002e7b; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 8575                  push    word ptr [bp+stream] ; stream ;~ 01A2:2E7B
cs=0x1a2;eip=0x002e7e; 	J(CALL(sub_12d0e,0));	// 8576                  call    sub_12D0E ;~ 01A2:2E7E
cs=0x1a2;eip=0x002e81; 	T(OR(ax, ax));	// 8577                  or      ax, ax ;~ 01A2:2E81
cs=0x1a2;eip=0x002e83; 	J(JZ(loc_12e57));	// 8578                  jz      short loc_12E57 ;~ 01A2:2E83
loc_12e85:
	// 4877 
cs=0x1a2;eip=0x002e85; 	T(MOV(ax, *(dw*)(raddr(ss,bp+n))));	// 8581                  mov     ax, [bp+n] ;~ 01A2:2E85
cs=0x1a2;eip=0x002e88; 	T(SUB(ax, si));	// 8582                  sub     ax, si ;~ 01A2:2E88
loc_12e8a:
	// 4878 
cs=0x1a2;eip=0x002e8a; 	X(POP(di));	// 8586                  pop     di ;~ 01A2:2E8A
cs=0x1a2;eip=0x002e8b; 	X(POP(si));	// 8587                  pop     si ;~ 01A2:2E8B
cs=0x1a2;eip=0x002e8c; 	T(sp = bp;);	// 8588                  mov     sp, bp ;~ 01A2:2E8C
cs=0x1a2;eip=0x002e8e; 	X(POP(bp));	// 8589                  pop     bp ;~ 01A2:2E8E
cs=0x1a2;eip=0x002e8f; 	J(RETF(0));	// 8590                  retf ;~ 01A2:2E8F

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___fread: 	goto ___fread;
        case m2c::kloc_12e15: 	goto loc_12e15;
        case m2c::kloc_12e32: 	goto loc_12e32;
        case m2c::kloc_12e51: 	goto loc_12e51;
        case m2c::kloc_12e57: 	goto loc_12e57;
        case m2c::kloc_12e6a: 	goto loc_12e6a;
        case m2c::kloc_12e85: 	goto loc_12e85;
        case m2c::kloc_12e8a: 	goto loc_12e8a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12e90(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12e90:
    _begin:
#undef var_4
#define var_4 -4
	// 8601 var_4           = dword ptr -4 ;~ 01A2:2E90
#undef arg_0
#define arg_0 4
	// 8602 arg_0           = dword ptr  4 ;~ 01A2:2E90
cs=0x1a2;eip=0x002e90; 	X(PUSH(bp));	// 8604                  push    bp ;~ 01A2:2E90
cs=0x1a2;eip=0x002e91; 	T(bp = sp;);	// 8605                  mov     bp, sp ;~ 01A2:2E91
cs=0x1a2;eip=0x002e93; 	T(SUB(sp, 4));	// 8606                  sub     sp, 4 ;~ 01A2:2E93
cs=0x1a2;eip=0x002e96; 	X(PUSH(si));	// 8607                  push    si ;~ 01A2:2E96
cs=0x1a2;eip=0x002e97; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 8608                  les     bx, [bp+arg_0] ;~ 01A2:2E97
cs=0x1a2;eip=0x002e9a; 	T(CMP(*(dw*)(raddr(es,bx)), 0));	// 8610                  cmp     word ptr es:[bx], 0 ;~ 01A2:2E9A
cs=0x1a2;eip=0x002e9e; 	J(JGE(loc_12eac));	// 8611                  jge     short loc_12EAC ;~ 01A2:2E9E
cs=0x1a2;eip=0x002ea0; 	T(MOV(cx, *(dw*)(raddr(es,bx+6))));	// 8612                  mov     cx, es:[bx+6] ;~ 01A2:2EA0
cs=0x1a2;eip=0x002ea4; 	T(ADD(cx, *(dw*)(raddr(es,bx))));	// 8613                  add     cx, es:[bx] ;~ 01A2:2EA4
cs=0x1a2;eip=0x002ea7; 	T(INC(cx));	// 8614                  inc     cx ;~ 01A2:2EA7
cs=0x1a2;eip=0x002ea8; 	T(si = cx;);	// 8615                  mov     si, cx ;~ 01A2:2EA8
cs=0x1a2;eip=0x002eaa; 	J(JMP(loc_12ebb));	// 8616                  jmp     short loc_12EBB ;~ 01A2:2EAA
loc_12eac:
	// 4879 
cs=0x1a2;eip=0x002eac; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 8620                  les     bx, [bp+arg_0] ;~ 01A2:2EAC
cs=0x1a2;eip=0x002eaf; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 8621                  mov     ax, es:[bx] ;~ 01A2:2EAF
cs=0x1a2;eip=0x002eb2; 	T(CWD);	// 8622                  cwd ;~ 01A2:2EB2
cs=0x1a2;eip=0x002eb3; 	T(XOR(ax, dx));	// 8623                  xor     ax, dx ;~ 01A2:2EB3
cs=0x1a2;eip=0x002eb5; 	T(SUB(ax, dx));	// 8624                  sub     ax, dx ;~ 01A2:2EB5
cs=0x1a2;eip=0x002eb7; 	T(cx = ax;);	// 8625                  mov     cx, ax ;~ 01A2:2EB7
cs=0x1a2;eip=0x002eb9; 	T(si = ax;);	// 8626                  mov     si, ax ;~ 01A2:2EB9
loc_12ebb:
	// 4880 
cs=0x1a2;eip=0x002ebb; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 8629                  les     bx, [bp+arg_0] ;~ 01A2:2EBB
cs=0x1a2;eip=0x002ebe; 	T(TEST(*(dw*)(raddr(es,bx+2)), 0x40));	// 8630                  test    word ptr es:[bx+2], 40h ;~ 01A2:2EBE
cs=0x1a2;eip=0x002ec4; 	J(JNZ(loc_12f09));	// 8631                  jnz     short loc_12F09 ;~ 01A2:2EC4
cs=0x1a2;eip=0x002ec6; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 8632                  les     bx, [bp+arg_0] ;~ 01A2:2EC6
cs=0x1a2;eip=0x002ec9; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E))));	// 8633                  mov     ax, es:[bx+0Eh] ;~ 01A2:2EC9
cs=0x1a2;eip=0x002ecd; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C))));	// 8634                  mov     dx, es:[bx+0Ch] ;~ 01A2:2ECD
cs=0x1a2;eip=0x002ed1; 	X(MOV(*(dw*)(raddr(ss,bp+var_4+2)), ax));	// 8635                  mov     word ptr [bp+var_4+2], ax ;~ 01A2:2ED1
cs=0x1a2;eip=0x002ed4; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 8636                  mov     word ptr [bp+var_4], dx ;~ 01A2:2ED4
cs=0x1a2;eip=0x002ed7; 	T(CMP(*(dw*)(raddr(es,bx)), 0));	// 8637                  cmp     word ptr es:[bx], 0 ;~ 01A2:2ED7
cs=0x1a2;eip=0x002edb; 	J(JGE(loc_12f02));	// 8638                  jge     short loc_12F02 ;~ 01A2:2EDB
cs=0x1a2;eip=0x002edd; 	J(JMP(loc_12eec));	// 8639                  jmp     short loc_12EEC ;~ 01A2:2EDD
loc_12edf:
	// 4881 
cs=0x1a2;eip=0x002edf; 	X(DEC(*(dw*)(raddr(ss,bp+var_4))));	// 8643                  dec     word ptr [bp+var_4] ;~ 01A2:2EDF
cs=0x1a2;eip=0x002ee2; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 8644                  les     bx, [bp+var_4] ;~ 01A2:2EE2
cs=0x1a2;eip=0x002ee5; 	T(CMP(*(raddr(es,bx)), 0x0A));	// 8645                  cmp     byte ptr es:[bx], 0Ah ;~ 01A2:2EE5
cs=0x1a2;eip=0x002ee9; 	J(JNZ(loc_12eec));	// 8646                  jnz     short loc_12EEC ;~ 01A2:2EE9
cs=0x1a2;eip=0x002eeb; 	T(INC(si));	// 8647                  inc     si ;~ 01A2:2EEB
loc_12eec:
	// 4882 
cs=0x1a2;eip=0x002eec; 	T(ax = cx;);	// 8651                  mov     ax, cx ;~ 01A2:2EEC
cs=0x1a2;eip=0x002eee; 	T(DEC(cx));	// 8652                  dec     cx ;~ 01A2:2EEE
cs=0x1a2;eip=0x002eef; 	T(OR(ax, ax));	// 8653                  or      ax, ax ;~ 01A2:2EEF
cs=0x1a2;eip=0x002ef1; 	J(JNZ(loc_12edf));	// 8654                  jnz     short loc_12EDF ;~ 01A2:2EF1
cs=0x1a2;eip=0x002ef3; 	J(JMP(loc_12f09));	// 8655                  jmp     short loc_12F09 ;~ 01A2:2EF3
loc_12ef5:
	// 4883 
cs=0x1a2;eip=0x002ef5; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 8659                  les     bx, [bp+var_4] ;~ 01A2:2EF5
cs=0x1a2;eip=0x002ef8; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 8660                  inc     word ptr [bp+var_4] ;~ 01A2:2EF8
cs=0x1a2;eip=0x002efb; 	T(CMP(*(raddr(es,bx)), 0x0A));	// 8661                  cmp     byte ptr es:[bx], 0Ah ;~ 01A2:2EFB
cs=0x1a2;eip=0x002eff; 	J(JNZ(loc_12f02));	// 8662                  jnz     short loc_12F02 ;~ 01A2:2EFF
cs=0x1a2;eip=0x002f01; 	T(INC(si));	// 8663                  inc     si ;~ 01A2:2F01
loc_12f02:
	// 4884 
cs=0x1a2;eip=0x002f02; 	T(ax = cx;);	// 8667                  mov     ax, cx ;~ 01A2:2F02
cs=0x1a2;eip=0x002f04; 	T(DEC(cx));	// 8668                  dec     cx ;~ 01A2:2F04
cs=0x1a2;eip=0x002f05; 	T(OR(ax, ax));	// 8669                  or      ax, ax ;~ 01A2:2F05
cs=0x1a2;eip=0x002f07; 	J(JNZ(loc_12ef5));	// 8670                  jnz     short loc_12EF5 ;~ 01A2:2F07
loc_12f09:
	// 4885 
cs=0x1a2;eip=0x002f09; 	T(ax = si;);	// 8674                  mov     ax, si ;~ 01A2:2F09
cs=0x1a2;eip=0x002f0b; 	X(POP(si));	// 8675                  pop     si ;~ 01A2:2F0B
cs=0x1a2;eip=0x002f0c; 	T(sp = bp;);	// 8676                  mov     sp, bp ;~ 01A2:2F0C
cs=0x1a2;eip=0x002f0e; 	X(POP(bp));	// 8677                  pop     bp ;~ 01A2:2F0E
cs=0x1a2;eip=0x002f0f; 	J(RETN(4));	// 8678                  retn    4 ;~ 01A2:2F0F

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_12eac: 	goto loc_12eac;
        case m2c::kloc_12ebb: 	goto loc_12ebb;
        case m2c::kloc_12edf: 	goto loc_12edf;
        case m2c::kloc_12eec: 	goto loc_12eec;
        case m2c::kloc_12ef5: 	goto loc_12ef5;
        case m2c::kloc_12f02: 	goto loc_12f02;
        case m2c::kloc_12f09: 	goto loc_12f09;
        case m2c::ksub_12e90: 	goto sub_12e90;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___fseek(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___fseek:
    _begin:
#undef stream
#define stream 6
	// 8690 stream          = dword ptr  6 ;~ 01A2:2F12
#undef offset1
#define offset1 0x0A
	// 8691 offset1         = dword ptr  0Ah ;~ 01A2:2F12
#undef fromwhere
#define fromwhere 0x0E
	// 8692 fromwhere       = word ptr  0Eh ;~ 01A2:2F12
cs=0x1a2;eip=0x002f12; 	X(PUSH(bp));	// 8694                  push    bp ;~ 01A2:2F12
cs=0x1a2;eip=0x002f13; 	T(bp = sp;);	// 8695                  mov     bp, sp ;~ 01A2:2F13
cs=0x1a2;eip=0x002f15; 	X(PUSH(si));	// 8696                  push    si ;~ 01A2:2F15
cs=0x1a2;eip=0x002f16; 	T(MOV(si, *(dw*)(raddr(ss,bp+fromwhere))));	// 8697                  mov     si, [bp+fromwhere] ;~ 01A2:2F16
cs=0x1a2;eip=0x002f19; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 8698                  push    word ptr [bp+stream+2] ;~ 01A2:2F19
cs=0x1a2;eip=0x002f1c; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 8699                  push    word ptr [bp+stream] ; stream ;~ 01A2:2F1C
cs=0x1a2;eip=0x002f1f; 	T(NOP);	// 8700                  nop ;~ 01A2:2F1F
cs=0x1a2;eip=0x002f20; 	X(PUSH(cs));	// 8701                  push    cs ;~ 01A2:2F20
cs=0x1a2;eip=0x002f21; 	J(CALL(___fflush,0));	// 8702                  call    near ptr ___fflush ;~ 01A2:2F21
cs=0x1a2;eip=0x002f24; 	X(POP(cx));	// 8703                  pop     cx ;~ 01A2:2F24
cs=0x1a2;eip=0x002f25; 	X(POP(cx));	// 8704                  pop     cx ;~ 01A2:2F25
cs=0x1a2;eip=0x002f26; 	T(OR(ax, ax));	// 8705                  or      ax, ax ;~ 01A2:2F26
cs=0x1a2;eip=0x002f28; 	J(JZ(loc_12f2f));	// 8706                  jz      short loc_12F2F ;~ 01A2:2F28
cs=0x1a2;eip=0x002f2a; 	T(ax = 0x0FFFF;);	// 8707                  mov     ax, 0FFFFh ;~ 01A2:2F2A
cs=0x1a2;eip=0x002f2d; 	J(JMP(loc_12f8f));	// 8708                  jmp     short loc_12F8F ;~ 01A2:2F2D
loc_12f2f:
	// 4886 
cs=0x1a2;eip=0x002f2f; 	T(CMP(si, 1));	// 8712                  cmp     si, 1 ;~ 01A2:2F2F
cs=0x1a2;eip=0x002f32; 	J(JNZ(loc_12f4b));	// 8713                  jnz     short loc_12F4B ;~ 01A2:2F32
cs=0x1a2;eip=0x002f34; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 8714                  les     bx, [bp+stream] ;~ 01A2:2F34
cs=0x1a2;eip=0x002f37; 	T(CMP(*(dw*)(raddr(es,bx)), 0));	// 8715                  cmp     word ptr es:[bx], 0 ;~ 01A2:2F37
cs=0x1a2;eip=0x002f3b; 	J(JLE(loc_12f4b));	// 8716                  jle     short loc_12F4B ;~ 01A2:2F3B
cs=0x1a2;eip=0x002f3d; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 8717                  push    word ptr [bp+stream+2] ;~ 01A2:2F3D
cs=0x1a2;eip=0x002f40; 	X(PUSH(bx));	// 8718                  push    bx ;~ 01A2:2F40
cs=0x1a2;eip=0x002f41; 	J(CALL(sub_12e90,0));	// 8719                  call    sub_12E90 ;~ 01A2:2F41
cs=0x1a2;eip=0x002f44; 	T(CWD);	// 8720                  cwd ;~ 01A2:2F44
cs=0x1a2;eip=0x002f45; 	X(SUB(*(dw*)(raddr(ss,bp+offset1)), ax));	// 8721                  sub     word ptr [bp+offset1], ax ;~ 01A2:2F45
cs=0x1a2;eip=0x002f48; 	X(SBB(*(dw*)(raddr(ss,bp+offset1+2)), dx));	// 8722                  sbb     word ptr [bp+offset1+2], dx ;~ 01A2:2F48
loc_12f4b:
	// 4887 
cs=0x1a2;eip=0x002f4b; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 8726                  les     bx, [bp+stream] ;~ 01A2:2F4B
cs=0x1a2;eip=0x002f4e; 	X(AND(*(dw*)(raddr(es,bx+2)), 0x0FE5F));	// 8727                  and     word ptr es:[bx+2], 0FE5Fh ;~ 01A2:2F4E
cs=0x1a2;eip=0x002f54; 	X(MOV(*(dw*)(raddr(es,bx)), 0));	// 8728                  mov     word ptr es:[bx], 0 ;~ 01A2:2F54
cs=0x1a2;eip=0x002f59; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 8729                  mov     ax, es:[bx+0Ah] ;~ 01A2:2F59
cs=0x1a2;eip=0x002f5d; 	T(MOV(dx, *(dw*)(raddr(es,bx+8))));	// 8730                  mov     dx, es:[bx+8] ;~ 01A2:2F5D
cs=0x1a2;eip=0x002f61; 	X(MOV(*(dw*)(raddr(es,bx+0x0E)), ax));	// 8731                  mov     es:[bx+0Eh], ax ;~ 01A2:2F61
cs=0x1a2;eip=0x002f65; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 8732                  mov     es:[bx+0Ch], dx ;~ 01A2:2F65
cs=0x1a2;eip=0x002f69; 	X(PUSH(si));	// 8733                  push    si              ; fromwhere ;~ 01A2:2F69
cs=0x1a2;eip=0x002f6a; 	X(PUSH(*(dw*)(raddr(ss,bp+offset1+2))));	// 8734                  push    word ptr [bp+offset1+2] ;~ 01A2:2F6A
cs=0x1a2;eip=0x002f6d; 	X(PUSH(*(dw*)(raddr(ss,bp+offset1))));	// 8735                  push    word ptr [bp+offset1] ; offset ;~ 01A2:2F6D
cs=0x1a2;eip=0x002f70; 	T(MOV(al, *(raddr(es,bx+4))));	// 8736                  mov     al, es:[bx+4] ;~ 01A2:2F70
cs=0x1a2;eip=0x002f74; 	T(CBW);	// 8737                  cbw ;~ 01A2:2F74
cs=0x1a2;eip=0x002f75; 	X(PUSH(ax));	// 8738                  push    ax              ; handle ;~ 01A2:2F75
cs=0x1a2;eip=0x002f76; 	T(NOP);	// 8739                  nop ;~ 01A2:2F76
cs=0x1a2;eip=0x002f77; 	X(PUSH(cs));	// 8740                  push    cs ;~ 01A2:2F77
cs=0x1a2;eip=0x002f78; 	J(CALL(___lseek,0));	// 8741                  call    near ptr ___lseek ;~ 01A2:2F78
cs=0x1a2;eip=0x002f7b; 	T(ADD(sp, 8));	// 8742                  add     sp, 8 ;~ 01A2:2F7B
cs=0x1a2;eip=0x002f7e; 	T(CMP(dx, 0x0FFFF));	// 8743                  cmp     dx, 0FFFFh ;~ 01A2:2F7E
cs=0x1a2;eip=0x002f81; 	J(JNZ(loc_12f8d));	// 8744                  jnz     short loc_12F8D ;~ 01A2:2F81
cs=0x1a2;eip=0x002f83; 	T(CMP(ax, 0x0FFFF));	// 8745                  cmp     ax, 0FFFFh ;~ 01A2:2F83
cs=0x1a2;eip=0x002f86; 	J(JNZ(loc_12f8d));	// 8746                  jnz     short loc_12F8D ;~ 01A2:2F86
cs=0x1a2;eip=0x002f88; 	T(ax = 0x0FFFF;);	// 8747                  mov     ax, 0FFFFh ;~ 01A2:2F88
cs=0x1a2;eip=0x002f8b; 	J(JMP(loc_12f8f));	// 8748                  jmp     short loc_12F8F ;~ 01A2:2F8B
loc_12f8d:
	// 4888 
cs=0x1a2;eip=0x002f8d; 	T(XOR(ax, ax));	// 8753                  xor     ax, ax ;~ 01A2:2F8D
loc_12f8f:
	// 4889 
cs=0x1a2;eip=0x002f8f; 	X(POP(si));	// 8757                  pop     si ;~ 01A2:2F8F
cs=0x1a2;eip=0x002f90; 	X(POP(bp));	// 8758                  pop     bp ;~ 01A2:2F90
cs=0x1a2;eip=0x002f91; 	J(RETF(0));	// 8759                  retf ;~ 01A2:2F91

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___fseek: 	goto ___fseek;
        case m2c::kloc_12f2f: 	goto loc_12f2f;
        case m2c::kloc_12f4b: 	goto loc_12f4b;
        case m2c::kloc_12f8d: 	goto loc_12f8d;
        case m2c::kloc_12f8f: 	goto loc_12f8f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___ftell(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___ftell:
    _begin:
#undef var_8
#define var_8 -8
	// 8770 var_8           = word ptr -8 ;~ 01A2:2F92
#undef var_6
#define var_6 -6
	// 8771 var_6           = word ptr -6 ;~ 01A2:2F92
#undef offset1
#define offset1 -4
	// 8772 offset1         = dword ptr -4 ;~ 01A2:2F92
#undef stream
#define stream 6
	// 8773 stream          = dword ptr  6 ;~ 01A2:2F92
cs=0x1a2;eip=0x002f92; 	X(PUSH(bp));	// 8775                  push    bp ;~ 01A2:2F92
cs=0x1a2;eip=0x002f93; 	T(bp = sp;);	// 8776                  mov     bp, sp ;~ 01A2:2F93
cs=0x1a2;eip=0x002f95; 	T(SUB(sp, 8));	// 8777                  sub     sp, 8 ;~ 01A2:2F95
cs=0x1a2;eip=0x002f98; 	T(ax = 1;);	// 8778                  mov     ax, 1 ;~ 01A2:2F98
cs=0x1a2;eip=0x002f9b; 	X(PUSH(ax));	// 8779                  push    ax              ; fromwhere ;~ 01A2:2F9B
cs=0x1a2;eip=0x002f9c; 	T(XOR(ax, ax));	// 8780                  xor     ax, ax ;~ 01A2:2F9C
cs=0x1a2;eip=0x002f9e; 	T(XOR(dx, dx));	// 8781                  xor     dx, dx ;~ 01A2:2F9E
cs=0x1a2;eip=0x002fa0; 	X(PUSH(ax));	// 8782                  push    ax ;~ 01A2:2FA0
cs=0x1a2;eip=0x002fa1; 	X(PUSH(dx));	// 8783                  push    dx              ; offset ;~ 01A2:2FA1
cs=0x1a2;eip=0x002fa2; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 8784                  les     bx, [bp+stream] ;~ 01A2:2FA2
cs=0x1a2;eip=0x002fa5; 	T(MOV(al, *(raddr(es,bx+4))));	// 8785                  mov     al, es:[bx+4] ;~ 01A2:2FA5
cs=0x1a2;eip=0x002fa9; 	T(CBW);	// 8786                  cbw ;~ 01A2:2FA9
cs=0x1a2;eip=0x002faa; 	X(PUSH(ax));	// 8787                  push    ax              ; handle ;~ 01A2:2FAA
cs=0x1a2;eip=0x002fab; 	T(NOP);	// 8788                  nop ;~ 01A2:2FAB
cs=0x1a2;eip=0x002fac; 	X(PUSH(cs));	// 8789                  push    cs ;~ 01A2:2FAC
cs=0x1a2;eip=0x002fad; 	J(CALL(___lseek,0));	// 8790                  call    near ptr ___lseek ;~ 01A2:2FAD
cs=0x1a2;eip=0x002fb0; 	T(ADD(sp, 8));	// 8791                  add     sp, 8 ;~ 01A2:2FB0
cs=0x1a2;eip=0x002fb3; 	X(MOV(*(dw*)(raddr(ss,bp+offset1+2)), dx));	// 8792                  mov     word ptr [bp+offset1+2], dx ;~ 01A2:2FB3
cs=0x1a2;eip=0x002fb6; 	X(MOV(*(dw*)(raddr(ss,bp+offset1)), ax));	// 8793                  mov     word ptr [bp+offset1], ax ;~ 01A2:2FB6
cs=0x1a2;eip=0x002fb9; 	T(CMP(dx, 0x0FFFF));	// 8794                  cmp     dx, 0FFFFh ;~ 01A2:2FB9
cs=0x1a2;eip=0x002fbc; 	J(JNZ(loc_12fc6));	// 8795                  jnz     short loc_12FC6 ;~ 01A2:2FBC
cs=0x1a2;eip=0x002fbe; 	T(CMP(ax, 0x0FFFF));	// 8796                  cmp     ax, 0FFFFh ;~ 01A2:2FBE
cs=0x1a2;eip=0x002fc1; 	J(JNZ(loc_12fc6));	// 8797                  jnz     short loc_12FC6 ;~ 01A2:2FC1
cs=0x1a2;eip=0x002fc3; 	J(JMP(loc_13068));	// 8798                  jmp     loc_13068 ;~ 01A2:2FC3
loc_12fc6:
	// 4890 
cs=0x1a2;eip=0x002fc6; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 8803                  les     bx, [bp+stream] ;~ 01A2:2FC6
cs=0x1a2;eip=0x002fc9; 	T(CMP(*(dw*)(raddr(es,bx)), 0));	// 8804                  cmp     word ptr es:[bx], 0 ;~ 01A2:2FC9
cs=0x1a2;eip=0x002fcd; 	J(JL(loc_12fd2));	// 8805                  jl      short loc_12FD2 ;~ 01A2:2FCD
cs=0x1a2;eip=0x002fcf; 	J(JMP(loc_13058));	// 8806                  jmp     loc_13058 ;~ 01A2:2FCF
loc_12fd2:
	// 4891 
cs=0x1a2;eip=0x002fd2; 	T(MOV(al, *(raddr(es,bx+4))));	// 8810                  mov     al, es:[bx+4] ;~ 01A2:2FD2
cs=0x1a2;eip=0x002fd6; 	T(CBW);	// 8811                  cbw ;~ 01A2:2FD6
cs=0x1a2;eip=0x002fd7; 	T(SHL(ax, 1));	// 8812                  shl     ax, 1 ;~ 01A2:2FD7
cs=0x1a2;eip=0x002fd9; 	T(bx = ax;);	// 8813                  mov     bx, ax ;~ 01A2:2FD9
cs=0x1a2;eip=0x002fdb; 	T(TEST(*(dw*)(raddr(ds,bx+0x862)), 0x800));	// 8814                  test    word ptr [bx+862h], 800h ;~ 01A2:2FDB
cs=0x1a2;eip=0x002fe1; 	J(JZ(loc_13046));	// 8815                  jz      short loc_13046 ;~ 01A2:2FE1
cs=0x1a2;eip=0x002fe3; 	T(ax = 2;);	// 8816                  mov     ax, 2 ;~ 01A2:2FE3
cs=0x1a2;eip=0x002fe6; 	X(PUSH(ax));	// 8817                  push    ax              ; fromwhere ;~ 01A2:2FE6
cs=0x1a2;eip=0x002fe7; 	T(XOR(ax, ax));	// 8818                  xor     ax, ax ;~ 01A2:2FE7
cs=0x1a2;eip=0x002fe9; 	T(XOR(dx, dx));	// 8819                  xor     dx, dx ;~ 01A2:2FE9
cs=0x1a2;eip=0x002feb; 	X(PUSH(ax));	// 8820                  push    ax ;~ 01A2:2FEB
cs=0x1a2;eip=0x002fec; 	X(PUSH(dx));	// 8821                  push    dx              ; offset ;~ 01A2:2FEC
cs=0x1a2;eip=0x002fed; 	T(MOV(bx, *(dw*)(raddr(ss,bp+stream))));	// 8822                  mov     bx, word ptr [bp+stream] ;~ 01A2:2FED
cs=0x1a2;eip=0x002ff0; 	T(MOV(al, *(raddr(es,bx+4))));	// 8823                  mov     al, es:[bx+4] ;~ 01A2:2FF0
cs=0x1a2;eip=0x002ff4; 	T(CBW);	// 8824                  cbw ;~ 01A2:2FF4
cs=0x1a2;eip=0x002ff5; 	X(PUSH(ax));	// 8825                  push    ax              ; handle ;~ 01A2:2FF5
cs=0x1a2;eip=0x002ff6; 	T(NOP);	// 8826                  nop ;~ 01A2:2FF6
cs=0x1a2;eip=0x002ff7; 	X(PUSH(cs));	// 8827                  push    cs ;~ 01A2:2FF7
cs=0x1a2;eip=0x002ff8; 	J(CALL(___lseek,0));	// 8828                  call    near ptr ___lseek ;~ 01A2:2FF8
cs=0x1a2;eip=0x002ffb; 	T(ADD(sp, 8));	// 8829                  add     sp, 8 ;~ 01A2:2FFB
cs=0x1a2;eip=0x002ffe; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 8830                  mov     [bp+var_6], dx ;~ 01A2:2FFE
cs=0x1a2;eip=0x003001; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 8831                  mov     [bp+var_8], ax ;~ 01A2:3001
cs=0x1a2;eip=0x003004; 	T(CMP(dx, 0x0FFFF));	// 8832                  cmp     dx, 0FFFFh ;~ 01A2:3004
cs=0x1a2;eip=0x003007; 	J(JNZ(loc_1300e));	// 8833                  jnz     short loc_1300E ;~ 01A2:3007
cs=0x1a2;eip=0x003009; 	T(CMP(ax, 0x0FFFF));	// 8834                  cmp     ax, 0FFFFh ;~ 01A2:3009
cs=0x1a2;eip=0x00300c; 	J(JZ(loc_1306e));	// 8835                  jz      short loc_1306E ;~ 01A2:300C
loc_1300e:
	// 4892 
cs=0x1a2;eip=0x00300e; 	T(XOR(ax, ax));	// 8838                  xor     ax, ax ;~ 01A2:300E
cs=0x1a2;eip=0x003010; 	X(PUSH(ax));	// 8839                  push    ax              ; fromwhere ;~ 01A2:3010
cs=0x1a2;eip=0x003011; 	X(PUSH(*(dw*)(raddr(ss,bp+offset1+2))));	// 8840                  push    word ptr [bp+offset1+2] ;~ 01A2:3011
cs=0x1a2;eip=0x003014; 	X(PUSH(*(dw*)(raddr(ss,bp+offset1))));	// 8841                  push    word ptr [bp+offset1] ; offset ;~ 01A2:3014
cs=0x1a2;eip=0x003017; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 8842                  les     bx, [bp+stream] ;~ 01A2:3017
cs=0x1a2;eip=0x00301a; 	T(MOV(al, *(raddr(es,bx+4))));	// 8843                  mov     al, es:[bx+4] ;~ 01A2:301A
cs=0x1a2;eip=0x00301e; 	T(CBW);	// 8844                  cbw ;~ 01A2:301E
cs=0x1a2;eip=0x00301f; 	X(PUSH(ax));	// 8845                  push    ax              ; handle ;~ 01A2:301F
cs=0x1a2;eip=0x003020; 	T(NOP);	// 8846                  nop ;~ 01A2:3020
cs=0x1a2;eip=0x003021; 	X(PUSH(cs));	// 8847                  push    cs ;~ 01A2:3021
cs=0x1a2;eip=0x003022; 	J(CALL(___lseek,0));	// 8848                  call    near ptr ___lseek ;~ 01A2:3022
cs=0x1a2;eip=0x003025; 	T(ADD(sp, 8));	// 8849                  add     sp, 8 ;~ 01A2:3025
cs=0x1a2;eip=0x003028; 	T(CMP(dx, 0x0FFFF));	// 8850                  cmp     dx, 0FFFFh ;~ 01A2:3028
cs=0x1a2;eip=0x00302b; 	J(JNZ(loc_1303a));	// 8851                  jnz     short loc_1303A ;~ 01A2:302B
cs=0x1a2;eip=0x00302d; 	T(CMP(ax, 0x0FFFF));	// 8852                  cmp     ax, 0FFFFh ;~ 01A2:302D
cs=0x1a2;eip=0x003030; 	J(JNZ(loc_1303a));	// 8853                  jnz     short loc_1303A ;~ 01A2:3030
cs=0x1a2;eip=0x003032; 	T(dx = 0x0FFFF;);	// 8854                  mov     dx, 0FFFFh ;~ 01A2:3032
cs=0x1a2;eip=0x003035; 	T(ax = 0x0FFFF;);	// 8855                  mov     ax, 0FFFFh ;~ 01A2:3035
cs=0x1a2;eip=0x003038; 	J(JMP(loc_1306e));	// 8856                  jmp     short loc_1306E ;~ 01A2:3038
loc_1303a:
	// 4893 
cs=0x1a2;eip=0x00303a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 8861                  mov     ax, [bp+var_6] ;~ 01A2:303A
cs=0x1a2;eip=0x00303d; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_8))));	// 8862                  mov     dx, [bp+var_8] ;~ 01A2:303D
cs=0x1a2;eip=0x003040; 	X(MOV(*(dw*)(raddr(ss,bp+offset1+2)), ax));	// 8863                  mov     word ptr [bp+offset1+2], ax ;~ 01A2:3040
cs=0x1a2;eip=0x003043; 	X(MOV(*(dw*)(raddr(ss,bp+offset1)), dx));	// 8864                  mov     word ptr [bp+offset1], dx ;~ 01A2:3043
loc_13046:
	// 4894 
cs=0x1a2;eip=0x003046; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 8867                  push    word ptr [bp+stream+2] ;~ 01A2:3046
cs=0x1a2;eip=0x003049; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 8868                  push    word ptr [bp+stream] ;~ 01A2:3049
cs=0x1a2;eip=0x00304c; 	J(CALL(sub_12e90,0));	// 8869                  call    sub_12E90 ;~ 01A2:304C
cs=0x1a2;eip=0x00304f; 	T(CWD);	// 8870                  cwd ;~ 01A2:304F
cs=0x1a2;eip=0x003050; 	X(ADD(*(dw*)(raddr(ss,bp+offset1)), ax));	// 8871                  add     word ptr [bp+offset1], ax ;~ 01A2:3050
cs=0x1a2;eip=0x003053; 	X(ADC(*(dw*)(raddr(ss,bp+offset1+2)), dx));	// 8872                  adc     word ptr [bp+offset1+2], dx ;~ 01A2:3053
cs=0x1a2;eip=0x003056; 	J(JMP(loc_13068));	// 8873                  jmp     short loc_13068 ;~ 01A2:3056
loc_13058:
	// 4895 
cs=0x1a2;eip=0x003058; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 8877                  push    word ptr [bp+stream+2] ;~ 01A2:3058
cs=0x1a2;eip=0x00305b; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 8878                  push    word ptr [bp+stream] ;~ 01A2:305B
cs=0x1a2;eip=0x00305e; 	J(CALL(sub_12e90,0));	// 8879                  call    sub_12E90 ;~ 01A2:305E
cs=0x1a2;eip=0x003061; 	T(CWD);	// 8880                  cwd ;~ 01A2:3061
cs=0x1a2;eip=0x003062; 	X(SUB(*(dw*)(raddr(ss,bp+offset1)), ax));	// 8881                  sub     word ptr [bp+offset1], ax ;~ 01A2:3062
cs=0x1a2;eip=0x003065; 	X(SBB(*(dw*)(raddr(ss,bp+offset1+2)), dx));	// 8882                  sbb     word ptr [bp+offset1+2], dx ;~ 01A2:3065
loc_13068:
	// 4896 
cs=0x1a2;eip=0x003068; 	T(MOV(dx, *(dw*)(raddr(ss,bp+offset1+2))));	// 8886                  mov     dx, word ptr [bp+offset1+2] ;~ 01A2:3068
cs=0x1a2;eip=0x00306b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+offset1))));	// 8887                  mov     ax, word ptr [bp+offset1] ;~ 01A2:306B
loc_1306e:
	// 4897 
cs=0x1a2;eip=0x00306e; 	T(sp = bp;);	// 8891                  mov     sp, bp ;~ 01A2:306E
cs=0x1a2;eip=0x003070; 	X(POP(bp));	// 8892                  pop     bp ;~ 01A2:3070
cs=0x1a2;eip=0x003071; 	J(RETF(0));	// 8893                  retf ;~ 01A2:3071

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___ftell: 	goto ___ftell;
        case m2c::kloc_12fc6: 	goto loc_12fc6;
        case m2c::kloc_12fd2: 	goto loc_12fd2;
        case m2c::kloc_1300e: 	goto loc_1300e;
        case m2c::kloc_1303a: 	goto loc_1303a;
        case m2c::kloc_13046: 	goto loc_13046;
        case m2c::kloc_13058: 	goto loc_13058;
        case m2c::kloc_13068: 	goto loc_13068;
        case m2c::kloc_1306e: 	goto loc_1306e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___fwrite(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___fwrite:
    _begin:
#undef var_4
#define var_4 -4
	// 8904 var_4           = word ptr -4 ;~ 01A2:3072
#undef var_2
#define var_2 -2
	// 8905 var_2           = word ptr -2 ;~ 01A2:3072
#undef ptr1
#define ptr1 6
	// 8906 ptr1            = dword ptr  6 ;~ 01A2:3072
#undef size1
#define size1 0x0A
	// 8907 size1           = word ptr  0Ah ;~ 01A2:3072
#undef n
#define n 0x0C
	// 8908 n               = word ptr  0Ch ;~ 01A2:3072
#undef stream
#define stream 0x0E
	// 8909 stream          = dword ptr  0Eh ;~ 01A2:3072
cs=0x1a2;eip=0x003072; 	X(PUSH(bp));	// 8911                  push    bp ;~ 01A2:3072
cs=0x1a2;eip=0x003073; 	T(bp = sp;);	// 8912                  mov     bp, sp ;~ 01A2:3073
cs=0x1a2;eip=0x003075; 	T(SUB(sp, 4));	// 8913                  sub     sp, 4 ;~ 01A2:3075
cs=0x1a2;eip=0x003078; 	X(PUSH(si));	// 8914                  push    si ;~ 01A2:3078
cs=0x1a2;eip=0x003079; 	X(PUSH(di));	// 8915                  push    di ;~ 01A2:3079
cs=0x1a2;eip=0x00307a; 	T(MOV(di, *(dw*)(raddr(ss,bp+size1))));	// 8916                  mov     di, [bp+size1] ;~ 01A2:307A
cs=0x1a2;eip=0x00307d; 	T(OR(di, di));	// 8917                  or      di, di ;~ 01A2:307D
cs=0x1a2;eip=0x00307f; 	J(JZ(loc_130f4));	// 8918                  jz      short loc_130F4 ;~ 01A2:307F
cs=0x1a2;eip=0x003081; 	T(bx = di;);	// 8919                  mov     bx, di ;~ 01A2:3081
cs=0x1a2;eip=0x003083; 	T(XOR(cx, cx));	// 8920                  xor     cx, cx ;~ 01A2:3083
cs=0x1a2;eip=0x003085; 	T(MOV(ax, *(dw*)(raddr(ss,bp+n))));	// 8921                  mov     ax, [bp+n] ;~ 01A2:3085
cs=0x1a2;eip=0x003088; 	T(XOR(dx, dx));	// 8922                  xor     dx, dx ;~ 01A2:3088
cs=0x1a2;eip=0x00308a; 	J(CALL(__n_lxmularb,0));	// 8923                  call    __N_LXMUL@ ;~ 01A2:308A
cs=0x1a2;eip=0x00308d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 8924                  mov     [bp+var_2], dx ;~ 01A2:308D
cs=0x1a2;eip=0x003090; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 8925                  mov     [bp+var_4], ax ;~ 01A2:3090
cs=0x1a2;eip=0x003093; 	T(CMP(dx, 1));	// 8926                  cmp     dx, 1 ;~ 01A2:3093
cs=0x1a2;eip=0x003096; 	J(JA(loc_130b6));	// 8927                  ja      short loc_130B6 ;~ 01A2:3096
cs=0x1a2;eip=0x003098; 	J(JC(loc_1309e));	// 8928                  jb      short loc_1309E ;~ 01A2:3098
cs=0x1a2;eip=0x00309a; 	T(OR(ax, ax));	// 8929                  or      ax, ax ;~ 01A2:309A
cs=0x1a2;eip=0x00309c; 	J(JNC(loc_130b6));	// 8930                  jnb     short loc_130B6 ;~ 01A2:309C
loc_1309e:
	// 4898 
cs=0x1a2;eip=0x00309e; 	X(PUSH(*(dw*)(raddr(ss,bp+ptr1+2))));	// 8933                  push    word ptr [bp+ptr1+2] ;~ 01A2:309E
cs=0x1a2;eip=0x0030a1; 	X(PUSH(*(dw*)(raddr(ss,bp+ptr1))));	// 8934                  push    word ptr [bp+ptr1] ; src ;~ 01A2:30A1
cs=0x1a2;eip=0x0030a4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 8935                  push    [bp+var_4]      ; n ;~ 01A2:30A4
cs=0x1a2;eip=0x0030a7; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 8936                  push    word ptr [bp+stream+2] ;~ 01A2:30A7
cs=0x1a2;eip=0x0030aa; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 8937                  push    word ptr [bp+stream] ; stream ;~ 01A2:30AA
cs=0x1a2;eip=0x0030ad; 	J(CALL(____fputn,0));	// 8938                  call    ____FPUTN ;~ 01A2:30AD
cs=0x1a2;eip=0x0030b0; 	T(XOR(dx, dx));	// 8939                  xor     dx, dx ;~ 01A2:30B0
cs=0x1a2;eip=0x0030b2; 	T(DIV2(di));	// 8940                  div     di ;~ 01A2:30B2
cs=0x1a2;eip=0x0030b4; 	J(JMP(loc_130f7));	// 8941                  jmp     short loc_130F7 ;~ 01A2:30B4
loc_130b6:
	// 4899 
cs=0x1a2;eip=0x0030b6; 	T(XOR(si, si));	// 8946                  xor     si, si ;~ 01A2:30B6
cs=0x1a2;eip=0x0030b8; 	T(CMP(si, *(dw*)(raddr(ss,bp+n))));	// 8947                  cmp     si, [bp+n] ;~ 01A2:30B8
cs=0x1a2;eip=0x0030bb; 	J(JNC(loc_130f4));	// 8948                  jnb     short loc_130F4 ;~ 01A2:30BB
loc_130bd:
	// 4900 
cs=0x1a2;eip=0x0030bd; 	X(PUSH(*(dw*)(raddr(ss,bp+ptr1+2))));	// 8951                  push    word ptr [bp+ptr1+2] ;~ 01A2:30BD
cs=0x1a2;eip=0x0030c0; 	X(PUSH(*(dw*)(raddr(ss,bp+ptr1))));	// 8952                  push    word ptr [bp+ptr1] ; src ;~ 01A2:30C0
cs=0x1a2;eip=0x0030c3; 	X(PUSH(di));	// 8953                  push    di              ; n ;~ 01A2:30C3
cs=0x1a2;eip=0x0030c4; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 8954                  push    word ptr [bp+stream+2] ;~ 01A2:30C4
cs=0x1a2;eip=0x0030c7; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 8955                  push    word ptr [bp+stream] ; stream ;~ 01A2:30C7
cs=0x1a2;eip=0x0030ca; 	J(CALL(____fputn,0));	// 8956                  call    ____FPUTN ;~ 01A2:30CA
cs=0x1a2;eip=0x0030cd; 	T(XOR(dx, dx));	// 8957                  xor     dx, dx ;~ 01A2:30CD
cs=0x1a2;eip=0x0030cf; 	T(OR(dx, dx));	// 8958                  or      dx, dx ;~ 01A2:30CF
cs=0x1a2;eip=0x0030d1; 	J(JNZ(loc_130d7));	// 8959                  jnz     short loc_130D7 ;~ 01A2:30D1
cs=0x1a2;eip=0x0030d3; 	T(CMP(ax, di));	// 8960                  cmp     ax, di ;~ 01A2:30D3
cs=0x1a2;eip=0x0030d5; 	J(JZ(loc_130db));	// 8961                  jz      short loc_130DB ;~ 01A2:30D5
loc_130d7:
	// 4901 
cs=0x1a2;eip=0x0030d7; 	T(ax = si;);	// 8964                  mov     ax, si ;~ 01A2:30D7
cs=0x1a2;eip=0x0030d9; 	J(JMP(loc_130f7));	// 8965                  jmp     short loc_130F7 ;~ 01A2:30D9
loc_130db:
	// 4902 
cs=0x1a2;eip=0x0030db; 	T(bx = di;);	// 8969                  mov     bx, di ;~ 01A2:30DB
cs=0x1a2;eip=0x0030dd; 	T(XOR(cx, cx));	// 8970                  xor     cx, cx ;~ 01A2:30DD
cs=0x1a2;eip=0x0030df; 	T(MOV(dx, *(dw*)(raddr(ss,bp+ptr1+2))));	// 8971                  mov     dx, word ptr [bp+ptr1+2] ;~ 01A2:30DF
cs=0x1a2;eip=0x0030e2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+ptr1))));	// 8972                  mov     ax, word ptr [bp+ptr1] ;~ 01A2:30E2
cs=0x1a2;eip=0x0030e5; 	J(CALL(__n_paddarb,0));	// 8973                  call    near ptr __N_PADD@ ;~ 01A2:30E5
cs=0x1a2;eip=0x0030e8; 	X(MOV(*(dw*)(raddr(ss,bp+ptr1+2)), dx));	// 8974                  mov     word ptr [bp+ptr1+2], dx ;~ 01A2:30E8
cs=0x1a2;eip=0x0030eb; 	X(MOV(*(dw*)(raddr(ss,bp+ptr1)), ax));	// 8975                  mov     word ptr [bp+ptr1], ax ;~ 01A2:30EB
cs=0x1a2;eip=0x0030ee; 	T(INC(si));	// 8976                  inc     si ;~ 01A2:30EE
cs=0x1a2;eip=0x0030ef; 	T(CMP(si, *(dw*)(raddr(ss,bp+n))));	// 8977                  cmp     si, [bp+n] ;~ 01A2:30EF
cs=0x1a2;eip=0x0030f2; 	J(JC(loc_130bd));	// 8978                  jb      short loc_130BD ;~ 01A2:30F2
loc_130f4:
	// 4903 
cs=0x1a2;eip=0x0030f4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+n))));	// 8982                  mov     ax, [bp+n] ;~ 01A2:30F4
loc_130f7:
	// 4904 
cs=0x1a2;eip=0x0030f7; 	X(POP(di));	// 8986                  pop     di ;~ 01A2:30F7
cs=0x1a2;eip=0x0030f8; 	X(POP(si));	// 8987                  pop     si ;~ 01A2:30F8
cs=0x1a2;eip=0x0030f9; 	T(sp = bp;);	// 8988                  mov     sp, bp ;~ 01A2:30F9
cs=0x1a2;eip=0x0030fb; 	X(POP(bp));	// 8989                  pop     bp ;~ 01A2:30FB
cs=0x1a2;eip=0x0030fc; 	J(RETF(0));	// 8990                  retf ;~ 01A2:30FC

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___fwrite: 	goto ___fwrite;
        case m2c::kloc_1309e: 	goto loc_1309e;
        case m2c::kloc_130b6: 	goto loc_130b6;
        case m2c::kloc_130bd: 	goto loc_130bd;
        case m2c::kloc_130d7: 	goto loc_130d7;
        case m2c::kloc_130db: 	goto loc_130db;
        case m2c::kloc_130f4: 	goto loc_130f4;
        case m2c::kloc_130f7: 	goto loc_130f7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_130fd(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_130fd:
    _begin:
#undef stream
#define stream -4
	// 9001 stream          = dword ptr -4 ;~ 01A2:30FD
cs=0x1a2;eip=0x0030fd; 	X(PUSH(bp));	// 9003                  push    bp ;~ 01A2:30FD
cs=0x1a2;eip=0x0030fe; 	T(bp = sp;);	// 9004                  mov     bp, sp ;~ 01A2:30FE
cs=0x1a2;eip=0x003100; 	T(SUB(sp, 4));	// 9005                  sub     sp, 4 ;~ 01A2:3100
cs=0x1a2;eip=0x003103; 	X(PUSH(si));	// 9006                  push    si ;~ 01A2:3103
cs=0x1a2;eip=0x003104; 	T(si = 0x14;);	// 9007                  mov     si, 14h ;~ 01A2:3104
cs=0x1a2;eip=0x003107; 	X(MOV(*(dw*)(raddr(ss,bp+stream+2)), ds));	// 9008                  mov     word ptr [bp+stream+2], ds ;~ 01A2:3107
cs=0x1a2;eip=0x00310a; 	X(MOV(*(dw*)(raddr(ss,bp+stream)), 0x6D0));	// 9009                  mov     word ptr [bp+stream], 6D0h ;~ 01A2:310A
cs=0x1a2;eip=0x00310f; 	J(JMP(loc_1312f));	// 9010                  jmp     short loc_1312F ;~ 01A2:310F
loc_13111:
	// 4905 
cs=0x1a2;eip=0x003111; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 9014                  les     bx, [bp+stream] ;~ 01A2:3111
cs=0x1a2;eip=0x003114; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 9015                  mov     ax, es:[bx+2] ;~ 01A2:3114
cs=0x1a2;eip=0x003118; 	T(AND(ax, 0x300));	// 9016                  and     ax, 300h ;~ 01A2:3118
cs=0x1a2;eip=0x00311b; 	T(CMP(ax, 0x300));	// 9017                  cmp     ax, 300h ;~ 01A2:311B
cs=0x1a2;eip=0x00311e; 	J(JNZ(loc_1312b));	// 9018                  jnz     short loc_1312B ;~ 01A2:311E
cs=0x1a2;eip=0x003120; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 9019                  push    word ptr [bp+stream+2] ;~ 01A2:3120
cs=0x1a2;eip=0x003123; 	X(PUSH(bx));	// 9020                  push    bx              ; stream ;~ 01A2:3123
cs=0x1a2;eip=0x003124; 	T(NOP);	// 9021                  nop ;~ 01A2:3124
cs=0x1a2;eip=0x003125; 	X(PUSH(cs));	// 9022                  push    cs ;~ 01A2:3125
cs=0x1a2;eip=0x003126; 	J(CALL(___fflush,0));	// 9023                  call    near ptr ___fflush ;~ 01A2:3126
cs=0x1a2;eip=0x003129; 	X(POP(cx));	// 9024                  pop     cx ;~ 01A2:3129
cs=0x1a2;eip=0x00312a; 	X(POP(cx));	// 9025                  pop     cx ;~ 01A2:312A
loc_1312b:
	// 4906 
cs=0x1a2;eip=0x00312b; 	X(ADD(*(dw*)(raddr(ss,bp+stream)), 0x14));	// 9028                  add     word ptr [bp+stream], 14h ;~ 01A2:312B
loc_1312f:
	// 4907 
cs=0x1a2;eip=0x00312f; 	T(ax = si;);	// 9031                  mov     ax, si ;~ 01A2:312F
cs=0x1a2;eip=0x003131; 	T(DEC(si));	// 9032                  dec     si ;~ 01A2:3131
cs=0x1a2;eip=0x003132; 	T(OR(ax, ax));	// 9033                  or      ax, ax ;~ 01A2:3132
cs=0x1a2;eip=0x003134; 	J(JNZ(loc_13111));	// 9034                  jnz     short loc_13111 ;~ 01A2:3134
cs=0x1a2;eip=0x003136; 	X(POP(si));	// 9035                  pop     si ;~ 01A2:3136
cs=0x1a2;eip=0x003137; 	T(sp = bp;);	// 9036                  mov     sp, bp ;~ 01A2:3137
cs=0x1a2;eip=0x003139; 	X(POP(bp));	// 9037                  pop     bp ;~ 01A2:3139
cs=0x1a2;eip=0x00313a; 	J(RETN(0));	// 9038                  retn ;~ 01A2:313A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_13111: 	goto loc_13111;
        case m2c::kloc_1312b: 	goto loc_1312b;
        case m2c::kloc_1312f: 	goto loc_1312f;
        case m2c::ksub_130fd: 	goto sub_130fd;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1313b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1313b:
    _begin:
#undef arg_0
#define arg_0 4
	// 9049 arg_0           = dword ptr  4 ;~ 01A2:313B
cs=0x1a2;eip=0x00313b; 	X(PUSH(bp));	// 9051                  push    bp ;~ 01A2:313B
cs=0x1a2;eip=0x00313c; 	T(bp = sp;);	// 9052                  mov     bp, sp ;~ 01A2:313C
cs=0x1a2;eip=0x00313e; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 9053                  les     bx, [bp+arg_0] ;~ 01A2:313E
cs=0x1a2;eip=0x003141; 	T(TEST(*(dw*)(raddr(es,bx+2)), 0x200));	// 9054                  test    word ptr es:[bx+2], 200h ;~ 01A2:3141
cs=0x1a2;eip=0x003147; 	J(JZ(loc_1314c));	// 9055                  jz      short loc_1314C ;~ 01A2:3147
cs=0x1a2;eip=0x003149; 	J(CALL(sub_130fd,0));	// 9056                  call    sub_130FD ;~ 01A2:3149
loc_1314c:
	// 4908 
cs=0x1a2;eip=0x00314c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 9059                  les     bx, [bp+arg_0] ;~ 01A2:314C
cs=0x1a2;eip=0x00314f; 	X(PUSH(*(dw*)(raddr(es,bx+6))));	// 9060                  push    word ptr es:[bx+6] ; len ;~ 01A2:314F
cs=0x1a2;eip=0x003153; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 9061                  mov     ax, es:[bx+0Ah] ;~ 01A2:3153
cs=0x1a2;eip=0x003157; 	T(MOV(dx, *(dw*)(raddr(es,bx+8))));	// 9062                  mov     dx, es:[bx+8] ;~ 01A2:3157
cs=0x1a2;eip=0x00315b; 	X(MOV(*(dw*)(raddr(es,bx+0x0E)), ax));	// 9063                  mov     es:[bx+0Eh], ax ;~ 01A2:315B
cs=0x1a2;eip=0x00315f; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 9064                  mov     es:[bx+0Ch], dx ;~ 01A2:315F
cs=0x1a2;eip=0x003163; 	X(PUSH(ax));	// 9065                  push    ax ;~ 01A2:3163
cs=0x1a2;eip=0x003164; 	X(PUSH(dx));	// 9066                  push    dx              ; buf ;~ 01A2:3164
cs=0x1a2;eip=0x003165; 	T(MOV(al, *(raddr(es,bx+4))));	// 9067                  mov     al, es:[bx+4] ;~ 01A2:3165
cs=0x1a2;eip=0x003169; 	T(CBW);	// 9068                  cbw ;~ 01A2:3169
cs=0x1a2;eip=0x00316a; 	X(PUSH(ax));	// 9069                  push    ax              ; handle ;~ 01A2:316A
cs=0x1a2;eip=0x00316b; 	T(NOP);	// 9070                  nop ;~ 01A2:316B
cs=0x1a2;eip=0x00316c; 	X(PUSH(cs));	// 9071                  push    cs ;~ 01A2:316C
cs=0x1a2;eip=0x00316d; 	J(CALL(_____read,0));	// 9072                  call    near ptr _____read ;~ 01A2:316D
cs=0x1a2;eip=0x003170; 	T(ADD(sp, 8));	// 9073                  add     sp, 8 ;~ 01A2:3170
cs=0x1a2;eip=0x003173; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 9074                  les     bx, [bp+arg_0] ;~ 01A2:3173
cs=0x1a2;eip=0x003176; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 9075                  mov     es:[bx], ax ;~ 01A2:3176
cs=0x1a2;eip=0x003179; 	T(OR(ax, ax));	// 9076                  or      ax, ax ;~ 01A2:3179
cs=0x1a2;eip=0x00317b; 	J(JLE(loc_13186));	// 9077                  jle     short loc_13186 ;~ 01A2:317B
cs=0x1a2;eip=0x00317d; 	X(AND(*(dw*)(raddr(es,bx+2)), 0x0FFDF));	// 9078                  and     word ptr es:[bx+2], 0FFDFh ;~ 01A2:317D
cs=0x1a2;eip=0x003182; 	T(XOR(ax, ax));	// 9079                  xor     ax, ax ;~ 01A2:3182
cs=0x1a2;eip=0x003184; 	J(JMP(loc_131af));	// 9080                  jmp     short loc_131AF ;~ 01A2:3184
loc_13186:
	// 4909 
cs=0x1a2;eip=0x003186; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 9084                  les     bx, [bp+arg_0] ;~ 01A2:3186
cs=0x1a2;eip=0x003189; 	T(CMP(*(dw*)(raddr(es,bx)), 0));	// 9086                  cmp     word ptr es:[bx], 0 ;~ 01A2:3189
cs=0x1a2;eip=0x00318d; 	J(JNZ(loc_1319f));	// 9087                  jnz     short loc_1319F ;~ 01A2:318D
cs=0x1a2;eip=0x00318f; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 9088                  mov     ax, es:[bx+2] ;~ 01A2:318F
cs=0x1a2;eip=0x003193; 	T(AND(ax, 0x0FE7F));	// 9089                  and     ax, 0FE7Fh ;~ 01A2:3193
cs=0x1a2;eip=0x003196; 	T(OR(ax, 0x20));	// 9090                  or      ax, 20h ;~ 01A2:3196
cs=0x1a2;eip=0x003199; 	X(MOV(*(dw*)(raddr(es,bx+2)), ax));	// 9091                  mov     es:[bx+2], ax ;~ 01A2:3199
cs=0x1a2;eip=0x00319d; 	J(JMP(loc_131ac));	// 9092                  jmp     short loc_131AC ;~ 01A2:319D
loc_1319f:
	// 4910 
cs=0x1a2;eip=0x00319f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 9096                  les     bx, [bp+arg_0] ;~ 01A2:319F
cs=0x1a2;eip=0x0031a2; 	X(MOV(*(dw*)(raddr(es,bx)), 0));	// 9097                  mov     word ptr es:[bx], 0 ;~ 01A2:31A2
cs=0x1a2;eip=0x0031a7; 	X(OR(*(dw*)(raddr(es,bx+2)), 0x10));	// 9098                  or      word ptr es:[bx+2], 10h ;~ 01A2:31A7
loc_131ac:
	// 4911 
cs=0x1a2;eip=0x0031ac; 	T(ax = 0x0FFFF;);	// 9101                  mov     ax, 0FFFFh ;~ 01A2:31AC
loc_131af:
	// 4912 
cs=0x1a2;eip=0x0031af; 	X(POP(bp));	// 9105                  pop     bp ;~ 01A2:31AF
cs=0x1a2;eip=0x0031b0; 	J(RETN(4));	// 9106                  retn    4 ;~ 01A2:31B0

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1314c: 	goto loc_1314c;
        case m2c::kloc_13186: 	goto loc_13186;
        case m2c::kloc_1319f: 	goto loc_1319f;
        case m2c::kloc_131ac: 	goto loc_131ac;
        case m2c::kloc_131af: 	goto loc_131af;
        case m2c::ksub_1313b: 	goto sub_1313b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____fgetc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____fgetc:
    _begin:
#undef stream
#define stream 6
	// 9117 stream          = dword ptr  6 ;~ 01A2:31B3
cs=0x1a2;eip=0x0031b3; 	X(PUSH(bp));	// 9119                  push    bp ;~ 01A2:31B3
cs=0x1a2;eip=0x0031b4; 	T(bp = sp;);	// 9120                  mov     bp, sp ;~ 01A2:31B4
cs=0x1a2;eip=0x0031b6; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 9121                  les     bx, [bp+stream] ;~ 01A2:31B6
cs=0x1a2;eip=0x0031b9; 	X(INC(*(dw*)(raddr(es,bx))));	// 9122                  inc     word ptr es:[bx] ;~ 01A2:31B9
cs=0x1a2;eip=0x0031bc; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 9123                  push    word ptr [bp+stream+2] ;~ 01A2:31BC
cs=0x1a2;eip=0x0031bf; 	X(PUSH(bx));	// 9124                  push    bx              ; stream ;~ 01A2:31BF
cs=0x1a2;eip=0x0031c0; 	X(PUSH(cs));	// 9125                  push    cs ;~ 01A2:31C0
cs=0x1a2;eip=0x0031c1; 	J(CALL(___fgetc,0));	// 9126                  call    near ptr ___fgetc ;~ 01A2:31C1
cs=0x1a2;eip=0x0031c4; 	X(POP(cx));	// 9128                  pop     cx ;~ 01A2:31C4
cs=0x1a2;eip=0x0031c5; 	X(POP(cx));	// 9129                  pop     cx ;~ 01A2:31C5
cs=0x1a2;eip=0x0031c6; 	X(POP(bp));	// 9130                  pop     bp ;~ 01A2:31C6
cs=0x1a2;eip=0x0031c7; 	J(RETF(0));	// 9131                  retf ;~ 01A2:31C7

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____fgetc: 	goto ____fgetc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group8:
    _begin:
seg000_31c8_proc:
	// 9136 
____nfgetc:
	// 4913 
cs=0x1a2;eip=0x0031c8; 	X(POP(ax));	// 9137                  pop     ax ;~ 01A2:31C8
cs=0x1a2;eip=0x0031c9; 	X(PUSH(cs));	// 9138                  push    cs ;~ 01A2:31C9
cs=0x1a2;eip=0x0031ca; 	X(PUSH(ax));	// 9139                  push    ax ;~ 01A2:31CA
___fgetc:
	// 9147 
#undef stream
#define stream 6
	// 9150 stream          = dword ptr  6 ;~ 01A2:31CB
cs=0x1a2;eip=0x0031cb; 	X(PUSH(bp));	// 9152                  push    bp ;~ 01A2:31CB
cs=0x1a2;eip=0x0031cc; 	T(bp = sp;);	// 9153                  mov     bp, sp ;~ 01A2:31CC
cs=0x1a2;eip=0x0031ce; 	X(PUSH(si));	// 9154                  push    si ;~ 01A2:31CE
cs=0x1a2;eip=0x0031cf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+stream))));	// 9155                  mov     ax, word ptr [bp+stream] ;~ 01A2:31CF
cs=0x1a2;eip=0x0031d2; 	T(OR(ax, *(dw*)(raddr(ss,bp+stream+2))));	// 9156                  or      ax, word ptr [bp+stream+2] ;~ 01A2:31D2
cs=0x1a2;eip=0x0031d5; 	J(JNZ(loc_131dd));	// 9157                  jnz     short loc_131DD ;~ 01A2:31D5
loc_131d7:
	// 4914 
cs=0x1a2;eip=0x0031d7; 	T(ax = 0x0FFFF;);	// 9161                  mov     ax, 0FFFFh ;~ 01A2:31D7
cs=0x1a2;eip=0x0031da; 	J(JMP(loc_132b6));	// 9162                  jmp     loc_132B6 ;~ 01A2:31DA
loc_131dd:
	// 4915 
cs=0x1a2;eip=0x0031dd; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 9166                  les     bx, [bp+stream] ;~ 01A2:31DD
cs=0x1a2;eip=0x0031e0; 	T(CMP(*(dw*)(raddr(es,bx)), 0));	// 9167                  cmp     word ptr es:[bx], 0 ;~ 01A2:31E0
cs=0x1a2;eip=0x0031e4; 	J(JLE(loc_13200));	// 9168                  jle     short loc_13200 ;~ 01A2:31E4
loc_131e6:
	// 4916 
cs=0x1a2;eip=0x0031e6; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 9172                  les     bx, [bp+stream] ;~ 01A2:31E6
cs=0x1a2;eip=0x0031e9; 	X(DEC(*(dw*)(raddr(es,bx))));	// 9173                  dec     word ptr es:[bx] ;~ 01A2:31E9
cs=0x1a2;eip=0x0031ec; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E))));	// 9174                  mov     ax, es:[bx+0Eh] ;~ 01A2:31EC
cs=0x1a2;eip=0x0031f0; 	T(MOV(si, *(dw*)(raddr(es,bx+0x0C))));	// 9175                  mov     si, es:[bx+0Ch] ;~ 01A2:31F0
cs=0x1a2;eip=0x0031f4; 	X(INC(*(dw*)(raddr(es,bx+0x0C))));	// 9176                  inc     word ptr es:[bx+0Ch] ;~ 01A2:31F4
cs=0x1a2;eip=0x0031f8; 	T(es = ax;);	// 9177                  mov     es, ax ;~ 01A2:31F8
cs=0x1a2;eip=0x0031fa; 	T(MOV(al, *(raddr(es,si))));	// 9179                  mov     al, es:[si] ;~ 01A2:31FA
cs=0x1a2;eip=0x0031fd; 	J(JMP(loc_132b4));	// 9180                  jmp     loc_132B4 ;~ 01A2:31FD
loc_13200:
	// 4917 
cs=0x1a2;eip=0x003200; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 9185                  les     bx, [bp+stream] ;~ 01A2:3200
cs=0x1a2;eip=0x003203; 	T(CMP(*(dw*)(raddr(es,bx)), 0));	// 9186                  cmp     word ptr es:[bx], 0 ;~ 01A2:3203
cs=0x1a2;eip=0x003207; 	J(JL(loc_13278));	// 9187                  jl      short loc_13278 ;~ 01A2:3207
cs=0x1a2;eip=0x003209; 	T(TEST(*(dw*)(raddr(es,bx+2)), 0x110));	// 9188                  test    word ptr es:[bx+2], 110h ;~ 01A2:3209
cs=0x1a2;eip=0x00320f; 	J(JNZ(loc_13278));	// 9189                  jnz     short loc_13278 ;~ 01A2:320F
cs=0x1a2;eip=0x003211; 	T(TEST(*(dw*)(raddr(es,bx+2)), 1));	// 9190                  test    word ptr es:[bx+2], 1 ;~ 01A2:3211
cs=0x1a2;eip=0x003217; 	J(JZ(loc_13278));	// 9191                  jz      short loc_13278 ;~ 01A2:3217
cs=0x1a2;eip=0x003219; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 9192                  les     bx, [bp+stream] ;~ 01A2:3219
cs=0x1a2;eip=0x00321c; 	X(OR(*(dw*)(raddr(es,bx+2)), 0x80));	// 9193                  or      word ptr es:[bx+2], 80h ;~ 01A2:321C
cs=0x1a2;eip=0x003222; 	T(CMP(*(dw*)(raddr(es,bx+6)), 0));	// 9194                  cmp     word ptr es:[bx+6], 0 ;~ 01A2:3222
cs=0x1a2;eip=0x003227; 	J(JZ(loc_13238));	// 9195                  jz      short loc_13238 ;~ 01A2:3227
cs=0x1a2;eip=0x003229; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 9196                  push    word ptr [bp+stream+2] ;~ 01A2:3229
cs=0x1a2;eip=0x00322c; 	X(PUSH(bx));	// 9197                  push    bx ;~ 01A2:322C
cs=0x1a2;eip=0x00322d; 	J(CALL(sub_1313b,0));	// 9198                  call    sub_1313B ;~ 01A2:322D
cs=0x1a2;eip=0x003230; 	T(OR(ax, ax));	// 9199                  or      ax, ax ;~ 01A2:3230
cs=0x1a2;eip=0x003232; 	J(JZ(loc_131e6));	// 9200                  jz      short loc_131E6 ;~ 01A2:3232
cs=0x1a2;eip=0x003234; 	J(JMP(loc_131d7));	// 9201                  jmp     short loc_131D7 ;~ 01A2:3234
ret_1a2_3236:
	// 4918 
cs=0x1a2;eip=0x003236; 	J(JMP(loc_131e6));	// 9203                  jmp     short loc_131E6 ;~ 01A2:3236
loc_13238:
	// 4919 
cs=0x1a2;eip=0x003238; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 9208                  les     bx, [bp+stream] ;~ 01A2:3238
cs=0x1a2;eip=0x00323b; 	T(TEST(*(dw*)(raddr(es,bx+2)), 0x200));	// 9210                  test    word ptr es:[bx+2], 200h ;~ 01A2:323B
cs=0x1a2;eip=0x003241; 	J(JZ(loc_13246));	// 9211                  jz      short loc_13246 ;~ 01A2:3241
cs=0x1a2;eip=0x003243; 	J(CALL(sub_130fd,0));	// 9212                  call    sub_130FD ;~ 01A2:3243
loc_13246:
	// 4920 
cs=0x1a2;eip=0x003246; 	T(ax = 1;);	// 9215                  mov     ax, 1 ;~ 01A2:3246
cs=0x1a2;eip=0x003249; 	X(PUSH(ax));	// 9216                  push    ax              ; len ;~ 01A2:3249
cs=0x1a2;eip=0x00324a; 	X(PUSH(ds));	// 9217                  push    ds ;~ 01A2:324A
cs=0x1a2;eip=0x00324b; 	T(ax = 0x0BE4;);	// 9218                  mov     ax, 0BE4h ;~ 01A2:324B
cs=0x1a2;eip=0x00324e; 	X(PUSH(ax));	// 9219                  push    ax              ; buf ;~ 01A2:324E
cs=0x1a2;eip=0x00324f; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 9220                  les     bx, [bp+stream] ;~ 01A2:324F
cs=0x1a2;eip=0x003252; 	T(MOV(al, *(raddr(es,bx+4))));	// 9221                  mov     al, es:[bx+4] ;~ 01A2:3252
cs=0x1a2;eip=0x003256; 	T(CBW);	// 9222                  cbw ;~ 01A2:3256
cs=0x1a2;eip=0x003257; 	X(PUSH(ax));	// 9223                  push    ax              ; handle ;~ 01A2:3257
cs=0x1a2;eip=0x003258; 	T(NOP);	// 9224                  nop ;~ 01A2:3258
cs=0x1a2;eip=0x003259; 	X(PUSH(cs));	// 9225                  push    cs ;~ 01A2:3259
cs=0x1a2;eip=0x00325a; 	J(CALL(_____read,0));	// 9226                  call    near ptr _____read ;~ 01A2:325A
cs=0x1a2;eip=0x00325d; 	T(ADD(sp, 8));	// 9227                  add     sp, 8 ;~ 01A2:325D
cs=0x1a2;eip=0x003260; 	T(OR(ax, ax));	// 9228                  or      ax, ax ;~ 01A2:3260
cs=0x1a2;eip=0x003262; 	J(JNZ(loc_13297));	// 9229                  jnz     short loc_13297 ;~ 01A2:3262
cs=0x1a2;eip=0x003264; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 9230                  les     bx, [bp+stream] ;~ 01A2:3264
cs=0x1a2;eip=0x003267; 	T(MOV(al, *(raddr(es,bx+4))));	// 9231                  mov     al, es:[bx+4] ;~ 01A2:3267
cs=0x1a2;eip=0x00326b; 	T(CBW);	// 9232                  cbw ;~ 01A2:326B
cs=0x1a2;eip=0x00326c; 	X(PUSH(ax));	// 9233                  push    ax              ; handle ;~ 01A2:326C
cs=0x1a2;eip=0x00326d; 	T(NOP);	// 9234                  nop ;~ 01A2:326D
cs=0x1a2;eip=0x00326e; 	X(PUSH(cs));	// 9235                  push    cs ;~ 01A2:326E
cs=0x1a2;eip=0x00326f; 	J(CALL(___eof,0));	// 9236                  call    near ptr ___eof ;~ 01A2:326F
cs=0x1a2;eip=0x003272; 	X(POP(cx));	// 9237                  pop     cx ;~ 01A2:3272
cs=0x1a2;eip=0x003273; 	T(CMP(ax, 1));	// 9238                  cmp     ax, 1 ;~ 01A2:3273
cs=0x1a2;eip=0x003276; 	J(JZ(loc_13283));	// 9239                  jz      short loc_13283 ;~ 01A2:3276
loc_13278:
	// 4921 
cs=0x1a2;eip=0x003278; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 9243                  les     bx, [bp+stream] ;~ 01A2:3278
cs=0x1a2;eip=0x00327b; 	X(OR(*(dw*)(raddr(es,bx+2)), 0x10));	// 9244                  or      word ptr es:[bx+2], 10h ;~ 01A2:327B
cs=0x1a2;eip=0x003280; 	J(JMP(loc_131d7));	// 9245                  jmp     loc_131D7 ;~ 01A2:3280
loc_13283:
	// 4922 
cs=0x1a2;eip=0x003283; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 9249                  les     bx, [bp+stream] ;~ 01A2:3283
cs=0x1a2;eip=0x003286; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 9250                  mov     ax, es:[bx+2] ;~ 01A2:3286
cs=0x1a2;eip=0x00328a; 	T(AND(ax, 0x0FE7F));	// 9251                  and     ax, 0FE7Fh ;~ 01A2:328A
cs=0x1a2;eip=0x00328d; 	T(OR(ax, 0x20));	// 9252                  or      ax, 20h ;~ 01A2:328D
cs=0x1a2;eip=0x003290; 	X(MOV(*(dw*)(raddr(es,bx+2)), ax));	// 9253                  mov     es:[bx+2], ax ;~ 01A2:3290
cs=0x1a2;eip=0x003294; 	J(JMP(loc_131d7));	// 9254                  jmp     loc_131D7 ;~ 01A2:3294
loc_13297:
	// 4923 
cs=0x1a2;eip=0x003297; 	T(CMP(byte_194c4, 0x0D));	// 9258                  cmp     byte_194C4, 0Dh ;~ 01A2:3297
cs=0x1a2;eip=0x00329c; 	J(JNZ(loc_132a9));	// 9259                  jnz     short loc_132A9 ;~ 01A2:329C
cs=0x1a2;eip=0x00329e; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 9260                  les     bx, [bp+stream] ;~ 01A2:329E
cs=0x1a2;eip=0x0032a1; 	T(TEST(*(dw*)(raddr(es,bx+2)), 0x40));	// 9261                  test    word ptr es:[bx+2], 40h ;~ 01A2:32A1
cs=0x1a2;eip=0x0032a7; 	J(JZ(loc_13238));	// 9262                  jz      short loc_13238 ;~ 01A2:32A7
loc_132a9:
	// 4924 
cs=0x1a2;eip=0x0032a9; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 9265                  les     bx, [bp+stream] ;~ 01A2:32A9
cs=0x1a2;eip=0x0032ac; 	X(AND(*(dw*)(raddr(es,bx+2)), 0x0FFDF));	// 9266                  and     word ptr es:[bx+2], 0FFDFh ;~ 01A2:32AC
cs=0x1a2;eip=0x0032b1; 	T(al = byte_194c4;);	// 9267                  mov     al, byte_194C4 ;~ 01A2:32B1
loc_132b4:
	// 4925 
cs=0x1a2;eip=0x0032b4; 	T(ah = 0;);	// 9271                  mov     ah, 0 ;~ 01A2:32B4
loc_132b6:
	// 4926 
cs=0x1a2;eip=0x0032b6; 	X(POP(si));	// 9274                  pop     si ;~ 01A2:32B6
cs=0x1a2;eip=0x0032b7; 	X(POP(bp));	// 9275                  pop     bp ;~ 01A2:32B7
cs=0x1a2;eip=0x0032b8; 	J(RETF(0));	// 9276                  retf ;~ 01A2:32B8

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____nfgetc: 	goto ____nfgetc;
        case m2c::k___fgetc: 	goto ___fgetc;
        case m2c::kloc_131d7: 	goto loc_131d7;
        case m2c::kloc_131dd: 	goto loc_131dd;
        case m2c::kloc_131e6: 	goto loc_131e6;
        case m2c::kloc_13200: 	goto loc_13200;
        case m2c::kloc_13238: 	goto loc_13238;
        case m2c::kloc_13246: 	goto loc_13246;
        case m2c::kloc_13278: 	goto loc_13278;
        case m2c::kloc_13283: 	goto loc_13283;
        case m2c::kloc_13297: 	goto loc_13297;
        case m2c::kloc_132a9: 	goto loc_132a9;
        case m2c::kloc_132b4: 	goto loc_132b4;
        case m2c::kloc_132b6: 	goto loc_132b6;
        case m2c::kret_1a2_3236: 	goto ret_1a2_3236;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___fgetchar(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___fgetchar:
    _begin:
cs=0x1a2;eip=0x0032b9; 	X(PUSH(ds));	// 9286                  push    ds ;~ 01A2:32B9
cs=0x1a2;eip=0x0032ba; 	T(ax = 0x6D0;);	// 9287                  mov     ax, 6D0h ;~ 01A2:32BA
cs=0x1a2;eip=0x0032bd; 	X(PUSH(ax));	// 9288                  push    ax              ; stream ;~ 01A2:32BD
cs=0x1a2;eip=0x0032be; 	X(PUSH(cs));	// 9289                  push    cs ;~ 01A2:32BE
cs=0x1a2;eip=0x0032bf; 	J(CALL(___fgetc,0));	// 9290                  call    near ptr ___fgetc ;~ 01A2:32BF
cs=0x1a2;eip=0x0032c2; 	X(POP(cx));	// 9291                  pop     cx ;~ 01A2:32C2
cs=0x1a2;eip=0x0032c3; 	X(POP(cx));	// 9292                  pop     cx ;~ 01A2:32C3
cs=0x1a2;eip=0x0032c4; 	J(RETF(0));	// 9293                  retf ;~ 01A2:32C4

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___fgetchar: 	goto ___fgetchar;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___getenv(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___getenv:
    _begin:
#undef var_4
#define var_4 -4
	// 9304 var_4           = dword ptr -4 ;~ 01A2:32C5
#undef _name
#define _name 6
	// 9305 _name           = dword ptr  6 ;~ 01A2:32C5
cs=0x1a2;eip=0x0032c5; 	X(PUSH(bp));	// 9307                  push    bp ;~ 01A2:32C5
cs=0x1a2;eip=0x0032c6; 	T(bp = sp;);	// 9308                  mov     bp, sp ;~ 01A2:32C6
cs=0x1a2;eip=0x0032c8; 	T(SUB(sp, 4));	// 9309                  sub     sp, 4 ;~ 01A2:32C8
cs=0x1a2;eip=0x0032cb; 	X(PUSH(si));	// 9310                  push    si ;~ 01A2:32CB
cs=0x1a2;eip=0x0032cc; 	X(PUSH(di));	// 9311                  push    di ;~ 01A2:32CC
cs=0x1a2;eip=0x0032cd; 	T(LES(di, *(dd*)(raddr(ss,bp+_name))));	// 9312                  les     di, [bp+_name] ;~ 01A2:32CD
cs=0x1a2;eip=0x0032d0; 	T(ax = es;);	// 9314                  mov     ax, es ;~ 01A2:32D0
cs=0x1a2;eip=0x0032d2; 	T(OR(ax, di));	// 9315                  or      ax, di ;~ 01A2:32D2
cs=0x1a2;eip=0x0032d4; 	J(JZ(loc_132f6));	// 9316                  jz      short loc_132F6 ;~ 01A2:32D4
cs=0x1a2;eip=0x0032d6; 	T(al = 0;);	// 9317                  mov     al, 0 ;~ 01A2:32D6
cs=0x1a2;eip=0x0032d8; 	T(MOV(ah, *(raddr(es,di))));	// 9318                  mov     ah, es:[di] ;~ 01A2:32D8
cs=0x1a2;eip=0x0032db; 	T(cx = 0x0FFFF;);	// 9319                  mov     cx, 0FFFFh ;~ 01A2:32DB
cs=0x1a2;eip=0x0032de; 	T(CLD);	// 9320                  cld ;~ 01A2:32DE
	// 9321                  repne scasb ;~ 01A2:32DF
cs=0x1a2;eip=0x0032df; 	T(	REPNE SCASB);	// 9321                  repne scasb ;~ 01A2:32DF
cs=0x1a2;eip=0x0032e1; 	T(NOT(cx));	// 9322                  not     cx ;~ 01A2:32E1
cs=0x1a2;eip=0x0032e3; 	T(DEC(cx));	// 9323                  dec     cx ;~ 01A2:32E3
cs=0x1a2;eip=0x0032e4; 	J(JZ(loc_132f6));	// 9324                  jz      short loc_132F6 ;~ 01A2:32E4
cs=0x1a2;eip=0x0032e6; 	T(LES(di, dword_1929e));	// 9325                  les     di, dword_1929E ;~ 01A2:32E6
cs=0x1a2;eip=0x0032ea; 	X(MOV(*(dw*)(raddr(ss,bp+var_4+2)), es));	// 9326                  mov     word ptr [bp+var_4+2], es ;~ 01A2:32EA
cs=0x1a2;eip=0x0032ed; 	T(bx = es;);	// 9327                  mov     bx, es ;~ 01A2:32ED
cs=0x1a2;eip=0x0032ef; 	T(OR(bx, di));	// 9328                  or      bx, di ;~ 01A2:32EF
cs=0x1a2;eip=0x0032f1; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), di));	// 9329                  mov     word ptr [bp+var_4], di ;~ 01A2:32F1
cs=0x1a2;eip=0x0032f4; 	J(JNZ(loc_13303));	// 9330                  jnz     short loc_13303 ;~ 01A2:32F4
loc_132f6:
	// 4927 
cs=0x1a2;eip=0x0032f6; 	T(XOR(dx, dx));	// 9334                  xor     dx, dx ;~ 01A2:32F6
cs=0x1a2;eip=0x0032f8; 	T(XOR(ax, ax));	// 9335                  xor     ax, ax ;~ 01A2:32F8
cs=0x1a2;eip=0x0032fa; 	J(JMP(loc_1332f));	// 9336                  jmp     short loc_1332F ;~ 01A2:32FA
loc_132fc:
	// 4928 
cs=0x1a2;eip=0x0032fc; 	X(ADD(*(dw*)(raddr(ss,bp+var_4)), 4));	// 9341                  add     word ptr [bp+var_4], 4 ;~ 01A2:32FC
cs=0x1a2;eip=0x003300; 	T(LES(di, *(dd*)(raddr(ss,bp+var_4))));	// 9342                  les     di, [bp+var_4] ;~ 01A2:3300
loc_13303:
	// 4929 
cs=0x1a2;eip=0x003303; 	T(LES(di, *(dw*)(raddr(es,di))));	// 9345                  les     di, es:[di] ;~ 01A2:3303
cs=0x1a2;eip=0x003306; 	T(bx = es;);	// 9346                  mov     bx, es ;~ 01A2:3306
cs=0x1a2;eip=0x003308; 	T(OR(bx, di));	// 9347                  or      bx, di ;~ 01A2:3308
cs=0x1a2;eip=0x00330a; 	J(JZ(loc_132f6));	// 9348                  jz      short loc_132F6 ;~ 01A2:330A
cs=0x1a2;eip=0x00330c; 	T(MOV(al, *(raddr(es,di))));	// 9349                  mov     al, es:[di] ;~ 01A2:330C
cs=0x1a2;eip=0x00330f; 	T(OR(al, al));	// 9350                  or      al, al ;~ 01A2:330F
cs=0x1a2;eip=0x003311; 	J(JZ(loc_132f6));	// 9351                  jz      short loc_132F6 ;~ 01A2:3311
cs=0x1a2;eip=0x003313; 	T(CMP(ah, al));	// 9352                  cmp     ah, al ;~ 01A2:3313
cs=0x1a2;eip=0x003315; 	J(JNZ(loc_132fc));	// 9353                  jnz     short loc_132FC ;~ 01A2:3315
cs=0x1a2;eip=0x003317; 	T(bx = cx;);	// 9354                  mov     bx, cx ;~ 01A2:3317
cs=0x1a2;eip=0x003319; 	T(CMP(*(raddr(es,bx+di)), 0x3D));	// 9355                  cmp     byte ptr es:[bx+di], 3Dh ; '=' ;~ 01A2:3319
cs=0x1a2;eip=0x00331d; 	J(JNZ(loc_132fc));	// 9356                  jnz     short loc_132FC ;~ 01A2:331D
cs=0x1a2;eip=0x00331f; 	X(PUSH(ds));	// 9357                  push    ds ;~ 01A2:331F
cs=0x1a2;eip=0x003320; 	T(LDS(si, *(dd*)(raddr(ss,bp+_name))));	// 9358                  lds     si, [bp+_name] ;~ 01A2:3320
	// 9359                  repe cmpsb ;~ 01A2:3323
cs=0x1a2;eip=0x003323; 	T(	REPE CMPSB);	// 9359                  repe cmpsb ;~ 01A2:3323
cs=0x1a2;eip=0x003325; 	X(POP(ds));	// 9360                  pop     ds ;~ 01A2:3325
cs=0x1a2;eip=0x003326; 	T(XCHG(cx, bx));	// 9361                  xchg    cx, bx ;~ 01A2:3326
cs=0x1a2;eip=0x003328; 	J(JNZ(loc_132fc));	// 9362                  jnz     short loc_132FC ;~ 01A2:3328
cs=0x1a2;eip=0x00332a; 	T(INC(di));	// 9363                  inc     di ;~ 01A2:332A
cs=0x1a2;eip=0x00332b; 	T(ax = di;);	// 9364                  mov     ax, di ;~ 01A2:332B
cs=0x1a2;eip=0x00332d; 	T(dx = es;);	// 9365                  mov     dx, es ;~ 01A2:332D
loc_1332f:
	// 4930 
cs=0x1a2;eip=0x00332f; 	X(POP(di));	// 9368                  pop     di ;~ 01A2:332F
cs=0x1a2;eip=0x003330; 	X(POP(si));	// 9369                  pop     si ;~ 01A2:3330
cs=0x1a2;eip=0x003331; 	T(sp = bp;);	// 9370                  mov     sp, bp ;~ 01A2:3331
cs=0x1a2;eip=0x003333; 	X(POP(bp));	// 9371                  pop     bp ;~ 01A2:3333
cs=0x1a2;eip=0x003334; 	J(RETF(0));	// 9372                  retf ;~ 01A2:3334

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___getenv: 	goto ___getenv;
        case m2c::kloc_132f6: 	goto loc_132f6;
        case m2c::kloc_132fc: 	goto loc_132fc;
        case m2c::kloc_13303: 	goto loc_13303;
        case m2c::kloc_1332f: 	goto loc_1332f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___itoa(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___itoa:
    _begin:
#undef value
#define value 6
	// 9384 value           = word ptr  6 ;~ 01A2:3335
#undef string
#define string 8
	// 9385 string          = dword ptr  8 ;~ 01A2:3335
#undef radix
#define radix 0x0C
	// 9386 radix           = word ptr  0Ch ;~ 01A2:3335
cs=0x1a2;eip=0x003335; 	X(PUSH(bp));	// 9388                  push    bp ;~ 01A2:3335
cs=0x1a2;eip=0x003336; 	T(bp = sp;);	// 9389                  mov     bp, sp ;~ 01A2:3336
cs=0x1a2;eip=0x003338; 	T(MOV(bx, *(dw*)(raddr(ss,bp+value))));	// 9390                  mov     bx, [bp+value] ;~ 01A2:3338
cs=0x1a2;eip=0x00333b; 	T(MOV(cx, *(dw*)(raddr(ss,bp+radix))));	// 9391                  mov     cx, [bp+radix] ;~ 01A2:333B
cs=0x1a2;eip=0x00333e; 	T(CMP(cx, 0x0A));	// 9392                  cmp     cx, 0Ah ;~ 01A2:333E
cs=0x1a2;eip=0x003341; 	J(JNZ(loc_13348));	// 9393                  jnz     short loc_13348 ;~ 01A2:3341
cs=0x1a2;eip=0x003343; 	T(ax = bx;);	// 9394                  mov     ax, bx ;~ 01A2:3343
cs=0x1a2;eip=0x003345; 	T(CWD);	// 9395                  cwd ;~ 01A2:3345
cs=0x1a2;eip=0x003346; 	J(JMP(loc_1334c));	// 9396                  jmp     short loc_1334C ;~ 01A2:3346
loc_13348:
	// 4931 
cs=0x1a2;eip=0x003348; 	T(ax = bx;);	// 9400                  mov     ax, bx ;~ 01A2:3348
cs=0x1a2;eip=0x00334a; 	T(XOR(dx, dx));	// 9401                  xor     dx, dx ;~ 01A2:334A
loc_1334c:
	// 4932 
cs=0x1a2;eip=0x00334c; 	X(PUSH(dx));	// 9404                  push    dx ;~ 01A2:334C
cs=0x1a2;eip=0x00334d; 	X(PUSH(ax));	// 9405                  push    ax ;~ 01A2:334D
cs=0x1a2;eip=0x00334e; 	X(PUSH(*(dw*)(raddr(ss,bp+string+2))));	// 9406                  push    word ptr [bp+string+2] ;~ 01A2:334E
cs=0x1a2;eip=0x003351; 	X(PUSH(*(dw*)(raddr(ss,bp+string))));	// 9407                  push    word ptr [bp+string] ;~ 01A2:3351
cs=0x1a2;eip=0x003354; 	X(PUSH(cx));	// 9408                  push    cx ;~ 01A2:3354
cs=0x1a2;eip=0x003355; 	T(al = 1;);	// 9409                  mov     al, 1 ;~ 01A2:3355
cs=0x1a2;eip=0x003357; 	X(PUSH(ax));	// 9410                  push    ax ;~ 01A2:3357
cs=0x1a2;eip=0x003358; 	T(al = 0x61;);	// 9411                  mov     al, 61h ; 'a' ;~ 01A2:3358
cs=0x1a2;eip=0x00335a; 	X(PUSH(ax));	// 9412                  push    ax ;~ 01A2:335A
cs=0x1a2;eip=0x00335b; 	J(CALL(____longtoa,0));	// 9413                  call    ____LONGTOA ;~ 01A2:335B
cs=0x1a2;eip=0x00335e; 	X(POP(bp));	// 9414                  pop     bp ;~ 01A2:335E
cs=0x1a2;eip=0x00335f; 	J(RETF(0));	// 9415                  retf ;~ 01A2:335F

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___itoa: 	goto ___itoa;
        case m2c::kloc_13348: 	goto loc_13348;
        case m2c::kloc_1334c: 	goto loc_1334c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___ultoa(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___ultoa:
    _begin:
#undef value
#define value 6
	// 9426 value           = dword ptr  6 ;~ 01A2:3360
#undef string
#define string 0x0A
	// 9427 string          = dword ptr  0Ah ;~ 01A2:3360
#undef radix
#define radix 0x0E
	// 9428 radix           = word ptr  0Eh ;~ 01A2:3360
cs=0x1a2;eip=0x003360; 	X(PUSH(bp));	// 9430                  push    bp ;~ 01A2:3360
cs=0x1a2;eip=0x003361; 	T(bp = sp;);	// 9431                  mov     bp, sp ;~ 01A2:3361
cs=0x1a2;eip=0x003363; 	X(PUSH(*(dw*)(raddr(ss,bp+value+2))));	// 9432                  push    word ptr [bp+value+2] ;~ 01A2:3363
cs=0x1a2;eip=0x003366; 	X(PUSH(*(dw*)(raddr(ss,bp+value))));	// 9433                  push    word ptr [bp+value] ;~ 01A2:3366
cs=0x1a2;eip=0x003369; 	X(PUSH(*(dw*)(raddr(ss,bp+string+2))));	// 9434                  push    word ptr [bp+string+2] ;~ 01A2:3369
cs=0x1a2;eip=0x00336c; 	X(PUSH(*(dw*)(raddr(ss,bp+string))));	// 9435                  push    word ptr [bp+string] ;~ 01A2:336C
cs=0x1a2;eip=0x00336f; 	X(PUSH(*(dw*)(raddr(ss,bp+radix))));	// 9436                  push    [bp+radix] ;~ 01A2:336F
cs=0x1a2;eip=0x003372; 	T(al = 0;);	// 9437                  mov     al, 0 ;~ 01A2:3372
cs=0x1a2;eip=0x003374; 	X(PUSH(ax));	// 9438                  push    ax ;~ 01A2:3374
cs=0x1a2;eip=0x003375; 	T(al = 0x61;);	// 9439                  mov     al, 61h ; 'a' ;~ 01A2:3375
cs=0x1a2;eip=0x003377; 	X(PUSH(ax));	// 9440                  push    ax ;~ 01A2:3377
cs=0x1a2;eip=0x003378; 	J(CALL(____longtoa,0));	// 9441                  call    ____LONGTOA ;~ 01A2:3378
cs=0x1a2;eip=0x00337b; 	X(POP(bp));	// 9442                  pop     bp ;~ 01A2:337B
cs=0x1a2;eip=0x00337c; 	J(RETF(0));	// 9443                  retf ;~ 01A2:337C

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___ultoa: 	goto ___ultoa;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___ltoa(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___ltoa:
    _begin:
#undef value
#define value 6
	// 9454 value           = dword ptr  6 ;~ 01A2:337D
#undef string
#define string 0x0A
	// 9455 string          = dword ptr  0Ah ;~ 01A2:337D
#undef radix
#define radix 0x0E
	// 9456 radix           = word ptr  0Eh ;~ 01A2:337D
cs=0x1a2;eip=0x00337d; 	X(PUSH(bp));	// 9458                  push    bp ;~ 01A2:337D
cs=0x1a2;eip=0x00337e; 	T(bp = sp;);	// 9459                  mov     bp, sp ;~ 01A2:337E
cs=0x1a2;eip=0x003380; 	T(MOV(ax, *(dw*)(raddr(ss,bp+radix))));	// 9460                  mov     ax, [bp+radix] ;~ 01A2:3380
cs=0x1a2;eip=0x003383; 	X(PUSH(*(dw*)(raddr(ss,bp+value+2))));	// 9461                  push    word ptr [bp+value+2] ;~ 01A2:3383
cs=0x1a2;eip=0x003386; 	X(PUSH(*(dw*)(raddr(ss,bp+value))));	// 9462                  push    word ptr [bp+value] ;~ 01A2:3386
cs=0x1a2;eip=0x003389; 	X(PUSH(*(dw*)(raddr(ss,bp+string+2))));	// 9463                  push    word ptr [bp+string+2] ;~ 01A2:3389
cs=0x1a2;eip=0x00338c; 	X(PUSH(*(dw*)(raddr(ss,bp+string))));	// 9464                  push    word ptr [bp+string] ;~ 01A2:338C
cs=0x1a2;eip=0x00338f; 	X(PUSH(ax));	// 9465                  push    ax ;~ 01A2:338F
cs=0x1a2;eip=0x003390; 	T(CMP(ax, 0x0A));	// 9466                  cmp     ax, 0Ah ;~ 01A2:3390
cs=0x1a2;eip=0x003393; 	J(JNZ(loc_1339a));	// 9467                  jnz     short loc_1339A ;~ 01A2:3393
cs=0x1a2;eip=0x003395; 	T(ax = 1;);	// 9468                  mov     ax, 1 ;~ 01A2:3395
cs=0x1a2;eip=0x003398; 	J(JMP(loc_1339c));	// 9469                  jmp     short loc_1339C ;~ 01A2:3398
loc_1339a:
	// 4933 
cs=0x1a2;eip=0x00339a; 	T(XOR(ax, ax));	// 9473                  xor     ax, ax ;~ 01A2:339A
loc_1339c:
	// 4934 
cs=0x1a2;eip=0x00339c; 	X(PUSH(ax));	// 9476                  push    ax ;~ 01A2:339C
cs=0x1a2;eip=0x00339d; 	T(al = 0x61;);	// 9477                  mov     al, 61h ; 'a' ;~ 01A2:339D
cs=0x1a2;eip=0x00339f; 	X(PUSH(ax));	// 9478                  push    ax ;~ 01A2:339F
cs=0x1a2;eip=0x0033a0; 	J(CALL(____longtoa,0));	// 9479                  call    ____LONGTOA ;~ 01A2:33A0
cs=0x1a2;eip=0x0033a3; 	X(POP(bp));	// 9480                  pop     bp ;~ 01A2:33A3
cs=0x1a2;eip=0x0033a4; 	J(RETF(0));	// 9481                  retf ;~ 01A2:33A4

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___ltoa: 	goto ___ltoa;
        case m2c::kloc_1339a: 	goto loc_1339a;
        case m2c::kloc_1339c: 	goto loc_1339c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___memcpy(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___memcpy:
    _begin:
#undef dest
#define dest 6
	// 9493 dest            = dword ptr  6 ;~ 01A2:33A5
#undef src
#define src 0x0A
	// 9494 src             = dword ptr  0Ah ;~ 01A2:33A5
#undef n
#define n 0x0E
	// 9495 n               = word ptr  0Eh ;~ 01A2:33A5
cs=0x1a2;eip=0x0033a5; 	X(PUSH(bp));	// 9497                  push    bp ;~ 01A2:33A5
cs=0x1a2;eip=0x0033a6; 	T(bp = sp;);	// 9498                  mov     bp, sp ;~ 01A2:33A6
cs=0x1a2;eip=0x0033a8; 	X(PUSH(si));	// 9499                  push    si ;~ 01A2:33A8
cs=0x1a2;eip=0x0033a9; 	X(PUSH(di));	// 9500                  push    di ;~ 01A2:33A9
cs=0x1a2;eip=0x0033aa; 	T(dx = ds;);	// 9501                  mov     dx, ds ;~ 01A2:33AA
cs=0x1a2;eip=0x0033ac; 	T(LES(di, *(dd*)(raddr(ss,bp+dest))));	// 9502                  les     di, [bp+dest] ;~ 01A2:33AC
cs=0x1a2;eip=0x0033af; 	T(LDS(si, *(dd*)(raddr(ss,bp+src))));	// 9503                  lds     si, [bp+src] ;~ 01A2:33AF
cs=0x1a2;eip=0x0033b2; 	T(MOV(cx, *(dw*)(raddr(ss,bp+n))));	// 9504                  mov     cx, [bp+n] ;~ 01A2:33B2
cs=0x1a2;eip=0x0033b5; 	T(SHR(cx, 1));	// 9505                  shr     cx, 1 ;~ 01A2:33B5
cs=0x1a2;eip=0x0033b7; 	T(CLD);	// 9506                  cld ;~ 01A2:33B7
	// 9507                  rep movsw ;~ 01A2:33B8
cs=0x1a2;eip=0x0033b8; 	X(	REP MOVSW);	// 9507                  rep movsw ;~ 01A2:33B8
cs=0x1a2;eip=0x0033ba; 	J(JNC(loc_133bd));	// 9508                  jnb     short loc_133BD ;~ 01A2:33BA
cs=0x1a2;eip=0x0033bc; 	X(MOVSB);	// 9509                  movsb ;~ 01A2:33BC
loc_133bd:
	// 4935 
cs=0x1a2;eip=0x0033bd; 	T(ds = dx;);	// 9512                  mov     ds, dx ;~ 01A2:33BD
cs=0x1a2;eip=0x0033bf; 	T(MOV(dx, *(dw*)(raddr(ss,bp+dest+2))));	// 9513                  mov     dx, word ptr [bp+dest+2] ;~ 01A2:33BF
cs=0x1a2;eip=0x0033c2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+dest))));	// 9514                  mov     ax, word ptr [bp+dest] ;~ 01A2:33C2
cs=0x1a2;eip=0x0033c5; 	X(POP(di));	// 9515                  pop     di ;~ 01A2:33C5
cs=0x1a2;eip=0x0033c6; 	X(POP(si));	// 9516                  pop     si ;~ 01A2:33C6
cs=0x1a2;eip=0x0033c7; 	X(POP(bp));	// 9517                  pop     bp ;~ 01A2:33C7
cs=0x1a2;eip=0x0033c8; 	J(RETF(0));	// 9518                  retf ;~ 01A2:33C8

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___memcpy: 	goto ___memcpy;
        case m2c::kloc_133bd: 	goto loc_133bd;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___setmem(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___setmem:
    _begin:
#undef dest
#define dest 6
	// 9529 dest            = dword ptr  6 ;~ 01A2:33C9
#undef _length
#define _length 0x0A
	// 9530 _length         = word ptr  0Ah ;~ 01A2:33C9
#undef value
#define value 0x0C
	// 9531 value           = byte ptr  0Ch ;~ 01A2:33C9
cs=0x1a2;eip=0x0033c9; 	X(PUSH(bp));	// 9533                  push    bp ;~ 01A2:33C9
cs=0x1a2;eip=0x0033ca; 	T(bp = sp;);	// 9534                  mov     bp, sp ;~ 01A2:33CA
cs=0x1a2;eip=0x0033cc; 	X(PUSH(di));	// 9535                  push    di ;~ 01A2:33CC
cs=0x1a2;eip=0x0033cd; 	T(LES(di, *(dd*)(raddr(ss,bp+dest))));	// 9536                  les     di, [bp+dest] ;~ 01A2:33CD
cs=0x1a2;eip=0x0033d0; 	T(MOV(cx, *(dw*)(raddr(ss,bp+_length))));	// 9537                  mov     cx, [bp+_length] ;~ 01A2:33D0
cs=0x1a2;eip=0x0033d3; 	T(MOV(al, *(raddr(ss,bp+value))));	// 9538                  mov     al, [bp+value] ;~ 01A2:33D3
cs=0x1a2;eip=0x0033d6; 	T(ah = al;);	// 9539                  mov     ah, al ;~ 01A2:33D6
cs=0x1a2;eip=0x0033d8; 	T(CLD);	// 9540                  cld ;~ 01A2:33D8
cs=0x1a2;eip=0x0033d9; 	T(TEST(di, 1));	// 9541                  test    di, 1 ;~ 01A2:33D9
cs=0x1a2;eip=0x0033dd; 	J(JZ(loc_133e3));	// 9542                  jz      short loc_133E3 ;~ 01A2:33DD
cs=0x1a2;eip=0x0033df; 	J(JCXZ(loc_133ea));	// 9543                  jcxz    short loc_133EA ;~ 01A2:33DF
cs=0x1a2;eip=0x0033e1; 	X(STOSB);	// 9544                  stosb ;~ 01A2:33E1
cs=0x1a2;eip=0x0033e2; 	T(DEC(cx));	// 9545                  dec     cx ;~ 01A2:33E2
loc_133e3:
	// 4936 
cs=0x1a2;eip=0x0033e3; 	T(SHR(cx, 1));	// 9548                  shr     cx, 1 ;~ 01A2:33E3
	// 9549                  rep stosw ;~ 01A2:33E5
cs=0x1a2;eip=0x0033e5; 	X(	REP STOSW);	// 9549                  rep stosw ;~ 01A2:33E5
cs=0x1a2;eip=0x0033e7; 	J(JNC(loc_133ea));	// 9550                  jnb     short loc_133EA ;~ 01A2:33E7
cs=0x1a2;eip=0x0033e9; 	X(STOSB);	// 9551                  stosb ;~ 01A2:33E9
loc_133ea:
	// 4937 
cs=0x1a2;eip=0x0033ea; 	X(POP(di));	// 9555                  pop     di ;~ 01A2:33EA
cs=0x1a2;eip=0x0033eb; 	X(POP(bp));	// 9556                  pop     bp ;~ 01A2:33EB
cs=0x1a2;eip=0x0033ec; 	J(RETF(0));	// 9557                  retf ;~ 01A2:33EC

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___setmem: 	goto ___setmem;
        case m2c::kloc_133e3: 	goto loc_133e3;
        case m2c::kloc_133ea: 	goto loc_133ea;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___memset(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___memset:
    _begin:
#undef s
#define s 6
	// 9569 s               = dword ptr  6 ;~ 01A2:33ED
#undef _c
#define _c 0x0A
	// 9570 _c              = word ptr  0Ah ;~ 01A2:33ED
#undef n
#define n 0x0C
	// 9571 n               = word ptr  0Ch ;~ 01A2:33ED
cs=0x1a2;eip=0x0033ed; 	X(PUSH(bp));	// 9573                  push    bp ;~ 01A2:33ED
cs=0x1a2;eip=0x0033ee; 	T(bp = sp;);	// 9574                  mov     bp, sp ;~ 01A2:33EE
cs=0x1a2;eip=0x0033f0; 	T(MOV(al, *(raddr(ss,bp+_c))));	// 9575                  mov     al, byte ptr [bp+_c] ;~ 01A2:33F0
cs=0x1a2;eip=0x0033f3; 	X(PUSH(ax));	// 9576                  push    ax              ; value ;~ 01A2:33F3
cs=0x1a2;eip=0x0033f4; 	X(PUSH(*(dw*)(raddr(ss,bp+n))));	// 9577                  push    [bp+n]          ; length ;~ 01A2:33F4
cs=0x1a2;eip=0x0033f7; 	X(PUSH(*(dw*)(raddr(ss,bp+s+2))));	// 9578                  push    word ptr [bp+s+2] ;~ 01A2:33F7
cs=0x1a2;eip=0x0033fa; 	X(PUSH(*(dw*)(raddr(ss,bp+s))));	// 9579                  push    word ptr [bp+s] ; dest ;~ 01A2:33FA
cs=0x1a2;eip=0x0033fd; 	X(PUSH(cs));	// 9580                  push    cs ;~ 01A2:33FD
cs=0x1a2;eip=0x0033fe; 	J(CALL(___setmem,0));	// 9581                  call    near ptr ___setmem ;~ 01A2:33FE
cs=0x1a2;eip=0x003401; 	T(ADD(sp, 8));	// 9582                  add     sp, 8 ;~ 01A2:3401
cs=0x1a2;eip=0x003404; 	T(MOV(dx, *(dw*)(raddr(ss,bp+s+2))));	// 9583                  mov     dx, word ptr [bp+s+2] ;~ 01A2:3404
cs=0x1a2;eip=0x003407; 	T(MOV(ax, *(dw*)(raddr(ss,bp+s))));	// 9584                  mov     ax, word ptr [bp+s] ;~ 01A2:3407
cs=0x1a2;eip=0x00340a; 	X(POP(bp));	// 9585                  pop     bp ;~ 01A2:340A
cs=0x1a2;eip=0x00340b; 	J(RETF(0));	// 9586                  retf ;~ 01A2:340B

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___memset: 	goto ___memset;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1340c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1340c:
    _begin:
#undef arg_0
#define arg_0 4
	// 9597 arg_0           = word ptr  4 ;~ 01A2:340C
#undef arg_2
#define arg_2 6
	// 9598 arg_2           = dword ptr  6 ;~ 01A2:340C
cs=0x1a2;eip=0x00340c; 	X(PUSH(bp));	// 9600                  push    bp ;~ 01A2:340C
cs=0x1a2;eip=0x00340d; 	T(bp = sp;);	// 9601                  mov     bp, sp ;~ 01A2:340D
cs=0x1a2;eip=0x00340f; 	X(PUSH(ds));	// 9602                  push    ds ;~ 01A2:340F
cs=0x1a2;eip=0x003410; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_0))));	// 9603                  mov     cx, [bp+arg_0] ;~ 01A2:3410
cs=0x1a2;eip=0x003413; 	T(ah = 0x3C;);	// 9604                  mov     ah, 3Ch ; '<' ;~ 01A2:3413
cs=0x1a2;eip=0x003415; 	T(LDS(dx, *(dd*)(raddr(ss,bp+arg_2))));	// 9605                  lds     dx, [bp+arg_2] ;~ 01A2:3415
cs=0x1a2;eip=0x003418; 	S(_INT(0x21));	// 9606                  int     21h             ; DOS - 2+ - CREATE A FILE WITH HANDLE (CREAT) ;~ 01A2:3418
cs=0x1a2;eip=0x00341a; 	X(POP(ds));	// 9609                  pop     ds ;~ 01A2:341A
cs=0x1a2;eip=0x00341b; 	J(JC(loc_1341f));	// 9610                  jb      short loc_1341F ;~ 01A2:341B
cs=0x1a2;eip=0x00341d; 	J(JMP(loc_13423));	// 9611                  jmp     short loc_13423 ;~ 01A2:341D
loc_1341f:
	// 4938 
cs=0x1a2;eip=0x00341f; 	X(PUSH(ax));	// 9615                  push    ax ;~ 01A2:341F
cs=0x1a2;eip=0x003420; 	J(CALL(____ioerror,0));	// 9616                  call    ____IOERROR ;~ 01A2:3420
loc_13423:
	// 4939 
cs=0x1a2;eip=0x003423; 	X(POP(bp));	// 9619                  pop     bp ;~ 01A2:3423
cs=0x1a2;eip=0x003424; 	J(RETN(6));	// 9620                  retn    6 ;~ 01A2:3424

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1341f: 	goto loc_1341f;
        case m2c::kloc_13423: 	goto loc_13423;
        case m2c::ksub_1340c: 	goto sub_1340c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13427(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13427:
    _begin:
#undef arg_0
#define arg_0 4
	// 9630 arg_0           = word ptr  4 ;~ 01A2:3427
cs=0x1a2;eip=0x003427; 	X(PUSH(bp));	// 9632                  push    bp ;~ 01A2:3427
cs=0x1a2;eip=0x003428; 	T(bp = sp;);	// 9633                  mov     bp, sp ;~ 01A2:3428
cs=0x1a2;eip=0x00342a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9634                  mov     bx, [bp+arg_0] ;~ 01A2:342A
cs=0x1a2;eip=0x00342d; 	T(SUB(cx, cx));	// 9635                  sub     cx, cx ;~ 01A2:342D
cs=0x1a2;eip=0x00342f; 	T(SUB(dx, dx));	// 9636                  sub     dx, dx ;~ 01A2:342F
cs=0x1a2;eip=0x003431; 	T(ah = 0x40;);	// 9637                  mov     ah, 40h ;~ 01A2:3431
cs=0x1a2;eip=0x003433; 	S(_INT(0x21));	// 9638                  int     21h             ; DOS - 2+ - WRITE TO FILE WITH HANDLE ;~ 01A2:3433
cs=0x1a2;eip=0x003435; 	X(POP(bp));	// 9640                  pop     bp ;~ 01A2:3435
cs=0x1a2;eip=0x003436; 	J(RETN(2));	// 9641                  retn    2 ;~ 01A2:3436

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_13427: 	goto sub_13427;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___open_0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___open_0:
    _begin:
#undef var_4
#define var_4 -4
	// 9653 var_4           = word ptr -4 ;~ 01A2:3439
#undef var_2
#define var_2 -2
	// 9654 var_2           = word ptr -2 ;~ 01A2:3439
#undef pathname
#define pathname 6
	// 9655 pathname        = dword ptr  6 ;~ 01A2:3439
#undef access
#define access 0x0A
	// 9656 access          = word ptr  0Ah ;~ 01A2:3439
#undef arg_6
#define arg_6 0x0C
	// 9657 arg_6           = word ptr  0Ch ;~ 01A2:3439
cs=0x1a2;eip=0x003439; 	X(PUSH(bp));	// 9659                  push    bp ;~ 01A2:3439
cs=0x1a2;eip=0x00343a; 	T(bp = sp;);	// 9660                  mov     bp, sp ;~ 01A2:343A
cs=0x1a2;eip=0x00343c; 	T(SUB(sp, 4));	// 9661                  sub     sp, 4 ;~ 01A2:343C
cs=0x1a2;eip=0x00343f; 	X(PUSH(si));	// 9662                  push    si ;~ 01A2:343F
cs=0x1a2;eip=0x003440; 	X(PUSH(di));	// 9663                  push    di ;~ 01A2:3440
cs=0x1a2;eip=0x003441; 	T(MOV(si, *(dw*)(raddr(ss,bp+access))));	// 9664                  mov     si, [bp+access] ;~ 01A2:3441
cs=0x1a2;eip=0x003444; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_6))));	// 9665                  mov     di, [bp+arg_6] ;~ 01A2:3444
cs=0x1a2;eip=0x003447; 	T(TEST(si, 0x0C000));	// 9666                  test    si, 0C000h ;~ 01A2:3447
cs=0x1a2;eip=0x00344b; 	J(JNZ(loc_13455));	// 9667                  jnz     short loc_13455 ;~ 01A2:344B
cs=0x1a2;eip=0x00344d; 	T(ax = *(dw*)(&byte_1916a););	// 9668                  mov     ax, word ptr byte_1916A ;~ 01A2:344D
cs=0x1a2;eip=0x003450; 	T(AND(ax, 0x0C000));	// 9669                  and     ax, 0C000h ;~ 01A2:3450
cs=0x1a2;eip=0x003453; 	T(OR(si, ax));	// 9670                  or      si, ax ;~ 01A2:3453
loc_13455:
	// 4940 
cs=0x1a2;eip=0x003455; 	T(XOR(ax, ax));	// 9673                  xor     ax, ax ;~ 01A2:3455
cs=0x1a2;eip=0x003457; 	X(PUSH(ax));	// 9674                  push    ax              ; func ;~ 01A2:3457
cs=0x1a2;eip=0x003458; 	X(PUSH(*(dw*)(raddr(ss,bp+pathname+2))));	// 9675                  push    word ptr [bp+pathname+2] ;~ 01A2:3458
cs=0x1a2;eip=0x00345b; 	X(PUSH(*(dw*)(raddr(ss,bp+pathname))));	// 9676                  push    word ptr [bp+pathname] ; pathname ;~ 01A2:345B
cs=0x1a2;eip=0x00345e; 	T(NOP);	// 9677                  nop ;~ 01A2:345E
cs=0x1a2;eip=0x00345f; 	X(PUSH(cs));	// 9678                  push    cs ;~ 01A2:345F
cs=0x1a2;eip=0x003460; 	J(CALL(____chmod,0));	// 9679                  call    near ptr ____chmod ;~ 01A2:3460
cs=0x1a2;eip=0x003463; 	T(ADD(sp, 6));	// 9680                  add     sp, 6 ;~ 01A2:3463
cs=0x1a2;eip=0x003466; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9681                  mov     [bp+var_2], ax ;~ 01A2:3466
cs=0x1a2;eip=0x003469; 	T(TEST(si, 0x100));	// 9682                  test    si, 100h ;~ 01A2:3469
cs=0x1a2;eip=0x00346d; 	J(JNZ(loc_13472));	// 9683                  jnz     short loc_13472 ;~ 01A2:346D
cs=0x1a2;eip=0x00346f; 	J(JMP(loc_134f2));	// 9684                  jmp     loc_134F2 ;~ 01A2:346F
loc_13472:
	// 4941 
cs=0x1a2;eip=0x003472; 	T(AND(di, *(dw*)(&byte_1916c)));	// 9688                  and     di, word ptr byte_1916C ;~ 01A2:3472
cs=0x1a2;eip=0x003476; 	T(ax = di;);	// 9689                  mov     ax, di ;~ 01A2:3476
cs=0x1a2;eip=0x003478; 	T(TEST(ax, 0x180));	// 9690                  test    ax, 180h ;~ 01A2:3478
cs=0x1a2;eip=0x00347b; 	J(JNZ(loc_13484));	// 9691                  jnz     short loc_13484 ;~ 01A2:347B
cs=0x1a2;eip=0x00347d; 	T(ax = 1;);	// 9692                  mov     ax, 1 ;~ 01A2:347D
cs=0x1a2;eip=0x003480; 	X(PUSH(ax));	// 9693                  push    ax ;~ 01A2:3480
cs=0x1a2;eip=0x003481; 	J(CALL(____ioerror,0));	// 9694                  call    ____IOERROR ;~ 01A2:3481
loc_13484:
	// 4942 
cs=0x1a2;eip=0x003484; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x0FFFF));	// 9697                  cmp     [bp+var_2], 0FFFFh ;~ 01A2:3484
cs=0x1a2;eip=0x003488; 	J(JNZ(loc_134ad));	// 9698                  jnz     short loc_134AD ;~ 01A2:3488
cs=0x1a2;eip=0x00348a; 	T(CMP(*(dw*)(&byte_1916e), 2));	// 9699                  cmp     word ptr byte_1916E, 2 ;~ 01A2:348A
cs=0x1a2;eip=0x00348f; 	J(JZ(loc_1349b));	// 9700                  jz      short loc_1349B ;~ 01A2:348F
cs=0x1a2;eip=0x003491; 	X(PUSH(*(dw*)(&byte_1916e)));	// 9701                  push    word ptr byte_1916E ;~ 01A2:3491
loc_13495:
	// 4943 
cs=0x1a2;eip=0x003495; 	J(CALL(____ioerror,0));	// 9704                  call    ____IOERROR ;~ 01A2:3495
cs=0x1a2;eip=0x003498; 	J(JMP(loc_135a2));	// 9705                  jmp     loc_135A2 ;~ 01A2:3498
loc_1349b:
	// 4944 
cs=0x1a2;eip=0x00349b; 	T(TEST(di, 0x80));	// 9709                  test    di, 80h ;~ 01A2:349B
cs=0x1a2;eip=0x00349f; 	J(JZ(loc_134a5));	// 9710                  jz      short loc_134A5 ;~ 01A2:349F
cs=0x1a2;eip=0x0034a1; 	T(XOR(ax, ax));	// 9711                  xor     ax, ax ;~ 01A2:34A1
cs=0x1a2;eip=0x0034a3; 	J(JMP(loc_134a8));	// 9712                  jmp     short loc_134A8 ;~ 01A2:34A3
loc_134a5:
	// 4945 
cs=0x1a2;eip=0x0034a5; 	T(ax = 1;);	// 9716                  mov     ax, 1 ;~ 01A2:34A5
loc_134a8:
	// 4946 
cs=0x1a2;eip=0x0034a8; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9719                  mov     [bp+var_2], ax ;~ 01A2:34A8
cs=0x1a2;eip=0x0034ab; 	J(JMP(loc_134b9));	// 9720                  jmp     short loc_134B9 ;~ 01A2:34AB
loc_134ad:
	// 4947 
cs=0x1a2;eip=0x0034ad; 	T(TEST(si, 0x400));	// 9724                  test    si, 400h ;~ 01A2:34AD
cs=0x1a2;eip=0x0034b1; 	J(JZ(loc_134f2));	// 9725                  jz      short loc_134F2 ;~ 01A2:34B1
cs=0x1a2;eip=0x0034b3; 	T(ax = 0x50;);	// 9726                  mov     ax, 50h ; 'P' ;~ 01A2:34B3
cs=0x1a2;eip=0x0034b6; 	X(PUSH(ax));	// 9727                  push    ax ;~ 01A2:34B6
cs=0x1a2;eip=0x0034b7; 	J(JMP(loc_13495));	// 9728                  jmp     short loc_13495 ;~ 01A2:34B7
loc_134b9:
	// 4948 
cs=0x1a2;eip=0x0034b9; 	T(TEST(si, 0x0F0));	// 9732                  test    si, 0F0h ;~ 01A2:34B9
cs=0x1a2;eip=0x0034bd; 	J(JZ(loc_134dd));	// 9733                  jz      short loc_134DD ;~ 01A2:34BD
cs=0x1a2;eip=0x0034bf; 	X(PUSH(*(dw*)(raddr(ss,bp+pathname+2))));	// 9734                  push    word ptr [bp+pathname+2] ;~ 01A2:34BF
cs=0x1a2;eip=0x0034c2; 	X(PUSH(*(dw*)(raddr(ss,bp+pathname))));	// 9735                  push    word ptr [bp+pathname] ;~ 01A2:34C2
cs=0x1a2;eip=0x0034c5; 	T(XOR(ax, ax));	// 9736                  xor     ax, ax ;~ 01A2:34C5
cs=0x1a2;eip=0x0034c7; 	X(PUSH(ax));	// 9737                  push    ax ;~ 01A2:34C7
cs=0x1a2;eip=0x0034c8; 	J(CALL(sub_1340c,0));	// 9738                  call    sub_1340C ;~ 01A2:34C8
cs=0x1a2;eip=0x0034cb; 	T(di = ax;);	// 9739                  mov     di, ax ;~ 01A2:34CB
cs=0x1a2;eip=0x0034cd; 	T(OR(ax, ax));	// 9740                  or      ax, ax ;~ 01A2:34CD
cs=0x1a2;eip=0x0034cf; 	J(JGE(loc_134d4));	// 9741                  jge     short loc_134D4 ;~ 01A2:34CF
cs=0x1a2;eip=0x0034d1; 	J(JMP(loc_135a0));	// 9742                  jmp     loc_135A0 ;~ 01A2:34D1
loc_134d4:
	// 4949 
cs=0x1a2;eip=0x0034d4; 	X(PUSH(di));	// 9746                  push    di              ; handle ;~ 01A2:34D4
cs=0x1a2;eip=0x0034d5; 	T(NOP);	// 9747                  nop ;~ 01A2:34D5
cs=0x1a2;eip=0x0034d6; 	X(PUSH(cs));	// 9748                  push    cs ;~ 01A2:34D6
cs=0x1a2;eip=0x0034d7; 	J(CALL(____close,0));	// 9749                  call    near ptr ____close ;~ 01A2:34D7
cs=0x1a2;eip=0x0034da; 	X(POP(cx));	// 9750                  pop     cx ;~ 01A2:34DA
cs=0x1a2;eip=0x0034db; 	J(JMP(loc_134f2));	// 9751                  jmp     short loc_134F2 ;~ 01A2:34DB
loc_134dd:
	// 4950 
cs=0x1a2;eip=0x0034dd; 	X(PUSH(*(dw*)(raddr(ss,bp+pathname+2))));	// 9755                  push    word ptr [bp+pathname+2] ;~ 01A2:34DD
cs=0x1a2;eip=0x0034e0; 	X(PUSH(*(dw*)(raddr(ss,bp+pathname))));	// 9756                  push    word ptr [bp+pathname] ;~ 01A2:34E0
cs=0x1a2;eip=0x0034e3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 9757                  push    [bp+var_2] ;~ 01A2:34E3
cs=0x1a2;eip=0x0034e6; 	J(CALL(sub_1340c,0));	// 9758                  call    sub_1340C ;~ 01A2:34E6
cs=0x1a2;eip=0x0034e9; 	T(di = ax;);	// 9759                  mov     di, ax ;~ 01A2:34E9
cs=0x1a2;eip=0x0034eb; 	T(OR(ax, ax));	// 9760                  or      ax, ax ;~ 01A2:34EB
cs=0x1a2;eip=0x0034ed; 	J(JGE(loc_1356d));	// 9761                  jge     short loc_1356D ;~ 01A2:34ED
cs=0x1a2;eip=0x0034ef; 	J(JMP(loc_135a0));	// 9762                  jmp     loc_135A0 ;~ 01A2:34EF
loc_134f2:
	// 4951 
cs=0x1a2;eip=0x0034f2; 	X(PUSH(si));	// 9767                  push    si              ; oflags ;~ 01A2:34F2
cs=0x1a2;eip=0x0034f3; 	X(PUSH(*(dw*)(raddr(ss,bp+pathname+2))));	// 9768                  push    word ptr [bp+pathname+2] ;~ 01A2:34F3
cs=0x1a2;eip=0x0034f6; 	X(PUSH(*(dw*)(raddr(ss,bp+pathname))));	// 9769                  push    word ptr [bp+pathname] ; path ;~ 01A2:34F6
cs=0x1a2;eip=0x0034f9; 	T(NOP);	// 9770                  nop ;~ 01A2:34F9
cs=0x1a2;eip=0x0034fa; 	X(PUSH(cs));	// 9771                  push    cs ;~ 01A2:34FA
cs=0x1a2;eip=0x0034fb; 	J(CALL(____open,0));	// 9772                  call    near ptr ____open ;~ 01A2:34FB
cs=0x1a2;eip=0x0034fe; 	T(ADD(sp, 6));	// 9773                  add     sp, 6 ;~ 01A2:34FE
cs=0x1a2;eip=0x003501; 	T(di = ax;);	// 9774                  mov     di, ax ;~ 01A2:3501
cs=0x1a2;eip=0x003503; 	T(OR(ax, ax));	// 9775                  or      ax, ax ;~ 01A2:3503
cs=0x1a2;eip=0x003505; 	J(JL(loc_1356d));	// 9776                  jl      short loc_1356D ;~ 01A2:3505
cs=0x1a2;eip=0x003507; 	T(XOR(ax, ax));	// 9777                  xor     ax, ax ;~ 01A2:3507
cs=0x1a2;eip=0x003509; 	X(PUSH(ax));	// 9778                  push    ax              ; func ;~ 01A2:3509
cs=0x1a2;eip=0x00350a; 	X(PUSH(di));	// 9779                  push    di              ; handle ;~ 01A2:350A
cs=0x1a2;eip=0x00350b; 	T(NOP);	// 9780                  nop ;~ 01A2:350B
cs=0x1a2;eip=0x00350c; 	X(PUSH(cs));	// 9781                  push    cs ;~ 01A2:350C
cs=0x1a2;eip=0x00350d; 	J(CALL(___ioctl,0));	// 9782                  call    near ptr ___ioctl ;~ 01A2:350D
cs=0x1a2;eip=0x003510; 	X(POP(cx));	// 9783                  pop     cx ;~ 01A2:3510
cs=0x1a2;eip=0x003511; 	X(POP(cx));	// 9784                  pop     cx ;~ 01A2:3511
cs=0x1a2;eip=0x003512; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 9785                  mov     [bp+var_4], ax ;~ 01A2:3512
cs=0x1a2;eip=0x003515; 	T(TEST(ax, 0x80));	// 9786                  test    ax, 80h ;~ 01A2:3515
cs=0x1a2;eip=0x003518; 	J(JZ(loc_1353d));	// 9787                  jz      short loc_1353D ;~ 01A2:3518
cs=0x1a2;eip=0x00351a; 	T(OR(si, 0x2000));	// 9788                  or      si, 2000h ;~ 01A2:351A
cs=0x1a2;eip=0x00351e; 	T(TEST(si, 0x8000));	// 9789                  test    si, 8000h ;~ 01A2:351E
cs=0x1a2;eip=0x003522; 	J(JZ(loc_13547));	// 9790                  jz      short loc_13547 ;~ 01A2:3522
cs=0x1a2;eip=0x003524; 	T(AND(ax, 0x0FF));	// 9791                  and     ax, 0FFh ;~ 01A2:3524
cs=0x1a2;eip=0x003527; 	T(OR(ax, 0x20));	// 9792                  or      ax, 20h ;~ 01A2:3527
cs=0x1a2;eip=0x00352a; 	T(XOR(dx, dx));	// 9793                  xor     dx, dx ;~ 01A2:352A
cs=0x1a2;eip=0x00352c; 	X(PUSH(dx));	// 9794                  push    dx ;~ 01A2:352C
cs=0x1a2;eip=0x00352d; 	X(PUSH(ax));	// 9795                  push    ax ;~ 01A2:352D
cs=0x1a2;eip=0x00352e; 	T(ax = 1;);	// 9796                  mov     ax, 1 ;~ 01A2:352E
cs=0x1a2;eip=0x003531; 	X(PUSH(ax));	// 9797                  push    ax              ; func ;~ 01A2:3531
cs=0x1a2;eip=0x003532; 	X(PUSH(di));	// 9798                  push    di              ; handle ;~ 01A2:3532
cs=0x1a2;eip=0x003533; 	T(NOP);	// 9799                  nop ;~ 01A2:3533
cs=0x1a2;eip=0x003534; 	X(PUSH(cs));	// 9800                  push    cs ;~ 01A2:3534
cs=0x1a2;eip=0x003535; 	J(CALL(___ioctl,0));	// 9801                  call    near ptr ___ioctl ;~ 01A2:3535
cs=0x1a2;eip=0x003538; 	T(ADD(sp, 8));	// 9802                  add     sp, 8 ;~ 01A2:3538
cs=0x1a2;eip=0x00353b; 	J(JMP(loc_13547));	// 9803                  jmp     short loc_13547 ;~ 01A2:353B
loc_1353d:
	// 4952 
cs=0x1a2;eip=0x00353d; 	T(TEST(si, 0x200));	// 9807                  test    si, 200h ;~ 01A2:353D
cs=0x1a2;eip=0x003541; 	J(JZ(loc_13547));	// 9808                  jz      short loc_13547 ;~ 01A2:3541
cs=0x1a2;eip=0x003543; 	X(PUSH(di));	// 9809                  push    di ;~ 01A2:3543
cs=0x1a2;eip=0x003544; 	J(CALL(sub_13427,0));	// 9810                  call    sub_13427 ;~ 01A2:3544
loc_13547:
	// 4953 
cs=0x1a2;eip=0x003547; 	T(TEST(*(dw*)(raddr(ss,bp+var_2)), 1));	// 9814                  test    [bp+var_2], 1 ;~ 01A2:3547
cs=0x1a2;eip=0x00354c; 	J(JZ(loc_1356d));	// 9815                  jz      short loc_1356D ;~ 01A2:354C
cs=0x1a2;eip=0x00354e; 	T(TEST(si, 0x100));	// 9816                  test    si, 100h ;~ 01A2:354E
cs=0x1a2;eip=0x003552; 	J(JZ(loc_1356d));	// 9817                  jz      short loc_1356D ;~ 01A2:3552
cs=0x1a2;eip=0x003554; 	T(TEST(si, 0x0F0));	// 9818                  test    si, 0F0h ;~ 01A2:3554
cs=0x1a2;eip=0x003558; 	J(JZ(loc_1356d));	// 9819                  jz      short loc_1356D ;~ 01A2:3558
cs=0x1a2;eip=0x00355a; 	T(ax = 1;);	// 9820                  mov     ax, 1 ;~ 01A2:355A
cs=0x1a2;eip=0x00355d; 	X(PUSH(ax));	// 9821                  push    ax ;~ 01A2:355D
cs=0x1a2;eip=0x00355e; 	X(PUSH(ax));	// 9822                  push    ax              ; func ;~ 01A2:355E
cs=0x1a2;eip=0x00355f; 	X(PUSH(*(dw*)(raddr(ss,bp+pathname+2))));	// 9823                  push    word ptr [bp+pathname+2] ;~ 01A2:355F
cs=0x1a2;eip=0x003562; 	X(PUSH(*(dw*)(raddr(ss,bp+pathname))));	// 9824                  push    word ptr [bp+pathname] ; pathname ;~ 01A2:3562
cs=0x1a2;eip=0x003565; 	T(NOP);	// 9825                  nop ;~ 01A2:3565
cs=0x1a2;eip=0x003566; 	X(PUSH(cs));	// 9826                  push    cs ;~ 01A2:3566
cs=0x1a2;eip=0x003567; 	J(CALL(____chmod,0));	// 9827                  call    near ptr ____chmod ;~ 01A2:3567
cs=0x1a2;eip=0x00356a; 	T(ADD(sp, 8));	// 9828                  add     sp, 8 ;~ 01A2:356A
loc_1356d:
	// 4954 
cs=0x1a2;eip=0x00356d; 	T(OR(di, di));	// 9832                  or      di, di ;~ 01A2:356D
cs=0x1a2;eip=0x00356f; 	J(JL(loc_135a0));	// 9833                  jl      short loc_135A0 ;~ 01A2:356F
cs=0x1a2;eip=0x003571; 	T(TEST(si, 0x300));	// 9834                  test    si, 300h ;~ 01A2:3571
cs=0x1a2;eip=0x003575; 	J(JZ(loc_1357c));	// 9835                  jz      short loc_1357C ;~ 01A2:3575
cs=0x1a2;eip=0x003577; 	T(ax = 0x1000;);	// 9836                  mov     ax, 1000h ;~ 01A2:3577
cs=0x1a2;eip=0x00357a; 	J(JMP(loc_1357e));	// 9837                  jmp     short loc_1357E ;~ 01A2:357A
loc_1357c:
	// 4955 
cs=0x1a2;eip=0x00357c; 	T(XOR(ax, ax));	// 9841                  xor     ax, ax ;~ 01A2:357C
loc_1357e:
	// 4956 
cs=0x1a2;eip=0x00357e; 	T(dx = si;);	// 9844                  mov     dx, si ;~ 01A2:357E
cs=0x1a2;eip=0x003580; 	T(AND(dx, 0x0F8FF));	// 9845                  and     dx, 0F8FFh ;~ 01A2:3580
cs=0x1a2;eip=0x003584; 	T(OR(dx, ax));	// 9846                  or      dx, ax ;~ 01A2:3584
cs=0x1a2;eip=0x003586; 	X(PUSH(dx));	// 9847                  push    dx ;~ 01A2:3586
cs=0x1a2;eip=0x003587; 	T(TEST(*(dw*)(raddr(ss,bp+var_2)), 1));	// 9848                  test    [bp+var_2], 1 ;~ 01A2:3587
cs=0x1a2;eip=0x00358c; 	J(JZ(loc_13592));	// 9849                  jz      short loc_13592 ;~ 01A2:358C
cs=0x1a2;eip=0x00358e; 	T(XOR(ax, ax));	// 9850                  xor     ax, ax ;~ 01A2:358E
cs=0x1a2;eip=0x003590; 	J(JMP(loc_13595));	// 9851                  jmp     short loc_13595 ;~ 01A2:3590
loc_13592:
	// 4957 
cs=0x1a2;eip=0x003592; 	T(ax = 0x100;);	// 9855                  mov     ax, 100h ;~ 01A2:3592
loc_13595:
	// 4958 
cs=0x1a2;eip=0x003595; 	X(POP(dx));	// 9858                  pop     dx ;~ 01A2:3595
cs=0x1a2;eip=0x003596; 	T(OR(dx, ax));	// 9859                  or      dx, ax ;~ 01A2:3596
cs=0x1a2;eip=0x003598; 	T(bx = di;);	// 9860                  mov     bx, di ;~ 01A2:3598
cs=0x1a2;eip=0x00359a; 	T(SHL(bx, 1));	// 9861                  shl     bx, 1 ;~ 01A2:359A
cs=0x1a2;eip=0x00359c; 	X(MOV(*(dw*)(raddr(ds,bx+0x862)), dx));	// 9862                  mov     [bx+862h], dx ;~ 01A2:359C
loc_135a0:
	// 4959 
cs=0x1a2;eip=0x0035a0; 	T(ax = di;);	// 9866                  mov     ax, di ;~ 01A2:35A0
loc_135a2:
	// 4960 
cs=0x1a2;eip=0x0035a2; 	X(POP(di));	// 9869                  pop     di ;~ 01A2:35A2
cs=0x1a2;eip=0x0035a3; 	X(POP(si));	// 9870                  pop     si ;~ 01A2:35A3
cs=0x1a2;eip=0x0035a4; 	T(sp = bp;);	// 9871                  mov     sp, bp ;~ 01A2:35A4
cs=0x1a2;eip=0x0035a6; 	X(POP(bp));	// 9872                  pop     bp ;~ 01A2:35A6
cs=0x1a2;eip=0x0035a7; 	J(RETF(0));	// 9873                  retf ;~ 01A2:35A7

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___open_0: 	goto ___open_0;
        case m2c::kloc_13455: 	goto loc_13455;
        case m2c::kloc_13472: 	goto loc_13472;
        case m2c::kloc_13484: 	goto loc_13484;
        case m2c::kloc_13495: 	goto loc_13495;
        case m2c::kloc_1349b: 	goto loc_1349b;
        case m2c::kloc_134a5: 	goto loc_134a5;
        case m2c::kloc_134a8: 	goto loc_134a8;
        case m2c::kloc_134ad: 	goto loc_134ad;
        case m2c::kloc_134b9: 	goto loc_134b9;
        case m2c::kloc_134d4: 	goto loc_134d4;
        case m2c::kloc_134dd: 	goto loc_134dd;
        case m2c::kloc_134f2: 	goto loc_134f2;
        case m2c::kloc_1353d: 	goto loc_1353d;
        case m2c::kloc_13547: 	goto loc_13547;
        case m2c::kloc_1356d: 	goto loc_1356d;
        case m2c::kloc_1357c: 	goto loc_1357c;
        case m2c::kloc_1357e: 	goto loc_1357e;
        case m2c::kloc_13592: 	goto loc_13592;
        case m2c::kloc_13595: 	goto loc_13595;
        case m2c::kloc_135a0: 	goto loc_135a0;
        case m2c::kloc_135a2: 	goto loc_135a2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____open(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____open:
    _begin:
#undef var_2
#define var_2 -2
	// 9884 var_2           = word ptr -2 ;~ 01A2:35A8
#undef path
#define path 6
	// 9885 path            = dword ptr  6 ;~ 01A2:35A8
#undef oflags
#define oflags 0x0A
	// 9886 oflags          = word ptr  0Ah ;~ 01A2:35A8
cs=0x1a2;eip=0x0035a8; 	X(PUSH(bp));	// 9888                  push    bp ;~ 01A2:35A8
cs=0x1a2;eip=0x0035a9; 	T(bp = sp;);	// 9889                  mov     bp, sp ;~ 01A2:35A9
cs=0x1a2;eip=0x0035ab; 	T(SUB(sp, 2));	// 9890                  sub     sp, 2 ;~ 01A2:35AB
cs=0x1a2;eip=0x0035ae; 	T(al = 1;);	// 9891                  mov     al, 1 ;~ 01A2:35AE
cs=0x1a2;eip=0x0035b0; 	T(MOV(cx, *(dw*)(raddr(ss,bp+oflags))));	// 9892                  mov     cx, [bp+oflags] ;~ 01A2:35B0
cs=0x1a2;eip=0x0035b3; 	T(TEST(cx, 2));	// 9893                  test    cx, 2 ;~ 01A2:35B3
cs=0x1a2;eip=0x0035b7; 	J(JNZ(loc_135c3));	// 9894                  jnz     short loc_135C3 ;~ 01A2:35B7
cs=0x1a2;eip=0x0035b9; 	T(al = 2;);	// 9895                  mov     al, 2 ;~ 01A2:35B9
cs=0x1a2;eip=0x0035bb; 	T(TEST(cx, 4));	// 9896                  test    cx, 4 ;~ 01A2:35BB
cs=0x1a2;eip=0x0035bf; 	J(JNZ(loc_135c3));	// 9897                  jnz     short loc_135C3 ;~ 01A2:35BF
cs=0x1a2;eip=0x0035c1; 	T(al = 0;);	// 9898                  mov     al, 0 ;~ 01A2:35C1
loc_135c3:
	// 4961 
cs=0x1a2;eip=0x0035c3; 	X(PUSH(ds));	// 9902                  push    ds ;~ 01A2:35C3
cs=0x1a2;eip=0x0035c4; 	T(LDS(dx, *(dd*)(raddr(ss,bp+path))));	// 9903                  lds     dx, [bp+path] ;~ 01A2:35C4
cs=0x1a2;eip=0x0035c7; 	T(cl = 0x0F0;);	// 9904                  mov     cl, 0F0h ; '
cs=0x1a2;eip=0x0035c9; 	T(AND(cl, *(raddr(ss,bp+oflags))));	// 9905                  and     cl, byte ptr [bp+oflags] ;~ 01A2:35C9
cs=0x1a2;eip=0x0035cc; 	T(OR(al, cl));	// 9906                  or      al, cl ;~ 01A2:35CC
cs=0x1a2;eip=0x0035ce; 	T(ah = 0x3D;);	// 9907                  mov     ah, 3Dh ;~ 01A2:35CE
cs=0x1a2;eip=0x0035d0; 	S(_INT(0x21));	// 9908                  int     21h             ; DOS - 2+ - OPEN DISK FILE WITH HANDLE ;~ 01A2:35D0
cs=0x1a2;eip=0x0035d2; 	X(POP(ds));	// 9912                  pop     ds ;~ 01A2:35D2
cs=0x1a2;eip=0x0035d3; 	J(JC(loc_135ef));	// 9913                  jb      short loc_135EF ;~ 01A2:35D3
cs=0x1a2;eip=0x0035d5; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9914                  mov     [bp+var_2], ax ;~ 01A2:35D5
cs=0x1a2;eip=0x0035d8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+oflags))));	// 9915                  mov     ax, [bp+oflags] ;~ 01A2:35D8
cs=0x1a2;eip=0x0035db; 	T(AND(ax, 0x0B8FF));	// 9916                  and     ax, 0B8FFh ;~ 01A2:35DB
cs=0x1a2;eip=0x0035de; 	T(OR(ax, 0x8000));	// 9917                  or      ax, 8000h ;~ 01A2:35DE
cs=0x1a2;eip=0x0035e1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 9918                  mov     bx, [bp+var_2] ;~ 01A2:35E1
cs=0x1a2;eip=0x0035e4; 	T(SHL(bx, 1));	// 9919                  shl     bx, 1 ;~ 01A2:35E4
cs=0x1a2;eip=0x0035e6; 	X(MOV(*(dw*)(raddr(ds,bx+0x862)), ax));	// 9920                  mov     [bx+862h], ax ;~ 01A2:35E6
cs=0x1a2;eip=0x0035ea; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 9921                  mov     ax, [bp+var_2] ;~ 01A2:35EA
cs=0x1a2;eip=0x0035ed; 	J(JMP(loc_135f3));	// 9922                  jmp     short loc_135F3 ;~ 01A2:35ED
loc_135ef:
	// 4962 
cs=0x1a2;eip=0x0035ef; 	X(PUSH(ax));	// 9926                  push    ax ;~ 01A2:35EF
cs=0x1a2;eip=0x0035f0; 	J(CALL(____ioerror,0));	// 9927                  call    ____IOERROR ;~ 01A2:35F0
loc_135f3:
	// 4963 
cs=0x1a2;eip=0x0035f3; 	T(sp = bp;);	// 9930                  mov     sp, bp ;~ 01A2:35F3
cs=0x1a2;eip=0x0035f5; 	X(POP(bp));	// 9931                  pop     bp ;~ 01A2:35F5
cs=0x1a2;eip=0x0035f6; 	J(RETF(0));	// 9932                  retf ;~ 01A2:35F6

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____open: 	goto ____open;
        case m2c::kloc_135c3: 	goto loc_135c3;
        case m2c::kloc_135ef: 	goto loc_135ef;
        case m2c::kloc_135f3: 	goto loc_135f3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___printf(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___printf:
    _begin:
#undef format
#define format 6
	// 9943 format          = dword ptr  6 ;~ 01A2:35F7
#undef arg_4
#define arg_4 0x0A
	// 9944 arg_4           = byte ptr  0Ah ;~ 01A2:35F7
cs=0x1a2;eip=0x0035f7; 	X(PUSH(bp));	// 9946                  push    bp ;~ 01A2:35F7
cs=0x1a2;eip=0x0035f8; 	T(bp = sp;);	// 9947                  mov     bp, sp ;~ 01A2:35F8
cs=0x1a2;eip=0x0035fa; 	T(ax = 0x37D7;);	// 9948                  mov     ax, 37D7h ;~ 01A2:35FA
cs=0x1a2;eip=0x0035fd; 	X(PUSH(ax));	// 9949                  push    ax ;~ 01A2:35FD
cs=0x1a2;eip=0x0035fe; 	X(PUSH(ds));	// 9950                  push    ds ;~ 01A2:35FE
cs=0x1a2;eip=0x0035ff; 	T(ax = 0x6E4;);	// 9951                  mov     ax, 6E4h ;~ 01A2:35FF
cs=0x1a2;eip=0x003602; 	X(PUSH(ax));	// 9952                  push    ax ;~ 01A2:3602
cs=0x1a2;eip=0x003603; 	X(PUSH(*(dw*)(raddr(ss,bp+format+2))));	// 9953                  push    word ptr [bp+format+2] ;~ 01A2:3603
cs=0x1a2;eip=0x003606; 	X(PUSH(*(dw*)(raddr(ss,bp+format))));	// 9954                  push    word ptr [bp+format] ;~ 01A2:3606
cs=0x1a2;eip=0x003609; 	T(ax = bp+arg_4);	// 9955                  lea     ax, [bp+arg_4] ;~ 01A2:3609
cs=0x1a2;eip=0x00360c; 	X(PUSH(ax));	// 9956                  push    ax ;~ 01A2:360C
cs=0x1a2;eip=0x00360d; 	J(CALL(____vprinter,0));	// 9957                  call    ____VPRINTER ;~ 01A2:360D
cs=0x1a2;eip=0x003610; 	X(POP(bp));	// 9958                  pop     bp ;~ 01A2:3610
cs=0x1a2;eip=0x003611; 	J(RETF(0));	// 9959                  retf ;~ 01A2:3611

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___printf: 	goto ___printf;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____fputc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____fputc:
    _begin:
#undef _c
#define _c 6
	// 9970 _c              = byte ptr  6 ;~ 01A2:3612
#undef stream
#define stream 8
	// 9971 stream          = dword ptr  8 ;~ 01A2:3612
cs=0x1a2;eip=0x003612; 	X(PUSH(bp));	// 9973                  push    bp ;~ 01A2:3612
cs=0x1a2;eip=0x003613; 	T(bp = sp;);	// 9974                  mov     bp, sp ;~ 01A2:3613
cs=0x1a2;eip=0x003615; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 9975                  les     bx, [bp+stream] ;~ 01A2:3615
cs=0x1a2;eip=0x003618; 	X(DEC(*(dw*)(raddr(es,bx))));	// 9976                  dec     word ptr es:[bx] ;~ 01A2:3618
cs=0x1a2;eip=0x00361b; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 9977                  push    word ptr [bp+stream+2] ;~ 01A2:361B
cs=0x1a2;eip=0x00361e; 	X(PUSH(bx));	// 9978                  push    bx              ; stream ;~ 01A2:361E
cs=0x1a2;eip=0x00361f; 	T(MOV(al, *(raddr(ss,bp+_c))));	// 9979                  mov     al, [bp+_c] ;~ 01A2:361F
cs=0x1a2;eip=0x003622; 	T(CBW);	// 9980                  cbw ;~ 01A2:3622
cs=0x1a2;eip=0x003623; 	X(PUSH(ax));	// 9981                  push    ax              ; c ;~ 01A2:3623
cs=0x1a2;eip=0x003624; 	T(NOP);	// 9982                  nop ;~ 01A2:3624
cs=0x1a2;eip=0x003625; 	X(PUSH(cs));	// 9983                  push    cs ;~ 01A2:3625
cs=0x1a2;eip=0x003626; 	J(CALL(___fputc,0));	// 9984                  call    near ptr ___fputc ;~ 01A2:3626
cs=0x1a2;eip=0x003629; 	T(ADD(sp, 6));	// 9985                  add     sp, 6 ;~ 01A2:3629
cs=0x1a2;eip=0x00362c; 	X(POP(bp));	// 9986                  pop     bp ;~ 01A2:362C
cs=0x1a2;eip=0x00362d; 	J(RETF(0));	// 9987                  retf ;~ 01A2:362D

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____fputc: 	goto ____fputc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___fputc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___fputc:
    _begin:
#undef _c
#define _c 6
	// 10000 _c              = word ptr  6 ;~ 01A2:362E
#undef stream
#define stream 8
	// 10001 stream          = dword ptr  8 ;~ 01A2:362E
cs=0x1a2;eip=0x00362e; 	X(PUSH(bp));	// 10003                  push    bp ;~ 01A2:362E
cs=0x1a2;eip=0x00362f; 	T(bp = sp;);	// 10004                  mov     bp, sp ;~ 01A2:362F
cs=0x1a2;eip=0x003631; 	X(PUSH(si));	// 10005                  push    si ;~ 01A2:3631
cs=0x1a2;eip=0x003632; 	T(MOV(al, *(raddr(ss,bp+_c))));	// 10006                  mov     al, byte ptr [bp+_c] ;~ 01A2:3632
cs=0x1a2;eip=0x003635; 	X(byte_194c6 = al;);	// 10007                  mov     byte_194C6, al ;~ 01A2:3635
cs=0x1a2;eip=0x003638; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 10008                  les     bx, [bp+stream] ;~ 01A2:3638
cs=0x1a2;eip=0x00363b; 	T(CMP(*(dw*)(raddr(es,bx)), 0x0FFFF));	// 10010                  cmp     word ptr es:[bx], 0FFFFh ;~ 01A2:363B
cs=0x1a2;eip=0x00363f; 	J(JGE(loc_13695));	// 10011                  jge     short loc_13695 ;~ 01A2:363F
cs=0x1a2;eip=0x003641; 	X(INC(*(dw*)(raddr(es,bx))));	// 10012                  inc     word ptr es:[bx] ;~ 01A2:3641
cs=0x1a2;eip=0x003644; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E))));	// 10013                  mov     ax, es:[bx+0Eh] ;~ 01A2:3644
cs=0x1a2;eip=0x003648; 	T(MOV(si, *(dw*)(raddr(es,bx+0x0C))));	// 10014                  mov     si, es:[bx+0Ch] ;~ 01A2:3648
cs=0x1a2;eip=0x00364c; 	X(INC(*(dw*)(raddr(es,bx+0x0C))));	// 10015                  inc     word ptr es:[bx+0Ch] ;~ 01A2:364C
cs=0x1a2;eip=0x003650; 	T(dl = byte_194c6;);	// 10016                  mov     dl, byte_194C6 ;~ 01A2:3650
cs=0x1a2;eip=0x003654; 	T(es = ax;);	// 10017                  mov     es, ax ;~ 01A2:3654
cs=0x1a2;eip=0x003656; 	X(MOV(*(raddr(es,si)), dl));	// 10019                  mov     es:[si], dl ;~ 01A2:3656
cs=0x1a2;eip=0x003659; 	T(MOV(es, *(dw*)(raddr(ss,bp+stream+2))));	// 10020                  mov     es, word ptr [bp+stream+2] ;~ 01A2:3659
cs=0x1a2;eip=0x00365c; 	T(TEST(*(dw*)(raddr(es,bx+2)), 8));	// 10021                  test    word ptr es:[bx+2], 8 ;~ 01A2:365C
cs=0x1a2;eip=0x003662; 	J(JNZ(loc_13667));	// 10022                  jnz     short loc_13667 ;~ 01A2:3662
cs=0x1a2;eip=0x003664; 	J(JMP(loc_137bb));	// 10023                  jmp     loc_137BB ;~ 01A2:3664
loc_13667:
	// 4964 
cs=0x1a2;eip=0x003667; 	T(CMP(byte_194c6, 0x0A));	// 10027                  cmp     byte_194C6, 0Ah ;~ 01A2:3667
cs=0x1a2;eip=0x00366c; 	J(JZ(loc_13678));	// 10028                  jz      short loc_13678 ;~ 01A2:366C
cs=0x1a2;eip=0x00366e; 	T(CMP(byte_194c6, 0x0D));	// 10029                  cmp     byte_194C6, 0Dh ;~ 01A2:366E
cs=0x1a2;eip=0x003673; 	J(JZ(loc_13678));	// 10030                  jz      short loc_13678 ;~ 01A2:3673
cs=0x1a2;eip=0x003675; 	J(JMP(loc_137bb));	// 10031                  jmp     loc_137BB ;~ 01A2:3675
loc_13678:
	// 4965 
cs=0x1a2;eip=0x003678; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 10036                  push    word ptr [bp+stream+2] ;~ 01A2:3678
cs=0x1a2;eip=0x00367b; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 10037                  push    word ptr [bp+stream] ; stream ;~ 01A2:367B
cs=0x1a2;eip=0x00367e; 	T(NOP);	// 10038                  nop ;~ 01A2:367E
cs=0x1a2;eip=0x00367f; 	X(PUSH(cs));	// 10039                  push    cs ;~ 01A2:367F
cs=0x1a2;eip=0x003680; 	J(CALL(___fflush,0));	// 10040                  call    near ptr ___fflush ;~ 01A2:3680
cs=0x1a2;eip=0x003683; 	X(POP(cx));	// 10041                  pop     cx ;~ 01A2:3683
cs=0x1a2;eip=0x003684; 	X(POP(cx));	// 10042                  pop     cx ;~ 01A2:3684
cs=0x1a2;eip=0x003685; 	T(OR(ax, ax));	// 10043                  or      ax, ax ;~ 01A2:3685
cs=0x1a2;eip=0x003687; 	J(JNZ(loc_1368c));	// 10044                  jnz     short loc_1368C ;~ 01A2:3687
cs=0x1a2;eip=0x003689; 	J(JMP(loc_137bb));	// 10045                  jmp     loc_137BB ;~ 01A2:3689
loc_1368c:
	// 4966 
cs=0x1a2;eip=0x00368c; 	T(ax = 0x0FFFF;);	// 10050                  mov     ax, 0FFFFh ;~ 01A2:368C
cs=0x1a2;eip=0x00368f; 	J(JMP(loc_137c0));	// 10051                  jmp     loc_137C0 ;~ 01A2:368F
ret_1a2_3692:
	// 4967 
cs=0x1a2;eip=0x003692; 	J(JMP(loc_137bb));	// 10053                  jmp     loc_137BB ;~ 01A2:3692
loc_13695:
	// 4968 
cs=0x1a2;eip=0x003695; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 10058                  les     bx, [bp+stream] ;~ 01A2:3695
cs=0x1a2;eip=0x003698; 	T(TEST(*(dw*)(raddr(es,bx+2)), 0x90));	// 10059                  test    word ptr es:[bx+2], 90h ;~ 01A2:3698
cs=0x1a2;eip=0x00369e; 	J(JNZ(loc_136a8));	// 10060                  jnz     short loc_136A8 ;~ 01A2:369E
cs=0x1a2;eip=0x0036a0; 	T(TEST(*(dw*)(raddr(es,bx+2)), 2));	// 10061                  test    word ptr es:[bx+2], 2 ;~ 01A2:36A0
cs=0x1a2;eip=0x0036a6; 	J(JNZ(loc_136b2));	// 10062                  jnz     short loc_136B2 ;~ 01A2:36A6
loc_136a8:
	// 4969 
cs=0x1a2;eip=0x0036a8; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 10066                  les     bx, [bp+stream] ;~ 01A2:36A8
cs=0x1a2;eip=0x0036ab; 	X(OR(*(dw*)(raddr(es,bx+2)), 0x10));	// 10068                  or      word ptr es:[bx+2], 10h ;~ 01A2:36AB
cs=0x1a2;eip=0x0036b0; 	J(JMP(loc_1368c));	// 10069                  jmp     short loc_1368C ;~ 01A2:36B0
loc_136b2:
	// 4970 
cs=0x1a2;eip=0x0036b2; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 10074                  les     bx, [bp+stream] ;~ 01A2:36B2
cs=0x1a2;eip=0x0036b5; 	X(OR(*(dw*)(raddr(es,bx+2)), 0x100));	// 10075                  or      word ptr es:[bx+2], 100h ;~ 01A2:36B5
cs=0x1a2;eip=0x0036bb; 	T(CMP(*(dw*)(raddr(es,bx+6)), 0));	// 10076                  cmp     word ptr es:[bx+6], 0 ;~ 01A2:36BB
cs=0x1a2;eip=0x0036c0; 	J(JZ(loc_13731));	// 10077                  jz      short loc_13731 ;~ 01A2:36C0
cs=0x1a2;eip=0x0036c2; 	T(CMP(*(dw*)(raddr(es,bx)), 0));	// 10078                  cmp     word ptr es:[bx], 0 ;~ 01A2:36C2
cs=0x1a2;eip=0x0036c6; 	J(JZ(loc_136d7));	// 10079                  jz      short loc_136D7 ;~ 01A2:36C6
cs=0x1a2;eip=0x0036c8; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 10080                  push    word ptr [bp+stream+2] ;~ 01A2:36C8
cs=0x1a2;eip=0x0036cb; 	X(PUSH(bx));	// 10081                  push    bx              ; stream ;~ 01A2:36CB
cs=0x1a2;eip=0x0036cc; 	T(NOP);	// 10082                  nop ;~ 01A2:36CC
cs=0x1a2;eip=0x0036cd; 	X(PUSH(cs));	// 10083                  push    cs ;~ 01A2:36CD
cs=0x1a2;eip=0x0036ce; 	J(CALL(___fflush,0));	// 10084                  call    near ptr ___fflush ;~ 01A2:36CE
cs=0x1a2;eip=0x0036d1; 	X(POP(cx));	// 10085                  pop     cx ;~ 01A2:36D1
cs=0x1a2;eip=0x0036d2; 	X(POP(cx));	// 10086                  pop     cx ;~ 01A2:36D2
cs=0x1a2;eip=0x0036d3; 	T(OR(ax, ax));	// 10087                  or      ax, ax ;~ 01A2:36D3
cs=0x1a2;eip=0x0036d5; 	J(JNZ(loc_1368c));	// 10088                  jnz     short loc_1368C ;~ 01A2:36D5
loc_136d7:
	// 4971 
cs=0x1a2;eip=0x0036d7; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 10091                  les     bx, [bp+stream] ;~ 01A2:36D7
cs=0x1a2;eip=0x0036da; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 10093                  mov     ax, es:[bx+6] ;~ 01A2:36DA
cs=0x1a2;eip=0x0036de; 	T(NEG(ax));	// 10094                  neg     ax ;~ 01A2:36DE
cs=0x1a2;eip=0x0036e0; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 10095                  mov     es:[bx], ax ;~ 01A2:36E0
cs=0x1a2;eip=0x0036e3; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E))));	// 10096                  mov     ax, es:[bx+0Eh] ;~ 01A2:36E3
cs=0x1a2;eip=0x0036e7; 	T(MOV(si, *(dw*)(raddr(es,bx+0x0C))));	// 10097                  mov     si, es:[bx+0Ch] ;~ 01A2:36E7
cs=0x1a2;eip=0x0036eb; 	X(INC(*(dw*)(raddr(es,bx+0x0C))));	// 10098                  inc     word ptr es:[bx+0Ch] ;~ 01A2:36EB
cs=0x1a2;eip=0x0036ef; 	T(dl = byte_194c6;);	// 10099                  mov     dl, byte_194C6 ;~ 01A2:36EF
cs=0x1a2;eip=0x0036f3; 	T(es = ax;);	// 10100                  mov     es, ax ;~ 01A2:36F3
cs=0x1a2;eip=0x0036f5; 	X(MOV(*(raddr(es,si)), dl));	// 10101                  mov     es:[si], dl ;~ 01A2:36F5
cs=0x1a2;eip=0x0036f8; 	T(MOV(es, *(dw*)(raddr(ss,bp+stream+2))));	// 10102                  mov     es, word ptr [bp+stream+2] ;~ 01A2:36F8
cs=0x1a2;eip=0x0036fb; 	T(TEST(*(dw*)(raddr(es,bx+2)), 8));	// 10103                  test    word ptr es:[bx+2], 8 ;~ 01A2:36FB
cs=0x1a2;eip=0x003701; 	J(JNZ(loc_13706));	// 10104                  jnz     short loc_13706 ;~ 01A2:3701
cs=0x1a2;eip=0x003703; 	J(JMP(loc_137bb));	// 10105                  jmp     loc_137BB ;~ 01A2:3703
loc_13706:
	// 4972 
cs=0x1a2;eip=0x003706; 	T(CMP(byte_194c6, 0x0A));	// 10109                  cmp     byte_194C6, 0Ah ;~ 01A2:3706
cs=0x1a2;eip=0x00370b; 	J(JZ(loc_13717));	// 10110                  jz      short loc_13717 ;~ 01A2:370B
cs=0x1a2;eip=0x00370d; 	T(CMP(byte_194c6, 0x0D));	// 10111                  cmp     byte_194C6, 0Dh ;~ 01A2:370D
cs=0x1a2;eip=0x003712; 	J(JZ(loc_13717));	// 10112                  jz      short loc_13717 ;~ 01A2:3712
cs=0x1a2;eip=0x003714; 	J(JMP(loc_137bb));	// 10113                  jmp     loc_137BB ;~ 01A2:3714
loc_13717:
	// 4973 
cs=0x1a2;eip=0x003717; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 10118                  push    word ptr [bp+stream+2] ;~ 01A2:3717
cs=0x1a2;eip=0x00371a; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 10119                  push    word ptr [bp+stream] ; stream ;~ 01A2:371A
cs=0x1a2;eip=0x00371d; 	T(NOP);	// 10120                  nop ;~ 01A2:371D
cs=0x1a2;eip=0x00371e; 	X(PUSH(cs));	// 10121                  push    cs ;~ 01A2:371E
cs=0x1a2;eip=0x00371f; 	J(CALL(___fflush,0));	// 10122                  call    near ptr ___fflush ;~ 01A2:371F
cs=0x1a2;eip=0x003722; 	X(POP(cx));	// 10123                  pop     cx ;~ 01A2:3722
cs=0x1a2;eip=0x003723; 	X(POP(cx));	// 10124                  pop     cx ;~ 01A2:3723
cs=0x1a2;eip=0x003724; 	T(OR(ax, ax));	// 10125                  or      ax, ax ;~ 01A2:3724
cs=0x1a2;eip=0x003726; 	J(JNZ(loc_1372b));	// 10126                  jnz     short loc_1372B ;~ 01A2:3726
cs=0x1a2;eip=0x003728; 	J(JMP(loc_137bb));	// 10127                  jmp     loc_137BB ;~ 01A2:3728
loc_1372b:
	// 4974 
cs=0x1a2;eip=0x00372b; 	J(JMP(loc_1368c));	// 10131                  jmp     loc_1368C ;~ 01A2:372B
ret_1a2_372e:
	// 4975 
cs=0x1a2;eip=0x00372e; 	J(JMP(loc_137bb));	// 10133                  jmp     loc_137BB ;~ 01A2:372E
loc_13731:
	// 4976 
cs=0x1a2;eip=0x003731; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 10138                  les     bx, [bp+stream] ;~ 01A2:3731
cs=0x1a2;eip=0x003734; 	T(MOV(al, *(raddr(es,bx+4))));	// 10139                  mov     al, es:[bx+4] ;~ 01A2:3734
cs=0x1a2;eip=0x003738; 	T(CBW);	// 10140                  cbw ;~ 01A2:3738
cs=0x1a2;eip=0x003739; 	T(SHL(ax, 1));	// 10141                  shl     ax, 1 ;~ 01A2:3739
cs=0x1a2;eip=0x00373b; 	T(bx = ax;);	// 10142                  mov     bx, ax ;~ 01A2:373B
cs=0x1a2;eip=0x00373d; 	T(TEST(*(dw*)(raddr(ds,bx+0x862)), 0x800));	// 10143                  test    word ptr [bx+862h], 800h ;~ 01A2:373D
cs=0x1a2;eip=0x003743; 	J(JZ(loc_13760));	// 10144                  jz      short loc_13760 ;~ 01A2:3743
cs=0x1a2;eip=0x003745; 	T(ax = 2;);	// 10145                  mov     ax, 2 ;~ 01A2:3745
cs=0x1a2;eip=0x003748; 	X(PUSH(ax));	// 10146                  push    ax              ; fromwhere ;~ 01A2:3748
cs=0x1a2;eip=0x003749; 	T(XOR(ax, ax));	// 10147                  xor     ax, ax ;~ 01A2:3749
cs=0x1a2;eip=0x00374b; 	T(XOR(dx, dx));	// 10148                  xor     dx, dx ;~ 01A2:374B
cs=0x1a2;eip=0x00374d; 	X(PUSH(ax));	// 10149                  push    ax ;~ 01A2:374D
cs=0x1a2;eip=0x00374e; 	X(PUSH(dx));	// 10150                  push    dx              ; offset ;~ 01A2:374E
cs=0x1a2;eip=0x00374f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+stream))));	// 10151                  mov     bx, word ptr [bp+stream] ;~ 01A2:374F
cs=0x1a2;eip=0x003752; 	T(MOV(al, *(raddr(es,bx+4))));	// 10152                  mov     al, es:[bx+4] ;~ 01A2:3752
cs=0x1a2;eip=0x003756; 	T(CBW);	// 10153                  cbw ;~ 01A2:3756
cs=0x1a2;eip=0x003757; 	X(PUSH(ax));	// 10154                  push    ax              ; handle ;~ 01A2:3757
cs=0x1a2;eip=0x003758; 	T(NOP);	// 10155                  nop ;~ 01A2:3758
cs=0x1a2;eip=0x003759; 	X(PUSH(cs));	// 10156                  push    cs ;~ 01A2:3759
cs=0x1a2;eip=0x00375a; 	J(CALL(___lseek,0));	// 10157                  call    near ptr ___lseek ;~ 01A2:375A
cs=0x1a2;eip=0x00375d; 	T(ADD(sp, 8));	// 10158                  add     sp, 8 ;~ 01A2:375D
loc_13760:
	// 4977 
cs=0x1a2;eip=0x003760; 	T(CMP(byte_194c6, 0x0A));	// 10161                  cmp     byte_194C6, 0Ah ;~ 01A2:3760
cs=0x1a2;eip=0x003765; 	J(JNZ(loc_1378e));	// 10162                  jnz     short loc_1378E ;~ 01A2:3765
cs=0x1a2;eip=0x003767; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 10163                  les     bx, [bp+stream] ;~ 01A2:3767
cs=0x1a2;eip=0x00376a; 	T(TEST(*(dw*)(raddr(es,bx+2)), 0x40));	// 10164                  test    word ptr es:[bx+2], 40h ;~ 01A2:376A
cs=0x1a2;eip=0x003770; 	J(JNZ(loc_1378e));	// 10165                  jnz     short loc_1378E ;~ 01A2:3770
cs=0x1a2;eip=0x003772; 	T(ax = 1;);	// 10166                  mov     ax, 1 ;~ 01A2:3772
cs=0x1a2;eip=0x003775; 	X(PUSH(ax));	// 10167                  push    ax              ; len ;~ 01A2:3775
cs=0x1a2;eip=0x003776; 	X(PUSH(ds));	// 10168                  push    ds ;~ 01A2:3776
cs=0x1a2;eip=0x003777; 	T(ax = 0x9C2;);	// 10169                  mov     ax, 9C2h ;~ 01A2:3777
cs=0x1a2;eip=0x00377a; 	X(PUSH(ax));	// 10170                  push    ax              ; buf ;~ 01A2:377A
cs=0x1a2;eip=0x00377b; 	T(MOV(al, *(raddr(es,bx+4))));	// 10171                  mov     al, es:[bx+4] ;~ 01A2:377B
cs=0x1a2;eip=0x00377f; 	T(CBW);	// 10172                  cbw ;~ 01A2:377F
cs=0x1a2;eip=0x003780; 	X(PUSH(ax));	// 10173                  push    ax              ; handle ;~ 01A2:3780
cs=0x1a2;eip=0x003781; 	T(NOP);	// 10174                  nop ;~ 01A2:3781
cs=0x1a2;eip=0x003782; 	X(PUSH(cs));	// 10175                  push    cs ;~ 01A2:3782
cs=0x1a2;eip=0x003783; 	J(CALL(____write,0));	// 10176                  call    near ptr ____write ;~ 01A2:3783
cs=0x1a2;eip=0x003786; 	T(ADD(sp, 8));	// 10177                  add     sp, 8 ;~ 01A2:3786
cs=0x1a2;eip=0x003789; 	T(CMP(ax, 1));	// 10178                  cmp     ax, 1 ;~ 01A2:3789
cs=0x1a2;eip=0x00378c; 	J(JNZ(loc_137ad));	// 10179                  jnz     short loc_137AD ;~ 01A2:378C
loc_1378e:
	// 4978 
cs=0x1a2;eip=0x00378e; 	T(ax = 1;);	// 10183                  mov     ax, 1 ;~ 01A2:378E
cs=0x1a2;eip=0x003791; 	X(PUSH(ax));	// 10184                  push    ax              ; len ;~ 01A2:3791
cs=0x1a2;eip=0x003792; 	X(PUSH(ds));	// 10185                  push    ds ;~ 01A2:3792
cs=0x1a2;eip=0x003793; 	T(ax = 0x0BE6;);	// 10186                  mov     ax, 0BE6h ;~ 01A2:3793
cs=0x1a2;eip=0x003796; 	X(PUSH(ax));	// 10187                  push    ax              ; buf ;~ 01A2:3796
cs=0x1a2;eip=0x003797; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 10188                  les     bx, [bp+stream] ;~ 01A2:3797
cs=0x1a2;eip=0x00379a; 	T(MOV(al, *(raddr(es,bx+4))));	// 10189                  mov     al, es:[bx+4] ;~ 01A2:379A
cs=0x1a2;eip=0x00379e; 	T(CBW);	// 10190                  cbw ;~ 01A2:379E
cs=0x1a2;eip=0x00379f; 	X(PUSH(ax));	// 10191                  push    ax              ; handle ;~ 01A2:379F
cs=0x1a2;eip=0x0037a0; 	T(NOP);	// 10192                  nop ;~ 01A2:37A0
cs=0x1a2;eip=0x0037a1; 	X(PUSH(cs));	// 10193                  push    cs ;~ 01A2:37A1
cs=0x1a2;eip=0x0037a2; 	J(CALL(____write,0));	// 10194                  call    near ptr ____write ;~ 01A2:37A2
cs=0x1a2;eip=0x0037a5; 	T(ADD(sp, 8));	// 10195                  add     sp, 8 ;~ 01A2:37A5
cs=0x1a2;eip=0x0037a8; 	T(CMP(ax, 1));	// 10196                  cmp     ax, 1 ;~ 01A2:37A8
cs=0x1a2;eip=0x0037ab; 	J(JZ(loc_137bb));	// 10197                  jz      short loc_137BB ;~ 01A2:37AB
loc_137ad:
	// 4979 
cs=0x1a2;eip=0x0037ad; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 10200                  les     bx, [bp+stream] ;~ 01A2:37AD
cs=0x1a2;eip=0x0037b0; 	T(TEST(*(dw*)(raddr(es,bx+2)), 0x200));	// 10202                  test    word ptr es:[bx+2], 200h ;~ 01A2:37B0
cs=0x1a2;eip=0x0037b6; 	J(JNZ(loc_137bb));	// 10203                  jnz     short loc_137BB ;~ 01A2:37B6
cs=0x1a2;eip=0x0037b8; 	J(JMP(loc_136a8));	// 10204                  jmp     loc_136A8 ;~ 01A2:37B8
loc_137bb:
	// 4980 
cs=0x1a2;eip=0x0037bb; 	T(al = byte_194c6;);	// 10210                  mov     al, byte_194C6 ;~ 01A2:37BB
cs=0x1a2;eip=0x0037be; 	T(ah = 0;);	// 10211                  mov     ah, 0 ;~ 01A2:37BE
loc_137c0:
	// 4981 
cs=0x1a2;eip=0x0037c0; 	X(POP(si));	// 10214                  pop     si ;~ 01A2:37C0
cs=0x1a2;eip=0x0037c1; 	X(POP(bp));	// 10215                  pop     bp ;~ 01A2:37C1
cs=0x1a2;eip=0x0037c2; 	J(RETF(0));	// 10216                  retf ;~ 01A2:37C2

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___fputc: 	goto ___fputc;
        case m2c::kloc_13667: 	goto loc_13667;
        case m2c::kloc_13678: 	goto loc_13678;
        case m2c::kloc_1368c: 	goto loc_1368c;
        case m2c::kloc_13695: 	goto loc_13695;
        case m2c::kloc_136a8: 	goto loc_136a8;
        case m2c::kloc_136b2: 	goto loc_136b2;
        case m2c::kloc_136d7: 	goto loc_136d7;
        case m2c::kloc_13706: 	goto loc_13706;
        case m2c::kloc_13717: 	goto loc_13717;
        case m2c::kloc_1372b: 	goto loc_1372b;
        case m2c::kloc_13731: 	goto loc_13731;
        case m2c::kloc_13760: 	goto loc_13760;
        case m2c::kloc_1378e: 	goto loc_1378e;
        case m2c::kloc_137ad: 	goto loc_137ad;
        case m2c::kloc_137bb: 	goto loc_137bb;
        case m2c::kloc_137c0: 	goto loc_137c0;
        case m2c::kret_1a2_3692: 	goto ret_1a2_3692;
        case m2c::kret_1a2_372e: 	goto ret_1a2_372e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___fputchar(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___fputchar:
    _begin:
#undef _c
#define _c 6
	// 10227 _c              = word ptr  6 ;~ 01A2:37C3
cs=0x1a2;eip=0x0037c3; 	X(PUSH(bp));	// 10229                  push    bp ;~ 01A2:37C3
cs=0x1a2;eip=0x0037c4; 	T(bp = sp;);	// 10230                  mov     bp, sp ;~ 01A2:37C4
cs=0x1a2;eip=0x0037c6; 	X(PUSH(ds));	// 10231                  push    ds ;~ 01A2:37C6
cs=0x1a2;eip=0x0037c7; 	T(ax = 0x6E4;);	// 10232                  mov     ax, 6E4h ;~ 01A2:37C7
cs=0x1a2;eip=0x0037ca; 	X(PUSH(ax));	// 10233                  push    ax              ; stream ;~ 01A2:37CA
cs=0x1a2;eip=0x0037cb; 	X(PUSH(*(dw*)(raddr(ss,bp+_c))));	// 10234                  push    [bp+_c]         ; c ;~ 01A2:37CB
cs=0x1a2;eip=0x0037ce; 	X(PUSH(cs));	// 10235                  push    cs ;~ 01A2:37CE
cs=0x1a2;eip=0x0037cf; 	J(CALL(___fputc,0));	// 10236                  call    near ptr ___fputc ;~ 01A2:37CF
cs=0x1a2;eip=0x0037d2; 	T(ADD(sp, 6));	// 10237                  add     sp, 6 ;~ 01A2:37D2
cs=0x1a2;eip=0x0037d5; 	X(POP(bp));	// 10238                  pop     bp ;~ 01A2:37D5
cs=0x1a2;eip=0x0037d6; 	J(RETF(0));	// 10239                  retf ;~ 01A2:37D6

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___fputchar: 	goto ___fputchar;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____fputn(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____fputn:
    _begin:
#undef var_2
#define var_2 -2
	// 10251 var_2           = word ptr -2 ;~ 01A2:37D7
#undef stream
#define stream 4
	// 10252 stream          = dword ptr  4 ;~ 01A2:37D7
#undef n
#define n 8
	// 10253 n               = word ptr  8 ;~ 01A2:37D7
#undef src
#define src 0x0A
	// 10254 src             = dword ptr  0Ah ;~ 01A2:37D7
cs=0x1a2;eip=0x0037d7; 	X(PUSH(bp));	// 10256                  push    bp ;~ 01A2:37D7
cs=0x1a2;eip=0x0037d8; 	T(bp = sp;);	// 10257                  mov     bp, sp ;~ 01A2:37D8
cs=0x1a2;eip=0x0037da; 	T(SUB(sp, 2));	// 10258                  sub     sp, 2 ;~ 01A2:37DA
cs=0x1a2;eip=0x0037dd; 	X(PUSH(si));	// 10259                  push    si ;~ 01A2:37DD
cs=0x1a2;eip=0x0037de; 	X(PUSH(di));	// 10260                  push    di ;~ 01A2:37DE
cs=0x1a2;eip=0x0037df; 	T(MOV(di, *(dw*)(raddr(ss,bp+n))));	// 10261                  mov     di, [bp+n] ;~ 01A2:37DF
cs=0x1a2;eip=0x0037e2; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), di));	// 10262                  mov     [bp+var_2], di ;~ 01A2:37E2
cs=0x1a2;eip=0x0037e5; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 10263                  les     bx, [bp+stream] ;~ 01A2:37E5
cs=0x1a2;eip=0x0037e8; 	T(TEST(*(dw*)(raddr(es,bx+2)), 8));	// 10264                  test    word ptr es:[bx+2], 8 ;~ 01A2:37E8
cs=0x1a2;eip=0x0037ee; 	J(JZ(loc_1381e));	// 10265                  jz      short loc_1381E ;~ 01A2:37EE
cs=0x1a2;eip=0x0037f0; 	J(JMP(loc_13814));	// 10266                  jmp     short loc_13814 ;~ 01A2:37F0
loc_137f2:
	// 4982 
cs=0x1a2;eip=0x0037f2; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 10270                  push    word ptr [bp+stream+2] ;~ 01A2:37F2
cs=0x1a2;eip=0x0037f5; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 10271                  push    word ptr [bp+stream] ; stream ;~ 01A2:37F5
cs=0x1a2;eip=0x0037f8; 	T(LES(bx, *(dd*)(raddr(ss,bp+src))));	// 10272                  les     bx, [bp+src] ;~ 01A2:37F8
cs=0x1a2;eip=0x0037fb; 	X(INC(*(dw*)(raddr(ss,bp+src))));	// 10274                  inc     word ptr [bp+src] ;~ 01A2:37FB
cs=0x1a2;eip=0x0037fe; 	T(MOV(al, *(raddr(es,bx))));	// 10275                  mov     al, es:[bx] ;~ 01A2:37FE
cs=0x1a2;eip=0x003801; 	T(CBW);	// 10276                  cbw ;~ 01A2:3801
cs=0x1a2;eip=0x003802; 	X(PUSH(ax));	// 10277                  push    ax              ; c ;~ 01A2:3802
cs=0x1a2;eip=0x003803; 	X(PUSH(cs));	// 10278                  push    cs ;~ 01A2:3803
cs=0x1a2;eip=0x003804; 	J(CALL(___fputc,0));	// 10279                  call    near ptr ___fputc ;~ 01A2:3804
cs=0x1a2;eip=0x003807; 	T(ADD(sp, 6));	// 10280                  add     sp, 6 ;~ 01A2:3807
cs=0x1a2;eip=0x00380a; 	T(CMP(ax, 0x0FFFF));	// 10281                  cmp     ax, 0FFFFh ;~ 01A2:380A
cs=0x1a2;eip=0x00380d; 	J(JNZ(loc_13814));	// 10282                  jnz     short loc_13814 ;~ 01A2:380D
loc_1380f:
	// 4983 
cs=0x1a2;eip=0x00380f; 	T(XOR(ax, ax));	// 10286                  xor     ax, ax ;~ 01A2:380F
cs=0x1a2;eip=0x003811; 	J(JMP(loc_139d2));	// 10287                  jmp     loc_139D2 ;~ 01A2:3811
loc_13814:
	// 4984 
cs=0x1a2;eip=0x003814; 	T(ax = di;);	// 10292                  mov     ax, di ;~ 01A2:3814
cs=0x1a2;eip=0x003816; 	T(DEC(di));	// 10293                  dec     di ;~ 01A2:3816
cs=0x1a2;eip=0x003817; 	T(OR(ax, ax));	// 10294                  or      ax, ax ;~ 01A2:3817
cs=0x1a2;eip=0x003819; 	J(JNZ(loc_137f2));	// 10295                  jnz     short loc_137F2 ;~ 01A2:3819
cs=0x1a2;eip=0x00381b; 	J(JMP(loc_139cf));	// 10296                  jmp     loc_139CF ;~ 01A2:381B
loc_1381e:
	// 4985 
cs=0x1a2;eip=0x00381e; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 10301                  les     bx, [bp+stream] ;~ 01A2:381E
cs=0x1a2;eip=0x003821; 	T(TEST(*(dw*)(raddr(es,bx+2)), 0x40));	// 10302                  test    word ptr es:[bx+2], 40h ;~ 01A2:3821
cs=0x1a2;eip=0x003827; 	J(JNZ(loc_1382c));	// 10303                  jnz     short loc_1382C ;~ 01A2:3827
cs=0x1a2;eip=0x003829; 	J(JMP(loc_13954));	// 10304                  jmp     loc_13954 ;~ 01A2:3829
loc_1382c:
	// 4986 
cs=0x1a2;eip=0x00382c; 	T(CMP(*(dw*)(raddr(es,bx+6)), 0));	// 10308                  cmp     word ptr es:[bx+6], 0 ;~ 01A2:382C
cs=0x1a2;eip=0x003831; 	J(JNZ(loc_13836));	// 10309                  jnz     short loc_13836 ;~ 01A2:3831
cs=0x1a2;eip=0x003833; 	J(JMP(loc_13901));	// 10310                  jmp     loc_13901 ;~ 01A2:3833
loc_13836:
	// 4987 
cs=0x1a2;eip=0x003836; 	T(CMP(*(dw*)(raddr(es,bx+6)), di));	// 10314                  cmp     es:[bx+6], di ;~ 01A2:3836
cs=0x1a2;eip=0x00383a; 	J(JNC(loc_138a5));	// 10315                  jnb     short loc_138A5 ;~ 01A2:383A
cs=0x1a2;eip=0x00383c; 	T(CMP(*(dw*)(raddr(es,bx)), 0));	// 10316                  cmp     word ptr es:[bx], 0 ;~ 01A2:383C
cs=0x1a2;eip=0x003840; 	J(JZ(loc_13851));	// 10317                  jz      short loc_13851 ;~ 01A2:3840
cs=0x1a2;eip=0x003842; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 10318                  push    word ptr [bp+stream+2] ;~ 01A2:3842
cs=0x1a2;eip=0x003845; 	X(PUSH(bx));	// 10319                  push    bx              ; stream ;~ 01A2:3845
cs=0x1a2;eip=0x003846; 	T(NOP);	// 10320                  nop ;~ 01A2:3846
cs=0x1a2;eip=0x003847; 	X(PUSH(cs));	// 10321                  push    cs ;~ 01A2:3847
cs=0x1a2;eip=0x003848; 	J(CALL(___fflush,0));	// 10322                  call    near ptr ___fflush ;~ 01A2:3848
cs=0x1a2;eip=0x00384b; 	X(POP(cx));	// 10323                  pop     cx ;~ 01A2:384B
cs=0x1a2;eip=0x00384c; 	X(POP(cx));	// 10324                  pop     cx ;~ 01A2:384C
cs=0x1a2;eip=0x00384d; 	T(OR(ax, ax));	// 10325                  or      ax, ax ;~ 01A2:384D
cs=0x1a2;eip=0x00384f; 	J(JNZ(loc_1380f));	// 10326                  jnz     short loc_1380F ;~ 01A2:384F
loc_13851:
	// 4988 
cs=0x1a2;eip=0x003851; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 10329                  les     bx, [bp+stream] ;~ 01A2:3851
cs=0x1a2;eip=0x003854; 	T(MOV(al, *(raddr(es,bx+4))));	// 10331                  mov     al, es:[bx+4] ;~ 01A2:3854
cs=0x1a2;eip=0x003858; 	T(CBW);	// 10332                  cbw ;~ 01A2:3858
cs=0x1a2;eip=0x003859; 	T(SHL(ax, 1));	// 10333                  shl     ax, 1 ;~ 01A2:3859
cs=0x1a2;eip=0x00385b; 	T(bx = ax;);	// 10334                  mov     bx, ax ;~ 01A2:385B
cs=0x1a2;eip=0x00385d; 	T(TEST(*(dw*)(raddr(ds,bx+0x862)), 0x800));	// 10335                  test    word ptr [bx+862h], 800h ;~ 01A2:385D
cs=0x1a2;eip=0x003863; 	J(JZ(loc_13880));	// 10336                  jz      short loc_13880 ;~ 01A2:3863
cs=0x1a2;eip=0x003865; 	T(ax = 2;);	// 10337                  mov     ax, 2 ;~ 01A2:3865
cs=0x1a2;eip=0x003868; 	X(PUSH(ax));	// 10338                  push    ax              ; fromwhere ;~ 01A2:3868
cs=0x1a2;eip=0x003869; 	T(XOR(ax, ax));	// 10339                  xor     ax, ax ;~ 01A2:3869
cs=0x1a2;eip=0x00386b; 	T(XOR(dx, dx));	// 10340                  xor     dx, dx ;~ 01A2:386B
cs=0x1a2;eip=0x00386d; 	X(PUSH(ax));	// 10341                  push    ax ;~ 01A2:386D
cs=0x1a2;eip=0x00386e; 	X(PUSH(dx));	// 10342                  push    dx              ; offset ;~ 01A2:386E
cs=0x1a2;eip=0x00386f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+stream))));	// 10343                  mov     bx, word ptr [bp+stream] ;~ 01A2:386F
cs=0x1a2;eip=0x003872; 	T(MOV(al, *(raddr(es,bx+4))));	// 10344                  mov     al, es:[bx+4] ;~ 01A2:3872
cs=0x1a2;eip=0x003876; 	T(CBW);	// 10345                  cbw ;~ 01A2:3876
cs=0x1a2;eip=0x003877; 	X(PUSH(ax));	// 10346                  push    ax              ; handle ;~ 01A2:3877
cs=0x1a2;eip=0x003878; 	T(NOP);	// 10347                  nop ;~ 01A2:3878
cs=0x1a2;eip=0x003879; 	X(PUSH(cs));	// 10348                  push    cs ;~ 01A2:3879
cs=0x1a2;eip=0x00387a; 	J(CALL(___lseek,0));	// 10349                  call    near ptr ___lseek ;~ 01A2:387A
cs=0x1a2;eip=0x00387d; 	T(ADD(sp, 8));	// 10350                  add     sp, 8 ;~ 01A2:387D
loc_13880:
	// 4989 
cs=0x1a2;eip=0x003880; 	X(PUSH(di));	// 10353                  push    di              ; len ;~ 01A2:3880
cs=0x1a2;eip=0x003881; 	X(PUSH(*(dw*)(raddr(ss,bp+src+2))));	// 10354                  push    word ptr [bp+src+2] ;~ 01A2:3881
cs=0x1a2;eip=0x003884; 	X(PUSH(*(dw*)(raddr(ss,bp+src))));	// 10355                  push    word ptr [bp+src] ; buf ;~ 01A2:3884
cs=0x1a2;eip=0x003887; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 10356                  les     bx, [bp+stream] ;~ 01A2:3887
cs=0x1a2;eip=0x00388a; 	T(MOV(al, *(raddr(es,bx+4))));	// 10357                  mov     al, es:[bx+4] ;~ 01A2:388A
cs=0x1a2;eip=0x00388e; 	T(CBW);	// 10358                  cbw ;~ 01A2:388E
cs=0x1a2;eip=0x00388f; 	X(PUSH(ax));	// 10359                  push    ax              ; handle ;~ 01A2:388F
cs=0x1a2;eip=0x003890; 	T(NOP);	// 10360                  nop ;~ 01A2:3890
cs=0x1a2;eip=0x003891; 	X(PUSH(cs));	// 10361                  push    cs ;~ 01A2:3891
cs=0x1a2;eip=0x003892; 	J(CALL(____write,0));	// 10362                  call    near ptr ____write ;~ 01A2:3892
cs=0x1a2;eip=0x003895; 	T(ADD(sp, 8));	// 10363                  add     sp, 8 ;~ 01A2:3895
cs=0x1a2;eip=0x003898; 	T(CMP(ax, di));	// 10364                  cmp     ax, di ;~ 01A2:3898
cs=0x1a2;eip=0x00389a; 	J(JNZ(loc_1389f));	// 10365                  jnz     short loc_1389F ;~ 01A2:389A
cs=0x1a2;eip=0x00389c; 	J(JMP(loc_139cf));	// 10366                  jmp     loc_139CF ;~ 01A2:389C
loc_1389f:
	// 4990 
cs=0x1a2;eip=0x00389f; 	J(JMP(loc_1380f));	// 10370                  jmp     loc_1380F ;~ 01A2:389F
ret_1a2_38a2:
	// 4991 
cs=0x1a2;eip=0x0038a2; 	J(JMP(loc_139cf));	// 10372                  jmp     loc_139CF ;~ 01A2:38A2
loc_138a5:
	// 4992 
cs=0x1a2;eip=0x0038a5; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 10376                  les     bx, [bp+stream] ;~ 01A2:38A5
cs=0x1a2;eip=0x0038a8; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 10377                  mov     ax, es:[bx] ;~ 01A2:38A8
cs=0x1a2;eip=0x0038ab; 	T(ADD(ax, di));	// 10378                  add     ax, di ;~ 01A2:38AB
cs=0x1a2;eip=0x0038ad; 	J(JL(loc_138d5));	// 10379                  jl      short loc_138D5 ;~ 01A2:38AD
cs=0x1a2;eip=0x0038af; 	T(CMP(*(dw*)(raddr(es,bx)), 0));	// 10380                  cmp     word ptr es:[bx], 0 ;~ 01A2:38AF
cs=0x1a2;eip=0x0038b3; 	J(JNZ(loc_138c1));	// 10381                  jnz     short loc_138C1 ;~ 01A2:38B3
cs=0x1a2;eip=0x0038b5; 	T(ax = 0x0FFFF;);	// 10382                  mov     ax, 0FFFFh ;~ 01A2:38B5
cs=0x1a2;eip=0x0038b8; 	T(SUB(ax, *(dw*)(raddr(es,bx+6))));	// 10383                  sub     ax, es:[bx+6] ;~ 01A2:38B8
cs=0x1a2;eip=0x0038bc; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 10384                  mov     es:[bx], ax ;~ 01A2:38BC
cs=0x1a2;eip=0x0038bf; 	J(JMP(loc_138d5));	// 10385                  jmp     short loc_138D5 ;~ 01A2:38BF
loc_138c1:
	// 4993 
cs=0x1a2;eip=0x0038c1; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 10389                  push    word ptr [bp+stream+2] ;~ 01A2:38C1
cs=0x1a2;eip=0x0038c4; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 10390                  push    word ptr [bp+stream] ; stream ;~ 01A2:38C4
cs=0x1a2;eip=0x0038c7; 	T(NOP);	// 10391                  nop ;~ 01A2:38C7
cs=0x1a2;eip=0x0038c8; 	X(PUSH(cs));	// 10392                  push    cs ;~ 01A2:38C8
cs=0x1a2;eip=0x0038c9; 	J(CALL(___fflush,0));	// 10393                  call    near ptr ___fflush ;~ 01A2:38C9
cs=0x1a2;eip=0x0038cc; 	X(POP(cx));	// 10394                  pop     cx ;~ 01A2:38CC
cs=0x1a2;eip=0x0038cd; 	X(POP(cx));	// 10395                  pop     cx ;~ 01A2:38CD
cs=0x1a2;eip=0x0038ce; 	T(OR(ax, ax));	// 10396                  or      ax, ax ;~ 01A2:38CE
cs=0x1a2;eip=0x0038d0; 	J(JZ(loc_138d5));	// 10397                  jz      short loc_138D5 ;~ 01A2:38D0
cs=0x1a2;eip=0x0038d2; 	J(JMP(loc_1380f));	// 10398                  jmp     loc_1380F ;~ 01A2:38D2
loc_138d5:
	// 4994 
cs=0x1a2;eip=0x0038d5; 	X(PUSH(di));	// 10403                  push    di              ; n ;~ 01A2:38D5
cs=0x1a2;eip=0x0038d6; 	X(PUSH(*(dw*)(raddr(ss,bp+src+2))));	// 10404                  push    word ptr [bp+src+2] ;~ 01A2:38D6
cs=0x1a2;eip=0x0038d9; 	X(PUSH(*(dw*)(raddr(ss,bp+src))));	// 10405                  push    word ptr [bp+src] ; src ;~ 01A2:38D9
cs=0x1a2;eip=0x0038dc; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 10406                  les     bx, [bp+stream] ;~ 01A2:38DC
cs=0x1a2;eip=0x0038df; 	X(PUSH(*(dw*)(raddr(es,bx+0x0E))));	// 10407                  push    word ptr es:[bx+0Eh] ;~ 01A2:38DF
cs=0x1a2;eip=0x0038e3; 	X(PUSH(*(dw*)(raddr(es,bx+0x0C))));	// 10408                  push    word ptr es:[bx+0Ch] ; dest ;~ 01A2:38E3
cs=0x1a2;eip=0x0038e7; 	T(NOP);	// 10409                  nop ;~ 01A2:38E7
cs=0x1a2;eip=0x0038e8; 	X(PUSH(cs));	// 10410                  push    cs ;~ 01A2:38E8
cs=0x1a2;eip=0x0038e9; 	J(CALL(___memcpy,0));	// 10411                  call    near ptr ___memcpy ;~ 01A2:38E9
cs=0x1a2;eip=0x0038ec; 	T(ADD(sp, 0x0A));	// 10412                  add     sp, 0Ah ;~ 01A2:38EC
cs=0x1a2;eip=0x0038ef; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 10413                  les     bx, [bp+stream] ;~ 01A2:38EF
cs=0x1a2;eip=0x0038f2; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 10414                  mov     ax, es:[bx] ;~ 01A2:38F2
cs=0x1a2;eip=0x0038f5; 	T(ADD(ax, di));	// 10415                  add     ax, di ;~ 01A2:38F5
cs=0x1a2;eip=0x0038f7; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 10416                  mov     es:[bx], ax ;~ 01A2:38F7
cs=0x1a2;eip=0x0038fa; 	X(ADD(*(dw*)(raddr(es,bx+0x0C)), di));	// 10417                  add     es:[bx+0Ch], di ;~ 01A2:38FA
cs=0x1a2;eip=0x0038fe; 	J(JMP(loc_139cf));	// 10418                  jmp     loc_139CF ;~ 01A2:38FE
loc_13901:
	// 4995 
cs=0x1a2;eip=0x003901; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 10422                  les     bx, [bp+stream] ;~ 01A2:3901
cs=0x1a2;eip=0x003904; 	T(MOV(al, *(raddr(es,bx+4))));	// 10423                  mov     al, es:[bx+4] ;~ 01A2:3904
cs=0x1a2;eip=0x003908; 	T(CBW);	// 10424                  cbw ;~ 01A2:3908
cs=0x1a2;eip=0x003909; 	T(SHL(ax, 1));	// 10425                  shl     ax, 1 ;~ 01A2:3909
cs=0x1a2;eip=0x00390b; 	T(bx = ax;);	// 10426                  mov     bx, ax ;~ 01A2:390B
cs=0x1a2;eip=0x00390d; 	T(TEST(*(dw*)(raddr(ds,bx+0x862)), 0x800));	// 10427                  test    word ptr [bx+862h], 800h ;~ 01A2:390D
cs=0x1a2;eip=0x003913; 	J(JZ(loc_13930));	// 10428                  jz      short loc_13930 ;~ 01A2:3913
cs=0x1a2;eip=0x003915; 	T(ax = 2;);	// 10429                  mov     ax, 2 ;~ 01A2:3915
cs=0x1a2;eip=0x003918; 	X(PUSH(ax));	// 10430                  push    ax              ; fromwhere ;~ 01A2:3918
cs=0x1a2;eip=0x003919; 	T(XOR(ax, ax));	// 10431                  xor     ax, ax ;~ 01A2:3919
cs=0x1a2;eip=0x00391b; 	T(XOR(dx, dx));	// 10432                  xor     dx, dx ;~ 01A2:391B
cs=0x1a2;eip=0x00391d; 	X(PUSH(ax));	// 10433                  push    ax ;~ 01A2:391D
cs=0x1a2;eip=0x00391e; 	X(PUSH(dx));	// 10434                  push    dx              ; offset ;~ 01A2:391E
cs=0x1a2;eip=0x00391f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+stream))));	// 10435                  mov     bx, word ptr [bp+stream] ;~ 01A2:391F
cs=0x1a2;eip=0x003922; 	T(MOV(al, *(raddr(es,bx+4))));	// 10436                  mov     al, es:[bx+4] ;~ 01A2:3922
cs=0x1a2;eip=0x003926; 	T(CBW);	// 10437                  cbw ;~ 01A2:3926
cs=0x1a2;eip=0x003927; 	X(PUSH(ax));	// 10438                  push    ax              ; handle ;~ 01A2:3927
cs=0x1a2;eip=0x003928; 	T(NOP);	// 10439                  nop ;~ 01A2:3928
cs=0x1a2;eip=0x003929; 	X(PUSH(cs));	// 10440                  push    cs ;~ 01A2:3929
cs=0x1a2;eip=0x00392a; 	J(CALL(___lseek,0));	// 10441                  call    near ptr ___lseek ;~ 01A2:392A
cs=0x1a2;eip=0x00392d; 	T(ADD(sp, 8));	// 10442                  add     sp, 8 ;~ 01A2:392D
loc_13930:
	// 4996 
cs=0x1a2;eip=0x003930; 	X(PUSH(di));	// 10445                  push    di              ; len ;~ 01A2:3930
cs=0x1a2;eip=0x003931; 	X(PUSH(*(dw*)(raddr(ss,bp+src+2))));	// 10446                  push    word ptr [bp+src+2] ;~ 01A2:3931
cs=0x1a2;eip=0x003934; 	X(PUSH(*(dw*)(raddr(ss,bp+src))));	// 10447                  push    word ptr [bp+src] ; buf ;~ 01A2:3934
cs=0x1a2;eip=0x003937; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 10448                  les     bx, [bp+stream] ;~ 01A2:3937
cs=0x1a2;eip=0x00393a; 	T(MOV(al, *(raddr(es,bx+4))));	// 10449                  mov     al, es:[bx+4] ;~ 01A2:393A
cs=0x1a2;eip=0x00393e; 	T(CBW);	// 10450                  cbw ;~ 01A2:393E
cs=0x1a2;eip=0x00393f; 	X(PUSH(ax));	// 10451                  push    ax              ; handle ;~ 01A2:393F
cs=0x1a2;eip=0x003940; 	T(NOP);	// 10452                  nop ;~ 01A2:3940
cs=0x1a2;eip=0x003941; 	X(PUSH(cs));	// 10453                  push    cs ;~ 01A2:3941
cs=0x1a2;eip=0x003942; 	J(CALL(____write,0));	// 10454                  call    near ptr ____write ;~ 01A2:3942
cs=0x1a2;eip=0x003945; 	T(ADD(sp, 8));	// 10455                  add     sp, 8 ;~ 01A2:3945
cs=0x1a2;eip=0x003948; 	T(CMP(ax, di));	// 10456                  cmp     ax, di ;~ 01A2:3948
cs=0x1a2;eip=0x00394a; 	J(JNZ(loc_1394f));	// 10457                  jnz     short loc_1394F ;~ 01A2:394A
cs=0x1a2;eip=0x00394c; 	J(JMP(loc_139cf));	// 10458                  jmp     loc_139CF ;~ 01A2:394C
loc_1394f:
	// 4997 
cs=0x1a2;eip=0x00394f; 	J(JMP(loc_1380f));	// 10462                  jmp     loc_1380F ;~ 01A2:394F
ret_1a2_3952:
	// 4998 
cs=0x1a2;eip=0x003952; 	J(JMP(loc_139cf));	// 10464                  jmp     short loc_139CF ;~ 01A2:3952
loc_13954:
	// 4999 
cs=0x1a2;eip=0x003954; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 10469                  les     bx, [bp+stream] ;~ 01A2:3954
cs=0x1a2;eip=0x003957; 	T(CMP(*(dw*)(raddr(es,bx+6)), 0));	// 10470                  cmp     word ptr es:[bx+6], 0 ;~ 01A2:3957
cs=0x1a2;eip=0x00395c; 	J(JZ(loc_139b0));	// 10471                  jz      short loc_139B0 ;~ 01A2:395C
cs=0x1a2;eip=0x00395e; 	J(JMP(loc_139a7));	// 10472                  jmp     short loc_139A7 ;~ 01A2:395E
loc_13960:
	// 5000 
cs=0x1a2;eip=0x003960; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 10476                  les     bx, [bp+stream] ;~ 01A2:3960
cs=0x1a2;eip=0x003963; 	X(INC(*(dw*)(raddr(es,bx))));	// 10478                  inc     word ptr es:[bx] ;~ 01A2:3963
cs=0x1a2;eip=0x003966; 	J(JGE(loc_13988));	// 10479                  jge     short loc_13988 ;~ 01A2:3966
cs=0x1a2;eip=0x003968; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E))));	// 10480                  mov     ax, es:[bx+0Eh] ;~ 01A2:3968
cs=0x1a2;eip=0x00396c; 	T(MOV(si, *(dw*)(raddr(es,bx+0x0C))));	// 10481                  mov     si, es:[bx+0Ch] ;~ 01A2:396C
cs=0x1a2;eip=0x003970; 	X(INC(*(dw*)(raddr(es,bx+0x0C))));	// 10482                  inc     word ptr es:[bx+0Ch] ;~ 01A2:3970
cs=0x1a2;eip=0x003974; 	T(LES(bx, *(dd*)(raddr(ss,bp+src))));	// 10483                  les     bx, [bp+src] ;~ 01A2:3974
cs=0x1a2;eip=0x003977; 	X(INC(*(dw*)(raddr(ss,bp+src))));	// 10484                  inc     word ptr [bp+src] ;~ 01A2:3977
cs=0x1a2;eip=0x00397a; 	T(MOV(dl, *(raddr(es,bx))));	// 10485                  mov     dl, es:[bx] ;~ 01A2:397A
cs=0x1a2;eip=0x00397d; 	T(es = ax;);	// 10486                  mov     es, ax ;~ 01A2:397D
cs=0x1a2;eip=0x00397f; 	X(MOV(*(raddr(es,si)), dl));	// 10487                  mov     es:[si], dl ;~ 01A2:397F
cs=0x1a2;eip=0x003982; 	T(al = dl;);	// 10488                  mov     al, dl ;~ 01A2:3982
cs=0x1a2;eip=0x003984; 	T(ah = 0;);	// 10489                  mov     ah, 0 ;~ 01A2:3984
cs=0x1a2;eip=0x003986; 	J(JMP(loc_1399f));	// 10490                  jmp     short loc_1399F ;~ 01A2:3986
loc_13988:
	// 5001 
cs=0x1a2;eip=0x003988; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 10494                  push    word ptr [bp+stream+2] ;~ 01A2:3988
cs=0x1a2;eip=0x00398b; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 10495                  push    word ptr [bp+stream] ; stream ;~ 01A2:398B
cs=0x1a2;eip=0x00398e; 	T(LES(bx, *(dd*)(raddr(ss,bp+src))));	// 10496                  les     bx, [bp+src] ;~ 01A2:398E
cs=0x1a2;eip=0x003991; 	X(INC(*(dw*)(raddr(ss,bp+src))));	// 10497                  inc     word ptr [bp+src] ;~ 01A2:3991
cs=0x1a2;eip=0x003994; 	T(MOV(al, *(raddr(es,bx))));	// 10498                  mov     al, es:[bx] ;~ 01A2:3994
cs=0x1a2;eip=0x003997; 	X(PUSH(ax));	// 10499                  push    ax              ; c ;~ 01A2:3997
cs=0x1a2;eip=0x003998; 	X(PUSH(cs));	// 10500                  push    cs ;~ 01A2:3998
cs=0x1a2;eip=0x003999; 	J(CALL(____fputc,0));	// 10501                  call    near ptr ____fputc ;~ 01A2:3999
cs=0x1a2;eip=0x00399c; 	T(ADD(sp, 6));	// 10502                  add     sp, 6 ;~ 01A2:399C
loc_1399f:
	// 5002 
cs=0x1a2;eip=0x00399f; 	T(CMP(ax, 0x0FFFF));	// 10505                  cmp     ax, 0FFFFh ;~ 01A2:399F
cs=0x1a2;eip=0x0039a2; 	J(JNZ(loc_139a7));	// 10506                  jnz     short loc_139A7 ;~ 01A2:39A2
cs=0x1a2;eip=0x0039a4; 	J(JMP(loc_1380f));	// 10507                  jmp     loc_1380F ;~ 01A2:39A4
loc_139a7:
	// 5003 
cs=0x1a2;eip=0x0039a7; 	T(ax = di;);	// 10512                  mov     ax, di ;~ 01A2:39A7
cs=0x1a2;eip=0x0039a9; 	T(DEC(di));	// 10513                  dec     di ;~ 01A2:39A9
cs=0x1a2;eip=0x0039aa; 	T(OR(ax, ax));	// 10514                  or      ax, ax ;~ 01A2:39AA
cs=0x1a2;eip=0x0039ac; 	J(JNZ(loc_13960));	// 10515                  jnz     short loc_13960 ;~ 01A2:39AC
cs=0x1a2;eip=0x0039ae; 	J(JMP(loc_139cf));	// 10516                  jmp     short loc_139CF ;~ 01A2:39AE
loc_139b0:
	// 5004 
cs=0x1a2;eip=0x0039b0; 	X(PUSH(di));	// 10521                  push    di              ; len ;~ 01A2:39B0
cs=0x1a2;eip=0x0039b1; 	X(PUSH(*(dw*)(raddr(ss,bp+src+2))));	// 10522                  push    word ptr [bp+src+2] ;~ 01A2:39B1
cs=0x1a2;eip=0x0039b4; 	X(PUSH(*(dw*)(raddr(ss,bp+src))));	// 10523                  push    word ptr [bp+src] ; buf ;~ 01A2:39B4
cs=0x1a2;eip=0x0039b7; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 10524                  les     bx, [bp+stream] ;~ 01A2:39B7
cs=0x1a2;eip=0x0039ba; 	T(MOV(al, *(raddr(es,bx+4))));	// 10525                  mov     al, es:[bx+4] ;~ 01A2:39BA
cs=0x1a2;eip=0x0039be; 	T(CBW);	// 10526                  cbw ;~ 01A2:39BE
cs=0x1a2;eip=0x0039bf; 	X(PUSH(ax));	// 10527                  push    ax              ; handle ;~ 01A2:39BF
cs=0x1a2;eip=0x0039c0; 	T(NOP);	// 10528                  nop ;~ 01A2:39C0
cs=0x1a2;eip=0x0039c1; 	X(PUSH(cs));	// 10529                  push    cs ;~ 01A2:39C1
cs=0x1a2;eip=0x0039c2; 	J(CALL(_____write,0));	// 10530                  call    near ptr _____write ;~ 01A2:39C2
cs=0x1a2;eip=0x0039c5; 	T(ADD(sp, 8));	// 10532                  add     sp, 8 ;~ 01A2:39C5
cs=0x1a2;eip=0x0039c8; 	T(CMP(ax, di));	// 10533                  cmp     ax, di ;~ 01A2:39C8
cs=0x1a2;eip=0x0039ca; 	J(JZ(loc_139cf));	// 10534                  jz      short loc_139CF ;~ 01A2:39CA
cs=0x1a2;eip=0x0039cc; 	J(JMP(loc_1380f));	// 10535                  jmp     loc_1380F ;~ 01A2:39CC
loc_139cf:
	// 5005 
cs=0x1a2;eip=0x0039cf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 10540                  mov     ax, [bp+var_2] ;~ 01A2:39CF
loc_139d2:
	// 5006 
cs=0x1a2;eip=0x0039d2; 	X(POP(di));	// 10543                  pop     di ;~ 01A2:39D2
cs=0x1a2;eip=0x0039d3; 	X(POP(si));	// 10544                  pop     si ;~ 01A2:39D3
cs=0x1a2;eip=0x0039d4; 	T(sp = bp;);	// 10545                  mov     sp, bp ;~ 01A2:39D4
cs=0x1a2;eip=0x0039d6; 	X(POP(bp));	// 10546                  pop     bp ;~ 01A2:39D6
cs=0x1a2;eip=0x0039d7; 	J(RETN(0x0A));	// 10547                  retn    0Ah ;~ 01A2:39D7

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____fputn: 	goto ____fputn;
        case m2c::kloc_137f2: 	goto loc_137f2;
        case m2c::kloc_1380f: 	goto loc_1380f;
        case m2c::kloc_13814: 	goto loc_13814;
        case m2c::kloc_1381e: 	goto loc_1381e;
        case m2c::kloc_1382c: 	goto loc_1382c;
        case m2c::kloc_13836: 	goto loc_13836;
        case m2c::kloc_13851: 	goto loc_13851;
        case m2c::kloc_13880: 	goto loc_13880;
        case m2c::kloc_1389f: 	goto loc_1389f;
        case m2c::kloc_138a5: 	goto loc_138a5;
        case m2c::kloc_138c1: 	goto loc_138c1;
        case m2c::kloc_138d5: 	goto loc_138d5;
        case m2c::kloc_13901: 	goto loc_13901;
        case m2c::kloc_13930: 	goto loc_13930;
        case m2c::kloc_1394f: 	goto loc_1394f;
        case m2c::kloc_13954: 	goto loc_13954;
        case m2c::kloc_13960: 	goto loc_13960;
        case m2c::kloc_13988: 	goto loc_13988;
        case m2c::kloc_1399f: 	goto loc_1399f;
        case m2c::kloc_139a7: 	goto loc_139a7;
        case m2c::kloc_139b0: 	goto loc_139b0;
        case m2c::kloc_139cf: 	goto loc_139cf;
        case m2c::kloc_139d2: 	goto loc_139d2;
        case m2c::kret_1a2_38a2: 	goto ret_1a2_38a2;
        case m2c::kret_1a2_3952: 	goto ret_1a2_3952;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___puts(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___puts:
    _begin:
#undef s
#define s 6
	// 10559 s               = dword ptr  6 ;~ 01A2:39DA
cs=0x1a2;eip=0x0039da; 	X(PUSH(bp));	// 10561                  push    bp ;~ 01A2:39DA
cs=0x1a2;eip=0x0039db; 	T(bp = sp;);	// 10562                  mov     bp, sp ;~ 01A2:39DB
cs=0x1a2;eip=0x0039dd; 	X(PUSH(si));	// 10563                  push    si ;~ 01A2:39DD
cs=0x1a2;eip=0x0039de; 	T(MOV(ax, *(dw*)(raddr(ss,bp+s))));	// 10564                  mov     ax, word ptr [bp+s] ;~ 01A2:39DE
cs=0x1a2;eip=0x0039e1; 	T(OR(ax, *(dw*)(raddr(ss,bp+s+2))));	// 10565                  or      ax, word ptr [bp+s+2] ;~ 01A2:39E1
cs=0x1a2;eip=0x0039e4; 	J(JNZ(loc_139ea));	// 10566                  jnz     short loc_139EA ;~ 01A2:39E4
cs=0x1a2;eip=0x0039e6; 	T(XOR(ax, ax));	// 10567                  xor     ax, ax ;~ 01A2:39E6
cs=0x1a2;eip=0x0039e8; 	J(JMP(loc_13a2f));	// 10568                  jmp     short loc_13A2F ;~ 01A2:39E8
loc_139ea:
	// 5007 
cs=0x1a2;eip=0x0039ea; 	X(PUSH(*(dw*)(raddr(ss,bp+s+2))));	// 10572                  push    word ptr [bp+s+2] ;~ 01A2:39EA
cs=0x1a2;eip=0x0039ed; 	X(PUSH(*(dw*)(raddr(ss,bp+s))));	// 10573                  push    word ptr [bp+s] ; s ;~ 01A2:39ED
cs=0x1a2;eip=0x0039f0; 	T(NOP);	// 10574                  nop ;~ 01A2:39F0
cs=0x1a2;eip=0x0039f1; 	X(PUSH(cs));	// 10575                  push    cs ;~ 01A2:39F1
cs=0x1a2;eip=0x0039f2; 	J(CALL(___strlen,0));	// 10576                  call    near ptr ___strlen ;~ 01A2:39F2
cs=0x1a2;eip=0x0039f5; 	X(POP(cx));	// 10578                  pop     cx ;~ 01A2:39F5
cs=0x1a2;eip=0x0039f6; 	X(POP(cx));	// 10579                  pop     cx ;~ 01A2:39F6
cs=0x1a2;eip=0x0039f7; 	T(si = ax;);	// 10580                  mov     si, ax ;~ 01A2:39F7
cs=0x1a2;eip=0x0039f9; 	X(PUSH(*(dw*)(raddr(ss,bp+s+2))));	// 10581                  push    word ptr [bp+s+2] ;~ 01A2:39F9
cs=0x1a2;eip=0x0039fc; 	X(PUSH(*(dw*)(raddr(ss,bp+s))));	// 10582                  push    word ptr [bp+s] ; src ;~ 01A2:39FC
cs=0x1a2;eip=0x0039ff; 	X(PUSH(ax));	// 10583                  push    ax              ; n ;~ 01A2:39FF
cs=0x1a2;eip=0x003a00; 	X(PUSH(ds));	// 10584                  push    ds ;~ 01A2:3A00
cs=0x1a2;eip=0x003a01; 	T(ax = 0x6E4;);	// 10585                  mov     ax, 6E4h ;~ 01A2:3A01
cs=0x1a2;eip=0x003a04; 	X(PUSH(ax));	// 10586                  push    ax              ; stream ;~ 01A2:3A04
cs=0x1a2;eip=0x003a05; 	J(CALL(____fputn,0));	// 10587                  call    ____FPUTN ;~ 01A2:3A05
cs=0x1a2;eip=0x003a08; 	T(CMP(ax, si));	// 10589                  cmp     ax, si ;~ 01A2:3A08
cs=0x1a2;eip=0x003a0a; 	J(JZ(loc_13a11));	// 10590                  jz      short loc_13A11 ;~ 01A2:3A0A
cs=0x1a2;eip=0x003a0c; 	T(ax = 0x0FFFF;);	// 10591                  mov     ax, 0FFFFh ;~ 01A2:3A0C
cs=0x1a2;eip=0x003a0f; 	J(JMP(loc_13a2f));	// 10592                  jmp     short loc_13A2F ;~ 01A2:3A0F
loc_13a11:
	// 5008 
cs=0x1a2;eip=0x003a11; 	X(PUSH(ds));	// 10596                  push    ds ;~ 01A2:3A11
cs=0x1a2;eip=0x003a12; 	T(ax = 0x6E4;);	// 10597                  mov     ax, 6E4h ;~ 01A2:3A12
cs=0x1a2;eip=0x003a15; 	X(PUSH(ax));	// 10598                  push    ax              ; stream ;~ 01A2:3A15
cs=0x1a2;eip=0x003a16; 	T(ax = 0x0A;);	// 10599                  mov     ax, 0Ah ;~ 01A2:3A16
cs=0x1a2;eip=0x003a19; 	X(PUSH(ax));	// 10600                  push    ax              ; c ;~ 01A2:3A19
cs=0x1a2;eip=0x003a1a; 	T(NOP);	// 10601                  nop ;~ 01A2:3A1A
cs=0x1a2;eip=0x003a1b; 	X(PUSH(cs));	// 10602                  push    cs ;~ 01A2:3A1B
cs=0x1a2;eip=0x003a1c; 	J(CALL(___fputc,0));	// 10603                  call    near ptr ___fputc ;~ 01A2:3A1C
cs=0x1a2;eip=0x003a1f; 	T(ADD(sp, 6));	// 10605                  add     sp, 6 ;~ 01A2:3A1F
cs=0x1a2;eip=0x003a22; 	T(CMP(ax, 0x0A));	// 10606                  cmp     ax, 0Ah ;~ 01A2:3A22
cs=0x1a2;eip=0x003a25; 	J(JZ(loc_13a2c));	// 10607                  jz      short loc_13A2C ;~ 01A2:3A25
cs=0x1a2;eip=0x003a27; 	T(ax = 0x0FFFF;);	// 10608                  mov     ax, 0FFFFh ;~ 01A2:3A27
cs=0x1a2;eip=0x003a2a; 	J(JMP(loc_13a2f));	// 10609                  jmp     short loc_13A2F ;~ 01A2:3A2A
loc_13a2c:
	// 5009 
cs=0x1a2;eip=0x003a2c; 	T(ax = 0x0A;);	// 10613                  mov     ax, 0Ah ;~ 01A2:3A2C
loc_13a2f:
	// 5010 
cs=0x1a2;eip=0x003a2f; 	X(POP(si));	// 10617                  pop     si ;~ 01A2:3A2F
cs=0x1a2;eip=0x003a30; 	X(POP(bp));	// 10618                  pop     bp ;~ 01A2:3A30
cs=0x1a2;eip=0x003a31; 	J(RETF(0));	// 10619                  retf ;~ 01A2:3A31

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___puts: 	goto ___puts;
        case m2c::kloc_139ea: 	goto loc_139ea;
        case m2c::kloc_13a11: 	goto loc_13a11;
        case m2c::kloc_13a2c: 	goto loc_13a2c;
        case m2c::kloc_13a2f: 	goto loc_13a2f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _____read(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _____read:
    _begin:
#undef var_3
#define var_3 -3
	// 10631 var_3           = byte ptr -3 ;~ 01A2:3A32
#undef var_2
#define var_2 -2
	// 10632 var_2           = word ptr -2 ;~ 01A2:3A32
#undef handle
#define handle 6
	// 10633 handle          = word ptr  6 ;~ 01A2:3A32
#undef buf
#define buf 8
	// 10634 buf             = dword ptr  8 ;~ 01A2:3A32
#undef len
#define len 0x0C
	// 10635 len             = word ptr  0Ch ;~ 01A2:3A32
cs=0x1a2;eip=0x003a32; 	X(PUSH(bp));	// 10637                  push    bp ;~ 01A2:3A32
cs=0x1a2;eip=0x003a33; 	T(bp = sp;);	// 10638                  mov     bp, sp ;~ 01A2:3A33
cs=0x1a2;eip=0x003a35; 	T(SUB(sp, 4));	// 10639                  sub     sp, 4 ;~ 01A2:3A35
cs=0x1a2;eip=0x003a38; 	X(PUSH(si));	// 10640                  push    si ;~ 01A2:3A38
cs=0x1a2;eip=0x003a39; 	X(PUSH(di));	// 10641                  push    di ;~ 01A2:3A39
cs=0x1a2;eip=0x003a3a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+handle))));	// 10642                  mov     ax, [bp+handle] ;~ 01A2:3A3A
cs=0x1a2;eip=0x003a3d; 	T(CMP(ax, word_19140));	// 10643                  cmp     ax, word_19140 ;~ 01A2:3A3D
cs=0x1a2;eip=0x003a41; 	J(JC(loc_13a4d));	// 10644                  jb      short loc_13A4D ;~ 01A2:3A41
cs=0x1a2;eip=0x003a43; 	T(ax = 6;);	// 10645                  mov     ax, 6 ;~ 01A2:3A43
cs=0x1a2;eip=0x003a46; 	X(PUSH(ax));	// 10646                  push    ax ;~ 01A2:3A46
cs=0x1a2;eip=0x003a47; 	J(CALL(____ioerror,0));	// 10647                  call    ____IOERROR ;~ 01A2:3A47
cs=0x1a2;eip=0x003a4a; 	J(JMP(loc_13afd));	// 10648                  jmp     loc_13AFD ;~ 01A2:3A4A
loc_13a4d:
	// 5011 
cs=0x1a2;eip=0x003a4d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+len))));	// 10652                  mov     ax, [bp+len] ;~ 01A2:3A4D
cs=0x1a2;eip=0x003a50; 	T(INC(ax));	// 10653                  inc     ax ;~ 01A2:3A50
cs=0x1a2;eip=0x003a51; 	T(CMP(ax, 2));	// 10654                  cmp     ax, 2 ;~ 01A2:3A51
cs=0x1a2;eip=0x003a54; 	J(JC(loc_13a63));	// 10655                  jb      short loc_13A63 ;~ 01A2:3A54
cs=0x1a2;eip=0x003a56; 	T(MOV(bx, *(dw*)(raddr(ss,bp+handle))));	// 10656                  mov     bx, [bp+handle] ;~ 01A2:3A56
cs=0x1a2;eip=0x003a59; 	T(SHL(bx, 1));	// 10657                  shl     bx, 1 ;~ 01A2:3A59
cs=0x1a2;eip=0x003a5b; 	T(TEST(*(dw*)(raddr(ds,bx+0x862)), 0x200));	// 10658                  test    word ptr [bx+862h], 200h ;~ 01A2:3A5B
cs=0x1a2;eip=0x003a61; 	J(JZ(loc_13a68));	// 10659                  jz      short loc_13A68 ;~ 01A2:3A61
loc_13a63:
	// 5012 
cs=0x1a2;eip=0x003a63; 	T(XOR(ax, ax));	// 10662                  xor     ax, ax ;~ 01A2:3A63
cs=0x1a2;eip=0x003a65; 	J(JMP(loc_13afd));	// 10663                  jmp     loc_13AFD ;~ 01A2:3A65
loc_13a68:
	// 5013 
cs=0x1a2;eip=0x003a68; 	X(PUSH(*(dw*)(raddr(ss,bp+len))));	// 10668                  push    [bp+len]        ; len ;~ 01A2:3A68
cs=0x1a2;eip=0x003a6b; 	X(PUSH(*(dw*)(raddr(ss,bp+buf+2))));	// 10669                  push    word ptr [bp+buf+2] ;~ 01A2:3A6B
cs=0x1a2;eip=0x003a6e; 	X(PUSH(*(dw*)(raddr(ss,bp+buf))));	// 10670                  push    word ptr [bp+buf] ; buf ;~ 01A2:3A6E
cs=0x1a2;eip=0x003a71; 	X(PUSH(*(dw*)(raddr(ss,bp+handle))));	// 10671                  push    [bp+handle]     ; handle ;~ 01A2:3A71
cs=0x1a2;eip=0x003a74; 	T(NOP);	// 10672                  nop ;~ 01A2:3A74
cs=0x1a2;eip=0x003a75; 	X(PUSH(cs));	// 10673                  push    cs ;~ 01A2:3A75
cs=0x1a2;eip=0x003a76; 	J(CALL(____read_0,0));	// 10674                  call    near ptr ____read_0 ;~ 01A2:3A76
cs=0x1a2;eip=0x003a79; 	T(ADD(sp, 8));	// 10675                  add     sp, 8 ;~ 01A2:3A79
cs=0x1a2;eip=0x003a7c; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 10676                  mov     [bp+var_2], ax ;~ 01A2:3A7C
cs=0x1a2;eip=0x003a7f; 	T(INC(ax));	// 10677                  inc     ax ;~ 01A2:3A7F
cs=0x1a2;eip=0x003a80; 	T(CMP(ax, 2));	// 10678                  cmp     ax, 2 ;~ 01A2:3A80
cs=0x1a2;eip=0x003a83; 	J(JC(loc_13a92));	// 10679                  jb      short loc_13A92 ;~ 01A2:3A83
cs=0x1a2;eip=0x003a85; 	T(MOV(bx, *(dw*)(raddr(ss,bp+handle))));	// 10680                  mov     bx, [bp+handle] ;~ 01A2:3A85
cs=0x1a2;eip=0x003a88; 	T(SHL(bx, 1));	// 10681                  shl     bx, 1 ;~ 01A2:3A88
cs=0x1a2;eip=0x003a8a; 	T(TEST(*(dw*)(raddr(ds,bx+0x862)), 0x4000));	// 10682                  test    word ptr [bx+862h], 4000h ;~ 01A2:3A8A
cs=0x1a2;eip=0x003a90; 	J(JNZ(loc_13a97));	// 10683                  jnz     short loc_13A97 ;~ 01A2:3A90
loc_13a92:
	// 5014 
cs=0x1a2;eip=0x003a92; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 10686                  mov     ax, [bp+var_2] ;~ 01A2:3A92
cs=0x1a2;eip=0x003a95; 	J(JMP(loc_13afd));	// 10687                  jmp     short loc_13AFD ;~ 01A2:3A95
loc_13a97:
	// 5015 
cs=0x1a2;eip=0x003a97; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_2))));	// 10691                  mov     cx, [bp+var_2] ;~ 01A2:3A97
cs=0x1a2;eip=0x003a9a; 	T(LES(si, *(dd*)(raddr(ss,bp+buf))));	// 10692                  les     si, [bp+buf] ;~ 01A2:3A9A
cs=0x1a2;eip=0x003a9d; 	T(di = si;);	// 10694                  mov     di, si ;~ 01A2:3A9D
cs=0x1a2;eip=0x003a9f; 	T(bx = si;);	// 10695                  mov     bx, si ;~ 01A2:3A9F
cs=0x1a2;eip=0x003aa1; 	T(CLD);	// 10696                  cld ;~ 01A2:3AA1
loc_13aa2:
	// 5016 
cs=0x1a2;eip=0x003aa2; 	X(LODS(*(raddr(es,si)),si,1));	// 10700                  lods    byte ptr es:[si] ;~ 01A2:3AA2
cs=0x1a2;eip=0x003aa4; 	T(CMP(al, 0x1A));	// 10701                  cmp     al, 1Ah ;~ 01A2:3AA4
cs=0x1a2;eip=0x003aa6; 	J(JZ(loc_13ad8));	// 10702                  jz      short loc_13AD8 ;~ 01A2:3AA6
cs=0x1a2;eip=0x003aa8; 	T(CMP(al, 0x0D));	// 10703                  cmp     al, 0Dh ;~ 01A2:3AA8
cs=0x1a2;eip=0x003aaa; 	J(JZ(loc_13ab1));	// 10704                  jz      short loc_13AB1 ;~ 01A2:3AAA
cs=0x1a2;eip=0x003aac; 	X(STOSB);	// 10705                  stosb ;~ 01A2:3AAC
cs=0x1a2;eip=0x003aad; 	J(LOOP(loc_13aa2));	// 10706                  loop    loc_13AA2 ;~ 01A2:3AAD
cs=0x1a2;eip=0x003aaf; 	J(JMP(loc_13ad0));	// 10707                  jmp     short loc_13AD0 ;~ 01A2:3AAF
loc_13ab1:
	// 5017 
cs=0x1a2;eip=0x003ab1; 	J(LOOP(loc_13aa2));	// 10711                  loop    loc_13AA2 ;~ 01A2:3AB1
cs=0x1a2;eip=0x003ab3; 	X(PUSH(es));	// 10712                  push    es ;~ 01A2:3AB3
cs=0x1a2;eip=0x003ab4; 	X(PUSH(bx));	// 10713                  push    bx ;~ 01A2:3AB4
cs=0x1a2;eip=0x003ab5; 	T(ax = 1;);	// 10714                  mov     ax, 1 ;~ 01A2:3AB5
cs=0x1a2;eip=0x003ab8; 	X(PUSH(ax));	// 10715                  push    ax              ; len ;~ 01A2:3AB8
cs=0x1a2;eip=0x003ab9; 	T(ax = bp+var_3);	// 10716                  lea     ax, [bp+var_3] ;~ 01A2:3AB9
cs=0x1a2;eip=0x003abc; 	X(PUSH(ss));	// 10717                  push    ss ;~ 01A2:3ABC
cs=0x1a2;eip=0x003abd; 	X(PUSH(ax));	// 10718                  push    ax              ; buf ;~ 01A2:3ABD
cs=0x1a2;eip=0x003abe; 	X(PUSH(*(dw*)(raddr(ss,bp+handle))));	// 10719                  push    [bp+handle]     ; handle ;~ 01A2:3ABE
cs=0x1a2;eip=0x003ac1; 	T(NOP);	// 10720                  nop ;~ 01A2:3AC1
cs=0x1a2;eip=0x003ac2; 	X(PUSH(cs));	// 10721                  push    cs ;~ 01A2:3AC2
cs=0x1a2;eip=0x003ac3; 	J(CALL(____read_0,0));	// 10722                  call    near ptr ____read_0 ;~ 01A2:3AC3
cs=0x1a2;eip=0x003ac6; 	T(ADD(sp, 8));	// 10723                  add     sp, 8 ;~ 01A2:3AC6
cs=0x1a2;eip=0x003ac9; 	X(POP(bx));	// 10724                  pop     bx ;~ 01A2:3AC9
cs=0x1a2;eip=0x003aca; 	X(POP(es));	// 10725                  pop     es ;~ 01A2:3ACA
cs=0x1a2;eip=0x003acb; 	T(CLD);	// 10726                  cld ;~ 01A2:3ACB
cs=0x1a2;eip=0x003acc; 	T(MOV(al, *(raddr(ss,bp+var_3))));	// 10727                  mov     al, [bp+var_3] ;~ 01A2:3ACC
cs=0x1a2;eip=0x003acf; 	X(STOSB);	// 10728                  stosb ;~ 01A2:3ACF
loc_13ad0:
	// 5018 
cs=0x1a2;eip=0x003ad0; 	T(CMP(di, bx));	// 10731                  cmp     di, bx ;~ 01A2:3AD0
cs=0x1a2;eip=0x003ad2; 	J(JNZ(loc_13ad6));	// 10732                  jnz     short loc_13AD6 ;~ 01A2:3AD2
cs=0x1a2;eip=0x003ad4; 	J(JMP(loc_13a68));	// 10733                  jmp     short loc_13A68 ;~ 01A2:3AD4
loc_13ad6:
	// 5019 
cs=0x1a2;eip=0x003ad6; 	J(JMP(loc_13afa));	// 10737                  jmp     short loc_13AFA ;~ 01A2:3AD6
loc_13ad8:
	// 5020 
cs=0x1a2;eip=0x003ad8; 	X(PUSH(bx));	// 10741                  push    bx ;~ 01A2:3AD8
cs=0x1a2;eip=0x003ad9; 	T(ax = 1;);	// 10742                  mov     ax, 1 ;~ 01A2:3AD9
cs=0x1a2;eip=0x003adc; 	X(PUSH(ax));	// 10743                  push    ax              ; fromwhere ;~ 01A2:3ADC
cs=0x1a2;eip=0x003add; 	T(NEG(cx));	// 10744                  neg     cx ;~ 01A2:3ADD
cs=0x1a2;eip=0x003adf; 	T(SBB(ax, ax));	// 10745                  sbb     ax, ax ;~ 01A2:3ADF
cs=0x1a2;eip=0x003ae1; 	X(PUSH(ax));	// 10746                  push    ax ;~ 01A2:3AE1
cs=0x1a2;eip=0x003ae2; 	X(PUSH(cx));	// 10747                  push    cx              ; offset ;~ 01A2:3AE2
cs=0x1a2;eip=0x003ae3; 	X(PUSH(*(dw*)(raddr(ss,bp+handle))));	// 10748                  push    [bp+handle]     ; handle ;~ 01A2:3AE3
cs=0x1a2;eip=0x003ae6; 	T(NOP);	// 10749                  nop ;~ 01A2:3AE6
cs=0x1a2;eip=0x003ae7; 	X(PUSH(cs));	// 10750                  push    cs ;~ 01A2:3AE7
cs=0x1a2;eip=0x003ae8; 	J(CALL(___lseek,0));	// 10751                  call    near ptr ___lseek ;~ 01A2:3AE8
cs=0x1a2;eip=0x003aeb; 	T(ADD(sp, 8));	// 10752                  add     sp, 8 ;~ 01A2:3AEB
cs=0x1a2;eip=0x003aee; 	T(MOV(bx, *(dw*)(raddr(ss,bp+handle))));	// 10753                  mov     bx, [bp+handle] ;~ 01A2:3AEE
cs=0x1a2;eip=0x003af1; 	T(SHL(bx, 1));	// 10754                  shl     bx, 1 ;~ 01A2:3AF1
cs=0x1a2;eip=0x003af3; 	X(OR(*(dw*)(raddr(ds,bx+0x862)), 0x200));	// 10755                  or      word ptr [bx+862h], 200h ;~ 01A2:3AF3
cs=0x1a2;eip=0x003af9; 	X(POP(bx));	// 10756                  pop     bx ;~ 01A2:3AF9
loc_13afa:
	// 5021 
cs=0x1a2;eip=0x003afa; 	T(SUB(di, bx));	// 10759                  sub     di, bx ;~ 01A2:3AFA
cs=0x1a2;eip=0x003afc; 	T(XCHG(ax, di));	// 10760                  xchg    ax, di ;~ 01A2:3AFC
loc_13afd:
	// 5022 
cs=0x1a2;eip=0x003afd; 	X(POP(di));	// 10764                  pop     di ;~ 01A2:3AFD
cs=0x1a2;eip=0x003afe; 	X(POP(si));	// 10765                  pop     si ;~ 01A2:3AFE
cs=0x1a2;eip=0x003aff; 	T(sp = bp;);	// 10766                  mov     sp, bp ;~ 01A2:3AFF
cs=0x1a2;eip=0x003b01; 	X(POP(bp));	// 10767                  pop     bp ;~ 01A2:3B01
cs=0x1a2;eip=0x003b02; 	J(RETF(0));	// 10768                  retf ;~ 01A2:3B02

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k_____read: 	goto _____read;
        case m2c::kloc_13a4d: 	goto loc_13a4d;
        case m2c::kloc_13a63: 	goto loc_13a63;
        case m2c::kloc_13a68: 	goto loc_13a68;
        case m2c::kloc_13a92: 	goto loc_13a92;
        case m2c::kloc_13a97: 	goto loc_13a97;
        case m2c::kloc_13aa2: 	goto loc_13aa2;
        case m2c::kloc_13ab1: 	goto loc_13ab1;
        case m2c::kloc_13ad0: 	goto loc_13ad0;
        case m2c::kloc_13ad6: 	goto loc_13ad6;
        case m2c::kloc_13ad8: 	goto loc_13ad8;
        case m2c::kloc_13afa: 	goto loc_13afa;
        case m2c::kloc_13afd: 	goto loc_13afd;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool __j____read(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    __j____read:
    _begin:
#undef handle
#define handle 4
	// 10781 handle          = word ptr  4 ;~ 01A2:3B03
#undef buf
#define buf 6
	// 10782 buf             = dword ptr  6 ;~ 01A2:3B03
#undef len
#define len 0x0A
	// 10783 len             = word ptr  0Ah ;~ 01A2:3B03
cs=0x1a2;eip=0x003b03; 	J(return _____read(0, _state););	// 10785                  jmp     near ptr _____read ;~ 01A2:3B03

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k__j____read: 	goto __j____read;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___rewind(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___rewind:
    _begin:
#undef stream
#define stream 6
	// 10796 stream          = dword ptr  6 ;~ 01A2:3B06
cs=0x1a2;eip=0x003b06; 	X(PUSH(bp));	// 10798                  push    bp ;~ 01A2:3B06
cs=0x1a2;eip=0x003b07; 	T(bp = sp;);	// 10799                  mov     bp, sp ;~ 01A2:3B07
cs=0x1a2;eip=0x003b09; 	T(XOR(ax, ax));	// 10800                  xor     ax, ax ;~ 01A2:3B09
cs=0x1a2;eip=0x003b0b; 	X(PUSH(ax));	// 10801                  push    ax              ; whence ;~ 01A2:3B0B
cs=0x1a2;eip=0x003b0c; 	T(XOR(dx, dx));	// 10802                  xor     dx, dx ;~ 01A2:3B0C
cs=0x1a2;eip=0x003b0e; 	X(PUSH(ax));	// 10803                  push    ax ;~ 01A2:3B0E
cs=0x1a2;eip=0x003b0f; 	X(PUSH(dx));	// 10804                  push    dx              ; offset ;~ 01A2:3B0F
cs=0x1a2;eip=0x003b10; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 10805                  push    word ptr [bp+stream+2] ;~ 01A2:3B10
cs=0x1a2;eip=0x003b13; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 10806                  push    word ptr [bp+stream] ; stream ;~ 01A2:3B13
cs=0x1a2;eip=0x003b16; 	T(NOP);	// 10807                  nop ;~ 01A2:3B16
cs=0x1a2;eip=0x003b17; 	X(PUSH(cs));	// 10808                  push    cs ;~ 01A2:3B17
cs=0x1a2;eip=0x003b18; 	J(CALL(___fseek,0));	// 10809                  call    near ptr ___fseek ;~ 01A2:3B18
cs=0x1a2;eip=0x003b1b; 	T(ADD(sp, 0x0A));	// 10810                  add     sp, 0Ah ;~ 01A2:3B1B
cs=0x1a2;eip=0x003b1e; 	T(OR(ax, ax));	// 10811                  or      ax, ax ;~ 01A2:3B1E
cs=0x1a2;eip=0x003b20; 	J(JNZ(loc_13b2a));	// 10812                  jnz     short loc_13B2A ;~ 01A2:3B20
cs=0x1a2;eip=0x003b22; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 10813                  les     bx, [bp+stream] ;~ 01A2:3B22
cs=0x1a2;eip=0x003b25; 	X(AND(*(dw*)(raddr(es,bx+2)), 0x0FFEF));	// 10815                  and     word ptr es:[bx+2], 0FFEFh ;~ 01A2:3B25
loc_13b2a:
	// 5023 
cs=0x1a2;eip=0x003b2a; 	X(POP(bp));	// 10818                  pop     bp ;~ 01A2:3B2A
cs=0x1a2;eip=0x003b2b; 	J(RETF(0));	// 10819                  retf ;~ 01A2:3B2B

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___rewind: 	goto ___rewind;
        case m2c::kloc_13b2a: 	goto loc_13b2a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___setvbuf(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___setvbuf:
    _begin:
#undef stream
#define stream 6
	// 10832 stream          = dword ptr  6 ;~ 01A2:3B2C
#undef buf
#define buf 0x0A
	// 10833 buf             = dword ptr  0Ah ;~ 01A2:3B2C
#undef _type
#define _type 0x0E
	// 10834 _type           = word ptr  0Eh ;~ 01A2:3B2C
#undef size1
#define size1 0x10
	// 10835 size1           = word ptr  10h ;~ 01A2:3B2C
cs=0x1a2;eip=0x003b2c; 	X(PUSH(bp));	// 10837                  push    bp ;~ 01A2:3B2C
cs=0x1a2;eip=0x003b2d; 	T(bp = sp;);	// 10838                  mov     bp, sp ;~ 01A2:3B2D
cs=0x1a2;eip=0x003b2f; 	X(PUSH(si));	// 10839                  push    si ;~ 01A2:3B2F
cs=0x1a2;eip=0x003b30; 	X(PUSH(di));	// 10840                  push    di ;~ 01A2:3B30
cs=0x1a2;eip=0x003b31; 	T(MOV(di, *(dw*)(raddr(ss,bp+_type))));	// 10841                  mov     di, [bp+_type] ;~ 01A2:3B31
cs=0x1a2;eip=0x003b34; 	T(MOV(si, *(dw*)(raddr(ss,bp+size1))));	// 10842                  mov     si, [bp+size1] ;~ 01A2:3B34
cs=0x1a2;eip=0x003b37; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 10843                  les     bx, [bp+stream] ;~ 01A2:3B37
cs=0x1a2;eip=0x003b3a; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x12))));	// 10844                  mov     ax, es:[bx+12h] ;~ 01A2:3B3A
cs=0x1a2;eip=0x003b3e; 	T(CMP(ax, *(dw*)(raddr(ss,bp+stream))));	// 10845                  cmp     ax, word ptr [bp+stream] ;~ 01A2:3B3E
cs=0x1a2;eip=0x003b41; 	J(JNZ(loc_13b4e));	// 10846                  jnz     short loc_13B4E ;~ 01A2:3B41
cs=0x1a2;eip=0x003b43; 	T(CMP(di, 2));	// 10847                  cmp     di, 2 ;~ 01A2:3B43
cs=0x1a2;eip=0x003b46; 	J(JG(loc_13b4e));	// 10848                  jg      short loc_13B4E ;~ 01A2:3B46
cs=0x1a2;eip=0x003b48; 	T(CMP(si, 0x7FFF));	// 10849                  cmp     si, 7FFFh ;~ 01A2:3B48
cs=0x1a2;eip=0x003b4c; 	J(JBE(loc_13b54));	// 10850                  jbe     short loc_13B54 ;~ 01A2:3B4C
loc_13b4e:
	// 5024 
cs=0x1a2;eip=0x003b4e; 	T(ax = 0x0FFFF;);	// 10854                  mov     ax, 0FFFFh ;~ 01A2:3B4E
cs=0x1a2;eip=0x003b51; 	J(JMP(loc_13c45));	// 10855                  jmp     loc_13C45 ;~ 01A2:3B51
loc_13b54:
	// 5025 
cs=0x1a2;eip=0x003b54; 	T(CMP(word_192a6, 0));	// 10859                  cmp     word_192A6, 0 ;~ 01A2:3B54
cs=0x1a2;eip=0x003b59; 	J(JNZ(loc_13b6a));	// 10860                  jnz     short loc_13B6A ;~ 01A2:3B59
cs=0x1a2;eip=0x003b5b; 	T(CMP(*(dw*)(raddr(ss,bp+stream)), 0x6E4));	// 10861                  cmp     word ptr [bp+stream], 6E4h ;~ 01A2:3B5B
cs=0x1a2;eip=0x003b60; 	J(JNZ(loc_13b6a));	// 10862                  jnz     short loc_13B6A ;~ 01A2:3B60
cs=0x1a2;eip=0x003b62; 	X(word_192a6 = 1;);	// 10863                  mov     word_192A6, 1 ;~ 01A2:3B62
cs=0x1a2;eip=0x003b68; 	J(JMP(loc_13b7e));	// 10864                  jmp     short loc_13B7E ;~ 01A2:3B68
loc_13b6a:
	// 5026 
cs=0x1a2;eip=0x003b6a; 	T(CMP(word_192a4, 0));	// 10869                  cmp     word_192A4, 0 ;~ 01A2:3B6A
cs=0x1a2;eip=0x003b6f; 	J(JNZ(loc_13b7e));	// 10870                  jnz     short loc_13B7E ;~ 01A2:3B6F
cs=0x1a2;eip=0x003b71; 	T(CMP(*(dw*)(raddr(ss,bp+stream)), 0x6D0));	// 10871                  cmp     word ptr [bp+stream], 6D0h ;~ 01A2:3B71
cs=0x1a2;eip=0x003b76; 	J(JNZ(loc_13b7e));	// 10872                  jnz     short loc_13B7E ;~ 01A2:3B76
cs=0x1a2;eip=0x003b78; 	X(word_192a4 = 1;);	// 10873                  mov     word_192A4, 1 ;~ 01A2:3B78
loc_13b7e:
	// 5027 
cs=0x1a2;eip=0x003b7e; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 10877                  les     bx, [bp+stream] ;~ 01A2:3B7E
cs=0x1a2;eip=0x003b81; 	T(CMP(*(dw*)(raddr(es,bx)), 0));	// 10878                  cmp     word ptr es:[bx], 0 ;~ 01A2:3B81
cs=0x1a2;eip=0x003b85; 	J(JZ(loc_13b9d));	// 10879                  jz      short loc_13B9D ;~ 01A2:3B85
cs=0x1a2;eip=0x003b87; 	T(ax = 1;);	// 10880                  mov     ax, 1 ;~ 01A2:3B87
cs=0x1a2;eip=0x003b8a; 	X(PUSH(ax));	// 10881                  push    ax              ; whence ;~ 01A2:3B8A
cs=0x1a2;eip=0x003b8b; 	T(XOR(ax, ax));	// 10882                  xor     ax, ax ;~ 01A2:3B8B
cs=0x1a2;eip=0x003b8d; 	T(XOR(dx, dx));	// 10883                  xor     dx, dx ;~ 01A2:3B8D
cs=0x1a2;eip=0x003b8f; 	X(PUSH(ax));	// 10884                  push    ax ;~ 01A2:3B8F
cs=0x1a2;eip=0x003b90; 	X(PUSH(dx));	// 10885                  push    dx              ; offset ;~ 01A2:3B90
cs=0x1a2;eip=0x003b91; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 10886                  push    word ptr [bp+stream+2] ;~ 01A2:3B91
cs=0x1a2;eip=0x003b94; 	X(PUSH(bx));	// 10887                  push    bx              ; stream ;~ 01A2:3B94
cs=0x1a2;eip=0x003b95; 	T(NOP);	// 10888                  nop ;~ 01A2:3B95
cs=0x1a2;eip=0x003b96; 	X(PUSH(cs));	// 10889                  push    cs ;~ 01A2:3B96
cs=0x1a2;eip=0x003b97; 	J(CALL(___fseek,0));	// 10890                  call    near ptr ___fseek ;~ 01A2:3B97
cs=0x1a2;eip=0x003b9a; 	T(ADD(sp, 0x0A));	// 10891                  add     sp, 0Ah ;~ 01A2:3B9A
loc_13b9d:
	// 5028 
cs=0x1a2;eip=0x003b9d; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 10894                  les     bx, [bp+stream] ;~ 01A2:3B9D
cs=0x1a2;eip=0x003ba0; 	T(TEST(*(dw*)(raddr(es,bx+2)), 4));	// 10895                  test    word ptr es:[bx+2], 4 ;~ 01A2:3BA0
cs=0x1a2;eip=0x003ba6; 	J(JZ(loc_13bb7));	// 10896                  jz      short loc_13BB7 ;~ 01A2:3BA6
cs=0x1a2;eip=0x003ba8; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 10897                  push    word ptr es:[bx+0Ah] ;~ 01A2:3BA8
cs=0x1a2;eip=0x003bac; 	X(PUSH(*(dw*)(raddr(es,bx+8))));	// 10898                  push    word ptr es:[bx+8] ; block ;~ 01A2:3BAC
cs=0x1a2;eip=0x003bb0; 	T(NOP);	// 10899                  nop ;~ 01A2:3BB0
cs=0x1a2;eip=0x003bb1; 	X(PUSH(cs));	// 10900                  push    cs ;~ 01A2:3BB1
cs=0x1a2;eip=0x003bb2; 	J(CALL(___farfree,0));	// 10901                  call    near ptr ___farfree ;~ 01A2:3BB2
cs=0x1a2;eip=0x003bb5; 	X(POP(cx));	// 10902                  pop     cx ;~ 01A2:3BB5
cs=0x1a2;eip=0x003bb6; 	X(POP(cx));	// 10903                  pop     cx ;~ 01A2:3BB6
loc_13bb7:
	// 5029 
cs=0x1a2;eip=0x003bb7; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 10906                  les     bx, [bp+stream] ;~ 01A2:3BB7
cs=0x1a2;eip=0x003bba; 	X(AND(*(dw*)(raddr(es,bx+2)), 0x0FFF3));	// 10907                  and     word ptr es:[bx+2], 0FFF3h ;~ 01A2:3BBA
cs=0x1a2;eip=0x003bbf; 	X(MOV(*(dw*)(raddr(es,bx+6)), 0));	// 10908                  mov     word ptr es:[bx+6], 0 ;~ 01A2:3BBF
cs=0x1a2;eip=0x003bc5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+stream+2))));	// 10909                  mov     ax, word ptr [bp+stream+2] ;~ 01A2:3BC5
cs=0x1a2;eip=0x003bc8; 	T(MOV(dx, *(dw*)(raddr(ss,bp+stream))));	// 10910                  mov     dx, word ptr [bp+stream] ;~ 01A2:3BC8
cs=0x1a2;eip=0x003bcb; 	T(ADD(dx, 5));	// 10911                  add     dx, 5 ;~ 01A2:3BCB
cs=0x1a2;eip=0x003bce; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 10912                  mov     es:[bx+0Ah], ax ;~ 01A2:3BCE
cs=0x1a2;eip=0x003bd2; 	X(MOV(*(dw*)(raddr(es,bx+8)), dx));	// 10913                  mov     es:[bx+8], dx ;~ 01A2:3BD2
cs=0x1a2;eip=0x003bd6; 	X(MOV(*(dw*)(raddr(es,bx+0x0E)), ax));	// 10914                  mov     es:[bx+0Eh], ax ;~ 01A2:3BD6
cs=0x1a2;eip=0x003bda; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 10915                  mov     es:[bx+0Ch], dx ;~ 01A2:3BDA
cs=0x1a2;eip=0x003bde; 	T(CMP(di, 2));	// 10916                  cmp     di, 2 ;~ 01A2:3BDE
cs=0x1a2;eip=0x003be1; 	J(JZ(loc_13c43));	// 10917                  jz      short loc_13C43 ;~ 01A2:3BE1
cs=0x1a2;eip=0x003be3; 	T(OR(si, si));	// 10918                  or      si, si ;~ 01A2:3BE3
cs=0x1a2;eip=0x003be5; 	J(JBE(loc_13c43));	// 10919                  jbe     short loc_13C43 ;~ 01A2:3BE5
cs=0x1a2;eip=0x003be7; 	X(*(dw*)(((db*)&__off_18fa4)+2) = seg_offset(seg000););	// 10920                  mov     word ptr __off_18FA4+2, seg seg000 ;~ 01A2:3BE7
cs=0x1a2;eip=0x003bed; 	X(*(dw*)(&__off_18fa4) = 0x41A7;);	// 10921                  mov     word ptr __off_18FA4, 41A7h ;~ 01A2:3BED
cs=0x1a2;eip=0x003bf3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+buf))));	// 10922                  mov     ax, word ptr [bp+buf] ;~ 01A2:3BF3
cs=0x1a2;eip=0x003bf6; 	T(OR(ax, *(dw*)(raddr(ss,bp+buf+2))));	// 10923                  or      ax, word ptr [bp+buf+2] ;~ 01A2:3BF6
cs=0x1a2;eip=0x003bf9; 	J(JNZ(loc_13c1c));	// 10924                  jnz     short loc_13C1C ;~ 01A2:3BF9
cs=0x1a2;eip=0x003bfb; 	X(PUSH(si));	// 10925                  push    si              ; size ;~ 01A2:3BFB
cs=0x1a2;eip=0x003bfc; 	T(NOP);	// 10926                  nop ;~ 01A2:3BFC
cs=0x1a2;eip=0x003bfd; 	X(PUSH(cs));	// 10927                  push    cs ;~ 01A2:3BFD
cs=0x1a2;eip=0x003bfe; 	J(CALL(___malloc,0));	// 10928                  call    near ptr ___malloc ;~ 01A2:3BFE
cs=0x1a2;eip=0x003c01; 	X(POP(cx));	// 10930                  pop     cx ;~ 01A2:3C01
cs=0x1a2;eip=0x003c02; 	X(MOV(*(dw*)(raddr(ss,bp+buf+2)), dx));	// 10931                  mov     word ptr [bp+buf+2], dx ;~ 01A2:3C02
cs=0x1a2;eip=0x003c05; 	X(MOV(*(dw*)(raddr(ss,bp+buf)), ax));	// 10932                  mov     word ptr [bp+buf], ax ;~ 01A2:3C05
cs=0x1a2;eip=0x003c08; 	T(OR(ax, dx));	// 10933                  or      ax, dx ;~ 01A2:3C08
cs=0x1a2;eip=0x003c0a; 	J(JNZ(loc_13c0f));	// 10934                  jnz     short loc_13C0F ;~ 01A2:3C0A
cs=0x1a2;eip=0x003c0c; 	J(JMP(loc_13b4e));	// 10935                  jmp     loc_13B4E ;~ 01A2:3C0C
loc_13c0f:
	// 5030 
cs=0x1a2;eip=0x003c0f; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 10939                  les     bx, [bp+stream] ;~ 01A2:3C0F
cs=0x1a2;eip=0x003c12; 	X(OR(*(dw*)(raddr(es,bx+2)), 4));	// 10941                  or      word ptr es:[bx+2], 4 ;~ 01A2:3C12
cs=0x1a2;eip=0x003c17; 	J(JMP(loc_13c1c));	// 10942                  jmp     short loc_13C1C ;~ 01A2:3C17
ret_1a2_3c19:
	// 5031 
cs=0x1a2;eip=0x003c19; 	J(JMP(loc_13b4e));	// 10944                  jmp     loc_13B4E ;~ 01A2:3C19
loc_13c1c:
	// 5032 
cs=0x1a2;eip=0x003c1c; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 10949                  les     bx, [bp+stream] ;~ 01A2:3C1C
cs=0x1a2;eip=0x003c1f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+buf+2))));	// 10950                  mov     ax, word ptr [bp+buf+2] ;~ 01A2:3C1F
cs=0x1a2;eip=0x003c22; 	T(MOV(dx, *(dw*)(raddr(ss,bp+buf))));	// 10951                  mov     dx, word ptr [bp+buf] ;~ 01A2:3C22
cs=0x1a2;eip=0x003c25; 	X(MOV(*(dw*)(raddr(es,bx+0x0E)), ax));	// 10952                  mov     es:[bx+0Eh], ax ;~ 01A2:3C25
cs=0x1a2;eip=0x003c29; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 10953                  mov     es:[bx+0Ch], dx ;~ 01A2:3C29
cs=0x1a2;eip=0x003c2d; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 10954                  mov     es:[bx+0Ah], ax ;~ 01A2:3C2D
cs=0x1a2;eip=0x003c31; 	X(MOV(*(dw*)(raddr(es,bx+8)), dx));	// 10955                  mov     es:[bx+8], dx ;~ 01A2:3C31
cs=0x1a2;eip=0x003c35; 	X(MOV(*(dw*)(raddr(es,bx+6)), si));	// 10956                  mov     es:[bx+6], si ;~ 01A2:3C35
cs=0x1a2;eip=0x003c39; 	T(CMP(di, 1));	// 10957                  cmp     di, 1 ;~ 01A2:3C39
cs=0x1a2;eip=0x003c3c; 	J(JNZ(loc_13c43));	// 10958                  jnz     short loc_13C43 ;~ 01A2:3C3C
cs=0x1a2;eip=0x003c3e; 	X(OR(*(dw*)(raddr(es,bx+2)), 8));	// 10959                  or      word ptr es:[bx+2], 8 ;~ 01A2:3C3E
loc_13c43:
	// 5033 
cs=0x1a2;eip=0x003c43; 	T(XOR(ax, ax));	// 10963                  xor     ax, ax ;~ 01A2:3C43
loc_13c45:
	// 5034 
cs=0x1a2;eip=0x003c45; 	X(POP(di));	// 10966                  pop     di ;~ 01A2:3C45
cs=0x1a2;eip=0x003c46; 	X(POP(si));	// 10967                  pop     si ;~ 01A2:3C46
cs=0x1a2;eip=0x003c47; 	X(POP(bp));	// 10968                  pop     bp ;~ 01A2:3C47
cs=0x1a2;eip=0x003c48; 	J(RETF(0));	// 10969                  retf ;~ 01A2:3C48

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___setvbuf: 	goto ___setvbuf;
        case m2c::kloc_13b4e: 	goto loc_13b4e;
        case m2c::kloc_13b54: 	goto loc_13b54;
        case m2c::kloc_13b6a: 	goto loc_13b6a;
        case m2c::kloc_13b7e: 	goto loc_13b7e;
        case m2c::kloc_13b9d: 	goto loc_13b9d;
        case m2c::kloc_13bb7: 	goto loc_13bb7;
        case m2c::kloc_13c0f: 	goto loc_13c0f;
        case m2c::kloc_13c1c: 	goto loc_13c1c;
        case m2c::kloc_13c43: 	goto loc_13c43;
        case m2c::kloc_13c45: 	goto loc_13c45;
        case m2c::kret_1a2_3c19: 	goto ret_1a2_3c19;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13c49(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13c49:
    _begin:
#undef maxlen
#define maxlen 4
	// 10981 maxlen          = word ptr  4 ;~ 01A2:3C49
#undef src
#define src 6
	// 10982 src             = dword ptr  6 ;~ 01A2:3C49
#undef dest
#define dest 0x0A
	// 10983 dest            = dword ptr  0Ah ;~ 01A2:3C49
cs=0x1a2;eip=0x003c49; 	X(PUSH(bp));	// 10985                  push    bp ;~ 01A2:3C49
cs=0x1a2;eip=0x003c4a; 	T(bp = sp;);	// 10986                  mov     bp, sp ;~ 01A2:3C4A
cs=0x1a2;eip=0x003c4c; 	X(PUSH(si));	// 10987                  push    si ;~ 01A2:3C4C
cs=0x1a2;eip=0x003c4d; 	T(MOV(si, *(dw*)(raddr(ss,bp+maxlen))));	// 10988                  mov     si, [bp+maxlen] ;~ 01A2:3C4D
cs=0x1a2;eip=0x003c50; 	T(MOV(ax, *(dw*)(raddr(ss,bp+dest))));	// 10989                  mov     ax, word ptr [bp+dest] ;~ 01A2:3C50
cs=0x1a2;eip=0x003c53; 	T(OR(ax, *(dw*)(raddr(ss,bp+dest+2))));	// 10990                  or      ax, word ptr [bp+dest+2] ;~ 01A2:3C53
cs=0x1a2;eip=0x003c56; 	J(JZ(loc_13c9d));	// 10991                  jz      short loc_13C9D ;~ 01A2:3C56
cs=0x1a2;eip=0x003c58; 	X(PUSH(*(dw*)(raddr(ss,bp+src+2))));	// 10992                  push    word ptr [bp+src+2] ;~ 01A2:3C58
cs=0x1a2;eip=0x003c5b; 	X(PUSH(*(dw*)(raddr(ss,bp+src))));	// 10993                  push    word ptr [bp+src] ; s ;~ 01A2:3C5B
cs=0x1a2;eip=0x003c5e; 	T(NOP);	// 10994                  nop ;~ 01A2:3C5E
cs=0x1a2;eip=0x003c5f; 	X(PUSH(cs));	// 10995                  push    cs ;~ 01A2:3C5F
cs=0x1a2;eip=0x003c60; 	J(CALL(___strlen,0));	// 10996                  call    near ptr ___strlen ;~ 01A2:3C60
cs=0x1a2;eip=0x003c63; 	X(POP(cx));	// 10997                  pop     cx ;~ 01A2:3C63
cs=0x1a2;eip=0x003c64; 	X(POP(cx));	// 10998                  pop     cx ;~ 01A2:3C64
cs=0x1a2;eip=0x003c65; 	T(CMP(ax, si));	// 10999                  cmp     ax, si ;~ 01A2:3C65
cs=0x1a2;eip=0x003c67; 	J(JC(loc_13c89));	// 11000                  jb      short loc_13C89 ;~ 01A2:3C67
cs=0x1a2;eip=0x003c69; 	X(PUSH(si));	// 11001                  push    si              ; maxlen ;~ 01A2:3C69
cs=0x1a2;eip=0x003c6a; 	X(PUSH(*(dw*)(raddr(ss,bp+src+2))));	// 11002                  push    word ptr [bp+src+2] ;~ 01A2:3C6A
cs=0x1a2;eip=0x003c6d; 	X(PUSH(*(dw*)(raddr(ss,bp+src))));	// 11003                  push    word ptr [bp+src] ; src ;~ 01A2:3C6D
cs=0x1a2;eip=0x003c70; 	X(PUSH(*(dw*)(raddr(ss,bp+dest+2))));	// 11004                  push    word ptr [bp+dest+2] ;~ 01A2:3C70
cs=0x1a2;eip=0x003c73; 	X(PUSH(*(dw*)(raddr(ss,bp+dest))));	// 11005                  push    word ptr [bp+dest] ; dest ;~ 01A2:3C73
cs=0x1a2;eip=0x003c76; 	T(NOP);	// 11006                  nop ;~ 01A2:3C76
cs=0x1a2;eip=0x003c77; 	X(PUSH(cs));	// 11007                  push    cs ;~ 01A2:3C77
cs=0x1a2;eip=0x003c78; 	J(CALL(___strncpy,0));	// 11008                  call    near ptr ___strncpy ;~ 01A2:3C78
cs=0x1a2;eip=0x003c7b; 	T(ADD(sp, 0x0A));	// 11009                  add     sp, 0Ah ;~ 01A2:3C7B
cs=0x1a2;eip=0x003c7e; 	T(LES(bx, *(dd*)(raddr(ss,bp+dest))));	// 11010                  les     bx, [bp+dest] ;~ 01A2:3C7E
cs=0x1a2;eip=0x003c81; 	T(ADD(bx, si));	// 11012                  add     bx, si ;~ 01A2:3C81
cs=0x1a2;eip=0x003c83; 	X(MOV(*(raddr(es,bx)), 0));	// 11013                  mov     byte ptr es:[bx], 0 ;~ 01A2:3C83
cs=0x1a2;eip=0x003c87; 	J(JMP(loc_13c9d));	// 11014                  jmp     short loc_13C9D ;~ 01A2:3C87
loc_13c89:
	// 5035 
cs=0x1a2;eip=0x003c89; 	X(PUSH(*(dw*)(raddr(ss,bp+src+2))));	// 11018                  push    word ptr [bp+src+2] ;~ 01A2:3C89
cs=0x1a2;eip=0x003c8c; 	X(PUSH(*(dw*)(raddr(ss,bp+src))));	// 11019                  push    word ptr [bp+src] ; src ;~ 01A2:3C8C
cs=0x1a2;eip=0x003c8f; 	X(PUSH(*(dw*)(raddr(ss,bp+dest+2))));	// 11020                  push    word ptr [bp+dest+2] ;~ 01A2:3C8F
cs=0x1a2;eip=0x003c92; 	X(PUSH(*(dw*)(raddr(ss,bp+dest))));	// 11021                  push    word ptr [bp+dest] ; dest ;~ 01A2:3C92
cs=0x1a2;eip=0x003c95; 	T(NOP);	// 11022                  nop ;~ 01A2:3C95
cs=0x1a2;eip=0x003c96; 	X(PUSH(cs));	// 11023                  push    cs ;~ 01A2:3C96
cs=0x1a2;eip=0x003c97; 	J(CALL(___strcpy,0));	// 11024                  call    near ptr ___strcpy ;~ 01A2:3C97
cs=0x1a2;eip=0x003c9a; 	T(ADD(sp, 8));	// 11025                  add     sp, 8 ;~ 01A2:3C9A
loc_13c9d:
	// 5036 
cs=0x1a2;eip=0x003c9d; 	X(POP(si));	// 11029                  pop     si ;~ 01A2:3C9D
cs=0x1a2;eip=0x003c9e; 	X(POP(bp));	// 11030                  pop     bp ;~ 01A2:3C9E
cs=0x1a2;eip=0x003c9f; 	J(RETN(0x0A));	// 11031                  retn    0Ah ;~ 01A2:3C9F

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_13c89: 	goto loc_13c89;
        case m2c::kloc_13c9d: 	goto loc_13c9d;
        case m2c::ksub_13c49: 	goto sub_13c49;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13ca2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13ca2:
    _begin:
#undef var_2
#define var_2 -2
	// 11041 var_2           = word ptr -2 ;~ 01A2:3CA2
#undef arg_0
#define arg_0 4
	// 11042 arg_0           = dword ptr  4 ;~ 01A2:3CA2
cs=0x1a2;eip=0x003ca2; 	X(PUSH(bp));	// 11044                  push    bp ;~ 01A2:3CA2
cs=0x1a2;eip=0x003ca3; 	T(bp = sp;);	// 11045                  mov     bp, sp ;~ 01A2:3CA3
cs=0x1a2;eip=0x003ca5; 	T(SUB(sp, 2));	// 11046                  sub     sp, 2 ;~ 01A2:3CA5
cs=0x1a2;eip=0x003ca8; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 11047                  les     bx, [bp+arg_0] ;~ 01A2:3CA8
cs=0x1a2;eip=0x003cab; 	T(CMP(*(raddr(es,bx-1)), 0x2E));	// 11048                  cmp     byte ptr es:[bx-1], 2Eh ; '.' ;~ 01A2:3CAB
cs=0x1a2;eip=0x003cb0; 	J(JNZ(loc_13cb5));	// 11049                  jnz     short loc_13CB5 ;~ 01A2:3CB0
cs=0x1a2;eip=0x003cb2; 	X(DEC(*(dw*)(raddr(ss,bp+arg_0))));	// 11050                  dec     word ptr [bp+arg_0] ;~ 01A2:3CB2
loc_13cb5:
	// 5037 
cs=0x1a2;eip=0x003cb5; 	X(DEC(*(dw*)(raddr(ss,bp+arg_0))));	// 11053                  dec     word ptr [bp+arg_0] ;~ 01A2:3CB5
cs=0x1a2;eip=0x003cb8; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 11054                  les     bx, [bp+arg_0] ;~ 01A2:3CB8
cs=0x1a2;eip=0x003cbb; 	T(MOV(al, *(raddr(es,bx))));	// 11055                  mov     al, es:[bx] ;~ 01A2:3CBB
cs=0x1a2;eip=0x003cbe; 	T(CBW);	// 11056                  cbw ;~ 01A2:3CBE
cs=0x1a2;eip=0x003cbf; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 11057                  mov     [bp+var_2], ax ;~ 01A2:3CBF
cs=0x1a2;eip=0x003cc2; 	T(cx = 4;);	// 11058                  mov     cx, 4           ; switch 4 cases ;~ 01A2:3CC2
cs=0x1a2;eip=0x003cc5; 	T(bx = offset(seg000,byte_13cf2););	// 11059                  mov     bx, offset byte_13CF2 ;~ 01A2:3CC5
loc_13cc8:
	// 5038 
cs=0x1a2;eip=0x003cc8; 	T(MOV(ax, *(dw*)(raddr(cs,bx))));	// 11062                  mov     ax, cs:[bx] ;~ 01A2:3CC8
cs=0x1a2;eip=0x003ccb; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_2))));	// 11063                  cmp     ax, [bp+var_2] ;~ 01A2:3CCB
cs=0x1a2;eip=0x003cce; 	J(JZ(loc_13cd7));	// 11064                  jz      short loc_13CD7 ;~ 01A2:3CCE
cs=0x1a2;eip=0x003cd0; 	T(ADD(bx, 2));	// 11065                  add     bx, 2 ;~ 01A2:3CD0
cs=0x1a2;eip=0x003cd3; 	J(LOOP(loc_13cc8));	// 11066                  loop    loc_13CC8 ;~ 01A2:3CD3
cs=0x1a2;eip=0x003cd5; 	J(JMP(__def_13cd7));	// 11067                  jmp     short __def_13CD7 ; jumptable 00013CD7 default case ;~ 01A2:3CD5
loc_13cd7:
	// 5039 
cs=0x1a2;eip=0x003cd7; __disp=*(dw*)(raddr(cs,bx+8));
	J(return __dispatch_call(__disp, _state););	// 11071                  jmp     word ptr cs:[bx+8] ; switch jump ;~ 01A2:3CD7
loc_13cdb:
	// 5040 
cs=0x1a2;eip=0x003cdb; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 11075                  les     bx, [bp+arg_0]  ; jumptable 00013CD7 case 58 ;~ 01A2:3CDB
cs=0x1a2;eip=0x003cde; 	T(CMP(*(raddr(es,bx-2)), 0));	// 11076                  cmp     byte ptr es:[bx-2], 0 ;~ 01A2:3CDE
cs=0x1a2;eip=0x003ce3; 	J(JNZ(__def_13cd7));	// 11077                  jnz     short __def_13CD7 ; jumptable 00013CD7 default case ;~ 01A2:3CE3
loc_13ce5:
	// 5041 
cs=0x1a2;eip=0x003ce5; 	T(ax = 1;);	// 11080                  mov     ax, 1           ; jumptable 00013CD7 cases 0,47,92 ;~ 01A2:3CE5
cs=0x1a2;eip=0x003ce8; 	J(JMP(loc_13cec));	// 11081                  jmp     short loc_13CEC ;~ 01A2:3CE8
__def_13cd7:
	// 5042 
cs=0x1a2;eip=0x003cea; 	T(XOR(ax, ax));	// 11086                  xor     ax, ax          ; jumptable 00013CD7 default case ;~ 01A2:3CEA
loc_13cec:
	// 5043 
cs=0x1a2;eip=0x003cec; 	T(sp = bp;);	// 11089                  mov     sp, bp ;~ 01A2:3CEC
cs=0x1a2;eip=0x003cee; 	X(POP(bp));	// 11090                  pop     bp ;~ 01A2:3CEE
cs=0x1a2;eip=0x003cef; 	J(RETN(4));	// 11091                  retn    4 ;~ 01A2:3CEF

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k__def_13cd7: 	goto __def_13cd7;
        case m2c::kloc_13cb5: 	goto loc_13cb5;
        case m2c::kloc_13cc8: 	goto loc_13cc8;
        case m2c::kloc_13cd7: 	goto loc_13cd7;
        case m2c::kloc_13cdb: 	goto loc_13cdb;
        case m2c::kloc_13ce5: 	goto loc_13ce5;
        case m2c::kloc_13cec: 	goto loc_13cec;
        case m2c::ksub_13ca2: 	goto sub_13ca2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____fnsplit(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____fnsplit:
    _begin:
#undef var_58
#define var_58 -0x58
	// 11121 var_58          = byte ptr -58h ;~ 01A2:3D02
#undef src
#define src -0x57
	// 11122 src             = byte ptr -57h ;~ 01A2:3D02
#undef var_56
#define var_56 -0x56
	// 11123 var_56          = byte ptr -56h ;~ 01A2:3D02
#undef var_6
#define var_6 -6
	// 11124 var_6           = word ptr -6 ;~ 01A2:3D02
#undef dest
#define dest -4
	// 11125 dest            = dword ptr -4 ;~ 01A2:3D02
#undef path
#define path 6
	// 11126 path            = dword ptr  6 ;~ 01A2:3D02
#undef drive
#define drive 0x0A
	// 11127 drive           = dword ptr  0Ah ;~ 01A2:3D02
#undef dir
#define dir 0x0E
	// 11128 dir             = dword ptr  0Eh ;~ 01A2:3D02
#undef _name
#define _name 0x12
	// 11129 _name           = dword ptr  12h ;~ 01A2:3D02
#undef ext
#define ext 0x16
	// 11130 ext             = dword ptr  16h ;~ 01A2:3D02
cs=0x1a2;eip=0x003d02; 	X(PUSH(bp));	// 11132                  push    bp ;~ 01A2:3D02
cs=0x1a2;eip=0x003d03; 	T(bp = sp;);	// 11133                  mov     bp, sp ;~ 01A2:3D03
cs=0x1a2;eip=0x003d05; 	T(SUB(sp, 0x58));	// 11134                  sub     sp, 58h ;~ 01A2:3D05
cs=0x1a2;eip=0x003d08; 	X(PUSH(si));	// 11135                  push    si ;~ 01A2:3D08
cs=0x1a2;eip=0x003d09; 	X(PUSH(di));	// 11136                  push    di ;~ 01A2:3D09
cs=0x1a2;eip=0x003d0a; 	T(XOR(di, di));	// 11137                  xor     di, di ;~ 01A2:3D0A
cs=0x1a2;eip=0x003d0c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+drive))));	// 11138                  mov     ax, word ptr [bp+drive] ;~ 01A2:3D0C
cs=0x1a2;eip=0x003d0f; 	T(OR(ax, *(dw*)(raddr(ss,bp+drive+2))));	// 11139                  or      ax, word ptr [bp+drive+2] ;~ 01A2:3D0F
cs=0x1a2;eip=0x003d12; 	J(JZ(loc_13d1b));	// 11140                  jz      short loc_13D1B ;~ 01A2:3D12
cs=0x1a2;eip=0x003d14; 	T(LES(bx, *(dd*)(raddr(ss,bp+drive))));	// 11141                  les     bx, [bp+drive] ;~ 01A2:3D14
cs=0x1a2;eip=0x003d17; 	X(MOV(*(raddr(es,bx)), 0));	// 11142                  mov     byte ptr es:[bx], 0 ;~ 01A2:3D17
loc_13d1b:
	// 5044 
cs=0x1a2;eip=0x003d1b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+dir))));	// 11145                  mov     ax, word ptr [bp+dir] ;~ 01A2:3D1B
cs=0x1a2;eip=0x003d1e; 	T(OR(ax, *(dw*)(raddr(ss,bp+dir+2))));	// 11146                  or      ax, word ptr [bp+dir+2] ;~ 01A2:3D1E
cs=0x1a2;eip=0x003d21; 	J(JZ(loc_13d2a));	// 11147                  jz      short loc_13D2A ;~ 01A2:3D21
cs=0x1a2;eip=0x003d23; 	T(LES(bx, *(dd*)(raddr(ss,bp+dir))));	// 11148                  les     bx, [bp+dir] ;~ 01A2:3D23
cs=0x1a2;eip=0x003d26; 	X(MOV(*(raddr(es,bx)), 0));	// 11149                  mov     byte ptr es:[bx], 0 ;~ 01A2:3D26
loc_13d2a:
	// 5045 
cs=0x1a2;eip=0x003d2a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+_name))));	// 11152                  mov     ax, word ptr [bp+_name] ;~ 01A2:3D2A
cs=0x1a2;eip=0x003d2d; 	T(OR(ax, *(dw*)(raddr(ss,bp+_name+2))));	// 11153                  or      ax, word ptr [bp+_name+2] ;~ 01A2:3D2D
cs=0x1a2;eip=0x003d30; 	J(JZ(loc_13d39));	// 11154                  jz      short loc_13D39 ;~ 01A2:3D30
cs=0x1a2;eip=0x003d32; 	T(LES(bx, *(dd*)(raddr(ss,bp+_name))));	// 11155                  les     bx, [bp+_name] ;~ 01A2:3D32
cs=0x1a2;eip=0x003d35; 	X(MOV(*(raddr(es,bx)), 0));	// 11156                  mov     byte ptr es:[bx], 0 ;~ 01A2:3D35
loc_13d39:
	// 5046 
cs=0x1a2;eip=0x003d39; 	T(MOV(ax, *(dw*)(raddr(ss,bp+ext))));	// 11159                  mov     ax, word ptr [bp+ext] ;~ 01A2:3D39
cs=0x1a2;eip=0x003d3c; 	T(OR(ax, *(dw*)(raddr(ss,bp+ext+2))));	// 11160                  or      ax, word ptr [bp+ext+2] ;~ 01A2:3D3C
cs=0x1a2;eip=0x003d3f; 	J(JZ(loc_13d48));	// 11161                  jz      short loc_13D48 ;~ 01A2:3D3F
cs=0x1a2;eip=0x003d41; 	T(LES(bx, *(dd*)(raddr(ss,bp+ext))));	// 11162                  les     bx, [bp+ext] ;~ 01A2:3D41
cs=0x1a2;eip=0x003d44; 	X(MOV(*(raddr(es,bx)), 0));	// 11163                  mov     byte ptr es:[bx], 0 ;~ 01A2:3D44
loc_13d48:
	// 5047 
cs=0x1a2;eip=0x003d48; 	T(ax = bp+var_58);	// 11166                  lea     ax, [bp+var_58] ;~ 01A2:3D48
cs=0x1a2;eip=0x003d4b; 	X(MOV(*(dw*)(raddr(ss,bp+dest+2)), ss));	// 11167                  mov     word ptr [bp+dest+2], ss ;~ 01A2:3D4B
cs=0x1a2;eip=0x003d4e; 	X(MOV(*(dw*)(raddr(ss,bp+dest)), ax));	// 11168                  mov     word ptr [bp+dest], ax ;~ 01A2:3D4E
cs=0x1a2;eip=0x003d51; 	J(JMP(loc_13d56));	// 11169                  jmp     short loc_13D56 ;~ 01A2:3D51
loc_13d53:
	// 5048 
cs=0x1a2;eip=0x003d53; 	X(INC(*(dw*)(raddr(ss,bp+path))));	// 11173                  inc     word ptr [bp+path] ;~ 01A2:3D53
loc_13d56:
	// 5049 
cs=0x1a2;eip=0x003d56; 	T(LES(bx, *(dd*)(raddr(ss,bp+path))));	// 11176                  les     bx, [bp+path] ;~ 01A2:3D56
cs=0x1a2;eip=0x003d59; 	T(CMP(*(raddr(es,bx)), 0x20));	// 11177                  cmp     byte ptr es:[bx], 20h ; ' ' ;~ 01A2:3D59
cs=0x1a2;eip=0x003d5d; 	J(JZ(loc_13d53));	// 11178                  jz      short loc_13D53 ;~ 01A2:3D5D
cs=0x1a2;eip=0x003d5f; 	X(PUSH(*(dw*)(raddr(ss,bp+path+2))));	// 11179                  push    word ptr [bp+path+2] ;~ 01A2:3D5F
cs=0x1a2;eip=0x003d62; 	X(PUSH(bx));	// 11180                  push    bx              ; s ;~ 01A2:3D62
cs=0x1a2;eip=0x003d63; 	T(NOP);	// 11181                  nop ;~ 01A2:3D63
cs=0x1a2;eip=0x003d64; 	X(PUSH(cs));	// 11182                  push    cs ;~ 01A2:3D64
cs=0x1a2;eip=0x003d65; 	J(CALL(___strlen,0));	// 11183                  call    near ptr ___strlen ;~ 01A2:3D65
cs=0x1a2;eip=0x003d68; 	X(POP(cx));	// 11184                  pop     cx ;~ 01A2:3D68
cs=0x1a2;eip=0x003d69; 	X(POP(cx));	// 11185                  pop     cx ;~ 01A2:3D69
cs=0x1a2;eip=0x003d6a; 	T(si = ax;);	// 11186                  mov     si, ax ;~ 01A2:3D6A
cs=0x1a2;eip=0x003d6c; 	T(CMP(ax, 0x50));	// 11187                  cmp     ax, 50h ; 'P' ;~ 01A2:3D6C
cs=0x1a2;eip=0x003d6f; 	J(JLE(loc_13d74));	// 11188                  jle     short loc_13D74 ;~ 01A2:3D6F
cs=0x1a2;eip=0x003d71; 	T(si = 0x50;);	// 11189                  mov     si, 50h ; 'P' ;~ 01A2:3D71
loc_13d74:
	// 5050 
cs=0x1a2;eip=0x003d74; 	T(LES(bx, *(dd*)(raddr(ss,bp+dest))));	// 11192                  les     bx, [bp+dest] ;~ 01A2:3D74
cs=0x1a2;eip=0x003d77; 	X(MOV(*(raddr(es,bx)), 0));	// 11193                  mov     byte ptr es:[bx], 0 ;~ 01A2:3D77
cs=0x1a2;eip=0x003d7b; 	X(INC(*(dw*)(raddr(ss,bp+dest))));	// 11194                  inc     word ptr [bp+dest] ;~ 01A2:3D7B
cs=0x1a2;eip=0x003d7e; 	X(PUSH(si));	// 11195                  push    si              ; maxlen ;~ 01A2:3D7E
cs=0x1a2;eip=0x003d7f; 	X(PUSH(*(dw*)(raddr(ss,bp+path+2))));	// 11196                  push    word ptr [bp+path+2] ;~ 01A2:3D7F
cs=0x1a2;eip=0x003d82; 	X(PUSH(*(dw*)(raddr(ss,bp+path))));	// 11197                  push    word ptr [bp+path] ; src ;~ 01A2:3D82
cs=0x1a2;eip=0x003d85; 	X(PUSH(*(dw*)(raddr(ss,bp+dest+2))));	// 11198                  push    word ptr [bp+dest+2] ;~ 01A2:3D85
cs=0x1a2;eip=0x003d88; 	X(PUSH(*(dw*)(raddr(ss,bp+dest))));	// 11199                  push    word ptr [bp+dest] ; dest ;~ 01A2:3D88
cs=0x1a2;eip=0x003d8b; 	T(NOP);	// 11200                  nop ;~ 01A2:3D8B
cs=0x1a2;eip=0x003d8c; 	X(PUSH(cs));	// 11201                  push    cs ;~ 01A2:3D8C
cs=0x1a2;eip=0x003d8d; 	J(CALL(___strncpy,0));	// 11202                  call    near ptr ___strncpy ;~ 01A2:3D8D
cs=0x1a2;eip=0x003d90; 	T(ADD(sp, 0x0A));	// 11203                  add     sp, 0Ah ;~ 01A2:3D90
cs=0x1a2;eip=0x003d93; 	X(ADD(*(dw*)(raddr(ss,bp+dest)), si));	// 11204                  add     word ptr [bp+dest], si ;~ 01A2:3D93
cs=0x1a2;eip=0x003d96; 	T(LES(bx, *(dd*)(raddr(ss,bp+dest))));	// 11205                  les     bx, [bp+dest] ;~ 01A2:3D96
cs=0x1a2;eip=0x003d99; 	X(MOV(*(raddr(es,bx)), 0));	// 11206                  mov     byte ptr es:[bx], 0 ;~ 01A2:3D99
cs=0x1a2;eip=0x003d9d; 	T(XOR(si, si));	// 11207                  xor     si, si ;~ 01A2:3D9D
__def_13dc1:
	// 5051 
cs=0x1a2;eip=0x003d9f; 	X(DEC(*(dw*)(raddr(ss,bp+dest))));	// 11211                  dec     word ptr [bp+dest] ; jumptable 00013DC1 default case ;~ 01A2:3D9F
cs=0x1a2;eip=0x003da2; 	T(LES(bx, *(dd*)(raddr(ss,bp+dest))));	// 11212                  les     bx, [bp+dest] ;~ 01A2:3DA2
cs=0x1a2;eip=0x003da5; 	T(MOV(al, *(raddr(es,bx))));	// 11213                  mov     al, es:[bx] ;~ 01A2:3DA5
cs=0x1a2;eip=0x003da8; 	T(CBW);	// 11214                  cbw ;~ 01A2:3DA8
cs=0x1a2;eip=0x003da9; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 11215                  mov     [bp+var_6], ax ;~ 01A2:3DA9
cs=0x1a2;eip=0x003dac; 	T(cx = 7;);	// 11216                  mov     cx, 7           ; switch 7 cases ;~ 01A2:3DAC
cs=0x1a2;eip=0x003daf; 	T(bx = offset(seg000,word_13edc););	// 11217                  mov     bx, offset word_13EDC ;~ 01A2:3DAF
loc_13db2:
	// 5052 
cs=0x1a2;eip=0x003db2; 	T(MOV(ax, *(dw*)(raddr(cs,bx))));	// 11220                  mov     ax, cs:[bx] ;~ 01A2:3DB2
cs=0x1a2;eip=0x003db5; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_6))));	// 11221                  cmp     ax, [bp+var_6] ;~ 01A2:3DB5
cs=0x1a2;eip=0x003db8; 	J(JZ(loc_13dc1));	// 11222                  jz      short loc_13DC1 ;~ 01A2:3DB8
cs=0x1a2;eip=0x003dba; 	T(ADD(bx, 2));	// 11223                  add     bx, 2 ;~ 01A2:3DBA
cs=0x1a2;eip=0x003dbd; 	J(LOOP(loc_13db2));	// 11224                  loop    loc_13DB2 ;~ 01A2:3DBD
cs=0x1a2;eip=0x003dbf; 	J(JMP(__def_13dc1));	// 11225                  jmp     short __def_13DC1 ; jumptable 00013DC1 default case ;~ 01A2:3DBF
loc_13dc1:
	// 5053 
cs=0x1a2;eip=0x003dc1; __disp=*(dw*)(raddr(cs,bx+0x0E));
	J(return __dispatch_call(__disp, _state););	// 11229                  jmp     word ptr cs:[bx+0Eh] ; switch jump ;~ 01A2:3DC1
loc_13dc5:
	// 5054 
cs=0x1a2;eip=0x003dc5; 	T(OR(si, si));	// 11234                  or      si, si          ; jumptable 00013DC1 case 46 ;~ 01A2:3DC5
cs=0x1a2;eip=0x003dc7; 	J(JNZ(loc_13ddc));	// 11235                  jnz     short loc_13DDC ;~ 01A2:3DC7
cs=0x1a2;eip=0x003dc9; 	T(LES(bx, *(dd*)(raddr(ss,bp+dest))));	// 11236                  les     bx, [bp+dest] ;~ 01A2:3DC9
cs=0x1a2;eip=0x003dcc; 	T(CMP(*(raddr(es,bx+1)), 0));	// 11237                  cmp     byte ptr es:[bx+1], 0 ;~ 01A2:3DCC
cs=0x1a2;eip=0x003dd1; 	J(JNZ(loc_13ddc));	// 11238                  jnz     short loc_13DDC ;~ 01A2:3DD1
cs=0x1a2;eip=0x003dd3; 	X(PUSH(*(dw*)(raddr(ss,bp+dest+2))));	// 11239                  push    word ptr [bp+dest+2] ;~ 01A2:3DD3
cs=0x1a2;eip=0x003dd6; 	X(PUSH(bx));	// 11240                  push    bx ;~ 01A2:3DD6
cs=0x1a2;eip=0x003dd7; 	J(CALL(sub_13ca2,0));	// 11241                  call    sub_13CA2 ;~ 01A2:3DD7
cs=0x1a2;eip=0x003dda; 	T(si = ax;);	// 11242                  mov     si, ax ;~ 01A2:3DDA
loc_13ddc:
	// 5055 
cs=0x1a2;eip=0x003ddc; 	T(OR(si, si));	// 11246                  or      si, si ;~ 01A2:3DDC
cs=0x1a2;eip=0x003dde; 	J(JNZ(__def_13dc1));	// 11247                  jnz     short __def_13DC1 ; jumptable 00013DC1 default case ;~ 01A2:3DDE
cs=0x1a2;eip=0x003de0; 	T(TEST(di, 2));	// 11248                  test    di, 2 ;~ 01A2:3DE0
cs=0x1a2;eip=0x003de4; 	J(JNZ(__def_13dc1));	// 11249                  jnz     short __def_13DC1 ; jumptable 00013DC1 default case ;~ 01A2:3DE4
cs=0x1a2;eip=0x003de6; 	T(OR(di, 2));	// 11250                  or      di, 2 ;~ 01A2:3DE6
cs=0x1a2;eip=0x003de9; 	X(PUSH(*(dw*)(raddr(ss,bp+ext+2))));	// 11251                  push    word ptr [bp+ext+2] ;~ 01A2:3DE9
cs=0x1a2;eip=0x003dec; 	X(PUSH(*(dw*)(raddr(ss,bp+ext))));	// 11252                  push    word ptr [bp+ext] ; dest ;~ 01A2:3DEC
cs=0x1a2;eip=0x003def; 	X(PUSH(*(dw*)(raddr(ss,bp+dest+2))));	// 11253                  push    word ptr [bp+dest+2] ;~ 01A2:3DEF
cs=0x1a2;eip=0x003df2; 	X(PUSH(*(dw*)(raddr(ss,bp+dest))));	// 11254                  push    word ptr [bp+dest] ; src ;~ 01A2:3DF2
cs=0x1a2;eip=0x003df5; 	T(ax = 4;);	// 11255                  mov     ax, 4 ;~ 01A2:3DF5
cs=0x1a2;eip=0x003df8; 	X(PUSH(ax));	// 11256                  push    ax              ; maxlen ;~ 01A2:3DF8
cs=0x1a2;eip=0x003df9; 	J(CALL(sub_13c49,0));	// 11257                  call    sub_13C49 ;~ 01A2:3DF9
cs=0x1a2;eip=0x003dfc; 	T(LES(bx, *(dd*)(raddr(ss,bp+dest))));	// 11258                  les     bx, [bp+dest] ;~ 01A2:3DFC
cs=0x1a2;eip=0x003dff; 	X(MOV(*(raddr(es,bx)), 0));	// 11259                  mov     byte ptr es:[bx], 0 ;~ 01A2:3DFF
cs=0x1a2;eip=0x003e03; 	J(JMP(__def_13dc1));	// 11260                  jmp     short __def_13DC1 ; jumptable 00013DC1 default case ;~ 01A2:3E03
loc_13e05:
	// 5056 
cs=0x1a2;eip=0x003e05; 	T(ax = ss;);	// 11265                  mov     ax, ss          ; jumptable 00013DC1 case 58 ;~ 01A2:3E05
cs=0x1a2;eip=0x003e07; 	T(dx = bp+var_56);	// 11266                  lea     dx, [bp+var_56] ;~ 01A2:3E07
cs=0x1a2;eip=0x003e0a; 	T(CMP(ax, *(dw*)(raddr(ss,bp+dest+2))));	// 11267                  cmp     ax, word ptr [bp+dest+2] ;~ 01A2:3E0A
cs=0x1a2;eip=0x003e0d; 	J(JNZ(__def_13dc1));	// 11268                  jnz     short __def_13DC1 ; jumptable 00013DC1 default case ;~ 01A2:3E0D
cs=0x1a2;eip=0x003e0f; 	T(CMP(dx, *(dw*)(raddr(ss,bp+dest))));	// 11269                  cmp     dx, word ptr [bp+dest] ;~ 01A2:3E0F
cs=0x1a2;eip=0x003e12; 	J(JNZ(__def_13dc1));	// 11270                  jnz     short __def_13DC1 ; jumptable 00013DC1 default case ;~ 01A2:3E12
loc_13e14:
	// 5057 
cs=0x1a2;eip=0x003e14; 	T(OR(si, si));	// 11274                  or      si, si          ; jumptable 00013DC1 case 0 ;~ 01A2:3E14
cs=0x1a2;eip=0x003e16; 	J(JZ(loc_13e46));	// 11275                  jz      short loc_13E46 ; jumptable 00013DC1 cases 47,92 ;~ 01A2:3E16
cs=0x1a2;eip=0x003e18; 	X(INC(*(dw*)(raddr(ss,bp+dest))));	// 11276                  inc     word ptr [bp+dest] ;~ 01A2:3E18
cs=0x1a2;eip=0x003e1b; 	T(LES(bx, *(dd*)(raddr(ss,bp+dest))));	// 11277                  les     bx, [bp+dest] ;~ 01A2:3E1B
cs=0x1a2;eip=0x003e1e; 	T(CMP(*(raddr(es,bx)), 0));	// 11278                  cmp     byte ptr es:[bx], 0 ;~ 01A2:3E1E
cs=0x1a2;eip=0x003e22; 	J(JZ(loc_13e27));	// 11279                  jz      short loc_13E27 ;~ 01A2:3E22
cs=0x1a2;eip=0x003e24; 	T(OR(di, 8));	// 11280                  or      di, 8 ;~ 01A2:3E24
loc_13e27:
	// 5058 
cs=0x1a2;eip=0x003e27; 	X(PUSH(*(dw*)(raddr(ss,bp+dir+2))));	// 11283                  push    word ptr [bp+dir+2] ;~ 01A2:3E27
cs=0x1a2;eip=0x003e2a; 	X(PUSH(*(dw*)(raddr(ss,bp+dir))));	// 11284                  push    word ptr [bp+dir] ; dest ;~ 01A2:3E2A
cs=0x1a2;eip=0x003e2d; 	X(PUSH(*(dw*)(raddr(ss,bp+dest+2))));	// 11285                  push    word ptr [bp+dest+2] ;~ 01A2:3E2D
cs=0x1a2;eip=0x003e30; 	X(PUSH(*(dw*)(raddr(ss,bp+dest))));	// 11286                  push    word ptr [bp+dest] ; src ;~ 01A2:3E30
cs=0x1a2;eip=0x003e33; 	T(ax = 0x41;);	// 11287                  mov     ax, 41h ; 'A' ;~ 01A2:3E33
cs=0x1a2;eip=0x003e36; 	X(PUSH(ax));	// 11288                  push    ax              ; maxlen ;~ 01A2:3E36
cs=0x1a2;eip=0x003e37; 	J(CALL(sub_13c49,0));	// 11289                  call    sub_13C49 ;~ 01A2:3E37
cs=0x1a2;eip=0x003e3a; 	T(LES(bx, *(dd*)(raddr(ss,bp+dest))));	// 11290                  les     bx, [bp+dest] ;~ 01A2:3E3A
cs=0x1a2;eip=0x003e3d; 	X(MOV(*(raddr(es,bx)), 0));	// 11291                  mov     byte ptr es:[bx], 0 ;~ 01A2:3E3D
cs=0x1a2;eip=0x003e41; 	X(DEC(*(dw*)(raddr(ss,bp+dest))));	// 11292                  dec     word ptr [bp+dest] ;~ 01A2:3E41
cs=0x1a2;eip=0x003e44; 	J(JMP(loc_13eb0));	// 11293                  jmp     short loc_13EB0 ;~ 01A2:3E44
loc_13e46:
	// 5059 
cs=0x1a2;eip=0x003e46; 	T(OR(si, si));	// 11299                  or      si, si          ; jumptable 00013DC1 cases 47,92 ;~ 01A2:3E46
cs=0x1a2;eip=0x003e48; 	J(JZ(loc_13e4d));	// 11300                  jz      short loc_13E4D ;~ 01A2:3E48
cs=0x1a2;eip=0x003e4a; 	J(JMP(__def_13dc1));	// 11301                  jmp     __def_13DC1     ; jumptable 00013DC1 default case ;~ 01A2:3E4A
loc_13e4d:
	// 5060 
cs=0x1a2;eip=0x003e4d; 	T(INC(si));	// 11305                  inc     si ;~ 01A2:3E4D
cs=0x1a2;eip=0x003e4e; 	X(INC(*(dw*)(raddr(ss,bp+dest))));	// 11306                  inc     word ptr [bp+dest] ;~ 01A2:3E4E
cs=0x1a2;eip=0x003e51; 	T(LES(bx, *(dd*)(raddr(ss,bp+dest))));	// 11307                  les     bx, [bp+dest] ;~ 01A2:3E51
cs=0x1a2;eip=0x003e54; 	T(CMP(*(raddr(es,bx)), 0));	// 11308                  cmp     byte ptr es:[bx], 0 ;~ 01A2:3E54
cs=0x1a2;eip=0x003e58; 	J(JZ(loc_13e5d));	// 11309                  jz      short loc_13E5D ;~ 01A2:3E58
cs=0x1a2;eip=0x003e5a; 	T(OR(di, 4));	// 11310                  or      di, 4 ;~ 01A2:3E5A
loc_13e5d:
	// 5061 
cs=0x1a2;eip=0x003e5d; 	X(PUSH(*(dw*)(raddr(ss,bp+_name+2))));	// 11313                  push    word ptr [bp+_name+2] ;~ 01A2:3E5D
cs=0x1a2;eip=0x003e60; 	X(PUSH(*(dw*)(raddr(ss,bp+_name))));	// 11314                  push    word ptr [bp+_name] ; dest ;~ 01A2:3E60
cs=0x1a2;eip=0x003e63; 	X(PUSH(*(dw*)(raddr(ss,bp+dest+2))));	// 11315                  push    word ptr [bp+dest+2] ;~ 01A2:3E63
cs=0x1a2;eip=0x003e66; 	X(PUSH(*(dw*)(raddr(ss,bp+dest))));	// 11316                  push    word ptr [bp+dest] ; src ;~ 01A2:3E66
cs=0x1a2;eip=0x003e69; 	T(ax = 8;);	// 11317                  mov     ax, 8 ;~ 01A2:3E69
cs=0x1a2;eip=0x003e6c; 	X(PUSH(ax));	// 11318                  push    ax              ; maxlen ;~ 01A2:3E6C
cs=0x1a2;eip=0x003e6d; 	J(CALL(sub_13c49,0));	// 11319                  call    sub_13C49 ;~ 01A2:3E6D
cs=0x1a2;eip=0x003e70; 	T(LES(bx, *(dd*)(raddr(ss,bp+dest))));	// 11320                  les     bx, [bp+dest] ;~ 01A2:3E70
cs=0x1a2;eip=0x003e73; 	X(MOV(*(raddr(es,bx)), 0));	// 11321                  mov     byte ptr es:[bx], 0 ;~ 01A2:3E73
cs=0x1a2;eip=0x003e77; 	X(DEC(*(dw*)(raddr(ss,bp+dest))));	// 11322                  dec     word ptr [bp+dest] ;~ 01A2:3E77
cs=0x1a2;eip=0x003e7a; 	T(LES(bx, *(dd*)(raddr(ss,bp+dest))));	// 11323                  les     bx, [bp+dest] ;~ 01A2:3E7A
cs=0x1a2;eip=0x003e7d; 	T(CMP(*(raddr(es,bx)), 0));	// 11324                  cmp     byte ptr es:[bx], 0 ;~ 01A2:3E7D
cs=0x1a2;eip=0x003e81; 	J(JZ(loc_13eb0));	// 11325                  jz      short loc_13EB0 ;~ 01A2:3E81
cs=0x1a2;eip=0x003e83; 	T(CMP(*(raddr(es,bx)), 0x3A));	// 11326                  cmp     byte ptr es:[bx], 3Ah ; ':' ;~ 01A2:3E83
cs=0x1a2;eip=0x003e87; 	J(JZ(loc_13e8c));	// 11327                  jz      short loc_13E8C ;~ 01A2:3E87
cs=0x1a2;eip=0x003e89; 	J(JMP(__def_13dc1));	// 11328                  jmp     __def_13DC1     ; jumptable 00013DC1 default case ;~ 01A2:3E89
loc_13e8c:
	// 5062 
cs=0x1a2;eip=0x003e8c; 	T(ax = ss;);	// 11332                  mov     ax, ss ;~ 01A2:3E8C
cs=0x1a2;eip=0x003e8e; 	T(dx = bp+var_56);	// 11333                  lea     dx, [bp+var_56] ;~ 01A2:3E8E
cs=0x1a2;eip=0x003e91; 	T(CMP(ax, *(dw*)(raddr(ss,bp+dest+2))));	// 11334                  cmp     ax, word ptr [bp+dest+2] ;~ 01A2:3E91
cs=0x1a2;eip=0x003e94; 	J(JZ(loc_13e99));	// 11335                  jz      short loc_13E99 ;~ 01A2:3E94
cs=0x1a2;eip=0x003e96; 	J(JMP(__def_13dc1));	// 11336                  jmp     __def_13DC1     ; jumptable 00013DC1 default case ;~ 01A2:3E96
loc_13e99:
	// 5063 
cs=0x1a2;eip=0x003e99; 	T(CMP(dx, *(dw*)(raddr(ss,bp+dest))));	// 11340                  cmp     dx, word ptr [bp+dest] ;~ 01A2:3E99
cs=0x1a2;eip=0x003e9c; 	J(JZ(loc_13ea1));	// 11341                  jz      short loc_13EA1 ;~ 01A2:3E9C
cs=0x1a2;eip=0x003e9e; 	J(JMP(__def_13dc1));	// 11342                  jmp     __def_13DC1     ; jumptable 00013DC1 default case ;~ 01A2:3E9E
loc_13ea1:
	// 5064 
cs=0x1a2;eip=0x003ea1; 	J(JMP(loc_13eb0));	// 11346                  jmp     short loc_13EB0 ;~ 01A2:3EA1
loc_13ea3:
	// 5065 
cs=0x1a2;eip=0x003ea3; 	T(OR(si, si));	// 11351                  or      si, si          ; jumptable 00013DC1 cases 42,63 ;~ 01A2:3EA3
cs=0x1a2;eip=0x003ea5; 	J(JZ(loc_13eaa));	// 11352                  jz      short loc_13EAA ;~ 01A2:3EA5
cs=0x1a2;eip=0x003ea7; 	J(JMP(__def_13dc1));	// 11353                  jmp     __def_13DC1     ; jumptable 00013DC1 default case ;~ 01A2:3EA7
loc_13eaa:
	// 5066 
cs=0x1a2;eip=0x003eaa; 	T(OR(di, 1));	// 11357                  or      di, 1 ;~ 01A2:3EAA
cs=0x1a2;eip=0x003ead; 	J(JMP(__def_13dc1));	// 11358                  jmp     __def_13DC1     ; jumptable 00013DC1 default case ;~ 01A2:3EAD
loc_13eb0:
	// 5067 
cs=0x1a2;eip=0x003eb0; 	T(LES(bx, *(dd*)(raddr(ss,bp+dest))));	// 11363                  les     bx, [bp+dest] ;~ 01A2:3EB0
cs=0x1a2;eip=0x003eb3; 	T(CMP(*(raddr(es,bx)), 0x3A));	// 11364                  cmp     byte ptr es:[bx], 3Ah ; ':' ;~ 01A2:3EB3
cs=0x1a2;eip=0x003eb7; 	J(JNZ(loc_13ed4));	// 11365                  jnz     short loc_13ED4 ;~ 01A2:3EB7
cs=0x1a2;eip=0x003eb9; 	T(CMP(*(raddr(ss,bp+src)), 0));	// 11366                  cmp     [bp+src], 0 ;~ 01A2:3EB9
cs=0x1a2;eip=0x003ebd; 	J(JZ(loc_13ec2));	// 11367                  jz      short loc_13EC2 ;~ 01A2:3EBD
cs=0x1a2;eip=0x003ebf; 	T(OR(di, 0x10));	// 11368                  or      di, 10h ;~ 01A2:3EBF
loc_13ec2:
	// 5068 
cs=0x1a2;eip=0x003ec2; 	X(PUSH(*(dw*)(raddr(ss,bp+drive+2))));	// 11371                  push    word ptr [bp+drive+2] ;~ 01A2:3EC2
cs=0x1a2;eip=0x003ec5; 	X(PUSH(*(dw*)(raddr(ss,bp+drive))));	// 11372                  push    word ptr [bp+drive] ; dest ;~ 01A2:3EC5
cs=0x1a2;eip=0x003ec8; 	X(PUSH(ss));	// 11373                  push    ss ;~ 01A2:3EC8
cs=0x1a2;eip=0x003ec9; 	T(ax = bp+src);	// 11374                  lea     ax, [bp+src] ;~ 01A2:3EC9
cs=0x1a2;eip=0x003ecc; 	X(PUSH(ax));	// 11375                  push    ax              ; src ;~ 01A2:3ECC
cs=0x1a2;eip=0x003ecd; 	T(ax = 2;);	// 11376                  mov     ax, 2 ;~ 01A2:3ECD
cs=0x1a2;eip=0x003ed0; 	X(PUSH(ax));	// 11377                  push    ax              ; maxlen ;~ 01A2:3ED0
cs=0x1a2;eip=0x003ed1; 	J(CALL(sub_13c49,0));	// 11378                  call    sub_13C49 ;~ 01A2:3ED1
loc_13ed4:
	// 5069 
cs=0x1a2;eip=0x003ed4; 	T(ax = di;);	// 11381                  mov     ax, di ;~ 01A2:3ED4
cs=0x1a2;eip=0x003ed6; 	X(POP(di));	// 11382                  pop     di ;~ 01A2:3ED6
cs=0x1a2;eip=0x003ed7; 	X(POP(si));	// 11383                  pop     si ;~ 01A2:3ED7
cs=0x1a2;eip=0x003ed8; 	T(sp = bp;);	// 11384                  mov     sp, bp ;~ 01A2:3ED8
cs=0x1a2;eip=0x003eda; 	X(POP(bp));	// 11385                  pop     bp ;~ 01A2:3EDA
cs=0x1a2;eip=0x003edb; 	J(RETF(0));	// 11386                  retf ;~ 01A2:3EDB

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____fnsplit: 	goto ____fnsplit;
        case m2c::k__def_13dc1: 	goto __def_13dc1;
        case m2c::kloc_13d1b: 	goto loc_13d1b;
        case m2c::kloc_13d2a: 	goto loc_13d2a;
        case m2c::kloc_13d39: 	goto loc_13d39;
        case m2c::kloc_13d48: 	goto loc_13d48;
        case m2c::kloc_13d53: 	goto loc_13d53;
        case m2c::kloc_13d56: 	goto loc_13d56;
        case m2c::kloc_13d74: 	goto loc_13d74;
        case m2c::kloc_13db2: 	goto loc_13db2;
        case m2c::kloc_13dc1: 	goto loc_13dc1;
        case m2c::kloc_13dc5: 	goto loc_13dc5;
        case m2c::kloc_13ddc: 	goto loc_13ddc;
        case m2c::kloc_13e05: 	goto loc_13e05;
        case m2c::kloc_13e14: 	goto loc_13e14;
        case m2c::kloc_13e27: 	goto loc_13e27;
        case m2c::kloc_13e46: 	goto loc_13e46;
        case m2c::kloc_13e4d: 	goto loc_13e4d;
        case m2c::kloc_13e5d: 	goto loc_13e5d;
        case m2c::kloc_13e8c: 	goto loc_13e8c;
        case m2c::kloc_13e99: 	goto loc_13e99;
        case m2c::kloc_13ea1: 	goto loc_13ea1;
        case m2c::kloc_13ea3: 	goto loc_13ea3;
        case m2c::kloc_13eaa: 	goto loc_13eaa;
        case m2c::kloc_13eb0: 	goto loc_13eb0;
        case m2c::kloc_13ec2: 	goto loc_13ec2;
        case m2c::kloc_13ed4: 	goto loc_13ed4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____splitpath(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____splitpath:
    _begin:
#undef path
#define path 6
	// 11413 path            = dword ptr  6 ;~ 01A2:3EF8
#undef drive
#define drive 0x0A
	// 11414 drive           = dword ptr  0Ah ;~ 01A2:3EF8
#undef dir
#define dir 0x0E
	// 11415 dir             = dword ptr  0Eh ;~ 01A2:3EF8
#undef _name
#define _name 0x12
	// 11416 _name           = dword ptr  12h ;~ 01A2:3EF8
#undef ext
#define ext 0x16
	// 11417 ext             = dword ptr  16h ;~ 01A2:3EF8
cs=0x1a2;eip=0x003ef8; 	X(PUSH(bp));	// 11419                  push    bp ;~ 01A2:3EF8
cs=0x1a2;eip=0x003ef9; 	T(bp = sp;);	// 11420                  mov     bp, sp ;~ 01A2:3EF9
cs=0x1a2;eip=0x003efb; 	X(PUSH(*(dw*)(raddr(ss,bp+ext+2))));	// 11421                  push    word ptr [bp+ext+2] ;~ 01A2:3EFB
cs=0x1a2;eip=0x003efe; 	X(PUSH(*(dw*)(raddr(ss,bp+ext))));	// 11422                  push    word ptr [bp+ext] ; ext ;~ 01A2:3EFE
cs=0x1a2;eip=0x003f01; 	X(PUSH(*(dw*)(raddr(ss,bp+_name+2))));	// 11423                  push    word ptr [bp+_name+2] ;~ 01A2:3F01
cs=0x1a2;eip=0x003f04; 	X(PUSH(*(dw*)(raddr(ss,bp+_name))));	// 11424                  push    word ptr [bp+_name] ; name ;~ 01A2:3F04
cs=0x1a2;eip=0x003f07; 	X(PUSH(*(dw*)(raddr(ss,bp+dir+2))));	// 11425                  push    word ptr [bp+dir+2] ;~ 01A2:3F07
cs=0x1a2;eip=0x003f0a; 	X(PUSH(*(dw*)(raddr(ss,bp+dir))));	// 11426                  push    word ptr [bp+dir] ; dir ;~ 01A2:3F0A
cs=0x1a2;eip=0x003f0d; 	X(PUSH(*(dw*)(raddr(ss,bp+drive+2))));	// 11427                  push    word ptr [bp+drive+2] ;~ 01A2:3F0D
cs=0x1a2;eip=0x003f10; 	X(PUSH(*(dw*)(raddr(ss,bp+drive))));	// 11428                  push    word ptr [bp+drive] ; drive ;~ 01A2:3F10
cs=0x1a2;eip=0x003f13; 	X(PUSH(*(dw*)(raddr(ss,bp+path+2))));	// 11429                  push    word ptr [bp+path+2] ;~ 01A2:3F13
cs=0x1a2;eip=0x003f16; 	X(PUSH(*(dw*)(raddr(ss,bp+path))));	// 11430                  push    word ptr [bp+path] ; path ;~ 01A2:3F16
cs=0x1a2;eip=0x003f19; 	X(PUSH(cs));	// 11431                  push    cs ;~ 01A2:3F19
cs=0x1a2;eip=0x003f1a; 	J(CALL(____fnsplit,0));	// 11432                  call    near ptr ____fnsplit ;~ 01A2:3F1A
cs=0x1a2;eip=0x003f1d; 	T(ADD(sp, 0x14));	// 11433                  add     sp, 14h ;~ 01A2:3F1D
cs=0x1a2;eip=0x003f20; 	X(POP(bp));	// 11434                  pop     bp ;~ 01A2:3F20
cs=0x1a2;eip=0x003f21; 	J(RETF(0));	// 11435                  retf ;~ 01A2:3F21

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____splitpath: 	goto ____splitpath;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___strcat(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___strcat:
    _begin:
#undef dest
#define dest 6
	// 11447 dest            = dword ptr  6 ;~ 01A2:3F22
#undef src
#define src 0x0A
	// 11448 src             = dword ptr  0Ah ;~ 01A2:3F22
cs=0x1a2;eip=0x003f22; 	X(PUSH(bp));	// 11450                  push    bp ;~ 01A2:3F22
cs=0x1a2;eip=0x003f23; 	T(bp = sp;);	// 11451                  mov     bp, sp ;~ 01A2:3F23
cs=0x1a2;eip=0x003f25; 	X(PUSH(si));	// 11452                  push    si ;~ 01A2:3F25
cs=0x1a2;eip=0x003f26; 	X(PUSH(di));	// 11453                  push    di ;~ 01A2:3F26
cs=0x1a2;eip=0x003f27; 	T(CLD);	// 11454                  cld ;~ 01A2:3F27
cs=0x1a2;eip=0x003f28; 	X(PUSH(ds));	// 11455                  push    ds ;~ 01A2:3F28
cs=0x1a2;eip=0x003f29; 	T(LES(di, *(dd*)(raddr(ss,bp+dest))));	// 11456                  les     di, [bp+dest] ;~ 01A2:3F29
cs=0x1a2;eip=0x003f2c; 	T(dx = di;);	// 11457                  mov     dx, di ;~ 01A2:3F2C
cs=0x1a2;eip=0x003f2e; 	T(XOR(al, al));	// 11458                  xor     al, al ;~ 01A2:3F2E
cs=0x1a2;eip=0x003f30; 	T(cx = 0x0FFFF;);	// 11459                  mov     cx, 0FFFFh ;~ 01A2:3F30
	// 11460                  repne scasb ;~ 01A2:3F33
cs=0x1a2;eip=0x003f33; 	T(	REPNE SCASB);	// 11460                  repne scasb ;~ 01A2:3F33
cs=0x1a2;eip=0x003f35; 	X(PUSH(es));	// 11461                  push    es ;~ 01A2:3F35
cs=0x1a2;eip=0x003f36; 	T(si = di-1);	// 11462                  lea     si, [di-1] ;~ 01A2:3F36
cs=0x1a2;eip=0x003f39; 	T(LES(di, *(dd*)(raddr(ss,bp+src))));	// 11463                  les     di, [bp+src] ;~ 01A2:3F39
cs=0x1a2;eip=0x003f3c; 	T(cx = 0x0FFFF;);	// 11464                  mov     cx, 0FFFFh ;~ 01A2:3F3C
	// 11465                  repne scasb ;~ 01A2:3F3F
cs=0x1a2;eip=0x003f3f; 	T(	REPNE SCASB);	// 11465                  repne scasb ;~ 01A2:3F3F
cs=0x1a2;eip=0x003f41; 	T(NOT(cx));	// 11466                  not     cx ;~ 01A2:3F41
cs=0x1a2;eip=0x003f43; 	T(SUB(di, cx));	// 11467                  sub     di, cx ;~ 01A2:3F43
cs=0x1a2;eip=0x003f45; 	X(PUSH(es));	// 11468                  push    es ;~ 01A2:3F45
cs=0x1a2;eip=0x003f46; 	X(POP(ds));	// 11469                  pop     ds ;~ 01A2:3F46
cs=0x1a2;eip=0x003f47; 	X(POP(es));	// 11470                  pop     es ;~ 01A2:3F47
cs=0x1a2;eip=0x003f48; 	T(XCHG(si, di));	// 11471                  xchg    si, di ;~ 01A2:3F48
cs=0x1a2;eip=0x003f4a; 	T(TEST(si, 1));	// 11472                  test    si, 1 ;~ 01A2:3F4A
cs=0x1a2;eip=0x003f4e; 	J(JZ(loc_13f52));	// 11473                  jz      short loc_13F52 ;~ 01A2:3F4E
cs=0x1a2;eip=0x003f50; 	X(MOVSB);	// 11474                  movsb ;~ 01A2:3F50
cs=0x1a2;eip=0x003f51; 	T(DEC(cx));	// 11475                  dec     cx ;~ 01A2:3F51
loc_13f52:
	// 5070 
cs=0x1a2;eip=0x003f52; 	T(SHR(cx, 1));	// 11478                  shr     cx, 1 ;~ 01A2:3F52
	// 11479                  rep movsw ;~ 01A2:3F54
cs=0x1a2;eip=0x003f54; 	X(	REP MOVSW);	// 11479                  rep movsw ;~ 01A2:3F54
cs=0x1a2;eip=0x003f56; 	J(JNC(loc_13f59));	// 11480                  jnb     short loc_13F59 ;~ 01A2:3F56
cs=0x1a2;eip=0x003f58; 	X(MOVSB);	// 11481                  movsb ;~ 01A2:3F58
loc_13f59:
	// 5071 
cs=0x1a2;eip=0x003f59; 	T(XCHG(ax, dx));	// 11484                  xchg    ax, dx ;~ 01A2:3F59
cs=0x1a2;eip=0x003f5a; 	T(dx = es;);	// 11485                  mov     dx, es ;~ 01A2:3F5A
cs=0x1a2;eip=0x003f5c; 	X(POP(ds));	// 11486                  pop     ds ;~ 01A2:3F5C
cs=0x1a2;eip=0x003f5d; 	X(POP(di));	// 11487                  pop     di ;~ 01A2:3F5D
cs=0x1a2;eip=0x003f5e; 	X(POP(si));	// 11488                  pop     si ;~ 01A2:3F5E
cs=0x1a2;eip=0x003f5f; 	X(POP(bp));	// 11489                  pop     bp ;~ 01A2:3F5F
cs=0x1a2;eip=0x003f60; 	J(RETF(0));	// 11490                  retf ;~ 01A2:3F60

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___strcat: 	goto ___strcat;
        case m2c::kloc_13f52: 	goto loc_13f52;
        case m2c::kloc_13f59: 	goto loc_13f59;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___strcpy(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___strcpy:
    _begin:
#undef dest
#define dest 6
	// 11502 dest            = dword ptr  6 ;~ 01A2:3F61
#undef src
#define src 0x0A
	// 11503 src             = dword ptr  0Ah ;~ 01A2:3F61
cs=0x1a2;eip=0x003f61; 	X(PUSH(bp));	// 11505                  push    bp ;~ 01A2:3F61
cs=0x1a2;eip=0x003f62; 	T(bp = sp;);	// 11506                  mov     bp, sp ;~ 01A2:3F62
cs=0x1a2;eip=0x003f64; 	X(PUSH(si));	// 11507                  push    si ;~ 01A2:3F64
cs=0x1a2;eip=0x003f65; 	X(PUSH(di));	// 11508                  push    di ;~ 01A2:3F65
cs=0x1a2;eip=0x003f66; 	T(CLD);	// 11509                  cld ;~ 01A2:3F66
cs=0x1a2;eip=0x003f67; 	T(LES(di, *(dd*)(raddr(ss,bp+src))));	// 11510                  les     di, [bp+src] ;~ 01A2:3F67
cs=0x1a2;eip=0x003f6a; 	T(si = di;);	// 11511                  mov     si, di ;~ 01A2:3F6A
cs=0x1a2;eip=0x003f6c; 	T(XOR(al, al));	// 11512                  xor     al, al ;~ 01A2:3F6C
cs=0x1a2;eip=0x003f6e; 	T(cx = 0x0FFFF;);	// 11513                  mov     cx, 0FFFFh ;~ 01A2:3F6E
	// 11514                  repne scasb ;~ 01A2:3F71
cs=0x1a2;eip=0x003f71; 	T(	REPNE SCASB);	// 11514                  repne scasb ;~ 01A2:3F71
cs=0x1a2;eip=0x003f73; 	T(NOT(cx));	// 11515                  not     cx ;~ 01A2:3F73
cs=0x1a2;eip=0x003f75; 	X(PUSH(ds));	// 11516                  push    ds ;~ 01A2:3F75
cs=0x1a2;eip=0x003f76; 	T(ax = es;);	// 11517                  mov     ax, es ;~ 01A2:3F76
cs=0x1a2;eip=0x003f78; 	T(ds = ax;);	// 11518                  mov     ds, ax ;~ 01A2:3F78
cs=0x1a2;eip=0x003f7a; 	T(LES(di, *(dd*)(raddr(ss,bp+dest))));	// 11519                  les     di, [bp+dest] ;~ 01A2:3F7A
	// 11520                  rep movsb ;~ 01A2:3F7D
cs=0x1a2;eip=0x003f7d; 	X(	REP MOVSB);	// 11520                  rep movsb ;~ 01A2:3F7D
cs=0x1a2;eip=0x003f7f; 	X(POP(ds));	// 11521                  pop     ds ;~ 01A2:3F7F
cs=0x1a2;eip=0x003f80; 	T(MOV(dx, *(dw*)(raddr(ss,bp+dest+2))));	// 11522                  mov     dx, word ptr [bp+dest+2] ;~ 01A2:3F80
cs=0x1a2;eip=0x003f83; 	T(MOV(ax, *(dw*)(raddr(ss,bp+dest))));	// 11523                  mov     ax, word ptr [bp+dest] ;~ 01A2:3F83
cs=0x1a2;eip=0x003f86; 	X(POP(di));	// 11524                  pop     di ;~ 01A2:3F86
cs=0x1a2;eip=0x003f87; 	X(POP(si));	// 11525                  pop     si ;~ 01A2:3F87
cs=0x1a2;eip=0x003f88; 	X(POP(bp));	// 11526                  pop     bp ;~ 01A2:3F88
cs=0x1a2;eip=0x003f89; 	J(RETF(0));	// 11527                  retf ;~ 01A2:3F89

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___strcpy: 	goto ___strcpy;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___strlen(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___strlen:
    _begin:
#undef s
#define s 6
	// 11540 s               = dword ptr  6 ;~ 01A2:3F8A
cs=0x1a2;eip=0x003f8a; 	X(PUSH(bp));	// 11542                  push    bp ;~ 01A2:3F8A
cs=0x1a2;eip=0x003f8b; 	T(bp = sp;);	// 11543                  mov     bp, sp ;~ 01A2:3F8B
cs=0x1a2;eip=0x003f8d; 	X(PUSH(di));	// 11544                  push    di ;~ 01A2:3F8D
cs=0x1a2;eip=0x003f8e; 	T(LES(di, *(dd*)(raddr(ss,bp+s))));	// 11545                  les     di, [bp+s] ;~ 01A2:3F8E
cs=0x1a2;eip=0x003f91; 	T(XOR(ax, ax));	// 11547                  xor     ax, ax ;~ 01A2:3F91
cs=0x1a2;eip=0x003f93; 	T(CMP(ax, *(dw*)(raddr(ss,bp+s+2))));	// 11548                  cmp     ax, word ptr [bp+s+2] ;~ 01A2:3F93
cs=0x1a2;eip=0x003f96; 	J(JNZ(loc_13f9c));	// 11549                  jnz     short loc_13F9C ;~ 01A2:3F96
cs=0x1a2;eip=0x003f98; 	T(CMP(ax, di));	// 11550                  cmp     ax, di ;~ 01A2:3F98
cs=0x1a2;eip=0x003f9a; 	J(JZ(loc_13fa6));	// 11551                  jz      short loc_13FA6 ;~ 01A2:3F9A
loc_13f9c:
	// 5072 
cs=0x1a2;eip=0x003f9c; 	T(CLD);	// 11554                  cld ;~ 01A2:3F9C
cs=0x1a2;eip=0x003f9d; 	T(cx = 0x0FFFF;);	// 11555                  mov     cx, 0FFFFh ;~ 01A2:3F9D
	// 11556                  repne scasb ;~ 01A2:3FA0
cs=0x1a2;eip=0x003fa0; 	T(	REPNE SCASB);	// 11556                  repne scasb ;~ 01A2:3FA0
cs=0x1a2;eip=0x003fa2; 	T(XCHG(ax, cx));	// 11557                  xchg    ax, cx ;~ 01A2:3FA2
cs=0x1a2;eip=0x003fa3; 	T(NOT(ax));	// 11558                  not     ax ;~ 01A2:3FA3
cs=0x1a2;eip=0x003fa5; 	T(DEC(ax));	// 11559                  dec     ax ;~ 01A2:3FA5
loc_13fa6:
	// 5073 
cs=0x1a2;eip=0x003fa6; 	X(POP(di));	// 11562                  pop     di ;~ 01A2:3FA6
cs=0x1a2;eip=0x003fa7; 	X(POP(bp));	// 11563                  pop     bp ;~ 01A2:3FA7
cs=0x1a2;eip=0x003fa8; 	J(RETF(0));	// 11564                  retf ;~ 01A2:3FA8

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___strlen: 	goto ___strlen;
        case m2c::kloc_13f9c: 	goto loc_13f9c;
        case m2c::kloc_13fa6: 	goto loc_13fa6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ___strncpy(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ___strncpy:
    _begin:
#undef dest
#define dest 6
	// 11576 dest            = dword ptr  6 ;~ 01A2:3FA9
#undef src
#define src 0x0A
	// 11577 src             = dword ptr  0Ah ;~ 01A2:3FA9
#undef maxlen
#define maxlen 0x0E
	// 11578 maxlen          = word ptr  0Eh ;~ 01A2:3FA9
cs=0x1a2;eip=0x003fa9; 	X(PUSH(bp));	// 11580                  push    bp ;~ 01A2:3FA9
cs=0x1a2;eip=0x003faa; 	T(bp = sp;);	// 11581                  mov     bp, sp ;~ 01A2:3FAA
cs=0x1a2;eip=0x003fac; 	X(PUSH(si));	// 11582                  push    si ;~ 01A2:3FAC
cs=0x1a2;eip=0x003fad; 	X(PUSH(di));	// 11583                  push    di ;~ 01A2:3FAD
cs=0x1a2;eip=0x003fae; 	T(CLD);	// 11584                  cld ;~ 01A2:3FAE
cs=0x1a2;eip=0x003faf; 	T(LES(di, *(dd*)(raddr(ss,bp+src))));	// 11585                  les     di, [bp+src] ;~ 01A2:3FAF
cs=0x1a2;eip=0x003fb2; 	T(si = di;);	// 11587                  mov     si, di ;~ 01A2:3FB2
cs=0x1a2;eip=0x003fb4; 	T(XOR(al, al));	// 11588                  xor     al, al ;~ 01A2:3FB4
cs=0x1a2;eip=0x003fb6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+maxlen))));	// 11589                  mov     bx, [bp+maxlen] ;~ 01A2:3FB6
cs=0x1a2;eip=0x003fb9; 	T(cx = bx;);	// 11590                  mov     cx, bx ;~ 01A2:3FB9
	// 11591                  repne scasb ;~ 01A2:3FBB
cs=0x1a2;eip=0x003fbb; 	T(	REPNE SCASB);	// 11591                  repne scasb ;~ 01A2:3FBB
cs=0x1a2;eip=0x003fbd; 	T(SUB(bx, cx));	// 11592                  sub     bx, cx ;~ 01A2:3FBD
cs=0x1a2;eip=0x003fbf; 	X(PUSH(ds));	// 11593                  push    ds ;~ 01A2:3FBF
cs=0x1a2;eip=0x003fc0; 	T(di = es;);	// 11594                  mov     di, es ;~ 01A2:3FC0
cs=0x1a2;eip=0x003fc2; 	T(ds = di;);	// 11595                  mov     ds, di ;~ 01A2:3FC2
cs=0x1a2;eip=0x003fc4; 	T(LES(di, *(dd*)(raddr(ss,bp+dest))));	// 11596                  les     di, [bp+dest] ;~ 01A2:3FC4
cs=0x1a2;eip=0x003fc7; 	T(XCHG(cx, bx));	// 11597                  xchg    cx, bx ;~ 01A2:3FC7
	// 11598                  rep movsb ;~ 01A2:3FC9
cs=0x1a2;eip=0x003fc9; 	X(	REP MOVSB);	// 11598                  rep movsb ;~ 01A2:3FC9
cs=0x1a2;eip=0x003fcb; 	T(cx = bx;);	// 11599                  mov     cx, bx ;~ 01A2:3FCB
	// 11600                  rep stosb ;~ 01A2:3FCD
cs=0x1a2;eip=0x003fcd; 	X(	REP STOSB);	// 11600                  rep stosb ;~ 01A2:3FCD
cs=0x1a2;eip=0x003fcf; 	X(POP(ds));	// 11601                  pop     ds ;~ 01A2:3FCF
cs=0x1a2;eip=0x003fd0; 	T(MOV(dx, *(dw*)(raddr(ss,bp+dest+2))));	// 11602                  mov     dx, word ptr [bp+dest+2] ;~ 01A2:3FD0
cs=0x1a2;eip=0x003fd3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+dest))));	// 11603                  mov     ax, word ptr [bp+dest] ;~ 01A2:3FD3
cs=0x1a2;eip=0x003fd6; 	X(POP(di));	// 11604                  pop     di ;~ 01A2:3FD6
cs=0x1a2;eip=0x003fd7; 	X(POP(si));	// 11605                  pop     si ;~ 01A2:3FD7
cs=0x1a2;eip=0x003fd8; 	X(POP(bp));	// 11606                  pop     bp ;~ 01A2:3FD8
cs=0x1a2;eip=0x003fd9; 	J(RETF(0));	// 11607                  retf ;~ 01A2:3FD9

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___strncpy: 	goto ___strncpy;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _____write(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _____write:
    _begin:
#undef var_8e
#define var_8e -0x8E
	// 11620 var_8E          = byte ptr -8Eh ;~ 01A2:3FDA
#undef var_c
#define var_c -0x0C
	// 11621 var_C           = dword ptr -0Ch ;~ 01A2:3FDA
#undef var_7
#define var_7 -7
	// 11622 var_7           = byte ptr -7 ;~ 01A2:3FDA
#undef var_6
#define var_6 -6
	// 11623 var_6           = word ptr -6 ;~ 01A2:3FDA
#undef var_4
#define var_4 -4
	// 11624 var_4           = dword ptr -4 ;~ 01A2:3FDA
#undef handle
#define handle 6
	// 11625 handle          = word ptr  6 ;~ 01A2:3FDA
#undef buf
#define buf 8
	// 11626 buf             = dword ptr  8 ;~ 01A2:3FDA
#undef len
#define len 0x0C
	// 11627 len             = word ptr  0Ch ;~ 01A2:3FDA
cs=0x1a2;eip=0x003fda; 	X(PUSH(bp));	// 11629                  push    bp ;~ 01A2:3FDA
cs=0x1a2;eip=0x003fdb; 	T(bp = sp;);	// 11630                  mov     bp, sp ;~ 01A2:3FDB
cs=0x1a2;eip=0x003fdd; 	T(SUB(sp, 0x8E));	// 11631                  sub     sp, 8Eh ;~ 01A2:3FDD
cs=0x1a2;eip=0x003fe1; 	X(PUSH(si));	// 11632                  push    si ;~ 01A2:3FE1
cs=0x1a2;eip=0x003fe2; 	X(PUSH(di));	// 11633                  push    di ;~ 01A2:3FE2
cs=0x1a2;eip=0x003fe3; 	T(MOV(di, *(dw*)(raddr(ss,bp+handle))));	// 11634                  mov     di, [bp+handle] ;~ 01A2:3FE3
cs=0x1a2;eip=0x003fe6; 	T(CMP(di, word_19140));	// 11635                  cmp     di, word_19140 ;~ 01A2:3FE6
cs=0x1a2;eip=0x003fea; 	J(JC(loc_13ff6));	// 11636                  jb      short loc_13FF6 ;~ 01A2:3FEA
cs=0x1a2;eip=0x003fec; 	T(ax = 6;);	// 11637                  mov     ax, 6 ;~ 01A2:3FEC
cs=0x1a2;eip=0x003fef; 	X(PUSH(ax));	// 11638                  push    ax ;~ 01A2:3FEF
cs=0x1a2;eip=0x003ff0; 	J(CALL(____ioerror,0));	// 11639                  call    ____IOERROR ;~ 01A2:3FF0
cs=0x1a2;eip=0x003ff3; 	J(JMP(loc_14125));	// 11640                  jmp     loc_14125 ;~ 01A2:3FF3
loc_13ff6:
	// 5074 
cs=0x1a2;eip=0x003ff6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+len))));	// 11644                  mov     ax, [bp+len] ;~ 01A2:3FF6
cs=0x1a2;eip=0x003ff9; 	T(INC(ax));	// 11645                  inc     ax ;~ 01A2:3FF9
cs=0x1a2;eip=0x003ffa; 	T(CMP(ax, 2));	// 11646                  cmp     ax, 2 ;~ 01A2:3FFA
cs=0x1a2;eip=0x003ffd; 	J(JNC(loc_14004));	// 11647                  jnb     short loc_14004 ;~ 01A2:3FFD
cs=0x1a2;eip=0x003fff; 	T(XOR(ax, ax));	// 11648                  xor     ax, ax ;~ 01A2:3FFF
cs=0x1a2;eip=0x004001; 	J(JMP(loc_14125));	// 11649                  jmp     loc_14125 ;~ 01A2:4001
loc_14004:
	// 5075 
cs=0x1a2;eip=0x004004; 	T(bx = di;);	// 11653                  mov     bx, di ;~ 01A2:4004
cs=0x1a2;eip=0x004006; 	T(SHL(bx, 1));	// 11654                  shl     bx, 1 ;~ 01A2:4006
cs=0x1a2;eip=0x004008; 	T(TEST(*(dw*)(raddr(ds,bx+0x862)), 0x800));	// 11655                  test    word ptr [bx+862h], 800h ;~ 01A2:4008
cs=0x1a2;eip=0x00400e; 	J(JZ(loc_14023));	// 11656                  jz      short loc_14023 ;~ 01A2:400E
cs=0x1a2;eip=0x004010; 	T(ax = 2;);	// 11657                  mov     ax, 2 ;~ 01A2:4010
cs=0x1a2;eip=0x004013; 	X(PUSH(ax));	// 11658                  push    ax              ; fromwhere ;~ 01A2:4013
cs=0x1a2;eip=0x004014; 	T(XOR(ax, ax));	// 11659                  xor     ax, ax ;~ 01A2:4014
cs=0x1a2;eip=0x004016; 	T(XOR(dx, dx));	// 11660                  xor     dx, dx ;~ 01A2:4016
cs=0x1a2;eip=0x004018; 	X(PUSH(ax));	// 11661                  push    ax ;~ 01A2:4018
cs=0x1a2;eip=0x004019; 	X(PUSH(dx));	// 11662                  push    dx              ; offset ;~ 01A2:4019
cs=0x1a2;eip=0x00401a; 	X(PUSH(di));	// 11663                  push    di              ; handle ;~ 01A2:401A
cs=0x1a2;eip=0x00401b; 	T(NOP);	// 11664                  nop ;~ 01A2:401B
cs=0x1a2;eip=0x00401c; 	X(PUSH(cs));	// 11665                  push    cs ;~ 01A2:401C
cs=0x1a2;eip=0x00401d; 	J(CALL(___lseek,0));	// 11666                  call    near ptr ___lseek ;~ 01A2:401D
cs=0x1a2;eip=0x004020; 	T(ADD(sp, 8));	// 11667                  add     sp, 8 ;~ 01A2:4020
loc_14023:
	// 5076 
cs=0x1a2;eip=0x004023; 	T(bx = di;);	// 11670                  mov     bx, di ;~ 01A2:4023
cs=0x1a2;eip=0x004025; 	T(SHL(bx, 1));	// 11671                  shl     bx, 1 ;~ 01A2:4025
cs=0x1a2;eip=0x004027; 	T(TEST(*(dw*)(raddr(ds,bx+0x862)), 0x4000));	// 11672                  test    word ptr [bx+862h], 4000h ;~ 01A2:4027
cs=0x1a2;eip=0x00402d; 	J(JNZ(loc_14044));	// 11673                  jnz     short loc_14044 ;~ 01A2:402D
cs=0x1a2;eip=0x00402f; 	X(PUSH(*(dw*)(raddr(ss,bp+len))));	// 11674                  push    [bp+len]        ; len ;~ 01A2:402F
cs=0x1a2;eip=0x004032; 	X(PUSH(*(dw*)(raddr(ss,bp+buf+2))));	// 11675                  push    word ptr [bp+buf+2] ;~ 01A2:4032
cs=0x1a2;eip=0x004035; 	X(PUSH(*(dw*)(raddr(ss,bp+buf))));	// 11676                  push    word ptr [bp+buf] ; buf ;~ 01A2:4035
cs=0x1a2;eip=0x004038; 	X(PUSH(di));	// 11677                  push    di              ; handle ;~ 01A2:4038
cs=0x1a2;eip=0x004039; 	T(NOP);	// 11678                  nop ;~ 01A2:4039
cs=0x1a2;eip=0x00403a; 	X(PUSH(cs));	// 11679                  push    cs ;~ 01A2:403A
cs=0x1a2;eip=0x00403b; 	J(CALL(____write,0));	// 11680                  call    near ptr ____write ;~ 01A2:403B
cs=0x1a2;eip=0x00403e; 	T(ADD(sp, 8));	// 11681                  add     sp, 8 ;~ 01A2:403E
cs=0x1a2;eip=0x004041; 	J(JMP(loc_14125));	// 11682                  jmp     loc_14125 ;~ 01A2:4041
loc_14044:
	// 5077 
cs=0x1a2;eip=0x004044; 	T(bx = di;);	// 11686                  mov     bx, di ;~ 01A2:4044
cs=0x1a2;eip=0x004046; 	T(SHL(bx, 1));	// 11687                  shl     bx, 1 ;~ 01A2:4046
cs=0x1a2;eip=0x004048; 	X(AND(*(dw*)(raddr(ds,bx+0x862)), 0x0FDFF));	// 11688                  and     word ptr [bx+862h], 0FDFFh ;~ 01A2:4048
cs=0x1a2;eip=0x00404e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+buf+2))));	// 11689                  mov     ax, word ptr [bp+buf+2] ;~ 01A2:404E
cs=0x1a2;eip=0x004051; 	T(MOV(dx, *(dw*)(raddr(ss,bp+buf))));	// 11690                  mov     dx, word ptr [bp+buf] ;~ 01A2:4051
cs=0x1a2;eip=0x004054; 	X(MOV(*(dw*)(raddr(ss,bp+var_c+2)), ax));	// 11691                  mov     word ptr [bp+var_C+2], ax ;~ 01A2:4054
cs=0x1a2;eip=0x004057; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), dx));	// 11692                  mov     word ptr [bp+var_C], dx ;~ 01A2:4057
cs=0x1a2;eip=0x00405a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+len))));	// 11693                  mov     ax, [bp+len] ;~ 01A2:405A
cs=0x1a2;eip=0x00405d; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 11694                  mov     [bp+var_6], ax ;~ 01A2:405D
cs=0x1a2;eip=0x004060; 	J(JMP(loc_140d7));	// 11695                  jmp     short loc_140D7 ;~ 01A2:4060
loc_14062:
	// 5078 
cs=0x1a2;eip=0x004062; 	X(DEC(*(dw*)(raddr(ss,bp+var_6))));	// 11699                  dec     [bp+var_6] ;~ 01A2:4062
cs=0x1a2;eip=0x004065; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_c))));	// 11700                  les     bx, [bp+var_C] ;~ 01A2:4065
cs=0x1a2;eip=0x004068; 	X(INC(*(dw*)(raddr(ss,bp+var_c))));	// 11701                  inc     word ptr [bp+var_C] ;~ 01A2:4068
cs=0x1a2;eip=0x00406b; 	T(MOV(al, *(raddr(es,bx))));	// 11702                  mov     al, es:[bx] ;~ 01A2:406B
cs=0x1a2;eip=0x00406e; 	X(MOV(*(raddr(ss,bp+var_7)), al));	// 11703                  mov     [bp+var_7], al ;~ 01A2:406E
cs=0x1a2;eip=0x004071; 	T(CMP(al, 0x0A));	// 11704                  cmp     al, 0Ah ;~ 01A2:4071
cs=0x1a2;eip=0x004073; 	J(JNZ(loc_1407f));	// 11705                  jnz     short loc_1407F ;~ 01A2:4073
cs=0x1a2;eip=0x004075; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 11706                  les     bx, [bp+var_4] ;~ 01A2:4075
cs=0x1a2;eip=0x004078; 	X(MOV(*(raddr(es,bx)), 0x0D));	// 11708                  mov     byte ptr es:[bx], 0Dh ;~ 01A2:4078
cs=0x1a2;eip=0x00407c; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 11709                  inc     word ptr [bp+var_4] ;~ 01A2:407C
loc_1407f:
	// 5079 
cs=0x1a2;eip=0x00407f; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 11713                  les     bx, [bp+var_4] ;~ 01A2:407F
cs=0x1a2;eip=0x004082; 	T(MOV(al, *(raddr(ss,bp+var_7))));	// 11715                  mov     al, [bp+var_7] ;~ 01A2:4082
cs=0x1a2;eip=0x004085; 	X(MOV(*(raddr(es,bx)), al));	// 11716                  mov     es:[bx], al ;~ 01A2:4085
cs=0x1a2;eip=0x004088; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 11717                  inc     word ptr [bp+var_4] ;~ 01A2:4088
cs=0x1a2;eip=0x00408b; 	T(ax = bp+var_8e);	// 11718                  lea     ax, [bp+var_8E] ;~ 01A2:408B
cs=0x1a2;eip=0x00408f; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4))));	// 11719                  mov     dx, word ptr [bp+var_4] ;~ 01A2:408F
cs=0x1a2;eip=0x004092; 	T(XOR(bx, bx));	// 11720                  xor     bx, bx ;~ 01A2:4092
cs=0x1a2;eip=0x004094; 	T(SUB(dx, ax));	// 11721                  sub     dx, ax ;~ 01A2:4094
cs=0x1a2;eip=0x004096; 	T(SBB(bx, 0));	// 11722                  sbb     bx, 0 ;~ 01A2:4096
cs=0x1a2;eip=0x004099; 	T(OR(bx, bx));	// 11723                  or      bx, bx ;~ 01A2:4099
cs=0x1a2;eip=0x00409b; 	J(JL(loc_140e1));	// 11724                  jl      short loc_140E1 ;~ 01A2:409B
cs=0x1a2;eip=0x00409d; 	J(JNZ(loc_140a5));	// 11725                  jnz     short loc_140A5 ;~ 01A2:409D
cs=0x1a2;eip=0x00409f; 	T(CMP(dx, 0x80));	// 11726                  cmp     dx, 80h ; '
cs=0x1a2;eip=0x0040a3; 	J(JC(loc_140e1));	// 11727                  jb      short loc_140E1 ;~ 01A2:40A3
loc_140a5:
	// 5080 
cs=0x1a2;eip=0x0040a5; 	T(ax = bp+var_8e);	// 11730                  lea     ax, [bp+var_8E] ;~ 01A2:40A5
cs=0x1a2;eip=0x0040a9; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_4))));	// 11731                  mov     si, word ptr [bp+var_4] ;~ 01A2:40A9
cs=0x1a2;eip=0x0040ac; 	T(XOR(dx, dx));	// 11732                  xor     dx, dx ;~ 01A2:40AC
cs=0x1a2;eip=0x0040ae; 	T(SUB(si, ax));	// 11733                  sub     si, ax ;~ 01A2:40AE
cs=0x1a2;eip=0x0040b0; 	T(SBB(dx, 0));	// 11734                  sbb     dx, 0 ;~ 01A2:40B0
cs=0x1a2;eip=0x0040b3; 	X(PUSH(si));	// 11735                  push    si              ; len ;~ 01A2:40B3
cs=0x1a2;eip=0x0040b4; 	X(PUSH(ss));	// 11736                  push    ss ;~ 01A2:40B4
cs=0x1a2;eip=0x0040b5; 	X(PUSH(ax));	// 11737                  push    ax              ; buf ;~ 01A2:40B5
cs=0x1a2;eip=0x0040b6; 	X(PUSH(di));	// 11738                  push    di              ; handle ;~ 01A2:40B6
cs=0x1a2;eip=0x0040b7; 	T(NOP);	// 11739                  nop ;~ 01A2:40B7
cs=0x1a2;eip=0x0040b8; 	X(PUSH(cs));	// 11740                  push    cs ;~ 01A2:40B8
cs=0x1a2;eip=0x0040b9; 	J(CALL(____write,0));	// 11741                  call    near ptr ____write ;~ 01A2:40B9
cs=0x1a2;eip=0x0040bc; 	T(ADD(sp, 8));	// 11742                  add     sp, 8 ;~ 01A2:40BC
cs=0x1a2;eip=0x0040bf; 	T(dx = ax;);	// 11743                  mov     dx, ax ;~ 01A2:40BF
cs=0x1a2;eip=0x0040c1; 	T(CMP(ax, si));	// 11744                  cmp     ax, si ;~ 01A2:40C1
cs=0x1a2;eip=0x0040c3; 	J(JZ(loc_140d7));	// 11745                  jz      short loc_140D7 ;~ 01A2:40C3
cs=0x1a2;eip=0x0040c5; 	T(CMP(dx, 0x0FFFF));	// 11746                  cmp     dx, 0FFFFh ;~ 01A2:40C5
cs=0x1a2;eip=0x0040c8; 	J(JNZ(loc_140cf));	// 11747                  jnz     short loc_140CF ;~ 01A2:40C8
loc_140ca:
	// 5081 
cs=0x1a2;eip=0x0040ca; 	T(ax = 0x0FFFF;);	// 11750                  mov     ax, 0FFFFh ;~ 01A2:40CA
cs=0x1a2;eip=0x0040cd; 	J(JMP(loc_14120));	// 11751                  jmp     short loc_14120 ;~ 01A2:40CD
loc_140cf:
	// 5082 
cs=0x1a2;eip=0x0040cf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+len))));	// 11755                  mov     ax, [bp+len] ;~ 01A2:40CF
cs=0x1a2;eip=0x0040d2; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_6))));	// 11756                  sub     ax, [bp+var_6] ;~ 01A2:40D2
cs=0x1a2;eip=0x0040d5; 	J(JMP(loc_1411c));	// 11757                  jmp     short loc_1411C ;~ 01A2:40D5
loc_140d7:
	// 5083 
cs=0x1a2;eip=0x0040d7; 	T(ax = bp+var_8e);	// 11763                  lea     ax, [bp+var_8E] ;~ 01A2:40D7
cs=0x1a2;eip=0x0040db; 	X(MOV(*(dw*)(raddr(ss,bp+var_4+2)), ss));	// 11764                  mov     word ptr [bp+var_4+2], ss ;~ 01A2:40DB
cs=0x1a2;eip=0x0040de; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 11765                  mov     word ptr [bp+var_4], ax ;~ 01A2:40DE
loc_140e1:
	// 5084 
cs=0x1a2;eip=0x0040e1; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0));	// 11769                  cmp     [bp+var_6], 0 ;~ 01A2:40E1
cs=0x1a2;eip=0x0040e5; 	J(JZ(loc_140ea));	// 11770                  jz      short loc_140EA ;~ 01A2:40E5
cs=0x1a2;eip=0x0040e7; 	J(JMP(loc_14062));	// 11771                  jmp     loc_14062 ;~ 01A2:40E7
loc_140ea:
	// 5085 
cs=0x1a2;eip=0x0040ea; 	T(ax = bp+var_8e);	// 11776                  lea     ax, [bp+var_8E] ;~ 01A2:40EA
cs=0x1a2;eip=0x0040ee; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_4))));	// 11777                  mov     si, word ptr [bp+var_4] ;~ 01A2:40EE
cs=0x1a2;eip=0x0040f1; 	T(XOR(dx, dx));	// 11778                  xor     dx, dx ;~ 01A2:40F1
cs=0x1a2;eip=0x0040f3; 	T(SUB(si, ax));	// 11779                  sub     si, ax ;~ 01A2:40F3
cs=0x1a2;eip=0x0040f5; 	T(SBB(dx, 0));	// 11780                  sbb     dx, 0 ;~ 01A2:40F5
cs=0x1a2;eip=0x0040f8; 	T(ax = si;);	// 11781                  mov     ax, si ;~ 01A2:40F8
cs=0x1a2;eip=0x0040fa; 	T(OR(ax, ax));	// 11782                  or      ax, ax ;~ 01A2:40FA
cs=0x1a2;eip=0x0040fc; 	J(JBE(loc_14122));	// 11783                  jbe     short loc_14122 ;~ 01A2:40FC
cs=0x1a2;eip=0x0040fe; 	X(PUSH(si));	// 11784                  push    si              ; len ;~ 01A2:40FE
cs=0x1a2;eip=0x0040ff; 	X(PUSH(ss));	// 11785                  push    ss ;~ 01A2:40FF
cs=0x1a2;eip=0x004100; 	T(ax = bp+var_8e);	// 11786                  lea     ax, [bp+var_8E] ;~ 01A2:4100
cs=0x1a2;eip=0x004104; 	X(PUSH(ax));	// 11787                  push    ax              ; buf ;~ 01A2:4104
cs=0x1a2;eip=0x004105; 	X(PUSH(di));	// 11788                  push    di              ; handle ;~ 01A2:4105
cs=0x1a2;eip=0x004106; 	T(NOP);	// 11789                  nop ;~ 01A2:4106
cs=0x1a2;eip=0x004107; 	X(PUSH(cs));	// 11790                  push    cs ;~ 01A2:4107
cs=0x1a2;eip=0x004108; 	J(CALL(____write,0));	// 11791                  call    near ptr ____write ;~ 01A2:4108
cs=0x1a2;eip=0x00410b; 	T(ADD(sp, 8));	// 11792                  add     sp, 8 ;~ 01A2:410B
cs=0x1a2;eip=0x00410e; 	T(dx = ax;);	// 11793                  mov     dx, ax ;~ 01A2:410E
cs=0x1a2;eip=0x004110; 	T(CMP(ax, si));	// 11794                  cmp     ax, si ;~ 01A2:4110
cs=0x1a2;eip=0x004112; 	J(JZ(loc_14122));	// 11795                  jz      short loc_14122 ;~ 01A2:4112
cs=0x1a2;eip=0x004114; 	T(CMP(dx, 0x0FFFF));	// 11796                  cmp     dx, 0FFFFh ;~ 01A2:4114
cs=0x1a2;eip=0x004117; 	J(JZ(loc_140ca));	// 11797                  jz      short loc_140CA ;~ 01A2:4117
cs=0x1a2;eip=0x004119; 	T(MOV(ax, *(dw*)(raddr(ss,bp+len))));	// 11798                  mov     ax, [bp+len] ;~ 01A2:4119
loc_1411c:
	// 5086 
cs=0x1a2;eip=0x00411c; 	T(ADD(ax, dx));	// 11801                  add     ax, dx ;~ 01A2:411C
cs=0x1a2;eip=0x00411e; 	T(SUB(ax, si));	// 11802                  sub     ax, si ;~ 01A2:411E
loc_14120:
	// 5087 
cs=0x1a2;eip=0x004120; 	J(JMP(loc_14125));	// 11805                  jmp     short loc_14125 ;~ 01A2:4120
loc_14122:
	// 5088 
cs=0x1a2;eip=0x004122; 	T(MOV(ax, *(dw*)(raddr(ss,bp+len))));	// 11810                  mov     ax, [bp+len] ;~ 01A2:4122
loc_14125:
	// 5089 
cs=0x1a2;eip=0x004125; 	X(POP(di));	// 11814                  pop     di ;~ 01A2:4125
cs=0x1a2;eip=0x004126; 	X(POP(si));	// 11815                  pop     si ;~ 01A2:4126
cs=0x1a2;eip=0x004127; 	T(sp = bp;);	// 11816                  mov     sp, bp ;~ 01A2:4127
cs=0x1a2;eip=0x004129; 	X(POP(bp));	// 11817                  pop     bp ;~ 01A2:4129
cs=0x1a2;eip=0x00412a; 	J(RETF(0));	// 11818                  retf ;~ 01A2:412A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k_____write: 	goto _____write;
        case m2c::kloc_13ff6: 	goto loc_13ff6;
        case m2c::kloc_14004: 	goto loc_14004;
        case m2c::kloc_14023: 	goto loc_14023;
        case m2c::kloc_14044: 	goto loc_14044;
        case m2c::kloc_14062: 	goto loc_14062;
        case m2c::kloc_1407f: 	goto loc_1407f;
        case m2c::kloc_140a5: 	goto loc_140a5;
        case m2c::kloc_140ca: 	goto loc_140ca;
        case m2c::kloc_140cf: 	goto loc_140cf;
        case m2c::kloc_140d7: 	goto loc_140d7;
        case m2c::kloc_140e1: 	goto loc_140e1;
        case m2c::kloc_140ea: 	goto loc_140ea;
        case m2c::kloc_1411c: 	goto loc_1411c;
        case m2c::kloc_14120: 	goto loc_14120;
        case m2c::kloc_14122: 	goto loc_14122;
        case m2c::kloc_14125: 	goto loc_14125;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____write(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____write:
    _begin:
#undef handle
#define handle 6
	// 11830 handle          = word ptr  6 ;~ 01A2:412B
#undef buf
#define buf 8
	// 11831 buf             = dword ptr  8 ;~ 01A2:412B
#undef len
#define len 0x0C
	// 11832 len             = word ptr  0Ch ;~ 01A2:412B
cs=0x1a2;eip=0x00412b; 	X(PUSH(bp));	// 11834                  push    bp ;~ 01A2:412B
cs=0x1a2;eip=0x00412c; 	T(bp = sp;);	// 11835                  mov     bp, sp ;~ 01A2:412C
cs=0x1a2;eip=0x00412e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+handle))));	// 11836                  mov     bx, [bp+handle] ;~ 01A2:412E
cs=0x1a2;eip=0x004131; 	T(SHL(bx, 1));	// 11837                  shl     bx, 1 ;~ 01A2:4131
cs=0x1a2;eip=0x004133; 	T(TEST(*(dw*)(raddr(ds,bx+0x862)), 1));	// 11838                  test    word ptr [bx+862h], 1 ;~ 01A2:4133
cs=0x1a2;eip=0x004139; 	J(JZ(loc_14141));	// 11839                  jz      short loc_14141 ;~ 01A2:4139
cs=0x1a2;eip=0x00413b; 	T(ax = 5;);	// 11840                  mov     ax, 5 ;~ 01A2:413B
cs=0x1a2;eip=0x00413e; 	X(PUSH(ax));	// 11841                  push    ax ;~ 01A2:413E
cs=0x1a2;eip=0x00413f; 	J(JMP(loc_14162));	// 11842                  jmp     short loc_14162 ;~ 01A2:413F
loc_14141:
	// 5090 
cs=0x1a2;eip=0x004141; 	X(PUSH(ds));	// 11846                  push    ds ;~ 01A2:4141
cs=0x1a2;eip=0x004142; 	T(ah = 0x40;);	// 11847                  mov     ah, 40h ; '@' ;~ 01A2:4142
cs=0x1a2;eip=0x004144; 	T(MOV(bx, *(dw*)(raddr(ss,bp+handle))));	// 11848                  mov     bx, [bp+handle] ;~ 01A2:4144
cs=0x1a2;eip=0x004147; 	T(MOV(cx, *(dw*)(raddr(ss,bp+len))));	// 11849                  mov     cx, [bp+len] ;~ 01A2:4147
cs=0x1a2;eip=0x00414a; 	T(LDS(dx, *(dd*)(raddr(ss,bp+buf))));	// 11850                  lds     dx, [bp+buf] ;~ 01A2:414A
cs=0x1a2;eip=0x00414d; 	S(_INT(0x21));	// 11851                  int     21h             ; DOS - 2+ - WRITE TO FILE WITH HANDLE ;~ 01A2:414D
cs=0x1a2;eip=0x00414f; 	X(POP(ds));	// 11853                  pop     ds ;~ 01A2:414F
cs=0x1a2;eip=0x004150; 	J(JC(loc_14161));	// 11854                  jb      short loc_14161 ;~ 01A2:4150
cs=0x1a2;eip=0x004152; 	X(PUSH(ax));	// 11855                  push    ax ;~ 01A2:4152
cs=0x1a2;eip=0x004153; 	T(MOV(bx, *(dw*)(raddr(ss,bp+handle))));	// 11856                  mov     bx, [bp+handle] ;~ 01A2:4153
cs=0x1a2;eip=0x004156; 	T(SHL(bx, 1));	// 11857                  shl     bx, 1 ;~ 01A2:4156
cs=0x1a2;eip=0x004158; 	X(OR(*(dw*)(raddr(ds,bx+0x862)), 0x1000));	// 11858                  or      word ptr [bx+862h], 1000h ;~ 01A2:4158
cs=0x1a2;eip=0x00415e; 	X(POP(ax));	// 11859                  pop     ax ;~ 01A2:415E
cs=0x1a2;eip=0x00415f; 	J(JMP(loc_14165));	// 11860                  jmp     short loc_14165 ;~ 01A2:415F
loc_14161:
	// 5091 
cs=0x1a2;eip=0x004161; 	X(PUSH(ax));	// 11864                  push    ax ;~ 01A2:4161
loc_14162:
	// 5092 
cs=0x1a2;eip=0x004162; 	J(CALL(____ioerror,0));	// 11867                  call    ____IOERROR ;~ 01A2:4162
loc_14165:
	// 5093 
cs=0x1a2;eip=0x004165; 	X(POP(bp));	// 11870                  pop     bp ;~ 01A2:4165
cs=0x1a2;eip=0x004166; 	J(RETF(0));	// 11871                  retf ;~ 01A2:4166

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____write: 	goto ____write;
        case m2c::kloc_14141: 	goto loc_14141;
        case m2c::kloc_14161: 	goto loc_14161;
        case m2c::kloc_14162: 	goto loc_14162;
        case m2c::kloc_14165: 	goto loc_14165;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool __j____write(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    __j____write:
    _begin:
#undef handle
#define handle 4
	// 11883 handle          = word ptr  4 ;~ 01A2:4167
#undef buf
#define buf 6
	// 11884 buf             = dword ptr  6 ;~ 01A2:4167
#undef len
#define len 0x0A
	// 11885 len             = word ptr  0Ah ;~ 01A2:4167
cs=0x1a2;eip=0x004167; 	J(return _____write(0, _state););	// 11887                  jmp     near ptr _____write ;~ 01A2:4167

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k__j____write: 	goto __j____write;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____xfclose(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____xfclose:
    _begin:
#undef stream
#define stream -4
	// 11897 stream          = dword ptr -4 ;~ 01A2:416A
cs=0x1a2;eip=0x00416a; 	X(PUSH(bp));	// 11899                  push    bp ;~ 01A2:416A
cs=0x1a2;eip=0x00416b; 	T(bp = sp;);	// 11900                  mov     bp, sp ;~ 01A2:416B
cs=0x1a2;eip=0x00416d; 	T(SUB(sp, 4));	// 11901                  sub     sp, 4 ;~ 01A2:416D
cs=0x1a2;eip=0x004170; 	X(PUSH(si));	// 11902                  push    si ;~ 01A2:4170
cs=0x1a2;eip=0x004171; 	T(XOR(si, si));	// 11903                  xor     si, si ;~ 01A2:4171
cs=0x1a2;eip=0x004173; 	X(MOV(*(dw*)(raddr(ss,bp+stream+2)), ds));	// 11904                  mov     word ptr [bp+stream+2], ds ;~ 01A2:4173
cs=0x1a2;eip=0x004176; 	X(MOV(*(dw*)(raddr(ss,bp+stream)), 0x6D0));	// 11905                  mov     word ptr [bp+stream], 6D0h ;~ 01A2:4176
cs=0x1a2;eip=0x00417b; 	T(CMP(si, word_19140));	// 11906                  cmp     si, word_19140 ;~ 01A2:417B
cs=0x1a2;eip=0x00417f; 	J(JNC(loc_141a2));	// 11907                  jnb     short loc_141A2 ;~ 01A2:417F
loc_14181:
	// 5094 
cs=0x1a2;eip=0x004181; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 11910                  les     bx, [bp+stream] ;~ 01A2:4181
cs=0x1a2;eip=0x004184; 	T(TEST(*(dw*)(raddr(es,bx+2)), 3));	// 11912                  test    word ptr es:[bx+2], 3 ;~ 01A2:4184
cs=0x1a2;eip=0x00418a; 	J(JZ(loc_14197));	// 11913                  jz      short loc_14197 ;~ 01A2:418A
cs=0x1a2;eip=0x00418c; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 11914                  push    word ptr [bp+stream+2] ;~ 01A2:418C
cs=0x1a2;eip=0x00418f; 	X(PUSH(bx));	// 11915                  push    bx              ; stream ;~ 01A2:418F
cs=0x1a2;eip=0x004190; 	T(NOP);	// 11916                  nop ;~ 01A2:4190
cs=0x1a2;eip=0x004191; 	X(PUSH(cs));	// 11917                  push    cs ;~ 01A2:4191
cs=0x1a2;eip=0x004192; 	J(CALL(___fclose,0));	// 11918                  call    near ptr ___fclose ;~ 01A2:4192
cs=0x1a2;eip=0x004195; 	X(POP(cx));	// 11919                  pop     cx ;~ 01A2:4195
cs=0x1a2;eip=0x004196; 	X(POP(cx));	// 11920                  pop     cx ;~ 01A2:4196
loc_14197:
	// 5095 
cs=0x1a2;eip=0x004197; 	X(ADD(*(dw*)(raddr(ss,bp+stream)), 0x14));	// 11923                  add     word ptr [bp+stream], 14h ;~ 01A2:4197
cs=0x1a2;eip=0x00419b; 	T(INC(si));	// 11924                  inc     si ;~ 01A2:419B
cs=0x1a2;eip=0x00419c; 	T(CMP(si, word_19140));	// 11925                  cmp     si, word_19140 ;~ 01A2:419C
cs=0x1a2;eip=0x0041a0; 	J(JC(loc_14181));	// 11926                  jb      short loc_14181 ;~ 01A2:41A0
loc_141a2:
	// 5096 
cs=0x1a2;eip=0x0041a2; 	X(POP(si));	// 11929                  pop     si ;~ 01A2:41A2
cs=0x1a2;eip=0x0041a3; 	T(sp = bp;);	// 11930                  mov     sp, bp ;~ 01A2:41A3
cs=0x1a2;eip=0x0041a5; 	X(POP(bp));	// 11931                  pop     bp ;~ 01A2:41A5
cs=0x1a2;eip=0x0041a6; 	J(RETF(0));	// 11932                  retf ;~ 01A2:41A6

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____xfclose: 	goto ____xfclose;
        case m2c::kloc_14181: 	goto loc_14181;
        case m2c::kloc_14197: 	goto loc_14197;
        case m2c::kloc_141a2: 	goto loc_141a2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ____xfflush(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ____xfflush:
    _begin:
#undef stream
#define stream -4
	// 11942 stream          = dword ptr -4 ;~ 01A2:41A7
cs=0x1a2;eip=0x0041a7; 	X(PUSH(bp));	// 11944                  push    bp ;~ 01A2:41A7
cs=0x1a2;eip=0x0041a8; 	T(bp = sp;);	// 11945                  mov     bp, sp ;~ 01A2:41A8
cs=0x1a2;eip=0x0041aa; 	T(SUB(sp, 4));	// 11946                  sub     sp, 4 ;~ 01A2:41AA
cs=0x1a2;eip=0x0041ad; 	X(PUSH(si));	// 11947                  push    si ;~ 01A2:41AD
cs=0x1a2;eip=0x0041ae; 	T(si = 4;);	// 11948                  mov     si, 4 ;~ 01A2:41AE
cs=0x1a2;eip=0x0041b1; 	X(MOV(*(dw*)(raddr(ss,bp+stream+2)), ds));	// 11949                  mov     word ptr [bp+stream+2], ds ;~ 01A2:41B1
cs=0x1a2;eip=0x0041b4; 	X(MOV(*(dw*)(raddr(ss,bp+stream)), 0x6D0));	// 11950                  mov     word ptr [bp+stream], 6D0h ;~ 01A2:41B4
cs=0x1a2;eip=0x0041b9; 	J(JMP(loc_141d6));	// 11951                  jmp     short loc_141D6 ;~ 01A2:41B9
loc_141bb:
	// 5097 
cs=0x1a2;eip=0x0041bb; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 11955                  les     bx, [bp+stream] ;~ 01A2:41BB
cs=0x1a2;eip=0x0041be; 	T(TEST(*(dw*)(raddr(es,bx+2)), 3));	// 11956                  test    word ptr es:[bx+2], 3 ;~ 01A2:41BE
cs=0x1a2;eip=0x0041c4; 	J(JZ(loc_141d1));	// 11957                  jz      short loc_141D1 ;~ 01A2:41C4
cs=0x1a2;eip=0x0041c6; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 11958                  push    word ptr [bp+stream+2] ;~ 01A2:41C6
cs=0x1a2;eip=0x0041c9; 	X(PUSH(bx));	// 11959                  push    bx              ; stream ;~ 01A2:41C9
cs=0x1a2;eip=0x0041ca; 	T(NOP);	// 11960                  nop ;~ 01A2:41CA
cs=0x1a2;eip=0x0041cb; 	X(PUSH(cs));	// 11961                  push    cs ;~ 01A2:41CB
cs=0x1a2;eip=0x0041cc; 	J(CALL(___fflush,0));	// 11962                  call    near ptr ___fflush ;~ 01A2:41CC
cs=0x1a2;eip=0x0041cf; 	X(POP(cx));	// 11963                  pop     cx ;~ 01A2:41CF
cs=0x1a2;eip=0x0041d0; 	X(POP(cx));	// 11964                  pop     cx ;~ 01A2:41D0
loc_141d1:
	// 5098 
cs=0x1a2;eip=0x0041d1; 	T(DEC(si));	// 11967                  dec     si ;~ 01A2:41D1
cs=0x1a2;eip=0x0041d2; 	X(ADD(*(dw*)(raddr(ss,bp+stream)), 0x14));	// 11968                  add     word ptr [bp+stream], 14h ;~ 01A2:41D2
loc_141d6:
	// 5099 
cs=0x1a2;eip=0x0041d6; 	T(OR(si, si));	// 11971                  or      si, si ;~ 01A2:41D6
cs=0x1a2;eip=0x0041d8; 	J(JNZ(loc_141bb));	// 11972                  jnz     short loc_141BB ;~ 01A2:41D8
cs=0x1a2;eip=0x0041da; 	X(POP(si));	// 11973                  pop     si ;~ 01A2:41DA
cs=0x1a2;eip=0x0041db; 	T(sp = bp;);	// 11974                  mov     sp, bp ;~ 01A2:41DB
cs=0x1a2;eip=0x0041dd; 	X(POP(bp));	// 11975                  pop     bp ;~ 01A2:41DD
cs=0x1a2;eip=0x0041de; 	J(RETF(0));	// 11976                  retf ;~ 01A2:41DE

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k____xfflush: 	goto ____xfflush;
        case m2c::kloc_141bb: 	goto loc_141bb;
        case m2c::kloc_141d1: 	goto loc_141d1;
        case m2c::kloc_141d6: 	goto loc_141d6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

