/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool _group18(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group18:
    _begin:
sub_27eb6:
	// 45798 
#undef arg_2
#define arg_2 6
	// 45800 arg_2           = word ptr  6 ;~ 198D:0006
#undef arg_4
#define arg_4 8
	// 45801 arg_4           = word ptr  8 ;~ 198D:0006
#undef arg_6
#define arg_6 0x0A
	// 45802 arg_6           = word ptr  0Ah ;~ 198D:0006
#undef arg_8
#define arg_8 0x0C
	// 45803 arg_8           = word ptr  0Ch ;~ 198D:0006
ret_198d_6:
	// 7696 
cs=0x198d;eip=0x000006; 	X(PUSH(bp));	// 45805 push    bp ;~ 198D:0006
cs=0x198d;eip=0x000007; 	T(MOV(bp, sp));	// 45806 mov     bp, sp ;~ 198D:0007
cs=0x198d;eip=0x000009; 	X(PUSH(di));	// 45807 push    di ;~ 198D:0009
cs=0x198d;eip=0x00000a; 	X(PUSH(si));	// 45808 push    si ;~ 198D:000A
cs=0x198d;eip=0x00000b; 	T(CLD);	// 45809 cld ;~ 198D:000B
cs=0x198d;eip=0x00000c; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 45810 mov     si, [bp+arg_2] ;~ 198D:000C
cs=0x198d;eip=0x00000f; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 45811 mov     dx, [bp+arg_4] ;~ 198D:000F
cs=0x198d;eip=0x000012; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_8))));	// 45812 mov     di, [bp+arg_8] ;~ 198D:0012
cs=0x198d;eip=0x000015; 	T(MOV(cx, di));	// 45813 mov     cx, di ;~ 198D:0015
cs=0x198d;eip=0x000017; 	T(INC(cx));	// 45814 inc     cx ;~ 198D:0017
cs=0x198d;eip=0x000018; 	T(SUB(cx, *(dw*)(raddr(ss,bp+arg_6))));	// 45815 sub     cx, [bp+arg_6] ;~ 198D:0018
cs=0x198d;eip=0x00001b; 	T(bx = offset(dseg,unk_2c0e9));	// 45816 lea     bx, unk_2C0E9 ;~ 198D:001B
cs=0x198d;eip=0x00001f; 	T(ADD(bx, word_37b84));	// 45817 add     bx, word_37B84 ;~ 198D:001F
cs=0x198d;eip=0x000023; __disp=*(dw*)(raddr(cs,bx));
	R(JMP(__dispatch_call));	// 45818 jmp     word ptr cs:[bx] ;~ 198D:0023
seg028_proc:
	// 45823 
loc_27ed6:
	// 7697 
cs=0x198d;eip=0x000026; 	T(MOV(ax, di));	// 45824 mov     ax, di ;~ 198D:0026
cs=0x198d;eip=0x000028; 	T(MOV(bx, si));	// 45825 mov     bx, si ;~ 198D:0028
cs=0x198d;eip=0x00002a; 	X(MUL1_2(word_38044));	// 45826 mul     word_38044 ;~ 198D:002A
cs=0x198d;eip=0x00002e; 	T(ADD(bx, ax));	// 45827 add     bx, ax ;~ 198D:002E
cs=0x198d;eip=0x000030; 	T(SHL(bx, 1));	// 45828 shl     bx, 1 ;~ 198D:0030
cs=0x198d;eip=0x000032; 	T(MOV(dx, *(dw*)(raddr(ss,bp+8))));	// 45829 mov     dx, [bp+8] ;~ 198D:0032
cs=0x198d;eip=0x000035; 	T(INC(dx));	// 45830 inc     dx ;~ 198D:0035
cs=0x198d;eip=0x000036; 	T(SUB(dx, si));	// 45831 sub     dx, si ;~ 198D:0036
cs=0x198d;eip=0x000038; 	T(MOV(si, bx));	// 45832 mov     si, bx ;~ 198D:0038
cs=0x198d;eip=0x00003a; 	X(PUSH(ds));	// 45833 push    ds ;~ 198D:003A
cs=0x198d;eip=0x00003b; 	X(PUSH(word_38044));	// 45834 push    word_38044 ;~ 198D:003B
cs=0x198d;eip=0x00003f; 	T(MOV(ax, word_37bc8));	// 45835 mov     ax, word_37BC8 ;~ 198D:003F
cs=0x198d;eip=0x000042; 	T(MOV(es, ax));	// 45836 mov     es, ax ;~ 198D:0042
cs=0x198d;eip=0x000044; 	T(MOV(ax, word_37bc6));	// 45837 mov     ax, word_37BC6 ;~ 198D:0044
cs=0x198d;eip=0x000047; 	T(MOV(ds, ax));	// 45838 mov     ds, ax ;~ 198D:0047
cs=0x198d;eip=0x000049; 	X(POP(ax));	// 45839 pop     ax ;~ 198D:0049
cs=0x198d;eip=0x00004a; 	T(SHL(ax, 1));	// 45840 shl     ax, 1 ;~ 198D:004A
cs=0x198d;eip=0x00004c; 	T(ADD(ax, dx));	// 45841 add     ax, dx ;~ 198D:004C
cs=0x198d;eip=0x00004e; 	T(ADD(ax, dx));	// 45842 add     ax, dx ;~ 198D:004E
cs=0x198d;eip=0x000050; 	T(MOV(bx, cx));	// 45843 mov     bx, cx ;~ 198D:0050
loc_27f02:
	// 7698 
cs=0x198d;eip=0x000052; 	T(MOV(cx, dx));	// 45846 mov     cx, dx ;~ 198D:0052
cs=0x198d;eip=0x000054; 	T(MOV(di, si));	// 45847 mov     di, si ;~ 198D:0054
	// 45848 rep movsw ;~ 198D:0056
