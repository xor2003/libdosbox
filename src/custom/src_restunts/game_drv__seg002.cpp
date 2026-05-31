/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool _group3(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group3:
    _begin:
update_rpm_from_speed:
	// 18746 
#undef arg_0
#define arg_0 6
	// 18748 arg_0           = word ptr  6 ;~ 0B7E:0006
#undef arg_2
#define arg_2 8
	// 18749 arg_2           = word ptr  8 ;~ 0B7E:0006
#undef arg_4
#define arg_4 0x0A
	// 18750 arg_4           = word ptr  0Ah ;~ 0B7E:0006
#undef arg_6
#define arg_6 0x0C
	// 18751 arg_6           = word ptr  0Ch ;~ 0B7E:0006
#undef arg_8
#define arg_8 0x0E
	// 18752 arg_8           = word ptr  0Eh ;~ 0B7E:0006
ret_b7e_6:
	// 5523 
cs=0xb7e;eip=0x000006; 	X(PUSH(bp));	// 18754 push    bp ;~ 0B7E:0006
cs=0xb7e;eip=0x000007; 	T(MOV(bp, sp));	// 18755 mov     bp, sp ;~ 0B7E:0007
cs=0xb7e;eip=0x000009; 	X(PUSH(bp));	// 18756 push    bp ;~ 0B7E:0009
cs=0xb7e;eip=0x00000a; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_0))));	// 18757 mov     cx, [bp+arg_0] ;~ 0B7E:000A
cs=0xb7e;eip=0x00000d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 18758 mov     ax, [bp+arg_2] ;~ 0B7E:000D
cs=0xb7e;eip=0x000010; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), 0));	// 18759 cmp     [bp+arg_6], 0 ;~ 0B7E:0010
cs=0xb7e;eip=0x000014; 	R(JNZ(loc_19ddb));	// 18760 jnz     short loc_19DDB ;~ 0B7E:0014
cs=0xb7e;eip=0x000016; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_4))));	// 18761 mul     [bp+arg_4] ;~ 0B7E:0016
cs=0xb7e;eip=0x000019; 	T(MOV(cx, dx));	// 18762 mov     cx, dx ;~ 0B7E:0019
loc_19ddb:
	// 5524 
cs=0xb7e;eip=0x00001b; 	T(CMP(cx, *(dw*)(raddr(ss,bp+arg_8))));	// 18765 cmp     cx, [bp+arg_8] ;~ 0B7E:001B
cs=0xb7e;eip=0x00001e; 	R(JNC(loc_19de3));	// 18766 jnb     short loc_19DE3 ;~ 0B7E:001E
cs=0xb7e;eip=0x000020; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_8))));	// 18767 mov     cx, [bp+arg_8] ;~ 0B7E:0020
loc_19de3:
	// 5525 
cs=0xb7e;eip=0x000023; 	T(MOV(ax, cx));	// 18770 mov     ax, cx ;~ 0B7E:0023
cs=0xb7e;eip=0x000025; 	X(POP(bp));	// 18771 pop     bp ;~ 0B7E:0025
cs=0xb7e;eip=0x000026; 	X(POP(bp));	// 18772 pop     bp ;~ 0B7E:0026
cs=0xb7e;eip=0x000027; 	R(RETF(0));	// 18773 retf ;~ 0B7E:0027
nopsub_19de8:
	// 18781 
#undef arg_0
#define arg_0 6
	// 18783 arg_0           = word ptr  6 ;~ 0B7E:0028
ret_b7e_28:
	// 5526 
