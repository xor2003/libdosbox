/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool _group25(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group25:
    _begin:
start:
	// 48900 
cs=0x1ae2;eip=0x000018; 	T(MOV(ah, 0x30));	// 48901 mov     ah, 30h ;~ 1AE2:0018
ret_1ae2_1a:
	// 7882 
cs=0x1ae2;eip=0x00001a; 	R(_INT(0x21));	// 48902 int     21h             ; DOS - GET DOS VERSION ;~ 1AE2:001A
cs=0x1ae2;eip=0x00001c; 	T(CMP(al, 2));	// 48904 cmp     al, 2 ;~ 1AE2:001C
cs=0x1ae2;eip=0x00001e; 	R(JNC(loc_29422));	// 48905 jnb     short loc_29422 ;~ 1AE2:001E
cs=0x1ae2;eip=0x000020; 	R(_INT(0x20));	// 48906 int     20h             ; DOS - PROGRAM TERMINATION ;~ 1AE2:0020
loc_29422:
	// 7883 
cs=0x1ae2;eip=0x000022; 	T(MOV(di, seg_offset(dseg)));	// 48911 mov     di, seg dseg ;~ 1AE2:0022
cs=0x1ae2;eip=0x000025; 	T(MOV(si, *(dw*)(raddr(ds,2))));	// 48912 mov     si, ds:2 ;~ 1AE2:0025
cs=0x1ae2;eip=0x000029; 	T(SUB(si, di));	// 48913 sub     si, di ;~ 1AE2:0029
cs=0x1ae2;eip=0x00002b; 	T(CMP(si, 0x1000));	// 48914 cmp     si, 1000h ;~ 1AE2:002B
cs=0x1ae2;eip=0x00002f; 	R(JC(loc_29434));	// 48915 jb      short loc_29434 ;~ 1AE2:002F
cs=0x1ae2;eip=0x000031; 	T(MOV(si, 0x1000));	// 48916 mov     si, 1000h ;~ 1AE2:0031
loc_29434:
	// 7884 
cs=0x1ae2;eip=0x000034; 	T(CLI);	// 48919 cli ;~ 1AE2:0034
cs=0x1ae2;eip=0x000035; 	R(MOV(ss, di));	// 48920 mov     ss, di ;~ 1AE2:0035
cs=0x1ae2;eip=0x000037; 	T(ADD(sp, 0x0EA9E));	// 48922 add     sp, 0EA9Eh ;~ 1AE2:0037
cs=0x1ae2;eip=0x00003b; 	T(STI);	// 48923 sti ;~ 1AE2:003B
cs=0x1ae2;eip=0x00003c; 	R(JNC(loc_29452));	// 48924 jnb     short loc_29452 ;~ 1AE2:003C
cs=0x1ae2;eip=0x00003e; 	X(PUSH(ss));	// 48925 push    ss ;~ 1AE2:003E
cs=0x1ae2;eip=0x00003f; 	X(POP(ds));	// 48926 pop     ds ;~ 1AE2:003F
cs=0x1ae2;eip=0x000040; 	R(CALLF(sub_29ee2,0));	// 48928 call    sub_29EE2 ;~ 1AE2:0040
cs=0x1ae2;eip=0x000045; 	T(XOR(ax, ax));	// 48929 xor     ax, ax ;~ 1AE2:0045
cs=0x1ae2;eip=0x000047; 	X(PUSH(ax));	// 48930 push    ax ;~ 1AE2:0047
cs=0x1ae2;eip=0x000048; 	R(CALLF(sub_29f5d,0));	// 48931 call    sub_29F5D ;~ 1AE2:0048
cs=0x1ae2;eip=0x00004d; 	T(MOV(ax, 0x4CFF));	// 48932 mov     ax, 4CFFh ;~ 1AE2:004D
cs=0x1ae2;eip=0x000050; 	R(_INT(0x21));	// 48933 int     21h             ; DOS - 2+ - QUIT WITH EXIT CODE (EXIT) ;~ 1AE2:0050
loc_29452:
	// 7885 
cs=0x1ae2;eip=0x000052; 	T(AND(sp, 0x0FFFE));	// 48938 and     sp, 0FFFEh ;~ 1AE2:0052
cs=0x1ae2;eip=0x000055; 	X(MOV(*(dw*)(((db*)&word_3821e)), sp));	// 48939 mov     ss:word_3821E, sp ;~ 1AE2:0055
cs=0x1ae2;eip=0x00005a; 	X(MOV(*(dw*)(((db*)&word_3821a)), sp));	// 48940 mov     ss:word_3821A, sp ;~ 1AE2:005A
cs=0x1ae2;eip=0x00005f; 	T(MOV(ax, si));	// 48941 mov     ax, si ;~ 1AE2:005F
cs=0x1ae2;eip=0x000061; 	T(MOV(cl, 4));	// 48942 mov     cl, 4 ;~ 1AE2:0061
cs=0x1ae2;eip=0x000063; 	T(SHL(ax, cl));	// 48943 shl     ax, cl ;~ 1AE2:0063
cs=0x1ae2;eip=0x000065; 	T(DEC(ax));	// 48944 dec     ax ;~ 1AE2:0065
cs=0x1ae2;eip=0x000066; 	X(MOV(*(dw*)(((db*)&word_38218)), ax));	// 48945 mov     ss:word_38218, ax ;~ 1AE2:0066
cs=0x1ae2;eip=0x00006a; 	T(ADD(si, di));	// 48946 add     si, di ;~ 1AE2:006A
cs=0x1ae2;eip=0x00006c; 	X(MOV(*(dw*)(raddr(ds,2)), si));	// 48947 mov     ds:2, si ;~ 1AE2:006C
cs=0x1ae2;eip=0x000070; 	T(MOV(bx, es));	// 48948 mov     bx, es ;~ 1AE2:0070
cs=0x1ae2;eip=0x000072; 	T(SUB(bx, si));	// 48949 sub     bx, si ;~ 1AE2:0072
cs=0x1ae2;eip=0x000074; 	T(NEG(bx));	// 48950 neg     bx ;~ 1AE2:0074
cs=0x1ae2;eip=0x000076; 	T(MOV(ah, 0x4A));	// 48951 mov     ah, 4Ah ;~ 1AE2:0076
cs=0x1ae2;eip=0x000078; 	R(_INT(0x21));	// 48952 int     21h             ; DOS - 2+ - ADJUST MEMORY BLOCK SIZE (SETBLOCK) ;~ 1AE2:0078
cs=0x1ae2;eip=0x00007a; 	X(MOV(*(dw*)(((db*)&word_3828f)), ds));	// 48955 mov     ss:word_3828F, ds ;~ 1AE2:007A
cs=0x1ae2;eip=0x00007f; 	X(PUSH(ss));	// 48956 push    ss ;~ 1AE2:007F
cs=0x1ae2;eip=0x000080; 	X(POP(es));	// 48957 pop     es ;~ 1AE2:0080
cs=0x1ae2;eip=0x000081; 	T(CLD);	// 48959 cld ;~ 1AE2:0081
cs=0x1ae2;eip=0x000082; 	T(MOV(di, 0x0CC42));	// 48960 mov     di, 0CC42h ;~ 1AE2:0082
cs=0x1ae2;eip=0x000085; 	T(MOV(cx, 0x0EAA0));	// 48961 mov     cx, 0EAA0h ;~ 1AE2:0085
cs=0x1ae2;eip=0x000088; 	T(SUB(cx, di));	// 48962 sub     cx, di ;~ 1AE2:0088
cs=0x1ae2;eip=0x00008a; 	T(XOR(ax, ax));	// 48963 xor     ax, ax ;~ 1AE2:008A
	// 48964 rep stosb ;~ 1AE2:008C
cs=0x1ae2;eip=0x00008c; 	X(	REP STOSB);	// 48964 rep stosb ;~ 1AE2:008C
cs=0x1ae2;eip=0x00008e; 	X(PUSH(ss));	// 48965 push    ss ;~ 1AE2:008E
cs=0x1ae2;eip=0x00008f; 	X(POP(ds));	// 48966 pop     ds ;~ 1AE2:008F
cs=0x1ae2;eip=0x000090; 	R(CALLF(sub_294de,0));	// 48967 call    sub_294DE ;~ 1AE2:0090
cs=0x1ae2;eip=0x000095; 	X(PUSH(ss));	// 48968 push    ss ;~ 1AE2:0095
cs=0x1ae2;eip=0x000096; 	X(POP(ds));	// 48969 pop     ds ;~ 1AE2:0096
cs=0x1ae2;eip=0x000097; 	R(CALLF(nullsub_1,0));	// 48970 call    nullsub_1 ;~ 1AE2:0097
cs=0x1ae2;eip=0x00009c; 	R(CALLF(nullsub_2,0));	// 48971 call    nullsub_2 ;~ 1AE2:009C
cs=0x1ae2;eip=0x0000a1; 	T(XOR(bp, bp));	// 48972 xor     bp, bp ;~ 1AE2:00A1
cs=0x1ae2;eip=0x0000a3; 	X(PUSH(word_382b0));	// 48973 push    word_382B0 ;~ 1AE2:00A3
cs=0x1ae2;eip=0x0000a7; 	X(PUSH(word_382ae));	// 48974 push    word_382AE ;~ 1AE2:00A7
cs=0x1ae2;eip=0x0000ab; 	X(PUSH(word_382ac));	// 48975 push    word_382AC ;~ 1AE2:00AB
cs=0x1ae2;eip=0x0000af; 	R(CALLF(sub_10000,0));	// 48976 call    far ptr sub_10000 ;~ 1AE2:00AF
cs=0x1ae2;eip=0x0000b4; 	X(PUSH(ax));	// 48978 push    ax ;~ 1AE2:00B4
cs=0x1ae2;eip=0x0000b5; 	R(CALLF(sub_295a2,0));	// 48979 call    far ptr sub_295A2 ;~ 1AE2:00B5
cs=0x1ae2;eip=0x0000ba; 	T(MOV(ax, seg_offset(dseg)));	// 48981 mov     ax, seg dseg ;~ 1AE2:00BA
cs=0x1ae2;eip=0x0000bd; 	T(MOV(ds, ax));	// 48982 mov     ds, ax ;~ 1AE2:00BD
cs=0x1ae2;eip=0x0000bf; 	T(MOV(ax, 3));	// 48983 mov     ax, 3 ;~ 1AE2:00BF
cs=0x1ae2;eip=0x0000c2; 	X(MOV(*(dw*)(((db*)&off_3821c)), 0x1A2));	// 48984 mov     ss:off_3821C, 1A2h ;~ 1AE2:00C2
loc_294c9:
	// 7886 
cs=0x1ae2;eip=0x0000c9; 	X(PUSH(ax));	// 48988 push    ax ;~ 1AE2:00C9
cs=0x1ae2;eip=0x0000ca; 	R(CALLF(sub_29ee2,0));	// 48989 call    sub_29EE2 ;~ 1AE2:00CA
cs=0x1ae2;eip=0x0000cf; 	R(CALLF(sub_29f5d,0));	// 48990 call    sub_29F5D ;~ 1AE2:00CF
cs=0x1ae2;eip=0x0000d4; 	T(MOV(ax, 0x0FF));	// 48991 mov     ax, 0FFh ;~ 1AE2:00D4
cs=0x1ae2;eip=0x0000d7; 	X(PUSH(ax));	// 48992 push    ax ;~ 1AE2:00D7
cs=0x1ae2;eip=0x0000d8; 	X(PUSH(cs));	// 48993 push    cs ;~ 1AE2:00D8
cs=0x1ae2;eip=0x0000d9; 	R(CALL(__dispatch_call,off_3821c));	// 48994 call    off_3821C ;~ 1AE2:00D9
sub_294de:
	// 49003 
cs=0x1ae2;eip=0x0000de; 	T(MOV(ah, 0x30));	// 49007 mov     ah, 30h ;~ 1AE2:00DE
cs=0x1ae2;eip=0x0000e0; 	R(_INT(0x21));	// 49008 int     21h             ; DOS - GET DOS VERSION ;~ 1AE2:00E0
cs=0x1ae2;eip=0x0000e2; 	X(MOV(word_38291, ax));	// 49010 mov     word_38291, ax ;~ 1AE2:00E2
cs=0x1ae2;eip=0x0000e5; 	T(MOV(ax, 0x3500));	// 49011 mov     ax, 3500h ;~ 1AE2:00E5
cs=0x1ae2;eip=0x0000e8; 	R(_INT(0x21));	// 49012 int     21h             ; DOS - 2+ - GET INTERRUPT VECTOR ;~ 1AE2:00E8
cs=0x1ae2;eip=0x0000ea; 	X(MOV(*(dw*)(((db*)&dword_3827d)), bx));	// 49015 mov     word ptr dword_3827D, bx ;~ 1AE2:00EA
cs=0x1ae2;eip=0x0000ee; 	X(MOV(*(dw*)(((db*)&dword_3827d)+2), es));	// 49016 mov     word ptr dword_3827D+2, es ;~ 1AE2:00EE
cs=0x1ae2;eip=0x0000f2; 	X(PUSH(cs));	// 49017 push    cs ;~ 1AE2:00F2
cs=0x1ae2;eip=0x0000f3; 	X(POP(ds));	// 49018 pop     ds ;~ 1AE2:00F3
cs=0x1ae2;eip=0x0000f4; 	T(MOV(ax, 0x2500));	// 49020 mov     ax, 2500h ;~ 1AE2:00F4
cs=0x1ae2;eip=0x0000f7; 	T(MOV(dx, 0x0BA));	// 49021 mov     dx, 0BAh ; 'º' ;~ 1AE2:00F7
cs=0x1ae2;eip=0x0000fa; 	R(_INT(0x21));	// 49022 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 1AE2:00FA
cs=0x1ae2;eip=0x0000fc; 	X(PUSH(ss));	// 49025 push    ss ;~ 1AE2:00FC
cs=0x1ae2;eip=0x0000fd; 	X(POP(ds));	// 49026 pop     ds ;~ 1AE2:00FD
cs=0x1ae2;eip=0x0000fe; 	T(MOV(cx, word_3899a));	// 49028 mov     cx, word_3899A ;~ 1AE2:00FE
cs=0x1ae2;eip=0x000102; 	R(JCXZ(loc_29532));	// 49029 jcxz    short loc_29532 ;~ 1AE2:0102
cs=0x1ae2;eip=0x000104; 	T(MOV(es, word_3828f));	// 49030 mov     es, word_3828F ;~ 1AE2:0104
cs=0x1ae2;eip=0x000108; 	T(MOV(si, *(dw*)(raddr(es,0x2C))));	// 49032 mov     si, es:2Ch ;~ 1AE2:0108
cs=0x1ae2;eip=0x00010d; 	T(LDS(ax, dword_3899c));	// 49033 lds     ax, dword_3899C ;~ 1AE2:010D
cs=0x1ae2;eip=0x000111; 	T(MOV(dx, ds));	// 49034 mov     dx, ds ;~ 1AE2:0111
cs=0x1ae2;eip=0x000113; 	T(XOR(bx, bx));	// 49035 xor     bx, bx ;~ 1AE2:0113
cs=0x1ae2;eip=0x000115; 	R(CALLF(__dispatch_call,*(dd*)((&unk_38998))));	// 49036 call    dword ptr ss:unk_38998 ;~ 1AE2:0115
cs=0x1ae2;eip=0x00011a; 	R(JNC(loc_29521));	// 49037 jnb     short loc_29521 ;~ 1AE2:011A
cs=0x1ae2;eip=0x00011c; 	X(PUSH(ss));	// 49038 push    ss ;~ 1AE2:011C
cs=0x1ae2;eip=0x00011d; 	X(POP(ds));	// 49039 pop     ds ;~ 1AE2:011D
cs=0x1ae2;eip=0x00011e; 	R(JMP(loc_29f06));	// 49040 jmp     loc_29F06 ;~ 1AE2:011E
loc_29521:
	// 7887 
cs=0x1ae2;eip=0x000121; 	T(LDS(ax, *(dd*)(((db*)&dword_389a0))));	// 49044 lds     ax, ss:dword_389A0 ;~ 1AE2:0121
cs=0x1ae2;eip=0x000126; 	T(MOV(dx, ds));	// 49045 mov     dx, ds ;~ 1AE2:0126
cs=0x1ae2;eip=0x000128; 	T(MOV(bx, 3));	// 49046 mov     bx, 3 ;~ 1AE2:0128
cs=0x1ae2;eip=0x00012b; 	R(CALLF(__dispatch_call,*(dd*)((&unk_38998))));	// 49047 call    dword ptr ss:unk_38998 ;~ 1AE2:012B
cs=0x1ae2;eip=0x000130; 	X(PUSH(ss));	// 49048 push    ss ;~ 1AE2:0130
cs=0x1ae2;eip=0x000131; 	X(POP(ds));	// 49049 pop     ds ;~ 1AE2:0131
loc_29532:
	// 7888 
cs=0x1ae2;eip=0x000132; 	T(MOV(es, word_3828f));	// 49052 mov     es, word_3828F ;~ 1AE2:0132
cs=0x1ae2;eip=0x000136; 	T(MOV(cx, *(dw*)(raddr(es,0x2C))));	// 49053 mov     cx, es:2Ch ;~ 1AE2:0136
cs=0x1ae2;eip=0x00013b; 	R(JCXZ(loc_29573));	// 49054 jcxz    short loc_29573 ;~ 1AE2:013B
cs=0x1ae2;eip=0x00013d; 	T(MOV(es, cx));	// 49055 mov     es, cx ;~ 1AE2:013D
cs=0x1ae2;eip=0x00013f; 	T(XOR(di, di));	// 49056 xor     di, di ;~ 1AE2:013F
loc_29541:
	// 7889 
cs=0x1ae2;eip=0x000141; 	T(CMP(*(raddr(es,di)), 0));	// 49059 cmp     byte ptr es:[di], 0 ;~ 1AE2:0141
cs=0x1ae2;eip=0x000145; 	R(JZ(loc_29573));	// 49060 jz      short loc_29573 ;~ 1AE2:0145
cs=0x1ae2;eip=0x000147; 	T(MOV(cx, 0x0C));	// 49061 mov     cx, 0Ch ;~ 1AE2:0147
cs=0x1ae2;eip=0x00014a; 	T(MOV(si, 0x0C430));	// 49062 mov     si, 0C430h ;~ 1AE2:014A
	// 49063 repe cmpsb ;~ 1AE2:014D
cs=0x1ae2;eip=0x00014d; 	T(	REPE CMPSB);	// 49063 repe cmpsb ;~ 1AE2:014D
cs=0x1ae2;eip=0x00014f; 	R(JZ(loc_2955c));	// 49064 jz      short loc_2955C ;~ 1AE2:014F
cs=0x1ae2;eip=0x000151; 	T(MOV(cx, 0x7FFF));	// 49065 mov     cx, 7FFFh ;~ 1AE2:0151
cs=0x1ae2;eip=0x000154; 	T(XOR(ax, ax));	// 49066 xor     ax, ax ;~ 1AE2:0154
	// 49067 repne scasb ;~ 1AE2:0156
cs=0x1ae2;eip=0x000156; 	T(	REPNE SCASB);	// 49067 repne scasb ;~ 1AE2:0156
cs=0x1ae2;eip=0x000158; 	R(JNZ(loc_29573));	// 49068 jnz     short loc_29573 ;~ 1AE2:0158
cs=0x1ae2;eip=0x00015a; 	R(JMP(loc_29541));	// 49069 jmp     short loc_29541 ;~ 1AE2:015A
loc_2955c:
	// 7890 
cs=0x1ae2;eip=0x00015c; 	X(PUSH(es));	// 49073 push    es ;~ 1AE2:015C
cs=0x1ae2;eip=0x00015d; 	X(PUSH(ds));	// 49074 push    ds ;~ 1AE2:015D
cs=0x1ae2;eip=0x00015e; 	X(POP(es));	// 49075 pop     es ;~ 1AE2:015E
cs=0x1ae2;eip=0x00015f; 	X(POP(ds));	// 49077 pop     ds ;~ 1AE2:015F
cs=0x1ae2;eip=0x000160; 	T(MOV(si, di));	// 49078 mov     si, di ;~ 1AE2:0160
cs=0x1ae2;eip=0x000162; 	T(MOV(di, 0x0C458));	// 49079 mov     di, 0C458h ;~ 1AE2:0162
cs=0x1ae2;eip=0x000165; 	T(LODSB);	// 49080 lodsb ;~ 1AE2:0165
cs=0x1ae2;eip=0x000166; 	T(CBW);	// 49081 cbw ;~ 1AE2:0166
cs=0x1ae2;eip=0x000167; 	T(XCHG(ax, cx));	// 49082 xchg    ax, cx ;~ 1AE2:0167
loc_29568:
	// 7891 
cs=0x1ae2;eip=0x000168; 	T(LODSB);	// 49085 lodsb ;~ 1AE2:0168
cs=0x1ae2;eip=0x000169; 	T(INC(al));	// 49086 inc     al ;~ 1AE2:0169
cs=0x1ae2;eip=0x00016b; 	R(JZ(loc_2956e));	// 49087 jz      short loc_2956E ;~ 1AE2:016B
cs=0x1ae2;eip=0x00016d; 	T(DEC(ax));	// 49088 dec     ax ;~ 1AE2:016D
loc_2956e:
	// 7892 
cs=0x1ae2;eip=0x00016e; 	X(STOSB);	// 49091 stosb ;~ 1AE2:016E
cs=0x1ae2;eip=0x00016f; 	R(LOOP(loc_29568));	// 49092 loop    loc_29568 ;~ 1AE2:016F
cs=0x1ae2;eip=0x000171; 	X(PUSH(ss));	// 49093 push    ss ;~ 1AE2:0171
cs=0x1ae2;eip=0x000172; 	X(POP(ds));	// 49094 pop     ds ;~ 1AE2:0172
loc_29573:
	// 7893 
cs=0x1ae2;eip=0x000173; 	T(MOV(bx, 4));	// 49098 mov     bx, 4 ;~ 1AE2:0173
loc_29576:
	// 7894 
cs=0x1ae2;eip=0x000176; 	X(AND(*(raddr(ds,bx-0x3BA8)), 0x0BF));	// 49101 and     byte ptr [bx-3BA8h], 0BFh ;~ 1AE2:0176
cs=0x1ae2;eip=0x00017b; 	T(MOV(ax, 0x4400));	// 49102 mov     ax, 4400h ;~ 1AE2:017B
cs=0x1ae2;eip=0x00017e; 	R(_INT(0x21));	// 49103 int     21h             ; DOS - 2+ - IOCTL - GET DEVICE INFORMATION ;~ 1AE2:017E
cs=0x1ae2;eip=0x000180; 	R(JC(loc_2958c));	// 49105 jb      short loc_2958C ;~ 1AE2:0180
cs=0x1ae2;eip=0x000182; 	T(TEST(dl, 0x80));	// 49106 test    dl, 80h ;~ 1AE2:0182
cs=0x1ae2;eip=0x000185; 	R(JZ(loc_2958c));	// 49107 jz      short loc_2958C ;~ 1AE2:0185
cs=0x1ae2;eip=0x000187; 	X(OR(*(raddr(ds,bx-0x3BA8)), 0x40));	// 49108 or      byte ptr [bx-3BA8h], 40h ;~ 1AE2:0187
loc_2958c:
	// 7895 
cs=0x1ae2;eip=0x00018c; 	T(DEC(bx));	// 49112 dec     bx ;~ 1AE2:018C
cs=0x1ae2;eip=0x00018d; 	R(JNS(loc_29576));	// 49113 jns     short loc_29576 ;~ 1AE2:018D
cs=0x1ae2;eip=0x00018f; 	T(MOV(si, 0x0CB64));	// 49114 mov     si, 0CB64h ;~ 1AE2:018F
cs=0x1ae2;eip=0x000192; 	T(MOV(di, 0x0CB64));	// 49115 mov     di, 0CB64h ;~ 1AE2:0192
cs=0x1ae2;eip=0x000195; 	R(CALL(sub_2962d,0));	// 49116 call    sub_2962D ;~ 1AE2:0195
cs=0x1ae2;eip=0x000198; 	T(MOV(si, 0x0CB64));	// 49117 mov     si, 0CB64h ;~ 1AE2:0198
cs=0x1ae2;eip=0x00019b; 	T(MOV(di, 0x0CB64));	// 49118 mov     di, 0CB64h ;~ 1AE2:019B
cs=0x1ae2;eip=0x00019e; 	R(CALL(sub_2962d,0));	// 49119 call    sub_2962D ;~ 1AE2:019E
cs=0x1ae2;eip=0x0001a1; 	R(RETF(0));	// 49120 retf ;~ 1AE2:01A1
sub_295a2:
	// 49128 
cs=0x1ae2;eip=0x0001a2; 	X(PUSH(bp));	// 49130 push    bp ;~ 1AE2:01A2
ret_1ae2_1a3:
	// 7896 
cs=0x1ae2;eip=0x0001a3; 	T(MOV(bp, sp));	// 49131 mov     bp, sp ;~ 1AE2:01A3
cs=0x1ae2;eip=0x0001a5; 	T(MOV(si, 0x0CC42));	// 49132 mov     si, 0CC42h ;~ 1AE2:01A5
cs=0x1ae2;eip=0x0001a8; 	T(MOV(di, 0x0CC42));	// 49133 mov     di, 0CC42h ;~ 1AE2:01A8
cs=0x1ae2;eip=0x0001ab; 	R(CALL(sub_2962d,0));	// 49134 call    sub_2962D ;~ 1AE2:01AB
cs=0x1ae2;eip=0x0001ae; 	T(MOV(si, 0x0CB64));	// 49135 mov     si, 0CB64h ;~ 1AE2:01AE
cs=0x1ae2;eip=0x0001b1; 	T(MOV(di, 0x0CB68));	// 49136 mov     di, 0CB68h ;~ 1AE2:01B1
cs=0x1ae2;eip=0x0001b4; 	R(CALL(sub_2962d,0));	// 49137 call    sub_2962D ;~ 1AE2:01B4
cs=0x1ae2;eip=0x0001b7; 	R(JMP(loc_295bc));	// 49138 jmp     short loc_295BC ;~ 1AE2:01B7
sub_295b9:
	// 49146 
#undef arg_2
#define arg_2 6
	// 49149 arg_2           = word ptr  6 ;~ 1AE2:01B9
ret_1ae2_1b9:
	// 7897 
cs=0x1ae2;eip=0x0001b9; 	X(PUSH(bp));	// 49151 push    bp ;~ 1AE2:01B9
cs=0x1ae2;eip=0x0001ba; 	T(MOV(bp, sp));	// 49152 mov     bp, sp ;~ 1AE2:01BA
loc_295bc:
	// 7898 
cs=0x1ae2;eip=0x0001bc; 	T(MOV(si, 0x0CB68));	// 49155 mov     si, 0CB68h ;~ 1AE2:01BC
cs=0x1ae2;eip=0x0001bf; 	T(MOV(di, 0x0CB68));	// 49156 mov     di, 0CB68h ;~ 1AE2:01BF
cs=0x1ae2;eip=0x0001c2; 	R(CALL(sub_2962d,0));	// 49157 call    sub_2962D ;~ 1AE2:01C2
cs=0x1ae2;eip=0x0001c5; 	T(MOV(si, 0x0CB68));	// 49158 mov     si, 0CB68h ;~ 1AE2:01C5
cs=0x1ae2;eip=0x0001c8; 	T(MOV(di, 0x0CB68));	// 49159 mov     di, 0CB68h ;~ 1AE2:01C8
cs=0x1ae2;eip=0x0001cb; 	R(CALL(sub_2962d,0));	// 49160 call    sub_2962D ;~ 1AE2:01CB
cs=0x1ae2;eip=0x0001ce; 	R(CALLF(sub_29f0c,0));	// 49161 call    sub_29F0C ;~ 1AE2:01CE
cs=0x1ae2;eip=0x0001d3; 	T(OR(ax, ax));	// 49162 or      ax, ax ;~ 1AE2:01D3
cs=0x1ae2;eip=0x0001d5; 	R(JZ(loc_295e2));	// 49163 jz      short loc_295E2 ;~ 1AE2:01D5
cs=0x1ae2;eip=0x0001d7; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 49164 cmp     [bp+arg_2], 0 ;~ 1AE2:01D7
cs=0x1ae2;eip=0x0001db; 	R(JNZ(loc_295e2));	// 49165 jnz     short loc_295E2 ;~ 1AE2:01DB
cs=0x1ae2;eip=0x0001dd; 	X(MOV(*(dw*)(raddr(ss,bp+arg_2)), 0x0FF));	// 49166 mov     [bp+arg_2], 0FFh ;~ 1AE2:01DD
loc_295e2:
	// 7899 
cs=0x1ae2;eip=0x0001e2; 	T(MOV(cx, 0x0F));	// 49170 mov     cx, 0Fh ;~ 1AE2:01E2
cs=0x1ae2;eip=0x0001e5; 	T(MOV(bx, 5));	// 49171 mov     bx, 5 ;~ 1AE2:01E5
loc_295e8:
	// 7900 
cs=0x1ae2;eip=0x0001e8; 	T(TEST(*(raddr(ds,bx-0x3BA8)), 1));	// 49174 test    byte ptr [bx-3BA8h], 1 ;~ 1AE2:01E8
cs=0x1ae2;eip=0x0001ed; 	R(JZ(loc_295f3));	// 49175 jz      short loc_295F3 ;~ 1AE2:01ED
cs=0x1ae2;eip=0x0001ef; 	T(MOV(ah, 0x3E));	// 49176 mov     ah, 3Eh ;~ 1AE2:01EF
cs=0x1ae2;eip=0x0001f1; 	R(_INT(0x21));	// 49177 int     21h             ; DOS - 2+ - CLOSE A FILE WITH HANDLE ;~ 1AE2:01F1
loc_295f3:
	// 7901 
cs=0x1ae2;eip=0x0001f3; 	T(INC(bx));	// 49181 inc     bx ;~ 1AE2:01F3
cs=0x1ae2;eip=0x0001f4; 	R(LOOP(loc_295e8));	// 49182 loop    loc_295E8 ;~ 1AE2:01F4
cs=0x1ae2;eip=0x0001f6; 	R(CALL(sub_29600,0));	// 49183 call    sub_29600 ;~ 1AE2:01F6
cs=0x1ae2;eip=0x0001f9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49184 mov     ax, [bp+arg_2] ;~ 1AE2:01F9
cs=0x1ae2;eip=0x0001fc; 	T(MOV(ah, 0x4C));	// 49185 mov     ah, 4Ch ;~ 1AE2:01FC
cs=0x1ae2;eip=0x0001fe; 	R(_INT(0x21));	// 49186 int     21h             ; DOS - 2+ - QUIT WITH EXIT CODE (EXIT) ;~ 1AE2:01FE
sub_29600:
	// 49193 
cs=0x1ae2;eip=0x000200; 	T(MOV(cx, word_3899a));	// 49194 mov     cx, word_3899A ;~ 1AE2:0200
cs=0x1ae2;eip=0x000204; 	R(JCXZ(loc_2960d));	// 49195 jcxz    short loc_2960D ;~ 1AE2:0204
cs=0x1ae2;eip=0x000206; 	T(MOV(bx, 2));	// 49196 mov     bx, 2 ;~ 1AE2:0206
cs=0x1ae2;eip=0x000209; 	R(CALLF(__dispatch_call,*(dd*)((&unk_38998))));	// 49197 call    dword ptr unk_38998 ;~ 1AE2:0209
loc_2960d:
	// 7902 
cs=0x1ae2;eip=0x00020d; 	X(PUSH(ds));	// 49200 push    ds ;~ 1AE2:020D
cs=0x1ae2;eip=0x00020e; 	T(LDS(dx, dword_3827d));	// 49201 lds     dx, dword_3827D ;~ 1AE2:020E
cs=0x1ae2;eip=0x000212; 	T(MOV(ax, 0x2500));	// 49202 mov     ax, 2500h ;~ 1AE2:0212
cs=0x1ae2;eip=0x000215; 	R(_INT(0x21));	// 49203 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 1AE2:0215
cs=0x1ae2;eip=0x000217; 	X(POP(ds));	// 49206 pop     ds ;~ 1AE2:0217
cs=0x1ae2;eip=0x000218; 	T(CMP(byte_382ba, 0));	// 49207 cmp     byte_382BA, 0 ;~ 1AE2:0218
cs=0x1ae2;eip=0x00021d; 	R(JZ(locret_2962c));	// 49208 jz      short locret_2962C ;~ 1AE2:021D
cs=0x1ae2;eip=0x00021f; 	X(PUSH(ds));	// 49209 push    ds ;~ 1AE2:021F
cs=0x1ae2;eip=0x000220; 	T(MOV(al, byte_382bb));	// 49210 mov     al, byte_382BB ;~ 1AE2:0220
cs=0x1ae2;eip=0x000223; 	T(LDS(dx, dword_382bc));	// 49211 lds     dx, dword_382BC ;~ 1AE2:0223
cs=0x1ae2;eip=0x000227; 	T(MOV(ah, 0x25));	// 49212 mov     ah, 25h ;~ 1AE2:0227
cs=0x1ae2;eip=0x000229; 	R(_INT(0x21));	// 49213 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 1AE2:0229
cs=0x1ae2;eip=0x00022b; 	X(POP(ds));	// 49216 pop     ds ;~ 1AE2:022B
locret_2962c:
	// 7903 
cs=0x1ae2;eip=0x00022c; 	R(RETN(0));	// 49219 retn ;~ 1AE2:022C
sub_2962d:
	// 49226 
cs=0x1ae2;eip=0x00022d; 	T(CMP(si, di));	// 49228 cmp     si, di ;~ 1AE2:022D
ret_1ae2_22f:
	// 7904 
cs=0x1ae2;eip=0x00022f; 	R(JNC(locret_2963f));	// 49229 jnb     short locret_2963F ;~ 1AE2:022F
cs=0x1ae2;eip=0x000231; 	T(SUB(di, 4));	// 49230 sub     di, 4 ;~ 1AE2:0231
cs=0x1ae2;eip=0x000234; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 49231 mov     ax, [di] ;~ 1AE2:0234
cs=0x1ae2;eip=0x000236; 	T(OR(ax, *(dw*)(raddr(ds,di+2))));	// 49232 or      ax, [di+2] ;~ 1AE2:0236
cs=0x1ae2;eip=0x000239; 	R(JZ(sub_2962d));	// 49233 jz      short sub_2962D ;~ 1AE2:0239
cs=0x1ae2;eip=0x00023b; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ds,di))));	// 49234 call    dword ptr [di] ;~ 1AE2:023B
cs=0x1ae2;eip=0x00023d; 	R(JMP(sub_2962d));	// 49235 jmp     short sub_2962D ;~ 1AE2:023D
locret_2963f:
	// 7905 
cs=0x1ae2;eip=0x00023f; 	R(RETN(0));	// 49239 retn ;~ 1AE2:023F
sub_29640:
	// 49247 
#undef var_e
#define var_e -0x0E
	// 49250 var_E           = byte ptr -0Eh ;~ 1AE2:0240
#undef var_c
#define var_c -0x0C
	// 49251 var_C           = byte ptr -0Ch ;~ 1AE2:0240
#undef var_4
#define var_4 -4
	// 49252 var_4           = word ptr -4 ;~ 1AE2:0240
#undef var_2
#define var_2 -2
	// 49253 var_2           = word ptr -2 ;~ 1AE2:0240
#undef arg_0
#define arg_0 6
	// 49254 arg_0           = word ptr  6 ;~ 1AE2:0240
ret_1ae2_240:
	// 7906 
cs=0x1ae2;eip=0x000240; 	X(PUSH(bp));	// 49256 push    bp ;~ 1AE2:0240
cs=0x1ae2;eip=0x000241; 	T(MOV(bp, sp));	// 49257 mov     bp, sp ;~ 1AE2:0241
cs=0x1ae2;eip=0x000243; 	T(SUB(sp, 0x10));	// 49258 sub     sp, 10h ;~ 1AE2:0243
cs=0x1ae2;eip=0x000246; 	X(PUSH(di));	// 49259 push    di ;~ 1AE2:0246
cs=0x1ae2;eip=0x000247; 	X(PUSH(si));	// 49260 push    si ;~ 1AE2:0247
cs=0x1ae2;eip=0x000248; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 49261 mov     si, [bp+arg_0] ;~ 1AE2:0248
cs=0x1ae2;eip=0x00024b; 	T(MOV(di, 0x0FFFF));	// 49262 mov     di, 0FFFFh ;~ 1AE2:024B
cs=0x1ae2;eip=0x00024e; 	T(TEST(*(raddr(ds,si+6)), 0x83));	// 49263 test    byte ptr [si+6], 83h ;~ 1AE2:024E
cs=0x1ae2;eip=0x000252; 	R(JNZ(loc_29657));	// 49264 jnz     short loc_29657 ;~ 1AE2:0252
cs=0x1ae2;eip=0x000254; 	R(JMP(loc_296fc));	// 49265 jmp     loc_296FC ;~ 1AE2:0254
loc_29657:
	// 7907 
cs=0x1ae2;eip=0x000257; 	T(TEST(*(raddr(ds,si+6)), 0x40));	// 49269 test    byte ptr [si+6], 40h ;~ 1AE2:0257
cs=0x1ae2;eip=0x00025b; 	R(JZ(loc_29660));	// 49270 jz      short loc_29660 ;~ 1AE2:025B
cs=0x1ae2;eip=0x00025d; 	R(JMP(loc_296fc));	// 49271 jmp     loc_296FC ;~ 1AE2:025D
loc_29660:
	// 7908 
cs=0x1ae2;eip=0x000260; 	X(PUSH(si));	// 49275 push    si ;~ 1AE2:0260
cs=0x1ae2;eip=0x000261; 	R(CALLF(sub_2a2d2,0));	// 49276 call    sub_2A2D2 ;~ 1AE2:0261
cs=0x1ae2;eip=0x000266; 	T(ADD(sp, 2));	// 49277 add     sp, 2 ;~ 1AE2:0266
cs=0x1ae2;eip=0x000269; 	T(MOV(di, ax));	// 49278 mov     di, ax ;~ 1AE2:0269
cs=0x1ae2;eip=0x00026b; 	T(MOV(bx, si));	// 49279 mov     bx, si ;~ 1AE2:026B
cs=0x1ae2;eip=0x00026d; 	T(SUB(bx, 0x0C490));	// 49280 sub     bx, 0C490h ;~ 1AE2:026D
cs=0x1ae2;eip=0x000271; 	T(MOV(cl, 3));	// 49281 mov     cl, 3 ;~ 1AE2:0271
cs=0x1ae2;eip=0x000273; 	T(SAR(bx, cl));	// 49282 sar     bx, cl ;~ 1AE2:0273
cs=0x1ae2;eip=0x000275; 	T(MOV(ax, bx));	// 49283 mov     ax, bx ;~ 1AE2:0275
cs=0x1ae2;eip=0x000277; 	T(SHL(bx, 1));	// 49284 shl     bx, 1 ;~ 1AE2:0277
cs=0x1ae2;eip=0x000279; 	T(ADD(bx, ax));	// 49285 add     bx, ax ;~ 1AE2:0279
cs=0x1ae2;eip=0x00027b; 	T(SHL(bx, 1));	// 49286 shl     bx, 1 ;~ 1AE2:027B
cs=0x1ae2;eip=0x00027d; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x3ACC))));	// 49287 mov     ax, [bx-3ACCh] ;~ 1AE2:027D
cs=0x1ae2;eip=0x000281; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 49288 mov     [bp+var_4], ax ;~ 1AE2:0281
cs=0x1ae2;eip=0x000284; 	X(PUSH(si));	// 49289 push    si ;~ 1AE2:0284
cs=0x1ae2;eip=0x000285; 	R(CALLF(sub_2a1a8,0));	// 49290 call    sub_2A1A8 ;~ 1AE2:0285
cs=0x1ae2;eip=0x00028a; 	T(ADD(sp, 2));	// 49291 add     sp, 2 ;~ 1AE2:028A
cs=0x1ae2;eip=0x00028d; 	T(MOV(al, *(raddr(ds,si+7))));	// 49292 mov     al, [si+7] ;~ 1AE2:028D
cs=0x1ae2;eip=0x000290; 	T(CBW);	// 49293 cbw ;~ 1AE2:0290
cs=0x1ae2;eip=0x000291; 	X(PUSH(ax));	// 49294 push    ax ;~ 1AE2:0291
cs=0x1ae2;eip=0x000292; 	R(CALLF(sub_2a37c,0));	// 49295 call    sub_2A37C ;~ 1AE2:0292
cs=0x1ae2;eip=0x000297; 	T(ADD(sp, 2));	// 49296 add     sp, 2 ;~ 1AE2:0297
cs=0x1ae2;eip=0x00029a; 	T(OR(ax, ax));	// 49297 or      ax, ax ;~ 1AE2:029A
cs=0x1ae2;eip=0x00029c; 	R(JL(loc_296f9));	// 49298 jl      short loc_296F9 ;~ 1AE2:029C
cs=0x1ae2;eip=0x00029e; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 49299 cmp     [bp+var_4], 0 ;~ 1AE2:029E
cs=0x1ae2;eip=0x0002a2; 	R(JZ(loc_296fc));	// 49300 jz      short loc_296FC ;~ 1AE2:02A2
cs=0x1ae2;eip=0x0002a4; 	T(MOV(ax, 0x0C480));	// 49301 mov     ax, 0C480h ;~ 1AE2:02A4
cs=0x1ae2;eip=0x0002a7; 	X(PUSH(ax));	// 49302 push    ax ;~ 1AE2:02A7
cs=0x1ae2;eip=0x0002a8; 	T(ax = bp+var_e);	// 49303 lea     ax, [bp+var_E] ;~ 1AE2:02A8
cs=0x1ae2;eip=0x0002ab; 	X(PUSH(ax));	// 49304 push    ax ;~ 1AE2:02AB
cs=0x1ae2;eip=0x0002ac; 	R(CALLF(sub_29b46,0));	// 49305 call    sub_29B46 ;~ 1AE2:02AC
cs=0x1ae2;eip=0x0002b1; 	T(ADD(sp, 4));	// 49306 add     sp, 4 ;~ 1AE2:02B1
cs=0x1ae2;eip=0x0002b4; 	T(ax = bp+var_c);	// 49307 lea     ax, [bp+var_C] ;~ 1AE2:02B4
cs=0x1ae2;eip=0x0002b7; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 49308 mov     [bp+var_2], ax ;~ 1AE2:02B7
cs=0x1ae2;eip=0x0002ba; 	T(MOV(bx, ax));	// 49309 mov     bx, ax ;~ 1AE2:02BA
cs=0x1ae2;eip=0x0002bc; 	T(CMP(*(raddr(ds,bx-2)), 0x5C));	// 49310 cmp     byte ptr [bx-2], 5Ch ; '\' ;~ 1AE2:02BC
cs=0x1ae2;eip=0x0002c0; 	R(JZ(loc_296d4));	// 49311 jz      short loc_296D4 ;~ 1AE2:02C0
cs=0x1ae2;eip=0x0002c2; 	T(MOV(ax, 0x0C482));	// 49312 mov     ax, 0C482h ;~ 1AE2:02C2
cs=0x1ae2;eip=0x0002c5; 	X(PUSH(ax));	// 49313 push    ax ;~ 1AE2:02C5
cs=0x1ae2;eip=0x0002c6; 	T(ax = bp+var_e);	// 49314 lea     ax, [bp+var_E] ;~ 1AE2:02C6
cs=0x1ae2;eip=0x0002c9; 	X(PUSH(ax));	// 49315 push    ax ;~ 1AE2:02C9
cs=0x1ae2;eip=0x0002ca; 	R(CALLF(sub_2a824,0));	// 49316 call    sub_2A824 ;~ 1AE2:02CA
cs=0x1ae2;eip=0x0002cf; 	T(ADD(sp, 4));	// 49317 add     sp, 4 ;~ 1AE2:02CF
cs=0x1ae2;eip=0x0002d2; 	R(JMP(loc_296d7));	// 49318 jmp     short loc_296D7 ;~ 1AE2:02D2
loc_296d4:
	// 7909 
cs=0x1ae2;eip=0x0002d4; 	X(DEC(*(dw*)(raddr(ss,bp+var_2))));	// 49322 dec     [bp+var_2] ;~ 1AE2:02D4
loc_296d7:
	// 7910 
cs=0x1ae2;eip=0x0002d7; 	T(MOV(ax, 0x0A));	// 49325 mov     ax, 0Ah ;~ 1AE2:02D7
cs=0x1ae2;eip=0x0002da; 	X(PUSH(ax));	// 49326 push    ax ;~ 1AE2:02DA
cs=0x1ae2;eip=0x0002db; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 49327 push    [bp+var_2] ;~ 1AE2:02DB
cs=0x1ae2;eip=0x0002de; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 49328 push    [bp+var_4] ;~ 1AE2:02DE
cs=0x1ae2;eip=0x0002e1; 	R(CALLF(sub_2a864,0));	// 49329 call    sub_2A864 ;~ 1AE2:02E1
cs=0x1ae2;eip=0x0002e6; 	T(ADD(sp, 6));	// 49330 add     sp, 6 ;~ 1AE2:02E6
cs=0x1ae2;eip=0x0002e9; 	T(ax = bp+var_e);	// 49331 lea     ax, [bp+var_E] ;~ 1AE2:02E9
cs=0x1ae2;eip=0x0002ec; 	X(PUSH(ax));	// 49332 push    ax ;~ 1AE2:02EC
cs=0x1ae2;eip=0x0002ed; 	R(CALLF(sub_2a908,0));	// 49333 call    sub_2A908 ;~ 1AE2:02ED
cs=0x1ae2;eip=0x0002f2; 	T(ADD(sp, 2));	// 49334 add     sp, 2 ;~ 1AE2:02F2
cs=0x1ae2;eip=0x0002f5; 	T(OR(ax, ax));	// 49335 or      ax, ax ;~ 1AE2:02F5
cs=0x1ae2;eip=0x0002f7; 	R(JZ(loc_296fc));	// 49336 jz      short loc_296FC ;~ 1AE2:02F7
loc_296f9:
	// 7911 
cs=0x1ae2;eip=0x0002f9; 	T(MOV(di, 0x0FFFF));	// 49339 mov     di, 0FFFFh ;~ 1AE2:02F9
loc_296fc:
	// 7912 
cs=0x1ae2;eip=0x0002fc; 	X(MOV(*(raddr(ds,si+6)), 0));	// 49343 mov     byte ptr [si+6], 0 ;~ 1AE2:02FC
cs=0x1ae2;eip=0x000300; 	T(MOV(ax, di));	// 49344 mov     ax, di ;~ 1AE2:0300
cs=0x1ae2;eip=0x000302; 	X(POP(si));	// 49345 pop     si ;~ 1AE2:0302
cs=0x1ae2;eip=0x000303; 	X(POP(di));	// 49346 pop     di ;~ 1AE2:0303
cs=0x1ae2;eip=0x000304; 	T(MOV(sp, bp));	// 49347 mov     sp, bp ;~ 1AE2:0304
cs=0x1ae2;eip=0x000306; 	X(POP(bp));	// 49348 pop     bp ;~ 1AE2:0306
cs=0x1ae2;eip=0x000307; 	R(RETF(0));	// 49349 retf ;~ 1AE2:0307
sub_29708:
	// 49357 
#undef arg_0
#define arg_0 6
	// 49360 arg_0           = word ptr  6 ;~ 1AE2:0308
#undef arg_2
#define arg_2 8
	// 49361 arg_2           = word ptr  8 ;~ 1AE2:0308
ret_1ae2_308:
	// 7913 
cs=0x1ae2;eip=0x000308; 	X(PUSH(bp));	// 49363 push    bp ;~ 1AE2:0308
cs=0x1ae2;eip=0x000309; 	T(MOV(bp, sp));	// 49364 mov     bp, sp ;~ 1AE2:0309
cs=0x1ae2;eip=0x00030b; 	T(SUB(sp, 2));	// 49365 sub     sp, 2 ;~ 1AE2:030B
cs=0x1ae2;eip=0x00030e; 	X(PUSH(si));	// 49366 push    si ;~ 1AE2:030E
cs=0x1ae2;eip=0x00030f; 	R(CALLF(sub_2a342,0));	// 49367 call    sub_2A342 ;~ 1AE2:030F
cs=0x1ae2;eip=0x000314; 	T(MOV(si, ax));	// 49368 mov     si, ax ;~ 1AE2:0314
cs=0x1ae2;eip=0x000316; 	T(OR(si, si));	// 49369 or      si, si ;~ 1AE2:0316
cs=0x1ae2;eip=0x000318; 	R(JZ(loc_2972c));	// 49370 jz      short loc_2972C ;~ 1AE2:0318
cs=0x1ae2;eip=0x00031a; 	X(PUSH(si));	// 49371 push    si ;~ 1AE2:031A
cs=0x1ae2;eip=0x00031b; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 49372 push    [bp+arg_2] ;~ 1AE2:031B
cs=0x1ae2;eip=0x00031e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 49373 push    [bp+arg_0] ;~ 1AE2:031E
cs=0x1ae2;eip=0x000321; 	R(CALLF(sub_2a1d8,0));	// 49374 call    sub_2A1D8 ;~ 1AE2:0321
cs=0x1ae2;eip=0x000326; 	T(ADD(sp, 6));	// 49375 add     sp, 6 ;~ 1AE2:0326
cs=0x1ae2;eip=0x000329; 	R(JMP(loc_2972e));	// 49376 jmp     short loc_2972E ;~ 1AE2:0329
loc_2972c:
	// 7914 
cs=0x1ae2;eip=0x00032c; 	T(SUB(ax, ax));	// 49381 sub     ax, ax ;~ 1AE2:032C
loc_2972e:
	// 7915 
cs=0x1ae2;eip=0x00032e; 	X(POP(si));	// 49384 pop     si ;~ 1AE2:032E
cs=0x1ae2;eip=0x00032f; 	T(MOV(sp, bp));	// 49385 mov     sp, bp ;~ 1AE2:032F
cs=0x1ae2;eip=0x000331; 	X(POP(bp));	// 49386 pop     bp ;~ 1AE2:0331
cs=0x1ae2;eip=0x000332; 	R(RETF(0));	// 49387 retf ;~ 1AE2:0332
sub_29734:
	// 49397 
#undef var_a
#define var_a -0x0A
	// 49400 var_A           = word ptr -0Ah ;~ 1AE2:0334
#undef var_6
#define var_6 -6
	// 49401 var_6           = word ptr -6 ;~ 1AE2:0334
#undef var_4
#define var_4 -4
	// 49402 var_4           = word ptr -4 ;~ 1AE2:0334
#undef var_2
#define var_2 -2
	// 49403 var_2           = word ptr -2 ;~ 1AE2:0334
#undef arg_0
#define arg_0 6
	// 49404 arg_0           = word ptr  6 ;~ 1AE2:0334
#undef arg_2
#define arg_2 8
	// 49405 arg_2           = word ptr  8 ;~ 1AE2:0334
#undef arg_4
#define arg_4 0x0A
	// 49406 arg_4           = word ptr  0Ah ;~ 1AE2:0334
#undef arg_6
#define arg_6 0x0C
	// 49407 arg_6           = word ptr  0Ch ;~ 1AE2:0334
ret_1ae2_334:
	// 7916 
cs=0x1ae2;eip=0x000334; 	X(PUSH(bp));	// 49409 push    bp ;~ 1AE2:0334
cs=0x1ae2;eip=0x000335; 	T(MOV(bp, sp));	// 49410 mov     bp, sp ;~ 1AE2:0335
cs=0x1ae2;eip=0x000337; 	T(SUB(sp, 0x0A));	// 49411 sub     sp, 0Ah ;~ 1AE2:0337
cs=0x1ae2;eip=0x00033a; 	X(PUSH(di));	// 49412 push    di ;~ 1AE2:033A
cs=0x1ae2;eip=0x00033b; 	X(PUSH(si));	// 49413 push    si ;~ 1AE2:033B
cs=0x1ae2;eip=0x00033c; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_6))));	// 49414 mov     si, [bp+arg_6] ;~ 1AE2:033C
cs=0x1ae2;eip=0x00033f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49415 mov     ax, [bp+arg_2] ;~ 1AE2:033F
cs=0x1ae2;eip=0x000342; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_4))));	// 49416 mul     [bp+arg_4] ;~ 1AE2:0342
cs=0x1ae2;eip=0x000345; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 49417 mov     [bp+var_2], ax ;~ 1AE2:0345
cs=0x1ae2;eip=0x000348; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 49418 mov     [bp+var_4], ax ;~ 1AE2:0348
cs=0x1ae2;eip=0x00034b; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 49419 cmp     [bp+arg_2], 0 ;~ 1AE2:034B
cs=0x1ae2;eip=0x00034f; 	R(JZ(loc_29757));	// 49420 jz      short loc_29757 ;~ 1AE2:034F
cs=0x1ae2;eip=0x000351; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0));	// 49421 cmp     [bp+arg_4], 0 ;~ 1AE2:0351
cs=0x1ae2;eip=0x000355; 	R(JNZ(loc_2975e));	// 49422 jnz     short loc_2975E ;~ 1AE2:0355
loc_29757:
	// 7917 
cs=0x1ae2;eip=0x000357; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 49425 mov     ax, [bp+var_4] ;~ 1AE2:0357
cs=0x1ae2;eip=0x00035a; 	R(JMP(loc_29920));	// 49426 jmp     loc_29920 ;~ 1AE2:035A
loc_2975e:
	// 7918 
cs=0x1ae2;eip=0x00035e; 	T(TEST(*(raddr(ds,si+6)), 0x0C));	// 49431 test    byte ptr [si+6], 0Ch ;~ 1AE2:035E
cs=0x1ae2;eip=0x000362; 	R(JZ(loc_29767));	// 49432 jz      short loc_29767 ;~ 1AE2:0362
cs=0x1ae2;eip=0x000364; 	R(JMP(loc_29809));	// 49433 jmp     loc_29809 ;~ 1AE2:0364
loc_29767:
	// 7919 
cs=0x1ae2;eip=0x000367; 	T(MOV(bx, si));	// 49437 mov     bx, si ;~ 1AE2:0367
cs=0x1ae2;eip=0x000369; 	T(SUB(bx, 0x0C490));	// 49438 sub     bx, 0C490h ;~ 1AE2:0369
cs=0x1ae2;eip=0x00036d; 	T(MOV(cl, 3));	// 49439 mov     cl, 3 ;~ 1AE2:036D
cs=0x1ae2;eip=0x00036f; 	T(SAR(bx, cl));	// 49440 sar     bx, cl ;~ 1AE2:036F
cs=0x1ae2;eip=0x000371; 	T(MOV(ax, bx));	// 49441 mov     ax, bx ;~ 1AE2:0371
cs=0x1ae2;eip=0x000373; 	T(SHL(bx, 1));	// 49442 shl     bx, 1 ;~ 1AE2:0373
cs=0x1ae2;eip=0x000375; 	T(ADD(bx, ax));	// 49443 add     bx, ax ;~ 1AE2:0375
cs=0x1ae2;eip=0x000377; 	T(SHL(bx, 1));	// 49444 shl     bx, 1 ;~ 1AE2:0377
cs=0x1ae2;eip=0x000379; 	T(TEST(*(raddr(ds,bx-0x3AD0)), 1));	// 49445 test    byte ptr [bx-3AD0h], 1 ;~ 1AE2:0379
cs=0x1ae2;eip=0x00037e; 	R(JZ(loc_29783));	// 49446 jz      short loc_29783 ;~ 1AE2:037E
cs=0x1ae2;eip=0x000380; 	R(JMP(loc_29809));	// 49447 jmp     loc_29809 ;~ 1AE2:0380
loc_29783:
	// 7920 
cs=0x1ae2;eip=0x000383; 	T(MOV(al, *(raddr(ds,si+7))));	// 49451 mov     al, [si+7] ;~ 1AE2:0383
cs=0x1ae2;eip=0x000386; 	T(CBW);	// 49452 cbw ;~ 1AE2:0386
cs=0x1ae2;eip=0x000387; 	T(MOV(bx, ax));	// 49453 mov     bx, ax ;~ 1AE2:0387
cs=0x1ae2;eip=0x000389; 	T(TEST(*(raddr(ds,bx-0x3BA8)), 0x80));	// 49454 test    byte ptr [bx-3BA8h], 80h ;~ 1AE2:0389
cs=0x1ae2;eip=0x00038e; 	R(JNZ(loc_297d8));	// 49455 jnz     short loc_297D8 ;~ 1AE2:038E
cs=0x1ae2;eip=0x000390; 	T(TEST(*(dw*)(raddr(ss,bp+var_4)), 0x1FF));	// 49456 test    [bp+var_4], 1FFh ;~ 1AE2:0390
cs=0x1ae2;eip=0x000395; 	R(JNZ(loc_297d8));	// 49457 jnz     short loc_297D8 ;~ 1AE2:0395
cs=0x1ae2;eip=0x000397; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 49458 cmp     [bp+var_4], 0 ;~ 1AE2:0397
cs=0x1ae2;eip=0x00039b; 	R(JNZ(loc_297a0));	// 49459 jnz     short loc_297A0 ;~ 1AE2:039B
cs=0x1ae2;eip=0x00039d; 	R(JMP(loc_2986c));	// 49460 jmp     loc_2986C ;~ 1AE2:039D
loc_297a0:
	// 7921 
cs=0x1ae2;eip=0x0003a0; 	T(CBW);	// 49464 cbw ;~ 1AE2:03A0
cs=0x1ae2;eip=0x0003a1; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 49465 mov     [bp+var_A], ax ;~ 1AE2:03A1
loc_297a4:
	// 7922 
cs=0x1ae2;eip=0x0003a4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 49468 push    [bp+var_4] ;~ 1AE2:03A4
cs=0x1ae2;eip=0x0003a7; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 49469 push    [bp+arg_0] ;~ 1AE2:03A7
cs=0x1ae2;eip=0x0003aa; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 49470 push    [bp+var_A] ;~ 1AE2:03AA
cs=0x1ae2;eip=0x0003ad; 	R(CALLF(sub_2a39c,0));	// 49471 call    sub_2A39C ;~ 1AE2:03AD
cs=0x1ae2;eip=0x0003b2; 	T(ADD(sp, 6));	// 49472 add     sp, 6 ;~ 1AE2:03B2
cs=0x1ae2;eip=0x0003b5; 	T(MOV(di, ax));	// 49473 mov     di, ax ;~ 1AE2:03B5
cs=0x1ae2;eip=0x0003b7; 	T(OR(di, di));	// 49474 or      di, di ;~ 1AE2:03B7
cs=0x1ae2;eip=0x0003b9; 	R(JNZ(loc_297be));	// 49475 jnz     short loc_297BE ;~ 1AE2:03B9
cs=0x1ae2;eip=0x0003bb; 	R(JMP(loc_29901));	// 49476 jmp     loc_29901 ;~ 1AE2:03BB
loc_297be:
	// 7923 
cs=0x1ae2;eip=0x0003be; 	T(CMP(di, 0x0FFFF));	// 49480 cmp     di, 0FFFFh ;~ 1AE2:03BE
cs=0x1ae2;eip=0x0003c1; 	R(JNZ(loc_297c6));	// 49481 jnz     short loc_297C6 ;~ 1AE2:03C1
cs=0x1ae2;eip=0x0003c3; 	R(JMP(loc_29901));	// 49482 jmp     loc_29901 ;~ 1AE2:03C3
loc_297c6:
	// 7924 
cs=0x1ae2;eip=0x0003c6; 	X(SUB(*(dw*)(raddr(ss,bp+var_4)), di));	// 49486 sub     [bp+var_4], di ;~ 1AE2:03C6
cs=0x1ae2;eip=0x0003c9; 	X(ADD(*(dw*)(raddr(ss,bp+arg_0)), di));	// 49487 add     [bp+arg_0], di ;~ 1AE2:03C9
cs=0x1ae2;eip=0x0003cc; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 49488 cmp     [bp+var_4], 0 ;~ 1AE2:03CC
cs=0x1ae2;eip=0x0003d0; 	R(JNZ(loc_297d5));	// 49489 jnz     short loc_297D5 ;~ 1AE2:03D0
cs=0x1ae2;eip=0x0003d2; 	R(JMP(loc_2986c));	// 49490 jmp     loc_2986C ;~ 1AE2:03D2
loc_297d5:
	// 7925 
cs=0x1ae2;eip=0x0003d5; 	R(JMP(loc_297a4));	// 49494 jmp     short loc_297A4 ;~ 1AE2:03D5
loc_297d8:
	// 7926 
cs=0x1ae2;eip=0x0003d8; 	X(DEC(*(dw*)(raddr(ds,si+2))));	// 49500 dec     word ptr [si+2] ;~ 1AE2:03D8
cs=0x1ae2;eip=0x0003db; 	R(JS(loc_297e8));	// 49501 js      short loc_297E8 ;~ 1AE2:03DB
cs=0x1ae2;eip=0x0003dd; 	T(MOV(bx, *(dw*)(raddr(ds,si))));	// 49502 mov     bx, [si] ;~ 1AE2:03DD
cs=0x1ae2;eip=0x0003df; 	X(INC(*(dw*)(raddr(ds,si))));	// 49503 inc     word ptr [si] ;~ 1AE2:03DF
cs=0x1ae2;eip=0x0003e1; 	T(MOV(al, *(raddr(ds,bx))));	// 49504 mov     al, [bx] ;~ 1AE2:03E1
cs=0x1ae2;eip=0x0003e3; 	T(SUB(ah, ah));	// 49505 sub     ah, ah ;~ 1AE2:03E3
cs=0x1ae2;eip=0x0003e5; 	R(JMP(loc_297f1));	// 49506 jmp     short loc_297F1 ;~ 1AE2:03E5
loc_297e8:
	// 7927 
cs=0x1ae2;eip=0x0003e8; 	X(PUSH(si));	// 49511 push    si ;~ 1AE2:03E8
cs=0x1ae2;eip=0x0003e9; 	R(CALLF(sub_29f88,0));	// 49512 call    sub_29F88 ;~ 1AE2:03E9
cs=0x1ae2;eip=0x0003ee; 	T(ADD(sp, 2));	// 49513 add     sp, 2 ;~ 1AE2:03EE
loc_297f1:
	// 7928 
cs=0x1ae2;eip=0x0003f1; 	T(MOV(di, ax));	// 49516 mov     di, ax ;~ 1AE2:03F1
cs=0x1ae2;eip=0x0003f3; 	T(INC(ax));	// 49517 inc     ax ;~ 1AE2:03F3
cs=0x1ae2;eip=0x0003f4; 	R(JNZ(loc_297fc));	// 49518 jnz     short loc_297FC ;~ 1AE2:03F4
cs=0x1ae2;eip=0x0003f6; 	T(SUB(ax, ax));	// 49519 sub     ax, ax ;~ 1AE2:03F6
cs=0x1ae2;eip=0x0003f8; 	R(JMP(loc_29920));	// 49520 jmp     loc_29920 ;~ 1AE2:03F8
loc_297fc:
	// 7929 
cs=0x1ae2;eip=0x0003fc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 49525 mov     bx, [bp+arg_0] ;~ 1AE2:03FC
cs=0x1ae2;eip=0x0003ff; 	X(INC(*(dw*)(raddr(ss,bp+arg_0))));	// 49526 inc     [bp+arg_0] ;~ 1AE2:03FF
cs=0x1ae2;eip=0x000402; 	T(MOV(ax, di));	// 49527 mov     ax, di ;~ 1AE2:0402
cs=0x1ae2;eip=0x000404; 	X(MOV(*(raddr(ds,bx)), al));	// 49528 mov     [bx], al ;~ 1AE2:0404
cs=0x1ae2;eip=0x000406; 	X(DEC(*(dw*)(raddr(ss,bp+var_4))));	// 49529 dec     [bp+var_4] ;~ 1AE2:0406
loc_29809:
	// 7930 
cs=0x1ae2;eip=0x000409; 	T(TEST(*(raddr(ds,si+6)), 8));	// 49533 test    byte ptr [si+6], 8 ;~ 1AE2:0409
cs=0x1ae2;eip=0x00040d; 	R(JZ(loc_29812));	// 49534 jz      short loc_29812 ;~ 1AE2:040D
cs=0x1ae2;eip=0x00040f; 	R(JMP(loc_2989d));	// 49535 jmp     loc_2989D ;~ 1AE2:040F
loc_29812:
	// 7931 
cs=0x1ae2;eip=0x000412; 	T(MOV(bx, si));	// 49539 mov     bx, si ;~ 1AE2:0412
cs=0x1ae2;eip=0x000414; 	T(SUB(bx, 0x0C490));	// 49540 sub     bx, 0C490h ;~ 1AE2:0414
cs=0x1ae2;eip=0x000418; 	T(MOV(cl, 3));	// 49541 mov     cl, 3 ;~ 1AE2:0418
cs=0x1ae2;eip=0x00041a; 	T(SAR(bx, cl));	// 49542 sar     bx, cl ;~ 1AE2:041A
cs=0x1ae2;eip=0x00041c; 	T(MOV(ax, bx));	// 49543 mov     ax, bx ;~ 1AE2:041C
cs=0x1ae2;eip=0x00041e; 	T(SHL(bx, 1));	// 49544 shl     bx, 1 ;~ 1AE2:041E
cs=0x1ae2;eip=0x000420; 	T(ADD(bx, ax));	// 49545 add     bx, ax ;~ 1AE2:0420
cs=0x1ae2;eip=0x000422; 	T(SHL(bx, 1));	// 49546 shl     bx, 1 ;~ 1AE2:0422
cs=0x1ae2;eip=0x000424; 	T(TEST(*(raddr(ds,bx-0x3AD0)), 1));	// 49547 test    byte ptr [bx-3AD0h], 1 ;~ 1AE2:0424
cs=0x1ae2;eip=0x000429; 	R(JNZ(loc_2982e));	// 49548 jnz     short loc_2982E ;~ 1AE2:0429
cs=0x1ae2;eip=0x00042b; 	R(JMP(loc_298d8));	// 49549 jmp     loc_298D8 ;~ 1AE2:042B
loc_2982e:
	// 7932 
cs=0x1ae2;eip=0x00042e; 	R(JMP(loc_2989d));	// 49553 jmp     short loc_2989D ;~ 1AE2:042E
loc_29830:
	// 7933 
cs=0x1ae2;eip=0x000430; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0x200));	// 49557 cmp     [bp+var_4], 200h ;~ 1AE2:0430
cs=0x1ae2;eip=0x000435; 	R(JC(loc_29882));	// 49558 jb      short loc_29882 ;~ 1AE2:0435
cs=0x1ae2;eip=0x000437; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 49559 mov     ax, [bp+var_4] ;~ 1AE2:0437
cs=0x1ae2;eip=0x00043a; 	T(MOV(cl, 9));	// 49560 mov     cl, 9 ;~ 1AE2:043A
cs=0x1ae2;eip=0x00043c; 	T(SHR(ax, cl));	// 49561 shr     ax, cl ;~ 1AE2:043C
cs=0x1ae2;eip=0x00043e; 	T(SHL(ax, cl));	// 49562 shl     ax, cl ;~ 1AE2:043E
cs=0x1ae2;eip=0x000440; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 49563 mov     [bp+var_6], ax ;~ 1AE2:0440
cs=0x1ae2;eip=0x000443; 	X(PUSH(ax));	// 49564 push    ax ;~ 1AE2:0443
cs=0x1ae2;eip=0x000444; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 49565 push    [bp+arg_0] ;~ 1AE2:0444
cs=0x1ae2;eip=0x000447; 	T(MOV(al, *(raddr(ds,si+7))));	// 49566 mov     al, [si+7] ;~ 1AE2:0447
cs=0x1ae2;eip=0x00044a; 	T(CBW);	// 49567 cbw ;~ 1AE2:044A
cs=0x1ae2;eip=0x00044b; 	X(PUSH(ax));	// 49568 push    ax ;~ 1AE2:044B
cs=0x1ae2;eip=0x00044c; 	R(CALLF(sub_2a39c,0));	// 49569 call    sub_2A39C ;~ 1AE2:044C
cs=0x1ae2;eip=0x000451; 	T(ADD(sp, 6));	// 49570 add     sp, 6 ;~ 1AE2:0451
cs=0x1ae2;eip=0x000454; 	T(MOV(di, ax));	// 49571 mov     di, ax ;~ 1AE2:0454
cs=0x1ae2;eip=0x000456; 	T(OR(di, di));	// 49572 or      di, di ;~ 1AE2:0456
cs=0x1ae2;eip=0x000458; 	R(JZ(loc_2985f));	// 49573 jz      short loc_2985F ;~ 1AE2:0458
cs=0x1ae2;eip=0x00045a; 	T(CMP(di, 0x0FFFF));	// 49574 cmp     di, 0FFFFh ;~ 1AE2:045A
cs=0x1ae2;eip=0x00045d; 	R(JNZ(loc_2987a));	// 49575 jnz     short loc_2987A ;~ 1AE2:045D
loc_2985f:
	// 7934 
cs=0x1ae2;eip=0x00045f; 	T(CMP(di, 0x0FFFF));	// 49578 cmp     di, 0FFFFh ;~ 1AE2:045F
cs=0x1ae2;eip=0x000462; 	R(JNZ(loc_29867));	// 49579 jnz     short loc_29867 ;~ 1AE2:0462
cs=0x1ae2;eip=0x000464; 	R(JMP(loc_29909));	// 49580 jmp     loc_29909 ;~ 1AE2:0464
loc_29867:
	// 7935 
cs=0x1ae2;eip=0x000467; 	T(MOV(al, 0x10));	// 49585 mov     al, 10h ;~ 1AE2:0467
loc_29869:
	// 7936 
cs=0x1ae2;eip=0x000469; 	X(OR(*(raddr(ds,si+6)), al));	// 49588 or      [si+6], al ;~ 1AE2:0469
loc_2986c:
	// 7937 
cs=0x1ae2;eip=0x00046c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 49592 mov     ax, [bp+var_2] ;~ 1AE2:046C
cs=0x1ae2;eip=0x00046f; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_4))));	// 49593 sub     ax, [bp+var_4] ;~ 1AE2:046F
cs=0x1ae2;eip=0x000472; 	T(SUB(dx, dx));	// 49594 sub     dx, dx ;~ 1AE2:0472
cs=0x1ae2;eip=0x000474; 	X(DIV2(*(dw*)(raddr(ss,bp+arg_2))));	// 49595 div     [bp+arg_2] ;~ 1AE2:0474
cs=0x1ae2;eip=0x000477; 	R(JMP(loc_29920));	// 49596 jmp     loc_29920 ;~ 1AE2:0477
loc_2987a:
	// 7938 
cs=0x1ae2;eip=0x00047a; 	X(SUB(*(dw*)(raddr(ss,bp+var_4)), di));	// 49600 sub     [bp+var_4], di ;~ 1AE2:047A
cs=0x1ae2;eip=0x00047d; 	X(ADD(*(dw*)(raddr(ss,bp+arg_0)), di));	// 49601 add     [bp+arg_0], di ;~ 1AE2:047D
cs=0x1ae2;eip=0x000480; 	R(JMP(loc_2989d));	// 49602 jmp     short loc_2989D ;~ 1AE2:0480
loc_29882:
	// 7939 
cs=0x1ae2;eip=0x000482; 	X(PUSH(si));	// 49606 push    si ;~ 1AE2:0482
cs=0x1ae2;eip=0x000483; 	R(CALLF(sub_29f88,0));	// 49607 call    sub_29F88 ;~ 1AE2:0483
cs=0x1ae2;eip=0x000488; 	T(ADD(sp, 2));	// 49608 add     sp, 2 ;~ 1AE2:0488
cs=0x1ae2;eip=0x00048b; 	T(MOV(di, ax));	// 49609 mov     di, ax ;~ 1AE2:048B
cs=0x1ae2;eip=0x00048d; 	T(INC(ax));	// 49610 inc     ax ;~ 1AE2:048D
cs=0x1ae2;eip=0x00048e; 	R(JZ(loc_2986c));	// 49611 jz      short loc_2986C ;~ 1AE2:048E
cs=0x1ae2;eip=0x000490; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 49612 mov     bx, [bp+arg_0] ;~ 1AE2:0490
cs=0x1ae2;eip=0x000493; 	T(MOV(ax, di));	// 49613 mov     ax, di ;~ 1AE2:0493
cs=0x1ae2;eip=0x000495; 	X(MOV(*(raddr(ds,bx)), al));	// 49614 mov     [bx], al ;~ 1AE2:0495
cs=0x1ae2;eip=0x000497; 	X(INC(*(dw*)(raddr(ss,bp+arg_0))));	// 49615 inc     [bp+arg_0] ;~ 1AE2:0497
cs=0x1ae2;eip=0x00049a; 	X(DEC(*(dw*)(raddr(ss,bp+var_4))));	// 49616 dec     [bp+var_4] ;~ 1AE2:049A
loc_2989d:
	// 7940 
cs=0x1ae2;eip=0x00049d; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 49620 cmp     [bp+var_4], 0 ;~ 1AE2:049D
cs=0x1ae2;eip=0x0004a1; 	R(JZ(loc_2986c));	// 49621 jz      short loc_2986C ;~ 1AE2:04A1
cs=0x1ae2;eip=0x0004a3; 	T(CMP(*(dw*)(raddr(ds,si+2)), 0));	// 49622 cmp     word ptr [si+2], 0 ;~ 1AE2:04A3
cs=0x1ae2;eip=0x0004a7; 	R(JZ(loc_29830));	// 49623 jz      short loc_29830 ;~ 1AE2:04A7
cs=0x1ae2;eip=0x0004a9; 	T(MOV(ax, *(dw*)(raddr(ds,si+2))));	// 49624 mov     ax, [si+2] ;~ 1AE2:04A9
cs=0x1ae2;eip=0x0004ac; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_4))));	// 49625 sub     ax, [bp+var_4] ;~ 1AE2:04AC
cs=0x1ae2;eip=0x0004af; 	T(SBB(cx, cx));	// 49626 sbb     cx, cx ;~ 1AE2:04AF
cs=0x1ae2;eip=0x0004b1; 	T(AND(ax, cx));	// 49627 and     ax, cx ;~ 1AE2:04B1
cs=0x1ae2;eip=0x0004b3; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_4))));	// 49628 add     ax, [bp+var_4] ;~ 1AE2:04B3
cs=0x1ae2;eip=0x0004b6; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 49629 mov     [bp+var_6], ax ;~ 1AE2:04B6
cs=0x1ae2;eip=0x0004b9; 	X(PUSH(ax));	// 49630 push    ax ;~ 1AE2:04B9
cs=0x1ae2;eip=0x0004ba; 	X(PUSH(*(dw*)(raddr(ds,si))));	// 49631 push    word ptr [si] ;~ 1AE2:04BA
cs=0x1ae2;eip=0x0004bc; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 49632 push    [bp+arg_0] ;~ 1AE2:04BC
cs=0x1ae2;eip=0x0004bf; 	R(CALLF(sub_2a8dc,0));	// 49633 call    sub_2A8DC ;~ 1AE2:04BF
cs=0x1ae2;eip=0x0004c4; 	T(ADD(sp, 6));	// 49634 add     sp, 6 ;~ 1AE2:04C4
cs=0x1ae2;eip=0x0004c7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 49635 mov     ax, [bp+var_6] ;~ 1AE2:04C7
cs=0x1ae2;eip=0x0004ca; 	X(ADD(*(dw*)(raddr(ds,si)), ax));	// 49636 add     [si], ax ;~ 1AE2:04CA
cs=0x1ae2;eip=0x0004cc; 	X(ADD(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 49637 add     [bp+arg_0], ax ;~ 1AE2:04CC
cs=0x1ae2;eip=0x0004cf; 	X(SUB(*(dw*)(raddr(ss,bp+var_4)), ax));	// 49638 sub     [bp+var_4], ax ;~ 1AE2:04CF
cs=0x1ae2;eip=0x0004d2; 	X(SUB(*(dw*)(raddr(ds,si+2)), ax));	// 49639 sub     [si+2], ax ;~ 1AE2:04D2
cs=0x1ae2;eip=0x0004d5; 	R(JMP(loc_2989d));	// 49640 jmp     short loc_2989D ;~ 1AE2:04D5
loc_298d8:
	// 7941 
cs=0x1ae2;eip=0x0004d8; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 49645 cmp     [bp+var_4], 0 ;~ 1AE2:04D8
cs=0x1ae2;eip=0x0004dc; 	R(JZ(loc_2986c));	// 49646 jz      short loc_2986C ;~ 1AE2:04DC
cs=0x1ae2;eip=0x0004de; 	T(MOV(al, *(raddr(ds,si+7))));	// 49647 mov     al, [si+7] ;~ 1AE2:04DE
cs=0x1ae2;eip=0x0004e1; 	T(CBW);	// 49648 cbw ;~ 1AE2:04E1
cs=0x1ae2;eip=0x0004e2; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 49649 mov     [bp+var_A], ax ;~ 1AE2:04E2
loc_298e5:
	// 7942 
cs=0x1ae2;eip=0x0004e5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 49652 push    [bp+var_4] ;~ 1AE2:04E5
cs=0x1ae2;eip=0x0004e8; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 49653 push    [bp+arg_0] ;~ 1AE2:04E8
cs=0x1ae2;eip=0x0004eb; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 49654 push    [bp+var_A] ;~ 1AE2:04EB
cs=0x1ae2;eip=0x0004ee; 	R(CALLF(sub_2a39c,0));	// 49655 call    sub_2A39C ;~ 1AE2:04EE
cs=0x1ae2;eip=0x0004f3; 	T(ADD(sp, 6));	// 49656 add     sp, 6 ;~ 1AE2:04F3
cs=0x1ae2;eip=0x0004f6; 	T(MOV(di, ax));	// 49657 mov     di, ax ;~ 1AE2:04F6
cs=0x1ae2;eip=0x0004f8; 	T(OR(di, di));	// 49658 or      di, di ;~ 1AE2:04F8
cs=0x1ae2;eip=0x0004fa; 	R(JZ(loc_29901));	// 49659 jz      short loc_29901 ;~ 1AE2:04FA
cs=0x1ae2;eip=0x0004fc; 	T(CMP(di, 0x0FFFF));	// 49660 cmp     di, 0FFFFh ;~ 1AE2:04FC
cs=0x1ae2;eip=0x0004ff; 	R(JNZ(loc_2990e));	// 49661 jnz     short loc_2990E ;~ 1AE2:04FF
loc_29901:
	// 7943 
cs=0x1ae2;eip=0x000501; 	T(CMP(di, 0x0FFFF));	// 49665 cmp     di, 0FFFFh ;~ 1AE2:0501
cs=0x1ae2;eip=0x000504; 	R(JZ(loc_29909));	// 49666 jz      short loc_29909 ;~ 1AE2:0504
cs=0x1ae2;eip=0x000506; 	R(JMP(loc_29867));	// 49667 jmp     loc_29867 ;~ 1AE2:0506
loc_29909:
	// 7944 
cs=0x1ae2;eip=0x000509; 	T(MOV(al, 0x20));	// 49672 mov     al, 20h ; ' ' ;~ 1AE2:0509
cs=0x1ae2;eip=0x00050b; 	R(JMP(loc_29869));	// 49673 jmp     loc_29869 ;~ 1AE2:050B
loc_2990e:
	// 7945 
cs=0x1ae2;eip=0x00050e; 	X(SUB(*(dw*)(raddr(ss,bp+var_4)), di));	// 49677 sub     [bp+var_4], di ;~ 1AE2:050E
cs=0x1ae2;eip=0x000511; 	X(ADD(*(dw*)(raddr(ss,bp+arg_0)), di));	// 49678 add     [bp+arg_0], di ;~ 1AE2:0511
cs=0x1ae2;eip=0x000514; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 49679 cmp     [bp+var_4], 0 ;~ 1AE2:0514
cs=0x1ae2;eip=0x000518; 	R(JNZ(loc_2991d));	// 49680 jnz     short loc_2991D ;~ 1AE2:0518
cs=0x1ae2;eip=0x00051a; 	R(JMP(loc_2986c));	// 49681 jmp     loc_2986C ;~ 1AE2:051A
loc_2991d:
	// 7946 
cs=0x1ae2;eip=0x00051d; 	R(JMP(loc_298e5));	// 49685 jmp     short loc_298E5 ;~ 1AE2:051D
loc_29920:
	// 7947 
cs=0x1ae2;eip=0x000520; 	X(POP(si));	// 49691 pop     si ;~ 1AE2:0520
cs=0x1ae2;eip=0x000521; 	X(POP(di));	// 49692 pop     di ;~ 1AE2:0521
cs=0x1ae2;eip=0x000522; 	T(MOV(sp, bp));	// 49693 mov     sp, bp ;~ 1AE2:0522
cs=0x1ae2;eip=0x000524; 	X(POP(bp));	// 49694 pop     bp ;~ 1AE2:0524
cs=0x1ae2;eip=0x000525; 	R(RETF(0));	// 49695 retf ;~ 1AE2:0525
sub_29926:
	// 49703 
#undef var_8
#define var_8 -8
	// 49706 var_8           = word ptr -8 ;~ 1AE2:0526
#undef var_6
#define var_6 -6
	// 49707 var_6           = word ptr -6 ;~ 1AE2:0526
#undef var_4
#define var_4 -4
	// 49708 var_4           = word ptr -4 ;~ 1AE2:0526
#undef var_2
#define var_2 -2
	// 49709 var_2           = word ptr -2 ;~ 1AE2:0526
#undef arg_0
#define arg_0 6
	// 49710 arg_0           = word ptr  6 ;~ 1AE2:0526
#undef arg_2
#define arg_2 8
	// 49711 arg_2           = word ptr  8 ;~ 1AE2:0526
#undef arg_4
#define arg_4 0x0A
	// 49712 arg_4           = word ptr  0Ah ;~ 1AE2:0526
#undef arg_6
#define arg_6 0x0C
	// 49713 arg_6           = word ptr  0Ch ;~ 1AE2:0526
ret_1ae2_526:
	// 7948 
cs=0x1ae2;eip=0x000526; 	X(PUSH(bp));	// 49715 push    bp ;~ 1AE2:0526
cs=0x1ae2;eip=0x000527; 	T(MOV(bp, sp));	// 49716 mov     bp, sp ;~ 1AE2:0527
cs=0x1ae2;eip=0x000529; 	T(SUB(sp, 8));	// 49717 sub     sp, 8 ;~ 1AE2:0529
cs=0x1ae2;eip=0x00052c; 	X(PUSH(di));	// 49718 push    di ;~ 1AE2:052C
cs=0x1ae2;eip=0x00052d; 	X(PUSH(si));	// 49719 push    si ;~ 1AE2:052D
cs=0x1ae2;eip=0x00052e; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 49720 mov     si, [bp+arg_0] ;~ 1AE2:052E
cs=0x1ae2;eip=0x000531; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_6))));	// 49721 mov     di, [bp+arg_6] ;~ 1AE2:0531
cs=0x1ae2;eip=0x000534; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49722 mov     ax, [bp+arg_2] ;~ 1AE2:0534
cs=0x1ae2;eip=0x000537; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_4))));	// 49723 mul     [bp+arg_4] ;~ 1AE2:0537
cs=0x1ae2;eip=0x00053a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 49724 mov     [bp+var_2], ax ;~ 1AE2:053A
cs=0x1ae2;eip=0x00053d; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 49725 mov     [bp+var_4], ax ;~ 1AE2:053D
cs=0x1ae2;eip=0x000540; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 49726 cmp     [bp+arg_2], 0 ;~ 1AE2:0540
cs=0x1ae2;eip=0x000544; 	R(JZ(loc_2994c));	// 49727 jz      short loc_2994C ;~ 1AE2:0544
cs=0x1ae2;eip=0x000546; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0));	// 49728 cmp     [bp+arg_4], 0 ;~ 1AE2:0546
cs=0x1ae2;eip=0x00054a; 	R(JNZ(loc_29952));	// 49729 jnz     short loc_29952 ;~ 1AE2:054A
loc_2994c:
	// 7949 
cs=0x1ae2;eip=0x00054c; 	T(SUB(ax, ax));	// 49733 sub     ax, ax ;~ 1AE2:054C
cs=0x1ae2;eip=0x00054e; 	R(JMP(loc_29a66));	// 49734 jmp     loc_29A66 ;~ 1AE2:054E
loc_29952:
	// 7950 
cs=0x1ae2;eip=0x000552; 	T(TEST(*(raddr(ds,di+6)), 0x0C));	// 49739 test    byte ptr [di+6], 0Ch ;~ 1AE2:0552
cs=0x1ae2;eip=0x000556; 	R(JNZ(loc_299c1));	// 49740 jnz     short loc_299C1 ;~ 1AE2:0556
cs=0x1ae2;eip=0x000558; 	T(MOV(bx, di));	// 49741 mov     bx, di ;~ 1AE2:0558
cs=0x1ae2;eip=0x00055a; 	T(SUB(bx, 0x0C490));	// 49742 sub     bx, 0C490h ;~ 1AE2:055A
cs=0x1ae2;eip=0x00055e; 	T(MOV(cl, 3));	// 49743 mov     cl, 3 ;~ 1AE2:055E
cs=0x1ae2;eip=0x000560; 	T(SAR(bx, cl));	// 49744 sar     bx, cl ;~ 1AE2:0560
cs=0x1ae2;eip=0x000562; 	T(MOV(ax, bx));	// 49745 mov     ax, bx ;~ 1AE2:0562
cs=0x1ae2;eip=0x000564; 	T(SHL(bx, 1));	// 49746 shl     bx, 1 ;~ 1AE2:0564
cs=0x1ae2;eip=0x000566; 	T(ADD(bx, ax));	// 49747 add     bx, ax ;~ 1AE2:0566
cs=0x1ae2;eip=0x000568; 	T(SHL(bx, 1));	// 49748 shl     bx, 1 ;~ 1AE2:0568
cs=0x1ae2;eip=0x00056a; 	T(TEST(*(raddr(ds,bx-0x3AD0)), 1));	// 49749 test    byte ptr [bx-3AD0h], 1 ;~ 1AE2:056A
cs=0x1ae2;eip=0x00056f; 	R(JNZ(loc_299c1));	// 49750 jnz     short loc_299C1 ;~ 1AE2:056F
cs=0x1ae2;eip=0x000571; 	T(TEST(*(dw*)(raddr(ss,bp+var_4)), 0x1FF));	// 49751 test    [bp+var_4], 1FFh ;~ 1AE2:0571
cs=0x1ae2;eip=0x000576; 	R(JNZ(loc_2999a));	// 49752 jnz     short loc_2999A ;~ 1AE2:0576
cs=0x1ae2;eip=0x000578; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 49753 push    [bp+var_4] ;~ 1AE2:0578
cs=0x1ae2;eip=0x00057b; 	X(PUSH(si));	// 49754 push    si ;~ 1AE2:057B
cs=0x1ae2;eip=0x00057c; 	T(MOV(al, *(raddr(ds,di+7))));	// 49755 mov     al, [di+7] ;~ 1AE2:057C
cs=0x1ae2;eip=0x00057f; 	T(CBW);	// 49756 cbw ;~ 1AE2:057F
cs=0x1ae2;eip=0x000580; 	X(PUSH(ax));	// 49757 push    ax ;~ 1AE2:0580
cs=0x1ae2;eip=0x000581; 	R(CALLF(sub_2a47a,0));	// 49758 call    sub_2A47A ;~ 1AE2:0581
cs=0x1ae2;eip=0x000586; 	T(ADD(sp, 6));	// 49759 add     sp, 6 ;~ 1AE2:0586
cs=0x1ae2;eip=0x000589; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 49760 mov     [bp+var_8], ax ;~ 1AE2:0589
cs=0x1ae2;eip=0x00058c; 	T(CMP(ax, 0x0FFFF));	// 49761 cmp     ax, 0FFFFh ;~ 1AE2:058C
cs=0x1ae2;eip=0x00058f; 	R(JZ(loc_2994c));	// 49762 jz      short loc_2994C ;~ 1AE2:058F
loc_29991:
	// 7951 
cs=0x1ae2;eip=0x000591; 	T(SUB(dx, dx));	// 49765 sub     dx, dx ;~ 1AE2:0591
cs=0x1ae2;eip=0x000593; 	X(DIV2(*(dw*)(raddr(ss,bp+arg_2))));	// 49766 div     [bp+arg_2] ;~ 1AE2:0593
cs=0x1ae2;eip=0x000596; 	R(JMP(loc_29a66));	// 49767 jmp     loc_29A66 ;~ 1AE2:0596
loc_2999a:
	// 7952 
cs=0x1ae2;eip=0x00059a; 	X(DEC(*(dw*)(raddr(ds,di+2))));	// 49772 dec     word ptr [di+2] ;~ 1AE2:059A
cs=0x1ae2;eip=0x00059d; 	R(JS(loc_299aa));	// 49773 js      short loc_299AA ;~ 1AE2:059D
cs=0x1ae2;eip=0x00059f; 	T(MOV(al, *(raddr(ds,si))));	// 49774 mov     al, [si] ;~ 1AE2:059F
cs=0x1ae2;eip=0x0005a1; 	T(MOV(bx, *(dw*)(raddr(ds,di))));	// 49775 mov     bx, [di] ;~ 1AE2:05A1
cs=0x1ae2;eip=0x0005a3; 	X(INC(*(dw*)(raddr(ds,di))));	// 49776 inc     word ptr [di] ;~ 1AE2:05A3
cs=0x1ae2;eip=0x0005a5; 	X(MOV(*(raddr(ds,bx)), al));	// 49777 mov     [bx], al ;~ 1AE2:05A5
cs=0x1ae2;eip=0x0005a7; 	R(JMP(loc_299b7));	// 49778 jmp     short loc_299B7 ;~ 1AE2:05A7
loc_299aa:
	// 7953 
cs=0x1ae2;eip=0x0005aa; 	X(PUSH(di));	// 49783 push    di ;~ 1AE2:05AA
cs=0x1ae2;eip=0x0005ab; 	T(MOV(al, *(raddr(ds,si))));	// 49784 mov     al, [si] ;~ 1AE2:05AB
cs=0x1ae2;eip=0x0005ad; 	T(CBW);	// 49785 cbw ;~ 1AE2:05AD
cs=0x1ae2;eip=0x0005ae; 	X(PUSH(ax));	// 49786 push    ax ;~ 1AE2:05AE
cs=0x1ae2;eip=0x0005af; 	R(CALLF(sub_2a04a,0));	// 49787 call    sub_2A04A ;~ 1AE2:05AF
cs=0x1ae2;eip=0x0005b4; 	T(ADD(sp, 4));	// 49788 add     sp, 4 ;~ 1AE2:05B4
loc_299b7:
	// 7954 
cs=0x1ae2;eip=0x0005b7; 	T(TEST(*(raddr(ds,di+6)), 0x20));	// 49791 test    byte ptr [di+6], 20h ;~ 1AE2:05B7
cs=0x1ae2;eip=0x0005bb; 	R(JNZ(loc_2994c));	// 49792 jnz     short loc_2994C ;~ 1AE2:05BB
cs=0x1ae2;eip=0x0005bd; 	T(INC(si));	// 49793 inc     si ;~ 1AE2:05BD
cs=0x1ae2;eip=0x0005be; 	X(DEC(*(dw*)(raddr(ss,bp+var_4))));	// 49794 dec     [bp+var_4] ;~ 1AE2:05BE
loc_299c1:
	// 7955 
cs=0x1ae2;eip=0x0005c1; 	T(TEST(*(raddr(ds,di+6)), 8));	// 49798 test    byte ptr [di+6], 8 ;~ 1AE2:05C1
cs=0x1ae2;eip=0x0005c5; 	R(JNZ(loc_29a09));	// 49799 jnz     short loc_29A09 ;~ 1AE2:05C5
cs=0x1ae2;eip=0x0005c7; 	T(MOV(bx, di));	// 49800 mov     bx, di ;~ 1AE2:05C7
cs=0x1ae2;eip=0x0005c9; 	T(SUB(bx, 0x0C490));	// 49801 sub     bx, 0C490h ;~ 1AE2:05C9
cs=0x1ae2;eip=0x0005cd; 	T(MOV(cl, 3));	// 49802 mov     cl, 3 ;~ 1AE2:05CD
cs=0x1ae2;eip=0x0005cf; 	T(SAR(bx, cl));	// 49803 sar     bx, cl ;~ 1AE2:05CF
cs=0x1ae2;eip=0x0005d1; 	T(MOV(ax, bx));	// 49804 mov     ax, bx ;~ 1AE2:05D1
cs=0x1ae2;eip=0x0005d3; 	T(SHL(bx, 1));	// 49805 shl     bx, 1 ;~ 1AE2:05D3
cs=0x1ae2;eip=0x0005d5; 	T(ADD(bx, ax));	// 49806 add     bx, ax ;~ 1AE2:05D5
cs=0x1ae2;eip=0x0005d7; 	T(SHL(bx, 1));	// 49807 shl     bx, 1 ;~ 1AE2:05D7
cs=0x1ae2;eip=0x0005d9; 	T(TEST(*(raddr(ds,bx-0x3AD0)), 1));	// 49808 test    byte ptr [bx-3AD0h], 1 ;~ 1AE2:05D9
cs=0x1ae2;eip=0x0005de; 	R(JZ(loc_29a40));	// 49809 jz      short loc_29A40 ;~ 1AE2:05DE
cs=0x1ae2;eip=0x0005e0; 	R(JMP(loc_29a09));	// 49810 jmp     short loc_29A09 ;~ 1AE2:05E0
loc_299e2:
	// 7956 
cs=0x1ae2;eip=0x0005e2; 	X(DEC(*(dw*)(raddr(ds,di+2))));	// 49814 dec     word ptr [di+2] ;~ 1AE2:05E2
cs=0x1ae2;eip=0x0005e5; 	R(JS(loc_299f2));	// 49815 js      short loc_299F2 ;~ 1AE2:05E5
cs=0x1ae2;eip=0x0005e7; 	T(MOV(al, *(raddr(ds,si))));	// 49816 mov     al, [si] ;~ 1AE2:05E7
cs=0x1ae2;eip=0x0005e9; 	T(MOV(bx, *(dw*)(raddr(ds,di))));	// 49817 mov     bx, [di] ;~ 1AE2:05E9
cs=0x1ae2;eip=0x0005eb; 	X(INC(*(dw*)(raddr(ds,di))));	// 49818 inc     word ptr [di] ;~ 1AE2:05EB
cs=0x1ae2;eip=0x0005ed; 	X(MOV(*(raddr(ds,bx)), al));	// 49819 mov     [bx], al ;~ 1AE2:05ED
cs=0x1ae2;eip=0x0005ef; 	R(JMP(loc_299ff));	// 49820 jmp     short loc_299FF ;~ 1AE2:05EF
loc_299f2:
	// 7957 
cs=0x1ae2;eip=0x0005f2; 	X(PUSH(di));	// 49825 push    di ;~ 1AE2:05F2
cs=0x1ae2;eip=0x0005f3; 	T(MOV(al, *(raddr(ds,si))));	// 49826 mov     al, [si] ;~ 1AE2:05F3
cs=0x1ae2;eip=0x0005f5; 	T(CBW);	// 49827 cbw ;~ 1AE2:05F5
cs=0x1ae2;eip=0x0005f6; 	X(PUSH(ax));	// 49828 push    ax ;~ 1AE2:05F6
cs=0x1ae2;eip=0x0005f7; 	R(CALLF(sub_2a04a,0));	// 49829 call    sub_2A04A ;~ 1AE2:05F7
cs=0x1ae2;eip=0x0005fc; 	T(ADD(sp, 4));	// 49830 add     sp, 4 ;~ 1AE2:05FC
loc_299ff:
	// 7958 
cs=0x1ae2;eip=0x0005ff; 	T(TEST(*(raddr(ds,di+6)), 0x20));	// 49833 test    byte ptr [di+6], 20h ;~ 1AE2:05FF
cs=0x1ae2;eip=0x000603; 	R(JNZ(loc_29a5c));	// 49834 jnz     short loc_29A5C ;~ 1AE2:0603
cs=0x1ae2;eip=0x000605; 	T(INC(si));	// 49835 inc     si ;~ 1AE2:0605
cs=0x1ae2;eip=0x000606; 	X(DEC(*(dw*)(raddr(ss,bp+var_4))));	// 49836 dec     [bp+var_4] ;~ 1AE2:0606
loc_29a09:
	// 7959 
cs=0x1ae2;eip=0x000609; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 49840 cmp     [bp+var_4], 0 ;~ 1AE2:0609
cs=0x1ae2;eip=0x00060d; 	R(JZ(loc_29a5c));	// 49841 jz      short loc_29A5C ;~ 1AE2:060D
cs=0x1ae2;eip=0x00060f; 	T(CMP(*(dw*)(raddr(ds,di+2)), 0));	// 49842 cmp     word ptr [di+2], 0 ;~ 1AE2:060F
cs=0x1ae2;eip=0x000613; 	R(JZ(loc_299e2));	// 49843 jz      short loc_299E2 ;~ 1AE2:0613
cs=0x1ae2;eip=0x000615; 	T(MOV(ax, *(dw*)(raddr(ds,di+2))));	// 49844 mov     ax, [di+2] ;~ 1AE2:0615
cs=0x1ae2;eip=0x000618; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_4))));	// 49845 sub     ax, [bp+var_4] ;~ 1AE2:0618
cs=0x1ae2;eip=0x00061b; 	T(SBB(cx, cx));	// 49846 sbb     cx, cx ;~ 1AE2:061B
cs=0x1ae2;eip=0x00061d; 	T(AND(ax, cx));	// 49847 and     ax, cx ;~ 1AE2:061D
cs=0x1ae2;eip=0x00061f; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_4))));	// 49848 add     ax, [bp+var_4] ;~ 1AE2:061F
cs=0x1ae2;eip=0x000622; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 49849 mov     [bp+var_6], ax ;~ 1AE2:0622
cs=0x1ae2;eip=0x000625; 	X(PUSH(ax));	// 49850 push    ax ;~ 1AE2:0625
cs=0x1ae2;eip=0x000626; 	X(PUSH(si));	// 49851 push    si ;~ 1AE2:0626
cs=0x1ae2;eip=0x000627; 	X(PUSH(*(dw*)(raddr(ds,di))));	// 49852 push    word ptr [di] ;~ 1AE2:0627
cs=0x1ae2;eip=0x000629; 	R(CALLF(sub_2a8dc,0));	// 49853 call    sub_2A8DC ;~ 1AE2:0629
cs=0x1ae2;eip=0x00062e; 	T(ADD(sp, 6));	// 49854 add     sp, 6 ;~ 1AE2:062E
cs=0x1ae2;eip=0x000631; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 49855 mov     ax, [bp+var_6] ;~ 1AE2:0631
cs=0x1ae2;eip=0x000634; 	X(ADD(*(dw*)(raddr(ds,di)), ax));	// 49856 add     [di], ax ;~ 1AE2:0634
cs=0x1ae2;eip=0x000636; 	T(ADD(si, ax));	// 49857 add     si, ax ;~ 1AE2:0636
cs=0x1ae2;eip=0x000638; 	X(SUB(*(dw*)(raddr(ss,bp+var_4)), ax));	// 49858 sub     [bp+var_4], ax ;~ 1AE2:0638
cs=0x1ae2;eip=0x00063b; 	X(SUB(*(dw*)(raddr(ds,di+2)), ax));	// 49859 sub     [di+2], ax ;~ 1AE2:063B
cs=0x1ae2;eip=0x00063e; 	R(JMP(loc_29a09));	// 49860 jmp     short loc_29A09 ;~ 1AE2:063E
loc_29a40:
	// 7960 
cs=0x1ae2;eip=0x000640; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 49864 push    [bp+var_4] ;~ 1AE2:0640
cs=0x1ae2;eip=0x000643; 	X(PUSH(si));	// 49865 push    si ;~ 1AE2:0643
cs=0x1ae2;eip=0x000644; 	T(MOV(al, *(raddr(ds,di+7))));	// 49866 mov     al, [di+7] ;~ 1AE2:0644
cs=0x1ae2;eip=0x000647; 	T(CBW);	// 49867 cbw ;~ 1AE2:0647
cs=0x1ae2;eip=0x000648; 	X(PUSH(ax));	// 49868 push    ax ;~ 1AE2:0648
cs=0x1ae2;eip=0x000649; 	R(CALLF(sub_2a47a,0));	// 49869 call    sub_2A47A ;~ 1AE2:0649
cs=0x1ae2;eip=0x00064e; 	T(ADD(sp, 6));	// 49870 add     sp, 6 ;~ 1AE2:064E
cs=0x1ae2;eip=0x000651; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 49871 mov     [bp+var_8], ax ;~ 1AE2:0651
cs=0x1ae2;eip=0x000654; 	T(CMP(ax, 0x0FFFF));	// 49872 cmp     ax, 0FFFFh ;~ 1AE2:0654
cs=0x1ae2;eip=0x000657; 	R(JZ(loc_29a5c));	// 49873 jz      short loc_29A5C ;~ 1AE2:0657
cs=0x1ae2;eip=0x000659; 	X(SUB(*(dw*)(raddr(ss,bp+var_4)), ax));	// 49874 sub     [bp+var_4], ax ;~ 1AE2:0659
loc_29a5c:
	// 7961 
cs=0x1ae2;eip=0x00065c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 49878 mov     ax, [bp+var_2] ;~ 1AE2:065C
cs=0x1ae2;eip=0x00065f; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_4))));	// 49879 sub     ax, [bp+var_4] ;~ 1AE2:065F
cs=0x1ae2;eip=0x000662; 	R(JMP(loc_29991));	// 49880 jmp     loc_29991 ;~ 1AE2:0662
loc_29a66:
	// 7962 
cs=0x1ae2;eip=0x000666; 	X(POP(si));	// 49886 pop     si ;~ 1AE2:0666
cs=0x1ae2;eip=0x000667; 	X(POP(di));	// 49887 pop     di ;~ 1AE2:0667
cs=0x1ae2;eip=0x000668; 	T(MOV(sp, bp));	// 49888 mov     sp, bp ;~ 1AE2:0668
cs=0x1ae2;eip=0x00066a; 	X(POP(bp));	// 49889 pop     bp ;~ 1AE2:066A
cs=0x1ae2;eip=0x00066b; 	R(RETF(0));	// 49890 retf ;~ 1AE2:066B
sub_29a6c:
	// 49898 
#undef arg_0
#define arg_0 6
	// 49901 arg_0           = dword ptr  6 ;~ 1AE2:066C
ret_1ae2_66c:
	// 7963 
cs=0x1ae2;eip=0x00066c; 	X(PUSH(bp));	// 49903 push    bp ;~ 1AE2:066C
cs=0x1ae2;eip=0x00066d; 	T(MOV(bp, sp));	// 49904 mov     bp, sp ;~ 1AE2:066D
cs=0x1ae2;eip=0x00066f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 49905 les     bx, [bp+arg_0] ;~ 1AE2:066F
cs=0x1ae2;eip=0x000672; 	T(MOV(ax, es));	// 49907 mov     ax, es ;~ 1AE2:0672
cs=0x1ae2;eip=0x000674; 	T(OR(ax, bx));	// 49908 or      ax, bx ;~ 1AE2:0674
cs=0x1ae2;eip=0x000676; 	R(JZ(loc_29a7d));	// 49909 jz      short loc_29A7D ;~ 1AE2:0676
cs=0x1ae2;eip=0x000678; 	X(OR(*(raddr(es,bx-2)), 1));	// 49910 or      byte ptr es:[bx-2], 1 ;~ 1AE2:0678
loc_29a7d:
	// 7964 
cs=0x1ae2;eip=0x00067d; 	T(MOV(sp, bp));	// 49913 mov     sp, bp ;~ 1AE2:067D
cs=0x1ae2;eip=0x00067f; 	X(POP(bp));	// 49914 pop     bp ;~ 1AE2:067F
cs=0x1ae2;eip=0x000680; 	R(RETF(0));	// 49915 retf ;~ 1AE2:0680
sub_29a81:
	// 49923 
#undef arg_0
#define arg_0 6
	// 49926 arg_0           = word ptr  6 ;~ 1AE2:0681
ret_1ae2_681:
	// 7965 
cs=0x1ae2;eip=0x000681; 	X(PUSH(bp));	// 49928 push    bp ;~ 1AE2:0681
cs=0x1ae2;eip=0x000682; 	T(MOV(bp, sp));	// 49929 mov     bp, sp ;~ 1AE2:0682
cs=0x1ae2;eip=0x000684; 	T(SUB(sp, 2));	// 49930 sub     sp, 2 ;~ 1AE2:0684
cs=0x1ae2;eip=0x000687; 	X(PUSH(si));	// 49931 push    si ;~ 1AE2:0687
cs=0x1ae2;eip=0x000688; 	X(PUSH(di));	// 49932 push    di ;~ 1AE2:0688
cs=0x1ae2;eip=0x000689; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 49933 mov     ax, [bp+arg_0] ;~ 1AE2:0689
cs=0x1ae2;eip=0x00068c; 	T(CMP(ax, 0x0FFF1));	// 49934 cmp     ax, 0FFF1h ;~ 1AE2:068C
cs=0x1ae2;eip=0x00068f; 	R(JNC(loc_29aaf));	// 49935 jnb     short loc_29AAF ;~ 1AE2:068F
cs=0x1ae2;eip=0x000691; 	T(CMP(word_383f4, 0));	// 49936 cmp     word_383F4, 0 ;~ 1AE2:0691
cs=0x1ae2;eip=0x000696; 	R(JNZ(loc_29aa0));	// 49937 jnz     short loc_29AA0 ;~ 1AE2:0696
cs=0x1ae2;eip=0x000698; 	R(CALL(sub_29ac0,0));	// 49938 call    sub_29AC0 ;~ 1AE2:0698
cs=0x1ae2;eip=0x00069b; 	R(JZ(loc_29aaf));	// 49939 jz      short loc_29AAF ;~ 1AE2:069B
cs=0x1ae2;eip=0x00069d; 	X(MOV(word_383f4, ax));	// 49940 mov     word_383F4, ax ;~ 1AE2:069D
loc_29aa0:
	// 7966 
cs=0x1ae2;eip=0x0006a0; 	R(CALL(sub_29b2e,0));	// 49943 call    sub_29B2E ;~ 1AE2:06A0
cs=0x1ae2;eip=0x0006a3; 	R(JNZ(loc_29aba));	// 49944 jnz     short loc_29ABA ;~ 1AE2:06A3
cs=0x1ae2;eip=0x0006a5; 	R(CALL(sub_29ac0,0));	// 49945 call    sub_29AC0 ;~ 1AE2:06A5
cs=0x1ae2;eip=0x0006a8; 	R(JZ(loc_29aaf));	// 49946 jz      short loc_29AAF ;~ 1AE2:06A8
cs=0x1ae2;eip=0x0006aa; 	R(CALL(sub_29b2e,0));	// 49947 call    sub_29B2E ;~ 1AE2:06AA
cs=0x1ae2;eip=0x0006ad; 	R(JNZ(loc_29aba));	// 49948 jnz     short loc_29ABA ;~ 1AE2:06AD
loc_29aaf:
	// 7967 
cs=0x1ae2;eip=0x0006af; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 49952 push    [bp+arg_0] ;~ 1AE2:06AF
cs=0x1ae2;eip=0x0006b2; 	R(CALLF(sub_2a5b6,0));	// 49953 call    sub_2A5B6 ;~ 1AE2:06B2
cs=0x1ae2;eip=0x0006b7; 	T(ADD(sp, 2));	// 49954 add     sp, 2 ;~ 1AE2:06B7
loc_29aba:
	// 7968 
cs=0x1ae2;eip=0x0006ba; 	X(POP(di));	// 49958 pop     di ;~ 1AE2:06BA
cs=0x1ae2;eip=0x0006bb; 	X(POP(si));	// 49959 pop     si ;~ 1AE2:06BB
cs=0x1ae2;eip=0x0006bc; 	T(MOV(sp, bp));	// 49960 mov     sp, bp ;~ 1AE2:06BC
cs=0x1ae2;eip=0x0006be; 	X(POP(bp));	// 49961 pop     bp ;~ 1AE2:06BE
cs=0x1ae2;eip=0x0006bf; 	R(RETF(0));	// 49962 retf ;~ 1AE2:06BF
sub_29ac0:
	// 49969 
cs=0x1ae2;eip=0x0006c0; 	T(MOV(bx, 0x0F0));	// 49971 mov     bx, 0F0h ; 'ğ' ;~ 1AE2:06C0
ret_1ae2_6c3:
	// 7969 
cs=0x1ae2;eip=0x0006c3; 	T(CMP(*(dw*)(raddr(ss,bp+6)), bx));	// 49972 cmp     [bp+6], bx ;~ 1AE2:06C3
cs=0x1ae2;eip=0x0006c6; 	R(JBE(loc_29acf));	// 49973 jbe     short loc_29ACF ;~ 1AE2:06C6
cs=0x1ae2;eip=0x0006c8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 49974 mov     bx, [bp+6] ;~ 1AE2:06C8
cs=0x1ae2;eip=0x0006cb; 	T(INC(bx));	// 49975 inc     bx ;~ 1AE2:06CB
cs=0x1ae2;eip=0x0006cc; 	T(AND(bx, 0x0FFFE));	// 49976 and     bx, 0FFFEh ;~ 1AE2:06CC
loc_29acf:
	// 7970 
cs=0x1ae2;eip=0x0006cf; 	X(MOV(*(dw*)(raddr(ss,bp-2)), bx));	// 49979 mov     [bp-2], bx ;~ 1AE2:06CF
cs=0x1ae2;eip=0x0006d2; 	T(XOR(ax, ax));	// 49980 xor     ax, ax ;~ 1AE2:06D2
cs=0x1ae2;eip=0x0006d4; 	X(PUSH(ds));	// 49981 push    ds ;~ 1AE2:06D4
cs=0x1ae2;eip=0x0006d5; 	X(PUSH(ax));	// 49982 push    ax ;~ 1AE2:06D5
cs=0x1ae2;eip=0x0006d6; 	X(PUSH(ax));	// 49983 push    ax ;~ 1AE2:06D6
cs=0x1ae2;eip=0x0006d7; 	T(cx = bx+0x0E);	// 49984 lea     cx, [bx+0Eh] ;~ 1AE2:06D7
cs=0x1ae2;eip=0x0006da; 	X(PUSH(cx));	// 49985 push    cx ;~ 1AE2:06DA
cs=0x1ae2;eip=0x0006db; 	T(MOV(al, 2));	// 49986 mov     al, 2 ;~ 1AE2:06DB
cs=0x1ae2;eip=0x0006dd; 	X(PUSH(ax));	// 49987 push    ax ;~ 1AE2:06DD
cs=0x1ae2;eip=0x0006de; 	R(CALLF(sub_2a760,0));	// 49988 call    sub_2A760 ;~ 1AE2:06DE
cs=0x1ae2;eip=0x0006e3; 	T(ADD(sp, 8));	// 49989 add     sp, 8 ;~ 1AE2:06E3
cs=0x1ae2;eip=0x0006e6; 	T(CMP(dx, 0x0FFFF));	// 49990 cmp     dx, 0FFFFh ;~ 1AE2:06E6
cs=0x1ae2;eip=0x0006e9; 	R(JZ(loc_29b2c));	// 49991 jz      short loc_29B2C ;~ 1AE2:06E9
cs=0x1ae2;eip=0x0006eb; 	T(MOV(ax, dx));	// 49992 mov     ax, dx ;~ 1AE2:06EB
cs=0x1ae2;eip=0x0006ed; 	X(XCHG(dx, word_383f6));	// 49993 xchg    dx, word_383F6 ;~ 1AE2:06ED
cs=0x1ae2;eip=0x0006f1; 	X(MOV(word_383f8, ax));	// 49994 mov     word_383F8, ax ;~ 1AE2:06F1
cs=0x1ae2;eip=0x0006f4; 	T(CMP(ax, word_383fc));	// 49995 cmp     ax, word_383FC ;~ 1AE2:06F4
cs=0x1ae2;eip=0x0006f8; 	R(JBE(loc_29afd));	// 49996 jbe     short loc_29AFD ;~ 1AE2:06F8
cs=0x1ae2;eip=0x0006fa; 	X(MOV(word_383fc, ax));	// 49997 mov     word_383FC, ax ;~ 1AE2:06FA
loc_29afd:
	// 7971 
cs=0x1ae2;eip=0x0006fd; 	T(OR(dx, dx));	// 50000 or      dx, dx ;~ 1AE2:06FD
cs=0x1ae2;eip=0x0006ff; 	R(JZ(loc_29b06));	// 50001 jz      short loc_29B06 ;~ 1AE2:06FF
cs=0x1ae2;eip=0x000701; 	T(MOV(ds, dx));	// 50002 mov     ds, dx ;~ 1AE2:0701
cs=0x1ae2;eip=0x000703; 	X(MOV(*(dw*)(raddr(ds,8)), ax));	// 50003 mov     ds:8, ax ;~ 1AE2:0703
loc_29b06:
	// 7972 
cs=0x1ae2;eip=0x000706; 	T(MOV(bx, *(dw*)(raddr(ss,bp-2))));	// 50006 mov     bx, [bp-2] ;~ 1AE2:0706
cs=0x1ae2;eip=0x000709; 	T(MOV(ds, ax));	// 50007 mov     ds, ax ;~ 1AE2:0709
cs=0x1ae2;eip=0x00070b; 	T(XOR(ax, ax));	// 50008 xor     ax, ax ;~ 1AE2:070B
cs=0x1ae2;eip=0x00070d; 	X(MOV(*(dw*)(raddr(ds,8)), ax));	// 50009 mov     ds:8, ax ;~ 1AE2:070D
cs=0x1ae2;eip=0x000710; 	T(DEC(ax));	// 50010 dec     ax ;~ 1AE2:0710
cs=0x1ae2;eip=0x000711; 	T(DEC(ax));	// 50011 dec     ax ;~ 1AE2:0711
cs=0x1ae2;eip=0x000712; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), ax));	// 50012 mov     [bx+0Ch], ax ;~ 1AE2:0712
cs=0x1ae2;eip=0x000715; 	T(MOV(ax, 0x0A));	// 50013 mov     ax, 0Ah ;~ 1AE2:0715
cs=0x1ae2;eip=0x000718; 	X(MOV(*(dw*)(raddr(ds,0)), ax));	// 50014 mov     ds:0, ax ;~ 1AE2:0718
cs=0x1ae2;eip=0x00071b; 	X(MOV(*(dw*)(raddr(ds,2)), ax));	// 50015 mov     ds:2, ax ;~ 1AE2:071B
cs=0x1ae2;eip=0x00071e; 	T(ax = bx+1);	// 50016 lea     ax, [bx+1] ;~ 1AE2:071E
cs=0x1ae2;eip=0x000721; 	X(MOV(*(dw*)(raddr(ds,0x0A)), ax));	// 50017 mov     ds:0Ah, ax ;~ 1AE2:0721
cs=0x1ae2;eip=0x000724; 	T(ADD(ax, 0x0D));	// 50018 add     ax, 0Dh ;~ 1AE2:0724
cs=0x1ae2;eip=0x000727; 	X(MOV(*(dw*)(raddr(ds,6)), ax));	// 50019 mov     ds:6, ax ;~ 1AE2:0727
cs=0x1ae2;eip=0x00072a; 	T(MOV(ax, ds));	// 50020 mov     ax, ds ;~ 1AE2:072A
loc_29b2c:
	// 7973 
cs=0x1ae2;eip=0x00072c; 	X(POP(ds));	// 50023 pop     ds ;~ 1AE2:072C
cs=0x1ae2;eip=0x00072d; 	R(RETN(0));	// 50024 retn ;~ 1AE2:072D
sub_29b2e:
	// 50031 
cs=0x1ae2;eip=0x00072e; 	T(MOV(ax, ds));	// 50033 mov     ax, ds ;~ 1AE2:072E
ret_1ae2_730:
	// 7974 
cs=0x1ae2;eip=0x000730; 	T(MOV(es, ax));	// 50034 mov     es, ax ;~ 1AE2:0730
cs=0x1ae2;eip=0x000732; 	T(MOV(cx, *(dw*)(raddr(ss,bp+6))));	// 50036 mov     cx, [bp+6] ;~ 1AE2:0732
cs=0x1ae2;eip=0x000735; 	T(XOR(bx, bx));	// 50037 xor     bx, bx ;~ 1AE2:0735
cs=0x1ae2;eip=0x000737; 	T(MOV(ds, word_383f8));	// 50038 mov     ds, word_383F8 ;~ 1AE2:0737
cs=0x1ae2;eip=0x00073b; 	R(CALL(sub_2a5ff,0));	// 50039 call    sub_2A5FF ;~ 1AE2:073B
cs=0x1ae2;eip=0x00073e; 	T(OR(dx, dx));	// 50040 or      dx, dx ;~ 1AE2:073E
cs=0x1ae2;eip=0x000740; 	T(MOV(cx, es));	// 50041 mov     cx, es ;~ 1AE2:0740
cs=0x1ae2;eip=0x000742; 	T(MOV(ds, cx));	// 50042 mov     ds, cx ;~ 1AE2:0742
cs=0x1ae2;eip=0x000744; 	R(RETN(0));	// 50043 retn ;~ 1AE2:0744
sub_29b46:
	// 50053 
#undef arg_0
#define arg_0 6
	// 50056 arg_0           = word ptr  6 ;~ 1AE2:0746
#undef arg_2
#define arg_2 8
	// 50057 arg_2           = word ptr  8 ;~ 1AE2:0746
ret_1ae2_746:
	// 7975 
cs=0x1ae2;eip=0x000746; 	X(PUSH(bp));	// 50059 push    bp ;~ 1AE2:0746
cs=0x1ae2;eip=0x000747; 	T(MOV(bp, sp));	// 50060 mov     bp, sp ;~ 1AE2:0747
cs=0x1ae2;eip=0x000749; 	T(MOV(dx, di));	// 50061 mov     dx, di ;~ 1AE2:0749
cs=0x1ae2;eip=0x00074b; 	T(MOV(bx, si));	// 50062 mov     bx, si ;~ 1AE2:074B
cs=0x1ae2;eip=0x00074d; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 50063 mov     si, [bp+arg_2] ;~ 1AE2:074D
cs=0x1ae2;eip=0x000750; 	T(MOV(di, si));	// 50064 mov     di, si ;~ 1AE2:0750
cs=0x1ae2;eip=0x000752; 	T(MOV(ax, ds));	// 50065 mov     ax, ds ;~ 1AE2:0752
cs=0x1ae2;eip=0x000754; 	T(MOV(es, ax));	// 50066 mov     es, ax ;~ 1AE2:0754
cs=0x1ae2;eip=0x000756; 	T(XOR(ax, ax));	// 50067 xor     ax, ax ;~ 1AE2:0756
cs=0x1ae2;eip=0x000758; 	T(MOV(cx, 0x0FFFF));	// 50068 mov     cx, 0FFFFh ;~ 1AE2:0758
	// 50069 repne scasb ;~ 1AE2:075B
cs=0x1ae2;eip=0x00075b; 	T(	REPNE SCASB);	// 50069 repne scasb ;~ 1AE2:075B
cs=0x1ae2;eip=0x00075d; 	T(NOT(cx));	// 50070 not     cx ;~ 1AE2:075D
cs=0x1ae2;eip=0x00075f; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 50071 mov     di, [bp+arg_0] ;~ 1AE2:075F
cs=0x1ae2;eip=0x000762; 	T(MOV(ax, di));	// 50072 mov     ax, di ;~ 1AE2:0762
cs=0x1ae2;eip=0x000764; 	T(TEST(al, 1));	// 50073 test    al, 1 ;~ 1AE2:0764
cs=0x1ae2;eip=0x000766; 	R(JZ(loc_29b6a));	// 50074 jz      short loc_29B6A ;~ 1AE2:0766
cs=0x1ae2;eip=0x000768; 	X(MOVSB);	// 50075 movsb ;~ 1AE2:0768
cs=0x1ae2;eip=0x000769; 	T(DEC(cx));	// 50076 dec     cx ;~ 1AE2:0769
loc_29b6a:
	// 7976 
cs=0x1ae2;eip=0x00076a; 	T(SHR(cx, 1));	// 50079 shr     cx, 1 ;~ 1AE2:076A
	// 50080 rep movsw ;~ 1AE2:076C
cs=0x1ae2;eip=0x00076c; 	X(	REP MOVSW);	// 50080 rep movsw ;~ 1AE2:076C
cs=0x1ae2;eip=0x00076e; 	T(ADC(cx, cx));	// 50081 adc     cx, cx ;~ 1AE2:076E
	// 50082 rep movsb ;~ 1AE2:0770
cs=0x1ae2;eip=0x000770; 	X(	REP MOVSB);	// 50082 rep movsb ;~ 1AE2:0770
cs=0x1ae2;eip=0x000772; 	T(MOV(si, bx));	// 50083 mov     si, bx ;~ 1AE2:0772
cs=0x1ae2;eip=0x000774; 	T(MOV(di, dx));	// 50084 mov     di, dx ;~ 1AE2:0774
cs=0x1ae2;eip=0x000776; 	X(POP(bp));	// 50085 pop     bp ;~ 1AE2:0776
cs=0x1ae2;eip=0x000777; 	R(RETF(0));	// 50086 retf ;~ 1AE2:0777
sub_29b78:
	// 50094 
#undef arg_0
#define arg_0 6
	// 50097 arg_0           = word ptr  6 ;~ 1AE2:0778
#undef arg_2
#define arg_2 8
	// 50098 arg_2           = word ptr  8 ;~ 1AE2:0778
ret_1ae2_778:
	// 7977 
cs=0x1ae2;eip=0x000778; 	X(PUSH(bp));	// 50100 push    bp ;~ 1AE2:0778
cs=0x1ae2;eip=0x000779; 	T(MOV(bp, sp));	// 50101 mov     bp, sp ;~ 1AE2:0779
cs=0x1ae2;eip=0x00077b; 	T(MOV(dx, di));	// 50102 mov     dx, di ;~ 1AE2:077B
cs=0x1ae2;eip=0x00077d; 	T(MOV(bx, si));	// 50103 mov     bx, si ;~ 1AE2:077D
cs=0x1ae2;eip=0x00077f; 	T(MOV(ax, ds));	// 50104 mov     ax, ds ;~ 1AE2:077F
cs=0x1ae2;eip=0x000781; 	T(MOV(es, ax));	// 50105 mov     es, ax ;~ 1AE2:0781
cs=0x1ae2;eip=0x000783; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 50106 mov     si, [bp+arg_0] ;~ 1AE2:0783
cs=0x1ae2;eip=0x000786; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_2))));	// 50107 mov     di, [bp+arg_2] ;~ 1AE2:0786
cs=0x1ae2;eip=0x000789; 	T(XOR(ax, ax));	// 50108 xor     ax, ax ;~ 1AE2:0789
cs=0x1ae2;eip=0x00078b; 	T(MOV(cx, 0x0FFFF));	// 50109 mov     cx, 0FFFFh ;~ 1AE2:078B
	// 50110 repne scasb ;~ 1AE2:078E
cs=0x1ae2;eip=0x00078e; 	T(	REPNE SCASB);	// 50110 repne scasb ;~ 1AE2:078E
cs=0x1ae2;eip=0x000790; 	T(NOT(cx));	// 50111 not     cx ;~ 1AE2:0790
cs=0x1ae2;eip=0x000792; 	T(SUB(di, cx));	// 50112 sub     di, cx ;~ 1AE2:0792
	// 50113 repe cmpsb ;~ 1AE2:0794
cs=0x1ae2;eip=0x000794; 	T(	REPE CMPSB);	// 50113 repe cmpsb ;~ 1AE2:0794
cs=0x1ae2;eip=0x000796; 	R(JZ(loc_29b9d));	// 50114 jz      short loc_29B9D ;~ 1AE2:0796
cs=0x1ae2;eip=0x000798; 	T(SBB(ax, ax));	// 50115 sbb     ax, ax ;~ 1AE2:0798
cs=0x1ae2;eip=0x00079a; 	T(SBB(ax, 0x0FFFF));	// 50116 sbb     ax, 0FFFFh ;~ 1AE2:079A
loc_29b9d:
	// 7978 
cs=0x1ae2;eip=0x00079d; 	T(MOV(si, bx));	// 50119 mov     si, bx ;~ 1AE2:079D
cs=0x1ae2;eip=0x00079f; 	T(MOV(di, dx));	// 50120 mov     di, dx ;~ 1AE2:079F
cs=0x1ae2;eip=0x0007a1; 	X(POP(bp));	// 50121 pop     bp ;~ 1AE2:07A1
cs=0x1ae2;eip=0x0007a2; 	R(RETF(0));	// 50122 retf ;~ 1AE2:07A2
sub_29ba4:
	// 50132 
#undef arg_0
#define arg_0 6
	// 50135 arg_0           = word ptr  6 ;~ 1AE2:07A4
ret_1ae2_7a4:
	// 7979 
cs=0x1ae2;eip=0x0007a4; 	X(PUSH(bp));	// 50137 push    bp ;~ 1AE2:07A4
cs=0x1ae2;eip=0x0007a5; 	T(MOV(bp, sp));	// 50138 mov     bp, sp ;~ 1AE2:07A5
cs=0x1ae2;eip=0x0007a7; 	T(MOV(dx, di));	// 50139 mov     dx, di ;~ 1AE2:07A7
cs=0x1ae2;eip=0x0007a9; 	T(MOV(ax, ds));	// 50140 mov     ax, ds ;~ 1AE2:07A9
cs=0x1ae2;eip=0x0007ab; 	T(MOV(es, ax));	// 50141 mov     es, ax ;~ 1AE2:07AB
cs=0x1ae2;eip=0x0007ad; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 50142 mov     di, [bp+arg_0] ;~ 1AE2:07AD
cs=0x1ae2;eip=0x0007b0; 	T(XOR(ax, ax));	// 50143 xor     ax, ax ;~ 1AE2:07B0
cs=0x1ae2;eip=0x0007b2; 	T(MOV(cx, 0x0FFFF));	// 50144 mov     cx, 0FFFFh ;~ 1AE2:07B2
	// 50145 repne scasb ;~ 1AE2:07B5
cs=0x1ae2;eip=0x0007b5; 	T(	REPNE SCASB);	// 50145 repne scasb ;~ 1AE2:07B5
cs=0x1ae2;eip=0x0007b7; 	T(NOT(cx));	// 50146 not     cx ;~ 1AE2:07B7
cs=0x1ae2;eip=0x0007b9; 	T(DEC(cx));	// 50147 dec     cx ;~ 1AE2:07B9
cs=0x1ae2;eip=0x0007ba; 	T(XCHG(ax, cx));	// 50148 xchg    ax, cx ;~ 1AE2:07BA
cs=0x1ae2;eip=0x0007bb; 	T(MOV(di, dx));	// 50149 mov     di, dx ;~ 1AE2:07BB
cs=0x1ae2;eip=0x0007bd; 	X(POP(bp));	// 50150 pop     bp ;~ 1AE2:07BD
cs=0x1ae2;eip=0x0007be; 	R(RETF(0));	// 50151 retf ;~ 1AE2:07BE
seg036_proc:
	// 50156 
cs=0x1ae2;eip=0x0007c0; 	T(MOV(dh, 1));	// 50156 mov     dh, 1 ;~ 1AE2:07C0
ret_1ae2_7c2:
	// 7980 
cs=0x1ae2;eip=0x0007c2; 	R(JMP(loc_29bc6));	// 50157 jmp     short loc_29BC6 ;~ 1AE2:07C2
ret_1ae2_8c9:
	// 7993 
cs=0x1ae2;eip=0x0008c9; 	X(PUSH(es));	// 50356 push    es ;~ 1AE2:08C9
cs=0x1ae2;eip=0x0008ca; 	X(PUSH(ds));	// 50357 push    ds ;~ 1AE2:08CA
cs=0x1ae2;eip=0x0008cb; 	X(PUSH(bp));	// 50358 push    bp ;~ 1AE2:08CB
cs=0x1ae2;eip=0x0008cc; 	X(PUSH(di));	// 50359 push    di ;~ 1AE2:08CC
cs=0x1ae2;eip=0x0008cd; 	X(PUSH(si));	// 50360 push    si ;~ 1AE2:08CD
cs=0x1ae2;eip=0x0008ce; 	X(PUSH(dx));	// 50361 push    dx ;~ 1AE2:08CE
cs=0x1ae2;eip=0x0008cf; 	X(PUSH(cx));	// 50362 push    cx ;~ 1AE2:08CF
cs=0x1ae2;eip=0x0008d0; 	X(PUSH(bx));	// 50363 push    bx ;~ 1AE2:08D0
cs=0x1ae2;eip=0x0008d1; 	X(PUSH(ax));	// 50364 push    ax ;~ 1AE2:08D1
cs=0x1ae2;eip=0x0008d2; 	T(MOV(bx, seg_offset(dseg)));	// 50365 mov     bx, seg dseg ;~ 1AE2:08D2
cs=0x1ae2;eip=0x0008d5; 	T(MOV(ds, bx));	// 50366 mov     ds, bx ;~ 1AE2:08D5
cs=0x1ae2;eip=0x0008d7; 	X(MOV(word_382ca, sp));	// 50367 mov     word_382CA, sp ;~ 1AE2:08D7
cs=0x1ae2;eip=0x0008db; 	X(PUSH(bp));	// 50368 push    bp ;~ 1AE2:08DB
cs=0x1ae2;eip=0x0008dc; 	X(PUSH(si));	// 50369 push    si ;~ 1AE2:08DC
cs=0x1ae2;eip=0x0008dd; 	X(PUSH(di));	// 50370 push    di ;~ 1AE2:08DD
cs=0x1ae2;eip=0x0008de; 	X(PUSH(ax));	// 50371 push    ax ;~ 1AE2:08DE
cs=0x1ae2;eip=0x0008df; 	R(CALLF(__dispatch_call,dword_382c6));	// 50372 call    dword_382C6 ;~ 1AE2:08DF
loc_29ce3:
	// 7994 
cs=0x1ae2;eip=0x0008e3; 	T(MOV(sp, word_382ca));	// 50376 mov     sp, word_382CA ;~ 1AE2:08E3
cs=0x1ae2;eip=0x0008e7; 	T(ADD(sp, 2));	// 50377 add     sp, 2 ;~ 1AE2:08E7
cs=0x1ae2;eip=0x0008ea; 	X(POP(bx));	// 50378 pop     bx ;~ 1AE2:08EA
cs=0x1ae2;eip=0x0008eb; 	X(POP(cx));	// 50379 pop     cx ;~ 1AE2:08EB
cs=0x1ae2;eip=0x0008ec; 	X(POP(dx));	// 50380 pop     dx ;~ 1AE2:08EC
cs=0x1ae2;eip=0x0008ed; 	X(POP(si));	// 50381 pop     si ;~ 1AE2:08ED
cs=0x1ae2;eip=0x0008ee; 	X(POP(di));	// 50382 pop     di ;~ 1AE2:08EE
cs=0x1ae2;eip=0x0008ef; 	X(POP(bp));	// 50383 pop     bp ;~ 1AE2:08EF
cs=0x1ae2;eip=0x0008f0; 	X(POP(ds));	// 50384 pop     ds ;~ 1AE2:08F0
cs=0x1ae2;eip=0x0008f1; 	X(POP(es));	// 50385 pop     es ;~ 1AE2:08F1
cs=0x1ae2;eip=0x0008f2; 	R(IRET);	// 50386 iret ;~ 1AE2:08F2
loc_29f06:
	// 8023 
cs=0x1ae2;eip=0x000b06; 	T(MOV(ax, 2));	// 50793 mov     ax, 2 ;~ 1AE2:0B06
cs=0x1ae2;eip=0x000b09; 	R(JMP(loc_294c9));	// 50794 jmp     loc_294C9 ;~ 1AE2:0B09
loc_2a570:
	// 8126 
cs=0x1ae2;eip=0x001170; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_4))));	// 51917 mov     cx, [bp+arg_4] ;~ 1AE2:1170
cs=0x1ae2;eip=0x001173; 	T(OR(cx, cx));	// 51918 or      cx, cx ;~ 1AE2:1173
cs=0x1ae2;eip=0x001175; 	R(JNZ(loc_2a57c));	// 51919 jnz     short loc_2A57C ;~ 1AE2:1175
cs=0x1ae2;eip=0x001177; 	T(MOV(ax, cx));	// 51920 mov     ax, cx ;~ 1AE2:1177
cs=0x1ae2;eip=0x001179; 	R(JMP(loc_2a929));	// 51921 jmp     loc_2A929 ;~ 1AE2:1179
loc_2a57c:
	// 8127 
cs=0x1ae2;eip=0x00117c; 	T(MOV(dx, *(dw*)(raddr(ss,bp+8))));	// 51925 mov     dx, [bp+8] ;~ 1AE2:117C
cs=0x1ae2;eip=0x00117f; 	T(MOV(ah, 0x40));	// 51926 mov     ah, 40h ;~ 1AE2:117F
cs=0x1ae2;eip=0x001181; 	R(_INT(0x21));	// 51927 int     21h             ; DOS - 2+ - WRITE TO FILE WITH HANDLE ;~ 1AE2:1181
cs=0x1ae2;eip=0x001183; 	R(JNC(loc_2a589));	// 51929 jnb     short loc_2A589 ;~ 1AE2:1183
cs=0x1ae2;eip=0x001185; 	T(MOV(ah, 9));	// 51930 mov     ah, 9 ;~ 1AE2:1185
cs=0x1ae2;eip=0x001187; 	R(JMP(loc_2a56d));	// 51931 jmp     short loc_2A56D ;~ 1AE2:1187
loc_2a589:
	// 8128 
cs=0x1ae2;eip=0x001189; 	T(OR(ax, ax));	// 51935 or      ax, ax ;~ 1AE2:1189
cs=0x1ae2;eip=0x00118b; 	R(JNZ(loc_2a56d));	// 51936 jnz     short loc_2A56D ;~ 1AE2:118B
cs=0x1ae2;eip=0x00118d; 	T(TEST(*(raddr(ds,bx-0x3BA8)), 0x40));	// 51937 test    byte ptr [bx-3BA8h], 40h ;~ 1AE2:118D
cs=0x1ae2;eip=0x001192; 	R(JZ(loc_2a59e));	// 51938 jz      short loc_2A59E ;~ 1AE2:1192
cs=0x1ae2;eip=0x001194; 	T(MOV(bx, dx));	// 51939 mov     bx, dx ;~ 1AE2:1194
cs=0x1ae2;eip=0x001196; 	T(CMP(*(raddr(ds,bx)), 0x1A));	// 51940 cmp     byte ptr [bx], 1Ah ;~ 1AE2:1196
cs=0x1ae2;eip=0x001199; 	R(JNZ(loc_2a59e));	// 51941 jnz     short loc_2A59E ;~ 1AE2:1199
cs=0x1ae2;eip=0x00119b; 	T(CLC);	// 51942 clc ;~ 1AE2:119B
cs=0x1ae2;eip=0x00119c; 	R(JMP(loc_2a56d));	// 51943 jmp     short loc_2A56D ;~ 1AE2:119C
loc_2a59e:
	// 8129 
cs=0x1ae2;eip=0x00119e; 	T(STC);	// 51948 stc ;~ 1AE2:119E
cs=0x1ae2;eip=0x00119f; 	T(MOV(ax, 0x1C00));	// 51949 mov     ax, 1C00h ;~ 1AE2:119F
cs=0x1ae2;eip=0x0011a2; 	R(JMP(loc_2a56d));	// 51950 jmp     short loc_2A56D ;~ 1AE2:11A2
loc_2a5fc:
	// 8136 
cs=0x1ae2;eip=0x0011fc; 	R(JMP(loc_2a6cd));	// 52031 jmp     loc_2A6CD ;~ 1AE2:11FC
ret_1ae2_182e:
	// 8245 
cs=0x1ae2;eip=0x00182e; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0C))));	// 53243 mov     cx, [bp+0Ch] ;~ 1AE2:182E
cs=0x1ae2;eip=0x001831; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 53244 mov     ax, [bp+6] ;~ 1AE2:1831
cs=0x1ae2;eip=0x001834; 	T(MOV(dx, *(dw*)(raddr(ss,bp+8))));	// 53245 mov     dx, [bp+8] ;~ 1AE2:1834
cs=0x1ae2;eip=0x001837; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0A))));	// 53246 mov     di, [bp+0Ah] ;~ 1AE2:1837
loc_2ac3a:
	// 8246 
cs=0x1ae2;eip=0x00183a; 	X(PUSH(di));	// 53250 push    di ;~ 1AE2:183A
cs=0x1ae2;eip=0x00183b; 	X(PUSH(ds));	// 53251 push    ds ;~ 1AE2:183B
cs=0x1ae2;eip=0x00183c; 	X(POP(es));	// 53252 pop     es ;~ 1AE2:183C
cs=0x1ae2;eip=0x00183d; 	T(CLD);	// 53253 cld ;~ 1AE2:183D
cs=0x1ae2;eip=0x00183e; 	T(XCHG(ax, bx));	// 53254 xchg    ax, bx ;~ 1AE2:183E
cs=0x1ae2;eip=0x00183f; 	T(OR(al, al));	// 53255 or      al, al ;~ 1AE2:183F
cs=0x1ae2;eip=0x001841; 	R(JZ(loc_2ac56));	// 53256 jz      short loc_2AC56 ;~ 1AE2:1841
cs=0x1ae2;eip=0x001843; 	T(CMP(cx, 0x0A));	// 53257 cmp     cx, 0Ah ;~ 1AE2:1843
cs=0x1ae2;eip=0x001846; 	R(JNZ(loc_2ac56));	// 53258 jnz     short loc_2AC56 ;~ 1AE2:1846
cs=0x1ae2;eip=0x001848; 	T(OR(dx, dx));	// 53259 or      dx, dx ;~ 1AE2:1848
cs=0x1ae2;eip=0x00184a; 	R(JNS(loc_2ac56));	// 53260 jns     short loc_2AC56 ;~ 1AE2:184A
cs=0x1ae2;eip=0x00184c; 	T(MOV(al, 0x2D));	// 53261 mov     al, 2Dh ; '-' ;~ 1AE2:184C
cs=0x1ae2;eip=0x00184e; 	X(STOSB);	// 53262 stosb ;~ 1AE2:184E
cs=0x1ae2;eip=0x00184f; 	T(NEG(bx));	// 53263 neg     bx ;~ 1AE2:184F
cs=0x1ae2;eip=0x001851; 	T(ADC(dx, 0));	// 53264 adc     dx, 0 ;~ 1AE2:1851
cs=0x1ae2;eip=0x001854; 	T(NEG(dx));	// 53265 neg     dx ;~ 1AE2:1854
loc_2ac56:
	// 8247 
cs=0x1ae2;eip=0x001856; 	T(MOV(si, di));	// 53269 mov     si, di ;~ 1AE2:1856
loc_2ac58:
	// 8248 
cs=0x1ae2;eip=0x001858; 	T(XCHG(ax, dx));	// 53272 xchg    ax, dx ;~ 1AE2:1858
cs=0x1ae2;eip=0x001859; 	T(XOR(dx, dx));	// 53273 xor     dx, dx ;~ 1AE2:1859
cs=0x1ae2;eip=0x00185b; 	T(OR(ax, ax));	// 53274 or      ax, ax ;~ 1AE2:185B
cs=0x1ae2;eip=0x00185d; 	R(JZ(loc_2ac61));	// 53275 jz      short loc_2AC61 ;~ 1AE2:185D
cs=0x1ae2;eip=0x00185f; 	T(DIV2(cx));	// 53276 div     cx ;~ 1AE2:185F
loc_2ac61:
	// 8249 
cs=0x1ae2;eip=0x001861; 	T(XCHG(ax, bx));	// 53279 xchg    ax, bx ;~ 1AE2:1861
cs=0x1ae2;eip=0x001862; 	T(DIV2(cx));	// 53280 div     cx ;~ 1AE2:1862
cs=0x1ae2;eip=0x001864; 	T(XCHG(ax, dx));	// 53281 xchg    ax, dx ;~ 1AE2:1864
cs=0x1ae2;eip=0x001865; 	T(XCHG(dx, bx));	// 53282 xchg    dx, bx ;~ 1AE2:1865
cs=0x1ae2;eip=0x001867; 	T(ADD(al, 0x30));	// 53283 add     al, 30h ; '0' ;~ 1AE2:1867
cs=0x1ae2;eip=0x001869; 	T(CMP(al, 0x39));	// 53284 cmp     al, 39h ; '9' ;~ 1AE2:1869
cs=0x1ae2;eip=0x00186b; 	R(JBE(loc_2ac6f));	// 53285 jbe     short loc_2AC6F ;~ 1AE2:186B
cs=0x1ae2;eip=0x00186d; 	T(ADD(al, 0x27));	// 53286 add     al, 27h ; ''' ;~ 1AE2:186D
loc_2ac6f:
	// 8250 
cs=0x1ae2;eip=0x00186f; 	X(STOSB);	// 53289 stosb ;~ 1AE2:186F
cs=0x1ae2;eip=0x001870; 	T(MOV(ax, dx));	// 53290 mov     ax, dx ;~ 1AE2:1870
cs=0x1ae2;eip=0x001872; 	T(OR(ax, bx));	// 53291 or      ax, bx ;~ 1AE2:1872
cs=0x1ae2;eip=0x001874; 	R(JNZ(loc_2ac58));	// 53292 jnz     short loc_2AC58 ;~ 1AE2:1874
cs=0x1ae2;eip=0x001876; 	X(MOV(*(raddr(ds,di)), al));	// 53293 mov     [di], al ;~ 1AE2:1876
loc_2ac78:
	// 8251 
cs=0x1ae2;eip=0x001878; 	T(DEC(di));	// 53296 dec     di ;~ 1AE2:1878
cs=0x1ae2;eip=0x001879; 	T(LODSB);	// 53297 lodsb ;~ 1AE2:1879
cs=0x1ae2;eip=0x00187a; 	X(XCHG(al, *(raddr(ds,di))));	// 53298 xchg    al, [di] ;~ 1AE2:187A
cs=0x1ae2;eip=0x00187c; 	X(MOV(*(raddr(ds,si-1)), al));	// 53299 mov     [si-1], al ;~ 1AE2:187C
cs=0x1ae2;eip=0x00187f; 	T(ax = si+1);	// 53300 lea     ax, [si+1] ;~ 1AE2:187F
cs=0x1ae2;eip=0x001882; 	T(CMP(ax, di));	// 53301 cmp     ax, di ;~ 1AE2:1882
cs=0x1ae2;eip=0x001884; 	R(JC(loc_2ac78));	// 53302 jb      short loc_2AC78 ;~ 1AE2:1884
cs=0x1ae2;eip=0x001886; 	X(POP(ax));	// 53303 pop     ax ;~ 1AE2:1886
cs=0x1ae2;eip=0x001887; 	X(POP(di));	// 53304 pop     di ;~ 1AE2:1887
cs=0x1ae2;eip=0x001888; 	X(POP(si));	// 53305 pop     si ;~ 1AE2:1888
cs=0x1ae2;eip=0x001889; 	T(MOV(sp, bp));	// 53306 mov     sp, bp ;~ 1AE2:1889
cs=0x1ae2;eip=0x00188b; 	X(POP(bp));	// 53307 pop     bp ;~ 1AE2:188B
cs=0x1ae2;eip=0x00188c; 	R(RETF(0));	// 53308 retf ;~ 1AE2:188C
ret_1ae2_188e:
	// 8252 
cs=0x1ae2;eip=0x00188e; 	X(POP(cx));	// 53312 pop     cx ;~ 1AE2:188E
cs=0x1ae2;eip=0x00188f; 	X(POP(dx));	// 53313 pop     dx ;~ 1AE2:188F
cs=0x1ae2;eip=0x001890; 	T(MOV(bx, sp));	// 53314 mov     bx, sp ;~ 1AE2:1890
cs=0x1ae2;eip=0x001892; 	T(SUB(bx, ax));	// 53315 sub     bx, ax ;~ 1AE2:1892
cs=0x1ae2;eip=0x001894; 	R(JC(loc_2aca1));	// 53316 jb      short loc_2ACA1 ;~ 1AE2:1894
cs=0x1ae2;eip=0x001896; 	T(CMP(bx, word_3841a));	// 53317 cmp     bx, word_3841A ;~ 1AE2:1896
cs=0x1ae2;eip=0x00189a; 	R(JC(loc_2aca1));	// 53318 jb      short loc_2ACA1 ;~ 1AE2:189A
cs=0x1ae2;eip=0x00189c; 	T(MOV(sp, bx));	// 53319 mov     sp, bx ;~ 1AE2:189C
cs=0x1ae2;eip=0x00189e; 	X(PUSH(dx));	// 53320 push    dx ;~ 1AE2:189E
cs=0x1ae2;eip=0x00189f; 	X(PUSH(cx));	// 53321 push    cx ;~ 1AE2:189F
cs=0x1ae2;eip=0x0018a0; 	R(RETF(0));	// 53322 retf ;~ 1AE2:18A0
loc_2aca1:
	// 8253 
cs=0x1ae2;eip=0x0018a1; 	T(MOV(ax, *(dw*)(((db*)&dword_38416))));	// 53327 mov     ax, word ptr dword_38416 ;~ 1AE2:18A1
cs=0x1ae2;eip=0x0018a4; 	T(INC(ax));	// 53328 inc     ax ;~ 1AE2:18A4
cs=0x1ae2;eip=0x0018a5; 	R(JNZ(loc_2acac));	// 53329 jnz     short loc_2ACAC ;~ 1AE2:18A5
cs=0x1ae2;eip=0x0018a7; 	T(XOR(ax, ax));	// 53330 xor     ax, ax ;~ 1AE2:18A7
cs=0x1ae2;eip=0x0018a9; 	R(JMP(loc_294c9));	// 53331 jmp     loc_294C9 ;~ 1AE2:18A9
loc_2acac:
	// 8254 
cs=0x1ae2;eip=0x0018ac; 	X(PUSH(dx));	// 53335 push    dx ;~ 1AE2:18AC
cs=0x1ae2;eip=0x0018ad; 	X(PUSH(cx));	// 53336 push    cx ;~ 1AE2:18AD
cs=0x1ae2;eip=0x0018ae; __disp=dword_38416;
	R(JMP(__dispatch_call));	// 53337 jmp     dword_38416 ;~ 1AE2:18AE
loc_2acb2:
	// 8255 
cs=0x1ae2;eip=0x0018b2; 	X(PUSH(bp));	// 53341 push    bp ;~ 1AE2:18B2
cs=0x1ae2;eip=0x0018b3; 	T(MOV(bp, sp));	// 53342 mov     bp, sp ;~ 1AE2:18B3
cs=0x1ae2;eip=0x0018b5; 	T(SUB(sp, 4));	// 53343 sub     sp, 4 ;~ 1AE2:18B5
cs=0x1ae2;eip=0x0018b8; 	X(PUSH(di));	// 53344 push    di ;~ 1AE2:18B8
cs=0x1ae2;eip=0x0018b9; 	X(PUSH(si));	// 53345 push    si ;~ 1AE2:18B9
cs=0x1ae2;eip=0x0018ba; 	T(MOV(si, 0x0C490));	// 53346 mov     si, 0C490h ;~ 1AE2:18BA
cs=0x1ae2;eip=0x0018bd; 	T(SUB(di, di));	// 53347 sub     di, di ;~ 1AE2:18BD
cs=0x1ae2;eip=0x0018bf; 	R(JMP(loc_2acd8));	// 53348 jmp     short loc_2ACD8 ;~ 1AE2:18BF
loc_2acc2:
	// 8256 
cs=0x1ae2;eip=0x0018c2; 	T(TEST(*(raddr(ds,si+6)), 0x83));	// 53353 test    byte ptr [si+6], 83h ;~ 1AE2:18C2
cs=0x1ae2;eip=0x0018c6; 	R(JZ(loc_2acd5));	// 53354 jz      short loc_2ACD5 ;~ 1AE2:18C6
cs=0x1ae2;eip=0x0018c8; 	X(PUSH(si));	// 53355 push    si ;~ 1AE2:18C8
cs=0x1ae2;eip=0x0018c9; 	R(CALLF(sub_2a2d2,0));	// 53356 call    sub_2A2D2 ;~ 1AE2:18C9
cs=0x1ae2;eip=0x0018ce; 	T(ADD(sp, 2));	// 53357 add     sp, 2 ;~ 1AE2:18CE
cs=0x1ae2;eip=0x0018d1; 	T(INC(ax));	// 53358 inc     ax ;~ 1AE2:18D1
cs=0x1ae2;eip=0x0018d2; 	R(JZ(loc_2acd5));	// 53359 jz      short loc_2ACD5 ;~ 1AE2:18D2
cs=0x1ae2;eip=0x0018d4; 	T(INC(di));	// 53360 inc     di ;~ 1AE2:18D4
loc_2acd5:
	// 8257 
cs=0x1ae2;eip=0x0018d5; 	T(ADD(si, 8));	// 53364 add     si, 8 ;~ 1AE2:18D5
loc_2acd8:
	// 8258 
cs=0x1ae2;eip=0x0018d8; 	T(CMP(word_383e8, si));	// 53367 cmp     word_383E8, si ;~ 1AE2:18D8
cs=0x1ae2;eip=0x0018dc; 	R(JNC(loc_2acc2));	// 53368 jnb     short loc_2ACC2 ;~ 1AE2:18DC
cs=0x1ae2;eip=0x0018de; 	T(MOV(ax, di));	// 53369 mov     ax, di ;~ 1AE2:18DE
cs=0x1ae2;eip=0x0018e0; 	X(POP(si));	// 53370 pop     si ;~ 1AE2:18E0
cs=0x1ae2;eip=0x0018e1; 	X(POP(di));	// 53371 pop     di ;~ 1AE2:18E1
cs=0x1ae2;eip=0x0018e2; 	T(MOV(sp, bp));	// 53372 mov     sp, bp ;~ 1AE2:18E2
cs=0x1ae2;eip=0x0018e4; 	X(POP(bp));	// 53373 pop     bp ;~ 1AE2:18E4
cs=0x1ae2;eip=0x0018e5; 	R(RETF(0));	// 53374 retf ;~ 1AE2:18E5
sub_29bc4:
	// 50162 
cs=0x1ae2;eip=0x0007c4; 	T(MOV(dh, 8));	// 50164 mov     dh, 8 ;~ 1AE2:07C4
loc_29bc6:
	// 7981 
cs=0x1ae2;eip=0x0007c6; 	T(MOV(ax, word_382c4));	// 50167 mov     ax, word_382C4 ;~ 1AE2:07C6
cs=0x1ae2;eip=0x0007c9; 	T(OR(ah, ah));	// 50168 or      ah, ah ;~ 1AE2:07C9
cs=0x1ae2;eip=0x0007cb; 	R(JNZ(loc_29bd5));	// 50169 jnz     short loc_29BD5 ;~ 1AE2:07CB
cs=0x1ae2;eip=0x0007cd; 	X(MOV(word_382c4, 0x0FFFF));	// 50170 mov     word_382C4, 0FFFFh ;~ 1AE2:07CD
cs=0x1ae2;eip=0x0007d3; 	R(JMP(locret_29bda));	// 50171 jmp     short locret_29BDA ;~ 1AE2:07D3
loc_29bd5:
	// 7982 
cs=0x1ae2;eip=0x0007d5; 	T(XCHG(ax, dx));	// 50175 xchg    ax, dx ;~ 1AE2:07D5
cs=0x1ae2;eip=0x0007d6; 	R(_INT(0x21));	// 50176 int     21h             ; DOS - ;~ 1AE2:07D6
cs=0x1ae2;eip=0x0007d8; 	T(MOV(ah, 0));	// 50177 mov     ah, 0 ;~ 1AE2:07D8
locret_29bda:
	// 7983 
cs=0x1ae2;eip=0x0007da; 	R(RETF(0));	// 50180 retf ;~ 1AE2:07DA
sub_29bdc:
	// 50190 
#undef arg_0
#define arg_0 6
	// 50192 arg_0           = word ptr  6 ;~ 1AE2:07DC
#undef arg_2
#define arg_2 8
	// 50193 arg_2           = word ptr  8 ;~ 1AE2:07DC
ret_1ae2_7dc:
	// 7984 
cs=0x1ae2;eip=0x0007dc; 	X(PUSH(bp));	// 50195 push    bp ;~ 1AE2:07DC
cs=0x1ae2;eip=0x0007dd; 	T(MOV(bp, sp));	// 50196 mov     bp, sp ;~ 1AE2:07DD
cs=0x1ae2;eip=0x0007df; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 50197 push    [bp+arg_2] ;~ 1AE2:07DF
cs=0x1ae2;eip=0x0007e2; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 50198 push    [bp+arg_0] ;~ 1AE2:07E2
cs=0x1ae2;eip=0x0007e5; 	T(SUB(ax, ax));	// 50199 sub     ax, ax ;~ 1AE2:07E5
cs=0x1ae2;eip=0x0007e7; 	X(PUSH(ax));	// 50200 push    ax ;~ 1AE2:07E7
cs=0x1ae2;eip=0x0007e8; 	X(PUSH(cs));	// 50201 push    cs ;~ 1AE2:07E8
cs=0x1ae2;eip=0x0007e9; 	R(CALL(sub_29bf2,0));	// 50202 call    near ptr sub_29BF2 ;~ 1AE2:07E9
cs=0x1ae2;eip=0x0007ec; 	T(ADD(sp, 6));	// 50203 add     sp, 6 ;~ 1AE2:07EC
cs=0x1ae2;eip=0x0007ef; 	X(POP(bp));	// 50204 pop     bp ;~ 1AE2:07EF
cs=0x1ae2;eip=0x0007f0; 	R(RETF(0));	// 50205 retf ;~ 1AE2:07F0
sub_29bf2:
	// 50215 
#undef var_60
#define var_60 -0x60
	// 50217 var_60          = byte ptr -60h ;~ 1AE2:07F2
#undef var_20
#define var_20 -0x20
	// 50218 var_20          = word ptr -20h ;~ 1AE2:07F2
#undef var_1e
#define var_1e -0x1E
	// 50219 var_1E          = byte ptr -1Eh ;~ 1AE2:07F2
#undef var_10
#define var_10 -0x10
	// 50220 var_10          = byte ptr -10h ;~ 1AE2:07F2
#undef var_f
#define var_f -0x0F
	// 50221 var_F           = byte ptr -0Fh ;~ 1AE2:07F2
#undef var_a
#define var_a -0x0A
	// 50222 var_A           = byte ptr -0Ah ;~ 1AE2:07F2
#undef var_8
#define var_8 -8
	// 50223 var_8           = word ptr -8 ;~ 1AE2:07F2
#undef arg_0
#define arg_0 6
	// 50224 arg_0           = word ptr  6 ;~ 1AE2:07F2
#undef arg_2
#define arg_2 8
	// 50225 arg_2           = word ptr  8 ;~ 1AE2:07F2
#undef arg_4
#define arg_4 0x0A
	// 50226 arg_4           = word ptr  0Ah ;~ 1AE2:07F2
ret_1ae2_7f2:
	// 7985 
cs=0x1ae2;eip=0x0007f2; 	X(PUSH(bp));	// 50228 push    bp ;~ 1AE2:07F2
cs=0x1ae2;eip=0x0007f3; 	T(MOV(bp, sp));	// 50229 mov     bp, sp ;~ 1AE2:07F3
cs=0x1ae2;eip=0x0007f5; 	T(SUB(sp, 0x60));	// 50230 sub     sp, 60h ;~ 1AE2:07F5
cs=0x1ae2;eip=0x0007f8; 	X(PUSH(di));	// 50231 push    di ;~ 1AE2:07F8
cs=0x1ae2;eip=0x0007f9; 	X(PUSH(si));	// 50232 push    si ;~ 1AE2:07F9
cs=0x1ae2;eip=0x0007fa; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 50233 mov     si, [bp+arg_4] ;~ 1AE2:07FA
cs=0x1ae2;eip=0x0007fd; 	T(ax = bp+var_60);	// 50234 lea     ax, [bp+var_60] ;~ 1AE2:07FD
cs=0x1ae2;eip=0x000800; 	T(MOV(di, ax));	// 50235 mov     di, ax ;~ 1AE2:0800
cs=0x1ae2;eip=0x000802; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 50236 cmp     [bp+arg_0], 0 ;~ 1AE2:0802
cs=0x1ae2;eip=0x000806; 	R(JNZ(loc_29c1e));	// 50237 jnz     short loc_29C1E ;~ 1AE2:0806
cs=0x1ae2;eip=0x000808; 	T(SUB(ax, ax));	// 50238 sub     ax, ax ;~ 1AE2:0808
cs=0x1ae2;eip=0x00080a; 	X(PUSH(ax));	// 50239 push    ax ;~ 1AE2:080A
cs=0x1ae2;eip=0x00080b; 	X(PUSH(ax));	// 50240 push    ax ;~ 1AE2:080B
cs=0x1ae2;eip=0x00080c; 	T(MOV(ax, 0x19));	// 50241 mov     ax, 19h ;~ 1AE2:080C
cs=0x1ae2;eip=0x00080f; 	X(PUSH(ax));	// 50242 push    ax ;~ 1AE2:080F
cs=0x1ae2;eip=0x000810; 	R(CALLF(sub_2a880,0));	// 50243 call    sub_2A880 ;~ 1AE2:0810
cs=0x1ae2;eip=0x000815; 	T(ADD(sp, 6));	// 50244 add     sp, 6 ;~ 1AE2:0815
cs=0x1ae2;eip=0x000818; 	T(SUB(ah, ah));	// 50245 sub     ah, ah ;~ 1AE2:0818
cs=0x1ae2;eip=0x00081a; 	T(INC(ax));	// 50246 inc     ax ;~ 1AE2:081A
cs=0x1ae2;eip=0x00081b; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 50247 mov     [bp+arg_0], ax ;~ 1AE2:081B
loc_29c1e:
	// 7986 
cs=0x1ae2;eip=0x00081e; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_0))));	// 50250 mov     al, byte ptr [bp+arg_0] ;~ 1AE2:081E
cs=0x1ae2;eip=0x000821; 	T(ADD(al, 0x40));	// 50251 add     al, 40h ; '@' ;~ 1AE2:0821
cs=0x1ae2;eip=0x000823; 	X(MOV(*(raddr(ds,di)), al));	// 50252 mov     [di], al ;~ 1AE2:0823
cs=0x1ae2;eip=0x000825; 	T(INC(di));	// 50253 inc     di ;~ 1AE2:0825
cs=0x1ae2;eip=0x000826; 	X(MOV(*(raddr(ds,di)), 0x3A));	// 50254 mov     byte ptr [di], 3Ah ; ':' ;~ 1AE2:0826
cs=0x1ae2;eip=0x000829; 	T(INC(di));	// 50255 inc     di ;~ 1AE2:0829
cs=0x1ae2;eip=0x00082a; 	X(MOV(*(raddr(ds,di)), 0x5C));	// 50256 mov     byte ptr [di], 5Ch ; '\' ;~ 1AE2:082A
cs=0x1ae2;eip=0x00082d; 	T(INC(di));	// 50257 inc     di ;~ 1AE2:082D
cs=0x1ae2;eip=0x00082e; 	X(MOV(*(raddr(ss,bp+var_f)), 0x47));	// 50258 mov     [bp+var_F], 47h ; 'G' ;~ 1AE2:082E
cs=0x1ae2;eip=0x000832; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_0))));	// 50259 mov     al, byte ptr [bp+arg_0] ;~ 1AE2:0832
cs=0x1ae2;eip=0x000835; 	X(MOV(*(raddr(ss,bp+var_a)), al));	// 50260 mov     [bp+var_A], al ;~ 1AE2:0835
cs=0x1ae2;eip=0x000838; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), di));	// 50261 mov     [bp+var_8], di ;~ 1AE2:0838
cs=0x1ae2;eip=0x00083b; 	T(ax = bp+var_1e);	// 50262 lea     ax, [bp+var_1E] ;~ 1AE2:083B
cs=0x1ae2;eip=0x00083e; 	X(PUSH(ax));	// 50263 push    ax ;~ 1AE2:083E
cs=0x1ae2;eip=0x00083f; 	T(ax = bp+var_10);	// 50264 lea     ax, [bp+var_10] ;~ 1AE2:083F
cs=0x1ae2;eip=0x000842; 	X(PUSH(ax));	// 50265 push    ax ;~ 1AE2:0842
cs=0x1ae2;eip=0x000843; 	R(CALLF(sub_2a892,0));	// 50266 call    sub_2A892 ;~ 1AE2:0843
cs=0x1ae2;eip=0x000848; 	T(ADD(sp, 4));	// 50267 add     sp, 4 ;~ 1AE2:0848
cs=0x1ae2;eip=0x00084b; 	T(ax = bp+var_60);	// 50268 lea     ax, [bp+var_60] ;~ 1AE2:084B
cs=0x1ae2;eip=0x00084e; 	X(PUSH(ax));	// 50269 push    ax ;~ 1AE2:084E
cs=0x1ae2;eip=0x00084f; 	R(CALLF(sub_29ba4,0));	// 50270 call    sub_29BA4 ;~ 1AE2:084F
cs=0x1ae2;eip=0x000854; 	T(ADD(sp, 2));	// 50271 add     sp, 2 ;~ 1AE2:0854
cs=0x1ae2;eip=0x000857; 	T(INC(ax));	// 50272 inc     ax ;~ 1AE2:0857
cs=0x1ae2;eip=0x000858; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 50273 mov     [bp+var_20], ax ;~ 1AE2:0858
cs=0x1ae2;eip=0x00085b; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_2))));	// 50274 mov     di, [bp+arg_2] ;~ 1AE2:085B
cs=0x1ae2;eip=0x00085e; 	T(OR(di, di));	// 50275 or      di, di ;~ 1AE2:085E
cs=0x1ae2;eip=0x000860; 	R(JNZ(loc_29c83));	// 50276 jnz     short loc_29C83 ;~ 1AE2:0860
cs=0x1ae2;eip=0x000862; 	T(CMP(ax, si));	// 50277 cmp     ax, si ;~ 1AE2:0862
cs=0x1ae2;eip=0x000864; 	R(JLE(loc_29c68));	// 50278 jle     short loc_29C68 ;~ 1AE2:0864
cs=0x1ae2;eip=0x000866; 	T(MOV(si, ax));	// 50279 mov     si, ax ;~ 1AE2:0866
loc_29c68:
	// 7987 
cs=0x1ae2;eip=0x000868; 	X(PUSH(si));	// 50282 push    si ;~ 1AE2:0868
cs=0x1ae2;eip=0x000869; 	R(CALLF(sub_2a5b6,0));	// 50283 call    sub_2A5B6 ;~ 1AE2:0869
cs=0x1ae2;eip=0x00086e; 	T(ADD(sp, 2));	// 50284 add     sp, 2 ;~ 1AE2:086E
cs=0x1ae2;eip=0x000871; 	T(MOV(di, ax));	// 50285 mov     di, ax ;~ 1AE2:0871
cs=0x1ae2;eip=0x000873; 	T(OR(di, di));	// 50286 or      di, di ;~ 1AE2:0873
cs=0x1ae2;eip=0x000875; 	R(JNZ(loc_29c80));	// 50287 jnz     short loc_29C80 ;~ 1AE2:0875
cs=0x1ae2;eip=0x000877; 	X(MOV(word_38289, 0x0C));	// 50288 mov     word_38289, 0Ch ;~ 1AE2:0877
cs=0x1ae2;eip=0x00087d; 	R(JMP(loc_29c9f));	// 50289 jmp     short loc_29C9F ;~ 1AE2:087D
loc_29c80:
	// 7988 
cs=0x1ae2;eip=0x000880; 	X(MOV(*(dw*)(raddr(ss,bp+arg_2)), di));	// 50294 mov     [bp+arg_2], di ;~ 1AE2:0880
loc_29c83:
	// 7989 
cs=0x1ae2;eip=0x000883; 	T(CMP(*(dw*)(raddr(ss,bp+var_20)), si));	// 50297 cmp     [bp+var_20], si ;~ 1AE2:0883
cs=0x1ae2;eip=0x000886; 	R(JLE(loc_29c92));	// 50298 jle     short loc_29C92 ;~ 1AE2:0886
cs=0x1ae2;eip=0x000888; 	X(MOV(word_38289, 0x22));	// 50299 mov     word_38289, 22h ; '"' ;~ 1AE2:0888
cs=0x1ae2;eip=0x00088e; 	T(SUB(ax, ax));	// 50300 sub     ax, ax ;~ 1AE2:088E
cs=0x1ae2;eip=0x000890; 	R(JMP(loc_29c9f));	// 50301 jmp     short loc_29C9F ;~ 1AE2:0890
loc_29c92:
	// 7990 
cs=0x1ae2;eip=0x000892; 	T(ax = bp+var_60);	// 50305 lea     ax, [bp+var_60] ;~ 1AE2:0892
cs=0x1ae2;eip=0x000895; 	X(PUSH(ax));	// 50306 push    ax ;~ 1AE2:0895
cs=0x1ae2;eip=0x000896; 	X(PUSH(di));	// 50307 push    di ;~ 1AE2:0896
cs=0x1ae2;eip=0x000897; 	R(CALLF(sub_29b46,0));	// 50308 call    sub_29B46 ;~ 1AE2:0897
cs=0x1ae2;eip=0x00089c; 	T(ADD(sp, 4));	// 50309 add     sp, 4 ;~ 1AE2:089C
loc_29c9f:
	// 7991 
cs=0x1ae2;eip=0x00089f; 	X(POP(si));	// 50313 pop     si ;~ 1AE2:089F
cs=0x1ae2;eip=0x0008a0; 	X(POP(di));	// 50314 pop     di ;~ 1AE2:08A0
cs=0x1ae2;eip=0x0008a1; 	T(MOV(sp, bp));	// 50315 mov     sp, bp ;~ 1AE2:08A1
cs=0x1ae2;eip=0x0008a3; 	X(POP(bp));	// 50316 pop     bp ;~ 1AE2:08A3
cs=0x1ae2;eip=0x0008a4; 	R(RETF(0));	// 50317 retf ;~ 1AE2:08A4
sub_29ca6:
	// 50327 
#undef arg_0
#define arg_0 6
	// 50329 arg_0           = dword ptr  6 ;~ 1AE2:08A6
ret_1ae2_8a6:
	// 7992 
cs=0x1ae2;eip=0x0008a6; 	X(PUSH(bp));	// 50331 push    bp ;~ 1AE2:08A6
cs=0x1ae2;eip=0x0008a7; 	T(MOV(bp, sp));	// 50332 mov     bp, sp ;~ 1AE2:08A7
cs=0x1ae2;eip=0x0008a9; 	T(LES(dx, *(dd*)(raddr(ss,bp+arg_0))));	// 50333 les     dx, [bp+arg_0] ;~ 1AE2:08A9
cs=0x1ae2;eip=0x0008ac; 	X(MOV(*(dw*)(((db*)&dword_382c6)+2), es));	// 50335 mov     word ptr dword_382C6+2, es ;~ 1AE2:08AC
cs=0x1ae2;eip=0x0008b0; 	X(MOV(*(dw*)(((db*)&dword_382c6)), dx));	// 50336 mov     word ptr dword_382C6, dx ;~ 1AE2:08B0
cs=0x1ae2;eip=0x0008b4; 	X(PUSH(ds));	// 50337 push    ds ;~ 1AE2:08B4
cs=0x1ae2;eip=0x0008b5; 	T(MOV(ax, cs));	// 50338 mov     ax, cs ;~ 1AE2:08B5
cs=0x1ae2;eip=0x0008b7; 	T(MOV(ds, ax));	// 50339 mov     ds, ax ;~ 1AE2:08B7
cs=0x1ae2;eip=0x0008b9; 	T(MOV(dx, 0x8C9));	// 50341 mov     dx, 8C9h ;~ 1AE2:08B9
cs=0x1ae2;eip=0x0008bc; 	T(MOV(al, 0x24));	// 50342 mov     al, 24h ; '$' ;~ 1AE2:08BC
cs=0x1ae2;eip=0x0008be; 	T(MOV(ah, 0x25));	// 50343 mov     ah, 25h ;~ 1AE2:08BE
cs=0x1ae2;eip=0x0008c0; 	R(_INT(0x21));	// 50344 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 1AE2:08C0
cs=0x1ae2;eip=0x0008c2; 	X(POP(ds));	// 50347 pop     ds ;~ 1AE2:08C2
cs=0x1ae2;eip=0x0008c3; 	T(XOR(ax, ax));	// 50349 xor     ax, ax ;~ 1AE2:08C3
cs=0x1ae2;eip=0x0008c5; 	T(MOV(sp, bp));	// 50350 mov     sp, bp ;~ 1AE2:08C5
cs=0x1ae2;eip=0x0008c7; 	X(POP(bp));	// 50351 pop     bp ;~ 1AE2:08C7
cs=0x1ae2;eip=0x0008c8; 	R(RETF(0));	// 50352 retf ;~ 1AE2:08C8
sub_29cf3:
	// 50393 
#undef arg_0
#define arg_0 6
	// 50395 arg_0           = word ptr  6 ;~ 1AE2:08F3
ret_1ae2_8f3:
	// 7995 
cs=0x1ae2;eip=0x0008f3; 	X(PUSH(bp));	// 50399 push    bp ;~ 1AE2:08F3
cs=0x1ae2;eip=0x0008f4; 	T(MOV(bp, sp));	// 50400 mov     bp, sp ;~ 1AE2:08F4
cs=0x1ae2;eip=0x0008f6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 50401 mov     ax, [bp+arg_0] ;~ 1AE2:08F6
cs=0x1ae2;eip=0x0008f9; 	R(JMP(loc_29ce3));	// 50402 jmp     short loc_29CE3 ;~ 1AE2:08F9
sub_29cfc:
	// 50412 
#undef arg_0
#define arg_0 6
	// 50415 arg_0           = word ptr  6 ;~ 1AE2:08FC
#undef arg_2
#define arg_2 8
	// 50416 arg_2           = word ptr  8 ;~ 1AE2:08FC
#undef arg_4
#define arg_4 0x0A
	// 50417 arg_4           = word ptr  0Ah ;~ 1AE2:08FC
#undef arg_6
#define arg_6 0x0C
	// 50418 arg_6           = word ptr  0Ch ;~ 1AE2:08FC
ret_1ae2_8fc:
	// 7996 
cs=0x1ae2;eip=0x0008fc; 	X(PUSH(bp));	// 50420 push    bp ;~ 1AE2:08FC
cs=0x1ae2;eip=0x0008fd; 	T(MOV(bp, sp));	// 50421 mov     bp, sp ;~ 1AE2:08FD
cs=0x1ae2;eip=0x0008ff; 	X(PUSH(di));	// 50422 push    di ;~ 1AE2:08FF
cs=0x1ae2;eip=0x000900; 	X(PUSH(si));	// 50423 push    si ;~ 1AE2:0900
cs=0x1ae2;eip=0x000901; 	X(PUSH(bx));	// 50424 push    bx ;~ 1AE2:0901
cs=0x1ae2;eip=0x000902; 	T(XOR(di, di));	// 50425 xor     di, di ;~ 1AE2:0902
cs=0x1ae2;eip=0x000904; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 50426 mov     ax, [bp+arg_2] ;~ 1AE2:0904
cs=0x1ae2;eip=0x000907; 	T(OR(ax, ax));	// 50427 or      ax, ax ;~ 1AE2:0907
cs=0x1ae2;eip=0x000909; 	R(JGE(loc_29d1c));	// 50428 jge     short loc_29D1C ;~ 1AE2:0909
cs=0x1ae2;eip=0x00090b; 	T(INC(di));	// 50429 inc     di ;~ 1AE2:090B
cs=0x1ae2;eip=0x00090c; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_0))));	// 50430 mov     dx, [bp+arg_0] ;~ 1AE2:090C
cs=0x1ae2;eip=0x00090f; 	T(NEG(ax));	// 50431 neg     ax ;~ 1AE2:090F
cs=0x1ae2;eip=0x000911; 	T(NEG(dx));	// 50432 neg     dx ;~ 1AE2:0911
cs=0x1ae2;eip=0x000913; 	T(SBB(ax, 0));	// 50433 sbb     ax, 0 ;~ 1AE2:0913
cs=0x1ae2;eip=0x000916; 	X(MOV(*(dw*)(raddr(ss,bp+arg_2)), ax));	// 50434 mov     [bp+arg_2], ax ;~ 1AE2:0916
cs=0x1ae2;eip=0x000919; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), dx));	// 50435 mov     [bp+arg_0], dx ;~ 1AE2:0919
loc_29d1c:
	// 7997 
cs=0x1ae2;eip=0x00091c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 50438 mov     ax, [bp+arg_6] ;~ 1AE2:091C
cs=0x1ae2;eip=0x00091f; 	T(OR(ax, ax));	// 50439 or      ax, ax ;~ 1AE2:091F
cs=0x1ae2;eip=0x000921; 	R(JGE(loc_29d34));	// 50440 jge     short loc_29D34 ;~ 1AE2:0921
cs=0x1ae2;eip=0x000923; 	T(INC(di));	// 50441 inc     di ;~ 1AE2:0923
cs=0x1ae2;eip=0x000924; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 50442 mov     dx, [bp+arg_4] ;~ 1AE2:0924
cs=0x1ae2;eip=0x000927; 	T(NEG(ax));	// 50443 neg     ax ;~ 1AE2:0927
cs=0x1ae2;eip=0x000929; 	T(NEG(dx));	// 50444 neg     dx ;~ 1AE2:0929
cs=0x1ae2;eip=0x00092b; 	T(SBB(ax, 0));	// 50445 sbb     ax, 0 ;~ 1AE2:092B
cs=0x1ae2;eip=0x00092e; 	X(MOV(*(dw*)(raddr(ss,bp+arg_6)), ax));	// 50446 mov     [bp+arg_6], ax ;~ 1AE2:092E
cs=0x1ae2;eip=0x000931; 	X(MOV(*(dw*)(raddr(ss,bp+arg_4)), dx));	// 50447 mov     [bp+arg_4], dx ;~ 1AE2:0931
loc_29d34:
	// 7998 
cs=0x1ae2;eip=0x000934; 	T(OR(ax, ax));	// 50450 or      ax, ax ;~ 1AE2:0934
cs=0x1ae2;eip=0x000936; 	R(JNZ(loc_29d4d));	// 50451 jnz     short loc_29D4D ;~ 1AE2:0936
cs=0x1ae2;eip=0x000938; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_4))));	// 50452 mov     cx, [bp+arg_4] ;~ 1AE2:0938
cs=0x1ae2;eip=0x00093b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 50453 mov     ax, [bp+arg_2] ;~ 1AE2:093B
cs=0x1ae2;eip=0x00093e; 	T(XOR(dx, dx));	// 50454 xor     dx, dx ;~ 1AE2:093E
cs=0x1ae2;eip=0x000940; 	T(DIV2(cx));	// 50455 div     cx ;~ 1AE2:0940
cs=0x1ae2;eip=0x000942; 	T(MOV(bx, ax));	// 50456 mov     bx, ax ;~ 1AE2:0942
cs=0x1ae2;eip=0x000944; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 50457 mov     ax, [bp+arg_0] ;~ 1AE2:0944
cs=0x1ae2;eip=0x000947; 	T(DIV2(cx));	// 50458 div     cx ;~ 1AE2:0947
cs=0x1ae2;eip=0x000949; 	T(MOV(dx, bx));	// 50459 mov     dx, bx ;~ 1AE2:0949
cs=0x1ae2;eip=0x00094b; 	R(JMP(loc_29d85));	// 50460 jmp     short loc_29D85 ;~ 1AE2:094B
loc_29d4d:
	// 7999 
cs=0x1ae2;eip=0x00094d; 	T(MOV(bx, ax));	// 50464 mov     bx, ax ;~ 1AE2:094D
cs=0x1ae2;eip=0x00094f; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_4))));	// 50465 mov     cx, [bp+arg_4] ;~ 1AE2:094F
cs=0x1ae2;eip=0x000952; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 50466 mov     dx, [bp+arg_2] ;~ 1AE2:0952
cs=0x1ae2;eip=0x000955; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 50467 mov     ax, [bp+arg_0] ;~ 1AE2:0955
loc_29d58:
	// 8000 
cs=0x1ae2;eip=0x000958; 	T(SHR(bx, 1));	// 50470 shr     bx, 1 ;~ 1AE2:0958
cs=0x1ae2;eip=0x00095a; 	T(RCR(cx, 1));	// 50471 rcr     cx, 1 ;~ 1AE2:095A
cs=0x1ae2;eip=0x00095c; 	T(SHR(dx, 1));	// 50472 shr     dx, 1 ;~ 1AE2:095C
cs=0x1ae2;eip=0x00095e; 	T(RCR(ax, 1));	// 50473 rcr     ax, 1 ;~ 1AE2:095E
cs=0x1ae2;eip=0x000960; 	T(OR(bx, bx));	// 50474 or      bx, bx ;~ 1AE2:0960
cs=0x1ae2;eip=0x000962; 	R(JNZ(loc_29d58));	// 50475 jnz     short loc_29D58 ;~ 1AE2:0962
cs=0x1ae2;eip=0x000964; 	T(DIV2(cx));	// 50476 div     cx ;~ 1AE2:0964
cs=0x1ae2;eip=0x000966; 	T(MOV(si, ax));	// 50477 mov     si, ax ;~ 1AE2:0966
cs=0x1ae2;eip=0x000968; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_6))));	// 50478 mul     [bp+arg_6] ;~ 1AE2:0968
cs=0x1ae2;eip=0x00096b; 	T(XCHG(ax, cx));	// 50479 xchg    ax, cx ;~ 1AE2:096B
cs=0x1ae2;eip=0x00096c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 50480 mov     ax, [bp+arg_4] ;~ 1AE2:096C
cs=0x1ae2;eip=0x00096f; 	T(MUL1_2(si));	// 50481 mul     si ;~ 1AE2:096F
cs=0x1ae2;eip=0x000971; 	T(ADD(dx, cx));	// 50482 add     dx, cx ;~ 1AE2:0971
cs=0x1ae2;eip=0x000973; 	R(JC(loc_29d81));	// 50483 jb      short loc_29D81 ;~ 1AE2:0973
cs=0x1ae2;eip=0x000975; 	T(CMP(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 50484 cmp     dx, [bp+arg_2] ;~ 1AE2:0975
cs=0x1ae2;eip=0x000978; 	R(JA(loc_29d81));	// 50485 ja      short loc_29D81 ;~ 1AE2:0978
cs=0x1ae2;eip=0x00097a; 	R(JC(loc_29d82));	// 50486 jb      short loc_29D82 ;~ 1AE2:097A
cs=0x1ae2;eip=0x00097c; 	T(CMP(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 50487 cmp     ax, [bp+arg_0] ;~ 1AE2:097C
cs=0x1ae2;eip=0x00097f; 	R(JBE(loc_29d82));	// 50488 jbe     short loc_29D82 ;~ 1AE2:097F
loc_29d81:
	// 8001 
cs=0x1ae2;eip=0x000981; 	T(DEC(si));	// 50492 dec     si ;~ 1AE2:0981
loc_29d82:
	// 8002 
cs=0x1ae2;eip=0x000982; 	T(XOR(dx, dx));	// 50496 xor     dx, dx ;~ 1AE2:0982
cs=0x1ae2;eip=0x000984; 	T(XCHG(ax, si));	// 50497 xchg    ax, si ;~ 1AE2:0984
loc_29d85:
	// 8003 
cs=0x1ae2;eip=0x000985; 	T(DEC(di));	// 50500 dec     di ;~ 1AE2:0985
cs=0x1ae2;eip=0x000986; 	R(JNZ(loc_29d8f));	// 50501 jnz     short loc_29D8F ;~ 1AE2:0986
cs=0x1ae2;eip=0x000988; 	T(NEG(dx));	// 50502 neg     dx ;~ 1AE2:0988
cs=0x1ae2;eip=0x00098a; 	T(NEG(ax));	// 50503 neg     ax ;~ 1AE2:098A
cs=0x1ae2;eip=0x00098c; 	T(SBB(dx, 0));	// 50504 sbb     dx, 0 ;~ 1AE2:098C
loc_29d8f:
	// 8004 
cs=0x1ae2;eip=0x00098f; 	X(POP(bx));	// 50507 pop     bx ;~ 1AE2:098F
cs=0x1ae2;eip=0x000990; 	X(POP(si));	// 50508 pop     si ;~ 1AE2:0990
cs=0x1ae2;eip=0x000991; 	X(POP(di));	// 50509 pop     di ;~ 1AE2:0991
cs=0x1ae2;eip=0x000992; 	T(MOV(sp, bp));	// 50510 mov     sp, bp ;~ 1AE2:0992
cs=0x1ae2;eip=0x000994; 	X(POP(bp));	// 50511 pop     bp ;~ 1AE2:0994
cs=0x1ae2;eip=0x000995; 	R(RETF(8));	// 50512 retf    8 ;~ 1AE2:0995
sub_29d98:
	// 50520 
#undef arg_0
#define arg_0 6
	// 50523 arg_0           = word ptr  6 ;~ 1AE2:0998
#undef arg_2
#define arg_2 8
	// 50524 arg_2           = word ptr  8 ;~ 1AE2:0998
#undef arg_4
#define arg_4 0x0A
	// 50525 arg_4           = word ptr  0Ah ;~ 1AE2:0998
#undef arg_6
#define arg_6 0x0C
	// 50526 arg_6           = word ptr  0Ch ;~ 1AE2:0998
ret_1ae2_998:
	// 8005 
cs=0x1ae2;eip=0x000998; 	X(PUSH(bp));	// 50528 push    bp ;~ 1AE2:0998
cs=0x1ae2;eip=0x000999; 	T(MOV(bp, sp));	// 50529 mov     bp, sp ;~ 1AE2:0999
cs=0x1ae2;eip=0x00099b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 50530 mov     ax, [bp+arg_2] ;~ 1AE2:099B
cs=0x1ae2;eip=0x00099e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 50531 mov     bx, [bp+arg_6] ;~ 1AE2:099E
cs=0x1ae2;eip=0x0009a1; 	T(OR(bx, ax));	// 50532 or      bx, ax ;~ 1AE2:09A1
cs=0x1ae2;eip=0x0009a3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 50533 mov     bx, [bp+arg_4] ;~ 1AE2:09A3
cs=0x1ae2;eip=0x0009a6; 	R(JNZ(loc_29db3));	// 50534 jnz     short loc_29DB3 ;~ 1AE2:09A6
cs=0x1ae2;eip=0x0009a8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 50535 mov     ax, [bp+arg_0] ;~ 1AE2:09A8
cs=0x1ae2;eip=0x0009ab; 	T(MUL1_2(bx));	// 50536 mul     bx ;~ 1AE2:09AB
cs=0x1ae2;eip=0x0009ad; 	T(MOV(sp, bp));	// 50537 mov     sp, bp ;~ 1AE2:09AD
cs=0x1ae2;eip=0x0009af; 	X(POP(bp));	// 50538 pop     bp ;~ 1AE2:09AF
cs=0x1ae2;eip=0x0009b0; 	R(RETF(8));	// 50539 retf    8 ;~ 1AE2:09B0
loc_29db3:
	// 8006 
cs=0x1ae2;eip=0x0009b3; 	T(MUL1_2(bx));	// 50543 mul     bx ;~ 1AE2:09B3
cs=0x1ae2;eip=0x0009b5; 	T(MOV(cx, ax));	// 50544 mov     cx, ax ;~ 1AE2:09B5
cs=0x1ae2;eip=0x0009b7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 50545 mov     ax, [bp+arg_0] ;~ 1AE2:09B7
cs=0x1ae2;eip=0x0009ba; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_6))));	// 50546 mul     [bp+arg_6] ;~ 1AE2:09BA
cs=0x1ae2;eip=0x0009bd; 	T(ADD(cx, ax));	// 50547 add     cx, ax ;~ 1AE2:09BD
cs=0x1ae2;eip=0x0009bf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 50548 mov     ax, [bp+arg_0] ;~ 1AE2:09BF
cs=0x1ae2;eip=0x0009c2; 	T(MUL1_2(bx));	// 50549 mul     bx ;~ 1AE2:09C2
cs=0x1ae2;eip=0x0009c4; 	T(ADD(dx, cx));	// 50550 add     dx, cx ;~ 1AE2:09C4
cs=0x1ae2;eip=0x0009c6; 	T(MOV(sp, bp));	// 50551 mov     sp, bp ;~ 1AE2:09C6
cs=0x1ae2;eip=0x0009c8; 	X(POP(bp));	// 50552 pop     bp ;~ 1AE2:09C8
cs=0x1ae2;eip=0x0009c9; 	R(RETF(8));	// 50553 retf    8 ;~ 1AE2:09C9
sub_29dcc:
	// 50561 
#undef arg_0
#define arg_0 6
	// 50564 arg_0           = word ptr  6 ;~ 1AE2:09CC
#undef arg_2
#define arg_2 8
	// 50565 arg_2           = word ptr  8 ;~ 1AE2:09CC
#undef arg_4
#define arg_4 0x0A
	// 50566 arg_4           = word ptr  0Ah ;~ 1AE2:09CC
ret_1ae2_9cc:
	// 8007 
cs=0x1ae2;eip=0x0009cc; 	X(PUSH(bp));	// 50568 push    bp ;~ 1AE2:09CC
cs=0x1ae2;eip=0x0009cd; 	T(MOV(bp, sp));	// 50569 mov     bp, sp ;~ 1AE2:09CD
cs=0x1ae2;eip=0x0009cf; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 50570 mov     bx, [bp+arg_0] ;~ 1AE2:09CF
cs=0x1ae2;eip=0x0009d2; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 50571 push    [bp+arg_4] ;~ 1AE2:09D2
cs=0x1ae2;eip=0x0009d5; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 50572 push    [bp+arg_2] ;~ 1AE2:09D5
cs=0x1ae2;eip=0x0009d8; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 50573 push    word ptr [bx+2] ;~ 1AE2:09D8
cs=0x1ae2;eip=0x0009db; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 50574 push    word ptr [bx] ;~ 1AE2:09DB
cs=0x1ae2;eip=0x0009dd; 	R(CALLF(sub_29cfc,0));	// 50575 call    sub_29CFC ;~ 1AE2:09DD
cs=0x1ae2;eip=0x0009e2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 50576 mov     bx, [bp+arg_0] ;~ 1AE2:09E2
cs=0x1ae2;eip=0x0009e5; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 50577 mov     [bx+2], dx ;~ 1AE2:09E5
cs=0x1ae2;eip=0x0009e8; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 50578 mov     [bx], ax ;~ 1AE2:09E8
cs=0x1ae2;eip=0x0009ea; 	T(MOV(sp, bp));	// 50579 mov     sp, bp ;~ 1AE2:09EA
cs=0x1ae2;eip=0x0009ec; 	X(POP(bp));	// 50580 pop     bp ;~ 1AE2:09EC
cs=0x1ae2;eip=0x0009ed; 	R(RETF(6));	// 50581 retf    6 ;~ 1AE2:09ED
sub_29df0:
	// 50589 
#undef arg_0
#define arg_0 6
	// 50591 arg_0           = word ptr  6 ;~ 1AE2:09F0
#undef arg_2
#define arg_2 8
	// 50592 arg_2           = word ptr  8 ;~ 1AE2:09F0
#undef arg_4
#define arg_4 0x0A
	// 50593 arg_4           = word ptr  0Ah ;~ 1AE2:09F0
ret_1ae2_9f0:
	// 8008 
cs=0x1ae2;eip=0x0009f0; 	X(PUSH(bp));	// 50595 push    bp ;~ 1AE2:09F0
cs=0x1ae2;eip=0x0009f1; 	T(MOV(bp, sp));	// 50596 mov     bp, sp ;~ 1AE2:09F1
cs=0x1ae2;eip=0x0009f3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 50597 mov     bx, [bp+arg_0] ;~ 1AE2:09F3
cs=0x1ae2;eip=0x0009f6; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 50598 push    [bp+arg_4] ;~ 1AE2:09F6
cs=0x1ae2;eip=0x0009f9; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 50599 push    [bp+arg_2] ;~ 1AE2:09F9
cs=0x1ae2;eip=0x0009fc; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 50600 push    word ptr [bx+2] ;~ 1AE2:09FC
cs=0x1ae2;eip=0x0009ff; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 50601 push    word ptr [bx] ;~ 1AE2:09FF
cs=0x1ae2;eip=0x000a01; 	R(CALLF(sub_29e14,0));	// 50602 call    sub_29E14 ;~ 1AE2:0A01
cs=0x1ae2;eip=0x000a06; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 50603 mov     bx, [bp+arg_0] ;~ 1AE2:0A06
cs=0x1ae2;eip=0x000a09; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 50604 mov     [bx+2], dx ;~ 1AE2:0A09
cs=0x1ae2;eip=0x000a0c; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 50605 mov     [bx], ax ;~ 1AE2:0A0C
cs=0x1ae2;eip=0x000a0e; 	T(MOV(sp, bp));	// 50606 mov     sp, bp ;~ 1AE2:0A0E
cs=0x1ae2;eip=0x000a10; 	X(POP(bp));	// 50607 pop     bp ;~ 1AE2:0A10
cs=0x1ae2;eip=0x000a11; 	R(RETF(6));	// 50608 retf    6 ;~ 1AE2:0A11
sub_29e14:
	// 50616 
#undef arg_0
#define arg_0 6
	// 50619 arg_0           = word ptr  6 ;~ 1AE2:0A14
#undef arg_2
#define arg_2 8
	// 50620 arg_2           = word ptr  8 ;~ 1AE2:0A14
#undef arg_4
#define arg_4 0x0A
	// 50621 arg_4           = word ptr  0Ah ;~ 1AE2:0A14
#undef arg_6
#define arg_6 0x0C
	// 50622 arg_6           = word ptr  0Ch ;~ 1AE2:0A14
ret_1ae2_a14:
	// 8009 
cs=0x1ae2;eip=0x000a14; 	X(PUSH(bp));	// 50624 push    bp ;~ 1AE2:0A14
cs=0x1ae2;eip=0x000a15; 	T(MOV(bp, sp));	// 50625 mov     bp, sp ;~ 1AE2:0A15
cs=0x1ae2;eip=0x000a17; 	X(PUSH(bx));	// 50626 push    bx ;~ 1AE2:0A17
cs=0x1ae2;eip=0x000a18; 	X(PUSH(si));	// 50627 push    si ;~ 1AE2:0A18
cs=0x1ae2;eip=0x000a19; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 50628 mov     ax, [bp+arg_6] ;~ 1AE2:0A19
cs=0x1ae2;eip=0x000a1c; 	T(OR(ax, ax));	// 50629 or      ax, ax ;~ 1AE2:0A1C
cs=0x1ae2;eip=0x000a1e; 	R(JNZ(loc_29e35));	// 50630 jnz     short loc_29E35 ;~ 1AE2:0A1E
cs=0x1ae2;eip=0x000a20; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_4))));	// 50631 mov     cx, [bp+arg_4] ;~ 1AE2:0A20
cs=0x1ae2;eip=0x000a23; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 50632 mov     ax, [bp+arg_2] ;~ 1AE2:0A23
cs=0x1ae2;eip=0x000a26; 	T(XOR(dx, dx));	// 50633 xor     dx, dx ;~ 1AE2:0A26
cs=0x1ae2;eip=0x000a28; 	T(DIV2(cx));	// 50634 div     cx ;~ 1AE2:0A28
cs=0x1ae2;eip=0x000a2a; 	T(MOV(bx, ax));	// 50635 mov     bx, ax ;~ 1AE2:0A2A
cs=0x1ae2;eip=0x000a2c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 50636 mov     ax, [bp+arg_0] ;~ 1AE2:0A2C
cs=0x1ae2;eip=0x000a2f; 	T(DIV2(cx));	// 50637 div     cx ;~ 1AE2:0A2F
cs=0x1ae2;eip=0x000a31; 	T(MOV(dx, bx));	// 50638 mov     dx, bx ;~ 1AE2:0A31
cs=0x1ae2;eip=0x000a33; 	R(JMP(loc_29e6d));	// 50639 jmp     short loc_29E6D ;~ 1AE2:0A33
loc_29e35:
	// 8010 
cs=0x1ae2;eip=0x000a35; 	T(MOV(cx, ax));	// 50643 mov     cx, ax ;~ 1AE2:0A35
cs=0x1ae2;eip=0x000a37; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 50644 mov     bx, [bp+arg_4] ;~ 1AE2:0A37
cs=0x1ae2;eip=0x000a3a; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 50645 mov     dx, [bp+arg_2] ;~ 1AE2:0A3A
cs=0x1ae2;eip=0x000a3d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 50646 mov     ax, [bp+arg_0] ;~ 1AE2:0A3D
loc_29e40:
	// 8011 
cs=0x1ae2;eip=0x000a40; 	T(SHR(cx, 1));	// 50649 shr     cx, 1 ;~ 1AE2:0A40
cs=0x1ae2;eip=0x000a42; 	T(RCR(bx, 1));	// 50650 rcr     bx, 1 ;~ 1AE2:0A42
cs=0x1ae2;eip=0x000a44; 	T(SHR(dx, 1));	// 50651 shr     dx, 1 ;~ 1AE2:0A44
cs=0x1ae2;eip=0x000a46; 	T(RCR(ax, 1));	// 50652 rcr     ax, 1 ;~ 1AE2:0A46
cs=0x1ae2;eip=0x000a48; 	T(OR(cx, cx));	// 50653 or      cx, cx ;~ 1AE2:0A48
cs=0x1ae2;eip=0x000a4a; 	R(JNZ(loc_29e40));	// 50654 jnz     short loc_29E40 ;~ 1AE2:0A4A
cs=0x1ae2;eip=0x000a4c; 	T(DIV2(bx));	// 50655 div     bx ;~ 1AE2:0A4C
cs=0x1ae2;eip=0x000a4e; 	T(MOV(si, ax));	// 50656 mov     si, ax ;~ 1AE2:0A4E
cs=0x1ae2;eip=0x000a50; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_6))));	// 50657 mul     [bp+arg_6] ;~ 1AE2:0A50
cs=0x1ae2;eip=0x000a53; 	T(XCHG(ax, cx));	// 50658 xchg    ax, cx ;~ 1AE2:0A53
cs=0x1ae2;eip=0x000a54; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 50659 mov     ax, [bp+arg_4] ;~ 1AE2:0A54
cs=0x1ae2;eip=0x000a57; 	T(MUL1_2(si));	// 50660 mul     si ;~ 1AE2:0A57
cs=0x1ae2;eip=0x000a59; 	T(ADD(dx, cx));	// 50661 add     dx, cx ;~ 1AE2:0A59
cs=0x1ae2;eip=0x000a5b; 	R(JC(loc_29e69));	// 50662 jb      short loc_29E69 ;~ 1AE2:0A5B
cs=0x1ae2;eip=0x000a5d; 	T(CMP(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 50663 cmp     dx, [bp+arg_2] ;~ 1AE2:0A5D
cs=0x1ae2;eip=0x000a60; 	R(JA(loc_29e69));	// 50664 ja      short loc_29E69 ;~ 1AE2:0A60
cs=0x1ae2;eip=0x000a62; 	R(JC(loc_29e6a));	// 50665 jb      short loc_29E6A ;~ 1AE2:0A62
cs=0x1ae2;eip=0x000a64; 	T(CMP(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 50666 cmp     ax, [bp+arg_0] ;~ 1AE2:0A64
cs=0x1ae2;eip=0x000a67; 	R(JBE(loc_29e6a));	// 50667 jbe     short loc_29E6A ;~ 1AE2:0A67
loc_29e69:
	// 8012 
cs=0x1ae2;eip=0x000a69; 	T(DEC(si));	// 50671 dec     si ;~ 1AE2:0A69
loc_29e6a:
	// 8013 
cs=0x1ae2;eip=0x000a6a; 	T(XOR(dx, dx));	// 50675 xor     dx, dx ;~ 1AE2:0A6A
cs=0x1ae2;eip=0x000a6c; 	T(XCHG(ax, si));	// 50676 xchg    ax, si ;~ 1AE2:0A6C
loc_29e6d:
	// 8014 
cs=0x1ae2;eip=0x000a6d; 	X(POP(si));	// 50679 pop     si ;~ 1AE2:0A6D
cs=0x1ae2;eip=0x000a6e; 	X(POP(bx));	// 50680 pop     bx ;~ 1AE2:0A6E
cs=0x1ae2;eip=0x000a6f; 	T(MOV(sp, bp));	// 50681 mov     sp, bp ;~ 1AE2:0A6F
cs=0x1ae2;eip=0x000a71; 	X(POP(bp));	// 50682 pop     bp ;~ 1AE2:0A71
cs=0x1ae2;eip=0x000a72; 	R(RETF(8));	// 50683 retf    8 ;~ 1AE2:0A72
sub_29e76:
	// 50693 
#undef arg_0
#define arg_0 6
	// 50696 arg_0           = word ptr  6 ;~ 1AE2:0A76
#undef arg_2
#define arg_2 8
	// 50697 arg_2           = word ptr  8 ;~ 1AE2:0A76
#undef arg_4
#define arg_4 0x0A
	// 50698 arg_4           = word ptr  0Ah ;~ 1AE2:0A76
#undef arg_6
#define arg_6 0x0C
	// 50699 arg_6           = word ptr  0Ch ;~ 1AE2:0A76
ret_1ae2_a76:
	// 8015 
cs=0x1ae2;eip=0x000a76; 	X(PUSH(bp));	// 50701 push    bp ;~ 1AE2:0A76
cs=0x1ae2;eip=0x000a77; 	T(MOV(bp, sp));	// 50702 mov     bp, sp ;~ 1AE2:0A77
cs=0x1ae2;eip=0x000a79; 	X(PUSH(bx));	// 50703 push    bx ;~ 1AE2:0A79
cs=0x1ae2;eip=0x000a7a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 50704 mov     ax, [bp+arg_6] ;~ 1AE2:0A7A
cs=0x1ae2;eip=0x000a7d; 	T(OR(ax, ax));	// 50705 or      ax, ax ;~ 1AE2:0A7D
cs=0x1ae2;eip=0x000a7f; 	R(JNZ(loc_29e96));	// 50706 jnz     short loc_29E96 ;~ 1AE2:0A7F
cs=0x1ae2;eip=0x000a81; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_4))));	// 50707 mov     cx, [bp+arg_4] ;~ 1AE2:0A81
cs=0x1ae2;eip=0x000a84; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 50708 mov     ax, [bp+arg_2] ;~ 1AE2:0A84
cs=0x1ae2;eip=0x000a87; 	T(XOR(dx, dx));	// 50709 xor     dx, dx ;~ 1AE2:0A87
cs=0x1ae2;eip=0x000a89; 	T(DIV2(cx));	// 50710 div     cx ;~ 1AE2:0A89
cs=0x1ae2;eip=0x000a8b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 50711 mov     ax, [bp+arg_0] ;~ 1AE2:0A8B
cs=0x1ae2;eip=0x000a8e; 	T(DIV2(cx));	// 50712 div     cx ;~ 1AE2:0A8E
cs=0x1ae2;eip=0x000a90; 	T(MOV(ax, dx));	// 50713 mov     ax, dx ;~ 1AE2:0A90
cs=0x1ae2;eip=0x000a92; 	T(XOR(dx, dx));	// 50714 xor     dx, dx ;~ 1AE2:0A92
cs=0x1ae2;eip=0x000a94; 	R(JMP(loc_29edb));	// 50715 jmp     short loc_29EDB ;~ 1AE2:0A94
loc_29e96:
	// 8016 
cs=0x1ae2;eip=0x000a96; 	T(MOV(cx, ax));	// 50719 mov     cx, ax ;~ 1AE2:0A96
cs=0x1ae2;eip=0x000a98; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 50720 mov     bx, [bp+arg_4] ;~ 1AE2:0A98
cs=0x1ae2;eip=0x000a9b; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 50721 mov     dx, [bp+arg_2] ;~ 1AE2:0A9B
cs=0x1ae2;eip=0x000a9e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 50722 mov     ax, [bp+arg_0] ;~ 1AE2:0A9E
loc_29ea1:
	// 8017 
cs=0x1ae2;eip=0x000aa1; 	T(SHR(cx, 1));	// 50725 shr     cx, 1 ;~ 1AE2:0AA1
cs=0x1ae2;eip=0x000aa3; 	T(RCR(bx, 1));	// 50726 rcr     bx, 1 ;~ 1AE2:0AA3
cs=0x1ae2;eip=0x000aa5; 	T(SHR(dx, 1));	// 50727 shr     dx, 1 ;~ 1AE2:0AA5
cs=0x1ae2;eip=0x000aa7; 	T(RCR(ax, 1));	// 50728 rcr     ax, 1 ;~ 1AE2:0AA7
cs=0x1ae2;eip=0x000aa9; 	T(OR(cx, cx));	// 50729 or      cx, cx ;~ 1AE2:0AA9
cs=0x1ae2;eip=0x000aab; 	R(JNZ(loc_29ea1));	// 50730 jnz     short loc_29EA1 ;~ 1AE2:0AAB
cs=0x1ae2;eip=0x000aad; 	T(DIV2(bx));	// 50731 div     bx ;~ 1AE2:0AAD
cs=0x1ae2;eip=0x000aaf; 	T(MOV(cx, ax));	// 50732 mov     cx, ax ;~ 1AE2:0AAF
cs=0x1ae2;eip=0x000ab1; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_6))));	// 50733 mul     [bp+arg_6] ;~ 1AE2:0AB1
cs=0x1ae2;eip=0x000ab4; 	T(XCHG(ax, cx));	// 50734 xchg    ax, cx ;~ 1AE2:0AB4
cs=0x1ae2;eip=0x000ab5; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_4))));	// 50735 mul     [bp+arg_4] ;~ 1AE2:0AB5
cs=0x1ae2;eip=0x000ab8; 	T(ADD(dx, cx));	// 50736 add     dx, cx ;~ 1AE2:0AB8
cs=0x1ae2;eip=0x000aba; 	R(JC(loc_29ec8));	// 50737 jb      short loc_29EC8 ;~ 1AE2:0ABA
cs=0x1ae2;eip=0x000abc; 	T(CMP(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 50738 cmp     dx, [bp+arg_2] ;~ 1AE2:0ABC
cs=0x1ae2;eip=0x000abf; 	R(JA(loc_29ec8));	// 50739 ja      short loc_29EC8 ;~ 1AE2:0ABF
cs=0x1ae2;eip=0x000ac1; 	R(JC(loc_29ece));	// 50740 jb      short loc_29ECE ;~ 1AE2:0AC1
cs=0x1ae2;eip=0x000ac3; 	T(CMP(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 50741 cmp     ax, [bp+arg_0] ;~ 1AE2:0AC3
cs=0x1ae2;eip=0x000ac6; 	R(JBE(loc_29ece));	// 50742 jbe     short loc_29ECE ;~ 1AE2:0AC6
loc_29ec8:
	// 8018 
cs=0x1ae2;eip=0x000ac8; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 50746 sub     ax, [bp+arg_4] ;~ 1AE2:0AC8
cs=0x1ae2;eip=0x000acb; 	T(SBB(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 50747 sbb     dx, [bp+arg_6] ;~ 1AE2:0ACB
loc_29ece:
	// 8019 
cs=0x1ae2;eip=0x000ace; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 50751 sub     ax, [bp+arg_0] ;~ 1AE2:0ACE
cs=0x1ae2;eip=0x000ad1; 	T(SBB(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 50752 sbb     dx, [bp+arg_2] ;~ 1AE2:0AD1
cs=0x1ae2;eip=0x000ad4; 	T(NEG(dx));	// 50753 neg     dx ;~ 1AE2:0AD4
cs=0x1ae2;eip=0x000ad6; 	T(NEG(ax));	// 50754 neg     ax ;~ 1AE2:0AD6
cs=0x1ae2;eip=0x000ad8; 	T(SBB(dx, 0));	// 50755 sbb     dx, 0 ;~ 1AE2:0AD8
loc_29edb:
	// 8020 
cs=0x1ae2;eip=0x000adb; 	X(POP(bx));	// 50758 pop     bx ;~ 1AE2:0ADB
cs=0x1ae2;eip=0x000adc; 	T(MOV(sp, bp));	// 50759 mov     sp, bp ;~ 1AE2:0ADC
cs=0x1ae2;eip=0x000ade; 	X(POP(bp));	// 50760 pop     bp ;~ 1AE2:0ADE
cs=0x1ae2;eip=0x000adf; 	R(RETF(8));	// 50761 retf    8 ;~ 1AE2:0ADF
sub_29ee2:
	// 50769 
cs=0x1ae2;eip=0x000ae2; 	X(PUSH(bp));	// 50771 push    bp ;~ 1AE2:0AE2
ret_1ae2_ae3:
	// 8021 
cs=0x1ae2;eip=0x000ae3; 	T(MOV(bp, sp));	// 50772 mov     bp, sp ;~ 1AE2:0AE3
cs=0x1ae2;eip=0x000ae5; 	T(MOV(ax, 0x0FC));	// 50773 mov     ax, 0FCh ; 'ü' ;~ 1AE2:0AE5
cs=0x1ae2;eip=0x000ae8; 	X(PUSH(ax));	// 50774 push    ax ;~ 1AE2:0AE8
cs=0x1ae2;eip=0x000ae9; 	R(CALLF(sub_29f5d,0));	// 50775 call    sub_29F5D ;~ 1AE2:0AE9
cs=0x1ae2;eip=0x000aee; 	T(CMP(word_382ce, 0));	// 50776 cmp     word_382CE, 0 ;~ 1AE2:0AEE
cs=0x1ae2;eip=0x000af3; 	R(JZ(loc_29ef9));	// 50777 jz      short loc_29EF9 ;~ 1AE2:0AF3
cs=0x1ae2;eip=0x000af5; 	R(CALLF(__dispatch_call,*(dd*)((&unk_382cc))));	// 50778 call    dword ptr unk_382CC ;~ 1AE2:0AF5
loc_29ef9:
	// 8022 
cs=0x1ae2;eip=0x000af9; 	T(MOV(ax, 0x0FF));	// 50781 mov     ax, 0FFh ;~ 1AE2:0AF9
cs=0x1ae2;eip=0x000afc; 	X(PUSH(ax));	// 50782 push    ax ;~ 1AE2:0AFC
cs=0x1ae2;eip=0x000afd; 	R(CALLF(sub_29f5d,0));	// 50783 call    sub_29F5D ;~ 1AE2:0AFD
cs=0x1ae2;eip=0x000b02; 	T(MOV(sp, bp));	// 50784 mov     sp, bp ;~ 1AE2:0B02
cs=0x1ae2;eip=0x000b04; 	X(POP(bp));	// 50785 pop     bp ;~ 1AE2:0B04
cs=0x1ae2;eip=0x000b05; 	R(RETF(0));	// 50786 retf ;~ 1AE2:0B05
sub_29f0c:
	// 50800 
cs=0x1ae2;eip=0x000b0c; 	X(PUSH(si));	// 50801 push    si ;~ 1AE2:0B0C
ret_1ae2_b0d:
	// 8024 
cs=0x1ae2;eip=0x000b0d; 	T(XOR(si, si));	// 50802 xor     si, si ;~ 1AE2:0B0D
cs=0x1ae2;eip=0x000b0f; 	T(MOV(cx, 0x42));	// 50803 mov     cx, 42h ; 'B' ;~ 1AE2:0B0F
cs=0x1ae2;eip=0x000b12; 	T(XOR(ah, ah));	// 50804 xor     ah, ah ;~ 1AE2:0B12
cs=0x1ae2;eip=0x000b14; 	T(CLD);	// 50805 cld ;~ 1AE2:0B14
loc_29f15:
	// 8025 
cs=0x1ae2;eip=0x000b15; 	T(LODSB);	// 50808 lodsb ;~ 1AE2:0B15
cs=0x1ae2;eip=0x000b16; 	T(XOR(ah, al));	// 50809 xor     ah, al ;~ 1AE2:0B16
cs=0x1ae2;eip=0x000b18; 	R(LOOP(loc_29f15));	// 50810 loop    loc_29F15 ;~ 1AE2:0B18
cs=0x1ae2;eip=0x000b1a; 	T(XOR(ah, 0x55));	// 50811 xor     ah, 55h ;~ 1AE2:0B1A
cs=0x1ae2;eip=0x000b1d; 	R(JZ(loc_29f30));	// 50812 jz      short loc_29F30 ;~ 1AE2:0B1D
cs=0x1ae2;eip=0x000b1f; 	R(CALLF(sub_29ee2,0));	// 50813 call    sub_29EE2 ;~ 1AE2:0B1F
cs=0x1ae2;eip=0x000b24; 	T(MOV(ax, 1));	// 50814 mov     ax, 1 ;~ 1AE2:0B24
cs=0x1ae2;eip=0x000b27; 	X(PUSH(ax));	// 50815 push    ax ;~ 1AE2:0B27
cs=0x1ae2;eip=0x000b28; 	R(CALLF(sub_29f5d,0));	// 50816 call    sub_29F5D ;~ 1AE2:0B28
cs=0x1ae2;eip=0x000b2d; 	T(MOV(ax, 1));	// 50817 mov     ax, 1 ;~ 1AE2:0B2D
loc_29f30:
	// 8026 
cs=0x1ae2;eip=0x000b30; 	X(POP(si));	// 50820 pop     si ;~ 1AE2:0B30
cs=0x1ae2;eip=0x000b31; 	R(RETF(0));	// 50821 retf ;~ 1AE2:0B31
sub_29f32:
	// 50829 
#undef arg_0
#define arg_0 6
	// 50831 arg_0           = word ptr  6 ;~ 1AE2:0B32
ret_1ae2_b32:
	// 8027 
cs=0x1ae2;eip=0x000b32; 	X(PUSH(bp));	// 50833 push    bp ;~ 1AE2:0B32
cs=0x1ae2;eip=0x000b33; 	T(MOV(bp, sp));	// 50834 mov     bp, sp ;~ 1AE2:0B33
cs=0x1ae2;eip=0x000b35; 	X(PUSH(si));	// 50835 push    si ;~ 1AE2:0B35
cs=0x1ae2;eip=0x000b36; 	X(PUSH(di));	// 50836 push    di ;~ 1AE2:0B36
cs=0x1ae2;eip=0x000b37; 	X(PUSH(ds));	// 50837 push    ds ;~ 1AE2:0B37
cs=0x1ae2;eip=0x000b38; 	X(POP(es));	// 50838 pop     es ;~ 1AE2:0B38
cs=0x1ae2;eip=0x000b39; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_0))));	// 50840 mov     dx, [bp+arg_0] ;~ 1AE2:0B39
cs=0x1ae2;eip=0x000b3c; 	T(MOV(si, 0x0CB70));	// 50841 mov     si, 0CB70h ;~ 1AE2:0B3C
loc_29f3f:
	// 8028 
cs=0x1ae2;eip=0x000b3f; 	T(LODSW);	// 50844 lodsw ;~ 1AE2:0B3F
cs=0x1ae2;eip=0x000b40; 	T(CMP(ax, dx));	// 50845 cmp     ax, dx ;~ 1AE2:0B40
cs=0x1ae2;eip=0x000b42; 	R(JZ(loc_29f54));	// 50846 jz      short loc_29F54 ;~ 1AE2:0B42
cs=0x1ae2;eip=0x000b44; 	T(INC(ax));	// 50847 inc     ax ;~ 1AE2:0B44
cs=0x1ae2;eip=0x000b45; 	T(XCHG(ax, si));	// 50848 xchg    ax, si ;~ 1AE2:0B45
cs=0x1ae2;eip=0x000b46; 	R(JZ(loc_29f54));	// 50849 jz      short loc_29F54 ;~ 1AE2:0B46
cs=0x1ae2;eip=0x000b48; 	T(XCHG(ax, di));	// 50850 xchg    ax, di ;~ 1AE2:0B48
cs=0x1ae2;eip=0x000b49; 	T(XOR(ax, ax));	// 50851 xor     ax, ax ;~ 1AE2:0B49
cs=0x1ae2;eip=0x000b4b; 	T(MOV(cx, 0x0FFFF));	// 50852 mov     cx, 0FFFFh ;~ 1AE2:0B4B
	// 50853 repne scasb ;~ 1AE2:0B4E
cs=0x1ae2;eip=0x000b4e; 	T(	REPNE SCASB);	// 50853 repne scasb ;~ 1AE2:0B4E
cs=0x1ae2;eip=0x000b50; 	T(MOV(si, di));	// 50854 mov     si, di ;~ 1AE2:0B50
cs=0x1ae2;eip=0x000b52; 	R(JMP(loc_29f3f));	// 50855 jmp     short loc_29F3F ;~ 1AE2:0B52
loc_29f54:
	// 8029 
cs=0x1ae2;eip=0x000b54; 	T(XCHG(ax, si));	// 50860 xchg    ax, si ;~ 1AE2:0B54
cs=0x1ae2;eip=0x000b55; 	X(POP(di));	// 50861 pop     di ;~ 1AE2:0B55
cs=0x1ae2;eip=0x000b56; 	X(POP(si));	// 50862 pop     si ;~ 1AE2:0B56
cs=0x1ae2;eip=0x000b57; 	T(MOV(sp, bp));	// 50863 mov     sp, bp ;~ 1AE2:0B57
cs=0x1ae2;eip=0x000b59; 	X(POP(bp));	// 50864 pop     bp ;~ 1AE2:0B59
cs=0x1ae2;eip=0x000b5a; 	R(RETF(2));	// 50865 retf    2 ;~ 1AE2:0B5A
sub_29f5d:
	// 50873 
#undef arg_0
#define arg_0 6
	// 50876 arg_0           = word ptr  6 ;~ 1AE2:0B5D
ret_1ae2_b5d:
	// 8030 
cs=0x1ae2;eip=0x000b5d; 	X(PUSH(bp));	// 50878 push    bp ;~ 1AE2:0B5D
cs=0x1ae2;eip=0x000b5e; 	T(MOV(bp, sp));	// 50879 mov     bp, sp ;~ 1AE2:0B5E
cs=0x1ae2;eip=0x000b60; 	X(PUSH(di));	// 50880 push    di ;~ 1AE2:0B60
cs=0x1ae2;eip=0x000b61; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 50881 push    [bp+arg_0] ;~ 1AE2:0B61
cs=0x1ae2;eip=0x000b64; 	R(CALLF(sub_29f32,0));	// 50882 call    sub_29F32 ;~ 1AE2:0B64
cs=0x1ae2;eip=0x000b69; 	T(OR(ax, ax));	// 50883 or      ax, ax ;~ 1AE2:0B69
cs=0x1ae2;eip=0x000b6b; 	R(JZ(loc_29f81));	// 50884 jz      short loc_29F81 ;~ 1AE2:0B6B
cs=0x1ae2;eip=0x000b6d; 	T(XCHG(ax, dx));	// 50885 xchg    ax, dx ;~ 1AE2:0B6D
cs=0x1ae2;eip=0x000b6e; 	T(MOV(di, dx));	// 50886 mov     di, dx ;~ 1AE2:0B6E
cs=0x1ae2;eip=0x000b70; 	T(XOR(ax, ax));	// 50887 xor     ax, ax ;~ 1AE2:0B70
cs=0x1ae2;eip=0x000b72; 	T(MOV(cx, 0x0FFFF));	// 50888 mov     cx, 0FFFFh ;~ 1AE2:0B72
	// 50889 repne scasb ;~ 1AE2:0B75
cs=0x1ae2;eip=0x000b75; 	T(	REPNE SCASB);	// 50889 repne scasb ;~ 1AE2:0B75
cs=0x1ae2;eip=0x000b77; 	T(NOT(cx));	// 50890 not     cx ;~ 1AE2:0B77
cs=0x1ae2;eip=0x000b79; 	T(DEC(cx));	// 50891 dec     cx ;~ 1AE2:0B79
cs=0x1ae2;eip=0x000b7a; 	T(MOV(bx, 2));	// 50892 mov     bx, 2 ;~ 1AE2:0B7A
cs=0x1ae2;eip=0x000b7d; 	T(MOV(ah, 0x40));	// 50893 mov     ah, 40h ;~ 1AE2:0B7D
cs=0x1ae2;eip=0x000b7f; 	R(_INT(0x21));	// 50894 int     21h             ; DOS - 2+ - WRITE TO FILE WITH HANDLE ;~ 1AE2:0B7F
loc_29f81:
	// 8031 
cs=0x1ae2;eip=0x000b81; 	X(POP(di));	// 50898 pop     di ;~ 1AE2:0B81
cs=0x1ae2;eip=0x000b82; 	T(MOV(sp, bp));	// 50899 mov     sp, bp ;~ 1AE2:0B82
cs=0x1ae2;eip=0x000b84; 	X(POP(bp));	// 50900 pop     bp ;~ 1AE2:0B84
cs=0x1ae2;eip=0x000b85; 	R(RETF(2));	// 50901 retf    2 ;~ 1AE2:0B85
sub_29f88:
	// 50909 
#undef var_2
#define var_2 -2
	// 50912 var_2           = word ptr -2 ;~ 1AE2:0B88
#undef arg_0
#define arg_0 6
	// 50913 arg_0           = word ptr  6 ;~ 1AE2:0B88
ret_1ae2_b88:
	// 8032 
cs=0x1ae2;eip=0x000b88; 	X(PUSH(bp));	// 50915 push    bp ;~ 1AE2:0B88
cs=0x1ae2;eip=0x000b89; 	T(MOV(bp, sp));	// 50916 mov     bp, sp ;~ 1AE2:0B89
cs=0x1ae2;eip=0x000b8b; 	T(SUB(sp, 2));	// 50917 sub     sp, 2 ;~ 1AE2:0B8B
cs=0x1ae2;eip=0x000b8e; 	X(PUSH(si));	// 50918 push    si ;~ 1AE2:0B8E
cs=0x1ae2;eip=0x000b8f; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 50919 mov     si, [bp+arg_0] ;~ 1AE2:0B8F
cs=0x1ae2;eip=0x000b92; 	T(MOV(ax, si));	// 50920 mov     ax, si ;~ 1AE2:0B92
cs=0x1ae2;eip=0x000b94; 	T(SUB(ax, 0x0C490));	// 50921 sub     ax, 0C490h ;~ 1AE2:0B94
cs=0x1ae2;eip=0x000b97; 	T(MOV(cl, 3));	// 50922 mov     cl, 3 ;~ 1AE2:0B97
cs=0x1ae2;eip=0x000b99; 	T(SAR(ax, cl));	// 50923 sar     ax, cl ;~ 1AE2:0B99
cs=0x1ae2;eip=0x000b9b; 	T(MOV(cx, ax));	// 50924 mov     cx, ax ;~ 1AE2:0B9B
cs=0x1ae2;eip=0x000b9d; 	T(SHL(ax, 1));	// 50925 shl     ax, 1 ;~ 1AE2:0B9D
cs=0x1ae2;eip=0x000b9f; 	T(ADD(ax, cx));	// 50926 add     ax, cx ;~ 1AE2:0B9F
cs=0x1ae2;eip=0x000ba1; 	T(SHL(ax, 1));	// 50927 shl     ax, 1 ;~ 1AE2:0BA1
cs=0x1ae2;eip=0x000ba3; 	T(ADD(ax, 0x0C530));	// 50928 add     ax, 0C530h ;~ 1AE2:0BA3
cs=0x1ae2;eip=0x000ba6; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 50929 mov     [bp+var_2], ax ;~ 1AE2:0BA6
cs=0x1ae2;eip=0x000ba9; 	T(TEST(*(raddr(ds,si+6)), 0x83));	// 50930 test    byte ptr [si+6], 83h ;~ 1AE2:0BA9
cs=0x1ae2;eip=0x000bad; 	R(JZ(loc_29fb5));	// 50931 jz      short loc_29FB5 ;~ 1AE2:0BAD
cs=0x1ae2;eip=0x000baf; 	T(TEST(*(raddr(ds,si+6)), 0x40));	// 50932 test    byte ptr [si+6], 40h ;~ 1AE2:0BAF
cs=0x1ae2;eip=0x000bb3; 	R(JZ(loc_29fbc));	// 50933 jz      short loc_29FBC ;~ 1AE2:0BB3
loc_29fb5:
	// 8033 
cs=0x1ae2;eip=0x000bb5; 	T(MOV(ax, 0x0FFFF));	// 50937 mov     ax, 0FFFFh ;~ 1AE2:0BB5
cs=0x1ae2;eip=0x000bb8; 	R(JMP(loc_2a045));	// 50938 jmp     loc_2A045 ;~ 1AE2:0BB8
loc_29fbc:
	// 8034 
cs=0x1ae2;eip=0x000bbc; 	T(TEST(*(raddr(ds,si+6)), 2));	// 50943 test    byte ptr [si+6], 2 ;~ 1AE2:0BBC
cs=0x1ae2;eip=0x000bc0; 	R(JZ(loc_29fc8));	// 50944 jz      short loc_29FC8 ;~ 1AE2:0BC0
cs=0x1ae2;eip=0x000bc2; 	X(OR(*(raddr(ds,si+6)), 0x20));	// 50945 or      byte ptr [si+6], 20h ;~ 1AE2:0BC2
cs=0x1ae2;eip=0x000bc6; 	R(JMP(loc_29fb5));	// 50946 jmp     short loc_29FB5 ;~ 1AE2:0BC6
loc_29fc8:
	// 8035 
cs=0x1ae2;eip=0x000bc8; 	X(OR(*(raddr(ds,si+6)), 1));	// 50950 or      byte ptr [si+6], 1 ;~ 1AE2:0BC8
cs=0x1ae2;eip=0x000bcc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 50951 mov     bx, [bp+var_2] ;~ 1AE2:0BCC
cs=0x1ae2;eip=0x000bcf; 	X(AND(*(raddr(ds,bx)), 0x0FB));	// 50952 and     byte ptr [bx], 0FBh ;~ 1AE2:0BCF
cs=0x1ae2;eip=0x000bd2; 	T(TEST(*(raddr(ds,si+6)), 0x0C));	// 50953 test    byte ptr [si+6], 0Ch ;~ 1AE2:0BD2
cs=0x1ae2;eip=0x000bd6; 	R(JNZ(loc_29ffa));	// 50954 jnz     short loc_29FFA ;~ 1AE2:0BD6
cs=0x1ae2;eip=0x000bd8; 	T(MOV(bx, si));	// 50955 mov     bx, si ;~ 1AE2:0BD8
cs=0x1ae2;eip=0x000bda; 	T(SUB(bx, 0x0C490));	// 50956 sub     bx, 0C490h ;~ 1AE2:0BDA
cs=0x1ae2;eip=0x000bde; 	T(MOV(cl, 3));	// 50957 mov     cl, 3 ;~ 1AE2:0BDE
cs=0x1ae2;eip=0x000be0; 	T(SAR(bx, cl));	// 50958 sar     bx, cl ;~ 1AE2:0BE0
cs=0x1ae2;eip=0x000be2; 	T(MOV(ax, bx));	// 50959 mov     ax, bx ;~ 1AE2:0BE2
cs=0x1ae2;eip=0x000be4; 	T(SHL(bx, 1));	// 50960 shl     bx, 1 ;~ 1AE2:0BE4
cs=0x1ae2;eip=0x000be6; 	T(ADD(bx, ax));	// 50961 add     bx, ax ;~ 1AE2:0BE6
cs=0x1ae2;eip=0x000be8; 	T(SHL(bx, 1));	// 50962 shl     bx, 1 ;~ 1AE2:0BE8
cs=0x1ae2;eip=0x000bea; 	T(TEST(*(raddr(ds,bx-0x3AD0)), 1));	// 50963 test    byte ptr [bx-3AD0h], 1 ;~ 1AE2:0BEA
cs=0x1ae2;eip=0x000bef; 	R(JNZ(loc_29ffa));	// 50964 jnz     short loc_29FFA ;~ 1AE2:0BEF
cs=0x1ae2;eip=0x000bf1; 	X(PUSH(si));	// 50965 push    si ;~ 1AE2:0BF1
cs=0x1ae2;eip=0x000bf2; 	R(CALL(sub_2a96a,0));	// 50966 call    sub_2A96A ;~ 1AE2:0BF2
cs=0x1ae2;eip=0x000bf5; 	T(ADD(sp, 2));	// 50967 add     sp, 2 ;~ 1AE2:0BF5
cs=0x1ae2;eip=0x000bf8; 	R(JMP(loc_29fff));	// 50968 jmp     short loc_29FFF ;~ 1AE2:0BF8
loc_29ffa:
	// 8036 
cs=0x1ae2;eip=0x000bfa; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 50973 mov     ax, [si+4] ;~ 1AE2:0BFA
cs=0x1ae2;eip=0x000bfd; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 50974 mov     [si], ax ;~ 1AE2:0BFD
loc_29fff:
	// 8037 
cs=0x1ae2;eip=0x000bff; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 50977 mov     bx, [bp+var_2] ;~ 1AE2:0BFF
cs=0x1ae2;eip=0x000c02; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 50978 push    word ptr [bx+2] ;~ 1AE2:0C02
cs=0x1ae2;eip=0x000c05; 	X(PUSH(*(dw*)(raddr(ds,si+4))));	// 50979 push    word ptr [si+4] ;~ 1AE2:0C05
cs=0x1ae2;eip=0x000c08; 	T(MOV(al, *(raddr(ds,si+7))));	// 50980 mov     al, [si+7] ;~ 1AE2:0C08
cs=0x1ae2;eip=0x000c0b; 	T(CBW);	// 50981 cbw ;~ 1AE2:0C0B
cs=0x1ae2;eip=0x000c0c; 	X(PUSH(ax));	// 50982 push    ax ;~ 1AE2:0C0C
cs=0x1ae2;eip=0x000c0d; 	R(CALLF(sub_2a39c,0));	// 50983 call    sub_2A39C ;~ 1AE2:0C0D
cs=0x1ae2;eip=0x000c12; 	T(ADD(sp, 6));	// 50984 add     sp, 6 ;~ 1AE2:0C12
cs=0x1ae2;eip=0x000c15; 	X(MOV(*(dw*)(raddr(ds,si+2)), ax));	// 50985 mov     [si+2], ax ;~ 1AE2:0C15
cs=0x1ae2;eip=0x000c18; 	T(OR(ax, ax));	// 50986 or      ax, ax ;~ 1AE2:0C18
cs=0x1ae2;eip=0x000c1a; 	R(JZ(loc_2a021));	// 50987 jz      short loc_2A021 ;~ 1AE2:0C1A
cs=0x1ae2;eip=0x000c1c; 	T(CMP(ax, 0x0FFFF));	// 50988 cmp     ax, 0FFFFh ;~ 1AE2:0C1C
cs=0x1ae2;eip=0x000c1f; 	R(JNZ(loc_2a03a));	// 50989 jnz     short loc_2A03A ;~ 1AE2:0C1F
loc_2a021:
	// 8038 
cs=0x1ae2;eip=0x000c21; 	T(CMP(*(dw*)(raddr(ds,si+2)), 0));	// 50992 cmp     word ptr [si+2], 0 ;~ 1AE2:0C21
cs=0x1ae2;eip=0x000c25; 	R(JZ(loc_2a02c));	// 50993 jz      short loc_2A02C ;~ 1AE2:0C25
cs=0x1ae2;eip=0x000c27; 	T(MOV(al, 0x20));	// 50994 mov     al, 20h ; ' ' ;~ 1AE2:0C27
cs=0x1ae2;eip=0x000c29; 	R(JMP(loc_2a02e));	// 50995 jmp     short loc_2A02E ;~ 1AE2:0C29
loc_2a02c:
	// 8039 
cs=0x1ae2;eip=0x000c2c; 	T(MOV(al, 0x10));	// 51000 mov     al, 10h ;~ 1AE2:0C2C
loc_2a02e:
	// 8040 
cs=0x1ae2;eip=0x000c2e; 	X(OR(*(raddr(ds,si+6)), al));	// 51003 or      [si+6], al ;~ 1AE2:0C2E
cs=0x1ae2;eip=0x000c31; 	X(MOV(*(dw*)(raddr(ds,si+2)), 0));	// 51004 mov     word ptr [si+2], 0 ;~ 1AE2:0C31
cs=0x1ae2;eip=0x000c36; 	R(JMP(loc_29fb5));	// 51005 jmp     loc_29FB5 ;~ 1AE2:0C36
loc_2a03a:
	// 8041 
cs=0x1ae2;eip=0x000c3a; 	X(DEC(*(dw*)(raddr(ds,si+2))));	// 51010 dec     word ptr [si+2] ;~ 1AE2:0C3A
cs=0x1ae2;eip=0x000c3d; 	T(MOV(bx, *(dw*)(raddr(ds,si))));	// 51011 mov     bx, [si] ;~ 1AE2:0C3D
cs=0x1ae2;eip=0x000c3f; 	X(INC(*(dw*)(raddr(ds,si))));	// 51012 inc     word ptr [si] ;~ 1AE2:0C3F
cs=0x1ae2;eip=0x000c41; 	T(MOV(al, *(raddr(ds,bx))));	// 51013 mov     al, [bx] ;~ 1AE2:0C41
cs=0x1ae2;eip=0x000c43; 	T(SUB(ah, ah));	// 51014 sub     ah, ah ;~ 1AE2:0C43
loc_2a045:
	// 8042 
cs=0x1ae2;eip=0x000c45; 	X(POP(si));	// 51017 pop     si ;~ 1AE2:0C45
cs=0x1ae2;eip=0x000c46; 	T(MOV(sp, bp));	// 51018 mov     sp, bp ;~ 1AE2:0C46
cs=0x1ae2;eip=0x000c48; 	X(POP(bp));	// 51019 pop     bp ;~ 1AE2:0C48
cs=0x1ae2;eip=0x000c49; 	R(RETF(0));	// 51020 retf ;~ 1AE2:0C49
sub_2a04a:
	// 51028 
#undef var_8
#define var_8 -8
	// 51031 var_8           = word ptr -8 ;~ 1AE2:0C4A
#undef var_6
#define var_6 -6
	// 51032 var_6           = word ptr -6 ;~ 1AE2:0C4A
#undef var_4
#define var_4 -4
	// 51033 var_4           = word ptr -4 ;~ 1AE2:0C4A
#undef arg_0
#define arg_0 6
	// 51034 arg_0           = byte ptr  6 ;~ 1AE2:0C4A
#undef arg_2
#define arg_2 8
	// 51035 arg_2           = word ptr  8 ;~ 1AE2:0C4A
ret_1ae2_c4a:
	// 8043 
cs=0x1ae2;eip=0x000c4a; 	X(PUSH(bp));	// 51037 push    bp ;~ 1AE2:0C4A
cs=0x1ae2;eip=0x000c4b; 	T(MOV(bp, sp));	// 51038 mov     bp, sp ;~ 1AE2:0C4B
cs=0x1ae2;eip=0x000c4d; 	T(SUB(sp, 8));	// 51039 sub     sp, 8 ;~ 1AE2:0C4D
cs=0x1ae2;eip=0x000c50; 	X(PUSH(di));	// 51040 push    di ;~ 1AE2:0C50
cs=0x1ae2;eip=0x000c51; 	X(PUSH(si));	// 51041 push    si ;~ 1AE2:0C51
cs=0x1ae2;eip=0x000c52; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 51042 mov     si, [bp+arg_2] ;~ 1AE2:0C52
cs=0x1ae2;eip=0x000c55; 	T(MOV(al, *(raddr(ds,si+7))));	// 51043 mov     al, [si+7] ;~ 1AE2:0C55
cs=0x1ae2;eip=0x000c58; 	T(CBW);	// 51044 cbw ;~ 1AE2:0C58
cs=0x1ae2;eip=0x000c59; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 51045 mov     [bp+var_6], ax ;~ 1AE2:0C59
cs=0x1ae2;eip=0x000c5c; 	T(MOV(ax, si));	// 51046 mov     ax, si ;~ 1AE2:0C5C
cs=0x1ae2;eip=0x000c5e; 	T(SUB(ax, 0x0C490));	// 51047 sub     ax, 0C490h ;~ 1AE2:0C5E
cs=0x1ae2;eip=0x000c61; 	T(MOV(cl, 3));	// 51048 mov     cl, 3 ;~ 1AE2:0C61
cs=0x1ae2;eip=0x000c63; 	T(SAR(ax, cl));	// 51049 sar     ax, cl ;~ 1AE2:0C63
cs=0x1ae2;eip=0x000c65; 	T(MOV(cx, ax));	// 51050 mov     cx, ax ;~ 1AE2:0C65
cs=0x1ae2;eip=0x000c67; 	T(SHL(ax, 1));	// 51051 shl     ax, 1 ;~ 1AE2:0C67
cs=0x1ae2;eip=0x000c69; 	T(ADD(ax, cx));	// 51052 add     ax, cx ;~ 1AE2:0C69
cs=0x1ae2;eip=0x000c6b; 	T(SHL(ax, 1));	// 51053 shl     ax, 1 ;~ 1AE2:0C6B
cs=0x1ae2;eip=0x000c6d; 	T(ADD(ax, 0x0C530));	// 51054 add     ax, 0C530h ;~ 1AE2:0C6D
cs=0x1ae2;eip=0x000c70; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 51055 mov     [bp+var_8], ax ;~ 1AE2:0C70
cs=0x1ae2;eip=0x000c73; 	T(TEST(*(raddr(ds,si+6)), 0x83));	// 51056 test    byte ptr [si+6], 83h ;~ 1AE2:0C73
cs=0x1ae2;eip=0x000c77; 	R(JZ(loc_2a07f));	// 51057 jz      short loc_2A07F ;~ 1AE2:0C77
cs=0x1ae2;eip=0x000c79; 	T(TEST(*(raddr(ds,si+6)), 0x40));	// 51058 test    byte ptr [si+6], 40h ;~ 1AE2:0C79
cs=0x1ae2;eip=0x000c7d; 	R(JZ(loc_2a08a));	// 51059 jz      short loc_2A08A ;~ 1AE2:0C7D
loc_2a07f:
	// 8044 
cs=0x1ae2;eip=0x000c7f; 	X(OR(*(raddr(ds,si+6)), 0x20));	// 51063 or      byte ptr [si+6], 20h ;~ 1AE2:0C7F
cs=0x1ae2;eip=0x000c83; 	T(MOV(ax, 0x0FFFF));	// 51064 mov     ax, 0FFFFh ;~ 1AE2:0C83
cs=0x1ae2;eip=0x000c86; 	R(JMP(loc_2a1a1));	// 51065 jmp     loc_2A1A1 ;~ 1AE2:0C86
loc_2a08a:
	// 8045 
cs=0x1ae2;eip=0x000c8a; 	T(TEST(*(raddr(ds,si+6)), 1));	// 51070 test    byte ptr [si+6], 1 ;~ 1AE2:0C8A
cs=0x1ae2;eip=0x000c8e; 	R(JNZ(loc_2a07f));	// 51071 jnz     short loc_2A07F ;~ 1AE2:0C8E
cs=0x1ae2;eip=0x000c90; 	X(OR(*(raddr(ds,si+6)), 2));	// 51072 or      byte ptr [si+6], 2 ;~ 1AE2:0C90
cs=0x1ae2;eip=0x000c94; 	X(AND(*(raddr(ds,si+6)), 0x0EF));	// 51073 and     byte ptr [si+6], 0EFh ;~ 1AE2:0C94
cs=0x1ae2;eip=0x000c98; 	T(SUB(ax, ax));	// 51074 sub     ax, ax ;~ 1AE2:0C98
cs=0x1ae2;eip=0x000c9a; 	X(MOV(*(dw*)(raddr(ds,si+2)), ax));	// 51075 mov     [si+2], ax ;~ 1AE2:0C9A
cs=0x1ae2;eip=0x000c9d; 	T(MOV(di, ax));	// 51076 mov     di, ax ;~ 1AE2:0C9D
cs=0x1ae2;eip=0x000c9f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), di));	// 51077 mov     [bp+var_4], di ;~ 1AE2:0C9F
cs=0x1ae2;eip=0x000ca2; 	T(TEST(*(raddr(ds,si+6)), 0x0C));	// 51078 test    byte ptr [si+6], 0Ch ;~ 1AE2:0CA2
cs=0x1ae2;eip=0x000ca6; 	R(JNZ(loc_2a109));	// 51079 jnz     short loc_2A109 ;~ 1AE2:0CA6
cs=0x1ae2;eip=0x000ca8; 	T(MOV(bx, si));	// 51080 mov     bx, si ;~ 1AE2:0CA8
cs=0x1ae2;eip=0x000caa; 	T(SUB(bx, 0x0C490));	// 51081 sub     bx, 0C490h ;~ 1AE2:0CAA
cs=0x1ae2;eip=0x000cae; 	T(MOV(cl, 3));	// 51082 mov     cl, 3 ;~ 1AE2:0CAE
cs=0x1ae2;eip=0x000cb0; 	T(SAR(bx, cl));	// 51083 sar     bx, cl ;~ 1AE2:0CB0
cs=0x1ae2;eip=0x000cb2; 	T(MOV(ax, bx));	// 51084 mov     ax, bx ;~ 1AE2:0CB2
cs=0x1ae2;eip=0x000cb4; 	T(SHL(bx, 1));	// 51085 shl     bx, 1 ;~ 1AE2:0CB4
cs=0x1ae2;eip=0x000cb6; 	T(ADD(bx, ax));	// 51086 add     bx, ax ;~ 1AE2:0CB6
cs=0x1ae2;eip=0x000cb8; 	T(SHL(bx, 1));	// 51087 shl     bx, 1 ;~ 1AE2:0CB8
cs=0x1ae2;eip=0x000cba; 	T(TEST(*(raddr(ds,bx-0x3AD0)), 1));	// 51088 test    byte ptr [bx-3AD0h], 1 ;~ 1AE2:0CBA
cs=0x1ae2;eip=0x000cbf; 	R(JNZ(loc_2a109));	// 51089 jnz     short loc_2A109 ;~ 1AE2:0CBF
cs=0x1ae2;eip=0x000cc1; 	T(CMP(si, 0x0C498));	// 51090 cmp     si, 0C498h ;~ 1AE2:0CC1
cs=0x1ae2;eip=0x000cc5; 	R(JZ(loc_2a0cd));	// 51091 jz      short loc_2A0CD ;~ 1AE2:0CC5
cs=0x1ae2;eip=0x000cc7; 	T(CMP(si, 0x0C4A0));	// 51092 cmp     si, 0C4A0h ;~ 1AE2:0CC7
cs=0x1ae2;eip=0x000ccb; 	R(JNZ(loc_2a102));	// 51093 jnz     short loc_2A102 ;~ 1AE2:0CCB
loc_2a0cd:
	// 8046 
cs=0x1ae2;eip=0x000ccd; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 51096 push    [bp+var_6] ;~ 1AE2:0CCD
cs=0x1ae2;eip=0x000cd0; 	R(CALLF(sub_2ac0a,0));	// 51097 call    sub_2AC0A ;~ 1AE2:0CD0
cs=0x1ae2;eip=0x000cd5; 	T(ADD(sp, 2));	// 51098 add     sp, 2 ;~ 1AE2:0CD5
cs=0x1ae2;eip=0x000cd8; 	T(OR(ax, ax));	// 51099 or      ax, ax ;~ 1AE2:0CD8
cs=0x1ae2;eip=0x000cda; 	R(JNZ(loc_2a109));	// 51100 jnz     short loc_2A109 ;~ 1AE2:0CDA
cs=0x1ae2;eip=0x000cdc; 	X(INC(word_38414));	// 51101 inc     word_38414 ;~ 1AE2:0CDC
cs=0x1ae2;eip=0x000ce0; 	T(CMP(si, 0x0C498));	// 51102 cmp     si, 0C498h ;~ 1AE2:0CE0
cs=0x1ae2;eip=0x000ce4; 	R(JNZ(loc_2a0ec));	// 51103 jnz     short loc_2A0EC ;~ 1AE2:0CE4
cs=0x1ae2;eip=0x000ce6; 	T(MOV(ax, 0x0CC94));	// 51104 mov     ax, 0CC94h ;~ 1AE2:0CE6
cs=0x1ae2;eip=0x000ce9; 	R(JMP(loc_2a0ef));	// 51105 jmp     short loc_2A0EF ;~ 1AE2:0CE9
loc_2a0ec:
	// 8047 
cs=0x1ae2;eip=0x000cec; 	T(MOV(ax, 0x0E874));	// 51110 mov     ax, 0E874h ;~ 1AE2:0CEC
loc_2a0ef:
	// 8048 
cs=0x1ae2;eip=0x000cef; 	X(MOV(*(dw*)(raddr(ds,si+4)), ax));	// 51113 mov     [si+4], ax ;~ 1AE2:0CEF
cs=0x1ae2;eip=0x000cf2; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 51114 mov     [si], ax ;~ 1AE2:0CF2
cs=0x1ae2;eip=0x000cf4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 51115 mov     bx, [bp+var_8] ;~ 1AE2:0CF4
cs=0x1ae2;eip=0x000cf7; 	X(MOV(*(dw*)(raddr(ds,bx+2)), 0x200));	// 51116 mov     word ptr [bx+2], 200h ;~ 1AE2:0CF7
cs=0x1ae2;eip=0x000cfc; 	X(MOV(*(raddr(ds,bx)), 1));	// 51117 mov     byte ptr [bx], 1 ;~ 1AE2:0CFC
cs=0x1ae2;eip=0x000cff; 	R(JMP(loc_2a109));	// 51118 jmp     short loc_2A109 ;~ 1AE2:0CFF
loc_2a102:
	// 8049 
cs=0x1ae2;eip=0x000d02; 	X(PUSH(si));	// 51123 push    si ;~ 1AE2:0D02
cs=0x1ae2;eip=0x000d03; 	R(CALL(sub_2a96a,0));	// 51124 call    sub_2A96A ;~ 1AE2:0D03
cs=0x1ae2;eip=0x000d06; 	T(ADD(sp, 2));	// 51125 add     sp, 2 ;~ 1AE2:0D06
loc_2a109:
	// 8050 
cs=0x1ae2;eip=0x000d09; 	T(TEST(*(raddr(ds,si+6)), 8));	// 51129 test    byte ptr [si+6], 8 ;~ 1AE2:0D09
cs=0x1ae2;eip=0x000d0d; 	R(JNZ(loc_2a128));	// 51130 jnz     short loc_2A128 ;~ 1AE2:0D0D
cs=0x1ae2;eip=0x000d0f; 	T(MOV(bx, si));	// 51131 mov     bx, si ;~ 1AE2:0D0F
cs=0x1ae2;eip=0x000d11; 	T(SUB(bx, 0x0C490));	// 51132 sub     bx, 0C490h ;~ 1AE2:0D11
cs=0x1ae2;eip=0x000d15; 	T(MOV(cl, 3));	// 51133 mov     cl, 3 ;~ 1AE2:0D15
cs=0x1ae2;eip=0x000d17; 	T(SAR(bx, cl));	// 51134 sar     bx, cl ;~ 1AE2:0D17
cs=0x1ae2;eip=0x000d19; 	T(MOV(ax, bx));	// 51135 mov     ax, bx ;~ 1AE2:0D19
cs=0x1ae2;eip=0x000d1b; 	T(SHL(bx, 1));	// 51136 shl     bx, 1 ;~ 1AE2:0D1B
cs=0x1ae2;eip=0x000d1d; 	T(ADD(bx, ax));	// 51137 add     bx, ax ;~ 1AE2:0D1D
cs=0x1ae2;eip=0x000d1f; 	T(SHL(bx, 1));	// 51138 shl     bx, 1 ;~ 1AE2:0D1F
cs=0x1ae2;eip=0x000d21; 	T(TEST(*(raddr(ds,bx-0x3AD0)), 1));	// 51139 test    byte ptr [bx-3AD0h], 1 ;~ 1AE2:0D21
cs=0x1ae2;eip=0x000d26; 	R(JZ(loc_2a17c));	// 51140 jz      short loc_2A17C ;~ 1AE2:0D26
loc_2a128:
	// 8051 
cs=0x1ae2;eip=0x000d28; 	T(MOV(di, *(dw*)(raddr(ds,si))));	// 51143 mov     di, [si] ;~ 1AE2:0D28
cs=0x1ae2;eip=0x000d2a; 	T(SUB(di, *(dw*)(raddr(ds,si+4))));	// 51144 sub     di, [si+4] ;~ 1AE2:0D2A
cs=0x1ae2;eip=0x000d2d; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 51145 mov     ax, [si+4] ;~ 1AE2:0D2D
cs=0x1ae2;eip=0x000d30; 	T(INC(ax));	// 51146 inc     ax ;~ 1AE2:0D30
cs=0x1ae2;eip=0x000d31; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 51147 mov     [si], ax ;~ 1AE2:0D31
cs=0x1ae2;eip=0x000d33; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 51148 mov     bx, [bp+var_8] ;~ 1AE2:0D33
cs=0x1ae2;eip=0x000d36; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 51149 mov     ax, [bx+2] ;~ 1AE2:0D36
cs=0x1ae2;eip=0x000d39; 	T(DEC(ax));	// 51150 dec     ax ;~ 1AE2:0D39
cs=0x1ae2;eip=0x000d3a; 	X(MOV(*(dw*)(raddr(ds,si+2)), ax));	// 51151 mov     [si+2], ax ;~ 1AE2:0D3A
cs=0x1ae2;eip=0x000d3d; 	T(OR(di, di));	// 51152 or      di, di ;~ 1AE2:0D3D
cs=0x1ae2;eip=0x000d3f; 	R(JLE(loc_2a156));	// 51153 jle     short loc_2A156 ;~ 1AE2:0D3F
cs=0x1ae2;eip=0x000d41; 	X(PUSH(di));	// 51154 push    di ;~ 1AE2:0D41
cs=0x1ae2;eip=0x000d42; 	X(PUSH(*(dw*)(raddr(ds,si+4))));	// 51155 push    word ptr [si+4] ;~ 1AE2:0D42
cs=0x1ae2;eip=0x000d45; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 51156 push    [bp+var_6] ;~ 1AE2:0D45
cs=0x1ae2;eip=0x000d48; 	R(CALLF(sub_2a47a,0));	// 51157 call    sub_2A47A ;~ 1AE2:0D48
cs=0x1ae2;eip=0x000d4d; 	T(ADD(sp, 6));	// 51158 add     sp, 6 ;~ 1AE2:0D4D
cs=0x1ae2;eip=0x000d50; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 51159 mov     [bp+var_4], ax ;~ 1AE2:0D50
cs=0x1ae2;eip=0x000d53; 	R(JMP(loc_2a171));	// 51160 jmp     short loc_2A171 ;~ 1AE2:0D53
loc_2a156:
	// 8052 
cs=0x1ae2;eip=0x000d56; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_6))));	// 51165 mov     bx, [bp+var_6] ;~ 1AE2:0D56
cs=0x1ae2;eip=0x000d59; 	T(TEST(*(raddr(ds,bx-0x3BA8)), 0x20));	// 51166 test    byte ptr [bx-3BA8h], 20h ;~ 1AE2:0D59
cs=0x1ae2;eip=0x000d5e; 	R(JZ(loc_2a171));	// 51167 jz      short loc_2A171 ;~ 1AE2:0D5E
cs=0x1ae2;eip=0x000d60; 	T(MOV(ax, 2));	// 51168 mov     ax, 2 ;~ 1AE2:0D60
cs=0x1ae2;eip=0x000d63; 	X(PUSH(ax));	// 51169 push    ax ;~ 1AE2:0D63
cs=0x1ae2;eip=0x000d64; 	T(SUB(ax, ax));	// 51170 sub     ax, ax ;~ 1AE2:0D64
cs=0x1ae2;eip=0x000d66; 	X(PUSH(ax));	// 51171 push    ax ;~ 1AE2:0D66
cs=0x1ae2;eip=0x000d67; 	X(PUSH(ax));	// 51172 push    ax ;~ 1AE2:0D67
cs=0x1ae2;eip=0x000d68; 	X(PUSH(bx));	// 51173 push    bx ;~ 1AE2:0D68
cs=0x1ae2;eip=0x000d69; 	R(CALLF(sub_2a9d8,0));	// 51174 call    sub_2A9D8 ;~ 1AE2:0D69
cs=0x1ae2;eip=0x000d6e; 	T(ADD(sp, 8));	// 51175 add     sp, 8 ;~ 1AE2:0D6E
loc_2a171:
	// 8053 
cs=0x1ae2;eip=0x000d71; 	T(MOV(bx, *(dw*)(raddr(ds,si+4))));	// 51179 mov     bx, [si+4] ;~ 1AE2:0D71
cs=0x1ae2;eip=0x000d74; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 51180 mov     al, [bp+arg_0] ;~ 1AE2:0D74
cs=0x1ae2;eip=0x000d77; 	X(MOV(*(raddr(ds,bx)), al));	// 51181 mov     [bx], al ;~ 1AE2:0D77
cs=0x1ae2;eip=0x000d79; 	R(JMP(loc_2a194));	// 51182 jmp     short loc_2A194 ;~ 1AE2:0D79
loc_2a17c:
	// 8054 
cs=0x1ae2;eip=0x000d7c; 	T(MOV(di, 1));	// 51187 mov     di, 1 ;~ 1AE2:0D7C
cs=0x1ae2;eip=0x000d7f; 	T(MOV(ax, di));	// 51188 mov     ax, di ;~ 1AE2:0D7F
cs=0x1ae2;eip=0x000d81; 	X(PUSH(ax));	// 51189 push    ax ;~ 1AE2:0D81
cs=0x1ae2;eip=0x000d82; 	T(ax = bp+arg_0);	// 51190 lea     ax, [bp+arg_0] ;~ 1AE2:0D82
cs=0x1ae2;eip=0x000d85; 	X(PUSH(ax));	// 51191 push    ax ;~ 1AE2:0D85
cs=0x1ae2;eip=0x000d86; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 51192 push    [bp+var_6] ;~ 1AE2:0D86
cs=0x1ae2;eip=0x000d89; 	R(CALLF(sub_2a47a,0));	// 51193 call    sub_2A47A ;~ 1AE2:0D89
cs=0x1ae2;eip=0x000d8e; 	T(ADD(sp, 6));	// 51194 add     sp, 6 ;~ 1AE2:0D8E
cs=0x1ae2;eip=0x000d91; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 51195 mov     [bp+var_4], ax ;~ 1AE2:0D91
loc_2a194:
	// 8055 
cs=0x1ae2;eip=0x000d94; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), di));	// 51198 cmp     [bp+var_4], di ;~ 1AE2:0D94
cs=0x1ae2;eip=0x000d97; 	R(JZ(loc_2a19c));	// 51199 jz      short loc_2A19C ;~ 1AE2:0D97
cs=0x1ae2;eip=0x000d99; 	R(JMP(loc_2a07f));	// 51200 jmp     loc_2A07F ;~ 1AE2:0D99
loc_2a19c:
	// 8056 
cs=0x1ae2;eip=0x000d9c; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 51204 mov     al, [bp+arg_0] ;~ 1AE2:0D9C
cs=0x1ae2;eip=0x000d9f; 	T(SUB(ah, ah));	// 51205 sub     ah, ah ;~ 1AE2:0D9F
loc_2a1a1:
	// 8057 
cs=0x1ae2;eip=0x000da1; 	X(POP(si));	// 51208 pop     si ;~ 1AE2:0DA1
cs=0x1ae2;eip=0x000da2; 	X(POP(di));	// 51209 pop     di ;~ 1AE2:0DA2
cs=0x1ae2;eip=0x000da3; 	T(MOV(sp, bp));	// 51210 mov     sp, bp ;~ 1AE2:0DA3
cs=0x1ae2;eip=0x000da5; 	X(POP(bp));	// 51211 pop     bp ;~ 1AE2:0DA5
cs=0x1ae2;eip=0x000da6; 	R(RETF(0));	// 51212 retf ;~ 1AE2:0DA6
sub_2a1a8:
	// 51222 
#undef arg_0
#define arg_0 6
	// 51224 arg_0           = word ptr  6 ;~ 1AE2:0DA8
ret_1ae2_da8:
	// 8058 
cs=0x1ae2;eip=0x000da8; 	X(PUSH(bp));	// 51226 push    bp ;~ 1AE2:0DA8
cs=0x1ae2;eip=0x000da9; 	T(MOV(bp, sp));	// 51227 mov     bp, sp ;~ 1AE2:0DA9
cs=0x1ae2;eip=0x000dab; 	X(PUSH(si));	// 51228 push    si ;~ 1AE2:0DAB
cs=0x1ae2;eip=0x000dac; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 51229 mov     si, [bp+arg_0] ;~ 1AE2:0DAC
cs=0x1ae2;eip=0x000daf; 	T(TEST(*(raddr(ds,si+6)), 0x83));	// 51230 test    byte ptr [si+6], 83h ;~ 1AE2:0DAF
cs=0x1ae2;eip=0x000db3; 	R(JZ(loc_2a1d4));	// 51231 jz      short loc_2A1D4 ;~ 1AE2:0DB3
cs=0x1ae2;eip=0x000db5; 	T(TEST(*(raddr(ds,si+6)), 8));	// 51232 test    byte ptr [si+6], 8 ;~ 1AE2:0DB5
cs=0x1ae2;eip=0x000db9; 	R(JZ(loc_2a1d4));	// 51233 jz      short loc_2A1D4 ;~ 1AE2:0DB9
cs=0x1ae2;eip=0x000dbb; 	X(PUSH(*(dw*)(raddr(ds,si+4))));	// 51234 push    word ptr [si+4] ;~ 1AE2:0DBB
cs=0x1ae2;eip=0x000dbe; 	R(CALLF(sub_2a5a4,0));	// 51235 call    sub_2A5A4 ;~ 1AE2:0DBE
cs=0x1ae2;eip=0x000dc3; 	T(ADD(sp, 2));	// 51236 add     sp, 2 ;~ 1AE2:0DC3
cs=0x1ae2;eip=0x000dc6; 	X(AND(*(raddr(ds,si+6)), 0x0F7));	// 51237 and     byte ptr [si+6], 0F7h ;~ 1AE2:0DC6
cs=0x1ae2;eip=0x000dca; 	T(SUB(ax, ax));	// 51238 sub     ax, ax ;~ 1AE2:0DCA
cs=0x1ae2;eip=0x000dcc; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 51239 mov     [si], ax ;~ 1AE2:0DCC
cs=0x1ae2;eip=0x000dce; 	X(MOV(*(dw*)(raddr(ds,si+4)), ax));	// 51240 mov     [si+4], ax ;~ 1AE2:0DCE
cs=0x1ae2;eip=0x000dd1; 	X(MOV(*(dw*)(raddr(ds,si+2)), ax));	// 51241 mov     [si+2], ax ;~ 1AE2:0DD1
loc_2a1d4:
	// 8059 
cs=0x1ae2;eip=0x000dd4; 	X(POP(si));	// 51245 pop     si ;~ 1AE2:0DD4
cs=0x1ae2;eip=0x000dd5; 	X(POP(bp));	// 51246 pop     bp ;~ 1AE2:0DD5
cs=0x1ae2;eip=0x000dd6; 	R(RETF(0));	// 51247 retf ;~ 1AE2:0DD6
sub_2a1d8:
	// 51257 
#undef var_8
#define var_8 -8
	// 51259 var_8           = word ptr -8 ;~ 1AE2:0DD8
#undef var_6
#define var_6 -6
	// 51260 var_6           = word ptr -6 ;~ 1AE2:0DD8
#undef var_4
#define var_4 -4
	// 51261 var_4           = byte ptr -4 ;~ 1AE2:0DD8
#undef var_2
#define var_2 -2
	// 51262 var_2           = word ptr -2 ;~ 1AE2:0DD8
#undef arg_0
#define arg_0 6
	// 51263 arg_0           = word ptr  6 ;~ 1AE2:0DD8
#undef arg_2
#define arg_2 8
	// 51264 arg_2           = word ptr  8 ;~ 1AE2:0DD8
#undef arg_4
#define arg_4 0x0A
	// 51265 arg_4           = word ptr  0Ah ;~ 1AE2:0DD8
ret_1ae2_dd8:
	// 8060 
cs=0x1ae2;eip=0x000dd8; 	X(PUSH(bp));	// 51267 push    bp ;~ 1AE2:0DD8
cs=0x1ae2;eip=0x000dd9; 	T(MOV(bp, sp));	// 51268 mov     bp, sp ;~ 1AE2:0DD9
cs=0x1ae2;eip=0x000ddb; 	T(SUB(sp, 0x0A));	// 51269 sub     sp, 0Ah ;~ 1AE2:0DDB
cs=0x1ae2;eip=0x000dde; 	X(PUSH(di));	// 51270 push    di ;~ 1AE2:0DDE
cs=0x1ae2;eip=0x000ddf; 	X(PUSH(si));	// 51271 push    si ;~ 1AE2:0DDF
cs=0x1ae2;eip=0x000de0; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 51272 mov     si, [bp+arg_4] ;~ 1AE2:0DE0
cs=0x1ae2;eip=0x000de3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 51273 mov     bx, [bp+arg_2] ;~ 1AE2:0DE3
cs=0x1ae2;eip=0x000de6; 	T(MOV(al, *(raddr(ds,bx))));	// 51274 mov     al, [bx] ;~ 1AE2:0DE6
cs=0x1ae2;eip=0x000de8; 	T(CBW);	// 51275 cbw ;~ 1AE2:0DE8
cs=0x1ae2;eip=0x000de9; 	T(CMP(ax, 0x61));	// 51276 cmp     ax, 61h ; 'a' ;~ 1AE2:0DE9
cs=0x1ae2;eip=0x000dec; 	R(JZ(loc_2a216));	// 51277 jz      short loc_2A216 ;~ 1AE2:0DEC
cs=0x1ae2;eip=0x000dee; 	T(CMP(ax, 0x72));	// 51278 cmp     ax, 72h ; 'r' ;~ 1AE2:0DEE
cs=0x1ae2;eip=0x000df1; 	R(JZ(loc_2a1fe));	// 51279 jz      short loc_2A1FE ;~ 1AE2:0DF1
cs=0x1ae2;eip=0x000df3; 	T(CMP(ax, 0x77));	// 51280 cmp     ax, 77h ; 'w' ;~ 1AE2:0DF3
cs=0x1ae2;eip=0x000df6; 	R(JZ(loc_2a20c));	// 51281 jz      short loc_2A20C ;~ 1AE2:0DF6
loc_2a1f8:
	// 8061 
cs=0x1ae2;eip=0x000df8; 	T(SUB(ax, ax));	// 51284 sub     ax, ax ;~ 1AE2:0DF8
cs=0x1ae2;eip=0x000dfa; 	R(JMP(loc_2a2cc));	// 51285 jmp     loc_2A2CC ;~ 1AE2:0DFA
loc_2a1fe:
	// 8062 
cs=0x1ae2;eip=0x000dfe; 	T(SUB(di, di));	// 51290 sub     di, di ;~ 1AE2:0DFE
cs=0x1ae2;eip=0x000e00; 	X(MOV(*(raddr(ss,bp+var_4)), 1));	// 51291 mov     [bp+var_4], 1 ;~ 1AE2:0E00
loc_2a204:
	// 8063 
cs=0x1ae2;eip=0x000e04; 	T(MOV(cx, 1));	// 51294 mov     cx, 1 ;~ 1AE2:0E04
cs=0x1ae2;eip=0x000e07; 	T(MOV(dl, *(raddr(ss,bp+var_4))));	// 51295 mov     dl, [bp+var_4] ;~ 1AE2:0E07
cs=0x1ae2;eip=0x000e0a; 	R(JMP(loc_2a22b));	// 51296 jmp     short loc_2A22B ;~ 1AE2:0E0A
loc_2a20c:
	// 8064 
cs=0x1ae2;eip=0x000e0c; 	T(MOV(di, 0x301));	// 51300 mov     di, 301h ;~ 1AE2:0E0C
loc_2a20f:
	// 8065 
cs=0x1ae2;eip=0x000e0f; 	X(MOV(*(raddr(ss,bp+var_4)), 2));	// 51303 mov     [bp+var_4], 2 ;~ 1AE2:0E0F
cs=0x1ae2;eip=0x000e13; 	R(JMP(loc_2a204));	// 51304 jmp     short loc_2A204 ;~ 1AE2:0E13
loc_2a216:
	// 8066 
cs=0x1ae2;eip=0x000e16; 	T(MOV(di, 0x109));	// 51309 mov     di, 109h ;~ 1AE2:0E16
cs=0x1ae2;eip=0x000e19; 	R(JMP(loc_2a20f));	// 51310 jmp     short loc_2A20F ;~ 1AE2:0E19
loc_2a21c:
	// 8067 
cs=0x1ae2;eip=0x000e1c; 	T(TEST(di, 2));	// 51315 test    di, 2 ;~ 1AE2:0E1C
cs=0x1ae2;eip=0x000e20; 	R(JNZ(loc_2a261));	// 51316 jnz     short loc_2A261 ;~ 1AE2:0E20
cs=0x1ae2;eip=0x000e22; 	T(OR(di, 2));	// 51317 or      di, 2 ;~ 1AE2:0E22
cs=0x1ae2;eip=0x000e26; 	T(AND(di, 0x0FFFE));	// 51318 and     di, 0FFFEh ;~ 1AE2:0E26
cs=0x1ae2;eip=0x000e29; 	T(MOV(dl, 0x80));	// 51319 mov     dl, 80h ; '€' ;~ 1AE2:0E29
loc_2a22b:
	// 8068 
cs=0x1ae2;eip=0x000e2b; 	X(INC(*(dw*)(raddr(ss,bp+arg_2))));	// 51323 inc     [bp+arg_2] ;~ 1AE2:0E2B
cs=0x1ae2;eip=0x000e2e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 51324 mov     bx, [bp+arg_2] ;~ 1AE2:0E2E
cs=0x1ae2;eip=0x000e31; 	T(CMP(*(raddr(ds,bx)), 0));	// 51325 cmp     byte ptr [bx], 0 ;~ 1AE2:0E31
cs=0x1ae2;eip=0x000e34; 	R(JZ(loc_2a26c));	// 51326 jz      short loc_2A26C ;~ 1AE2:0E34
cs=0x1ae2;eip=0x000e36; 	T(OR(cx, cx));	// 51327 or      cx, cx ;~ 1AE2:0E36
cs=0x1ae2;eip=0x000e38; 	R(JZ(loc_2a26c));	// 51328 jz      short loc_2A26C ;~ 1AE2:0E38
cs=0x1ae2;eip=0x000e3a; 	T(MOV(al, *(raddr(ds,bx))));	// 51329 mov     al, [bx] ;~ 1AE2:0E3A
cs=0x1ae2;eip=0x000e3c; 	T(CBW);	// 51330 cbw ;~ 1AE2:0E3C
cs=0x1ae2;eip=0x000e3d; 	T(CMP(ax, 0x2B));	// 51331 cmp     ax, 2Bh ; '+' ;~ 1AE2:0E3D
cs=0x1ae2;eip=0x000e40; 	R(JZ(loc_2a21c));	// 51332 jz      short loc_2A21C ;~ 1AE2:0E40
cs=0x1ae2;eip=0x000e42; 	T(CMP(ax, 0x62));	// 51333 cmp     ax, 62h ; 'b' ;~ 1AE2:0E42
cs=0x1ae2;eip=0x000e45; 	R(JZ(loc_2a25a));	// 51334 jz      short loc_2A25A ;~ 1AE2:0E45
cs=0x1ae2;eip=0x000e47; 	T(CMP(ax, 0x74));	// 51335 cmp     ax, 74h ; 't' ;~ 1AE2:0E47
cs=0x1ae2;eip=0x000e4a; 	R(JNZ(loc_2a261));	// 51336 jnz     short loc_2A261 ;~ 1AE2:0E4A
cs=0x1ae2;eip=0x000e4c; 	T(MOV(ax, di));	// 51337 mov     ax, di ;~ 1AE2:0E4C
cs=0x1ae2;eip=0x000e4e; 	T(TEST(ax, 0x0C000));	// 51338 test    ax, 0C000h ;~ 1AE2:0E4E
cs=0x1ae2;eip=0x000e51; 	R(JNZ(loc_2a261));	// 51339 jnz     short loc_2A261 ;~ 1AE2:0E51
cs=0x1ae2;eip=0x000e53; 	T(OR(di, 0x4000));	// 51340 or      di, 4000h ;~ 1AE2:0E53
cs=0x1ae2;eip=0x000e57; 	R(JMP(loc_2a22b));	// 51341 jmp     short loc_2A22B ;~ 1AE2:0E57
loc_2a25a:
	// 8069 
cs=0x1ae2;eip=0x000e5a; 	T(MOV(ax, di));	// 51346 mov     ax, di ;~ 1AE2:0E5A
cs=0x1ae2;eip=0x000e5c; 	T(TEST(ax, 0x0C000));	// 51347 test    ax, 0C000h ;~ 1AE2:0E5C
cs=0x1ae2;eip=0x000e5f; 	R(JZ(loc_2a266));	// 51348 jz      short loc_2A266 ;~ 1AE2:0E5F
loc_2a261:
	// 8070 
cs=0x1ae2;eip=0x000e61; 	T(SUB(cx, cx));	// 51352 sub     cx, cx ;~ 1AE2:0E61
cs=0x1ae2;eip=0x000e63; 	R(JMP(loc_2a22b));	// 51353 jmp     short loc_2A22B ;~ 1AE2:0E63
loc_2a266:
	// 8071 
cs=0x1ae2;eip=0x000e66; 	T(OR(di, 0x8000));	// 51358 or      di, 8000h ;~ 1AE2:0E66
cs=0x1ae2;eip=0x000e6a; 	R(JMP(loc_2a22b));	// 51359 jmp     short loc_2A22B ;~ 1AE2:0E6A
loc_2a26c:
	// 8072 
cs=0x1ae2;eip=0x000e6c; 	X(MOV(*(raddr(ss,bp+var_4)), dl));	// 51364 mov     [bp+var_4], dl ;~ 1AE2:0E6C
cs=0x1ae2;eip=0x000e6f; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), cx));	// 51365 mov     [bp+var_2], cx ;~ 1AE2:0E6F
cs=0x1ae2;eip=0x000e72; 	T(MOV(ax, 0x1A4));	// 51366 mov     ax, 1A4h ;~ 1AE2:0E72
cs=0x1ae2;eip=0x000e75; 	X(PUSH(ax));	// 51367 push    ax ;~ 1AE2:0E75
cs=0x1ae2;eip=0x000e76; 	X(PUSH(di));	// 51368 push    di ;~ 1AE2:0E76
cs=0x1ae2;eip=0x000e77; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 51369 push    [bp+arg_0] ;~ 1AE2:0E77
cs=0x1ae2;eip=0x000e7a; 	R(CALLF(sub_2aa52,0));	// 51370 call    sub_2AA52 ;~ 1AE2:0E7A
cs=0x1ae2;eip=0x000e7f; 	T(ADD(sp, 6));	// 51371 add     sp, 6 ;~ 1AE2:0E7F
cs=0x1ae2;eip=0x000e82; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 51372 mov     [bp+var_6], ax ;~ 1AE2:0E82
cs=0x1ae2;eip=0x000e85; 	T(OR(ax, ax));	// 51373 or      ax, ax ;~ 1AE2:0E85
cs=0x1ae2;eip=0x000e87; 	R(JGE(loc_2a28c));	// 51374 jge     short loc_2A28C ;~ 1AE2:0E87
cs=0x1ae2;eip=0x000e89; 	R(JMP(loc_2a1f8));	// 51375 jmp     loc_2A1F8 ;~ 1AE2:0E89
loc_2a28c:
	// 8073 
cs=0x1ae2;eip=0x000e8c; 	T(MOV(al, *(raddr(ss,bp+var_4))));	// 51379 mov     al, [bp+var_4] ;~ 1AE2:0E8C
cs=0x1ae2;eip=0x000e8f; 	X(MOV(*(raddr(ds,si+6)), al));	// 51380 mov     [si+6], al ;~ 1AE2:0E8F
cs=0x1ae2;eip=0x000e92; 	X(INC(word_38414));	// 51381 inc     word_38414 ;~ 1AE2:0E92
cs=0x1ae2;eip=0x000e96; 	T(MOV(ax, si));	// 51382 mov     ax, si ;~ 1AE2:0E96
cs=0x1ae2;eip=0x000e98; 	T(SUB(ax, 0x0C490));	// 51383 sub     ax, 0C490h ;~ 1AE2:0E98
cs=0x1ae2;eip=0x000e9b; 	T(MOV(cl, 3));	// 51384 mov     cl, 3 ;~ 1AE2:0E9B
cs=0x1ae2;eip=0x000e9d; 	T(SAR(ax, cl));	// 51385 sar     ax, cl ;~ 1AE2:0E9D
cs=0x1ae2;eip=0x000e9f; 	T(MOV(cx, ax));	// 51386 mov     cx, ax ;~ 1AE2:0E9F
cs=0x1ae2;eip=0x000ea1; 	T(SHL(ax, 1));	// 51387 shl     ax, 1 ;~ 1AE2:0EA1
cs=0x1ae2;eip=0x000ea3; 	T(ADD(ax, cx));	// 51388 add     ax, cx ;~ 1AE2:0EA3
cs=0x1ae2;eip=0x000ea5; 	T(SHL(ax, 1));	// 51389 shl     ax, 1 ;~ 1AE2:0EA5
cs=0x1ae2;eip=0x000ea7; 	T(ADD(ax, 0x0C530));	// 51390 add     ax, 0C530h ;~ 1AE2:0EA7
cs=0x1ae2;eip=0x000eaa; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 51391 mov     [bp+var_8], ax ;~ 1AE2:0EAA
cs=0x1ae2;eip=0x000ead; 	T(SUB(al, al));	// 51392 sub     al, al ;~ 1AE2:0EAD
cs=0x1ae2;eip=0x000eaf; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 51393 mov     bx, [bp+var_8] ;~ 1AE2:0EAF
cs=0x1ae2;eip=0x000eb2; 	X(MOV(*(raddr(ds,bx)), al));	// 51394 mov     [bx], al ;~ 1AE2:0EB2
cs=0x1ae2;eip=0x000eb4; 	T(CBW);	// 51395 cbw ;~ 1AE2:0EB4
cs=0x1ae2;eip=0x000eb5; 	X(MOV(*(dw*)(raddr(ds,si+2)), ax));	// 51396 mov     [si+2], ax ;~ 1AE2:0EB5
cs=0x1ae2;eip=0x000eb8; 	X(MOV(*(dw*)(raddr(ds,bx+4)), 0));	// 51397 mov     word ptr [bx+4], 0 ;~ 1AE2:0EB8
cs=0x1ae2;eip=0x000ebd; 	T(SUB(ax, ax));	// 51398 sub     ax, ax ;~ 1AE2:0EBD
cs=0x1ae2;eip=0x000ebf; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 51399 mov     [si], ax ;~ 1AE2:0EBF
cs=0x1ae2;eip=0x000ec1; 	X(MOV(*(dw*)(raddr(ds,si+4)), ax));	// 51400 mov     [si+4], ax ;~ 1AE2:0EC1
cs=0x1ae2;eip=0x000ec4; 	T(MOV(al, *(db*)(raddr(ss,bp+var_6))));	// 51401 mov     al, byte ptr [bp+var_6] ;~ 1AE2:0EC4
cs=0x1ae2;eip=0x000ec7; 	X(MOV(*(raddr(ds,si+7)), al));	// 51402 mov     [si+7], al ;~ 1AE2:0EC7
cs=0x1ae2;eip=0x000eca; 	T(MOV(ax, si));	// 51403 mov     ax, si ;~ 1AE2:0ECA
loc_2a2cc:
	// 8074 
cs=0x1ae2;eip=0x000ecc; 	X(POP(si));	// 51406 pop     si ;~ 1AE2:0ECC
cs=0x1ae2;eip=0x000ecd; 	X(POP(di));	// 51407 pop     di ;~ 1AE2:0ECD
cs=0x1ae2;eip=0x000ece; 	T(MOV(sp, bp));	// 51408 mov     sp, bp ;~ 1AE2:0ECE
cs=0x1ae2;eip=0x000ed0; 	X(POP(bp));	// 51409 pop     bp ;~ 1AE2:0ED0
cs=0x1ae2;eip=0x000ed1; 	R(RETF(0));	// 51410 retf ;~ 1AE2:0ED1
sub_2a2d2:
	// 51418 
#undef var_4
#define var_4 -4
	// 51421 var_4           = word ptr -4 ;~ 1AE2:0ED2
#undef arg_0
#define arg_0 6
	// 51422 arg_0           = word ptr  6 ;~ 1AE2:0ED2
ret_1ae2_ed2:
	// 8075 
cs=0x1ae2;eip=0x000ed2; 	X(PUSH(bp));	// 51424 push    bp ;~ 1AE2:0ED2
cs=0x1ae2;eip=0x000ed3; 	T(MOV(bp, sp));	// 51425 mov     bp, sp ;~ 1AE2:0ED3
cs=0x1ae2;eip=0x000ed5; 	T(SUB(sp, 4));	// 51426 sub     sp, 4 ;~ 1AE2:0ED5
cs=0x1ae2;eip=0x000ed8; 	X(PUSH(di));	// 51427 push    di ;~ 1AE2:0ED8
cs=0x1ae2;eip=0x000ed9; 	X(PUSH(si));	// 51428 push    si ;~ 1AE2:0ED9
cs=0x1ae2;eip=0x000eda; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 51429 mov     si, [bp+arg_0] ;~ 1AE2:0EDA
cs=0x1ae2;eip=0x000edd; 	T(SUB(di, di));	// 51430 sub     di, di ;~ 1AE2:0EDD
cs=0x1ae2;eip=0x000edf; 	T(MOV(al, *(raddr(ds,si+6))));	// 51431 mov     al, [si+6] ;~ 1AE2:0EDF
cs=0x1ae2;eip=0x000ee2; 	T(AND(al, 3));	// 51432 and     al, 3 ;~ 1AE2:0EE2
cs=0x1ae2;eip=0x000ee4; 	T(CMP(al, 2));	// 51433 cmp     al, 2 ;~ 1AE2:0EE4
cs=0x1ae2;eip=0x000ee6; 	R(JNZ(loc_2a330));	// 51434 jnz     short loc_2A330 ;~ 1AE2:0EE6
cs=0x1ae2;eip=0x000ee8; 	T(TEST(*(raddr(ds,si+6)), 8));	// 51435 test    byte ptr [si+6], 8 ;~ 1AE2:0EE8
cs=0x1ae2;eip=0x000eec; 	R(JNZ(loc_2a307));	// 51436 jnz     short loc_2A307 ;~ 1AE2:0EEC
cs=0x1ae2;eip=0x000eee; 	T(MOV(bx, si));	// 51437 mov     bx, si ;~ 1AE2:0EEE
cs=0x1ae2;eip=0x000ef0; 	T(SUB(bx, 0x0C490));	// 51438 sub     bx, 0C490h ;~ 1AE2:0EF0
cs=0x1ae2;eip=0x000ef4; 	T(MOV(cl, 3));	// 51439 mov     cl, 3 ;~ 1AE2:0EF4
cs=0x1ae2;eip=0x000ef6; 	T(SAR(bx, cl));	// 51440 sar     bx, cl ;~ 1AE2:0EF6
cs=0x1ae2;eip=0x000ef8; 	T(MOV(ax, bx));	// 51441 mov     ax, bx ;~ 1AE2:0EF8
cs=0x1ae2;eip=0x000efa; 	T(SHL(bx, 1));	// 51442 shl     bx, 1 ;~ 1AE2:0EFA
cs=0x1ae2;eip=0x000efc; 	T(ADD(bx, ax));	// 51443 add     bx, ax ;~ 1AE2:0EFC
cs=0x1ae2;eip=0x000efe; 	T(SHL(bx, 1));	// 51444 shl     bx, 1 ;~ 1AE2:0EFE
cs=0x1ae2;eip=0x000f00; 	T(TEST(*(raddr(ds,bx-0x3AD0)), 1));	// 51445 test    byte ptr [bx-3AD0h], 1 ;~ 1AE2:0F00
cs=0x1ae2;eip=0x000f05; 	R(JZ(loc_2a330));	// 51446 jz      short loc_2A330 ;~ 1AE2:0F05
loc_2a307:
	// 8076 
cs=0x1ae2;eip=0x000f07; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 51449 mov     ax, [si] ;~ 1AE2:0F07
cs=0x1ae2;eip=0x000f09; 	T(SUB(ax, *(dw*)(raddr(ds,si+4))));	// 51450 sub     ax, [si+4] ;~ 1AE2:0F09
cs=0x1ae2;eip=0x000f0c; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 51451 mov     [bp+var_4], ax ;~ 1AE2:0F0C
cs=0x1ae2;eip=0x000f0f; 	T(OR(ax, ax));	// 51452 or      ax, ax ;~ 1AE2:0F0F
cs=0x1ae2;eip=0x000f11; 	R(JLE(loc_2a330));	// 51453 jle     short loc_2A330 ;~ 1AE2:0F11
cs=0x1ae2;eip=0x000f13; 	X(PUSH(ax));	// 51454 push    ax ;~ 1AE2:0F13
cs=0x1ae2;eip=0x000f14; 	X(PUSH(*(dw*)(raddr(ds,si+4))));	// 51455 push    word ptr [si+4] ;~ 1AE2:0F14
cs=0x1ae2;eip=0x000f17; 	T(MOV(al, *(raddr(ds,si+7))));	// 51456 mov     al, [si+7] ;~ 1AE2:0F17
cs=0x1ae2;eip=0x000f1a; 	T(CBW);	// 51457 cbw ;~ 1AE2:0F1A
cs=0x1ae2;eip=0x000f1b; 	X(PUSH(ax));	// 51458 push    ax ;~ 1AE2:0F1B
cs=0x1ae2;eip=0x000f1c; 	R(CALLF(sub_2a47a,0));	// 51459 call    sub_2A47A ;~ 1AE2:0F1C
cs=0x1ae2;eip=0x000f21; 	T(ADD(sp, 6));	// 51460 add     sp, 6 ;~ 1AE2:0F21
cs=0x1ae2;eip=0x000f24; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_4))));	// 51461 cmp     ax, [bp+var_4] ;~ 1AE2:0F24
cs=0x1ae2;eip=0x000f27; 	R(JZ(loc_2a330));	// 51462 jz      short loc_2A330 ;~ 1AE2:0F27
cs=0x1ae2;eip=0x000f29; 	X(OR(*(raddr(ds,si+6)), 0x20));	// 51463 or      byte ptr [si+6], 20h ;~ 1AE2:0F29
cs=0x1ae2;eip=0x000f2d; 	T(MOV(di, 0x0FFFF));	// 51464 mov     di, 0FFFFh ;~ 1AE2:0F2D
loc_2a330:
	// 8077 
cs=0x1ae2;eip=0x000f30; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 51468 mov     ax, [si+4] ;~ 1AE2:0F30
cs=0x1ae2;eip=0x000f33; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 51469 mov     [si], ax ;~ 1AE2:0F33
cs=0x1ae2;eip=0x000f35; 	X(MOV(*(dw*)(raddr(ds,si+2)), 0));	// 51470 mov     word ptr [si+2], 0 ;~ 1AE2:0F35
cs=0x1ae2;eip=0x000f3a; 	T(MOV(ax, di));	// 51471 mov     ax, di ;~ 1AE2:0F3A
cs=0x1ae2;eip=0x000f3c; 	X(POP(si));	// 51472 pop     si ;~ 1AE2:0F3C
cs=0x1ae2;eip=0x000f3d; 	X(POP(di));	// 51473 pop     di ;~ 1AE2:0F3D
cs=0x1ae2;eip=0x000f3e; 	T(MOV(sp, bp));	// 51474 mov     sp, bp ;~ 1AE2:0F3E
cs=0x1ae2;eip=0x000f40; 	X(POP(bp));	// 51475 pop     bp ;~ 1AE2:0F40
cs=0x1ae2;eip=0x000f41; 	R(RETF(0));	// 51476 retf ;~ 1AE2:0F41
sub_2a342:
	// 51484 
cs=0x1ae2;eip=0x000f42; 	X(PUSH(bp));	// 51485 push    bp ;~ 1AE2:0F42
ret_1ae2_f43:
	// 8078 
cs=0x1ae2;eip=0x000f43; 	T(MOV(bp, sp));	// 51486 mov     bp, sp ;~ 1AE2:0F43
cs=0x1ae2;eip=0x000f45; 	T(SUB(sp, 2));	// 51487 sub     sp, 2 ;~ 1AE2:0F45
cs=0x1ae2;eip=0x000f48; 	X(PUSH(si));	// 51488 push    si ;~ 1AE2:0F48
cs=0x1ae2;eip=0x000f49; 	T(MOV(si, 0x0C490));	// 51489 mov     si, 0C490h ;~ 1AE2:0F49
cs=0x1ae2;eip=0x000f4c; 	T(MOV(cx, word_383e8));	// 51490 mov     cx, word_383E8 ;~ 1AE2:0F4C
loc_2a350:
	// 8079 
cs=0x1ae2;eip=0x000f50; 	T(TEST(*(raddr(ds,si+6)), 0x83));	// 51493 test    byte ptr [si+6], 83h ;~ 1AE2:0F50
cs=0x1ae2;eip=0x000f54; 	R(JNZ(loc_2a36c));	// 51494 jnz     short loc_2A36C ;~ 1AE2:0F54
cs=0x1ae2;eip=0x000f56; 	T(SUB(ax, ax));	// 51495 sub     ax, ax ;~ 1AE2:0F56
cs=0x1ae2;eip=0x000f58; 	X(MOV(*(dw*)(raddr(ds,si+2)), ax));	// 51496 mov     [si+2], ax ;~ 1AE2:0F58
cs=0x1ae2;eip=0x000f5b; 	X(MOV(*(raddr(ds,si+6)), al));	// 51497 mov     [si+6], al ;~ 1AE2:0F5B
cs=0x1ae2;eip=0x000f5e; 	X(MOV(*(dw*)(raddr(ds,si+4)), ax));	// 51498 mov     [si+4], ax ;~ 1AE2:0F5E
cs=0x1ae2;eip=0x000f61; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 51499 mov     [si], ax ;~ 1AE2:0F61
cs=0x1ae2;eip=0x000f63; 	X(MOV(*(raddr(ds,si+7)), 0x0FF));	// 51500 mov     byte ptr [si+7], 0FFh ;~ 1AE2:0F63
cs=0x1ae2;eip=0x000f67; 	T(MOV(ax, si));	// 51501 mov     ax, si ;~ 1AE2:0F67
cs=0x1ae2;eip=0x000f69; 	R(JMP(loc_2a377));	// 51502 jmp     short loc_2A377 ;~ 1AE2:0F69
loc_2a36c:
	// 8080 
cs=0x1ae2;eip=0x000f6c; 	T(MOV(ax, si));	// 51507 mov     ax, si ;~ 1AE2:0F6C
cs=0x1ae2;eip=0x000f6e; 	T(ADD(si, 8));	// 51508 add     si, 8 ;~ 1AE2:0F6E
cs=0x1ae2;eip=0x000f71; 	T(CMP(ax, cx));	// 51509 cmp     ax, cx ;~ 1AE2:0F71
cs=0x1ae2;eip=0x000f73; 	R(JNZ(loc_2a350));	// 51510 jnz     short loc_2A350 ;~ 1AE2:0F73
cs=0x1ae2;eip=0x000f75; 	T(SUB(ax, ax));	// 51511 sub     ax, ax ;~ 1AE2:0F75
loc_2a377:
	// 8081 
cs=0x1ae2;eip=0x000f77; 	X(POP(si));	// 51514 pop     si ;~ 1AE2:0F77
cs=0x1ae2;eip=0x000f78; 	T(MOV(sp, bp));	// 51515 mov     sp, bp ;~ 1AE2:0F78
cs=0x1ae2;eip=0x000f7a; 	X(POP(bp));	// 51516 pop     bp ;~ 1AE2:0F7A
cs=0x1ae2;eip=0x000f7b; 	R(RETF(0));	// 51517 retf ;~ 1AE2:0F7B
sub_2a37c:
	// 51525 
#undef arg_2
#define arg_2 6
	// 51527 arg_2           = word ptr  6 ;~ 1AE2:0F7C
ret_1ae2_f7c:
	// 8082 
cs=0x1ae2;eip=0x000f7c; 	X(PUSH(bp));	// 51529 push    bp ;~ 1AE2:0F7C
cs=0x1ae2;eip=0x000f7d; 	T(MOV(bp, sp));	// 51530 mov     bp, sp ;~ 1AE2:0F7D
cs=0x1ae2;eip=0x000f7f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 51531 mov     bx, [bp+arg_2] ;~ 1AE2:0F7F
cs=0x1ae2;eip=0x000f82; 	T(CMP(bx, word_38296));	// 51532 cmp     bx, word_38296 ;~ 1AE2:0F82
cs=0x1ae2;eip=0x000f86; 	R(JC(loc_2a38e));	// 51533 jb      short loc_2A38E ;~ 1AE2:0F86
cs=0x1ae2;eip=0x000f88; 	T(MOV(ax, 0x900));	// 51534 mov     ax, 900h ;~ 1AE2:0F88
cs=0x1ae2;eip=0x000f8b; 	T(STC);	// 51535 stc ;~ 1AE2:0F8B
cs=0x1ae2;eip=0x000f8c; 	R(JMP(loc_2a399));	// 51536 jmp     short loc_2A399 ;~ 1AE2:0F8C
loc_2a38e:
	// 8083 
cs=0x1ae2;eip=0x000f8e; 	T(MOV(ah, 0x3E));	// 51540 mov     ah, 3Eh ;~ 1AE2:0F8E
cs=0x1ae2;eip=0x000f90; 	R(_INT(0x21));	// 51541 int     21h             ; DOS - 2+ - CLOSE A FILE WITH HANDLE ;~ 1AE2:0F90
cs=0x1ae2;eip=0x000f92; 	R(JC(loc_2a399));	// 51543 jb      short loc_2A399 ;~ 1AE2:0F92
cs=0x1ae2;eip=0x000f94; 	X(MOV(*(raddr(ds,bx-0x3BA8)), 0));	// 51544 mov     byte ptr [bx-3BA8h], 0 ;~ 1AE2:0F94
loc_2a399:
	// 8084 
cs=0x1ae2;eip=0x000f99; 	R(JMP(loc_2a916));	// 51548 jmp     loc_2A916 ;~ 1AE2:0F99
sub_2a39c:
	// 51556 
#undef var_1
#define var_1 -1
	// 51559 var_1           = byte ptr -1 ;~ 1AE2:0F9C
#undef arg_2
#define arg_2 6
	// 51560 arg_2           = word ptr  6 ;~ 1AE2:0F9C
#undef arg_4
#define arg_4 8
	// 51561 arg_4           = word ptr  8 ;~ 1AE2:0F9C
#undef arg_6
#define arg_6 0x0A
	// 51562 arg_6           = word ptr  0Ah ;~ 1AE2:0F9C
ret_1ae2_f9c:
	// 8085 
cs=0x1ae2;eip=0x000f9c; 	X(PUSH(bp));	// 51564 push    bp ;~ 1AE2:0F9C
cs=0x1ae2;eip=0x000f9d; 	T(MOV(bp, sp));	// 51565 mov     bp, sp ;~ 1AE2:0F9D
cs=0x1ae2;eip=0x000f9f; 	T(SUB(sp, 2));	// 51566 sub     sp, 2 ;~ 1AE2:0F9F
cs=0x1ae2;eip=0x000fa2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 51567 mov     bx, [bp+arg_2] ;~ 1AE2:0FA2
cs=0x1ae2;eip=0x000fa5; 	T(CMP(bx, word_38296));	// 51568 cmp     bx, word_38296 ;~ 1AE2:0FA5
cs=0x1ae2;eip=0x000fa9; 	R(JC(loc_2a3b1));	// 51569 jb      short loc_2A3B1 ;~ 1AE2:0FA9
cs=0x1ae2;eip=0x000fab; 	T(STC);	// 51570 stc ;~ 1AE2:0FAB
cs=0x1ae2;eip=0x000fac; 	T(MOV(ax, 0x900));	// 51571 mov     ax, 900h ;~ 1AE2:0FAC
cs=0x1ae2;eip=0x000faf; 	R(JMP(loc_2a40d));	// 51572 jmp     short loc_2A40D ;~ 1AE2:0FAF
loc_2a3b1:
	// 8086 
cs=0x1ae2;eip=0x000fb1; 	T(XOR(ax, ax));	// 51576 xor     ax, ax ;~ 1AE2:0FB1
cs=0x1ae2;eip=0x000fb3; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_6))));	// 51577 mov     cx, [bp+arg_6] ;~ 1AE2:0FB3
cs=0x1ae2;eip=0x000fb6; 	R(JCXZ(loc_2a40d));	// 51578 jcxz    short loc_2A40D ;~ 1AE2:0FB6
cs=0x1ae2;eip=0x000fb8; 	T(TEST(*(raddr(ds,bx-0x3BA8)), 2));	// 51579 test    byte ptr [bx-3BA8h], 2 ;~ 1AE2:0FB8
cs=0x1ae2;eip=0x000fbd; 	R(JNZ(loc_2a40d));	// 51580 jnz     short loc_2A40D ;~ 1AE2:0FBD
cs=0x1ae2;eip=0x000fbf; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_6))));	// 51581 mov     cx, [bp+arg_6] ;~ 1AE2:0FBF
cs=0x1ae2;eip=0x000fc2; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 51582 mov     dx, [bp+arg_4] ;~ 1AE2:0FC2
cs=0x1ae2;eip=0x000fc5; 	T(MOV(ah, 0x3F));	// 51583 mov     ah, 3Fh ;~ 1AE2:0FC5
cs=0x1ae2;eip=0x000fc7; 	R(_INT(0x21));	// 51584 int     21h             ; DOS - 2+ - READ FROM FILE WITH HANDLE ;~ 1AE2:0FC7
cs=0x1ae2;eip=0x000fc9; 	R(JNC(loc_2a3cf));	// 51587 jnb     short loc_2A3CF ;~ 1AE2:0FC9
cs=0x1ae2;eip=0x000fcb; 	T(MOV(ah, 9));	// 51588 mov     ah, 9 ;~ 1AE2:0FCB
cs=0x1ae2;eip=0x000fcd; 	R(JMP(loc_2a40d));	// 51589 jmp     short loc_2A40D ;~ 1AE2:0FCD
loc_2a3cf:
	// 8087 
cs=0x1ae2;eip=0x000fcf; 	T(TEST(*(raddr(ds,bx-0x3BA8)), 0x80));	// 51593 test    byte ptr [bx-3BA8h], 80h ;~ 1AE2:0FCF
cs=0x1ae2;eip=0x000fd4; 	R(JZ(loc_2a40d));	// 51594 jz      short loc_2A40D ;~ 1AE2:0FD4
cs=0x1ae2;eip=0x000fd6; 	X(AND(*(raddr(ds,bx-0x3BA8)), 0x0FB));	// 51595 and     byte ptr [bx-3BA8h], 0FBh ;~ 1AE2:0FD6
cs=0x1ae2;eip=0x000fdb; 	X(PUSH(si));	// 51596 push    si ;~ 1AE2:0FDB
cs=0x1ae2;eip=0x000fdc; 	X(PUSH(di));	// 51597 push    di ;~ 1AE2:0FDC
cs=0x1ae2;eip=0x000fdd; 	T(CLD);	// 51598 cld ;~ 1AE2:0FDD
cs=0x1ae2;eip=0x000fde; 	T(MOV(si, dx));	// 51599 mov     si, dx ;~ 1AE2:0FDE
cs=0x1ae2;eip=0x000fe0; 	T(MOV(di, dx));	// 51600 mov     di, dx ;~ 1AE2:0FE0
cs=0x1ae2;eip=0x000fe2; 	T(MOV(cx, ax));	// 51601 mov     cx, ax ;~ 1AE2:0FE2
cs=0x1ae2;eip=0x000fe4; 	R(JCXZ(loc_2a40b));	// 51602 jcxz    short loc_2A40B ;~ 1AE2:0FE4
cs=0x1ae2;eip=0x000fe6; 	T(MOV(ah, 0x0D));	// 51603 mov     ah, 0Dh ;~ 1AE2:0FE6
cs=0x1ae2;eip=0x000fe8; 	T(CMP(*(raddr(ds,si)), 0x0A));	// 51604 cmp     byte ptr [si], 0Ah ;~ 1AE2:0FE8
cs=0x1ae2;eip=0x000feb; 	R(JNZ(loc_2a3f2));	// 51605 jnz     short loc_2A3F2 ;~ 1AE2:0FEB
cs=0x1ae2;eip=0x000fed; 	X(OR(*(raddr(ds,bx-0x3BA8)), 4));	// 51606 or      byte ptr [bx-3BA8h], 4 ;~ 1AE2:0FED
loc_2a3f2:
	// 8088 
cs=0x1ae2;eip=0x000ff2; 	T(LODSB);	// 51610 lodsb ;~ 1AE2:0FF2
cs=0x1ae2;eip=0x000ff3; 	T(CMP(al, ah));	// 51611 cmp     al, ah ;~ 1AE2:0FF3
cs=0x1ae2;eip=0x000ff5; 	R(JZ(loc_2a410));	// 51612 jz      short loc_2A410 ;~ 1AE2:0FF5
cs=0x1ae2;eip=0x000ff7; 	T(CMP(al, 0x1A));	// 51613 cmp     al, 1Ah ;~ 1AE2:0FF7
cs=0x1ae2;eip=0x000ff9; 	R(JNZ(loc_2a402));	// 51614 jnz     short loc_2A402 ;~ 1AE2:0FF9
cs=0x1ae2;eip=0x000ffb; 	X(OR(*(raddr(ds,bx-0x3BA8)), 2));	// 51615 or      byte ptr [bx-3BA8h], 2 ;~ 1AE2:0FFB
cs=0x1ae2;eip=0x001000; 	R(JMP(loc_2a407));	// 51616 jmp     short loc_2A407 ;~ 1AE2:1000
loc_2a402:
	// 8089 
cs=0x1ae2;eip=0x001002; 	X(MOV(*(raddr(ds,di)), al));	// 51621 mov     [di], al ;~ 1AE2:1002
cs=0x1ae2;eip=0x001004; 	T(INC(di));	// 51622 inc     di ;~ 1AE2:1004
loc_2a405:
	// 8090 
cs=0x1ae2;eip=0x001005; 	R(LOOP(loc_2a3f2));	// 51626 loop    loc_2A3F2 ;~ 1AE2:1005
loc_2a407:
	// 8091 
cs=0x1ae2;eip=0x001007; 	T(MOV(ax, di));	// 51629 mov     ax, di ;~ 1AE2:1007
cs=0x1ae2;eip=0x001009; 	T(SUB(ax, dx));	// 51630 sub     ax, dx ;~ 1AE2:1009
loc_2a40b:
	// 8092 
cs=0x1ae2;eip=0x00100b; 	X(POP(di));	// 51634 pop     di ;~ 1AE2:100B
cs=0x1ae2;eip=0x00100c; 	X(POP(si));	// 51635 pop     si ;~ 1AE2:100C
loc_2a40d:
	// 8093 
cs=0x1ae2;eip=0x00100d; 	R(JMP(loc_2a929));	// 51639 jmp     loc_2A929 ;~ 1AE2:100D
loc_2a410:
	// 8094 
cs=0x1ae2;eip=0x001010; 	T(CMP(cx, 1));	// 51643 cmp     cx, 1 ;~ 1AE2:1010
cs=0x1ae2;eip=0x001013; 	R(JZ(loc_2a41c));	// 51644 jz      short loc_2A41C ;~ 1AE2:1013
cs=0x1ae2;eip=0x001015; 	T(CMP(*(raddr(ds,si)), 0x0A));	// 51645 cmp     byte ptr [si], 0Ah ;~ 1AE2:1015
cs=0x1ae2;eip=0x001018; 	R(JZ(loc_2a405));	// 51646 jz      short loc_2A405 ;~ 1AE2:1018
cs=0x1ae2;eip=0x00101a; 	R(JMP(loc_2a402));	// 51647 jmp     short loc_2A402 ;~ 1AE2:101A
loc_2a41c:
	// 8095 
cs=0x1ae2;eip=0x00101c; 	T(TEST(*(raddr(ds,bx-0x3BA8)), 0x40));	// 51651 test    byte ptr [bx-3BA8h], 40h ;~ 1AE2:101C
cs=0x1ae2;eip=0x001021; 	R(JZ(loc_2a43b));	// 51652 jz      short loc_2A43B ;~ 1AE2:1021
cs=0x1ae2;eip=0x001023; 	T(MOV(ax, 0x4400));	// 51653 mov     ax, 4400h ;~ 1AE2:1023
cs=0x1ae2;eip=0x001026; 	R(_INT(0x21));	// 51654 int     21h             ; DOS - 2+ - IOCTL - GET DEVICE INFORMATION ;~ 1AE2:1026
cs=0x1ae2;eip=0x001028; 	T(TEST(dx, 0x20));	// 51656 test    dx, 20h ;~ 1AE2:1028
cs=0x1ae2;eip=0x00102c; 	R(JNZ(loc_2a437));	// 51657 jnz     short loc_2A437 ;~ 1AE2:102C
cs=0x1ae2;eip=0x00102e; 	T(dx = bp+var_1);	// 51658 lea     dx, [bp+var_1] ;~ 1AE2:102E
cs=0x1ae2;eip=0x001031; 	T(MOV(ah, 0x3F));	// 51659 mov     ah, 3Fh ;~ 1AE2:1031
cs=0x1ae2;eip=0x001033; 	R(_INT(0x21));	// 51660 int     21h             ; DOS - 2+ - READ FROM FILE WITH HANDLE ;~ 1AE2:1033
cs=0x1ae2;eip=0x001035; 	R(JC(loc_2a40b));	// 51663 jb      short loc_2A40B ;~ 1AE2:1035
loc_2a437:
	// 8096 
cs=0x1ae2;eip=0x001037; 	T(MOV(al, 0x0A));	// 51667 mov     al, 0Ah ;~ 1AE2:1037
cs=0x1ae2;eip=0x001039; 	R(JMP(loc_2a467));	// 51668 jmp     short loc_2A467 ;~ 1AE2:1039
loc_2a43b:
	// 8097 
cs=0x1ae2;eip=0x00103b; 	X(MOV(*(raddr(ss,bp+var_1)), 0));	// 51672 mov     [bp+var_1], 0 ;~ 1AE2:103B
cs=0x1ae2;eip=0x00103f; 	T(dx = bp+var_1);	// 51673 lea     dx, [bp+var_1] ;~ 1AE2:103F
cs=0x1ae2;eip=0x001042; 	T(MOV(ah, 0x3F));	// 51674 mov     ah, 3Fh ;~ 1AE2:1042
cs=0x1ae2;eip=0x001044; 	R(_INT(0x21));	// 51675 int     21h             ; DOS - 2+ - READ FROM FILE WITH HANDLE ;~ 1AE2:1044
cs=0x1ae2;eip=0x001046; 	R(JC(loc_2a40b));	// 51678 jb      short loc_2A40B ;~ 1AE2:1046
cs=0x1ae2;eip=0x001048; 	T(OR(ax, ax));	// 51679 or      ax, ax ;~ 1AE2:1048
cs=0x1ae2;eip=0x00104a; 	R(JZ(loc_2a465));	// 51680 jz      short loc_2A465 ;~ 1AE2:104A
cs=0x1ae2;eip=0x00104c; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), 1));	// 51681 cmp     [bp+arg_6], 1 ;~ 1AE2:104C
cs=0x1ae2;eip=0x001050; 	R(JZ(loc_2a471));	// 51682 jz      short loc_2A471 ;~ 1AE2:1050
loc_2a452:
	// 8098 
cs=0x1ae2;eip=0x001052; 	T(MOV(cx, 0x0FFFF));	// 51685 mov     cx, 0FFFFh ;~ 1AE2:1052
cs=0x1ae2;eip=0x001055; 	T(MOV(dx, cx));	// 51686 mov     dx, cx ;~ 1AE2:1055
cs=0x1ae2;eip=0x001057; 	T(MOV(ax, 0x4201));	// 51687 mov     ax, 4201h ;~ 1AE2:1057
cs=0x1ae2;eip=0x00105a; 	R(_INT(0x21));	// 51688 int     21h             ; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) ;~ 1AE2:105A
cs=0x1ae2;eip=0x00105c; 	T(MOV(cx, 1));	// 51690 mov     cx, 1 ;~ 1AE2:105C
cs=0x1ae2;eip=0x00105f; 	T(CMP(*(raddr(ss,bp+var_1)), 0x0A));	// 51691 cmp     [bp+var_1], 0Ah ;~ 1AE2:105F
cs=0x1ae2;eip=0x001063; 	R(JZ(loc_2a46c));	// 51692 jz      short loc_2A46C ;~ 1AE2:1063
loc_2a465:
	// 8099 
cs=0x1ae2;eip=0x001065; 	T(MOV(al, 0x0D));	// 51695 mov     al, 0Dh ;~ 1AE2:1065
loc_2a467:
	// 8100 
cs=0x1ae2;eip=0x001067; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 51698 mov     dx, [bp+arg_4] ;~ 1AE2:1067
cs=0x1ae2;eip=0x00106a; 	R(JMP(loc_2a402));	// 51699 jmp     short loc_2A402 ;~ 1AE2:106A
loc_2a46c:
	// 8101 
cs=0x1ae2;eip=0x00106c; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 51703 mov     dx, [bp+arg_4] ;~ 1AE2:106C
cs=0x1ae2;eip=0x00106f; 	R(JMP(loc_2a405));	// 51704 jmp     short loc_2A405 ;~ 1AE2:106F
loc_2a471:
	// 8102 
cs=0x1ae2;eip=0x001071; 	T(CMP(*(raddr(ss,bp+var_1)), 0x0A));	// 51708 cmp     [bp+var_1], 0Ah ;~ 1AE2:1071
cs=0x1ae2;eip=0x001075; 	R(JNZ(loc_2a452));	// 51709 jnz     short loc_2A452 ;~ 1AE2:1075
cs=0x1ae2;eip=0x001077; 	R(JMP(loc_2a437));	// 51710 jmp     short loc_2A437 ;~ 1AE2:1077
sub_2a47a:
	// 51720 
#undef var_8
#define var_8 -8
	// 51723 var_8           = word ptr -8 ;~ 1AE2:107A
#undef var_4
#define var_4 -4
	// 51724 var_4           = word ptr -4 ;~ 1AE2:107A
#undef var_2
#define var_2 -2
	// 51725 var_2           = word ptr -2 ;~ 1AE2:107A
#undef arg_2
#define arg_2 6
	// 51726 arg_2           = word ptr  6 ;~ 1AE2:107A
#undef arg_4
#define arg_4 0x0A
	// 51727 arg_4           = word ptr  0Ah ;~ 1AE2:107A
ret_1ae2_107a:
	// 8103 
cs=0x1ae2;eip=0x00107a; 	X(PUSH(bp));	// 51731 push    bp ;~ 1AE2:107A
cs=0x1ae2;eip=0x00107b; 	T(MOV(bp, sp));	// 51732 mov     bp, sp ;~ 1AE2:107B
cs=0x1ae2;eip=0x00107d; 	T(SUB(sp, 8));	// 51733 sub     sp, 8 ;~ 1AE2:107D
cs=0x1ae2;eip=0x001080; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 51734 mov     bx, [bp+arg_2] ;~ 1AE2:1080
cs=0x1ae2;eip=0x001083; 	T(CMP(bx, word_38296));	// 51735 cmp     bx, word_38296 ;~ 1AE2:1083
cs=0x1ae2;eip=0x001087; 	R(JC(loc_2a490));	// 51736 jb      short loc_2A490 ;~ 1AE2:1087
cs=0x1ae2;eip=0x001089; 	T(MOV(ax, 0x900));	// 51737 mov     ax, 900h ;~ 1AE2:1089
cs=0x1ae2;eip=0x00108c; 	T(STC);	// 51738 stc ;~ 1AE2:108C
loc_2a48d:
	// 8104 
cs=0x1ae2;eip=0x00108d; 	R(JMP(loc_2a929));	// 51741 jmp     loc_2A929 ;~ 1AE2:108D
loc_2a490:
	// 8105 
cs=0x1ae2;eip=0x001090; 	T(TEST(*(raddr(ds,bx-0x3BA8)), 0x20));	// 51745 test    byte ptr [bx-3BA8h], 20h ;~ 1AE2:1090
cs=0x1ae2;eip=0x001095; 	R(JZ(loc_2a4a2));	// 51746 jz      short loc_2A4A2 ;~ 1AE2:1095
cs=0x1ae2;eip=0x001097; 	T(MOV(ax, 0x4202));	// 51747 mov     ax, 4202h ;~ 1AE2:1097
cs=0x1ae2;eip=0x00109a; 	T(XOR(cx, cx));	// 51748 xor     cx, cx ;~ 1AE2:109A
cs=0x1ae2;eip=0x00109c; 	T(MOV(dx, cx));	// 51749 mov     dx, cx ;~ 1AE2:109C
cs=0x1ae2;eip=0x00109e; 	R(_INT(0x21));	// 51750 int     21h             ; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) ;~ 1AE2:109E
cs=0x1ae2;eip=0x0010a0; 	R(JC(loc_2a48d));	// 51752 jb      short loc_2A48D ;~ 1AE2:10A0
loc_2a4a2:
	// 8106 
cs=0x1ae2;eip=0x0010a2; 	T(TEST(*(raddr(ds,bx-0x3BA8)), 0x80));	// 51755 test    byte ptr [bx-3BA8h], 80h ;~ 1AE2:10A2
cs=0x1ae2;eip=0x0010a7; 	R(JZ(loc_2a519));	// 51756 jz      short loc_2A519 ;~ 1AE2:10A7
cs=0x1ae2;eip=0x0010a9; 	T(MOV(dx, *(dw*)(raddr(ss,bp+8))));	// 51757 mov     dx, [bp+8] ;~ 1AE2:10A9
cs=0x1ae2;eip=0x0010ac; 	X(PUSH(ds));	// 51758 push    ds ;~ 1AE2:10AC
cs=0x1ae2;eip=0x0010ad; 	X(POP(es));	// 51759 pop     es ;~ 1AE2:10AD
cs=0x1ae2;eip=0x0010ae; 	T(XOR(ax, ax));	// 51760 xor     ax, ax ;~ 1AE2:10AE
cs=0x1ae2;eip=0x0010b0; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 51761 mov     [bp+var_2], ax ;~ 1AE2:10B0
cs=0x1ae2;eip=0x0010b3; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 51762 mov     [bp+var_4], ax ;~ 1AE2:10B3
cs=0x1ae2;eip=0x0010b6; 	T(CLD);	// 51763 cld ;~ 1AE2:10B6
cs=0x1ae2;eip=0x0010b7; 	X(PUSH(di));	// 51764 push    di ;~ 1AE2:10B7
cs=0x1ae2;eip=0x0010b8; 	X(PUSH(si));	// 51765 push    si ;~ 1AE2:10B8
cs=0x1ae2;eip=0x0010b9; 	T(MOV(di, dx));	// 51766 mov     di, dx ;~ 1AE2:10B9
cs=0x1ae2;eip=0x0010bb; 	T(MOV(si, dx));	// 51767 mov     si, dx ;~ 1AE2:10BB
cs=0x1ae2;eip=0x0010bd; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), sp));	// 51768 mov     [bp+var_8], sp ;~ 1AE2:10BD
cs=0x1ae2;eip=0x0010c0; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_4))));	// 51769 mov     cx, [bp+arg_4] ;~ 1AE2:10C0
cs=0x1ae2;eip=0x0010c3; 	R(JCXZ(loc_2a51b));	// 51770 jcxz    short loc_2A51B ;~ 1AE2:10C3
cs=0x1ae2;eip=0x0010c5; 	T(MOV(al, 0x0A));	// 51771 mov     al, 0Ah ;~ 1AE2:10C5
	// 51772 repne scasb ;~ 1AE2:10C7
cs=0x1ae2;eip=0x0010c7; 	T(	REPNE SCASB);	// 51772 repne scasb ;~ 1AE2:10C7
cs=0x1ae2;eip=0x0010c9; 	R(JNZ(loc_2a517));	// 51773 jnz     short loc_2A517 ;~ 1AE2:10C9
cs=0x1ae2;eip=0x0010cb; 	R(CALLF(sub_2abf6,0));	// 51774 call    sub_2ABF6 ;~ 1AE2:10CB
cs=0x1ae2;eip=0x0010d0; 	T(CMP(ax, 0x0A8));	// 51775 cmp     ax, 0A8h ; '¨' ;~ 1AE2:10D0
cs=0x1ae2;eip=0x0010d3; 	R(JBE(loc_2a51d));	// 51776 jbe     short loc_2A51D ;~ 1AE2:10D3
cs=0x1ae2;eip=0x0010d5; 	T(SUB(sp, 2));	// 51777 sub     sp, 2 ;~ 1AE2:10D5
cs=0x1ae2;eip=0x0010d8; 	T(MOV(bx, sp));	// 51778 mov     bx, sp ;~ 1AE2:10D8
cs=0x1ae2;eip=0x0010da; 	T(MOV(dx, 0x200));	// 51779 mov     dx, 200h ;~ 1AE2:10DA
cs=0x1ae2;eip=0x0010dd; 	T(CMP(ax, 0x228));	// 51780 cmp     ax, 228h ;~ 1AE2:10DD
cs=0x1ae2;eip=0x0010e0; 	R(JNC(loc_2a4e5));	// 51781 jnb     short loc_2A4E5 ;~ 1AE2:10E0
cs=0x1ae2;eip=0x0010e2; 	T(MOV(dx, 0x80));	// 51782 mov     dx, 80h ; '€' ;~ 1AE2:10E2
loc_2a4e5:
	// 8107 
cs=0x1ae2;eip=0x0010e5; 	T(SUB(sp, dx));	// 51785 sub     sp, dx ;~ 1AE2:10E5
cs=0x1ae2;eip=0x0010e7; 	T(MOV(dx, sp));	// 51786 mov     dx, sp ;~ 1AE2:10E7
cs=0x1ae2;eip=0x0010e9; 	T(MOV(di, dx));	// 51787 mov     di, dx ;~ 1AE2:10E9
cs=0x1ae2;eip=0x0010eb; 	X(PUSH(ss));	// 51788 push    ss ;~ 1AE2:10EB
cs=0x1ae2;eip=0x0010ec; 	X(POP(es));	// 51789 pop     es ;~ 1AE2:10EC
cs=0x1ae2;eip=0x0010ed; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_4))));	// 51790 mov     cx, [bp+arg_4] ;~ 1AE2:10ED
loc_2a4f0:
	// 8108 
cs=0x1ae2;eip=0x0010f0; 	T(LODSB);	// 51793 lodsb ;~ 1AE2:10F0
cs=0x1ae2;eip=0x0010f1; 	T(CMP(al, 0x0A));	// 51794 cmp     al, 0Ah ;~ 1AE2:10F1
cs=0x1ae2;eip=0x0010f3; 	R(JZ(loc_2a501));	// 51795 jz      short loc_2A501 ;~ 1AE2:10F3
loc_2a4f5:
	// 8109 
cs=0x1ae2;eip=0x0010f5; 	T(CMP(di, bx));	// 51798 cmp     di, bx ;~ 1AE2:10F5
cs=0x1ae2;eip=0x0010f7; 	R(JZ(loc_2a512));	// 51799 jz      short loc_2A512 ;~ 1AE2:10F7
loc_2a4f9:
	// 8110 
cs=0x1ae2;eip=0x0010f9; 	X(STOSB);	// 51802 stosb ;~ 1AE2:10F9
cs=0x1ae2;eip=0x0010fa; 	R(LOOP(loc_2a4f0));	// 51803 loop    loc_2A4F0 ;~ 1AE2:10FA
cs=0x1ae2;eip=0x0010fc; 	R(CALL(sub_2a522,0));	// 51804 call    near ptr sub_2A522 ;~ 1AE2:10FC
cs=0x1ae2;eip=0x0010ff; 	R(JMP(loc_2a562));	// 51805 jmp     short loc_2A562 ;~ 1AE2:10FF
loc_2a501:
	// 8111 
cs=0x1ae2;eip=0x001101; 	T(MOV(al, 0x0D));	// 51809 mov     al, 0Dh ;~ 1AE2:1101
cs=0x1ae2;eip=0x001103; 	T(CMP(di, bx));	// 51810 cmp     di, bx ;~ 1AE2:1103
cs=0x1ae2;eip=0x001105; 	R(JNZ(loc_2a50a));	// 51811 jnz     short loc_2A50A ;~ 1AE2:1105
cs=0x1ae2;eip=0x001107; 	R(CALL(sub_2a522,0));	// 51812 call    near ptr sub_2A522 ;~ 1AE2:1107
loc_2a50a:
	// 8112 
cs=0x1ae2;eip=0x00110a; 	X(STOSB);	// 51815 stosb ;~ 1AE2:110A
cs=0x1ae2;eip=0x00110b; 	T(MOV(al, 0x0A));	// 51816 mov     al, 0Ah ;~ 1AE2:110B
cs=0x1ae2;eip=0x00110d; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 51817 inc     [bp+var_4] ;~ 1AE2:110D
cs=0x1ae2;eip=0x001110; 	R(JMP(loc_2a4f5));	// 51818 jmp     short loc_2A4F5 ;~ 1AE2:1110
loc_2a512:
	// 8113 
cs=0x1ae2;eip=0x001112; 	R(CALL(sub_2a522,0));	// 51822 call    near ptr sub_2A522 ;~ 1AE2:1112
cs=0x1ae2;eip=0x001115; 	R(JMP(loc_2a4f9));	// 51823 jmp     short loc_2A4F9 ;~ 1AE2:1115
loc_2a517:
	// 8114 
cs=0x1ae2;eip=0x001117; 	X(POP(si));	// 51827 pop     si ;~ 1AE2:1117
cs=0x1ae2;eip=0x001118; 	X(POP(di));	// 51828 pop     di ;~ 1AE2:1118
loc_2a519:
	// 8115 
cs=0x1ae2;eip=0x001119; 	R(JMP(loc_2a570));	// 51831 jmp     short loc_2A570 ;~ 1AE2:1119
loc_2a51b:
	// 8116 
cs=0x1ae2;eip=0x00111b; 	R(JMP(loc_2a562));	// 51835 jmp     short loc_2A562 ;~ 1AE2:111B
loc_2a51d:
	// 8117 
cs=0x1ae2;eip=0x00111d; 	T(XOR(ax, ax));	// 51839 xor     ax, ax ;~ 1AE2:111D
cs=0x1ae2;eip=0x00111f; 	R(JMP(loc_294c9));	// 51840 jmp     loc_294C9 ;~ 1AE2:111F
sub_2a522:
	// 51847 
cs=0x1ae2;eip=0x001122; 	X(PUSH(ax));	// 51849 push    ax ;~ 1AE2:1122
ret_1ae2_1123:
	// 8118 
cs=0x1ae2;eip=0x001123; 	X(PUSH(bx));	// 51850 push    bx ;~ 1AE2:1123
cs=0x1ae2;eip=0x001124; 	X(PUSH(cx));	// 51851 push    cx ;~ 1AE2:1124
cs=0x1ae2;eip=0x001125; 	T(MOV(cx, di));	// 51852 mov     cx, di ;~ 1AE2:1125
cs=0x1ae2;eip=0x001127; 	T(SUB(cx, dx));	// 51853 sub     cx, dx ;~ 1AE2:1127
cs=0x1ae2;eip=0x001129; 	R(JCXZ(loc_2a53b));	// 51854 jcxz    short loc_2A53B ;~ 1AE2:1129
cs=0x1ae2;eip=0x00112b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 51855 mov     bx, [bp+6] ;~ 1AE2:112B
cs=0x1ae2;eip=0x00112e; 	T(MOV(ah, 0x40));	// 51856 mov     ah, 40h ;~ 1AE2:112E
cs=0x1ae2;eip=0x001130; 	R(_INT(0x21));	// 51857 int     21h             ; DOS - 2+ - WRITE TO FILE WITH HANDLE ;~ 1AE2:1130
cs=0x1ae2;eip=0x001132; 	R(JC(loc_2a541));	// 51859 jb      short loc_2A541 ;~ 1AE2:1132
cs=0x1ae2;eip=0x001134; 	X(ADD(*(dw*)(raddr(ss,bp-2)), ax));	// 51860 add     [bp-2], ax ;~ 1AE2:1134
cs=0x1ae2;eip=0x001137; 	T(OR(ax, ax));	// 51861 or      ax, ax ;~ 1AE2:1137
cs=0x1ae2;eip=0x001139; 	R(JZ(loc_2a541));	// 51862 jz      short loc_2A541 ;~ 1AE2:1139
loc_2a53b:
	// 8119 
cs=0x1ae2;eip=0x00113b; 	X(POP(cx));	// 51865 pop     cx ;~ 1AE2:113B
cs=0x1ae2;eip=0x00113c; 	X(POP(bx));	// 51866 pop     bx ;~ 1AE2:113C
cs=0x1ae2;eip=0x00113d; 	X(POP(ax));	// 51867 pop     ax ;~ 1AE2:113D
cs=0x1ae2;eip=0x00113e; 	T(MOV(di, dx));	// 51868 mov     di, dx ;~ 1AE2:113E
cs=0x1ae2;eip=0x001140; 	R(RETN(0));	// 51869 retn ;~ 1AE2:1140
loc_2a541:
	// 8120 
cs=0x1ae2;eip=0x001141; 	T(ADD(sp, 8));	// 51874 add     sp, 8 ;~ 1AE2:1141
cs=0x1ae2;eip=0x001144; 	R(JNC(loc_2a54a));	// 51875 jnb     short loc_2A54A ;~ 1AE2:1144
cs=0x1ae2;eip=0x001146; 	T(MOV(ah, 9));	// 51876 mov     ah, 9 ;~ 1AE2:1146
cs=0x1ae2;eip=0x001148; 	R(JMP(loc_2a568));	// 51877 jmp     short loc_2A568 ;~ 1AE2:1148
loc_2a54a:
	// 8121 
cs=0x1ae2;eip=0x00114a; 	T(TEST(*(raddr(ds,bx-0x3BA8)), 0x40));	// 51881 test    byte ptr [bx-3BA8h], 40h ;~ 1AE2:114A
cs=0x1ae2;eip=0x00114f; 	R(JZ(loc_2a55c));	// 51882 jz      short loc_2A55C ;~ 1AE2:114F
cs=0x1ae2;eip=0x001151; 	T(MOV(bx, *(dw*)(raddr(ss,bp+8))));	// 51883 mov     bx, [bp+8] ;~ 1AE2:1151
cs=0x1ae2;eip=0x001154; 	T(CMP(*(raddr(ds,bx)), 0x1A));	// 51884 cmp     byte ptr [bx], 1Ah ;~ 1AE2:1154
cs=0x1ae2;eip=0x001157; 	R(JNZ(loc_2a55c));	// 51885 jnz     short loc_2A55C ;~ 1AE2:1157
cs=0x1ae2;eip=0x001159; 	T(CLC);	// 51886 clc ;~ 1AE2:1159
cs=0x1ae2;eip=0x00115a; 	R(JMP(loc_2a568));	// 51887 jmp     short loc_2A568 ;~ 1AE2:115A
loc_2a55c:
	// 8122 
cs=0x1ae2;eip=0x00115c; 	T(STC);	// 51892 stc ;~ 1AE2:115C
cs=0x1ae2;eip=0x00115d; 	T(MOV(ax, 0x1C00));	// 51893 mov     ax, 1C00h ;~ 1AE2:115D
cs=0x1ae2;eip=0x001160; 	R(JMP(loc_2a568));	// 51894 jmp     short loc_2A568 ;~ 1AE2:1160
loc_2a562:
	// 8123 
cs=0x1ae2;eip=0x001162; 	T(MOV(ax, *(dw*)(raddr(ss,bp-2))));	// 51899 mov     ax, [bp-2] ;~ 1AE2:1162
cs=0x1ae2;eip=0x001165; 	T(SUB(ax, *(dw*)(raddr(ss,bp-4))));	// 51900 sub     ax, [bp-4] ;~ 1AE2:1165
loc_2a568:
	// 8124 
cs=0x1ae2;eip=0x001168; 	T(MOV(sp, *(dw*)(raddr(ss,bp-8))));	// 51904 mov     sp, [bp-8] ;~ 1AE2:1168
cs=0x1ae2;eip=0x00116b; 	X(POP(si));	// 51905 pop     si ;~ 1AE2:116B
cs=0x1ae2;eip=0x00116c; 	X(POP(di));	// 51906 pop     di ;~ 1AE2:116C
loc_2a56d:
	// 8125 
cs=0x1ae2;eip=0x00116d; 	R(JMP(loc_2a929));	// 51910 jmp     loc_2A929 ;~ 1AE2:116D
sub_2a5a4:
	// 51957 
#undef arg_0
#define arg_0 6
	// 51959 arg_0           = word ptr  6 ;~ 1AE2:11A4
ret_1ae2_11a4:
	// 8130 
cs=0x1ae2;eip=0x0011a4; 	X(PUSH(bp));	// 51961 push    bp ;~ 1AE2:11A4
cs=0x1ae2;eip=0x0011a5; 	T(MOV(bp, sp));	// 51962 mov     bp, sp ;~ 1AE2:11A5
cs=0x1ae2;eip=0x0011a7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 51963 mov     bx, [bp+arg_0] ;~ 1AE2:11A7
cs=0x1ae2;eip=0x0011aa; 	T(OR(bx, bx));	// 51964 or      bx, bx ;~ 1AE2:11AA
cs=0x1ae2;eip=0x0011ac; 	R(JZ(loc_2a5b2));	// 51965 jz      short loc_2A5B2 ;~ 1AE2:11AC
cs=0x1ae2;eip=0x0011ae; 	X(OR(*(raddr(ds,bx-2)), 1));	// 51966 or      byte ptr [bx-2], 1 ;~ 1AE2:11AE
loc_2a5b2:
	// 8131 
cs=0x1ae2;eip=0x0011b2; 	T(MOV(sp, bp));	// 51969 mov     sp, bp ;~ 1AE2:11B2
cs=0x1ae2;eip=0x0011b4; 	X(POP(bp));	// 51970 pop     bp ;~ 1AE2:11B4
cs=0x1ae2;eip=0x0011b5; 	R(RETF(0));	// 51971 retf ;~ 1AE2:11B5
sub_2a5b6:
	// 51979 
#undef arg_0
#define arg_0 6
	// 51982 arg_0           = word ptr  6 ;~ 1AE2:11B6
ret_1ae2_11b6:
	// 8132 
cs=0x1ae2;eip=0x0011b6; 	X(PUSH(bp));	// 51984 push    bp ;~ 1AE2:11B6
cs=0x1ae2;eip=0x0011b7; 	T(MOV(bp, sp));	// 51985 mov     bp, sp ;~ 1AE2:11B7
cs=0x1ae2;eip=0x0011b9; 	X(PUSH(si));	// 51986 push    si ;~ 1AE2:11B9
cs=0x1ae2;eip=0x0011ba; 	X(PUSH(di));	// 51987 push    di ;~ 1AE2:11BA
cs=0x1ae2;eip=0x0011bb; 	T(MOV(bx, 0x0C5AA));	// 51988 mov     bx, 0C5AAh ;~ 1AE2:11BB
cs=0x1ae2;eip=0x0011be; 	T(CMP(*(dw*)(raddr(ds,bx)), 0));	// 51989 cmp     word ptr [bx], 0 ;~ 1AE2:11BE
cs=0x1ae2;eip=0x0011c1; 	R(JNZ(loc_2a5ec));	// 51990 jnz     short loc_2A5EC ;~ 1AE2:11C1
cs=0x1ae2;eip=0x0011c3; 	X(PUSH(ds));	// 51991 push    ds ;~ 1AE2:11C3
cs=0x1ae2;eip=0x0011c4; 	X(POP(es));	// 51992 pop     es ;~ 1AE2:11C4
cs=0x1ae2;eip=0x0011c5; 	T(MOV(ax, 5));	// 51993 mov     ax, 5 ;~ 1AE2:11C5
cs=0x1ae2;eip=0x0011c8; 	R(CALL(sub_2a73e,0));	// 51994 call    sub_2A73E ;~ 1AE2:11C8
cs=0x1ae2;eip=0x0011cb; 	R(JNZ(loc_2a5d2));	// 51995 jnz     short loc_2A5D2 ;~ 1AE2:11CB
cs=0x1ae2;eip=0x0011cd; 	T(XOR(ax, ax));	// 51996 xor     ax, ax ;~ 1AE2:11CD
cs=0x1ae2;eip=0x0011cf; 	T(CWD);	// 51997 cwd ;~ 1AE2:11CF
cs=0x1ae2;eip=0x0011d0; 	R(JMP(loc_2a5f6));	// 51998 jmp     short loc_2A5F6 ;~ 1AE2:11D0
loc_2a5d2:
	// 8133 
cs=0x1ae2;eip=0x0011d2; 	T(INC(ax));	// 52002 inc     ax ;~ 1AE2:11D2
cs=0x1ae2;eip=0x0011d3; 	T(AND(al, 0x0FE));	// 52003 and     al, 0FEh ;~ 1AE2:11D3
cs=0x1ae2;eip=0x0011d5; 	X(MOV(word_383ea, ax));	// 52004 mov     word_383EA, ax ;~ 1AE2:11D5
cs=0x1ae2;eip=0x0011d8; 	X(MOV(word_383ec, ax));	// 52005 mov     word_383EC, ax ;~ 1AE2:11D8
cs=0x1ae2;eip=0x0011db; 	T(XCHG(ax, si));	// 52006 xchg    ax, si ;~ 1AE2:11DB
cs=0x1ae2;eip=0x0011dc; 	X(MOV(*(dw*)(raddr(ds,si)), 1));	// 52007 mov     word ptr [si], 1 ;~ 1AE2:11DC
cs=0x1ae2;eip=0x0011e0; 	T(ADD(si, 4));	// 52008 add     si, 4 ;~ 1AE2:11E0
cs=0x1ae2;eip=0x0011e3; 	X(MOV(*(dw*)(raddr(ds,si-2)), 0x0FFFE));	// 52009 mov     word ptr [si-2], 0FFFEh ;~ 1AE2:11E3
cs=0x1ae2;eip=0x0011e8; 	X(MOV(word_383f0, si));	// 52010 mov     word_383F0, si ;~ 1AE2:11E8
loc_2a5ec:
	// 8134 
cs=0x1ae2;eip=0x0011ec; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_0))));	// 52013 mov     cx, [bp+arg_0] ;~ 1AE2:11EC
cs=0x1ae2;eip=0x0011ef; 	T(MOV(ax, ds));	// 52014 mov     ax, ds ;~ 1AE2:11EF
cs=0x1ae2;eip=0x0011f1; 	T(MOV(es, ax));	// 52015 mov     es, ax ;~ 1AE2:11F1
cs=0x1ae2;eip=0x0011f3; 	R(CALL(sub_2a5ff,0));	// 52016 call    sub_2A5FF ;~ 1AE2:11F3
loc_2a5f6:
	// 8135 
cs=0x1ae2;eip=0x0011f6; 	X(POP(di));	// 52019 pop     di ;~ 1AE2:11F6
cs=0x1ae2;eip=0x0011f7; 	X(POP(si));	// 52020 pop     si ;~ 1AE2:11F7
cs=0x1ae2;eip=0x0011f8; 	T(MOV(sp, bp));	// 52021 mov     sp, bp ;~ 1AE2:11F8
cs=0x1ae2;eip=0x0011fa; 	X(POP(bp));	// 52022 pop     bp ;~ 1AE2:11FA
cs=0x1ae2;eip=0x0011fb; 	R(RETF(0));	// 52023 retf ;~ 1AE2:11FB
sub_2a5ff:
	// 52037 
cs=0x1ae2;eip=0x0011ff; 	T(INC(cx));	// 52042 inc     cx ;~ 1AE2:11FF
ret_1ae2_1200:
	// 8137 
cs=0x1ae2;eip=0x001200; 	R(JZ(loc_2a5fc));	// 52043 jz      short loc_2A5FC ;~ 1AE2:1200
cs=0x1ae2;eip=0x001202; 	T(AND(cl, 0x0FE));	// 52044 and     cl, 0FEh ;~ 1AE2:1202
cs=0x1ae2;eip=0x001205; 	T(CMP(cx, 0x0FFEE));	// 52045 cmp     cx, 0FFEEh ;~ 1AE2:1205
cs=0x1ae2;eip=0x001208; 	R(JNC(loc_2a5fc));	// 52046 jnb     short loc_2A5FC ;~ 1AE2:1208
cs=0x1ae2;eip=0x00120a; 	T(MOV(si, *(dw*)(raddr(ds,bx+2))));	// 52047 mov     si, [bx+2] ;~ 1AE2:120A
cs=0x1ae2;eip=0x00120d; 	T(CLD);	// 52048 cld ;~ 1AE2:120D
cs=0x1ae2;eip=0x00120e; 	T(LODSW);	// 52049 lodsw ;~ 1AE2:120E
cs=0x1ae2;eip=0x00120f; 	T(MOV(di, si));	// 52050 mov     di, si ;~ 1AE2:120F
cs=0x1ae2;eip=0x001211; 	T(TEST(al, 1));	// 52051 test    al, 1 ;~ 1AE2:1211
cs=0x1ae2;eip=0x001213; 	R(JZ(loc_2a657));	// 52052 jz      short loc_2A657 ;~ 1AE2:1213
loc_2a615:
	// 8138 
cs=0x1ae2;eip=0x001215; 	T(DEC(ax));	// 52055 dec     ax ;~ 1AE2:1215
cs=0x1ae2;eip=0x001216; 	T(CMP(ax, cx));	// 52056 cmp     ax, cx ;~ 1AE2:1216
cs=0x1ae2;eip=0x001218; 	R(JNC(loc_2a62f));	// 52057 jnb     short loc_2A62F ;~ 1AE2:1218
cs=0x1ae2;eip=0x00121a; 	T(MOV(dx, ax));	// 52058 mov     dx, ax ;~ 1AE2:121A
cs=0x1ae2;eip=0x00121c; 	T(ADD(si, ax));	// 52059 add     si, ax ;~ 1AE2:121C
cs=0x1ae2;eip=0x00121e; 	T(LODSW);	// 52060 lodsw ;~ 1AE2:121E
cs=0x1ae2;eip=0x00121f; 	T(TEST(al, 1));	// 52061 test    al, 1 ;~ 1AE2:121F
cs=0x1ae2;eip=0x001221; 	R(JZ(loc_2a657));	// 52062 jz      short loc_2A657 ;~ 1AE2:1221
cs=0x1ae2;eip=0x001223; 	T(ADD(ax, dx));	// 52063 add     ax, dx ;~ 1AE2:1223
cs=0x1ae2;eip=0x001225; 	T(ADD(ax, 2));	// 52064 add     ax, 2 ;~ 1AE2:1225
cs=0x1ae2;eip=0x001228; 	T(MOV(si, di));	// 52065 mov     si, di ;~ 1AE2:1228
cs=0x1ae2;eip=0x00122a; 	X(MOV(*(dw*)(raddr(ds,si-2)), ax));	// 52066 mov     [si-2], ax ;~ 1AE2:122A
cs=0x1ae2;eip=0x00122d; 	R(JMP(loc_2a615));	// 52067 jmp     short loc_2A615 ;~ 1AE2:122D
loc_2a62f:
	// 8139 
cs=0x1ae2;eip=0x00122f; 	T(MOV(di, si));	// 52072 mov     di, si ;~ 1AE2:122F
cs=0x1ae2;eip=0x001231; 	R(JZ(loc_2a63f));	// 52073 jz      short loc_2A63F ;~ 1AE2:1231
cs=0x1ae2;eip=0x001233; 	T(ADD(di, cx));	// 52074 add     di, cx ;~ 1AE2:1233
cs=0x1ae2;eip=0x001235; 	X(MOV(*(dw*)(raddr(ds,si-2)), cx));	// 52075 mov     [si-2], cx ;~ 1AE2:1235
cs=0x1ae2;eip=0x001238; 	T(SUB(ax, cx));	// 52076 sub     ax, cx ;~ 1AE2:1238
cs=0x1ae2;eip=0x00123a; 	T(DEC(ax));	// 52077 dec     ax ;~ 1AE2:123A
cs=0x1ae2;eip=0x00123b; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 52078 mov     [di], ax ;~ 1AE2:123B
cs=0x1ae2;eip=0x00123d; 	R(JMP(loc_2a644));	// 52079 jmp     short loc_2A644 ;~ 1AE2:123D
loc_2a63f:
	// 8140 
cs=0x1ae2;eip=0x00123f; 	T(ADD(di, cx));	// 52083 add     di, cx ;~ 1AE2:123F
cs=0x1ae2;eip=0x001241; 	X(DEC(*(raddr(ds,si-2))));	// 52084 dec     byte ptr [si-2] ;~ 1AE2:1241
loc_2a644:
	// 8141 
cs=0x1ae2;eip=0x001244; 	T(MOV(ax, si));	// 52087 mov     ax, si ;~ 1AE2:1244
cs=0x1ae2;eip=0x001246; 	T(MOV(dx, ds));	// 52088 mov     dx, ds ;~ 1AE2:1246
cs=0x1ae2;eip=0x001248; 	T(MOV(cx, ss));	// 52089 mov     cx, ss ;~ 1AE2:1248
cs=0x1ae2;eip=0x00124a; 	T(CMP(dx, cx));	// 52090 cmp     dx, cx ;~ 1AE2:124A
cs=0x1ae2;eip=0x00124c; 	R(JZ(loc_2a653));	// 52091 jz      short loc_2A653 ;~ 1AE2:124C
cs=0x1ae2;eip=0x00124e; 	X(MOV(*(dw*)(((db*)&word_383f8)), ds));	// 52092 mov     es:word_383F8, ds ;~ 1AE2:124E
loc_2a653:
	// 8142 
cs=0x1ae2;eip=0x001253; 	X(MOV(*(dw*)(raddr(ds,bx+2)), di));	// 52095 mov     [bx+2], di ;~ 1AE2:1253
cs=0x1ae2;eip=0x001256; 	R(RETN(0));	// 52096 retn ;~ 1AE2:1256
loc_2a657:
	// 8143 
cs=0x1ae2;eip=0x001257; 	X(MOV(*(&byte_383fe), 2));	// 52101 mov     es:byte_383FE, 2 ;~ 1AE2:1257
loc_2a65d:
	// 8144 
cs=0x1ae2;eip=0x00125d; 	T(CMP(ax, 0x0FFFE));	// 52105 cmp     ax, 0FFFEh ;~ 1AE2:125D
cs=0x1ae2;eip=0x001260; 	R(JZ(loc_2a687));	// 52106 jz      short loc_2A687 ;~ 1AE2:1260
cs=0x1ae2;eip=0x001262; 	T(MOV(di, si));	// 52107 mov     di, si ;~ 1AE2:1262
cs=0x1ae2;eip=0x001264; 	T(ADD(si, ax));	// 52108 add     si, ax ;~ 1AE2:1264
loc_2a666:
	// 8145 
cs=0x1ae2;eip=0x001266; 	T(LODSW);	// 52112 lodsw ;~ 1AE2:1266
cs=0x1ae2;eip=0x001267; 	T(TEST(al, 1));	// 52113 test    al, 1 ;~ 1AE2:1267
cs=0x1ae2;eip=0x001269; 	R(JZ(loc_2a65d));	// 52114 jz      short loc_2A65D ;~ 1AE2:1269
cs=0x1ae2;eip=0x00126b; 	T(MOV(di, si));	// 52115 mov     di, si ;~ 1AE2:126B
loc_2a66d:
	// 8146 
cs=0x1ae2;eip=0x00126d; 	T(DEC(ax));	// 52118 dec     ax ;~ 1AE2:126D
cs=0x1ae2;eip=0x00126e; 	T(CMP(ax, cx));	// 52119 cmp     ax, cx ;~ 1AE2:126E
cs=0x1ae2;eip=0x001270; 	R(JNC(loc_2a62f));	// 52120 jnb     short loc_2A62F ;~ 1AE2:1270
cs=0x1ae2;eip=0x001272; 	T(MOV(dx, ax));	// 52121 mov     dx, ax ;~ 1AE2:1272
cs=0x1ae2;eip=0x001274; 	T(ADD(si, ax));	// 52122 add     si, ax ;~ 1AE2:1274
cs=0x1ae2;eip=0x001276; 	T(LODSW);	// 52123 lodsw ;~ 1AE2:1276
cs=0x1ae2;eip=0x001277; 	T(TEST(al, 1));	// 52124 test    al, 1 ;~ 1AE2:1277
cs=0x1ae2;eip=0x001279; 	R(JZ(loc_2a65d));	// 52125 jz      short loc_2A65D ;~ 1AE2:1279
cs=0x1ae2;eip=0x00127b; 	T(ADD(ax, dx));	// 52126 add     ax, dx ;~ 1AE2:127B
cs=0x1ae2;eip=0x00127d; 	T(ADD(ax, 2));	// 52127 add     ax, 2 ;~ 1AE2:127D
cs=0x1ae2;eip=0x001280; 	T(MOV(si, di));	// 52128 mov     si, di ;~ 1AE2:1280
cs=0x1ae2;eip=0x001282; 	X(MOV(*(dw*)(raddr(ds,si-2)), ax));	// 52129 mov     [si-2], ax ;~ 1AE2:1282
cs=0x1ae2;eip=0x001285; 	R(JMP(loc_2a66d));	// 52130 jmp     short loc_2A66D ;~ 1AE2:1285
loc_2a687:
	// 8147 
cs=0x1ae2;eip=0x001287; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 52134 mov     ax, [bx+8] ;~ 1AE2:1287
cs=0x1ae2;eip=0x00128a; 	T(OR(ax, ax));	// 52135 or      ax, ax ;~ 1AE2:128A
cs=0x1ae2;eip=0x00128c; 	R(JZ(loc_2a692));	// 52136 jz      short loc_2A692 ;~ 1AE2:128C
cs=0x1ae2;eip=0x00128e; 	T(MOV(ds, ax));	// 52137 mov     ds, ax ;~ 1AE2:128E
cs=0x1ae2;eip=0x001290; 	R(JMP(loc_2a6a6));	// 52138 jmp     short loc_2A6A6 ;~ 1AE2:1290
loc_2a692:
	// 8148 
cs=0x1ae2;eip=0x001292; 	X(DEC(*(&byte_383fe)));	// 52142 dec     es:byte_383FE ;~ 1AE2:1292
cs=0x1ae2;eip=0x001297; 	R(JZ(loc_2a6aa));	// 52143 jz      short loc_2A6AA ;~ 1AE2:1297
cs=0x1ae2;eip=0x001299; 	T(MOV(ax, ds));	// 52144 mov     ax, ds ;~ 1AE2:1299
cs=0x1ae2;eip=0x00129b; 	T(MOV(di, ss));	// 52145 mov     di, ss ;~ 1AE2:129B
cs=0x1ae2;eip=0x00129d; 	T(CMP(ax, di));	// 52146 cmp     ax, di ;~ 1AE2:129D
cs=0x1ae2;eip=0x00129f; 	R(JZ(loc_2a6a6));	// 52147 jz      short loc_2A6A6 ;~ 1AE2:129F
cs=0x1ae2;eip=0x0012a1; 	T(MOV(ds, *(dw*)(((db*)&word_383f4))));	// 52148 mov     ds, es:word_383F4 ;~ 1AE2:12A1
loc_2a6a6:
	// 8149 
cs=0x1ae2;eip=0x0012a6; 	T(MOV(si, *(dw*)(raddr(ds,bx))));	// 52152 mov     si, [bx] ;~ 1AE2:12A6
cs=0x1ae2;eip=0x0012a8; 	R(JMP(loc_2a666));	// 52153 jmp     short loc_2A666 ;~ 1AE2:12A8
loc_2a6aa:
	// 8150 
cs=0x1ae2;eip=0x0012aa; 	T(MOV(si, *(dw*)(raddr(ds,bx+6))));	// 52157 mov     si, [bx+6] ;~ 1AE2:12AA
cs=0x1ae2;eip=0x0012ad; 	T(XOR(ax, ax));	// 52158 xor     ax, ax ;~ 1AE2:12AD
cs=0x1ae2;eip=0x0012af; 	R(CALL(sub_2a71c,0));	// 52159 call    sub_2A71C ;~ 1AE2:12AF
cs=0x1ae2;eip=0x0012b2; 	T(CMP(ax, si));	// 52160 cmp     ax, si ;~ 1AE2:12B2
cs=0x1ae2;eip=0x0012b4; 	R(JZ(loc_2a6c3));	// 52161 jz      short loc_2A6C3 ;~ 1AE2:12B4
cs=0x1ae2;eip=0x0012b6; 	T(AND(al, 1));	// 52162 and     al, 1 ;~ 1AE2:12B6
cs=0x1ae2;eip=0x0012b8; 	T(INC(ax));	// 52163 inc     ax ;~ 1AE2:12B8
cs=0x1ae2;eip=0x0012b9; 	T(INC(ax));	// 52164 inc     ax ;~ 1AE2:12B9
cs=0x1ae2;eip=0x0012ba; 	T(CBW);	// 52165 cbw ;~ 1AE2:12BA
cs=0x1ae2;eip=0x0012bb; 	R(CALL(sub_2a71c,0));	// 52166 call    sub_2A71C ;~ 1AE2:12BB
cs=0x1ae2;eip=0x0012be; 	R(JZ(loc_2a6cd));	// 52167 jz      short loc_2A6CD ;~ 1AE2:12BE
cs=0x1ae2;eip=0x0012c0; 	X(DEC(*(raddr(ds,di-2))));	// 52168 dec     byte ptr [di-2] ;~ 1AE2:12C0
loc_2a6c3:
	// 8151 
cs=0x1ae2;eip=0x0012c3; 	R(CALL(sub_2a6e2,0));	// 52171 call    sub_2A6E2 ;~ 1AE2:12C3
cs=0x1ae2;eip=0x0012c6; 	R(JZ(loc_2a6cd));	// 52172 jz      short loc_2A6CD ;~ 1AE2:12C6
cs=0x1ae2;eip=0x0012c8; 	T(XCHG(ax, si));	// 52173 xchg    ax, si ;~ 1AE2:12C8
cs=0x1ae2;eip=0x0012c9; 	T(DEC(si));	// 52174 dec     si ;~ 1AE2:12C9
cs=0x1ae2;eip=0x0012ca; 	T(DEC(si));	// 52175 dec     si ;~ 1AE2:12CA
cs=0x1ae2;eip=0x0012cb; 	R(JMP(loc_2a666));	// 52176 jmp     short loc_2A666 ;~ 1AE2:12CB
loc_2a6cd:
	// 8152 
cs=0x1ae2;eip=0x0012cd; 	T(MOV(ax, ds));	// 52181 mov     ax, ds ;~ 1AE2:12CD
cs=0x1ae2;eip=0x0012cf; 	T(MOV(cx, ss));	// 52182 mov     cx, ss ;~ 1AE2:12CF
cs=0x1ae2;eip=0x0012d1; 	T(CMP(ax, cx));	// 52183 cmp     ax, cx ;~ 1AE2:12D1
cs=0x1ae2;eip=0x0012d3; 	R(JZ(loc_2a6d9));	// 52184 jz      short loc_2A6D9 ;~ 1AE2:12D3
cs=0x1ae2;eip=0x0012d5; 	X(MOV(*(dw*)(((db*)&word_383f8)), ax));	// 52185 mov     es:word_383F8, ax ;~ 1AE2:12D5
loc_2a6d9:
	// 8153 
cs=0x1ae2;eip=0x0012d9; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 52188 mov     ax, [bx] ;~ 1AE2:12D9
cs=0x1ae2;eip=0x0012db; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 52189 mov     [bx+2], ax ;~ 1AE2:12DB
cs=0x1ae2;eip=0x0012de; 	T(XOR(ax, ax));	// 52190 xor     ax, ax ;~ 1AE2:12DE
cs=0x1ae2;eip=0x0012e0; 	T(CWD);	// 52191 cwd ;~ 1AE2:12E0
cs=0x1ae2;eip=0x0012e1; 	R(RETN(0));	// 52192 retn ;~ 1AE2:12E1
sub_2a6e2:
	// 52199 
cs=0x1ae2;eip=0x0012e2; 	X(PUSH(cx));	// 52200 push    cx ;~ 1AE2:12E2
ret_1ae2_12e3:
	// 8154 
cs=0x1ae2;eip=0x0012e3; 	T(MOV(ax, *(dw*)(raddr(ds,di-2))));	// 52201 mov     ax, [di-2] ;~ 1AE2:12E3
cs=0x1ae2;eip=0x0012e6; 	T(TEST(al, 1));	// 52202 test    al, 1 ;~ 1AE2:12E6
cs=0x1ae2;eip=0x0012e8; 	R(JZ(loc_2a6ed));	// 52203 jz      short loc_2A6ED ;~ 1AE2:12E8
cs=0x1ae2;eip=0x0012ea; 	T(SUB(cx, ax));	// 52204 sub     cx, ax ;~ 1AE2:12EA
cs=0x1ae2;eip=0x0012ec; 	T(DEC(cx));	// 52205 dec     cx ;~ 1AE2:12EC
loc_2a6ed:
	// 8155 
cs=0x1ae2;eip=0x0012ed; 	T(INC(cx));	// 52208 inc     cx ;~ 1AE2:12ED
cs=0x1ae2;eip=0x0012ee; 	T(INC(cx));	// 52209 inc     cx ;~ 1AE2:12EE
cs=0x1ae2;eip=0x0012ef; 	T(MOV(dx, 0x7FFF));	// 52210 mov     dx, 7FFFh ;~ 1AE2:12EF
loc_2a6f2:
	// 8156 
cs=0x1ae2;eip=0x0012f2; 	T(CMP(dx, *(dw*)(((db*)&word_383fa))));	// 52213 cmp     dx, es:word_383FA ;~ 1AE2:12F2
cs=0x1ae2;eip=0x0012f7; 	R(JBE(loc_2a6fd));	// 52214 jbe     short loc_2A6FD ;~ 1AE2:12F7
cs=0x1ae2;eip=0x0012f9; 	T(SHR(dx, 1));	// 52215 shr     dx, 1 ;~ 1AE2:12F9
cs=0x1ae2;eip=0x0012fb; 	R(JNZ(loc_2a6f2));	// 52216 jnz     short loc_2A6F2 ;~ 1AE2:12FB
loc_2a6fd:
	// 8157 
cs=0x1ae2;eip=0x0012fd; 	T(MOV(ax, cx));	// 52220 mov     ax, cx ;~ 1AE2:12FD
cs=0x1ae2;eip=0x0012ff; 	T(ADD(ax, si));	// 52221 add     ax, si ;~ 1AE2:12FF
cs=0x1ae2;eip=0x001301; 	R(JC(loc_2a718));	// 52222 jb      short loc_2A718 ;~ 1AE2:1301
cs=0x1ae2;eip=0x001303; 	T(ADD(ax, dx));	// 52223 add     ax, dx ;~ 1AE2:1303
cs=0x1ae2;eip=0x001305; 	R(JC(loc_2a714));	// 52224 jb      short loc_2A714 ;~ 1AE2:1305
cs=0x1ae2;eip=0x001307; 	T(NOT(dx));	// 52225 not     dx ;~ 1AE2:1307
cs=0x1ae2;eip=0x001309; 	T(AND(ax, dx));	// 52226 and     ax, dx ;~ 1AE2:1309
cs=0x1ae2;eip=0x00130b; 	T(SUB(ax, si));	// 52227 sub     ax, si ;~ 1AE2:130B
cs=0x1ae2;eip=0x00130d; 	R(CALL(sub_2a71c,0));	// 52228 call    sub_2A71C ;~ 1AE2:130D
cs=0x1ae2;eip=0x001310; 	R(JNZ(loc_2a71a));	// 52229 jnz     short loc_2A71A ;~ 1AE2:1310
cs=0x1ae2;eip=0x001312; 	T(NOT(dx));	// 52230 not     dx ;~ 1AE2:1312
loc_2a714:
	// 8158 
cs=0x1ae2;eip=0x001314; 	T(SHR(dx, 1));	// 52233 shr     dx, 1 ;~ 1AE2:1314
cs=0x1ae2;eip=0x001316; 	R(JNZ(loc_2a6fd));	// 52234 jnz     short loc_2A6FD ;~ 1AE2:1316
loc_2a718:
	// 8159 
cs=0x1ae2;eip=0x001318; 	T(XOR(ax, ax));	// 52237 xor     ax, ax ;~ 1AE2:1318
loc_2a71a:
	// 8160 
cs=0x1ae2;eip=0x00131a; 	X(POP(cx));	// 52240 pop     cx ;~ 1AE2:131A
cs=0x1ae2;eip=0x00131b; 	R(RETN(0));	// 52241 retn ;~ 1AE2:131B
sub_2a71c:
	// 52248 
cs=0x1ae2;eip=0x00131c; 	X(PUSH(dx));	// 52250 push    dx ;~ 1AE2:131C
ret_1ae2_131d:
	// 8161 
cs=0x1ae2;eip=0x00131d; 	X(PUSH(cx));	// 52251 push    cx ;~ 1AE2:131D
cs=0x1ae2;eip=0x00131e; 	R(CALL(sub_2a73e,0));	// 52252 call    sub_2A73E ;~ 1AE2:131E
cs=0x1ae2;eip=0x001321; 	R(JZ(loc_2a73b));	// 52253 jz      short loc_2A73B ;~ 1AE2:1321
cs=0x1ae2;eip=0x001323; 	X(PUSH(di));	// 52254 push    di ;~ 1AE2:1323
cs=0x1ae2;eip=0x001324; 	T(MOV(di, si));	// 52255 mov     di, si ;~ 1AE2:1324
cs=0x1ae2;eip=0x001326; 	T(MOV(si, ax));	// 52256 mov     si, ax ;~ 1AE2:1326
cs=0x1ae2;eip=0x001328; 	T(ADD(si, dx));	// 52257 add     si, dx ;~ 1AE2:1328
cs=0x1ae2;eip=0x00132a; 	X(MOV(*(dw*)(raddr(ds,si-2)), 0x0FFFE));	// 52258 mov     word ptr [si-2], 0FFFEh ;~ 1AE2:132A
cs=0x1ae2;eip=0x00132f; 	X(MOV(*(dw*)(raddr(ds,bx+6)), si));	// 52259 mov     [bx+6], si ;~ 1AE2:132F
cs=0x1ae2;eip=0x001332; 	T(MOV(dx, si));	// 52260 mov     dx, si ;~ 1AE2:1332
cs=0x1ae2;eip=0x001334; 	T(SUB(dx, di));	// 52261 sub     dx, di ;~ 1AE2:1334
cs=0x1ae2;eip=0x001336; 	T(DEC(dx));	// 52262 dec     dx ;~ 1AE2:1336
cs=0x1ae2;eip=0x001337; 	X(MOV(*(dw*)(raddr(ds,di-2)), dx));	// 52263 mov     [di-2], dx ;~ 1AE2:1337
cs=0x1ae2;eip=0x00133a; 	X(POP(ax));	// 52264 pop     ax ;~ 1AE2:133A
loc_2a73b:
	// 8162 
cs=0x1ae2;eip=0x00133b; 	X(POP(cx));	// 52267 pop     cx ;~ 1AE2:133B
cs=0x1ae2;eip=0x00133c; 	X(POP(dx));	// 52268 pop     dx ;~ 1AE2:133C
cs=0x1ae2;eip=0x00133d; 	R(RETN(0));	// 52269 retn ;~ 1AE2:133D
sub_2a73e:
	// 52276 
cs=0x1ae2;eip=0x00133e; 	X(PUSH(bx));	// 52278 push    bx ;~ 1AE2:133E
ret_1ae2_133f:
	// 8163 
cs=0x1ae2;eip=0x00133f; 	X(PUSH(ax));	// 52279 push    ax ;~ 1AE2:133F
cs=0x1ae2;eip=0x001340; 	T(XOR(dx, dx));	// 52280 xor     dx, dx ;~ 1AE2:1340
cs=0x1ae2;eip=0x001342; 	X(PUSH(ds));	// 52281 push    ds ;~ 1AE2:1342
cs=0x1ae2;eip=0x001343; 	X(PUSH(dx));	// 52282 push    dx ;~ 1AE2:1343
cs=0x1ae2;eip=0x001344; 	X(PUSH(dx));	// 52283 push    dx ;~ 1AE2:1344
cs=0x1ae2;eip=0x001345; 	X(PUSH(ax));	// 52284 push    ax ;~ 1AE2:1345
cs=0x1ae2;eip=0x001346; 	T(MOV(ax, 1));	// 52285 mov     ax, 1 ;~ 1AE2:1346
cs=0x1ae2;eip=0x001349; 	X(PUSH(ax));	// 52286 push    ax ;~ 1AE2:1349
cs=0x1ae2;eip=0x00134a; 	X(PUSH(es));	// 52287 push    es ;~ 1AE2:134A
cs=0x1ae2;eip=0x00134b; 	X(POP(ds));	// 52288 pop     ds ;~ 1AE2:134B
cs=0x1ae2;eip=0x00134c; 	R(CALLF(sub_2a760,0));	// 52289 call    sub_2A760 ;~ 1AE2:134C
cs=0x1ae2;eip=0x001351; 	T(ADD(sp, 8));	// 52290 add     sp, 8 ;~ 1AE2:1351
cs=0x1ae2;eip=0x001354; 	T(CMP(dx, 0x0FFFF));	// 52291 cmp     dx, 0FFFFh ;~ 1AE2:1354
cs=0x1ae2;eip=0x001357; 	X(POP(ds));	// 52292 pop     ds ;~ 1AE2:1357
cs=0x1ae2;eip=0x001358; 	X(POP(dx));	// 52293 pop     dx ;~ 1AE2:1358
cs=0x1ae2;eip=0x001359; 	X(POP(bx));	// 52294 pop     bx ;~ 1AE2:1359
cs=0x1ae2;eip=0x00135a; 	R(JZ(locret_2a75e));	// 52295 jz      short locret_2A75E ;~ 1AE2:135A
cs=0x1ae2;eip=0x00135c; 	T(OR(dx, dx));	// 52296 or      dx, dx ;~ 1AE2:135C
locret_2a75e:
	// 8164 
cs=0x1ae2;eip=0x00135e; 	R(RETN(0));	// 52299 retn ;~ 1AE2:135E
sub_2a760:
	// 52309 
#undef arg_0
#define arg_0 6
	// 52312 arg_0           = word ptr  6 ;~ 1AE2:1360
#undef arg_2
#define arg_2 8
	// 52313 arg_2           = word ptr  8 ;~ 1AE2:1360
#undef arg_4
#define arg_4 0x0A
	// 52314 arg_4           = word ptr  0Ah ;~ 1AE2:1360
#undef arg_8
#define arg_8 0x0E
	// 52315 arg_8           = word ptr  0Eh ;~ 1AE2:1360
ret_1ae2_1360:
	// 8165 
cs=0x1ae2;eip=0x001360; 	X(PUSH(bp));	// 52317 push    bp ;~ 1AE2:1360
cs=0x1ae2;eip=0x001361; 	T(MOV(bp, sp));	// 52318 mov     bp, sp ;~ 1AE2:1361
cs=0x1ae2;eip=0x001363; 	X(PUSH(si));	// 52319 push    si ;~ 1AE2:1363
cs=0x1ae2;eip=0x001364; 	X(PUSH(di));	// 52320 push    di ;~ 1AE2:1364
cs=0x1ae2;eip=0x001365; 	X(PUSH(es));	// 52321 push    es ;~ 1AE2:1365
cs=0x1ae2;eip=0x001366; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0));	// 52322 cmp     [bp+arg_4], 0 ;~ 1AE2:1366
cs=0x1ae2;eip=0x00136a; 	R(JNZ(loc_2a7a4));	// 52323 jnz     short loc_2A7A4 ;~ 1AE2:136A
cs=0x1ae2;eip=0x00136c; 	T(MOV(di, 0x0C3DE));	// 52324 mov     di, 0C3DEh ;~ 1AE2:136C
cs=0x1ae2;eip=0x00136f; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 52325 mov     dx, [bp+arg_2] ;~ 1AE2:136F
cs=0x1ae2;eip=0x001372; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 52326 mov     ax, [bp+arg_0] ;~ 1AE2:1372
cs=0x1ae2;eip=0x001375; 	T(DEC(ax));	// 52327 dec     ax ;~ 1AE2:1375
cs=0x1ae2;eip=0x001376; 	R(JNZ(loc_2a77f));	// 52328 jnz     short loc_2A77F ;~ 1AE2:1376
cs=0x1ae2;eip=0x001378; 	R(CALL(sub_2a7ce,0));	// 52329 call    sub_2A7CE ;~ 1AE2:1378
cs=0x1ae2;eip=0x00137b; 	R(JC(loc_2a7a4));	// 52330 jb      short loc_2A7A4 ;~ 1AE2:137B
cs=0x1ae2;eip=0x00137d; 	R(JMP(loc_2a7c7));	// 52331 jmp     short loc_2A7C7 ;~ 1AE2:137D
loc_2a77f:
	// 8166 
cs=0x1ae2;eip=0x00137f; 	T(MOV(si, word_3826e));	// 52335 mov     si, word_3826E ;~ 1AE2:137F
cs=0x1ae2;eip=0x001383; 	T(DEC(ax));	// 52336 dec     ax ;~ 1AE2:1383
cs=0x1ae2;eip=0x001384; 	R(JZ(loc_2a797));	// 52337 jz      short loc_2A797 ;~ 1AE2:1384
cs=0x1ae2;eip=0x001386; 	T(CMP(si, di));	// 52338 cmp     si, di ;~ 1AE2:1386
cs=0x1ae2;eip=0x001388; 	R(JZ(loc_2a797));	// 52339 jz      short loc_2A797 ;~ 1AE2:1388
cs=0x1ae2;eip=0x00138a; 	T(MOV(ax, *(dw*)(raddr(ds,si+2))));	// 52340 mov     ax, [si+2] ;~ 1AE2:138A
cs=0x1ae2;eip=0x00138d; 	X(MOV(*(dw*)(raddr(ss,bp+arg_8)), ax));	// 52341 mov     [bp+arg_8], ax ;~ 1AE2:138D
cs=0x1ae2;eip=0x001390; 	X(PUSH(si));	// 52342 push    si ;~ 1AE2:1390
cs=0x1ae2;eip=0x001391; 	R(CALL(sub_2a7ce,0));	// 52343 call    sub_2A7CE ;~ 1AE2:1391
cs=0x1ae2;eip=0x001394; 	X(POP(si));	// 52344 pop     si ;~ 1AE2:1394
cs=0x1ae2;eip=0x001395; 	R(JNC(loc_2a7c7));	// 52345 jnb     short loc_2A7C7 ;~ 1AE2:1395
loc_2a797:
	// 8167 
cs=0x1ae2;eip=0x001397; 	T(ADD(si, 4));	// 52349 add     si, 4 ;~ 1AE2:1397
cs=0x1ae2;eip=0x00139a; 	T(CMP(si, 0x0C42E));	// 52350 cmp     si, 0C42Eh ;~ 1AE2:139A
cs=0x1ae2;eip=0x00139e; 	R(JNC(loc_2a7a4));	// 52351 jnb     short loc_2A7A4 ;~ 1AE2:139E
cs=0x1ae2;eip=0x0013a0; 	T(OR(dx, dx));	// 52352 or      dx, dx ;~ 1AE2:13A0
cs=0x1ae2;eip=0x0013a2; 	R(JNZ(loc_2a7aa));	// 52353 jnz     short loc_2A7AA ;~ 1AE2:13A2
loc_2a7a4:
	// 8168 
cs=0x1ae2;eip=0x0013a4; 	T(MOV(ax, 0x0FFFF));	// 52357 mov     ax, 0FFFFh ;~ 1AE2:13A4
cs=0x1ae2;eip=0x0013a7; 	T(CWD);	// 52358 cwd ;~ 1AE2:13A7
cs=0x1ae2;eip=0x0013a8; 	R(JMP(loc_2a7c7));	// 52359 jmp     short loc_2A7C7 ;~ 1AE2:13A8
loc_2a7aa:
	// 8169 
cs=0x1ae2;eip=0x0013aa; 	T(MOV(bx, dx));	// 52363 mov     bx, dx ;~ 1AE2:13AA
cs=0x1ae2;eip=0x0013ac; 	T(ADD(bx, 0x0F));	// 52364 add     bx, 0Fh ;~ 1AE2:13AC
cs=0x1ae2;eip=0x0013af; 	T(RCR(bx, 1));	// 52365 rcr     bx, 1 ;~ 1AE2:13AF
cs=0x1ae2;eip=0x0013b1; 	T(MOV(cl, 3));	// 52366 mov     cl, 3 ;~ 1AE2:13B1
cs=0x1ae2;eip=0x0013b3; 	T(SHR(bx, cl));	// 52367 shr     bx, cl ;~ 1AE2:13B3
cs=0x1ae2;eip=0x0013b5; 	T(MOV(ah, 0x48));	// 52368 mov     ah, 48h ;~ 1AE2:13B5
cs=0x1ae2;eip=0x0013b7; 	R(_INT(0x21));	// 52369 int     21h             ; DOS - 2+ - ALLOCATE MEMORY ;~ 1AE2:13B7
cs=0x1ae2;eip=0x0013b9; 	R(JC(loc_2a7a4));	// 52371 jb      short loc_2A7A4 ;~ 1AE2:13B9
cs=0x1ae2;eip=0x0013bb; 	T(XCHG(ax, dx));	// 52372 xchg    ax, dx ;~ 1AE2:13BB
cs=0x1ae2;eip=0x0013bc; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 52373 mov     [si], ax ;~ 1AE2:13BC
cs=0x1ae2;eip=0x0013be; 	X(MOV(*(dw*)(raddr(ds,si+2)), dx));	// 52374 mov     [si+2], dx ;~ 1AE2:13BE
cs=0x1ae2;eip=0x0013c1; 	X(MOV(word_3826e, si));	// 52375 mov     word_3826E, si ;~ 1AE2:13C1
cs=0x1ae2;eip=0x0013c5; 	T(XOR(ax, ax));	// 52376 xor     ax, ax ;~ 1AE2:13C5
loc_2a7c7:
	// 8170 
cs=0x1ae2;eip=0x0013c7; 	X(POP(es));	// 52380 pop     es ;~ 1AE2:13C7
cs=0x1ae2;eip=0x0013c8; 	X(POP(di));	// 52382 pop     di ;~ 1AE2:13C8
cs=0x1ae2;eip=0x0013c9; 	X(POP(si));	// 52383 pop     si ;~ 1AE2:13C9
cs=0x1ae2;eip=0x0013ca; 	T(MOV(sp, bp));	// 52384 mov     sp, bp ;~ 1AE2:13CA
cs=0x1ae2;eip=0x0013cc; 	X(POP(bp));	// 52385 pop     bp ;~ 1AE2:13CC
cs=0x1ae2;eip=0x0013cd; 	R(RETF(0));	// 52386 retf ;~ 1AE2:13CD
sub_2a7ce:
	// 52393 
cs=0x1ae2;eip=0x0013ce; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0E))));	// 52395 mov     cx, [bp+0Eh] ;~ 1AE2:13CE
ret_1ae2_13d1:
	// 8171 
cs=0x1ae2;eip=0x0013d1; 	T(MOV(si, di));	// 52396 mov     si, di ;~ 1AE2:13D1
loc_2a7d3:
	// 8172 
cs=0x1ae2;eip=0x0013d3; 	T(CMP(*(dw*)(raddr(ds,si+2)), cx));	// 52399 cmp     [si+2], cx ;~ 1AE2:13D3
cs=0x1ae2;eip=0x0013d6; 	R(JZ(loc_2a7e4));	// 52400 jz      short loc_2A7E4 ;~ 1AE2:13D6
cs=0x1ae2;eip=0x0013d8; 	T(ADD(si, 4));	// 52401 add     si, 4 ;~ 1AE2:13D8
cs=0x1ae2;eip=0x0013db; 	T(CMP(si, 0x0C42E));	// 52402 cmp     si, 0C42Eh ;~ 1AE2:13DB
cs=0x1ae2;eip=0x0013df; 	R(JNZ(loc_2a7d3));	// 52403 jnz     short loc_2A7D3 ;~ 1AE2:13DF
cs=0x1ae2;eip=0x0013e1; 	T(STC);	// 52404 stc ;~ 1AE2:13E1
cs=0x1ae2;eip=0x0013e2; 	R(JMP(locret_2a823));	// 52405 jmp     short locret_2A823 ;~ 1AE2:13E2
loc_2a7e4:
	// 8173 
cs=0x1ae2;eip=0x0013e4; 	T(MOV(bx, dx));	// 52409 mov     bx, dx ;~ 1AE2:13E4
cs=0x1ae2;eip=0x0013e6; 	T(ADD(bx, *(dw*)(raddr(ds,si))));	// 52410 add     bx, [si] ;~ 1AE2:13E6
cs=0x1ae2;eip=0x0013e8; 	R(JC(locret_2a823));	// 52411 jb      short locret_2A823 ;~ 1AE2:13E8
cs=0x1ae2;eip=0x0013ea; 	T(MOV(dx, bx));	// 52412 mov     dx, bx ;~ 1AE2:13EA
cs=0x1ae2;eip=0x0013ec; 	T(MOV(es, cx));	// 52413 mov     es, cx ;~ 1AE2:13EC
cs=0x1ae2;eip=0x0013ee; 	T(CMP(si, di));	// 52414 cmp     si, di ;~ 1AE2:13EE
cs=0x1ae2;eip=0x0013f0; 	R(JNZ(loc_2a7f8));	// 52415 jnz     short loc_2A7F8 ;~ 1AE2:13F0
cs=0x1ae2;eip=0x0013f2; 	T(CMP(word_38218, bx));	// 52416 cmp     word_38218, bx ;~ 1AE2:13F2
cs=0x1ae2;eip=0x0013f6; 	R(JNC(loc_2a81e));	// 52417 jnb     short loc_2A81E ;~ 1AE2:13F6
loc_2a7f8:
	// 8174 
cs=0x1ae2;eip=0x0013f8; 	T(ADD(bx, 0x0F));	// 52420 add     bx, 0Fh ;~ 1AE2:13F8
cs=0x1ae2;eip=0x0013fb; 	T(RCR(bx, 1));	// 52421 rcr     bx, 1 ;~ 1AE2:13FB
cs=0x1ae2;eip=0x0013fd; 	T(SHR(bx, 1));	// 52422 shr     bx, 1 ;~ 1AE2:13FD
cs=0x1ae2;eip=0x0013ff; 	T(SHR(bx, 1));	// 52423 shr     bx, 1 ;~ 1AE2:13FF
cs=0x1ae2;eip=0x001401; 	T(SHR(bx, 1));	// 52424 shr     bx, 1 ;~ 1AE2:1401
cs=0x1ae2;eip=0x001403; 	T(CMP(si, di));	// 52425 cmp     si, di ;~ 1AE2:1403
cs=0x1ae2;eip=0x001405; 	R(JNZ(loc_2a810));	// 52426 jnz     short loc_2A810 ;~ 1AE2:1405
cs=0x1ae2;eip=0x001407; 	T(ADD(bx, cx));	// 52427 add     bx, cx ;~ 1AE2:1407
cs=0x1ae2;eip=0x001409; 	T(MOV(ax, word_3828f));	// 52428 mov     ax, word_3828F ;~ 1AE2:1409
cs=0x1ae2;eip=0x00140c; 	T(SUB(bx, ax));	// 52429 sub     bx, ax ;~ 1AE2:140C
cs=0x1ae2;eip=0x00140e; 	T(MOV(es, ax));	// 52430 mov     es, ax ;~ 1AE2:140E
loc_2a810:
	// 8175 
cs=0x1ae2;eip=0x001410; 	T(MOV(ah, 0x4A));	// 52433 mov     ah, 4Ah ;~ 1AE2:1410
cs=0x1ae2;eip=0x001412; 	R(_INT(0x21));	// 52434 int     21h             ; DOS - 2+ - ADJUST MEMORY BLOCK SIZE (SETBLOCK) ;~ 1AE2:1412
cs=0x1ae2;eip=0x001414; 	R(JC(locret_2a823));	// 52437 jb      short locret_2A823 ;~ 1AE2:1414
cs=0x1ae2;eip=0x001416; 	T(CMP(si, di));	// 52438 cmp     si, di ;~ 1AE2:1416
cs=0x1ae2;eip=0x001418; 	R(JNZ(loc_2a81e));	// 52439 jnz     short loc_2A81E ;~ 1AE2:1418
cs=0x1ae2;eip=0x00141a; 	X(MOV(word_38218, dx));	// 52440 mov     word_38218, dx ;~ 1AE2:141A
loc_2a81e:
	// 8176 
cs=0x1ae2;eip=0x00141e; 	T(XCHG(ax, dx));	// 52444 xchg    ax, dx ;~ 1AE2:141E
cs=0x1ae2;eip=0x00141f; 	X(XCHG(ax, *(dw*)(raddr(ds,si))));	// 52445 xchg    ax, [si] ;~ 1AE2:141F
cs=0x1ae2;eip=0x001421; 	T(MOV(dx, cx));	// 52446 mov     dx, cx ;~ 1AE2:1421
locret_2a823:
	// 8177 
cs=0x1ae2;eip=0x001423; 	R(RETN(0));	// 52450 retn ;~ 1AE2:1423
sub_2a824:
	// 52458 
#undef arg_0
#define arg_0 6
	// 52460 arg_0           = word ptr  6 ;~ 1AE2:1424
#undef arg_2
#define arg_2 8
	// 52461 arg_2           = word ptr  8 ;~ 1AE2:1424
ret_1ae2_1424:
	// 8178 
cs=0x1ae2;eip=0x001424; 	X(PUSH(bp));	// 52463 push    bp ;~ 1AE2:1424
cs=0x1ae2;eip=0x001425; 	T(MOV(bp, sp));	// 52464 mov     bp, sp ;~ 1AE2:1425
cs=0x1ae2;eip=0x001427; 	T(MOV(dx, di));	// 52465 mov     dx, di ;~ 1AE2:1427
cs=0x1ae2;eip=0x001429; 	T(MOV(bx, si));	// 52466 mov     bx, si ;~ 1AE2:1429
cs=0x1ae2;eip=0x00142b; 	T(MOV(ax, ds));	// 52467 mov     ax, ds ;~ 1AE2:142B
cs=0x1ae2;eip=0x00142d; 	T(MOV(es, ax));	// 52468 mov     es, ax ;~ 1AE2:142D
cs=0x1ae2;eip=0x00142f; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 52470 mov     di, [bp+arg_0] ;~ 1AE2:142F
cs=0x1ae2;eip=0x001432; 	T(XOR(ax, ax));	// 52471 xor     ax, ax ;~ 1AE2:1432
cs=0x1ae2;eip=0x001434; 	T(MOV(cx, 0x0FFFF));	// 52472 mov     cx, 0FFFFh ;~ 1AE2:1434
	// 52473 repne scasb ;~ 1AE2:1437
cs=0x1ae2;eip=0x001437; 	T(	REPNE SCASB);	// 52473 repne scasb ;~ 1AE2:1437
cs=0x1ae2;eip=0x001439; 	T(si = di-1);	// 52474 lea     si, [di-1] ;~ 1AE2:1439
cs=0x1ae2;eip=0x00143c; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_2))));	// 52475 mov     di, [bp+arg_2] ;~ 1AE2:143C
cs=0x1ae2;eip=0x00143f; 	T(MOV(cx, 0x0FFFF));	// 52476 mov     cx, 0FFFFh ;~ 1AE2:143F
	// 52477 repne scasb ;~ 1AE2:1442
cs=0x1ae2;eip=0x001442; 	T(	REPNE SCASB);	// 52477 repne scasb ;~ 1AE2:1442
cs=0x1ae2;eip=0x001444; 	T(NOT(cx));	// 52478 not     cx ;~ 1AE2:1444
cs=0x1ae2;eip=0x001446; 	T(SUB(di, cx));	// 52479 sub     di, cx ;~ 1AE2:1446
cs=0x1ae2;eip=0x001448; 	T(XCHG(di, si));	// 52480 xchg    di, si ;~ 1AE2:1448
cs=0x1ae2;eip=0x00144a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 52481 mov     ax, [bp+arg_0] ;~ 1AE2:144A
cs=0x1ae2;eip=0x00144d; 	T(TEST(si, 1));	// 52482 test    si, 1 ;~ 1AE2:144D
cs=0x1ae2;eip=0x001451; 	R(JZ(loc_2a855));	// 52483 jz      short loc_2A855 ;~ 1AE2:1451
cs=0x1ae2;eip=0x001453; 	X(MOVSB);	// 52484 movsb ;~ 1AE2:1453
cs=0x1ae2;eip=0x001454; 	T(DEC(cx));	// 52485 dec     cx ;~ 1AE2:1454
loc_2a855:
	// 8179 
cs=0x1ae2;eip=0x001455; 	T(SHR(cx, 1));	// 52488 shr     cx, 1 ;~ 1AE2:1455
	// 52489 rep movsw ;~ 1AE2:1457
cs=0x1ae2;eip=0x001457; 	X(	REP MOVSW);	// 52489 rep movsw ;~ 1AE2:1457
cs=0x1ae2;eip=0x001459; 	T(ADC(cx, cx));	// 52490 adc     cx, cx ;~ 1AE2:1459
	// 52491 rep movsb ;~ 1AE2:145B
cs=0x1ae2;eip=0x00145b; 	X(	REP MOVSB);	// 52491 rep movsb ;~ 1AE2:145B
cs=0x1ae2;eip=0x00145d; 	T(MOV(si, bx));	// 52492 mov     si, bx ;~ 1AE2:145D
cs=0x1ae2;eip=0x00145f; 	T(MOV(di, dx));	// 52493 mov     di, dx ;~ 1AE2:145F
cs=0x1ae2;eip=0x001461; 	X(POP(bp));	// 52494 pop     bp ;~ 1AE2:1461
cs=0x1ae2;eip=0x001462; 	R(RETF(0));	// 52495 retf ;~ 1AE2:1462
sub_2a864:
	// 52505 
#undef arg_2
#define arg_2 6
	// 52507 arg_2           = word ptr  6 ;~ 1AE2:1464
#undef arg_4
#define arg_4 8
	// 52508 arg_4           = word ptr  8 ;~ 1AE2:1464
#undef arg_6
#define arg_6 0x0A
	// 52509 arg_6           = word ptr  0Ah ;~ 1AE2:1464
ret_1ae2_1464:
	// 8180 
cs=0x1ae2;eip=0x001464; 	X(PUSH(bp));	// 52513 push    bp ;~ 1AE2:1464
cs=0x1ae2;eip=0x001465; 	T(MOV(bp, sp));	// 52514 mov     bp, sp ;~ 1AE2:1465
cs=0x1ae2;eip=0x001467; 	X(PUSH(si));	// 52515 push    si ;~ 1AE2:1467
cs=0x1ae2;eip=0x001468; 	X(PUSH(di));	// 52516 push    di ;~ 1AE2:1468
cs=0x1ae2;eip=0x001469; 	T(MOV(bl, 1));	// 52517 mov     bl, 1 ;~ 1AE2:1469
cs=0x1ae2;eip=0x00146b; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_6))));	// 52518 mov     cx, [bp+arg_6] ;~ 1AE2:146B
cs=0x1ae2;eip=0x00146e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 52519 mov     ax, [bp+arg_2] ;~ 1AE2:146E
cs=0x1ae2;eip=0x001471; 	T(XOR(dx, dx));	// 52520 xor     dx, dx ;~ 1AE2:1471
cs=0x1ae2;eip=0x001473; 	T(CMP(cx, 0x0A));	// 52521 cmp     cx, 0Ah ;~ 1AE2:1473
cs=0x1ae2;eip=0x001476; 	R(JNZ(loc_2a879));	// 52522 jnz     short loc_2A879 ;~ 1AE2:1476
cs=0x1ae2;eip=0x001478; 	T(CWD);	// 52523 cwd ;~ 1AE2:1478
loc_2a879:
	// 8181 
cs=0x1ae2;eip=0x001479; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_4))));	// 52526 mov     di, [bp+arg_4] ;~ 1AE2:1479
cs=0x1ae2;eip=0x00147c; 	R(JMP(loc_2ac3a));	// 52527 jmp     loc_2AC3A ;~ 1AE2:147C
sub_2a880:
	// 52537 
#undef arg_0
#define arg_0 6
	// 52539 arg_0           = byte ptr  6 ;~ 1AE2:1480
#undef arg_2
#define arg_2 8
	// 52540 arg_2           = word ptr  8 ;~ 1AE2:1480
#undef arg_4
#define arg_4 0x0A
	// 52541 arg_4           = byte ptr  0Ah ;~ 1AE2:1480
ret_1ae2_1480:
	// 8182 
cs=0x1ae2;eip=0x001480; 	X(PUSH(bp));	// 52543 push    bp ;~ 1AE2:1480
cs=0x1ae2;eip=0x001481; 	T(MOV(bp, sp));	// 52544 mov     bp, sp ;~ 1AE2:1481
cs=0x1ae2;eip=0x001483; 	T(MOV(ah, *(raddr(ss,bp+arg_0))));	// 52545 mov     ah, [bp+arg_0] ;~ 1AE2:1483
cs=0x1ae2;eip=0x001486; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 52546 mov     dx, [bp+arg_2] ;~ 1AE2:1486
cs=0x1ae2;eip=0x001489; 	T(MOV(al, *(raddr(ss,bp+arg_4))));	// 52547 mov     al, [bp+arg_4] ;~ 1AE2:1489
cs=0x1ae2;eip=0x00148c; 	R(_INT(0x21));	// 52548 int     21h             ; DOS - ;~ 1AE2:148C
cs=0x1ae2;eip=0x00148e; 	T(MOV(sp, bp));	// 52549 mov     sp, bp ;~ 1AE2:148E
cs=0x1ae2;eip=0x001490; 	X(POP(bp));	// 52550 pop     bp ;~ 1AE2:1490
cs=0x1ae2;eip=0x001491; 	R(RETF(0));	// 52551 retf ;~ 1AE2:1491
sub_2a892:
	// 52559 
#undef arg_0
#define arg_0 6
	// 52561 arg_0           = word ptr  6 ;~ 1AE2:1492
#undef arg_2
#define arg_2 8
	// 52562 arg_2           = word ptr  8 ;~ 1AE2:1492
ret_1ae2_1492:
	// 8183 
cs=0x1ae2;eip=0x001492; 	X(PUSH(bp));	// 52564 push    bp ;~ 1AE2:1492
cs=0x1ae2;eip=0x001493; 	T(MOV(bp, sp));	// 52565 mov     bp, sp ;~ 1AE2:1493
cs=0x1ae2;eip=0x001495; 	X(PUSH(si));	// 52566 push    si ;~ 1AE2:1495
cs=0x1ae2;eip=0x001496; 	X(PUSH(di));	// 52567 push    di ;~ 1AE2:1496
cs=0x1ae2;eip=0x001497; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 52568 mov     di, [bp+arg_0] ;~ 1AE2:1497
cs=0x1ae2;eip=0x00149a; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 52569 mov     ax, [di] ;~ 1AE2:149A
cs=0x1ae2;eip=0x00149c; 	T(MOV(bx, *(dw*)(raddr(ds,di+2))));	// 52570 mov     bx, [di+2] ;~ 1AE2:149C
cs=0x1ae2;eip=0x00149f; 	T(MOV(cx, *(dw*)(raddr(ds,di+4))));	// 52571 mov     cx, [di+4] ;~ 1AE2:149F
cs=0x1ae2;eip=0x0014a2; 	T(MOV(dx, *(dw*)(raddr(ds,di+6))));	// 52572 mov     dx, [di+6] ;~ 1AE2:14A2
cs=0x1ae2;eip=0x0014a5; 	T(MOV(si, *(dw*)(raddr(ds,di+8))));	// 52573 mov     si, [di+8] ;~ 1AE2:14A5
cs=0x1ae2;eip=0x0014a8; 	T(MOV(di, *(dw*)(raddr(ds,di+0x0A))));	// 52574 mov     di, [di+0Ah] ;~ 1AE2:14A8
cs=0x1ae2;eip=0x0014ab; 	R(_INT(0x21));	// 52575 int     21h             ; DOS - ;~ 1AE2:14AB
cs=0x1ae2;eip=0x0014ad; 	X(PUSH(di));	// 52576 push    di ;~ 1AE2:14AD
cs=0x1ae2;eip=0x0014ae; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_2))));	// 52577 mov     di, [bp+arg_2] ;~ 1AE2:14AE
cs=0x1ae2;eip=0x0014b1; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 52578 mov     [di], ax ;~ 1AE2:14B1
cs=0x1ae2;eip=0x0014b3; 	X(MOV(*(dw*)(raddr(ds,di+2)), bx));	// 52579 mov     [di+2], bx ;~ 1AE2:14B3
cs=0x1ae2;eip=0x0014b6; 	X(MOV(*(dw*)(raddr(ds,di+4)), cx));	// 52580 mov     [di+4], cx ;~ 1AE2:14B6
cs=0x1ae2;eip=0x0014b9; 	X(MOV(*(dw*)(raddr(ds,di+6)), dx));	// 52581 mov     [di+6], dx ;~ 1AE2:14B9
cs=0x1ae2;eip=0x0014bc; 	X(MOV(*(dw*)(raddr(ds,di+8)), si));	// 52582 mov     [di+8], si ;~ 1AE2:14BC
cs=0x1ae2;eip=0x0014bf; 	X(POP(*(dw*)(raddr(ds,di+0x0A))));	// 52583 pop     word ptr [di+0Ah] ;~ 1AE2:14BF
cs=0x1ae2;eip=0x0014c2; 	R(JC(loc_2a8c8));	// 52584 jb      short loc_2A8C8 ;~ 1AE2:14C2
cs=0x1ae2;eip=0x0014c4; 	T(XOR(si, si));	// 52585 xor     si, si ;~ 1AE2:14C4
cs=0x1ae2;eip=0x0014c6; 	R(JMP(loc_2a8d2));	// 52586 jmp     short loc_2A8D2 ;~ 1AE2:14C6
loc_2a8c8:
	// 8184 
cs=0x1ae2;eip=0x0014c8; 	R(CALLF(sub_2a936,0));	// 52590 call    sub_2A936 ;~ 1AE2:14C8
cs=0x1ae2;eip=0x0014cd; 	T(MOV(si, 1));	// 52591 mov     si, 1 ;~ 1AE2:14CD
cs=0x1ae2;eip=0x0014d0; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 52592 mov     ax, [di] ;~ 1AE2:14D0
loc_2a8d2:
	// 8185 
cs=0x1ae2;eip=0x0014d2; 	X(MOV(*(dw*)(raddr(ds,di+0x0C)), si));	// 52595 mov     [di+0Ch], si ;~ 1AE2:14D2
cs=0x1ae2;eip=0x0014d5; 	X(POP(di));	// 52596 pop     di ;~ 1AE2:14D5
cs=0x1ae2;eip=0x0014d6; 	X(POP(si));	// 52597 pop     si ;~ 1AE2:14D6
cs=0x1ae2;eip=0x0014d7; 	T(MOV(sp, bp));	// 52598 mov     sp, bp ;~ 1AE2:14D7
cs=0x1ae2;eip=0x0014d9; 	X(POP(bp));	// 52599 pop     bp ;~ 1AE2:14D9
cs=0x1ae2;eip=0x0014da; 	R(RETF(0));	// 52600 retf ;~ 1AE2:14DA
sub_2a8dc:
	// 52610 
#undef arg_0
#define arg_0 6
	// 52613 arg_0           = word ptr  6 ;~ 1AE2:14DC
#undef arg_2
#define arg_2 8
	// 52614 arg_2           = word ptr  8 ;~ 1AE2:14DC
#undef arg_4
#define arg_4 0x0A
	// 52615 arg_4           = word ptr  0Ah ;~ 1AE2:14DC
ret_1ae2_14dc:
	// 8186 
cs=0x1ae2;eip=0x0014dc; 	X(PUSH(bp));	// 52617 push    bp ;~ 1AE2:14DC
cs=0x1ae2;eip=0x0014dd; 	T(MOV(bp, sp));	// 52618 mov     bp, sp ;~ 1AE2:14DD
cs=0x1ae2;eip=0x0014df; 	T(MOV(dx, di));	// 52619 mov     dx, di ;~ 1AE2:14DF
cs=0x1ae2;eip=0x0014e1; 	T(MOV(bx, si));	// 52620 mov     bx, si ;~ 1AE2:14E1
cs=0x1ae2;eip=0x0014e3; 	T(MOV(ax, ds));	// 52621 mov     ax, ds ;~ 1AE2:14E3
cs=0x1ae2;eip=0x0014e5; 	T(MOV(es, ax));	// 52622 mov     es, ax ;~ 1AE2:14E5
cs=0x1ae2;eip=0x0014e7; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 52623 mov     si, [bp+arg_2] ;~ 1AE2:14E7
cs=0x1ae2;eip=0x0014ea; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 52624 mov     di, [bp+arg_0] ;~ 1AE2:14EA
cs=0x1ae2;eip=0x0014ed; 	T(MOV(ax, di));	// 52625 mov     ax, di ;~ 1AE2:14ED
cs=0x1ae2;eip=0x0014ef; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_4))));	// 52626 mov     cx, [bp+arg_4] ;~ 1AE2:14EF
cs=0x1ae2;eip=0x0014f2; 	R(JCXZ(loc_2a902));	// 52627 jcxz    short loc_2A902 ;~ 1AE2:14F2
cs=0x1ae2;eip=0x0014f4; 	T(TEST(al, 1));	// 52628 test    al, 1 ;~ 1AE2:14F4
cs=0x1ae2;eip=0x0014f6; 	R(JZ(loc_2a8fa));	// 52629 jz      short loc_2A8FA ;~ 1AE2:14F6
cs=0x1ae2;eip=0x0014f8; 	X(MOVSB);	// 52630 movsb ;~ 1AE2:14F8
cs=0x1ae2;eip=0x0014f9; 	T(DEC(cx));	// 52631 dec     cx ;~ 1AE2:14F9
loc_2a8fa:
	// 8187 
cs=0x1ae2;eip=0x0014fa; 	T(SHR(cx, 1));	// 52634 shr     cx, 1 ;~ 1AE2:14FA
	// 52635 rep movsw ;~ 1AE2:14FC
cs=0x1ae2;eip=0x0014fc; 	X(	REP MOVSW);	// 52635 rep movsw ;~ 1AE2:14FC
cs=0x1ae2;eip=0x0014fe; 	T(ADC(cx, cx));	// 52636 adc     cx, cx ;~ 1AE2:14FE
	// 52637 rep movsb ;~ 1AE2:1500
cs=0x1ae2;eip=0x001500; 	X(	REP MOVSB);	// 52637 rep movsb ;~ 1AE2:1500
loc_2a902:
	// 8188 
cs=0x1ae2;eip=0x001502; 	T(MOV(si, bx));	// 52640 mov     si, bx ;~ 1AE2:1502
cs=0x1ae2;eip=0x001504; 	T(MOV(di, dx));	// 52641 mov     di, dx ;~ 1AE2:1504
cs=0x1ae2;eip=0x001506; 	X(POP(bp));	// 52642 pop     bp ;~ 1AE2:1506
cs=0x1ae2;eip=0x001507; 	R(RETF(0));	// 52643 retf ;~ 1AE2:1507
sub_2a908:
	// 52651 
#undef arg_0
#define arg_0 6
	// 52653 arg_0           = word ptr  6 ;~ 1AE2:1508
ret_1ae2_1508:
	// 8189 
cs=0x1ae2;eip=0x001508; 	X(PUSH(bp));	// 52655 push    bp ;~ 1AE2:1508
cs=0x1ae2;eip=0x001509; 	T(MOV(bp, sp));	// 52656 mov     bp, sp ;~ 1AE2:1509
cs=0x1ae2;eip=0x00150b; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_0))));	// 52657 mov     dx, [bp+arg_0] ;~ 1AE2:150B
cs=0x1ae2;eip=0x00150e; 	T(MOV(ah, 0x41));	// 52658 mov     ah, 41h ;~ 1AE2:150E
cs=0x1ae2;eip=0x001510; 	R(_INT(0x21));	// 52659 int     21h             ; DOS - 2+ - DELETE A FILE (UNLINK) ;~ 1AE2:1510
cs=0x1ae2;eip=0x001512; 	R(JMP(loc_2a916));	// 52661 jmp     loc_2A916 ;~ 1AE2:1512
loc_2a916:
	// 8190 
cs=0x1ae2;eip=0x001516; 	R(JC(loc_2a92b));	// 52667 jb      short loc_2A92B ;~ 1AE2:1516
loc_2a918:
	// 8191 
cs=0x1ae2;eip=0x001518; 	T(XOR(ax, ax));	// 52670 xor     ax, ax ;~ 1AE2:1518
cs=0x1ae2;eip=0x00151a; 	T(MOV(sp, bp));	// 52671 mov     sp, bp ;~ 1AE2:151A
cs=0x1ae2;eip=0x00151c; 	X(POP(bp));	// 52672 pop     bp ;~ 1AE2:151C
cs=0x1ae2;eip=0x00151d; 	R(RETF(0));	// 52673 retf ;~ 1AE2:151D
ret_1ae2_151e:
	// 8192 
cs=0x1ae2;eip=0x00151e; 	R(JNC(loc_2a918));	// 52675 jnb     short loc_2A918 ;~ 1AE2:151E
cs=0x1ae2;eip=0x001520; 	X(PUSH(ax));	// 52676 push    ax ;~ 1AE2:1520
cs=0x1ae2;eip=0x001521; 	R(CALL(sub_2a93c,0));	// 52677 call    sub_2A93C ;~ 1AE2:1521
cs=0x1ae2;eip=0x001524; 	X(POP(ax));	// 52678 pop     ax ;~ 1AE2:1524
cs=0x1ae2;eip=0x001525; 	T(MOV(sp, bp));	// 52679 mov     sp, bp ;~ 1AE2:1525
cs=0x1ae2;eip=0x001527; 	X(POP(bp));	// 52680 pop     bp ;~ 1AE2:1527
cs=0x1ae2;eip=0x001528; 	R(RETF(0));	// 52681 retf ;~ 1AE2:1528
loc_2a929:
	// 8193 
cs=0x1ae2;eip=0x001529; 	R(JNC(loc_2a932));	// 52686 jnb     short loc_2A932 ;~ 1AE2:1529
loc_2a92b:
	// 8194 
cs=0x1ae2;eip=0x00152b; 	R(CALL(sub_2a93c,0));	// 52689 call    sub_2A93C ;~ 1AE2:152B
cs=0x1ae2;eip=0x00152e; 	T(MOV(ax, 0x0FFFF));	// 52690 mov     ax, 0FFFFh ;~ 1AE2:152E
cs=0x1ae2;eip=0x001531; 	T(CWD);	// 52691 cwd ;~ 1AE2:1531
loc_2a932:
	// 8195 
cs=0x1ae2;eip=0x001532; 	T(MOV(sp, bp));	// 52694 mov     sp, bp ;~ 1AE2:1532
cs=0x1ae2;eip=0x001534; 	X(POP(bp));	// 52695 pop     bp ;~ 1AE2:1534
cs=0x1ae2;eip=0x001535; 	R(RETF(0));	// 52696 retf ;~ 1AE2:1535
sub_2a936:
	// 52703 
cs=0x1ae2;eip=0x001536; 	T(XOR(ah, ah));	// 52704 xor     ah, ah ;~ 1AE2:1536
ret_1ae2_1538:
	// 8196 
cs=0x1ae2;eip=0x001538; 	R(CALL(sub_2a93c,0));	// 52705 call    sub_2A93C ;~ 1AE2:1538
cs=0x1ae2;eip=0x00153b; 	R(RETF(0));	// 52706 retf ;~ 1AE2:153B
sub_2a93c:
	// 52713 
cs=0x1ae2;eip=0x00153c; 	X(MOV(byte_38294, al));	// 52715 mov     byte_38294, al ;~ 1AE2:153C
ret_1ae2_153f:
	// 8197 
cs=0x1ae2;eip=0x00153f; 	T(OR(ah, ah));	// 52716 or      ah, ah ;~ 1AE2:153F
cs=0x1ae2;eip=0x001541; 	R(JNZ(loc_2a966));	// 52717 jnz     short loc_2A966 ;~ 1AE2:1541
cs=0x1ae2;eip=0x001543; 	T(CMP(*(db*)(((db*)&word_38291)), 3));	// 52718 cmp     byte ptr word_38291, 3 ;~ 1AE2:1543
cs=0x1ae2;eip=0x001548; 	R(JC(loc_2a957));	// 52719 jb      short loc_2A957 ;~ 1AE2:1548
cs=0x1ae2;eip=0x00154a; 	T(CMP(al, 0x22));	// 52720 cmp     al, 22h ; '"' ;~ 1AE2:154A
cs=0x1ae2;eip=0x00154c; 	R(JNC(loc_2a95b));	// 52721 jnb     short loc_2A95B ;~ 1AE2:154C
cs=0x1ae2;eip=0x00154e; 	T(CMP(al, 0x20));	// 52722 cmp     al, 20h ; ' ' ;~ 1AE2:154E
cs=0x1ae2;eip=0x001550; 	R(JC(loc_2a957));	// 52723 jb      short loc_2A957 ;~ 1AE2:1550
cs=0x1ae2;eip=0x001552; 	T(MOV(al, 5));	// 52724 mov     al, 5 ;~ 1AE2:1552
cs=0x1ae2;eip=0x001554; 	R(JMP(loc_2a95d));	// 52725 jmp     short loc_2A95D ;~ 1AE2:1554
loc_2a957:
	// 8198 
cs=0x1ae2;eip=0x001557; 	T(CMP(al, 0x13));	// 52732 cmp     al, 13h ;~ 1AE2:1557
cs=0x1ae2;eip=0x001559; 	R(JBE(loc_2a95d));	// 52733 jbe     short loc_2A95D ;~ 1AE2:1559
loc_2a95b:
	// 8199 
cs=0x1ae2;eip=0x00155b; 	T(MOV(al, 0x13));	// 52736 mov     al, 13h ;~ 1AE2:155B
loc_2a95d:
	// 8200 
cs=0x1ae2;eip=0x00155d; 	T(MOV(bx, 0x0C5C0));	// 52740 mov     bx, 0C5C0h ;~ 1AE2:155D
cs=0x1ae2;eip=0x001560; 	T(XLAT);	// 52741 xlat ;~ 1AE2:1560
loc_2a961:
	// 8201 
cs=0x1ae2;eip=0x001561; 	T(CBW);	// 52744 cbw ;~ 1AE2:1561
cs=0x1ae2;eip=0x001562; 	X(MOV(word_38289, ax));	// 52745 mov     word_38289, ax ;~ 1AE2:1562
cs=0x1ae2;eip=0x001565; 	R(RETN(0));	// 52746 retn ;~ 1AE2:1565
loc_2a966:
	// 8202 
cs=0x1ae2;eip=0x001566; 	T(MOV(al, ah));	// 52750 mov     al, ah ;~ 1AE2:1566
cs=0x1ae2;eip=0x001568; 	R(JMP(loc_2a961));	// 52751 jmp     short loc_2A961 ;~ 1AE2:1568
sub_2a96a:
	// 52759 
#undef var_2
#define var_2 -2
	// 52762 var_2           = word ptr -2 ;~ 1AE2:156A
#undef arg_0
#define arg_0 4
	// 52763 arg_0           = word ptr  4 ;~ 1AE2:156A
ret_1ae2_156a:
	// 8203 
cs=0x1ae2;eip=0x00156a; 	X(PUSH(bp));	// 52765 push    bp ;~ 1AE2:156A
cs=0x1ae2;eip=0x00156b; 	T(MOV(bp, sp));	// 52766 mov     bp, sp ;~ 1AE2:156B
cs=0x1ae2;eip=0x00156d; 	T(SUB(sp, 2));	// 52767 sub     sp, 2 ;~ 1AE2:156D
cs=0x1ae2;eip=0x001570; 	X(PUSH(si));	// 52768 push    si ;~ 1AE2:1570
cs=0x1ae2;eip=0x001571; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 52769 mov     ax, [bp+arg_0] ;~ 1AE2:1571
cs=0x1ae2;eip=0x001574; 	T(SUB(ax, 0x0C490));	// 52770 sub     ax, 0C490h ;~ 1AE2:1574
cs=0x1ae2;eip=0x001577; 	T(MOV(cl, 3));	// 52771 mov     cl, 3 ;~ 1AE2:1577
cs=0x1ae2;eip=0x001579; 	T(SAR(ax, cl));	// 52772 sar     ax, cl ;~ 1AE2:1579
cs=0x1ae2;eip=0x00157b; 	T(MOV(cx, ax));	// 52773 mov     cx, ax ;~ 1AE2:157B
cs=0x1ae2;eip=0x00157d; 	T(SHL(ax, 1));	// 52774 shl     ax, 1 ;~ 1AE2:157D
cs=0x1ae2;eip=0x00157f; 	T(ADD(ax, cx));	// 52775 add     ax, cx ;~ 1AE2:157F
cs=0x1ae2;eip=0x001581; 	T(SHL(ax, 1));	// 52776 shl     ax, 1 ;~ 1AE2:1581
cs=0x1ae2;eip=0x001583; 	T(ADD(ax, 0x0C530));	// 52777 add     ax, 0C530h ;~ 1AE2:1583
cs=0x1ae2;eip=0x001586; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 52778 mov     [bp+var_2], ax ;~ 1AE2:1586
cs=0x1ae2;eip=0x001589; 	T(MOV(ax, 0x200));	// 52779 mov     ax, 200h ;~ 1AE2:1589
cs=0x1ae2;eip=0x00158c; 	X(PUSH(ax));	// 52780 push    ax ;~ 1AE2:158C
cs=0x1ae2;eip=0x00158d; 	R(CALLF(sub_2a5b6,0));	// 52781 call    sub_2A5B6 ;~ 1AE2:158D
cs=0x1ae2;eip=0x001592; 	T(ADD(sp, 2));	// 52782 add     sp, 2 ;~ 1AE2:1592
cs=0x1ae2;eip=0x001595; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 52783 mov     bx, [bp+arg_0] ;~ 1AE2:1595
cs=0x1ae2;eip=0x001598; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 52784 mov     [bx+4], ax ;~ 1AE2:1598
cs=0x1ae2;eip=0x00159b; 	T(OR(ax, ax));	// 52785 or      ax, ax ;~ 1AE2:159B
cs=0x1ae2;eip=0x00159d; 	R(JZ(loc_2a9ae));	// 52786 jz      short loc_2A9AE ;~ 1AE2:159D
cs=0x1ae2;eip=0x00159f; 	X(OR(*(raddr(ds,bx+6)), 8));	// 52787 or      byte ptr [bx+6], 8 ;~ 1AE2:159F
cs=0x1ae2;eip=0x0015a3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 52788 mov     bx, [bp+var_2] ;~ 1AE2:15A3
cs=0x1ae2;eip=0x0015a6; 	X(MOV(*(dw*)(raddr(ds,bx+2)), 0x200));	// 52789 mov     word ptr [bx+2], 200h ;~ 1AE2:15A6
cs=0x1ae2;eip=0x0015ab; 	R(JMP(loc_2a9c4));	// 52790 jmp     short loc_2A9C4 ;~ 1AE2:15AB
loc_2a9ae:
	// 8204 
cs=0x1ae2;eip=0x0015ae; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 52795 mov     bx, [bp+arg_0] ;~ 1AE2:15AE
cs=0x1ae2;eip=0x0015b1; 	X(OR(*(raddr(ds,bx+6)), 4));	// 52796 or      byte ptr [bx+6], 4 ;~ 1AE2:15B1
cs=0x1ae2;eip=0x0015b5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 52797 mov     ax, [bp+var_2] ;~ 1AE2:15B5
cs=0x1ae2;eip=0x0015b8; 	T(INC(ax));	// 52798 inc     ax ;~ 1AE2:15B8
cs=0x1ae2;eip=0x0015b9; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 52799 mov     [bx+4], ax ;~ 1AE2:15B9
cs=0x1ae2;eip=0x0015bc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 52800 mov     bx, [bp+var_2] ;~ 1AE2:15BC
cs=0x1ae2;eip=0x0015bf; 	X(MOV(*(dw*)(raddr(ds,bx+2)), 1));	// 52801 mov     word ptr [bx+2], 1 ;~ 1AE2:15BF
loc_2a9c4:
	// 8205 
cs=0x1ae2;eip=0x0015c4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 52804 mov     bx, [bp+arg_0] ;~ 1AE2:15C4
cs=0x1ae2;eip=0x0015c7; 	T(MOV(si, bx));	// 52805 mov     si, bx ;~ 1AE2:15C7
cs=0x1ae2;eip=0x0015c9; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 52806 mov     ax, [si+4] ;~ 1AE2:15C9
cs=0x1ae2;eip=0x0015cc; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 52807 mov     [bx], ax ;~ 1AE2:15CC
cs=0x1ae2;eip=0x0015ce; 	X(MOV(*(dw*)(raddr(ds,bx+2)), 0));	// 52808 mov     word ptr [bx+2], 0 ;~ 1AE2:15CE
cs=0x1ae2;eip=0x0015d3; 	X(POP(si));	// 52809 pop     si ;~ 1AE2:15D3
cs=0x1ae2;eip=0x0015d4; 	T(MOV(sp, bp));	// 52810 mov     sp, bp ;~ 1AE2:15D4
cs=0x1ae2;eip=0x0015d6; 	X(POP(bp));	// 52811 pop     bp ;~ 1AE2:15D6
cs=0x1ae2;eip=0x0015d7; 	R(RETN(0));	// 52812 retn ;~ 1AE2:15D7
sub_2a9d8:
	// 52820 
#undef var_4
#define var_4 -4
	// 52822 var_4           = word ptr -4 ;~ 1AE2:15D8
#undef var_2
#define var_2 -2
	// 52823 var_2           = word ptr -2 ;~ 1AE2:15D8
#undef arg_0
#define arg_0 6
	// 52824 arg_0           = word ptr  6 ;~ 1AE2:15D8
#undef arg_2
#define arg_2 8
	// 52825 arg_2           = word ptr  8 ;~ 1AE2:15D8
#undef arg_4
#define arg_4 0x0A
	// 52826 arg_4           = word ptr  0Ah ;~ 1AE2:15D8
#undef arg_6
#define arg_6 0x0C
	// 52827 arg_6           = word ptr  0Ch ;~ 1AE2:15D8
ret_1ae2_15d8:
	// 8206 
cs=0x1ae2;eip=0x0015d8; 	X(PUSH(bp));	// 52829 push    bp ;~ 1AE2:15D8
cs=0x1ae2;eip=0x0015d9; 	T(MOV(bp, sp));	// 52830 mov     bp, sp ;~ 1AE2:15D9
cs=0x1ae2;eip=0x0015db; 	T(SUB(sp, 4));	// 52831 sub     sp, 4 ;~ 1AE2:15DB
cs=0x1ae2;eip=0x0015de; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 52832 mov     bx, [bp+arg_0] ;~ 1AE2:15DE
cs=0x1ae2;eip=0x0015e1; 	T(CMP(bx, word_38296));	// 52833 cmp     bx, word_38296 ;~ 1AE2:15E1
cs=0x1ae2;eip=0x0015e5; 	R(JC(loc_2a9ec));	// 52834 jb      short loc_2A9EC ;~ 1AE2:15E5
cs=0x1ae2;eip=0x0015e7; 	T(MOV(ax, 0x900));	// 52835 mov     ax, 900h ;~ 1AE2:15E7
cs=0x1ae2;eip=0x0015ea; 	R(JMP(loc_2aa16));	// 52836 jmp     short loc_2AA16 ;~ 1AE2:15EA
loc_2a9ec:
	// 8207 
cs=0x1ae2;eip=0x0015ec; 	T(TEST(*(dw*)(raddr(ss,bp+arg_4)), 0x8000));	// 52840 test    [bp+arg_4], 8000h ;~ 1AE2:15EC
cs=0x1ae2;eip=0x0015f1; 	R(JZ(loc_2aa3b));	// 52841 jz      short loc_2AA3B ;~ 1AE2:15F1
cs=0x1ae2;eip=0x0015f3; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), 0));	// 52842 cmp     [bp+arg_6], 0 ;~ 1AE2:15F3
cs=0x1ae2;eip=0x0015f7; 	R(JZ(loc_2aa13));	// 52843 jz      short loc_2AA13 ;~ 1AE2:15F7
cs=0x1ae2;eip=0x0015f9; 	T(XOR(cx, cx));	// 52844 xor     cx, cx ;~ 1AE2:15F9
cs=0x1ae2;eip=0x0015fb; 	T(MOV(dx, cx));	// 52845 mov     dx, cx ;~ 1AE2:15FB
cs=0x1ae2;eip=0x0015fd; 	T(MOV(ax, 0x4201));	// 52846 mov     ax, 4201h ;~ 1AE2:15FD
cs=0x1ae2;eip=0x001600; 	R(_INT(0x21));	// 52847 int     21h             ; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) ;~ 1AE2:1600
cs=0x1ae2;eip=0x001602; 	R(JC(loc_2aa4f));	// 52849 jb      short loc_2AA4F ;~ 1AE2:1602
cs=0x1ae2;eip=0x001604; 	T(TEST(*(dw*)(raddr(ss,bp+arg_6)), 2));	// 52850 test    [bp+arg_6], 2 ;~ 1AE2:1604
cs=0x1ae2;eip=0x001609; 	R(JNZ(loc_2aa19));	// 52851 jnz     short loc_2AA19 ;~ 1AE2:1609
cs=0x1ae2;eip=0x00160b; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 52852 add     ax, [bp+arg_2] ;~ 1AE2:160B
cs=0x1ae2;eip=0x00160e; 	T(ADC(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 52853 adc     dx, [bp+arg_4] ;~ 1AE2:160E
cs=0x1ae2;eip=0x001611; 	R(JNS(loc_2aa3b));	// 52854 jns     short loc_2AA3B ;~ 1AE2:1611
loc_2aa13:
	// 8208 
cs=0x1ae2;eip=0x001613; 	T(MOV(ax, 0x1600));	// 52858 mov     ax, 1600h ;~ 1AE2:1613
loc_2aa16:
	// 8209 
cs=0x1ae2;eip=0x001616; 	T(STC);	// 52861 stc ;~ 1AE2:1616
cs=0x1ae2;eip=0x001617; 	R(JMP(loc_2aa4f));	// 52862 jmp     short loc_2AA4F ;~ 1AE2:1617
loc_2aa19:
	// 8210 
cs=0x1ae2;eip=0x001619; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 52866 mov     [bp+var_2], dx ;~ 1AE2:1619
cs=0x1ae2;eip=0x00161c; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 52867 mov     [bp+var_4], ax ;~ 1AE2:161C
cs=0x1ae2;eip=0x00161f; 	T(MOV(dx, cx));	// 52868 mov     dx, cx ;~ 1AE2:161F
cs=0x1ae2;eip=0x001621; 	T(MOV(ax, 0x4202));	// 52869 mov     ax, 4202h ;~ 1AE2:1621
cs=0x1ae2;eip=0x001624; 	R(_INT(0x21));	// 52870 int     21h             ; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) ;~ 1AE2:1624
cs=0x1ae2;eip=0x001626; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 52872 add     ax, [bp+arg_2] ;~ 1AE2:1626
cs=0x1ae2;eip=0x001629; 	T(ADC(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 52873 adc     dx, [bp+arg_4] ;~ 1AE2:1629
cs=0x1ae2;eip=0x00162c; 	R(JNS(loc_2aa3b));	// 52874 jns     short loc_2AA3B ;~ 1AE2:162C
cs=0x1ae2;eip=0x00162e; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_2))));	// 52875 mov     cx, [bp+var_2] ;~ 1AE2:162E
cs=0x1ae2;eip=0x001631; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4))));	// 52876 mov     dx, [bp+var_4] ;~ 1AE2:1631
cs=0x1ae2;eip=0x001634; 	T(MOV(ax, 0x4200));	// 52877 mov     ax, 4200h ;~ 1AE2:1634
cs=0x1ae2;eip=0x001637; 	R(_INT(0x21));	// 52878 int     21h             ; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) ;~ 1AE2:1637
cs=0x1ae2;eip=0x001639; 	R(JMP(loc_2aa13));	// 52880 jmp     short loc_2AA13 ;~ 1AE2:1639
loc_2aa3b:
	// 8211 
cs=0x1ae2;eip=0x00163b; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 52885 mov     dx, [bp+arg_2] ;~ 1AE2:163B
cs=0x1ae2;eip=0x00163e; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_4))));	// 52886 mov     cx, [bp+arg_4] ;~ 1AE2:163E
cs=0x1ae2;eip=0x001641; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_6))));	// 52887 mov     al, byte ptr [bp+arg_6] ;~ 1AE2:1641
cs=0x1ae2;eip=0x001644; 	T(MOV(ah, 0x42));	// 52888 mov     ah, 42h ;~ 1AE2:1644
cs=0x1ae2;eip=0x001646; 	R(_INT(0x21));	// 52889 int     21h             ; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) ;~ 1AE2:1646
cs=0x1ae2;eip=0x001648; 	R(JC(loc_2aa4f));	// 52892 jb      short loc_2AA4F ;~ 1AE2:1648
cs=0x1ae2;eip=0x00164a; 	X(AND(*(raddr(ds,bx-0x3BA8)), 0x0FD));	// 52893 and     byte ptr [bx-3BA8h], 0FDh ;~ 1AE2:164A
loc_2aa4f:
	// 8212 
cs=0x1ae2;eip=0x00164f; 	R(JMP(loc_2a929));	// 52897 jmp     loc_2A929 ;~ 1AE2:164F
sub_2aa52:
	// 52905 
#undef var_4
#define var_4 -4
	// 52907 var_4           = byte ptr -4 ;~ 1AE2:1652
#undef var_3
#define var_3 -3
	// 52908 var_3           = byte ptr -3 ;~ 1AE2:1652
#undef var_2
#define var_2 -2
	// 52909 var_2           = byte ptr -2 ;~ 1AE2:1652
#undef var_1
#define var_1 -1
	// 52910 var_1           = byte ptr -1 ;~ 1AE2:1652
#undef arg_0
#define arg_0 6
	// 52911 arg_0           = word ptr  6 ;~ 1AE2:1652
#undef arg_2
#define arg_2 8
	// 52912 arg_2           = word ptr  8 ;~ 1AE2:1652
#undef arg_4
#define arg_4 0x0A
	// 52913 arg_4           = word ptr  0Ah ;~ 1AE2:1652
ret_1ae2_1652:
	// 8213 
cs=0x1ae2;eip=0x001652; 	X(PUSH(bp));	// 52915 push    bp ;~ 1AE2:1652
cs=0x1ae2;eip=0x001653; 	T(MOV(bp, sp));	// 52916 mov     bp, sp ;~ 1AE2:1653
cs=0x1ae2;eip=0x001655; 	T(SUB(sp, 4));	// 52917 sub     sp, 4 ;~ 1AE2:1655
cs=0x1ae2;eip=0x001658; 	T(XOR(bh, bh));	// 52918 xor     bh, bh ;~ 1AE2:1658
cs=0x1ae2;eip=0x00165a; 	X(MOV(*(raddr(ss,bp+var_2)), bh));	// 52919 mov     [bp+var_2], bh ;~ 1AE2:165A
cs=0x1ae2;eip=0x00165d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 52920 mov     ax, [bp+arg_2] ;~ 1AE2:165D
cs=0x1ae2;eip=0x001660; 	T(MOV(cx, ax));	// 52921 mov     cx, ax ;~ 1AE2:1660
cs=0x1ae2;eip=0x001662; 	X(MOV(*(raddr(ss,bp+var_4)), 0));	// 52922 mov     [bp+var_4], 0 ;~ 1AE2:1662
cs=0x1ae2;eip=0x001666; 	T(TEST(ax, 0x8000));	// 52923 test    ax, 8000h ;~ 1AE2:1666
cs=0x1ae2;eip=0x001669; 	R(JNZ(loc_2aa7b));	// 52924 jnz     short loc_2AA7B ;~ 1AE2:1669
cs=0x1ae2;eip=0x00166b; 	T(TEST(ax, 0x4000));	// 52925 test    ax, 4000h ;~ 1AE2:166B
cs=0x1ae2;eip=0x00166e; 	R(JNZ(loc_2aa77));	// 52926 jnz     short loc_2AA77 ;~ 1AE2:166E
cs=0x1ae2;eip=0x001670; 	T(TEST(byte_3841d, 0x80));	// 52927 test    byte_3841D, 80h ;~ 1AE2:1670
cs=0x1ae2;eip=0x001675; 	R(JNZ(loc_2aa7b));	// 52928 jnz     short loc_2AA7B ;~ 1AE2:1675
loc_2aa77:
	// 8214 
cs=0x1ae2;eip=0x001677; 	X(MOV(*(raddr(ss,bp+var_4)), 0x80));	// 52931 mov     [bp+var_4], 80h ; '€' ;~ 1AE2:1677
loc_2aa7b:
	// 8215 
cs=0x1ae2;eip=0x00167b; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_0))));	// 52935 mov     dx, [bp+arg_0] ;~ 1AE2:167B
cs=0x1ae2;eip=0x00167e; 	T(AND(al, 3));	// 52936 and     al, 3 ;~ 1AE2:167E
cs=0x1ae2;eip=0x001680; 	T(OR(al, bh));	// 52937 or      al, bh ;~ 1AE2:1680
cs=0x1ae2;eip=0x001682; 	T(MOV(ah, 0x3D));	// 52938 mov     ah, 3Dh ;~ 1AE2:1682
cs=0x1ae2;eip=0x001684; 	R(_INT(0x21));	// 52939 int     21h             ; DOS - 2+ - OPEN DISK FILE WITH HANDLE ;~ 1AE2:1684
cs=0x1ae2;eip=0x001686; 	R(JNC(loc_2aa9a));	// 52943 jnb     short loc_2AA9A ;~ 1AE2:1686
cs=0x1ae2;eip=0x001688; 	T(CMP(ax, 2));	// 52944 cmp     ax, 2 ;~ 1AE2:1688
cs=0x1ae2;eip=0x00168b; 	R(JNZ(loc_2aa96));	// 52945 jnz     short loc_2AA96 ;~ 1AE2:168B
cs=0x1ae2;eip=0x00168d; 	T(TEST(cx, 0x100));	// 52946 test    cx, 100h ;~ 1AE2:168D
cs=0x1ae2;eip=0x001691; 	R(JZ(loc_2aa96));	// 52947 jz      short loc_2AA96 ;~ 1AE2:1691
cs=0x1ae2;eip=0x001693; 	R(JMP(loc_2ab37));	// 52948 jmp     loc_2AB37 ;~ 1AE2:1693
loc_2aa96:
	// 8216 
cs=0x1ae2;eip=0x001696; 	T(STC);	// 52953 stc ;~ 1AE2:1696
cs=0x1ae2;eip=0x001697; 	R(JMP(loc_2a929));	// 52954 jmp     loc_2A929 ;~ 1AE2:1697
loc_2aa9a:
	// 8217 
cs=0x1ae2;eip=0x00169a; 	T(XCHG(ax, bx));	// 52958 xchg    ax, bx ;~ 1AE2:169A
cs=0x1ae2;eip=0x00169b; 	T(MOV(ax, cx));	// 52959 mov     ax, cx ;~ 1AE2:169B
cs=0x1ae2;eip=0x00169d; 	T(AND(ax, 0x500));	// 52960 and     ax, 500h ;~ 1AE2:169D
cs=0x1ae2;eip=0x0016a0; 	T(CMP(ax, 0x500));	// 52961 cmp     ax, 500h ;~ 1AE2:16A0
cs=0x1ae2;eip=0x0016a3; 	R(JNZ(loc_2aaae));	// 52962 jnz     short loc_2AAAE ;~ 1AE2:16A3
cs=0x1ae2;eip=0x0016a5; 	T(MOV(ah, 0x3E));	// 52963 mov     ah, 3Eh ;~ 1AE2:16A5
cs=0x1ae2;eip=0x0016a7; 	R(_INT(0x21));	// 52964 int     21h             ; DOS - 2+ - CLOSE A FILE WITH HANDLE ;~ 1AE2:16A7
cs=0x1ae2;eip=0x0016a9; 	T(MOV(ax, 0x1100));	// 52966 mov     ax, 1100h ;~ 1AE2:16A9
cs=0x1ae2;eip=0x0016ac; 	R(JMP(loc_2aa96));	// 52967 jmp     short loc_2AA96 ;~ 1AE2:16AC
loc_2aaae:
	// 8218 
cs=0x1ae2;eip=0x0016ae; 	X(MOV(*(raddr(ss,bp+var_3)), 1));	// 52971 mov     [bp+var_3], 1 ;~ 1AE2:16AE
cs=0x1ae2;eip=0x0016b2; 	T(MOV(ax, 0x4400));	// 52972 mov     ax, 4400h ;~ 1AE2:16B2
cs=0x1ae2;eip=0x0016b5; 	R(_INT(0x21));	// 52973 int     21h             ; DOS - 2+ - IOCTL - GET DEVICE INFORMATION ;~ 1AE2:16B5
cs=0x1ae2;eip=0x0016b7; 	T(TEST(dl, 0x80));	// 52975 test    dl, 80h ;~ 1AE2:16B7
cs=0x1ae2;eip=0x0016ba; 	R(JZ(loc_2aac0));	// 52976 jz      short loc_2AAC0 ;~ 1AE2:16BA
cs=0x1ae2;eip=0x0016bc; 	X(OR(*(raddr(ss,bp+var_4)), 0x40));	// 52977 or      [bp+var_4], 40h ;~ 1AE2:16BC
loc_2aac0:
	// 8219 
cs=0x1ae2;eip=0x0016c0; 	T(TEST(*(raddr(ss,bp+var_4)), 0x40));	// 52980 test    [bp+var_4], 40h ;~ 1AE2:16C0
cs=0x1ae2;eip=0x0016c4; 	R(JZ(loc_2aac9));	// 52981 jz      short loc_2AAC9 ;~ 1AE2:16C4
cs=0x1ae2;eip=0x0016c6; 	R(JMP(loc_2ab9e));	// 52982 jmp     loc_2AB9E ;~ 1AE2:16C6
loc_2aac9:
	// 8220 
cs=0x1ae2;eip=0x0016c9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 52986 mov     ax, [bp+arg_2] ;~ 1AE2:16C9
cs=0x1ae2;eip=0x0016cc; 	T(TEST(ax, 0x200));	// 52987 test    ax, 200h ;~ 1AE2:16CC
cs=0x1ae2;eip=0x0016cf; 	R(JZ(loc_2aaee));	// 52988 jz      short loc_2AAEE ;~ 1AE2:16CF
cs=0x1ae2;eip=0x0016d1; 	T(TEST(ax, 3));	// 52989 test    ax, 3 ;~ 1AE2:16D1
cs=0x1ae2;eip=0x0016d4; 	R(JZ(loc_2aadf));	// 52990 jz      short loc_2AADF ;~ 1AE2:16D4
cs=0x1ae2;eip=0x0016d6; 	T(XOR(cx, cx));	// 52991 xor     cx, cx ;~ 1AE2:16D6
cs=0x1ae2;eip=0x0016d8; 	T(MOV(ah, 0x40));	// 52992 mov     ah, 40h ;~ 1AE2:16D8
cs=0x1ae2;eip=0x0016da; 	R(_INT(0x21));	// 52993 int     21h             ; DOS - 2+ - WRITE TO FILE WITH HANDLE ;~ 1AE2:16DA
cs=0x1ae2;eip=0x0016dc; 	R(JMP(loc_2ab9e));	// 52995 jmp     loc_2AB9E ;~ 1AE2:16DC
loc_2aadf:
	// 8221 
cs=0x1ae2;eip=0x0016df; 	T(MOV(ah, 0x3E));	// 52999 mov     ah, 3Eh ;~ 1AE2:16DF
cs=0x1ae2;eip=0x0016e1; 	R(_INT(0x21));	// 53000 int     21h             ; DOS - 2+ - CLOSE A FILE WITH HANDLE ;~ 1AE2:16E1
cs=0x1ae2;eip=0x0016e3; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_0))));	// 53002 mov     dx, [bp+arg_0] ;~ 1AE2:16E3
cs=0x1ae2;eip=0x0016e6; 	T(MOV(ax, 0x4300));	// 53003 mov     ax, 4300h ;~ 1AE2:16E6
cs=0x1ae2;eip=0x0016e9; 	R(_INT(0x21));	// 53004 int     21h             ; DOS - 2+ - GET FILE ATTRIBUTES ;~ 1AE2:16E9
cs=0x1ae2;eip=0x0016eb; 	R(JMP(loc_2ab54));	// 53007 jmp     short loc_2AB54 ;~ 1AE2:16EB
loc_2aaee:
	// 8222 
cs=0x1ae2;eip=0x0016ee; 	T(TEST(*(raddr(ss,bp+var_4)), 0x80));	// 53012 test    [bp+var_4], 80h ;~ 1AE2:16EE
cs=0x1ae2;eip=0x0016f2; 	R(JNZ(loc_2aaf7));	// 53013 jnz     short loc_2AAF7 ;~ 1AE2:16F2
cs=0x1ae2;eip=0x0016f4; 	R(JMP(loc_2ab9e));	// 53014 jmp     loc_2AB9E ;~ 1AE2:16F4
loc_2aaf7:
	// 8223 
cs=0x1ae2;eip=0x0016f7; 	T(TEST(ax, 2));	// 53018 test    ax, 2 ;~ 1AE2:16F7
cs=0x1ae2;eip=0x0016fa; 	R(JNZ(loc_2aaff));	// 53019 jnz     short loc_2AAFF ;~ 1AE2:16FA
cs=0x1ae2;eip=0x0016fc; 	R(JMP(loc_2ab9e));	// 53020 jmp     loc_2AB9E ;~ 1AE2:16FC
loc_2aaff:
	// 8224 
cs=0x1ae2;eip=0x0016ff; 	T(MOV(cx, 0x0FFFF));	// 53024 mov     cx, 0FFFFh ;~ 1AE2:16FF
cs=0x1ae2;eip=0x001702; 	T(MOV(dx, cx));	// 53025 mov     dx, cx ;~ 1AE2:1702
cs=0x1ae2;eip=0x001704; 	T(MOV(ax, 0x4202));	// 53026 mov     ax, 4202h ;~ 1AE2:1704
cs=0x1ae2;eip=0x001707; 	R(_INT(0x21));	// 53027 int     21h             ; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) ;~ 1AE2:1707
cs=0x1ae2;eip=0x001709; 	T(NEG(cx));	// 53029 neg     cx ;~ 1AE2:1709
cs=0x1ae2;eip=0x00170b; 	T(dx = bp+var_1);	// 53030 lea     dx, [bp+var_1] ;~ 1AE2:170B
cs=0x1ae2;eip=0x00170e; 	T(MOV(ah, 0x3F));	// 53031 mov     ah, 3Fh ;~ 1AE2:170E
cs=0x1ae2;eip=0x001710; 	R(_INT(0x21));	// 53032 int     21h             ; DOS - 2+ - READ FROM FILE WITH HANDLE ;~ 1AE2:1710
cs=0x1ae2;eip=0x001712; 	T(OR(ax, ax));	// 53035 or      ax, ax ;~ 1AE2:1712
cs=0x1ae2;eip=0x001714; 	R(JZ(loc_2ab2b));	// 53036 jz      short loc_2AB2B ;~ 1AE2:1714
cs=0x1ae2;eip=0x001716; 	T(CMP(*(raddr(ss,bp+var_1)), 0x1A));	// 53037 cmp     [bp+var_1], 1Ah ;~ 1AE2:1716
cs=0x1ae2;eip=0x00171a; 	R(JNZ(loc_2ab2b));	// 53038 jnz     short loc_2AB2B ;~ 1AE2:171A
cs=0x1ae2;eip=0x00171c; 	T(NEG(cx));	// 53039 neg     cx ;~ 1AE2:171C
cs=0x1ae2;eip=0x00171e; 	T(MOV(dx, cx));	// 53040 mov     dx, cx ;~ 1AE2:171E
cs=0x1ae2;eip=0x001720; 	T(MOV(ax, 0x4202));	// 53041 mov     ax, 4202h ;~ 1AE2:1720
cs=0x1ae2;eip=0x001723; 	R(_INT(0x21));	// 53042 int     21h             ; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) ;~ 1AE2:1723
cs=0x1ae2;eip=0x001725; 	T(XOR(cx, cx));	// 53044 xor     cx, cx ;~ 1AE2:1725
cs=0x1ae2;eip=0x001727; 	T(MOV(ah, 0x40));	// 53045 mov     ah, 40h ;~ 1AE2:1727
cs=0x1ae2;eip=0x001729; 	R(_INT(0x21));	// 53046 int     21h             ; DOS - 2+ - WRITE TO FILE WITH HANDLE ;~ 1AE2:1729
loc_2ab2b:
	// 8225 
cs=0x1ae2;eip=0x00172b; 	T(XOR(cx, cx));	// 53051 xor     cx, cx ;~ 1AE2:172B
cs=0x1ae2;eip=0x00172d; 	T(MOV(dx, cx));	// 53052 mov     dx, cx ;~ 1AE2:172D
cs=0x1ae2;eip=0x00172f; 	T(MOV(ax, 0x4200));	// 53053 mov     ax, 4200h ;~ 1AE2:172F
cs=0x1ae2;eip=0x001732; 	R(_INT(0x21));	// 53054 int     21h             ; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) ;~ 1AE2:1732
cs=0x1ae2;eip=0x001734; 	R(JMP(loc_2ab9e));	// 53056 jmp     short loc_2AB9E ;~ 1AE2:1734
loc_2ab37:
	// 8226 
cs=0x1ae2;eip=0x001737; 	X(MOV(*(raddr(ss,bp+var_3)), 0));	// 53062 mov     [bp+var_3], 0 ;~ 1AE2:1737
cs=0x1ae2;eip=0x00173b; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_4))));	// 53063 mov     cx, [bp+arg_4] ;~ 1AE2:173B
cs=0x1ae2;eip=0x00173e; 	R(CALL(sub_2abe5,0));	// 53064 call    sub_2ABE5 ;~ 1AE2:173E
cs=0x1ae2;eip=0x001741; 	X(MOV(*(dw*)(raddr(ss,bp+arg_4)), cx));	// 53065 mov     [bp+arg_4], cx ;~ 1AE2:1741
cs=0x1ae2;eip=0x001744; 	T(TEST(*(raddr(ss,bp+var_2)), 0x0FF));	// 53066 test    [bp+var_2], 0FFh ;~ 1AE2:1744
cs=0x1ae2;eip=0x001748; 	R(JNZ(loc_2ab51));	// 53067 jnz     short loc_2AB51 ;~ 1AE2:1748
cs=0x1ae2;eip=0x00174a; 	T(TEST(*(dw*)(raddr(ss,bp+arg_2)), 2));	// 53068 test    [bp+arg_2], 2 ;~ 1AE2:174A
cs=0x1ae2;eip=0x00174f; 	R(JNZ(loc_2ab54));	// 53069 jnz     short loc_2AB54 ;~ 1AE2:174F
loc_2ab51:
	// 8227 
cs=0x1ae2;eip=0x001751; 	T(AND(cl, 0x0FE));	// 53072 and     cl, 0FEh ;~ 1AE2:1751
loc_2ab54:
	// 8228 
cs=0x1ae2;eip=0x001754; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_0))));	// 53076 mov     dx, [bp+arg_0] ;~ 1AE2:1754
cs=0x1ae2;eip=0x001757; 	T(MOV(ah, 0x3C));	// 53077 mov     ah, 3Ch ;~ 1AE2:1757
cs=0x1ae2;eip=0x001759; 	R(_INT(0x21));	// 53078 int     21h             ; DOS - 2+ - CREATE A FILE WITH HANDLE (CREAT) ;~ 1AE2:1759
cs=0x1ae2;eip=0x00175b; 	R(JNC(loc_2ab60));	// 53081 jnb     short loc_2AB60 ;~ 1AE2:175B
loc_2ab5d:
	// 8229 
cs=0x1ae2;eip=0x00175d; 	R(JMP(loc_2a929));	// 53085 jmp     loc_2A929 ;~ 1AE2:175D
loc_2ab60:
	// 8230 
cs=0x1ae2;eip=0x001760; 	T(XCHG(ax, bx));	// 53089 xchg    ax, bx ;~ 1AE2:1760
cs=0x1ae2;eip=0x001761; 	T(TEST(*(raddr(ss,bp+var_2)), 0x0FF));	// 53090 test    [bp+var_2], 0FFh ;~ 1AE2:1761
cs=0x1ae2;eip=0x001765; 	R(JNZ(loc_2ab6e));	// 53091 jnz     short loc_2AB6E ;~ 1AE2:1765
cs=0x1ae2;eip=0x001767; 	T(TEST(*(dw*)(raddr(ss,bp+arg_2)), 2));	// 53092 test    [bp+arg_2], 2 ;~ 1AE2:1767
cs=0x1ae2;eip=0x00176c; 	R(JNZ(loc_2ab9e));	// 53093 jnz     short loc_2AB9E ;~ 1AE2:176C
loc_2ab6e:
	// 8231 
cs=0x1ae2;eip=0x00176e; 	T(MOV(ah, 0x3E));	// 53096 mov     ah, 3Eh ;~ 1AE2:176E
cs=0x1ae2;eip=0x001770; 	R(_INT(0x21));	// 53097 int     21h             ; DOS - 2+ - CLOSE A FILE WITH HANDLE ;~ 1AE2:1770
cs=0x1ae2;eip=0x001772; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_2))));	// 53099 mov     al, byte ptr [bp+arg_2] ;~ 1AE2:1772
cs=0x1ae2;eip=0x001775; 	T(AND(al, 3));	// 53100 and     al, 3 ;~ 1AE2:1775
cs=0x1ae2;eip=0x001777; 	T(OR(al, *(raddr(ss,bp+var_2))));	// 53101 or      al, [bp+var_2] ;~ 1AE2:1777
cs=0x1ae2;eip=0x00177a; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_0))));	// 53102 mov     dx, [bp+arg_0] ;~ 1AE2:177A
cs=0x1ae2;eip=0x00177d; 	T(MOV(ah, 0x3D));	// 53103 mov     ah, 3Dh ;~ 1AE2:177D
cs=0x1ae2;eip=0x00177f; 	R(_INT(0x21));	// 53104 int     21h             ; DOS - 2+ - OPEN DISK FILE WITH HANDLE ;~ 1AE2:177F
cs=0x1ae2;eip=0x001781; 	R(JC(loc_2ab5d));	// 53108 jb      short loc_2AB5D ;~ 1AE2:1781
cs=0x1ae2;eip=0x001783; 	T(XCHG(ax, bx));	// 53109 xchg    ax, bx ;~ 1AE2:1783
cs=0x1ae2;eip=0x001784; 	T(TEST(*(raddr(ss,bp+var_3)), 1));	// 53110 test    [bp+var_3], 1 ;~ 1AE2:1784
cs=0x1ae2;eip=0x001788; 	R(JNZ(loc_2ab9e));	// 53111 jnz     short loc_2AB9E ;~ 1AE2:1788
cs=0x1ae2;eip=0x00178a; 	T(TEST(*(dw*)(raddr(ss,bp+arg_4)), 1));	// 53112 test    [bp+arg_4], 1 ;~ 1AE2:178A
cs=0x1ae2;eip=0x00178f; 	R(JZ(loc_2ab9e));	// 53113 jz      short loc_2AB9E ;~ 1AE2:178F
cs=0x1ae2;eip=0x001791; 	T(OR(cl, 1));	// 53114 or      cl, 1 ;~ 1AE2:1791
cs=0x1ae2;eip=0x001794; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_0))));	// 53115 mov     dx, [bp+arg_0] ;~ 1AE2:1794
cs=0x1ae2;eip=0x001797; 	T(MOV(ax, 0x4301));	// 53116 mov     ax, 4301h ;~ 1AE2:1797
cs=0x1ae2;eip=0x00179a; 	R(_INT(0x21));	// 53117 int     21h             ; DOS - 2+ - SET FILE ATTRIBUTES ;~ 1AE2:179A
cs=0x1ae2;eip=0x00179c; 	R(JC(loc_2ab5d));	// 53120 jb      short loc_2AB5D ;~ 1AE2:179C
loc_2ab9e:
	// 8232 
cs=0x1ae2;eip=0x00179e; 	T(TEST(*(raddr(ss,bp+var_4)), 0x40));	// 53124 test    [bp+var_4], 40h ;~ 1AE2:179E
cs=0x1ae2;eip=0x0017a2; 	R(JNZ(loc_2abe1));	// 53125 jnz     short loc_2ABE1 ;~ 1AE2:17A2
cs=0x1ae2;eip=0x0017a4; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_0))));	// 53126 mov     dx, [bp+arg_0] ;~ 1AE2:17A4
cs=0x1ae2;eip=0x0017a7; 	T(MOV(ax, 0x4300));	// 53127 mov     ax, 4300h ;~ 1AE2:17A7
cs=0x1ae2;eip=0x0017aa; 	R(_INT(0x21));	// 53128 int     21h             ; DOS - 2+ - GET FILE ATTRIBUTES ;~ 1AE2:17AA
cs=0x1ae2;eip=0x0017ac; 	T(MOV(ax, cx));	// 53131 mov     ax, cx ;~ 1AE2:17AC
cs=0x1ae2;eip=0x0017ae; 	T(XOR(cl, cl));	// 53132 xor     cl, cl ;~ 1AE2:17AE
cs=0x1ae2;eip=0x0017b0; 	T(AND(ax, 1));	// 53133 and     ax, 1 ;~ 1AE2:17B0
cs=0x1ae2;eip=0x0017b3; 	R(JZ(loc_2abb7));	// 53134 jz      short loc_2ABB7 ;~ 1AE2:17B3
cs=0x1ae2;eip=0x0017b5; 	T(MOV(cl, 0x10));	// 53135 mov     cl, 10h ;~ 1AE2:17B5
loc_2abb7:
	// 8233 
cs=0x1ae2;eip=0x0017b7; 	T(TEST(*(dw*)(raddr(ss,bp+arg_2)), 8));	// 53138 test    [bp+arg_2], 8 ;~ 1AE2:17B7
cs=0x1ae2;eip=0x0017bc; 	R(JZ(loc_2abc1));	// 53139 jz      short loc_2ABC1 ;~ 1AE2:17BC
cs=0x1ae2;eip=0x0017be; 	T(OR(cl, 0x20));	// 53140 or      cl, 20h ;~ 1AE2:17BE
loc_2abc1:
	// 8234 
cs=0x1ae2;eip=0x0017c1; 	T(CMP(bx, word_38296));	// 53144 cmp     bx, word_38296 ;~ 1AE2:17C1
cs=0x1ae2;eip=0x0017c5; 	R(JC(loc_2abd1));	// 53145 jb      short loc_2ABD1 ;~ 1AE2:17C5
cs=0x1ae2;eip=0x0017c7; 	T(MOV(ah, 0x3E));	// 53146 mov     ah, 3Eh ;~ 1AE2:17C7
cs=0x1ae2;eip=0x0017c9; 	R(_INT(0x21));	// 53147 int     21h             ; DOS - 2+ - CLOSE A FILE WITH HANDLE ;~ 1AE2:17C9
cs=0x1ae2;eip=0x0017cb; 	T(MOV(ax, 0x1800));	// 53149 mov     ax, 1800h ;~ 1AE2:17CB
cs=0x1ae2;eip=0x0017ce; 	R(JMP(loc_2aa96));	// 53150 jmp     loc_2AA96 ;~ 1AE2:17CE
loc_2abd1:
	// 8235 
cs=0x1ae2;eip=0x0017d1; 	T(OR(cl, *(raddr(ss,bp+var_4))));	// 53154 or      cl, [bp+var_4] ;~ 1AE2:17D1
cs=0x1ae2;eip=0x0017d4; 	T(OR(cl, 1));	// 53155 or      cl, 1 ;~ 1AE2:17D4
cs=0x1ae2;eip=0x0017d7; 	X(MOV(*(raddr(ds,bx-0x3BA8)), cl));	// 53156 mov     [bx-3BA8h], cl ;~ 1AE2:17D7
cs=0x1ae2;eip=0x0017db; 	T(MOV(ax, bx));	// 53157 mov     ax, bx ;~ 1AE2:17DB
cs=0x1ae2;eip=0x0017dd; 	T(MOV(sp, bp));	// 53158 mov     sp, bp ;~ 1AE2:17DD
cs=0x1ae2;eip=0x0017df; 	X(POP(bp));	// 53159 pop     bp ;~ 1AE2:17DF
cs=0x1ae2;eip=0x0017e0; 	R(RETF(0));	// 53160 retf ;~ 1AE2:17E0
loc_2abe1:
	// 8236 
cs=0x1ae2;eip=0x0017e1; 	T(XOR(cl, cl));	// 53164 xor     cl, cl ;~ 1AE2:17E1
cs=0x1ae2;eip=0x0017e3; 	R(JMP(loc_2abc1));	// 53165 jmp     short loc_2ABC1 ;~ 1AE2:17E3
sub_2abe5:
	// 53172 
cs=0x1ae2;eip=0x0017e5; 	T(MOV(ax, word_3828b));	// 53173 mov     ax, word_3828B ;~ 1AE2:17E5
ret_1ae2_17e8:
	// 8237 
cs=0x1ae2;eip=0x0017e8; 	T(NOT(ax));	// 53174 not     ax ;~ 1AE2:17E8
cs=0x1ae2;eip=0x0017ea; 	T(AND(ax, cx));	// 53175 and     ax, cx ;~ 1AE2:17EA
cs=0x1ae2;eip=0x0017ec; 	T(XOR(cx, cx));	// 53176 xor     cx, cx ;~ 1AE2:17EC
cs=0x1ae2;eip=0x0017ee; 	T(TEST(al, 0x80));	// 53177 test    al, 80h ;~ 1AE2:17EE
cs=0x1ae2;eip=0x0017f0; 	R(JNZ(locret_2abf5));	// 53178 jnz     short locret_2ABF5 ;~ 1AE2:17F0
cs=0x1ae2;eip=0x0017f2; 	T(OR(cl, 1));	// 53179 or      cl, 1 ;~ 1AE2:17F2
locret_2abf5:
	// 8238 
cs=0x1ae2;eip=0x0017f5; 	R(RETN(0));	// 53182 retn ;~ 1AE2:17F5
sub_2abf6:
	// 53189 
cs=0x1ae2;eip=0x0017f6; 	X(POP(cx));	// 53190 pop     cx ;~ 1AE2:17F6
ret_1ae2_17f7:
	// 8239 
cs=0x1ae2;eip=0x0017f7; 	X(POP(dx));	// 53191 pop     dx ;~ 1AE2:17F7
cs=0x1ae2;eip=0x0017f8; 	T(MOV(ax, word_3841a));	// 53192 mov     ax, word_3841A ;~ 1AE2:17F8
cs=0x1ae2;eip=0x0017fb; 	T(CMP(ax, sp));	// 53193 cmp     ax, sp ;~ 1AE2:17FB
cs=0x1ae2;eip=0x0017fd; 	R(JNC(loc_2ac06));	// 53194 jnb     short loc_2AC06 ;~ 1AE2:17FD
cs=0x1ae2;eip=0x0017ff; 	T(SUB(ax, sp));	// 53195 sub     ax, sp ;~ 1AE2:17FF
cs=0x1ae2;eip=0x001801; 	T(NEG(ax));	// 53196 neg     ax ;~ 1AE2:1801
loc_2ac03:
	// 8240 
cs=0x1ae2;eip=0x001803; 	X(PUSH(dx));	// 53199 push    dx ;~ 1AE2:1803
cs=0x1ae2;eip=0x001804; 	X(PUSH(cx));	// 53200 push    cx ;~ 1AE2:1804
cs=0x1ae2;eip=0x001805; 	R(RETF(0));	// 53201 retf ;~ 1AE2:1805
loc_2ac06:
	// 8241 
cs=0x1ae2;eip=0x001806; 	T(XOR(ax, ax));	// 53205 xor     ax, ax ;~ 1AE2:1806
cs=0x1ae2;eip=0x001808; 	R(JMP(loc_2ac03));	// 53206 jmp     short loc_2AC03 ;~ 1AE2:1808
sub_2ac0a:
	// 53214 
#undef arg_0
#define arg_0 6
	// 53216 arg_0           = word ptr  6 ;~ 1AE2:180A
ret_1ae2_180a:
	// 8242 
cs=0x1ae2;eip=0x00180a; 	X(PUSH(bp));	// 53218 push    bp ;~ 1AE2:180A
cs=0x1ae2;eip=0x00180b; 	T(MOV(bp, sp));	// 53219 mov     bp, sp ;~ 1AE2:180B
cs=0x1ae2;eip=0x00180d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 53220 mov     bx, [bp+arg_0] ;~ 1AE2:180D
cs=0x1ae2;eip=0x001810; 	T(CMP(bx, word_38296));	// 53221 cmp     bx, word_38296 ;~ 1AE2:1810
cs=0x1ae2;eip=0x001814; 	R(JGE(loc_2ac27));	// 53222 jge     short loc_2AC27 ;~ 1AE2:1814
cs=0x1ae2;eip=0x001816; 	T(CMP(bx, 0));	// 53223 cmp     bx, 0 ;~ 1AE2:1816
cs=0x1ae2;eip=0x001819; 	R(JL(loc_2ac27));	// 53224 jl      short loc_2AC27 ;~ 1AE2:1819
cs=0x1ae2;eip=0x00181b; 	T(TEST(*(raddr(ds,bx-0x3BA8)), 0x40));	// 53225 test    byte ptr [bx-3BA8h], 40h ;~ 1AE2:181B
cs=0x1ae2;eip=0x001820; 	R(JZ(loc_2ac27));	// 53226 jz      short loc_2AC27 ;~ 1AE2:1820
cs=0x1ae2;eip=0x001822; 	T(MOV(ax, 1));	// 53227 mov     ax, 1 ;~ 1AE2:1822
cs=0x1ae2;eip=0x001825; 	R(JMP(loc_2ac29));	// 53228 jmp     short loc_2AC29 ;~ 1AE2:1825
loc_2ac27:
	// 8243 
cs=0x1ae2;eip=0x001827; 	T(XOR(ax, ax));	// 53233 xor     ax, ax ;~ 1AE2:1827
loc_2ac29:
	// 8244 
cs=0x1ae2;eip=0x001829; 	T(MOV(sp, bp));	// 53236 mov     sp, bp ;~ 1AE2:1829
cs=0x1ae2;eip=0x00182b; 	X(POP(bp));	// 53237 pop     bp ;~ 1AE2:182B
cs=0x1ae2;eip=0x00182c; 	R(RETF(0));	// 53238 retf ;~ 1AE2:182C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_29422: 	goto loc_29422;
        case m2c::kloc_29434: 	goto loc_29434;
        case m2c::kloc_29452: 	goto loc_29452;
        case m2c::kloc_294c9: 	goto loc_294c9;
        case m2c::kloc_29521: 	goto loc_29521;
        case m2c::kloc_29532: 	goto loc_29532;
        case m2c::kloc_29541: 	goto loc_29541;
        case m2c::kloc_2955c: 	goto loc_2955c;
        case m2c::kloc_29568: 	goto loc_29568;
        case m2c::kloc_2956e: 	goto loc_2956e;
        case m2c::kloc_29573: 	goto loc_29573;
        case m2c::kloc_29576: 	goto loc_29576;
        case m2c::kloc_2958c: 	goto loc_2958c;
        case m2c::kloc_295bc: 	goto loc_295bc;
        case m2c::kloc_295e2: 	goto loc_295e2;
        case m2c::kloc_295e8: 	goto loc_295e8;
        case m2c::kloc_295f3: 	goto loc_295f3;
        case m2c::kloc_2960d: 	goto loc_2960d;
        case m2c::kloc_29657: 	goto loc_29657;
        case m2c::kloc_29660: 	goto loc_29660;
        case m2c::kloc_296d4: 	goto loc_296d4;
        case m2c::kloc_296d7: 	goto loc_296d7;
        case m2c::kloc_296f9: 	goto loc_296f9;
        case m2c::kloc_296fc: 	goto loc_296fc;
        case m2c::kloc_2972c: 	goto loc_2972c;
        case m2c::kloc_2972e: 	goto loc_2972e;
        case m2c::kloc_29757: 	goto loc_29757;
        case m2c::kloc_2975e: 	goto loc_2975e;
        case m2c::kloc_29767: 	goto loc_29767;
        case m2c::kloc_29783: 	goto loc_29783;
        case m2c::kloc_297a0: 	goto loc_297a0;
        case m2c::kloc_297a4: 	goto loc_297a4;
        case m2c::kloc_297be: 	goto loc_297be;
        case m2c::kloc_297c6: 	goto loc_297c6;
        case m2c::kloc_297d5: 	goto loc_297d5;
        case m2c::kloc_297d8: 	goto loc_297d8;
        case m2c::kloc_297e8: 	goto loc_297e8;
        case m2c::kloc_297f1: 	goto loc_297f1;
        case m2c::kloc_297fc: 	goto loc_297fc;
        case m2c::kloc_29809: 	goto loc_29809;
        case m2c::kloc_29812: 	goto loc_29812;
        case m2c::kloc_2982e: 	goto loc_2982e;
        case m2c::kloc_29830: 	goto loc_29830;
        case m2c::kloc_2985f: 	goto loc_2985f;
        case m2c::kloc_29867: 	goto loc_29867;
        case m2c::kloc_29869: 	goto loc_29869;
        case m2c::kloc_2986c: 	goto loc_2986c;
        case m2c::kloc_2987a: 	goto loc_2987a;
        case m2c::kloc_29882: 	goto loc_29882;
        case m2c::kloc_2989d: 	goto loc_2989d;
        case m2c::kloc_298d8: 	goto loc_298d8;
        case m2c::kloc_298e5: 	goto loc_298e5;
        case m2c::kloc_29901: 	goto loc_29901;
        case m2c::kloc_29909: 	goto loc_29909;
        case m2c::kloc_2990e: 	goto loc_2990e;
        case m2c::kloc_2991d: 	goto loc_2991d;
        case m2c::kloc_29920: 	goto loc_29920;
        case m2c::kloc_2994c: 	goto loc_2994c;
        case m2c::kloc_29952: 	goto loc_29952;
        case m2c::kloc_29991: 	goto loc_29991;
        case m2c::kloc_2999a: 	goto loc_2999a;
        case m2c::kloc_299aa: 	goto loc_299aa;
        case m2c::kloc_299b7: 	goto loc_299b7;
        case m2c::kloc_299c1: 	goto loc_299c1;
        case m2c::kloc_299e2: 	goto loc_299e2;
        case m2c::kloc_299f2: 	goto loc_299f2;
        case m2c::kloc_299ff: 	goto loc_299ff;
        case m2c::kloc_29a09: 	goto loc_29a09;
        case m2c::kloc_29a40: 	goto loc_29a40;
        case m2c::kloc_29a5c: 	goto loc_29a5c;
        case m2c::kloc_29a66: 	goto loc_29a66;
        case m2c::kloc_29a7d: 	goto loc_29a7d;
        case m2c::kloc_29aa0: 	goto loc_29aa0;
        case m2c::kloc_29aaf: 	goto loc_29aaf;
        case m2c::kloc_29aba: 	goto loc_29aba;
        case m2c::kloc_29acf: 	goto loc_29acf;
        case m2c::kloc_29afd: 	goto loc_29afd;
        case m2c::kloc_29b06: 	goto loc_29b06;
        case m2c::kloc_29b2c: 	goto loc_29b2c;
        case m2c::kloc_29b6a: 	goto loc_29b6a;
        case m2c::kloc_29b9d: 	goto loc_29b9d;
        case m2c::kloc_29bc6: 	goto loc_29bc6;
        case m2c::kloc_29bd5: 	goto loc_29bd5;
        case m2c::kloc_29c1e: 	goto loc_29c1e;
        case m2c::kloc_29c68: 	goto loc_29c68;
        case m2c::kloc_29c80: 	goto loc_29c80;
        case m2c::kloc_29c83: 	goto loc_29c83;
        case m2c::kloc_29c92: 	goto loc_29c92;
        case m2c::kloc_29c9f: 	goto loc_29c9f;
        case m2c::kloc_29ce3: 	goto loc_29ce3;
        case m2c::kloc_29d1c: 	goto loc_29d1c;
        case m2c::kloc_29d34: 	goto loc_29d34;
        case m2c::kloc_29d4d: 	goto loc_29d4d;
        case m2c::kloc_29d58: 	goto loc_29d58;
        case m2c::kloc_29d81: 	goto loc_29d81;
        case m2c::kloc_29d82: 	goto loc_29d82;
        case m2c::kloc_29d85: 	goto loc_29d85;
        case m2c::kloc_29d8f: 	goto loc_29d8f;
        case m2c::kloc_29db3: 	goto loc_29db3;
        case m2c::kloc_29e35: 	goto loc_29e35;
        case m2c::kloc_29e40: 	goto loc_29e40;
        case m2c::kloc_29e69: 	goto loc_29e69;
        case m2c::kloc_29e6a: 	goto loc_29e6a;
        case m2c::kloc_29e6d: 	goto loc_29e6d;
        case m2c::kloc_29e96: 	goto loc_29e96;
        case m2c::kloc_29ea1: 	goto loc_29ea1;
        case m2c::kloc_29ec8: 	goto loc_29ec8;
        case m2c::kloc_29ece: 	goto loc_29ece;
        case m2c::kloc_29edb: 	goto loc_29edb;
        case m2c::kloc_29ef9: 	goto loc_29ef9;
        case m2c::kloc_29f06: 	goto loc_29f06;
        case m2c::kloc_29f15: 	goto loc_29f15;
        case m2c::kloc_29f30: 	goto loc_29f30;
        case m2c::kloc_29f3f: 	goto loc_29f3f;
        case m2c::kloc_29f54: 	goto loc_29f54;
        case m2c::kloc_29f81: 	goto loc_29f81;
        case m2c::kloc_29fb5: 	goto loc_29fb5;
        case m2c::kloc_29fbc: 	goto loc_29fbc;
        case m2c::kloc_29fc8: 	goto loc_29fc8;
        case m2c::kloc_29ffa: 	goto loc_29ffa;
        case m2c::kloc_29fff: 	goto loc_29fff;
        case m2c::kloc_2a021: 	goto loc_2a021;
        case m2c::kloc_2a02c: 	goto loc_2a02c;
        case m2c::kloc_2a02e: 	goto loc_2a02e;
        case m2c::kloc_2a03a: 	goto loc_2a03a;
        case m2c::kloc_2a045: 	goto loc_2a045;
        case m2c::kloc_2a07f: 	goto loc_2a07f;
        case m2c::kloc_2a08a: 	goto loc_2a08a;
        case m2c::kloc_2a0cd: 	goto loc_2a0cd;
        case m2c::kloc_2a0ec: 	goto loc_2a0ec;
        case m2c::kloc_2a0ef: 	goto loc_2a0ef;
        case m2c::kloc_2a102: 	goto loc_2a102;
        case m2c::kloc_2a109: 	goto loc_2a109;
        case m2c::kloc_2a128: 	goto loc_2a128;
        case m2c::kloc_2a156: 	goto loc_2a156;
        case m2c::kloc_2a171: 	goto loc_2a171;
        case m2c::kloc_2a17c: 	goto loc_2a17c;
        case m2c::kloc_2a194: 	goto loc_2a194;
        case m2c::kloc_2a19c: 	goto loc_2a19c;
        case m2c::kloc_2a1a1: 	goto loc_2a1a1;
        case m2c::kloc_2a1d4: 	goto loc_2a1d4;
        case m2c::kloc_2a1f8: 	goto loc_2a1f8;
        case m2c::kloc_2a1fe: 	goto loc_2a1fe;
        case m2c::kloc_2a204: 	goto loc_2a204;
        case m2c::kloc_2a20c: 	goto loc_2a20c;
        case m2c::kloc_2a20f: 	goto loc_2a20f;
        case m2c::kloc_2a216: 	goto loc_2a216;
        case m2c::kloc_2a21c: 	goto loc_2a21c;
        case m2c::kloc_2a22b: 	goto loc_2a22b;
        case m2c::kloc_2a25a: 	goto loc_2a25a;
        case m2c::kloc_2a261: 	goto loc_2a261;
        case m2c::kloc_2a266: 	goto loc_2a266;
        case m2c::kloc_2a26c: 	goto loc_2a26c;
        case m2c::kloc_2a28c: 	goto loc_2a28c;
        case m2c::kloc_2a2cc: 	goto loc_2a2cc;
        case m2c::kloc_2a307: 	goto loc_2a307;
        case m2c::kloc_2a330: 	goto loc_2a330;
        case m2c::kloc_2a350: 	goto loc_2a350;
        case m2c::kloc_2a36c: 	goto loc_2a36c;
        case m2c::kloc_2a377: 	goto loc_2a377;
        case m2c::kloc_2a38e: 	goto loc_2a38e;
        case m2c::kloc_2a399: 	goto loc_2a399;
        case m2c::kloc_2a3b1: 	goto loc_2a3b1;
        case m2c::kloc_2a3cf: 	goto loc_2a3cf;
        case m2c::kloc_2a3f2: 	goto loc_2a3f2;
        case m2c::kloc_2a402: 	goto loc_2a402;
        case m2c::kloc_2a405: 	goto loc_2a405;
        case m2c::kloc_2a407: 	goto loc_2a407;
        case m2c::kloc_2a40b: 	goto loc_2a40b;
        case m2c::kloc_2a40d: 	goto loc_2a40d;
        case m2c::kloc_2a410: 	goto loc_2a410;
        case m2c::kloc_2a41c: 	goto loc_2a41c;
        case m2c::kloc_2a437: 	goto loc_2a437;
        case m2c::kloc_2a43b: 	goto loc_2a43b;
        case m2c::kloc_2a452: 	goto loc_2a452;
        case m2c::kloc_2a465: 	goto loc_2a465;
        case m2c::kloc_2a467: 	goto loc_2a467;
        case m2c::kloc_2a46c: 	goto loc_2a46c;
        case m2c::kloc_2a471: 	goto loc_2a471;
        case m2c::kloc_2a48d: 	goto loc_2a48d;
        case m2c::kloc_2a490: 	goto loc_2a490;
        case m2c::kloc_2a4a2: 	goto loc_2a4a2;
        case m2c::kloc_2a4e5: 	goto loc_2a4e5;
        case m2c::kloc_2a4f0: 	goto loc_2a4f0;
        case m2c::kloc_2a4f5: 	goto loc_2a4f5;
        case m2c::kloc_2a4f9: 	goto loc_2a4f9;
        case m2c::kloc_2a501: 	goto loc_2a501;
        case m2c::kloc_2a50a: 	goto loc_2a50a;
        case m2c::kloc_2a512: 	goto loc_2a512;
        case m2c::kloc_2a517: 	goto loc_2a517;
        case m2c::kloc_2a519: 	goto loc_2a519;
        case m2c::kloc_2a51b: 	goto loc_2a51b;
        case m2c::kloc_2a51d: 	goto loc_2a51d;
        case m2c::kloc_2a53b: 	goto loc_2a53b;
        case m2c::kloc_2a541: 	goto loc_2a541;
        case m2c::kloc_2a54a: 	goto loc_2a54a;
        case m2c::kloc_2a55c: 	goto loc_2a55c;
        case m2c::kloc_2a562: 	goto loc_2a562;
        case m2c::kloc_2a568: 	goto loc_2a568;
        case m2c::kloc_2a56d: 	goto loc_2a56d;
        case m2c::kloc_2a570: 	goto loc_2a570;
        case m2c::kloc_2a57c: 	goto loc_2a57c;
        case m2c::kloc_2a589: 	goto loc_2a589;
        case m2c::kloc_2a59e: 	goto loc_2a59e;
        case m2c::kloc_2a5b2: 	goto loc_2a5b2;
        case m2c::kloc_2a5d2: 	goto loc_2a5d2;
        case m2c::kloc_2a5ec: 	goto loc_2a5ec;
        case m2c::kloc_2a5f6: 	goto loc_2a5f6;
        case m2c::kloc_2a5fc: 	goto loc_2a5fc;
        case m2c::kloc_2a615: 	goto loc_2a615;
        case m2c::kloc_2a62f: 	goto loc_2a62f;
        case m2c::kloc_2a63f: 	goto loc_2a63f;
        case m2c::kloc_2a644: 	goto loc_2a644;
        case m2c::kloc_2a653: 	goto loc_2a653;
        case m2c::kloc_2a657: 	goto loc_2a657;
        case m2c::kloc_2a65d: 	goto loc_2a65d;
        case m2c::kloc_2a666: 	goto loc_2a666;
        case m2c::kloc_2a66d: 	goto loc_2a66d;
        case m2c::kloc_2a687: 	goto loc_2a687;
        case m2c::kloc_2a692: 	goto loc_2a692;
        case m2c::kloc_2a6a6: 	goto loc_2a6a6;
        case m2c::kloc_2a6aa: 	goto loc_2a6aa;
        case m2c::kloc_2a6c3: 	goto loc_2a6c3;
        case m2c::kloc_2a6cd: 	goto loc_2a6cd;
        case m2c::kloc_2a6d9: 	goto loc_2a6d9;
        case m2c::kloc_2a6ed: 	goto loc_2a6ed;
        case m2c::kloc_2a6f2: 	goto loc_2a6f2;
        case m2c::kloc_2a6fd: 	goto loc_2a6fd;
        case m2c::kloc_2a714: 	goto loc_2a714;
        case m2c::kloc_2a718: 	goto loc_2a718;
        case m2c::kloc_2a71a: 	goto loc_2a71a;
        case m2c::kloc_2a73b: 	goto loc_2a73b;
        case m2c::kloc_2a77f: 	goto loc_2a77f;
        case m2c::kloc_2a797: 	goto loc_2a797;
        case m2c::kloc_2a7a4: 	goto loc_2a7a4;
        case m2c::kloc_2a7aa: 	goto loc_2a7aa;
        case m2c::kloc_2a7c7: 	goto loc_2a7c7;
        case m2c::kloc_2a7d3: 	goto loc_2a7d3;
        case m2c::kloc_2a7e4: 	goto loc_2a7e4;
        case m2c::kloc_2a7f8: 	goto loc_2a7f8;
        case m2c::kloc_2a810: 	goto loc_2a810;
        case m2c::kloc_2a81e: 	goto loc_2a81e;
        case m2c::kloc_2a855: 	goto loc_2a855;
        case m2c::kloc_2a879: 	goto loc_2a879;
        case m2c::kloc_2a8c8: 	goto loc_2a8c8;
        case m2c::kloc_2a8d2: 	goto loc_2a8d2;
        case m2c::kloc_2a8fa: 	goto loc_2a8fa;
        case m2c::kloc_2a902: 	goto loc_2a902;
        case m2c::kloc_2a916: 	goto loc_2a916;
        case m2c::kloc_2a918: 	goto loc_2a918;
        case m2c::kloc_2a929: 	goto loc_2a929;
        case m2c::kloc_2a92b: 	goto loc_2a92b;
        case m2c::kloc_2a932: 	goto loc_2a932;
        case m2c::kloc_2a957: 	goto loc_2a957;
        case m2c::kloc_2a95b: 	goto loc_2a95b;
        case m2c::kloc_2a95d: 	goto loc_2a95d;
        case m2c::kloc_2a961: 	goto loc_2a961;
        case m2c::kloc_2a966: 	goto loc_2a966;
        case m2c::kloc_2a9ae: 	goto loc_2a9ae;
        case m2c::kloc_2a9c4: 	goto loc_2a9c4;
        case m2c::kloc_2a9ec: 	goto loc_2a9ec;
        case m2c::kloc_2aa13: 	goto loc_2aa13;
        case m2c::kloc_2aa16: 	goto loc_2aa16;
        case m2c::kloc_2aa19: 	goto loc_2aa19;
        case m2c::kloc_2aa3b: 	goto loc_2aa3b;
        case m2c::kloc_2aa4f: 	goto loc_2aa4f;
        case m2c::kloc_2aa77: 	goto loc_2aa77;
        case m2c::kloc_2aa7b: 	goto loc_2aa7b;
        case m2c::kloc_2aa96: 	goto loc_2aa96;
        case m2c::kloc_2aa9a: 	goto loc_2aa9a;
        case m2c::kloc_2aaae: 	goto loc_2aaae;
        case m2c::kloc_2aac0: 	goto loc_2aac0;
        case m2c::kloc_2aac9: 	goto loc_2aac9;
        case m2c::kloc_2aadf: 	goto loc_2aadf;
        case m2c::kloc_2aaee: 	goto loc_2aaee;
        case m2c::kloc_2aaf7: 	goto loc_2aaf7;
        case m2c::kloc_2aaff: 	goto loc_2aaff;
        case m2c::kloc_2ab2b: 	goto loc_2ab2b;
        case m2c::kloc_2ab37: 	goto loc_2ab37;
        case m2c::kloc_2ab51: 	goto loc_2ab51;
        case m2c::kloc_2ab54: 	goto loc_2ab54;
        case m2c::kloc_2ab5d: 	goto loc_2ab5d;
        case m2c::kloc_2ab60: 	goto loc_2ab60;
        case m2c::kloc_2ab6e: 	goto loc_2ab6e;
        case m2c::kloc_2ab9e: 	goto loc_2ab9e;
        case m2c::kloc_2abb7: 	goto loc_2abb7;
        case m2c::kloc_2abc1: 	goto loc_2abc1;
        case m2c::kloc_2abd1: 	goto loc_2abd1;
        case m2c::kloc_2abe1: 	goto loc_2abe1;
        case m2c::kloc_2ac03: 	goto loc_2ac03;
        case m2c::kloc_2ac06: 	goto loc_2ac06;
        case m2c::kloc_2ac27: 	goto loc_2ac27;
        case m2c::kloc_2ac29: 	goto loc_2ac29;
        case m2c::kloc_2ac3a: 	goto loc_2ac3a;
        case m2c::kloc_2ac56: 	goto loc_2ac56;
        case m2c::kloc_2ac58: 	goto loc_2ac58;
        case m2c::kloc_2ac61: 	goto loc_2ac61;
        case m2c::kloc_2ac6f: 	goto loc_2ac6f;
        case m2c::kloc_2ac78: 	goto loc_2ac78;
        case m2c::kloc_2aca1: 	goto loc_2aca1;
        case m2c::kloc_2acac: 	goto loc_2acac;
        case m2c::kloc_2acb2: 	goto loc_2acb2;
        case m2c::kloc_2acc2: 	goto loc_2acc2;
        case m2c::kloc_2acd5: 	goto loc_2acd5;
        case m2c::kloc_2acd8: 	goto loc_2acd8;
        case m2c::klocret_2962c: 	goto locret_2962c;
        case m2c::klocret_2963f: 	goto locret_2963f;
        case m2c::klocret_29bda: 	goto locret_29bda;
        case m2c::klocret_2a75e: 	goto locret_2a75e;
        case m2c::klocret_2a823: 	goto locret_2a823;
        case m2c::klocret_2abf5: 	goto locret_2abf5;
        case m2c::kret_1ae2_107a: 	goto ret_1ae2_107a;
        case m2c::kret_1ae2_1123: 	goto ret_1ae2_1123;
        case m2c::kret_1ae2_11b6: 	goto ret_1ae2_11b6;
        case m2c::kret_1ae2_1200: 	goto ret_1ae2_1200;
        case m2c::kret_1ae2_12e3: 	goto ret_1ae2_12e3;
        case m2c::kret_1ae2_131d: 	goto ret_1ae2_131d;
        case m2c::kret_1ae2_133f: 	goto ret_1ae2_133f;
        case m2c::kret_1ae2_1360: 	goto ret_1ae2_1360;
        case m2c::kret_1ae2_13d1: 	goto ret_1ae2_13d1;
        case m2c::kret_1ae2_1480: 	goto ret_1ae2_1480;
        case m2c::kret_1ae2_14dc: 	goto ret_1ae2_14dc;
        case m2c::kret_1ae2_151e: 	goto ret_1ae2_151e;
        case m2c::kret_1ae2_1538: 	goto ret_1ae2_1538;
        case m2c::kret_1ae2_153f: 	goto ret_1ae2_153f;
        case m2c::kret_1ae2_156a: 	goto ret_1ae2_156a;
        case m2c::kret_1ae2_15d8: 	goto ret_1ae2_15d8;
        case m2c::kret_1ae2_1652: 	goto ret_1ae2_1652;
        case m2c::kret_1ae2_17e8: 	goto ret_1ae2_17e8;
        case m2c::kret_1ae2_17f7: 	goto ret_1ae2_17f7;
        case m2c::kret_1ae2_182e: 	goto ret_1ae2_182e;
        case m2c::kret_1ae2_188e: 	goto ret_1ae2_188e;
        case m2c::kret_1ae2_1a: 	goto ret_1ae2_1a;
        case m2c::kret_1ae2_1a3: 	goto ret_1ae2_1a3;
        case m2c::kret_1ae2_1b9: 	goto ret_1ae2_1b9;
        case m2c::kret_1ae2_22f: 	goto ret_1ae2_22f;
        case m2c::kret_1ae2_308: 	goto ret_1ae2_308;
        case m2c::kret_1ae2_681: 	goto ret_1ae2_681;
        case m2c::kret_1ae2_6c3: 	goto ret_1ae2_6c3;
        case m2c::kret_1ae2_730: 	goto ret_1ae2_730;
        case m2c::kret_1ae2_778: 	goto ret_1ae2_778;
        case m2c::kret_1ae2_7c2: 	goto ret_1ae2_7c2;
        case m2c::kret_1ae2_7dc: 	goto ret_1ae2_7dc;
        case m2c::kret_1ae2_8a6: 	goto ret_1ae2_8a6;
        case m2c::kret_1ae2_8c9: 	goto ret_1ae2_8c9;
        case m2c::kret_1ae2_8f3: 	goto ret_1ae2_8f3;
        case m2c::kret_1ae2_8fc: 	goto ret_1ae2_8fc;
        case m2c::kret_1ae2_9f0: 	goto ret_1ae2_9f0;
        case m2c::kret_1ae2_a14: 	goto ret_1ae2_a14;
        case m2c::kret_1ae2_ae3: 	goto ret_1ae2_ae3;
        case m2c::kret_1ae2_b0d: 	goto ret_1ae2_b0d;
        case m2c::kret_1ae2_b32: 	goto ret_1ae2_b32;
        case m2c::kret_1ae2_b5d: 	goto ret_1ae2_b5d;
        case m2c::kret_1ae2_da8: 	goto ret_1ae2_da8;
        case m2c::kret_1ae2_ed2: 	goto ret_1ae2_ed2;
        case m2c::kret_1ae2_f43: 	goto ret_1ae2_f43;
        case m2c::kret_1ae2_f7c: 	goto ret_1ae2_f7c;
        case m2c::kseg036_proc: 	goto seg036_proc;
        case m2c::kstart: 	goto start;
        case m2c::ksub_294de: 	goto sub_294de;
        case m2c::ksub_295a2: 	goto sub_295a2;
        case m2c::ksub_29600: 	goto sub_29600;
        case m2c::ksub_2962d: 	goto sub_2962d;
        case m2c::ksub_29640: 	goto sub_29640;
        case m2c::ksub_29734: 	goto sub_29734;
        case m2c::ksub_29926: 	goto sub_29926;
        case m2c::ksub_29a6c: 	goto sub_29a6c;
        case m2c::ksub_29ac0: 	goto sub_29ac0;
        case m2c::ksub_29b2e: 	goto sub_29b2e;
        case m2c::ksub_29b46: 	goto sub_29b46;
        case m2c::ksub_29ba4: 	goto sub_29ba4;
        case m2c::ksub_29bc4: 	goto sub_29bc4;
        case m2c::ksub_29bf2: 	goto sub_29bf2;
        case m2c::ksub_29d98: 	goto sub_29d98;
        case m2c::ksub_29dcc: 	goto sub_29dcc;
        case m2c::ksub_29e76: 	goto sub_29e76;
        case m2c::ksub_29ee2: 	goto sub_29ee2;
        case m2c::ksub_29f0c: 	goto sub_29f0c;
        case m2c::ksub_29f88: 	goto sub_29f88;
        case m2c::ksub_2a04a: 	goto sub_2a04a;
        case m2c::ksub_2a1d8: 	goto sub_2a1d8;
        case m2c::ksub_2a342: 	goto sub_2a342;
        case m2c::ksub_2a39c: 	goto sub_2a39c;
        case m2c::ksub_2a522: 	goto sub_2a522;
        case m2c::ksub_2a5a4: 	goto sub_2a5a4;
        case m2c::ksub_2a5ff: 	goto sub_2a5ff;
        case m2c::ksub_2a6e2: 	goto sub_2a6e2;
        case m2c::ksub_2a71c: 	goto sub_2a71c;
        case m2c::ksub_2a73e: 	goto sub_2a73e;
        case m2c::ksub_2a7ce: 	goto sub_2a7ce;
        case m2c::ksub_2a824: 	goto sub_2a824;
        case m2c::ksub_2a864: 	goto sub_2a864;
        case m2c::ksub_2a892: 	goto sub_2a892;
        case m2c::ksub_2a908: 	goto sub_2a908;
        case m2c::ksub_2a936: 	goto sub_2a936;
        case m2c::ksub_2a93c: 	goto sub_2a93c;
        case m2c::ksub_2abe5: 	goto sub_2abe5;
        case m2c::ksub_2abf6: 	goto sub_2abf6;
        case m2c::ksub_2ac0a: 	goto sub_2ac0a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