cs=0x198d;eip=0x000056; 	X(	REP MOVSW);	// 45848 rep movsw ;~ 198D:0056
cs=0x198d;eip=0x000058; 	T(SUB(si, ax));	// 45849 sub     si, ax ;~ 198D:0058
cs=0x198d;eip=0x00005a; 	T(DEC(bx));	// 45850 dec     bx ;~ 198D:005A
cs=0x198d;eip=0x00005b; 	R(JNZ(loc_27f02));	// 45851 jnz     short loc_27F02 ;~ 198D:005B
cs=0x198d;eip=0x00005d; 	R(JMP(loc_28152));	// 45852 jmp     loc_28152 ;~ 198D:005D
loc_27f10:
	// 7699 
cs=0x198d;eip=0x000060; 	T(MOV(ax, di));	// 45856 mov     ax, di ;~ 198D:0060
cs=0x198d;eip=0x000062; 	T(MOV(bx, si));	// 45857 mov     bx, si ;~ 198D:0062
cs=0x198d;eip=0x000064; 	T(XCHG(ah, al));	// 45858 xchg    ah, al ;~ 198D:0064
cs=0x198d;eip=0x000066; 	T(SHR(ax, 1));	// 45859 shr     ax, 1 ;~ 198D:0066
cs=0x198d;eip=0x000068; 	T(ADD(bh, al));	// 45860 add     bh, al ;~ 198D:0068
cs=0x198d;eip=0x00006a; 	T(XOR(al, al));	// 45861 xor     al, al ;~ 198D:006A
cs=0x198d;eip=0x00006c; 	T(ADD(bx, ax));	// 45862 add     bx, ax ;~ 198D:006C
cs=0x198d;eip=0x00006e; 	T(SHR(ax, 1));	// 45863 shr     ax, 1 ;~ 198D:006E
cs=0x198d;eip=0x000070; 	T(SHR(ax, 1));	// 45864 shr     ax, 1 ;~ 198D:0070
cs=0x198d;eip=0x000072; 	T(ADD(bx, ax));	// 45865 add     bx, ax ;~ 198D:0072
cs=0x198d;eip=0x000074; 	T(SHR(bx, 1));	// 45866 shr     bx, 1 ;~ 198D:0074
cs=0x198d;eip=0x000076; 	T(SHR(bx, 1));	// 45867 shr     bx, 1 ;~ 198D:0076
cs=0x198d;eip=0x000078; 	T(SHR(dx, 1));	// 45868 shr     dx, 1 ;~ 198D:0078
cs=0x198d;eip=0x00007a; 	T(SHR(dx, 1));	// 45869 shr     dx, 1 ;~ 198D:007A
cs=0x198d;eip=0x00007c; 	T(SHR(si, 1));	// 45870 shr     si, 1 ;~ 198D:007C
cs=0x198d;eip=0x00007e; 	T(SHR(si, 1));	// 45871 shr     si, 1 ;~ 198D:007E
cs=0x198d;eip=0x000080; 	R(JMP(loc_27fe2));	// 45872 jmp     loc_27FE2 ;~ 198D:0080
loc_27f33:
	// 7700 
cs=0x198d;eip=0x000083; 	T(MOV(ax, di));	// 45876 mov     ax, di ;~ 198D:0083
cs=0x198d;eip=0x000085; 	T(MOV(bx, si));	// 45877 mov     bx, si ;~ 198D:0085
cs=0x198d;eip=0x000087; 	T(XCHG(ah, al));	// 45878 xchg    ah, al ;~ 198D:0087
cs=0x198d;eip=0x000089; 	T(SHR(ax, 1));	// 45879 shr     ax, 1 ;~ 198D:0089
cs=0x198d;eip=0x00008b; 	T(SHR(bx, 1));	// 45880 shr     bx, 1 ;~ 198D:008B
cs=0x198d;eip=0x00008d; 	T(ADD(bh, al));	// 45881 add     bh, al ;~ 198D:008D
cs=0x198d;eip=0x00008f; 	T(XOR(al, al));	// 45882 xor     al, al ;~ 198D:008F
cs=0x198d;eip=0x000091; 	T(ADD(bx, ax));	// 45883 add     bx, ax ;~ 198D:0091
cs=0x198d;eip=0x000093; 	T(SHR(ax, 1));	// 45884 shr     ax, 1 ;~ 198D:0093
cs=0x198d;eip=0x000095; 	T(SHR(ax, 1));	// 45885 shr     ax, 1 ;~ 198D:0095
cs=0x198d;eip=0x000097; 	T(ADD(bx, ax));	// 45886 add     bx, ax ;~ 198D:0097
cs=0x198d;eip=0x000099; 	T(SHR(bx, 1));	// 45887 shr     bx, 1 ;~ 198D:0099
cs=0x198d;eip=0x00009b; 	T(SHR(bx, 1));	// 45888 shr     bx, 1 ;~ 198D:009B
cs=0x198d;eip=0x00009d; 	T(SHR(dx, 1));	// 45889 shr     dx, 1 ;~ 198D:009D
cs=0x198d;eip=0x00009f; 	T(SHR(dx, 1));	// 45890 shr     dx, 1 ;~ 198D:009F
cs=0x198d;eip=0x0000a1; 	T(SHR(dx, 1));	// 45891 shr     dx, 1 ;~ 198D:00A1
cs=0x198d;eip=0x0000a3; 	T(SHR(si, 1));	// 45892 shr     si, 1 ;~ 198D:00A3
cs=0x198d;eip=0x0000a5; 	T(SHR(si, 1));	// 45893 shr     si, 1 ;~ 198D:00A5
cs=0x198d;eip=0x0000a7; 	T(SHR(si, 1));	// 45894 shr     si, 1 ;~ 198D:00A7
cs=0x198d;eip=0x0000a9; 	R(JMP(loc_27fe2));	// 45895 jmp     loc_27FE2 ;~ 198D:00A9
loc_27f5c:
	// 7701 
