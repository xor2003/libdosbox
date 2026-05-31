/* THIS IS GENERATED FILE */

        
#include "detroit.exe.h"

                

 bool _group9(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group9:
    _begin:
___main:
	// 11994 
#undef dest
#define dest -0x16
	// 11996 dest            = byte ptr -16h ;~ 05BF:000F
#undef string
#define string -8
	// 11997 string          = byte ptr -8 ;~ 05BF:000F
#undef value
#define value -2
	// 11998 value           = word ptr -2 ;~ 05BF:000F
#undef argc
#define argc 6
	// 11999 argc            = word ptr  6 ;~ 05BF:000F
#undef argv
#define argv 8
	// 12000 argv            = dword ptr  8 ;~ 05BF:000F
#undef envp
#define envp 0x0C
	// 12001 envp            = dword ptr  0Ch ;~ 05BF:000F
cs=0x5bf;eip=0x00000f; 	X(ENTER(0x16, 0));	// 12003                  enter   16h, 0 ;~ 05BF:000F
cs=0x5bf;eip=0x000013; 	X(word_192f0 = 0;);	// 12004                  mov     word_192F0, 0 ;~ 05BF:0013
cs=0x5bf;eip=0x000019; 	X(word_192f3 = 0x0A;);	// 12005                  mov     word_192F3, 0Ah ;~ 05BF:0019
cs=0x5bf;eip=0x00001f; 	X(byte_192f2 = 0;);	// 12006                  mov     byte_192F2, 0 ;~ 05BF:001F
cs=0x5bf;eip=0x000024; 	T(NOP);	// 12007                  nop ;~ 05BF:0024
cs=0x5bf;eip=0x000025; 	X(PUSH(cs));	// 12008                  push    cs ;~ 05BF:0025
cs=0x5bf;eip=0x000026; 	J(CALL(sub_14ded,0));	// 12009                  call    near ptr sub_14DED ;~ 05BF:0026
cs=0x5bf;eip=0x000029; 	X(PUSH(0x1C));	// 12010                  push    1Ch             ; interruptno ;~ 05BF:0029
cs=0x5bf;eip=0x00002b; 	J(CALLF(___getvect,0));	// 12011                  call    ___getvect ;~ 05BF:002B
cs=0x5bf;eip=0x000030; 	X(POP(cx));	// 12013                  pop     cx ;~ 05BF:0030
cs=0x5bf;eip=0x000031; 	X(word_192f7 = dx;);	// 12014                  mov     word_192F7, dx ;~ 05BF:0031
cs=0x5bf;eip=0x000035; 	X(isr_ = ax;);	// 12015                  mov     isr_, ax ;~ 05BF:0035
cs=0x5bf;eip=0x000038; 	X(PUSH(seg_offset(seg001)));	// 12016                  push    seg seg001 ;~ 05BF:0038
cs=0x5bf;eip=0x00003b; 	X(PUSH((dw)m2c::k__isr));	// 12017                  push    offset __isr    ; isr ;~ 05BF:003B
cs=0x5bf;eip=0x00003e; 	X(PUSH(0x1C));	// 12018                  push    1Ch             ; interruptno ;~ 05BF:003E
cs=0x5bf;eip=0x000040; 	J(CALLF(___setvect,0));	// 12019                  call    ___setvect ;~ 05BF:0040
cs=0x5bf;eip=0x000045; 	T(ADD(sp, 6));	// 12020                  add     sp, 6 ;~ 05BF:0045
cs=0x5bf;eip=0x000048; 	T(NOP);	// 12021                  nop ;~ 05BF:0048
cs=0x5bf;eip=0x000049; 	X(PUSH(cs));	// 12022                  push    cs ;~ 05BF:0049
cs=0x5bf;eip=0x00004a; 	J(CALL(sub_149ea,0));	// 12023                  call    near ptr sub_149EA ;~ 05BF:004A
cs=0x5bf;eip=0x00004d; 	T(NOP);	// 12025                  nop ;~ 05BF:004D
cs=0x5bf;eip=0x00004e; 	X(PUSH(cs));	// 12026                  push    cs ;~ 05BF:004E
cs=0x5bf;eip=0x00004f; 	J(CALL(sub_14f67,0));	// 12027                  call    near ptr sub_14F67 ;~ 05BF:004F
cs=0x5bf;eip=0x000052; 	T(NOP);	// 12028                  nop ;~ 05BF:0052
cs=0x5bf;eip=0x000053; 	X(PUSH(cs));	// 12029                  push    cs ;~ 05BF:0053
cs=0x5bf;eip=0x000054; 	J(CALL(sub_14d75,0));	// 12030                  call    near ptr sub_14D75 ;~ 05BF:0054
cs=0x5bf;eip=0x000057; 	T(LES(bx, __ptr));	// 12032                  les     bx, __ptr ;~ 05BF:0057
cs=0x5bf;eip=0x00005b; 	T(CMP(*(raddr(es,bx+1)), 0x0FF));	// 12034                  cmp     byte ptr es:[bx+1], 0FFh ;~ 05BF:005B
cs=0x5bf;eip=0x000060; 	J(JZ(loc_1423b));	// 12035                  jz      short loc_1423B ;~ 05BF:0060
cs=0x5bf;eip=0x000062; 	T(CMP(*(dw*)(raddr(es,bx+0x165)), 0x0FF));	// 12036                  cmp     word ptr es:[bx+165h], 0FFh ;~ 05BF:0062
cs=0x5bf;eip=0x000069; 	J(JNZ(loc_1426a));	// 12037                  jnz     short loc_1426A ;~ 05BF:0069
loc_1423b:
	// 5100 
cs=0x5bf;eip=0x00006b; 	X(PUSH(word_192f7));	// 12040                  push    word_192F7 ;~ 05BF:006B
cs=0x5bf;eip=0x00006f; 	X(PUSH(isr_));	// 12041                  push    isr_            ; isr ;~ 05BF:006F
cs=0x5bf;eip=0x000073; 	X(PUSH(0x1C));	// 12042                  push    1Ch             ; interruptno ;~ 05BF:0073
cs=0x5bf;eip=0x000075; 	J(CALLF(___setvect,0));	// 12043                  call    ___setvect ;~ 05BF:0075
cs=0x5bf;eip=0x00007a; 	T(ADD(sp, 6));	// 12044                  add     sp, 6 ;~ 05BF:007A
cs=0x5bf;eip=0x00007d; 	T(NOP);	// 12045                  nop ;~ 05BF:007D
cs=0x5bf;eip=0x00007e; 	X(PUSH(cs));	// 12046                  push    cs ;~ 05BF:007E
cs=0x5bf;eip=0x00007f; 	J(CALL(sub_14a92,0));	// 12047                  call    near ptr sub_14A92 ;~ 05BF:007F
cs=0x5bf;eip=0x000082; 	X(PUSH(0));	// 12048                  push    0 ;~ 05BF:0082
cs=0x5bf;eip=0x000084; 	X(PUSH(0));	// 12049                  push    0 ;~ 05BF:0084
cs=0x5bf;eip=0x000086; 	X(PUSH(ds));	// 12050                  push    ds ;~ 05BF:0086
cs=0x5bf;eip=0x000087; 	X(PUSH(offset(dseg,__a255)));	// 12051                  push    offset __a255 ;~ 05BF:0087
cs=0x5bf;eip=0x00008a; 	X(PUSH(ds));	// 12052                  push    ds ;~ 05BF:008A
cs=0x5bf;eip=0x00008b; 	X(PUSH(offset(dseg,__arg0)));	// 12053                  push    offset __arg0   ; arg0 ;~ 05BF:008B
cs=0x5bf;eip=0x00008e; 	X(PUSH(ds));	// 12054                  push    ds ;~ 05BF:008E
cs=0x5bf;eip=0x00008f; 	X(PUSH(offset(dseg,__path)));	// 12055                  push    offset __path   ; path ;~ 05BF:008F
cs=0x5bf;eip=0x000092; 	J(CALLF(___execl,0));	// 12056                  call    ___execl ;~ 05BF:0092
cs=0x5bf;eip=0x000097; 	T(ADD(sp, 0x10));	// 12057                  add     sp, 10h ;~ 05BF:0097
loc_1426a:
	// 5101 
cs=0x5bf;eip=0x00009a; 	J(CALLF(___clrscr,0));	// 12060                  call    ___clrscr ;~ 05BF:009A
cs=0x5bf;eip=0x00009f; 	X(PUSH(ds));	// 12061                  push    ds ;~ 05BF:009F
cs=0x5bf;eip=0x0000a0; 	X(PUSH(offset(dseg,__aloadingpleasew)));	// 12062                  push    offset __aLoadingPleaseW ; "Loading, Please Wait..." ;~ 05BF:00A0
cs=0x5bf;eip=0x0000a3; 	J(CALLF(___puts,0));	// 12063                  call    ___puts ;~ 05BF:00A3
cs=0x5bf;eip=0x0000a8; 	T(ADD(sp, 4));	// 12065                  add     sp, 4 ;~ 05BF:00A8
cs=0x5bf;eip=0x0000ab; 	T(LES(bx, __ptr));	// 12066                  les     bx, __ptr ;~ 05BF:00AB
cs=0x5bf;eip=0x0000af; 	T(CMP(*(raddr(es,bx+1)), 0));	// 12068                  cmp     byte ptr es:[bx+1], 0 ;~ 05BF:00AF
cs=0x5bf;eip=0x0000b4; 	J(JBE(loc_14299));	// 12069                  jbe     short loc_14299 ;~ 05BF:00B4
cs=0x5bf;eip=0x0000b6; 	T(ax = *(dw*)(&__ptr););	// 12070                  mov     ax, word ptr __ptr ;~ 05BF:00B6
cs=0x5bf;eip=0x0000b9; 	T(ADD(ax, 2));	// 12071                  add     ax, 2 ;~ 05BF:00B9
cs=0x5bf;eip=0x0000bc; 	X(PUSH(*(dw*)(((db*)&__ptr)+2)));	// 12072                  push    word ptr __ptr+2 ;~ 05BF:00BC
cs=0x5bf;eip=0x0000c0; 	X(PUSH(ax));	// 12073                  push    ax              ; path ;~ 05BF:00C0
cs=0x5bf;eip=0x0000c1; 	J(CALLF(sub_151f4,0));	// 12074                  call    sub_151F4 ;~ 05BF:00C1
cs=0x5bf;eip=0x0000c6; 	T(ADD(sp, 4));	// 12075                  add     sp, 4 ;~ 05BF:00C6
loc_14299:
	// 5102 
cs=0x5bf;eip=0x0000c9; 	J(CALLF(sub_17d4e,0));	// 12078                  call    sub_17D4E ;~ 05BF:00C9
cs=0x5bf;eip=0x0000ce; 	J(CALLF(sub_17285,0));	// 12079                  call    sub_17285 ;~ 05BF:00CE
cs=0x5bf;eip=0x0000d3; 	J(CALLF(sub_17d97,0));	// 12080                  call    sub_17D97 ;~ 05BF:00D3
cs=0x5bf;eip=0x0000d8; 	T(CMP(byte_18e88, 0));	// 12081                  cmp     byte_18E88, 0 ;~ 05BF:00D8
cs=0x5bf;eip=0x0000dd; 	J(JZ(loc_142b4));	// 12082                  jz      short loc_142B4 ;~ 05BF:00DD
cs=0x5bf;eip=0x0000df; 	X(byte_192f2 = 0x7F;);	// 12083                  mov     byte_192F2, 7Fh ;~ 05BF:00DF
loc_142b4:
	// 5103 
cs=0x5bf;eip=0x0000e4; 	X(PUSH(word_1936b));	// 12086                  push    word_1936B ;~ 05BF:00E4
cs=0x5bf;eip=0x0000e8; 	X(PUSH(__src));	// 12087                  push    __src           ; ptr ;~ 05BF:00E8
cs=0x5bf;eip=0x0000ec; 	X(PUSH(ds));	// 12088                  push    ds ;~ 05BF:00EC
cs=0x5bf;eip=0x0000ed; 	X(PUSH(offset(dseg,__aintpal0scr)));	// 12089                  push    offset __aIntpal0Scr ; path ;~ 05BF:00ED
cs=0x5bf;eip=0x0000f0; 	T(NOP);	// 12090                  nop ;~ 05BF:00F0
cs=0x5bf;eip=0x0000f1; 	X(PUSH(cs));	// 12091                  push    cs ;~ 05BF:00F1
cs=0x5bf;eip=0x0000f2; 	J(CALL(sub_14c9a,0));	// 12092                  call    near ptr sub_14C9A ;~ 05BF:00F2
cs=0x5bf;eip=0x0000f5; 	T(ADD(sp, 8));	// 12093                  add     sp, 8 ;~ 05BF:00F5
cs=0x5bf;eip=0x0000f8; 	X(PUSH(word_1936b));	// 12094                  push    word_1936B ;~ 05BF:00F8
cs=0x5bf;eip=0x0000fc; 	X(PUSH(__src));	// 12095                  push    __src ;~ 05BF:00FC
cs=0x5bf;eip=0x000100; 	J(CALLF(sub_17256,0));	// 12096                  call    sub_17256 ;~ 05BF:0100
cs=0x5bf;eip=0x000105; 	T(ADD(sp, 4));	// 12097                  add     sp, 4 ;~ 05BF:0105
cs=0x5bf;eip=0x000108; 	T(NOP);	// 12098                  nop ;~ 05BF:0108
cs=0x5bf;eip=0x000109; 	X(PUSH(cs));	// 12099                  push    cs ;~ 05BF:0109
cs=0x5bf;eip=0x00010a; 	J(CALL(sub_14dfe,0));	// 12100                  call    near ptr sub_14DFE ;~ 05BF:010A
cs=0x5bf;eip=0x00010d; 	X(PUSH(0));	// 12101                  push    0               ; value ;~ 05BF:010D
cs=0x5bf;eip=0x00010f; 	J(CALLF(sub_1540e,0));	// 12102                  call    sub_1540E ;~ 05BF:010F
cs=0x5bf;eip=0x000114; 	X(POP(cx));	// 12103                  pop     cx ;~ 05BF:0114
cs=0x5bf;eip=0x000115; 	T(NOP);	// 12104                  nop ;~ 05BF:0115
cs=0x5bf;eip=0x000116; 	X(PUSH(cs));	// 12105                  push    cs ;~ 05BF:0116
cs=0x5bf;eip=0x000117; 	J(CALL(sub_15169,0));	// 12106                  call    near ptr sub_15169 ;~ 05BF:0117
cs=0x5bf;eip=0x00011a; 	J(CALLF(sub_17285,0));	// 12107                  call    sub_17285 ;~ 05BF:011A
cs=0x5bf;eip=0x00011f; 	X(PUSH(0x3E80));	// 12108                  push    3E80h ;~ 05BF:011F
cs=0x5bf;eip=0x000122; 	J(CALLF(sub_17086,0));	// 12109                  call    sub_17086 ;~ 05BF:0122
cs=0x5bf;eip=0x000127; 	X(POP(cx));	// 12110                  pop     cx ;~ 05BF:0127
cs=0x5bf;eip=0x000128; 	X(PUSH(word_19367));	// 12111                  push    word_19367      ; int ;~ 05BF:0128
cs=0x5bf;eip=0x00012c; 	X(PUSH(__block));	// 12112                  push    __block         ; int ;~ 05BF:012C
cs=0x5bf;eip=0x000130; 	X(PUSH(ds));	// 12113                  push    ds ;~ 05BF:0130
cs=0x5bf;eip=0x000131; 	X(PUSH(offset(dseg,__adetttlscr)));	// 12114                  push    offset __aDetttlScr ; path ;~ 05BF:0131
cs=0x5bf;eip=0x000134; 	T(NOP);	// 12115                  nop ;~ 05BF:0134
cs=0x5bf;eip=0x000135; 	X(PUSH(cs));	// 12116                  push    cs ;~ 05BF:0135
cs=0x5bf;eip=0x000136; 	J(CALL(sub_14bd7,0));	// 12117                  call    near ptr sub_14BD7 ;~ 05BF:0136
cs=0x5bf;eip=0x000139; 	T(ADD(sp, 8));	// 12118                  add     sp, 8 ;~ 05BF:0139
cs=0x5bf;eip=0x00013c; 	X(PUSH(0));	// 12119                  push    0 ;~ 05BF:013C
cs=0x5bf;eip=0x00013e; 	X(PUSH(word_19367));	// 12120                  push    word_19367 ;~ 05BF:013E
cs=0x5bf;eip=0x000142; 	X(PUSH(__block));	// 12121                  push    __block ;~ 05BF:0142
cs=0x5bf;eip=0x000146; 	J(CALLF(sub_172c6,0));	// 12122                  call    sub_172C6 ;~ 05BF:0146
cs=0x5bf;eip=0x00014b; 	T(ADD(sp, 6));	// 12123                  add     sp, 6 ;~ 05BF:014B
cs=0x5bf;eip=0x00014e; 	X(PUSH(word_1936b));	// 12124                  push    word_1936B ;~ 05BF:014E
cs=0x5bf;eip=0x000152; 	X(PUSH(__src));	// 12125                  push    __src           ; ptr ;~ 05BF:0152
cs=0x5bf;eip=0x000156; 	X(PUSH(ds));	// 12126                  push    ds ;~ 05BF:0156
cs=0x5bf;eip=0x000157; 	X(PUSH(offset(dseg,__aintpal1scr)));	// 12127                  push    offset __aIntpal1Scr ; path ;~ 05BF:0157
cs=0x5bf;eip=0x00015a; 	T(NOP);	// 12128                  nop ;~ 05BF:015A
cs=0x5bf;eip=0x00015b; 	X(PUSH(cs));	// 12129                  push    cs ;~ 05BF:015B
cs=0x5bf;eip=0x00015c; 	J(CALL(sub_14c9a,0));	// 12130                  call    near ptr sub_14C9A ;~ 05BF:015C
cs=0x5bf;eip=0x00015f; 	T(ADD(sp, 8));	// 12131                  add     sp, 8 ;~ 05BF:015F
cs=0x5bf;eip=0x000162; 	X(PUSH(word_1936b));	// 12132                  push    word_1936B ;~ 05BF:0162
cs=0x5bf;eip=0x000166; 	X(PUSH(__src));	// 12133                  push    __src ;~ 05BF:0166
cs=0x5bf;eip=0x00016a; 	J(CALLF(sub_17256,0));	// 12134                  call    sub_17256 ;~ 05BF:016A
cs=0x5bf;eip=0x00016f; 	T(ADD(sp, 4));	// 12135                  add     sp, 4 ;~ 05BF:016F
cs=0x5bf;eip=0x000172; 	T(NOP);	// 12136                  nop ;~ 05BF:0172
cs=0x5bf;eip=0x000173; 	X(PUSH(cs));	// 12137                  push    cs ;~ 05BF:0173
cs=0x5bf;eip=0x000174; 	J(CALL(sub_1504c,0));	// 12138                  call    near ptr sub_1504C ;~ 05BF:0174
cs=0x5bf;eip=0x000177; 	X(MOV(*(dw*)(raddr(ss,bp+value)), 1));	// 12139                  mov     [bp+value], 1 ;~ 05BF:0177
cs=0x5bf;eip=0x00017c; 	J(JMP(loc_143df));	// 12140                  jmp     loc_143DF ;~ 05BF:017C
loc_1434f:
	// 5104 
cs=0x5bf;eip=0x00017f; 	X(PUSH(ds));	// 12144                  push    ds ;~ 05BF:017F
cs=0x5bf;eip=0x000180; 	X(PUSH(offset(dseg,__aintcar)));	// 12145                  push    offset __aIntcar ; src ;~ 05BF:0180
cs=0x5bf;eip=0x000183; 	X(PUSH(ss));	// 12146                  push    ss ;~ 05BF:0183
cs=0x5bf;eip=0x000184; 	T(ax = bp+dest);	// 12147                  lea     ax, [bp+dest] ;~ 05BF:0184
cs=0x5bf;eip=0x000187; 	X(PUSH(ax));	// 12148                  push    ax              ; dest ;~ 05BF:0187
cs=0x5bf;eip=0x000188; 	J(CALLF(___strcpy,0));	// 12149                  call    ___strcpy ;~ 05BF:0188
cs=0x5bf;eip=0x00018d; 	T(ADD(sp, 8));	// 12150                  add     sp, 8 ;~ 05BF:018D
cs=0x5bf;eip=0x000190; 	X(PUSH(0x0A));	// 12151                  push    0Ah             ; radix ;~ 05BF:0190
cs=0x5bf;eip=0x000192; 	X(PUSH(ss));	// 12152                  push    ss ;~ 05BF:0192
cs=0x5bf;eip=0x000193; 	T(ax = bp+string);	// 12153                  lea     ax, [bp+string] ;~ 05BF:0193
cs=0x5bf;eip=0x000196; 	X(PUSH(ax));	// 12154                  push    ax              ; string ;~ 05BF:0196
cs=0x5bf;eip=0x000197; 	X(PUSH(*(dw*)(raddr(ss,bp+value))));	// 12155                  push    [bp+value]      ; value ;~ 05BF:0197
cs=0x5bf;eip=0x00019a; 	J(CALLF(___itoa,0));	// 12156                  call    ___itoa ;~ 05BF:019A
cs=0x5bf;eip=0x00019f; 	T(ADD(sp, 8));	// 12157                  add     sp, 8 ;~ 05BF:019F
cs=0x5bf;eip=0x0001a2; 	X(PUSH(ss));	// 12158                  push    ss ;~ 05BF:01A2
cs=0x5bf;eip=0x0001a3; 	T(ax = bp+string);	// 12159                  lea     ax, [bp+string] ;~ 05BF:01A3
cs=0x5bf;eip=0x0001a6; 	X(PUSH(ax));	// 12160                  push    ax              ; src ;~ 05BF:01A6
cs=0x5bf;eip=0x0001a7; 	X(PUSH(ss));	// 12161                  push    ss ;~ 05BF:01A7
cs=0x5bf;eip=0x0001a8; 	T(ax = bp+dest);	// 12162                  lea     ax, [bp+dest] ;~ 05BF:01A8
cs=0x5bf;eip=0x0001ab; 	X(PUSH(ax));	// 12163                  push    ax              ; dest ;~ 05BF:01AB
cs=0x5bf;eip=0x0001ac; 	J(CALLF(___strcat,0));	// 12164                  call    ___strcat ;~ 05BF:01AC
cs=0x5bf;eip=0x0001b1; 	T(ADD(sp, 8));	// 12165                  add     sp, 8 ;~ 05BF:01B1
cs=0x5bf;eip=0x0001b4; 	X(PUSH(ds));	// 12166                  push    ds ;~ 05BF:01B4
cs=0x5bf;eip=0x0001b5; 	X(PUSH(offset(dseg,__ascr)));	// 12167                  push    offset __aScr   ; src ;~ 05BF:01B5
cs=0x5bf;eip=0x0001b8; 	X(PUSH(ss));	// 12168                  push    ss ;~ 05BF:01B8
cs=0x5bf;eip=0x0001b9; 	T(ax = bp+dest);	// 12169                  lea     ax, [bp+dest] ;~ 05BF:01B9
cs=0x5bf;eip=0x0001bc; 	X(PUSH(ax));	// 12170                  push    ax              ; dest ;~ 05BF:01BC
cs=0x5bf;eip=0x0001bd; 	J(CALLF(___strcat,0));	// 12171                  call    ___strcat ;~ 05BF:01BD
cs=0x5bf;eip=0x0001c2; 	T(ADD(sp, 8));	// 12172                  add     sp, 8 ;~ 05BF:01C2
cs=0x5bf;eip=0x0001c5; 	X(PUSH(word_19367));	// 12173                  push    word_19367      ; int ;~ 05BF:01C5
cs=0x5bf;eip=0x0001c9; 	X(PUSH(__block));	// 12174                  push    __block         ; int ;~ 05BF:01C9
cs=0x5bf;eip=0x0001cd; 	X(PUSH(ss));	// 12175                  push    ss ;~ 05BF:01CD
cs=0x5bf;eip=0x0001ce; 	T(ax = bp+dest);	// 12176                  lea     ax, [bp+dest] ;~ 05BF:01CE
cs=0x5bf;eip=0x0001d1; 	X(PUSH(ax));	// 12177                  push    ax              ; path ;~ 05BF:01D1
cs=0x5bf;eip=0x0001d2; 	T(NOP);	// 12178                  nop ;~ 05BF:01D2
cs=0x5bf;eip=0x0001d3; 	X(PUSH(cs));	// 12179                  push    cs ;~ 05BF:01D3
cs=0x5bf;eip=0x0001d4; 	J(CALL(sub_14bd7,0));	// 12180                  call    near ptr sub_14BD7 ;~ 05BF:01D4
cs=0x5bf;eip=0x0001d7; 	T(ADD(sp, 8));	// 12181                  add     sp, 8 ;~ 05BF:01D7
cs=0x5bf;eip=0x0001da; 	X(PUSH(0x3E80));	// 12182                  push    3E80h ;~ 05BF:01DA
cs=0x5bf;eip=0x0001dd; 	X(PUSH(word_19367));	// 12183                  push    word_19367 ;~ 05BF:01DD
cs=0x5bf;eip=0x0001e1; 	X(PUSH(__block));	// 12184                  push    __block ;~ 05BF:01E1
cs=0x5bf;eip=0x0001e5; 	J(CALLF(sub_172c6,0));	// 12185                  call    sub_172C6 ;~ 05BF:01E5
cs=0x5bf;eip=0x0001ea; 	T(ADD(sp, 6));	// 12186                  add     sp, 6 ;~ 05BF:01EA
cs=0x5bf;eip=0x0001ed; 	T(NOP);	// 12187                  nop ;~ 05BF:01ED
cs=0x5bf;eip=0x0001ee; 	X(PUSH(cs));	// 12188                  push    cs ;~ 05BF:01EE
cs=0x5bf;eip=0x0001ef; 	J(CALL(sub_151ca,0));	// 12189                  call    near ptr sub_151CA ;~ 05BF:01EF
cs=0x5bf;eip=0x0001f2; 	T(NOP);	// 12190                  nop ;~ 05BF:01F2
cs=0x5bf;eip=0x0001f3; 	X(PUSH(cs));	// 12191                  push    cs ;~ 05BF:01F3
cs=0x5bf;eip=0x0001f4; 	J(CALL(sub_150d3,0));	// 12192                  call    near ptr sub_150D3 ;~ 05BF:01F4
cs=0x5bf;eip=0x0001f7; 	T(NOP);	// 12193                  nop ;~ 05BF:01F7
cs=0x5bf;eip=0x0001f8; 	X(PUSH(cs));	// 12194                  push    cs ;~ 05BF:01F8
cs=0x5bf;eip=0x0001f9; 	J(CALL(sub_151ca,0));	// 12195                  call    near ptr sub_151CA ;~ 05BF:01F9
cs=0x5bf;eip=0x0001fc; 	X(PUSH(0));	// 12196                  push    0               ; value ;~ 05BF:01FC
cs=0x5bf;eip=0x0001fe; 	J(CALLF(sub_1540e,0));	// 12197                  call    sub_1540E ;~ 05BF:01FE
cs=0x5bf;eip=0x000203; 	X(POP(cx));	// 12198                  pop     cx ;~ 05BF:0203
cs=0x5bf;eip=0x000204; 	X(PUSH(2));	// 12199                  push    2               ; seconds ;~ 05BF:0204
cs=0x5bf;eip=0x000206; 	J(CALLF(___sleep,0));	// 12200                  call    ___sleep ;~ 05BF:0206
cs=0x5bf;eip=0x00020b; 	X(POP(cx));	// 12201                  pop     cx ;~ 05BF:020B
cs=0x5bf;eip=0x00020c; 	X(INC(*(dw*)(raddr(ss,bp+value))));	// 12202                  inc     [bp+value] ;~ 05BF:020C
loc_143df:
	// 5105 
cs=0x5bf;eip=0x00020f; 	T(CMP(*(dw*)(raddr(ss,bp+value)), 7));	// 12205                  cmp     [bp+value], 7 ;~ 05BF:020F
cs=0x5bf;eip=0x000213; 	J(JG(loc_143e8));	// 12206                  jg      short loc_143E8 ;~ 05BF:0213
cs=0x5bf;eip=0x000215; 	J(JMP(loc_1434f));	// 12207                  jmp     loc_1434F ;~ 05BF:0215
loc_143e8:
	// 5106 
cs=0x5bf;eip=0x000218; 	T(NOP);	// 12211                  nop ;~ 05BF:0218
cs=0x5bf;eip=0x000219; 	X(PUSH(cs));	// 12212                  push    cs ;~ 05BF:0219
cs=0x5bf;eip=0x00021a; 	J(CALL(sub_14e24,0));	// 12213                  call    near ptr sub_14E24 ;~ 05BF:021A
cs=0x5bf;eip=0x00021d; 	J(CALLF(sub_17285,0));	// 12214                  call    sub_17285 ;~ 05BF:021D
cs=0x5bf;eip=0x000222; 	X(PUSH(0));	// 12215                  push    0 ;~ 05BF:0222
cs=0x5bf;eip=0x000224; 	X(PUSH(0x3E80));	// 12216                  push    3E80h ;~ 05BF:0224
cs=0x5bf;eip=0x000227; 	J(CALLF(sub_172a3,0));	// 12217                  call    sub_172A3 ;~ 05BF:0227
cs=0x5bf;eip=0x00022c; 	T(ADD(sp, 4));	// 12218                  add     sp, 4 ;~ 05BF:022C
cs=0x5bf;eip=0x00022f; 	X(PUSH(word_19367));	// 12219                  push    word_19367      ; int ;~ 05BF:022F
cs=0x5bf;eip=0x000233; 	X(PUSH(__block));	// 12220                  push    __block         ; int ;~ 05BF:0233
cs=0x5bf;eip=0x000237; 	X(PUSH(ds));	// 12221                  push    ds ;~ 05BF:0237
cs=0x5bf;eip=0x000238; 	X(PUSH(offset(dseg,__aintrofntscr)));	// 12222                  push    offset __aIntrofntScr ; path ;~ 05BF:0238
cs=0x5bf;eip=0x00023b; 	T(NOP);	// 12223                  nop ;~ 05BF:023B
cs=0x5bf;eip=0x00023c; 	X(PUSH(cs));	// 12224                  push    cs ;~ 05BF:023C
cs=0x5bf;eip=0x00023d; 	J(CALL(sub_14bd7,0));	// 12225                  call    near ptr sub_14BD7 ;~ 05BF:023D
cs=0x5bf;eip=0x000240; 	T(ADD(sp, 8));	// 12226                  add     sp, 8 ;~ 05BF:0240
cs=0x5bf;eip=0x000243; 	X(PUSH(0x3E80));	// 12227                  push    3E80h           ; int ;~ 05BF:0243
cs=0x5bf;eip=0x000246; 	X(PUSH(0));	// 12228                  push    0               ; int ;~ 05BF:0246
cs=0x5bf;eip=0x000248; 	X(PUSH(0x70));	// 12229                  push    70h ; 'p'       ; int ;~ 05BF:0248
cs=0x5bf;eip=0x00024a; 	X(PUSH(ds));	// 12230                  push    ds ;~ 05BF:024A
cs=0x5bf;eip=0x00024b; 	X(PUSH(offset(dseg,__adesign)));	// 12231                  push    offset __aDesign ; s ;~ 05BF:024B
cs=0x5bf;eip=0x00024e; 	T(NOP);	// 12232                  nop ;~ 05BF:024E
cs=0x5bf;eip=0x00024f; 	X(PUSH(cs));	// 12233                  push    cs ;~ 05BF:024F
cs=0x5bf;eip=0x000250; 	J(CALL(sub_14fb8,0));	// 12234                  call    near ptr sub_14FB8 ;~ 05BF:0250
cs=0x5bf;eip=0x000253; 	T(ADD(sp, 0x0A));	// 12235                  add     sp, 0Ah ;~ 05BF:0253
cs=0x5bf;eip=0x000256; 	X(PUSH(0x3E80));	// 12236                  push    3E80h           ; int ;~ 05BF:0256
cs=0x5bf;eip=0x000259; 	X(PUSH(0x14));	// 12237                  push    14h             ; int ;~ 05BF:0259
cs=0x5bf;eip=0x00025b; 	X(PUSH(0x40));	// 12238                  push    40h ; '@'       ; int ;~ 05BF:025B
cs=0x5bf;eip=0x00025d; 	X(PUSH(ds));	// 12239                  push    ds ;~ 05BF:025D
cs=0x5bf;eip=0x00025e; 	X(PUSH(offset(dseg,__adavidlester)));	// 12240                  push    offset __aDavidLester ; s ;~ 05BF:025E
cs=0x5bf;eip=0x000261; 	T(NOP);	// 12241                  nop ;~ 05BF:0261
cs=0x5bf;eip=0x000262; 	X(PUSH(cs));	// 12242                  push    cs ;~ 05BF:0262
cs=0x5bf;eip=0x000263; 	J(CALL(sub_14fb8,0));	// 12243                  call    near ptr sub_14FB8 ;~ 05BF:0263
cs=0x5bf;eip=0x000266; 	T(ADD(sp, 0x0A));	// 12244                  add     sp, 0Ah ;~ 05BF:0266
cs=0x5bf;eip=0x000269; 	X(PUSH(0x3E80));	// 12245                  push    3E80h           ; int ;~ 05BF:0269
cs=0x5bf;eip=0x00026c; 	X(PUSH(0x3C));	// 12246                  push    3Ch ; '<'       ; int ;~ 05BF:026C
cs=0x5bf;eip=0x00026e; 	X(PUSH(0x50));	// 12247                  push    50h ; 'P'       ; int ;~ 05BF:026E
cs=0x5bf;eip=0x000270; 	X(PUSH(ds));	// 12248                  push    ds ;~ 05BF:0270
cs=0x5bf;eip=0x000271; 	X(PUSH(offset(dseg,__aproduction)));	// 12249                  push    offset __aProduction ; s ;~ 05BF:0271
cs=0x5bf;eip=0x000274; 	T(NOP);	// 12250                  nop ;~ 05BF:0274
cs=0x5bf;eip=0x000275; 	X(PUSH(cs));	// 12251                  push    cs ;~ 05BF:0275
cs=0x5bf;eip=0x000276; 	J(CALL(sub_14fb8,0));	// 12252                  call    near ptr sub_14FB8 ;~ 05BF:0276
cs=0x5bf;eip=0x000279; 	T(ADD(sp, 0x0A));	// 12253                  add     sp, 0Ah ;~ 05BF:0279
cs=0x5bf;eip=0x00027c; 	X(PUSH(0x3E80));	// 12254                  push    3E80h           ; int ;~ 05BF:027C
cs=0x5bf;eip=0x00027f; 	X(PUSH(0x50));	// 12255                  push    50h ; 'P'       ; int ;~ 05BF:027F
cs=0x5bf;eip=0x000281; 	X(PUSH(0x38));	// 12256                  push    38h ; '8'       ; int ;~ 05BF:0281
cs=0x5bf;eip=0x000283; 	X(PUSH(ds));	// 12257                  push    ds ;~ 05BF:0283
cs=0x5bf;eip=0x000284; 	X(PUSH(offset(dseg,__achrisbamford)));	// 12258                  push    offset __aChrisBamford ; s ;~ 05BF:0284
cs=0x5bf;eip=0x000287; 	T(NOP);	// 12259                  nop ;~ 05BF:0287
cs=0x5bf;eip=0x000288; 	X(PUSH(cs));	// 12260                  push    cs ;~ 05BF:0288
cs=0x5bf;eip=0x000289; 	J(CALL(sub_14fb8,0));	// 12261                  call    near ptr sub_14FB8 ;~ 05BF:0289
cs=0x5bf;eip=0x00028c; 	T(ADD(sp, 0x0A));	// 12262                  add     sp, 0Ah ;~ 05BF:028C
cs=0x5bf;eip=0x00028f; 	X(PUSH(0x3E80));	// 12263                  push    3E80h           ; int ;~ 05BF:028F
cs=0x5bf;eip=0x000292; 	X(PUSH(0x78));	// 12264                  push    78h ; 'x'       ; int ;~ 05BF:0292
cs=0x5bf;eip=0x000294; 	X(PUSH(0x48));	// 12265                  push    48h ; 'H'       ; int ;~ 05BF:0294
cs=0x5bf;eip=0x000296; 	X(PUSH(ds));	// 12266                  push    ds ;~ 05BF:0296
cs=0x5bf;eip=0x000297; 	X(PUSH(offset(dseg,__aprogramming)));	// 12267                  push    offset __aProgramming ; s ;~ 05BF:0297
cs=0x5bf;eip=0x00029a; 	T(NOP);	// 12268                  nop ;~ 05BF:029A
cs=0x5bf;eip=0x00029b; 	X(PUSH(cs));	// 12269                  push    cs ;~ 05BF:029B
cs=0x5bf;eip=0x00029c; 	J(CALL(sub_14fb8,0));	// 12270                  call    near ptr sub_14FB8 ;~ 05BF:029C
cs=0x5bf;eip=0x00029f; 	T(ADD(sp, 0x0A));	// 12271                  add     sp, 0Ah ;~ 05BF:029F
cs=0x5bf;eip=0x0002a2; 	X(PUSH(0x3E80));	// 12272                  push    3E80h           ; int ;~ 05BF:02A2
cs=0x5bf;eip=0x0002a5; 	X(PUSH(0x8C));	// 12273                  push    8Ch ; '
cs=0x5bf;eip=0x0002a8; 	X(PUSH(0x38));	// 12274                  push    38h ; '8'       ; int ;~ 05BF:02A8
cs=0x5bf;eip=0x0002aa; 	X(PUSH(ds));	// 12275                  push    ds ;~ 05BF:02AA
cs=0x5bf;eip=0x0002ab; 	X(PUSH(offset(dseg,__adalecampbell)));	// 12276                  push    offset __aDaleCampbell ; s ;~ 05BF:02AB
cs=0x5bf;eip=0x0002ae; 	T(NOP);	// 12277                  nop ;~ 05BF:02AE
cs=0x5bf;eip=0x0002af; 	X(PUSH(cs));	// 12278                  push    cs ;~ 05BF:02AF
cs=0x5bf;eip=0x0002b0; 	J(CALL(sub_14fb8,0));	// 12279                  call    near ptr sub_14FB8 ;~ 05BF:02B0
cs=0x5bf;eip=0x0002b3; 	T(ADD(sp, 0x0A));	// 12280                  add     sp, 0Ah ;~ 05BF:02B3
cs=0x5bf;eip=0x0002b6; 	X(PUSH(0x3E80));	// 12281                  push    3E80h           ; int ;~ 05BF:02B6
cs=0x5bf;eip=0x0002b9; 	X(PUSH(0x0B4));	// 12282                  push    0B4h ; '
cs=0x5bf;eip=0x0002bc; 	X(PUSH(0x54));	// 12283                  push    54h ; 'T'       ; int ;~ 05BF:02BC
cs=0x5bf;eip=0x0002be; 	X(PUSH(ds));	// 12284                  push    ds ;~ 05BF:02BE
cs=0x5bf;eip=0x0002bf; 	X(PUSH(offset(dseg,__aadditional)));	// 12285                  push    offset __aAdditional ; s ;~ 05BF:02BF
cs=0x5bf;eip=0x0002c2; 	T(NOP);	// 12286                  nop ;~ 05BF:02C2
cs=0x5bf;eip=0x0002c3; 	X(PUSH(cs));	// 12287                  push    cs ;~ 05BF:02C3
cs=0x5bf;eip=0x0002c4; 	J(CALL(sub_14fb8,0));	// 12288                  call    near ptr sub_14FB8 ;~ 05BF:02C4
cs=0x5bf;eip=0x0002c7; 	T(ADD(sp, 0x0A));	// 12289                  add     sp, 0Ah ;~ 05BF:02C7
cs=0x5bf;eip=0x0002ca; 	X(PUSH(0x7D00));	// 12290                  push    7D00h           ; int ;~ 05BF:02CA
cs=0x5bf;eip=0x0002cd; 	X(PUSH(0));	// 12291                  push    0               ; int ;~ 05BF:02CD
cs=0x5bf;eip=0x0002cf; 	X(PUSH(0x48));	// 12292                  push    48h ; 'H'       ; int ;~ 05BF:02CF
cs=0x5bf;eip=0x0002d1; 	X(PUSH(ds));	// 12293                  push    ds ;~ 05BF:02D1
cs=0x5bf;eip=0x0002d2; 	X(PUSH(offset(dseg,__aprogramming_0)));	// 12294                  push    offset __aProgramming_0 ; s ;~ 05BF:02D2
cs=0x5bf;eip=0x0002d5; 	T(NOP);	// 12295                  nop ;~ 05BF:02D5
cs=0x5bf;eip=0x0002d6; 	X(PUSH(cs));	// 12296                  push    cs ;~ 05BF:02D6
cs=0x5bf;eip=0x0002d7; 	J(CALL(sub_14fb8,0));	// 12297                  call    near ptr sub_14FB8 ;~ 05BF:02D7
cs=0x5bf;eip=0x0002da; 	T(ADD(sp, 0x0A));	// 12298                  add     sp, 0Ah ;~ 05BF:02DA
cs=0x5bf;eip=0x0002dd; 	X(PUSH(0x7D00));	// 12299                  push    7D00h           ; int ;~ 05BF:02DD
cs=0x5bf;eip=0x0002e0; 	X(PUSH(0x14));	// 12300                  push    14h             ; int ;~ 05BF:02E0
cs=0x5bf;eip=0x0002e2; 	X(PUSH(0x40));	// 12301                  push    40h ; '@'       ; int ;~ 05BF:02E2
cs=0x5bf;eip=0x0002e4; 	X(PUSH(ds));	// 12302                  push    ds ;~ 05BF:02E4
cs=0x5bf;eip=0x0002e5; 	X(PUSH(offset(dseg,__achrisgurski)));	// 12303                  push    offset __aChrisGurski ; s ;~ 05BF:02E5
cs=0x5bf;eip=0x0002e8; 	T(NOP);	// 12304                  nop ;~ 05BF:02E8
cs=0x5bf;eip=0x0002e9; 	X(PUSH(cs));	// 12305                  push    cs ;~ 05BF:02E9
cs=0x5bf;eip=0x0002ea; 	J(CALL(sub_14fb8,0));	// 12306                  call    near ptr sub_14FB8 ;~ 05BF:02EA
cs=0x5bf;eip=0x0002ed; 	T(ADD(sp, 0x0A));	// 12307                  add     sp, 0Ah ;~ 05BF:02ED
cs=0x5bf;eip=0x0002f0; 	X(PUSH(0x7D00));	// 12308                  push    7D00h           ; int ;~ 05BF:02F0
cs=0x5bf;eip=0x0002f3; 	X(PUSH(0x28));	// 12309                  push    28h ; '('       ; int ;~ 05BF:02F3
cs=0x5bf;eip=0x0002f5; 	X(PUSH(0x30));	// 12310                  push    30h ; '0'       ; int ;~ 05BF:02F5
cs=0x5bf;eip=0x0002f7; 	X(PUSH(ds));	// 12311                  push    ds ;~ 05BF:02F7
cs=0x5bf;eip=0x0002f8; 	X(PUSH(offset(dseg,__ascottwoodrick)));	// 12312                  push    offset __aScottWoodrick ; s ;~ 05BF:02F8
cs=0x5bf;eip=0x0002fb; 	T(NOP);	// 12313                  nop ;~ 05BF:02FB
cs=0x5bf;eip=0x0002fc; 	X(PUSH(cs));	// 12314                  push    cs ;~ 05BF:02FC
cs=0x5bf;eip=0x0002fd; 	J(CALL(sub_14fb8,0));	// 12315                  call    near ptr sub_14FB8 ;~ 05BF:02FD
cs=0x5bf;eip=0x000300; 	T(ADD(sp, 0x0A));	// 12316                  add     sp, 0Ah ;~ 05BF:0300
cs=0x5bf;eip=0x000303; 	X(PUSH(0x7D00));	// 12317                  push    7D00h           ; int ;~ 05BF:0303
cs=0x5bf;eip=0x000306; 	X(PUSH(0x3C));	// 12318                  push    3Ch ; '<'       ; int ;~ 05BF:0306
cs=0x5bf;eip=0x000308; 	X(PUSH(0x2C));	// 12319                  push    2Ch ; ','       ; int ;~ 05BF:0308
cs=0x5bf;eip=0x00030a; 	X(PUSH(ds));	// 12320                  push    ds ;~ 05BF:030A
cs=0x5bf;eip=0x00030b; 	X(PUSH(offset(dseg,__amikebellantoni)));	// 12321                  push    offset __aMikeBellantoni ; s ;~ 05BF:030B
cs=0x5bf;eip=0x00030e; 	T(NOP);	// 12322                  nop ;~ 05BF:030E
cs=0x5bf;eip=0x00030f; 	X(PUSH(cs));	// 12323                  push    cs ;~ 05BF:030F
cs=0x5bf;eip=0x000310; 	J(CALL(sub_14fb8,0));	// 12324                  call    near ptr sub_14FB8 ;~ 05BF:0310
cs=0x5bf;eip=0x000313; 	T(ADD(sp, 0x0A));	// 12325                  add     sp, 0Ah ;~ 05BF:0313
cs=0x5bf;eip=0x000316; 	X(PUSH(0x7D00));	// 12326                  push    7D00h           ; int ;~ 05BF:0316
cs=0x5bf;eip=0x000319; 	X(PUSH(0x64));	// 12327                  push    64h ; 'd'       ; int ;~ 05BF:0319
cs=0x5bf;eip=0x00031b; 	X(PUSH(0x60));	// 12328                  push    60h ; '`'       ; int ;~ 05BF:031B
cs=0x5bf;eip=0x00031d; 	X(PUSH(ds));	// 12329                  push    ds ;~ 05BF:031D
cs=0x5bf;eip=0x00031e; 	X(PUSH(offset(dseg,__agraphics)));	// 12330                  push    offset __aGraphics ; s ;~ 05BF:031E
cs=0x5bf;eip=0x000321; 	T(NOP);	// 12331                  nop ;~ 05BF:0321
cs=0x5bf;eip=0x000322; 	X(PUSH(cs));	// 12332                  push    cs ;~ 05BF:0322
cs=0x5bf;eip=0x000323; 	J(CALL(sub_14fb8,0));	// 12333                  call    near ptr sub_14FB8 ;~ 05BF:0323
cs=0x5bf;eip=0x000326; 	T(ADD(sp, 0x0A));	// 12334                  add     sp, 0Ah ;~ 05BF:0326
cs=0x5bf;eip=0x000329; 	X(PUSH(0x7D00));	// 12335                  push    7D00h           ; int ;~ 05BF:0329
cs=0x5bf;eip=0x00032c; 	X(PUSH(0x78));	// 12336                  push    78h ; 'x'       ; int ;~ 05BF:032C
cs=0x5bf;eip=0x00032e; 	X(PUSH(0x48));	// 12337                  push    48h ; 'H'       ; int ;~ 05BF:032E
cs=0x5bf;eip=0x000330; 	X(PUSH(ds));	// 12338                  push    ds ;~ 05BF:0330
cs=0x5bf;eip=0x000331; 	X(PUSH(offset(dseg,__ascotforbes)));	// 12339                  push    offset __aScotForbes ; s ;~ 05BF:0331
cs=0x5bf;eip=0x000334; 	T(NOP);	// 12340                  nop ;~ 05BF:0334
cs=0x5bf;eip=0x000335; 	X(PUSH(cs));	// 12341                  push    cs ;~ 05BF:0335
cs=0x5bf;eip=0x000336; 	J(CALL(sub_14fb8,0));	// 12342                  call    near ptr sub_14FB8 ;~ 05BF:0336
cs=0x5bf;eip=0x000339; 	T(ADD(sp, 0x0A));	// 12343                  add     sp, 0Ah ;~ 05BF:0339
cs=0x5bf;eip=0x00033c; 	X(PUSH(0x7D00));	// 12344                  push    7D00h           ; int ;~ 05BF:033C
cs=0x5bf;eip=0x00033f; 	X(PUSH(0x8C));	// 12345                  push    8Ch ; '
cs=0x5bf;eip=0x000342; 	X(PUSH(0x28));	// 12346                  push    28h ; '('       ; int ;~ 05BF:0342
cs=0x5bf;eip=0x000344; 	X(PUSH(ds));	// 12347                  push    ds ;~ 05BF:0344
cs=0x5bf;eip=0x000345; 	X(PUSH(offset(dseg,__aandreamuzeroll)));	// 12348                  push    offset __aAndreaMuzeroll ; s ;~ 05BF:0345
cs=0x5bf;eip=0x000348; 	T(NOP);	// 12349                  nop ;~ 05BF:0348
cs=0x5bf;eip=0x000349; 	X(PUSH(cs));	// 12350                  push    cs ;~ 05BF:0349
cs=0x5bf;eip=0x00034a; 	J(CALL(sub_14fb8,0));	// 12351                  call    near ptr sub_14FB8 ;~ 05BF:034A
cs=0x5bf;eip=0x00034d; 	T(ADD(sp, 0x0A));	// 12352                  add     sp, 0Ah ;~ 05BF:034D
cs=0x5bf;eip=0x000350; 	X(PUSH(0x7D00));	// 12353                  push    7D00h           ; int ;~ 05BF:0350
cs=0x5bf;eip=0x000353; 	X(PUSH(0x0A0));	// 12354                  push    0A0h ; '
cs=0x5bf;eip=0x000356; 	X(PUSH(0x38));	// 12355                  push    38h ; '8'       ; int ;~ 05BF:0356
cs=0x5bf;eip=0x000358; 	X(PUSH(ds));	// 12356                  push    ds ;~ 05BF:0358
cs=0x5bf;eip=0x000359; 	X(PUSH(offset(dseg,__ajulieairoldi)));	// 12357                  push    offset __aJulieAiroldi ; s ;~ 05BF:0359
cs=0x5bf;eip=0x00035c; 	T(NOP);	// 12358                  nop ;~ 05BF:035C
cs=0x5bf;eip=0x00035d; 	X(PUSH(cs));	// 12359                  push    cs ;~ 05BF:035D
cs=0x5bf;eip=0x00035e; 	J(CALL(sub_14fb8,0));	// 12360                  call    near ptr sub_14FB8 ;~ 05BF:035E
cs=0x5bf;eip=0x000361; 	T(ADD(sp, 0x0A));	// 12361                  add     sp, 0Ah ;~ 05BF:0361
cs=0x5bf;eip=0x000364; 	X(PUSH(0x7D00));	// 12362                  push    7D00h           ; int ;~ 05BF:0364
cs=0x5bf;eip=0x000367; 	X(PUSH(0x0B4));	// 12363                  push    0B4h ; '
cs=0x5bf;eip=0x00036a; 	X(PUSH(0x48));	// 12364                  push    48h ; 'H'       ; int ;~ 05BF:036A
cs=0x5bf;eip=0x00036c; 	X(PUSH(ds));	// 12365                  push    ds ;~ 05BF:036C
cs=0x5bf;eip=0x00036d; 	X(PUSH(offset(dseg,__achinmeiyu)));	// 12366                  push    offset __aChinMeiYu ; s ;~ 05BF:036D
cs=0x5bf;eip=0x000370; 	T(NOP);	// 12367                  nop ;~ 05BF:0370
cs=0x5bf;eip=0x000371; 	X(PUSH(cs));	// 12368                  push    cs ;~ 05BF:0371
cs=0x5bf;eip=0x000372; 	J(CALL(sub_14fb8,0));	// 12369                  call    near ptr sub_14FB8 ;~ 05BF:0372
cs=0x5bf;eip=0x000375; 	T(ADD(sp, 0x0A));	// 12370                  add     sp, 0Ah ;~ 05BF:0375
cs=0x5bf;eip=0x000378; 	X(PUSH(0x0BB80));	// 12371                  push    0BB80h          ; int ;~ 05BF:0378
cs=0x5bf;eip=0x00037b; 	X(PUSH(0));	// 12372                  push    0               ; int ;~ 05BF:037B
cs=0x5bf;eip=0x00037d; 	X(PUSH(0x50));	// 12373                  push    50h ; 'P'       ; int ;~ 05BF:037D
cs=0x5bf;eip=0x00037f; 	X(PUSH(ds));	// 12374                  push    ds ;~ 05BF:037F
cs=0x5bf;eip=0x000380; 	X(PUSH(offset(dseg,__aerikcasey)));	// 12375                  push    offset __aErikCasey ; s ;~ 05BF:0380
cs=0x5bf;eip=0x000383; 	T(NOP);	// 12376                  nop ;~ 05BF:0383
cs=0x5bf;eip=0x000384; 	X(PUSH(cs));	// 12377                  push    cs ;~ 05BF:0384
cs=0x5bf;eip=0x000385; 	J(CALL(sub_14fb8,0));	// 12378                  call    near ptr sub_14FB8 ;~ 05BF:0385
cs=0x5bf;eip=0x000388; 	T(ADD(sp, 0x0A));	// 12379                  add     sp, 0Ah ;~ 05BF:0388
cs=0x5bf;eip=0x00038b; 	X(PUSH(0x0BB80));	// 12380                  push    0BB80h          ; int ;~ 05BF:038B
cs=0x5bf;eip=0x00038e; 	X(PUSH(0x14));	// 12381                  push    14h             ; int ;~ 05BF:038E
cs=0x5bf;eip=0x000390; 	X(PUSH(0x30));	// 12382                  push    30h ; '0'       ; int ;~ 05BF:0390
cs=0x5bf;eip=0x000392; 	X(PUSH(ds));	// 12383                  push    ds ;~ 05BF:0392
cs=0x5bf;eip=0x000393; 	X(PUSH(offset(dseg,__achrisbeatrice)));	// 12384                  push    offset __aChrisBeatrice ; s ;~ 05BF:0393
cs=0x5bf;eip=0x000396; 	T(NOP);	// 12385                  nop ;~ 05BF:0396
cs=0x5bf;eip=0x000397; 	X(PUSH(cs));	// 12386                  push    cs ;~ 05BF:0397
cs=0x5bf;eip=0x000398; 	J(CALL(sub_14fb8,0));	// 12387                  call    near ptr sub_14FB8 ;~ 05BF:0398
cs=0x5bf;eip=0x00039b; 	T(ADD(sp, 0x0A));	// 12388                  add     sp, 0Ah ;~ 05BF:039B
cs=0x5bf;eip=0x00039e; 	X(PUSH(0x0BB80));	// 12389                  push    0BB80h          ; int ;~ 05BF:039E
cs=0x5bf;eip=0x0003a1; 	X(PUSH(0x28));	// 12390                  push    28h ; '('       ; int ;~ 05BF:03A1
cs=0x5bf;eip=0x0003a3; 	X(PUSH(0x50));	// 12391                  push    50h ; 'P'       ; int ;~ 05BF:03A3
cs=0x5bf;eip=0x0003a5; 	X(PUSH(ds));	// 12392                  push    ds ;~ 05BF:03A5
cs=0x5bf;eip=0x0003a6; 	X(PUSH(offset(dseg,__aheidimann)));	// 12393                  push    offset __aHeidiMann ; s ;~ 05BF:03A6
cs=0x5bf;eip=0x0003a9; 	T(NOP);	// 12394                  nop ;~ 05BF:03A9
cs=0x5bf;eip=0x0003aa; 	X(PUSH(cs));	// 12395                  push    cs ;~ 05BF:03AA
cs=0x5bf;eip=0x0003ab; 	J(CALL(sub_14fb8,0));	// 12396                  call    near ptr sub_14FB8 ;~ 05BF:03AB
cs=0x5bf;eip=0x0003ae; 	T(ADD(sp, 0x0A));	// 12397                  add     sp, 0Ah ;~ 05BF:03AE
cs=0x5bf;eip=0x0003b1; 	X(PUSH(0x0BB80));	// 12398                  push    0BB80h          ; int ;~ 05BF:03B1
cs=0x5bf;eip=0x0003b4; 	X(PUSH(0x3C));	// 12399                  push    3Ch ; '<'       ; int ;~ 05BF:03B4
cs=0x5bf;eip=0x0003b6; 	X(PUSH(0x40));	// 12400                  push    40h ; '@'       ; int ;~ 05BF:03B6
cs=0x5bf;eip=0x0003b8; 	X(PUSH(ds));	// 12401                  push    ds ;~ 05BF:03B8
cs=0x5bf;eip=0x0003b9; 	X(PUSH(offset(dseg,__alilgangster)));	// 12402                  push    offset __aLilGangster ; s ;~ 05BF:03B9
cs=0x5bf;eip=0x0003bc; 	T(NOP);	// 12403                  nop ;~ 05BF:03BC
cs=0x5bf;eip=0x0003bd; 	X(PUSH(cs));	// 12404                  push    cs ;~ 05BF:03BD
cs=0x5bf;eip=0x0003be; 	J(CALL(sub_14fb8,0));	// 12405                  call    near ptr sub_14FB8 ;~ 05BF:03BE
cs=0x5bf;eip=0x0003c1; 	T(ADD(sp, 0x0A));	// 12406                  add     sp, 0Ah ;~ 05BF:03C1
cs=0x5bf;eip=0x0003c4; 	X(PUSH(0x0BB80));	// 12407                  push    0BB80h          ; int ;~ 05BF:03C4
cs=0x5bf;eip=0x0003c7; 	X(PUSH(0x64));	// 12408                  push    64h ; 'd'       ; int ;~ 05BF:03C7
cs=0x5bf;eip=0x0003c9; 	X(PUSH(0x28));	// 12409                  push    28h ; '('       ; int ;~ 05BF:03C9
cs=0x5bf;eip=0x0003cb; 	X(PUSH(ds));	// 12410                  push    ds ;~ 05BF:03CB
cs=0x5bf;eip=0x0003cc; 	X(PUSH(offset(dseg,__asoundandmusic)));	// 12411                  push    offset __aSoundAndMusic ; s ;~ 05BF:03CC
cs=0x5bf;eip=0x0003cf; 	T(NOP);	// 12412                  nop ;~ 05BF:03CF
cs=0x5bf;eip=0x0003d0; 	X(PUSH(cs));	// 12413                  push    cs ;~ 05BF:03D0
cs=0x5bf;eip=0x0003d1; 	J(CALL(sub_14fb8,0));	// 12414                  call    near ptr sub_14FB8 ;~ 05BF:03D1
cs=0x5bf;eip=0x0003d4; 	T(ADD(sp, 0x0A));	// 12415                  add     sp, 0Ah ;~ 05BF:03D4
cs=0x5bf;eip=0x0003d7; 	X(PUSH(0x0BB80));	// 12416                  push    0BB80h          ; int ;~ 05BF:03D7
cs=0x5bf;eip=0x0003da; 	X(PUSH(0x78));	// 12417                  push    78h ; 'x'       ; int ;~ 05BF:03DA
cs=0x5bf;eip=0x0003dc; 	X(PUSH(0x40));	// 12418                  push    40h ; '@'       ; int ;~ 05BF:03DC
cs=0x5bf;eip=0x0003de; 	X(PUSH(ds));	// 12419                  push    ds ;~ 05BF:03DE
cs=0x5bf;eip=0x0003df; 	X(PUSH(offset(dseg,__achrisdenman)));	// 12420                  push    offset __aChrisDenman ; s ;~ 05BF:03DF
cs=0x5bf;eip=0x0003e2; 	T(NOP);	// 12421                  nop ;~ 05BF:03E2
cs=0x5bf;eip=0x0003e3; 	X(PUSH(cs));	// 12422                  push    cs ;~ 05BF:03E3
cs=0x5bf;eip=0x0003e4; 	J(CALL(sub_14fb8,0));	// 12423                  call    near ptr sub_14FB8 ;~ 05BF:03E4
cs=0x5bf;eip=0x0003e7; 	T(ADD(sp, 0x0A));	// 12424                  add     sp, 0Ah ;~ 05BF:03E7
cs=0x5bf;eip=0x0003ea; 	X(PUSH(0x0BB80));	// 12425                  push    0BB80h          ; int ;~ 05BF:03EA
cs=0x5bf;eip=0x0003ed; 	X(PUSH(0x8C));	// 12426                  push    8Ch ; '
cs=0x5bf;eip=0x0003f0; 	X(PUSH(0x28));	// 12427                  push    28h ; '('       ; int ;~ 05BF:03F0
cs=0x5bf;eip=0x0003f2; 	X(PUSH(ds));	// 12428                  push    ds ;~ 05BF:03F2
cs=0x5bf;eip=0x0003f3; 	X(PUSH(offset(dseg,__ajasonprinaldi)));	// 12429                  push    offset __aJasonPRinaldi ; s ;~ 05BF:03F3
cs=0x5bf;eip=0x0003f6; 	T(NOP);	// 12430                  nop ;~ 05BF:03F6
cs=0x5bf;eip=0x0003f7; 	X(PUSH(cs));	// 12431                  push    cs ;~ 05BF:03F7
cs=0x5bf;eip=0x0003f8; 	J(CALL(sub_14fb8,0));	// 12432                  call    near ptr sub_14FB8 ;~ 05BF:03F8
cs=0x5bf;eip=0x0003fb; 	T(ADD(sp, 0x0A));	// 12433                  add     sp, 0Ah ;~ 05BF:03FB
cs=0x5bf;eip=0x0003fe; 	X(PUSH(0x0BB80));	// 12434                  push    0BB80h          ; int ;~ 05BF:03FE
cs=0x5bf;eip=0x000401; 	X(PUSH(0x0B4));	// 12435                  push    0B4h ; '
cs=0x5bf;eip=0x000404; 	X(PUSH(0x38));	// 12436                  push    38h ; '8'       ; int ;~ 05BF:0404
cs=0x5bf;eip=0x000406; 	X(PUSH(ds));	// 12437                  push    ds ;~ 05BF:0406
cs=0x5bf;eip=0x000407; 	X(PUSH(offset(dseg,__adocumentation)));	// 12438                  push    offset __aDocumentation ; s ;~ 05BF:0407
cs=0x5bf;eip=0x00040a; 	T(NOP);	// 12439                  nop ;~ 05BF:040A
cs=0x5bf;eip=0x00040b; 	X(PUSH(cs));	// 12440                  push    cs ;~ 05BF:040B
cs=0x5bf;eip=0x00040c; 	J(CALL(sub_14fb8,0));	// 12441                  call    near ptr sub_14FB8 ;~ 05BF:040C
cs=0x5bf;eip=0x00040f; 	T(ADD(sp, 0x0A));	// 12442                  add     sp, 0Ah ;~ 05BF:040F
cs=0x5bf;eip=0x000412; 	T(NOP);	// 12443                  nop ;~ 05BF:0412
cs=0x5bf;eip=0x000413; 	X(PUSH(cs));	// 12444                  push    cs ;~ 05BF:0413
cs=0x5bf;eip=0x000414; 	J(CALL(sub_14e99,0));	// 12445                  call    near ptr sub_14E99 ;~ 05BF:0414
cs=0x5bf;eip=0x000417; 	X(PUSH(0x0BB80));	// 12446                  push    0BB80h ;~ 05BF:0417
cs=0x5bf;eip=0x00041a; 	X(PUSH(0));	// 12447                  push    0 ;~ 05BF:041A
cs=0x5bf;eip=0x00041c; 	T(NOP);	// 12448                  nop ;~ 05BF:041C
cs=0x5bf;eip=0x00041d; 	X(PUSH(cs));	// 12449                  push    cs ;~ 05BF:041D
cs=0x5bf;eip=0x00041e; 	J(CALL(sub_15096,0));	// 12450                  call    near ptr sub_15096 ;~ 05BF:041E
cs=0x5bf;eip=0x000421; 	T(ADD(sp, 4));	// 12451                  add     sp, 4 ;~ 05BF:0421
cs=0x5bf;eip=0x000424; 	X(PUSH(0));	// 12452                  push    0 ;~ 05BF:0424
cs=0x5bf;eip=0x000426; 	X(PUSH(0x0BB80));	// 12453                  push    0BB80h ;~ 05BF:0426
cs=0x5bf;eip=0x000429; 	J(CALLF(sub_1730d,0));	// 12454                  call    sub_1730D ;~ 05BF:0429
cs=0x5bf;eip=0x00042e; 	T(ADD(sp, 4));	// 12455                  add     sp, 4 ;~ 05BF:042E
cs=0x5bf;eip=0x000431; 	X(PUSH(0));	// 12456                  push    0 ;~ 05BF:0431
cs=0x5bf;eip=0x000433; 	X(PUSH(0x3E80));	// 12457                  push    3E80h ;~ 05BF:0433
cs=0x5bf;eip=0x000436; 	J(CALLF(sub_172a3,0));	// 12458                  call    sub_172A3 ;~ 05BF:0436
cs=0x5bf;eip=0x00043b; 	T(ADD(sp, 4));	// 12459                  add     sp, 4 ;~ 05BF:043B
cs=0x5bf;eip=0x00043e; 	X(PUSH(0));	// 12460                  push    0 ;~ 05BF:043E
cs=0x5bf;eip=0x000440; 	X(PUSH(0x7D00));	// 12461                  push    7D00h ;~ 05BF:0440
cs=0x5bf;eip=0x000443; 	J(CALLF(sub_172a3,0));	// 12462                  call    sub_172A3 ;~ 05BF:0443
cs=0x5bf;eip=0x000448; 	T(ADD(sp, 4));	// 12463                  add     sp, 4 ;~ 05BF:0448
cs=0x5bf;eip=0x00044b; 	X(PUSH(0));	// 12464                  push    0 ;~ 05BF:044B
cs=0x5bf;eip=0x00044d; 	X(PUSH(0x0BB80));	// 12465                  push    0BB80h ;~ 05BF:044D
cs=0x5bf;eip=0x000450; 	J(CALLF(sub_172a3,0));	// 12466                  call    sub_172A3 ;~ 05BF:0450
cs=0x5bf;eip=0x000455; 	T(ADD(sp, 4));	// 12467                  add     sp, 4 ;~ 05BF:0455
cs=0x5bf;eip=0x000458; 	X(PUSH(0x3E80));	// 12468                  push    3E80h           ; int ;~ 05BF:0458
cs=0x5bf;eip=0x00045b; 	X(PUSH(0));	// 12469                  push    0               ; int ;~ 05BF:045B
cs=0x5bf;eip=0x00045d; 	X(PUSH(0x10));	// 12470                  push    10h             ; int ;~ 05BF:045D
cs=0x5bf;eip=0x00045f; 	X(PUSH(ds));	// 12471                  push    ds ;~ 05BF:045F
cs=0x5bf;eip=0x000460; 	X(PUSH(offset(dseg,__ajenniferhawtho)));	// 12472                  push    offset __aJenniferHawtho ; s ;~ 05BF:0460
cs=0x5bf;eip=0x000463; 	T(NOP);	// 12473                  nop ;~ 05BF:0463
cs=0x5bf;eip=0x000464; 	X(PUSH(cs));	// 12474                  push    cs ;~ 05BF:0464
cs=0x5bf;eip=0x000465; 	J(CALL(sub_14fb8,0));	// 12475                  call    near ptr sub_14FB8 ;~ 05BF:0465
cs=0x5bf;eip=0x000468; 	T(ADD(sp, 0x0A));	// 12476                  add     sp, 0Ah ;~ 05BF:0468
cs=0x5bf;eip=0x00046b; 	X(PUSH(0x3E80));	// 12477                  push    3E80h           ; int ;~ 05BF:046B
cs=0x5bf;eip=0x00046e; 	X(PUSH(0x28));	// 12478                  push    28h ; '('       ; int ;~ 05BF:046E
cs=0x5bf;eip=0x000470; 	X(PUSH(0x60));	// 12479                  push    60h ; '`'       ; int ;~ 05BF:0470
cs=0x5bf;eip=0x000472; 	X(PUSH(ds));	// 12480                  push    ds ;~ 05BF:0472
cs=0x5bf;eip=0x000473; 	X(PUSH(offset(dseg,__aresearch)));	// 12481                  push    offset __aResearch ; s ;~ 05BF:0473
cs=0x5bf;eip=0x000476; 	T(NOP);	// 12482                  nop ;~ 05BF:0476
cs=0x5bf;eip=0x000477; 	X(PUSH(cs));	// 12483                  push    cs ;~ 05BF:0477
cs=0x5bf;eip=0x000478; 	J(CALL(sub_14fb8,0));	// 12484                  call    near ptr sub_14FB8 ;~ 05BF:0478
cs=0x5bf;eip=0x00047b; 	T(ADD(sp, 0x0A));	// 12485                  add     sp, 0Ah ;~ 05BF:047B
cs=0x5bf;eip=0x00047e; 	X(PUSH(0x3E80));	// 12486                  push    3E80h           ; int ;~ 05BF:047E
cs=0x5bf;eip=0x000481; 	X(PUSH(0x3C));	// 12487                  push    3Ch ; '<'       ; int ;~ 05BF:0481
cs=0x5bf;eip=0x000483; 	X(PUSH(0x30));	// 12488                  push    30h ; '0'       ; int ;~ 05BF:0483
cs=0x5bf;eip=0x000485; 	X(PUSH(ds));	// 12489                  push    ds ;~ 05BF:0485
cs=0x5bf;eip=0x000486; 	X(PUSH(offset(dseg,__asteveserafino)));	// 12490                  push    offset __aSteveSerafino ; s ;~ 05BF:0486
cs=0x5bf;eip=0x000489; 	T(NOP);	// 12491                  nop ;~ 05BF:0489
cs=0x5bf;eip=0x00048a; 	X(PUSH(cs));	// 12492                  push    cs ;~ 05BF:048A
cs=0x5bf;eip=0x00048b; 	J(CALL(sub_14fb8,0));	// 12493                  call    near ptr sub_14FB8 ;~ 05BF:048B
cs=0x5bf;eip=0x00048e; 	T(ADD(sp, 0x0A));	// 12494                  add     sp, 0Ah ;~ 05BF:048E
cs=0x5bf;eip=0x000491; 	X(PUSH(0x3E80));	// 12495                  push    3E80h           ; int ;~ 05BF:0491
cs=0x5bf;eip=0x000494; 	X(PUSH(0x50));	// 12496                  push    50h ; 'P'       ; int ;~ 05BF:0494
cs=0x5bf;eip=0x000496; 	X(PUSH(0x40));	// 12497                  push    40h ; '@'       ; int ;~ 05BF:0496
cs=0x5bf;eip=0x000498; 	X(PUSH(ds));	// 12498                  push    ds ;~ 05BF:0498
cs=0x5bf;eip=0x000499; 	X(PUSH(offset(dseg,__achrisfoster)));	// 12499                  push    offset __aChrisFoster ; s ;~ 05BF:0499
cs=0x5bf;eip=0x00049c; 	T(NOP);	// 12500                  nop ;~ 05BF:049C
cs=0x5bf;eip=0x00049d; 	X(PUSH(cs));	// 12501                  push    cs ;~ 05BF:049D
cs=0x5bf;eip=0x00049e; 	J(CALL(sub_14fb8,0));	// 12502                  call    near ptr sub_14FB8 ;~ 05BF:049E
cs=0x5bf;eip=0x0004a1; 	T(ADD(sp, 0x0A));	// 12503                  add     sp, 0Ah ;~ 05BF:04A1
cs=0x5bf;eip=0x0004a4; 	X(PUSH(0x3E80));	// 12504                  push    3E80h           ; int ;~ 05BF:04A4
cs=0x5bf;eip=0x0004a7; 	X(PUSH(0x64));	// 12505                  push    64h ; 'd'       ; int ;~ 05BF:04A7
cs=0x5bf;eip=0x0004a9; 	X(PUSH(0x38));	// 12506                  push    38h ; '8'       ; int ;~ 05BF:04A9
cs=0x5bf;eip=0x0004ab; 	X(PUSH(ds));	// 12507                  push    ds ;~ 05BF:04AB
cs=0x5bf;eip=0x0004ac; 	X(PUSH(offset(dseg,__amarksaunders)));	// 12508                  push    offset __aMarkSaunders ; s ;~ 05BF:04AC
cs=0x5bf;eip=0x0004af; 	T(NOP);	// 12509                  nop ;~ 05BF:04AF
cs=0x5bf;eip=0x0004b0; 	X(PUSH(cs));	// 12510                  push    cs ;~ 05BF:04B0
cs=0x5bf;eip=0x0004b1; 	J(CALL(sub_14fb8,0));	// 12511                  call    near ptr sub_14FB8 ;~ 05BF:04B1
cs=0x5bf;eip=0x0004b4; 	T(ADD(sp, 0x0A));	// 12512                  add     sp, 0Ah ;~ 05BF:04B4
cs=0x5bf;eip=0x0004b7; 	X(PUSH(0x3E80));	// 12513                  push    3E80h           ; int ;~ 05BF:04B7
cs=0x5bf;eip=0x0004ba; 	X(PUSH(0x78));	// 12514                  push    78h ; 'x'       ; int ;~ 05BF:04BA
cs=0x5bf;eip=0x0004bc; 	X(PUSH(0x48));	// 12515                  push    48h ; 'H'       ; int ;~ 05BF:04BC
cs=0x5bf;eip=0x0004be; 	X(PUSH(ds));	// 12516                  push    ds ;~ 05BF:04BE
cs=0x5bf;eip=0x0004bf; 	X(PUSH(offset(dseg,__alaurelduff)));	// 12517                  push    offset __aLaurelDuff ; s ;~ 05BF:04BF
cs=0x5bf;eip=0x0004c2; 	T(NOP);	// 12518                  nop ;~ 05BF:04C2
cs=0x5bf;eip=0x0004c3; 	X(PUSH(cs));	// 12519                  push    cs ;~ 05BF:04C3
cs=0x5bf;eip=0x0004c4; 	J(CALL(sub_14fb8,0));	// 12520                  call    near ptr sub_14FB8 ;~ 05BF:04C4
cs=0x5bf;eip=0x0004c7; 	T(ADD(sp, 0x0A));	// 12521                  add     sp, 0Ah ;~ 05BF:04C7
cs=0x5bf;eip=0x0004ca; 	X(PUSH(0x3E80));	// 12522                  push    3E80h           ; int ;~ 05BF:04CA
cs=0x5bf;eip=0x0004cd; 	X(PUSH(0x0A0));	// 12523                  push    0A0h ; '
cs=0x5bf;eip=0x0004d0; 	X(PUSH(0x68));	// 12524                  push    68h ; 'h'       ; int ;~ 05BF:04D0
cs=0x5bf;eip=0x0004d2; 	X(PUSH(ds));	// 12525                  push    ds ;~ 05BF:04D2
cs=0x5bf;eip=0x0004d3; 	X(PUSH(offset(dseg,__atesting)));	// 12526                  push    offset __aTesting ; s ;~ 05BF:04D3
cs=0x5bf;eip=0x0004d6; 	T(NOP);	// 12527                  nop ;~ 05BF:04D6
cs=0x5bf;eip=0x0004d7; 	X(PUSH(cs));	// 12528                  push    cs ;~ 05BF:04D7
cs=0x5bf;eip=0x0004d8; 	J(CALL(sub_14fb8,0));	// 12529                  call    near ptr sub_14FB8 ;~ 05BF:04D8
cs=0x5bf;eip=0x0004db; 	T(ADD(sp, 0x0A));	// 12530                  add     sp, 0Ah ;~ 05BF:04DB
cs=0x5bf;eip=0x0004de; 	X(PUSH(0x3E80));	// 12531                  push    3E80h           ; int ;~ 05BF:04DE
cs=0x5bf;eip=0x0004e1; 	X(PUSH(0x0B4));	// 12532                  push    0B4h ; '
cs=0x5bf;eip=0x0004e4; 	X(PUSH(0x30));	// 12533                  push    30h ; '0'       ; int ;~ 05BF:04E4
cs=0x5bf;eip=0x0004e6; 	X(PUSH(ds));	// 12534                  push    ds ;~ 05BF:04E6
cs=0x5bf;eip=0x0004e7; 	X(PUSH(offset(dseg,__aedwardpugsley)));	// 12535                  push    offset __aEdwardPugsley ; s ;~ 05BF:04E7
cs=0x5bf;eip=0x0004ea; 	T(NOP);	// 12536                  nop ;~ 05BF:04EA
cs=0x5bf;eip=0x0004eb; 	X(PUSH(cs));	// 12537                  push    cs ;~ 05BF:04EB
cs=0x5bf;eip=0x0004ec; 	J(CALL(sub_14fb8,0));	// 12538                  call    near ptr sub_14FB8 ;~ 05BF:04EC
cs=0x5bf;eip=0x0004ef; 	T(ADD(sp, 0x0A));	// 12539                  add     sp, 0Ah ;~ 05BF:04EF
cs=0x5bf;eip=0x0004f2; 	X(PUSH(0x7D00));	// 12540                  push    7D00h           ; int ;~ 05BF:04F2
cs=0x5bf;eip=0x0004f5; 	X(PUSH(0));	// 12541                  push    0               ; int ;~ 05BF:04F5
cs=0x5bf;eip=0x0004f7; 	X(PUSH(0x30));	// 12542                  push    30h ; '0'       ; int ;~ 05BF:04F7
cs=0x5bf;eip=0x0004f9; 	X(PUSH(ds));	// 12543                  push    ds ;~ 05BF:04F9
cs=0x5bf;eip=0x0004fa; 	X(PUSH(offset(dseg,__asteveserafino_0)));	// 12544                  push    offset __aSteveSerafino_0 ; s ;~ 05BF:04FA
cs=0x5bf;eip=0x0004fd; 	T(NOP);	// 12545                  nop ;~ 05BF:04FD
cs=0x5bf;eip=0x0004fe; 	X(PUSH(cs));	// 12546                  push    cs ;~ 05BF:04FE
cs=0x5bf;eip=0x0004ff; 	J(CALL(sub_14fb8,0));	// 12547                  call    near ptr sub_14FB8 ;~ 05BF:04FF
cs=0x5bf;eip=0x000502; 	T(ADD(sp, 0x0A));	// 12548                  add     sp, 0Ah ;~ 05BF:0502
cs=0x5bf;eip=0x000505; 	X(PUSH(0x7D00));	// 12549                  push    7D00h           ; int ;~ 05BF:0505
cs=0x5bf;eip=0x000508; 	X(PUSH(0x14));	// 12550                  push    14h             ; int ;~ 05BF:0508
cs=0x5bf;eip=0x00050a; 	X(PUSH(0x38));	// 12551                  push    38h ; '8'       ; int ;~ 05BF:050A
cs=0x5bf;eip=0x00050c; 	X(PUSH(ds));	// 12552                  push    ds ;~ 05BF:050C
cs=0x5bf;eip=0x00050d; 	X(PUSH(offset(dseg,__agregorkoomey)));	// 12553                  push    offset __aGregorKoomey ; s ;~ 05BF:050D
cs=0x5bf;eip=0x000510; 	T(NOP);	// 12554                  nop ;~ 05BF:0510
cs=0x5bf;eip=0x000511; 	X(PUSH(cs));	// 12555                  push    cs ;~ 05BF:0511
cs=0x5bf;eip=0x000512; 	J(CALL(sub_14fb8,0));	// 12556                  call    near ptr sub_14FB8 ;~ 05BF:0512
cs=0x5bf;eip=0x000515; 	T(ADD(sp, 0x0A));	// 12557                  add     sp, 0Ah ;~ 05BF:0515
cs=0x5bf;eip=0x000518; 	X(PUSH(0x7D00));	// 12558                  push    7D00h           ; int ;~ 05BF:0518
cs=0x5bf;eip=0x00051b; 	X(PUSH(0x28));	// 12559                  push    28h ; '('       ; int ;~ 05BF:051B
cs=0x5bf;eip=0x00051d; 	X(PUSH(0x40));	// 12560                  push    40h ; '@'       ; int ;~ 05BF:051D
cs=0x5bf;eip=0x00051f; 	X(PUSH(ds));	// 12561                  push    ds ;~ 05BF:051F
cs=0x5bf;eip=0x000520; 	X(PUSH(offset(dseg,__aglennoliver)));	// 12562                  push    offset __aGlennOliver ; s ;~ 05BF:0520
cs=0x5bf;eip=0x000523; 	T(NOP);	// 12563                  nop ;~ 05BF:0523
cs=0x5bf;eip=0x000524; 	X(PUSH(cs));	// 12564                  push    cs ;~ 05BF:0524
cs=0x5bf;eip=0x000525; 	J(CALL(sub_14fb8,0));	// 12565                  call    near ptr sub_14FB8 ;~ 05BF:0525
cs=0x5bf;eip=0x000528; 	T(ADD(sp, 0x0A));	// 12566                  add     sp, 0Ah ;~ 05BF:0528
cs=0x5bf;eip=0x00052b; 	X(PUSH(0x7D00));	// 12567                  push    7D00h           ; int ;~ 05BF:052B
cs=0x5bf;eip=0x00052e; 	X(PUSH(0x3C));	// 12568                  push    3Ch ; '<'       ; int ;~ 05BF:052E
cs=0x5bf;eip=0x000530; 	X(PUSH(0x28));	// 12569                  push    28h ; '('       ; int ;~ 05BF:0530
cs=0x5bf;eip=0x000532; 	X(PUSH(ds));	// 12570                  push    ds ;~ 05BF:0532
cs=0x5bf;eip=0x000533; 	X(PUSH(offset(dseg,__awilliambarnard)));	// 12571                  push    offset __aWilliamBarnard ; s ;~ 05BF:0533
cs=0x5bf;eip=0x000536; 	T(NOP);	// 12572                  nop ;~ 05BF:0536
cs=0x5bf;eip=0x000537; 	X(PUSH(cs));	// 12573                  push    cs ;~ 05BF:0537
cs=0x5bf;eip=0x000538; 	J(CALL(sub_14fb8,0));	// 12574                  call    near ptr sub_14FB8 ;~ 05BF:0538
cs=0x5bf;eip=0x00053b; 	T(ADD(sp, 0x0A));	// 12575                  add     sp, 0Ah ;~ 05BF:053B
cs=0x5bf;eip=0x00053e; 	X(PUSH(0x7D00));	// 12576                  push    7D00h           ; int ;~ 05BF:053E
cs=0x5bf;eip=0x000541; 	X(PUSH(0x50));	// 12577                  push    50h ; 'P'       ; int ;~ 05BF:0541
cs=0x5bf;eip=0x000543; 	X(PUSH(0x38));	// 12578                  push    38h ; '8'       ; int ;~ 05BF:0543
cs=0x5bf;eip=0x000545; 	X(PUSH(ds));	// 12579                  push    ds ;~ 05BF:0545
cs=0x5bf;eip=0x000546; 	X(PUSH(offset(dseg,__ahoseabattles)));	// 12580                  push    offset __aHoseaBattles ; s ;~ 05BF:0546
cs=0x5bf;eip=0x000549; 	T(NOP);	// 12581                  nop ;~ 05BF:0549
cs=0x5bf;eip=0x00054a; 	X(PUSH(cs));	// 12582                  push    cs ;~ 05BF:054A
cs=0x5bf;eip=0x00054b; 	J(CALL(sub_14fb8,0));	// 12583                  call    near ptr sub_14FB8 ;~ 05BF:054B
cs=0x5bf;eip=0x00054e; 	T(ADD(sp, 0x0A));	// 12584                  add     sp, 0Ah ;~ 05BF:054E
cs=0x5bf;eip=0x000551; 	X(PUSH(0x7D00));	// 12585                  push    7D00h           ; int ;~ 05BF:0551
cs=0x5bf;eip=0x000554; 	X(PUSH(0x64));	// 12586                  push    64h ; 'd'       ; int ;~ 05BF:0554
cs=0x5bf;eip=0x000556; 	X(PUSH(0x58));	// 12587                  push    58h ; 'X'       ; int ;~ 05BF:0556
cs=0x5bf;eip=0x000558; 	X(PUSH(ds));	// 12588                  push    ds ;~ 05BF:0558
cs=0x5bf;eip=0x000559; 	X(PUSH(offset(dseg,__alouisely)));	// 12589                  push    offset __aLouisEly ; s ;~ 05BF:0559
cs=0x5bf;eip=0x00055c; 	T(NOP);	// 12590                  nop ;~ 05BF:055C
cs=0x5bf;eip=0x00055d; 	X(PUSH(cs));	// 12591                  push    cs ;~ 05BF:055D
cs=0x5bf;eip=0x00055e; 	J(CALL(sub_14fb8,0));	// 12592                  call    near ptr sub_14FB8 ;~ 05BF:055E
cs=0x5bf;eip=0x000561; 	T(ADD(sp, 0x0A));	// 12593                  add     sp, 0Ah ;~ 05BF:0561
cs=0x5bf;eip=0x000564; 	X(PUSH(0x7D00));	// 12594                  push    7D00h           ; int ;~ 05BF:0564
cs=0x5bf;eip=0x000567; 	X(PUSH(0x78));	// 12595                  push    78h ; 'x'       ; int ;~ 05BF:0567
cs=0x5bf;eip=0x000569; 	X(PUSH(0x40));	// 12596                  push    40h ; '@'       ; int ;~ 05BF:0569
cs=0x5bf;eip=0x00056b; 	X(PUSH(ds));	// 12597                  push    ds ;~ 05BF:056B
cs=0x5bf;eip=0x00056c; 	X(PUSH(offset(dseg,__achrisfoster_0)));	// 12598                  push    offset __aChrisFoster_0 ; s ;~ 05BF:056C
cs=0x5bf;eip=0x00056f; 	T(NOP);	// 12599                  nop ;~ 05BF:056F
cs=0x5bf;eip=0x000570; 	X(PUSH(cs));	// 12600                  push    cs ;~ 05BF:0570
cs=0x5bf;eip=0x000571; 	J(CALL(sub_14fb8,0));	// 12601                  call    near ptr sub_14FB8 ;~ 05BF:0571
cs=0x5bf;eip=0x000574; 	T(ADD(sp, 0x0A));	// 12602                  add     sp, 0Ah ;~ 05BF:0574
cs=0x5bf;eip=0x000577; 	X(PUSH(0x7D00));	// 12603                  push    7D00h           ; int ;~ 05BF:0577
cs=0x5bf;eip=0x00057a; 	X(PUSH(0x8C));	// 12604                  push    8Ch ; '
cs=0x5bf;eip=0x00057d; 	X(PUSH(0x30));	// 12605                  push    30h ; '0'       ; int ;~ 05BF:057D
cs=0x5bf;eip=0x00057f; 	X(PUSH(ds));	// 12606                  push    ds ;~ 05BF:057F
cs=0x5bf;eip=0x000580; 	X(PUSH(offset(dseg,__adavidhamilton)));	// 12607                  push    offset __aDavidHamilton ; s ;~ 05BF:0580
cs=0x5bf;eip=0x000583; 	T(NOP);	// 12608                  nop ;~ 05BF:0583
cs=0x5bf;eip=0x000584; 	X(PUSH(cs));	// 12609                  push    cs ;~ 05BF:0584
cs=0x5bf;eip=0x000585; 	J(CALL(sub_14fb8,0));	// 12610                  call    near ptr sub_14FB8 ;~ 05BF:0585
cs=0x5bf;eip=0x000588; 	T(ADD(sp, 0x0A));	// 12611                  add     sp, 0Ah ;~ 05BF:0588
cs=0x5bf;eip=0x00058b; 	X(PUSH(0x7D00));	// 12612                  push    7D00h           ; int ;~ 05BF:058B
cs=0x5bf;eip=0x00058e; 	X(PUSH(0x0A0));	// 12613                  push    0A0h ; '
cs=0x5bf;eip=0x000591; 	X(PUSH(0x40));	// 12614                  push    40h ; '@'       ; int ;~ 05BF:0591
cs=0x5bf;eip=0x000593; 	X(PUSH(ds));	// 12615                  push    ds ;~ 05BF:0593
cs=0x5bf;eip=0x000594; 	X(PUSH(offset(dseg,__aarlonharris)));	// 12616                  push    offset __aArlonHarris ; s ;~ 05BF:0594
cs=0x5bf;eip=0x000597; 	T(NOP);	// 12617                  nop ;~ 05BF:0597
cs=0x5bf;eip=0x000598; 	X(PUSH(cs));	// 12618                  push    cs ;~ 05BF:0598
cs=0x5bf;eip=0x000599; 	J(CALL(sub_14fb8,0));	// 12619                  call    near ptr sub_14FB8 ;~ 05BF:0599
cs=0x5bf;eip=0x00059c; 	T(ADD(sp, 0x0A));	// 12620                  add     sp, 0Ah ;~ 05BF:059C
cs=0x5bf;eip=0x00059f; 	X(PUSH(0x7D00));	// 12621                  push    7D00h           ; int ;~ 05BF:059F
cs=0x5bf;eip=0x0005a2; 	X(PUSH(0x0B4));	// 12622                  push    0B4h ; '
cs=0x5bf;eip=0x0005a5; 	X(PUSH(0x10));	// 12623                  push    10h             ; int ;~ 05BF:05A5
cs=0x5bf;eip=0x0005a7; 	X(PUSH(ds));	// 12624                  push    ds ;~ 05BF:05A7
cs=0x5bf;eip=0x0005a8; 	X(PUSH(offset(dseg,__ajenniferhawtho_0)));	// 12625                  push    offset __aJenniferHawtho_0 ; s ;~ 05BF:05A8
cs=0x5bf;eip=0x0005ab; 	T(NOP);	// 12626                  nop ;~ 05BF:05AB
cs=0x5bf;eip=0x0005ac; 	X(PUSH(cs));	// 12627                  push    cs ;~ 05BF:05AC
cs=0x5bf;eip=0x0005ad; 	J(CALL(sub_14fb8,0));	// 12628                  call    near ptr sub_14FB8 ;~ 05BF:05AD
cs=0x5bf;eip=0x0005b0; 	T(ADD(sp, 0x0A));	// 12629                  add     sp, 0Ah ;~ 05BF:05B0
cs=0x5bf;eip=0x0005b3; 	X(PUSH(0x0BB80));	// 12630                  push    0BB80h          ; int ;~ 05BF:05B3
cs=0x5bf;eip=0x0005b6; 	X(PUSH(0));	// 12631                  push    0               ; int ;~ 05BF:05B6
cs=0x5bf;eip=0x0005b8; 	X(PUSH(0x40));	// 12632                  push    40h ; '@'       ; int ;~ 05BF:05B8
cs=0x5bf;eip=0x0005ba; 	X(PUSH(ds));	// 12633                  push    ds ;~ 05BF:05BA
cs=0x5bf;eip=0x0005bb; 	X(PUSH(offset(dseg,__amatthewkarl)));	// 12634                  push    offset __aMatthewKarl ; s ;~ 05BF:05BB
cs=0x5bf;eip=0x0005be; 	T(NOP);	// 12635                  nop ;~ 05BF:05BE
cs=0x5bf;eip=0x0005bf; 	X(PUSH(cs));	// 12636                  push    cs ;~ 05BF:05BF
cs=0x5bf;eip=0x0005c0; 	J(CALL(sub_14fb8,0));	// 12637                  call    near ptr sub_14FB8 ;~ 05BF:05C0
cs=0x5bf;eip=0x0005c3; 	T(ADD(sp, 0x0A));	// 12638                  add     sp, 0Ah ;~ 05BF:05C3
cs=0x5bf;eip=0x0005c6; 	X(PUSH(0x0BB80));	// 12639                  push    0BB80h          ; int ;~ 05BF:05C6
cs=0x5bf;eip=0x0005c9; 	X(PUSH(0x14));	// 12640                  push    14h             ; int ;~ 05BF:05C9
cs=0x5bf;eip=0x0005cb; 	X(PUSH(0x60));	// 12641                  push    60h ; '`'       ; int ;~ 05BF:05CB
cs=0x5bf;eip=0x0005cd; 	X(PUSH(ds));	// 12642                  push    ds ;~ 05BF:05CD
cs=0x5bf;eip=0x0005ce; 	X(PUSH(offset(dseg,__arobland)));	// 12643                  push    offset __aRobLand ; s ;~ 05BF:05CE
cs=0x5bf;eip=0x0005d1; 	T(NOP);	// 12644                  nop ;~ 05BF:05D1
cs=0x5bf;eip=0x0005d2; 	X(PUSH(cs));	// 12645                  push    cs ;~ 05BF:05D2
cs=0x5bf;eip=0x0005d3; 	J(CALL(sub_14fb8,0));	// 12646                  call    near ptr sub_14FB8 ;~ 05BF:05D3
cs=0x5bf;eip=0x0005d6; 	T(ADD(sp, 0x0A));	// 12647                  add     sp, 0Ah ;~ 05BF:05D6
cs=0x5bf;eip=0x0005d9; 	X(PUSH(0x0BB80));	// 12648                  push    0BB80h          ; int ;~ 05BF:05D9
cs=0x5bf;eip=0x0005dc; 	X(PUSH(0x28));	// 12649                  push    28h ; '('       ; int ;~ 05BF:05DC
cs=0x5bf;eip=0x0005de; 	X(PUSH(0x40));	// 12650                  push    40h ; '@'       ; int ;~ 05BF:05DE
cs=0x5bf;eip=0x0005e0; 	X(PUSH(ds));	// 12651                  push    ds ;~ 05BF:05E0
cs=0x5bf;eip=0x0005e1; 	X(PUSH(offset(dseg,__alarrymangum)));	// 12652                  push    offset __aLarryMangum ; s ;~ 05BF:05E1
cs=0x5bf;eip=0x0005e4; 	T(NOP);	// 12653                  nop ;~ 05BF:05E4
cs=0x5bf;eip=0x0005e5; 	X(PUSH(cs));	// 12654                  push    cs ;~ 05BF:05E5
cs=0x5bf;eip=0x0005e6; 	J(CALL(sub_14fb8,0));	// 12655                  call    near ptr sub_14FB8 ;~ 05BF:05E6
cs=0x5bf;eip=0x0005e9; 	T(ADD(sp, 0x0A));	// 12656                  add     sp, 0Ah ;~ 05BF:05E9
cs=0x5bf;eip=0x0005ec; 	X(PUSH(0x0BB80));	// 12657                  push    0BB80h          ; int ;~ 05BF:05EC
cs=0x5bf;eip=0x0005ef; 	X(PUSH(0x3C));	// 12658                  push    3Ch ; '<'       ; int ;~ 05BF:05EF
cs=0x5bf;eip=0x0005f1; 	X(PUSH(0x30));	// 12659                  push    30h ; '0'       ; int ;~ 05BF:05F1
cs=0x5bf;eip=0x0005f3; 	X(PUSH(ds));	// 12660                  push    ds ;~ 05BF:05F3
cs=0x5bf;eip=0x0005f4; 	X(PUSH(offset(dseg,__ablakephillips)));	// 12661                  push    offset __aBlakePhillips ; s ;~ 05BF:05F4
cs=0x5bf;eip=0x0005f7; 	T(NOP);	// 12662                  nop ;~ 05BF:05F7
cs=0x5bf;eip=0x0005f8; 	X(PUSH(cs));	// 12663                  push    cs ;~ 05BF:05F8
cs=0x5bf;eip=0x0005f9; 	J(CALL(sub_14fb8,0));	// 12664                  call    near ptr sub_14FB8 ;~ 05BF:05F9
cs=0x5bf;eip=0x0005fc; 	T(ADD(sp, 0x0A));	// 12665                  add     sp, 0Ah ;~ 05BF:05FC
cs=0x5bf;eip=0x0005ff; 	X(PUSH(0x0BB80));	// 12666                  push    0BB80h          ; int ;~ 05BF:05FF
cs=0x5bf;eip=0x000602; 	X(PUSH(0x50));	// 12667                  push    50h ; 'P'       ; int ;~ 05BF:0602
cs=0x5bf;eip=0x000604; 	X(PUSH(0x28));	// 12668                  push    28h ; '('       ; int ;~ 05BF:0604
cs=0x5bf;eip=0x000606; 	X(PUSH(ds));	// 12669                  push    ds ;~ 05BF:0606
cs=0x5bf;eip=0x000607; 	X(PUSH(offset(dseg,__acharlespugsley)));	// 12670                  push    offset __aCharlesPugsley ; s ;~ 05BF:0607
cs=0x5bf;eip=0x00060a; 	T(NOP);	// 12671                  nop ;~ 05BF:060A
cs=0x5bf;eip=0x00060b; 	X(PUSH(cs));	// 12672                  push    cs ;~ 05BF:060B
cs=0x5bf;eip=0x00060c; 	J(CALL(sub_14fb8,0));	// 12673                  call    near ptr sub_14FB8 ;~ 05BF:060C
cs=0x5bf;eip=0x00060f; 	T(ADD(sp, 0x0A));	// 12674                  add     sp, 0Ah ;~ 05BF:060F
cs=0x5bf;eip=0x000612; 	X(PUSH(0x0BB80));	// 12675                  push    0BB80h          ; int ;~ 05BF:0612
cs=0x5bf;eip=0x000615; 	X(PUSH(0x64));	// 12676                  push    64h ; 'd'       ; int ;~ 05BF:0615
cs=0x5bf;eip=0x000617; 	X(PUSH(0x38));	// 12677                  push    38h ; '8'       ; int ;~ 05BF:0617
cs=0x5bf;eip=0x000619; 	X(PUSH(ds));	// 12678                  push    ds ;~ 05BF:0619
cs=0x5bf;eip=0x00061a; 	X(PUSH(offset(dseg,__ajamespugsley)));	// 12679                  push    offset __aJamesPugsley ; s ;~ 05BF:061A
cs=0x5bf;eip=0x00061d; 	T(NOP);	// 12680                  nop ;~ 05BF:061D
cs=0x5bf;eip=0x00061e; 	X(PUSH(cs));	// 12681                  push    cs ;~ 05BF:061E
cs=0x5bf;eip=0x00061f; 	J(CALL(sub_14fb8,0));	// 12682                  call    near ptr sub_14FB8 ;~ 05BF:061F
cs=0x5bf;eip=0x000622; 	T(ADD(sp, 0x0A));	// 12683                  add     sp, 0Ah ;~ 05BF:0622
cs=0x5bf;eip=0x000625; 	X(PUSH(0x0BB80));	// 12684                  push    0BB80h          ; int ;~ 05BF:0625
cs=0x5bf;eip=0x000628; 	X(PUSH(0x78));	// 12685                  push    78h ; 'x'       ; int ;~ 05BF:0628
cs=0x5bf;eip=0x00062a; 	X(PUSH(0x5C));	// 12686                  push    5Ch ; '\'       ; int ;~ 05BF:062A
cs=0x5bf;eip=0x00062c; 	X(PUSH(ds));	// 12687                  push    ds ;~ 05BF:062C
cs=0x5bf;eip=0x00062d; 	X(PUSH(offset(dseg,__ajennifer)));	// 12688                  push    offset __aJennifer ; s ;~ 05BF:062D
cs=0x5bf;eip=0x000630; 	T(NOP);	// 12689                  nop ;~ 05BF:0630
cs=0x5bf;eip=0x000631; 	X(PUSH(cs));	// 12690                  push    cs ;~ 05BF:0631
cs=0x5bf;eip=0x000632; 	J(CALL(sub_14fb8,0));	// 12691                  call    near ptr sub_14FB8 ;~ 05BF:0632
cs=0x5bf;eip=0x000635; 	T(ADD(sp, 0x0A));	// 12692                  add     sp, 0Ah ;~ 05BF:0635
cs=0x5bf;eip=0x000638; 	X(PUSH(0x0BB80));	// 12693                  push    0BB80h          ; int ;~ 05BF:0638
cs=0x5bf;eip=0x00063b; 	X(PUSH(0x8C));	// 12694                  push    8Ch ; '
cs=0x5bf;eip=0x00063e; 	X(PUSH(0x40));	// 12695                  push    40h ; '@'       ; int ;~ 05BF:063E
cs=0x5bf;eip=0x000640; 	X(PUSH(ds));	// 12696                  push    ds ;~ 05BF:0640
cs=0x5bf;eip=0x000641; 	X(PUSH(offset(dseg,__aschlickbernd)));	// 12697                  push    offset __aSchlickbernd ; s ;~ 05BF:0641
cs=0x5bf;eip=0x000644; 	T(NOP);	// 12698                  nop ;~ 05BF:0644
cs=0x5bf;eip=0x000645; 	X(PUSH(cs));	// 12699                  push    cs ;~ 05BF:0645
cs=0x5bf;eip=0x000646; 	J(CALL(sub_14fb8,0));	// 12700                  call    near ptr sub_14FB8 ;~ 05BF:0646
cs=0x5bf;eip=0x000649; 	T(ADD(sp, 0x0A));	// 12701                  add     sp, 0Ah ;~ 05BF:0649
cs=0x5bf;eip=0x00064c; 	X(PUSH(0x0BB80));	// 12702                  push    0BB80h          ; int ;~ 05BF:064C
cs=0x5bf;eip=0x00064f; 	X(PUSH(0x0A0));	// 12703                  push    0A0h ; '
cs=0x5bf;eip=0x000652; 	X(PUSH(0x30));	// 12704                  push    30h ; '0'       ; int ;~ 05BF:0652
cs=0x5bf;eip=0x000654; 	X(PUSH(ds));	// 12705                  push    ds ;~ 05BF:0654
cs=0x5bf;eip=0x000655; 	X(PUSH(offset(dseg,__arobertsnowden)));	// 12706                  push    offset __aRobertSnowden ; s ;~ 05BF:0655
cs=0x5bf;eip=0x000658; 	T(NOP);	// 12707                  nop ;~ 05BF:0658
cs=0x5bf;eip=0x000659; 	X(PUSH(cs));	// 12708                  push    cs ;~ 05BF:0659
cs=0x5bf;eip=0x00065a; 	J(CALL(sub_14fb8,0));	// 12709                  call    near ptr sub_14FB8 ;~ 05BF:065A
cs=0x5bf;eip=0x00065d; 	T(ADD(sp, 0x0A));	// 12710                  add     sp, 0Ah ;~ 05BF:065D
cs=0x5bf;eip=0x000660; 	X(PUSH(0x0BB80));	// 12711                  push    0BB80h          ; int ;~ 05BF:0660
cs=0x5bf;eip=0x000663; 	X(PUSH(0x0B4));	// 12712                  push    0B4h ; '
cs=0x5bf;eip=0x000666; 	X(PUSH(0x50));	// 12713                  push    50h ; 'P'       ; int ;~ 05BF:0666
cs=0x5bf;eip=0x000668; 	X(PUSH(ds));	// 12714                  push    ds ;~ 05BF:0668
cs=0x5bf;eip=0x000669; 	X(PUSH(offset(dseg,__amarkspiro)));	// 12715                  push    offset __aMarkSpiro ; s ;~ 05BF:0669
cs=0x5bf;eip=0x00066c; 	T(NOP);	// 12716                  nop ;~ 05BF:066C
cs=0x5bf;eip=0x00066d; 	X(PUSH(cs));	// 12717                  push    cs ;~ 05BF:066D
cs=0x5bf;eip=0x00066e; 	J(CALL(sub_14fb8,0));	// 12718                  call    near ptr sub_14FB8 ;~ 05BF:066E
cs=0x5bf;eip=0x000671; 	T(ADD(sp, 0x0A));	// 12719                  add     sp, 0Ah ;~ 05BF:0671
cs=0x5bf;eip=0x000674; 	X(PUSH(0));	// 12720                  push    0 ;~ 05BF:0674
cs=0x5bf;eip=0x000676; 	J(CALLF(sub_17086,0));	// 12721                  call    sub_17086 ;~ 05BF:0676
cs=0x5bf;eip=0x00067b; 	X(POP(cx));	// 12722                  pop     cx ;~ 05BF:067B
cs=0x5bf;eip=0x00067c; 	X(PUSH(0x0BB80));	// 12723                  push    0BB80h ;~ 05BF:067C
cs=0x5bf;eip=0x00067f; 	X(PUSH(0));	// 12724                  push    0 ;~ 05BF:067F
cs=0x5bf;eip=0x000681; 	T(NOP);	// 12725                  nop ;~ 05BF:0681
cs=0x5bf;eip=0x000682; 	X(PUSH(cs));	// 12726                  push    cs ;~ 05BF:0682
cs=0x5bf;eip=0x000683; 	J(CALL(sub_15096,0));	// 12727                  call    near ptr sub_15096 ;~ 05BF:0683
cs=0x5bf;eip=0x000686; 	T(ADD(sp, 4));	// 12728                  add     sp, 4 ;~ 05BF:0686
cs=0x5bf;eip=0x000689; 	X(PUSH(0));	// 12729                  push    0 ;~ 05BF:0689
cs=0x5bf;eip=0x00068b; 	X(PUSH(0x0BB80));	// 12730                  push    0BB80h ;~ 05BF:068B
cs=0x5bf;eip=0x00068e; 	J(CALLF(sub_1730d,0));	// 12731                  call    sub_1730D ;~ 05BF:068E
cs=0x5bf;eip=0x000693; 	T(ADD(sp, 4));	// 12732                  add     sp, 4 ;~ 05BF:0693
cs=0x5bf;eip=0x000696; 	X(PUSH(0));	// 12733                  push    0 ;~ 05BF:0696
cs=0x5bf;eip=0x000698; 	X(PUSH(0x3E80));	// 12734                  push    3E80h ;~ 05BF:0698
cs=0x5bf;eip=0x00069b; 	J(CALLF(sub_172a3,0));	// 12735                  call    sub_172A3 ;~ 05BF:069B
cs=0x5bf;eip=0x0006a0; 	T(ADD(sp, 4));	// 12736                  add     sp, 4 ;~ 05BF:06A0
cs=0x5bf;eip=0x0006a3; 	X(PUSH(0));	// 12737                  push    0 ;~ 05BF:06A3
cs=0x5bf;eip=0x0006a5; 	X(PUSH(0x7D00));	// 12738                  push    7D00h ;~ 05BF:06A5
cs=0x5bf;eip=0x0006a8; 	J(CALLF(sub_172a3,0));	// 12739                  call    sub_172A3 ;~ 05BF:06A8
cs=0x5bf;eip=0x0006ad; 	T(ADD(sp, 4));	// 12740                  add     sp, 4 ;~ 05BF:06AD
cs=0x5bf;eip=0x0006b0; 	X(PUSH(0));	// 12741                  push    0 ;~ 05BF:06B0
cs=0x5bf;eip=0x0006b2; 	X(PUSH(0x0BB80));	// 12742                  push    0BB80h ;~ 05BF:06B2
cs=0x5bf;eip=0x0006b5; 	J(CALLF(sub_172a3,0));	// 12743                  call    sub_172A3 ;~ 05BF:06B5
cs=0x5bf;eip=0x0006ba; 	T(ADD(sp, 4));	// 12744                  add     sp, 4 ;~ 05BF:06BA
cs=0x5bf;eip=0x0006bd; 	X(PUSH(0));	// 12745                  push    0 ;~ 05BF:06BD
cs=0x5bf;eip=0x0006bf; 	J(CALLF(sub_17086,0));	// 12746                  call    sub_17086 ;~ 05BF:06BF
cs=0x5bf;eip=0x0006c4; 	X(POP(cx));	// 12747                  pop     cx ;~ 05BF:06C4
cs=0x5bf;eip=0x0006c5; 	X(PUSH(0x3E80));	// 12748                  push    3E80h ;~ 05BF:06C5
cs=0x5bf;eip=0x0006c8; 	X(PUSH(0));	// 12749                  push    0 ;~ 05BF:06C8
cs=0x5bf;eip=0x0006ca; 	T(NOP);	// 12750                  nop ;~ 05BF:06CA
cs=0x5bf;eip=0x0006cb; 	X(PUSH(cs));	// 12751                  push    cs ;~ 05BF:06CB
cs=0x5bf;eip=0x0006cc; 	J(CALL(sub_15096,0));	// 12752                  call    near ptr sub_15096 ;~ 05BF:06CC
cs=0x5bf;eip=0x0006cf; 	T(ADD(sp, 4));	// 12753                  add     sp, 4 ;~ 05BF:06CF
cs=0x5bf;eip=0x0006d2; 	J(CALLF(sub_17285,0));	// 12754                  call    sub_17285 ;~ 05BF:06D2
cs=0x5bf;eip=0x0006d7; 	X(PUSH(0));	// 12755                  push    0 ;~ 05BF:06D7
cs=0x5bf;eip=0x0006d9; 	J(CALLF(sub_17086,0));	// 12756                  call    sub_17086 ;~ 05BF:06D9
cs=0x5bf;eip=0x0006de; 	X(POP(cx));	// 12757                  pop     cx ;~ 05BF:06DE
cs=0x5bf;eip=0x0006df; 	T(NOP);	// 12758                  nop ;~ 05BF:06DF
cs=0x5bf;eip=0x0006e0; 	X(PUSH(cs));	// 12759                  push    cs ;~ 05BF:06E0
cs=0x5bf;eip=0x0006e1; 	J(CALL(sub_148b6,0));	// 12760                  call    near ptr sub_148B6 ;~ 05BF:06E1
cs=0x5bf;eip=0x0006e4; 	T(LEAVE);	// 12761                  leave ;~ 05BF:06E4
cs=0x5bf;eip=0x0006e5; 	J(RETF(0));	// 12762                  retf ;~ 05BF:06E5
__isr:
	// 14044 
cs=0x5bf;eip=0x000fd9; 	X(PUSH(ax));	// 14045                  push    ax ;~ 05BF:0FD9
cs=0x5bf;eip=0x000fda; 	X(PUSH(bx));	// 14046                  push    bx ;~ 05BF:0FDA
cs=0x5bf;eip=0x000fdb; 	X(PUSH(cx));	// 14047                  push    cx ;~ 05BF:0FDB
cs=0x5bf;eip=0x000fdc; 	X(PUSH(dx));	// 14048                  push    dx ;~ 05BF:0FDC
cs=0x5bf;eip=0x000fdd; 	X(PUSH(es));	// 14049                  push    es ;~ 05BF:0FDD
cs=0x5bf;eip=0x000fde; 	X(PUSH(ds));	// 14050                  push    ds ;~ 05BF:0FDE
cs=0x5bf;eip=0x000fdf; 	X(PUSH(si));	// 14051                  push    si ;~ 05BF:0FDF
cs=0x5bf;eip=0x000fe0; 	X(PUSH(di));	// 14052                  push    di ;~ 05BF:0FE0
cs=0x5bf;eip=0x000fe1; 	X(PUSH(bp));	// 14053                  push    bp ;~ 05BF:0FE1
cs=0x5bf;eip=0x000fe2; 	T(bp = seg_offset(dseg););	// 14054                  mov     bp, seg dseg ;~ 05BF:0FE2
cs=0x5bf;eip=0x000fe5; 	T(ds = bp;);	// 14055                  mov     ds, bp ;~ 05BF:0FE5
cs=0x5bf;eip=0x000fe7; 	X(INC(word_192f3));	// 14056                  inc     word_192F3 ;~ 05BF:0FE7
cs=0x5bf;eip=0x000feb; 	X(AND(word_192f3, 0x7F));	// 14057                  and     word_192F3, 7Fh ;~ 05BF:0FEB
cs=0x5bf;eip=0x000ff0; 	X(POP(bp));	// 14058                  pop     bp ;~ 05BF:0FF0
cs=0x5bf;eip=0x000ff1; 	X(POP(di));	// 14059                  pop     di ;~ 05BF:0FF1
cs=0x5bf;eip=0x000ff2; 	X(POP(si));	// 14060                  pop     si ;~ 05BF:0FF2
cs=0x5bf;eip=0x000ff3; 	X(POP(ds));	// 14061                  pop     ds ;~ 05BF:0FF3
cs=0x5bf;eip=0x000ff4; 	X(POP(es));	// 14062                  pop     es ;~ 05BF:0FF4
cs=0x5bf;eip=0x000ff5; 	X(POP(dx));	// 14063                  pop     dx ;~ 05BF:0FF5
cs=0x5bf;eip=0x000ff6; 	X(POP(cx));	// 14064                  pop     cx ;~ 05BF:0FF6
cs=0x5bf;eip=0x000ff7; 	X(POP(bx));	// 14065                  pop     bx ;~ 05BF:0FF7
cs=0x5bf;eip=0x000ff8; 	X(POP(ax));	// 14066                  pop     ax ;~ 05BF:0FF8
cs=0x5bf;eip=0x000ff9; 	J(IRET);	// 14067                  iret ;~ 05BF:0FF9

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k___main: 	goto ___main;
        case m2c::k__isr: 	goto __isr;
        case m2c::kloc_1423b: 	goto loc_1423b;
        case m2c::kloc_1426a: 	goto loc_1426a;
        case m2c::kloc_14299: 	goto loc_14299;
        case m2c::kloc_142b4: 	goto loc_142b4;
        case m2c::kloc_1434f: 	goto loc_1434f;
        case m2c::kloc_143df: 	goto loc_143df;
        case m2c::kloc_143e8: 	goto loc_143e8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_148b6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_148b6:
    _begin:
cs=0x5bf;eip=0x0006e6; 	X(word_192f0 = 0x7F;);	// 12771                  mov     word_192F0, 7Fh ;~ 05BF:06E6
cs=0x5bf;eip=0x0006ec; 	J(CALLF(sub_17285,0));	// 12772                  call    sub_17285 ;~ 05BF:06EC
cs=0x5bf;eip=0x0006f1; 	X(PUSH(0x3E80));	// 12773                  push    3E80h ;~ 05BF:06F1
cs=0x5bf;eip=0x0006f4; 	J(CALLF(sub_17086,0));	// 12774                  call    sub_17086 ;~ 05BF:06F4
cs=0x5bf;eip=0x0006f9; 	X(POP(cx));	// 12775                  pop     cx ;~ 05BF:06F9
cs=0x5bf;eip=0x0006fa; 	X(PUSH(word_19367));	// 12776                  push    word_19367      ; int ;~ 05BF:06FA
cs=0x5bf;eip=0x0006fe; 	X(PUSH(__block));	// 12777                  push    __block         ; int ;~ 05BF:06FE
cs=0x5bf;eip=0x000702; 	X(PUSH(ds));	// 12778                  push    ds ;~ 05BF:0702
cs=0x5bf;eip=0x000703; 	X(PUSH(offset(dseg,__adetttlscr_0)));	// 12779                  push    offset __aDetttlScr_0 ; path ;~ 05BF:0703
cs=0x5bf;eip=0x000706; 	T(NOP);	// 12780                  nop ;~ 05BF:0706
cs=0x5bf;eip=0x000707; 	X(PUSH(cs));	// 12781                  push    cs ;~ 05BF:0707
cs=0x5bf;eip=0x000708; 	J(CALL(sub_14bd7,0));	// 12782                  call    near ptr sub_14BD7 ;~ 05BF:0708
cs=0x5bf;eip=0x00070b; 	T(ADD(sp, 8));	// 12783                  add     sp, 8 ;~ 05BF:070B
cs=0x5bf;eip=0x00070e; 	X(PUSH(0));	// 12784                  push    0 ;~ 05BF:070E
cs=0x5bf;eip=0x000710; 	X(PUSH(word_19367));	// 12785                  push    word_19367 ;~ 05BF:0710
cs=0x5bf;eip=0x000714; 	X(PUSH(__block));	// 12786                  push    __block ;~ 05BF:0714
cs=0x5bf;eip=0x000718; 	J(CALLF(sub_172c6,0));	// 12787                  call    sub_172C6 ;~ 05BF:0718
cs=0x5bf;eip=0x00071d; 	T(ADD(sp, 6));	// 12788                  add     sp, 6 ;~ 05BF:071D
cs=0x5bf;eip=0x000720; 	X(PUSH(word_19367));	// 12789                  push    word_19367      ; int ;~ 05BF:0720
cs=0x5bf;eip=0x000724; 	X(PUSH(__block));	// 12790                  push    __block         ; int ;~ 05BF:0724
cs=0x5bf;eip=0x000728; 	X(PUSH(ds));	// 12791                  push    ds ;~ 05BF:0728
cs=0x5bf;eip=0x000729; 	X(PUSH(offset(dseg,__aintcar1scr)));	// 12792                  push    offset __aIntcar1Scr ; path ;~ 05BF:0729
cs=0x5bf;eip=0x00072c; 	T(NOP);	// 12793                  nop ;~ 05BF:072C
cs=0x5bf;eip=0x00072d; 	X(PUSH(cs));	// 12794                  push    cs ;~ 05BF:072D
cs=0x5bf;eip=0x00072e; 	J(CALL(sub_14bd7,0));	// 12795                  call    near ptr sub_14BD7 ;~ 05BF:072E
cs=0x5bf;eip=0x000731; 	T(ADD(sp, 8));	// 12796                  add     sp, 8 ;~ 05BF:0731
cs=0x5bf;eip=0x000734; 	X(PUSH(0x0C8));	// 12797                  push    0C8h ; '
cs=0x5bf;eip=0x000737; 	X(PUSH(0x140));	// 12798                  push    140h ;~ 05BF:0737
cs=0x5bf;eip=0x00073a; 	X(PUSH(0));	// 12799                  push    0 ;~ 05BF:073A
cs=0x5bf;eip=0x00073c; 	X(PUSH(0));	// 12800                  push    0 ;~ 05BF:073C
cs=0x5bf;eip=0x00073e; 	X(PUSH(0));	// 12801                  push    0 ;~ 05BF:073E
cs=0x5bf;eip=0x000740; 	X(PUSH(0));	// 12802                  push    0 ;~ 05BF:0740
cs=0x5bf;eip=0x000742; 	X(PUSH(0));	// 12803                  push    0 ;~ 05BF:0742
cs=0x5bf;eip=0x000744; 	X(PUSH(word_19367));	// 12804                  push    word_19367 ;~ 05BF:0744
cs=0x5bf;eip=0x000748; 	X(PUSH(__block));	// 12805                  push    __block ;~ 05BF:0748
cs=0x5bf;eip=0x00074c; 	J(CALLF(sub_17702,0));	// 12806                  call    sub_17702 ;~ 05BF:074C
cs=0x5bf;eip=0x000751; 	T(ADD(sp, 0x12));	// 12807                  add     sp, 12h ;~ 05BF:0751
cs=0x5bf;eip=0x000754; 	X(PUSH(word_1936b));	// 12808                  push    word_1936B ;~ 05BF:0754
cs=0x5bf;eip=0x000758; 	X(PUSH(__src));	// 12809                  push    __src           ; ptr ;~ 05BF:0758
cs=0x5bf;eip=0x00075c; 	X(PUSH(ds));	// 12810                  push    ds ;~ 05BF:075C
cs=0x5bf;eip=0x00075d; 	X(PUSH(offset(dseg,__aintpal1scr_0)));	// 12811                  push    offset __aIntpal1Scr_0 ; path ;~ 05BF:075D
cs=0x5bf;eip=0x000760; 	T(NOP);	// 12812                  nop ;~ 05BF:0760
cs=0x5bf;eip=0x000761; 	X(PUSH(cs));	// 12813                  push    cs ;~ 05BF:0761
cs=0x5bf;eip=0x000762; 	J(CALL(sub_14c9a,0));	// 12814                  call    near ptr sub_14C9A ;~ 05BF:0762
cs=0x5bf;eip=0x000765; 	T(ADD(sp, 8));	// 12815                  add     sp, 8 ;~ 05BF:0765
cs=0x5bf;eip=0x000768; 	X(PUSH(word_1936b));	// 12816                  push    word_1936B ;~ 05BF:0768
cs=0x5bf;eip=0x00076c; 	X(PUSH(__src));	// 12817                  push    __src ;~ 05BF:076C
cs=0x5bf;eip=0x000770; 	J(CALLF(sub_17256,0));	// 12818                  call    sub_17256 ;~ 05BF:0770
cs=0x5bf;eip=0x000775; 	T(ADD(sp, 4));	// 12819                  add     sp, 4 ;~ 05BF:0775
cs=0x5bf;eip=0x000778; 	X(PUSH(0));	// 12820                  push    0 ;~ 05BF:0778
cs=0x5bf;eip=0x00077a; 	J(CALLF(sub_17086,0));	// 12821                  call    sub_17086 ;~ 05BF:077A
cs=0x5bf;eip=0x00077f; 	X(POP(cx));	// 12822                  pop     cx ;~ 05BF:077F
cs=0x5bf;eip=0x000780; 	T(LES(bx, __ptr));	// 12823                  les     bx, __ptr ;~ 05BF:0780
cs=0x5bf;eip=0x000784; 	T(CMP(*(raddr(es,bx+1)), 0));	// 12825                  cmp     byte ptr es:[bx+1], 0 ;~ 05BF:0784
cs=0x5bf;eip=0x000789; 	J(JBE(loc_14967));	// 12826                  jbe     short loc_14967 ;~ 05BF:0789
cs=0x5bf;eip=0x00078b; 	X(PUSH(0));	// 12827                  push    0 ;~ 05BF:078B
cs=0x5bf;eip=0x00078d; 	X(PUSH(0));	// 12828                  push    0 ;~ 05BF:078D
cs=0x5bf;eip=0x00078f; 	J(CALLF(sub_15e56,0));	// 12829                  call    far ptr sub_15E56 ;~ 05BF:078F
cs=0x5bf;eip=0x000794; 	T(ADD(sp, 4));	// 12830                  add     sp, 4 ;~ 05BF:0794
loc_14967:
	// 5107 
cs=0x5bf;eip=0x000797; 	X(PUSH(word_192f7));	// 12833                  push    word_192F7 ;~ 05BF:0797
cs=0x5bf;eip=0x00079b; 	X(PUSH(isr_));	// 12834                  push    isr_            ; isr ;~ 05BF:079B
cs=0x5bf;eip=0x00079f; 	X(PUSH(0x1C));	// 12835                  push    1Ch             ; interruptno ;~ 05BF:079F
cs=0x5bf;eip=0x0007a1; 	J(CALLF(___setvect,0));	// 12836                  call    ___setvect ;~ 05BF:07A1
cs=0x5bf;eip=0x0007a6; 	T(ADD(sp, 6));	// 12837                  add     sp, 6 ;~ 05BF:07A6
cs=0x5bf;eip=0x0007a9; 	J(CALLF(sub_17e1b,0));	// 12838                  call    sub_17E1B ;~ 05BF:07A9
cs=0x5bf;eip=0x0007ae; 	T(NOP);	// 12839                  nop ;~ 05BF:07AE
cs=0x5bf;eip=0x0007af; 	X(PUSH(cs));	// 12840                  push    cs ;~ 05BF:07AF
cs=0x5bf;eip=0x0007b0; 	J(CALL(sub_14a92,0));	// 12841                  call    near ptr sub_14A92 ;~ 05BF:07B0
cs=0x5bf;eip=0x0007b3; 	X(PUSH(0));	// 12842                  push    0 ;~ 05BF:07B3
cs=0x5bf;eip=0x0007b5; 	X(PUSH(0));	// 12843                  push    0 ;~ 05BF:07B5
cs=0x5bf;eip=0x0007b7; 	X(PUSH(0));	// 12844                  push    0 ;~ 05BF:07B7
cs=0x5bf;eip=0x0007b9; 	X(PUSH(0));	// 12845                  push    0               ; arg0 ;~ 05BF:07B9
cs=0x5bf;eip=0x0007bb; 	X(PUSH(ds));	// 12846                  push    ds ;~ 05BF:07BB
cs=0x5bf;eip=0x0007bc; 	X(PUSH(offset(dseg,__adet001exe)));	// 12847                  push    offset __aDet001Exe ; path ;~ 05BF:07BC
cs=0x5bf;eip=0x0007bf; 	J(CALLF(___execl,0));	// 12848                  call    ___execl ;~ 05BF:07BF
cs=0x5bf;eip=0x0007c4; 	T(ADD(sp, 0x0C));	// 12849                  add     sp, 0Ch ;~ 05BF:07C4
cs=0x5bf;eip=0x0007c7; 	J(RETF(0));	// 12850                  retf ;~ 05BF:07C7

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_14967: 	goto loc_14967;
        case m2c::ksub_148b6: 	goto sub_148b6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group10(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group10:
    _begin:
sub_14998:
	// 12858 
#undef arg_0
#define arg_0 6
	// 12861 arg_0           = word ptr  6 ;~ 05BF:07C8
#undef arg_2
#define arg_2 8
	// 12862 arg_2           = word ptr  8 ;~ 05BF:07C8
cs=0x5bf;eip=0x0007c8; 	X(PUSH(bp));	// 12864                  push    bp ;~ 05BF:07C8
cs=0x5bf;eip=0x0007c9; 	T(bp = sp;);	// 12865                  mov     bp, sp ;~ 05BF:07C9
cs=0x5bf;eip=0x0007cb; 	X(PUSH(word_192f7));	// 12866                  push    word_192F7 ;~ 05BF:07CB
cs=0x5bf;eip=0x0007cf; 	X(PUSH(isr_));	// 12867                  push    isr_            ; isr ;~ 05BF:07CF
cs=0x5bf;eip=0x0007d3; 	X(PUSH(0x1C));	// 12868                  push    1Ch             ; interruptno ;~ 05BF:07D3
cs=0x5bf;eip=0x0007d5; 	J(CALLF(___setvect,0));	// 12869                  call    ___setvect ;~ 05BF:07D5
cs=0x5bf;eip=0x0007da; 	T(ADD(sp, 6));	// 12870                  add     sp, 6 ;~ 05BF:07DA
cs=0x5bf;eip=0x0007dd; 	T(LES(bx, __ptr));	// 12871                  les     bx, __ptr ;~ 05BF:07DD
cs=0x5bf;eip=0x0007e1; 	T(CMP(*(raddr(es,bx+1)), 0));	// 12872                  cmp     byte ptr es:[bx+1], 0 ;~ 05BF:07E1
cs=0x5bf;eip=0x0007e6; 	J(JBE(loc_149c4));	// 12873                  jbe     short loc_149C4 ;~ 05BF:07E6
cs=0x5bf;eip=0x0007e8; 	X(PUSH(0));	// 12874                  push    0 ;~ 05BF:07E8
cs=0x5bf;eip=0x0007ea; 	X(PUSH(0));	// 12875                  push    0 ;~ 05BF:07EA
cs=0x5bf;eip=0x0007ec; 	J(CALLF(sub_15e56,0));	// 12876                  call    far ptr sub_15E56 ;~ 05BF:07EC
cs=0x5bf;eip=0x0007f1; 	T(ADD(sp, 4));	// 12877                  add     sp, 4 ;~ 05BF:07F1
loc_149c4:
	// 5108 
cs=0x5bf;eip=0x0007f4; 	T(NOP);	// 12880                  nop ;~ 05BF:07F4
cs=0x5bf;eip=0x0007f5; 	X(PUSH(cs));	// 12881                  push    cs ;~ 05BF:07F5
cs=0x5bf;eip=0x0007f6; 	J(CALL(sub_14a92,0));	// 12882                  call    near ptr sub_14A92 ;~ 05BF:07F6
cs=0x5bf;eip=0x0007f9; 	J(CALLF(sub_17e1b,0));	// 12883                  call    sub_17E1B ;~ 05BF:07F9
cs=0x5bf;eip=0x0007fe; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 12884                  push    [bp+arg_2] ;~ 05BF:07FE
cs=0x5bf;eip=0x000801; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 12885                  push    [bp+arg_0] ;~ 05BF:0801
cs=0x5bf;eip=0x000804; 	X(PUSH(ds));	// 12886                  push    ds ;~ 05BF:0804
cs=0x5bf;eip=0x000805; 	X(PUSH(offset(dseg,__format)));	// 12887                  push    offset __format ; format ;~ 05BF:0805
cs=0x5bf;eip=0x000808; 	J(CALLF(___printf,0));	// 12888                  call    ___printf ;~ 05BF:0808
cs=0x5bf;eip=0x00080d; 	T(ADD(sp, 8));	// 12889                  add     sp, 8 ;~ 05BF:080D
cs=0x5bf;eip=0x000810; 	X(PUSH(1));	// 12890                  push    1               ; status ;~ 05BF:0810
cs=0x5bf;eip=0x000812; 	J(CALLF(___exit_0,0));	// 12891                  call    ___exit_0 ;~ 05BF:0812
seg001_817_proc:
	// 12895 
cs=0x5bf;eip=0x000817; 	X(POP(cx));	// 12895                  pop     cx ;~ 05BF:0817
cs=0x5bf;eip=0x000818; 	X(POP(bp));	// 12896                  pop     bp ;~ 05BF:0818
cs=0x5bf;eip=0x000819; 	J(RETF(0));	// 12897                  retf ;~ 05BF:0819

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_149c4: 	goto loc_149c4;
        case m2c::kseg001_817_proc: 	goto seg001_817_proc;
        case m2c::ksub_14998: 	goto sub_14998;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_149ea(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_149ea:
    _begin:
#undef var_2
#define var_2 -2
	// 12906 var_2           = word ptr -2 ;~ 05BF:081A
cs=0x5bf;eip=0x00081a; 	X(ENTER(2, 0));	// 12908                  enter   2, 0 ;~ 05BF:081A
cs=0x5bf;eip=0x00081e; 	X(PUSH(0));	// 12909                  push    0 ;~ 05BF:081E
cs=0x5bf;eip=0x000820; 	X(PUSH(0x2710));	// 12910                  push    2710h           ; nbytes ;~ 05BF:0820
cs=0x5bf;eip=0x000823; 	J(CALLF(___farmalloc,0));	// 12911                  call    ___farmalloc ;~ 05BF:0823
cs=0x5bf;eip=0x000828; 	T(ADD(sp, 4));	// 12913                  add     sp, 4 ;~ 05BF:0828
cs=0x5bf;eip=0x00082b; 	X(word_192ea = dx;);	// 12914                  mov     word_192EA, dx ;~ 05BF:082B
cs=0x5bf;eip=0x00082f; 	X(block_ = ax;);	// 12915                  mov     block_, ax ;~ 05BF:082F
cs=0x5bf;eip=0x000832; 	T(OR(ax, dx));	// 12916                  or      ax, dx ;~ 05BF:0832
cs=0x5bf;eip=0x000834; 	J(JNZ(loc_14a11));	// 12917                  jnz     short loc_14A11 ;~ 05BF:0834
cs=0x5bf;eip=0x000836; 	X(PUSH(ds));	// 12918                  push    ds ;~ 05BF:0836
cs=0x5bf;eip=0x000837; 	X(PUSH(offset(dseg,__acannotfarmallo)));	// 12919                  push    offset __aCannotFarmallo ;~ 05BF:0837
cs=0x5bf;eip=0x00083a; 	X(PUSH(cs));	// 12920                  push    cs ;~ 05BF:083A
cs=0x5bf;eip=0x00083b; 	J(CALL(sub_14998,0));	// 12921                  call    near ptr sub_14998 ;~ 05BF:083B
cs=0x5bf;eip=0x00083e; 	T(ADD(sp, 4));	// 12923                  add     sp, 4 ;~ 05BF:083E
loc_14a11:
	// 5109 
cs=0x5bf;eip=0x000841; 	X(PUSH(0));	// 12926                  push    0 ;~ 05BF:0841
cs=0x5bf;eip=0x000843; 	X(PUSH(0x177));	// 12927                  push    177h            ; nbytes ;~ 05BF:0843
cs=0x5bf;eip=0x000846; 	J(CALLF(___farmalloc,0));	// 12928                  call    ___farmalloc ;~ 05BF:0846
cs=0x5bf;eip=0x00084b; 	T(ADD(sp, 4));	// 12929                  add     sp, 4 ;~ 05BF:084B
cs=0x5bf;eip=0x00084e; 	X(*(dw*)(((db*)&__ptr)+2) = dx;);	// 12930                  mov     word ptr __ptr+2, dx ;~ 05BF:084E
cs=0x5bf;eip=0x000852; 	X(*(dw*)(&__ptr) = ax;);	// 12931                  mov     word ptr __ptr, ax ;~ 05BF:0852
cs=0x5bf;eip=0x000855; 	T(OR(ax, dx));	// 12932                  or      ax, dx ;~ 05BF:0855
cs=0x5bf;eip=0x000857; 	J(JNZ(loc_14a34));	// 12933                  jnz     short loc_14A34 ;~ 05BF:0857
cs=0x5bf;eip=0x000859; 	X(PUSH(ds));	// 12934                  push    ds ;~ 05BF:0859
cs=0x5bf;eip=0x00085a; 	X(PUSH(offset(dseg,__acannotfarmallo_0)));	// 12935                  push    offset __aCannotFarmallo_0 ;~ 05BF:085A
cs=0x5bf;eip=0x00085d; 	X(PUSH(cs));	// 12936                  push    cs ;~ 05BF:085D
cs=0x5bf;eip=0x00085e; 	J(CALL(sub_14998,0));	// 12937                  call    near ptr sub_14998 ;~ 05BF:085E
cs=0x5bf;eip=0x000861; 	T(ADD(sp, 4));	// 12939                  add     sp, 4 ;~ 05BF:0861
loc_14a34:
	// 5110 
cs=0x5bf;eip=0x000864; 	X(PUSH(0));	// 12942                  push    0 ;~ 05BF:0864
cs=0x5bf;eip=0x000866; 	X(PUSH(0x0FFDC));	// 12943                  push    0FFDCh          ; nbytes ;~ 05BF:0866
cs=0x5bf;eip=0x000868; 	J(CALLF(___farmalloc,0));	// 12944                  call    ___farmalloc ;~ 05BF:0868
cs=0x5bf;eip=0x00086d; 	T(ADD(sp, 4));	// 12945                  add     sp, 4 ;~ 05BF:086D
cs=0x5bf;eip=0x000870; 	X(word_19367 = dx;);	// 12946                  mov     word_19367, dx ;~ 05BF:0870
cs=0x5bf;eip=0x000874; 	X(__block = ax;);	// 12947                  mov     __block, ax ;~ 05BF:0874
cs=0x5bf;eip=0x000877; 	T(OR(ax, dx));	// 12948                  or      ax, dx ;~ 05BF:0877
cs=0x5bf;eip=0x000879; 	J(JNZ(loc_14a56));	// 12949                  jnz     short loc_14A56 ;~ 05BF:0879
cs=0x5bf;eip=0x00087b; 	X(PUSH(ds));	// 12950                  push    ds ;~ 05BF:087B
cs=0x5bf;eip=0x00087c; 	X(PUSH(offset(dseg,__acannotfarmallo_1)));	// 12951                  push    offset __aCannotFarmallo_1 ;~ 05BF:087C
cs=0x5bf;eip=0x00087f; 	X(PUSH(cs));	// 12952                  push    cs ;~ 05BF:087F
cs=0x5bf;eip=0x000880; 	J(CALL(sub_14998,0));	// 12953                  call    near ptr sub_14998 ;~ 05BF:0880
cs=0x5bf;eip=0x000883; 	T(ADD(sp, 4));	// 12955                  add     sp, 4 ;~ 05BF:0883
loc_14a56:
	// 5111 
cs=0x5bf;eip=0x000886; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 12958                  mov     [bp+var_2], 0 ;~ 05BF:0886
cs=0x5bf;eip=0x00088b; 	J(JMP(loc_14a8a));	// 12959                  jmp     short loc_14A8A ;~ 05BF:088B
loc_14a5d:
	// 5112 
cs=0x5bf;eip=0x00088d; 	X(PUSH(0));	// 12963                  push    0 ;~ 05BF:088D
cs=0x5bf;eip=0x00088f; 	X(PUSH(0x300));	// 12964                  push    300h            ; nbytes ;~ 05BF:088F
cs=0x5bf;eip=0x000892; 	J(CALLF(___farmalloc,0));	// 12965                  call    ___farmalloc ;~ 05BF:0892
cs=0x5bf;eip=0x000897; 	T(ADD(sp, 4));	// 12966                  add     sp, 4 ;~ 05BF:0897
cs=0x5bf;eip=0x00089a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 12967                  mov     bx, [bp+var_2] ;~ 05BF:089A
cs=0x5bf;eip=0x00089d; 	T(SHL(bx, 2));	// 12968                  shl     bx, 2 ;~ 05BF:089D
cs=0x5bf;eip=0x0008a0; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A8B)), dx));	// 12969                  mov     [bx+0A8Bh], dx ;~ 05BF:08A0
cs=0x5bf;eip=0x0008a4; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A89)), ax));	// 12970                  mov     [bx+0A89h], ax ;~ 05BF:08A4
cs=0x5bf;eip=0x0008a8; 	T(OR(ax, dx));	// 12971                  or      ax, dx ;~ 05BF:08A8
cs=0x5bf;eip=0x0008aa; 	J(JNZ(loc_14a87));	// 12972                  jnz     short loc_14A87 ;~ 05BF:08AA
cs=0x5bf;eip=0x0008ac; 	X(PUSH(ds));	// 12973                  push    ds ;~ 05BF:08AC
cs=0x5bf;eip=0x0008ad; 	X(PUSH(offset(dseg,__acannotfarmallo_2)));	// 12974                  push    offset __aCannotFarmallo_2 ;~ 05BF:08AD
cs=0x5bf;eip=0x0008b0; 	X(PUSH(cs));	// 12975                  push    cs ;~ 05BF:08B0
cs=0x5bf;eip=0x0008b1; 	J(CALL(sub_14998,0));	// 12976                  call    near ptr sub_14998 ;~ 05BF:08B1
cs=0x5bf;eip=0x0008b4; 	T(ADD(sp, 4));	// 12978                  add     sp, 4 ;~ 05BF:08B4
loc_14a87:
	// 5113 