cs=0xb7e;eip=0x000028; 	X(PUSH(bp));	// 18785 push    bp ;~ 0B7E:0028
cs=0xb7e;eip=0x000029; 	T(MOV(bp, sp));	// 18786 mov     bp, sp ;~ 0B7E:0029
cs=0xb7e;eip=0x00002b; 	X(PUSH(bp));	// 18787 push    bp ;~ 0B7E:002B
cs=0xb7e;eip=0x00002c; 	T(XOR(ax, ax));	// 18788 xor     ax, ax ;~ 0B7E:002C
cs=0xb7e;eip=0x00002e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 18789 mov     bx, [bp+arg_0] ;~ 0B7E:002E
cs=0xb7e;eip=0x000031; 	T(OR(bx, bx));	// 18790 or      bx, bx ;~ 0B7E:0031
cs=0xb7e;eip=0x000033; 	R(JZ(loc_19dfc));	// 18791 jz      short loc_19DFC ;~ 0B7E:0033
cs=0xb7e;eip=0x000035; 	R(JL(loc_19dfb));	// 18792 jl      short loc_19DFB ;~ 0B7E:0035
cs=0xb7e;eip=0x000037; 	T(INC(ax));	// 18793 inc     ax ;~ 0B7E:0037
cs=0xb7e;eip=0x000038; 	X(POP(bp));	// 18794 pop     bp ;~ 0B7E:0038
cs=0xb7e;eip=0x000039; 	X(POP(bp));	// 18795 pop     bp ;~ 0B7E:0039
cs=0xb7e;eip=0x00003a; 	R(RETF(0));	// 18796 retf ;~ 0B7E:003A
loc_19dfb:
	// 5527 
cs=0xb7e;eip=0x00003b; 	T(DEC(ax));	// 18800 dec     ax ;~ 0B7E:003B
loc_19dfc:
	// 5528 
cs=0xb7e;eip=0x00003c; 	X(POP(bp));	// 18803 pop     bp ;~ 0B7E:003C
cs=0xb7e;eip=0x00003d; 	X(POP(bp));	// 18804 pop     bp ;~ 0B7E:003D
cs=0xb7e;eip=0x00003e; 	R(RETF(0));	// 18805 retf ;~ 0B7E:003E
nopsub_19dff:
	// 18813 
#undef arg_0
#define arg_0 6
	// 18815 arg_0           = word ptr  6 ;~ 0B7E:003F
ret_b7e_3f:
	// 5529 
cs=0xb7e;eip=0x00003f; 	X(PUSH(bp));	// 18817 push    bp ;~ 0B7E:003F
cs=0xb7e;eip=0x000040; 	T(MOV(bp, sp));	// 18818 mov     bp, sp ;~ 0B7E:0040
cs=0xb7e;eip=0x000042; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 18819 mov     ax, [bp+arg_0] ;~ 0B7E:0042
cs=0xb7e;eip=0x000045; 	R(_INT(0x61));	// 18820 int     61h             ; reserved for user interrupt ;~ 0B7E:0045
cs=0xb7e;eip=0x000047; 	X(POP(bp));	// 18821 pop     bp ;~ 0B7E:0047
cs=0xb7e;eip=0x000048; 	R(RETF(0));	// 18822 retf ;~ 0B7E:0048
nopsub_19e09:
	// 18830 
#undef arg_0
#define arg_0 6
	// 18832 arg_0           = word ptr  6 ;~ 0B7E:0049
ret_b7e_49:
	// 5530 
cs=0xb7e;eip=0x000049; 	X(PUSH(bp));	// 18834 push    bp ;~ 0B7E:0049
cs=0xb7e;eip=0x00004a; 	T(MOV(bp, sp));	// 18835 mov     bp, sp ;~ 0B7E:004A
cs=0xb7e;eip=0x00004c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 18836 mov     ax, [bp+arg_0] ;~ 0B7E:004C
cs=0xb7e;eip=0x00004f; 	R(_INT(0x60));	// 18837 int     60h ;~ 0B7E:004F
cs=0xb7e;eip=0x000051; 	X(POP(bp));	// 18838 pop     bp ;~ 0B7E:0051
cs=0xb7e;eip=0x000052; 	R(RETF(0));	// 18839 retf ;~ 0B7E:0052
nopsub_19e13:
	// 18847 
#undef arg_0
#define arg_0 6
	// 18849 arg_0           = word ptr  6 ;~ 0B7E:0053
ret_b7e_53:
	// 5531 