cs=0x198d;eip=0x0000ac; 	T(MOV(ax, di));	// 45899 mov     ax, di ;~ 198D:00AC
cs=0x198d;eip=0x0000ae; 	T(MOV(bx, si));	// 45900 mov     bx, si ;~ 198D:00AE
cs=0x198d;eip=0x0000b0; 	T(SHL(bx, 1));	// 45901 shl     bx, 1 ;~ 198D:00B0
cs=0x198d;eip=0x0000b2; 	T(SHL(bx, 1));	// 45902 shl     bx, 1 ;~ 198D:00B2
cs=0x198d;eip=0x0000b4; 	T(SHR(ax, 1));	// 45903 shr     ax, 1 ;~ 198D:00B4
cs=0x198d;eip=0x0000b6; 	T(RCR(bx, 1));	// 45904 rcr     bx, 1 ;~ 198D:00B6
cs=0x198d;eip=0x0000b8; 	T(SHR(ax, 1));	// 45905 shr     ax, 1 ;~ 198D:00B8
cs=0x198d;eip=0x0000ba; 	T(RCR(bx, 1));	// 45906 rcr     bx, 1 ;~ 198D:00BA
cs=0x198d;eip=0x0000bc; 	T(SHR(bx, 1));	// 45907 shr     bx, 1 ;~ 198D:00BC
cs=0x198d;eip=0x0000be; 	T(XCHG(ah, al));	// 45908 xchg    ah, al ;~ 198D:00BE
cs=0x198d;eip=0x0000c0; 	T(SHR(ax, 1));	// 45909 shr     ax, 1 ;~ 198D:00C0
cs=0x198d;eip=0x0000c2; 	T(ADD(bx, ax));	// 45910 add     bx, ax ;~ 198D:00C2
cs=0x198d;eip=0x0000c4; 	T(SHR(ax, 1));	// 45911 shr     ax, 1 ;~ 198D:00C4
cs=0x198d;eip=0x0000c6; 	T(SHR(ax, 1));	// 45912 shr     ax, 1 ;~ 198D:00C6
cs=0x198d;eip=0x0000c8; 	T(ADD(bx, ax));	// 45913 add     bx, ax ;~ 198D:00C8
cs=0x198d;eip=0x0000ca; 	T(SHR(dx, 1));	// 45914 shr     dx, 1 ;~ 198D:00CA
cs=0x198d;eip=0x0000cc; 	T(SHR(si, 1));	// 45915 shr     si, 1 ;~ 198D:00CC
cs=0x198d;eip=0x0000ce; 	R(JMP(loc_27fe2));	// 45916 jmp     short loc_27FE2 ;~ 198D:00CE
loc_27f80:
	// 7702 
cs=0x198d;eip=0x0000d0; 	T(SHL(si, 1));	// 45920 shl     si, 1 ;~ 198D:00D0
cs=0x198d;eip=0x0000d2; 	T(ADD(si, 0x28));	// 45921 add     si, 28h ; '(' ;~ 198D:00D2
cs=0x198d;eip=0x0000d5; 	T(SHL(dx, 1));	// 45922 shl     dx, 1 ;~ 198D:00D5
cs=0x198d;eip=0x0000d7; 	T(ADD(dx, 0x29));	// 45923 add     dx, 29h ; ')' ;~ 198D:00D7
cs=0x198d;eip=0x0000da; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 45924 mov     ax, [bp+0Ah] ;~ 198D:00DA
cs=0x198d;eip=0x0000dd; 	T(MOV(cx, ax));	// 45925 mov     cx, ax ;~ 198D:00DD
cs=0x198d;eip=0x0000df; 	T(SAR(ax, 1));	// 45926 sar     ax, 1 ;~ 198D:00DF
cs=0x198d;eip=0x0000e1; 	T(ADD(ax, cx));	// 45927 add     ax, cx ;~ 198D:00E1
cs=0x198d;eip=0x0000e3; 	T(ADD(ax, 0x18));	// 45928 add     ax, 18h ;~ 198D:00E3
cs=0x198d;eip=0x0000e6; 	T(MOV(cx, ax));	// 45929 mov     cx, ax ;~ 198D:00E6
cs=0x198d;eip=0x0000e8; 	T(MOV(ax, di));	// 45930 mov     ax, di ;~ 198D:00E8
cs=0x198d;eip=0x0000ea; 	T(SAR(ax, 1));	// 45931 sar     ax, 1 ;~ 198D:00EA
cs=0x198d;eip=0x0000ec; 	T(ADD(ax, di));	// 45932 add     ax, di ;~ 198D:00EC
cs=0x198d;eip=0x0000ee; 	T(ADD(ax, 0x18));	// 45933 add     ax, 18h ;~ 198D:00EE
cs=0x198d;eip=0x0000f1; 	T(AND(di, 1));	// 45934 and     di, 1 ;~ 198D:00F1
cs=0x198d;eip=0x0000f4; 	T(ADD(di, ax));	// 45935 add     di, ax ;~ 198D:00F4
cs=0x198d;eip=0x0000f6; 	T(NEG(cx));	// 45936 neg     cx ;~ 198D:00F6
cs=0x198d;eip=0x0000f8; 	T(ADD(cx, di));	// 45937 add     cx, di ;~ 198D:00F8
cs=0x198d;eip=0x0000fa; 	T(INC(cx));	// 45938 inc     cx ;~ 198D:00FA
loc_27fab:
	// 7703 
