/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool _group20(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group20:
    _begin:
sub_285fb:
	// 46809 
cs=0x1a01;eip=0x00000b; 	X(PUSH(bp));	// 46811 push    bp ;~ 1A01:000B
ret_1a01_c:
	// 7744 
cs=0x1a01;eip=0x00000c; 	T(MOV(bp, sp));	// 46812 mov     bp, sp ;~ 1A01:000C
cs=0x1a01;eip=0x00000e; 	X(PUSH(di));	// 46813 push    di ;~ 1A01:000E
cs=0x1a01;eip=0x00000f; 	X(PUSH(si));	// 46814 push    si ;~ 1A01:000F
cs=0x1a01;eip=0x000010; 	T(CLD);	// 46815 cld ;~ 1A01:0010
cs=0x1a01;eip=0x000011; 	T(MOV(ax, word_37bc8));	// 46816 mov     ax, word_37BC8 ;~ 1A01:0011
cs=0x1a01;eip=0x000014; 	T(MOV(es, ax));	// 46817 mov     es, ax ;~ 1A01:0014
cs=0x1a01;eip=0x000016; 	T(MOV(bx, word_37b8b));	// 46819 mov     bx, word_37B8B ;~ 1A01:0016
cs=0x1a01;eip=0x00001a; 	T(MOV(cx, bx));	// 46820 mov     cx, bx ;~ 1A01:001A
cs=0x1a01;eip=0x00001c; 	T(MOV(ax, word_37b8d));	// 46821 mov     ax, word_37B8D ;~ 1A01:001C
cs=0x1a01;eip=0x00001f; 	T(si = offset(dseg,unk_2c35a));	// 46822 lea     si, unk_2C35A ;~ 1A01:001F
cs=0x1a01;eip=0x000023; 	T(ADD(si, word_37b84));	// 46823 add     si, word_37B84 ;~ 1A01:0023
cs=0x1a01;eip=0x000027; __disp=*(dw*)(raddr(cs,si));
	R(JMP(__dispatch_call));	// 46824 jmp     word ptr cs:[si] ;~ 1A01:0027
seg030_proc:
	// 46829 
loc_2861a:
	// 7745 
cs=0x1a01;eip=0x00002a; 	T(XCHG(ah, al));	// 46830 xchg    ah, al ;~ 1A01:002A
cs=0x1a01;eip=0x00002c; 	T(SHR(ax, 1));	// 46831 shr     ax, 1 ;~ 1A01:002C
cs=0x1a01;eip=0x00002e; 	T(ADD(bh, al));	// 46832 add     bh, al ;~ 1A01:002E
cs=0x1a01;eip=0x000030; 	T(XOR(al, al));	// 46833 xor     al, al ;~ 1A01:0030
cs=0x1a01;eip=0x000032; 	T(ADD(bx, ax));	// 46834 add     bx, ax ;~ 1A01:0032
cs=0x1a01;eip=0x000034; 	T(SHR(ax, 1));	// 46835 shr     ax, 1 ;~ 1A01:0034
cs=0x1a01;eip=0x000036; 	T(SHR(ax, 1));	// 46836 shr     ax, 1 ;~ 1A01:0036
cs=0x1a01;eip=0x000038; 	T(ADD(bx, ax));	// 46837 add     bx, ax ;~ 1A01:0038
cs=0x1a01;eip=0x00003a; 	T(SHR(bx, 1));	// 46838 shr     bx, 1 ;~ 1A01:003A
cs=0x1a01;eip=0x00003c; 	T(SHR(bx, 1));	// 46839 shr     bx, 1 ;~ 1A01:003C
cs=0x1a01;eip=0x00003e; 	T(MOV(al, byte_37b81));	// 46840 mov     al, byte_37B81 ;~ 1A01:003E
cs=0x1a01;eip=0x000041; 	T(AND(al, 3));	// 46841 and     al, 3 ;~ 1A01:0041
cs=0x1a01;eip=0x000043; 	T(MOV(ah, al));	// 46842 mov     ah, al ;~ 1A01:0043
cs=0x1a01;eip=0x000045; 	T(SHL(ah, 1));	// 46843 shl     ah, 1 ;~ 1A01:0045
cs=0x1a01;eip=0x000047; 	T(SHL(ah, 1));	// 46844 shl     ah, 1 ;~ 1A01:0047
cs=0x1a01;eip=0x000049; 	T(OR(al, ah));	// 46845 or      al, ah ;~ 1A01:0049
cs=0x1a01;eip=0x00004b; 	T(SHL(ah, 1));	// 46846 shl     ah, 1 ;~ 1A01:004B
cs=0x1a01;eip=0x00004d; 	T(SHL(ah, 1));	// 46847 shl     ah, 1 ;~ 1A01:004D
cs=0x1a01;eip=0x00004f; 	T(OR(al, ah));	// 46848 or      al, ah ;~ 1A01:004F
cs=0x1a01;eip=0x000051; 	T(SHL(ah, 1));	// 46849 shl     ah, 1 ;~ 1A01:0051
cs=0x1a01;eip=0x000053; 	T(SHL(ah, 1));	// 46850 shl     ah, 1 ;~ 1A01:0053
cs=0x1a01;eip=0x000055; 	T(OR(al, ah));	// 46851 or      al, ah ;~ 1A01:0055
cs=0x1a01;eip=0x000057; 	T(MOV(ah, al));	// 46852 mov     ah, al ;~ 1A01:0057
cs=0x1a01;eip=0x000059; 	X(MOV(word_38203, ax));	// 46853 mov     word_38203, ax ;~ 1A01:0059
cs=0x1a01;eip=0x00005c; 	T(AND(cx, 3));	// 46854 and     cx, 3 ;~ 1A01:005C
cs=0x1a01;eip=0x00005f; 	T(XOR(cl, 3));	// 46855 xor     cl, 3 ;~ 1A01:005F
cs=0x1a01;eip=0x000062; 	T(ADD(cl, 5));	// 46856 add     cl, 5 ;~ 1A01:0062
cs=0x1a01;eip=0x000065; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 46857 mov     si, [bp+6] ;~ 1A01:0065
cs=0x1a01;eip=0x000068; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0A))));	// 46858 mov     di, [bp+0Ah] ;~ 1A01:0068
loc_2865b:
	// 7746 
cs=0x1a01;eip=0x00006b; 	T(MOV(dx, *(dw*)(raddr(ss,bp+8))));	// 46861 mov     dx, [bp+8] ;~ 1A01:006B
cs=0x1a01;eip=0x00006e; 	T(XOR(ah, ah));	// 46862 xor     ah, ah ;~ 1A01:006E
cs=0x1a01;eip=0x000070; 	X(PUSH(bx));	// 46863 push    bx ;~ 1A01:0070
loc_28661:
	// 7747 
cs=0x1a01;eip=0x000071; 	T(LODSB);	// 46866 lodsb ;~ 1A01:0071
cs=0x1a01;eip=0x000072; 	X(PUSH(dx));	// 46867 push    dx ;~ 1A01:0072
cs=0x1a01;eip=0x000073; 	X(PUSH(cx));	// 46868 push    cx ;~ 1A01:0073
cs=0x1a01;eip=0x000074; 	X(PUSH(ax));	// 46869 push    ax ;~ 1A01:0074
cs=0x1a01;eip=0x000075; 	X(PUSH(bx));	// 46870 push    bx ;~ 1A01:0075
cs=0x1a01;eip=0x000076; 	T(SHL(ax, cl));	// 46871 shl     ax, cl ;~ 1A01:0076
cs=0x1a01;eip=0x000078; 	T(MOV(al, ah));	// 46872 mov     al, ah ;~ 1A01:0078
cs=0x1a01;eip=0x00007a; 	T(MOV(cx, 1));	// 46873 mov     cx, 1 ;~ 1A01:007A
cs=0x1a01;eip=0x00007d; 	T(XOR(dx, dx));	// 46874 xor     dx, dx ;~ 1A01:007D
loc_2866f:
	// 7748 
cs=0x1a01;eip=0x00007f; 	T(MOV(bx, ax));	// 46877 mov     bx, ax ;~ 1A01:007F
cs=0x1a01;eip=0x000081; 	T(AND(bx, cx));	// 46878 and     bx, cx ;~ 1A01:0081
cs=0x1a01;eip=0x000083; 	T(OR(dx, bx));	// 46879 or      dx, bx ;~ 1A01:0083
cs=0x1a01;eip=0x000085; 	T(SHL(ax, 1));	// 46880 shl     ax, 1 ;~ 1A01:0085
cs=0x1a01;eip=0x000087; 	T(SHL(cx, 1));	// 46881 shl     cx, 1 ;~ 1A01:0087
cs=0x1a01;eip=0x000089; 	T(MOV(bx, ax));	// 46882 mov     bx, ax ;~ 1A01:0089
cs=0x1a01;eip=0x00008b; 	T(AND(bx, cx));	// 46883 and     bx, cx ;~ 1A01:008B
cs=0x1a01;eip=0x00008d; 	T(OR(dx, bx));	// 46884 or      dx, bx ;~ 1A01:008D
cs=0x1a01;eip=0x00008f; 	T(SHL(cx, 1));	// 46885 shl     cx, 1 ;~ 1A01:008F
cs=0x1a01;eip=0x000091; 	R(JNC(loc_2866f));	// 46886 jnb     short loc_2866F ;~ 1A01:0091
cs=0x1a01;eip=0x000093; 	T(MOV(ax, dx));	// 46887 mov     ax, dx ;~ 1A01:0093
cs=0x1a01;eip=0x000095; 	T(AND(ax, word_38203));	// 46888 and     ax, word_38203 ;~ 1A01:0095
cs=0x1a01;eip=0x000099; 	T(NOT(dx));	// 46889 not     dx ;~ 1A01:0099
cs=0x1a01;eip=0x00009b; 	T(XCHG(ah, al));	// 46890 xchg    ah, al ;~ 1A01:009B
cs=0x1a01;eip=0x00009d; 	T(XCHG(dh, dl));	// 46891 xchg    dh, dl ;~ 1A01:009D
cs=0x1a01;eip=0x00009f; 	X(POP(bx));	// 46892 pop     bx ;~ 1A01:009F
cs=0x1a01;eip=0x0000a0; 	T(AND(dx, *(dw*)(raddr(es,bx))));	// 46893 and     dx, es:[bx] ;~ 1A01:00A0
cs=0x1a01;eip=0x0000a3; 	T(OR(ax, dx));	// 46894 or      ax, dx ;~ 1A01:00A3
cs=0x1a01;eip=0x0000a5; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 46895 mov     es:[bx], ax ;~ 1A01:00A5
cs=0x1a01;eip=0x0000a8; 	T(ADD(bx, 2));	// 46896 add     bx, 2 ;~ 1A01:00A8
cs=0x1a01;eip=0x0000ab; 	X(POP(ax));	// 46897 pop     ax ;~ 1A01:00AB
cs=0x1a01;eip=0x0000ac; 	T(MOV(ah, al));	// 46898 mov     ah, al ;~ 1A01:00AC
cs=0x1a01;eip=0x0000ae; 	X(POP(cx));	// 46899 pop     cx ;~ 1A01:00AE
cs=0x1a01;eip=0x0000af; 	X(POP(dx));	// 46900 pop     dx ;~ 1A01:00AF
cs=0x1a01;eip=0x0000b0; 	T(DEC(dx));	// 46901 dec     dx ;~ 1A01:00B0
cs=0x1a01;eip=0x0000b1; 	R(JNZ(loc_28661));	// 46902 jnz     short loc_28661 ;~ 1A01:00B1
cs=0x1a01;eip=0x0000b3; 	T(CMP(cl, 8));	// 46903 cmp     cl, 8 ;~ 1A01:00B3
cs=0x1a01;eip=0x0000b6; 	R(JZ(loc_286db));	// 46904 jz      short loc_286DB ;~ 1A01:00B6
cs=0x1a01;eip=0x0000b8; 	T(SHL(al, cl));	// 46905 shl     al, cl ;~ 1A01:00B8
cs=0x1a01;eip=0x0000ba; 	X(PUSH(cx));	// 46906 push    cx ;~ 1A01:00BA
cs=0x1a01;eip=0x0000bb; 	X(PUSH(bx));	// 46907 push    bx ;~ 1A01:00BB
cs=0x1a01;eip=0x0000bc; 	T(MOV(cx, 1));	// 46908 mov     cx, 1 ;~ 1A01:00BC
cs=0x1a01;eip=0x0000bf; 	T(XOR(dx, dx));	// 46909 xor     dx, dx ;~ 1A01:00BF
loc_286b1:
	// 7749 
