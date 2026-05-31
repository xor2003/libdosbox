/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool _group7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group7:
    _begin:
seg007_proc:
	// 42947 
cs=0x1871;eip=0x000004; 	X(POP(bp));	// 42947 pop     bp ;~ 1871:0004
ret_1871_5:
	// 7527 
cs=0x1871;eip=0x000005; 	R(RETN(0));	// 42948 retn ;~ 1871:0005
sub_26cf6:
	// 42953 
cs=0x1871;eip=0x000006; 	T(XOR(ax, ax));	// 42954 xor     ax, ax ;~ 1871:0006
ret_1871_8:
	// 7528 
cs=0x1871;eip=0x000008; 	T(MOV(es, ax));	// 42955 mov     es, ax ;~ 1871:0008
cs=0x1871;eip=0x00000a; 	X(PUSH(di));	// 42957 push    di ;~ 1871:000A
cs=0x1871;eip=0x00000b; 	X(PUSH(si));	// 42958 push    si ;~ 1871:000B
cs=0x1871;eip=0x00000c; 	T(MOV(ah, 0x1A));	// 42959 mov     ah, 1Ah ;~ 1871:000C
cs=0x1871;eip=0x00000e; 	T(XOR(al, al));	// 42960 xor     al, al ;~ 1871:000E
cs=0x1871;eip=0x000010; 	R(_INT(0x10));	// 42961 int     10h             ; - VIDEO - DISPLAY COMBINATION (PS,VGA/MCGA): read display combination code ;~ 1871:0010
cs=0x1871;eip=0x000012; 	X(POP(si));	// 42962 pop     si ;~ 1871:0012
cs=0x1871;eip=0x000013; 	X(POP(di));	// 42963 pop     di ;~ 1871:0013
cs=0x1871;eip=0x000014; 	T(CMP(al, 0x1A));	// 42964 cmp     al, 1Ah ;~ 1871:0014
cs=0x1871;eip=0x000016; 	R(JNZ(loc_26d28));	// 42965 jnz     short loc_26D28 ;~ 1871:0016
cs=0x1871;eip=0x000018; 	T(CMP(bl, 0x0C));	// 42966 cmp     bl, 0Ch ;~ 1871:0018
cs=0x1871;eip=0x00001b; 	R(JZ(loc_26d24));	// 42967 jz      short loc_26D24 ;~ 1871:001B
cs=0x1871;eip=0x00001d; 	T(CMP(bl, 8));	// 42968 cmp     bl, 8 ;~ 1871:001D
cs=0x1871;eip=0x000020; 	R(JZ(loc_26d20));	// 42969 jz      short loc_26D20 ;~ 1871:0020
cs=0x1871;eip=0x000022; 	T(CMP(bl, 0x0B));	// 42970 cmp     bl, 0Bh ;~ 1871:0022
cs=0x1871;eip=0x000025; 	R(JZ(loc_26d1c));	// 42971 jz      short loc_26D1C ;~ 1871:0025
cs=0x1871;eip=0x000027; 	T(CMP(bl, 7));	// 42972 cmp     bl, 7 ;~ 1871:0027
cs=0x1871;eip=0x00002a; 	R(JNZ(loc_26d28));	// 42973 jnz     short loc_26D28 ;~ 1871:002A
loc_26d1c:
	// 7529 
cs=0x1871;eip=0x00002c; 	T(MOV(ax, 0x11));	// 42976 mov     ax, 11h ;~ 1871:002C
cs=0x1871;eip=0x00002f; 	R(RETF(0));	// 42977 retf ;~ 1871:002F
loc_26d20:
	// 7530 
cs=0x1871;eip=0x000030; 	T(MOV(ax, 0x12));	// 42981 mov     ax, 12h ;~ 1871:0030
cs=0x1871;eip=0x000033; 	R(RETF(0));	// 42982 retf ;~ 1871:0033
loc_26d24:
	// 7531 
cs=0x1871;eip=0x000034; 	T(MOV(ax, 0x13));	// 42986 mov     ax, 13h ;~ 1871:0034
cs=0x1871;eip=0x000037; 	R(RETF(0));	// 42987 retf ;~ 1871:0037
loc_26d28:
	// 7532 