cs=0xb7e;eip=0x000053; 	X(PUSH(bp));	// 18851 push    bp ;~ 0B7E:0053
cs=0xb7e;eip=0x000054; 	T(MOV(bp, sp));	// 18852 mov     bp, sp ;~ 0B7E:0054
cs=0xb7e;eip=0x000056; 	X(PUSH(bp));	// 18853 push    bp ;~ 0B7E:0056
cs=0xb7e;eip=0x000057; 	X(PUSH(si));	// 18854 push    si ;~ 0B7E:0057
cs=0xb7e;eip=0x000058; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 18855 mov     si, [bp+arg_0] ;~ 0B7E:0058
cs=0xb7e;eip=0x00005b; 	R(_INT(0x62));	// 18856 int     62h             ; reserved for user interrupt ;~ 0B7E:005B
cs=0xb7e;eip=0x00005d; 	X(POP(si));	// 18857 pop     si ;~ 0B7E:005D
cs=0xb7e;eip=0x00005e; 	X(POP(bp));	// 18858 pop     bp ;~ 0B7E:005E
cs=0xb7e;eip=0x00005f; 	X(POP(bp));	// 18859 pop     bp ;~ 0B7E:005F
cs=0xb7e;eip=0x000060; 	R(RETF(0));	// 18860 retf ;~ 0B7E:0060
init_kevinrandom:
	// 18868 
#undef arg_0
#define arg_0 6
	// 18871 arg_0           = word ptr  6 ;~ 0B7E:0061
ret_b7e_61:
	// 5532 
cs=0xb7e;eip=0x000061; 	X(PUSH(bp));	// 18873 push    bp ;~ 0B7E:0061
cs=0xb7e;eip=0x000062; 	T(MOV(bp, sp));	// 18874 mov     bp, sp ;~ 0B7E:0062
cs=0xb7e;eip=0x000064; 	X(PUSH(bp));	// 18875 push    bp ;~ 0B7E:0064
cs=0xb7e;eip=0x000065; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 18876 mov     bx, [bp+arg_0] ;~ 0B7E:0065
cs=0xb7e;eip=0x000068; 	T(MOV(al, *(raddr(ds,bx))));	// 18877 mov     al, [bx] ;~ 0B7E:0068
cs=0xb7e;eip=0x00006a; 	X(MOV(*(g_kevinrandom_seed), al));	// 18878 mov     g_kevinrandom_seed, al ;~ 0B7E:006A
cs=0xb7e;eip=0x00006d; 	T(MOV(al, *(raddr(ds,bx+1))));	// 18879 mov     al, [bx+1] ;~ 0B7E:006D
cs=0xb7e;eip=0x000070; 	X(MOV(*((g_kevinrandom_seed)+1), al));	// 18880 mov     g_kevinrandom_seed+1, al ;~ 0B7E:0070
cs=0xb7e;eip=0x000073; 	T(MOV(al, *(raddr(ds,bx+2))));	// 18881 mov     al, [bx+2] ;~ 0B7E:0073
cs=0xb7e;eip=0x000076; 	X(MOV(*((g_kevinrandom_seed)+2), al));	// 18882 mov     g_kevinrandom_seed+2, al ;~ 0B7E:0076
cs=0xb7e;eip=0x000079; 	T(MOV(al, *(raddr(ds,bx+3))));	// 18883 mov     al, [bx+3] ;~ 0B7E:0079
cs=0xb7e;eip=0x00007c; 	X(MOV(*((g_kevinrandom_seed)+3), al));	// 18884 mov     g_kevinrandom_seed+3, al ;~ 0B7E:007C
cs=0xb7e;eip=0x00007f; 	T(MOV(al, *(raddr(ds,bx+4))));	// 18885 mov     al, [bx+4] ;~ 0B7E:007F
cs=0xb7e;eip=0x000082; 	X(MOV(*((g_kevinrandom_seed)+4), al));	// 18886 mov     g_kevinrandom_seed+4, al ;~ 0B7E:0082
cs=0xb7e;eip=0x000085; 	T(MOV(al, *(raddr(ds,bx+5))));	// 18887 mov     al, [bx+5] ;~ 0B7E:0085
cs=0xb7e;eip=0x000088; 	X(MOV(*((g_kevinrandom_seed)+5), al));	// 18888 mov     g_kevinrandom_seed+5, al ;~ 0B7E:0088
cs=0xb7e;eip=0x00008b; 	X(POP(bp));	// 18889 pop     bp ;~ 0B7E:008B
cs=0xb7e;eip=0x00008c; 	X(POP(bp));	// 18890 pop     bp ;~ 0B7E:008C
cs=0xb7e;eip=0x00008d; 	R(RETF(0));	// 18891 retf ;~ 0B7E:008D
get_kevinrandom_seed:
	// 18899 