cs=0x1a01;eip=0x0000c1; 	T(MOV(bx, ax));	// 46912 mov     bx, ax ;~ 1A01:00C1
cs=0x1a01;eip=0x0000c3; 	T(AND(bx, cx));	// 46913 and     bx, cx ;~ 1A01:00C3
cs=0x1a01;eip=0x0000c5; 	T(OR(dx, bx));	// 46914 or      dx, bx ;~ 1A01:00C5
cs=0x1a01;eip=0x0000c7; 	T(SHL(ax, 1));	// 46915 shl     ax, 1 ;~ 1A01:00C7
cs=0x1a01;eip=0x0000c9; 	T(SHL(cx, 1));	// 46916 shl     cx, 1 ;~ 1A01:00C9
cs=0x1a01;eip=0x0000cb; 	T(MOV(bx, ax));	// 46917 mov     bx, ax ;~ 1A01:00CB
cs=0x1a01;eip=0x0000cd; 	T(AND(bx, cx));	// 46918 and     bx, cx ;~ 1A01:00CD
cs=0x1a01;eip=0x0000cf; 	T(OR(dx, bx));	// 46919 or      dx, bx ;~ 1A01:00CF
cs=0x1a01;eip=0x0000d1; 	T(SHL(cx, 1));	// 46920 shl     cx, 1 ;~ 1A01:00D1
cs=0x1a01;eip=0x0000d3; 	R(JNC(loc_286b1));	// 46921 jnb     short loc_286B1 ;~ 1A01:00D3
cs=0x1a01;eip=0x0000d5; 	T(MOV(ax, dx));	// 46922 mov     ax, dx ;~ 1A01:00D5
cs=0x1a01;eip=0x0000d7; 	T(AND(ax, word_38203));	// 46923 and     ax, word_38203 ;~ 1A01:00D7
cs=0x1a01;eip=0x0000db; 	T(NOT(dx));	// 46924 not     dx ;~ 1A01:00DB
cs=0x1a01;eip=0x0000dd; 	T(XCHG(ah, al));	// 46925 xchg    ah, al ;~ 1A01:00DD
cs=0x1a01;eip=0x0000df; 	T(XCHG(dh, dl));	// 46926 xchg    dh, dl ;~ 1A01:00DF
cs=0x1a01;eip=0x0000e1; 	X(POP(bx));	// 46927 pop     bx ;~ 1A01:00E1
cs=0x1a01;eip=0x0000e2; 	T(AND(dx, *(dw*)(raddr(es,bx))));	// 46928 and     dx, es:[bx] ;~ 1A01:00E2
cs=0x1a01;eip=0x0000e5; 	T(OR(ax, dx));	// 46929 or      ax, dx ;~ 1A01:00E5
cs=0x1a01;eip=0x0000e7; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 46930 mov     es:[bx], ax ;~ 1A01:00E7
cs=0x1a01;eip=0x0000ea; 	X(POP(cx));	// 46931 pop     cx ;~ 1A01:00EA
loc_286db:
	// 7750 
cs=0x1a01;eip=0x0000eb; 	X(POP(bx));	// 46934 pop     bx ;~ 1A01:00EB
cs=0x1a01;eip=0x0000ec; 	T(DEC(di));	// 46935 dec     di ;~ 1A01:00EC
cs=0x1a01;eip=0x0000ed; 	R(JZ(loc_286ef));	// 46936 jz      short loc_286EF ;~ 1A01:00ED
cs=0x1a01;eip=0x0000ef; 	T(TEST(bx, 0x2000));	// 46937 test    bx, 2000h ;~ 1A01:00EF
cs=0x1a01;eip=0x0000f3; 	R(JNZ(loc_286e8));	// 46938 jnz     short loc_286E8 ;~ 1A01:00F3
cs=0x1a01;eip=0x0000f5; 	T(SUB(bx, 0x50));	// 46939 sub     bx, 50h ; 'P' ;~ 1A01:00F5
loc_286e8:
	// 7751 
cs=0x1a01;eip=0x0000f8; 	T(XOR(bx, 0x2000));	// 46942 xor     bx, 2000h ;~ 1A01:00F8
cs=0x1a01;eip=0x0000fc; 	R(JMP(loc_2865b));	// 46943 jmp     loc_2865B ;~ 1A01:00FC
loc_286ef:
	// 7752 
cs=0x1a01;eip=0x0000ff; 	R(JMP(loc_28b04));	// 46947 jmp     loc_28B04 ;~ 1A01:00FF
loc_286f2:
	// 7753 
cs=0x1a01;eip=0x000102; 	T(XCHG(ah, al));	// 46951 xchg    ah, al ;~ 1A01:0102
cs=0x1a01;eip=0x000104; 	T(SHR(ax, 1));	// 46952 shr     ax, 1 ;~ 1A01:0104
cs=0x1a01;eip=0x000106; 	T(SHR(bx, 1));	// 46953 shr     bx, 1 ;~ 1A01:0106
cs=0x1a01;eip=0x000108; 	T(ADD(bh, al));	// 46954 add     bh, al ;~ 1A01:0108
cs=0x1a01;eip=0x00010a; 	T(XOR(al, al));	// 46955 xor     al, al ;~ 1A01:010A
cs=0x1a01;eip=0x00010c; 	T(ADD(bx, ax));	// 46956 add     bx, ax ;~ 1A01:010C
cs=0x1a01;eip=0x00010e; 	T(SHR(ax, 1));	// 46957 shr     ax, 1 ;~ 1A01:010E
cs=0x1a01;eip=0x000110; 	T(SHR(ax, 1));	// 46958 shr     ax, 1 ;~ 1A01:0110
cs=0x1a01;eip=0x000112; 	T(ADD(bx, ax));	// 46959 add     bx, ax ;~ 1A01:0112
cs=0x1a01;eip=0x000114; 	T(SHR(bx, 1));	// 46960 shr     bx, 1 ;~ 1A01:0114
cs=0x1a01;eip=0x000116; 	T(SHR(bx, 1));	// 46961 shr     bx, 1 ;~ 1A01:0116
cs=0x1a01;eip=0x000118; 	R(JMP(loc_2885a));	// 46962 jmp     loc_2885A ;~ 1A01:0118
loc_2870b:
	// 7754 
cs=0x1a01;eip=0x00011b; 	T(SHL(bx, 1));	// 46966 shl     bx, 1 ;~ 1A01:011B
cs=0x1a01;eip=0x00011d; 	T(SHL(bx, 1));	// 46967 shl     bx, 1 ;~ 1A01:011D
cs=0x1a01;eip=0x00011f; 	T(SHR(ax, 1));	// 46968 shr     ax, 1 ;~ 1A01:011F
cs=0x1a01;eip=0x000121; 	T(RCR(bx, 1));	// 46969 rcr     bx, 1 ;~ 1A01:0121
cs=0x1a01;eip=0x000123; 	T(SHR(ax, 1));	// 46970 shr     ax, 1 ;~ 1A01:0123
cs=0x1a01;eip=0x000125; 	T(RCR(bx, 1));	// 46971 rcr     bx, 1 ;~ 1A01:0125
cs=0x1a01;eip=0x000127; 	T(SHR(bx, 1));	// 46972 shr     bx, 1 ;~ 1A01:0127
cs=0x1a01;eip=0x000129; 	T(XCHG(ah, al));	// 46973 xchg    ah, al ;~ 1A01:0129
cs=0x1a01;eip=0x00012b; 	T(SHR(ax, 1));	// 46974 shr     ax, 1 ;~ 1A01:012B
cs=0x1a01;eip=0x00012d; 	T(ADD(bx, ax));	// 46975 add     bx, ax ;~ 1A01:012D
cs=0x1a01;eip=0x00012f; 	T(SHR(ax, 1));	// 46976 shr     ax, 1 ;~ 1A01:012F
cs=0x1a01;eip=0x000131; 	T(SHR(ax, 1));	// 46977 shr     ax, 1 ;~ 1A01:0131
cs=0x1a01;eip=0x000133; 	T(ADD(bx, ax));	// 46978 add     bx, ax ;~ 1A01:0133
cs=0x1a01;eip=0x000135; 	T(MOV(al, byte_37b81));	// 46979 mov     al, byte_37B81 ;~ 1A01:0135
cs=0x1a01;eip=0x000138; 	T(AND(al, 0x0F));	// 46980 and     al, 0Fh ;~ 1A01:0138
cs=0x1a01;eip=0x00013a; 	T(MOV(ah, al));	// 46981 mov     ah, al ;~ 1A01:013A
cs=0x1a01;eip=0x00013c; 	T(SHL(ah, 1));	// 46982 shl     ah, 1 ;~ 1A01:013C
cs=0x1a01;eip=0x00013e; 	T(SHL(ah, 1));	// 46983 shl     ah, 1 ;~ 1A01:013E
cs=0x1a01;eip=0x000140; 	T(SHL(ah, 1));	// 46984 shl     ah, 1 ;~ 1A01:0140
cs=0x1a01;eip=0x000142; 	T(SHL(ah, 1));	// 46985 shl     ah, 1 ;~ 1A01:0142
cs=0x1a01;eip=0x000144; 	T(OR(al, ah));	// 46986 or      al, ah ;~ 1A01:0144
cs=0x1a01;eip=0x000146; 	T(MOV(ah, al));	// 46987 mov     ah, al ;~ 1A01:0146
cs=0x1a01;eip=0x000148; 	X(MOV(word_38203, ax));	// 46988 mov     word_38203, ax ;~ 1A01:0148
cs=0x1a01;eip=0x00014b; 	T(AND(cx, 1));	// 46989 and     cx, 1 ;~ 1A01:014B
cs=0x1a01;eip=0x00014e; 	T(XOR(cl, 1));	// 46990 xor     cl, 1 ;~ 1A01:014E
cs=0x1a01;eip=0x000151; 	T(ADD(cl, 7));	// 46991 add     cl, 7 ;~ 1A01:0151
cs=0x1a01;eip=0x000154; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 46992 mov     si, [bp+6] ;~ 1A01:0154
cs=0x1a01;eip=0x000157; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0A))));	// 46993 mov     di, [bp+0Ah] ;~ 1A01:0157
loc_2874a:
	// 7755 