cs=0x1871;eip=0x000038; 	X(PUSH(di));	// 42992 push    di ;~ 1871:0038
cs=0x1871;eip=0x000039; 	X(PUSH(si));	// 42993 push    si ;~ 1871:0039
cs=0x1871;eip=0x00003a; 	T(MOV(ah, 0x12));	// 42994 mov     ah, 12h ;~ 1871:003A
cs=0x1871;eip=0x00003c; 	T(MOV(bl, 0x10));	// 42995 mov     bl, 10h ;~ 1871:003C
cs=0x1871;eip=0x00003e; 	R(_INT(0x10));	// 42996 int     10h             ; - VIDEO - ALTERNATE FUNCTION SELECT (PS, EGA, VGA, MCGA) - GET EGA INFO ;~ 1871:003E
cs=0x1871;eip=0x000040; 	X(POP(si));	// 42998 pop     si ;~ 1871:0040
cs=0x1871;eip=0x000041; 	X(POP(di));	// 42999 pop     di ;~ 1871:0041
cs=0x1871;eip=0x000042; 	T(CMP(bl, 0x10));	// 43000 cmp     bl, 10h ;~ 1871:0042
cs=0x1871;eip=0x000045; 	R(JZ(loc_26d57));	// 43001 jz      short loc_26D57 ;~ 1871:0045
cs=0x1871;eip=0x000047; 	T(MOV(al, *(raddr(es,0x487))));	// 43002 mov     al, es:487h ;~ 1871:0047
cs=0x1871;eip=0x00004b; 	T(TEST(al, 8));	// 43003 test    al, 8 ;~ 1871:004B
cs=0x1871;eip=0x00004d; 	R(JNZ(loc_26d57));	// 43004 jnz     short loc_26D57 ;~ 1871:004D
cs=0x1871;eip=0x00004f; 	T(TEST(al, 2));	// 43005 test    al, 2 ;~ 1871:004F
cs=0x1871;eip=0x000051; 	R(JNZ(loc_26d4f));	// 43006 jnz     short loc_26D4F ;~ 1871:0051
cs=0x1871;eip=0x000053; 	T(AND(cl, 0x0F));	// 43007 and     cl, 0Fh ;~ 1871:0053
cs=0x1871;eip=0x000056; 	T(CMP(cl, 9));	// 43008 cmp     cl, 9 ;~ 1871:0056
cs=0x1871;eip=0x000059; 	R(JZ(loc_26d53));	// 43009 jz      short loc_26D53 ;~ 1871:0059
cs=0x1871;eip=0x00005b; 	T(MOV(ax, 0x0D));	// 43010 mov     ax, 0Dh ;~ 1871:005B
cs=0x1871;eip=0x00005e; 	R(RETF(0));	// 43011 retf ;~ 1871:005E
loc_26d4f:
	// 7533 
cs=0x1871;eip=0x00005f; 	T(MOV(ax, 0x0F));	// 43015 mov     ax, 0Fh ;~ 1871:005F
cs=0x1871;eip=0x000062; 	R(RETF(0));	// 43016 retf ;~ 1871:0062
loc_26d53:
	// 7534 
cs=0x1871;eip=0x000063; 	T(MOV(ax, 0x10));	// 43020 mov     ax, 10h ;~ 1871:0063
cs=0x1871;eip=0x000066; 	R(RETF(0));	// 43021 retf ;~ 1871:0066
loc_26d57:
	// 7535 
