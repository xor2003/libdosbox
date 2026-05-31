/* THIS IS GENERATED FILE */

        
#include "f.exe.h"

                

 bool _group84(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group84:
    _begin:
sub_38976:
	// 123238 
cs=0x2a39;eip=0x000006; 	X(PUSH(ds));	// 123239                  push    ds ;~ 2A39:0006
cs=0x2a39;eip=0x000007; 	T(ax = 0x40;);	// 123240                  mov     ax, 40h ; '@' ;~ 2A39:0007
cs=0x2a39;eip=0x00000a; 	T(ds = ax;);	// 123241                  mov     ds, ax ;~ 2A39:000A
cs=0x2a39;eip=0x00000c; 	X(AND(*(raddr(ds,0x17)), 0x0DF));	// 123243                  and     byte ptr ds:17h, 0DFh ;~ 2A39:000C
cs=0x2a39;eip=0x000011; 	T(XOR(ax, ax));	// 123244                  xor     ax, ax ;~ 2A39:0011
cs=0x2a39;eip=0x000013; 	X(byte_4e1ca = al;);	// 123245                  mov     ss:byte_4E1CA, al ;~ 2A39:0013
cs=0x2a39;eip=0x000017; 	X(word_4e1cb = ax;);	// 123246                  mov     ss:word_4E1CB, ax ;~ 2A39:0017
cs=0x2a39;eip=0x00001b; 	X(byte_4e1cd = al;);	// 123247                  mov     ss:byte_4E1CD, al ;~ 2A39:001B
cs=0x2a39;eip=0x00001f; 	X(byte_4e1ce = al;);	// 123248                  mov     ss:byte_4E1CE, al ;~ 2A39:001F
cs=0x2a39;eip=0x000023; 	X(byte_4e1cf = al;);	// 123249                  mov     ss:byte_4E1CF, al ;~ 2A39:0023
cs=0x2a39;eip=0x000027; 	X(byte_4e1c8 = 0x80;);	// 123250                  mov     ss:byte_4E1C8, 80h ;~ 2A39:0027
cs=0x2a39;eip=0x00002d; 	X(byte_4e1c9 = 0x80;);	// 123251                  mov     ss:byte_4E1C9, 80h ;~ 2A39:002D
cs=0x2a39;eip=0x000033; 	T(XOR(ax, ax));	// 123252                  xor     ax, ax ;~ 2A39:0033
cs=0x2a39;eip=0x000035; 	T(ds = ax;);	// 123253                  mov     ds, ax ;~ 2A39:0035
cs=0x2a39;eip=0x000037; 	T(bx = 0x24;);	// 123255                  mov     bx, 24h ; '$' ;~ 2A39:0037
cs=0x2a39;eip=0x00003a; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 123256                  mov     ax, [bx] ;~ 2A39:003A
cs=0x2a39;eip=0x00003c; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 123257                  mov     dx, [bx+2] ;~ 2A39:003C
cs=0x2a39;eip=0x00003f; 	X(MOV(*(dw*)(raddr(cs,m2c::kloc_38af4+1)), ax));	// 123258                  mov     word ptr cs:loc_38AF4+1, ax ;~ 2A39:003F
cs=0x2a39;eip=0x000043; 	X(MOV(*(dw*)(raddr(cs,m2c::kloc_38af4+3)), dx));	// 123259                  mov     word ptr cs:loc_38AF4+3, dx ;~ 2A39:0043
cs=0x2a39;eip=0x000048; 	T(ax = 0x70;);	// 123260                  mov     ax, 70h ; 'p' ;~ 2A39:0048
cs=0x2a39;eip=0x00004b; 	T(dx = cs;);	// 123261                  mov     dx, cs ;~ 2A39:004B
cs=0x2a39;eip=0x00004d; 	T(CLI);	// 123262                  cli ;~ 2A39:004D
cs=0x2a39;eip=0x00004e; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 123263                  mov     [bx], ax ;~ 2A39:004E
cs=0x2a39;eip=0x000050; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 123264                  mov     [bx+2], dx ;~ 2A39:0050
cs=0x2a39;eip=0x000053; 	T(STI);	// 123265                  sti ;~ 2A39:0053
cs=0x2a39;eip=0x000054; 	X(POP(ds));	// 123266                  pop     ds ;~ 2A39:0054
cs=0x2a39;eip=0x000055; 	J(RETF(0));	// 123268                  retf ;~ 2A39:0055
sub_389c6:
	// 123275 
cs=0x2a39;eip=0x000056; 	X(PUSH(ds));	// 123276                  push    ds ;~ 2A39:0056
cs=0x2a39;eip=0x000057; 	T(XOR(ax, ax));	// 123277                  xor     ax, ax ;~ 2A39:0057
cs=0x2a39;eip=0x000059; 	T(ds = ax;);	// 123278                  mov     ds, ax ;~ 2A39:0059
cs=0x2a39;eip=0x00005b; 	T(bx = 0x24;);	// 123280                  mov     bx, 24h ; '$' ;~ 2A39:005B
cs=0x2a39;eip=0x00005e; 	T(MOV(ax, *(dw*)(raddr(cs,m2c::kloc_38af4+1))));	// 123281                  mov     ax, word ptr cs:loc_38AF4+1 ;~ 2A39:005E
cs=0x2a39;eip=0x000062; 	T(MOV(dx, *(dw*)(raddr(cs,m2c::kloc_38af4+3))));	// 123282                  mov     dx, word ptr cs:loc_38AF4+3 ;~ 2A39:0062
cs=0x2a39;eip=0x000067; 	T(CLI);	// 123283                  cli ;~ 2A39:0067
cs=0x2a39;eip=0x000068; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 123284                  mov     [bx], ax ;~ 2A39:0068
cs=0x2a39;eip=0x00006a; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 123285                  mov     [bx+2], dx ;~ 2A39:006A
cs=0x2a39;eip=0x00006d; 	T(STI);	// 123286                  sti ;~ 2A39:006D
cs=0x2a39;eip=0x00006e; 	X(POP(ds));	// 123287                  pop     ds ;~ 2A39:006E
cs=0x2a39;eip=0x00006f; 	J(RETF(0));	// 123289                  retf ;~ 2A39:006F
seg3897_70_proc:
	// 123293 
cs=0x2a39;eip=0x000070; 	T(STI);	// 123293                  sti ;~ 2A39:0070
cs=0x2a39;eip=0x000071; 	X(PUSHF);	// 123294                  pushf ;~ 2A39:0071
cs=0x2a39;eip=0x000072; 	X(PUSH(ds));	// 123295                  push    ds ;~ 2A39:0072
cs=0x2a39;eip=0x000073; 	X(PUSH(es));	// 123296                  push    es ;~ 2A39:0073
cs=0x2a39;eip=0x000074; 	X(PUSH(ax));	// 123297                  push    ax ;~ 2A39:0074
cs=0x2a39;eip=0x000075; 	X(PUSH(bx));	// 123298                  push    bx ;~ 2A39:0075
cs=0x2a39;eip=0x000076; 	T(ax = seg_offset(seg48ae););	// 123299                  mov     ax, seg seg48ae ;~ 2A39:0076
cs=0x2a39;eip=0x000079; 	T(ds = ax;);	// 123300                  mov     ds, ax ;~ 2A39:0079
cs=0x2a39;eip=0x00007b; 	T(ax = 0x40;);	// 123301                  mov     ax, 40h ; '@' ;~ 2A39:007B
cs=0x2a39;eip=0x00007e; 	T(es = ax;);	// 123302                  mov     es, ax ;~ 2A39:007E
cs=0x2a39;eip=0x000080; 	T(ah = byte_4e1cf;);	// 123304                  mov     ah, ds:byte_4E1CF ;~ 2A39:0080
cs=0x2a39;eip=0x000084; 	T(OR(ah, ah));	// 123305                  or      ah, ah ;~ 2A39:0084
cs=0x2a39;eip=0x000086; 	J(JZ(loc_38a01));	// 123306                  jz      short loc_38A01 ;~ 2A39:0086
loc_389f8:
	// 7303 
cs=0x2a39;eip=0x000088; 	T(DEC(ah));	// 123310                  dec     ah ;~ 2A39:0088
cs=0x2a39;eip=0x00008a; 	X(byte_4e1cf = ah;);	// 123311                  mov     ds:byte_4E1CF, ah ;~ 2A39:008A
cs=0x2a39;eip=0x00008e; 	J(JMP(loc_38abd));	// 123312                  jmp     loc_38ABD ;~ 2A39:008E
loc_38a01:
	// 7304 
cs=0x2a39;eip=0x000091; 	S(IN(al, 0x60));	// 123316                  in      al, 60h         ; 8042 keyboard controller data register ;~ 2A39:0091
cs=0x2a39;eip=0x000093; 	T(CMP(byte_4e1cd, 0x0E0));	// 123317                  cmp     ds:byte_4E1CD, 0E0h ;~ 2A39:0093
cs=0x2a39;eip=0x000098; 	X(byte_4e1cd = al;);	// 123318                  mov     ds:byte_4E1CD, al ;~ 2A39:0098
cs=0x2a39;eip=0x00009b; 	J(JZ(loc_38a38));	// 123319                  jz      short loc_38A38 ;~ 2A39:009B
cs=0x2a39;eip=0x00009d; 	T(CMP(al, 0x0E0));	// 123320                  cmp     al, 0E0h ;~ 2A39:009D
cs=0x2a39;eip=0x00009f; 	T(ah = 1;);	// 123321                  mov     ah, 1 ;~ 2A39:009F
cs=0x2a39;eip=0x0000a1; 	J(JZ(loc_389f8));	// 123322                  jz      short loc_389F8 ;~ 2A39:00A1
cs=0x2a39;eip=0x0000a3; 	T(CMP(al, 0x0E1));	// 123323                  cmp     al, 0E1h ;~ 2A39:00A3
cs=0x2a39;eip=0x0000a5; 	T(ah = 3;);	// 123324                  mov     ah, 3 ;~ 2A39:00A5
cs=0x2a39;eip=0x0000a7; 	J(JZ(loc_389f8));	// 123325                  jz      short loc_389F8 ;~ 2A39:00A7
cs=0x2a39;eip=0x0000a9; 	T(XOR(ah, ah));	// 123326                  xor     ah, ah ;~ 2A39:00A9
cs=0x2a39;eip=0x0000ab; 	T(TEST(*(raddr(es,0x17)), 0x20));	// 123327                  test    byte ptr es:17h, 20h ;~ 2A39:00AB
cs=0x2a39;eip=0x0000b1; 	J(JZ(loc_38a26));	// 123328                  jz      short loc_38A26 ;~ 2A39:00B1
cs=0x2a39;eip=0x0000b3; 	T(XOR(ah, 1));	// 123329                  xor     ah, 1 ;~ 2A39:00B3
loc_38a26:
	// 7305 
cs=0x2a39;eip=0x0000b6; 	T(TEST(*(raddr(es,0x17)), 3));	// 123332                  test    byte ptr es:17h, 3 ;~ 2A39:00B6
cs=0x2a39;eip=0x0000bc; 	J(JZ(loc_38a31));	// 123333                  jz      short loc_38A31 ;~ 2A39:00BC
cs=0x2a39;eip=0x0000be; 	T(XOR(ah, 1));	// 123334                  xor     ah, 1 ;~ 2A39:00BE
loc_38a31:
	// 7306 
cs=0x2a39;eip=0x0000c1; 	T(OR(ah, ah));	// 123337                  or      ah, ah ;~ 2A39:00C1
cs=0x2a39;eip=0x0000c3; 	J(JZ(loc_38a38));	// 123338                  jz      short loc_38A38 ;~ 2A39:00C3
cs=0x2a39;eip=0x0000c5; 	J(JMP(loc_38abd));	// 123339                  jmp     loc_38ABD ;~ 2A39:00C5
loc_38a38:
	// 7307 
cs=0x2a39;eip=0x0000c8; 	T(ah = al;);	// 123344                  mov     ah, al ;~ 2A39:00C8
cs=0x2a39;eip=0x0000ca; 	T(AND(al, 0x7F));	// 123345                  and     al, 7Fh ;~ 2A39:00CA
cs=0x2a39;eip=0x0000cc; 	T(CMP(al, 0x51));	// 123346                  cmp     al, 51h ; 'Q' ;~ 2A39:00CC
cs=0x2a39;eip=0x0000ce; 	J(JA(loc_38abd));	// 123347                  ja      short loc_38ABD ;~ 2A39:00CE
cs=0x2a39;eip=0x0000d0; 	T(SUB(al, 0x29));	// 123348                  sub     al, 29h ; ')' ;~ 2A39:00D0
cs=0x2a39;eip=0x0000d2; 	J(JC(loc_38abd));	// 123349                  jb      short loc_38ABD ;~ 2A39:00D2
cs=0x2a39;eip=0x0000d4; 	T(bx = 0x56F0;);	// 123350                  mov     bx, 56F0h ;~ 2A39:00D4
cs=0x2a39;eip=0x0000d7; 	T(XLAT);	// 123351                  xlat ;~ 2A39:00D7
cs=0x2a39;eip=0x0000d8; 	T(OR(al, al));	// 123352                  or      al, al ;~ 2A39:00D8
cs=0x2a39;eip=0x0000da; 	J(JZ(loc_38abd));	// 123353                  jz      short loc_38ABD ;~ 2A39:00DA
cs=0x2a39;eip=0x0000dc; 	T(TEST(ah, 0x80));	// 123354                  test    ah, 80h ;~ 2A39:00DC
cs=0x2a39;eip=0x0000df; 	J(JNZ(loc_38aa8));	// 123355                  jnz     short loc_38AA8 ;~ 2A39:00DF
cs=0x2a39;eip=0x0000e1; 	T(CMP(byte_4e1ca, 0));	// 123356                  cmp     ds:byte_4E1CA, 0 ;~ 2A39:00E1
cs=0x2a39;eip=0x0000e6; 	J(JNZ(loc_38abd));	// 123357                  jnz     short loc_38ABD ;~ 2A39:00E6
cs=0x2a39;eip=0x0000e8; 	X(byte_4e1ca = al;);	// 123358                  mov     ds:byte_4E1CA, al ;~ 2A39:00E8
cs=0x2a39;eip=0x0000eb; 	T(CMP(byte_4e1ce, al));	// 123359                  cmp     ds:byte_4E1CE, al ;~ 2A39:00EB
cs=0x2a39;eip=0x0000ef; 	X(byte_4e1ce = al;);	// 123360                  mov     ds:byte_4E1CE, al ;~ 2A39:00EF
cs=0x2a39;eip=0x0000f2; 	J(JNZ(loc_38a74));	// 123361                  jnz     short loc_38A74 ;~ 2A39:00F2
cs=0x2a39;eip=0x0000f4; 	T(MOV(bx, *(dw*)(raddr(es,0x6C))));	// 123362                  mov     bx, es:6Ch ;~ 2A39:00F4
cs=0x2a39;eip=0x0000f9; 	T(SUB(bx, word_4e1cb));	// 123363                  sub     bx, ds:word_4E1CB ;~ 2A39:00F9
cs=0x2a39;eip=0x0000fd; 	T(CMP(bx, 5));	// 123364                  cmp     bx, 5 ;~ 2A39:00FD
cs=0x2a39;eip=0x000100; 	T(bh = 0x7F;);	// 123365                  mov     bh, 7Fh ;~ 2A39:0100
cs=0x2a39;eip=0x000102; 	J(JC(loc_38a76));	// 123366                  jb      short loc_38A76 ;~ 2A39:0102
loc_38a74:
	// 7308 
cs=0x2a39;eip=0x000104; 	T(bh = 0x5A;);	// 123369                  mov     bh, 5Ah ; 'Z' ;~ 2A39:0104
loc_38a76:
	// 7309 
cs=0x2a39;eip=0x000106; 	T(bl = 0x80;);	// 123372                  mov     bl, 80h ;~ 2A39:0106
cs=0x2a39;eip=0x000108; 	T(SUB(bl, bh));	// 123373                  sub     bl, bh ;~ 2A39:0108
cs=0x2a39;eip=0x00010a; 	T(ADD(bh, 0x80));	// 123374                  add     bh, 80h ;~ 2A39:010A
cs=0x2a39;eip=0x00010d; 	T(TEST(al, 1));	// 123375                  test    al, 1 ;~ 2A39:010D
cs=0x2a39;eip=0x00010f; 	J(JZ(loc_38a85));	// 123376                  jz      short loc_38A85 ;~ 2A39:010F
cs=0x2a39;eip=0x000111; 	X(byte_4e1c9 = bl;);	// 123377                  mov     ds:byte_4E1C9, bl ;~ 2A39:0111
loc_38a85:
	// 7310 
cs=0x2a39;eip=0x000115; 	T(TEST(al, 2));	// 123380                  test    al, 2 ;~ 2A39:0115
cs=0x2a39;eip=0x000117; 	J(JZ(loc_38a8d));	// 123381                  jz      short loc_38A8D ;~ 2A39:0117
cs=0x2a39;eip=0x000119; 	X(byte_4e1c9 = bh;);	// 123382                  mov     ds:byte_4E1C9, bh ;~ 2A39:0119
loc_38a8d:
	// 7311 
cs=0x2a39;eip=0x00011d; 	T(TEST(al, 4));	// 123385                  test    al, 4 ;~ 2A39:011D
cs=0x2a39;eip=0x00011f; 	J(JZ(loc_38a95));	// 123386                  jz      short loc_38A95 ;~ 2A39:011F
cs=0x2a39;eip=0x000121; 	X(byte_4e1c8 = bl;);	// 123387                  mov     ds:byte_4E1C8, bl ;~ 2A39:0121
loc_38a95:
	// 7312 
cs=0x2a39;eip=0x000125; 	T(TEST(al, 8));	// 123390                  test    al, 8 ;~ 2A39:0125
cs=0x2a39;eip=0x000127; 	J(JZ(loc_38a9d));	// 123391                  jz      short loc_38A9D ;~ 2A39:0127
cs=0x2a39;eip=0x000129; 	X(byte_4e1c8 = bh;);	// 123392                  mov     ds:byte_4E1C8, bh ;~ 2A39:0129
loc_38a9d:
	// 7313 
cs=0x2a39;eip=0x00012d; 	T(MOV(bx, *(dw*)(raddr(es,0x6C))));	// 123395                  mov     bx, es:6Ch ;~ 2A39:012D
cs=0x2a39;eip=0x000132; 	X(word_4e1cb = bx;);	// 123396                  mov     ds:word_4E1CB, bx ;~ 2A39:0132
cs=0x2a39;eip=0x000136; 	J(JMP(loc_38abd));	// 123397                  jmp     short loc_38ABD ;~ 2A39:0136
loc_38aa8:
	// 7314 
cs=0x2a39;eip=0x000138; 	T(CMP(byte_4e1ca, al));	// 123401                  cmp     ds:byte_4E1CA, al ;~ 2A39:0138
cs=0x2a39;eip=0x00013c; 	J(JNZ(loc_38abd));	// 123402                  jnz     short loc_38ABD ;~ 2A39:013C
cs=0x2a39;eip=0x00013e; 	X(byte_4e1ca = 0;);	// 123403                  mov     ds:byte_4E1CA, 0 ;~ 2A39:013E
cs=0x2a39;eip=0x000143; 	X(byte_4e1c8 = 0x80;);	// 123404                  mov     ds:byte_4E1C8, 80h ;~ 2A39:0143
cs=0x2a39;eip=0x000148; 	X(byte_4e1c9 = 0x80;);	// 123405                  mov     ds:byte_4E1C9, 80h ;~ 2A39:0148
loc_38abd:
	// 7315 
cs=0x2a39;eip=0x00014d; 	T(MOV(bx, *(dw*)(raddr(es,0x1A))));	// 123409                  mov     bx, es:1Ah ;~ 2A39:014D
cs=0x2a39;eip=0x000152; 	T(CMP(bx, *(dw*)(raddr(es,0x1C))));	// 123410                  cmp     bx, es:1Ch ;~ 2A39:0152
cs=0x2a39;eip=0x000157; 	J(JZ(loc_38aee));	// 123411                  jz      short loc_38AEE ;~ 2A39:0157
cs=0x2a39;eip=0x000159; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 123412                  mov     ax, es:[bx] ;~ 2A39:0159
loc_38acc:
	// 7316 
cs=0x2a39;eip=0x00015c; 	T(ADD(bx, 2));	// 123415                  add     bx, 2 ;~ 2A39:015C
cs=0x2a39;eip=0x00015f; 	T(CMP(bx, *(dw*)(raddr(es,0x82))));	// 123416                  cmp     bx, es:82h ;~ 2A39:015F
cs=0x2a39;eip=0x000164; 	J(JC(loc_38adb));	// 123417                  jb      short loc_38ADB ;~ 2A39:0164
cs=0x2a39;eip=0x000166; 	T(MOV(bx, *(dw*)(raddr(es,0x80))));	// 123418                  mov     bx, es:80h ;~ 2A39:0166
loc_38adb:
	// 7317 
cs=0x2a39;eip=0x00016b; 	T(CMP(bx, *(dw*)(raddr(es,0x1C))));	// 123421                  cmp     bx, es:1Ch ;~ 2A39:016B
cs=0x2a39;eip=0x000170; 	J(JZ(loc_38aee));	// 123422                  jz      short loc_38AEE ;~ 2A39:0170
cs=0x2a39;eip=0x000172; 	T(CMP(ax, *(dw*)(raddr(es,bx))));	// 123423                  cmp     ax, es:[bx] ;~ 2A39:0172
cs=0x2a39;eip=0x000175; 	J(JNZ(loc_38aee));	// 123424                  jnz     short loc_38AEE ;~ 2A39:0175
cs=0x2a39;eip=0x000177; 	X(MOV(*(dw*)(raddr(es,0x1A)), bx));	// 123425                  mov     es:1Ah, bx ;~ 2A39:0177
cs=0x2a39;eip=0x00017c; 	J(JMP(loc_38acc));	// 123426                  jmp     short loc_38ACC ;~ 2A39:017C
loc_38aee:
	// 7318 
cs=0x2a39;eip=0x00017e; 	X(POP(bx));	// 123431                  pop     bx ;~ 2A39:017E
cs=0x2a39;eip=0x00017f; 	X(POP(ax));	// 123432                  pop     ax ;~ 2A39:017F
cs=0x2a39;eip=0x000180; 	X(POP(es));	// 123433                  pop     es ;~ 2A39:0180
cs=0x2a39;eip=0x000181; 	X(POP(ds));	// 123435                  pop     ds ;~ 2A39:0181
cs=0x2a39;eip=0x000182; 	X(POPF);	// 123436                  popf ;~ 2A39:0182
cs=0x2a39;eip=0x000183; 	T(CLI);	// 123437                  cli ;~ 2A39:0183
loc_38af4:
	// 7319 
cs=0x2a39;eip=0x000184; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 123441                  jmp     far ptr 0:0 ;~ 2A39:0184

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_389f8: 	goto loc_389f8;
        case m2c::kloc_38a01: 	goto loc_38a01;
        case m2c::kloc_38a26: 	goto loc_38a26;
        case m2c::kloc_38a31: 	goto loc_38a31;
        case m2c::kloc_38a38: 	goto loc_38a38;
        case m2c::kloc_38a74: 	goto loc_38a74;
        case m2c::kloc_38a76: 	goto loc_38a76;
        case m2c::kloc_38a85: 	goto loc_38a85;
        case m2c::kloc_38a8d: 	goto loc_38a8d;
        case m2c::kloc_38a95: 	goto loc_38a95;
        case m2c::kloc_38a9d: 	goto loc_38a9d;
        case m2c::kloc_38aa8: 	goto loc_38aa8;
        case m2c::kloc_38abd: 	goto loc_38abd;
        case m2c::kloc_38acc: 	goto loc_38acc;
        case m2c::kloc_38adb: 	goto loc_38adb;
        case m2c::kloc_38aee: 	goto loc_38aee;
        case m2c::kloc_38af4: 	goto loc_38af4;
        case m2c::kseg3897_70_proc: 	goto seg3897_70_proc;
        case m2c::ksub_38976: 	goto sub_38976;
        case m2c::ksub_389c6: 	goto sub_389c6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