cs=0x1a01;eip=0x00015a; 	T(MOV(dx, *(dw*)(raddr(ss,bp+8))));	// 46997 mov     dx, [bp+8] ;~ 1A01:015A
cs=0x1a01;eip=0x00015d; 	T(XOR(ah, ah));	// 46998 xor     ah, ah ;~ 1A01:015D
cs=0x1a01;eip=0x00015f; 	X(PUSH(bx));	// 46999 push    bx ;~ 1A01:015F
loc_28750:
	// 7756 
cs=0x1a01;eip=0x000160; 	T(LODSB);	// 47002 lodsb ;~ 1A01:0160
cs=0x1a01;eip=0x000161; 	X(PUSH(dx));	// 47003 push    dx ;~ 1A01:0161
cs=0x1a01;eip=0x000162; 	X(PUSH(cx));	// 47004 push    cx ;~ 1A01:0162
cs=0x1a01;eip=0x000163; 	X(PUSH(ax));	// 47005 push    ax ;~ 1A01:0163
cs=0x1a01;eip=0x000164; 	X(PUSH(bx));	// 47006 push    bx ;~ 1A01:0164
cs=0x1a01;eip=0x000165; 	T(SHL(ax, cl));	// 47007 shl     ax, cl ;~ 1A01:0165
cs=0x1a01;eip=0x000167; 	T(MOV(bx, 0x0F));	// 47008 mov     bx, 0Fh ;~ 1A01:0167
cs=0x1a01;eip=0x00016a; 	T(MOV(cx, 4));	// 47009 mov     cx, 4 ;~ 1A01:016A
cs=0x1a01;eip=0x00016d; 	T(XOR(dx, dx));	// 47010 xor     dx, dx ;~ 1A01:016D
loc_2875f:
	// 7757 
cs=0x1a01;eip=0x00016f; 	T(TEST(ah, 1));	// 47013 test    ah, 1 ;~ 1A01:016F
cs=0x1a01;eip=0x000172; 	R(JZ(loc_28766));	// 47014 jz      short loc_28766 ;~ 1A01:0172
cs=0x1a01;eip=0x000174; 	T(OR(dx, bx));	// 47015 or      dx, bx ;~ 1A01:0174
loc_28766:
	// 7758 
cs=0x1a01;eip=0x000176; 	T(SHR(ah, 1));	// 47018 shr     ah, 1 ;~ 1A01:0176
cs=0x1a01;eip=0x000178; 	T(ROL(bx, 1));	// 47019 rol     bx, 1 ;~ 1A01:0178
cs=0x1a01;eip=0x00017a; 	T(ROL(bx, 1));	// 47020 rol     bx, 1 ;~ 1A01:017A
cs=0x1a01;eip=0x00017c; 	T(ROL(bx, 1));	// 47021 rol     bx, 1 ;~ 1A01:017C
cs=0x1a01;eip=0x00017e; 	T(ROL(bx, 1));	// 47022 rol     bx, 1 ;~ 1A01:017E
cs=0x1a01;eip=0x000180; 	R(LOOP(loc_2875f));	// 47023 loop    loc_2875F ;~ 1A01:0180
cs=0x1a01;eip=0x000182; 	X(PUSH(dx));	// 47024 push    dx ;~ 1A01:0182
cs=0x1a01;eip=0x000183; 	T(MOV(cx, 4));	// 47025 mov     cx, 4 ;~ 1A01:0183
cs=0x1a01;eip=0x000186; 	T(XOR(dx, dx));	// 47026 xor     dx, dx ;~ 1A01:0186
loc_28778:
	// 7759 
cs=0x1a01;eip=0x000188; 	T(TEST(ah, 1));	// 47029 test    ah, 1 ;~ 1A01:0188
cs=0x1a01;eip=0x00018b; 	R(JZ(loc_2877f));	// 47030 jz      short loc_2877F ;~ 1A01:018B
cs=0x1a01;eip=0x00018d; 	T(OR(dx, bx));	// 47031 or      dx, bx ;~ 1A01:018D
loc_2877f:
	// 7760 
cs=0x1a01;eip=0x00018f; 	T(SHR(ah, 1));	// 47034 shr     ah, 1 ;~ 1A01:018F
cs=0x1a01;eip=0x000191; 	T(ROL(bx, 1));	// 47035 rol     bx, 1 ;~ 1A01:0191
cs=0x1a01;eip=0x000193; 	T(ROL(bx, 1));	// 47036 rol     bx, 1 ;~ 1A01:0193
cs=0x1a01;eip=0x000195; 	T(ROL(bx, 1));	// 47037 rol     bx, 1 ;~ 1A01:0195
cs=0x1a01;eip=0x000197; 	T(ROL(bx, 1));	// 47038 rol     bx, 1 ;~ 1A01:0197
cs=0x1a01;eip=0x000199; 	R(LOOP(loc_28778));	// 47039 loop    loc_28778 ;~ 1A01:0199
cs=0x1a01;eip=0x00019b; 	X(POP(cx));	// 47040 pop     cx ;~ 1A01:019B
cs=0x1a01;eip=0x00019c; 	X(POP(bx));	// 47041 pop     bx ;~ 1A01:019C
cs=0x1a01;eip=0x00019d; 	T(MOV(ax, dx));	// 47042 mov     ax, dx ;~ 1A01:019D
cs=0x1a01;eip=0x00019f; 	T(AND(ax, word_38203));	// 47043 and     ax, word_38203 ;~ 1A01:019F
cs=0x1a01;eip=0x0001a3; 	T(NOT(dx));	// 47044 not     dx ;~ 1A01:01A3
cs=0x1a01;eip=0x0001a5; 	T(XCHG(ah, al));	// 47045 xchg    ah, al ;~ 1A01:01A5
cs=0x1a01;eip=0x0001a7; 	T(XCHG(dh, dl));	// 47046 xchg    dh, dl ;~ 1A01:01A7
cs=0x1a01;eip=0x0001a9; 	T(AND(dx, *(dw*)(raddr(es,bx))));	// 47047 and     dx, es:[bx] ;~ 1A01:01A9
cs=0x1a01;eip=0x0001ac; 	T(OR(ax, dx));	// 47048 or      ax, dx ;~ 1A01:01AC
cs=0x1a01;eip=0x0001ae; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 47049 mov     es:[bx], ax ;~ 1A01:01AE
cs=0x1a01;eip=0x0001b1; 	T(ADD(bx, 2));	// 47050 add     bx, 2 ;~ 1A01:01B1
cs=0x1a01;eip=0x0001b4; 	T(MOV(ax, cx));	// 47051 mov     ax, cx ;~ 1A01:01B4
cs=0x1a01;eip=0x0001b6; 	T(AND(ax, word_38203));	// 47052 and     ax, word_38203 ;~ 1A01:01B6
cs=0x1a01;eip=0x0001ba; 	T(NOT(cx));	// 47053 not     cx ;~ 1A01:01BA
cs=0x1a01;eip=0x0001bc; 	T(XCHG(ah, al));	// 47054 xchg    ah, al ;~ 1A01:01BC
cs=0x1a01;eip=0x0001be; 	T(XCHG(ch, cl));	// 47055 xchg    ch, cl ;~ 1A01:01BE
cs=0x1a01;eip=0x0001c0; 	T(AND(cx, *(dw*)(raddr(es,bx))));	// 47056 and     cx, es:[bx] ;~ 1A01:01C0
cs=0x1a01;eip=0x0001c3; 	T(OR(ax, cx));	// 47057 or      ax, cx ;~ 1A01:01C3
cs=0x1a01;eip=0x0001c5; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 47058 mov     es:[bx], ax ;~ 1A01:01C5
cs=0x1a01;eip=0x0001c8; 	T(ADD(bx, 2));	// 47059 add     bx, 2 ;~ 1A01:01C8
cs=0x1a01;eip=0x0001cb; 	X(POP(ax));	// 47060 pop     ax ;~ 1A01:01CB
cs=0x1a01;eip=0x0001cc; 	T(MOV(ah, al));	// 47061 mov     ah, al ;~ 1A01:01CC
cs=0x1a01;eip=0x0001ce; 	X(POP(cx));	// 47062 pop     cx ;~ 1A01:01CE
cs=0x1a01;eip=0x0001cf; 	X(POP(dx));	// 47063 pop     dx ;~ 1A01:01CF
cs=0x1a01;eip=0x0001d0; 	T(DEC(dx));	// 47064 dec     dx ;~ 1A01:01D0
cs=0x1a01;eip=0x0001d1; 	R(JNZ(loc_28750));	// 47065 jnz     short loc_28750 ;~ 1A01:01D1
cs=0x1a01;eip=0x0001d3; 	T(OR(cl, cl));	// 47066 or      cl, cl ;~ 1A01:01D3
cs=0x1a01;eip=0x0001d5; 	R(JZ(loc_2882b));	// 47067 jz      short loc_2882B ;~ 1A01:01D5
cs=0x1a01;eip=0x0001d7; 	T(SHL(al, cl));	// 47068 shl     al, cl ;~ 1A01:01D7
cs=0x1a01;eip=0x0001d9; 	X(PUSH(cx));	// 47069 push    cx ;~ 1A01:01D9
cs=0x1a01;eip=0x0001da; 	X(PUSH(bx));	// 47070 push    bx ;~ 1A01:01DA
cs=0x1a01;eip=0x0001db; 	T(MOV(bx, 0x0F));	// 47071 mov     bx, 0Fh ;~ 1A01:01DB
cs=0x1a01;eip=0x0001de; 	T(MOV(cx, 4));	// 47072 mov     cx, 4 ;~ 1A01:01DE
cs=0x1a01;eip=0x0001e1; 	T(XOR(dx, dx));	// 47073 xor     dx, dx ;~ 1A01:01E1
loc_287d3:
	// 7761 
cs=0x1a01;eip=0x0001e3; 	T(TEST(al, 1));	// 47076 test    al, 1 ;~ 1A01:01E3
cs=0x1a01;eip=0x0001e5; 	R(JZ(loc_287d9));	// 47077 jz      short loc_287D9 ;~ 1A01:01E5
cs=0x1a01;eip=0x0001e7; 	T(OR(dx, bx));	// 47078 or      dx, bx ;~ 1A01:01E7
loc_287d9:
	// 7762 
cs=0x1a01;eip=0x0001e9; 	T(SHR(al, 1));	// 47081 shr     al, 1 ;~ 1A01:01E9
cs=0x1a01;eip=0x0001eb; 	T(ROL(bx, 1));	// 47082 rol     bx, 1 ;~ 1A01:01EB
cs=0x1a01;eip=0x0001ed; 	T(ROL(bx, 1));	// 47083 rol     bx, 1 ;~ 1A01:01ED
cs=0x1a01;eip=0x0001ef; 	T(ROL(bx, 1));	// 47084 rol     bx, 1 ;~ 1A01:01EF
cs=0x1a01;eip=0x0001f1; 	T(ROL(bx, 1));	// 47085 rol     bx, 1 ;~ 1A01:01F1
cs=0x1a01;eip=0x0001f3; 	R(LOOP(loc_287d3));	// 47086 loop    loc_287D3 ;~ 1A01:01F3
cs=0x1a01;eip=0x0001f5; 	X(PUSH(dx));	// 47087 push    dx ;~ 1A01:01F5
cs=0x1a01;eip=0x0001f6; 	T(MOV(cx, 4));	// 47088 mov     cx, 4 ;~ 1A01:01F6
cs=0x1a01;eip=0x0001f9; 	T(XOR(dx, dx));	// 47089 xor     dx, dx ;~ 1A01:01F9
loc_287eb:
	// 7763 
