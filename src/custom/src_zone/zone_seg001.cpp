/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "zone.h"

                

 bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
sub_10300:
	// 434 
cs=0x1c2;eip=0x000100; 	T(MOV(al, *(&byte_1bd6f)));	// 439 mov     al, ds:byte_1BD6F ;~ 01C2:0100
ret_1c2_103:
	// 4370 
cs=0x1c2;eip=0x000103; 	J(JMP(loc_1036c));	// 440 jmp     short loc_1036C ;~ 01C2:0103
loc_1036c:
	// 4371 
cs=0x1c2;eip=0x00016c; 	T(MOV(ax, seg_offset(seg002)));	// 454 mov     ax, seg seg002 ;~ 01C2:016C
cs=0x1c2;eip=0x00016f; 	R(MOV(ss, ax));	// 455 mov     ss, ax ;~ 01C2:016F
cs=0x1c2;eip=0x000171; 	T(MOV(sp, 0x10C));	// 457 mov     sp, 10Ch ;~ 01C2:0171
cs=0x1c2;eip=0x000174; 	T(MOV(ds, ax));	// 458 mov     ds, ax ;~ 01C2:0174
cs=0x1c2;eip=0x000176; 	T(MOV(es, ax));	// 460 mov     es, ax ;~ 01C2:0176
cs=0x1c2;eip=0x000178; 	J(JMP(loc_13770));	// 462 jmp     loc_13770 ;~ 01C2:0178
sub_10605:
	// 948 
cs=0x1c2;eip=0x000405; 	T(MOV(di, 0x212));	// 949 mov     di, 212h ;~ 01C2:0405
ret_1c2_408:
	// 4423 
cs=0x1c2;eip=0x000408; 	T(CMP(byte_14765, 1));	// 950 cmp     byte_14765, 1 ;~ 01C2:0408
cs=0x1c2;eip=0x00040d; 	J(JZ(loc_10612));	// 951 jz      short loc_10612 ;~ 01C2:040D
cs=0x1c2;eip=0x00040f; 	T(MOV(di, 0x5D2));	// 952 mov     di, 5D2h ;~ 01C2:040F
loc_10612:
	// 4424 
cs=0x1c2;eip=0x000412; 	T(MOV(si, 0x149));	// 955 mov     si, 149h ;~ 01C2:0412
cs=0x1c2;eip=0x000415; 	X(PUSH(es));	// 956 push    es ;~ 01C2:0415
loc_10616:
	// 4425 
cs=0x1c2;eip=0x000416; 	T(MOV(ax, seg_offset(seg003)));	// 959 mov     ax, seg seg003 ;~ 01C2:0416
cs=0x1c2;eip=0x000419; 	T(MOV(es, ax));	// 960 mov     es, ax ;~ 01C2:0419
cs=0x1c2;eip=0x00041b; 	T(MOV(bl, 4));	// 962 mov     bl, 4 ;~ 01C2:041B
loc_1061d:
	// 4426 
cs=0x1c2;eip=0x00041d; 	T(MOV(cx, 4));	// 965 mov     cx, 4 ;~ 01C2:041D
	// 966 rep movsb ;~ 01C2:0420
cs=0x1c2;eip=0x000420; 	X(	REP MOVSB);	// 966 rep movsb ;~ 01C2:0420
cs=0x1c2;eip=0x000422; 	T(ADD(di, 0x1FFC));	// 967 add     di, 1FFCh ;~ 01C2:0422
cs=0x1c2;eip=0x000426; 	T(MOV(cx, 4));	// 968 mov     cx, 4 ;~ 01C2:0426
	// 969 rep movsb ;~ 01C2:0429
cs=0x1c2;eip=0x000429; 	X(	REP MOVSB);	// 969 rep movsb ;~ 01C2:0429
cs=0x1c2;eip=0x00042b; 	T(ADD(di, 0x0E04C));	// 970 add     di, 0E04Ch ;~ 01C2:042B
cs=0x1c2;eip=0x00042f; 	T(DEC(bl));	// 971 dec     bl ;~ 01C2:042F
cs=0x1c2;eip=0x000431; 	J(JNZ(loc_1061d));	// 972 jnz     short loc_1061D ;~ 01C2:0431
cs=0x1c2;eip=0x000433; 	X(POP(es));	// 973 pop     es ;~ 01C2:0433
cs=0x1c2;eip=0x000434; 	R(RETN(0));	// 975 retn ;~ 01C2:0434
sub_1063f:
	// 994 
cs=0x1c2;eip=0x00043f; 	X(PUSH(di));	// 999 push    di ;~ 01C2:043F
ret_1c2_440:
	// 4428 
cs=0x1c2;eip=0x000440; 	T(MOV(di, 0x0BD97));	// 1000 mov     di, 0BD97h ;~ 01C2:0440
cs=0x1c2;eip=0x000443; 	T(MOV(dx, 0x0BE70));	// 1001 mov     dx, 0BE70h ;~ 01C2:0443
cs=0x1c2;eip=0x000446; 	T(MOV(cx, 4));	// 1002 mov     cx, 4 ;~ 01C2:0446
cs=0x1c2;eip=0x000449; 	T(XOR(bx, bx));	// 1003 xor     bx, bx ;~ 01C2:0449
loc_1064b:
	// 4429 
cs=0x1c2;eip=0x00044b; 	T(LODSB);	// 1006 lodsb ;~ 01C2:044B
cs=0x1c2;eip=0x00044c; 	T(OR(al, al));	// 1007 or      al, al ;~ 01C2:044C
cs=0x1c2;eip=0x00044e; 	J(JZ(loc_1065a));	// 1008 jz      short loc_1065A ;~ 01C2:044E
cs=0x1c2;eip=0x000450; 	T(INC(bx));	// 1009 inc     bx ;~ 01C2:0450
cs=0x1c2;eip=0x000451; 	T(XOR(ah, ah));	// 1010 xor     ah, ah ;~ 01C2:0451
cs=0x1c2;eip=0x000453; 	T(SHL(ax, cl));	// 1011 shl     ax, cl ;~ 01C2:0453
cs=0x1c2;eip=0x000455; 	T(ADD(ax, dx));	// 1012 add     ax, dx ;~ 01C2:0455
cs=0x1c2;eip=0x000457; 	X(STOSW);	// 1013 stosw ;~ 01C2:0457
cs=0x1c2;eip=0x000458; 	J(JMP(loc_1064b));	// 1014 jmp     short loc_1064B ;~ 01C2:0458
loc_1065a:
	// 4430 
cs=0x1c2;eip=0x00045a; 	X(MOV(word_1fed4, bx));	// 1018 mov     word_1FED4, bx ;~ 01C2:045A
cs=0x1c2;eip=0x00045e; 	X(POP(di));	// 1019 pop     di ;~ 01C2:045E
cs=0x1c2;eip=0x00045f; 	J(JMP(loc_14316));	// 1020 jmp     loc_14316 ;~ 01C2:045F
sub_10662:
	// 1027 
cs=0x1c2;eip=0x000462; 	T(MOV(di, 0x236A));	// 1028 mov     di, 236Ah ;~ 01C2:0462
ret_1c2_465:
	// 4431 
cs=0x1c2;eip=0x000465; 	T(MOV(bp, di));	// 1029 mov     bp, di ;~ 01C2:0465
cs=0x1c2;eip=0x000467; 	T(TEST(byte_14765, 2));	// 1030 test    byte_14765, 2 ;~ 01C2:0467
cs=0x1c2;eip=0x00046c; 	J(JNZ(loc_10674));	// 1031 jnz     short loc_10674 ;~ 01C2:046C
cs=0x1c2;eip=0x00046e; 	T(MOV(cx, word_14758));	// 1032 mov     cx, word_14758 ;~ 01C2:046E
cs=0x1c2;eip=0x000472; 	J(JMP(loc_10678));	// 1033 jmp     short loc_10678 ;~ 01C2:0472
loc_10674:
	// 4432 
cs=0x1c2;eip=0x000474; 	T(MOV(cx, word_14761));	// 1037 mov     cx, word_14761 ;~ 01C2:0474
loc_10678:
	// 4433 
cs=0x1c2;eip=0x000478; 	J(JCXZ(locret_10690));	// 1041 jcxz    short locret_10690 ;~ 01C2:0478
cs=0x1c2;eip=0x00047a; 	T(CMP(cx, 8));	// 1042 cmp     cx, 8 ;~ 01C2:047A
cs=0x1c2;eip=0x00047d; 	J(JNC(locret_10690));	// 1043 jnb     short locret_10690 ;~ 01C2:047D
cs=0x1c2;eip=0x00047f; 	X(PUSH(es));	// 1044 push    es ;~ 01C2:047F
loc_10680:
	// 4434 
cs=0x1c2;eip=0x000480; 	T(MOV(ax, seg_offset(seg003)));	// 1047 mov     ax, seg seg003 ;~ 01C2:0480
cs=0x1c2;eip=0x000483; 	T(MOV(es, ax));	// 1048 mov     es, ax ;~ 01C2:0483
loc_10685:
	// 4435 
cs=0x1c2;eip=0x000485; 	J(CALL(sub_106a9,0));	// 1052 call    sub_106A9 ;~ 01C2:0485
cs=0x1c2;eip=0x000488; 	T(SUB(bp, 4));	// 1053 sub     bp, 4 ;~ 01C2:0488
cs=0x1c2;eip=0x00048b; 	T(MOV(di, bp));	// 1054 mov     di, bp ;~ 01C2:048B
cs=0x1c2;eip=0x00048d; 	J(LOOP(loc_10685));	// 1055 loop    loc_10685 ;~ 01C2:048D
cs=0x1c2;eip=0x00048f; 	X(POP(es));	// 1056 pop     es ;~ 01C2:048F
locret_10690:
	// 4436 
cs=0x1c2;eip=0x000490; 	R(RETN(0));	// 1061 retn ;~ 01C2:0490
sub_10691:
	// 1068 
cs=0x1c2;eip=0x000491; 	T(MOV(di, 0x272A));	// 1069 mov     di, 272Ah ;~ 01C2:0491
ret_1c2_494:
	// 4437 
cs=0x1c2;eip=0x000494; 	T(MOV(bp, di));	// 1070 mov     bp, di ;~ 01C2:0494
cs=0x1c2;eip=0x000496; 	T(TEST(byte_14765, 2));	// 1071 test    byte_14765, 2 ;~ 01C2:0496
cs=0x1c2;eip=0x00049b; 	J(JNZ(loc_106a3));	// 1072 jnz     short loc_106A3 ;~ 01C2:049B
cs=0x1c2;eip=0x00049d; 	T(MOV(cx, word_14761));	// 1073 mov     cx, word_14761 ;~ 01C2:049D
cs=0x1c2;eip=0x0004a1; 	J(JMP(loc_10678));	// 1074 jmp     short loc_10678 ;~ 01C2:04A1
loc_106a3:
	// 4438 
cs=0x1c2;eip=0x0004a3; 	T(MOV(cx, word_14758));	// 1078 mov     cx, word_14758 ;~ 01C2:04A3
cs=0x1c2;eip=0x0004a7; 	J(JMP(loc_10678));	// 1079 jmp     short loc_10678 ;~ 01C2:04A7
sub_106bf:
	// 1107 
cs=0x1c2;eip=0x0004bf; 	J(CALL(sub_10438,0));	// 1119 call    sub_10438 ;~ 01C2:04BF
ret_1c2_4c2:
	// 4441 
cs=0x1c2;eip=0x0004c2; 	X(MOV(byte_154c2, 8));	// 1120 mov     byte_154C2, 8 ;~ 01C2:04C2
cs=0x1c2;eip=0x0004c7; 	J(CALL(sub_14372,0));	// 1121 call    sub_14372 ;~ 01C2:04C7
cs=0x1c2;eip=0x0004ca; 	T(MOV(si, 0x1DA));	// 1122 mov     si, 1DAh ;~ 01C2:04CA
cs=0x1c2;eip=0x0004cd; 	J(CALL(sub_142f4,0));	// 1123 call    sub_142F4 ;~ 01C2:04CD
cs=0x1c2;eip=0x0004d0; 	X(MOV(word_156e6, 0));	// 1124 mov     word_156E6, 0 ;~ 01C2:04D0
loc_106d6:
	// 4442 
cs=0x1c2;eip=0x0004d6; 	J(CALL(sub_134e1,0));	// 1128 call    sub_134E1 ;~ 01C2:04D6
cs=0x1c2;eip=0x0004d9; 	J(JNZ(loc_106e4));	// 1129 jnz     short loc_106E4 ;~ 01C2:04D9
cs=0x1c2;eip=0x0004db; 	T(CMP(word_156e6, 0x12C));	// 1130 cmp     word_156E6, 12Ch ;~ 01C2:04DB
cs=0x1c2;eip=0x0004e1; 	J(JC(loc_106d6));	// 1131 jb      short loc_106D6 ;~ 01C2:04E1
cs=0x1c2;eip=0x0004e3; 	R(RETN(0));	// 1132 retn ;~ 01C2:04E3
loc_106e4:
	// 4443 
cs=0x1c2;eip=0x0004e4; 	J(CALL(sub_134e8,0));	// 1136 call    sub_134E8 ;~ 01C2:04E4
cs=0x1c2;eip=0x0004e7; 	T(CMP(ax, 0x3B00));	// 1137 cmp     ax, 3B00h ;~ 01C2:04E7
cs=0x1c2;eip=0x0004ea; 	J(JZ(loc_106f8));	// 1138 jz      short loc_106F8 ;~ 01C2:04EA
cs=0x1c2;eip=0x0004ec; 	T(CMP(ax, 0x3C00));	// 1139 cmp     ax, 3C00h ;~ 01C2:04EC
cs=0x1c2;eip=0x0004ef; 	J(JNZ(loc_106d6));	// 1140 jnz     short loc_106D6 ;~ 01C2:04EF
cs=0x1c2;eip=0x0004f1; 	T(MOV(sp, word_154e9));	// 1141 mov     sp, word_154E9 ;~ 01C2:04F1
cs=0x1c2;eip=0x0004f5; 	J(JMP(loc_13d1e));	// 1142 jmp     loc_13D1E ;~ 01C2:04F5
loc_106f8:
	// 4444 
cs=0x1c2;eip=0x0004f8; 	T(MOV(sp, word_154e9));	// 1146 mov     sp, word_154E9 ;~ 01C2:04F8
cs=0x1c2;eip=0x0004fc; 	X(MOV(byte_14b00, 0));	// 1147 mov     byte_14B00, 0 ;~ 01C2:04FC
cs=0x1c2;eip=0x000501; 	J(JMP(loc_1378a));	// 1148 jmp     loc_1378A ;~ 01C2:0501
sub_110b0:
	// 2639 
cs=0x1c2;eip=0x000eb0; 	T(TEST(byte_15242, 0x0FF));	// 2640 test    byte_15242, 0FFh ;~ 01C2:0EB0
ret_1c2_eb5:
	// 4614 
cs=0x1c2;eip=0x000eb5; 	J(JZ(loc_110bb));	// 2641 jz      short loc_110BB ;~ 01C2:0EB5
cs=0x1c2;eip=0x000eb7; 	J(CALL(sub_12e30,0));	// 2642 call    sub_12E30 ;~ 01C2:0EB7
cs=0x1c2;eip=0x000eba; 	R(RETN(0));	// 2643 retn ;~ 01C2:0EBA
loc_110bb:
	// 4615 
cs=0x1c2;eip=0x000ebb; 	T(TEST(byte_1488c, 0x0FF));	// 2647 test    byte_1488C, 0FFh ;~ 01C2:0EBB
cs=0x1c2;eip=0x000ec0; 	J(JZ(loc_110cc));	// 2648 jz      short loc_110CC ;~ 01C2:0EC0
cs=0x1c2;eip=0x000ec2; 	T(MOV(al, byte_1488c));	// 2649 mov     al, byte_1488C ;~ 01C2:0EC2
cs=0x1c2;eip=0x000ec5; 	T(SHR(al, 1));	// 2650 shr     al, 1 ;~ 01C2:0EC5
cs=0x1c2;eip=0x000ec7; 	T(TEST(al, 1));	// 2651 test    al, 1 ;~ 01C2:0EC7
cs=0x1c2;eip=0x000ec9; 	J(JNZ(loc_110cc));	// 2652 jnz     short loc_110CC ;~ 01C2:0EC9
cs=0x1c2;eip=0x000ecb; 	R(RETN(0));	// 2653 retn ;~ 01C2:0ECB
loc_110cc:
	// 4616 
cs=0x1c2;eip=0x000ecc; 	X(PUSH(es));	// 2658 push    es ;~ 01C2:0ECC
loc_110cd:
	// 4617 
cs=0x1c2;eip=0x000ecd; 	T(MOV(ax, seg_offset(seg003)));	// 2661 mov     ax, seg seg003 ;~ 01C2:0ECD
cs=0x1c2;eip=0x000ed0; 	T(MOV(es, ax));	// 2662 mov     es, ax ;~ 01C2:0ED0
cs=0x1c2;eip=0x000ed2; 	T(MOV(bp, word_153ba));	// 2664 mov     bp, word_153BA ;~ 01C2:0ED2
cs=0x1c2;eip=0x000ed6; 	T(MOV(di, 0x0FD7B));	// 2665 mov     di, 0FD7Bh ;~ 01C2:0ED6
cs=0x1c2;eip=0x000ed9; 	T(ADD(di, bp));	// 2666 add     di, bp ;~ 01C2:0ED9
cs=0x1c2;eip=0x000edb; 	T(MOV(ax, 0x0FFFF));	// 2667 mov     ax, 0FFFFh ;~ 01C2:0EDB
cs=0x1c2;eip=0x000ede; 	T(MOV(cx, 5));	// 2668 mov     cx, 5 ;~ 01C2:0EDE
cs=0x1c2;eip=0x000ee1; 	T(MOV(dx, di));	// 2669 mov     dx, di ;~ 01C2:0EE1
	// 2670 rep stosw ;~ 01C2:0EE3
cs=0x1c2;eip=0x000ee3; 	X(	REP STOSW);	// 2670 rep stosw ;~ 01C2:0EE3
cs=0x1c2;eip=0x000ee5; 	T(TEST(byte_148fa, 0x0FF));	// 2671 test    byte_148FA, 0FFh ;~ 01C2:0EE5
cs=0x1c2;eip=0x000eea; 	J(JNZ(loc_11131));	// 2672 jnz     short loc_11131 ;~ 01C2:0EEA
cs=0x1c2;eip=0x000eec; 	T(MOV(ah, 3));	// 2673 mov     ah, 3 ;~ 01C2:0EEC
cs=0x1c2;eip=0x000eee; 	T(DEC(di));	// 2674 dec     di ;~ 01C2:0EEE
cs=0x1c2;eip=0x000eef; 	J(CALL(sub_11187,0));	// 2675 call    sub_11187 ;~ 01C2:0EEF
cs=0x1c2;eip=0x000ef2; 	T(MOV(di, dx));	// 2676 mov     di, dx ;~ 01C2:0EF2
cs=0x1c2;eip=0x000ef4; 	T(MOV(ah, 0x0C0));	// 2677 mov     ah, 0C0h ; 'À' ;~ 01C2:0EF4
cs=0x1c2;eip=0x000ef6; 	J(CALL(sub_11187,0));	// 2678 call    sub_11187 ;~ 01C2:0EF6
cs=0x1c2;eip=0x000ef9; 	T(MOV(di, 0x27B));	// 2679 mov     di, 27Bh ;~ 01C2:0EF9
cs=0x1c2;eip=0x000efc; 	T(ADD(di, bp));	// 2680 add     di, bp ;~ 01C2:0EFC
cs=0x1c2;eip=0x000efe; 	T(MOV(dx, di));	// 2681 mov     dx, di ;~ 01C2:0EFE
cs=0x1c2;eip=0x000f00; 	T(MOV(cx, 5));	// 2682 mov     cx, 5 ;~ 01C2:0F00
cs=0x1c2;eip=0x000f03; 	T(MOV(ax, 0x0FFFF));	// 2683 mov     ax, 0FFFFh ;~ 01C2:0F03
	// 2684 rep stosw ;~ 01C2:0F06
cs=0x1c2;eip=0x000f06; 	X(	REP STOSW);	// 2684 rep stosw ;~ 01C2:0F06
cs=0x1c2;eip=0x000f08; 	T(MOV(ah, 3));	// 2685 mov     ah, 3 ;~ 01C2:0F08
cs=0x1c2;eip=0x000f0a; 	T(DEC(di));	// 2686 dec     di ;~ 01C2:0F0A
cs=0x1c2;eip=0x000f0b; 	J(CALL(sub_111d2,0));	// 2687 call    sub_111D2 ;~ 01C2:0F0B
cs=0x1c2;eip=0x000f0e; 	T(MOV(di, dx));	// 2688 mov     di, dx ;~ 01C2:0F0E
cs=0x1c2;eip=0x000f10; 	T(MOV(ah, 0x0C0));	// 2689 mov     ah, 0C0h ; 'À' ;~ 01C2:0F10
cs=0x1c2;eip=0x000f12; 	J(CALL(sub_111d2,0));	// 2690 call    sub_111D2 ;~ 01C2:0F12
cs=0x1c2;eip=0x000f15; 	T(MOV(di, 0x0FD80));	// 2691 mov     di, 0FD80h ;~ 01C2:0F15
cs=0x1c2;eip=0x000f18; 	T(ADD(di, bp));	// 2692 add     di, bp ;~ 01C2:0F18
cs=0x1c2;eip=0x000f1a; 	T(MOV(cx, 8));	// 2693 mov     cx, 8 ;~ 01C2:0F1A
cs=0x1c2;eip=0x000f1d; 	T(MOV(ah, 0x0C0));	// 2694 mov     ah, 0C0h ; 'À' ;~ 01C2:0F1D
cs=0x1c2;eip=0x000f1f; 	J(CALL(sub_111d5,0));	// 2695 call    sub_111D5 ;~ 01C2:0F1F
cs=0x1c2;eip=0x000f22; 	T(MOV(di, 0x280));	// 2696 mov     di, 280h ;~ 01C2:0F22
cs=0x1c2;eip=0x000f25; 	T(ADD(di, bp));	// 2697 add     di, bp ;~ 01C2:0F25
cs=0x1c2;eip=0x000f27; 	T(MOV(cx, 8));	// 2698 mov     cx, 8 ;~ 01C2:0F27
cs=0x1c2;eip=0x000f2a; 	T(MOV(ah, 0x0C0));	// 2699 mov     ah, 0C0h ; 'À' ;~ 01C2:0F2A
cs=0x1c2;eip=0x000f2c; 	J(CALL(sub_1118a,0));	// 2700 call    sub_1118A ;~ 01C2:0F2C
cs=0x1c2;eip=0x000f2f; 	X(POP(es));	// 2701 pop     es ;~ 01C2:0F2F
cs=0x1c2;eip=0x000f30; 	R(RETN(0));	// 2703 retn ;~ 01C2:0F30
loc_11131:
	// 4618 
cs=0x1c2;eip=0x000f31; 	T(MOV(cx, 5));	// 2708 mov     cx, 5 ;~ 01C2:0F31
cs=0x1c2;eip=0x000f34; 	T(MOV(di, dx));	// 2709 mov     di, dx ;~ 01C2:0F34
cs=0x1c2;eip=0x000f36; 	T(ADD(di, 0x2000));	// 2710 add     di, 2000h ;~ 01C2:0F36
	// 2711 rep stosw ;~ 01C2:0F3A
cs=0x1c2;eip=0x000f3a; 	X(	REP STOSW);	// 2711 rep stosw ;~ 01C2:0F3A
cs=0x1c2;eip=0x000f3c; 	T(DEC(di));	// 2712 dec     di ;~ 01C2:0F3C
cs=0x1c2;eip=0x000f3d; 	J(CALL(sub_111aa,0));	// 2713 call    sub_111AA ;~ 01C2:0F3D
cs=0x1c2;eip=0x000f40; 	T(MOV(di, dx));	// 2714 mov     di, dx ;~ 01C2:0F40
cs=0x1c2;eip=0x000f42; 	T(ADD(di, 0x2000));	// 2715 add     di, 2000h ;~ 01C2:0F42
cs=0x1c2;eip=0x000f46; 	J(CALL(sub_111af,0));	// 2716 call    sub_111AF ;~ 01C2:0F46
cs=0x1c2;eip=0x000f49; 	T(MOV(di, 0x27B));	// 2717 mov     di, 27Bh ;~ 01C2:0F49
cs=0x1c2;eip=0x000f4c; 	T(ADD(di, bp));	// 2718 add     di, bp ;~ 01C2:0F4C
cs=0x1c2;eip=0x000f4e; 	T(MOV(dx, di));	// 2719 mov     dx, di ;~ 01C2:0F4E
cs=0x1c2;eip=0x000f50; 	T(MOV(cx, 5));	// 2720 mov     cx, 5 ;~ 01C2:0F50
cs=0x1c2;eip=0x000f53; 	T(MOV(ax, 0x0FFFF));	// 2721 mov     ax, 0FFFFh ;~ 01C2:0F53
	// 2722 rep stosw ;~ 01C2:0F56
cs=0x1c2;eip=0x000f56; 	X(	REP STOSW);	// 2722 rep stosw ;~ 01C2:0F56
cs=0x1c2;eip=0x000f58; 	T(MOV(cx, 5));	// 2723 mov     cx, 5 ;~ 01C2:0F58
cs=0x1c2;eip=0x000f5b; 	T(MOV(di, dx));	// 2724 mov     di, dx ;~ 01C2:0F5B
cs=0x1c2;eip=0x000f5d; 	T(ADD(di, 0x1FB0));	// 2725 add     di, 1FB0h ;~ 01C2:0F5D
	// 2726 rep stosw ;~ 01C2:0F61
cs=0x1c2;eip=0x000f61; 	X(	REP STOSW);	// 2726 rep stosw ;~ 01C2:0F61
cs=0x1c2;eip=0x000f63; 	T(DEC(di));	// 2727 dec     di ;~ 01C2:0F63
cs=0x1c2;eip=0x000f64; 	J(CALL(sub_111b4,0));	// 2728 call    sub_111B4 ;~ 01C2:0F64
cs=0x1c2;eip=0x000f67; 	T(MOV(di, dx));	// 2729 mov     di, dx ;~ 01C2:0F67
cs=0x1c2;eip=0x000f69; 	T(ADD(di, 0x1FB0));	// 2730 add     di, 1FB0h ;~ 01C2:0F69
cs=0x1c2;eip=0x000f6d; 	J(CALL(sub_111b9,0));	// 2731 call    sub_111B9 ;~ 01C2:0F6D
cs=0x1c2;eip=0x000f70; 	T(MOV(di, 0x0FD80));	// 2732 mov     di, 0FD80h ;~ 01C2:0F70
cs=0x1c2;eip=0x000f73; 	T(ADD(di, bp));	// 2733 add     di, bp ;~ 01C2:0F73
cs=0x1c2;eip=0x000f75; 	J(CALL(sub_111f5,0));	// 2734 call    sub_111F5 ;~ 01C2:0F75
cs=0x1c2;eip=0x000f78; 	T(MOV(di, 0x280));	// 2735 mov     di, 280h ;~ 01C2:0F78
cs=0x1c2;eip=0x000f7b; 	T(ADD(di, bp));	// 2736 add     di, bp ;~ 01C2:0F7B
cs=0x1c2;eip=0x000f7d; 	J(CALL(sub_11227,0));	// 2737 call    sub_11227 ;~ 01C2:0F7D
cs=0x1c2;eip=0x000f80; 	X(POP(es));	// 2738 pop     es ;~ 01C2:0F80
cs=0x1c2;eip=0x000f81; 	X(MOV(byte_148fa, 0));	// 2740 mov     byte_148FA, 0 ;~ 01C2:0F81
cs=0x1c2;eip=0x000f86; 	R(RETN(0));	// 2741 retn ;~ 01C2:0F86
sub_113ff:
	// 3128 
cs=0x1c2;eip=0x0011ff; 	X(PUSH(es));	// 3129 push    es ;~ 01C2:11FF
loc_11400:
	// 4647 
cs=0x1c2;eip=0x001200; 	T(MOV(ax, seg_offset(seg003)));	// 3132 mov     ax, seg seg003 ;~ 01C2:1200
cs=0x1c2;eip=0x001203; 	T(MOV(es, ax));	// 3133 mov     es, ax ;~ 01C2:1203
cs=0x1c2;eip=0x001205; 	T(MOV(di, 0));	// 3135 mov     di, 0 ;~ 01C2:1205
cs=0x1c2;eip=0x001208; 	T(ADD(di, 0x528));	// 3136 add     di, 528h ;~ 01C2:1208
cs=0x1c2;eip=0x00120c; 	T(MOV(al, byte_148f3));	// 3137 mov     al, byte_148F3 ;~ 01C2:120C
cs=0x1c2;eip=0x00120f; 	T(SHR(al, 1));	// 3138 shr     al, 1 ;~ 01C2:120F
cs=0x1c2;eip=0x001211; 	J(JNC(loc_11421));	// 3139 jnb     short loc_11421 ;~ 01C2:1211
cs=0x1c2;eip=0x001213; 	T(ADD(di, 0x2000));	// 3140 add     di, 2000h ;~ 01C2:1213
cs=0x1c2;eip=0x001217; 	T(TEST(byte_148f4, 0x0FF));	// 3141 test    byte_148F4, 0FFh ;~ 01C2:1217
cs=0x1c2;eip=0x00121c; 	J(JNZ(loc_11421));	// 3142 jnz     short loc_11421 ;~ 01C2:121C
cs=0x1c2;eip=0x00121e; 	T(SUB(di, 0x50));	// 3143 sub     di, 50h ; 'P' ;~ 01C2:121E
loc_11421:
	// 4648 
cs=0x1c2;eip=0x001221; 	X(MUL1_1(byte_148f6));	// 3147 mul     byte_148F6 ;~ 01C2:1221
cs=0x1c2;eip=0x001225; 	T(TEST(byte_148f4, 0x0FF));	// 3148 test    byte_148F4, 0FFh ;~ 01C2:1225
cs=0x1c2;eip=0x00122a; 	J(JZ(loc_11430));	// 3149 jz      short loc_11430 ;~ 01C2:122A
cs=0x1c2;eip=0x00122c; 	T(ADD(di, ax));	// 3150 add     di, ax ;~ 01C2:122C
cs=0x1c2;eip=0x00122e; 	J(JMP(loc_11432));	// 3151 jmp     short loc_11432 ;~ 01C2:122E
loc_11430:
	// 4649 
cs=0x1c2;eip=0x001230; 	T(SUB(di, ax));	// 3155 sub     di, ax ;~ 01C2:1230
loc_11432:
	// 4650 
cs=0x1c2;eip=0x001232; 	T(MOV(al, byte_148f1));	// 3158 mov     al, byte_148F1 ;~ 01C2:1232
cs=0x1c2;eip=0x001235; 	T(XOR(ah, ah));	// 3159 xor     ah, ah ;~ 01C2:1235
cs=0x1c2;eip=0x001237; 	T(MOV(bl, al));	// 3160 mov     bl, al ;~ 01C2:1237
cs=0x1c2;eip=0x001239; 	T(AND(bl, 3));	// 3161 and     bl, 3 ;~ 01C2:1239
cs=0x1c2;eip=0x00123c; 	T(XOR(bh, bh));	// 3162 xor     bh, bh ;~ 01C2:123C
cs=0x1c2;eip=0x00123e; 	T(TEST(byte_148f2, 0x0FF));	// 3163 test    byte_148F2, 0FFh ;~ 01C2:123E
cs=0x1c2;eip=0x001243; 	J(JNZ(loc_1145b));	// 3164 jnz     short loc_1145B ;~ 01C2:1243
cs=0x1c2;eip=0x001245; 	T(SHR(al, 1));	// 3165 shr     al, 1 ;~ 01C2:1245
cs=0x1c2;eip=0x001247; 	T(SHR(al, 1));	// 3166 shr     al, 1 ;~ 01C2:1247
cs=0x1c2;eip=0x001249; 	T(ADD(di, ax));	// 3167 add     di, ax ;~ 01C2:1249
loc_1144b:
	// 4651 
cs=0x1c2;eip=0x00124b; 	T(MOV(al, *(raddr(es,di))));	// 3170 mov     al, es:[di] ;~ 01C2:124B
cs=0x1c2;eip=0x00124e; 	T(AND(al, *(raddr(ds,bx+0x2C3))));	// 3171 and     al, [bx+2C3h] ;~ 01C2:124E
cs=0x1c2;eip=0x001252; 	T(OR(al, *(raddr(ds,bx+0x2BF))));	// 3172 or      al, [bx+2BFh] ;~ 01C2:1252
cs=0x1c2;eip=0x001256; 	X(MOV(*(raddr(es,di)), al));	// 3173 mov     es:[di], al ;~ 01C2:1256
cs=0x1c2;eip=0x001259; 	X(POP(es));	// 3174 pop     es ;~ 01C2:1259
cs=0x1c2;eip=0x00125a; 	R(RETN(0));	// 3176 retn ;~ 01C2:125A
loc_1145b:
	// 4652 
cs=0x1c2;eip=0x00125b; 	T(DEC(di));	// 3181 dec     di ;~ 01C2:125B
cs=0x1c2;eip=0x00125c; 	T(DEC(al));	// 3182 dec     al ;~ 01C2:125C
cs=0x1c2;eip=0x00125e; 	T(MOV(cl, al));	// 3183 mov     cl, al ;~ 01C2:125E
cs=0x1c2;eip=0x001260; 	T(MOV(bl, 3));	// 3184 mov     bl, 3 ;~ 01C2:1260
cs=0x1c2;eip=0x001262; 	T(AND(cl, 3));	// 3185 and     cl, 3 ;~ 01C2:1262
cs=0x1c2;eip=0x001265; 	T(SUB(bl, cl));	// 3186 sub     bl, cl ;~ 01C2:1265
cs=0x1c2;eip=0x001267; 	T(SHR(al, 1));	// 3187 shr     al, 1 ;~ 01C2:1267
cs=0x1c2;eip=0x001269; 	T(SHR(al, 1));	// 3188 shr     al, 1 ;~ 01C2:1269
cs=0x1c2;eip=0x00126b; 	T(SUB(di, ax));	// 3189 sub     di, ax ;~ 01C2:126B
cs=0x1c2;eip=0x00126d; 	J(JMP(loc_1144b));	// 3190 jmp     short loc_1144B ;~ 01C2:126D
sub_1146f:
	// 3197 
cs=0x1c2;eip=0x00126f; 	T(MOV(ax, word_14af6));	// 3198 mov     ax, word_14AF6 ;~ 01C2:126F
ret_1c2_1272:
	// 4653 
cs=0x1c2;eip=0x001272; 	T(CMP(ax, 0x322));	// 3199 cmp     ax, 322h ;~ 01C2:1272
cs=0x1c2;eip=0x001275; 	J(JNC(loc_11478));	// 3200 jnb     short loc_11478 ;~ 01C2:1275
cs=0x1c2;eip=0x001277; 	R(RETN(0));	// 3201 retn ;~ 01C2:1277
loc_11478:
	// 4654 
cs=0x1c2;eip=0x001278; 	X(PUSH(es));	// 3205 push    es ;~ 01C2:1278
loc_11479:
	// 4655 
cs=0x1c2;eip=0x001279; 	T(MOV(ax, seg_offset(seg003)));	// 3208 mov     ax, seg seg003 ;~ 01C2:1279
cs=0x1c2;eip=0x00127c; 	T(MOV(es, ax));	// 3209 mov     es, ax ;~ 01C2:127C
cs=0x1c2;eip=0x00127e; 	T(MOV(di, word_153ba));	// 3210 mov     di, word_153BA ;~ 01C2:127E
cs=0x1c2;eip=0x001282; 	T(ADD(di, 0x0F998));	// 3211 add     di, 0F998h ;~ 01C2:1282
cs=0x1c2;eip=0x001286; 	T(MOV(bp, di));	// 3212 mov     bp, di ;~ 01C2:1286
cs=0x1c2;eip=0x001288; 	T(MOV(dx, 0x46C));	// 3213 mov     dx, 46Ch ;~ 01C2:1288
cs=0x1c2;eip=0x00128b; 	T(SUB(dx, word_14af6));	// 3214 sub     dx, word_14AF6 ;~ 01C2:128B
cs=0x1c2;eip=0x00128f; 	T(SHR(dx, 1));	// 3215 shr     dx, 1 ;~ 01C2:128F
cs=0x1c2;eip=0x001291; 	T(SHR(dx, 1));	// 3216 shr     dx, 1 ;~ 01C2:1291
cs=0x1c2;eip=0x001293; 	J(JC(loc_114a0));	// 3217 jb      short loc_114A0 ;~ 01C2:1293
cs=0x1c2;eip=0x001295; 	T(MOV(si, 0x323));	// 3218 mov     si, 323h ;~ 01C2:1295
cs=0x1c2;eip=0x001298; 	T(MOV(cx, 0x0E04));	// 3219 mov     cx, 0E04h ;~ 01C2:1298
loc_1149b:
	// 4656 
cs=0x1c2;eip=0x00129b; 	J(CALL(sub_114a8,0));	// 3222 call    sub_114A8 ;~ 01C2:129B
cs=0x1c2;eip=0x00129e; 	X(POP(es));	// 3223 pop     es ;~ 01C2:129E
cs=0x1c2;eip=0x00129f; 	R(RETN(0));	// 3224 retn ;~ 01C2:129F
loc_114a0:
	// 4657 
cs=0x1c2;eip=0x0012a0; 	T(MOV(cx, 0x0E05));	// 3228 mov     cx, 0E05h ;~ 01C2:12A0
cs=0x1c2;eip=0x0012a3; 	T(MOV(si, 0x35B));	// 3229 mov     si, 35Bh ;~ 01C2:12A3
cs=0x1c2;eip=0x0012a6; 	J(JMP(loc_1149b));	// 3230 jmp     short loc_1149B ;~ 01C2:12A6
seg001_14e9_proc:
	// 3588 
cs=0x1c2;eip=0x0014e9; 	T(SHR(cx, 1));	// 3588 shr     cx, 1 ;~ 01C2:14E9
ret_1c2_14eb:
	// 4694 
cs=0x1c2;eip=0x0014eb; 	T(SUB(cx, 0x0E));	// 3589 sub     cx, 0Eh ;~ 01C2:14EB
cs=0x1c2;eip=0x0014ee; 	T(MOV(ax, cx));	// 3590 mov     ax, cx ;~ 01C2:14EE
cs=0x1c2;eip=0x0014f0; 	T(CMP(ax, 1));	// 3591 cmp     ax, 1 ;~ 01C2:14F0
cs=0x1c2;eip=0x0014f3; 	J(JNZ(loc_116fb));	// 3592 jnz     short loc_116FB ;~ 01C2:14F3
cs=0x1c2;eip=0x0014f5; 	X(XOR(byte_14b06, 0x0FF));	// 3593 xor     byte_14B06, 0FFh ;~ 01C2:14F5
cs=0x1c2;eip=0x0014fa; 	R(RETN(0));	// 3594 retn ;~ 01C2:14FA
loc_116fb:
	// 4695 
cs=0x1c2;eip=0x0014fb; 	J(CALL(sub_14015,0));	// 3598 call    sub_14015 ;~ 01C2:14FB
cs=0x1c2;eip=0x0014fe; 	R(RETN(0));	// 3599 retn ;~ 01C2:14FE
ret_1c2_14ff:
	// 4696 
cs=0x1c2;eip=0x0014ff; 	T(XOR(ax, ax));	// 3601 xor     ax, ax ;~ 01C2:14FF
cs=0x1c2;eip=0x001501; 	T(MOV(di, 0x4B8));	// 3602 mov     di, 4B8h ;~ 01C2:1501
cs=0x1c2;eip=0x001504; 	T(MOV(cx, 4));	// 3603 mov     cx, 4 ;~ 01C2:1504
	// 3604 rep stosw ;~ 01C2:1507
cs=0x1c2;eip=0x001507; 	X(	REP STOSW);	// 3604 rep stosw ;~ 01C2:1507
cs=0x1c2;eip=0x001509; 	R(RETN(0));	// 3605 retn ;~ 01C2:1509
ret_1c2_150a:
	// 4697 
cs=0x1c2;eip=0x00150a; 	X(MOV(word_14af8, 0x0FEB0));	// 3607 mov     word_14AF8, 0FEB0h ;~ 01C2:150A
loc_11710:
	// 4698 
cs=0x1c2;eip=0x001510; 	X(MOV(word_14afa, 0));	// 3610 mov     word_14AFA, 0 ;~ 01C2:1510
loc_11716:
	// 4699 
cs=0x1c2;eip=0x001516; 	T(MOV(ax, word_14af6));	// 3614 mov     ax, word_14AF6 ;~ 01C2:1516
cs=0x1c2;eip=0x001519; 	T(MOV(cx, word_14af8));	// 3615 mov     cx, word_14AF8 ;~ 01C2:1519
cs=0x1c2;eip=0x00151d; 	J(CALL(sub_13bc7,0));	// 3616 call    sub_13BC7 ;~ 01C2:151D
cs=0x1c2;eip=0x001520; 	X(MOV(word_14afc, dx));	// 3617 mov     word_14AFC, dx ;~ 01C2:1520
cs=0x1c2;eip=0x001524; 	T(MOV(ax, word_14af6));	// 3618 mov     ax, word_14AF6 ;~ 01C2:1524
cs=0x1c2;eip=0x001527; 	T(MOV(cx, word_14af8));	// 3619 mov     cx, word_14AF8 ;~ 01C2:1527
cs=0x1c2;eip=0x00152b; 	J(CALL(sub_13bad,0));	// 3620 call    sub_13BAD ;~ 01C2:152B
cs=0x1c2;eip=0x00152e; 	X(MOV(word_14afe, dx));	// 3621 mov     word_14AFE, dx ;~ 01C2:152E
cs=0x1c2;eip=0x001532; 	R(RETN(0));	// 3622 retn ;~ 01C2:1532
ret_1c2_1533:
	// 4700 
cs=0x1c2;eip=0x001533; 	X(MOV(word_14af8, 0x150));	// 3624 mov     word_14AF8, 150h ;~ 01C2:1533
cs=0x1c2;eip=0x001539; 	J(JMP(loc_11710));	// 3625 jmp     short loc_11710 ;~ 01C2:1539
ret_1c2_153b:
	// 4701 
cs=0x1c2;eip=0x00153b; 	T(MOV(ax, word_14aea));	// 3627 mov     ax, word_14AEA ;~ 01C2:153B
loc_1173e:
	// 4702 
cs=0x1c2;eip=0x00153e; 	X(MOV(word_14afa, ax));	// 3630 mov     word_14AFA, ax ;~ 01C2:153E
cs=0x1c2;eip=0x001541; 	T(TEST(byte_14b00, 0x0FF));	// 3631 test    byte_14B00, 0FFh ;~ 01C2:1541
cs=0x1c2;eip=0x001546; 	J(JZ(loc_1174a));	// 3632 jz      short loc_1174A ;~ 01C2:1546
cs=0x1c2;eip=0x001548; 	T(SAR(ax, 1));	// 3633 sar     ax, 1 ;~ 01C2:1548
loc_1174a:
	// 4703 
cs=0x1c2;eip=0x00154a; 	X(ADD(word_14af6, ax));	// 3636 add     word_14AF6, ax ;~ 01C2:154A
cs=0x1c2;eip=0x00154e; 	T(XOR(ax, ax));	// 3637 xor     ax, ax ;~ 01C2:154E
cs=0x1c2;eip=0x001550; 	X(MOV(word_14afc, ax));	// 3638 mov     word_14AFC, ax ;~ 01C2:1550
cs=0x1c2;eip=0x001553; 	X(MOV(word_14afe, ax));	// 3639 mov     word_14AFE, ax ;~ 01C2:1553
cs=0x1c2;eip=0x001556; 	X(MOV(word_14af8, ax));	// 3640 mov     word_14AF8, ax ;~ 01C2:1556
cs=0x1c2;eip=0x001559; 	R(RETN(0));	// 3641 retn ;~ 01C2:1559
ret_1c2_155a:
	// 4704 
cs=0x1c2;eip=0x00155a; 	T(MOV(ax, word_14aea));	// 3643 mov     ax, word_14AEA ;~ 01C2:155A
cs=0x1c2;eip=0x00155d; 	J(JMP(loc_1173e));	// 3644 jmp     short loc_1173E ;~ 01C2:155D
ret_1c2_155f:
	// 4705 
cs=0x1c2;eip=0x00155f; 	T(MOV(ax, word_14aea));	// 3646 mov     ax, word_14AEA ;~ 01C2:155F
cs=0x1c2;eip=0x001562; 	T(CMP(ax, 0x10));	// 3647 cmp     ax, 10h ;~ 01C2:1562
cs=0x1c2;eip=0x001565; 	J(JBE(loc_1176a));	// 3648 jbe     short loc_1176A ;~ 01C2:1565
cs=0x1c2;eip=0x001567; 	T(MOV(ax, 0x10));	// 3649 mov     ax, 10h ;~ 01C2:1567
loc_1176a:
	// 4706 
cs=0x1c2;eip=0x00156a; 	X(MOV(word_14afa, ax));	// 3653 mov     word_14AFA, ax ;~ 01C2:156A
cs=0x1c2;eip=0x00156d; 	X(ADD(word_14af6, ax));	// 3654 add     word_14AF6, ax ;~ 01C2:156D
cs=0x1c2;eip=0x001571; 	T(MOV(ax, 0x150));	// 3655 mov     ax, 150h ;~ 01C2:1571
cs=0x1c2;eip=0x001574; 	X(MOV(word_14af8, ax));	// 3656 mov     word_14AF8, ax ;~ 01C2:1574
cs=0x1c2;eip=0x001577; 	J(JMP(loc_11716));	// 3657 jmp     short loc_11716 ;~ 01C2:1577
ret_1c2_1579:
	// 4707 
cs=0x1c2;eip=0x001579; 	T(MOV(ax, word_14aea));	// 3659 mov     ax, word_14AEA ;~ 01C2:1579
cs=0x1c2;eip=0x00157c; 	T(CMP(ax, 0x0FFF0));	// 3660 cmp     ax, 0FFF0h ;~ 01C2:157C
cs=0x1c2;eip=0x00157f; 	J(JNC(loc_1176a));	// 3661 jnb     short loc_1176A ;~ 01C2:157F
cs=0x1c2;eip=0x001581; 	T(MOV(ax, 0x0FFF0));	// 3662 mov     ax, 0FFF0h ;~ 01C2:1581
cs=0x1c2;eip=0x001584; 	J(JMP(loc_1176a));	// 3663 jmp     short loc_1176A ;~ 01C2:1584
ret_1c2_1586:
	// 4708 
cs=0x1c2;eip=0x001586; 	T(MOV(ax, word_14aea));	// 3665 mov     ax, word_14AEA ;~ 01C2:1586
cs=0x1c2;eip=0x001589; 	T(CMP(ax, 0x10));	// 3666 cmp     ax, 10h ;~ 01C2:1589
cs=0x1c2;eip=0x00158c; 	J(JBE(loc_11791));	// 3667 jbe     short loc_11791 ;~ 01C2:158C
cs=0x1c2;eip=0x00158e; 	T(MOV(ax, 0x10));	// 3668 mov     ax, 10h ;~ 01C2:158E
loc_11791:
	// 4709 
cs=0x1c2;eip=0x001591; 	X(MOV(word_14afa, ax));	// 3672 mov     word_14AFA, ax ;~ 01C2:1591
cs=0x1c2;eip=0x001594; 	X(ADD(word_14af6, ax));	// 3673 add     word_14AF6, ax ;~ 01C2:1594
cs=0x1c2;eip=0x001598; 	T(MOV(ax, 0x0FEB0));	// 3674 mov     ax, 0FEB0h ;~ 01C2:1598
cs=0x1c2;eip=0x00159b; 	X(MOV(word_14af8, ax));	// 3675 mov     word_14AF8, ax ;~ 01C2:159B
cs=0x1c2;eip=0x00159e; 	J(JMP(loc_11716));	// 3676 jmp     loc_11716 ;~ 01C2:159E
ret_1c2_15a1:
	// 4710 
cs=0x1c2;eip=0x0015a1; 	T(MOV(ax, word_14aea));	// 3678 mov     ax, word_14AEA ;~ 01C2:15A1
cs=0x1c2;eip=0x0015a4; 	T(CMP(ax, 0x0FFF0));	// 3679 cmp     ax, 0FFF0h ;~ 01C2:15A4
cs=0x1c2;eip=0x0015a7; 	J(JNC(loc_11791));	// 3680 jnb     short loc_11791 ;~ 01C2:15A7
cs=0x1c2;eip=0x0015a9; 	T(MOV(ax, 0x0FFF0));	// 3681 mov     ax, 0FFF0h ;~ 01C2:15A9
cs=0x1c2;eip=0x0015ac; 	J(JMP(loc_11791));	// 3682 jmp     short loc_11791 ;~ 01C2:15AC
ret_1c2_15ae:
	// 4711 
cs=0x1c2;eip=0x0015ae; 	X(POP(ax));	// 3684 pop     ax ;~ 01C2:15AE
cs=0x1c2;eip=0x0015af; 	T(TEST(byte_14b00, 0x0FF));	// 3685 test    byte_14B00, 0FFh ;~ 01C2:15AF
cs=0x1c2;eip=0x0015b4; 	J(JZ(loc_117be));	// 3686 jz      short loc_117BE ;~ 01C2:15B4
cs=0x1c2;eip=0x0015b6; 	X(MOV(byte_14b00, 0));	// 3687 mov     byte_14B00, 0 ;~ 01C2:15B6
cs=0x1c2;eip=0x0015bb; 	J(JMP(loc_1378a));	// 3688 jmp     loc_1378A ;~ 01C2:15BB
loc_117be:
	// 4712 
cs=0x1c2;eip=0x0015be; 	J(CALL(sub_10438,0));	// 3692 call    sub_10438 ;~ 01C2:15BE
cs=0x1c2;eip=0x0015c1; 	J(CALL(sub_14005,0));	// 3693 call    sub_14005 ;~ 01C2:15C1
cs=0x1c2;eip=0x0015c4; 	J(JMP(loc_13ca0));	// 3694 jmp     loc_13CA0 ;~ 01C2:15C4
ret_1c2_15c7:
	// 4713 
cs=0x1c2;eip=0x0015c7; 	X(POP(ax));	// 3696 pop     ax ;~ 01C2:15C7
cs=0x1c2;eip=0x0015c8; 	X(MOV(byte_14b00, 0));	// 3697 mov     byte_14B00, 0 ;~ 01C2:15C8
cs=0x1c2;eip=0x0015cd; 	J(CALL(sub_10438,0));	// 3698 call    sub_10438 ;~ 01C2:15CD
cs=0x1c2;eip=0x0015d0; 	J(CALL(sub_14005,0));	// 3699 call    sub_14005 ;~ 01C2:15D0
cs=0x1c2;eip=0x0015d3; 	J(JMP(loc_13d1e));	// 3700 jmp     loc_13D1E ;~ 01C2:15D3
ret_1c2_15d6:
	// 4714 
cs=0x1c2;eip=0x0015d6; 	X(POP(ax));	// 3702 pop     ax ;~ 01C2:15D6
cs=0x1c2;eip=0x0015d7; 	J(JMP(loc_134c0));	// 3703 jmp     loc_134C0 ;~ 01C2:15D7
sub_121df:
	// 5103 
cs=0x1c2;eip=0x001fdf; 	X(MOV(word_14b43, 0));	// 5105 mov     word_14B43, 0 ;~ 01C2:1FDF
ret_1c2_1fe5:
	// 4874 
cs=0x1c2;eip=0x001fe5; 	X(MOV(word_153a8, 0x0D6C));	// 5106 mov     word_153A8, 0D6Ch ;~ 01C2:1FE5
cs=0x1c2;eip=0x001feb; 	X(MOV(word_153aa, 0x0D70));	// 5107 mov     word_153AA, 0D70h ;~ 01C2:1FEB
loc_121f1:
	// 4875 
cs=0x1c2;eip=0x001ff1; 	T(MOV(ax, word_14b43));	// 5110 mov     ax, word_14B43 ;~ 01C2:1FF1
cs=0x1c2;eip=0x001ff4; 	T(SHL(ax, 1));	// 5111 shl     ax, 1 ;~ 01C2:1FF4
cs=0x1c2;eip=0x001ff6; 	T(MOV(di, word_14b3d));	// 5112 mov     di, word_14B3D ;~ 01C2:1FF6
cs=0x1c2;eip=0x001ffa; 	T(ADD(di, ax));	// 5113 add     di, ax ;~ 01C2:1FFA
cs=0x1c2;eip=0x001ffc; 	T(MOV(al, *(raddr(ds,di))));	// 5114 mov     al, [di] ;~ 01C2:1FFC
cs=0x1c2;eip=0x001ffe; 	T(CMP(al, 0x0FF));	// 5115 cmp     al, 0FFh ;~ 01C2:1FFE
cs=0x1c2;eip=0x002000; 	J(JZ(loc_1225c));	// 5116 jz      short loc_1225C ;~ 01C2:2000
cs=0x1c2;eip=0x002002; 	T(SUB(ah, ah));	// 5117 sub     ah, ah ;~ 01C2:2002
cs=0x1c2;eip=0x002004; 	T(SHL(ax, 1));	// 5118 shl     ax, 1 ;~ 01C2:2004
cs=0x1c2;eip=0x002006; 	T(SHL(ax, 1));	// 5119 shl     ax, 1 ;~ 01C2:2006
cs=0x1c2;eip=0x002008; 	T(MOV(si, 0x0BBA3));	// 5120 mov     si, 0BBA3h ;~ 01C2:2008
cs=0x1c2;eip=0x00200b; 	X(PUSH(si));	// 5121 push    si ;~ 01C2:200B
cs=0x1c2;eip=0x00200c; 	T(ADD(si, ax));	// 5122 add     si, ax ;~ 01C2:200C
cs=0x1c2;eip=0x00200e; 	T(LODSW);	// 5123 lodsw ;~ 01C2:200E
cs=0x1c2;eip=0x00200f; 	T(MOV(bx, ax));	// 5124 mov     bx, ax ;~ 01C2:200F
cs=0x1c2;eip=0x002011; 	T(LODSW);	// 5125 lodsw ;~ 01C2:2011
cs=0x1c2;eip=0x002012; 	X(MOV(word_153ae, ax));	// 5126 mov     word_153AE, ax ;~ 01C2:2012
cs=0x1c2;eip=0x002015; 	X(MOV(word_153ac, bx));	// 5127 mov     word_153AC, bx ;~ 01C2:2015
cs=0x1c2;eip=0x002019; 	T(INC(di));	// 5128 inc     di ;~ 01C2:2019
cs=0x1c2;eip=0x00201a; 	T(MOV(al, *(raddr(ds,di))));	// 5129 mov     al, [di] ;~ 01C2:201A
cs=0x1c2;eip=0x00201c; 	T(SUB(ah, ah));	// 5130 sub     ah, ah ;~ 01C2:201C
cs=0x1c2;eip=0x00201e; 	T(SHL(ax, 1));	// 5131 shl     ax, 1 ;~ 01C2:201E
cs=0x1c2;eip=0x002020; 	T(SHL(ax, 1));	// 5132 shl     ax, 1 ;~ 01C2:2020
cs=0x1c2;eip=0x002022; 	X(POP(si));	// 5133 pop     si ;~ 01C2:2022
cs=0x1c2;eip=0x002023; 	T(ADD(si, ax));	// 5134 add     si, ax ;~ 01C2:2023
cs=0x1c2;eip=0x002025; 	T(LODSW);	// 5135 lodsw ;~ 01C2:2025
cs=0x1c2;eip=0x002026; 	T(MOV(bx, ax));	// 5136 mov     bx, ax ;~ 01C2:2026
cs=0x1c2;eip=0x002028; 	T(LODSW);	// 5137 lodsw ;~ 01C2:2028
cs=0x1c2;eip=0x002029; 	X(MOV(word_153b2, ax));	// 5138 mov     word_153B2, ax ;~ 01C2:2029
cs=0x1c2;eip=0x00202c; 	X(MOV(word_153b0, bx));	// 5139 mov     word_153B0, bx ;~ 01C2:202C
cs=0x1c2;eip=0x002030; 	T(TEST(byte_153a2, 1));	// 5140 test    byte_153A2, 1 ;~ 01C2:2030
cs=0x1c2;eip=0x002035; 	J(JZ(loc_1223f));	// 5141 jz      short loc_1223F ;~ 01C2:2035
cs=0x1c2;eip=0x002037; 	X(NEG(word_153ac));	// 5142 neg     word_153AC ;~ 01C2:2037
cs=0x1c2;eip=0x00203b; 	X(NEG(word_153b0));	// 5143 neg     word_153B0 ;~ 01C2:203B
loc_1223f:
	// 4876 
cs=0x1c2;eip=0x00203f; 	T(MOV(si, 0x4FF));	// 5146 mov     si, 4FFh ;~ 01C2:203F
cs=0x1c2;eip=0x002042; 	T(MOV(di, 0x0D6C));	// 5147 mov     di, 0D6Ch ;~ 01C2:2042
cs=0x1c2;eip=0x002045; 	J(CALL(sub_12262,0));	// 5148 call    sub_12262 ;~ 01C2:2045
cs=0x1c2;eip=0x002048; 	T(MOV(si, 0x4FF));	// 5149 mov     si, 4FFh ;~ 01C2:2048
cs=0x1c2;eip=0x00204b; 	J(CALL(sub_12262,0));	// 5150 call    sub_12262 ;~ 01C2:204B
loc_1224e:
	// 4877 
cs=0x1c2;eip=0x00204e; 	T(MOV(ax, seg_offset(seg003)));	// 5153 mov     ax, seg seg003 ;~ 01C2:204E
cs=0x1c2;eip=0x002051; 	T(MOV(es, ax));	// 5154 mov     es, ax ;~ 01C2:2051
cs=0x1c2;eip=0x002053; 	J(CALL(sub_13040,0));	// 5156 call    sub_13040 ;~ 01C2:2053
cs=0x1c2;eip=0x002056; 	X(INC(word_14b43));	// 5157 inc     word_14B43 ;~ 01C2:2056
cs=0x1c2;eip=0x00205a; 	J(JMP(loc_121f1));	// 5158 jmp     short loc_121F1 ;~ 01C2:205A
loc_1225c:
	// 4878 
cs=0x1c2;eip=0x00205c; 	T(MOV(ax, seg_offset(seg002)));	// 5163 mov     ax, seg seg002 ;~ 01C2:205C
cs=0x1c2;eip=0x00205f; 	T(MOV(es, ax));	// 5164 mov     es, ax ;~ 01C2:205F
cs=0x1c2;eip=0x002061; 	R(RETN(0));	// 5166 retn ;~ 01C2:2061
sub_12350:
	// 5337 
cs=0x1c2;eip=0x002150; 	T(MOV(dx, word_14af6));	// 5338 mov     dx, word_14AF6 ;~ 01C2:2150
loc_12354:
	// 4896 
cs=0x1c2;eip=0x002154; 	T(CMP(dx, 0x480));	// 5341 cmp     dx, 480h ;~ 01C2:2154
cs=0x1c2;eip=0x002158; 	J(JC(loc_12360));	// 5342 jb      short loc_12360 ;~ 01C2:2158
cs=0x1c2;eip=0x00215a; 	T(SUB(dx, 0x480));	// 5343 sub     dx, 480h ;~ 01C2:215A
cs=0x1c2;eip=0x00215e; 	J(JMP(loc_12354));	// 5344 jmp     short loc_12354 ;~ 01C2:215E
loc_12360:
	// 4897 
cs=0x1c2;eip=0x002160; 	T(MOV(ax, 0x168));	// 5348 mov     ax, 168h ;~ 01C2:2160
cs=0x1c2;eip=0x002163; 	T(ADD(ax, dx));	// 5349 add     ax, dx ;~ 01C2:2163
cs=0x1c2;eip=0x002165; 	X(MOV(word_14d50, ax));	// 5350 mov     word_14D50, ax ;~ 01C2:2165
cs=0x1c2;eip=0x002168; 	X(MOV(word_14af6, dx));	// 5351 mov     word_14AF6, dx ;~ 01C2:2168
cs=0x1c2;eip=0x00216c; 	X(MOV(byte_153a3, 2));	// 5352 mov     byte_153A3, 2 ;~ 01C2:216C
cs=0x1c2;eip=0x002171; 	T(MOV(bx, 0x0FF60));	// 5353 mov     bx, 0FF60h ;~ 01C2:2171
cs=0x1c2;eip=0x002174; 	T(SUB(bx, dx));	// 5354 sub     bx, dx ;~ 01C2:2174
cs=0x1c2;eip=0x002176; 	X(MOV(word_153a8, 0x0D6C));	// 5355 mov     word_153A8, 0D6Ch ;~ 01C2:2176
cs=0x1c2;eip=0x00217c; 	X(MOV(word_153aa, 0x0D70));	// 5356 mov     word_153AA, 0D70h ;~ 01C2:217C
cs=0x1c2;eip=0x002182; 	T(MOV(si, 0x0B580));	// 5357 mov     si, 0B580h ;~ 01C2:2182
cs=0x1c2;eip=0x002185; 	T(MOV(cx, 0));	// 5358 mov     cx, 0 ;~ 01C2:2185
loc_12388:
	// 4898 
cs=0x1c2;eip=0x002188; 	T(LODSW);	// 5362 lodsw ;~ 01C2:2188
cs=0x1c2;eip=0x002189; 	T(CMP(ax, 0x0FFFF));	// 5363 cmp     ax, 0FFFFh ;~ 01C2:2189
cs=0x1c2;eip=0x00218c; 	J(JNZ(loc_12391));	// 5364 jnz     short loc_12391 ;~ 01C2:218C
cs=0x1c2;eip=0x00218e; 	T(INC(cx));	// 5365 inc     cx ;~ 01C2:218E
cs=0x1c2;eip=0x00218f; 	J(JMP(loc_12388));	// 5366 jmp     short loc_12388 ;~ 01C2:218F
loc_12391:
	// 4899 
cs=0x1c2;eip=0x002191; 	T(CMP(ax, dx));	// 5370 cmp     ax, dx ;~ 01C2:2191
cs=0x1c2;eip=0x002193; 	J(JNC(loc_1239a));	// 5371 jnb     short loc_1239A ;~ 01C2:2193
cs=0x1c2;eip=0x002195; 	T(ADD(si, 2));	// 5372 add     si, 2 ;~ 01C2:2195
cs=0x1c2;eip=0x002198; 	J(JMP(loc_12388));	// 5373 jmp     short loc_12388 ;~ 01C2:2198
loc_1239a:
	// 4900 
cs=0x1c2;eip=0x00219a; 	T(ADD(si, 0x0FFFE));	// 5377 add     si, 0FFFEh ;~ 01C2:219A
cs=0x1c2;eip=0x00219d; 	J(JCXZ(loc_123b4));	// 5378 jcxz    short loc_123B4 ;~ 01C2:219D
cs=0x1c2;eip=0x00219f; 	T(DEC(cx));	// 5379 dec     cx ;~ 01C2:219F
loc_123a0:
	// 4901 
cs=0x1c2;eip=0x0021a0; 	T(ADD(si, 0x0FFFC));	// 5382 add     si, 0FFFCh ;~ 01C2:21A0
cs=0x1c2;eip=0x0021a3; 	T(LODSW);	// 5383 lodsw ;~ 01C2:21A3
cs=0x1c2;eip=0x0021a4; 	T(CMP(ax, 0x0FFFF));	// 5384 cmp     ax, 0FFFFh ;~ 01C2:21A4
cs=0x1c2;eip=0x0021a7; 	J(JNZ(loc_123a0));	// 5385 jnz     short loc_123A0 ;~ 01C2:21A7
cs=0x1c2;eip=0x0021a9; 	J(JCXZ(loc_123b4));	// 5386 jcxz    short loc_123B4 ;~ 01C2:21A9
loc_123ab:
	// 4902 
cs=0x1c2;eip=0x0021ab; 	T(ADD(si, 0x0FFFC));	// 5389 add     si, 0FFFCh ;~ 01C2:21AB
cs=0x1c2;eip=0x0021ae; 	T(LODSW);	// 5390 lodsw ;~ 01C2:21AE
cs=0x1c2;eip=0x0021af; 	T(CMP(ax, 0x0FFFF));	// 5391 cmp     ax, 0FFFFh ;~ 01C2:21AF
cs=0x1c2;eip=0x0021b2; 	J(JNZ(loc_123ab));	// 5392 jnz     short loc_123AB ;~ 01C2:21B2
loc_123b4:
	// 4903 
cs=0x1c2;eip=0x0021b4; 	T(MOV(cx, 0));	// 5396 mov     cx, 0 ;~ 01C2:21B4
cs=0x1c2;eip=0x0021b7; 	T(CMP(si, 0x0B580));	// 5397 cmp     si, 0B580h ;~ 01C2:21B7
cs=0x1c2;eip=0x0021bb; 	J(JNC(loc_123c0));	// 5398 jnb     short loc_123C0 ;~ 01C2:21BB
cs=0x1c2;eip=0x0021bd; 	T(MOV(si, 0x0B582));	// 5399 mov     si, 0B582h ;~ 01C2:21BD
loc_123c0:
	// 4904 
cs=0x1c2;eip=0x0021c0; 	T(MOV(di, 0x0D6C));	// 5403 mov     di, 0D6Ch ;~ 01C2:21C0
cs=0x1c2;eip=0x0021c3; 	T(LODSW);	// 5404 lodsw ;~ 01C2:21C3
cs=0x1c2;eip=0x0021c4; 	T(CMP(ax, word_14d50));	// 5405 cmp     ax, word_14D50 ;~ 01C2:21C4
cs=0x1c2;eip=0x0021c8; 	J(JNC(locret_123f2));	// 5406 jnb     short locret_123F2 ;~ 01C2:21C8
cs=0x1c2;eip=0x0021ca; 	T(ADD(ax, bx));	// 5407 add     ax, bx ;~ 01C2:21CA
cs=0x1c2;eip=0x0021cc; 	X(STOSW);	// 5408 stosw ;~ 01C2:21CC
cs=0x1c2;eip=0x0021cd; 	T(LODSW);	// 5409 lodsw ;~ 01C2:21CD
cs=0x1c2;eip=0x0021ce; 	T(NEG(ax));	// 5410 neg     ax ;~ 01C2:21CE
cs=0x1c2;eip=0x0021d0; 	X(STOSW);	// 5411 stosw ;~ 01C2:21D0
cs=0x1c2;eip=0x0021d1; 	T(LODSW);	// 5412 lodsw ;~ 01C2:21D1
cs=0x1c2;eip=0x0021d2; 	T(ADD(ax, bx));	// 5413 add     ax, bx ;~ 01C2:21D2
cs=0x1c2;eip=0x0021d4; 	X(STOSW);	// 5414 stosw ;~ 01C2:21D4
cs=0x1c2;eip=0x0021d5; 	T(LODSW);	// 5415 lodsw ;~ 01C2:21D5
cs=0x1c2;eip=0x0021d6; 	T(NEG(ax));	// 5416 neg     ax ;~ 01C2:21D6
cs=0x1c2;eip=0x0021d8; 	X(STOSW);	// 5417 stosw ;~ 01C2:21D8
cs=0x1c2;eip=0x0021d9; 	X(PUSH(bx));	// 5418 push    bx ;~ 01C2:21D9
cs=0x1c2;eip=0x0021da; 	X(PUSH(si));	// 5419 push    si ;~ 01C2:21DA
cs=0x1c2;eip=0x0021db; 	X(PUSH(es));	// 5420 push    es ;~ 01C2:21DB
loc_123dc:
	// 4905 
cs=0x1c2;eip=0x0021dc; 	T(MOV(ax, seg_offset(seg003)));	// 5423 mov     ax, seg seg003 ;~ 01C2:21DC
cs=0x1c2;eip=0x0021df; 	T(MOV(es, ax));	// 5424 mov     es, ax ;~ 01C2:21DF
cs=0x1c2;eip=0x0021e1; 	J(CALL(sub_13040,0));	// 5426 call    sub_13040 ;~ 01C2:21E1
cs=0x1c2;eip=0x0021e4; 	X(POP(es));	// 5427 pop     es ;~ 01C2:21E4
cs=0x1c2;eip=0x0021e5; 	X(POP(si));	// 5429 pop     si ;~ 01C2:21E5
cs=0x1c2;eip=0x0021e6; 	X(POP(bx));	// 5430 pop     bx ;~ 01C2:21E6
cs=0x1c2;eip=0x0021e7; 	T(LODSW);	// 5431 lodsw ;~ 01C2:21E7
cs=0x1c2;eip=0x0021e8; 	T(CMP(ax, 0x0FFFF));	// 5432 cmp     ax, 0FFFFh ;~ 01C2:21E8
cs=0x1c2;eip=0x0021eb; 	J(JZ(loc_123c0));	// 5433 jz      short loc_123C0 ;~ 01C2:21EB
cs=0x1c2;eip=0x0021ed; 	T(ADD(si, 0x0FFFA));	// 5434 add     si, 0FFFAh ;~ 01C2:21ED
cs=0x1c2;eip=0x0021f0; 	J(JMP(loc_123c0));	// 5435 jmp     short loc_123C0 ;~ 01C2:21F0
locret_123f2:
	// 4906 
cs=0x1c2;eip=0x0021f2; 	R(RETN(0));	// 5439 retn ;~ 01C2:21F2
sub_128a1:
	// 6022 
cs=0x1c2;eip=0x0026a1; 	T(XOR(ah, ah));	// 6024 xor     ah, ah ;~ 01C2:26A1
ret_1c2_26a3:
	// 4962 
cs=0x1c2;eip=0x0026a3; 	T(SHR(al, 1));	// 6025 shr     al, 1 ;~ 01C2:26A3
cs=0x1c2;eip=0x0026a5; 	X(MUL1_1(byte_14d58));	// 6026 mul     byte_14D58 ;~ 01C2:26A5
cs=0x1c2;eip=0x0026a9; 	T(MOV(si, ax));	// 6027 mov     si, ax ;~ 01C2:26A9
cs=0x1c2;eip=0x0026ab; 	T(MOV(di, si));	// 6028 mov     di, si ;~ 01C2:26AB
cs=0x1c2;eip=0x0026ad; 	X(PUSH(es));	// 6029 push    es ;~ 01C2:26AD
cs=0x1c2;eip=0x0026ae; 	T(MOV(ax, 0x0B800));	// 6030 mov     ax, 0B800h ;~ 01C2:26AE
cs=0x1c2;eip=0x0026b1; 	T(MOV(es, ax));	// 6031 mov     es, ax ;~ 01C2:26B1
loc_128b3:
	// 4963 
cs=0x1c2;eip=0x0026b3; 	T(MOV(ax, seg_offset(seg003)));	// 6035 mov     ax, seg seg003 ;~ 01C2:26B3
cs=0x1c2;eip=0x0026b6; 	X(PUSH(ds));	// 6036 push    ds ;~ 01C2:26B6
cs=0x1c2;eip=0x0026b7; 	T(MOV(ds, ax));	// 6037 mov     ds, ax ;~ 01C2:26B7
loc_128b9:
	// 4964 
cs=0x1c2;eip=0x0026b9; 	T(MOV(cx, 0x28));	// 6041 mov     cx, 28h ; '(' ;~ 01C2:26B9
	// 6042 rep movsw ;~ 01C2:26BC
cs=0x1c2;eip=0x0026bc; 	X(	REP MOVSW);	// 6042 rep movsw ;~ 01C2:26BC
cs=0x1c2;eip=0x0026be; 	T(ADD(si, 0x1FB0));	// 6043 add     si, 1FB0h ;~ 01C2:26BE
cs=0x1c2;eip=0x0026c2; 	T(MOV(di, si));	// 6044 mov     di, si ;~ 01C2:26C2
cs=0x1c2;eip=0x0026c4; 	T(MOV(cx, 0x28));	// 6045 mov     cx, 28h ; '(' ;~ 01C2:26C4
	// 6046 rep movsw ;~ 01C2:26C7
cs=0x1c2;eip=0x0026c7; 	X(	REP MOVSW);	// 6046 rep movsw ;~ 01C2:26C7
cs=0x1c2;eip=0x0026c9; 	T(ADD(si, 0x0E000));	// 6047 add     si, 0E000h ;~ 01C2:26C9
cs=0x1c2;eip=0x0026cd; 	T(MOV(di, si));	// 6048 mov     di, si ;~ 01C2:26CD
cs=0x1c2;eip=0x0026cf; 	T(DEC(bl));	// 6049 dec     bl ;~ 01C2:26CF
cs=0x1c2;eip=0x0026d1; 	J(JZ(loc_128d7));	// 6050 jz      short loc_128D7 ;~ 01C2:26D1
cs=0x1c2;eip=0x0026d3; 	T(DEC(bl));	// 6051 dec     bl ;~ 01C2:26D3
cs=0x1c2;eip=0x0026d5; 	J(JNZ(loc_128b9));	// 6052 jnz     short loc_128B9 ;~ 01C2:26D5
loc_128d7:
	// 4965 
cs=0x1c2;eip=0x0026d7; 	X(POP(ds));	// 6055 pop     ds ;~ 01C2:26D7
cs=0x1c2;eip=0x0026d8; 	X(POP(es));	// 6057 pop     es ;~ 01C2:26D8
cs=0x1c2;eip=0x0026d9; 	R(RETN(0));	// 6059 retn ;~ 01C2:26D9
sub_1297d:
	// 6161 
cs=0x1c2;eip=0x00277d; 	T(MOV(si, word_153ba));	// 6162 mov     si, word_153BA ;~ 01C2:277D
ret_1c2_2781:
	// 4974 
cs=0x1c2;eip=0x002781; 	T(ADD(si, 0x0FC19));	// 6163 add     si, 0FC19h ;~ 01C2:2781
cs=0x1c2;eip=0x002785; 	X(MOV(word_14d59, si));	// 6164 mov     word_14D59, si ;~ 01C2:2785
cs=0x1c2;eip=0x002789; 	X(MOV(word_14d5b, 0x4000));	// 6165 mov     word_14D5B, 4000h ;~ 01C2:2789
cs=0x1c2;eip=0x00278f; 	X(MOV(word_14af6, 0));	// 6166 mov     word_14AF6, 0 ;~ 01C2:278F
cs=0x1c2;eip=0x002795; 	X(MOV(byte_14d5d, 0));	// 6167 mov     byte_14D5D, 0 ;~ 01C2:2795
cs=0x1c2;eip=0x00279a; 	X(PUSH(es));	// 6168 push    es ;~ 01C2:279A
loc_1299b:
	// 4975 
cs=0x1c2;eip=0x00279b; 	T(MOV(ax, seg_offset(seg003)));	// 6171 mov     ax, seg seg003 ;~ 01C2:279B
cs=0x1c2;eip=0x00279e; 	T(MOV(es, ax));	// 6172 mov     es, ax ;~ 01C2:279E
cs=0x1c2;eip=0x0027a0; 	T(MOV(cx, 0x1388));	// 6174 mov     cx, 1388h ;~ 01C2:27A0
cs=0x1c2;eip=0x0027a3; 	T(MOV(ax, 0));	// 6175 mov     ax, 0 ;~ 01C2:27A3
cs=0x1c2;eip=0x0027a6; 	T(MOV(di, 0x4000));	// 6176 mov     di, 4000h ;~ 01C2:27A6
	// 6177 rep stosw ;~ 01C2:27A9
cs=0x1c2;eip=0x0027a9; 	X(	REP STOSW);	// 6177 rep stosw ;~ 01C2:27A9
cs=0x1c2;eip=0x0027ab; 	X(POP(es));	// 6178 pop     es ;~ 01C2:27AB
loc_129ac:
	// 4976 
cs=0x1c2;eip=0x0027ac; 	J(CALL(sub_1372f,0));	// 6183 call    sub_1372F ;~ 01C2:27AC
cs=0x1c2;eip=0x0027af; 	J(CALL(sub_12350,0));	// 6184 call    sub_12350 ;~ 01C2:27AF
cs=0x1c2;eip=0x0027b2; 	X(PUSH(es));	// 6185 push    es ;~ 01C2:27B2
cs=0x1c2;eip=0x0027b3; 	X(PUSH(ds));	// 6186 push    ds ;~ 01C2:27B3
cs=0x1c2;eip=0x0027b4; 	T(MOV(si, word_14d59));	// 6187 mov     si, word_14D59 ;~ 01C2:27B4
cs=0x1c2;eip=0x0027b8; 	T(MOV(di, word_14d5b));	// 6188 mov     di, word_14D5B ;~ 01C2:27B8
loc_129bc:
	// 4977 
cs=0x1c2;eip=0x0027bc; 	T(MOV(ax, seg_offset(seg003)));	// 6191 mov     ax, seg seg003 ;~ 01C2:27BC
cs=0x1c2;eip=0x0027bf; 	T(MOV(es, ax));	// 6192 mov     es, ax ;~ 01C2:27BF
cs=0x1c2;eip=0x0027c1; 	T(MOV(ds, ax));	// 6194 mov     ds, ax ;~ 01C2:27C1
cs=0x1c2;eip=0x0027c3; 	T(MOV(bl, 0x0D));	// 6196 mov     bl, 0Dh ;~ 01C2:27C3
loc_129c5:
	// 4978 
cs=0x1c2;eip=0x0027c5; 	T(MOV(cx, 0x26));	// 6199 mov     cx, 26h ; '&' ;~ 01C2:27C5
cs=0x1c2;eip=0x0027c8; 	T(TEST(*(&byte_14d5d), 0x0FF));	// 6200 test    ss:byte_14D5D, 0FFh ;~ 01C2:27C8
cs=0x1c2;eip=0x0027ce; 	J(JNZ(loc_12a1a));	// 6201 jnz     short loc_12A1A ;~ 01C2:27CE
	// 6202 rep movsw ;~ 01C2:27D0
cs=0x1c2;eip=0x0027d0; 	X(	REP MOVSW);	// 6202 rep movsw ;~ 01C2:27D0
cs=0x1c2;eip=0x0027d2; 	T(ADD(di, 0x124));	// 6203 add     di, 124h ;~ 01C2:27D2
cs=0x1c2;eip=0x0027d6; 	T(ADD(si, 0x1FB4));	// 6204 add     si, 1FB4h ;~ 01C2:27D6
cs=0x1c2;eip=0x0027da; 	T(MOV(cx, 0x26));	// 6205 mov     cx, 26h ; '&' ;~ 01C2:27DA
	// 6206 rep movsw ;~ 01C2:27DD
cs=0x1c2;eip=0x0027dd; 	X(	REP MOVSW);	// 6206 rep movsw ;~ 01C2:27DD
cs=0x1c2;eip=0x0027df; 	T(ADD(di, 0x124));	// 6207 add     di, 124h ;~ 01C2:27DF
cs=0x1c2;eip=0x0027e3; 	T(ADD(si, 0x0E004));	// 6208 add     si, 0E004h ;~ 01C2:27E3
loc_129e7:
	// 4979 
cs=0x1c2;eip=0x0027e7; 	T(DEC(bl));	// 6211 dec     bl ;~ 01C2:27E7
cs=0x1c2;eip=0x0027e9; 	J(JNZ(loc_129c5));	// 6212 jnz     short loc_129C5 ;~ 01C2:27E9
cs=0x1c2;eip=0x0027eb; 	X(POP(ds));	// 6213 pop     ds ;~ 01C2:27EB
cs=0x1c2;eip=0x0027ec; 	X(POP(es));	// 6215 pop     es ;~ 01C2:27EC
cs=0x1c2;eip=0x0027ed; 	X(ADD(word_14af6, 0x130));	// 6217 add     word_14AF6, 130h ;~ 01C2:27ED
cs=0x1c2;eip=0x0027f3; 	X(ADD(word_14d5b, 0x4C));	// 6218 add     word_14D5B, 4Ch ; 'L' ;~ 01C2:27F3
cs=0x1c2;eip=0x0027f8; 	T(CMP(word_14d5b, 0x4130));	// 6219 cmp     word_14D5B, 4130h ;~ 01C2:27F8
cs=0x1c2;eip=0x0027fe; 	J(JC(loc_129ac));	// 6220 jb      short loc_129AC ;~ 01C2:27FE
cs=0x1c2;eip=0x002800; 	X(MOV(byte_14d5d, 0x0FF));	// 6221 mov     byte_14D5D, 0FFh ;~ 01C2:2800
cs=0x1c2;eip=0x002805; 	J(JZ(loc_129ac));	// 6222 jz      short loc_129AC ;~ 01C2:2805
cs=0x1c2;eip=0x002807; 	X(PUSH(es));	// 6223 push    es ;~ 01C2:2807
loc_12a08:
	// 4980 
cs=0x1c2;eip=0x002808; 	T(MOV(ax, seg_offset(seg003)));	// 6226 mov     ax, seg seg003 ;~ 01C2:2808
cs=0x1c2;eip=0x00280b; 	T(MOV(es, ax));	// 6227 mov     es, ax ;~ 01C2:280B
cs=0x1c2;eip=0x00280d; 	T(MOV(di, 0x6280));	// 6229 mov     di, 6280h ;~ 01C2:280D
cs=0x1c2;eip=0x002810; 	T(MOV(cx, 0x0B8));	// 6230 mov     cx, 0B8h ; '¸' ;~ 01C2:2810
cs=0x1c2;eip=0x002813; 	T(MOV(ax, 0x5555));	// 6231 mov     ax, 5555h ;~ 01C2:2813
	// 6232 rep stosw ;~ 01C2:2816
cs=0x1c2;eip=0x002816; 	X(	REP STOSW);	// 6232 rep stosw ;~ 01C2:2816
cs=0x1c2;eip=0x002818; 	X(POP(es));	// 6233 pop     es ;~ 01C2:2818
cs=0x1c2;eip=0x002819; 	R(RETN(0));	// 6235 retn ;~ 01C2:2819
loc_12a1a:
	// 4981 
cs=0x1c2;eip=0x00281a; 	T(MOV(cx, 0x20));	// 6240 mov     cx, 20h ; ' ' ;~ 01C2:281A
	// 6241 rep movsw ;~ 01C2:281D
cs=0x1c2;eip=0x00281d; 	X(	REP MOVSW);	// 6241 rep movsw ;~ 01C2:281D
cs=0x1c2;eip=0x00281f; 	T(ADD(di, 0x130));	// 6242 add     di, 130h ;~ 01C2:281F
cs=0x1c2;eip=0x002823; 	T(ADD(si, 0x1FC0));	// 6243 add     si, 1FC0h ;~ 01C2:2823
cs=0x1c2;eip=0x002827; 	T(MOV(cx, 0x20));	// 6244 mov     cx, 20h ; ' ' ;~ 01C2:2827
	// 6245 rep movsw ;~ 01C2:282A
cs=0x1c2;eip=0x00282a; 	X(	REP MOVSW);	// 6245 rep movsw ;~ 01C2:282A
cs=0x1c2;eip=0x00282c; 	T(ADD(di, 0x130));	// 6246 add     di, 130h ;~ 01C2:282C
cs=0x1c2;eip=0x002830; 	T(ADD(si, 0x0E010));	// 6247 add     si, 0E010h ;~ 01C2:2830
cs=0x1c2;eip=0x002834; 	J(JMP(loc_129e7));	// 6248 jmp     short loc_129E7 ;~ 01C2:2834
sub_12a36:
	// 6256 
cs=0x1c2;eip=0x002836; 	T(MOV(dx, word_14af6));	// 6257 mov     dx, word_14AF6 ;~ 01C2:2836
loc_12a3a:
	// 4982 
cs=0x1c2;eip=0x00283a; 	T(TEST(dx, 0x8000));	// 6260 test    dx, 8000h ;~ 01C2:283A
cs=0x1c2;eip=0x00283e; 	J(JZ(loc_12a46));	// 6261 jz      short loc_12A46 ;~ 01C2:283E
cs=0x1c2;eip=0x002840; 	T(ADD(dx, 0x480));	// 6262 add     dx, 480h ;~ 01C2:2840
cs=0x1c2;eip=0x002844; 	J(JMP(loc_12a3a));	// 6263 jmp     short loc_12A3A ;~ 01C2:2844
loc_12a46:
	// 4983 
cs=0x1c2;eip=0x002846; 	T(CMP(dx, 0x480));	// 6268 cmp     dx, 480h ;~ 01C2:2846
cs=0x1c2;eip=0x00284a; 	J(JC(loc_12a52));	// 6269 jb      short loc_12A52 ;~ 01C2:284A
cs=0x1c2;eip=0x00284c; 	T(SUB(dx, 0x480));	// 6270 sub     dx, 480h ;~ 01C2:284C
cs=0x1c2;eip=0x002850; 	J(JMP(loc_12a46));	// 6271 jmp     short loc_12A46 ;~ 01C2:2850
loc_12a52:
	// 4984 
cs=0x1c2;eip=0x002852; 	T(MOV(cx, dx));	// 6275 mov     cx, dx ;~ 01C2:2852
cs=0x1c2;eip=0x002854; 	T(AND(cx, 3));	// 6276 and     cx, 3 ;~ 01C2:2854
cs=0x1c2;eip=0x002858; 	T(SHR(dx, 1));	// 6277 shr     dx, 1 ;~ 01C2:2858
cs=0x1c2;eip=0x00285a; 	T(SHR(dx, 1));	// 6278 shr     dx, 1 ;~ 01C2:285A
cs=0x1c2;eip=0x00285c; 	T(MOV(di, word_153ba));	// 6279 mov     di, word_153BA ;~ 01C2:285C
cs=0x1c2;eip=0x002860; 	T(ADD(di, 0x0FC18));	// 6280 add     di, 0FC18h ;~ 01C2:2860
cs=0x1c2;eip=0x002864; 	T(MOV(si, 0x4000));	// 6281 mov     si, 4000h ;~ 01C2:2864
cs=0x1c2;eip=0x002867; 	T(ADD(si, dx));	// 6282 add     si, dx ;~ 01C2:2867
cs=0x1c2;eip=0x002869; 	T(MOV(dh, 0x0D));	// 6283 mov     dh, 0Dh ;~ 01C2:2869
cs=0x1c2;eip=0x00286b; 	X(PUSH(es));	// 6284 push    es ;~ 01C2:286B
cs=0x1c2;eip=0x00286c; 	X(PUSH(ds));	// 6285 push    ds ;~ 01C2:286C
loc_12a6d:
	// 4985 
cs=0x1c2;eip=0x00286d; 	T(MOV(ax, seg_offset(seg003)));	// 6288 mov     ax, seg seg003 ;~ 01C2:286D
cs=0x1c2;eip=0x002870; 	T(MOV(es, ax));	// 6289 mov     es, ax ;~ 01C2:2870
cs=0x1c2;eip=0x002872; 	T(MOV(ds, ax));	// 6291 mov     ds, ax ;~ 01C2:2872
loc_12a74:
	// 4986 
cs=0x1c2;eip=0x002874; 	T(LODSW);	// 6295 lodsw ;~ 01C2:2874
cs=0x1c2;eip=0x002875; 	T(XCHG(al, ah));	// 6296 xchg    al, ah ;~ 01C2:2875
cs=0x1c2;eip=0x002877; 	T(MOV(bx, ax));	// 6297 mov     bx, ax ;~ 01C2:2877
cs=0x1c2;eip=0x002879; 	T(MOV(dl, 0x28));	// 6298 mov     dl, 28h ; '(' ;~ 01C2:2879
loc_12a7b:
	// 4987 
cs=0x1c2;eip=0x00287b; 	T(LODSW);	// 6301 lodsw ;~ 01C2:287B
cs=0x1c2;eip=0x00287c; 	T(XCHG(al, ah));	// 6302 xchg    al, ah ;~ 01C2:287C
cs=0x1c2;eip=0x00287e; 	T(XCHG(ax, bx));	// 6303 xchg    ax, bx ;~ 01C2:287E
cs=0x1c2;eip=0x00287f; 	J(JCXZ(loc_12a91));	// 6304 jcxz    short loc_12A91 ;~ 01C2:287F
cs=0x1c2;eip=0x002881; 	T(MOV(bp, cx));	// 6305 mov     bp, cx ;~ 01C2:2881
cs=0x1c2;eip=0x002883; 	X(PUSH(bx));	// 6306 push    bx ;~ 01C2:2883
loc_12a84:
	// 4988 
cs=0x1c2;eip=0x002884; 	T(SHL(bx, 1));	// 6309 shl     bx, 1 ;~ 01C2:2884
cs=0x1c2;eip=0x002886; 	T(RCL(ax, 1));	// 6310 rcl     ax, 1 ;~ 01C2:2886
cs=0x1c2;eip=0x002888; 	T(SHL(bx, 1));	// 6311 shl     bx, 1 ;~ 01C2:2888
cs=0x1c2;eip=0x00288a; 	T(RCL(ax, 1));	// 6312 rcl     ax, 1 ;~ 01C2:288A
cs=0x1c2;eip=0x00288c; 	J(LOOP(loc_12a84));	// 6313 loop    loc_12A84 ;~ 01C2:288C
cs=0x1c2;eip=0x00288e; 	T(MOV(cx, bp));	// 6314 mov     cx, bp ;~ 01C2:288E
cs=0x1c2;eip=0x002890; 	X(POP(bx));	// 6315 pop     bx ;~ 01C2:2890
loc_12a91:
	// 4989 
cs=0x1c2;eip=0x002891; 	T(XCHG(al, ah));	// 6318 xchg    al, ah ;~ 01C2:2891
cs=0x1c2;eip=0x002893; 	X(STOSW);	// 6319 stosw ;~ 01C2:2893
cs=0x1c2;eip=0x002894; 	T(DEC(dl));	// 6320 dec     dl ;~ 01C2:2894
cs=0x1c2;eip=0x002896; 	J(JNZ(loc_12a7b));	// 6321 jnz     short loc_12A7B ;~ 01C2:2896
cs=0x1c2;eip=0x002898; 	T(ADD(di, 0x1FB0));	// 6322 add     di, 1FB0h ;~ 01C2:2898
cs=0x1c2;eip=0x00289c; 	T(ADD(si, 0x11E));	// 6323 add     si, 11Eh ;~ 01C2:289C
cs=0x1c2;eip=0x0028a0; 	T(LODSW);	// 6324 lodsw ;~ 01C2:28A0
cs=0x1c2;eip=0x0028a1; 	T(XCHG(al, ah));	// 6325 xchg    al, ah ;~ 01C2:28A1
cs=0x1c2;eip=0x0028a3; 	T(MOV(bx, ax));	// 6326 mov     bx, ax ;~ 01C2:28A3
cs=0x1c2;eip=0x0028a5; 	T(MOV(dl, 0x28));	// 6327 mov     dl, 28h ; '(' ;~ 01C2:28A5
loc_12aa7:
	// 4990 
cs=0x1c2;eip=0x0028a7; 	T(LODSW);	// 6330 lodsw ;~ 01C2:28A7
cs=0x1c2;eip=0x0028a8; 	T(XCHG(al, ah));	// 6331 xchg    al, ah ;~ 01C2:28A8
cs=0x1c2;eip=0x0028aa; 	T(XCHG(ax, bx));	// 6332 xchg    ax, bx ;~ 01C2:28AA
cs=0x1c2;eip=0x0028ab; 	J(JCXZ(loc_12abb));	// 6333 jcxz    short loc_12ABB ;~ 01C2:28AB
cs=0x1c2;eip=0x0028ad; 	X(PUSH(bx));	// 6334 push    bx ;~ 01C2:28AD
loc_12aae:
	// 4991 
cs=0x1c2;eip=0x0028ae; 	T(SHL(bx, 1));	// 6337 shl     bx, 1 ;~ 01C2:28AE
cs=0x1c2;eip=0x0028b0; 	T(RCL(ax, 1));	// 6338 rcl     ax, 1 ;~ 01C2:28B0
cs=0x1c2;eip=0x0028b2; 	T(SHL(bx, 1));	// 6339 shl     bx, 1 ;~ 01C2:28B2
cs=0x1c2;eip=0x0028b4; 	T(RCL(ax, 1));	// 6340 rcl     ax, 1 ;~ 01C2:28B4
cs=0x1c2;eip=0x0028b6; 	J(LOOP(loc_12aae));	// 6341 loop    loc_12AAE ;~ 01C2:28B6
cs=0x1c2;eip=0x0028b8; 	T(MOV(cx, bp));	// 6342 mov     cx, bp ;~ 01C2:28B8
cs=0x1c2;eip=0x0028ba; 	X(POP(bx));	// 6343 pop     bx ;~ 01C2:28BA
loc_12abb:
	// 4992 
cs=0x1c2;eip=0x0028bb; 	T(XCHG(al, ah));	// 6346 xchg    al, ah ;~ 01C2:28BB
cs=0x1c2;eip=0x0028bd; 	X(STOSW);	// 6347 stosw ;~ 01C2:28BD
cs=0x1c2;eip=0x0028be; 	T(DEC(dl));	// 6348 dec     dl ;~ 01C2:28BE
cs=0x1c2;eip=0x0028c0; 	J(JNZ(loc_12aa7));	// 6349 jnz     short loc_12AA7 ;~ 01C2:28C0
cs=0x1c2;eip=0x0028c2; 	T(ADD(di, 0x0E000));	// 6350 add     di, 0E000h ;~ 01C2:28C2
cs=0x1c2;eip=0x0028c6; 	T(ADD(si, 0x11E));	// 6351 add     si, 11Eh ;~ 01C2:28C6
cs=0x1c2;eip=0x0028ca; 	T(DEC(dh));	// 6352 dec     dh ;~ 01C2:28CA
cs=0x1c2;eip=0x0028cc; 	J(JNZ(loc_12a74));	// 6353 jnz     short loc_12A74 ;~ 01C2:28CC
cs=0x1c2;eip=0x0028ce; 	X(POP(ds));	// 6354 pop     ds ;~ 01C2:28CE
cs=0x1c2;eip=0x0028cf; 	J(CALL(sub_128da,0));	// 6356 call    sub_128DA ;~ 01C2:28CF
cs=0x1c2;eip=0x0028d2; 	J(CALL(sub_11259,0));	// 6357 call    sub_11259 ;~ 01C2:28D2
cs=0x1c2;eip=0x0028d5; 	J(CALL(sub_1146f,0));	// 6358 call    sub_1146F ;~ 01C2:28D5
cs=0x1c2;eip=0x0028d8; 	X(POP(es));	// 6359 pop     es ;~ 01C2:28D8
cs=0x1c2;eip=0x0028d9; 	R(RETN(0));	// 6361 retn ;~ 01C2:28D9
seg001_29f1_proc:
	// 6512 
loc_12bf1:
	// 5006 
cs=0x1c2;eip=0x0029f1; 	X(MOV(word_14b55, 0x1A));	// 6513 mov     word_14B55, 1Ah ;~ 01C2:29F1
cs=0x1c2;eip=0x0029f7; 	X(MOV(byte_14fba, 0x1A));	// 6514 mov     byte_14FBA, 1Ah ;~ 01C2:29F7
cs=0x1c2;eip=0x0029fc; 	X(MOV(byte_14fb9, 0x34));	// 6515 mov     byte_14FB9, 34h ; '4' ;~ 01C2:29FC
cs=0x1c2;eip=0x002a01; 	X(MOV(word_14fbb, 0x34));	// 6516 mov     word_14FBB, 34h ; '4' ;~ 01C2:2A01
cs=0x1c2;eip=0x002a07; 	T(MOV(si, 0x9EC));	// 6517 mov     si, 9ECh ;~ 01C2:2A07
cs=0x1c2;eip=0x002a0a; 	X(MOV(word_14fbd, 0x0A44));	// 6518 mov     word_14FBD, 0A44h ;~ 01C2:2A0A
cs=0x1c2;eip=0x002a10; 	X(MOV(word_14b53, 0x1E));	// 6519 mov     word_14B53, 1Eh ;~ 01C2:2A10
cs=0x1c2;eip=0x002a16; 	J(JMP(loc_12cb9));	// 6520 jmp     loc_12CB9 ;~ 01C2:2A16
loc_12c19:
	// 5007 
cs=0x1c2;eip=0x002a19; 	X(MOV(word_14b55, 0x0C));	// 6524 mov     word_14B55, 0Ch ;~ 01C2:2A19
cs=0x1c2;eip=0x002a1f; 	X(MOV(byte_14fba, 0x0C));	// 6525 mov     byte_14FBA, 0Ch ;~ 01C2:2A1F
cs=0x1c2;eip=0x002a24; 	X(MOV(byte_14fb9, 0x18));	// 6526 mov     byte_14FB9, 18h ;~ 01C2:2A24
cs=0x1c2;eip=0x002a29; 	X(MOV(word_14fbb, 0x18));	// 6527 mov     word_14FBB, 18h ;~ 01C2:2A29
cs=0x1c2;eip=0x002a2f; 	T(MOV(si, 0x0A08));	// 6528 mov     si, 0A08h ;~ 01C2:2A2F
cs=0x1c2;eip=0x002a32; 	X(MOV(word_14fbd, 0x0A6D));	// 6529 mov     word_14FBD, 0A6Dh ;~ 01C2:2A32
cs=0x1c2;eip=0x002a38; 	X(MOV(word_14b53, 0x1E));	// 6530 mov     word_14B53, 1Eh ;~ 01C2:2A38
cs=0x1c2;eip=0x002a3e; 	J(JMP(loc_12cb9));	// 6531 jmp     short loc_12CB9 ;~ 01C2:2A3E
loc_12c41:
	// 5008 
cs=0x1c2;eip=0x002a41; 	X(MOV(word_14b55, 0x0C));	// 6537 mov     word_14B55, 0Ch ;~ 01C2:2A41
cs=0x1c2;eip=0x002a47; 	X(MOV(byte_14fba, 0x0C));	// 6538 mov     byte_14FBA, 0Ch ;~ 01C2:2A47
cs=0x1c2;eip=0x002a4c; 	X(MOV(byte_14fb9, 0x18));	// 6539 mov     byte_14FB9, 18h ;~ 01C2:2A4C
cs=0x1c2;eip=0x002a51; 	X(MOV(word_14fbb, 0x18));	// 6540 mov     word_14FBB, 18h ;~ 01C2:2A51
cs=0x1c2;eip=0x002a57; 	T(MOV(si, 0x0A18));	// 6541 mov     si, 0A18h ;~ 01C2:2A57
cs=0x1c2;eip=0x002a5a; 	X(MOV(word_14fbd, 0x0A82));	// 6542 mov     word_14FBD, 0A82h ;~ 01C2:2A5A
cs=0x1c2;eip=0x002a60; 	X(MOV(word_14b53, 0x1E));	// 6543 mov     word_14B53, 1Eh ;~ 01C2:2A60
cs=0x1c2;eip=0x002a66; 	J(JMP(loc_12cb9));	// 6544 jmp     short loc_12CB9 ;~ 01C2:2A66
loc_12c69:
	// 5009 
cs=0x1c2;eip=0x002a69; 	X(MOV(word_14b55, 0x10));	// 6550 mov     word_14B55, 10h ;~ 01C2:2A69
cs=0x1c2;eip=0x002a6f; 	X(MOV(byte_14fba, 0x10));	// 6551 mov     byte_14FBA, 10h ;~ 01C2:2A6F
cs=0x1c2;eip=0x002a74; 	X(MOV(byte_14fb9, 0x20));	// 6552 mov     byte_14FB9, 20h ; ' ' ;~ 01C2:2A74
cs=0x1c2;eip=0x002a79; 	X(MOV(word_14fbb, 0x20));	// 6553 mov     word_14FBB, 20h ; ' ' ;~ 01C2:2A79
cs=0x1c2;eip=0x002a7f; 	T(MOV(si, 0x0A28));	// 6554 mov     si, 0A28h ;~ 01C2:2A7F
cs=0x1c2;eip=0x002a82; 	X(MOV(word_14fbd, 0x0A95));	// 6555 mov     word_14FBD, 0A95h ;~ 01C2:2A82
cs=0x1c2;eip=0x002a88; 	X(MOV(word_14b53, 0x1E));	// 6556 mov     word_14B53, 1Eh ;~ 01C2:2A88
cs=0x1c2;eip=0x002a8e; 	J(JMP(loc_12cb9));	// 6557 jmp     short loc_12CB9 ;~ 01C2:2A8E
loc_12c91:
	// 5010 
cs=0x1c2;eip=0x002a91; 	X(MOV(word_14b55, 0x10));	// 6563 mov     word_14B55, 10h ;~ 01C2:2A91
cs=0x1c2;eip=0x002a97; 	X(MOV(byte_14fba, 0x10));	// 6564 mov     byte_14FBA, 10h ;~ 01C2:2A97
cs=0x1c2;eip=0x002a9c; 	X(MOV(byte_14fb9, 0x20));	// 6565 mov     byte_14FB9, 20h ; ' ' ;~ 01C2:2A9C
cs=0x1c2;eip=0x002aa1; 	X(MOV(word_14fbb, 0x20));	// 6566 mov     word_14FBB, 20h ; ' ' ;~ 01C2:2AA1
cs=0x1c2;eip=0x002aa7; 	T(MOV(si, 0x0A38));	// 6567 mov     si, 0A38h ;~ 01C2:2AA7
cs=0x1c2;eip=0x002aaa; 	X(MOV(word_14fbd, 0x0AB2));	// 6568 mov     word_14FBD, 0AB2h ;~ 01C2:2AAA
cs=0x1c2;eip=0x002ab0; 	X(MOV(word_14b53, 0x1E));	// 6569 mov     word_14B53, 1Eh ;~ 01C2:2AB0
cs=0x1c2;eip=0x002ab6; 	J(JMP(loc_12cb9));	// 6570 jmp     short loc_12CB9 ;~ 01C2:2AB6
loc_12cb9:
	// 5011 
cs=0x1c2;eip=0x002ab9; 	X(MOV(byte_153a3, 0));	// 6577 mov     byte_153A3, 0 ;~ 01C2:2AB9
cs=0x1c2;eip=0x002abe; 	X(MOV(byte_153a2, 0));	// 6578 mov     byte_153A2, 0 ;~ 01C2:2ABE
loc_12cc3:
	// 5012 
cs=0x1c2;eip=0x002ac3; 	T(TEST(dx, 0x8000));	// 6581 test    dx, 8000h ;~ 01C2:2AC3
cs=0x1c2;eip=0x002ac7; 	J(JZ(loc_12ccf));	// 6582 jz      short loc_12CCF ;~ 01C2:2AC7
cs=0x1c2;eip=0x002ac9; 	T(ADD(dx, 0x480));	// 6583 add     dx, 480h ;~ 01C2:2AC9
cs=0x1c2;eip=0x002acd; 	J(JMP(loc_12cc3));	// 6584 jmp     short loc_12CC3 ;~ 01C2:2ACD
loc_12ccf:
	// 5013 
cs=0x1c2;eip=0x002acf; 	T(CMP(dx, 0x120));	// 6589 cmp     dx, 120h ;~ 01C2:2ACF
cs=0x1c2;eip=0x002ad3; 	J(JC(loc_12cdb));	// 6590 jb      short loc_12CDB ;~ 01C2:2AD3
cs=0x1c2;eip=0x002ad5; 	T(SUB(dx, 0x120));	// 6591 sub     dx, 120h ;~ 01C2:2AD5
cs=0x1c2;eip=0x002ad9; 	J(JMP(loc_12ccf));	// 6592 jmp     short loc_12CCF ;~ 01C2:2AD9
loc_12cdb:
	// 5014 
cs=0x1c2;eip=0x002adb; 	T(CMP(bx, 0x1F4));	// 6596 cmp     bx, 1F4h ;~ 01C2:2ADB
cs=0x1c2;eip=0x002adf; 	J(JNC(locret_12ce8));	// 6597 jnb     short locret_12CE8 ;~ 01C2:2ADF
cs=0x1c2;eip=0x002ae1; 	T(CMP(bx, 0x15));	// 6598 cmp     bx, 15h ;~ 01C2:2AE1
cs=0x1c2;eip=0x002ae4; 	J(JC(locret_12ce8));	// 6599 jb      short locret_12CE8 ;~ 01C2:2AE4
cs=0x1c2;eip=0x002ae6; 	J(JMP(loc_12ce9));	// 6600 jmp     short loc_12CE9 ;~ 01C2:2AE6
locret_12ce8:
	// 5015 
cs=0x1c2;eip=0x002ae8; 	R(RETN(0));	// 6605 retn ;~ 01C2:2AE8
loc_12ce9:
	// 5016 
cs=0x1c2;eip=0x002ae9; 	T(LODSW);	// 6610 lodsw ;~ 01C2:2AE9
cs=0x1c2;eip=0x002aea; 	T(ADD(si, 2));	// 6611 add     si, 2 ;~ 01C2:2AEA
cs=0x1c2;eip=0x002aed; 	T(CMP(ax, bx));	// 6612 cmp     ax, bx ;~ 01C2:2AED
cs=0x1c2;eip=0x002aef; 	J(JC(loc_12ce9));	// 6613 jb      short loc_12CE9 ;~ 01C2:2AEF
cs=0x1c2;eip=0x002af1; 	X(MOV(word_14b47, ax));	// 6614 mov     word_14B47, ax ;~ 01C2:2AF1
cs=0x1c2;eip=0x002af4; 	X(MOV(word_14b51, ax));	// 6615 mov     word_14B51, ax ;~ 01C2:2AF4
cs=0x1c2;eip=0x002af7; 	T(ADD(si, 0x0FFFE));	// 6616 add     si, 0FFFEh ;~ 01C2:2AF7
cs=0x1c2;eip=0x002afa; 	T(LODSW);	// 6617 lodsw ;~ 01C2:2AFA
cs=0x1c2;eip=0x002afb; 	X(MOV(word_14b5b, ax));	// 6618 mov     word_14B5B, ax ;~ 01C2:2AFB
cs=0x1c2;eip=0x002afe; 	T(ADD(si, 0x0FFF8));	// 6619 add     si, 0FFF8h ;~ 01C2:2AFE
cs=0x1c2;eip=0x002b01; 	T(LODSW);	// 6620 lodsw ;~ 01C2:2B01
cs=0x1c2;eip=0x002b02; 	X(MOV(word_14b45, ax));	// 6621 mov     word_14B45, ax ;~ 01C2:2B02
cs=0x1c2;eip=0x002b05; 	T(LODSW);	// 6622 lodsw ;~ 01C2:2B05
cs=0x1c2;eip=0x002b06; 	X(MOV(word_14b57, ax));	// 6623 mov     word_14B57, ax ;~ 01C2:2B06
cs=0x1c2;eip=0x002b09; 	X(MOV(word_14b49, bx));	// 6624 mov     word_14B49, bx ;~ 01C2:2B09
cs=0x1c2;eip=0x002b0d; 	T(MOV(ax, dx));	// 6625 mov     ax, dx ;~ 01C2:2B0D
cs=0x1c2;eip=0x002b0f; 	X(DIV1(byte_14fbf));	// 6626 div     byte_14FBF ;~ 01C2:2B0F
cs=0x1c2;eip=0x002b13; 	X(MOV(word_14b4b, 0));	// 6627 mov     word_14B4B, 0 ;~ 01C2:2B13
cs=0x1c2;eip=0x002b19; 	X(MOV(word_14b4d, 0x30));	// 6628 mov     word_14B4D, 30h ; '0' ;~ 01C2:2B19
cs=0x1c2;eip=0x002b1f; 	T(OR(ah, ah));	// 6629 or      ah, ah ;~ 01C2:2B1F
cs=0x1c2;eip=0x002b21; 	J(JNZ(loc_12d2b));	// 6630 jnz     short loc_12D2B ;~ 01C2:2B21
cs=0x1c2;eip=0x002b23; 	T(OR(al, al));	// 6631 or      al, al ;~ 01C2:2B23
cs=0x1c2;eip=0x002b25; 	J(JZ(loc_12d2b));	// 6632 jz      short loc_12D2B ;~ 01C2:2B25
cs=0x1c2;eip=0x002b27; 	T(DEC(al));	// 6633 dec     al ;~ 01C2:2B27
cs=0x1c2;eip=0x002b29; 	T(MOV(ah, 0x30));	// 6634 mov     ah, 30h ; '0' ;~ 01C2:2B29
loc_12d2b:
	// 5017 
cs=0x1c2;eip=0x002b2b; 	X(PUSH(ax));	// 6638 push    ax ;~ 01C2:2B2B
cs=0x1c2;eip=0x002b2c; 	T(MOV(al, ah));	// 6639 mov     al, ah ;~ 01C2:2B2C
cs=0x1c2;eip=0x002b2e; 	T(XOR(ah, ah));	// 6640 xor     ah, ah ;~ 01C2:2B2E
cs=0x1c2;eip=0x002b30; 	X(MOV(word_14b4f, ax));	// 6641 mov     word_14B4F, ax ;~ 01C2:2B30
cs=0x1c2;eip=0x002b33; 	X(POP(ax));	// 6642 pop     ax ;~ 01C2:2B33
cs=0x1c2;eip=0x002b34; 	T(XOR(ah, ah));	// 6643 xor     ah, ah ;~ 01C2:2B34
cs=0x1c2;eip=0x002b36; 	X(MOV(word_14b5f, ax));	// 6644 mov     word_14B5F, ax ;~ 01C2:2B36
cs=0x1c2;eip=0x002b39; 	T(MOV(bx, word_14b45));	// 6645 mov     bx, word_14B45 ;~ 01C2:2B39
cs=0x1c2;eip=0x002b3d; 	X(MOV(word_14b51, bx));	// 6646 mov     word_14B51, bx ;~ 01C2:2B3D
cs=0x1c2;eip=0x002b41; 	T(CMP(bx, word_14b53));	// 6647 cmp     bx, word_14B53 ;~ 01C2:2B41
cs=0x1c2;eip=0x002b45; 	J(JC(loc_12d4d));	// 6648 jb      short loc_12D4D ;~ 01C2:2B45
cs=0x1c2;eip=0x002b47; 	X(MUL1_1(byte_14fba));	// 6649 mul     byte_14FBA ;~ 01C2:2B47
cs=0x1c2;eip=0x002b4b; 	J(JMP(loc_12d51));	// 6650 jmp     short loc_12D51 ;~ 01C2:2B4B
loc_12d4d:
	// 5018 
cs=0x1c2;eip=0x002b4d; 	X(MUL1_1(byte_14fb9));	// 6654 mul     byte_14FB9 ;~ 01C2:2B4D
loc_12d51:
	// 5019 
cs=0x1c2;eip=0x002b51; 	T(MOV(di, 0x0BC07));	// 6657 mov     di, 0BC07h ;~ 01C2:2B51
cs=0x1c2;eip=0x002b54; 	T(MOV(si, word_14b57));	// 6658 mov     si, word_14B57 ;~ 01C2:2B54
cs=0x1c2;eip=0x002b58; 	T(ADD(si, ax));	// 6659 add     si, ax ;~ 01C2:2B58
cs=0x1c2;eip=0x002b5a; 	J(CALL(sub_1232a,0));	// 6660 call    sub_1232A ;~ 01C2:2B5A
cs=0x1c2;eip=0x002b5d; 	T(MOV(si, di));	// 6661 mov     si, di ;~ 01C2:2B5D
cs=0x1c2;eip=0x002b5f; 	X(MOV(word_14b57, si));	// 6662 mov     word_14B57, si ;~ 01C2:2B5F
cs=0x1c2;eip=0x002b63; 	T(ADD(si, word_14fbb));	// 6663 add     si, word_14FBB ;~ 01C2:2B63
cs=0x1c2;eip=0x002b67; 	X(MOV(word_14b59, si));	// 6664 mov     word_14B59, si ;~ 01C2:2B67
cs=0x1c2;eip=0x002b6b; 	T(MOV(ax, word_14b5f));	// 6665 mov     ax, word_14B5F ;~ 01C2:2B6B
cs=0x1c2;eip=0x002b6e; 	T(MOV(bx, word_14b47));	// 6666 mov     bx, word_14B47 ;~ 01C2:2B6E
cs=0x1c2;eip=0x002b72; 	X(MOV(word_14b51, bx));	// 6667 mov     word_14B51, bx ;~ 01C2:2B72
cs=0x1c2;eip=0x002b76; 	T(CMP(bx, word_14b53));	// 6668 cmp     bx, word_14B53 ;~ 01C2:2B76
cs=0x1c2;eip=0x002b7a; 	J(JC(loc_12d82));	// 6669 jb      short loc_12D82 ;~ 01C2:2B7A
cs=0x1c2;eip=0x002b7c; 	X(MUL1_1(byte_14fba));	// 6670 mul     byte_14FBA ;~ 01C2:2B7C
cs=0x1c2;eip=0x002b80; 	J(JMP(loc_12d86));	// 6671 jmp     short loc_12D86 ;~ 01C2:2B80
loc_12d82:
	// 5020 
cs=0x1c2;eip=0x002b82; 	X(MUL1_1(byte_14fb9));	// 6675 mul     byte_14FB9 ;~ 01C2:2B82
loc_12d86:
	// 5021 
cs=0x1c2;eip=0x002b86; 	T(MOV(si, word_14b5b));	// 6678 mov     si, word_14B5B ;~ 01C2:2B86
cs=0x1c2;eip=0x002b8a; 	T(MOV(di, 0x0BCCF));	// 6679 mov     di, 0BCCFh ;~ 01C2:2B8A
cs=0x1c2;eip=0x002b8d; 	T(ADD(si, ax));	// 6680 add     si, ax ;~ 01C2:2B8D
cs=0x1c2;eip=0x002b8f; 	J(CALL(sub_1232a,0));	// 6681 call    sub_1232A ;~ 01C2:2B8F
cs=0x1c2;eip=0x002b92; 	T(MOV(si, di));	// 6682 mov     si, di ;~ 01C2:2B92
cs=0x1c2;eip=0x002b94; 	X(MOV(word_14b5b, si));	// 6683 mov     word_14B5B, si ;~ 01C2:2B94
cs=0x1c2;eip=0x002b98; 	T(ADD(si, word_14fbb));	// 6684 add     si, word_14FBB ;~ 01C2:2B98
cs=0x1c2;eip=0x002b9c; 	X(MOV(word_14b5d, si));	// 6685 mov     word_14B5D, si ;~ 01C2:2B9C
cs=0x1c2;eip=0x002ba0; 	J(CALL(sub_1226d,0));	// 6686 call    sub_1226D ;~ 01C2:2BA0
cs=0x1c2;eip=0x002ba3; 	T(MOV(di, word_14fbd));	// 6687 mov     di, word_14FBD ;~ 01C2:2BA3
cs=0x1c2;eip=0x002ba7; 	X(MOV(word_14b3d, di));	// 6688 mov     word_14B3D, di ;~ 01C2:2BA7
cs=0x1c2;eip=0x002bab; 	J(CALL(sub_121df,0));	// 6689 call    sub_121DF ;~ 01C2:2BAB
cs=0x1c2;eip=0x002bae; 	R(RETN(0));	// 6690 retn ;~ 01C2:2BAE
loc_12daf:
	// 5022 
cs=0x1c2;eip=0x002baf; 	T(CMP(bx, 0x1F4));	// 6695 cmp     bx, 1F4h ;~ 01C2:2BAF
cs=0x1c2;eip=0x002bb3; 	J(JC(loc_12db6));	// 6696 jb      short loc_12DB6 ;~ 01C2:2BB3
locret_12db5:
	// 5023 
cs=0x1c2;eip=0x002bb5; 	R(RETN(0));	// 6700 retn ;~ 01C2:2BB5
loc_12db6:
	// 5024 
cs=0x1c2;eip=0x002bb6; 	T(MOV(di, word_153ba));	// 6704 mov     di, word_153BA ;~ 01C2:2BB6
cs=0x1c2;eip=0x002bba; 	T(ADD(di, 0x1FD8));	// 6705 add     di, 1FD8h ;~ 01C2:2BBA
cs=0x1c2;eip=0x002bbe; 	T(MOV(ax, word_14b3f));	// 6706 mov     ax, word_14B3F ;~ 01C2:2BBE
cs=0x1c2;eip=0x002bc1; 	T(CMP(ax, 0x0FF70));	// 6707 cmp     ax, 0FF70h ;~ 01C2:2BC1
cs=0x1c2;eip=0x002bc4; 	J(JS(locret_12db5));	// 6708 js      short locret_12DB5 ;~ 01C2:2BC4
cs=0x1c2;eip=0x002bc6; 	T(CMP(ax, 0x91));	// 6709 cmp     ax, 91h ; '‘' ;~ 01C2:2BC6
cs=0x1c2;eip=0x002bc9; 	J(JNS(locret_12db5));	// 6710 jns     short locret_12DB5 ;~ 01C2:2BC9
cs=0x1c2;eip=0x002bcb; 	T(ADD(ax, 0x0A1));	// 6711 add     ax, 0A1h ; '¡' ;~ 01C2:2BCB
cs=0x1c2;eip=0x002bce; 	T(SAR(ax, 1));	// 6712 sar     ax, 1 ;~ 01C2:2BCE
cs=0x1c2;eip=0x002bd0; 	T(SAR(ax, 1));	// 6713 sar     ax, 1 ;~ 01C2:2BD0
cs=0x1c2;eip=0x002bd2; 	T(MOV(si, 0x0BC8));	// 6714 mov     si, 0BC8h ;~ 01C2:2BD2
cs=0x1c2;eip=0x002bd5; 	J(JMP(loc_12dda));	// 6715 jmp     short loc_12DDA ;~ 01C2:2BD5
ret_1c2_2bd7:
	// 5025 
cs=0x1c2;eip=0x002bd7; 	T(MOV(si, 0x0BE4));	// 6717 mov     si, 0BE4h ;~ 01C2:2BD7
loc_12dda:
	// 5026 
cs=0x1c2;eip=0x002bda; 	T(ADD(di, ax));	// 6720 add     di, ax ;~ 01C2:2BDA
loc_12ddc:
	// 5027 
cs=0x1c2;eip=0x002bdc; 	T(LODSW);	// 6723 lodsw ;~ 01C2:2BDC
cs=0x1c2;eip=0x002bdd; 	T(CMP(ax, bx));	// 6724 cmp     ax, bx ;~ 01C2:2BDD
cs=0x1c2;eip=0x002bdf; 	J(JC(loc_12de6));	// 6725 jb      short loc_12DE6 ;~ 01C2:2BDF
cs=0x1c2;eip=0x002be1; 	T(ADD(si, 2));	// 6726 add     si, 2 ;~ 01C2:2BE1
cs=0x1c2;eip=0x002be4; 	J(JMP(loc_12ddc));	// 6727 jmp     short loc_12DDC ;~ 01C2:2BE4
loc_12de6:
	// 5028 
cs=0x1c2;eip=0x002be6; 	T(MOV(si, *(dw*)(raddr(ds,si))));	// 6731 mov     si, [si] ;~ 01C2:2BE6
cs=0x1c2;eip=0x002be8; 	T(LODSB);	// 6732 lodsb ;~ 01C2:2BE8
cs=0x1c2;eip=0x002be9; 	T(MOV(cl, al));	// 6733 mov     cl, al ;~ 01C2:2BE9
cs=0x1c2;eip=0x002beb; 	T(LODSB);	// 6734 lodsb ;~ 01C2:2BEB
cs=0x1c2;eip=0x002bec; 	T(MOV(bl, al));	// 6735 mov     bl, al ;~ 01C2:2BEC
cs=0x1c2;eip=0x002bee; 	T(MOV(al, cl));	// 6736 mov     al, cl ;~ 01C2:2BEE
cs=0x1c2;eip=0x002bf0; 	T(SHR(al, 1));	// 6737 shr     al, 1 ;~ 01C2:2BF0
cs=0x1c2;eip=0x002bf2; 	T(XOR(ah, ah));	// 6738 xor     ah, ah ;~ 01C2:2BF2
cs=0x1c2;eip=0x002bf4; 	T(SUB(di, ax));	// 6739 sub     di, ax ;~ 01C2:2BF4
cs=0x1c2;eip=0x002bf6; 	T(XOR(ch, ch));	// 6740 xor     ch, ch ;~ 01C2:2BF6
cs=0x1c2;eip=0x002bf8; 	T(MOV(dx, cx));	// 6741 mov     dx, cx ;~ 01C2:2BF8
cs=0x1c2;eip=0x002bfa; 	X(PUSH(es));	// 6742 push    es ;~ 01C2:2BFA
loc_12dfb:
	// 5029 
cs=0x1c2;eip=0x002bfb; 	T(MOV(ax, seg_offset(seg003)));	// 6745 mov     ax, seg seg003 ;~ 01C2:2BFB
cs=0x1c2;eip=0x002bfe; 	T(MOV(es, ax));	// 6746 mov     es, ax ;~ 01C2:2BFE
loc_12e00:
	// 5030 
cs=0x1c2;eip=0x002c00; 	T(LODSB);	// 6751 lodsb ;~ 01C2:2C00
cs=0x1c2;eip=0x002c01; 	X(OR(*(raddr(es,di)), al));	// 6752 or      es:[di], al ;~ 01C2:2C01
cs=0x1c2;eip=0x002c04; 	T(INC(di));	// 6753 inc     di ;~ 01C2:2C04
cs=0x1c2;eip=0x002c05; 	J(LOOP(loc_12e00));	// 6754 loop    loc_12E00 ;~ 01C2:2C05
cs=0x1c2;eip=0x002c07; 	T(ADD(di, 0x0E050));	// 6755 add     di, 0E050h ;~ 01C2:2C07
cs=0x1c2;eip=0x002c0b; 	T(SUB(di, dx));	// 6756 sub     di, dx ;~ 01C2:2C0B
cs=0x1c2;eip=0x002c0d; 	T(MOV(cx, dx));	// 6757 mov     cx, dx ;~ 01C2:2C0D
cs=0x1c2;eip=0x002c0f; 	T(DEC(bl));	// 6758 dec     bl ;~ 01C2:2C0F
cs=0x1c2;eip=0x002c11; 	J(JZ(loc_12e26));	// 6759 jz      short loc_12E26 ;~ 01C2:2C11
loc_12e13:
	// 5031 
cs=0x1c2;eip=0x002c13; 	T(LODSB);	// 6762 lodsb ;~ 01C2:2C13
cs=0x1c2;eip=0x002c14; 	X(OR(*(raddr(es,di)), al));	// 6763 or      es:[di], al ;~ 01C2:2C14
cs=0x1c2;eip=0x002c17; 	T(INC(di));	// 6764 inc     di ;~ 01C2:2C17
cs=0x1c2;eip=0x002c18; 	J(LOOP(loc_12e13));	// 6765 loop    loc_12E13 ;~ 01C2:2C18
cs=0x1c2;eip=0x002c1a; 	T(ADD(di, 0x2000));	// 6766 add     di, 2000h ;~ 01C2:2C1A
cs=0x1c2;eip=0x002c1e; 	T(SUB(di, dx));	// 6767 sub     di, dx ;~ 01C2:2C1E
cs=0x1c2;eip=0x002c20; 	T(MOV(cx, dx));	// 6768 mov     cx, dx ;~ 01C2:2C20
cs=0x1c2;eip=0x002c22; 	T(DEC(bl));	// 6769 dec     bl ;~ 01C2:2C22
cs=0x1c2;eip=0x002c24; 	J(JNZ(loc_12e00));	// 6770 jnz     short loc_12E00 ;~ 01C2:2C24
loc_12e26:
	// 5032 
cs=0x1c2;eip=0x002c26; 	X(POP(es));	// 6773 pop     es ;~ 01C2:2C26
cs=0x1c2;eip=0x002c27; 	R(RETN(0));	// 6775 retn ;~ 01C2:2C27
seg001_2c6c_proc:
	// 6822 
loc_12e6c:
	// 5037 
cs=0x1c2;eip=0x002c6c; 	T(MOV(si, 0x0CB4));	// 6823 mov     si, 0CB4h ;~ 01C2:2C6C
cs=0x1c2;eip=0x002c6f; 	X(MOV(byte_15243, 0x0A));	// 6824 mov     byte_15243, 0Ah ;~ 01C2:2C6F
cs=0x1c2;eip=0x002c74; 	J(JMP(sub_12e92));	// 6825 jmp     short sub_12E92 ;~ 01C2:2C74
loc_12e76:
	// 5038 
cs=0x1c2;eip=0x002c76; 	T(MOV(si, 0x0CB4));	// 6829 mov     si, 0CB4h ;~ 01C2:2C76
cs=0x1c2;eip=0x002c79; 	J(CALL(sub_12e92,0));	// 6830 call    sub_12E92 ;~ 01C2:2C79
cs=0x1c2;eip=0x002c7c; 	T(MOV(si, 0x0CD7));	// 6831 mov     si, 0CD7h ;~ 01C2:2C7C
cs=0x1c2;eip=0x002c7f; 	J(JMP(sub_12e92));	// 6832 jmp     short sub_12E92 ;~ 01C2:2C7F
loc_12e81:
	// 5039 
cs=0x1c2;eip=0x002c81; 	T(MOV(si, 0x0CB4));	// 6836 mov     si, 0CB4h ;~ 01C2:2C81
cs=0x1c2;eip=0x002c84; 	J(CALL(sub_12e92,0));	// 6837 call    sub_12E92 ;~ 01C2:2C84
cs=0x1c2;eip=0x002c87; 	T(MOV(si, 0x0CD7));	// 6838 mov     si, 0CD7h ;~ 01C2:2C87
cs=0x1c2;eip=0x002c8a; 	J(CALL(sub_12e92,0));	// 6839 call    sub_12E92 ;~ 01C2:2C8A
cs=0x1c2;eip=0x002c8d; 	T(MOV(si, 0x0CF0));	// 6840 mov     si, 0CF0h ;~ 01C2:2C8D
cs=0x1c2;eip=0x002c90; 	J({;});	// 6841 jmp     short $+2 ;~ 01C2:2C90
sub_12e92:
	// 6846 
cs=0x1c2;eip=0x002c92; 	X(PUSH(es));	// 6848 push    es ;~ 01C2:2C92
loc_12e93:
	// 5040 
cs=0x1c2;eip=0x002c93; 	T(MOV(ax, seg_offset(seg003)));	// 6851 mov     ax, seg seg003 ;~ 01C2:2C93
cs=0x1c2;eip=0x002c96; 	T(MOV(es, ax));	// 6852 mov     es, ax ;~ 01C2:2C96
cs=0x1c2;eip=0x002c98; 	X(MOV(byte_153a3, 0));	// 6854 mov     byte_153A3, 0 ;~ 01C2:2C98
cs=0x1c2;eip=0x002c9d; 	X(MOV(word_153a8, 0x0D6C));	// 6855 mov     word_153A8, 0D6Ch ;~ 01C2:2C9D
cs=0x1c2;eip=0x002ca3; 	X(MOV(word_153aa, 0x0D70));	// 6856 mov     word_153AA, 0D70h ;~ 01C2:2CA3
cs=0x1c2;eip=0x002ca9; 	X(MOV(word_15240, si));	// 6857 mov     word_15240, si ;~ 01C2:2CA9
loc_12ead:
	// 5041 
cs=0x1c2;eip=0x002cad; 	T(MOV(si, word_15240));	// 6860 mov     si, word_15240 ;~ 01C2:2CAD
cs=0x1c2;eip=0x002cb1; 	T(LODSB);	// 6861 lodsb ;~ 01C2:2CB1
cs=0x1c2;eip=0x002cb2; 	T(CMP(al, 0x0FF));	// 6862 cmp     al, 0FFh ;~ 01C2:2CB2
cs=0x1c2;eip=0x002cb4; 	J(JZ(loc_12ef4));	// 6863 jz      short loc_12EF4 ;~ 01C2:2CB4
cs=0x1c2;eip=0x002cb6; 	T(XOR(ah, ah));	// 6864 xor     ah, ah ;~ 01C2:2CB6
cs=0x1c2;eip=0x002cb8; 	T(MOV(di, 0x0C04));	// 6865 mov     di, 0C04h ;~ 01C2:2CB8
cs=0x1c2;eip=0x002cbb; 	T(DEC(al));	// 6866 dec     al ;~ 01C2:2CBB
cs=0x1c2;eip=0x002cbd; 	T(SHL(ax, 1));	// 6867 shl     ax, 1 ;~ 01C2:2CBD
cs=0x1c2;eip=0x002cbf; 	T(SHL(ax, 1));	// 6868 shl     ax, 1 ;~ 01C2:2CBF
cs=0x1c2;eip=0x002cc1; 	T(ADD(di, ax));	// 6869 add     di, ax ;~ 01C2:2CC1
cs=0x1c2;eip=0x002cc3; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 6870 mov     ax, [di] ;~ 01C2:2CC3
cs=0x1c2;eip=0x002cc5; 	X(MOV(word_153ac, ax));	// 6871 mov     word_153AC, ax ;~ 01C2:2CC5
cs=0x1c2;eip=0x002cc8; 	T(MOV(ax, *(dw*)(raddr(ds,di+2))));	// 6872 mov     ax, [di+2] ;~ 01C2:2CC8
cs=0x1c2;eip=0x002ccb; 	T(NEG(ax));	// 6873 neg     ax ;~ 01C2:2CCB
cs=0x1c2;eip=0x002ccd; 	X(MOV(word_153ae, ax));	// 6874 mov     word_153AE, ax ;~ 01C2:2CCD
cs=0x1c2;eip=0x002cd0; 	T(LODSB);	// 6875 lodsb ;~ 01C2:2CD0
cs=0x1c2;eip=0x002cd1; 	T(XOR(ah, ah));	// 6876 xor     ah, ah ;~ 01C2:2CD1
cs=0x1c2;eip=0x002cd3; 	T(MOV(di, 0x0C04));	// 6877 mov     di, 0C04h ;~ 01C2:2CD3
cs=0x1c2;eip=0x002cd6; 	T(DEC(al));	// 6878 dec     al ;~ 01C2:2CD6
cs=0x1c2;eip=0x002cd8; 	T(SHL(ax, 1));	// 6879 shl     ax, 1 ;~ 01C2:2CD8
cs=0x1c2;eip=0x002cda; 	T(SHL(ax, 1));	// 6880 shl     ax, 1 ;~ 01C2:2CDA
cs=0x1c2;eip=0x002cdc; 	T(ADD(di, ax));	// 6881 add     di, ax ;~ 01C2:2CDC
cs=0x1c2;eip=0x002cde; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 6882 mov     ax, [di] ;~ 01C2:2CDE
cs=0x1c2;eip=0x002ce0; 	X(MOV(word_153b0, ax));	// 6883 mov     word_153B0, ax ;~ 01C2:2CE0
cs=0x1c2;eip=0x002ce3; 	T(MOV(ax, *(dw*)(raddr(ds,di+2))));	// 6884 mov     ax, [di+2] ;~ 01C2:2CE3
cs=0x1c2;eip=0x002ce6; 	T(NEG(ax));	// 6885 neg     ax ;~ 01C2:2CE6
cs=0x1c2;eip=0x002ce8; 	X(MOV(word_153b2, ax));	// 6886 mov     word_153B2, ax ;~ 01C2:2CE8
cs=0x1c2;eip=0x002ceb; 	X(MOV(word_15240, si));	// 6887 mov     word_15240, si ;~ 01C2:2CEB
cs=0x1c2;eip=0x002cef; 	J(CALL(sub_13040,0));	// 6888 call    sub_13040 ;~ 01C2:2CEF
cs=0x1c2;eip=0x002cf2; 	J(JMP(loc_12ead));	// 6889 jmp     short loc_12EAD ;~ 01C2:2CF2
loc_12ef4:
	// 5042 
cs=0x1c2;eip=0x002cf4; 	X(POP(es));	// 6893 pop     es ;~ 01C2:2CF4
cs=0x1c2;eip=0x002cf5; 	R(RETN(0));	// 6895 retn ;~ 01C2:2CF5
sub_12ef6:
	// 6902 
cs=0x1c2;eip=0x002cf6; 	T(MOV(al, byte_15346));	// 6903 mov     al, byte_15346 ;~ 01C2:2CF6
ret_1c2_2cf9:
	// 5043 
cs=0x1c2;eip=0x002cf9; 	T(OR(al, al));	// 6904 or      al, al ;~ 01C2:2CF9
cs=0x1c2;eip=0x002cfb; 	J(JNZ(loc_12efe));	// 6905 jnz     short loc_12EFE ;~ 01C2:2CFB
cs=0x1c2;eip=0x002cfd; 	R(RETN(0));	// 6906 retn ;~ 01C2:2CFD
loc_12efe:
	// 5044 
cs=0x1c2;eip=0x002cfe; 	T(INC(al));	// 6910 inc     al ;~ 01C2:2CFE
cs=0x1c2;eip=0x002d00; 	T(CMP(al, 6));	// 6911 cmp     al, 6 ;~ 01C2:2D00
cs=0x1c2;eip=0x002d02; 	J(JNC(loc_12f2c));	// 6912 jnb     short loc_12F2C ;~ 01C2:2D02
cs=0x1c2;eip=0x002d04; 	X(MOV(byte_15346, al));	// 6913 mov     byte_15346, al ;~ 01C2:2D04
cs=0x1c2;eip=0x002d07; 	T(CMP(al, 2));	// 6914 cmp     al, 2 ;~ 01C2:2D07
cs=0x1c2;eip=0x002d09; 	J(JNZ(loc_12f83));	// 6915 jnz     short loc_12F83 ;~ 01C2:2D09
cs=0x1c2;eip=0x002d0b; 	T(MOV(ax, word_15347));	// 6916 mov     ax, word_15347 ;~ 01C2:2D0B
loc_12f0e:
	// 5045 
cs=0x1c2;eip=0x002d0e; 	T(TEST(ax, 0x8000));	// 6919 test    ax, 8000h ;~ 01C2:2D0E
cs=0x1c2;eip=0x002d11; 	J(JZ(loc_12f18));	// 6920 jz      short loc_12F18 ;~ 01C2:2D11
cs=0x1c2;eip=0x002d13; 	T(ADD(ax, 0x480));	// 6921 add     ax, 480h ;~ 01C2:2D13
cs=0x1c2;eip=0x002d16; 	J(JMP(loc_12f0e));	// 6922 jmp     short loc_12F0E ;~ 01C2:2D16
loc_12f18:
	// 5046 
cs=0x1c2;eip=0x002d18; 	T(CMP(ax, 0x480));	// 6927 cmp     ax, 480h ;~ 01C2:2D18
cs=0x1c2;eip=0x002d1b; 	J(JC(loc_12f22));	// 6928 jb      short loc_12F22 ;~ 01C2:2D1B
cs=0x1c2;eip=0x002d1d; 	T(SUB(ax, 0x480));	// 6929 sub     ax, 480h ;~ 01C2:2D1D
cs=0x1c2;eip=0x002d20; 	J(JMP(loc_12f18));	// 6930 jmp     short loc_12F18 ;~ 01C2:2D20
loc_12f22:
	// 5047 
cs=0x1c2;eip=0x002d22; 	T(CMP(ax, 0x9F));	// 6934 cmp     ax, 9Fh ; 'Ÿ' ;~ 01C2:2D22
cs=0x1c2;eip=0x002d25; 	J(JC(loc_12f32));	// 6935 jb      short loc_12F32 ;~ 01C2:2D25
cs=0x1c2;eip=0x002d27; 	T(CMP(ax, 0x3E1));	// 6936 cmp     ax, 3E1h ;~ 01C2:2D27
cs=0x1c2;eip=0x002d2a; 	J(JNC(loc_12f32));	// 6937 jnb     short loc_12F32 ;~ 01C2:2D2A
loc_12f2c:
	// 5048 
cs=0x1c2;eip=0x002d2c; 	X(MOV(byte_15346, 0));	// 6940 mov     byte_15346, 0 ;~ 01C2:2D2C
cs=0x1c2;eip=0x002d31; 	R(RETN(0));	// 6941 retn ;~ 01C2:2D31
loc_12f32:
	// 5049 
cs=0x1c2;eip=0x002d32; 	T(ADD(ax, 0x0A0));	// 6946 add     ax, 0A0h ; ' ' ;~ 01C2:2D32
cs=0x1c2;eip=0x002d35; 	T(CMP(ax, 0x140));	// 6947 cmp     ax, 140h ;~ 01C2:2D35
cs=0x1c2;eip=0x002d38; 	J(JC(loc_12f3d));	// 6948 jb      short loc_12F3D ;~ 01C2:2D38
cs=0x1c2;eip=0x002d3a; 	T(SUB(ax, 0x480));	// 6949 sub     ax, 480h ;~ 01C2:2D3A
loc_12f3d:
	// 5050 
cs=0x1c2;eip=0x002d3d; 	X(MOV(word_15349, ax));	// 6952 mov     word_15349, ax ;~ 01C2:2D3D
cs=0x1c2;eip=0x002d40; 	J(CALL(sub_13b1a,0));	// 6953 call    sub_13B1A ;~ 01C2:2D40
cs=0x1c2;eip=0x002d43; 	T(MOV(cl, 6));	// 6954 mov     cl, 6 ;~ 01C2:2D43
cs=0x1c2;eip=0x002d45; 	T(SHR(ax, cl));	// 6955 shr     ax, cl ;~ 01C2:2D45
cs=0x1c2;eip=0x002d47; 	X(MOV(word_1534b, ax));	// 6956 mov     word_1534B, ax ;~ 01C2:2D47
cs=0x1c2;eip=0x002d4a; 	T(MOV(bx, ax));	// 6957 mov     bx, ax ;~ 01C2:2D4A
cs=0x1c2;eip=0x002d4c; 	T(MOV(si, 0x0D0D));	// 6958 mov     si, 0D0Dh ;~ 01C2:2D4C
cs=0x1c2;eip=0x002d4f; 	T(MOV(dx, 0x0FFFF));	// 6959 mov     dx, 0FFFFh ;~ 01C2:2D4F
loc_12f52:
	// 5051 
cs=0x1c2;eip=0x002d52; 	T(LODSW);	// 6962 lodsw ;~ 01C2:2D52
cs=0x1c2;eip=0x002d53; 	T(INC(dx));	// 6963 inc     dx ;~ 01C2:2D53
cs=0x1c2;eip=0x002d54; 	T(CMP(bx, ax));	// 6964 cmp     bx, ax ;~ 01C2:2D54
cs=0x1c2;eip=0x002d56; 	J(JNC(loc_12f52));	// 6965 jnb     short loc_12F52 ;~ 01C2:2D56
cs=0x1c2;eip=0x002d58; 	T(MOV(si, 0x0D1D));	// 6966 mov     si, 0D1Dh ;~ 01C2:2D58
cs=0x1c2;eip=0x002d5b; 	T(MOV(cl, 4));	// 6967 mov     cl, 4 ;~ 01C2:2D5B
cs=0x1c2;eip=0x002d5d; 	T(SHL(dx, cl));	// 6968 shl     dx, cl ;~ 01C2:2D5D
cs=0x1c2;eip=0x002d5f; 	T(ADD(si, dx));	// 6969 add     si, dx ;~ 01C2:2D5F
cs=0x1c2;eip=0x002d61; 	X(MOV(word_15353, si));	// 6970 mov     word_15353, si ;~ 01C2:2D61
cs=0x1c2;eip=0x002d65; 	T(MOV(ax, word_14af6));	// 6971 mov     ax, word_14AF6 ;~ 01C2:2D65
cs=0x1c2;eip=0x002d68; 	X(MOV(word_15359, ax));	// 6972 mov     word_15359, ax ;~ 01C2:2D68
cs=0x1c2;eip=0x002d6b; 	T(MOV(cx, word_153ba));	// 6973 mov     cx, word_153BA ;~ 01C2:2D6B
cs=0x1c2;eip=0x002d6f; 	T(SUB(cx, 0x28));	// 6974 sub     cx, 28h ; '(' ;~ 01C2:2D6F
cs=0x1c2;eip=0x002d72; 	T(MOV(ax, word_153be));	// 6975 mov     ax, word_153BE ;~ 01C2:2D72
cs=0x1c2;eip=0x002d75; 	T(NEG(ax));	// 6976 neg     ax ;~ 01C2:2D75
cs=0x1c2;eip=0x002d77; 	T(SHR(ax, 1));	// 6977 shr     ax, 1 ;~ 01C2:2D77
cs=0x1c2;eip=0x002d79; 	X(MUL1_1(byte_15345));	// 6978 mul     byte_15345 ;~ 01C2:2D79
cs=0x1c2;eip=0x002d7d; 	T(SUB(cx, ax));	// 6979 sub     cx, ax ;~ 01C2:2D7D
cs=0x1c2;eip=0x002d7f; 	X(MOV(word_1535b, cx));	// 6980 mov     word_1535B, cx ;~ 01C2:2D7F
loc_12f83:
	// 5052 
cs=0x1c2;eip=0x002d83; 	T(MOV(cx, 0x10));	// 6983 mov     cx, 10h ;~ 01C2:2D83
cs=0x1c2;eip=0x002d86; 	T(MOV(si, word_15353));	// 6984 mov     si, word_15353 ;~ 01C2:2D86
cs=0x1c2;eip=0x002d8a; 	T(MOV(di, 0x0BE37));	// 6985 mov     di, 0BE37h ;~ 01C2:2D8A
cs=0x1c2;eip=0x002d8d; 	T(MOV(dh, byte_15346));	// 6986 mov     dh, byte_15346 ;~ 01C2:2D8D
loc_12f91:
	// 5053 
cs=0x1c2;eip=0x002d91; 	T(LODSB);	// 6989 lodsb ;~ 01C2:2D91
cs=0x1c2;eip=0x002d92; 	T(CBW);	// 6990 cbw ;~ 01C2:2D92
cs=0x1c2;eip=0x002d93; 	T(MOV(bx, ax));	// 6991 mov     bx, ax ;~ 01C2:2D93
cs=0x1c2;eip=0x002d95; 	T(MOV(dl, dh));	// 6992 mov     dl, dh ;~ 01C2:2D95
loc_12f97:
	// 5054 
cs=0x1c2;eip=0x002d97; 	T(DEC(dl));	// 6995 dec     dl ;~ 01C2:2D97
cs=0x1c2;eip=0x002d99; 	J(JZ(loc_12f9f));	// 6996 jz      short loc_12F9F ;~ 01C2:2D99
cs=0x1c2;eip=0x002d9b; 	T(ADD(ax, bx));	// 6997 add     ax, bx ;~ 01C2:2D9B
cs=0x1c2;eip=0x002d9d; 	J(JMP(loc_12f97));	// 6998 jmp     short loc_12F97 ;~ 01C2:2D9D
loc_12f9f:
	// 5055 
cs=0x1c2;eip=0x002d9f; 	X(STOSW);	// 7002 stosw ;~ 01C2:2D9F
cs=0x1c2;eip=0x002da0; 	J(LOOP(loc_12f91));	// 7003 loop    loc_12F91 ;~ 01C2:2DA0
cs=0x1c2;eip=0x002da2; 	T(MOV(cx, 8));	// 7004 mov     cx, 8 ;~ 01C2:2DA2
cs=0x1c2;eip=0x002da5; 	T(MOV(si, 0x0BE37));	// 7005 mov     si, 0BE37h ;~ 01C2:2DA5
cs=0x1c2;eip=0x002da8; 	X(PUSH(es));	// 7006 push    es ;~ 01C2:2DA8
loc_12fa9:
	// 5056 
cs=0x1c2;eip=0x002da9; 	T(MOV(ax, seg_offset(seg003)));	// 7009 mov     ax, seg seg003 ;~ 01C2:2DA9
cs=0x1c2;eip=0x002dac; 	T(MOV(es, ax));	// 7010 mov     es, ax ;~ 01C2:2DAC
cs=0x1c2;eip=0x002dae; 	T(MOV(ax, word_14af6));	// 7012 mov     ax, word_14AF6 ;~ 01C2:2DAE
cs=0x1c2;eip=0x002db1; 	T(SUB(ax, word_15359));	// 7013 sub     ax, word_15359 ;~ 01C2:2DB1
cs=0x1c2;eip=0x002db5; 	X(ADD(word_15359, ax));	// 7014 add     word_15359, ax ;~ 01C2:2DB5
cs=0x1c2;eip=0x002db9; 	T(MOV(bp, word_15349));	// 7015 mov     bp, word_15349 ;~ 01C2:2DB9
cs=0x1c2;eip=0x002dbd; 	T(SUB(bp, ax));	// 7016 sub     bp, ax ;~ 01C2:2DBD
cs=0x1c2;eip=0x002dbf; 	X(MOV(word_15349, bp));	// 7017 mov     word_15349, bp ;~ 01C2:2DBF
loc_12fc3:
	// 5057 
cs=0x1c2;eip=0x002dc3; 	T(LODSW);	// 7020 lodsw ;~ 01C2:2DC3
cs=0x1c2;eip=0x002dc4; 	T(MOV(bp, word_15349));	// 7021 mov     bp, word_15349 ;~ 01C2:2DC4
cs=0x1c2;eip=0x002dc8; 	T(ADD(bp, ax));	// 7022 add     bp, ax ;~ 01C2:2DC8
cs=0x1c2;eip=0x002dca; 	T(CMP(bp, 0x13E));	// 7023 cmp     bp, 13Eh ;~ 01C2:2DCA
cs=0x1c2;eip=0x002dce; 	J(JNC(loc_13024));	// 7024 jnb     short loc_13024 ;~ 01C2:2DCE
cs=0x1c2;eip=0x002dd0; 	T(TEST(bp, 0x8000));	// 7025 test    bp, 8000h ;~ 01C2:2DD0
cs=0x1c2;eip=0x002dd4; 	J(JNZ(loc_13024));	// 7026 jnz     short loc_13024 ;~ 01C2:2DD4
cs=0x1c2;eip=0x002dd6; 	T(LODSW);	// 7027 lodsw ;~ 01C2:2DD6
cs=0x1c2;eip=0x002dd7; 	T(NEG(ax));	// 7028 neg     ax ;~ 01C2:2DD7
cs=0x1c2;eip=0x002dd9; 	T(CMP(ax, word_153bc));	// 7029 cmp     ax, word_153BC ;~ 01C2:2DD9
cs=0x1c2;eip=0x002ddd; 	J(JNS(loc_13027));	// 7030 jns     short loc_13027 ;~ 01C2:2DDD
cs=0x1c2;eip=0x002ddf; 	T(SUB(ax, word_153be));	// 7031 sub     ax, word_153BE ;~ 01C2:2DDF
cs=0x1c2;eip=0x002de3; 	J(JS(loc_13027));	// 7032 js      short loc_13027 ;~ 01C2:2DE3
cs=0x1c2;eip=0x002de5; 	T(MOV(di, word_1535b));	// 7033 mov     di, word_1535B ;~ 01C2:2DE5
cs=0x1c2;eip=0x002de9; 	T(MOV(dl, 0));	// 7034 mov     dl, 0 ;~ 01C2:2DE9
cs=0x1c2;eip=0x002deb; 	T(SAR(ax, 1));	// 7035 sar     ax, 1 ;~ 01C2:2DEB
cs=0x1c2;eip=0x002ded; 	J(JNC(loc_12ff5));	// 7036 jnb     short loc_12FF5 ;~ 01C2:2DED
cs=0x1c2;eip=0x002def; 	T(ADD(di, 0x2000));	// 7037 add     di, 2000h ;~ 01C2:2DEF
cs=0x1c2;eip=0x002df3; 	T(MOV(dl, 0x0FF));	// 7038 mov     dl, 0FFh ;~ 01C2:2DF3
loc_12ff5:
	// 5058 
cs=0x1c2;eip=0x002df5; 	X(IMUL1_1(byte_15345));	// 7041 imul    byte_15345 ;~ 01C2:2DF5
cs=0x1c2;eip=0x002df9; 	T(ADD(di, ax));	// 7042 add     di, ax ;~ 01C2:2DF9
cs=0x1c2;eip=0x002dfb; 	T(MOV(bx, bp));	// 7043 mov     bx, bp ;~ 01C2:2DFB
cs=0x1c2;eip=0x002dfd; 	T(SHR(bp, 1));	// 7044 shr     bp, 1 ;~ 01C2:2DFD
cs=0x1c2;eip=0x002dff; 	T(SHR(bp, 1));	// 7045 shr     bp, 1 ;~ 01C2:2DFF
cs=0x1c2;eip=0x002e01; 	T(ADD(di, bp));	// 7046 add     di, bp ;~ 01C2:2E01
cs=0x1c2;eip=0x002e03; 	T(AND(bx, 3));	// 7047 and     bx, 3 ;~ 01C2:2E03
cs=0x1c2;eip=0x002e07; 	T(MOV(al, *(raddr(ds,bx+0x0D4D))));	// 7048 mov     al, [bx+0D4Dh] ;~ 01C2:2E07
cs=0x1c2;eip=0x002e0b; 	T(OR(al, *(raddr(es,di))));	// 7049 or      al, es:[di] ;~ 01C2:2E0B
cs=0x1c2;eip=0x002e0e; 	X(STOSB);	// 7050 stosb ;~ 01C2:2E0E
cs=0x1c2;eip=0x002e0f; 	T(TEST(dl, 0x0FF));	// 7051 test    dl, 0FFh ;~ 01C2:2E0F
cs=0x1c2;eip=0x002e12; 	J(JZ(loc_1301a));	// 7052 jz      short loc_1301A ;~ 01C2:2E12
cs=0x1c2;eip=0x002e14; 	T(ADD(di, 0x0E04F));	// 7053 add     di, 0E04Fh ;~ 01C2:2E14
cs=0x1c2;eip=0x002e18; 	J(JMP(loc_1301e));	// 7054 jmp     short loc_1301E ;~ 01C2:2E18
loc_1301a:
	// 5059 
cs=0x1c2;eip=0x002e1a; 	T(ADD(di, 0x1FFF));	// 7058 add     di, 1FFFh ;~ 01C2:2E1A
loc_1301e:
	// 5060 
cs=0x1c2;eip=0x002e1e; 	T(OR(al, *(raddr(es,di))));	// 7061 or      al, es:[di] ;~ 01C2:2E1E
cs=0x1c2;eip=0x002e21; 	X(STOSB);	// 7062 stosb ;~ 01C2:2E21
cs=0x1c2;eip=0x002e22; 	J(JMP(loc_13027));	// 7063 jmp     short loc_13027 ;~ 01C2:2E22
loc_13024:
	// 5061 
cs=0x1c2;eip=0x002e24; 	T(ADD(si, 2));	// 7068 add     si, 2 ;~ 01C2:2E24
loc_13027:
	// 5062 
cs=0x1c2;eip=0x002e27; 	J(LOOP(loc_12fc3));	// 7072 loop    loc_12FC3 ;~ 01C2:2E27
cs=0x1c2;eip=0x002e29; 	X(POP(es));	// 7073 pop     es ;~ 01C2:2E29
cs=0x1c2;eip=0x002e2a; 	T(CMP(byte_15346, 6));	// 7075 cmp     byte_15346, 6 ;~ 01C2:2E2A
cs=0x1c2;eip=0x002e2f; 	J(JNZ(locret_13036));	// 7076 jnz     short locret_13036 ;~ 01C2:2E2F
cs=0x1c2;eip=0x002e31; 	X(MOV(byte_15346, 0));	// 7077 mov     byte_15346, 0 ;~ 01C2:2E31
locret_13036:
	// 5063 
cs=0x1c2;eip=0x002e36; 	R(RETN(0));	// 7080 retn ;~ 01C2:2E36
seg001_32c0_proc:
	// 7760 
loc_134c0:
	// 5139 
cs=0x1c2;eip=0x0032c0; 	J(CALL(sub_13510,0));	// 7761 call    sub_13510 ;~ 01C2:32C0
cs=0x1c2;eip=0x0032c3; 	J(CALL(sub_13ef3,0));	// 7762 call    sub_13EF3 ;~ 01C2:32C3
cs=0x1c2;eip=0x0032c6; 	T(MOV(ax, cs));	// 7763 mov     ax, cs ;~ 01C2:32C6
cs=0x1c2;eip=0x0032c8; 	T(SUB(ax, 0x10));	// 7764 sub     ax, 10h ;~ 01C2:32C8
	cs=seg_offset(seg001);
cs=0x1c2;eip=0x0032cb; 	X(MOV(*(dw*)(((db*)&dword_134db)+2), ax));	// 7765 mov     word ptr cs:dword_134DB+2, ax ;~ 01C2:32CB
cs=0x1c2;eip=0x0032cf; 	T(MOV(ax, 0x33DF));	// 7766 mov     ax, 33DFh ;~ 01C2:32CF
	cs=seg_offset(seg001);
cs=0x1c2;eip=0x0032d2; 	X(MOV(*(dw*)(((db*)&dword_134db)), ax));	// 7767 mov     word ptr cs:dword_134DB, ax ;~ 01C2:32D2
	cs=seg_offset(seg001);
cs=0x1c2;eip=0x0032d6; __disp=*(dd*)(((db*)&dword_134db));
	J(JMP(__dispatch_call));	// 7768 jmp     cs:dword_134DB ;~ 01C2:32D6
ret_1c2_32df:
	// 5140 
cs=0x1c2;eip=0x0032df; 	R(_INT(0x20));	// 7773 int     20h             ; DOS - PROGRAM TERMINATION ;~ 01C2:32DF
sub_134e1:
	// 7780 
cs=0x1c2;eip=0x0032e1; 	X(PUSH(ax));	// 7782 push    ax ;~ 01C2:32E1
cs=0x1c2;eip=0x0032e2; 	T(MOV(ah, 1));	// 7783 mov     ah, 1 ;~ 01C2:32E2
cs=0x1c2;eip=0x0032e4; 	R(_INT(0x16));	// 7784 int     16h             ; KEYBOARD - CHECK BUFFER, DO NOT CLEAR ;~ 01C2:32E4
cs=0x1c2;eip=0x0032e6; 	X(POP(ax));	// 7788 pop     ax ;~ 01C2:32E6
cs=0x1c2;eip=0x0032e7; 	R(RETN(0));	// 7789 retn ;~ 01C2:32E7
seg001_351d_proc:
	// 8214 
cs=0x1c2;eip=0x00351d; 	X(PUSH(es));	// 8214 push    es ;~ 01C2:351D
ret_1c2_351e:
	// 5180 
cs=0x1c2;eip=0x00351e; 	T(MOV(ax, 0x0B800));	// 8215 mov     ax, 0B800h ;~ 01C2:351E
loc_13721:
	// 5181 
cs=0x1c2;eip=0x003521; 	T(MOV(es, ax));	// 8219 mov     es, ax ;~ 01C2:3521
cs=0x1c2;eip=0x003523; 	T(MOV(ax, 0));	// 8221 mov     ax, 0 ;~ 01C2:3523
cs=0x1c2;eip=0x003526; 	T(MOV(di, ax));	// 8222 mov     di, ax ;~ 01C2:3526
cs=0x1c2;eip=0x003528; 	T(MOV(cx, 0x2000));	// 8223 mov     cx, 2000h ;~ 01C2:3528
	// 8224 rep stosw ;~ 01C2:352B
cs=0x1c2;eip=0x00352b; 	X(	REP STOSW);	// 8224 rep stosw ;~ 01C2:352B
cs=0x1c2;eip=0x00352d; 	X(POP(es));	// 8225 pop     es ;~ 01C2:352D
cs=0x1c2;eip=0x00352e; 	R(RETN(0));	// 8227 retn ;~ 01C2:352E
sub_1372f:
	// 8233 
cs=0x1c2;eip=0x00352f; 	X(PUSH(es));	// 8238 push    es ;~ 01C2:352F
loc_13730:
	// 5182 
cs=0x1c2;eip=0x003530; 	T(MOV(ax, seg_offset(seg003)));	// 8241 mov     ax, seg seg003 ;~ 01C2:3530
cs=0x1c2;eip=0x003533; 	J(JMP(loc_13721));	// 8242 jmp     short loc_13721 ;~ 01C2:3533
sub_13735:
	// 8249 
cs=0x1c2;eip=0x003535; 	X(PUSH(es));	// 8250 push    es ;~ 01C2:3535
ret_1c2_3536:
	// 5183 
cs=0x1c2;eip=0x003536; 	X(PUSH(ds));	// 8251 push    ds ;~ 01C2:3536
cs=0x1c2;eip=0x003537; 	T(MOV(ax, 0x0B800));	// 8252 mov     ax, 0B800h ;~ 01C2:3537
cs=0x1c2;eip=0x00353a; 	T(MOV(es, ax));	// 8253 mov     es, ax ;~ 01C2:353A
cs=0x1c2;eip=0x00353c; 	T(MOV(di, 0));	// 8255 mov     di, 0 ;~ 01C2:353C
cs=0x1c2;eip=0x00353f; 	T(MOV(si, di));	// 8256 mov     si, di ;~ 01C2:353F
loc_13741:
	// 5184 
cs=0x1c2;eip=0x003541; 	T(MOV(ax, seg_offset(seg003)));	// 8259 mov     ax, seg seg003 ;~ 01C2:3541
cs=0x1c2;eip=0x003544; 	T(MOV(ds, ax));	// 8260 mov     ds, ax ;~ 01C2:3544
cs=0x1c2;eip=0x003546; 	T(MOV(bl, 0x64));	// 8262 mov     bl, 64h ; 'd' ;~ 01C2:3546
loc_13748:
	// 5185 
cs=0x1c2;eip=0x003548; 	T(MOV(cx, 0x28));	// 8265 mov     cx, 28h ; '(' ;~ 01C2:3548
	// 8266 rep movsw ;~ 01C2:354B
cs=0x1c2;eip=0x00354b; 	X(	REP MOVSW);	// 8266 rep movsw ;~ 01C2:354B
cs=0x1c2;eip=0x00354d; 	T(ADD(di, 0x1FB0));	// 8267 add     di, 1FB0h ;~ 01C2:354D
cs=0x1c2;eip=0x003551; 	T(ADD(si, 0x1FB0));	// 8268 add     si, 1FB0h ;~ 01C2:3551
cs=0x1c2;eip=0x003555; 	T(MOV(cx, 0x28));	// 8269 mov     cx, 28h ; '(' ;~ 01C2:3555
	// 8270 rep movsw ;~ 01C2:3558
cs=0x1c2;eip=0x003558; 	X(	REP MOVSW);	// 8270 rep movsw ;~ 01C2:3558
cs=0x1c2;eip=0x00355a; 	T(ADD(di, 0x0E000));	// 8271 add     di, 0E000h ;~ 01C2:355A
cs=0x1c2;eip=0x00355e; 	T(ADD(si, 0x0E000));	// 8272 add     si, 0E000h ;~ 01C2:355E
cs=0x1c2;eip=0x003562; 	T(DEC(bl));	// 8273 dec     bl ;~ 01C2:3562
cs=0x1c2;eip=0x003564; 	J(JNZ(loc_13748));	// 8274 jnz     short loc_13748 ;~ 01C2:3564
cs=0x1c2;eip=0x003566; 	X(POP(ds));	// 8275 pop     ds ;~ 01C2:3566
cs=0x1c2;eip=0x003567; 	X(POP(es));	// 8277 pop     es ;~ 01C2:3567
cs=0x1c2;eip=0x003568; 	R(RETN(0));	// 8279 retn ;~ 01C2:3568
seg001_3570_proc:
	// 8286 
loc_13770:
	// 5186 
cs=0x1c2;eip=0x003570; 	X(MOV(word_154e9, sp));	// 8287 mov     word_154E9, sp ;~ 01C2:3570
cs=0x1c2;eip=0x003574; 	J(CALL(sub_1297d,0));	// 8288 call    sub_1297D ;~ 01C2:3574
cs=0x1c2;eip=0x003577; 	T(MOV(al, 1));	// 8289 mov     al, 1 ;~ 01C2:3577
cs=0x1c2;eip=0x003579; 	J(CALL(sub_14015,0));	// 8290 call    sub_14015 ;~ 01C2:3579
cs=0x1c2;eip=0x00357c; 	J(CALL(sub_13a85,0));	// 8291 call    sub_13A85 ;~ 01C2:357C
cs=0x1c2;eip=0x00357f; 	J(CALL(sub_134fa,0));	// 8292 call    sub_134FA ;~ 01C2:357F
cs=0x1c2;eip=0x003582; 	X(MOV(byte_15618, 1));	// 8293 mov     byte_15618, 1 ;~ 01C2:3582
cs=0x1c2;eip=0x003587; 	J(JMP(loc_13ca0));	// 8294 jmp     loc_13CA0 ;~ 01C2:3587
loc_1378a:
	// 5187 
cs=0x1c2;eip=0x00358a; 	T(TEST(byte_14b00, 0x0FF));	// 8304 test    byte_14B00, 0FFh ;~ 01C2:358A
cs=0x1c2;eip=0x00358f; 	J(JNZ(loc_13799));	// 8305 jnz     short loc_13799 ;~ 01C2:358F
cs=0x1c2;eip=0x003591; 	J(CALL(sub_137b6,0));	// 8306 call    sub_137B6 ;~ 01C2:3591
loc_13794:
	// 5188 
cs=0x1c2;eip=0x003594; 	J(CALL(sub_11500,0));	// 8309 call    sub_11500 ;~ 01C2:3594
cs=0x1c2;eip=0x003597; 	J(JMP(loc_13794));	// 8310 jmp     short loc_13794 ;~ 01C2:3597
loc_13799:
	// 5189 
cs=0x1c2;eip=0x003599; 	T(MOV(ax, 0x12C));	// 8314 mov     ax, 12Ch ;~ 01C2:3599
cs=0x1c2;eip=0x00359c; 	X(MOV(word_155f4, ax));	// 8315 mov     word_155F4, ax ;~ 01C2:359C
cs=0x1c2;eip=0x00359f; 	J(CALL(sub_137b6,0));	// 8316 call    sub_137B6 ;~ 01C2:359F
loc_137a2:
	// 5190 
cs=0x1c2;eip=0x0035a2; 	J(CALL(sub_11500,0));	// 8319 call    sub_11500 ;~ 01C2:35A2
cs=0x1c2;eip=0x0035a5; 	X(DEC(word_155f4));	// 8320 dec     word_155F4 ;~ 01C2:35A5
cs=0x1c2;eip=0x0035a9; 	T(CMP(word_155f4, 0));	// 8321 cmp     word_155F4, 0 ;~ 01C2:35A9
cs=0x1c2;eip=0x0035ae; 	J(JNZ(loc_137a2));	// 8322 jnz     short loc_137A2 ;~ 01C2:35AE
cs=0x1c2;eip=0x0035b0; 	J(CALL(sub_14005,0));	// 8323 call    sub_14005 ;~ 01C2:35B0
cs=0x1c2;eip=0x0035b3; 	J(JMP(loc_13ca0));	// 8324 jmp     loc_13CA0 ;~ 01C2:35B3
sub_13819:
	// 8365 
cs=0x1c2;eip=0x003619; 	X(MOV(byte_1475b, 0));	// 8370 mov     byte_1475B, 0 ;~ 01C2:3619
ret_1c2_361e:
	// 5192 
cs=0x1c2;eip=0x00361e; 	X(MOV(byte_1545d, 0));	// 8371 mov     byte_1545D, 0 ;~ 01C2:361E
cs=0x1c2;eip=0x003623; 	T(TEST(byte_14b00, 0x0FF));	// 8372 test    byte_14B00, 0FFh ;~ 01C2:3623
cs=0x1c2;eip=0x003628; 	J(JZ(loc_1382b));	// 8373 jz      short loc_1382B ;~ 01C2:3628
cs=0x1c2;eip=0x00362a; 	R(RETN(0));	// 8374 retn ;~ 01C2:362A
loc_1382b:
	// 5193 
cs=0x1c2;eip=0x00362b; 	T(TEST(byte_15618, 2));	// 8378 test    byte_15618, 2 ;~ 01C2:362B
cs=0x1c2;eip=0x003630; 	J(JZ(loc_13855));	// 8379 jz      short loc_13855 ;~ 01C2:3630
cs=0x1c2;eip=0x003632; 	T(TEST(word_14758, 0x0FF));	// 8380 test    word_14758, 0FFh ;~ 01C2:3632
cs=0x1c2;eip=0x003638; 	J(JNZ(loc_1383d));	// 8381 jnz     short loc_1383D ;~ 01C2:3638
cs=0x1c2;eip=0x00363a; 	J(CALL(sub_10704,0));	// 8382 call    sub_10704 ;~ 01C2:363A
loc_1383d:
	// 5194 
cs=0x1c2;eip=0x00363d; 	J(CALL(sub_10421,0));	// 8385 call    sub_10421 ;~ 01C2:363D
cs=0x1c2;eip=0x003640; 	T(TEST(word_14758, 0x0FF));	// 8386 test    word_14758, 0FFh ;~ 01C2:3640
cs=0x1c2;eip=0x003646; 	J(JNZ(loc_1386c));	// 8387 jnz     short loc_1386C ;~ 01C2:3646
cs=0x1c2;eip=0x003648; 	J(CALL(sub_10421,0));	// 8388 call    sub_10421 ;~ 01C2:3648
cs=0x1c2;eip=0x00364b; 	T(TEST(word_14758, 0x0FF));	// 8389 test    word_14758, 0FFh ;~ 01C2:364B
cs=0x1c2;eip=0x003651; 	J(JZ(loc_1385d));	// 8390 jz      short loc_1385D ;~ 01C2:3651
cs=0x1c2;eip=0x003653; 	J(JMP(loc_1386c));	// 8391 jmp     short loc_1386C ;~ 01C2:3653
loc_13855:
	// 5195 
cs=0x1c2;eip=0x003655; 	T(TEST(word_14758, 0x0FF));	// 8395 test    word_14758, 0FFh ;~ 01C2:3655
cs=0x1c2;eip=0x00365b; 	J(JNZ(loc_1386c));	// 8396 jnz     short loc_1386C ;~ 01C2:365B
loc_1385d:
	// 5196 
cs=0x1c2;eip=0x00365d; 	X(MOV(byte_14b00, 0x0FF));	// 8399 mov     byte_14B00, 0FFh ;~ 01C2:365D
cs=0x1c2;eip=0x003662; 	J(CALL(sub_106bf,0));	// 8400 call    sub_106BF ;~ 01C2:3662
cs=0x1c2;eip=0x003665; 	T(MOV(sp, word_154e9));	// 8401 mov     sp, word_154E9 ;~ 01C2:3665
cs=0x1c2;eip=0x003669; 	J(JMP(loc_1378a));	// 8402 jmp     loc_1378A ;~ 01C2:3669
loc_1386c:
	// 5197 
cs=0x1c2;eip=0x00366c; 	J(CALL(sub_134ed,0));	// 8407 call    sub_134ED ;~ 01C2:366C
cs=0x1c2;eip=0x00366f; 	J(CALL(sub_13c4f,0));	// 8408 call    sub_13C4F ;~ 01C2:366F
cs=0x1c2;eip=0x003672; 	T(AND(al, 0x7F));	// 8409 and     al, 7Fh ;~ 01C2:3672
cs=0x1c2;eip=0x003674; 	X(MUL1_1(byte_154eb));	// 8410 mul     byte_154EB ;~ 01C2:3674
cs=0x1c2;eip=0x003678; 	X(MOV(word_14af6, ax));	// 8411 mov     word_14AF6, ax ;~ 01C2:3678
loc_1387b:
	// 5198 
cs=0x1c2;eip=0x00367b; 	J(CALL(sub_13c4f,0));	// 8414 call    sub_13C4F ;~ 01C2:367B
cs=0x1c2;eip=0x00367e; 	T(MOV(bx, ax));	// 8415 mov     bx, ax ;~ 01C2:367E
cs=0x1c2;eip=0x003680; 	J(CALL(sub_13c4f,0));	// 8416 call    sub_13C4F ;~ 01C2:3680
cs=0x1c2;eip=0x003683; 	T(MOV(dx, ax));	// 8417 mov     dx, ax ;~ 01C2:3683
cs=0x1c2;eip=0x003685; 	T(MOV(cx, 3));	// 8418 mov     cx, 3 ;~ 01C2:3685
cs=0x1c2;eip=0x003688; 	T(SAR(bx, cl));	// 8419 sar     bx, cl ;~ 01C2:3688
cs=0x1c2;eip=0x00368a; 	T(SAR(dx, cl));	// 8420 sar     dx, cl ;~ 01C2:368A
cs=0x1c2;eip=0x00368c; 	J(CALL(sub_10760,0));	// 8421 call    sub_10760 ;~ 01C2:368C
cs=0x1c2;eip=0x00368f; 	J(JC(loc_1387b));	// 8422 jb      short loc_1387B ;~ 01C2:368F
cs=0x1c2;eip=0x003691; 	J(CALL(sub_138a8,0));	// 8423 call    sub_138A8 ;~ 01C2:3691
cs=0x1c2;eip=0x003694; 	T(XOR(ax, ax));	// 8424 xor     ax, ax ;~ 01C2:3694
cs=0x1c2;eip=0x003696; 	X(MOV(word_14af8, ax));	// 8425 mov     word_14AF8, ax ;~ 01C2:3696
cs=0x1c2;eip=0x003699; 	X(MOV(word_14afa, ax));	// 8426 mov     word_14AFA, ax ;~ 01C2:3699
cs=0x1c2;eip=0x00369c; 	J(CALL(sub_11d07,0));	// 8427 call    sub_11D07 ;~ 01C2:369C
cs=0x1c2;eip=0x00369f; 	J(CALL(sub_13a76,0));	// 8428 call    sub_13A76 ;~ 01C2:369F
cs=0x1c2;eip=0x0036a2; 	X(MOV(byte_154e2, 0));	// 8429 mov     byte_154E2, 0 ;~ 01C2:36A2
cs=0x1c2;eip=0x0036a7; 	R(RETN(0));	// 8430 retn ;~ 01C2:36A7
seg001_3aa0_proc:
	// 9085 
loc_13ca0:
	// 5259 
cs=0x1c2;eip=0x003aa0; 	J(CALL(sub_134fa,0));	// 9087 call    sub_134FA ;~ 01C2:3AA0
cs=0x1c2;eip=0x003aa3; 	X(MOV(word_15610, 0));	// 9088 mov     word_15610, 0 ;~ 01C2:3AA3
cs=0x1c2;eip=0x003aa9; 	J(CALL(sub_1439e,0));	// 9089 call    sub_1439E ;~ 01C2:3AA9
cs=0x1c2;eip=0x003aac; 	J(CALL(sub_136b5,0));	// 9090 call    sub_136B5 ;~ 01C2:3AAC
cs=0x1c2;eip=0x003aaf; 	X(MOV(word_156e6, 0));	// 9091 mov     word_156E6, 0 ;~ 01C2:3AAF
cs=0x1c2;eip=0x003ab5; 	J(CALL(sub_13ea0,0));	// 9092 call    sub_13EA0 ;~ 01C2:3AB5
loc_13cb8:
	// 5260 
cs=0x1c2;eip=0x003ab8; 	J(CALL(sub_134e1,0));	// 9095 call    sub_134E1 ;~ 01C2:3AB8
cs=0x1c2;eip=0x003abb; 	J(JNZ(loc_13cbf));	// 9096 jnz     short loc_13CBF ;~ 01C2:3ABB
cs=0x1c2;eip=0x003abd; 	J(JMP(loc_13cdd));	// 9097 jmp     short loc_13CDD ;~ 01C2:3ABD
loc_13cbf:
	// 5261 
cs=0x1c2;eip=0x003abf; 	X(MOV(word_156e6, 0));	// 9101 mov     word_156E6, 0 ;~ 01C2:3ABF
cs=0x1c2;eip=0x003ac5; 	J(CALL(sub_134e8,0));	// 9102 call    sub_134E8 ;~ 01C2:3AC5
cs=0x1c2;eip=0x003ac8; 	T(CMP(ax, 0x3B00));	// 9103 cmp     ax, 3B00h ;~ 01C2:3AC8
cs=0x1c2;eip=0x003acb; 	J(JNZ(loc_13cd8));	// 9104 jnz     short loc_13CD8 ;~ 01C2:3ACB
cs=0x1c2;eip=0x003acd; 	J(CALL(sub_14005,0));	// 9105 call    sub_14005 ;~ 01C2:3ACD
cs=0x1c2;eip=0x003ad0; 	X(MOV(byte_14b00, 0));	// 9106 mov     byte_14B00, 0 ;~ 01C2:3AD0
cs=0x1c2;eip=0x003ad5; 	J(JMP(loc_1378a));	// 9107 jmp     loc_1378A ;~ 01C2:3AD5
loc_13cd8:
	// 5262 
cs=0x1c2;eip=0x003ad8; 	T(CMP(ax, 0x3C00));	// 9111 cmp     ax, 3C00h ;~ 01C2:3AD8
cs=0x1c2;eip=0x003adb; 	J(JZ(loc_13d1e));	// 9112 jz      short loc_13D1E ;~ 01C2:3ADB
loc_13cdd:
	// 5263 
cs=0x1c2;eip=0x003add; 	T(CMP(word_156e6, 0x960));	// 9115 cmp     word_156E6, 960h ;~ 01C2:3ADD
cs=0x1c2;eip=0x003ae3; 	J(JC(loc_13ced));	// 9116 jb      short loc_13CED ;~ 01C2:3AE3
cs=0x1c2;eip=0x003ae5; 	X(MOV(byte_14b00, 0x0FF));	// 9117 mov     byte_14B00, 0FFh ;~ 01C2:3AE5
cs=0x1c2;eip=0x003aea; 	J(JMP(loc_1378a));	// 9118 jmp     loc_1378A ;~ 01C2:3AEA
loc_13ced:
	// 5264 
cs=0x1c2;eip=0x003aed; 	T(MOV(ax, word_153be));	// 9122 mov     ax, word_153BE ;~ 01C2:3AED
cs=0x1c2;eip=0x003af0; 	X(PUSH(ax));	// 9123 push    ax ;~ 01C2:3AF0
cs=0x1c2;eip=0x003af1; 	T(MOV(bx, 0x5A));	// 9124 mov     bx, 5Ah ; 'Z' ;~ 01C2:3AF1
cs=0x1c2;eip=0x003af4; 	T(MOV(dx, word_15610));	// 9125 mov     dx, word_15610 ;~ 01C2:3AF4
cs=0x1c2;eip=0x003af8; 	X(MOV(word_14b41, 0x0FFE4));	// 9126 mov     word_14B41, 0FFE4h ;~ 01C2:3AF8
cs=0x1c2;eip=0x003afe; 	J(CALL(sub_1372f,0));	// 9127 call    sub_1372F ;~ 01C2:3AFE
cs=0x1c2;eip=0x003b01; 	J(CALL(sub_11d70,0));	// 9128 call    sub_11D70 ;~ 01C2:3B01
cs=0x1c2;eip=0x003b04; 	T(MOV(ax, 0x42));	// 9129 mov     ax, 42h ; 'B' ;~ 01C2:3B04
cs=0x1c2;eip=0x003b07; 	T(MOV(bx, 0x38));	// 9130 mov     bx, 38h ; '8' ;~ 01C2:3B07
cs=0x1c2;eip=0x003b0a; 	J(CALL(sub_128a1,0));	// 9131 call    sub_128A1 ;~ 01C2:3B0A
cs=0x1c2;eip=0x003b0d; 	X(POP(ax));	// 9132 pop     ax ;~ 01C2:3B0D
cs=0x1c2;eip=0x003b0e; 	X(MOV(word_153be, ax));	// 9133 mov     word_153BE, ax ;~ 01C2:3B0E
cs=0x1c2;eip=0x003b11; 	X(MOV(word_14b41, 0));	// 9134 mov     word_14B41, 0 ;~ 01C2:3B11
cs=0x1c2;eip=0x003b17; 	X(ADD(word_15610, 3));	// 9135 add     word_15610, 3 ;~ 01C2:3B17
cs=0x1c2;eip=0x003b1c; 	J(JMP(loc_13cb8));	// 9136 jmp     short loc_13CB8 ;~ 01C2:3B1C
loc_13d1e:
	// 5265 
cs=0x1c2;eip=0x003b1e; 	J(CALL(sub_134fa,0));	// 9141 call    sub_134FA ;~ 01C2:3B1E
cs=0x1c2;eip=0x003b21; 	J(CALL(sub_13dfa,0));	// 9142 call    sub_13DFA ;~ 01C2:3B21
cs=0x1c2;eip=0x003b24; 	J(CALL(sub_14005,0));	// 9143 call    sub_14005 ;~ 01C2:3B24
cs=0x1c2;eip=0x003b27; 	J(CALL(sub_143ae,0));	// 9144 call    sub_143AE ;~ 01C2:3B27
cs=0x1c2;eip=0x003b2a; 	T(MOV(si, 0x1035));	// 9145 mov     si, 1035h ;~ 01C2:3B2A
cs=0x1c2;eip=0x003b2d; 	T(TEST(byte_1545a, 0x0FF));	// 9146 test    byte_1545A, 0FFh ;~ 01C2:3B2D
cs=0x1c2;eip=0x003b32; 	J(JNZ(loc_13d37));	// 9147 jnz     short loc_13D37 ;~ 01C2:3B32
cs=0x1c2;eip=0x003b34; 	T(MOV(si, 0x1054));	// 9148 mov     si, 1054h ;~ 01C2:3B34
loc_13d37:
	// 5266 
cs=0x1c2;eip=0x003b37; 	J(CALL(sub_142f4,0));	// 9151 call    sub_142F4 ;~ 01C2:3B37
cs=0x1c2;eip=0x003b3a; 	J(CALL(sub_13dc4,0));	// 9152 call    sub_13DC4 ;~ 01C2:3B3A
cs=0x1c2;eip=0x003b3d; 	X(MOV(word_156e6, 0));	// 9153 mov     word_156E6, 0 ;~ 01C2:3B3D
loc_13d43:
	// 5267 
cs=0x1c2;eip=0x003b43; 	J(CALL(sub_134e1,0));	// 9157 call    sub_134E1 ;~ 01C2:3B43
cs=0x1c2;eip=0x003b46; 	J(JNZ(loc_13d53));	// 9158 jnz     short loc_13D53 ;~ 01C2:3B46
cs=0x1c2;eip=0x003b48; 	T(MOV(ax, word_156e6));	// 9159 mov     ax, word_156E6 ;~ 01C2:3B48
cs=0x1c2;eip=0x003b4b; 	T(CMP(ax, 0x0E10));	// 9160 cmp     ax, 0E10h ;~ 01C2:3B4B
cs=0x1c2;eip=0x003b4e; 	J(JC(loc_13d43));	// 9161 jb      short loc_13D43 ;~ 01C2:3B4E
cs=0x1c2;eip=0x003b50; 	J(JMP(loc_13e50));	// 9162 jmp     loc_13E50 ;~ 01C2:3B50
loc_13d53:
	// 5268 
cs=0x1c2;eip=0x003b53; 	X(MOV(word_156e6, 0));	// 9166 mov     word_156E6, 0 ;~ 01C2:3B53
cs=0x1c2;eip=0x003b59; 	J(CALL(sub_134e8,0));	// 9167 call    sub_134E8 ;~ 01C2:3B59
cs=0x1c2;eip=0x003b5c; 	T(OR(al, al));	// 9168 or      al, al ;~ 01C2:3B5C
cs=0x1c2;eip=0x003b5e; 	J(JNZ(loc_13d94));	// 9169 jnz     short loc_13D94 ;~ 01C2:3B5E
cs=0x1c2;eip=0x003b60; 	T(SUB(ah, 0x3B));	// 9170 sub     ah, 3Bh ; ';' ;~ 01C2:3B60
cs=0x1c2;eip=0x003b63; 	J(JNZ(loc_13d6d));	// 9171 jnz     short loc_13D6D ;~ 01C2:3B63
cs=0x1c2;eip=0x003b65; 	X(MOV(byte_14b00, 0));	// 9172 mov     byte_14B00, 0 ;~ 01C2:3B65
cs=0x1c2;eip=0x003b6a; 	J(JMP(loc_1378a));	// 9173 jmp     loc_1378A ;~ 01C2:3B6A
loc_13d6d:
	// 5269 
cs=0x1c2;eip=0x003b6d; 	T(DEC(ah));	// 9177 dec     ah ;~ 01C2:3B6D
cs=0x1c2;eip=0x003b6f; 	T(DEC(ah));	// 9178 dec     ah ;~ 01C2:3B6F
cs=0x1c2;eip=0x003b71; 	J(JNZ(loc_13d76));	// 9179 jnz     short loc_13D76 ;~ 01C2:3B71
cs=0x1c2;eip=0x003b73; 	J(JMP(loc_13e58));	// 9180 jmp     loc_13E58 ;~ 01C2:3B73
loc_13d76:
	// 5270 
cs=0x1c2;eip=0x003b76; 	T(DEC(ah));	// 9184 dec     ah ;~ 01C2:3B76
cs=0x1c2;eip=0x003b78; 	T(DEC(ah));	// 9185 dec     ah ;~ 01C2:3B78
cs=0x1c2;eip=0x003b7a; 	J(JNZ(loc_13d7f));	// 9186 jnz     short loc_13D7F ;~ 01C2:3B7A
cs=0x1c2;eip=0x003b7c; 	J(JMP(loc_13e72));	// 9187 jmp     loc_13E72 ;~ 01C2:3B7C
loc_13d7f:
	// 5271 
cs=0x1c2;eip=0x003b7f; 	T(SUB(ah, 3));	// 9191 sub     ah, 3 ;~ 01C2:3B7F
cs=0x1c2;eip=0x003b82; 	J({;});	// 9192 jnz     short $+2 ;~ 01C2:3B82
loc_13d84:
	// 5272 
cs=0x1c2;eip=0x003b84; 	T(DEC(ah));	// 9195 dec     ah ;~ 01C2:3B84
cs=0x1c2;eip=0x003b86; 	J(JNZ(loc_13d8b));	// 9196 jnz     short loc_13D8B ;~ 01C2:3B86
cs=0x1c2;eip=0x003b88; 	J(JMP(loc_13e1b));	// 9197 jmp     loc_13E1B ;~ 01C2:3B88
loc_13d8b:
	// 5273 
cs=0x1c2;eip=0x003b8b; 	T(DEC(ah));	// 9201 dec     ah ;~ 01C2:3B8B
cs=0x1c2;eip=0x003b8d; 	J(JNZ(loc_13d43));	// 9202 jnz     short loc_13D43 ;~ 01C2:3B8D
cs=0x1c2;eip=0x003b8f; 	J(JMP(loc_13e07));	// 9203 jmp     short loc_13E07 ;~ 01C2:3B8F
loc_13d92:
	// 5274 
cs=0x1c2;eip=0x003b92; 	J(JMP(loc_13d43));	// 9211 jmp     short loc_13D43 ;~ 01C2:3B92
loc_13d94:
	// 5275 
cs=0x1c2;eip=0x003b94; 	T(AND(al, 0x0DF));	// 9215 and     al, 0DFh ;~ 01C2:3B94
cs=0x1c2;eip=0x003b96; 	T(CMP(al, 0x53));	// 9216 cmp     al, 53h ; 'S' ;~ 01C2:3B96
cs=0x1c2;eip=0x003b98; 	J(JNZ(loc_13d9d));	// 9217 jnz     short loc_13D9D ;~ 01C2:3B98
cs=0x1c2;eip=0x003b9a; 	J(JMP(loc_13dad));	// 9218 jmp     short loc_13DAD ;~ 01C2:3B9A
loc_13d9d:
	// 5276 
cs=0x1c2;eip=0x003b9d; 	T(CMP(al, 0x43));	// 9226 cmp     al, 43h ; 'C' ;~ 01C2:3B9D
cs=0x1c2;eip=0x003b9f; 	J(JNZ(loc_13da6));	// 9227 jnz     short loc_13DA6 ;~ 01C2:3B9F
cs=0x1c2;eip=0x003ba1; 	J(JMP(loc_143be));	// 9228 jmp     loc_143BE ;~ 01C2:3BA1
ret_1c2_3ba4:
	// 5277 
cs=0x1c2;eip=0x003ba4; 	J(JMP(loc_13d92));	// 9231 jmp     short loc_13D92 ;~ 01C2:3BA4
loc_13da6:
	// 5278 
cs=0x1c2;eip=0x003ba6; 	T(CMP(al, 0x58));	// 9236 cmp     al, 58h ; 'X' ;~ 01C2:3BA6
cs=0x1c2;eip=0x003ba8; 	J(JNZ(loc_13d92));	// 9237 jnz     short loc_13D92 ;~ 01C2:3BA8
cs=0x1c2;eip=0x003baa; 	J(JMP(loc_144dd));	// 9238 jmp     loc_144DD ;~ 01C2:3BAA
loc_13dad:
	// 5279 
cs=0x1c2;eip=0x003bad; 	T(MOV(al, byte_156d8));	// 9242 mov     al, byte_156D8 ;~ 01C2:3BAD
cs=0x1c2;eip=0x003bb0; 	T(XOR(al, 0x0FF));	// 9243 xor     al, 0FFh ;~ 01C2:3BB0
cs=0x1c2;eip=0x003bb2; 	X(MOV(byte_156d8, al));	// 9244 mov     byte_156D8, al ;~ 01C2:3BB2
cs=0x1c2;eip=0x003bb5; 	J(JZ(loc_13dbf));	// 9245 jz      short loc_13DBF ;~ 01C2:3BB5
cs=0x1c2;eip=0x003bb7; 	T(MOV(si, 0x0FF8));	// 9246 mov     si, 0FF8h ;~ 01C2:3BB7
loc_13dba:
	// 5280 
cs=0x1c2;eip=0x003bba; 	J(CALL(sub_142f4,0));	// 9249 call    sub_142F4 ;~ 01C2:3BBA
cs=0x1c2;eip=0x003bbd; 	J(JMP(loc_13d43));	// 9250 jmp     short loc_13D43 ;~ 01C2:3BBD
loc_13dbf:
	// 5281 
cs=0x1c2;eip=0x003bbf; 	T(MOV(si, 0x1005));	// 9254 mov     si, 1005h ;~ 01C2:3BBF
cs=0x1c2;eip=0x003bc2; 	J(JMP(loc_13dba));	// 9255 jmp     short loc_13DBA ;~ 01C2:3BC2
seg001_3c07_proc:
	// 9316 
loc_13e07:
	// 5288 
cs=0x1c2;eip=0x003c07; 	T(MOV(al, byte_154c3));	// 9317 mov     al, byte_154C3 ;~ 01C2:3C07
cs=0x1c2;eip=0x003c0a; 	T(CMP(al, byte_154c4));	// 9318 cmp     al, byte_154C4 ;~ 01C2:3C0A
cs=0x1c2;eip=0x003c0e; 	J(JBE(loc_13e15));	// 9319 jbe     short loc_13E15 ;~ 01C2:3C0E
cs=0x1c2;eip=0x003c10; 	T(DEC(al));	// 9320 dec     al ;~ 01C2:3C10
loc_13e12:
	// 5289 
cs=0x1c2;eip=0x003c12; 	X(MOV(byte_154c3, al));	// 9323 mov     byte_154C3, al ;~ 01C2:3C12
loc_13e15:
	// 5290 
cs=0x1c2;eip=0x003c15; 	J(CALL(sub_1370d,0));	// 9327 call    sub_1370D ;~ 01C2:3C15
cs=0x1c2;eip=0x003c18; 	J(JMP(loc_13d43));	// 9328 jmp     loc_13D43 ;~ 01C2:3C18
loc_13e1b:
	// 5291 
cs=0x1c2;eip=0x003c1b; 	T(MOV(al, byte_154c3));	// 9332 mov     al, byte_154C3 ;~ 01C2:3C1B
cs=0x1c2;eip=0x003c1e; 	T(CMP(al, byte_154c5));	// 9333 cmp     al, byte_154C5 ;~ 01C2:3C1E
cs=0x1c2;eip=0x003c22; 	J(JNC(loc_13e15));	// 9334 jnb     short loc_13E15 ;~ 01C2:3C22
cs=0x1c2;eip=0x003c24; 	T(INC(al));	// 9335 inc     al ;~ 01C2:3C24
cs=0x1c2;eip=0x003c26; 	J(JMP(loc_13e12));	// 9336 jmp     short loc_13E12 ;~ 01C2:3C26
ret_1c2_3c28:
	// 5292 
cs=0x1c2;eip=0x003c28; 	X(XOR(byte_1fec8, 0x0FF));	// 9339 xor     byte_1FEC8, 0FFh ;~ 01C2:3C28
cs=0x1c2;eip=0x003c2d; 	J(CALL(sub_13e3d,0));	// 9340 call    sub_13E3D ;~ 01C2:3C2D
cs=0x1c2;eip=0x003c30; 	T(TEST(byte_1fec8, 0x0FF));	// 9341 test    byte_1FEC8, 0FFh ;~ 01C2:3C30
cs=0x1c2;eip=0x003c35; 	J(JZ(loc_13e3a));	// 9342 jz      short loc_13E3A ;~ 01C2:3C35
cs=0x1c2;eip=0x003c37; 	J(JMP(loc_13d92));	// 9343 jmp     loc_13D92 ;~ 01C2:3C37
loc_13e3a:
	// 5293 
cs=0x1c2;eip=0x003c3a; 	J(JMP(loc_13d92));	// 9347 jmp     loc_13D92 ;~ 01C2:3C3A
seg001_3c50_proc:
	// 9370 
loc_13e50:
	// 5297 
cs=0x1c2;eip=0x003c50; 	X(MOV(byte_14b00, 0x0FF));	// 9371 mov     byte_14B00, 0FFh ;~ 01C2:3C50
cs=0x1c2;eip=0x003c55; 	J(JMP(loc_1378a));	// 9372 jmp     loc_1378A ;~ 01C2:3C55
loc_13e58:
	// 5298 
cs=0x1c2;eip=0x003c58; 	X(XOR(byte_15618, 2));	// 9376 xor     byte_15618, 2 ;~ 01C2:3C58
cs=0x1c2;eip=0x003c5d; 	T(TEST(byte_15618, 2));	// 9377 test    byte_15618, 2 ;~ 01C2:3C5D
cs=0x1c2;eip=0x003c62; 	J(JNZ(loc_13e6d));	// 9378 jnz     short loc_13E6D ;~ 01C2:3C62
cs=0x1c2;eip=0x003c64; 	T(MOV(si, 0x0FDA));	// 9379 mov     si, 0FDAh ;~ 01C2:3C64
loc_13e67:
	// 5299 
cs=0x1c2;eip=0x003c67; 	J(CALL(sub_142f4,0));	// 9382 call    sub_142F4 ;~ 01C2:3C67
cs=0x1c2;eip=0x003c6a; 	J(JMP(loc_13d43));	// 9383 jmp     loc_13D43 ;~ 01C2:3C6A
loc_13e6d:
	// 5300 
cs=0x1c2;eip=0x003c6d; 	T(MOV(si, 0x0FE9));	// 9387 mov     si, 0FE9h ;~ 01C2:3C6D
cs=0x1c2;eip=0x003c70; 	J(JMP(loc_13e67));	// 9388 jmp     short loc_13E67 ;~ 01C2:3C70
loc_13e72:
	// 5301 
cs=0x1c2;eip=0x003c72; 	T(MOV(al, byte_15619));	// 9392 mov     al, byte_15619 ;~ 01C2:3C72
cs=0x1c2;eip=0x003c75; 	T(INC(al));	// 9393 inc     al ;~ 01C2:3C75
cs=0x1c2;eip=0x003c77; 	T(CMP(al, 7));	// 9394 cmp     al, 7 ;~ 01C2:3C77
cs=0x1c2;eip=0x003c79; 	J(JC(loc_13e7d));	// 9395 jb      short loc_13E7D ;~ 01C2:3C79
cs=0x1c2;eip=0x003c7b; 	T(MOV(al, 1));	// 9396 mov     al, 1 ;~ 01C2:3C7B
loc_13e7d:
	// 5302 
cs=0x1c2;eip=0x003c7d; 	X(MOV(byte_15619, al));	// 9399 mov     byte_15619, al ;~ 01C2:3C7D
cs=0x1c2;eip=0x003c80; 	J(CALL(sub_13e86,0));	// 9400 call    sub_13E86 ;~ 01C2:3C80
cs=0x1c2;eip=0x003c83; 	J(JMP(loc_13d43));	// 9401 jmp     loc_13D43 ;~ 01C2:3C83
seg001_3d37_proc:
	// 9551 
cs=0x1c2;eip=0x003d37; 	T(STI);	// 9551 sti ;~ 01C2:3D37
ret_1c2_3d38:
	// 5309 
cs=0x1c2;eip=0x003d38; 	X(PUSH(ax));	// 9552 push    ax ;~ 01C2:3D38
cs=0x1c2;eip=0x003d39; 	X(PUSH(bx));	// 9553 push    bx ;~ 01C2:3D39
cs=0x1c2;eip=0x003d3a; 	X(PUSH(cx));	// 9554 push    cx ;~ 01C2:3D3A
cs=0x1c2;eip=0x003d3b; 	X(PUSH(si));	// 9555 push    si ;~ 01C2:3D3B
cs=0x1c2;eip=0x003d3c; 	X(PUSH(di));	// 9556 push    di ;~ 01C2:3D3C
cs=0x1c2;eip=0x003d3d; 	X(PUSH(ds));	// 9557 push    ds ;~ 01C2:3D3D
loc_13f3e:
	// 5310 
cs=0x1c2;eip=0x003d3e; 	T(MOV(ax, seg_offset(seg002)));	// 9560 mov     ax, seg seg002 ;~ 01C2:3D3E
cs=0x1c2;eip=0x003d41; 	T(MOV(ds, ax));	// 9561 mov     ds, ax ;~ 01C2:3D41
cs=0x1c2;eip=0x003d43; 	X(INC(word_156e2));	// 9562 inc     word_156E2 ;~ 01C2:3D43
cs=0x1c2;eip=0x003d47; 	J(JNZ(loc_13f4d));	// 9563 jnz     short loc_13F4D ;~ 01C2:3D47
cs=0x1c2;eip=0x003d49; 	X(INC(word_156e4));	// 9564 inc     word_156E4 ;~ 01C2:3D49
loc_13f4d:
	// 5311 
cs=0x1c2;eip=0x003d4d; 	X(INC(word_156e6));	// 9567 inc     word_156E6 ;~ 01C2:3D4D
cs=0x1c2;eip=0x003d51; 	J(JNZ(loc_13f57));	// 9568 jnz     short loc_13F57 ;~ 01C2:3D51
cs=0x1c2;eip=0x003d53; 	X(INC(word_156e8));	// 9569 inc     word_156E8 ;~ 01C2:3D53
loc_13f57:
	// 5312 
cs=0x1c2;eip=0x003d57; 	T(XOR(bh, bh));	// 9572 xor     bh, bh ;~ 01C2:3D57
cs=0x1c2;eip=0x003d59; 	T(TEST(byte_156da, 0x0FF));	// 9573 test    byte_156DA, 0FFh ;~ 01C2:3D59
cs=0x1c2;eip=0x003d5e; 	J(JZ(loc_13fdc));	// 9574 jz      short loc_13FDC ;~ 01C2:3D5E
cs=0x1c2;eip=0x003d60; 	T(TEST(byte_156e1, 0x0FF));	// 9575 test    byte_156E1, 0FFh ;~ 01C2:3D60
cs=0x1c2;eip=0x003d65; 	J(JZ(loc_13f6f));	// 9576 jz      short loc_13F6F ;~ 01C2:3D65
cs=0x1c2;eip=0x003d67; 	X(MOV(byte_156e1, 0));	// 9577 mov     byte_156E1, 0 ;~ 01C2:3D67
cs=0x1c2;eip=0x003d6c; 	J(CALL(sub_13fe7,0));	// 9578 call    sub_13FE7 ;~ 01C2:3D6C
loc_13f6f:
	// 5313 
cs=0x1c2;eip=0x003d6f; 	T(MOV(al, byte_156df));	// 9581 mov     al, byte_156DF ;~ 01C2:3D6F
cs=0x1c2;eip=0x003d72; 	T(OR(al, al));	// 9582 or      al, al ;~ 01C2:3D72
cs=0x1c2;eip=0x003d74; 	J(JZ(loc_13f9c));	// 9583 jz      short loc_13F9C ;~ 01C2:3D74
cs=0x1c2;eip=0x003d76; 	T(DEC(al));	// 9584 dec     al ;~ 01C2:3D76
cs=0x1c2;eip=0x003d78; 	X(MOV(byte_156df, al));	// 9585 mov     byte_156DF, al ;~ 01C2:3D78
cs=0x1c2;eip=0x003d7b; 	T(MOV(al, byte_156dc));	// 9586 mov     al, byte_156DC ;~ 01C2:3D7B
cs=0x1c2;eip=0x003d7e; 	T(ADD(al, byte_156dd));	// 9587 add     al, byte_156DD ;~ 01C2:3D7E
cs=0x1c2;eip=0x003d82; 	X(MOV(byte_156dd, al));	// 9588 mov     byte_156DD, al ;~ 01C2:3D82
cs=0x1c2;eip=0x003d85; 	J(JNC(loc_13f9a));	// 9589 jnb     short loc_13F9A ;~ 01C2:3D85
cs=0x1c2;eip=0x003d87; 	T(TEST(byte_156de, 0x0FF));	// 9590 test    byte_156DE, 0FFh ;~ 01C2:3D87
cs=0x1c2;eip=0x003d8c; 	J(JZ(loc_13f94));	// 9591 jz      short loc_13F94 ;~ 01C2:3D8C
cs=0x1c2;eip=0x003d8e; 	X(INC(byte_156db));	// 9592 inc     byte_156DB ;~ 01C2:3D8E
cs=0x1c2;eip=0x003d92; 	J(JMP(loc_13fc9));	// 9593 jmp     short loc_13FC9 ;~ 01C2:3D92
loc_13f94:
	// 5314 
cs=0x1c2;eip=0x003d94; 	X(DEC(byte_156db));	// 9597 dec     byte_156DB ;~ 01C2:3D94
cs=0x1c2;eip=0x003d98; 	J(JMP(loc_13fc9));	// 9598 jmp     short loc_13FC9 ;~ 01C2:3D98
loc_13f9a:
	// 5315 
cs=0x1c2;eip=0x003d9a; 	J(JMP(loc_13fdc));	// 9602 jmp     short loc_13FDC ;~ 01C2:3D9A
loc_13f9c:
	// 5316 
cs=0x1c2;eip=0x003d9c; 	X(INC(byte_156d9));	// 9606 inc     byte_156D9 ;~ 01C2:3D9C
cs=0x1c2;eip=0x003da0; 	T(MOV(bl, byte_156e0));	// 9607 mov     bl, byte_156E0 ;~ 01C2:3DA0
cs=0x1c2;eip=0x003da4; 	J(CALL(sub_140c6,0));	// 9608 call    sub_140C6 ;~ 01C2:3DA4
cs=0x1c2;eip=0x003da7; 	T(MOV(bl, byte_156d9));	// 9609 mov     bl, byte_156D9 ;~ 01C2:3DA7
cs=0x1c2;eip=0x003dab; 	T(MOV(al, *(raddr(ds,bx+di))));	// 9610 mov     al, [bx+di] ;~ 01C2:3DAB
cs=0x1c2;eip=0x003dad; 	T(OR(al, al));	// 9611 or      al, al ;~ 01C2:3DAD
cs=0x1c2;eip=0x003daf; 	J(JZ(loc_13fce));	// 9612 jz      short loc_13FCE ;~ 01C2:3DAF
cs=0x1c2;eip=0x003db1; 	J(JS(loc_13fd5));	// 9613 js      short loc_13FD5 ;~ 01C2:3DB1
cs=0x1c2;eip=0x003db3; 	T(DEC(al));	// 9614 dec     al ;~ 01C2:3DB3
cs=0x1c2;eip=0x003db5; 	X(MOV(byte_156df, al));	// 9615 mov     byte_156DF, al ;~ 01C2:3DB5
cs=0x1c2;eip=0x003db8; 	T(MOV(al, *(raddr(ds,bx+si))));	// 9616 mov     al, [bx+si] ;~ 01C2:3DB8
cs=0x1c2;eip=0x003dba; 	X(MOV(byte_156db, al));	// 9617 mov     byte_156DB, al ;~ 01C2:3DBA
cs=0x1c2;eip=0x003dbd; 	T(CMP(al, 0x0FF));	// 9618 cmp     al, 0FFh ;~ 01C2:3DBD
cs=0x1c2;eip=0x003dbf; 	J(JNZ(loc_13fc9));	// 9619 jnz     short loc_13FC9 ;~ 01C2:3DBF
cs=0x1c2;eip=0x003dc1; 	R(IN(al, 0x61));	// 9620 in      al, 61h         ; PC/XT PPI port B bits: ;~ 01C2:3DC1
cs=0x1c2;eip=0x003dc3; 	T(AND(al, 0x0FC));	// 9628 and     al, 0FCh ;~ 01C2:3DC3
cs=0x1c2;eip=0x003dc5; 	R(OUT(0x61, al));	// 9629 out     61h, al         ; PC/XT PPI port B bits: ;~ 01C2:3DC5
cs=0x1c2;eip=0x003dc7; 	J(JMP(loc_13fdc));	// 9637 jmp     short loc_13FDC ;~ 01C2:3DC7
loc_13fc9:
	// 5317 
cs=0x1c2;eip=0x003dc9; 	J(CALL(sub_13fe7,0));	// 9642 call    sub_13FE7 ;~ 01C2:3DC9
cs=0x1c2;eip=0x003dcc; 	J(JMP(loc_13fdc));	// 9643 jmp     short loc_13FDC ;~ 01C2:3DCC
loc_13fce:
	// 5318 
cs=0x1c2;eip=0x003dce; 	T(MOV(al, 0));	// 9647 mov     al, 0 ;~ 01C2:3DCE
cs=0x1c2;eip=0x003dd0; 	J(CALL(sub_14005,0));	// 9648 call    sub_14005 ;~ 01C2:3DD0
cs=0x1c2;eip=0x003dd3; 	J(JMP(loc_13fdc));	// 9649 jmp     short loc_13FDC ;~ 01C2:3DD3
loc_13fd5:
	// 5319 
cs=0x1c2;eip=0x003dd5; 	T(MOV(bl, byte_156e0));	// 9653 mov     bl, byte_156E0 ;~ 01C2:3DD5
cs=0x1c2;eip=0x003dd9; 	J(CALL(sub_140a5,0));	// 9654 call    sub_140A5 ;~ 01C2:3DD9
loc_13fdc:
	// 5320 
cs=0x1c2;eip=0x003ddc; 	T(MOV(al, 0x20));	// 9658 mov     al, 20h ; ' ' ;~ 01C2:3DDC
cs=0x1c2;eip=0x003dde; 	R(OUT(0x20, al));	// 9659 out     20h, al         ; Interrupt controller, 8259A. ;~ 01C2:3DDE
cs=0x1c2;eip=0x003de0; 	X(POP(ds));	// 9660 pop     ds ;~ 01C2:3DE0
cs=0x1c2;eip=0x003de1; 	X(POP(di));	// 9662 pop     di ;~ 01C2:3DE1
cs=0x1c2;eip=0x003de2; 	X(POP(si));	// 9663 pop     si ;~ 01C2:3DE2
cs=0x1c2;eip=0x003de3; 	X(POP(cx));	// 9664 pop     cx ;~ 01C2:3DE3
cs=0x1c2;eip=0x003de4; 	X(POP(bx));	// 9665 pop     bx ;~ 01C2:3DE4
cs=0x1c2;eip=0x003de5; 	X(POP(ax));	// 9666 pop     ax ;~ 01C2:3DE5
cs=0x1c2;eip=0x003de6; 	R(IRET);	// 9667 iret ;~ 01C2:3DE6
sub_14015:
	// 9725 
cs=0x1c2;eip=0x003e15; 	T(TEST(byte_156d8, 0x0FF));	// 9727 test    byte_156D8, 0FFh ;~ 01C2:3E15
ret_1c2_3e1a:
	// 5323 
cs=0x1c2;eip=0x003e1a; 	J(JNZ(loc_14020));	// 9728 jnz     short loc_14020 ;~ 01C2:3E1A
cs=0x1c2;eip=0x003e1c; 	J(CALL(sub_14005,0));	// 9729 call    sub_14005 ;~ 01C2:3E1C
cs=0x1c2;eip=0x003e1f; 	R(RETN(0));	// 9730 retn ;~ 01C2:3E1F
loc_14020:
	// 5324 
cs=0x1c2;eip=0x003e20; 	T(CMP(al, 0x0B));	// 9734 cmp     al, 0Bh ;~ 01C2:3E20
cs=0x1c2;eip=0x003e22; 	J(JNZ(loc_14028));	// 9735 jnz     short loc_14028 ;~ 01C2:3E22
cs=0x1c2;eip=0x003e24; 	J(CALL(sub_14100,0));	// 9736 call    sub_14100 ;~ 01C2:3E24
cs=0x1c2;eip=0x003e27; 	R(RETN(0));	// 9737 retn ;~ 01C2:3E27
loc_14028:
	// 5325 
cs=0x1c2;eip=0x003e28; 	T(CMP(al, 0x14));	// 9741 cmp     al, 14h ;~ 01C2:3E28
cs=0x1c2;eip=0x003e2a; 	J(JNZ(loc_14030));	// 9742 jnz     short loc_14030 ;~ 01C2:3E2A
cs=0x1c2;eip=0x003e2c; 	J(CALL(sub_141d2,0));	// 9743 call    sub_141D2 ;~ 01C2:3E2C
cs=0x1c2;eip=0x003e2f; 	R(RETN(0));	// 9744 retn ;~ 01C2:3E2F
loc_14030:
	// 5326 
cs=0x1c2;eip=0x003e30; 	X(PUSH(bx));	// 9748 push    bx ;~ 01C2:3E30
cs=0x1c2;eip=0x003e31; 	X(PUSH(cx));	// 9749 push    cx ;~ 01C2:3E31
cs=0x1c2;eip=0x003e32; 	X(PUSH(si));	// 9750 push    si ;~ 01C2:3E32
cs=0x1c2;eip=0x003e33; 	X(PUSH(di));	// 9751 push    di ;~ 01C2:3E33
cs=0x1c2;eip=0x003e34; 	X(PUSH(ax));	// 9752 push    ax ;~ 01C2:3E34
cs=0x1c2;eip=0x003e35; 	X(PUSH(ds));	// 9753 push    ds ;~ 01C2:3E35
loc_14036:
	// 5327 
cs=0x1c2;eip=0x003e36; 	T(MOV(ax, 0x1d2));	// 9756 mov     ax, 1030h ;~ 01C2:3E36
cs=0x1c2;eip=0x003e39; 	T(MOV(ds, ax));	// 9757 mov     ds, ax ;~ 01C2:3E39
cs=0x1c2;eip=0x003e3b; 	T(MOV(si, 0x2C));	// 9759 mov     si, 2Ch ; ',' ;~ 01C2:3E3B
cs=0x1c2;eip=0x003e3e; 	T(MOV(ah, 0));	// 9760 mov     ah, 0 ;~ 01C2:3E3E
cs=0x1c2;eip=0x003e40; 	T(LODSB);	// 9761 lodsb ;~ 01C2:3E40
cs=0x1c2;eip=0x003e41; 	T(AND(al, 0x20));	// 9762 and     al, 20h ;~ 01C2:3E41
cs=0x1c2;eip=0x003e43; 	J(JNZ(loc_14047));	// 9763 jnz     short loc_14047 ;~ 01C2:3E43
cs=0x1c2;eip=0x003e45; 	T(INC(ah));	// 9764 inc     ah ;~ 01C2:3E45
loc_14047:
	// 5328 
cs=0x1c2;eip=0x003e47; 	T(LODSB);	// 9767 lodsb ;~ 01C2:3E47
cs=0x1c2;eip=0x003e48; 	T(AND(al, 0x0FF));	// 9768 and     al, 0FFh ;~ 01C2:3E48
cs=0x1c2;eip=0x003e4a; 	J(JZ(loc_1404e));	// 9769 jz      short loc_1404E ;~ 01C2:3E4A
cs=0x1c2;eip=0x003e4c; 	T(INC(ah));	// 9770 inc     ah ;~ 01C2:3E4C
loc_1404e:
	// 5329 
cs=0x1c2;eip=0x003e4e; 	X(POP(ds));	// 9773 pop     ds ;~ 01C2:3E4E
cs=0x1c2;eip=0x003e4f; 	T(OR(ah, ah));	// 9775 or      ah, ah ;~ 01C2:3E4F
cs=0x1c2;eip=0x003e51; 	J(JZ(loc_14059));	// 9776 jz      short loc_14059 ;~ 01C2:3E51
cs=0x1c2;eip=0x003e53; 	X(MOV(word_156b0, 0x200));	// 9777 mov     word_156B0, 200h ;~ 01C2:3E53
loc_14059:
	// 5330 
cs=0x1c2;eip=0x003e59; 	X(POP(ax));	// 9780 pop     ax ;~ 01C2:3E59
cs=0x1c2;eip=0x003e5a; 	T(TEST(byte_156da, 0x0FF));	// 9781 test    byte_156DA, 0FFh ;~ 01C2:3E5A
cs=0x1c2;eip=0x003e5f; 	J(JZ(loc_1407f));	// 9782 jz      short loc_1407F ;~ 01C2:3E5F
cs=0x1c2;eip=0x003e61; 	T(MOV(si, 0x12A4));	// 9783 mov     si, 12A4h ;~ 01C2:3E61
cs=0x1c2;eip=0x003e64; 	T(MOV(bh, al));	// 9784 mov     bh, al ;~ 01C2:3E64
cs=0x1c2;eip=0x003e66; 	T(MOV(bl, byte_156e0));	// 9785 mov     bl, byte_156E0 ;~ 01C2:3E66
cs=0x1c2;eip=0x003e6a; 	T(CMP(bl, bh));	// 9786 cmp     bl, bh ;~ 01C2:3E6A
cs=0x1c2;eip=0x003e6c; 	J(JZ(loc_1407d));	// 9787 jz      short loc_1407D ;~ 01C2:3E6C
loc_1406e:
	// 5331 
cs=0x1c2;eip=0x003e6e; 	T(LODSB);	// 9790 lodsb ;~ 01C2:3E6E
cs=0x1c2;eip=0x003e6f; 	T(OR(al, al));	// 9791 or      al, al ;~ 01C2:3E6F
cs=0x1c2;eip=0x003e71; 	J(JS(loc_1407d));	// 9792 js      short loc_1407D ;~ 01C2:3E71
cs=0x1c2;eip=0x003e73; 	T(CMP(al, bl));	// 9793 cmp     al, bl ;~ 01C2:3E73
cs=0x1c2;eip=0x003e75; 	J(JZ(loc_1409f));	// 9794 jz      short loc_1409F ;~ 01C2:3E75
cs=0x1c2;eip=0x003e77; 	T(CMP(al, bh));	// 9795 cmp     al, bh ;~ 01C2:3E77
cs=0x1c2;eip=0x003e79; 	J(JZ(loc_1407d));	// 9796 jz      short loc_1407D ;~ 01C2:3E79
cs=0x1c2;eip=0x003e7b; 	J(JMP(loc_1406e));	// 9797 jmp     short loc_1406E ;~ 01C2:3E7B
loc_1407d:
	// 5332 
cs=0x1c2;eip=0x003e7d; 	T(MOV(al, bh));	// 9802 mov     al, bh ;~ 01C2:3E7D
loc_1407f:
	// 5333 
cs=0x1c2;eip=0x003e7f; 	T(CLI);	// 9805 cli ;~ 01C2:3E7F
cs=0x1c2;eip=0x003e80; 	X(MOV(byte_156e0, al));	// 9806 mov     byte_156E0, al ;~ 01C2:3E80
cs=0x1c2;eip=0x003e83; 	T(CMP(al, 0x0A));	// 9807 cmp     al, 0Ah ;~ 01C2:3E83
cs=0x1c2;eip=0x003e85; 	J(JNZ(loc_1408c));	// 9808 jnz     short loc_1408C ;~ 01C2:3E85
cs=0x1c2;eip=0x003e87; 	X(MOV(byte_156de, 0x0FF));	// 9809 mov     byte_156DE, 0FFh ;~ 01C2:3E87
loc_1408c:
	// 5334 
cs=0x1c2;eip=0x003e8c; 	X(MOV(byte_156da, 1));	// 9812 mov     byte_156DA, 1 ;~ 01C2:3E8C
cs=0x1c2;eip=0x003e91; 	T(MOV(bl, al));	// 9813 mov     bl, al ;~ 01C2:3E91
cs=0x1c2;eip=0x003e93; 	T(XOR(bh, bh));	// 9814 xor     bh, bh ;~ 01C2:3E93
cs=0x1c2;eip=0x003e95; 	T(MOV(al, *(raddr(ds,bx+0x1102))));	// 9815 mov     al, [bx+1102h] ;~ 01C2:3E95
cs=0x1c2;eip=0x003e99; 	X(MOV(byte_156dc, al));	// 9816 mov     byte_156DC, al ;~ 01C2:3E99
cs=0x1c2;eip=0x003e9c; 	J(CALL(sub_140a5,0));	// 9817 call    sub_140A5 ;~ 01C2:3E9C
loc_1409f:
	// 5335 
cs=0x1c2;eip=0x003e9f; 	T(STI);	// 9820 sti ;~ 01C2:3E9F
cs=0x1c2;eip=0x003ea0; 	X(POP(di));	// 9821 pop     di ;~ 01C2:3EA0
cs=0x1c2;eip=0x003ea1; 	X(POP(si));	// 9822 pop     si ;~ 01C2:3EA1
cs=0x1c2;eip=0x003ea2; 	X(POP(cx));	// 9823 pop     cx ;~ 01C2:3EA2
cs=0x1c2;eip=0x003ea3; 	X(POP(bx));	// 9824 pop     bx ;~ 01C2:3EA3
cs=0x1c2;eip=0x003ea4; 	R(RETN(0));	// 9825 retn ;~ 01C2:3EA4
seg001_3f42_proc:
	// 9929 
cs=0x1c2;eip=0x003f42; 	T(STI);	// 9929 sti ;~ 01C2:3F42
ret_1c2_3f43:
	// 5340 
cs=0x1c2;eip=0x003f43; 	X(PUSH(ax));	// 9930 push    ax ;~ 01C2:3F43
cs=0x1c2;eip=0x003f44; 	X(PUSH(ds));	// 9931 push    ds ;~ 01C2:3F44
loc_14145:
	// 5341 
cs=0x1c2;eip=0x003f45; 	T(MOV(ax, seg_offset(seg002)));	// 9934 mov     ax, seg seg002 ;~ 01C2:3F45
cs=0x1c2;eip=0x003f48; 	T(MOV(ds, ax));	// 9935 mov     ds, ax ;~ 01C2:3F48
cs=0x1c2;eip=0x003f4a; 	T(CMP(word_156d2, 0x1F4));	// 9936 cmp     word_156D2, 1F4h ;~ 01C2:3F4A
cs=0x1c2;eip=0x003f50; 	J(JC(loc_14182));	// 9937 jb      short loc_14182 ;~ 01C2:3F50
cs=0x1c2;eip=0x003f52; 	X(DEC(word_156b2));	// 9938 dec     word_156B2 ;~ 01C2:3F52
cs=0x1c2;eip=0x003f56; 	J(JNS(loc_1417a));	// 9939 jns     short loc_1417A ;~ 01C2:3F56
cs=0x1c2;eip=0x003f58; 	T(MOV(ax, 0x1E));	// 9940 mov     ax, 1Eh ;~ 01C2:3F58
cs=0x1c2;eip=0x003f5b; 	J(CALL(sub_13c68,0));	// 9941 call    sub_13C68 ;~ 01C2:3F5B
cs=0x1c2;eip=0x003f5e; 	T(ADD(ax, 5));	// 9942 add     ax, 5 ;~ 01C2:3F5E
cs=0x1c2;eip=0x003f61; 	X(MOV(word_156b2, ax));	// 9943 mov     word_156B2, ax ;~ 01C2:3F61
cs=0x1c2;eip=0x003f64; 	X(PUSH(si));	// 9944 push    si ;~ 01C2:3F64
cs=0x1c2;eip=0x003f65; 	T(MOV(si, word_156b4));	// 9945 mov     si, word_156B4 ;~ 01C2:3F65
cs=0x1c2;eip=0x003f69; 	T(LODSW);	// 9946 lodsw ;~ 01C2:3F69
cs=0x1c2;eip=0x003f6a; 	T(OR(ax, ax));	// 9947 or      ax, ax ;~ 01C2:3F6A
cs=0x1c2;eip=0x003f6c; 	J(JNZ(loc_14172));	// 9948 jnz     short loc_14172 ;~ 01C2:3F6C
cs=0x1c2;eip=0x003f6e; 	T(MOV(si, 0x1076));	// 9949 mov     si, 1076h ;~ 01C2:3F6E
cs=0x1c2;eip=0x003f71; 	T(LODSW);	// 9950 lodsw ;~ 01C2:3F71
loc_14172:
	// 5342 
cs=0x1c2;eip=0x003f72; 	X(MOV(word_156b4, si));	// 9953 mov     word_156B4, si ;~ 01C2:3F72
cs=0x1c2;eip=0x003f76; 	X(POP(si));	// 9954 pop     si ;~ 01C2:3F76
cs=0x1c2;eip=0x003f77; 	X(MOV(word_156cd, ax));	// 9955 mov     word_156CD, ax ;~ 01C2:3F77
loc_1417a:
	// 5343 
cs=0x1c2;eip=0x003f7a; 	X(ROR(word_156cd, 1));	// 9959 ror     word_156CD, 1 ;~ 01C2:3F7A
cs=0x1c2;eip=0x003f7e; 	J(JNC(loc_141bc));	// 9960 jnb     short loc_141BC ;~ 01C2:3F7E
cs=0x1c2;eip=0x003f80; 	J(JMP(loc_1419d));	// 9961 jmp     short loc_1419D ;~ 01C2:3F80
loc_14182:
	// 5344 
cs=0x1c2;eip=0x003f82; 	X(DEC(byte_156cc));	// 9965 dec     byte_156CC ;~ 01C2:3F82
cs=0x1c2;eip=0x003f86; 	J(JNS(loc_1417a));	// 9966 jns     short loc_1417A ;~ 01C2:3F86
cs=0x1c2;eip=0x003f88; 	X(PUSH(si));	// 9967 push    si ;~ 01C2:3F88
cs=0x1c2;eip=0x003f89; 	T(MOV(si, word_156be));	// 9968 mov     si, word_156BE ;~ 01C2:3F89
cs=0x1c2;eip=0x003f8d; 	T(LODSW);	// 9969 lodsw ;~ 01C2:3F8D
cs=0x1c2;eip=0x003f8e; 	X(MOV(word_156be, si));	// 9970 mov     word_156BE, si ;~ 01C2:3F8E
cs=0x1c2;eip=0x003f92; 	X(MOV(word_156cd, ax));	// 9971 mov     word_156CD, ax ;~ 01C2:3F92
cs=0x1c2;eip=0x003f95; 	X(POP(si));	// 9972 pop     si ;~ 01C2:3F95
cs=0x1c2;eip=0x003f96; 	X(MOV(byte_156cc, 0x64));	// 9973 mov     byte_156CC, 64h ; 'd' ;~ 01C2:3F96
cs=0x1c2;eip=0x003f9b; 	J(JMP(loc_1417a));	// 9974 jmp     short loc_1417A ;~ 01C2:3F9B
loc_1419d:
	// 5345 
cs=0x1c2;eip=0x003f9d; 	X(DEC(byte_156cf));	// 9978 dec     byte_156CF ;~ 01C2:3F9D
cs=0x1c2;eip=0x003fa1; 	J(JNS(loc_141ae));	// 9979 jns     short loc_141AE ;~ 01C2:3FA1
cs=0x1c2;eip=0x003fa3; 	J(CALL(sub_13c4f,0));	// 9980 call    sub_13C4F ;~ 01C2:3FA3
cs=0x1c2;eip=0x003fa6; 	X(MOV(word_156d0, ax));	// 9981 mov     word_156D0, ax ;~ 01C2:3FA6
cs=0x1c2;eip=0x003fa9; 	X(MOV(byte_156cf, 0x0F));	// 9982 mov     byte_156CF, 0Fh ;~ 01C2:3FA9
loc_141ae:
	// 5346 
cs=0x1c2;eip=0x003fae; 	X(SHR(word_156d0, 1));	// 9985 shr     word_156D0, 1 ;~ 01C2:3FAE
cs=0x1c2;eip=0x003fb2; 	J(JNC(loc_141bc));	// 9986 jnb     short loc_141BC ;~ 01C2:3FB2
cs=0x1c2;eip=0x003fb4; 	R(IN(al, 0x61));	// 9987 in      al, 61h         ; PC/XT PPI port B bits: ;~ 01C2:3FB4
cs=0x1c2;eip=0x003fb6; 	T(AND(al, 0x0FE));	// 9995 and     al, 0FEh ;~ 01C2:3FB6
cs=0x1c2;eip=0x003fb8; 	T(XOR(al, 2));	// 9996 xor     al, 2 ;~ 01C2:3FB8
cs=0x1c2;eip=0x003fba; 	R(OUT(0x61, al));	// 9997 out     61h, al         ; PC/XT PPI port B bits: ;~ 01C2:3FBA
loc_141bc:
	// 5347 
cs=0x1c2;eip=0x003fbc; 	T(MOV(al, 0x20));	// 10008 mov     al, 20h ; ' ' ;~ 01C2:3FBC
cs=0x1c2;eip=0x003fbe; 	R(OUT(0x20, al));	// 10009 out     20h, al         ; Interrupt controller, 8259A. ;~ 01C2:3FBE
cs=0x1c2;eip=0x003fc0; 	X(DEC(word_156d2));	// 10010 dec     word_156D2 ;~ 01C2:3FC0
cs=0x1c2;eip=0x003fc4; 	J(JNZ(loc_141cf));	// 10011 jnz     short loc_141CF ;~ 01C2:3FC4
cs=0x1c2;eip=0x003fc6; 	J(CALL(sub_13ea0,0));	// 10012 call    sub_13EA0 ;~ 01C2:3FC6
cs=0x1c2;eip=0x003fc9; 	T(MOV(ax, 0x1080));	// 10013 mov     ax, 1080h ;~ 01C2:3FC9
cs=0x1c2;eip=0x003fcc; 	X(MOV(word_156be, ax));	// 10014 mov     word_156BE, ax ;~ 01C2:3FCC
loc_141cf:
	// 5348 
cs=0x1c2;eip=0x003fcf; 	X(POP(ds));	// 10017 pop     ds ;~ 01C2:3FCF
cs=0x1c2;eip=0x003fd0; 	X(POP(ax));	// 10019 pop     ax ;~ 01C2:3FD0
cs=0x1c2;eip=0x003fd1; 	R(IRET);	// 10020 iret ;~ 01C2:3FD1
seg001_4014_proc:
	// 10062 
cs=0x1c2;eip=0x004014; 	T(STI);	// 10062 sti ;~ 01C2:4014
ret_1c2_4015:
	// 5350 
cs=0x1c2;eip=0x004015; 	X(PUSH(ax));	// 10063 push    ax ;~ 01C2:4015
cs=0x1c2;eip=0x004016; 	X(PUSH(ds));	// 10064 push    ds ;~ 01C2:4016
loc_14217:
	// 5351 
cs=0x1c2;eip=0x004017; 	T(MOV(ax, seg_offset(seg002)));	// 10067 mov     ax, seg seg002 ;~ 01C2:4017
cs=0x1c2;eip=0x00401a; 	T(MOV(ds, ax));	// 10068 mov     ds, ax ;~ 01C2:401A
cs=0x1c2;eip=0x00401c; 	X(DEC(byte_156cf));	// 10070 dec     byte_156CF ;~ 01C2:401C
cs=0x1c2;eip=0x004020; 	J(JNS(loc_1422d));	// 10071 jns     short loc_1422D ;~ 01C2:4020
cs=0x1c2;eip=0x004022; 	J(CALL(sub_13c4f,0));	// 10072 call    sub_13C4F ;~ 01C2:4022
cs=0x1c2;eip=0x004025; 	X(MOV(word_156d0, ax));	// 10073 mov     word_156D0, ax ;~ 01C2:4025
cs=0x1c2;eip=0x004028; 	X(MOV(byte_156cf, 0x0F));	// 10074 mov     byte_156CF, 0Fh ;~ 01C2:4028
loc_1422d:
	// 5352 
cs=0x1c2;eip=0x00402d; 	X(SHR(word_156d0, 1));	// 10077 shr     word_156D0, 1 ;~ 01C2:402D
cs=0x1c2;eip=0x004031; 	J(JNC(loc_141bc));	// 10078 jnb     short loc_141BC ;~ 01C2:4031
cs=0x1c2;eip=0x004033; 	R(IN(al, 0x61));	// 10079 in      al, 61h         ; PC/XT PPI port B bits: ;~ 01C2:4033
cs=0x1c2;eip=0x004035; 	T(AND(al, 0x0FE));	// 10087 and     al, 0FEh ;~ 01C2:4035
cs=0x1c2;eip=0x004037; 	T(XOR(al, 2));	// 10088 xor     al, 2 ;~ 01C2:4037
cs=0x1c2;eip=0x004039; 	R(OUT(0x61, al));	// 10089 out     61h, al         ; PC/XT PPI port B bits: ;~ 01C2:4039
cs=0x1c2;eip=0x00403b; 	T(MOV(al, 0x20));	// 10097 mov     al, 20h ; ' ' ;~ 01C2:403B
cs=0x1c2;eip=0x00403d; 	R(OUT(0x20, al));	// 10098 out     20h, al         ; Interrupt controller, 8259A. ;~ 01C2:403D
cs=0x1c2;eip=0x00403f; 	X(DEC(word_156d2));	// 10099 dec     word_156D2 ;~ 01C2:403F
cs=0x1c2;eip=0x004043; 	J(JNZ(loc_14248));	// 10100 jnz     short loc_14248 ;~ 01C2:4043
cs=0x1c2;eip=0x004045; 	J(CALL(sub_13ea0,0));	// 10101 call    sub_13EA0 ;~ 01C2:4045
loc_14248:
	// 5353 
cs=0x1c2;eip=0x004048; 	X(POP(ds));	// 10104 pop     ds ;~ 01C2:4048
cs=0x1c2;eip=0x004049; 	X(POP(ax));	// 10106 pop     ax ;~ 01C2:4049
cs=0x1c2;eip=0x00404a; 	R(IRET);	// 10107 iret ;~ 01C2:404A
seg001_4116_proc:
	// 10287 
loc_14316:
	// 5368 
cs=0x1c2;eip=0x004116; 	X(PUSH(es));	// 10288 push    es ;~ 01C2:4116
cs=0x1c2;eip=0x004117; 	T(MOV(dx, 0));	// 10289 mov     dx, 0 ;~ 01C2:4117
loc_1431a:
	// 5369 
cs=0x1c2;eip=0x00411a; 	T(MOV(ax, seg_offset(seg003)));	// 10292 mov     ax, seg seg003 ;~ 01C2:411A
cs=0x1c2;eip=0x00411d; 	T(MOV(es, ax));	// 10293 mov     es, ax ;~ 01C2:411D
cs=0x1c2;eip=0x00411f; 	T(MOV(ax, word_1fed4));	// 10295 mov     ax, word_1FED4 ;~ 01C2:411F
cs=0x1c2;eip=0x004122; 	T(SHL(ax, 1));	// 10296 shl     ax, 1 ;~ 01C2:4122
cs=0x1c2;eip=0x004124; 	X(MOV(word_1fed2, ax));	// 10297 mov     word_1FED2, ax ;~ 01C2:4124
loc_14327:
	// 5370 
cs=0x1c2;eip=0x004127; 	T(MOV(cx, word_1fed4));	// 10300 mov     cx, word_1FED4 ;~ 01C2:4127
cs=0x1c2;eip=0x00412b; 	T(MOV(si, 0x0BD97));	// 10301 mov     si, 0BD97h ;~ 01C2:412B
loc_1432e:
	// 5371 
cs=0x1c2;eip=0x00412e; 	T(LODSW);	// 10304 lodsw ;~ 01C2:412E
cs=0x1c2;eip=0x00412f; 	T(MOV(bp, si));	// 10305 mov     bp, si ;~ 01C2:412F
cs=0x1c2;eip=0x004131; 	T(ADD(ax, dx));	// 10306 add     ax, dx ;~ 01C2:4131
cs=0x1c2;eip=0x004133; 	T(MOV(si, ax));	// 10307 mov     si, ax ;~ 01C2:4133
cs=0x1c2;eip=0x004135; 	T(LODSW);	// 10308 lodsw ;~ 01C2:4135
cs=0x1c2;eip=0x004136; 	T(AND(ax, 0x0AAAA));	// 10309 and     ax, 0AAAAh ;~ 01C2:4136
cs=0x1c2;eip=0x004139; 	X(STOSW);	// 10310 stosw ;~ 01C2:4139
cs=0x1c2;eip=0x00413a; 	T(MOV(si, bp));	// 10311 mov     si, bp ;~ 01C2:413A
cs=0x1c2;eip=0x00413c; 	J(LOOP(loc_1432e));	// 10312 loop    loc_1432E ;~ 01C2:413C
cs=0x1c2;eip=0x00413e; 	T(ADD(dx, 2));	// 10313 add     dx, 2 ;~ 01C2:413E
cs=0x1c2;eip=0x004141; 	T(ADD(di, 0x2000));	// 10314 add     di, 2000h ;~ 01C2:4141
cs=0x1c2;eip=0x004145; 	T(SUB(di, word_1fed2));	// 10315 sub     di, word_1FED2 ;~ 01C2:4145
cs=0x1c2;eip=0x004149; 	T(MOV(cx, word_1fed4));	// 10316 mov     cx, word_1FED4 ;~ 01C2:4149
cs=0x1c2;eip=0x00414d; 	T(MOV(si, 0x0BD97));	// 10317 mov     si, 0BD97h ;~ 01C2:414D
loc_14350:
	// 5372 
cs=0x1c2;eip=0x004150; 	T(LODSW);	// 10320 lodsw ;~ 01C2:4150
cs=0x1c2;eip=0x004151; 	T(MOV(bp, si));	// 10321 mov     bp, si ;~ 01C2:4151
cs=0x1c2;eip=0x004153; 	T(ADD(ax, dx));	// 10322 add     ax, dx ;~ 01C2:4153
cs=0x1c2;eip=0x004155; 	T(MOV(si, ax));	// 10323 mov     si, ax ;~ 01C2:4155
cs=0x1c2;eip=0x004157; 	T(LODSW);	// 10324 lodsw ;~ 01C2:4157
cs=0x1c2;eip=0x004158; 	T(AND(ax, 0x0AAAA));	// 10325 and     ax, 0AAAAh ;~ 01C2:4158
cs=0x1c2;eip=0x00415b; 	X(STOSW);	// 10326 stosw ;~ 01C2:415B
cs=0x1c2;eip=0x00415c; 	T(MOV(si, bp));	// 10327 mov     si, bp ;~ 01C2:415C
cs=0x1c2;eip=0x00415e; 	J(LOOP(loc_14350));	// 10328 loop    loc_14350 ;~ 01C2:415E
cs=0x1c2;eip=0x004160; 	T(ADD(dx, 2));	// 10329 add     dx, 2 ;~ 01C2:4160
cs=0x1c2;eip=0x004163; 	T(ADD(di, 0x0E050));	// 10330 add     di, 0E050h ;~ 01C2:4163
cs=0x1c2;eip=0x004167; 	T(SUB(di, word_1fed2));	// 10331 sub     di, word_1FED2 ;~ 01C2:4167
cs=0x1c2;eip=0x00416b; 	T(CMP(dx, 0x10));	// 10332 cmp     dx, 10h ;~ 01C2:416B
cs=0x1c2;eip=0x00416e; 	J(JNZ(loc_14327));	// 10333 jnz     short loc_14327 ;~ 01C2:416E
cs=0x1c2;eip=0x004170; 	X(POP(es));	// 10334 pop     es ;~ 01C2:4170
cs=0x1c2;eip=0x004171; 	R(RETN(0));	// 10336 retn ;~ 01C2:4171
seg001_41be_proc:
	// 10409 
loc_143be:
	// 5376 
cs=0x1c2;eip=0x0041be; 	J(CALL(sub_134fa,0));	// 10410 call    sub_134FA ;~ 01C2:41BE
cs=0x1c2;eip=0x0041c1; 	J(CALL(sub_13526,0));	// 10411 call    sub_13526 ;~ 01C2:41C1
cs=0x1c2;eip=0x0041c4; 	T(MOV(si, 0x0B9AB));	// 10412 mov     si, 0B9ABh ;~ 01C2:41C4
cs=0x1c2;eip=0x0041c7; 	J(CALL(sub_142f4,0));	// 10413 call    sub_142F4 ;~ 01C2:41C7
cs=0x1c2;eip=0x0041ca; 	T(MOV(si, 0x0BA6E));	// 10414 mov     si, 0BA6Eh ;~ 01C2:41CA
cs=0x1c2;eip=0x0041cd; 	X(MOV(word_1fed0, si));	// 10415 mov     word_1FED0, si ;~ 01C2:41CD
cs=0x1c2;eip=0x0041d1; 	T(MOV(si, 0x0E1E));	// 10416 mov     si, 0E1Eh ;~ 01C2:41D1
cs=0x1c2;eip=0x0041d4; 	X(MOV(word_201d3, 0));	// 10417 mov     word_201D3, 0 ;~ 01C2:41D4
cs=0x1c2;eip=0x0041da; 	T(MOV(cx, 5));	// 10418 mov     cx, 5 ;~ 01C2:41DA
loc_143dd:
	// 5377 
cs=0x1c2;eip=0x0041dd; 	X(PUSH(cx));	// 10421 push    cx ;~ 01C2:41DD
cs=0x1c2;eip=0x0041de; 	T(LODSW);	// 10422 lodsw ;~ 01C2:41DE
cs=0x1c2;eip=0x0041df; 	X(PUSH(si));	// 10423 push    si ;~ 01C2:41DF
cs=0x1c2;eip=0x0041e0; 	J(CALL(sub_1446b,0));	// 10424 call    sub_1446B ;~ 01C2:41E0
cs=0x1c2;eip=0x0041e3; 	X(POP(si));	// 10425 pop     si ;~ 01C2:41E3
cs=0x1c2;eip=0x0041e4; 	X(POP(cx));	// 10426 pop     cx ;~ 01C2:41E4
cs=0x1c2;eip=0x0041e5; 	J(LOOP(loc_143dd));	// 10427 loop    loc_143DD ;~ 01C2:41E5
cs=0x1c2;eip=0x0041e7; 	T(MOV(di, 0x0E1E));	// 10428 mov     di, 0E1Eh ;~ 01C2:41E7
cs=0x1c2;eip=0x0041ea; 	T(MOV(si, 0x0BA78));	// 10429 mov     si, 0BA78h ;~ 01C2:41EA
cs=0x1c2;eip=0x0041ed; 	X(MOV(word_1fed0, si));	// 10430 mov     word_1FED0, si ;~ 01C2:41ED
cs=0x1c2;eip=0x0041f1; 	T(MOV(si, 0x0BA62));	// 10431 mov     si, 0BA62h ;~ 01C2:41F1
cs=0x1c2;eip=0x0041f4; 	X(PUSH(bx));	// 10432 push    bx ;~ 01C2:41F4
cs=0x1c2;eip=0x0041f5; 	T(MOV(bx, 0x0BA35));	// 10433 mov     bx, 0BA35h ;~ 01C2:41F5
loc_143f8:
	// 5378 
cs=0x1c2;eip=0x0041f8; 	X(PUSH(si));	// 10437 push    si ;~ 01C2:41F8
cs=0x1c2;eip=0x0041f9; 	X(PUSH(di));	// 10438 push    di ;~ 01C2:41F9
cs=0x1c2;eip=0x0041fa; 	X(MOV(word_156e6, 0));	// 10439 mov     word_156E6, 0 ;~ 01C2:41FA
loc_14400:
	// 5379 
cs=0x1c2;eip=0x004200; 	T(MOV(ah, 1));	// 10442 mov     ah, 1 ;~ 01C2:4200
cs=0x1c2;eip=0x004202; 	R(_INT(0x16));	// 10443 int     16h             ; KEYBOARD - CHECK BUFFER, DO NOT CLEAR ;~ 01C2:4202
cs=0x1c2;eip=0x004204; 	J(JNZ(loc_14412));	// 10447 jnz     short loc_14412 ;~ 01C2:4204
cs=0x1c2;eip=0x004206; 	T(MOV(ax, word_156e6));	// 10448 mov     ax, word_156E6 ;~ 01C2:4206
cs=0x1c2;eip=0x004209; 	T(CMP(ax, 0x960));	// 10449 cmp     ax, 960h ;~ 01C2:4209
cs=0x1c2;eip=0x00420c; 	J(JC(loc_14400));	// 10450 jb      short loc_14400 ;~ 01C2:420C
cs=0x1c2;eip=0x00420e; 	X(POP(di));	// 10451 pop     di ;~ 01C2:420E
cs=0x1c2;eip=0x00420f; 	X(POP(si));	// 10452 pop     si ;~ 01C2:420F
cs=0x1c2;eip=0x004210; 	J(JMP(loc_14467));	// 10453 jmp     short loc_14467 ;~ 01C2:4210
loc_14412:
	// 5380 
cs=0x1c2;eip=0x004212; 	T(MOV(ah, 0));	// 10457 mov     ah, 0 ;~ 01C2:4212
cs=0x1c2;eip=0x004214; 	R(_INT(0x16));	// 10458 int     16h             ; KEYBOARD - READ CHAR FROM BUFFER, WAIT IF EMPTY ;~ 01C2:4214
cs=0x1c2;eip=0x004216; 	X(POP(di));	// 10460 pop     di ;~ 01C2:4216
cs=0x1c2;eip=0x004217; 	X(POP(si));	// 10461 pop     si ;~ 01C2:4217
cs=0x1c2;eip=0x004218; 	T(OR(al, al));	// 10462 or      al, al ;~ 01C2:4218
cs=0x1c2;eip=0x00421a; 	J(JZ(loc_14420));	// 10463 jz      short loc_14420 ;~ 01C2:421A
cs=0x1c2;eip=0x00421c; 	T(MOV(ah, 0));	// 10464 mov     ah, 0 ;~ 01C2:421C
cs=0x1c2;eip=0x00421e; 	J(JMP(loc_1442e));	// 10465 jmp     short loc_1442E ;~ 01C2:421E
loc_14420:
	// 5381 
cs=0x1c2;eip=0x004220; 	T(CMP(ah, 0x3B));	// 10469 cmp     ah, 3Bh ; ';' ;~ 01C2:4220
cs=0x1c2;eip=0x004223; 	J(JNZ(loc_14429));	// 10470 jnz     short loc_14429 ;~ 01C2:4223
cs=0x1c2;eip=0x004225; 	X(POP(bx));	// 10471 pop     bx ;~ 01C2:4225
cs=0x1c2;eip=0x004226; 	J(JMP(loc_1378a));	// 10472 jmp     loc_1378A ;~ 01C2:4226
loc_14429:
	// 5382 
cs=0x1c2;eip=0x004229; 	T(CMP(ah, 0x3C));	// 10476 cmp     ah, 3Ch ; '<' ;~ 01C2:4229
cs=0x1c2;eip=0x00422c; 	J(JZ(loc_14467));	// 10477 jz      short loc_14467 ;~ 01C2:422C
loc_1442e:
	// 5383 
cs=0x1c2;eip=0x00422e; 	J(CALL(sub_144b6,0));	// 10480 call    sub_144B6 ;~ 01C2:422E
cs=0x1c2;eip=0x004231; 	J(JC(loc_143f8));	// 10481 jb      short loc_143F8 ;~ 01C2:4231
cs=0x1c2;eip=0x004233; 	J(CALL(sub_1446b,0));	// 10482 call    sub_1446B ;~ 01C2:4233
cs=0x1c2;eip=0x004236; 	T(ADD(di, *(dw*)(raddr(ds,si))));	// 10483 add     di, [si] ;~ 01C2:4236
cs=0x1c2;eip=0x004238; 	T(ADD(si, 2));	// 10484 add     si, 2 ;~ 01C2:4238
cs=0x1c2;eip=0x00423b; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 10485 mov     [di], ax ;~ 01C2:423B
cs=0x1c2;eip=0x00423d; 	T(TEST(*(dw*)(raddr(ds,si)), 0x0FF));	// 10486 test    word ptr [si], 0FFh ;~ 01C2:423D
cs=0x1c2;eip=0x004241; 	J(JZ(loc_14451));	// 10487 jz      short loc_14451 ;~ 01C2:4241
cs=0x1c2;eip=0x004243; 	X(PUSH(si));	// 10488 push    si ;~ 01C2:4243
cs=0x1c2;eip=0x004244; 	X(PUSH(di));	// 10489 push    di ;~ 01C2:4244
cs=0x1c2;eip=0x004245; 	T(MOV(si, bx));	// 10490 mov     si, bx ;~ 01C2:4245
cs=0x1c2;eip=0x004247; 	J(CALL(sub_142f4,0));	// 10491 call    sub_142F4 ;~ 01C2:4247
cs=0x1c2;eip=0x00424a; 	X(POP(di));	// 10492 pop     di ;~ 01C2:424A
cs=0x1c2;eip=0x00424b; 	X(POP(si));	// 10493 pop     si ;~ 01C2:424B
cs=0x1c2;eip=0x00424c; 	T(ADD(bx, 9));	// 10494 add     bx, 9 ;~ 01C2:424C
cs=0x1c2;eip=0x00424f; 	J(JMP(loc_143f8));	// 10495 jmp     short loc_143F8 ;~ 01C2:424F
loc_14451:
	// 5384 
cs=0x1c2;eip=0x004251; 	T(XOR(cx, cx));	// 10499 xor     cx, cx ;~ 01C2:4251
loc_14453:
	// 5385 
cs=0x1c2;eip=0x004253; 	R(LOOP(loc_14453));	// 10502 loop    loc_14453 ;~ 01C2:4253
cs=0x1c2;eip=0x004255; 	X(POP(bx));	// 10503 pop     bx ;~ 01C2:4255
cs=0x1c2;eip=0x004256; 	X(MOV(byte_154c2, 0x0B));	// 10504 mov     byte_154C2, 0Bh ;~ 01C2:4256
cs=0x1c2;eip=0x00425b; 	J(CALL(sub_14372,0));	// 10505 call    sub_14372 ;~ 01C2:425B
cs=0x1c2;eip=0x00425e; 	T(MOV(cx, 0x960));	// 10506 mov     cx, 960h ;~ 01C2:425E
cs=0x1c2;eip=0x004261; 	J(CALL(sub_14612,0));	// 10507 call    sub_14612 ;~ 01C2:4261
cs=0x1c2;eip=0x004264; 	J(JMP(loc_13d1e));	// 10508 jmp     loc_13D1E ;~ 01C2:4264
loc_14467:
	// 5386 
cs=0x1c2;eip=0x004267; 	X(POP(bx));	// 10513 pop     bx ;~ 01C2:4267
cs=0x1c2;eip=0x004268; 	J(JMP(loc_13d1e));	// 10514 jmp     loc_13D1E ;~ 01C2:4268
seg001_42dd_proc:
	// 10620 
loc_144dd:
	// 5399 
cs=0x1c2;eip=0x0042dd; 	J(CALL(sub_134fa,0));	// 10621 call    sub_134FA ;~ 01C2:42DD
cs=0x1c2;eip=0x0042e0; 	J(CALL(sub_13526,0));	// 10622 call    sub_13526 ;~ 01C2:42E0
cs=0x1c2;eip=0x0042e3; 	T(MOV(si, 0x0BA82));	// 10623 mov     si, 0BA82h ;~ 01C2:42E3
cs=0x1c2;eip=0x0042e6; 	J(CALL(sub_142f4,0));	// 10624 call    sub_142F4 ;~ 01C2:42E6
cs=0x1c2;eip=0x0042e9; 	T(MOV(si, 0x0BB36));	// 10625 mov     si, 0BB36h ;~ 01C2:42E9
cs=0x1c2;eip=0x0042ec; 	X(MOV(word_1fed0, si));	// 10626 mov     word_1FED0, si ;~ 01C2:42EC
cs=0x1c2;eip=0x0042f0; 	X(MOV(byte_1fecf, 0));	// 10627 mov     byte_1FECF, 0 ;~ 01C2:42F0
loc_144f5:
	// 5400 
cs=0x1c2;eip=0x0042f5; 	X(INC(byte_1fecf));	// 10631 inc     byte_1FECF ;~ 01C2:42F5
cs=0x1c2;eip=0x0042f9; 	T(MOV(si, word_1fed0));	// 10632 mov     si, word_1FED0 ;~ 01C2:42F9
cs=0x1c2;eip=0x0042fd; 	T(MOV(di, si));	// 10633 mov     di, si ;~ 01C2:42FD
cs=0x1c2;eip=0x0042ff; 	T(ADD(di, 0x0F));	// 10634 add     di, 0Fh ;~ 01C2:42FF
cs=0x1c2;eip=0x004302; 	X(MOV(word_1fed0, di));	// 10635 mov     word_1FED0, di ;~ 01C2:4302
cs=0x1c2;eip=0x004306; 	J(CALL(sub_14308,0));	// 10636 call    sub_14308 ;~ 01C2:4306
cs=0x1c2;eip=0x004309; 	T(MOV(cx, 0x0B4));	// 10637 mov     cx, 0B4h ; '´' ;~ 01C2:4309
cs=0x1c2;eip=0x00430c; 	J(CALL(sub_14612,0));	// 10638 call    sub_14612 ;~ 01C2:430C
cs=0x1c2;eip=0x00430f; 	J(CALL(sub_145c6,0));	// 10639 call    sub_145C6 ;~ 01C2:430F
cs=0x1c2;eip=0x004312; 	J(CALL(sub_13541,0));	// 10640 call    sub_13541 ;~ 01C2:4312
cs=0x1c2;eip=0x004315; 	T(MOV(al, byte_15453));	// 10641 mov     al, byte_15453 ;~ 01C2:4315
cs=0x1c2;eip=0x004318; 	T(MOV(bl, byte_15454));	// 10642 mov     bl, byte_15454 ;~ 01C2:4318
cs=0x1c2;eip=0x00431c; 	T(CMP(byte_1fecf, 1));	// 10643 cmp     byte_1FECF, 1 ;~ 01C2:431C
cs=0x1c2;eip=0x004321; 	J(JZ(loc_14536));	// 10644 jz      short loc_14536 ;~ 01C2:4321
cs=0x1c2;eip=0x004323; 	T(CMP(byte_1fecf, 2));	// 10645 cmp     byte_1FECF, 2 ;~ 01C2:4323
cs=0x1c2;eip=0x004328; 	J(JZ(loc_14542));	// 10646 jz      short loc_14542 ;~ 01C2:4328
cs=0x1c2;eip=0x00432a; 	X(MOV(byte_15456, al));	// 10647 mov     byte_15456, al ;~ 01C2:432A
cs=0x1c2;eip=0x00432d; 	X(MOV(byte_15458, bl));	// 10648 mov     byte_15458, bl ;~ 01C2:432D
cs=0x1c2;eip=0x004331; 	J(CALL(sub_145b1,0));	// 10649 call    sub_145B1 ;~ 01C2:4331
cs=0x1c2;eip=0x004334; 	J(JMP(loc_1454e));	// 10650 jmp     short loc_1454E ;~ 01C2:4334
loc_14536:
	// 5401 
cs=0x1c2;eip=0x004336; 	X(MOV(byte_15455, al));	// 10654 mov     byte_15455, al ;~ 01C2:4336
cs=0x1c2;eip=0x004339; 	X(MOV(byte_15457, bl));	// 10655 mov     byte_15457, bl ;~ 01C2:4339
cs=0x1c2;eip=0x00433d; 	J(CALL(sub_145b1,0));	// 10656 call    sub_145B1 ;~ 01C2:433D
cs=0x1c2;eip=0x004340; 	J(JMP(loc_144f5));	// 10657 jmp     short loc_144F5 ;~ 01C2:4340
loc_14542:
	// 5402 
cs=0x1c2;eip=0x004342; 	X(MOV(byte_1545b, al));	// 10661 mov     byte_1545B, al ;~ 01C2:4342
cs=0x1c2;eip=0x004345; 	X(MOV(byte_1545c, bl));	// 10662 mov     byte_1545C, bl ;~ 01C2:4345
cs=0x1c2;eip=0x004349; 	J(CALL(sub_145b1,0));	// 10663 call    sub_145B1 ;~ 01C2:4349
cs=0x1c2;eip=0x00434c; 	J(JMP(loc_144f5));	// 10664 jmp     short loc_144F5 ;~ 01C2:434C
loc_1454e:
	// 5403 
cs=0x1c2;eip=0x00434e; 	T(MOV(al, byte_15455));	// 10668 mov     al, byte_15455 ;~ 01C2:434E
cs=0x1c2;eip=0x004351; 	T(SUB(al, byte_1545b));	// 10669 sub     al, byte_1545B ;~ 01C2:4351
cs=0x1c2;eip=0x004355; 	T(SHR(al, 1));	// 10670 shr     al, 1 ;~ 01C2:4355
cs=0x1c2;eip=0x004357; 	T(ADD(al, byte_1545b));	// 10671 add     al, byte_1545B ;~ 01C2:4357
cs=0x1c2;eip=0x00435b; 	X(MOV(byte_15455, al));	// 10672 mov     byte_15455, al ;~ 01C2:435B
cs=0x1c2;eip=0x00435e; 	T(MOV(al, byte_15457));	// 10673 mov     al, byte_15457 ;~ 01C2:435E
cs=0x1c2;eip=0x004361; 	T(SUB(al, byte_1545c));	// 10674 sub     al, byte_1545C ;~ 01C2:4361
cs=0x1c2;eip=0x004365; 	T(SHR(al, 1));	// 10675 shr     al, 1 ;~ 01C2:4365
cs=0x1c2;eip=0x004367; 	T(ADD(al, byte_1545c));	// 10676 add     al, byte_1545C ;~ 01C2:4367
cs=0x1c2;eip=0x00436b; 	X(MOV(byte_15457, al));	// 10677 mov     byte_15457, al ;~ 01C2:436B
cs=0x1c2;eip=0x00436e; 	T(MOV(al, byte_1545c));	// 10678 mov     al, byte_1545C ;~ 01C2:436E
cs=0x1c2;eip=0x004371; 	T(SUB(al, byte_15458));	// 10679 sub     al, byte_15458 ;~ 01C2:4371
cs=0x1c2;eip=0x004375; 	T(SHR(al, 1));	// 10680 shr     al, 1 ;~ 01C2:4375
cs=0x1c2;eip=0x004377; 	T(MOV(bl, byte_1545c));	// 10681 mov     bl, byte_1545C ;~ 01C2:4377
cs=0x1c2;eip=0x00437b; 	T(SUB(bl, al));	// 10682 sub     bl, al ;~ 01C2:437B
cs=0x1c2;eip=0x00437d; 	X(MOV(byte_15458, bl));	// 10683 mov     byte_15458, bl ;~ 01C2:437D
cs=0x1c2;eip=0x004381; 	T(MOV(si, 0x0BB7B));	// 10684 mov     si, 0BB7Bh ;~ 01C2:4381
cs=0x1c2;eip=0x004384; 	J(CALL(sub_14308,0));	// 10685 call    sub_14308 ;~ 01C2:4384
cs=0x1c2;eip=0x004387; 	T(MOV(cx, 0x960));	// 10686 mov     cx, 960h ;~ 01C2:4387
cs=0x1c2;eip=0x00438a; 	J(CALL(sub_14612,0));	// 10687 call    sub_14612 ;~ 01C2:438A
cs=0x1c2;eip=0x00438d; 	T(MOV(bl, byte_1545b));	// 10688 mov     bl, byte_1545B ;~ 01C2:438D
cs=0x1c2;eip=0x004391; 	T(MOV(dl, byte_1545c));	// 10689 mov     dl, byte_1545C ;~ 01C2:4391
cs=0x1c2;eip=0x004395; 	T(CMP(dl, 0x10));	// 10690 cmp     dl, 10h ;~ 01C2:4395
cs=0x1c2;eip=0x004398; 	J(JC(loc_145ae));	// 10691 jb      short loc_145AE ;~ 01C2:4398
cs=0x1c2;eip=0x00439a; 	T(CMP(bl, 0x10));	// 10692 cmp     bl, 10h ;~ 01C2:439A
cs=0x1c2;eip=0x00439d; 	J(JC(loc_145ae));	// 10693 jb      short loc_145AE ;~ 01C2:439D
cs=0x1c2;eip=0x00439f; 	T(CMP(dl, 0x0F5));	// 10694 cmp     dl, 0F5h ; 'õ' ;~ 01C2:439F
cs=0x1c2;eip=0x0043a2; 	J(JNC(loc_145ae));	// 10695 jnb     short loc_145AE ;~ 01C2:43A2
cs=0x1c2;eip=0x0043a4; 	T(CMP(bl, 0x0F5));	// 10696 cmp     bl, 0F5h ; 'õ' ;~ 01C2:43A4
cs=0x1c2;eip=0x0043a7; 	J(JNC(loc_145ae));	// 10697 jnb     short loc_145AE ;~ 01C2:43A7
cs=0x1c2;eip=0x0043a9; 	X(MOV(byte_1545a, 0x0FF));	// 10698 mov     byte_1545A, 0FFh ;~ 01C2:43A9
loc_145ae:
	// 5404 
cs=0x1c2;eip=0x0043ae; 	J(JMP(loc_13d1e));	// 10702 jmp     loc_13D1E ;~ 01C2:43AE
sub_145c6:
	// 10723 
cs=0x1c2;eip=0x0043c6; 	X(MOV(word_156e6, 0));	// 10727 mov     word_156E6, 0 ;~ 01C2:43C6
loc_145cc:
	// 5406 
cs=0x1c2;eip=0x0043cc; 	J(CALL(sub_136a8,0));	// 10730 call    sub_136A8 ;~ 01C2:43CC
cs=0x1c2;eip=0x0043cf; 	J(JNZ(locret_145ef));	// 10731 jnz     short locret_145EF ;~ 01C2:43CF
cs=0x1c2;eip=0x0043d1; 	J(CALL(sub_145f0,0));	// 10732 call    sub_145F0 ;~ 01C2:43D1
cs=0x1c2;eip=0x0043d4; 	T(OR(bl, bl));	// 10733 or      bl, bl ;~ 01C2:43D4
cs=0x1c2;eip=0x0043d6; 	J(JZ(loc_145df));	// 10734 jz      short loc_145DF ;~ 01C2:43D6
cs=0x1c2;eip=0x0043d8; 	T(CMP(bl, 1));	// 10735 cmp     bl, 1 ;~ 01C2:43D8
cs=0x1c2;eip=0x0043db; 	J(JZ(loc_145eb));	// 10736 jz      short loc_145EB ;~ 01C2:43DB
cs=0x1c2;eip=0x0043dd; 	J(JMP(loc_145e7));	// 10737 jmp     short loc_145E7 ;~ 01C2:43DD
loc_145df:
	// 5407 
cs=0x1c2;eip=0x0043df; 	T(MOV(ax, word_156e6));	// 10741 mov     ax, word_156E6 ;~ 01C2:43DF
cs=0x1c2;eip=0x0043e2; 	T(CMP(ax, 0x960));	// 10742 cmp     ax, 960h ;~ 01C2:43E2
cs=0x1c2;eip=0x0043e5; 	J(JC(loc_145cc));	// 10743 jb      short loc_145CC ;~ 01C2:43E5
loc_145e7:
	// 5408 
cs=0x1c2;eip=0x0043e7; 	X(POP(ax));	// 10746 pop     ax ;~ 01C2:43E7
cs=0x1c2;eip=0x0043e8; 	J(JMP(loc_13d1e));	// 10747 jmp     loc_13D1E ;~ 01C2:43E8
loc_145eb:
	// 5409 
cs=0x1c2;eip=0x0043eb; 	X(POP(ax));	// 10751 pop     ax ;~ 01C2:43EB
cs=0x1c2;eip=0x0043ec; 	J(JMP(loc_1378a));	// 10752 jmp     loc_1378A ;~ 01C2:43EC
locret_145ef:
	// 5410 
cs=0x1c2;eip=0x0043ef; 	R(RETN(0));	// 10756 retn ;~ 01C2:43EF
sub_14612:
	// 10800 
cs=0x1c2;eip=0x004412; 	X(MOV(word_156e2, 0));	// 10805 mov     word_156E2, 0 ;~ 01C2:4412
loc_14618:
	// 5415 
cs=0x1c2;eip=0x004418; 	T(MOV(ah, 1));	// 10809 mov     ah, 1 ;~ 01C2:4418
cs=0x1c2;eip=0x00441a; 	R(_INT(0x16));	// 10810 int     16h             ; KEYBOARD - CHECK BUFFER, DO NOT CLEAR ;~ 01C2:441A
cs=0x1c2;eip=0x00441c; 	J(JNZ(loc_14626));	// 10814 jnz     short loc_14626 ;~ 01C2:441C
cs=0x1c2;eip=0x00441e; 	T(MOV(ax, word_156e2));	// 10815 mov     ax, word_156E2 ;~ 01C2:441E
cs=0x1c2;eip=0x004421; 	T(CMP(ax, cx));	// 10816 cmp     ax, cx ;~ 01C2:4421
cs=0x1c2;eip=0x004423; 	J(JC(loc_14618));	// 10817 jb      short loc_14618 ;~ 01C2:4423
cs=0x1c2;eip=0x004425; 	R(RETN(0));	// 10818 retn ;~ 01C2:4425
loc_14626:
	// 5416 
cs=0x1c2;eip=0x004426; 	T(MOV(ah, 0));	// 10822 mov     ah, 0 ;~ 01C2:4426
cs=0x1c2;eip=0x004428; 	R(_INT(0x16));	// 10823 int     16h             ; KEYBOARD - READ CHAR FROM BUFFER, WAIT IF EMPTY ;~ 01C2:4428
cs=0x1c2;eip=0x00442a; 	T(OR(al, al));	// 10825 or      al, al ;~ 01C2:442A
cs=0x1c2;eip=0x00442c; 	J(JNZ(loc_14618));	// 10826 jnz     short loc_14618 ;~ 01C2:442C
cs=0x1c2;eip=0x00442e; 	T(CMP(ah, 0x3B));	// 10827 cmp     ah, 3Bh ; ';' ;~ 01C2:442E
cs=0x1c2;eip=0x004431; 	J(JZ(loc_1463c));	// 10828 jz      short loc_1463C ;~ 01C2:4431
cs=0x1c2;eip=0x004433; 	T(CMP(ah, 0x3C));	// 10829 cmp     ah, 3Ch ; '<' ;~ 01C2:4433
cs=0x1c2;eip=0x004436; 	J(JNZ(loc_14618));	// 10830 jnz     short loc_14618 ;~ 01C2:4436
cs=0x1c2;eip=0x004438; 	X(POP(ax));	// 10831 pop     ax ;~ 01C2:4438
cs=0x1c2;eip=0x004439; 	J(JMP(loc_13d1e));	// 10832 jmp     loc_13D1E ;~ 01C2:4439
loc_1463c:
	// 5417 
cs=0x1c2;eip=0x00443c; 	X(POP(ax));	// 10836 pop     ax ;~ 01C2:443C
cs=0x1c2;eip=0x00443d; 	J(JMP(loc_1378a));	// 10837 jmp     loc_1378A ;~ 01C2:443D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_1036c: 	goto loc_1036c;
        case m2c::kloc_10612: 	goto loc_10612;
        case m2c::kloc_10616: 	goto loc_10616;
        case m2c::kloc_1061d: 	goto loc_1061d;
        case m2c::kloc_1064b: 	goto loc_1064b;
        case m2c::kloc_1065a: 	goto loc_1065a;
        case m2c::kloc_10674: 	goto loc_10674;
        case m2c::kloc_10678: 	goto loc_10678;
        case m2c::kloc_10680: 	goto loc_10680;
        case m2c::kloc_10685: 	goto loc_10685;
        case m2c::kloc_106a3: 	goto loc_106a3;
        case m2c::kloc_106d6: 	goto loc_106d6;
        case m2c::kloc_106e4: 	goto loc_106e4;
        case m2c::kloc_106f8: 	goto loc_106f8;
        case m2c::kloc_110bb: 	goto loc_110bb;
        case m2c::kloc_110cc: 	goto loc_110cc;
        case m2c::kloc_110cd: 	goto loc_110cd;
        case m2c::kloc_11131: 	goto loc_11131;
        case m2c::kloc_11400: 	goto loc_11400;
        case m2c::kloc_11421: 	goto loc_11421;
        case m2c::kloc_11430: 	goto loc_11430;
        case m2c::kloc_11432: 	goto loc_11432;
        case m2c::kloc_1144b: 	goto loc_1144b;
        case m2c::kloc_1145b: 	goto loc_1145b;
        case m2c::kloc_11478: 	goto loc_11478;
        case m2c::kloc_11479: 	goto loc_11479;
        case m2c::kloc_1149b: 	goto loc_1149b;
        case m2c::kloc_114a0: 	goto loc_114a0;
        case m2c::kloc_116fb: 	goto loc_116fb;
        case m2c::kloc_11710: 	goto loc_11710;
        case m2c::kloc_11716: 	goto loc_11716;
        case m2c::kloc_1173e: 	goto loc_1173e;
        case m2c::kloc_1174a: 	goto loc_1174a;
        case m2c::kloc_1176a: 	goto loc_1176a;
        case m2c::kloc_11791: 	goto loc_11791;
        case m2c::kloc_117be: 	goto loc_117be;
        case m2c::kloc_121f1: 	goto loc_121f1;
        case m2c::kloc_1223f: 	goto loc_1223f;
        case m2c::kloc_1224e: 	goto loc_1224e;
        case m2c::kloc_1225c: 	goto loc_1225c;
        case m2c::kloc_12354: 	goto loc_12354;
        case m2c::kloc_12360: 	goto loc_12360;
        case m2c::kloc_12388: 	goto loc_12388;
        case m2c::kloc_12391: 	goto loc_12391;
        case m2c::kloc_1239a: 	goto loc_1239a;
        case m2c::kloc_123a0: 	goto loc_123a0;
        case m2c::kloc_123ab: 	goto loc_123ab;
        case m2c::kloc_123b4: 	goto loc_123b4;
        case m2c::kloc_123c0: 	goto loc_123c0;
        case m2c::kloc_123dc: 	goto loc_123dc;
        case m2c::kloc_128b3: 	goto loc_128b3;
        case m2c::kloc_128b9: 	goto loc_128b9;
        case m2c::kloc_128d7: 	goto loc_128d7;
        case m2c::kloc_1299b: 	goto loc_1299b;
        case m2c::kloc_129ac: 	goto loc_129ac;
        case m2c::kloc_129bc: 	goto loc_129bc;
        case m2c::kloc_129c5: 	goto loc_129c5;
        case m2c::kloc_129e7: 	goto loc_129e7;
        case m2c::kloc_12a08: 	goto loc_12a08;
        case m2c::kloc_12a1a: 	goto loc_12a1a;
        case m2c::kloc_12a3a: 	goto loc_12a3a;
        case m2c::kloc_12a46: 	goto loc_12a46;
        case m2c::kloc_12a52: 	goto loc_12a52;
        case m2c::kloc_12a6d: 	goto loc_12a6d;
        case m2c::kloc_12a74: 	goto loc_12a74;
        case m2c::kloc_12a7b: 	goto loc_12a7b;
        case m2c::kloc_12a84: 	goto loc_12a84;
        case m2c::kloc_12a91: 	goto loc_12a91;
        case m2c::kloc_12aa7: 	goto loc_12aa7;
        case m2c::kloc_12aae: 	goto loc_12aae;
        case m2c::kloc_12abb: 	goto loc_12abb;
        case m2c::kloc_12c19: 	goto loc_12c19;
        case m2c::kloc_12c41: 	goto loc_12c41;
        case m2c::kloc_12c69: 	goto loc_12c69;
        case m2c::kloc_12c91: 	goto loc_12c91;
        case m2c::kloc_12cb9: 	goto loc_12cb9;
        case m2c::kloc_12cc3: 	goto loc_12cc3;
        case m2c::kloc_12ccf: 	goto loc_12ccf;
        case m2c::kloc_12cdb: 	goto loc_12cdb;
        case m2c::kloc_12ce9: 	goto loc_12ce9;
        case m2c::kloc_12d2b: 	goto loc_12d2b;
        case m2c::kloc_12d4d: 	goto loc_12d4d;
        case m2c::kloc_12d51: 	goto loc_12d51;
        case m2c::kloc_12d82: 	goto loc_12d82;
        case m2c::kloc_12d86: 	goto loc_12d86;
        case m2c::kloc_12daf: 	goto loc_12daf;
        case m2c::kloc_12db6: 	goto loc_12db6;
        case m2c::kloc_12dda: 	goto loc_12dda;
        case m2c::kloc_12ddc: 	goto loc_12ddc;
        case m2c::kloc_12de6: 	goto loc_12de6;
        case m2c::kloc_12dfb: 	goto loc_12dfb;
        case m2c::kloc_12e00: 	goto loc_12e00;
        case m2c::kloc_12e13: 	goto loc_12e13;
        case m2c::kloc_12e26: 	goto loc_12e26;
        case m2c::kloc_12e6c: 	goto loc_12e6c;
        case m2c::kloc_12e76: 	goto loc_12e76;
        case m2c::kloc_12e81: 	goto loc_12e81;
        case m2c::kloc_12e93: 	goto loc_12e93;
        case m2c::kloc_12ead: 	goto loc_12ead;
        case m2c::kloc_12ef4: 	goto loc_12ef4;
        case m2c::kloc_12efe: 	goto loc_12efe;
        case m2c::kloc_12f0e: 	goto loc_12f0e;
        case m2c::kloc_12f18: 	goto loc_12f18;
        case m2c::kloc_12f22: 	goto loc_12f22;
        case m2c::kloc_12f2c: 	goto loc_12f2c;
        case m2c::kloc_12f32: 	goto loc_12f32;
        case m2c::kloc_12f3d: 	goto loc_12f3d;
        case m2c::kloc_12f52: 	goto loc_12f52;
        case m2c::kloc_12f83: 	goto loc_12f83;
        case m2c::kloc_12f91: 	goto loc_12f91;
        case m2c::kloc_12f97: 	goto loc_12f97;
        case m2c::kloc_12f9f: 	goto loc_12f9f;
        case m2c::kloc_12fa9: 	goto loc_12fa9;
        case m2c::kloc_12fc3: 	goto loc_12fc3;
        case m2c::kloc_12ff5: 	goto loc_12ff5;
        case m2c::kloc_1301a: 	goto loc_1301a;
        case m2c::kloc_1301e: 	goto loc_1301e;
        case m2c::kloc_13024: 	goto loc_13024;
        case m2c::kloc_13027: 	goto loc_13027;
        case m2c::kloc_134c0: 	goto loc_134c0;
        case m2c::kloc_13721: 	goto loc_13721;
        case m2c::kloc_13730: 	goto loc_13730;
        case m2c::kloc_13741: 	goto loc_13741;
        case m2c::kloc_13748: 	goto loc_13748;
        case m2c::kloc_1378a: 	goto loc_1378a;
        case m2c::kloc_13794: 	goto loc_13794;
        case m2c::kloc_13799: 	goto loc_13799;
        case m2c::kloc_137a2: 	goto loc_137a2;
        case m2c::kloc_1382b: 	goto loc_1382b;
        case m2c::kloc_1383d: 	goto loc_1383d;
        case m2c::kloc_13855: 	goto loc_13855;
        case m2c::kloc_1385d: 	goto loc_1385d;
        case m2c::kloc_1386c: 	goto loc_1386c;
        case m2c::kloc_1387b: 	goto loc_1387b;
        case m2c::kloc_13ca0: 	goto loc_13ca0;
        case m2c::kloc_13cb8: 	goto loc_13cb8;
        case m2c::kloc_13cbf: 	goto loc_13cbf;
        case m2c::kloc_13cd8: 	goto loc_13cd8;
        case m2c::kloc_13cdd: 	goto loc_13cdd;
        case m2c::kloc_13ced: 	goto loc_13ced;
        case m2c::kloc_13d1e: 	goto loc_13d1e;
        case m2c::kloc_13d37: 	goto loc_13d37;
        case m2c::kloc_13d43: 	goto loc_13d43;
        case m2c::kloc_13d53: 	goto loc_13d53;
        case m2c::kloc_13d6d: 	goto loc_13d6d;
        case m2c::kloc_13d76: 	goto loc_13d76;
        case m2c::kloc_13d7f: 	goto loc_13d7f;
        case m2c::kloc_13d84: 	goto loc_13d84;
        case m2c::kloc_13d8b: 	goto loc_13d8b;
        case m2c::kloc_13d92: 	goto loc_13d92;
        case m2c::kloc_13d94: 	goto loc_13d94;
        case m2c::kloc_13d9d: 	goto loc_13d9d;
        case m2c::kloc_13da6: 	goto loc_13da6;
        case m2c::kloc_13dad: 	goto loc_13dad;
        case m2c::kloc_13dba: 	goto loc_13dba;
        case m2c::kloc_13dbf: 	goto loc_13dbf;
        case m2c::kloc_13e07: 	goto loc_13e07;
        case m2c::kloc_13e12: 	goto loc_13e12;
        case m2c::kloc_13e15: 	goto loc_13e15;
        case m2c::kloc_13e1b: 	goto loc_13e1b;
        case m2c::kloc_13e3a: 	goto loc_13e3a;
        case m2c::kloc_13e50: 	goto loc_13e50;
        case m2c::kloc_13e58: 	goto loc_13e58;
        case m2c::kloc_13e67: 	goto loc_13e67;
        case m2c::kloc_13e6d: 	goto loc_13e6d;
        case m2c::kloc_13e72: 	goto loc_13e72;
        case m2c::kloc_13e7d: 	goto loc_13e7d;
        case m2c::kloc_13f3e: 	goto loc_13f3e;
        case m2c::kloc_13f4d: 	goto loc_13f4d;
        case m2c::kloc_13f57: 	goto loc_13f57;
        case m2c::kloc_13f6f: 	goto loc_13f6f;
        case m2c::kloc_13f94: 	goto loc_13f94;
        case m2c::kloc_13f9a: 	goto loc_13f9a;
        case m2c::kloc_13f9c: 	goto loc_13f9c;
        case m2c::kloc_13fc9: 	goto loc_13fc9;
        case m2c::kloc_13fce: 	goto loc_13fce;
        case m2c::kloc_13fd5: 	goto loc_13fd5;
        case m2c::kloc_13fdc: 	goto loc_13fdc;
        case m2c::kloc_14020: 	goto loc_14020;
        case m2c::kloc_14028: 	goto loc_14028;
        case m2c::kloc_14030: 	goto loc_14030;
        case m2c::kloc_14036: 	goto loc_14036;
        case m2c::kloc_14047: 	goto loc_14047;
        case m2c::kloc_1404e: 	goto loc_1404e;
        case m2c::kloc_14059: 	goto loc_14059;
        case m2c::kloc_1406e: 	goto loc_1406e;
        case m2c::kloc_1407d: 	goto loc_1407d;
        case m2c::kloc_1407f: 	goto loc_1407f;
        case m2c::kloc_1408c: 	goto loc_1408c;
        case m2c::kloc_1409f: 	goto loc_1409f;
        case m2c::kloc_14145: 	goto loc_14145;
        case m2c::kloc_14172: 	goto loc_14172;
        case m2c::kloc_1417a: 	goto loc_1417a;
        case m2c::kloc_14182: 	goto loc_14182;
        case m2c::kloc_1419d: 	goto loc_1419d;
        case m2c::kloc_141ae: 	goto loc_141ae;
        case m2c::kloc_141bc: 	goto loc_141bc;
        case m2c::kloc_141cf: 	goto loc_141cf;
        case m2c::kloc_14217: 	goto loc_14217;
        case m2c::kloc_1422d: 	goto loc_1422d;
        case m2c::kloc_14248: 	goto loc_14248;
        case m2c::kloc_1431a: 	goto loc_1431a;
        case m2c::kloc_14327: 	goto loc_14327;
        case m2c::kloc_1432e: 	goto loc_1432e;
        case m2c::kloc_14350: 	goto loc_14350;
        case m2c::kloc_143dd: 	goto loc_143dd;
        case m2c::kloc_143f8: 	goto loc_143f8;
        case m2c::kloc_14400: 	goto loc_14400;
        case m2c::kloc_14412: 	goto loc_14412;
        case m2c::kloc_14420: 	goto loc_14420;
        case m2c::kloc_14429: 	goto loc_14429;
        case m2c::kloc_1442e: 	goto loc_1442e;
        case m2c::kloc_14451: 	goto loc_14451;
        case m2c::kloc_14453: 	goto loc_14453;
        case m2c::kloc_14467: 	goto loc_14467;
        case m2c::kloc_144f5: 	goto loc_144f5;
        case m2c::kloc_14536: 	goto loc_14536;
        case m2c::kloc_14542: 	goto loc_14542;
        case m2c::kloc_1454e: 	goto loc_1454e;
        case m2c::kloc_145ae: 	goto loc_145ae;
        case m2c::kloc_145cc: 	goto loc_145cc;
        case m2c::kloc_145df: 	goto loc_145df;
        case m2c::kloc_145e7: 	goto loc_145e7;
        case m2c::kloc_145eb: 	goto loc_145eb;
        case m2c::kloc_14618: 	goto loc_14618;
        case m2c::kloc_14626: 	goto loc_14626;
        case m2c::kloc_1463c: 	goto loc_1463c;
        case m2c::klocret_10690: 	goto locret_10690;
        case m2c::klocret_123f2: 	goto locret_123f2;
        case m2c::klocret_12ce8: 	goto locret_12ce8;
        case m2c::klocret_12db5: 	goto locret_12db5;
        case m2c::klocret_13036: 	goto locret_13036;
        case m2c::klocret_145ef: 	goto locret_145ef;
        case m2c::kret_1c2_103: 	goto ret_1c2_103;
        case m2c::kret_1c2_1272: 	goto ret_1c2_1272;
        case m2c::kret_1c2_14eb: 	goto ret_1c2_14eb;
        case m2c::kret_1c2_14ff: 	goto ret_1c2_14ff;
        case m2c::kret_1c2_150a: 	goto ret_1c2_150a;
        case m2c::kret_1c2_1533: 	goto ret_1c2_1533;
        case m2c::kret_1c2_153b: 	goto ret_1c2_153b;
        case m2c::kret_1c2_155a: 	goto ret_1c2_155a;
        case m2c::kret_1c2_155f: 	goto ret_1c2_155f;
        case m2c::kret_1c2_1579: 	goto ret_1c2_1579;
        case m2c::kret_1c2_1586: 	goto ret_1c2_1586;
        case m2c::kret_1c2_15a1: 	goto ret_1c2_15a1;
        case m2c::kret_1c2_15ae: 	goto ret_1c2_15ae;
        case m2c::kret_1c2_15c7: 	goto ret_1c2_15c7;
        case m2c::kret_1c2_15d6: 	goto ret_1c2_15d6;
        case m2c::kret_1c2_1fe5: 	goto ret_1c2_1fe5;
        case m2c::kret_1c2_26a3: 	goto ret_1c2_26a3;
        case m2c::kret_1c2_2781: 	goto ret_1c2_2781;
        case m2c::kret_1c2_2bd7: 	goto ret_1c2_2bd7;
        case m2c::kret_1c2_2cf9: 	goto ret_1c2_2cf9;
        case m2c::kret_1c2_32df: 	goto ret_1c2_32df;
        case m2c::kret_1c2_351e: 	goto ret_1c2_351e;
        case m2c::kret_1c2_3536: 	goto ret_1c2_3536;
        case m2c::kret_1c2_361e: 	goto ret_1c2_361e;
        case m2c::kret_1c2_3ba4: 	goto ret_1c2_3ba4;
        case m2c::kret_1c2_3c28: 	goto ret_1c2_3c28;
        case m2c::kret_1c2_3d38: 	goto ret_1c2_3d38;
        case m2c::kret_1c2_3e1a: 	goto ret_1c2_3e1a;
        case m2c::kret_1c2_3f43: 	goto ret_1c2_3f43;
        case m2c::kret_1c2_4015: 	goto ret_1c2_4015;
        case m2c::kret_1c2_408: 	goto ret_1c2_408;
        case m2c::kret_1c2_440: 	goto ret_1c2_440;
        case m2c::kret_1c2_465: 	goto ret_1c2_465;
        case m2c::kret_1c2_494: 	goto ret_1c2_494;
        case m2c::kret_1c2_4c2: 	goto ret_1c2_4c2;
        case m2c::kret_1c2_eb5: 	goto ret_1c2_eb5;
        case m2c::kseg001_14e9_proc: 	goto seg001_14e9_proc;
        case m2c::kseg001_29f1_proc: 	goto seg001_29f1_proc;
        case m2c::kseg001_351d_proc: 	goto seg001_351d_proc;
        case m2c::kseg001_3570_proc: 	goto seg001_3570_proc;
        case m2c::kseg001_3d37_proc: 	goto seg001_3d37_proc;
        case m2c::kseg001_3f42_proc: 	goto seg001_3f42_proc;
        case m2c::kseg001_4014_proc: 	goto seg001_4014_proc;
        case m2c::kseg001_4116_proc: 	goto seg001_4116_proc;
        case m2c::kseg001_41be_proc: 	goto seg001_41be_proc;
        case m2c::kseg001_42dd_proc: 	goto seg001_42dd_proc;
        case m2c::ksub_10300: 	goto sub_10300;
        case m2c::ksub_10605: 	goto sub_10605;
        case m2c::ksub_1063f: 	goto sub_1063f;
        case m2c::ksub_10662: 	goto sub_10662;
        case m2c::ksub_10691: 	goto sub_10691;
        case m2c::ksub_106bf: 	goto sub_106bf;
        case m2c::ksub_110b0: 	goto sub_110b0;
        case m2c::ksub_113ff: 	goto sub_113ff;
        case m2c::ksub_1146f: 	goto sub_1146f;
        case m2c::ksub_121df: 	goto sub_121df;
        case m2c::ksub_12350: 	goto sub_12350;
        case m2c::ksub_128a1: 	goto sub_128a1;
        case m2c::ksub_1297d: 	goto sub_1297d;
        case m2c::ksub_12a36: 	goto sub_12a36;
        case m2c::ksub_12e92: 	goto sub_12e92;
        case m2c::ksub_12ef6: 	goto sub_12ef6;
        case m2c::ksub_134e1: 	goto sub_134e1;
        case m2c::ksub_1372f: 	goto sub_1372f;
        case m2c::ksub_13735: 	goto sub_13735;
        case m2c::ksub_13819: 	goto sub_13819;
        case m2c::ksub_14015: 	goto sub_14015;
        case m2c::ksub_145c6: 	goto sub_145c6;
        case m2c::ksub_14612: 	goto sub_14612;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_10380(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_10380:
    _begin:
cs=0x1c2;eip=0x000180; 	J(CALL(sub_10524,0));	// 472 call    sub_10524 ;~ 01C2:0180
ret_1c2_183:
	// 4372 
cs=0x1c2;eip=0x000183; 	J(CALL(sub_1049d,0));	// 473 call    sub_1049D ;~ 01C2:0183
cs=0x1c2;eip=0x000186; 	T(TEST(word_156b0, 0x0FFFF));	// 474 test    word_156B0, 0FFFFh ;~ 01C2:0186
cs=0x1c2;eip=0x00018c; 	J(JZ(loc_10391));	// 475 jz      short loc_10391 ;~ 01C2:018C
cs=0x1c2;eip=0x00018e; 	J(CALL(sub_10745,0));	// 476 call    sub_10745 ;~ 01C2:018E
loc_10391:
	// 4373 
cs=0x1c2;eip=0x000191; 	T(TEST(byte_14a0c, 0x0FF));	// 479 test    byte_14A0C, 0FFh ;~ 01C2:0191
cs=0x1c2;eip=0x000196; 	J(JZ(loc_103a4));	// 480 jz      short loc_103A4 ;~ 01C2:0196
cs=0x1c2;eip=0x000198; 	X(MOV(byte_1476e, 0x0FF));	// 481 mov     byte_1476E, 0FFh ;~ 01C2:0198
cs=0x1c2;eip=0x00019d; 	T(MOV(al, 4));	// 482 mov     al, 4 ;~ 01C2:019D
cs=0x1c2;eip=0x00019f; 	J(CALL(sub_14015,0));	// 483 call    sub_14015 ;~ 01C2:019F
cs=0x1c2;eip=0x0001a2; 	J(JMP(loc_103f7));	// 484 jmp     short loc_103F7 ;~ 01C2:01A2
loc_103a4:
	// 4374 
cs=0x1c2;eip=0x0001a4; 	T(TEST(byte_1476e, 0x0FF));	// 488 test    byte_1476E, 0FFh ;~ 01C2:01A4
cs=0x1c2;eip=0x0001a9; 	J(JZ(loc_103b3));	// 489 jz      short loc_103B3 ;~ 01C2:01A9
cs=0x1c2;eip=0x0001ab; 	J(CALL(sub_14005,0));	// 490 call    sub_14005 ;~ 01C2:01AB
cs=0x1c2;eip=0x0001ae; 	X(MOV(byte_1476e, 0));	// 491 mov     byte_1476E, 0 ;~ 01C2:01AE
loc_103b3:
	// 4375 
cs=0x1c2;eip=0x0001b3; 	T(TEST(byte_14fb2, 0x0FF));	// 494 test    byte_14FB2, 0FFh ;~ 01C2:01B3
cs=0x1c2;eip=0x0001b8; 	J(JZ(loc_103cd));	// 495 jz      short loc_103CD ;~ 01C2:01B8
cs=0x1c2;eip=0x0001ba; 	T(CMP(byte_156e0, 6));	// 496 cmp     byte_156E0, 6 ;~ 01C2:01BA
cs=0x1c2;eip=0x0001bf; 	J(JZ(loc_103f7));	// 497 jz      short loc_103F7 ;~ 01C2:01BF
cs=0x1c2;eip=0x0001c1; 	T(MOV(al, 6));	// 498 mov     al, 6 ;~ 01C2:01C1
cs=0x1c2;eip=0x0001c3; 	J(CALL(sub_14015,0));	// 499 call    sub_14015 ;~ 01C2:01C3
cs=0x1c2;eip=0x0001c6; 	X(MOV(byte_1476f, 0));	// 500 mov     byte_1476F, 0 ;~ 01C2:01C6
cs=0x1c2;eip=0x0001cb; 	J(JMP(loc_103f7));	// 501 jmp     short loc_103F7 ;~ 01C2:01CB
loc_103cd:
	// 4376 
cs=0x1c2;eip=0x0001cd; 	T(TEST(byte_1476f, 0x0FF));	// 505 test    byte_1476F, 0FFh ;~ 01C2:01CD
cs=0x1c2;eip=0x0001d2; 	J(JZ(loc_103e6));	// 506 jz      short loc_103E6 ;~ 01C2:01D2
cs=0x1c2;eip=0x0001d4; 	X(MOV(byte_1476f, 0));	// 507 mov     byte_1476F, 0 ;~ 01C2:01D4
cs=0x1c2;eip=0x0001d9; 	T(MOV(al, 5));	// 508 mov     al, 5 ;~ 01C2:01D9
cs=0x1c2;eip=0x0001db; 	T(CMP(al, byte_156e0));	// 509 cmp     al, byte_156E0 ;~ 01C2:01DB
cs=0x1c2;eip=0x0001df; 	J(JZ(loc_103f7));	// 510 jz      short loc_103F7 ;~ 01C2:01DF
cs=0x1c2;eip=0x0001e1; 	J(CALL(sub_14015,0));	// 511 call    sub_14015 ;~ 01C2:01E1
cs=0x1c2;eip=0x0001e4; 	J(JMP(loc_103f7));	// 512 jmp     short loc_103F7 ;~ 01C2:01E4
loc_103e6:
	// 4377 
cs=0x1c2;eip=0x0001e6; 	T(CMP(byte_156e0, 5));	// 516 cmp     byte_156E0, 5 ;~ 01C2:01E6
cs=0x1c2;eip=0x0001eb; 	J(JC(loc_103f7));	// 517 jb      short loc_103F7 ;~ 01C2:01EB
cs=0x1c2;eip=0x0001ed; 	T(CMP(byte_156e0, 7));	// 518 cmp     byte_156E0, 7 ;~ 01C2:01ED
cs=0x1c2;eip=0x0001f2; 	J(JNC(loc_103f7));	// 519 jnb     short loc_103F7 ;~ 01C2:01F2
cs=0x1c2;eip=0x0001f4; 	J(CALL(sub_14005,0));	// 520 call    sub_14005 ;~ 01C2:01F4
loc_103f7:
	// 4378 
cs=0x1c2;eip=0x0001f7; 	T(TEST(byte_14b00, 0x0FF));	// 524 test    byte_14B00, 0FFh ;~ 01C2:01F7
cs=0x1c2;eip=0x0001fc; 	J(JZ(loc_10401));	// 525 jz      short loc_10401 ;~ 01C2:01FC
cs=0x1c2;eip=0x0001fe; 	J(CALL(sub_10635,0));	// 526 call    sub_10635 ;~ 01C2:01FE
loc_10401:
	// 4379 
cs=0x1c2;eip=0x000201; 	X(INC(word_14755));	// 529 inc     word_14755 ;~ 01C2:0201
cs=0x1c2;eip=0x000205; 	T(TEST(word_14755, 2));	// 530 test    word_14755, 2 ;~ 01C2:0205
cs=0x1c2;eip=0x00020b; 	J(JZ(loc_10410));	// 531 jz      short loc_10410 ;~ 01C2:020B
cs=0x1c2;eip=0x00020d; 	J(CALL(sub_1053e,0));	// 532 call    sub_1053E ;~ 01C2:020D
loc_10410:
	// 4380 
cs=0x1c2;eip=0x000210; 	T(TEST(byte_154e2, 0x0FF));	// 535 test    byte_154E2, 0FFh ;~ 01C2:0210
cs=0x1c2;eip=0x000215; 	J(JZ(locret_10420));	// 536 jz      short locret_10420 ;~ 01C2:0215
cs=0x1c2;eip=0x000217; 	X(DEC(byte_154e2));	// 537 dec     byte_154E2 ;~ 01C2:0217
cs=0x1c2;eip=0x00021b; 	J(JNZ(locret_10420));	// 538 jnz     short locret_10420 ;~ 01C2:021B
cs=0x1c2;eip=0x00021d; 	J(CALL(sub_138fc,0));	// 539 call    sub_138FC ;~ 01C2:021D
locret_10420:
	// 4381 
cs=0x1c2;eip=0x000220; 	R(RETN(0));	// 543 retn ;~ 01C2:0220

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_10391: 	goto loc_10391;
        case m2c::kloc_103a4: 	goto loc_103a4;
        case m2c::kloc_103b3: 	goto loc_103b3;
        case m2c::kloc_103cd: 	goto loc_103cd;
        case m2c::kloc_103e6: 	goto loc_103e6;
        case m2c::kloc_103f7: 	goto loc_103f7;
        case m2c::kloc_10401: 	goto loc_10401;
        case m2c::kloc_10410: 	goto loc_10410;
        case m2c::klocret_10420: 	goto locret_10420;
        case m2c::kret_1c2_183: 	goto ret_1c2_183;
        case m2c::ksub_10380: 	goto sub_10380;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_10421(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_10421:
    _begin:
cs=0x1c2;eip=0x000221; 	T(MOV(si, 0x113));	// 552 mov     si, 113h ;~ 01C2:0221
ret_1c2_224:
	// 4382 
cs=0x1c2;eip=0x000224; 	T(MOV(di, 0x11C));	// 553 mov     di, 11Ch ;~ 01C2:0224
cs=0x1c2;eip=0x000227; 	T(MOV(cx, 9));	// 554 mov     cx, 9 ;~ 01C2:0227
loc_1042a:
	// 4383 
cs=0x1c2;eip=0x00022a; 	T(MOV(ah, *(raddr(ds,di))));	// 557 mov     ah, [di] ;~ 01C2:022A
cs=0x1c2;eip=0x00022c; 	X(MOVSB);	// 558 movsb ;~ 01C2:022C
cs=0x1c2;eip=0x00022d; 	X(MOV(*(raddr(ds,si-1)), ah));	// 559 mov     [si-1], ah ;~ 01C2:022D
cs=0x1c2;eip=0x000230; 	J(LOOP(loc_1042a));	// 560 loop    loc_1042A ;~ 01C2:0230
cs=0x1c2;eip=0x000232; 	X(XOR(byte_14765, 3));	// 561 xor     byte_14765, 3 ;~ 01C2:0232
cs=0x1c2;eip=0x000237; 	R(RETN(0));	// 562 retn ;~ 01C2:0237

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_1042a: 	goto loc_1042a;
        case m2c::kret_1c2_224: 	goto ret_1c2_224;
        case m2c::ksub_10421: 	goto sub_10421;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_10438(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_10438:
    _begin:
cs=0x1c2;eip=0x000238; 	T(MOV(ax, word_14753));	// 571 mov     ax, word_14753 ;~ 01C2:0238
ret_1c2_23b:
	// 4384 
cs=0x1c2;eip=0x00023b; 	T(CMP(ax, word_1476b));	// 572 cmp     ax, word_1476B ;~ 01C2:023B
cs=0x1c2;eip=0x00023f; 	J(JBE(locret_10444));	// 573 jbe     short locret_10444 ;~ 01C2:023F
cs=0x1c2;eip=0x000241; 	X(MOV(word_1476b, ax));	// 574 mov     word_1476B, ax ;~ 01C2:0241
locret_10444:
	// 4385 
cs=0x1c2;eip=0x000244; 	R(RETN(0));	// 577 retn ;~ 01C2:0244

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::klocret_10444: 	goto locret_10444;
        case m2c::kret_1c2_23b: 	goto ret_1c2_23b;
        case m2c::ksub_10438: 	goto sub_10438;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_10445(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_10445:
    _begin:
cs=0x1c2;eip=0x000245; 	X(PUSH(bx));	// 585 push    bx ;~ 01C2:0245
ret_1c2_246:
	// 4386 
cs=0x1c2;eip=0x000246; 	T(MOV(bx, 0x126));	// 586 mov     bx, 126h ;~ 01C2:0246
cs=0x1c2;eip=0x000249; 	T(XLAT);	// 587 xlat ;~ 01C2:0249
cs=0x1c2;eip=0x00024a; 	T(XOR(ah, ah));	// 588 xor     ah, ah ;~ 01C2:024A
cs=0x1c2;eip=0x00024c; 	T(MOV(bx, word_14753));	// 589 mov     bx, word_14753 ;~ 01C2:024C
cs=0x1c2;eip=0x000250; 	X(ADD(word_14753, ax));	// 590 add     word_14753, ax ;~ 01C2:0250
cs=0x1c2;eip=0x000254; 	T(MOV(ax, word_14753));	// 591 mov     ax, word_14753 ;~ 01C2:0254
cs=0x1c2;eip=0x000257; 	T(CMP(byte_15619, 5));	// 592 cmp     byte_15619, 5 ;~ 01C2:0257
cs=0x1c2;eip=0x00025c; 	J(JNC(loc_10473));	// 593 jnb     short loc_10473 ;~ 01C2:025C
cs=0x1c2;eip=0x00025e; 	T(CMP(ax, 0x0F));	// 594 cmp     ax, 0Fh ;~ 01C2:025E
cs=0x1c2;eip=0x000261; 	J(JC(loc_10473));	// 595 jb      short loc_10473 ;~ 01C2:0261
cs=0x1c2;eip=0x000263; 	T(CMP(bx, 0x0F));	// 596 cmp     bx, 0Fh ;~ 01C2:0263
cs=0x1c2;eip=0x000266; 	J(JNC(loc_10473));	// 597 jnb     short loc_10473 ;~ 01C2:0266
cs=0x1c2;eip=0x000268; 	T(MOV(al, 7));	// 598 mov     al, 7 ;~ 01C2:0268
cs=0x1c2;eip=0x00026a; 	J(CALL(sub_14015,0));	// 599 call    sub_14015 ;~ 01C2:026A
cs=0x1c2;eip=0x00026d; 	X(INC(word_14758));	// 600 inc     word_14758 ;~ 01C2:026D
cs=0x1c2;eip=0x000271; 	J(JMP(loc_10490));	// 601 jmp     short loc_10490 ;~ 01C2:0271
loc_10473:
	// 4387 
cs=0x1c2;eip=0x000273; 	T(CMP(byte_15619, 6));	// 606 cmp     byte_15619, 6 ;~ 01C2:0273
cs=0x1c2;eip=0x000278; 	J(JNC(loc_10490));	// 607 jnb     short loc_10490 ;~ 01C2:0278
cs=0x1c2;eip=0x00027a; 	T(CMP(ax, 0x64));	// 608 cmp     ax, 64h ; 'd' ;~ 01C2:027A
cs=0x1c2;eip=0x00027d; 	J(JC(loc_10490));	// 609 jb      short loc_10490 ;~ 01C2:027D
cs=0x1c2;eip=0x00027f; 	T(CMP(bx, 0x64));	// 610 cmp     bx, 64h ; 'd' ;~ 01C2:027F
cs=0x1c2;eip=0x000282; 	J(JNC(loc_10490));	// 611 jnb     short loc_10490 ;~ 01C2:0282
cs=0x1c2;eip=0x000284; 	T(MOV(al, 8));	// 612 mov     al, 8 ;~ 01C2:0284
cs=0x1c2;eip=0x000286; 	J(CALL(sub_14015,0));	// 613 call    sub_14015 ;~ 01C2:0286
cs=0x1c2;eip=0x000289; 	J(CALL(sub_10492,0));	// 614 call    sub_10492 ;~ 01C2:0289
cs=0x1c2;eip=0x00028c; 	X(INC(word_14758));	// 615 inc     word_14758 ;~ 01C2:028C
loc_10490:
	// 4388 
cs=0x1c2;eip=0x000290; 	X(POP(bx));	// 619 pop     bx ;~ 01C2:0290
cs=0x1c2;eip=0x000291; 	R(RETN(0));	// 620 retn ;~ 01C2:0291

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_10473: 	goto loc_10473;
        case m2c::kloc_10490: 	goto loc_10490;
        case m2c::kret_1c2_246: 	goto ret_1c2_246;
        case m2c::ksub_10445: 	goto sub_10445;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_10492(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_10492:
    _begin:
cs=0x1c2;eip=0x000292; 	X(PUSH(cx));	// 628 push    cx ;~ 01C2:0292
ret_1c2_293:
	// 4389 
cs=0x1c2;eip=0x000293; 	T(MOV(bl, 0x0D));	// 629 mov     bl, 0Dh ;~ 01C2:0293
loc_10495:
	// 4390 
cs=0x1c2;eip=0x000295; 	R(LOOP(loc_10495));	// 633 loop    loc_10495 ;~ 01C2:0295
cs=0x1c2;eip=0x000297; 	T(DEC(bl));	// 634 dec     bl ;~ 01C2:0297
cs=0x1c2;eip=0x000299; 	J(JNZ(loc_10495));	// 635 jnz     short loc_10495 ;~ 01C2:0299
cs=0x1c2;eip=0x00029b; 	X(POP(cx));	// 636 pop     cx ;~ 01C2:029B
cs=0x1c2;eip=0x00029c; 	R(RETN(0));	// 637 retn ;~ 01C2:029C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_10495: 	goto loc_10495;
        case m2c::kret_1c2_293: 	goto ret_1c2_293;
        case m2c::ksub_10492: 	goto sub_10492;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1049d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1049d:
    _begin:
cs=0x1c2;eip=0x00029d; 	T(MOV(ax, word_1476b));	// 645 mov     ax, word_1476B ;~ 01C2:029D
ret_1c2_2a0:
	// 4391 
cs=0x1c2;eip=0x0002a0; 	J(CALL(sub_104d4,0));	// 646 call    sub_104D4 ;~ 01C2:02A0
cs=0x1c2;eip=0x0002a3; 	J(CALL(sub_105dd,0));	// 647 call    sub_105DD ;~ 01C2:02A3
cs=0x1c2;eip=0x0002a6; 	T(MOV(ax, word_14753));	// 648 mov     ax, word_14753 ;~ 01C2:02A6
cs=0x1c2;eip=0x0002a9; 	J(CALL(sub_104d4,0));	// 649 call    sub_104D4 ;~ 01C2:02A9
cs=0x1c2;eip=0x0002ac; 	T(TEST(byte_14765, 2));	// 650 test    byte_14765, 2 ;~ 01C2:02AC
cs=0x1c2;eip=0x0002b1; 	J(JNZ(loc_104c7));	// 651 jnz     short loc_104C7 ;~ 01C2:02B1
cs=0x1c2;eip=0x0002b3; 	J(CALL(sub_105ed,0));	// 652 call    sub_105ED ;~ 01C2:02B3
cs=0x1c2;eip=0x0002b6; 	T(TEST(byte_15618, 2));	// 653 test    byte_15618, 2 ;~ 01C2:02B6
cs=0x1c2;eip=0x0002bb; 	J(JZ(locret_104c6));	// 654 jz      short locret_104C6 ;~ 01C2:02BB
cs=0x1c2;eip=0x0002bd; 	T(MOV(ax, word_1475c));	// 655 mov     ax, word_1475C ;~ 01C2:02BD
cs=0x1c2;eip=0x0002c0; 	J(CALL(sub_104d4,0));	// 656 call    sub_104D4 ;~ 01C2:02C0
cs=0x1c2;eip=0x0002c3; 	J(CALL(sub_105fd,0));	// 657 call    sub_105FD ;~ 01C2:02C3
locret_104c6:
	// 4392 
cs=0x1c2;eip=0x0002c6; 	R(RETN(0));	// 660 retn ;~ 01C2:02C6
loc_104c7:
	// 4393 
cs=0x1c2;eip=0x0002c7; 	J(CALL(sub_105fd,0));	// 664 call    sub_105FD ;~ 01C2:02C7
cs=0x1c2;eip=0x0002ca; 	T(MOV(ax, word_1475c));	// 665 mov     ax, word_1475C ;~ 01C2:02CA
cs=0x1c2;eip=0x0002cd; 	J(CALL(sub_104d4,0));	// 666 call    sub_104D4 ;~ 01C2:02CD
cs=0x1c2;eip=0x0002d0; 	J(CALL(sub_105ed,0));	// 667 call    sub_105ED ;~ 01C2:02D0
cs=0x1c2;eip=0x0002d3; 	R(RETN(0));	// 668 retn ;~ 01C2:02D3

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_104c7: 	goto loc_104c7;
        case m2c::klocret_104c6: 	goto locret_104c6;
        case m2c::kret_1c2_2a0: 	goto ret_1c2_2a0;
        case m2c::ksub_1049d: 	goto sub_1049d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_104d4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_104d4:
    _begin:
cs=0x1c2;eip=0x0002d4; 	T(MOV(di, 0x1CB));	// 677 mov     di, 1CBh ;~ 01C2:02D4
ret_1c2_2d7:
	// 4394 
cs=0x1c2;eip=0x0002d7; 	T(OR(ax, ax));	// 678 or      ax, ax ;~ 01C2:02D7
cs=0x1c2;eip=0x0002d9; 	J(JNZ(loc_104e4));	// 679 jnz     short loc_104E4 ;~ 01C2:02D9
cs=0x1c2;eip=0x0002db; 	T(MOV(cx, 7));	// 680 mov     cx, 7 ;~ 01C2:02DB
cs=0x1c2;eip=0x0002de; 	T(MOV(si, 0x1D3));	// 681 mov     si, 1D3h ;~ 01C2:02DE
	// 682 rep movsb ;~ 01C2:02E1
cs=0x1c2;eip=0x0002e1; 	X(	REP MOVSB);	// 682 rep movsb ;~ 01C2:02E1
cs=0x1c2;eip=0x0002e3; 	R(RETN(0));	// 683 retn ;~ 01C2:02E3
loc_104e4:
	// 4395 
cs=0x1c2;eip=0x0002e4; 	T(CMP(ah, 0x0A));	// 688 cmp     ah, 0Ah ;~ 01C2:02E4
cs=0x1c2;eip=0x0002e7; 	J(JNC(loc_1050e));	// 689 jnb     short loc_1050E ;~ 01C2:02E7
cs=0x1c2;eip=0x0002e9; 	T(MOV(bx, 3));	// 690 mov     bx, 3 ;~ 01C2:02E9
loc_104ec:
	// 4396 
cs=0x1c2;eip=0x0002ec; 	X(DIV1(byte_14750));	// 694 div     byte_14750 ;~ 01C2:02EC
cs=0x1c2;eip=0x0002f0; 	T(MOV(cl, al));	// 695 mov     cl, al ;~ 01C2:02F0
cs=0x1c2;eip=0x0002f2; 	T(OR(cl, ah));	// 696 or      cl, ah ;~ 01C2:02F2
cs=0x1c2;eip=0x0002f4; 	J(JZ(loc_104fd));	// 697 jz      short loc_104FD ;~ 01C2:02F4
cs=0x1c2;eip=0x0002f6; 	T(ADD(ah, 0x30));	// 698 add     ah, 30h ; '0' ;~ 01C2:02F6
cs=0x1c2;eip=0x0002f9; 	X(MOV(*(raddr(ds,bx+di)), ah));	// 699 mov     [bx+di], ah ;~ 01C2:02F9
cs=0x1c2;eip=0x0002fb; 	J(JMP(loc_10500));	// 700 jmp     short loc_10500 ;~ 01C2:02FB
loc_104fd:
	// 4397 
cs=0x1c2;eip=0x0002fd; 	X(MOV(*(raddr(ds,bx+di)), 0x20));	// 704 mov     byte ptr [bx+di], 20h ; ' ' ;~ 01C2:02FD
loc_10500:
	// 4398 
cs=0x1c2;eip=0x000300; 	T(XOR(ah, ah));	// 707 xor     ah, ah ;~ 01C2:0300
cs=0x1c2;eip=0x000302; 	T(DEC(bx));	// 708 dec     bx ;~ 01C2:0302
cs=0x1c2;eip=0x000303; 	J(JNS(loc_104ec));	// 709 jns     short loc_104EC ;~ 01C2:0303
cs=0x1c2;eip=0x000305; 	T(MOV(al, 0x30));	// 710 mov     al, 30h ; '0' ;~ 01C2:0305
cs=0x1c2;eip=0x000307; 	X(MOV(*(raddr(ds,di+4)), al));	// 711 mov     [di+4], al ;~ 01C2:0307
cs=0x1c2;eip=0x00030a; 	X(MOV(*(raddr(ds,di+5)), al));	// 712 mov     [di+5], al ;~ 01C2:030A
cs=0x1c2;eip=0x00030d; 	R(RETN(0));	// 713 retn ;~ 01C2:030D
loc_1050e:
	// 4399 
cs=0x1c2;eip=0x00030e; 	T(XOR(dx, dx));	// 717 xor     dx, dx ;~ 01C2:030E
cs=0x1c2;eip=0x000310; 	X(DIV2(word_14751));	// 718 div     word_14751 ;~ 01C2:0310
cs=0x1c2;eip=0x000314; 	T(CMP(ax, 0x3E8));	// 719 cmp     ax, 3E8h ;~ 01C2:0314
cs=0x1c2;eip=0x000317; 	J(JNC(loc_104e4));	// 720 jnb     short loc_104E4 ;~ 01C2:0317
cs=0x1c2;eip=0x000319; 	T(MOV(bx, 3));	// 721 mov     bx, 3 ;~ 01C2:0319
cs=0x1c2;eip=0x00031c; 	T(ADD(dl, 0x30));	// 722 add     dl, 30h ; '0' ;~ 01C2:031C
cs=0x1c2;eip=0x00031f; 	X(MOV(*(raddr(ds,bx+di)), dl));	// 723 mov     [bx+di], dl ;~ 01C2:031F
cs=0x1c2;eip=0x000321; 	T(DEC(bx));	// 724 dec     bx ;~ 01C2:0321
cs=0x1c2;eip=0x000322; 	J(JMP(loc_104ec));	// 725 jmp     short loc_104EC ;~ 01C2:0322

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_104e4: 	goto loc_104e4;
        case m2c::kloc_104ec: 	goto loc_104ec;
        case m2c::kloc_104fd: 	goto loc_104fd;
        case m2c::kloc_10500: 	goto loc_10500;
        case m2c::kloc_1050e: 	goto loc_1050e;
        case m2c::kret_1c2_2d7: 	goto ret_1c2_2d7;
        case m2c::ksub_104d4: 	goto sub_104d4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_10524(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_10524:
    _begin:
cs=0x1c2;eip=0x000324; 	J(CALL(sub_105d5,0));	// 733 call    sub_105D5 ;~ 01C2:0324
ret_1c2_327:
	// 4400 
cs=0x1c2;eip=0x000327; 	J(CALL(sub_105e5,0));	// 734 call    sub_105E5 ;~ 01C2:0327
cs=0x1c2;eip=0x00032a; 	J(CALL(sub_10662,0));	// 735 call    sub_10662 ;~ 01C2:032A
cs=0x1c2;eip=0x00032d; 	T(TEST(byte_15618, 2));	// 736 test    byte_15618, 2 ;~ 01C2:032D
cs=0x1c2;eip=0x000332; 	J(JZ(locret_1053d));	// 737 jz      short locret_1053D ;~ 01C2:0332
cs=0x1c2;eip=0x000334; 	J(CALL(sub_105f5,0));	// 738 call    sub_105F5 ;~ 01C2:0334
cs=0x1c2;eip=0x000337; 	J(CALL(sub_10691,0));	// 739 call    sub_10691 ;~ 01C2:0337
cs=0x1c2;eip=0x00033a; 	J(CALL(sub_10605,0));	// 740 call    sub_10605 ;~ 01C2:033A
locret_1053d:
	// 4401 
cs=0x1c2;eip=0x00033d; 	R(RETN(0));	// 743 retn ;~ 01C2:033D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::klocret_1053d: 	goto locret_1053d;
        case m2c::kret_1c2_327: 	goto ret_1c2_327;
        case m2c::ksub_10524: 	goto sub_10524;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1053e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1053e:
    _begin:
cs=0x1c2;eip=0x00033e; 	T(TEST(byte_148f8, 0x0FF));	// 751 test    byte_148F8, 0FFh ;~ 01C2:033E
ret_1c2_343:
	// 4402 
cs=0x1c2;eip=0x000343; 	J(JNZ(loc_10599));	// 752 jnz     short loc_10599 ;~ 01C2:0343
cs=0x1c2;eip=0x000345; 	T(MOV(si, 0x3B2));	// 753 mov     si, 3B2h ;~ 01C2:0345
cs=0x1c2;eip=0x000348; 	T(MOV(cx, 3));	// 754 mov     cx, 3 ;~ 01C2:0348
loc_1054b:
	// 4403 
cs=0x1c2;eip=0x00034b; 	T(MOV(al, *(raddr(ds,si))));	// 757 mov     al, [si] ;~ 01C2:034B
cs=0x1c2;eip=0x00034d; 	T(OR(al, al));	// 758 or      al, al ;~ 01C2:034D
cs=0x1c2;eip=0x00034f; 	J(JNZ(loc_10558));	// 759 jnz     short loc_10558 ;~ 01C2:034F
cs=0x1c2;eip=0x000351; 	T(ADD(si, 0x0D));	// 760 add     si, 0Dh ;~ 01C2:0351
cs=0x1c2;eip=0x000354; 	J(LOOP(loc_1054b));	// 761 loop    loc_1054B ;~ 01C2:0354
cs=0x1c2;eip=0x000356; 	J(JMP(loc_10599));	// 762 jmp     short loc_10599 ;~ 01C2:0356
loc_10558:
	// 4404 
cs=0x1c2;eip=0x000358; 	X(PUSH(si));	// 766 push    si ;~ 01C2:0358
cs=0x1c2;eip=0x000359; 	J(CALL(sub_105a8,0));	// 767 call    sub_105A8 ;~ 01C2:0359
cs=0x1c2;eip=0x00035c; 	X(POP(si));	// 768 pop     si ;~ 01C2:035C
cs=0x1c2;eip=0x00035d; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x0B))));	// 769 mov     ax, [si+0Bh] ;~ 01C2:035D
cs=0x1c2;eip=0x000360; 	T(SUB(ax, word_14af6));	// 770 sub     ax, word_14AF6 ;~ 01C2:0360
loc_10564:
	// 4405 
cs=0x1c2;eip=0x000364; 	T(TEST(ax, 0x8000));	// 773 test    ax, 8000h ;~ 01C2:0364
cs=0x1c2;eip=0x000367; 	J(JZ(loc_1056e));	// 774 jz      short loc_1056E ;~ 01C2:0367
cs=0x1c2;eip=0x000369; 	T(ADD(ax, 0x480));	// 775 add     ax, 480h ;~ 01C2:0369
cs=0x1c2;eip=0x00036c; 	J(JMP(loc_10564));	// 776 jmp     short loc_10564 ;~ 01C2:036C
loc_1056e:
	// 4406 
cs=0x1c2;eip=0x00036e; 	T(CMP(ax, 0x480));	// 781 cmp     ax, 480h ;~ 01C2:036E
cs=0x1c2;eip=0x000371; 	J(JC(loc_10578));	// 782 jb      short loc_10578 ;~ 01C2:0371
cs=0x1c2;eip=0x000373; 	T(SUB(ax, 0x480));	// 783 sub     ax, 480h ;~ 01C2:0373
cs=0x1c2;eip=0x000376; 	J(JMP(loc_1056e));	// 784 jmp     short loc_1056E ;~ 01C2:0376
loc_10578:
	// 4407 
cs=0x1c2;eip=0x000378; 	T(CMP(ax, 0x0A0));	// 788 cmp     ax, 0A0h ; ' ' ;~ 01C2:0378
cs=0x1c2;eip=0x00037b; 	J(JC(loc_10599));	// 789 jb      short loc_10599 ;~ 01C2:037B
cs=0x1c2;eip=0x00037d; 	T(CMP(ax, 0x1C0));	// 790 cmp     ax, 1C0h ;~ 01C2:037D
cs=0x1c2;eip=0x000380; 	J(JC(loc_10591));	// 791 jb      short loc_10591 ;~ 01C2:0380
cs=0x1c2;eip=0x000382; 	T(CMP(ax, 0x2C0));	// 792 cmp     ax, 2C0h ;~ 01C2:0382
cs=0x1c2;eip=0x000385; 	J(JC(loc_10596));	// 793 jb      short loc_10596 ;~ 01C2:0385
cs=0x1c2;eip=0x000387; 	T(CMP(ax, 0x3E0));	// 794 cmp     ax, 3E0h ;~ 01C2:0387
cs=0x1c2;eip=0x00038a; 	J(JNC(loc_10599));	// 795 jnb     short loc_10599 ;~ 01C2:038A
cs=0x1c2;eip=0x00038c; 	J(CALL(sub_105ba,0));	// 796 call    sub_105BA ;~ 01C2:038C
cs=0x1c2;eip=0x00038f; 	J(JMP(loc_10599));	// 797 jmp     short loc_10599 ;~ 01C2:038F
loc_10591:
	// 4408 
cs=0x1c2;eip=0x000391; 	J(CALL(sub_105b2,0));	// 801 call    sub_105B2 ;~ 01C2:0391
cs=0x1c2;eip=0x000394; 	J(JMP(loc_10599));	// 802 jmp     short loc_10599 ;~ 01C2:0394
loc_10596:
	// 4409 
cs=0x1c2;eip=0x000396; 	J(CALL(sub_105bf,0));	// 806 call    sub_105BF ;~ 01C2:0396
loc_10599:
	// 4410 
cs=0x1c2;eip=0x000399; 	T(TEST(byte_1476d, 0x0FF));	// 810 test    byte_1476D, 0FFh ;~ 01C2:0399
cs=0x1c2;eip=0x00039e; 	J(JZ(locret_105a7));	// 811 jz      short locret_105A7 ;~ 01C2:039E
cs=0x1c2;eip=0x0003a0; 	J(CALL(sub_105c4,0));	// 812 call    sub_105C4 ;~ 01C2:03A0
cs=0x1c2;eip=0x0003a3; 	X(DEC(byte_1476d));	// 813 dec     byte_1476D ;~ 01C2:03A3
locret_105a7:
	// 4411 
cs=0x1c2;eip=0x0003a7; 	R(RETN(0));	// 816 retn ;~ 01C2:03A7

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_1054b: 	goto loc_1054b;
        case m2c::kloc_10558: 	goto loc_10558;
        case m2c::kloc_10564: 	goto loc_10564;
        case m2c::kloc_1056e: 	goto loc_1056e;
        case m2c::kloc_10578: 	goto loc_10578;
        case m2c::kloc_10591: 	goto loc_10591;
        case m2c::kloc_10596: 	goto loc_10596;
        case m2c::kloc_10599: 	goto loc_10599;
        case m2c::klocret_105a7: 	goto locret_105a7;
        case m2c::kret_1c2_343: 	goto ret_1c2_343;
        case m2c::ksub_1053e: 	goto sub_1053e;
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
sub_105a8:
	// 823 
cs=0x1c2;eip=0x0003a8; 	T(MOV(si, 0x169));	// 824 mov     si, 169h ;~ 01C2:03A8
ret_1c2_3ab:
	// 4412 
cs=0x1c2;eip=0x0003ab; 	T(MOV(di, 0x3C0));	// 825 mov     di, 3C0h ;~ 01C2:03AB
sub_105ae:
	// 832 
cs=0x1c2;eip=0x0003ae; 	J(CALL(sub_1063f,0));	// 834 call    sub_1063F ;~ 01C2:03AE
cs=0x1c2;eip=0x0003b1; 	R(RETN(0));	// 835 retn ;~ 01C2:03B1
sub_105b2:
	// 842 
cs=0x1c2;eip=0x0003b2; 	T(MOV(si, 0x178));	// 843 mov     si, 178h ;~ 01C2:03B2
loc_105b5:
	// 4413 
cs=0x1c2;eip=0x0003b5; 	T(MOV(di, 0x500));	// 847 mov     di, 500h ;~ 01C2:03B5
cs=0x1c2;eip=0x0003b8; 	J(JMP(sub_105ae));	// 848 jmp     short sub_105AE ;~ 01C2:03B8
sub_105ba:
	// 855 
cs=0x1c2;eip=0x0003ba; 	T(MOV(si, 0x187));	// 856 mov     si, 187h ;~ 01C2:03BA
ret_1c2_3bd:
	// 4414 
cs=0x1c2;eip=0x0003bd; 	J(JMP(loc_105b5));	// 857 jmp     short loc_105B5 ;~ 01C2:03BD
sub_105bf:
	// 864 
cs=0x1c2;eip=0x0003bf; 	T(MOV(si, 0x195));	// 865 mov     si, 195h ;~ 01C2:03BF
ret_1c2_3c2:
	// 4415 
cs=0x1c2;eip=0x0003c2; 	J(JMP(loc_105b5));	// 866 jmp     short loc_105B5 ;~ 01C2:03C2
sub_105c4:
	// 873 
cs=0x1c2;eip=0x0003c4; 	T(MOV(si, 0x1A3));	// 874 mov     si, 1A3h ;~ 01C2:03C4
ret_1c2_3c7:
	// 4416 
cs=0x1c2;eip=0x0003c7; 	T(MOV(di, 0));	// 875 mov     di, 0 ;~ 01C2:03C7
cs=0x1c2;eip=0x0003ca; 	J(CALL(sub_105ae,0));	// 876 call    sub_105AE ;~ 01C2:03CA
cs=0x1c2;eip=0x0003cd; 	T(MOV(di, 0x140));	// 877 mov     di, 140h ;~ 01C2:03CD
cs=0x1c2;eip=0x0003d0; 	T(MOV(si, 0x1B2));	// 878 mov     si, 1B2h ;~ 01C2:03D0
cs=0x1c2;eip=0x0003d3; 	J(JMP(sub_105ae));	// 879 jmp     short sub_105AE ;~ 01C2:03D3
sub_105d5:
	// 886 
cs=0x1c2;eip=0x0003d5; 	T(MOV(si, 0x1BC));	// 887 mov     si, 1BCh ;~ 01C2:03D5
ret_1c2_3d8:
	// 4417 
cs=0x1c2;eip=0x0003d8; 	T(MOV(di, 0x36));	// 888 mov     di, 36h ; '6' ;~ 01C2:03D8
cs=0x1c2;eip=0x0003db; 	J(JMP(sub_105ae));	// 889 jmp     short sub_105AE ;~ 01C2:03DB
sub_105dd:
	// 896 
cs=0x1c2;eip=0x0003dd; 	T(MOV(si, 0x1CB));	// 897 mov     si, 1CBh ;~ 01C2:03DD
ret_1c2_3e0:
	// 4418 
cs=0x1c2;eip=0x0003e0; 	T(MOV(di, 0x40));	// 898 mov     di, 40h ; '@' ;~ 01C2:03E0
cs=0x1c2;eip=0x0003e3; 	J(JMP(sub_105ae));	// 899 jmp     short sub_105AE ;~ 01C2:03E3
sub_105e5:
	// 906 
cs=0x1c2;eip=0x0003e5; 	T(MOV(si, 0x1C1));	// 907 mov     si, 1C1h ;~ 01C2:03E5
ret_1c2_3e8:
	// 4419 
cs=0x1c2;eip=0x0003e8; 	T(MOV(di, 0x216));	// 908 mov     di, 216h ;~ 01C2:03E8
cs=0x1c2;eip=0x0003eb; 	J(JMP(sub_105ae));	// 909 jmp     short sub_105AE ;~ 01C2:03EB
sub_105ed:
	// 916 
cs=0x1c2;eip=0x0003ed; 	T(MOV(si, 0x1CB));	// 918 mov     si, 1CBh ;~ 01C2:03ED
ret_1c2_3f0:
	// 4420 
cs=0x1c2;eip=0x0003f0; 	T(MOV(di, 0x220));	// 919 mov     di, 220h ;~ 01C2:03F0
cs=0x1c2;eip=0x0003f3; 	J(JMP(sub_105ae));	// 920 jmp     short sub_105AE ;~ 01C2:03F3
sub_105f5:
	// 927 
cs=0x1c2;eip=0x0003f5; 	T(MOV(si, 0x1C6));	// 928 mov     si, 1C6h ;~ 01C2:03F5
ret_1c2_3f8:
	// 4421 
cs=0x1c2;eip=0x0003f8; 	T(MOV(di, 0x5D6));	// 929 mov     di, 5D6h ;~ 01C2:03F8
cs=0x1c2;eip=0x0003fb; 	J(JMP(sub_105ae));	// 930 jmp     short sub_105AE ;~ 01C2:03FB
sub_105fd:
	// 937 
cs=0x1c2;eip=0x0003fd; 	T(MOV(si, 0x1CB));	// 939 mov     si, 1CBh ;~ 01C2:03FD
ret_1c2_400:
	// 4422 
cs=0x1c2;eip=0x000400; 	T(MOV(di, 0x5E0));	// 940 mov     di, 5E0h ;~ 01C2:0400
cs=0x1c2;eip=0x000403; 	J(JMP(sub_105ae));	// 941 jmp     short sub_105AE ;~ 01C2:0403

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_105b5: 	goto loc_105b5;
        case m2c::kret_1c2_3ab: 	goto ret_1c2_3ab;
        case m2c::kret_1c2_3bd: 	goto ret_1c2_3bd;
        case m2c::kret_1c2_3c2: 	goto ret_1c2_3c2;
        case m2c::kret_1c2_3c7: 	goto ret_1c2_3c7;
        case m2c::kret_1c2_3d8: 	goto ret_1c2_3d8;
        case m2c::kret_1c2_3e0: 	goto ret_1c2_3e0;
        case m2c::kret_1c2_3e8: 	goto ret_1c2_3e8;
        case m2c::kret_1c2_3f0: 	goto ret_1c2_3f0;
        case m2c::kret_1c2_3f8: 	goto ret_1c2_3f8;
        case m2c::kret_1c2_400: 	goto ret_1c2_400;
        case m2c::ksub_105a8: 	goto sub_105a8;
        case m2c::ksub_105ae: 	goto sub_105ae;
        case m2c::ksub_105b2: 	goto sub_105b2;
        case m2c::ksub_105ba: 	goto sub_105ba;
        case m2c::ksub_105bf: 	goto sub_105bf;
        case m2c::ksub_105c4: 	goto sub_105c4;
        case m2c::ksub_105d5: 	goto sub_105d5;
        case m2c::ksub_105dd: 	goto sub_105dd;
        case m2c::ksub_105e5: 	goto sub_105e5;
        case m2c::ksub_105ed: 	goto sub_105ed;
        case m2c::ksub_105f5: 	goto sub_105f5;
        case m2c::ksub_105fd: 	goto sub_105fd;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_10635(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_10635:
    _begin:
cs=0x1c2;eip=0x000435; 	T(MOV(si, 0x20D));	// 983 mov     si, 20Dh ;~ 01C2:0435
ret_1c2_438:
	// 4427 
cs=0x1c2;eip=0x000438; 	T(MOV(di, 0x1CC6));	// 984 mov     di, 1CC6h ;~ 01C2:0438
cs=0x1c2;eip=0x00043b; 	J(CALL(sub_1063f,0));	// 985 call    sub_1063F ;~ 01C2:043B
cs=0x1c2;eip=0x00043e; 	R(RETN(0));	// 986 retn ;~ 01C2:043E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_438: 	goto ret_1c2_438;
        case m2c::ksub_10635: 	goto sub_10635;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_106a9(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_106a9:
    _begin:
cs=0x1c2;eip=0x0004a9; 	T(MOV(si, 0x131));	// 1088 mov     si, 131h ;~ 01C2:04A9
ret_1c2_4ac:
	// 4439 
cs=0x1c2;eip=0x0004ac; 	T(MOV(bl, 3));	// 1089 mov     bl, 3 ;~ 01C2:04AC
loc_106ae:
	// 4440 
cs=0x1c2;eip=0x0004ae; 	X(MOVSW);	// 1092 movsw ;~ 01C2:04AE
cs=0x1c2;eip=0x0004af; 	X(MOVSW);	// 1093 movsw ;~ 01C2:04AF
cs=0x1c2;eip=0x0004b0; 	T(ADD(di, 0x0E04C));	// 1094 add     di, 0E04Ch ;~ 01C2:04B0
cs=0x1c2;eip=0x0004b4; 	X(MOVSW);	// 1095 movsw ;~ 01C2:04B4
cs=0x1c2;eip=0x0004b5; 	X(MOVSW);	// 1096 movsw ;~ 01C2:04B5
cs=0x1c2;eip=0x0004b6; 	T(ADD(di, 0x1FFC));	// 1097 add     di, 1FFCh ;~ 01C2:04B6
cs=0x1c2;eip=0x0004ba; 	T(DEC(bl));	// 1098 dec     bl ;~ 01C2:04BA
cs=0x1c2;eip=0x0004bc; 	J(JNZ(loc_106ae));	// 1099 jnz     short loc_106AE ;~ 01C2:04BC
cs=0x1c2;eip=0x0004be; 	R(RETN(0));	// 1100 retn ;~ 01C2:04BE

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_106ae: 	goto loc_106ae;
        case m2c::kret_1c2_4ac: 	goto ret_1c2_4ac;
        case m2c::ksub_106a9: 	goto sub_106a9;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_10704(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_10704:
    _begin:
cs=0x1c2;eip=0x000504; 	J(CALL(sub_10438,0));	// 1156 call    sub_10438 ;~ 01C2:0504
ret_1c2_507:
	// 4445 
cs=0x1c2;eip=0x000507; 	T(MOV(si, 0x1E7));	// 1157 mov     si, 1E7h ;~ 01C2:0507
cs=0x1c2;eip=0x00050a; 	T(MOV(di, si));	// 1158 mov     di, si ;~ 01C2:050A
cs=0x1c2;eip=0x00050c; 	T(ADD(di, 0x13));	// 1159 add     di, 13h ;~ 01C2:050C
cs=0x1c2;eip=0x00050f; 	T(MOV(al, byte_14765));	// 1160 mov     al, byte_14765 ;~ 01C2:050F
cs=0x1c2;eip=0x000512; 	T(ADD(al, 0x30));	// 1161 add     al, 30h ; '0' ;~ 01C2:0512
cs=0x1c2;eip=0x000514; 	X(MOV(*(raddr(ds,di)), al));	// 1162 mov     [di], al ;~ 01C2:0514
cs=0x1c2;eip=0x000516; 	J(CALL(sub_142f4,0));	// 1163 call    sub_142F4 ;~ 01C2:0516
cs=0x1c2;eip=0x000519; 	X(MOV(word_156e6, 0));	// 1164 mov     word_156E6, 0 ;~ 01C2:0519
loc_1071f:
	// 4446 
cs=0x1c2;eip=0x00051f; 	T(CMP(word_156e6, 0x12C));	// 1167 cmp     word_156E6, 12Ch ;~ 01C2:051F
cs=0x1c2;eip=0x000525; 	J(JC(loc_1071f));	// 1168 jb      short loc_1071F ;~ 01C2:0525
cs=0x1c2;eip=0x000527; 	R(RETN(0));	// 1169 retn ;~ 01C2:0527

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_1071f: 	goto loc_1071f;
        case m2c::kret_1c2_507: 	goto ret_1c2_507;
        case m2c::ksub_10704: 	goto sub_10704;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg001_528_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg001_528_proc:
    _begin:
cs=0x1c2;eip=0x000528; 	X(MOV(byte_154c2, 8));	// 1173 mov     byte_154C2, 8 ;~ 01C2:0528
ret_1c2_52d:
	// 4447 
cs=0x1c2;eip=0x00052d; 	J(CALL(sub_14372,0));	// 1174 call    sub_14372 ;~ 01C2:052D
cs=0x1c2;eip=0x000530; 	T(MOV(si, 0x1FD));	// 1175 mov     si, 1FDh ;~ 01C2:0530
cs=0x1c2;eip=0x000533; 	T(MOV(al, byte_14765));	// 1176 mov     al, byte_14765 ;~ 01C2:0533
cs=0x1c2;eip=0x000536; 	T(XOR(al, 3));	// 1177 xor     al, 3 ;~ 01C2:0536
cs=0x1c2;eip=0x000538; 	T(MOV(di, si));	// 1178 mov     di, si ;~ 01C2:0538
cs=0x1c2;eip=0x00053a; 	T(ADD(di, 0x0F));	// 1179 add     di, 0Fh ;~ 01C2:053A
cs=0x1c2;eip=0x00053d; 	T(ADD(al, 0x30));	// 1180 add     al, 30h ; '0' ;~ 01C2:053D
cs=0x1c2;eip=0x00053f; 	X(MOV(*(raddr(ds,di)), al));	// 1181 mov     [di], al ;~ 01C2:053F
cs=0x1c2;eip=0x000541; 	J(CALL(sub_142f4,0));	// 1182 call    sub_142F4 ;~ 01C2:0541
cs=0x1c2;eip=0x000544; 	R(RETN(0));	// 1183 retn ;~ 01C2:0544

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_52d: 	goto ret_1c2_52d;
        case m2c::kseg001_528_proc: 	goto seg001_528_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_10745(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_10745:
    _begin:
cs=0x1c2;eip=0x000545; 	J(CALL(sub_13c4f,0));	// 1189 call    sub_13C4F ;~ 01C2:0545
ret_1c2_548:
	// 4448 
cs=0x1c2;eip=0x000548; 	T(MOV(bl, 0x0A));	// 1190 mov     bl, 0Ah ;~ 01C2:0548
cs=0x1c2;eip=0x00054a; 	T(MOV(di, ax));	// 1191 mov     di, ax ;~ 01C2:054A
loc_1074c:
	// 4449 
cs=0x1c2;eip=0x00054c; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 1194 mov     ax, [di] ;~ 01C2:054C
cs=0x1c2;eip=0x00054e; 	T(XOR(ax, 0x47));	// 1195 xor     ax, 47h ;~ 01C2:054E
cs=0x1c2;eip=0x000551; 	X(STOSW);	// 1196 stosw ;~ 01C2:0551
cs=0x1c2;eip=0x000552; 	T(ADD(di, 0x14));	// 1197 add     di, 14h ;~ 01C2:0552
cs=0x1c2;eip=0x000555; 	T(DEC(bl));	// 1198 dec     bl ;~ 01C2:0555
cs=0x1c2;eip=0x000557; 	J(JNZ(loc_1074c));	// 1199 jnz     short loc_1074C ;~ 01C2:0557
cs=0x1c2;eip=0x000559; 	R(RETN(0));	// 1200 retn ;~ 01C2:0559

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_1074c: 	goto loc_1074c;
        case m2c::kret_1c2_548: 	goto ret_1c2_548;
        case m2c::ksub_10745: 	goto sub_10745;
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
sub_10760:
	// 1210 
cs=0x1c2;eip=0x000560; 	T(MOV(di, 0x3B2));	// 1211 mov     di, 3B2h ;~ 01C2:0560
ret_1c2_563:
	// 4450 
cs=0x1c2;eip=0x000563; 	T(MOV(cx, 0x13));	// 1212 mov     cx, 13h ;~ 01C2:0563
sub_10766:
	// 1219 
cs=0x1c2;eip=0x000566; 	X(PUSH(si));	// 1221 push    si ;~ 01C2:0566
loc_10767:
	// 4451 
cs=0x1c2;eip=0x000567; 	T(MOV(si, di));	// 1224 mov     si, di ;~ 01C2:0567
cs=0x1c2;eip=0x000569; 	T(LODSB);	// 1225 lodsb ;~ 01C2:0569
cs=0x1c2;eip=0x00056a; 	T(OR(al, al));	// 1226 or      al, al ;~ 01C2:056A
cs=0x1c2;eip=0x00056c; 	J(JZ(loc_1079c));	// 1227 jz      short loc_1079C ;~ 01C2:056C
cs=0x1c2;eip=0x00056e; 	T(LODSW);	// 1228 lodsw ;~ 01C2:056E
cs=0x1c2;eip=0x00056f; 	T(SUB(ax, bx));	// 1229 sub     ax, bx ;~ 01C2:056F
cs=0x1c2;eip=0x000571; 	T(TEST(ax, 0x8000));	// 1230 test    ax, 8000h ;~ 01C2:0571
cs=0x1c2;eip=0x000574; 	J(JZ(loc_10778));	// 1231 jz      short loc_10778 ;~ 01C2:0574
cs=0x1c2;eip=0x000576; 	T(NEG(ax));	// 1232 neg     ax ;~ 01C2:0576
loc_10778:
	// 4452 
cs=0x1c2;eip=0x000578; 	T(CMP(ax, word_14870));	// 1235 cmp     ax, word_14870 ;~ 01C2:0578
cs=0x1c2;eip=0x00057c; 	J(JNC(loc_1079c));	// 1236 jnb     short loc_1079C ;~ 01C2:057C
cs=0x1c2;eip=0x00057e; 	T(MOV(bp, ax));	// 1237 mov     bp, ax ;~ 01C2:057E
cs=0x1c2;eip=0x000580; 	T(LODSW);	// 1238 lodsw ;~ 01C2:0580
cs=0x1c2;eip=0x000581; 	T(SUB(ax, dx));	// 1239 sub     ax, dx ;~ 01C2:0581
cs=0x1c2;eip=0x000583; 	T(TEST(ax, 0x8000));	// 1240 test    ax, 8000h ;~ 01C2:0583
cs=0x1c2;eip=0x000586; 	J(JZ(loc_1078a));	// 1241 jz      short loc_1078A ;~ 01C2:0586
cs=0x1c2;eip=0x000588; 	T(NEG(ax));	// 1242 neg     ax ;~ 01C2:0588
loc_1078a:
	// 4453 
cs=0x1c2;eip=0x00058a; 	T(CMP(ax, bp));	// 1245 cmp     ax, bp ;~ 01C2:058A
cs=0x1c2;eip=0x00058c; 	J(JC(loc_10792));	// 1246 jb      short loc_10792 ;~ 01C2:058C
cs=0x1c2;eip=0x00058e; 	T(SHR(bp, 1));	// 1247 shr     bp, 1 ;~ 01C2:058E
cs=0x1c2;eip=0x000590; 	J(JMP(loc_10794));	// 1248 jmp     short loc_10794 ;~ 01C2:0590
loc_10792:
	// 4454 
cs=0x1c2;eip=0x000592; 	T(SHR(ax, 1));	// 1252 shr     ax, 1 ;~ 01C2:0592
loc_10794:
	// 4455 
cs=0x1c2;eip=0x000594; 	T(ADD(ax, bp));	// 1255 add     ax, bp ;~ 01C2:0594
cs=0x1c2;eip=0x000596; 	T(CMP(ax, word_14870));	// 1256 cmp     ax, word_14870 ;~ 01C2:0596
cs=0x1c2;eip=0x00059a; 	J(JC(loc_107a2));	// 1257 jb      short loc_107A2 ;~ 01C2:059A
loc_1079c:
	// 4456 
cs=0x1c2;eip=0x00059c; 	T(ADD(di, 0x0D));	// 1261 add     di, 0Dh ;~ 01C2:059C
cs=0x1c2;eip=0x00059f; 	J(LOOP(loc_10767));	// 1262 loop    loc_10767 ;~ 01C2:059F
cs=0x1c2;eip=0x0005a1; 	T(CLC);	// 1263 clc ;~ 01C2:05A1
loc_107a2:
	// 4457 
cs=0x1c2;eip=0x0005a2; 	X(POP(si));	// 1266 pop     si ;~ 01C2:05A2
cs=0x1c2;eip=0x0005a3; 	R(RETN(0));	// 1267 retn ;~ 01C2:05A3

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_10767: 	goto loc_10767;
        case m2c::kloc_10778: 	goto loc_10778;
        case m2c::kloc_1078a: 	goto loc_1078a;
        case m2c::kloc_10792: 	goto loc_10792;
        case m2c::kloc_10794: 	goto loc_10794;
        case m2c::kloc_1079c: 	goto loc_1079c;
        case m2c::kloc_107a2: 	goto loc_107a2;
        case m2c::kret_1c2_563: 	goto ret_1c2_563;
        case m2c::ksub_10760: 	goto sub_10760;
        case m2c::ksub_10766: 	goto sub_10766;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_107a4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_107a4:
    _begin:
cs=0x1c2;eip=0x0005a4; 	T(MOV(bx, word_14afc));	// 1275 mov     bx, word_14AFC ;~ 01C2:05A4
ret_1c2_5a8:
	// 4458 
cs=0x1c2;eip=0x0005a8; 	T(MOV(dx, word_14afe));	// 1276 mov     dx, word_14AFE ;~ 01C2:05A8
cs=0x1c2;eip=0x0005ac; 	T(MOV(di, 0x400));	// 1277 mov     di, 400h ;~ 01C2:05AC
cs=0x1c2;eip=0x0005af; 	X(MOV(word_14870, 0x0C00));	// 1278 mov     word_14870, 0C00h ;~ 01C2:05AF
cs=0x1c2;eip=0x0005b5; 	T(MOV(cx, 0x0D));	// 1279 mov     cx, 0Dh ;~ 01C2:05B5
loc_107b8:
	// 4459 
cs=0x1c2;eip=0x0005b8; 	T(MOV(bx, word_14afc));	// 1282 mov     bx, word_14AFC ;~ 01C2:05B8
cs=0x1c2;eip=0x0005bc; 	T(MOV(dx, word_14afe));	// 1283 mov     dx, word_14AFE ;~ 01C2:05BC
cs=0x1c2;eip=0x0005c0; 	J(CALL(sub_10766,0));	// 1284 call    sub_10766 ;~ 01C2:05C0
cs=0x1c2;eip=0x0005c3; 	J(JNC(loc_1081d));	// 1285 jnb     short loc_1081D ;~ 01C2:05C3
cs=0x1c2;eip=0x0005c5; 	X(PUSH(si));	// 1286 push    si ;~ 01C2:05C5
cs=0x1c2;eip=0x0005c6; 	X(PUSH(cx));	// 1287 push    cx ;~ 01C2:05C6
cs=0x1c2;eip=0x0005c7; 	T(MOV(cl, 3));	// 1288 mov     cl, 3 ;~ 01C2:05C7
cs=0x1c2;eip=0x0005c9; 	T(SAR(bx, cl));	// 1289 sar     bx, cl ;~ 01C2:05C9
cs=0x1c2;eip=0x0005cb; 	T(MOV(bp, bx));	// 1290 mov     bp, bx ;~ 01C2:05CB
cs=0x1c2;eip=0x0005cd; 	T(SAR(dx, cl));	// 1291 sar     dx, cl ;~ 01C2:05CD
cs=0x1c2;eip=0x0005cf; 	T(MOV(si, dx));	// 1292 mov     si, dx ;~ 01C2:05CF
cs=0x1c2;eip=0x0005d1; 	X(MOV(word_148ae, 0x0FFFF));	// 1293 mov     word_148AE, 0FFFFh ;~ 01C2:05D1
cs=0x1c2;eip=0x0005d7; 	X(MOV(byte_148ac, 0));	// 1294 mov     byte_148AC, 0 ;~ 01C2:05D7
loc_107dc:
	// 4460 
cs=0x1c2;eip=0x0005dc; 	T(MOV(ax, *(dw*)(raddr(ds,di+1))));	// 1297 mov     ax, [di+1] ;~ 01C2:05DC
cs=0x1c2;eip=0x0005df; 	T(SUB(ax, bx));	// 1298 sub     ax, bx ;~ 01C2:05DF
cs=0x1c2;eip=0x0005e1; 	J(JNS(loc_107e5));	// 1299 jns     short loc_107E5 ;~ 01C2:05E1
cs=0x1c2;eip=0x0005e3; 	T(NEG(ax));	// 1300 neg     ax ;~ 01C2:05E3
loc_107e5:
	// 4461 
cs=0x1c2;eip=0x0005e5; 	T(MOV(cx, *(dw*)(raddr(ds,di+3))));	// 1303 mov     cx, [di+3] ;~ 01C2:05E5
cs=0x1c2;eip=0x0005e8; 	T(SUB(cx, dx));	// 1304 sub     cx, dx ;~ 01C2:05E8
cs=0x1c2;eip=0x0005ea; 	J(JNS(loc_107ee));	// 1305 jns     short loc_107EE ;~ 01C2:05EA
cs=0x1c2;eip=0x0005ec; 	T(NEG(cx));	// 1306 neg     cx ;~ 01C2:05EC
loc_107ee:
	// 4462 
cs=0x1c2;eip=0x0005ee; 	T(CMP(ax, cx));	// 1309 cmp     ax, cx ;~ 01C2:05EE
cs=0x1c2;eip=0x0005f0; 	J(JC(loc_107f6));	// 1310 jb      short loc_107F6 ;~ 01C2:05F0
cs=0x1c2;eip=0x0005f2; 	T(SHR(cx, 1));	// 1311 shr     cx, 1 ;~ 01C2:05F2
cs=0x1c2;eip=0x0005f4; 	J(JMP(loc_107f8));	// 1312 jmp     short loc_107F8 ;~ 01C2:05F4
loc_107f6:
	// 4463 
cs=0x1c2;eip=0x0005f6; 	T(SHR(ax, 1));	// 1316 shr     ax, 1 ;~ 01C2:05F6
loc_107f8:
	// 4464 
cs=0x1c2;eip=0x0005f8; 	T(ADD(ax, cx));	// 1319 add     ax, cx ;~ 01C2:05F8
cs=0x1c2;eip=0x0005fa; 	T(CMP(ax, word_14874));	// 1320 cmp     ax, word_14874 ;~ 01C2:05FA
cs=0x1c2;eip=0x0005fe; 	J(JC(loc_10824));	// 1321 jb      short loc_10824 ;~ 01C2:05FE
cs=0x1c2;eip=0x000600; 	T(CMP(ax, word_148ae));	// 1322 cmp     ax, word_148AE ;~ 01C2:0600
cs=0x1c2;eip=0x000604; 	J(JA(loc_10815));	// 1323 ja      short loc_10815 ;~ 01C2:0604
cs=0x1c2;eip=0x000606; 	T(ADD(bx, bp));	// 1324 add     bx, bp ;~ 01C2:0606
cs=0x1c2;eip=0x000608; 	T(ADD(dx, si));	// 1325 add     dx, si ;~ 01C2:0608
cs=0x1c2;eip=0x00060a; 	X(INC(byte_148ac));	// 1326 inc     byte_148AC ;~ 01C2:060A
cs=0x1c2;eip=0x00060e; 	T(CMP(byte_148ac, 8));	// 1327 cmp     byte_148AC, 8 ;~ 01C2:060E
cs=0x1c2;eip=0x000613; 	J(JC(loc_107dc));	// 1328 jb      short loc_107DC ;~ 01C2:0613
loc_10815:
	// 4465 
cs=0x1c2;eip=0x000615; 	X(POP(cx));	// 1331 pop     cx ;~ 01C2:0615
cs=0x1c2;eip=0x000616; 	X(POP(si));	// 1332 pop     si ;~ 01C2:0616
cs=0x1c2;eip=0x000617; 	T(ADD(di, 0x0D));	// 1333 add     di, 0Dh ;~ 01C2:0617
cs=0x1c2;eip=0x00061a; 	T(DEC(cx));	// 1334 dec     cx ;~ 01C2:061A
cs=0x1c2;eip=0x00061b; 	J(JNZ(loc_107b8));	// 1335 jnz     short loc_107B8 ;~ 01C2:061B
loc_1081d:
	// 4466 
cs=0x1c2;eip=0x00061d; 	X(MOV(byte_148ac, 0x0FF));	// 1338 mov     byte_148AC, 0FFh ;~ 01C2:061D
cs=0x1c2;eip=0x000622; 	T(CLC);	// 1339 clc ;~ 01C2:0622
cs=0x1c2;eip=0x000623; 	R(RETN(0));	// 1340 retn ;~ 01C2:0623
loc_10824:
	// 4467 
cs=0x1c2;eip=0x000624; 	X(POP(cx));	// 1344 pop     cx ;~ 01C2:0624
cs=0x1c2;eip=0x000625; 	T(SUB(bx, bp));	// 1345 sub     bx, bp ;~ 01C2:0625
cs=0x1c2;eip=0x000627; 	X(MOV(word_14afc, bx));	// 1346 mov     word_14AFC, bx ;~ 01C2:0627
cs=0x1c2;eip=0x00062b; 	T(SUB(dx, si));	// 1347 sub     dx, si ;~ 01C2:062B
cs=0x1c2;eip=0x00062d; 	X(MOV(word_14afe, dx));	// 1348 mov     word_14AFE, dx ;~ 01C2:062D
cs=0x1c2;eip=0x000631; 	T(TEST(word_14888, 0x0FF));	// 1349 test    word_14888, 0FFh ;~ 01C2:0631
cs=0x1c2;eip=0x000637; 	J(JNZ(loc_10843));	// 1350 jnz     short loc_10843 ;~ 01C2:0637
cs=0x1c2;eip=0x000639; 	X(MOV(word_14886, di));	// 1351 mov     word_14886, di ;~ 01C2:0639
cs=0x1c2;eip=0x00063d; 	X(MOV(word_14888, 3));	// 1352 mov     word_14888, 3 ;~ 01C2:063D
loc_10843:
	// 4468 
cs=0x1c2;eip=0x000643; 	X(POP(si));	// 1355 pop     si ;~ 01C2:0643
cs=0x1c2;eip=0x000644; 	T(STC);	// 1356 stc ;~ 01C2:0644
cs=0x1c2;eip=0x000645; 	R(RETN(0));	// 1357 retn ;~ 01C2:0645

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_107b8: 	goto loc_107b8;
        case m2c::kloc_107dc: 	goto loc_107dc;
        case m2c::kloc_107e5: 	goto loc_107e5;
        case m2c::kloc_107ee: 	goto loc_107ee;
        case m2c::kloc_107f6: 	goto loc_107f6;
        case m2c::kloc_107f8: 	goto loc_107f8;
        case m2c::kloc_10815: 	goto loc_10815;
        case m2c::kloc_1081d: 	goto loc_1081d;
        case m2c::kloc_10824: 	goto loc_10824;
        case m2c::kloc_10843: 	goto loc_10843;
        case m2c::kret_1c2_5a8: 	goto ret_1c2_5a8;
        case m2c::ksub_107a4: 	goto sub_107a4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_10846(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_10846:
    _begin:
cs=0x1c2;eip=0x000646; 	T(MOV(si, 0x3B2));	// 1366 mov     si, 3B2h ;~ 01C2:0646
ret_1c2_649:
	// 4469 
cs=0x1c2;eip=0x000649; 	T(MOV(bx, word_14afc));	// 1367 mov     bx, word_14AFC ;~ 01C2:0649
cs=0x1c2;eip=0x00064d; 	T(MOV(dx, word_14afe));	// 1368 mov     dx, word_14AFE ;~ 01C2:064D
cs=0x1c2;eip=0x000651; 	X(MOV(byte_148ab, 1));	// 1369 mov     byte_148AB, 1 ;~ 01C2:0651
loc_10856:
	// 4470 
cs=0x1c2;eip=0x000656; 	T(MOV(al, *(raddr(ds,si))));	// 1372 mov     al, [si] ;~ 01C2:0656
cs=0x1c2;eip=0x000658; 	T(OR(al, al));	// 1373 or      al, al ;~ 01C2:0658
cs=0x1c2;eip=0x00065a; 	J(JZ(loc_10885));	// 1374 jz      short loc_10885 ;~ 01C2:065A
cs=0x1c2;eip=0x00065c; 	T(CMP(*(dw*)(raddr(ds,si+5)), 5));	// 1375 cmp     word ptr [si+5], 5 ;~ 01C2:065C
cs=0x1c2;eip=0x000660; 	J(JNC(loc_10885));	// 1376 jnb     short loc_10885 ;~ 01C2:0660
cs=0x1c2;eip=0x000662; 	T(MOV(ax, *(dw*)(raddr(ds,si+1))));	// 1377 mov     ax, [si+1] ;~ 01C2:0662
cs=0x1c2;eip=0x000665; 	T(SUB(ax, bx));	// 1378 sub     ax, bx ;~ 01C2:0665
cs=0x1c2;eip=0x000667; 	J(JNS(loc_1086b));	// 1379 jns     short loc_1086B ;~ 01C2:0667
cs=0x1c2;eip=0x000669; 	T(NEG(ax));	// 1380 neg     ax ;~ 01C2:0669
loc_1086b:
	// 4471 
cs=0x1c2;eip=0x00066b; 	T(MOV(cx, *(dw*)(raddr(ds,si+3))));	// 1383 mov     cx, [si+3] ;~ 01C2:066B
cs=0x1c2;eip=0x00066e; 	T(SUB(cx, dx));	// 1384 sub     cx, dx ;~ 01C2:066E
cs=0x1c2;eip=0x000670; 	J(JNS(loc_10874));	// 1385 jns     short loc_10874 ;~ 01C2:0670
cs=0x1c2;eip=0x000672; 	T(NEG(cx));	// 1386 neg     cx ;~ 01C2:0672
loc_10874:
	// 4472 
cs=0x1c2;eip=0x000674; 	T(CMP(ax, cx));	// 1389 cmp     ax, cx ;~ 01C2:0674
cs=0x1c2;eip=0x000676; 	J(JC(loc_1087c));	// 1390 jb      short loc_1087C ;~ 01C2:0676
cs=0x1c2;eip=0x000678; 	T(SHR(cx, 1));	// 1391 shr     cx, 1 ;~ 01C2:0678
cs=0x1c2;eip=0x00067a; 	J(JMP(loc_1087e));	// 1392 jmp     short loc_1087E ;~ 01C2:067A
loc_1087c:
	// 4473 
cs=0x1c2;eip=0x00067c; 	T(SHR(ax, 1));	// 1396 shr     ax, 1 ;~ 01C2:067C
loc_1087e:
	// 4474 
cs=0x1c2;eip=0x00067e; 	T(ADD(ax, cx));	// 1399 add     ax, cx ;~ 01C2:067E
cs=0x1c2;eip=0x000680; 	T(CMP(ax, 0x780));	// 1400 cmp     ax, 780h ;~ 01C2:0680
cs=0x1c2;eip=0x000683; 	J(JC(loc_10895));	// 1401 jb      short loc_10895 ;~ 01C2:0683
loc_10885:
	// 4475 
cs=0x1c2;eip=0x000685; 	T(ADD(si, 0x0D));	// 1405 add     si, 0Dh ;~ 01C2:0685
cs=0x1c2;eip=0x000688; 	X(INC(byte_148ab));	// 1406 inc     byte_148AB ;~ 01C2:0688
cs=0x1c2;eip=0x00068c; 	T(CMP(byte_148ab, 4));	// 1407 cmp     byte_148AB, 4 ;~ 01C2:068C
cs=0x1c2;eip=0x000691; 	J(JC(loc_10856));	// 1408 jb      short loc_10856 ;~ 01C2:0691
cs=0x1c2;eip=0x000693; 	T(CLC);	// 1409 clc ;~ 01C2:0693
cs=0x1c2;eip=0x000694; 	R(RETN(0));	// 1410 retn ;~ 01C2:0694
loc_10895:
	// 4476 
cs=0x1c2;eip=0x000695; 	T(MOV(cl, 3));	// 1414 mov     cl, 3 ;~ 01C2:0695
cs=0x1c2;eip=0x000697; 	T(MOV(ax, word_14b10));	// 1415 mov     ax, word_14B10 ;~ 01C2:0697
cs=0x1c2;eip=0x00069a; 	T(SAR(ax, cl));	// 1416 sar     ax, cl ;~ 01C2:069A
cs=0x1c2;eip=0x00069c; 	X(MOV(word_148a3, ax));	// 1417 mov     word_148A3, ax ;~ 01C2:069C
cs=0x1c2;eip=0x00069f; 	T(MOV(ax, word_14b12));	// 1418 mov     ax, word_14B12 ;~ 01C2:069F
cs=0x1c2;eip=0x0006a2; 	T(SAR(ax, cl));	// 1419 sar     ax, cl ;~ 01C2:06A2
cs=0x1c2;eip=0x0006a4; 	X(MOV(word_148a5, ax));	// 1420 mov     word_148A5, ax ;~ 01C2:06A4
cs=0x1c2;eip=0x0006a7; 	T(MOV(ax, word_14afc));	// 1421 mov     ax, word_14AFC ;~ 01C2:06A7
cs=0x1c2;eip=0x0006aa; 	T(SAR(ax, cl));	// 1422 sar     ax, cl ;~ 01C2:06AA
cs=0x1c2;eip=0x0006ac; 	X(MOV(word_148a7, ax));	// 1423 mov     word_148A7, ax ;~ 01C2:06AC
cs=0x1c2;eip=0x0006af; 	T(MOV(ax, word_14afe));	// 1424 mov     ax, word_14AFE ;~ 01C2:06AF
cs=0x1c2;eip=0x0006b2; 	T(SAR(ax, cl));	// 1425 sar     ax, cl ;~ 01C2:06B2
cs=0x1c2;eip=0x0006b4; 	X(MOV(word_148a9, ax));	// 1426 mov     word_148A9, ax ;~ 01C2:06B4
cs=0x1c2;eip=0x0006b7; 	T(XOR(bx, bx));	// 1427 xor     bx, bx ;~ 01C2:06B7
cs=0x1c2;eip=0x0006b9; 	T(MOV(dx, bx));	// 1428 mov     dx, bx ;~ 01C2:06B9
cs=0x1c2;eip=0x0006bb; 	X(MOV(byte_148ad, 0));	// 1429 mov     byte_148AD, 0 ;~ 01C2:06BB
cs=0x1c2;eip=0x0006c0; 	X(MOV(word_148ae, 0x0FFFF));	// 1430 mov     word_148AE, 0FFFFh ;~ 01C2:06C0
cs=0x1c2;eip=0x0006c6; 	T(MOV(bp, *(dw*)(raddr(ds,si+1))));	// 1431 mov     bp, [si+1] ;~ 01C2:06C6
cs=0x1c2;eip=0x0006c9; 	T(MOV(di, *(dw*)(raddr(ds,si+3))));	// 1432 mov     di, [si+3] ;~ 01C2:06C9
loc_108cc:
	// 4477 
cs=0x1c2;eip=0x0006cc; 	T(MOV(cx, bp));	// 1435 mov     cx, bp ;~ 01C2:06CC
cs=0x1c2;eip=0x0006ce; 	T(SUB(cx, bx));	// 1436 sub     cx, bx ;~ 01C2:06CE
cs=0x1c2;eip=0x0006d0; 	J(JNS(loc_108d4));	// 1437 jns     short loc_108D4 ;~ 01C2:06D0
cs=0x1c2;eip=0x0006d2; 	T(NEG(cx));	// 1438 neg     cx ;~ 01C2:06D2
loc_108d4:
	// 4478 
cs=0x1c2;eip=0x0006d4; 	T(MOV(ax, di));	// 1441 mov     ax, di ;~ 01C2:06D4
cs=0x1c2;eip=0x0006d6; 	T(SUB(ax, dx));	// 1442 sub     ax, dx ;~ 01C2:06D6
cs=0x1c2;eip=0x0006d8; 	J(JNS(loc_108dc));	// 1443 jns     short loc_108DC ;~ 01C2:06D8
cs=0x1c2;eip=0x0006da; 	T(NEG(ax));	// 1444 neg     ax ;~ 01C2:06DA
loc_108dc:
	// 4479 
cs=0x1c2;eip=0x0006dc; 	T(CMP(ax, cx));	// 1447 cmp     ax, cx ;~ 01C2:06DC
cs=0x1c2;eip=0x0006de; 	J(JC(loc_108e4));	// 1448 jb      short loc_108E4 ;~ 01C2:06DE
cs=0x1c2;eip=0x0006e0; 	T(SHR(cx, 1));	// 1449 shr     cx, 1 ;~ 01C2:06E0
cs=0x1c2;eip=0x0006e2; 	J(JMP(loc_108e6));	// 1450 jmp     short loc_108E6 ;~ 01C2:06E2
loc_108e4:
	// 4480 
cs=0x1c2;eip=0x0006e4; 	T(SHR(ax, 1));	// 1454 shr     ax, 1 ;~ 01C2:06E4
loc_108e6:
	// 4481 
cs=0x1c2;eip=0x0006e6; 	T(ADD(ax, cx));	// 1457 add     ax, cx ;~ 01C2:06E6
cs=0x1c2;eip=0x0006e8; 	T(CMP(ax, word_14872));	// 1458 cmp     ax, word_14872 ;~ 01C2:06E8
cs=0x1c2;eip=0x0006ec; 	J(JC(loc_10913));	// 1459 jb      short loc_10913 ;~ 01C2:06EC
cs=0x1c2;eip=0x0006ee; 	T(CMP(ax, word_148ae));	// 1460 cmp     ax, word_148AE ;~ 01C2:06EE
cs=0x1c2;eip=0x0006f2; 	J(JA(loc_10912));	// 1461 ja      short loc_10912 ;~ 01C2:06F2
cs=0x1c2;eip=0x0006f4; 	X(MOV(word_148ae, ax));	// 1462 mov     word_148AE, ax ;~ 01C2:06F4
cs=0x1c2;eip=0x0006f7; 	T(ADD(bx, word_148a7));	// 1463 add     bx, word_148A7 ;~ 01C2:06F7
cs=0x1c2;eip=0x0006fb; 	T(ADD(dx, word_148a9));	// 1464 add     dx, word_148A9 ;~ 01C2:06FB
cs=0x1c2;eip=0x0006ff; 	T(ADD(bp, word_148a3));	// 1465 add     bp, word_148A3 ;~ 01C2:06FF
cs=0x1c2;eip=0x000703; 	T(ADD(di, word_148a5));	// 1466 add     di, word_148A5 ;~ 01C2:0703
cs=0x1c2;eip=0x000707; 	X(INC(byte_148ad));	// 1467 inc     byte_148AD ;~ 01C2:0707
cs=0x1c2;eip=0x00070b; 	T(CMP(byte_148ad, 8));	// 1468 cmp     byte_148AD, 8 ;~ 01C2:070B
cs=0x1c2;eip=0x000710; 	J(JC(loc_108cc));	// 1469 jb      short loc_108CC ;~ 01C2:0710
loc_10912:
	// 4482 
cs=0x1c2;eip=0x000712; 	T(CLC);	// 1472 clc ;~ 01C2:0712
loc_10913:
	// 4483 
cs=0x1c2;eip=0x000713; 	T(SUB(bx, word_148a7));	// 1475 sub     bx, word_148A7 ;~ 01C2:0713
cs=0x1c2;eip=0x000717; 	X(MOV(word_14afc, bx));	// 1476 mov     word_14AFC, bx ;~ 01C2:0717
cs=0x1c2;eip=0x00071b; 	T(SUB(dx, word_148a9));	// 1477 sub     dx, word_148A9 ;~ 01C2:071B
cs=0x1c2;eip=0x00071f; 	X(MOV(word_14afe, dx));	// 1478 mov     word_14AFE, dx ;~ 01C2:071F
cs=0x1c2;eip=0x000723; 	T(TEST(word_14888, 0x0FFFF));	// 1479 test    word_14888, 0FFFFh ;~ 01C2:0723
cs=0x1c2;eip=0x000729; 	J(JNZ(loc_10935));	// 1480 jnz     short loc_10935 ;~ 01C2:0729
cs=0x1c2;eip=0x00072b; 	X(MOV(word_14886, si));	// 1481 mov     word_14886, si ;~ 01C2:072B
cs=0x1c2;eip=0x00072f; 	X(MOV(word_14888, 3));	// 1482 mov     word_14888, 3 ;~ 01C2:072F
loc_10935:
	// 4484 
cs=0x1c2;eip=0x000735; 	T(STC);	// 1485 stc ;~ 01C2:0735
cs=0x1c2;eip=0x000736; 	R(RETN(0));	// 1486 retn ;~ 01C2:0736

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_10856: 	goto loc_10856;
        case m2c::kloc_1086b: 	goto loc_1086b;
        case m2c::kloc_10874: 	goto loc_10874;
        case m2c::kloc_1087c: 	goto loc_1087c;
        case m2c::kloc_1087e: 	goto loc_1087e;
        case m2c::kloc_10885: 	goto loc_10885;
        case m2c::kloc_10895: 	goto loc_10895;
        case m2c::kloc_108cc: 	goto loc_108cc;
        case m2c::kloc_108d4: 	goto loc_108d4;
        case m2c::kloc_108dc: 	goto loc_108dc;
        case m2c::kloc_108e4: 	goto loc_108e4;
        case m2c::kloc_108e6: 	goto loc_108e6;
        case m2c::kloc_10912: 	goto loc_10912;
        case m2c::kloc_10913: 	goto loc_10913;
        case m2c::kloc_10935: 	goto loc_10935;
        case m2c::kret_1c2_649: 	goto ret_1c2_649;
        case m2c::ksub_10846: 	goto sub_10846;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_10937(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_10937:
    _begin:
cs=0x1c2;eip=0x000737; 	T(TEST(byte_1488c, 0x0FF));	// 1494 test    byte_1488C, 0FFh ;~ 01C2:0737
ret_1c2_73c:
	// 4485 
cs=0x1c2;eip=0x00073c; 	J(JZ(loc_10972));	// 1495 jz      short loc_10972 ;~ 01C2:073C
cs=0x1c2;eip=0x00073e; 	X(DEC(byte_1488c));	// 1496 dec     byte_1488C ;~ 01C2:073E
cs=0x1c2;eip=0x000742; 	J(JNZ(loc_1094b));	// 1497 jnz     short loc_1094B ;~ 01C2:0742
cs=0x1c2;eip=0x000744; 	X(MOV(byte_14a26, 0));	// 1498 mov     byte_14A26, 0 ;~ 01C2:0744
cs=0x1c2;eip=0x000749; 	J(JMP(loc_10972));	// 1499 jmp     short loc_10972 ;~ 01C2:0749
loc_1094b:
	// 4486 
cs=0x1c2;eip=0x00074b; 	J(CALL(sub_10a8f,0));	// 1503 call    sub_10A8F ;~ 01C2:074B
cs=0x1c2;eip=0x00074e; 	J(JNC(loc_1095c));	// 1504 jnb     short loc_1095C ;~ 01C2:074E
cs=0x1c2;eip=0x000750; 	X(MOV(byte_1488c, 0));	// 1505 mov     byte_1488C, 0 ;~ 01C2:0750
cs=0x1c2;eip=0x000755; 	X(MOV(byte_14a26, 0));	// 1506 mov     byte_14A26, 0 ;~ 01C2:0755
cs=0x1c2;eip=0x00075a; 	J(JMP(loc_10972));	// 1507 jmp     short loc_10972 ;~ 01C2:075A
loc_1095c:
	// 4487 
cs=0x1c2;eip=0x00075c; 	T(MOV(si, 0x3E6));	// 1511 mov     si, 3E6h ;~ 01C2:075C
cs=0x1c2;eip=0x00075f; 	T(MOV(ax, word_1488f));	// 1512 mov     ax, word_1488F ;~ 01C2:075F
cs=0x1c2;eip=0x000762; 	X(ADD(*(dw*)(raddr(ds,si+1)), ax));	// 1513 add     [si+1], ax ;~ 01C2:0762
cs=0x1c2;eip=0x000765; 	T(MOV(ax, word_14891));	// 1514 mov     ax, word_14891 ;~ 01C2:0765
cs=0x1c2;eip=0x000768; 	X(ADD(*(dw*)(raddr(ds,si+3)), ax));	// 1515 add     [si+3], ax ;~ 01C2:0768
cs=0x1c2;eip=0x00076b; 	T(INC(si));	// 1516 inc     si ;~ 01C2:076B
cs=0x1c2;eip=0x00076c; 	J(CALL(sub_13a90,0));	// 1517 call    sub_13A90 ;~ 01C2:076C
cs=0x1c2;eip=0x00076f; 	X(MOV(*(dw*)(raddr(ds,si+0x0A)), ax));	// 1518 mov     [si+0Ah], ax ;~ 01C2:076F
loc_10972:
	// 4488 
cs=0x1c2;eip=0x000772; 	T(TEST(byte_1488b, 0x0FF));	// 1522 test    byte_1488B, 0FFh ;~ 01C2:0772
cs=0x1c2;eip=0x000777; 	J(JZ(locret_109ac));	// 1523 jz      short locret_109AC ;~ 01C2:0777
cs=0x1c2;eip=0x000779; 	X(DEC(byte_1488b));	// 1524 dec     byte_1488B ;~ 01C2:0779
cs=0x1c2;eip=0x00077d; 	J(JNZ(loc_10985));	// 1525 jnz     short loc_10985 ;~ 01C2:077D
cs=0x1c2;eip=0x00077f; 	X(MOV(byte_14a33, 0));	// 1526 mov     byte_14A33, 0 ;~ 01C2:077F
cs=0x1c2;eip=0x000784; 	R(RETN(0));	// 1527 retn ;~ 01C2:0784
loc_10985:
	// 4489 
cs=0x1c2;eip=0x000785; 	J(CALL(sub_10cd3,0));	// 1531 call    sub_10CD3 ;~ 01C2:0785
cs=0x1c2;eip=0x000788; 	J(JNC(loc_10996));	// 1532 jnb     short loc_10996 ;~ 01C2:0788
cs=0x1c2;eip=0x00078a; 	X(MOV(byte_1488b, 0));	// 1533 mov     byte_1488B, 0 ;~ 01C2:078A
cs=0x1c2;eip=0x00078f; 	X(MOV(byte_14a33, 0));	// 1534 mov     byte_14A33, 0 ;~ 01C2:078F
cs=0x1c2;eip=0x000794; 	J(JMP(locret_109ac));	// 1535 jmp     short locret_109AC ;~ 01C2:0794
loc_10996:
	// 4490 
cs=0x1c2;eip=0x000796; 	T(MOV(si, 0x3F3));	// 1539 mov     si, 3F3h ;~ 01C2:0796
cs=0x1c2;eip=0x000799; 	T(MOV(ax, word_1489b));	// 1540 mov     ax, word_1489B ;~ 01C2:0799
cs=0x1c2;eip=0x00079c; 	X(ADD(*(dw*)(raddr(ds,si+1)), ax));	// 1541 add     [si+1], ax ;~ 01C2:079C
cs=0x1c2;eip=0x00079f; 	T(MOV(ax, word_1489d));	// 1542 mov     ax, word_1489D ;~ 01C2:079F
cs=0x1c2;eip=0x0007a2; 	X(ADD(*(dw*)(raddr(ds,si+3)), ax));	// 1543 add     [si+3], ax ;~ 01C2:07A2
cs=0x1c2;eip=0x0007a5; 	T(INC(si));	// 1544 inc     si ;~ 01C2:07A5
cs=0x1c2;eip=0x0007a6; 	J(CALL(sub_13a90,0));	// 1545 call    sub_13A90 ;~ 01C2:07A6
cs=0x1c2;eip=0x0007a9; 	X(MOV(*(dw*)(raddr(ds,si+0x0A)), ax));	// 1546 mov     [si+0Ah], ax ;~ 01C2:07A9
locret_109ac:
	// 4491 
cs=0x1c2;eip=0x0007ac; 	R(RETN(0));	// 1550 retn ;~ 01C2:07AC

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_1094b: 	goto loc_1094b;
        case m2c::kloc_1095c: 	goto loc_1095c;
        case m2c::kloc_10972: 	goto loc_10972;
        case m2c::kloc_10985: 	goto loc_10985;
        case m2c::kloc_10996: 	goto loc_10996;
        case m2c::klocret_109ac: 	goto locret_109ac;
        case m2c::kret_1c2_73c: 	goto ret_1c2_73c;
        case m2c::ksub_10937: 	goto sub_10937;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_109ad(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_109ad:
    _begin:
cs=0x1c2;eip=0x0007ad; 	T(TEST(byte_1488b, 0x0FF));	// 1558 test    byte_1488B, 0FFh ;~ 01C2:07AD
ret_1c2_7b2:
	// 4492 
cs=0x1c2;eip=0x0007b2; 	J(JZ(loc_109b5));	// 1559 jz      short loc_109B5 ;~ 01C2:07B2
cs=0x1c2;eip=0x0007b4; 	R(RETN(0));	// 1560 retn ;~ 01C2:07B4
loc_109b5:
	// 4493 
cs=0x1c2;eip=0x0007b5; 	T(TEST(byte_1475b, 0x0FF));	// 1564 test    byte_1475B, 0FFh ;~ 01C2:07B5
cs=0x1c2;eip=0x0007ba; 	J(JZ(loc_109bd));	// 1565 jz      short loc_109BD ;~ 01C2:07BA
cs=0x1c2;eip=0x0007bc; 	R(RETN(0));	// 1566 retn ;~ 01C2:07BC
loc_109bd:
	// 4494 
cs=0x1c2;eip=0x0007bd; 	T(TEST(byte_148f8, 0x0FF));	// 1570 test    byte_148F8, 0FFh ;~ 01C2:07BD
cs=0x1c2;eip=0x0007c2; 	J(JZ(loc_109c5));	// 1571 jz      short loc_109C5 ;~ 01C2:07C2
cs=0x1c2;eip=0x0007c4; 	R(RETN(0));	// 1572 retn ;~ 01C2:07C4
loc_109c5:
	// 4495 
cs=0x1c2;eip=0x0007c5; 	T(MOV(di, 0x3F3));	// 1576 mov     di, 3F3h ;~ 01C2:07C5
cs=0x1c2;eip=0x0007c8; 	T(MOV(al, 0x0F));	// 1577 mov     al, 0Fh ;~ 01C2:07C8
cs=0x1c2;eip=0x0007ca; 	X(STOSB);	// 1578 stosb ;~ 01C2:07CA
cs=0x1c2;eip=0x0007cb; 	X(PUSH(si));	// 1579 push    si ;~ 01C2:07CB
cs=0x1c2;eip=0x0007cc; 	T(MOV(si, 0x3B2));	// 1580 mov     si, 3B2h ;~ 01C2:07CC
cs=0x1c2;eip=0x0007cf; 	T(TEST(*(raddr(ds,si)), 0x0FF));	// 1581 test    byte ptr [si], 0FFh ;~ 01C2:07CF
cs=0x1c2;eip=0x0007d2; 	J(JNZ(loc_109dc));	// 1582 jnz     short loc_109DC ;~ 01C2:07D2
cs=0x1c2;eip=0x0007d4; 	T(ADD(si, 0x0D));	// 1583 add     si, 0Dh ;~ 01C2:07D4
cs=0x1c2;eip=0x0007d7; 	T(TEST(*(raddr(ds,si)), 0x0FF));	// 1584 test    byte ptr [si], 0FFh ;~ 01C2:07D7
cs=0x1c2;eip=0x0007da; 	J(JZ(loc_10a29));	// 1585 jz      short loc_10A29 ;~ 01C2:07DA
loc_109dc:
	// 4496 
cs=0x1c2;eip=0x0007dc; 	T(MOV(ax, *(dw*)(raddr(ds,si+9))));	// 1588 mov     ax, [si+9] ;~ 01C2:07DC
cs=0x1c2;eip=0x0007df; 	T(MOV(cx, 0x0A00));	// 1589 mov     cx, 0A00h ;~ 01C2:07DF
cs=0x1c2;eip=0x0007e2; 	J(CALL(sub_13bc7,0));	// 1590 call    sub_13BC7 ;~ 01C2:07E2
cs=0x1c2;eip=0x0007e5; 	X(MOV(word_1489b, dx));	// 1591 mov     word_1489B, dx ;~ 01C2:07E5
cs=0x1c2;eip=0x0007e9; 	T(MOV(cl, 3));	// 1592 mov     cl, 3 ;~ 01C2:07E9
cs=0x1c2;eip=0x0007eb; 	T(SAR(dx, cl));	// 1593 sar     dx, cl ;~ 01C2:07EB
cs=0x1c2;eip=0x0007ed; 	X(MOV(word_1489f, dx));	// 1594 mov     word_1489F, dx ;~ 01C2:07ED
cs=0x1c2;eip=0x0007f1; 	T(MOV(cx, 0x0A00));	// 1595 mov     cx, 0A00h ;~ 01C2:07F1
cs=0x1c2;eip=0x0007f4; 	T(MOV(ax, *(dw*)(raddr(ds,si+9))));	// 1596 mov     ax, [si+9] ;~ 01C2:07F4
cs=0x1c2;eip=0x0007f7; 	J(CALL(sub_13bad,0));	// 1597 call    sub_13BAD ;~ 01C2:07F7
cs=0x1c2;eip=0x0007fa; 	X(MOV(word_1489d, dx));	// 1598 mov     word_1489D, dx ;~ 01C2:07FA
cs=0x1c2;eip=0x0007fe; 	T(MOV(cl, 3));	// 1599 mov     cl, 3 ;~ 01C2:07FE
cs=0x1c2;eip=0x000800; 	T(SAR(dx, cl));	// 1600 sar     dx, cl ;~ 01C2:0800
cs=0x1c2;eip=0x000802; 	X(MOV(word_148a1, dx));	// 1601 mov     word_148A1, dx ;~ 01C2:0802
cs=0x1c2;eip=0x000806; 	T(MOV(ax, *(dw*)(raddr(ds,si+1))));	// 1602 mov     ax, [si+1] ;~ 01C2:0806
cs=0x1c2;eip=0x000809; 	X(STOSW);	// 1603 stosw ;~ 01C2:0809
cs=0x1c2;eip=0x00080a; 	T(MOV(ax, *(dw*)(raddr(ds,si+3))));	// 1604 mov     ax, [si+3] ;~ 01C2:080A
cs=0x1c2;eip=0x00080d; 	X(STOSW);	// 1605 stosw ;~ 01C2:080D
cs=0x1c2;eip=0x00080e; 	T(ADD(di, 2));	// 1606 add     di, 2 ;~ 01C2:080E
cs=0x1c2;eip=0x000811; 	T(MOV(ax, 0x0A00));	// 1607 mov     ax, 0A00h ;~ 01C2:0811
cs=0x1c2;eip=0x000814; 	X(STOSW);	// 1608 stosw ;~ 01C2:0814
cs=0x1c2;eip=0x000815; 	T(MOV(ax, *(dw*)(raddr(ds,si+9))));	// 1609 mov     ax, [si+9] ;~ 01C2:0815
cs=0x1c2;eip=0x000818; 	X(STOSW);	// 1610 stosw ;~ 01C2:0818
cs=0x1c2;eip=0x000819; 	T(XOR(ax, ax));	// 1611 xor     ax, ax ;~ 01C2:0819
cs=0x1c2;eip=0x00081b; 	X(STOSW);	// 1612 stosw ;~ 01C2:081B
cs=0x1c2;eip=0x00081c; 	X(MOV(byte_1488b, 0x0D));	// 1613 mov     byte_1488B, 0Dh ;~ 01C2:081C
cs=0x1c2;eip=0x000821; 	X(MOV(byte_1488a, 5));	// 1614 mov     byte_1488A, 5 ;~ 01C2:0821
cs=0x1c2;eip=0x000826; 	J(CALL(sub_10ef0,0));	// 1615 call    sub_10EF0 ;~ 01C2:0826
loc_10a29:
	// 4497 
cs=0x1c2;eip=0x000829; 	X(POP(si));	// 1618 pop     si ;~ 01C2:0829
cs=0x1c2;eip=0x00082a; 	T(MOV(al, 0x0A));	// 1619 mov     al, 0Ah ;~ 01C2:082A
cs=0x1c2;eip=0x00082c; 	J(CALL(sub_14015,0));	// 1620 call    sub_14015 ;~ 01C2:082C
cs=0x1c2;eip=0x00082f; 	R(RETN(0));	// 1621 retn ;~ 01C2:082F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_109b5: 	goto loc_109b5;
        case m2c::kloc_109bd: 	goto loc_109bd;
        case m2c::kloc_109c5: 	goto loc_109c5;
        case m2c::kloc_109dc: 	goto loc_109dc;
        case m2c::kloc_10a29: 	goto loc_10a29;
        case m2c::kret_1c2_7b2: 	goto ret_1c2_7b2;
        case m2c::ksub_109ad: 	goto sub_109ad;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_10a30(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_10a30:
    _begin:
cs=0x1c2;eip=0x000830; 	T(TEST(byte_1488c, 0x0FF));	// 1629 test    byte_1488C, 0FFh ;~ 01C2:0830
ret_1c2_835:
	// 4498 
cs=0x1c2;eip=0x000835; 	J(JZ(loc_10a38));	// 1630 jz      short loc_10A38 ;~ 01C2:0835
cs=0x1c2;eip=0x000837; 	R(RETN(0));	// 1631 retn ;~ 01C2:0837
loc_10a38:
	// 4499 
cs=0x1c2;eip=0x000838; 	T(MOV(di, 0x3E6));	// 1635 mov     di, 3E6h ;~ 01C2:0838
cs=0x1c2;eip=0x00083b; 	T(MOV(al, 0x0E));	// 1636 mov     al, 0Eh ;~ 01C2:083B
cs=0x1c2;eip=0x00083d; 	X(STOSB);	// 1637 stosb ;~ 01C2:083D
cs=0x1c2;eip=0x00083e; 	T(MOV(cx, 0x0A00));	// 1638 mov     cx, 0A00h ;~ 01C2:083E
cs=0x1c2;eip=0x000841; 	T(MOV(ax, word_14af6));	// 1639 mov     ax, word_14AF6 ;~ 01C2:0841
cs=0x1c2;eip=0x000844; 	J(CALL(sub_13bc7,0));	// 1640 call    sub_13BC7 ;~ 01C2:0844
cs=0x1c2;eip=0x000847; 	X(MOV(word_1488f, dx));	// 1641 mov     word_1488F, dx ;~ 01C2:0847
cs=0x1c2;eip=0x00084b; 	T(MOV(cl, 3));	// 1642 mov     cl, 3 ;~ 01C2:084B
cs=0x1c2;eip=0x00084d; 	T(SAR(dx, cl));	// 1643 sar     dx, cl ;~ 01C2:084D
cs=0x1c2;eip=0x00084f; 	X(MOV(word_14893, dx));	// 1644 mov     word_14893, dx ;~ 01C2:084F
cs=0x1c2;eip=0x000853; 	T(MOV(ax, dx));	// 1645 mov     ax, dx ;~ 01C2:0853
cs=0x1c2;eip=0x000855; 	X(STOSW);	// 1646 stosw ;~ 01C2:0855
cs=0x1c2;eip=0x000856; 	T(MOV(cx, 0x0A00));	// 1647 mov     cx, 0A00h ;~ 01C2:0856
cs=0x1c2;eip=0x000859; 	T(MOV(ax, word_14af6));	// 1648 mov     ax, word_14AF6 ;~ 01C2:0859
cs=0x1c2;eip=0x00085c; 	J(CALL(sub_13bad,0));	// 1649 call    sub_13BAD ;~ 01C2:085C
cs=0x1c2;eip=0x00085f; 	X(MOV(word_14891, dx));	// 1650 mov     word_14891, dx ;~ 01C2:085F
cs=0x1c2;eip=0x000863; 	T(MOV(cl, 3));	// 1651 mov     cl, 3 ;~ 01C2:0863
cs=0x1c2;eip=0x000865; 	T(SAR(dx, cl));	// 1652 sar     dx, cl ;~ 01C2:0865
cs=0x1c2;eip=0x000867; 	X(MOV(word_14895, dx));	// 1653 mov     word_14895, dx ;~ 01C2:0867
cs=0x1c2;eip=0x00086b; 	T(MOV(ax, dx));	// 1654 mov     ax, dx ;~ 01C2:086B
cs=0x1c2;eip=0x00086d; 	X(STOSW);	// 1655 stosw ;~ 01C2:086D
cs=0x1c2;eip=0x00086e; 	T(ADD(di, 2));	// 1656 add     di, 2 ;~ 01C2:086E
cs=0x1c2;eip=0x000871; 	T(MOV(ax, 0x0A00));	// 1657 mov     ax, 0A00h ;~ 01C2:0871
cs=0x1c2;eip=0x000874; 	X(STOSW);	// 1658 stosw ;~ 01C2:0874
cs=0x1c2;eip=0x000875; 	T(MOV(ax, word_14af6));	// 1659 mov     ax, word_14AF6 ;~ 01C2:0875
cs=0x1c2;eip=0x000878; 	X(STOSW);	// 1660 stosw ;~ 01C2:0878
cs=0x1c2;eip=0x000879; 	T(XOR(ax, ax));	// 1661 xor     ax, ax ;~ 01C2:0879
cs=0x1c2;eip=0x00087b; 	X(STOSW);	// 1662 stosw ;~ 01C2:087B
cs=0x1c2;eip=0x00087c; 	X(MOV(byte_1488c, 0x0D));	// 1663 mov     byte_1488C, 0Dh ;~ 01C2:087C
cs=0x1c2;eip=0x000881; 	X(MOV(byte_1488a, 4));	// 1664 mov     byte_1488A, 4 ;~ 01C2:0881
cs=0x1c2;eip=0x000886; 	J(CALL(sub_10ef0,0));	// 1665 call    sub_10EF0 ;~ 01C2:0886
cs=0x1c2;eip=0x000889; 	T(MOV(al, 0x0A));	// 1666 mov     al, 0Ah ;~ 01C2:0889
cs=0x1c2;eip=0x00088b; 	J(CALL(sub_14015,0));	// 1667 call    sub_14015 ;~ 01C2:088B
cs=0x1c2;eip=0x00088e; 	R(RETN(0));	// 1668 retn ;~ 01C2:088E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_10a38: 	goto loc_10a38;
        case m2c::kret_1c2_835: 	goto ret_1c2_835;
        case m2c::ksub_10a30: 	goto sub_10a30;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_10a8f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_10a8f:
    _begin:
cs=0x1c2;eip=0x00088f; 	X(MOV(byte_148b0, 0));	// 1676 mov     byte_148B0, 0 ;~ 01C2:088F
ret_1c2_894:
	// 4500 
cs=0x1c2;eip=0x000894; 	T(MOV(si, 0x3E6));	// 1677 mov     si, 3E6h ;~ 01C2:0894
cs=0x1c2;eip=0x000897; 	T(MOV(bx, *(dw*)(raddr(ds,si+1))));	// 1678 mov     bx, [si+1] ;~ 01C2:0897
cs=0x1c2;eip=0x00089a; 	T(MOV(dx, *(dw*)(raddr(ds,si+3))));	// 1679 mov     dx, [si+3] ;~ 01C2:089A
cs=0x1c2;eip=0x00089d; 	T(MOV(si, 0x3B2));	// 1680 mov     si, 3B2h ;~ 01C2:089D
cs=0x1c2;eip=0x0008a0; 	X(MOV(byte_148ab, 4));	// 1681 mov     byte_148AB, 4 ;~ 01C2:08A0
loc_10aa5:
	// 4501 
cs=0x1c2;eip=0x0008a5; 	T(MOV(al, *(raddr(ds,si))));	// 1684 mov     al, [si] ;~ 01C2:08A5
cs=0x1c2;eip=0x0008a7; 	T(OR(al, al));	// 1685 or      al, al ;~ 01C2:08A7
cs=0x1c2;eip=0x0008a9; 	J(JZ(loc_10ac9));	// 1686 jz      short loc_10AC9 ;~ 01C2:08A9
cs=0x1c2;eip=0x0008ab; 	T(MOV(ax, *(dw*)(raddr(ds,si+1))));	// 1687 mov     ax, [si+1] ;~ 01C2:08AB
cs=0x1c2;eip=0x0008ae; 	T(SUB(ax, bx));	// 1688 sub     ax, bx ;~ 01C2:08AE
cs=0x1c2;eip=0x0008b0; 	J(JNS(loc_10ab4));	// 1689 jns     short loc_10AB4 ;~ 01C2:08B0
cs=0x1c2;eip=0x0008b2; 	T(NEG(ax));	// 1690 neg     ax ;~ 01C2:08B2
loc_10ab4:
	// 4502 
cs=0x1c2;eip=0x0008b4; 	T(CMP(ax, word_1487c));	// 1693 cmp     ax, word_1487C ;~ 01C2:08B4
cs=0x1c2;eip=0x0008b8; 	J(JNC(loc_10ac9));	// 1694 jnb     short loc_10AC9 ;~ 01C2:08B8
cs=0x1c2;eip=0x0008ba; 	T(MOV(ax, *(dw*)(raddr(ds,si+3))));	// 1695 mov     ax, [si+3] ;~ 01C2:08BA
cs=0x1c2;eip=0x0008bd; 	T(SUB(ax, dx));	// 1696 sub     ax, dx ;~ 01C2:08BD
cs=0x1c2;eip=0x0008bf; 	J(JNS(loc_10ac3));	// 1697 jns     short loc_10AC3 ;~ 01C2:08BF
cs=0x1c2;eip=0x0008c1; 	T(NEG(ax));	// 1698 neg     ax ;~ 01C2:08C1
loc_10ac3:
	// 4503 
cs=0x1c2;eip=0x0008c3; 	T(CMP(ax, word_1487c));	// 1701 cmp     ax, word_1487C ;~ 01C2:08C3
cs=0x1c2;eip=0x0008c7; 	J(JC(loc_10aef));	// 1702 jb      short loc_10AEF ;~ 01C2:08C7
loc_10ac9:
	// 4504 
cs=0x1c2;eip=0x0008c9; 	T(ADD(si, 0x0D));	// 1706 add     si, 0Dh ;~ 01C2:08C9
cs=0x1c2;eip=0x0008cc; 	X(DEC(byte_148ab));	// 1707 dec     byte_148AB ;~ 01C2:08CC
cs=0x1c2;eip=0x0008d0; 	J(JZ(loc_10ad7));	// 1708 jz      short loc_10AD7 ;~ 01C2:08D0
cs=0x1c2;eip=0x0008d2; 	J(JNS(loc_10aa5));	// 1709 jns     short loc_10AA5 ;~ 01C2:08D2
cs=0x1c2;eip=0x0008d4; 	J(JMP(loc_10ae4));	// 1710 jmp     short loc_10AE4 ;~ 01C2:08D4
loc_10ad7:
	// 4505 
cs=0x1c2;eip=0x0008d7; 	J(CALL(sub_10c9b,0));	// 1716 call    sub_10C9B ;~ 01C2:08D7
cs=0x1c2;eip=0x0008da; 	J(JNC(loc_10ae4));	// 1717 jnb     short loc_10AE4 ;~ 01C2:08DA
cs=0x1c2;eip=0x0008dc; 	J(CALL(sub_10c17,0));	// 1718 call    sub_10C17 ;~ 01C2:08DC
cs=0x1c2;eip=0x0008df; 	J(JNC(loc_10ae4));	// 1719 jnb     short loc_10AE4 ;~ 01C2:08DF
cs=0x1c2;eip=0x0008e1; 	J(JMP(loc_10b76));	// 1720 jmp     loc_10B76 ;~ 01C2:08E1
loc_10ae4:
	// 4506 
cs=0x1c2;eip=0x0008e4; 	T(TEST(byte_148b0, 0x0FF));	// 1725 test    byte_148B0, 0FFh ;~ 01C2:08E4
cs=0x1c2;eip=0x0008e9; 	J(JZ(loc_10aed));	// 1726 jz      short loc_10AED ;~ 01C2:08E9
cs=0x1c2;eip=0x0008eb; 	T(STC);	// 1727 stc ;~ 01C2:08EB
cs=0x1c2;eip=0x0008ec; 	R(RETN(0));	// 1728 retn ;~ 01C2:08EC
loc_10aed:
	// 4507 
cs=0x1c2;eip=0x0008ed; 	T(CLC);	// 1732 clc ;~ 01C2:08ED
cs=0x1c2;eip=0x0008ee; 	R(RETN(0));	// 1733 retn ;~ 01C2:08EE
loc_10aef:
	// 4508 
cs=0x1c2;eip=0x0008ef; 	T(CMP(*(dw*)(raddr(ds,si+5)), 5));	// 1737 cmp     word ptr [si+5], 5 ;~ 01C2:08EF
cs=0x1c2;eip=0x0008f3; 	J(JNC(loc_10ac9));	// 1738 jnb     short loc_10AC9 ;~ 01C2:08F3
cs=0x1c2;eip=0x0008f5; 	T(MOV(cx, *(dw*)(raddr(ds,si+7))));	// 1739 mov     cx, [si+7] ;~ 01C2:08F5
cs=0x1c2;eip=0x0008f8; 	T(MOV(ax, *(dw*)(raddr(ds,si+9))));	// 1740 mov     ax, [si+9] ;~ 01C2:08F8
cs=0x1c2;eip=0x0008fb; 	J(CALL(sub_13bc7,0));	// 1741 call    sub_13BC7 ;~ 01C2:08FB
cs=0x1c2;eip=0x0008fe; 	T(MOV(cl, 3));	// 1742 mov     cl, 3 ;~ 01C2:08FE
cs=0x1c2;eip=0x000900; 	T(SAR(dx, cl));	// 1743 sar     dx, cl ;~ 01C2:0900
cs=0x1c2;eip=0x000902; 	X(MOV(word_148a3, dx));	// 1744 mov     word_148A3, dx ;~ 01C2:0902
cs=0x1c2;eip=0x000906; 	T(MOV(cx, *(dw*)(raddr(ds,si+7))));	// 1745 mov     cx, [si+7] ;~ 01C2:0906
cs=0x1c2;eip=0x000909; 	T(MOV(ax, *(dw*)(raddr(ds,si+9))));	// 1746 mov     ax, [si+9] ;~ 01C2:0909
cs=0x1c2;eip=0x00090c; 	J(CALL(sub_13bad,0));	// 1747 call    sub_13BAD ;~ 01C2:090C
cs=0x1c2;eip=0x00090f; 	T(MOV(cl, 3));	// 1748 mov     cl, 3 ;~ 01C2:090F
cs=0x1c2;eip=0x000911; 	T(SAR(dx, cl));	// 1749 sar     dx, cl ;~ 01C2:0911
cs=0x1c2;eip=0x000913; 	X(MOV(word_148a5, dx));	// 1750 mov     word_148A5, dx ;~ 01C2:0913
cs=0x1c2;eip=0x000917; 	T(MOV(di, 0x3E6));	// 1751 mov     di, 3E6h ;~ 01C2:0917
cs=0x1c2;eip=0x00091a; 	T(MOV(bx, *(dw*)(raddr(ds,di+1))));	// 1752 mov     bx, [di+1] ;~ 01C2:091A
cs=0x1c2;eip=0x00091d; 	T(MOV(dx, *(dw*)(raddr(ds,di+3))));	// 1753 mov     dx, [di+3] ;~ 01C2:091D
cs=0x1c2;eip=0x000920; 	J(CALL(sub_10ba0,0));	// 1754 call    sub_10BA0 ;~ 01C2:0920
cs=0x1c2;eip=0x000923; 	J(JNC(loc_10ac9));	// 1755 jnb     short loc_10AC9 ;~ 01C2:0923
cs=0x1c2;eip=0x000925; 	J(CALL(sub_10c9b,0));	// 1756 call    sub_10C9B ;~ 01C2:0925
cs=0x1c2;eip=0x000928; 	J(JNC(loc_10b2f));	// 1757 jnb     short loc_10B2F ;~ 01C2:0928
cs=0x1c2;eip=0x00092a; 	J(CALL(sub_10c17,0));	// 1758 call    sub_10C17 ;~ 01C2:092A
cs=0x1c2;eip=0x00092d; 	J(JC(loc_10b95));	// 1759 jb      short loc_10B95 ;~ 01C2:092D
loc_10b2f:
	// 4509 
cs=0x1c2;eip=0x00092f; 	T(MOV(al, 5));	// 1763 mov     al, 5 ;~ 01C2:092F
cs=0x1c2;eip=0x000931; 	T(SUB(al, byte_148ab));	// 1764 sub     al, byte_148AB ;~ 01C2:0931
cs=0x1c2;eip=0x000935; 	T(CMP(al, 4));	// 1765 cmp     al, 4 ;~ 01C2:0935
cs=0x1c2;eip=0x000937; 	J(JNZ(loc_10b40));	// 1766 jnz     short loc_10B40 ;~ 01C2:0937
cs=0x1c2;eip=0x000939; 	T(TEST(byte_14fb2, 0x0FF));	// 1767 test    byte_14FB2, 0FFh ;~ 01C2:0939
cs=0x1c2;eip=0x00093e; 	J(JNZ(loc_10ac9));	// 1768 jnz     short loc_10AC9 ;~ 01C2:093E
loc_10b40:
	// 4510 
cs=0x1c2;eip=0x000940; 	J(CALL(sub_10445,0));	// 1771 call    sub_10445 ;~ 01C2:0940
cs=0x1c2;eip=0x000943; 	T(CMP(byte_148ab, 3));	// 1772 cmp     byte_148AB, 3 ;~ 01C2:0943
cs=0x1c2;eip=0x000948; 	J(JC(loc_10b59));	// 1773 jb      short loc_10B59 ;~ 01C2:0948
cs=0x1c2;eip=0x00094a; 	X(MOV(byte_14fb0, 1));	// 1774 mov     byte_14FB0, 1 ;~ 01C2:094A
cs=0x1c2;eip=0x00094f; 	T(MOV(al, 0x0B));	// 1775 mov     al, 0Bh ;~ 01C2:094F
cs=0x1c2;eip=0x000951; 	J(CALL(sub_14015,0));	// 1776 call    sub_14015 ;~ 01C2:0951
cs=0x1c2;eip=0x000954; 	X(MOV(*(raddr(ds,si)), 0));	// 1777 mov     byte ptr [si], 0 ;~ 01C2:0954
cs=0x1c2;eip=0x000957; 	J(JMP(loc_10b76));	// 1778 jmp     short loc_10B76 ;~ 01C2:0957
loc_10b59:
	// 4511 
cs=0x1c2;eip=0x000959; 	T(CMP(byte_148ab, 1));	// 1782 cmp     byte_148AB, 1 ;~ 01C2:0959
cs=0x1c2;eip=0x00095e; 	J(JZ(loc_10b6f));	// 1783 jz      short loc_10B6F ;~ 01C2:095E
cs=0x1c2;eip=0x000960; 	T(MOV(al, 0x0B));	// 1784 mov     al, 0Bh ;~ 01C2:0960
cs=0x1c2;eip=0x000962; 	J(CALL(sub_14015,0));	// 1785 call    sub_14015 ;~ 01C2:0962
cs=0x1c2;eip=0x000965; 	X(MOV(byte_14fb1, 1));	// 1786 mov     byte_14FB1, 1 ;~ 01C2:0965
cs=0x1c2;eip=0x00096a; 	X(MOV(*(raddr(ds,si)), 0));	// 1787 mov     byte ptr [si], 0 ;~ 01C2:096A
cs=0x1c2;eip=0x00096d; 	J(JMP(loc_10b76));	// 1788 jmp     short loc_10B76 ;~ 01C2:096D
loc_10b6f:
	// 4512 
cs=0x1c2;eip=0x00096f; 	X(MOV(byte_14fb2, 0x0A));	// 1792 mov     byte_14FB2, 0Ah ;~ 01C2:096F
cs=0x1c2;eip=0x000974; 	J({;});	// 1793 jmp     short $+2 ;~ 01C2:0974
loc_10b76:
	// 4513 
cs=0x1c2;eip=0x000976; 	T(MOV(di, 0x3E6));	// 1798 mov     di, 3E6h ;~ 01C2:0976
cs=0x1c2;eip=0x000979; 	T(MOV(ax, *(dw*)(raddr(ds,di+1))));	// 1799 mov     ax, [di+1] ;~ 01C2:0979
cs=0x1c2;eip=0x00097c; 	X(MOV(word_15355, ax));	// 1800 mov     word_15355, ax ;~ 01C2:097C
cs=0x1c2;eip=0x00097f; 	T(MOV(ax, *(dw*)(raddr(ds,di+3))));	// 1801 mov     ax, [di+3] ;~ 01C2:097F
cs=0x1c2;eip=0x000982; 	X(MOV(word_15357, ax));	// 1802 mov     word_15357, ax ;~ 01C2:0982
cs=0x1c2;eip=0x000985; 	X(MOV(byte_15346, 1));	// 1803 mov     byte_15346, 1 ;~ 01C2:0985
cs=0x1c2;eip=0x00098a; 	J(CALL(sub_10e87,0));	// 1804 call    sub_10E87 ;~ 01C2:098A
cs=0x1c2;eip=0x00098d; 	X(MOV(byte_148b0, 0x0FF));	// 1805 mov     byte_148B0, 0FFh ;~ 01C2:098D
cs=0x1c2;eip=0x000992; 	J(JMP(loc_10ac9));	// 1806 jmp     loc_10AC9 ;~ 01C2:0992
loc_10b95:
	// 4514 
cs=0x1c2;eip=0x000995; 	T(MOV(al, byte_148ac));	// 1810 mov     al, byte_148AC ;~ 01C2:0995
cs=0x1c2;eip=0x000998; 	T(CMP(al, byte_148ad));	// 1811 cmp     al, byte_148AD ;~ 01C2:0998
cs=0x1c2;eip=0x00099c; 	J(JC(loc_10b76));	// 1812 jb      short loc_10B76 ;~ 01C2:099C
cs=0x1c2;eip=0x00099e; 	J(JMP(loc_10b2f));	// 1813 jmp     short loc_10B2F ;~ 01C2:099E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_10aa5: 	goto loc_10aa5;
        case m2c::kloc_10ab4: 	goto loc_10ab4;
        case m2c::kloc_10ac3: 	goto loc_10ac3;
        case m2c::kloc_10ac9: 	goto loc_10ac9;
        case m2c::kloc_10ad7: 	goto loc_10ad7;
        case m2c::kloc_10ae4: 	goto loc_10ae4;
        case m2c::kloc_10aed: 	goto loc_10aed;
        case m2c::kloc_10aef: 	goto loc_10aef;
        case m2c::kloc_10b2f: 	goto loc_10b2f;
        case m2c::kloc_10b40: 	goto loc_10b40;
        case m2c::kloc_10b59: 	goto loc_10b59;
        case m2c::kloc_10b6f: 	goto loc_10b6f;
        case m2c::kloc_10b76: 	goto loc_10b76;
        case m2c::kloc_10b95: 	goto loc_10b95;
        case m2c::kret_1c2_894: 	goto ret_1c2_894;
        case m2c::ksub_10a8f: 	goto sub_10a8f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_10ba0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_10ba0:
    _begin:
cs=0x1c2;eip=0x0009a0; 	X(MOV(byte_148ac, 8));	// 1821 mov     byte_148AC, 8 ;~ 01C2:09A0
ret_1c2_9a5:
	// 4515 
cs=0x1c2;eip=0x0009a5; 	X(MOV(word_148ae, 0x0FFFF));	// 1822 mov     word_148AE, 0FFFFh ;~ 01C2:09A5
cs=0x1c2;eip=0x0009ab; 	T(MOV(bp, *(dw*)(raddr(ds,si+1))));	// 1823 mov     bp, [si+1] ;~ 01C2:09AB
cs=0x1c2;eip=0x0009ae; 	T(MOV(di, *(dw*)(raddr(ds,si+3))));	// 1824 mov     di, [si+3] ;~ 01C2:09AE
cs=0x1c2;eip=0x0009b1; 	T(CMP(*(raddr(ds,si)), 3));	// 1825 cmp     byte ptr [si], 3 ;~ 01C2:09B1
cs=0x1c2;eip=0x0009b4; 	J(JNC(loc_10bb9));	// 1826 jnb     short loc_10BB9 ;~ 01C2:09B4
cs=0x1c2;eip=0x0009b6; 	J(CALL(sub_10eb2,0));	// 1827 call    sub_10EB2 ;~ 01C2:09B6
loc_10bb9:
	// 4516 
cs=0x1c2;eip=0x0009b9; 	X(MOV(word_148b3, bx));	// 1830 mov     word_148B3, bx ;~ 01C2:09B9
cs=0x1c2;eip=0x0009bd; 	X(MOV(word_148b5, dx));	// 1831 mov     word_148B5, dx ;~ 01C2:09BD
loc_10bc1:
	// 4517 
cs=0x1c2;eip=0x0009c1; 	T(MOV(cx, bp));	// 1834 mov     cx, bp ;~ 01C2:09C1
cs=0x1c2;eip=0x0009c3; 	T(SUB(cx, bx));	// 1835 sub     cx, bx ;~ 01C2:09C3
cs=0x1c2;eip=0x0009c5; 	J(JNS(loc_10bc9));	// 1836 jns     short loc_10BC9 ;~ 01C2:09C5
cs=0x1c2;eip=0x0009c7; 	T(NEG(cx));	// 1837 neg     cx ;~ 01C2:09C7
loc_10bc9:
	// 4518 
cs=0x1c2;eip=0x0009c9; 	T(MOV(ax, di));	// 1840 mov     ax, di ;~ 01C2:09C9
cs=0x1c2;eip=0x0009cb; 	T(SUB(ax, dx));	// 1841 sub     ax, dx ;~ 01C2:09CB
cs=0x1c2;eip=0x0009cd; 	J(JNS(loc_10bd1));	// 1842 jns     short loc_10BD1 ;~ 01C2:09CD
cs=0x1c2;eip=0x0009cf; 	T(NEG(ax));	// 1843 neg     ax ;~ 01C2:09CF
loc_10bd1:
	// 4519 
cs=0x1c2;eip=0x0009d1; 	T(CMP(ax, cx));	// 1846 cmp     ax, cx ;~ 01C2:09D1
cs=0x1c2;eip=0x0009d3; 	J(JC(loc_10bd9));	// 1847 jb      short loc_10BD9 ;~ 01C2:09D3
cs=0x1c2;eip=0x0009d5; 	T(SHR(cx, 1));	// 1848 shr     cx, 1 ;~ 01C2:09D5
cs=0x1c2;eip=0x0009d7; 	J(JMP(loc_10bdb));	// 1849 jmp     short loc_10BDB ;~ 01C2:09D7
loc_10bd9:
	// 4520 
cs=0x1c2;eip=0x0009d9; 	T(SHR(ax, 1));	// 1853 shr     ax, 1 ;~ 01C2:09D9
loc_10bdb:
	// 4521 
cs=0x1c2;eip=0x0009db; 	T(ADD(ax, cx));	// 1856 add     ax, cx ;~ 01C2:09DB
cs=0x1c2;eip=0x0009dd; 	T(CMP(*(raddr(ds,si)), 4));	// 1857 cmp     byte ptr [si], 4 ;~ 01C2:09DD
cs=0x1c2;eip=0x0009e0; 	J(JNZ(loc_10be8));	// 1858 jnz     short loc_10BE8 ;~ 01C2:09E0
cs=0x1c2;eip=0x0009e2; 	T(CMP(ax, word_14884));	// 1859 cmp     ax, word_14884 ;~ 01C2:09E2
cs=0x1c2;eip=0x0009e6; 	J(JMP(loc_10bec));	// 1860 jmp     short loc_10BEC ;~ 01C2:09E6
loc_10be8:
	// 4522 
cs=0x1c2;eip=0x0009e8; 	T(CMP(ax, word_14880));	// 1864 cmp     ax, word_14880 ;~ 01C2:09E8
loc_10bec:
	// 4523 
cs=0x1c2;eip=0x0009ec; 	J(JC(loc_10c0e));	// 1867 jb      short loc_10C0E ;~ 01C2:09EC
cs=0x1c2;eip=0x0009ee; 	T(CMP(ax, word_148ae));	// 1868 cmp     ax, word_148AE ;~ 01C2:09EE
cs=0x1c2;eip=0x0009f2; 	J(JA(loc_10c0d));	// 1869 ja      short loc_10C0D ;~ 01C2:09F2
cs=0x1c2;eip=0x0009f4; 	X(MOV(word_148ae, ax));	// 1870 mov     word_148AE, ax ;~ 01C2:09F4
cs=0x1c2;eip=0x0009f7; 	T(ADD(bx, word_14893));	// 1871 add     bx, word_14893 ;~ 01C2:09F7
cs=0x1c2;eip=0x0009fb; 	T(ADD(dx, word_14895));	// 1872 add     dx, word_14895 ;~ 01C2:09FB
cs=0x1c2;eip=0x0009ff; 	T(ADD(bp, word_148a3));	// 1873 add     bp, word_148A3 ;~ 01C2:09FF
cs=0x1c2;eip=0x000a03; 	T(ADD(di, word_148a5));	// 1874 add     di, word_148A5 ;~ 01C2:0A03
cs=0x1c2;eip=0x000a07; 	X(DEC(byte_148ac));	// 1875 dec     byte_148AC ;~ 01C2:0A07
cs=0x1c2;eip=0x000a0b; 	J(JNZ(loc_10bc1));	// 1876 jnz     short loc_10BC1 ;~ 01C2:0A0B
loc_10c0d:
	// 4524 
cs=0x1c2;eip=0x000a0d; 	T(CLC);	// 1879 clc ;~ 01C2:0A0D
loc_10c0e:
	// 4525 
cs=0x1c2;eip=0x000a0e; 	T(MOV(bx, word_148b3));	// 1882 mov     bx, word_148B3 ;~ 01C2:0A0E
cs=0x1c2;eip=0x000a12; 	T(MOV(dx, word_148b5));	// 1883 mov     dx, word_148B5 ;~ 01C2:0A12
cs=0x1c2;eip=0x000a16; 	R(RETN(0));	// 1884 retn ;~ 01C2:0A16

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_10bb9: 	goto loc_10bb9;
        case m2c::kloc_10bc1: 	goto loc_10bc1;
        case m2c::kloc_10bc9: 	goto loc_10bc9;
        case m2c::kloc_10bd1: 	goto loc_10bd1;
        case m2c::kloc_10bd9: 	goto loc_10bd9;
        case m2c::kloc_10bdb: 	goto loc_10bdb;
        case m2c::kloc_10be8: 	goto loc_10be8;
        case m2c::kloc_10bec: 	goto loc_10bec;
        case m2c::kloc_10c0d: 	goto loc_10c0d;
        case m2c::kloc_10c0e: 	goto loc_10c0e;
        case m2c::kret_1c2_9a5: 	goto ret_1c2_9a5;
        case m2c::ksub_10ba0: 	goto sub_10ba0;
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
sub_10c17:
	// 1891 
cs=0x1c2;eip=0x000a17; 	X(PUSH(si));	// 1893 push    si ;~ 01C2:0A17
ret_1c2_a18:
	// 4526 
cs=0x1c2;eip=0x000a18; 	T(MOV(ax, word_14893));	// 1894 mov     ax, word_14893 ;~ 01C2:0A18
cs=0x1c2;eip=0x000a1b; 	X(MOV(word_14897, ax));	// 1895 mov     word_14897, ax ;~ 01C2:0A1B
cs=0x1c2;eip=0x000a1e; 	T(MOV(ax, word_14895));	// 1896 mov     ax, word_14895 ;~ 01C2:0A1E
cs=0x1c2;eip=0x000a21; 	X(MOV(word_14899, ax));	// 1897 mov     word_14899, ax ;~ 01C2:0A21
cs=0x1c2;eip=0x000a24; 	T(MOV(si, word_148cf));	// 1898 mov     si, word_148CF ;~ 01C2:0A24
loc_10c28:
	// 4527 
cs=0x1c2;eip=0x000a28; 	X(MOV(byte_148ad, 8));	// 1901 mov     byte_148AD, 8 ;~ 01C2:0A28
cs=0x1c2;eip=0x000a2d; 	X(MOV(word_148ae, 0x0FFFF));	// 1902 mov     word_148AE, 0FFFFh ;~ 01C2:0A2D
cs=0x1c2;eip=0x000a33; 	T(MOV(bp, *(dw*)(raddr(ds,si+1))));	// 1903 mov     bp, [si+1] ;~ 01C2:0A33
cs=0x1c2;eip=0x000a36; 	T(MOV(di, *(dw*)(raddr(ds,si+3))));	// 1904 mov     di, [si+3] ;~ 01C2:0A36
cs=0x1c2;eip=0x000a39; 	X(MOV(word_148b3, bx));	// 1905 mov     word_148B3, bx ;~ 01C2:0A39
cs=0x1c2;eip=0x000a3d; 	X(MOV(word_148b5, dx));	// 1906 mov     word_148B5, dx ;~ 01C2:0A3D
loc_10c41:
	// 4528 
cs=0x1c2;eip=0x000a41; 	T(MOV(cx, bp));	// 1909 mov     cx, bp ;~ 01C2:0A41
cs=0x1c2;eip=0x000a43; 	T(SUB(cx, bx));	// 1910 sub     cx, bx ;~ 01C2:0A43
cs=0x1c2;eip=0x000a45; 	J(JNS(loc_10c49));	// 1911 jns     short loc_10C49 ;~ 01C2:0A45
cs=0x1c2;eip=0x000a47; 	T(NEG(cx));	// 1912 neg     cx ;~ 01C2:0A47
loc_10c49:
	// 4529 
cs=0x1c2;eip=0x000a49; 	T(MOV(ax, di));	// 1915 mov     ax, di ;~ 01C2:0A49
cs=0x1c2;eip=0x000a4b; 	T(SUB(ax, dx));	// 1916 sub     ax, dx ;~ 01C2:0A4B
cs=0x1c2;eip=0x000a4d; 	J(JNS(loc_10c51));	// 1917 jns     short loc_10C51 ;~ 01C2:0A4D
cs=0x1c2;eip=0x000a4f; 	T(NEG(ax));	// 1918 neg     ax ;~ 01C2:0A4F
loc_10c51:
	// 4530 
cs=0x1c2;eip=0x000a51; 	T(CMP(ax, cx));	// 1921 cmp     ax, cx ;~ 01C2:0A51
cs=0x1c2;eip=0x000a53; 	J(JC(loc_10c59));	// 1922 jb      short loc_10C59 ;~ 01C2:0A53
cs=0x1c2;eip=0x000a55; 	T(SHR(cx, 1));	// 1923 shr     cx, 1 ;~ 01C2:0A55
cs=0x1c2;eip=0x000a57; 	J(JMP(loc_10c5b));	// 1924 jmp     short loc_10C5B ;~ 01C2:0A57
loc_10c59:
	// 4531 
cs=0x1c2;eip=0x000a59; 	T(SHR(ax, 1));	// 1928 shr     ax, 1 ;~ 01C2:0A59
loc_10c5b:
	// 4532 
cs=0x1c2;eip=0x000a5b; 	T(ADD(ax, cx));	// 1931 add     ax, cx ;~ 01C2:0A5B
cs=0x1c2;eip=0x000a5d; 	T(CMP(ax, word_1487e));	// 1932 cmp     ax, word_1487E ;~ 01C2:0A5D
cs=0x1c2;eip=0x000a61; 	J(JC(loc_10c7d));	// 1933 jb      short loc_10C7D ;~ 01C2:0A61
cs=0x1c2;eip=0x000a63; 	T(CMP(ax, word_148ae));	// 1934 cmp     ax, word_148AE ;~ 01C2:0A63
cs=0x1c2;eip=0x000a67; 	J(JA(loc_10c7d));	// 1935 ja      short loc_10C7D ;~ 01C2:0A67
cs=0x1c2;eip=0x000a69; 	X(MOV(word_148ae, ax));	// 1936 mov     word_148AE, ax ;~ 01C2:0A69
cs=0x1c2;eip=0x000a6c; 	T(ADD(bx, word_14897));	// 1937 add     bx, word_14897 ;~ 01C2:0A6C
cs=0x1c2;eip=0x000a70; 	T(ADD(dx, word_14899));	// 1938 add     dx, word_14899 ;~ 01C2:0A70
cs=0x1c2;eip=0x000a74; 	X(DEC(byte_148ad));	// 1939 dec     byte_148AD ;~ 01C2:0A74
cs=0x1c2;eip=0x000a78; 	J(JNZ(loc_10c41));	// 1940 jnz     short loc_10C41 ;~ 01C2:0A78
cs=0x1c2;eip=0x000a7a; 	T(CLC);	// 1941 clc ;~ 01C2:0A7A
cs=0x1c2;eip=0x000a7b; 	X(POP(si));	// 1942 pop     si ;~ 01C2:0A7B
cs=0x1c2;eip=0x000a7c; 	R(RETN(0));	// 1943 retn ;~ 01C2:0A7C
loc_10c7d:
	// 4533 
cs=0x1c2;eip=0x000a7d; 	X(POP(si));	// 1948 pop     si ;~ 01C2:0A7D
cs=0x1c2;eip=0x000a7e; 	T(MOV(bx, word_148b3));	// 1949 mov     bx, word_148B3 ;~ 01C2:0A7E
cs=0x1c2;eip=0x000a82; 	T(MOV(dx, word_148b5));	// 1950 mov     dx, word_148B5 ;~ 01C2:0A82
cs=0x1c2;eip=0x000a86; 	T(STC);	// 1951 stc ;~ 01C2:0A86
cs=0x1c2;eip=0x000a87; 	R(RETN(0));	// 1952 retn ;~ 01C2:0A87
sub_10c88:
	// 1959 
cs=0x1c2;eip=0x000a88; 	X(PUSH(si));	// 1961 push    si ;~ 01C2:0A88
ret_1c2_a89:
	// 4534 
cs=0x1c2;eip=0x000a89; 	T(MOV(ax, word_1489f));	// 1962 mov     ax, word_1489F ;~ 01C2:0A89
cs=0x1c2;eip=0x000a8c; 	X(MOV(word_14897, ax));	// 1963 mov     word_14897, ax ;~ 01C2:0A8C
cs=0x1c2;eip=0x000a8f; 	T(MOV(ax, word_148a1));	// 1964 mov     ax, word_148A1 ;~ 01C2:0A8F
cs=0x1c2;eip=0x000a92; 	X(MOV(word_14899, ax));	// 1965 mov     word_14899, ax ;~ 01C2:0A92
cs=0x1c2;eip=0x000a95; 	T(MOV(si, word_148cb));	// 1966 mov     si, word_148CB ;~ 01C2:0A95
cs=0x1c2;eip=0x000a99; 	J(JMP(loc_10c28));	// 1967 jmp     short loc_10C28 ;~ 01C2:0A99

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_10c28: 	goto loc_10c28;
        case m2c::kloc_10c41: 	goto loc_10c41;
        case m2c::kloc_10c49: 	goto loc_10c49;
        case m2c::kloc_10c51: 	goto loc_10c51;
        case m2c::kloc_10c59: 	goto loc_10c59;
        case m2c::kloc_10c5b: 	goto loc_10c5b;
        case m2c::kloc_10c7d: 	goto loc_10c7d;
        case m2c::kret_1c2_a18: 	goto ret_1c2_a18;
        case m2c::kret_1c2_a89: 	goto ret_1c2_a89;
        case m2c::ksub_10c17: 	goto sub_10c17;
        case m2c::ksub_10c88: 	goto sub_10c88;
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
sub_10c9b:
	// 1974 
cs=0x1c2;eip=0x000a9b; 	X(PUSH(si));	// 1976 push    si ;~ 01C2:0A9B
ret_1c2_a9c:
	// 4535 
cs=0x1c2;eip=0x000a9c; 	T(CMP(word_148cd, 0));	// 1977 cmp     word_148CD, 0 ;~ 01C2:0A9C
cs=0x1c2;eip=0x000aa1; 	J(JZ(loc_10cc3));	// 1978 jz      short loc_10CC3 ;~ 01C2:0AA1
cs=0x1c2;eip=0x000aa3; 	T(MOV(si, word_148cf));	// 1979 mov     si, word_148CF ;~ 01C2:0AA3
loc_10ca7:
	// 4536 
cs=0x1c2;eip=0x000aa7; 	T(MOV(ax, *(dw*)(raddr(ds,si+1))));	// 1982 mov     ax, [si+1] ;~ 01C2:0AA7
cs=0x1c2;eip=0x000aaa; 	T(SUB(ax, bx));	// 1983 sub     ax, bx ;~ 01C2:0AAA
cs=0x1c2;eip=0x000aac; 	J(JNS(loc_10cb0));	// 1984 jns     short loc_10CB0 ;~ 01C2:0AAC
cs=0x1c2;eip=0x000aae; 	T(NEG(ax));	// 1985 neg     ax ;~ 01C2:0AAE
loc_10cb0:
	// 4537 
cs=0x1c2;eip=0x000ab0; 	T(CMP(ax, word_14876));	// 1988 cmp     ax, word_14876 ;~ 01C2:0AB0
cs=0x1c2;eip=0x000ab4; 	J(JNC(loc_10cc3));	// 1989 jnb     short loc_10CC3 ;~ 01C2:0AB4
cs=0x1c2;eip=0x000ab6; 	T(MOV(ax, *(dw*)(raddr(ds,si+3))));	// 1990 mov     ax, [si+3] ;~ 01C2:0AB6
cs=0x1c2;eip=0x000ab9; 	T(SUB(ax, dx));	// 1991 sub     ax, dx ;~ 01C2:0AB9
cs=0x1c2;eip=0x000abb; 	J(JNS(loc_10cbf));	// 1992 jns     short loc_10CBF ;~ 01C2:0ABB
cs=0x1c2;eip=0x000abd; 	T(NEG(ax));	// 1993 neg     ax ;~ 01C2:0ABD
loc_10cbf:
	// 4538 
cs=0x1c2;eip=0x000abf; 	T(CMP(ax, word_14876));	// 1996 cmp     ax, word_14876 ;~ 01C2:0ABF
loc_10cc3:
	// 4539 
cs=0x1c2;eip=0x000ac3; 	X(POP(si));	// 2000 pop     si ;~ 01C2:0AC3
cs=0x1c2;eip=0x000ac4; 	R(RETN(0));	// 2001 retn ;~ 01C2:0AC4
sub_10cc5:
	// 2008 
cs=0x1c2;eip=0x000ac5; 	X(PUSH(si));	// 2010 push    si ;~ 01C2:0AC5
ret_1c2_ac6:
	// 4540 
cs=0x1c2;eip=0x000ac6; 	T(CMP(word_148c9, 0));	// 2011 cmp     word_148C9, 0 ;~ 01C2:0AC6
cs=0x1c2;eip=0x000acb; 	J(JZ(loc_10cc3));	// 2012 jz      short loc_10CC3 ;~ 01C2:0ACB
cs=0x1c2;eip=0x000acd; 	T(MOV(si, word_148cb));	// 2013 mov     si, word_148CB ;~ 01C2:0ACD
cs=0x1c2;eip=0x000ad1; 	J(JMP(loc_10ca7));	// 2014 jmp     short loc_10CA7 ;~ 01C2:0AD1

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_10ca7: 	goto loc_10ca7;
        case m2c::kloc_10cb0: 	goto loc_10cb0;
        case m2c::kloc_10cbf: 	goto loc_10cbf;
        case m2c::kloc_10cc3: 	goto loc_10cc3;
        case m2c::kret_1c2_a9c: 	goto ret_1c2_a9c;
        case m2c::kret_1c2_ac6: 	goto ret_1c2_ac6;
        case m2c::ksub_10c9b: 	goto sub_10c9b;
        case m2c::ksub_10cc5: 	goto sub_10cc5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_10cd3(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_10cd3:
    _begin:
cs=0x1c2;eip=0x000ad3; 	J(CALL(sub_10e07,0));	// 2022 call    sub_10E07 ;~ 01C2:0AD3
ret_1c2_ad6:
	// 4541 
cs=0x1c2;eip=0x000ad6; 	J(JNC(loc_10cfc));	// 2023 jnb     short loc_10CFC ;~ 01C2:0AD6
cs=0x1c2;eip=0x000ad8; 	T(TEST(byte_14fb2, 0x0FF));	// 2024 test    byte_14FB2, 0FFh ;~ 01C2:0AD8
cs=0x1c2;eip=0x000add; 	J(JNZ(locret_10cfb));	// 2025 jnz     short locret_10CFB ;~ 01C2:0ADD
cs=0x1c2;eip=0x000adf; 	X(MOV(byte_14fb2, 0x0A));	// 2026 mov     byte_14FB2, 0Ah ;~ 01C2:0ADF
cs=0x1c2;eip=0x000ae4; 	T(MOV(di, 0x3E6));	// 2027 mov     di, 3E6h ;~ 01C2:0AE4
cs=0x1c2;eip=0x000ae7; 	T(MOV(ax, *(dw*)(raddr(ds,di+1))));	// 2028 mov     ax, [di+1] ;~ 01C2:0AE7
cs=0x1c2;eip=0x000aea; 	X(MOV(word_15355, ax));	// 2029 mov     word_15355, ax ;~ 01C2:0AEA
cs=0x1c2;eip=0x000aed; 	T(MOV(ax, *(dw*)(raddr(ds,di+3))));	// 2030 mov     ax, [di+3] ;~ 01C2:0AED
cs=0x1c2;eip=0x000af0; 	X(MOV(word_15357, ax));	// 2031 mov     word_15357, ax ;~ 01C2:0AF0
cs=0x1c2;eip=0x000af3; 	X(MOV(byte_15346, 1));	// 2032 mov     byte_15346, 1 ;~ 01C2:0AF3
cs=0x1c2;eip=0x000af8; 	J(CALL(sub_10e87,0));	// 2033 call    sub_10E87 ;~ 01C2:0AF8
locret_10cfb:
	// 4542 
cs=0x1c2;eip=0x000afb; 	R(RETN(0));	// 2036 retn ;~ 01C2:0AFB
loc_10cfc:
	// 4543 
cs=0x1c2;eip=0x000afc; 	T(MOV(si, 0x3F3));	// 2040 mov     si, 3F3h ;~ 01C2:0AFC
cs=0x1c2;eip=0x000aff; 	T(MOV(bx, *(dw*)(raddr(ds,si+1))));	// 2041 mov     bx, [si+1] ;~ 01C2:0AFF
cs=0x1c2;eip=0x000b02; 	T(MOV(dx, *(dw*)(raddr(ds,si+3))));	// 2042 mov     dx, [si+3] ;~ 01C2:0B02
cs=0x1c2;eip=0x000b05; 	T(XOR(ax, ax));	// 2043 xor     ax, ax ;~ 01C2:0B05
cs=0x1c2;eip=0x000b07; 	T(SUB(ax, bx));	// 2044 sub     ax, bx ;~ 01C2:0B07
cs=0x1c2;eip=0x000b09; 	J(JNS(loc_10d0d));	// 2045 jns     short loc_10D0D ;~ 01C2:0B09
cs=0x1c2;eip=0x000b0b; 	T(NEG(ax));	// 2046 neg     ax ;~ 01C2:0B0B
loc_10d0d:
	// 4544 
cs=0x1c2;eip=0x000b0d; 	T(CMP(ax, word_1487c));	// 2049 cmp     ax, word_1487C ;~ 01C2:0B0D
cs=0x1c2;eip=0x000b11; 	J(JNC(loc_10d21));	// 2050 jnb     short loc_10D21 ;~ 01C2:0B11
cs=0x1c2;eip=0x000b13; 	T(XOR(ax, ax));	// 2051 xor     ax, ax ;~ 01C2:0B13
cs=0x1c2;eip=0x000b15; 	T(SUB(ax, dx));	// 2052 sub     ax, dx ;~ 01C2:0B15
cs=0x1c2;eip=0x000b17; 	J(JNS(loc_10d1b));	// 2053 jns     short loc_10D1B ;~ 01C2:0B17
cs=0x1c2;eip=0x000b19; 	T(NEG(ax));	// 2054 neg     ax ;~ 01C2:0B19
loc_10d1b:
	// 4545 
cs=0x1c2;eip=0x000b1b; 	T(CMP(ax, word_1487c));	// 2057 cmp     ax, word_1487C ;~ 01C2:0B1B
cs=0x1c2;eip=0x000b1f; 	J(JC(loc_10d2d));	// 2058 jb      short loc_10D2D ;~ 01C2:0B1F
loc_10d21:
	// 4546 
cs=0x1c2;eip=0x000b21; 	J(CALL(sub_10cc5,0));	// 2062 call    sub_10CC5 ;~ 01C2:0B21
cs=0x1c2;eip=0x000b24; 	J(JNC(loc_10d2b));	// 2063 jnb     short loc_10D2B ;~ 01C2:0B24
cs=0x1c2;eip=0x000b26; 	J(CALL(sub_10c88,0));	// 2064 call    sub_10C88 ;~ 01C2:0B26
cs=0x1c2;eip=0x000b29; 	J(JC(loc_10d81));	// 2065 jb      short loc_10D81 ;~ 01C2:0B29
loc_10d2b:
	// 4547 
cs=0x1c2;eip=0x000b2b; 	T(CLC);	// 2068 clc ;~ 01C2:0B2B
cs=0x1c2;eip=0x000b2c; 	R(RETN(0));	// 2069 retn ;~ 01C2:0B2C
loc_10d2d:
	// 4548 
cs=0x1c2;eip=0x000b2d; 	X(MOV(word_148b3, bx));	// 2073 mov     word_148B3, bx ;~ 01C2:0B2D
cs=0x1c2;eip=0x000b31; 	X(MOV(word_148b5, dx));	// 2074 mov     word_148B5, dx ;~ 01C2:0B31
cs=0x1c2;eip=0x000b35; 	T(MOV(cx, word_14af8));	// 2075 mov     cx, word_14AF8 ;~ 01C2:0B35
cs=0x1c2;eip=0x000b39; 	T(MOV(ax, word_14af6));	// 2076 mov     ax, word_14AF6 ;~ 01C2:0B39
cs=0x1c2;eip=0x000b3c; 	J(CALL(sub_13bc7,0));	// 2077 call    sub_13BC7 ;~ 01C2:0B3C
cs=0x1c2;eip=0x000b3f; 	T(MOV(cl, 3));	// 2078 mov     cl, 3 ;~ 01C2:0B3F
cs=0x1c2;eip=0x000b41; 	T(SAR(dx, cl));	// 2079 sar     dx, cl ;~ 01C2:0B41
cs=0x1c2;eip=0x000b43; 	X(MOV(word_148a7, dx));	// 2080 mov     word_148A7, dx ;~ 01C2:0B43
cs=0x1c2;eip=0x000b47; 	T(MOV(cx, word_14af8));	// 2081 mov     cx, word_14AF8 ;~ 01C2:0B47
cs=0x1c2;eip=0x000b4b; 	T(MOV(ax, word_14af6));	// 2082 mov     ax, word_14AF6 ;~ 01C2:0B4B
cs=0x1c2;eip=0x000b4e; 	J(CALL(sub_13bad,0));	// 2083 call    sub_13BAD ;~ 01C2:0B4E
cs=0x1c2;eip=0x000b51; 	T(MOV(cl, 3));	// 2084 mov     cl, 3 ;~ 01C2:0B51
cs=0x1c2;eip=0x000b53; 	T(SAR(dx, cl));	// 2085 sar     dx, cl ;~ 01C2:0B53
cs=0x1c2;eip=0x000b55; 	X(MOV(word_148a9, dx));	// 2086 mov     word_148A9, dx ;~ 01C2:0B55
cs=0x1c2;eip=0x000b59; 	T(XOR(bx, bx));	// 2087 xor     bx, bx ;~ 01C2:0B59
cs=0x1c2;eip=0x000b5b; 	T(MOV(dx, bx));	// 2088 mov     dx, bx ;~ 01C2:0B5B
cs=0x1c2;eip=0x000b5d; 	J(CALL(sub_10da5,0));	// 2089 call    sub_10DA5 ;~ 01C2:0B5D
cs=0x1c2;eip=0x000b60; 	J(JNC(loc_10d21));	// 2090 jnb     short loc_10D21 ;~ 01C2:0B60
cs=0x1c2;eip=0x000b62; 	J(CALL(sub_10cc5,0));	// 2091 call    sub_10CC5 ;~ 01C2:0B62
cs=0x1c2;eip=0x000b65; 	J(JNC(loc_10d6c));	// 2092 jnb     short loc_10D6C ;~ 01C2:0B65
cs=0x1c2;eip=0x000b67; 	J(CALL(sub_10c88,0));	// 2093 call    sub_10C88 ;~ 01C2:0B67
cs=0x1c2;eip=0x000b6a; 	J(JC(loc_10d9a));	// 2094 jb      short loc_10D9A ;~ 01C2:0B6A
loc_10d6c:
	// 4549 
cs=0x1c2;eip=0x000b6c; 	X(MOV(byte_15242, 1));	// 2098 mov     byte_15242, 1 ;~ 01C2:0B6C
cs=0x1c2;eip=0x000b71; 	T(MOV(al, 0x0B));	// 2099 mov     al, 0Bh ;~ 01C2:0B71
cs=0x1c2;eip=0x000b73; 	J(CALL(sub_14015,0));	// 2100 call    sub_14015 ;~ 01C2:0B73
cs=0x1c2;eip=0x000b76; 	T(MOV(al, *(raddr(ds,si))));	// 2101 mov     al, [si] ;~ 01C2:0B76
cs=0x1c2;eip=0x000b78; 	X(MOV(byte_1475b, al));	// 2102 mov     byte_1475B, al ;~ 01C2:0B78
cs=0x1c2;eip=0x000b7b; 	T(NOP);	// 2103 nop ;~ 01C2:0B7B
cs=0x1c2;eip=0x000b7c; 	T(NOP);	// 2104 nop ;~ 01C2:0B7C
cs=0x1c2;eip=0x000b7d; 	T(NOP);	// 2105 nop ;~ 01C2:0B7D
cs=0x1c2;eip=0x000b7e; 	T(NOP);	// 2106 nop ;~ 01C2:0B7E
loc_10d7f:
	// 4550 
cs=0x1c2;eip=0x000b7f; 	T(STC);	// 2109 stc ;~ 01C2:0B7F
cs=0x1c2;eip=0x000b80; 	R(RETN(0));	// 2110 retn ;~ 01C2:0B80
loc_10d81:
	// 4551 
cs=0x1c2;eip=0x000b81; 	T(MOV(di, 0x3F3));	// 2115 mov     di, 3F3h ;~ 01C2:0B81
cs=0x1c2;eip=0x000b84; 	T(MOV(ax, *(dw*)(raddr(ds,di+1))));	// 2116 mov     ax, [di+1] ;~ 01C2:0B84
cs=0x1c2;eip=0x000b87; 	X(MOV(word_15355, ax));	// 2117 mov     word_15355, ax ;~ 01C2:0B87
cs=0x1c2;eip=0x000b8a; 	T(MOV(ax, *(dw*)(raddr(ds,di+3))));	// 2118 mov     ax, [di+3] ;~ 01C2:0B8A
cs=0x1c2;eip=0x000b8d; 	X(MOV(word_15357, ax));	// 2119 mov     word_15357, ax ;~ 01C2:0B8D
cs=0x1c2;eip=0x000b90; 	X(MOV(byte_15346, 1));	// 2120 mov     byte_15346, 1 ;~ 01C2:0B90
cs=0x1c2;eip=0x000b95; 	J(CALL(sub_10e87,0));	// 2121 call    sub_10E87 ;~ 01C2:0B95
cs=0x1c2;eip=0x000b98; 	J(JMP(loc_10d7f));	// 2122 jmp     short loc_10D7F ;~ 01C2:0B98
loc_10d9a:
	// 4552 
cs=0x1c2;eip=0x000b9a; 	T(MOV(al, byte_148ac));	// 2126 mov     al, byte_148AC ;~ 01C2:0B9A
cs=0x1c2;eip=0x000b9d; 	T(CMP(al, byte_148ad));	// 2127 cmp     al, byte_148AD ;~ 01C2:0B9D
cs=0x1c2;eip=0x000ba1; 	J(JC(loc_10d81));	// 2128 jb      short loc_10D81 ;~ 01C2:0BA1
cs=0x1c2;eip=0x000ba3; 	J(JMP(loc_10d6c));	// 2129 jmp     short loc_10D6C ;~ 01C2:0BA3

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_10cfc: 	goto loc_10cfc;
        case m2c::kloc_10d0d: 	goto loc_10d0d;
        case m2c::kloc_10d1b: 	goto loc_10d1b;
        case m2c::kloc_10d21: 	goto loc_10d21;
        case m2c::kloc_10d2b: 	goto loc_10d2b;
        case m2c::kloc_10d2d: 	goto loc_10d2d;
        case m2c::kloc_10d6c: 	goto loc_10d6c;
        case m2c::kloc_10d7f: 	goto loc_10d7f;
        case m2c::kloc_10d81: 	goto loc_10d81;
        case m2c::kloc_10d9a: 	goto loc_10d9a;
        case m2c::klocret_10cfb: 	goto locret_10cfb;
        case m2c::kret_1c2_ad6: 	goto ret_1c2_ad6;
        case m2c::ksub_10cd3: 	goto sub_10cd3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_10da5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_10da5:
    _begin:
cs=0x1c2;eip=0x000ba5; 	X(MOV(word_148ae, 0x0FFFF));	// 2137 mov     word_148AE, 0FFFFh ;~ 01C2:0BA5
ret_1c2_bab:
	// 4553 
cs=0x1c2;eip=0x000bab; 	X(MOV(byte_148ac, 8));	// 2138 mov     byte_148AC, 8 ;~ 01C2:0BAB
cs=0x1c2;eip=0x000bb0; 	T(XOR(bp, bp));	// 2139 xor     bp, bp ;~ 01C2:0BB0
cs=0x1c2;eip=0x000bb2; 	T(MOV(di, bp));	// 2140 mov     di, bp ;~ 01C2:0BB2
cs=0x1c2;eip=0x000bb4; 	T(MOV(bx, word_148b3));	// 2141 mov     bx, word_148B3 ;~ 01C2:0BB4
cs=0x1c2;eip=0x000bb8; 	T(MOV(dx, word_148b5));	// 2142 mov     dx, word_148B5 ;~ 01C2:0BB8
loc_10dbc:
	// 4554 
cs=0x1c2;eip=0x000bbc; 	T(MOV(cx, bp));	// 2145 mov     cx, bp ;~ 01C2:0BBC
cs=0x1c2;eip=0x000bbe; 	T(SUB(cx, bx));	// 2146 sub     cx, bx ;~ 01C2:0BBE
cs=0x1c2;eip=0x000bc0; 	J(JNS(loc_10dc4));	// 2147 jns     short loc_10DC4 ;~ 01C2:0BC0
cs=0x1c2;eip=0x000bc2; 	T(NEG(cx));	// 2148 neg     cx ;~ 01C2:0BC2
loc_10dc4:
	// 4555 
cs=0x1c2;eip=0x000bc4; 	T(MOV(ax, di));	// 2151 mov     ax, di ;~ 01C2:0BC4
cs=0x1c2;eip=0x000bc6; 	T(SUB(ax, dx));	// 2152 sub     ax, dx ;~ 01C2:0BC6
cs=0x1c2;eip=0x000bc8; 	J(JNS(loc_10dcc));	// 2153 jns     short loc_10DCC ;~ 01C2:0BC8
cs=0x1c2;eip=0x000bca; 	T(NEG(ax));	// 2154 neg     ax ;~ 01C2:0BCA
loc_10dcc:
	// 4556 
cs=0x1c2;eip=0x000bcc; 	T(CMP(ax, cx));	// 2157 cmp     ax, cx ;~ 01C2:0BCC
cs=0x1c2;eip=0x000bce; 	J(JC(loc_10dd4));	// 2158 jb      short loc_10DD4 ;~ 01C2:0BCE
cs=0x1c2;eip=0x000bd0; 	T(SHR(cx, 1));	// 2159 shr     cx, 1 ;~ 01C2:0BD0
cs=0x1c2;eip=0x000bd2; 	J(JMP(loc_10dd6));	// 2160 jmp     short loc_10DD6 ;~ 01C2:0BD2
loc_10dd4:
	// 4557 
cs=0x1c2;eip=0x000bd4; 	T(SHR(ax, 1));	// 2164 shr     ax, 1 ;~ 01C2:0BD4
loc_10dd6:
	// 4558 
cs=0x1c2;eip=0x000bd6; 	T(ADD(ax, cx));	// 2167 add     ax, cx ;~ 01C2:0BD6
cs=0x1c2;eip=0x000bd8; 	T(CMP(ax, word_14882));	// 2168 cmp     ax, word_14882 ;~ 01C2:0BD8
cs=0x1c2;eip=0x000bdc; 	J(JC(loc_10dfe));	// 2169 jb      short loc_10DFE ;~ 01C2:0BDC
cs=0x1c2;eip=0x000bde; 	T(CMP(ax, word_148ae));	// 2170 cmp     ax, word_148AE ;~ 01C2:0BDE
cs=0x1c2;eip=0x000be2; 	J(JA(loc_10dfd));	// 2171 ja      short loc_10DFD ;~ 01C2:0BE2
cs=0x1c2;eip=0x000be4; 	X(MOV(word_148ae, ax));	// 2172 mov     word_148AE, ax ;~ 01C2:0BE4
cs=0x1c2;eip=0x000be7; 	T(ADD(bx, word_1489f));	// 2173 add     bx, word_1489F ;~ 01C2:0BE7
cs=0x1c2;eip=0x000beb; 	T(ADD(dx, word_148a1));	// 2174 add     dx, word_148A1 ;~ 01C2:0BEB
cs=0x1c2;eip=0x000bef; 	T(ADD(bp, word_148a7));	// 2175 add     bp, word_148A7 ;~ 01C2:0BEF
cs=0x1c2;eip=0x000bf3; 	T(ADD(di, word_148a9));	// 2176 add     di, word_148A9 ;~ 01C2:0BF3
cs=0x1c2;eip=0x000bf7; 	X(DEC(byte_148ac));	// 2177 dec     byte_148AC ;~ 01C2:0BF7
cs=0x1c2;eip=0x000bfb; 	J(JNZ(loc_10dbc));	// 2178 jnz     short loc_10DBC ;~ 01C2:0BFB
loc_10dfd:
	// 4559 
cs=0x1c2;eip=0x000bfd; 	T(CLC);	// 2181 clc ;~ 01C2:0BFD
loc_10dfe:
	// 4560 
cs=0x1c2;eip=0x000bfe; 	T(MOV(bx, word_148b3));	// 2184 mov     bx, word_148B3 ;~ 01C2:0BFE
cs=0x1c2;eip=0x000c02; 	T(MOV(dx, word_148b5));	// 2185 mov     dx, word_148B5 ;~ 01C2:0C02
cs=0x1c2;eip=0x000c06; 	R(RETN(0));	// 2186 retn ;~ 01C2:0C06

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_10dbc: 	goto loc_10dbc;
        case m2c::kloc_10dc4: 	goto loc_10dc4;
        case m2c::kloc_10dcc: 	goto loc_10dcc;
        case m2c::kloc_10dd4: 	goto loc_10dd4;
        case m2c::kloc_10dd6: 	goto loc_10dd6;
        case m2c::kloc_10dfd: 	goto loc_10dfd;
        case m2c::kloc_10dfe: 	goto loc_10dfe;
        case m2c::kret_1c2_bab: 	goto ret_1c2_bab;
        case m2c::ksub_10da5: 	goto sub_10da5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_10e07(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_10e07:
    _begin:
cs=0x1c2;eip=0x000c07; 	T(MOV(si, 0x3F3));	// 2194 mov     si, 3F3h ;~ 01C2:0C07
ret_1c2_c0a:
	// 4561 
cs=0x1c2;eip=0x000c0a; 	T(MOV(bx, *(dw*)(raddr(ds,si+1))));	// 2195 mov     bx, [si+1] ;~ 01C2:0C0A
cs=0x1c2;eip=0x000c0d; 	T(MOV(dx, *(dw*)(raddr(ds,si+3))));	// 2196 mov     dx, [si+3] ;~ 01C2:0C0D
cs=0x1c2;eip=0x000c10; 	T(MOV(si, 0x3D9));	// 2197 mov     si, 3D9h ;~ 01C2:0C10
cs=0x1c2;eip=0x000c13; 	T(MOV(al, *(raddr(ds,si))));	// 2198 mov     al, [si] ;~ 01C2:0C13
cs=0x1c2;eip=0x000c15; 	T(OR(al, al));	// 2199 or      al, al ;~ 01C2:0C15
cs=0x1c2;eip=0x000c17; 	J(JNZ(loc_10e1b));	// 2200 jnz     short loc_10E1B ;~ 01C2:0C17
loc_10e19:
	// 4562 
cs=0x1c2;eip=0x000c19; 	T(CLC);	// 2204 clc ;~ 01C2:0C19
cs=0x1c2;eip=0x000c1a; 	R(RETN(0));	// 2205 retn ;~ 01C2:0C1A
loc_10e1b:
	// 4563 
cs=0x1c2;eip=0x000c1b; 	T(MOV(ax, *(dw*)(raddr(ds,si+1))));	// 2209 mov     ax, [si+1] ;~ 01C2:0C1B
cs=0x1c2;eip=0x000c1e; 	T(SUB(ax, bx));	// 2210 sub     ax, bx ;~ 01C2:0C1E
cs=0x1c2;eip=0x000c20; 	J(JNS(loc_10e24));	// 2211 jns     short loc_10E24 ;~ 01C2:0C20
cs=0x1c2;eip=0x000c22; 	T(NEG(ax));	// 2212 neg     ax ;~ 01C2:0C22
loc_10e24:
	// 4564 
cs=0x1c2;eip=0x000c24; 	T(CMP(ax, word_1487c));	// 2215 cmp     ax, word_1487C ;~ 01C2:0C24
cs=0x1c2;eip=0x000c28; 	J(JNC(loc_10e19));	// 2216 jnb     short loc_10E19 ;~ 01C2:0C28
cs=0x1c2;eip=0x000c2a; 	T(MOV(ax, *(dw*)(raddr(ds,si+3))));	// 2217 mov     ax, [si+3] ;~ 01C2:0C2A
cs=0x1c2;eip=0x000c2d; 	T(SUB(ax, dx));	// 2218 sub     ax, dx ;~ 01C2:0C2D
cs=0x1c2;eip=0x000c2f; 	J(JNS(loc_10e33));	// 2219 jns     short loc_10E33 ;~ 01C2:0C2F
cs=0x1c2;eip=0x000c31; 	T(NEG(ax));	// 2220 neg     ax ;~ 01C2:0C31
loc_10e33:
	// 4565 
cs=0x1c2;eip=0x000c33; 	T(CMP(ax, word_1487c));	// 2223 cmp     ax, word_1487C ;~ 01C2:0C33
cs=0x1c2;eip=0x000c37; 	J(JNC(loc_10e19));	// 2224 jnb     short loc_10E19 ;~ 01C2:0C37
cs=0x1c2;eip=0x000c39; 	X(MOV(byte_148ad, 8));	// 2225 mov     byte_148AD, 8 ;~ 01C2:0C39
cs=0x1c2;eip=0x000c3e; 	X(MOV(word_148ae, 0x0FFFF));	// 2226 mov     word_148AE, 0FFFFh ;~ 01C2:0C3E
cs=0x1c2;eip=0x000c44; 	T(MOV(bp, *(dw*)(raddr(ds,si+1))));	// 2227 mov     bp, [si+1] ;~ 01C2:0C44
cs=0x1c2;eip=0x000c47; 	T(MOV(di, *(dw*)(raddr(ds,si+3))));	// 2228 mov     di, [si+3] ;~ 01C2:0C47
loc_10e4a:
	// 4566 
cs=0x1c2;eip=0x000c4a; 	T(MOV(cx, bp));	// 2231 mov     cx, bp ;~ 01C2:0C4A
cs=0x1c2;eip=0x000c4c; 	T(SUB(cx, bx));	// 2232 sub     cx, bx ;~ 01C2:0C4C
cs=0x1c2;eip=0x000c4e; 	J(JNS(loc_10e52));	// 2233 jns     short loc_10E52 ;~ 01C2:0C4E
cs=0x1c2;eip=0x000c50; 	T(NEG(cx));	// 2234 neg     cx ;~ 01C2:0C50
loc_10e52:
	// 4567 
cs=0x1c2;eip=0x000c52; 	T(MOV(ax, di));	// 2237 mov     ax, di ;~ 01C2:0C52
cs=0x1c2;eip=0x000c54; 	T(SUB(ax, dx));	// 2238 sub     ax, dx ;~ 01C2:0C54
cs=0x1c2;eip=0x000c56; 	J(JNS(loc_10e5a));	// 2239 jns     short loc_10E5A ;~ 01C2:0C56
cs=0x1c2;eip=0x000c58; 	T(NEG(ax));	// 2240 neg     ax ;~ 01C2:0C58
loc_10e5a:
	// 4568 
cs=0x1c2;eip=0x000c5a; 	T(CMP(ax, cx));	// 2243 cmp     ax, cx ;~ 01C2:0C5A
cs=0x1c2;eip=0x000c5c; 	J(JC(loc_10e62));	// 2244 jb      short loc_10E62 ;~ 01C2:0C5C
cs=0x1c2;eip=0x000c5e; 	T(SHR(cx, 1));	// 2245 shr     cx, 1 ;~ 01C2:0C5E
cs=0x1c2;eip=0x000c60; 	J(JMP(loc_10e64));	// 2246 jmp     short loc_10E64 ;~ 01C2:0C60
loc_10e62:
	// 4569 
cs=0x1c2;eip=0x000c62; 	T(SHR(ax, 1));	// 2250 shr     ax, 1 ;~ 01C2:0C62
loc_10e64:
	// 4570 
cs=0x1c2;eip=0x000c64; 	T(ADD(ax, cx));	// 2253 add     ax, cx ;~ 01C2:0C64
cs=0x1c2;eip=0x000c66; 	T(CMP(ax, word_14884));	// 2254 cmp     ax, word_14884 ;~ 01C2:0C66
cs=0x1c2;eip=0x000c6a; 	J(JC(loc_10e85));	// 2255 jb      short loc_10E85 ;~ 01C2:0C6A
cs=0x1c2;eip=0x000c6c; 	T(CMP(ax, word_148ae));	// 2256 cmp     ax, word_148AE ;~ 01C2:0C6C
cs=0x1c2;eip=0x000c70; 	J(JA(loc_10e83));	// 2257 ja      short loc_10E83 ;~ 01C2:0C70
cs=0x1c2;eip=0x000c72; 	X(MOV(word_148ae, ax));	// 2258 mov     word_148AE, ax ;~ 01C2:0C72
cs=0x1c2;eip=0x000c75; 	T(ADD(bx, word_1489f));	// 2259 add     bx, word_1489F ;~ 01C2:0C75
cs=0x1c2;eip=0x000c79; 	T(ADD(dx, word_148a1));	// 2260 add     dx, word_148A1 ;~ 01C2:0C79
cs=0x1c2;eip=0x000c7d; 	X(DEC(byte_148ad));	// 2261 dec     byte_148AD ;~ 01C2:0C7D
cs=0x1c2;eip=0x000c81; 	J(JNZ(loc_10e4a));	// 2262 jnz     short loc_10E4A ;~ 01C2:0C81
loc_10e83:
	// 4571 
cs=0x1c2;eip=0x000c83; 	T(CLC);	// 2265 clc ;~ 01C2:0C83
cs=0x1c2;eip=0x000c84; 	R(RETN(0));	// 2266 retn ;~ 01C2:0C84
loc_10e85:
	// 4572 
cs=0x1c2;eip=0x000c85; 	T(STC);	// 2270 stc ;~ 01C2:0C85
cs=0x1c2;eip=0x000c86; 	R(RETN(0));	// 2271 retn ;~ 01C2:0C86

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_10e19: 	goto loc_10e19;
        case m2c::kloc_10e1b: 	goto loc_10e1b;
        case m2c::kloc_10e24: 	goto loc_10e24;
        case m2c::kloc_10e33: 	goto loc_10e33;
        case m2c::kloc_10e4a: 	goto loc_10e4a;
        case m2c::kloc_10e52: 	goto loc_10e52;
        case m2c::kloc_10e5a: 	goto loc_10e5a;
        case m2c::kloc_10e62: 	goto loc_10e62;
        case m2c::kloc_10e64: 	goto loc_10e64;
        case m2c::kloc_10e83: 	goto loc_10e83;
        case m2c::kloc_10e85: 	goto loc_10e85;
        case m2c::kret_1c2_c0a: 	goto ret_1c2_c0a;
        case m2c::ksub_10e07: 	goto sub_10e07;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_10e87(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_10e87:
    _begin:
cs=0x1c2;eip=0x000c87; 	X(PUSH(si));	// 2280 push    si ;~ 01C2:0C87
ret_1c2_c88:
	// 4573 
cs=0x1c2;eip=0x000c88; 	T(MOV(si, 0x0D15));	// 2281 mov     si, 0D15h ;~ 01C2:0C88
cs=0x1c2;eip=0x000c8b; 	J(CALL(sub_13a90,0));	// 2282 call    sub_13A90 ;~ 01C2:0C8B
cs=0x1c2;eip=0x000c8e; 	T(SUB(ax, word_14af6));	// 2283 sub     ax, word_14AF6 ;~ 01C2:0C8E
cs=0x1c2;eip=0x000c92; 	J(JNS(loc_10e99));	// 2284 jns     short loc_10E99 ;~ 01C2:0C92
loc_10e94:
	// 4574 
cs=0x1c2;eip=0x000c94; 	T(ADD(ax, 0x480));	// 2287 add     ax, 480h ;~ 01C2:0C94
cs=0x1c2;eip=0x000c97; 	J(JS(loc_10e94));	// 2288 js      short loc_10E94 ;~ 01C2:0C97
loc_10e99:
	// 4575 
cs=0x1c2;eip=0x000c99; 	T(CMP(ax, 0x480));	// 2292 cmp     ax, 480h ;~ 01C2:0C99
cs=0x1c2;eip=0x000c9c; 	J(JC(loc_10ea3));	// 2293 jb      short loc_10EA3 ;~ 01C2:0C9C
cs=0x1c2;eip=0x000c9e; 	T(SUB(ax, 0x480));	// 2294 sub     ax, 480h ;~ 01C2:0C9E
cs=0x1c2;eip=0x000ca1; 	J(JMP(loc_10e99));	// 2295 jmp     short loc_10E99 ;~ 01C2:0CA1
loc_10ea3:
	// 4576 
cs=0x1c2;eip=0x000ca3; 	X(MOV(word_15347, ax));	// 2299 mov     word_15347, ax ;~ 01C2:0CA3
cs=0x1c2;eip=0x000ca6; 	J(CALL(sub_13b1a,0));	// 2300 call    sub_13B1A ;~ 01C2:0CA6
cs=0x1c2;eip=0x000ca9; 	T(MOV(cl, 6));	// 2301 mov     cl, 6 ;~ 01C2:0CA9
cs=0x1c2;eip=0x000cab; 	T(SHR(ax, cl));	// 2302 shr     ax, cl ;~ 01C2:0CAB
cs=0x1c2;eip=0x000cad; 	X(MOV(word_148b1, ax));	// 2303 mov     word_148B1, ax ;~ 01C2:0CAD
cs=0x1c2;eip=0x000cb0; 	X(POP(si));	// 2304 pop     si ;~ 01C2:0CB0
cs=0x1c2;eip=0x000cb1; 	R(RETN(0));	// 2305 retn ;~ 01C2:0CB1

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_10e94: 	goto loc_10e94;
        case m2c::kloc_10e99: 	goto loc_10e99;
        case m2c::kloc_10ea3: 	goto loc_10ea3;
        case m2c::kret_1c2_c88: 	goto ret_1c2_c88;
        case m2c::ksub_10e87: 	goto sub_10e87;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_10eb2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_10eb2:
    _begin:
cs=0x1c2;eip=0x000cb2; 	X(PUSH(bx));	// 2313 push    bx ;~ 01C2:0CB2
ret_1c2_cb3:
	// 4577 
cs=0x1c2;eip=0x000cb3; 	X(PUSH(dx));	// 2314 push    dx ;~ 01C2:0CB3
cs=0x1c2;eip=0x000cb4; 	X(PUSH(di));	// 2315 push    di ;~ 01C2:0CB4
cs=0x1c2;eip=0x000cb5; 	X(PUSH(bp));	// 2316 push    bp ;~ 01C2:0CB5
cs=0x1c2;eip=0x000cb6; 	T(MOV(cx, 0x0FE40));	// 2317 mov     cx, 0FE40h ;~ 01C2:0CB6
cs=0x1c2;eip=0x000cb9; 	T(CMP(*(raddr(ds,si)), 2));	// 2318 cmp     byte ptr [si], 2 ;~ 01C2:0CB9
cs=0x1c2;eip=0x000cbc; 	J(JNZ(loc_10ec1));	// 2319 jnz     short loc_10EC1 ;~ 01C2:0CBC
cs=0x1c2;eip=0x000cbe; 	T(MOV(cx, 0x0FC80));	// 2320 mov     cx, 0FC80h ;~ 01C2:0CBE
loc_10ec1:
	// 4578 
cs=0x1c2;eip=0x000cc1; 	T(MOV(ax, *(dw*)(raddr(ds,si+9))));	// 2323 mov     ax, [si+9] ;~ 01C2:0CC1
cs=0x1c2;eip=0x000cc4; 	J(CALL(sub_13bc7,0));	// 2324 call    sub_13BC7 ;~ 01C2:0CC4
cs=0x1c2;eip=0x000cc7; 	X(POP(bp));	// 2325 pop     bp ;~ 01C2:0CC7
cs=0x1c2;eip=0x000cc8; 	T(ADD(bp, dx));	// 2326 add     bp, dx ;~ 01C2:0CC8
cs=0x1c2;eip=0x000cca; 	X(PUSH(bp));	// 2327 push    bp ;~ 01C2:0CCA
cs=0x1c2;eip=0x000ccb; 	T(MOV(cx, 0x0FE40));	// 2328 mov     cx, 0FE40h ;~ 01C2:0CCB
cs=0x1c2;eip=0x000cce; 	T(CMP(*(raddr(ds,si)), 2));	// 2329 cmp     byte ptr [si], 2 ;~ 01C2:0CCE
cs=0x1c2;eip=0x000cd1; 	J(JNZ(loc_10ed6));	// 2330 jnz     short loc_10ED6 ;~ 01C2:0CD1
cs=0x1c2;eip=0x000cd3; 	T(MOV(cx, 0x0FC80));	// 2331 mov     cx, 0FC80h ;~ 01C2:0CD3
loc_10ed6:
	// 4579 
cs=0x1c2;eip=0x000cd6; 	T(MOV(ax, *(dw*)(raddr(ds,si+9))));	// 2334 mov     ax, [si+9] ;~ 01C2:0CD6
cs=0x1c2;eip=0x000cd9; 	J(CALL(sub_13bad,0));	// 2335 call    sub_13BAD ;~ 01C2:0CD9
cs=0x1c2;eip=0x000cdc; 	X(POP(bp));	// 2336 pop     bp ;~ 01C2:0CDC
cs=0x1c2;eip=0x000cdd; 	X(POP(di));	// 2337 pop     di ;~ 01C2:0CDD
cs=0x1c2;eip=0x000cde; 	T(ADD(di, dx));	// 2338 add     di, dx ;~ 01C2:0CDE
cs=0x1c2;eip=0x000ce0; 	X(POP(dx));	// 2339 pop     dx ;~ 01C2:0CE0
cs=0x1c2;eip=0x000ce1; 	X(POP(bx));	// 2340 pop     bx ;~ 01C2:0CE1
cs=0x1c2;eip=0x000ce2; 	R(RETN(0));	// 2341 retn ;~ 01C2:0CE2

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_10ec1: 	goto loc_10ec1;
        case m2c::kloc_10ed6: 	goto loc_10ed6;
        case m2c::kret_1c2_cb3: 	goto ret_1c2_cb3;
        case m2c::ksub_10eb2: 	goto sub_10eb2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_10ef0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_10ef0:
    _begin:
cs=0x1c2;eip=0x000cf0; 	X(PUSH(si));	// 2352 push    si ;~ 01C2:0CF0
ret_1c2_cf1:
	// 4580 
cs=0x1c2;eip=0x000cf1; 	X(PUSH(di));	// 2353 push    di ;~ 01C2:0CF1
cs=0x1c2;eip=0x000cf2; 	T(CMP(byte_1488a, 4));	// 2354 cmp     byte_1488A, 4 ;~ 01C2:0CF2
cs=0x1c2;eip=0x000cf7; 	J(JNZ(loc_10f01));	// 2355 jnz     short loc_10F01 ;~ 01C2:0CF7
cs=0x1c2;eip=0x000cf9; 	X(MOV(word_148cd, 0));	// 2356 mov     word_148CD, 0 ;~ 01C2:0CF9
cs=0x1c2;eip=0x000cff; 	J(JMP(loc_10f07));	// 2357 jmp     short loc_10F07 ;~ 01C2:0CFF
loc_10f01:
	// 4581 
cs=0x1c2;eip=0x000d01; 	X(MOV(word_148c9, 0));	// 2361 mov     word_148C9, 0 ;~ 01C2:0D01
loc_10f07:
	// 4582 
cs=0x1c2;eip=0x000d07; 	X(MOV(word_148c7, 0x3D9));	// 2364 mov     word_148C7, 3D9h ;~ 01C2:0D07
cs=0x1c2;eip=0x000d0d; 	T(MOV(cx, 0x13));	// 2365 mov     cx, 13h ;~ 01C2:0D0D
cs=0x1c2;eip=0x000d10; 	T(MOV(si, 0x3E6));	// 2366 mov     si, 3E6h ;~ 01C2:0D10
loc_10f13:
	// 4583 
cs=0x1c2;eip=0x000d13; 	X(PUSH(cx));	// 2369 push    cx ;~ 01C2:0D13
cs=0x1c2;eip=0x000d14; 	X(ADD(word_148c7, 0x0D));	// 2370 add     word_148C7, 0Dh ;~ 01C2:0D14
cs=0x1c2;eip=0x000d19; 	T(LODSB);	// 2371 lodsb ;~ 01C2:0D19
cs=0x1c2;eip=0x000d1a; 	X(MOV(byte_148c0, al));	// 2372 mov     byte_148C0, al ;~ 01C2:0D1A
cs=0x1c2;eip=0x000d1d; 	T(CMP(al, 7));	// 2373 cmp     al, 7 ;~ 01C2:0D1D
cs=0x1c2;eip=0x000d1f; 	J(JA(loc_10f25));	// 2374 ja      short loc_10F25 ;~ 01C2:0D1F
cs=0x1c2;eip=0x000d21; 	T(CMP(al, 5));	// 2375 cmp     al, 5 ;~ 01C2:0D21
cs=0x1c2;eip=0x000d23; 	J(JNC(loc_10f28));	// 2376 jnb     short loc_10F28 ;~ 01C2:0D23
loc_10f25:
	// 4584 
cs=0x1c2;eip=0x000d25; 	J(JMP(loc_11029));	// 2379 jmp     loc_11029 ;~ 01C2:0D25
loc_10f28:
	// 4585 
cs=0x1c2;eip=0x000d28; 	X(MOV(word_148d5, si));	// 2383 mov     word_148D5, si ;~ 01C2:0D28
cs=0x1c2;eip=0x000d2c; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 2384 mov     ax, [si] ;~ 01C2:0D2C
cs=0x1c2;eip=0x000d2e; 	T(MOV(bx, *(dw*)(raddr(ds,si+2))));	// 2385 mov     bx, [si+2] ;~ 01C2:0D2E
cs=0x1c2;eip=0x000d31; 	T(MOV(cx, word_14af6));	// 2386 mov     cx, word_14AF6 ;~ 01C2:0D31
cs=0x1c2;eip=0x000d35; 	T(CMP(byte_1488a, 5));	// 2387 cmp     byte_1488A, 5 ;~ 01C2:0D35
cs=0x1c2;eip=0x000d3a; 	J(JNZ(loc_10f47));	// 2388 jnz     short loc_10F47 ;~ 01C2:0D3A
cs=0x1c2;eip=0x000d3c; 	T(MOV(di, 0x3F4));	// 2389 mov     di, 3F4h ;~ 01C2:0D3C
cs=0x1c2;eip=0x000d3f; 	T(SUB(ax, *(dw*)(raddr(ds,di))));	// 2390 sub     ax, [di] ;~ 01C2:0D3F
cs=0x1c2;eip=0x000d41; 	T(SUB(bx, *(dw*)(raddr(ds,di+2))));	// 2391 sub     bx, [di+2] ;~ 01C2:0D41
cs=0x1c2;eip=0x000d44; 	T(MOV(cx, *(dw*)(raddr(ds,di+8))));	// 2392 mov     cx, [di+8] ;~ 01C2:0D44
loc_10f47:
	// 4586 
cs=0x1c2;eip=0x000d47; 	X(MOV(word_153ac, ax));	// 2395 mov     word_153AC, ax ;~ 01C2:0D47
cs=0x1c2;eip=0x000d4a; 	X(MOV(word_153ae, bx));	// 2396 mov     word_153AE, bx ;~ 01C2:0D4A
cs=0x1c2;eip=0x000d4e; 	T(MOV(si, 0x0D6C));	// 2397 mov     si, 0D6Ch ;~ 01C2:0D4E
cs=0x1c2;eip=0x000d51; 	X(PUSH(cx));	// 2398 push    cx ;~ 01C2:0D51
cs=0x1c2;eip=0x000d52; 	J(CALL(sub_13a90,0));	// 2399 call    sub_13A90 ;~ 01C2:0D52
cs=0x1c2;eip=0x000d55; 	X(POP(cx));	// 2400 pop     cx ;~ 01C2:0D55
cs=0x1c2;eip=0x000d56; 	X(MOV(word_148c3, ax));	// 2401 mov     word_148C3, ax ;~ 01C2:0D56
cs=0x1c2;eip=0x000d59; 	T(SUB(ax, cx));	// 2402 sub     ax, cx ;~ 01C2:0D59
cs=0x1c2;eip=0x000d5b; 	X(MOV(word_148d7, ax));	// 2403 mov     word_148D7, ax ;~ 01C2:0D5B
cs=0x1c2;eip=0x000d5e; 	J(CALL(sub_13b1a,0));	// 2404 call    sub_13B1A ;~ 01C2:0D5E
cs=0x1c2;eip=0x000d61; 	T(MOV(cl, 6));	// 2405 mov     cl, 6 ;~ 01C2:0D61
cs=0x1c2;eip=0x000d63; 	T(SHR(ax, cl));	// 2406 shr     ax, cl ;~ 01C2:0D63
cs=0x1c2;eip=0x000d65; 	X(MOV(word_148c5, ax));	// 2407 mov     word_148C5, ax ;~ 01C2:0D65
cs=0x1c2;eip=0x000d68; 	T(CMP(byte_1488a, 4));	// 2408 cmp     byte_1488A, 4 ;~ 01C2:0D68
cs=0x1c2;eip=0x000d6d; 	J(JNZ(loc_10f75));	// 2409 jnz     short loc_10F75 ;~ 01C2:0D6D
cs=0x1c2;eip=0x000d6f; 	T(MOV(cx, word_148cd));	// 2410 mov     cx, word_148CD ;~ 01C2:0D6F
cs=0x1c2;eip=0x000d73; 	J(JMP(loc_10f79));	// 2411 jmp     short loc_10F79 ;~ 01C2:0D73
loc_10f75:
	// 4587 
cs=0x1c2;eip=0x000d75; 	T(MOV(cx, word_148c9));	// 2415 mov     cx, word_148C9 ;~ 01C2:0D75
loc_10f79:
	// 4588 
cs=0x1c2;eip=0x000d79; 	J(JCXZ(loc_10f82));	// 2418 jcxz    short loc_10F82 ;~ 01C2:0D79
cs=0x1c2;eip=0x000d7b; 	T(CMP(ax, cx));	// 2419 cmp     ax, cx ;~ 01C2:0D7B
cs=0x1c2;eip=0x000d7d; 	J(JC(loc_10f82));	// 2420 jb      short loc_10F82 ;~ 01C2:0D7D
cs=0x1c2;eip=0x000d7f; 	J(JMP(loc_11025));	// 2421 jmp     loc_11025 ;~ 01C2:0D7F
loc_10f82:
	// 4589 
cs=0x1c2;eip=0x000d82; 	T(CMP(ax, 0x200));	// 2426 cmp     ax, 200h ;~ 01C2:0D82
cs=0x1c2;eip=0x000d85; 	J(JC(loc_10f8a));	// 2427 jb      short loc_10F8A ;~ 01C2:0D85
cs=0x1c2;eip=0x000d87; 	J(JMP(loc_11025));	// 2428 jmp     loc_11025 ;~ 01C2:0D87
loc_10f8a:
	// 4590 
cs=0x1c2;eip=0x000d8a; 	T(MOV(ax, word_148d7));	// 2432 mov     ax, word_148D7 ;~ 01C2:0D8A
loc_10f8d:
	// 4591 
cs=0x1c2;eip=0x000d8d; 	T(TEST(ax, 0x8000));	// 2435 test    ax, 8000h ;~ 01C2:0D8D
cs=0x1c2;eip=0x000d90; 	J(JZ(loc_10f97));	// 2436 jz      short loc_10F97 ;~ 01C2:0D90
cs=0x1c2;eip=0x000d92; 	T(ADD(ax, 0x480));	// 2437 add     ax, 480h ;~ 01C2:0D92
cs=0x1c2;eip=0x000d95; 	J(JMP(loc_10f8d));	// 2438 jmp     short loc_10F8D ;~ 01C2:0D95
loc_10f97:
	// 4592 
cs=0x1c2;eip=0x000d97; 	T(CMP(ax, 0x480));	// 2443 cmp     ax, 480h ;~ 01C2:0D97
cs=0x1c2;eip=0x000d9a; 	J(JC(loc_10fa1));	// 2444 jb      short loc_10FA1 ;~ 01C2:0D9A
cs=0x1c2;eip=0x000d9c; 	T(SUB(ax, 0x480));	// 2445 sub     ax, 480h ;~ 01C2:0D9C
cs=0x1c2;eip=0x000d9f; 	J(JMP(loc_10f97));	// 2446 jmp     short loc_10F97 ;~ 01C2:0D9F
loc_10fa1:
	// 4593 
cs=0x1c2;eip=0x000da1; 	X(MOV(word_148d7, ax));	// 2450 mov     word_148D7, ax ;~ 01C2:0DA1
cs=0x1c2;eip=0x000da4; 	T(CMP(ax, 0x60));	// 2451 cmp     ax, 60h ; '`' ;~ 01C2:0DA4
cs=0x1c2;eip=0x000da7; 	J(JC(loc_10fb8));	// 2452 jb      short loc_10FB8 ;~ 01C2:0DA7
cs=0x1c2;eip=0x000da9; 	T(CMP(ax, 0x420));	// 2453 cmp     ax, 420h ;~ 01C2:0DA9
cs=0x1c2;eip=0x000dac; 	J(JNC(loc_10fb8));	// 2454 jnb     short loc_10FB8 ;~ 01C2:0DAC
cs=0x1c2;eip=0x000dae; 	T(CMP(word_148c5, 0x32));	// 2455 cmp     word_148C5, 32h ; '2' ;~ 01C2:0DAE
cs=0x1c2;eip=0x000db3; 	J(JC(loc_10fb8));	// 2456 jb      short loc_10FB8 ;~ 01C2:0DB3
cs=0x1c2;eip=0x000db5; 	J(JMP(loc_11025));	// 2457 jmp     short loc_11025 ;~ 01C2:0DB5
loc_10fb8:
	// 4594 
cs=0x1c2;eip=0x000db8; 	T(MOV(bx, word_148c5));	// 2463 mov     bx, word_148C5 ;~ 01C2:0DB8
cs=0x1c2;eip=0x000dbc; 	T(MOV(dx, 0x240));	// 2464 mov     dx, 240h ;~ 01C2:0DBC
cs=0x1c2;eip=0x000dbf; 	T(MOV(ax, word_148c3));	// 2465 mov     ax, word_148C3 ;~ 01C2:0DBF
cs=0x1c2;eip=0x000dc2; 	T(SUB(dx, ax));	// 2466 sub     dx, ax ;~ 01C2:0DC2
cs=0x1c2;eip=0x000dc4; 	X(MOV(byte_148d1, 0x0FF));	// 2467 mov     byte_148D1, 0FFh ;~ 01C2:0DC4
cs=0x1c2;eip=0x000dc9; 	T(MOV(al, byte_148c0));	// 2468 mov     al, byte_148C0 ;~ 01C2:0DC9
cs=0x1c2;eip=0x000dcc; 	T(CMP(al, 5));	// 2469 cmp     al, 5 ;~ 01C2:0DCC
cs=0x1c2;eip=0x000dce; 	J(JZ(loc_10fe6));	// 2470 jz      short loc_10FE6 ;~ 01C2:0DCE
cs=0x1c2;eip=0x000dd0; 	T(CMP(al, 6));	// 2471 cmp     al, 6 ;~ 01C2:0DD0
cs=0x1c2;eip=0x000dd2; 	J(JZ(loc_10feb));	// 2472 jz      short loc_10FEB ;~ 01C2:0DD2
cs=0x1c2;eip=0x000dd4; 	J(CALL(sub_12603,0));	// 2473 call    sub_12603 ;~ 01C2:0DD4
cs=0x1c2;eip=0x000dd7; 	X(MOV(byte_148d1, 0));	// 2474 mov     byte_148D1, 0 ;~ 01C2:0DD7
cs=0x1c2;eip=0x000ddc; 	J(CALL(sub_1104e,0));	// 2475 call    sub_1104E ;~ 01C2:0DDC
cs=0x1c2;eip=0x000ddf; 	J(CALL(sub_11037,0));	// 2476 call    sub_11037 ;~ 01C2:0DDF
cs=0x1c2;eip=0x000de2; 	J(JNC(loc_11025));	// 2477 jnb     short loc_11025 ;~ 01C2:0DE2
cs=0x1c2;eip=0x000de4; 	J(JMP(loc_1100d));	// 2478 jmp     short loc_1100D ;~ 01C2:0DE4
loc_10fe6:
	// 4595 
cs=0x1c2;eip=0x000de6; 	J(CALL(sub_123f3,0));	// 2482 call    sub_123F3 ;~ 01C2:0DE6
cs=0x1c2;eip=0x000de9; 	J(JMP(loc_10fee));	// 2483 jmp     short loc_10FEE ;~ 01C2:0DE9
loc_10feb:
	// 4596 
cs=0x1c2;eip=0x000deb; 	J(CALL(sub_124fa,0));	// 2487 call    sub_124FA ;~ 01C2:0DEB
loc_10fee:
	// 4597 
cs=0x1c2;eip=0x000dee; 	X(MOV(byte_148d1, 0));	// 2490 mov     byte_148D1, 0 ;~ 01C2:0DEE
cs=0x1c2;eip=0x000df3; 	T(CMP(word_148c5, 0x3C));	// 2491 cmp     word_148C5, 3Ch ; '<' ;~ 01C2:0DF3
cs=0x1c2;eip=0x000df8; 	J(JNC(loc_10fff));	// 2492 jnb     short loc_10FFF ;~ 01C2:0DF8
cs=0x1c2;eip=0x000dfa; 	J(CALL(sub_1106f,0));	// 2493 call    sub_1106F ;~ 01C2:0DFA
cs=0x1c2;eip=0x000dfd; 	J(JMP(loc_11008));	// 2494 jmp     short loc_11008 ;~ 01C2:0DFD
loc_10fff:
	// 4598 
cs=0x1c2;eip=0x000dff; 	J(CALL(sub_1104e,0));	// 2498 call    sub_1104E ;~ 01C2:0DFF
cs=0x1c2;eip=0x000e02; 	T(SAR(bx, 1));	// 2499 sar     bx, 1 ;~ 01C2:0E02
cs=0x1c2;eip=0x000e04; 	T(DEC(bx));	// 2500 dec     bx ;~ 01C2:0E04
cs=0x1c2;eip=0x000e05; 	T(SAR(dx, 1));	// 2501 sar     dx, 1 ;~ 01C2:0E05
cs=0x1c2;eip=0x000e07; 	T(INC(dx));	// 2502 inc     dx ;~ 01C2:0E07
loc_11008:
	// 4599 
cs=0x1c2;eip=0x000e08; 	J(CALL(sub_11037,0));	// 2505 call    sub_11037 ;~ 01C2:0E08
cs=0x1c2;eip=0x000e0b; 	J(JNC(loc_11025));	// 2506 jnb     short loc_11025 ;~ 01C2:0E0B
loc_1100d:
	// 4600 
cs=0x1c2;eip=0x000e0d; 	T(CMP(byte_1488a, 4));	// 2509 cmp     byte_1488A, 4 ;~ 01C2:0E0D
cs=0x1c2;eip=0x000e12; 	J(JNZ(loc_11019));	// 2510 jnz     short loc_11019 ;~ 01C2:0E12
cs=0x1c2;eip=0x000e14; 	T(MOV(di, 0x28D));	// 2511 mov     di, 28Dh ;~ 01C2:0E14
cs=0x1c2;eip=0x000e17; 	J(JMP(loc_1101c));	// 2512 jmp     short loc_1101C ;~ 01C2:0E17
loc_11019:
	// 4601 
cs=0x1c2;eip=0x000e19; 	T(MOV(di, 0x289));	// 2516 mov     di, 289h ;~ 01C2:0E19
loc_1101c:
	// 4602 
cs=0x1c2;eip=0x000e1c; 	T(MOV(ax, word_148c5));	// 2519 mov     ax, word_148C5 ;~ 01C2:0E1C
cs=0x1c2;eip=0x000e1f; 	X(STOSW);	// 2520 stosw ;~ 01C2:0E1F
cs=0x1c2;eip=0x000e20; 	T(MOV(ax, word_148d5));	// 2521 mov     ax, word_148D5 ;~ 01C2:0E20
cs=0x1c2;eip=0x000e23; 	T(DEC(ax));	// 2522 dec     ax ;~ 01C2:0E23
cs=0x1c2;eip=0x000e24; 	X(STOSW);	// 2523 stosw ;~ 01C2:0E24
loc_11025:
	// 4603 
cs=0x1c2;eip=0x000e25; 	T(MOV(si, word_148d5));	// 2527 mov     si, word_148D5 ;~ 01C2:0E25
loc_11029:
	// 4604 
cs=0x1c2;eip=0x000e29; 	T(ADD(si, 0x0C));	// 2530 add     si, 0Ch ;~ 01C2:0E29
cs=0x1c2;eip=0x000e2c; 	X(POP(cx));	// 2531 pop     cx ;~ 01C2:0E2C
cs=0x1c2;eip=0x000e2d; 	T(DEC(cl));	// 2532 dec     cl ;~ 01C2:0E2D
cs=0x1c2;eip=0x000e2f; 	J(JZ(loc_11034));	// 2533 jz      short loc_11034 ;~ 01C2:0E2F
cs=0x1c2;eip=0x000e31; 	J(JMP(loc_10f13));	// 2534 jmp     loc_10F13 ;~ 01C2:0E31
loc_11034:
	// 4605 
cs=0x1c2;eip=0x000e34; 	X(POP(di));	// 2538 pop     di ;~ 01C2:0E34
cs=0x1c2;eip=0x000e35; 	X(POP(si));	// 2539 pop     si ;~ 01C2:0E35
cs=0x1c2;eip=0x000e36; 	R(RETN(0));	// 2540 retn ;~ 01C2:0E36

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_10f01: 	goto loc_10f01;
        case m2c::kloc_10f07: 	goto loc_10f07;
        case m2c::kloc_10f13: 	goto loc_10f13;
        case m2c::kloc_10f25: 	goto loc_10f25;
        case m2c::kloc_10f28: 	goto loc_10f28;
        case m2c::kloc_10f47: 	goto loc_10f47;
        case m2c::kloc_10f75: 	goto loc_10f75;
        case m2c::kloc_10f79: 	goto loc_10f79;
        case m2c::kloc_10f82: 	goto loc_10f82;
        case m2c::kloc_10f8a: 	goto loc_10f8a;
        case m2c::kloc_10f8d: 	goto loc_10f8d;
        case m2c::kloc_10f97: 	goto loc_10f97;
        case m2c::kloc_10fa1: 	goto loc_10fa1;
        case m2c::kloc_10fb8: 	goto loc_10fb8;
        case m2c::kloc_10fe6: 	goto loc_10fe6;
        case m2c::kloc_10feb: 	goto loc_10feb;
        case m2c::kloc_10fee: 	goto loc_10fee;
        case m2c::kloc_10fff: 	goto loc_10fff;
        case m2c::kloc_11008: 	goto loc_11008;
        case m2c::kloc_1100d: 	goto loc_1100d;
        case m2c::kloc_11019: 	goto loc_11019;
        case m2c::kloc_1101c: 	goto loc_1101c;
        case m2c::kloc_11025: 	goto loc_11025;
        case m2c::kloc_11029: 	goto loc_11029;
        case m2c::kloc_11034: 	goto loc_11034;
        case m2c::kret_1c2_cf1: 	goto ret_1c2_cf1;
        case m2c::ksub_10ef0: 	goto sub_10ef0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_11037(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11037:
    _begin:
cs=0x1c2;eip=0x000e37; 	T(MOV(ax, word_148d7));	// 2549 mov     ax, word_148D7 ;~ 01C2:0E37
ret_1c2_e3a:
	// 4606 
cs=0x1c2;eip=0x000e3a; 	T(CMP(ax, 0x120));	// 2550 cmp     ax, 120h ;~ 01C2:0E3A
cs=0x1c2;eip=0x000e3d; 	J(JC(loc_11042));	// 2551 jb      short loc_11042 ;~ 01C2:0E3D
cs=0x1c2;eip=0x000e3f; 	T(SUB(ax, 0x480));	// 2552 sub     ax, 480h ;~ 01C2:0E3F
loc_11042:
	// 4607 
cs=0x1c2;eip=0x000e42; 	T(ADD(bx, ax));	// 2555 add     bx, ax ;~ 01C2:0E42
cs=0x1c2;eip=0x000e44; 	J(JNS(loc_1104c));	// 2556 jns     short loc_1104C ;~ 01C2:0E44
cs=0x1c2;eip=0x000e46; 	T(ADD(dx, ax));	// 2557 add     dx, ax ;~ 01C2:0E46
cs=0x1c2;eip=0x000e48; 	J(JS(loc_1104c));	// 2558 js      short loc_1104C ;~ 01C2:0E48
cs=0x1c2;eip=0x000e4a; 	T(STC);	// 2559 stc ;~ 01C2:0E4A
cs=0x1c2;eip=0x000e4b; 	R(RETN(0));	// 2560 retn ;~ 01C2:0E4B
loc_1104c:
	// 4608 
cs=0x1c2;eip=0x000e4c; 	T(CLC);	// 2565 clc ;~ 01C2:0E4C
cs=0x1c2;eip=0x000e4d; 	R(RETN(0));	// 2566 retn ;~ 01C2:0E4D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_11042: 	goto loc_11042;
        case m2c::kloc_1104c: 	goto loc_1104c;
        case m2c::kret_1c2_e3a: 	goto ret_1c2_e3a;
        case m2c::ksub_11037: 	goto sub_11037;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1104e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1104e:
    _begin:
cs=0x1c2;eip=0x000e4e; 	T(MOV(si, 0x0BBA3));	// 2575 mov     si, 0BBA3h ;~ 01C2:0E4E
ret_1c2_e51:
	// 4609 
cs=0x1c2;eip=0x000e51; 	T(MOV(cx, 4));	// 2576 mov     cx, 4 ;~ 01C2:0E51
cs=0x1c2;eip=0x000e54; 	T(XOR(bx, bx));	// 2577 xor     bx, bx ;~ 01C2:0E54
cs=0x1c2;eip=0x000e56; 	T(MOV(dx, bx));	// 2578 mov     dx, bx ;~ 01C2:0E56
loc_11058:
	// 4610 
cs=0x1c2;eip=0x000e58; 	T(LODSW);	// 2581 lodsw ;~ 01C2:0E58
cs=0x1c2;eip=0x000e59; 	T(CMP(ax, bx));	// 2582 cmp     ax, bx ;~ 01C2:0E59
cs=0x1c2;eip=0x000e5b; 	J(JNS(loc_11061));	// 2583 jns     short loc_11061 ;~ 01C2:0E5B
cs=0x1c2;eip=0x000e5d; 	T(MOV(bx, ax));	// 2584 mov     bx, ax ;~ 01C2:0E5D
cs=0x1c2;eip=0x000e5f; 	T(MOV(di, si));	// 2585 mov     di, si ;~ 01C2:0E5F
loc_11061:
	// 4611 
cs=0x1c2;eip=0x000e61; 	T(CMP(ax, dx));	// 2588 cmp     ax, dx ;~ 01C2:0E61
cs=0x1c2;eip=0x000e63; 	J(JS(loc_11069));	// 2589 js      short loc_11069 ;~ 01C2:0E63
cs=0x1c2;eip=0x000e65; 	T(MOV(dx, ax));	// 2590 mov     dx, ax ;~ 01C2:0E65
cs=0x1c2;eip=0x000e67; 	T(MOV(bp, si));	// 2591 mov     bp, si ;~ 01C2:0E67
loc_11069:
	// 4612 
cs=0x1c2;eip=0x000e69; 	T(ADD(si, 2));	// 2594 add     si, 2 ;~ 01C2:0E69
cs=0x1c2;eip=0x000e6c; 	J(LOOP(loc_11058));	// 2595 loop    loc_11058 ;~ 01C2:0E6C
cs=0x1c2;eip=0x000e6e; 	R(RETN(0));	// 2596 retn ;~ 01C2:0E6E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_11058: 	goto loc_11058;
        case m2c::kloc_11061: 	goto loc_11061;
        case m2c::kloc_11069: 	goto loc_11069;
        case m2c::kret_1c2_e51: 	goto ret_1c2_e51;
        case m2c::ksub_1104e: 	goto sub_1104e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1106f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1106f:
    _begin:
cs=0x1c2;eip=0x000e6f; 	J(CALL(sub_1104e,0));	// 2604 call    sub_1104E ;~ 01C2:0E6F
ret_1c2_e72:
	// 4613 
cs=0x1c2;eip=0x000e72; 	X(PUSH(bx));	// 2605 push    bx ;~ 01C2:0E72
cs=0x1c2;eip=0x000e73; 	T(MOV(ax, word_201f5));	// 2606 mov     ax, word_201F5 ;~ 01C2:0E73
cs=0x1c2;eip=0x000e76; 	T(NEG(ax));	// 2607 neg     ax ;~ 01C2:0E76
cs=0x1c2;eip=0x000e78; 	X(PUSH(ax));	// 2608 push    ax ;~ 01C2:0E78
cs=0x1c2;eip=0x000e79; 	T(MOV(bx, dx));	// 2609 mov     bx, dx ;~ 01C2:0E79
cs=0x1c2;eip=0x000e7b; 	T(MUL1_2(bx));	// 2610 mul     bx ;~ 01C2:0E7B
cs=0x1c2;eip=0x000e7d; 	T(MOV(si, bp));	// 2611 mov     si, bp ;~ 01C2:0E7D
cs=0x1c2;eip=0x000e7f; 	T(MOV(cx, *(dw*)(raddr(ds,si))));	// 2612 mov     cx, [si] ;~ 01C2:0E7F
cs=0x1c2;eip=0x000e81; 	X(POP(dx));	// 2613 pop     dx ;~ 01C2:0E81
cs=0x1c2;eip=0x000e82; 	X(PUSH(dx));	// 2614 push    dx ;~ 01C2:0E82
cs=0x1c2;eip=0x000e83; 	T(ADD(cx, dx));	// 2615 add     cx, dx ;~ 01C2:0E83
cs=0x1c2;eip=0x000e85; 	T(XOR(dx, dx));	// 2616 xor     dx, dx ;~ 01C2:0E85
cs=0x1c2;eip=0x000e87; 	T(DIV2(cx));	// 2617 div     cx ;~ 01C2:0E87
cs=0x1c2;eip=0x000e89; 	X(MOV(word_201e3, ax));	// 2618 mov     word_201E3, ax ;~ 01C2:0E89
cs=0x1c2;eip=0x000e8c; 	X(POP(ax));	// 2619 pop     ax ;~ 01C2:0E8C
cs=0x1c2;eip=0x000e8d; 	X(POP(bx));	// 2620 pop     bx ;~ 01C2:0E8D
cs=0x1c2;eip=0x000e8e; 	T(NEG(bx));	// 2621 neg     bx ;~ 01C2:0E8E
cs=0x1c2;eip=0x000e90; 	T(MUL1_2(bx));	// 2622 mul     bx ;~ 01C2:0E90
cs=0x1c2;eip=0x000e92; 	T(XOR(dx, dx));	// 2623 xor     dx, dx ;~ 01C2:0E92
cs=0x1c2;eip=0x000e94; 	T(DIV2(cx));	// 2624 div     cx ;~ 01C2:0E94
cs=0x1c2;eip=0x000e96; 	T(NEG(ax));	// 2625 neg     ax ;~ 01C2:0E96
cs=0x1c2;eip=0x000e98; 	T(SUB(ax, 3));	// 2626 sub     ax, 3 ;~ 01C2:0E98
cs=0x1c2;eip=0x000e9b; 	T(MOV(bx, ax));	// 2627 mov     bx, ax ;~ 01C2:0E9B
cs=0x1c2;eip=0x000e9d; 	T(MOV(dx, word_201e3));	// 2628 mov     dx, word_201E3 ;~ 01C2:0E9D
cs=0x1c2;eip=0x000ea1; 	T(ADD(dx, 3));	// 2629 add     dx, 3 ;~ 01C2:0EA1
cs=0x1c2;eip=0x000ea4; 	R(RETN(0));	// 2630 retn ;~ 01C2:0EA4

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_e72: 	goto ret_1c2_e72;
        case m2c::ksub_1106f: 	goto sub_1106f;
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
sub_11187:
	// 2749 
cs=0x1c2;eip=0x000f87; 	T(MOV(cx, 3));	// 2751 mov     cx, 3 ;~ 01C2:0F87
sub_1118a:
	// 2758 
cs=0x1c2;eip=0x000f8a; 	T(MOV(bl, 0x0FF));	// 2759 mov     bl, 0FFh ;~ 01C2:0F8A
ret_1c2_f8c:
	// 4619 
cs=0x1c2;eip=0x000f8c; 	T(XOR(bl, ah));	// 2760 xor     bl, ah ;~ 01C2:0F8C
cs=0x1c2;eip=0x000f8e; 	T(INC(di));	// 2761 inc     di ;~ 01C2:0F8E
loc_1118f:
	// 4620 
cs=0x1c2;eip=0x000f8f; 	T(ADD(di, 0x1FFF));	// 2764 add     di, 1FFFh ;~ 01C2:0F8F
cs=0x1c2;eip=0x000f93; 	T(MOV(al, *(raddr(es,di))));	// 2765 mov     al, es:[di] ;~ 01C2:0F93
cs=0x1c2;eip=0x000f96; 	T(AND(al, bl));	// 2766 and     al, bl ;~ 01C2:0F96
cs=0x1c2;eip=0x000f98; 	T(XOR(al, ah));	// 2767 xor     al, ah ;~ 01C2:0F98
cs=0x1c2;eip=0x000f9a; 	X(STOSB);	// 2768 stosb ;~ 01C2:0F9A
cs=0x1c2;eip=0x000f9b; 	T(ADD(di, 0x0E04F));	// 2769 add     di, 0E04Fh ;~ 01C2:0F9B
cs=0x1c2;eip=0x000f9f; 	T(MOV(al, *(raddr(es,di))));	// 2770 mov     al, es:[di] ;~ 01C2:0F9F
cs=0x1c2;eip=0x000fa2; 	T(AND(al, bl));	// 2771 and     al, bl ;~ 01C2:0FA2
cs=0x1c2;eip=0x000fa4; 	T(XOR(al, ah));	// 2772 xor     al, ah ;~ 01C2:0FA4
cs=0x1c2;eip=0x000fa6; 	X(STOSB);	// 2773 stosb ;~ 01C2:0FA6
cs=0x1c2;eip=0x000fa7; 	J(LOOP(loc_1118f));	// 2774 loop    loc_1118F ;~ 01C2:0FA7
cs=0x1c2;eip=0x000fa9; 	R(RETN(0));	// 2775 retn ;~ 01C2:0FA9

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_1118f: 	goto loc_1118f;
        case m2c::kret_1c2_f8c: 	goto ret_1c2_f8c;
        case m2c::ksub_11187: 	goto sub_11187;
        case m2c::ksub_1118a: 	goto sub_1118a;
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
sub_111aa:
	// 2782 
cs=0x1c2;eip=0x000faa; 	T(MOV(si, 0x2DE));	// 2783 mov     si, 2DEh ;~ 01C2:0FAA
ret_1c2_fad:
	// 4621 
cs=0x1c2;eip=0x000fad; 	J(JMP(loc_111be));	// 2784 jmp     short loc_111BE ;~ 01C2:0FAD
sub_111af:
	// 2791 
cs=0x1c2;eip=0x000faf; 	T(MOV(si, 0x2C7));	// 2792 mov     si, 2C7h ;~ 01C2:0FAF
ret_1c2_fb2:
	// 4622 
cs=0x1c2;eip=0x000fb2; 	J(JMP(loc_111be));	// 2793 jmp     short loc_111BE ;~ 01C2:0FB2
sub_111b4:
	// 2800 
cs=0x1c2;eip=0x000fb4; 	T(MOV(si, 0x30C));	// 2801 mov     si, 30Ch ;~ 01C2:0FB4
ret_1c2_fb7:
	// 4623 
cs=0x1c2;eip=0x000fb7; 	J(JMP(loc_111be));	// 2802 jmp     short loc_111BE ;~ 01C2:0FB7
sub_111b9:
	// 2809 
cs=0x1c2;eip=0x000fb9; 	T(MOV(si, 0x2F5));	// 2810 mov     si, 2F5h ;~ 01C2:0FB9
ret_1c2_fbc:
	// 4624 
cs=0x1c2;eip=0x000fbc; 	J({;});	// 2811 jmp     short $+2 ;~ 01C2:0FBC
loc_111be:
	// 4625 
cs=0x1c2;eip=0x000fbe; 	T(LODSW);	// 2816 lodsw ;~ 01C2:0FBE
cs=0x1c2;eip=0x000fbf; 	T(CMP(ax, 0x8000));	// 2817 cmp     ax, 8000h ;~ 01C2:0FBF
cs=0x1c2;eip=0x000fc2; 	J(JZ(locret_111d1));	// 2818 jz      short locret_111D1 ;~ 01C2:0FC2
cs=0x1c2;eip=0x000fc4; 	T(ADD(di, ax));	// 2819 add     di, ax ;~ 01C2:0FC4
cs=0x1c2;eip=0x000fc6; 	T(LODSB);	// 2820 lodsb ;~ 01C2:0FC6
cs=0x1c2;eip=0x000fc7; 	T(MOV(ah, *(raddr(es,di))));	// 2821 mov     ah, es:[di] ;~ 01C2:0FC7
cs=0x1c2;eip=0x000fca; 	T(OR(al, ah));	// 2822 or      al, ah ;~ 01C2:0FCA
cs=0x1c2;eip=0x000fcc; 	X(MOV(*(raddr(es,di)), al));	// 2823 mov     es:[di], al ;~ 01C2:0FCC
cs=0x1c2;eip=0x000fcf; 	J(JMP(loc_111be));	// 2824 jmp     short loc_111BE ;~ 01C2:0FCF
locret_111d1:
	// 4626 
cs=0x1c2;eip=0x000fd1; 	R(RETN(0));	// 2828 retn ;~ 01C2:0FD1

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_111be: 	goto loc_111be;
        case m2c::klocret_111d1: 	goto locret_111d1;
        case m2c::kret_1c2_fad: 	goto ret_1c2_fad;
        case m2c::kret_1c2_fb2: 	goto ret_1c2_fb2;
        case m2c::kret_1c2_fb7: 	goto ret_1c2_fb7;
        case m2c::kret_1c2_fbc: 	goto ret_1c2_fbc;
        case m2c::ksub_111aa: 	goto sub_111aa;
        case m2c::ksub_111af: 	goto sub_111af;
        case m2c::ksub_111b4: 	goto sub_111b4;
        case m2c::ksub_111b9: 	goto sub_111b9;
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
sub_111d2:
	// 2835 
cs=0x1c2;eip=0x000fd2; 	T(MOV(cx, 3));	// 2837 mov     cx, 3 ;~ 01C2:0FD2
sub_111d5:
	// 2844 
cs=0x1c2;eip=0x000fd5; 	T(MOV(bl, 0x0FF));	// 2845 mov     bl, 0FFh ;~ 01C2:0FD5
ret_1c2_fd7:
	// 4627 
cs=0x1c2;eip=0x000fd7; 	T(XOR(bl, ah));	// 2846 xor     bl, ah ;~ 01C2:0FD7
cs=0x1c2;eip=0x000fd9; 	T(INC(di));	// 2847 inc     di ;~ 01C2:0FD9
loc_111da:
	// 4628 
cs=0x1c2;eip=0x000fda; 	T(ADD(di, 0x1FAF));	// 2850 add     di, 1FAFh ;~ 01C2:0FDA
cs=0x1c2;eip=0x000fde; 	T(MOV(al, *(raddr(es,di))));	// 2851 mov     al, es:[di] ;~ 01C2:0FDE
cs=0x1c2;eip=0x000fe1; 	T(AND(al, bl));	// 2852 and     al, bl ;~ 01C2:0FE1
cs=0x1c2;eip=0x000fe3; 	T(XOR(al, ah));	// 2853 xor     al, ah ;~ 01C2:0FE3
cs=0x1c2;eip=0x000fe5; 	X(STOSB);	// 2854 stosb ;~ 01C2:0FE5
cs=0x1c2;eip=0x000fe6; 	T(ADD(di, 0x0DFFF));	// 2855 add     di, 0DFFFh ;~ 01C2:0FE6
cs=0x1c2;eip=0x000fea; 	T(MOV(al, *(raddr(es,di))));	// 2856 mov     al, es:[di] ;~ 01C2:0FEA
cs=0x1c2;eip=0x000fed; 	T(AND(al, bl));	// 2857 and     al, bl ;~ 01C2:0FED
cs=0x1c2;eip=0x000fef; 	T(XOR(al, ah));	// 2858 xor     al, ah ;~ 01C2:0FEF
cs=0x1c2;eip=0x000ff1; 	X(STOSB);	// 2859 stosb ;~ 01C2:0FF1
cs=0x1c2;eip=0x000ff2; 	J(LOOP(loc_111da));	// 2860 loop    loc_111DA ;~ 01C2:0FF2
cs=0x1c2;eip=0x000ff4; 	R(RETN(0));	// 2861 retn ;~ 01C2:0FF4

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_111da: 	goto loc_111da;
        case m2c::kret_1c2_fd7: 	goto ret_1c2_fd7;
        case m2c::ksub_111d2: 	goto sub_111d2;
        case m2c::ksub_111d5: 	goto sub_111d5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_111f5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_111f5:
    _begin:
cs=0x1c2;eip=0x000ff5; 	T(MOV(cx, 8));	// 2869 mov     cx, 8 ;~ 01C2:0FF5
loc_111f8:
	// 4629 
cs=0x1c2;eip=0x000ff8; 	T(ADD(di, 0x1FB0));	// 2872 add     di, 1FB0h ;~ 01C2:0FF8
cs=0x1c2;eip=0x000ffc; 	T(MOV(al, *(raddr(es,di))));	// 2873 mov     al, es:[di] ;~ 01C2:0FFC
cs=0x1c2;eip=0x000fff; 	T(OR(al, 0x0F0));	// 2874 or      al, 0F0h ;~ 01C2:0FFF
cs=0x1c2;eip=0x001001; 	X(MOV(*(raddr(es,di)), al));	// 2875 mov     es:[di], al ;~ 01C2:1001
cs=0x1c2;eip=0x001004; 	T(MOV(al, *(raddr(es,di-1))));	// 2876 mov     al, es:[di-1] ;~ 01C2:1004
cs=0x1c2;eip=0x001008; 	T(OR(al, 3));	// 2877 or      al, 3 ;~ 01C2:1008
cs=0x1c2;eip=0x00100a; 	X(MOV(*(raddr(es,di-1)), al));	// 2878 mov     es:[di-1], al ;~ 01C2:100A
cs=0x1c2;eip=0x00100e; 	T(ADD(di, 0x0E000));	// 2879 add     di, 0E000h ;~ 01C2:100E
cs=0x1c2;eip=0x001012; 	T(MOV(al, *(raddr(es,di))));	// 2880 mov     al, es:[di] ;~ 01C2:1012
cs=0x1c2;eip=0x001015; 	T(OR(al, 0x0F0));	// 2881 or      al, 0F0h ;~ 01C2:1015
cs=0x1c2;eip=0x001017; 	X(MOV(*(raddr(es,di)), al));	// 2882 mov     es:[di], al ;~ 01C2:1017
cs=0x1c2;eip=0x00101a; 	T(MOV(al, *(raddr(es,di-1))));	// 2883 mov     al, es:[di-1] ;~ 01C2:101A
cs=0x1c2;eip=0x00101e; 	T(OR(al, 3));	// 2884 or      al, 3 ;~ 01C2:101E
cs=0x1c2;eip=0x001020; 	X(MOV(*(raddr(es,di-1)), al));	// 2885 mov     es:[di-1], al ;~ 01C2:1020
cs=0x1c2;eip=0x001024; 	J(LOOP(loc_111f8));	// 2886 loop    loc_111F8 ;~ 01C2:1024
cs=0x1c2;eip=0x001026; 	R(RETN(0));	// 2887 retn ;~ 01C2:1026

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_111f8: 	goto loc_111f8;
        case m2c::ksub_111f5: 	goto sub_111f5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_11227(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11227:
    _begin:
cs=0x1c2;eip=0x001027; 	T(MOV(cx, 8));	// 2895 mov     cx, 8 ;~ 01C2:1027
loc_1122a:
	// 4630 
cs=0x1c2;eip=0x00102a; 	T(ADD(di, 0x2000));	// 2898 add     di, 2000h ;~ 01C2:102A
cs=0x1c2;eip=0x00102e; 	T(MOV(al, *(raddr(es,di))));	// 2899 mov     al, es:[di] ;~ 01C2:102E
cs=0x1c2;eip=0x001031; 	T(OR(al, 0x0F0));	// 2900 or      al, 0F0h ;~ 01C2:1031
cs=0x1c2;eip=0x001033; 	X(MOV(*(raddr(es,di)), al));	// 2901 mov     es:[di], al ;~ 01C2:1033
cs=0x1c2;eip=0x001036; 	T(MOV(al, *(raddr(es,di-1))));	// 2902 mov     al, es:[di-1] ;~ 01C2:1036
cs=0x1c2;eip=0x00103a; 	T(OR(al, 3));	// 2903 or      al, 3 ;~ 01C2:103A
cs=0x1c2;eip=0x00103c; 	X(MOV(*(raddr(es,di-1)), al));	// 2904 mov     es:[di-1], al ;~ 01C2:103C
cs=0x1c2;eip=0x001040; 	T(ADD(di, 0x0E050));	// 2905 add     di, 0E050h ;~ 01C2:1040
cs=0x1c2;eip=0x001044; 	T(MOV(al, *(raddr(es,di))));	// 2906 mov     al, es:[di] ;~ 01C2:1044
cs=0x1c2;eip=0x001047; 	T(OR(al, 0x0F0));	// 2907 or      al, 0F0h ;~ 01C2:1047
cs=0x1c2;eip=0x001049; 	X(MOV(*(raddr(es,di)), al));	// 2908 mov     es:[di], al ;~ 01C2:1049
cs=0x1c2;eip=0x00104c; 	T(MOV(al, *(raddr(es,di-1))));	// 2909 mov     al, es:[di-1] ;~ 01C2:104C
cs=0x1c2;eip=0x001050; 	T(OR(al, 3));	// 2910 or      al, 3 ;~ 01C2:1050
cs=0x1c2;eip=0x001052; 	X(MOV(*(raddr(es,di-1)), al));	// 2911 mov     es:[di-1], al ;~ 01C2:1052
cs=0x1c2;eip=0x001056; 	J(LOOP(loc_1122a));	// 2912 loop    loc_1122A ;~ 01C2:1056
cs=0x1c2;eip=0x001058; 	R(RETN(0));	// 2913 retn ;~ 01C2:1058

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_1122a: 	goto loc_1122a;
        case m2c::ksub_11227: 	goto sub_11227;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_11259(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11259:
    _begin:
cs=0x1c2;eip=0x001059; 	T(MOV(si, 0x0B800));	// 2921 mov     si, 0B800h ;~ 01C2:1059
ret_1c2_105c:
	// 4631 
cs=0x1c2;eip=0x00105c; 	T(MOV(bp, 0));	// 2922 mov     bp, 0 ;~ 01C2:105C
cs=0x1c2;eip=0x00105f; 	T(ADD(bp, 0x528));	// 2923 add     bp, 528h ;~ 01C2:105F
cs=0x1c2;eip=0x001063; 	T(XOR(bh, bh));	// 2924 xor     bh, bh ;~ 01C2:1063
loc_11265:
	// 4632 
cs=0x1c2;eip=0x001065; 	T(LODSB);	// 2927 lodsb ;~ 01C2:1065
cs=0x1c2;eip=0x001066; 	T(CMP(al, 0x0FF));	// 2928 cmp     al, 0FFh ;~ 01C2:1066
cs=0x1c2;eip=0x001068; 	J(JNZ(loc_1126d));	// 2929 jnz     short loc_1126D ;~ 01C2:1068
cs=0x1c2;eip=0x00106a; 	J(JMP(loc_11305));	// 2930 jmp     loc_11305 ;~ 01C2:106A
loc_1126d:
	// 4633 
cs=0x1c2;eip=0x00106d; 	T(MOV(dh, al));	// 2934 mov     dh, al ;~ 01C2:106D
cs=0x1c2;eip=0x00106f; 	T(LODSB);	// 2935 lodsb ;~ 01C2:106F
cs=0x1c2;eip=0x001070; 	T(MOV(bl, dh));	// 2936 mov     bl, dh ;~ 01C2:1070
cs=0x1c2;eip=0x001072; 	T(SHR(bl, 1));	// 2937 shr     bl, 1 ;~ 01C2:1072
cs=0x1c2;eip=0x001074; 	T(SHR(bl, 1));	// 2938 shr     bl, 1 ;~ 01C2:1074
cs=0x1c2;eip=0x001076; 	T(MOV(di, bp));	// 2939 mov     di, bp ;~ 01C2:1076
cs=0x1c2;eip=0x001078; 	T(ADD(di, bx));	// 2940 add     di, bx ;~ 01C2:1078
cs=0x1c2;eip=0x00107a; 	X(PUSH(di));	// 2941 push    di ;~ 01C2:107A
cs=0x1c2;eip=0x00107b; 	X(MOV(byte_148f7, al));	// 2942 mov     byte_148F7, al ;~ 01C2:107B
cs=0x1c2;eip=0x00107e; 	T(SHR(al, 1));	// 2943 shr     al, 1 ;~ 01C2:107E
cs=0x1c2;eip=0x001080; 	X(MUL1_1(byte_148f6));	// 2944 mul     byte_148F6 ;~ 01C2:1080
cs=0x1c2;eip=0x001084; 	T(MOV(cx, ax));	// 2945 mov     cx, ax ;~ 01C2:1084
cs=0x1c2;eip=0x001086; 	T(ADD(di, ax));	// 2946 add     di, ax ;~ 01C2:1086
cs=0x1c2;eip=0x001088; 	T(TEST(byte_148f7, 1));	// 2947 test    byte_148F7, 1 ;~ 01C2:1088
cs=0x1c2;eip=0x00108d; 	J(JZ(loc_11293));	// 2948 jz      short loc_11293 ;~ 01C2:108D
cs=0x1c2;eip=0x00108f; 	T(ADD(di, 0x2000));	// 2949 add     di, 2000h ;~ 01C2:108F
loc_11293:
	// 4634 
cs=0x1c2;eip=0x001093; 	T(MOV(bl, dh));	// 2952 mov     bl, dh ;~ 01C2:1093
cs=0x1c2;eip=0x001095; 	T(AND(bl, 3));	// 2953 and     bl, 3 ;~ 01C2:1095
cs=0x1c2;eip=0x001098; 	T(MOV(al, *(raddr(ds,bx+0x2BB))));	// 2954 mov     al, [bx+2BBh] ;~ 01C2:1098
cs=0x1c2;eip=0x00109c; 	T(MOV(dl, al));	// 2955 mov     dl, al ;~ 01C2:109C
cs=0x1c2;eip=0x00109e; 	T(MOV(ah, *(raddr(es,di))));	// 2956 mov     ah, es:[di] ;~ 01C2:109E
cs=0x1c2;eip=0x0010a1; 	T(OR(al, ah));	// 2957 or      al, ah ;~ 01C2:10A1
cs=0x1c2;eip=0x0010a3; 	X(STOSB);	// 2958 stosb ;~ 01C2:10A3
cs=0x1c2;eip=0x0010a4; 	X(POP(di));	// 2959 pop     di ;~ 01C2:10A4
cs=0x1c2;eip=0x0010a5; 	T(SUB(di, cx));	// 2960 sub     di, cx ;~ 01C2:10A5
cs=0x1c2;eip=0x0010a7; 	T(TEST(byte_148f7, 1));	// 2961 test    byte_148F7, 1 ;~ 01C2:10A7
cs=0x1c2;eip=0x0010ac; 	J(JZ(loc_112b2));	// 2962 jz      short loc_112B2 ;~ 01C2:10AC
cs=0x1c2;eip=0x0010ae; 	T(ADD(di, 0x1FB0));	// 2963 add     di, 1FB0h ;~ 01C2:10AE
loc_112b2:
	// 4635 
cs=0x1c2;eip=0x0010b2; 	T(MOV(al, dl));	// 2966 mov     al, dl ;~ 01C2:10B2
cs=0x1c2;eip=0x0010b4; 	T(MOV(ah, *(raddr(es,di))));	// 2967 mov     ah, es:[di] ;~ 01C2:10B4
cs=0x1c2;eip=0x0010b7; 	T(OR(al, ah));	// 2968 or      al, ah ;~ 01C2:10B7
cs=0x1c2;eip=0x0010b9; 	X(STOSB);	// 2969 stosb ;~ 01C2:10B9
cs=0x1c2;eip=0x0010ba; 	T(OR(dh, dh));	// 2970 or      dh, dh ;~ 01C2:10BA
cs=0x1c2;eip=0x0010bc; 	J(JZ(loc_11302));	// 2971 jz      short loc_11302 ;~ 01C2:10BC
cs=0x1c2;eip=0x0010be; 	T(DEC(dh));	// 2972 dec     dh ;~ 01C2:10BE
cs=0x1c2;eip=0x0010c0; 	T(MOV(di, bp));	// 2973 mov     di, bp ;~ 01C2:10C0
cs=0x1c2;eip=0x0010c2; 	T(DEC(di));	// 2974 dec     di ;~ 01C2:10C2
cs=0x1c2;eip=0x0010c3; 	T(MOV(bl, dh));	// 2975 mov     bl, dh ;~ 01C2:10C3
cs=0x1c2;eip=0x0010c5; 	T(SHR(bl, 1));	// 2976 shr     bl, 1 ;~ 01C2:10C5
cs=0x1c2;eip=0x0010c7; 	T(SHR(bl, 1));	// 2977 shr     bl, 1 ;~ 01C2:10C7
cs=0x1c2;eip=0x0010c9; 	T(SUB(di, bx));	// 2978 sub     di, bx ;~ 01C2:10C9
cs=0x1c2;eip=0x0010cb; 	X(PUSH(di));	// 2979 push    di ;~ 01C2:10CB
cs=0x1c2;eip=0x0010cc; 	T(ADD(di, cx));	// 2980 add     di, cx ;~ 01C2:10CC
cs=0x1c2;eip=0x0010ce; 	T(TEST(byte_148f7, 1));	// 2981 test    byte_148F7, 1 ;~ 01C2:10CE
cs=0x1c2;eip=0x0010d3; 	J(JZ(loc_112d9));	// 2982 jz      short loc_112D9 ;~ 01C2:10D3
cs=0x1c2;eip=0x0010d5; 	T(ADD(di, 0x2000));	// 2983 add     di, 2000h ;~ 01C2:10D5
loc_112d9:
	// 4636 
cs=0x1c2;eip=0x0010d9; 	T(AND(dh, 3));	// 2986 and     dh, 3 ;~ 01C2:10D9
cs=0x1c2;eip=0x0010dc; 	T(MOV(bl, 3));	// 2987 mov     bl, 3 ;~ 01C2:10DC
cs=0x1c2;eip=0x0010de; 	T(SUB(bl, dh));	// 2988 sub     bl, dh ;~ 01C2:10DE
cs=0x1c2;eip=0x0010e0; 	T(MOV(al, *(raddr(ds,bx+0x2BB))));	// 2989 mov     al, [bx+2BBh] ;~ 01C2:10E0
cs=0x1c2;eip=0x0010e4; 	T(MOV(dl, al));	// 2990 mov     dl, al ;~ 01C2:10E4
cs=0x1c2;eip=0x0010e6; 	T(MOV(ah, *(raddr(es,di))));	// 2991 mov     ah, es:[di] ;~ 01C2:10E6
cs=0x1c2;eip=0x0010e9; 	T(OR(al, ah));	// 2992 or      al, ah ;~ 01C2:10E9
cs=0x1c2;eip=0x0010eb; 	X(STOSB);	// 2993 stosb ;~ 01C2:10EB
cs=0x1c2;eip=0x0010ec; 	X(POP(di));	// 2994 pop     di ;~ 01C2:10EC
cs=0x1c2;eip=0x0010ed; 	T(SUB(di, cx));	// 2995 sub     di, cx ;~ 01C2:10ED
cs=0x1c2;eip=0x0010ef; 	T(TEST(byte_148f7, 1));	// 2996 test    byte_148F7, 1 ;~ 01C2:10EF
cs=0x1c2;eip=0x0010f4; 	J(JZ(loc_112fa));	// 2997 jz      short loc_112FA ;~ 01C2:10F4
cs=0x1c2;eip=0x0010f6; 	T(ADD(di, 0x1FB0));	// 2998 add     di, 1FB0h ;~ 01C2:10F6
loc_112fa:
	// 4637 
cs=0x1c2;eip=0x0010fa; 	T(MOV(al, dl));	// 3001 mov     al, dl ;~ 01C2:10FA
cs=0x1c2;eip=0x0010fc; 	T(MOV(ah, *(raddr(es,di))));	// 3002 mov     ah, es:[di] ;~ 01C2:10FC
cs=0x1c2;eip=0x0010ff; 	T(OR(al, ah));	// 3003 or      al, ah ;~ 01C2:10FF
cs=0x1c2;eip=0x001101; 	X(STOSB);	// 3004 stosb ;~ 01C2:1101
loc_11302:
	// 4638 
cs=0x1c2;eip=0x001102; 	J(JMP(loc_11265));	// 3007 jmp     loc_11265 ;~ 01C2:1102
loc_11305:
	// 4639 
cs=0x1c2;eip=0x001105; 	T(MOV(di, bp));	// 3011 mov     di, bp ;~ 01C2:1105
cs=0x1c2;eip=0x001107; 	T(ADD(di, 0x460));	// 3012 add     di, 460h ;~ 01C2:1107
cs=0x1c2;eip=0x00110b; 	T(MOV(al, byte_148fb));	// 3013 mov     al, byte_148FB ;~ 01C2:110B
cs=0x1c2;eip=0x00110e; 	X(STOSB);	// 3014 stosb ;~ 01C2:110E
cs=0x1c2;eip=0x00110f; 	T(ADD(di, 0x1FFF));	// 3015 add     di, 1FFFh ;~ 01C2:110F
cs=0x1c2;eip=0x001113; 	X(STOSB);	// 3016 stosb ;~ 01C2:1113
cs=0x1c2;eip=0x001114; 	T(ADD(di, 0x0E04F));	// 3017 add     di, 0E04Fh ;~ 01C2:1114
cs=0x1c2;eip=0x001118; 	X(STOSB);	// 3018 stosb ;~ 01C2:1118
cs=0x1c2;eip=0x001119; 	T(MOV(di, bp));	// 3019 mov     di, bp ;~ 01C2:1119
cs=0x1c2;eip=0x00111b; 	T(SUB(di, 0x460));	// 3020 sub     di, 460h ;~ 01C2:111B
cs=0x1c2;eip=0x00111f; 	X(STOSB);	// 3021 stosb ;~ 01C2:111F
cs=0x1c2;eip=0x001120; 	T(ADD(di, 0x1FAF));	// 3022 add     di, 1FAFh ;~ 01C2:1120
cs=0x1c2;eip=0x001124; 	X(STOSB);	// 3023 stosb ;~ 01C2:1124
cs=0x1c2;eip=0x001125; 	T(ADD(di, 0x0DFFF));	// 3024 add     di, 0DFFFh ;~ 01C2:1125
cs=0x1c2;eip=0x001129; 	X(STOSB);	// 3025 stosb ;~ 01C2:1129
cs=0x1c2;eip=0x00112a; 	T(MOV(di, bp));	// 3026 mov     di, bp ;~ 01C2:112A
cs=0x1c2;eip=0x00112c; 	T(ADD(di, 8));	// 3027 add     di, 8 ;~ 01C2:112C
cs=0x1c2;eip=0x00112f; 	T(MOV(al, 0x0AA));	// 3028 mov     al, 0AAh ; 'ª' ;~ 01C2:112F
cs=0x1c2;eip=0x001131; 	X(STOSB);	// 3029 stosb ;~ 01C2:1131
cs=0x1c2;eip=0x001132; 	T(SUB(di, 0x12));	// 3030 sub     di, 12h ;~ 01C2:1132
cs=0x1c2;eip=0x001135; 	T(MOV(al, 0x2A));	// 3031 mov     al, 2Ah ; '*' ;~ 01C2:1135
cs=0x1c2;eip=0x001137; 	X(STOSB);	// 3032 stosb ;~ 01C2:1137
cs=0x1c2;eip=0x001138; 	X(MOV(word_153a8, 0x0D6C));	// 3033 mov     word_153A8, 0D6Ch ;~ 01C2:1138
cs=0x1c2;eip=0x00113e; 	X(MOV(word_153aa, 0x0D70));	// 3034 mov     word_153AA, 0D70h ;~ 01C2:113E
cs=0x1c2;eip=0x001144; 	X(MOV(word_153ac, 0));	// 3035 mov     word_153AC, 0 ;~ 01C2:1144
cs=0x1c2;eip=0x00114a; 	X(MOV(word_153ae, 0x0FFB2));	// 3036 mov     word_153AE, 0FFB2h ;~ 01C2:114A
cs=0x1c2;eip=0x001150; 	X(MOV(word_153b0, 0x17));	// 3037 mov     word_153B0, 17h ;~ 01C2:1150
cs=0x1c2;eip=0x001156; 	X(MOV(word_153b2, 0x0FF9F));	// 3038 mov     word_153B2, 0FF9Fh ;~ 01C2:1156
cs=0x1c2;eip=0x00115c; 	X(MOV(byte_153a3, 1));	// 3039 mov     byte_153A3, 1 ;~ 01C2:115C
cs=0x1c2;eip=0x001161; 	T(MOV(ax, word_153be));	// 3040 mov     ax, word_153BE ;~ 01C2:1161
cs=0x1c2;eip=0x001164; 	X(PUSH(ax));	// 3041 push    ax ;~ 01C2:1164
cs=0x1c2;eip=0x001165; 	X(MOV(word_153be, 0x0FF9E));	// 3042 mov     word_153BE, 0FF9Eh ;~ 01C2:1165
cs=0x1c2;eip=0x00116b; 	J(CALL(sub_13040,0));	// 3043 call    sub_13040 ;~ 01C2:116B
cs=0x1c2;eip=0x00116e; 	X(MOV(word_153b0, 0x0FFE9));	// 3044 mov     word_153B0, 0FFE9h ;~ 01C2:116E
cs=0x1c2;eip=0x001174; 	J(CALL(sub_13040,0));	// 3045 call    sub_13040 ;~ 01C2:1174
cs=0x1c2;eip=0x001177; 	X(POP(ax));	// 3046 pop     ax ;~ 01C2:1177
cs=0x1c2;eip=0x001178; 	X(MOV(word_153be, ax));	// 3047 mov     word_153BE, ax ;~ 01C2:1178
cs=0x1c2;eip=0x00117b; 	R(RETN(0));	// 3048 retn ;~ 01C2:117B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_11265: 	goto loc_11265;
        case m2c::kloc_1126d: 	goto loc_1126d;
        case m2c::kloc_11293: 	goto loc_11293;
        case m2c::kloc_112b2: 	goto loc_112b2;
        case m2c::kloc_112d9: 	goto loc_112d9;
        case m2c::kloc_112fa: 	goto loc_112fa;
        case m2c::kloc_11302: 	goto loc_11302;
        case m2c::kloc_11305: 	goto loc_11305;
        case m2c::kret_1c2_105c: 	goto ret_1c2_105c;
        case m2c::ksub_11259: 	goto sub_11259;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1137c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1137c:
    _begin:
cs=0x1c2;eip=0x00117c; 	T(MOV(si, 0x3B2));	// 3057 mov     si, 3B2h ;~ 01C2:117C
ret_1c2_117f:
	// 4640 
cs=0x1c2;eip=0x00117f; 	T(MOV(cx, 3));	// 3058 mov     cx, 3 ;~ 01C2:117F
loc_11382:
	// 4641 
cs=0x1c2;eip=0x001182; 	T(LODSB);	// 3061 lodsb ;~ 01C2:1182
cs=0x1c2;eip=0x001183; 	T(OR(al, al));	// 3062 or      al, al ;~ 01C2:1183
cs=0x1c2;eip=0x001185; 	J(JNZ(loc_11392));	// 3063 jnz     short loc_11392 ;~ 01C2:1185
cs=0x1c2;eip=0x001187; 	T(ADD(si, 0x0C));	// 3064 add     si, 0Ch ;~ 01C2:1187
cs=0x1c2;eip=0x00118a; 	J(LOOP(loc_11382));	// 3065 loop    loc_11382 ;~ 01C2:118A
cs=0x1c2;eip=0x00118c; 	X(MOV(byte_148f8, 0x0FF));	// 3066 mov     byte_148F8, 0FFh ;~ 01C2:118C
cs=0x1c2;eip=0x001191; 	R(RETN(0));	// 3067 retn ;~ 01C2:1191
loc_11392:
	// 4642 
cs=0x1c2;eip=0x001192; 	T(MOV(ax, word_14af6));	// 3071 mov     ax, word_14AF6 ;~ 01C2:1192
cs=0x1c2;eip=0x001195; 	J(CALL(sub_13bcc,0));	// 3072 call    sub_13BCC ;~ 01C2:1195
cs=0x1c2;eip=0x001198; 	T(XOR(bl, bl));	// 3073 xor     bl, bl ;~ 01C2:1198
cs=0x1c2;eip=0x00119a; 	T(SAR(dl, 1));	// 3074 sar     dl, 1 ;~ 01C2:119A
cs=0x1c2;eip=0x00119c; 	T(TEST(dl, 0x80));	// 3075 test    dl, 80h ;~ 01C2:119C
cs=0x1c2;eip=0x00119f; 	J(JZ(loc_113a6));	// 3076 jz      short loc_113A6 ;~ 01C2:119F
cs=0x1c2;eip=0x0011a1; 	T(NEG(dl));	// 3077 neg     dl ;~ 01C2:11A1
cs=0x1c2;eip=0x0011a3; 	T(XOR(bl, 0x0FF));	// 3078 xor     bl, 0FFh ;~ 01C2:11A3
loc_113a6:
	// 4643 
cs=0x1c2;eip=0x0011a6; 	X(MOV(byte_148f1, dl));	// 3081 mov     byte_148F1, dl ;~ 01C2:11A6
cs=0x1c2;eip=0x0011aa; 	X(MOV(byte_148f2, bl));	// 3082 mov     byte_148F2, bl ;~ 01C2:11AA
cs=0x1c2;eip=0x0011ae; 	T(XOR(bl, bl));	// 3083 xor     bl, bl ;~ 01C2:11AE
cs=0x1c2;eip=0x0011b0; 	T(TEST(dh, 0x80));	// 3084 test    dh, 80h ;~ 01C2:11B0
cs=0x1c2;eip=0x0011b3; 	J(JZ(loc_113ba));	// 3085 jz      short loc_113BA ;~ 01C2:11B3
cs=0x1c2;eip=0x0011b5; 	T(NEG(dh));	// 3086 neg     dh ;~ 01C2:11B5
cs=0x1c2;eip=0x0011b7; 	T(XOR(bl, 0x0FF));	// 3087 xor     bl, 0FFh ;~ 01C2:11B7
loc_113ba:
	// 4644 
cs=0x1c2;eip=0x0011ba; 	T(SHR(dh, 1));	// 3090 shr     dh, 1 ;~ 01C2:11BA
cs=0x1c2;eip=0x0011bc; 	T(MOV(al, dl));	// 3091 mov     al, dl ;~ 01C2:11BC
cs=0x1c2;eip=0x0011be; 	T(MUL1_1(dl));	// 3092 mul     dl ;~ 01C2:11BE
cs=0x1c2;eip=0x0011c0; 	T(MOV(cx, ax));	// 3093 mov     cx, ax ;~ 01C2:11C0
cs=0x1c2;eip=0x0011c2; 	T(MOV(al, dh));	// 3094 mov     al, dh ;~ 01C2:11C2
cs=0x1c2;eip=0x0011c4; 	T(MUL1_1(dh));	// 3095 mul     dh ;~ 01C2:11C4
cs=0x1c2;eip=0x0011c6; 	T(ADD(ax, cx));	// 3096 add     ax, cx ;~ 01C2:11C6
cs=0x1c2;eip=0x0011c8; 	T(CMP(ax, 0x401));	// 3097 cmp     ax, 401h ;~ 01C2:11C8
cs=0x1c2;eip=0x0011cb; 	J(JNC(loc_113f9));	// 3098 jnb     short loc_113F9 ;~ 01C2:11CB
cs=0x1c2;eip=0x0011cd; 	T(MOV(al, dh));	// 3099 mov     al, dh ;~ 01C2:11CD
cs=0x1c2;eip=0x0011cf; 	X(MUL1_1(byte_148f5));	// 3100 mul     byte_148F5 ;~ 01C2:11CF
cs=0x1c2;eip=0x0011d3; 	T(MOV(cl, 5));	// 3101 mov     cl, 5 ;~ 01C2:11D3
cs=0x1c2;eip=0x0011d5; 	T(SHR(ax, cl));	// 3102 shr     ax, cl ;~ 01C2:11D5
cs=0x1c2;eip=0x0011d7; 	X(MOV(byte_148f3, al));	// 3103 mov     byte_148F3, al ;~ 01C2:11D7
cs=0x1c2;eip=0x0011da; 	X(MOV(byte_148f4, bl));	// 3104 mov     byte_148F4, bl ;~ 01C2:11DA
cs=0x1c2;eip=0x0011de; 	J(CALL(sub_113ff,0));	// 3105 call    sub_113FF ;~ 01C2:11DE
cs=0x1c2;eip=0x0011e1; 	T(TEST(byte_148f8, 0x0FF));	// 3106 test    byte_148F8, 0FFh ;~ 01C2:11E1
cs=0x1c2;eip=0x0011e6; 	J(JNZ(loc_113e9));	// 3107 jnz     short loc_113E9 ;~ 01C2:11E6
cs=0x1c2;eip=0x0011e8; 	R(RETN(0));	// 3108 retn ;~ 01C2:11E8
loc_113e9:
	// 4645 
cs=0x1c2;eip=0x0011e9; 	X(MOV(byte_148f8, 0));	// 3112 mov     byte_148F8, 0 ;~ 01C2:11E9
cs=0x1c2;eip=0x0011ee; 	X(MOV(byte_148f9, 0x0FF));	// 3113 mov     byte_148F9, 0FFh ;~ 01C2:11EE
cs=0x1c2;eip=0x0011f3; 	T(MOV(al, 2));	// 3114 mov     al, 2 ;~ 01C2:11F3
cs=0x1c2;eip=0x0011f5; 	J(CALL(sub_14015,0));	// 3115 call    sub_14015 ;~ 01C2:11F5
cs=0x1c2;eip=0x0011f8; 	R(RETN(0));	// 3116 retn ;~ 01C2:11F8
loc_113f9:
	// 4646 
cs=0x1c2;eip=0x0011f9; 	X(MOV(byte_148f8, 0x0FF));	// 3120 mov     byte_148F8, 0FFh ;~ 01C2:11F9
cs=0x1c2;eip=0x0011fe; 	R(RETN(0));	// 3121 retn ;~ 01C2:11FE

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_11382: 	goto loc_11382;
        case m2c::kloc_11392: 	goto loc_11392;
        case m2c::kloc_113a6: 	goto loc_113a6;
        case m2c::kloc_113ba: 	goto loc_113ba;
        case m2c::kloc_113e9: 	goto loc_113e9;
        case m2c::kloc_113f9: 	goto loc_113f9;
        case m2c::kret_1c2_117f: 	goto ret_1c2_117f;
        case m2c::ksub_1137c: 	goto sub_1137c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_114a8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_114a8:
    _begin:
cs=0x1c2;eip=0x0012a8; 	T(MOV(bl, cl));	// 3238 mov     bl, cl ;~ 01C2:12A8
loc_114aa:
	// 4658 
cs=0x1c2;eip=0x0012aa; 	X(PUSH(dx));	// 3241 push    dx ;~ 01C2:12AA
loc_114ab:
	// 4659 
cs=0x1c2;eip=0x0012ab; 	T(LODSB);	// 3244 lodsb ;~ 01C2:12AB
cs=0x1c2;eip=0x0012ac; 	T(TEST(dx, 0x8000));	// 3245 test    dx, 8000h ;~ 01C2:12AC
cs=0x1c2;eip=0x0012b0; 	J(JNZ(loc_114bc));	// 3246 jnz     short loc_114BC ;~ 01C2:12B0
cs=0x1c2;eip=0x0012b2; 	T(CMP(dx, 0x50));	// 3247 cmp     dx, 50h ; 'P' ;~ 01C2:12B2
cs=0x1c2;eip=0x0012b5; 	J(JNC(loc_114bc));	// 3248 jnb     short loc_114BC ;~ 01C2:12B5
cs=0x1c2;eip=0x0012b7; 	T(ADD(di, dx));	// 3249 add     di, dx ;~ 01C2:12B7
cs=0x1c2;eip=0x0012b9; 	X(MOV(*(raddr(es,di)), al));	// 3250 mov     es:[di], al ;~ 01C2:12B9
loc_114bc:
	// 4660 
cs=0x1c2;eip=0x0012bc; 	T(INC(dx));	// 3254 inc     dx ;~ 01C2:12BC
cs=0x1c2;eip=0x0012bd; 	T(MOV(di, bp));	// 3255 mov     di, bp ;~ 01C2:12BD
cs=0x1c2;eip=0x0012bf; 	T(DEC(bl));	// 3256 dec     bl ;~ 01C2:12BF
cs=0x1c2;eip=0x0012c1; 	J(JNZ(loc_114ab));	// 3257 jnz     short loc_114AB ;~ 01C2:12C1
cs=0x1c2;eip=0x0012c3; 	T(ADD(bp, 0x2000));	// 3258 add     bp, 2000h ;~ 01C2:12C3
cs=0x1c2;eip=0x0012c7; 	T(MOV(di, bp));	// 3259 mov     di, bp ;~ 01C2:12C7
cs=0x1c2;eip=0x0012c9; 	X(POP(dx));	// 3260 pop     dx ;~ 01C2:12C9
cs=0x1c2;eip=0x0012ca; 	T(MOV(bl, cl));	// 3261 mov     bl, cl ;~ 01C2:12CA
cs=0x1c2;eip=0x0012cc; 	T(DEC(ch));	// 3262 dec     ch ;~ 01C2:12CC
cs=0x1c2;eip=0x0012ce; 	J(JZ(locret_114f6));	// 3263 jz      short locret_114F6 ;~ 01C2:12CE
cs=0x1c2;eip=0x0012d0; 	X(PUSH(dx));	// 3264 push    dx ;~ 01C2:12D0
loc_114d1:
	// 4661 
cs=0x1c2;eip=0x0012d1; 	T(LODSB);	// 3267 lodsb ;~ 01C2:12D1
cs=0x1c2;eip=0x0012d2; 	T(TEST(dx, 0x8000));	// 3268 test    dx, 8000h ;~ 01C2:12D2
cs=0x1c2;eip=0x0012d6; 	J(JNZ(loc_114e2));	// 3269 jnz     short loc_114E2 ;~ 01C2:12D6
cs=0x1c2;eip=0x0012d8; 	T(CMP(dx, 0x50));	// 3270 cmp     dx, 50h ; 'P' ;~ 01C2:12D8
cs=0x1c2;eip=0x0012db; 	J(JNC(loc_114e2));	// 3271 jnb     short loc_114E2 ;~ 01C2:12DB
cs=0x1c2;eip=0x0012dd; 	T(ADD(di, dx));	// 3272 add     di, dx ;~ 01C2:12DD
cs=0x1c2;eip=0x0012df; 	X(MOV(*(raddr(es,di)), al));	// 3273 mov     es:[di], al ;~ 01C2:12DF
loc_114e2:
	// 4662 
cs=0x1c2;eip=0x0012e2; 	T(INC(dx));	// 3277 inc     dx ;~ 01C2:12E2
cs=0x1c2;eip=0x0012e3; 	T(MOV(di, bp));	// 3278 mov     di, bp ;~ 01C2:12E3
cs=0x1c2;eip=0x0012e5; 	T(DEC(bl));	// 3279 dec     bl ;~ 01C2:12E5
cs=0x1c2;eip=0x0012e7; 	J(JNZ(loc_114d1));	// 3280 jnz     short loc_114D1 ;~ 01C2:12E7
cs=0x1c2;eip=0x0012e9; 	T(ADD(bp, 0x0E050));	// 3281 add     bp, 0E050h ;~ 01C2:12E9
cs=0x1c2;eip=0x0012ed; 	T(MOV(di, bp));	// 3282 mov     di, bp ;~ 01C2:12ED
cs=0x1c2;eip=0x0012ef; 	X(POP(dx));	// 3283 pop     dx ;~ 01C2:12EF
cs=0x1c2;eip=0x0012f0; 	T(MOV(bl, cl));	// 3284 mov     bl, cl ;~ 01C2:12F0
cs=0x1c2;eip=0x0012f2; 	T(DEC(ch));	// 3285 dec     ch ;~ 01C2:12F2
cs=0x1c2;eip=0x0012f4; 	J(JNZ(loc_114aa));	// 3286 jnz     short loc_114AA ;~ 01C2:12F4
locret_114f6:
	// 4663 
cs=0x1c2;eip=0x0012f6; 	R(RETN(0));	// 3289 retn ;~ 01C2:12F6

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_114aa: 	goto loc_114aa;
        case m2c::kloc_114ab: 	goto loc_114ab;
        case m2c::kloc_114bc: 	goto loc_114bc;
        case m2c::kloc_114d1: 	goto loc_114d1;
        case m2c::kloc_114e2: 	goto loc_114e2;
        case m2c::klocret_114f6: 	goto locret_114f6;
        case m2c::ksub_114a8: 	goto sub_114a8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_11500(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11500:
    _begin:
cs=0x1c2;eip=0x001300; 	J(CALL(sub_1372f,0));	// 3301 call    sub_1372F ;~ 01C2:1300
ret_1c2_1303:
	// 4664 
cs=0x1c2;eip=0x001303; 	J(CALL(sub_1158f,0));	// 3302 call    sub_1158F ;~ 01C2:1303
cs=0x1c2;eip=0x001306; 	J(CALL(sub_10380,0));	// 3303 call    sub_10380 ;~ 01C2:1306
cs=0x1c2;eip=0x001309; 	J(CALL(sub_12a36,0));	// 3304 call    sub_12A36 ;~ 01C2:1309
cs=0x1c2;eip=0x00130c; 	J(CALL(sub_1137c,0));	// 3305 call    sub_1137C ;~ 01C2:130C
cs=0x1c2;eip=0x00130f; 	J(CALL(sub_10937,0));	// 3306 call    sub_10937 ;~ 01C2:130F
cs=0x1c2;eip=0x001312; 	J(CALL(sub_110b0,0));	// 3307 call    sub_110B0 ;~ 01C2:1312
cs=0x1c2;eip=0x001315; 	J(CALL(sub_11bcd,0));	// 3308 call    sub_11BCD ;~ 01C2:1315
cs=0x1c2;eip=0x001318; 	J(CALL(sub_11c58,0));	// 3309 call    sub_11C58 ;~ 01C2:1318
cs=0x1c2;eip=0x00131b; 	J(CALL(sub_12ef6,0));	// 3310 call    sub_12EF6 ;~ 01C2:131B
cs=0x1c2;eip=0x00131e; 	J(CALL(sub_12ae0,0));	// 3311 call    sub_12AE0 ;~ 01C2:131E
cs=0x1c2;eip=0x001321; 	T(MOV(cx, 4));	// 3312 mov     cx, 4 ;~ 01C2:1321
cs=0x1c2;eip=0x001324; 	T(MOV(si, 0x3B2));	// 3313 mov     si, 3B2h ;~ 01C2:1324
loc_11527:
	// 4665 
cs=0x1c2;eip=0x001327; 	X(PUSH(cx));	// 3316 push    cx ;~ 01C2:1327
cs=0x1c2;eip=0x001328; 	X(MOV(word_149f0, si));	// 3317 mov     word_149F0, si ;~ 01C2:1328
cs=0x1c2;eip=0x00132c; 	T(LODSB);	// 3318 lodsb ;~ 01C2:132C
cs=0x1c2;eip=0x00132d; 	T(OR(al, al));	// 3319 or      al, al ;~ 01C2:132D
cs=0x1c2;eip=0x00132f; 	J(JZ(loc_1154a));	// 3320 jz      short loc_1154A ;~ 01C2:132F
cs=0x1c2;eip=0x001331; 	J(CALL(sub_13a90,0));	// 3321 call    sub_13A90 ;~ 01C2:1331
cs=0x1c2;eip=0x001334; 	X(MOV(*(dw*)(raddr(ds,si+0x0A)), ax));	// 3322 mov     [si+0Ah], ax ;~ 01C2:1334
cs=0x1c2;eip=0x001337; 	T(DEC(si));	// 3323 dec     si ;~ 01C2:1337
cs=0x1c2;eip=0x001338; 	T(MOV(al, *(raddr(ds,si))));	// 3324 mov     al, [si] ;~ 01C2:1338
cs=0x1c2;eip=0x00133a; 	T(XOR(ah, ah));	// 3325 xor     ah, ah ;~ 01C2:133A
cs=0x1c2;eip=0x00133c; 	T(DEC(al));	// 3326 dec     al ;~ 01C2:133C
cs=0x1c2;eip=0x00133e; 	T(SHL(ax, 1));	// 3327 shl     ax, 1 ;~ 01C2:133E
cs=0x1c2;eip=0x001340; 	T(MOV(di, 0x1387));	// 3328 mov     di, 1387h ;~ 01C2:1340
cs=0x1c2;eip=0x001343; 	T(ADD(di, ax));	// 3329 add     di, ax ;~ 01C2:1343
cs=0x1c2;eip=0x001345; 	T(MOV(di, *(dw*)(raddr(cs,di))));	// 3330 mov     di, cs:[di] ;~ 01C2:1345
cs=0x1c2;eip=0x001348; 	J(CALL(__dispatch_call,di));	// 3331 call    di ;~ 01C2:1348
loc_1154a:
	// 4666 
cs=0x1c2;eip=0x00134a; 	T(MOV(si, word_149f0));	// 3334 mov     si, word_149F0 ;~ 01C2:134A
cs=0x1c2;eip=0x00134e; 	T(ADD(si, 0x0D));	// 3335 add     si, 0Dh ;~ 01C2:134E
cs=0x1c2;eip=0x001351; 	X(POP(cx));	// 3336 pop     cx ;~ 01C2:1351
cs=0x1c2;eip=0x001352; 	J(LOOP(loc_11527));	// 3337 loop    loc_11527 ;~ 01C2:1352
cs=0x1c2;eip=0x001354; 	J(CALL(sub_11d1c,0));	// 3338 call    sub_11D1C ;~ 01C2:1354
cs=0x1c2;eip=0x001357; 	T(MOV(si, 0x3B2));	// 3339 mov     si, 3B2h ;~ 01C2:1357
cs=0x1c2;eip=0x00135a; 	T(MOV(cx, 0x13));	// 3340 mov     cx, 13h ;~ 01C2:135A
loc_1155d:
	// 4667 
cs=0x1c2;eip=0x00135d; 	X(PUSH(cx));	// 3343 push    cx ;~ 01C2:135D
cs=0x1c2;eip=0x00135e; 	X(MOV(word_149f0, si));	// 3344 mov     word_149F0, si ;~ 01C2:135E
cs=0x1c2;eip=0x001362; 	T(TEST(*(raddr(ds,si)), 0x0FF));	// 3345 test    byte ptr [si], 0FFh ;~ 01C2:1362
cs=0x1c2;eip=0x001365; 	J(JZ(loc_11579));	// 3346 jz      short loc_11579 ;~ 01C2:1365
cs=0x1c2;eip=0x001367; 	T(INC(si));	// 3347 inc     si ;~ 01C2:1367
cs=0x1c2;eip=0x001368; 	T(MOV(di, si));	// 3348 mov     di, si ;~ 01C2:1368
cs=0x1c2;eip=0x00136a; 	T(LODSW);	// 3349 lodsw ;~ 01C2:136A
cs=0x1c2;eip=0x00136b; 	T(SUB(ax, word_14afc));	// 3350 sub     ax, word_14AFC ;~ 01C2:136B
cs=0x1c2;eip=0x00136f; 	X(STOSW);	// 3351 stosw ;~ 01C2:136F
cs=0x1c2;eip=0x001370; 	T(LODSW);	// 3352 lodsw ;~ 01C2:1370
cs=0x1c2;eip=0x001371; 	T(SUB(ax, word_14afe));	// 3353 sub     ax, word_14AFE ;~ 01C2:1371
cs=0x1c2;eip=0x001375; 	X(STOSW);	// 3354 stosw ;~ 01C2:1375
cs=0x1c2;eip=0x001376; 	J(CALL(sub_117da,0));	// 3355 call    sub_117DA ;~ 01C2:1376
loc_11579:
	// 4668 
cs=0x1c2;eip=0x001379; 	T(MOV(si, word_149f0));	// 3358 mov     si, word_149F0 ;~ 01C2:1379
cs=0x1c2;eip=0x00137d; 	T(ADD(si, 0x0D));	// 3359 add     si, 0Dh ;~ 01C2:137D
cs=0x1c2;eip=0x001380; 	X(POP(cx));	// 3360 pop     cx ;~ 01C2:1380
cs=0x1c2;eip=0x001381; 	J(LOOP(loc_1155d));	// 3361 loop    loc_1155D ;~ 01C2:1381
cs=0x1c2;eip=0x001383; 	J(CALL(sub_13735,0));	// 3362 call    sub_13735 ;~ 01C2:1383
cs=0x1c2;eip=0x001386; 	R(RETN(0));	// 3363 retn ;~ 01C2:1386

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_11527: 	goto loc_11527;
        case m2c::kloc_1154a: 	goto loc_1154a;
        case m2c::kloc_1155d: 	goto loc_1155d;
        case m2c::kloc_11579: 	goto loc_11579;
        case m2c::kret_1c2_1303: 	goto ret_1c2_1303;
        case m2c::ksub_11500: 	goto sub_11500;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1158f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1158f:
    _begin:
cs=0x1c2;eip=0x00138f; 	T(TEST(byte_15242, 0x0FF));	// 3376 test    byte_15242, 0FFh ;~ 01C2:138F
ret_1c2_1394:
	// 4669 
cs=0x1c2;eip=0x001394; 	J(JNZ(loc_115b3));	// 3377 jnz     short loc_115B3 ;~ 01C2:1394
cs=0x1c2;eip=0x001396; 	T(TEST(byte_14b00, 0x0FF));	// 3378 test    byte_14B00, 0FFh ;~ 01C2:1396
cs=0x1c2;eip=0x00139b; 	J(JZ(loc_115a0));	// 3379 jz      short loc_115A0 ;~ 01C2:139B
cs=0x1c2;eip=0x00139d; 	J(JMP(loc_11620));	// 3380 jmp     loc_11620 ;~ 01C2:139D
loc_115a0:
	// 4670 
cs=0x1c2;eip=0x0013a0; 	J(CALL(sub_1358d,0));	// 3384 call    sub_1358D ;~ 01C2:13A0
cs=0x1c2;eip=0x0013a3; 	X(PUSHF);	// 3385 pushf ;~ 01C2:13A3
cs=0x1c2;eip=0x0013a4; 	T(TEST(byte_15452, 0x0FF));	// 3386 test    byte_15452, 0FFh ;~ 01C2:13A4
cs=0x1c2;eip=0x0013a9; 	J(JZ(loc_115b0));	// 3387 jz      short loc_115B0 ;~ 01C2:13A9
cs=0x1c2;eip=0x0013ab; 	X(PUSH(ax));	// 3388 push    ax ;~ 01C2:13AB
cs=0x1c2;eip=0x0013ac; 	J(CALL(sub_10a30,0));	// 3389 call    sub_10A30 ;~ 01C2:13AC
cs=0x1c2;eip=0x0013af; 	X(POP(ax));	// 3390 pop     ax ;~ 01C2:13AF
loc_115b0:
	// 4671 
cs=0x1c2;eip=0x0013b0; 	X(POPF);	// 3393 popf ;~ 01C2:13B0
cs=0x1c2;eip=0x0013b1; 	J(JNZ(loc_115b5));	// 3394 jnz     short loc_115B5 ;~ 01C2:13B1
loc_115b3:
	// 4672 
cs=0x1c2;eip=0x0013b3; 	T(XOR(al, al));	// 3397 xor     al, al ;~ 01C2:13B3
loc_115b5:
	// 4673 
cs=0x1c2;eip=0x0013b5; 	T(XOR(ah, ah));	// 3401 xor     ah, ah ;~ 01C2:13B5
cs=0x1c2;eip=0x0013b7; 	T(MOV(bx, 0x4AC));	// 3402 mov     bx, 4ACh ;~ 01C2:13B7
cs=0x1c2;eip=0x0013ba; 	T(MOV(cx, ax));	// 3403 mov     cx, ax ;~ 01C2:13BA
cs=0x1c2;eip=0x0013bc; 	T(XLAT);	// 3404 xlat ;~ 01C2:13BC
cs=0x1c2;eip=0x0013bd; 	T(MOV(bl, al));	// 3405 mov     bl, al ;~ 01C2:13BD
cs=0x1c2;eip=0x0013bf; 	T(CMP(al, byte_14ae9));	// 3406 cmp     al, byte_14AE9 ;~ 01C2:13BF
cs=0x1c2;eip=0x0013c3; 	J(JZ(loc_115d0));	// 3407 jz      short loc_115D0 ;~ 01C2:13C3
cs=0x1c2;eip=0x0013c5; 	X(MOV(byte_14ae9, al));	// 3408 mov     byte_14AE9, al ;~ 01C2:13C5
cs=0x1c2;eip=0x0013c8; 	X(MOV(word_14aea, 2));	// 3409 mov     word_14AEA, 2 ;~ 01C2:13C8
cs=0x1c2;eip=0x0013ce; 	J(JMP(loc_115e2));	// 3410 jmp     short loc_115E2 ;~ 01C2:13CE
loc_115d0:
	// 4674 
cs=0x1c2;eip=0x0013d0; 	T(MOV(ax, word_14aea));	// 3414 mov     ax, word_14AEA ;~ 01C2:13D0
cs=0x1c2;eip=0x0013d3; 	T(TEST(ax, 0x8000));	// 3415 test    ax, 8000h ;~ 01C2:13D3
cs=0x1c2;eip=0x0013d6; 	J(JZ(loc_115da));	// 3416 jz      short loc_115DA ;~ 01C2:13D6
cs=0x1c2;eip=0x0013d8; 	T(NEG(ax));	// 3417 neg     ax ;~ 01C2:13D8
loc_115da:
	// 4675 
cs=0x1c2;eip=0x0013da; 	T(CMP(ax, 0x10));	// 3420 cmp     ax, 10h ;~ 01C2:13DA
cs=0x1c2;eip=0x0013dd; 	J(JNC(loc_115e2));	// 3421 jnb     short loc_115E2 ;~ 01C2:13DD
cs=0x1c2;eip=0x0013df; 	T(ADD(ax, 2));	// 3422 add     ax, 2 ;~ 01C2:13DF
loc_115e2:
	// 4676 
cs=0x1c2;eip=0x0013e2; 	X(MOV(word_14aea, ax));	// 3426 mov     word_14AEA, ax ;~ 01C2:13E2
cs=0x1c2;eip=0x0013e5; 	T(CMP(bl, 1));	// 3427 cmp     bl, 1 ;~ 01C2:13E5
cs=0x1c2;eip=0x0013e8; 	J(JNZ(loc_115ee));	// 3428 jnz     short loc_115EE ;~ 01C2:13E8
cs=0x1c2;eip=0x0013ea; 	X(NEG(word_14aea));	// 3429 neg     word_14AEA ;~ 01C2:13EA
loc_115ee:
	// 4677 
cs=0x1c2;eip=0x0013ee; 	T(SHL(cx, 1));	// 3432 shl     cx, 1 ;~ 01C2:13EE
cs=0x1c2;eip=0x0013f0; 	T(CMP(cx, 0x1B));	// 3433 cmp     cx, 1Bh ;~ 01C2:13F0
cs=0x1c2;eip=0x0013f3; 	J(JNC(loc_115ff));	// 3434 jnb     short loc_115FF ;~ 01C2:13F3
cs=0x1c2;eip=0x0013f5; 	T(MOV(si, 0x145B));	// 3435 mov     si, 145Bh ;~ 01C2:13F5
cs=0x1c2;eip=0x0013f8; 	T(ADD(si, cx));	// 3436 add     si, cx ;~ 01C2:13F8
cs=0x1c2;eip=0x0013fa; 	T(MOV(si, *(dw*)(raddr(cs,si))));	// 3437 mov     si, cs:[si] ;~ 01C2:13FA
cs=0x1c2;eip=0x0013fd; 	J(CALL(__dispatch_call,si));	// 3438 call    si ;~ 01C2:13FD
loc_115ff:
	// 4678 
cs=0x1c2;eip=0x0013ff; 	T(TEST(word_14af6, 0x8000));	// 3442 test    word_14AF6, 8000h ;~ 01C2:13FF
cs=0x1c2;eip=0x001405; 	J(JZ(loc_1160f));	// 3443 jz      short loc_1160F ;~ 01C2:1405
cs=0x1c2;eip=0x001407; 	X(ADD(word_14af6, 0x480));	// 3444 add     word_14AF6, 480h ;~ 01C2:1407
cs=0x1c2;eip=0x00140d; 	J(JMP(loc_115ff));	// 3445 jmp     short loc_115FF ;~ 01C2:140D
loc_1160f:
	// 4679 
cs=0x1c2;eip=0x00140f; 	T(CMP(word_14af6, 0x480));	// 3450 cmp     word_14AF6, 480h ;~ 01C2:140F
cs=0x1c2;eip=0x001415; 	J(JC(locret_1161f));	// 3451 jb      short locret_1161F ;~ 01C2:1415
cs=0x1c2;eip=0x001417; 	X(SUB(word_14af6, 0x480));	// 3452 sub     word_14AF6, 480h ;~ 01C2:1417
cs=0x1c2;eip=0x00141d; 	J(JMP(loc_1160f));	// 3453 jmp     short loc_1160F ;~ 01C2:141D
locret_1161f:
	// 4680 
cs=0x1c2;eip=0x00141f; 	R(RETN(0));	// 3457 retn ;~ 01C2:141F
loc_11620:
	// 4681 
cs=0x1c2;eip=0x001420; 	T(TEST(byte_14b01, 0x0FF));	// 3461 test    byte_14B01, 0FFh ;~ 01C2:1420
cs=0x1c2;eip=0x001425; 	J(JNZ(loc_11633));	// 3462 jnz     short loc_11633 ;~ 01C2:1425
cs=0x1c2;eip=0x001427; 	T(MOV(ax, 0x28));	// 3463 mov     ax, 28h ; '(' ;~ 01C2:1427
cs=0x1c2;eip=0x00142a; 	J(CALL(sub_13c68,0));	// 3464 call    sub_13C68 ;~ 01C2:142A
cs=0x1c2;eip=0x00142d; 	T(ADD(ax, 0x0A));	// 3465 add     ax, 0Ah ;~ 01C2:142D
cs=0x1c2;eip=0x001430; 	X(MOV(byte_14b01, al));	// 3466 mov     byte_14B01, al ;~ 01C2:1430
loc_11633:
	// 4682 
cs=0x1c2;eip=0x001433; 	X(DEC(byte_14b01));	// 3469 dec     byte_14B01 ;~ 01C2:1433
cs=0x1c2;eip=0x001437; 	J(JNZ(loc_11648));	// 3470 jnz     short loc_11648 ;~ 01C2:1437
cs=0x1c2;eip=0x001439; 	J(CALL(sub_13c4f,0));	// 3471 call    sub_13C4F ;~ 01C2:1439
cs=0x1c2;eip=0x00143c; 	T(TEST(ax, 0x40));	// 3472 test    ax, 40h ;~ 01C2:143C
cs=0x1c2;eip=0x00143f; 	T(MOV(al, 1));	// 3473 mov     al, 1 ;~ 01C2:143F
cs=0x1c2;eip=0x001441; 	J(JNZ(loc_11645));	// 3474 jnz     short loc_11645 ;~ 01C2:1441
cs=0x1c2;eip=0x001443; 	T(MOV(al, 5));	// 3475 mov     al, 5 ;~ 01C2:1443
loc_11645:
	// 4683 
cs=0x1c2;eip=0x001445; 	X(MOV(byte_14b02, al));	// 3478 mov     byte_14B02, al ;~ 01C2:1445
loc_11648:
	// 4684 
cs=0x1c2;eip=0x001448; 	J(CALL(sub_1358d,0));	// 3481 call    sub_1358D ;~ 01C2:1448
cs=0x1c2;eip=0x00144b; 	J(JZ(loc_11655));	// 3482 jz      short loc_11655 ;~ 01C2:144B
cs=0x1c2;eip=0x00144d; 	T(CMP(al, 0x0A));	// 3483 cmp     al, 0Ah ;~ 01C2:144D
cs=0x1c2;eip=0x00144f; 	J(JC(loc_11655));	// 3484 jb      short loc_11655 ;~ 01C2:144F
cs=0x1c2;eip=0x001451; 	T(CMP(al, 0x0C));	// 3485 cmp     al, 0Ch ;~ 01C2:1451
cs=0x1c2;eip=0x001453; 	J(JC(loc_11658));	// 3486 jb      short loc_11658 ;~ 01C2:1453
loc_11655:
	// 4685 
cs=0x1c2;eip=0x001455; 	T(MOV(al, byte_14b02));	// 3490 mov     al, byte_14B02 ;~ 01C2:1455
loc_11658:
	// 4686 
cs=0x1c2;eip=0x001458; 	J(JMP(loc_115b5));	// 3493 jmp     loc_115B5 ;~ 01C2:1458

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_115a0: 	goto loc_115a0;
        case m2c::kloc_115b0: 	goto loc_115b0;
        case m2c::kloc_115b3: 	goto loc_115b3;
        case m2c::kloc_115b5: 	goto loc_115b5;
        case m2c::kloc_115d0: 	goto loc_115d0;
        case m2c::kloc_115da: 	goto loc_115da;
        case m2c::kloc_115e2: 	goto loc_115e2;
        case m2c::kloc_115ee: 	goto loc_115ee;
        case m2c::kloc_115ff: 	goto loc_115ff;
        case m2c::kloc_1160f: 	goto loc_1160f;
        case m2c::kloc_11620: 	goto loc_11620;
        case m2c::kloc_11633: 	goto loc_11633;
        case m2c::kloc_11645: 	goto loc_11645;
        case m2c::kloc_11648: 	goto loc_11648;
        case m2c::kloc_11655: 	goto loc_11655;
        case m2c::kloc_11658: 	goto loc_11658;
        case m2c::klocret_1161f: 	goto locret_1161f;
        case m2c::kret_1c2_1394: 	goto ret_1c2_1394;
        case m2c::ksub_1158f: 	goto sub_1158f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg001_145b_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg001_145b_proc:
    _begin:
cs=0x1c2;eip=0x00145b; 	J(CALL(__dispatch_call,*(dw*)(raddr(ds,si))));	// 3497 call    word ptr [si] ;~ 01C2:145B
ret_1c2_145d:
	// 4687 
cs=0x1c2;eip=0x00145d; 	X(POP(dx));	// 3498 pop     dx ;~ 01C2:145D
cs=0x1c2;eip=0x00145e; 	T(ADC(ax, 0x1586));	// 3499 adc     ax, 1586h ;~ 01C2:145E
cs=0x1c2;eip=0x001461; 	T(OR(dl, *(raddr(ds,di))));	// 3500 or      dl, [di] ;~ 01C2:1461
cs=0x1c2;eip=0x001463; 	T(MOV(ax, word_18155));	// 3501 mov     ax, word_18155 ;~ 01C2:1463
cs=0x1c2;eip=0x001466; 	T(ADC(ax, 0x1579));	// 3502 adc     ax, 1579h ;~ 01C2:1466
cs=0x1c2;eip=0x001469; 	T(XOR(dx, *(dw*)(raddr(ds,di))));	// 3503 xor     dx, [di] ;~ 01C2:1469
cs=0x1c2;eip=0x00146b; 	X(POP(di));	// 3504 pop     di ;~ 01C2:146B
cs=0x1c2;eip=0x00146c; 	T(ADC(ax, 0x830));	// 3505 adc     ax, 830h ;~ 01C2:146C
cs=0x1c2;eip=0x00146f; 	T(SCASB);	// 3506 scasb ;~ 01C2:146F
cs=0x1c2;eip=0x001470; 	T(ADC(ax, 0x15C7));	// 3507 adc     ax, 15C7h ;~ 01C2:1470
cs=0x1c2;eip=0x001473; 	X(MOV(word_1e954, ax));	// 3508 mov     word_1E954, ax ;~ 01C2:1473
cs=0x1c2;eip=0x001476; 	T(ADC(al, 0x0D6));	// 3509 adc     al, 0D6h ; 'Ö' ;~ 01C2:1476
cs=0x1c2;eip=0x001478; 	T(ADC(ax, 0x14E9));	// 3510 adc     ax, 14E9h ;~ 01C2:1478
cs=0x1c2;eip=0x00147b; __disp=byte_1ff92;
	J(JMP(__dispatch_call));	// 3511 jmp     near ptr byte_1FF92 ;~ 01C2:147B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_145d: 	goto ret_1c2_145d;
        case m2c::kseg001_145b_proc: 	goto seg001_145b_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_116a3(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_116a3:
    _begin:
cs=0x1c2;eip=0x0014a3; 	X(PUSH(cx));	// 3537 push    cx ;~ 01C2:14A3
ret_1c2_14a4:
	// 4688 
cs=0x1c2;eip=0x0014a4; 	X(PUSH(ax));	// 3538 push    ax ;~ 01C2:14A4
cs=0x1c2;eip=0x0014a5; 	X(PUSH(dx));	// 3539 push    dx ;~ 01C2:14A5
cs=0x1c2;eip=0x0014a6; 	X(PUSH(bx));	// 3540 push    bx ;~ 01C2:14A6
cs=0x1c2;eip=0x0014a7; 	J(CALL(sub_14005,0));	// 3541 call    sub_14005 ;~ 01C2:14A7
cs=0x1c2;eip=0x0014aa; 	T(MOV(bx, 0x64));	// 3542 mov     bx, 64h ; 'd' ;~ 01C2:14AA
loc_116ad:
	// 4689 
cs=0x1c2;eip=0x0014ad; 	T(MOV(cx, 0x7530));	// 3545 mov     cx, 7530h ;~ 01C2:14AD
loc_116b0:
	// 4690 
cs=0x1c2;eip=0x0014b0; 	T(IMUL1_2(cx));	// 3548 imul    cx ;~ 01C2:14B0
cs=0x1c2;eip=0x0014b2; 	J(CALL(sub_134e1,0));	// 3549 call    sub_134E1 ;~ 01C2:14B2
cs=0x1c2;eip=0x0014b5; 	J(JNZ(loc_116db));	// 3550 jnz     short loc_116DB ;~ 01C2:14B5
cs=0x1c2;eip=0x0014b7; 	J(LOOP(loc_116b0));	// 3551 loop    loc_116B0 ;~ 01C2:14B7
cs=0x1c2;eip=0x0014b9; 	T(DEC(bx));	// 3552 dec     bx ;~ 01C2:14B9
cs=0x1c2;eip=0x0014ba; 	T(CMP(bx, 0));	// 3553 cmp     bx, 0 ;~ 01C2:14BA
cs=0x1c2;eip=0x0014bd; 	J(JNZ(loc_116ad));	// 3554 jnz     short loc_116AD ;~ 01C2:14BD
cs=0x1c2;eip=0x0014bf; 	T(MOV(bl, 0));	// 3555 mov     bl, 0 ;~ 01C2:14BF
loc_116c1:
	// 4691 
cs=0x1c2;eip=0x0014c1; 	T(MOV(cx, 0x7530));	// 3558 mov     cx, 7530h ;~ 01C2:14C1
loc_116c4:
	// 4692 
cs=0x1c2;eip=0x0014c4; 	T(IMUL1_2(cx));	// 3561 imul    cx ;~ 01C2:14C4
cs=0x1c2;eip=0x0014c6; 	T(IMUL1_2(cx));	// 3562 imul    cx ;~ 01C2:14C6
cs=0x1c2;eip=0x0014c8; 	J(CALL(sub_134e1,0));	// 3563 call    sub_134E1 ;~ 01C2:14C8
cs=0x1c2;eip=0x0014cb; 	J(JNZ(loc_116db));	// 3564 jnz     short loc_116DB ;~ 01C2:14CB
cs=0x1c2;eip=0x0014cd; 	J(LOOP(loc_116c4));	// 3565 loop    loc_116C4 ;~ 01C2:14CD
cs=0x1c2;eip=0x0014cf; 	T(INC(bl));	// 3566 inc     bl ;~ 01C2:14CF
cs=0x1c2;eip=0x0014d1; 	T(MOV(al, bl));	// 3567 mov     al, bl ;~ 01C2:14D1
cs=0x1c2;eip=0x0014d3; 	T(AND(al, 0x37));	// 3568 and     al, 37h ;~ 01C2:14D3
cs=0x1c2;eip=0x0014d5; 	T(MOV(dx, 0x3D9));	// 3569 mov     dx, 3D9h ;~ 01C2:14D5
cs=0x1c2;eip=0x0014d8; 	R(OUT(dx, al));	// 3570 out     dx, al ;~ 01C2:14D8
cs=0x1c2;eip=0x0014d9; 	J(JMP(loc_116c1));	// 3571 jmp     short loc_116C1 ;~ 01C2:14D9
loc_116db:
	// 4693 
cs=0x1c2;eip=0x0014db; 	T(MOV(al, 0x30));	// 3576 mov     al, 30h ; '0' ;~ 01C2:14DB
cs=0x1c2;eip=0x0014dd; 	T(MOV(dx, 0x3D9));	// 3577 mov     dx, 3D9h ;~ 01C2:14DD
cs=0x1c2;eip=0x0014e0; 	R(OUT(dx, al));	// 3578 out     dx, al ;~ 01C2:14E0
cs=0x1c2;eip=0x0014e1; 	J(CALL(sub_134ed,0));	// 3579 call    sub_134ED ;~ 01C2:14E1
cs=0x1c2;eip=0x0014e4; 	X(POP(bx));	// 3580 pop     bx ;~ 01C2:14E4
cs=0x1c2;eip=0x0014e5; 	X(POP(dx));	// 3581 pop     dx ;~ 01C2:14E5
cs=0x1c2;eip=0x0014e6; 	X(POP(ax));	// 3582 pop     ax ;~ 01C2:14E6
cs=0x1c2;eip=0x0014e7; 	X(POP(cx));	// 3583 pop     cx ;~ 01C2:14E7
cs=0x1c2;eip=0x0014e8; 	R(RETN(0));	// 3584 retn ;~ 01C2:14E8

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_116ad: 	goto loc_116ad;
        case m2c::kloc_116b0: 	goto loc_116b0;
        case m2c::kloc_116c1: 	goto loc_116c1;
        case m2c::kloc_116c4: 	goto loc_116c4;
        case m2c::kloc_116db: 	goto loc_116db;
        case m2c::kret_1c2_14a4: 	goto ret_1c2_14a4;
        case m2c::ksub_116a3: 	goto sub_116a3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_117da(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_117da:
    _begin:
cs=0x1c2;eip=0x0015da; 	T(MOV(si, word_149f0));	// 3709 mov     si, word_149F0 ;~ 01C2:15DA
ret_1c2_15de:
	// 4715 
cs=0x1c2;eip=0x0015de; 	T(INC(si));	// 3710 inc     si ;~ 01C2:15DE
cs=0x1c2;eip=0x0015df; 	J(CALL(sub_13a90,0));	// 3711 call    sub_13A90 ;~ 01C2:15DF
cs=0x1c2;eip=0x0015e2; 	T(DEC(si));	// 3712 dec     si ;~ 01C2:15E2
cs=0x1c2;eip=0x0015e3; 	X(MOV(*(dw*)(raddr(ds,si+0x0B)), ax));	// 3713 mov     [si+0Bh], ax ;~ 01C2:15E3
cs=0x1c2;eip=0x0015e6; 	T(SUB(ax, word_14af6));	// 3714 sub     ax, word_14AF6 ;~ 01C2:15E6
loc_117ea:
	// 4716 
cs=0x1c2;eip=0x0015ea; 	T(OR(ax, ax));	// 3717 or      ax, ax ;~ 01C2:15EA
cs=0x1c2;eip=0x0015ec; 	J(JNS(loc_117f3));	// 3718 jns     short loc_117F3 ;~ 01C2:15EC
cs=0x1c2;eip=0x0015ee; 	T(ADD(ax, 0x480));	// 3719 add     ax, 480h ;~ 01C2:15EE
cs=0x1c2;eip=0x0015f1; 	J(JMP(loc_117ea));	// 3720 jmp     short loc_117EA ;~ 01C2:15F1
loc_117f3:
	// 4717 
cs=0x1c2;eip=0x0015f3; 	T(CMP(ax, 0x0E0));	// 3724 cmp     ax, 0E0h ; 'à' ;~ 01C2:15F3
cs=0x1c2;eip=0x0015f6; 	J(JC(loc_117fe));	// 3725 jb      short loc_117FE ;~ 01C2:15F6
cs=0x1c2;eip=0x0015f8; 	T(CMP(ax, 0x3A0));	// 3726 cmp     ax, 3A0h ;~ 01C2:15F8
cs=0x1c2;eip=0x0015fb; 	J(JNC(loc_117fe));	// 3727 jnb     short loc_117FE ;~ 01C2:15FB
cs=0x1c2;eip=0x0015fd; 	R(RETN(0));	// 3728 retn ;~ 01C2:15FD
loc_117fe:
	// 4718 
cs=0x1c2;eip=0x0015fe; 	T(MOV(bl, *(raddr(ds,si))));	// 3733 mov     bl, [si] ;~ 01C2:15FE
cs=0x1c2;eip=0x001600; 	T(OR(bl, bl));	// 3734 or      bl, bl ;~ 01C2:1600
cs=0x1c2;eip=0x001602; 	J(JNZ(loc_11805));	// 3735 jnz     short loc_11805 ;~ 01C2:1602
cs=0x1c2;eip=0x001604; 	R(RETN(0));	// 3736 retn ;~ 01C2:1604
loc_11805:
	// 4719 
cs=0x1c2;eip=0x001605; 	T(CMP(bl, 4));	// 3740 cmp     bl, 4 ;~ 01C2:1605
cs=0x1c2;eip=0x001608; 	J(JNC(loc_11819));	// 3741 jnb     short loc_11819 ;~ 01C2:1608
cs=0x1c2;eip=0x00160a; 	T(CMP(ax, 0x0C));	// 3742 cmp     ax, 0Ch ;~ 01C2:160A
cs=0x1c2;eip=0x00160d; 	J(JC(loc_11814));	// 3743 jb      short loc_11814 ;~ 01C2:160D
cs=0x1c2;eip=0x00160f; 	T(CMP(ax, 0x474));	// 3744 cmp     ax, 474h ;~ 01C2:160F
cs=0x1c2;eip=0x001612; 	J(JC(loc_11819));	// 3745 jb      short loc_11819 ;~ 01C2:1612
loc_11814:
	// 4720 
cs=0x1c2;eip=0x001614; 	X(MOV(byte_148fa, 0x0FF));	// 3748 mov     byte_148FA, 0FFh ;~ 01C2:1614
loc_11819:
	// 4721 
cs=0x1c2;eip=0x001619; 	T(DEC(bl));	// 3752 dec     bl ;~ 01C2:1619
cs=0x1c2;eip=0x00161b; 	T(XOR(bh, bh));	// 3753 xor     bh, bh ;~ 01C2:161B
cs=0x1c2;eip=0x00161d; 	T(SHL(bx, 1));	// 3754 shl     bx, 1 ;~ 01C2:161D
cs=0x1c2;eip=0x00161f; 	T(MOV(di, 0x16CA));	// 3755 mov     di, 16CAh ;~ 01C2:161F
cs=0x1c2;eip=0x001622; 	T(ADD(di, bx));	// 3756 add     di, bx ;~ 01C2:1622
cs=0x1c2;eip=0x001624; 	X(PUSH(si));	// 3757 push    si ;~ 01C2:1624
cs=0x1c2;eip=0x001625; 	T(INC(si));	// 3758 inc     si ;~ 01C2:1625
cs=0x1c2;eip=0x001626; 	J(CALL(sub_13b1a,0));	// 3759 call    sub_13B1A ;~ 01C2:1626
cs=0x1c2;eip=0x001629; 	X(POP(si));	// 3760 pop     si ;~ 01C2:1629
cs=0x1c2;eip=0x00162a; 	T(MOV(cx, 6));	// 3761 mov     cx, 6 ;~ 01C2:162A
cs=0x1c2;eip=0x00162d; 	T(SHR(ax, cl));	// 3762 shr     ax, cl ;~ 01C2:162D
cs=0x1c2;eip=0x00162f; 	T(MOV(bx, ax));	// 3763 mov     bx, ax ;~ 01C2:162F
cs=0x1c2;eip=0x001631; 	T(MOV(dx, 0x240));	// 3764 mov     dx, 240h ;~ 01C2:1631
cs=0x1c2;eip=0x001634; 	T(ADD(dx, *(dw*)(raddr(ds,si+9))));	// 3765 add     dx, [si+9] ;~ 01C2:1634
cs=0x1c2;eip=0x001637; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x0B))));	// 3766 mov     ax, [si+0Bh] ;~ 01C2:1637
cs=0x1c2;eip=0x00163a; 	T(SUB(dx, ax));	// 3767 sub     dx, ax ;~ 01C2:163A
cs=0x1c2;eip=0x00163c; 	T(SUB(ax, word_14af6));	// 3768 sub     ax, word_14AF6 ;~ 01C2:163C
loc_11840:
	// 4722 
cs=0x1c2;eip=0x001640; 	T(CMP(ax, 0x241));	// 3771 cmp     ax, 241h ;~ 01C2:1640
cs=0x1c2;eip=0x001643; 	J(JS(loc_1184a));	// 3772 js      short loc_1184A ;~ 01C2:1643
cs=0x1c2;eip=0x001645; 	T(SUB(ax, 0x480));	// 3773 sub     ax, 480h ;~ 01C2:1645
cs=0x1c2;eip=0x001648; 	J(JMP(loc_11840));	// 3774 jmp     short loc_11840 ;~ 01C2:1648
loc_1184a:
	// 4723 
cs=0x1c2;eip=0x00164a; 	T(CMP(ax, 0x0FDBF));	// 3779 cmp     ax, 0FDBFh ;~ 01C2:164A
cs=0x1c2;eip=0x00164d; 	J(JNS(loc_11854));	// 3780 jns     short loc_11854 ;~ 01C2:164D
cs=0x1c2;eip=0x00164f; 	T(ADD(ax, 0x480));	// 3781 add     ax, 480h ;~ 01C2:164F
cs=0x1c2;eip=0x001652; 	J(JMP(loc_1184a));	// 3782 jmp     short loc_1184A ;~ 01C2:1652
loc_11854:
	// 4724 
cs=0x1c2;eip=0x001654; 	X(MOV(word_14b3f, ax));	// 3786 mov     word_14B3F, ax ;~ 01C2:1654
cs=0x1c2;eip=0x001657; 	T(CMP(word_14886, si));	// 3787 cmp     word_14886, si ;~ 01C2:1657
cs=0x1c2;eip=0x00165b; 	J(JNZ(loc_1187f));	// 3788 jnz     short loc_1187F ;~ 01C2:165B
cs=0x1c2;eip=0x00165d; 	T(MOV(ax, word_14888));	// 3789 mov     ax, word_14888 ;~ 01C2:165D
cs=0x1c2;eip=0x001660; 	T(OR(ax, ax));	// 3790 or      ax, ax ;~ 01C2:1660
cs=0x1c2;eip=0x001662; 	J(JZ(loc_1187f));	// 3791 jz      short loc_1187F ;~ 01C2:1662
cs=0x1c2;eip=0x001664; 	T(DEC(ax));	// 3792 dec     ax ;~ 01C2:1664
cs=0x1c2;eip=0x001665; 	X(MOV(word_14888, ax));	// 3793 mov     word_14888, ax ;~ 01C2:1665
cs=0x1c2;eip=0x001668; 	T(CMP(ax, 2));	// 3794 cmp     ax, 2 ;~ 01C2:1668
cs=0x1c2;eip=0x00166b; 	J(JNZ(loc_11875));	// 3795 jnz     short loc_11875 ;~ 01C2:166B
cs=0x1c2;eip=0x00166d; 	X(MOV(word_14b41, 0x0FFFC));	// 3796 mov     word_14B41, 0FFFCh ;~ 01C2:166D
cs=0x1c2;eip=0x001673; 	J(JMP(loc_1187f));	// 3797 jmp     short loc_1187F ;~ 01C2:1673
loc_11875:
	// 4725 
cs=0x1c2;eip=0x001675; 	T(OR(ax, ax));	// 3801 or      ax, ax ;~ 01C2:1675
cs=0x1c2;eip=0x001677; 	J(JNZ(loc_1187f));	// 3802 jnz     short loc_1187F ;~ 01C2:1677
cs=0x1c2;eip=0x001679; 	X(MOV(word_14b41, 0x0FFFE));	// 3803 mov     word_14B41, 0FFFEh ;~ 01C2:1679
loc_1187f:
	// 4726 
cs=0x1c2;eip=0x00167f; 	T(MOV(ax, *(dw*)(raddr(ds,si+5))));	// 3807 mov     ax, [si+5] ;~ 01C2:167F
cs=0x1c2;eip=0x001682; 	T(OR(ax, ax));	// 3808 or      ax, ax ;~ 01C2:1682
cs=0x1c2;eip=0x001684; 	J(JZ(loc_118be));	// 3809 jz      short loc_118BE ;~ 01C2:1684
cs=0x1c2;eip=0x001686; 	X(PUSH(bx));	// 3810 push    bx ;~ 01C2:1686
cs=0x1c2;eip=0x001687; 	X(PUSH(dx));	// 3811 push    dx ;~ 01C2:1687
cs=0x1c2;eip=0x001688; 	X(MOV(word_153ac, ax));	// 3812 mov     word_153AC, ax ;~ 01C2:1688
cs=0x1c2;eip=0x00168b; 	X(MOV(word_153ae, bx));	// 3813 mov     word_153AE, bx ;~ 01C2:168B
cs=0x1c2;eip=0x00168f; 	T(MOV(si, 0x0D6C));	// 3814 mov     si, 0D6Ch ;~ 01C2:168F
cs=0x1c2;eip=0x001692; 	J(CALL(sub_13a90,0));	// 3815 call    sub_13A90 ;~ 01C2:1692
loc_11895:
	// 4727 
cs=0x1c2;eip=0x001695; 	T(OR(ax, ax));	// 3818 or      ax, ax ;~ 01C2:1695
cs=0x1c2;eip=0x001697; 	J(JNS(loc_1189e));	// 3819 jns     short loc_1189E ;~ 01C2:1697
cs=0x1c2;eip=0x001699; 	T(ADD(ax, 0x480));	// 3820 add     ax, 480h ;~ 01C2:1699
cs=0x1c2;eip=0x00169c; 	J(JMP(loc_11895));	// 3821 jmp     short loc_11895 ;~ 01C2:169C
loc_1189e:
	// 4728 
cs=0x1c2;eip=0x00169e; 	T(CMP(ax, 0x480));	// 3826 cmp     ax, 480h ;~ 01C2:169E
cs=0x1c2;eip=0x0016a1; 	J(JC(loc_118a8));	// 3827 jb      short loc_118A8 ;~ 01C2:16A1
cs=0x1c2;eip=0x0016a3; 	T(SUB(ax, 0x480));	// 3828 sub     ax, 480h ;~ 01C2:16A3
cs=0x1c2;eip=0x0016a6; 	J(JMP(loc_1189e));	// 3829 jmp     short loc_1189E ;~ 01C2:16A6
loc_118a8:
	// 4729 
cs=0x1c2;eip=0x0016a8; 	T(CMP(ax, 0x240));	// 3833 cmp     ax, 240h ;~ 01C2:16A8
cs=0x1c2;eip=0x0016ab; 	J(JC(loc_118b0));	// 3834 jb      short loc_118B0 ;~ 01C2:16AB
cs=0x1c2;eip=0x0016ad; 	T(SUB(ax, 0x480));	// 3835 sub     ax, 480h ;~ 01C2:16AD
loc_118b0:
	// 4730 
cs=0x1c2;eip=0x0016b0; 	X(MUL1_2(word_14b04));	// 3838 mul     word_14B04 ;~ 01C2:16B0
cs=0x1c2;eip=0x0016b4; 	T(MOV(cx, 3));	// 3839 mov     cx, 3 ;~ 01C2:16B4
cs=0x1c2;eip=0x0016b7; 	T(SAR(ax, cl));	// 3840 sar     ax, cl ;~ 01C2:16B7
cs=0x1c2;eip=0x0016b9; 	X(MOV(word_14b41, ax));	// 3841 mov     word_14B41, ax ;~ 01C2:16B9
cs=0x1c2;eip=0x0016bc; 	X(POP(dx));	// 3842 pop     dx ;~ 01C2:16BC
cs=0x1c2;eip=0x0016bd; 	X(POP(bx));	// 3843 pop     bx ;~ 01C2:16BD
loc_118be:
	// 4731 
cs=0x1c2;eip=0x0016be; 	T(MOV(di, *(dw*)(raddr(cs,di))));	// 3846 mov     di, cs:[di] ;~ 01C2:16BE
cs=0x1c2;eip=0x0016c1; 	J(CALL(__dispatch_call,di));	// 3847 call    di ;~ 01C2:16C1
cs=0x1c2;eip=0x0016c3; 	X(MOV(word_14b41, 0));	// 3848 mov     word_14B41, 0 ;~ 01C2:16C3
cs=0x1c2;eip=0x0016c9; 	R(RETN(0));	// 3849 retn ;~ 01C2:16C9

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_117ea: 	goto loc_117ea;
        case m2c::kloc_117f3: 	goto loc_117f3;
        case m2c::kloc_117fe: 	goto loc_117fe;
        case m2c::kloc_11805: 	goto loc_11805;
        case m2c::kloc_11814: 	goto loc_11814;
        case m2c::kloc_11819: 	goto loc_11819;
        case m2c::kloc_11840: 	goto loc_11840;
        case m2c::kloc_1184a: 	goto loc_1184a;
        case m2c::kloc_11854: 	goto loc_11854;
        case m2c::kloc_11875: 	goto loc_11875;
        case m2c::kloc_1187f: 	goto loc_1187f;
        case m2c::kloc_11895: 	goto loc_11895;
        case m2c::kloc_1189e: 	goto loc_1189e;
        case m2c::kloc_118a8: 	goto loc_118a8;
        case m2c::kloc_118b0: 	goto loc_118b0;
        case m2c::kloc_118be: 	goto loc_118be;
        case m2c::kret_1c2_15de: 	goto ret_1c2_15de;
        case m2c::ksub_117da: 	goto sub_117da;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg001_16f0_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg001_16f0_proc:
    _begin:
cs=0x1c2;eip=0x0016f0; 	T(MOV(si, word_149f0));	// 3877 mov     si, word_149F0 ;~ 01C2:16F0
ret_1c2_16f4:
	// 4732 
cs=0x1c2;eip=0x0016f4; 	T(MOV(al, byte_14b16));	// 3878 mov     al, byte_14B16 ;~ 01C2:16F4
cs=0x1c2;eip=0x0016f7; 	T(OR(al, al));	// 3879 or      al, al ;~ 01C2:16F7
cs=0x1c2;eip=0x0016f9; 	J(JZ(loc_118fe));	// 3880 jz      short loc_118FE ;~ 01C2:16F9
cs=0x1c2;eip=0x0016fb; 	J(JMP(loc_119c0));	// 3881 jmp     loc_119C0 ;~ 01C2:16FB
loc_118fe:
	// 4733 
cs=0x1c2;eip=0x0016fe; 	T(MOV(al, byte_14b17));	// 3885 mov     al, byte_14B17 ;~ 01C2:16FE
cs=0x1c2;eip=0x001701; 	T(OR(al, al));	// 3886 or      al, al ;~ 01C2:1701
cs=0x1c2;eip=0x001703; 	J(JNZ(loc_1194f));	// 3887 jnz     short loc_1194F ;~ 01C2:1703
cs=0x1c2;eip=0x001705; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x0B))));	// 3888 mov     ax, [si+0Bh] ;~ 01C2:1705
cs=0x1c2;eip=0x001708; 	T(ADD(ax, 0x240));	// 3889 add     ax, 240h ;~ 01C2:1708
cs=0x1c2;eip=0x00170b; 	T(SUB(ax, *(dw*)(raddr(ds,si+9))));	// 3890 sub     ax, [si+9] ;~ 01C2:170B
loc_1190e:
	// 4734 
cs=0x1c2;eip=0x00170e; 	T(TEST(ax, 0x8000));	// 3893 test    ax, 8000h ;~ 01C2:170E
cs=0x1c2;eip=0x001711; 	J(JZ(loc_11918));	// 3894 jz      short loc_11918 ;~ 01C2:1711
cs=0x1c2;eip=0x001713; 	T(ADD(ax, 0x480));	// 3895 add     ax, 480h ;~ 01C2:1713
cs=0x1c2;eip=0x001716; 	J(JMP(loc_1190e));	// 3896 jmp     short loc_1190E ;~ 01C2:1716
loc_11918:
	// 4735 
cs=0x1c2;eip=0x001718; 	T(CMP(ax, 0x480));	// 3901 cmp     ax, 480h ;~ 01C2:1718
cs=0x1c2;eip=0x00171b; 	J(JC(loc_11922));	// 3902 jb      short loc_11922 ;~ 01C2:171B
cs=0x1c2;eip=0x00171d; 	T(SUB(ax, 0x480));	// 3903 sub     ax, 480h ;~ 01C2:171D
cs=0x1c2;eip=0x001720; 	J(JMP(loc_11918));	// 3904 jmp     short loc_11918 ;~ 01C2:1720
loc_11922:
	// 4736 
cs=0x1c2;eip=0x001722; 	T(CMP(ax, 0x0A));	// 3908 cmp     ax, 0Ah ;~ 01C2:1722
cs=0x1c2;eip=0x001725; 	J(JC(loc_11940));	// 3909 jb      short loc_11940 ;~ 01C2:1725
cs=0x1c2;eip=0x001727; 	T(CMP(ax, 0x475));	// 3910 cmp     ax, 475h ;~ 01C2:1727
cs=0x1c2;eip=0x00172a; 	J(JA(loc_11940));	// 3911 ja      short loc_11940 ;~ 01C2:172A
cs=0x1c2;eip=0x00172c; 	T(CMP(ax, 0x240));	// 3912 cmp     ax, 240h ;~ 01C2:172C
cs=0x1c2;eip=0x00172f; 	J(JC(loc_11936));	// 3913 jb      short loc_11936 ;~ 01C2:172F
cs=0x1c2;eip=0x001731; 	J(CALL(seg001_16f0_proc,m2c::kloc_11b24));	// 3914 call    loc_11B24 ;~ 01C2:1731
cs=0x1c2;eip=0x001734; 	J(JMP(loc_11939));	// 3915 jmp     short loc_11939 ;~ 01C2:1734
loc_11936:
	// 4737 
cs=0x1c2;eip=0x001736; 	J(CALL(seg001_16f0_proc,m2c::kloc_11b15));	// 3919 call    loc_11B15 ;~ 01C2:1736
loc_11939:
	// 4738 
cs=0x1c2;eip=0x001739; 	X(MOV(*(dw*)(raddr(ds,si+7)), 0));	// 3922 mov     word ptr [si+7], 0 ;~ 01C2:1739
cs=0x1c2;eip=0x00173e; 	J(JMP(loc_119aa));	// 3923 jmp     short loc_119AA ;~ 01C2:173E
loc_11940:
	// 4739 
cs=0x1c2;eip=0x001740; 	J(CALL(sub_11b2b,0));	// 3928 call    sub_11B2B ;~ 01C2:1740
cs=0x1c2;eip=0x001743; 	T(TEST(byte_1488b, 0x0FF));	// 3929 test    byte_1488B, 0FFh ;~ 01C2:1743
cs=0x1c2;eip=0x001748; 	J(JNZ(loc_119aa));	// 3930 jnz     short loc_119AA ;~ 01C2:1748
cs=0x1c2;eip=0x00174a; 	J(CALL(sub_109ad,0));	// 3931 call    sub_109AD ;~ 01C2:174A
cs=0x1c2;eip=0x00174d; 	J(JMP(loc_119aa));	// 3932 jmp     short loc_119AA ;~ 01C2:174D
loc_1194f:
	// 4740 
cs=0x1c2;eip=0x00174f; 	T(MOV(al, byte_14b18));	// 3936 mov     al, byte_14B18 ;~ 01C2:174F
cs=0x1c2;eip=0x001752; 	T(OR(al, al));	// 3937 or      al, al ;~ 01C2:1752
cs=0x1c2;eip=0x001754; 	J(JNZ(loc_11979));	// 3938 jnz     short loc_11979 ;~ 01C2:1754
cs=0x1c2;eip=0x001756; 	T(MOV(al, byte_14b17));	// 3939 mov     al, byte_14B17 ;~ 01C2:1756
cs=0x1c2;eip=0x001759; 	T(CMP(al, 0x64));	// 3940 cmp     al, 64h ; 'd' ;~ 01C2:1759
cs=0x1c2;eip=0x00175b; 	J(JNZ(loc_11961));	// 3941 jnz     short loc_11961 ;~ 01C2:175B
cs=0x1c2;eip=0x00175d; 	T(XOR(al, al));	// 3942 xor     al, al ;~ 01C2:175D
cs=0x1c2;eip=0x00175f; 	J(JMP(loc_1196c));	// 3943 jmp     short loc_1196C ;~ 01C2:175F
loc_11961:
	// 4741 
cs=0x1c2;eip=0x001761; 	T(MOV(al, byte_14b19));	// 3947 mov     al, byte_14B19 ;~ 01C2:1761
cs=0x1c2;eip=0x001764; 	T(INC(al));	// 3948 inc     al ;~ 01C2:1764
cs=0x1c2;eip=0x001766; 	T(CMP(al, 4));	// 3949 cmp     al, 4 ;~ 01C2:1766
cs=0x1c2;eip=0x001768; 	J(JC(loc_1196c));	// 3950 jb      short loc_1196C ;~ 01C2:1768
cs=0x1c2;eip=0x00176a; 	T(XOR(al, al));	// 3951 xor     al, al ;~ 01C2:176A
loc_1196c:
	// 4742 
cs=0x1c2;eip=0x00176c; 	X(MOV(byte_14b19, al));	// 3955 mov     byte_14B19, al ;~ 01C2:176C
cs=0x1c2;eip=0x00176f; 	J(CALL(sub_13c4f,0));	// 3956 call    sub_13C4F ;~ 01C2:176F
cs=0x1c2;eip=0x001772; 	T(AND(al, 0x1F));	// 3957 and     al, 1Fh ;~ 01C2:1772
cs=0x1c2;eip=0x001774; 	T(ADD(al, 3));	// 3958 add     al, 3 ;~ 01C2:1774
cs=0x1c2;eip=0x001776; 	X(MOV(byte_14b18, al));	// 3959 mov     byte_14B18, al ;~ 01C2:1776
loc_11979:
	// 4743 
cs=0x1c2;eip=0x001779; 	T(TEST(byte_14b19, 1));	// 3962 test    byte_14B19, 1 ;~ 01C2:1779
cs=0x1c2;eip=0x00177e; 	J(JNZ(loc_11991));	// 3963 jnz     short loc_11991 ;~ 01C2:177E
cs=0x1c2;eip=0x001780; 	T(CMP(byte_14b19, 0));	// 3964 cmp     byte_14B19, 0 ;~ 01C2:1780
cs=0x1c2;eip=0x001785; 	J(JZ(loc_1198c));	// 3965 jz      short loc_1198C ;~ 01C2:1785
cs=0x1c2;eip=0x001787; 	J(CALL(seg001_16f0_proc,m2c::kloc_11b15));	// 3966 call    loc_11B15 ;~ 01C2:1787
cs=0x1c2;eip=0x00178a; 	J(JMP(loc_11994));	// 3967 jmp     short loc_11994 ;~ 01C2:178A
loc_1198c:
	// 4744 
cs=0x1c2;eip=0x00178c; 	J(CALL(seg001_16f0_proc,m2c::kloc_11b24));	// 3971 call    loc_11B24 ;~ 01C2:178C
cs=0x1c2;eip=0x00178f; 	J(JMP(loc_11994));	// 3972 jmp     short loc_11994 ;~ 01C2:178F
loc_11991:
	// 4745 
cs=0x1c2;eip=0x001791; 	J(CALL(sub_11b2b,0));	// 3976 call    sub_11B2B ;~ 01C2:1791
loc_11994:
	// 4746 
cs=0x1c2;eip=0x001794; 	X(DEC(byte_14b17));	// 3980 dec     byte_14B17 ;~ 01C2:1794
cs=0x1c2;eip=0x001798; 	J(JNS(loc_1199f));	// 3981 jns     short loc_1199F ;~ 01C2:1798
cs=0x1c2;eip=0x00179a; 	X(MOV(byte_14b17, 0));	// 3982 mov     byte_14B17, 0 ;~ 01C2:179A
loc_1199f:
	// 4747 
cs=0x1c2;eip=0x00179f; 	X(DEC(byte_14b18));	// 3985 dec     byte_14B18 ;~ 01C2:179F
cs=0x1c2;eip=0x0017a3; 	J(JNS(loc_119aa));	// 3986 jns     short loc_119AA ;~ 01C2:17A3
cs=0x1c2;eip=0x0017a5; 	X(MOV(byte_14b18, 0));	// 3987 mov     byte_14B18, 0 ;~ 01C2:17A5
loc_119aa:
	// 4748 
cs=0x1c2;eip=0x0017aa; 	T(MOV(al, byte_154e0));	// 3991 mov     al, byte_154E0 ;~ 01C2:17AA
cs=0x1c2;eip=0x0017ad; 	T(OR(al, al));	// 3992 or      al, al ;~ 01C2:17AD
cs=0x1c2;eip=0x0017af; 	J(JZ(loc_119b5));	// 3993 jz      short loc_119B5 ;~ 01C2:17AF
cs=0x1c2;eip=0x0017b1; 	T(DEC(al));	// 3994 dec     al ;~ 01C2:17B1
cs=0x1c2;eip=0x0017b3; 	J(JNZ(loc_119bc));	// 3995 jnz     short loc_119BC ;~ 01C2:17B3
loc_119b5:
	// 4749 
cs=0x1c2;eip=0x0017b5; 	X(MOV(byte_14b1a, 0x0FF));	// 3998 mov     byte_14B1A, 0FFh ;~ 01C2:17B5
cs=0x1c2;eip=0x0017ba; 	T(XOR(al, al));	// 3999 xor     al, al ;~ 01C2:17BA
loc_119bc:
	// 4750 
cs=0x1c2;eip=0x0017bc; 	X(MOV(byte_154e0, al));	// 4002 mov     byte_154E0, al ;~ 01C2:17BC
cs=0x1c2;eip=0x0017bf; 	R(RETN(0));	// 4003 retn ;~ 01C2:17BF
loc_119c0:
	// 4751 
cs=0x1c2;eip=0x0017c0; 	T(MOV(al, byte_14b16));	// 4007 mov     al, byte_14B16 ;~ 01C2:17C0
cs=0x1c2;eip=0x0017c3; 	T(CMP(al, 0x17));	// 4008 cmp     al, 17h ;~ 01C2:17C3
cs=0x1c2;eip=0x0017c5; 	J(JC(loc_119eb));	// 4009 jb      short loc_119EB ;~ 01C2:17C5
cs=0x1c2;eip=0x0017c7; 	T(CMP(al, 0x23));	// 4010 cmp     al, 23h ; '#' ;~ 01C2:17C7
cs=0x1c2;eip=0x0017c9; 	J(JNZ(loc_119da));	// 4011 jnz     short loc_119DA ;~ 01C2:17C9
cs=0x1c2;eip=0x0017cb; 	J(CALL(sub_13c4f,0));	// 4012 call    sub_13C4F ;~ 01C2:17CB
cs=0x1c2;eip=0x0017ce; 	T(MOV(al, 0));	// 4013 mov     al, 0 ;~ 01C2:17CE
cs=0x1c2;eip=0x0017d0; 	T(TEST(ax, 0x8000));	// 4014 test    ax, 8000h ;~ 01C2:17D0
cs=0x1c2;eip=0x0017d3; 	J(JZ(loc_119d7));	// 4015 jz      short loc_119D7 ;~ 01C2:17D3
cs=0x1c2;eip=0x0017d5; 	T(MOV(al, 2));	// 4016 mov     al, 2 ;~ 01C2:17D5
loc_119d7:
	// 4752 
cs=0x1c2;eip=0x0017d7; 	X(MOV(byte_14b19, al));	// 4019 mov     byte_14B19, al ;~ 01C2:17D7
loc_119da:
	// 4753 
cs=0x1c2;eip=0x0017da; 	T(MOV(al, byte_14b19));	// 4022 mov     al, byte_14B19 ;~ 01C2:17DA
cs=0x1c2;eip=0x0017dd; 	T(OR(al, al));	// 4023 or      al, al ;~ 01C2:17DD
cs=0x1c2;eip=0x0017df; 	J(JNZ(loc_119e6));	// 4024 jnz     short loc_119E6 ;~ 01C2:17DF
cs=0x1c2;eip=0x0017e1; 	J(CALL(seg001_1991_proc,m2c::kloc_11baf));	// 4025 call    loc_11BAF ;~ 01C2:17E1
cs=0x1c2;eip=0x0017e4; 	J(JMP(loc_119f6));	// 4026 jmp     short loc_119F6 ;~ 01C2:17E4
loc_119e6:
	// 4754 
cs=0x1c2;eip=0x0017e6; 	J(CALL(seg001_1991_proc,m2c::kloc_11b91));	// 4030 call    loc_11B91 ;~ 01C2:17E6
cs=0x1c2;eip=0x0017e9; 	J(JMP(loc_119f6));	// 4031 jmp     short loc_119F6 ;~ 01C2:17E9
loc_119eb:
	// 4755 
cs=0x1c2;eip=0x0017eb; 	X(SHL(word_14b1d, 1));	// 4035 shl     word_14B1D, 1 ;~ 01C2:17EB
cs=0x1c2;eip=0x0017ef; 	J(CALL(sub_11b2b,0));	// 4036 call    sub_11B2B ;~ 01C2:17EF
cs=0x1c2;eip=0x0017f2; 	X(SHR(word_14b1d, 1));	// 4037 shr     word_14B1D, 1 ;~ 01C2:17F2
loc_119f6:
	// 4756 
cs=0x1c2;eip=0x0017f6; 	X(DEC(byte_14b17));	// 4041 dec     byte_14B17 ;~ 01C2:17F6
cs=0x1c2;eip=0x0017fa; 	J(JNS(loc_11a01));	// 4042 jns     short loc_11A01 ;~ 01C2:17FA
cs=0x1c2;eip=0x0017fc; 	X(MOV(byte_14b17, 0));	// 4043 mov     byte_14B17, 0 ;~ 01C2:17FC
loc_11a01:
	// 4757 
cs=0x1c2;eip=0x001801; 	T(MOV(al, byte_14b16));	// 4046 mov     al, byte_14B16 ;~ 01C2:1801
cs=0x1c2;eip=0x001804; 	T(DEC(al));	// 4047 dec     al ;~ 01C2:1804
cs=0x1c2;eip=0x001806; 	J(JNS(loc_11a0a));	// 4048 jns     short loc_11A0A ;~ 01C2:1806
cs=0x1c2;eip=0x001808; 	T(XOR(al, al));	// 4049 xor     al, al ;~ 01C2:1808
loc_11a0a:
	// 4758 
cs=0x1c2;eip=0x00180a; 	X(MOV(byte_14b16, al));	// 4052 mov     byte_14B16, al ;~ 01C2:180A
cs=0x1c2;eip=0x00180d; 	J(JMP(loc_119aa));	// 4053 jmp     short loc_119AA ;~ 01C2:180D
ret_1c2_180f:
	// 4759 
cs=0x1c2;eip=0x00180f; 	T(TEST(byte_14b20, 0x0FF));	// 4055 test    byte_14B20, 0FFh ;~ 01C2:180F
cs=0x1c2;eip=0x001814; 	J(JZ(loc_11a19));	// 4056 jz      short loc_11A19 ;~ 01C2:1814
cs=0x1c2;eip=0x001816; 	J(JMP(loc_11afe));	// 4057 jmp     loc_11AFE ;~ 01C2:1816
loc_11a19:
	// 4760 
cs=0x1c2;eip=0x001819; 	T(MOV(si, 0x3CC));	// 4061 mov     si, 3CCh ;~ 01C2:1819
cs=0x1c2;eip=0x00181c; 	X(MOV(byte_14b2e, 0));	// 4062 mov     byte_14B2E, 0 ;~ 01C2:181C
cs=0x1c2;eip=0x001821; 	T(MOV(dx, *(dw*)(raddr(ds,si+9))));	// 4063 mov     dx, [si+9] ;~ 01C2:1821
cs=0x1c2;eip=0x001824; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x0B))));	// 4064 mov     ax, [si+0Bh] ;~ 01C2:1824
cs=0x1c2;eip=0x001827; 	T(ADD(ax, 0x240));	// 4065 add     ax, 240h ;~ 01C2:1827
cs=0x1c2;eip=0x00182a; 	X(MOV(word_153ac, ax));	// 4066 mov     word_153AC, ax ;~ 01C2:182A
cs=0x1c2;eip=0x00182d; 	T(SUB(ax, dx));	// 4067 sub     ax, dx ;~ 01C2:182D
loc_11a2f:
	// 4761 
cs=0x1c2;eip=0x00182f; 	T(TEST(ax, 0x8000));	// 4070 test    ax, 8000h ;~ 01C2:182F
cs=0x1c2;eip=0x001832; 	J(JZ(loc_11a39));	// 4071 jz      short loc_11A39 ;~ 01C2:1832
cs=0x1c2;eip=0x001834; 	T(ADD(ax, 0x480));	// 4072 add     ax, 480h ;~ 01C2:1834
cs=0x1c2;eip=0x001837; 	J(JMP(loc_11a2f));	// 4073 jmp     short loc_11A2F ;~ 01C2:1837
loc_11a39:
	// 4762 
cs=0x1c2;eip=0x001839; 	T(CMP(ax, 0x480));	// 4078 cmp     ax, 480h ;~ 01C2:1839
cs=0x1c2;eip=0x00183c; 	J(JC(loc_11a43));	// 4079 jb      short loc_11A43 ;~ 01C2:183C
cs=0x1c2;eip=0x00183e; 	T(SUB(ax, 0x480));	// 4080 sub     ax, 480h ;~ 01C2:183E
cs=0x1c2;eip=0x001841; 	J(JMP(loc_11a39));	// 4081 jmp     short loc_11A39 ;~ 01C2:1841
loc_11a43:
	// 4763 
cs=0x1c2;eip=0x001843; 	T(CMP(ax, 0x120));	// 4085 cmp     ax, 120h ;~ 01C2:1843
cs=0x1c2;eip=0x001846; 	J(JBE(loc_11a58));	// 4086 jbe     short loc_11A58 ;~ 01C2:1846
cs=0x1c2;eip=0x001848; 	T(CMP(ax, 0x360));	// 4087 cmp     ax, 360h ;~ 01C2:1848
cs=0x1c2;eip=0x00184b; 	J(JNC(loc_11a58));	// 4088 jnb     short loc_11A58 ;~ 01C2:184B
cs=0x1c2;eip=0x00184d; 	X(ADD(word_153ac, 0x24C));	// 4089 add     word_153AC, 24Ch ;~ 01C2:184D
cs=0x1c2;eip=0x001853; 	X(MOV(byte_14b2e, 0x0FF));	// 4090 mov     byte_14B2E, 0FFh ;~ 01C2:1853
loc_11a58:
	// 4764 
cs=0x1c2;eip=0x001858; 	T(TEST(byte_14b22, 0x0FF));	// 4094 test    byte_14B22, 0FFh ;~ 01C2:1858
cs=0x1c2;eip=0x00185d; 	J(JNZ(loc_11ac5));	// 4095 jnz     short loc_11AC5 ;~ 01C2:185D
cs=0x1c2;eip=0x00185f; 	T(TEST(byte_14b21, 0x0FF));	// 4096 test    byte_14B21, 0FFh ;~ 01C2:185F
cs=0x1c2;eip=0x001864; 	J(JZ(loc_11a76));	// 4097 jz      short loc_11A76 ;~ 01C2:1864
cs=0x1c2;eip=0x001866; 	X(DEC(byte_14b21));	// 4098 dec     byte_14B21 ;~ 01C2:1866
cs=0x1c2;eip=0x00186a; 	X(MOV(byte_14757, 0x0F));	// 4099 mov     byte_14757, 0Fh ;~ 01C2:186A
cs=0x1c2;eip=0x00186f; 	X(MOV(byte_14b22, 0x0FF));	// 4100 mov     byte_14B22, 0FFh ;~ 01C2:186F
cs=0x1c2;eip=0x001874; 	J(JMP(loc_11ac5));	// 4101 jmp     short loc_11AC5 ;~ 01C2:1874
loc_11a76:
	// 4765 
cs=0x1c2;eip=0x001876; 	T(MOV(ax, word_153ac));	// 4105 mov     ax, word_153AC ;~ 01C2:1876
cs=0x1c2;eip=0x001879; 	X(MOV(*(dw*)(raddr(ds,si+9)), ax));	// 4106 mov     [si+9], ax ;~ 01C2:1879
loc_11a7c:
	// 4766 
cs=0x1c2;eip=0x00187c; 	X(DEC(byte_14b23));	// 4109 dec     byte_14B23 ;~ 01C2:187C
cs=0x1c2;eip=0x001880; 	T(MOV(ax, *(dw*)(raddr(ds,si+5))));	// 4110 mov     ax, [si+5] ;~ 01C2:1880
cs=0x1c2;eip=0x001883; 	T(OR(ax, ax));	// 4111 or      ax, ax ;~ 01C2:1883
cs=0x1c2;eip=0x001885; 	J(JZ(loc_11a91));	// 4112 jz      short loc_11A91 ;~ 01C2:1885
cs=0x1c2;eip=0x001887; 	T(ADD(ax, 0x14));	// 4113 add     ax, 14h ;~ 01C2:1887
cs=0x1c2;eip=0x00188a; 	J(JS(loc_11a8e));	// 4114 js      short loc_11A8E ;~ 01C2:188A
cs=0x1c2;eip=0x00188c; 	T(XOR(ax, ax));	// 4115 xor     ax, ax ;~ 01C2:188C
loc_11a8e:
	// 4767 
cs=0x1c2;eip=0x00188e; 	X(MOV(*(dw*)(raddr(ds,si+5)), ax));	// 4118 mov     [si+5], ax ;~ 01C2:188E
loc_11a91:
	// 4768 
cs=0x1c2;eip=0x001891; 	J(CALL(sub_11b2b,0));	// 4121 call    sub_11B2B ;~ 01C2:1891
cs=0x1c2;eip=0x001894; 	T(TEST(byte_14b2e, 0x0FF));	// 4122 test    byte_14B2E, 0FFh ;~ 01C2:1894
cs=0x1c2;eip=0x001899; 	J(JZ(locret_11aab));	// 4123 jz      short locret_11AAB ;~ 01C2:1899
cs=0x1c2;eip=0x00189b; 	T(MOV(ax, *(dw*)(raddr(ds,si+1))));	// 4124 mov     ax, [si+1] ;~ 01C2:189B
cs=0x1c2;eip=0x00189e; 	J(CALL(sub_11d12,0));	// 4125 call    sub_11D12 ;~ 01C2:189E
cs=0x1c2;eip=0x0018a1; 	J(JNC(loc_11aac));	// 4126 jnb     short loc_11AAC ;~ 01C2:18A1
cs=0x1c2;eip=0x0018a3; 	T(MOV(ax, *(dw*)(raddr(ds,si+3))));	// 4127 mov     ax, [si+3] ;~ 01C2:18A3
cs=0x1c2;eip=0x0018a6; 	J(CALL(sub_11d12,0));	// 4128 call    sub_11D12 ;~ 01C2:18A6
cs=0x1c2;eip=0x0018a9; 	J(JNC(loc_11aac));	// 4129 jnb     short loc_11AAC ;~ 01C2:18A9
locret_11aab:
	// 4769 
cs=0x1c2;eip=0x0018ab; 	R(RETN(0));	// 4132 retn ;~ 01C2:18AB
loc_11aac:
	// 4770 
cs=0x1c2;eip=0x0018ac; 	T(MOV(al, byte_14b23));	// 4137 mov     al, byte_14B23 ;~ 01C2:18AC
cs=0x1c2;eip=0x0018af; 	T(OR(al, al));	// 4138 or      al, al ;~ 01C2:18AF
cs=0x1c2;eip=0x0018b1; 	J(JS(loc_11abf));	// 4139 js      short loc_11ABF ;~ 01C2:18B1
cs=0x1c2;eip=0x0018b3; 	J(JZ(loc_11abf));	// 4140 jz      short loc_11ABF ;~ 01C2:18B3
cs=0x1c2;eip=0x0018b5; 	T(MOV(al, byte_154ee));	// 4141 mov     al, byte_154EE ;~ 01C2:18B5
cs=0x1c2;eip=0x0018b8; 	X(MOV(byte_14b21, al));	// 4142 mov     byte_14B21, al ;~ 01C2:18B8
cs=0x1c2;eip=0x0018bb; 	J(CALL(sub_139f9,m2c::kloc_139fe));	// 4143 call    loc_139FE ;~ 01C2:18BB
cs=0x1c2;eip=0x0018be; 	R(RETN(0));	// 4144 retn ;~ 01C2:18BE
loc_11abf:
	// 4771 
cs=0x1c2;eip=0x0018bf; 	X(MOV(byte_14b1a, 0x0FF));	// 4149 mov     byte_14B1A, 0FFh ;~ 01C2:18BF
cs=0x1c2;eip=0x0018c4; 	R(RETN(0));	// 4150 retn ;~ 01C2:18C4
loc_11ac5:
	// 4772 
cs=0x1c2;eip=0x0018c5; 	T(MOV(bx, word_153ac));	// 4155 mov     bx, word_153AC ;~ 01C2:18C5
cs=0x1c2;eip=0x0018c9; 	T(MOV(al, byte_14757));	// 4156 mov     al, byte_14757 ;~ 01C2:18C9
cs=0x1c2;eip=0x0018cc; 	T(CMP(al, 0x0C));	// 4157 cmp     al, 0Ch ;~ 01C2:18CC
cs=0x1c2;eip=0x0018ce; 	J(JBE(loc_11ad6));	// 4158 jbe     short loc_11AD6 ;~ 01C2:18CE
cs=0x1c2;eip=0x0018d0; 	T(ADD(bx, 0x90));	// 4159 add     bx, 90h ;~ 01C2:18D0
cs=0x1c2;eip=0x0018d4; 	J(JMP(loc_11ae8));	// 4160 jmp     short loc_11AE8 ;~ 01C2:18D4
loc_11ad6:
	// 4773 
cs=0x1c2;eip=0x0018d6; 	T(CMP(al, 6));	// 4164 cmp     al, 6 ;~ 01C2:18D6
cs=0x1c2;eip=0x0018d8; 	J(JBE(loc_11ae0));	// 4165 jbe     short loc_11AE0 ;~ 01C2:18D8
cs=0x1c2;eip=0x0018da; 	T(SUB(bx, 0x90));	// 4166 sub     bx, 90h ;~ 01C2:18DA
cs=0x1c2;eip=0x0018de; 	J(JMP(loc_11ae8));	// 4167 jmp     short loc_11AE8 ;~ 01C2:18DE
loc_11ae0:
	// 4774 
cs=0x1c2;eip=0x0018e0; 	T(CMP(al, 3));	// 4171 cmp     al, 3 ;~ 01C2:18E0
cs=0x1c2;eip=0x0018e2; 	J(JBE(loc_11ae8));	// 4172 jbe     short loc_11AE8 ;~ 01C2:18E2
cs=0x1c2;eip=0x0018e4; 	T(ADD(bx, 0x90));	// 4173 add     bx, 90h ;~ 01C2:18E4
loc_11ae8:
	// 4775 
cs=0x1c2;eip=0x0018e8; 	X(MOV(*(dw*)(raddr(ds,si+9)), bx));	// 4177 mov     [si+9], bx ;~ 01C2:18E8
cs=0x1c2;eip=0x0018eb; 	X(DEC(byte_14757));	// 4178 dec     byte_14757 ;~ 01C2:18EB
cs=0x1c2;eip=0x0018ef; 	T(TEST(byte_14757, 0x0FF));	// 4179 test    byte_14757, 0FFh ;~ 01C2:18EF
cs=0x1c2;eip=0x0018f4; 	J(JNZ(loc_11afb));	// 4180 jnz     short loc_11AFB ;~ 01C2:18F4
cs=0x1c2;eip=0x0018f6; 	X(MOV(byte_14b22, 0));	// 4181 mov     byte_14B22, 0 ;~ 01C2:18F6
loc_11afb:
	// 4776 
cs=0x1c2;eip=0x0018fb; 	J(JMP(loc_11a7c));	// 4184 jmp     loc_11A7C ;~ 01C2:18FB
loc_11afe:
	// 4777 
cs=0x1c2;eip=0x0018fe; 	X(DEC(byte_14b23));	// 4188 dec     byte_14B23 ;~ 01C2:18FE
cs=0x1c2;eip=0x001902; 	T(CMP(byte_14b20, 2));	// 4189 cmp     byte_14B20, 2 ;~ 01C2:1902
cs=0x1c2;eip=0x001907; 	J(JBE(loc_11b0d));	// 4190 jbe     short loc_11B0D ;~ 01C2:1907
cs=0x1c2;eip=0x001909; 	X(SUB(*(dw*)(raddr(ds,si+5)), 0x0F));	// 4191 sub     word ptr [si+5], 0Fh ;~ 01C2:1909
loc_11b0d:
	// 4778 
cs=0x1c2;eip=0x00190d; 	J(CALL(sub_11b2b,0));	// 4194 call    sub_11B2B ;~ 01C2:190D
cs=0x1c2;eip=0x001910; 	X(DEC(byte_14b20));	// 4195 dec     byte_14B20 ;~ 01C2:1910
cs=0x1c2;eip=0x001914; 	R(RETN(0));	// 4196 retn ;~ 01C2:1914
loc_11b15:
	// 4779 
cs=0x1c2;eip=0x001915; 	T(MOV(ax, word_14b1b));	// 4201 mov     ax, word_14B1B ;~ 01C2:1915
loc_11b18:
	// 4780 
cs=0x1c2;eip=0x001918; 	X(ADD(*(dw*)(raddr(ds,si+9)), ax));	// 4204 add     [si+9], ax ;~ 01C2:1918
cs=0x1c2;eip=0x00191b; 	T(XOR(ax, ax));	// 4205 xor     ax, ax ;~ 01C2:191B
cs=0x1c2;eip=0x00191d; 	X(MOV(word_14b10, ax));	// 4206 mov     word_14B10, ax ;~ 01C2:191D
cs=0x1c2;eip=0x001920; 	X(MOV(word_14b12, ax));	// 4207 mov     word_14B12, ax ;~ 01C2:1920
cs=0x1c2;eip=0x001923; 	R(RETN(0));	// 4208 retn ;~ 01C2:1923
loc_11b24:
	// 4781 
cs=0x1c2;eip=0x001924; 	T(MOV(ax, word_14b1b));	// 4213 mov     ax, word_14B1B ;~ 01C2:1924
cs=0x1c2;eip=0x001927; 	T(NEG(ax));	// 4214 neg     ax ;~ 01C2:1927
cs=0x1c2;eip=0x001929; 	J(JMP(loc_11b18));	// 4215 jmp     short loc_11B18 ;~ 01C2:1929

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_118fe: 	goto loc_118fe;
        case m2c::kloc_1190e: 	goto loc_1190e;
        case m2c::kloc_11918: 	goto loc_11918;
        case m2c::kloc_11922: 	goto loc_11922;
        case m2c::kloc_11936: 	goto loc_11936;
        case m2c::kloc_11939: 	goto loc_11939;
        case m2c::kloc_11940: 	goto loc_11940;
        case m2c::kloc_1194f: 	goto loc_1194f;
        case m2c::kloc_11961: 	goto loc_11961;
        case m2c::kloc_1196c: 	goto loc_1196c;
        case m2c::kloc_11979: 	goto loc_11979;
        case m2c::kloc_1198c: 	goto loc_1198c;
        case m2c::kloc_11991: 	goto loc_11991;
        case m2c::kloc_11994: 	goto loc_11994;
        case m2c::kloc_1199f: 	goto loc_1199f;
        case m2c::kloc_119aa: 	goto loc_119aa;
        case m2c::kloc_119b5: 	goto loc_119b5;
        case m2c::kloc_119bc: 	goto loc_119bc;
        case m2c::kloc_119c0: 	goto loc_119c0;
        case m2c::kloc_119d7: 	goto loc_119d7;
        case m2c::kloc_119da: 	goto loc_119da;
        case m2c::kloc_119e6: 	goto loc_119e6;
        case m2c::kloc_119eb: 	goto loc_119eb;
        case m2c::kloc_119f6: 	goto loc_119f6;
        case m2c::kloc_11a01: 	goto loc_11a01;
        case m2c::kloc_11a0a: 	goto loc_11a0a;
        case m2c::kloc_11a19: 	goto loc_11a19;
        case m2c::kloc_11a2f: 	goto loc_11a2f;
        case m2c::kloc_11a39: 	goto loc_11a39;
        case m2c::kloc_11a43: 	goto loc_11a43;
        case m2c::kloc_11a58: 	goto loc_11a58;
        case m2c::kloc_11a76: 	goto loc_11a76;
        case m2c::kloc_11a7c: 	goto loc_11a7c;
        case m2c::kloc_11a8e: 	goto loc_11a8e;
        case m2c::kloc_11a91: 	goto loc_11a91;
        case m2c::kloc_11aac: 	goto loc_11aac;
        case m2c::kloc_11abf: 	goto loc_11abf;
        case m2c::kloc_11ac5: 	goto loc_11ac5;
        case m2c::kloc_11ad6: 	goto loc_11ad6;
        case m2c::kloc_11ae0: 	goto loc_11ae0;
        case m2c::kloc_11ae8: 	goto loc_11ae8;
        case m2c::kloc_11afb: 	goto loc_11afb;
        case m2c::kloc_11afe: 	goto loc_11afe;
        case m2c::kloc_11b0d: 	goto loc_11b0d;
        case m2c::kloc_11b15: 	goto loc_11b15;
        case m2c::kloc_11b18: 	goto loc_11b18;
        case m2c::kloc_11b24: 	goto loc_11b24;
        case m2c::klocret_11aab: 	goto locret_11aab;
        case m2c::kret_1c2_16f4: 	goto ret_1c2_16f4;
        case m2c::kret_1c2_180f: 	goto ret_1c2_180f;
        case m2c::kseg001_16f0_proc: 	goto seg001_16f0_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_11b2b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11b2b:
    _begin:
cs=0x1c2;eip=0x00192b; 	T(MOV(cx, word_14b1d));	// 4222 mov     cx, word_14B1D ;~ 01C2:192B
ret_1c2_192f:
	// 4782 
cs=0x1c2;eip=0x00192f; 	T(MOV(ax, *(dw*)(raddr(ds,si+9))));	// 4223 mov     ax, [si+9] ;~ 01C2:192F
cs=0x1c2;eip=0x001932; 	J(CALL(sub_13bc7,0));	// 4224 call    sub_13BC7 ;~ 01C2:1932
cs=0x1c2;eip=0x001935; 	X(ADD(*(dw*)(raddr(ds,si+1)), dx));	// 4225 add     [si+1], dx ;~ 01C2:1935
cs=0x1c2;eip=0x001938; 	X(MOV(word_14b10, dx));	// 4226 mov     word_14B10, dx ;~ 01C2:1938
cs=0x1c2;eip=0x00193c; 	X(MOV(word_153ac, dx));	// 4227 mov     word_153AC, dx ;~ 01C2:193C
cs=0x1c2;eip=0x001940; 	T(MOV(cx, word_14b1d));	// 4228 mov     cx, word_14B1D ;~ 01C2:1940
cs=0x1c2;eip=0x001944; 	T(MOV(ax, *(dw*)(raddr(ds,si+9))));	// 4229 mov     ax, [si+9] ;~ 01C2:1944
cs=0x1c2;eip=0x001947; 	J(CALL(sub_13bad,0));	// 4230 call    sub_13BAD ;~ 01C2:1947
cs=0x1c2;eip=0x00194a; 	X(ADD(*(dw*)(raddr(ds,si+3)), dx));	// 4231 add     [si+3], dx ;~ 01C2:194A
cs=0x1c2;eip=0x00194d; 	X(MOV(word_14b12, dx));	// 4232 mov     word_14B12, dx ;~ 01C2:194D
cs=0x1c2;eip=0x001951; 	X(MOV(word_153ae, dx));	// 4233 mov     word_153AE, dx ;~ 01C2:1951
cs=0x1c2;eip=0x001955; 	T(CMP(*(dw*)(raddr(ds,si+5)), 0x0D));	// 4234 cmp     word ptr [si+5], 0Dh ;~ 01C2:1955
cs=0x1c2;eip=0x001959; 	J(JNC(locret_11b8a));	// 4235 jnb     short locret_11B8A ;~ 01C2:1959
cs=0x1c2;eip=0x00195b; 	T(MOV(dx, *(dw*)(raddr(ds,si+3))));	// 4236 mov     dx, [si+3] ;~ 01C2:195B
cs=0x1c2;eip=0x00195e; 	T(MOV(bx, *(dw*)(raddr(ds,si+1))));	// 4237 mov     bx, [si+1] ;~ 01C2:195E
cs=0x1c2;eip=0x001961; 	T(MOV(di, 0x400));	// 4238 mov     di, 400h ;~ 01C2:1961
cs=0x1c2;eip=0x001964; 	X(MOV(word_14870, 0x0C00));	// 4239 mov     word_14870, 0C00h ;~ 01C2:1964
cs=0x1c2;eip=0x00196a; 	T(MOV(cx, 0x0D));	// 4240 mov     cx, 0Dh ;~ 01C2:196A
cs=0x1c2;eip=0x00196d; 	J(CALL(sub_10766,0));	// 4241 call    sub_10766 ;~ 01C2:196D
cs=0x1c2;eip=0x001970; 	J(JNC(locret_11b8a));	// 4242 jnb     short locret_11B8A ;~ 01C2:1970
cs=0x1c2;eip=0x001972; 	T(MOV(ax, word_153ac));	// 4243 mov     ax, word_153AC ;~ 01C2:1972
cs=0x1c2;eip=0x001975; 	X(SUB(*(dw*)(raddr(ds,si+1)), ax));	// 4244 sub     [si+1], ax ;~ 01C2:1975
cs=0x1c2;eip=0x001978; 	T(MOV(ax, word_153ae));	// 4245 mov     ax, word_153AE ;~ 01C2:1978
cs=0x1c2;eip=0x00197b; 	X(SUB(*(dw*)(raddr(ds,si+3)), ax));	// 4246 sub     [si+3], ax ;~ 01C2:197B
cs=0x1c2;eip=0x00197e; 	T(CMP(byte_154e1, 3));	// 4247 cmp     byte_154E1, 3 ;~ 01C2:197E
cs=0x1c2;eip=0x001983; 	J(JZ(loc_11b8b));	// 4248 jz      short loc_11B8B ;~ 01C2:1983
cs=0x1c2;eip=0x001985; 	X(MOV(byte_14b16, 0x23));	// 4249 mov     byte_14B16, 23h ; '#' ;~ 01C2:1985
locret_11b8a:
	// 4783 
cs=0x1c2;eip=0x00198a; 	R(RETN(0));	// 4253 retn ;~ 01C2:198A
loc_11b8b:
	// 4784 
cs=0x1c2;eip=0x00198b; 	X(MOV(byte_14b20, 4));	// 4257 mov     byte_14B20, 4 ;~ 01C2:198B
cs=0x1c2;eip=0x001990; 	R(RETN(0));	// 4258 retn ;~ 01C2:1990

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_11b8b: 	goto loc_11b8b;
        case m2c::klocret_11b8a: 	goto locret_11b8a;
        case m2c::kret_1c2_192f: 	goto ret_1c2_192f;
        case m2c::ksub_11b2b: 	goto sub_11b2b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg001_1991_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg001_1991_proc:
    _begin:
loc_11b91:
	// 4785 
cs=0x1c2;eip=0x001991; 	T(MOV(cx, word_14b1d));	// 4264 mov     cx, word_14B1D ;~ 01C2:1991
cs=0x1c2;eip=0x001995; 	X(PUSH(cx));	// 4265 push    cx ;~ 01C2:1995
cs=0x1c2;eip=0x001996; 	T(SHL(cx, 1));	// 4266 shl     cx, 1 ;~ 01C2:1996
cs=0x1c2;eip=0x001998; 	T(NEG(cx));	// 4267 neg     cx ;~ 01C2:1998
cs=0x1c2;eip=0x00199a; 	X(MOV(word_14b1d, cx));	// 4268 mov     word_14B1D, cx ;~ 01C2:199A
cs=0x1c2;eip=0x00199e; 	J(CALL(sub_11b2b,0));	// 4269 call    sub_11B2B ;~ 01C2:199E
cs=0x1c2;eip=0x0019a1; 	X(POP(cx));	// 4270 pop     cx ;~ 01C2:19A1
cs=0x1c2;eip=0x0019a2; 	X(MOV(word_14b1d, cx));	// 4271 mov     word_14B1D, cx ;~ 01C2:19A2
cs=0x1c2;eip=0x0019a6; 	T(MOV(ax, word_14b1b));	// 4272 mov     ax, word_14B1B ;~ 01C2:19A6
cs=0x1c2;eip=0x0019a9; 	T(SHL(ax, 1));	// 4273 shl     ax, 1 ;~ 01C2:19A9
cs=0x1c2;eip=0x0019ab; 	X(ADD(*(dw*)(raddr(ds,si+9)), ax));	// 4274 add     [si+9], ax ;~ 01C2:19AB
cs=0x1c2;eip=0x0019ae; 	R(RETN(0));	// 4275 retn ;~ 01C2:19AE
loc_11baf:
	// 4786 
cs=0x1c2;eip=0x0019af; 	T(MOV(cx, word_14b1d));	// 4279 mov     cx, word_14B1D ;~ 01C2:19AF
cs=0x1c2;eip=0x0019b3; 	X(PUSH(cx));	// 4280 push    cx ;~ 01C2:19B3
cs=0x1c2;eip=0x0019b4; 	T(SHL(cx, 1));	// 4281 shl     cx, 1 ;~ 01C2:19B4
cs=0x1c2;eip=0x0019b6; 	T(NEG(cx));	// 4282 neg     cx ;~ 01C2:19B6
cs=0x1c2;eip=0x0019b8; 	X(MOV(word_14b1d, cx));	// 4283 mov     word_14B1D, cx ;~ 01C2:19B8
cs=0x1c2;eip=0x0019bc; 	J(CALL(sub_11b2b,0));	// 4284 call    sub_11B2B ;~ 01C2:19BC
cs=0x1c2;eip=0x0019bf; 	X(POP(cx));	// 4285 pop     cx ;~ 01C2:19BF
cs=0x1c2;eip=0x0019c0; 	X(MOV(word_14b1d, cx));	// 4286 mov     word_14B1D, cx ;~ 01C2:19C0
cs=0x1c2;eip=0x0019c4; 	T(MOV(ax, word_14b1b));	// 4287 mov     ax, word_14B1B ;~ 01C2:19C4
cs=0x1c2;eip=0x0019c7; 	T(SHL(ax, 1));	// 4288 shl     ax, 1 ;~ 01C2:19C7
cs=0x1c2;eip=0x0019c9; 	X(SUB(*(dw*)(raddr(ds,si+9)), ax));	// 4289 sub     [si+9], ax ;~ 01C2:19C9
cs=0x1c2;eip=0x0019cc; 	R(RETN(0));	// 4290 retn ;~ 01C2:19CC

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_11baf: 	goto loc_11baf;
        case m2c::kseg001_1991_proc: 	goto seg001_1991_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group9(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group9:
    _begin:
sub_11bcd:
	// 4295 
cs=0x1c2;eip=0x0019cd; 	T(CMP(byte_1475b, 3));	// 4296 cmp     byte_1475B, 3 ;~ 01C2:19CD
ret_1c2_19d2:
	// 4787 
cs=0x1c2;eip=0x0019d2; 	J(JNZ(loc_11bdb));	// 4297 jnz     short loc_11BDB ;~ 01C2:19D2
cs=0x1c2;eip=0x0019d4; 	X(MOV(byte_14b1f, 0));	// 4298 mov     byte_14B1F, 0 ;~ 01C2:19D4
cs=0x1c2;eip=0x0019d9; 	J(JMP(loc_11be2));	// 4299 jmp     short loc_11BE2 ;~ 01C2:19D9
loc_11bdb:
	// 4788 
cs=0x1c2;eip=0x0019db; 	T(TEST(byte_1475b, 0x0FF));	// 4303 test    byte_1475B, 0FFh ;~ 01C2:19DB
cs=0x1c2;eip=0x0019e0; 	J(JZ(loc_11bf0));	// 4304 jz      short loc_11BF0 ;~ 01C2:19E0
loc_11be2:
	// 4789 
cs=0x1c2;eip=0x0019e2; 	T(TEST(byte_15242, 0x0FF));	// 4307 test    byte_15242, 0FFh ;~ 01C2:19E2
cs=0x1c2;eip=0x0019e7; 	J(JZ(loc_11bea));	// 4308 jz      short loc_11BEA ;~ 01C2:19E7
locret_11be9:
	// 4790 
cs=0x1c2;eip=0x0019e9; 	R(RETN(0));	// 4311 retn ;~ 01C2:19E9
loc_11bea:
	// 4791 
cs=0x1c2;eip=0x0019ea; 	J(CALL(sub_13819,0));	// 4315 call    sub_13819 ;~ 01C2:19EA
cs=0x1c2;eip=0x0019ed; 	J(JMP(loc_11c3c));	// 4316 jmp     short loc_11C3C ;~ 01C2:19ED
loc_11bf0:
	// 4792 
cs=0x1c2;eip=0x0019f0; 	T(TEST(byte_154e2, 0x0FF));	// 4321 test    byte_154E2, 0FFh ;~ 01C2:19F0
cs=0x1c2;eip=0x0019f5; 	J(JNZ(locret_11be9));	// 4322 jnz     short locret_11BE9 ;~ 01C2:19F5
cs=0x1c2;eip=0x0019f7; 	T(TEST(byte_14b1a, 0x0FF));	// 4323 test    byte_14B1A, 0FFh ;~ 01C2:19F7
cs=0x1c2;eip=0x0019fc; 	J(JNZ(loc_11c17));	// 4324 jnz     short loc_11C17 ;~ 01C2:19FC
cs=0x1c2;eip=0x0019fe; 	T(TEST(byte_14b14, 0x0FF));	// 4325 test    byte_14B14, 0FFh ;~ 01C2:19FE
cs=0x1c2;eip=0x001a03; 	X(MOV(byte_14b14, 0));	// 4326 mov     byte_14B14, 0 ;~ 01C2:1A03
cs=0x1c2;eip=0x001a08; 	J(JNZ(loc_11c26));	// 4327 jnz     short loc_11C26 ;~ 01C2:1A08
cs=0x1c2;eip=0x001a0a; 	T(TEST(byte_14b15, 0x0FF));	// 4328 test    byte_14B15, 0FFh ;~ 01C2:1A0A
cs=0x1c2;eip=0x001a0f; 	X(MOV(byte_14b15, 0));	// 4329 mov     byte_14B15, 0 ;~ 01C2:1A0F
cs=0x1c2;eip=0x001a14; 	J(JNZ(loc_11c26));	// 4330 jnz     short loc_11C26 ;~ 01C2:1A14
cs=0x1c2;eip=0x001a16; 	R(RETN(0));	// 4331 retn ;~ 01C2:1A16
loc_11c17:
	// 4793 
cs=0x1c2;eip=0x001a17; 	X(MOV(byte_14b1a, 0));	// 4335 mov     byte_14B1A, 0 ;~ 01C2:1A17
cs=0x1c2;eip=0x001a1c; 	T(CMP(byte_154e1, 3));	// 4336 cmp     byte_154E1, 3 ;~ 01C2:1A1C
cs=0x1c2;eip=0x001a21; 	J(JZ(loc_11c35));	// 4337 jz      short loc_11C35 ;~ 01C2:1A21
cs=0x1c2;eip=0x001a23; 	J(JMP(loc_11c4f));	// 4338 jmp     short loc_11C4F ;~ 01C2:1A23
loc_11c26:
	// 4794 
cs=0x1c2;eip=0x001a26; 	T(TEST(byte_14b1f, 0x0FF));	// 4344 test    byte_14B1F, 0FFh ;~ 01C2:1A26
cs=0x1c2;eip=0x001a2b; 	J(JZ(loc_11c3c));	// 4345 jz      short loc_11C3C ;~ 01C2:1A2B
cs=0x1c2;eip=0x001a2d; 	J(CALL(sub_13c4f,0));	// 4346 call    sub_13C4F ;~ 01C2:1A2D
cs=0x1c2;eip=0x001a30; 	T(TEST(ax, 1));	// 4347 test    ax, 1 ;~ 01C2:1A30
cs=0x1c2;eip=0x001a33; 	J(JNZ(loc_11c54));	// 4348 jnz     short loc_11C54 ;~ 01C2:1A33
loc_11c35:
	// 4795 
cs=0x1c2;eip=0x001a35; 	X(MOV(byte_14b1f, 0));	// 4351 mov     byte_14B1F, 0 ;~ 01C2:1A35
cs=0x1c2;eip=0x001a3a; 	J(JMP(loc_11c4c));	// 4352 jmp     short loc_11C4C ;~ 01C2:1A3A
loc_11c3c:
	// 4796 
cs=0x1c2;eip=0x001a3c; 	T(MOV(ax, word_14753));	// 4357 mov     ax, word_14753 ;~ 01C2:1A3C
cs=0x1c2;eip=0x001a3f; 	T(CMP(ax, word_14b24));	// 4358 cmp     ax, word_14B24 ;~ 01C2:1A3F
cs=0x1c2;eip=0x001a43; 	J(JBE(loc_11c4c));	// 4359 jbe     short loc_11C4C ;~ 01C2:1A43
cs=0x1c2;eip=0x001a45; 	J(CALL(sub_13c4f,0));	// 4360 call    sub_13C4F ;~ 01C2:1A45
cs=0x1c2;eip=0x001a48; 	T(AND(al, 3));	// 4361 and     al, 3 ;~ 01C2:1A48
cs=0x1c2;eip=0x001a4a; 	J(JZ(loc_11c4f));	// 4362 jz      short loc_11C4F ;~ 01C2:1A4A
loc_11c4c:
	// 4797 
cs=0x1c2;eip=0x001a4c; 	J(JMP(sub_138e1));	// 4366 jmp     sub_138E1 ;~ 01C2:1A4C
loc_11c4f:
	// 4798 
cs=0x1c2;eip=0x001a4f; 	X(MOV(byte_14b1f, 0x0FF));	// 4371 mov     byte_14B1F, 0FFh ;~ 01C2:1A4F
loc_11c54:
	// 4799 
cs=0x1c2;eip=0x001a54; 	J(CALL(sub_139f9,0));	// 4374 call    sub_139F9 ;~ 01C2:1A54
cs=0x1c2;eip=0x001a57; 	R(RETN(0));	// 4375 retn ;~ 01C2:1A57
sub_138e1:
	// 8482 
cs=0x1c2;eip=0x0036e1; 	T(TEST(byte_14b06, 0x0FF));	// 8484 test    byte_14B06, 0FFh ;~ 01C2:36E1
ret_1c2_36e6:
	// 5204 
cs=0x1c2;eip=0x0036e6; 	J(JZ(loc_138ec));	// 8485 jz      short loc_138EC ;~ 01C2:36E6
cs=0x1c2;eip=0x0036e8; 	J(CALL(sub_139f9,0));	// 8486 call    sub_139F9 ;~ 01C2:36E8
cs=0x1c2;eip=0x0036eb; 	R(RETN(0));	// 8487 retn ;~ 01C2:36EB
loc_138ec:
	// 5205 
cs=0x1c2;eip=0x0036ec; 	T(TEST(byte_154e2, 0x0FF));	// 8491 test    byte_154E2, 0FFh ;~ 01C2:36EC
cs=0x1c2;eip=0x0036f1; 	J(JNZ(locret_138fb));	// 8492 jnz     short locret_138FB ;~ 01C2:36F1
cs=0x1c2;eip=0x0036f3; 	J(CALL(sub_13a76,0));	// 8493 call    sub_13A76 ;~ 01C2:36F3
cs=0x1c2;eip=0x0036f6; 	X(MOV(byte_154e2, 0x0C));	// 8494 mov     byte_154E2, 0Ch ;~ 01C2:36F6
locret_138fb:
	// 5206 
cs=0x1c2;eip=0x0036fb; 	R(RETN(0));	// 8497 retn ;~ 01C2:36FB

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_11bdb: 	goto loc_11bdb;
        case m2c::kloc_11be2: 	goto loc_11be2;
        case m2c::kloc_11bea: 	goto loc_11bea;
        case m2c::kloc_11bf0: 	goto loc_11bf0;
        case m2c::kloc_11c17: 	goto loc_11c17;
        case m2c::kloc_11c26: 	goto loc_11c26;
        case m2c::kloc_11c35: 	goto loc_11c35;
        case m2c::kloc_11c3c: 	goto loc_11c3c;
        case m2c::kloc_11c4c: 	goto loc_11c4c;
        case m2c::kloc_11c4f: 	goto loc_11c4f;
        case m2c::kloc_11c54: 	goto loc_11c54;
        case m2c::kloc_138ec: 	goto loc_138ec;
        case m2c::klocret_11be9: 	goto locret_11be9;
        case m2c::klocret_138fb: 	goto locret_138fb;
        case m2c::kret_1c2_19d2: 	goto ret_1c2_19d2;
        case m2c::kret_1c2_36e6: 	goto ret_1c2_36e6;
        case m2c::ksub_11bcd: 	goto sub_11bcd;
        case m2c::ksub_138e1: 	goto sub_138e1;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_11c58(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11c58:
    _begin:
cs=0x1c2;eip=0x001a58; 	T(TEST(byte_14fb2, 0x0FF));	// 4383 test    byte_14FB2, 0FFh ;~ 01C2:1A58
ret_1c2_1a5d:
	// 4800 
cs=0x1c2;eip=0x001a5d; 	J(JZ(loc_11c78));	// 4384 jz      short loc_11C78 ;~ 01C2:1A5D
cs=0x1c2;eip=0x001a5f; 	X(DEC(byte_14fb2));	// 4385 dec     byte_14FB2 ;~ 01C2:1A5F
cs=0x1c2;eip=0x001a63; 	J(JZ(loc_11c6f));	// 4386 jz      short loc_11C6F ;~ 01C2:1A63
cs=0x1c2;eip=0x001a65; 	T(MOV(al, byte_14fb2));	// 4387 mov     al, byte_14FB2 ;~ 01C2:1A65
cs=0x1c2;eip=0x001a68; 	T(AND(al, 1));	// 4388 and     al, 1 ;~ 01C2:1A68
cs=0x1c2;eip=0x001a6a; 	X(MOV(byte_14b2d, al));	// 4389 mov     byte_14B2D, al ;~ 01C2:1A6A
cs=0x1c2;eip=0x001a6d; 	J(JMP(locret_11c77));	// 4390 jmp     short locret_11C77 ;~ 01C2:1A6D
loc_11c6f:
	// 4801 
cs=0x1c2;eip=0x001a6f; 	X(MOV(byte_14b2d, 0));	// 4394 mov     byte_14B2D, 0 ;~ 01C2:1A6F
cs=0x1c2;eip=0x001a74; 	J(CALL(sub_11d07,0));	// 4395 call    sub_11D07 ;~ 01C2:1A74
locret_11c77:
	// 4802 
cs=0x1c2;eip=0x001a77; 	R(RETN(0));	// 4398 retn ;~ 01C2:1A77
loc_11c78:
	// 4803 
cs=0x1c2;eip=0x001a78; 	T(CMP(byte_1475a, 0x0FF));	// 4402 cmp     byte_1475A, 0FFh ;~ 01C2:1A78
cs=0x1c2;eip=0x001a7d; 	J(JNZ(loc_11c82));	// 4403 jnz     short loc_11C82 ;~ 01C2:1A7D
cs=0x1c2;eip=0x001a7f; 	J(CALL(sub_11cfc,0));	// 4404 call    sub_11CFC ;~ 01C2:1A7F
loc_11c82:
	// 4804 
cs=0x1c2;eip=0x001a82; 	T(CMP(byte_1475a, 0));	// 4407 cmp     byte_1475A, 0 ;~ 01C2:1A82
cs=0x1c2;eip=0x001a87; 	J(JNZ(loc_11c94));	// 4408 jnz     short loc_11C94 ;~ 01C2:1A87
cs=0x1c2;eip=0x001a89; 	T(TEST(byte_14a19, 0x0FF));	// 4409 test    byte_14A19, 0FFh ;~ 01C2:1A89
cs=0x1c2;eip=0x001a8e; 	J(JNZ(locret_11c93));	// 4410 jnz     short locret_11C93 ;~ 01C2:1A8E
cs=0x1c2;eip=0x001a90; 	J(CALL(sub_13a5e,0));	// 4411 call    sub_13A5E ;~ 01C2:1A90
locret_11c93:
	// 4805 
cs=0x1c2;eip=0x001a93; 	R(RETN(0));	// 4414 retn ;~ 01C2:1A93
loc_11c94:
	// 4806 
cs=0x1c2;eip=0x001a94; 	X(DEC(byte_1475a));	// 4418 dec     byte_1475A ;~ 01C2:1A94
cs=0x1c2;eip=0x001a98; 	R(RETN(0));	// 4419 retn ;~ 01C2:1A98

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_11c6f: 	goto loc_11c6f;
        case m2c::kloc_11c78: 	goto loc_11c78;
        case m2c::kloc_11c82: 	goto loc_11c82;
        case m2c::kloc_11c94: 	goto loc_11c94;
        case m2c::klocret_11c77: 	goto locret_11c77;
        case m2c::klocret_11c93: 	goto locret_11c93;
        case m2c::kret_1c2_1a5d: 	goto ret_1c2_1a5d;
        case m2c::ksub_11c58: 	goto sub_11c58;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg001_1a99_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg001_1a99_proc:
    _begin:
cs=0x1c2;eip=0x001a99; 	T(MOV(ax, word_14b2b));	// 4423 mov     ax, word_14B2B ;~ 01C2:1A99
ret_1c2_1a9c:
	// 4807 
cs=0x1c2;eip=0x001a9c; 	T(ADD(ax, 0x20));	// 4424 add     ax, 20h ; ' ' ;~ 01C2:1A9C
cs=0x1c2;eip=0x001a9f; 	T(CMP(ax, 0x120));	// 4425 cmp     ax, 120h ;~ 01C2:1A9F
cs=0x1c2;eip=0x001aa2; 	J(JC(loc_11ca6));	// 4426 jb      short loc_11CA6 ;~ 01C2:1AA2
cs=0x1c2;eip=0x001aa4; 	T(XOR(ax, ax));	// 4427 xor     ax, ax ;~ 01C2:1AA4
loc_11ca6:
	// 4808 
cs=0x1c2;eip=0x001aa6; 	X(MOV(word_14b2b, ax));	// 4430 mov     word_14B2B, ax ;~ 01C2:1AA6
cs=0x1c2;eip=0x001aa9; 	T(TEST(byte_14b26, 0x0FF));	// 4431 test    byte_14B26, 0FFh ;~ 01C2:1AA9
cs=0x1c2;eip=0x001aae; 	J(JNZ(loc_11cb3));	// 4432 jnz     short loc_11CB3 ;~ 01C2:1AAE
cs=0x1c2;eip=0x001ab0; 	J(CALL(sub_11cca,0));	// 4433 call    sub_11CCA ;~ 01C2:1AB0
loc_11cb3:
	// 4809 
cs=0x1c2;eip=0x001ab3; 	J(CALL(sub_11cbb,0));	// 4436 call    sub_11CBB ;~ 01C2:1AB3
cs=0x1c2;eip=0x001ab6; 	X(DEC(byte_14b26));	// 4437 dec     byte_14B26 ;~ 01C2:1AB6
cs=0x1c2;eip=0x001aba; 	R(RETN(0));	// 4438 retn ;~ 01C2:1ABA

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_11ca6: 	goto loc_11ca6;
        case m2c::kloc_11cb3: 	goto loc_11cb3;
        case m2c::kret_1c2_1a9c: 	goto ret_1c2_1a9c;
        case m2c::kseg001_1a99_proc: 	goto seg001_1a99_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_11cbb(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11cbb:
    _begin:
cs=0x1c2;eip=0x001abb; 	T(MOV(dx, word_14b27));	// 4444 mov     dx, word_14B27 ;~ 01C2:1ABB
ret_1c2_1abf:
	// 4810 
cs=0x1c2;eip=0x001abf; 	X(ADD(*(dw*)(raddr(ds,si+1)), dx));	// 4445 add     [si+1], dx ;~ 01C2:1ABF
cs=0x1c2;eip=0x001ac2; 	T(MOV(dx, word_14b29));	// 4446 mov     dx, word_14B29 ;~ 01C2:1AC2
cs=0x1c2;eip=0x001ac6; 	X(ADD(*(dw*)(raddr(ds,si+3)), dx));	// 4447 add     [si+3], dx ;~ 01C2:1AC6
cs=0x1c2;eip=0x001ac9; 	R(RETN(0));	// 4448 retn ;~ 01C2:1AC9

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_1abf: 	goto ret_1c2_1abf;
        case m2c::ksub_11cbb: 	goto sub_11cbb;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_11cca(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11cca:
    _begin:
cs=0x1c2;eip=0x001aca; 	T(MOV(ax, 0x150));	// 4457 mov     ax, 150h ;~ 01C2:1ACA
ret_1c2_1acd:
	// 4811 
cs=0x1c2;eip=0x001acd; 	J(CALL(sub_13c68,0));	// 4458 call    sub_13C68 ;~ 01C2:1ACD
cs=0x1c2;eip=0x001ad0; 	X(MOV(*(dw*)(raddr(ds,si+7)), ax));	// 4459 mov     [si+7], ax ;~ 01C2:1AD0
cs=0x1c2;eip=0x001ad3; 	T(MOV(cx, ax));	// 4460 mov     cx, ax ;~ 01C2:1AD3
cs=0x1c2;eip=0x001ad5; 	T(MOV(ax, 0x480));	// 4461 mov     ax, 480h ;~ 01C2:1AD5
cs=0x1c2;eip=0x001ad8; 	J(CALL(sub_13c68,0));	// 4462 call    sub_13C68 ;~ 01C2:1AD8
cs=0x1c2;eip=0x001adb; 	X(MOV(*(dw*)(raddr(ds,si+9)), ax));	// 4463 mov     [si+9], ax ;~ 01C2:1ADB
cs=0x1c2;eip=0x001ade; 	J(CALL(sub_13bc7,0));	// 4464 call    sub_13BC7 ;~ 01C2:1ADE
cs=0x1c2;eip=0x001ae1; 	X(MOV(word_14b27, dx));	// 4465 mov     word_14B27, dx ;~ 01C2:1AE1
cs=0x1c2;eip=0x001ae5; 	T(MOV(ax, *(dw*)(raddr(ds,si+9))));	// 4466 mov     ax, [si+9] ;~ 01C2:1AE5
cs=0x1c2;eip=0x001ae8; 	J(CALL(sub_13bad,0));	// 4467 call    sub_13BAD ;~ 01C2:1AE8
cs=0x1c2;eip=0x001aeb; 	X(MOV(word_14b29, dx));	// 4468 mov     word_14B29, dx ;~ 01C2:1AEB
cs=0x1c2;eip=0x001aef; 	T(MOV(ax, 0x0F));	// 4469 mov     ax, 0Fh ;~ 01C2:1AEF
cs=0x1c2;eip=0x001af2; 	J(CALL(sub_13c68,0));	// 4470 call    sub_13C68 ;~ 01C2:1AF2
cs=0x1c2;eip=0x001af5; 	T(ADD(ax, 5));	// 4471 add     ax, 5 ;~ 01C2:1AF5
cs=0x1c2;eip=0x001af8; 	X(MOV(byte_14b26, al));	// 4472 mov     byte_14B26, al ;~ 01C2:1AF8
cs=0x1c2;eip=0x001afb; 	R(RETN(0));	// 4473 retn ;~ 01C2:1AFB

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_1acd: 	goto ret_1c2_1acd;
        case m2c::ksub_11cca: 	goto sub_11cca;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_11cfc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11cfc:
    _begin:
cs=0x1c2;eip=0x001afc; 	T(MOV(ax, 0x96));	// 4481 mov     ax, 96h ; '–' ;~ 01C2:1AFC
ret_1c2_1aff:
	// 4812 
cs=0x1c2;eip=0x001aff; 	J(CALL(sub_13c68,0));	// 4482 call    sub_13C68 ;~ 01C2:1AFF
cs=0x1c2;eip=0x001b02; 	T(INC(ax));	// 4483 inc     ax ;~ 01C2:1B02
cs=0x1c2;eip=0x001b03; 	X(MOV(byte_1475a, al));	// 4484 mov     byte_1475A, al ;~ 01C2:1B03
cs=0x1c2;eip=0x001b06; 	R(RETN(0));	// 4485 retn ;~ 01C2:1B06

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_1aff: 	goto ret_1c2_1aff;
        case m2c::ksub_11cfc: 	goto sub_11cfc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_11d07(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11d07:
    _begin:
cs=0x1c2;eip=0x001b07; 	X(MOV(byte_1475a, 0x0FF));	// 4494 mov     byte_1475A, 0FFh ;~ 01C2:1B07
ret_1c2_1b0c:
	// 4813 
cs=0x1c2;eip=0x001b0c; 	X(MOV(byte_14a19, 0));	// 4495 mov     byte_14A19, 0 ;~ 01C2:1B0C
cs=0x1c2;eip=0x001b11; 	R(RETN(0));	// 4496 retn ;~ 01C2:1B11

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_1b0c: 	goto ret_1c2_1b0c;
        case m2c::ksub_11d07: 	goto sub_11d07;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_11d12(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11d12:
    _begin:
cs=0x1c2;eip=0x001b12; 	T(OR(ax, ax));	// 4505 or      ax, ax ;~ 01C2:1B12
ret_1c2_1b14:
	// 4814 
cs=0x1c2;eip=0x001b14; 	J(JNS(loc_11d18));	// 4506 jns     short loc_11D18 ;~ 01C2:1B14
cs=0x1c2;eip=0x001b16; 	T(NEG(ax));	// 4507 neg     ax ;~ 01C2:1B16
loc_11d18:
	// 4815 
cs=0x1c2;eip=0x001b18; 	T(CMP(ax, 0x7000));	// 4510 cmp     ax, 7000h ;~ 01C2:1B18
cs=0x1c2;eip=0x001b1b; 	R(RETN(0));	// 4511 retn ;~ 01C2:1B1B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_11d18: 	goto loc_11d18;
        case m2c::kret_1c2_1b14: 	goto ret_1c2_1b14;
        case m2c::ksub_11d12: 	goto sub_11d12;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_11d1c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11d1c:
    _begin:
cs=0x1c2;eip=0x001b1c; 	J(CALL(sub_107a4,0));	// 4519 call    sub_107A4 ;~ 01C2:1B1C
ret_1c2_1b1f:
	// 4816 
cs=0x1c2;eip=0x001b1f; 	J(JNC(loc_11d31));	// 4520 jnb     short loc_11D31 ;~ 01C2:1B1F
cs=0x1c2;eip=0x001b21; 	J(CALL(sub_10846,0));	// 4521 call    sub_10846 ;~ 01C2:1B21
cs=0x1c2;eip=0x001b24; 	J(JC(loc_11d37));	// 4522 jb      short loc_11D37 ;~ 01C2:1B24
loc_11d26:
	// 4817 
cs=0x1c2;eip=0x001b26; 	T(MOV(al, 3));	// 4525 mov     al, 3 ;~ 01C2:1B26
cs=0x1c2;eip=0x001b28; 	J(CALL(sub_14015,0));	// 4526 call    sub_14015 ;~ 01C2:1B28
cs=0x1c2;eip=0x001b2b; 	X(MOV(byte_1476d, 4));	// 4527 mov     byte_1476D, 4 ;~ 01C2:1B2B
cs=0x1c2;eip=0x001b30; 	R(RETN(0));	// 4528 retn ;~ 01C2:1B30
loc_11d31:
	// 4818 
cs=0x1c2;eip=0x001b31; 	J(CALL(sub_10846,0));	// 4532 call    sub_10846 ;~ 01C2:1B31
cs=0x1c2;eip=0x001b34; 	J(JC(loc_11d37));	// 4533 jb      short loc_11D37 ;~ 01C2:1B34
cs=0x1c2;eip=0x001b36; 	R(RETN(0));	// 4534 retn ;~ 01C2:1B36
loc_11d37:
	// 4819 
cs=0x1c2;eip=0x001b37; 	T(CMP(byte_148ab, 3));	// 4539 cmp     byte_148AB, 3 ;~ 01C2:1B37
cs=0x1c2;eip=0x001b3c; 	J(JZ(loc_11d4c));	// 4540 jz      short loc_11D4C ;~ 01C2:1B3C
cs=0x1c2;eip=0x001b3e; 	T(MOV(ax, word_14b10));	// 4541 mov     ax, word_14B10 ;~ 01C2:1B3E
cs=0x1c2;eip=0x001b41; 	X(SUB(*(dw*)(raddr(ds,si+1)), ax));	// 4542 sub     [si+1], ax ;~ 01C2:1B41
cs=0x1c2;eip=0x001b44; 	T(MOV(ax, word_14b12));	// 4543 mov     ax, word_14B12 ;~ 01C2:1B44
cs=0x1c2;eip=0x001b47; 	X(SUB(*(dw*)(raddr(ds,si+3)), ax));	// 4544 sub     [si+3], ax ;~ 01C2:1B47
cs=0x1c2;eip=0x001b4a; 	J(JMP(loc_11d26));	// 4545 jmp     short loc_11D26 ;~ 01C2:1B4A
loc_11d4c:
	// 4820 
cs=0x1c2;eip=0x001b4c; 	X(MOV(byte_1475b, 3));	// 4549 mov     byte_1475B, 3 ;~ 01C2:1B4C
cs=0x1c2;eip=0x001b51; 	T(MOV(al, 0x0B));	// 4550 mov     al, 0Bh ;~ 01C2:1B51
cs=0x1c2;eip=0x001b53; 	J(CALL(sub_14015,0));	// 4551 call    sub_14015 ;~ 01C2:1B53
cs=0x1c2;eip=0x001b56; 	X(MOV(byte_15242, 1));	// 4552 mov     byte_15242, 1 ;~ 01C2:1B56
cs=0x1c2;eip=0x001b5b; 	T(NOP);	// 4553 nop ;~ 01C2:1B5B
cs=0x1c2;eip=0x001b5c; 	T(NOP);	// 4554 nop ;~ 01C2:1B5C
cs=0x1c2;eip=0x001b5d; 	T(NOP);	// 4555 nop ;~ 01C2:1B5D
cs=0x1c2;eip=0x001b5e; 	T(NOP);	// 4556 nop ;~ 01C2:1B5E
cs=0x1c2;eip=0x001b5f; 	X(MOV(*(raddr(ds,si)), 0));	// 4557 mov     byte ptr [si], 0 ;~ 01C2:1B5F
cs=0x1c2;eip=0x001b62; 	R(RETN(0));	// 4558 retn ;~ 01C2:1B62

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_11d26: 	goto loc_11d26;
        case m2c::kloc_11d31: 	goto loc_11d31;
        case m2c::kloc_11d37: 	goto loc_11d37;
        case m2c::kloc_11d4c: 	goto loc_11d4c;
        case m2c::kret_1c2_1b1f: 	goto ret_1c2_1b1f;
        case m2c::ksub_11d1c: 	goto sub_11d1c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_11d70(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11d70:
    _begin:
cs=0x1c2;eip=0x001b70; 	X(MOV(byte_153a3, 0));	// 4569 mov     byte_153A3, 0 ;~ 01C2:1B70
ret_1c2_1b75:
	// 4821 
cs=0x1c2;eip=0x001b75; 	X(MOV(word_14b55, 0x2C));	// 4570 mov     word_14B55, 2Ch ; ',' ;~ 01C2:1B75
cs=0x1c2;eip=0x001b7b; 	X(MOV(byte_153a2, 0));	// 4571 mov     byte_153A2, 0 ;~ 01C2:1B7B
loc_11d80:
	// 4822 
cs=0x1c2;eip=0x001b80; 	T(TEST(dx, 0x8000));	// 4574 test    dx, 8000h ;~ 01C2:1B80
cs=0x1c2;eip=0x001b84; 	J(JZ(loc_11d8c));	// 4575 jz      short loc_11D8C ;~ 01C2:1B84
cs=0x1c2;eip=0x001b86; 	T(ADD(dx, 0x480));	// 4576 add     dx, 480h ;~ 01C2:1B86
cs=0x1c2;eip=0x001b8a; 	J(JMP(loc_11d80));	// 4577 jmp     short loc_11D80 ;~ 01C2:1B8A
loc_11d8c:
	// 4823 
cs=0x1c2;eip=0x001b8c; 	T(CMP(dx, 0x480));	// 4582 cmp     dx, 480h ;~ 01C2:1B8C
cs=0x1c2;eip=0x001b90; 	J(JC(loc_11d98));	// 4583 jb      short loc_11D98 ;~ 01C2:1B90
cs=0x1c2;eip=0x001b92; 	T(SUB(dx, 0x480));	// 4584 sub     dx, 480h ;~ 01C2:1B92
cs=0x1c2;eip=0x001b96; 	J(JMP(loc_11d8c));	// 4585 jmp     short loc_11D8C ;~ 01C2:1B96
loc_11d98:
	// 4824 
cs=0x1c2;eip=0x001b98; 	T(CMP(dx, 0x240));	// 4589 cmp     dx, 240h ;~ 01C2:1B98
cs=0x1c2;eip=0x001b9c; 	J(JC(loc_11daa));	// 4590 jb      short loc_11DAA ;~ 01C2:1B9C
cs=0x1c2;eip=0x001b9e; 	T(MOV(ax, 0x480));	// 4591 mov     ax, 480h ;~ 01C2:1B9E
cs=0x1c2;eip=0x001ba1; 	T(SUB(ax, dx));	// 4592 sub     ax, dx ;~ 01C2:1BA1
cs=0x1c2;eip=0x001ba3; 	T(MOV(dx, ax));	// 4593 mov     dx, ax ;~ 01C2:1BA3
cs=0x1c2;eip=0x001ba5; 	X(MOV(byte_153a2, 1));	// 4594 mov     byte_153A2, 1 ;~ 01C2:1BA5
loc_11daa:
	// 4825 
cs=0x1c2;eip=0x001baa; 	X(MOV(word_14b53, 0x2D));	// 4597 mov     word_14B53, 2Dh ; '-' ;~ 01C2:1BAA
cs=0x1c2;eip=0x001bb0; 	T(CMP(bx, 0x200));	// 4598 cmp     bx, 200h ;~ 01C2:1BB0
cs=0x1c2;eip=0x001bb4; 	J(JNC(locret_11dbd));	// 4599 jnb     short locret_11DBD ;~ 01C2:1BB4
cs=0x1c2;eip=0x001bb6; 	T(CMP(bx, 0x15));	// 4600 cmp     bx, 15h ;~ 01C2:1BB6
cs=0x1c2;eip=0x001bb9; 	J(JC(locret_11dbd));	// 4601 jb      short locret_11DBD ;~ 01C2:1BB9
cs=0x1c2;eip=0x001bbb; 	J(JMP(loc_11dbe));	// 4602 jmp     short loc_11DBE ;~ 01C2:1BBB
locret_11dbd:
	// 4826 
cs=0x1c2;eip=0x001bbd; 	R(RETN(0));	// 4607 retn ;~ 01C2:1BBD
loc_11dbe:
	// 4827 
cs=0x1c2;eip=0x001bbe; 	T(MOV(si, 0x525));	// 4611 mov     si, 525h ;~ 01C2:1BBE
loc_11dc1:
	// 4828 
cs=0x1c2;eip=0x001bc1; 	T(LODSW);	// 4614 lodsw ;~ 01C2:1BC1
cs=0x1c2;eip=0x001bc2; 	T(ADD(si, 2));	// 4615 add     si, 2 ;~ 01C2:1BC2
cs=0x1c2;eip=0x001bc5; 	T(CMP(ax, bx));	// 4616 cmp     ax, bx ;~ 01C2:1BC5
cs=0x1c2;eip=0x001bc7; 	J(JC(loc_11dc1));	// 4617 jb      short loc_11DC1 ;~ 01C2:1BC7
cs=0x1c2;eip=0x001bc9; 	X(MOV(word_14b47, ax));	// 4618 mov     word_14B47, ax ;~ 01C2:1BC9
cs=0x1c2;eip=0x001bcc; 	X(MOV(word_14b51, ax));	// 4619 mov     word_14B51, ax ;~ 01C2:1BCC
cs=0x1c2;eip=0x001bcf; 	T(ADD(si, 0x0FFFE));	// 4620 add     si, 0FFFEh ;~ 01C2:1BCF
cs=0x1c2;eip=0x001bd2; 	T(LODSW);	// 4621 lodsw ;~ 01C2:1BD2
cs=0x1c2;eip=0x001bd3; 	X(MOV(word_14b5b, ax));	// 4622 mov     word_14B5B, ax ;~ 01C2:1BD3
cs=0x1c2;eip=0x001bd6; 	T(ADD(si, 0x0FFF8));	// 4623 add     si, 0FFF8h ;~ 01C2:1BD6
cs=0x1c2;eip=0x001bd9; 	T(LODSW);	// 4624 lodsw ;~ 01C2:1BD9
cs=0x1c2;eip=0x001bda; 	X(MOV(word_14b45, ax));	// 4625 mov     word_14B45, ax ;~ 01C2:1BDA
cs=0x1c2;eip=0x001bdd; 	T(LODSW);	// 4626 lodsw ;~ 01C2:1BDD
cs=0x1c2;eip=0x001bde; 	X(MOV(word_14b57, ax));	// 4627 mov     word_14B57, ax ;~ 01C2:1BDE
cs=0x1c2;eip=0x001be1; 	X(MOV(word_14b49, bx));	// 4628 mov     word_14B49, bx ;~ 01C2:1BE1
cs=0x1c2;eip=0x001be5; 	T(MOV(ax, dx));	// 4629 mov     ax, dx ;~ 01C2:1BE5
cs=0x1c2;eip=0x001be7; 	X(DIV1(byte_14b33));	// 4630 div     byte_14B33 ;~ 01C2:1BE7
cs=0x1c2;eip=0x001beb; 	X(MOV(word_14b4b, 0));	// 4631 mov     word_14B4B, 0 ;~ 01C2:1BEB
cs=0x1c2;eip=0x001bf1; 	X(MOV(word_14b4d, 0x20));	// 4632 mov     word_14B4D, 20h ; ' ' ;~ 01C2:1BF1
cs=0x1c2;eip=0x001bf7; 	T(OR(ah, ah));	// 4633 or      ah, ah ;~ 01C2:1BF7
cs=0x1c2;eip=0x001bf9; 	J(JNZ(loc_11e03));	// 4634 jnz     short loc_11E03 ;~ 01C2:1BF9
cs=0x1c2;eip=0x001bfb; 	T(OR(al, al));	// 4635 or      al, al ;~ 01C2:1BFB
cs=0x1c2;eip=0x001bfd; 	J(JZ(loc_11e03));	// 4636 jz      short loc_11E03 ;~ 01C2:1BFD
cs=0x1c2;eip=0x001bff; 	T(DEC(al));	// 4637 dec     al ;~ 01C2:1BFF
cs=0x1c2;eip=0x001c01; 	T(MOV(ah, 0x20));	// 4638 mov     ah, 20h ; ' ' ;~ 01C2:1C01
loc_11e03:
	// 4829 
cs=0x1c2;eip=0x001c03; 	X(PUSH(ax));	// 4642 push    ax ;~ 01C2:1C03
cs=0x1c2;eip=0x001c04; 	T(MOV(al, ah));	// 4643 mov     al, ah ;~ 01C2:1C04
cs=0x1c2;eip=0x001c06; 	T(XOR(ah, ah));	// 4644 xor     ah, ah ;~ 01C2:1C06
cs=0x1c2;eip=0x001c08; 	X(MOV(word_14b4f, ax));	// 4645 mov     word_14B4F, ax ;~ 01C2:1C08
cs=0x1c2;eip=0x001c0b; 	X(POP(ax));	// 4646 pop     ax ;~ 01C2:1C0B
cs=0x1c2;eip=0x001c0c; 	T(XOR(ah, ah));	// 4647 xor     ah, ah ;~ 01C2:1C0C
cs=0x1c2;eip=0x001c0e; 	X(MOV(word_14b5f, ax));	// 4648 mov     word_14B5F, ax ;~ 01C2:1C0E
cs=0x1c2;eip=0x001c11; 	T(MOV(bx, word_14b45));	// 4649 mov     bx, word_14B45 ;~ 01C2:1C11
cs=0x1c2;eip=0x001c15; 	X(MOV(word_14b51, bx));	// 4650 mov     word_14B51, bx ;~ 01C2:1C15
cs=0x1c2;eip=0x001c19; 	T(CMP(bx, word_14b53));	// 4651 cmp     bx, word_14B53 ;~ 01C2:1C19
cs=0x1c2;eip=0x001c1d; 	J(JC(loc_11e25));	// 4652 jb      short loc_11E25 ;~ 01C2:1C1D
cs=0x1c2;eip=0x001c1f; 	X(MUL1_1(byte_14b36));	// 4653 mul     byte_14B36 ;~ 01C2:1C1F
cs=0x1c2;eip=0x001c23; 	J(JMP(loc_11e29));	// 4654 jmp     short loc_11E29 ;~ 01C2:1C23
loc_11e25:
	// 4830 
cs=0x1c2;eip=0x001c25; 	X(MUL1_1(byte_14b3b));	// 4658 mul     byte_14B3B ;~ 01C2:1C25
loc_11e29:
	// 4831 
cs=0x1c2;eip=0x001c29; 	T(MOV(di, 0x0BC07));	// 4661 mov     di, 0BC07h ;~ 01C2:1C29
cs=0x1c2;eip=0x001c2c; 	T(MOV(si, word_14b57));	// 4662 mov     si, word_14B57 ;~ 01C2:1C2C
cs=0x1c2;eip=0x001c30; 	T(ADD(si, ax));	// 4663 add     si, ax ;~ 01C2:1C30
cs=0x1c2;eip=0x001c32; 	J(CALL(sub_1232a,0));	// 4664 call    sub_1232A ;~ 01C2:1C32
cs=0x1c2;eip=0x001c35; 	T(MOV(si, di));	// 4665 mov     si, di ;~ 01C2:1C35
cs=0x1c2;eip=0x001c37; 	X(MOV(word_14b57, si));	// 4666 mov     word_14B57, si ;~ 01C2:1C37
cs=0x1c2;eip=0x001c3b; 	T(ADD(si, 0x58));	// 4667 add     si, 58h ; 'X' ;~ 01C2:1C3B
cs=0x1c2;eip=0x001c3e; 	X(MOV(word_14b59, si));	// 4668 mov     word_14B59, si ;~ 01C2:1C3E
cs=0x1c2;eip=0x001c42; 	T(MOV(ax, word_14b5f));	// 4669 mov     ax, word_14B5F ;~ 01C2:1C42
cs=0x1c2;eip=0x001c45; 	T(MOV(bx, word_14b47));	// 4670 mov     bx, word_14B47 ;~ 01C2:1C45
cs=0x1c2;eip=0x001c49; 	X(MOV(word_14b51, bx));	// 4671 mov     word_14B51, bx ;~ 01C2:1C49
cs=0x1c2;eip=0x001c4d; 	T(CMP(bx, word_14b53));	// 4672 cmp     bx, word_14B53 ;~ 01C2:1C4D
cs=0x1c2;eip=0x001c51; 	J(JC(loc_11e59));	// 4673 jb      short loc_11E59 ;~ 01C2:1C51
cs=0x1c2;eip=0x001c53; 	X(MUL1_1(byte_14b36));	// 4674 mul     byte_14B36 ;~ 01C2:1C53
cs=0x1c2;eip=0x001c57; 	J(JMP(loc_11e5d));	// 4675 jmp     short loc_11E5D ;~ 01C2:1C57
loc_11e59:
	// 4832 
cs=0x1c2;eip=0x001c59; 	X(MUL1_1(byte_14b3b));	// 4679 mul     byte_14B3B ;~ 01C2:1C59
loc_11e5d:
	// 4833 
cs=0x1c2;eip=0x001c5d; 	T(MOV(si, word_14b5b));	// 4682 mov     si, word_14B5B ;~ 01C2:1C5D
cs=0x1c2;eip=0x001c61; 	T(MOV(di, 0x0BCCF));	// 4683 mov     di, 0BCCFh ;~ 01C2:1C61
cs=0x1c2;eip=0x001c64; 	T(ADD(si, ax));	// 4684 add     si, ax ;~ 01C2:1C64
cs=0x1c2;eip=0x001c66; 	J(CALL(sub_1232a,0));	// 4685 call    sub_1232A ;~ 01C2:1C66
cs=0x1c2;eip=0x001c69; 	T(MOV(si, di));	// 4686 mov     si, di ;~ 01C2:1C69
cs=0x1c2;eip=0x001c6b; 	X(MOV(word_14b5b, si));	// 4687 mov     word_14B5B, si ;~ 01C2:1C6B
cs=0x1c2;eip=0x001c6f; 	T(ADD(si, 0x58));	// 4688 add     si, 58h ; 'X' ;~ 01C2:1C6F
cs=0x1c2;eip=0x001c72; 	X(MOV(word_14b5d, si));	// 4689 mov     word_14B5D, si ;~ 01C2:1C72
cs=0x1c2;eip=0x001c76; 	J(CALL(sub_1226d,0));	// 4690 call    sub_1226D ;~ 01C2:1C76
cs=0x1c2;eip=0x001c79; 	T(MOV(di, 0x5E9));	// 4691 mov     di, 5E9h ;~ 01C2:1C79
cs=0x1c2;eip=0x001c7c; 	X(MOV(word_14b3d, di));	// 4692 mov     word_14B3D, di ;~ 01C2:1C7C
cs=0x1c2;eip=0x001c80; 	J(CALL(sub_121df,0));	// 4693 call    sub_121DF ;~ 01C2:1C80
cs=0x1c2;eip=0x001c83; 	R(RETN(0));	// 4694 retn ;~ 01C2:1C83

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_11d80: 	goto loc_11d80;
        case m2c::kloc_11d8c: 	goto loc_11d8c;
        case m2c::kloc_11d98: 	goto loc_11d98;
        case m2c::kloc_11daa: 	goto loc_11daa;
        case m2c::kloc_11dbe: 	goto loc_11dbe;
        case m2c::kloc_11dc1: 	goto loc_11dc1;
        case m2c::kloc_11e03: 	goto loc_11e03;
        case m2c::kloc_11e25: 	goto loc_11e25;
        case m2c::kloc_11e29: 	goto loc_11e29;
        case m2c::kloc_11e59: 	goto loc_11e59;
        case m2c::kloc_11e5d: 	goto loc_11e5d;
        case m2c::klocret_11dbd: 	goto locret_11dbd;
        case m2c::kret_1c2_1b75: 	goto ret_1c2_1b75;
        case m2c::ksub_11d70: 	goto sub_11d70;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg001_1c84_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg001_1c84_proc:
    _begin:
loc_11e84:
	// 4834 
cs=0x1c2;eip=0x001c84; 	X(MOV(byte_153a3, 0));	// 4700 mov     byte_153A3, 0 ;~ 01C2:1C84
cs=0x1c2;eip=0x001c89; 	X(MOV(word_14b55, 0x28));	// 4701 mov     word_14B55, 28h ; '(' ;~ 01C2:1C89
cs=0x1c2;eip=0x001c8f; 	X(MOV(byte_153a2, 0));	// 4702 mov     byte_153A2, 0 ;~ 01C2:1C8F
loc_11e94:
	// 4835 
cs=0x1c2;eip=0x001c94; 	T(TEST(dx, 0x8000));	// 4705 test    dx, 8000h ;~ 01C2:1C94
cs=0x1c2;eip=0x001c98; 	J(JZ(loc_11ea0));	// 4706 jz      short loc_11EA0 ;~ 01C2:1C98
cs=0x1c2;eip=0x001c9a; 	T(ADD(dx, 0x480));	// 4707 add     dx, 480h ;~ 01C2:1C9A
cs=0x1c2;eip=0x001c9e; 	J(JMP(loc_11e94));	// 4708 jmp     short loc_11E94 ;~ 01C2:1C9E
loc_11ea0:
	// 4836 
cs=0x1c2;eip=0x001ca0; 	T(CMP(dx, 0x480));	// 4713 cmp     dx, 480h ;~ 01C2:1CA0
cs=0x1c2;eip=0x001ca4; 	J(JC(loc_11eac));	// 4714 jb      short loc_11EAC ;~ 01C2:1CA4
cs=0x1c2;eip=0x001ca6; 	T(SUB(dx, 0x480));	// 4715 sub     dx, 480h ;~ 01C2:1CA6
cs=0x1c2;eip=0x001caa; 	J(JMP(loc_11ea0));	// 4716 jmp     short loc_11EA0 ;~ 01C2:1CAA
loc_11eac:
	// 4837 
cs=0x1c2;eip=0x001cac; 	T(CMP(dx, 0x240));	// 4720 cmp     dx, 240h ;~ 01C2:1CAC
cs=0x1c2;eip=0x001cb0; 	J(JC(loc_11ebe));	// 4721 jb      short loc_11EBE ;~ 01C2:1CB0
cs=0x1c2;eip=0x001cb2; 	T(MOV(ax, 0x480));	// 4722 mov     ax, 480h ;~ 01C2:1CB2
cs=0x1c2;eip=0x001cb5; 	T(SUB(ax, dx));	// 4723 sub     ax, dx ;~ 01C2:1CB5
cs=0x1c2;eip=0x001cb7; 	T(MOV(dx, ax));	// 4724 mov     dx, ax ;~ 01C2:1CB7
cs=0x1c2;eip=0x001cb9; 	X(MOV(byte_153a2, 1));	// 4725 mov     byte_153A2, 1 ;~ 01C2:1CB9
loc_11ebe:
	// 4838 
cs=0x1c2;eip=0x001cbe; 	X(MOV(word_14b53, 0x2D));	// 4728 mov     word_14B53, 2Dh ; '-' ;~ 01C2:1CBE
cs=0x1c2;eip=0x001cc4; 	T(CMP(bx, 0x200));	// 4729 cmp     bx, 200h ;~ 01C2:1CC4
cs=0x1c2;eip=0x001cc8; 	J(JNC(locret_11ed1));	// 4730 jnb     short locret_11ED1 ;~ 01C2:1CC8
cs=0x1c2;eip=0x001cca; 	T(CMP(bx, 0x15));	// 4731 cmp     bx, 15h ;~ 01C2:1CCA
cs=0x1c2;eip=0x001ccd; 	J(JC(locret_11ed1));	// 4732 jb      short locret_11ED1 ;~ 01C2:1CCD
cs=0x1c2;eip=0x001ccf; 	J(JMP(loc_11ed2));	// 4733 jmp     short loc_11ED2 ;~ 01C2:1CCF
locret_11ed1:
	// 4839 
cs=0x1c2;eip=0x001cd1; 	R(RETN(0));	// 4738 retn ;~ 01C2:1CD1
loc_11ed2:
	// 4840 
cs=0x1c2;eip=0x001cd2; 	T(MOV(si, 0x561));	// 4742 mov     si, 561h ;~ 01C2:1CD2
loc_11ed5:
	// 4841 
cs=0x1c2;eip=0x001cd5; 	T(LODSW);	// 4745 lodsw ;~ 01C2:1CD5
cs=0x1c2;eip=0x001cd6; 	T(ADD(si, 2));	// 4746 add     si, 2 ;~ 01C2:1CD6
cs=0x1c2;eip=0x001cd9; 	T(CMP(ax, bx));	// 4747 cmp     ax, bx ;~ 01C2:1CD9
cs=0x1c2;eip=0x001cdb; 	J(JC(loc_11ed5));	// 4748 jb      short loc_11ED5 ;~ 01C2:1CDB
cs=0x1c2;eip=0x001cdd; 	X(MOV(word_14b47, ax));	// 4749 mov     word_14B47, ax ;~ 01C2:1CDD
cs=0x1c2;eip=0x001ce0; 	T(ADD(si, 0x0FFFE));	// 4750 add     si, 0FFFEh ;~ 01C2:1CE0
cs=0x1c2;eip=0x001ce3; 	T(LODSW);	// 4751 lodsw ;~ 01C2:1CE3
cs=0x1c2;eip=0x001ce4; 	X(MOV(word_14b5b, ax));	// 4752 mov     word_14B5B, ax ;~ 01C2:1CE4
cs=0x1c2;eip=0x001ce7; 	T(ADD(si, 0x0FFF8));	// 4753 add     si, 0FFF8h ;~ 01C2:1CE7
cs=0x1c2;eip=0x001cea; 	T(LODSW);	// 4754 lodsw ;~ 01C2:1CEA
cs=0x1c2;eip=0x001ceb; 	X(MOV(word_14b45, ax));	// 4755 mov     word_14B45, ax ;~ 01C2:1CEB
cs=0x1c2;eip=0x001cee; 	T(LODSW);	// 4756 lodsw ;~ 01C2:1CEE
cs=0x1c2;eip=0x001cef; 	X(MOV(word_14b57, ax));	// 4757 mov     word_14B57, ax ;~ 01C2:1CEF
cs=0x1c2;eip=0x001cf2; 	X(MOV(word_14b49, bx));	// 4758 mov     word_14B49, bx ;~ 01C2:1CF2
cs=0x1c2;eip=0x001cf6; 	T(MOV(ax, dx));	// 4759 mov     ax, dx ;~ 01C2:1CF6
cs=0x1c2;eip=0x001cf8; 	X(DIV1(byte_14b33));	// 4760 div     byte_14B33 ;~ 01C2:1CF8
cs=0x1c2;eip=0x001cfc; 	X(MOV(word_14b4b, 0));	// 4761 mov     word_14B4B, 0 ;~ 01C2:1CFC
cs=0x1c2;eip=0x001d02; 	X(MOV(word_14b4d, 0x20));	// 4762 mov     word_14B4D, 20h ; ' ' ;~ 01C2:1D02
cs=0x1c2;eip=0x001d08; 	T(OR(ah, ah));	// 4763 or      ah, ah ;~ 01C2:1D08
cs=0x1c2;eip=0x001d0a; 	J(JNZ(loc_11f14));	// 4764 jnz     short loc_11F14 ;~ 01C2:1D0A
cs=0x1c2;eip=0x001d0c; 	T(OR(al, al));	// 4765 or      al, al ;~ 01C2:1D0C
cs=0x1c2;eip=0x001d0e; 	J(JZ(loc_11f14));	// 4766 jz      short loc_11F14 ;~ 01C2:1D0E
cs=0x1c2;eip=0x001d10; 	T(DEC(al));	// 4767 dec     al ;~ 01C2:1D10
cs=0x1c2;eip=0x001d12; 	T(MOV(ah, 0x20));	// 4768 mov     ah, 20h ; ' ' ;~ 01C2:1D12
loc_11f14:
	// 4842 
cs=0x1c2;eip=0x001d14; 	X(PUSH(ax));	// 4772 push    ax ;~ 01C2:1D14
cs=0x1c2;eip=0x001d15; 	T(MOV(al, ah));	// 4773 mov     al, ah ;~ 01C2:1D15
cs=0x1c2;eip=0x001d17; 	T(XOR(ah, ah));	// 4774 xor     ah, ah ;~ 01C2:1D17
cs=0x1c2;eip=0x001d19; 	X(MOV(word_14b4f, ax));	// 4775 mov     word_14B4F, ax ;~ 01C2:1D19
cs=0x1c2;eip=0x001d1c; 	X(POP(ax));	// 4776 pop     ax ;~ 01C2:1D1C
cs=0x1c2;eip=0x001d1d; 	T(XOR(ah, ah));	// 4777 xor     ah, ah ;~ 01C2:1D1D
cs=0x1c2;eip=0x001d1f; 	X(MOV(word_14b5f, ax));	// 4778 mov     word_14B5F, ax ;~ 01C2:1D1F
cs=0x1c2;eip=0x001d22; 	T(MOV(bx, word_14b45));	// 4779 mov     bx, word_14B45 ;~ 01C2:1D22
cs=0x1c2;eip=0x001d26; 	X(MOV(word_14b51, bx));	// 4780 mov     word_14B51, bx ;~ 01C2:1D26
cs=0x1c2;eip=0x001d2a; 	T(CMP(bx, word_14b53));	// 4781 cmp     bx, word_14B53 ;~ 01C2:1D2A
cs=0x1c2;eip=0x001d2e; 	J(JC(loc_11f36));	// 4782 jb      short loc_11F36 ;~ 01C2:1D2E
cs=0x1c2;eip=0x001d30; 	X(MUL1_1(byte_14b35));	// 4783 mul     byte_14B35 ;~ 01C2:1D30
cs=0x1c2;eip=0x001d34; 	J(JMP(loc_11f3a));	// 4784 jmp     short loc_11F3A ;~ 01C2:1D34
loc_11f36:
	// 4843 
cs=0x1c2;eip=0x001d36; 	X(MUL1_1(byte_14b3a));	// 4788 mul     byte_14B3A ;~ 01C2:1D36
loc_11f3a:
	// 4844 
cs=0x1c2;eip=0x001d3a; 	T(MOV(di, 0x0BC07));	// 4791 mov     di, 0BC07h ;~ 01C2:1D3A
cs=0x1c2;eip=0x001d3d; 	T(MOV(si, word_14b57));	// 4792 mov     si, word_14B57 ;~ 01C2:1D3D
cs=0x1c2;eip=0x001d41; 	T(ADD(si, ax));	// 4793 add     si, ax ;~ 01C2:1D41
cs=0x1c2;eip=0x001d43; 	J(CALL(sub_1232a,0));	// 4794 call    sub_1232A ;~ 01C2:1D43
cs=0x1c2;eip=0x001d46; 	T(MOV(si, di));	// 4795 mov     si, di ;~ 01C2:1D46
cs=0x1c2;eip=0x001d48; 	X(MOV(word_14b57, si));	// 4796 mov     word_14B57, si ;~ 01C2:1D48
cs=0x1c2;eip=0x001d4c; 	T(ADD(si, 0x50));	// 4797 add     si, 50h ; 'P' ;~ 01C2:1D4C
cs=0x1c2;eip=0x001d4f; 	X(MOV(word_14b59, si));	// 4798 mov     word_14B59, si ;~ 01C2:1D4F
cs=0x1c2;eip=0x001d53; 	T(MOV(ax, word_14b5f));	// 4799 mov     ax, word_14B5F ;~ 01C2:1D53
cs=0x1c2;eip=0x001d56; 	T(MOV(bx, word_14b47));	// 4800 mov     bx, word_14B47 ;~ 01C2:1D56
cs=0x1c2;eip=0x001d5a; 	X(MOV(word_14b51, bx));	// 4801 mov     word_14B51, bx ;~ 01C2:1D5A
cs=0x1c2;eip=0x001d5e; 	T(CMP(bx, word_14b53));	// 4802 cmp     bx, word_14B53 ;~ 01C2:1D5E
cs=0x1c2;eip=0x001d62; 	J(JC(loc_11f6a));	// 4803 jb      short loc_11F6A ;~ 01C2:1D62
cs=0x1c2;eip=0x001d64; 	X(MUL1_1(byte_14b35));	// 4804 mul     byte_14B35 ;~ 01C2:1D64
cs=0x1c2;eip=0x001d68; 	J(JMP(loc_11f6e));	// 4805 jmp     short loc_11F6E ;~ 01C2:1D68
loc_11f6a:
	// 4845 
cs=0x1c2;eip=0x001d6a; 	X(MUL1_1(byte_14b3a));	// 4809 mul     byte_14B3A ;~ 01C2:1D6A
loc_11f6e:
	// 4846 
cs=0x1c2;eip=0x001d6e; 	T(MOV(si, word_14b5b));	// 4812 mov     si, word_14B5B ;~ 01C2:1D6E
cs=0x1c2;eip=0x001d72; 	T(MOV(di, 0x0BCCF));	// 4813 mov     di, 0BCCFh ;~ 01C2:1D72
cs=0x1c2;eip=0x001d75; 	T(ADD(si, ax));	// 4814 add     si, ax ;~ 01C2:1D75
cs=0x1c2;eip=0x001d77; 	J(CALL(sub_1232a,0));	// 4815 call    sub_1232A ;~ 01C2:1D77
cs=0x1c2;eip=0x001d7a; 	T(MOV(si, di));	// 4816 mov     si, di ;~ 01C2:1D7A
cs=0x1c2;eip=0x001d7c; 	X(MOV(word_14b5b, si));	// 4817 mov     word_14B5B, si ;~ 01C2:1D7C
cs=0x1c2;eip=0x001d80; 	T(ADD(si, 0x50));	// 4818 add     si, 50h ; 'P' ;~ 01C2:1D80
cs=0x1c2;eip=0x001d83; 	X(MOV(word_14b5d, si));	// 4819 mov     word_14B5D, si ;~ 01C2:1D83
cs=0x1c2;eip=0x001d87; 	J(CALL(sub_1226d,0));	// 4820 call    sub_1226D ;~ 01C2:1D87
cs=0x1c2;eip=0x001d8a; 	T(MOV(di, 0x634));	// 4821 mov     di, 634h ;~ 01C2:1D8A
cs=0x1c2;eip=0x001d8d; 	X(MOV(word_14b3d, di));	// 4822 mov     word_14B3D, di ;~ 01C2:1D8D
cs=0x1c2;eip=0x001d91; 	J(CALL(sub_121df,0));	// 4823 call    sub_121DF ;~ 01C2:1D91
cs=0x1c2;eip=0x001d94; 	R(RETN(0));	// 4824 retn ;~ 01C2:1D94
loc_11f95:
	// 4847 
cs=0x1c2;eip=0x001d95; 	X(MOV(byte_153a3, 0));	// 4828 mov     byte_153A3, 0 ;~ 01C2:1D95
cs=0x1c2;eip=0x001d9a; 	X(MOV(word_14b55, 0x32));	// 4829 mov     word_14B55, 32h ; '2' ;~ 01C2:1D9A
cs=0x1c2;eip=0x001da0; 	X(MOV(byte_153a2, 1));	// 4830 mov     byte_153A2, 1 ;~ 01C2:1DA0
loc_11fa5:
	// 4848 
cs=0x1c2;eip=0x001da5; 	T(TEST(dx, 0x8000));	// 4833 test    dx, 8000h ;~ 01C2:1DA5
cs=0x1c2;eip=0x001da9; 	J(JZ(loc_11fb1));	// 4834 jz      short loc_11FB1 ;~ 01C2:1DA9
cs=0x1c2;eip=0x001dab; 	T(ADD(dx, 0x480));	// 4835 add     dx, 480h ;~ 01C2:1DAB
cs=0x1c2;eip=0x001daf; 	J(JMP(loc_11fa5));	// 4836 jmp     short loc_11FA5 ;~ 01C2:1DAF
loc_11fb1:
	// 4849 
cs=0x1c2;eip=0x001db1; 	T(CMP(dx, 0x480));	// 4841 cmp     dx, 480h ;~ 01C2:1DB1
cs=0x1c2;eip=0x001db5; 	J(JC(loc_11fbd));	// 4842 jb      short loc_11FBD ;~ 01C2:1DB5
cs=0x1c2;eip=0x001db7; 	T(SUB(dx, 0x480));	// 4843 sub     dx, 480h ;~ 01C2:1DB7
cs=0x1c2;eip=0x001dbb; 	J(JMP(loc_11fb1));	// 4844 jmp     short loc_11FB1 ;~ 01C2:1DBB
loc_11fbd:
	// 4850 
cs=0x1c2;eip=0x001dbd; 	T(CMP(dx, 0x120));	// 4848 cmp     dx, 120h ;~ 01C2:1DBD
cs=0x1c2;eip=0x001dc1; 	J(JC(loc_11fe2));	// 4849 jb      short loc_11FE2 ;~ 01C2:1DC1
cs=0x1c2;eip=0x001dc3; 	T(CMP(dx, 0x240));	// 4850 cmp     dx, 240h ;~ 01C2:1DC3
cs=0x1c2;eip=0x001dc7; 	J(JC(loc_11fdb));	// 4851 jb      short loc_11FDB ;~ 01C2:1DC7
cs=0x1c2;eip=0x001dc9; 	T(MOV(ax, 0x480));	// 4852 mov     ax, 480h ;~ 01C2:1DC9
cs=0x1c2;eip=0x001dcc; 	T(SUB(ax, dx));	// 4853 sub     ax, dx ;~ 01C2:1DCC
cs=0x1c2;eip=0x001dce; 	T(MOV(dx, ax));	// 4854 mov     dx, ax ;~ 01C2:1DCE
cs=0x1c2;eip=0x001dd0; 	T(CMP(dx, 0x121));	// 4855 cmp     dx, 121h ;~ 01C2:1DD0
cs=0x1c2;eip=0x001dd4; 	X(MOV(byte_153a2, 0));	// 4856 mov     byte_153A2, 0 ;~ 01C2:1DD4
cs=0x1c2;eip=0x001dd9; 	J(JC(loc_11fe2));	// 4857 jb      short loc_11FE2 ;~ 01C2:1DD9
loc_11fdb:
	// 4851 
cs=0x1c2;eip=0x001ddb; 	T(MOV(ax, 0x240));	// 4860 mov     ax, 240h ;~ 01C2:1DDB
cs=0x1c2;eip=0x001dde; 	T(SUB(ax, dx));	// 4861 sub     ax, dx ;~ 01C2:1DDE
cs=0x1c2;eip=0x001de0; 	T(MOV(dx, ax));	// 4862 mov     dx, ax ;~ 01C2:1DE0
loc_11fe2:
	// 4852 
cs=0x1c2;eip=0x001de2; 	X(MOV(word_14b53, 0x37));	// 4866 mov     word_14B53, 37h ; '7' ;~ 01C2:1DE2
cs=0x1c2;eip=0x001de8; 	T(CMP(bx, 0x200));	// 4867 cmp     bx, 200h ;~ 01C2:1DE8
cs=0x1c2;eip=0x001dec; 	J(JNC(locret_11ff5));	// 4868 jnb     short locret_11FF5 ;~ 01C2:1DEC
cs=0x1c2;eip=0x001dee; 	T(CMP(bx, 0x15));	// 4869 cmp     bx, 15h ;~ 01C2:1DEE
cs=0x1c2;eip=0x001df1; 	J(JC(locret_11ff5));	// 4870 jb      short locret_11FF5 ;~ 01C2:1DF1
cs=0x1c2;eip=0x001df3; 	J(JMP(loc_11ff6));	// 4871 jmp     short loc_11FF6 ;~ 01C2:1DF3
locret_11ff5:
	// 4853 
cs=0x1c2;eip=0x001df5; 	R(RETN(0));	// 4876 retn ;~ 01C2:1DF5
loc_11ff6:
	// 4854 
cs=0x1c2;eip=0x001df6; 	T(MOV(si, 0x59D));	// 4880 mov     si, 59Dh ;~ 01C2:1DF6
loc_11ff9:
	// 4855 
cs=0x1c2;eip=0x001df9; 	T(LODSW);	// 4883 lodsw ;~ 01C2:1DF9
cs=0x1c2;eip=0x001dfa; 	T(ADD(si, 2));	// 4884 add     si, 2 ;~ 01C2:1DFA
cs=0x1c2;eip=0x001dfd; 	T(CMP(ax, bx));	// 4885 cmp     ax, bx ;~ 01C2:1DFD
cs=0x1c2;eip=0x001dff; 	J(JC(loc_11ff9));	// 4886 jb      short loc_11FF9 ;~ 01C2:1DFF
cs=0x1c2;eip=0x001e01; 	X(MOV(word_14b47, ax));	// 4887 mov     word_14B47, ax ;~ 01C2:1E01
cs=0x1c2;eip=0x001e04; 	T(ADD(si, 0x0FFFE));	// 4888 add     si, 0FFFEh ;~ 01C2:1E04
cs=0x1c2;eip=0x001e07; 	T(LODSW);	// 4889 lodsw ;~ 01C2:1E07
cs=0x1c2;eip=0x001e08; 	X(MOV(word_14b5b, ax));	// 4890 mov     word_14B5B, ax ;~ 01C2:1E08
cs=0x1c2;eip=0x001e0b; 	T(ADD(si, 0x0FFF8));	// 4891 add     si, 0FFF8h ;~ 01C2:1E0B
cs=0x1c2;eip=0x001e0e; 	T(LODSW);	// 4892 lodsw ;~ 01C2:1E0E
cs=0x1c2;eip=0x001e0f; 	X(MOV(word_14b45, ax));	// 4893 mov     word_14B45, ax ;~ 01C2:1E0F
cs=0x1c2;eip=0x001e12; 	T(LODSW);	// 4894 lodsw ;~ 01C2:1E12
cs=0x1c2;eip=0x001e13; 	X(MOV(word_14b57, ax));	// 4895 mov     word_14B57, ax ;~ 01C2:1E13
cs=0x1c2;eip=0x001e16; 	X(MOV(word_14b49, bx));	// 4896 mov     word_14B49, bx ;~ 01C2:1E16
cs=0x1c2;eip=0x001e1a; 	T(MOV(ax, dx));	// 4897 mov     ax, dx ;~ 01C2:1E1A
cs=0x1c2;eip=0x001e1c; 	X(DIV1(byte_14b37));	// 4898 div     byte_14B37 ;~ 01C2:1E1C
cs=0x1c2;eip=0x001e20; 	X(MOV(word_14b4b, 0));	// 4899 mov     word_14B4B, 0 ;~ 01C2:1E20
cs=0x1c2;eip=0x001e26; 	X(MOV(word_14b4d, 0x30));	// 4900 mov     word_14B4D, 30h ; '0' ;~ 01C2:1E26
cs=0x1c2;eip=0x001e2c; 	T(OR(ah, ah));	// 4901 or      ah, ah ;~ 01C2:1E2C
cs=0x1c2;eip=0x001e2e; 	J(JNZ(loc_12038));	// 4902 jnz     short loc_12038 ;~ 01C2:1E2E
cs=0x1c2;eip=0x001e30; 	T(OR(al, al));	// 4903 or      al, al ;~ 01C2:1E30
cs=0x1c2;eip=0x001e32; 	J(JZ(loc_12038));	// 4904 jz      short loc_12038 ;~ 01C2:1E32
cs=0x1c2;eip=0x001e34; 	T(DEC(al));	// 4905 dec     al ;~ 01C2:1E34
cs=0x1c2;eip=0x001e36; 	T(MOV(ah, 0x30));	// 4906 mov     ah, 30h ; '0' ;~ 01C2:1E36
loc_12038:
	// 4856 
cs=0x1c2;eip=0x001e38; 	X(PUSH(ax));	// 4910 push    ax ;~ 01C2:1E38
cs=0x1c2;eip=0x001e39; 	T(MOV(al, ah));	// 4911 mov     al, ah ;~ 01C2:1E39
cs=0x1c2;eip=0x001e3b; 	T(XOR(ah, ah));	// 4912 xor     ah, ah ;~ 01C2:1E3B
cs=0x1c2;eip=0x001e3d; 	X(MOV(word_14b4f, ax));	// 4913 mov     word_14B4F, ax ;~ 01C2:1E3D
cs=0x1c2;eip=0x001e40; 	X(POP(ax));	// 4914 pop     ax ;~ 01C2:1E40
cs=0x1c2;eip=0x001e41; 	T(XOR(ah, ah));	// 4915 xor     ah, ah ;~ 01C2:1E41
cs=0x1c2;eip=0x001e43; 	X(MOV(word_14b5f, ax));	// 4916 mov     word_14B5F, ax ;~ 01C2:1E43
cs=0x1c2;eip=0x001e46; 	T(MOV(bx, word_14b45));	// 4917 mov     bx, word_14B45 ;~ 01C2:1E46
cs=0x1c2;eip=0x001e4a; 	X(MOV(word_14b51, bx));	// 4918 mov     word_14B51, bx ;~ 01C2:1E4A
cs=0x1c2;eip=0x001e4e; 	T(CMP(bx, word_14b53));	// 4919 cmp     bx, word_14B53 ;~ 01C2:1E4E
cs=0x1c2;eip=0x001e52; 	J(JC(loc_1205a));	// 4920 jb      short loc_1205A ;~ 01C2:1E52
cs=0x1c2;eip=0x001e54; 	X(MUL1_1(byte_14b38));	// 4921 mul     byte_14B38 ;~ 01C2:1E54
cs=0x1c2;eip=0x001e58; 	J(JMP(loc_1205e));	// 4922 jmp     short loc_1205E ;~ 01C2:1E58
loc_1205a:
	// 4857 
cs=0x1c2;eip=0x001e5a; 	X(MUL1_1(byte_14b3c));	// 4926 mul     byte_14B3C ;~ 01C2:1E5A
loc_1205e:
	// 4858 
cs=0x1c2;eip=0x001e5e; 	T(MOV(di, 0x0BC07));	// 4929 mov     di, 0BC07h ;~ 01C2:1E5E
cs=0x1c2;eip=0x001e61; 	T(MOV(si, word_14b57));	// 4930 mov     si, word_14B57 ;~ 01C2:1E61
cs=0x1c2;eip=0x001e65; 	T(ADD(si, ax));	// 4931 add     si, ax ;~ 01C2:1E65
cs=0x1c2;eip=0x001e67; 	J(CALL(sub_1232a,0));	// 4932 call    sub_1232A ;~ 01C2:1E67
cs=0x1c2;eip=0x001e6a; 	T(MOV(si, di));	// 4933 mov     si, di ;~ 01C2:1E6A
cs=0x1c2;eip=0x001e6c; 	X(MOV(word_14b57, si));	// 4934 mov     word_14B57, si ;~ 01C2:1E6C
cs=0x1c2;eip=0x001e70; 	T(ADD(si, 0x64));	// 4935 add     si, 64h ; 'd' ;~ 01C2:1E70
cs=0x1c2;eip=0x001e73; 	X(MOV(word_14b59, si));	// 4936 mov     word_14B59, si ;~ 01C2:1E73
cs=0x1c2;eip=0x001e77; 	T(MOV(ax, word_14b5f));	// 4937 mov     ax, word_14B5F ;~ 01C2:1E77
cs=0x1c2;eip=0x001e7a; 	T(MOV(bx, word_14b47));	// 4938 mov     bx, word_14B47 ;~ 01C2:1E7A
cs=0x1c2;eip=0x001e7e; 	X(MOV(word_14b51, bx));	// 4939 mov     word_14B51, bx ;~ 01C2:1E7E
cs=0x1c2;eip=0x001e82; 	T(CMP(bx, word_14b53));	// 4940 cmp     bx, word_14B53 ;~ 01C2:1E82
cs=0x1c2;eip=0x001e86; 	J(JC(loc_1208e));	// 4941 jb      short loc_1208E ;~ 01C2:1E86
cs=0x1c2;eip=0x001e88; 	X(MUL1_1(byte_14b38));	// 4942 mul     byte_14B38 ;~ 01C2:1E88
cs=0x1c2;eip=0x001e8c; 	J(JMP(loc_12092));	// 4943 jmp     short loc_12092 ;~ 01C2:1E8C
loc_1208e:
	// 4859 
cs=0x1c2;eip=0x001e8e; 	X(MUL1_1(byte_14b3c));	// 4947 mul     byte_14B3C ;~ 01C2:1E8E
loc_12092:
	// 4860 
cs=0x1c2;eip=0x001e92; 	T(MOV(si, word_14b5b));	// 4950 mov     si, word_14B5B ;~ 01C2:1E92
cs=0x1c2;eip=0x001e96; 	T(MOV(di, 0x0BCCF));	// 4951 mov     di, 0BCCFh ;~ 01C2:1E96
cs=0x1c2;eip=0x001e99; 	T(ADD(si, ax));	// 4952 add     si, ax ;~ 01C2:1E99
cs=0x1c2;eip=0x001e9b; 	J(CALL(sub_1232a,0));	// 4953 call    sub_1232A ;~ 01C2:1E9B
cs=0x1c2;eip=0x001e9e; 	T(MOV(si, di));	// 4954 mov     si, di ;~ 01C2:1E9E
cs=0x1c2;eip=0x001ea0; 	X(MOV(word_14b5b, si));	// 4955 mov     word_14B5B, si ;~ 01C2:1EA0
cs=0x1c2;eip=0x001ea4; 	T(ADD(si, 0x64));	// 4956 add     si, 64h ; 'd' ;~ 01C2:1EA4
cs=0x1c2;eip=0x001ea7; 	X(MOV(word_14b5d, si));	// 4957 mov     word_14B5D, si ;~ 01C2:1EA7
cs=0x1c2;eip=0x001eab; 	J(CALL(sub_1226d,0));	// 4958 call    sub_1226D ;~ 01C2:1EAB
cs=0x1c2;eip=0x001eae; 	T(MOV(di, 0x66D));	// 4959 mov     di, 66Dh ;~ 01C2:1EAE
cs=0x1c2;eip=0x001eb1; 	X(MOV(word_14b3d, di));	// 4960 mov     word_14B3D, di ;~ 01C2:1EB1
cs=0x1c2;eip=0x001eb5; 	J(CALL(sub_121df,0));	// 4961 call    sub_121DF ;~ 01C2:1EB5
cs=0x1c2;eip=0x001eb8; 	R(RETN(0));	// 4962 retn ;~ 01C2:1EB8
loc_120b9:
	// 4861 
cs=0x1c2;eip=0x001eb9; 	X(MOV(word_14b55, 0x22));	// 4966 mov     word_14B55, 22h ; '"' ;~ 01C2:1EB9
cs=0x1c2;eip=0x001ebf; 	T(MOV(dx, word_14b2b));	// 4967 mov     dx, word_14B2B ;~ 01C2:1EBF
cs=0x1c2;eip=0x001ec3; 	T(MOV(al, byte_14b2d));	// 4968 mov     al, byte_14B2D ;~ 01C2:1EC3
cs=0x1c2;eip=0x001ec6; 	X(MOV(byte_153a3, al));	// 4969 mov     byte_153A3, al ;~ 01C2:1EC6
cs=0x1c2;eip=0x001ec9; 	X(MOV(byte_153a2, 0));	// 4970 mov     byte_153A2, 0 ;~ 01C2:1EC9
loc_120ce:
	// 4862 
cs=0x1c2;eip=0x001ece; 	T(TEST(dx, 0x8000));	// 4973 test    dx, 8000h ;~ 01C2:1ECE
cs=0x1c2;eip=0x001ed2; 	J(JZ(loc_120da));	// 4974 jz      short loc_120DA ;~ 01C2:1ED2
cs=0x1c2;eip=0x001ed4; 	T(ADD(dx, 0x480));	// 4975 add     dx, 480h ;~ 01C2:1ED4
cs=0x1c2;eip=0x001ed8; 	J(JMP(loc_120ce));	// 4976 jmp     short loc_120CE ;~ 01C2:1ED8
loc_120da:
	// 4863 
cs=0x1c2;eip=0x001eda; 	T(CMP(dx, 0x24));	// 4981 cmp     dx, 24h ; '$' ;~ 01C2:1EDA
cs=0x1c2;eip=0x001edd; 	J(JC(loc_120e4));	// 4982 jb      short loc_120E4 ;~ 01C2:1EDD
cs=0x1c2;eip=0x001edf; 	T(SUB(dx, 0x24));	// 4983 sub     dx, 24h ; '$' ;~ 01C2:1EDF
cs=0x1c2;eip=0x001ee2; 	J(JMP(loc_120da));	// 4984 jmp     short loc_120DA ;~ 01C2:1EE2
loc_120e4:
	// 4864 
cs=0x1c2;eip=0x001ee4; 	X(MOV(word_14b53, 0x23));	// 4988 mov     word_14B53, 23h ; '#' ;~ 01C2:1EE4
cs=0x1c2;eip=0x001eea; 	T(CMP(bx, 0x200));	// 4989 cmp     bx, 200h ;~ 01C2:1EEA
cs=0x1c2;eip=0x001eee; 	J(JNC(locret_120f7));	// 4990 jnb     short locret_120F7 ;~ 01C2:1EEE
cs=0x1c2;eip=0x001ef0; 	T(CMP(bx, 0x15));	// 4991 cmp     bx, 15h ;~ 01C2:1EF0
cs=0x1c2;eip=0x001ef3; 	J(JC(locret_120f7));	// 4992 jb      short locret_120F7 ;~ 01C2:1EF3
cs=0x1c2;eip=0x001ef5; 	J(JMP(loc_120f8));	// 4993 jmp     short loc_120F8 ;~ 01C2:1EF5
locret_120f7:
	// 4865 
cs=0x1c2;eip=0x001ef7; 	R(RETN(0));	// 4998 retn ;~ 01C2:1EF7
loc_120f8:
	// 4866 
cs=0x1c2;eip=0x001ef8; 	T(CMP(word_14b3f, 0x0A0));	// 5002 cmp     word_14B3F, 0A0h ; ' ' ;~ 01C2:1EF8
cs=0x1c2;eip=0x001efe; 	J(JNS(loc_1210d));	// 5003 jns     short loc_1210D ;~ 01C2:1EFE
cs=0x1c2;eip=0x001f00; 	T(CMP(word_14b3f, 0x0FF60));	// 5004 cmp     word_14B3F, 0FF60h ;~ 01C2:1F00
cs=0x1c2;eip=0x001f06; 	J(JS(loc_1210d));	// 5005 js      short loc_1210D ;~ 01C2:1F06
cs=0x1c2;eip=0x001f08; 	X(MOV(byte_1476f, 0x0FF));	// 5006 mov     byte_1476F, 0FFh ;~ 01C2:1F08
loc_1210d:
	// 4867 
cs=0x1c2;eip=0x001f0d; 	T(MOV(si, 0x5BD));	// 5010 mov     si, 5BDh ;~ 01C2:1F0D
loc_12110:
	// 4868 
cs=0x1c2;eip=0x001f10; 	T(LODSW);	// 5013 lodsw ;~ 01C2:1F10
cs=0x1c2;eip=0x001f11; 	T(ADD(si, 2));	// 5014 add     si, 2 ;~ 01C2:1F11
cs=0x1c2;eip=0x001f14; 	T(CMP(ax, bx));	// 5015 cmp     ax, bx ;~ 01C2:1F14
cs=0x1c2;eip=0x001f16; 	J(JC(loc_12110));	// 5016 jb      short loc_12110 ;~ 01C2:1F16
cs=0x1c2;eip=0x001f18; 	X(MOV(word_14b47, ax));	// 5017 mov     word_14B47, ax ;~ 01C2:1F18
cs=0x1c2;eip=0x001f1b; 	T(ADD(si, 0x0FFFE));	// 5018 add     si, 0FFFEh ;~ 01C2:1F1B
cs=0x1c2;eip=0x001f1e; 	T(LODSW);	// 5019 lodsw ;~ 01C2:1F1E
cs=0x1c2;eip=0x001f1f; 	X(MOV(word_14b5b, ax));	// 5020 mov     word_14B5B, ax ;~ 01C2:1F1F
cs=0x1c2;eip=0x001f22; 	T(ADD(si, 0x0FFF8));	// 5021 add     si, 0FFF8h ;~ 01C2:1F22
cs=0x1c2;eip=0x001f25; 	T(LODSW);	// 5022 lodsw ;~ 01C2:1F25
cs=0x1c2;eip=0x001f26; 	X(MOV(word_14b45, ax));	// 5023 mov     word_14B45, ax ;~ 01C2:1F26
cs=0x1c2;eip=0x001f29; 	T(LODSW);	// 5024 lodsw ;~ 01C2:1F29
cs=0x1c2;eip=0x001f2a; 	X(MOV(word_14b57, ax));	// 5025 mov     word_14B57, ax ;~ 01C2:1F2A
cs=0x1c2;eip=0x001f2d; 	T(MOV(ax, bx));	// 5026 mov     ax, bx ;~ 01C2:1F2D
cs=0x1c2;eip=0x001f2f; 	T(MOV(cl, 6));	// 5027 mov     cl, 6 ;~ 01C2:1F2F
cs=0x1c2;eip=0x001f31; 	T(SHR(ax, cl));	// 5028 shr     ax, cl ;~ 01C2:1F31
cs=0x1c2;eip=0x001f33; 	T(MOV(cx, 8));	// 5029 mov     cx, 8 ;~ 01C2:1F33
cs=0x1c2;eip=0x001f36; 	T(SUB(cx, ax));	// 5030 sub     cx, ax ;~ 01C2:1F36
cs=0x1c2;eip=0x001f38; 	X(MOV(word_14b41, cx));	// 5031 mov     word_14B41, cx ;~ 01C2:1F38
cs=0x1c2;eip=0x001f3c; 	X(MOV(word_14b49, bx));	// 5032 mov     word_14B49, bx ;~ 01C2:1F3C
cs=0x1c2;eip=0x001f40; 	T(MOV(ax, dx));	// 5033 mov     ax, dx ;~ 01C2:1F40
cs=0x1c2;eip=0x001f42; 	X(DIV1(byte_14b32));	// 5034 div     byte_14B32 ;~ 01C2:1F42
cs=0x1c2;eip=0x001f46; 	X(MOV(word_14b4b, 0));	// 5035 mov     word_14B4B, 0 ;~ 01C2:1F46
cs=0x1c2;eip=0x001f4c; 	X(MOV(word_14b4d, 9));	// 5036 mov     word_14B4D, 9 ;~ 01C2:1F4C
cs=0x1c2;eip=0x001f52; 	T(OR(ah, ah));	// 5037 or      ah, ah ;~ 01C2:1F52
cs=0x1c2;eip=0x001f54; 	J(JNZ(loc_1215e));	// 5038 jnz     short loc_1215E ;~ 01C2:1F54
cs=0x1c2;eip=0x001f56; 	T(OR(al, al));	// 5039 or      al, al ;~ 01C2:1F56
cs=0x1c2;eip=0x001f58; 	J(JZ(loc_1215e));	// 5040 jz      short loc_1215E ;~ 01C2:1F58
cs=0x1c2;eip=0x001f5a; 	T(DEC(al));	// 5041 dec     al ;~ 01C2:1F5A
cs=0x1c2;eip=0x001f5c; 	T(MOV(ah, 9));	// 5042 mov     ah, 9 ;~ 01C2:1F5C
loc_1215e:
	// 4869 
cs=0x1c2;eip=0x001f5e; 	X(PUSH(ax));	// 5046 push    ax ;~ 01C2:1F5E
cs=0x1c2;eip=0x001f5f; 	T(MOV(al, ah));	// 5047 mov     al, ah ;~ 01C2:1F5F
cs=0x1c2;eip=0x001f61; 	T(XOR(ah, ah));	// 5048 xor     ah, ah ;~ 01C2:1F61
cs=0x1c2;eip=0x001f63; 	X(MOV(word_14b4f, ax));	// 5049 mov     word_14B4F, ax ;~ 01C2:1F63
cs=0x1c2;eip=0x001f66; 	X(POP(ax));	// 5050 pop     ax ;~ 01C2:1F66
cs=0x1c2;eip=0x001f67; 	T(XOR(ah, ah));	// 5051 xor     ah, ah ;~ 01C2:1F67
cs=0x1c2;eip=0x001f69; 	X(MOV(word_14b5f, ax));	// 5052 mov     word_14B5F, ax ;~ 01C2:1F69
cs=0x1c2;eip=0x001f6c; 	T(MOV(bx, word_14b45));	// 5053 mov     bx, word_14B45 ;~ 01C2:1F6C
cs=0x1c2;eip=0x001f70; 	X(MOV(word_14b51, bx));	// 5054 mov     word_14B51, bx ;~ 01C2:1F70
cs=0x1c2;eip=0x001f74; 	T(CMP(bx, word_14b53));	// 5055 cmp     bx, word_14B53 ;~ 01C2:1F74
cs=0x1c2;eip=0x001f78; 	J(JC(loc_12180));	// 5056 jb      short loc_12180 ;~ 01C2:1F78
cs=0x1c2;eip=0x001f7a; 	X(MUL1_1(byte_14b34));	// 5057 mul     byte_14B34 ;~ 01C2:1F7A
cs=0x1c2;eip=0x001f7e; 	J(JMP(loc_12184));	// 5058 jmp     short loc_12184 ;~ 01C2:1F7E
loc_12180:
	// 4870 
cs=0x1c2;eip=0x001f80; 	X(MUL1_1(byte_14b39));	// 5062 mul     byte_14B39 ;~ 01C2:1F80
loc_12184:
	// 4871 
cs=0x1c2;eip=0x001f84; 	T(MOV(di, 0x0BC07));	// 5065 mov     di, 0BC07h ;~ 01C2:1F84
cs=0x1c2;eip=0x001f87; 	T(MOV(si, word_14b57));	// 5066 mov     si, word_14B57 ;~ 01C2:1F87
cs=0x1c2;eip=0x001f8b; 	T(ADD(si, ax));	// 5067 add     si, ax ;~ 01C2:1F8B
cs=0x1c2;eip=0x001f8d; 	J(CALL(sub_1232a,0));	// 5068 call    sub_1232A ;~ 01C2:1F8D
cs=0x1c2;eip=0x001f90; 	T(MOV(si, di));	// 5069 mov     si, di ;~ 01C2:1F90
cs=0x1c2;eip=0x001f92; 	X(MOV(word_14b57, si));	// 5070 mov     word_14B57, si ;~ 01C2:1F92
cs=0x1c2;eip=0x001f96; 	T(ADD(si, 0x44));	// 5071 add     si, 44h ; 'D' ;~ 01C2:1F96
cs=0x1c2;eip=0x001f99; 	X(MOV(word_14b59, si));	// 5072 mov     word_14B59, si ;~ 01C2:1F99
cs=0x1c2;eip=0x001f9d; 	T(MOV(ax, word_14b5f));	// 5073 mov     ax, word_14B5F ;~ 01C2:1F9D
cs=0x1c2;eip=0x001fa0; 	T(MOV(bx, word_14b47));	// 5074 mov     bx, word_14B47 ;~ 01C2:1FA0
cs=0x1c2;eip=0x001fa4; 	X(MOV(word_14b51, bx));	// 5075 mov     word_14B51, bx ;~ 01C2:1FA4
cs=0x1c2;eip=0x001fa8; 	T(CMP(bx, word_14b53));	// 5076 cmp     bx, word_14B53 ;~ 01C2:1FA8
cs=0x1c2;eip=0x001fac; 	J(JC(loc_121b4));	// 5077 jb      short loc_121B4 ;~ 01C2:1FAC
cs=0x1c2;eip=0x001fae; 	X(MUL1_1(byte_14b34));	// 5078 mul     byte_14B34 ;~ 01C2:1FAE
cs=0x1c2;eip=0x001fb2; 	J(JMP(loc_121b8));	// 5079 jmp     short loc_121B8 ;~ 01C2:1FB2
loc_121b4:
	// 4872 
cs=0x1c2;eip=0x001fb4; 	X(MUL1_1(byte_14b39));	// 5083 mul     byte_14B39 ;~ 01C2:1FB4
loc_121b8:
	// 4873 
cs=0x1c2;eip=0x001fb8; 	T(MOV(si, word_14b5b));	// 5086 mov     si, word_14B5B ;~ 01C2:1FB8
cs=0x1c2;eip=0x001fbc; 	T(MOV(di, 0x0BCCF));	// 5087 mov     di, 0BCCFh ;~ 01C2:1FBC
cs=0x1c2;eip=0x001fbf; 	T(ADD(si, ax));	// 5088 add     si, ax ;~ 01C2:1FBF
cs=0x1c2;eip=0x001fc1; 	J(CALL(sub_1232a,0));	// 5089 call    sub_1232A ;~ 01C2:1FC1
cs=0x1c2;eip=0x001fc4; 	T(MOV(si, di));	// 5090 mov     si, di ;~ 01C2:1FC4
cs=0x1c2;eip=0x001fc6; 	X(MOV(word_14b5b, si));	// 5091 mov     word_14B5B, si ;~ 01C2:1FC6
cs=0x1c2;eip=0x001fca; 	T(ADD(si, 0x44));	// 5092 add     si, 44h ; 'D' ;~ 01C2:1FCA
cs=0x1c2;eip=0x001fcd; 	X(MOV(word_14b5d, si));	// 5093 mov     word_14B5D, si ;~ 01C2:1FCD
cs=0x1c2;eip=0x001fd1; 	J(CALL(sub_1226d,0));	// 5094 call    sub_1226D ;~ 01C2:1FD1
cs=0x1c2;eip=0x001fd4; 	T(MOV(di, 0x6C2));	// 5095 mov     di, 6C2h ;~ 01C2:1FD4
cs=0x1c2;eip=0x001fd7; 	X(MOV(word_14b3d, di));	// 5096 mov     word_14B3D, di ;~ 01C2:1FD7
cs=0x1c2;eip=0x001fdb; 	J(CALL(sub_121df,0));	// 5097 call    sub_121DF ;~ 01C2:1FDB
cs=0x1c2;eip=0x001fde; 	R(RETN(0));	// 5098 retn ;~ 01C2:1FDE

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_11e84: 	goto loc_11e84;
        case m2c::kloc_11e94: 	goto loc_11e94;
        case m2c::kloc_11ea0: 	goto loc_11ea0;
        case m2c::kloc_11eac: 	goto loc_11eac;
        case m2c::kloc_11ebe: 	goto loc_11ebe;
        case m2c::kloc_11ed2: 	goto loc_11ed2;
        case m2c::kloc_11ed5: 	goto loc_11ed5;
        case m2c::kloc_11f14: 	goto loc_11f14;
        case m2c::kloc_11f36: 	goto loc_11f36;
        case m2c::kloc_11f3a: 	goto loc_11f3a;
        case m2c::kloc_11f6a: 	goto loc_11f6a;
        case m2c::kloc_11f6e: 	goto loc_11f6e;
        case m2c::kloc_11f95: 	goto loc_11f95;
        case m2c::kloc_11fa5: 	goto loc_11fa5;
        case m2c::kloc_11fb1: 	goto loc_11fb1;
        case m2c::kloc_11fbd: 	goto loc_11fbd;
        case m2c::kloc_11fdb: 	goto loc_11fdb;
        case m2c::kloc_11fe2: 	goto loc_11fe2;
        case m2c::kloc_11ff6: 	goto loc_11ff6;
        case m2c::kloc_11ff9: 	goto loc_11ff9;
        case m2c::kloc_12038: 	goto loc_12038;
        case m2c::kloc_1205a: 	goto loc_1205a;
        case m2c::kloc_1205e: 	goto loc_1205e;
        case m2c::kloc_1208e: 	goto loc_1208e;
        case m2c::kloc_12092: 	goto loc_12092;
        case m2c::kloc_120b9: 	goto loc_120b9;
        case m2c::kloc_120ce: 	goto loc_120ce;
        case m2c::kloc_120da: 	goto loc_120da;
        case m2c::kloc_120e4: 	goto loc_120e4;
        case m2c::kloc_120f8: 	goto loc_120f8;
        case m2c::kloc_1210d: 	goto loc_1210d;
        case m2c::kloc_12110: 	goto loc_12110;
        case m2c::kloc_1215e: 	goto loc_1215e;
        case m2c::kloc_12180: 	goto loc_12180;
        case m2c::kloc_12184: 	goto loc_12184;
        case m2c::kloc_121b4: 	goto loc_121b4;
        case m2c::kloc_121b8: 	goto loc_121b8;
        case m2c::klocret_11ed1: 	goto locret_11ed1;
        case m2c::klocret_11ff5: 	goto locret_11ff5;
        case m2c::klocret_120f7: 	goto locret_120f7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12262(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12262:
    _begin:
cs=0x1c2;eip=0x002062; 	T(LODSW);	// 5175 lodsw ;~ 01C2:2062
ret_1c2_2063:
	// 4879 
cs=0x1c2;eip=0x002063; 	X(ADD(*(dw*)(raddr(ds,di)), ax));	// 5176 add     [di], ax ;~ 01C2:2063
cs=0x1c2;eip=0x002065; 	T(INC(di));	// 5177 inc     di ;~ 01C2:2065
cs=0x1c2;eip=0x002066; 	T(INC(di));	// 5178 inc     di ;~ 01C2:2066
cs=0x1c2;eip=0x002067; 	T(LODSW);	// 5179 lodsw ;~ 01C2:2067
cs=0x1c2;eip=0x002068; 	X(ADD(*(dw*)(raddr(ds,di)), ax));	// 5180 add     [di], ax ;~ 01C2:2068
cs=0x1c2;eip=0x00206a; 	T(INC(di));	// 5181 inc     di ;~ 01C2:206A
cs=0x1c2;eip=0x00206b; 	T(INC(di));	// 5182 inc     di ;~ 01C2:206B
cs=0x1c2;eip=0x00206c; 	R(RETN(0));	// 5183 retn ;~ 01C2:206C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_2063: 	goto ret_1c2_2063;
        case m2c::ksub_12262: 	goto sub_12262;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1226d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1226d:
    _begin:
cs=0x1c2;eip=0x00206d; 	T(MOV(ax, word_14b47));	// 5192 mov     ax, word_14B47 ;~ 01C2:206D
ret_1c2_2070:
	// 4880 
cs=0x1c2;eip=0x002070; 	T(MOV(bx, ax));	// 5193 mov     bx, ax ;~ 01C2:2070
cs=0x1c2;eip=0x002072; 	T(SUB(ax, word_14b45));	// 5194 sub     ax, word_14B45 ;~ 01C2:2072
cs=0x1c2;eip=0x002076; 	T(SUB(bx, word_14b49));	// 5195 sub     bx, word_14B49 ;~ 01C2:2076
cs=0x1c2;eip=0x00207a; 	T(MOV(cx, 4));	// 5196 mov     cx, 4 ;~ 01C2:207A
cs=0x1c2;eip=0x00207d; 	T(XOR(dx, dx));	// 5197 xor     dx, dx ;~ 01C2:207D
loc_1227f:
	// 4881 
cs=0x1c2;eip=0x00207f; 	T(SHR(ax, 1));	// 5200 shr     ax, 1 ;~ 01C2:207F
cs=0x1c2;eip=0x002081; 	T(CMP(ax, bx));	// 5201 cmp     ax, bx ;~ 01C2:2081
cs=0x1c2;eip=0x002083; 	J(JNC(loc_12288));	// 5202 jnb     short loc_12288 ;~ 01C2:2083
cs=0x1c2;eip=0x002085; 	T(SUB(bx, ax));	// 5203 sub     bx, ax ;~ 01C2:2085
cs=0x1c2;eip=0x002087; 	T(STC);	// 5204 stc ;~ 01C2:2087
loc_12288:
	// 4882 
cs=0x1c2;eip=0x002088; 	T(RCR(dl, 1));	// 5207 rcr     dl, 1 ;~ 01C2:2088
cs=0x1c2;eip=0x00208a; 	J(LOOP(loc_1227f));	// 5208 loop    loc_1227F ;~ 01C2:208A
cs=0x1c2;eip=0x00208c; 	T(MOV(ax, word_14b4d));	// 5209 mov     ax, word_14B4D ;~ 01C2:208C
cs=0x1c2;eip=0x00208f; 	T(MOV(bx, ax));	// 5210 mov     bx, ax ;~ 01C2:208F
cs=0x1c2;eip=0x002091; 	T(SUB(ax, word_14b4b));	// 5211 sub     ax, word_14B4B ;~ 01C2:2091
cs=0x1c2;eip=0x002095; 	T(SUB(bx, word_14b4f));	// 5212 sub     bx, word_14B4F ;~ 01C2:2095
cs=0x1c2;eip=0x002099; 	T(MOV(cx, 4));	// 5213 mov     cx, 4 ;~ 01C2:2099
loc_1229c:
	// 4883 
cs=0x1c2;eip=0x00209c; 	T(SHR(ax, 1));	// 5216 shr     ax, 1 ;~ 01C2:209C
cs=0x1c2;eip=0x00209e; 	T(CMP(ax, bx));	// 5217 cmp     ax, bx ;~ 01C2:209E
cs=0x1c2;eip=0x0020a0; 	J(JNC(loc_122a5));	// 5218 jnb     short loc_122A5 ;~ 01C2:20A0
cs=0x1c2;eip=0x0020a2; 	T(SUB(bx, ax));	// 5219 sub     bx, ax ;~ 01C2:20A2
cs=0x1c2;eip=0x0020a4; 	T(STC);	// 5220 stc ;~ 01C2:20A4
loc_122a5:
	// 4884 
cs=0x1c2;eip=0x0020a5; 	T(RCR(dh, 1));	// 5223 rcr     dh, 1 ;~ 01C2:20A5
cs=0x1c2;eip=0x0020a7; 	J(LOOP(loc_1229c));	// 5224 loop    loc_1229C ;~ 01C2:20A7
cs=0x1c2;eip=0x0020a9; 	T(MOV(cx, word_14b55));	// 5225 mov     cx, word_14B55 ;~ 01C2:20A9
cs=0x1c2;eip=0x0020ad; 	T(XOR(ax, ax));	// 5226 xor     ax, ax ;~ 01C2:20AD
cs=0x1c2;eip=0x0020af; 	T(MOV(di, 0x0BBA3));	// 5227 mov     di, 0BBA3h ;~ 01C2:20AF
	// 5228 rep stosw ;~ 01C2:20B2
cs=0x1c2;eip=0x0020b2; 	X(	REP STOSW);	// 5228 rep stosw ;~ 01C2:20B2
cs=0x1c2;eip=0x0020b4; 	T(MOV(cx, word_14b55));	// 5229 mov     cx, word_14B55 ;~ 01C2:20B4
cs=0x1c2;eip=0x0020b8; 	T(MOV(si, 0x517));	// 5230 mov     si, 517h ;~ 01C2:20B8
cs=0x1c2;eip=0x0020bb; 	T(MOV(bp, si));	// 5231 mov     bp, si ;~ 01C2:20BB
cs=0x1c2;eip=0x0020bd; 	T(MOV(cx, 4));	// 5232 mov     cx, 4 ;~ 01C2:20BD
loc_122c0:
	// 4885 
cs=0x1c2;eip=0x0020c0; 	T(MOV(si, *(dw*)(raddr(ds,si))));	// 5235 mov     si, [si] ;~ 01C2:20C0
cs=0x1c2;eip=0x0020c2; 	T(MOV(di, 0x0BBA3));	// 5236 mov     di, 0BBA3h ;~ 01C2:20C2
cs=0x1c2;eip=0x0020c5; 	X(PUSH(cx));	// 5237 push    cx ;~ 01C2:20C5
cs=0x1c2;eip=0x0020c6; 	T(MOV(cx, word_14b55));	// 5238 mov     cx, word_14B55 ;~ 01C2:20C6
cs=0x1c2;eip=0x0020ca; 	T(XOR(bx, bx));	// 5239 xor     bx, bx ;~ 01C2:20CA
loc_122cc:
	// 4886 
cs=0x1c2;eip=0x0020cc; 	T(MOV(ax, *(dw*)(raddr(ds,bx+si))));	// 5242 mov     ax, [bx+si] ;~ 01C2:20CC
cs=0x1c2;eip=0x0020ce; 	X(ADD(*(dw*)(raddr(ds,di)), ax));	// 5243 add     [di], ax ;~ 01C2:20CE
cs=0x1c2;eip=0x0020d0; 	T(ADD(di, 2));	// 5244 add     di, 2 ;~ 01C2:20D0
cs=0x1c2;eip=0x0020d3; 	T(ADD(bx, 2));	// 5245 add     bx, 2 ;~ 01C2:20D3
cs=0x1c2;eip=0x0020d6; 	J(LOOP(loc_122cc));	// 5246 loop    loc_122CC ;~ 01C2:20D6
cs=0x1c2;eip=0x0020d8; 	X(POP(cx));	// 5247 pop     cx ;~ 01C2:20D8
cs=0x1c2;eip=0x0020d9; 	T(ADD(bp, 2));	// 5248 add     bp, 2 ;~ 01C2:20D9
cs=0x1c2;eip=0x0020dc; 	T(MOV(si, bp));	// 5249 mov     si, bp ;~ 01C2:20DC
cs=0x1c2;eip=0x0020de; 	J(LOOP(loc_122c0));	// 5250 loop    loc_122C0 ;~ 01C2:20DE
cs=0x1c2;eip=0x0020e0; 	T(MOV(cx, 0x402));	// 5251 mov     cx, 402h ;~ 01C2:20E0
loc_122e3:
	// 4887 
cs=0x1c2;eip=0x0020e3; 	T(MOV(bp, 0x517));	// 5254 mov     bp, 517h ;~ 01C2:20E3
cs=0x1c2;eip=0x0020e6; 	T(RCL(dl, 1));	// 5255 rcl     dl, 1 ;~ 01C2:20E6
cs=0x1c2;eip=0x0020e8; 	J(JC(loc_122ed));	// 5256 jb      short loc_122ED ;~ 01C2:20E8
cs=0x1c2;eip=0x0020ea; 	T(ADD(bp, 4));	// 5257 add     bp, 4 ;~ 01C2:20EA
loc_122ed:
	// 4888 
cs=0x1c2;eip=0x0020ed; 	T(RCL(dh, 1));	// 5260 rcl     dh, 1 ;~ 01C2:20ED
cs=0x1c2;eip=0x0020ef; 	J(JC(loc_122f4));	// 5261 jb      short loc_122F4 ;~ 01C2:20EF
cs=0x1c2;eip=0x0020f1; 	T(ADD(bp, 2));	// 5262 add     bp, 2 ;~ 01C2:20F1
loc_122f4:
	// 4889 
cs=0x1c2;eip=0x0020f4; 	T(MOV(si, bp));	// 5265 mov     si, bp ;~ 01C2:20F4
cs=0x1c2;eip=0x0020f6; 	T(MOV(si, *(dw*)(raddr(ds,si))));	// 5266 mov     si, [si] ;~ 01C2:20F6
cs=0x1c2;eip=0x0020f8; 	T(MOV(di, 0x0BBA3));	// 5267 mov     di, 0BBA3h ;~ 01C2:20F8
cs=0x1c2;eip=0x0020fb; 	X(PUSH(dx));	// 5268 push    dx ;~ 01C2:20FB
cs=0x1c2;eip=0x0020fc; 	T(MOV(dx, word_14b55));	// 5269 mov     dx, word_14B55 ;~ 01C2:20FC
cs=0x1c2;eip=0x002100; 	T(XOR(bx, bx));	// 5270 xor     bx, bx ;~ 01C2:2100
loc_12302:
	// 4890 
cs=0x1c2;eip=0x002102; 	T(MOV(ax, *(dw*)(raddr(ds,bx+si))));	// 5273 mov     ax, [bx+si] ;~ 01C2:2102
cs=0x1c2;eip=0x002104; 	T(SHL(ax, cl));	// 5274 shl     ax, cl ;~ 01C2:2104
cs=0x1c2;eip=0x002106; 	X(ADD(*(dw*)(raddr(ds,di)), ax));	// 5275 add     [di], ax ;~ 01C2:2106
cs=0x1c2;eip=0x002108; 	T(ADD(di, 2));	// 5276 add     di, 2 ;~ 01C2:2108
cs=0x1c2;eip=0x00210b; 	T(ADD(bx, 2));	// 5277 add     bx, 2 ;~ 01C2:210B
cs=0x1c2;eip=0x00210e; 	T(DEC(dx));	// 5278 dec     dx ;~ 01C2:210E
cs=0x1c2;eip=0x00210f; 	J(JNZ(loc_12302));	// 5279 jnz     short loc_12302 ;~ 01C2:210F
cs=0x1c2;eip=0x002111; 	X(POP(dx));	// 5280 pop     dx ;~ 01C2:2111
cs=0x1c2;eip=0x002112; 	T(INC(cl));	// 5281 inc     cl ;~ 01C2:2112
cs=0x1c2;eip=0x002114; 	T(DEC(ch));	// 5282 dec     ch ;~ 01C2:2114
cs=0x1c2;eip=0x002116; 	J(JNZ(loc_122e3));	// 5283 jnz     short loc_122E3 ;~ 01C2:2116
cs=0x1c2;eip=0x002118; 	T(MOV(cl, 6));	// 5284 mov     cl, 6 ;~ 01C2:2118
cs=0x1c2;eip=0x00211a; 	T(MOV(dx, word_14b55));	// 5285 mov     dx, word_14B55 ;~ 01C2:211A
cs=0x1c2;eip=0x00211e; 	T(MOV(di, 0x0BBA3));	// 5286 mov     di, 0BBA3h ;~ 01C2:211E
loc_12321:
	// 4891 
cs=0x1c2;eip=0x002121; 	X(SAR(*(dw*)(raddr(ds,di)), cl));	// 5289 sar     word ptr [di], cl ;~ 01C2:2121
cs=0x1c2;eip=0x002123; 	T(ADD(di, 2));	// 5290 add     di, 2 ;~ 01C2:2123
cs=0x1c2;eip=0x002126; 	T(DEC(dx));	// 5291 dec     dx ;~ 01C2:2126
cs=0x1c2;eip=0x002127; 	J(JNZ(loc_12321));	// 5292 jnz     short loc_12321 ;~ 01C2:2127
cs=0x1c2;eip=0x002129; 	R(RETN(0));	// 5293 retn ;~ 01C2:2129

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_1227f: 	goto loc_1227f;
        case m2c::kloc_12288: 	goto loc_12288;
        case m2c::kloc_1229c: 	goto loc_1229c;
        case m2c::kloc_122a5: 	goto loc_122a5;
        case m2c::kloc_122c0: 	goto loc_122c0;
        case m2c::kloc_122cc: 	goto loc_122cc;
        case m2c::kloc_122e3: 	goto loc_122e3;
        case m2c::kloc_122ed: 	goto loc_122ed;
        case m2c::kloc_122f4: 	goto loc_122f4;
        case m2c::kloc_12302: 	goto loc_12302;
        case m2c::kloc_12321: 	goto loc_12321;
        case m2c::kret_1c2_2070: 	goto ret_1c2_2070;
        case m2c::ksub_1226d: 	goto sub_1226d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1232a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1232a:
    _begin:
cs=0x1c2;eip=0x00212a; 	X(PUSH(si));	// 5302 push    si ;~ 01C2:212A
ret_1c2_212b:
	// 4892 
cs=0x1c2;eip=0x00212b; 	X(PUSH(di));	// 5303 push    di ;~ 01C2:212B
cs=0x1c2;eip=0x00212c; 	X(PUSH(cx));	// 5304 push    cx ;~ 01C2:212C
cs=0x1c2;eip=0x00212d; 	X(PUSH(ax));	// 5305 push    ax ;~ 01C2:212D
cs=0x1c2;eip=0x00212e; 	T(MOV(cx, word_14b55));	// 5306 mov     cx, word_14B55 ;~ 01C2:212E
cs=0x1c2;eip=0x002132; 	T(SHL(cx, 1));	// 5307 shl     cx, 1 ;~ 01C2:2132
cs=0x1c2;eip=0x002134; 	T(MOV(ax, word_14b53));	// 5308 mov     ax, word_14B53 ;~ 01C2:2134
cs=0x1c2;eip=0x002137; 	T(CMP(word_14b51, ax));	// 5309 cmp     word_14B51, ax ;~ 01C2:2137
cs=0x1c2;eip=0x00213b; 	J(JC(loc_12344));	// 5310 jb      short loc_12344 ;~ 01C2:213B
loc_1233d:
	// 4893 
cs=0x1c2;eip=0x00213d; 	T(LODSB);	// 5313 lodsb ;~ 01C2:213D
cs=0x1c2;eip=0x00213e; 	T(CBW);	// 5314 cbw ;~ 01C2:213E
cs=0x1c2;eip=0x00213f; 	X(STOSW);	// 5315 stosw ;~ 01C2:213F
cs=0x1c2;eip=0x002140; 	J(LOOP(loc_1233d));	// 5316 loop    loc_1233D ;~ 01C2:2140
cs=0x1c2;eip=0x002142; 	J(JMP(loc_12346));	// 5317 jmp     short loc_12346 ;~ 01C2:2142
loc_12344:
	// 4894 
	// 5321 rep movsw ;~ 01C2:2144
cs=0x1c2;eip=0x002144; 	X(	REP MOVSW);	// 5321 rep movsw ;~ 01C2:2144
loc_12346:
	// 4895 
cs=0x1c2;eip=0x002146; 	X(POP(ax));	// 5324 pop     ax ;~ 01C2:2146
cs=0x1c2;eip=0x002147; 	X(POP(cx));	// 5325 pop     cx ;~ 01C2:2147
cs=0x1c2;eip=0x002148; 	X(POP(di));	// 5326 pop     di ;~ 01C2:2148
cs=0x1c2;eip=0x002149; 	X(POP(si));	// 5327 pop     si ;~ 01C2:2149
cs=0x1c2;eip=0x00214a; 	R(RETN(0));	// 5328 retn ;~ 01C2:214A

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_1233d: 	goto loc_1233d;
        case m2c::kloc_12344: 	goto loc_12344;
        case m2c::kloc_12346: 	goto loc_12346;
        case m2c::kret_1c2_212b: 	goto ret_1c2_212b;
        case m2c::ksub_1232a: 	goto sub_1232a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_123f3(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_123f3:
    _begin:
cs=0x1c2;eip=0x0021f3; 	X(MOV(byte_153a3, 2));	// 5448 mov     byte_153A3, 2 ;~ 01C2:21F3
ret_1c2_21f8:
	// 4907 
cs=0x1c2;eip=0x0021f8; 	X(MOV(word_14b55, 0x0A));	// 5449 mov     word_14B55, 0Ah ;~ 01C2:21F8
cs=0x1c2;eip=0x0021fe; 	X(MOV(byte_153a2, 0));	// 5450 mov     byte_153A2, 0 ;~ 01C2:21FE
loc_12403:
	// 4908 
cs=0x1c2;eip=0x002203; 	T(TEST(dx, 0x8000));	// 5453 test    dx, 8000h ;~ 01C2:2203
cs=0x1c2;eip=0x002207; 	J(JZ(loc_1240f));	// 5454 jz      short loc_1240F ;~ 01C2:2207
cs=0x1c2;eip=0x002209; 	T(ADD(dx, 0x480));	// 5455 add     dx, 480h ;~ 01C2:2209
cs=0x1c2;eip=0x00220d; 	J(JMP(loc_12403));	// 5456 jmp     short loc_12403 ;~ 01C2:220D
loc_1240f:
	// 4909 
cs=0x1c2;eip=0x00220f; 	T(CMP(dx, 0x120));	// 5461 cmp     dx, 120h ;~ 01C2:220F
cs=0x1c2;eip=0x002213; 	J(JC(loc_1241b));	// 5462 jb      short loc_1241B ;~ 01C2:2213
cs=0x1c2;eip=0x002215; 	T(SUB(dx, 0x120));	// 5463 sub     dx, 120h ;~ 01C2:2215
cs=0x1c2;eip=0x002219; 	J(JMP(loc_1240f));	// 5464 jmp     short loc_1240F ;~ 01C2:2219
loc_1241b:
	// 4910 
cs=0x1c2;eip=0x00221b; 	X(MOV(word_14b53, 0x2D));	// 5468 mov     word_14B53, 2Dh ; '-' ;~ 01C2:221B
cs=0x1c2;eip=0x002221; 	T(CMP(bx, 0x1F4));	// 5469 cmp     bx, 1F4h ;~ 01C2:2221
cs=0x1c2;eip=0x002225; 	J(JNC(locret_1242c));	// 5470 jnb     short locret_1242C ;~ 01C2:2225
cs=0x1c2;eip=0x002227; 	T(CMP(bx, 0x15));	// 5471 cmp     bx, 15h ;~ 01C2:2227
cs=0x1c2;eip=0x00222a; 	J(JNC(loc_1242d));	// 5472 jnb     short loc_1242D ;~ 01C2:222A
locret_1242c:
	// 4911 
cs=0x1c2;eip=0x00222c; 	R(RETN(0));	// 5475 retn ;~ 01C2:222C
loc_1242d:
	// 4912 
cs=0x1c2;eip=0x00222d; 	T(MOV(si, 0x828));	// 5479 mov     si, 828h ;~ 01C2:222D
loc_12430:
	// 4913 
cs=0x1c2;eip=0x002230; 	T(LODSW);	// 5482 lodsw ;~ 01C2:2230
cs=0x1c2;eip=0x002231; 	T(ADD(si, 2));	// 5483 add     si, 2 ;~ 01C2:2231
cs=0x1c2;eip=0x002234; 	T(CMP(ax, bx));	// 5484 cmp     ax, bx ;~ 01C2:2234
cs=0x1c2;eip=0x002236; 	J(JC(loc_12430));	// 5485 jb      short loc_12430 ;~ 01C2:2236
cs=0x1c2;eip=0x002238; 	X(MOV(word_14b47, ax));	// 5486 mov     word_14B47, ax ;~ 01C2:2238
cs=0x1c2;eip=0x00223b; 	X(MOV(word_14b51, ax));	// 5487 mov     word_14B51, ax ;~ 01C2:223B
cs=0x1c2;eip=0x00223e; 	T(ADD(si, 0x0FFFE));	// 5488 add     si, 0FFFEh ;~ 01C2:223E
cs=0x1c2;eip=0x002241; 	T(LODSW);	// 5489 lodsw ;~ 01C2:2241
cs=0x1c2;eip=0x002242; 	X(MOV(word_14b5b, ax));	// 5490 mov     word_14B5B, ax ;~ 01C2:2242
cs=0x1c2;eip=0x002245; 	T(ADD(si, 0x0FFF8));	// 5491 add     si, 0FFF8h ;~ 01C2:2245
cs=0x1c2;eip=0x002248; 	T(LODSW);	// 5492 lodsw ;~ 01C2:2248
cs=0x1c2;eip=0x002249; 	X(MOV(word_14b45, ax));	// 5493 mov     word_14B45, ax ;~ 01C2:2249
cs=0x1c2;eip=0x00224c; 	T(LODSW);	// 5494 lodsw ;~ 01C2:224C
cs=0x1c2;eip=0x00224d; 	X(MOV(word_14b57, ax));	// 5495 mov     word_14B57, ax ;~ 01C2:224D
cs=0x1c2;eip=0x002250; 	X(MOV(word_14b49, bx));	// 5496 mov     word_14B49, bx ;~ 01C2:2250
cs=0x1c2;eip=0x002254; 	T(MOV(ax, dx));	// 5497 mov     ax, dx ;~ 01C2:2254
cs=0x1c2;eip=0x002256; 	X(DIV1(byte_14d57));	// 5498 div     byte_14D57 ;~ 01C2:2256
cs=0x1c2;eip=0x00225a; 	X(MOV(word_14b4b, 0));	// 5499 mov     word_14B4B, 0 ;~ 01C2:225A
cs=0x1c2;eip=0x002260; 	X(MOV(word_14b4d, 0x30));	// 5500 mov     word_14B4D, 30h ; '0' ;~ 01C2:2260
cs=0x1c2;eip=0x002266; 	T(OR(ah, ah));	// 5501 or      ah, ah ;~ 01C2:2266
cs=0x1c2;eip=0x002268; 	J(JNZ(loc_12472));	// 5502 jnz     short loc_12472 ;~ 01C2:2268
cs=0x1c2;eip=0x00226a; 	T(OR(al, al));	// 5503 or      al, al ;~ 01C2:226A
cs=0x1c2;eip=0x00226c; 	J(JZ(loc_12472));	// 5504 jz      short loc_12472 ;~ 01C2:226C
cs=0x1c2;eip=0x00226e; 	T(DEC(al));	// 5505 dec     al ;~ 01C2:226E
cs=0x1c2;eip=0x002270; 	T(MOV(ah, 0x30));	// 5506 mov     ah, 30h ; '0' ;~ 01C2:2270
loc_12472:
	// 4914 
cs=0x1c2;eip=0x002272; 	X(PUSH(ax));	// 5510 push    ax ;~ 01C2:2272
cs=0x1c2;eip=0x002273; 	T(MOV(al, ah));	// 5511 mov     al, ah ;~ 01C2:2273
cs=0x1c2;eip=0x002275; 	T(XOR(ah, ah));	// 5512 xor     ah, ah ;~ 01C2:2275
cs=0x1c2;eip=0x002277; 	X(MOV(word_14b4f, ax));	// 5513 mov     word_14B4F, ax ;~ 01C2:2277
cs=0x1c2;eip=0x00227a; 	X(POP(ax));	// 5514 pop     ax ;~ 01C2:227A
cs=0x1c2;eip=0x00227b; 	T(XOR(ah, ah));	// 5515 xor     ah, ah ;~ 01C2:227B
cs=0x1c2;eip=0x00227d; 	X(MOV(word_14b5f, ax));	// 5516 mov     word_14B5F, ax ;~ 01C2:227D
cs=0x1c2;eip=0x002280; 	T(MOV(bx, word_14b45));	// 5517 mov     bx, word_14B45 ;~ 01C2:2280
cs=0x1c2;eip=0x002284; 	X(MOV(word_14b51, bx));	// 5518 mov     word_14B51, bx ;~ 01C2:2284
cs=0x1c2;eip=0x002288; 	T(CMP(bx, word_14b53));	// 5519 cmp     bx, word_14B53 ;~ 01C2:2288
cs=0x1c2;eip=0x00228c; 	J(JC(loc_12494));	// 5520 jb      short loc_12494 ;~ 01C2:228C
cs=0x1c2;eip=0x00228e; 	X(MUL1_1(byte_14d52));	// 5521 mul     byte_14D52 ;~ 01C2:228E
cs=0x1c2;eip=0x002292; 	J(JMP(loc_12498));	// 5522 jmp     short loc_12498 ;~ 01C2:2292
loc_12494:
	// 4915 
cs=0x1c2;eip=0x002294; 	X(MUL1_1(byte_14d54));	// 5526 mul     byte_14D54 ;~ 01C2:2294
loc_12498:
	// 4916 
cs=0x1c2;eip=0x002298; 	T(MOV(di, 0x0BC07));	// 5529 mov     di, 0BC07h ;~ 01C2:2298
cs=0x1c2;eip=0x00229b; 	T(MOV(si, word_14b57));	// 5530 mov     si, word_14B57 ;~ 01C2:229B
cs=0x1c2;eip=0x00229f; 	T(ADD(si, ax));	// 5531 add     si, ax ;~ 01C2:229F
cs=0x1c2;eip=0x0022a1; 	J(CALL(sub_1232a,0));	// 5532 call    sub_1232A ;~ 01C2:22A1
cs=0x1c2;eip=0x0022a4; 	T(MOV(si, di));	// 5533 mov     si, di ;~ 01C2:22A4
cs=0x1c2;eip=0x0022a6; 	X(MOV(word_14b57, si));	// 5534 mov     word_14B57, si ;~ 01C2:22A6
cs=0x1c2;eip=0x0022aa; 	T(ADD(si, 0x14));	// 5535 add     si, 14h ;~ 01C2:22AA
cs=0x1c2;eip=0x0022ad; 	X(MOV(word_14b59, si));	// 5536 mov     word_14B59, si ;~ 01C2:22AD
cs=0x1c2;eip=0x0022b1; 	T(MOV(ax, word_14b5f));	// 5537 mov     ax, word_14B5F ;~ 01C2:22B1
cs=0x1c2;eip=0x0022b4; 	T(MOV(bx, word_14b47));	// 5538 mov     bx, word_14B47 ;~ 01C2:22B4
cs=0x1c2;eip=0x0022b8; 	X(MOV(word_14b51, bx));	// 5539 mov     word_14B51, bx ;~ 01C2:22B8
cs=0x1c2;eip=0x0022bc; 	T(CMP(bx, word_14b53));	// 5540 cmp     bx, word_14B53 ;~ 01C2:22BC
cs=0x1c2;eip=0x0022c0; 	J(JC(loc_124c8));	// 5541 jb      short loc_124C8 ;~ 01C2:22C0
cs=0x1c2;eip=0x0022c2; 	X(MUL1_1(byte_14d52));	// 5542 mul     byte_14D52 ;~ 01C2:22C2
cs=0x1c2;eip=0x0022c6; 	J(JMP(loc_124cc));	// 5543 jmp     short loc_124CC ;~ 01C2:22C6
loc_124c8:
	// 4917 
cs=0x1c2;eip=0x0022c8; 	X(MUL1_1(byte_14d54));	// 5547 mul     byte_14D54 ;~ 01C2:22C8
loc_124cc:
	// 4918 
cs=0x1c2;eip=0x0022cc; 	T(MOV(si, word_14b5b));	// 5550 mov     si, word_14B5B ;~ 01C2:22CC
cs=0x1c2;eip=0x0022d0; 	T(MOV(di, 0x0BCCF));	// 5551 mov     di, 0BCCFh ;~ 01C2:22D0
cs=0x1c2;eip=0x0022d3; 	T(ADD(si, ax));	// 5552 add     si, ax ;~ 01C2:22D3
cs=0x1c2;eip=0x0022d5; 	J(CALL(sub_1232a,0));	// 5553 call    sub_1232A ;~ 01C2:22D5
cs=0x1c2;eip=0x0022d8; 	T(MOV(si, di));	// 5554 mov     si, di ;~ 01C2:22D8
cs=0x1c2;eip=0x0022da; 	X(MOV(word_14b5b, si));	// 5555 mov     word_14B5B, si ;~ 01C2:22DA
cs=0x1c2;eip=0x0022de; 	T(ADD(si, 0x14));	// 5556 add     si, 14h ;~ 01C2:22DE
cs=0x1c2;eip=0x0022e1; 	X(MOV(word_14b5d, si));	// 5557 mov     word_14B5D, si ;~ 01C2:22E1
cs=0x1c2;eip=0x0022e5; 	J(CALL(sub_1226d,0));	// 5558 call    sub_1226D ;~ 01C2:22E5
cs=0x1c2;eip=0x0022e8; 	T(TEST(byte_148d1, 0x0FF));	// 5559 test    byte_148D1, 0FFh ;~ 01C2:22E8
cs=0x1c2;eip=0x0022ed; 	J(JNZ(locret_124f9));	// 5560 jnz     short locret_124F9 ;~ 01C2:22ED
cs=0x1c2;eip=0x0022ef; 	T(MOV(di, 0x894));	// 5561 mov     di, 894h ;~ 01C2:22EF
cs=0x1c2;eip=0x0022f2; 	X(MOV(word_14b3d, di));	// 5562 mov     word_14B3D, di ;~ 01C2:22F2
cs=0x1c2;eip=0x0022f6; 	J(CALL(sub_121df,0));	// 5563 call    sub_121DF ;~ 01C2:22F6
locret_124f9:
	// 4919 
cs=0x1c2;eip=0x0022f9; 	R(RETN(0));	// 5566 retn ;~ 01C2:22F9

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_12403: 	goto loc_12403;
        case m2c::kloc_1240f: 	goto loc_1240f;
        case m2c::kloc_1241b: 	goto loc_1241b;
        case m2c::kloc_1242d: 	goto loc_1242d;
        case m2c::kloc_12430: 	goto loc_12430;
        case m2c::kloc_12472: 	goto loc_12472;
        case m2c::kloc_12494: 	goto loc_12494;
        case m2c::kloc_12498: 	goto loc_12498;
        case m2c::kloc_124c8: 	goto loc_124c8;
        case m2c::kloc_124cc: 	goto loc_124cc;
        case m2c::klocret_1242c: 	goto locret_1242c;
        case m2c::klocret_124f9: 	goto locret_124f9;
        case m2c::kret_1c2_21f8: 	goto ret_1c2_21f8;
        case m2c::ksub_123f3: 	goto sub_123f3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_124fa(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_124fa:
    _begin:
cs=0x1c2;eip=0x0022fa; 	X(MOV(byte_153a3, 2));	// 5575 mov     byte_153A3, 2 ;~ 01C2:22FA
ret_1c2_22ff:
	// 4920 
cs=0x1c2;eip=0x0022ff; 	X(MOV(word_14b55, 0x0A));	// 5576 mov     word_14B55, 0Ah ;~ 01C2:22FF
cs=0x1c2;eip=0x002305; 	X(MOV(byte_153a2, 0));	// 5577 mov     byte_153A2, 0 ;~ 01C2:2305
loc_1250a:
	// 4921 
cs=0x1c2;eip=0x00230a; 	T(TEST(dx, 0x8000));	// 5580 test    dx, 8000h ;~ 01C2:230A
cs=0x1c2;eip=0x00230e; 	J(JZ(loc_12516));	// 5581 jz      short loc_12516 ;~ 01C2:230E
cs=0x1c2;eip=0x002310; 	T(ADD(dx, 0x480));	// 5582 add     dx, 480h ;~ 01C2:2310
cs=0x1c2;eip=0x002314; 	J(JMP(loc_1250a));	// 5583 jmp     short loc_1250A ;~ 01C2:2314
loc_12516:
	// 4922 
cs=0x1c2;eip=0x002316; 	T(CMP(dx, 0x120));	// 5588 cmp     dx, 120h ;~ 01C2:2316
cs=0x1c2;eip=0x00231a; 	J(JC(loc_12522));	// 5589 jb      short loc_12522 ;~ 01C2:231A
cs=0x1c2;eip=0x00231c; 	T(SUB(dx, 0x120));	// 5590 sub     dx, 120h ;~ 01C2:231C
cs=0x1c2;eip=0x002320; 	J(JMP(loc_12516));	// 5591 jmp     short loc_12516 ;~ 01C2:2320
loc_12522:
	// 4923 
cs=0x1c2;eip=0x002322; 	X(MOV(word_14b53, 0x2D));	// 5595 mov     word_14B53, 2Dh ; '-' ;~ 01C2:2322
cs=0x1c2;eip=0x002328; 	T(CMP(bx, 0x1F4));	// 5596 cmp     bx, 1F4h ;~ 01C2:2328
cs=0x1c2;eip=0x00232c; 	J(JNC(locret_12535));	// 5597 jnb     short locret_12535 ;~ 01C2:232C
cs=0x1c2;eip=0x00232e; 	T(CMP(bx, 0x15));	// 5598 cmp     bx, 15h ;~ 01C2:232E
cs=0x1c2;eip=0x002331; 	J(JC(locret_12535));	// 5599 jb      short locret_12535 ;~ 01C2:2331
cs=0x1c2;eip=0x002333; 	J(JMP(loc_12536));	// 5600 jmp     short loc_12536 ;~ 01C2:2333
locret_12535:
	// 4924 
cs=0x1c2;eip=0x002335; 	R(RETN(0));	// 5605 retn ;~ 01C2:2335
loc_12536:
	// 4925 
cs=0x1c2;eip=0x002336; 	T(MOV(si, 0x844));	// 5609 mov     si, 844h ;~ 01C2:2336
loc_12539:
	// 4926 
cs=0x1c2;eip=0x002339; 	T(LODSW);	// 5612 lodsw ;~ 01C2:2339
cs=0x1c2;eip=0x00233a; 	T(ADD(si, 2));	// 5613 add     si, 2 ;~ 01C2:233A
cs=0x1c2;eip=0x00233d; 	T(CMP(ax, bx));	// 5614 cmp     ax, bx ;~ 01C2:233D
cs=0x1c2;eip=0x00233f; 	J(JC(loc_12539));	// 5615 jb      short loc_12539 ;~ 01C2:233F
cs=0x1c2;eip=0x002341; 	X(MOV(word_14b47, ax));	// 5616 mov     word_14B47, ax ;~ 01C2:2341
cs=0x1c2;eip=0x002344; 	X(MOV(word_14b51, ax));	// 5617 mov     word_14B51, ax ;~ 01C2:2344
cs=0x1c2;eip=0x002347; 	T(ADD(si, 0x0FFFE));	// 5618 add     si, 0FFFEh ;~ 01C2:2347
cs=0x1c2;eip=0x00234a; 	T(LODSW);	// 5619 lodsw ;~ 01C2:234A
cs=0x1c2;eip=0x00234b; 	X(MOV(word_14b5b, ax));	// 5620 mov     word_14B5B, ax ;~ 01C2:234B
cs=0x1c2;eip=0x00234e; 	T(ADD(si, 0x0FFF8));	// 5621 add     si, 0FFF8h ;~ 01C2:234E
cs=0x1c2;eip=0x002351; 	T(LODSW);	// 5622 lodsw ;~ 01C2:2351
cs=0x1c2;eip=0x002352; 	X(MOV(word_14b45, ax));	// 5623 mov     word_14B45, ax ;~ 01C2:2352
cs=0x1c2;eip=0x002355; 	T(LODSW);	// 5624 lodsw ;~ 01C2:2355
cs=0x1c2;eip=0x002356; 	X(MOV(word_14b57, ax));	// 5625 mov     word_14B57, ax ;~ 01C2:2356
cs=0x1c2;eip=0x002359; 	X(MOV(word_14b49, bx));	// 5626 mov     word_14B49, bx ;~ 01C2:2359
cs=0x1c2;eip=0x00235d; 	T(MOV(ax, dx));	// 5627 mov     ax, dx ;~ 01C2:235D
cs=0x1c2;eip=0x00235f; 	X(DIV1(byte_14d57));	// 5628 div     byte_14D57 ;~ 01C2:235F
cs=0x1c2;eip=0x002363; 	X(MOV(word_14b4b, 0));	// 5629 mov     word_14B4B, 0 ;~ 01C2:2363
cs=0x1c2;eip=0x002369; 	X(MOV(word_14b4d, 0x30));	// 5630 mov     word_14B4D, 30h ; '0' ;~ 01C2:2369
cs=0x1c2;eip=0x00236f; 	T(OR(ah, ah));	// 5631 or      ah, ah ;~ 01C2:236F
cs=0x1c2;eip=0x002371; 	J(JNZ(loc_1257b));	// 5632 jnz     short loc_1257B ;~ 01C2:2371
cs=0x1c2;eip=0x002373; 	T(OR(al, al));	// 5633 or      al, al ;~ 01C2:2373
cs=0x1c2;eip=0x002375; 	J(JZ(loc_1257b));	// 5634 jz      short loc_1257B ;~ 01C2:2375
cs=0x1c2;eip=0x002377; 	T(DEC(al));	// 5635 dec     al ;~ 01C2:2377
cs=0x1c2;eip=0x002379; 	T(MOV(ah, 0x30));	// 5636 mov     ah, 30h ; '0' ;~ 01C2:2379
loc_1257b:
	// 4927 
cs=0x1c2;eip=0x00237b; 	X(PUSH(ax));	// 5640 push    ax ;~ 01C2:237B
cs=0x1c2;eip=0x00237c; 	T(MOV(al, ah));	// 5641 mov     al, ah ;~ 01C2:237C
cs=0x1c2;eip=0x00237e; 	T(XOR(ah, ah));	// 5642 xor     ah, ah ;~ 01C2:237E
cs=0x1c2;eip=0x002380; 	X(MOV(word_14b4f, ax));	// 5643 mov     word_14B4F, ax ;~ 01C2:2380
cs=0x1c2;eip=0x002383; 	X(POP(ax));	// 5644 pop     ax ;~ 01C2:2383
cs=0x1c2;eip=0x002384; 	T(XOR(ah, ah));	// 5645 xor     ah, ah ;~ 01C2:2384
cs=0x1c2;eip=0x002386; 	X(MOV(word_14b5f, ax));	// 5646 mov     word_14B5F, ax ;~ 01C2:2386
cs=0x1c2;eip=0x002389; 	T(MOV(bx, word_14b45));	// 5647 mov     bx, word_14B45 ;~ 01C2:2389
cs=0x1c2;eip=0x00238d; 	X(MOV(word_14b51, bx));	// 5648 mov     word_14B51, bx ;~ 01C2:238D
cs=0x1c2;eip=0x002391; 	T(CMP(bx, word_14b53));	// 5649 cmp     bx, word_14B53 ;~ 01C2:2391
cs=0x1c2;eip=0x002395; 	J(JC(loc_1259d));	// 5650 jb      short loc_1259D ;~ 01C2:2395
cs=0x1c2;eip=0x002397; 	X(MUL1_1(byte_14d52));	// 5651 mul     byte_14D52 ;~ 01C2:2397
cs=0x1c2;eip=0x00239b; 	J(JMP(loc_125a1));	// 5652 jmp     short loc_125A1 ;~ 01C2:239B
loc_1259d:
	// 4928 
cs=0x1c2;eip=0x00239d; 	X(MUL1_1(byte_14d54));	// 5656 mul     byte_14D54 ;~ 01C2:239D
loc_125a1:
	// 4929 
cs=0x1c2;eip=0x0023a1; 	T(MOV(di, 0x0BC07));	// 5659 mov     di, 0BC07h ;~ 01C2:23A1
cs=0x1c2;eip=0x0023a4; 	T(MOV(si, word_14b57));	// 5660 mov     si, word_14B57 ;~ 01C2:23A4
cs=0x1c2;eip=0x0023a8; 	T(ADD(si, ax));	// 5661 add     si, ax ;~ 01C2:23A8
cs=0x1c2;eip=0x0023aa; 	J(CALL(sub_1232a,0));	// 5662 call    sub_1232A ;~ 01C2:23AA
cs=0x1c2;eip=0x0023ad; 	T(MOV(si, di));	// 5663 mov     si, di ;~ 01C2:23AD
cs=0x1c2;eip=0x0023af; 	X(MOV(word_14b57, si));	// 5664 mov     word_14B57, si ;~ 01C2:23AF
cs=0x1c2;eip=0x0023b3; 	T(ADD(si, 0x14));	// 5665 add     si, 14h ;~ 01C2:23B3
cs=0x1c2;eip=0x0023b6; 	X(MOV(word_14b59, si));	// 5666 mov     word_14B59, si ;~ 01C2:23B6
cs=0x1c2;eip=0x0023ba; 	T(MOV(ax, word_14b5f));	// 5667 mov     ax, word_14B5F ;~ 01C2:23BA
cs=0x1c2;eip=0x0023bd; 	T(MOV(bx, word_14b47));	// 5668 mov     bx, word_14B47 ;~ 01C2:23BD
cs=0x1c2;eip=0x0023c1; 	X(MOV(word_14b51, bx));	// 5669 mov     word_14B51, bx ;~ 01C2:23C1
cs=0x1c2;eip=0x0023c5; 	T(CMP(bx, word_14b53));	// 5670 cmp     bx, word_14B53 ;~ 01C2:23C5
cs=0x1c2;eip=0x0023c9; 	J(JC(loc_125d1));	// 5671 jb      short loc_125D1 ;~ 01C2:23C9
cs=0x1c2;eip=0x0023cb; 	X(MUL1_1(byte_14d52));	// 5672 mul     byte_14D52 ;~ 01C2:23CB
cs=0x1c2;eip=0x0023cf; 	J(JMP(loc_125d5));	// 5673 jmp     short loc_125D5 ;~ 01C2:23CF
loc_125d1:
	// 4930 
cs=0x1c2;eip=0x0023d1; 	X(MUL1_1(byte_14d54));	// 5677 mul     byte_14D54 ;~ 01C2:23D1
loc_125d5:
	// 4931 
cs=0x1c2;eip=0x0023d5; 	T(MOV(si, word_14b5b));	// 5680 mov     si, word_14B5B ;~ 01C2:23D5
cs=0x1c2;eip=0x0023d9; 	T(MOV(di, 0x0BCCF));	// 5681 mov     di, 0BCCFh ;~ 01C2:23D9
cs=0x1c2;eip=0x0023dc; 	T(ADD(si, ax));	// 5682 add     si, ax ;~ 01C2:23DC
cs=0x1c2;eip=0x0023de; 	J(CALL(sub_1232a,0));	// 5683 call    sub_1232A ;~ 01C2:23DE
cs=0x1c2;eip=0x0023e1; 	T(MOV(si, di));	// 5684 mov     si, di ;~ 01C2:23E1
cs=0x1c2;eip=0x0023e3; 	X(MOV(word_14b5b, si));	// 5685 mov     word_14B5B, si ;~ 01C2:23E3
cs=0x1c2;eip=0x0023e7; 	T(ADD(si, 0x14));	// 5686 add     si, 14h ;~ 01C2:23E7
cs=0x1c2;eip=0x0023ea; 	X(MOV(word_14b5d, si));	// 5687 mov     word_14B5D, si ;~ 01C2:23EA
cs=0x1c2;eip=0x0023ee; 	J(CALL(sub_1226d,0));	// 5688 call    sub_1226D ;~ 01C2:23EE
cs=0x1c2;eip=0x0023f1; 	T(TEST(byte_148d1, 0x0FF));	// 5689 test    byte_148D1, 0FFh ;~ 01C2:23F1
cs=0x1c2;eip=0x0023f6; 	J(JNZ(locret_12602));	// 5690 jnz     short locret_12602 ;~ 01C2:23F6
cs=0x1c2;eip=0x0023f8; 	T(MOV(di, 0x8A5));	// 5691 mov     di, 8A5h ;~ 01C2:23F8
cs=0x1c2;eip=0x0023fb; 	X(MOV(word_14b3d, di));	// 5692 mov     word_14B3D, di ;~ 01C2:23FB
cs=0x1c2;eip=0x0023ff; 	J(CALL(sub_121df,0));	// 5693 call    sub_121DF ;~ 01C2:23FF
locret_12602:
	// 4932 
cs=0x1c2;eip=0x002402; 	R(RETN(0));	// 5696 retn ;~ 01C2:2402

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_1250a: 	goto loc_1250a;
        case m2c::kloc_12516: 	goto loc_12516;
        case m2c::kloc_12522: 	goto loc_12522;
        case m2c::kloc_12536: 	goto loc_12536;
        case m2c::kloc_12539: 	goto loc_12539;
        case m2c::kloc_1257b: 	goto loc_1257b;
        case m2c::kloc_1259d: 	goto loc_1259d;
        case m2c::kloc_125a1: 	goto loc_125a1;
        case m2c::kloc_125d1: 	goto loc_125d1;
        case m2c::kloc_125d5: 	goto loc_125d5;
        case m2c::klocret_12535: 	goto locret_12535;
        case m2c::klocret_12602: 	goto locret_12602;
        case m2c::kret_1c2_22ff: 	goto ret_1c2_22ff;
        case m2c::ksub_124fa: 	goto sub_124fa;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12603(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12603:
    _begin:
cs=0x1c2;eip=0x002403; 	X(MOV(byte_153a3, 2));	// 5705 mov     byte_153A3, 2 ;~ 01C2:2403
ret_1c2_2408:
	// 4933 
cs=0x1c2;eip=0x002408; 	X(MOV(word_14b55, 0x10));	// 5706 mov     word_14B55, 10h ;~ 01C2:2408
cs=0x1c2;eip=0x00240e; 	X(MOV(byte_153a2, 0));	// 5707 mov     byte_153A2, 0 ;~ 01C2:240E
loc_12613:
	// 4934 
cs=0x1c2;eip=0x002413; 	T(TEST(dx, 0x8000));	// 5710 test    dx, 8000h ;~ 01C2:2413
cs=0x1c2;eip=0x002417; 	J(JZ(loc_1261f));	// 5711 jz      short loc_1261F ;~ 01C2:2417
cs=0x1c2;eip=0x002419; 	T(ADD(dx, 0x480));	// 5712 add     dx, 480h ;~ 01C2:2419
cs=0x1c2;eip=0x00241d; 	J(JMP(loc_12613));	// 5713 jmp     short loc_12613 ;~ 01C2:241D
loc_1261f:
	// 4935 
cs=0x1c2;eip=0x00241f; 	T(CMP(dx, 0x120));	// 5718 cmp     dx, 120h ;~ 01C2:241F
cs=0x1c2;eip=0x002423; 	J(JC(loc_1262b));	// 5719 jb      short loc_1262B ;~ 01C2:2423
cs=0x1c2;eip=0x002425; 	T(SUB(dx, 0x120));	// 5720 sub     dx, 120h ;~ 01C2:2425
cs=0x1c2;eip=0x002429; 	J(JMP(loc_1261f));	// 5721 jmp     short loc_1261F ;~ 01C2:2429
loc_1262b:
	// 4936 
cs=0x1c2;eip=0x00242b; 	X(MOV(word_14b53, 0x1E));	// 5725 mov     word_14B53, 1Eh ;~ 01C2:242B
cs=0x1c2;eip=0x002431; 	T(CMP(bx, 0x1F4));	// 5726 cmp     bx, 1F4h ;~ 01C2:2431
cs=0x1c2;eip=0x002435; 	J(JNC(locret_1263e));	// 5727 jnb     short locret_1263E ;~ 01C2:2435
cs=0x1c2;eip=0x002437; 	T(CMP(bx, 0x15));	// 5728 cmp     bx, 15h ;~ 01C2:2437
cs=0x1c2;eip=0x00243a; 	J(JC(locret_1263e));	// 5729 jb      short locret_1263E ;~ 01C2:243A
cs=0x1c2;eip=0x00243c; 	J(JMP(loc_1263f));	// 5730 jmp     short loc_1263F ;~ 01C2:243C
locret_1263e:
	// 4937 
cs=0x1c2;eip=0x00243e; 	R(RETN(0));	// 5735 retn ;~ 01C2:243E
loc_1263f:
	// 4938 
cs=0x1c2;eip=0x00243f; 	T(MOV(si, 0x860));	// 5739 mov     si, 860h ;~ 01C2:243F
loc_12642:
	// 4939 
cs=0x1c2;eip=0x002442; 	T(LODSW);	// 5742 lodsw ;~ 01C2:2442
cs=0x1c2;eip=0x002443; 	T(ADD(si, 2));	// 5743 add     si, 2 ;~ 01C2:2443
cs=0x1c2;eip=0x002446; 	T(CMP(ax, bx));	// 5744 cmp     ax, bx ;~ 01C2:2446
cs=0x1c2;eip=0x002448; 	J(JC(loc_12642));	// 5745 jb      short loc_12642 ;~ 01C2:2448
cs=0x1c2;eip=0x00244a; 	X(MOV(word_14b47, ax));	// 5746 mov     word_14B47, ax ;~ 01C2:244A
cs=0x1c2;eip=0x00244d; 	X(MOV(word_14b51, ax));	// 5747 mov     word_14B51, ax ;~ 01C2:244D
cs=0x1c2;eip=0x002450; 	T(ADD(si, 0x0FFFE));	// 5748 add     si, 0FFFEh ;~ 01C2:2450
cs=0x1c2;eip=0x002453; 	T(LODSW);	// 5749 lodsw ;~ 01C2:2453
cs=0x1c2;eip=0x002454; 	X(MOV(word_14b5b, ax));	// 5750 mov     word_14B5B, ax ;~ 01C2:2454
cs=0x1c2;eip=0x002457; 	T(ADD(si, 0x0FFF8));	// 5751 add     si, 0FFF8h ;~ 01C2:2457
cs=0x1c2;eip=0x00245a; 	T(LODSW);	// 5752 lodsw ;~ 01C2:245A
cs=0x1c2;eip=0x00245b; 	X(MOV(word_14b45, ax));	// 5753 mov     word_14B45, ax ;~ 01C2:245B
cs=0x1c2;eip=0x00245e; 	T(LODSW);	// 5754 lodsw ;~ 01C2:245E
cs=0x1c2;eip=0x00245f; 	X(MOV(word_14b57, ax));	// 5755 mov     word_14B57, ax ;~ 01C2:245F
cs=0x1c2;eip=0x002462; 	X(MOV(word_14b49, bx));	// 5756 mov     word_14B49, bx ;~ 01C2:2462
cs=0x1c2;eip=0x002466; 	T(MOV(ax, dx));	// 5757 mov     ax, dx ;~ 01C2:2466
cs=0x1c2;eip=0x002468; 	X(DIV1(byte_14d57));	// 5758 div     byte_14D57 ;~ 01C2:2468
cs=0x1c2;eip=0x00246c; 	X(MOV(word_14b4b, 0));	// 5759 mov     word_14B4B, 0 ;~ 01C2:246C
cs=0x1c2;eip=0x002472; 	X(MOV(word_14b4d, 0x30));	// 5760 mov     word_14B4D, 30h ; '0' ;~ 01C2:2472
cs=0x1c2;eip=0x002478; 	T(OR(ah, ah));	// 5761 or      ah, ah ;~ 01C2:2478
cs=0x1c2;eip=0x00247a; 	J(JNZ(loc_12684));	// 5762 jnz     short loc_12684 ;~ 01C2:247A
cs=0x1c2;eip=0x00247c; 	T(OR(al, al));	// 5763 or      al, al ;~ 01C2:247C
cs=0x1c2;eip=0x00247e; 	J(JZ(loc_12684));	// 5764 jz      short loc_12684 ;~ 01C2:247E
cs=0x1c2;eip=0x002480; 	T(DEC(al));	// 5765 dec     al ;~ 01C2:2480
cs=0x1c2;eip=0x002482; 	T(MOV(ah, 0x30));	// 5766 mov     ah, 30h ; '0' ;~ 01C2:2482
loc_12684:
	// 4940 
cs=0x1c2;eip=0x002484; 	X(PUSH(ax));	// 5770 push    ax ;~ 01C2:2484
cs=0x1c2;eip=0x002485; 	T(MOV(al, ah));	// 5771 mov     al, ah ;~ 01C2:2485
cs=0x1c2;eip=0x002487; 	T(XOR(ah, ah));	// 5772 xor     ah, ah ;~ 01C2:2487
cs=0x1c2;eip=0x002489; 	X(MOV(word_14b4f, ax));	// 5773 mov     word_14B4F, ax ;~ 01C2:2489
cs=0x1c2;eip=0x00248c; 	X(POP(ax));	// 5774 pop     ax ;~ 01C2:248C
cs=0x1c2;eip=0x00248d; 	T(XOR(ah, ah));	// 5775 xor     ah, ah ;~ 01C2:248D
cs=0x1c2;eip=0x00248f; 	X(MOV(word_14b5f, ax));	// 5776 mov     word_14B5F, ax ;~ 01C2:248F
cs=0x1c2;eip=0x002492; 	T(MOV(bx, word_14b45));	// 5777 mov     bx, word_14B45 ;~ 01C2:2492
cs=0x1c2;eip=0x002496; 	X(MOV(word_14b51, bx));	// 5778 mov     word_14B51, bx ;~ 01C2:2496
cs=0x1c2;eip=0x00249a; 	T(CMP(bx, word_14b53));	// 5779 cmp     bx, word_14B53 ;~ 01C2:249A
cs=0x1c2;eip=0x00249e; 	J(JC(loc_126a6));	// 5780 jb      short loc_126A6 ;~ 01C2:249E
cs=0x1c2;eip=0x0024a0; 	X(MUL1_1(byte_14d53));	// 5781 mul     byte_14D53 ;~ 01C2:24A0
cs=0x1c2;eip=0x0024a4; 	J(JMP(loc_126aa));	// 5782 jmp     short loc_126AA ;~ 01C2:24A4
loc_126a6:
	// 4941 
cs=0x1c2;eip=0x0024a6; 	X(MUL1_1(byte_14d55));	// 5786 mul     byte_14D55 ;~ 01C2:24A6
loc_126aa:
	// 4942 
cs=0x1c2;eip=0x0024aa; 	T(MOV(di, 0x0BC07));	// 5789 mov     di, 0BC07h ;~ 01C2:24AA
cs=0x1c2;eip=0x0024ad; 	T(MOV(si, word_14b57));	// 5790 mov     si, word_14B57 ;~ 01C2:24AD
cs=0x1c2;eip=0x0024b1; 	T(ADD(si, ax));	// 5791 add     si, ax ;~ 01C2:24B1
cs=0x1c2;eip=0x0024b3; 	J(CALL(sub_1232a,0));	// 5792 call    sub_1232A ;~ 01C2:24B3
cs=0x1c2;eip=0x0024b6; 	T(MOV(si, di));	// 5793 mov     si, di ;~ 01C2:24B6
cs=0x1c2;eip=0x0024b8; 	X(MOV(word_14b57, si));	// 5794 mov     word_14B57, si ;~ 01C2:24B8
cs=0x1c2;eip=0x0024bc; 	T(ADD(si, 0x20));	// 5795 add     si, 20h ; ' ' ;~ 01C2:24BC
cs=0x1c2;eip=0x0024bf; 	X(MOV(word_14b59, si));	// 5796 mov     word_14B59, si ;~ 01C2:24BF
cs=0x1c2;eip=0x0024c3; 	T(MOV(ax, word_14b5f));	// 5797 mov     ax, word_14B5F ;~ 01C2:24C3
cs=0x1c2;eip=0x0024c6; 	T(MOV(bx, word_14b47));	// 5798 mov     bx, word_14B47 ;~ 01C2:24C6
cs=0x1c2;eip=0x0024ca; 	X(MOV(word_14b51, bx));	// 5799 mov     word_14B51, bx ;~ 01C2:24CA
cs=0x1c2;eip=0x0024ce; 	T(CMP(bx, word_14b53));	// 5800 cmp     bx, word_14B53 ;~ 01C2:24CE
cs=0x1c2;eip=0x0024d2; 	J(JC(loc_126da));	// 5801 jb      short loc_126DA ;~ 01C2:24D2
cs=0x1c2;eip=0x0024d4; 	X(MUL1_1(byte_14d53));	// 5802 mul     byte_14D53 ;~ 01C2:24D4
cs=0x1c2;eip=0x0024d8; 	J(JMP(loc_126de));	// 5803 jmp     short loc_126DE ;~ 01C2:24D8
loc_126da:
	// 4943 
cs=0x1c2;eip=0x0024da; 	X(MUL1_1(byte_14d55));	// 5807 mul     byte_14D55 ;~ 01C2:24DA
loc_126de:
	// 4944 
cs=0x1c2;eip=0x0024de; 	T(MOV(si, word_14b5b));	// 5810 mov     si, word_14B5B ;~ 01C2:24DE
cs=0x1c2;eip=0x0024e2; 	T(MOV(di, 0x0BCCF));	// 5811 mov     di, 0BCCFh ;~ 01C2:24E2
cs=0x1c2;eip=0x0024e5; 	T(ADD(si, ax));	// 5812 add     si, ax ;~ 01C2:24E5
cs=0x1c2;eip=0x0024e7; 	J(CALL(sub_1232a,0));	// 5813 call    sub_1232A ;~ 01C2:24E7
cs=0x1c2;eip=0x0024ea; 	T(MOV(si, di));	// 5814 mov     si, di ;~ 01C2:24EA
cs=0x1c2;eip=0x0024ec; 	X(MOV(word_14b5b, si));	// 5815 mov     word_14B5B, si ;~ 01C2:24EC
cs=0x1c2;eip=0x0024f0; 	T(ADD(si, 0x20));	// 5816 add     si, 20h ; ' ' ;~ 01C2:24F0
cs=0x1c2;eip=0x0024f3; 	X(MOV(word_14b5d, si));	// 5817 mov     word_14B5D, si ;~ 01C2:24F3
cs=0x1c2;eip=0x0024f7; 	J(CALL(sub_1226d,0));	// 5818 call    sub_1226D ;~ 01C2:24F7
cs=0x1c2;eip=0x0024fa; 	T(TEST(byte_148d1, 0x0FF));	// 5819 test    byte_148D1, 0FFh ;~ 01C2:24FA
cs=0x1c2;eip=0x0024ff; 	J(JNZ(locret_1270b));	// 5820 jnz     short locret_1270B ;~ 01C2:24FF
cs=0x1c2;eip=0x002501; 	T(MOV(di, 0x8B6));	// 5821 mov     di, 8B6h ;~ 01C2:2501
cs=0x1c2;eip=0x002504; 	X(MOV(word_14b3d, di));	// 5822 mov     word_14B3D, di ;~ 01C2:2504
cs=0x1c2;eip=0x002508; 	J(CALL(sub_121df,0));	// 5823 call    sub_121DF ;~ 01C2:2508
locret_1270b:
	// 4945 
cs=0x1c2;eip=0x00250b; 	R(RETN(0));	// 5826 retn ;~ 01C2:250B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_12613: 	goto loc_12613;
        case m2c::kloc_1261f: 	goto loc_1261f;
        case m2c::kloc_1262b: 	goto loc_1262b;
        case m2c::kloc_1263f: 	goto loc_1263f;
        case m2c::kloc_12642: 	goto loc_12642;
        case m2c::kloc_12684: 	goto loc_12684;
        case m2c::kloc_126a6: 	goto loc_126a6;
        case m2c::kloc_126aa: 	goto loc_126aa;
        case m2c::kloc_126da: 	goto loc_126da;
        case m2c::kloc_126de: 	goto loc_126de;
        case m2c::klocret_1263e: 	goto locret_1263e;
        case m2c::klocret_1270b: 	goto locret_1270b;
        case m2c::kret_1c2_2408: 	goto ret_1c2_2408;
        case m2c::ksub_12603: 	goto sub_12603;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg001_250c_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg001_250c_proc:
    _begin:
loc_1270c:
	// 4946 
cs=0x1c2;eip=0x00250c; 	X(MOV(byte_153a3, 2));	// 5832 mov     byte_153A3, 2 ;~ 01C2:250C
cs=0x1c2;eip=0x002511; 	X(MOV(word_14b55, 0x10));	// 5833 mov     word_14B55, 10h ;~ 01C2:2511
cs=0x1c2;eip=0x002517; 	X(MOV(byte_153a2, 0));	// 5834 mov     byte_153A2, 0 ;~ 01C2:2517
loc_1271c:
	// 4947 
cs=0x1c2;eip=0x00251c; 	T(TEST(dx, 0x8000));	// 5837 test    dx, 8000h ;~ 01C2:251C
cs=0x1c2;eip=0x002520; 	J(JZ(loc_12728));	// 5838 jz      short loc_12728 ;~ 01C2:2520
cs=0x1c2;eip=0x002522; 	T(ADD(dx, 0x480));	// 5839 add     dx, 480h ;~ 01C2:2522
cs=0x1c2;eip=0x002526; 	J(JMP(loc_1271c));	// 5840 jmp     short loc_1271C ;~ 01C2:2526
loc_12728:
	// 4948 
cs=0x1c2;eip=0x002528; 	T(CMP(dx, 0x120));	// 5845 cmp     dx, 120h ;~ 01C2:2528
cs=0x1c2;eip=0x00252c; 	J(JC(loc_12734));	// 5846 jb      short loc_12734 ;~ 01C2:252C
cs=0x1c2;eip=0x00252e; 	T(SUB(dx, 0x120));	// 5847 sub     dx, 120h ;~ 01C2:252E
cs=0x1c2;eip=0x002532; 	J(JMP(loc_12728));	// 5848 jmp     short loc_12728 ;~ 01C2:2532
loc_12734:
	// 4949 
cs=0x1c2;eip=0x002534; 	X(MOV(word_14b53, 0x1E));	// 5852 mov     word_14B53, 1Eh ;~ 01C2:2534
cs=0x1c2;eip=0x00253a; 	T(CMP(bx, 0x1F4));	// 5853 cmp     bx, 1F4h ;~ 01C2:253A
cs=0x1c2;eip=0x00253e; 	J(JNC(locret_12747));	// 5854 jnb     short locret_12747 ;~ 01C2:253E
cs=0x1c2;eip=0x002540; 	T(CMP(bx, 0x15));	// 5855 cmp     bx, 15h ;~ 01C2:2540
cs=0x1c2;eip=0x002543; 	J(JC(locret_12747));	// 5856 jb      short locret_12747 ;~ 01C2:2543
cs=0x1c2;eip=0x002545; 	J(JMP(loc_12748));	// 5857 jmp     short loc_12748 ;~ 01C2:2545
locret_12747:
	// 4950 
cs=0x1c2;eip=0x002547; 	R(RETN(0));	// 5862 retn ;~ 01C2:2547
loc_12748:
	// 4951 
cs=0x1c2;eip=0x002548; 	T(MOV(si, 0x87C));	// 5866 mov     si, 87Ch ;~ 01C2:2548
loc_1274b:
	// 4952 
cs=0x1c2;eip=0x00254b; 	T(LODSW);	// 5869 lodsw ;~ 01C2:254B
cs=0x1c2;eip=0x00254c; 	T(ADD(si, 2));	// 5870 add     si, 2 ;~ 01C2:254C
cs=0x1c2;eip=0x00254f; 	T(CMP(ax, bx));	// 5871 cmp     ax, bx ;~ 01C2:254F
cs=0x1c2;eip=0x002551; 	J(JC(loc_1274b));	// 5872 jb      short loc_1274B ;~ 01C2:2551
cs=0x1c2;eip=0x002553; 	X(MOV(word_14b47, ax));	// 5873 mov     word_14B47, ax ;~ 01C2:2553
cs=0x1c2;eip=0x002556; 	X(MOV(word_14b51, ax));	// 5874 mov     word_14B51, ax ;~ 01C2:2556
cs=0x1c2;eip=0x002559; 	T(ADD(si, 0x0FFFE));	// 5875 add     si, 0FFFEh ;~ 01C2:2559
cs=0x1c2;eip=0x00255c; 	T(LODSW);	// 5876 lodsw ;~ 01C2:255C
cs=0x1c2;eip=0x00255d; 	X(MOV(word_14b5b, ax));	// 5877 mov     word_14B5B, ax ;~ 01C2:255D
cs=0x1c2;eip=0x002560; 	T(ADD(si, 0x0FFF8));	// 5878 add     si, 0FFF8h ;~ 01C2:2560
cs=0x1c2;eip=0x002563; 	T(LODSW);	// 5879 lodsw ;~ 01C2:2563
cs=0x1c2;eip=0x002564; 	X(MOV(word_14b45, ax));	// 5880 mov     word_14B45, ax ;~ 01C2:2564
cs=0x1c2;eip=0x002567; 	T(LODSW);	// 5881 lodsw ;~ 01C2:2567
cs=0x1c2;eip=0x002568; 	X(MOV(word_14b57, ax));	// 5882 mov     word_14B57, ax ;~ 01C2:2568
cs=0x1c2;eip=0x00256b; 	X(MOV(word_14b49, bx));	// 5883 mov     word_14B49, bx ;~ 01C2:256B
cs=0x1c2;eip=0x00256f; 	T(MOV(ax, dx));	// 5884 mov     ax, dx ;~ 01C2:256F
cs=0x1c2;eip=0x002571; 	X(DIV1(byte_14d57));	// 5885 div     byte_14D57 ;~ 01C2:2571
cs=0x1c2;eip=0x002575; 	X(MOV(word_14b4b, 0));	// 5886 mov     word_14B4B, 0 ;~ 01C2:2575
cs=0x1c2;eip=0x00257b; 	X(MOV(word_14b4d, 0x30));	// 5887 mov     word_14B4D, 30h ; '0' ;~ 01C2:257B
cs=0x1c2;eip=0x002581; 	T(OR(ah, ah));	// 5888 or      ah, ah ;~ 01C2:2581
cs=0x1c2;eip=0x002583; 	J(JNZ(loc_1278d));	// 5889 jnz     short loc_1278D ;~ 01C2:2583
cs=0x1c2;eip=0x002585; 	T(OR(al, al));	// 5890 or      al, al ;~ 01C2:2585
cs=0x1c2;eip=0x002587; 	J(JZ(loc_1278d));	// 5891 jz      short loc_1278D ;~ 01C2:2587
cs=0x1c2;eip=0x002589; 	T(DEC(al));	// 5892 dec     al ;~ 01C2:2589
cs=0x1c2;eip=0x00258b; 	T(MOV(ah, 0x30));	// 5893 mov     ah, 30h ; '0' ;~ 01C2:258B
loc_1278d:
	// 4953 
cs=0x1c2;eip=0x00258d; 	X(PUSH(ax));	// 5897 push    ax ;~ 01C2:258D
cs=0x1c2;eip=0x00258e; 	T(MOV(al, ah));	// 5898 mov     al, ah ;~ 01C2:258E
cs=0x1c2;eip=0x002590; 	T(XOR(ah, ah));	// 5899 xor     ah, ah ;~ 01C2:2590
cs=0x1c2;eip=0x002592; 	X(MOV(word_14b4f, ax));	// 5900 mov     word_14B4F, ax ;~ 01C2:2592
cs=0x1c2;eip=0x002595; 	X(POP(ax));	// 5901 pop     ax ;~ 01C2:2595
cs=0x1c2;eip=0x002596; 	T(XOR(ah, ah));	// 5902 xor     ah, ah ;~ 01C2:2596
cs=0x1c2;eip=0x002598; 	X(MOV(word_14b5f, ax));	// 5903 mov     word_14B5F, ax ;~ 01C2:2598
cs=0x1c2;eip=0x00259b; 	T(MOV(bx, word_14b45));	// 5904 mov     bx, word_14B45 ;~ 01C2:259B
cs=0x1c2;eip=0x00259f; 	X(MOV(word_14b51, bx));	// 5905 mov     word_14B51, bx ;~ 01C2:259F
cs=0x1c2;eip=0x0025a3; 	T(CMP(bx, word_14b53));	// 5906 cmp     bx, word_14B53 ;~ 01C2:25A3
cs=0x1c2;eip=0x0025a7; 	J(JC(loc_127af));	// 5907 jb      short loc_127AF ;~ 01C2:25A7
cs=0x1c2;eip=0x0025a9; 	X(MUL1_1(byte_14d53));	// 5908 mul     byte_14D53 ;~ 01C2:25A9
cs=0x1c2;eip=0x0025ad; 	J(JMP(loc_127b3));	// 5909 jmp     short loc_127B3 ;~ 01C2:25AD
loc_127af:
	// 4954 
cs=0x1c2;eip=0x0025af; 	X(MUL1_1(byte_14d55));	// 5913 mul     byte_14D55 ;~ 01C2:25AF
loc_127b3:
	// 4955 
cs=0x1c2;eip=0x0025b3; 	T(MOV(di, 0x0BC07));	// 5916 mov     di, 0BC07h ;~ 01C2:25B3
cs=0x1c2;eip=0x0025b6; 	T(MOV(si, word_14b57));	// 5917 mov     si, word_14B57 ;~ 01C2:25B6
cs=0x1c2;eip=0x0025ba; 	T(ADD(si, ax));	// 5918 add     si, ax ;~ 01C2:25BA
cs=0x1c2;eip=0x0025bc; 	J(CALL(sub_1232a,0));	// 5919 call    sub_1232A ;~ 01C2:25BC
cs=0x1c2;eip=0x0025bf; 	T(MOV(si, di));	// 5920 mov     si, di ;~ 01C2:25BF
cs=0x1c2;eip=0x0025c1; 	X(MOV(word_14b57, si));	// 5921 mov     word_14B57, si ;~ 01C2:25C1
cs=0x1c2;eip=0x0025c5; 	T(ADD(si, 0x20));	// 5922 add     si, 20h ; ' ' ;~ 01C2:25C5
cs=0x1c2;eip=0x0025c8; 	X(MOV(word_14b59, si));	// 5923 mov     word_14B59, si ;~ 01C2:25C8
cs=0x1c2;eip=0x0025cc; 	T(MOV(ax, word_14b5f));	// 5924 mov     ax, word_14B5F ;~ 01C2:25CC
cs=0x1c2;eip=0x0025cf; 	T(MOV(bx, word_14b47));	// 5925 mov     bx, word_14B47 ;~ 01C2:25CF
cs=0x1c2;eip=0x0025d3; 	X(MOV(word_14b51, bx));	// 5926 mov     word_14B51, bx ;~ 01C2:25D3
cs=0x1c2;eip=0x0025d7; 	T(CMP(bx, word_14b53));	// 5927 cmp     bx, word_14B53 ;~ 01C2:25D7
cs=0x1c2;eip=0x0025db; 	J(JC(loc_127e3));	// 5928 jb      short loc_127E3 ;~ 01C2:25DB
cs=0x1c2;eip=0x0025dd; 	X(MUL1_1(byte_14d53));	// 5929 mul     byte_14D53 ;~ 01C2:25DD
cs=0x1c2;eip=0x0025e1; 	J(JMP(loc_127e7));	// 5930 jmp     short loc_127E7 ;~ 01C2:25E1
loc_127e3:
	// 4956 
cs=0x1c2;eip=0x0025e3; 	X(MUL1_1(byte_14d55));	// 5934 mul     byte_14D55 ;~ 01C2:25E3
loc_127e7:
	// 4957 
cs=0x1c2;eip=0x0025e7; 	T(MOV(si, word_14b5b));	// 5937 mov     si, word_14B5B ;~ 01C2:25E7
cs=0x1c2;eip=0x0025eb; 	T(MOV(di, 0x0BCCF));	// 5938 mov     di, 0BCCFh ;~ 01C2:25EB
cs=0x1c2;eip=0x0025ee; 	T(ADD(si, ax));	// 5939 add     si, ax ;~ 01C2:25EE
cs=0x1c2;eip=0x0025f0; 	J(CALL(sub_1232a,0));	// 5940 call    sub_1232A ;~ 01C2:25F0
cs=0x1c2;eip=0x0025f3; 	T(MOV(si, di));	// 5941 mov     si, di ;~ 01C2:25F3
cs=0x1c2;eip=0x0025f5; 	X(MOV(word_14b5b, si));	// 5942 mov     word_14B5B, si ;~ 01C2:25F5
cs=0x1c2;eip=0x0025f9; 	T(ADD(si, 0x20));	// 5943 add     si, 20h ; ' ' ;~ 01C2:25F9
cs=0x1c2;eip=0x0025fc; 	X(MOV(word_14b5d, si));	// 5944 mov     word_14B5D, si ;~ 01C2:25FC
cs=0x1c2;eip=0x002600; 	J(CALL(sub_1226d,0));	// 5945 call    sub_1226D ;~ 01C2:2600
cs=0x1c2;eip=0x002603; 	T(MOV(di, 0x8CF));	// 5946 mov     di, 8CFh ;~ 01C2:2603
cs=0x1c2;eip=0x002606; 	X(MOV(word_14b3d, di));	// 5947 mov     word_14B3D, di ;~ 01C2:2606
cs=0x1c2;eip=0x00260a; 	J(CALL(sub_121df,0));	// 5948 call    sub_121DF ;~ 01C2:260A
cs=0x1c2;eip=0x00260d; 	R(RETN(0));	// 5949 retn ;~ 01C2:260D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_1271c: 	goto loc_1271c;
        case m2c::kloc_12728: 	goto loc_12728;
        case m2c::kloc_12734: 	goto loc_12734;
        case m2c::kloc_12748: 	goto loc_12748;
        case m2c::kloc_1274b: 	goto loc_1274b;
        case m2c::kloc_1278d: 	goto loc_1278d;
        case m2c::kloc_127af: 	goto loc_127af;
        case m2c::kloc_127b3: 	goto loc_127b3;
        case m2c::kloc_127e3: 	goto loc_127e3;
        case m2c::kloc_127e7: 	goto loc_127e7;
        case m2c::klocret_12747: 	goto locret_12747;
        case m2c::kseg001_250c_proc: 	goto seg001_250c_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1280e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1280e:
    _begin:
cs=0x1c2;eip=0x00260e; 	X(MOV(byte_153a3, 0));	// 5956 mov     byte_153A3, 0 ;~ 01C2:260E
ret_1c2_2613:
	// 4958 
cs=0x1c2;eip=0x002613; 	X(MOV(byte_153a2, 0));	// 5957 mov     byte_153A2, 0 ;~ 01C2:2613
cs=0x1c2;eip=0x002618; 	T(MOV(di, 0x0BBA3));	// 5958 mov     di, 0BBA3h ;~ 01C2:2618
cs=0x1c2;eip=0x00261b; 	T(MOV(si, 0x0A76C));	// 5959 mov     si, 0A76Ch ;~ 01C2:261B
cs=0x1c2;eip=0x00261e; 	T(MOV(cx, 0x7C));	// 5960 mov     cx, 7Ch ; '|' ;~ 01C2:261E
loc_12821:
	// 4959 
cs=0x1c2;eip=0x002621; 	T(LODSB);	// 5963 lodsb ;~ 01C2:2621
cs=0x1c2;eip=0x002622; 	T(CBW);	// 5964 cbw ;~ 01C2:2622
cs=0x1c2;eip=0x002623; 	X(STOSW);	// 5965 stosw ;~ 01C2:2623
cs=0x1c2;eip=0x002624; 	J(LOOP(loc_12821));	// 5966 loop    loc_12821 ;~ 01C2:2624
cs=0x1c2;eip=0x002626; 	T(MOV(di, 0x8E8));	// 5967 mov     di, 8E8h ;~ 01C2:2626
cs=0x1c2;eip=0x002629; 	X(MOV(word_14b3d, di));	// 5968 mov     word_14B3D, di ;~ 01C2:2629
cs=0x1c2;eip=0x00262d; 	J(CALL(sub_121df,0));	// 5969 call    sub_121DF ;~ 01C2:262D
cs=0x1c2;eip=0x002630; 	R(RETN(0));	// 5970 retn ;~ 01C2:2630

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_12821: 	goto loc_12821;
        case m2c::kret_1c2_2613: 	goto ret_1c2_2613;
        case m2c::ksub_1280e: 	goto sub_1280e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12831(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12831:
    _begin:
cs=0x1c2;eip=0x002631; 	J(CALL(sub_1372f,0));	// 5978 call    sub_1372F ;~ 01C2:2631
ret_1c2_2634:
	// 4960 
cs=0x1c2;eip=0x002634; 	X(MOV(word_14b3f, 0));	// 5979 mov     word_14B3F, 0 ;~ 01C2:2634
cs=0x1c2;eip=0x00263a; 	X(MOV(word_14b41, 0x0FFC4));	// 5980 mov     word_14B41, 0FFC4h ;~ 01C2:263A
cs=0x1c2;eip=0x002640; 	T(MOV(ax, word_153be));	// 5981 mov     ax, word_153BE ;~ 01C2:2640
cs=0x1c2;eip=0x002643; 	X(PUSH(ax));	// 5982 push    ax ;~ 01C2:2643
cs=0x1c2;eip=0x002644; 	X(MOV(word_153be, 0x0FF9E));	// 5983 mov     word_153BE, 0FF9Eh ;~ 01C2:2644
cs=0x1c2;eip=0x00264a; 	J(CALL(sub_1280e,0));	// 5984 call    sub_1280E ;~ 01C2:264A
cs=0x1c2;eip=0x00264d; 	T(MOV(bx, 0x5A));	// 5985 mov     bx, 5Ah ; 'Z' ;~ 01C2:264D
cs=0x1c2;eip=0x002650; 	T(MOV(dx, 0));	// 5986 mov     dx, 0 ;~ 01C2:2650
cs=0x1c2;eip=0x002653; 	X(MOV(word_14b41, 0x0FFE4));	// 5987 mov     word_14B41, 0FFE4h ;~ 01C2:2653
cs=0x1c2;eip=0x002659; 	J(CALL(sub_11d70,0));	// 5988 call    sub_11D70 ;~ 01C2:2659
cs=0x1c2;eip=0x00265c; 	T(MOV(ax, 0x0A));	// 5989 mov     ax, 0Ah ;~ 01C2:265C
cs=0x1c2;eip=0x00265f; 	T(MOV(bx, 0x82));	// 5990 mov     bx, 82h ; '‚' ;~ 01C2:265F
cs=0x1c2;eip=0x002662; 	J(CALL(sub_128a1,0));	// 5991 call    sub_128A1 ;~ 01C2:2662
cs=0x1c2;eip=0x002665; 	X(POP(ax));	// 5992 pop     ax ;~ 01C2:2665
cs=0x1c2;eip=0x002666; 	X(MOV(word_153be, ax));	// 5993 mov     word_153BE, ax ;~ 01C2:2666
cs=0x1c2;eip=0x002669; 	X(MOV(word_14b41, 0));	// 5994 mov     word_14B41, 0 ;~ 01C2:2669
cs=0x1c2;eip=0x00266f; 	R(RETN(0));	// 5995 retn ;~ 01C2:266F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_2634: 	goto ret_1c2_2634;
        case m2c::ksub_12831: 	goto sub_12831;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12870(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12870:
    _begin:
cs=0x1c2;eip=0x002670; 	J(CALL(sub_1372f,0));	// 6003 call    sub_1372F ;~ 01C2:2670
ret_1c2_2673:
	// 4961 
cs=0x1c2;eip=0x002673; 	X(MOV(word_14b3f, 0));	// 6004 mov     word_14B3F, 0 ;~ 01C2:2673
cs=0x1c2;eip=0x002679; 	X(MOV(word_14b41, 0x0FFF0));	// 6005 mov     word_14B41, 0FFF0h ;~ 01C2:2679
cs=0x1c2;eip=0x00267f; 	J(CALL(sub_1280e,0));	// 6006 call    sub_1280E ;~ 01C2:267F
cs=0x1c2;eip=0x002682; 	T(MOV(bx, 0x5A));	// 6007 mov     bx, 5Ah ; 'Z' ;~ 01C2:2682
cs=0x1c2;eip=0x002685; 	T(MOV(dx, 0));	// 6008 mov     dx, 0 ;~ 01C2:2685
cs=0x1c2;eip=0x002688; 	X(MOV(word_14b41, 0x0A));	// 6009 mov     word_14B41, 0Ah ;~ 01C2:2688
cs=0x1c2;eip=0x00268e; 	J(CALL(sub_11d70,0));	// 6010 call    sub_11D70 ;~ 01C2:268E
cs=0x1c2;eip=0x002691; 	T(MOV(ax, 0x38));	// 6011 mov     ax, 38h ; '8' ;~ 01C2:2691
cs=0x1c2;eip=0x002694; 	T(MOV(bx, 0x64));	// 6012 mov     bx, 64h ; 'd' ;~ 01C2:2694
cs=0x1c2;eip=0x002697; 	J(CALL(sub_128a1,0));	// 6013 call    sub_128A1 ;~ 01C2:2697
cs=0x1c2;eip=0x00269a; 	X(MOV(word_14b41, 0));	// 6014 mov     word_14B41, 0 ;~ 01C2:269A
cs=0x1c2;eip=0x0026a0; 	R(RETN(0));	// 6015 retn ;~ 01C2:26A0

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_2673: 	goto ret_1c2_2673;
        case m2c::ksub_12870: 	goto sub_12870;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_128da(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_128da:
    _begin:
cs=0x1c2;eip=0x0026da; 	T(MOV(ax, word_14af6));	// 6068 mov     ax, word_14AF6 ;~ 01C2:26DA
ret_1c2_26dd:
	// 4966 
cs=0x1c2;eip=0x0026dd; 	T(CMP(ax, 0x2C4));	// 6069 cmp     ax, 2C4h ;~ 01C2:26DD
cs=0x1c2;eip=0x0026e0; 	J(JNC(loc_128e7));	// 6070 jnb     short loc_128E7 ;~ 01C2:26E0
cs=0x1c2;eip=0x0026e2; 	T(CMP(ax, 0x130));	// 6071 cmp     ax, 130h ;~ 01C2:26E2
cs=0x1c2;eip=0x0026e5; 	J(JNC(loc_128ea));	// 6072 jnb     short loc_128EA ;~ 01C2:26E5
loc_128e7:
	// 4967 
cs=0x1c2;eip=0x0026e7; 	J(JMP(locret_1297c));	// 6075 jmp     locret_1297C ;~ 01C2:26E7
loc_128ea:
	// 4968 
cs=0x1c2;eip=0x0026ea; 	T(MOV(si, word_14d6e));	// 6079 mov     si, word_14D6E ;~ 01C2:26EA
cs=0x1c2;eip=0x0026ee; 	T(MOV(bp, 0x0A50));	// 6080 mov     bp, 0A50h ;~ 01C2:26EE
cs=0x1c2;eip=0x0026f1; 	T(MOV(dx, 0x0AA));	// 6081 mov     dx, 0AAh ; 'ª' ;~ 01C2:26F1
cs=0x1c2;eip=0x0026f4; 	T(SHR(ax, 1));	// 6082 shr     ax, 1 ;~ 01C2:26F4
cs=0x1c2;eip=0x0026f6; 	T(SHR(ax, 1));	// 6083 shr     ax, 1 ;~ 01C2:26F6
cs=0x1c2;eip=0x0026f8; 	T(SUB(dx, ax));	// 6084 sub     dx, ax ;~ 01C2:26F8
cs=0x1c2;eip=0x0026fa; 	T(XOR(bh, bh));	// 6085 xor     bh, bh ;~ 01C2:26FA
loc_128fc:
	// 4969 
cs=0x1c2;eip=0x0026fc; 	T(LODSW);	// 6089 lodsw ;~ 01C2:26FC
cs=0x1c2;eip=0x0026fd; 	T(CMP(ax, 0x0FFFF));	// 6090 cmp     ax, 0FFFFh ;~ 01C2:26FD
cs=0x1c2;eip=0x002700; 	J(JZ(loc_12935));	// 6091 jz      short loc_12935 ;~ 01C2:2700
cs=0x1c2;eip=0x002702; 	T(MOV(dh, ah));	// 6092 mov     dh, ah ;~ 01C2:2702
cs=0x1c2;eip=0x002704; 	T(SAR(ah, 1));	// 6093 sar     ah, 1 ;~ 01C2:2704
cs=0x1c2;eip=0x002706; 	T(SAR(ah, 1));	// 6094 sar     ah, 1 ;~ 01C2:2706
cs=0x1c2;eip=0x002708; 	T(ADD(ah, dl));	// 6095 add     ah, dl ;~ 01C2:2708
cs=0x1c2;eip=0x00270a; 	T(CMP(ah, 0x50));	// 6096 cmp     ah, 50h ; 'P' ;~ 01C2:270A
cs=0x1c2;eip=0x00270d; 	J(JNC(loc_128fc));	// 6097 jnb     short loc_128FC ;~ 01C2:270D
cs=0x1c2;eip=0x00270f; 	T(OR(ah, ah));	// 6098 or      ah, ah ;~ 01C2:270F
cs=0x1c2;eip=0x002711; 	J(JS(loc_128fc));	// 6099 js      short loc_128FC ;~ 01C2:2711
cs=0x1c2;eip=0x002713; 	T(MOV(bl, ah));	// 6100 mov     bl, ah ;~ 01C2:2713
cs=0x1c2;eip=0x002715; 	T(XOR(ah, ah));	// 6101 xor     ah, ah ;~ 01C2:2715
cs=0x1c2;eip=0x002717; 	X(MUL1_1(byte_14d56));	// 6102 mul     byte_14D56 ;~ 01C2:2717
cs=0x1c2;eip=0x00271b; 	T(MOV(di, bp));	// 6103 mov     di, bp ;~ 01C2:271B
cs=0x1c2;eip=0x00271d; 	T(ADD(di, ax));	// 6104 add     di, ax ;~ 01C2:271D
cs=0x1c2;eip=0x00271f; 	T(ADD(di, bx));	// 6105 add     di, bx ;~ 01C2:271F
cs=0x1c2;eip=0x002721; 	T(MOV(bl, dh));	// 6106 mov     bl, dh ;~ 01C2:2721
cs=0x1c2;eip=0x002723; 	T(AND(bx, 3));	// 6107 and     bx, 3 ;~ 01C2:2723
cs=0x1c2;eip=0x002727; 	T(MOV(al, *(raddr(es,di))));	// 6108 mov     al, es:[di] ;~ 01C2:2727
cs=0x1c2;eip=0x00272a; 	T(AND(al, *(raddr(ds,bx+0x726))));	// 6109 and     al, [bx+726h] ;~ 01C2:272A
cs=0x1c2;eip=0x00272e; 	T(OR(al, *(raddr(ds,bx+0x72A))));	// 6110 or      al, [bx+72Ah] ;~ 01C2:272E
cs=0x1c2;eip=0x002732; 	X(STOSB);	// 6111 stosb ;~ 01C2:2732
cs=0x1c2;eip=0x002733; 	J(JMP(loc_128fc));	// 6112 jmp     short loc_128FC ;~ 01C2:2733
loc_12935:
	// 4970 
cs=0x1c2;eip=0x002735; 	T(LODSW);	// 6117 lodsw ;~ 01C2:2735
cs=0x1c2;eip=0x002736; 	T(CMP(ax, 0x0FFFF));	// 6118 cmp     ax, 0FFFFh ;~ 01C2:2736
cs=0x1c2;eip=0x002739; 	J(JZ(loc_1296e));	// 6119 jz      short loc_1296E ;~ 01C2:2739
cs=0x1c2;eip=0x00273b; 	T(MOV(dh, ah));	// 6120 mov     dh, ah ;~ 01C2:273B
cs=0x1c2;eip=0x00273d; 	T(SAR(ah, 1));	// 6121 sar     ah, 1 ;~ 01C2:273D
cs=0x1c2;eip=0x00273f; 	T(SAR(ah, 1));	// 6122 sar     ah, 1 ;~ 01C2:273F
cs=0x1c2;eip=0x002741; 	T(ADD(ah, dl));	// 6123 add     ah, dl ;~ 01C2:2741
cs=0x1c2;eip=0x002743; 	T(CMP(ah, 0x50));	// 6124 cmp     ah, 50h ; 'P' ;~ 01C2:2743
cs=0x1c2;eip=0x002746; 	J(JNC(loc_12935));	// 6125 jnb     short loc_12935 ;~ 01C2:2746
cs=0x1c2;eip=0x002748; 	T(OR(ah, ah));	// 6126 or      ah, ah ;~ 01C2:2748
cs=0x1c2;eip=0x00274a; 	J(JS(loc_12935));	// 6127 js      short loc_12935 ;~ 01C2:274A
cs=0x1c2;eip=0x00274c; 	T(MOV(bl, ah));	// 6128 mov     bl, ah ;~ 01C2:274C
cs=0x1c2;eip=0x00274e; 	T(XOR(ah, ah));	// 6129 xor     ah, ah ;~ 01C2:274E
cs=0x1c2;eip=0x002750; 	X(MUL1_1(byte_14d56));	// 6130 mul     byte_14D56 ;~ 01C2:2750
cs=0x1c2;eip=0x002754; 	T(MOV(di, bp));	// 6131 mov     di, bp ;~ 01C2:2754
cs=0x1c2;eip=0x002756; 	T(ADD(di, ax));	// 6132 add     di, ax ;~ 01C2:2756
cs=0x1c2;eip=0x002758; 	T(ADD(di, bx));	// 6133 add     di, bx ;~ 01C2:2758
cs=0x1c2;eip=0x00275a; 	T(MOV(bl, dh));	// 6134 mov     bl, dh ;~ 01C2:275A
cs=0x1c2;eip=0x00275c; 	T(AND(bx, 3));	// 6135 and     bx, 3 ;~ 01C2:275C
cs=0x1c2;eip=0x002760; 	T(MOV(al, *(raddr(es,di))));	// 6136 mov     al, es:[di] ;~ 01C2:2760
cs=0x1c2;eip=0x002763; 	T(AND(al, *(raddr(ds,bx+0x71E))));	// 6137 and     al, [bx+71Eh] ;~ 01C2:2763
cs=0x1c2;eip=0x002767; 	T(OR(al, *(raddr(ds,bx+0x722))));	// 6138 or      al, [bx+722h] ;~ 01C2:2767
cs=0x1c2;eip=0x00276b; 	X(STOSB);	// 6139 stosb ;~ 01C2:276B
cs=0x1c2;eip=0x00276c; 	J(JMP(loc_12935));	// 6140 jmp     short loc_12935 ;~ 01C2:276C
loc_1296e:
	// 4971 
cs=0x1c2;eip=0x00276e; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 6144 mov     ax, [si] ;~ 01C2:276E
cs=0x1c2;eip=0x002770; 	T(CMP(ax, 0x0FFFE));	// 6145 cmp     ax, 0FFFEh ;~ 01C2:2770
cs=0x1c2;eip=0x002773; 	J(JNZ(loc_12978));	// 6146 jnz     short loc_12978 ;~ 01C2:2773
cs=0x1c2;eip=0x002775; 	T(MOV(si, 0x730));	// 6147 mov     si, 730h ;~ 01C2:2775
loc_12978:
	// 4972 
cs=0x1c2;eip=0x002778; 	X(MOV(word_14d6e, si));	// 6150 mov     word_14D6E, si ;~ 01C2:2778
locret_1297c:
	// 4973 
cs=0x1c2;eip=0x00277c; 	R(RETN(0));	// 6153 retn ;~ 01C2:277C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_128e7: 	goto loc_128e7;
        case m2c::kloc_128ea: 	goto loc_128ea;
        case m2c::kloc_128fc: 	goto loc_128fc;
        case m2c::kloc_12935: 	goto loc_12935;
        case m2c::kloc_1296e: 	goto loc_1296e;
        case m2c::kloc_12978: 	goto loc_12978;
        case m2c::klocret_1297c: 	goto locret_1297c;
        case m2c::kret_1c2_26dd: 	goto ret_1c2_26dd;
        case m2c::ksub_128da: 	goto sub_128da;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12ae0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12ae0:
    _begin:
cs=0x1c2;eip=0x0028e0; 	T(MOV(al, byte_14fb0));	// 6371 mov     al, byte_14FB0 ;~ 01C2:28E0
ret_1c2_28e3:
	// 4993 
cs=0x1c2;eip=0x0028e3; 	T(OR(al, al));	// 6372 or      al, al ;~ 01C2:28E3
cs=0x1c2;eip=0x0028e5; 	J(JNZ(loc_12af9));	// 6373 jnz     short loc_12AF9 ;~ 01C2:28E5
cs=0x1c2;eip=0x0028e7; 	T(MOV(al, byte_14fb1));	// 6374 mov     al, byte_14FB1 ;~ 01C2:28E7
cs=0x1c2;eip=0x0028ea; 	T(OR(al, al));	// 6375 or      al, al ;~ 01C2:28EA
cs=0x1c2;eip=0x0028ec; 	J(JNZ(loc_12aef));	// 6376 jnz     short loc_12AEF ;~ 01C2:28EC
cs=0x1c2;eip=0x0028ee; 	R(RETN(0));	// 6377 retn ;~ 01C2:28EE
loc_12aef:
	// 4994 
cs=0x1c2;eip=0x0028ef; 	T(INC(al));	// 6381 inc     al ;~ 01C2:28EF
cs=0x1c2;eip=0x0028f1; 	X(MOV(byte_14fb1, al));	// 6382 mov     byte_14FB1, al ;~ 01C2:28F1
cs=0x1c2;eip=0x0028f4; 	T(DEC(al));	// 6383 dec     al ;~ 01C2:28F4
cs=0x1c2;eip=0x0028f6; 	J(JMP(loc_12b00));	// 6384 jmp     short loc_12B00 ;~ 01C2:28F6
loc_12af9:
	// 4995 
cs=0x1c2;eip=0x0028f9; 	T(INC(al));	// 6390 inc     al ;~ 01C2:28F9
cs=0x1c2;eip=0x0028fb; 	X(MOV(byte_14fb0, al));	// 6391 mov     byte_14FB0, al ;~ 01C2:28FB
cs=0x1c2;eip=0x0028fe; 	T(DEC(al));	// 6392 dec     al ;~ 01C2:28FE
loc_12b00:
	// 4996 
cs=0x1c2;eip=0x002900; 	T(DEC(al));	// 6395 dec     al ;~ 01C2:2900
cs=0x1c2;eip=0x002902; 	X(MOV(byte_14fb4, al));	// 6396 mov     byte_14FB4, al ;~ 01C2:2902
cs=0x1c2;eip=0x002905; 	J(JNZ(loc_12b36));	// 6397 jnz     short loc_12B36 ;~ 01C2:2905
cs=0x1c2;eip=0x002907; 	T(MOV(ax, word_15347));	// 6398 mov     ax, word_15347 ;~ 01C2:2907
cs=0x1c2;eip=0x00290a; 	X(MOV(word_14fb5, ax));	// 6399 mov     word_14FB5, ax ;~ 01C2:290A
cs=0x1c2;eip=0x00290d; 	T(MOV(ax, word_148b1));	// 6400 mov     ax, word_148B1 ;~ 01C2:290D
cs=0x1c2;eip=0x002910; 	T(CMP(ax, 0x1E));	// 6401 cmp     ax, 1Eh ;~ 01C2:2910
cs=0x1c2;eip=0x002913; 	J(JNC(loc_12b18));	// 6402 jnb     short loc_12B18 ;~ 01C2:2913
cs=0x1c2;eip=0x002915; 	T(MOV(ax, 0x1E));	// 6403 mov     ax, 1Eh ;~ 01C2:2915
loc_12b18:
	// 4997 
cs=0x1c2;eip=0x002918; 	X(MOV(word_14fb7, ax));	// 6406 mov     word_14FB7, ax ;~ 01C2:2918
cs=0x1c2;eip=0x00291b; 	T(CMP(ax, 0x200));	// 6407 cmp     ax, 200h ;~ 01C2:291B
cs=0x1c2;eip=0x00291e; 	J(JC(loc_12b21));	// 6408 jb      short loc_12B21 ;~ 01C2:291E
cs=0x1c2;eip=0x002920; 	R(RETN(0));	// 6409 retn ;~ 01C2:2920
loc_12b21:
	// 4998 
cs=0x1c2;eip=0x002921; 	T(XOR(cx, cx));	// 6413 xor     cx, cx ;~ 01C2:2921
loc_12b23:
	// 4999 
cs=0x1c2;eip=0x002923; 	T(INC(cx));	// 6416 inc     cx ;~ 01C2:2923
cs=0x1c2;eip=0x002924; 	T(SHR(ax, 1));	// 6417 shr     ax, 1 ;~ 01C2:2924
cs=0x1c2;eip=0x002926; 	J(JNZ(loc_12b23));	// 6418 jnz     short loc_12B23 ;~ 01C2:2926
cs=0x1c2;eip=0x002928; 	T(MOV(ax, 9));	// 6419 mov     ax, 9 ;~ 01C2:2928
cs=0x1c2;eip=0x00292b; 	T(SUB(ax, cx));	// 6420 sub     ax, cx ;~ 01C2:292B
cs=0x1c2;eip=0x00292d; 	X(MOV(byte_14fb3, al));	// 6421 mov     byte_14FB3, al ;~ 01C2:292D
cs=0x1c2;eip=0x002930; 	T(MOV(ax, word_14af6));	// 6422 mov     ax, word_14AF6 ;~ 01C2:2930
cs=0x1c2;eip=0x002933; 	X(MOV(word_15359, ax));	// 6423 mov     word_15359, ax ;~ 01C2:2933
loc_12b36:
	// 5000 
cs=0x1c2;eip=0x002936; 	T(MOV(ax, word_14af6));	// 6426 mov     ax, word_14AF6 ;~ 01C2:2936
cs=0x1c2;eip=0x002939; 	T(SUB(ax, word_15359));	// 6427 sub     ax, word_15359 ;~ 01C2:2939
cs=0x1c2;eip=0x00293d; 	X(ADD(word_15359, ax));	// 6428 add     word_15359, ax ;~ 01C2:293D
cs=0x1c2;eip=0x002941; 	T(MOV(bp, word_14fb5));	// 6429 mov     bp, word_14FB5 ;~ 01C2:2941
cs=0x1c2;eip=0x002945; 	T(SUB(bp, ax));	// 6430 sub     bp, ax ;~ 01C2:2945
cs=0x1c2;eip=0x002947; 	X(MOV(word_14fb5, bp));	// 6431 mov     word_14FB5, bp ;~ 01C2:2947
cs=0x1c2;eip=0x00294b; 	T(MOV(cx, 5));	// 6432 mov     cx, 5 ;~ 01C2:294B
cs=0x1c2;eip=0x00294e; 	T(MOV(si, 0x984));	// 6433 mov     si, 984h ;~ 01C2:294E
cs=0x1c2;eip=0x002951; 	T(MOV(di, 0x29E7));	// 6434 mov     di, 29E7h ;~ 01C2:2951
cs=0x1c2;eip=0x002954; 	T(TEST(byte_14fb1, 0x0FF));	// 6435 test    byte_14FB1, 0FFh ;~ 01C2:2954
cs=0x1c2;eip=0x002959; 	J(JZ(loc_12b62));	// 6436 jz      short loc_12B62 ;~ 01C2:2959
cs=0x1c2;eip=0x00295b; 	T(DEC(cx));	// 6437 dec     cx ;~ 01C2:295B
cs=0x1c2;eip=0x00295c; 	T(ADD(si, 0x14));	// 6438 add     si, 14h ;~ 01C2:295C
cs=0x1c2;eip=0x00295f; 	T(ADD(di, 2));	// 6439 add     di, 2 ;~ 01C2:295F
loc_12b62:
	// 5001 
cs=0x1c2;eip=0x002962; 	X(PUSH(cx));	// 6443 push    cx ;~ 01C2:2962
cs=0x1c2;eip=0x002963; 	X(PUSH(si));	// 6444 push    si ;~ 01C2:2963
cs=0x1c2;eip=0x002964; 	X(PUSH(di));	// 6445 push    di ;~ 01C2:2964
cs=0x1c2;eip=0x002965; 	T(LODSW);	// 6446 lodsw ;~ 01C2:2965
cs=0x1c2;eip=0x002966; 	T(MOV(dx, ax));	// 6447 mov     dx, ax ;~ 01C2:2966
cs=0x1c2;eip=0x002968; 	T(LODSW);	// 6448 lodsw ;~ 01C2:2968
cs=0x1c2;eip=0x002969; 	X(IMUL1_1(byte_14fb4));	// 6449 imul    byte_14FB4 ;~ 01C2:2969
cs=0x1c2;eip=0x00296d; 	T(ADD(dx, ax));	// 6450 add     dx, ax ;~ 01C2:296D
cs=0x1c2;eip=0x00296f; 	T(MOV(bx, word_14fb7));	// 6451 mov     bx, word_14FB7 ;~ 01C2:296F
cs=0x1c2;eip=0x002973; 	T(MOV(di, *(dw*)(raddr(cs,di))));	// 6452 mov     di, cs:[di] ;~ 01C2:2973
cs=0x1c2;eip=0x002976; 	T(LODSW);	// 6453 lodsw ;~ 01C2:2976
cs=0x1c2;eip=0x002977; 	X(IMUL1_1(byte_14fb4));	// 6454 imul    byte_14FB4 ;~ 01C2:2977
cs=0x1c2;eip=0x00297b; 	T(ADD(bx, ax));	// 6455 add     bx, ax ;~ 01C2:297B
cs=0x1c2;eip=0x00297d; 	T(LODSW);	// 6456 lodsw ;~ 01C2:297D
cs=0x1c2;eip=0x00297e; 	X(IMUL1_1(byte_14fb4));	// 6457 imul    byte_14FB4 ;~ 01C2:297E
cs=0x1c2;eip=0x002982; 	T(MOV(cl, byte_14fb3));	// 6458 mov     cl, byte_14FB3 ;~ 01C2:2982
cs=0x1c2;eip=0x002986; 	T(SHL(ax, cl));	// 6459 shl     ax, cl ;~ 01C2:2986
cs=0x1c2;eip=0x002988; 	T(ADD(ax, word_14fb5));	// 6460 add     ax, word_14FB5 ;~ 01C2:2988
cs=0x1c2;eip=0x00298c; 	T(TEST(ax, 0x8000));	// 6461 test    ax, 8000h ;~ 01C2:298C
cs=0x1c2;eip=0x00298f; 	J(JNZ(loc_12b99));	// 6462 jnz     short loc_12B99 ;~ 01C2:298F
cs=0x1c2;eip=0x002991; 	T(CMP(ax, 0x240));	// 6463 cmp     ax, 240h ;~ 01C2:2991
cs=0x1c2;eip=0x002994; 	J(JC(loc_12b99));	// 6464 jb      short loc_12B99 ;~ 01C2:2994
cs=0x1c2;eip=0x002996; 	T(SUB(ax, 0x480));	// 6465 sub     ax, 480h ;~ 01C2:2996
loc_12b99:
	// 5002 
cs=0x1c2;eip=0x002999; 	X(MOV(word_14b3f, ax));	// 6469 mov     word_14B3F, ax ;~ 01C2:2999
cs=0x1c2;eip=0x00299c; 	T(MOV(cl, byte_14fb4));	// 6470 mov     cl, byte_14FB4 ;~ 01C2:299C
cs=0x1c2;eip=0x0029a0; 	T(XOR(ch, ch));	// 6471 xor     ch, ch ;~ 01C2:29A0
cs=0x1c2;eip=0x0029a2; 	T(INC(cx));	// 6472 inc     cx ;~ 01C2:29A2
loc_12ba3:
	// 5003 
cs=0x1c2;eip=0x0029a3; 	T(LODSW);	// 6475 lodsw ;~ 01C2:29A3
cs=0x1c2;eip=0x0029a4; 	J(LOOP(loc_12ba3));	// 6476 loop    loc_12BA3 ;~ 01C2:29A4
cs=0x1c2;eip=0x0029a6; 	T(MOV(cl, byte_14fb3));	// 6477 mov     cl, byte_14FB3 ;~ 01C2:29A6
cs=0x1c2;eip=0x0029aa; 	T(SHL(ax, cl));	// 6478 shl     ax, cl ;~ 01C2:29AA
cs=0x1c2;eip=0x0029ac; 	T(NEG(ax));	// 6479 neg     ax ;~ 01C2:29AC
cs=0x1c2;eip=0x0029ae; 	X(MOV(word_14b41, ax));	// 6480 mov     word_14B41, ax ;~ 01C2:29AE
cs=0x1c2;eip=0x0029b1; 	J(CALL(__dispatch_call,di));	// 6481 call    di ;~ 01C2:29B1
cs=0x1c2;eip=0x0029b3; 	X(POP(di));	// 6482 pop     di ;~ 01C2:29B3
cs=0x1c2;eip=0x0029b4; 	X(POP(si));	// 6483 pop     si ;~ 01C2:29B4
cs=0x1c2;eip=0x0029b5; 	X(POP(cx));	// 6484 pop     cx ;~ 01C2:29B5
cs=0x1c2;eip=0x0029b6; 	T(ADD(si, 0x14));	// 6485 add     si, 14h ;~ 01C2:29B6
cs=0x1c2;eip=0x0029b9; 	T(ADD(di, 2));	// 6486 add     di, 2 ;~ 01C2:29B9
cs=0x1c2;eip=0x0029bc; 	J(LOOP(loc_12b62));	// 6487 loop    loc_12B62 ;~ 01C2:29BC
cs=0x1c2;eip=0x0029be; 	T(CMP(byte_14fb0, 7));	// 6488 cmp     byte_14FB0, 7 ;~ 01C2:29BE
cs=0x1c2;eip=0x0029c3; 	J(JNZ(loc_12bcf));	// 6489 jnz     short loc_12BCF ;~ 01C2:29C3
cs=0x1c2;eip=0x0029c5; 	X(MOV(byte_14b14, 0x0FF));	// 6490 mov     byte_14B14, 0FFh ;~ 01C2:29C5
cs=0x1c2;eip=0x0029ca; 	X(MOV(byte_14fb0, 0));	// 6491 mov     byte_14FB0, 0 ;~ 01C2:29CA
loc_12bcf:
	// 5004 
cs=0x1c2;eip=0x0029cf; 	T(CMP(byte_14fb1, 7));	// 6494 cmp     byte_14FB1, 7 ;~ 01C2:29CF
cs=0x1c2;eip=0x0029d4; 	J(JNZ(loc_12be0));	// 6495 jnz     short loc_12BE0 ;~ 01C2:29D4
cs=0x1c2;eip=0x0029d6; 	X(MOV(byte_14fb1, 0));	// 6496 mov     byte_14FB1, 0 ;~ 01C2:29D6
cs=0x1c2;eip=0x0029db; 	X(MOV(byte_14b15, 0x0FF));	// 6497 mov     byte_14B15, 0FFh ;~ 01C2:29DB
loc_12be0:
	// 5005 
cs=0x1c2;eip=0x0029e0; 	X(MOV(word_14b41, 0));	// 6500 mov     word_14B41, 0 ;~ 01C2:29E0
cs=0x1c2;eip=0x0029e6; 	R(RETN(0));	// 6501 retn ;~ 01C2:29E6

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_12aef: 	goto loc_12aef;
        case m2c::kloc_12af9: 	goto loc_12af9;
        case m2c::kloc_12b00: 	goto loc_12b00;
        case m2c::kloc_12b18: 	goto loc_12b18;
        case m2c::kloc_12b21: 	goto loc_12b21;
        case m2c::kloc_12b23: 	goto loc_12b23;
        case m2c::kloc_12b36: 	goto loc_12b36;
        case m2c::kloc_12b62: 	goto loc_12b62;
        case m2c::kloc_12b99: 	goto loc_12b99;
        case m2c::kloc_12ba3: 	goto loc_12ba3;
        case m2c::kloc_12bcf: 	goto loc_12bcf;
        case m2c::kloc_12be0: 	goto loc_12be0;
        case m2c::kret_1c2_28e3: 	goto ret_1c2_28e3;
        case m2c::ksub_12ae0: 	goto sub_12ae0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12e30(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12e30:
    _begin:
cs=0x1c2;eip=0x002c30; 	T(MOV(al, byte_15242));	// 6783 mov     al, byte_15242 ;~ 01C2:2C30
ret_1c2_2c33:
	// 5033 
cs=0x1c2;eip=0x002c33; 	T(OR(al, al));	// 6784 or      al, al ;~ 01C2:2C33
cs=0x1c2;eip=0x002c35; 	J(JNZ(loc_12e38));	// 6785 jnz     short loc_12E38 ;~ 01C2:2C35
cs=0x1c2;eip=0x002c37; 	R(RETN(0));	// 6786 retn ;~ 01C2:2C37
loc_12e38:
	// 5034 
cs=0x1c2;eip=0x002c38; 	T(CMP(al, 3));	// 6790 cmp     al, 3 ;~ 01C2:2C38
cs=0x1c2;eip=0x002c3a; 	J(JC(loc_12e4a));	// 6791 jb      short loc_12E4A ;~ 01C2:2C3A
cs=0x1c2;eip=0x002c3c; 	T(TEST(byte_15243, 0x0FF));	// 6792 test    byte_15243, 0FFh ;~ 01C2:2C3C
cs=0x1c2;eip=0x002c41; 	J(JNZ(loc_12e51));	// 6793 jnz     short loc_12E51 ;~ 01C2:2C41
cs=0x1c2;eip=0x002c43; 	X(MOV(byte_15242, 0));	// 6794 mov     byte_15242, 0 ;~ 01C2:2C43
cs=0x1c2;eip=0x002c48; 	J(JMP(loc_12e51));	// 6795 jmp     short loc_12E51 ;~ 01C2:2C48
loc_12e4a:
	// 5035 
cs=0x1c2;eip=0x002c4a; 	T(INC(al));	// 6799 inc     al ;~ 01C2:2C4A
cs=0x1c2;eip=0x002c4c; 	X(MOV(byte_15242, al));	// 6800 mov     byte_15242, al ;~ 01C2:2C4C
cs=0x1c2;eip=0x002c4f; 	T(DEC(al));	// 6801 dec     al ;~ 01C2:2C4F
loc_12e51:
	// 5036 
cs=0x1c2;eip=0x002c51; 	T(DEC(al));	// 6805 dec     al ;~ 01C2:2C51
cs=0x1c2;eip=0x002c53; 	T(XOR(ah, ah));	// 6806 xor     ah, ah ;~ 01C2:2C53
cs=0x1c2;eip=0x002c55; 	T(MOV(di, 0x2C66));	// 6807 mov     di, 2C66h ;~ 01C2:2C55
cs=0x1c2;eip=0x002c58; 	T(SHL(ax, 1));	// 6808 shl     ax, 1 ;~ 01C2:2C58
cs=0x1c2;eip=0x002c5a; 	T(ADD(di, ax));	// 6809 add     di, ax ;~ 01C2:2C5A
cs=0x1c2;eip=0x002c5c; 	T(MOV(di, *(dw*)(raddr(cs,di))));	// 6810 mov     di, cs:[di] ;~ 01C2:2C5C
cs=0x1c2;eip=0x002c5f; 	J(CALL(__dispatch_call,di));	// 6811 call    di ;~ 01C2:2C5F
cs=0x1c2;eip=0x002c61; 	X(DEC(byte_15243));	// 6812 dec     byte_15243 ;~ 01C2:2C61
cs=0x1c2;eip=0x002c65; 	R(RETN(0));	// 6813 retn ;~ 01C2:2C65

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_12e38: 	goto loc_12e38;
        case m2c::kloc_12e4a: 	goto loc_12e4a;
        case m2c::kloc_12e51: 	goto loc_12e51;
        case m2c::kret_1c2_2c33: 	goto ret_1c2_2c33;
        case m2c::ksub_12e30: 	goto sub_12e30;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13040(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13040:
    _begin:
cs=0x1c2;eip=0x002e40; 	T(MOV(si, word_153a8));	// 7092 mov     si, word_153A8 ;~ 01C2:2E40
ret_1c2_2e44:
	// 5064 
cs=0x1c2;eip=0x002e44; 	T(LODSW);	// 7093 lodsw ;~ 01C2:2E44
cs=0x1c2;eip=0x002e45; 	T(MOV(dx, ax));	// 7094 mov     dx, ax ;~ 01C2:2E45
cs=0x1c2;eip=0x002e47; 	T(LODSW);	// 7095 lodsw ;~ 01C2:2E47
cs=0x1c2;eip=0x002e48; 	T(MOV(cx, ax));	// 7096 mov     cx, ax ;~ 01C2:2E48
cs=0x1c2;eip=0x002e4a; 	T(MOV(si, word_153aa));	// 7097 mov     si, word_153AA ;~ 01C2:2E4A
cs=0x1c2;eip=0x002e4e; 	T(LODSW);	// 7098 lodsw ;~ 01C2:2E4E
cs=0x1c2;eip=0x002e4f; 	T(MOV(bx, ax));	// 7099 mov     bx, ax ;~ 01C2:2E4F
cs=0x1c2;eip=0x002e51; 	T(LODSW);	// 7100 lodsw ;~ 01C2:2E51
cs=0x1c2;eip=0x002e52; 	J(CALL(sub_133ad,0));	// 7101 call    sub_133AD ;~ 01C2:2E52
cs=0x1c2;eip=0x002e55; 	J(JNC(loc_13058));	// 7102 jnb     short loc_13058 ;~ 01C2:2E55
cs=0x1c2;eip=0x002e57; 	R(RETN(0));	// 7103 retn ;~ 01C2:2E57
loc_13058:
	// 5065 
cs=0x1c2;eip=0x002e58; 	T(MOV(di, word_153ba));	// 7107 mov     di, word_153BA ;~ 01C2:2E58
cs=0x1c2;eip=0x002e5c; 	T(CMP(ax, cx));	// 7108 cmp     ax, cx ;~ 01C2:2E5C
cs=0x1c2;eip=0x002e5e; 	J(JNZ(loc_13068));	// 7109 jnz     short loc_13068 ;~ 01C2:2E5E
cs=0x1c2;eip=0x002e60; 	T(CMP(bx, dx));	// 7110 cmp     bx, dx ;~ 01C2:2E60
cs=0x1c2;eip=0x002e62; 	J(JNZ(loc_13068));	// 7111 jnz     short loc_13068 ;~ 01C2:2E62
cs=0x1c2;eip=0x002e64; 	J(CALL(sub_1335d,0));	// 7112 call    sub_1335D ;~ 01C2:2E64
locret_13067:
	// 5066 
cs=0x1c2;eip=0x002e67; 	R(RETN(0));	// 7116 retn ;~ 01C2:2E67
loc_13068:
	// 5067 
cs=0x1c2;eip=0x002e68; 	X(PUSH(ax));	// 7121 push    ax ;~ 01C2:2E68
cs=0x1c2;eip=0x002e69; 	T(SUB(ax, cx));	// 7122 sub     ax, cx ;~ 01C2:2E69
cs=0x1c2;eip=0x002e6b; 	X(MOV(word_1542c, ax));	// 7123 mov     word_1542C, ax ;~ 01C2:2E6B
cs=0x1c2;eip=0x002e6e; 	J(JNS(loc_13072));	// 7124 jns     short loc_13072 ;~ 01C2:2E6E
cs=0x1c2;eip=0x002e70; 	T(NEG(ax));	// 7125 neg     ax ;~ 01C2:2E70
loc_13072:
	// 5068 
cs=0x1c2;eip=0x002e72; 	X(PUSH(bx));	// 7128 push    bx ;~ 01C2:2E72
cs=0x1c2;eip=0x002e73; 	T(SUB(bx, dx));	// 7129 sub     bx, dx ;~ 01C2:2E73
cs=0x1c2;eip=0x002e75; 	X(MOV(word_1542a, bx));	// 7130 mov     word_1542A, bx ;~ 01C2:2E75
cs=0x1c2;eip=0x002e79; 	J(JNS(loc_1307d));	// 7131 jns     short loc_1307D ;~ 01C2:2E79
cs=0x1c2;eip=0x002e7b; 	T(NEG(bx));	// 7132 neg     bx ;~ 01C2:2E7B
loc_1307d:
	// 5069 
cs=0x1c2;eip=0x002e7d; 	T(CMP(ax, bx));	// 7135 cmp     ax, bx ;~ 01C2:2E7D
cs=0x1c2;eip=0x002e7f; 	X(POP(bx));	// 7136 pop     bx ;~ 01C2:2E7F
cs=0x1c2;eip=0x002e80; 	X(POP(ax));	// 7137 pop     ax ;~ 01C2:2E80
cs=0x1c2;eip=0x002e81; 	J(JBE(loc_13086));	// 7138 jbe     short loc_13086 ;~ 01C2:2E81
cs=0x1c2;eip=0x002e83; 	J(JMP(loc_13291));	// 7139 jmp     loc_13291 ;~ 01C2:2E83
loc_13086:
	// 5070 
cs=0x1c2;eip=0x002e86; 	T(MOV(si, 0x0DEE));	// 7143 mov     si, 0DEEh ;~ 01C2:2E86
cs=0x1c2;eip=0x002e89; 	T(MOV(bp, word_1542c));	// 7144 mov     bp, word_1542C ;~ 01C2:2E89
cs=0x1c2;eip=0x002e8d; 	T(XOR(bp, word_1542a));	// 7145 xor     bp, word_1542A ;~ 01C2:2E8D
cs=0x1c2;eip=0x002e91; 	T(TEST(bp, 0x8000));	// 7146 test    bp, 8000h ;~ 01C2:2E91
cs=0x1c2;eip=0x002e95; 	J(JZ(loc_1309a));	// 7147 jz      short loc_1309A ;~ 01C2:2E95
cs=0x1c2;eip=0x002e97; 	T(MOV(si, 0x0DF4));	// 7148 mov     si, 0DF4h ;~ 01C2:2E97
loc_1309a:
	// 5071 
cs=0x1c2;eip=0x002e9a; 	T(TEST(word_1542a, 0x8000));	// 7151 test    word_1542A, 8000h ;~ 01C2:2E9A
cs=0x1c2;eip=0x002ea0; 	J(JNZ(loc_130a8));	// 7152 jnz     short loc_130A8 ;~ 01C2:2EA0
cs=0x1c2;eip=0x002ea2; 	T(MOV(ax, cx));	// 7153 mov     ax, cx ;~ 01C2:2EA2
cs=0x1c2;eip=0x002ea4; 	T(MOV(bx, dx));	// 7154 mov     bx, dx ;~ 01C2:2EA4
cs=0x1c2;eip=0x002ea6; 	J(JMP(loc_130ac));	// 7155 jmp     short loc_130AC ;~ 01C2:2EA6
loc_130a8:
	// 5072 
cs=0x1c2;eip=0x002ea8; 	X(NEG(word_1542a));	// 7159 neg     word_1542A ;~ 01C2:2EA8
loc_130ac:
	// 5073 
cs=0x1c2;eip=0x002eac; 	T(TEST(word_1542c, 0x8000));	// 7162 test    word_1542C, 8000h ;~ 01C2:2EAC
cs=0x1c2;eip=0x002eb2; 	J(JZ(loc_130b8));	// 7163 jz      short loc_130B8 ;~ 01C2:2EB2
cs=0x1c2;eip=0x002eb4; 	X(NEG(word_1542c));	// 7164 neg     word_1542C ;~ 01C2:2EB4
loc_130b8:
	// 5074 
cs=0x1c2;eip=0x002eb8; 	T(SAR(ax, 1));	// 7167 sar     ax, 1 ;~ 01C2:2EB8
cs=0x1c2;eip=0x002eba; 	J(JNC(loc_130c2));	// 7168 jnb     short loc_130C2 ;~ 01C2:2EBA
cs=0x1c2;eip=0x002ebc; 	T(ADD(di, 0x2000));	// 7169 add     di, 2000h ;~ 01C2:2EBC
cs=0x1c2;eip=0x002ec0; 	T(INC(si));	// 7170 inc     si ;~ 01C2:2EC0
cs=0x1c2;eip=0x002ec1; 	T(INC(si));	// 7171 inc     si ;~ 01C2:2EC1
loc_130c2:
	// 5075 
cs=0x1c2;eip=0x002ec2; 	X(IMUL1_2(word_153a0));	// 7174 imul    word_153A0 ;~ 01C2:2EC2
cs=0x1c2;eip=0x002ec6; 	T(ADD(di, ax));	// 7175 add     di, ax ;~ 01C2:2EC6
cs=0x1c2;eip=0x002ec8; 	X(PUSH(bx));	// 7176 push    bx ;~ 01C2:2EC8
cs=0x1c2;eip=0x002ec9; 	T(MOV(cx, 3));	// 7177 mov     cx, 3 ;~ 01C2:2EC9
cs=0x1c2;eip=0x002ecc; 	T(SAR(bx, cl));	// 7178 sar     bx, cl ;~ 01C2:2ECC
cs=0x1c2;eip=0x002ece; 	T(ADD(di, bx));	// 7179 add     di, bx ;~ 01C2:2ECE
cs=0x1c2;eip=0x002ed0; 	T(ADD(di, bx));	// 7180 add     di, bx ;~ 01C2:2ED0
cs=0x1c2;eip=0x002ed2; 	X(POP(bx));	// 7181 pop     bx ;~ 01C2:2ED2
cs=0x1c2;eip=0x002ed3; 	T(AND(bx, 7));	// 7182 and     bx, 7 ;~ 01C2:2ED3
cs=0x1c2;eip=0x002ed7; 	X(PUSH(bx));	// 7183 push    bx ;~ 01C2:2ED7
cs=0x1c2;eip=0x002ed8; 	T(MOV(cx, word_1542a));	// 7184 mov     cx, word_1542A ;~ 01C2:2ED8
cs=0x1c2;eip=0x002edc; 	T(MOV(bx, cx));	// 7185 mov     bx, cx ;~ 01C2:2EDC
cs=0x1c2;eip=0x002ede; 	T(SUB(bx, word_1542c));	// 7186 sub     bx, word_1542C ;~ 01C2:2EDE
cs=0x1c2;eip=0x002ee2; 	X(MOV(word_153b6, bx));	// 7187 mov     word_153B6, bx ;~ 01C2:2EE2
cs=0x1c2;eip=0x002ee6; 	T(MOV(bx, cx));	// 7188 mov     bx, cx ;~ 01C2:2EE6
cs=0x1c2;eip=0x002ee8; 	T(SHR(bx, 1));	// 7189 shr     bx, 1 ;~ 01C2:2EE8
cs=0x1c2;eip=0x002eea; 	T(MOV(ax, word_1542c));	// 7190 mov     ax, word_1542C ;~ 01C2:2EEA
cs=0x1c2;eip=0x002eed; 	T(SUB(ax, bx));	// 7191 sub     ax, bx ;~ 01C2:2EED
cs=0x1c2;eip=0x002eef; 	X(MOV(word_153a6, ax));	// 7192 mov     word_153A6, ax ;~ 01C2:2EEF
cs=0x1c2;eip=0x002ef2; 	T(MOV(dx, 0));	// 7193 mov     dx, 0 ;~ 01C2:2EF2
cs=0x1c2;eip=0x002ef5; 	X(POP(bx));	// 7194 pop     bx ;~ 01C2:2EF5
cs=0x1c2;eip=0x002ef6; 	T(CMP(word_1542c, 0));	// 7195 cmp     word_1542C, 0 ;~ 01C2:2EF6
cs=0x1c2;eip=0x002efb; 	J(JNZ(loc_13100));	// 7196 jnz     short loc_13100 ;~ 01C2:2EFB
cs=0x1c2;eip=0x002efd; 	J(JMP(loc_131a4));	// 7197 jmp     loc_131A4 ;~ 01C2:2EFD
loc_13100:
	// 5076 
cs=0x1c2;eip=0x002f00; 	T(MOV(ax, word_1542a));	// 7201 mov     ax, word_1542A ;~ 01C2:2F00
cs=0x1c2;eip=0x002f03; 	X(DIV2(word_1542c));	// 7202 div     word_1542C ;~ 01C2:2F03
cs=0x1c2;eip=0x002f07; 	T(MOV(dx, 0));	// 7203 mov     dx, 0 ;~ 01C2:2F07
cs=0x1c2;eip=0x002f0a; 	T(CMP(ax, 4));	// 7204 cmp     ax, 4 ;~ 01C2:2F0A
cs=0x1c2;eip=0x002f0d; 	J(JC(loc_13112));	// 7205 jb      short loc_13112 ;~ 01C2:2F0D
cs=0x1c2;eip=0x002f0f; 	J(JMP(loc_131ab));	// 7206 jmp     loc_131AB ;~ 01C2:2F0F
loc_13112:
	// 5077 
cs=0x1c2;eip=0x002f12; 	T(TEST(byte_153a3, 0x0FF));	// 7211 test    byte_153A3, 0FFh ;~ 01C2:2F12
cs=0x1c2;eip=0x002f17; 	J(JZ(loc_1311c));	// 7212 jz      short loc_1311C ;~ 01C2:2F17
cs=0x1c2;eip=0x002f19; 	J(JMP(loc_13155));	// 7213 jmp     short loc_13155 ;~ 01C2:2F19
loc_1311c:
	// 5078 
cs=0x1c2;eip=0x002f1c; 	T(SHL(bx, 1));	// 7218 shl     bx, 1 ;~ 01C2:2F1C
cs=0x1c2;eip=0x002f1e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0D84))));	// 7219 mov     ax, [bx+0D84h] ;~ 01C2:2F1E
cs=0x1c2;eip=0x002f22; 	T(SHR(bx, 1));	// 7220 shr     bx, 1 ;~ 01C2:2F22
cs=0x1c2;eip=0x002f24; 	X(OR(*(raddr(es,di)), ah));	// 7221 or      es:[di], ah ;~ 01C2:2F24
cs=0x1c2;eip=0x002f27; 	X(OR(*(raddr(es,di+1)), al));	// 7222 or      es:[di+1], al ;~ 01C2:2F27
cs=0x1c2;eip=0x002f2b; 	T(INC(bx));	// 7223 inc     bx ;~ 01C2:2F2B
cs=0x1c2;eip=0x002f2c; 	T(AND(bx, 7));	// 7224 and     bx, 7 ;~ 01C2:2F2C
cs=0x1c2;eip=0x002f30; 	J(JNZ(loc_13134));	// 7225 jnz     short loc_13134 ;~ 01C2:2F30
cs=0x1c2;eip=0x002f32; 	T(INC(di));	// 7226 inc     di ;~ 01C2:2F32
cs=0x1c2;eip=0x002f33; 	T(INC(di));	// 7227 inc     di ;~ 01C2:2F33
loc_13134:
	// 5079 
cs=0x1c2;eip=0x002f34; 	T(CMP(dx, word_153a6));	// 7230 cmp     dx, word_153A6 ;~ 01C2:2F34
cs=0x1c2;eip=0x002f38; 	J(JS(loc_13140));	// 7231 js      short loc_13140 ;~ 01C2:2F38
cs=0x1c2;eip=0x002f3a; 	T(SUB(dx, word_1542c));	// 7232 sub     dx, word_1542C ;~ 01C2:2F3A
cs=0x1c2;eip=0x002f3e; 	J(JMP(loc_13150));	// 7233 jmp     short loc_13150 ;~ 01C2:2F3E
loc_13140:
	// 5080 
cs=0x1c2;eip=0x002f40; 	T(ADD(dx, word_153b6));	// 7238 add     dx, word_153B6 ;~ 01C2:2F40
cs=0x1c2;eip=0x002f44; 	T(ADD(di, *(dw*)(raddr(ds,si))));	// 7239 add     di, [si] ;~ 01C2:2F44
cs=0x1c2;eip=0x002f46; 	T(INC(si));	// 7240 inc     si ;~ 01C2:2F46
cs=0x1c2;eip=0x002f47; 	T(INC(si));	// 7241 inc     si ;~ 01C2:2F47
cs=0x1c2;eip=0x002f48; 	T(CMP(*(dw*)(raddr(ds,si)), 0));	// 7242 cmp     word ptr [si], 0 ;~ 01C2:2F48
cs=0x1c2;eip=0x002f4b; 	J(JNZ(loc_13150));	// 7243 jnz     short loc_13150 ;~ 01C2:2F4B
cs=0x1c2;eip=0x002f4d; 	T(SUB(si, 4));	// 7244 sub     si, 4 ;~ 01C2:2F4D
loc_13150:
	// 5081 
cs=0x1c2;eip=0x002f50; 	J(LOOP(loc_13112));	// 7248 loop    loc_13112 ;~ 01C2:2F50
cs=0x1c2;eip=0x002f52; 	J(JMP(locret_13067));	// 7249 jmp     locret_13067 ;~ 01C2:2F52
loc_13155:
	// 5082 
cs=0x1c2;eip=0x002f55; 	T(SHL(bx, 1));	// 7254 shl     bx, 1 ;~ 01C2:2F55
cs=0x1c2;eip=0x002f57; 	T(CMP(byte_153a3, 1));	// 7255 cmp     byte_153A3, 1 ;~ 01C2:2F57
cs=0x1c2;eip=0x002f5c; 	J(JZ(loc_1316d));	// 7256 jz      short loc_1316D ;~ 01C2:2F5C
cs=0x1c2;eip=0x002f5e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0DC8))));	// 7257 mov     ax, [bx+0DC8h] ;~ 01C2:2F5E
cs=0x1c2;eip=0x002f62; 	T(OR(bx, bx));	// 7258 or      bx, bx ;~ 01C2:2F62
cs=0x1c2;eip=0x002f64; 	J(JNZ(loc_13171));	// 7259 jnz     short loc_13171 ;~ 01C2:2F64
cs=0x1c2;eip=0x002f66; 	X(OR(*(raddr(es,di-1)), 1));	// 7260 or      byte ptr es:[di-1], 1 ;~ 01C2:2F66
cs=0x1c2;eip=0x002f6b; 	J(JMP(loc_13171));	// 7261 jmp     short loc_13171 ;~ 01C2:2F6B
loc_1316d:
	// 5083 
cs=0x1c2;eip=0x002f6d; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0DA6))));	// 7265 mov     ax, [bx+0DA6h] ;~ 01C2:2F6D
loc_13171:
	// 5084 
cs=0x1c2;eip=0x002f71; 	T(SHR(bx, 1));	// 7269 shr     bx, 1 ;~ 01C2:2F71
cs=0x1c2;eip=0x002f73; 	X(OR(*(raddr(es,di)), ah));	// 7270 or      es:[di], ah ;~ 01C2:2F73
cs=0x1c2;eip=0x002f76; 	X(OR(*(raddr(es,di+1)), al));	// 7271 or      es:[di+1], al ;~ 01C2:2F76
cs=0x1c2;eip=0x002f7a; 	T(INC(bx));	// 7272 inc     bx ;~ 01C2:2F7A
cs=0x1c2;eip=0x002f7b; 	T(AND(bx, 7));	// 7273 and     bx, 7 ;~ 01C2:2F7B
cs=0x1c2;eip=0x002f7f; 	J(JNZ(loc_13183));	// 7274 jnz     short loc_13183 ;~ 01C2:2F7F
cs=0x1c2;eip=0x002f81; 	T(INC(di));	// 7275 inc     di ;~ 01C2:2F81
cs=0x1c2;eip=0x002f82; 	T(INC(di));	// 7276 inc     di ;~ 01C2:2F82
loc_13183:
	// 5085 
cs=0x1c2;eip=0x002f83; 	T(CMP(dx, word_153a6));	// 7279 cmp     dx, word_153A6 ;~ 01C2:2F83
cs=0x1c2;eip=0x002f87; 	J(JS(loc_13140));	// 7280 js      short loc_13140 ;~ 01C2:2F87
cs=0x1c2;eip=0x002f89; 	T(SUB(dx, word_1542c));	// 7281 sub     dx, word_1542C ;~ 01C2:2F89
cs=0x1c2;eip=0x002f8d; 	J(JMP(loc_1319f));	// 7282 jmp     short loc_1319F ;~ 01C2:2F8D
ret_1c2_2f8f:
	// 5086 
cs=0x1c2;eip=0x002f8f; 	T(ADD(dx, word_153b6));	// 7284 add     dx, word_153B6 ;~ 01C2:2F8F
cs=0x1c2;eip=0x002f93; 	T(ADD(di, *(dw*)(raddr(ds,si))));	// 7285 add     di, [si] ;~ 01C2:2F93
cs=0x1c2;eip=0x002f95; 	T(INC(si));	// 7286 inc     si ;~ 01C2:2F95
cs=0x1c2;eip=0x002f96; 	T(INC(si));	// 7287 inc     si ;~ 01C2:2F96
cs=0x1c2;eip=0x002f97; 	T(CMP(*(dw*)(raddr(ds,si)), 0));	// 7288 cmp     word ptr [si], 0 ;~ 01C2:2F97
cs=0x1c2;eip=0x002f9a; 	J(JNZ(loc_1319f));	// 7289 jnz     short loc_1319F ;~ 01C2:2F9A
cs=0x1c2;eip=0x002f9c; 	T(SUB(si, 4));	// 7290 sub     si, 4 ;~ 01C2:2F9C
loc_1319f:
	// 5087 
cs=0x1c2;eip=0x002f9f; 	J(LOOP(loc_13155));	// 7294 loop    loc_13155 ;~ 01C2:2F9F
cs=0x1c2;eip=0x002fa1; 	J(JMP(locret_13067));	// 7295 jmp     locret_13067 ;~ 01C2:2FA1
loc_131a4:
	// 5088 
cs=0x1c2;eip=0x002fa4; 	T(MOV(bp, cx));	// 7299 mov     bp, cx ;~ 01C2:2FA4
cs=0x1c2;eip=0x002fa6; 	T(MOV(cx, 0));	// 7300 mov     cx, 0 ;~ 01C2:2FA6
cs=0x1c2;eip=0x002fa9; 	J(JMP(loc_131d2));	// 7301 jmp     short loc_131D2 ;~ 01C2:2FA9
loc_131ab:
	// 5089 
cs=0x1c2;eip=0x002fab; 	T(MOV(ax, dx));	// 7306 mov     ax, dx ;~ 01C2:2FAB
cs=0x1c2;eip=0x002fad; 	T(SHL(ax, 1));	// 7307 shl     ax, 1 ;~ 01C2:2FAD
cs=0x1c2;eip=0x002faf; 	T(ADD(ax, word_1542a));	// 7308 add     ax, word_1542A ;~ 01C2:2FAF
cs=0x1c2;eip=0x002fb3; 	T(DEC(ax));	// 7309 dec     ax ;~ 01C2:2FB3
cs=0x1c2;eip=0x002fb4; 	X(PUSH(dx));	// 7310 push    dx ;~ 01C2:2FB4
cs=0x1c2;eip=0x002fb5; 	T(MOV(dx, 0));	// 7311 mov     dx, 0 ;~ 01C2:2FB5
cs=0x1c2;eip=0x002fb8; 	X(DIV2(word_1542c));	// 7312 div     word_1542C ;~ 01C2:2FB8
cs=0x1c2;eip=0x002fbc; 	T(SHR(ax, 1));	// 7313 shr     ax, 1 ;~ 01C2:2FBC
cs=0x1c2;eip=0x002fbe; 	T(INC(ax));	// 7314 inc     ax ;~ 01C2:2FBE
cs=0x1c2;eip=0x002fbf; 	T(MOV(bp, ax));	// 7315 mov     bp, ax ;~ 01C2:2FBF
cs=0x1c2;eip=0x002fc1; 	T(SUB(cx, bp));	// 7316 sub     cx, bp ;~ 01C2:2FC1
cs=0x1c2;eip=0x002fc3; 	J(JNS(loc_131c7));	// 7317 jns     short loc_131C7 ;~ 01C2:2FC3
cs=0x1c2;eip=0x002fc5; 	T(ADD(bp, cx));	// 7318 add     bp, cx ;~ 01C2:2FC5
loc_131c7:
	// 5090 
cs=0x1c2;eip=0x002fc7; 	X(MUL1_2(word_1542c));	// 7321 mul     word_1542C ;~ 01C2:2FC7
cs=0x1c2;eip=0x002fcb; 	X(POP(dx));	// 7322 pop     dx ;~ 01C2:2FCB
cs=0x1c2;eip=0x002fcc; 	T(SUB(dx, ax));	// 7323 sub     dx, ax ;~ 01C2:2FCC
cs=0x1c2;eip=0x002fce; 	T(ADD(dx, word_1542a));	// 7324 add     dx, word_1542A ;~ 01C2:2FCE
loc_131d2:
	// 5091 
cs=0x1c2;eip=0x002fd2; 	T(MOV(ax, 8));	// 7327 mov     ax, 8 ;~ 01C2:2FD2
cs=0x1c2;eip=0x002fd5; 	T(SUB(ax, bx));	// 7328 sub     ax, bx ;~ 01C2:2FD5
cs=0x1c2;eip=0x002fd7; 	T(CMP(ax, bp));	// 7329 cmp     ax, bp ;~ 01C2:2FD7
cs=0x1c2;eip=0x002fd9; 	J(JC(loc_13237));	// 7330 jb      short loc_13237 ;~ 01C2:2FD9
loc_131db:
	// 5092 
cs=0x1c2;eip=0x002fdb; 	X(PUSH(cx));	// 7333 push    cx ;~ 01C2:2FDB
cs=0x1c2;eip=0x002fdc; 	T(MOV(cx, bx));	// 7334 mov     cx, bx ;~ 01C2:2FDC
cs=0x1c2;eip=0x002fde; 	T(SHL(bp, 1));	// 7335 shl     bp, 1 ;~ 01C2:2FDE
cs=0x1c2;eip=0x002fe0; 	T(TEST(byte_153a3, 0x0FF));	// 7336 test    byte_153A3, 0FFh ;~ 01C2:2FE0
cs=0x1c2;eip=0x002fe5; 	J(JZ(loc_13203));	// 7337 jz      short loc_13203 ;~ 01C2:2FE5
cs=0x1c2;eip=0x002fe7; 	T(CMP(byte_153a3, 1));	// 7338 cmp     byte_153A3, 1 ;~ 01C2:2FE7
cs=0x1c2;eip=0x002fec; 	J(JZ(loc_131fd));	// 7339 jz      short loc_131FD ;~ 01C2:2FEC
cs=0x1c2;eip=0x002fee; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0DD8))));	// 7340 mov     ax, [bp+0DD8h] ;~ 01C2:2FEE
cs=0x1c2;eip=0x002ff2; 	T(OR(bp, bp));	// 7341 or      bp, bp ;~ 01C2:2FF2
cs=0x1c2;eip=0x002ff4; 	J(JNZ(loc_13207));	// 7342 jnz     short loc_13207 ;~ 01C2:2FF4
cs=0x1c2;eip=0x002ff6; 	X(OR(*(raddr(es,di-1)), 1));	// 7343 or      byte ptr es:[di-1], 1 ;~ 01C2:2FF6
cs=0x1c2;eip=0x002ffb; 	J(JMP(loc_13207));	// 7344 jmp     short loc_13207 ;~ 01C2:2FFB
loc_131fd:
	// 5093 
cs=0x1c2;eip=0x002ffd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0DB6))));	// 7348 mov     ax, [bp+0DB6h] ;~ 01C2:2FFD
cs=0x1c2;eip=0x003001; 	J(JMP(loc_13207));	// 7349 jmp     short loc_13207 ;~ 01C2:3001
loc_13203:
	// 5094 
cs=0x1c2;eip=0x003003; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0D94))));	// 7353 mov     ax, [bp+0D94h] ;~ 01C2:3003
loc_13207:
	// 5095 
cs=0x1c2;eip=0x003007; 	T(SHR(bp, 1));	// 7357 shr     bp, 1 ;~ 01C2:3007
cs=0x1c2;eip=0x003009; 	T(SHL(cl, 1));	// 7358 shl     cl, 1 ;~ 01C2:3009
cs=0x1c2;eip=0x00300b; 	T(SHR(ax, cl));	// 7359 shr     ax, cl ;~ 01C2:300B
cs=0x1c2;eip=0x00300d; 	X(POP(cx));	// 7360 pop     cx ;~ 01C2:300D
cs=0x1c2;eip=0x00300e; 	X(OR(*(raddr(es,di)), ah));	// 7361 or      es:[di], ah ;~ 01C2:300E
cs=0x1c2;eip=0x003011; 	X(OR(*(raddr(es,di+1)), al));	// 7362 or      es:[di+1], al ;~ 01C2:3011
cs=0x1c2;eip=0x003015; 	T(ADD(bx, bp));	// 7363 add     bx, bp ;~ 01C2:3015
cs=0x1c2;eip=0x003017; 	T(CMP(bx, 8));	// 7364 cmp     bx, 8 ;~ 01C2:3017
cs=0x1c2;eip=0x00301a; 	J(JNZ(loc_13222));	// 7365 jnz     short loc_13222 ;~ 01C2:301A
cs=0x1c2;eip=0x00301c; 	T(MOV(bx, 0));	// 7366 mov     bx, 0 ;~ 01C2:301C
cs=0x1c2;eip=0x00301f; 	T(ADD(di, 2));	// 7367 add     di, 2 ;~ 01C2:301F
loc_13222:
	// 5096 
cs=0x1c2;eip=0x003022; 	T(ADD(di, *(dw*)(raddr(ds,si))));	// 7370 add     di, [si] ;~ 01C2:3022
cs=0x1c2;eip=0x003024; 	T(INC(si));	// 7371 inc     si ;~ 01C2:3024
cs=0x1c2;eip=0x003025; 	T(INC(si));	// 7372 inc     si ;~ 01C2:3025
cs=0x1c2;eip=0x003026; 	T(CMP(*(dw*)(raddr(ds,si)), 0));	// 7373 cmp     word ptr [si], 0 ;~ 01C2:3026
cs=0x1c2;eip=0x003029; 	J(JNZ(loc_1322e));	// 7374 jnz     short loc_1322E ;~ 01C2:3029
cs=0x1c2;eip=0x00302b; 	T(SUB(si, 4));	// 7375 sub     si, 4 ;~ 01C2:302B
loc_1322e:
	// 5097 
cs=0x1c2;eip=0x00302e; 	T(CMP(cx, 1));	// 7378 cmp     cx, 1 ;~ 01C2:302E
cs=0x1c2;eip=0x003031; 	J(JS(locret_13236));	// 7379 js      short locret_13236 ;~ 01C2:3031
cs=0x1c2;eip=0x003033; 	J(JMP(loc_131ab));	// 7380 jmp     loc_131AB ;~ 01C2:3033
locret_13236:
	// 5098 
cs=0x1c2;eip=0x003036; 	R(RETN(0));	// 7384 retn ;~ 01C2:3036
loc_13237:
	// 5099 
cs=0x1c2;eip=0x003037; 	T(SUB(bp, ax));	// 7388 sub     bp, ax ;~ 01C2:3037
cs=0x1c2;eip=0x003039; 	X(PUSH(cx));	// 7389 push    cx ;~ 01C2:3039
cs=0x1c2;eip=0x00303a; 	T(MOV(cx, bx));	// 7390 mov     cx, bx ;~ 01C2:303A
cs=0x1c2;eip=0x00303c; 	T(TEST(byte_153a3, 0x0FF));	// 7391 test    byte_153A3, 0FFh ;~ 01C2:303C
cs=0x1c2;eip=0x003041; 	J(JZ(loc_13254));	// 7392 jz      short loc_13254 ;~ 01C2:3041
cs=0x1c2;eip=0x003043; 	T(CMP(byte_153a3, 1));	// 7393 cmp     byte_153A3, 1 ;~ 01C2:3043
cs=0x1c2;eip=0x003048; 	J(JZ(loc_1324f));	// 7394 jz      short loc_1324F ;~ 01C2:3048
cs=0x1c2;eip=0x00304a; 	T(MOV(ax, 0x5555));	// 7395 mov     ax, 5555h ;~ 01C2:304A
cs=0x1c2;eip=0x00304d; 	J(JMP(loc_13257));	// 7396 jmp     short loc_13257 ;~ 01C2:304D
loc_1324f:
	// 5100 
cs=0x1c2;eip=0x00304f; 	T(MOV(ax, 0x0AAAA));	// 7400 mov     ax, 0AAAAh ;~ 01C2:304F
cs=0x1c2;eip=0x003052; 	J(JMP(loc_13257));	// 7401 jmp     short loc_13257 ;~ 01C2:3052
loc_13254:
	// 5101 
cs=0x1c2;eip=0x003054; 	T(MOV(ax, 0x0FFFF));	// 7405 mov     ax, 0FFFFh ;~ 01C2:3054
loc_13257:
	// 5102 
cs=0x1c2;eip=0x003057; 	T(SHL(cl, 1));	// 7409 shl     cl, 1 ;~ 01C2:3057
cs=0x1c2;eip=0x003059; 	T(SHR(ax, cl));	// 7410 shr     ax, cl ;~ 01C2:3059
cs=0x1c2;eip=0x00305b; 	X(POP(cx));	// 7411 pop     cx ;~ 01C2:305B
cs=0x1c2;eip=0x00305c; 	T(MOV(bx, 0));	// 7412 mov     bx, 0 ;~ 01C2:305C
loc_1325f:
	// 5103 
cs=0x1c2;eip=0x00305f; 	X(OR(*(raddr(es,di)), ah));	// 7416 or      es:[di], ah ;~ 01C2:305F
cs=0x1c2;eip=0x003062; 	X(OR(*(raddr(es,di+1)), al));	// 7417 or      es:[di+1], al ;~ 01C2:3062
cs=0x1c2;eip=0x003066; 	T(ADD(di, 2));	// 7418 add     di, 2 ;~ 01C2:3066
cs=0x1c2;eip=0x003069; 	T(CMP(bp, 8));	// 7419 cmp     bp, 8 ;~ 01C2:3069
cs=0x1c2;eip=0x00306c; 	J(JA(loc_13271));	// 7420 ja      short loc_13271 ;~ 01C2:306C
cs=0x1c2;eip=0x00306e; 	J(JMP(loc_131db));	// 7421 jmp     loc_131DB ;~ 01C2:306E
loc_13271:
	// 5104 
cs=0x1c2;eip=0x003071; 	T(SUB(bp, 8));	// 7425 sub     bp, 8 ;~ 01C2:3071
cs=0x1c2;eip=0x003074; 	T(TEST(byte_153a3, 0x0FF));	// 7426 test    byte_153A3, 0FFh ;~ 01C2:3074
cs=0x1c2;eip=0x003079; 	J(JZ(loc_1328c));	// 7427 jz      short loc_1328C ;~ 01C2:3079
cs=0x1c2;eip=0x00307b; 	T(CMP(byte_153a3, 1));	// 7428 cmp     byte_153A3, 1 ;~ 01C2:307B
cs=0x1c2;eip=0x003080; 	J(JZ(loc_13287));	// 7429 jz      short loc_13287 ;~ 01C2:3080
cs=0x1c2;eip=0x003082; 	T(MOV(ax, 0x5555));	// 7430 mov     ax, 5555h ;~ 01C2:3082
cs=0x1c2;eip=0x003085; 	J(JMP(loc_1325f));	// 7431 jmp     short loc_1325F ;~ 01C2:3085
loc_13287:
	// 5105 
cs=0x1c2;eip=0x003087; 	T(MOV(ax, 0x0AAAA));	// 7435 mov     ax, 0AAAAh ;~ 01C2:3087
cs=0x1c2;eip=0x00308a; 	J(JMP(loc_1325f));	// 7436 jmp     short loc_1325F ;~ 01C2:308A
loc_1328c:
	// 5106 
cs=0x1c2;eip=0x00308c; 	T(MOV(ax, 0x0FFFF));	// 7440 mov     ax, 0FFFFh ;~ 01C2:308C
cs=0x1c2;eip=0x00308f; 	J(JMP(loc_1325f));	// 7441 jmp     short loc_1325F ;~ 01C2:308F
loc_13291:
	// 5107 
cs=0x1c2;eip=0x003091; 	T(MOV(si, 0x0DEE));	// 7445 mov     si, 0DEEh ;~ 01C2:3091
cs=0x1c2;eip=0x003094; 	T(MOV(bp, word_1542a));	// 7446 mov     bp, word_1542A ;~ 01C2:3094
cs=0x1c2;eip=0x003098; 	T(XOR(bp, word_1542c));	// 7447 xor     bp, word_1542C ;~ 01C2:3098
cs=0x1c2;eip=0x00309c; 	T(TEST(bp, 0x8000));	// 7448 test    bp, 8000h ;~ 01C2:309C
cs=0x1c2;eip=0x0030a0; 	J(JZ(loc_132a5));	// 7449 jz      short loc_132A5 ;~ 01C2:30A0
cs=0x1c2;eip=0x0030a2; 	T(MOV(si, 0x0DF4));	// 7450 mov     si, 0DF4h ;~ 01C2:30A2
loc_132a5:
	// 5108 
cs=0x1c2;eip=0x0030a5; 	T(TEST(word_1542a, 0x8000));	// 7453 test    word_1542A, 8000h ;~ 01C2:30A5
cs=0x1c2;eip=0x0030ab; 	J(JNZ(loc_132b3));	// 7454 jnz     short loc_132B3 ;~ 01C2:30AB
cs=0x1c2;eip=0x0030ad; 	T(MOV(ax, cx));	// 7455 mov     ax, cx ;~ 01C2:30AD
cs=0x1c2;eip=0x0030af; 	T(MOV(bx, dx));	// 7456 mov     bx, dx ;~ 01C2:30AF
cs=0x1c2;eip=0x0030b1; 	J(JMP(loc_132b7));	// 7457 jmp     short loc_132B7 ;~ 01C2:30B1
loc_132b3:
	// 5109 
cs=0x1c2;eip=0x0030b3; 	X(NEG(word_1542a));	// 7461 neg     word_1542A ;~ 01C2:30B3
loc_132b7:
	// 5110 
cs=0x1c2;eip=0x0030b7; 	T(TEST(word_1542c, 0x8000));	// 7464 test    word_1542C, 8000h ;~ 01C2:30B7
cs=0x1c2;eip=0x0030bd; 	J(JZ(loc_132c3));	// 7465 jz      short loc_132C3 ;~ 01C2:30BD
cs=0x1c2;eip=0x0030bf; 	X(NEG(word_1542c));	// 7466 neg     word_1542C ;~ 01C2:30BF
loc_132c3:
	// 5111 
cs=0x1c2;eip=0x0030c3; 	T(SAR(ax, 1));	// 7469 sar     ax, 1 ;~ 01C2:30C3
cs=0x1c2;eip=0x0030c5; 	J(JNC(loc_132cd));	// 7470 jnb     short loc_132CD ;~ 01C2:30C5
cs=0x1c2;eip=0x0030c7; 	T(ADD(di, 0x2000));	// 7471 add     di, 2000h ;~ 01C2:30C7
cs=0x1c2;eip=0x0030cb; 	T(INC(si));	// 7472 inc     si ;~ 01C2:30CB
cs=0x1c2;eip=0x0030cc; 	T(INC(si));	// 7473 inc     si ;~ 01C2:30CC
loc_132cd:
	// 5112 
cs=0x1c2;eip=0x0030cd; 	X(IMUL1_2(word_153a0));	// 7476 imul    word_153A0 ;~ 01C2:30CD
cs=0x1c2;eip=0x0030d1; 	T(ADD(di, ax));	// 7477 add     di, ax ;~ 01C2:30D1
cs=0x1c2;eip=0x0030d3; 	X(PUSH(bx));	// 7478 push    bx ;~ 01C2:30D3
cs=0x1c2;eip=0x0030d4; 	T(MOV(cx, 3));	// 7479 mov     cx, 3 ;~ 01C2:30D4
cs=0x1c2;eip=0x0030d7; 	T(SAR(bx, cl));	// 7480 sar     bx, cl ;~ 01C2:30D7
cs=0x1c2;eip=0x0030d9; 	T(ADD(di, bx));	// 7481 add     di, bx ;~ 01C2:30D9
cs=0x1c2;eip=0x0030db; 	T(ADD(di, bx));	// 7482 add     di, bx ;~ 01C2:30DB
cs=0x1c2;eip=0x0030dd; 	X(POP(bx));	// 7483 pop     bx ;~ 01C2:30DD
cs=0x1c2;eip=0x0030de; 	T(AND(bx, 7));	// 7484 and     bx, 7 ;~ 01C2:30DE
cs=0x1c2;eip=0x0030e2; 	X(PUSH(bx));	// 7485 push    bx ;~ 01C2:30E2
cs=0x1c2;eip=0x0030e3; 	T(MOV(cx, word_1542c));	// 7486 mov     cx, word_1542C ;~ 01C2:30E3
cs=0x1c2;eip=0x0030e7; 	T(MOV(bx, cx));	// 7487 mov     bx, cx ;~ 01C2:30E7
cs=0x1c2;eip=0x0030e9; 	T(SUB(bx, word_1542a));	// 7488 sub     bx, word_1542A ;~ 01C2:30E9
cs=0x1c2;eip=0x0030ed; 	X(MOV(word_153b6, bx));	// 7489 mov     word_153B6, bx ;~ 01C2:30ED
cs=0x1c2;eip=0x0030f1; 	T(MOV(bx, cx));	// 7490 mov     bx, cx ;~ 01C2:30F1
cs=0x1c2;eip=0x0030f3; 	T(SHR(bx, 1));	// 7491 shr     bx, 1 ;~ 01C2:30F3
cs=0x1c2;eip=0x0030f5; 	T(MOV(ax, word_1542a));	// 7492 mov     ax, word_1542A ;~ 01C2:30F5
cs=0x1c2;eip=0x0030f8; 	T(SUB(ax, bx));	// 7493 sub     ax, bx ;~ 01C2:30F8
cs=0x1c2;eip=0x0030fa; 	X(MOV(word_153a6, ax));	// 7494 mov     word_153A6, ax ;~ 01C2:30FA
cs=0x1c2;eip=0x0030fd; 	T(MOV(dx, 0));	// 7495 mov     dx, 0 ;~ 01C2:30FD
cs=0x1c2;eip=0x003100; 	X(POP(bx));	// 7496 pop     bx ;~ 01C2:3100
loc_13301:
	// 5113 
cs=0x1c2;eip=0x003101; 	T(SHL(bx, 1));	// 7499 shl     bx, 1 ;~ 01C2:3101
cs=0x1c2;eip=0x003103; 	T(TEST(byte_153a3, 0x0FF));	// 7500 test    byte_153A3, 0FFh ;~ 01C2:3103
cs=0x1c2;eip=0x003108; 	J(JZ(loc_13326));	// 7501 jz      short loc_13326 ;~ 01C2:3108
cs=0x1c2;eip=0x00310a; 	T(CMP(byte_153a3, 1));	// 7502 cmp     byte_153A3, 1 ;~ 01C2:310A
cs=0x1c2;eip=0x00310f; 	J(JZ(loc_13320));	// 7503 jz      short loc_13320 ;~ 01C2:310F
cs=0x1c2;eip=0x003111; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0DC8))));	// 7504 mov     ax, [bx+0DC8h] ;~ 01C2:3111
cs=0x1c2;eip=0x003115; 	T(OR(bx, bx));	// 7505 or      bx, bx ;~ 01C2:3115
cs=0x1c2;eip=0x003117; 	J(JNZ(loc_1332a));	// 7506 jnz     short loc_1332A ;~ 01C2:3117
cs=0x1c2;eip=0x003119; 	X(OR(*(raddr(es,di-1)), 1));	// 7507 or      byte ptr es:[di-1], 1 ;~ 01C2:3119
cs=0x1c2;eip=0x00311e; 	J(JMP(loc_1332a));	// 7508 jmp     short loc_1332A ;~ 01C2:311E
loc_13320:
	// 5114 
cs=0x1c2;eip=0x003120; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0DA6))));	// 7512 mov     ax, [bx+0DA6h] ;~ 01C2:3120
cs=0x1c2;eip=0x003124; 	J(JMP(loc_1332a));	// 7513 jmp     short loc_1332A ;~ 01C2:3124
loc_13326:
	// 5115 
cs=0x1c2;eip=0x003126; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0D84))));	// 7517 mov     ax, [bx+0D84h] ;~ 01C2:3126
loc_1332a:
	// 5116 
cs=0x1c2;eip=0x00312a; 	T(SHR(bx, 1));	// 7521 shr     bx, 1 ;~ 01C2:312A
cs=0x1c2;eip=0x00312c; 	X(OR(*(raddr(es,di)), ah));	// 7522 or      es:[di], ah ;~ 01C2:312C
cs=0x1c2;eip=0x00312f; 	X(OR(*(raddr(es,di+1)), al));	// 7523 or      es:[di+1], al ;~ 01C2:312F
cs=0x1c2;eip=0x003133; 	T(ADD(di, *(dw*)(raddr(ds,si))));	// 7524 add     di, [si] ;~ 01C2:3133
cs=0x1c2;eip=0x003135; 	T(INC(si));	// 7525 inc     si ;~ 01C2:3135
cs=0x1c2;eip=0x003136; 	T(INC(si));	// 7526 inc     si ;~ 01C2:3136
cs=0x1c2;eip=0x003137; 	T(CMP(*(dw*)(raddr(ds,si)), 0));	// 7527 cmp     word ptr [si], 0 ;~ 01C2:3137
cs=0x1c2;eip=0x00313a; 	J(JNZ(loc_1333f));	// 7528 jnz     short loc_1333F ;~ 01C2:313A
cs=0x1c2;eip=0x00313c; 	T(SUB(si, 4));	// 7529 sub     si, 4 ;~ 01C2:313C
loc_1333f:
	// 5117 
cs=0x1c2;eip=0x00313f; 	T(CMP(dx, word_153a6));	// 7532 cmp     dx, word_153A6 ;~ 01C2:313F
cs=0x1c2;eip=0x003143; 	J(JS(loc_1334b));	// 7533 js      short loc_1334B ;~ 01C2:3143
cs=0x1c2;eip=0x003145; 	T(SUB(dx, word_1542a));	// 7534 sub     dx, word_1542A ;~ 01C2:3145
cs=0x1c2;eip=0x003149; 	J(JMP(loc_13358));	// 7535 jmp     short loc_13358 ;~ 01C2:3149
loc_1334b:
	// 5118 
cs=0x1c2;eip=0x00314b; 	T(ADD(dx, word_153b6));	// 7539 add     dx, word_153B6 ;~ 01C2:314B
cs=0x1c2;eip=0x00314f; 	T(INC(bx));	// 7540 inc     bx ;~ 01C2:314F
cs=0x1c2;eip=0x003150; 	T(AND(bx, 7));	// 7541 and     bx, 7 ;~ 01C2:3150
cs=0x1c2;eip=0x003154; 	J(JNZ(loc_13358));	// 7542 jnz     short loc_13358 ;~ 01C2:3154
cs=0x1c2;eip=0x003156; 	T(INC(di));	// 7543 inc     di ;~ 01C2:3156
cs=0x1c2;eip=0x003157; 	T(INC(di));	// 7544 inc     di ;~ 01C2:3157
loc_13358:
	// 5119 
cs=0x1c2;eip=0x003158; 	J(LOOP(loc_13301));	// 7548 loop    loc_13301 ;~ 01C2:3158
cs=0x1c2;eip=0x00315a; 	J(JMP(locret_13067));	// 7549 jmp     locret_13067 ;~ 01C2:315A

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_13058: 	goto loc_13058;
        case m2c::kloc_13068: 	goto loc_13068;
        case m2c::kloc_13072: 	goto loc_13072;
        case m2c::kloc_1307d: 	goto loc_1307d;
        case m2c::kloc_13086: 	goto loc_13086;
        case m2c::kloc_1309a: 	goto loc_1309a;
        case m2c::kloc_130a8: 	goto loc_130a8;
        case m2c::kloc_130ac: 	goto loc_130ac;
        case m2c::kloc_130b8: 	goto loc_130b8;
        case m2c::kloc_130c2: 	goto loc_130c2;
        case m2c::kloc_13100: 	goto loc_13100;
        case m2c::kloc_13112: 	goto loc_13112;
        case m2c::kloc_1311c: 	goto loc_1311c;
        case m2c::kloc_13134: 	goto loc_13134;
        case m2c::kloc_13140: 	goto loc_13140;
        case m2c::kloc_13150: 	goto loc_13150;
        case m2c::kloc_13155: 	goto loc_13155;
        case m2c::kloc_1316d: 	goto loc_1316d;
        case m2c::kloc_13171: 	goto loc_13171;
        case m2c::kloc_13183: 	goto loc_13183;
        case m2c::kloc_1319f: 	goto loc_1319f;
        case m2c::kloc_131a4: 	goto loc_131a4;
        case m2c::kloc_131ab: 	goto loc_131ab;
        case m2c::kloc_131c7: 	goto loc_131c7;
        case m2c::kloc_131d2: 	goto loc_131d2;
        case m2c::kloc_131db: 	goto loc_131db;
        case m2c::kloc_131fd: 	goto loc_131fd;
        case m2c::kloc_13203: 	goto loc_13203;
        case m2c::kloc_13207: 	goto loc_13207;
        case m2c::kloc_13222: 	goto loc_13222;
        case m2c::kloc_1322e: 	goto loc_1322e;
        case m2c::kloc_13237: 	goto loc_13237;
        case m2c::kloc_1324f: 	goto loc_1324f;
        case m2c::kloc_13254: 	goto loc_13254;
        case m2c::kloc_13257: 	goto loc_13257;
        case m2c::kloc_1325f: 	goto loc_1325f;
        case m2c::kloc_13271: 	goto loc_13271;
        case m2c::kloc_13287: 	goto loc_13287;
        case m2c::kloc_1328c: 	goto loc_1328c;
        case m2c::kloc_13291: 	goto loc_13291;
        case m2c::kloc_132a5: 	goto loc_132a5;
        case m2c::kloc_132b3: 	goto loc_132b3;
        case m2c::kloc_132b7: 	goto loc_132b7;
        case m2c::kloc_132c3: 	goto loc_132c3;
        case m2c::kloc_132cd: 	goto loc_132cd;
        case m2c::kloc_13301: 	goto loc_13301;
        case m2c::kloc_13320: 	goto loc_13320;
        case m2c::kloc_13326: 	goto loc_13326;
        case m2c::kloc_1332a: 	goto loc_1332a;
        case m2c::kloc_1333f: 	goto loc_1333f;
        case m2c::kloc_1334b: 	goto loc_1334b;
        case m2c::kloc_13358: 	goto loc_13358;
        case m2c::klocret_13067: 	goto locret_13067;
        case m2c::klocret_13236: 	goto locret_13236;
        case m2c::kret_1c2_2e44: 	goto ret_1c2_2e44;
        case m2c::kret_1c2_2f8f: 	goto ret_1c2_2f8f;
        case m2c::ksub_13040: 	goto sub_13040;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1335d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1335d:
    _begin:
cs=0x1c2;eip=0x00315d; 	T(SAR(ax, 1));	// 7557 sar     ax, 1 ;~ 01C2:315D
ret_1c2_315f:
	// 5120 
cs=0x1c2;eip=0x00315f; 	J(JNC(loc_13365));	// 7558 jnb     short loc_13365 ;~ 01C2:315F
cs=0x1c2;eip=0x003161; 	T(ADD(di, 0x2000));	// 7559 add     di, 2000h ;~ 01C2:3161
loc_13365:
	// 5121 
cs=0x1c2;eip=0x003165; 	X(MUL1_2(word_153a0));	// 7562 mul     word_153A0 ;~ 01C2:3165
cs=0x1c2;eip=0x003169; 	T(ADD(di, ax));	// 7563 add     di, ax ;~ 01C2:3169
cs=0x1c2;eip=0x00316b; 	X(PUSH(bx));	// 7564 push    bx ;~ 01C2:316B
cs=0x1c2;eip=0x00316c; 	T(MOV(cx, 3));	// 7565 mov     cx, 3 ;~ 01C2:316C
cs=0x1c2;eip=0x00316f; 	T(SAR(bx, cl));	// 7566 sar     bx, cl ;~ 01C2:316F
cs=0x1c2;eip=0x003171; 	T(ADD(di, bx));	// 7567 add     di, bx ;~ 01C2:3171
cs=0x1c2;eip=0x003173; 	T(ADD(di, bx));	// 7568 add     di, bx ;~ 01C2:3173
cs=0x1c2;eip=0x003175; 	X(POP(bx));	// 7569 pop     bx ;~ 01C2:3175
cs=0x1c2;eip=0x003176; 	T(AND(bx, 7));	// 7570 and     bx, 7 ;~ 01C2:3176
cs=0x1c2;eip=0x00317a; 	T(SHL(bx, 1));	// 7571 shl     bx, 1 ;~ 01C2:317A
cs=0x1c2;eip=0x00317c; 	T(TEST(byte_153a3, 0x0FF));	// 7572 test    byte_153A3, 0FFh ;~ 01C2:317C
cs=0x1c2;eip=0x003181; 	J(JZ(loc_1339f));	// 7573 jz      short loc_1339F ;~ 01C2:3181
cs=0x1c2;eip=0x003183; 	T(CMP(byte_153a3, 1));	// 7574 cmp     byte_153A3, 1 ;~ 01C2:3183
cs=0x1c2;eip=0x003188; 	J(JZ(loc_13399));	// 7575 jz      short loc_13399 ;~ 01C2:3188
cs=0x1c2;eip=0x00318a; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0DC8))));	// 7576 mov     ax, [bx+0DC8h] ;~ 01C2:318A
cs=0x1c2;eip=0x00318e; 	T(OR(bx, bx));	// 7577 or      bx, bx ;~ 01C2:318E
cs=0x1c2;eip=0x003190; 	J(JNZ(loc_133a3));	// 7578 jnz     short loc_133A3 ;~ 01C2:3190
cs=0x1c2;eip=0x003192; 	X(OR(*(raddr(es,di-1)), 1));	// 7579 or      byte ptr es:[di-1], 1 ;~ 01C2:3192
cs=0x1c2;eip=0x003197; 	J(JMP(loc_133a3));	// 7580 jmp     short loc_133A3 ;~ 01C2:3197
loc_13399:
	// 5122 
cs=0x1c2;eip=0x003199; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0DA6))));	// 7584 mov     ax, [bx+0DA6h] ;~ 01C2:3199
cs=0x1c2;eip=0x00319d; 	J(JMP(loc_133a3));	// 7585 jmp     short loc_133A3 ;~ 01C2:319D
loc_1339f:
	// 5123 
cs=0x1c2;eip=0x00319f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0D84))));	// 7589 mov     ax, [bx+0D84h] ;~ 01C2:319F
loc_133a3:
	// 5124 
cs=0x1c2;eip=0x0031a3; 	T(SHR(bx, 1));	// 7593 shr     bx, 1 ;~ 01C2:31A3
cs=0x1c2;eip=0x0031a5; 	X(OR(*(raddr(es,di)), ah));	// 7594 or      es:[di], ah ;~ 01C2:31A5
cs=0x1c2;eip=0x0031a8; 	X(OR(*(raddr(es,di+1)), al));	// 7595 or      es:[di+1], al ;~ 01C2:31A8
cs=0x1c2;eip=0x0031ac; 	R(RETN(0));	// 7596 retn ;~ 01C2:31AC

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_13365: 	goto loc_13365;
        case m2c::kloc_13399: 	goto loc_13399;
        case m2c::kloc_1339f: 	goto loc_1339f;
        case m2c::kloc_133a3: 	goto loc_133a3;
        case m2c::kret_1c2_315f: 	goto ret_1c2_315f;
        case m2c::ksub_1335d: 	goto sub_1335d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_133ad(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_133ad:
    _begin:
cs=0x1c2;eip=0x0031ad; 	T(MOV(bp, word_153bc));	// 7604 mov     bp, word_153BC ;~ 01C2:31AD
ret_1c2_31b1:
	// 5125 
cs=0x1c2;eip=0x0031b1; 	T(CMP(ax, word_153bc));	// 7605 cmp     ax, word_153BC ;~ 01C2:31B1
cs=0x1c2;eip=0x0031b5; 	J(JS(loc_133c0));	// 7606 js      short loc_133C0 ;~ 01C2:31B5
cs=0x1c2;eip=0x0031b7; 	T(CMP(cx, word_153bc));	// 7607 cmp     cx, word_153BC ;~ 01C2:31B7
cs=0x1c2;eip=0x0031bb; 	J(JNS(loc_13416));	// 7608 jns     short loc_13416 ;~ 01C2:31BB
cs=0x1c2;eip=0x0031bd; 	J(CALL(sub_1346f,0));	// 7609 call    sub_1346F ;~ 01C2:31BD
loc_133c0:
	// 5126 
cs=0x1c2;eip=0x0031c0; 	T(CMP(cx, word_153bc));	// 7612 cmp     cx, word_153BC ;~ 01C2:31C0
cs=0x1c2;eip=0x0031c4; 	J(JS(loc_133d5));	// 7613 js      short loc_133D5 ;~ 01C2:31C4
cs=0x1c2;eip=0x0031c6; 	J(JZ(loc_133d5));	// 7614 jz      short loc_133D5 ;~ 01C2:31C6
cs=0x1c2;eip=0x0031c8; 	T(CMP(ax, cx));	// 7615 cmp     ax, cx ;~ 01C2:31C8
cs=0x1c2;eip=0x0031ca; 	J(JZ(loc_13416));	// 7616 jz      short loc_13416 ;~ 01C2:31CA
cs=0x1c2;eip=0x0031cc; 	J(CALL(sub_134a3,0));	// 7617 call    sub_134A3 ;~ 01C2:31CC
cs=0x1c2;eip=0x0031cf; 	J(CALL(sub_1346f,0));	// 7618 call    sub_1346F ;~ 01C2:31CF
cs=0x1c2;eip=0x0031d2; 	J(CALL(sub_134a3,0));	// 7619 call    sub_134A3 ;~ 01C2:31D2
loc_133d5:
	// 5127 
cs=0x1c2;eip=0x0031d5; 	T(MOV(bp, word_153be));	// 7623 mov     bp, word_153BE ;~ 01C2:31D5
cs=0x1c2;eip=0x0031d9; 	T(CMP(ax, word_153be));	// 7624 cmp     ax, word_153BE ;~ 01C2:31D9
cs=0x1c2;eip=0x0031dd; 	J(JNS(loc_133ea));	// 7625 jns     short loc_133EA ;~ 01C2:31DD
cs=0x1c2;eip=0x0031df; 	T(CMP(cx, word_153be));	// 7626 cmp     cx, word_153BE ;~ 01C2:31DF
cs=0x1c2;eip=0x0031e3; 	J(JZ(loc_13416));	// 7627 jz      short loc_13416 ;~ 01C2:31E3
cs=0x1c2;eip=0x0031e5; 	J(JS(loc_13416));	// 7628 js      short loc_13416 ;~ 01C2:31E5
cs=0x1c2;eip=0x0031e7; 	J(CALL(sub_1346f,0));	// 7629 call    sub_1346F ;~ 01C2:31E7
loc_133ea:
	// 5128 
cs=0x1c2;eip=0x0031ea; 	T(CMP(cx, word_153be));	// 7632 cmp     cx, word_153BE ;~ 01C2:31EA
cs=0x1c2;eip=0x0031ee; 	J(JNS(loc_133f9));	// 7633 jns     short loc_133F9 ;~ 01C2:31EE
cs=0x1c2;eip=0x0031f0; 	J(CALL(sub_134a3,0));	// 7634 call    sub_134A3 ;~ 01C2:31F0
cs=0x1c2;eip=0x0031f3; 	J(CALL(sub_1346f,0));	// 7635 call    sub_1346F ;~ 01C2:31F3
cs=0x1c2;eip=0x0031f6; 	J(CALL(sub_134a3,0));	// 7636 call    sub_134A3 ;~ 01C2:31F6
loc_133f9:
	// 5129 
cs=0x1c2;eip=0x0031f9; 	T(MOV(bp, word_153c0));	// 7639 mov     bp, word_153C0 ;~ 01C2:31F9
cs=0x1c2;eip=0x0031fd; 	T(CMP(bx, word_153c0));	// 7640 cmp     bx, word_153C0 ;~ 01C2:31FD
cs=0x1c2;eip=0x003201; 	J(JNS(loc_13418));	// 7641 jns     short loc_13418 ;~ 01C2:3201
cs=0x1c2;eip=0x003203; 	T(CMP(dx, word_153c0));	// 7642 cmp     dx, word_153C0 ;~ 01C2:3203
cs=0x1c2;eip=0x003207; 	J(JS(loc_13416));	// 7643 js      short loc_13416 ;~ 01C2:3207
cs=0x1c2;eip=0x003209; 	J(JZ(loc_13416));	// 7644 jz      short loc_13416 ;~ 01C2:3209
cs=0x1c2;eip=0x00320b; 	J(CALL(sub_134b0,0));	// 7645 call    sub_134B0 ;~ 01C2:320B
cs=0x1c2;eip=0x00320e; 	J(CALL(sub_1346f,0));	// 7646 call    sub_1346F ;~ 01C2:320E
cs=0x1c2;eip=0x003211; 	J(CALL(sub_134b0,0));	// 7647 call    sub_134B0 ;~ 01C2:3211
cs=0x1c2;eip=0x003214; 	J(JMP(loc_13418));	// 7648 jmp     short loc_13418 ;~ 01C2:3214
loc_13416:
	// 5130 
cs=0x1c2;eip=0x003216; 	J(JMP(loc_1346d));	// 7653 jmp     short loc_1346D ;~ 01C2:3216
loc_13418:
	// 5131 
cs=0x1c2;eip=0x003218; 	T(CMP(dx, word_153c0));	// 7658 cmp     dx, word_153C0 ;~ 01C2:3218
cs=0x1c2;eip=0x00321c; 	J(JNS(loc_1342d));	// 7659 jns     short loc_1342D ;~ 01C2:321C
cs=0x1c2;eip=0x00321e; 	J(CALL(sub_134a3,0));	// 7660 call    sub_134A3 ;~ 01C2:321E
cs=0x1c2;eip=0x003221; 	J(CALL(sub_134b0,0));	// 7661 call    sub_134B0 ;~ 01C2:3221
cs=0x1c2;eip=0x003224; 	J(CALL(sub_1346f,0));	// 7662 call    sub_1346F ;~ 01C2:3224
cs=0x1c2;eip=0x003227; 	J(CALL(sub_134b0,0));	// 7663 call    sub_134B0 ;~ 01C2:3227
cs=0x1c2;eip=0x00322a; 	J(CALL(sub_134a3,0));	// 7664 call    sub_134A3 ;~ 01C2:322A
loc_1342d:
	// 5132 
cs=0x1c2;eip=0x00322d; 	T(MOV(bp, word_153c2));	// 7667 mov     bp, word_153C2 ;~ 01C2:322D
cs=0x1c2;eip=0x003231; 	T(CMP(bx, word_153c2));	// 7668 cmp     bx, word_153C2 ;~ 01C2:3231
cs=0x1c2;eip=0x003235; 	J(JS(loc_13446));	// 7669 js      short loc_13446 ;~ 01C2:3235
cs=0x1c2;eip=0x003237; 	T(CMP(dx, word_153c2));	// 7670 cmp     dx, word_153C2 ;~ 01C2:3237
cs=0x1c2;eip=0x00323b; 	J(JNS(loc_1346d));	// 7671 jns     short loc_1346D ;~ 01C2:323B
cs=0x1c2;eip=0x00323d; 	J(CALL(sub_134b0,0));	// 7672 call    sub_134B0 ;~ 01C2:323D
cs=0x1c2;eip=0x003240; 	J(CALL(sub_1346f,0));	// 7673 call    sub_1346F ;~ 01C2:3240
cs=0x1c2;eip=0x003243; 	J(CALL(sub_134b0,0));	// 7674 call    sub_134B0 ;~ 01C2:3243
loc_13446:
	// 5133 
cs=0x1c2;eip=0x003246; 	T(CMP(dx, word_153c2));	// 7677 cmp     dx, word_153C2 ;~ 01C2:3246
cs=0x1c2;eip=0x00324a; 	J(JS(loc_1346b));	// 7678 js      short loc_1346B ;~ 01C2:324A
cs=0x1c2;eip=0x00324c; 	T(CMP(bx, dx));	// 7679 cmp     bx, dx ;~ 01C2:324C
cs=0x1c2;eip=0x00324e; 	J(JZ(loc_1346d));	// 7680 jz      short loc_1346D ;~ 01C2:324E
cs=0x1c2;eip=0x003250; 	J(CALL(sub_134b0,0));	// 7681 call    sub_134B0 ;~ 01C2:3250
cs=0x1c2;eip=0x003253; 	J(CALL(sub_134a3,0));	// 7682 call    sub_134A3 ;~ 01C2:3253
cs=0x1c2;eip=0x003256; 	J(CALL(sub_1346f,0));	// 7683 call    sub_1346F ;~ 01C2:3256
cs=0x1c2;eip=0x003259; 	J(CALL(sub_134a3,0));	// 7684 call    sub_134A3 ;~ 01C2:3259
cs=0x1c2;eip=0x00325c; 	J(CALL(sub_134b0,0));	// 7685 call    sub_134B0 ;~ 01C2:325C
cs=0x1c2;eip=0x00325f; 	T(CMP(cx, word_153bc));	// 7686 cmp     cx, word_153BC ;~ 01C2:325F
cs=0x1c2;eip=0x003263; 	J(JNS(loc_1346d));	// 7687 jns     short loc_1346D ;~ 01C2:3263
cs=0x1c2;eip=0x003265; 	T(CMP(cx, word_153be));	// 7688 cmp     cx, word_153BE ;~ 01C2:3265
cs=0x1c2;eip=0x003269; 	J(JS(loc_1346d));	// 7689 js      short loc_1346D ;~ 01C2:3269
loc_1346b:
	// 5134 
cs=0x1c2;eip=0x00326b; 	T(CLC);	// 7692 clc ;~ 01C2:326B
cs=0x1c2;eip=0x00326c; 	R(RETN(0));	// 7693 retn ;~ 01C2:326C
loc_1346d:
	// 5135 
cs=0x1c2;eip=0x00326d; 	T(STC);	// 7698 stc ;~ 01C2:326D
cs=0x1c2;eip=0x00326e; 	R(RETN(0));	// 7699 retn ;~ 01C2:326E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_133c0: 	goto loc_133c0;
        case m2c::kloc_133d5: 	goto loc_133d5;
        case m2c::kloc_133ea: 	goto loc_133ea;
        case m2c::kloc_133f9: 	goto loc_133f9;
        case m2c::kloc_13416: 	goto loc_13416;
        case m2c::kloc_13418: 	goto loc_13418;
        case m2c::kloc_1342d: 	goto loc_1342d;
        case m2c::kloc_13446: 	goto loc_13446;
        case m2c::kloc_1346b: 	goto loc_1346b;
        case m2c::kloc_1346d: 	goto loc_1346d;
        case m2c::kret_1c2_31b1: 	goto ret_1c2_31b1;
        case m2c::ksub_133ad: 	goto sub_133ad;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1346f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1346f:
    _begin:
cs=0x1c2;eip=0x00326f; 	X(MOV(word_1543a, bp));	// 7708 mov     word_1543A, bp ;~ 01C2:326F
ret_1c2_3273:
	// 5136 
cs=0x1c2;eip=0x003273; 	X(MOV(word_1543c, ax));	// 7709 mov     word_1543C, ax ;~ 01C2:3273
cs=0x1c2;eip=0x003276; 	X(MOV(word_1543e, dx));	// 7710 mov     word_1543E, dx ;~ 01C2:3276
cs=0x1c2;eip=0x00327a; 	T(MOV(ax, cx));	// 7711 mov     ax, cx ;~ 01C2:327A
cs=0x1c2;eip=0x00327c; 	T(SUB(ax, word_1543c));	// 7712 sub     ax, word_1543C ;~ 01C2:327C
cs=0x1c2;eip=0x003280; 	X(MOV(word_15440, ax));	// 7713 mov     word_15440, ax ;~ 01C2:3280
cs=0x1c2;eip=0x003283; 	T(MOV(ax, dx));	// 7714 mov     ax, dx ;~ 01C2:3283
cs=0x1c2;eip=0x003285; 	T(SUB(ax, bx));	// 7715 sub     ax, bx ;~ 01C2:3285
cs=0x1c2;eip=0x003287; 	X(MOV(word_15442, ax));	// 7716 mov     word_15442, ax ;~ 01C2:3287
cs=0x1c2;eip=0x00328a; 	T(MOV(ax, word_1543a));	// 7717 mov     ax, word_1543A ;~ 01C2:328A
cs=0x1c2;eip=0x00328d; 	T(SUB(ax, word_1543c));	// 7718 sub     ax, word_1543C ;~ 01C2:328D
cs=0x1c2;eip=0x003291; 	X(IMUL1_2(word_15442));	// 7719 imul    word_15442 ;~ 01C2:3291
cs=0x1c2;eip=0x003295; 	X(IDIV2(word_15440));	// 7720 idiv    word_15440 ;~ 01C2:3295
cs=0x1c2;eip=0x003299; 	T(ADD(bx, ax));	// 7721 add     bx, ax ;~ 01C2:3299
cs=0x1c2;eip=0x00329b; 	T(MOV(ax, word_1543a));	// 7722 mov     ax, word_1543A ;~ 01C2:329B
cs=0x1c2;eip=0x00329e; 	T(MOV(dx, word_1543e));	// 7723 mov     dx, word_1543E ;~ 01C2:329E
cs=0x1c2;eip=0x0032a2; 	R(RETN(0));	// 7724 retn ;~ 01C2:32A2

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_3273: 	goto ret_1c2_3273;
        case m2c::ksub_1346f: 	goto sub_1346f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_134a3(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_134a3:
    _begin:
cs=0x1c2;eip=0x0032a3; 	T(MOV(di, ax));	// 7733 mov     di, ax ;~ 01C2:32A3
ret_1c2_32a5:
	// 5137 
cs=0x1c2;eip=0x0032a5; 	T(MOV(ax, cx));	// 7734 mov     ax, cx ;~ 01C2:32A5
cs=0x1c2;eip=0x0032a7; 	T(MOV(cx, di));	// 7735 mov     cx, di ;~ 01C2:32A7
cs=0x1c2;eip=0x0032a9; 	T(MOV(di, bx));	// 7736 mov     di, bx ;~ 01C2:32A9
cs=0x1c2;eip=0x0032ab; 	T(MOV(bx, dx));	// 7737 mov     bx, dx ;~ 01C2:32AB
cs=0x1c2;eip=0x0032ad; 	T(MOV(dx, di));	// 7738 mov     dx, di ;~ 01C2:32AD
cs=0x1c2;eip=0x0032af; 	R(RETN(0));	// 7739 retn ;~ 01C2:32AF

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_32a5: 	goto ret_1c2_32a5;
        case m2c::ksub_134a3: 	goto sub_134a3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_134b0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_134b0:
    _begin:
cs=0x1c2;eip=0x0032b0; 	T(MOV(di, ax));	// 7748 mov     di, ax ;~ 01C2:32B0
ret_1c2_32b2:
	// 5138 
cs=0x1c2;eip=0x0032b2; 	T(MOV(ax, bx));	// 7749 mov     ax, bx ;~ 01C2:32B2
cs=0x1c2;eip=0x0032b4; 	T(MOV(bx, di));	// 7750 mov     bx, di ;~ 01C2:32B4
cs=0x1c2;eip=0x0032b6; 	T(MOV(di, cx));	// 7751 mov     di, cx ;~ 01C2:32B6
cs=0x1c2;eip=0x0032b8; 	T(MOV(cx, dx));	// 7752 mov     cx, dx ;~ 01C2:32B8
cs=0x1c2;eip=0x0032ba; 	T(MOV(dx, di));	// 7753 mov     dx, di ;~ 01C2:32BA
cs=0x1c2;eip=0x0032bc; 	R(RETN(0));	// 7754 retn ;~ 01C2:32BC

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_32b2: 	goto ret_1c2_32b2;
        case m2c::ksub_134b0: 	goto sub_134b0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_134e8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_134e8:
    _begin:
cs=0x1c2;eip=0x0032e8; 	T(MOV(ah, 0));	// 7798 mov     ah, 0 ;~ 01C2:32E8
ret_1c2_32ea:
	// 5141 
cs=0x1c2;eip=0x0032ea; 	R(_INT(0x16));	// 7799 int     16h             ; KEYBOARD - READ CHAR FROM BUFFER, WAIT IF EMPTY ;~ 01C2:32EA
cs=0x1c2;eip=0x0032ec; 	R(RETN(0));	// 7801 retn ;~ 01C2:32EC

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_32ea: 	goto ret_1c2_32ea;
        case m2c::ksub_134e8: 	goto sub_134e8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_134ed(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_134ed:
    _begin:
cs=0x1c2;eip=0x0032ed; 	X(PUSH(ax));	// 7810 push    ax ;~ 01C2:32ED
loc_134ee:
	// 5142 
cs=0x1c2;eip=0x0032ee; 	J(CALL(sub_134e1,0));	// 7813 call    sub_134E1 ;~ 01C2:32EE
cs=0x1c2;eip=0x0032f1; 	J(JZ(loc_134f8));	// 7814 jz      short loc_134F8 ;~ 01C2:32F1
cs=0x1c2;eip=0x0032f3; 	J(CALL(sub_134e8,0));	// 7815 call    sub_134E8 ;~ 01C2:32F3
cs=0x1c2;eip=0x0032f6; 	J(JMP(loc_134ee));	// 7816 jmp     short loc_134EE ;~ 01C2:32F6
loc_134f8:
	// 5143 
cs=0x1c2;eip=0x0032f8; 	X(POP(ax));	// 7820 pop     ax ;~ 01C2:32F8
cs=0x1c2;eip=0x0032f9; 	R(RETN(0));	// 7821 retn ;~ 01C2:32F9

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_134ee: 	goto loc_134ee;
        case m2c::kloc_134f8: 	goto loc_134f8;
        case m2c::ksub_134ed: 	goto sub_134ed;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_134fa(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_134fa:
    _begin:
cs=0x1c2;eip=0x0032fa; 	X(PUSH(ax));	// 7830 push    ax ;~ 01C2:32FA
ret_1c2_32fb:
	// 5144 
cs=0x1c2;eip=0x0032fb; 	X(PUSH(ds));	// 7831 push    ds ;~ 01C2:32FB
cs=0x1c2;eip=0x0032fc; 	T(MOV(ax, 0x40));	// 7832 mov     ax, 40h ; '@' ;~ 01C2:32FC
cs=0x1c2;eip=0x0032ff; 	T(MOV(ds, ax));	// 7833 mov     ds, ax ;~ 01C2:32FF
cs=0x1c2;eip=0x003301; 	T(MOV(di, 0x10));	// 7835 mov     di, 10h ;~ 01C2:3301
cs=0x1c2;eip=0x003304; 	X(AND(*(dw*)(raddr(ds,di)), 0x0FFDF));	// 7836 and     word ptr [di], 0FFDFh ;~ 01C2:3304
cs=0x1c2;eip=0x003308; 	T(MOV(ax, 4));	// 7837 mov     ax, 4 ;~ 01C2:3308
cs=0x1c2;eip=0x00330b; 	R(_INT(0x10));	// 7838 int     10h             ; - VIDEO - SET VIDEO MODE ;~ 01C2:330B
cs=0x1c2;eip=0x00330d; 	X(POP(ds));	// 7840 pop     ds ;~ 01C2:330D
cs=0x1c2;eip=0x00330e; 	X(POP(ax));	// 7842 pop     ax ;~ 01C2:330E
cs=0x1c2;eip=0x00330f; 	R(RETN(0));	// 7843 retn ;~ 01C2:330F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_32fb: 	goto ret_1c2_32fb;
        case m2c::ksub_134fa: 	goto sub_134fa;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13510(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13510:
    _begin:
cs=0x1c2;eip=0x003310; 	X(PUSH(ax));	// 7851 push    ax ;~ 01C2:3310
ret_1c2_3311:
	// 5145 
cs=0x1c2;eip=0x003311; 	X(PUSH(ds));	// 7852 push    ds ;~ 01C2:3311
cs=0x1c2;eip=0x003312; 	T(MOV(ax, 0x40));	// 7853 mov     ax, 40h ; '@' ;~ 01C2:3312
cs=0x1c2;eip=0x003315; 	T(MOV(ds, ax));	// 7854 mov     ds, ax ;~ 01C2:3315
cs=0x1c2;eip=0x003317; 	T(MOV(di, 0x10));	// 7856 mov     di, 10h ;~ 01C2:3317
cs=0x1c2;eip=0x00331a; 	X(OR(*(dw*)(raddr(ds,di)), 0x20));	// 7857 or      word ptr [di], 20h ;~ 01C2:331A
cs=0x1c2;eip=0x00331e; 	T(MOV(ax, 2));	// 7858 mov     ax, 2 ;~ 01C2:331E
cs=0x1c2;eip=0x003321; 	R(_INT(0x10));	// 7859 int     10h             ; - VIDEO - SET VIDEO MODE ;~ 01C2:3321
cs=0x1c2;eip=0x003323; 	X(POP(ds));	// 7861 pop     ds ;~ 01C2:3323
cs=0x1c2;eip=0x003324; 	X(POP(ax));	// 7863 pop     ax ;~ 01C2:3324
cs=0x1c2;eip=0x003325; 	R(RETN(0));	// 7864 retn ;~ 01C2:3325

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_3311: 	goto ret_1c2_3311;
        case m2c::ksub_13510: 	goto sub_13510;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13526(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13526:
    _begin:
cs=0x1c2;eip=0x003326; 	X(PUSH(ax));	// 7873 push    ax ;~ 01C2:3326
ret_1c2_3327:
	// 5146 
cs=0x1c2;eip=0x003327; 	X(PUSH(bx));	// 7874 push    bx ;~ 01C2:3327
cs=0x1c2;eip=0x003328; 	T(MOV(ax, 0x0B00));	// 7875 mov     ax, 0B00h ;~ 01C2:3328
cs=0x1c2;eip=0x00332b; 	T(MOV(bh, 0));	// 7876 mov     bh, 0 ;~ 01C2:332B
cs=0x1c2;eip=0x00332d; 	T(MOV(bl, *(raddr(ds,0x0E86))));	// 7877 mov     bl, ds:0E86h ;~ 01C2:332D
cs=0x1c2;eip=0x003331; 	R(_INT(0x10));	// 7878 int     10h             ; - VIDEO - SET COLOR PALETTE ;~ 01C2:3331
cs=0x1c2;eip=0x003333; 	T(MOV(ax, 0x0B00));	// 7881 mov     ax, 0B00h ;~ 01C2:3333
cs=0x1c2;eip=0x003336; 	T(MOV(bh, 1));	// 7882 mov     bh, 1 ;~ 01C2:3336
cs=0x1c2;eip=0x003338; 	T(MOV(bl, *(raddr(ds,0x0E87))));	// 7883 mov     bl, ds:0E87h ;~ 01C2:3338
cs=0x1c2;eip=0x00333c; 	R(_INT(0x10));	// 7884 int     10h             ; - VIDEO - SET COLOR PALETTE ;~ 01C2:333C
cs=0x1c2;eip=0x00333e; 	X(POP(bx));	// 7887 pop     bx ;~ 01C2:333E
cs=0x1c2;eip=0x00333f; 	X(POP(ax));	// 7888 pop     ax ;~ 01C2:333F
cs=0x1c2;eip=0x003340; 	R(RETN(0));	// 7889 retn ;~ 01C2:3340

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_3327: 	goto ret_1c2_3327;
        case m2c::ksub_13526: 	goto sub_13526;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13541(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13541:
    _begin:
cs=0x1c2;eip=0x003341; 	X(MOV(byte_15453, 0));	// 7899 mov     byte_15453, 0 ;~ 01C2:3341
ret_1c2_3346:
	// 5147 
cs=0x1c2;eip=0x003346; 	X(MOV(byte_15454, 0));	// 7900 mov     byte_15454, 0 ;~ 01C2:3346
cs=0x1c2;eip=0x00334b; 	X(PUSH(dx));	// 7901 push    dx ;~ 01C2:334B
cs=0x1c2;eip=0x00334c; 	T(MOV(cx, 0x0FF));	// 7902 mov     cx, 0FFh ;~ 01C2:334C
cs=0x1c2;eip=0x00334f; 	T(MOV(dx, 0x201));	// 7903 mov     dx, 201h ;~ 01C2:334F
cs=0x1c2;eip=0x003352; 	T(CLI);	// 7904 cli ;~ 01C2:3352
cs=0x1c2;eip=0x003353; 	R(OUT(dx, al));	// 7905 out     dx, al          ; Game I/O port ;~ 01C2:3353
loc_13554:
	// 5148 
cs=0x1c2;eip=0x003354; 	R(IN(al, dx));	// 7910 in      al, dx          ; Game I/O port ;~ 01C2:3354
cs=0x1c2;eip=0x003355; 	T(NOP);	// 7913 nop ;~ 01C2:3355
cs=0x1c2;eip=0x003356; 	T(NOP);	// 7914 nop ;~ 01C2:3356
cs=0x1c2;eip=0x003357; 	T(NOP);	// 7915 nop ;~ 01C2:3357
cs=0x1c2;eip=0x003358; 	T(TEST(al, 1));	// 7916 test    al, 1 ;~ 01C2:3358
cs=0x1c2;eip=0x00335a; 	J(JZ(loc_13576));	// 7917 jz      short loc_13576 ;~ 01C2:335A
cs=0x1c2;eip=0x00335c; 	T(TEST(al, 2));	// 7918 test    al, 2 ;~ 01C2:335C
cs=0x1c2;eip=0x00335e; 	J(LOOPNE(loc_13554));	// 7919 loopne  loc_13554 ;~ 01C2:335E
cs=0x1c2;eip=0x003360; 	X(MOV(byte_15454, cl));	// 7920 mov     byte_15454, cl ;~ 01C2:3360
loc_13564:
	// 5149 
cs=0x1c2;eip=0x003364; 	R(IN(al, dx));	// 7923 in      al, dx          ; Game I/O port ;~ 01C2:3364
cs=0x1c2;eip=0x003365; 	T(NOP);	// 7926 nop ;~ 01C2:3365
cs=0x1c2;eip=0x003366; 	T(NOP);	// 7927 nop ;~ 01C2:3366
cs=0x1c2;eip=0x003367; 	T(NOP);	// 7928 nop ;~ 01C2:3367
cs=0x1c2;eip=0x003368; 	T(TEST(al, 2));	// 7929 test    al, 2 ;~ 01C2:3368
cs=0x1c2;eip=0x00336a; 	T(TEST(al, 2));	// 7930 test    al, 2 ;~ 01C2:336A
cs=0x1c2;eip=0x00336c; 	T(TEST(al, 1));	// 7931 test    al, 1 ;~ 01C2:336C
cs=0x1c2;eip=0x00336e; 	J(LOOPNE(loc_13564));	// 7932 loopne  loc_13564 ;~ 01C2:336E
cs=0x1c2;eip=0x003370; 	X(MOV(byte_15453, cl));	// 7933 mov     byte_15453, cl ;~ 01C2:3370
cs=0x1c2;eip=0x003374; 	J(JMP(loc_1358a));	// 7934 jmp     short loc_1358A ;~ 01C2:3374
loc_13576:
	// 5150 
cs=0x1c2;eip=0x003376; 	X(MOV(byte_15453, cl));	// 7938 mov     byte_15453, cl ;~ 01C2:3376
loc_1357a:
	// 5151 
cs=0x1c2;eip=0x00337a; 	R(IN(al, dx));	// 7941 in      al, dx          ; Game I/O port ;~ 01C2:337A
cs=0x1c2;eip=0x00337b; 	T(NOP);	// 7944 nop ;~ 01C2:337B
cs=0x1c2;eip=0x00337c; 	T(NOP);	// 7945 nop ;~ 01C2:337C
cs=0x1c2;eip=0x00337d; 	T(NOP);	// 7946 nop ;~ 01C2:337D
cs=0x1c2;eip=0x00337e; 	T(TEST(al, 1));	// 7947 test    al, 1 ;~ 01C2:337E
cs=0x1c2;eip=0x003380; 	T(TEST(al, 1));	// 7948 test    al, 1 ;~ 01C2:3380
cs=0x1c2;eip=0x003382; 	T(TEST(al, 2));	// 7949 test    al, 2 ;~ 01C2:3382
cs=0x1c2;eip=0x003384; 	J(LOOPNE(loc_1357a));	// 7950 loopne  loc_1357A ;~ 01C2:3384
cs=0x1c2;eip=0x003386; 	X(MOV(byte_15454, cl));	// 7951 mov     byte_15454, cl ;~ 01C2:3386
loc_1358a:
	// 5152 
cs=0x1c2;eip=0x00338a; 	T(STI);	// 7954 sti ;~ 01C2:338A
cs=0x1c2;eip=0x00338b; 	X(POP(dx));	// 7955 pop     dx ;~ 01C2:338B
cs=0x1c2;eip=0x00338c; 	R(RETN(0));	// 7956 retn ;~ 01C2:338C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_13554: 	goto loc_13554;
        case m2c::kloc_13564: 	goto loc_13564;
        case m2c::kloc_13576: 	goto loc_13576;
        case m2c::kloc_1357a: 	goto loc_1357a;
        case m2c::kloc_1358a: 	goto loc_1358a;
        case m2c::kret_1c2_3346: 	goto ret_1c2_3346;
        case m2c::ksub_13541: 	goto sub_13541;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1358d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1358d:
    _begin:
cs=0x1c2;eip=0x00338d; 	X(MOV(byte_15452, 0));	// 7965 mov     byte_15452, 0 ;~ 01C2:338D
ret_1c2_3392:
	// 5153 
cs=0x1c2;eip=0x003392; 	J(CALL(sub_134e1,0));	// 7966 call    sub_134E1 ;~ 01C2:3392
cs=0x1c2;eip=0x003395; 	J(JZ(loc_135f4));	// 7967 jz      short loc_135F4 ;~ 01C2:3395
cs=0x1c2;eip=0x003397; 	J(CALL(sub_134e8,0));	// 7968 call    sub_134E8 ;~ 01C2:3397
cs=0x1c2;eip=0x00339a; 	J(CALL(sub_134ed,0));	// 7969 call    sub_134ED ;~ 01C2:339A
cs=0x1c2;eip=0x00339d; 	T(MOV(cx, 0x1F));	// 7970 mov     cx, 1Fh ;~ 01C2:339D
cs=0x1c2;eip=0x0033a0; 	T(MOV(di, 0x0E1E));	// 7971 mov     di, 0E1Eh ;~ 01C2:33A0
cs=0x1c2;eip=0x0033a3; 	T(OR(al, al));	// 7972 or      al, al ;~ 01C2:33A3
cs=0x1c2;eip=0x0033a5; 	J(JZ(loc_135a9));	// 7973 jz      short loc_135A9 ;~ 01C2:33A5
cs=0x1c2;eip=0x0033a7; 	T(XOR(ah, ah));	// 7974 xor     ah, ah ;~ 01C2:33A7
loc_135a9:
	// 5154 
	// 7977 repne scasw ;~ 01C2:33A9
cs=0x1c2;eip=0x0033a9; 	T(	REPNE SCASW);	// 7977 repne scasw ;~ 01C2:33A9
cs=0x1c2;eip=0x0033ab; 	J(JNZ(loc_135f4));	// 7978 jnz     short loc_135F4 ;~ 01C2:33AB
cs=0x1c2;eip=0x0033ad; 	T(SUB(cx, 0x1B));	// 7979 sub     cx, 1Bh ;~ 01C2:33AD
cs=0x1c2;eip=0x0033b0; 	J(JNS(loc_135c5));	// 7980 jns     short loc_135C5 ;~ 01C2:33B0
cs=0x1c2;eip=0x0033b2; 	T(MOV(al, 8));	// 7981 mov     al, 8 ;~ 01C2:33B2
cs=0x1c2;eip=0x0033b4; 	T(SUB(al, cl));	// 7982 sub     al, cl ;~ 01C2:33B4
cs=0x1c2;eip=0x0033b6; 	T(CMP(al, 9));	// 7983 cmp     al, 9 ;~ 01C2:33B6
cs=0x1c2;eip=0x0033b8; 	J(JNZ(loc_135c2));	// 7984 jnz     short loc_135C2 ;~ 01C2:33B8
cs=0x1c2;eip=0x0033ba; 	X(MOV(byte_15452, 0x0FF));	// 7985 mov     byte_15452, 0FFh ;~ 01C2:33BA
cs=0x1c2;eip=0x0033bf; 	T(MOV(al, byte_1545d));	// 7986 mov     al, byte_1545D ;~ 01C2:33BF
loc_135c2:
	// 5155 
cs=0x1c2;eip=0x0033c2; 	T(OR(al, al));	// 7989 or      al, al ;~ 01C2:33C2
cs=0x1c2;eip=0x0033c4; 	R(RETN(0));	// 7990 retn ;~ 01C2:33C4
loc_135c5:
	// 5156 
cs=0x1c2;eip=0x0033c5; 	T(MOV(bx, 0x0E5C));	// 7994 mov     bx, 0E5Ch ;~ 01C2:33C5
cs=0x1c2;eip=0x0033c8; 	T(MOV(al, cl));	// 7995 mov     al, cl ;~ 01C2:33C8
cs=0x1c2;eip=0x0033ca; 	T(XLAT);	// 7996 xlat ;~ 01C2:33CA
cs=0x1c2;eip=0x0033cb; 	T(MOV(ah, byte_1545d));	// 7997 mov     ah, byte_1545D ;~ 01C2:33CB
cs=0x1c2;eip=0x0033cf; 	T(CMP(ah, al));	// 7998 cmp     ah, al ;~ 01C2:33CF
cs=0x1c2;eip=0x0033d1; 	J(JZ(loc_135f1));	// 7999 jz      short loc_135F1 ;~ 01C2:33D1
cs=0x1c2;eip=0x0033d3; 	T(OR(ah, ah));	// 8000 or      ah, ah ;~ 01C2:33D3
cs=0x1c2;eip=0x0033d5; 	J(JZ(loc_135ee));	// 8001 jz      short loc_135EE ;~ 01C2:33D5
cs=0x1c2;eip=0x0033d7; 	T(MOV(bx, 0x0E60));	// 8002 mov     bx, 0E60h ;~ 01C2:33D7
cs=0x1c2;eip=0x0033da; 	T(DEC(ah));	// 8003 dec     ah ;~ 01C2:33DA
cs=0x1c2;eip=0x0033dc; 	T(MOV(cl, ah));	// 8004 mov     cl, ah ;~ 01C2:33DC
cs=0x1c2;eip=0x0033de; 	T(SHL(cx, 1));	// 8005 shl     cx, 1 ;~ 01C2:33DE
cs=0x1c2;eip=0x0033e0; 	T(SHL(cx, 1));	// 8006 shl     cx, 1 ;~ 01C2:33E0
cs=0x1c2;eip=0x0033e2; 	T(ADD(bx, cx));	// 8007 add     bx, cx ;~ 01C2:33E2
cs=0x1c2;eip=0x0033e4; 	T(XOR(ah, ah));	// 8008 xor     ah, ah ;~ 01C2:33E4
cs=0x1c2;eip=0x0033e6; 	T(DEC(al));	// 8009 dec     al ;~ 01C2:33E6
cs=0x1c2;eip=0x0033e8; 	T(SHR(al, 1));	// 8010 shr     al, 1 ;~ 01C2:33E8
cs=0x1c2;eip=0x0033ea; 	T(ADD(bx, ax));	// 8011 add     bx, ax ;~ 01C2:33EA
cs=0x1c2;eip=0x0033ec; 	T(MOV(al, *(raddr(ds,bx))));	// 8012 mov     al, [bx] ;~ 01C2:33EC
loc_135ee:
	// 5157 
cs=0x1c2;eip=0x0033ee; 	X(MOV(byte_1545d, al));	// 8015 mov     byte_1545D, al ;~ 01C2:33EE
loc_135f1:
	// 5158 
cs=0x1c2;eip=0x0033f1; 	T(OR(al, al));	// 8018 or      al, al ;~ 01C2:33F1
cs=0x1c2;eip=0x0033f3; 	R(RETN(0));	// 8019 retn ;~ 01C2:33F3
loc_135f4:
	// 5159 
cs=0x1c2;eip=0x0033f4; 	T(TEST(byte_1545a, 0x0FF));	// 8024 test    byte_1545A, 0FFh ;~ 01C2:33F4
cs=0x1c2;eip=0x0033f9; 	J(JZ(loc_1362c));	// 8025 jz      short loc_1362C ;~ 01C2:33F9
cs=0x1c2;eip=0x0033fb; 	J(CALL(sub_136a8,0));	// 8026 call    sub_136A8 ;~ 01C2:33FB
cs=0x1c2;eip=0x0033fe; 	J(JZ(loc_13605));	// 8027 jz      short loc_13605 ;~ 01C2:33FE
cs=0x1c2;eip=0x003400; 	X(MOV(byte_15452, 0x0FF));	// 8028 mov     byte_15452, 0FFh ;~ 01C2:3400
loc_13605:
	// 5160 
cs=0x1c2;eip=0x003405; 	J(CALL(sub_13541,0));	// 8031 call    sub_13541 ;~ 01C2:3405
cs=0x1c2;eip=0x003408; 	T(MOV(cl, 0));	// 8032 mov     cl, 0 ;~ 01C2:3408
cs=0x1c2;eip=0x00340a; 	T(MOV(al, byte_15453));	// 8033 mov     al, byte_15453 ;~ 01C2:340A
cs=0x1c2;eip=0x00340d; 	T(CMP(al, byte_15455));	// 8034 cmp     al, byte_15455 ;~ 01C2:340D
cs=0x1c2;eip=0x003411; 	J(JNC(loc_13632));	// 8035 jnb     short loc_13632 ;~ 01C2:3411
cs=0x1c2;eip=0x003413; 	T(CMP(al, byte_15456));	// 8036 cmp     al, byte_15456 ;~ 01C2:3413
cs=0x1c2;eip=0x003417; 	J(JBE(loc_1363d));	// 8037 jbe     short loc_1363D ;~ 01C2:3417
loc_13619:
	// 5161 
cs=0x1c2;eip=0x003419; 	T(MOV(al, byte_15454));	// 8041 mov     al, byte_15454 ;~ 01C2:3419
cs=0x1c2;eip=0x00341c; 	T(CMP(al, byte_15457));	// 8042 cmp     al, byte_15457 ;~ 01C2:341C
cs=0x1c2;eip=0x003420; 	J(JNC(loc_1364a));	// 8043 jnb     short loc_1364A ;~ 01C2:3420
cs=0x1c2;eip=0x003422; 	T(CMP(al, byte_15458));	// 8044 cmp     al, byte_15458 ;~ 01C2:3422
cs=0x1c2;eip=0x003426; 	J(JBE(loc_13655));	// 8045 jbe     short loc_13655 ;~ 01C2:3426
cs=0x1c2;eip=0x003428; 	T(OR(cl, cl));	// 8046 or      cl, cl ;~ 01C2:3428
cs=0x1c2;eip=0x00342a; 	J(JNZ(loc_13695));	// 8047 jnz     short loc_13695 ;~ 01C2:342A
loc_1362c:
	// 5162 
cs=0x1c2;eip=0x00342c; 	T(MOV(al, byte_1545d));	// 8050 mov     al, byte_1545D ;~ 01C2:342C
cs=0x1c2;eip=0x00342f; 	T(OR(al, al));	// 8051 or      al, al ;~ 01C2:342F
cs=0x1c2;eip=0x003431; 	R(RETN(0));	// 8052 retn ;~ 01C2:3431
loc_13632:
	// 5163 
cs=0x1c2;eip=0x003432; 	T(OR(cl, 1));	// 8056 or      cl, 1 ;~ 01C2:3432
cs=0x1c2;eip=0x003435; 	T(SUB(al, byte_15455));	// 8057 sub     al, byte_15455 ;~ 01C2:3435
cs=0x1c2;eip=0x003439; 	T(MOV(ah, al));	// 8058 mov     ah, al ;~ 01C2:3439
cs=0x1c2;eip=0x00343b; 	J(JMP(loc_13619));	// 8059 jmp     short loc_13619 ;~ 01C2:343B
loc_1363d:
	// 5164 
cs=0x1c2;eip=0x00343d; 	T(OR(cl, 2));	// 8063 or      cl, 2 ;~ 01C2:343D
cs=0x1c2;eip=0x003440; 	T(SUB(al, byte_15456));	// 8064 sub     al, byte_15456 ;~ 01C2:3440
cs=0x1c2;eip=0x003444; 	T(NEG(al));	// 8065 neg     al ;~ 01C2:3444
cs=0x1c2;eip=0x003446; 	T(MOV(ah, al));	// 8066 mov     ah, al ;~ 01C2:3446
cs=0x1c2;eip=0x003448; 	J(JMP(loc_13619));	// 8067 jmp     short loc_13619 ;~ 01C2:3448
loc_1364a:
	// 5165 
cs=0x1c2;eip=0x00344a; 	T(OR(cl, 4));	// 8071 or      cl, 4 ;~ 01C2:344A
cs=0x1c2;eip=0x00344d; 	T(SUB(al, byte_15457));	// 8072 sub     al, byte_15457 ;~ 01C2:344D
cs=0x1c2;eip=0x003451; 	T(MOV(bl, al));	// 8073 mov     bl, al ;~ 01C2:3451
cs=0x1c2;eip=0x003453; 	J(JMP(loc_13660));	// 8074 jmp     short loc_13660 ;~ 01C2:3453
loc_13655:
	// 5166 
cs=0x1c2;eip=0x003455; 	T(OR(cl, 8));	// 8078 or      cl, 8 ;~ 01C2:3455
cs=0x1c2;eip=0x003458; 	T(SUB(al, byte_15458));	// 8079 sub     al, byte_15458 ;~ 01C2:3458
cs=0x1c2;eip=0x00345c; 	T(NEG(al));	// 8080 neg     al ;~ 01C2:345C
cs=0x1c2;eip=0x00345e; 	T(MOV(bl, al));	// 8081 mov     bl, al ;~ 01C2:345E
loc_13660:
	// 5167 
cs=0x1c2;eip=0x003460; 	J(JMP(loc_13695));	// 8084 jmp     short loc_13695 ;~ 01C2:3460
ret_1c2_3462:
	// 5168 
cs=0x1c2;eip=0x003462; 	T(TEST(cl, 3));	// 8086 test    cl, 3 ;~ 01C2:3462
cs=0x1c2;eip=0x003465; 	J(JZ(loc_13695));	// 8087 jz      short loc_13695 ;~ 01C2:3465
cs=0x1c2;eip=0x003467; 	T(CMP(ah, bl));	// 8088 cmp     ah, bl ;~ 01C2:3467
cs=0x1c2;eip=0x003469; 	J(JC(loc_13681));	// 8089 jb      short loc_13681 ;~ 01C2:3469
cs=0x1c2;eip=0x00346b; 	T(TEST(cl, 1));	// 8090 test    cl, 1 ;~ 01C2:346B
cs=0x1c2;eip=0x00346e; 	J(JZ(loc_13677));	// 8091 jz      short loc_13677 ;~ 01C2:346E
cs=0x1c2;eip=0x003470; 	X(MOV(byte_15459, 2));	// 8092 mov     byte_15459, 2 ;~ 01C2:3470
cs=0x1c2;eip=0x003475; 	J(JMP(loc_1367c));	// 8093 jmp     short loc_1367C ;~ 01C2:3475
loc_13677:
	// 5169 
cs=0x1c2;eip=0x003477; 	X(MOV(byte_15459, 0));	// 8097 mov     byte_15459, 0 ;~ 01C2:3477
loc_1367c:
	// 5170 
cs=0x1c2;eip=0x00347c; 	T(AND(cl, 3));	// 8100 and     cl, 3 ;~ 01C2:347C
cs=0x1c2;eip=0x00347f; 	J(JMP(loc_13695));	// 8101 jmp     short loc_13695 ;~ 01C2:347F
loc_13681:
	// 5171 
cs=0x1c2;eip=0x003481; 	T(TEST(cl, 4));	// 8105 test    cl, 4 ;~ 01C2:3481
cs=0x1c2;eip=0x003484; 	J(JZ(loc_1368d));	// 8106 jz      short loc_1368D ;~ 01C2:3484
cs=0x1c2;eip=0x003486; 	X(MOV(byte_15459, 3));	// 8107 mov     byte_15459, 3 ;~ 01C2:3486
cs=0x1c2;eip=0x00348b; 	J(JMP(loc_13692));	// 8108 jmp     short loc_13692 ;~ 01C2:348B
loc_1368d:
	// 5172 
cs=0x1c2;eip=0x00348d; 	X(MOV(byte_15459, 1));	// 8112 mov     byte_15459, 1 ;~ 01C2:348D
loc_13692:
	// 5173 
cs=0x1c2;eip=0x003492; 	T(AND(cl, 0x0C));	// 8115 and     cl, 0Ch ;~ 01C2:3492
loc_13695:
	// 5174 
cs=0x1c2;eip=0x003495; 	T(MOV(al, cl));	// 8119 mov     al, cl ;~ 01C2:3495
cs=0x1c2;eip=0x003497; 	X(PUSH(bx));	// 8120 push    bx ;~ 01C2:3497
cs=0x1c2;eip=0x003498; 	T(MOV(bx, 0x0E88));	// 8121 mov     bx, 0E88h ;~ 01C2:3498
cs=0x1c2;eip=0x00349b; 	T(XLAT);	// 8122 xlat ;~ 01C2:349B
cs=0x1c2;eip=0x00349c; 	X(POP(bx));	// 8123 pop     bx ;~ 01C2:349C
cs=0x1c2;eip=0x00349d; 	T(TEST(byte_15450, 8));	// 8124 test    byte_15450, 8 ;~ 01C2:349D
cs=0x1c2;eip=0x0034a2; 	X(MOV(byte_1545d, 0));	// 8125 mov     byte_1545D, 0 ;~ 01C2:34A2
cs=0x1c2;eip=0x0034a7; 	R(RETN(0));	// 8126 retn ;~ 01C2:34A7

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_135a9: 	goto loc_135a9;
        case m2c::kloc_135c2: 	goto loc_135c2;
        case m2c::kloc_135c5: 	goto loc_135c5;
        case m2c::kloc_135ee: 	goto loc_135ee;
        case m2c::kloc_135f1: 	goto loc_135f1;
        case m2c::kloc_135f4: 	goto loc_135f4;
        case m2c::kloc_13605: 	goto loc_13605;
        case m2c::kloc_13619: 	goto loc_13619;
        case m2c::kloc_1362c: 	goto loc_1362c;
        case m2c::kloc_13632: 	goto loc_13632;
        case m2c::kloc_1363d: 	goto loc_1363d;
        case m2c::kloc_1364a: 	goto loc_1364a;
        case m2c::kloc_13655: 	goto loc_13655;
        case m2c::kloc_13660: 	goto loc_13660;
        case m2c::kloc_13677: 	goto loc_13677;
        case m2c::kloc_1367c: 	goto loc_1367c;
        case m2c::kloc_13681: 	goto loc_13681;
        case m2c::kloc_1368d: 	goto loc_1368d;
        case m2c::kloc_13692: 	goto loc_13692;
        case m2c::kloc_13695: 	goto loc_13695;
        case m2c::kret_1c2_3392: 	goto ret_1c2_3392;
        case m2c::kret_1c2_3462: 	goto ret_1c2_3462;
        case m2c::ksub_1358d: 	goto sub_1358d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_136a8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_136a8:
    _begin:
cs=0x1c2;eip=0x0034a8; 	X(PUSH(dx));	// 8135 push    dx ;~ 01C2:34A8
ret_1c2_34a9:
	// 5175 
cs=0x1c2;eip=0x0034a9; 	T(MOV(dx, 0x201));	// 8136 mov     dx, 201h ;~ 01C2:34A9
cs=0x1c2;eip=0x0034ac; 	R(IN(al, dx));	// 8137 in      al, dx          ; Game I/O port ;~ 01C2:34AC
cs=0x1c2;eip=0x0034ad; 	X(POP(dx));	// 8140 pop     dx ;~ 01C2:34AD
cs=0x1c2;eip=0x0034ae; 	T(XOR(al, 0x0FF));	// 8141 xor     al, 0FFh ;~ 01C2:34AE
cs=0x1c2;eip=0x0034b0; 	T(AND(al, 0x30));	// 8142 and     al, 30h ;~ 01C2:34B0
cs=0x1c2;eip=0x0034b2; 	T(OR(al, al));	// 8143 or      al, al ;~ 01C2:34B2
cs=0x1c2;eip=0x0034b4; 	R(RETN(0));	// 8144 retn ;~ 01C2:34B4

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_34a9: 	goto ret_1c2_34a9;
        case m2c::ksub_136a8: 	goto sub_136a8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_136b5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_136b5:
    _begin:
cs=0x1c2;eip=0x0034b5; 	T(TEST(byte_15451, 0x0FF));	// 8152 test    byte_15451, 0FFh ;~ 01C2:34B5
ret_1c2_34ba:
	// 5176 
cs=0x1c2;eip=0x0034ba; 	J(JZ(loc_136bd));	// 8153 jz      short loc_136BD ;~ 01C2:34BA
cs=0x1c2;eip=0x0034bc; 	R(RETN(0));	// 8154 retn ;~ 01C2:34BC
loc_136bd:
	// 5177 
cs=0x1c2;eip=0x0034bd; 	J(CALL(sub_13541,0));	// 8158 call    sub_13541 ;~ 01C2:34BD
cs=0x1c2;eip=0x0034c0; 	X(MOV(byte_15451, 0x0FF));	// 8159 mov     byte_15451, 0FFh ;~ 01C2:34C0
cs=0x1c2;eip=0x0034c5; 	X(MOV(byte_1545a, 0x0FF));	// 8160 mov     byte_1545A, 0FFh ;~ 01C2:34C5
cs=0x1c2;eip=0x0034ca; 	T(MOV(al, byte_15453));	// 8161 mov     al, byte_15453 ;~ 01C2:34CA
cs=0x1c2;eip=0x0034cd; 	T(MOV(bl, al));	// 8162 mov     bl, al ;~ 01C2:34CD
cs=0x1c2;eip=0x0034cf; 	X(MOV(byte_1545b, al));	// 8163 mov     byte_1545B, al ;~ 01C2:34CF
cs=0x1c2;eip=0x0034d2; 	T(ADD(al, 0x14));	// 8164 add     al, 14h ;~ 01C2:34D2
cs=0x1c2;eip=0x0034d4; 	X(MOV(byte_15455, al));	// 8165 mov     byte_15455, al ;~ 01C2:34D4
cs=0x1c2;eip=0x0034d7; 	T(MOV(al, bl));	// 8166 mov     al, bl ;~ 01C2:34D7
cs=0x1c2;eip=0x0034d9; 	T(SUB(al, 0x14));	// 8167 sub     al, 14h ;~ 01C2:34D9
cs=0x1c2;eip=0x0034db; 	X(MOV(byte_15456, al));	// 8168 mov     byte_15456, al ;~ 01C2:34DB
cs=0x1c2;eip=0x0034de; 	T(MOV(al, byte_15454));	// 8169 mov     al, byte_15454 ;~ 01C2:34DE
cs=0x1c2;eip=0x0034e1; 	T(MOV(dl, al));	// 8170 mov     dl, al ;~ 01C2:34E1
cs=0x1c2;eip=0x0034e3; 	X(MOV(byte_1545c, al));	// 8171 mov     byte_1545C, al ;~ 01C2:34E3
cs=0x1c2;eip=0x0034e6; 	T(ADD(al, 0x14));	// 8172 add     al, 14h ;~ 01C2:34E6
cs=0x1c2;eip=0x0034e8; 	X(MOV(byte_15457, al));	// 8173 mov     byte_15457, al ;~ 01C2:34E8
cs=0x1c2;eip=0x0034eb; 	T(MOV(al, dl));	// 8174 mov     al, dl ;~ 01C2:34EB
cs=0x1c2;eip=0x0034ed; 	T(SUB(al, 0x14));	// 8175 sub     al, 14h ;~ 01C2:34ED
cs=0x1c2;eip=0x0034ef; 	X(MOV(byte_15458, al));	// 8176 mov     byte_15458, al ;~ 01C2:34EF
cs=0x1c2;eip=0x0034f2; 	T(CMP(dl, 0x10));	// 8177 cmp     dl, 10h ;~ 01C2:34F2
cs=0x1c2;eip=0x0034f5; 	J(JC(loc_13707));	// 8178 jb      short loc_13707 ;~ 01C2:34F5
cs=0x1c2;eip=0x0034f7; 	T(CMP(bl, 0x10));	// 8179 cmp     bl, 10h ;~ 01C2:34F7
cs=0x1c2;eip=0x0034fa; 	J(JC(loc_13707));	// 8180 jb      short loc_13707 ;~ 01C2:34FA
cs=0x1c2;eip=0x0034fc; 	T(CMP(dl, 0x0F5));	// 8181 cmp     dl, 0F5h ; 'õ' ;~ 01C2:34FC
cs=0x1c2;eip=0x0034ff; 	J(JNC(loc_13707));	// 8182 jnb     short loc_13707 ;~ 01C2:34FF
cs=0x1c2;eip=0x003501; 	T(CMP(bl, 0x0F5));	// 8183 cmp     bl, 0F5h ; 'õ' ;~ 01C2:3501
cs=0x1c2;eip=0x003504; 	J(JNC(loc_13707));	// 8184 jnb     short loc_13707 ;~ 01C2:3504
cs=0x1c2;eip=0x003506; 	R(RETN(0));	// 8185 retn ;~ 01C2:3506
loc_13707:
	// 5178 
cs=0x1c2;eip=0x003507; 	X(MOV(byte_1545a, 0));	// 8190 mov     byte_1545A, 0 ;~ 01C2:3507
cs=0x1c2;eip=0x00350c; 	R(RETN(0));	// 8191 retn ;~ 01C2:350C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_136bd: 	goto loc_136bd;
        case m2c::kloc_13707: 	goto loc_13707;
        case m2c::kret_1c2_34ba: 	goto ret_1c2_34ba;
        case m2c::ksub_136b5: 	goto sub_136b5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1370d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1370d:
    _begin:
cs=0x1c2;eip=0x00350d; 	X(PUSH(dx));	// 8199 push    dx ;~ 01C2:350D
ret_1c2_350e:
	// 5179 
cs=0x1c2;eip=0x00350e; 	X(PUSH(ax));	// 8200 push    ax ;~ 01C2:350E
cs=0x1c2;eip=0x00350f; 	T(MOV(dx, 0x3D4));	// 8201 mov     dx, 3D4h ;~ 01C2:350F
cs=0x1c2;eip=0x003512; 	T(MOV(al, 2));	// 8202 mov     al, 2 ;~ 01C2:3512
cs=0x1c2;eip=0x003514; 	R(OUT(dx, al));	// 8203 out     dx, al          ; Video: CRT cntrlr addr ;~ 01C2:3514
cs=0x1c2;eip=0x003515; 	T(MOV(al, byte_154c3));	// 8205 mov     al, byte_154C3 ;~ 01C2:3515
cs=0x1c2;eip=0x003518; 	T(INC(dx));	// 8206 inc     dx ;~ 01C2:3518
cs=0x1c2;eip=0x003519; 	R(OUT(dx, al));	// 8207 out     dx, al          ; Video: CRT controller internal registers ;~ 01C2:3519
cs=0x1c2;eip=0x00351a; 	X(POP(ax));	// 8208 pop     ax ;~ 01C2:351A
cs=0x1c2;eip=0x00351b; 	X(POP(dx));	// 8209 pop     dx ;~ 01C2:351B
cs=0x1c2;eip=0x00351c; 	R(RETN(0));	// 8210 retn ;~ 01C2:351C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_350e: 	goto ret_1c2_350e;
        case m2c::ksub_1370d: 	goto sub_1370d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_137b6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_137b6:
    _begin:
cs=0x1c2;eip=0x0035b6; 	X(MOV(byte_154ee, 0x0FF));	// 8332 mov     byte_154EE, 0FFh ;~ 01C2:35B6
ret_1c2_35bb:
	// 5191 
cs=0x1c2;eip=0x0035bb; 	X(MOV(word_14753, 0));	// 8333 mov     word_14753, 0 ;~ 01C2:35BB
cs=0x1c2;eip=0x0035c1; 	X(MOV(byte_14b1f, 0));	// 8334 mov     byte_14B1F, 0 ;~ 01C2:35C1
cs=0x1c2;eip=0x0035c6; 	X(MOV(word_14755, 0));	// 8335 mov     word_14755, 0 ;~ 01C2:35C6
cs=0x1c2;eip=0x0035cc; 	T(MOV(bx, 0x0FA6));	// 8336 mov     bx, 0FA6h ;~ 01C2:35CC
cs=0x1c2;eip=0x0035cf; 	T(MOV(al, byte_15619));	// 8337 mov     al, byte_15619 ;~ 01C2:35CF
cs=0x1c2;eip=0x0035d2; 	T(XLAT);	// 8338 xlat ;~ 01C2:35D2
cs=0x1c2;eip=0x0035d3; 	T(XOR(ah, ah));	// 8339 xor     ah, ah ;~ 01C2:35D3
cs=0x1c2;eip=0x0035d5; 	X(MOV(word_14758, ax));	// 8340 mov     word_14758, ax ;~ 01C2:35D5
cs=0x1c2;eip=0x0035d8; 	T(MOV(bx, 0x0FAD));	// 8341 mov     bx, 0FADh ;~ 01C2:35D8
cs=0x1c2;eip=0x0035db; 	T(MOV(al, byte_15619));	// 8342 mov     al, byte_15619 ;~ 01C2:35DB
cs=0x1c2;eip=0x0035de; 	T(XLAT);	// 8343 xlat ;~ 01C2:35DE
cs=0x1c2;eip=0x0035df; 	X(MOV(word_14b24, ax));	// 8344 mov     word_14B24, ax ;~ 01C2:35DF
cs=0x1c2;eip=0x0035e2; 	T(MOV(si, 0x113));	// 8345 mov     si, 113h ;~ 01C2:35E2
cs=0x1c2;eip=0x0035e5; 	T(MOV(di, 0x11C));	// 8346 mov     di, 11Ch ;~ 01C2:35E5
cs=0x1c2;eip=0x0035e8; 	T(MOV(cx, 9));	// 8347 mov     cx, 9 ;~ 01C2:35E8
	// 8348 rep movsb ;~ 01C2:35EB
cs=0x1c2;eip=0x0035eb; 	X(	REP MOVSB);	// 8348 rep movsb ;~ 01C2:35EB
cs=0x1c2;eip=0x0035ed; 	X(MOV(byte_14fb0, 0));	// 8349 mov     byte_14FB0, 0 ;~ 01C2:35ED
cs=0x1c2;eip=0x0035f2; 	X(MOV(byte_14fb1, 0));	// 8350 mov     byte_14FB1, 0 ;~ 01C2:35F2
cs=0x1c2;eip=0x0035f7; 	X(MOV(byte_15346, 0));	// 8351 mov     byte_15346, 0 ;~ 01C2:35F7
cs=0x1c2;eip=0x0035fc; 	X(MOV(byte_15242, 0));	// 8352 mov     byte_15242, 0 ;~ 01C2:35FC
cs=0x1c2;eip=0x003601; 	X(MOV(byte_1488c, 0));	// 8353 mov     byte_1488C, 0 ;~ 01C2:3601
cs=0x1c2;eip=0x003606; 	X(MOV(byte_1488b, 0));	// 8354 mov     byte_1488B, 0 ;~ 01C2:3606
cs=0x1c2;eip=0x00360b; 	X(MOV(byte_1475b, 0));	// 8355 mov     byte_1475B, 0 ;~ 01C2:360B
cs=0x1c2;eip=0x003610; 	J(CALL(sub_138c5,0));	// 8356 call    sub_138C5 ;~ 01C2:3610
cs=0x1c2;eip=0x003613; 	X(MOV(byte_14765, 1));	// 8357 mov     byte_14765, 1 ;~ 01C2:3613
cs=0x1c2;eip=0x003618; 	R(RETN(0));	// 8358 retn ;~ 01C2:3618

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_35bb: 	goto ret_1c2_35bb;
        case m2c::ksub_137b6: 	goto sub_137b6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_138a8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_138a8:
    _begin:
cs=0x1c2;eip=0x0036a8; 	T(MOV(si, 0x3B2));	// 8438 mov     si, 3B2h ;~ 01C2:36A8
ret_1c2_36ab:
	// 5199 
cs=0x1c2;eip=0x0036ab; 	T(MOV(cx, 0x13));	// 8439 mov     cx, 13h ;~ 01C2:36AB
loc_138ae:
	// 5200 
cs=0x1c2;eip=0x0036ae; 	T(LODSB);	// 8442 lodsb ;~ 01C2:36AE
cs=0x1c2;eip=0x0036af; 	T(OR(al, al));	// 8443 or      al, al ;~ 01C2:36AF
cs=0x1c2;eip=0x0036b1; 	J(JZ(loc_138c0));	// 8444 jz      short loc_138C0 ;~ 01C2:36B1
cs=0x1c2;eip=0x0036b3; 	X(SUB(*(dw*)(raddr(ds,si)), bx));	// 8445 sub     [si], bx ;~ 01C2:36B3
cs=0x1c2;eip=0x0036b5; 	T(ADD(si, 2));	// 8446 add     si, 2 ;~ 01C2:36B5
cs=0x1c2;eip=0x0036b8; 	X(SUB(*(dw*)(raddr(ds,si)), dx));	// 8447 sub     [si], dx ;~ 01C2:36B8
cs=0x1c2;eip=0x0036ba; 	T(ADD(si, 0x0A));	// 8448 add     si, 0Ah ;~ 01C2:36BA
loc_138bd:
	// 5201 
cs=0x1c2;eip=0x0036bd; 	J(LOOP(loc_138ae));	// 8451 loop    loc_138AE ;~ 01C2:36BD
cs=0x1c2;eip=0x0036bf; 	R(RETN(0));	// 8452 retn ;~ 01C2:36BF
loc_138c0:
	// 5202 
cs=0x1c2;eip=0x0036c0; 	T(ADD(si, 0x0C));	// 8456 add     si, 0Ch ;~ 01C2:36C0
cs=0x1c2;eip=0x0036c3; 	J(JMP(loc_138bd));	// 8457 jmp     short loc_138BD ;~ 01C2:36C3

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_138ae: 	goto loc_138ae;
        case m2c::kloc_138bd: 	goto loc_138bd;
        case m2c::kloc_138c0: 	goto loc_138c0;
        case m2c::kret_1c2_36ab: 	goto ret_1c2_36ab;
        case m2c::ksub_138a8: 	goto sub_138a8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_138c5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_138c5:
    _begin:
cs=0x1c2;eip=0x0036c5; 	T(MOV(cx, 0x0F7));	// 8465 mov     cx, 0F7h ; '÷' ;~ 01C2:36C5
ret_1c2_36c8:
	// 5203 
cs=0x1c2;eip=0x0036c8; 	T(XOR(ah, ah));	// 8466 xor     ah, ah ;~ 01C2:36C8
cs=0x1c2;eip=0x0036ca; 	T(MOV(di, 0x3B2));	// 8467 mov     di, 3B2h ;~ 01C2:36CA
	// 8468 rep stosb ;~ 01C2:36CD
cs=0x1c2;eip=0x0036cd; 	X(	REP STOSB);	// 8468 rep stosb ;~ 01C2:36CD
cs=0x1c2;eip=0x0036cf; 	T(MOV(di, 0x3B2));	// 8469 mov     di, 3B2h ;~ 01C2:36CF
cs=0x1c2;eip=0x0036d2; 	T(MOV(si, 0x0EAF));	// 8470 mov     si, 0EAFh ;~ 01C2:36D2
cs=0x1c2;eip=0x0036d5; 	T(MOV(cx, 0x0F7));	// 8471 mov     cx, 0F7h ; '÷' ;~ 01C2:36D5
	// 8472 rep movsb ;~ 01C2:36D8
cs=0x1c2;eip=0x0036d8; 	X(	REP MOVSB);	// 8472 rep movsb ;~ 01C2:36D8
cs=0x1c2;eip=0x0036da; 	J(CALL(sub_13819,0));	// 8473 call    sub_13819 ;~ 01C2:36DA
cs=0x1c2;eip=0x0036dd; 	J(CALL(sub_138e1,0));	// 8474 call    sub_138E1 ;~ 01C2:36DD
cs=0x1c2;eip=0x0036e0; 	R(RETN(0));	// 8475 retn ;~ 01C2:36E0

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_36c8: 	goto ret_1c2_36c8;
        case m2c::ksub_138c5: 	goto sub_138c5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_138fc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_138fc:
    _begin:
cs=0x1c2;eip=0x0036fc; 	T(TEST(byte_14b06, 0x0FF));	// 8505 test    byte_14B06, 0FFh ;~ 01C2:36FC
ret_1c2_3701:
	// 5207 
cs=0x1c2;eip=0x003701; 	J(JZ(loc_13907));	// 8506 jz      short loc_13907 ;~ 01C2:3701
cs=0x1c2;eip=0x003703; 	J(CALL(sub_139f9,0));	// 8507 call    sub_139F9 ;~ 01C2:3703
cs=0x1c2;eip=0x003706; 	R(RETN(0));	// 8508 retn ;~ 01C2:3706
loc_13907:
	// 5208 
cs=0x1c2;eip=0x003707; 	X(MOV(byte_148f8, 0x0FF));	// 8512 mov     byte_148F8, 0FFh ;~ 01C2:3707
cs=0x1c2;eip=0x00370c; 	X(MOV(byte_14b16, 0));	// 8513 mov     byte_14B16, 0 ;~ 01C2:370C
cs=0x1c2;eip=0x003711; 	T(MOV(ax, word_14878));	// 8514 mov     ax, word_14878 ;~ 01C2:3711
cs=0x1c2;eip=0x003714; 	X(MOV(word_1487c, ax));	// 8515 mov     word_1487C, ax ;~ 01C2:3714
cs=0x1c2;eip=0x003717; 	X(MOV(byte_14b17, 0x0A));	// 8516 mov     byte_14B17, 0Ah ;~ 01C2:3717
cs=0x1c2;eip=0x00371c; 	X(MOV(byte_14b18, 0));	// 8517 mov     byte_14B18, 0 ;~ 01C2:371C
cs=0x1c2;eip=0x003721; 	T(MOV(ax, 5));	// 8518 mov     ax, 5 ;~ 01C2:3721
cs=0x1c2;eip=0x003724; 	T(SUB(ax, word_14758));	// 8519 sub     ax, word_14758 ;~ 01C2:3724
cs=0x1c2;eip=0x003728; 	T(CMP(ax, word_14753));	// 8520 cmp     ax, word_14753 ;~ 01C2:3728
cs=0x1c2;eip=0x00372c; 	J(JBE(loc_13933));	// 8521 jbe     short loc_13933 ;~ 01C2:372C
cs=0x1c2;eip=0x00372e; 	X(MOV(byte_14b17, 0x64));	// 8522 mov     byte_14B17, 64h ; 'd' ;~ 01C2:372E
loc_13933:
	// 5209 
cs=0x1c2;eip=0x003733; 	T(CMP(word_14753, 9));	// 8525 cmp     word_14753, 9 ;~ 01C2:3733
cs=0x1c2;eip=0x003738; 	J(JBE(loc_13942));	// 8526 jbe     short loc_13942 ;~ 01C2:3738
cs=0x1c2;eip=0x00373a; 	T(CMP(word_14755, 0x384));	// 8527 cmp     word_14755, 384h ;~ 01C2:373A
cs=0x1c2;eip=0x003740; 	J(JA(loc_13965));	// 8528 ja      short loc_13965 ;~ 01C2:3740
loc_13942:
	// 5210 
cs=0x1c2;eip=0x003742; 	X(MOV(word_14b1d, 0x150));	// 8531 mov     word_14B1D, 150h ;~ 01C2:3742
cs=0x1c2;eip=0x003748; 	X(MOV(byte_154e1, 1));	// 8532 mov     byte_154E1, 1 ;~ 01C2:3748
cs=0x1c2;eip=0x00374d; 	T(MOV(ax, word_14753));	// 8533 mov     ax, word_14753 ;~ 01C2:374D
cs=0x1c2;eip=0x003750; 	X(MUL1_1(byte_154ec));	// 8534 mul     byte_154EC ;~ 01C2:3750
cs=0x1c2;eip=0x003754; 	X(MOV(word_154e3, ax));	// 8535 mov     word_154E3, ax ;~ 01C2:3754
cs=0x1c2;eip=0x003757; 	X(MOV(word_154e5, 0x3000));	// 8536 mov     word_154E5, 3000h ;~ 01C2:3757
cs=0x1c2;eip=0x00375d; 	X(MOV(word_154e7, 0x6000));	// 8537 mov     word_154E7, 6000h ;~ 01C2:375D
cs=0x1c2;eip=0x003763; 	J(JMP(loc_13982));	// 8538 jmp     short loc_13982 ;~ 01C2:3763
loc_13965:
	// 5211 
cs=0x1c2;eip=0x003765; 	X(MOV(word_154e3, 0x240));	// 8542 mov     word_154E3, 240h ;~ 01C2:3765
cs=0x1c2;eip=0x00376b; 	X(MOV(word_14b1d, 0x180));	// 8543 mov     word_14B1D, 180h ;~ 01C2:376B
cs=0x1c2;eip=0x003771; 	X(MOV(byte_154e1, 2));	// 8544 mov     byte_154E1, 2 ;~ 01C2:3771
cs=0x1c2;eip=0x003776; 	X(MOV(word_154e5, 0x3000));	// 8545 mov     word_154E5, 3000h ;~ 01C2:3776
cs=0x1c2;eip=0x00377c; 	X(MOV(word_154e7, 0x7FFF));	// 8546 mov     word_154E7, 7FFFh ;~ 01C2:377C
loc_13982:
	// 5212 
cs=0x1c2;eip=0x003782; 	T(MOV(ax, word_154e7));	// 8550 mov     ax, word_154E7 ;~ 01C2:3782
cs=0x1c2;eip=0x003785; 	T(MOV(bx, word_154e5));	// 8551 mov     bx, word_154E5 ;~ 01C2:3785
cs=0x1c2;eip=0x003789; 	T(SUB(ax, bx));	// 8552 sub     ax, bx ;~ 01C2:3789
cs=0x1c2;eip=0x00378b; 	J(CALL(sub_13c68,0));	// 8553 call    sub_13C68 ;~ 01C2:378B
cs=0x1c2;eip=0x00378e; 	T(ADD(ax, bx));	// 8554 add     ax, bx ;~ 01C2:378E
cs=0x1c2;eip=0x003790; 	T(MOV(cx, ax));	// 8555 mov     cx, ax ;~ 01C2:3790
cs=0x1c2;eip=0x003792; 	T(MOV(ax, word_154e3));	// 8556 mov     ax, word_154E3 ;~ 01C2:3792
cs=0x1c2;eip=0x003795; 	T(MOV(bx, ax));	// 8557 mov     bx, ax ;~ 01C2:3795
cs=0x1c2;eip=0x003797; 	T(SHL(ax, 1));	// 8558 shl     ax, 1 ;~ 01C2:3797
cs=0x1c2;eip=0x003799; 	J(CALL(sub_13c68,0));	// 8559 call    sub_13C68 ;~ 01C2:3799
cs=0x1c2;eip=0x00379c; 	T(SUB(ax, bx));	// 8560 sub     ax, bx ;~ 01C2:379C
cs=0x1c2;eip=0x00379e; 	T(ADD(ax, word_14af6));	// 8561 add     ax, word_14AF6 ;~ 01C2:379E
cs=0x1c2;eip=0x0037a2; 	X(MOV(word_153ac, ax));	// 8562 mov     word_153AC, ax ;~ 01C2:37A2
cs=0x1c2;eip=0x0037a5; 	J(CALL(sub_13bc7,0));	// 8563 call    sub_13BC7 ;~ 01C2:37A5
cs=0x1c2;eip=0x0037a8; 	T(MOV(di, 0x3B2));	// 8564 mov     di, 3B2h ;~ 01C2:37A8
cs=0x1c2;eip=0x0037ab; 	X(MOV(byte_154ed, 0x0D));	// 8565 mov     byte_154ED, 0Dh ;~ 01C2:37AB
cs=0x1c2;eip=0x0037b0; 	T(MOV(al, byte_154e1));	// 8566 mov     al, byte_154E1 ;~ 01C2:37B0
cs=0x1c2;eip=0x0037b3; 	T(MOV(bl, al));	// 8567 mov     bl, al ;~ 01C2:37B3
cs=0x1c2;eip=0x0037b5; 	T(XOR(ah, ah));	// 8568 xor     ah, ah ;~ 01C2:37B5
cs=0x1c2;eip=0x0037b7; 	T(DEC(al));	// 8569 dec     al ;~ 01C2:37B7
cs=0x1c2;eip=0x0037b9; 	X(MUL1_1(byte_154ed));	// 8570 mul     byte_154ED ;~ 01C2:37B9
cs=0x1c2;eip=0x0037bd; 	T(ADD(di, ax));	// 8571 add     di, ax ;~ 01C2:37BD
cs=0x1c2;eip=0x0037bf; 	T(MOV(al, bl));	// 8572 mov     al, bl ;~ 01C2:37BF
cs=0x1c2;eip=0x0037c1; 	X(STOSB);	// 8573 stosb ;~ 01C2:37C1
cs=0x1c2;eip=0x0037c2; 	T(MOV(ax, dx));	// 8574 mov     ax, dx ;~ 01C2:37C2
cs=0x1c2;eip=0x0037c4; 	X(STOSW);	// 8575 stosw ;~ 01C2:37C4
cs=0x1c2;eip=0x0037c5; 	T(MOV(ax, word_153ac));	// 8576 mov     ax, word_153AC ;~ 01C2:37C5
cs=0x1c2;eip=0x0037c8; 	X(PUSH(di));	// 8577 push    di ;~ 01C2:37C8
cs=0x1c2;eip=0x0037c9; 	J(CALL(sub_13bad,0));	// 8578 call    sub_13BAD ;~ 01C2:37C9
cs=0x1c2;eip=0x0037cc; 	X(POP(di));	// 8579 pop     di ;~ 01C2:37CC
cs=0x1c2;eip=0x0037cd; 	X(MOV(*(dw*)(raddr(ds,di)), dx));	// 8580 mov     [di], dx ;~ 01C2:37CD
cs=0x1c2;eip=0x0037cf; 	T(MOV(bx, *(dw*)(raddr(ds,di-2))));	// 8581 mov     bx, [di-2] ;~ 01C2:37CF
cs=0x1c2;eip=0x0037d2; 	X(PUSH(di));	// 8582 push    di ;~ 01C2:37D2
cs=0x1c2;eip=0x0037d3; 	T(MOV(di, 0x400));	// 8583 mov     di, 400h ;~ 01C2:37D3
cs=0x1c2;eip=0x0037d6; 	T(MOV(cx, 0x0D));	// 8584 mov     cx, 0Dh ;~ 01C2:37D6
cs=0x1c2;eip=0x0037d9; 	J(CALL(sub_10766,0));	// 8585 call    sub_10766 ;~ 01C2:37D9
cs=0x1c2;eip=0x0037dc; 	X(POP(di));	// 8586 pop     di ;~ 01C2:37DC
cs=0x1c2;eip=0x0037dd; 	J(JC(loc_13982));	// 8587 jb      short loc_13982 ;~ 01C2:37DD
cs=0x1c2;eip=0x0037df; 	T(MOV(ax, word_153ac));	// 8588 mov     ax, word_153AC ;~ 01C2:37DF
cs=0x1c2;eip=0x0037e2; 	X(MOV(*(dw*)(raddr(ds,di+8)), ax));	// 8589 mov     [di+8], ax ;~ 01C2:37E2
cs=0x1c2;eip=0x0037e5; 	T(MOV(ax, 0x480));	// 8590 mov     ax, 480h ;~ 01C2:37E5
cs=0x1c2;eip=0x0037e8; 	J(CALL(sub_13c68,0));	// 8591 call    sub_13C68 ;~ 01C2:37E8
cs=0x1c2;eip=0x0037eb; 	X(MOV(*(dw*)(raddr(ds,di+6)), ax));	// 8592 mov     [di+6], ax ;~ 01C2:37EB
cs=0x1c2;eip=0x0037ee; 	X(MOV(byte_14b14, 0));	// 8593 mov     byte_14B14, 0 ;~ 01C2:37EE
cs=0x1c2;eip=0x0037f3; 	X(MOV(byte_154e0, 0x0E1));	// 8594 mov     byte_154E0, 0E1h ; 'á' ;~ 01C2:37F3
cs=0x1c2;eip=0x0037f8; 	R(RETN(0));	// 8595 retn ;~ 01C2:37F8

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_13907: 	goto loc_13907;
        case m2c::kloc_13933: 	goto loc_13933;
        case m2c::kloc_13942: 	goto loc_13942;
        case m2c::kloc_13965: 	goto loc_13965;
        case m2c::kloc_13982: 	goto loc_13982;
        case m2c::kret_1c2_3701: 	goto ret_1c2_3701;
        case m2c::ksub_138fc: 	goto sub_138fc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_139f9(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_139f9:
    _begin:
cs=0x1c2;eip=0x0037f9; 	X(MOV(byte_14b23, 0x64));	// 8604 mov     byte_14B23, 64h ; 'd' ;~ 01C2:37F9
loc_139fe:
	// 5213 
cs=0x1c2;eip=0x0037fe; 	J(CALL(sub_13a76,0));	// 8607 call    sub_13A76 ;~ 01C2:37FE
cs=0x1c2;eip=0x003801; 	T(MOV(ax, word_1487a));	// 8608 mov     ax, word_1487A ;~ 01C2:3801
cs=0x1c2;eip=0x003804; 	X(MOV(word_1487a, ax));	// 8609 mov     word_1487A, ax ;~ 01C2:3804
cs=0x1c2;eip=0x003807; 	X(MOV(word_14b1d, 0x550));	// 8610 mov     word_14B1D, 550h ;~ 01C2:3807
cs=0x1c2;eip=0x00380d; 	X(MOV(byte_154e1, 3));	// 8611 mov     byte_154E1, 3 ;~ 01C2:380D
cs=0x1c2;eip=0x003812; 	T(MOV(cx, 0x7F00));	// 8612 mov     cx, 7F00h ;~ 01C2:3812
cs=0x1c2;eip=0x003815; 	T(MOV(ax, word_14af6));	// 8613 mov     ax, word_14AF6 ;~ 01C2:3815
cs=0x1c2;eip=0x003818; 	J(CALL(sub_13bc7,0));	// 8614 call    sub_13BC7 ;~ 01C2:3818
cs=0x1c2;eip=0x00381b; 	T(MOV(di, 0x3CC));	// 8615 mov     di, 3CCh ;~ 01C2:381B
cs=0x1c2;eip=0x00381e; 	T(MOV(al, 3));	// 8616 mov     al, 3 ;~ 01C2:381E
cs=0x1c2;eip=0x003820; 	X(STOSB);	// 8617 stosb ;~ 01C2:3820
cs=0x1c2;eip=0x003821; 	T(MOV(ax, dx));	// 8618 mov     ax, dx ;~ 01C2:3821
cs=0x1c2;eip=0x003823; 	X(STOSW);	// 8619 stosw ;~ 01C2:3823
cs=0x1c2;eip=0x003824; 	T(MOV(ax, word_14af6));	// 8620 mov     ax, word_14AF6 ;~ 01C2:3824
cs=0x1c2;eip=0x003827; 	J(CALL(sub_13bad,0));	// 8621 call    sub_13BAD ;~ 01C2:3827
cs=0x1c2;eip=0x00382a; 	T(MOV(di, 0x3CC));	// 8622 mov     di, 3CCh ;~ 01C2:382A
cs=0x1c2;eip=0x00382d; 	X(MOV(*(dw*)(raddr(ds,di+3)), dx));	// 8623 mov     [di+3], dx ;~ 01C2:382D
cs=0x1c2;eip=0x003830; 	X(MOV(*(dw*)(raddr(ds,di+5)), 0x0FF88));	// 8624 mov     word ptr [di+5], 0FF88h ;~ 01C2:3830
cs=0x1c2;eip=0x003835; 	T(MOV(ax, word_14af6));	// 8625 mov     ax, word_14AF6 ;~ 01C2:3835
cs=0x1c2;eip=0x003838; 	X(MOV(*(dw*)(raddr(ds,di+0x0B)), ax));	// 8626 mov     [di+0Bh], ax ;~ 01C2:3838
cs=0x1c2;eip=0x00383b; 	T(MOV(ax, 0x550));	// 8627 mov     ax, 550h ;~ 01C2:383B
cs=0x1c2;eip=0x00383e; 	X(MOV(*(dw*)(raddr(ds,di+7)), ax));	// 8628 mov     [di+7], ax ;~ 01C2:383E
cs=0x1c2;eip=0x003841; 	T(MOV(ax, word_14af6));	// 8629 mov     ax, word_14AF6 ;~ 01C2:3841
cs=0x1c2;eip=0x003844; 	T(ADD(ax, 0x240));	// 8630 add     ax, 240h ;~ 01C2:3844
cs=0x1c2;eip=0x003847; 	T(ADD(ax, 0x60));	// 8631 add     ax, 60h ; '`' ;~ 01C2:3847
cs=0x1c2;eip=0x00384a; 	X(MOV(*(dw*)(raddr(ds,di+9)), ax));	// 8632 mov     [di+9], ax ;~ 01C2:384A
cs=0x1c2;eip=0x00384d; 	T(MOV(al, byte_154ee));	// 8633 mov     al, byte_154EE ;~ 01C2:384D
cs=0x1c2;eip=0x003850; 	T(INC(al));	// 8634 inc     al ;~ 01C2:3850
cs=0x1c2;eip=0x003852; 	X(MOV(byte_154ee, al));	// 8635 mov     byte_154EE, al ;~ 01C2:3852
cs=0x1c2;eip=0x003855; 	X(MOV(byte_14b21, al));	// 8636 mov     byte_14B21, al ;~ 01C2:3855
cs=0x1c2;eip=0x003858; 	X(MOV(byte_14b15, 0));	// 8637 mov     byte_14B15, 0 ;~ 01C2:3858
cs=0x1c2;eip=0x00385d; 	R(RETN(0));	// 8638 retn ;~ 01C2:385D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_139fe: 	goto loc_139fe;
        case m2c::ksub_139f9: 	goto sub_139f9;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13a5e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13a5e:
    _begin:
cs=0x1c2;eip=0x00385e; 	X(PUSH(si));	// 8646 push    si ;~ 01C2:385E
ret_1c2_385f:
	// 5214 
cs=0x1c2;eip=0x00385f; 	T(MOV(si, 0x3D9));	// 8647 mov     si, 3D9h ;~ 01C2:385F
cs=0x1c2;eip=0x003862; 	X(MOV(*(raddr(ds,si)), 4));	// 8648 mov     byte ptr [si], 4 ;~ 01C2:3862
cs=0x1c2;eip=0x003865; 	J(CALL(sub_13c4f,0));	// 8649 call    sub_13C4F ;~ 01C2:3865
cs=0x1c2;eip=0x003868; 	X(MOV(*(dw*)(raddr(ds,si+1)), ax));	// 8650 mov     [si+1], ax ;~ 01C2:3868
cs=0x1c2;eip=0x00386b; 	J(CALL(sub_13c4f,0));	// 8651 call    sub_13C4F ;~ 01C2:386B
cs=0x1c2;eip=0x00386e; 	X(MOV(*(dw*)(raddr(ds,si+3)), ax));	// 8652 mov     [si+3], ax ;~ 01C2:386E
cs=0x1c2;eip=0x003871; 	J(CALL(sub_11cca,0));	// 8653 call    sub_11CCA ;~ 01C2:3871
cs=0x1c2;eip=0x003874; 	X(POP(si));	// 8654 pop     si ;~ 01C2:3874
cs=0x1c2;eip=0x003875; 	R(RETN(0));	// 8655 retn ;~ 01C2:3875

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_385f: 	goto ret_1c2_385f;
        case m2c::ksub_13a5e: 	goto sub_13a5e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13a76(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13a76:
    _begin:
cs=0x1c2;eip=0x003876; 	T(MOV(di, 0x3B2));	// 8664 mov     di, 3B2h ;~ 01C2:3876
ret_1c2_3879:
	// 5215 
cs=0x1c2;eip=0x003879; 	T(MOV(cx, 3));	// 8665 mov     cx, 3 ;~ 01C2:3879
cs=0x1c2;eip=0x00387c; 	T(XOR(al, al));	// 8666 xor     al, al ;~ 01C2:387C
loc_13a7e:
	// 5216 
cs=0x1c2;eip=0x00387e; 	X(STOSB);	// 8669 stosb ;~ 01C2:387E
cs=0x1c2;eip=0x00387f; 	T(ADD(di, 0x0C));	// 8670 add     di, 0Ch ;~ 01C2:387F
cs=0x1c2;eip=0x003882; 	J(LOOP(loc_13a7e));	// 8671 loop    loc_13A7E ;~ 01C2:3882
cs=0x1c2;eip=0x003884; 	R(RETN(0));	// 8672 retn ;~ 01C2:3884

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_13a7e: 	goto loc_13a7e;
        case m2c::kret_1c2_3879: 	goto ret_1c2_3879;
        case m2c::ksub_13a76: 	goto sub_13a76;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13a85(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13a85:
    _begin:
cs=0x1c2;eip=0x003885; 	T(MOV(bl, 0x0A));	// 8680 mov     bl, 0Ah ;~ 01C2:3885
loc_13a87:
	// 5217 
cs=0x1c2;eip=0x003887; 	R(LOOP(loc_13a87));	// 8684 loop    loc_13A87 ;~ 01C2:3887
cs=0x1c2;eip=0x003889; 	T(DEC(bl));	// 8685 dec     bl ;~ 01C2:3889
cs=0x1c2;eip=0x00388b; 	J(JNZ(loc_13a87));	// 8686 jnz     short loc_13A87 ;~ 01C2:388B
cs=0x1c2;eip=0x00388d; 	R(RETN(0));	// 8687 retn ;~ 01C2:388D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_13a87: 	goto loc_13a87;
        case m2c::ksub_13a85: 	goto sub_13a85;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13a90(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13a90:
    _begin:
cs=0x1c2;eip=0x003890; 	X(PUSH(si));	// 8698 push    si ;~ 01C2:3890
ret_1c2_3891:
	// 5218 
cs=0x1c2;eip=0x003891; 	T(LODSW);	// 8699 lodsw ;~ 01C2:3891
cs=0x1c2;eip=0x003892; 	X(PUSH(ax));	// 8700 push    ax ;~ 01C2:3892
cs=0x1c2;eip=0x003893; 	T(LODSW);	// 8701 lodsw ;~ 01C2:3893
cs=0x1c2;eip=0x003894; 	T(MOV(bx, ax));	// 8702 mov     bx, ax ;~ 01C2:3894
cs=0x1c2;eip=0x003896; 	X(POP(ax));	// 8703 pop     ax ;~ 01C2:3896
cs=0x1c2;eip=0x003897; 	T(XOR(cx, cx));	// 8704 xor     cx, cx ;~ 01C2:3897
cs=0x1c2;eip=0x003899; 	T(TEST(ax, 0x8000));	// 8705 test    ax, 8000h ;~ 01C2:3899
cs=0x1c2;eip=0x00389c; 	J(JZ(loc_13aa4));	// 8706 jz      short loc_13AA4 ;~ 01C2:389C
cs=0x1c2;eip=0x00389e; 	T(OR(cx, 1));	// 8707 or      cx, 1 ;~ 01C2:389E
cs=0x1c2;eip=0x0038a2; 	T(NEG(ax));	// 8708 neg     ax ;~ 01C2:38A2
loc_13aa4:
	// 5219 
cs=0x1c2;eip=0x0038a4; 	T(TEST(bx, 0x8000));	// 8711 test    bx, 8000h ;~ 01C2:38A4
cs=0x1c2;eip=0x0038a8; 	J(JZ(loc_13ab0));	// 8712 jz      short loc_13AB0 ;~ 01C2:38A8
cs=0x1c2;eip=0x0038aa; 	T(OR(cx, 2));	// 8713 or      cx, 2 ;~ 01C2:38AA
cs=0x1c2;eip=0x0038ae; 	T(NEG(bx));	// 8714 neg     bx ;~ 01C2:38AE
loc_13ab0:
	// 5220 
cs=0x1c2;eip=0x0038b0; 	T(CMP(ax, bx));	// 8717 cmp     ax, bx ;~ 01C2:38B0
cs=0x1c2;eip=0x0038b2; 	J(JBE(loc_13abe));	// 8718 jbe     short loc_13ABE ;~ 01C2:38B2
cs=0x1c2;eip=0x0038b4; 	T(OR(cx, 4));	// 8719 or      cx, 4 ;~ 01C2:38B4
cs=0x1c2;eip=0x0038b8; 	T(MOV(dx, ax));	// 8720 mov     dx, ax ;~ 01C2:38B8
cs=0x1c2;eip=0x0038ba; 	T(MOV(ax, bx));	// 8721 mov     ax, bx ;~ 01C2:38BA
cs=0x1c2;eip=0x0038bc; 	T(MOV(bx, dx));	// 8722 mov     bx, dx ;~ 01C2:38BC
loc_13abe:
	// 5221 
cs=0x1c2;eip=0x0038be; 	T(OR(bx, bx));	// 8725 or      bx, bx ;~ 01C2:38BE
cs=0x1c2;eip=0x0038c0; 	J(JZ(loc_13b16));	// 8726 jz      short loc_13B16 ;~ 01C2:38C0
cs=0x1c2;eip=0x0038c2; 	T(MOV(dx, ax));	// 8727 mov     dx, ax ;~ 01C2:38C2
cs=0x1c2;eip=0x0038c4; 	T(SHR(dx, 1));	// 8728 shr     dx, 1 ;~ 01C2:38C4
cs=0x1c2;eip=0x0038c6; 	T(XOR(ax, ax));	// 8729 xor     ax, ax ;~ 01C2:38C6
cs=0x1c2;eip=0x0038c8; 	T(DIV2(bx));	// 8730 div     bx ;~ 01C2:38C8
cs=0x1c2;eip=0x0038ca; 	T(SHL(dx, 1));	// 8731 shl     dx, 1 ;~ 01C2:38CA
cs=0x1c2;eip=0x0038cc; 	T(CMP(dx, bx));	// 8732 cmp     dx, bx ;~ 01C2:38CC
cs=0x1c2;eip=0x0038ce; 	J(JBE(loc_13ad1));	// 8733 jbe     short loc_13AD1 ;~ 01C2:38CE
cs=0x1c2;eip=0x0038d0; 	T(INC(ax));	// 8734 inc     ax ;~ 01C2:38D0
loc_13ad1:
	// 5222 
cs=0x1c2;eip=0x0038d1; 	T(MOV(dx, cx));	// 8737 mov     dx, cx ;~ 01C2:38D1
cs=0x1c2;eip=0x0038d3; 	T(MOV(cx, 5));	// 8738 mov     cx, 5 ;~ 01C2:38D3
cs=0x1c2;eip=0x0038d6; 	T(SHR(ax, cl));	// 8739 shr     ax, cl ;~ 01C2:38D6
cs=0x1c2;eip=0x0038d8; 	T(AND(ax, 0x0FFFE));	// 8740 and     ax, 0FFFEh ;~ 01C2:38D8
cs=0x1c2;eip=0x0038db; 	T(MOV(si, 0x12B0));	// 8741 mov     si, 12B0h ;~ 01C2:38DB
cs=0x1c2;eip=0x0038de; 	T(ADD(si, ax));	// 8742 add     si, ax ;~ 01C2:38DE
cs=0x1c2;eip=0x0038e0; 	T(LODSW);	// 8743 lodsw ;~ 01C2:38E0
cs=0x1c2;eip=0x0038e1; 	T(TEST(ax, 2));	// 8744 test    ax, 2 ;~ 01C2:38E1
cs=0x1c2;eip=0x0038e4; 	J(JZ(loc_13ae9));	// 8745 jz      short loc_13AE9 ;~ 01C2:38E4
cs=0x1c2;eip=0x0038e6; 	T(ADD(ax, 4));	// 8746 add     ax, 4 ;~ 01C2:38E6
loc_13ae9:
	// 5223 
cs=0x1c2;eip=0x0038e9; 	T(SHR(ax, 1));	// 8749 shr     ax, 1 ;~ 01C2:38E9
cs=0x1c2;eip=0x0038eb; 	T(SHR(ax, 1));	// 8750 shr     ax, 1 ;~ 01C2:38EB
cs=0x1c2;eip=0x0038ed; 	T(TEST(dx, 4));	// 8751 test    dx, 4 ;~ 01C2:38ED
cs=0x1c2;eip=0x0038f1; 	J(JZ(loc_13afa));	// 8752 jz      short loc_13AFA ;~ 01C2:38F1
cs=0x1c2;eip=0x0038f3; 	T(MOV(bx, ax));	// 8753 mov     bx, ax ;~ 01C2:38F3
cs=0x1c2;eip=0x0038f5; 	T(MOV(ax, 0x120));	// 8754 mov     ax, 120h ;~ 01C2:38F5
cs=0x1c2;eip=0x0038f8; 	T(SUB(ax, bx));	// 8755 sub     ax, bx ;~ 01C2:38F8
loc_13afa:
	// 5224 
cs=0x1c2;eip=0x0038fa; 	T(TEST(dx, 2));	// 8758 test    dx, 2 ;~ 01C2:38FA
cs=0x1c2;eip=0x0038fe; 	J(JZ(loc_13b07));	// 8759 jz      short loc_13B07 ;~ 01C2:38FE
cs=0x1c2;eip=0x003900; 	T(MOV(bx, ax));	// 8760 mov     bx, ax ;~ 01C2:3900
cs=0x1c2;eip=0x003902; 	T(MOV(ax, 0x240));	// 8761 mov     ax, 240h ;~ 01C2:3902
cs=0x1c2;eip=0x003905; 	T(SUB(ax, bx));	// 8762 sub     ax, bx ;~ 01C2:3905
loc_13b07:
	// 5225 
cs=0x1c2;eip=0x003907; 	T(TEST(dx, 1));	// 8765 test    dx, 1 ;~ 01C2:3907
cs=0x1c2;eip=0x00390b; 	J(JZ(loc_13b14));	// 8766 jz      short loc_13B14 ;~ 01C2:390B
cs=0x1c2;eip=0x00390d; 	T(MOV(bx, ax));	// 8767 mov     bx, ax ;~ 01C2:390D
cs=0x1c2;eip=0x00390f; 	T(MOV(ax, 0x480));	// 8768 mov     ax, 480h ;~ 01C2:390F
cs=0x1c2;eip=0x003912; 	T(SUB(ax, bx));	// 8769 sub     ax, bx ;~ 01C2:3912
loc_13b14:
	// 5226 
cs=0x1c2;eip=0x003914; 	X(POP(si));	// 8772 pop     si ;~ 01C2:3914
cs=0x1c2;eip=0x003915; 	R(RETN(0));	// 8773 retn ;~ 01C2:3915
loc_13b16:
	// 5227 
cs=0x1c2;eip=0x003916; 	T(XOR(ax, ax));	// 8777 xor     ax, ax ;~ 01C2:3916
cs=0x1c2;eip=0x003918; 	X(POP(si));	// 8778 pop     si ;~ 01C2:3918
cs=0x1c2;eip=0x003919; 	R(RETN(0));	// 8779 retn ;~ 01C2:3919

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_13aa4: 	goto loc_13aa4;
        case m2c::kloc_13ab0: 	goto loc_13ab0;
        case m2c::kloc_13abe: 	goto loc_13abe;
        case m2c::kloc_13ad1: 	goto loc_13ad1;
        case m2c::kloc_13ae9: 	goto loc_13ae9;
        case m2c::kloc_13afa: 	goto loc_13afa;
        case m2c::kloc_13b07: 	goto loc_13b07;
        case m2c::kloc_13b14: 	goto loc_13b14;
        case m2c::kloc_13b16: 	goto loc_13b16;
        case m2c::kret_1c2_3891: 	goto ret_1c2_3891;
        case m2c::ksub_13a90: 	goto sub_13a90;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13b1a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13b1a:
    _begin:
cs=0x1c2;eip=0x00391a; 	T(LODSW);	// 8788 lodsw ;~ 01C2:391A
ret_1c2_391b:
	// 5228 
cs=0x1c2;eip=0x00391b; 	X(PUSH(ax));	// 8789 push    ax ;~ 01C2:391B
cs=0x1c2;eip=0x00391c; 	T(LODSW);	// 8790 lodsw ;~ 01C2:391C
cs=0x1c2;eip=0x00391d; 	T(MOV(bx, ax));	// 8791 mov     bx, ax ;~ 01C2:391D
cs=0x1c2;eip=0x00391f; 	X(POP(ax));	// 8792 pop     ax ;~ 01C2:391F
cs=0x1c2;eip=0x003920; 	T(TEST(ax, 0x8000));	// 8793 test    ax, 8000h ;~ 01C2:3920
cs=0x1c2;eip=0x003923; 	J(JZ(loc_13b27));	// 8794 jz      short loc_13B27 ;~ 01C2:3923
cs=0x1c2;eip=0x003925; 	T(NEG(ax));	// 8795 neg     ax ;~ 01C2:3925
loc_13b27:
	// 5229 
cs=0x1c2;eip=0x003927; 	T(TEST(bx, 0x8000));	// 8798 test    bx, 8000h ;~ 01C2:3927
cs=0x1c2;eip=0x00392b; 	J(JZ(loc_13b2f));	// 8799 jz      short loc_13B2F ;~ 01C2:392B
cs=0x1c2;eip=0x00392d; 	T(NEG(bx));	// 8800 neg     bx ;~ 01C2:392D
loc_13b2f:
	// 5230 
cs=0x1c2;eip=0x00392f; 	T(SHR(ax, 1));	// 8803 shr     ax, 1 ;~ 01C2:392F
cs=0x1c2;eip=0x003931; 	T(SHR(bx, 1));	// 8804 shr     bx, 1 ;~ 01C2:3931
cs=0x1c2;eip=0x003933; 	T(MOV(cx, ax));	// 8805 mov     cx, ax ;~ 01C2:3933
cs=0x1c2;eip=0x003935; 	T(MUL1_2(cx));	// 8806 mul     cx ;~ 01C2:3935
cs=0x1c2;eip=0x003937; 	X(PUSH(dx));	// 8807 push    dx ;~ 01C2:3937
cs=0x1c2;eip=0x003938; 	X(PUSH(ax));	// 8808 push    ax ;~ 01C2:3938
cs=0x1c2;eip=0x003939; 	T(MOV(ax, bx));	// 8809 mov     ax, bx ;~ 01C2:3939
cs=0x1c2;eip=0x00393b; 	T(MUL1_2(bx));	// 8810 mul     bx ;~ 01C2:393B
cs=0x1c2;eip=0x00393d; 	X(POP(bp));	// 8811 pop     bp ;~ 01C2:393D
cs=0x1c2;eip=0x00393e; 	T(ADD(ax, bp));	// 8812 add     ax, bp ;~ 01C2:393E
cs=0x1c2;eip=0x003940; 	X(POP(bp));	// 8813 pop     bp ;~ 01C2:3940
cs=0x1c2;eip=0x003941; 	T(ADC(dx, bp));	// 8814 adc     dx, bp ;~ 01C2:3941
cs=0x1c2;eip=0x003943; 	T(CMP(bx, cx));	// 8815 cmp     bx, cx ;~ 01C2:3943
cs=0x1c2;eip=0x003945; 	J(JC(loc_13b4b));	// 8816 jb      short loc_13B4B ;~ 01C2:3945
cs=0x1c2;eip=0x003947; 	T(SHR(cx, 1));	// 8817 shr     cx, 1 ;~ 01C2:3947
cs=0x1c2;eip=0x003949; 	J(JMP(loc_13b4d));	// 8818 jmp     short loc_13B4D ;~ 01C2:3949
loc_13b4b:
	// 5231 
cs=0x1c2;eip=0x00394b; 	T(SHR(bx, 1));	// 8822 shr     bx, 1 ;~ 01C2:394B
loc_13b4d:
	// 5232 
cs=0x1c2;eip=0x00394d; 	T(ADD(cx, bx));	// 8825 add     cx, bx ;~ 01C2:394D
cs=0x1c2;eip=0x00394f; 	T(OR(cx, cx));	// 8826 or      cx, cx ;~ 01C2:394F
cs=0x1c2;eip=0x003951; 	J(JZ(loc_13b59));	// 8827 jz      short loc_13B59 ;~ 01C2:3951
cs=0x1c2;eip=0x003953; 	J(CALL(sub_13b5e,0));	// 8828 call    sub_13B5E ;~ 01C2:3953
cs=0x1c2;eip=0x003956; 	J(CALL(sub_13b5e,0));	// 8829 call    sub_13B5E ;~ 01C2:3956
loc_13b59:
	// 5233 
cs=0x1c2;eip=0x003959; 	T(MOV(ax, cx));	// 8832 mov     ax, cx ;~ 01C2:3959
cs=0x1c2;eip=0x00395b; 	T(SHL(ax, 1));	// 8833 shl     ax, 1 ;~ 01C2:395B
cs=0x1c2;eip=0x00395d; 	R(RETN(0));	// 8834 retn ;~ 01C2:395D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_13b27: 	goto loc_13b27;
        case m2c::kloc_13b2f: 	goto loc_13b2f;
        case m2c::kloc_13b4b: 	goto loc_13b4b;
        case m2c::kloc_13b4d: 	goto loc_13b4d;
        case m2c::kloc_13b59: 	goto loc_13b59;
        case m2c::kret_1c2_391b: 	goto ret_1c2_391b;
        case m2c::ksub_13b1a: 	goto sub_13b1a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13b5e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13b5e:
    _begin:
cs=0x1c2;eip=0x00395e; 	X(PUSH(dx));	// 8843 push    dx ;~ 01C2:395E
ret_1c2_395f:
	// 5234 
cs=0x1c2;eip=0x00395f; 	X(PUSH(ax));	// 8844 push    ax ;~ 01C2:395F
cs=0x1c2;eip=0x003960; 	T(CMP(dx, cx));	// 8845 cmp     dx, cx ;~ 01C2:3960
cs=0x1c2;eip=0x003962; 	J(JC(loc_13b67));	// 8846 jb      short loc_13B67 ;~ 01C2:3962
cs=0x1c2;eip=0x003964; 	T(MOV(cx, dx));	// 8847 mov     cx, dx ;~ 01C2:3964
cs=0x1c2;eip=0x003966; 	T(INC(cx));	// 8848 inc     cx ;~ 01C2:3966
loc_13b67:
	// 5235 
cs=0x1c2;eip=0x003967; 	T(DIV2(cx));	// 8851 div     cx ;~ 01C2:3967
cs=0x1c2;eip=0x003969; 	T(ADD(cx, ax));	// 8852 add     cx, ax ;~ 01C2:3969
cs=0x1c2;eip=0x00396b; 	T(SHR(cx, 1));	// 8853 shr     cx, 1 ;~ 01C2:396B
cs=0x1c2;eip=0x00396d; 	X(POP(ax));	// 8854 pop     ax ;~ 01C2:396D
cs=0x1c2;eip=0x00396e; 	X(POP(dx));	// 8855 pop     dx ;~ 01C2:396E
cs=0x1c2;eip=0x00396f; 	R(RETN(0));	// 8856 retn ;~ 01C2:396F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_13b67: 	goto loc_13b67;
        case m2c::kret_1c2_395f: 	goto ret_1c2_395f;
        case m2c::ksub_13b5e: 	goto sub_13b5e;
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
sub_13b70:
	// 8863 
cs=0x1c2;eip=0x003970; 	T(TEST(ax, 0x8000));	// 8865 test    ax, 8000h ;~ 01C2:3970
ret_1c2_3973:
	// 5236 
cs=0x1c2;eip=0x003973; 	J(JZ(loc_13b77));	// 8866 jz      short loc_13B77 ;~ 01C2:3973
cs=0x1c2;eip=0x003975; 	T(NEG(ax));	// 8867 neg     ax ;~ 01C2:3975
loc_13b77:
	// 5237 
cs=0x1c2;eip=0x003977; 	T(CMP(ax, 0x480));	// 8871 cmp     ax, 480h ;~ 01C2:3977
cs=0x1c2;eip=0x00397a; 	J(JC(loc_13b81));	// 8872 jb      short loc_13B81 ;~ 01C2:397A
cs=0x1c2;eip=0x00397c; 	T(SUB(ax, 0x480));	// 8873 sub     ax, 480h ;~ 01C2:397C
cs=0x1c2;eip=0x00397f; 	J(JMP(loc_13b77));	// 8874 jmp     short loc_13B77 ;~ 01C2:397F
loc_13b81:
	// 5238 
cs=0x1c2;eip=0x003981; 	T(MOV(bl, 0));	// 8878 mov     bl, 0 ;~ 01C2:3981
cs=0x1c2;eip=0x003983; 	T(CMP(ax, 0x241));	// 8879 cmp     ax, 241h ;~ 01C2:3983
cs=0x1c2;eip=0x003986; 	J(JC(loc_13b8e));	// 8880 jb      short loc_13B8E ;~ 01C2:3986
cs=0x1c2;eip=0x003988; 	T(XOR(bl, 0x0FF));	// 8881 xor     bl, 0FFh ;~ 01C2:3988
cs=0x1c2;eip=0x00398b; 	T(SUB(ax, 0x240));	// 8882 sub     ax, 240h ;~ 01C2:398B
loc_13b8e:
	// 5239 
cs=0x1c2;eip=0x00398e; 	T(CMP(ax, 0x121));	// 8885 cmp     ax, 121h ;~ 01C2:398E
cs=0x1c2;eip=0x003991; 	J(JC(loc_13b9d));	// 8886 jb      short loc_13B9D ;~ 01C2:3991
cs=0x1c2;eip=0x003993; 	T(MOV(bp, 0x240));	// 8887 mov     bp, 240h ;~ 01C2:3993
cs=0x1c2;eip=0x003996; 	T(SUB(bp, ax));	// 8888 sub     bp, ax ;~ 01C2:3996
cs=0x1c2;eip=0x003998; 	T(MOV(ax, bp));	// 8889 mov     ax, bp ;~ 01C2:3998
cs=0x1c2;eip=0x00399a; 	T(XOR(bl, 0x0FF));	// 8890 xor     bl, 0FFh ;~ 01C2:399A
loc_13b9d:
	// 5240 
cs=0x1c2;eip=0x00399d; 	X(PUSH(si));	// 8893 push    si ;~ 01C2:399D
cs=0x1c2;eip=0x00399e; 	T(MOV(si, 0x16C0));	// 8894 mov     si, 16C0h ;~ 01C2:399E
cs=0x1c2;eip=0x0039a1; 	T(ADD(ax, ax));	// 8895 add     ax, ax ;~ 01C2:39A1
cs=0x1c2;eip=0x0039a3; 	T(ADD(si, ax));	// 8896 add     si, ax ;~ 01C2:39A3
cs=0x1c2;eip=0x0039a5; 	T(LODSW);	// 8897 lodsw ;~ 01C2:39A5
cs=0x1c2;eip=0x0039a6; 	X(POP(si));	// 8898 pop     si ;~ 01C2:39A6
cs=0x1c2;eip=0x0039a7; 	R(RETN(0));	// 8899 retn ;~ 01C2:39A7
sub_13ba8:
	// 8906 
cs=0x1c2;eip=0x0039a8; 	T(SUB(ax, 0x120));	// 8908 sub     ax, 120h ;~ 01C2:39A8
ret_1c2_39ab:
	// 5241 
cs=0x1c2;eip=0x0039ab; 	J(JMP(sub_13b70));	// 8909 jmp     short sub_13B70 ;~ 01C2:39AB

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_13b77: 	goto loc_13b77;
        case m2c::kloc_13b81: 	goto loc_13b81;
        case m2c::kloc_13b8e: 	goto loc_13b8e;
        case m2c::kloc_13b9d: 	goto loc_13b9d;
        case m2c::kret_1c2_3973: 	goto ret_1c2_3973;
        case m2c::kret_1c2_39ab: 	goto ret_1c2_39ab;
        case m2c::ksub_13b70: 	goto sub_13b70;
        case m2c::ksub_13ba8: 	goto sub_13ba8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group11(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group11:
    _begin:
sub_13bad:
	// 8916 
cs=0x1c2;eip=0x0039ad; 	J(CALL(sub_13b70,0));	// 8918 call    sub_13B70 ;~ 01C2:39AD
loc_13bb0:
	// 5242 
cs=0x1c2;eip=0x0039b0; 	T(TEST(cx, 0x8000));	// 8921 test    cx, 8000h ;~ 01C2:39B0
cs=0x1c2;eip=0x0039b4; 	J(JZ(loc_13bbb));	// 8922 jz      short loc_13BBB ;~ 01C2:39B4
cs=0x1c2;eip=0x0039b6; 	T(NEG(cx));	// 8923 neg     cx ;~ 01C2:39B6
cs=0x1c2;eip=0x0039b8; 	T(XOR(bl, 0x0FF));	// 8924 xor     bl, 0FFh ;~ 01C2:39B8
loc_13bbb:
	// 5243 
cs=0x1c2;eip=0x0039bb; 	T(MUL1_2(cx));	// 8927 mul     cx ;~ 01C2:39BB
cs=0x1c2;eip=0x0039bd; 	T(SHL(dx, 1));	// 8928 shl     dx, 1 ;~ 01C2:39BD
cs=0x1c2;eip=0x0039bf; 	T(TEST(bl, 1));	// 8929 test    bl, 1 ;~ 01C2:39BF
cs=0x1c2;eip=0x0039c2; 	J(JZ(locret_13bc6));	// 8930 jz      short locret_13BC6 ;~ 01C2:39C2
cs=0x1c2;eip=0x0039c4; 	T(NEG(dx));	// 8931 neg     dx ;~ 01C2:39C4
locret_13bc6:
	// 5244 
cs=0x1c2;eip=0x0039c6; 	R(RETN(0));	// 8934 retn ;~ 01C2:39C6
sub_13bc7:
	// 8941 
cs=0x1c2;eip=0x0039c7; 	J(CALL(sub_13ba8,0));	// 8943 call    sub_13BA8 ;~ 01C2:39C7
ret_1c2_39ca:
	// 5245 
cs=0x1c2;eip=0x0039ca; 	J(JMP(loc_13bb0));	// 8944 jmp     short loc_13BB0 ;~ 01C2:39CA

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_13bb0: 	goto loc_13bb0;
        case m2c::kloc_13bbb: 	goto loc_13bbb;
        case m2c::klocret_13bc6: 	goto locret_13bc6;
        case m2c::kret_1c2_39ca: 	goto ret_1c2_39ca;
        case m2c::ksub_13bad: 	goto sub_13bad;
        case m2c::ksub_13bc7: 	goto sub_13bc7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13bcc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13bcc:
    _begin:
cs=0x1c2;eip=0x0039cc; 	X(PUSH(ax));	// 8952 push    ax ;~ 01C2:39CC
ret_1c2_39cd:
	// 5246 
cs=0x1c2;eip=0x0039cd; 	J(CALL(sub_13b70,0));	// 8953 call    sub_13B70 ;~ 01C2:39CD
cs=0x1c2;eip=0x0039d0; 	T(MOV(ch, ah));	// 8954 mov     ch, ah ;~ 01C2:39D0
cs=0x1c2;eip=0x0039d2; 	T(MOV(cl, bl));	// 8955 mov     cl, bl ;~ 01C2:39D2
cs=0x1c2;eip=0x0039d4; 	X(POP(ax));	// 8956 pop     ax ;~ 01C2:39D4
cs=0x1c2;eip=0x0039d5; 	X(PUSH(cx));	// 8957 push    cx ;~ 01C2:39D5
cs=0x1c2;eip=0x0039d6; 	J(CALL(sub_13ba8,0));	// 8958 call    sub_13BA8 ;~ 01C2:39D6
cs=0x1c2;eip=0x0039d9; 	X(POP(cx));	// 8959 pop     cx ;~ 01C2:39D9
cs=0x1c2;eip=0x0039da; 	T(MOV(bh, ah));	// 8960 mov     bh, ah ;~ 01C2:39DA
cs=0x1c2;eip=0x0039dc; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 8961 mov     ax, [si] ;~ 01C2:39DC
cs=0x1c2;eip=0x0039de; 	T(XOR(al, al));	// 8962 xor     al, al ;~ 01C2:39DE
cs=0x1c2;eip=0x0039e0; 	T(TEST(ax, 0x8000));	// 8963 test    ax, 8000h ;~ 01C2:39E0
cs=0x1c2;eip=0x0039e3; 	J(JZ(loc_13be9));	// 8964 jz      short loc_13BE9 ;~ 01C2:39E3
cs=0x1c2;eip=0x0039e5; 	T(NEG(ax));	// 8965 neg     ax ;~ 01C2:39E5
cs=0x1c2;eip=0x0039e7; 	T(MOV(al, 0x0FF));	// 8966 mov     al, 0FFh ;~ 01C2:39E7
loc_13be9:
	// 5247 
cs=0x1c2;eip=0x0039e9; 	X(MOV(byte_15608, ah));	// 8969 mov     byte_15608, ah ;~ 01C2:39E9
cs=0x1c2;eip=0x0039ed; 	X(MOV(byte_15609, al));	// 8970 mov     byte_15609, al ;~ 01C2:39ED
cs=0x1c2;eip=0x0039f0; 	T(MOV(ax, *(dw*)(raddr(ds,si+2))));	// 8971 mov     ax, [si+2] ;~ 01C2:39F0
cs=0x1c2;eip=0x0039f3; 	T(XOR(al, al));	// 8972 xor     al, al ;~ 01C2:39F3
cs=0x1c2;eip=0x0039f5; 	T(TEST(ax, 0x8000));	// 8973 test    ax, 8000h ;~ 01C2:39F5
cs=0x1c2;eip=0x0039f8; 	J(JZ(loc_13bfe));	// 8974 jz      short loc_13BFE ;~ 01C2:39F8
cs=0x1c2;eip=0x0039fa; 	T(NEG(ax));	// 8975 neg     ax ;~ 01C2:39FA
cs=0x1c2;eip=0x0039fc; 	T(MOV(al, 0x0FF));	// 8976 mov     al, 0FFh ;~ 01C2:39FC
loc_13bfe:
	// 5248 
cs=0x1c2;eip=0x0039fe; 	X(MOV(byte_1560a, ah));	// 8979 mov     byte_1560A, ah ;~ 01C2:39FE
cs=0x1c2;eip=0x003a02; 	X(MOV(byte_1560b, al));	// 8980 mov     byte_1560B, al ;~ 01C2:3A02
cs=0x1c2;eip=0x003a05; 	T(MOV(al, ah));	// 8981 mov     al, ah ;~ 01C2:3A05
cs=0x1c2;eip=0x003a07; 	T(MUL1_1(ch));	// 8982 mul     ch ;~ 01C2:3A07
cs=0x1c2;eip=0x003a09; 	T(MOV(al, cl));	// 8983 mov     al, cl ;~ 01C2:3A09
cs=0x1c2;eip=0x003a0b; 	T(XOR(al, byte_1560b));	// 8984 xor     al, byte_1560B ;~ 01C2:3A0B
cs=0x1c2;eip=0x003a0f; 	J(JZ(loc_13c13));	// 8985 jz      short loc_13C13 ;~ 01C2:3A0F
cs=0x1c2;eip=0x003a11; 	T(NEG(ah));	// 8986 neg     ah ;~ 01C2:3A11
loc_13c13:
	// 5249 
cs=0x1c2;eip=0x003a13; 	T(MOV(dl, ah));	// 8989 mov     dl, ah ;~ 01C2:3A13
cs=0x1c2;eip=0x003a15; 	T(MOV(al, bh));	// 8990 mov     al, bh ;~ 01C2:3A15
cs=0x1c2;eip=0x003a17; 	X(MUL1_1(byte_15608));	// 8991 mul     byte_15608 ;~ 01C2:3A17
cs=0x1c2;eip=0x003a1b; 	T(MOV(al, bl));	// 8992 mov     al, bl ;~ 01C2:3A1B
cs=0x1c2;eip=0x003a1d; 	T(XOR(al, byte_15609));	// 8993 xor     al, byte_15609 ;~ 01C2:3A1D
cs=0x1c2;eip=0x003a21; 	J(JZ(loc_13c25));	// 8994 jz      short loc_13C25 ;~ 01C2:3A21
cs=0x1c2;eip=0x003a23; 	T(NEG(ah));	// 8995 neg     ah ;~ 01C2:3A23
loc_13c25:
	// 5250 
cs=0x1c2;eip=0x003a25; 	T(ADD(ah, dl));	// 8998 add     ah, dl ;~ 01C2:3A25
cs=0x1c2;eip=0x003a27; 	T(MOV(dh, ah));	// 8999 mov     dh, ah ;~ 01C2:3A27
cs=0x1c2;eip=0x003a29; 	T(MOV(al, ch));	// 9000 mov     al, ch ;~ 01C2:3A29
cs=0x1c2;eip=0x003a2b; 	X(MUL1_1(byte_15608));	// 9001 mul     byte_15608 ;~ 01C2:3A2B
cs=0x1c2;eip=0x003a2f; 	T(MOV(al, cl));	// 9002 mov     al, cl ;~ 01C2:3A2F
cs=0x1c2;eip=0x003a31; 	T(XOR(al, byte_15609));	// 9003 xor     al, byte_15609 ;~ 01C2:3A31
cs=0x1c2;eip=0x003a35; 	J(JZ(loc_13c39));	// 9004 jz      short loc_13C39 ;~ 01C2:3A35
cs=0x1c2;eip=0x003a37; 	T(NEG(ah));	// 9005 neg     ah ;~ 01C2:3A37
loc_13c39:
	// 5251 
cs=0x1c2;eip=0x003a39; 	T(MOV(dl, ah));	// 9008 mov     dl, ah ;~ 01C2:3A39
cs=0x1c2;eip=0x003a3b; 	T(MOV(al, bh));	// 9009 mov     al, bh ;~ 01C2:3A3B
cs=0x1c2;eip=0x003a3d; 	X(MUL1_1(byte_1560a));	// 9010 mul     byte_1560A ;~ 01C2:3A3D
cs=0x1c2;eip=0x003a41; 	T(XOR(bl, 0x0FF));	// 9011 xor     bl, 0FFh ;~ 01C2:3A41
cs=0x1c2;eip=0x003a44; 	T(XOR(bl, byte_1560b));	// 9012 xor     bl, byte_1560B ;~ 01C2:3A44
cs=0x1c2;eip=0x003a48; 	J(JZ(loc_13c4c));	// 9013 jz      short loc_13C4C ;~ 01C2:3A48
cs=0x1c2;eip=0x003a4a; 	T(NEG(ah));	// 9014 neg     ah ;~ 01C2:3A4A
loc_13c4c:
	// 5252 
cs=0x1c2;eip=0x003a4c; 	T(ADD(dl, ah));	// 9017 add     dl, ah ;~ 01C2:3A4C
cs=0x1c2;eip=0x003a4e; 	R(RETN(0));	// 9018 retn ;~ 01C2:3A4E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_13be9: 	goto loc_13be9;
        case m2c::kloc_13bfe: 	goto loc_13bfe;
        case m2c::kloc_13c13: 	goto loc_13c13;
        case m2c::kloc_13c25: 	goto loc_13c25;
        case m2c::kloc_13c39: 	goto loc_13c39;
        case m2c::kloc_13c4c: 	goto loc_13c4c;
        case m2c::kret_1c2_39cd: 	goto ret_1c2_39cd;
        case m2c::ksub_13bcc: 	goto sub_13bcc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13c4f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13c4f:
    _begin:
cs=0x1c2;eip=0x003a4f; 	X(PUSH(dx));	// 9027 push    dx ;~ 01C2:3A4F
ret_1c2_3a50:
	// 5253 
cs=0x1c2;eip=0x003a50; 	T(MOV(ax, word_15602));	// 9028 mov     ax, word_15602 ;~ 01C2:3A50
cs=0x1c2;eip=0x003a53; 	X(MUL1_2(word_15600));	// 9029 mul     word_15600 ;~ 01C2:3A53
cs=0x1c2;eip=0x003a57; 	T(ADD(ax, word_15604));	// 9030 add     ax, word_15604 ;~ 01C2:3A57
cs=0x1c2;eip=0x003a5b; 	T(ADC(dx, word_15606));	// 9031 adc     dx, word_15606 ;~ 01C2:3A5B
cs=0x1c2;eip=0x003a5f; 	T(MOV(al, ah));	// 9032 mov     al, ah ;~ 01C2:3A5F
cs=0x1c2;eip=0x003a61; 	T(MOV(ah, dl));	// 9033 mov     ah, dl ;~ 01C2:3A61
cs=0x1c2;eip=0x003a63; 	X(POP(dx));	// 9034 pop     dx ;~ 01C2:3A63
cs=0x1c2;eip=0x003a64; 	X(MOV(word_15602, ax));	// 9035 mov     word_15602, ax ;~ 01C2:3A64
cs=0x1c2;eip=0x003a67; 	R(RETN(0));	// 9036 retn ;~ 01C2:3A67

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_3a50: 	goto ret_1c2_3a50;
        case m2c::ksub_13c4f: 	goto sub_13c4f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13c68(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13c68:
    _begin:
cs=0x1c2;eip=0x003a68; 	X(PUSH(dx));	// 9045 push    dx ;~ 01C2:3A68
ret_1c2_3a69:
	// 5254 
cs=0x1c2;eip=0x003a69; 	X(PUSH(bx));	// 9046 push    bx ;~ 01C2:3A69
cs=0x1c2;eip=0x003a6a; 	T(OR(ax, ax));	// 9047 or      ax, ax ;~ 01C2:3A6A
cs=0x1c2;eip=0x003a6c; 	J(JZ(loc_13c90));	// 9048 jz      short loc_13C90 ;~ 01C2:3A6C
cs=0x1c2;eip=0x003a6e; 	T(MOV(dx, 0x8000));	// 9049 mov     dx, 8000h ;~ 01C2:3A6E
cs=0x1c2;eip=0x003a71; 	T(MOV(bx, dx));	// 9050 mov     bx, dx ;~ 01C2:3A71
loc_13c73:
	// 5255 
cs=0x1c2;eip=0x003a73; 	T(CMP(ax, dx));	// 9053 cmp     ax, dx ;~ 01C2:3A73
cs=0x1c2;eip=0x003a75; 	J(JNC(loc_13c7d));	// 9054 jnb     short loc_13C7D ;~ 01C2:3A75
cs=0x1c2;eip=0x003a77; 	T(RCR(bx, 1));	// 9055 rcr     bx, 1 ;~ 01C2:3A77
cs=0x1c2;eip=0x003a79; 	T(SHR(dx, 1));	// 9056 shr     dx, 1 ;~ 01C2:3A79
cs=0x1c2;eip=0x003a7b; 	J(JMP(loc_13c73));	// 9057 jmp     short loc_13C73 ;~ 01C2:3A7B
loc_13c7d:
	// 5256 
cs=0x1c2;eip=0x003a7d; 	T(SHL(bx, 1));	// 9061 shl     bx, 1 ;~ 01C2:3A7D
cs=0x1c2;eip=0x003a7f; 	T(XOR(bx, 0x0FFFF));	// 9062 xor     bx, 0FFFFh ;~ 01C2:3A7F
cs=0x1c2;eip=0x003a83; 	T(MOV(dx, ax));	// 9063 mov     dx, ax ;~ 01C2:3A83
loc_13c85:
	// 5257 
cs=0x1c2;eip=0x003a85; 	J(CALL(sub_13c4f,0));	// 9066 call    sub_13C4F ;~ 01C2:3A85
cs=0x1c2;eip=0x003a88; 	T(AND(ax, bx));	// 9067 and     ax, bx ;~ 01C2:3A88
cs=0x1c2;eip=0x003a8a; 	T(CMP(ax, dx));	// 9068 cmp     ax, dx ;~ 01C2:3A8A
cs=0x1c2;eip=0x003a8c; 	J(JC(loc_13c90));	// 9069 jb      short loc_13C90 ;~ 01C2:3A8C
cs=0x1c2;eip=0x003a8e; 	J(JMP(loc_13c85));	// 9070 jmp     short loc_13C85 ;~ 01C2:3A8E
loc_13c90:
	// 5258 
cs=0x1c2;eip=0x003a90; 	X(POP(bx));	// 9075 pop     bx ;~ 01C2:3A90
cs=0x1c2;eip=0x003a91; 	X(POP(dx));	// 9076 pop     dx ;~ 01C2:3A91
cs=0x1c2;eip=0x003a92; 	R(RETN(0));	// 9077 retn ;~ 01C2:3A92

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_13c73: 	goto loc_13c73;
        case m2c::kloc_13c7d: 	goto loc_13c7d;
        case m2c::kloc_13c85: 	goto loc_13c85;
        case m2c::kloc_13c90: 	goto loc_13c90;
        case m2c::kret_1c2_3a69: 	goto ret_1c2_3a69;
        case m2c::ksub_13c68: 	goto sub_13c68;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13dc4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13dc4:
    _begin:
cs=0x1c2;eip=0x003bc4; 	T(MOV(si, 0x102C));	// 9262 mov     si, 102Ch ;~ 01C2:3BC4
ret_1c2_3bc7:
	// 5282 
cs=0x1c2;eip=0x003bc7; 	J(CALL(sub_142f4,0));	// 9263 call    sub_142F4 ;~ 01C2:3BC7
cs=0x1c2;eip=0x003bca; 	T(TEST(byte_15618, 2));	// 9264 test    byte_15618, 2 ;~ 01C2:3BCA
cs=0x1c2;eip=0x003bcf; 	J(JNZ(loc_13dd9));	// 9265 jnz     short loc_13DD9 ;~ 01C2:3BCF
cs=0x1c2;eip=0x003bd1; 	T(MOV(si, 0x0FDA));	// 9266 mov     si, 0FDAh ;~ 01C2:3BD1
cs=0x1c2;eip=0x003bd4; 	J(CALL(sub_142f4,0));	// 9267 call    sub_142F4 ;~ 01C2:3BD4
cs=0x1c2;eip=0x003bd7; 	J(JMP(loc_13ddf));	// 9268 jmp     short loc_13DDF ;~ 01C2:3BD7
loc_13dd9:
	// 5283 
cs=0x1c2;eip=0x003bd9; 	T(MOV(si, 0x0FE9));	// 9272 mov     si, 0FE9h ;~ 01C2:3BD9
cs=0x1c2;eip=0x003bdc; 	J(CALL(sub_142f4,0));	// 9273 call    sub_142F4 ;~ 01C2:3BDC
loc_13ddf:
	// 5284 
cs=0x1c2;eip=0x003bdf; 	T(MOV(al, byte_15619));	// 9276 mov     al, byte_15619 ;~ 01C2:3BDF
cs=0x1c2;eip=0x003be2; 	J(CALL(sub_13e86,0));	// 9277 call    sub_13E86 ;~ 01C2:3BE2
cs=0x1c2;eip=0x003be5; 	T(TEST(byte_156d8, 1));	// 9278 test    byte_156D8, 1 ;~ 01C2:3BE5
cs=0x1c2;eip=0x003bea; 	J(JZ(loc_13df3));	// 9279 jz      short loc_13DF3 ;~ 01C2:3BEA
cs=0x1c2;eip=0x003bec; 	T(MOV(si, 0x0FF8));	// 9280 mov     si, 0FF8h ;~ 01C2:3BEC
cs=0x1c2;eip=0x003bef; 	J(CALL(sub_142f4,0));	// 9281 call    sub_142F4 ;~ 01C2:3BEF
cs=0x1c2;eip=0x003bf2; 	R(RETN(0));	// 9282 retn ;~ 01C2:3BF2
loc_13df3:
	// 5285 
cs=0x1c2;eip=0x003bf3; 	T(MOV(si, 0x1005));	// 9286 mov     si, 1005h ;~ 01C2:3BF3
cs=0x1c2;eip=0x003bf6; 	J(CALL(sub_142f4,0));	// 9287 call    sub_142F4 ;~ 01C2:3BF6
cs=0x1c2;eip=0x003bf9; 	R(RETN(0));	// 9288 retn ;~ 01C2:3BF9

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_13dd9: 	goto loc_13dd9;
        case m2c::kloc_13ddf: 	goto loc_13ddf;
        case m2c::kloc_13df3: 	goto loc_13df3;
        case m2c::kret_1c2_3bc7: 	goto ret_1c2_3bc7;
        case m2c::ksub_13dc4: 	goto sub_13dc4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13dfa(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13dfa:
    _begin:
cs=0x1c2;eip=0x003bfa; 	T(MOV(ah, 1));	// 9297 mov     ah, 1 ;~ 01C2:3BFA
ret_1c2_3bfc:
	// 5286 
cs=0x1c2;eip=0x003bfc; 	R(_INT(0x16));	// 9298 int     16h             ; KEYBOARD - CHECK BUFFER, DO NOT CLEAR ;~ 01C2:3BFC
cs=0x1c2;eip=0x003bfe; 	J(JZ(locret_13e06));	// 9302 jz      short locret_13E06 ;~ 01C2:3BFE
cs=0x1c2;eip=0x003c00; 	T(MOV(ah, 0));	// 9303 mov     ah, 0 ;~ 01C2:3C00
cs=0x1c2;eip=0x003c02; 	R(_INT(0x16));	// 9304 int     16h             ; KEYBOARD - READ CHAR FROM BUFFER, WAIT IF EMPTY ;~ 01C2:3C02
cs=0x1c2;eip=0x003c04; 	J(JMP(sub_13dfa));	// 9306 jmp     short sub_13DFA ;~ 01C2:3C04
locret_13e06:
	// 5287 
cs=0x1c2;eip=0x003c06; 	R(RETN(0));	// 9310 retn ;~ 01C2:3C06

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::klocret_13e06: 	goto locret_13e06;
        case m2c::kret_1c2_3bfc: 	goto ret_1c2_3bfc;
        case m2c::ksub_13dfa: 	goto sub_13dfa;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13e3d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13e3d:
    _begin:
cs=0x1c2;eip=0x003c3d; 	T(TEST(byte_1fec8, 0x0FF));	// 9353 test    byte_1FEC8, 0FFh ;~ 01C2:3C3D
ret_1c2_3c42:
	// 5294 
cs=0x1c2;eip=0x003c42; 	J(JZ(loc_13e49));	// 9354 jz      short loc_13E49 ;~ 01C2:3C42
cs=0x1c2;eip=0x003c44; 	T(MOV(si, 0x101F));	// 9355 mov     si, 101Fh ;~ 01C2:3C44
cs=0x1c2;eip=0x003c47; 	J(JMP(loc_13e4c));	// 9356 jmp     short loc_13E4C ;~ 01C2:3C47
loc_13e49:
	// 5295 
cs=0x1c2;eip=0x003c49; 	T(MOV(si, 0x1012));	// 9360 mov     si, 1012h ;~ 01C2:3C49
loc_13e4c:
	// 5296 
cs=0x1c2;eip=0x003c4c; 	J(CALL(sub_142f4,0));	// 9363 call    sub_142F4 ;~ 01C2:3C4C
cs=0x1c2;eip=0x003c4f; 	R(RETN(0));	// 9364 retn ;~ 01C2:3C4F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_13e49: 	goto loc_13e49;
        case m2c::kloc_13e4c: 	goto loc_13e4c;
        case m2c::kret_1c2_3c42: 	goto ret_1c2_3c42;
        case m2c::ksub_13e3d: 	goto sub_13e3d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13e86(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13e86:
    _begin:
cs=0x1c2;eip=0x003c86; 	X(PUSH(ax));	// 9409 push    ax ;~ 01C2:3C86
ret_1c2_3c87:
	// 5303 
cs=0x1c2;eip=0x003c87; 	X(MOV(byte_154c1, 0x20));	// 9410 mov     byte_154C1, 20h ; ' ' ;~ 01C2:3C87
cs=0x1c2;eip=0x003c8c; 	X(MOV(byte_154c2, 0x14));	// 9411 mov     byte_154C2, 14h ;~ 01C2:3C8C
cs=0x1c2;eip=0x003c91; 	J(CALL(sub_14250,0));	// 9412 call    sub_14250 ;~ 01C2:3C91
cs=0x1c2;eip=0x003c94; 	X(POP(ax));	// 9413 pop     ax ;~ 01C2:3C94
cs=0x1c2;eip=0x003c95; 	T(XOR(ah, ah));	// 9414 xor     ah, ah ;~ 01C2:3C95
cs=0x1c2;eip=0x003c97; 	T(ADD(al, 0x30));	// 9415 add     al, 30h ; '0' ;~ 01C2:3C97
cs=0x1c2;eip=0x003c99; 	J(CALL(sub_1426c,0));	// 9416 call    sub_1426C ;~ 01C2:3C99
cs=0x1c2;eip=0x003c9c; 	R(RETN(0));	// 9417 retn ;~ 01C2:3C9C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_3c87: 	goto ret_1c2_3c87;
        case m2c::ksub_13e86: 	goto sub_13e86;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13ea0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13ea0:
    _begin:
cs=0x1c2;eip=0x003ca0; 	T(CLI);	// 9428 cli ;~ 01C2:3CA0
ret_1c2_3ca1:
	// 5304 
cs=0x1c2;eip=0x003ca1; 	X(PUSH(es));	// 9429 push    es ;~ 01C2:3CA1
cs=0x1c2;eip=0x003ca2; 	X(PUSH(ax));	// 9430 push    ax ;~ 01C2:3CA2
cs=0x1c2;eip=0x003ca3; 	X(PUSH(di));	// 9431 push    di ;~ 01C2:3CA3
cs=0x1c2;eip=0x003ca4; 	T(MOV(ax, 0));	// 9432 mov     ax, 0 ;~ 01C2:3CA4
cs=0x1c2;eip=0x003ca7; 	T(MOV(es, ax));	// 9433 mov     es, ax ;~ 01C2:3CA7
cs=0x1c2;eip=0x003ca9; 	T(MOV(di, 0x20));	// 9435 mov     di, 20h ; ' ' ;~ 01C2:3CA9
cs=0x1c2;eip=0x003cac; 	T(MOV(ax, word_156d4));	// 9436 mov     ax, word_156D4 ;~ 01C2:3CAC
cs=0x1c2;eip=0x003caf; 	T(OR(ax, word_156d6));	// 9437 or      ax, word_156D6 ;~ 01C2:3CAF
cs=0x1c2;eip=0x003cb3; 	J(JNZ(loc_13ec2));	// 9438 jnz     short loc_13EC2 ;~ 01C2:3CB3
cs=0x1c2;eip=0x003cb5; 	T(MOV(ax, *(dw*)(raddr(es,di))));	// 9439 mov     ax, es:[di] ;~ 01C2:3CB5
cs=0x1c2;eip=0x003cb8; 	X(MOV(word_156d4, ax));	// 9440 mov     word_156D4, ax ;~ 01C2:3CB8
cs=0x1c2;eip=0x003cbb; 	T(MOV(ax, *(dw*)(raddr(es,di+2))));	// 9441 mov     ax, es:[di+2] ;~ 01C2:3CBB
cs=0x1c2;eip=0x003cbf; 	X(MOV(word_156d6, ax));	// 9442 mov     word_156D6, ax ;~ 01C2:3CBF
loc_13ec2:
	// 5305 
cs=0x1c2;eip=0x003cc2; 	T(MOV(ax, 0x3D37));	// 9445 mov     ax, 3D37h ;~ 01C2:3CC2
cs=0x1c2;eip=0x003cc5; 	X(MOV(*(dw*)(raddr(es,di)), ax));	// 9446 mov     es:[di], ax ;~ 01C2:3CC5
cs=0x1c2;eip=0x003cc8; 	T(MOV(ax, cs));	// 9447 mov     ax, cs ;~ 01C2:3CC8
cs=0x1c2;eip=0x003cca; 	T(MOV(di, 0x22));	// 9448 mov     di, 22h ; '"' ;~ 01C2:3CCA
cs=0x1c2;eip=0x003ccd; 	X(MOV(*(dw*)(raddr(es,di)), ax));	// 9449 mov     es:[di], ax ;~ 01C2:3CCD
cs=0x1c2;eip=0x003cd0; 	R(IN(al, 0x21));	// 9450 in      al, 21h         ; Interrupt controller, 8259A. ;~ 01C2:3CD0
cs=0x1c2;eip=0x003cd2; 	T(MOV(ah, al));	// 9451 mov     ah, al ;~ 01C2:3CD2
cs=0x1c2;eip=0x003cd4; 	T(OR(al, 1));	// 9452 or      al, 1 ;~ 01C2:3CD4
cs=0x1c2;eip=0x003cd6; 	R(OUT(0x21, al));	// 9453 out     21h, al         ; Interrupt controller, 8259A. ;~ 01C2:3CD6
cs=0x1c2;eip=0x003cd8; 	T(MOV(al, 0x36));	// 9454 mov     al, 36h ; '6' ;~ 01C2:3CD8
cs=0x1c2;eip=0x003cda; 	R(OUT(0x43, al));	// 9455 out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 01C2:3CDA
cs=0x1c2;eip=0x003cdc; 	T(MOV(al, 0));	// 9456 mov     al, 0 ;~ 01C2:3CDC
cs=0x1c2;eip=0x003cde; 	R(OUT(0x40, al));	// 9457 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 01C2:3CDE
cs=0x1c2;eip=0x003ce0; 	T(MOV(al, 0x55));	// 9458 mov     al, 55h ; 'U' ;~ 01C2:3CE0
cs=0x1c2;eip=0x003ce2; 	R(OUT(0x40, al));	// 9459 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 01C2:3CE2
cs=0x1c2;eip=0x003ce4; 	T(MOV(al, ah));	// 9460 mov     al, ah ;~ 01C2:3CE4
cs=0x1c2;eip=0x003ce6; 	R(OUT(0x21, al));	// 9461 out     21h, al         ; Interrupt controller, 8259A. ;~ 01C2:3CE6
cs=0x1c2;eip=0x003ce8; 	R(IN(al, 0x61));	// 9462 in      al, 61h         ; PC/XT PPI port B bits: ;~ 01C2:3CE8
cs=0x1c2;eip=0x003cea; 	T(AND(al, 0x0FD));	// 9470 and     al, 0FDh ;~ 01C2:3CEA
cs=0x1c2;eip=0x003cec; 	R(OUT(0x61, al));	// 9471 out     61h, al         ; PC/XT PPI port B bits: ;~ 01C2:3CEC
cs=0x1c2;eip=0x003cee; 	X(POP(di));	// 9479 pop     di ;~ 01C2:3CEE
cs=0x1c2;eip=0x003cef; 	X(POP(ax));	// 9480 pop     ax ;~ 01C2:3CEF
cs=0x1c2;eip=0x003cf0; 	X(POP(es));	// 9481 pop     es ;~ 01C2:3CF0
cs=0x1c2;eip=0x003cf1; 	T(STI);	// 9483 sti ;~ 01C2:3CF1
cs=0x1c2;eip=0x003cf2; 	R(RETN(0));	// 9484 retn ;~ 01C2:3CF2

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_13ec2: 	goto loc_13ec2;
        case m2c::kret_1c2_3ca1: 	goto ret_1c2_3ca1;
        case m2c::ksub_13ea0: 	goto sub_13ea0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13ef3(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13ef3:
    _begin:
cs=0x1c2;eip=0x003cf3; 	X(PUSH(es));	// 9492 push    es ;~ 01C2:3CF3
ret_1c2_3cf4:
	// 5306 
cs=0x1c2;eip=0x003cf4; 	T(CLI);	// 9493 cli ;~ 01C2:3CF4
cs=0x1c2;eip=0x003cf5; 	T(MOV(ax, 0));	// 9494 mov     ax, 0 ;~ 01C2:3CF5
cs=0x1c2;eip=0x003cf8; 	T(MOV(es, ax));	// 9495 mov     es, ax ;~ 01C2:3CF8
cs=0x1c2;eip=0x003cfa; 	T(MOV(di, 0x20));	// 9497 mov     di, 20h ; ' ' ;~ 01C2:3CFA
cs=0x1c2;eip=0x003cfd; 	T(MOV(ax, word_156d4));	// 9498 mov     ax, word_156D4 ;~ 01C2:3CFD
cs=0x1c2;eip=0x003d00; 	T(MOV(bx, word_156d6));	// 9499 mov     bx, word_156D6 ;~ 01C2:3D00
cs=0x1c2;eip=0x003d04; 	T(OR(bx, ax));	// 9500 or      bx, ax ;~ 01C2:3D04
cs=0x1c2;eip=0x003d06; 	J(JZ(loc_13f28));	// 9501 jz      short loc_13F28 ;~ 01C2:3D06
cs=0x1c2;eip=0x003d08; 	X(MOV(*(dw*)(raddr(es,di)), ax));	// 9502 mov     es:[di], ax ;~ 01C2:3D08
cs=0x1c2;eip=0x003d0b; 	T(MOV(ax, word_156d6));	// 9503 mov     ax, word_156D6 ;~ 01C2:3D0B
cs=0x1c2;eip=0x003d0e; 	X(MOV(*(dw*)(raddr(es,di+2)), ax));	// 9504 mov     es:[di+2], ax ;~ 01C2:3D0E
cs=0x1c2;eip=0x003d12; 	R(IN(al, 0x21));	// 9505 in      al, 21h         ; Interrupt controller, 8259A. ;~ 01C2:3D12
cs=0x1c2;eip=0x003d14; 	T(MOV(ah, al));	// 9506 mov     ah, al ;~ 01C2:3D14
cs=0x1c2;eip=0x003d16; 	T(OR(al, 1));	// 9507 or      al, 1 ;~ 01C2:3D16
cs=0x1c2;eip=0x003d18; 	R(OUT(0x21, al));	// 9508 out     21h, al         ; Interrupt controller, 8259A. ;~ 01C2:3D18
cs=0x1c2;eip=0x003d1a; 	T(MOV(al, 0x36));	// 9509 mov     al, 36h ; '6' ;~ 01C2:3D1A
cs=0x1c2;eip=0x003d1c; 	R(OUT(0x43, al));	// 9510 out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 01C2:3D1C
cs=0x1c2;eip=0x003d1e; 	T(MOV(al, 0));	// 9511 mov     al, 0 ;~ 01C2:3D1E
cs=0x1c2;eip=0x003d20; 	R(OUT(0x40, al));	// 9512 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 01C2:3D20
cs=0x1c2;eip=0x003d22; 	R(OUT(0x40, al));	// 9513 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 01C2:3D22
cs=0x1c2;eip=0x003d24; 	T(MOV(al, ah));	// 9514 mov     al, ah ;~ 01C2:3D24
cs=0x1c2;eip=0x003d26; 	R(OUT(0x21, al));	// 9515 out     21h, al         ; Interrupt controller, 8259A. ;~ 01C2:3D26
loc_13f28:
	// 5307 
cs=0x1c2;eip=0x003d28; 	X(POP(es));	// 9518 pop     es ;~ 01C2:3D28
cs=0x1c2;eip=0x003d29; 	T(STI);	// 9520 sti ;~ 01C2:3D29
cs=0x1c2;eip=0x003d2a; 	R(RETN(0));	// 9521 retn ;~ 01C2:3D2A

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_13f28: 	goto loc_13f28;
        case m2c::kret_1c2_3cf4: 	goto ret_1c2_3cf4;
        case m2c::ksub_13ef3: 	goto sub_13ef3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13f2b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13f2b:
    _begin:
cs=0x1c2;eip=0x003d2b; 	X(MOV(byte_156da, 0));	// 9529 mov     byte_156DA, 0 ;~ 01C2:3D2B
ret_1c2_3d30:
	// 5308 
cs=0x1c2;eip=0x003d30; 	R(IN(al, 0x61));	// 9530 in      al, 61h         ; PC/XT PPI port B bits: ;~ 01C2:3D30
cs=0x1c2;eip=0x003d32; 	T(AND(al, 0x0FC));	// 9538 and     al, 0FCh ;~ 01C2:3D32
cs=0x1c2;eip=0x003d34; 	R(OUT(0x61, al));	// 9539 out     61h, al         ; PC/XT PPI port B bits: ;~ 01C2:3D34
cs=0x1c2;eip=0x003d36; 	R(RETN(0));	// 9547 retn ;~ 01C2:3D36

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_3d30: 	goto ret_1c2_3d30;
        case m2c::ksub_13f2b: 	goto sub_13f2b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13fe7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13fe7:
    _begin:
cs=0x1c2;eip=0x003de7; 	X(PUSH(dx));	// 9675 push    dx ;~ 01C2:3DE7
ret_1c2_3de8:
	// 5321 
cs=0x1c2;eip=0x003de8; 	T(MOV(al, 0x0B6));	// 9676 mov     al, 0B6h ; '¶' ;~ 01C2:3DE8
cs=0x1c2;eip=0x003dea; 	R(OUT(0x43, al));	// 9677 out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 01C2:3DEA
cs=0x1c2;eip=0x003dec; 	T(MOV(cl, byte_156db));	// 9678 mov     cl, byte_156DB ;~ 01C2:3DEC
cs=0x1c2;eip=0x003df0; 	T(MOV(ch, 0));	// 9679 mov     ch, 0 ;~ 01C2:3DF0
cs=0x1c2;eip=0x003df2; 	T(MOV(ax, 0x3C));	// 9680 mov     ax, 3Ch ; '<' ;~ 01C2:3DF2
cs=0x1c2;eip=0x003df5; 	T(MUL1_2(cx));	// 9681 mul     cx ;~ 01C2:3DF5
cs=0x1c2;eip=0x003df7; 	R(OUT(0x42, al));	// 9682 out     42h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 01C2:3DF7
cs=0x1c2;eip=0x003df9; 	T(MOV(al, ah));	// 9683 mov     al, ah ;~ 01C2:3DF9
cs=0x1c2;eip=0x003dfb; 	R(OUT(0x42, al));	// 9684 out     42h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 01C2:3DFB
cs=0x1c2;eip=0x003dfd; 	R(IN(al, 0x61));	// 9685 in      al, 61h         ; PC/XT PPI port B bits: ;~ 01C2:3DFD
cs=0x1c2;eip=0x003dff; 	T(OR(al, 3));	// 9693 or      al, 3 ;~ 01C2:3DFF
cs=0x1c2;eip=0x003e01; 	R(OUT(0x61, al));	// 9694 out     61h, al         ; PC/XT PPI port B bits: ;~ 01C2:3E01
cs=0x1c2;eip=0x003e03; 	X(POP(dx));	// 9702 pop     dx ;~ 01C2:3E03
cs=0x1c2;eip=0x003e04; 	R(RETN(0));	// 9703 retn ;~ 01C2:3E04

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_3de8: 	goto ret_1c2_3de8;
        case m2c::ksub_13fe7: 	goto sub_13fe7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_14005(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_14005:
    _begin:
cs=0x1c2;eip=0x003e05; 	T(MOV(ax, 0));	// 9712 mov     ax, 0 ;~ 01C2:3E05
ret_1c2_3e08:
	// 5322 
cs=0x1c2;eip=0x003e08; 	X(MOV(byte_156da, al));	// 9713 mov     byte_156DA, al ;~ 01C2:3E08
cs=0x1c2;eip=0x003e0b; 	X(MOV(byte_156e0, al));	// 9714 mov     byte_156E0, al ;~ 01C2:3E0B
cs=0x1c2;eip=0x003e0e; 	X(MOV(byte_156de, al));	// 9715 mov     byte_156DE, al ;~ 01C2:3E0E
cs=0x1c2;eip=0x003e11; 	J(CALL(sub_13f2b,0));	// 9716 call    sub_13F2B ;~ 01C2:3E11
cs=0x1c2;eip=0x003e14; 	R(RETN(0));	// 9717 retn ;~ 01C2:3E14

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_3e08: 	goto ret_1c2_3e08;
        case m2c::ksub_14005: 	goto sub_14005;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_140a5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_140a5:
    _begin:
cs=0x1c2;eip=0x003ea5; 	X(MOV(byte_156d9, 0));	// 9834 mov     byte_156D9, 0 ;~ 01C2:3EA5
ret_1c2_3eaa:
	// 5336 
cs=0x1c2;eip=0x003eaa; 	X(MOV(byte_156dd, 0));	// 9835 mov     byte_156DD, 0 ;~ 01C2:3EAA
cs=0x1c2;eip=0x003eaf; 	J(CALL(sub_140c6,0));	// 9836 call    sub_140C6 ;~ 01C2:3EAF
cs=0x1c2;eip=0x003eb2; 	T(MOV(bl, byte_156d9));	// 9837 mov     bl, byte_156D9 ;~ 01C2:3EB2
cs=0x1c2;eip=0x003eb6; 	T(MOV(al, *(raddr(ds,bx+si))));	// 9838 mov     al, [bx+si] ;~ 01C2:3EB6
cs=0x1c2;eip=0x003eb8; 	X(MOV(byte_156db, al));	// 9839 mov     byte_156DB, al ;~ 01C2:3EB8
cs=0x1c2;eip=0x003ebb; 	T(MOV(al, *(raddr(ds,bx+di))));	// 9840 mov     al, [bx+di] ;~ 01C2:3EBB
cs=0x1c2;eip=0x003ebd; 	X(MOV(byte_156df, al));	// 9841 mov     byte_156DF, al ;~ 01C2:3EBD
cs=0x1c2;eip=0x003ec0; 	X(MOV(byte_156e1, 0x0FF));	// 9842 mov     byte_156E1, 0FFh ;~ 01C2:3EC0
cs=0x1c2;eip=0x003ec5; 	R(RETN(0));	// 9843 retn ;~ 01C2:3EC5

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_3eaa: 	goto ret_1c2_3eaa;
        case m2c::ksub_140a5: 	goto sub_140a5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_140c6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_140c6:
    _begin:
cs=0x1c2;eip=0x003ec6; 	T(MOV(si, 0x10AA));	// 9852 mov     si, 10AAh ;~ 01C2:3EC6
ret_1c2_3ec9:
	// 5337 
cs=0x1c2;eip=0x003ec9; 	T(MOV(cx, bx));	// 9853 mov     cx, bx ;~ 01C2:3EC9
cs=0x1c2;eip=0x003ecb; 	T(SHL(cx, 1));	// 9854 shl     cx, 1 ;~ 01C2:3ECB
cs=0x1c2;eip=0x003ecd; 	T(ADD(si, cx));	// 9855 add     si, cx ;~ 01C2:3ECD
cs=0x1c2;eip=0x003ecf; 	T(LODSW);	// 9856 lodsw ;~ 01C2:3ECF
cs=0x1c2;eip=0x003ed0; 	T(MOV(si, 0x10D6));	// 9857 mov     si, 10D6h ;~ 01C2:3ED0
cs=0x1c2;eip=0x003ed3; 	T(ADD(si, cx));	// 9858 add     si, cx ;~ 01C2:3ED3
cs=0x1c2;eip=0x003ed5; 	T(MOV(di, *(dw*)(raddr(ds,si))));	// 9859 mov     di, [si] ;~ 01C2:3ED5
cs=0x1c2;eip=0x003ed7; 	T(MOV(si, ax));	// 9860 mov     si, ax ;~ 01C2:3ED7
cs=0x1c2;eip=0x003ed9; 	R(RETN(0));	// 9861 retn ;~ 01C2:3ED9

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_3ec9: 	goto ret_1c2_3ec9;
        case m2c::ksub_140c6: 	goto sub_140c6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg001_3eda_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg001_3eda_proc:
    _begin:
cs=0x1c2;eip=0x003eda; 	X(PUSH(es));	// 9865 push    es ;~ 01C2:3EDA
ret_1c2_3edb:
	// 5338 
cs=0x1c2;eip=0x003edb; 	X(PUSH(di));	// 9866 push    di ;~ 01C2:3EDB
cs=0x1c2;eip=0x003edc; 	X(PUSH(bx));	// 9867 push    bx ;~ 01C2:3EDC
cs=0x1c2;eip=0x003edd; 	X(PUSH(cx));	// 9868 push    cx ;~ 01C2:3EDD
cs=0x1c2;eip=0x003ede; 	T(MOV(ax, 0x7C0));	// 9869 mov     ax, 7C0h ;~ 01C2:3EDE
cs=0x1c2;eip=0x003ee1; 	T(MOV(es, ax));	// 9870 mov     es, ax ;~ 01C2:3EE1
cs=0x1c2;eip=0x003ee3; 	T(MOV(di, 0x11));	// 9872 mov     di, 11h ;~ 01C2:3EE3
cs=0x1c2;eip=0x003ee6; 	T(MOV(bx, 0));	// 9873 mov     bx, 0 ;~ 01C2:3EE6
cs=0x1c2;eip=0x003ee9; 	T(MOV(cx, 0x58));	// 9874 mov     cx, 58h ; 'X' ;~ 01C2:3EE9
cs=0x1c2;eip=0x003eec; 	T(MOV(ax, *(dw*)(raddr(es,di))));	// 9875 mov     ax, es:[di] ;~ 01C2:3EEC
cs=0x1c2;eip=0x003eef; 	T(ROL(ax, 1));	// 9876 rol     ax, 1 ;~ 01C2:3EEF
cs=0x1c2;eip=0x003ef1; 	T(ROL(ax, 1));	// 9877 rol     ax, 1 ;~ 01C2:3EF1
cs=0x1c2;eip=0x003ef3; 	T(XOR(bx, ax));	// 9878 xor     bx, ax ;~ 01C2:3EF3
cs=0x1c2;eip=0x003ef5; 	T(MOV(ax, 0x9E9));	// 9879 mov     ax, 9E9h ;~ 01C2:3EF5
cs=0x1c2;eip=0x003ef8; 	T(MOV(bx, 0x9E9));	// 9880 mov     bx, 9E9h ;~ 01C2:3EF8
cs=0x1c2;eip=0x003efb; 	X(POP(cx));	// 9881 pop     cx ;~ 01C2:3EFB
cs=0x1c2;eip=0x003efc; 	X(POP(bx));	// 9882 pop     bx ;~ 01C2:3EFC
cs=0x1c2;eip=0x003efd; 	X(POP(di));	// 9883 pop     di ;~ 01C2:3EFD
cs=0x1c2;eip=0x003efe; 	X(POP(es));	// 9884 pop     es ;~ 01C2:3EFE
cs=0x1c2;eip=0x003eff; 	R(RETN(0));	// 9886 retn ;~ 01C2:3EFF

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_3edb: 	goto ret_1c2_3edb;
        case m2c::kseg001_3eda_proc: 	goto seg001_3eda_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_14100(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_14100:
    _begin:
cs=0x1c2;eip=0x003f00; 	T(CLI);	// 9893 cli ;~ 01C2:3F00
ret_1c2_3f01:
	// 5339 
cs=0x1c2;eip=0x003f01; 	X(PUSH(es));	// 9894 push    es ;~ 01C2:3F01
cs=0x1c2;eip=0x003f02; 	X(PUSH(ax));	// 9895 push    ax ;~ 01C2:3F02
cs=0x1c2;eip=0x003f03; 	X(PUSH(di));	// 9896 push    di ;~ 01C2:3F03
cs=0x1c2;eip=0x003f04; 	T(MOV(ax, 0));	// 9897 mov     ax, 0 ;~ 01C2:3F04
cs=0x1c2;eip=0x003f07; 	T(MOV(es, ax));	// 9898 mov     es, ax ;~ 01C2:3F07
cs=0x1c2;eip=0x003f09; 	T(MOV(di, 0x20));	// 9900 mov     di, 20h ; ' ' ;~ 01C2:3F09
cs=0x1c2;eip=0x003f0c; 	T(MOV(ax, 0x3F42));	// 9901 mov     ax, 3F42h ;~ 01C2:3F0C
cs=0x1c2;eip=0x003f0f; 	X(MOV(*(dw*)(raddr(es,di)), ax));	// 9902 mov     es:[di], ax ;~ 01C2:3F0F
cs=0x1c2;eip=0x003f12; 	T(MOV(ax, cs));	// 9903 mov     ax, cs ;~ 01C2:3F12
cs=0x1c2;eip=0x003f14; 	T(MOV(di, 0x22));	// 9904 mov     di, 22h ; '"' ;~ 01C2:3F14
cs=0x1c2;eip=0x003f17; 	X(MOV(*(dw*)(raddr(es,di)), ax));	// 9905 mov     es:[di], ax ;~ 01C2:3F17
cs=0x1c2;eip=0x003f1a; 	R(IN(al, 0x21));	// 9906 in      al, 21h         ; Interrupt controller, 8259A. ;~ 01C2:3F1A
cs=0x1c2;eip=0x003f1c; 	T(MOV(ah, al));	// 9907 mov     ah, al ;~ 01C2:3F1C
cs=0x1c2;eip=0x003f1e; 	T(OR(al, 1));	// 9908 or      al, 1 ;~ 01C2:3F1E
cs=0x1c2;eip=0x003f20; 	R(OUT(0x21, al));	// 9909 out     21h, al         ; Interrupt controller, 8259A. ;~ 01C2:3F20
cs=0x1c2;eip=0x003f22; 	T(MOV(al, 0x36));	// 9910 mov     al, 36h ; '6' ;~ 01C2:3F22
cs=0x1c2;eip=0x003f24; 	R(OUT(0x43, al));	// 9911 out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 01C2:3F24
cs=0x1c2;eip=0x003f26; 	T(MOV(al, 0));	// 9912 mov     al, 0 ;~ 01C2:3F26
cs=0x1c2;eip=0x003f28; 	R(OUT(0x40, al));	// 9913 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 01C2:3F28
cs=0x1c2;eip=0x003f2a; 	T(MOV(al, 5));	// 9914 mov     al, 5 ;~ 01C2:3F2A
cs=0x1c2;eip=0x003f2c; 	R(OUT(0x40, al));	// 9915 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 01C2:3F2C
cs=0x1c2;eip=0x003f2e; 	T(MOV(al, ah));	// 9916 mov     al, ah ;~ 01C2:3F2E
cs=0x1c2;eip=0x003f30; 	R(OUT(0x21, al));	// 9917 out     21h, al         ; Interrupt controller, 8259A. ;~ 01C2:3F30
cs=0x1c2;eip=0x003f32; 	X(MOV(word_156d2, 0x7D0));	// 9918 mov     word_156D2, 7D0h ;~ 01C2:3F32
cs=0x1c2;eip=0x003f38; 	X(MOV(byte_156cf, 0));	// 9919 mov     byte_156CF, 0 ;~ 01C2:3F38
cs=0x1c2;eip=0x003f3d; 	X(POP(di));	// 9920 pop     di ;~ 01C2:3F3D
cs=0x1c2;eip=0x003f3e; 	X(POP(ax));	// 9921 pop     ax ;~ 01C2:3F3E
cs=0x1c2;eip=0x003f3f; 	X(POP(es));	// 9922 pop     es ;~ 01C2:3F3F
cs=0x1c2;eip=0x003f40; 	T(STI);	// 9924 sti ;~ 01C2:3F40
cs=0x1c2;eip=0x003f41; 	R(RETN(0));	// 9925 retn ;~ 01C2:3F41

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_3f01: 	goto ret_1c2_3f01;
        case m2c::ksub_14100: 	goto sub_14100;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_141d2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_141d2:
    _begin:
cs=0x1c2;eip=0x003fd2; 	T(CLI);	// 10026 cli ;~ 01C2:3FD2
ret_1c2_3fd3:
	// 5349 
cs=0x1c2;eip=0x003fd3; 	X(PUSH(es));	// 10027 push    es ;~ 01C2:3FD3
cs=0x1c2;eip=0x003fd4; 	X(PUSH(ax));	// 10028 push    ax ;~ 01C2:3FD4
cs=0x1c2;eip=0x003fd5; 	X(PUSH(di));	// 10029 push    di ;~ 01C2:3FD5
cs=0x1c2;eip=0x003fd6; 	T(MOV(ax, 0));	// 10030 mov     ax, 0 ;~ 01C2:3FD6
cs=0x1c2;eip=0x003fd9; 	T(MOV(es, ax));	// 10031 mov     es, ax ;~ 01C2:3FD9
cs=0x1c2;eip=0x003fdb; 	T(MOV(di, 0x20));	// 10033 mov     di, 20h ; ' ' ;~ 01C2:3FDB
cs=0x1c2;eip=0x003fde; 	T(MOV(ax, 0x4014));	// 10034 mov     ax, 4014h ;~ 01C2:3FDE
cs=0x1c2;eip=0x003fe1; 	X(MOV(*(dw*)(raddr(es,di)), ax));	// 10035 mov     es:[di], ax ;~ 01C2:3FE1
cs=0x1c2;eip=0x003fe4; 	T(MOV(ax, cs));	// 10036 mov     ax, cs ;~ 01C2:3FE4
cs=0x1c2;eip=0x003fe6; 	T(MOV(di, 0x22));	// 10037 mov     di, 22h ; '"' ;~ 01C2:3FE6
cs=0x1c2;eip=0x003fe9; 	X(MOV(*(dw*)(raddr(es,di)), ax));	// 10038 mov     es:[di], ax ;~ 01C2:3FE9
cs=0x1c2;eip=0x003fec; 	R(IN(al, 0x21));	// 10039 in      al, 21h         ; Interrupt controller, 8259A. ;~ 01C2:3FEC
cs=0x1c2;eip=0x003fee; 	T(MOV(ah, al));	// 10040 mov     ah, al ;~ 01C2:3FEE
cs=0x1c2;eip=0x003ff0; 	T(OR(al, 1));	// 10041 or      al, 1 ;~ 01C2:3FF0
cs=0x1c2;eip=0x003ff2; 	R(OUT(0x21, al));	// 10042 out     21h, al         ; Interrupt controller, 8259A. ;~ 01C2:3FF2
cs=0x1c2;eip=0x003ff4; 	T(MOV(al, 0x36));	// 10043 mov     al, 36h ; '6' ;~ 01C2:3FF4
cs=0x1c2;eip=0x003ff6; 	R(OUT(0x43, al));	// 10044 out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 01C2:3FF6
cs=0x1c2;eip=0x003ff8; 	T(MOV(al, 0));	// 10045 mov     al, 0 ;~ 01C2:3FF8
cs=0x1c2;eip=0x003ffa; 	R(OUT(0x40, al));	// 10046 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 01C2:3FFA
cs=0x1c2;eip=0x003ffc; 	T(MOV(al, 2));	// 10047 mov     al, 2 ;~ 01C2:3FFC
cs=0x1c2;eip=0x003ffe; 	R(OUT(0x40, al));	// 10048 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 01C2:3FFE
cs=0x1c2;eip=0x004000; 	T(MOV(al, ah));	// 10049 mov     al, ah ;~ 01C2:4000
cs=0x1c2;eip=0x004002; 	R(OUT(0x21, al));	// 10050 out     21h, al         ; Interrupt controller, 8259A. ;~ 01C2:4002
cs=0x1c2;eip=0x004004; 	X(MOV(*(dw*)(raddr(ds,0x1092)), 0x7D0));	// 10051 mov     word ptr ds:1092h, 7D0h ;~ 01C2:4004
cs=0x1c2;eip=0x00400a; 	X(MOV(*(raddr(ds,0x108F)), 0));	// 10052 mov     byte ptr ds:108Fh, 0 ;~ 01C2:400A
cs=0x1c2;eip=0x00400f; 	X(POP(di));	// 10053 pop     di ;~ 01C2:400F
cs=0x1c2;eip=0x004010; 	X(POP(ax));	// 10054 pop     ax ;~ 01C2:4010
cs=0x1c2;eip=0x004011; 	X(POP(es));	// 10055 pop     es ;~ 01C2:4011
cs=0x1c2;eip=0x004012; 	T(STI);	// 10057 sti ;~ 01C2:4012
cs=0x1c2;eip=0x004013; 	R(RETN(0));	// 10058 retn ;~ 01C2:4013

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_3fd3: 	goto ret_1c2_3fd3;
        case m2c::ksub_141d2: 	goto sub_141d2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_14250(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_14250:
    _begin:
cs=0x1c2;eip=0x004050; 	X(PUSH(ax));	// 10117 push    ax ;~ 01C2:4050
ret_1c2_4051:
	// 5354 
cs=0x1c2;eip=0x004051; 	X(PUSH(dx));	// 10118 push    dx ;~ 01C2:4051
cs=0x1c2;eip=0x004052; 	T(SUB(ax, ax));	// 10119 sub     ax, ax ;~ 01C2:4052
cs=0x1c2;eip=0x004054; 	T(MOV(dl, byte_154c1));	// 10120 mov     dl, byte_154C1 ;~ 01C2:4054
cs=0x1c2;eip=0x004058; 	T(MOV(al, byte_154c2));	// 10121 mov     al, byte_154C2 ;~ 01C2:4058
cs=0x1c2;eip=0x00405b; 	X(PUSH(dx));	// 10122 push    dx ;~ 01C2:405B
cs=0x1c2;eip=0x00405c; 	X(MUL1_2(word_1fec9));	// 10123 mul     word_1FEC9 ;~ 01C2:405C
cs=0x1c2;eip=0x004060; 	X(POP(dx));	// 10124 pop     dx ;~ 01C2:4060
cs=0x1c2;eip=0x004061; 	T(SUB(dh, dh));	// 10125 sub     dh, dh ;~ 01C2:4061
cs=0x1c2;eip=0x004063; 	T(SHL(dx, 1));	// 10126 shl     dx, 1 ;~ 01C2:4063
cs=0x1c2;eip=0x004065; 	T(ADD(ax, dx));	// 10127 add     ax, dx ;~ 01C2:4065
cs=0x1c2;eip=0x004067; 	T(MOV(di, ax));	// 10128 mov     di, ax ;~ 01C2:4067
cs=0x1c2;eip=0x004069; 	X(POP(dx));	// 10129 pop     dx ;~ 01C2:4069
cs=0x1c2;eip=0x00406a; 	X(POP(ax));	// 10130 pop     ax ;~ 01C2:406A
cs=0x1c2;eip=0x00406b; 	R(RETN(0));	// 10131 retn ;~ 01C2:406B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_4051: 	goto ret_1c2_4051;
        case m2c::ksub_14250: 	goto sub_14250;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1426c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1426c:
    _begin:
cs=0x1c2;eip=0x00406c; 	T(MOV(si, 0x0BE70));	// 10140 mov     si, 0BE70h ;~ 01C2:406C
ret_1c2_406f:
	// 5355 
cs=0x1c2;eip=0x00406f; 	J(CALL(sub_14273,0));	// 10141 call    sub_14273 ;~ 01C2:406F
cs=0x1c2;eip=0x004072; 	R(RETN(0));	// 10142 retn ;~ 01C2:4072

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_406f: 	goto ret_1c2_406f;
        case m2c::ksub_1426c: 	goto sub_1426c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_14273(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_14273:
    _begin:
cs=0x1c2;eip=0x004073; 	X(PUSH(cx));	// 10150 push    cx ;~ 01C2:4073
ret_1c2_4074:
	// 5356 
cs=0x1c2;eip=0x004074; 	X(PUSH(es));	// 10151 push    es ;~ 01C2:4074
cs=0x1c2;eip=0x004075; 	X(PUSH(ax));	// 10152 push    ax ;~ 01C2:4075
cs=0x1c2;eip=0x004076; 	T(MOV(ax, 0x0B800));	// 10153 mov     ax, 0B800h ;~ 01C2:4076
cs=0x1c2;eip=0x004079; 	T(MOV(es, ax));	// 10154 mov     es, ax ;~ 01C2:4079
cs=0x1c2;eip=0x00407b; 	X(POP(ax));	// 10156 pop     ax ;~ 01C2:407B
cs=0x1c2;eip=0x00407c; 	X(PUSH(ax));	// 10157 push    ax ;~ 01C2:407C
cs=0x1c2;eip=0x00407d; 	T(XOR(ah, ah));	// 10158 xor     ah, ah ;~ 01C2:407D
cs=0x1c2;eip=0x00407f; 	T(MOV(cx, 4));	// 10159 mov     cx, 4 ;~ 01C2:407F
cs=0x1c2;eip=0x004082; 	T(SHL(ax, cl));	// 10160 shl     ax, cl ;~ 01C2:4082
cs=0x1c2;eip=0x004084; 	T(ADD(si, ax));	// 10161 add     si, ax ;~ 01C2:4084
cs=0x1c2;eip=0x004086; 	T(MOV(cx, 4));	// 10162 mov     cx, 4 ;~ 01C2:4086
cs=0x1c2;eip=0x004089; 	T(TEST(byte_1fece, 0x0FF));	// 10163 test    byte_1FECE, 0FFh ;~ 01C2:4089
cs=0x1c2;eip=0x00408e; 	J(JNZ(loc_142a0));	// 10164 jnz     short loc_142A0 ;~ 01C2:408E
loc_14290:
	// 5357 
cs=0x1c2;eip=0x004090; 	X(MOVSW);	// 10167 movsw ;~ 01C2:4090
cs=0x1c2;eip=0x004091; 	T(ADD(di, 0x1FFE));	// 10168 add     di, 1FFEh ;~ 01C2:4091
cs=0x1c2;eip=0x004095; 	X(MOVSW);	// 10169 movsw ;~ 01C2:4095
cs=0x1c2;eip=0x004096; 	T(ADD(di, 0x0E04E));	// 10170 add     di, 0E04Eh ;~ 01C2:4096
cs=0x1c2;eip=0x00409a; 	J(LOOP(loc_14290));	// 10171 loop    loc_14290 ;~ 01C2:409A
loc_1429c:
	// 5358 
cs=0x1c2;eip=0x00409c; 	X(POP(ax));	// 10174 pop     ax ;~ 01C2:409C
cs=0x1c2;eip=0x00409d; 	X(POP(es));	// 10175 pop     es ;~ 01C2:409D
cs=0x1c2;eip=0x00409e; 	X(POP(cx));	// 10177 pop     cx ;~ 01C2:409E
cs=0x1c2;eip=0x00409f; 	R(RETN(0));	// 10178 retn ;~ 01C2:409F
loc_142a0:
	// 5359 
cs=0x1c2;eip=0x0040a0; 	T(LODSW);	// 10183 lodsw ;~ 01C2:40A0
cs=0x1c2;eip=0x0040a1; 	T(XOR(ax, 0x0FFFF));	// 10184 xor     ax, 0FFFFh ;~ 01C2:40A1
cs=0x1c2;eip=0x0040a4; 	X(STOSW);	// 10185 stosw ;~ 01C2:40A4
cs=0x1c2;eip=0x0040a5; 	T(ADD(di, 0x1FFE));	// 10186 add     di, 1FFEh ;~ 01C2:40A5
cs=0x1c2;eip=0x0040a9; 	T(LODSW);	// 10187 lodsw ;~ 01C2:40A9
cs=0x1c2;eip=0x0040aa; 	T(XOR(ax, 0x0FFFF));	// 10188 xor     ax, 0FFFFh ;~ 01C2:40AA
cs=0x1c2;eip=0x0040ad; 	X(STOSW);	// 10189 stosw ;~ 01C2:40AD
cs=0x1c2;eip=0x0040ae; 	T(ADD(di, 0x0E04E));	// 10190 add     di, 0E04Eh ;~ 01C2:40AE
cs=0x1c2;eip=0x0040b2; 	J(LOOP(loc_142a0));	// 10191 loop    loc_142A0 ;~ 01C2:40B2
cs=0x1c2;eip=0x0040b4; 	J(JMP(loc_1429c));	// 10192 jmp     short loc_1429C ;~ 01C2:40B4

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_14290: 	goto loc_14290;
        case m2c::kloc_1429c: 	goto loc_1429c;
        case m2c::kloc_142a0: 	goto loc_142a0;
        case m2c::kret_1c2_4074: 	goto ret_1c2_4074;
        case m2c::ksub_14273: 	goto sub_14273;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg001_40b6_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg001_40b6_proc:
    _begin:
cs=0x1c2;eip=0x0040b6; 	X(PUSH(cx));	// 10196 push    cx ;~ 01C2:40B6
ret_1c2_40b7:
	// 5360 
cs=0x1c2;eip=0x0040b7; 	X(PUSH(es));	// 10197 push    es ;~ 01C2:40B7
cs=0x1c2;eip=0x0040b8; 	X(PUSH(ax));	// 10198 push    ax ;~ 01C2:40B8
cs=0x1c2;eip=0x0040b9; 	T(MOV(ax, 0x0B800));	// 10199 mov     ax, 0B800h ;~ 01C2:40B9
cs=0x1c2;eip=0x0040bc; 	T(MOV(es, ax));	// 10200 mov     es, ax ;~ 01C2:40BC
cs=0x1c2;eip=0x0040be; 	X(POP(ax));	// 10202 pop     ax ;~ 01C2:40BE
cs=0x1c2;eip=0x0040bf; 	X(PUSH(ax));	// 10203 push    ax ;~ 01C2:40BF
cs=0x1c2;eip=0x0040c0; 	T(XOR(ah, ah));	// 10204 xor     ah, ah ;~ 01C2:40C0
cs=0x1c2;eip=0x0040c2; 	T(MOV(cx, 4));	// 10205 mov     cx, 4 ;~ 01C2:40C2
cs=0x1c2;eip=0x0040c5; 	T(SHL(ax, cl));	// 10206 shl     ax, cl ;~ 01C2:40C5
cs=0x1c2;eip=0x0040c7; 	T(ADD(si, ax));	// 10207 add     si, ax ;~ 01C2:40C7
cs=0x1c2;eip=0x0040c9; 	T(MOV(cx, 4));	// 10208 mov     cx, 4 ;~ 01C2:40C9
loc_142cc:
	// 5361 
cs=0x1c2;eip=0x0040cc; 	T(LODSW);	// 10211 lodsw ;~ 01C2:40CC
cs=0x1c2;eip=0x0040cd; 	X(STOSW);	// 10212 stosw ;~ 01C2:40CD
cs=0x1c2;eip=0x0040ce; 	T(ADD(di, 0x1FFE));	// 10213 add     di, 1FFEh ;~ 01C2:40CE
cs=0x1c2;eip=0x0040d2; 	T(LODSW);	// 10214 lodsw ;~ 01C2:40D2
cs=0x1c2;eip=0x0040d3; 	X(STOSW);	// 10215 stosw ;~ 01C2:40D3
cs=0x1c2;eip=0x0040d4; 	T(ADD(di, 0x0E04E));	// 10216 add     di, 0E04Eh ;~ 01C2:40D4
cs=0x1c2;eip=0x0040d8; 	J(LOOP(loc_142cc));	// 10217 loop    loc_142CC ;~ 01C2:40D8
cs=0x1c2;eip=0x0040da; 	X(POP(ax));	// 10218 pop     ax ;~ 01C2:40DA
cs=0x1c2;eip=0x0040db; 	X(POP(es));	// 10219 pop     es ;~ 01C2:40DB
cs=0x1c2;eip=0x0040dc; 	X(POP(cx));	// 10221 pop     cx ;~ 01C2:40DC
cs=0x1c2;eip=0x0040dd; 	R(RETN(0));	// 10222 retn ;~ 01C2:40DD

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_142cc: 	goto loc_142cc;
        case m2c::kret_1c2_40b7: 	goto ret_1c2_40b7;
        case m2c::kseg001_40b6_proc: 	goto seg001_40b6_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_142de(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_142de:
    _begin:
cs=0x1c2;eip=0x0040de; 	X(PUSH(ax));	// 10229 push    ax ;~ 01C2:40DE
ret_1c2_40df:
	// 5362 
cs=0x1c2;eip=0x0040df; 	J(CALL(sub_14250,0));	// 10230 call    sub_14250 ;~ 01C2:40DF
loc_142e2:
	// 5363 
cs=0x1c2;eip=0x0040e2; 	T(LODSB);	// 10233 lodsb ;~ 01C2:40E2
cs=0x1c2;eip=0x0040e3; 	T(OR(al, al));	// 10234 or      al, al ;~ 01C2:40E3
cs=0x1c2;eip=0x0040e5; 	J(JZ(loc_142f2));	// 10235 jz      short loc_142F2 ;~ 01C2:40E5
cs=0x1c2;eip=0x0040e7; 	X(PUSH(si));	// 10236 push    si ;~ 01C2:40E7
cs=0x1c2;eip=0x0040e8; 	J(CALL(sub_1426c,0));	// 10237 call    sub_1426C ;~ 01C2:40E8
cs=0x1c2;eip=0x0040eb; 	X(POP(si));	// 10238 pop     si ;~ 01C2:40EB
cs=0x1c2;eip=0x0040ec; 	T(ADD(di, 0x0FEC2));	// 10239 add     di, 0FEC2h ;~ 01C2:40EC
cs=0x1c2;eip=0x0040f0; 	J(JMP(loc_142e2));	// 10240 jmp     short loc_142E2 ;~ 01C2:40F0
loc_142f2:
	// 5364 
cs=0x1c2;eip=0x0040f2; 	X(POP(ax));	// 10244 pop     ax ;~ 01C2:40F2
cs=0x1c2;eip=0x0040f3; 	R(RETN(0));	// 10245 retn ;~ 01C2:40F3

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_142e2: 	goto loc_142e2;
        case m2c::kloc_142f2: 	goto loc_142f2;
        case m2c::kret_1c2_40df: 	goto ret_1c2_40df;
        case m2c::ksub_142de: 	goto sub_142de;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_142f4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_142f4:
    _begin:
cs=0x1c2;eip=0x0040f4; 	X(PUSH(ax));	// 10254 push    ax ;~ 01C2:40F4
loc_142f5:
	// 5365 
cs=0x1c2;eip=0x0040f5; 	T(LODSB);	// 10257 lodsb ;~ 01C2:40F5
cs=0x1c2;eip=0x0040f6; 	T(CMP(al, 0x0FF));	// 10258 cmp     al, 0FFh ;~ 01C2:40F6
cs=0x1c2;eip=0x0040f8; 	J(JZ(loc_14306));	// 10259 jz      short loc_14306 ;~ 01C2:40F8
cs=0x1c2;eip=0x0040fa; 	X(MOV(byte_154c2, al));	// 10260 mov     byte_154C2, al ;~ 01C2:40FA
cs=0x1c2;eip=0x0040fd; 	T(LODSB);	// 10261 lodsb ;~ 01C2:40FD
cs=0x1c2;eip=0x0040fe; 	X(MOV(byte_154c1, al));	// 10262 mov     byte_154C1, al ;~ 01C2:40FE
cs=0x1c2;eip=0x004101; 	J(CALL(sub_142de,0));	// 10263 call    sub_142DE ;~ 01C2:4101
cs=0x1c2;eip=0x004104; 	J(JMP(loc_142f5));	// 10264 jmp     short loc_142F5 ;~ 01C2:4104
loc_14306:
	// 5366 
cs=0x1c2;eip=0x004106; 	X(POP(ax));	// 10268 pop     ax ;~ 01C2:4106
cs=0x1c2;eip=0x004107; 	R(RETN(0));	// 10269 retn ;~ 01C2:4107

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_142f5: 	goto loc_142f5;
        case m2c::kloc_14306: 	goto loc_14306;
        case m2c::ksub_142f4: 	goto sub_142f4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_14308(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_14308:
    _begin:
cs=0x1c2;eip=0x004108; 	X(MOV(byte_1fece, 0x0FF));	// 10278 mov     byte_1FECE, 0FFh ;~ 01C2:4108
ret_1c2_410d:
	// 5367 
cs=0x1c2;eip=0x00410d; 	J(CALL(sub_142f4,0));	// 10279 call    sub_142F4 ;~ 01C2:410D
cs=0x1c2;eip=0x004110; 	X(MOV(byte_1fece, 0));	// 10280 mov     byte_1FECE, 0 ;~ 01C2:4110
cs=0x1c2;eip=0x004115; 	R(RETN(0));	// 10281 retn ;~ 01C2:4115

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_410d: 	goto ret_1c2_410d;
        case m2c::ksub_14308: 	goto sub_14308;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_14372(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_14372:
    _begin:
cs=0x1c2;eip=0x004172; 	X(PUSH(es));	// 10344 push    es ;~ 01C2:4172
ret_1c2_4173:
	// 5373 
cs=0x1c2;eip=0x004173; 	X(PUSH(ax));	// 10345 push    ax ;~ 01C2:4173
cs=0x1c2;eip=0x004174; 	X(PUSH(cx));	// 10346 push    cx ;~ 01C2:4174
cs=0x1c2;eip=0x004175; 	X(PUSH(dx));	// 10347 push    dx ;~ 01C2:4175
cs=0x1c2;eip=0x004176; 	T(MOV(ax, 0x0B800));	// 10348 mov     ax, 0B800h ;~ 01C2:4176
cs=0x1c2;eip=0x004179; 	T(MOV(es, ax));	// 10349 mov     es, ax ;~ 01C2:4179
cs=0x1c2;eip=0x00417b; 	T(MOV(ah, 0));	// 10351 mov     ah, 0 ;~ 01C2:417B
cs=0x1c2;eip=0x00417d; 	T(MOV(al, byte_154c2));	// 10352 mov     al, byte_154C2 ;~ 01C2:417D
cs=0x1c2;eip=0x004180; 	X(MUL1_2(word_1fec9));	// 10353 mul     word_1FEC9 ;~ 01C2:4180
cs=0x1c2;eip=0x004184; 	T(MOV(di, ax));	// 10354 mov     di, ax ;~ 01C2:4184
cs=0x1c2;eip=0x004186; 	X(PUSH(di));	// 10355 push    di ;~ 01C2:4186
cs=0x1c2;eip=0x004187; 	T(MOV(cx, 0x0A0));	// 10356 mov     cx, 0A0h ; ' ' ;~ 01C2:4187
cs=0x1c2;eip=0x00418a; 	T(MOV(ax, 0));	// 10357 mov     ax, 0 ;~ 01C2:418A
	// 10358 rep stosw ;~ 01C2:418D
cs=0x1c2;eip=0x00418d; 	X(	REP STOSW);	// 10358 rep stosw ;~ 01C2:418D
cs=0x1c2;eip=0x00418f; 	X(POP(di));	// 10359 pop     di ;~ 01C2:418F
cs=0x1c2;eip=0x004190; 	T(ADD(di, 0x2000));	// 10360 add     di, 2000h ;~ 01C2:4190
cs=0x1c2;eip=0x004194; 	T(MOV(cx, 0x0A0));	// 10361 mov     cx, 0A0h ; ' ' ;~ 01C2:4194
	// 10362 rep stosw ;~ 01C2:4197
cs=0x1c2;eip=0x004197; 	X(	REP STOSW);	// 10362 rep stosw ;~ 01C2:4197
cs=0x1c2;eip=0x004199; 	X(POP(dx));	// 10363 pop     dx ;~ 01C2:4199
cs=0x1c2;eip=0x00419a; 	X(POP(cx));	// 10364 pop     cx ;~ 01C2:419A
cs=0x1c2;eip=0x00419b; 	X(POP(ax));	// 10365 pop     ax ;~ 01C2:419B
cs=0x1c2;eip=0x00419c; 	X(POP(es));	// 10366 pop     es ;~ 01C2:419C
cs=0x1c2;eip=0x00419d; 	R(RETN(0));	// 10368 retn ;~ 01C2:419D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_4173: 	goto ret_1c2_4173;
        case m2c::ksub_14372: 	goto sub_14372;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1439e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1439e:
    _begin:
cs=0x1c2;eip=0x00419e; 	X(PUSH(ax));	// 10377 push    ax ;~ 01C2:419E
ret_1c2_419f:
	// 5374 
cs=0x1c2;eip=0x00419f; 	X(PUSH(bx));	// 10378 push    bx ;~ 01C2:419F
cs=0x1c2;eip=0x0041a0; 	X(PUSH(dx));	// 10379 push    dx ;~ 01C2:41A0
cs=0x1c2;eip=0x0041a1; 	J(CALL(sub_12831,0));	// 10380 call    sub_12831 ;~ 01C2:41A1
cs=0x1c2;eip=0x0041a4; 	T(MOV(si, 0x0B896));	// 10381 mov     si, 0B896h ;~ 01C2:41A4
cs=0x1c2;eip=0x0041a7; 	J(CALL(sub_142f4,0));	// 10382 call    sub_142F4 ;~ 01C2:41A7
cs=0x1c2;eip=0x0041aa; 	X(POP(dx));	// 10383 pop     dx ;~ 01C2:41AA
cs=0x1c2;eip=0x0041ab; 	X(POP(bx));	// 10384 pop     bx ;~ 01C2:41AB
cs=0x1c2;eip=0x0041ac; 	X(POP(ax));	// 10385 pop     ax ;~ 01C2:41AC
cs=0x1c2;eip=0x0041ad; 	R(RETN(0));	// 10386 retn ;~ 01C2:41AD

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_419f: 	goto ret_1c2_419f;
        case m2c::ksub_1439e: 	goto sub_1439e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_143ae(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_143ae:
    _begin:
cs=0x1c2;eip=0x0041ae; 	X(PUSH(ax));	// 10394 push    ax ;~ 01C2:41AE
ret_1c2_41af:
	// 5375 
cs=0x1c2;eip=0x0041af; 	X(PUSH(bx));	// 10395 push    bx ;~ 01C2:41AF
cs=0x1c2;eip=0x0041b0; 	X(PUSH(dx));	// 10396 push    dx ;~ 01C2:41B0
cs=0x1c2;eip=0x0041b1; 	J(CALL(sub_12870,0));	// 10397 call    sub_12870 ;~ 01C2:41B1
cs=0x1c2;eip=0x0041b4; 	T(MOV(si, 0x0B8FD));	// 10398 mov     si, 0B8FDh ;~ 01C2:41B4
cs=0x1c2;eip=0x0041b7; 	J(CALL(sub_142f4,0));	// 10399 call    sub_142F4 ;~ 01C2:41B7
cs=0x1c2;eip=0x0041ba; 	X(POP(dx));	// 10400 pop     dx ;~ 01C2:41BA
cs=0x1c2;eip=0x0041bb; 	X(POP(bx));	// 10401 pop     bx ;~ 01C2:41BB
cs=0x1c2;eip=0x0041bc; 	X(POP(ax));	// 10402 pop     ax ;~ 01C2:41BC
cs=0x1c2;eip=0x0041bd; 	R(RETN(0));	// 10403 retn ;~ 01C2:41BD

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_41af: 	goto ret_1c2_41af;
        case m2c::ksub_143ae: 	goto sub_143ae;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1446b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1446b:
    _begin:
cs=0x1c2;eip=0x00426b; 	X(PUSH(si));	// 10522 push    si ;~ 01C2:426B
ret_1c2_426c:
	// 5387 
cs=0x1c2;eip=0x00426c; 	X(PUSH(di));	// 10523 push    di ;~ 01C2:426C
cs=0x1c2;eip=0x00426d; 	X(PUSH(ax));	// 10524 push    ax ;~ 01C2:426D
cs=0x1c2;eip=0x00426e; 	T(MOV(si, word_1fed0));	// 10525 mov     si, word_1FED0 ;~ 01C2:426E
cs=0x1c2;eip=0x004272; 	T(LODSW);	// 10526 lodsw ;~ 01C2:4272
cs=0x1c2;eip=0x004273; 	X(MOV(byte_154c1, al));	// 10527 mov     byte_154C1, al ;~ 01C2:4273
cs=0x1c2;eip=0x004276; 	X(MOV(byte_154c2, ah));	// 10528 mov     byte_154C2, ah ;~ 01C2:4276
cs=0x1c2;eip=0x00427a; 	X(MOV(word_1fed0, si));	// 10529 mov     word_1FED0, si ;~ 01C2:427A
cs=0x1c2;eip=0x00427e; 	J(CALL(sub_14250,0));	// 10530 call    sub_14250 ;~ 01C2:427E
cs=0x1c2;eip=0x004281; 	X(POP(ax));	// 10531 pop     ax ;~ 01C2:4281
cs=0x1c2;eip=0x004282; 	X(PUSH(ax));	// 10532 push    ax ;~ 01C2:4282
cs=0x1c2;eip=0x004283; 	T(OR(al, al));	// 10533 or      al, al ;~ 01C2:4283
cs=0x1c2;eip=0x004285; 	J(JZ(loc_14492));	// 10534 jz      short loc_14492 ;~ 01C2:4285
cs=0x1c2;eip=0x004287; 	T(TEST(al, 0x80));	// 10535 test    al, 80h ;~ 01C2:4287
cs=0x1c2;eip=0x004289; 	J(JNZ(loc_1448e));	// 10536 jnz     short loc_1448E ;~ 01C2:4289
loc_1448b:
	// 5388 
cs=0x1c2;eip=0x00428b; 	J(CALL(sub_1426c,0));	// 10540 call    sub_1426C ;~ 01C2:428B
loc_1448e:
	// 5389 
cs=0x1c2;eip=0x00428e; 	X(POP(ax));	// 10544 pop     ax ;~ 01C2:428E
cs=0x1c2;eip=0x00428f; 	X(POP(di));	// 10545 pop     di ;~ 01C2:428F
cs=0x1c2;eip=0x004290; 	X(POP(si));	// 10546 pop     si ;~ 01C2:4290
cs=0x1c2;eip=0x004291; 	R(RETN(0));	// 10547 retn ;~ 01C2:4291
loc_14492:
	// 5390 
cs=0x1c2;eip=0x004292; 	T(CMP(ah, 0x48));	// 10551 cmp     ah, 48h ; 'H' ;~ 01C2:4292
cs=0x1c2;eip=0x004295; 	J(JNZ(loc_1449b));	// 10552 jnz     short loc_1449B ;~ 01C2:4295
cs=0x1c2;eip=0x004297; 	T(MOV(al, 0x81));	// 10553 mov     al, 81h ;~ 01C2:4297
cs=0x1c2;eip=0x004299; 	J(JMP(loc_1448b));	// 10554 jmp     short loc_1448B ;~ 01C2:4299
loc_1449b:
	// 5391 
cs=0x1c2;eip=0x00429b; 	T(CMP(ah, 0x4B));	// 10558 cmp     ah, 4Bh ; 'K' ;~ 01C2:429B
cs=0x1c2;eip=0x00429e; 	J(JNZ(loc_144a4));	// 10559 jnz     short loc_144A4 ;~ 01C2:429E
cs=0x1c2;eip=0x0042a0; 	T(MOV(al, 0x83));	// 10560 mov     al, 83h ; 'ƒ' ;~ 01C2:42A0
cs=0x1c2;eip=0x0042a2; 	J(JMP(loc_1448b));	// 10561 jmp     short loc_1448B ;~ 01C2:42A2
loc_144a4:
	// 5392 
cs=0x1c2;eip=0x0042a4; 	T(CMP(ah, 0x4D));	// 10565 cmp     ah, 4Dh ; 'M' ;~ 01C2:42A4
cs=0x1c2;eip=0x0042a7; 	J(JNZ(loc_144ad));	// 10566 jnz     short loc_144AD ;~ 01C2:42A7
cs=0x1c2;eip=0x0042a9; 	T(MOV(al, 0x84));	// 10567 mov     al, 84h ; '„' ;~ 01C2:42A9
cs=0x1c2;eip=0x0042ab; 	J(JMP(loc_1448b));	// 10568 jmp     short loc_1448B ;~ 01C2:42AB
loc_144ad:
	// 5393 
cs=0x1c2;eip=0x0042ad; 	T(CMP(ah, 0x50));	// 10572 cmp     ah, 50h ; 'P' ;~ 01C2:42AD
cs=0x1c2;eip=0x0042b0; 	J(JNZ(loc_1448e));	// 10573 jnz     short loc_1448E ;~ 01C2:42B0
cs=0x1c2;eip=0x0042b2; 	T(MOV(al, 0x82));	// 10574 mov     al, 82h ; '‚' ;~ 01C2:42B2
cs=0x1c2;eip=0x0042b4; 	J(JMP(loc_1448b));	// 10575 jmp     short loc_1448B ;~ 01C2:42B4

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_1448b: 	goto loc_1448b;
        case m2c::kloc_1448e: 	goto loc_1448e;
        case m2c::kloc_14492: 	goto loc_14492;
        case m2c::kloc_1449b: 	goto loc_1449b;
        case m2c::kloc_144a4: 	goto loc_144a4;
        case m2c::kloc_144ad: 	goto loc_144ad;
        case m2c::kret_1c2_426c: 	goto ret_1c2_426c;
        case m2c::ksub_1446b: 	goto sub_1446b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_144b6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_144b6:
    _begin:
cs=0x1c2;eip=0x0042b6; 	X(PUSH(ax));	// 10583 push    ax ;~ 01C2:42B6
ret_1c2_42b7:
	// 5394 
cs=0x1c2;eip=0x0042b7; 	X(PUSH(bx));	// 10584 push    bx ;~ 01C2:42B7
cs=0x1c2;eip=0x0042b8; 	X(PUSH(si));	// 10585 push    si ;~ 01C2:42B8
cs=0x1c2;eip=0x0042b9; 	T(MOV(si, 0x0BB93));	// 10586 mov     si, 0BB93h ;~ 01C2:42B9
cs=0x1c2;eip=0x0042bc; 	T(MOV(bx, ax));	// 10587 mov     bx, ax ;~ 01C2:42BC
loc_144be:
	// 5395 
cs=0x1c2;eip=0x0042be; 	T(LODSW);	// 10590 lodsw ;~ 01C2:42BE
cs=0x1c2;eip=0x0042bf; 	T(OR(ax, ax));	// 10591 or      ax, ax ;~ 01C2:42BF
cs=0x1c2;eip=0x0042c1; 	J(JZ(loc_144c9));	// 10592 jz      short loc_144C9 ;~ 01C2:42C1
cs=0x1c2;eip=0x0042c3; 	T(CMP(ax, bx));	// 10593 cmp     ax, bx ;~ 01C2:42C3
cs=0x1c2;eip=0x0042c5; 	J(JZ(loc_144d3));	// 10594 jz      short loc_144D3 ;~ 01C2:42C5
cs=0x1c2;eip=0x0042c7; 	J(JMP(loc_144be));	// 10595 jmp     short loc_144BE ;~ 01C2:42C7
loc_144c9:
	// 5396 
cs=0x1c2;eip=0x0042c9; 	X(MOV(*(dw*)(raddr(ds,si-2)), bx));	// 10599 mov     [si-2], bx ;~ 01C2:42C9
cs=0x1c2;eip=0x0042cc; 	X(MOV(*(dw*)(raddr(ds,si)), 0));	// 10600 mov     word ptr [si], 0 ;~ 01C2:42CC
cs=0x1c2;eip=0x0042d0; 	T(CLC);	// 10601 clc ;~ 01C2:42D0
cs=0x1c2;eip=0x0042d1; 	J(JMP(loc_144d9));	// 10602 jmp     short loc_144D9 ;~ 01C2:42D1
loc_144d3:
	// 5397 
cs=0x1c2;eip=0x0042d3; 	T(MOV(al, 0x0C));	// 10606 mov     al, 0Ch ;~ 01C2:42D3
cs=0x1c2;eip=0x0042d5; 	J(CALL(sub_14015,0));	// 10607 call    sub_14015 ;~ 01C2:42D5
cs=0x1c2;eip=0x0042d8; 	T(STC);	// 10608 stc ;~ 01C2:42D8
loc_144d9:
	// 5398 
cs=0x1c2;eip=0x0042d9; 	X(POP(si));	// 10611 pop     si ;~ 01C2:42D9
cs=0x1c2;eip=0x0042da; 	X(POP(bx));	// 10612 pop     bx ;~ 01C2:42DA
cs=0x1c2;eip=0x0042db; 	X(POP(ax));	// 10613 pop     ax ;~ 01C2:42DB
cs=0x1c2;eip=0x0042dc; 	R(RETN(0));	// 10614 retn ;~ 01C2:42DC

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_144be: 	goto loc_144be;
        case m2c::kloc_144c9: 	goto loc_144c9;
        case m2c::kloc_144d3: 	goto loc_144d3;
        case m2c::kloc_144d9: 	goto loc_144d9;
        case m2c::kret_1c2_42b7: 	goto ret_1c2_42b7;
        case m2c::ksub_144b6: 	goto sub_144b6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_145b1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_145b1:
    _begin:
cs=0x1c2;eip=0x0043b1; 	T(MOV(si, 0x0BB63));	// 10710 mov     si, 0BB63h ;~ 01C2:43B1
ret_1c2_43b4:
	// 5405 
cs=0x1c2;eip=0x0043b4; 	J(CALL(sub_14308,0));	// 10711 call    sub_14308 ;~ 01C2:43B4
cs=0x1c2;eip=0x0043b7; 	T(MOV(cx, 0x0B4));	// 10712 mov     cx, 0B4h ; '´' ;~ 01C2:43B7
cs=0x1c2;eip=0x0043ba; 	J(CALL(sub_14612,0));	// 10713 call    sub_14612 ;~ 01C2:43BA
cs=0x1c2;eip=0x0043bd; 	X(MOV(byte_154c2, 5));	// 10714 mov     byte_154C2, 5 ;~ 01C2:43BD
cs=0x1c2;eip=0x0043c2; 	J(CALL(sub_14372,0));	// 10715 call    sub_14372 ;~ 01C2:43C2
cs=0x1c2;eip=0x0043c5; 	R(RETN(0));	// 10716 retn ;~ 01C2:43C5

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1c2_43b4: 	goto ret_1c2_43b4;
        case m2c::ksub_145b1: 	goto sub_145b1;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_145f0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_145f0:
    _begin:
cs=0x1c2;eip=0x0043f0; 	T(MOV(ah, 1));	// 10764 mov     ah, 1 ;~ 01C2:43F0
ret_1c2_43f2:
	// 5411 
cs=0x1c2;eip=0x0043f2; 	R(_INT(0x16));	// 10765 int     16h             ; KEYBOARD - CHECK BUFFER, DO NOT CLEAR ;~ 01C2:43F2
cs=0x1c2;eip=0x0043f4; 	J(JZ(loc_1460f));	// 10769 jz      short loc_1460F ;~ 01C2:43F4
cs=0x1c2;eip=0x0043f6; 	T(MOV(ah, 0));	// 10770 mov     ah, 0 ;~ 01C2:43F6
cs=0x1c2;eip=0x0043f8; 	R(_INT(0x16));	// 10771 int     16h             ; KEYBOARD - READ CHAR FROM BUFFER, WAIT IF EMPTY ;~ 01C2:43F8
cs=0x1c2;eip=0x0043fa; 	T(OR(al, al));	// 10773 or      al, al ;~ 01C2:43FA
cs=0x1c2;eip=0x0043fc; 	J(JNZ(loc_1460f));	// 10774 jnz     short loc_1460F ;~ 01C2:43FC
cs=0x1c2;eip=0x0043fe; 	T(CMP(ah, 0x3B));	// 10775 cmp     ah, 3Bh ; ';' ;~ 01C2:43FE
cs=0x1c2;eip=0x004401; 	J(JNZ(loc_14607));	// 10776 jnz     short loc_14607 ;~ 01C2:4401
cs=0x1c2;eip=0x004403; 	T(MOV(bl, 1));	// 10777 mov     bl, 1 ;~ 01C2:4403
cs=0x1c2;eip=0x004405; 	J(JMP(locret_14611));	// 10778 jmp     short locret_14611 ;~ 01C2:4405
loc_14607:
	// 5412 
cs=0x1c2;eip=0x004407; 	T(CMP(ah, 0x3C));	// 10782 cmp     ah, 3Ch ; '<' ;~ 01C2:4407
cs=0x1c2;eip=0x00440a; 	J(JNZ(loc_1460f));	// 10783 jnz     short loc_1460F ;~ 01C2:440A
cs=0x1c2;eip=0x00440c; 	T(MOV(bl, 2));	// 10784 mov     bl, 2 ;~ 01C2:440C
cs=0x1c2;eip=0x00440e; 	R(RETN(0));	// 10785 retn ;~ 01C2:440E
loc_1460f:
	// 5413 
cs=0x1c2;eip=0x00440f; 	T(MOV(bl, 0));	// 10790 mov     bl, 0 ;~ 01C2:440F
locret_14611:
	// 5414 
cs=0x1c2;eip=0x004411; 	R(RETN(0));	// 10793 retn ;~ 01C2:4411

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_14607: 	goto loc_14607;
        case m2c::kloc_1460f: 	goto loc_1460f;
        case m2c::klocret_14611: 	goto locret_14611;
        case m2c::kret_1c2_43f2: 	goto ret_1c2_43f2;
        case m2c::ksub_145f0: 	goto sub_145f0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