#undef arg_0
#define arg_0 6
	// 18901 arg_0           = word ptr  6 ;~ 0B7E:008E
ret_b7e_8e:
	// 5533 
cs=0xb7e;eip=0x00008e; 	X(PUSH(bp));	// 18903 push    bp ;~ 0B7E:008E
cs=0xb7e;eip=0x00008f; 	T(MOV(bp, sp));	// 18904 mov     bp, sp ;~ 0B7E:008F
cs=0xb7e;eip=0x000091; 	X(PUSH(bp));	// 18905 push    bp ;~ 0B7E:0091
cs=0xb7e;eip=0x000092; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 18906 mov     bx, [bp+arg_0] ;~ 0B7E:0092
cs=0xb7e;eip=0x000095; 	T(MOV(al, *(g_kevinrandom_seed)));	// 18907 mov     al, g_kevinrandom_seed ;~ 0B7E:0095
cs=0xb7e;eip=0x000098; 	X(MOV(*(raddr(ds,bx)), al));	// 18908 mov     [bx], al ;~ 0B7E:0098
cs=0xb7e;eip=0x00009a; 	T(MOV(al, *((g_kevinrandom_seed)+1)));	// 18909 mov     al, g_kevinrandom_seed+1 ;~ 0B7E:009A
cs=0xb7e;eip=0x00009d; 	X(MOV(*(raddr(ds,bx+1)), al));	// 18910 mov     [bx+1], al ;~ 0B7E:009D
cs=0xb7e;eip=0x0000a0; 	T(MOV(al, *((g_kevinrandom_seed)+2)));	// 18911 mov     al, g_kevinrandom_seed+2 ;~ 0B7E:00A0
cs=0xb7e;eip=0x0000a3; 	X(MOV(*(raddr(ds,bx+2)), al));	// 18912 mov     [bx+2], al ;~ 0B7E:00A3
cs=0xb7e;eip=0x0000a6; 	T(MOV(al, *((g_kevinrandom_seed)+3)));	// 18913 mov     al, g_kevinrandom_seed+3 ;~ 0B7E:00A6
cs=0xb7e;eip=0x0000a9; 	X(MOV(*(raddr(ds,bx+3)), al));	// 18914 mov     [bx+3], al ;~ 0B7E:00A9
cs=0xb7e;eip=0x0000ac; 	T(MOV(al, *((g_kevinrandom_seed)+4)));	// 18915 mov     al, g_kevinrandom_seed+4 ;~ 0B7E:00AC
cs=0xb7e;eip=0x0000af; 	X(MOV(*(raddr(ds,bx+4)), al));	// 18916 mov     [bx+4], al ;~ 0B7E:00AF
cs=0xb7e;eip=0x0000b2; 	T(MOV(al, *((g_kevinrandom_seed)+5)));	// 18917 mov     al, g_kevinrandom_seed+5 ;~ 0B7E:00B2
cs=0xb7e;eip=0x0000b5; 	X(MOV(*(raddr(ds,bx+5)), al));	// 18918 mov     [bx+5], al ;~ 0B7E:00B5
cs=0xb7e;eip=0x0000b8; 	X(POP(bp));	// 18919 pop     bp ;~ 0B7E:00B8
cs=0xb7e;eip=0x0000b9; 	X(POP(bp));	// 18920 pop     bp ;~ 0B7E:00B9
cs=0xb7e;eip=0x0000ba; 	R(RETF(0));	// 18921 retf ;~ 0B7E:00BA
get_kevinrandom:
	// 18928 