cs=0x198d;eip=0x0000fb; 	T(MOV(ax, di));	// 45941 mov     ax, di ;~ 198D:00FB
cs=0x198d;eip=0x0000fd; 	T(MOV(bx, si));	// 45942 mov     bx, si ;~ 198D:00FD
cs=0x198d;eip=0x0000ff; 	T(SHR(ax, 1));	// 45943 shr     ax, 1 ;~ 198D:00FF
cs=0x198d;eip=0x000101; 	T(RCR(bx, 1));	// 45944 rcr     bx, 1 ;~ 198D:0101
cs=0x198d;eip=0x000103; 	T(SHR(ax, 1));	// 45945 shr     ax, 1 ;~ 198D:0103
cs=0x198d;eip=0x000105; 	T(RCR(bx, 1));	// 45946 rcr     bx, 1 ;~ 198D:0105
cs=0x198d;eip=0x000107; 	T(SHR(bx, 1));	// 45947 shr     bx, 1 ;~ 198D:0107
cs=0x198d;eip=0x000109; 	T(MOV(ah, 0x5A));	// 45948 mov     ah, 5Ah ; 'Z' ;~ 198D:0109
cs=0x198d;eip=0x00010b; 	T(MUL1_1(ah));	// 45949 mul     ah ;~ 198D:010B
cs=0x198d;eip=0x00010d; 	T(ADD(bx, ax));	// 45950 add     bx, ax ;~ 198D:010D
cs=0x198d;eip=0x00010f; 	T(SHR(dx, 1));	// 45951 shr     dx, 1 ;~ 198D:010F
cs=0x198d;eip=0x000111; 	T(SHR(dx, 1));	// 45952 shr     dx, 1 ;~ 198D:0111
cs=0x198d;eip=0x000113; 	T(SHR(dx, 1));	// 45953 shr     dx, 1 ;~ 198D:0113
cs=0x198d;eip=0x000115; 	T(SHR(si, 1));	// 45954 shr     si, 1 ;~ 198D:0115
cs=0x198d;eip=0x000117; 	T(SHR(si, 1));	// 45955 shr     si, 1 ;~ 198D:0117
cs=0x198d;eip=0x000119; 	T(SHR(si, 1));	// 45956 shr     si, 1 ;~ 198D:0119
cs=0x198d;eip=0x00011b; 	T(INC(dx));	// 45957 inc     dx ;~ 198D:011B
cs=0x198d;eip=0x00011c; 	T(SUB(dx, si));	// 45958 sub     dx, si ;~ 198D:011C
cs=0x198d;eip=0x00011e; 	T(MOV(si, bx));	// 45959 mov     si, bx ;~ 198D:011E
cs=0x198d;eip=0x000120; 	X(PUSH(ds));	// 45960 push    ds ;~ 198D:0120
cs=0x198d;eip=0x000121; 	T(MOV(ax, word_37bc8));	// 45961 mov     ax, word_37BC8 ;~ 198D:0121
cs=0x198d;eip=0x000124; 	T(MOV(es, ax));	// 45962 mov     es, ax ;~ 198D:0124
cs=0x198d;eip=0x000126; 	T(MOV(ax, word_37bc6));	// 45963 mov     ax, word_37BC6 ;~ 198D:0126
cs=0x198d;eip=0x000129; 	T(MOV(ds, ax));	// 45964 mov     ds, ax ;~ 198D:0129
cs=0x198d;eip=0x00012b; 	T(MOV(ax, 0x5A));	// 45965 mov     ax, 5Ah ; 'Z' ;~ 198D:012B
cs=0x198d;eip=0x00012e; 	T(MOV(bx, cx));	// 45966 mov     bx, cx ;~ 198D:012E
cs=0x198d;eip=0x000130; 	R(JMP(loc_28028));	// 45967 jmp     short loc_28028 ;~ 198D:0130
loc_27fe2:
	// 7704 
cs=0x198d;eip=0x000132; 	X(PUSH(ds));	// 45972 push    ds ;~ 198D:0132
cs=0x198d;eip=0x000133; 	T(INC(dx));	// 45973 inc     dx ;~ 198D:0133
cs=0x198d;eip=0x000134; 	T(SUB(dx, si));	// 45974 sub     dx, si ;~ 198D:0134
cs=0x198d;eip=0x000136; 	T(MOV(si, bx));	// 45975 mov     si, bx ;~ 198D:0136
cs=0x198d;eip=0x000138; 	T(MOV(bx, word_38018));	// 45976 mov     bx, word_38018 ;~ 198D:0138
cs=0x198d;eip=0x00013c; 	T(MOV(di, word_37f94));	// 45977 mov     di, word_37F94 ;~ 198D:013C
cs=0x198d;eip=0x000140; 	T(MOV(ax, word_37bc8));	// 45978 mov     ax, word_37BC8 ;~ 198D:0140
cs=0x198d;eip=0x000143; 	T(MOV(es, ax));	// 45979 mov     es, ax ;~ 198D:0143
cs=0x198d;eip=0x000145; 	T(MOV(ax, word_37bc6));	// 45980 mov     ax, word_37BC6 ;~ 198D:0145
cs=0x198d;eip=0x000148; 	T(MOV(ds, ax));	// 45981 mov     ds, ax ;~ 198D:0148
cs=0x198d;eip=0x00014a; 	T(MOV(ax, bx));	// 45982 mov     ax, bx ;~ 198D:014A
cs=0x198d;eip=0x00014c; 	T(MOV(bx, cx));	// 45983 mov     bx, cx ;~ 198D:014C
cs=0x198d;eip=0x00014e; 	T(CMP(di, 0x6000));	// 45984 cmp     di, 6000h ;~ 198D:014E
cs=0x198d;eip=0x000152; 	R(JZ(loc_28028));	// 45985 jz      short loc_28028 ;~ 198D:0152
loc_28004:
	// 7705 
cs=0x198d;eip=0x000154; 	T(MOV(cx, dx));	// 45989 mov     cx, dx ;~ 198D:0154
cs=0x198d;eip=0x000156; 	T(MOV(di, si));	// 45990 mov     di, si ;~ 198D:0156
	// 45991 rep movsb ;~ 198D:0158