cs=0x1a01;eip=0x0001fb; 	T(TEST(al, 1));	// 47092 test    al, 1 ;~ 1A01:01FB
cs=0x1a01;eip=0x0001fd; 	R(JZ(loc_287f1));	// 47093 jz      short loc_287F1 ;~ 1A01:01FD
cs=0x1a01;eip=0x0001ff; 	T(OR(dx, bx));	// 47094 or      dx, bx ;~ 1A01:01FF
loc_287f1:
	// 7764 
cs=0x1a01;eip=0x000201; 	T(SHR(al, 1));	// 47097 shr     al, 1 ;~ 1A01:0201
cs=0x1a01;eip=0x000203; 	T(ROL(bx, 1));	// 47098 rol     bx, 1 ;~ 1A01:0203
cs=0x1a01;eip=0x000205; 	T(ROL(bx, 1));	// 47099 rol     bx, 1 ;~ 1A01:0205
cs=0x1a01;eip=0x000207; 	T(ROL(bx, 1));	// 47100 rol     bx, 1 ;~ 1A01:0207
cs=0x1a01;eip=0x000209; 	T(ROL(bx, 1));	// 47101 rol     bx, 1 ;~ 1A01:0209
cs=0x1a01;eip=0x00020b; 	R(LOOP(loc_287eb));	// 47102 loop    loc_287EB ;~ 1A01:020B
cs=0x1a01;eip=0x00020d; 	X(POP(cx));	// 47103 pop     cx ;~ 1A01:020D
cs=0x1a01;eip=0x00020e; 	X(POP(bx));	// 47104 pop     bx ;~ 1A01:020E
cs=0x1a01;eip=0x00020f; 	T(MOV(ax, dx));	// 47105 mov     ax, dx ;~ 1A01:020F
cs=0x1a01;eip=0x000211; 	T(AND(ax, word_38203));	// 47106 and     ax, word_38203 ;~ 1A01:0211
cs=0x1a01;eip=0x000215; 	T(NOT(dx));	// 47107 not     dx ;~ 1A01:0215
cs=0x1a01;eip=0x000217; 	T(XCHG(ah, al));	// 47108 xchg    ah, al ;~ 1A01:0217
cs=0x1a01;eip=0x000219; 	T(XCHG(dh, dl));	// 47109 xchg    dh, dl ;~ 1A01:0219
cs=0x1a01;eip=0x00021b; 	T(AND(dx, *(dw*)(raddr(es,bx))));	// 47110 and     dx, es:[bx] ;~ 1A01:021B
cs=0x1a01;eip=0x00021e; 	T(OR(ax, dx));	// 47111 or      ax, dx ;~ 1A01:021E
cs=0x1a01;eip=0x000220; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 47112 mov     es:[bx], ax ;~ 1A01:0220
cs=0x1a01;eip=0x000223; 	T(ADD(bx, 2));	// 47113 add     bx, 2 ;~ 1A01:0223
cs=0x1a01;eip=0x000226; 	T(MOV(ax, cx));	// 47114 mov     ax, cx ;~ 1A01:0226
cs=0x1a01;eip=0x000228; 	T(AND(ax, word_38203));	// 47115 and     ax, word_38203 ;~ 1A01:0228
cs=0x1a01;eip=0x00022c; 	T(NOT(cx));	// 47116 not     cx ;~ 1A01:022C
cs=0x1a01;eip=0x00022e; 	T(XCHG(ah, al));	// 47117 xchg    ah, al ;~ 1A01:022E
cs=0x1a01;eip=0x000230; 	T(XCHG(ch, cl));	// 47118 xchg    ch, cl ;~ 1A01:0230
cs=0x1a01;eip=0x000232; 	T(AND(cx, *(dw*)(raddr(es,bx))));	// 47119 and     cx, es:[bx] ;~ 1A01:0232
cs=0x1a01;eip=0x000235; 	T(OR(ax, cx));	// 47120 or      ax, cx ;~ 1A01:0235
cs=0x1a01;eip=0x000237; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 47121 mov     es:[bx], ax ;~ 1A01:0237
cs=0x1a01;eip=0x00023a; 	X(POP(cx));	// 47122 pop     cx ;~ 1A01:023A
loc_2882b:
	// 7765 
cs=0x1a01;eip=0x00023b; 	X(POP(bx));	// 47125 pop     bx ;~ 1A01:023B
cs=0x1a01;eip=0x00023c; 	T(DEC(di));	// 47126 dec     di ;~ 1A01:023C
cs=0x1a01;eip=0x00023d; 	R(JZ(loc_28847));	// 47127 jz      short loc_28847 ;~ 1A01:023D
cs=0x1a01;eip=0x00023f; 	T(TEST(bx, 0x0E000));	// 47128 test    bx, 0E000h ;~ 1A01:023F
cs=0x1a01;eip=0x000243; 	R(JZ(loc_2883c));	// 47129 jz      short loc_2883C ;~ 1A01:0243
cs=0x1a01;eip=0x000245; 	T(SUB(bx, 0x2000));	// 47130 sub     bx, 2000h ;~ 1A01:0245
cs=0x1a01;eip=0x000249; 	R(JMP(loc_2874a));	// 47131 jmp     loc_2874A ;~ 1A01:0249
loc_2883c:
	// 7766 
cs=0x1a01;eip=0x00024c; 	T(OR(bx, 0x6000));	// 47135 or      bx, 6000h ;~ 1A01:024C
cs=0x1a01;eip=0x000250; 	T(SUB(bx, 0x0A0));	// 47136 sub     bx, 0A0h ; ' ' ;~ 1A01:0250
cs=0x1a01;eip=0x000254; 	R(JMP(loc_2874a));	// 47137 jmp     loc_2874A ;~ 1A01:0254
loc_28847:
	// 7767 
cs=0x1a01;eip=0x000257; 	R(JMP(loc_28b04));	// 47141 jmp     loc_28B04 ;~ 1A01:0257
loc_2884a:
	// 7768 
cs=0x1a01;eip=0x00025a; 	T(SHR(ax, 1));	// 47145 shr     ax, 1 ;~ 1A01:025A
cs=0x1a01;eip=0x00025c; 	T(RCR(bx, 1));	// 47146 rcr     bx, 1 ;~ 1A01:025C
cs=0x1a01;eip=0x00025e; 	T(SHR(ax, 1));	// 47147 shr     ax, 1 ;~ 1A01:025E
cs=0x1a01;eip=0x000260; 	T(RCR(bx, 1));	// 47148 rcr     bx, 1 ;~ 1A01:0260
cs=0x1a01;eip=0x000262; 	T(SHR(bx, 1));	// 47149 shr     bx, 1 ;~ 1A01:0262
cs=0x1a01;eip=0x000264; 	T(MOV(ah, 0x5A));	// 47150 mov     ah, 5Ah ; 'Z' ;~ 1A01:0264
cs=0x1a01;eip=0x000266; 	T(MUL1_1(ah));	// 47151 mul     ah ;~ 1A01:0266
cs=0x1a01;eip=0x000268; 	T(ADD(bx, ax));	// 47152 add     bx, ax ;~ 1A01:0268
loc_2885a:
	// 7769 
cs=0x1a01;eip=0x00026a; 	T(XOR(ch, ch));	// 47155 xor     ch, ch ;~ 1A01:026A
cs=0x1a01;eip=0x00026c; 	T(SUB(ch, byte_37b81));	// 47156 sub     ch, byte_37B81 ;~ 1A01:026C
cs=0x1a01;eip=0x000270; 	T(AND(cl, 7));	// 47157 and     cl, 7 ;~ 1A01:0270
cs=0x1a01;eip=0x000273; 	T(XOR(cl, 7));	// 47158 xor     cl, 7 ;~ 1A01:0273
cs=0x1a01;eip=0x000276; 	T(INC(cx));	// 47159 inc     cx ;~ 1A01:0276
cs=0x1a01;eip=0x000277; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 47160 mov     si, [bp+6] ;~ 1A01:0277
cs=0x1a01;eip=0x00027a; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0A))));	// 47161 mov     di, [bp+0Ah] ;~ 1A01:027A
loc_2886d:
	// 7770 
cs=0x1a01;eip=0x00027d; 	T(MOV(dx, *(dw*)(raddr(ss,bp+8))));	// 47165 mov     dx, [bp+8] ;~ 1A01:027D
cs=0x1a01;eip=0x000280; 	T(XOR(ah, ah));	// 47166 xor     ah, ah ;~ 1A01:0280
cs=0x1a01;eip=0x000282; 	X(PUSH(bx));	// 47167 push    bx ;~ 1A01:0282
loc_28873:
	// 7771 
cs=0x1a01;eip=0x000283; 	T(LODSB);	// 47170 lodsb ;~ 1A01:0283
cs=0x1a01;eip=0x000284; 	X(PUSH(ax));	// 47171 push    ax ;~ 1A01:0284
cs=0x1a01;eip=0x000285; 	T(SHL(ax, cl));	// 47172 shl     ax, cl ;~ 1A01:0285
cs=0x1a01;eip=0x000287; 	T(MOV(al, ah));	// 47173 mov     al, ah ;~ 1A01:0287
cs=0x1a01;eip=0x000289; 	T(NOT(al));	// 47174 not     al ;~ 1A01:0289
cs=0x1a01;eip=0x00028b; 	T(AND(ah, ch));	// 47175 and     ah, ch ;~ 1A01:028B
cs=0x1a01;eip=0x00028d; 	X(AND(*(raddr(es,bx)), al));	// 47176 and     es:[bx], al ;~ 1A01:028D
cs=0x1a01;eip=0x000290; 	X(OR(*(raddr(es,bx)), ah));	// 47177 or      es:[bx], ah ;~ 1A01:0290
cs=0x1a01;eip=0x000293; 	T(INC(bx));	// 47178 inc     bx ;~ 1A01:0293
cs=0x1a01;eip=0x000294; 	X(POP(ax));	// 47179 pop     ax ;~ 1A01:0294
cs=0x1a01;eip=0x000295; 	T(MOV(ah, al));	// 47180 mov     ah, al ;~ 1A01:0295
cs=0x1a01;eip=0x000297; 	T(DEC(dx));	// 47181 dec     dx ;~ 1A01:0297
cs=0x1a01;eip=0x000298; 	R(JNZ(loc_28873));	// 47182 jnz     short loc_28873 ;~ 1A01:0298
cs=0x1a01;eip=0x00029a; 	T(CMP(cl, 8));	// 47183 cmp     cl, 8 ;~ 1A01:029A
cs=0x1a01;eip=0x00029d; 	R(JZ(loc_2889f));	// 47184 jz      short loc_2889F ;~ 1A01:029D
cs=0x1a01;eip=0x00029f; 	T(SHL(al, cl));	// 47185 shl     al, cl ;~ 1A01:029F
cs=0x1a01;eip=0x0002a1; 	T(MOV(ah, al));	// 47186 mov     ah, al ;~ 1A01:02A1
cs=0x1a01;eip=0x0002a3; 	T(NOT(al));	// 47187 not     al ;~ 1A01:02A3
cs=0x1a01;eip=0x0002a5; 	T(AND(ah, ch));	// 47188 and     ah, ch ;~ 1A01:02A5
cs=0x1a01;eip=0x0002a7; 	T(AND(al, *(raddr(es,bx))));	// 47189 and     al, es:[bx] ;~ 1A01:02A7
cs=0x1a01;eip=0x0002aa; 	T(OR(al, ah));	// 47190 or      al, ah ;~ 1A01:02AA
cs=0x1a01;eip=0x0002ac; 	X(MOV(*(raddr(es,bx)), al));	// 47191 mov     es:[bx], al ;~ 1A01:02AC
loc_2889f:
	// 7772 
