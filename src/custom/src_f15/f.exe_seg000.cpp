/* THIS IS GENERATED FILE */

        
#include "f.exe.h"

                

 bool _nullsub_2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _nullsub_2:
    _begin:
cs=0x1a2;eip=0x000019; 	J(RETN(0));	// 50                  retn ;~ 01A2:0019

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k_nullsub_2: 	goto _nullsub_2;
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
seg000_1b_proc:
	// 57 
loc_1001b:
	// 4370 
cs=0x1a2;eip=0x00001b; 	J(JMP(loc_10027));	// 58                  jmp     short loc_10027 ;~ 01A2:001B
ret_1a2_1d:
	// 4371 
cs=0x1a2;eip=0x00001d; 	J(RETN(0));	// 60                  retn ;~ 01A2:001D
ret_1a2_1e:
	// 4372 
cs=0x1a2;eip=0x00001e; 	J(RETF(0));	// 62                  retf ;~ 01A2:001E
ret_1a2_1f:
	// 4373 
cs=0x1a2;eip=0x00001f; 	J(IRET);	// 64                  iret ;~ 01A2:001F
ret_1a2_20:
	// 4374 
cs=0x1a2;eip=0x000020; 	X(PUSH(ax));	// 66                  push    ax ;~ 01A2:0020
cs=0x1a2;eip=0x000021; 	T(INC(bx));	// 67                  inc     bx ;~ 01A2:0021
cs=0x1a2;eip=0x000022; 	T(INC(bx));	// 68                  inc     bx ;~ 01A2:0022
cs=0x1a2;eip=0x000023; 	T(DEC(sp));	// 69                  dec     sp ;~ 01A2:0023
cs=0x1a2;eip=0x000024; 	T(DEC(di));	// 70                  dec     di ;~ 01A2:0024
cs=0x1a2;eip=0x000025; 	T(INC(cx));	// 71                  inc     cx ;~ 01A2:0025
cs=0x1a2;eip=0x000026; 	T(DEC(bx));	// 72                  dec     bx ;~ 01A2:0026
loc_10027:
	// 4375 
cs=0x1a2;eip=0x000027; 	X(byte_1001a = 0x12;);	// 75                  mov     ds:byte_1001A, 12h ;~ 01A2:0027
cs=0x1a2;eip=0x00002c; 	J(CALL(_nullsub_2,0));	// 76                  call    _nullsub_2 ;~ 01A2:002C
cs=0x1a2;eip=0x00002f; 	J(CALL(_nullsub_2,0));	// 77                  call    _nullsub_2 ;~ 01A2:002F
cs=0x1a2;eip=0x000032; 	J(CALL(_nullsub_2,0));	// 78                  call    _nullsub_2 ;~ 01A2:0032
cs=0x1a2;eip=0x000035; 	J(CALL(_nullsub_2,0));	// 79                  call    _nullsub_2 ;~ 01A2:0035
cs=0x1a2;eip=0x000038; 	X(PUSH(ds));	// 80                  push    ds ;~ 01A2:0038
cs=0x1a2;eip=0x000039; 	T(XOR(ax, ax));	// 81                  xor     ax, ax ;~ 01A2:0039
cs=0x1a2;eip=0x00003b; 	T(ds = ax;);	// 82                  mov     ds, ax ;~ 01A2:003B
cs=0x1a2;eip=0x00003d; 	X(MOV(*(dw*)(raddr(ds,0x417)), ax));	// 84                  mov     ds:417h, ax ;~ 01A2:003D
cs=0x1a2;eip=0x000040; 	X(POP(ds));	// 85                  pop     ds ;~ 01A2:0040
cs=0x1a2;eip=0x000041; 	T(XOR(ax, ax));	// 87                  xor     ax, ax ;~ 01A2:0041
cs=0x1a2;eip=0x000043; 	J(CALL(_nullsub_2,0));	// 88                  call    _nullsub_2 ;~ 01A2:0043
cs=0x1a2;eip=0x000046; 	J(CALL(_nullsub_2,0));	// 89                  call    _nullsub_2 ;~ 01A2:0046
cs=0x1a2;eip=0x000049; 	J(CALL(_nullsub_2,0));	// 90                  call    _nullsub_2 ;~ 01A2:0049
cs=0x1a2;eip=0x00004c; 	J(CALL(_nullsub_2,0));	// 91                  call    _nullsub_2 ;~ 01A2:004C
cs=0x1a2;eip=0x00004f; 	J(CALL(_nullsub_2,0));	// 92                  call    _nullsub_2 ;~ 01A2:004F
cs=0x1a2;eip=0x000052; 	T(OR(ax, ax));	// 93                  or      ax, ax ;~ 01A2:0052
cs=0x1a2;eip=0x000054; 	J(JZ(loc_10059));	// 94                  jz      short loc_10059 ;~ 01A2:0054
cs=0x1a2;eip=0x000056; 	J(JMP(loc_1026e));	// 95                  jmp     loc_1026E ;~ 01A2:0056
loc_10059:
	// 4376 
cs=0x1a2;eip=0x000059; 	T(bx = 0x70D;);	// 99                  mov     bx, 70Dh ;~ 01A2:0059
cs=0x1a2;eip=0x00005c; 	T(SHR(bx, 1));	// 100                  shr     bx, 1 ;~ 01A2:005C
cs=0x1a2;eip=0x00005e; 	T(SHR(bx, 1));	// 101                  shr     bx, 1 ;~ 01A2:005E
cs=0x1a2;eip=0x000060; 	T(SHR(bx, 1));	// 102                  shr     bx, 1 ;~ 01A2:0060
cs=0x1a2;eip=0x000062; 	T(SHR(bx, 1));	// 103                  shr     bx, 1 ;~ 01A2:0062
cs=0x1a2;eip=0x000064; 	T(INC(bx));	// 104                  inc     bx ;~ 01A2:0064
cs=0x1a2;eip=0x000065; 	T(ah = 0x4A;);	// 105                  mov     ah, 4Ah ;~ 01A2:0065
cs=0x1a2;eip=0x000067; 	S(_INT(0x21));	// 106                  int     21h             ; DOS - 2+ - ADJUST MEMORY BLOCK SIZE (SETBLOCK) ;~ 01A2:0067
cs=0x1a2;eip=0x000069; 	X(PUSH(es));	// 109                  push    es ;~ 01A2:0069
cs=0x1a2;eip=0x00006a; 	T(ah = 0x48;);	// 110                  mov     ah, 48h ; 'H' ;~ 01A2:006A
cs=0x1a2;eip=0x00006c; 	T(bx = 0x140;);	// 111                  mov     bx, 140h ;~ 01A2:006C
cs=0x1a2;eip=0x00006f; 	S(_INT(0x21));	// 112                  int     21h             ; DOS - 2+ - ALLOCATE MEMORY ;~ 01A2:006F
cs=0x1a2;eip=0x000071; 	T(bx = ax;);	// 114                  mov     bx, ax ;~ 01A2:0071
cs=0x1a2;eip=0x000073; 	T(DEC(ax));	// 115                  dec     ax ;~ 01A2:0073
cs=0x1a2;eip=0x000074; 	T(es = ax;);	// 116                  mov     es, ax ;~ 01A2:0074
cs=0x1a2;eip=0x000076; 	T(ax = word_48feb;);	// 118                  mov     ax, word_48FEB ;~ 01A2:0076
cs=0x1a2;eip=0x000079; 	X(MOV(*(dw*)(raddr(es,0x0C)), ax));	// 119                  mov     es:0Ch, ax ;~ 01A2:0079
cs=0x1a2;eip=0x00007d; 	T(ax = word_48fed;);	// 120                  mov     ax, word_48FED ;~ 01A2:007D
loc_10080:
	// 4377 