cs=0x198d;eip=0x000158; 	X(	REP MOVSB);	// 45991 rep movsb ;~ 198D:0158
cs=0x198d;eip=0x00015a; 	T(SUB(si, dx));	// 45992 sub     si, dx ;~ 198D:015A
cs=0x198d;eip=0x00015c; 	T(TEST(si, 0x2000));	// 45993 test    si, 2000h ;~ 198D:015C
cs=0x198d;eip=0x000160; 	R(JZ(loc_2801c));	// 45994 jz      short loc_2801C ;~ 198D:0160
cs=0x198d;eip=0x000162; 	T(XOR(si, 0x2000));	// 45995 xor     si, 2000h ;~ 198D:0162
cs=0x198d;eip=0x000166; 	T(DEC(bx));	// 45996 dec     bx ;~ 198D:0166
cs=0x198d;eip=0x000167; 	R(JNZ(loc_28004));	// 45997 jnz     short loc_28004 ;~ 198D:0167
cs=0x198d;eip=0x000169; 	R(JMP(loc_28152));	// 45998 jmp     loc_28152 ;~ 198D:0169
loc_2801c:
	// 7706 
cs=0x198d;eip=0x00016c; 	T(SUB(si, ax));	// 46002 sub     si, ax ;~ 198D:016C
cs=0x198d;eip=0x00016e; 	T(XOR(si, 0x2000));	// 46003 xor     si, 2000h ;~ 198D:016E
cs=0x198d;eip=0x000172; 	T(DEC(bx));	// 46004 dec     bx ;~ 198D:0172
cs=0x198d;eip=0x000173; 	R(JNZ(loc_28004));	// 46005 jnz     short loc_28004 ;~ 198D:0173
cs=0x198d;eip=0x000175; 	R(JMP(loc_28152));	// 46006 jmp     loc_28152 ;~ 198D:0175
loc_28028:
	// 7707 
cs=0x198d;eip=0x000178; 	T(MOV(cx, dx));	// 46011 mov     cx, dx ;~ 198D:0178
cs=0x198d;eip=0x00017a; 	T(MOV(di, si));	// 46012 mov     di, si ;~ 198D:017A
	// 46013 rep movsb ;~ 198D:017C
cs=0x198d;eip=0x00017c; 	X(	REP MOVSB);	// 46013 rep movsb ;~ 198D:017C
cs=0x198d;eip=0x00017e; 	T(SUB(si, dx));	// 46014 sub     si, dx ;~ 198D:017E
cs=0x198d;eip=0x000180; 	T(TEST(si, 0x0E000));	// 46015 test    si, 0E000h ;~ 198D:0180
cs=0x198d;eip=0x000184; 	R(JZ(loc_28040));	// 46016 jz      short loc_28040 ;~ 198D:0184
cs=0x198d;eip=0x000186; 	T(SUB(si, 0x2000));	// 46017 sub     si, 2000h ;~ 198D:0186
cs=0x198d;eip=0x00018a; 	T(DEC(bx));	// 46018 dec     bx ;~ 198D:018A
cs=0x198d;eip=0x00018b; 	R(JNZ(loc_28028));	// 46019 jnz     short loc_28028 ;~ 198D:018B
cs=0x198d;eip=0x00018d; 	R(JMP(loc_28152));	// 46020 jmp     loc_28152 ;~ 198D:018D
loc_28040:
	// 7708 
cs=0x198d;eip=0x000190; 	T(OR(si, 0x6000));	// 46024 or      si, 6000h ;~ 198D:0190
cs=0x198d;eip=0x000194; 	T(SUB(si, ax));	// 46025 sub     si, ax ;~ 198D:0194
cs=0x198d;eip=0x000196; 	T(DEC(bx));	// 46026 dec     bx ;~ 198D:0196
cs=0x198d;eip=0x000197; 	R(JNZ(loc_28028));	// 46027 jnz     short loc_28028 ;~ 198D:0197
cs=0x198d;eip=0x000199; 	R(JMP(loc_28152));	// 46028 jmp     loc_28152 ;~ 198D:0199
loc_2804c:
	// 7709 
cs=0x198d;eip=0x00019c; 	X(PUSH(ax));	// 46032 push    ax ;~ 198D:019C
cs=0x198d;eip=0x00019d; 	T(MOV(al, 5));	// 46033 mov     al, 5 ;~ 198D:019D
cs=0x198d;eip=0x00019f; 	T(MOV(ah, 1));	// 46034 mov     ah, 1 ;~ 198D:019F
cs=0x198d;eip=0x0001a1; 	X(PUSH(dx));	// 46035 push    dx ;~ 198D:01A1
cs=0x198d;eip=0x0001a2; 	T(MOV(dx, 0x3CE));	// 46036 mov     dx, 3CEh ;~ 198D:01A2
cs=0x198d;eip=0x0001a5; 	R(OUT(dx, ax));	// 46037 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 198D:01A5
cs=0x198d;eip=0x0001a6; 	X(POP(dx));	// 46039 pop     dx ;~ 198D:01A6
cs=0x198d;eip=0x0001a7; 	X(POP(ax));	// 46040 pop     ax ;~ 198D:01A7
cs=0x198d;eip=0x0001a8; 	T(SHR(si, 1));	// 46041 shr     si, 1 ;~ 198D:01A8
cs=0x198d;eip=0x0001aa; 	T(SHR(si, 1));	// 46042 shr     si, 1 ;~ 198D:01AA
cs=0x198d;eip=0x0001ac; 	T(SHR(si, 1));	// 46043 shr     si, 1 ;~ 198D:01AC
cs=0x198d;eip=0x0001ae; 	T(MOV(bx, dx));	// 46044 mov     bx, dx ;~ 198D:01AE
cs=0x198d;eip=0x0001b0; 	T(SHR(bx, 1));	// 46045 shr     bx, 1 ;~ 198D:01B0
cs=0x198d;eip=0x0001b2; 	T(SHR(bx, 1));	// 46046 shr     bx, 1 ;~ 198D:01B2
cs=0x198d;eip=0x0001b4; 	T(SHR(bx, 1));	// 46047 shr     bx, 1 ;~ 198D:01B4
cs=0x198d;eip=0x0001b6; 	T(INC(bx));	// 46048 inc     bx ;~ 198D:01B6
cs=0x198d;eip=0x0001b7; 	T(SUB(bx, si));	// 46049 sub     bx, si ;~ 198D:01B7
cs=0x198d;eip=0x0001b9; 	T(MOV(ax, word_38018));	// 46050 mov     ax, word_38018 ;~ 198D:01B9
cs=0x198d;eip=0x0001bc; 	T(MUL1_2(di));	// 46051 mul     di ;~ 198D:01BC
cs=0x198d;eip=0x0001be; 	T(ADD(si, ax));	// 46052 add     si, ax ;~ 198D:01BE
cs=0x198d;eip=0x0001c0; 	X(PUSH(ds));	// 46053 push    ds ;~ 198D:01C0
cs=0x198d;eip=0x0001c1; 	T(MOV(di, word_38018));	// 46054 mov     di, word_38018 ;~ 198D:01C1
cs=0x198d;eip=0x0001c5; 	T(MOV(ax, word_37bc8));	// 46055 mov     ax, word_37BC8 ;~ 198D:01C5
cs=0x198d;eip=0x0001c8; 	T(MOV(es, ax));	// 46056 mov     es, ax ;~ 198D:01C8
cs=0x198d;eip=0x0001ca; 	T(MOV(ax, word_37bc6));	// 46057 mov     ax, word_37BC6 ;~ 198D:01CA
cs=0x198d;eip=0x0001cd; 	T(MOV(ds, ax));	// 46058 mov     ds, ax ;~ 198D:01CD
cs=0x198d;eip=0x0001cf; 	T(MOV(ax, di));	// 46059 mov     ax, di ;~ 198D:01CF
cs=0x198d;eip=0x0001d1; 	T(ADD(ax, bx));	// 46060 add     ax, bx ;~ 198D:01D1
cs=0x198d;eip=0x0001d3; 	T(MOV(dx, cx));	// 46061 mov     dx, cx ;~ 198D:01D3
loc_28085:
	// 7710 
