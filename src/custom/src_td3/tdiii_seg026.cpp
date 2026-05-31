/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool _group16(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group16:
    _begin:
sub_2785b:
	// 44895 
#undef arg_2
#define arg_2 6
	// 44898 arg_2           = word ptr  6 ;~ 1927:000B
#undef arg_4
#define arg_4 8
	// 44899 arg_4           = word ptr  8 ;~ 1927:000B
#undef arg_6
#define arg_6 0x0A
	// 44900 arg_6           = word ptr  0Ah ;~ 1927:000B
#undef arg_8
#define arg_8 0x0C
	// 44901 arg_8           = word ptr  0Ch ;~ 1927:000B
ret_1927_b:
	// 7650 
cs=0x1927;eip=0x00000b; 	X(PUSH(bp));	// 44903 push    bp ;~ 1927:000B
cs=0x1927;eip=0x00000c; 	T(MOV(bp, sp));	// 44904 mov     bp, sp ;~ 1927:000C
cs=0x1927;eip=0x00000e; 	X(PUSH(di));	// 44905 push    di ;~ 1927:000E
cs=0x1927;eip=0x00000f; 	X(PUSH(si));	// 44906 push    si ;~ 1927:000F
cs=0x1927;eip=0x000010; 	T(CLD);	// 44907 cld ;~ 1927:0010
cs=0x1927;eip=0x000011; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_2))));	// 44908 mov     di, [bp+arg_2] ;~ 1927:0011
cs=0x1927;eip=0x000014; 	X(MOV(word_37bb5, di));	// 44909 mov     word_37BB5, di ;~ 1927:0014
cs=0x1927;eip=0x000018; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 44910 mov     ax, [bp+arg_4] ;~ 1927:0018
cs=0x1927;eip=0x00001b; 	X(MOV(word_37bb1, ax));	// 44911 mov     word_37BB1, ax ;~ 1927:001B
cs=0x1927;eip=0x00001e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 44912 mov     ax, [bp+arg_6] ;~ 1927:001E
cs=0x1927;eip=0x000021; 	X(MOV(word_37bb7, ax));	// 44913 mov     word_37BB7, ax ;~ 1927:0021
cs=0x1927;eip=0x000024; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_8))));	// 44914 mov     si, [bp+arg_8] ;~ 1927:0024
cs=0x1927;eip=0x000027; 	T(MOV(ax, word_37bc8));	// 44915 mov     ax, word_37BC8 ;~ 1927:0027
cs=0x1927;eip=0x00002a; 	T(MOV(es, ax));	// 44916 mov     es, ax ;~ 1927:002A
cs=0x1927;eip=0x00002c; 	T(bx = offset(dseg,a3creativemusic)+0x23);	// 44918 lea     bx, a3CreativeMusic+23h ; ")" ;~ 1927:002C
cs=0x1927;eip=0x000030; 	T(ADD(bx, word_37b84));	// 44919 add     bx, word_37B84 ;~ 1927:0030
cs=0x1927;eip=0x000034; __disp=*(dw*)(raddr(cs,bx));
	R(JMP(__dispatch_call));	// 44920 jmp     word ptr cs:[bx] ;~ 1927:0034
seg026_proc:
	// 44925 
loc_27887:
	// 7651 
cs=0x1927;eip=0x000037; 	T(MOV(bx, di));	// 44926 mov     bx, di ;~ 1927:0037
cs=0x1927;eip=0x000039; 	T(MOV(cx, si));	// 44927 mov     cx, si ;~ 1927:0039
cs=0x1927;eip=0x00003b; 	T(MOV(ax, word_38044));	// 44928 mov     ax, word_38044 ;~ 1927:003B
cs=0x1927;eip=0x00003e; 	T(MUL1_2(cx));	// 44929 mul     cx ;~ 1927:003E
cs=0x1927;eip=0x000040; 	T(ADD(di, ax));	// 44930 add     di, ax ;~ 1927:0040
cs=0x1927;eip=0x000042; 	T(SHL(di, 1));	// 44931 shl     di, 1 ;~ 1927:0042
cs=0x1927;eip=0x000044; 	T(INC(cx));	// 44932 inc     cx ;~ 1927:0044
cs=0x1927;eip=0x000045; 	T(SUB(cx, word_37bb7));	// 44933 sub     cx, word_37BB7 ;~ 1927:0045
cs=0x1927;eip=0x000049; 	T(MOV(dx, word_37bb1));	// 44934 mov     dx, word_37BB1 ;~ 1927:0049
cs=0x1927;eip=0x00004d; 	T(INC(dx));	// 44935 inc     dx ;~ 1927:004D
cs=0x1927;eip=0x00004e; 	T(SUB(dx, bx));	// 44936 sub     dx, bx ;~ 1927:004E
cs=0x1927;eip=0x000050; 	T(MOV(al, 0x0DB));	// 44937 mov     al, 0DBh ; 'Û' ;~ 1927:0050
cs=0x1927;eip=0x000052; 	T(MOV(ah, byte_37b81));	// 44938 mov     ah, byte_37B81 ;~ 1927:0052
cs=0x1927;eip=0x000056; 	T(MOV(bx, word_38044));	// 44939 mov     bx, word_38044 ;~ 1927:0056
cs=0x1927;eip=0x00005a; 	T(SHL(bx, 1));	// 44940 shl     bx, 1 ;~ 1927:005A
cs=0x1927;eip=0x00005c; 	T(ADD(bx, dx));	// 44941 add     bx, dx ;~ 1927:005C
cs=0x1927;eip=0x00005e; 	T(ADD(bx, dx));	// 44942 add     bx, dx ;~ 1927:005E
loc_278b0:
	// 7652 
cs=0x1927;eip=0x000060; 	T(MOV(si, cx));	// 44945 mov     si, cx ;~ 1927:0060
cs=0x1927;eip=0x000062; 	T(MOV(cx, dx));	// 44946 mov     cx, dx ;~ 1927:0062
	// 44947 rep stosw ;~ 1927:0064
cs=0x1927;eip=0x000064; 	X(	REP STOSW);	// 44947 rep stosw ;~ 1927:0064
cs=0x1927;eip=0x000066; 	T(MOV(cx, si));	// 44948 mov     cx, si ;~ 1927:0066
cs=0x1927;eip=0x000068; 	T(SUB(di, bx));	// 44949 sub     di, bx ;~ 1927:0068
cs=0x1927;eip=0x00006a; 	R(LOOP(loc_278b0));	// 44950 loop    loc_278B0 ;~ 1927:006A
cs=0x1927;eip=0x00006c; 	R(JMP(loc_27bb9));	// 44951 jmp     loc_27BB9 ;~ 1927:006C
loc_278bf:
	// 7653 