cs=0x1a2;eip=0x000080; 	X(MOV(*(dw*)(raddr(es,0x0E)), ax));	// 123                  mov     es:0Eh, ax ;~ 01A2:0080
cs=0x1a2;eip=0x000084; 	T(ax = 0;);	// 124                  mov     ax, 0 ;~ 01A2:0084
cs=0x1a2;eip=0x000087; 	T(es = ax;);	// 125                  mov     es, ax ;~ 01A2:0087
cs=0x1a2;eip=0x000089; 	X(MOV(*(dw*)(raddr(es,0x4F0)), bx));	// 127                  mov     es:4F0h, bx ;~ 01A2:0089
cs=0x1a2;eip=0x00008e; 	X(word_49060 = bx;);	// 128                  mov     word_49060, bx ;~ 01A2:008E
cs=0x1a2;eip=0x000092; 	T(ax = 1;);	// 129                  mov     ax, 1 ;~ 01A2:0092
cs=0x1a2;eip=0x000095; 	X(MOV(*(dw*)(raddr(es,0x4F2)), ax));	// 130                  mov     es:4F2h, ax ;~ 01A2:0095
cs=0x1a2;eip=0x000099; 	T(ax = 0;);	// 131                  mov     ax, 0 ;~ 01A2:0099
cs=0x1a2;eip=0x00009c; 	X(MOV(*(dw*)(raddr(es,0x4F4)), ax));	// 132                  mov     es:4F4h, ax ;~ 01A2:009C
cs=0x1a2;eip=0x0000a0; 	X(POP(es));	// 133                  pop     es ;~ 01A2:00A0
cs=0x1a2;eip=0x0000a1; 	T(al = 0x0D;);	// 135                  mov     al, 0Dh ;~ 01A2:00A1
cs=0x1a2;eip=0x0000a3; 	X(byte_49073 = al;);	// 136                  mov     byte_49073, al ;~ 01A2:00A3
cs=0x1a2;eip=0x0000a6; 	T(MOV(cl, *(raddr(cs,m2c::kloc_10080))));	// 137                  mov     cl, byte ptr cs:loc_10080 ;~ 01A2:00A6
cs=0x1a2;eip=0x0000ab; 	T(SUB(ch, ch));	// 138                  sub     ch, ch ;~ 01A2:00AB
cs=0x1a2;eip=0x0000ad; 	J(JCXZ(loc_100b9));	// 139                  jcxz    short loc_100B9 ;~ 01A2:00AD
cs=0x1a2;eip=0x0000af; 	T(INC(cx));	// 140                  inc     cx ;~ 01A2:00AF
cs=0x1a2;eip=0x0000b0; 	T(INC(cx));	// 141                  inc     cx ;~ 01A2:00B0
cs=0x1a2;eip=0x0000b1; 	T(si = 0x80;);	// 142                  mov     si, 80h ;~ 01A2:00B1
cs=0x1a2;eip=0x0000b4; 	T(di = 0x592;);	// 143                  mov     di, 592h ;~ 01A2:00B4
	// 144                  rep movsb ;~ 01A2:00B7
cs=0x1a2;eip=0x0000b7; 	X(	REP MOVSB);	// 144                  rep movsb ;~ 01A2:00B7
loc_100b9:
	// 4378 
cs=0x1a2;eip=0x0000b9; 	T(ax = cs;);	// 147                  mov     ax, cs ;~ 01A2:00B9
cs=0x1a2;eip=0x0000bb; 	X(word_49068 = ax;);	// 148                  mov     word_49068, ax ;~ 01A2:00BB
cs=0x1a2;eip=0x0000be; 	X(word_4906c = ax;);	// 149                  mov     word_4906C, ax ;~ 01A2:00BE
cs=0x1a2;eip=0x0000c1; 	X(word_49070 = ax;);	// 150                  mov     word_49070, ax ;~ 01A2:00C1
cs=0x1a2;eip=0x0000c4; 	T(dx = 0x52E;);	// 151                  mov     dx, 52Eh ;~ 01A2:00C4
cs=0x1a2;eip=0x0000c7; 	T(bx = 0x584;);	// 152                  mov     bx, 584h ;~ 01A2:00C7
cs=0x1a2;eip=0x0000ca; 	X(word_49062 = sp;);	// 153                  mov     word_49062, sp ;~ 01A2:00CA
cs=0x1a2;eip=0x0000ce; 	T(ax = 0x4B00;);	// 154                  mov     ax, 4B00h ;~ 01A2:00CE
cs=0x1a2;eip=0x0000d1; 	S(_INT(0x21));	// 155                  int     21h             ; DOS - 2+ - LOAD OR EXECUTE (EXEC) ;~ 01A2:00D1
cs=0x1a2;eip=0x0000d3; 	T(cx = cs;);	// 159                  mov     cx, cs ;~ 01A2:00D3
cs=0x1a2;eip=0x0000d5; 	S(ss = cx;);	// 160                  mov     ss, cx ;~ 01A2:00D5
cs=0x1a2;eip=0x0000d7; 	T(sp = word_10582;);	// 162                  mov     sp, cs:word_10582 ;~ 01A2:00D7
cs=0x1a2;eip=0x0000dc; 	T(ds = cx;);	// 163                  mov     ds, cx ;~ 01A2:00DC
cs=0x1a2;eip=0x0000de; 	T(es = cx;);	// 165                  mov     es, cx ;~ 01A2:00DE
cs=0x1a2;eip=0x0000e0; 	T(ah = 0x4D;);	// 167                  mov     ah, 4Dh ;~ 01A2:00E0
cs=0x1a2;eip=0x0000e2; 	S(_INT(0x21));	// 168                  int     21h             ; DOS - 2+ - GET EXIT CODE OF SUBPROGRAM (WAIT) ;~ 01A2:00E2
cs=0x1a2;eip=0x0000e4; 	T(CMP(al, 0x24));	// 169                  cmp     al, 24h ; '$' ;~ 01A2:00E4
cs=0x1a2;eip=0x0000e6; 	J(JZ(loc_100eb));	// 170                  jz      short loc_100EB ;~ 01A2:00E6
cs=0x1a2;eip=0x0000e8; 	J(JMP(loc_1026e));	// 171                  jmp     loc_1026E ;~ 01A2:00E8
loc_100eb:
	// 4379 