cs=0x5bf;eip=0x0008b7; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 12981                  inc     [bp+var_2] ;~ 05BF:08B7
loc_14a8a:
	// 5114 
cs=0x5bf;eip=0x0008ba; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 3));	// 12984                  cmp     [bp+var_2], 3 ;~ 05BF:08BA
cs=0x5bf;eip=0x0008be; 	J(JL(loc_14a5d));	// 12985                  jl      short loc_14A5D ;~ 05BF:08BE
cs=0x5bf;eip=0x0008c0; 	T(LEAVE);	// 12986                  leave ;~ 05BF:08C0
cs=0x5bf;eip=0x0008c1; 	J(RETF(0));	// 12987                  retf ;~ 05BF:08C1

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_14a11: 	goto loc_14a11;
        case m2c::kloc_14a34: 	goto loc_14a34;
        case m2c::kloc_14a56: 	goto loc_14a56;
        case m2c::kloc_14a5d: 	goto loc_14a5d;
        case m2c::kloc_14a87: 	goto loc_14a87;
        case m2c::kloc_14a8a: 	goto loc_14a8a;
        case m2c::ksub_149ea: 	goto sub_149ea;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_14a92(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_14a92:
    _begin:
#undef var_2
#define var_2 -2
	// 12998 var_2           = word ptr -2 ;~ 05BF:08C2
cs=0x5bf;eip=0x0008c2; 	X(ENTER(2, 0));	// 13000                  enter   2, 0 ;~ 05BF:08C2
cs=0x5bf;eip=0x0008c6; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 2));	// 13001                  mov     [bp+var_2], 2 ;~ 05BF:08C6
cs=0x5bf;eip=0x0008cb; 	J(JMP(loc_14ab6));	// 13002                  jmp     short loc_14AB6 ;~ 05BF:08CB
loc_14a9d:
	// 5115 