cs=0x1927;eip=0x00006f; 	T(MOV(ax, si));	// 44955 mov     ax, si ;~ 1927:006F
cs=0x1927;eip=0x000071; 	T(MOV(bx, di));	// 44956 mov     bx, di ;~ 1927:0071
cs=0x1927;eip=0x000073; 	T(MOV(cx, bx));	// 44957 mov     cx, bx ;~ 1927:0073
cs=0x1927;eip=0x000075; 	T(XCHG(ah, al));	// 44958 xchg    ah, al ;~ 1927:0075
cs=0x1927;eip=0x000077; 	T(SHR(ax, 1));	// 44959 shr     ax, 1 ;~ 1927:0077
cs=0x1927;eip=0x000079; 	T(ADD(bh, al));	// 44960 add     bh, al ;~ 1927:0079
cs=0x1927;eip=0x00007b; 	T(XOR(al, al));	// 44961 xor     al, al ;~ 1927:007B
cs=0x1927;eip=0x00007d; 	T(ADD(bx, ax));	// 44962 add     bx, ax ;~ 1927:007D
cs=0x1927;eip=0x00007f; 	T(SHR(ax, 1));	// 44963 shr     ax, 1 ;~ 1927:007F
cs=0x1927;eip=0x000081; 	T(SHR(ax, 1));	// 44964 shr     ax, 1 ;~ 1927:0081
cs=0x1927;eip=0x000083; 	T(ADD(bx, ax));	// 44965 add     bx, ax ;~ 1927:0083
cs=0x1927;eip=0x000085; 	T(SHR(bx, 1));	// 44966 shr     bx, 1 ;~ 1927:0085
cs=0x1927;eip=0x000087; 	T(SHR(bx, 1));	// 44967 shr     bx, 1 ;~ 1927:0087
cs=0x1927;eip=0x000089; 	T(XCHG(bx, di));	// 44968 xchg    bx, di ;~ 1927:0089
cs=0x1927;eip=0x00008b; 	T(INC(si));	// 44969 inc     si ;~ 1927:008B
cs=0x1927;eip=0x00008c; 	T(SUB(si, word_37bb7));	// 44970 sub     si, word_37BB7 ;~ 1927:008C
cs=0x1927;eip=0x000090; 	T(MOV(dx, word_37bb1));	// 44971 mov     dx, word_37BB1 ;~ 1927:0090
cs=0x1927;eip=0x000094; 	T(SHR(dx, 1));	// 44972 shr     dx, 1 ;~ 1927:0094
cs=0x1927;eip=0x000096; 	T(SHR(dx, 1));	// 44973 shr     dx, 1 ;~ 1927:0096
cs=0x1927;eip=0x000098; 	T(SHR(bx, 1));	// 44974 shr     bx, 1 ;~ 1927:0098
cs=0x1927;eip=0x00009a; 	T(SHR(bx, 1));	// 44975 shr     bx, 1 ;~ 1927:009A
cs=0x1927;eip=0x00009c; 	T(DEC(dx));	// 44976 dec     dx ;~ 1927:009C
cs=0x1927;eip=0x00009d; 	T(SUB(dx, bx));	// 44977 sub     dx, bx ;~ 1927:009D
cs=0x1927;eip=0x00009f; 	T(MOV(bx, 0x0FFFF));	// 44978 mov     bx, 0FFFFh ;~ 1927:009F
cs=0x1927;eip=0x0000a2; 	T(AND(cl, 3));	// 44979 and     cl, 3 ;~ 1927:00A2
cs=0x1927;eip=0x0000a5; 	T(SHL(cl, 1));	// 44980 shl     cl, 1 ;~ 1927:00A5
cs=0x1927;eip=0x0000a7; 	T(SHR(bh, cl));	// 44981 shr     bh, cl ;~ 1927:00A7
cs=0x1927;eip=0x0000a9; 	T(MOV(cx, word_37bb1));	// 44982 mov     cx, word_37BB1 ;~ 1927:00A9
cs=0x1927;eip=0x0000ad; 	T(AND(cl, 3));	// 44983 and     cl, 3 ;~ 1927:00AD
cs=0x1927;eip=0x0000b0; 	T(INC(cl));	// 44984 inc     cl ;~ 1927:00B0
cs=0x1927;eip=0x0000b2; 	T(SHL(cl, 1));	// 44985 shl     cl, 1 ;~ 1927:00B2
cs=0x1927;eip=0x0000b4; 	T(SHR(bl, cl));	// 44986 shr     bl, cl ;~ 1927:00B4
cs=0x1927;eip=0x0000b6; 	T(NOT(bl));	// 44987 not     bl ;~ 1927:00B6
cs=0x1927;eip=0x0000b8; 	T(MOV(cl, byte_37b81));	// 44988 mov     cl, byte_37B81 ;~ 1927:00B8
cs=0x1927;eip=0x0000bc; 	T(MOV(al, cl));	// 44989 mov     al, cl ;~ 1927:00BC
cs=0x1927;eip=0x0000be; 	T(SHL(al, 1));	// 44990 shl     al, 1 ;~ 1927:00BE
cs=0x1927;eip=0x0000c0; 	T(SHL(al, 1));	// 44991 shl     al, 1 ;~ 1927:00C0
cs=0x1927;eip=0x0000c2; 	T(OR(al, cl));	// 44992 or      al, cl ;~ 1927:00C2
cs=0x1927;eip=0x0000c4; 	T(MOV(ah, al));	// 44993 mov     ah, al ;~ 1927:00C4
cs=0x1927;eip=0x0000c6; 	T(MOV(cl, 4));	// 44994 mov     cl, 4 ;~ 1927:00C6
cs=0x1927;eip=0x0000c8; 	T(SHL(ah, cl));	// 44995 shl     ah, cl ;~ 1927:00C8
cs=0x1927;eip=0x0000ca; 	T(OR(ah, al));	// 44996 or      ah, al ;~ 1927:00CA
cs=0x1927;eip=0x0000cc; 	R(JMP(loc_27a20));	// 44997 jmp     loc_27A20 ;~ 1927:00CC
loc_2791f:
	// 7654 
cs=0x1927;eip=0x0000cf; 	T(MOV(ax, si));	// 45001 mov     ax, si ;~ 1927:00CF
cs=0x1927;eip=0x0000d1; 	T(MOV(bx, di));	// 45002 mov     bx, di ;~ 1927:00D1
cs=0x1927;eip=0x0000d3; 	T(MOV(cx, bx));	// 45003 mov     cx, bx ;~ 1927:00D3
cs=0x1927;eip=0x0000d5; 	T(XCHG(ah, al));	// 45004 xchg    ah, al ;~ 1927:00D5
cs=0x1927;eip=0x0000d7; 	T(SHR(ax, 1));	// 45005 shr     ax, 1 ;~ 1927:00D7
cs=0x1927;eip=0x0000d9; 	T(SHR(bx, 1));	// 45006 shr     bx, 1 ;~ 1927:00D9
cs=0x1927;eip=0x0000db; 	T(ADD(bh, al));	// 45007 add     bh, al ;~ 1927:00DB
cs=0x1927;eip=0x0000dd; 	T(XOR(al, al));	// 45008 xor     al, al ;~ 1927:00DD
cs=0x1927;eip=0x0000df; 	T(ADD(bx, ax));	// 45009 add     bx, ax ;~ 1927:00DF
cs=0x1927;eip=0x0000e1; 	T(SHR(ax, 1));	// 45010 shr     ax, 1 ;~ 1927:00E1
cs=0x1927;eip=0x0000e3; 	T(SHR(ax, 1));	// 45011 shr     ax, 1 ;~ 1927:00E3
cs=0x1927;eip=0x0000e5; 	T(ADD(bx, ax));	// 45012 add     bx, ax ;~ 1927:00E5
cs=0x1927;eip=0x0000e7; 	T(SHR(bx, 1));	// 45013 shr     bx, 1 ;~ 1927:00E7
cs=0x1927;eip=0x0000e9; 	T(SHR(bx, 1));	// 45014 shr     bx, 1 ;~ 1927:00E9
loc_2793b:
	// 7655 