cs=0x1a2;eip=0x0000eb; 	T(es = word_10580;);	// 175                  mov     es, word_10580 ;~ 01A2:00EB
cs=0x1a2;eip=0x0000ef; 	T(di = 0x0D;);	// 177                  mov     di, 0Dh ;~ 01A2:00EF
loc_100f2:
	// 4380 
cs=0x1a2;eip=0x0000f2; 	T(CMP(*(raddr(es,di)), 0));	// 180                  cmp     byte ptr es:[di], 0 ;~ 01A2:00F2
cs=0x1a2;eip=0x0000f6; 	J(JZ(loc_10102));	// 181                  jz      short loc_10102 ;~ 01A2:00F6
cs=0x1a2;eip=0x0000f8; 	T(MOV(al, *(raddr(es,di))));	// 182                  mov     al, es:[di] ;~ 01A2:00F8
cs=0x1a2;eip=0x0000fb; 	X(MOV(*(raddr(ds,di+0x561)), al));	// 183                  mov     [di+561h], al ;~ 01A2:00FB
cs=0x1a2;eip=0x0000ff; 	T(INC(di));	// 184                  inc     di ;~ 01A2:00FF
cs=0x1a2;eip=0x000100; 	J(JMP(loc_100f2));	// 185                  jmp     short loc_100F2 ;~ 01A2:0100
loc_10102:
	// 4381 
cs=0x1a2;eip=0x000102; 	T(dx = 0x56E;);	// 189                  mov     dx, 56Eh ;~ 01A2:0102
cs=0x1a2;eip=0x000105; 	J(CALL(sub_10273,0));	// 190                  call    sub_10273 ;~ 01A2:0105
cs=0x1a2;eip=0x000108; 	T(es = word_10580;);	// 191                  mov     es, word_10580 ;~ 01A2:0108
cs=0x1a2;eip=0x00010c; 	X(MOV(*(dw*)(raddr(es,0x1C)), ax));	// 192                  mov     es:1Ch, ax ;~ 01A2:010C
cs=0x1a2;eip=0x000110; 	T(dx = 0x565;);	// 193                  mov     dx, 565h ;~ 01A2:0110
cs=0x1a2;eip=0x000113; 	J(CALL(sub_10273,0));	// 194                  call    sub_10273 ;~ 01A2:0113
cs=0x1a2;eip=0x000116; 	T(es = word_10580;);	// 195                  mov     es, word_10580 ;~ 01A2:0116
cs=0x1a2;eip=0x00011a; 	X(MOV(*(dw*)(raddr(es,0x1E)), ax));	// 196                  mov     es:1Eh, ax ;~ 01A2:011A
cs=0x1a2;eip=0x00011e; 	T(es = word_10580;);	// 197                  mov     es, word_10580 ;~ 01A2:011E
cs=0x1a2;eip=0x000122; 	T(di = 0;);	// 198                  mov     di, 0 ;~ 01A2:0122
loc_10125:
	// 4382 
cs=0x1a2;eip=0x000125; 	T(CMP(*(raddr(es,di)), 0));	// 201                  cmp     byte ptr es:[di], 0 ;~ 01A2:0125
cs=0x1a2;eip=0x000129; 	J(JZ(loc_10135));	// 202                  jz      short loc_10135 ;~ 01A2:0129
cs=0x1a2;eip=0x00012b; 	T(MOV(al, *(raddr(es,di))));	// 203                  mov     al, es:[di] ;~ 01A2:012B
cs=0x1a2;eip=0x00012e; 	X(MOV(*(raddr(ds,di+0x56E)), al));	// 204                  mov     [di+56Eh], al ;~ 01A2:012E
cs=0x1a2;eip=0x000132; 	T(INC(di));	// 205                  inc     di ;~ 01A2:0132
cs=0x1a2;eip=0x000133; 	J(JMP(loc_10125));	// 206                  jmp     short loc_10125 ;~ 01A2:0133
loc_10135:
	// 4383 
cs=0x1a2;eip=0x000135; 	T(dx = 0x56E;);	// 210                  mov     dx, 56Eh ;~ 01A2:0135
cs=0x1a2;eip=0x000138; 	J(CALL(sub_10273,0));	// 211                  call    sub_10273 ;~ 01A2:0138
cs=0x1a2;eip=0x00013b; 	T(es = word_10580;);	// 212                  mov     es, word_10580 ;~ 01A2:013B
cs=0x1a2;eip=0x00013f; 	X(MOV(*(dw*)(raddr(es,0x1A)), ax));	// 213                  mov     es:1Ah, ax ;~ 01A2:013F
cs=0x1a2;eip=0x000143; 	T(ax = 2;);	// 214                  mov     ax, 2 ;~ 01A2:0143
cs=0x1a2;eip=0x000146; 	X(PUSH(ax));	// 215                  push    ax ;~ 01A2:0146
cs=0x1a2;eip=0x000147; 	J(CALL(__dispatch_call,dword_1057c));	// 216                  call    dword_1057C ;~ 01A2:0147
cs=0x1a2;eip=0x00014b; 	T(ADD(sp, 2));	// 217                  add     sp, 2 ;~ 01A2:014B
cs=0x1a2;eip=0x00014e; 	X(MOV(*(dw*)(raddr(es,0x20)), ax));	// 218                  mov     es:20h, ax ;~ 01A2:014E
loc_10152:
	// 4384 