cs=0x5bf;eip=0x0008cd; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 13006                  mov     bx, [bp+var_2] ;~ 05BF:08CD
cs=0x5bf;eip=0x0008d0; 	T(SHL(bx, 2));	// 13007                  shl     bx, 2 ;~ 05BF:08D0
cs=0x5bf;eip=0x0008d3; 	X(PUSH(*(dw*)(raddr(ds,bx+0x0A8B))));	// 13008                  push    word ptr [bx+0A8Bh] ;~ 05BF:08D3
cs=0x5bf;eip=0x0008d7; 	X(PUSH(*(dw*)(raddr(ds,bx+0x0A89))));	// 13009                  push    word ptr [bx+0A89h] ; block ;~ 05BF:08D7
cs=0x5bf;eip=0x0008db; 	J(CALLF(___farfree,0));	// 13010                  call    ___farfree ;~ 05BF:08DB
cs=0x5bf;eip=0x0008e0; 	T(ADD(sp, 4));	// 13011                  add     sp, 4 ;~ 05BF:08E0
cs=0x5bf;eip=0x0008e3; 	X(DEC(*(dw*)(raddr(ss,bp+var_2))));	// 13012                  dec     [bp+var_2] ;~ 05BF:08E3
loc_14ab6:
	// 5116 