cs=0x1927;eip=0x0000eb; 	T(XCHG(bx, di));	// 45017 xchg    bx, di ;~ 1927:00EB
cs=0x1927;eip=0x0000ed; 	T(INC(si));	// 45018 inc     si ;~ 1927:00ED
cs=0x1927;eip=0x0000ee; 	T(SUB(si, word_37bb7));	// 45019 sub     si, word_37BB7 ;~ 1927:00EE
cs=0x1927;eip=0x0000f2; 	T(MOV(dx, word_37bb1));	// 45020 mov     dx, word_37BB1 ;~ 1927:00F2
cs=0x1927;eip=0x0000f6; 	T(SHR(dx, 1));	// 45021 shr     dx, 1 ;~ 1927:00F6
cs=0x1927;eip=0x0000f8; 	T(SHR(dx, 1));	// 45022 shr     dx, 1 ;~ 1927:00F8
cs=0x1927;eip=0x0000fa; 	T(SHR(dx, 1));	// 45023 shr     dx, 1 ;~ 1927:00FA
cs=0x1927;eip=0x0000fc; 	T(SHR(bx, 1));	// 45024 shr     bx, 1 ;~ 1927:00FC
cs=0x1927;eip=0x0000fe; 	T(SHR(bx, 1));	// 45025 shr     bx, 1 ;~ 1927:00FE
cs=0x1927;eip=0x000100; 	T(SHR(bx, 1));	// 45026 shr     bx, 1 ;~ 1927:0100
cs=0x1927;eip=0x000102; 	T(DEC(dx));	// 45027 dec     dx ;~ 1927:0102
cs=0x1927;eip=0x000103; 	T(SUB(dx, bx));	// 45028 sub     dx, bx ;~ 1927:0103
cs=0x1927;eip=0x000105; 	T(MOV(bx, 0x0FFFF));	// 45029 mov     bx, 0FFFFh ;~ 1927:0105
cs=0x1927;eip=0x000108; 	T(AND(cl, 7));	// 45030 and     cl, 7 ;~ 1927:0108
cs=0x1927;eip=0x00010b; 	T(SHR(bh, cl));	// 45031 shr     bh, cl ;~ 1927:010B
cs=0x1927;eip=0x00010d; 	T(MOV(cx, word_37bb1));	// 45032 mov     cx, word_37BB1 ;~ 1927:010D
cs=0x1927;eip=0x000111; 	T(AND(cl, 7));	// 45033 and     cl, 7 ;~ 1927:0111
cs=0x1927;eip=0x000114; 	T(INC(cl));	// 45034 inc     cl ;~ 1927:0114
cs=0x1927;eip=0x000116; 	T(SHR(bl, cl));	// 45035 shr     bl, cl ;~ 1927:0116
cs=0x1927;eip=0x000118; 	T(NOT(bl));	// 45036 not     bl ;~ 1927:0118
cs=0x1927;eip=0x00011a; 	T(MOV(ah, byte_37b81));	// 45037 mov     ah, byte_37B81 ;~ 1927:011A
cs=0x1927;eip=0x00011e; 	T(OR(ah, ah));	// 45038 or      ah, ah ;~ 1927:011E
cs=0x1927;eip=0x000120; 	R(JZ(loc_27974));	// 45039 jz      short loc_27974 ;~ 1927:0120
cs=0x1927;eip=0x000122; 	T(MOV(ah, 0x0FF));	// 45040 mov     ah, 0FFh ;~ 1927:0122
loc_27974:
	// 7656 
cs=0x1927;eip=0x000124; 	R(JMP(loc_27a20));	// 45043 jmp     loc_27A20 ;~ 1927:0124
loc_27977:
	// 7657 
cs=0x1927;eip=0x000127; 	T(MOV(ax, si));	// 45047 mov     ax, si ;~ 1927:0127
cs=0x1927;eip=0x000129; 	T(MOV(bx, di));	// 45048 mov     bx, di ;~ 1927:0129
cs=0x1927;eip=0x00012b; 	T(MOV(cx, bx));	// 45049 mov     cx, bx ;~ 1927:012B
cs=0x1927;eip=0x00012d; 	T(SHL(bx, 1));	// 45050 shl     bx, 1 ;~ 1927:012D
cs=0x1927;eip=0x00012f; 	T(SHL(bx, 1));	// 45051 shl     bx, 1 ;~ 1927:012F
cs=0x1927;eip=0x000131; 	T(SHR(ax, 1));	// 45052 shr     ax, 1 ;~ 1927:0131
cs=0x1927;eip=0x000133; 	T(RCR(bx, 1));	// 45053 rcr     bx, 1 ;~ 1927:0133
cs=0x1927;eip=0x000135; 	T(SHR(ax, 1));	// 45054 shr     ax, 1 ;~ 1927:0135
cs=0x1927;eip=0x000137; 	T(RCR(bx, 1));	// 45055 rcr     bx, 1 ;~ 1927:0137
cs=0x1927;eip=0x000139; 	T(SHR(bx, 1));	// 45056 shr     bx, 1 ;~ 1927:0139
cs=0x1927;eip=0x00013b; 	T(XCHG(ah, al));	// 45057 xchg    ah, al ;~ 1927:013B
cs=0x1927;eip=0x00013d; 	T(SHR(ax, 1));	// 45058 shr     ax, 1 ;~ 1927:013D
cs=0x1927;eip=0x00013f; 	T(ADD(bx, ax));	// 45059 add     bx, ax ;~ 1927:013F
cs=0x1927;eip=0x000141; 	T(SHR(ax, 1));	// 45060 shr     ax, 1 ;~ 1927:0141
cs=0x1927;eip=0x000143; 	T(SHR(ax, 1));	// 45061 shr     ax, 1 ;~ 1927:0143
cs=0x1927;eip=0x000145; 	T(ADD(bx, ax));	// 45062 add     bx, ax ;~ 1927:0145
cs=0x1927;eip=0x000147; 	T(XCHG(bx, di));	// 45063 xchg    bx, di ;~ 1927:0147
cs=0x1927;eip=0x000149; 	T(INC(si));	// 45064 inc     si ;~ 1927:0149
cs=0x1927;eip=0x00014a; 	T(SUB(si, word_37bb7));	// 45065 sub     si, word_37BB7 ;~ 1927:014A
cs=0x1927;eip=0x00014e; 	T(MOV(dx, word_37bb1));	// 45066 mov     dx, word_37BB1 ;~ 1927:014E
cs=0x1927;eip=0x000152; 	T(SHR(dx, 1));	// 45067 shr     dx, 1 ;~ 1927:0152
cs=0x1927;eip=0x000154; 	T(SHR(bx, 1));	// 45068 shr     bx, 1 ;~ 1927:0154
cs=0x1927;eip=0x000156; 	T(DEC(dx));	// 45069 dec     dx ;~ 1927:0156
cs=0x1927;eip=0x000157; 	T(SUB(dx, bx));	// 45070 sub     dx, bx ;~ 1927:0157
cs=0x1927;eip=0x000159; 	T(MOV(bx, 0x0FFFF));	// 45071 mov     bx, 0FFFFh ;~ 1927:0159
cs=0x1927;eip=0x00015c; 	T(AND(cl, 1));	// 45072 and     cl, 1 ;~ 1927:015C
cs=0x1927;eip=0x00015f; 	T(SHL(cl, 1));	// 45073 shl     cl, 1 ;~ 1927:015F
cs=0x1927;eip=0x000161; 	T(SHL(cl, 1));	// 45074 shl     cl, 1 ;~ 1927:0161
cs=0x1927;eip=0x000163; 	T(SHR(bh, cl));	// 45075 shr     bh, cl ;~ 1927:0163
cs=0x1927;eip=0x000165; 	T(MOV(cx, word_37bb1));	// 45076 mov     cx, word_37BB1 ;~ 1927:0165
cs=0x1927;eip=0x000169; 	T(AND(cl, 1));	// 45077 and     cl, 1 ;~ 1927:0169
cs=0x1927;eip=0x00016c; 	T(INC(cl));	// 45078 inc     cl ;~ 1927:016C
cs=0x1927;eip=0x00016e; 	T(SHL(cl, 1));	// 45079 shl     cl, 1 ;~ 1927:016E
cs=0x1927;eip=0x000170; 	T(SHL(cl, 1));	// 45080 shl     cl, 1 ;~ 1927:0170
cs=0x1927;eip=0x000172; 	T(SHR(bl, cl));	// 45081 shr     bl, cl ;~ 1927:0172
cs=0x1927;eip=0x000174; 	T(NOT(bl));	// 45082 not     bl ;~ 1927:0174
cs=0x1927;eip=0x000176; 	T(MOV(cl, byte_37b81));	// 45083 mov     cl, byte_37B81 ;~ 1927:0176
cs=0x1927;eip=0x00017a; 	T(MOV(al, cl));	// 45084 mov     al, cl ;~ 1927:017A
cs=0x1927;eip=0x00017c; 	T(MOV(ah, cl));	// 45085 mov     ah, cl ;~ 1927:017C
cs=0x1927;eip=0x00017e; 	T(MOV(cl, 4));	// 45086 mov     cl, 4 ;~ 1927:017E
cs=0x1927;eip=0x000180; 	T(SHL(ah, cl));	// 45087 shl     ah, cl ;~ 1927:0180
cs=0x1927;eip=0x000182; 	T(OR(ah, al));	// 45088 or      ah, al ;~ 1927:0182
cs=0x1927;eip=0x000184; 	R(JMP(loc_27a20));	// 45089 jmp     short loc_27A20 ;~ 1927:0184
loc_279d6:
	// 7658 