cs=0x1a2;eip=0x000152; 	T(ax = cs;);	// 221                  mov     ax, cs ;~ 01A2:0152
cs=0x1a2;eip=0x000154; 	T(es = ax;);	// 222                  mov     es, ax ;~ 01A2:0154
cs=0x1a2;eip=0x000156; 	T(dx = 0x55E;);	// 224                  mov     dx, 55Eh ;~ 01A2:0156
cs=0x1a2;eip=0x000159; 	T(ax = 0x63E;);	// 225                  mov     ax, 63Eh ;~ 01A2:0159
cs=0x1a2;eip=0x00015c; 	X(word_10586 = ax;);	// 226                  mov     word_10586, ax ;~ 01A2:015C
cs=0x1a2;eip=0x00015f; 	T(bx = 0x584;);	// 227                  mov     bx, 584h ;~ 01A2:015F
cs=0x1a2;eip=0x000162; 	X(word_10582 = sp;);	// 228                  mov     word_10582, sp ;~ 01A2:0162
cs=0x1a2;eip=0x000166; 	T(ax = 0x4B00;);	// 229                  mov     ax, 4B00h ;~ 01A2:0166
cs=0x1a2;eip=0x000169; 	S(_INT(0x21));	// 230                  int     21h             ; DOS - 2+ - LOAD OR EXECUTE (EXEC) ;~ 01A2:0169
cs=0x1a2;eip=0x00016b; 	T(cx = cs;);	// 234                  mov     cx, cs ;~ 01A2:016B
cs=0x1a2;eip=0x00016d; 	S(ss = cx;);	// 235                  mov     ss, cx ;~ 01A2:016D
cs=0x1a2;eip=0x00016f; 	T(sp = word_10582;);	// 236                  mov     sp, cs:word_10582 ;~ 01A2:016F
cs=0x1a2;eip=0x000174; 	T(ds = cx;);	// 237                  mov     ds, cx ;~ 01A2:0174
cs=0x1a2;eip=0x000176; 	T(es = cx;);	// 238                  mov     es, cx ;~ 01A2:0176
cs=0x1a2;eip=0x000178; 	T(ah = 0x4D;);	// 239                  mov     ah, 4Dh ;~ 01A2:0178
cs=0x1a2;eip=0x00017a; 	S(_INT(0x21));	// 240                  int     21h             ; DOS - 2+ - GET EXIT CODE OF SUBPROGRAM (WAIT) ;~ 01A2:017A
cs=0x1a2;eip=0x00017c; 	T(CMP(al, 0));	// 241                  cmp     al, 0 ;~ 01A2:017C
cs=0x1a2;eip=0x00017e; 	J(JNZ(loc_10183));	// 242                  jnz     short loc_10183 ;~ 01A2:017E
cs=0x1a2;eip=0x000180; 	J(JMP(loc_1026e));	// 243                  jmp     loc_1026E ;~ 01A2:0180
loc_10183:
	// 4385 
cs=0x1a2;eip=0x000183; 	T(ax = cs;);	// 247                  mov     ax, cs ;~ 01A2:0183
cs=0x1a2;eip=0x000185; 	T(es = ax;);	// 248                  mov     es, ax ;~ 01A2:0185
cs=0x1a2;eip=0x000187; 	T(dx = 0x535;);	// 249                  mov     dx, 535h ;~ 01A2:0187
cs=0x1a2;eip=0x00018a; 	T(ax = 0x592;);	// 250                  mov     ax, 592h ;~ 01A2:018A
cs=0x1a2;eip=0x00018d; 	X(word_10586 = ax;);	// 251                  mov     word_10586, ax ;~ 01A2:018D
cs=0x1a2;eip=0x000190; 	T(bx = 0x584;);	// 252                  mov     bx, 584h ;~ 01A2:0190
cs=0x1a2;eip=0x000193; 	X(word_10582 = sp;);	// 253                  mov     word_10582, sp ;~ 01A2:0193
cs=0x1a2;eip=0x000197; 	T(ax = 0x4B00;);	// 254                  mov     ax, 4B00h ;~ 01A2:0197
cs=0x1a2;eip=0x00019a; 	S(_INT(0x21));	// 255                  int     21h             ; DOS - 2+ - LOAD OR EXECUTE (EXEC) ;~ 01A2:019A
cs=0x1a2;eip=0x00019c; 	T(cx = cs;);	// 259                  mov     cx, cs ;~ 01A2:019C
cs=0x1a2;eip=0x00019e; 	S(ss = cx;);	// 260                  mov     ss, cx ;~ 01A2:019E
cs=0x1a2;eip=0x0001a0; 	T(sp = word_10582;);	// 261                  mov     sp, cs:word_10582 ;~ 01A2:01A0
cs=0x1a2;eip=0x0001a5; 	T(ds = cx;);	// 262                  mov     ds, cx ;~ 01A2:01A5
cs=0x1a2;eip=0x0001a7; 	T(es = cx;);	// 263                  mov     es, cx ;~ 01A2:01A7
cs=0x1a2;eip=0x0001a9; 	T(ah = 0x4D;);	// 264                  mov     ah, 4Dh ;~ 01A2:01A9
cs=0x1a2;eip=0x0001ab; 	S(_INT(0x21));	// 265                  int     21h             ; DOS - 2+ - GET EXIT CODE OF SUBPROGRAM (WAIT) ;~ 01A2:01AB
cs=0x1a2;eip=0x0001ad; 	T(CMP(al, 0x0C));	// 266                  cmp     al, 0Ch ;~ 01A2:01AD
cs=0x1a2;eip=0x0001af; 	J(JZ(loc_101b4));	// 267                  jz      short loc_101B4 ;~ 01A2:01AF
cs=0x1a2;eip=0x0001b1; 	J(JMP(loc_1026e));	// 268                  jmp     loc_1026E ;~ 01A2:01B1
loc_101b4:
	// 4386 