cs=0xb7e;eip=0x0000bb; 	T(MOV(al, *((g_kevinrandom_seed)+5)));	// 18930 mov     al, g_kevinrandom_seed+5 ;~ 0B7E:00BB
ret_b7e_be:
	// 5534 
cs=0xb7e;eip=0x0000be; 	T(ADD(al, *((g_kevinrandom_seed)+4)));	// 18931 add     al, g_kevinrandom_seed+4 ;~ 0B7E:00BE
cs=0xb7e;eip=0x0000c2; 	X(MOV(*((g_kevinrandom_seed)+4), al));	// 18932 mov     g_kevinrandom_seed+4, al ;~ 0B7E:00C2
cs=0xb7e;eip=0x0000c5; 	T(ADD(al, *((g_kevinrandom_seed)+3)));	// 18933 add     al, g_kevinrandom_seed+3 ;~ 0B7E:00C5
cs=0xb7e;eip=0x0000c9; 	X(MOV(*((g_kevinrandom_seed)+3), al));	// 18934 mov     g_kevinrandom_seed+3, al ;~ 0B7E:00C9
cs=0xb7e;eip=0x0000cc; 	T(ADD(al, *((g_kevinrandom_seed)+2)));	// 18935 add     al, g_kevinrandom_seed+2 ;~ 0B7E:00CC
cs=0xb7e;eip=0x0000d0; 	X(MOV(*((g_kevinrandom_seed)+2), al));	// 18936 mov     g_kevinrandom_seed+2, al ;~ 0B7E:00D0
cs=0xb7e;eip=0x0000d3; 	T(ADD(al, *((g_kevinrandom_seed)+1)));	// 18937 add     al, g_kevinrandom_seed+1 ;~ 0B7E:00D3
cs=0xb7e;eip=0x0000d7; 	X(MOV(*((g_kevinrandom_seed)+1), al));	// 18938 mov     g_kevinrandom_seed+1, al ;~ 0B7E:00D7
cs=0xb7e;eip=0x0000da; 	T(ADD(al, *(g_kevinrandom_seed)));	// 18939 add     al, g_kevinrandom_seed ;~ 0B7E:00DA
cs=0xb7e;eip=0x0000de; 	X(MOV(*(g_kevinrandom_seed), al));	// 18940 mov     g_kevinrandom_seed, al ;~ 0B7E:00DE
cs=0xb7e;eip=0x0000e1; 	X(INC(*((g_kevinrandom_seed)+5)));	// 18941 inc     g_kevinrandom_seed+5 ;~ 0B7E:00E1
cs=0xb7e;eip=0x0000e5; 	R(JNZ(loc_19ec3));	// 18942 jnz     short loc_19EC3 ;~ 0B7E:00E5
cs=0xb7e;eip=0x0000e7; 	X(INC(*((g_kevinrandom_seed)+4)));	// 18943 inc     g_kevinrandom_seed+4 ;~ 0B7E:00E7
cs=0xb7e;eip=0x0000eb; 	R(JNZ(loc_19ec3));	// 18944 jnz     short loc_19EC3 ;~ 0B7E:00EB
cs=0xb7e;eip=0x0000ed; 	X(INC(*((g_kevinrandom_seed)+3)));	// 18945 inc     g_kevinrandom_seed+3 ;~ 0B7E:00ED
cs=0xb7e;eip=0x0000f1; 	R(JNZ(loc_19ec3));	// 18946 jnz     short loc_19EC3 ;~ 0B7E:00F1
cs=0xb7e;eip=0x0000f3; 	X(INC(*((g_kevinrandom_seed)+2)));	// 18947 inc     g_kevinrandom_seed+2 ;~ 0B7E:00F3
cs=0xb7e;eip=0x0000f7; 	R(JNZ(loc_19ec3));	// 18948 jnz     short loc_19EC3 ;~ 0B7E:00F7
cs=0xb7e;eip=0x0000f9; 	X(INC(*((g_kevinrandom_seed)+1)));	// 18949 inc     g_kevinrandom_seed+1 ;~ 0B7E:00F9
cs=0xb7e;eip=0x0000fd; 	R(JNZ(loc_19ec3));	// 18950 jnz     short loc_19EC3 ;~ 0B7E:00FD
cs=0xb7e;eip=0x0000ff; 	X(INC(*(g_kevinrandom_seed)));	// 18951 inc     g_kevinrandom_seed ;~ 0B7E:00FF
loc_19ec3:
	// 5535 