cs=0x5bf;eip=0x0008e6; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0));	// 13015                  cmp     [bp+var_2], 0 ;~ 05BF:08E6
cs=0x5bf;eip=0x0008ea; 	J(JGE(loc_14a9d));	// 13016                  jge     short loc_14A9D ;~ 05BF:08EA
cs=0x5bf;eip=0x0008ec; 	X(PUSH(word_19367));	// 13017                  push    word_19367 ;~ 05BF:08EC
cs=0x5bf;eip=0x0008f0; 	X(PUSH(__block));	// 13018                  push    __block         ; block ;~ 05BF:08F0
cs=0x5bf;eip=0x0008f4; 	J(CALLF(___farfree,0));	// 13019                  call    ___farfree ;~ 05BF:08F4
cs=0x5bf;eip=0x0008f9; 	T(ADD(sp, 4));	// 13020                  add     sp, 4 ;~ 05BF:08F9
cs=0x5bf;eip=0x0008fc; 	X(PUSH(*(dw*)(((db*)&__ptr)+2)));	// 13021                  push    word ptr __ptr+2 ;~ 05BF:08FC
cs=0x5bf;eip=0x000900; 	X(PUSH(*(dw*)(&__ptr)));	// 13022                  push    word ptr __ptr  ; block ;~ 05BF:0900
cs=0x5bf;eip=0x000904; 	J(CALLF(___farfree,0));	// 13023                  call    ___farfree ;~ 05BF:0904
cs=0x5bf;eip=0x000909; 	T(ADD(sp, 4));	// 13024                  add     sp, 4 ;~ 05BF:0909
cs=0x5bf;eip=0x00090c; 	X(PUSH(word_192ea));	// 13025                  push    word_192EA ;~ 05BF:090C
cs=0x5bf;eip=0x000910; 	X(PUSH(block_));	// 13026                  push    block_          ; block ;~ 05BF:0910
cs=0x5bf;eip=0x000914; 	J(CALLF(___farfree,0));	// 13027                  call    ___farfree ;~ 05BF:0914
cs=0x5bf;eip=0x000919; 	T(ADD(sp, 4));	// 13028                  add     sp, 4 ;~ 05BF:0919
cs=0x5bf;eip=0x00091c; 	T(LEAVE);	// 13029                  leave ;~ 05BF:091C
cs=0x5bf;eip=0x00091d; 	J(RETF(0));	// 13030                  retf ;~ 05BF:091D

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_14a9d: 	goto loc_14a9d;
        case m2c::kloc_14ab6: 	goto loc_14ab6;
        case m2c::ksub_14a92: 	goto sub_14a92;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_14aee(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_14aee:
    _begin:
#undef var_4
#define var_4 -4
	// 13042 var_4           = word ptr -4 ;~ 05BF:091E
#undef var_2
#define var_2 -2
	// 13043 var_2           = word ptr -2 ;~ 05BF:091E
#undef path
#define path 6
	// 13044 path            = dword ptr  6 ;~ 05BF:091E
#undef mode
#define mode 0x0A
	// 13045 mode            = dword ptr  0Ah ;~ 05BF:091E
cs=0x5bf;eip=0x00091e; 	X(ENTER(4, 0));	// 13047                  enter   4, 0 ;~ 05BF:091E
cs=0x5bf;eip=0x000922; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 13048                  mov     [bp+var_2], 0 ;~ 05BF:0922
cs=0x5bf;eip=0x000927; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 13049                  mov     [bp+var_4], 0 ;~ 05BF:0927
cs=0x5bf;eip=0x00092c; 	X(PUSH(*(dw*)(raddr(ss,bp+mode+2))));	// 13050                  push    word ptr [bp+mode+2] ;~ 05BF:092C
cs=0x5bf;eip=0x00092f; 	X(PUSH(*(dw*)(raddr(ss,bp+mode))));	// 13051                  push    word ptr [bp+mode] ; mode ;~ 05BF:092F
cs=0x5bf;eip=0x000932; 	X(PUSH(*(dw*)(raddr(ss,bp+path+2))));	// 13052                  push    word ptr [bp+path+2] ;~ 05BF:0932
cs=0x5bf;eip=0x000935; 	X(PUSH(*(dw*)(raddr(ss,bp+path))));	// 13053                  push    word ptr [bp+path] ; path ;~ 05BF:0935
cs=0x5bf;eip=0x000938; 	J(CALLF(___fopen,0));	// 13054                  call    ___fopen ;~ 05BF:0938
cs=0x5bf;eip=0x00093d; 	T(ADD(sp, 8));	// 13056                  add     sp, 8 ;~ 05BF:093D
cs=0x5bf;eip=0x000940; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 13057                  mov     [bp+var_2], dx ;~ 05BF:0940
cs=0x5bf;eip=0x000943; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 13058                  mov     [bp+var_4], ax ;~ 05BF:0943
cs=0x5bf;eip=0x000946; 	T(OR(ax, dx));	// 13059                  or      ax, dx ;~ 05BF:0946
cs=0x5bf;eip=0x000948; 	J(JNZ(loc_14b25));	// 13060                  jnz     short loc_14B25 ;~ 05BF:0948
cs=0x5bf;eip=0x00094a; 	X(PUSH(ds));	// 13061                  push    ds ;~ 05BF:094A
cs=0x5bf;eip=0x00094b; 	X(PUSH(offset(dseg,__acannotopenfile)));	// 13062                  push    offset __aCannotOpenFile ;~ 05BF:094B
cs=0x5bf;eip=0x00094e; 	X(PUSH(cs));	// 13063                  push    cs ;~ 05BF:094E
cs=0x5bf;eip=0x00094f; 	J(CALL(sub_14998,0));	// 13064                  call    near ptr sub_14998 ;~ 05BF:094F
cs=0x5bf;eip=0x000952; 	T(ADD(sp, 4));	// 13066                  add     sp, 4 ;~ 05BF:0952
loc_14b25:
	// 5117 
cs=0x5bf;eip=0x000955; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 13069                  mov     dx, [bp+var_2] ;~ 05BF:0955
cs=0x5bf;eip=0x000958; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 13070                  mov     ax, [bp+var_4] ;~ 05BF:0958
cs=0x5bf;eip=0x00095b; 	T(LEAVE);	// 13071                  leave ;~ 05BF:095B
cs=0x5bf;eip=0x00095c; 	J(RETF(0));	// 13072                  retf ;~ 05BF:095C

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_14b25: 	goto loc_14b25;
        case m2c::ksub_14aee: 	goto sub_14aee;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_14b2d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_14b2d:
    _begin:
#undef stream
#define stream 6
	// 13083 stream          = dword ptr  6 ;~ 05BF:095D
#undef offset1
#define offset1 0x0A
	// 13084 offset1         = dword ptr  0Ah ;~ 05BF:095D
#undef whence
#define whence 0x0E
	// 13085 whence          = word ptr  0Eh ;~ 05BF:095D
cs=0x5bf;eip=0x00095d; 	X(PUSH(bp));	// 13087                  push    bp ;~ 05BF:095D
cs=0x5bf;eip=0x00095e; 	T(bp = sp;);	// 13088                  mov     bp, sp ;~ 05BF:095E
cs=0x5bf;eip=0x000960; 	X(PUSH(*(dw*)(raddr(ss,bp+whence))));	// 13089                  push    [bp+whence]     ; whence ;~ 05BF:0960
cs=0x5bf;eip=0x000963; 	X(PUSH(*(dw*)(raddr(ss,bp+offset1+2))));	// 13090                  push    word ptr [bp+offset1+2] ;~ 05BF:0963
cs=0x5bf;eip=0x000966; 	X(PUSH(*(dw*)(raddr(ss,bp+offset1))));	// 13091                  push    word ptr [bp+offset1] ; offset ;~ 05BF:0966
cs=0x5bf;eip=0x000969; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 13092                  push    word ptr [bp+stream+2] ;~ 05BF:0969
cs=0x5bf;eip=0x00096c; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 13093                  push    word ptr [bp+stream] ; stream ;~ 05BF:096C
cs=0x5bf;eip=0x00096f; 	J(CALLF(___fseek,0));	// 13094                  call    ___fseek ;~ 05BF:096F
cs=0x5bf;eip=0x000974; 	T(ADD(sp, 0x0A));	// 13095                  add     sp, 0Ah ;~ 05BF:0974
cs=0x5bf;eip=0x000977; 	T(OR(ax, ax));	// 13096                  or      ax, ax ;~ 05BF:0977
cs=0x5bf;eip=0x000979; 	J(JZ(loc_14b56));	// 13097                  jz      short loc_14B56 ;~ 05BF:0979
cs=0x5bf;eip=0x00097b; 	X(PUSH(ds));	// 13098                  push    ds ;~ 05BF:097B
cs=0x5bf;eip=0x00097c; 	X(PUSH(offset(dseg,__acannotfseekint)));	// 13099                  push    offset __aCannotFseekInt ;~ 05BF:097C
cs=0x5bf;eip=0x00097f; 	X(PUSH(cs));	// 13100                  push    cs ;~ 05BF:097F
cs=0x5bf;eip=0x000980; 	J(CALL(sub_14998,0));	// 13101                  call    near ptr sub_14998 ;~ 05BF:0980
cs=0x5bf;eip=0x000983; 	T(ADD(sp, 4));	// 13103                  add     sp, 4 ;~ 05BF:0983
loc_14b56:
	// 5118 
cs=0x5bf;eip=0x000986; 	X(POP(bp));	// 13106                  pop     bp ;~ 05BF:0986
cs=0x5bf;eip=0x000987; 	J(RETF(0));	// 13107                  retf ;~ 05BF:0987

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_14b56: 	goto loc_14b56;
        case m2c::ksub_14b2d: 	goto sub_14b2d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_14b58(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_14b58:
    _begin:
#undef stream
#define stream 6
	// 13118 stream          = dword ptr  6 ;~ 05BF:0988
#undef n
#define n 0x0A
	// 13119 n               = word ptr  0Ah ;~ 05BF:0988
#undef ptr
#define ptr 0x0C
	// 13120 ptr             = dword ptr  0Ch ;~ 05BF:0988
cs=0x5bf;eip=0x000988; 	X(PUSH(bp));	// 13122                  push    bp ;~ 05BF:0988
cs=0x5bf;eip=0x000989; 	T(bp = sp;);	// 13123                  mov     bp, sp ;~ 05BF:0989
cs=0x5bf;eip=0x00098b; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 13124                  push    word ptr [bp+stream+2] ;~ 05BF:098B
cs=0x5bf;eip=0x00098e; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 13125                  push    word ptr [bp+stream] ; stream ;~ 05BF:098E
cs=0x5bf;eip=0x000991; 	X(PUSH(*(dw*)(raddr(ss,bp+n))));	// 13126                  push    [bp+n]          ; n ;~ 05BF:0991
cs=0x5bf;eip=0x000994; 	X(PUSH(1));	// 13127                  push    1               ; size ;~ 05BF:0994
cs=0x5bf;eip=0x000996; 	X(PUSH(*(dw*)(raddr(ss,bp+ptr+2))));	// 13128                  push    word ptr [bp+ptr+2] ;~ 05BF:0996
cs=0x5bf;eip=0x000999; 	X(PUSH(*(dw*)(raddr(ss,bp+ptr))));	// 13129                  push    word ptr [bp+ptr] ; ptr ;~ 05BF:0999
cs=0x5bf;eip=0x00099c; 	J(CALLF(___fwrite,0));	// 13130                  call    ___fwrite ;~ 05BF:099C
cs=0x5bf;eip=0x0009a1; 	T(ADD(sp, 0x0C));	// 13131                  add     sp, 0Ch ;~ 05BF:09A1
cs=0x5bf;eip=0x0009a4; 	T(CMP(ax, *(dw*)(raddr(ss,bp+n))));	// 13132                  cmp     ax, [bp+n] ;~ 05BF:09A4
cs=0x5bf;eip=0x0009a7; 	J(JZ(loc_14b84));	// 13133                  jz      short loc_14B84 ;~ 05BF:09A7
cs=0x5bf;eip=0x0009a9; 	X(PUSH(ds));	// 13134                  push    ds ;~ 05BF:09A9
cs=0x5bf;eip=0x0009aa; 	X(PUSH(offset(dseg,__acannotwritetof)));	// 13135                  push    offset __aCannotWriteToF ;~ 05BF:09AA
cs=0x5bf;eip=0x0009ad; 	X(PUSH(cs));	// 13136                  push    cs ;~ 05BF:09AD
cs=0x5bf;eip=0x0009ae; 	J(CALL(sub_14998,0));	// 13137                  call    near ptr sub_14998 ;~ 05BF:09AE
cs=0x5bf;eip=0x0009b1; 	T(ADD(sp, 4));	// 13139                  add     sp, 4 ;~ 05BF:09B1
loc_14b84:
	// 5119 
cs=0x5bf;eip=0x0009b4; 	X(POP(bp));	// 13142                  pop     bp ;~ 05BF:09B4
cs=0x5bf;eip=0x0009b5; 	J(RETF(0));	// 13143                  retf ;~ 05BF:09B5

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_14b84: 	goto loc_14b84;
        case m2c::ksub_14b58: 	goto sub_14b58;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_14b86(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_14b86:
    _begin:
#undef stream
#define stream 6
	// 13155 stream          = dword ptr  6 ;~ 05BF:09B6
#undef n
#define n 0x0A
	// 13156 n               = word ptr  0Ah ;~ 05BF:09B6
#undef ptr
#define ptr 0x0C
	// 13157 ptr             = dword ptr  0Ch ;~ 05BF:09B6
cs=0x5bf;eip=0x0009b6; 	X(PUSH(bp));	// 13159                  push    bp ;~ 05BF:09B6
cs=0x5bf;eip=0x0009b7; 	T(bp = sp;);	// 13160                  mov     bp, sp ;~ 05BF:09B7
cs=0x5bf;eip=0x0009b9; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 13161                  push    word ptr [bp+stream+2] ;~ 05BF:09B9
cs=0x5bf;eip=0x0009bc; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 13162                  push    word ptr [bp+stream] ; stream ;~ 05BF:09BC
cs=0x5bf;eip=0x0009bf; 	X(PUSH(*(dw*)(raddr(ss,bp+n))));	// 13163                  push    [bp+n]          ; n ;~ 05BF:09BF
cs=0x5bf;eip=0x0009c2; 	X(PUSH(1));	// 13164                  push    1               ; size ;~ 05BF:09C2
cs=0x5bf;eip=0x0009c4; 	X(PUSH(*(dw*)(raddr(ss,bp+ptr+2))));	// 13165                  push    word ptr [bp+ptr+2] ;~ 05BF:09C4
cs=0x5bf;eip=0x0009c7; 	X(PUSH(*(dw*)(raddr(ss,bp+ptr))));	// 13166                  push    word ptr [bp+ptr] ; ptr ;~ 05BF:09C7
cs=0x5bf;eip=0x0009ca; 	J(CALLF(___fread,0));	// 13167                  call    ___fread ;~ 05BF:09CA
cs=0x5bf;eip=0x0009cf; 	T(ADD(sp, 0x0C));	// 13169                  add     sp, 0Ch ;~ 05BF:09CF
cs=0x5bf;eip=0x0009d2; 	T(CMP(ax, *(dw*)(raddr(ss,bp+n))));	// 13170                  cmp     ax, [bp+n] ;~ 05BF:09D2
cs=0x5bf;eip=0x0009d5; 	J(JZ(loc_14bb2));	// 13171                  jz      short loc_14BB2 ;~ 05BF:09D5
cs=0x5bf;eip=0x0009d7; 	X(PUSH(ds));	// 13172                  push    ds ;~ 05BF:09D7
cs=0x5bf;eip=0x0009d8; 	X(PUSH(offset(dseg,__acannotreadfrom)));	// 13173                  push    offset __aCannotReadFrom ;~ 05BF:09D8
cs=0x5bf;eip=0x0009db; 	X(PUSH(cs));	// 13174                  push    cs ;~ 05BF:09DB
cs=0x5bf;eip=0x0009dc; 	J(CALL(sub_14998,0));	// 13175                  call    near ptr sub_14998 ;~ 05BF:09DC
cs=0x5bf;eip=0x0009df; 	T(ADD(sp, 4));	// 13177                  add     sp, 4 ;~ 05BF:09DF
loc_14bb2:
	// 5120 
cs=0x5bf;eip=0x0009e2; 	X(POP(bp));	// 13180                  pop     bp ;~ 05BF:09E2
cs=0x5bf;eip=0x0009e3; 	J(RETF(0));	// 13181                  retf ;~ 05BF:09E3

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_14bb2: 	goto loc_14bb2;
        case m2c::ksub_14b86: 	goto sub_14b86;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_14bb4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_14bb4:
    _begin:
#undef stream
#define stream 6
	// 13193 stream          = dword ptr  6 ;~ 05BF:09E4
cs=0x5bf;eip=0x0009e4; 	X(PUSH(bp));	// 13195                  push    bp ;~ 05BF:09E4
cs=0x5bf;eip=0x0009e5; 	T(bp = sp;);	// 13196                  mov     bp, sp ;~ 05BF:09E5
cs=0x5bf;eip=0x0009e7; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 13197                  push    word ptr [bp+stream+2] ;~ 05BF:09E7
cs=0x5bf;eip=0x0009ea; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 13198                  push    word ptr [bp+stream] ; stream ;~ 05BF:09EA
cs=0x5bf;eip=0x0009ed; 	J(CALLF(___fclose,0));	// 13199                  call    ___fclose ;~ 05BF:09ED
cs=0x5bf;eip=0x0009f2; 	T(ADD(sp, 4));	// 13201                  add     sp, 4 ;~ 05BF:09F2
cs=0x5bf;eip=0x0009f5; 	T(CMP(ax, 0x0FFFF));	// 13202                  cmp     ax, 0FFFFh ;~ 05BF:09F5
cs=0x5bf;eip=0x0009f8; 	J(JNZ(loc_14bd5));	// 13203                  jnz     short loc_14BD5 ;~ 05BF:09F8
cs=0x5bf;eip=0x0009fa; 	X(PUSH(ds));	// 13204                  push    ds ;~ 05BF:09FA
cs=0x5bf;eip=0x0009fb; 	X(PUSH(offset(dseg,__acannotclosefil)));	// 13205                  push    offset __aCannotCloseFil ;~ 05BF:09FB
cs=0x5bf;eip=0x0009fe; 	X(PUSH(cs));	// 13206                  push    cs ;~ 05BF:09FE
cs=0x5bf;eip=0x0009ff; 	J(CALL(sub_14998,0));	// 13207                  call    near ptr sub_14998 ;~ 05BF:09FF
cs=0x5bf;eip=0x000a02; 	T(ADD(sp, 4));	// 13209                  add     sp, 4 ;~ 05BF:0A02
loc_14bd5:
	// 5121 
cs=0x5bf;eip=0x000a05; 	X(POP(bp));	// 13212                  pop     bp ;~ 05BF:0A05
cs=0x5bf;eip=0x000a06; 	J(RETF(0));	// 13213                  retf ;~ 05BF:0A06

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_14bd5: 	goto loc_14bd5;
        case m2c::ksub_14bb4: 	goto sub_14bb4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_14bd7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_14bd7:
    _begin:
#undef n
#define n -8
	// 13225 n               = word ptr -8 ;~ 05BF:0A07
#undef var_6
#define var_6 -6
	// 13226 var_6           = word ptr -6 ;~ 05BF:0A07
#undef stream
#define stream -4
	// 13227 stream          = dword ptr -4 ;~ 05BF:0A07
#undef path
#define path 6
	// 13228 path            = dword ptr  6 ;~ 05BF:0A07
#undef arg_4
#define arg_4 0x0A
	// 13229 arg_4           = word ptr  0Ah ;~ 05BF:0A07
#undef arg_6
#define arg_6 0x0C
	// 13230 arg_6           = word ptr  0Ch ;~ 05BF:0A07
cs=0x5bf;eip=0x000a07; 	X(ENTER(8, 0));	// 13232                  enter   8, 0 ;~ 05BF:0A07
cs=0x5bf;eip=0x000a0b; 	X(PUSH(ds));	// 13233                  push    ds ;~ 05BF:0A0B
cs=0x5bf;eip=0x000a0c; 	X(PUSH(offset(dseg,__arb)));	// 13234                  push    offset __aRb    ; mode ;~ 05BF:0A0C
cs=0x5bf;eip=0x000a0f; 	X(PUSH(*(dw*)(raddr(ss,bp+path+2))));	// 13235                  push    word ptr [bp+path+2] ;~ 05BF:0A0F
cs=0x5bf;eip=0x000a12; 	X(PUSH(*(dw*)(raddr(ss,bp+path))));	// 13236                  push    word ptr [bp+path] ; path ;~ 05BF:0A12
cs=0x5bf;eip=0x000a15; 	X(PUSH(cs));	// 13237                  push    cs ;~ 05BF:0A15
cs=0x5bf;eip=0x000a16; 	J(CALL(sub_14aee,0));	// 13238                  call    near ptr sub_14AEE ;~ 05BF:0A16
cs=0x5bf;eip=0x000a19; 	T(ADD(sp, 8));	// 13239                  add     sp, 8 ;~ 05BF:0A19
cs=0x5bf;eip=0x000a1c; 	X(MOV(*(dw*)(raddr(ss,bp+stream+2)), dx));	// 13240                  mov     word ptr [bp+stream+2], dx ;~ 05BF:0A1C
cs=0x5bf;eip=0x000a1f; 	X(MOV(*(dw*)(raddr(ss,bp+stream)), ax));	// 13241                  mov     word ptr [bp+stream], ax ;~ 05BF:0A1F
cs=0x5bf;eip=0x000a22; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 13242                  les     bx, [bp+stream] ;~ 05BF:0A22
cs=0x5bf;eip=0x000a25; 	T(MOV(al, *(raddr(es,bx+4))));	// 13244                  mov     al, es:[bx+4] ;~ 05BF:0A25
cs=0x5bf;eip=0x000a29; 	T(CBW);	// 13245                  cbw ;~ 05BF:0A29
cs=0x5bf;eip=0x000a2a; 	X(PUSH(ax));	// 13246                  push    ax              ; handle ;~ 05BF:0A2A
cs=0x5bf;eip=0x000a2b; 	J(CALLF(___filelength,0));	// 13247                  call    ___filelength ;~ 05BF:0A2B
cs=0x5bf;eip=0x000a30; 	X(POP(cx));	// 13248                  pop     cx ;~ 05BF:0A30
cs=0x5bf;eip=0x000a31; 	T(CWD);	// 13249                  cwd ;~ 05BF:0A31
cs=0x5bf;eip=0x000a32; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 13250                  mov     [bp+var_6], dx ;~ 05BF:0A32
cs=0x5bf;eip=0x000a35; 	X(MOV(*(dw*)(raddr(ss,bp+n)), ax));	// 13251                  mov     [bp+n], ax ;~ 05BF:0A35
cs=0x5bf;eip=0x000a38; 	T(ax = 0x0FFDC;);	// 13252                  mov     ax, 0FFDCh ;~ 05BF:0A38
cs=0x5bf;eip=0x000a3b; 	T(SUB(ax, *(dw*)(raddr(ss,bp+n))));	// 13253                  sub     ax, [bp+n] ;~ 05BF:0A3B
cs=0x5bf;eip=0x000a3e; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 13254                  mov     dx, [bp+arg_4] ;~ 05BF:0A3E
cs=0x5bf;eip=0x000a41; 	T(ADD(dx, ax));	// 13255                  add     dx, ax ;~ 05BF:0A41
cs=0x5bf;eip=0x000a43; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 13256                  push    [bp+arg_6] ;~ 05BF:0A43
cs=0x5bf;eip=0x000a46; 	X(PUSH(dx));	// 13257                  push    dx              ; ptr ;~ 05BF:0A46
cs=0x5bf;eip=0x000a47; 	X(PUSH(*(dw*)(raddr(ss,bp+n))));	// 13258                  push    [bp+n]          ; n ;~ 05BF:0A47
cs=0x5bf;eip=0x000a4a; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 13259                  push    word ptr [bp+stream+2] ;~ 05BF:0A4A
cs=0x5bf;eip=0x000a4d; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 13260                  push    word ptr [bp+stream] ; stream ;~ 05BF:0A4D
cs=0x5bf;eip=0x000a50; 	X(PUSH(cs));	// 13261                  push    cs ;~ 05BF:0A50
cs=0x5bf;eip=0x000a51; 	J(CALL(sub_14b86,0));	// 13262                  call    near ptr sub_14B86 ;~ 05BF:0A51
cs=0x5bf;eip=0x000a54; 	T(ADD(sp, 0x0A));	// 13263                  add     sp, 0Ah ;~ 05BF:0A54
cs=0x5bf;eip=0x000a57; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 13264                  push    word ptr [bp+stream+2] ;~ 05BF:0A57
cs=0x5bf;eip=0x000a5a; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 13265                  push    word ptr [bp+stream] ; stream ;~ 05BF:0A5A
cs=0x5bf;eip=0x000a5d; 	X(PUSH(cs));	// 13266                  push    cs ;~ 05BF:0A5D
cs=0x5bf;eip=0x000a5e; 	J(CALL(sub_14bb4,0));	// 13267                  call    near ptr sub_14BB4 ;~ 05BF:0A5E
cs=0x5bf;eip=0x000a61; 	T(ADD(sp, 4));	// 13268                  add     sp, 4 ;~ 05BF:0A61
cs=0x5bf;eip=0x000a64; 	T(ax = 0x0FFDC;);	// 13269                  mov     ax, 0FFDCh ;~ 05BF:0A64
cs=0x5bf;eip=0x000a67; 	T(SUB(ax, *(dw*)(raddr(ss,bp+n))));	// 13270                  sub     ax, [bp+n] ;~ 05BF:0A67
cs=0x5bf;eip=0x000a6a; 	X(PUSH(ax));	// 13271                  push    ax ;~ 05BF:0A6A
cs=0x5bf;eip=0x000a6b; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 13272                  push    [bp+arg_6] ;~ 05BF:0A6B
cs=0x5bf;eip=0x000a6e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 13273                  push    [bp+arg_4] ;~ 05BF:0A6E
cs=0x5bf;eip=0x000a71; 	T(NOP);	// 13274                  nop ;~ 05BF:0A71
cs=0x5bf;eip=0x000a72; 	X(PUSH(cs));	// 13275                  push    cs ;~ 05BF:0A72
cs=0x5bf;eip=0x000a73; 	J(CALL(sub_14cd6,0));	// 13276                  call    near ptr sub_14CD6 ;~ 05BF:0A73
cs=0x5bf;eip=0x000a76; 	T(ADD(sp, 6));	// 13277                  add     sp, 6 ;~ 05BF:0A76
cs=0x5bf;eip=0x000a79; 	T(LEAVE);	// 13278                  leave ;~ 05BF:0A79
cs=0x5bf;eip=0x000a7a; 	J(RETF(0));	// 13279                  retf ;~ 05BF:0A7A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_14bd7: 	goto sub_14bd7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg001_a7b_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg001_a7b_proc:
    _begin:
cs=0x5bf;eip=0x000a7b; 	X(ENTER(4, 0));	// 13283                  enter   4, 0 ;~ 05BF:0A7B
cs=0x5bf;eip=0x000a7f; 	X(PUSH(0x0FA00));	// 13284                  push    0FA00h ;~ 05BF:0A7F
cs=0x5bf;eip=0x000a82; 	X(PUSH(0));	// 13285                  push    0 ;~ 05BF:0A82
cs=0x5bf;eip=0x000a84; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0C))));	// 13286                  push    word ptr [bp+0Ch] ;~ 05BF:0A84
cs=0x5bf;eip=0x000a87; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0A))));	// 13287                  push    word ptr [bp+0Ah] ;~ 05BF:0A87
cs=0x5bf;eip=0x000a8a; 	J(CALLF(___memset,0));	// 13288                  call    ___memset ;~ 05BF:0A8A
cs=0x5bf;eip=0x000a8f; 	T(ADD(sp, 8));	// 13289                  add     sp, 8 ;~ 05BF:0A8F
cs=0x5bf;eip=0x000a92; 	X(PUSH(ds));	// 13290                  push    ds ;~ 05BF:0A92
cs=0x5bf;eip=0x000a93; 	X(PUSH(offset(dseg,__arb_2)));	// 13291                  push    offset __aRb_2 ;~ 05BF:0A93
cs=0x5bf;eip=0x000a96; 	X(PUSH(*(dw*)(raddr(ss,bp+8))));	// 13292                  push    word ptr [bp+8] ;~ 05BF:0A96
cs=0x5bf;eip=0x000a99; 	X(PUSH(*(dw*)(raddr(ss,bp+6))));	// 13293                  push    word ptr [bp+6] ;~ 05BF:0A99
cs=0x5bf;eip=0x000a9c; 	X(PUSH(cs));	// 13294                  push    cs ;~ 05BF:0A9C
cs=0x5bf;eip=0x000a9d; 	J(CALL(sub_14aee,0));	// 13295                  call    near ptr sub_14AEE ;~ 05BF:0A9D
cs=0x5bf;eip=0x000aa0; 	T(ADD(sp, 8));	// 13296                  add     sp, 8 ;~ 05BF:0AA0
cs=0x5bf;eip=0x000aa3; 	X(MOV(*(dw*)(raddr(ss,bp-2)), dx));	// 13297                  mov     [bp-2], dx ;~ 05BF:0AA3
cs=0x5bf;eip=0x000aa6; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 13298                  mov     [bp-4], ax ;~ 05BF:0AA6
cs=0x5bf;eip=0x000aa9; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0C))));	// 13299                  push    word ptr [bp+0Ch] ;~ 05BF:0AA9
cs=0x5bf;eip=0x000aac; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0A))));	// 13300                  push    word ptr [bp+0Ah] ;~ 05BF:0AAC
cs=0x5bf;eip=0x000aaf; 	X(PUSH(0x0FA00));	// 13301                  push    0FA00h ;~ 05BF:0AAF
cs=0x5bf;eip=0x000ab2; 	X(PUSH(dx));	// 13302                  push    dx ;~ 05BF:0AB2
cs=0x5bf;eip=0x000ab3; 	X(PUSH(ax));	// 13303                  push    ax ;~ 05BF:0AB3
cs=0x5bf;eip=0x000ab4; 	X(PUSH(cs));	// 13304                  push    cs ;~ 05BF:0AB4
cs=0x5bf;eip=0x000ab5; 	J(CALL(sub_14b86,0));	// 13305                  call    near ptr sub_14B86 ;~ 05BF:0AB5
cs=0x5bf;eip=0x000ab8; 	T(ADD(sp, 0x0A));	// 13306                  add     sp, 0Ah ;~ 05BF:0AB8
cs=0x5bf;eip=0x000abb; 	X(PUSH(*(dw*)(raddr(ss,bp-2))));	// 13307                  push    word ptr [bp-2] ;~ 05BF:0ABB
cs=0x5bf;eip=0x000abe; 	X(PUSH(*(dw*)(raddr(ss,bp-4))));	// 13308                  push    word ptr [bp-4] ;~ 05BF:0ABE
cs=0x5bf;eip=0x000ac1; 	X(PUSH(cs));	// 13309                  push    cs ;~ 05BF:0AC1
cs=0x5bf;eip=0x000ac2; 	J(CALL(sub_14bb4,0));	// 13310                  call    near ptr sub_14BB4 ;~ 05BF:0AC2
cs=0x5bf;eip=0x000ac5; 	T(ADD(sp, 4));	// 13311                  add     sp, 4 ;~ 05BF:0AC5
cs=0x5bf;eip=0x000ac8; 	T(LEAVE);	// 13312                  leave ;~ 05BF:0AC8
cs=0x5bf;eip=0x000ac9; 	J(RETF(0));	// 13313                  retf ;~ 05BF:0AC9

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg001_a7b_proc: 	goto seg001_a7b_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_14c9a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_14c9a:
    _begin:
#undef stream
#define stream -4
	// 13323 stream          = dword ptr -4 ;~ 05BF:0ACA
#undef path
#define path 6
	// 13324 path            = dword ptr  6 ;~ 05BF:0ACA
#undef ptr
#define ptr 0x0A
	// 13325 ptr             = dword ptr  0Ah ;~ 05BF:0ACA
cs=0x5bf;eip=0x000aca; 	X(ENTER(4, 0));	// 13327                  enter   4, 0 ;~ 05BF:0ACA
cs=0x5bf;eip=0x000ace; 	X(PUSH(ds));	// 13328                  push    ds ;~ 05BF:0ACE
cs=0x5bf;eip=0x000acf; 	X(PUSH(offset(dseg,__arb_4)));	// 13329                  push    offset __aRb_4  ; mode ;~ 05BF:0ACF
cs=0x5bf;eip=0x000ad2; 	X(PUSH(*(dw*)(raddr(ss,bp+path+2))));	// 13330                  push    word ptr [bp+path+2] ;~ 05BF:0AD2
cs=0x5bf;eip=0x000ad5; 	X(PUSH(*(dw*)(raddr(ss,bp+path))));	// 13331                  push    word ptr [bp+path] ; path ;~ 05BF:0AD5
cs=0x5bf;eip=0x000ad8; 	X(PUSH(cs));	// 13332                  push    cs ;~ 05BF:0AD8
cs=0x5bf;eip=0x000ad9; 	J(CALL(sub_14aee,0));	// 13333                  call    near ptr sub_14AEE ;~ 05BF:0AD9
cs=0x5bf;eip=0x000adc; 	T(ADD(sp, 8));	// 13334                  add     sp, 8 ;~ 05BF:0ADC
cs=0x5bf;eip=0x000adf; 	X(MOV(*(dw*)(raddr(ss,bp+stream+2)), dx));	// 13335                  mov     word ptr [bp+stream+2], dx ;~ 05BF:0ADF
cs=0x5bf;eip=0x000ae2; 	X(MOV(*(dw*)(raddr(ss,bp+stream)), ax));	// 13336                  mov     word ptr [bp+stream], ax ;~ 05BF:0AE2
cs=0x5bf;eip=0x000ae5; 	X(PUSH(*(dw*)(raddr(ss,bp+ptr+2))));	// 13337                  push    word ptr [bp+ptr+2] ;~ 05BF:0AE5
cs=0x5bf;eip=0x000ae8; 	X(PUSH(*(dw*)(raddr(ss,bp+ptr))));	// 13338                  push    word ptr [bp+ptr] ; ptr ;~ 05BF:0AE8
cs=0x5bf;eip=0x000aeb; 	X(PUSH(0x300));	// 13339                  push    300h            ; n ;~ 05BF:0AEB
cs=0x5bf;eip=0x000aee; 	X(PUSH(dx));	// 13340                  push    dx ;~ 05BF:0AEE
cs=0x5bf;eip=0x000aef; 	X(PUSH(ax));	// 13341                  push    ax              ; stream ;~ 05BF:0AEF
cs=0x5bf;eip=0x000af0; 	X(PUSH(cs));	// 13342                  push    cs ;~ 05BF:0AF0
cs=0x5bf;eip=0x000af1; 	J(CALL(sub_14b86,0));	// 13343                  call    near ptr sub_14B86 ;~ 05BF:0AF1
cs=0x5bf;eip=0x000af4; 	T(ADD(sp, 0x0A));	// 13344                  add     sp, 0Ah ;~ 05BF:0AF4
cs=0x5bf;eip=0x000af7; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 13345                  push    word ptr [bp+stream+2] ;~ 05BF:0AF7
cs=0x5bf;eip=0x000afa; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 13346                  push    word ptr [bp+stream] ; stream ;~ 05BF:0AFA
cs=0x5bf;eip=0x000afd; 	X(PUSH(cs));	// 13347                  push    cs ;~ 05BF:0AFD
cs=0x5bf;eip=0x000afe; 	J(CALL(sub_14bb4,0));	// 13348                  call    near ptr sub_14BB4 ;~ 05BF:0AFE
cs=0x5bf;eip=0x000b01; 	T(ADD(sp, 4));	// 13349                  add     sp, 4 ;~ 05BF:0B01
cs=0x5bf;eip=0x000b04; 	T(LEAVE);	// 13350                  leave ;~ 05BF:0B04
cs=0x5bf;eip=0x000b05; 	J(RETF(0));	// 13351                  retf ;~ 05BF:0B05

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_14c9a: 	goto sub_14c9a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_14cd6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_14cd6:
    _begin:
#undef var_6
#define var_6 -6
	// 13361 var_6           = word ptr -6 ;~ 05BF:0B06
#undef var_4
#define var_4 -4
	// 13362 var_4           = word ptr -4 ;~ 05BF:0B06
#undef var_2
#define var_2 -2
	// 13363 var_2           = word ptr -2 ;~ 05BF:0B06
#undef arg_0
#define arg_0 6
	// 13364 arg_0           = dword ptr  6 ;~ 05BF:0B06
#undef arg_4
#define arg_4 0x0A
	// 13365 arg_4           = word ptr  0Ah ;~ 05BF:0B06
cs=0x5bf;eip=0x000b06; 	X(ENTER(6, 0));	// 13367                  enter   6, 0 ;~ 05BF:0B06
cs=0x5bf;eip=0x000b0a; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0));	// 13368                  mov     [bp+var_6], 0 ;~ 05BF:0B0A
cs=0x5bf;eip=0x000b0f; 	J(JMP(loc_14d69));	// 13369                  jmp     loc_14D69 ;~ 05BF:0B0F
loc_14ce2:
	// 5122 
cs=0x5bf;eip=0x000b12; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 13373                  les     bx, [bp+arg_0] ;~ 05BF:0B12
cs=0x5bf;eip=0x000b15; 	T(ADD(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 13374                  add     bx, [bp+arg_4] ;~ 05BF:0B15
cs=0x5bf;eip=0x000b18; 	T(CMP(*(raddr(es,bx)), 0x7E));	// 13375                  cmp     byte ptr es:[bx], 7Eh ; '~' ;~ 05BF:0B18
cs=0x5bf;eip=0x000b1c; 	J(JBE(loc_14d2e));	// 13376                  jbe     short loc_14D2E ;~ 05BF:0B1C
cs=0x5bf;eip=0x000b1e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 13377                  mov     bx, word ptr [bp+arg_0] ;~ 05BF:0B1E
cs=0x5bf;eip=0x000b21; 	T(ADD(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 13378                  add     bx, [bp+arg_4] ;~ 05BF:0B21
cs=0x5bf;eip=0x000b24; 	T(MOV(al, *(raddr(es,bx))));	// 13379                  mov     al, es:[bx] ;~ 05BF:0B24
cs=0x5bf;eip=0x000b27; 	T(ah = 0;);	// 13380                  mov     ah, 0 ;~ 05BF:0B27
cs=0x5bf;eip=0x000b29; 	T(ADD(ax, 0x0FF81));	// 13381                  add     ax, 0FF81h ;~ 05BF:0B29
cs=0x5bf;eip=0x000b2c; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 13382                  mov     [bp+var_4], ax ;~ 05BF:0B2C
cs=0x5bf;eip=0x000b2f; 	X(INC(*(dw*)(raddr(ss,bp+arg_4))));	// 13383                  inc     [bp+arg_4] ;~ 05BF:0B2F
cs=0x5bf;eip=0x000b32; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 13384                  mov     [bp+var_2], 0 ;~ 05BF:0B32
cs=0x5bf;eip=0x000b37; 	J(JMP(loc_14d21));	// 13385                  jmp     short loc_14D21 ;~ 05BF:0B37
loc_14d09:
	// 5123 
cs=0x5bf;eip=0x000b39; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 13389                  les     bx, [bp+arg_0] ;~ 05BF:0B39
cs=0x5bf;eip=0x000b3c; 	T(ADD(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 13390                  add     bx, [bp+arg_4] ;~ 05BF:0B3C
cs=0x5bf;eip=0x000b3f; 	T(MOV(al, *(raddr(es,bx))));	// 13391                  mov     al, es:[bx] ;~ 05BF:0B3F
cs=0x5bf;eip=0x000b42; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 13392                  mov     bx, word ptr [bp+arg_0] ;~ 05BF:0B42
cs=0x5bf;eip=0x000b45; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_6))));	// 13393                  add     bx, [bp+var_6] ;~ 05BF:0B45
cs=0x5bf;eip=0x000b48; 	X(MOV(*(raddr(es,bx)), al));	// 13394                  mov     es:[bx], al ;~ 05BF:0B48
cs=0x5bf;eip=0x000b4b; 	X(INC(*(dw*)(raddr(ss,bp+var_6))));	// 13395                  inc     [bp+var_6] ;~ 05BF:0B4B
cs=0x5bf;eip=0x000b4e; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 13396                  inc     [bp+var_2] ;~ 05BF:0B4E
loc_14d21:
	// 5124 
cs=0x5bf;eip=0x000b51; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 13399                  mov     ax, [bp+var_2] ;~ 05BF:0B51
cs=0x5bf;eip=0x000b54; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_4))));	// 13400                  cmp     ax, [bp+var_4] ;~ 05BF:0B54
cs=0x5bf;eip=0x000b57; 	J(JC(loc_14d09));	// 13401                  jb      short loc_14D09 ;~ 05BF:0B57
cs=0x5bf;eip=0x000b59; 	X(INC(*(dw*)(raddr(ss,bp+arg_4))));	// 13402                  inc     [bp+arg_4] ;~ 05BF:0B59
cs=0x5bf;eip=0x000b5c; 	J(JMP(loc_14d69));	// 13403                  jmp     short loc_14D69 ;~ 05BF:0B5C
loc_14d2e:
	// 5125 
cs=0x5bf;eip=0x000b5e; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 13407                  les     bx, [bp+arg_0] ;~ 05BF:0B5E
cs=0x5bf;eip=0x000b61; 	T(ADD(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 13408                  add     bx, [bp+arg_4] ;~ 05BF:0B61
cs=0x5bf;eip=0x000b64; 	T(MOV(al, *(raddr(es,bx))));	// 13409                  mov     al, es:[bx] ;~ 05BF:0B64
cs=0x5bf;eip=0x000b67; 	T(ah = 0;);	// 13410                  mov     ah, 0 ;~ 05BF:0B67
cs=0x5bf;eip=0x000b69; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 13411                  mov     [bp+var_4], ax ;~ 05BF:0B69
cs=0x5bf;eip=0x000b6c; 	X(INC(*(dw*)(raddr(ss,bp+arg_4))));	// 13412                  inc     [bp+arg_4] ;~ 05BF:0B6C
cs=0x5bf;eip=0x000b6f; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 13413                  mov     [bp+var_2], 0 ;~ 05BF:0B6F
cs=0x5bf;eip=0x000b74; 	J(JMP(loc_14d61));	// 13414                  jmp     short loc_14D61 ;~ 05BF:0B74
loc_14d46:
	// 5126 
cs=0x5bf;eip=0x000b76; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 13418                  les     bx, [bp+arg_0] ;~ 05BF:0B76
cs=0x5bf;eip=0x000b79; 	T(ADD(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 13419                  add     bx, [bp+arg_4] ;~ 05BF:0B79
cs=0x5bf;eip=0x000b7c; 	T(MOV(al, *(raddr(es,bx))));	// 13420                  mov     al, es:[bx] ;~ 05BF:0B7C
cs=0x5bf;eip=0x000b7f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 13421                  mov     bx, word ptr [bp+arg_0] ;~ 05BF:0B7F
cs=0x5bf;eip=0x000b82; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_6))));	// 13422                  add     bx, [bp+var_6] ;~ 05BF:0B82
cs=0x5bf;eip=0x000b85; 	X(MOV(*(raddr(es,bx)), al));	// 13423                  mov     es:[bx], al ;~ 05BF:0B85
cs=0x5bf;eip=0x000b88; 	X(INC(*(dw*)(raddr(ss,bp+arg_4))));	// 13424                  inc     [bp+arg_4] ;~ 05BF:0B88
cs=0x5bf;eip=0x000b8b; 	X(INC(*(dw*)(raddr(ss,bp+var_6))));	// 13425                  inc     [bp+var_6] ;~ 05BF:0B8B
cs=0x5bf;eip=0x000b8e; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 13426                  inc     [bp+var_2] ;~ 05BF:0B8E
loc_14d61:
	// 5127 
cs=0x5bf;eip=0x000b91; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 13429                  mov     ax, [bp+var_2] ;~ 05BF:0B91
cs=0x5bf;eip=0x000b94; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_4))));	// 13430                  cmp     ax, [bp+var_4] ;~ 05BF:0B94
cs=0x5bf;eip=0x000b97; 	J(JC(loc_14d46));	// 13431                  jb      short loc_14D46 ;~ 05BF:0B97
loc_14d69:
	// 5128 
cs=0x5bf;eip=0x000b99; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0x0FA00));	// 13435                  cmp     [bp+var_6], 0FA00h ;~ 05BF:0B99
cs=0x5bf;eip=0x000b9e; 	J(JNC(locret_14d73));	// 13436                  jnb     short locret_14D73 ;~ 05BF:0B9E
cs=0x5bf;eip=0x000ba0; 	J(JMP(loc_14ce2));	// 13437                  jmp     loc_14CE2 ;~ 05BF:0BA0
locret_14d73:
	// 5129 