cs=0x198d;eip=0x0001d5; 	T(MOV(cx, bx));	// 46064 mov     cx, bx ;~ 198D:01D5
cs=0x198d;eip=0x0001d7; 	T(MOV(di, si));	// 46065 mov     di, si ;~ 198D:01D7
	// 46066 rep movsb ;~ 198D:01D9
cs=0x198d;eip=0x0001d9; 	X(	REP MOVSB);	// 46066 rep movsb ;~ 198D:01D9
cs=0x198d;eip=0x0001db; 	T(SUB(si, ax));	// 46067 sub     si, ax ;~ 198D:01DB
cs=0x198d;eip=0x0001dd; 	T(DEC(dx));	// 46068 dec     dx ;~ 198D:01DD
cs=0x198d;eip=0x0001de; 	R(JNZ(loc_28085));	// 46069 jnz     short loc_28085 ;~ 198D:01DE
cs=0x198d;eip=0x0001e0; 	X(PUSH(ax));	// 46070 push    ax ;~ 198D:01E0
cs=0x198d;eip=0x0001e1; 	T(MOV(al, 5));	// 46071 mov     al, 5 ;~ 198D:01E1
cs=0x198d;eip=0x0001e3; 	T(MOV(ah, 0));	// 46072 mov     ah, 0 ;~ 198D:01E3
cs=0x198d;eip=0x0001e5; 	X(PUSH(dx));	// 46073 push    dx ;~ 198D:01E5
cs=0x198d;eip=0x0001e6; 	T(MOV(dx, 0x3CE));	// 46074 mov     dx, 3CEh ;~ 198D:01E6
cs=0x198d;eip=0x0001e9; 	R(OUT(dx, ax));	// 46075 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 198D:01E9
cs=0x198d;eip=0x0001ea; 	X(POP(dx));	// 46082 pop     dx ;~ 198D:01EA
cs=0x198d;eip=0x0001eb; 	X(POP(ax));	// 46083 pop     ax ;~ 198D:01EB
cs=0x198d;eip=0x0001ec; 	R(JMP(loc_28152));	// 46084 jmp     loc_28152 ;~ 198D:01EC
loc_2809f:
	// 7711 
cs=0x198d;eip=0x0001ef; 	T(MOV(ax, di));	// 46088 mov     ax, di ;~ 198D:01EF
cs=0x198d;eip=0x0001f1; 	T(MOV(bx, si));	// 46089 mov     bx, si ;~ 198D:01F1
cs=0x198d;eip=0x0001f3; 	T(XCHG(ah, al));	// 46090 xchg    ah, al ;~ 198D:01F3
cs=0x198d;eip=0x0001f5; 	T(ADD(bx, ax));	// 46091 add     bx, ax ;~ 198D:01F5
cs=0x198d;eip=0x0001f7; 	T(SHR(ax, 1));	// 46092 shr     ax, 1 ;~ 198D:01F7
cs=0x198d;eip=0x0001f9; 	T(SHR(ax, 1));	// 46093 shr     ax, 1 ;~ 198D:01F9
cs=0x198d;eip=0x0001fb; 	T(ADD(bx, ax));	// 46094 add     bx, ax ;~ 198D:01FB
cs=0x198d;eip=0x0001fd; 	T(INC(dx));	// 46095 inc     dx ;~ 198D:01FD
cs=0x198d;eip=0x0001fe; 	T(SUB(dx, si));	// 46096 sub     dx, si ;~ 198D:01FE
cs=0x198d;eip=0x000200; 	T(MOV(si, bx));	// 46097 mov     si, bx ;~ 198D:0200
cs=0x198d;eip=0x000202; 	X(PUSH(ds));	// 46098 push    ds ;~ 198D:0202
cs=0x198d;eip=0x000203; 	T(MOV(ax, word_37bc8));	// 46099 mov     ax, word_37BC8 ;~ 198D:0203
cs=0x198d;eip=0x000206; 	T(MOV(es, ax));	// 46100 mov     es, ax ;~ 198D:0206
cs=0x198d;eip=0x000208; 	T(MOV(ax, word_37bc6));	// 46101 mov     ax, word_37BC6 ;~ 198D:0208
cs=0x198d;eip=0x00020b; 	T(MOV(ds, ax));	// 46102 mov     ds, ax ;~ 198D:020B
cs=0x198d;eip=0x00020d; 	T(MOV(ax, 0x140));	// 46103 mov     ax, 140h ;~ 198D:020D
cs=0x198d;eip=0x000210; 	T(ADD(ax, dx));	// 46104 add     ax, dx ;~ 198D:0210
cs=0x198d;eip=0x000212; 	T(MOV(bx, cx));	// 46105 mov     bx, cx ;~ 198D:0212
loc_280c4:
	// 7712 