cs=0x1927;eip=0x000186; 	T(SHL(di, 1));	// 45093 shl     di, 1 ;~ 1927:0186
cs=0x1927;eip=0x000188; 	T(ADD(di, 0x28));	// 45094 add     di, 28h ; '(' ;~ 1927:0188
cs=0x1927;eip=0x00018b; 	X(MOV(word_37bb5, di));	// 45095 mov     word_37BB5, di ;~ 1927:018B
cs=0x1927;eip=0x00018f; 	T(MOV(ax, word_37bb1));	// 45096 mov     ax, word_37BB1 ;~ 1927:018F
cs=0x1927;eip=0x000192; 	T(SHL(ax, 1));	// 45097 shl     ax, 1 ;~ 1927:0192
cs=0x1927;eip=0x000194; 	T(ADD(ax, 0x29));	// 45098 add     ax, 29h ; ')' ;~ 1927:0194
cs=0x1927;eip=0x000197; 	X(MOV(word_37bb1, ax));	// 45099 mov     word_37BB1, ax ;~ 1927:0197
cs=0x1927;eip=0x00019a; 	T(MOV(ax, word_37bb7));	// 45100 mov     ax, word_37BB7 ;~ 1927:019A
cs=0x1927;eip=0x00019d; 	T(MOV(cx, ax));	// 45101 mov     cx, ax ;~ 1927:019D
cs=0x1927;eip=0x00019f; 	T(SAR(ax, 1));	// 45102 sar     ax, 1 ;~ 1927:019F
cs=0x1927;eip=0x0001a1; 	T(ADD(ax, cx));	// 45103 add     ax, cx ;~ 1927:01A1
cs=0x1927;eip=0x0001a3; 	T(ADD(ax, 0x18));	// 45104 add     ax, 18h ;~ 1927:01A3
cs=0x1927;eip=0x0001a6; 	X(MOV(word_37bb7, ax));	// 45105 mov     word_37BB7, ax ;~ 1927:01A6
cs=0x1927;eip=0x0001a9; 	T(MOV(ax, si));	// 45106 mov     ax, si ;~ 1927:01A9
cs=0x1927;eip=0x0001ab; 	T(SAR(ax, 1));	// 45107 sar     ax, 1 ;~ 1927:01AB
cs=0x1927;eip=0x0001ad; 	T(ADD(ax, si));	// 45108 add     ax, si ;~ 1927:01AD
cs=0x1927;eip=0x0001af; 	T(ADD(ax, 0x18));	// 45109 add     ax, 18h ;~ 1927:01AF
cs=0x1927;eip=0x0001b2; 	T(AND(si, 1));	// 45110 and     si, 1 ;~ 1927:01B2
cs=0x1927;eip=0x0001b5; 	T(ADD(si, ax));	// 45111 add     si, ax ;~ 1927:01B5
loc_27a07:
	// 7659 
cs=0x1927;eip=0x0001b7; 	T(MOV(ax, si));	// 45114 mov     ax, si ;~ 1927:01B7
cs=0x1927;eip=0x0001b9; 	T(MOV(bx, di));	// 45115 mov     bx, di ;~ 1927:01B9
cs=0x1927;eip=0x0001bb; 	T(MOV(cx, bx));	// 45116 mov     cx, bx ;~ 1927:01BB
cs=0x1927;eip=0x0001bd; 	T(SHR(ax, 1));	// 45117 shr     ax, 1 ;~ 1927:01BD
cs=0x1927;eip=0x0001bf; 	T(RCR(bx, 1));	// 45118 rcr     bx, 1 ;~ 1927:01BF
cs=0x1927;eip=0x0001c1; 	T(SHR(ax, 1));	// 45119 shr     ax, 1 ;~ 1927:01C1
cs=0x1927;eip=0x0001c3; 	T(RCR(bx, 1));	// 45120 rcr     bx, 1 ;~ 1927:01C3
cs=0x1927;eip=0x0001c5; 	T(SHR(bx, 1));	// 45121 shr     bx, 1 ;~ 1927:01C5
cs=0x1927;eip=0x0001c7; 	T(MOV(ah, 0x5A));	// 45122 mov     ah, 5Ah ; 'Z' ;~ 1927:01C7
cs=0x1927;eip=0x0001c9; 	T(MUL1_1(ah));	// 45123 mul     ah ;~ 1927:01C9
cs=0x1927;eip=0x0001cb; 	T(ADD(bx, ax));	// 45124 add     bx, ax ;~ 1927:01CB
cs=0x1927;eip=0x0001cd; 	R(JMP(loc_2793b));	// 45125 jmp     loc_2793B ;~ 1927:01CD
loc_27a20:
	// 7660 
