/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group10(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group10:
    _begin:
sub_2f60c:
	// 70906 
cs=0x2102;eip=0x00000c; 	X(PUSH(bp));	// 70908 push    bp ;~ 2102:000C
cs=0x2102;eip=0x00000d; 	T(MOV(bp, sp));	// 70909 mov     bp, sp ;~ 2102:000D
cs=0x2102;eip=0x00000f; 	X(PUSH(di));	// 70910 push    di ;~ 2102:000F
cs=0x2102;eip=0x000010; 	X(PUSH(si));	// 70911 push    si ;~ 2102:0010
cs=0x2102;eip=0x000011; 	X(MOV(*(dw*)((&unk_48190)), 0));	// 70912 mov     word ptr unk_48190, 0 ;~ 2102:0011
cs=0x2102;eip=0x000017; 	X(MOV(*(dw*)((&unk_48192)), 1));	// 70913 mov     word ptr unk_48192, 1 ;~ 2102:0017
cs=0x2102;eip=0x00001d; 	T(MOV(si, 0x7D0));	// 70914 mov     si, 7D0h ;~ 2102:001D
cs=0x2102;eip=0x000020; 	R(CALL(sub_2f6c1,0));	// 70915 call    sub_2F6C1 ;~ 2102:0020
cs=0x2102;eip=0x000023; 	X(MOV(*(dw*)((&unk_48180)), di));	// 70916 mov     word ptr unk_48180, di ;~ 2102:0023
cs=0x2102;eip=0x000027; 	T(CMP(di, 0x10));	// 70917 cmp     di, 10h ;~ 2102:0027
cs=0x2102;eip=0x00002a; 	R(JC(loc_2f64b));	// 70918 jb      short loc_2F64B ;~ 2102:002A
cs=0x2102;eip=0x00002c; 	T(CMP(di, 0x3E8));	// 70919 cmp     di, 3E8h ;~ 2102:002C
cs=0x2102;eip=0x000030; 	R(JA(loc_2f64b));	// 70920 ja      short loc_2F64B ;~ 2102:0030
cs=0x2102;eip=0x000032; 	X(MOV(*(dw*)((&unk_48182)), bx));	// 70921 mov     word ptr unk_48182, bx ;~ 2102:0032
cs=0x2102;eip=0x000036; 	T(CMP(bx, 0x10));	// 70922 cmp     bx, 10h ;~ 2102:0036
cs=0x2102;eip=0x000039; 	R(JC(loc_2f64b));	// 70923 jb      short loc_2F64B ;~ 2102:0039
cs=0x2102;eip=0x00003b; 	T(CMP(bx, 0x3E8));	// 70924 cmp     bx, 3E8h ;~ 2102:003B
cs=0x2102;eip=0x00003f; 	R(JA(loc_2f64b));	// 70925 ja      short loc_2F64B ;~ 2102:003F
cs=0x2102;eip=0x000041; 	X(INC(*(dw*)((&unk_48190))));	// 70926 inc     word ptr unk_48190 ;~ 2102:0041
cs=0x2102;eip=0x000045; 	X(MOV(*(dw*)((&unk_48192)), 0));	// 70927 mov     word ptr unk_48192, 0 ;~ 2102:0045
loc_2f64b:
	// 8954 
cs=0x2102;eip=0x00004b; 	T(MOV(cx, 0x0AF1));	// 70931 mov     cx, 0AF1h ;~ 2102:004B
loc_2f64e:
	// 8955 
cs=0x2102;eip=0x00004e; 	R(LOOP(loc_2f64e));	// 70934 loop    loc_2F64E ;~ 2102:004E
cs=0x2102;eip=0x000050; 	T(MOV(si, 0x7D8));	// 70935 mov     si, 7D8h ;~ 2102:0050
cs=0x2102;eip=0x000053; 	R(CALL(sub_2f6c1,0));	// 70936 call    sub_2F6C1 ;~ 2102:0053
cs=0x2102;eip=0x000056; 	X(MOV(*(dw*)((&unk_48188)), di));	// 70937 mov     word ptr unk_48188, di ;~ 2102:0056
cs=0x2102;eip=0x00005a; 	T(CMP(di, 0x10));	// 70938 cmp     di, 10h ;~ 2102:005A
cs=0x2102;eip=0x00005d; 	R(JC(loc_2f678));	// 70939 jb      short loc_2F678 ;~ 2102:005D
cs=0x2102;eip=0x00005f; 	T(CMP(di, 0x3E8));	// 70940 cmp     di, 3E8h ;~ 2102:005F
cs=0x2102;eip=0x000063; 	R(JA(loc_2f678));	// 70941 ja      short loc_2F678 ;~ 2102:0063
cs=0x2102;eip=0x000065; 	X(MOV(*(dw*)((&unk_4818a)), bx));	// 70942 mov     word ptr unk_4818A, bx ;~ 2102:0065
cs=0x2102;eip=0x000069; 	T(CMP(bx, 0x10));	// 70943 cmp     bx, 10h ;~ 2102:0069
cs=0x2102;eip=0x00006c; 	R(JC(loc_2f678));	// 70944 jb      short loc_2F678 ;~ 2102:006C
cs=0x2102;eip=0x00006e; 	T(CMP(bx, 0x3E8));	// 70945 cmp     bx, 3E8h ;~ 2102:006E
cs=0x2102;eip=0x000072; 	R(JA(loc_2f678));	// 70946 ja      short loc_2F678 ;~ 2102:0072
cs=0x2102;eip=0x000074; 	X(INC(*(dw*)((&unk_48190))));	// 70947 inc     word ptr unk_48190 ;~ 2102:0074
loc_2f678:
	// 8956 
cs=0x2102;eip=0x000078; 	T(MOV(ax, *(dw*)((&unk_48190))));	// 70951 mov     ax, word ptr unk_48190 ;~ 2102:0078
cs=0x2102;eip=0x00007b; 	X(POP(si));	// 70952 pop     si ;~ 2102:007B
cs=0x2102;eip=0x00007c; 	X(POP(di));	// 70953 pop     di ;~ 2102:007C
cs=0x2102;eip=0x00007d; 	X(POP(bp));	// 70954 pop     bp ;~ 2102:007D
cs=0x2102;eip=0x00007e; 	R(RETF(0));	// 70955 retf ;~ 2102:007E
sub_2f67f:
	// 70963 
#undef arg_0
#define arg_0 6
	// 70965 arg_0           = word ptr  6 ;~ 2102:007F
#undef arg_2
#define arg_2 8
	// 70966 arg_2           = word ptr  8 ;~ 2102:007F
#undef arg_4
#define arg_4 0x0A
	// 70967 arg_4           = word ptr  0Ah ;~ 2102:007F
cs=0x2102;eip=0x00007f; 	X(PUSH(bp));	// 70969 push    bp ;~ 2102:007F
cs=0x2102;eip=0x000080; 	T(MOV(bp, sp));	// 70970 mov     bp, sp ;~ 2102:0080
cs=0x2102;eip=0x000082; 	X(PUSH(di));	// 70971 push    di ;~ 2102:0082
cs=0x2102;eip=0x000083; 	X(PUSH(si));	// 70972 push    si ;~ 2102:0083
cs=0x2102;eip=0x000084; 	T(MOV(si, 0x7D0));	// 70973 mov     si, 7D0h ;~ 2102:0084
cs=0x2102;eip=0x000087; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 70974 mov     ax, [bp+arg_4] ;~ 2102:0087
cs=0x2102;eip=0x00008a; 	T(XOR(ax, *(dw*)((&unk_48192))));	// 70975 xor     ax, word ptr unk_48192 ;~ 2102:008A
cs=0x2102;eip=0x00008e; 	T(CMP(ax, 1));	// 70976 cmp     ax, 1 ;~ 2102:008E
cs=0x2102;eip=0x000091; 	R(JNZ(loc_2f696));	// 70977 jnz     short loc_2F696 ;~ 2102:0091
cs=0x2102;eip=0x000093; 	T(MOV(si, 0x7D8));	// 70978 mov     si, 7D8h ;~ 2102:0093
loc_2f696:
	// 8957 
cs=0x2102;eip=0x000096; 	R(CALL(sub_2f6c1,0));	// 70981 call    sub_2F6C1 ;~ 2102:0096
cs=0x2102;eip=0x000099; 	T(SUB(di, *(dw*)(raddr(ds,si))));	// 70982 sub     di, [si] ;~ 2102:0099
cs=0x2102;eip=0x00009b; 	T(MOV(ax, 0x80));	// 70983 mov     ax, 80h ; '€' ;~ 2102:009B
cs=0x2102;eip=0x00009e; 	T(IMUL1_2(di));	// 70984 imul    di ;~ 2102:009E
cs=0x2102;eip=0x0000a0; 	X(IDIV2(*(dw*)(raddr(ds,si))));	// 70985 idiv    word ptr [si] ;~ 2102:00A0
cs=0x2102;eip=0x0000a2; 	R(CALL(sub_2f713,0));	// 70986 call    sub_2F713 ;~ 2102:00A2
cs=0x2102;eip=0x0000a5; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 70987 mov     di, [bp+arg_0] ;~ 2102:00A5
cs=0x2102;eip=0x0000a8; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 70988 mov     [di], ax ;~ 2102:00A8
cs=0x2102;eip=0x0000aa; 	T(SUB(bx, *(dw*)(raddr(ds,si+2))));	// 70989 sub     bx, [si+2] ;~ 2102:00AA
cs=0x2102;eip=0x0000ad; 	T(MOV(ax, 0x80));	// 70990 mov     ax, 80h ; '€' ;~ 2102:00AD
cs=0x2102;eip=0x0000b0; 	T(IMUL1_2(bx));	// 70991 imul    bx ;~ 2102:00B0
cs=0x2102;eip=0x0000b2; 	X(IDIV2(*(dw*)(raddr(ds,si+2))));	// 70992 idiv    word ptr [si+2] ;~ 2102:00B2
cs=0x2102;eip=0x0000b5; 	R(CALL(sub_2f713,0));	// 70993 call    sub_2F713 ;~ 2102:00B5
cs=0x2102;eip=0x0000b8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 70994 mov     bx, [bp+arg_2] ;~ 2102:00B8
cs=0x2102;eip=0x0000bb; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 70995 mov     [bx], ax ;~ 2102:00BB
cs=0x2102;eip=0x0000bd; 	X(POP(si));	// 70996 pop     si ;~ 2102:00BD
cs=0x2102;eip=0x0000be; 	X(POP(di));	// 70997 pop     di ;~ 2102:00BE
cs=0x2102;eip=0x0000bf; 	X(POP(bp));	// 70998 pop     bp ;~ 2102:00BF
cs=0x2102;eip=0x0000c0; 	R(RETF(0));	// 70999 retf ;~ 2102:00C0
sub_2f6c1:
	// 71006 
cs=0x2102;eip=0x0000c1; 	X(PUSH(cx));	// 71008 push    cx ;~ 2102:00C1
cs=0x2102;eip=0x0000c2; 	X(PUSH(dx));	// 71009 push    dx ;~ 2102:00C2
cs=0x2102;eip=0x0000c3; 	X(PUSH(bp));	// 71010 push    bp ;~ 2102:00C3
cs=0x2102;eip=0x0000c4; 	T(CLI);	// 71011 cli ;~ 2102:00C4
cs=0x2102;eip=0x0000c5; 	T(MOV(dx, 0x201));	// 71012 mov     dx, 201h ;~ 2102:00C5
cs=0x2102;eip=0x0000c8; 	R(OUT(dx, al));	// 71013 out     dx, al          ; Game I/O port ;~ 2102:00C8
cs=0x2102;eip=0x0000c9; 	T(SUB(cx, cx));	// 71016 sub     cx, cx ;~ 2102:00C9
cs=0x2102;eip=0x0000cb; 	T(MOV(ah, *(raddr(ds,si+6))));	// 71017 mov     ah, [si+6] ;~ 2102:00CB
cs=0x2102;eip=0x0000ce; 	R(CALL(sub_2f6f6,0));	// 71018 call    sub_2F6F6 ;~ 2102:00CE
cs=0x2102;eip=0x0000d1; 	T(TEST(*(raddr(ds,si+4)), al));	// 71019 test    [si+4], al ;~ 2102:00D1
cs=0x2102;eip=0x0000d4; 	R(JNZ(loc_2f6e3));	// 71020 jnz     short loc_2F6E3 ;~ 2102:00D4
cs=0x2102;eip=0x0000d6; 	T(MOV(bx, cx));	// 71021 mov     bx, cx ;~ 2102:00D6
cs=0x2102;eip=0x0000d8; 	T(MOV(ah, *(raddr(ds,si+4))));	// 71022 mov     ah, [si+4] ;~ 2102:00D8
cs=0x2102;eip=0x0000db; 	R(CALL(sub_2f6f6,0));	// 71023 call    sub_2F6F6 ;~ 2102:00DB
cs=0x2102;eip=0x0000de; 	T(MOV(di, cx));	// 71024 mov     di, cx ;~ 2102:00DE
cs=0x2102;eip=0x0000e0; 	R(JMP(loc_2f6ed));	// 71025 jmp     short loc_2F6ED ;~ 2102:00E0
loc_2f6e3:
	// 8958 
cs=0x2102;eip=0x0000e3; 	T(MOV(di, cx));	// 71031 mov     di, cx ;~ 2102:00E3
cs=0x2102;eip=0x0000e5; 	T(MOV(ah, *(raddr(ds,si+5))));	// 71032 mov     ah, [si+5] ;~ 2102:00E5
cs=0x2102;eip=0x0000e8; 	R(CALL(sub_2f6f6,0));	// 71033 call    sub_2F6F6 ;~ 2102:00E8
cs=0x2102;eip=0x0000eb; 	T(MOV(bx, cx));	// 71034 mov     bx, cx ;~ 2102:00EB
loc_2f6ed:
	// 8959 
cs=0x2102;eip=0x0000ed; 	T(STI);	// 71037 sti ;~ 2102:00ED
cs=0x2102;eip=0x0000ee; 	T(NEG(bx));	// 71038 neg     bx ;~ 2102:00EE
cs=0x2102;eip=0x0000f0; 	T(NEG(di));	// 71039 neg     di ;~ 2102:00F0
cs=0x2102;eip=0x0000f2; 	X(POP(bp));	// 71040 pop     bp ;~ 2102:00F2
cs=0x2102;eip=0x0000f3; 	X(POP(dx));	// 71041 pop     dx ;~ 2102:00F3
cs=0x2102;eip=0x0000f4; 	X(POP(cx));	// 71042 pop     cx ;~ 2102:00F4
cs=0x2102;eip=0x0000f5; 	R(RETN(0));	// 71043 retn ;~ 2102:00F5
sub_2f6f6:
	// 71050 
cs=0x2102;eip=0x0000f6; 	T(MOV(bp, bx));	// 71052 mov     bp, bx ;~ 2102:00F6
cs=0x2102;eip=0x0000f8; 	R(IN(al, dx));	// 71053 in      al, dx ;~ 2102:00F8
cs=0x2102;eip=0x0000f9; 	T(MOV(bl, al));	// 71054 mov     bl, al ;~ 2102:00F9
cs=0x2102;eip=0x0000fb; 	T(NOT(al));	// 71055 not     al ;~ 2102:00FB
cs=0x2102;eip=0x0000fd; 	T(AND(al, ah));	// 71056 and     al, ah ;~ 2102:00FD
cs=0x2102;eip=0x0000ff; 	R(JNZ(loc_2f710));	// 71057 jnz     short loc_2F710 ;~ 2102:00FF
loc_2f701:
	// 8960 
cs=0x2102;eip=0x000101; 	R(IN(al, dx));	// 71061 in      al, dx ;~ 2102:0101
cs=0x2102;eip=0x000102; 	T(CMP(al, bl));	// 71062 cmp     al, bl ;~ 2102:0102
cs=0x2102;eip=0x000104; 	R(LOOPE(loc_2f701));	// 71063 loope   loc_2F701 ;~ 2102:0104
cs=0x2102;eip=0x000106; 	R(JCXZ(loc_2f710));	// 71064 jcxz    short loc_2F710 ;~ 2102:0106
cs=0x2102;eip=0x000108; 	T(MOV(bl, al));	// 71065 mov     bl, al ;~ 2102:0108
cs=0x2102;eip=0x00010a; 	T(NOT(al));	// 71066 not     al ;~ 2102:010A
cs=0x2102;eip=0x00010c; 	T(AND(al, ah));	// 71067 and     al, ah ;~ 2102:010C
cs=0x2102;eip=0x00010e; 	R(LOOPE(loc_2f701));	// 71068 loope   loc_2F701 ;~ 2102:010E
loc_2f710:
	// 8961 
cs=0x2102;eip=0x000110; 	T(MOV(bx, bp));	// 71072 mov     bx, bp ;~ 2102:0110
cs=0x2102;eip=0x000112; 	R(RETN(0));	// 71073 retn ;~ 2102:0112
sub_2f713:
	// 71080 
cs=0x2102;eip=0x000113; 	T(TEST(ax, ax));	// 71082 test    ax, ax ;~ 2102:0113
cs=0x2102;eip=0x000115; 	R(JZ(loc_2f725));	// 71083 jz      short loc_2F725 ;~ 2102:0115
cs=0x2102;eip=0x000117; 	R(JS(loc_2f71f));	// 71084 js      short loc_2F71F ;~ 2102:0117
cs=0x2102;eip=0x000119; 	T(SUB(ax, 5));	// 71085 sub     ax, 5 ;~ 2102:0119
cs=0x2102;eip=0x00011c; 	R(JS(loc_2f725));	// 71086 js      short loc_2F725 ;~ 2102:011C
cs=0x2102;eip=0x00011e; 	R(RETN(0));	// 71087 retn ;~ 2102:011E
loc_2f71f:
	// 8962 
cs=0x2102;eip=0x00011f; 	T(ADD(ax, 5));	// 71091 add     ax, 5 ;~ 2102:011F
cs=0x2102;eip=0x000122; 	R(JNS(loc_2f725));	// 71092 jns     short loc_2F725 ;~ 2102:0122
cs=0x2102;eip=0x000124; 	R(RETN(0));	// 71093 retn ;~ 2102:0124
loc_2f725:
	// 8963 
cs=0x2102;eip=0x000125; 	T(SUB(ax, ax));	// 71098 sub     ax, ax ;~ 2102:0125
cs=0x2102;eip=0x000127; 	R(RETN(0));	// 71099 retn ;~ 2102:0127
sub_2f728:
	// 71107 
#undef arg_0
#define arg_0 6
	// 71109 arg_0           = word ptr  6 ;~ 2102:0128
cs=0x2102;eip=0x000128; 	X(PUSH(bp));	// 71111 push    bp ;~ 2102:0128
cs=0x2102;eip=0x000129; 	T(MOV(bp, sp));	// 71112 mov     bp, sp ;~ 2102:0129
cs=0x2102;eip=0x00012b; 	T(MOV(bx, 0x7D0));	// 71113 mov     bx, 7D0h ;~ 2102:012B
cs=0x2102;eip=0x00012e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 71114 mov     ax, [bp+arg_0] ;~ 2102:012E
cs=0x2102;eip=0x000131; 	T(XOR(ax, *(dw*)((&unk_48192))));	// 71115 xor     ax, word ptr unk_48192 ;~ 2102:0131
cs=0x2102;eip=0x000135; 	T(CMP(ax, 1));	// 71116 cmp     ax, 1 ;~ 2102:0135
cs=0x2102;eip=0x000138; 	R(JNZ(loc_2f73d));	// 71117 jnz     short loc_2F73D ;~ 2102:0138
cs=0x2102;eip=0x00013a; 	T(MOV(bx, 0x7D8));	// 71118 mov     bx, 7D8h ;~ 2102:013A
loc_2f73d:
	// 8964 
cs=0x2102;eip=0x00013d; 	T(MOV(dx, 0x201));	// 71121 mov     dx, 201h ;~ 2102:013D
cs=0x2102;eip=0x000140; 	R(IN(al, dx));	// 71122 in      al, dx          ; Game I/O port ;~ 2102:0140
cs=0x2102;eip=0x000141; 	T(XOR(al, 0x0FF));	// 71125 xor     al, 0FFh ;~ 2102:0141
cs=0x2102;eip=0x000143; 	T(MOV(cl, *(raddr(ds,bx+7))));	// 71126 mov     cl, [bx+7] ;~ 2102:0143
cs=0x2102;eip=0x000146; 	T(ROR(ax, cl));	// 71127 ror     ax, cl ;~ 2102:0146
cs=0x2102;eip=0x000148; 	T(AND(ax, 3));	// 71128 and     ax, 3 ;~ 2102:0148
cs=0x2102;eip=0x00014b; 	X(POP(bp));	// 71129 pop     bp ;~ 2102:014B
cs=0x2102;eip=0x00014c; 	R(RETF(0));	// 71130 retf ;~ 2102:014C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_2f64b: 	goto loc_2f64b;
        case m2c::kloc_2f64e: 	goto loc_2f64e;
        case m2c::kloc_2f678: 	goto loc_2f678;
        case m2c::kloc_2f696: 	goto loc_2f696;
        case m2c::kloc_2f6e3: 	goto loc_2f6e3;
        case m2c::kloc_2f6ed: 	goto loc_2f6ed;
        case m2c::kloc_2f701: 	goto loc_2f701;
        case m2c::kloc_2f710: 	goto loc_2f710;
        case m2c::kloc_2f71f: 	goto loc_2f71f;
        case m2c::kloc_2f725: 	goto loc_2f725;
        case m2c::kloc_2f73d: 	goto loc_2f73d;
        case m2c::ksub_2f60c: 	goto sub_2f60c;
        case m2c::ksub_2f67f: 	goto sub_2f67f;
        case m2c::ksub_2f6c1: 	goto sub_2f6c1;
        case m2c::ksub_2f6f6: 	goto sub_2f6f6;
        case m2c::ksub_2f713: 	goto sub_2f713;
        case m2c::ksub_2f728: 	goto sub_2f728;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, _source);m2c::stackDump(_state); abort();
    };
}

