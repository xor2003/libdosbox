/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group25(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group25:
    _begin:
sub_3d1e6:
	// 99973 
cs=0x2ec0;eip=0x000006; 	X(MOV(word_56fde, 0));	// 99974 mov     word_56FDE, 0 ;~ 2EC0:0006
cs=0x2ec0;eip=0x00000c; 	X(MOV(word_56fe0, 0));	// 99975 mov     word_56FE0, 0 ;~ 2EC0:000C
cs=0x2ec0;eip=0x000012; 	X(MOV(byte_4ac6b, 1));	// 99976 mov     byte_4AC6B, 1 ;~ 2EC0:0012
cs=0x2ec0;eip=0x000017; 	X(MOV(word_4ac6c, 0));	// 99977 mov     word_4AC6C, 0 ;~ 2EC0:0017
cs=0x2ec0;eip=0x00001d; 	T(CLI);	// 99978 cli ;~ 2EC0:001D
cs=0x2ec0;eip=0x00001e; 	X(PUSH(bp));	// 99979 push    bp ;~ 2EC0:001E
cs=0x2ec0;eip=0x00001f; 	T(MOV(bp, sp));	// 99980 mov     bp, sp ;~ 2EC0:001F
cs=0x2ec0;eip=0x000021; 	T(XOR(ax, ax));	// 99981 xor     ax, ax ;~ 2EC0:0021
cs=0x2ec0;eip=0x000023; 	T(MOV(es, ax));	// 99982 mov     es, ax ;~ 2EC0:0023
cs=0x2ec0;eip=0x000025; 	T(MOV(ax, *(dw*)(raddr(es,0x20))));	// 99984 mov     ax, es:20h ;~ 2EC0:0025
	cs=seg_offset(seg027);
cs=0x2ec0;eip=0x000029; 	X(MOV(*(dw*)(((db*)&word_3d320)), ax));	// 99985 mov     cs:word_3D320, ax ;~ 2EC0:0029
cs=0x2ec0;eip=0x00002d; 	T(MOV(ax, *(dw*)(raddr(es,0x22))));	// 99986 mov     ax, es:22h ;~ 2EC0:002D
	cs=seg_offset(seg027);
cs=0x2ec0;eip=0x000031; 	X(MOV(*(dw*)(((db*)&word_3d322)), ax));	// 99987 mov     cs:word_3D322, ax ;~ 2EC0:0031
cs=0x2ec0;eip=0x000035; 	X(MOV(*(dw*)(raddr(es,0x20)), m2c::kloc_3d25e));	// 99988 mov     word ptr es:20h, offset loc_3D25E ;~ 2EC0:0035
cs=0x2ec0;eip=0x00003c; 	X(MOV(*(dw*)(raddr(es,0x22)), cs));	// 99989 mov     word ptr es:22h, cs ;~ 2EC0:003C
	cs=seg_offset(seg027);
cs=0x2ec0;eip=0x000041; 	X(MOV(*(dw*)(((db*)&word_3d1e4)), 0));	// 99990 mov     cs:word_3D1E4, 0 ;~ 2EC0:0041
cs=0x2ec0;eip=0x000048; 	T(MOV(al, 0x36));	// 99991 mov     al, 36h ; '6' ;~ 2EC0:0048
cs=0x2ec0;eip=0x00004a; 	R(OUT(0x43, al));	// 99992 out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 2EC0:004A
cs=0x2ec0;eip=0x00004c; 	T(MOV(al, 0x33));	// 99993 mov     al, 33h ; '3' ;~ 2EC0:004C
cs=0x2ec0;eip=0x00004e; 	R(OUT(0x40, al));	// 99994 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 2EC0:004E
cs=0x2ec0;eip=0x000050; 	T(MOV(al, 0x12));	// 99995 mov     al, 12h ;~ 2EC0:0050
cs=0x2ec0;eip=0x000052; 	R(OUT(0x40, al));	// 99996 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 2EC0:0052
cs=0x2ec0;eip=0x000054; 	X(POP(bp));	// 99997 pop     bp ;~ 2EC0:0054
cs=0x2ec0;eip=0x000055; 	T(STI);	// 99998 sti ;~ 2EC0:0055
cs=0x2ec0;eip=0x000056; 	R(RETF(0));	// 99999 retf ;~ 2EC0:0056
sub_3d237:
	// 100006 
cs=0x2ec0;eip=0x000057; 	T(CLI);	// 100007 cli ;~ 2EC0:0057
cs=0x2ec0;eip=0x000058; 	X(MOV(byte_4ac6b, 0));	// 100008 mov     byte_4AC6B, 0 ;~ 2EC0:0058
cs=0x2ec0;eip=0x00005d; 	T(SUB(ax, ax));	// 100009 sub     ax, ax ;~ 2EC0:005D
cs=0x2ec0;eip=0x00005f; 	T(MOV(es, ax));	// 100010 mov     es, ax ;~ 2EC0:005F
	cs=seg_offset(seg027);
cs=0x2ec0;eip=0x000061; 	T(MOV(ax, *(dw*)(((db*)&word_3d320))));	// 100011 mov     ax, cs:word_3D320 ;~ 2EC0:0061
cs=0x2ec0;eip=0x000065; 	X(MOV(*(dw*)(raddr(es,0x20)), ax));	// 100012 mov     es:20h, ax ;~ 2EC0:0065
	cs=seg_offset(seg027);
cs=0x2ec0;eip=0x000069; 	T(MOV(ax, *(dw*)(((db*)&word_3d322))));	// 100013 mov     ax, cs:word_3D322 ;~ 2EC0:0069
cs=0x2ec0;eip=0x00006d; 	X(MOV(*(dw*)(raddr(es,0x22)), ax));	// 100014 mov     es:22h, ax ;~ 2EC0:006D
cs=0x2ec0;eip=0x000071; 	T(MOV(al, 0x36));	// 100015 mov     al, 36h ; '6' ;~ 2EC0:0071
cs=0x2ec0;eip=0x000073; 	R(OUT(0x43, al));	// 100016 out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 2EC0:0073
cs=0x2ec0;eip=0x000075; 	T(MOV(al, 0x0FF));	// 100017 mov     al, 0FFh ;~ 2EC0:0075
cs=0x2ec0;eip=0x000077; 	R(OUT(0x40, al));	// 100018 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 2EC0:0077
cs=0x2ec0;eip=0x000079; 	R(OUT(0x40, al));	// 100019 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 2EC0:0079
cs=0x2ec0;eip=0x00007b; 	T(STI);	// 100020 sti ;~ 2EC0:007B
cs=0x2ec0;eip=0x00007c; 	R(RETF(0));	// 100021 retf ;~ 2EC0:007C
seg027_proc:
	// 100029 
loc_3d25e:
	// 10773 
cs=0x2ec0;eip=0x00007e; 	X(PUSH(ax));	// 100030 push    ax ;~ 2EC0:007E
cs=0x2ec0;eip=0x00007f; 	T(MOV(al, 1));	// 100031 mov     al, 1 ;~ 2EC0:007F
	cs=seg_offset(seg027);
cs=0x2ec0;eip=0x000081; 	X(XCHG(al, *(&byte_3d25d)));	// 100032 xchg    al, cs:byte_3D25D ;~ 2EC0:0081
cs=0x2ec0;eip=0x000086; 	T(OR(al, al));	// 100033 or      al, al ;~ 2EC0:0086
cs=0x2ec0;eip=0x000088; 	R(JZ(loc_3d270));	// 100034 jz      short loc_3D270 ;~ 2EC0:0088
cs=0x2ec0;eip=0x00008a; 	T(MOV(al, 0x20));	// 100035 mov     al, 20h ; ' ' ;~ 2EC0:008A
cs=0x2ec0;eip=0x00008c; 	R(OUT(0x20, al));	// 100036 out     20h, al         ; Interrupt controller, 8259A. ;~ 2EC0:008C
cs=0x2ec0;eip=0x00008e; 	X(POP(ax));	// 100037 pop     ax ;~ 2EC0:008E
cs=0x2ec0;eip=0x00008f; 	R(IRET);	// 100038 iret ;~ 2EC0:008F
loc_3d270:
	// 10774 
cs=0x2ec0;eip=0x000090; 	X(PUSH(bx));	// 100042 push    bx ;~ 2EC0:0090
cs=0x2ec0;eip=0x000091; 	X(PUSH(cx));	// 100043 push    cx ;~ 2EC0:0091
cs=0x2ec0;eip=0x000092; 	X(PUSH(dx));	// 100044 push    dx ;~ 2EC0:0092
cs=0x2ec0;eip=0x000093; 	X(PUSH(si));	// 100045 push    si ;~ 2EC0:0093
cs=0x2ec0;eip=0x000094; 	X(PUSH(di));	// 100046 push    di ;~ 2EC0:0094
cs=0x2ec0;eip=0x000095; 	X(PUSH(bp));	// 100047 push    bp ;~ 2EC0:0095
cs=0x2ec0;eip=0x000096; 	X(PUSH(ds));	// 100048 push    ds ;~ 2EC0:0096
cs=0x2ec0;eip=0x000097; 	X(PUSH(es));	// 100049 push    es ;~ 2EC0:0097
cs=0x2ec0;eip=0x000098; 	T(STI);	// 100050 sti ;~ 2EC0:0098
cs=0x2ec0;eip=0x000099; 	T(MOV(ax, seg_offset(dseg)));	// 100051 mov     ax, seg dseg ;~ 2EC0:0099
cs=0x2ec0;eip=0x00009c; 	T(MOV(ds, ax));	// 100052 mov     ds, ax ;~ 2EC0:009C
cs=0x2ec0;eip=0x00009e; 	X(INC(word_4ac6c));	// 100053 inc     word_4AC6C ;~ 2EC0:009E
cs=0x2ec0;eip=0x0000a2; 	X(ADD(word_56fde, 1));	// 100054 add     word_56FDE, 1 ;~ 2EC0:00A2
cs=0x2ec0;eip=0x0000a7; 	X(ADC(word_56fe0, 0));	// 100055 adc     word_56FE0, 0 ;~ 2EC0:00A7
cs=0x2ec0;eip=0x0000ac; 	T(CLD);	// 100056 cld ;~ 2EC0:00AC
cs=0x2ec0;eip=0x0000ad; 	X(MOV(byte_4ac6a, 1));	// 100057 mov     byte_4AC6A, 1 ;~ 2EC0:00AD
cs=0x2ec0;eip=0x0000b2; 	X(PUSH(ax));	// 100058 push    ax ;~ 2EC0:00B2
cs=0x2ec0;eip=0x0000b3; 	X(PUSH(bx));	// 100059 push    bx ;~ 2EC0:00B3
cs=0x2ec0;eip=0x0000b4; 	X(PUSH(cx));	// 100060 push    cx ;~ 2EC0:00B4
cs=0x2ec0;eip=0x0000b5; 	X(PUSH(dx));	// 100061 push    dx ;~ 2EC0:00B5
cs=0x2ec0;eip=0x0000b6; 	X(PUSH(si));	// 100062 push    si ;~ 2EC0:00B6
cs=0x2ec0;eip=0x0000b7; 	X(PUSH(di));	// 100063 push    di ;~ 2EC0:00B7
cs=0x2ec0;eip=0x0000b8; 	X(PUSH(bp));	// 100064 push    bp ;~ 2EC0:00B8
cs=0x2ec0;eip=0x0000b9; 	X(PUSH(ds));	// 100065 push    ds ;~ 2EC0:00B9
cs=0x2ec0;eip=0x0000ba; 	R(CALLF(sub_36f38,0));	// 100066 call    sub_36F38 ;~ 2EC0:00BA
cs=0x2ec0;eip=0x0000bf; 	X(POP(ds));	// 100067 pop     ds ;~ 2EC0:00BF
cs=0x2ec0;eip=0x0000c0; 	X(POP(bp));	// 100068 pop     bp ;~ 2EC0:00C0
cs=0x2ec0;eip=0x0000c1; 	X(POP(di));	// 100069 pop     di ;~ 2EC0:00C1
cs=0x2ec0;eip=0x0000c2; 	X(POP(si));	// 100070 pop     si ;~ 2EC0:00C2
cs=0x2ec0;eip=0x0000c3; 	X(POP(dx));	// 100071 pop     dx ;~ 2EC0:00C3
cs=0x2ec0;eip=0x0000c4; 	X(POP(cx));	// 100072 pop     cx ;~ 2EC0:00C4
cs=0x2ec0;eip=0x0000c5; 	X(POP(bx));	// 100073 pop     bx ;~ 2EC0:00C5
cs=0x2ec0;eip=0x0000c6; 	X(POP(ax));	// 100074 pop     ax ;~ 2EC0:00C6
cs=0x2ec0;eip=0x0000c7; 	T(CLD);	// 100075 cld ;~ 2EC0:00C7
cs=0x2ec0;eip=0x0000c8; 	X(DEC(byte_4ac5e));	// 100076 dec     byte_4AC5E ;~ 2EC0:00C8
cs=0x2ec0;eip=0x0000cc; 	R(JNS(loc_3d2b6));	// 100077 jns     short loc_3D2B6 ;~ 2EC0:00CC
cs=0x2ec0;eip=0x0000ce; 	X(MOV(byte_4ac5e, 7));	// 100078 mov     byte_4AC5E, 7 ;~ 2EC0:00CE
cs=0x2ec0;eip=0x0000d3; 	R(CALL(sub_3d419,0));	// 100079 call    sub_3D419 ;~ 2EC0:00D3
loc_3d2b6:
	// 10775 
cs=0x2ec0;eip=0x0000d6; 	T(CMP(byte_55204, 1));	// 100082 cmp     byte_55204, 1 ;~ 2EC0:00D6
cs=0x2ec0;eip=0x0000db; 	R(JNZ(loc_3d2f4));	// 100083 jnz     short loc_3D2F4 ;~ 2EC0:00DB
cs=0x2ec0;eip=0x0000dd; 	X(DEC(byte_4ac5f));	// 100084 dec     byte_4AC5F ;~ 2EC0:00DD
cs=0x2ec0;eip=0x0000e1; 	R(JNS(loc_3d2f4));	// 100085 jns     short loc_3D2F4 ;~ 2EC0:00E1
cs=0x2ec0;eip=0x0000e3; 	X(MOV(byte_4ac5f, 3));	// 100086 mov     byte_4AC5F, 3 ;~ 2EC0:00E3
cs=0x2ec0;eip=0x0000e8; 	T(XOR(ax, ax));	// 100087 xor     ax, ax ;~ 2EC0:00E8
cs=0x2ec0;eip=0x0000ea; 	X(PUSH(ax));	// 100088 push    ax ;~ 2EC0:00EA
cs=0x2ec0;eip=0x0000eb; 	R(CALLF(sub_2f728,0));	// 100089 call    sub_2F728 ;~ 2EC0:00EB
cs=0x2ec0;eip=0x0000f0; 	T(ADD(sp, 2));	// 100090 add     sp, 2 ;~ 2EC0:00F0
cs=0x2ec0;eip=0x0000f3; 	T(TEST(al, 1));	// 100091 test    al, 1 ;~ 2EC0:00F3
cs=0x2ec0;eip=0x0000f5; 	R(JZ(loc_3d2e2));	// 100092 jz      short loc_3D2E2 ;~ 2EC0:00F5
cs=0x2ec0;eip=0x0000f7; 	T(TEST(byte_56492, 1));	// 100093 test    byte_56492, 1 ;~ 2EC0:00F7
cs=0x2ec0;eip=0x0000fc; 	R(JNZ(loc_3d2e2));	// 100094 jnz     short loc_3D2E2 ;~ 2EC0:00FC
cs=0x2ec0;eip=0x0000fe; 	X(INC(byte_47ab4));	// 100095 inc     byte_47AB4 ;~ 2EC0:00FE
loc_3d2e2:
	// 10776 
cs=0x2ec0;eip=0x000102; 	T(TEST(al, 2));	// 100099 test    al, 2 ;~ 2EC0:0102
cs=0x2ec0;eip=0x000104; 	R(JZ(loc_3d2f1));	// 100100 jz      short loc_3D2F1 ;~ 2EC0:0104
cs=0x2ec0;eip=0x000106; 	T(TEST(byte_56492, 2));	// 100101 test    byte_56492, 2 ;~ 2EC0:0106
cs=0x2ec0;eip=0x00010b; 	R(JNZ(loc_3d2f1));	// 100102 jnz     short loc_3D2F1 ;~ 2EC0:010B
cs=0x2ec0;eip=0x00010d; 	X(INC(byte_47ab5));	// 100103 inc     byte_47AB5 ;~ 2EC0:010D
loc_3d2f1:
	// 10777 
cs=0x2ec0;eip=0x000111; 	X(MOV(byte_56492, al));	// 100107 mov     byte_56492, al ;~ 2EC0:0111
loc_3d2f4:
	// 10778 
cs=0x2ec0;eip=0x000114; 	X(POP(es));	// 100111 pop     es ;~ 2EC0:0114
cs=0x2ec0;eip=0x000115; 	X(POP(ds));	// 100113 pop     ds ;~ 2EC0:0115
cs=0x2ec0;eip=0x000116; 	X(POP(bp));	// 100114 pop     bp ;~ 2EC0:0116
cs=0x2ec0;eip=0x000117; 	X(POP(di));	// 100115 pop     di ;~ 2EC0:0117
cs=0x2ec0;eip=0x000118; 	X(POP(si));	// 100116 pop     si ;~ 2EC0:0118
cs=0x2ec0;eip=0x000119; 	X(POP(dx));	// 100117 pop     dx ;~ 2EC0:0119
cs=0x2ec0;eip=0x00011a; 	X(POP(cx));	// 100118 pop     cx ;~ 2EC0:011A
cs=0x2ec0;eip=0x00011b; 	X(POP(bx));	// 100119 pop     bx ;~ 2EC0:011B
	cs=seg_offset(seg027);
cs=0x2ec0;eip=0x00011c; 	X(SUB(*(dw*)(((db*)&word_3d1e4)), 0x0B6));	// 100120 sub     cs:word_3D1E4, 0B6h ; '¶' ;~ 2EC0:011C
cs=0x2ec0;eip=0x000123; 	R(JS(loc_3d311));	// 100121 js      short loc_3D311 ;~ 2EC0:0123
cs=0x2ec0;eip=0x000125; 	T(MOV(al, 0x20));	// 100122 mov     al, 20h ; ' ' ;~ 2EC0:0125
cs=0x2ec0;eip=0x000127; 	R(OUT(0x20, al));	// 100123 out     20h, al         ; Interrupt controller, 8259A. ;~ 2EC0:0127
cs=0x2ec0;eip=0x000129; 	X(POP(ax));	// 100124 pop     ax ;~ 2EC0:0129
	cs=seg_offset(seg027);
cs=0x2ec0;eip=0x00012a; 	X(MOV(*(&byte_3d25d), 0));	// 100125 mov     cs:byte_3D25D, 0 ;~ 2EC0:012A
cs=0x2ec0;eip=0x000130; 	R(IRET);	// 100126 iret ;~ 2EC0:0130
loc_3d311:
	// 10779 
	cs=seg_offset(seg027);
cs=0x2ec0;eip=0x000131; 	X(ADD(*(dw*)(((db*)&word_3d1e4)), 0x0A00));	// 100130 add     cs:word_3D1E4, 0A00h ;~ 2EC0:0131
cs=0x2ec0;eip=0x000138; 	X(POP(ax));	// 100131 pop     ax ;~ 2EC0:0138
	cs=seg_offset(seg027);
cs=0x2ec0;eip=0x000139; 	X(MOV(*(&byte_3d25d), 0));	// 100132 mov     cs:byte_3D25D, 0 ;~ 2EC0:0139
sub_3d324:
	// 100143 
cs=0x2ec0;eip=0x000144; 	T(XOR(ax, ax));	// 100145 xor     ax, ax ;~ 2EC0:0144
cs=0x2ec0;eip=0x000146; 	X(MOV(word_4ac62, ax));	// 100146 mov     word_4AC62, ax ;~ 2EC0:0146
cs=0x2ec0;eip=0x000149; 	X(MOV(word_4ac64, ax));	// 100147 mov     word_4AC64, ax ;~ 2EC0:0149
cs=0x2ec0;eip=0x00014c; 	X(MOV(word_4ac66, ax));	// 100148 mov     word_4AC66, ax ;~ 2EC0:014C
cs=0x2ec0;eip=0x00014f; 	X(MOV(word_4ac68, ax));	// 100149 mov     word_4AC68, ax ;~ 2EC0:014F
cs=0x2ec0;eip=0x000152; 	X(MOV(word_47b74, ax));	// 100150 mov     word_47B74, ax ;~ 2EC0:0152
cs=0x2ec0;eip=0x000155; 	R(RETF(0));	// 100151 retf ;~ 2EC0:0155
sub_3d336:
	// 100158 
cs=0x2ec0;eip=0x000156; 	T(MOV(al, byte_47b2e));	// 100160 mov     al, byte_47B2E ;~ 2EC0:0156
cs=0x2ec0;eip=0x000159; 	T(CMP(al, 1));	// 100161 cmp     al, 1 ;~ 2EC0:0159
cs=0x2ec0;eip=0x00015b; 	R(JNZ(loc_3d355));	// 100162 jnz     short loc_3D355 ;~ 2EC0:015B
cs=0x2ec0;eip=0x00015d; 	T(MOV(al, byte_4ac61));	// 100163 mov     al, byte_4AC61 ;~ 2EC0:015D
cs=0x2ec0;eip=0x000160; 	T(AND(al, 0x28));	// 100164 and     al, 28h ;~ 2EC0:0160
cs=0x2ec0;eip=0x000162; 	T(ADD(al, byte_4ac60));	// 100165 add     al, byte_4AC60 ;~ 2EC0:0162
cs=0x2ec0;eip=0x000166; 	T(XOR(ah, ah));	// 100166 xor     ah, ah ;~ 2EC0:0166
cs=0x2ec0;eip=0x000168; 	X(MOV(word_47b74, ax));	// 100167 mov     word_47B74, ax ;~ 2EC0:0168
cs=0x2ec0;eip=0x00016b; 	X(PUSH(word_5651a));	// 100168 push    word_5651A ;~ 2EC0:016B
cs=0x2ec0;eip=0x00016f; 	R(CALLF(sub_20347,0));	// 100169 call    sub_20347 ;~ 2EC0:016F
cs=0x2ec0;eip=0x000174; 	R(RETF(0));	// 100170 retf ;~ 2EC0:0174
loc_3d355:
	// 10780 
cs=0x2ec0;eip=0x000175; 	T(CMP(al, 0));	// 100174 cmp     al, 0 ;~ 2EC0:0175
cs=0x2ec0;eip=0x000177; 	R(JNZ(loc_3d36d));	// 100175 jnz     short loc_3D36D ;~ 2EC0:0177
cs=0x2ec0;eip=0x000179; 	T(MOV(al, byte_4ac61));	// 100176 mov     al, byte_4AC61 ;~ 2EC0:0179
cs=0x2ec0;eip=0x00017c; 	T(AND(al, 0x28));	// 100177 and     al, 28h ;~ 2EC0:017C
cs=0x2ec0;eip=0x00017e; 	T(ADD(al, byte_4ac60));	// 100178 add     al, byte_4AC60 ;~ 2EC0:017E
cs=0x2ec0;eip=0x000182; 	T(XOR(ah, ah));	// 100179 xor     ah, ah ;~ 2EC0:0182
cs=0x2ec0;eip=0x000184; 	X(MOV(word_47b74, ax));	// 100180 mov     word_47B74, ax ;~ 2EC0:0184
cs=0x2ec0;eip=0x000187; 	R(CALLF(sub_21297,0));	// 100181 call    sub_21297 ;~ 2EC0:0187
cs=0x2ec0;eip=0x00018c; 	R(RETF(0));	// 100182 retf ;~ 2EC0:018C
loc_3d36d:
	// 10781 
cs=0x2ec0;eip=0x00018d; 	T(CMP(al, 4));	// 100186 cmp     al, 4 ;~ 2EC0:018D
cs=0x2ec0;eip=0x00018f; 	R(JNZ(loc_3d38f));	// 100187 jnz     short loc_3D38F ;~ 2EC0:018F
cs=0x2ec0;eip=0x000191; 	T(MOV(al, byte_4ac60));	// 100188 mov     al, byte_4AC60 ;~ 2EC0:0191
cs=0x2ec0;eip=0x000194; 	T(CMP(byte_569c8, 0));	// 100189 cmp     byte_569C8, 0 ;~ 2EC0:0194
cs=0x2ec0;eip=0x000199; 	R(JZ(loc_3d384));	// 100190 jz      short loc_3D384 ;~ 2EC0:0199
cs=0x2ec0;eip=0x00019b; 	T(MOV(bl, byte_4ac61));	// 100191 mov     bl, byte_4AC61 ;~ 2EC0:019B
cs=0x2ec0;eip=0x00019f; 	T(AND(bl, 0x50));	// 100192 and     bl, 50h ;~ 2EC0:019F
cs=0x2ec0;eip=0x0001a2; 	T(ADD(al, bl));	// 100193 add     al, bl ;~ 2EC0:01A2
loc_3d384:
	// 10782 
cs=0x2ec0;eip=0x0001a4; 	T(XOR(ah, ah));	// 100196 xor     ah, ah ;~ 2EC0:01A4
cs=0x2ec0;eip=0x0001a6; 	X(MOV(word_47b74, ax));	// 100197 mov     word_47B74, ax ;~ 2EC0:01A6
cs=0x2ec0;eip=0x0001a9; 	R(CALLF(sub_21297,0));	// 100198 call    sub_21297 ;~ 2EC0:01A9
cs=0x2ec0;eip=0x0001ae; 	R(RETF(0));	// 100199 retf ;~ 2EC0:01AE
loc_3d38f:
	// 10783 
cs=0x2ec0;eip=0x0001af; 	T(CMP(al, 5));	// 100203 cmp     al, 5 ;~ 2EC0:01AF
cs=0x2ec0;eip=0x0001b1; 	R(JNZ(locret_3d3a0));	// 100204 jnz     short locret_3D3A0 ;~ 2EC0:01B1
cs=0x2ec0;eip=0x0001b3; 	T(MOV(al, byte_4ac60));	// 100205 mov     al, byte_4AC60 ;~ 2EC0:01B3
cs=0x2ec0;eip=0x0001b6; 	T(XOR(ah, ah));	// 100206 xor     ah, ah ;~ 2EC0:01B6
cs=0x2ec0;eip=0x0001b8; 	X(MOV(word_47b74, ax));	// 100207 mov     word_47B74, ax ;~ 2EC0:01B8
cs=0x2ec0;eip=0x0001bb; 	R(CALLF(sub_21297,0));	// 100208 call    sub_21297 ;~ 2EC0:01BB
locret_3d3a0:
	// 10784 
cs=0x2ec0;eip=0x0001c0; 	R(RETF(0));	// 100211 retf ;~ 2EC0:01C0
sub_3d3a1:
	// 100218 
cs=0x2ec0;eip=0x0001c1; 	T(XOR(ax, ax));	// 100219 xor     ax, ax ;~ 2EC0:01C1
cs=0x2ec0;eip=0x0001c3; 	X(MOV(word_4ac62, ax));	// 100220 mov     word_4AC62, ax ;~ 2EC0:01C3
cs=0x2ec0;eip=0x0001c6; 	X(MOV(word_4ac64, ax));	// 100221 mov     word_4AC64, ax ;~ 2EC0:01C6
cs=0x2ec0;eip=0x0001c9; 	X(MOV(word_4ac66, ax));	// 100222 mov     word_4AC66, ax ;~ 2EC0:01C9
cs=0x2ec0;eip=0x0001cc; 	X(MOV(word_4ac68, ax));	// 100223 mov     word_4AC68, ax ;~ 2EC0:01CC
cs=0x2ec0;eip=0x0001cf; 	X(MOV(byte_4ac61, al));	// 100224 mov     byte_4AC61, al ;~ 2EC0:01CF
cs=0x2ec0;eip=0x0001d2; 	X(MOV(byte_4ac60, al));	// 100225 mov     byte_4AC60, al ;~ 2EC0:01D2
cs=0x2ec0;eip=0x0001d5; 	R(CALLF(sub_3d336,0));	// 100226 call    sub_3D336 ;~ 2EC0:01D5
cs=0x2ec0;eip=0x0001da; 	R(RETF(0));	// 100227 retf ;~ 2EC0:01DA
sub_3d3bb:
	// 100234 
cs=0x2ec0;eip=0x0001db; 	R(CALLF(sub_3d3a1,0));	// 100236 call    sub_3D3A1 ;~ 2EC0:01DB
cs=0x2ec0;eip=0x0001e0; 	R(RETF(0));	// 100237 retf ;~ 2EC0:01E0
sub_3d3c1:
	// 100245 
#undef arg_0
#define arg_0 6
	// 100247 arg_0           = word ptr  6 ;~ 2EC0:01E1
cs=0x2ec0;eip=0x0001e1; 	X(PUSH(bp));	// 100249 push    bp ;~ 2EC0:01E1
cs=0x2ec0;eip=0x0001e2; 	T(MOV(bp, sp));	// 100250 mov     bp, sp ;~ 2EC0:01E2
cs=0x2ec0;eip=0x0001e4; 	X(MOV(byte_4ac60, 0));	// 100251 mov     byte_4AC60, 0 ;~ 2EC0:01E4
cs=0x2ec0;eip=0x0001e9; 	T(MOV(ax, word_5705a));	// 100252 mov     ax, word_5705A ;~ 2EC0:01E9
cs=0x2ec0;eip=0x0001ec; 	T(MOV(dx, word_5705c));	// 100253 mov     dx, word_5705C ;~ 2EC0:01EC
cs=0x2ec0;eip=0x0001f0; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 100254 add     ax, [bp+arg_0] ;~ 2EC0:01F0
cs=0x2ec0;eip=0x0001f3; 	T(ADC(dx, 0));	// 100255 adc     dx, 0 ;~ 2EC0:01F3
cs=0x2ec0;eip=0x0001f6; 	T(CMP(dx, word_4ac64));	// 100256 cmp     dx, word_4AC64 ;~ 2EC0:01F6
cs=0x2ec0;eip=0x0001fa; 	R(JG(loc_3d3e4));	// 100257 jg      short loc_3D3E4 ;~ 2EC0:01FA
cs=0x2ec0;eip=0x0001fc; 	R(JL(loc_3d3eb));	// 100258 jl      short loc_3D3EB ;~ 2EC0:01FC
cs=0x2ec0;eip=0x0001fe; 	T(CMP(ax, word_4ac62));	// 100259 cmp     ax, word_4AC62 ;~ 2EC0:01FE
cs=0x2ec0;eip=0x000202; 	R(JBE(loc_3d3eb));	// 100260 jbe     short loc_3D3EB ;~ 2EC0:0202
loc_3d3e4:
	// 10785 
cs=0x2ec0;eip=0x000204; 	X(MOV(word_4ac62, ax));	// 100263 mov     word_4AC62, ax ;~ 2EC0:0204
cs=0x2ec0;eip=0x000207; 	X(MOV(word_4ac64, dx));	// 100264 mov     word_4AC64, dx ;~ 2EC0:0207
loc_3d3eb:
	// 10786 
cs=0x2ec0;eip=0x00020b; 	X(POP(bp));	// 100268 pop     bp ;~ 2EC0:020B
cs=0x2ec0;eip=0x00020c; 	R(RETF(0));	// 100269 retf ;~ 2EC0:020C
sub_3d3ed:
	// 100277 
#undef arg_0
#define arg_0 6
	// 100280 arg_0           = word ptr  6 ;~ 2EC0:020D
cs=0x2ec0;eip=0x00020d; 	X(PUSH(bp));	// 100282 push    bp ;~ 2EC0:020D
cs=0x2ec0;eip=0x00020e; 	T(MOV(bp, sp));	// 100283 mov     bp, sp ;~ 2EC0:020E
cs=0x2ec0;eip=0x000210; 	X(MOV(byte_4ac61, 0));	// 100284 mov     byte_4AC61, 0 ;~ 2EC0:0210
cs=0x2ec0;eip=0x000215; 	T(MOV(ax, word_5705a));	// 100285 mov     ax, word_5705A ;~ 2EC0:0215
cs=0x2ec0;eip=0x000218; 	T(MOV(dx, word_5705c));	// 100286 mov     dx, word_5705C ;~ 2EC0:0218
cs=0x2ec0;eip=0x00021c; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 100287 add     ax, [bp+arg_0] ;~ 2EC0:021C
cs=0x2ec0;eip=0x00021f; 	T(ADC(dx, 0));	// 100288 adc     dx, 0 ;~ 2EC0:021F
cs=0x2ec0;eip=0x000222; 	T(CMP(dx, word_4ac68));	// 100289 cmp     dx, word_4AC68 ;~ 2EC0:0222
cs=0x2ec0;eip=0x000226; 	R(JG(loc_3d410));	// 100290 jg      short loc_3D410 ;~ 2EC0:0226
cs=0x2ec0;eip=0x000228; 	R(JL(loc_3d417));	// 100291 jl      short loc_3D417 ;~ 2EC0:0228
cs=0x2ec0;eip=0x00022a; 	T(CMP(ax, word_4ac66));	// 100292 cmp     ax, word_4AC66 ;~ 2EC0:022A
cs=0x2ec0;eip=0x00022e; 	R(JBE(loc_3d417));	// 100293 jbe     short loc_3D417 ;~ 2EC0:022E
loc_3d410:
	// 10787 
cs=0x2ec0;eip=0x000230; 	X(MOV(word_4ac66, ax));	// 100296 mov     word_4AC66, ax ;~ 2EC0:0230
cs=0x2ec0;eip=0x000233; 	X(MOV(word_4ac68, dx));	// 100297 mov     word_4AC68, dx ;~ 2EC0:0233
loc_3d417:
	// 10788 
cs=0x2ec0;eip=0x000237; 	X(POP(bp));	// 100301 pop     bp ;~ 2EC0:0237
cs=0x2ec0;eip=0x000238; 	R(RETF(0));	// 100302 retf ;~ 2EC0:0238
sub_3d419:
	// 100309 
cs=0x2ec0;eip=0x000239; 	T(CMP(byte_55209, 0));	// 100310 cmp     byte_55209, 0 ;~ 2EC0:0239
cs=0x2ec0;eip=0x00023e; 	R(JZ(loc_3d45a));	// 100311 jz      short loc_3D45A ;~ 2EC0:023E
cs=0x2ec0;eip=0x000240; 	T(MOV(cx, word_5705a));	// 100312 mov     cx, word_5705A ;~ 2EC0:0240
cs=0x2ec0;eip=0x000244; 	T(MOV(dx, word_5705c));	// 100313 mov     dx, word_5705C ;~ 2EC0:0244
cs=0x2ec0;eip=0x000248; 	T(XOR(al, al));	// 100314 xor     al, al ;~ 2EC0:0248
cs=0x2ec0;eip=0x00024a; 	T(CMP(dx, word_4ac64));	// 100315 cmp     dx, word_4AC64 ;~ 2EC0:024A
cs=0x2ec0;eip=0x00024e; 	R(JG(loc_3d43d));	// 100316 jg      short loc_3D43D ;~ 2EC0:024E
cs=0x2ec0;eip=0x000250; 	R(JL(loc_3d438));	// 100317 jl      short loc_3D438 ;~ 2EC0:0250
cs=0x2ec0;eip=0x000252; 	T(CMP(cx, word_4ac62));	// 100318 cmp     cx, word_4AC62 ;~ 2EC0:0252
cs=0x2ec0;eip=0x000256; 	R(JNC(loc_3d43d));	// 100319 jnb     short loc_3D43D ;~ 2EC0:0256
loc_3d438:
	// 10789 
cs=0x2ec0;eip=0x000258; 	T(MOV(al, byte_4ac60));	// 100322 mov     al, byte_4AC60 ;~ 2EC0:0258
cs=0x2ec0;eip=0x00025b; 	T(XOR(al, 1));	// 100323 xor     al, 1 ;~ 2EC0:025B
loc_3d43d:
	// 10790 
cs=0x2ec0;eip=0x00025d; 	X(MOV(byte_4ac60, al));	// 100327 mov     byte_4AC60, al ;~ 2EC0:025D
cs=0x2ec0;eip=0x000260; 	T(XOR(al, al));	// 100328 xor     al, al ;~ 2EC0:0260
cs=0x2ec0;eip=0x000262; 	T(CMP(dx, word_4ac68));	// 100329 cmp     dx, word_4AC68 ;~ 2EC0:0262
cs=0x2ec0;eip=0x000266; 	R(JG(loc_3d455));	// 100330 jg      short loc_3D455 ;~ 2EC0:0266
cs=0x2ec0;eip=0x000268; 	R(JL(loc_3d450));	// 100331 jl      short loc_3D450 ;~ 2EC0:0268
cs=0x2ec0;eip=0x00026a; 	T(CMP(cx, word_4ac66));	// 100332 cmp     cx, word_4AC66 ;~ 2EC0:026A
cs=0x2ec0;eip=0x00026e; 	R(JNC(loc_3d455));	// 100333 jnb     short loc_3D455 ;~ 2EC0:026E
loc_3d450:
	// 10791 
cs=0x2ec0;eip=0x000270; 	T(MOV(al, byte_4ac61));	// 100336 mov     al, byte_4AC61 ;~ 2EC0:0270
cs=0x2ec0;eip=0x000273; 	T(XOR(al, 0x0FF));	// 100337 xor     al, 0FFh ;~ 2EC0:0273
loc_3d455:
	// 10792 
cs=0x2ec0;eip=0x000275; 	X(MOV(byte_4ac61, al));	// 100341 mov     byte_4AC61, al ;~ 2EC0:0275
cs=0x2ec0;eip=0x000278; 	R(JMP(loc_3d464));	// 100342 jmp     short loc_3D464 ;~ 2EC0:0278
loc_3d45a:
	// 10793 
cs=0x2ec0;eip=0x00027a; 	X(MOV(byte_4ac60, 0));	// 100346 mov     byte_4AC60, 0 ;~ 2EC0:027A
cs=0x2ec0;eip=0x00027f; 	X(MOV(byte_4ac61, 0));	// 100347 mov     byte_4AC61, 0 ;~ 2EC0:027F
loc_3d464:
	// 10794 
cs=0x2ec0;eip=0x000284; 	R(CALLF(sub_3d336,0));	// 100350 call    sub_3D336 ;~ 2EC0:0284
cs=0x2ec0;eip=0x000289; 	R(RETN(0));	// 100351 retn ;~ 2EC0:0289
sub_3d46a:
	// 100358 
cs=0x2ec0;eip=0x00028a; 	T(CMP(byte_4ac6b, 0));	// 100360 cmp     byte_4AC6B, 0 ;~ 2EC0:028A
cs=0x2ec0;eip=0x00028f; 	R(JZ(locret_3d47f));	// 100361 jz      short locret_3D47F ;~ 2EC0:028F
cs=0x2ec0;eip=0x000291; 	T(TEST(byte_5687c, 2));	// 100362 test    byte_5687C, 2 ;~ 2EC0:0291
cs=0x2ec0;eip=0x000296; 	R(JZ(locret_3d47f));	// 100363 jz      short locret_3D47F ;~ 2EC0:0296
loc_3d478:
	// 10795 
cs=0x2ec0;eip=0x000298; 	T(CMP(word_4ac6c, 5));	// 100366 cmp     word_4AC6C, 5 ;~ 2EC0:0298
cs=0x2ec0;eip=0x00029d; 	R(JC(loc_3d478));	// 100367 jb      short loc_3D478 ;~ 2EC0:029D
locret_3d47f:
	// 10796 
cs=0x2ec0;eip=0x00029f; 	R(RETF(0));	// 100371 retf ;~ 2EC0:029F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_3d270: 	goto loc_3d270;
        case m2c::kloc_3d2b6: 	goto loc_3d2b6;
        case m2c::kloc_3d2e2: 	goto loc_3d2e2;
        case m2c::kloc_3d2f1: 	goto loc_3d2f1;
        case m2c::kloc_3d2f4: 	goto loc_3d2f4;
        case m2c::kloc_3d311: 	goto loc_3d311;
        case m2c::kloc_3d355: 	goto loc_3d355;
        case m2c::kloc_3d36d: 	goto loc_3d36d;
        case m2c::kloc_3d384: 	goto loc_3d384;
        case m2c::kloc_3d38f: 	goto loc_3d38f;
        case m2c::kloc_3d3e4: 	goto loc_3d3e4;
        case m2c::kloc_3d3eb: 	goto loc_3d3eb;
        case m2c::kloc_3d410: 	goto loc_3d410;
        case m2c::kloc_3d417: 	goto loc_3d417;
        case m2c::kloc_3d438: 	goto loc_3d438;
        case m2c::kloc_3d43d: 	goto loc_3d43d;
        case m2c::kloc_3d450: 	goto loc_3d450;
        case m2c::kloc_3d455: 	goto loc_3d455;
        case m2c::kloc_3d45a: 	goto loc_3d45a;
        case m2c::kloc_3d464: 	goto loc_3d464;
        case m2c::kloc_3d478: 	goto loc_3d478;
        case m2c::klocret_3d3a0: 	goto locret_3d3a0;
        case m2c::klocret_3d47f: 	goto locret_3d47f;
        case m2c::kseg027_proc: 	goto seg027_proc;
        case m2c::ksub_3d1e6: 	goto sub_3d1e6;
        case m2c::ksub_3d237: 	goto sub_3d237;
        case m2c::ksub_3d324: 	goto sub_3d324;
        case m2c::ksub_3d336: 	goto sub_3d336;
        case m2c::ksub_3d3a1: 	goto sub_3d3a1;
        case m2c::ksub_3d3bb: 	goto sub_3d3bb;
        case m2c::ksub_3d3c1: 	goto sub_3d3c1;
        case m2c::ksub_3d3ed: 	goto sub_3d3ed;
        case m2c::ksub_3d419: 	goto sub_3d419;
        case m2c::ksub_3d46a: 	goto sub_3d46a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, _source);m2c::stackDump(_state); abort();
    };
}