cs=0x5bf;eip=0x000ba3; 	T(LEAVE);	// 13441                  leave ;~ 05BF:0BA3
cs=0x5bf;eip=0x000ba4; 	J(RETF(0));	// 13442                  retf ;~ 05BF:0BA4

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_14ce2: 	goto loc_14ce2;
        case m2c::kloc_14d09: 	goto loc_14d09;
        case m2c::kloc_14d21: 	goto loc_14d21;
        case m2c::kloc_14d2e: 	goto loc_14d2e;
        case m2c::kloc_14d46: 	goto loc_14d46;
        case m2c::kloc_14d61: 	goto loc_14d61;
        case m2c::kloc_14d69: 	goto loc_14d69;
        case m2c::klocret_14d73: 	goto locret_14d73;
        case m2c::ksub_14cd6: 	goto sub_14cd6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_14d75(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_14d75:
    _begin:
#undef stream
#define stream -4
	// 13453 stream          = dword ptr -4 ;~ 05BF:0BA5
cs=0x5bf;eip=0x000ba5; 	X(ENTER(4, 0));	// 13455                  enter   4, 0 ;~ 05BF:0BA5
cs=0x5bf;eip=0x000ba9; 	X(PUSH(ds));	// 13456                  push    ds ;~ 05BF:0BA9
cs=0x5bf;eip=0x000baa; 	X(PUSH(offset(dseg,__arb_5)));	// 13457                  push    offset __aRb_5  ; "rb" ;~ 05BF:0BAA
cs=0x5bf;eip=0x000bad; 	X(PUSH(ds));	// 13458                  push    ds ;~ 05BF:0BAD
cs=0x5bf;eip=0x000bae; 	X(PUSH(offset(dseg,__adetcfg00bin)));	// 13459                  push    offset __aDetcfg00Bin ; path ;~ 05BF:0BAE
cs=0x5bf;eip=0x000bb1; 	X(PUSH(cs));	// 13460                  push    cs ;~ 05BF:0BB1
cs=0x5bf;eip=0x000bb2; 	J(CALL(sub_14aee,0));	// 13461                  call    near ptr sub_14AEE ;~ 05BF:0BB2
cs=0x5bf;eip=0x000bb5; 	T(ADD(sp, 8));	// 13463                  add     sp, 8 ;~ 05BF:0BB5
cs=0x5bf;eip=0x000bb8; 	X(MOV(*(dw*)(raddr(ss,bp+stream+2)), dx));	// 13464                  mov     word ptr [bp+stream+2], dx ;~ 05BF:0BB8
cs=0x5bf;eip=0x000bbb; 	X(MOV(*(dw*)(raddr(ss,bp+stream)), ax));	// 13465                  mov     word ptr [bp+stream], ax ;~ 05BF:0BBB
cs=0x5bf;eip=0x000bbe; 	X(PUSH(*(dw*)(((db*)&__ptr)+2)));	// 13466                  push    word ptr __ptr+2 ;~ 05BF:0BBE
cs=0x5bf;eip=0x000bc2; 	X(PUSH(*(dw*)(&__ptr)));	// 13467                  push    word ptr __ptr  ; ptr ;~ 05BF:0BC2
cs=0x5bf;eip=0x000bc6; 	X(PUSH(0x177));	// 13468                  push    177h            ; n ;~ 05BF:0BC6
cs=0x5bf;eip=0x000bc9; 	X(PUSH(dx));	// 13469                  push    dx ;~ 05BF:0BC9
cs=0x5bf;eip=0x000bca; 	X(PUSH(ax));	// 13470                  push    ax              ; stream ;~ 05BF:0BCA
cs=0x5bf;eip=0x000bcb; 	X(PUSH(cs));	// 13471                  push    cs ;~ 05BF:0BCB
cs=0x5bf;eip=0x000bcc; 	J(CALL(sub_14b86,0));	// 13472                  call    near ptr sub_14B86 ;~ 05BF:0BCC
cs=0x5bf;eip=0x000bcf; 	T(ADD(sp, 0x0A));	// 13474                  add     sp, 0Ah ;~ 05BF:0BCF
cs=0x5bf;eip=0x000bd2; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 13475                  push    word ptr [bp+stream+2] ;~ 05BF:0BD2
cs=0x5bf;eip=0x000bd5; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 13476                  push    word ptr [bp+stream] ; stream ;~ 05BF:0BD5
cs=0x5bf;eip=0x000bd8; 	X(PUSH(cs));	// 13477                  push    cs ;~ 05BF:0BD8
cs=0x5bf;eip=0x000bd9; 	J(CALL(sub_14bb4,0));	// 13478                  call    near ptr sub_14BB4 ;~ 05BF:0BD9
cs=0x5bf;eip=0x000bdc; 	T(ADD(sp, 4));	// 13480                  add     sp, 4 ;~ 05BF:0BDC
cs=0x5bf;eip=0x000bdf; 	T(LEAVE);	// 13481                  leave ;~ 05BF:0BDF
cs=0x5bf;eip=0x000be0; 	J(RETF(0));	// 13482                  retf ;~ 05BF:0BE0

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_14d75: 	goto sub_14d75;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg001_be1_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg001_be1_proc:
    _begin:
cs=0x5bf;eip=0x000be1; 	X(ENTER(4, 0));	// 13486                  enter   4, 0 ;~ 05BF:0BE1
cs=0x5bf;eip=0x000be5; 	X(PUSH(ds));	// 13487                  push    ds ;~ 05BF:0BE5
cs=0x5bf;eip=0x000be6; 	X(PUSH(offset(dseg,__awb)));	// 13488                  push    offset __aWb ;~ 05BF:0BE6
cs=0x5bf;eip=0x000be9; 	X(PUSH(ds));	// 13489                  push    ds ;~ 05BF:0BE9
cs=0x5bf;eip=0x000bea; 	X(PUSH(offset(dseg,__adetcfg00bin_0)));	// 13490                  push    offset __aDetcfg00Bin_0 ;~ 05BF:0BEA
cs=0x5bf;eip=0x000bed; 	X(PUSH(cs));	// 13491                  push    cs ;~ 05BF:0BED
cs=0x5bf;eip=0x000bee; 	J(CALL(sub_14aee,0));	// 13492                  call    near ptr sub_14AEE ;~ 05BF:0BEE
cs=0x5bf;eip=0x000bf1; 	T(ADD(sp, 8));	// 13493                  add     sp, 8 ;~ 05BF:0BF1
cs=0x5bf;eip=0x000bf4; 	X(MOV(*(dw*)(raddr(ss,bp-2)), dx));	// 13494                  mov     [bp-2], dx ;~ 05BF:0BF4
cs=0x5bf;eip=0x000bf7; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 13495                  mov     [bp-4], ax ;~ 05BF:0BF7
cs=0x5bf;eip=0x000bfa; 	X(PUSH(*(dw*)(((db*)&__ptr)+2)));	// 13496                  push    word ptr __ptr+2 ;~ 05BF:0BFA
cs=0x5bf;eip=0x000bfe; 	X(PUSH(*(dw*)(&__ptr)));	// 13497                  push    word ptr __ptr ;~ 05BF:0BFE
cs=0x5bf;eip=0x000c02; 	X(PUSH(0x177));	// 13498                  push    177h ;~ 05BF:0C02
cs=0x5bf;eip=0x000c05; 	X(PUSH(dx));	// 13499                  push    dx ;~ 05BF:0C05
cs=0x5bf;eip=0x000c06; 	X(PUSH(ax));	// 13500                  push    ax ;~ 05BF:0C06
cs=0x5bf;eip=0x000c07; 	X(PUSH(cs));	// 13501                  push    cs ;~ 05BF:0C07
cs=0x5bf;eip=0x000c08; 	J(CALL(sub_14b58,0));	// 13502                  call    near ptr sub_14B58 ;~ 05BF:0C08
cs=0x5bf;eip=0x000c0b; 	T(ADD(sp, 0x0A));	// 13503                  add     sp, 0Ah ;~ 05BF:0C0B
cs=0x5bf;eip=0x000c0e; 	X(PUSH(*(dw*)(raddr(ss,bp-2))));	// 13504                  push    word ptr [bp-2] ;~ 05BF:0C0E
cs=0x5bf;eip=0x000c11; 	X(PUSH(*(dw*)(raddr(ss,bp-4))));	// 13505                  push    word ptr [bp-4] ;~ 05BF:0C11
cs=0x5bf;eip=0x000c14; 	X(PUSH(cs));	// 13506                  push    cs ;~ 05BF:0C14
cs=0x5bf;eip=0x000c15; 	J(CALL(sub_14bb4,0));	// 13507                  call    near ptr sub_14BB4 ;~ 05BF:0C15
cs=0x5bf;eip=0x000c18; 	T(ADD(sp, 4));	// 13508                  add     sp, 4 ;~ 05BF:0C18
cs=0x5bf;eip=0x000c1b; 	T(LEAVE);	// 13509                  leave ;~ 05BF:0C1B
cs=0x5bf;eip=0x000c1c; 	J(RETF(0));	// 13510                  retf ;~ 05BF:0C1C

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg001_be1_proc: 	goto seg001_be1_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_14ded(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_14ded:
    _begin:
cs=0x5bf;eip=0x000c1d; 	J(JMP(loc_14df4));	// 13517                  jmp     short loc_14DF4 ;~ 05BF:0C1D
loc_14def:
	// 5130 
cs=0x5bf;eip=0x000c1f; 	J(CALLF(___getch,0));	// 13521                  call    ___getch ;~ 05BF:0C1F
loc_14df4:
	// 5131 
cs=0x5bf;eip=0x000c24; 	J(CALLF(___kbhit,0));	// 13524                  call    ___kbhit ;~ 05BF:0C24
cs=0x5bf;eip=0x000c29; 	T(OR(ax, ax));	// 13525                  or      ax, ax ;~ 05BF:0C29
cs=0x5bf;eip=0x000c2b; 	J(JNZ(loc_14def));	// 13526                  jnz     short loc_14DEF ;~ 05BF:0C2B
cs=0x5bf;eip=0x000c2d; 	J(RETF(0));	// 13527                  retf ;~ 05BF:0C2D

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_14def: 	goto loc_14def;
        case m2c::kloc_14df4: 	goto loc_14df4;
        case m2c::ksub_14ded: 	goto sub_14ded;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_14dfe(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_14dfe:
    _begin:
cs=0x5bf;eip=0x000c2e; 	X(PUSH(0x300));	// 13535                  push    300h            ; n ;~ 05BF:0C2E
cs=0x5bf;eip=0x000c31; 	X(PUSH(0));	// 13536                  push    0               ; c ;~ 05BF:0C31
cs=0x5bf;eip=0x000c33; 	X(PUSH(*(dw*)(((db*)&__s)+2)));	// 13537                  push    word ptr __s+2 ;~ 05BF:0C33
cs=0x5bf;eip=0x000c37; 	X(PUSH(*(dw*)(&__s)));	// 13538                  push    word ptr __s    ; s ;~ 05BF:0C37
cs=0x5bf;eip=0x000c3b; 	J(CALLF(___memset,0));	// 13539                  call    ___memset ;~ 05BF:0C3B
cs=0x5bf;eip=0x000c40; 	T(ADD(sp, 8));	// 13540                  add     sp, 8 ;~ 05BF:0C40
cs=0x5bf;eip=0x000c43; 	X(PUSH(*(dw*)(((db*)&__s)+2)));	// 13541                  push    word ptr __s+2 ;~ 05BF:0C43
cs=0x5bf;eip=0x000c47; 	X(PUSH(*(dw*)(&__s)));	// 13542                  push    word ptr __s ;~ 05BF:0C47
cs=0x5bf;eip=0x000c4b; 	J(CALLF(sub_17256,0));	// 13543                  call    sub_17256 ;~ 05BF:0C4B
cs=0x5bf;eip=0x000c50; 	T(ADD(sp, 4));	// 13544                  add     sp, 4 ;~ 05BF:0C50
cs=0x5bf;eip=0x000c53; 	J(RETF(0));	// 13545                  retf ;~ 05BF:0C53

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_14dfe: 	goto sub_14dfe;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_14e24(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_14e24:
    _begin:
#undef var_4
#define var_4 -4
	// 13555 var_4           = word ptr -4 ;~ 05BF:0C54
#undef var_2
#define var_2 -2
	// 13556 var_2           = word ptr -2 ;~ 05BF:0C54
cs=0x5bf;eip=0x000c54; 	X(ENTER(4, 0));	// 13558                  enter   4, 0 ;~ 05BF:0C54
cs=0x5bf;eip=0x000c58; 	X(PUSH(0x300));	// 13559                  push    300h            ; n ;~ 05BF:0C58
cs=0x5bf;eip=0x000c5b; 	X(PUSH(word_1936b));	// 13560                  push    word_1936B ;~ 05BF:0C5B
cs=0x5bf;eip=0x000c5f; 	X(PUSH(__src));	// 13561                  push    __src           ; src ;~ 05BF:0C5F
cs=0x5bf;eip=0x000c63; 	X(PUSH(*(dw*)(((db*)&__s)+2)));	// 13562                  push    word ptr __s+2 ;~ 05BF:0C63
cs=0x5bf;eip=0x000c67; 	X(PUSH(*(dw*)(&__s)));	// 13563                  push    word ptr __s    ; dest ;~ 05BF:0C67
cs=0x5bf;eip=0x000c6b; 	J(CALLF(___memcpy,0));	// 13564                  call    ___memcpy ;~ 05BF:0C6B
cs=0x5bf;eip=0x000c70; 	T(ADD(sp, 0x0A));	// 13565                  add     sp, 0Ah ;~ 05BF:0C70
cs=0x5bf;eip=0x000c73; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 13566                  mov     [bp+var_2], 0 ;~ 05BF:0C73
cs=0x5bf;eip=0x000c78; 	J(JMP(loc_14e91));	// 13567                  jmp     short loc_14E91 ;~ 05BF:0C78
loc_14e4a:
	// 5132 
cs=0x5bf;eip=0x000c7a; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 13571                  mov     [bp+var_4], 0 ;~ 05BF:0C7A
cs=0x5bf;eip=0x000c7f; 	J(JMP(loc_14e77));	// 13572                  jmp     short loc_14E77 ;~ 05BF:0C7F
loc_14e51:
	// 5133 
cs=0x5bf;eip=0x000c81; 	T(LES(bx, __s));	// 13576                  les     bx, __s ;~ 05BF:0C81
cs=0x5bf;eip=0x000c85; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_4))));	// 13578                  add     bx, [bp+var_4] ;~ 05BF:0C85
cs=0x5bf;eip=0x000c88; 	T(CMP(*(raddr(es,bx)), 1));	// 13579                  cmp     byte ptr es:[bx], 1 ;~ 05BF:0C88
cs=0x5bf;eip=0x000c8c; 	J(JLE(loc_14e74));	// 13580                  jle     short loc_14E74 ;~ 05BF:0C8C
cs=0x5bf;eip=0x000c8e; 	T(bx = *(dw*)(&__s););	// 13581                  mov     bx, word ptr __s ;~ 05BF:0C8E
cs=0x5bf;eip=0x000c92; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_4))));	// 13582                  add     bx, [bp+var_4] ;~ 05BF:0C92
cs=0x5bf;eip=0x000c95; 	T(MOV(al, *(raddr(es,bx))));	// 13583                  mov     al, es:[bx] ;~ 05BF:0C95
cs=0x5bf;eip=0x000c98; 	T(DEC(al));	// 13584                  dec     al ;~ 05BF:0C98
cs=0x5bf;eip=0x000c9a; 	T(bx = *(dw*)(&__s););	// 13585                  mov     bx, word ptr __s ;~ 05BF:0C9A
cs=0x5bf;eip=0x000c9e; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_4))));	// 13586                  add     bx, [bp+var_4] ;~ 05BF:0C9E
cs=0x5bf;eip=0x000ca1; 	X(MOV(*(raddr(es,bx)), al));	// 13587                  mov     es:[bx], al ;~ 05BF:0CA1
loc_14e74:
	// 5134 
cs=0x5bf;eip=0x000ca4; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 13590                  inc     [bp+var_4] ;~ 05BF:0CA4
loc_14e77:
	// 5135 
cs=0x5bf;eip=0x000ca7; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0x300));	// 13593                  cmp     [bp+var_4], 300h ;~ 05BF:0CA7
cs=0x5bf;eip=0x000cac; 	J(JL(loc_14e51));	// 13594                  jl      short loc_14E51 ;~ 05BF:0CAC
cs=0x5bf;eip=0x000cae; 	X(PUSH(*(dw*)(((db*)&__s)+2)));	// 13595                  push    word ptr __s+2 ;~ 05BF:0CAE
cs=0x5bf;eip=0x000cb2; 	X(PUSH(*(dw*)(&__s)));	// 13596                  push    word ptr __s ;~ 05BF:0CB2
cs=0x5bf;eip=0x000cb6; 	J(CALLF(sub_17256,0));	// 13597                  call    sub_17256 ;~ 05BF:0CB6
cs=0x5bf;eip=0x000cbb; 	T(ADD(sp, 4));	// 13598                  add     sp, 4 ;~ 05BF:0CBB
cs=0x5bf;eip=0x000cbe; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 13599                  inc     [bp+var_2] ;~ 05BF:0CBE
loc_14e91:
	// 5136 
cs=0x5bf;eip=0x000cc1; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x3E));	// 13602                  cmp     [bp+var_2], 3Eh ; '>' ;~ 05BF:0CC1
cs=0x5bf;eip=0x000cc5; 	J(JL(loc_14e4a));	// 13603                  jl      short loc_14E4A ;~ 05BF:0CC5
cs=0x5bf;eip=0x000cc7; 	T(LEAVE);	// 13604                  leave ;~ 05BF:0CC7
cs=0x5bf;eip=0x000cc8; 	J(RETF(0));	// 13605                  retf ;~ 05BF:0CC8

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_14e4a: 	goto loc_14e4a;
        case m2c::kloc_14e51: 	goto loc_14e51;
        case m2c::kloc_14e74: 	goto loc_14e74;
        case m2c::kloc_14e77: 	goto loc_14e77;
        case m2c::kloc_14e91: 	goto loc_14e91;
        case m2c::ksub_14e24: 	goto sub_14e24;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_14e99(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_14e99:
    _begin:
#undef var_4
#define var_4 -4
	// 13616 var_4           = word ptr -4 ;~ 05BF:0CC9
#undef var_2
#define var_2 -2
	// 13617 var_2           = word ptr -2 ;~ 05BF:0CC9
cs=0x5bf;eip=0x000cc9; 	X(ENTER(4, 0));	// 13619                  enter   4, 0 ;~ 05BF:0CC9
cs=0x5bf;eip=0x000ccd; 	X(PUSH(0x300));	// 13620                  push    300h            ; n ;~ 05BF:0CCD
cs=0x5bf;eip=0x000cd0; 	X(PUSH(word_1936b));	// 13621                  push    word_1936B ;~ 05BF:0CD0
cs=0x5bf;eip=0x000cd4; 	X(PUSH(__src));	// 13622                  push    __src           ; src ;~ 05BF:0CD4
cs=0x5bf;eip=0x000cd8; 	X(PUSH(*(dw*)(((db*)&__s)+2)));	// 13623                  push    word ptr __s+2 ;~ 05BF:0CD8
cs=0x5bf;eip=0x000cdc; 	X(PUSH(*(dw*)(&__s)));	// 13624                  push    word ptr __s    ; dest ;~ 05BF:0CDC
cs=0x5bf;eip=0x000ce0; 	J(CALLF(___memcpy,0));	// 13625                  call    ___memcpy ;~ 05BF:0CE0
cs=0x5bf;eip=0x000ce5; 	T(ADD(sp, 0x0A));	// 13626                  add     sp, 0Ah ;~ 05BF:0CE5
cs=0x5bf;eip=0x000ce8; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 13627                  mov     [bp+var_4], 0 ;~ 05BF:0CE8
cs=0x5bf;eip=0x000ced; 	J(JMP(loc_14ed8));	// 13628                  jmp     short loc_14ED8 ;~ 05BF:0CED
loc_14ebf:
	// 5137 
cs=0x5bf;eip=0x000cef; 	T(LES(bx, __s));	// 13632                  les     bx, __s ;~ 05BF:0CEF
cs=0x5bf;eip=0x000cf3; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_4))));	// 13633                  add     bx, [bp+var_4] ;~ 05BF:0CF3
cs=0x5bf;eip=0x000cf6; 	T(MOV(al, *(raddr(es,bx))));	// 13634                  mov     al, es:[bx] ;~ 05BF:0CF6
cs=0x5bf;eip=0x000cf9; 	T(ADD(al, 0x0C1));	// 13635                  add     al, 0C1h ; '
cs=0x5bf;eip=0x000cfb; 	T(bx = *(dw*)(&__s););	// 13636                  mov     bx, word ptr __s ;~ 05BF:0CFB
cs=0x5bf;eip=0x000cff; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_4))));	// 13637                  add     bx, [bp+var_4] ;~ 05BF:0CFF
cs=0x5bf;eip=0x000d02; 	X(MOV(*(raddr(es,bx)), al));	// 13638                  mov     es:[bx], al ;~ 05BF:0D02
cs=0x5bf;eip=0x000d05; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 13639                  inc     [bp+var_4] ;~ 05BF:0D05
loc_14ed8:
	// 5138 
cs=0x5bf;eip=0x000d08; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0x300));	// 13642                  cmp     [bp+var_4], 300h ;~ 05BF:0D08
cs=0x5bf;eip=0x000d0d; 	J(JL(loc_14ebf));	// 13643                  jl      short loc_14EBF ;~ 05BF:0D0D
cs=0x5bf;eip=0x000d0f; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 13644                  mov     [bp+var_2], 0 ;~ 05BF:0D0F
cs=0x5bf;eip=0x000d14; 	J(JMP(loc_14f5f));	// 13645                  jmp     short loc_14F5F ;~ 05BF:0D14
loc_14ee6:
	// 5139 
cs=0x5bf;eip=0x000d16; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 13649                  mov     [bp+var_4], 0 ;~ 05BF:0D16
cs=0x5bf;eip=0x000d1b; 	J(JMP(loc_14f06));	// 13650                  jmp     short loc_14F06 ;~ 05BF:0D1B
loc_14eed:
	// 5140 
cs=0x5bf;eip=0x000d1d; 	T(LES(bx, __s));	// 13654                  les     bx, __s ;~ 05BF:0D1D
cs=0x5bf;eip=0x000d21; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_4))));	// 13655                  add     bx, [bp+var_4] ;~ 05BF:0D21
cs=0x5bf;eip=0x000d24; 	T(MOV(al, *(raddr(es,bx))));	// 13656                  mov     al, es:[bx] ;~ 05BF:0D24
cs=0x5bf;eip=0x000d27; 	T(ADD(al, 2));	// 13657                  add     al, 2 ;~ 05BF:0D27
cs=0x5bf;eip=0x000d29; 	T(bx = *(dw*)(&__s););	// 13658                  mov     bx, word ptr __s ;~ 05BF:0D29
cs=0x5bf;eip=0x000d2d; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_4))));	// 13659                  add     bx, [bp+var_4] ;~ 05BF:0D2D
cs=0x5bf;eip=0x000d30; 	X(MOV(*(raddr(es,bx)), al));	// 13660                  mov     es:[bx], al ;~ 05BF:0D30
cs=0x5bf;eip=0x000d33; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 13661                  inc     [bp+var_4] ;~ 05BF:0D33
loc_14f06:
	// 5141 
cs=0x5bf;eip=0x000d36; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0x300));	// 13664                  cmp     [bp+var_4], 300h ;~ 05BF:0D36
cs=0x5bf;eip=0x000d3b; 	J(JL(loc_14eed));	// 13665                  jl      short loc_14EED ;~ 05BF:0D3B
cs=0x5bf;eip=0x000d3d; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 13666                  mov     [bp+var_4], 0 ;~ 05BF:0D3D
cs=0x5bf;eip=0x000d42; 	J(JMP(loc_14f45));	// 13667                  jmp     short loc_14F45 ;~ 05BF:0D42
loc_14f14:
	// 5142 
cs=0x5bf;eip=0x000d44; 	T(LES(bx, __s));	// 13671                  les     bx, __s ;~ 05BF:0D44
cs=0x5bf;eip=0x000d48; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_4))));	// 13672                  add     bx, [bp+var_4] ;~ 05BF:0D48
cs=0x5bf;eip=0x000d4b; 	T(CMP(*(raddr(es,bx)), 0));	// 13673                  cmp     byte ptr es:[bx], 0 ;~ 05BF:0D4B
cs=0x5bf;eip=0x000d4f; 	J(JGE(loc_14f2e));	// 13674                  jge     short loc_14F2E ;~ 05BF:0D4F
cs=0x5bf;eip=0x000d51; 	T(LES(bx, dword_19371));	// 13675                  les     bx, dword_19371 ;~ 05BF:0D51
cs=0x5bf;eip=0x000d55; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_4))));	// 13676                  add     bx, [bp+var_4] ;~ 05BF:0D55
cs=0x5bf;eip=0x000d58; 	X(MOV(*(raddr(es,bx)), 0));	// 13677                  mov     byte ptr es:[bx], 0 ;~ 05BF:0D58
cs=0x5bf;eip=0x000d5c; 	J(JMP(loc_14f42));	// 13678                  jmp     short loc_14F42 ;~ 05BF:0D5C
loc_14f2e:
	// 5143 
cs=0x5bf;eip=0x000d5e; 	T(LES(bx, __s));	// 13682                  les     bx, __s ;~ 05BF:0D5E
cs=0x5bf;eip=0x000d62; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_4))));	// 13683                  add     bx, [bp+var_4] ;~ 05BF:0D62
cs=0x5bf;eip=0x000d65; 	T(MOV(al, *(raddr(es,bx))));	// 13684                  mov     al, es:[bx] ;~ 05BF:0D65
cs=0x5bf;eip=0x000d68; 	T(LES(bx, dword_19371));	// 13685                  les     bx, dword_19371 ;~ 05BF:0D68
cs=0x5bf;eip=0x000d6c; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_4))));	// 13686                  add     bx, [bp+var_4] ;~ 05BF:0D6C
cs=0x5bf;eip=0x000d6f; 	X(MOV(*(raddr(es,bx)), al));	// 13687                  mov     es:[bx], al ;~ 05BF:0D6F
loc_14f42:
	// 5144 
cs=0x5bf;eip=0x000d72; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 13690                  inc     [bp+var_4] ;~ 05BF:0D72
loc_14f45:
	// 5145 
cs=0x5bf;eip=0x000d75; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0x300));	// 13693                  cmp     [bp+var_4], 300h ;~ 05BF:0D75
cs=0x5bf;eip=0x000d7a; 	J(JL(loc_14f14));	// 13694                  jl      short loc_14F14 ;~ 05BF:0D7A
cs=0x5bf;eip=0x000d7c; 	X(PUSH(*(dw*)(((db*)&dword_19371)+2)));	// 13695                  push    word ptr dword_19371+2 ;~ 05BF:0D7C
cs=0x5bf;eip=0x000d80; 	X(PUSH(*(dw*)(&dword_19371)));	// 13696                  push    word ptr dword_19371 ;~ 05BF:0D80
cs=0x5bf;eip=0x000d84; 	J(CALLF(sub_17256,0));	// 13697                  call    sub_17256 ;~ 05BF:0D84
cs=0x5bf;eip=0x000d89; 	T(ADD(sp, 4));	// 13698                  add     sp, 4 ;~ 05BF:0D89
cs=0x5bf;eip=0x000d8c; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 13699                  inc     [bp+var_2] ;~ 05BF:0D8C
loc_14f5f:
	// 5146 
cs=0x5bf;eip=0x000d8f; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x1F));	// 13702                  cmp     [bp+var_2], 1Fh ;~ 05BF:0D8F
cs=0x5bf;eip=0x000d93; 	J(JL(loc_14ee6));	// 13703                  jl      short loc_14EE6 ;~ 05BF:0D93
cs=0x5bf;eip=0x000d95; 	T(LEAVE);	// 13704                  leave ;~ 05BF:0D95
cs=0x5bf;eip=0x000d96; 	J(RETF(0));	// 13705                  retf ;~ 05BF:0D96

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_14ebf: 	goto loc_14ebf;
        case m2c::kloc_14ed8: 	goto loc_14ed8;
        case m2c::kloc_14ee6: 	goto loc_14ee6;
        case m2c::kloc_14eed: 	goto loc_14eed;
        case m2c::kloc_14f06: 	goto loc_14f06;
        case m2c::kloc_14f14: 	goto loc_14f14;
        case m2c::kloc_14f2e: 	goto loc_14f2e;
        case m2c::kloc_14f42: 	goto loc_14f42;
        case m2c::kloc_14f45: 	goto loc_14f45;
        case m2c::kloc_14f5f: 	goto loc_14f5f;
        case m2c::ksub_14e99: 	goto sub_14e99;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_14f67(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_14f67:
    _begin:
#undef var_6
#define var_6 -6
	// 13716 var_6           = word ptr -6 ;~ 05BF:0D97
#undef var_4
#define var_4 -4
	// 13717 var_4           = word ptr -4 ;~ 05BF:0D97
#undef var_2
#define var_2 -2
	// 13718 var_2           = word ptr -2 ;~ 05BF:0D97
cs=0x5bf;eip=0x000d97; 	X(ENTER(6, 0));	// 13720                  enter   6, 0 ;~ 05BF:0D97
cs=0x5bf;eip=0x000d9b; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0));	// 13721                  mov     [bp+var_6], 0 ;~ 05BF:0D9B
cs=0x5bf;eip=0x000da0; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 13722                  mov     [bp+var_4], 0 ;~ 05BF:0DA0
cs=0x5bf;eip=0x000da5; 	J(JMP(loc_14fb0));	// 13723                  jmp     short loc_14FB0 ;~ 05BF:0DA5
loc_14f77:
	// 5147 
cs=0x5bf;eip=0x000da7; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 13727                  mov     [bp+var_2], 0 ;~ 05BF:0DA7
cs=0x5bf;eip=0x000dac; 	J(JMP(loc_14fa5));	// 13728                  jmp     short loc_14FA5 ;~ 05BF:0DAC
loc_14f7e:
	// 5148 
cs=0x5bf;eip=0x000dae; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_6))));	// 13732                  mov     bx, [bp+var_6] ;~ 05BF:0DAE
cs=0x5bf;eip=0x000db1; 	T(SHL(bx, 2));	// 13733                  shl     bx, 2 ;~ 05BF:0DB1
cs=0x5bf;eip=0x000db4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 13734                  mov     ax, [bp+var_2] ;~ 05BF:0DB4
cs=0x5bf;eip=0x000db7; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A19)), ax));	// 13735                  mov     [bx+0A19h], ax ;~ 05BF:0DB7
cs=0x5bf;eip=0x000dbb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_6))));	// 13736                  mov     bx, [bp+var_6] ;~ 05BF:0DBB
cs=0x5bf;eip=0x000dbe; 	T(SHL(bx, 2));	// 13737                  shl     bx, 2 ;~ 05BF:0DBE
cs=0x5bf;eip=0x000dc1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 13738                  mov     ax, [bp+var_4] ;~ 05BF:0DC1
cs=0x5bf;eip=0x000dc4; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A1B)), ax));	// 13739                  mov     [bx+0A1Bh], ax ;~ 05BF:0DC4
cs=0x5bf;eip=0x000dc8; 	X(INC(*(dw*)(raddr(ss,bp+var_6))));	// 13740                  inc     [bp+var_6] ;~ 05BF:0DC8
cs=0x5bf;eip=0x000dcb; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0x1A));	// 13741                  cmp     [bp+var_6], 1Ah ;~ 05BF:0DCB
cs=0x5bf;eip=0x000dcf; 	J(JZ(locret_14fb6));	// 13742                  jz      short locret_14FB6 ;~ 05BF:0DCF
cs=0x5bf;eip=0x000dd1; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), 0x10));	// 13743                  add     [bp+var_2], 10h ;~ 05BF:0DD1
loc_14fa5:
	// 5149 
cs=0x5bf;eip=0x000dd5; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x138));	// 13746                  cmp     [bp+var_2], 138h ;~ 05BF:0DD5
cs=0x5bf;eip=0x000dda; 	J(JC(loc_14f7e));	// 13747                  jb      short loc_14F7E ;~ 05BF:0DDA
cs=0x5bf;eip=0x000ddc; 	X(ADD(*(dw*)(raddr(ss,bp+var_4)), 0x14));	// 13748                  add     [bp+var_4], 14h ;~ 05BF:0DDC
loc_14fb0:
	// 5150 
cs=0x5bf;eip=0x000de0; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0x28));	// 13751                  cmp     [bp+var_4], 28h ; '(' ;~ 05BF:0DE0
cs=0x5bf;eip=0x000de4; 	J(JC(loc_14f77));	// 13752                  jb      short loc_14F77 ;~ 05BF:0DE4
locret_14fb6:
	// 5151 
cs=0x5bf;eip=0x000de6; 	T(LEAVE);	// 13755                  leave ;~ 05BF:0DE6
cs=0x5bf;eip=0x000de7; 	J(RETF(0));	// 13756                  retf ;~ 05BF:0DE7

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_14f77: 	goto loc_14f77;
        case m2c::kloc_14f7e: 	goto loc_14f7e;
        case m2c::kloc_14fa5: 	goto loc_14fa5;
        case m2c::kloc_14fb0: 	goto loc_14fb0;
        case m2c::klocret_14fb6: 	goto locret_14fb6;
        case m2c::ksub_14f67: 	goto sub_14f67;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_14fb8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_14fb8:
    _begin:
#undef var_4
#define var_4 -4
	// 13768 var_4           = word ptr -4 ;~ 05BF:0DE8
#undef var_2
#define var_2 -2
	// 13769 var_2           = word ptr -2 ;~ 05BF:0DE8
#undef s
#define s 6
	// 13770 s               = dword ptr  6 ;~ 05BF:0DE8
#undef arg_4
#define arg_4 0x0A
	// 13771 arg_4           = word ptr  0Ah ;~ 05BF:0DE8
#undef arg_6
#define arg_6 0x0C
	// 13772 arg_6           = word ptr  0Ch ;~ 05BF:0DE8