cs=0x1927;eip=0x0001d0; 	T(MOV(cx, si));	// 45130 mov     cx, si ;~ 1927:01D0
cs=0x1927;eip=0x0001d2; 	T(OR(dx, dx));	// 45131 or      dx, dx ;~ 1927:01D2
cs=0x1927;eip=0x0001d4; 	R(JGE(loc_27a2c));	// 45132 jge     short loc_27A2C ;~ 1927:01D4
cs=0x1927;eip=0x0001d6; 	T(AND(bh, bl));	// 45133 and     bh, bl ;~ 1927:01D6
cs=0x1927;eip=0x0001d8; 	T(XOR(bl, bl));	// 45134 xor     bl, bl ;~ 1927:01D8
cs=0x1927;eip=0x0001da; 	T(XOR(dx, dx));	// 45135 xor     dx, dx ;~ 1927:01DA
loc_27a2c:
	// 7661 
cs=0x1927;eip=0x0001dc; 	T(MOV(si, ax));	// 45139 mov     si, ax ;~ 1927:01DC
cs=0x1927;eip=0x0001de; 	T(MOV(al, *(raddr(es,di))));	// 45140 mov     al, es:[di] ;~ 1927:01DE
cs=0x1927;eip=0x0001e1; 	T(AND(ah, bh));	// 45141 and     ah, bh ;~ 1927:01E1
cs=0x1927;eip=0x0001e3; 	T(NOT(bh));	// 45142 not     bh ;~ 1927:01E3
cs=0x1927;eip=0x0001e5; 	T(AND(al, bh));	// 45143 and     al, bh ;~ 1927:01E5
cs=0x1927;eip=0x0001e7; 	T(NOT(bh));	// 45144 not     bh ;~ 1927:01E7
cs=0x1927;eip=0x0001e9; 	T(OR(al, ah));	// 45145 or      al, ah ;~ 1927:01E9
cs=0x1927;eip=0x0001eb; 	X(STOSB);	// 45146 stosb ;~ 1927:01EB
cs=0x1927;eip=0x0001ec; 	T(MOV(ax, si));	// 45147 mov     ax, si ;~ 1927:01EC
cs=0x1927;eip=0x0001ee; 	T(OR(dx, dx));	// 45148 or      dx, dx ;~ 1927:01EE
cs=0x1927;eip=0x0001f0; 	R(JZ(loc_27a4e));	// 45149 jz      short loc_27A4E ;~ 1927:01F0
cs=0x1927;eip=0x0001f2; 	T(XCHG(al, ah));	// 45150 xchg    al, ah ;~ 1927:01F2
cs=0x1927;eip=0x0001f4; 	T(MOV(si, cx));	// 45151 mov     si, cx ;~ 1927:01F4
cs=0x1927;eip=0x0001f6; 	T(MOV(cx, dx));	// 45152 mov     cx, dx ;~ 1927:01F6
	// 45153 rep stosb ;~ 1927:01F8
cs=0x1927;eip=0x0001f8; 	X(	REP STOSB);	// 45153 rep stosb ;~ 1927:01F8
cs=0x1927;eip=0x0001fa; 	T(MOV(cx, si));	// 45154 mov     cx, si ;~ 1927:01FA
cs=0x1927;eip=0x0001fc; 	T(XCHG(al, ah));	// 45155 xchg    al, ah ;~ 1927:01FC
loc_27a4e:
	// 7662 
cs=0x1927;eip=0x0001fe; 	T(MOV(si, ax));	// 45158 mov     si, ax ;~ 1927:01FE
cs=0x1927;eip=0x000200; 	T(MOV(al, *(raddr(es,di))));	// 45159 mov     al, es:[di] ;~ 1927:0200
cs=0x1927;eip=0x000203; 	T(AND(ah, bl));	// 45160 and     ah, bl ;~ 1927:0203
cs=0x1927;eip=0x000205; 	T(NOT(bl));	// 45161 not     bl ;~ 1927:0205
cs=0x1927;eip=0x000207; 	T(AND(al, bl));	// 45162 and     al, bl ;~ 1927:0207
cs=0x1927;eip=0x000209; 	T(NOT(bl));	// 45163 not     bl ;~ 1927:0209
cs=0x1927;eip=0x00020b; 	T(OR(al, ah));	// 45164 or      al, ah ;~ 1927:020B
cs=0x1927;eip=0x00020d; 	X(MOV(*(raddr(es,di)), al));	// 45165 mov     es:[di], al ;~ 1927:020D
cs=0x1927;eip=0x000210; 	T(MOV(ax, si));	// 45166 mov     ax, si ;~ 1927:0210
cs=0x1927;eip=0x000212; 	T(DEC(di));	// 45167 dec     di ;~ 1927:0212
cs=0x1927;eip=0x000213; 	T(SUB(di, dx));	// 45168 sub     di, dx ;~ 1927:0213
cs=0x1927;eip=0x000215; 	T(TEST(di, 0x0E000));	// 45169 test    di, 0E000h ;~ 1927:0215
cs=0x1927;eip=0x000219; 	R(JZ(loc_27a74));	// 45170 jz      short loc_27A74 ;~ 1927:0219
cs=0x1927;eip=0x00021b; 	T(SUB(di, 0x2000));	// 45171 sub     di, 2000h ;~ 1927:021B
cs=0x1927;eip=0x00021f; 	R(LOOP(loc_27a2c));	// 45172 loop    loc_27A2C ;~ 1927:021F
cs=0x1927;eip=0x000221; 	R(JMP(loc_27bb9));	// 45173 jmp     loc_27BB9 ;~ 1927:0221
loc_27a74:
	// 7663 
cs=0x1927;eip=0x000224; 	T(OR(di, word_37f94));	// 45177 or      di, word_37F94 ;~ 1927:0224
cs=0x1927;eip=0x000228; 	T(SUB(di, word_38018));	// 45178 sub     di, word_38018 ;~ 1927:0228
cs=0x1927;eip=0x00022c; 	R(LOOP(loc_27a2c));	// 45179 loop    loc_27A2C ;~ 1927:022C
cs=0x1927;eip=0x00022e; 	R(JMP(loc_27bb9));	// 45180 jmp     loc_27BB9 ;~ 1927:022E
loc_27a81:
	// 7664 