cs=0x198d;eip=0x000214; 	T(MOV(cx, dx));	// 46108 mov     cx, dx ;~ 198D:0214
cs=0x198d;eip=0x000216; 	T(MOV(di, si));	// 46109 mov     di, si ;~ 198D:0216
	// 46110 rep movsb ;~ 198D:0218
cs=0x198d;eip=0x000218; 	X(	REP MOVSB);	// 46110 rep movsb ;~ 198D:0218
cs=0x198d;eip=0x00021a; 	T(SUB(si, ax));	// 46111 sub     si, ax ;~ 198D:021A
cs=0x198d;eip=0x00021c; 	T(DEC(bx));	// 46112 dec     bx ;~ 198D:021C
cs=0x198d;eip=0x00021d; 	R(JNZ(loc_280c4));	// 46113 jnz     short loc_280C4 ;~ 198D:021D
cs=0x198d;eip=0x00021f; 	R(JMP(loc_28152));	// 46114 jmp     loc_28152 ;~ 198D:021F
loc_280d2:
	// 7713 
cs=0x198d;eip=0x000222; 	T(MOV(ax, di));	// 46118 mov     ax, di ;~ 198D:0222
cs=0x198d;eip=0x000224; 	T(MOV(bx, si));	// 46119 mov     bx, si ;~ 198D:0224
cs=0x198d;eip=0x000226; 	T(XCHG(ah, al));	// 46120 xchg    ah, al ;~ 198D:0226
cs=0x198d;eip=0x000228; 	T(ADD(bx, ax));	// 46121 add     bx, ax ;~ 198D:0228
cs=0x198d;eip=0x00022a; 	T(SHR(ax, 1));	// 46122 shr     ax, 1 ;~ 198D:022A
cs=0x198d;eip=0x00022c; 	T(SHR(ax, 1));	// 46123 shr     ax, 1 ;~ 198D:022C
cs=0x198d;eip=0x00022e; 	T(ADD(bx, ax));	// 46124 add     bx, ax ;~ 198D:022E
cs=0x198d;eip=0x000230; 	T(SHR(bx, 1));	// 46125 shr     bx, 1 ;~ 198D:0230
cs=0x198d;eip=0x000232; 	T(SHR(bx, 1));	// 46126 shr     bx, 1 ;~ 198D:0232
cs=0x198d;eip=0x000234; 	X(MOV(word_37bb9, bx));	// 46127 mov     word_37BB9, bx ;~ 198D:0234
cs=0x198d;eip=0x000238; 	T(MOV(di, cx));	// 46128 mov     di, cx ;~ 198D:0238
cs=0x198d;eip=0x00023a; 	T(MOV(cx, si));	// 46129 mov     cx, si ;~ 198D:023A
cs=0x198d;eip=0x00023c; 	T(AND(cl, 3));	// 46130 and     cl, 3 ;~ 198D:023C
cs=0x198d;eip=0x00023f; 	T(MOV(al, 1));	// 46131 mov     al, 1 ;~ 198D:023F
cs=0x198d;eip=0x000241; 	T(SHL(al, cl));	// 46132 shl     al, cl ;~ 198D:0241
cs=0x198d;eip=0x000243; 	X(MOV(byte_37bc2, cl));	// 46133 mov     byte_37BC2, cl ;~ 198D:0243
cs=0x198d;eip=0x000247; 	X(MOV(byte_37bbf, al));	// 46134 mov     byte_37BBF, al ;~ 198D:0247
cs=0x198d;eip=0x00024a; 	T(NEG(si));	// 46135 neg     si ;~ 198D:024A
cs=0x198d;eip=0x00024c; 	T(ADD(si, dx));	// 46136 add     si, dx ;~ 198D:024C
cs=0x198d;eip=0x00024e; 	T(INC(si));	// 46137 inc     si ;~ 198D:024E
cs=0x198d;eip=0x00024f; 	T(MOV(ax, word_37bc8));	// 46138 mov     ax, word_37BC8 ;~ 198D:024F
cs=0x198d;eip=0x000252; 	T(MOV(es, ax));	// 46139 mov     es, ax ;~ 198D:0252
loc_28104:
	// 7714 