#undef arg_8
#define arg_8 0x0E
	// 13773 arg_8           = word ptr  0Eh ;~ 05BF:0DE8
cs=0x5bf;eip=0x000de8; 	X(ENTER(4, 0));	// 13775                  enter   4, 0 ;~ 05BF:0DE8
cs=0x5bf;eip=0x000dec; 	X(PUSH(*(dw*)(raddr(ss,bp+s+2))));	// 13776                  push    word ptr [bp+s+2] ;~ 05BF:0DEC
cs=0x5bf;eip=0x000def; 	X(PUSH(*(dw*)(raddr(ss,bp+s))));	// 13777                  push    word ptr [bp+s] ; s ;~ 05BF:0DEF
cs=0x5bf;eip=0x000df2; 	J(CALLF(___strlen,0));	// 13778                  call    ___strlen ;~ 05BF:0DF2
cs=0x5bf;eip=0x000df7; 	T(ADD(sp, 4));	// 13779                  add     sp, 4 ;~ 05BF:0DF7
cs=0x5bf;eip=0x000dfa; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 13780                  mov     [bp+var_2], ax ;~ 05BF:0DFA
cs=0x5bf;eip=0x000dfd; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 13781                  mov     [bp+var_4], 0 ;~ 05BF:0DFD
cs=0x5bf;eip=0x000e02; 	J(JMP(loc_15042));	// 13782                  jmp     short loc_15042 ;~ 05BF:0E02
loc_14fd4:
	// 5152 
cs=0x5bf;eip=0x000e04; 	T(LES(bx, *(dd*)(raddr(ss,bp+s))));	// 13786                  les     bx, [bp+s] ;~ 05BF:0E04
cs=0x5bf;eip=0x000e07; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_4))));	// 13788                  add     bx, [bp+var_4] ;~ 05BF:0E07
cs=0x5bf;eip=0x000e0a; 	T(CMP(*(raddr(es,bx)), 0x20));	// 13789                  cmp     byte ptr es:[bx], 20h ; ' ' ;~ 05BF:0E0A
cs=0x5bf;eip=0x000e0e; 	J(JZ(loc_15029));	// 13790                  jz      short loc_15029 ;~ 05BF:0E0E
cs=0x5bf;eip=0x000e10; 	X(PUSH(0x12));	// 13791                  push    12h ;~ 05BF:0E10
cs=0x5bf;eip=0x000e12; 	X(PUSH(0x10));	// 13792                  push    10h ;~ 05BF:0E12
cs=0x5bf;eip=0x000e14; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 13793                  push    [bp+arg_6] ;~ 05BF:0E14
cs=0x5bf;eip=0x000e17; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 13794                  push    [bp+arg_4] ;~ 05BF:0E17
cs=0x5bf;eip=0x000e1a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 13795                  push    [bp+arg_8] ;~ 05BF:0E1A
cs=0x5bf;eip=0x000e1d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+s))));	// 13796                  mov     bx, word ptr [bp+s] ;~ 05BF:0E1D
cs=0x5bf;eip=0x000e20; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_4))));	// 13797                  add     bx, [bp+var_4] ;~ 05BF:0E20
cs=0x5bf;eip=0x000e23; 	T(MOV(al, *(raddr(es,bx))));	// 13798                  mov     al, es:[bx] ;~ 05BF:0E23
cs=0x5bf;eip=0x000e26; 	T(CBW);	// 13799                  cbw ;~ 05BF:0E26
cs=0x5bf;eip=0x000e27; 	T(SHL(ax, 2));	// 13800                  shl     ax, 2 ;~ 05BF:0E27
cs=0x5bf;eip=0x000e2a; 	T(dx = 0x915;);	// 13801                  mov     dx, 915h ;~ 05BF:0E2A
cs=0x5bf;eip=0x000e2d; 	T(ADD(dx, 2));	// 13802                  add     dx, 2 ;~ 05BF:0E2D
cs=0x5bf;eip=0x000e30; 	T(ADD(ax, dx));	// 13803                  add     ax, dx ;~ 05BF:0E30
cs=0x5bf;eip=0x000e32; 	T(bx = ax;);	// 13804                  mov     bx, ax ;~ 05BF:0E32
cs=0x5bf;eip=0x000e34; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 13805                  push    word ptr [bx] ;~ 05BF:0E34
cs=0x5bf;eip=0x000e36; 	T(MOV(bx, *(dw*)(raddr(ss,bp+s))));	// 13806                  mov     bx, word ptr [bp+s] ;~ 05BF:0E36
cs=0x5bf;eip=0x000e39; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_4))));	// 13807                  add     bx, [bp+var_4] ;~ 05BF:0E39
cs=0x5bf;eip=0x000e3c; 	T(MOV(al, *(raddr(es,bx))));	// 13808                  mov     al, es:[bx] ;~ 05BF:0E3C
cs=0x5bf;eip=0x000e3f; 	T(CBW);	// 13809                  cbw ;~ 05BF:0E3F
cs=0x5bf;eip=0x000e40; 	T(SHL(ax, 2));	// 13810                  shl     ax, 2 ;~ 05BF:0E40
cs=0x5bf;eip=0x000e43; 	T(bx = ax;);	// 13811                  mov     bx, ax ;~ 05BF:0E43
cs=0x5bf;eip=0x000e45; 	X(PUSH(*(dw*)(raddr(ds,bx+0x915))));	// 13812                  push    word ptr [bx+915h] ;~ 05BF:0E45
cs=0x5bf;eip=0x000e49; 	X(PUSH(word_19367));	// 13813                  push    word_19367 ;~ 05BF:0E49
cs=0x5bf;eip=0x000e4d; 	X(PUSH(__block));	// 13814                  push    __block ;~ 05BF:0E4D
cs=0x5bf;eip=0x000e51; 	J(CALLF(sub_17702,0));	// 13815                  call    sub_17702 ;~ 05BF:0E51
cs=0x5bf;eip=0x000e56; 	T(ADD(sp, 0x12));	// 13816                  add     sp, 12h ;~ 05BF:0E56
loc_15029:
	// 5153 
cs=0x5bf;eip=0x000e59; 	T(LES(bx, *(dd*)(raddr(ss,bp+s))));	// 13819                  les     bx, [bp+s] ;~ 05BF:0E59
cs=0x5bf;eip=0x000e5c; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_4))));	// 13820                  add     bx, [bp+var_4] ;~ 05BF:0E5C
cs=0x5bf;eip=0x000e5f; 	T(CMP(*(raddr(es,bx)), 0x49));	// 13821                  cmp     byte ptr es:[bx], 49h ; 'I' ;~ 05BF:0E5F
cs=0x5bf;eip=0x000e63; 	J(JZ(loc_1503b));	// 13822                  jz      short loc_1503B ;~ 05BF:0E63
cs=0x5bf;eip=0x000e65; 	X(ADD(*(dw*)(raddr(ss,bp+arg_4)), 0x10));	// 13823                  add     [bp+arg_4], 10h ;~ 05BF:0E65
cs=0x5bf;eip=0x000e69; 	J(JMP(loc_1503f));	// 13824                  jmp     short loc_1503F ;~ 05BF:0E69
loc_1503b:
	// 5154 
cs=0x5bf;eip=0x000e6b; 	X(ADD(*(dw*)(raddr(ss,bp+arg_4)), 8));	// 13828                  add     [bp+arg_4], 8 ;~ 05BF:0E6B
loc_1503f:
	// 5155 
cs=0x5bf;eip=0x000e6f; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 13831                  inc     [bp+var_4] ;~ 05BF:0E6F
loc_15042:
	// 5156 
cs=0x5bf;eip=0x000e72; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 13834                  mov     ax, [bp+var_4] ;~ 05BF:0E72
cs=0x5bf;eip=0x000e75; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_2))));	// 13835                  cmp     ax, [bp+var_2] ;~ 05BF:0E75
cs=0x5bf;eip=0x000e78; 	J(JC(loc_14fd4));	// 13836                  jb      short loc_14FD4 ;~ 05BF:0E78
cs=0x5bf;eip=0x000e7a; 	T(LEAVE);	// 13837                  leave ;~ 05BF:0E7A
cs=0x5bf;eip=0x000e7b; 	J(RETF(0));	// 13838                  retf ;~ 05BF:0E7B

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_14fd4: 	goto loc_14fd4;
        case m2c::kloc_15029: 	goto loc_15029;
        case m2c::kloc_1503b: 	goto loc_1503b;
        case m2c::kloc_1503f: 	goto loc_1503f;
        case m2c::kloc_15042: 	goto loc_15042;
        case m2c::ksub_14fb8: 	goto sub_14fb8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1504c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1504c:
    _begin:
#undef var_2
#define var_2 -2
	// 13848 var_2           = word ptr -2 ;~ 05BF:0E7C
cs=0x5bf;eip=0x000e7c; 	X(ENTER(2, 0));	// 13850                  enter   2, 0 ;~ 05BF:0E7C
cs=0x5bf;eip=0x000e80; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x3E80));	// 13851                  mov     [bp+var_2], 3E80h ;~ 05BF:0E80
cs=0x5bf;eip=0x000e85; 	J(JMP(loc_15086));	// 13852                  jmp     short loc_15086 ;~ 05BF:0E85
loc_15057:
	// 5157 
cs=0x5bf;eip=0x000e87; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 13856                  push    [bp+var_2] ;~ 05BF:0E87
cs=0x5bf;eip=0x000e8a; 	J(CALLF(sub_17086,0));	// 13857                  call    sub_17086 ;~ 05BF:0E8A
cs=0x5bf;eip=0x000e8f; 	X(POP(cx));	// 13858                  pop     cx ;~ 05BF:0E8F
cs=0x5bf;eip=0x000e90; 	T(CMP(word_192f0, 0));	// 13859                  cmp     word_192F0, 0 ;~ 05BF:0E90
cs=0x5bf;eip=0x000e95; 	J(JNZ(loc_15074));	// 13860                  jnz     short loc_15074 ;~ 05BF:0E95
cs=0x5bf;eip=0x000e97; 	T(NOP);	// 13861                  nop ;~ 05BF:0E97
cs=0x5bf;eip=0x000e98; 	X(PUSH(cs));	// 13862                  push    cs ;~ 05BF:0E98
cs=0x5bf;eip=0x000e99; 	J(CALL(sub_151ca,0));	// 13863                  call    near ptr sub_151CA ;~ 05BF:0E99
cs=0x5bf;eip=0x000e9c; 	X(PUSH(0));	// 13864                  push    0               ; value ;~ 05BF:0E9C
cs=0x5bf;eip=0x000e9e; 	J(CALLF(sub_1540e,0));	// 13865                  call    sub_1540E ;~ 05BF:0E9E
cs=0x5bf;eip=0x000ea3; 	X(POP(cx));	// 13866                  pop     cx ;~ 05BF:0EA3
loc_15074:
	// 5158 
cs=0x5bf;eip=0x000ea4; 	T(CMP(word_192f3, 1));	// 13870                  cmp     word_192F3, 1 ;~ 05BF:0EA4
cs=0x5bf;eip=0x000ea9; 	J(JC(loc_15074));	// 13871                  jb      short loc_15074 ;~ 05BF:0EA9
cs=0x5bf;eip=0x000eab; 	X(word_192f3 = 0;);	// 13872                  mov     word_192F3, 0 ;~ 05BF:0EAB
cs=0x5bf;eip=0x000eb1; 	X(SUB(*(dw*)(raddr(ss,bp+var_2)), 0x0A0));	// 13873                  sub     [bp+var_2], 0A0h ; '
loc_15086:
	// 5159 
cs=0x5bf;eip=0x000eb6; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0));	// 13876                  cmp     [bp+var_2], 0 ;~ 05BF:0EB6
cs=0x5bf;eip=0x000eba; 	J(JA(loc_15057));	// 13877                  ja      short loc_15057 ;~ 05BF:0EBA
cs=0x5bf;eip=0x000ebc; 	X(PUSH(0));	// 13878                  push    0 ;~ 05BF:0EBC
cs=0x5bf;eip=0x000ebe; 	J(CALLF(sub_17086,0));	// 13879                  call    sub_17086 ;~ 05BF:0EBE
cs=0x5bf;eip=0x000ec3; 	X(POP(cx));	// 13880                  pop     cx ;~ 05BF:0EC3
cs=0x5bf;eip=0x000ec4; 	T(LEAVE);	// 13881                  leave ;~ 05BF:0EC4
cs=0x5bf;eip=0x000ec5; 	J(RETF(0));	// 13882                  retf ;~ 05BF:0EC5

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_15057: 	goto loc_15057;
        case m2c::kloc_15074: 	goto loc_15074;
        case m2c::kloc_15086: 	goto loc_15086;
        case m2c::ksub_1504c: 	goto sub_1504c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_15096(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_15096:
    _begin:
#undef var_2
#define var_2 -2
	// 13893 var_2           = word ptr -2 ;~ 05BF:0EC6
#undef arg_0
#define arg_0 6
	// 13894 arg_0           = word ptr  6 ;~ 05BF:0EC6
#undef arg_2
#define arg_2 8
	// 13895 arg_2           = word ptr  8 ;~ 05BF:0EC6
cs=0x5bf;eip=0x000ec6; 	X(ENTER(2, 0));	// 13897                  enter   2, 0 ;~ 05BF:0EC6
cs=0x5bf;eip=0x000eca; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 13898                  mov     ax, [bp+arg_0] ;~ 05BF:0ECA
cs=0x5bf;eip=0x000ecd; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 13899                  mov     [bp+var_2], ax ;~ 05BF:0ECD
cs=0x5bf;eip=0x000ed0; 	J(JMP(loc_150c9));	// 13900                  jmp     short loc_150C9 ;~ 05BF:0ED0
loc_150a2:
	// 5160 
cs=0x5bf;eip=0x000ed2; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 13904                  push    [bp+var_2] ;~ 05BF:0ED2
cs=0x5bf;eip=0x000ed5; 	J(CALLF(sub_17086,0));	// 13905                  call    sub_17086 ;~ 05BF:0ED5
cs=0x5bf;eip=0x000eda; 	X(POP(cx));	// 13906                  pop     cx ;~ 05BF:0EDA
cs=0x5bf;eip=0x000edb; 	T(NOP);	// 13907                  nop ;~ 05BF:0EDB
cs=0x5bf;eip=0x000edc; 	X(PUSH(cs));	// 13908                  push    cs ;~ 05BF:0EDC
cs=0x5bf;eip=0x000edd; 	J(CALL(sub_151ca,0));	// 13909                  call    near ptr sub_151CA ;~ 05BF:0EDD
cs=0x5bf;eip=0x000ee0; 	X(PUSH(0));	// 13910                  push    0               ; value ;~ 05BF:0EE0
cs=0x5bf;eip=0x000ee2; 	J(CALLF(sub_1540e,0));	// 13911                  call    sub_1540E ;~ 05BF:0EE2
cs=0x5bf;eip=0x000ee7; 	X(POP(cx));	// 13912                  pop     cx ;~ 05BF:0EE7
loc_150b8:
	// 5161 
cs=0x5bf;eip=0x000ee8; 	T(CMP(word_192f3, 1));	// 13915                  cmp     word_192F3, 1 ;~ 05BF:0EE8
cs=0x5bf;eip=0x000eed; 	J(JC(loc_150b8));	// 13916                  jb      short loc_150B8 ;~ 05BF:0EED
cs=0x5bf;eip=0x000eef; 	X(word_192f3 = 0;);	// 13917                  mov     word_192F3, 0 ;~ 05BF:0EEF
cs=0x5bf;eip=0x000ef5; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), 0x50));	// 13918                  add     [bp+var_2], 50h ; 'P' ;~ 05BF:0EF5
loc_150c9:
	// 5162 
cs=0x5bf;eip=0x000ef9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 13921                  mov     ax, [bp+var_2] ;~ 05BF:0EF9
cs=0x5bf;eip=0x000efc; 	T(CMP(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 13922                  cmp     ax, [bp+arg_2] ;~ 05BF:0EFC
cs=0x5bf;eip=0x000eff; 	J(JC(loc_150a2));	// 13923                  jb      short loc_150A2 ;~ 05BF:0EFF
cs=0x5bf;eip=0x000f01; 	T(LEAVE);	// 13924                  leave ;~ 05BF:0F01
cs=0x5bf;eip=0x000f02; 	J(RETF(0));	// 13925                  retf ;~ 05BF:0F02

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_150a2: 	goto loc_150a2;
        case m2c::kloc_150b8: 	goto loc_150b8;
        case m2c::kloc_150c9: 	goto loc_150c9;
        case m2c::ksub_15096: 	goto sub_15096;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_150d3(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_150d3:
    _begin:
#undef ptr
#define ptr -0x698
	// 13935 ptr             = byte ptr -698h ;~ 05BF:0F03
#undef stream
#define stream -8
	// 13936 stream          = dword ptr -8 ;~ 05BF:0F03
#undef var_4
#define var_4 -4
	// 13937 var_4           = word ptr -4 ;~ 05BF:0F03
#undef var_2
#define var_2 -2
	// 13938 var_2           = word ptr -2 ;~ 05BF:0F03
cs=0x5bf;eip=0x000f03; 	X(ENTER(0x698, 0));	// 13940                  enter   698h, 0 ;~ 05BF:0F03
cs=0x5bf;eip=0x000f07; 	X(PUSH(ds));	// 13941                  push    ds ;~ 05BF:0F07
cs=0x5bf;eip=0x000f08; 	X(PUSH(offset(dseg,__mode)));	// 13942                  push    offset __mode   ; mode ;~ 05BF:0F08
cs=0x5bf;eip=0x000f0b; 	X(PUSH(ds));	// 13943                  push    ds ;~ 05BF:0F0B
cs=0x5bf;eip=0x000f0c; 	X(PUSH(offset(dseg,__aspark003bin)));	// 13944                  push    offset __aSpark003Bin ; path ;~ 05BF:0F0C
cs=0x5bf;eip=0x000f0f; 	J(CALLF(___fopen,0));	// 13945                  call    ___fopen ;~ 05BF:0F0F
cs=0x5bf;eip=0x000f14; 	T(ADD(sp, 8));	// 13946                  add     sp, 8 ;~ 05BF:0F14
cs=0x5bf;eip=0x000f17; 	X(MOV(*(dw*)(raddr(ss,bp+stream+2)), dx));	// 13947                  mov     word ptr [bp+stream+2], dx ;~ 05BF:0F17
cs=0x5bf;eip=0x000f1a; 	X(MOV(*(dw*)(raddr(ss,bp+stream)), ax));	// 13948                  mov     word ptr [bp+stream], ax ;~ 05BF:0F1A
loc_150ed:
	// 5163 
cs=0x5bf;eip=0x000f1d; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 13951                  push    word ptr [bp+stream+2] ;~ 05BF:0F1D
cs=0x5bf;eip=0x000f20; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 13952                  push    word ptr [bp+stream] ; stream ;~ 05BF:0F20
cs=0x5bf;eip=0x000f23; 	X(PUSH(1));	// 13953                  push    1               ; n ;~ 05BF:0F23
cs=0x5bf;eip=0x000f25; 	X(PUSH(0x690));	// 13954                  push    690h            ; size ;~ 05BF:0F25
cs=0x5bf;eip=0x000f28; 	X(PUSH(ss));	// 13955                  push    ss ;~ 05BF:0F28
cs=0x5bf;eip=0x000f29; 	T(ax = bp+ptr);	// 13956                  lea     ax, [bp+ptr] ;~ 05BF:0F29
cs=0x5bf;eip=0x000f2d; 	X(PUSH(ax));	// 13957                  push    ax              ; ptr ;~ 05BF:0F2D
cs=0x5bf;eip=0x000f2e; 	J(CALLF(___fread,0));	// 13958                  call    ___fread ;~ 05BF:0F2E
cs=0x5bf;eip=0x000f33; 	T(ADD(sp, 0x0C));	// 13959                  add     sp, 0Ch ;~ 05BF:0F33
cs=0x5bf;eip=0x000f36; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 13960                  les     bx, [bp+stream] ;~ 05BF:0F36
cs=0x5bf;eip=0x000f39; 	T(TEST(*(dw*)(raddr(es,bx+2)), 0x20));	// 13961                  test    word ptr es:[bx+2], 20h ;~ 05BF:0F39
cs=0x5bf;eip=0x000f3f; 	J(JNZ(loc_15159));	// 13962                  jnz     short loc_15159 ;~ 05BF:0F3F
cs=0x5bf;eip=0x000f41; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 13963                  mov     [bp+var_2], 0 ;~ 05BF:0F41
cs=0x5bf;eip=0x000f46; 	J(JMP(loc_15150));	// 13964                  jmp     short loc_15150 ;~ 05BF:0F46
loc_15118:
	// 5164 
cs=0x5bf;eip=0x000f48; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 13968                  mov     bx, [bp+var_2] ;~ 05BF:0F48
cs=0x5bf;eip=0x000f4b; 	T(SHL(bx, 1));	// 13969                  shl     bx, 1 ;~ 05BF:0F4B
cs=0x5bf;eip=0x000f4d; 	T(ax = bp+ptr);	// 13970                  lea     ax, [bp+ptr] ;~ 05BF:0F4D
cs=0x5bf;eip=0x000f51; 	T(ADD(bx, ax));	// 13971                  add     bx, ax ;~ 05BF:0F51
cs=0x5bf;eip=0x000f53; 	X(PUSH(*(dw*)(raddr(ss,bx))));	// 13972                  push    word ptr ss:[bx] ;~ 05BF:0F53
cs=0x5bf;eip=0x000f56; 	X(PUSH(0x3E80));	// 13973                  push    3E80h ;~ 05BF:0F56
cs=0x5bf;eip=0x000f59; 	J(CALLF(sub_170a5,0));	// 13974                  call    sub_170A5 ;~ 05BF:0F59
cs=0x5bf;eip=0x000f5e; 	T(ADD(sp, 4));	// 13975                  add     sp, 4 ;~ 05BF:0F5E
cs=0x5bf;eip=0x000f61; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 13976                  mov     [bp+var_4], ax ;~ 05BF:0F61
cs=0x5bf;eip=0x000f64; 	X(PUSH(ax));	// 13977                  push    ax ;~ 05BF:0F64
cs=0x5bf;eip=0x000f65; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 13978                  mov     bx, [bp+var_2] ;~ 05BF:0F65
cs=0x5bf;eip=0x000f68; 	T(SHL(bx, 1));	// 13979                  shl     bx, 1 ;~ 05BF:0F68
cs=0x5bf;eip=0x000f6a; 	T(ax = bp+ptr);	// 13980                  lea     ax, [bp+ptr] ;~ 05BF:0F6A
cs=0x5bf;eip=0x000f6e; 	T(ADD(bx, ax));	// 13981                  add     bx, ax ;~ 05BF:0F6E
cs=0x5bf;eip=0x000f70; 	X(PUSH(*(dw*)(raddr(ss,bx))));	// 13982                  push    word ptr ss:[bx] ;~ 05BF:0F70
cs=0x5bf;eip=0x000f73; 	X(PUSH(0));	// 13983                  push    0 ;~ 05BF:0F73
cs=0x5bf;eip=0x000f75; 	J(CALLF(sub_170e8,0));	// 13984                  call    sub_170E8 ;~ 05BF:0F75
cs=0x5bf;eip=0x000f7a; 	T(ADD(sp, 6));	// 13985                  add     sp, 6 ;~ 05BF:0F7A
cs=0x5bf;eip=0x000f7d; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 13986                  inc     [bp+var_2] ;~ 05BF:0F7D
loc_15150:
	// 5165 
cs=0x5bf;eip=0x000f80; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x348));	// 13989                  cmp     [bp+var_2], 348h ;~ 05BF:0F80
cs=0x5bf;eip=0x000f85; 	J(JC(loc_15118));	// 13990                  jb      short loc_15118 ;~ 05BF:0F85
cs=0x5bf;eip=0x000f87; 	J(JMP(loc_150ed));	// 13991                  jmp     short loc_150ED ;~ 05BF:0F87
loc_15159:
	// 5166 
cs=0x5bf;eip=0x000f89; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 13995                  push    word ptr [bp+stream+2] ;~ 05BF:0F89
cs=0x5bf;eip=0x000f8c; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 13996                  push    word ptr [bp+stream] ; stream ;~ 05BF:0F8C
cs=0x5bf;eip=0x000f8f; 	J(CALLF(___fclose,0));	// 13997                  call    ___fclose ;~ 05BF:0F8F
cs=0x5bf;eip=0x000f94; 	T(ADD(sp, 4));	// 13998                  add     sp, 4 ;~ 05BF:0F94
cs=0x5bf;eip=0x000f97; 	T(LEAVE);	// 13999                  leave ;~ 05BF:0F97
cs=0x5bf;eip=0x000f98; 	J(RETF(0));	// 14000                  retf ;~ 05BF:0F98

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_150ed: 	goto loc_150ed;
        case m2c::kloc_15118: 	goto loc_15118;
        case m2c::kloc_15150: 	goto loc_15150;
        case m2c::kloc_15159: 	goto loc_15159;
        case m2c::ksub_150d3: 	goto sub_150d3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_15169(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_15169:
    _begin:
cs=0x5bf;eip=0x000f99; 	X(PUSH(word_19367));	// 14008                  push    word_19367      ; int ;~ 05BF:0F99
cs=0x5bf;eip=0x000f9d; 	X(PUSH(__block));	// 14009                  push    __block         ; int ;~ 05BF:0F9D
cs=0x5bf;eip=0x000fa1; 	X(PUSH(ds));	// 14010                  push    ds ;~ 05BF:0FA1
cs=0x5bf;eip=0x000fa2; 	X(PUSH(offset(dseg,__aintro01scr)));	// 14011                  push    offset __aIntro01Scr ; path ;~ 05BF:0FA2
cs=0x5bf;eip=0x000fa5; 	X(PUSH(cs));	// 14012                  push    cs ;~ 05BF:0FA5
cs=0x5bf;eip=0x000fa6; 	J(CALL(sub_14bd7,0));	// 14013                  call    near ptr sub_14BD7 ;~ 05BF:0FA6
cs=0x5bf;eip=0x000fa9; 	T(ADD(sp, 8));	// 14014                  add     sp, 8 ;~ 05BF:0FA9
cs=0x5bf;eip=0x000fac; 	X(PUSH(0));	// 14015                  push    0 ;~ 05BF:0FAC
cs=0x5bf;eip=0x000fae; 	X(PUSH(word_19367));	// 14016                  push    word_19367 ;~ 05BF:0FAE
cs=0x5bf;eip=0x000fb2; 	X(PUSH(__block));	// 14017                  push    __block ;~ 05BF:0FB2
cs=0x5bf;eip=0x000fb6; 	J(CALLF(sub_172c6,0));	// 14018                  call    sub_172C6 ;~ 05BF:0FB6
cs=0x5bf;eip=0x000fbb; 	T(ADD(sp, 6));	// 14019                  add     sp, 6 ;~ 05BF:0FBB
cs=0x5bf;eip=0x000fbe; 	X(PUSH(cs));	// 14020                  push    cs ;~ 05BF:0FBE
cs=0x5bf;eip=0x000fbf; 	J(CALL(sub_14e99,0));	// 14021                  call    near ptr sub_14E99 ;~ 05BF:0FBF
cs=0x5bf;eip=0x000fc2; 	X(PUSH(0));	// 14022                  push    0               ; value ;~ 05BF:0FC2
cs=0x5bf;eip=0x000fc4; 	J(CALLF(sub_1540e,0));	// 14023                  call    sub_1540E ;~ 05BF:0FC4
cs=0x5bf;eip=0x000fc9; 	X(POP(cx));	// 14024                  pop     cx ;~ 05BF:0FC9
cs=0x5bf;eip=0x000fca; 	J(JMP(loc_151a1));	// 14025                  jmp     short loc_151A1 ;~ 05BF:0FCA
loc_1519c:
	// 5167 
cs=0x5bf;eip=0x000fcc; 	T(NOP);	// 14029                  nop ;~ 05BF:0FCC
cs=0x5bf;eip=0x000fcd; 	X(PUSH(cs));	// 14030                  push    cs ;~ 05BF:0FCD
cs=0x5bf;eip=0x000fce; 	J(CALL(sub_151ca,0));	// 14031                  call    near ptr sub_151CA ;~ 05BF:0FCE
loc_151a1:
	// 5168 
cs=0x5bf;eip=0x000fd1; 	T(CMP(word_192f3, 0x78));	// 14034                  cmp     word_192F3, 78h ; 'x' ;~ 05BF:0FD1
cs=0x5bf;eip=0x000fd6; 	J(JC(loc_1519c));	// 14035                  jb      short loc_1519C ;~ 05BF:0FD6
cs=0x5bf;eip=0x000fd8; 	J(RETF(0));	// 14036                  retf ;~ 05BF:0FD8

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1519c: 	goto loc_1519c;
        case m2c::kloc_151a1: 	goto loc_151a1;
        case m2c::ksub_15169: 	goto sub_15169;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_151ca(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_151ca:
    _begin:
cs=0x5bf;eip=0x000ffa; 	T(CMP(byte_192f2, 0x7F));	// 14076                  cmp     byte_192F2, 7Fh ;~ 05BF:0FFA
cs=0x5bf;eip=0x000fff; 	J(JNZ(loc_151d6));	// 14077                  jnz     short loc_151D6 ;~ 05BF:0FFF
cs=0x5bf;eip=0x001001; 	J(CALLF(sub_17de3,0));	// 14078                  call    sub_17DE3 ;~ 05BF:1001
loc_151d6:
	// 5169 
cs=0x5bf;eip=0x001006; 	J(CALLF(___kbhit,0));	// 14081                  call    ___kbhit ;~ 05BF:1006
cs=0x5bf;eip=0x00100b; 	T(OR(ax, ax));	// 14082                  or      ax, ax ;~ 05BF:100B
cs=0x5bf;eip=0x00100d; 	J(JNZ(loc_151e6));	// 14083                  jnz     short loc_151E6 ;~ 05BF:100D
cs=0x5bf;eip=0x00100f; 	T(CMP(byte_18e88, 0));	// 14084                  cmp     byte_18E88, 0 ;~ 05BF:100F
cs=0x5bf;eip=0x001014; 	J(JZ(loc_151ea));	// 14085                  jz      short loc_151EA ;~ 05BF:1014
loc_151e6:
	// 5170 
cs=0x5bf;eip=0x001016; 	X(PUSH(cs));	// 14088                  push    cs ;~ 05BF:1016
cs=0x5bf;eip=0x001017; 	J(CALL(sub_148b6,0));	// 14089                  call    near ptr sub_148B6 ;~ 05BF:1017
loc_151ea:
	// 5171 
cs=0x5bf;eip=0x00101a; 	X(byte_18e88 = 0;);	// 14092                  mov     byte_18E88, 0 ;~ 05BF:101A
cs=0x5bf;eip=0x00101f; 	X(PUSH(cs));	// 14093                  push    cs ;~ 05BF:101F
cs=0x5bf;eip=0x001020; 	J(CALL(sub_14ded,0));	// 14094                  call    near ptr sub_14DED ;~ 05BF:1020
cs=0x5bf;eip=0x001023; 	J(RETF(0));	// 14095                  retf ;~ 05BF:1023

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_151d6: 	goto loc_151d6;
        case m2c::kloc_151e6: 	goto loc_151e6;
        case m2c::kloc_151ea: 	goto loc_151ea;
        case m2c::ksub_151ca: 	goto sub_151ca;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