cs=0x1927;eip=0x000231; 	T(MOV(bx, di));	// 45184 mov     bx, di ;~ 1927:0231
cs=0x1927;eip=0x000233; 	T(MOV(cx, bx));	// 45185 mov     cx, bx ;~ 1927:0233
cs=0x1927;eip=0x000235; 	T(SHR(di, 1));	// 45186 shr     di, 1 ;~ 1927:0235
cs=0x1927;eip=0x000237; 	T(SHR(di, 1));	// 45187 shr     di, 1 ;~ 1927:0237
cs=0x1927;eip=0x000239; 	T(SHR(di, 1));	// 45188 shr     di, 1 ;~ 1927:0239
cs=0x1927;eip=0x00023b; 	T(MOV(ax, word_38018));	// 45189 mov     ax, word_38018 ;~ 1927:023B
cs=0x1927;eip=0x00023e; 	T(MUL1_2(si));	// 45190 mul     si ;~ 1927:023E
cs=0x1927;eip=0x000240; 	T(ADD(di, ax));	// 45191 add     di, ax ;~ 1927:0240
cs=0x1927;eip=0x000242; 	T(INC(si));	// 45192 inc     si ;~ 1927:0242
cs=0x1927;eip=0x000243; 	T(SUB(si, word_37bb7));	// 45193 sub     si, word_37BB7 ;~ 1927:0243
cs=0x1927;eip=0x000247; 	T(MOV(dx, word_37bb1));	// 45194 mov     dx, word_37BB1 ;~ 1927:0247
cs=0x1927;eip=0x00024b; 	T(SHR(dx, 1));	// 45195 shr     dx, 1 ;~ 1927:024B
cs=0x1927;eip=0x00024d; 	T(SHR(dx, 1));	// 45196 shr     dx, 1 ;~ 1927:024D
cs=0x1927;eip=0x00024f; 	T(SHR(dx, 1));	// 45197 shr     dx, 1 ;~ 1927:024F
cs=0x1927;eip=0x000251; 	T(SHR(bx, 1));	// 45198 shr     bx, 1 ;~ 1927:0251
cs=0x1927;eip=0x000253; 	T(SHR(bx, 1));	// 45199 shr     bx, 1 ;~ 1927:0253
cs=0x1927;eip=0x000255; 	T(SHR(bx, 1));	// 45200 shr     bx, 1 ;~ 1927:0255
cs=0x1927;eip=0x000257; 	T(DEC(dx));	// 45201 dec     dx ;~ 1927:0257
cs=0x1927;eip=0x000258; 	T(SUB(dx, bx));	// 45202 sub     dx, bx ;~ 1927:0258
cs=0x1927;eip=0x00025a; 	T(MOV(bx, 0x0FFFF));	// 45203 mov     bx, 0FFFFh ;~ 1927:025A
cs=0x1927;eip=0x00025d; 	T(MOV(ah, bh));	// 45204 mov     ah, bh ;~ 1927:025D
cs=0x1927;eip=0x00025f; 	T(AND(cl, 7));	// 45205 and     cl, 7 ;~ 1927:025F
cs=0x1927;eip=0x000262; 	T(SHR(bh, cl));	// 45206 shr     bh, cl ;~ 1927:0262
cs=0x1927;eip=0x000264; 	T(MOV(cx, word_37bb1));	// 45207 mov     cx, word_37BB1 ;~ 1927:0264
cs=0x1927;eip=0x000268; 	T(AND(cl, 7));	// 45208 and     cl, 7 ;~ 1927:0268
cs=0x1927;eip=0x00026b; 	T(INC(cl));	// 45209 inc     cl ;~ 1927:026B
cs=0x1927;eip=0x00026d; 	T(SHR(bl, cl));	// 45210 shr     bl, cl ;~ 1927:026D
cs=0x1927;eip=0x00026f; 	T(NOT(bl));	// 45211 not     bl ;~ 1927:026F
cs=0x1927;eip=0x000271; 	T(MOV(cx, si));	// 45212 mov     cx, si ;~ 1927:0271
cs=0x1927;eip=0x000273; 	T(OR(dx, dx));	// 45213 or      dx, dx ;~ 1927:0273
cs=0x1927;eip=0x000275; 	R(JGE(loc_27acd));	// 45214 jge     short loc_27ACD ;~ 1927:0275
cs=0x1927;eip=0x000277; 	T(AND(bh, bl));	// 45215 and     bh, bl ;~ 1927:0277
cs=0x1927;eip=0x000279; 	T(XOR(bl, bl));	// 45216 xor     bl, bl ;~ 1927:0279
cs=0x1927;eip=0x00027b; 	T(XOR(dx, dx));	// 45217 xor     dx, dx ;~ 1927:027B
loc_27acd:
	// 7665 
cs=0x1927;eip=0x00027d; 	X(PUSH(ax));	// 45221 push    ax ;~ 1927:027D
cs=0x1927;eip=0x00027e; 	T(MOV(al, 8));	// 45222 mov     al, 8 ;~ 1927:027E
cs=0x1927;eip=0x000280; 	T(MOV(ah, bh));	// 45223 mov     ah, bh ;~ 1927:0280
cs=0x1927;eip=0x000282; 	X(PUSH(dx));	// 45224 push    dx ;~ 1927:0282
cs=0x1927;eip=0x000283; 	T(MOV(dx, 0x3CE));	// 45225 mov     dx, 3CEh ;~ 1927:0283
cs=0x1927;eip=0x000286; 	R(OUT(dx, ax));	// 45226 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1927:0286
cs=0x1927;eip=0x000287; 	X(POP(dx));	// 45229 pop     dx ;~ 1927:0287
cs=0x1927;eip=0x000288; 	X(POP(ax));	// 45230 pop     ax ;~ 1927:0288
cs=0x1927;eip=0x000289; 	X(AND(*(raddr(es,di)), bh));	// 45231 and     es:[di], bh ;~ 1927:0289
cs=0x1927;eip=0x00028c; 	T(INC(di));	// 45232 inc     di ;~ 1927:028C
cs=0x1927;eip=0x00028d; 	T(OR(dx, dx));	// 45233 or      dx, dx ;~ 1927:028D
cs=0x1927;eip=0x00028f; 	R(JZ(loc_27af9));	// 45234 jz      short loc_27AF9 ;~ 1927:028F
cs=0x1927;eip=0x000291; 	X(PUSH(ax));	// 45235 push    ax ;~ 1927:0291
cs=0x1927;eip=0x000292; 	T(MOV(al, 8));	// 45236 mov     al, 8 ;~ 1927:0292
cs=0x1927;eip=0x000294; 	T(MOV(ah, ah));	// 45237 mov     ah, ah ;~ 1927:0294
cs=0x1927;eip=0x000296; 	X(PUSH(dx));	// 45238 push    dx ;~ 1927:0296
cs=0x1927;eip=0x000297; 	T(MOV(dx, 0x3CE));	// 45239 mov     dx, 3CEh ;~ 1927:0297
cs=0x1927;eip=0x00029a; 	R(OUT(dx, ax));	// 45240 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1927:029A
cs=0x1927;eip=0x00029b; 	X(POP(dx));	// 45243 pop     dx ;~ 1927:029B
cs=0x1927;eip=0x00029c; 	X(POP(ax));	// 45244 pop     ax ;~ 1927:029C
cs=0x1927;eip=0x00029d; 	T(MOV(si, cx));	// 45245 mov     si, cx ;~ 1927:029D
cs=0x1927;eip=0x00029f; 	T(MOV(cx, dx));	// 45246 mov     cx, dx ;~ 1927:029F
loc_27af1:
	// 7666 
cs=0x1927;eip=0x0002a1; 	X(AND(*(raddr(es,di)), ah));	// 45249 and     es:[di], ah ;~ 1927:02A1
cs=0x1927;eip=0x0002a4; 	T(INC(di));	// 45250 inc     di ;~ 1927:02A4
cs=0x1927;eip=0x0002a5; 	R(LOOP(loc_27af1));	// 45251 loop    loc_27AF1 ;~ 1927:02A5
cs=0x1927;eip=0x0002a7; 	T(MOV(cx, si));	// 45252 mov     cx, si ;~ 1927:02A7
loc_27af9:
	// 7667 