cs=0x1a01;eip=0x0002af; 	X(POP(bx));	// 47194 pop     bx ;~ 1A01:02AF
cs=0x1a01;eip=0x0002b0; 	T(DEC(di));	// 47195 dec     di ;~ 1A01:02B0
cs=0x1a01;eip=0x0002b1; 	R(JZ(loc_288b9));	// 47196 jz      short loc_288B9 ;~ 1A01:02B1
cs=0x1a01;eip=0x0002b3; 	T(TEST(bx, 0x0E000));	// 47197 test    bx, 0E000h ;~ 1A01:02B3
cs=0x1a01;eip=0x0002b7; 	R(JZ(loc_288af));	// 47198 jz      short loc_288AF ;~ 1A01:02B7
cs=0x1a01;eip=0x0002b9; 	T(SUB(bx, 0x2000));	// 47199 sub     bx, 2000h ;~ 1A01:02B9
cs=0x1a01;eip=0x0002bd; 	R(JMP(loc_2886d));	// 47200 jmp     short loc_2886D ;~ 1A01:02BD
loc_288af:
	// 7773 
cs=0x1a01;eip=0x0002bf; 	T(OR(bx, word_37f94));	// 47204 or      bx, word_37F94 ;~ 1A01:02BF
cs=0x1a01;eip=0x0002c3; 	T(SUB(bx, word_38018));	// 47205 sub     bx, word_38018 ;~ 1A01:02C3
cs=0x1a01;eip=0x0002c7; 	R(JMP(loc_2886d));	// 47206 jmp     short loc_2886D ;~ 1A01:02C7
loc_288b9:
	// 7774 
cs=0x1a01;eip=0x0002c9; 	R(JMP(loc_28b04));	// 47210 jmp     loc_28B04 ;~ 1A01:02C9
loc_288bc:
	// 7775 
cs=0x1a01;eip=0x0002cc; 	T(SHL(bx, 1));	// 47214 shl     bx, 1 ;~ 1A01:02CC
cs=0x1a01;eip=0x0002ce; 	T(ADD(bx, 0x28));	// 47215 add     bx, 28h ; '(' ;~ 1A01:02CE
cs=0x1a01;eip=0x0002d1; 	T(MOV(dx, ax));	// 47216 mov     dx, ax ;~ 1A01:02D1
cs=0x1a01;eip=0x0002d3; 	T(SAR(ax, 1));	// 47217 sar     ax, 1 ;~ 1A01:02D3
cs=0x1a01;eip=0x0002d5; 	T(ADD(ax, dx));	// 47218 add     ax, dx ;~ 1A01:02D5
cs=0x1a01;eip=0x0002d7; 	T(ADD(ax, 0x18));	// 47219 add     ax, 18h ;~ 1A01:02D7
cs=0x1a01;eip=0x0002da; 	T(AND(dx, 1));	// 47220 and     dx, 1 ;~ 1A01:02DA
cs=0x1a01;eip=0x0002dd; 	T(ADD(ax, dx));	// 47221 add     ax, dx ;~ 1A01:02DD
cs=0x1a01;eip=0x0002df; 	X(MOV(byte_37b88, dl));	// 47222 mov     byte_37B88, dl ;~ 1A01:02DF
cs=0x1a01;eip=0x0002e3; 	T(SHR(ax, 1));	// 47223 shr     ax, 1 ;~ 1A01:02E3
cs=0x1a01;eip=0x0002e5; 	T(RCR(bx, 1));	// 47224 rcr     bx, 1 ;~ 1A01:02E5
cs=0x1a01;eip=0x0002e7; 	T(SHR(ax, 1));	// 47225 shr     ax, 1 ;~ 1A01:02E7
cs=0x1a01;eip=0x0002e9; 	T(RCR(bx, 1));	// 47226 rcr     bx, 1 ;~ 1A01:02E9
cs=0x1a01;eip=0x0002eb; 	T(SHR(bx, 1));	// 47227 shr     bx, 1 ;~ 1A01:02EB
cs=0x1a01;eip=0x0002ed; 	T(MOV(ah, 0x5A));	// 47228 mov     ah, 5Ah ; 'Z' ;~ 1A01:02ED
cs=0x1a01;eip=0x0002ef; 	T(MUL1_1(ah));	// 47229 mul     ah ;~ 1A01:02EF
cs=0x1a01;eip=0x0002f1; 	T(ADD(bx, ax));	// 47230 add     bx, ax ;~ 1A01:02F1
cs=0x1a01;eip=0x0002f3; 	T(MOV(al, byte_37b81));	// 47231 mov     al, byte_37B81 ;~ 1A01:02F3
cs=0x1a01;eip=0x0002f6; 	T(AND(al, 3));	// 47232 and     al, 3 ;~ 1A01:02F6
cs=0x1a01;eip=0x0002f8; 	T(MOV(ah, al));	// 47233 mov     ah, al ;~ 1A01:02F8
cs=0x1a01;eip=0x0002fa; 	T(SHL(ah, 1));	// 47234 shl     ah, 1 ;~ 1A01:02FA
cs=0x1a01;eip=0x0002fc; 	T(SHL(ah, 1));	// 47235 shl     ah, 1 ;~ 1A01:02FC
cs=0x1a01;eip=0x0002fe; 	T(OR(al, ah));	// 47236 or      al, ah ;~ 1A01:02FE
cs=0x1a01;eip=0x000300; 	T(SHL(ah, 1));	// 47237 shl     ah, 1 ;~ 1A01:0300
cs=0x1a01;eip=0x000302; 	T(SHL(ah, 1));	// 47238 shl     ah, 1 ;~ 1A01:0302
cs=0x1a01;eip=0x000304; 	T(OR(al, ah));	// 47239 or      al, ah ;~ 1A01:0304
cs=0x1a01;eip=0x000306; 	T(SHL(ah, 1));	// 47240 shl     ah, 1 ;~ 1A01:0306
cs=0x1a01;eip=0x000308; 	T(SHL(ah, 1));	// 47241 shl     ah, 1 ;~ 1A01:0308
cs=0x1a01;eip=0x00030a; 	T(OR(al, ah));	// 47242 or      al, ah ;~ 1A01:030A
cs=0x1a01;eip=0x00030c; 	T(MOV(ah, al));	// 47243 mov     ah, al ;~ 1A01:030C
cs=0x1a01;eip=0x00030e; 	X(MOV(word_38203, ax));	// 47244 mov     word_38203, ax ;~ 1A01:030E
cs=0x1a01;eip=0x000311; 	T(AND(cx, 3));	// 47245 and     cx, 3 ;~ 1A01:0311
cs=0x1a01;eip=0x000314; 	T(XOR(cl, 3));	// 47246 xor     cl, 3 ;~ 1A01:0314
cs=0x1a01;eip=0x000317; 	T(ADD(cl, 5));	// 47247 add     cl, 5 ;~ 1A01:0317
cs=0x1a01;eip=0x00031a; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 47248 mov     si, [bp+6] ;~ 1A01:031A
cs=0x1a01;eip=0x00031d; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0A))));	// 47249 mov     di, [bp+0Ah] ;~ 1A01:031D
loc_28910:
	// 7776 
cs=0x1a01;eip=0x000320; 	T(MOV(dx, *(dw*)(raddr(ss,bp+8))));	// 47253 mov     dx, [bp+8] ;~ 1A01:0320
cs=0x1a01;eip=0x000323; 	T(XOR(ah, ah));	// 47254 xor     ah, ah ;~ 1A01:0323
cs=0x1a01;eip=0x000325; 	X(PUSH(di));	// 47255 push    di ;~ 1A01:0325
cs=0x1a01;eip=0x000326; 	X(PUSH(bx));	// 47256 push    bx ;~ 1A01:0326
cs=0x1a01;eip=0x000327; 	T(MOV(di, bx));	// 47257 mov     di, bx ;~ 1A01:0327
cs=0x1a01;eip=0x000329; 	T(TEST(byte_37b88, 1));	// 47258 test    byte_37B88, 1 ;~ 1A01:0329
cs=0x1a01;eip=0x00032e; 	R(JZ(loc_28933));	// 47259 jz      short loc_28933 ;~ 1A01:032E
cs=0x1a01;eip=0x000330; 	T(TEST(di, 0x0E000));	// 47260 test    di, 0E000h ;~ 1A01:0330
cs=0x1a01;eip=0x000334; 	R(JZ(loc_2892c));	// 47261 jz      short loc_2892C ;~ 1A01:0334
cs=0x1a01;eip=0x000336; 	T(SUB(di, 0x2000));	// 47262 sub     di, 2000h ;~ 1A01:0336
cs=0x1a01;eip=0x00033a; 	R(JMP(loc_28933));	// 47263 jmp     short loc_28933 ;~ 1A01:033A
loc_2892c:
	// 7777 
cs=0x1a01;eip=0x00033c; 	T(OR(di, 0x6000));	// 47267 or      di, 6000h ;~ 1A01:033C
cs=0x1a01;eip=0x000340; 	T(SUB(di, 0x5A));	// 47268 sub     di, 5Ah ; 'Z' ;~ 1A01:0340
loc_28933:
	// 7778 
cs=0x1a01;eip=0x000343; 	T(LODSB);	// 47272 lodsb ;~ 1A01:0343
cs=0x1a01;eip=0x000344; 	X(PUSH(dx));	// 47273 push    dx ;~ 1A01:0344
cs=0x1a01;eip=0x000345; 	X(PUSH(cx));	// 47274 push    cx ;~ 1A01:0345
cs=0x1a01;eip=0x000346; 	X(PUSH(ax));	// 47275 push    ax ;~ 1A01:0346
cs=0x1a01;eip=0x000347; 	X(PUSH(bx));	// 47276 push    bx ;~ 1A01:0347
cs=0x1a01;eip=0x000348; 	T(SHL(ax, cl));	// 47277 shl     ax, cl ;~ 1A01:0348
cs=0x1a01;eip=0x00034a; 	T(MOV(al, ah));	// 47278 mov     al, ah ;~ 1A01:034A
cs=0x1a01;eip=0x00034c; 	T(MOV(cx, 1));	// 47279 mov     cx, 1 ;~ 1A01:034C
cs=0x1a01;eip=0x00034f; 	T(XOR(dx, dx));	// 47280 xor     dx, dx ;~ 1A01:034F
loc_28941:
	// 7779 