cs=0x1a2;eip=0x0001b4; 	T(ax = cs;);	// 272                  mov     ax, cs ;~ 01A2:01B4
cs=0x1a2;eip=0x0001b6; 	T(es = ax;);	// 273                  mov     es, ax ;~ 01A2:01B6
cs=0x1a2;eip=0x0001b8; 	T(dx = 0x55E;);	// 274                  mov     dx, 55Eh ;~ 01A2:01B8
cs=0x1a2;eip=0x0001bb; 	T(ax = 0x643;);	// 275                  mov     ax, 643h ;~ 01A2:01BB
cs=0x1a2;eip=0x0001be; 	X(word_10586 = ax;);	// 276                  mov     word_10586, ax ;~ 01A2:01BE
cs=0x1a2;eip=0x0001c1; 	T(bx = 0x584;);	// 277                  mov     bx, 584h ;~ 01A2:01C1
cs=0x1a2;eip=0x0001c4; 	X(word_10582 = sp;);	// 278                  mov     word_10582, sp ;~ 01A2:01C4
cs=0x1a2;eip=0x0001c8; 	T(ax = 0x4B00;);	// 279                  mov     ax, 4B00h ;~ 01A2:01C8
cs=0x1a2;eip=0x0001cb; 	S(_INT(0x21));	// 280                  int     21h             ; DOS - 2+ - LOAD OR EXECUTE (EXEC) ;~ 01A2:01CB
cs=0x1a2;eip=0x0001cd; 	T(cx = cs;);	// 284                  mov     cx, cs ;~ 01A2:01CD
cs=0x1a2;eip=0x0001cf; 	S(ss = cx;);	// 285                  mov     ss, cx ;~ 01A2:01CF
cs=0x1a2;eip=0x0001d1; 	T(sp = word_10582;);	// 286                  mov     sp, cs:word_10582 ;~ 01A2:01D1
cs=0x1a2;eip=0x0001d6; 	T(ds = cx;);	// 287                  mov     ds, cx ;~ 01A2:01D6
cs=0x1a2;eip=0x0001d8; 	T(es = cx;);	// 288                  mov     es, cx ;~ 01A2:01D8
cs=0x1a2;eip=0x0001da; 	T(ah = 0x4D;);	// 289                  mov     ah, 4Dh ;~ 01A2:01DA
cs=0x1a2;eip=0x0001dc; 	S(_INT(0x21));	// 290                  int     21h             ; DOS - 2+ - GET EXIT CODE OF SUBPROGRAM (WAIT) ;~ 01A2:01DC
cs=0x1a2;eip=0x0001de; 	T(CMP(al, 0));	// 291                  cmp     al, 0 ;~ 01A2:01DE
cs=0x1a2;eip=0x0001e0; 	J(JNZ(loc_101e5));	// 292                  jnz     short loc_101E5 ;~ 01A2:01E0
cs=0x1a2;eip=0x0001e2; 	J(JMP(loc_1026e));	// 293                  jmp     loc_1026E ;~ 01A2:01E2
loc_101e5:
	// 4387 
cs=0x1a2;eip=0x0001e5; 	T(dx = 0x54C;);	// 297                  mov     dx, 54Ch ;~ 01A2:01E5
cs=0x1a2;eip=0x0001e8; 	T(ax = 0x592;);	// 298                  mov     ax, 592h ;~ 01A2:01E8
cs=0x1a2;eip=0x0001eb; 	X(word_10586 = ax;);	// 299                  mov     word_10586, ax ;~ 01A2:01EB
cs=0x1a2;eip=0x0001ee; 	T(bx = 0x584;);	// 300                  mov     bx, 584h ;~ 01A2:01EE
cs=0x1a2;eip=0x0001f1; 	X(word_10582 = sp;);	// 301                  mov     word_10582, sp ;~ 01A2:01F1
cs=0x1a2;eip=0x0001f5; 	T(ax = 0x4B00;);	// 302                  mov     ax, 4B00h ;~ 01A2:01F5
cs=0x1a2;eip=0x0001f8; 	S(_INT(0x21));	// 303                  int     21h             ; DOS - 2+ - LOAD OR EXECUTE (EXEC) ;~ 01A2:01F8
cs=0x1a2;eip=0x0001fa; 	T(cx = cs;);	// 307                  mov     cx, cs ;~ 01A2:01FA
cs=0x1a2;eip=0x0001fc; 	S(ss = cx;);	// 308                  mov     ss, cx ;~ 01A2:01FC
cs=0x1a2;eip=0x0001fe; 	T(sp = word_10582;);	// 309                  mov     sp, cs:word_10582 ;~ 01A2:01FE
cs=0x1a2;eip=0x000203; 	T(ds = cx;);	// 310                  mov     ds, cx ;~ 01A2:0203
cs=0x1a2;eip=0x000205; 	T(es = cx;);	// 311                  mov     es, cx ;~ 01A2:0205
cs=0x1a2;eip=0x000207; 	T(ah = 0x4D;);	// 312                  mov     ah, 4Dh ;~ 01A2:0207
cs=0x1a2;eip=0x000209; 	S(_INT(0x21));	// 313                  int     21h             ; DOS - 2+ - GET EXIT CODE OF SUBPROGRAM (WAIT) ;~ 01A2:0209
cs=0x1a2;eip=0x00020b; 	T(OR(ax, ax));	// 314                  or      ax, ax ;~ 01A2:020B
cs=0x1a2;eip=0x00020d; 	J(JNZ(loc_10211));	// 315                  jnz     short loc_10211 ;~ 01A2:020D
cs=0x1a2;eip=0x00020f; 	J(JMP(loc_1026e));	// 316                  jmp     short loc_1026E ;~ 01A2:020F
loc_10211:
	// 4388 
cs=0x1a2;eip=0x000211; 	T(ax = cs;);	// 320                  mov     ax, cs ;~ 01A2:0211
cs=0x1a2;eip=0x000213; 	T(es = ax;);	// 321                  mov     es, ax ;~ 01A2:0213
cs=0x1a2;eip=0x000215; 	T(dx = 0x55E;);	// 322                  mov     dx, 55Eh ;~ 01A2:0215
cs=0x1a2;eip=0x000218; 	T(ax = 0x648;);	// 323                  mov     ax, 648h ;~ 01A2:0218
cs=0x1a2;eip=0x00021b; 	X(word_10586 = ax;);	// 324                  mov     word_10586, ax ;~ 01A2:021B
cs=0x1a2;eip=0x00021e; 	T(bx = 0x584;);	// 325                  mov     bx, 584h ;~ 01A2:021E
cs=0x1a2;eip=0x000221; 	X(word_10582 = sp;);	// 326                  mov     word_10582, sp ;~ 01A2:0221
cs=0x1a2;eip=0x000225; 	T(ax = 0x4B00;);	// 327                  mov     ax, 4B00h ;~ 01A2:0225
cs=0x1a2;eip=0x000228; 	S(_INT(0x21));	// 328                  int     21h             ; DOS - 2+ - LOAD OR EXECUTE (EXEC) ;~ 01A2:0228
cs=0x1a2;eip=0x00022a; 	T(cx = cs;);	// 332                  mov     cx, cs ;~ 01A2:022A
cs=0x1a2;eip=0x00022c; 	S(ss = cx;);	// 333                  mov     ss, cx ;~ 01A2:022C
cs=0x1a2;eip=0x00022e; 	T(sp = word_10582;);	// 334                  mov     sp, cs:word_10582 ;~ 01A2:022E
cs=0x1a2;eip=0x000233; 	T(ds = cx;);	// 335                  mov     ds, cx ;~ 01A2:0233
cs=0x1a2;eip=0x000235; 	T(es = cx;);	// 336                  mov     es, cx ;~ 01A2:0235
cs=0x1a2;eip=0x000237; 	T(ah = 0x4D;);	// 337                  mov     ah, 4Dh ;~ 01A2:0237
cs=0x1a2;eip=0x000239; 	S(_INT(0x21));	// 338                  int     21h             ; DOS - 2+ - GET EXIT CODE OF SUBPROGRAM (WAIT) ;~ 01A2:0239
cs=0x1a2;eip=0x00023b; 	T(CMP(al, 0));	// 339                  cmp     al, 0 ;~ 01A2:023B
cs=0x1a2;eip=0x00023d; 	J(JNZ(loc_10241));	// 340                  jnz     short loc_10241 ;~ 01A2:023D
cs=0x1a2;eip=0x00023f; 	J(JMP(loc_1026e));	// 341                  jmp     short loc_1026E ;~ 01A2:023F
loc_10241:
	// 4389 
