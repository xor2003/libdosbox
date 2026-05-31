/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool sub_271ba(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_271ba:
    _begin:
#undef arg_0
#define arg_0 6
	// 43947 arg_0           = word ptr  6 ;~ 18BD:000A
ret_18bd_a:
	// 7592 
cs=0x18bd;eip=0x00000a; 	X(PUSH(bp));	// 43949 push    bp ;~ 18BD:000A
cs=0x18bd;eip=0x00000b; 	T(MOV(bp, sp));	// 43950 mov     bp, sp ;~ 18BD:000B
cs=0x18bd;eip=0x00000d; 	T(XOR(ax, ax));	// 43951 xor     ax, ax ;~ 18BD:000D
cs=0x18bd;eip=0x00000f; 	T(MOV(es, ax));	// 43952 mov     es, ax ;~ 18BD:000F
cs=0x18bd;eip=0x000011; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 43954 mov     ax, [bp+arg_0] ;~ 18BD:0011
cs=0x18bd;eip=0x000014; 	T(AND(ax, 0x0F));	// 43955 and     ax, 0Fh ;~ 18BD:0014
cs=0x18bd;eip=0x000017; 	T(CMP(byte_37b8a, al));	// 43956 cmp     byte_37B8A, al ;~ 18BD:0017
cs=0x18bd;eip=0x00001b; 	R(JZ(loc_271d8));	// 43957 jz      short loc_271D8 ;~ 18BD:001B
cs=0x18bd;eip=0x00001d; 	T(bx = offset(dseg,word_2bf44));	// 43958 lea     bx, word_2BF44 ;~ 18BD:001D
cs=0x18bd;eip=0x000021; 	T(ADD(bx, word_37b84));	// 43959 add     bx, word_37B84 ;~ 18BD:0021
cs=0x18bd;eip=0x000025; __disp=*(dw*)(raddr(cs,bx));
	R(JMP(__dispatch_call));	// 43960 jmp     word ptr cs:[bx] ;~ 18BD:0025
loc_271d8:
	// 7593 
cs=0x18bd;eip=0x000028; 	R(JMP(loc_272b0));	// 43964 jmp     loc_272B0 ;~ 18BD:0028
loc_271db:
	// 7594 
cs=0x18bd;eip=0x00002b; 	X(MOV(byte_37b8a, al));	// 43968 mov     byte_37B8A, al ;~ 18BD:002B
cs=0x18bd;eip=0x00002e; 	T(MOV(ah, 5));	// 43969 mov     ah, 5 ;~ 18BD:002E
cs=0x18bd;eip=0x000030; 	X(PUSH(di));	// 43970 push    di ;~ 18BD:0030
cs=0x18bd;eip=0x000031; 	X(PUSH(si));	// 43971 push    si ;~ 18BD:0031
cs=0x18bd;eip=0x000032; 	R(_INT(0x10));	// 43972 int     10h             ; - VIDEO - SELECT DISPLAY PAGE ;~ 18BD:0032
cs=0x18bd;eip=0x000034; 	X(POP(si));	// 43974 pop     si ;~ 18BD:0034
cs=0x18bd;eip=0x000035; 	X(POP(di));	// 43975 pop     di ;~ 18BD:0035
cs=0x18bd;eip=0x000036; 	R(JMP(loc_272b0));	// 43976 jmp     loc_272B0 ;~ 18BD:0036
loc_271e9:
	// 7595 
cs=0x18bd;eip=0x000039; 	T(AND(al, 1));	// 43980 and     al, 1 ;~ 18BD:0039
cs=0x18bd;eip=0x00003b; 	X(MOV(*(raddr(es,0x462)), al));	// 43981 mov     es:462h, al ;~ 18BD:003B
cs=0x18bd;eip=0x00003f; 	X(MOV(byte_37b8a, al));	// 43982 mov     byte_37B8A, al ;~ 18BD:003F
cs=0x18bd;eip=0x000042; 	T(MOV(cx, word_37fec));	// 43983 mov     cx, word_37FEC ;~ 18BD:0042
cs=0x18bd;eip=0x000046; 	T(MUL1_2(cx));	// 43984 mul     cx ;~ 18BD:0046
cs=0x18bd;eip=0x000048; 	X(MOV(*(dw*)(raddr(es,0x44E)), ax));	// 43985 mov     es:44Eh, ax ;~ 18BD:0048
cs=0x18bd;eip=0x00004c; 	T(MOV(cx, ax));	// 43986 mov     cx, ax ;~ 18BD:004C
cs=0x18bd;eip=0x00004e; 	T(MOV(dx, 0x3B8));	// 43987 mov     dx, 3B8h ;~ 18BD:004E
cs=0x18bd;eip=0x000051; 	T(MOV(al, byte_37b8a));	// 43988 mov     al, byte_37B8A ;~ 18BD:0051
cs=0x18bd;eip=0x000054; 	T(AND(al, 1));	// 43989 and     al, 1 ;~ 18BD:0054
cs=0x18bd;eip=0x000056; 	T(ROR(al, 1));	// 43990 ror     al, 1 ;~ 18BD:0056
cs=0x18bd;eip=0x000058; 	T(OR(al, 0x0A));	// 43991 or      al, 0Ah ;~ 18BD:0058
cs=0x18bd;eip=0x00005a; 	R(OUT(dx, al));	// 43992 out     dx, al ;~ 18BD:005A
cs=0x18bd;eip=0x00005b; 	T(SHR(cx, 1));	// 43993 shr     cx, 1 ;~ 18BD:005B
cs=0x18bd;eip=0x00005d; 	T(SHR(cx, 1));	// 43994 shr     cx, 1 ;~ 18BD:005D
cs=0x18bd;eip=0x00005f; 	T(SHR(cx, 1));	// 43995 shr     cx, 1 ;~ 18BD:005F
cs=0x18bd;eip=0x000061; 	T(SHR(cx, 1));	// 43996 shr     cx, 1 ;~ 18BD:0061
cs=0x18bd;eip=0x000063; 	T(ADD(cx, word_38070));	// 43997 add     cx, word_38070 ;~ 18BD:0063
cs=0x18bd;eip=0x000067; 	X(MOV(word_37bca, cx));	// 43998 mov     word_37BCA, cx ;~ 18BD:0067
cs=0x18bd;eip=0x00006b; 	R(JMP(loc_272b0));	// 43999 jmp     loc_272B0 ;~ 18BD:006B
loc_2721e:
	// 7596 
cs=0x18bd;eip=0x00006e; 	X(PUSH(ds));	// 44003 push    ds ;~ 18BD:006E
cs=0x18bd;eip=0x00006f; 	X(PUSH(si));	// 44004 push    si ;~ 18BD:006F
cs=0x18bd;eip=0x000070; 	X(PUSH(di));	// 44005 push    di ;~ 18BD:0070
cs=0x18bd;eip=0x000071; 	T(MOV(cl, byte_37b8a));	// 44006 mov     cl, byte_37B8A ;~ 18BD:0071
cs=0x18bd;eip=0x000075; 	T(XOR(ch, ch));	// 44007 xor     ch, ch ;~ 18BD:0075
cs=0x18bd;eip=0x000077; 	X(MOV(byte_37b8a, al));	// 44008 mov     byte_37B8A, al ;~ 18BD:0077
cs=0x18bd;eip=0x00007a; 	T(bx = offset(dseg,unk_37bcc));	// 44009 lea     bx, unk_37BCC ;~ 18BD:007A
cs=0x18bd;eip=0x00007e; 	T(MOV(di, ax));	// 44010 mov     di, ax ;~ 18BD:007E
cs=0x18bd;eip=0x000080; 	T(SHL(di, 1));	// 44011 shl     di, 1 ;~ 18BD:0080
cs=0x18bd;eip=0x000082; 	T(ADD(di, bx));	// 44012 add     di, bx ;~ 18BD:0082
cs=0x18bd;eip=0x000084; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 44013 mov     ax, [di] ;~ 18BD:0084
cs=0x18bd;eip=0x000086; 	T(MOV(si, cx));	// 44014 mov     si, cx ;~ 18BD:0086
cs=0x18bd;eip=0x000088; 	T(SHL(si, 1));	// 44015 shl     si, 1 ;~ 18BD:0088
cs=0x18bd;eip=0x00008a; 	T(ADD(si, bx));	// 44016 add     si, bx ;~ 18BD:008A
cs=0x18bd;eip=0x00008c; 	T(MOV(cx, *(dw*)(raddr(ds,si))));	// 44017 mov     cx, [si] ;~ 18BD:008C
cs=0x18bd;eip=0x00008e; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 44018 mov     [si], ax ;~ 18BD:008E
cs=0x18bd;eip=0x000090; 	X(MOV(*(dw*)(raddr(ds,di)), cx));	// 44019 mov     [di], cx ;~ 18BD:0090
cs=0x18bd;eip=0x000092; 	T(MOV(dl, byte_37b80));	// 44020 mov     dl, byte_37B80 ;~ 18BD:0092
cs=0x18bd;eip=0x000096; 	T(XOR(dh, dh));	// 44021 xor     dh, dh ;~ 18BD:0096
cs=0x18bd;eip=0x000098; 	T(MOV(si, dx));	// 44022 mov     si, dx ;~ 18BD:0098
cs=0x18bd;eip=0x00009a; 	T(SHL(si, 1));	// 44023 shl     si, 1 ;~ 18BD:009A
cs=0x18bd;eip=0x00009c; 	T(ADD(si, bx));	// 44024 add     si, bx ;~ 18BD:009C
cs=0x18bd;eip=0x00009e; 	T(MOV(dx, *(dw*)(raddr(ds,si))));	// 44025 mov     dx, [si] ;~ 18BD:009E
cs=0x18bd;eip=0x0000a0; 	X(MOV(word_37bc8, dx));	// 44026 mov     word_37BC8, dx ;~ 18BD:00A0
cs=0x18bd;eip=0x0000a4; 	T(MOV(es, cx));	// 44027 mov     es, cx ;~ 18BD:00A4
cs=0x18bd;eip=0x0000a6; 	T(MOV(cx, word_37fec));	// 44029 mov     cx, word_37FEC ;~ 18BD:00A6
cs=0x18bd;eip=0x0000aa; 	T(SHR(cx, 1));	// 44030 shr     cx, 1 ;~ 18BD:00AA
cs=0x18bd;eip=0x0000ac; 	T(MOV(ds, ax));	// 44031 mov     ds, ax ;~ 18BD:00AC
cs=0x18bd;eip=0x0000ae; 	T(XOR(di, di));	// 44032 xor     di, di ;~ 18BD:00AE
cs=0x18bd;eip=0x0000b0; 	T(XOR(si, si));	// 44033 xor     si, si ;~ 18BD:00B0
cs=0x18bd;eip=0x0000b2; 	T(CLD);	// 44034 cld ;~ 18BD:00B2
loc_27263:
	// 7597 
cs=0x18bd;eip=0x0000b3; 	T(MOV(ax, *(dw*)(raddr(es,di))));	// 44037 mov     ax, es:[di] ;~ 18BD:00B3
cs=0x18bd;eip=0x0000b6; 	X(MOVSW);	// 44038 movsw ;~ 18BD:00B6
cs=0x18bd;eip=0x0000b7; 	X(MOV(*(dw*)(raddr(ds,di-2)), ax));	// 44039 mov     [di-2], ax ;~ 18BD:00B7
cs=0x18bd;eip=0x0000ba; 	R(LOOP(loc_27263));	// 44040 loop    loc_27263 ;~ 18BD:00BA
cs=0x18bd;eip=0x0000bc; 	X(POP(di));	// 44041 pop     di ;~ 18BD:00BC
cs=0x18bd;eip=0x0000bd; 	X(POP(si));	// 44042 pop     si ;~ 18BD:00BD
cs=0x18bd;eip=0x0000be; 	X(POP(ds));	// 44043 pop     ds ;~ 18BD:00BE
cs=0x18bd;eip=0x0000bf; 	R(JMP(loc_272b0));	// 44044 jmp     short loc_272B0 ;~ 18BD:00BF
loc_27271:
	// 7598 
cs=0x18bd;eip=0x0000c1; 	X(MOV(*(raddr(es,0x462)), al));	// 44048 mov     es:462h, al ;~ 18BD:00C1
cs=0x18bd;eip=0x0000c5; 	X(MOV(byte_37b8a, al));	// 44049 mov     byte_37B8A, al ;~ 18BD:00C5
cs=0x18bd;eip=0x0000c8; 	T(MOV(cx, word_37fec));	// 44050 mov     cx, word_37FEC ;~ 18BD:00C8
cs=0x18bd;eip=0x0000cc; 	T(MUL1_2(cx));	// 44051 mul     cx ;~ 18BD:00CC
cs=0x18bd;eip=0x0000ce; 	X(MOV(*(dw*)(raddr(es,0x44E)), ax));	// 44052 mov     es:44Eh, ax ;~ 18BD:00CE
cs=0x18bd;eip=0x0000d2; 	T(MOV(cx, ax));	// 44053 mov     cx, ax ;~ 18BD:00D2
cs=0x18bd;eip=0x0000d4; 	T(MOV(dx, 0x3DA));	// 44054 mov     dx, 3DAh ;~ 18BD:00D4
loc_27287:
	// 7599 
cs=0x18bd;eip=0x0000d7; 	R(IN(al, dx));	// 44057 in      al, dx          ; Video status bits: ;~ 18BD:00D7
cs=0x18bd;eip=0x0000d8; 	T(TEST(al, 8));	// 44062 test    al, 8 ;~ 18BD:00D8
cs=0x18bd;eip=0x0000da; 	R(JZ(loc_27287));	// 44063 jz      short loc_27287 ;~ 18BD:00DA
loc_2728c:
	// 7600 
cs=0x18bd;eip=0x0000dc; 	R(IN(al, dx));	// 44066 in      al, dx          ; Video status bits: ;~ 18BD:00DC
cs=0x18bd;eip=0x0000dd; 	T(TEST(al, 8));	// 44071 test    al, 8 ;~ 18BD:00DD
cs=0x18bd;eip=0x0000df; 	R(JNZ(loc_2728c));	// 44072 jnz     short loc_2728C ;~ 18BD:00DF
cs=0x18bd;eip=0x0000e1; 	T(CLI);	// 44073 cli ;~ 18BD:00E1
cs=0x18bd;eip=0x0000e2; 	T(SUB(dl, 6));	// 44074 sub     dl, 6 ;~ 18BD:00E2
cs=0x18bd;eip=0x0000e5; 	T(MOV(ah, ch));	// 44075 mov     ah, ch ;~ 18BD:00E5
cs=0x18bd;eip=0x0000e7; 	T(MOV(al, 0x0C));	// 44076 mov     al, 0Ch ;~ 18BD:00E7
cs=0x18bd;eip=0x0000e9; 	R(OUT(dx, ax));	// 44077 out     dx, ax          ; Video: CRT cntrlr addr ;~ 18BD:00E9
cs=0x18bd;eip=0x0000ea; 	T(MOV(ah, cl));	// 44079 mov     ah, cl ;~ 18BD:00EA
cs=0x18bd;eip=0x0000ec; 	T(INC(al));	// 44080 inc     al ;~ 18BD:00EC
cs=0x18bd;eip=0x0000ee; 	R(OUT(dx, ax));	// 44081 out     dx, ax          ; Video: CRT cntrlr addr ;~ 18BD:00EE
cs=0x18bd;eip=0x0000ef; 	T(STI);	// 44083 sti ;~ 18BD:00EF
cs=0x18bd;eip=0x0000f0; 	T(SHR(cx, 1));	// 44084 shr     cx, 1 ;~ 18BD:00F0
cs=0x18bd;eip=0x0000f2; 	T(SHR(cx, 1));	// 44085 shr     cx, 1 ;~ 18BD:00F2
cs=0x18bd;eip=0x0000f4; 	T(SHR(cx, 1));	// 44086 shr     cx, 1 ;~ 18BD:00F4
cs=0x18bd;eip=0x0000f6; 	T(SHR(cx, 1));	// 44087 shr     cx, 1 ;~ 18BD:00F6
cs=0x18bd;eip=0x0000f8; 	T(ADD(cx, word_38070));	// 44088 add     cx, word_38070 ;~ 18BD:00F8
cs=0x18bd;eip=0x0000fc; 	X(MOV(word_37bca, cx));	// 44089 mov     word_37BCA, cx ;~ 18BD:00FC
loc_272b0:
	// 7601 
cs=0x18bd;eip=0x000100; 	T(XOR(ax, ax));	// 44093 xor     ax, ax ;~ 18BD:0100
cs=0x18bd;eip=0x000102; 	X(POP(bp));	// 44094 pop     bp ;~ 18BD:0102
cs=0x18bd;eip=0x000103; 	R(RETF(0));	// 44095 retf ;~ 18BD:0103

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_271d8: 	goto loc_271d8;
        case m2c::kloc_271db: 	goto loc_271db;
        case m2c::kloc_271e9: 	goto loc_271e9;
        case m2c::kloc_2721e: 	goto loc_2721e;
        case m2c::kloc_27263: 	goto loc_27263;
        case m2c::kloc_27271: 	goto loc_27271;
        case m2c::kloc_27287: 	goto loc_27287;
        case m2c::kloc_2728c: 	goto loc_2728c;
        case m2c::kloc_272b0: 	goto loc_272b0;
        case m2c::ksub_271ba: 	goto sub_271ba;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