cs=0x1a01;eip=0x000351; 	T(MOV(bx, ax));	// 47283 mov     bx, ax ;~ 1A01:0351
cs=0x1a01;eip=0x000353; 	T(AND(bx, cx));	// 47284 and     bx, cx ;~ 1A01:0353
cs=0x1a01;eip=0x000355; 	T(OR(dx, bx));	// 47285 or      dx, bx ;~ 1A01:0355
cs=0x1a01;eip=0x000357; 	T(SHL(ax, 1));	// 47286 shl     ax, 1 ;~ 1A01:0357
cs=0x1a01;eip=0x000359; 	T(SHL(cx, 1));	// 47287 shl     cx, 1 ;~ 1A01:0359
cs=0x1a01;eip=0x00035b; 	T(MOV(bx, ax));	// 47288 mov     bx, ax ;~ 1A01:035B
cs=0x1a01;eip=0x00035d; 	T(AND(bx, cx));	// 47289 and     bx, cx ;~ 1A01:035D
cs=0x1a01;eip=0x00035f; 	T(OR(dx, bx));	// 47290 or      dx, bx ;~ 1A01:035F
cs=0x1a01;eip=0x000361; 	T(SHL(cx, 1));	// 47291 shl     cx, 1 ;~ 1A01:0361
cs=0x1a01;eip=0x000363; 	R(JNC(loc_28941));	// 47292 jnb     short loc_28941 ;~ 1A01:0363
cs=0x1a01;eip=0x000365; 	T(MOV(ax, dx));	// 47293 mov     ax, dx ;~ 1A01:0365
cs=0x1a01;eip=0x000367; 	T(AND(ax, word_38203));	// 47294 and     ax, word_38203 ;~ 1A01:0367
cs=0x1a01;eip=0x00036b; 	T(NOT(dx));	// 47295 not     dx ;~ 1A01:036B
cs=0x1a01;eip=0x00036d; 	T(XCHG(ah, al));	// 47296 xchg    ah, al ;~ 1A01:036D
cs=0x1a01;eip=0x00036f; 	T(XCHG(dh, dl));	// 47297 xchg    dh, dl ;~ 1A01:036F
cs=0x1a01;eip=0x000371; 	T(MOV(cx, dx));	// 47298 mov     cx, dx ;~ 1A01:0371
cs=0x1a01;eip=0x000373; 	X(POP(bx));	// 47299 pop     bx ;~ 1A01:0373
cs=0x1a01;eip=0x000374; 	T(AND(dx, *(dw*)(raddr(es,bx))));	// 47300 and     dx, es:[bx] ;~ 1A01:0374
cs=0x1a01;eip=0x000377; 	T(OR(dx, ax));	// 47301 or      dx, ax ;~ 1A01:0377
cs=0x1a01;eip=0x000379; 	X(MOV(*(dw*)(raddr(es,bx)), dx));	// 47302 mov     es:[bx], dx ;~ 1A01:0379
cs=0x1a01;eip=0x00037c; 	T(AND(cx, *(dw*)(raddr(es,di))));	// 47303 and     cx, es:[di] ;~ 1A01:037C
cs=0x1a01;eip=0x00037f; 	T(OR(cx, ax));	// 47304 or      cx, ax ;~ 1A01:037F
cs=0x1a01;eip=0x000381; 	X(MOV(*(dw*)(raddr(es,di)), cx));	// 47305 mov     es:[di], cx ;~ 1A01:0381
cs=0x1a01;eip=0x000384; 	T(ADD(bx, 2));	// 47306 add     bx, 2 ;~ 1A01:0384
cs=0x1a01;eip=0x000387; 	T(ADD(di, 2));	// 47307 add     di, 2 ;~ 1A01:0387
cs=0x1a01;eip=0x00038a; 	X(POP(ax));	// 47308 pop     ax ;~ 1A01:038A
cs=0x1a01;eip=0x00038b; 	T(MOV(ah, al));	// 47309 mov     ah, al ;~ 1A01:038B
cs=0x1a01;eip=0x00038d; 	X(POP(cx));	// 47310 pop     cx ;~ 1A01:038D
cs=0x1a01;eip=0x00038e; 	X(POP(dx));	// 47311 pop     dx ;~ 1A01:038E
cs=0x1a01;eip=0x00038f; 	T(DEC(dx));	// 47312 dec     dx ;~ 1A01:038F
cs=0x1a01;eip=0x000390; 	R(JNZ(loc_28933));	// 47313 jnz     short loc_28933 ;~ 1A01:0390
cs=0x1a01;eip=0x000392; 	T(CMP(cl, 8));	// 47314 cmp     cl, 8 ;~ 1A01:0392
cs=0x1a01;eip=0x000395; 	R(JZ(loc_289c4));	// 47315 jz      short loc_289C4 ;~ 1A01:0395
cs=0x1a01;eip=0x000397; 	T(SHL(al, cl));	// 47316 shl     al, cl ;~ 1A01:0397
cs=0x1a01;eip=0x000399; 	X(PUSH(cx));	// 47317 push    cx ;~ 1A01:0399
cs=0x1a01;eip=0x00039a; 	X(PUSH(bx));	// 47318 push    bx ;~ 1A01:039A
cs=0x1a01;eip=0x00039b; 	T(MOV(cx, 1));	// 47319 mov     cx, 1 ;~ 1A01:039B
cs=0x1a01;eip=0x00039e; 	T(XOR(dx, dx));	// 47320 xor     dx, dx ;~ 1A01:039E
loc_28990:
	// 7780 
cs=0x1a01;eip=0x0003a0; 	T(MOV(bx, ax));	// 47323 mov     bx, ax ;~ 1A01:03A0
cs=0x1a01;eip=0x0003a2; 	T(AND(bx, cx));	// 47324 and     bx, cx ;~ 1A01:03A2
cs=0x1a01;eip=0x0003a4; 	T(OR(dx, bx));	// 47325 or      dx, bx ;~ 1A01:03A4
cs=0x1a01;eip=0x0003a6; 	T(SHL(ax, 1));	// 47326 shl     ax, 1 ;~ 1A01:03A6
cs=0x1a01;eip=0x0003a8; 	T(SHL(cx, 1));	// 47327 shl     cx, 1 ;~ 1A01:03A8
cs=0x1a01;eip=0x0003aa; 	T(MOV(bx, ax));	// 47328 mov     bx, ax ;~ 1A01:03AA
cs=0x1a01;eip=0x0003ac; 	T(AND(bx, cx));	// 47329 and     bx, cx ;~ 1A01:03AC
cs=0x1a01;eip=0x0003ae; 	T(OR(dx, bx));	// 47330 or      dx, bx ;~ 1A01:03AE
cs=0x1a01;eip=0x0003b0; 	T(SHL(cx, 1));	// 47331 shl     cx, 1 ;~ 1A01:03B0
cs=0x1a01;eip=0x0003b2; 	R(JNC(loc_28990));	// 47332 jnb     short loc_28990 ;~ 1A01:03B2
cs=0x1a01;eip=0x0003b4; 	T(MOV(ax, dx));	// 47333 mov     ax, dx ;~ 1A01:03B4
cs=0x1a01;eip=0x0003b6; 	T(AND(ax, word_38203));	// 47334 and     ax, word_38203 ;~ 1A01:03B6
cs=0x1a01;eip=0x0003ba; 	T(NOT(dx));	// 47335 not     dx ;~ 1A01:03BA
cs=0x1a01;eip=0x0003bc; 	T(XCHG(ah, al));	// 47336 xchg    ah, al ;~ 1A01:03BC
cs=0x1a01;eip=0x0003be; 	T(XCHG(dh, dl));	// 47337 xchg    dh, dl ;~ 1A01:03BE
cs=0x1a01;eip=0x0003c0; 	T(MOV(cx, dx));	// 47338 mov     cx, dx ;~ 1A01:03C0
cs=0x1a01;eip=0x0003c2; 	X(POP(bx));	// 47339 pop     bx ;~ 1A01:03C2
cs=0x1a01;eip=0x0003c3; 	T(AND(dx, *(dw*)(raddr(es,bx))));	// 47340 and     dx, es:[bx] ;~ 1A01:03C3
cs=0x1a01;eip=0x0003c6; 	T(OR(dx, ax));	// 47341 or      dx, ax ;~ 1A01:03C6
cs=0x1a01;eip=0x0003c8; 	X(MOV(*(dw*)(raddr(es,bx)), dx));	// 47342 mov     es:[bx], dx ;~ 1A01:03C8
cs=0x1a01;eip=0x0003cb; 	T(AND(cx, *(dw*)(raddr(es,di))));	// 47343 and     cx, es:[di] ;~ 1A01:03CB
cs=0x1a01;eip=0x0003ce; 	T(OR(cx, ax));	// 47344 or      cx, ax ;~ 1A01:03CE
cs=0x1a01;eip=0x0003d0; 	X(MOV(*(dw*)(raddr(es,di)), cx));	// 47345 mov     es:[di], cx ;~ 1A01:03D0
cs=0x1a01;eip=0x0003d3; 	X(POP(cx));	// 47346 pop     cx ;~ 1A01:03D3
loc_289c4:
	// 7781 
cs=0x1a01;eip=0x0003d4; 	X(POP(bx));	// 47349 pop     bx ;~ 1A01:03D4
cs=0x1a01;eip=0x0003d5; 	X(POP(di));	// 47350 pop     di ;~ 1A01:03D5
cs=0x1a01;eip=0x0003d6; 	T(DEC(di));	// 47351 dec     di ;~ 1A01:03D6
cs=0x1a01;eip=0x0003d7; 	R(JZ(loc_289f0));	// 47352 jz      short loc_289F0 ;~ 1A01:03D7
cs=0x1a01;eip=0x0003d9; 	T(MOV(al, byte_37b88));	// 47353 mov     al, byte_37B88 ;~ 1A01:03D9
cs=0x1a01;eip=0x0003dc; 	X(XOR(byte_37b88, 1));	// 47354 xor     byte_37B88, 1 ;~ 1A01:03DC
loc_289d1:
	// 7782 
cs=0x1a01;eip=0x0003e1; 	T(TEST(bx, 0x0E000));	// 47358 test    bx, 0E000h ;~ 1A01:03E1
cs=0x1a01;eip=0x0003e5; 	R(JZ(loc_289e2));	// 47359 jz      short loc_289E2 ;~ 1A01:03E5
cs=0x1a01;eip=0x0003e7; 	T(SUB(bx, 0x2000));	// 47360 sub     bx, 2000h ;~ 1A01:03E7
cs=0x1a01;eip=0x0003eb; 	T(XOR(al, 1));	// 47361 xor     al, 1 ;~ 1A01:03EB
cs=0x1a01;eip=0x0003ed; 	R(JZ(loc_289d1));	// 47362 jz      short loc_289D1 ;~ 1A01:03ED
cs=0x1a01;eip=0x0003ef; 	R(JMP(loc_28910));	// 47363 jmp     loc_28910 ;~ 1A01:03EF
loc_289e2:
	// 7783 