cs=0x198d;eip=0x000254; 	T(MOV(dx, 0x3C4));	// 46142 mov     dx, 3C4h ;~ 198D:0254
cs=0x198d;eip=0x000257; 	T(MOV(al, 2));	// 46143 mov     al, 2 ;~ 198D:0257
cs=0x198d;eip=0x000259; 	T(MOV(ah, byte_37bbf));	// 46144 mov     ah, byte_37BBF ;~ 198D:0259
cs=0x198d;eip=0x00025d; 	R(OUT(dx, ax));	// 46145 out     dx, ax          ; EGA: sequencer address reg ;~ 198D:025D
cs=0x198d;eip=0x00025e; 	T(MOV(dl, 0x0CE));	// 46148 mov     dl, 0CEh ; 'Î' ;~ 198D:025E
cs=0x198d;eip=0x000260; 	T(MOV(al, 4));	// 46149 mov     al, 4 ;~ 198D:0260
cs=0x198d;eip=0x000262; 	T(MOV(ah, byte_37bc2));	// 46150 mov     ah, byte_37BC2 ;~ 198D:0262
cs=0x198d;eip=0x000266; 	R(OUT(dx, ax));	// 46151 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 198D:0266
cs=0x198d;eip=0x000267; 	T(MOV(bx, word_37bb9));	// 46154 mov     bx, word_37BB9 ;~ 198D:0267
cs=0x198d;eip=0x00026b; 	T(MOV(cx, di));	// 46155 mov     cx, di ;~ 198D:026B
cs=0x198d;eip=0x00026d; 	T(MOV(dx, 0x50));	// 46156 mov     dx, 50h ; 'P' ;~ 198D:026D
cs=0x198d;eip=0x000270; 	X(PUSH(ds));	// 46157 push    ds ;~ 198D:0270
cs=0x198d;eip=0x000271; 	T(MOV(ax, word_37bc6));	// 46158 mov     ax, word_37BC6 ;~ 198D:0271
cs=0x198d;eip=0x000274; 	T(MOV(ds, ax));	// 46159 mov     ds, ax ;~ 198D:0274
loc_28126:
	// 7715 
cs=0x198d;eip=0x000276; 	T(MOV(al, *(raddr(ds,bx))));	// 46162 mov     al, [bx] ;~ 198D:0276
cs=0x198d;eip=0x000278; 	X(MOV(*(raddr(es,bx)), al));	// 46163 mov     es:[bx], al ;~ 198D:0278
cs=0x198d;eip=0x00027b; 	T(SUB(bx, dx));	// 46164 sub     bx, dx ;~ 198D:027B
cs=0x198d;eip=0x00027d; 	R(LOOP(loc_28126));	// 46165 loop    loc_28126 ;~ 198D:027D
cs=0x198d;eip=0x00027f; 	T(DEC(si));	// 46166 dec     si ;~ 198D:027F
cs=0x198d;eip=0x000280; 	R(JZ(loc_28152));	// 46167 jz      short loc_28152 ;~ 198D:0280
cs=0x198d;eip=0x000282; 	X(POP(ds));	// 46168 pop     ds ;~ 198D:0282
cs=0x198d;eip=0x000283; 	T(MOV(cl, byte_37bc2));	// 46169 mov     cl, byte_37BC2 ;~ 198D:0283
cs=0x198d;eip=0x000287; 	T(INC(cl));	// 46170 inc     cl ;~ 198D:0287
cs=0x198d;eip=0x000289; 	T(AND(cl, 3));	// 46171 and     cl, 3 ;~ 198D:0289
cs=0x198d;eip=0x00028c; 	T(MOV(al, 1));	// 46172 mov     al, 1 ;~ 198D:028C
cs=0x198d;eip=0x00028e; 	T(SHL(al, cl));	// 46173 shl     al, cl ;~ 198D:028E
cs=0x198d;eip=0x000290; 	X(MOV(byte_37bc2, cl));	// 46174 mov     byte_37BC2, cl ;~ 198D:0290
cs=0x198d;eip=0x000294; 	X(MOV(byte_37bbf, al));	// 46175 mov     byte_37BBF, al ;~ 198D:0294
cs=0x198d;eip=0x000297; 	T(MOV(ax, 1));	// 46176 mov     ax, 1 ;~ 198D:0297
cs=0x198d;eip=0x00029a; 	T(SHR(ax, cl));	// 46177 shr     ax, cl ;~ 198D:029A
cs=0x198d;eip=0x00029c; 	X(ADD(word_37bb9, ax));	// 46178 add     word_37BB9, ax ;~ 198D:029C
cs=0x198d;eip=0x0002a0; 	R(JMP(loc_28104));	// 46179 jmp     short loc_28104 ;~ 198D:02A0
loc_28152:
	// 7716 
cs=0x198d;eip=0x0002a2; 	X(POP(ds));	// 46184 pop     ds ;~ 198D:02A2
loc_28153:
	// 7717 
cs=0x198d;eip=0x0002a3; 	T(XOR(ax, ax));	// 46187 xor     ax, ax ;~ 198D:02A3
cs=0x198d;eip=0x0002a5; 	X(POP(si));	// 46188 pop     si ;~ 198D:02A5
cs=0x198d;eip=0x0002a6; 	X(POP(di));	// 46189 pop     di ;~ 198D:02A6
cs=0x198d;eip=0x0002a7; 	X(POP(bp));	// 46190 pop     bp ;~ 198D:02A7
cs=0x198d;eip=0x0002a8; 	R(RETF(0));	// 46191 retf ;~ 198D:02A8

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_27ed6: 	goto loc_27ed6;
        case m2c::kloc_27f02: 	goto loc_27f02;
        case m2c::kloc_27f10: 	goto loc_27f10;
        case m2c::kloc_27f33: 	goto loc_27f33;
        case m2c::kloc_27f5c: 	goto loc_27f5c;
        case m2c::kloc_27f80: 	goto loc_27f80;
        case m2c::kloc_27fab: 	goto loc_27fab;
        case m2c::kloc_27fe2: 	goto loc_27fe2;
        case m2c::kloc_28004: 	goto loc_28004;
        case m2c::kloc_2801c: 	goto loc_2801c;
        case m2c::kloc_28028: 	goto loc_28028;
        case m2c::kloc_28040: 	goto loc_28040;
        case m2c::kloc_2804c: 	goto loc_2804c;
        case m2c::kloc_28085: 	goto loc_28085;
        case m2c::kloc_2809f: 	goto loc_2809f;
        case m2c::kloc_280c4: 	goto loc_280c4;
        case m2c::kloc_280d2: 	goto loc_280d2;
        case m2c::kloc_28104: 	goto loc_28104;
        case m2c::kloc_28126: 	goto loc_28126;
        case m2c::kloc_28152: 	goto loc_28152;
        case m2c::kloc_28153: 	goto loc_28153;
        case m2c::ksub_27eb6: 	goto sub_27eb6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