cs=0x1871;eip=0x000067; 	T(MOV(al, *(raddr(es,0x410))));	// 43026 mov     al, es:410h ;~ 1871:0067
cs=0x1871;eip=0x00006b; 	T(AND(al, 0x30));	// 43027 and     al, 30h ;~ 1871:006B
cs=0x1871;eip=0x00006d; 	T(CMP(al, 0x30));	// 43028 cmp     al, 30h ; '0' ;~ 1871:006D
cs=0x1871;eip=0x00006f; 	R(JZ(loc_26d76));	// 43029 jz      short loc_26D76 ;~ 1871:006F
cs=0x1871;eip=0x000071; 	T(MOV(ax, 0x0FC00));	// 43030 mov     ax, 0FC00h ;~ 1871:0071
cs=0x1871;eip=0x000074; 	T(MOV(es, ax));	// 43031 mov     es, ax ;~ 1871:0074
cs=0x1871;eip=0x000076; 	T(MOV(al, *(raddr(es,0))));	// 43033 mov     al, es:0 ;~ 1871:0076
cs=0x1871;eip=0x00007a; 	T(CMP(al, 0x21));	// 43034 cmp     al, 21h ; '!' ;~ 1871:007A
cs=0x1871;eip=0x00007c; 	R(JZ(loc_26d72));	// 43035 jz      short loc_26D72 ;~ 1871:007C
cs=0x1871;eip=0x00007e; 	T(MOV(ax, 4));	// 43036 mov     ax, 4 ;~ 1871:007E
cs=0x1871;eip=0x000081; 	R(RETF(0));	// 43037 retf ;~ 1871:0081
loc_26d72:
	// 7536 
cs=0x1871;eip=0x000082; 	T(MOV(ax, 9));	// 43041 mov     ax, 9 ;~ 1871:0082
cs=0x1871;eip=0x000085; 	R(RETF(0));	// 43042 retf ;~ 1871:0085
loc_26d76:
	// 7537 
cs=0x1871;eip=0x000086; 	T(MOV(dx, 0x3BA));	// 43046 mov     dx, 3BAh ;~ 1871:0086
cs=0x1871;eip=0x000089; 	R(IN(al, dx));	// 43047 in      al, dx          ; Video status bits: ;~ 1871:0089
cs=0x1871;eip=0x00008a; 	T(AND(al, 0x80));	// 43052 and     al, 80h ;~ 1871:008A
cs=0x1871;eip=0x00008c; 	T(MOV(ah, al));	// 43053 mov     ah, al ;~ 1871:008C
cs=0x1871;eip=0x00008e; 	T(MOV(cx, 0x8000));	// 43054 mov     cx, 8000h ;~ 1871:008E
loc_26d81:
	// 7538 
cs=0x1871;eip=0x000091; 	R(IN(al, dx));	// 43057 in      al, dx          ; Video status bits: ;~ 1871:0091
cs=0x1871;eip=0x000092; 	T(AND(al, 0x80));	// 43062 and     al, 80h ;~ 1871:0092
cs=0x1871;eip=0x000094; 	T(CMP(ah, al));	// 43063 cmp     ah, al ;~ 1871:0094
cs=0x1871;eip=0x000096; 	R(LOOPE(loc_26d81));	// 43064 loope   loc_26D81 ;~ 1871:0096
cs=0x1871;eip=0x000098; 	R(JNZ(loc_26d8e));	// 43065 jnz     short loc_26D8E ;~ 1871:0098
cs=0x1871;eip=0x00009a; 	T(MOV(ax, 7));	// 43066 mov     ax, 7 ;~ 1871:009A
cs=0x1871;eip=0x00009d; 	R(RETF(0));	// 43067 retf ;~ 1871:009D
loc_26d8e:
	// 7539 
cs=0x1871;eip=0x00009e; 	T(MOV(ax, 0x0B));	// 43071 mov     ax, 0Bh ;~ 1871:009E
cs=0x1871;eip=0x0000a1; 	R(RETF(0));	// 43072 retf ;~ 1871:00A1

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_26d1c: 	goto loc_26d1c;
        case m2c::kloc_26d20: 	goto loc_26d20;
        case m2c::kloc_26d24: 	goto loc_26d24;
        case m2c::kloc_26d28: 	goto loc_26d28;
        case m2c::kloc_26d4f: 	goto loc_26d4f;
        case m2c::kloc_26d53: 	goto loc_26d53;
        case m2c::kloc_26d57: 	goto loc_26d57;
        case m2c::kloc_26d72: 	goto loc_26d72;
        case m2c::kloc_26d76: 	goto loc_26d76;
        case m2c::kloc_26d81: 	goto loc_26d81;
        case m2c::kloc_26d8e: 	goto loc_26d8e;
        case m2c::kret_1871_5: 	goto ret_1871_5;
        case m2c::kret_1871_8: 	goto ret_1871_8;
        case m2c::kseg007_proc: 	goto seg007_proc;
        case m2c::ksub_26cf6: 	goto sub_26cf6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