cs=0x1a01;eip=0x0003f2; 	T(OR(bx, 0x6000));	// 47367 or      bx, 6000h ;~ 1A01:03F2
cs=0x1a01;eip=0x0003f6; 	T(SUB(bx, 0x5A));	// 47368 sub     bx, 5Ah ; 'Z' ;~ 1A01:03F6
cs=0x1a01;eip=0x0003f9; 	T(XOR(al, 1));	// 47369 xor     al, 1 ;~ 1A01:03F9
cs=0x1a01;eip=0x0003fb; 	R(JZ(loc_289d1));	// 47370 jz      short loc_289D1 ;~ 1A01:03FB
cs=0x1a01;eip=0x0003fd; 	R(JMP(loc_28910));	// 47371 jmp     loc_28910 ;~ 1A01:03FD
loc_289f0:
	// 7784 
cs=0x1a01;eip=0x000400; 	R(JMP(loc_28b04));	// 47375 jmp     loc_28B04 ;~ 1A01:0400
loc_289f3:
	// 7785 
cs=0x1a01;eip=0x000403; 	T(AND(cl, 7));	// 47379 and     cl, 7 ;~ 1A01:0403
cs=0x1a01;eip=0x000406; 	T(XOR(cl, 7));	// 47380 xor     cl, 7 ;~ 1A01:0406
cs=0x1a01;eip=0x000409; 	T(INC(cx));	// 47381 inc     cx ;~ 1A01:0409
cs=0x1a01;eip=0x00040a; 	T(MOV(ch, 8));	// 47382 mov     ch, 8 ;~ 1A01:040A
cs=0x1a01;eip=0x00040c; 	T(SHR(bx, 1));	// 47383 shr     bx, 1 ;~ 1A01:040C
cs=0x1a01;eip=0x00040e; 	T(SHR(bx, 1));	// 47384 shr     bx, 1 ;~ 1A01:040E
cs=0x1a01;eip=0x000410; 	T(SHR(bx, 1));	// 47385 shr     bx, 1 ;~ 1A01:0410
cs=0x1a01;eip=0x000412; 	X(MUL1_2(word_38018));	// 47386 mul     word_38018 ;~ 1A01:0412
cs=0x1a01;eip=0x000416; 	T(ADD(bx, ax));	// 47387 add     bx, ax ;~ 1A01:0416
cs=0x1a01;eip=0x000418; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 47388 mov     si, [bp+6] ;~ 1A01:0418
cs=0x1a01;eip=0x00041b; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x0A))));	// 47389 mov     dx, [bp+0Ah] ;~ 1A01:041B
loc_28a0e:
	// 7786 
cs=0x1a01;eip=0x00041e; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 47392 mov     di, [bp+8] ;~ 1A01:041E
cs=0x1a01;eip=0x000421; 	T(XOR(ah, ah));	// 47393 xor     ah, ah ;~ 1A01:0421
cs=0x1a01;eip=0x000423; 	X(PUSH(dx));	// 47394 push    dx ;~ 1A01:0423
cs=0x1a01;eip=0x000424; 	X(PUSH(bx));	// 47395 push    bx ;~ 1A01:0424
cs=0x1a01;eip=0x000425; 	T(MOV(dx, 0x3CE));	// 47396 mov     dx, 3CEh ;~ 1A01:0425
loc_28a18:
	// 7787 
cs=0x1a01;eip=0x000428; 	T(LODSB);	// 47399 lodsb ;~ 1A01:0428
cs=0x1a01;eip=0x000429; 	X(PUSH(ax));	// 47400 push    ax ;~ 1A01:0429
cs=0x1a01;eip=0x00042a; 	T(SHL(ax, cl));	// 47401 shl     ax, cl ;~ 1A01:042A
cs=0x1a01;eip=0x00042c; 	T(MOV(al, ch));	// 47402 mov     al, ch ;~ 1A01:042C
cs=0x1a01;eip=0x00042e; 	R(OUT(dx, ax));	// 47403 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1A01:042E
cs=0x1a01;eip=0x00042f; 	X(AND(*(raddr(es,bx)), ah));	// 47406 and     es:[bx], ah ;~ 1A01:042F
cs=0x1a01;eip=0x000432; 	X(POP(ax));	// 47407 pop     ax ;~ 1A01:0432
cs=0x1a01;eip=0x000433; 	T(MOV(ah, al));	// 47408 mov     ah, al ;~ 1A01:0433
cs=0x1a01;eip=0x000435; 	T(INC(bx));	// 47409 inc     bx ;~ 1A01:0435
cs=0x1a01;eip=0x000436; 	T(DEC(di));	// 47410 dec     di ;~ 1A01:0436
cs=0x1a01;eip=0x000437; 	R(JNZ(loc_28a18));	// 47411 jnz     short loc_28A18 ;~ 1A01:0437
cs=0x1a01;eip=0x000439; 	T(CMP(cl, ch));	// 47412 cmp     cl, ch ;~ 1A01:0439
cs=0x1a01;eip=0x00043b; 	R(JZ(loc_28a37));	// 47413 jz      short loc_28A37 ;~ 1A01:043B
cs=0x1a01;eip=0x00043d; 	T(SHL(al, cl));	// 47414 shl     al, cl ;~ 1A01:043D
cs=0x1a01;eip=0x00043f; 	T(MOV(ah, al));	// 47415 mov     ah, al ;~ 1A01:043F
cs=0x1a01;eip=0x000441; 	T(MOV(al, ch));	// 47416 mov     al, ch ;~ 1A01:0441
cs=0x1a01;eip=0x000443; 	R(OUT(dx, ax));	// 47417 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1A01:0443
cs=0x1a01;eip=0x000444; 	X(AND(*(raddr(es,bx)), ah));	// 47420 and     es:[bx], ah ;~ 1A01:0444
loc_28a37:
	// 7788 
cs=0x1a01;eip=0x000447; 	X(POP(bx));	// 47423 pop     bx ;~ 1A01:0447
cs=0x1a01;eip=0x000448; 	T(SUB(bx, word_38018));	// 47424 sub     bx, word_38018 ;~ 1A01:0448
cs=0x1a01;eip=0x00044c; 	X(POP(dx));	// 47425 pop     dx ;~ 1A01:044C
cs=0x1a01;eip=0x00044d; 	T(DEC(dx));	// 47426 dec     dx ;~ 1A01:044D
cs=0x1a01;eip=0x00044e; 	R(JNZ(loc_28a0e));	// 47427 jnz     short loc_28A0E ;~ 1A01:044E
cs=0x1a01;eip=0x000450; 	R(JMP(loc_28b04));	// 47428 jmp     loc_28B04 ;~ 1A01:0450
loc_28a43:
	// 7789 
cs=0x1a01;eip=0x000453; 	T(XCHG(ah, al));	// 47432 xchg    ah, al ;~ 1A01:0453
cs=0x1a01;eip=0x000455; 	T(ADD(bx, ax));	// 47433 add     bx, ax ;~ 1A01:0455
cs=0x1a01;eip=0x000457; 	T(SHR(ax, 1));	// 47434 shr     ax, 1 ;~ 1A01:0457
cs=0x1a01;eip=0x000459; 	T(SHR(ax, 1));	// 47435 shr     ax, 1 ;~ 1A01:0459
cs=0x1a01;eip=0x00045b; 	T(ADD(bx, ax));	// 47436 add     bx, ax ;~ 1A01:045B
cs=0x1a01;eip=0x00045d; 	T(MOV(ah, byte_37b81));	// 47437 mov     ah, byte_37B81 ;~ 1A01:045D
cs=0x1a01;eip=0x000461; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 47438 mov     si, [bp+6] ;~ 1A01:0461
cs=0x1a01;eip=0x000464; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0A))));	// 47439 mov     di, [bp+0Ah] ;~ 1A01:0464
loc_28a57:
	// 7790 
cs=0x1a01;eip=0x000467; 	T(MOV(dx, *(dw*)(raddr(ss,bp+8))));	// 47442 mov     dx, [bp+8] ;~ 1A01:0467
cs=0x1a01;eip=0x00046a; 	X(PUSH(bx));	// 47443 push    bx ;~ 1A01:046A
loc_28a5b:
	// 7791 
cs=0x1a01;eip=0x00046b; 	T(LODSB);	// 47446 lodsb ;~ 1A01:046B
cs=0x1a01;eip=0x00046c; 	T(MOV(ch, 0x80));	// 47447 mov     ch, 80h ; '€' ;~ 1A01:046C
loc_28a5e:
	// 7792 
cs=0x1a01;eip=0x00046e; 	T(TEST(al, ch));	// 47450 test    al, ch ;~ 1A01:046E
cs=0x1a01;eip=0x000470; 	R(JZ(loc_28a65));	// 47451 jz      short loc_28A65 ;~ 1A01:0470
cs=0x1a01;eip=0x000472; 	X(MOV(*(raddr(es,bx)), ah));	// 47452 mov     es:[bx], ah ;~ 1A01:0472
loc_28a65:
	// 7793 
cs=0x1a01;eip=0x000475; 	T(INC(bx));	// 47455 inc     bx ;~ 1A01:0475
cs=0x1a01;eip=0x000476; 	T(SHR(ch, 1));	// 47456 shr     ch, 1 ;~ 1A01:0476
cs=0x1a01;eip=0x000478; 	R(JNC(loc_28a5e));	// 47457 jnb     short loc_28A5E ;~ 1A01:0478
cs=0x1a01;eip=0x00047a; 	T(DEC(dx));	// 47458 dec     dx ;~ 1A01:047A
cs=0x1a01;eip=0x00047b; 	R(JNZ(loc_28a5b));	// 47459 jnz     short loc_28A5B ;~ 1A01:047B
cs=0x1a01;eip=0x00047d; 	X(POP(bx));	// 47460 pop     bx ;~ 1A01:047D
cs=0x1a01;eip=0x00047e; 	T(SUB(bx, 0x140));	// 47461 sub     bx, 140h ;~ 1A01:047E
cs=0x1a01;eip=0x000482; 	T(DEC(di));	// 47462 dec     di ;~ 1A01:0482
cs=0x1a01;eip=0x000483; 	R(JNZ(loc_28a57));	// 47463 jnz     short loc_28A57 ;~ 1A01:0483
cs=0x1a01;eip=0x000485; 	R(JMP(loc_28b04));	// 47464 jmp     loc_28B04 ;~ 1A01:0485
loc_28a78:
	// 7794 