cs=0x1927;eip=0x0002a9; 	X(PUSH(ax));	// 45255 push    ax ;~ 1927:02A9
cs=0x1927;eip=0x0002aa; 	T(MOV(al, 8));	// 45256 mov     al, 8 ;~ 1927:02AA
cs=0x1927;eip=0x0002ac; 	T(MOV(ah, bl));	// 45257 mov     ah, bl ;~ 1927:02AC
cs=0x1927;eip=0x0002ae; 	X(PUSH(dx));	// 45258 push    dx ;~ 1927:02AE
cs=0x1927;eip=0x0002af; 	T(MOV(dx, 0x3CE));	// 45259 mov     dx, 3CEh ;~ 1927:02AF
cs=0x1927;eip=0x0002b2; 	R(OUT(dx, ax));	// 45260 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1927:02B2
cs=0x1927;eip=0x0002b3; 	X(POP(dx));	// 45263 pop     dx ;~ 1927:02B3
cs=0x1927;eip=0x0002b4; 	X(POP(ax));	// 45264 pop     ax ;~ 1927:02B4
cs=0x1927;eip=0x0002b5; 	X(AND(*(raddr(es,di)), bl));	// 45265 and     es:[di], bl ;~ 1927:02B5
cs=0x1927;eip=0x0002b8; 	T(DEC(di));	// 45266 dec     di ;~ 1927:02B8
cs=0x1927;eip=0x0002b9; 	T(SUB(di, dx));	// 45267 sub     di, dx ;~ 1927:02B9
cs=0x1927;eip=0x0002bb; 	T(SUB(di, word_38018));	// 45268 sub     di, word_38018 ;~ 1927:02BB
cs=0x1927;eip=0x0002bf; 	R(LOOP(loc_27acd));	// 45269 loop    loc_27ACD ;~ 1927:02BF
cs=0x1927;eip=0x0002c1; 	R(JMP(loc_27bb9));	// 45270 jmp     loc_27BB9 ;~ 1927:02C1
loc_27b14:
	// 7668 
cs=0x1927;eip=0x0002c4; 	T(MOV(ax, si));	// 45274 mov     ax, si ;~ 1927:02C4
cs=0x1927;eip=0x0002c6; 	T(MOV(bx, di));	// 45275 mov     bx, di ;~ 1927:02C6
cs=0x1927;eip=0x0002c8; 	T(XCHG(ah, al));	// 45276 xchg    ah, al ;~ 1927:02C8
cs=0x1927;eip=0x0002ca; 	T(ADD(bx, ax));	// 45277 add     bx, ax ;~ 1927:02CA
cs=0x1927;eip=0x0002cc; 	T(SHR(ax, 1));	// 45278 shr     ax, 1 ;~ 1927:02CC
cs=0x1927;eip=0x0002ce; 	T(SHR(ax, 1));	// 45279 shr     ax, 1 ;~ 1927:02CE
cs=0x1927;eip=0x0002d0; 	T(ADD(bx, ax));	// 45280 add     bx, ax ;~ 1927:02D0
cs=0x1927;eip=0x0002d2; 	T(XCHG(bx, di));	// 45281 xchg    bx, di ;~ 1927:02D2
cs=0x1927;eip=0x0002d4; 	T(MOV(cx, si));	// 45282 mov     cx, si ;~ 1927:02D4
cs=0x1927;eip=0x0002d6; 	T(INC(cx));	// 45283 inc     cx ;~ 1927:02D6
cs=0x1927;eip=0x0002d7; 	T(SUB(cx, word_37bb7));	// 45284 sub     cx, word_37BB7 ;~ 1927:02D7
cs=0x1927;eip=0x0002db; 	T(MOV(dx, word_37bb1));	// 45285 mov     dx, word_37BB1 ;~ 1927:02DB
cs=0x1927;eip=0x0002df; 	T(INC(dx));	// 45286 inc     dx ;~ 1927:02DF
cs=0x1927;eip=0x0002e0; 	T(SUB(dx, bx));	// 45287 sub     dx, bx ;~ 1927:02E0
cs=0x1927;eip=0x0002e2; 	T(MOV(al, byte_37b81));	// 45288 mov     al, byte_37B81 ;~ 1927:02E2
cs=0x1927;eip=0x0002e5; 	T(MOV(bx, 0x140));	// 45289 mov     bx, 140h ;~ 1927:02E5
cs=0x1927;eip=0x0002e8; 	T(ADD(bx, dx));	// 45290 add     bx, dx ;~ 1927:02E8
loc_27b3a:
	// 7669 
cs=0x1927;eip=0x0002ea; 	T(MOV(si, cx));	// 45293 mov     si, cx ;~ 1927:02EA
cs=0x1927;eip=0x0002ec; 	T(MOV(cx, dx));	// 45294 mov     cx, dx ;~ 1927:02EC
	// 45295 rep stosb ;~ 1927:02EE
cs=0x1927;eip=0x0002ee; 	X(	REP STOSB);	// 45295 rep stosb ;~ 1927:02EE
cs=0x1927;eip=0x0002f0; 	T(MOV(cx, si));	// 45296 mov     cx, si ;~ 1927:02F0
cs=0x1927;eip=0x0002f2; 	T(SUB(di, bx));	// 45297 sub     di, bx ;~ 1927:02F2
cs=0x1927;eip=0x0002f4; 	R(LOOP(loc_27b3a));	// 45298 loop    loc_27B3A ;~ 1927:02F4
cs=0x1927;eip=0x0002f6; 	R(JMP(loc_27bb9));	// 45299 jmp     short loc_27BB9 ;~ 1927:02F6
loc_27b48:
	// 7670 
cs=0x1927;eip=0x0002f8; 	T(MOV(ax, si));	// 45303 mov     ax, si ;~ 1927:02F8
cs=0x1927;eip=0x0002fa; 	T(MOV(bx, di));	// 45304 mov     bx, di ;~ 1927:02FA
cs=0x1927;eip=0x0002fc; 	T(XCHG(ah, al));	// 45305 xchg    ah, al ;~ 1927:02FC
cs=0x1927;eip=0x0002fe; 	T(ADD(bx, ax));	// 45306 add     bx, ax ;~ 1927:02FE
cs=0x1927;eip=0x000300; 	T(SHR(ax, 1));	// 45307 shr     ax, 1 ;~ 1927:0300
cs=0x1927;eip=0x000302; 	T(SHR(ax, 1));	// 45308 shr     ax, 1 ;~ 1927:0302
cs=0x1927;eip=0x000304; 	T(ADD(bx, ax));	// 45309 add     bx, ax ;~ 1927:0304
cs=0x1927;eip=0x000306; 	T(SHR(bx, 1));	// 45310 shr     bx, 1 ;~ 1927:0306
cs=0x1927;eip=0x000308; 	T(SHR(bx, 1));	// 45311 shr     bx, 1 ;~ 1927:0308
cs=0x1927;eip=0x00030a; 	X(MOV(word_37bb9, bx));	// 45312 mov     word_37BB9, bx ;~ 1927:030A
cs=0x1927;eip=0x00030e; 	T(MOV(cx, di));	// 45313 mov     cx, di ;~ 1927:030E
cs=0x1927;eip=0x000310; 	T(AND(cl, 3));	// 45314 and     cl, 3 ;~ 1927:0310
cs=0x1927;eip=0x000313; 	T(MOV(al, 1));	// 45315 mov     al, 1 ;~ 1927:0313
cs=0x1927;eip=0x000315; 	T(SHL(al, cl));	// 45316 shl     al, cl ;~ 1927:0315
cs=0x1927;eip=0x000317; 	X(MOV(byte_37bc2, cl));	// 45317 mov     byte_37BC2, cl ;~ 1927:0317
cs=0x1927;eip=0x00031b; 	X(MOV(byte_37bbf, al));	// 45318 mov     byte_37BBF, al ;~ 1927:031B
cs=0x1927;eip=0x00031e; 	T(INC(si));	// 45319 inc     si ;~ 1927:031E
cs=0x1927;eip=0x00031f; 	T(SUB(si, word_37bb7));	// 45320 sub     si, word_37BB7 ;~ 1927:031F
cs=0x1927;eip=0x000323; 	T(NEG(di));	// 45321 neg     di ;~ 1927:0323
cs=0x1927;eip=0x000325; 	T(ADD(di, word_37bb1));	// 45322 add     di, word_37BB1 ;~ 1927:0325
cs=0x1927;eip=0x000329; 	T(INC(di));	// 45323 inc     di ;~ 1927:0329
loc_27b7a:
	// 7671 