cs=0x1a2;eip=0x000241; 	T(dx = 0x556;);	// 345                  mov     dx, 556h ;~ 01A2:0241
cs=0x1a2;eip=0x000244; 	T(ax = 0x592;);	// 346                  mov     ax, 592h ;~ 01A2:0244
cs=0x1a2;eip=0x000247; 	X(word_10586 = ax;);	// 347                  mov     word_10586, ax ;~ 01A2:0247
cs=0x1a2;eip=0x00024a; 	T(bx = 0x584;);	// 348                  mov     bx, 584h ;~ 01A2:024A
cs=0x1a2;eip=0x00024d; 	X(word_10582 = sp;);	// 349                  mov     word_10582, sp ;~ 01A2:024D
cs=0x1a2;eip=0x000251; 	T(ax = 0x4B00;);	// 350                  mov     ax, 4B00h ;~ 01A2:0251
cs=0x1a2;eip=0x000254; 	S(_INT(0x21));	// 351                  int     21h             ; DOS - 2+ - LOAD OR EXECUTE (EXEC) ;~ 01A2:0254
cs=0x1a2;eip=0x000256; 	T(cx = cs;);	// 355                  mov     cx, cs ;~ 01A2:0256
cs=0x1a2;eip=0x000258; 	S(ss = cx;);	// 356                  mov     ss, cx ;~ 01A2:0258
cs=0x1a2;eip=0x00025a; 	T(sp = word_10582;);	// 357                  mov     sp, cs:word_10582 ;~ 01A2:025A
cs=0x1a2;eip=0x00025f; 	T(ds = cx;);	// 358                  mov     ds, cx ;~ 01A2:025F
cs=0x1a2;eip=0x000261; 	T(es = cx;);	// 359                  mov     es, cx ;~ 01A2:0261
cs=0x1a2;eip=0x000263; 	T(ah = 0x4D;);	// 360                  mov     ah, 4Dh ;~ 01A2:0263
cs=0x1a2;eip=0x000265; 	S(_INT(0x21));	// 361                  int     21h             ; DOS - 2+ - GET EXIT CODE OF SUBPROGRAM (WAIT) ;~ 01A2:0265
cs=0x1a2;eip=0x000267; 	T(CMP(al, 0x23));	// 362                  cmp     al, 23h ; '#' ;~ 01A2:0267
cs=0x1a2;eip=0x000269; 	J(JNZ(loc_1026e));	// 363                  jnz     short loc_1026E ;~ 01A2:0269
cs=0x1a2;eip=0x00026b; 	J(JMP(loc_10152));	// 364                  jmp     loc_10152 ;~ 01A2:026B
loc_1026e:
	// 4390 
cs=0x1a2;eip=0x00026e; 	T(ax = 0x4C00;);	// 370                  mov     ax, 4C00h ;~ 01A2:026E
cs=0x1a2;eip=0x000271; 	S(_INT(0x21));	// 371                  int     21h             ; DOS - 2+ - QUIT WITH EXIT CODE (EXIT) ;~ 01A2:0271
sub_10273:
	// 377 
cs=0x1a2;eip=0x000273; 	X(PUSH(ds));	// 382                  push    ds ;~ 01A2:0273
cs=0x1a2;eip=0x000274; 	X(POP(es));	// 383                  pop     es ;~ 01A2:0274
cs=0x1a2;eip=0x000275; 	X(PUSH(dx));	// 384                  push    dx ;~ 01A2:0275
cs=0x1a2;eip=0x000276; 	T(ah = 0x48;);	// 385                  mov     ah, 48h ; 'H' ;~ 01A2:0276
cs=0x1a2;eip=0x000278; 	T(bx = 0x0FFFF;);	// 386                  mov     bx, 0FFFFh ;~ 01A2:0278
cs=0x1a2;eip=0x00027b; 	S(_INT(0x21));	// 387                  int     21h             ; DOS - 2+ - ALLOCATE MEMORY ;~ 01A2:027B
cs=0x1a2;eip=0x00027d; 	J(JC(loc_10288));	// 390                  jb      short loc_10288 ;~ 01A2:027D
cs=0x1a2;eip=0x00027f; 	T(dx = 0x461;);	// 391                  mov     dx, 461h ;~ 01A2:027F
cs=0x1a2;eip=0x000282; 	T(ah = 9;);	// 392                  mov     ah, 9 ;~ 01A2:0282
cs=0x1a2;eip=0x000284; 	S(_INT(0x21));	// 393                  int     21h             ; DOS - PRINT STRING ;~ 01A2:0284
cs=0x1a2;eip=0x000286; 	J(JMP(loc_1026e));	// 395                  jmp     short loc_1026E ;~ 01A2:0286
loc_10288:
	// 4391 
cs=0x1a2;eip=0x000288; 	T(ah = 0x48;);	// 399                  mov     ah, 48h ; 'H' ;~ 01A2:0288
cs=0x1a2;eip=0x00028a; 	T(SUB(bx, 0x400));	// 400                  sub     bx, 400h ;~ 01A2:028A
cs=0x1a2;eip=0x00028e; 	X(*(dw*)((aendexe)+5) = bx;);	// 401                  mov     word ptr aEndExe+5, bx ; "XE" ;~ 01A2:028E
cs=0x1a2;eip=0x000292; 	S(_INT(0x21));	// 402                  int     21h             ; DOS - 2+ - ALLOCATE MEMORY ;~ 01A2:0292
cs=0x1a2;eip=0x000294; 	J(JNC(loc_1029f));	// 404                  jnb     short loc_1029F ;~ 01A2:0294
cs=0x1a2;eip=0x000296; 	T(dx = 0x46C;);	// 405                  mov     dx, 46Ch ;~ 01A2:0296
cs=0x1a2;eip=0x000299; 	T(ah = 9;);	// 406                  mov     ah, 9 ;~ 01A2:0299
cs=0x1a2;eip=0x00029b; 	S(_INT(0x21));	// 407                  int     21h             ; DOS - PRINT STRING ;~ 01A2:029B
cs=0x1a2;eip=0x00029d; 	J(JMP(loc_1026e));	// 409                  jmp     short loc_1026E ;~ 01A2:029D
loc_1029f:
	// 4392 