cs=0x1a01;eip=0x000488; 	T(XCHG(ah, al));	// 47468 xchg    ah, al ;~ 1A01:0488
cs=0x1a01;eip=0x00048a; 	T(ADD(bx, ax));	// 47469 add     bx, ax ;~ 1A01:048A
cs=0x1a01;eip=0x00048c; 	T(SHR(ax, 1));	// 47470 shr     ax, 1 ;~ 1A01:048C
cs=0x1a01;eip=0x00048e; 	T(SHR(ax, 1));	// 47471 shr     ax, 1 ;~ 1A01:048E
cs=0x1a01;eip=0x000490; 	T(ADD(bx, ax));	// 47472 add     bx, ax ;~ 1A01:0490
cs=0x1a01;eip=0x000492; 	T(SHR(bx, 1));	// 47473 shr     bx, 1 ;~ 1A01:0492
cs=0x1a01;eip=0x000494; 	T(SHR(bx, 1));	// 47474 shr     bx, 1 ;~ 1A01:0494
cs=0x1a01;eip=0x000496; 	X(MOV(word_37bb9, bx));	// 47475 mov     word_37BB9, bx ;~ 1A01:0496
cs=0x1a01;eip=0x00049a; 	T(AND(cl, 3));	// 47476 and     cl, 3 ;~ 1A01:049A
cs=0x1a01;eip=0x00049d; 	T(MOV(al, 1));	// 47477 mov     al, 1 ;~ 1A01:049D
cs=0x1a01;eip=0x00049f; 	T(SHL(al, cl));	// 47478 shl     al, cl ;~ 1A01:049F
cs=0x1a01;eip=0x0004a1; 	X(MOV(byte_37bc2, cl));	// 47479 mov     byte_37BC2, cl ;~ 1A01:04A1
cs=0x1a01;eip=0x0004a5; 	X(MOV(byte_37bbf, al));	// 47480 mov     byte_37BBF, al ;~ 1A01:04A5
cs=0x1a01;eip=0x0004a8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 47481 mov     ax, [bp+6] ;~ 1A01:04A8
cs=0x1a01;eip=0x0004ab; 	X(MOV(word_37bbb, ax));	// 47482 mov     word_37BBB, ax ;~ 1A01:04AB
cs=0x1a01;eip=0x0004ae; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 47483 mov     ax, [bp+8] ;~ 1A01:04AE
cs=0x1a01;eip=0x0004b1; 	X(MOV(word_37bbd, ax));	// 47484 mov     word_37BBD, ax ;~ 1A01:04B1
cs=0x1a01;eip=0x0004b4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 47485 mov     ax, [bp+0Ah] ;~ 1A01:04B4
cs=0x1a01;eip=0x0004b7; 	X(MOV(word_37bc4, ax));	// 47486 mov     word_37BC4, ax ;~ 1A01:04B7
cs=0x1a01;eip=0x0004ba; 	T(MOV(bl, 0x80));	// 47487 mov     bl, 80h ; '€' ;~ 1A01:04BA
cs=0x1a01;eip=0x0004bc; 	T(MOV(bh, byte_37b81));	// 47488 mov     bh, byte_37B81 ;~ 1A01:04BC
loc_28ab0:
	// 7795 
cs=0x1a01;eip=0x0004c0; 	T(MOV(dx, 0x3C4));	// 47492 mov     dx, 3C4h ;~ 1A01:04C0
cs=0x1a01;eip=0x0004c3; 	T(MOV(al, 2));	// 47493 mov     al, 2 ;~ 1A01:04C3
cs=0x1a01;eip=0x0004c5; 	T(MOV(ah, byte_37bbf));	// 47494 mov     ah, byte_37BBF ;~ 1A01:04C5
cs=0x1a01;eip=0x0004c9; 	R(OUT(dx, ax));	// 47495 out     dx, ax          ; EGA: sequencer address reg ;~ 1A01:04C9
cs=0x1a01;eip=0x0004ca; 	T(MOV(si, word_37bbb));	// 47498 mov     si, word_37BBB ;~ 1A01:04CA
cs=0x1a01;eip=0x0004ce; 	T(MOV(di, word_37bb9));	// 47499 mov     di, word_37BB9 ;~ 1A01:04CE
cs=0x1a01;eip=0x0004d2; 	T(MOV(cx, word_37bc4));	// 47500 mov     cx, word_37BC4 ;~ 1A01:04D2
cs=0x1a01;eip=0x0004d6; 	T(MOV(dx, *(dw*)(raddr(ss,bp+8))));	// 47501 mov     dx, [bp+8] ;~ 1A01:04D6
loc_28ac9:
	// 7796 
cs=0x1a01;eip=0x0004d9; 	T(MOV(al, *(raddr(ds,si))));	// 47504 mov     al, [si] ;~ 1A01:04D9
cs=0x1a01;eip=0x0004db; 	T(TEST(al, bl));	// 47505 test    al, bl ;~ 1A01:04DB
cs=0x1a01;eip=0x0004dd; 	R(JZ(loc_28ad2));	// 47506 jz      short loc_28AD2 ;~ 1A01:04DD
cs=0x1a01;eip=0x0004df; 	X(MOV(*(raddr(es,di)), bh));	// 47507 mov     es:[di], bh ;~ 1A01:04DF
loc_28ad2:
	// 7797 
cs=0x1a01;eip=0x0004e2; 	T(ADD(si, dx));	// 47510 add     si, dx ;~ 1A01:04E2
cs=0x1a01;eip=0x0004e4; 	T(SUB(di, 0x50));	// 47511 sub     di, 50h ; 'P' ;~ 1A01:04E4
cs=0x1a01;eip=0x0004e7; 	R(LOOP(loc_28ac9));	// 47512 loop    loc_28AC9 ;~ 1A01:04E7
cs=0x1a01;eip=0x0004e9; 	T(MOV(cl, byte_37bc2));	// 47513 mov     cl, byte_37BC2 ;~ 1A01:04E9
cs=0x1a01;eip=0x0004ed; 	T(INC(cl));	// 47514 inc     cl ;~ 1A01:04ED
cs=0x1a01;eip=0x0004ef; 	T(AND(cl, 3));	// 47515 and     cl, 3 ;~ 1A01:04EF
cs=0x1a01;eip=0x0004f2; 	T(MOV(al, 1));	// 47516 mov     al, 1 ;~ 1A01:04F2
cs=0x1a01;eip=0x0004f4; 	T(SHL(al, cl));	// 47517 shl     al, cl ;~ 1A01:04F4
cs=0x1a01;eip=0x0004f6; 	X(MOV(byte_37bc2, cl));	// 47518 mov     byte_37BC2, cl ;~ 1A01:04F6
cs=0x1a01;eip=0x0004fa; 	X(MOV(byte_37bbf, al));	// 47519 mov     byte_37BBF, al ;~ 1A01:04FA
cs=0x1a01;eip=0x0004fd; 	T(MOV(ax, 1));	// 47520 mov     ax, 1 ;~ 1A01:04FD
cs=0x1a01;eip=0x000500; 	T(SHR(ax, cl));	// 47521 shr     ax, cl ;~ 1A01:0500
cs=0x1a01;eip=0x000502; 	X(ADD(word_37bb9, ax));	// 47522 add     word_37BB9, ax ;~ 1A01:0502
cs=0x1a01;eip=0x000506; 	T(ROR(bl, 1));	// 47523 ror     bl, 1 ;~ 1A01:0506
cs=0x1a01;eip=0x000508; 	R(JNC(loc_28ab0));	// 47524 jnb     short loc_28AB0 ;~ 1A01:0508
cs=0x1a01;eip=0x00050a; 	X(INC(word_37bbb));	// 47525 inc     word_37BBB ;~ 1A01:050A
cs=0x1a01;eip=0x00050e; 	X(DEC(word_37bbd));	// 47526 dec     word_37BBD ;~ 1A01:050E
cs=0x1a01;eip=0x000512; 	R(JNZ(loc_28ab0));	// 47527 jnz     short loc_28AB0 ;~ 1A01:0512
loc_28b04:
	// 7798 
cs=0x1a01;eip=0x000514; 	T(XOR(ax, ax));	// 47531 xor     ax, ax ;~ 1A01:0514
cs=0x1a01;eip=0x000516; 	X(POP(si));	// 47532 pop     si ;~ 1A01:0516
cs=0x1a01;eip=0x000517; 	X(POP(di));	// 47533 pop     di ;~ 1A01:0517
cs=0x1a01;eip=0x000518; 	X(POP(bp));	// 47534 pop     bp ;~ 1A01:0518
cs=0x1a01;eip=0x000519; 	R(RETF(0));	// 47535 retf ;~ 1A01:0519

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_2865b: 	goto loc_2865b;
        case m2c::kloc_28661: 	goto loc_28661;
        case m2c::kloc_2866f: 	goto loc_2866f;
        case m2c::kloc_286b1: 	goto loc_286b1;
        case m2c::kloc_286db: 	goto loc_286db;
        case m2c::kloc_286e8: 	goto loc_286e8;
        case m2c::kloc_286ef: 	goto loc_286ef;
        case m2c::kloc_286f2: 	goto loc_286f2;
        case m2c::kloc_2870b: 	goto loc_2870b;
        case m2c::kloc_2874a: 	goto loc_2874a;
        case m2c::kloc_28750: 	goto loc_28750;
        case m2c::kloc_2875f: 	goto loc_2875f;
        case m2c::kloc_28766: 	goto loc_28766;
        case m2c::kloc_28778: 	goto loc_28778;
        case m2c::kloc_2877f: 	goto loc_2877f;
        case m2c::kloc_287d3: 	goto loc_287d3;
        case m2c::kloc_287d9: 	goto loc_287d9;
        case m2c::kloc_287eb: 	goto loc_287eb;
        case m2c::kloc_287f1: 	goto loc_287f1;
        case m2c::kloc_2882b: 	goto loc_2882b;
        case m2c::kloc_2883c: 	goto loc_2883c;
        case m2c::kloc_28847: 	goto loc_28847;
        case m2c::kloc_2884a: 	goto loc_2884a;
        case m2c::kloc_2885a: 	goto loc_2885a;
        case m2c::kloc_2886d: 	goto loc_2886d;
        case m2c::kloc_28873: 	goto loc_28873;
        case m2c::kloc_2889f: 	goto loc_2889f;
        case m2c::kloc_288af: 	goto loc_288af;
        case m2c::kloc_288b9: 	goto loc_288b9;
        case m2c::kloc_288bc: 	goto loc_288bc;
        case m2c::kloc_28910: 	goto loc_28910;
        case m2c::kloc_2892c: 	goto loc_2892c;
        case m2c::kloc_28933: 	goto loc_28933;
        case m2c::kloc_28941: 	goto loc_28941;
        case m2c::kloc_28990: 	goto loc_28990;
        case m2c::kloc_289c4: 	goto loc_289c4;
        case m2c::kloc_289d1: 	goto loc_289d1;
        case m2c::kloc_289e2: 	goto loc_289e2;
        case m2c::kloc_289f0: 	goto loc_289f0;
        case m2c::kloc_289f3: 	goto loc_289f3;
        case m2c::kloc_28a0e: 	goto loc_28a0e;
        case m2c::kloc_28a18: 	goto loc_28a18;
        case m2c::kloc_28a37: 	goto loc_28a37;
        case m2c::kloc_28a43: 	goto loc_28a43;
        case m2c::kloc_28a57: 	goto loc_28a57;
        case m2c::kloc_28a5b: 	goto loc_28a5b;
        case m2c::kloc_28a5e: 	goto loc_28a5e;
        case m2c::kloc_28a65: 	goto loc_28a65;
        case m2c::kloc_28a78: 	goto loc_28a78;
        case m2c::kloc_28ab0: 	goto loc_28ab0;
        case m2c::kloc_28ac9: 	goto loc_28ac9;
        case m2c::kloc_28ad2: 	goto loc_28ad2;
        case m2c::kloc_28b04: 	goto loc_28b04;
        case m2c::kret_1a01_c: 	goto ret_1a01_c;
        case m2c::kseg030_proc: 	goto seg030_proc;
        case m2c::ksub_285fb: 	goto sub_285fb;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