cs=0xb7e;eip=0x000103; 	T(MOV(al, *(g_kevinrandom_seed)));	// 18955 mov     al, g_kevinrandom_seed ;~ 0B7E:0103
cs=0xb7e;eip=0x000106; 	T(XOR(ah, ah));	// 18956 xor     ah, ah ;~ 0B7E:0106
cs=0xb7e;eip=0x000108; 	R(RETF(0));	// 18957 retf ;~ 0B7E:0108
intr0_handler:
	// 18965 
#undef var_s4
#define var_s4 4
	// 18967 var_s4          = word ptr  4 ;~ 0B7E:0109
ret_b7e_109:
	// 5536 
cs=0xb7e;eip=0x000109; 	X(PUSH(bp));	// 18969 push    bp ;~ 0B7E:0109
cs=0xb7e;eip=0x00010a; 	T(MOV(bp, sp));	// 18970 mov     bp, sp ;~ 0B7E:010A
cs=0xb7e;eip=0x00010c; 	X(PUSH(ds));	// 18971 push    ds ;~ 0B7E:010C
cs=0xb7e;eip=0x00010d; 	T(MOV(ax, seg_offset(dseg)));	// 18972 mov     ax, seg dseg ;~ 0B7E:010D
cs=0xb7e;eip=0x000110; 	T(MOV(ds, ax));	// 18973 mov     ds, ax ;~ 0B7E:0110
cs=0xb7e;eip=0x000112; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_s4))));	// 18974 mov     ax, [bp+var_s4] ;~ 0B7E:0112
cs=0xb7e;eip=0x000115; 	X(MOV(word_3be30, ax));	// 18975 mov     word_3BE30, ax ;~ 0B7E:0115
cs=0xb7e;eip=0x000118; 	T(MOV(ax, *(dw*)(raddr(ss,bp+2))));	// 18976 mov     ax, [bp+2] ;~ 0B7E:0118
cs=0xb7e;eip=0x00011b; 	X(MOV(word_3be32, ax));	// 18977 mov     word_3BE32, ax ;~ 0B7E:011B
cs=0xb7e;eip=0x00011e; 	T(INC(ax));	// 18978 inc     ax ;~ 0B7E:011E
cs=0xb7e;eip=0x00011f; 	T(INC(ax));	// 18979 inc     ax ;~ 0B7E:011F
cs=0xb7e;eip=0x000120; 	X(MOV(*(dw*)(raddr(ss,bp+2)), ax));	// 18980 mov     [bp+2], ax ;~ 0B7E:0120
cs=0xb7e;eip=0x000123; 	T(XOR(ax, ax));	// 18981 xor     ax, ax ;~ 0B7E:0123
cs=0xb7e;eip=0x000125; 	X(POP(ds));	// 18982 pop     ds ;~ 0B7E:0125
cs=0xb7e;eip=0x000126; 	X(POP(bp));	// 18983 pop     bp ;~ 0B7E:0126
cs=0xb7e;eip=0x000127; 	R(IRET);	// 18984 iret ;~ 0B7E:0127
init_div0:
	// 18991 
cs=0xb7e;eip=0x000128; 	X(PUSH(ds));	// 18992 push    ds ;~ 0B7E:0128
ret_b7e_129:
	// 5537 