cs=0x1a2;eip=0x00029f; 	X(*(dw*)((aendexe)+3) = ax;);	// 413                  mov     word ptr aEndExe+3, ax ; ".EXE" ;~ 01A2:029F
cs=0x1a2;eip=0x0002a2; 	X(*(dw*)((aendexe)+7) = ax;);	// 414                  mov     word ptr aEndExe+7, ax ; "" ;~ 01A2:02A2
cs=0x1a2;eip=0x0002a5; 	X(*(dw*)((adsexe)+1) = ax;);	// 415                  mov     word ptr aDsExe+1, ax ; "s.EXE" ;~ 01A2:02A5
cs=0x1a2;eip=0x0002a8; 	T(bx = 0x45D;);	// 416                  mov     bx, 45Dh ;~ 01A2:02A8
cs=0x1a2;eip=0x0002ab; 	T(ax = 0x4B03;);	// 417                  mov     ax, 4B03h ;~ 01A2:02AB
cs=0x1a2;eip=0x0002ae; 	X(POP(dx));	// 418                  pop     dx ;~ 01A2:02AE
cs=0x1a2;eip=0x0002af; 	X(word_10582 = sp;);	// 419                  mov     cs:word_10582, sp ;~ 01A2:02AF
cs=0x1a2;eip=0x0002b4; 	S(_INT(0x21));	// 420                  int     21h             ; DOS - 2+ - LOAD OR EXECUTE (EXEC) ;~ 01A2:02B4
cs=0x1a2;eip=0x0002b6; 	J(JNC(loc_102dd));	// 424                  jnb     short loc_102DD ;~ 01A2:02B6
cs=0x1a2;eip=0x0002b8; 	T(CMP(ax, 2));	// 425                  cmp     ax, 2 ;~ 01A2:02B8
cs=0x1a2;eip=0x0002bb; 	J(JNZ(loc_102c6));	// 426                  jnz     short loc_102C6 ;~ 01A2:02BB
cs=0x1a2;eip=0x0002bd; 	T(dx = 0x485;);	// 427                  mov     dx, 485h ;~ 01A2:02BD
cs=0x1a2;eip=0x0002c0; 	T(ah = 9;);	// 428                  mov     ah, 9 ;~ 01A2:02C0
cs=0x1a2;eip=0x0002c2; 	S(_INT(0x21));	// 429                  int     21h             ; DOS - PRINT STRING ;~ 01A2:02C2
cs=0x1a2;eip=0x0002c4; 	J(JMP(loc_1026e));	// 431                  jmp     short loc_1026E ;~ 01A2:02C4
loc_102c6:
	// 4393 
cs=0x1a2;eip=0x0002c6; 	T(CMP(ax, 8));	// 435                  cmp     ax, 8 ;~ 01A2:02C6
cs=0x1a2;eip=0x0002c9; 	J(JNZ(loc_102d4));	// 436                  jnz     short loc_102D4 ;~ 01A2:02C9
cs=0x1a2;eip=0x0002cb; 	T(dx = 0x498;);	// 437                  mov     dx, 498h ;~ 01A2:02CB
cs=0x1a2;eip=0x0002ce; 	T(ah = 9;);	// 438                  mov     ah, 9 ;~ 01A2:02CE
cs=0x1a2;eip=0x0002d0; 	S(_INT(0x21));	// 439                  int     21h             ; DOS - PRINT STRING ;~ 01A2:02D0
cs=0x1a2;eip=0x0002d2; 	J(JMP(loc_1026e));	// 441                  jmp     short loc_1026E ;~ 01A2:02D2
loc_102d4:
	// 4394 
cs=0x1a2;eip=0x0002d4; 	T(dx = 0x4B4;);	// 445                  mov     dx, 4B4h ;~ 01A2:02D4
cs=0x1a2;eip=0x0002d7; 	T(ah = 9;);	// 446                  mov     ah, 9 ;~ 01A2:02D7
cs=0x1a2;eip=0x0002d9; 	S(_INT(0x21));	// 447                  int     21h             ; DOS - PRINT STRING ;~ 01A2:02D9
cs=0x1a2;eip=0x0002db; 	J(JMP(loc_1026e));	// 449                  jmp     short loc_1026E ;~ 01A2:02DB
loc_102dd:
	// 4395 