cs=0x1927;eip=0x00032a; 	T(MOV(dx, 0x3C4));	// 45326 mov     dx, 3C4h ;~ 1927:032A
cs=0x1927;eip=0x00032d; 	T(MOV(al, 2));	// 45327 mov     al, 2 ;~ 1927:032D
cs=0x1927;eip=0x00032f; 	T(MOV(ah, byte_37bbf));	// 45328 mov     ah, byte_37BBF ;~ 1927:032F
cs=0x1927;eip=0x000333; 	R(OUT(dx, ax));	// 45329 out     dx, ax          ; EGA: sequencer address reg ;~ 1927:0333
cs=0x1927;eip=0x000334; 	T(MOV(al, byte_37b81));	// 45332 mov     al, byte_37B81 ;~ 1927:0334
cs=0x1927;eip=0x000337; 	T(MOV(bx, word_37bb9));	// 45333 mov     bx, word_37BB9 ;~ 1927:0337
cs=0x1927;eip=0x00033b; 	T(MOV(cx, si));	// 45334 mov     cx, si ;~ 1927:033B
cs=0x1927;eip=0x00033d; 	T(MOV(dx, 0x50));	// 45335 mov     dx, 50h ; 'P' ;~ 1927:033D
loc_27b90:
	// 7672 
cs=0x1927;eip=0x000340; 	X(MOV(*(raddr(es,bx)), al));	// 45338 mov     es:[bx], al ;~ 1927:0340
cs=0x1927;eip=0x000343; 	T(SUB(bx, dx));	// 45339 sub     bx, dx ;~ 1927:0343
cs=0x1927;eip=0x000345; 	R(LOOP(loc_27b90));	// 45340 loop    loc_27B90 ;~ 1927:0345
cs=0x1927;eip=0x000347; 	T(DEC(di));	// 45341 dec     di ;~ 1927:0347
cs=0x1927;eip=0x000348; 	R(JZ(loc_27bb9));	// 45342 jz      short loc_27BB9 ;~ 1927:0348
cs=0x1927;eip=0x00034a; 	T(MOV(cl, byte_37bc2));	// 45343 mov     cl, byte_37BC2 ;~ 1927:034A
cs=0x1927;eip=0x00034e; 	T(INC(cl));	// 45344 inc     cl ;~ 1927:034E
cs=0x1927;eip=0x000350; 	T(AND(cl, 3));	// 45345 and     cl, 3 ;~ 1927:0350
cs=0x1927;eip=0x000353; 	T(MOV(al, 1));	// 45346 mov     al, 1 ;~ 1927:0353
cs=0x1927;eip=0x000355; 	T(SHL(al, cl));	// 45347 shl     al, cl ;~ 1927:0355
cs=0x1927;eip=0x000357; 	X(MOV(byte_37bc2, cl));	// 45348 mov     byte_37BC2, cl ;~ 1927:0357
cs=0x1927;eip=0x00035b; 	X(MOV(byte_37bbf, al));	// 45349 mov     byte_37BBF, al ;~ 1927:035B
cs=0x1927;eip=0x00035e; 	T(MOV(ax, 1));	// 45350 mov     ax, 1 ;~ 1927:035E
cs=0x1927;eip=0x000361; 	T(SHR(ax, cl));	// 45351 shr     ax, cl ;~ 1927:0361
cs=0x1927;eip=0x000363; 	X(ADD(word_37bb9, ax));	// 45352 add     word_37BB9, ax ;~ 1927:0363
cs=0x1927;eip=0x000367; 	R(JMP(loc_27b7a));	// 45353 jmp     short loc_27B7A ;~ 1927:0367
loc_27bb9:
	// 7673 
cs=0x1927;eip=0x000369; 	T(XOR(ax, ax));	// 45358 xor     ax, ax ;~ 1927:0369
cs=0x1927;eip=0x00036b; 	X(POP(si));	// 45359 pop     si ;~ 1927:036B
cs=0x1927;eip=0x00036c; 	X(POP(di));	// 45360 pop     di ;~ 1927:036C
cs=0x1927;eip=0x00036d; 	X(POP(bp));	// 45361 pop     bp ;~ 1927:036D
cs=0x1927;eip=0x00036e; 	R(RETF(0));	// 45362 retf ;~ 1927:036E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_27887: 	goto loc_27887;
        case m2c::kloc_278b0: 	goto loc_278b0;
        case m2c::kloc_278bf: 	goto loc_278bf;
        case m2c::kloc_2791f: 	goto loc_2791f;
        case m2c::kloc_2793b: 	goto loc_2793b;
        case m2c::kloc_27974: 	goto loc_27974;
        case m2c::kloc_27977: 	goto loc_27977;
        case m2c::kloc_279d6: 	goto loc_279d6;
        case m2c::kloc_27a07: 	goto loc_27a07;
        case m2c::kloc_27a20: 	goto loc_27a20;
        case m2c::kloc_27a2c: 	goto loc_27a2c;
        case m2c::kloc_27a4e: 	goto loc_27a4e;
        case m2c::kloc_27a74: 	goto loc_27a74;
        case m2c::kloc_27a81: 	goto loc_27a81;
        case m2c::kloc_27acd: 	goto loc_27acd;
        case m2c::kloc_27af1: 	goto loc_27af1;
        case m2c::kloc_27af9: 	goto loc_27af9;
        case m2c::kloc_27b14: 	goto loc_27b14;
        case m2c::kloc_27b3a: 	goto loc_27b3a;
        case m2c::kloc_27b48: 	goto loc_27b48;
        case m2c::kloc_27b7a: 	goto loc_27b7a;
        case m2c::kloc_27b90: 	goto loc_27b90;
        case m2c::kloc_27bb9: 	goto loc_27bb9;
        case m2c::kret_1927_b: 	goto ret_1927_b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