cs=0xb7e;eip=0x000129; 	T(MOV(ah, 0x35));	// 18993 mov     ah, 35h ; '5' ;~ 0B7E:0129
cs=0xb7e;eip=0x00012b; 	T(MOV(al, 0));	// 18994 mov     al, 0 ;~ 0B7E:012B
cs=0xb7e;eip=0x00012d; 	R(_INT(0x21));	// 18995 int     21h             ; DOS - 2+ - GET INTERRUPT VECTOR ;~ 0B7E:012D
cs=0xb7e;eip=0x00012f; 	X(MOV(*(dw*)(((db*)&old_intr0_handler)+2), es));	// 18998 mov     word ptr old_intr0_handler+2, es ;~ 0B7E:012F
cs=0xb7e;eip=0x000133; 	X(MOV(*(dw*)(((db*)&old_intr0_handler)), bx));	// 18999 mov     word ptr old_intr0_handler, bx ;~ 0B7E:0133
cs=0xb7e;eip=0x000137; 	T(MOV(dx, seg_offset(seg002)));	// 19000 mov     dx, seg seg002 ;~ 0B7E:0137
cs=0xb7e;eip=0x00013a; 	T(MOV(ds, dx));	// 19001 mov     ds, dx ;~ 0B7E:013A
cs=0xb7e;eip=0x00013c; 	T(MOV(dx, m2c::kintr0_handler));	// 19003 mov     dx, offset intr0_handler ;~ 0B7E:013C
cs=0xb7e;eip=0x00013f; 	T(MOV(ah, 0x25));	// 19004 mov     ah, 25h ; '%' ;~ 0B7E:013F
cs=0xb7e;eip=0x000141; 	T(MOV(al, 0));	// 19005 mov     al, 0 ;~ 0B7E:0141
cs=0xb7e;eip=0x000143; 	R(_INT(0x21));	// 19006 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 0B7E:0143
cs=0xb7e;eip=0x000145; 	X(POP(ds));	// 19009 pop     ds ;~ 0B7E:0145
cs=0xb7e;eip=0x000146; 	R(RETF(0));	// 19011 retf ;~ 0B7E:0146
seg002_147_proc:
	// 19015 
cs=0xb7e;eip=0x000147; 	X(PUSH(ds));	// 19015 push    ds ;~ 0B7E:0147
ret_b7e_148:
	// 5538 
cs=0xb7e;eip=0x000148; 	T(LDS(dx, old_intr0_handler));	// 19016 lds     dx, old_intr0_handler ;~ 0B7E:0148
cs=0xb7e;eip=0x00014c; 	T(MOV(ah, 0x25));	// 19017 mov     ah, 25h ; '%' ;~ 0B7E:014C
cs=0xb7e;eip=0x00014e; 	T(MOV(al, 0));	// 19018 mov     al, 0 ;~ 0B7E:014E
cs=0xb7e;eip=0x000150; 	R(_INT(0x21));	// 19019 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 0B7E:0150
cs=0xb7e;eip=0x000152; 	X(POP(ds));	// 19022 pop     ds ;~ 0B7E:0152
cs=0xb7e;eip=0x000153; 	R(RETF(0));	// 19023 retf ;~ 0B7E:0153

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return true;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kget_kevinrandom: 	goto get_kevinrandom;
        case m2c::kinit_div0: 	goto init_div0;
        case m2c::kintr0_handler: 	goto intr0_handler;
        case m2c::kloc_19ddb: 	goto loc_19ddb;
        case m2c::kloc_19de3: 	goto loc_19de3;
        case m2c::kloc_19dfb: 	goto loc_19dfb;
        case m2c::kloc_19dfc: 	goto loc_19dfc;
        case m2c::kloc_19ec3: 	goto loc_19ec3;
        case m2c::knopsub_19de8: 	goto nopsub_19de8;
        case m2c::kret_b7e_129: 	goto ret_b7e_129;
        case m2c::kret_b7e_148: 	goto ret_b7e_148;
        case m2c::kret_b7e_3f: 	goto ret_b7e_3f;
        case m2c::kret_b7e_49: 	goto ret_b7e_49;
        case m2c::kret_b7e_53: 	goto ret_b7e_53;
        case m2c::kret_b7e_6: 	goto ret_b7e_6;
        case m2c::kret_b7e_61: 	goto ret_b7e_61;
        case m2c::kret_b7e_8e: 	goto ret_b7e_8e;
        case m2c::kret_b7e_be: 	goto ret_b7e_be;
        case m2c::kseg002_147_proc: 	goto seg002_147_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