cs=0x1a2;eip=0x0002dd; 	T(sp = word_10582;);	// 453                  mov     sp, cs:word_10582 ;~ 01A2:02DD
cs=0x1a2;eip=0x0002e2; 	T(ax = cs;);	// 454                  mov     ax, cs ;~ 01A2:02E2
cs=0x1a2;eip=0x0002e4; 	S(ss = ax;);	// 455                  mov     ss, ax ;~ 01A2:02E4
cs=0x1a2;eip=0x0002e6; 	T(ds = ax;);	// 456                  mov     ds, ax ;~ 01A2:02E6
cs=0x1a2;eip=0x0002e8; 	T(es = *(dw*)((aendexe)+3););	// 457                  mov     es, word ptr aEndExe+3 ; ".EXE" ;~ 01A2:02E8
cs=0x1a2;eip=0x0002ec; 	T(di = 0x18;);	// 459                  mov     di, 18h ;~ 01A2:02EC
cs=0x1a2;eip=0x0002ef; 	T(MOV(ax, *(dw*)(raddr(es,di))));	// 460                  mov     ax, es:[di] ;~ 01A2:02EF
cs=0x1a2;eip=0x0002f2; 	X(*(dw*)(((db*)&dword_1057c)+2) = ax;);	// 461                  mov     word ptr dword_1057C+2, ax ;~ 01A2:02F2
cs=0x1a2;eip=0x0002f5; 	T(di = 0x24;);	// 462                  mov     di, 24h ; '$' ;~ 01A2:02F5
cs=0x1a2;eip=0x0002f8; 	T(MOV(ax, *(dw*)(raddr(es,di))));	// 463                  mov     ax, es:[di] ;~ 01A2:02F8
cs=0x1a2;eip=0x0002fb; 	X(*(dw*)(&dword_1057c) = ax;);	// 464                  mov     word ptr dword_1057C, ax ;~ 01A2:02FB
cs=0x1a2;eip=0x0002fe; 	T(di = 0x1E;);	// 465                  mov     di, 1Eh ;~ 01A2:02FE
cs=0x1a2;eip=0x000301; 	T(MOV(bx, *(dw*)(raddr(es,di))));	// 466                  mov     bx, es:[di] ;~ 01A2:0301
cs=0x1a2;eip=0x000304; 	T(SHR(bx, 1));	// 467                  shr     bx, 1 ;~ 01A2:0304
cs=0x1a2;eip=0x000306; 	T(SHR(bx, 1));	// 468                  shr     bx, 1 ;~ 01A2:0306
cs=0x1a2;eip=0x000308; 	T(SHR(bx, 1));	// 469                  shr     bx, 1 ;~ 01A2:0308
cs=0x1a2;eip=0x00030a; 	T(SHR(bx, 1));	// 470                  shr     bx, 1 ;~ 01A2:030A
cs=0x1a2;eip=0x00030c; 	T(di = 0x20;);	// 471                  mov     di, 20h ; ' ' ;~ 01A2:030C
cs=0x1a2;eip=0x00030f; 	T(MOV(cx, *(dw*)(raddr(es,di))));	// 472                  mov     cx, es:[di] ;~ 01A2:030F
cs=0x1a2;eip=0x000312; 	T(SHR(cx, 1));	// 473                  shr     cx, 1 ;~ 01A2:0312
cs=0x1a2;eip=0x000314; 	T(SHR(cx, 1));	// 474                  shr     cx, 1 ;~ 01A2:0314
cs=0x1a2;eip=0x000316; 	T(SHR(cx, 1));	// 475                  shr     cx, 1 ;~ 01A2:0316
cs=0x1a2;eip=0x000318; 	T(SHR(cx, 1));	// 476                  shr     cx, 1 ;~ 01A2:0318
cs=0x1a2;eip=0x00031a; 	T(ADD(bx, cx));	// 477                  add     bx, cx ;~ 01A2:031A
cs=0x1a2;eip=0x00031c; 	T(CMP(bx, *(dw*)((aendexe)+5)));	// 478                  cmp     bx, word ptr aEndExe+5 ; "XE" ;~ 01A2:031C
cs=0x1a2;eip=0x000320; 	J(JBE(loc_1032c));	// 479                  jbe     short loc_1032C ;~ 01A2:0320
cs=0x1a2;eip=0x000322; 	T(dx = 0x4C8;);	// 480                  mov     dx, 4C8h ;~ 01A2:0322
cs=0x1a2;eip=0x000325; 	T(ah = 9;);	// 481                  mov     ah, 9 ;~ 01A2:0325
cs=0x1a2;eip=0x000327; 	S(_INT(0x21));	// 482                  int     21h             ; DOS - PRINT STRING ;~ 01A2:0327
cs=0x1a2;eip=0x000329; 	J(JMP(loc_1026e));	// 484                  jmp     loc_1026E ;~ 01A2:0329
loc_1032c:
	// 4396 
cs=0x1a2;eip=0x00032c; 	T(ADD(bx, 8));	// 488                  add     bx, 8 ;~ 01A2:032C
cs=0x1a2;eip=0x00032f; 	T(ah = 0x4A;);	// 489                  mov     ah, 4Ah ; 'J' ;~ 01A2:032F
cs=0x1a2;eip=0x000331; 	T(cx = *(dw*)((aendexe)+3););	// 490                  mov     cx, word ptr aEndExe+3 ; ".EXE" ;~ 01A2:0331
cs=0x1a2;eip=0x000335; 	T(es = cx;);	// 491                  mov     es, cx ;~ 01A2:0335
cs=0x1a2;eip=0x000337; 	S(_INT(0x21));	// 492                  int     21h             ; DOS - 2+ - ADJUST MEMORY BLOCK SIZE (SETBLOCK) ;~ 01A2:0337
cs=0x1a2;eip=0x000339; 	J(JNC(loc_10345));	// 495                  jnb     short loc_10345 ;~ 01A2:0339
cs=0x1a2;eip=0x00033b; 	T(dx = 0x4DA;);	// 496                  mov     dx, 4DAh ;~ 01A2:033B
cs=0x1a2;eip=0x00033e; 	T(ah = 9;);	// 497                  mov     ah, 9 ;~ 01A2:033E
cs=0x1a2;eip=0x000340; 	S(_INT(0x21));	// 498                  int     21h             ; DOS - PRINT STRING ;~ 01A2:0340
cs=0x1a2;eip=0x000342; 	J(JMP(loc_1026e));	// 500                  jmp     loc_1026E ;~ 01A2:0342
loc_10345:
	// 4397 
cs=0x1a2;eip=0x000345; 	T(ax = cs;);	// 504                  mov     ax, cs ;~ 01A2:0345
cs=0x1a2;eip=0x000347; 	T(ds = ax;);	// 505                  mov     ds, ax ;~ 01A2:0347
cs=0x1a2;eip=0x000349; 	T(es = ax;);	// 506                  mov     es, ax ;~ 01A2:0349
cs=0x1a2;eip=0x00034b; 	T(ax = *(dw*)((aendexe)+3););	// 508                  mov     ax, word ptr aEndExe+3 ; ".EXE" ;~ 01A2:034B
cs=0x1a2;eip=0x00034e; 	J(RETN(0));	// 509                  retn ;~ 01A2:034E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1001b: 	goto loc_1001b;
        case m2c::kloc_10027: 	goto loc_10027;
        case m2c::kloc_10059: 	goto loc_10059;
        case m2c::kloc_10080: 	goto loc_10080;
        case m2c::kloc_100b9: 	goto loc_100b9;
        case m2c::kloc_100eb: 	goto loc_100eb;
        case m2c::kloc_100f2: 	goto loc_100f2;
        case m2c::kloc_10102: 	goto loc_10102;
        case m2c::kloc_10125: 	goto loc_10125;
        case m2c::kloc_10135: 	goto loc_10135;
        case m2c::kloc_10152: 	goto loc_10152;
        case m2c::kloc_10183: 	goto loc_10183;
        case m2c::kloc_101b4: 	goto loc_101b4;
        case m2c::kloc_101e5: 	goto loc_101e5;
        case m2c::kloc_10211: 	goto loc_10211;
        case m2c::kloc_10241: 	goto loc_10241;
        case m2c::kloc_1026e: 	goto loc_1026e;
        case m2c::kloc_10288: 	goto loc_10288;
        case m2c::kloc_1029f: 	goto loc_1029f;
        case m2c::kloc_102c6: 	goto loc_102c6;
        case m2c::kloc_102d4: 	goto loc_102d4;
        case m2c::kloc_102dd: 	goto loc_102dd;
        case m2c::kloc_1032c: 	goto loc_1032c;
        case m2c::kloc_10345: 	goto loc_10345;
        case m2c::kret_1a2_1d: 	goto ret_1a2_1d;
        case m2c::kret_1a2_1e: 	goto ret_1a2_1e;
        case m2c::kret_1a2_1f: 	goto ret_1a2_1f;
        case m2c::kret_1a2_20: 	goto ret_1a2_20;
        case m2c::ksub_10273: 	goto sub_10273;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

