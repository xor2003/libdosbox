/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool _group3(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group3:
    _begin:
sub_1792c:
	// 14813 
#undef var_6
#define var_6 -6
	// 14815 var_6           = word ptr -6 ;~ 0934:000C
#undef var_4
#define var_4 -4
	// 14816 var_4           = word ptr -4 ;~ 0934:000C
#undef var_2
#define var_2 -2
	// 14817 var_2           = word ptr -2 ;~ 0934:000C
ret_934_c:
	// 5139 
cs=0x934;eip=0x00000c; 	X(PUSH(bp));	// 14819 push    bp ;~ 0934:000C
cs=0x934;eip=0x00000d; 	T(MOV(bp, sp));	// 14820 mov     bp, sp ;~ 0934:000D
cs=0x934;eip=0x00000f; 	T(SUB(sp, 6));	// 14821 sub     sp, 6 ;~ 0934:000F
cs=0x934;eip=0x000012; 	X(MOV(byte_352cc, 0));	// 14822 mov     byte_352CC, 0 ;~ 0934:0012
cs=0x934;eip=0x000017; 	R(CALLF(sub_14752,0));	// 14823 call    sub_14752 ;~ 0934:0017
cs=0x934;eip=0x00001c; 	T(SUB(al, al));	// 14824 sub     al, al ;~ 0934:001C
cs=0x934;eip=0x00001e; 	X(MOV(byte_3a8b8, al));	// 14825 mov     byte_3A8B8, al ;~ 0934:001E
cs=0x934;eip=0x000021; 	X(MOV(byte_38ad2, al));	// 14826 mov     byte_38AD2, al ;~ 0934:0021
cs=0x934;eip=0x000024; 	X(MOV(byte_352cb, al));	// 14827 mov     byte_352CB, al ;~ 0934:0024
cs=0x934;eip=0x000027; 	X(MOV(word_34f1c, 0x10));	// 14828 mov     word_34F1C, 10h ;~ 0934:0027
cs=0x934;eip=0x00002d; 	T(SUB(ax, ax));	// 14829 sub     ax, ax ;~ 0934:002D
cs=0x934;eip=0x00002f; 	X(PUSH(ax));	// 14830 push    ax ;~ 0934:002F
cs=0x934;eip=0x000030; 	R(CALLF(sub_1d2d0,0));	// 14831 call    sub_1D2D0 ;~ 0934:0030
cs=0x934;eip=0x000035; 	T(ADD(sp, 2));	// 14832 add     sp, 2 ;~ 0934:0035
cs=0x934;eip=0x000038; 	T(SUB(ax, ax));	// 14833 sub     ax, ax ;~ 0934:0038
cs=0x934;eip=0x00003a; 	X(PUSH(ax));	// 14834 push    ax ;~ 0934:003A
cs=0x934;eip=0x00003b; 	R(CALLF(sub_2ad94,0));	// 14835 call    sub_2AD94 ;~ 0934:003B
cs=0x934;eip=0x000040; 	T(ADD(sp, 2));	// 14836 add     sp, 2 ;~ 0934:0040
cs=0x934;eip=0x000043; 	X(PUSH(cs));	// 14837 push    cs ;~ 0934:0043
cs=0x934;eip=0x000044; 	R(CALL(sub_1864e,0));	// 14838 call    near ptr sub_1864E ;~ 0934:0044
cs=0x934;eip=0x000047; 	X(PUSH(cs));	// 14839 push    cs ;~ 0934:0047
cs=0x934;eip=0x000048; 	R(CALL(sub_1815c,0));	// 14840 call    near ptr sub_1815C ;~ 0934:0048
cs=0x934;eip=0x00004b; 	X(PUSH(cs));	// 14841 push    cs ;~ 0934:004B
cs=0x934;eip=0x00004c; 	R(CALL(sub_189c6,0));	// 14842 call    near ptr sub_189C6 ;~ 0934:004C
cs=0x934;eip=0x00004f; 	X(PUSH(cs));	// 14843 push    cs ;~ 0934:004F
cs=0x934;eip=0x000050; 	R(CALL(sub_18242,0));	// 14844 call    near ptr sub_18242 ;~ 0934:0050
cs=0x934;eip=0x000053; 	X(PUSH(cs));	// 14845 push    cs ;~ 0934:0053
cs=0x934;eip=0x000054; 	R(CALL(sub_189e8,0));	// 14846 call    near ptr sub_189E8 ;~ 0934:0054
cs=0x934;eip=0x000057; 	X(PUSH(cs));	// 14847 push    cs ;~ 0934:0057
cs=0x934;eip=0x000058; 	R(CALL(sub_18c30,0));	// 14848 call    near ptr sub_18C30 ;~ 0934:0058
cs=0x934;eip=0x00005b; 	X(PUSH(cs));	// 14849 push    cs ;~ 0934:005B
cs=0x934;eip=0x00005c; 	R(CALL(sub_18ef4,0));	// 14850 call    near ptr sub_18EF4 ;~ 0934:005C
cs=0x934;eip=0x00005f; 	X(PUSH(cs));	// 14851 push    cs ;~ 0934:005F
cs=0x934;eip=0x000060; 	R(CALL(sub_18fe4,0));	// 14852 call    near ptr sub_18FE4 ;~ 0934:0060
cs=0x934;eip=0x000063; 	X(MOV(byte_34f9b, 0));	// 14853 mov     byte_34F9B, 0 ;~ 0934:0063
cs=0x934;eip=0x000068; 	T(CMP(byte_2c948, 1));	// 14854 cmp     byte_2C948, 1 ;~ 0934:0068
cs=0x934;eip=0x00006d; 	R(JNZ(loc_17992));	// 14855 jnz     short loc_17992 ;~ 0934:006D
cs=0x934;eip=0x00006f; 	R(JMP(loc_17cd4));	// 14856 jmp     loc_17CD4 ;~ 0934:006F
loc_17992:
	// 5140 
cs=0x934;eip=0x000072; 	T(MOV(al, byte_2c805));	// 14860 mov     al, byte_2C805 ;~ 0934:0072
cs=0x934;eip=0x000075; 	T(ADD(al, 0x30));	// 14861 add     al, 30h ; '0' ;~ 0934:0075
cs=0x934;eip=0x000077; 	X(MOV(byte_2d629, al));	// 14862 mov     byte_2D629, al ;~ 0934:0077
cs=0x934;eip=0x00007a; 	T(MOV(ax, 9));	// 14863 mov     ax, 9 ;~ 0934:007A
cs=0x934;eip=0x00007d; 	X(PUSH(ax));	// 14864 push    ax ;~ 0934:007D
cs=0x934;eip=0x00007e; 	R(CALLF(sub_1179c,0));	// 14865 call    sub_1179C ;~ 0934:007E
cs=0x934;eip=0x000083; 	T(ADD(sp, 2));	// 14866 add     sp, 2 ;~ 0934:0083
cs=0x934;eip=0x000086; 	R(JMP(loc_17cd4));	// 14867 jmp     loc_17CD4 ;~ 0934:0086
loc_179aa:
	// 5141 
cs=0x934;eip=0x00008a; 	T(MOV(al, *(db*)(((db*)&word_2bee0))));	// 14872 mov     al, byte ptr word_2BEE0 ;~ 0934:008A
cs=0x934;eip=0x00008d; 	T(SUB(al, *(db*)(raddr(ss,bp+var_4))));	// 14873 sub     al, byte ptr [bp+var_4] ;~ 0934:008D
cs=0x934;eip=0x000090; 	X(MOV(byte_3754e, al));	// 14874 mov     byte_3754E, al ;~ 0934:0090
cs=0x934;eip=0x000093; 	T(MOV(ax, word_2bee0));	// 14875 mov     ax, word_2BEE0 ;~ 0934:0093
cs=0x934;eip=0x000096; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 14876 mov     [bp+var_4], ax ;~ 0934:0096
cs=0x934;eip=0x000099; 	T(MOV(al, byte_352cb));	// 14877 mov     al, byte_352CB ;~ 0934:0099
cs=0x934;eip=0x00009c; 	T(CMP(byte_3a8b8, al));	// 14878 cmp     byte_3A8B8, al ;~ 0934:009C
cs=0x934;eip=0x0000a0; 	R(JNZ(loc_179ce));	// 14879 jnz     short loc_179CE ;~ 0934:00A0
cs=0x934;eip=0x0000a2; 	T(MOV(ax, word_3a5b4));	// 14880 mov     ax, word_3A5B4 ;~ 0934:00A2
cs=0x934;eip=0x0000a5; 	T(CMP(word_2beca, ax));	// 14881 cmp     word_2BECA, ax ;~ 0934:00A5
cs=0x934;eip=0x0000a9; 	R(JNZ(loc_179ce));	// 14882 jnz     short loc_179CE ;~ 0934:00A9
cs=0x934;eip=0x0000ab; 	R(JMP(loc_17b3e));	// 14883 jmp     loc_17B3E ;~ 0934:00AB
loc_179ce:
	// 5142 
cs=0x934;eip=0x0000ae; 	T(CMP(byte_38a92, 0));	// 14888 cmp     byte_38A92, 0 ;~ 0934:00AE
cs=0x934;eip=0x0000b3; 	R(JZ(loc_17a01));	// 14889 jz      short loc_17A01 ;~ 0934:00B3
cs=0x934;eip=0x0000b5; 	T(SUB(ax, ax));	// 14890 sub     ax, ax ;~ 0934:00B5
cs=0x934;eip=0x0000b7; 	X(PUSH(ax));	// 14891 push    ax ;~ 0934:00B7
cs=0x934;eip=0x0000b8; 	T(MOV(ax, 1));	// 14892 mov     ax, 1 ;~ 0934:00B8
cs=0x934;eip=0x0000bb; 	X(PUSH(ax));	// 14893 push    ax ;~ 0934:00BB
cs=0x934;eip=0x0000bc; 	T(MOV(ax, 0x0AB));	// 14894 mov     ax, 0ABh ; '´' ;~ 0934:00BC
cs=0x934;eip=0x0000bf; 	X(PUSH(ax));	// 14895 push    ax ;~ 0934:00BF
cs=0x934;eip=0x0000c0; 	T(MOV(ax, 0x0F8));	// 14896 mov     ax, 0F8h ; '¯' ;~ 0934:00C0
cs=0x934;eip=0x0000c3; 	X(PUSH(ax));	// 14897 push    ax ;~ 0934:00C3
cs=0x934;eip=0x0000c4; 	T(MOV(ax, 0x97));	// 14898 mov     ax, 97h ; 'ó' ;~ 0934:00C4
cs=0x934;eip=0x0000c7; 	X(PUSH(ax));	// 14899 push    ax ;~ 0934:00C7
cs=0x934;eip=0x0000c8; 	T(MOV(ax, 0x68));	// 14900 mov     ax, 68h ; 'h' ;~ 0934:00C8
cs=0x934;eip=0x0000cb; 	X(PUSH(ax));	// 14901 push    ax ;~ 0934:00CB
cs=0x934;eip=0x0000cc; 	T(MOV(ax, 0x107));	// 14902 mov     ax, 107h ;~ 0934:00CC
cs=0x934;eip=0x0000cf; 	X(PUSH(ax));	// 14903 push    ax ;~ 0934:00CF
cs=0x934;eip=0x0000d0; 	T(MOV(ax, 0x0D0));	// 14904 mov     ax, 0D0h ; '–' ;~ 0934:00D0
cs=0x934;eip=0x0000d3; 	X(PUSH(ax));	// 14905 push    ax ;~ 0934:00D3
cs=0x934;eip=0x0000d4; 	R(CALLF(sub_28183,0));	// 14906 call    far ptr sub_28183 ;~ 0934:00D4
cs=0x934;eip=0x0000d9; 	T(ADD(sp, 0x10));	// 14907 add     sp, 10h ;~ 0934:00D9
cs=0x934;eip=0x0000dc; 	X(MOV(byte_38a92, 0));	// 14908 mov     byte_38A92, 0 ;~ 0934:00DC
loc_17a01:
	// 5143 
cs=0x934;eip=0x0000e1; 	T(CMP(byte_3a3a1, 0));	// 14911 cmp     byte_3A3A1, 0 ;~ 0934:00E1
cs=0x934;eip=0x0000e6; 	R(JZ(loc_17a0c));	// 14912 jz      short loc_17A0C ;~ 0934:00E6
cs=0x934;eip=0x0000e8; 	X(PUSH(cs));	// 14913 push    cs ;~ 0934:00E8
cs=0x934;eip=0x0000e9; 	R(CALL(sub_1815c,0));	// 14914 call    near ptr sub_1815C ;~ 0934:00E9
loc_17a0c:
	// 5144 
cs=0x934;eip=0x0000ec; 	X(PUSH(cs));	// 14917 push    cs ;~ 0934:00EC
cs=0x934;eip=0x0000ed; 	R(CALL(sub_189c6,0));	// 14918 call    near ptr sub_189C6 ;~ 0934:00ED
cs=0x934;eip=0x0000f0; 	T(MOV(ax, word_3a5b4));	// 14919 mov     ax, word_3A5B4 ;~ 0934:00F0
cs=0x934;eip=0x0000f3; 	T(CMP(word_2beca, ax));	// 14920 cmp     word_2BECA, ax ;~ 0934:00F3
cs=0x934;eip=0x0000f7; 	R(JZ(loc_17a1c));	// 14921 jz      short loc_17A1C ;~ 0934:00F7
cs=0x934;eip=0x0000f9; 	R(JMP(loc_17ac2));	// 14922 jmp     loc_17AC2 ;~ 0934:00F9
loc_17a1c:
	// 5145 
cs=0x934;eip=0x0000fc; 	T(CMP(byte_375cd, 0));	// 14926 cmp     byte_375CD, 0 ;~ 0934:00FC
cs=0x934;eip=0x000101; 	R(JNZ(loc_17a26));	// 14927 jnz     short loc_17A26 ;~ 0934:0101
cs=0x934;eip=0x000103; 	R(JMP(loc_17adf));	// 14928 jmp     loc_17ADF ;~ 0934:0103
loc_17a26:
	// 5146 
cs=0x934;eip=0x000106; 	T(CMP(byte_37b7b, 0));	// 14932 cmp     byte_37B7B, 0 ;~ 0934:0106
cs=0x934;eip=0x00010b; 	R(JZ(loc_17a34));	// 14933 jz      short loc_17A34 ;~ 0934:010B
cs=0x934;eip=0x00010d; 	X(PUSH(cs));	// 14934 push    cs ;~ 0934:010D
cs=0x934;eip=0x00010e; 	R(CALL(sub_192ea,0));	// 14935 call    near ptr sub_192EA ;~ 0934:010E
cs=0x934;eip=0x000111; 	R(JMP(loc_17a38));	// 14936 jmp     short loc_17A38 ;~ 0934:0111
loc_17a34:
	// 5147 
cs=0x934;eip=0x000114; 	X(PUSH(cs));	// 14941 push    cs ;~ 0934:0114
cs=0x934;eip=0x000115; 	R(CALL(sub_19520,0));	// 14942 call    near ptr sub_19520 ;~ 0934:0115
loc_17a38:
	// 5148 
cs=0x934;eip=0x000118; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 1));	// 14945 mov     [bp+var_6], 1 ;~ 0934:0118
cs=0x934;eip=0x00011d; 	R(JMP(loc_17a55));	// 14946 jmp     short loc_17A55 ;~ 0934:011D
loc_17a40:
	// 5149 
cs=0x934;eip=0x000120; 	T(MOV(ax, 1));	// 14952 mov     ax, 1 ;~ 0934:0120
cs=0x934;eip=0x000123; 	X(PUSH(ax));	// 14953 push    ax ;~ 0934:0123
cs=0x934;eip=0x000124; 	R(CALLF(sub_26ffb,0));	// 14954 call    sub_26FFB ;~ 0934:0124
cs=0x934;eip=0x000129; 	T(ADD(sp, 2));	// 14955 add     sp, 2 ;~ 0934:0129
loc_17a4c:
	// 5150 
cs=0x934;eip=0x00012c; 	R(CALLF(sub_1f0c1,0));	// 14958 call    sub_1F0C1 ;~ 0934:012C
cs=0x934;eip=0x000131; 	X(ADD(*(dw*)(raddr(ss,bp+var_6)), 2));	// 14959 add     [bp+var_6], 2 ;~ 0934:0131
loc_17a55:
	// 5151 
cs=0x934;eip=0x000135; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0x50));	// 14962 cmp     [bp+var_6], 50h ; 'P' ;~ 0934:0135
cs=0x934;eip=0x000139; 	R(JGE(loc_17a70));	// 14963 jge     short loc_17A70 ;~ 0934:0139
cs=0x934;eip=0x00013b; 	T(CMP(byte_37b7b, 0));	// 14964 cmp     byte_37B7B, 0 ;~ 0934:013B
cs=0x934;eip=0x000140; 	R(JZ(loc_17a40));	// 14965 jz      short loc_17A40 ;~ 0934:0140
cs=0x934;eip=0x000142; 	T(CMP(byte_37b7c, 1));	// 14966 cmp     byte_37B7C, 1 ;~ 0934:0142
cs=0x934;eip=0x000147; 	R(JNZ(loc_17a40));	// 14967 jnz     short loc_17A40 ;~ 0934:0147
cs=0x934;eip=0x000149; 	X(PUSH(cs));	// 14968 push    cs ;~ 0934:0149
cs=0x934;eip=0x00014a; 	R(CALL(sub_19392,0));	// 14969 call    near ptr sub_19392 ;~ 0934:014A
cs=0x934;eip=0x00014d; 	R(JMP(loc_17a4c));	// 14970 jmp     short loc_17A4C ;~ 0934:014D
loc_17a70:
	// 5152 
cs=0x934;eip=0x000150; 	T(CMP(byte_37b7b, 0));	// 14975 cmp     byte_37B7B, 0 ;~ 0934:0150
cs=0x934;eip=0x000155; 	R(JZ(loc_17aab));	// 14976 jz      short loc_17AAB ;~ 0934:0155
cs=0x934;eip=0x000157; 	T(CMP(byte_37b7c, 1));	// 14977 cmp     byte_37B7C, 1 ;~ 0934:0157
cs=0x934;eip=0x00015c; 	R(JNZ(loc_17aab));	// 14978 jnz     short loc_17AAB ;~ 0934:015C
cs=0x934;eip=0x00015e; 	T(MOV(ax, 1));	// 14979 mov     ax, 1 ;~ 0934:015E
cs=0x934;eip=0x000161; 	X(MOV(word_2beda, ax));	// 14980 mov     word_2BEDA, ax ;~ 0934:0161
cs=0x934;eip=0x000164; 	X(PUSH(ax));	// 14981 push    ax ;~ 0934:0164
cs=0x934;eip=0x000165; 	R(CALLF(sub_2714e,0));	// 14982 call    far ptr sub_2714E ;~ 0934:0165
cs=0x934;eip=0x00016a; 	T(ADD(sp, 2));	// 14983 add     sp, 2 ;~ 0934:016A
cs=0x934;eip=0x00016d; 	T(MOV(ax, 0x67));	// 14984 mov     ax, 67h ; 'g' ;~ 0934:016D
cs=0x934;eip=0x000170; 	X(PUSH(ax));	// 14985 push    ax ;~ 0934:0170
cs=0x934;eip=0x000171; 	X(PUSH(cs));	// 14986 push    cs ;~ 0934:0171
cs=0x934;eip=0x000172; 	R(CALL(sub_19586,0));	// 14987 call    near ptr sub_19586 ;~ 0934:0172
cs=0x934;eip=0x000175; 	T(ADD(sp, 2));	// 14988 add     sp, 2 ;~ 0934:0175
cs=0x934;eip=0x000178; 	T(SUB(ax, ax));	// 14989 sub     ax, ax ;~ 0934:0178
cs=0x934;eip=0x00017a; 	X(MOV(word_2beda, ax));	// 14990 mov     word_2BEDA, ax ;~ 0934:017A
cs=0x934;eip=0x00017d; 	X(PUSH(ax));	// 14991 push    ax ;~ 0934:017D
cs=0x934;eip=0x00017e; 	R(CALLF(sub_2714e,0));	// 14992 call    far ptr sub_2714E ;~ 0934:017E
cs=0x934;eip=0x000183; 	T(ADD(sp, 2));	// 14993 add     sp, 2 ;~ 0934:0183
cs=0x934;eip=0x000186; 	X(MOV(byte_34f30, 0));	// 14994 mov     byte_34F30, 0 ;~ 0934:0186
loc_17aab:
	// 5153 
cs=0x934;eip=0x00018b; 	X(MOV(byte_37b7c, 0));	// 14998 mov     byte_37B7C, 0 ;~ 0934:018B
cs=0x934;eip=0x000190; 	X(MOV(byte_2d518, 0));	// 14999 mov     byte_2D518, 0 ;~ 0934:0190
cs=0x934;eip=0x000195; 	T(SUB(ax, ax));	// 15000 sub     ax, ax ;~ 0934:0195
cs=0x934;eip=0x000197; 	X(PUSH(ax));	// 15001 push    ax ;~ 0934:0197
cs=0x934;eip=0x000198; 	R(CALLF(sub_1e56e,0));	// 15002 call    sub_1E56E ;~ 0934:0198
cs=0x934;eip=0x00019d; 	T(ADD(sp, 2));	// 15003 add     sp, 2 ;~ 0934:019D
cs=0x934;eip=0x0001a0; 	R(JMP(loc_17adf));	// 15004 jmp     short loc_17ADF ;~ 0934:01A0
loc_17ac2:
	// 5154 
cs=0x934;eip=0x0001a2; 	T(SUB(al, al));	// 15008 sub     al, al ;~ 0934:01A2
cs=0x934;eip=0x0001a4; 	X(MOV(byte_38a92, al));	// 15009 mov     byte_38A92, al ;~ 0934:01A4
cs=0x934;eip=0x0001a7; 	X(MOV(byte_3a170, al));	// 15010 mov     byte_3A170, al ;~ 0934:01A7
cs=0x934;eip=0x0001aa; 	X(MOV(byte_3a3f6, al));	// 15011 mov     byte_3A3F6, al ;~ 0934:01AA
cs=0x934;eip=0x0001ad; 	T(MOV(bl, byte_37517));	// 15012 mov     bl, byte_37517 ;~ 0934:01AD
cs=0x934;eip=0x0001b1; 	T(SUB(bh, bh));	// 15013 sub     bh, bh ;~ 0934:01B1
cs=0x934;eip=0x0001b3; 	T(MOV(al, *(raddr(ds,bx-0x1A9B))));	// 15014 mov     al, [bx-1A9Bh] ;~ 0934:01B3
cs=0x934;eip=0x0001b7; 	X(MOV(byte_38a97, al));	// 15015 mov     byte_38A97, al ;~ 0934:01B7
cs=0x934;eip=0x0001ba; 	T(INC(al));	// 15016 inc     al ;~ 0934:01BA
cs=0x934;eip=0x0001bc; 	X(MOV(byte_38cd4, al));	// 15017 mov     byte_38CD4, al ;~ 0934:01BC
loc_17adf:
	// 5155 
cs=0x934;eip=0x0001bf; 	T(MOV(al, byte_352cb));	// 15021 mov     al, byte_352CB ;~ 0934:01BF
cs=0x934;eip=0x0001c2; 	T(CMP(byte_3a8b8, al));	// 15022 cmp     byte_3A8B8, al ;~ 0934:01C2
cs=0x934;eip=0x0001c6; 	R(JZ(loc_17af0));	// 15023 jz      short loc_17AF0 ;~ 0934:01C6
cs=0x934;eip=0x0001c8; 	T(OR(al, al));	// 15024 or      al, al ;~ 0934:01C8
cs=0x934;eip=0x0001ca; 	R(JNZ(loc_17af0));	// 15025 jnz     short loc_17AF0 ;~ 0934:01CA
cs=0x934;eip=0x0001cc; 	X(PUSH(cs));	// 15026 push    cs ;~ 0934:01CC
cs=0x934;eip=0x0001cd; 	R(CALL(sub_17dea,0));	// 15027 call    near ptr sub_17DEA ;~ 0934:01CD
loc_17af0:
	// 5156 
cs=0x934;eip=0x0001d0; 	T(MOV(al, byte_352cb));	// 15031 mov     al, byte_352CB ;~ 0934:01D0
cs=0x934;eip=0x0001d3; 	T(CMP(byte_3a8b8, al));	// 15032 cmp     byte_3A8B8, al ;~ 0934:01D3
cs=0x934;eip=0x0001d7; 	R(JZ(loc_17b01));	// 15033 jz      short loc_17B01 ;~ 0934:01D7
cs=0x934;eip=0x0001d9; 	T(OR(al, al));	// 15034 or      al, al ;~ 0934:01D9
cs=0x934;eip=0x0001db; 	R(JZ(loc_17b01));	// 15035 jz      short loc_17B01 ;~ 0934:01DB
cs=0x934;eip=0x0001dd; 	X(PUSH(cs));	// 15036 push    cs ;~ 0934:01DD
cs=0x934;eip=0x0001de; 	R(CALL(sub_17eba,0));	// 15037 call    near ptr sub_17EBA ;~ 0934:01DE
loc_17b01:
	// 5157 
cs=0x934;eip=0x0001e1; 	T(MOV(al, byte_352cb));	// 15041 mov     al, byte_352CB ;~ 0934:01E1
cs=0x934;eip=0x0001e4; 	X(MOV(byte_3a8b8, al));	// 15042 mov     byte_3A8B8, al ;~ 0934:01E4
cs=0x934;eip=0x0001e7; 	T(CMP(byte_352ca, 0));	// 15043 cmp     byte_352CA, 0 ;~ 0934:01E7
cs=0x934;eip=0x0001ec; 	R(JNZ(loc_17b16));	// 15044 jnz     short loc_17B16 ;~ 0934:01EC
cs=0x934;eip=0x0001ee; 	T(MOV(ax, word_2beca));	// 15045 mov     ax, word_2BECA ;~ 0934:01EE
cs=0x934;eip=0x0001f1; 	X(MOV(word_3a5b4, ax));	// 15046 mov     word_3A5B4, ax ;~ 0934:01F1
cs=0x934;eip=0x0001f4; 	R(JMP(loc_17b1b));	// 15047 jmp     short loc_17B1B ;~ 0934:01F4
loc_17b16:
	// 5158 
cs=0x934;eip=0x0001f6; 	X(MOV(byte_352ca, 0));	// 15051 mov     byte_352CA, 0 ;~ 0934:01F6
loc_17b1b:
	// 5159 
cs=0x934;eip=0x0001fb; 	T(CMP(word_2beca, 2));	// 15054 cmp     word_2BECA, 2 ;~ 0934:01FB
cs=0x934;eip=0x000200; 	R(JNZ(loc_17b30));	// 15055 jnz     short loc_17B30 ;~ 0934:0200
cs=0x934;eip=0x000202; 	X(MOV(byte_37547, 1));	// 15056 mov     byte_37547, 1 ;~ 0934:0202
cs=0x934;eip=0x000207; 	X(MOV(word_2beca, 1));	// 15057 mov     word_2BECA, 1 ;~ 0934:0207
cs=0x934;eip=0x00020d; 	R(JMP(loc_17cd4));	// 15058 jmp     loc_17CD4 ;~ 0934:020D
loc_17b30:
	// 5160 
cs=0x934;eip=0x000210; 	T(SUB(ax, ax));	// 15062 sub     ax, ax ;~ 0934:0210
cs=0x934;eip=0x000212; 	X(MOV(word_2beda, ax));	// 15063 mov     word_2BEDA, ax ;~ 0934:0212
cs=0x934;eip=0x000215; 	X(PUSH(ax));	// 15064 push    ax ;~ 0934:0215
cs=0x934;eip=0x000216; 	R(CALLF(sub_2714e,0));	// 15065 call    far ptr sub_2714E ;~ 0934:0216
cs=0x934;eip=0x00021b; 	T(ADD(sp, 2));	// 15066 add     sp, 2 ;~ 0934:021B
loc_17b3e:
	// 5161 
cs=0x934;eip=0x00021e; 	T(CMP(word_352c8, 0));	// 15069 cmp     word_352C8, 0 ;~ 0934:021E
cs=0x934;eip=0x000223; 	R(JZ(loc_17b5a));	// 15070 jz      short loc_17B5A ;~ 0934:0223
cs=0x934;eip=0x000225; 	T(MOV(ax, word_352c8));	// 15071 mov     ax, word_352C8 ;~ 0934:0225
cs=0x934;eip=0x000228; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 15072 mov     [bp+var_2], ax ;~ 0934:0228
cs=0x934;eip=0x00022b; 	X(MOV(word_352c8, 0));	// 15073 mov     word_352C8, 0 ;~ 0934:022B
cs=0x934;eip=0x000231; 	X(PUSH(ax));	// 15074 push    ax ;~ 0934:0231
cs=0x934;eip=0x000232; 	R(CALLF(sub_1179c,0));	// 15075 call    sub_1179C ;~ 0934:0232
cs=0x934;eip=0x000237; 	T(ADD(sp, 2));	// 15076 add     sp, 2 ;~ 0934:0237
loc_17b5a:
	// 5162 
cs=0x934;eip=0x00023a; 	R(CALLF(sub_2580c,0));	// 15079 call    sub_2580C ;~ 0934:023A
cs=0x934;eip=0x00023f; 	T(SUB(ax, ax));	// 15080 sub     ax, ax ;~ 0934:023F
cs=0x934;eip=0x000241; 	X(PUSH(ax));	// 15081 push    ax ;~ 0934:0241
cs=0x934;eip=0x000242; 	X(PUSH(cs));	// 15082 push    cs ;~ 0934:0242
cs=0x934;eip=0x000243; 	R(CALL(sub_17d34,0));	// 15083 call    near ptr sub_17D34 ;~ 0934:0243
cs=0x934;eip=0x000246; 	T(ADD(sp, 2));	// 15084 add     sp, 2 ;~ 0934:0246
cs=0x934;eip=0x000249; 	R(CALLF(sub_258f5,0));	// 15085 call    sub_258F5 ;~ 0934:0249
cs=0x934;eip=0x00024e; 	T(MOV(ax, 1));	// 15086 mov     ax, 1 ;~ 0934:024E
cs=0x934;eip=0x000251; 	X(PUSH(ax));	// 15087 push    ax ;~ 0934:0251
cs=0x934;eip=0x000252; 	X(PUSH(cs));	// 15088 push    cs ;~ 0934:0252
cs=0x934;eip=0x000253; 	R(CALL(sub_17d34,0));	// 15089 call    near ptr sub_17D34 ;~ 0934:0253
cs=0x934;eip=0x000256; 	T(ADD(sp, 2));	// 15090 add     sp, 2 ;~ 0934:0256
cs=0x934;eip=0x000259; 	T(CMP(byte_375cd, 0));	// 15091 cmp     byte_375CD, 0 ;~ 0934:0259
cs=0x934;eip=0x00025e; 	R(JNZ(loc_17b97));	// 15092 jnz     short loc_17B97 ;~ 0934:025E
cs=0x934;eip=0x000260; 	T(CMP(byte_352cb, 0));	// 15093 cmp     byte_352CB, 0 ;~ 0934:0260
cs=0x934;eip=0x000265; 	R(JNZ(loc_17b97));	// 15094 jnz     short loc_17B97 ;~ 0934:0265
cs=0x934;eip=0x000267; 	X(PUSH(cs));	// 15095 push    cs ;~ 0934:0267
cs=0x934;eip=0x000268; 	R(CALL(sub_189e8,0));	// 15096 call    near ptr sub_189E8 ;~ 0934:0268
cs=0x934;eip=0x00026b; 	X(PUSH(cs));	// 15097 push    cs ;~ 0934:026B
cs=0x934;eip=0x00026c; 	R(CALL(sub_18ef4,0));	// 15098 call    near ptr sub_18EF4 ;~ 0934:026C
cs=0x934;eip=0x00026f; 	X(PUSH(cs));	// 15099 push    cs ;~ 0934:026F
cs=0x934;eip=0x000270; 	R(CALL(sub_18fe4,0));	// 15100 call    near ptr sub_18FE4 ;~ 0934:0270
cs=0x934;eip=0x000273; 	X(PUSH(cs));	// 15101 push    cs ;~ 0934:0273
cs=0x934;eip=0x000274; 	R(CALL(sub_19272,0));	// 15102 call    near ptr sub_19272 ;~ 0934:0274
loc_17b97:
	// 5163 
cs=0x934;eip=0x000277; 	T(CMP(word_2beca, 3));	// 15106 cmp     word_2BECA, 3 ;~ 0934:0277
cs=0x934;eip=0x00027c; 	R(JZ(loc_17baa));	// 15107 jz      short loc_17BAA ;~ 0934:027C
cs=0x934;eip=0x00027e; 	T(CMP(word_2beca, 2));	// 15108 cmp     word_2BECA, 2 ;~ 0934:027E
cs=0x934;eip=0x000283; 	R(JZ(loc_17baa));	// 15109 jz      short loc_17BAA ;~ 0934:0283
cs=0x934;eip=0x000285; 	R(CALLF(sub_1d598,0));	// 15110 call    sub_1D598 ;~ 0934:0285
loc_17baa:
	// 5164 
cs=0x934;eip=0x00028a; 	T(MOV(ax, 2));	// 15114 mov     ax, 2 ;~ 0934:028A
cs=0x934;eip=0x00028d; 	X(PUSH(ax));	// 15115 push    ax ;~ 0934:028D
cs=0x934;eip=0x00028e; 	X(PUSH(cs));	// 15116 push    cs ;~ 0934:028E
cs=0x934;eip=0x00028f; 	R(CALL(sub_17d34,0));	// 15117 call    near ptr sub_17D34 ;~ 0934:028F
cs=0x934;eip=0x000292; 	T(ADD(sp, 2));	// 15118 add     sp, 2 ;~ 0934:0292
cs=0x934;eip=0x000295; 	R(CALLF(sub_10f58,0));	// 15119 call    sub_10F58 ;~ 0934:0295
cs=0x934;eip=0x00029a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 15120 mov     [bp+var_2], ax ;~ 0934:029A
cs=0x934;eip=0x00029d; 	T(MOV(al, byte_378db));	// 15121 mov     al, byte_378DB ;~ 0934:029D
cs=0x934;eip=0x0002a0; 	T(CMP(byte_38a90, al));	// 15122 cmp     byte_38A90, al ;~ 0934:02A0
cs=0x934;eip=0x0002a4; 	R(JZ(loc_17c1d));	// 15123 jz      short loc_17C1D ;~ 0934:02A4
cs=0x934;eip=0x0002a6; 	T(CMP(byte_352cb, 0));	// 15124 cmp     byte_352CB, 0 ;~ 0934:02A6
cs=0x934;eip=0x0002ab; 	R(JNZ(loc_17c17));	// 15125 jnz     short loc_17C17 ;~ 0934:02AB
cs=0x934;eip=0x0002ad; 	T(SUB(ah, ah));	// 15126 sub     ah, ah ;~ 0934:02AD
cs=0x934;eip=0x0002af; 	T(CMP(ax, 0x1C));	// 15127 cmp     ax, 1Ch ;~ 0934:02AF
cs=0x934;eip=0x0002b2; 	R(JZ(loc_17bec));	// 15128 jz      short loc_17BEC ;~ 0934:02B2
cs=0x934;eip=0x0002b4; 	T(CMP(ax, 0x1D));	// 15129 cmp     ax, 1Dh ;~ 0934:02B4
cs=0x934;eip=0x0002b7; 	R(JZ(loc_17c56));	// 15130 jz      short loc_17C56 ;~ 0934:02B7
cs=0x934;eip=0x0002b9; 	T(CMP(ax, 0x1E));	// 15131 cmp     ax, 1Eh ;~ 0934:02B9
cs=0x934;eip=0x0002bc; 	R(JNZ(loc_17be1));	// 15132 jnz     short loc_17BE1 ;~ 0934:02BC
cs=0x934;eip=0x0002be; 	R(JMP(loc_17c96));	// 15133 jmp     loc_17C96 ;~ 0934:02BE
loc_17be1:
	// 5165 
cs=0x934;eip=0x0002c1; 	T(CMP(ax, 0x1F));	// 15137 cmp     ax, 1Fh ;~ 0934:02C1
cs=0x934;eip=0x0002c4; 	R(JNZ(loc_17be9));	// 15138 jnz     short loc_17BE9 ;~ 0934:02C4
cs=0x934;eip=0x0002c6; 	R(JMP(loc_17cca));	// 15139 jmp     loc_17CCA ;~ 0934:02C6
loc_17be9:
	// 5166 
cs=0x934;eip=0x0002c9; 	R(JMP(loc_17c17));	// 15143 jmp     short loc_17C17 ;~ 0934:02C9
loc_17bec:
	// 5167 
cs=0x934;eip=0x0002cc; 	T(CMP(*(db*)(((db*)&word_37ab9)), 0));	// 15148 cmp     byte ptr word_37AB9, 0 ;~ 0934:02CC
cs=0x934;eip=0x0002d1; 	R(JNZ(loc_17bf8));	// 15149 jnz     short loc_17BF8 ;~ 0934:02D1
cs=0x934;eip=0x0002d3; 	X(MOV(byte_3a380, 1));	// 15150 mov     byte_3A380, 1 ;~ 0934:02D3
loc_17bf8:
	// 5168 
cs=0x934;eip=0x0002d8; 	T(CMP(*(db*)(((db*)&word_37ab9)), 4));	// 15153 cmp     byte ptr word_37AB9, 4 ;~ 0934:02D8
cs=0x934;eip=0x0002dd; 	R(JNZ(loc_17c04));	// 15154 jnz     short loc_17C04 ;~ 0934:02DD
cs=0x934;eip=0x0002df; 	X(MOV(byte_3a380, 0));	// 15155 mov     byte_3A380, 0 ;~ 0934:02DF
loc_17c04:
	// 5169 
cs=0x934;eip=0x0002e4; 	T(CMP(byte_3a380, 1));	// 15158 cmp     byte_3A380, 1 ;~ 0934:02E4
cs=0x934;eip=0x0002e9; 	R(JNZ(loc_17c12));	// 15159 jnz     short loc_17C12 ;~ 0934:02E9
cs=0x934;eip=0x0002eb; 	X(ADD(*(db*)(((db*)&word_37ab9)), 2));	// 15160 add     byte ptr word_37AB9, 2 ;~ 0934:02EB
cs=0x934;eip=0x0002f0; 	R(JMP(loc_17c17));	// 15161 jmp     short loc_17C17 ;~ 0934:02F0
loc_17c12:
	// 5170 
cs=0x934;eip=0x0002f2; 	X(SUB(*(db*)(((db*)&word_37ab9)), 2));	// 15165 sub     byte ptr word_37AB9, 2 ;~ 0934:02F2
loc_17c17:
	// 5171 
cs=0x934;eip=0x0002f7; 	T(MOV(al, byte_378db));	// 15169 mov     al, byte_378DB ;~ 0934:02F7
cs=0x934;eip=0x0002fa; 	X(MOV(byte_38a90, al));	// 15170 mov     byte_38A90, al ;~ 0934:02FA
loc_17c1d:
	// 5172 
cs=0x934;eip=0x0002fd; 	T(CMP(byte_2bec8, 0));	// 15173 cmp     byte_2BEC8, 0 ;~ 0934:02FD
cs=0x934;eip=0x000302; 	R(JNZ(loc_17c3d));	// 15174 jnz     short loc_17C3D ;~ 0934:0302
cs=0x934;eip=0x000304; 	T(CMP(byte_3754c, 2));	// 15175 cmp     byte_3754C, 2 ;~ 0934:0304
cs=0x934;eip=0x000309; 	R(JNZ(loc_17c3d));	// 15176 jnz     short loc_17C3D ;~ 0934:0309
cs=0x934;eip=0x00030b; 	T(MOV(ax, 0x1F));	// 15177 mov     ax, 1Fh ;~ 0934:030B
cs=0x934;eip=0x00030e; 	X(PUSH(ax));	// 15178 push    ax ;~ 0934:030E
cs=0x934;eip=0x00030f; 	R(CALLF(sub_1179c,0));	// 15179 call    sub_1179C ;~ 0934:030F
cs=0x934;eip=0x000314; 	T(ADD(sp, 2));	// 15180 add     sp, 2 ;~ 0934:0314
cs=0x934;eip=0x000317; 	X(MOV(word_2beca, 3));	// 15181 mov     word_2BECA, 3 ;~ 0934:0317
loc_17c3d:
	// 5173 
cs=0x934;eip=0x00031d; 	T(MOV(ax, word_2bee0));	// 15185 mov     ax, word_2BEE0 ;~ 0934:031D
cs=0x934;eip=0x000320; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_4))));	// 15186 sub     ax, [bp+var_4] ;~ 0934:0320
cs=0x934;eip=0x000323; 	T(CMP(ax, 5));	// 15187 cmp     ax, 5 ;~ 0934:0323
cs=0x934;eip=0x000326; 	R(JC(loc_17c4b));	// 15188 jb      short loc_17C4B ;~ 0934:0326
cs=0x934;eip=0x000328; 	R(JMP(loc_17cd4));	// 15189 jmp     loc_17CD4 ;~ 0934:0328
loc_17c4b:
	// 5174 
cs=0x934;eip=0x00032b; 	R(CALLF(sub_10f58,0));	// 15193 call    sub_10F58 ;~ 0934:032B
cs=0x934;eip=0x000330; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 15194 mov     [bp+var_2], ax ;~ 0934:0330
cs=0x934;eip=0x000333; 	R(JMP(loc_17c3d));	// 15195 jmp     short loc_17C3D ;~ 0934:0333
loc_17c56:
	// 5175 
cs=0x934;eip=0x000336; 	T(CMP(*(db*)(((db*)&word_37ab5)), 0));	// 15200 cmp     byte ptr word_37AB5, 0 ;~ 0934:0336
cs=0x934;eip=0x00033b; 	R(JNZ(loc_17c62));	// 15201 jnz     short loc_17C62 ;~ 0934:033B
cs=0x934;eip=0x00033d; 	X(MOV(byte_3a380, 1));	// 15202 mov     byte_3A380, 1 ;~ 0934:033D
loc_17c62:
	// 5176 
cs=0x934;eip=0x000342; 	T(CMP(*(db*)(((db*)&word_37ab5)), 8));	// 15205 cmp     byte ptr word_37AB5, 8 ;~ 0934:0342
cs=0x934;eip=0x000347; 	R(JNZ(loc_17c6e));	// 15206 jnz     short loc_17C6E ;~ 0934:0347
cs=0x934;eip=0x000349; 	X(MOV(byte_3a380, 0));	// 15207 mov     byte_3A380, 0 ;~ 0934:0349
loc_17c6e:
	// 5177 
cs=0x934;eip=0x00034e; 	T(CMP(byte_3a380, 1));	// 15210 cmp     byte_3A380, 1 ;~ 0934:034E
cs=0x934;eip=0x000353; 	R(JNZ(loc_17c82));	// 15211 jnz     short loc_17C82 ;~ 0934:0353
cs=0x934;eip=0x000355; 	X(ADD(*(db*)(((db*)&word_37ab5)), 4));	// 15212 add     byte ptr word_37AB5, 4 ;~ 0934:0355
loc_17c7a:
	// 5178 
cs=0x934;eip=0x00035a; 	X(MOV(byte_35408, 1));	// 15215 mov     byte_35408, 1 ;~ 0934:035A
cs=0x934;eip=0x00035f; 	R(JMP(loc_17c8e));	// 15216 jmp     short loc_17C8E ;~ 0934:035F
loc_17c82:
	// 5179 
cs=0x934;eip=0x000362; 	X(SUB(*(db*)(((db*)&word_37ab5)), 4));	// 15221 sub     byte ptr word_37AB5, 4 ;~ 0934:0362
loc_17c87:
	// 5180 
cs=0x934;eip=0x000367; 	R(JNZ(loc_17c8e));	// 15224 jnz     short loc_17C8E ;~ 0934:0367
cs=0x934;eip=0x000369; 	X(MOV(byte_35408, 0));	// 15225 mov     byte_35408, 0 ;~ 0934:0369
loc_17c8e:
	// 5181 
cs=0x934;eip=0x00036e; 	R(CALLF(sub_2073c,0));	// 15229 call    sub_2073C ;~ 0934:036E
cs=0x934;eip=0x000373; 	R(JMP(loc_17c17));	// 15230 jmp     short loc_17C17 ;~ 0934:0373
loc_17c96:
	// 5182 
cs=0x934;eip=0x000376; 	X(MOV(*(db*)(((db*)&word_37ab5)), 0));	// 15235 mov     byte ptr word_37AB5, 0 ;~ 0934:0376
cs=0x934;eip=0x00037b; 	T(CMP(*(db*)(((db*)&word_37ab7)), 0));	// 15236 cmp     byte ptr word_37AB7, 0 ;~ 0934:037B
cs=0x934;eip=0x000380; 	R(JNZ(loc_17ca7));	// 15237 jnz     short loc_17CA7 ;~ 0934:0380
cs=0x934;eip=0x000382; 	X(MOV(byte_3a380, 1));	// 15238 mov     byte_3A380, 1 ;~ 0934:0382
loc_17ca7:
	// 5183 
cs=0x934;eip=0x000387; 	T(CMP(*(db*)(((db*)&word_37ab7)), 8));	// 15241 cmp     byte ptr word_37AB7, 8 ;~ 0934:0387
cs=0x934;eip=0x00038c; 	R(JNZ(loc_17cb3));	// 15242 jnz     short loc_17CB3 ;~ 0934:038C
cs=0x934;eip=0x00038e; 	X(MOV(byte_3a380, 0));	// 15243 mov     byte_3A380, 0 ;~ 0934:038E
loc_17cb3:
	// 5184 
cs=0x934;eip=0x000393; 	T(CMP(byte_3a380, 1));	// 15246 cmp     byte_3A380, 1 ;~ 0934:0393
cs=0x934;eip=0x000398; 	R(JNZ(loc_17cc2));	// 15247 jnz     short loc_17CC2 ;~ 0934:0398
cs=0x934;eip=0x00039a; 	X(ADD(*(db*)(((db*)&word_37ab7)), 4));	// 15248 add     byte ptr word_37AB7, 4 ;~ 0934:039A
cs=0x934;eip=0x00039f; 	R(JMP(loc_17c7a));	// 15249 jmp     short loc_17C7A ;~ 0934:039F
loc_17cc2:
	// 5185 
cs=0x934;eip=0x0003a2; 	X(SUB(*(db*)(((db*)&word_37ab7)), 4));	// 15254 sub     byte ptr word_37AB7, 4 ;~ 0934:03A2
cs=0x934;eip=0x0003a7; 	R(JMP(loc_17c87));	// 15255 jmp     short loc_17C87 ;~ 0934:03A7
loc_17cca:
	// 5186 
cs=0x934;eip=0x0003aa; 	X(MOV(word_2beca, 3));	// 15260 mov     word_2BECA, 3 ;~ 0934:03AA
cs=0x934;eip=0x0003b0; 	R(JMP(loc_17c17));	// 15261 jmp     loc_17C17 ;~ 0934:03B0
loc_17cd4:
	// 5187 
cs=0x934;eip=0x0003b4; 	T(CMP(word_2beca, 3));	// 15267 cmp     word_2BECA, 3 ;~ 0934:03B4
cs=0x934;eip=0x0003b9; 	R(JZ(loc_17cde));	// 15268 jz      short loc_17CDE ;~ 0934:03B9
cs=0x934;eip=0x0003bb; 	R(JMP(loc_179aa));	// 15269 jmp     loc_179AA ;~ 0934:03BB
loc_17cde:
	// 5188 
cs=0x934;eip=0x0003be; 	T(CMP(byte_2c949, 0));	// 15273 cmp     byte_2C949, 0 ;~ 0934:03BE
cs=0x934;eip=0x0003c3; 	R(JZ(loc_17cea));	// 15274 jz      short loc_17CEA ;~ 0934:03C3
cs=0x934;eip=0x0003c5; 	R(CALLF(sub_2431d,0));	// 15275 call    sub_2431D ;~ 0934:03C5
loc_17cea:
	// 5189 
cs=0x934;eip=0x0003ca; 	X(MOV(byte_352bc, 1));	// 15278 mov     byte_352BC, 1 ;~ 0934:03CA
cs=0x934;eip=0x0003cf; 	R(CALLF(sub_1f0c1,0));	// 15279 call    sub_1F0C1 ;~ 0934:03CF
cs=0x934;eip=0x0003d4; 	T(SUB(ax, ax));	// 15280 sub     ax, ax ;~ 0934:03D4
cs=0x934;eip=0x0003d6; 	X(PUSH(ax));	// 15281 push    ax ;~ 0934:03D6
cs=0x934;eip=0x0003d7; 	R(CALLF(sub_1d2d0,0));	// 15282 call    sub_1D2D0 ;~ 0934:03D7
cs=0x934;eip=0x0003dc; 	T(ADD(sp, 2));	// 15283 add     sp, 2 ;~ 0934:03DC
cs=0x934;eip=0x0003df; 	R(CALLF(sub_13b96,0));	// 15284 call    sub_13B96 ;~ 0934:03DF
cs=0x934;eip=0x0003e4; 	T(SUB(ax, ax));	// 15285 sub     ax, ax ;~ 0934:03E4
cs=0x934;eip=0x0003e6; 	X(MOV(word_2beda, ax));	// 15286 mov     word_2BEDA, ax ;~ 0934:03E6
cs=0x934;eip=0x0003e9; 	X(PUSH(ax));	// 15287 push    ax ;~ 0934:03E9
cs=0x934;eip=0x0003ea; 	R(CALLF(sub_2714e,0));	// 15288 call    far ptr sub_2714E ;~ 0934:03EA
cs=0x934;eip=0x0003ef; 	T(ADD(sp, 2));	// 15289 add     sp, 2 ;~ 0934:03EF
cs=0x934;eip=0x0003f2; 	T(SUB(ax, ax));	// 15290 sub     ax, ax ;~ 0934:03F2
cs=0x934;eip=0x0003f4; 	X(PUSH(ax));	// 15291 push    ax ;~ 0934:03F4
cs=0x934;eip=0x0003f5; 	R(CALLF(sub_27031,0));	// 15292 call    far ptr sub_27031 ;~ 0934:03F5
cs=0x934;eip=0x0003fa; 	T(ADD(sp, 2));	// 15293 add     sp, 2 ;~ 0934:03FA
cs=0x934;eip=0x0003fd; 	T(MOV(ax, 0x0C7));	// 15294 mov     ax, 0C7h ; '«' ;~ 0934:03FD
cs=0x934;eip=0x000400; 	X(PUSH(ax));	// 15295 push    ax ;~ 0934:0400
cs=0x934;eip=0x000401; 	T(SUB(ax, ax));	// 15296 sub     ax, ax ;~ 0934:0401
cs=0x934;eip=0x000403; 	X(PUSH(ax));	// 15297 push    ax ;~ 0934:0403
cs=0x934;eip=0x000404; 	T(MOV(ax, 0x13F));	// 15298 mov     ax, 13Fh ;~ 0934:0404
cs=0x934;eip=0x000407; 	X(PUSH(ax));	// 15299 push    ax ;~ 0934:0407
cs=0x934;eip=0x000408; 	T(SUB(ax, ax));	// 15300 sub     ax, ax ;~ 0934:0408
cs=0x934;eip=0x00040a; 	X(PUSH(ax));	// 15301 push    ax ;~ 0934:040A
cs=0x934;eip=0x00040b; 	R(CALLF(sub_2785b,0));	// 15302 call    far ptr sub_2785B ;~ 0934:040B
cs=0x934;eip=0x000410; 	T(MOV(sp, bp));	// 15303 mov     sp, bp ;~ 0934:0410
cs=0x934;eip=0x000412; 	X(POP(bp));	// 15304 pop     bp ;~ 0934:0412
cs=0x934;eip=0x000413; 	R(RETF(0));	// 15305 retf ;~ 0934:0413
sub_17d34:
	// 15313 
#undef var_2
#define var_2 -2
	// 15316 var_2           = word ptr -2 ;~ 0934:0414
#undef arg_0
#define arg_0 6
	// 15317 arg_0           = word ptr  6 ;~ 0934:0414
ret_934_414:
	// 5190 
cs=0x934;eip=0x000414; 	X(PUSH(bp));	// 15319 push    bp ;~ 0934:0414
cs=0x934;eip=0x000415; 	T(MOV(bp, sp));	// 15320 mov     bp, sp ;~ 0934:0415
cs=0x934;eip=0x000417; 	T(SUB(sp, 2));	// 15321 sub     sp, 2 ;~ 0934:0417
cs=0x934;eip=0x00041a; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 2));	// 15322 cmp     [bp+arg_0], 2 ;~ 0934:041A
cs=0x934;eip=0x00041e; 	R(JZ(loc_17d72));	// 15323 jz      short loc_17D72 ;~ 0934:041E
cs=0x934;eip=0x000420; 	T(CMP(word_2bed2, 0));	// 15324 cmp     word_2BED2, 0 ;~ 0934:0420
cs=0x934;eip=0x000425; 	R(JNZ(loc_17d4e));	// 15325 jnz     short loc_17D4E ;~ 0934:0425
loc_17d47:
	// 5191 
cs=0x934;eip=0x000427; 	R(CALLF(sub_1e1a0,0));	// 15328 call    sub_1E1A0 ;~ 0934:0427
cs=0x934;eip=0x00042c; 	R(JMP(loc_17d83));	// 15329 jmp     short loc_17D83 ;~ 0934:042C
loc_17d4e:
	// 5192 
cs=0x934;eip=0x00042e; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 15333 cmp     [bp+arg_0], 0 ;~ 0934:042E
cs=0x934;eip=0x000432; 	R(JZ(loc_17d61));	// 15334 jz      short loc_17D61 ;~ 0934:0432
cs=0x934;eip=0x000434; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 1));	// 15335 cmp     [bp+arg_0], 1 ;~ 0934:0434
cs=0x934;eip=0x000438; 	R(JNZ(loc_17d83));	// 15336 jnz     short loc_17D83 ;~ 0934:0438
cs=0x934;eip=0x00043a; 	T(CMP(byte_3754e, 0x28));	// 15337 cmp     byte_3754E, 28h ; '(' ;~ 0934:043A
cs=0x934;eip=0x00043f; 	R(JBE(loc_17d83));	// 15338 jbe     short loc_17D83 ;~ 0934:043F
loc_17d61:
	// 5193 
cs=0x934;eip=0x000441; 	T(ax = bp+var_2);	// 15341 lea     ax, [bp+var_2] ;~ 0934:0441
cs=0x934;eip=0x000444; 	X(PUSH(ax));	// 15342 push    ax ;~ 0934:0444
cs=0x934;eip=0x000445; 	R(CALLF(sub_11e44,0));	// 15343 call    sub_11E44 ;~ 0934:0445
cs=0x934;eip=0x00044a; 	T(ADD(sp, 2));	// 15344 add     sp, 2 ;~ 0934:044A
cs=0x934;eip=0x00044d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 15345 mov     [bp+var_2], ax ;~ 0934:044D
cs=0x934;eip=0x000450; 	R(JMP(loc_17d47));	// 15346 jmp     short loc_17D47 ;~ 0934:0450
loc_17d72:
	// 5194 
cs=0x934;eip=0x000452; 	T(ax = bp+var_2);	// 15350 lea     ax, [bp+var_2] ;~ 0934:0452
cs=0x934;eip=0x000455; 	X(PUSH(ax));	// 15351 push    ax ;~ 0934:0455
cs=0x934;eip=0x000456; 	R(CALLF(sub_10f80,0));	// 15352 call    sub_10F80 ;~ 0934:0456
cs=0x934;eip=0x00045b; 	T(ADD(sp, 2));	// 15353 add     sp, 2 ;~ 0934:045B
cs=0x934;eip=0x00045e; 	R(CALLF(sub_1e1a4,0));	// 15354 call    sub_1E1A4 ;~ 0934:045E
loc_17d83:
	// 5195 
cs=0x934;eip=0x000463; 	T(CMP(byte_375cd, 0));	// 15358 cmp     byte_375CD, 0 ;~ 0934:0463
cs=0x934;eip=0x000468; 	R(JNZ(loc_17de5));	// 15359 jnz     short loc_17DE5 ;~ 0934:0468
cs=0x934;eip=0x00046a; 	T(CMP(byte_352cb, 0));	// 15360 cmp     byte_352CB, 0 ;~ 0934:046A
cs=0x934;eip=0x00046f; 	R(JNZ(loc_17de5));	// 15361 jnz     short loc_17DE5 ;~ 0934:046F
cs=0x934;eip=0x000471; 	T(MOV(ax, word_2d08e));	// 15362 mov     ax, word_2D08E ;~ 0934:0471
cs=0x934;eip=0x000474; 	T(OR(ax, word_2d090));	// 15363 or      ax, word_2D090 ;~ 0934:0474
cs=0x934;eip=0x000478; 	R(JZ(loc_17de1));	// 15364 jz      short loc_17DE1 ;~ 0934:0478
cs=0x934;eip=0x00047a; 	T(CMP(byte_37544, 0));	// 15365 cmp     byte_37544, 0 ;~ 0934:047A
cs=0x934;eip=0x00047f; 	R(JNZ(loc_17de1));	// 15366 jnz     short loc_17DE1 ;~ 0934:047F
cs=0x934;eip=0x000481; 	T(CMP(byte_3750a, 0));	// 15367 cmp     byte_3750A, 0 ;~ 0934:0481
cs=0x934;eip=0x000486; 	R(JNZ(loc_17de1));	// 15368 jnz     short loc_17DE1 ;~ 0934:0486
cs=0x934;eip=0x000488; 	T(CMP(byte_3751a, 0));	// 15369 cmp     byte_3751A, 0 ;~ 0934:0488
cs=0x934;eip=0x00048d; 	R(JZ(loc_17de1));	// 15370 jz      short loc_17DE1 ;~ 0934:048D
cs=0x934;eip=0x00048f; 	T(TEST(*(db*)(((db*)&word_37b79)), 1));	// 15371 test    byte ptr word_37B79, 1 ;~ 0934:048F
cs=0x934;eip=0x000494; 	R(JNZ(loc_17de1));	// 15372 jnz     short loc_17DE1 ;~ 0934:0494
cs=0x934;eip=0x000496; 	T(CMP(byte_3a17a, 0x0E));	// 15373 cmp     byte_3A17A, 0Eh ;~ 0934:0496
cs=0x934;eip=0x00049b; 	R(JC(loc_17dc9));	// 15374 jb      short loc_17DC9 ;~ 0934:049B
cs=0x934;eip=0x00049d; 	T(CMP(byte_3a17a, 0x12));	// 15375 cmp     byte_3A17A, 12h ;~ 0934:049D
cs=0x934;eip=0x0004a2; 	R(JA(loc_17dc9));	// 15376 ja      short loc_17DC9 ;~ 0934:04A2
cs=0x934;eip=0x0004a4; 	X(MOV(byte_3a17a, 0x10));	// 15377 mov     byte_3A17A, 10h ;~ 0934:04A4
loc_17dc9:
	// 5196 
cs=0x934;eip=0x0004a9; 	T(CMP(byte_3a17a, 0x0E));	// 15381 cmp     byte_3A17A, 0Eh ;~ 0934:04A9
cs=0x934;eip=0x0004ae; 	R(JNC(loc_17dd5));	// 15382 jnb     short loc_17DD5 ;~ 0934:04AE
cs=0x934;eip=0x0004b0; 	X(ADD(byte_3a17a, 2));	// 15383 add     byte_3A17A, 2 ;~ 0934:04B0
loc_17dd5:
	// 5197 
cs=0x934;eip=0x0004b5; 	T(CMP(byte_3a17a, 0x12));	// 15386 cmp     byte_3A17A, 12h ;~ 0934:04B5
cs=0x934;eip=0x0004ba; 	R(JBE(loc_17de1));	// 15387 jbe     short loc_17DE1 ;~ 0934:04BA
cs=0x934;eip=0x0004bc; 	X(SUB(byte_3a17a, 2));	// 15388 sub     byte_3A17A, 2 ;~ 0934:04BC
loc_17de1:
	// 5198 
cs=0x934;eip=0x0004c1; 	X(PUSH(cs));	// 15392 push    cs ;~ 0934:04C1
cs=0x934;eip=0x0004c2; 	R(CALL(sub_18c30,0));	// 15393 call    near ptr sub_18C30 ;~ 0934:04C2
loc_17de5:
	// 5199 
cs=0x934;eip=0x0004c5; 	T(MOV(sp, bp));	// 15397 mov     sp, bp ;~ 0934:04C5
cs=0x934;eip=0x0004c7; 	X(POP(bp));	// 15398 pop     bp ;~ 0934:04C7
cs=0x934;eip=0x0004c8; 	R(RETF(0));	// 15399 retf ;~ 0934:04C8
sub_17dea:
	// 15408 
cs=0x934;eip=0x0004ca; 	X(MOV(byte_37511, 1));	// 15409 mov     byte_37511, 1 ;~ 0934:04CA
ret_934_4cf:
	// 5200 
cs=0x934;eip=0x0004cf; 	T(MOV(al, byte_3750c));	// 15410 mov     al, byte_3750C ;~ 0934:04CF
cs=0x934;eip=0x0004d2; 	T(SUB(ah, ah));	// 15411 sub     ah, ah ;~ 0934:04D2
cs=0x934;eip=0x0004d4; 	X(PUSH(ax));	// 15412 push    ax ;~ 0934:04D4
cs=0x934;eip=0x0004d5; 	R(CALLF(sub_13c62,0));	// 15413 call    sub_13C62 ;~ 0934:04D5
cs=0x934;eip=0x0004da; 	T(ADD(sp, 2));	// 15414 add     sp, 2 ;~ 0934:04DA
cs=0x934;eip=0x0004dd; 	T(SUB(ax, ax));	// 15415 sub     ax, ax ;~ 0934:04DD
cs=0x934;eip=0x0004df; 	X(PUSH(ax));	// 15416 push    ax ;~ 0934:04DF
cs=0x934;eip=0x0004e0; 	T(MOV(ax, 1));	// 15417 mov     ax, 1 ;~ 0934:04E0
cs=0x934;eip=0x0004e3; 	X(PUSH(ax));	// 15418 push    ax ;~ 0934:04E3
cs=0x934;eip=0x0004e4; 	T(MOV(ax, 0x0F));	// 15419 mov     ax, 0Fh ;~ 0934:04E4
cs=0x934;eip=0x0004e7; 	X(PUSH(ax));	// 15420 push    ax ;~ 0934:04E7
cs=0x934;eip=0x0004e8; 	T(SUB(ax, ax));	// 15421 sub     ax, ax ;~ 0934:04E8
cs=0x934;eip=0x0004ea; 	X(PUSH(ax));	// 15422 push    ax ;~ 0934:04EA
cs=0x934;eip=0x0004eb; 	T(MOV(ax, 0x0F));	// 15423 mov     ax, 0Fh ;~ 0934:04EB
cs=0x934;eip=0x0004ee; 	X(PUSH(ax));	// 15424 push    ax ;~ 0934:04EE
cs=0x934;eip=0x0004ef; 	T(SUB(ax, ax));	// 15425 sub     ax, ax ;~ 0934:04EF
cs=0x934;eip=0x0004f1; 	X(PUSH(ax));	// 15426 push    ax ;~ 0934:04F1
cs=0x934;eip=0x0004f2; 	T(MOV(ax, 0x13F));	// 15427 mov     ax, 13Fh ;~ 0934:04F2
cs=0x934;eip=0x0004f5; 	X(PUSH(ax));	// 15428 push    ax ;~ 0934:04F5
cs=0x934;eip=0x0004f6; 	T(SUB(ax, ax));	// 15429 sub     ax, ax ;~ 0934:04F6
cs=0x934;eip=0x0004f8; 	X(PUSH(ax));	// 15430 push    ax ;~ 0934:04F8
cs=0x934;eip=0x0004f9; 	R(CALLF(sub_28183,0));	// 15431 call    far ptr sub_28183 ;~ 0934:04F9
cs=0x934;eip=0x0004fe; 	T(ADD(sp, 0x10));	// 15432 add     sp, 10h ;~ 0934:04FE
cs=0x934;eip=0x000501; 	T(MOV(ax, 1));	// 15433 mov     ax, 1 ;~ 0934:0501
cs=0x934;eip=0x000504; 	X(MOV(word_2beda, ax));	// 15434 mov     word_2BEDA, ax ;~ 0934:0504
cs=0x934;eip=0x000507; 	X(PUSH(ax));	// 15435 push    ax ;~ 0934:0507
cs=0x934;eip=0x000508; 	R(CALLF(sub_2714e,0));	// 15436 call    far ptr sub_2714E ;~ 0934:0508
cs=0x934;eip=0x00050d; 	T(ADD(sp, 2));	// 15437 add     sp, 2 ;~ 0934:050D
cs=0x934;eip=0x000510; 	T(MOV(ax, 0x2500));	// 15438 mov     ax, 2500h ;~ 0934:0510
cs=0x934;eip=0x000513; 	X(PUSH(ds));	// 15439 push    ds ;~ 0934:0513
cs=0x934;eip=0x000514; 	X(PUSH(ax));	// 15440 push    ax ;~ 0934:0514
cs=0x934;eip=0x000515; 	X(PUSH(word_3a3fe));	// 15441 push    word_3A3FE ;~ 0934:0515
cs=0x934;eip=0x000519; 	X(PUSH(word_3a3fc));	// 15442 push    word_3A3FC ;~ 0934:0519
cs=0x934;eip=0x00051d; 	R(CALLF(sub_1ab87,0));	// 15443 call    sub_1AB87 ;~ 0934:051D
cs=0x934;eip=0x000522; 	T(ADD(sp, 8));	// 15444 add     sp, 8 ;~ 0934:0522
cs=0x934;eip=0x000525; 	T(SUB(ax, ax));	// 15445 sub     ax, ax ;~ 0934:0525
cs=0x934;eip=0x000527; 	X(PUSH(ax));	// 15446 push    ax ;~ 0934:0527
cs=0x934;eip=0x000528; 	T(MOV(ax, 7));	// 15447 mov     ax, 7 ;~ 0934:0528
cs=0x934;eip=0x00052b; 	X(PUSH(ax));	// 15448 push    ax ;~ 0934:052B
cs=0x934;eip=0x00052c; 	T(SUB(ax, ax));	// 15449 sub     ax, ax ;~ 0934:052C
cs=0x934;eip=0x00052e; 	X(PUSH(ax));	// 15450 push    ax ;~ 0934:052E
cs=0x934;eip=0x00052f; 	T(MOV(ax, 0x98));	// 15451 mov     ax, 98h ;~ 0934:052F
cs=0x934;eip=0x000532; 	X(PUSH(ax));	// 15452 push    ax ;~ 0934:0532
cs=0x934;eip=0x000533; 	T(MOV(ax, 0x17A));	// 15453 mov     ax, 17Ah ;~ 0934:0533
cs=0x934;eip=0x000536; 	X(PUSH(ax));	// 15454 push    ax ;~ 0934:0536
cs=0x934;eip=0x000537; 	T(MOV(ax, 0x2500));	// 15455 mov     ax, 2500h ;~ 0934:0537
cs=0x934;eip=0x00053a; 	X(PUSH(ax));	// 15456 push    ax ;~ 0934:053A
cs=0x934;eip=0x00053b; 	R(CALLF(sub_178ec,0));	// 15457 call    sub_178EC ;~ 0934:053B
cs=0x934;eip=0x000540; 	T(ADD(sp, 0x0C));	// 15458 add     sp, 0Ch ;~ 0934:0540
cs=0x934;eip=0x000543; 	X(PUSH(cs));	// 15459 push    cs ;~ 0934:0543
cs=0x934;eip=0x000544; 	R(CALL(sub_1971e,0));	// 15460 call    near ptr sub_1971E ;~ 0934:0544
cs=0x934;eip=0x000547; 	T(SUB(ax, ax));	// 15461 sub     ax, ax ;~ 0934:0547
cs=0x934;eip=0x000549; 	X(MOV(word_2beda, ax));	// 15462 mov     word_2BEDA, ax ;~ 0934:0549
cs=0x934;eip=0x00054c; 	X(PUSH(ax));	// 15463 push    ax ;~ 0934:054C
cs=0x934;eip=0x00054d; 	R(CALLF(sub_2714e,0));	// 15464 call    far ptr sub_2714E ;~ 0934:054D
cs=0x934;eip=0x000552; 	T(ADD(sp, 2));	// 15465 add     sp, 2 ;~ 0934:0552
cs=0x934;eip=0x000555; 	T(SUB(ax, ax));	// 15466 sub     ax, ax ;~ 0934:0555
cs=0x934;eip=0x000557; 	X(PUSH(ax));	// 15467 push    ax ;~ 0934:0557
cs=0x934;eip=0x000558; 	T(MOV(ax, 1));	// 15468 mov     ax, 1 ;~ 0934:0558
cs=0x934;eip=0x00055b; 	X(PUSH(ax));	// 15469 push    ax ;~ 0934:055B
cs=0x934;eip=0x00055c; 	T(MOV(ax, 0x0C7));	// 15470 mov     ax, 0C7h ; '«' ;~ 0934:055C
cs=0x934;eip=0x00055f; 	X(PUSH(ax));	// 15471 push    ax ;~ 0934:055F
cs=0x934;eip=0x000560; 	T(SUB(ax, ax));	// 15472 sub     ax, ax ;~ 0934:0560
cs=0x934;eip=0x000562; 	X(PUSH(ax));	// 15473 push    ax ;~ 0934:0562
cs=0x934;eip=0x000563; 	T(MOV(ax, 0x67));	// 15474 mov     ax, 67h ; 'g' ;~ 0934:0563
cs=0x934;eip=0x000566; 	X(PUSH(ax));	// 15475 push    ax ;~ 0934:0566
cs=0x934;eip=0x000567; 	T(MOV(ax, 0x10));	// 15476 mov     ax, 10h ;~ 0934:0567
cs=0x934;eip=0x00056a; 	X(PUSH(ax));	// 15477 push    ax ;~ 0934:056A
cs=0x934;eip=0x00056b; 	T(MOV(ax, 0x13F));	// 15478 mov     ax, 13Fh ;~ 0934:056B
cs=0x934;eip=0x00056e; 	X(PUSH(ax));	// 15479 push    ax ;~ 0934:056E
cs=0x934;eip=0x00056f; 	T(SUB(ax, ax));	// 15480 sub     ax, ax ;~ 0934:056F
cs=0x934;eip=0x000571; 	X(PUSH(ax));	// 15481 push    ax ;~ 0934:0571
cs=0x934;eip=0x000572; 	R(CALLF(sub_28183,0));	// 15482 call    far ptr sub_28183 ;~ 0934:0572
cs=0x934;eip=0x000577; 	T(ADD(sp, 0x10));	// 15483 add     sp, 10h ;~ 0934:0577
cs=0x934;eip=0x00057a; 	T(MOV(al, 0x0FF));	// 15484 mov     al, 0FFh ;~ 0934:057A
cs=0x934;eip=0x00057c; 	X(MOV(byte_3a3f7, al));	// 15485 mov     byte_3A3F7, al ;~ 0934:057C
cs=0x934;eip=0x00057f; 	X(MOV(byte_3a6a0, al));	// 15486 mov     byte_3A6A0, al ;~ 0934:057F
cs=0x934;eip=0x000582; 	X(MOV(byte_38a96, al));	// 15487 mov     byte_38A96, al ;~ 0934:0582
cs=0x934;eip=0x000585; 	X(MOV(byte_38cdd, al));	// 15488 mov     byte_38CDD, al ;~ 0934:0585
cs=0x934;eip=0x000588; 	X(MOV(byte_37552, al));	// 15489 mov     byte_37552, al ;~ 0934:0588
cs=0x934;eip=0x00058b; 	X(MOV(byte_3a3a2, al));	// 15490 mov     byte_3A3A2, al ;~ 0934:058B
cs=0x934;eip=0x00058e; 	X(MOV(byte_38a92, 0));	// 15491 mov     byte_38A92, 0 ;~ 0934:058E
cs=0x934;eip=0x000593; 	X(MOV(byte_38ad2, 0));	// 15492 mov     byte_38AD2, 0 ;~ 0934:0593
cs=0x934;eip=0x000598; 	R(RETF(0));	// 15493 retf ;~ 0934:0598
sub_17eba:
	// 15502 
cs=0x934;eip=0x00059a; 	T(SUB(ax, ax));	// 15503 sub     ax, ax ;~ 0934:059A
ret_934_59c:
	// 5201 
cs=0x934;eip=0x00059c; 	X(PUSH(ax));	// 15504 push    ax ;~ 0934:059C
cs=0x934;eip=0x00059d; 	R(CALLF(sub_2ad94,0));	// 15505 call    sub_2AD94 ;~ 0934:059D
cs=0x934;eip=0x0005a2; 	T(ADD(sp, 2));	// 15506 add     sp, 2 ;~ 0934:05A2
cs=0x934;eip=0x0005a5; 	T(MOV(ax, 1));	// 15507 mov     ax, 1 ;~ 0934:05A5
cs=0x934;eip=0x0005a8; 	X(PUSH(ax));	// 15508 push    ax ;~ 0934:05A8
cs=0x934;eip=0x0005a9; 	T(SUB(ax, ax));	// 15509 sub     ax, ax ;~ 0934:05A9
cs=0x934;eip=0x0005ab; 	X(PUSH(ax));	// 15510 push    ax ;~ 0934:05AB
cs=0x934;eip=0x0005ac; 	T(MOV(ax, 0x0F));	// 15511 mov     ax, 0Fh ;~ 0934:05AC
cs=0x934;eip=0x0005af; 	X(PUSH(ax));	// 15512 push    ax ;~ 0934:05AF
cs=0x934;eip=0x0005b0; 	T(SUB(ax, ax));	// 15513 sub     ax, ax ;~ 0934:05B0
cs=0x934;eip=0x0005b2; 	X(PUSH(ax));	// 15514 push    ax ;~ 0934:05B2
cs=0x934;eip=0x0005b3; 	T(MOV(ax, 0x0F));	// 15515 mov     ax, 0Fh ;~ 0934:05B3
cs=0x934;eip=0x0005b6; 	X(PUSH(ax));	// 15516 push    ax ;~ 0934:05B6
cs=0x934;eip=0x0005b7; 	T(SUB(ax, ax));	// 15517 sub     ax, ax ;~ 0934:05B7
cs=0x934;eip=0x0005b9; 	X(PUSH(ax));	// 15518 push    ax ;~ 0934:05B9
cs=0x934;eip=0x0005ba; 	T(MOV(ax, 0x13F));	// 15519 mov     ax, 13Fh ;~ 0934:05BA
cs=0x934;eip=0x0005bd; 	X(PUSH(ax));	// 15520 push    ax ;~ 0934:05BD
cs=0x934;eip=0x0005be; 	T(SUB(ax, ax));	// 15521 sub     ax, ax ;~ 0934:05BE
cs=0x934;eip=0x0005c0; 	X(PUSH(ax));	// 15522 push    ax ;~ 0934:05C0
cs=0x934;eip=0x0005c1; 	R(CALLF(sub_28183,0));	// 15523 call    far ptr sub_28183 ;~ 0934:05C1
cs=0x934;eip=0x0005c6; 	T(ADD(sp, 0x10));	// 15524 add     sp, 10h ;~ 0934:05C6
cs=0x934;eip=0x0005c9; 	T(SUB(ax, ax));	// 15525 sub     ax, ax ;~ 0934:05C9
cs=0x934;eip=0x0005cb; 	X(MOV(word_2beda, ax));	// 15526 mov     word_2BEDA, ax ;~ 0934:05CB
cs=0x934;eip=0x0005ce; 	X(PUSH(ax));	// 15527 push    ax ;~ 0934:05CE
cs=0x934;eip=0x0005cf; 	R(CALLF(sub_2714e,0));	// 15528 call    far ptr sub_2714E ;~ 0934:05CF
cs=0x934;eip=0x0005d4; 	T(ADD(sp, 2));	// 15529 add     sp, 2 ;~ 0934:05D4
cs=0x934;eip=0x0005d7; 	T(SUB(ax, ax));	// 15530 sub     ax, ax ;~ 0934:05D7
cs=0x934;eip=0x0005d9; 	X(PUSH(ax));	// 15531 push    ax ;~ 0934:05D9
cs=0x934;eip=0x0005da; 	R(CALLF(sub_27031,0));	// 15532 call    far ptr sub_27031 ;~ 0934:05DA
cs=0x934;eip=0x0005df; 	T(ADD(sp, 2));	// 15533 add     sp, 2 ;~ 0934:05DF
cs=0x934;eip=0x0005e2; 	T(MOV(ax, 0x0F));	// 15534 mov     ax, 0Fh ;~ 0934:05E2
cs=0x934;eip=0x0005e5; 	X(PUSH(ax));	// 15535 push    ax ;~ 0934:05E5
cs=0x934;eip=0x0005e6; 	T(SUB(ax, ax));	// 15536 sub     ax, ax ;~ 0934:05E6
cs=0x934;eip=0x0005e8; 	X(PUSH(ax));	// 15537 push    ax ;~ 0934:05E8
cs=0x934;eip=0x0005e9; 	T(MOV(ax, 0x13F));	// 15538 mov     ax, 13Fh ;~ 0934:05E9
cs=0x934;eip=0x0005ec; 	X(PUSH(ax));	// 15539 push    ax ;~ 0934:05EC
cs=0x934;eip=0x0005ed; 	T(SUB(ax, ax));	// 15540 sub     ax, ax ;~ 0934:05ED
cs=0x934;eip=0x0005ef; 	X(PUSH(ax));	// 15541 push    ax ;~ 0934:05EF
cs=0x934;eip=0x0005f0; 	R(CALLF(sub_2785b,0));	// 15542 call    far ptr sub_2785B ;~ 0934:05F0
cs=0x934;eip=0x0005f5; 	T(ADD(sp, 8));	// 15543 add     sp, 8 ;~ 0934:05F5
cs=0x934;eip=0x0005f8; 	X(PUSH(cs));	// 15544 push    cs ;~ 0934:05F8
cs=0x934;eip=0x0005f9; 	R(CALL(sub_17f22,0));	// 15545 call    near ptr sub_17F22 ;~ 0934:05F9
cs=0x934;eip=0x0005fc; 	X(MOV(byte_38ad2, 1));	// 15546 mov     byte_38AD2, 1 ;~ 0934:05FC
cs=0x934;eip=0x000601; 	R(RETF(0));	// 15547 retf ;~ 0934:0601
sub_17f22:
	// 15555 
#undef var_2
#define var_2 -2
	// 15558 var_2           = word ptr -2 ;~ 0934:0602
ret_934_602:
	// 5202 
cs=0x934;eip=0x000602; 	X(PUSH(bp));	// 15560 push    bp ;~ 0934:0602
cs=0x934;eip=0x000603; 	T(MOV(bp, sp));	// 15561 mov     bp, sp ;~ 0934:0603
cs=0x934;eip=0x000605; 	T(SUB(sp, 2));	// 15562 sub     sp, 2 ;~ 0934:0605
cs=0x934;eip=0x000608; 	X(MOV(byte_34f20, 1));	// 15563 mov     byte_34F20, 1 ;~ 0934:0608
cs=0x934;eip=0x00060d; 	T(SUB(ax, ax));	// 15564 sub     ax, ax ;~ 0934:060D
cs=0x934;eip=0x00060f; 	X(MOV(word_2beda, ax));	// 15565 mov     word_2BEDA, ax ;~ 0934:060F
cs=0x934;eip=0x000612; 	X(PUSH(ax));	// 15566 push    ax ;~ 0934:0612
cs=0x934;eip=0x000613; 	R(CALLF(sub_2714e,0));	// 15567 call    far ptr sub_2714E ;~ 0934:0613
cs=0x934;eip=0x000618; 	T(ADD(sp, 2));	// 15568 add     sp, 2 ;~ 0934:0618
cs=0x934;eip=0x00061b; 	T(MOV(ax, 0x2500));	// 15569 mov     ax, 2500h ;~ 0934:061B
cs=0x934;eip=0x00061e; 	X(PUSH(ds));	// 15570 push    ds ;~ 0934:061E
cs=0x934;eip=0x00061f; 	X(PUSH(ax));	// 15571 push    ax ;~ 0934:061F
cs=0x934;eip=0x000620; 	X(PUSH(word_38cda));	// 15572 push    word_38CDA ;~ 0934:0620
cs=0x934;eip=0x000624; 	X(PUSH(word_38cd8));	// 15573 push    word_38CD8 ;~ 0934:0624
cs=0x934;eip=0x000628; 	R(CALLF(sub_1ab87,0));	// 15574 call    sub_1AB87 ;~ 0934:0628
cs=0x934;eip=0x00062d; 	T(ADD(sp, 8));	// 15575 add     sp, 8 ;~ 0934:062D
cs=0x934;eip=0x000630; 	R(CALLF(sub_13b40,0));	// 15576 call    sub_13B40 ;~ 0934:0630
cs=0x934;eip=0x000635; 	X(MOV(byte_34f30, 0));	// 15577 mov     byte_34F30, 0 ;~ 0934:0635
cs=0x934;eip=0x00063a; 	T(MOV(ax, 8));	// 15578 mov     ax, 8 ;~ 0934:063A
cs=0x934;eip=0x00063d; 	X(PUSH(ax));	// 15579 push    ax ;~ 0934:063D
cs=0x934;eip=0x00063e; 	R(CALLF(sub_27031,0));	// 15580 call    far ptr sub_27031 ;~ 0934:063E
cs=0x934;eip=0x000643; 	T(ADD(sp, 2));	// 15581 add     sp, 2 ;~ 0934:0643
cs=0x934;eip=0x000646; 	T(MOV(ax, 0x0C7));	// 15582 mov     ax, 0C7h ; '«' ;~ 0934:0646
cs=0x934;eip=0x000649; 	X(PUSH(ax));	// 15583 push    ax ;~ 0934:0649
cs=0x934;eip=0x00064a; 	T(MOV(ax, 0x70));	// 15584 mov     ax, 70h ; 'p' ;~ 0934:064A
cs=0x934;eip=0x00064d; 	X(PUSH(ax));	// 15585 push    ax ;~ 0934:064D
cs=0x934;eip=0x00064e; 	T(MOV(ax, 0x13F));	// 15586 mov     ax, 13Fh ;~ 0934:064E
cs=0x934;eip=0x000651; 	X(PUSH(ax));	// 15587 push    ax ;~ 0934:0651
cs=0x934;eip=0x000652; 	T(SUB(ax, ax));	// 15588 sub     ax, ax ;~ 0934:0652
cs=0x934;eip=0x000654; 	X(PUSH(ax));	// 15589 push    ax ;~ 0934:0654
cs=0x934;eip=0x000655; 	R(CALLF(sub_2785b,0));	// 15590 call    far ptr sub_2785B ;~ 0934:0655
cs=0x934;eip=0x00065a; 	T(ADD(sp, 8));	// 15591 add     sp, 8 ;~ 0934:065A
cs=0x934;eip=0x00065d; 	T(MOV(ax, 0x0F));	// 15592 mov     ax, 0Fh ;~ 0934:065D
cs=0x934;eip=0x000660; 	X(PUSH(ax));	// 15593 push    ax ;~ 0934:0660
cs=0x934;eip=0x000661; 	R(CALLF(sub_27031,0));	// 15594 call    far ptr sub_27031 ;~ 0934:0661
cs=0x934;eip=0x000666; 	T(ADD(sp, 2));	// 15595 add     sp, 2 ;~ 0934:0666
cs=0x934;eip=0x000669; 	T(MOV(ax, 0x0C7));	// 15596 mov     ax, 0C7h ; '«' ;~ 0934:0669
cs=0x934;eip=0x00066c; 	X(PUSH(ax));	// 15597 push    ax ;~ 0934:066C
cs=0x934;eip=0x00066d; 	T(MOV(ax, 0x70));	// 15598 mov     ax, 70h ; 'p' ;~ 0934:066D
cs=0x934;eip=0x000670; 	X(PUSH(ax));	// 15599 push    ax ;~ 0934:0670
cs=0x934;eip=0x000671; 	T(MOV(ax, 0x13F));	// 15600 mov     ax, 13Fh ;~ 0934:0671
cs=0x934;eip=0x000674; 	X(PUSH(ax));	// 15601 push    ax ;~ 0934:0674
cs=0x934;eip=0x000675; 	T(SUB(ax, ax));	// 15602 sub     ax, ax ;~ 0934:0675
cs=0x934;eip=0x000677; 	X(PUSH(ax));	// 15603 push    ax ;~ 0934:0677
cs=0x934;eip=0x000678; 	R(CALLF(sub_137a4,0));	// 15604 call    sub_137A4 ;~ 0934:0678
cs=0x934;eip=0x00067d; 	T(ADD(sp, 8));	// 15605 add     sp, 8 ;~ 0934:067D
cs=0x934;eip=0x000680; 	T(MOV(ax, 7));	// 15606 mov     ax, 7 ;~ 0934:0680
cs=0x934;eip=0x000683; 	X(PUSH(ax));	// 15607 push    ax ;~ 0934:0683
cs=0x934;eip=0x000684; 	R(CALLF(sub_27031,0));	// 15608 call    far ptr sub_27031 ;~ 0934:0684
cs=0x934;eip=0x000689; 	T(ADD(sp, 2));	// 15609 add     sp, 2 ;~ 0934:0689
cs=0x934;eip=0x00068c; 	T(MOV(ax, 0x0C6));	// 15610 mov     ax, 0C6h ; '∆' ;~ 0934:068C
cs=0x934;eip=0x00068f; 	X(PUSH(ax));	// 15611 push    ax ;~ 0934:068F
cs=0x934;eip=0x000690; 	T(MOV(ax, 0x71));	// 15612 mov     ax, 71h ; 'q' ;~ 0934:0690
cs=0x934;eip=0x000693; 	X(PUSH(ax));	// 15613 push    ax ;~ 0934:0693
cs=0x934;eip=0x000694; 	T(MOV(ax, 0x13E));	// 15614 mov     ax, 13Eh ;~ 0934:0694
cs=0x934;eip=0x000697; 	X(PUSH(ax));	// 15615 push    ax ;~ 0934:0697
cs=0x934;eip=0x000698; 	T(MOV(ax, 1));	// 15616 mov     ax, 1 ;~ 0934:0698
cs=0x934;eip=0x00069b; 	X(PUSH(ax));	// 15617 push    ax ;~ 0934:069B
cs=0x934;eip=0x00069c; 	R(CALLF(sub_137a4,0));	// 15618 call    sub_137A4 ;~ 0934:069C
cs=0x934;eip=0x0006a1; 	T(ADD(sp, 8));	// 15619 add     sp, 8 ;~ 0934:06A1
cs=0x934;eip=0x0006a4; 	T(SUB(ax, ax));	// 15620 sub     ax, ax ;~ 0934:06A4
cs=0x934;eip=0x0006a6; 	X(PUSH(ax));	// 15621 push    ax ;~ 0934:06A6
cs=0x934;eip=0x0006a7; 	R(CALLF(sub_27031,0));	// 15622 call    far ptr sub_27031 ;~ 0934:06A7
cs=0x934;eip=0x0006ac; 	T(ADD(sp, 2));	// 15623 add     sp, 2 ;~ 0934:06AC
cs=0x934;eip=0x0006af; 	T(MOV(ax, 0x0C5));	// 15624 mov     ax, 0C5h ; '≈' ;~ 0934:06AF
cs=0x934;eip=0x0006b2; 	X(PUSH(ax));	// 15625 push    ax ;~ 0934:06B2
cs=0x934;eip=0x0006b3; 	T(MOV(ax, 0x72));	// 15626 mov     ax, 72h ; 'r' ;~ 0934:06B3
cs=0x934;eip=0x0006b6; 	X(PUSH(ax));	// 15627 push    ax ;~ 0934:06B6
cs=0x934;eip=0x0006b7; 	T(MOV(ax, 0x13D));	// 15628 mov     ax, 13Dh ;~ 0934:06B7
cs=0x934;eip=0x0006ba; 	X(PUSH(ax));	// 15629 push    ax ;~ 0934:06BA
cs=0x934;eip=0x0006bb; 	T(MOV(ax, 2));	// 15630 mov     ax, 2 ;~ 0934:06BB
cs=0x934;eip=0x0006be; 	X(PUSH(ax));	// 15631 push    ax ;~ 0934:06BE
cs=0x934;eip=0x0006bf; 	R(CALLF(sub_137a4,0));	// 15632 call    sub_137A4 ;~ 0934:06BF
cs=0x934;eip=0x0006c4; 	T(ADD(sp, 8));	// 15633 add     sp, 8 ;~ 0934:06C4
cs=0x934;eip=0x0006c7; 	T(SUB(ax, ax));	// 15634 sub     ax, ax ;~ 0934:06C7
cs=0x934;eip=0x0006c9; 	X(PUSH(ax));	// 15635 push    ax ;~ 0934:06C9
cs=0x934;eip=0x0006ca; 	T(MOV(ax, 0x0C3));	// 15636 mov     ax, 0C3h ; '√' ;~ 0934:06CA
cs=0x934;eip=0x0006cd; 	X(PUSH(ax));	// 15637 push    ax ;~ 0934:06CD
cs=0x934;eip=0x0006ce; 	T(MOV(ax, 0x38));	// 15638 mov     ax, 38h ; '8' ;~ 0934:06CE
cs=0x934;eip=0x0006d1; 	X(PUSH(ax));	// 15639 push    ax ;~ 0934:06D1
cs=0x934;eip=0x0006d2; 	T(MOV(ax, 0x0F8));	// 15640 mov     ax, 0F8h ; '¯' ;~ 0934:06D2
cs=0x934;eip=0x0006d5; 	X(PUSH(ax));	// 15641 push    ax ;~ 0934:06D5
cs=0x934;eip=0x0006d6; 	T(MOV(ax, 0x573));	// 15642 mov     ax, 573h ;~ 0934:06D6
cs=0x934;eip=0x0006d9; 	X(PUSH(ax));	// 15643 push    ax ;~ 0934:06D9
cs=0x934;eip=0x0006da; 	T(MOV(ax, 0x2500));	// 15644 mov     ax, 2500h ;~ 0934:06DA
cs=0x934;eip=0x0006dd; 	X(PUSH(ax));	// 15645 push    ax ;~ 0934:06DD
cs=0x934;eip=0x0006de; 	R(CALLF(sub_178ec,0));	// 15646 call    sub_178EC ;~ 0934:06DE
cs=0x934;eip=0x0006e3; 	T(ADD(sp, 0x0C));	// 15647 add     sp, 0Ch ;~ 0934:06E3
cs=0x934;eip=0x0006e6; 	X(PUSH(cs));	// 15648 push    cs ;~ 0934:06E6
cs=0x934;eip=0x0006e7; 	R(CALL(sub_1971e,0));	// 15649 call    near ptr sub_1971E ;~ 0934:06E7
cs=0x934;eip=0x0006ea; 	X(MOV(word_37b74, 0x0FFFF));	// 15650 mov     word_37B74, 0FFFFh ;~ 0934:06EA
cs=0x934;eip=0x0006f0; 	T(SUB(ax, ax));	// 15651 sub     ax, ax ;~ 0934:06F0
cs=0x934;eip=0x0006f2; 	X(PUSH(ax));	// 15652 push    ax ;~ 0934:06F2
cs=0x934;eip=0x0006f3; 	T(MOV(ax, 0x0C));	// 15653 mov     ax, 0Ch ;~ 0934:06F3
cs=0x934;eip=0x0006f6; 	X(PUSH(ax));	// 15654 push    ax ;~ 0934:06F6
cs=0x934;eip=0x0006f7; 	R(CALLF(sub_1c8f3,0));	// 15655 call    sub_1C8F3 ;~ 0934:06F7
cs=0x934;eip=0x0006fc; 	T(ADD(sp, 4));	// 15656 add     sp, 4 ;~ 0934:06FC
cs=0x934;eip=0x0006ff; 	T(CMP(byte_352f2, 0));	// 15657 cmp     byte_352F2, 0 ;~ 0934:06FF
cs=0x934;eip=0x000704; 	R(JNZ(loc_1802d));	// 15658 jnz     short loc_1802D ;~ 0934:0704
cs=0x934;eip=0x000706; 	T(CMP(byte_375cd, 0));	// 15659 cmp     byte_375CD, 0 ;~ 0934:0706
cs=0x934;eip=0x00070b; 	R(JZ(loc_18094));	// 15660 jz      short loc_18094 ;~ 0934:070B
loc_1802d:
	// 5203 
cs=0x934;eip=0x00070d; 	T(SUB(ax, ax));	// 15663 sub     ax, ax ;~ 0934:070D
cs=0x934;eip=0x00070f; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 15664 mov     [bp+var_2], ax ;~ 0934:070F
cs=0x934;eip=0x000712; 	X(PUSH(ax));	// 15665 push    ax ;~ 0934:0712
cs=0x934;eip=0x000713; 	T(MOV(ax, 0x1EF8));	// 15666 mov     ax, 1EF8h ;~ 0934:0713
cs=0x934;eip=0x000716; 	X(PUSH(ax));	// 15667 push    ax ;~ 0934:0716
cs=0x934;eip=0x000717; 	R(CALLF(sub_139c2,0));	// 15668 call    sub_139C2 ;~ 0934:0717
cs=0x934;eip=0x00071c; 	T(ADD(sp, 4));	// 15669 add     sp, 4 ;~ 0934:071C
cs=0x934;eip=0x00071f; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 15670 mov     [bp+var_2], ax ;~ 0934:071F
cs=0x934;eip=0x000722; 	T(MOV(ax, 7));	// 15671 mov     ax, 7 ;~ 0934:0722
cs=0x934;eip=0x000725; 	X(PUSH(ax));	// 15672 push    ax ;~ 0934:0725
cs=0x934;eip=0x000726; 	T(SUB(ax, ax));	// 15673 sub     ax, ax ;~ 0934:0726
cs=0x934;eip=0x000728; 	X(PUSH(ax));	// 15674 push    ax ;~ 0934:0728
cs=0x934;eip=0x000729; 	R(CALLF(sub_1c8f3,0));	// 15675 call    sub_1C8F3 ;~ 0934:0729
cs=0x934;eip=0x00072e; 	T(ADD(sp, 4));	// 15676 add     sp, 4 ;~ 0934:072E
cs=0x934;eip=0x000731; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 15677 push    [bp+var_2] ;~ 0934:0731
cs=0x934;eip=0x000734; 	T(MOV(ax, 0x1EF8));	// 15678 mov     ax, 1EF8h ;~ 0934:0734
cs=0x934;eip=0x000737; 	X(PUSH(ax));	// 15679 push    ax ;~ 0934:0737
cs=0x934;eip=0x000738; 	R(CALLF(sub_139c2,0));	// 15680 call    sub_139C2 ;~ 0934:0738
cs=0x934;eip=0x00073d; 	T(ADD(sp, 4));	// 15681 add     sp, 4 ;~ 0934:073D
cs=0x934;eip=0x000740; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 15682 mov     [bp+var_2], ax ;~ 0934:0740
cs=0x934;eip=0x000743; 	T(CMP(byte_375cd, 0));	// 15683 cmp     byte_375CD, 0 ;~ 0934:0743
cs=0x934;eip=0x000748; 	R(JZ(loc_1806d));	// 15684 jz      short loc_1806D ;~ 0934:0748
cs=0x934;eip=0x00074a; 	R(JMP(loc_180ee));	// 15685 jmp     loc_180EE ;~ 0934:074A
loc_1806d:
	// 5204 
cs=0x934;eip=0x00074d; 	T(MOV(ax, 8));	// 15689 mov     ax, 8 ;~ 0934:074D
cs=0x934;eip=0x000750; 	X(PUSH(ax));	// 15690 push    ax ;~ 0934:0750
cs=0x934;eip=0x000751; 	R(CALLF(sub_27031,0));	// 15691 call    far ptr sub_27031 ;~ 0934:0751
cs=0x934;eip=0x000756; 	T(ADD(sp, 2));	// 15692 add     sp, 2 ;~ 0934:0756
cs=0x934;eip=0x000759; 	T(MOV(ax, 0x0C3));	// 15693 mov     ax, 0C3h ; '√' ;~ 0934:0759
cs=0x934;eip=0x00075c; 	X(PUSH(ax));	// 15694 push    ax ;~ 0934:075C
cs=0x934;eip=0x00075d; 	T(MOV(ax, 0x0B4));	// 15695 mov     ax, 0B4h ; '¥' ;~ 0934:075D
cs=0x934;eip=0x000760; 	X(PUSH(ax));	// 15696 push    ax ;~ 0934:0760
cs=0x934;eip=0x000761; 	T(MOV(ax, 0x81));	// 15697 mov     ax, 81h ; 'Å' ;~ 0934:0761
cs=0x934;eip=0x000764; 	X(PUSH(ax));	// 15698 push    ax ;~ 0934:0764
cs=0x934;eip=0x000765; 	T(MOV(ax, 0x38));	// 15699 mov     ax, 38h ; '8' ;~ 0934:0765
cs=0x934;eip=0x000768; 	X(PUSH(ax));	// 15700 push    ax ;~ 0934:0768
cs=0x934;eip=0x000769; 	R(CALLF(sub_2785b,0));	// 15701 call    far ptr sub_2785B ;~ 0934:0769
cs=0x934;eip=0x00076e; 	T(ADD(sp, 8));	// 15702 add     sp, 8 ;~ 0934:076E
cs=0x934;eip=0x000771; 	R(JMP(loc_180ee));	// 15703 jmp     short loc_180EE ;~ 0934:0771
loc_18094:
	// 5205 
cs=0x934;eip=0x000774; 	T(MOV(ax, 8));	// 15708 mov     ax, 8 ;~ 0934:0774
cs=0x934;eip=0x000777; 	X(PUSH(ax));	// 15709 push    ax ;~ 0934:0777
cs=0x934;eip=0x000778; 	R(CALLF(sub_27031,0));	// 15710 call    far ptr sub_27031 ;~ 0934:0778
cs=0x934;eip=0x00077d; 	T(ADD(sp, 2));	// 15711 add     sp, 2 ;~ 0934:077D
cs=0x934;eip=0x000780; 	T(MOV(ax, 0x0C3));	// 15712 mov     ax, 0C3h ; '√' ;~ 0934:0780
cs=0x934;eip=0x000783; 	X(PUSH(ax));	// 15713 push    ax ;~ 0934:0783
cs=0x934;eip=0x000784; 	T(MOV(ax, 0x0B4));	// 15714 mov     ax, 0B4h ; '¥' ;~ 0934:0784
cs=0x934;eip=0x000787; 	X(PUSH(ax));	// 15715 push    ax ;~ 0934:0787
cs=0x934;eip=0x000788; 	T(MOV(ax, 0x12B));	// 15716 mov     ax, 12Bh ;~ 0934:0788
cs=0x934;eip=0x00078b; 	X(PUSH(ax));	// 15717 push    ax ;~ 0934:078B
cs=0x934;eip=0x00078c; 	T(MOV(ax, 0x82));	// 15718 mov     ax, 82h ; 'Ç' ;~ 0934:078C
cs=0x934;eip=0x00078f; 	X(PUSH(ax));	// 15719 push    ax ;~ 0934:078F
cs=0x934;eip=0x000790; 	R(CALLF(sub_2785b,0));	// 15720 call    far ptr sub_2785B ;~ 0934:0790
cs=0x934;eip=0x000795; 	T(ADD(sp, 8));	// 15721 add     sp, 8 ;~ 0934:0795
cs=0x934;eip=0x000798; 	T(SUB(ax, ax));	// 15722 sub     ax, ax ;~ 0934:0798
cs=0x934;eip=0x00079a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 15723 mov     [bp+var_2], ax ;~ 0934:079A
cs=0x934;eip=0x00079d; 	X(PUSH(ax));	// 15724 push    ax ;~ 0934:079D
cs=0x934;eip=0x00079e; 	T(MOV(ax, 0x1EDE));	// 15725 mov     ax, 1EDEh ;~ 0934:079E
cs=0x934;eip=0x0007a1; 	X(PUSH(ax));	// 15726 push    ax ;~ 0934:07A1
cs=0x934;eip=0x0007a2; 	R(CALLF(sub_139c2,0));	// 15727 call    sub_139C2 ;~ 0934:07A2
cs=0x934;eip=0x0007a7; 	T(ADD(sp, 4));	// 15728 add     sp, 4 ;~ 0934:07A7
cs=0x934;eip=0x0007aa; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 15729 mov     [bp+var_2], ax ;~ 0934:07AA
cs=0x934;eip=0x0007ad; 	T(MOV(ax, 7));	// 15730 mov     ax, 7 ;~ 0934:07AD
cs=0x934;eip=0x0007b0; 	X(PUSH(ax));	// 15731 push    ax ;~ 0934:07B0
cs=0x934;eip=0x0007b1; 	T(SUB(ax, ax));	// 15732 sub     ax, ax ;~ 0934:07B1
cs=0x934;eip=0x0007b3; 	X(PUSH(ax));	// 15733 push    ax ;~ 0934:07B3
cs=0x934;eip=0x0007b4; 	R(CALLF(sub_1c8f3,0));	// 15734 call    sub_1C8F3 ;~ 0934:07B4
cs=0x934;eip=0x0007b9; 	T(ADD(sp, 4));	// 15735 add     sp, 4 ;~ 0934:07B9
cs=0x934;eip=0x0007bc; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 15736 push    [bp+var_2] ;~ 0934:07BC
cs=0x934;eip=0x0007bf; 	T(MOV(ax, 0x1EDE));	// 15737 mov     ax, 1EDEh ;~ 0934:07BF
cs=0x934;eip=0x0007c2; 	X(PUSH(ax));	// 15738 push    ax ;~ 0934:07C2
cs=0x934;eip=0x0007c3; 	R(CALLF(sub_139c2,0));	// 15739 call    sub_139C2 ;~ 0934:07C3
cs=0x934;eip=0x0007c8; 	T(ADD(sp, 4));	// 15740 add     sp, 4 ;~ 0934:07C8
cs=0x934;eip=0x0007cb; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 15741 mov     [bp+var_2], ax ;~ 0934:07CB
loc_180ee:
	// 5206 
cs=0x934;eip=0x0007ce; 	T(MOV(ax, 8));	// 15745 mov     ax, 8 ;~ 0934:07CE
cs=0x934;eip=0x0007d1; 	X(PUSH(ax));	// 15746 push    ax ;~ 0934:07D1
cs=0x934;eip=0x0007d2; 	T(SUB(ax, ax));	// 15747 sub     ax, ax ;~ 0934:07D2
cs=0x934;eip=0x0007d4; 	X(PUSH(ax));	// 15748 push    ax ;~ 0934:07D4
cs=0x934;eip=0x0007d5; 	R(CALLF(sub_1c8f3,0));	// 15749 call    sub_1C8F3 ;~ 0934:07D5
cs=0x934;eip=0x0007da; 	T(ADD(sp, 4));	// 15750 add     sp, 4 ;~ 0934:07DA
cs=0x934;eip=0x0007dd; 	T(SUB(ax, ax));	// 15751 sub     ax, ax ;~ 0934:07DD
cs=0x934;eip=0x0007df; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 15752 mov     [bp+var_2], ax ;~ 0934:07DF
cs=0x934;eip=0x0007e2; 	X(PUSH(ax));	// 15753 push    ax ;~ 0934:07E2
cs=0x934;eip=0x0007e3; 	T(MOV(ax, 0x1F23));	// 15754 mov     ax, 1F23h ;~ 0934:07E3
cs=0x934;eip=0x0007e6; 	X(PUSH(ax));	// 15755 push    ax ;~ 0934:07E6
cs=0x934;eip=0x0007e7; 	R(CALLF(sub_139c2,0));	// 15756 call    sub_139C2 ;~ 0934:07E7
cs=0x934;eip=0x0007ec; 	T(ADD(sp, 4));	// 15757 add     sp, 4 ;~ 0934:07EC
cs=0x934;eip=0x0007ef; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 15758 mov     [bp+var_2], ax ;~ 0934:07EF
cs=0x934;eip=0x0007f2; 	T(MOV(ax, 7));	// 15759 mov     ax, 7 ;~ 0934:07F2
cs=0x934;eip=0x0007f5; 	X(PUSH(ax));	// 15760 push    ax ;~ 0934:07F5
cs=0x934;eip=0x0007f6; 	T(SUB(ax, ax));	// 15761 sub     ax, ax ;~ 0934:07F6
cs=0x934;eip=0x0007f8; 	X(PUSH(ax));	// 15762 push    ax ;~ 0934:07F8
cs=0x934;eip=0x0007f9; 	R(CALLF(sub_1c8f3,0));	// 15763 call    sub_1C8F3 ;~ 0934:07F9
cs=0x934;eip=0x0007fe; 	T(ADD(sp, 4));	// 15764 add     sp, 4 ;~ 0934:07FE
cs=0x934;eip=0x000801; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 15765 push    [bp+var_2] ;~ 0934:0801
cs=0x934;eip=0x000804; 	T(MOV(ax, 0x1F23));	// 15766 mov     ax, 1F23h ;~ 0934:0804
cs=0x934;eip=0x000807; 	X(PUSH(ax));	// 15767 push    ax ;~ 0934:0807
cs=0x934;eip=0x000808; 	R(CALLF(sub_139c2,0));	// 15768 call    sub_139C2 ;~ 0934:0808
cs=0x934;eip=0x00080d; 	T(ADD(sp, 4));	// 15769 add     sp, 4 ;~ 0934:080D
cs=0x934;eip=0x000810; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 15770 mov     [bp+var_2], ax ;~ 0934:0810
cs=0x934;eip=0x000813; 	R(CALLF(sub_13b74,0));	// 15771 call    sub_13B74 ;~ 0934:0813
cs=0x934;eip=0x000818; 	T(CMP(byte_352f2, 0));	// 15772 cmp     byte_352F2, 0 ;~ 0934:0818
cs=0x934;eip=0x00081d; 	R(JZ(loc_18152));	// 15773 jz      short loc_18152 ;~ 0934:081D
cs=0x934;eip=0x00081f; 	T(CMP(byte_375cd, 0));	// 15774 cmp     byte_375CD, 0 ;~ 0934:081F
cs=0x934;eip=0x000824; 	R(JNZ(loc_18152));	// 15775 jnz     short loc_18152 ;~ 0934:0824
cs=0x934;eip=0x000826; 	T(MOV(ax, 0x17));	// 15776 mov     ax, 17h ;~ 0934:0826
cs=0x934;eip=0x000829; 	X(PUSH(ax));	// 15777 push    ax ;~ 0934:0829
cs=0x934;eip=0x00082a; 	R(CALLF(sub_1179c,0));	// 15778 call    sub_1179C ;~ 0934:082A
cs=0x934;eip=0x00082f; 	T(ADD(sp, 2));	// 15779 add     sp, 2 ;~ 0934:082F
loc_18152:
	// 5207 
cs=0x934;eip=0x000832; 	X(MOV(byte_34f20, 0));	// 15783 mov     byte_34F20, 0 ;~ 0934:0832
cs=0x934;eip=0x000837; 	T(MOV(sp, bp));	// 15784 mov     sp, bp ;~ 0934:0837
cs=0x934;eip=0x000839; 	X(POP(bp));	// 15785 pop     bp ;~ 0934:0839
cs=0x934;eip=0x00083a; 	R(RETF(0));	// 15786 retf ;~ 0934:083A
sub_1815c:
	// 15795 
cs=0x934;eip=0x00083c; 	X(MOV(byte_37511, 1));	// 15797 mov     byte_37511, 1 ;~ 0934:083C
ret_934_841:
	// 5208 
cs=0x934;eip=0x000841; 	T(SUB(al, al));	// 15798 sub     al, al ;~ 0934:0841
cs=0x934;eip=0x000843; 	X(MOV(byte_2d0e0, al));	// 15799 mov     byte_2D0E0, al ;~ 0934:0843
cs=0x934;eip=0x000846; 	T(SUB(ah, ah));	// 15800 sub     ah, ah ;~ 0934:0846
cs=0x934;eip=0x000848; 	X(MOV(word_2cfc6, ax));	// 15801 mov     word_2CFC6, ax ;~ 0934:0848
cs=0x934;eip=0x00084b; 	X(MOV(word_2cfc8, 0));	// 15802 mov     word_2CFC8, 0 ;~ 0934:084B
cs=0x934;eip=0x000851; 	R(CALLF(sub_1bd4f,0));	// 15803 call    sub_1BD4F ;~ 0934:0851
cs=0x934;eip=0x000856; 	X(MOV(byte_352bc, 1));	// 15804 mov     byte_352BC, 1 ;~ 0934:0856
cs=0x934;eip=0x00085b; 	R(CALLF(sub_1f0c1,0));	// 15805 call    sub_1F0C1 ;~ 0934:085B
cs=0x934;eip=0x000860; 	T(CMP(byte_2c804, 0));	// 15806 cmp     byte_2C804, 0 ;~ 0934:0860
cs=0x934;eip=0x000865; 	R(JNZ(loc_1819c));	// 15807 jnz     short loc_1819C ;~ 0934:0865
cs=0x934;eip=0x000867; 	T(CMP(byte_2c81e, 0));	// 15808 cmp     byte_2C81E, 0 ;~ 0934:0867
cs=0x934;eip=0x00086c; 	R(JZ(loc_1819c));	// 15809 jz      short loc_1819C ;~ 0934:086C
cs=0x934;eip=0x00086e; 	T(MOV(al, byte_3750c));	// 15810 mov     al, byte_3750C ;~ 0934:086E
cs=0x934;eip=0x000871; 	T(SUB(ah, ah));	// 15811 sub     ah, ah ;~ 0934:0871
cs=0x934;eip=0x000873; 	X(PUSH(ax));	// 15812 push    ax ;~ 0934:0873
cs=0x934;eip=0x000874; 	R(CALLF(sub_13c62,0));	// 15813 call    sub_13C62 ;~ 0934:0874
cs=0x934;eip=0x000879; 	T(ADD(sp, 2));	// 15814 add     sp, 2 ;~ 0934:0879
loc_1819c:
	// 5209 
cs=0x934;eip=0x00087c; 	R(CALLF(sub_20585,0));	// 15818 call    sub_20585 ;~ 0934:087C
cs=0x934;eip=0x000881; 	T(SUB(ax, ax));	// 15819 sub     ax, ax ;~ 0934:0881
cs=0x934;eip=0x000883; 	X(MOV(word_2d0de, ax));	// 15820 mov     word_2D0DE, ax ;~ 0934:0883
cs=0x934;eip=0x000886; 	X(MOV(word_2d0dc, ax));	// 15821 mov     word_2D0DC, ax ;~ 0934:0886
cs=0x934;eip=0x000889; 	T(SUB(dx, dx));	// 15822 sub     dx, dx ;~ 0934:0889
cs=0x934;eip=0x00088b; 	X(MOV(word_2d09a, ax));	// 15823 mov     word_2D09A, ax ;~ 0934:088B
cs=0x934;eip=0x00088e; 	X(MOV(word_2d09c, dx));	// 15824 mov     word_2D09C, dx ;~ 0934:088E
cs=0x934;eip=0x000892; 	X(MOV(word_2d08e, ax));	// 15825 mov     word_2D08E, ax ;~ 0934:0892
cs=0x934;eip=0x000895; 	X(MOV(word_2d090, dx));	// 15826 mov     word_2D090, dx ;~ 0934:0895
cs=0x934;eip=0x000899; 	X(MOV(word_352cf, ax));	// 15827 mov     word_352CF, ax ;~ 0934:0899
cs=0x934;eip=0x00089c; 	X(MOV(byte_3a3a1, al));	// 15828 mov     byte_3A3A1, al ;~ 0934:089C
cs=0x934;eip=0x00089f; 	T(SUB(ah, ah));	// 15829 sub     ah, ah ;~ 0934:089F
cs=0x934;eip=0x0008a1; 	X(MOV(word_2d088, ax));	// 15830 mov     word_2D088, ax ;~ 0934:08A1
cs=0x934;eip=0x0008a4; 	X(MOV(word_2d0e4, ax));	// 15831 mov     word_2D0E4, ax ;~ 0934:08A4
cs=0x934;eip=0x0008a7; 	X(MOV(word_2d0e6, dx));	// 15832 mov     word_2D0E6, dx ;~ 0934:08A7
cs=0x934;eip=0x0008ab; 	X(MOV(byte_3a17a, 0x10));	// 15833 mov     byte_3A17A, 10h ;~ 0934:08AB
cs=0x934;eip=0x0008b0; 	T(MOV(al, *(db*)(((db*)&word_367b9))));	// 15834 mov     al, byte ptr word_367B9 ;~ 0934:08B0
cs=0x934;eip=0x0008b3; 	T(ADD(al, 0x40));	// 15835 add     al, 40h ; '@' ;~ 0934:08B3
cs=0x934;eip=0x0008b5; 	T(MOV(ch, al));	// 15836 mov     ch, al ;~ 0934:08B5
cs=0x934;eip=0x0008b7; 	T(SUB(cl, cl));	// 15837 sub     cl, cl ;~ 0934:08B7
cs=0x934;eip=0x0008b9; 	X(MOV(word_352d1, cx));	// 15838 mov     word_352D1, cx ;~ 0934:08B9
cs=0x934;eip=0x0008bd; 	X(MOV(word_2d08a, cx));	// 15839 mov     word_2D08A, cx ;~ 0934:08BD
cs=0x934;eip=0x0008c1; 	X(MOV(word_2d08c, cx));	// 15840 mov     word_2D08C, cx ;~ 0934:08C1
cs=0x934;eip=0x0008c5; 	T(MOV(ax, word_35b33));	// 15841 mov     ax, word_35B33 ;~ 0934:08C5
cs=0x934;eip=0x0008c8; 	T(MOV(cl, 7));	// 15842 mov     cl, 7 ;~ 0934:08C8
loc_181ea:
	// 5210 
cs=0x934;eip=0x0008ca; 	T(SHL(ax, 1));	// 15845 shl     ax, 1 ;~ 0934:08CA
cs=0x934;eip=0x0008cc; 	T(RCL(dx, 1));	// 15846 rcl     dx, 1 ;~ 0934:08CC
cs=0x934;eip=0x0008ce; 	T(DEC(cl));	// 15847 dec     cl ;~ 0934:08CE
cs=0x934;eip=0x0008d0; 	R(JNZ(loc_181ea));	// 15848 jnz     short loc_181EA ;~ 0934:08D0
cs=0x934;eip=0x0008d2; 	X(MOV(word_2d09e, ax));	// 15849 mov     word_2D09E, ax ;~ 0934:08D2
cs=0x934;eip=0x0008d5; 	X(MOV(word_2d0a0, dx));	// 15850 mov     word_2D0A0, dx ;~ 0934:08D5
cs=0x934;eip=0x0008d9; 	T(MOV(ax, word_35db3));	// 15851 mov     ax, word_35DB3 ;~ 0934:08D9
cs=0x934;eip=0x0008dc; 	T(SUB(dx, dx));	// 15852 sub     dx, dx ;~ 0934:08DC
cs=0x934;eip=0x0008de; 	T(MOV(cl, 7));	// 15853 mov     cl, 7 ;~ 0934:08DE
loc_18200:
	// 5211 
cs=0x934;eip=0x0008e0; 	T(SHL(ax, 1));	// 15856 shl     ax, 1 ;~ 0934:08E0
cs=0x934;eip=0x0008e2; 	T(RCL(dx, 1));	// 15857 rcl     dx, 1 ;~ 0934:08E2
cs=0x934;eip=0x0008e4; 	T(DEC(cl));	// 15858 dec     cl ;~ 0934:08E4
cs=0x934;eip=0x0008e6; 	R(JNZ(loc_18200));	// 15859 jnz     short loc_18200 ;~ 0934:08E6
cs=0x934;eip=0x0008e8; 	X(MOV(word_2d0a2, ax));	// 15860 mov     word_2D0A2, ax ;~ 0934:08E8
cs=0x934;eip=0x0008eb; 	X(MOV(word_2d0a4, dx));	// 15861 mov     word_2D0A4, dx ;~ 0934:08EB
cs=0x934;eip=0x0008ef; 	T(MOV(ax, word_36033));	// 15862 mov     ax, word_36033 ;~ 0934:08EF
cs=0x934;eip=0x0008f2; 	T(SUB(ax, word_352ff));	// 15863 sub     ax, word_352FF ;~ 0934:08F2
cs=0x934;eip=0x0008f6; 	X(MOV(word_378c5, ax));	// 15864 mov     word_378C5, ax ;~ 0934:08F6
cs=0x934;eip=0x0008f9; 	T(CWD);	// 15865 cwd ;~ 0934:08F9
cs=0x934;eip=0x0008fa; 	T(MOV(cl, 7));	// 15866 mov     cl, 7 ;~ 0934:08FA
loc_1821c:
	// 5212 
cs=0x934;eip=0x0008fc; 	T(SHL(ax, 1));	// 15869 shl     ax, 1 ;~ 0934:08FC
cs=0x934;eip=0x0008fe; 	T(RCL(dx, 1));	// 15870 rcl     dx, 1 ;~ 0934:08FE
cs=0x934;eip=0x000900; 	T(DEC(cl));	// 15871 dec     cl ;~ 0934:0900
cs=0x934;eip=0x000902; 	R(JNZ(loc_1821c));	// 15872 jnz     short loc_1821C ;~ 0934:0902
cs=0x934;eip=0x000904; 	X(MOV(word_2d0a6, ax));	// 15873 mov     word_2D0A6, ax ;~ 0934:0904
cs=0x934;eip=0x000907; 	X(MOV(word_2d0a8, dx));	// 15874 mov     word_2D0A8, dx ;~ 0934:0907
cs=0x934;eip=0x00090b; 	X(MOV(byte_37552, 0x0FF));	// 15875 mov     byte_37552, 0FFh ;~ 0934:090B
cs=0x934;eip=0x000910; 	T(MOV(ax, 0x64));	// 15876 mov     ax, 64h ; 'd' ;~ 0934:0910
cs=0x934;eip=0x000913; 	X(PUSH(ax));	// 15877 push    ax ;~ 0934:0913
cs=0x934;eip=0x000914; 	T(MOV(ax, 0x0A0));	// 15878 mov     ax, 0A0h ; '†' ;~ 0934:0914
cs=0x934;eip=0x000917; 	X(PUSH(ax));	// 15879 push    ax ;~ 0934:0917
cs=0x934;eip=0x000918; 	R(CALLF(sub_26ef9,0));	// 15880 call    sub_26EF9 ;~ 0934:0918
cs=0x934;eip=0x00091d; 	T(ADD(sp, 4));	// 15881 add     sp, 4 ;~ 0934:091D
cs=0x934;eip=0x000920; 	R(RETF(0));	// 15882 retf ;~ 0934:0920
sub_18242:
	// 15892 
#undef var_2
#define var_2 -2
	// 15894 var_2           = word ptr -2 ;~ 0934:0922
ret_934_922:
	// 5213 
cs=0x934;eip=0x000922; 	X(PUSH(bp));	// 15896 push    bp ;~ 0934:0922
cs=0x934;eip=0x000923; 	T(MOV(bp, sp));	// 15897 mov     bp, sp ;~ 0934:0923
cs=0x934;eip=0x000925; 	T(SUB(sp, 2));	// 15898 sub     sp, 2 ;~ 0934:0925
cs=0x934;eip=0x000928; 	T(SUB(al, al));	// 15899 sub     al, al ;~ 0934:0928
cs=0x934;eip=0x00092a; 	X(MOV(byte_38a92, al));	// 15900 mov     byte_38A92, al ;~ 0934:092A
cs=0x934;eip=0x00092d; 	X(MOV(byte_3a170, al));	// 15901 mov     byte_3A170, al ;~ 0934:092D
cs=0x934;eip=0x000930; 	X(MOV(byte_3a3f6, al));	// 15902 mov     byte_3A3F6, al ;~ 0934:0930
cs=0x934;eip=0x000933; 	T(MOV(bl, byte_37517));	// 15903 mov     bl, byte_37517 ;~ 0934:0933
cs=0x934;eip=0x000937; 	T(SUB(bh, bh));	// 15904 sub     bh, bh ;~ 0934:0937
cs=0x934;eip=0x000939; 	T(MOV(al, *(raddr(ds,bx-0x1A9B))));	// 15905 mov     al, [bx-1A9Bh] ;~ 0934:0939
cs=0x934;eip=0x00093d; 	X(MOV(byte_38a97, al));	// 15906 mov     byte_38A97, al ;~ 0934:093D
cs=0x934;eip=0x000940; 	T(INC(al));	// 15907 inc     al ;~ 0934:0940
cs=0x934;eip=0x000942; 	X(MOV(byte_38cd4, al));	// 15908 mov     byte_38CD4, al ;~ 0934:0942
cs=0x934;eip=0x000945; 	T(MOV(al, 0x0FF));	// 15909 mov     al, 0FFh ;~ 0934:0945
cs=0x934;eip=0x000947; 	X(MOV(byte_3a3f7, al));	// 15910 mov     byte_3A3F7, al ;~ 0934:0947
cs=0x934;eip=0x00094a; 	X(MOV(byte_3a6a0, al));	// 15911 mov     byte_3A6A0, al ;~ 0934:094A
cs=0x934;eip=0x00094d; 	X(MOV(byte_38a96, al));	// 15912 mov     byte_38A96, al ;~ 0934:094D
cs=0x934;eip=0x000950; 	X(MOV(byte_38cdd, al));	// 15913 mov     byte_38CDD, al ;~ 0934:0950
cs=0x934;eip=0x000953; 	X(MOV(byte_37552, al));	// 15914 mov     byte_37552, al ;~ 0934:0953
cs=0x934;eip=0x000956; 	X(MOV(byte_3a3a2, 1));	// 15915 mov     byte_3A3A2, 1 ;~ 0934:0956
cs=0x934;eip=0x00095b; 	T(MOV(al, 6));	// 15916 mov     al, 6 ;~ 0934:095B
cs=0x934;eip=0x00095d; 	X(MOV(byte_38a91, al));	// 15917 mov     byte_38A91, al ;~ 0934:095D
cs=0x934;eip=0x000960; 	X(MOV(byte_38acc, al));	// 15918 mov     byte_38ACC, al ;~ 0934:0960
cs=0x934;eip=0x000963; 	X(MOV(byte_34f30, bh));	// 15919 mov     byte_34F30, bh ;~ 0934:0963
cs=0x934;eip=0x000967; 	T(MOV(ax, 0x118A));	// 15920 mov     ax, 118Ah ;~ 0934:0967
cs=0x934;eip=0x00096a; 	X(PUSH(ax));	// 15921 push    ax ;~ 0934:096A
cs=0x934;eip=0x00096b; 	T(MOV(ax, 0x0A8C));	// 15922 mov     ax, 0A8Ch ;~ 0934:096B
cs=0x934;eip=0x00096e; 	X(PUSH(ax));	// 15923 push    ax ;~ 0934:096E
cs=0x934;eip=0x00096f; 	R(CALLF(sub_29b46,0));	// 15924 call    sub_29B46 ;~ 0934:096F
cs=0x934;eip=0x000974; 	T(ADD(sp, 4));	// 15925 add     sp, 4 ;~ 0934:0974
cs=0x934;eip=0x000977; 	T(MOV(ax, 0x0A8A));	// 15926 mov     ax, 0A8Ah ;~ 0934:0977
cs=0x934;eip=0x00097a; 	X(PUSH(ax));	// 15927 push    ax ;~ 0934:097A
cs=0x934;eip=0x00097b; 	R(CALLF(sub_10d62,0));	// 15928 call    sub_10D62 ;~ 0934:097B
cs=0x934;eip=0x000980; 	T(ADD(sp, 2));	// 15929 add     sp, 2 ;~ 0934:0980
cs=0x934;eip=0x000983; 	X(MOV(byte_34f30, 0x80));	// 15930 mov     byte_34F30, 80h ; 'Ä' ;~ 0934:0983
cs=0x934;eip=0x000988; 	T(MOV(ax, 0x1195));	// 15931 mov     ax, 1195h ;~ 0934:0988
cs=0x934;eip=0x00098b; 	X(PUSH(ax));	// 15932 push    ax ;~ 0934:098B
cs=0x934;eip=0x00098c; 	T(MOV(ax, 0x0AC1));	// 15933 mov     ax, 0AC1h ;~ 0934:098C
cs=0x934;eip=0x00098f; 	X(PUSH(ax));	// 15934 push    ax ;~ 0934:098F
cs=0x934;eip=0x000990; 	R(CALLF(sub_29b46,0));	// 15935 call    sub_29B46 ;~ 0934:0990
cs=0x934;eip=0x000995; 	T(ADD(sp, 4));	// 15936 add     sp, 4 ;~ 0934:0995
cs=0x934;eip=0x000998; 	T(MOV(ax, 0x0ABA));	// 15937 mov     ax, 0ABAh ;~ 0934:0998
cs=0x934;eip=0x00099b; 	X(PUSH(ax));	// 15938 push    ax ;~ 0934:099B
cs=0x934;eip=0x00099c; 	R(CALLF(sub_10d62,0));	// 15939 call    sub_10D62 ;~ 0934:099C
cs=0x934;eip=0x0009a1; 	T(ADD(sp, 2));	// 15940 add     sp, 2 ;~ 0934:09A1
cs=0x934;eip=0x0009a4; 	R(CALLF(sub_13b40,0));	// 15941 call    sub_13B40 ;~ 0934:09A4
cs=0x934;eip=0x0009a9; 	T(MOV(ax, 1));	// 15942 mov     ax, 1 ;~ 0934:09A9
cs=0x934;eip=0x0009ac; 	X(MOV(word_2beda, ax));	// 15943 mov     word_2BEDA, ax ;~ 0934:09AC
cs=0x934;eip=0x0009af; 	X(PUSH(ax));	// 15944 push    ax ;~ 0934:09AF
cs=0x934;eip=0x0009b0; 	R(CALLF(sub_2714e,0));	// 15945 call    far ptr sub_2714E ;~ 0934:09B0
cs=0x934;eip=0x0009b5; 	T(ADD(sp, 2));	// 15946 add     sp, 2 ;~ 0934:09B5
cs=0x934;eip=0x0009b8; 	T(SUB(ax, ax));	// 15947 sub     ax, ax ;~ 0934:09B8
cs=0x934;eip=0x0009ba; 	X(PUSH(ax));	// 15948 push    ax ;~ 0934:09BA
cs=0x934;eip=0x0009bb; 	R(CALLF(sub_27031,0));	// 15949 call    far ptr sub_27031 ;~ 0934:09BB
cs=0x934;eip=0x0009c0; 	T(ADD(sp, 2));	// 15950 add     sp, 2 ;~ 0934:09C0
cs=0x934;eip=0x0009c3; 	T(MOV(ax, 0x6F));	// 15951 mov     ax, 6Fh ; 'o' ;~ 0934:09C3
cs=0x934;eip=0x0009c6; 	X(PUSH(ax));	// 15952 push    ax ;~ 0934:09C6
cs=0x934;eip=0x0009c7; 	T(MOV(ax, 0x10));	// 15953 mov     ax, 10h ;~ 0934:09C7
cs=0x934;eip=0x0009ca; 	X(PUSH(ax));	// 15954 push    ax ;~ 0934:09CA
cs=0x934;eip=0x0009cb; 	T(MOV(ax, 0x13F));	// 15955 mov     ax, 13Fh ;~ 0934:09CB
cs=0x934;eip=0x0009ce; 	X(PUSH(ax));	// 15956 push    ax ;~ 0934:09CE
cs=0x934;eip=0x0009cf; 	T(SUB(ax, ax));	// 15957 sub     ax, ax ;~ 0934:09CF
cs=0x934;eip=0x0009d1; 	X(PUSH(ax));	// 15958 push    ax ;~ 0934:09D1
cs=0x934;eip=0x0009d2; 	R(CALLF(sub_2785b,0));	// 15959 call    far ptr sub_2785B ;~ 0934:09D2
cs=0x934;eip=0x0009d7; 	T(ADD(sp, 8));	// 15960 add     sp, 8 ;~ 0934:09D7
cs=0x934;eip=0x0009da; 	T(MOV(ax, 0x0C7));	// 15961 mov     ax, 0C7h ; '«' ;~ 0934:09DA
cs=0x934;eip=0x0009dd; 	X(PUSH(ax));	// 15962 push    ax ;~ 0934:09DD
cs=0x934;eip=0x0009de; 	X(PUSH(cs));	// 15963 push    cs ;~ 0934:09DE
cs=0x934;eip=0x0009df; 	R(CALL(sub_19586,0));	// 15964 call    near ptr sub_19586 ;~ 0934:09DF
cs=0x934;eip=0x0009e2; 	T(ADD(sp, 2));	// 15965 add     sp, 2 ;~ 0934:09E2
cs=0x934;eip=0x0009e5; 	T(MOV(ax, 1));	// 15966 mov     ax, 1 ;~ 0934:09E5
cs=0x934;eip=0x0009e8; 	X(MOV(word_2beda, ax));	// 15967 mov     word_2BEDA, ax ;~ 0934:09E8
cs=0x934;eip=0x0009eb; 	X(PUSH(ax));	// 15968 push    ax ;~ 0934:09EB
cs=0x934;eip=0x0009ec; 	R(CALLF(sub_2714e,0));	// 15969 call    far ptr sub_2714E ;~ 0934:09EC
cs=0x934;eip=0x0009f1; 	T(ADD(sp, 2));	// 15970 add     sp, 2 ;~ 0934:09F1
cs=0x934;eip=0x0009f4; 	T(MOV(ax, 0x119D));	// 15971 mov     ax, 119Dh ;~ 0934:09F4
cs=0x934;eip=0x0009f7; 	X(PUSH(ax));	// 15972 push    ax ;~ 0934:09F7
cs=0x934;eip=0x0009f8; 	T(MOV(ax, 0x0AC1));	// 15973 mov     ax, 0AC1h ;~ 0934:09F8
cs=0x934;eip=0x0009fb; 	X(PUSH(ax));	// 15974 push    ax ;~ 0934:09FB
cs=0x934;eip=0x0009fc; 	R(CALLF(sub_29b46,0));	// 15975 call    sub_29B46 ;~ 0934:09FC
cs=0x934;eip=0x000a01; 	T(ADD(sp, 4));	// 15976 add     sp, 4 ;~ 0934:0A01
cs=0x934;eip=0x000a04; 	X(PUSH(word_38a9e));	// 15977 push    word_38A9E ;~ 0934:0A04
cs=0x934;eip=0x000a08; 	X(PUSH(word_38a9c));	// 15978 push    word_38A9C ;~ 0934:0A08
cs=0x934;eip=0x000a0c; 	T(MOV(ax, 0x0ABA));	// 15979 mov     ax, 0ABAh ;~ 0934:0A0C
cs=0x934;eip=0x000a0f; 	X(PUSH(ax));	// 15980 push    ax ;~ 0934:0A0F
cs=0x934;eip=0x000a10; 	R(CALLF(sub_10ee0,0));	// 15981 call    sub_10EE0 ;~ 0934:0A10
cs=0x934;eip=0x000a15; 	T(ADD(sp, 6));	// 15982 add     sp, 6 ;~ 0934:0A15
cs=0x934;eip=0x000a18; 	T(MOV(ax, 0x2500));	// 15983 mov     ax, 2500h ;~ 0934:0A18
cs=0x934;eip=0x000a1b; 	X(PUSH(ds));	// 15984 push    ds ;~ 0934:0A1B
cs=0x934;eip=0x000a1c; 	X(PUSH(ax));	// 15985 push    ax ;~ 0934:0A1C
cs=0x934;eip=0x000a1d; 	X(PUSH(word_38a9e));	// 15986 push    word_38A9E ;~ 0934:0A1D
cs=0x934;eip=0x000a21; 	X(PUSH(word_38a9c));	// 15987 push    word_38A9C ;~ 0934:0A21
cs=0x934;eip=0x000a25; 	R(CALLF(sub_1ab87,0));	// 15988 call    sub_1AB87 ;~ 0934:0A25
cs=0x934;eip=0x000a2a; 	T(ADD(sp, 8));	// 15989 add     sp, 8 ;~ 0934:0A2A
cs=0x934;eip=0x000a2d; 	T(SUB(ax, ax));	// 15990 sub     ax, ax ;~ 0934:0A2D
cs=0x934;eip=0x000a2f; 	X(PUSH(ax));	// 15991 push    ax ;~ 0934:0A2F
cs=0x934;eip=0x000a30; 	T(MOV(ax, 0x0AF));	// 15992 mov     ax, 0AFh ; 'Ø' ;~ 0934:0A30
cs=0x934;eip=0x000a33; 	X(PUSH(ax));	// 15993 push    ax ;~ 0934:0A33
cs=0x934;eip=0x000a34; 	T(MOV(ax, 0x108));	// 15994 mov     ax, 108h ;~ 0934:0A34
cs=0x934;eip=0x000a37; 	X(PUSH(ax));	// 15995 push    ax ;~ 0934:0A37
cs=0x934;eip=0x000a38; 	T(MOV(ax, 0x38));	// 15996 mov     ax, 38h ; '8' ;~ 0934:0A38
cs=0x934;eip=0x000a3b; 	X(PUSH(ax));	// 15997 push    ax ;~ 0934:0A3B
cs=0x934;eip=0x000a3c; 	X(PUSH(word_2c9a4));	// 15998 push    word_2C9A4 ;~ 0934:0A3C
cs=0x934;eip=0x000a40; 	T(MOV(ax, 0x2500));	// 15999 mov     ax, 2500h ;~ 0934:0A40
cs=0x934;eip=0x000a43; 	X(PUSH(ax));	// 16000 push    ax ;~ 0934:0A43
cs=0x934;eip=0x000a44; 	R(CALLF(sub_178ec,0));	// 16001 call    sub_178EC ;~ 0934:0A44
cs=0x934;eip=0x000a49; 	T(ADD(sp, 0x0C));	// 16002 add     sp, 0Ch ;~ 0934:0A49
cs=0x934;eip=0x000a4c; 	T(MOV(ax, 0x9C));	// 16003 mov     ax, 9Ch ; 'ú' ;~ 0934:0A4C
cs=0x934;eip=0x000a4f; 	X(PUSH(ax));	// 16004 push    ax ;~ 0934:0A4F
cs=0x934;eip=0x000a50; 	T(MOV(ax, 0x118));	// 16005 mov     ax, 118h ;~ 0934:0A50
cs=0x934;eip=0x000a53; 	X(PUSH(ax));	// 16006 push    ax ;~ 0934:0A53
cs=0x934;eip=0x000a54; 	R(CALLF(sub_26fb8,0));	// 16007 call    sub_26FB8 ;~ 0934:0A54
cs=0x934;eip=0x000a59; 	T(ADD(sp, 4));	// 16008 add     sp, 4 ;~ 0934:0A59
cs=0x934;eip=0x000a5c; 	T(CMP(word_3a178, 0x13));	// 16009 cmp     word_3A178, 13h ;~ 0934:0A5C
cs=0x934;eip=0x000a61; 	R(JNZ(loc_1838a));	// 16010 jnz     short loc_1838A ;~ 0934:0A61
cs=0x934;eip=0x000a63; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x80));	// 16011 mov     [bp+var_2], 80h ; 'Ä' ;~ 0934:0A63
cs=0x934;eip=0x000a68; 	R(JMP(loc_1838f));	// 16012 jmp     short loc_1838F ;~ 0934:0A68
loc_1838a:
	// 5214 
cs=0x934;eip=0x000a6a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 16016 mov     [bp+var_2], 0 ;~ 0934:0A6A
loc_1838f:
	// 5215 
cs=0x934;eip=0x000a6f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 16019 mov     ax, [bp+var_2] ;~ 0934:0A6F
cs=0x934;eip=0x000a72; 	T(ADD(ax, 0x0F));	// 16020 add     ax, 0Fh ;~ 0934:0A72
cs=0x934;eip=0x000a75; 	X(PUSH(ax));	// 16021 push    ax ;~ 0934:0A75
cs=0x934;eip=0x000a76; 	R(CALLF(sub_27031,0));	// 16022 call    far ptr sub_27031 ;~ 0934:0A76
cs=0x934;eip=0x000a7b; 	T(ADD(sp, 2));	// 16023 add     sp, 2 ;~ 0934:0A7B
cs=0x934;eip=0x000a7e; 	T(MOV(ax, 5));	// 16024 mov     ax, 5 ;~ 0934:0A7E
cs=0x934;eip=0x000a81; 	X(PUSH(ax));	// 16025 push    ax ;~ 0934:0A81
cs=0x934;eip=0x000a82; 	T(MOV(ax, 1));	// 16026 mov     ax, 1 ;~ 0934:0A82
cs=0x934;eip=0x000a85; 	X(PUSH(ax));	// 16027 push    ax ;~ 0934:0A85
cs=0x934;eip=0x000a86; 	T(MOV(ax, 0x0E554));	// 16028 mov     ax, 0E554h ;~ 0934:0A86
cs=0x934;eip=0x000a89; 	X(PUSH(ax));	// 16029 push    ax ;~ 0934:0A89
cs=0x934;eip=0x000a8a; 	R(CALLF(sub_28b34,0));	// 16030 call    far ptr sub_28B34 ;~ 0934:0A8A
cs=0x934;eip=0x000a8f; 	T(ADD(sp, 6));	// 16031 add     sp, 6 ;~ 0934:0A8F
cs=0x934;eip=0x000a92; 	T(MOV(ax, 0x0AF));	// 16032 mov     ax, 0AFh ; 'Ø' ;~ 0934:0A92
cs=0x934;eip=0x000a95; 	X(PUSH(ax));	// 16033 push    ax ;~ 0934:0A95
cs=0x934;eip=0x000a96; 	T(MOV(ax, 0x120));	// 16034 mov     ax, 120h ;~ 0934:0A96
cs=0x934;eip=0x000a99; 	X(PUSH(ax));	// 16035 push    ax ;~ 0934:0A99
cs=0x934;eip=0x000a9a; 	R(CALLF(sub_26fb8,0));	// 16036 call    sub_26FB8 ;~ 0934:0A9A
cs=0x934;eip=0x000a9f; 	T(ADD(sp, 4));	// 16037 add     sp, 4 ;~ 0934:0A9F
cs=0x934;eip=0x000aa2; 	T(MOV(ax, 0x18));	// 16038 mov     ax, 18h ;~ 0934:0AA2
cs=0x934;eip=0x000aa5; 	X(PUSH(ax));	// 16039 push    ax ;~ 0934:0AA5
cs=0x934;eip=0x000aa6; 	T(MOV(ax, 4));	// 16040 mov     ax, 4 ;~ 0934:0AA6
cs=0x934;eip=0x000aa9; 	X(PUSH(ax));	// 16041 push    ax ;~ 0934:0AA9
cs=0x934;eip=0x000aaa; 	T(MOV(ax, 0x0E090));	// 16042 mov     ax, 0E090h ;~ 0934:0AAA
cs=0x934;eip=0x000aad; 	X(PUSH(ax));	// 16043 push    ax ;~ 0934:0AAD
cs=0x934;eip=0x000aae; 	R(CALLF(sub_28b34,0));	// 16044 call    far ptr sub_28B34 ;~ 0934:0AAE
cs=0x934;eip=0x000ab3; 	T(ADD(sp, 6));	// 16045 add     sp, 6 ;~ 0934:0AB3
cs=0x934;eip=0x000ab6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 16046 mov     ax, [bp+var_2] ;~ 0934:0AB6
cs=0x934;eip=0x000ab9; 	T(ADD(ax, 7));	// 16047 add     ax, 7 ;~ 0934:0AB9
cs=0x934;eip=0x000abc; 	X(PUSH(ax));	// 16048 push    ax ;~ 0934:0ABC
cs=0x934;eip=0x000abd; 	R(CALLF(sub_27031,0));	// 16049 call    far ptr sub_27031 ;~ 0934:0ABD
cs=0x934;eip=0x000ac2; 	T(ADD(sp, 2));	// 16050 add     sp, 2 ;~ 0934:0AC2
cs=0x934;eip=0x000ac5; 	T(MOV(ax, 0x18));	// 16051 mov     ax, 18h ;~ 0934:0AC5
cs=0x934;eip=0x000ac8; 	X(PUSH(ax));	// 16052 push    ax ;~ 0934:0AC8
cs=0x934;eip=0x000ac9; 	T(MOV(ax, 4));	// 16053 mov     ax, 4 ;~ 0934:0AC9
cs=0x934;eip=0x000acc; 	X(PUSH(ax));	// 16054 push    ax ;~ 0934:0ACC
cs=0x934;eip=0x000acd; 	T(MOV(ax, 0x0E0F0));	// 16055 mov     ax, 0E0F0h ;~ 0934:0ACD
cs=0x934;eip=0x000ad0; 	X(PUSH(ax));	// 16056 push    ax ;~ 0934:0AD0
cs=0x934;eip=0x000ad1; 	R(CALLF(sub_28b34,0));	// 16057 call    far ptr sub_28B34 ;~ 0934:0AD1
cs=0x934;eip=0x000ad6; 	T(ADD(sp, 6));	// 16058 add     sp, 6 ;~ 0934:0AD6
cs=0x934;eip=0x000ad9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 16059 mov     ax, [bp+var_2] ;~ 0934:0AD9
cs=0x934;eip=0x000adc; 	T(ADD(ax, 8));	// 16060 add     ax, 8 ;~ 0934:0ADC
cs=0x934;eip=0x000adf; 	X(PUSH(ax));	// 16061 push    ax ;~ 0934:0ADF
cs=0x934;eip=0x000ae0; 	R(CALLF(sub_27031,0));	// 16062 call    far ptr sub_27031 ;~ 0934:0AE0
cs=0x934;eip=0x000ae5; 	T(ADD(sp, 2));	// 16063 add     sp, 2 ;~ 0934:0AE5
cs=0x934;eip=0x000ae8; 	T(MOV(ax, 0x18));	// 16064 mov     ax, 18h ;~ 0934:0AE8
cs=0x934;eip=0x000aeb; 	X(PUSH(ax));	// 16065 push    ax ;~ 0934:0AEB
cs=0x934;eip=0x000aec; 	T(MOV(ax, 4));	// 16066 mov     ax, 4 ;~ 0934:0AEC
cs=0x934;eip=0x000aef; 	X(PUSH(ax));	// 16067 push    ax ;~ 0934:0AEF
cs=0x934;eip=0x000af0; 	T(MOV(ax, 0x0E150));	// 16068 mov     ax, 0E150h ;~ 0934:0AF0
cs=0x934;eip=0x000af3; 	X(PUSH(ax));	// 16069 push    ax ;~ 0934:0AF3
cs=0x934;eip=0x000af4; 	R(CALLF(sub_28b34,0));	// 16070 call    far ptr sub_28B34 ;~ 0934:0AF4
cs=0x934;eip=0x000af9; 	T(ADD(sp, 6));	// 16071 add     sp, 6 ;~ 0934:0AF9
cs=0x934;eip=0x000afc; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 16072 push    [bp+var_2] ;~ 0934:0AFC
cs=0x934;eip=0x000aff; 	R(CALLF(sub_27031,0));	// 16073 call    far ptr sub_27031 ;~ 0934:0AFF
cs=0x934;eip=0x000b04; 	T(ADD(sp, 2));	// 16074 add     sp, 2 ;~ 0934:0B04
cs=0x934;eip=0x000b07; 	T(MOV(ax, 0x18));	// 16075 mov     ax, 18h ;~ 0934:0B07
cs=0x934;eip=0x000b0a; 	X(PUSH(ax));	// 16076 push    ax ;~ 0934:0B0A
cs=0x934;eip=0x000b0b; 	T(MOV(ax, 4));	// 16077 mov     ax, 4 ;~ 0934:0B0B
cs=0x934;eip=0x000b0e; 	X(PUSH(ax));	// 16078 push    ax ;~ 0934:0B0E
cs=0x934;eip=0x000b0f; 	T(MOV(ax, 0x0E1B0));	// 16079 mov     ax, 0E1B0h ;~ 0934:0B0F
cs=0x934;eip=0x000b12; 	X(PUSH(ax));	// 16080 push    ax ;~ 0934:0B12
cs=0x934;eip=0x000b13; 	R(CALLF(sub_28b34,0));	// 16081 call    far ptr sub_28B34 ;~ 0934:0B13
cs=0x934;eip=0x000b18; 	T(ADD(sp, 6));	// 16082 add     sp, 6 ;~ 0934:0B18
cs=0x934;eip=0x000b1b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 16083 mov     ax, [bp+var_2] ;~ 0934:0B1B
cs=0x934;eip=0x000b1e; 	T(ADD(ax, 0x0C));	// 16084 add     ax, 0Ch ;~ 0934:0B1E
cs=0x934;eip=0x000b21; 	X(PUSH(ax));	// 16085 push    ax ;~ 0934:0B21
cs=0x934;eip=0x000b22; 	R(CALLF(sub_27031,0));	// 16086 call    far ptr sub_27031 ;~ 0934:0B22
cs=0x934;eip=0x000b27; 	T(ADD(sp, 2));	// 16087 add     sp, 2 ;~ 0934:0B27
cs=0x934;eip=0x000b2a; 	T(MOV(ax, 0x18));	// 16088 mov     ax, 18h ;~ 0934:0B2A
cs=0x934;eip=0x000b2d; 	X(PUSH(ax));	// 16089 push    ax ;~ 0934:0B2D
cs=0x934;eip=0x000b2e; 	T(MOV(ax, 4));	// 16090 mov     ax, 4 ;~ 0934:0B2E
cs=0x934;eip=0x000b31; 	X(PUSH(ax));	// 16091 push    ax ;~ 0934:0B31
cs=0x934;eip=0x000b32; 	T(MOV(ax, 0x0E210));	// 16092 mov     ax, 0E210h ;~ 0934:0B32
cs=0x934;eip=0x000b35; 	X(PUSH(ax));	// 16093 push    ax ;~ 0934:0B35
cs=0x934;eip=0x000b36; 	R(CALLF(sub_28b34,0));	// 16094 call    far ptr sub_28B34 ;~ 0934:0B36
cs=0x934;eip=0x000b3b; 	T(ADD(sp, 6));	// 16095 add     sp, 6 ;~ 0934:0B3B
cs=0x934;eip=0x000b3e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 16096 mov     ax, [bp+var_2] ;~ 0934:0B3E
cs=0x934;eip=0x000b41; 	T(ADD(ax, 4));	// 16097 add     ax, 4 ;~ 0934:0B41
cs=0x934;eip=0x000b44; 	X(PUSH(ax));	// 16098 push    ax ;~ 0934:0B44
cs=0x934;eip=0x000b45; 	R(CALLF(sub_27031,0));	// 16099 call    far ptr sub_27031 ;~ 0934:0B45
cs=0x934;eip=0x000b4a; 	T(ADD(sp, 2));	// 16100 add     sp, 2 ;~ 0934:0B4A
cs=0x934;eip=0x000b4d; 	T(MOV(ax, 0x18));	// 16101 mov     ax, 18h ;~ 0934:0B4D
cs=0x934;eip=0x000b50; 	X(PUSH(ax));	// 16102 push    ax ;~ 0934:0B50
cs=0x934;eip=0x000b51; 	T(MOV(ax, 4));	// 16103 mov     ax, 4 ;~ 0934:0B51
cs=0x934;eip=0x000b54; 	X(PUSH(ax));	// 16104 push    ax ;~ 0934:0B54
cs=0x934;eip=0x000b55; 	T(MOV(ax, 0x0E270));	// 16105 mov     ax, 0E270h ;~ 0934:0B55
cs=0x934;eip=0x000b58; 	X(PUSH(ax));	// 16106 push    ax ;~ 0934:0B58
cs=0x934;eip=0x000b59; 	R(CALLF(sub_28b34,0));	// 16107 call    far ptr sub_28B34 ;~ 0934:0B59
cs=0x934;eip=0x000b5e; 	T(ADD(sp, 6));	// 16108 add     sp, 6 ;~ 0934:0B5E
cs=0x934;eip=0x000b61; 	T(MOV(ax, 1));	// 16109 mov     ax, 1 ;~ 0934:0B61
cs=0x934;eip=0x000b64; 	X(PUSH(ax));	// 16110 push    ax ;~ 0934:0B64
cs=0x934;eip=0x000b65; 	T(SUB(ax, ax));	// 16111 sub     ax, ax ;~ 0934:0B65
cs=0x934;eip=0x000b67; 	X(PUSH(ax));	// 16112 push    ax ;~ 0934:0B67
cs=0x934;eip=0x000b68; 	T(MOV(ax, 0x67));	// 16113 mov     ax, 67h ; 'g' ;~ 0934:0B68
cs=0x934;eip=0x000b6b; 	X(PUSH(ax));	// 16114 push    ax ;~ 0934:0B6B
cs=0x934;eip=0x000b6c; 	T(SUB(ax, ax));	// 16115 sub     ax, ax ;~ 0934:0B6C
cs=0x934;eip=0x000b6e; 	X(PUSH(ax));	// 16116 push    ax ;~ 0934:0B6E
cs=0x934;eip=0x000b6f; 	T(MOV(ax, 0x0C7));	// 16117 mov     ax, 0C7h ; '«' ;~ 0934:0B6F
cs=0x934;eip=0x000b72; 	X(PUSH(ax));	// 16118 push    ax ;~ 0934:0B72
cs=0x934;eip=0x000b73; 	T(MOV(ax, 0x70));	// 16119 mov     ax, 70h ; 'p' ;~ 0934:0B73
cs=0x934;eip=0x000b76; 	X(PUSH(ax));	// 16120 push    ax ;~ 0934:0B76
cs=0x934;eip=0x000b77; 	T(MOV(ax, 0x13F));	// 16121 mov     ax, 13Fh ;~ 0934:0B77
cs=0x934;eip=0x000b7a; 	X(PUSH(ax));	// 16122 push    ax ;~ 0934:0B7A
cs=0x934;eip=0x000b7b; 	T(SUB(ax, ax));	// 16123 sub     ax, ax ;~ 0934:0B7B
cs=0x934;eip=0x000b7d; 	X(PUSH(ax));	// 16124 push    ax ;~ 0934:0B7D
cs=0x934;eip=0x000b7e; 	R(CALLF(sub_28183,0));	// 16125 call    far ptr sub_28183 ;~ 0934:0B7E
cs=0x934;eip=0x000b83; 	T(ADD(sp, 0x10));	// 16126 add     sp, 10h ;~ 0934:0B83
cs=0x934;eip=0x000b86; 	T(MOV(ax, 1));	// 16127 mov     ax, 1 ;~ 0934:0B86
cs=0x934;eip=0x000b89; 	X(PUSH(ax));	// 16128 push    ax ;~ 0934:0B89
cs=0x934;eip=0x000b8a; 	T(SUB(ax, ax));	// 16129 sub     ax, ax ;~ 0934:0B8A
cs=0x934;eip=0x000b8c; 	X(PUSH(ax));	// 16130 push    ax ;~ 0934:0B8C
cs=0x934;eip=0x000b8d; 	T(MOV(ax, 0x88));	// 16131 mov     ax, 88h ; 'à' ;~ 0934:0B8D
cs=0x934;eip=0x000b90; 	X(PUSH(ax));	// 16132 push    ax ;~ 0934:0B90
cs=0x934;eip=0x000b91; 	T(MOV(ax, 0x0A8));	// 16133 mov     ax, 0A8h ; '®' ;~ 0934:0B91
cs=0x934;eip=0x000b94; 	X(PUSH(ax));	// 16134 push    ax ;~ 0934:0B94
cs=0x934;eip=0x000b95; 	X(PUSH(word_38abe));	// 16135 push    word_38ABE ;~ 0934:0B95
cs=0x934;eip=0x000b99; 	T(MOV(ax, word_38abe));	// 16136 mov     ax, word_38ABE ;~ 0934:0B99
cs=0x934;eip=0x000b9c; 	T(SUB(ax, 0x20));	// 16137 sub     ax, 20h ; ' ' ;~ 0934:0B9C
cs=0x934;eip=0x000b9f; 	X(PUSH(ax));	// 16138 push    ax ;~ 0934:0B9F
cs=0x934;eip=0x000ba0; 	T(MOV(ax, word_38abc));	// 16139 mov     ax, word_38ABC ;~ 0934:0BA0
cs=0x934;eip=0x000ba3; 	T(ADD(ax, 0x27));	// 16140 add     ax, 27h ; ''' ;~ 0934:0BA3
cs=0x934;eip=0x000ba6; 	X(PUSH(ax));	// 16141 push    ax ;~ 0934:0BA6
cs=0x934;eip=0x000ba7; 	X(PUSH(word_38abc));	// 16142 push    word_38ABC ;~ 0934:0BA7
cs=0x934;eip=0x000bab; 	R(CALLF(sub_28183,0));	// 16143 call    far ptr sub_28183 ;~ 0934:0BAB
cs=0x934;eip=0x000bb0; 	T(ADD(sp, 0x10));	// 16144 add     sp, 10h ;~ 0934:0BB0
cs=0x934;eip=0x000bb3; 	T(MOV(ax, 1));	// 16145 mov     ax, 1 ;~ 0934:0BB3
cs=0x934;eip=0x000bb6; 	X(PUSH(ax));	// 16146 push    ax ;~ 0934:0BB6
cs=0x934;eip=0x000bb7; 	T(SUB(ax, ax));	// 16147 sub     ax, ax ;~ 0934:0BB7
cs=0x934;eip=0x000bb9; 	X(PUSH(ax));	// 16148 push    ax ;~ 0934:0BB9
cs=0x934;eip=0x000bba; 	T(MOV(ax, 0x0A9));	// 16149 mov     ax, 0A9h ; '©' ;~ 0934:0BBA
cs=0x934;eip=0x000bbd; 	X(PUSH(ax));	// 16150 push    ax ;~ 0934:0BBD
cs=0x934;eip=0x000bbe; 	T(MOV(ax, 0x0A8));	// 16151 mov     ax, 0A8h ; '®' ;~ 0934:0BBE
cs=0x934;eip=0x000bc1; 	X(PUSH(ax));	// 16152 push    ax ;~ 0934:0BC1
cs=0x934;eip=0x000bc2; 	X(PUSH(word_38abe));	// 16153 push    word_38ABE ;~ 0934:0BC2
cs=0x934;eip=0x000bc6; 	T(MOV(ax, word_38abe));	// 16154 mov     ax, word_38ABE ;~ 0934:0BC6
cs=0x934;eip=0x000bc9; 	T(SUB(ax, 0x20));	// 16155 sub     ax, 20h ; ' ' ;~ 0934:0BC9
cs=0x934;eip=0x000bcc; 	X(PUSH(ax));	// 16156 push    ax ;~ 0934:0BCC
cs=0x934;eip=0x000bcd; 	T(MOV(ax, word_38abc));	// 16157 mov     ax, word_38ABC ;~ 0934:0BCD
cs=0x934;eip=0x000bd0; 	T(ADD(ax, word_38ac4));	// 16158 add     ax, word_38AC4 ;~ 0934:0BD0
cs=0x934;eip=0x000bd4; 	T(DEC(ax));	// 16159 dec     ax ;~ 0934:0BD4
cs=0x934;eip=0x000bd5; 	X(PUSH(ax));	// 16160 push    ax ;~ 0934:0BD5
cs=0x934;eip=0x000bd6; 	T(MOV(ax, word_38abc));	// 16161 mov     ax, word_38ABC ;~ 0934:0BD6
cs=0x934;eip=0x000bd9; 	T(ADD(ax, 0x28));	// 16162 add     ax, 28h ; '(' ;~ 0934:0BD9
cs=0x934;eip=0x000bdc; 	X(PUSH(ax));	// 16163 push    ax ;~ 0934:0BDC
cs=0x934;eip=0x000bdd; 	R(CALLF(sub_28183,0));	// 16164 call    far ptr sub_28183 ;~ 0934:0BDD
cs=0x934;eip=0x000be2; 	T(ADD(sp, 0x10));	// 16165 add     sp, 10h ;~ 0934:0BE2
cs=0x934;eip=0x000be5; 	T(MOV(ax, 1));	// 16166 mov     ax, 1 ;~ 0934:0BE5
cs=0x934;eip=0x000be8; 	X(PUSH(ax));	// 16167 push    ax ;~ 0934:0BE8
cs=0x934;eip=0x000be9; 	T(SUB(ax, ax));	// 16168 sub     ax, ax ;~ 0934:0BE9
cs=0x934;eip=0x000beb; 	X(PUSH(ax));	// 16169 push    ax ;~ 0934:0BEB
cs=0x934;eip=0x000bec; 	T(MOV(ax, 0x0C7));	// 16170 mov     ax, 0C7h ; '«' ;~ 0934:0BEC
cs=0x934;eip=0x000bef; 	X(PUSH(ax));	// 16171 push    ax ;~ 0934:0BEF
cs=0x934;eip=0x000bf0; 	T(MOV(ax, 0x108));	// 16172 mov     ax, 108h ;~ 0934:0BF0
cs=0x934;eip=0x000bf3; 	X(PUSH(ax));	// 16173 push    ax ;~ 0934:0BF3
cs=0x934;eip=0x000bf4; 	X(PUSH(word_38ac2));	// 16174 push    word_38AC2 ;~ 0934:0BF4
cs=0x934;eip=0x000bf8; 	T(MOV(ax, word_38ac2));	// 16175 mov     ax, word_38AC2 ;~ 0934:0BF8
cs=0x934;eip=0x000bfb; 	T(SUB(ax, 0x20));	// 16176 sub     ax, 20h ; ' ' ;~ 0934:0BFB
cs=0x934;eip=0x000bfe; 	X(PUSH(ax));	// 16177 push    ax ;~ 0934:0BFE
cs=0x934;eip=0x000bff; 	T(MOV(ax, word_38ac0));	// 16178 mov     ax, word_38AC0 ;~ 0934:0BFF
cs=0x934;eip=0x000c02; 	T(ADD(ax, word_38ac6));	// 16179 add     ax, word_38AC6 ;~ 0934:0C02
cs=0x934;eip=0x000c06; 	T(DEC(ax));	// 16180 dec     ax ;~ 0934:0C06
cs=0x934;eip=0x000c07; 	X(PUSH(ax));	// 16181 push    ax ;~ 0934:0C07
cs=0x934;eip=0x000c08; 	X(PUSH(word_38ac0));	// 16182 push    word_38AC0 ;~ 0934:0C08
cs=0x934;eip=0x000c0c; 	R(CALLF(sub_28183,0));	// 16183 call    far ptr sub_28183 ;~ 0934:0C0C
cs=0x934;eip=0x000c11; 	T(ADD(sp, 0x10));	// 16184 add     sp, 10h ;~ 0934:0C11
cs=0x934;eip=0x000c14; 	T(MOV(ax, 0x11A2));	// 16185 mov     ax, 11A2h ;~ 0934:0C14
cs=0x934;eip=0x000c17; 	X(PUSH(ax));	// 16186 push    ax ;~ 0934:0C17
cs=0x934;eip=0x000c18; 	T(MOV(ax, 0x0AC1));	// 16187 mov     ax, 0AC1h ;~ 0934:0C18
cs=0x934;eip=0x000c1b; 	X(PUSH(ax));	// 16188 push    ax ;~ 0934:0C1B
cs=0x934;eip=0x000c1c; 	R(CALLF(sub_29b46,0));	// 16189 call    sub_29B46 ;~ 0934:0C1C
cs=0x934;eip=0x000c21; 	T(ADD(sp, 4));	// 16190 add     sp, 4 ;~ 0934:0C21
cs=0x934;eip=0x000c24; 	X(PUSH(word_38a9e));	// 16191 push    word_38A9E ;~ 0934:0C24
cs=0x934;eip=0x000c28; 	X(PUSH(word_38a9c));	// 16192 push    word_38A9C ;~ 0934:0C28
cs=0x934;eip=0x000c2c; 	T(MOV(ax, 0x0ABA));	// 16193 mov     ax, 0ABAh ;~ 0934:0C2C
cs=0x934;eip=0x000c2f; 	X(PUSH(ax));	// 16194 push    ax ;~ 0934:0C2F
cs=0x934;eip=0x000c30; 	R(CALLF(sub_10ee0,0));	// 16195 call    sub_10EE0 ;~ 0934:0C30
cs=0x934;eip=0x000c35; 	T(ADD(sp, 6));	// 16196 add     sp, 6 ;~ 0934:0C35
cs=0x934;eip=0x000c38; 	T(MOV(ax, 0x2500));	// 16197 mov     ax, 2500h ;~ 0934:0C38
cs=0x934;eip=0x000c3b; 	X(PUSH(ds));	// 16198 push    ds ;~ 0934:0C3B
cs=0x934;eip=0x000c3c; 	X(PUSH(ax));	// 16199 push    ax ;~ 0934:0C3C
cs=0x934;eip=0x000c3d; 	X(PUSH(word_38a9e));	// 16200 push    word_38A9E ;~ 0934:0C3D
cs=0x934;eip=0x000c41; 	X(PUSH(word_38a9c));	// 16201 push    word_38A9C ;~ 0934:0C41
cs=0x934;eip=0x000c45; 	R(CALLF(sub_1ab87,0));	// 16202 call    sub_1AB87 ;~ 0934:0C45
cs=0x934;eip=0x000c4a; 	T(ADD(sp, 8));	// 16203 add     sp, 8 ;~ 0934:0C4A
cs=0x934;eip=0x000c4d; 	T(SUB(ax, ax));	// 16204 sub     ax, ax ;~ 0934:0C4D
cs=0x934;eip=0x000c4f; 	X(PUSH(ax));	// 16205 push    ax ;~ 0934:0C4F
cs=0x934;eip=0x000c50; 	T(MOV(ax, 0x97));	// 16206 mov     ax, 97h ; 'ó' ;~ 0934:0C50
cs=0x934;eip=0x000c53; 	X(PUSH(ax));	// 16207 push    ax ;~ 0934:0C53
cs=0x934;eip=0x000c54; 	T(SUB(ax, ax));	// 16208 sub     ax, ax ;~ 0934:0C54
cs=0x934;eip=0x000c56; 	X(PUSH(ax));	// 16209 push    ax ;~ 0934:0C56
cs=0x934;eip=0x000c57; 	T(MOV(ax, 0x0A8));	// 16210 mov     ax, 0A8h ; '®' ;~ 0934:0C57
cs=0x934;eip=0x000c5a; 	X(PUSH(ax));	// 16211 push    ax ;~ 0934:0C5A
cs=0x934;eip=0x000c5b; 	X(PUSH(word_2c9a0));	// 16212 push    word_2C9A0 ;~ 0934:0C5B
cs=0x934;eip=0x000c5f; 	T(MOV(ax, 0x2500));	// 16213 mov     ax, 2500h ;~ 0934:0C5F
cs=0x934;eip=0x000c62; 	X(PUSH(ax));	// 16214 push    ax ;~ 0934:0C62
cs=0x934;eip=0x000c63; 	R(CALLF(sub_178ec,0));	// 16215 call    sub_178EC ;~ 0934:0C63
cs=0x934;eip=0x000c68; 	T(ADD(sp, 0x0C));	// 16216 add     sp, 0Ch ;~ 0934:0C68
cs=0x934;eip=0x000c6b; 	T(MOV(ax, 0x11A8));	// 16217 mov     ax, 11A8h ;~ 0934:0C6B
cs=0x934;eip=0x000c6e; 	X(PUSH(ax));	// 16218 push    ax ;~ 0934:0C6E
cs=0x934;eip=0x000c6f; 	T(MOV(ax, 0x0AC1));	// 16219 mov     ax, 0AC1h ;~ 0934:0C6F
cs=0x934;eip=0x000c72; 	X(PUSH(ax));	// 16220 push    ax ;~ 0934:0C72
cs=0x934;eip=0x000c73; 	R(CALLF(sub_29b46,0));	// 16221 call    sub_29B46 ;~ 0934:0C73
cs=0x934;eip=0x000c78; 	T(ADD(sp, 4));	// 16222 add     sp, 4 ;~ 0934:0C78
cs=0x934;eip=0x000c7b; 	X(PUSH(word_38a9e));	// 16223 push    word_38A9E ;~ 0934:0C7B
cs=0x934;eip=0x000c7f; 	X(PUSH(word_38a9c));	// 16224 push    word_38A9C ;~ 0934:0C7F
cs=0x934;eip=0x000c83; 	T(MOV(ax, 0x0ABA));	// 16225 mov     ax, 0ABAh ;~ 0934:0C83
cs=0x934;eip=0x000c86; 	X(PUSH(ax));	// 16226 push    ax ;~ 0934:0C86
cs=0x934;eip=0x000c87; 	R(CALLF(sub_10ee0,0));	// 16227 call    sub_10EE0 ;~ 0934:0C87
cs=0x934;eip=0x000c8c; 	T(ADD(sp, 6));	// 16228 add     sp, 6 ;~ 0934:0C8C
cs=0x934;eip=0x000c8f; 	T(MOV(ax, 0x2500));	// 16229 mov     ax, 2500h ;~ 0934:0C8F
cs=0x934;eip=0x000c92; 	X(PUSH(ds));	// 16230 push    ds ;~ 0934:0C92
cs=0x934;eip=0x000c93; 	X(PUSH(ax));	// 16231 push    ax ;~ 0934:0C93
cs=0x934;eip=0x000c94; 	X(PUSH(word_38a9e));	// 16232 push    word_38A9E ;~ 0934:0C94
cs=0x934;eip=0x000c98; 	X(PUSH(word_38a9c));	// 16233 push    word_38A9C ;~ 0934:0C98
cs=0x934;eip=0x000c9c; 	R(CALLF(sub_1ab87,0));	// 16234 call    sub_1AB87 ;~ 0934:0C9C
cs=0x934;eip=0x000ca1; 	T(ADD(sp, 8));	// 16235 add     sp, 8 ;~ 0934:0CA1
cs=0x934;eip=0x000ca4; 	T(SUB(ax, ax));	// 16236 sub     ax, ax ;~ 0934:0CA4
cs=0x934;eip=0x000ca6; 	X(PUSH(ax));	// 16237 push    ax ;~ 0934:0CA6
cs=0x934;eip=0x000ca7; 	T(MOV(ax, 0x0C7));	// 16238 mov     ax, 0C7h ; '«' ;~ 0934:0CA7
cs=0x934;eip=0x000caa; 	X(PUSH(ax));	// 16239 push    ax ;~ 0934:0CAA
cs=0x934;eip=0x000cab; 	T(SUB(ax, ax));	// 16240 sub     ax, ax ;~ 0934:0CAB
cs=0x934;eip=0x000cad; 	X(PUSH(ax));	// 16241 push    ax ;~ 0934:0CAD
cs=0x934;eip=0x000cae; 	T(MOV(ax, 0x0A8));	// 16242 mov     ax, 0A8h ; '®' ;~ 0934:0CAE
cs=0x934;eip=0x000cb1; 	X(PUSH(ax));	// 16243 push    ax ;~ 0934:0CB1
cs=0x934;eip=0x000cb2; 	X(PUSH(word_2c9a2));	// 16244 push    word_2C9A2 ;~ 0934:0CB2
cs=0x934;eip=0x000cb6; 	T(MOV(ax, 0x2500));	// 16245 mov     ax, 2500h ;~ 0934:0CB6
cs=0x934;eip=0x000cb9; 	X(PUSH(ax));	// 16246 push    ax ;~ 0934:0CB9
cs=0x934;eip=0x000cba; 	R(CALLF(sub_178ec,0));	// 16247 call    sub_178EC ;~ 0934:0CBA
cs=0x934;eip=0x000cbf; 	T(ADD(sp, 0x0C));	// 16248 add     sp, 0Ch ;~ 0934:0CBF
cs=0x934;eip=0x000cc2; 	X(PUSH(cs));	// 16249 push    cs ;~ 0934:0CC2
cs=0x934;eip=0x000cc3; 	R(CALL(sub_1971e,0));	// 16250 call    near ptr sub_1971E ;~ 0934:0CC3
cs=0x934;eip=0x000cc6; 	X(MOV(byte_34f30, 0));	// 16251 mov     byte_34F30, 0 ;~ 0934:0CC6
cs=0x934;eip=0x000ccb; 	T(SUB(ax, ax));	// 16252 sub     ax, ax ;~ 0934:0CCB
cs=0x934;eip=0x000ccd; 	X(MOV(word_2beda, ax));	// 16253 mov     word_2BEDA, ax ;~ 0934:0CCD
cs=0x934;eip=0x000cd0; 	X(PUSH(ax));	// 16254 push    ax ;~ 0934:0CD0
cs=0x934;eip=0x000cd1; 	R(CALLF(sub_2714e,0));	// 16255 call    far ptr sub_2714E ;~ 0934:0CD1
cs=0x934;eip=0x000cd6; 	T(ADD(sp, 2));	// 16256 add     sp, 2 ;~ 0934:0CD6
cs=0x934;eip=0x000cd9; 	X(PUSH(cs));	// 16257 push    cs ;~ 0934:0CD9
cs=0x934;eip=0x000cda; 	R(CALL(sub_1860c,0));	// 16258 call    near ptr sub_1860C ;~ 0934:0CDA
cs=0x934;eip=0x000cdd; 	R(CALLF(sub_13b74,0));	// 16259 call    sub_13B74 ;~ 0934:0CDD
cs=0x934;eip=0x000ce2; 	R(CALLF(sub_13b88,0));	// 16260 call    sub_13B88 ;~ 0934:0CE2
cs=0x934;eip=0x000ce7; 	T(MOV(sp, bp));	// 16261 mov     sp, bp ;~ 0934:0CE7
cs=0x934;eip=0x000ce9; 	X(POP(bp));	// 16262 pop     bp ;~ 0934:0CE9
cs=0x934;eip=0x000cea; 	R(RETF(0));	// 16263 retf ;~ 0934:0CEA
sub_1860c:
	// 16272 
cs=0x934;eip=0x000cec; 	T(SUB(ax, ax));	// 16273 sub     ax, ax ;~ 0934:0CEC
ret_934_cee:
	// 5216 
cs=0x934;eip=0x000cee; 	X(MOV(word_2beda, ax));	// 16274 mov     word_2BEDA, ax ;~ 0934:0CEE
cs=0x934;eip=0x000cf1; 	X(PUSH(ax));	// 16275 push    ax ;~ 0934:0CF1
cs=0x934;eip=0x000cf2; 	R(CALLF(sub_2714e,0));	// 16276 call    far ptr sub_2714E ;~ 0934:0CF2
cs=0x934;eip=0x000cf7; 	T(ADD(sp, 2));	// 16277 add     sp, 2 ;~ 0934:0CF7
cs=0x934;eip=0x000cfa; 	T(SUB(ax, ax));	// 16278 sub     ax, ax ;~ 0934:0CFA
cs=0x934;eip=0x000cfc; 	X(PUSH(ax));	// 16279 push    ax ;~ 0934:0CFC
cs=0x934;eip=0x000cfd; 	T(MOV(ax, 0x0F));	// 16280 mov     ax, 0Fh ;~ 0934:0CFD
cs=0x934;eip=0x000d00; 	X(PUSH(ax));	// 16281 push    ax ;~ 0934:0D00
cs=0x934;eip=0x000d01; 	R(CALLF(sub_1c8f3,0));	// 16282 call    sub_1C8F3 ;~ 0934:0D01
cs=0x934;eip=0x000d06; 	T(ADD(sp, 4));	// 16283 add     sp, 4 ;~ 0934:0D06
cs=0x934;eip=0x000d09; 	R(CALLF(sub_2580c,0));	// 16284 call    sub_2580C ;~ 0934:0D09
cs=0x934;eip=0x000d0e; 	R(CALLF(sub_258f5,0));	// 16285 call    sub_258F5 ;~ 0934:0D0E
cs=0x934;eip=0x000d13; 	T(CMP(byte_352cb, 0));	// 16286 cmp     byte_352CB, 0 ;~ 0934:0D13
cs=0x934;eip=0x000d18; 	R(JNZ(loc_1863f));	// 16287 jnz     short loc_1863F ;~ 0934:0D18
cs=0x934;eip=0x000d1a; 	R(CALLF(sub_1d598,0));	// 16288 call    sub_1D598 ;~ 0934:0D1A
loc_1863f:
	// 5217 
cs=0x934;eip=0x000d1f; 	T(SUB(ax, ax));	// 16291 sub     ax, ax ;~ 0934:0D1F
cs=0x934;eip=0x000d21; 	X(MOV(word_2beda, ax));	// 16292 mov     word_2BEDA, ax ;~ 0934:0D21
cs=0x934;eip=0x000d24; 	X(PUSH(ax));	// 16293 push    ax ;~ 0934:0D24
cs=0x934;eip=0x000d25; 	R(CALLF(sub_2714e,0));	// 16294 call    far ptr sub_2714E ;~ 0934:0D25
cs=0x934;eip=0x000d2a; 	T(ADD(sp, 2));	// 16295 add     sp, 2 ;~ 0934:0D2A
cs=0x934;eip=0x000d2d; 	R(RETF(0));	// 16296 retf ;~ 0934:0D2D
sub_1864e:
	// 16304 
#undef var_2
#define var_2 -2
	// 16307 var_2           = word ptr -2 ;~ 0934:0D2E
ret_934_d2e:
	// 5218 
cs=0x934;eip=0x000d2e; 	X(PUSH(bp));	// 16309 push    bp ;~ 0934:0D2E
cs=0x934;eip=0x000d2f; 	T(MOV(bp, sp));	// 16310 mov     bp, sp ;~ 0934:0D2F
cs=0x934;eip=0x000d31; 	T(SUB(sp, 2));	// 16311 sub     sp, 2 ;~ 0934:0D31
cs=0x934;eip=0x000d34; 	R(CALLF(sub_221bc,0));	// 16312 call    sub_221BC ;~ 0934:0D34
cs=0x934;eip=0x000d39; 	T(SUB(al, al));	// 16313 sub     al, al ;~ 0934:0D39
cs=0x934;eip=0x000d3b; 	X(MOV(byte_3a3ee, al));	// 16314 mov     byte_3A3EE, al ;~ 0934:0D3B
cs=0x934;eip=0x000d3e; 	X(MOV(byte_3a39f, al));	// 16315 mov     byte_3A39F, al ;~ 0934:0D3E
cs=0x934;eip=0x000d41; 	X(MOV(byte_3a39e, al));	// 16316 mov     byte_3A39E, al ;~ 0934:0D41
cs=0x934;eip=0x000d44; 	X(MOV(byte_38ce8, al));	// 16317 mov     byte_38CE8, al ;~ 0934:0D44
cs=0x934;eip=0x000d47; 	T(SUB(ah, ah));	// 16318 sub     ah, ah ;~ 0934:0D47
cs=0x934;eip=0x000d49; 	X(MOV(word_352c8, ax));	// 16319 mov     word_352C8, ax ;~ 0934:0D49
cs=0x934;eip=0x000d4c; 	T(MOV(ax, 1));	// 16320 mov     ax, 1 ;~ 0934:0D4C
cs=0x934;eip=0x000d4f; 	X(MOV(word_2beca, ax));	// 16321 mov     word_2BECA, ax ;~ 0934:0D4F
cs=0x934;eip=0x000d52; 	X(MOV(word_3a5b4, ax));	// 16322 mov     word_3A5B4, ax ;~ 0934:0D52
cs=0x934;eip=0x000d55; 	X(MOV(byte_375cd, 0));	// 16323 mov     byte_375CD, 0 ;~ 0934:0D55
cs=0x934;eip=0x000d5a; 	T(CMP(byte_2c804, 0));	// 16324 cmp     byte_2C804, 0 ;~ 0934:0D5A
cs=0x934;eip=0x000d5f; 	R(JNZ(loc_186ae));	// 16325 jnz     short loc_186AE ;~ 0934:0D5F
cs=0x934;eip=0x000d61; 	T(MOV(bl, byte_2c94a));	// 16326 mov     bl, byte_2C94A ;~ 0934:0D61
cs=0x934;eip=0x000d65; 	T(SUB(bh, bh));	// 16327 sub     bh, bh ;~ 0934:0D65
cs=0x934;eip=0x000d67; 	T(MOV(al, *(raddr(ds,bx+0x0B0C))));	// 16328 mov     al, [bx+0B0Ch] ;~ 0934:0D67
cs=0x934;eip=0x000d6b; 	X(MOV(byte_2c923, al));	// 16329 mov     byte_2C923, al ;~ 0934:0D6B
cs=0x934;eip=0x000d6e; 	T(MOV(ax, 0x11AE));	// 16330 mov     ax, 11AEh ;~ 0934:0D6E
cs=0x934;eip=0x000d71; 	X(PUSH(ax));	// 16331 push    ax ;~ 0934:0D71
cs=0x934;eip=0x000d72; 	T(MOV(ax, 0x0AE4));	// 16332 mov     ax, 0AE4h ;~ 0934:0D72
cs=0x934;eip=0x000d75; 	X(PUSH(ax));	// 16333 push    ax ;~ 0934:0D75
cs=0x934;eip=0x000d76; 	R(CALLF(sub_29b46,0));	// 16334 call    sub_29B46 ;~ 0934:0D76
cs=0x934;eip=0x000d7b; 	T(ADD(sp, 4));	// 16335 add     sp, 4 ;~ 0934:0D7B
cs=0x934;eip=0x000d7e; 	T(MOV(ax, 0x2500));	// 16336 mov     ax, 2500h ;~ 0934:0D7E
cs=0x934;eip=0x000d81; 	X(PUSH(ax));	// 16337 push    ax ;~ 0934:0D81
cs=0x934;eip=0x000d82; 	T(MOV(ax, 0x0ADA));	// 16338 mov     ax, 0ADAh ;~ 0934:0D82
cs=0x934;eip=0x000d85; 	X(PUSH(ax));	// 16339 push    ax ;~ 0934:0D85
cs=0x934;eip=0x000d86; 	R(CALLF(sub_10e74,0));	// 16340 call    sub_10E74 ;~ 0934:0D86
cs=0x934;eip=0x000d8b; 	T(ADD(sp, 4));	// 16341 add     sp, 4 ;~ 0934:0D8B
loc_186ae:
	// 5219 
cs=0x934;eip=0x000d8e; 	X(PUSH(cs));	// 16344 push    cs ;~ 0934:0D8E
cs=0x934;eip=0x000d8f; 	R(CALL(sub_188ee,0));	// 16345 call    near ptr sub_188EE ;~ 0934:0D8F
cs=0x934;eip=0x000d92; 	T(CMP(byte_2c804, 0));	// 16346 cmp     byte_2C804, 0 ;~ 0934:0D92
cs=0x934;eip=0x000d97; 	R(JNZ(loc_186be));	// 16347 jnz     short loc_186BE ;~ 0934:0D97
cs=0x934;eip=0x000d99; 	R(CALLF(sub_208a9,0));	// 16348 call    sub_208A9 ;~ 0934:0D99
loc_186be:
	// 5220 
cs=0x934;eip=0x000d9e; 	T(CMP(byte_2c804, 0));	// 16351 cmp     byte_2C804, 0 ;~ 0934:0D9E
cs=0x934;eip=0x000da3; 	R(JNZ(loc_18742));	// 16352 jnz     short loc_18742 ;~ 0934:0DA3
cs=0x934;eip=0x000da5; 	T(MOV(ax, 0x11B3));	// 16353 mov     ax, 11B3h ;~ 0934:0DA5
cs=0x934;eip=0x000da8; 	X(PUSH(ax));	// 16354 push    ax ;~ 0934:0DA8
cs=0x934;eip=0x000da9; 	T(MOV(ax, 0x0AE3));	// 16355 mov     ax, 0AE3h ;~ 0934:0DA9
cs=0x934;eip=0x000dac; 	X(PUSH(ax));	// 16356 push    ax ;~ 0934:0DAC
cs=0x934;eip=0x000dad; 	R(CALLF(sub_29b46,0));	// 16357 call    sub_29B46 ;~ 0934:0DAD
cs=0x934;eip=0x000db2; 	T(ADD(sp, 4));	// 16358 add     sp, 4 ;~ 0934:0DB2
cs=0x934;eip=0x000db5; 	X(PUSH(word_3a5b2));	// 16359 push    word_3A5B2 ;~ 0934:0DB5
cs=0x934;eip=0x000db9; 	X(PUSH(word_3a5b0));	// 16360 push    word_3A5B0 ;~ 0934:0DB9
cs=0x934;eip=0x000dbd; 	T(MOV(ax, 0x0ADA));	// 16361 mov     ax, 0ADAh ;~ 0934:0DBD
cs=0x934;eip=0x000dc0; 	X(PUSH(ax));	// 16362 push    ax ;~ 0934:0DC0
cs=0x934;eip=0x000dc1; 	R(CALLF(sub_10ee0,0));	// 16363 call    sub_10EE0 ;~ 0934:0DC1
cs=0x934;eip=0x000dc6; 	T(ADD(sp, 6));	// 16364 add     sp, 6 ;~ 0934:0DC6
cs=0x934;eip=0x000dc9; 	X(MOV(byte_2bec4, 0));	// 16365 mov     byte_2BEC4, 0 ;~ 0934:0DC9
cs=0x934;eip=0x000dce; 	X(MOV(byte_2c923, 0));	// 16366 mov     byte_2C923, 0 ;~ 0934:0DCE
cs=0x934;eip=0x000dd3; 	T(CMP(byte_2c955, 0));	// 16367 cmp     byte_2C955, 0 ;~ 0934:0DD3
cs=0x934;eip=0x000dd8; 	R(JNZ(loc_18742));	// 16368 jnz     short loc_18742 ;~ 0934:0DD8
cs=0x934;eip=0x000dda; 	T(MOV(ax, 0x11B9));	// 16369 mov     ax, 11B9h ;~ 0934:0DDA
cs=0x934;eip=0x000ddd; 	X(PUSH(ax));	// 16370 push    ax ;~ 0934:0DDD
cs=0x934;eip=0x000dde; 	T(MOV(ax, 0x0AE3));	// 16371 mov     ax, 0AE3h ;~ 0934:0DDE
cs=0x934;eip=0x000de1; 	X(PUSH(ax));	// 16372 push    ax ;~ 0934:0DE1
cs=0x934;eip=0x000de2; 	R(CALLF(sub_29b46,0));	// 16373 call    sub_29B46 ;~ 0934:0DE2
cs=0x934;eip=0x000de7; 	T(ADD(sp, 4));	// 16374 add     sp, 4 ;~ 0934:0DE7
cs=0x934;eip=0x000dea; 	X(PUSH(word_3a38e));	// 16375 push    word_3A38E ;~ 0934:0DEA
cs=0x934;eip=0x000dee; 	X(PUSH(word_3a38c));	// 16376 push    word_3A38C ;~ 0934:0DEE
cs=0x934;eip=0x000df2; 	T(MOV(ax, 0x0ADA));	// 16377 mov     ax, 0ADAh ;~ 0934:0DF2
cs=0x934;eip=0x000df5; 	X(PUSH(ax));	// 16378 push    ax ;~ 0934:0DF5
cs=0x934;eip=0x000df6; 	R(CALLF(sub_10ee0,0));	// 16379 call    sub_10EE0 ;~ 0934:0DF6
cs=0x934;eip=0x000dfb; 	T(ADD(sp, 6));	// 16380 add     sp, 6 ;~ 0934:0DFB
cs=0x934;eip=0x000dfe; 	T(MOV(ax, 0x11BF));	// 16381 mov     ax, 11BFh ;~ 0934:0DFE
cs=0x934;eip=0x000e01; 	X(PUSH(ax));	// 16382 push    ax ;~ 0934:0E01
cs=0x934;eip=0x000e02; 	T(MOV(ax, 0x0AE3));	// 16383 mov     ax, 0AE3h ;~ 0934:0E02
cs=0x934;eip=0x000e05; 	X(PUSH(ax));	// 16384 push    ax ;~ 0934:0E05
cs=0x934;eip=0x000e06; 	R(CALLF(sub_29b46,0));	// 16385 call    sub_29B46 ;~ 0934:0E06
cs=0x934;eip=0x000e0b; 	T(ADD(sp, 4));	// 16386 add     sp, 4 ;~ 0934:0E0B
cs=0x934;eip=0x000e0e; 	X(PUSH(word_38ce0));	// 16387 push    word_38CE0 ;~ 0934:0E0E
cs=0x934;eip=0x000e12; 	X(PUSH(word_38cde));	// 16388 push    word_38CDE ;~ 0934:0E12
cs=0x934;eip=0x000e16; 	T(MOV(ax, 0x0ADA));	// 16389 mov     ax, 0ADAh ;~ 0934:0E16
cs=0x934;eip=0x000e19; 	X(PUSH(ax));	// 16390 push    ax ;~ 0934:0E19
cs=0x934;eip=0x000e1a; 	R(CALLF(sub_10ee0,0));	// 16391 call    sub_10EE0 ;~ 0934:0E1A
cs=0x934;eip=0x000e1f; 	T(ADD(sp, 6));	// 16392 add     sp, 6 ;~ 0934:0E1F
loc_18742:
	// 5221 
cs=0x934;eip=0x000e22; 	T(MOV(ax, 0x11C5));	// 16396 mov     ax, 11C5h ;~ 0934:0E22
cs=0x934;eip=0x000e25; 	X(PUSH(ax));	// 16397 push    ax ;~ 0934:0E25
cs=0x934;eip=0x000e26; 	T(MOV(ax, 0x0AC1));	// 16398 mov     ax, 0AC1h ;~ 0934:0E26
cs=0x934;eip=0x000e29; 	X(PUSH(ax));	// 16399 push    ax ;~ 0934:0E29
cs=0x934;eip=0x000e2a; 	R(CALLF(sub_29b46,0));	// 16400 call    sub_29B46 ;~ 0934:0E2A
cs=0x934;eip=0x000e2f; 	T(ADD(sp, 4));	// 16401 add     sp, 4 ;~ 0934:0E2F
cs=0x934;eip=0x000e32; 	X(PUSH(word_38ce6));	// 16402 push    word_38CE6 ;~ 0934:0E32
cs=0x934;eip=0x000e36; 	X(PUSH(word_38ce4));	// 16403 push    word_38CE4 ;~ 0934:0E36
cs=0x934;eip=0x000e3a; 	T(MOV(ax, 0x0ABA));	// 16404 mov     ax, 0ABAh ;~ 0934:0E3A
cs=0x934;eip=0x000e3d; 	X(PUSH(ax));	// 16405 push    ax ;~ 0934:0E3D
cs=0x934;eip=0x000e3e; 	R(CALLF(sub_10ee0,0));	// 16406 call    sub_10EE0 ;~ 0934:0E3E
cs=0x934;eip=0x000e43; 	T(ADD(sp, 6));	// 16407 add     sp, 6 ;~ 0934:0E43
cs=0x934;eip=0x000e46; 	T(SUB(al, al));	// 16408 sub     al, al ;~ 0934:0E46
cs=0x934;eip=0x000e48; 	X(MOV(byte_38ce2, al));	// 16409 mov     byte_38CE2, al ;~ 0934:0E48
cs=0x934;eip=0x000e4b; 	X(MOV(byte_38cdc, al));	// 16410 mov     byte_38CDC, al ;~ 0934:0E4B
cs=0x934;eip=0x000e4e; 	T(CMP(byte_2bec8, al));	// 16411 cmp     byte_2BEC8, al ;~ 0934:0E4E
cs=0x934;eip=0x000e52; 	R(JNZ(loc_18777));	// 16412 jnz     short loc_18777 ;~ 0934:0E52
cs=0x934;eip=0x000e54; 	R(JMP(loc_188d8));	// 16413 jmp     loc_188D8 ;~ 0934:0E54
loc_18777:
	// 5222 
cs=0x934;eip=0x000e57; 	T(CMP(byte_2c949, al));	// 16417 cmp     byte_2C949, al ;~ 0934:0E57
cs=0x934;eip=0x000e5b; 	R(JNZ(loc_18780));	// 16418 jnz     short loc_18780 ;~ 0934:0E5B
cs=0x934;eip=0x000e5d; 	R(JMP(loc_188d8));	// 16419 jmp     loc_188D8 ;~ 0934:0E5D
loc_18780:
	// 5223 
cs=0x934;eip=0x000e60; 	T(CMP(byte_2c804, al));	// 16423 cmp     byte_2C804, al ;~ 0934:0E60
cs=0x934;eip=0x000e64; 	R(JZ(loc_18789));	// 16424 jz      short loc_18789 ;~ 0934:0E64
cs=0x934;eip=0x000e66; 	R(JMP(loc_188d8));	// 16425 jmp     loc_188D8 ;~ 0934:0E66
loc_18789:
	// 5224 
cs=0x934;eip=0x000e69; 	T(MOV(al, byte_2c946));	// 16429 mov     al, byte_2C946 ;~ 0934:0E69
cs=0x934;eip=0x000e6c; 	T(SUB(ah, ah));	// 16430 sub     ah, ah ;~ 0934:0E6C
cs=0x934;eip=0x000e6e; 	T(CMP(ax, 1));	// 16431 cmp     ax, 1 ;~ 0934:0E6E
cs=0x934;eip=0x000e71; 	R(JBE(loc_187c8));	// 16432 jbe     short loc_187C8 ;~ 0934:0E71
cs=0x934;eip=0x000e73; 	T(CMP(ax, 2));	// 16433 cmp     ax, 2 ;~ 0934:0E73
cs=0x934;eip=0x000e76; 	R(JNZ(loc_187a6));	// 16434 jnz     short loc_187A6 ;~ 0934:0E76
cs=0x934;eip=0x000e78; 	T(MOV(al, *(db*)(((db*)&word_2c93e))));	// 16435 mov     al, byte ptr word_2C93E ;~ 0934:0E78
cs=0x934;eip=0x000e7b; 	T(XOR(al, 1));	// 16436 xor     al, 1 ;~ 0934:0E7B
cs=0x934;eip=0x000e7d; 	X(MOV(byte_38ce2, al));	// 16437 mov     byte_38CE2, al ;~ 0934:0E7D
cs=0x934;eip=0x000e80; 	X(MOV(byte_38cdc, al));	// 16438 mov     byte_38CDC, al ;~ 0934:0E80
cs=0x934;eip=0x000e83; 	R(JMP(loc_187c8));	// 16439 jmp     short loc_187C8 ;~ 0934:0E83
loc_187a6:
	// 5225 
cs=0x934;eip=0x000e86; 	X(MOV(byte_38cdc, 0));	// 16444 mov     byte_38CDC, 0 ;~ 0934:0E86
cs=0x934;eip=0x000e8b; 	X(MOV(byte_38ce2, 1));	// 16445 mov     byte_38CE2, 1 ;~ 0934:0E8B
cs=0x934;eip=0x000e90; 	T(CMP(word_2c93e, 0));	// 16446 cmp     word_2C93E, 0 ;~ 0934:0E90
cs=0x934;eip=0x000e95; 	R(JNZ(loc_187bc));	// 16447 jnz     short loc_187BC ;~ 0934:0E95
cs=0x934;eip=0x000e97; 	X(MOV(byte_38cdc, 2));	// 16448 mov     byte_38CDC, 2 ;~ 0934:0E97
loc_187bc:
	// 5226 
cs=0x934;eip=0x000e9c; 	T(CMP(word_2c93e, 1));	// 16451 cmp     word_2C93E, 1 ;~ 0934:0E9C
cs=0x934;eip=0x000ea1; 	R(JNZ(loc_187c8));	// 16452 jnz     short loc_187C8 ;~ 0934:0EA1
cs=0x934;eip=0x000ea3; 	X(MOV(byte_38ce2, 2));	// 16453 mov     byte_38CE2, 2 ;~ 0934:0EA3
loc_187c8:
	// 5227 
cs=0x934;eip=0x000ea8; 	T(MOV(al, byte_38cdc));	// 16457 mov     al, byte_38CDC ;~ 0934:0EA8
cs=0x934;eip=0x000eab; 	T(SUB(ah, ah));	// 16458 sub     ah, ah ;~ 0934:0EAB
cs=0x934;eip=0x000ead; 	T(MOV(cx, ax));	// 16459 mov     cx, ax ;~ 0934:0EAD
cs=0x934;eip=0x000eaf; 	T(SHL(ax, 1));	// 16460 shl     ax, 1 ;~ 0934:0EAF
cs=0x934;eip=0x000eb1; 	T(ADD(ax, cx));	// 16461 add     ax, cx ;~ 0934:0EB1
cs=0x934;eip=0x000eb3; 	T(SHL(ax, 1));	// 16462 shl     ax, 1 ;~ 0934:0EB3
cs=0x934;eip=0x000eb5; 	T(ADD(ax, 0x9E0));	// 16463 add     ax, 9E0h ;~ 0934:0EB5
cs=0x934;eip=0x000eb8; 	X(PUSH(ax));	// 16464 push    ax ;~ 0934:0EB8
cs=0x934;eip=0x000eb9; 	T(MOV(ax, 0x0ACC));	// 16465 mov     ax, 0ACCh ;~ 0934:0EB9
cs=0x934;eip=0x000ebc; 	X(PUSH(ax));	// 16466 push    ax ;~ 0934:0EBC
cs=0x934;eip=0x000ebd; 	R(CALLF(sub_29b46,0));	// 16467 call    sub_29B46 ;~ 0934:0EBD
cs=0x934;eip=0x000ec2; 	T(ADD(sp, 4));	// 16468 add     sp, 4 ;~ 0934:0EC2
cs=0x934;eip=0x000ec5; 	T(MOV(ax, 0x11CA));	// 16469 mov     ax, 11CAh ;~ 0934:0EC5
cs=0x934;eip=0x000ec8; 	X(PUSH(ax));	// 16470 push    ax ;~ 0934:0EC8
cs=0x934;eip=0x000ec9; 	T(MOV(ax, 0x0AD1));	// 16471 mov     ax, 0AD1h ;~ 0934:0EC9
cs=0x934;eip=0x000ecc; 	X(PUSH(ax));	// 16472 push    ax ;~ 0934:0ECC
cs=0x934;eip=0x000ecd; 	R(CALLF(sub_29b46,0));	// 16473 call    sub_29B46 ;~ 0934:0ECD
cs=0x934;eip=0x000ed2; 	T(ADD(sp, 4));	// 16474 add     sp, 4 ;~ 0934:0ED2
cs=0x934;eip=0x000ed5; 	T(MOV(ax, 0x11CF));	// 16475 mov     ax, 11CFh ;~ 0934:0ED5
cs=0x934;eip=0x000ed8; 	X(PUSH(ax));	// 16476 push    ax ;~ 0934:0ED8
cs=0x934;eip=0x000ed9; 	T(MOV(ax, 0x0ACA));	// 16477 mov     ax, 0ACAh ;~ 0934:0ED9
cs=0x934;eip=0x000edc; 	X(PUSH(ax));	// 16478 push    ax ;~ 0934:0EDC
cs=0x934;eip=0x000edd; 	R(CALLF(sub_29708,0));	// 16479 call    sub_29708 ;~ 0934:0EDD
cs=0x934;eip=0x000ee2; 	T(ADD(sp, 4));	// 16480 add     sp, 4 ;~ 0934:0EE2
cs=0x934;eip=0x000ee5; 	X(MOV(word_3a3e6, ax));	// 16481 mov     word_3A3E6, ax ;~ 0934:0EE5
cs=0x934;eip=0x000ee8; 	T(OR(ax, ax));	// 16482 or      ax, ax ;~ 0934:0EE8
cs=0x934;eip=0x000eea; 	R(JZ(loc_18830));	// 16483 jz      short loc_18830 ;~ 0934:0EEA
cs=0x934;eip=0x000eec; 	X(PUSH(ax));	// 16484 push    ax ;~ 0934:0EEC
cs=0x934;eip=0x000eed; 	T(MOV(ax, 0x13));	// 16485 mov     ax, 13h ;~ 0934:0EED
cs=0x934;eip=0x000ef0; 	X(PUSH(ax));	// 16486 push    ax ;~ 0934:0EF0
cs=0x934;eip=0x000ef1; 	T(MOV(ax, 1));	// 16487 mov     ax, 1 ;~ 0934:0EF1
cs=0x934;eip=0x000ef4; 	X(PUSH(ax));	// 16488 push    ax ;~ 0934:0EF4
cs=0x934;eip=0x000ef5; 	T(MOV(ax, 0x2286));	// 16489 mov     ax, 2286h ;~ 0934:0EF5
cs=0x934;eip=0x000ef8; 	X(PUSH(ax));	// 16490 push    ax ;~ 0934:0EF8
cs=0x934;eip=0x000ef9; 	R(CALLF(sub_29734,0));	// 16491 call    sub_29734 ;~ 0934:0EF9
cs=0x934;eip=0x000efe; 	T(ADD(sp, 8));	// 16492 add     sp, 8 ;~ 0934:0EFE
cs=0x934;eip=0x000f01; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 16493 mov     [bp+var_2], ax ;~ 0934:0F01
cs=0x934;eip=0x000f04; 	X(PUSH(word_3a3e6));	// 16494 push    word_3A3E6 ;~ 0934:0F04
cs=0x934;eip=0x000f08; 	R(CALLF(sub_29640,0));	// 16495 call    sub_29640 ;~ 0934:0F08
cs=0x934;eip=0x000f0d; 	T(ADD(sp, 2));	// 16496 add     sp, 2 ;~ 0934:0F0D
loc_18830:
	// 5228 
cs=0x934;eip=0x000f10; 	T(MOV(ax, 0x11D2));	// 16499 mov     ax, 11D2h ;~ 0934:0F10
cs=0x934;eip=0x000f13; 	X(PUSH(ax));	// 16500 push    ax ;~ 0934:0F13
cs=0x934;eip=0x000f14; 	T(MOV(ax, 0x0AD1));	// 16501 mov     ax, 0AD1h ;~ 0934:0F14
cs=0x934;eip=0x000f17; 	X(PUSH(ax));	// 16502 push    ax ;~ 0934:0F17
cs=0x934;eip=0x000f18; 	R(CALLF(sub_29b46,0));	// 16503 call    sub_29B46 ;~ 0934:0F18
cs=0x934;eip=0x000f1d; 	T(ADD(sp, 4));	// 16504 add     sp, 4 ;~ 0934:0F1D
cs=0x934;eip=0x000f20; 	T(MOV(ax, 0x0CEBC));	// 16505 mov     ax, 0CEBCh ;~ 0934:0F20
cs=0x934;eip=0x000f23; 	X(PUSH(ax));	// 16506 push    ax ;~ 0934:0F23
cs=0x934;eip=0x000f24; 	T(MOV(ax, 0x0ACA));	// 16507 mov     ax, 0ACAh ;~ 0934:0F24
cs=0x934;eip=0x000f27; 	X(PUSH(ax));	// 16508 push    ax ;~ 0934:0F27
cs=0x934;eip=0x000f28; 	R(CALLF(sub_10e74,0));	// 16509 call    sub_10E74 ;~ 0934:0F28
cs=0x934;eip=0x000f2d; 	T(ADD(sp, 4));	// 16510 add     sp, 4 ;~ 0934:0F2D
cs=0x934;eip=0x000f30; 	T(MOV(al, byte_38ce2));	// 16511 mov     al, byte_38CE2 ;~ 0934:0F30
cs=0x934;eip=0x000f33; 	T(SUB(ah, ah));	// 16512 sub     ah, ah ;~ 0934:0F33
cs=0x934;eip=0x000f35; 	T(MOV(cx, ax));	// 16513 mov     cx, ax ;~ 0934:0F35
cs=0x934;eip=0x000f37; 	T(SHL(ax, 1));	// 16514 shl     ax, 1 ;~ 0934:0F37
cs=0x934;eip=0x000f39; 	T(ADD(ax, cx));	// 16515 add     ax, cx ;~ 0934:0F39
cs=0x934;eip=0x000f3b; 	T(SHL(ax, 1));	// 16516 shl     ax, 1 ;~ 0934:0F3B
cs=0x934;eip=0x000f3d; 	T(ADD(ax, 0x9E0));	// 16517 add     ax, 9E0h ;~ 0934:0F3D
cs=0x934;eip=0x000f40; 	X(PUSH(ax));	// 16518 push    ax ;~ 0934:0F40
cs=0x934;eip=0x000f41; 	T(MOV(ax, 0x0ACC));	// 16519 mov     ax, 0ACCh ;~ 0934:0F41
cs=0x934;eip=0x000f44; 	X(PUSH(ax));	// 16520 push    ax ;~ 0934:0F44
cs=0x934;eip=0x000f45; 	R(CALLF(sub_29b46,0));	// 16521 call    sub_29B46 ;~ 0934:0F45
cs=0x934;eip=0x000f4a; 	T(ADD(sp, 4));	// 16522 add     sp, 4 ;~ 0934:0F4A
cs=0x934;eip=0x000f4d; 	T(MOV(ax, 0x11D7));	// 16523 mov     ax, 11D7h ;~ 0934:0F4D
cs=0x934;eip=0x000f50; 	X(PUSH(ax));	// 16524 push    ax ;~ 0934:0F50
cs=0x934;eip=0x000f51; 	T(MOV(ax, 0x0AD1));	// 16525 mov     ax, 0AD1h ;~ 0934:0F51
cs=0x934;eip=0x000f54; 	X(PUSH(ax));	// 16526 push    ax ;~ 0934:0F54
cs=0x934;eip=0x000f55; 	R(CALLF(sub_29b46,0));	// 16527 call    sub_29B46 ;~ 0934:0F55
cs=0x934;eip=0x000f5a; 	T(ADD(sp, 4));	// 16528 add     sp, 4 ;~ 0934:0F5A
cs=0x934;eip=0x000f5d; 	T(MOV(ax, 0x11DC));	// 16529 mov     ax, 11DCh ;~ 0934:0F5D
cs=0x934;eip=0x000f60; 	X(PUSH(ax));	// 16530 push    ax ;~ 0934:0F60
cs=0x934;eip=0x000f61; 	T(MOV(ax, 0x0ACA));	// 16531 mov     ax, 0ACAh ;~ 0934:0F61
cs=0x934;eip=0x000f64; 	X(PUSH(ax));	// 16532 push    ax ;~ 0934:0F64
cs=0x934;eip=0x000f65; 	R(CALLF(sub_29708,0));	// 16533 call    sub_29708 ;~ 0934:0F65
cs=0x934;eip=0x000f6a; 	T(ADD(sp, 4));	// 16534 add     sp, 4 ;~ 0934:0F6A
cs=0x934;eip=0x000f6d; 	X(MOV(word_3a3e6, ax));	// 16535 mov     word_3A3E6, ax ;~ 0934:0F6D
cs=0x934;eip=0x000f70; 	T(OR(ax, ax));	// 16536 or      ax, ax ;~ 0934:0F70
cs=0x934;eip=0x000f72; 	R(JZ(loc_188b8));	// 16537 jz      short loc_188B8 ;~ 0934:0F72
cs=0x934;eip=0x000f74; 	X(PUSH(ax));	// 16538 push    ax ;~ 0934:0F74
cs=0x934;eip=0x000f75; 	T(MOV(ax, 0x13));	// 16539 mov     ax, 13h ;~ 0934:0F75
cs=0x934;eip=0x000f78; 	X(PUSH(ax));	// 16540 push    ax ;~ 0934:0F78
cs=0x934;eip=0x000f79; 	T(MOV(ax, 1));	// 16541 mov     ax, 1 ;~ 0934:0F79
cs=0x934;eip=0x000f7c; 	X(PUSH(ax));	// 16542 push    ax ;~ 0934:0F7C
cs=0x934;eip=0x000f7d; 	T(MOV(ax, 0x229B));	// 16543 mov     ax, 229Bh ;~ 0934:0F7D
cs=0x934;eip=0x000f80; 	X(PUSH(ax));	// 16544 push    ax ;~ 0934:0F80
cs=0x934;eip=0x000f81; 	R(CALLF(sub_29734,0));	// 16545 call    sub_29734 ;~ 0934:0F81
cs=0x934;eip=0x000f86; 	T(ADD(sp, 8));	// 16546 add     sp, 8 ;~ 0934:0F86
cs=0x934;eip=0x000f89; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 16547 mov     [bp+var_2], ax ;~ 0934:0F89
cs=0x934;eip=0x000f8c; 	X(PUSH(word_3a3e6));	// 16548 push    word_3A3E6 ;~ 0934:0F8C
cs=0x934;eip=0x000f90; 	R(CALLF(sub_29640,0));	// 16549 call    sub_29640 ;~ 0934:0F90
cs=0x934;eip=0x000f95; 	T(ADD(sp, 2));	// 16550 add     sp, 2 ;~ 0934:0F95
loc_188b8:
	// 5229 
cs=0x934;eip=0x000f98; 	T(MOV(ax, 0x11DF));	// 16553 mov     ax, 11DFh ;~ 0934:0F98
cs=0x934;eip=0x000f9b; 	X(PUSH(ax));	// 16554 push    ax ;~ 0934:0F9B
cs=0x934;eip=0x000f9c; 	T(MOV(ax, 0x0AD1));	// 16555 mov     ax, 0AD1h ;~ 0934:0F9C
cs=0x934;eip=0x000f9f; 	X(PUSH(ax));	// 16556 push    ax ;~ 0934:0F9F
cs=0x934;eip=0x000fa0; 	R(CALLF(sub_29b46,0));	// 16557 call    sub_29B46 ;~ 0934:0FA0
cs=0x934;eip=0x000fa5; 	T(ADD(sp, 4));	// 16558 add     sp, 4 ;~ 0934:0FA5
cs=0x934;eip=0x000fa8; 	T(MOV(ax, 0x0D7A4));	// 16559 mov     ax, 0D7A4h ;~ 0934:0FA8
cs=0x934;eip=0x000fab; 	X(PUSH(ax));	// 16560 push    ax ;~ 0934:0FAB
cs=0x934;eip=0x000fac; 	T(MOV(ax, 0x0ACA));	// 16561 mov     ax, 0ACAh ;~ 0934:0FAC
cs=0x934;eip=0x000faf; 	X(PUSH(ax));	// 16562 push    ax ;~ 0934:0FAF
cs=0x934;eip=0x000fb0; 	R(CALLF(sub_10e74,0));	// 16563 call    sub_10E74 ;~ 0934:0FB0
cs=0x934;eip=0x000fb5; 	T(ADD(sp, 4));	// 16564 add     sp, 4 ;~ 0934:0FB5
loc_188d8:
	// 5230 
cs=0x934;eip=0x000fb8; 	R(CALLF(sub_2067e,0));	// 16568 call    sub_2067E ;~ 0934:0FB8
cs=0x934;eip=0x000fbd; 	T(CMP(byte_2c804, 0));	// 16569 cmp     byte_2C804, 0 ;~ 0934:0FBD
cs=0x934;eip=0x000fc2; 	R(JNZ(loc_188e9));	// 16570 jnz     short loc_188E9 ;~ 0934:0FC2
cs=0x934;eip=0x000fc4; 	R(CALLF(sub_13bb2,0));	// 16571 call    sub_13BB2 ;~ 0934:0FC4
loc_188e9:
	// 5231 
cs=0x934;eip=0x000fc9; 	T(MOV(sp, bp));	// 16574 mov     sp, bp ;~ 0934:0FC9
cs=0x934;eip=0x000fcb; 	X(POP(bp));	// 16575 pop     bp ;~ 0934:0FCB
cs=0x934;eip=0x000fcc; 	R(RETF(0));	// 16576 retf ;~ 0934:0FCC
sub_188ee:
	// 16586 
#undef var_6
#define var_6 -6
	// 16588 var_6           = word ptr -6 ;~ 0934:0FCE
#undef var_4
#define var_4 -4
	// 16589 var_4           = word ptr -4 ;~ 0934:0FCE
#undef var_2
#define var_2 -2
	// 16590 var_2           = word ptr -2 ;~ 0934:0FCE
ret_934_fce:
	// 5232 
cs=0x934;eip=0x000fce; 	X(PUSH(bp));	// 16592 push    bp ;~ 0934:0FCE
cs=0x934;eip=0x000fcf; 	T(MOV(bp, sp));	// 16593 mov     bp, sp ;~ 0934:0FCF
cs=0x934;eip=0x000fd1; 	T(SUB(sp, 6));	// 16594 sub     sp, 6 ;~ 0934:0FD1
cs=0x934;eip=0x000fd4; 	X(PUSH(si));	// 16595 push    si ;~ 0934:0FD4
cs=0x934;eip=0x000fd5; 	T(CMP(byte_2c804, 0));	// 16596 cmp     byte_2C804, 0 ;~ 0934:0FD5
cs=0x934;eip=0x000fda; 	R(JNZ(loc_18924));	// 16597 jnz     short loc_18924 ;~ 0934:0FDA
cs=0x934;eip=0x000fdc; 	T(MOV(al, byte_2c94a));	// 16598 mov     al, byte_2C94A ;~ 0934:0FDC
cs=0x934;eip=0x000fdf; 	T(ADD(al, 0x41));	// 16599 add     al, 41h ; 'A' ;~ 0934:0FDF
cs=0x934;eip=0x000fe1; 	X(MOV(byte_2c923, al));	// 16600 mov     byte_2C923, al ;~ 0934:0FE1
cs=0x934;eip=0x000fe4; 	T(MOV(ax, 0x11E4));	// 16601 mov     ax, 11E4h ;~ 0934:0FE4
cs=0x934;eip=0x000fe7; 	X(PUSH(ax));	// 16602 push    ax ;~ 0934:0FE7
cs=0x934;eip=0x000fe8; 	T(MOV(ax, 0x0AE4));	// 16603 mov     ax, 0AE4h ;~ 0934:0FE8
cs=0x934;eip=0x000feb; 	X(PUSH(ax));	// 16604 push    ax ;~ 0934:0FEB
cs=0x934;eip=0x000fec; 	R(CALLF(sub_29b46,0));	// 16605 call    sub_29B46 ;~ 0934:0FEC
cs=0x934;eip=0x000ff1; 	T(ADD(sp, 4));	// 16606 add     sp, 4 ;~ 0934:0FF1
cs=0x934;eip=0x000ff4; 	T(MOV(ax, 0x9592));	// 16607 mov     ax, 9592h ;~ 0934:0FF4
cs=0x934;eip=0x000ff7; 	X(PUSH(ax));	// 16608 push    ax ;~ 0934:0FF7
cs=0x934;eip=0x000ff8; 	T(MOV(ax, 0x0ADA));	// 16609 mov     ax, 0ADAh ;~ 0934:0FF8
cs=0x934;eip=0x000ffb; 	X(PUSH(ax));	// 16610 push    ax ;~ 0934:0FFB
cs=0x934;eip=0x000ffc; 	R(CALLF(sub_10e74,0));	// 16611 call    sub_10E74 ;~ 0934:0FFC
cs=0x934;eip=0x001001; 	T(ADD(sp, 4));	// 16612 add     sp, 4 ;~ 0934:1001
loc_18924:
	// 5233 
cs=0x934;eip=0x001004; 	T(CMP(byte_2bec8, 0));	// 16615 cmp     byte_2BEC8, 0 ;~ 0934:1004
cs=0x934;eip=0x001009; 	R(JZ(loc_18939));	// 16616 jz      short loc_18939 ;~ 0934:1009
cs=0x934;eip=0x00100b; 	T(CMP(byte_2c949, 0));	// 16617 cmp     byte_2C949, 0 ;~ 0934:100B
cs=0x934;eip=0x001010; 	R(JZ(loc_18939));	// 16618 jz      short loc_18939 ;~ 0934:1010
cs=0x934;eip=0x001012; 	T(CMP(byte_2c804, 0));	// 16619 cmp     byte_2C804, 0 ;~ 0934:1012
cs=0x934;eip=0x001017; 	R(JZ(loc_18945));	// 16620 jz      short loc_18945 ;~ 0934:1017
loc_18939:
	// 5234 
cs=0x934;eip=0x001019; 	X(MOV(word_362bb, 0x2F));	// 16624 mov     word_362BB, 2Fh ; '/' ;~ 0934:1019
cs=0x934;eip=0x00101f; 	X(MOV(word_362bd, 0x22AF));	// 16625 mov     word_362BD, 22AFh ;~ 0934:101F
loc_18945:
	// 5235 
cs=0x934;eip=0x001025; 	T(CMP(word_3a178, 9));	// 16628 cmp     word_3A178, 9 ;~ 0934:1025
cs=0x934;eip=0x00102a; 	R(JZ(loc_18953));	// 16629 jz      short loc_18953 ;~ 0934:102A
cs=0x934;eip=0x00102c; 	T(CMP(word_3a178, 0x0D));	// 16630 cmp     word_3A178, 0Dh ;~ 0934:102C
cs=0x934;eip=0x001031; 	R(JNZ(loc_18990));	// 16631 jnz     short loc_18990 ;~ 0934:1031
loc_18953:
	// 5236 
cs=0x934;eip=0x001033; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0));	// 16634 mov     [bp+var_6], 0 ;~ 0934:1033
cs=0x934;eip=0x001038; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 16635 mov     [bp+var_4], 0 ;~ 0934:1038
cs=0x934;eip=0x00103d; 	R(JMP(loc_18982));	// 16636 jmp     short loc_18982 ;~ 0934:103D
loc_18960:
	// 5237 
cs=0x934;eip=0x001040; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 16641 inc     [bp+var_2] ;~ 0934:1040
loc_18963:
	// 5238 
cs=0x934;eip=0x001043; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x10));	// 16644 cmp     [bp+var_2], 10h ;~ 0934:1043
cs=0x934;eip=0x001047; 	R(JGE(loc_1897e));	// 16645 jge     short loc_1897E ;~ 0934:1047
cs=0x934;eip=0x001049; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_6))));	// 16646 mov     bx, [bp+var_6] ;~ 0934:1049
cs=0x934;eip=0x00104c; 	T(SHL(bx, 1));	// 16647 shl     bx, 1 ;~ 0934:104C
cs=0x934;eip=0x00104e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 16648 mov     ax, [bp+var_4] ;~ 0934:104E
cs=0x934;eip=0x001051; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_2))));	// 16649 add     ax, [bp+var_2] ;~ 0934:1051
cs=0x934;eip=0x001054; 	X(MOV(*(dw*)(raddr(ds,bx-0x4B47)), ax));	// 16650 mov     [bx-4B47h], ax ;~ 0934:1054
cs=0x934;eip=0x001058; 	X(INC(*(dw*)(raddr(ss,bp+var_6))));	// 16651 inc     [bp+var_6] ;~ 0934:1058
cs=0x934;eip=0x00105b; 	R(JMP(loc_18960));	// 16652 jmp     short loc_18960 ;~ 0934:105B
loc_1897e:
	// 5239 
cs=0x934;eip=0x00105e; 	X(ADD(*(db*)(raddr(ss,bp+var_4+1)), 1));	// 16657 add     byte ptr [bp+var_4+1], 1 ;~ 0934:105E
loc_18982:
	// 5240 
cs=0x934;eip=0x001062; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0x1000));	// 16660 cmp     [bp+var_4], 1000h ;~ 0934:1062
cs=0x934;eip=0x001067; 	R(JGE(loc_18990));	// 16661 jge     short loc_18990 ;~ 0934:1067
cs=0x934;eip=0x001069; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 16662 mov     [bp+var_2], 0 ;~ 0934:1069
cs=0x934;eip=0x00106e; 	R(JMP(loc_18963));	// 16663 jmp     short loc_18963 ;~ 0934:106E
loc_18990:
	// 5241 
cs=0x934;eip=0x001070; 	T(CMP(word_3a178, 0x13));	// 16668 cmp     word_3A178, 13h ;~ 0934:1070
cs=0x934;eip=0x001075; 	R(JNZ(loc_189c0));	// 16669 jnz     short loc_189C0 ;~ 0934:1075
cs=0x934;eip=0x001077; 	T(CMP(byte_35407, 0));	// 16670 cmp     byte_35407, 0 ;~ 0934:1077
cs=0x934;eip=0x00107c; 	R(JNZ(loc_189c0));	// 16671 jnz     short loc_189C0 ;~ 0934:107C
cs=0x934;eip=0x00107e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 16672 mov     [bp+var_2], 0 ;~ 0934:107E
loc_189a3:
	// 5242 
cs=0x934;eip=0x001083; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_2))));	// 16675 mov     si, [bp+var_2] ;~ 0934:1083
cs=0x934;eip=0x001086; 	T(SHL(si, 1));	// 16676 shl     si, 1 ;~ 0934:1086
cs=0x934;eip=0x001088; 	T(ADD(si, 0x0B4B9));	// 16677 add     si, 0B4B9h ;~ 0934:1088
cs=0x934;eip=0x00108c; 	T(CMP(*(dw*)(raddr(ds,si)), 0x0F0F));	// 16678 cmp     word ptr [si], 0F0Fh ;~ 0934:108C
cs=0x934;eip=0x001090; 	R(JBE(loc_189b6));	// 16679 jbe     short loc_189B6 ;~ 0934:1090
cs=0x934;eip=0x001092; 	X(SUB(*(dw*)(raddr(ds,si)), 0x202));	// 16680 sub     word ptr [si], 202h ;~ 0934:1092
loc_189b6:
	// 5243 
cs=0x934;eip=0x001096; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 16683 inc     [bp+var_2] ;~ 0934:1096
cs=0x934;eip=0x001099; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x100));	// 16684 cmp     [bp+var_2], 100h ;~ 0934:1099
cs=0x934;eip=0x00109e; 	R(JL(loc_189a3));	// 16685 jl      short loc_189A3 ;~ 0934:109E
loc_189c0:
	// 5244 
cs=0x934;eip=0x0010a0; 	X(POP(si));	// 16689 pop     si ;~ 0934:10A0
cs=0x934;eip=0x0010a1; 	T(MOV(sp, bp));	// 16690 mov     sp, bp ;~ 0934:10A1
cs=0x934;eip=0x0010a3; 	X(POP(bp));	// 16691 pop     bp ;~ 0934:10A3
cs=0x934;eip=0x0010a4; 	R(RETF(0));	// 16692 retf ;~ 0934:10A4
sub_189c6:
	// 16701 
cs=0x934;eip=0x0010a6; 	X(MOV(byte_37549, 0x0FF));	// 16703 mov     byte_37549, 0FFh ;~ 0934:10A6
ret_934_10ab:
	// 5245 
cs=0x934;eip=0x0010ab; 	T(CMP(word_2beca, 2));	// 16704 cmp     word_2BECA, 2 ;~ 0934:10AB
cs=0x934;eip=0x0010b0; 	R(JZ(loc_189d8));	// 16705 jz      short loc_189D8 ;~ 0934:10B0
cs=0x934;eip=0x0010b2; 	X(MOV(word_37b74, 0x0FFFF));	// 16706 mov     word_37B74, 0FFFFh ;~ 0934:10B2
loc_189d8:
	// 5246 
cs=0x934;eip=0x0010b8; 	T(SUB(ax, ax));	// 16709 sub     ax, ax ;~ 0934:10B8
cs=0x934;eip=0x0010ba; 	X(MOV(word_2beda, ax));	// 16710 mov     word_2BEDA, ax ;~ 0934:10BA
cs=0x934;eip=0x0010bd; 	X(PUSH(ax));	// 16711 push    ax ;~ 0934:10BD
cs=0x934;eip=0x0010be; 	R(CALLF(sub_2714e,0));	// 16712 call    far ptr sub_2714E ;~ 0934:10BE
cs=0x934;eip=0x0010c3; 	T(ADD(sp, 2));	// 16713 add     sp, 2 ;~ 0934:10C3
cs=0x934;eip=0x0010c6; 	R(RETF(0));	// 16714 retf ;~ 0934:10C6
sub_189e8:
	// 16723 
cs=0x934;eip=0x0010c8; 	T(CMP(byte_3751b, 0));	// 16725 cmp     byte_3751B, 0 ;~ 0934:10C8
ret_934_10cd:
	// 5247 
cs=0x934;eip=0x0010cd; 	R(JZ(loc_189fa));	// 16726 jz      short loc_189FA ;~ 0934:10CD
cs=0x934;eip=0x0010cf; 	T(CMP(byte_38a92, 0));	// 16727 cmp     byte_38A92, 0 ;~ 0934:10CF
cs=0x934;eip=0x0010d4; 	R(JNZ(loc_189fa));	// 16728 jnz     short loc_189FA ;~ 0934:10D4
cs=0x934;eip=0x0010d6; 	X(PUSH(cs));	// 16729 push    cs ;~ 0934:10D6
cs=0x934;eip=0x0010d7; 	R(CALL(sub_18a76,0));	// 16730 call    near ptr sub_18A76 ;~ 0934:10D7
loc_189fa:
	// 5248 
cs=0x934;eip=0x0010da; 	T(CMP(byte_3a3f6, 0));	// 16734 cmp     byte_3A3F6, 0 ;~ 0934:10DA
cs=0x934;eip=0x0010df; 	R(JNZ(loc_18a28));	// 16735 jnz     short loc_18A28 ;~ 0934:10DF
cs=0x934;eip=0x0010e1; 	T(MOV(al, byte_38cd4));	// 16736 mov     al, byte_38CD4 ;~ 0934:10E1
cs=0x934;eip=0x0010e4; 	T(CMP(byte_38a97, al));	// 16737 cmp     byte_38A97, al ;~ 0934:10E4
cs=0x934;eip=0x0010e8; 	R(JZ(loc_18a28));	// 16738 jz      short loc_18A28 ;~ 0934:10E8
cs=0x934;eip=0x0010ea; 	R(JBE(loc_18a12));	// 16739 jbe     short loc_18A12 ;~ 0934:10EA
cs=0x934;eip=0x0010ec; 	X(INC(byte_38cd4));	// 16740 inc     byte_38CD4 ;~ 0934:10EC
cs=0x934;eip=0x0010f0; 	R(JMP(loc_18a16));	// 16741 jmp     short loc_18A16 ;~ 0934:10F0
loc_18a12:
	// 5249 
cs=0x934;eip=0x0010f2; 	X(DEC(byte_38cd4));	// 16745 dec     byte_38CD4 ;~ 0934:10F2
loc_18a16:
	// 5250 
cs=0x934;eip=0x0010f6; 	X(PUSH(cs));	// 16748 push    cs ;~ 0934:10F6
cs=0x934;eip=0x0010f7; 	R(CALL(sub_18a76,0));	// 16749 call    near ptr sub_18A76 ;~ 0934:10F7
cs=0x934;eip=0x0010fa; 	T(MOV(al, byte_38a97));	// 16750 mov     al, byte_38A97 ;~ 0934:10FA
cs=0x934;eip=0x0010fd; 	T(CMP(byte_38cd4, al));	// 16751 cmp     byte_38CD4, al ;~ 0934:10FD
cs=0x934;eip=0x001101; 	R(JNZ(loc_18a28));	// 16752 jnz     short loc_18A28 ;~ 0934:1101
cs=0x934;eip=0x001103; 	X(MOV(byte_3a3f6, 0x10));	// 16753 mov     byte_3A3F6, 10h ;~ 0934:1103
loc_18a28:
	// 5251 
cs=0x934;eip=0x001108; 	T(CMP(byte_3751b, 0));	// 16757 cmp     byte_3751B, 0 ;~ 0934:1108
cs=0x934;eip=0x00110d; 	R(JNZ(loc_18a69));	// 16758 jnz     short loc_18A69 ;~ 0934:110D
cs=0x934;eip=0x00110f; 	T(CMP(byte_3a3f6, 0));	// 16759 cmp     byte_3A3F6, 0 ;~ 0934:110F
cs=0x934;eip=0x001114; 	R(JNZ(loc_18a69));	// 16760 jnz     short loc_18A69 ;~ 0934:1114
cs=0x934;eip=0x001116; 	T(CMP(byte_38a92, 1));	// 16761 cmp     byte_38A92, 1 ;~ 0934:1116
cs=0x934;eip=0x00111b; 	R(JNZ(loc_18a69));	// 16762 jnz     short loc_18A69 ;~ 0934:111B
cs=0x934;eip=0x00111d; 	T(SUB(ax, ax));	// 16763 sub     ax, ax ;~ 0934:111D
cs=0x934;eip=0x00111f; 	X(PUSH(ax));	// 16764 push    ax ;~ 0934:111F
cs=0x934;eip=0x001120; 	T(MOV(ax, 1));	// 16765 mov     ax, 1 ;~ 0934:1120
cs=0x934;eip=0x001123; 	X(PUSH(ax));	// 16766 push    ax ;~ 0934:1123
cs=0x934;eip=0x001124; 	T(MOV(ax, 0x0AB));	// 16767 mov     ax, 0ABh ; '´' ;~ 0934:1124
cs=0x934;eip=0x001127; 	X(PUSH(ax));	// 16768 push    ax ;~ 0934:1127
cs=0x934;eip=0x001128; 	T(MOV(ax, 0x0F8));	// 16769 mov     ax, 0F8h ; '¯' ;~ 0934:1128
cs=0x934;eip=0x00112b; 	X(PUSH(ax));	// 16770 push    ax ;~ 0934:112B
cs=0x934;eip=0x00112c; 	T(MOV(ax, 0x97));	// 16771 mov     ax, 97h ; 'ó' ;~ 0934:112C
cs=0x934;eip=0x00112f; 	X(PUSH(ax));	// 16772 push    ax ;~ 0934:112F
cs=0x934;eip=0x001130; 	T(MOV(ax, 0x68));	// 16773 mov     ax, 68h ; 'h' ;~ 0934:1130
cs=0x934;eip=0x001133; 	X(PUSH(ax));	// 16774 push    ax ;~ 0934:1133
cs=0x934;eip=0x001134; 	T(MOV(ax, 0x107));	// 16775 mov     ax, 107h ;~ 0934:1134
cs=0x934;eip=0x001137; 	X(PUSH(ax));	// 16776 push    ax ;~ 0934:1137
cs=0x934;eip=0x001138; 	T(MOV(ax, 0x0D0));	// 16777 mov     ax, 0D0h ; '–' ;~ 0934:1138
cs=0x934;eip=0x00113b; 	X(PUSH(ax));	// 16778 push    ax ;~ 0934:113B
cs=0x934;eip=0x00113c; 	R(CALLF(sub_28183,0));	// 16779 call    far ptr sub_28183 ;~ 0934:113C
cs=0x934;eip=0x001141; 	T(ADD(sp, 0x10));	// 16780 add     sp, 10h ;~ 0934:1141
cs=0x934;eip=0x001144; 	X(MOV(byte_38a92, 0));	// 16781 mov     byte_38A92, 0 ;~ 0934:1144
loc_18a69:
	// 5252 
cs=0x934;eip=0x001149; 	T(CMP(byte_3a3f6, 0));	// 16785 cmp     byte_3A3F6, 0 ;~ 0934:1149
cs=0x934;eip=0x00114e; 	R(JZ(locret_18a74));	// 16786 jz      short locret_18A74 ;~ 0934:114E
cs=0x934;eip=0x001150; 	X(DEC(byte_3a3f6));	// 16787 dec     byte_3A3F6 ;~ 0934:1150
locret_18a74:
	// 5253 
cs=0x934;eip=0x001154; 	R(RETF(0));	// 16790 retf ;~ 0934:1154
sub_18a76:
	// 16800 
#undef var_6
#define var_6 -6
	// 16803 var_6           = word ptr -6 ;~ 0934:1156
#undef var_4
#define var_4 -4
	// 16804 var_4           = word ptr -4 ;~ 0934:1156
#undef var_2
#define var_2 -2
	// 16805 var_2           = word ptr -2 ;~ 0934:1156
ret_934_1156:
	// 5254 
cs=0x934;eip=0x001156; 	X(PUSH(bp));	// 16807 push    bp ;~ 0934:1156
cs=0x934;eip=0x001157; 	T(MOV(bp, sp));	// 16808 mov     bp, sp ;~ 0934:1157
cs=0x934;eip=0x001159; 	T(SUB(sp, 6));	// 16809 sub     sp, 6 ;~ 0934:1159
cs=0x934;eip=0x00115c; 	X(PUSH(si));	// 16810 push    si ;~ 0934:115C
cs=0x934;eip=0x00115d; 	T(CMP(byte_38a92, 0));	// 16811 cmp     byte_38A92, 0 ;~ 0934:115D
cs=0x934;eip=0x001162; 	R(JNZ(loc_18ab0));	// 16812 jnz     short loc_18AB0 ;~ 0934:1162
cs=0x934;eip=0x001164; 	T(MOV(ax, 1));	// 16813 mov     ax, 1 ;~ 0934:1164
cs=0x934;eip=0x001167; 	X(PUSH(ax));	// 16814 push    ax ;~ 0934:1167
cs=0x934;eip=0x001168; 	T(SUB(ax, ax));	// 16815 sub     ax, ax ;~ 0934:1168
cs=0x934;eip=0x00116a; 	X(PUSH(ax));	// 16816 push    ax ;~ 0934:116A
cs=0x934;eip=0x00116b; 	T(MOV(ax, 0x97));	// 16817 mov     ax, 97h ; 'ó' ;~ 0934:116B
cs=0x934;eip=0x00116e; 	X(PUSH(ax));	// 16818 push    ax ;~ 0934:116E
cs=0x934;eip=0x00116f; 	T(MOV(ax, 0x0D0));	// 16819 mov     ax, 0D0h ; '–' ;~ 0934:116F
cs=0x934;eip=0x001172; 	X(PUSH(ax));	// 16820 push    ax ;~ 0934:1172
cs=0x934;eip=0x001173; 	T(MOV(ax, 0x0AB));	// 16821 mov     ax, 0ABh ; '´' ;~ 0934:1173
cs=0x934;eip=0x001176; 	X(PUSH(ax));	// 16822 push    ax ;~ 0934:1176
cs=0x934;eip=0x001177; 	T(MOV(ax, 0x7C));	// 16823 mov     ax, 7Ch ; '|' ;~ 0934:1177
cs=0x934;eip=0x00117a; 	X(PUSH(ax));	// 16824 push    ax ;~ 0934:117A
cs=0x934;eip=0x00117b; 	T(MOV(ax, 0x12F));	// 16825 mov     ax, 12Fh ;~ 0934:117B
cs=0x934;eip=0x00117e; 	X(PUSH(ax));	// 16826 push    ax ;~ 0934:117E
cs=0x934;eip=0x00117f; 	T(MOV(ax, 0x0F8));	// 16827 mov     ax, 0F8h ; '¯' ;~ 0934:117F
cs=0x934;eip=0x001182; 	X(PUSH(ax));	// 16828 push    ax ;~ 0934:1182
cs=0x934;eip=0x001183; 	R(CALLF(sub_28183,0));	// 16829 call    far ptr sub_28183 ;~ 0934:1183
cs=0x934;eip=0x001188; 	T(ADD(sp, 0x10));	// 16830 add     sp, 10h ;~ 0934:1188
cs=0x934;eip=0x00118b; 	X(MOV(byte_38a92, 1));	// 16831 mov     byte_38A92, 1 ;~ 0934:118B
loc_18ab0:
	// 5255 
cs=0x934;eip=0x001190; 	T(MOV(ax, 1));	// 16834 mov     ax, 1 ;~ 0934:1190
cs=0x934;eip=0x001193; 	X(PUSH(ax));	// 16835 push    ax ;~ 0934:1193
cs=0x934;eip=0x001194; 	X(PUSH(ax));	// 16836 push    ax ;~ 0934:1194
cs=0x934;eip=0x001195; 	T(MOV(ax, 0x0C7));	// 16837 mov     ax, 0C7h ; '«' ;~ 0934:1195
cs=0x934;eip=0x001198; 	X(PUSH(ax));	// 16838 push    ax ;~ 0934:1198
cs=0x934;eip=0x001199; 	T(MOV(ax, 0x0D0));	// 16839 mov     ax, 0D0h ; '–' ;~ 0934:1199
cs=0x934;eip=0x00119c; 	X(PUSH(ax));	// 16840 push    ax ;~ 0934:119C
cs=0x934;eip=0x00119d; 	T(MOV(ax, 0x97));	// 16841 mov     ax, 97h ; 'ó' ;~ 0934:119D
cs=0x934;eip=0x0011a0; 	X(PUSH(ax));	// 16842 push    ax ;~ 0934:11A0
cs=0x934;eip=0x0011a1; 	T(MOV(ax, 0x68));	// 16843 mov     ax, 68h ; 'h' ;~ 0934:11A1
cs=0x934;eip=0x0011a4; 	X(PUSH(ax));	// 16844 push    ax ;~ 0934:11A4
cs=0x934;eip=0x0011a5; 	T(MOV(ax, 0x13F));	// 16845 mov     ax, 13Fh ;~ 0934:11A5
cs=0x934;eip=0x0011a8; 	X(PUSH(ax));	// 16846 push    ax ;~ 0934:11A8
cs=0x934;eip=0x0011a9; 	T(MOV(ax, 0x108));	// 16847 mov     ax, 108h ;~ 0934:11A9
cs=0x934;eip=0x0011ac; 	X(PUSH(ax));	// 16848 push    ax ;~ 0934:11AC
cs=0x934;eip=0x0011ad; 	R(CALLF(sub_28183,0));	// 16849 call    far ptr sub_28183 ;~ 0934:11AD
cs=0x934;eip=0x0011b2; 	T(ADD(sp, 0x10));	// 16850 add     sp, 10h ;~ 0934:11B2
cs=0x934;eip=0x0011b5; 	T(MOV(ax, 1));	// 16851 mov     ax, 1 ;~ 0934:11B5
cs=0x934;eip=0x0011b8; 	X(MOV(word_2beda, ax));	// 16852 mov     word_2BEDA, ax ;~ 0934:11B8
cs=0x934;eip=0x0011bb; 	X(PUSH(ax));	// 16853 push    ax ;~ 0934:11BB
cs=0x934;eip=0x0011bc; 	R(CALLF(sub_2714e,0));	// 16854 call    far ptr sub_2714E ;~ 0934:11BC
cs=0x934;eip=0x0011c1; 	T(ADD(sp, 2));	// 16855 add     sp, 2 ;~ 0934:11C1
cs=0x934;eip=0x0011c4; 	T(MOV(al, byte_38cd4));	// 16856 mov     al, byte_38CD4 ;~ 0934:11C4
cs=0x934;eip=0x0011c7; 	T(SUB(ah, ah));	// 16857 sub     ah, ah ;~ 0934:11C7
cs=0x934;eip=0x0011c9; 	T(MOV(si, ax));	// 16858 mov     si, ax ;~ 0934:11C9
cs=0x934;eip=0x0011cb; 	T(SHL(si, 1));	// 16859 shl     si, 1 ;~ 0934:11CB
cs=0x934;eip=0x0011cd; 	T(MOV(al, *(raddr(ds,si-0x1A93))));	// 16860 mov     al, [si-1A93h] ;~ 0934:11CD
cs=0x934;eip=0x0011d1; 	T(ADD(ax, 0x0D0));	// 16861 add     ax, 0D0h ; '–' ;~ 0934:11D1
cs=0x934;eip=0x0011d4; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 16862 mov     [bp+var_4], ax ;~ 0934:11D4
cs=0x934;eip=0x0011d7; 	T(MOV(al, *(raddr(ds,si-0x1A92))));	// 16863 mov     al, [si-1A92h] ;~ 0934:11D7
cs=0x934;eip=0x0011db; 	T(SUB(ah, ah));	// 16864 sub     ah, ah ;~ 0934:11DB
cs=0x934;eip=0x0011dd; 	T(ADD(ax, 0x0AF));	// 16865 add     ax, 0AFh ; 'Ø' ;~ 0934:11DD
cs=0x934;eip=0x0011e0; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 16866 mov     [bp+var_6], ax ;~ 0934:11E0
cs=0x934;eip=0x0011e3; 	X(PUSH(ax));	// 16867 push    ax ;~ 0934:11E3
cs=0x934;eip=0x0011e4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 16868 push    [bp+var_4] ;~ 0934:11E4
cs=0x934;eip=0x0011e7; 	R(CALLF(sub_26fb8,0));	// 16869 call    sub_26FB8 ;~ 0934:11E7
cs=0x934;eip=0x0011ec; 	T(ADD(sp, 4));	// 16870 add     sp, 4 ;~ 0934:11EC
cs=0x934;eip=0x0011ef; 	T(CMP(word_3a178, 0x13));	// 16871 cmp     word_3A178, 13h ;~ 0934:11EF
cs=0x934;eip=0x0011f4; 	R(JNZ(loc_18b1e));	// 16872 jnz     short loc_18B1E ;~ 0934:11F4
cs=0x934;eip=0x0011f6; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x80));	// 16873 mov     [bp+var_2], 80h ; 'Ä' ;~ 0934:11F6
cs=0x934;eip=0x0011fb; 	R(JMP(loc_18b23));	// 16874 jmp     short loc_18B23 ;~ 0934:11FB
loc_18b1e:
	// 5256 
cs=0x934;eip=0x0011fe; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 16879 mov     [bp+var_2], 0 ;~ 0934:11FE
loc_18b23:
	// 5257 
cs=0x934;eip=0x001203; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 16882 mov     ax, [bp+var_2] ;~ 0934:1203
cs=0x934;eip=0x001206; 	T(ADD(ax, 0x0F));	// 16883 add     ax, 0Fh ;~ 0934:1206
cs=0x934;eip=0x001209; 	X(PUSH(ax));	// 16884 push    ax ;~ 0934:1209
cs=0x934;eip=0x00120a; 	R(CALLF(sub_27031,0));	// 16885 call    far ptr sub_27031 ;~ 0934:120A
cs=0x934;eip=0x00120f; 	T(ADD(sp, 2));	// 16886 add     sp, 2 ;~ 0934:120F
cs=0x934;eip=0x001212; 	T(MOV(ax, 0x18));	// 16887 mov     ax, 18h ;~ 0934:1212
cs=0x934;eip=0x001215; 	X(PUSH(ax));	// 16888 push    ax ;~ 0934:1215
cs=0x934;eip=0x001216; 	T(MOV(ax, 4));	// 16889 mov     ax, 4 ;~ 0934:1216
cs=0x934;eip=0x001219; 	X(PUSH(ax));	// 16890 push    ax ;~ 0934:1219
cs=0x934;eip=0x00121a; 	T(MOV(ax, 0x0E090));	// 16891 mov     ax, 0E090h ;~ 0934:121A
cs=0x934;eip=0x00121d; 	X(PUSH(ax));	// 16892 push    ax ;~ 0934:121D
cs=0x934;eip=0x00121e; 	R(CALLF(sub_285fb,0));	// 16893 call    far ptr sub_285FB ;~ 0934:121E
cs=0x934;eip=0x001223; 	T(ADD(sp, 6));	// 16894 add     sp, 6 ;~ 0934:1223
cs=0x934;eip=0x001226; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 16895 mov     ax, [bp+var_2] ;~ 0934:1226
cs=0x934;eip=0x001229; 	T(ADD(ax, 7));	// 16896 add     ax, 7 ;~ 0934:1229
cs=0x934;eip=0x00122c; 	X(PUSH(ax));	// 16897 push    ax ;~ 0934:122C
cs=0x934;eip=0x00122d; 	R(CALLF(sub_27031,0));	// 16898 call    far ptr sub_27031 ;~ 0934:122D
cs=0x934;eip=0x001232; 	T(ADD(sp, 2));	// 16899 add     sp, 2 ;~ 0934:1232
cs=0x934;eip=0x001235; 	T(MOV(ax, 0x18));	// 16900 mov     ax, 18h ;~ 0934:1235
cs=0x934;eip=0x001238; 	X(PUSH(ax));	// 16901 push    ax ;~ 0934:1238
cs=0x934;eip=0x001239; 	T(MOV(ax, 4));	// 16902 mov     ax, 4 ;~ 0934:1239
cs=0x934;eip=0x00123c; 	X(PUSH(ax));	// 16903 push    ax ;~ 0934:123C
cs=0x934;eip=0x00123d; 	T(MOV(ax, 0x0E0F0));	// 16904 mov     ax, 0E0F0h ;~ 0934:123D
cs=0x934;eip=0x001240; 	X(PUSH(ax));	// 16905 push    ax ;~ 0934:1240
cs=0x934;eip=0x001241; 	R(CALLF(sub_285fb,0));	// 16906 call    far ptr sub_285FB ;~ 0934:1241
cs=0x934;eip=0x001246; 	T(ADD(sp, 6));	// 16907 add     sp, 6 ;~ 0934:1246
cs=0x934;eip=0x001249; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 16908 mov     ax, [bp+var_2] ;~ 0934:1249
cs=0x934;eip=0x00124c; 	T(ADD(ax, 8));	// 16909 add     ax, 8 ;~ 0934:124C
cs=0x934;eip=0x00124f; 	X(PUSH(ax));	// 16910 push    ax ;~ 0934:124F
cs=0x934;eip=0x001250; 	R(CALLF(sub_27031,0));	// 16911 call    far ptr sub_27031 ;~ 0934:1250
cs=0x934;eip=0x001255; 	T(ADD(sp, 2));	// 16912 add     sp, 2 ;~ 0934:1255
cs=0x934;eip=0x001258; 	T(MOV(ax, 0x18));	// 16913 mov     ax, 18h ;~ 0934:1258
cs=0x934;eip=0x00125b; 	X(PUSH(ax));	// 16914 push    ax ;~ 0934:125B
cs=0x934;eip=0x00125c; 	T(MOV(ax, 4));	// 16915 mov     ax, 4 ;~ 0934:125C
cs=0x934;eip=0x00125f; 	X(PUSH(ax));	// 16916 push    ax ;~ 0934:125F
cs=0x934;eip=0x001260; 	T(MOV(ax, 0x0E150));	// 16917 mov     ax, 0E150h ;~ 0934:1260
cs=0x934;eip=0x001263; 	X(PUSH(ax));	// 16918 push    ax ;~ 0934:1263
cs=0x934;eip=0x001264; 	R(CALLF(sub_285fb,0));	// 16919 call    far ptr sub_285FB ;~ 0934:1264
cs=0x934;eip=0x001269; 	T(ADD(sp, 6));	// 16920 add     sp, 6 ;~ 0934:1269
cs=0x934;eip=0x00126c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 16921 push    [bp+var_2] ;~ 0934:126C
cs=0x934;eip=0x00126f; 	R(CALLF(sub_27031,0));	// 16922 call    far ptr sub_27031 ;~ 0934:126F
cs=0x934;eip=0x001274; 	T(ADD(sp, 2));	// 16923 add     sp, 2 ;~ 0934:1274
cs=0x934;eip=0x001277; 	T(MOV(ax, 0x18));	// 16924 mov     ax, 18h ;~ 0934:1277
cs=0x934;eip=0x00127a; 	X(PUSH(ax));	// 16925 push    ax ;~ 0934:127A
cs=0x934;eip=0x00127b; 	T(MOV(ax, 4));	// 16926 mov     ax, 4 ;~ 0934:127B
cs=0x934;eip=0x00127e; 	X(PUSH(ax));	// 16927 push    ax ;~ 0934:127E
cs=0x934;eip=0x00127f; 	T(MOV(ax, 0x0E1B0));	// 16928 mov     ax, 0E1B0h ;~ 0934:127F
cs=0x934;eip=0x001282; 	X(PUSH(ax));	// 16929 push    ax ;~ 0934:1282
cs=0x934;eip=0x001283; 	R(CALLF(sub_285fb,0));	// 16930 call    far ptr sub_285FB ;~ 0934:1283
cs=0x934;eip=0x001288; 	T(ADD(sp, 6));	// 16931 add     sp, 6 ;~ 0934:1288
cs=0x934;eip=0x00128b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 16932 mov     ax, [bp+var_2] ;~ 0934:128B
cs=0x934;eip=0x00128e; 	T(ADD(ax, 0x0C));	// 16933 add     ax, 0Ch ;~ 0934:128E
cs=0x934;eip=0x001291; 	X(PUSH(ax));	// 16934 push    ax ;~ 0934:1291
cs=0x934;eip=0x001292; 	R(CALLF(sub_27031,0));	// 16935 call    far ptr sub_27031 ;~ 0934:1292
cs=0x934;eip=0x001297; 	T(ADD(sp, 2));	// 16936 add     sp, 2 ;~ 0934:1297
cs=0x934;eip=0x00129a; 	T(MOV(ax, 0x18));	// 16937 mov     ax, 18h ;~ 0934:129A
cs=0x934;eip=0x00129d; 	X(PUSH(ax));	// 16938 push    ax ;~ 0934:129D
cs=0x934;eip=0x00129e; 	T(MOV(ax, 4));	// 16939 mov     ax, 4 ;~ 0934:129E
cs=0x934;eip=0x0012a1; 	X(PUSH(ax));	// 16940 push    ax ;~ 0934:12A1
cs=0x934;eip=0x0012a2; 	T(MOV(ax, 0x0E210));	// 16941 mov     ax, 0E210h ;~ 0934:12A2
cs=0x934;eip=0x0012a5; 	X(PUSH(ax));	// 16942 push    ax ;~ 0934:12A5
cs=0x934;eip=0x0012a6; 	R(CALLF(sub_285fb,0));	// 16943 call    far ptr sub_285FB ;~ 0934:12A6
cs=0x934;eip=0x0012ab; 	T(ADD(sp, 6));	// 16944 add     sp, 6 ;~ 0934:12AB
cs=0x934;eip=0x0012ae; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 16945 mov     ax, [bp+var_2] ;~ 0934:12AE
cs=0x934;eip=0x0012b1; 	T(ADD(ax, 4));	// 16946 add     ax, 4 ;~ 0934:12B1
cs=0x934;eip=0x0012b4; 	X(PUSH(ax));	// 16947 push    ax ;~ 0934:12B4
cs=0x934;eip=0x0012b5; 	R(CALLF(sub_27031,0));	// 16948 call    far ptr sub_27031 ;~ 0934:12B5
cs=0x934;eip=0x0012ba; 	T(ADD(sp, 2));	// 16949 add     sp, 2 ;~ 0934:12BA
cs=0x934;eip=0x0012bd; 	T(MOV(ax, 0x18));	// 16950 mov     ax, 18h ;~ 0934:12BD
cs=0x934;eip=0x0012c0; 	X(PUSH(ax));	// 16951 push    ax ;~ 0934:12C0
cs=0x934;eip=0x0012c1; 	T(MOV(ax, 4));	// 16952 mov     ax, 4 ;~ 0934:12C1
cs=0x934;eip=0x0012c4; 	X(PUSH(ax));	// 16953 push    ax ;~ 0934:12C4
cs=0x934;eip=0x0012c5; 	T(MOV(ax, 0x0E270));	// 16954 mov     ax, 0E270h ;~ 0934:12C5
cs=0x934;eip=0x0012c8; 	X(PUSH(ax));	// 16955 push    ax ;~ 0934:12C8
cs=0x934;eip=0x0012c9; 	R(CALLF(sub_285fb,0));	// 16956 call    far ptr sub_285FB ;~ 0934:12C9
cs=0x934;eip=0x0012ce; 	T(ADD(sp, 6));	// 16957 add     sp, 6 ;~ 0934:12CE
cs=0x934;eip=0x0012d1; 	T(SUB(ax, ax));	// 16958 sub     ax, ax ;~ 0934:12D1
cs=0x934;eip=0x0012d3; 	X(MOV(word_2beda, ax));	// 16959 mov     word_2BEDA, ax ;~ 0934:12D3
cs=0x934;eip=0x0012d6; 	X(PUSH(ax));	// 16960 push    ax ;~ 0934:12D6
cs=0x934;eip=0x0012d7; 	R(CALLF(sub_2714e,0));	// 16961 call    far ptr sub_2714E ;~ 0934:12D7
cs=0x934;eip=0x0012dc; 	T(ADD(sp, 2));	// 16962 add     sp, 2 ;~ 0934:12DC
cs=0x934;eip=0x0012df; 	T(SUB(ax, ax));	// 16963 sub     ax, ax ;~ 0934:12DF
cs=0x934;eip=0x0012e1; 	X(PUSH(ax));	// 16964 push    ax ;~ 0934:12E1
cs=0x934;eip=0x0012e2; 	T(MOV(ax, 1));	// 16965 mov     ax, 1 ;~ 0934:12E2
cs=0x934;eip=0x0012e5; 	X(PUSH(ax));	// 16966 push    ax ;~ 0934:12E5
cs=0x934;eip=0x0012e6; 	T(MOV(ax, 0x0AB));	// 16967 mov     ax, 0ABh ; '´' ;~ 0934:12E6
cs=0x934;eip=0x0012e9; 	X(PUSH(ax));	// 16968 push    ax ;~ 0934:12E9
cs=0x934;eip=0x0012ea; 	T(MOV(ax, 0x0F8));	// 16969 mov     ax, 0F8h ; '¯' ;~ 0934:12EA
cs=0x934;eip=0x0012ed; 	X(PUSH(ax));	// 16970 push    ax ;~ 0934:12ED
cs=0x934;eip=0x0012ee; 	T(MOV(ax, 0x0C7));	// 16971 mov     ax, 0C7h ; '«' ;~ 0934:12EE
cs=0x934;eip=0x0012f1; 	X(PUSH(ax));	// 16972 push    ax ;~ 0934:12F1
cs=0x934;eip=0x0012f2; 	T(MOV(ax, 0x98));	// 16973 mov     ax, 98h ;~ 0934:12F2
cs=0x934;eip=0x0012f5; 	X(PUSH(ax));	// 16974 push    ax ;~ 0934:12F5
cs=0x934;eip=0x0012f6; 	T(MOV(ax, 0x107));	// 16975 mov     ax, 107h ;~ 0934:12F6
cs=0x934;eip=0x0012f9; 	X(PUSH(ax));	// 16976 push    ax ;~ 0934:12F9
cs=0x934;eip=0x0012fa; 	T(MOV(ax, 0x0D0));	// 16977 mov     ax, 0D0h ; '–' ;~ 0934:12FA
cs=0x934;eip=0x0012fd; 	X(PUSH(ax));	// 16978 push    ax ;~ 0934:12FD
cs=0x934;eip=0x0012fe; 	R(CALLF(sub_28183,0));	// 16979 call    far ptr sub_28183 ;~ 0934:12FE
cs=0x934;eip=0x001303; 	T(ADD(sp, 0x10));	// 16980 add     sp, 10h ;~ 0934:1303
cs=0x934;eip=0x001306; 	X(MOV(byte_3a3f6, 1));	// 16981 mov     byte_3A3F6, 1 ;~ 0934:1306
cs=0x934;eip=0x00130b; 	X(POP(si));	// 16982 pop     si ;~ 0934:130B
cs=0x934;eip=0x00130c; 	T(MOV(sp, bp));	// 16983 mov     sp, bp ;~ 0934:130C
cs=0x934;eip=0x00130e; 	X(POP(bp));	// 16984 pop     bp ;~ 0934:130E
cs=0x934;eip=0x00130f; 	R(RETF(0));	// 16985 retf ;~ 0934:130F
sub_18c30:
	// 16993 
#undef var_6
#define var_6 -6
	// 16996 var_6           = word ptr -6 ;~ 0934:1310
#undef var_4
#define var_4 -4
	// 16997 var_4           = word ptr -4 ;~ 0934:1310
#undef var_2
#define var_2 -2
	// 16998 var_2           = word ptr -2 ;~ 0934:1310
ret_934_1310:
	// 5258 
cs=0x934;eip=0x001310; 	X(PUSH(bp));	// 17000 push    bp ;~ 0934:1310
cs=0x934;eip=0x001311; 	T(MOV(bp, sp));	// 17001 mov     bp, sp ;~ 0934:1311
cs=0x934;eip=0x001313; 	T(SUB(sp, 6));	// 17002 sub     sp, 6 ;~ 0934:1313
cs=0x934;eip=0x001316; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0));	// 17003 mov     [bp+var_6], 0 ;~ 0934:1316
cs=0x934;eip=0x00131b; 	T(CMP(byte_3a17a, 8));	// 17004 cmp     byte_3A17A, 8 ;~ 0934:131B
cs=0x934;eip=0x001320; 	R(JNC(loc_18c4a));	// 17005 jnb     short loc_18C4A ;~ 0934:1320
cs=0x934;eip=0x001322; 	X(MOV(byte_3a62e, 0));	// 17006 mov     byte_3A62E, 0 ;~ 0934:1322
cs=0x934;eip=0x001327; 	R(JMP(loc_18c4f));	// 17007 jmp     short loc_18C4F ;~ 0934:1327
loc_18c4a:
	// 5259 
cs=0x934;eip=0x00132a; 	X(MOV(byte_3a62e, 1));	// 17012 mov     byte_3A62E, 1 ;~ 0934:132A
loc_18c4f:
	// 5260 
cs=0x934;eip=0x00132f; 	T(CMP(byte_3a17a, 0x18));	// 17015 cmp     byte_3A17A, 18h ;~ 0934:132F
cs=0x934;eip=0x001334; 	R(JBE(loc_18c5b));	// 17016 jbe     short loc_18C5B ;~ 0934:1334
cs=0x934;eip=0x001336; 	X(MOV(byte_3a62e, 2));	// 17017 mov     byte_3A62E, 2 ;~ 0934:1336
loc_18c5b:
	// 5261 
cs=0x934;eip=0x00133b; 	T(MOV(al, byte_3a3a2));	// 17020 mov     al, byte_3A3A2 ;~ 0934:133B
cs=0x934;eip=0x00133e; 	T(CMP(byte_3a62e, al));	// 17021 cmp     byte_3A62E, al ;~ 0934:133E
cs=0x934;eip=0x001342; 	R(JZ(loc_18cb1));	// 17022 jz      short loc_18CB1 ;~ 0934:1342
cs=0x934;eip=0x001344; 	T(MOV(al, byte_3a62e));	// 17023 mov     al, byte_3A62E ;~ 0934:1344
cs=0x934;eip=0x001347; 	T(SUB(ah, ah));	// 17024 sub     ah, ah ;~ 0934:1347
cs=0x934;eip=0x001349; 	T(OR(ax, ax));	// 17025 or      ax, ax ;~ 0934:1349
cs=0x934;eip=0x00134b; 	R(JZ(loc_18c80));	// 17026 jz      short loc_18C80 ;~ 0934:134B
cs=0x934;eip=0x00134d; 	T(CMP(ax, 1));	// 17027 cmp     ax, 1 ;~ 0934:134D
cs=0x934;eip=0x001350; 	R(JZ(loc_18c77));	// 17028 jz      short loc_18C77 ;~ 0934:1350
cs=0x934;eip=0x001352; 	T(CMP(ax, 2));	// 17029 cmp     ax, 2 ;~ 0934:1352
cs=0x934;eip=0x001355; 	R(JZ(loc_18c90));	// 17030 jz      short loc_18C90 ;~ 0934:1355
loc_18c77:
	// 5262 
cs=0x934;eip=0x001357; 	T(MOV(ax, 0x20));	// 17033 mov     ax, 20h ; ' ' ;~ 0934:1357
cs=0x934;eip=0x00135a; 	X(PUSH(ax));	// 17034 push    ax ;~ 0934:135A
cs=0x934;eip=0x00135b; 	T(MOV(ax, 0x60));	// 17035 mov     ax, 60h ; '`' ;~ 0934:135B
cs=0x934;eip=0x00135e; 	R(JMP(loc_18c86));	// 17036 jmp     short loc_18C86 ;~ 0934:135E
loc_18c80:
	// 5263 
cs=0x934;eip=0x001360; 	T(SUB(ax, ax));	// 17040 sub     ax, ax ;~ 0934:1360
cs=0x934;eip=0x001362; 	X(PUSH(ax));	// 17041 push    ax ;~ 0934:1362
cs=0x934;eip=0x001363; 	T(MOV(ax, 0x30));	// 17042 mov     ax, 30h ; '0' ;~ 0934:1363
loc_18c86:
	// 5264 
cs=0x934;eip=0x001366; 	X(PUSH(ax));	// 17046 push    ax ;~ 0934:1366
cs=0x934;eip=0x001367; 	X(PUSH(cs));	// 17047 push    cs ;~ 0934:1367
cs=0x934;eip=0x001368; 	R(CALL(sub_18da8,0));	// 17048 call    near ptr sub_18DA8 ;~ 0934:1368
cs=0x934;eip=0x00136b; 	T(ADD(sp, 4));	// 17049 add     sp, 4 ;~ 0934:136B
cs=0x934;eip=0x00136e; 	R(JMP(loc_18c96));	// 17050 jmp     short loc_18C96 ;~ 0934:136E
loc_18c90:
	// 5265 
cs=0x934;eip=0x001370; 	T(SUB(ax, ax));	// 17054 sub     ax, ax ;~ 0934:1370
cs=0x934;eip=0x001372; 	X(PUSH(ax));	// 17055 push    ax ;~ 0934:1372
cs=0x934;eip=0x001373; 	R(JMP(loc_18c86));	// 17056 jmp     short loc_18C86 ;~ 0934:1373
loc_18c96:
	// 5266 
cs=0x934;eip=0x001376; 	T(MOV(al, byte_3a62e));	// 17061 mov     al, byte_3A62E ;~ 0934:1376
cs=0x934;eip=0x001379; 	X(MOV(byte_3a3a2, al));	// 17062 mov     byte_3A3A2, al ;~ 0934:1379
cs=0x934;eip=0x00137c; 	T(MOV(al, 0x0FF));	// 17063 mov     al, 0FFh ;~ 0934:137C
cs=0x934;eip=0x00137e; 	X(MOV(byte_3a6a0, al));	// 17064 mov     byte_3A6A0, al ;~ 0934:137E
cs=0x934;eip=0x001381; 	X(MOV(byte_38a96, al));	// 17065 mov     byte_38A96, al ;~ 0934:1381
cs=0x934;eip=0x001384; 	T(MOV(al, byte_38ce8));	// 17066 mov     al, byte_38CE8 ;~ 0934:1384
cs=0x934;eip=0x001387; 	T(XOR(al, 0x80));	// 17067 xor     al, 80h ;~ 0934:1387
cs=0x934;eip=0x001389; 	X(MOV(byte_38cdd, al));	// 17068 mov     byte_38CDD, al ;~ 0934:1389
cs=0x934;eip=0x00138c; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 1));	// 17069 mov     [bp+var_6], 1 ;~ 0934:138C
loc_18cb1:
	// 5267 
cs=0x934;eip=0x001391; 	T(MOV(al, byte_3a3f7));	// 17072 mov     al, byte_3A3F7 ;~ 0934:1391
cs=0x934;eip=0x001394; 	T(CMP(byte_3a17a, al));	// 17073 cmp     byte_3A17A, al ;~ 0934:1394
cs=0x934;eip=0x001398; 	R(JNZ(loc_18cbd));	// 17074 jnz     short loc_18CBD ;~ 0934:1398
cs=0x934;eip=0x00139a; 	R(JMP(loc_18d96));	// 17075 jmp     loc_18D96 ;~ 0934:139A
loc_18cbd:
	// 5268 
cs=0x934;eip=0x00139d; 	T(CMP(al, 0x0FF));	// 17079 cmp     al, 0FFh ;~ 0934:139D
cs=0x934;eip=0x00139f; 	R(JZ(loc_18d20));	// 17080 jz      short loc_18D20 ;~ 0934:139F
cs=0x934;eip=0x0013a1; 	X(PUSH(word_3a5c0));	// 17081 push    word_3A5C0 ;~ 0934:13A1
cs=0x934;eip=0x0013a5; 	T(SUB(ah, ah));	// 17082 sub     ah, ah ;~ 0934:13A5
cs=0x934;eip=0x0013a7; 	T(MOV(cx, ax));	// 17083 mov     cx, ax ;~ 0934:13A7
cs=0x934;eip=0x0013a9; 	T(MOV(ax, word_3a5c2));	// 17084 mov     ax, word_3A5C2 ;~ 0934:13A9
cs=0x934;eip=0x0013ac; 	T(MUL1_2(cx));	// 17085 mul     cx ;~ 0934:13AC
cs=0x934;eip=0x0013ae; 	T(SHL(ax, 1));	// 17086 shl     ax, 1 ;~ 0934:13AE
cs=0x934;eip=0x0013b0; 	T(MOV(dx, word_3a5c2));	// 17087 mov     dx, word_3A5C2 ;~ 0934:13B0
cs=0x934;eip=0x0013b4; 	T(MOV(cl, 5));	// 17088 mov     cl, 5 ;~ 0934:13B4
cs=0x934;eip=0x0013b6; 	T(SHL(dx, cl));	// 17089 shl     dx, cl ;~ 0934:13B6
cs=0x934;eip=0x0013b8; 	T(SUB(ax, dx));	// 17090 sub     ax, dx ;~ 0934:13B8
cs=0x934;eip=0x0013ba; 	X(PUSH(ax));	// 17091 push    ax ;~ 0934:13BA
cs=0x934;eip=0x0013bb; 	R(CALLF(sub_2046b,0));	// 17092 call    sub_2046B ;~ 0934:13BB
cs=0x934;eip=0x0013c0; 	T(ADD(sp, 4));	// 17093 add     sp, 4 ;~ 0934:13C0
cs=0x934;eip=0x0013c3; 	T(MOV(ax, word_3a5c4));	// 17094 mov     ax, word_3A5C4 ;~ 0934:13C3
cs=0x934;eip=0x0013c6; 	T(ADD(ax, word_352a0));	// 17095 add     ax, word_352A0 ;~ 0934:13C6
cs=0x934;eip=0x0013ca; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 17096 mov     [bp+var_2], ax ;~ 0934:13CA
cs=0x934;eip=0x0013cd; 	T(MOV(ax, word_3a5c6));	// 17097 mov     ax, word_3A5C6 ;~ 0934:13CD
cs=0x934;eip=0x0013d0; 	T(SUB(ax, word_352a2));	// 17098 sub     ax, word_352A2 ;~ 0934:13D0
cs=0x934;eip=0x0013d4; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 17099 mov     [bp+var_4], ax ;~ 0934:13D4
cs=0x934;eip=0x0013d7; 	T(SUB(ax, ax));	// 17100 sub     ax, ax ;~ 0934:13D7
cs=0x934;eip=0x0013d9; 	X(PUSH(ax));	// 17101 push    ax ;~ 0934:13D9
cs=0x934;eip=0x0013da; 	T(MOV(ax, 1));	// 17102 mov     ax, 1 ;~ 0934:13DA
cs=0x934;eip=0x0013dd; 	X(PUSH(ax));	// 17103 push    ax ;~ 0934:13DD
cs=0x934;eip=0x0013de; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 17104 mov     ax, [bp+var_4] ;~ 0934:13DE
cs=0x934;eip=0x0013e1; 	T(ADD(ax, 4));	// 17105 add     ax, 4 ;~ 0934:13E1
cs=0x934;eip=0x0013e4; 	X(PUSH(ax));	// 17106 push    ax ;~ 0934:13E4
cs=0x934;eip=0x0013e5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 17107 push    [bp+var_2] ;~ 0934:13E5
cs=0x934;eip=0x0013e8; 	T(MOV(ax, 0x9C));	// 17108 mov     ax, 9Ch ; 'ú' ;~ 0934:13E8
cs=0x934;eip=0x0013eb; 	X(PUSH(ax));	// 17109 push    ax ;~ 0934:13EB
cs=0x934;eip=0x0013ec; 	T(MOV(ax, 0x98));	// 17110 mov     ax, 98h ;~ 0934:13EC
cs=0x934;eip=0x0013ef; 	X(PUSH(ax));	// 17111 push    ax ;~ 0934:13EF
cs=0x934;eip=0x0013f0; 	T(MOV(ax, 0x117));	// 17112 mov     ax, 117h ;~ 0934:13F0
cs=0x934;eip=0x0013f3; 	X(PUSH(ax));	// 17113 push    ax ;~ 0934:13F3
cs=0x934;eip=0x0013f4; 	T(MOV(ax, 0x108));	// 17114 mov     ax, 108h ;~ 0934:13F4
cs=0x934;eip=0x0013f7; 	X(PUSH(ax));	// 17115 push    ax ;~ 0934:13F7
cs=0x934;eip=0x0013f8; 	R(CALLF(sub_28183,0));	// 17116 call    far ptr sub_28183 ;~ 0934:13F8
cs=0x934;eip=0x0013fd; 	T(ADD(sp, 0x10));	// 17117 add     sp, 10h ;~ 0934:13FD
loc_18d20:
	// 5269 
cs=0x934;eip=0x001400; 	X(PUSH(word_3a5c0));	// 17120 push    word_3A5C0 ;~ 0934:1400
cs=0x934;eip=0x001404; 	T(MOV(al, byte_3a17a));	// 17121 mov     al, byte_3A17A ;~ 0934:1404
cs=0x934;eip=0x001407; 	T(SUB(ah, ah));	// 17122 sub     ah, ah ;~ 0934:1407
cs=0x934;eip=0x001409; 	T(MOV(cx, ax));	// 17123 mov     cx, ax ;~ 0934:1409
cs=0x934;eip=0x00140b; 	T(MOV(ax, word_3a5c2));	// 17124 mov     ax, word_3A5C2 ;~ 0934:140B
cs=0x934;eip=0x00140e; 	T(MUL1_2(cx));	// 17125 mul     cx ;~ 0934:140E
cs=0x934;eip=0x001410; 	T(SHL(ax, 1));	// 17126 shl     ax, 1 ;~ 0934:1410
cs=0x934;eip=0x001412; 	T(MOV(dx, word_3a5c2));	// 17127 mov     dx, word_3A5C2 ;~ 0934:1412
cs=0x934;eip=0x001416; 	T(MOV(cl, 5));	// 17128 mov     cl, 5 ;~ 0934:1416
cs=0x934;eip=0x001418; 	T(SHL(dx, cl));	// 17129 shl     dx, cl ;~ 0934:1418
cs=0x934;eip=0x00141a; 	T(SUB(ax, dx));	// 17130 sub     ax, dx ;~ 0934:141A
cs=0x934;eip=0x00141c; 	X(PUSH(ax));	// 17131 push    ax ;~ 0934:141C
cs=0x934;eip=0x00141d; 	R(CALLF(sub_2046b,0));	// 17132 call    sub_2046B ;~ 0934:141D
cs=0x934;eip=0x001422; 	T(ADD(sp, 4));	// 17133 add     sp, 4 ;~ 0934:1422
cs=0x934;eip=0x001425; 	T(MOV(ax, word_3a5c4));	// 17134 mov     ax, word_3A5C4 ;~ 0934:1425
cs=0x934;eip=0x001428; 	T(ADD(ax, word_352a0));	// 17135 add     ax, word_352A0 ;~ 0934:1428
cs=0x934;eip=0x00142c; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 17136 mov     [bp+var_2], ax ;~ 0934:142C
cs=0x934;eip=0x00142f; 	T(MOV(ax, word_3a5c6));	// 17137 mov     ax, word_3A5C6 ;~ 0934:142F
cs=0x934;eip=0x001432; 	T(SUB(ax, word_352a2));	// 17138 sub     ax, word_352A2 ;~ 0934:1432
cs=0x934;eip=0x001436; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 17139 mov     [bp+var_4], ax ;~ 0934:1436
cs=0x934;eip=0x001439; 	T(MOV(ax, 1));	// 17140 mov     ax, 1 ;~ 0934:1439
cs=0x934;eip=0x00143c; 	X(PUSH(ax));	// 17141 push    ax ;~ 0934:143C
cs=0x934;eip=0x00143d; 	T(SUB(ax, ax));	// 17142 sub     ax, ax ;~ 0934:143D
cs=0x934;eip=0x00143f; 	X(PUSH(ax));	// 17143 push    ax ;~ 0934:143F
cs=0x934;eip=0x001440; 	T(MOV(ax, 0x9C));	// 17144 mov     ax, 9Ch ; 'ú' ;~ 0934:1440
cs=0x934;eip=0x001443; 	X(PUSH(ax));	// 17145 push    ax ;~ 0934:1443
cs=0x934;eip=0x001444; 	T(MOV(ax, 0x108));	// 17146 mov     ax, 108h ;~ 0934:1444
cs=0x934;eip=0x001447; 	X(PUSH(ax));	// 17147 push    ax ;~ 0934:1447
cs=0x934;eip=0x001448; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 17148 mov     ax, [bp+var_4] ;~ 0934:1448
cs=0x934;eip=0x00144b; 	T(ADD(ax, 4));	// 17149 add     ax, 4 ;~ 0934:144B
cs=0x934;eip=0x00144e; 	X(PUSH(ax));	// 17150 push    ax ;~ 0934:144E
cs=0x934;eip=0x00144f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 17151 push    [bp+var_4] ;~ 0934:144F
cs=0x934;eip=0x001452; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 17152 mov     ax, [bp+var_2] ;~ 0934:1452
cs=0x934;eip=0x001455; 	T(ADD(ax, 0x0F));	// 17153 add     ax, 0Fh ;~ 0934:1455
cs=0x934;eip=0x001458; 	X(PUSH(ax));	// 17154 push    ax ;~ 0934:1458
cs=0x934;eip=0x001459; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 17155 push    [bp+var_2] ;~ 0934:1459
cs=0x934;eip=0x00145c; 	R(CALLF(sub_28183,0));	// 17156 call    far ptr sub_28183 ;~ 0934:145C
cs=0x934;eip=0x001461; 	T(ADD(sp, 0x10));	// 17157 add     sp, 10h ;~ 0934:1461
cs=0x934;eip=0x001464; 	T(SUB(ax, ax));	// 17158 sub     ax, ax ;~ 0934:1464
cs=0x934;eip=0x001466; 	X(MOV(word_2beda, ax));	// 17159 mov     word_2BEDA, ax ;~ 0934:1466
cs=0x934;eip=0x001469; 	X(PUSH(ax));	// 17160 push    ax ;~ 0934:1469
cs=0x934;eip=0x00146a; 	R(CALLF(sub_2714e,0));	// 17161 call    far ptr sub_2714E ;~ 0934:146A
cs=0x934;eip=0x00146f; 	T(ADD(sp, 2));	// 17162 add     sp, 2 ;~ 0934:146F
cs=0x934;eip=0x001472; 	X(PUSH(cs));	// 17163 push    cs ;~ 0934:1472
cs=0x934;eip=0x001473; 	R(CALL(sub_18e7e,0));	// 17164 call    near ptr sub_18E7E ;~ 0934:1473
loc_18d96:
	// 5270 
cs=0x934;eip=0x001476; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0));	// 17167 cmp     [bp+var_6], 0 ;~ 0934:1476
cs=0x934;eip=0x00147a; 	R(JZ(loc_18da4));	// 17168 jz      short loc_18DA4 ;~ 0934:147A
cs=0x934;eip=0x00147c; 	X(PUSH(cs));	// 17169 push    cs ;~ 0934:147C
cs=0x934;eip=0x00147d; 	R(CALL(sub_18ef4,0));	// 17170 call    near ptr sub_18EF4 ;~ 0934:147D
cs=0x934;eip=0x001480; 	X(PUSH(cs));	// 17171 push    cs ;~ 0934:1480
cs=0x934;eip=0x001481; 	R(CALL(sub_18fe4,0));	// 17172 call    near ptr sub_18FE4 ;~ 0934:1481
loc_18da4:
	// 5271 
cs=0x934;eip=0x001484; 	T(MOV(sp, bp));	// 17175 mov     sp, bp ;~ 0934:1484
cs=0x934;eip=0x001486; 	X(POP(bp));	// 17176 pop     bp ;~ 0934:1486
cs=0x934;eip=0x001487; 	R(RETF(0));	// 17177 retf ;~ 0934:1487
sub_18da8:
	// 17185 
#undef arg_0
#define arg_0 6
	// 17187 arg_0           = word ptr  6 ;~ 0934:1488
#undef arg_2
#define arg_2 8
	// 17188 arg_2           = word ptr  8 ;~ 0934:1488
ret_934_1488:
	// 5272 
cs=0x934;eip=0x001488; 	X(PUSH(bp));	// 17190 push    bp ;~ 0934:1488
cs=0x934;eip=0x001489; 	T(MOV(bp, sp));	// 17191 mov     bp, sp ;~ 0934:1489
cs=0x934;eip=0x00148b; 	X(PUSH(si));	// 17192 push    si ;~ 0934:148B
cs=0x934;eip=0x00148c; 	T(SUB(ax, ax));	// 17193 sub     ax, ax ;~ 0934:148C
cs=0x934;eip=0x00148e; 	X(PUSH(ax));	// 17194 push    ax ;~ 0934:148E
cs=0x934;eip=0x00148f; 	T(MOV(ax, 1));	// 17195 mov     ax, 1 ;~ 0934:148F
cs=0x934;eip=0x001492; 	X(PUSH(ax));	// 17196 push    ax ;~ 0934:1492
cs=0x934;eip=0x001493; 	T(MOV(ax, 0x0C7));	// 17197 mov     ax, 0C7h ; '«' ;~ 0934:1493
cs=0x934;eip=0x001496; 	X(PUSH(ax));	// 17198 push    ax ;~ 0934:1496
cs=0x934;eip=0x001497; 	T(MOV(ax, 0x20));	// 17199 mov     ax, 20h ; ' ' ;~ 0934:1497
cs=0x934;eip=0x00149a; 	X(PUSH(ax));	// 17200 push    ax ;~ 0934:149A
cs=0x934;eip=0x00149b; 	T(MOV(ax, 0x0C7));	// 17201 mov     ax, 0C7h ; '«' ;~ 0934:149B
cs=0x934;eip=0x00149e; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 17202 sub     ax, [bp+arg_0] ;~ 0934:149E
cs=0x934;eip=0x0014a1; 	X(PUSH(ax));	// 17203 push    ax ;~ 0934:14A1
cs=0x934;eip=0x0014a2; 	T(MOV(ax, 0x98));	// 17204 mov     ax, 98h ;~ 0934:14A2
cs=0x934;eip=0x0014a5; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 17205 sub     ax, [bp+arg_0] ;~ 0934:14A5
cs=0x934;eip=0x0014a8; 	X(PUSH(ax));	// 17206 push    ax ;~ 0934:14A8
cs=0x934;eip=0x0014a9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 17207 mov     ax, [bp+arg_2] ;~ 0934:14A9
cs=0x934;eip=0x0014ac; 	T(ADD(ax, 0x0A7));	// 17208 add     ax, 0A7h ; 'ß' ;~ 0934:14AC
cs=0x934;eip=0x0014af; 	X(PUSH(ax));	// 17209 push    ax ;~ 0934:14AF
cs=0x934;eip=0x0014b0; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 17210 push    [bp+arg_2] ;~ 0934:14B0
cs=0x934;eip=0x0014b3; 	R(CALLF(sub_28183,0));	// 17211 call    far ptr sub_28183 ;~ 0934:14B3
cs=0x934;eip=0x0014b8; 	T(ADD(sp, 0x10));	// 17212 add     sp, 10h ;~ 0934:14B8
cs=0x934;eip=0x0014bb; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 17213 mov     si, [bp+arg_2] ;~ 0934:14BB
cs=0x934;eip=0x0014be; 	T(ADD(si, word_38abc));	// 17214 add     si, word_38ABC ;~ 0934:14BE
cs=0x934;eip=0x0014c2; 	T(MOV(ax, 1));	// 17215 mov     ax, 1 ;~ 0934:14C2
cs=0x934;eip=0x0014c5; 	X(PUSH(ax));	// 17216 push    ax ;~ 0934:14C5
cs=0x934;eip=0x0014c6; 	X(PUSH(ax));	// 17217 push    ax ;~ 0934:14C6
cs=0x934;eip=0x0014c7; 	T(MOV(ax, 0x88));	// 17218 mov     ax, 88h ; 'à' ;~ 0934:14C7
cs=0x934;eip=0x0014ca; 	X(PUSH(ax));	// 17219 push    ax ;~ 0934:14CA
cs=0x934;eip=0x0014cb; 	T(MOV(ax, 0x0A8));	// 17220 mov     ax, 0A8h ; '®' ;~ 0934:14CB
cs=0x934;eip=0x0014ce; 	X(PUSH(ax));	// 17221 push    ax ;~ 0934:14CE
cs=0x934;eip=0x0014cf; 	T(MOV(ax, word_38abe));	// 17222 mov     ax, word_38ABE ;~ 0934:14CF
cs=0x934;eip=0x0014d2; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 17223 sub     ax, [bp+arg_0] ;~ 0934:14D2
cs=0x934;eip=0x0014d5; 	X(PUSH(ax));	// 17224 push    ax ;~ 0934:14D5
cs=0x934;eip=0x0014d6; 	T(MOV(ax, 0x98));	// 17225 mov     ax, 98h ;~ 0934:14D6
cs=0x934;eip=0x0014d9; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 17226 sub     ax, [bp+arg_0] ;~ 0934:14D9
cs=0x934;eip=0x0014dc; 	X(PUSH(ax));	// 17227 push    ax ;~ 0934:14DC
cs=0x934;eip=0x0014dd; 	T(ax = si+7);	// 17228 lea     ax, [si+7] ;~ 0934:14DD
cs=0x934;eip=0x0014e0; 	X(PUSH(ax));	// 17229 push    ax ;~ 0934:14E0
cs=0x934;eip=0x0014e1; 	T(ax = si-0x20);	// 17230 lea     ax, [si-20h] ;~ 0934:14E1
cs=0x934;eip=0x0014e4; 	X(PUSH(ax));	// 17231 push    ax ;~ 0934:14E4
cs=0x934;eip=0x0014e5; 	R(CALLF(sub_28183,0));	// 17232 call    far ptr sub_28183 ;~ 0934:14E5
cs=0x934;eip=0x0014ea; 	T(ADD(sp, 0x10));	// 17233 add     sp, 10h ;~ 0934:14EA
cs=0x934;eip=0x0014ed; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 17234 mov     si, [bp+arg_2] ;~ 0934:14ED
cs=0x934;eip=0x0014f0; 	T(ADD(si, word_38abc));	// 17235 add     si, word_38ABC ;~ 0934:14F0
cs=0x934;eip=0x0014f4; 	T(MOV(ax, 1));	// 17236 mov     ax, 1 ;~ 0934:14F4
cs=0x934;eip=0x0014f7; 	X(PUSH(ax));	// 17237 push    ax ;~ 0934:14F7
cs=0x934;eip=0x0014f8; 	X(PUSH(ax));	// 17238 push    ax ;~ 0934:14F8
cs=0x934;eip=0x0014f9; 	T(MOV(ax, 0x0A9));	// 17239 mov     ax, 0A9h ; '©' ;~ 0934:14F9
cs=0x934;eip=0x0014fc; 	X(PUSH(ax));	// 17240 push    ax ;~ 0934:14FC
cs=0x934;eip=0x0014fd; 	T(MOV(ax, 0x0A8));	// 17241 mov     ax, 0A8h ; '®' ;~ 0934:14FD
cs=0x934;eip=0x001500; 	X(PUSH(ax));	// 17242 push    ax ;~ 0934:1500
cs=0x934;eip=0x001501; 	T(MOV(ax, word_38abe));	// 17243 mov     ax, word_38ABE ;~ 0934:1501
cs=0x934;eip=0x001504; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 17244 sub     ax, [bp+arg_0] ;~ 0934:1504
cs=0x934;eip=0x001507; 	X(PUSH(ax));	// 17245 push    ax ;~ 0934:1507
cs=0x934;eip=0x001508; 	T(MOV(ax, 0x98));	// 17246 mov     ax, 98h ;~ 0934:1508
cs=0x934;eip=0x00150b; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 17247 sub     ax, [bp+arg_0] ;~ 0934:150B
cs=0x934;eip=0x00150e; 	X(PUSH(ax));	// 17248 push    ax ;~ 0934:150E
cs=0x934;eip=0x00150f; 	T(MOV(ax, word_38ac4));	// 17249 mov     ax, word_38AC4 ;~ 0934:150F
cs=0x934;eip=0x001512; 	T(ADD(ax, si));	// 17250 add     ax, si ;~ 0934:1512
cs=0x934;eip=0x001514; 	T(SUB(ax, 0x21));	// 17251 sub     ax, 21h ; '!' ;~ 0934:1514
cs=0x934;eip=0x001517; 	X(PUSH(ax));	// 17252 push    ax ;~ 0934:1517
cs=0x934;eip=0x001518; 	T(ax = si+8);	// 17253 lea     ax, [si+8] ;~ 0934:1518
cs=0x934;eip=0x00151b; 	X(PUSH(ax));	// 17254 push    ax ;~ 0934:151B
cs=0x934;eip=0x00151c; 	R(CALLF(sub_28183,0));	// 17255 call    far ptr sub_28183 ;~ 0934:151C
cs=0x934;eip=0x001521; 	T(ADD(sp, 0x10));	// 17256 add     sp, 10h ;~ 0934:1521
cs=0x934;eip=0x001524; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 17257 mov     si, [bp+arg_2] ;~ 0934:1524
cs=0x934;eip=0x001527; 	T(ADD(si, word_38ac0));	// 17258 add     si, word_38AC0 ;~ 0934:1527
cs=0x934;eip=0x00152b; 	T(MOV(ax, 1));	// 17259 mov     ax, 1 ;~ 0934:152B
cs=0x934;eip=0x00152e; 	X(PUSH(ax));	// 17260 push    ax ;~ 0934:152E
cs=0x934;eip=0x00152f; 	X(PUSH(ax));	// 17261 push    ax ;~ 0934:152F
cs=0x934;eip=0x001530; 	T(MOV(ax, 0x0C7));	// 17262 mov     ax, 0C7h ; '«' ;~ 0934:1530
cs=0x934;eip=0x001533; 	X(PUSH(ax));	// 17263 push    ax ;~ 0934:1533
cs=0x934;eip=0x001534; 	T(MOV(ax, 0x108));	// 17264 mov     ax, 108h ;~ 0934:1534
cs=0x934;eip=0x001537; 	X(PUSH(ax));	// 17265 push    ax ;~ 0934:1537
cs=0x934;eip=0x001538; 	T(MOV(ax, word_38ac2));	// 17266 mov     ax, word_38AC2 ;~ 0934:1538
cs=0x934;eip=0x00153b; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 17267 sub     ax, [bp+arg_0] ;~ 0934:153B
cs=0x934;eip=0x00153e; 	X(PUSH(ax));	// 17268 push    ax ;~ 0934:153E
cs=0x934;eip=0x00153f; 	T(MOV(ax, 0x98));	// 17269 mov     ax, 98h ;~ 0934:153F
cs=0x934;eip=0x001542; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 17270 sub     ax, [bp+arg_0] ;~ 0934:1542
cs=0x934;eip=0x001545; 	X(PUSH(ax));	// 17271 push    ax ;~ 0934:1545
cs=0x934;eip=0x001546; 	T(MOV(ax, word_38ac6));	// 17272 mov     ax, word_38AC6 ;~ 0934:1546
cs=0x934;eip=0x001549; 	T(ADD(ax, si));	// 17273 add     ax, si ;~ 0934:1549
cs=0x934;eip=0x00154b; 	T(SUB(ax, 0x21));	// 17274 sub     ax, 21h ; '!' ;~ 0934:154B
cs=0x934;eip=0x00154e; 	X(PUSH(ax));	// 17275 push    ax ;~ 0934:154E
cs=0x934;eip=0x00154f; 	T(ax = si-0x20);	// 17276 lea     ax, [si-20h] ;~ 0934:154F
cs=0x934;eip=0x001552; 	X(PUSH(ax));	// 17277 push    ax ;~ 0934:1552
cs=0x934;eip=0x001553; 	R(CALLF(sub_28183,0));	// 17278 call    far ptr sub_28183 ;~ 0934:1553
cs=0x934;eip=0x001558; 	T(ADD(sp, 0x10));	// 17279 add     sp, 10h ;~ 0934:1558
cs=0x934;eip=0x00155b; 	X(POP(si));	// 17280 pop     si ;~ 0934:155B
cs=0x934;eip=0x00155c; 	X(POP(bp));	// 17281 pop     bp ;~ 0934:155C
cs=0x934;eip=0x00155d; 	R(RETF(0));	// 17282 retf ;~ 0934:155D
sub_18e7e:
	// 17290 
#undef var_4
#define var_4 -4
	// 17293 var_4           = word ptr -4 ;~ 0934:155E
#undef var_2
#define var_2 -2
	// 17294 var_2           = word ptr -2 ;~ 0934:155E
ret_934_155e:
	// 5273 
cs=0x934;eip=0x00155e; 	X(PUSH(bp));	// 17296 push    bp ;~ 0934:155E
cs=0x934;eip=0x00155f; 	T(MOV(bp, sp));	// 17297 mov     bp, sp ;~ 0934:155F
cs=0x934;eip=0x001561; 	T(SUB(sp, 4));	// 17298 sub     sp, 4 ;~ 0934:1561
cs=0x934;eip=0x001564; 	X(PUSH(word_3a5c0));	// 17299 push    word_3A5C0 ;~ 0934:1564
cs=0x934;eip=0x001568; 	T(MOV(al, byte_3a17a));	// 17300 mov     al, byte_3A17A ;~ 0934:1568
cs=0x934;eip=0x00156b; 	T(SUB(ah, ah));	// 17301 sub     ah, ah ;~ 0934:156B
cs=0x934;eip=0x00156d; 	T(MOV(cx, ax));	// 17302 mov     cx, ax ;~ 0934:156D
cs=0x934;eip=0x00156f; 	T(MOV(ax, word_3a5c2));	// 17303 mov     ax, word_3A5C2 ;~ 0934:156F
cs=0x934;eip=0x001572; 	T(MUL1_2(cx));	// 17304 mul     cx ;~ 0934:1572
cs=0x934;eip=0x001574; 	T(SHL(ax, 1));	// 17305 shl     ax, 1 ;~ 0934:1574
cs=0x934;eip=0x001576; 	T(MOV(dx, word_3a5c2));	// 17306 mov     dx, word_3A5C2 ;~ 0934:1576
cs=0x934;eip=0x00157a; 	T(MOV(cl, 5));	// 17307 mov     cl, 5 ;~ 0934:157A
cs=0x934;eip=0x00157c; 	T(SHL(dx, cl));	// 17308 shl     dx, cl ;~ 0934:157C
cs=0x934;eip=0x00157e; 	T(SUB(ax, dx));	// 17309 sub     ax, dx ;~ 0934:157E
cs=0x934;eip=0x001580; 	X(PUSH(ax));	// 17310 push    ax ;~ 0934:1580
cs=0x934;eip=0x001581; 	R(CALLF(sub_2046b,0));	// 17311 call    sub_2046B ;~ 0934:1581
cs=0x934;eip=0x001586; 	T(ADD(sp, 4));	// 17312 add     sp, 4 ;~ 0934:1586
cs=0x934;eip=0x001589; 	T(MOV(ax, word_3a5c4));	// 17313 mov     ax, word_3A5C4 ;~ 0934:1589
cs=0x934;eip=0x00158c; 	T(ADD(ax, word_352a0));	// 17314 add     ax, word_352A0 ;~ 0934:158C
cs=0x934;eip=0x001590; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 17315 mov     [bp+var_2], ax ;~ 0934:1590
cs=0x934;eip=0x001593; 	T(MOV(ax, word_3a5c6));	// 17316 mov     ax, word_3A5C6 ;~ 0934:1593
cs=0x934;eip=0x001596; 	T(SUB(ax, word_352a2));	// 17317 sub     ax, word_352A2 ;~ 0934:1596
cs=0x934;eip=0x00159a; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 17318 mov     [bp+var_4], ax ;~ 0934:159A
cs=0x934;eip=0x00159d; 	T(ADD(ax, 4));	// 17319 add     ax, 4 ;~ 0934:159D
cs=0x934;eip=0x0015a0; 	X(PUSH(ax));	// 17320 push    ax ;~ 0934:15A0
cs=0x934;eip=0x0015a1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 17321 push    [bp+var_2] ;~ 0934:15A1
cs=0x934;eip=0x0015a4; 	R(CALLF(sub_26fb8,0));	// 17322 call    sub_26FB8 ;~ 0934:15A4
cs=0x934;eip=0x0015a9; 	T(ADD(sp, 4));	// 17323 add     sp, 4 ;~ 0934:15A9
cs=0x934;eip=0x0015ac; 	X(PUSH(word_3a5be));	// 17324 push    word_3A5BE ;~ 0934:15AC
cs=0x934;eip=0x0015b0; 	R(CALLF(sub_27031,0));	// 17325 call    far ptr sub_27031 ;~ 0934:15B0
cs=0x934;eip=0x0015b5; 	T(ADD(sp, 2));	// 17326 add     sp, 2 ;~ 0934:15B5
cs=0x934;eip=0x0015b8; 	T(MOV(ax, 5));	// 17327 mov     ax, 5 ;~ 0934:15B8
cs=0x934;eip=0x0015bb; 	X(PUSH(ax));	// 17328 push    ax ;~ 0934:15BB
cs=0x934;eip=0x0015bc; 	T(MOV(ax, 1));	// 17329 mov     ax, 1 ;~ 0934:15BC
cs=0x934;eip=0x0015bf; 	X(PUSH(ax));	// 17330 push    ax ;~ 0934:15BF
cs=0x934;eip=0x0015c0; 	T(MOV(ax, 0x0E554));	// 17331 mov     ax, 0E554h ;~ 0934:15C0
cs=0x934;eip=0x0015c3; 	X(PUSH(ax));	// 17332 push    ax ;~ 0934:15C3
cs=0x934;eip=0x0015c4; 	R(CALLF(sub_285fb,0));	// 17333 call    far ptr sub_285FB ;~ 0934:15C4
cs=0x934;eip=0x0015c9; 	T(MOV(al, byte_3a17a));	// 17334 mov     al, byte_3A17A ;~ 0934:15C9
cs=0x934;eip=0x0015cc; 	X(MOV(byte_3a3f7, al));	// 17335 mov     byte_3A3F7, al ;~ 0934:15CC
cs=0x934;eip=0x0015cf; 	T(MOV(sp, bp));	// 17336 mov     sp, bp ;~ 0934:15CF
cs=0x934;eip=0x0015d1; 	X(POP(bp));	// 17337 pop     bp ;~ 0934:15D1
cs=0x934;eip=0x0015d2; 	R(RETF(0));	// 17338 retf ;~ 0934:15D2
sub_18ef4:
	// 17348 
#undef var_4
#define var_4 -4
	// 17351 var_4           = word ptr -4 ;~ 0934:15D4
#undef var_2
#define var_2 -2
	// 17352 var_2           = word ptr -2 ;~ 0934:15D4
ret_934_15d4:
	// 5274 
cs=0x934;eip=0x0015d4; 	X(PUSH(bp));	// 17354 push    bp ;~ 0934:15D4
cs=0x934;eip=0x0015d5; 	T(MOV(bp, sp));	// 17355 mov     bp, sp ;~ 0934:15D5
cs=0x934;eip=0x0015d7; 	T(SUB(sp, 4));	// 17356 sub     sp, 4 ;~ 0934:15D7
cs=0x934;eip=0x0015da; 	T(MOV(ax, word_38aa8));	// 17357 mov     ax, word_38AA8 ;~ 0934:15DA
cs=0x934;eip=0x0015dd; 	T(ADD(ax, word_38aaa));	// 17358 add     ax, word_38AAA ;~ 0934:15DD
cs=0x934;eip=0x0015e1; 	R(JNZ(loc_18f06));	// 17359 jnz     short loc_18F06 ;~ 0934:15E1
cs=0x934;eip=0x0015e3; 	R(JMP(loc_18fe0));	// 17360 jmp     loc_18FE0 ;~ 0934:15E3
loc_18f06:
	// 5275 
cs=0x934;eip=0x0015e6; 	T(MOV(al, byte_38a96));	// 17364 mov     al, byte_38A96 ;~ 0934:15E6
cs=0x934;eip=0x0015e9; 	T(CMP(byte_3a3ee, al));	// 17365 cmp     byte_3A3EE, al ;~ 0934:15E9
cs=0x934;eip=0x0015ed; 	R(JNZ(loc_18f12));	// 17366 jnz     short loc_18F12 ;~ 0934:15ED
cs=0x934;eip=0x0015ef; 	R(JMP(loc_18fe0));	// 17367 jmp     loc_18FE0 ;~ 0934:15EF
loc_18f12:
	// 5276 
cs=0x934;eip=0x0015f2; 	T(SUB(ax, ax));	// 17371 sub     ax, ax ;~ 0934:15F2
cs=0x934;eip=0x0015f4; 	X(MOV(word_2beda, ax));	// 17372 mov     word_2BEDA, ax ;~ 0934:15F4
cs=0x934;eip=0x0015f7; 	X(PUSH(ax));	// 17373 push    ax ;~ 0934:15F7
cs=0x934;eip=0x0015f8; 	R(CALLF(sub_2714e,0));	// 17374 call    far ptr sub_2714E ;~ 0934:15F8
cs=0x934;eip=0x0015fd; 	T(ADD(sp, 2));	// 17375 add     sp, 2 ;~ 0934:15FD
cs=0x934;eip=0x001600; 	T(SUB(ax, ax));	// 17376 sub     ax, ax ;~ 0934:1600
cs=0x934;eip=0x001602; 	X(PUSH(ax));	// 17377 push    ax ;~ 0934:1602
cs=0x934;eip=0x001603; 	T(MOV(ax, 1));	// 17378 mov     ax, 1 ;~ 0934:1603
cs=0x934;eip=0x001606; 	X(PUSH(ax));	// 17379 push    ax ;~ 0934:1606
cs=0x934;eip=0x001607; 	X(PUSH(word_38abe));	// 17380 push    word_38ABE ;~ 0934:1607
cs=0x934;eip=0x00160b; 	X(PUSH(word_38abc));	// 17381 push    word_38ABC ;~ 0934:160B
cs=0x934;eip=0x00160f; 	T(MOV(ax, 0x88));	// 17382 mov     ax, 88h ; 'à' ;~ 0934:160F
cs=0x934;eip=0x001612; 	X(PUSH(ax));	// 17383 push    ax ;~ 0934:1612
cs=0x934;eip=0x001613; 	T(MOV(ax, 0x68));	// 17384 mov     ax, 68h ; 'h' ;~ 0934:1613
cs=0x934;eip=0x001616; 	X(PUSH(ax));	// 17385 push    ax ;~ 0934:1616
cs=0x934;eip=0x001617; 	T(MOV(ax, 0x0CF));	// 17386 mov     ax, 0CFh ; 'œ' ;~ 0934:1617
cs=0x934;eip=0x00161a; 	X(PUSH(ax));	// 17387 push    ax ;~ 0934:161A
cs=0x934;eip=0x00161b; 	T(MOV(ax, 0x0A8));	// 17388 mov     ax, 0A8h ; '®' ;~ 0934:161B
cs=0x934;eip=0x00161e; 	X(PUSH(ax));	// 17389 push    ax ;~ 0934:161E
cs=0x934;eip=0x00161f; 	R(CALLF(sub_28183,0));	// 17390 call    far ptr sub_28183 ;~ 0934:161F
cs=0x934;eip=0x001624; 	T(ADD(sp, 0x10));	// 17391 add     sp, 10h ;~ 0934:1624
cs=0x934;eip=0x001627; 	T(SUB(ax, ax));	// 17392 sub     ax, ax ;~ 0934:1627
cs=0x934;eip=0x001629; 	X(PUSH(ax));	// 17393 push    ax ;~ 0934:1629
cs=0x934;eip=0x00162a; 	T(MOV(ax, 1));	// 17394 mov     ax, 1 ;~ 0934:162A
cs=0x934;eip=0x00162d; 	X(PUSH(ax));	// 17395 push    ax ;~ 0934:162D
cs=0x934;eip=0x00162e; 	X(PUSH(word_38abe));	// 17396 push    word_38ABE ;~ 0934:162E
cs=0x934;eip=0x001632; 	T(MOV(ax, word_38abc));	// 17397 mov     ax, word_38ABC ;~ 0934:1632
cs=0x934;eip=0x001635; 	T(ADD(ax, 0x28));	// 17398 add     ax, 28h ; '(' ;~ 0934:1635
cs=0x934;eip=0x001638; 	X(PUSH(ax));	// 17399 push    ax ;~ 0934:1638
cs=0x934;eip=0x001639; 	T(MOV(ax, 0x0A9));	// 17400 mov     ax, 0A9h ; '©' ;~ 0934:1639
cs=0x934;eip=0x00163c; 	X(PUSH(ax));	// 17401 push    ax ;~ 0934:163C
cs=0x934;eip=0x00163d; 	T(MOV(ax, 0x89));	// 17402 mov     ax, 89h ; 'â' ;~ 0934:163D
cs=0x934;eip=0x001640; 	X(PUSH(ax));	// 17403 push    ax ;~ 0934:1640
cs=0x934;eip=0x001641; 	T(MOV(ax, word_38ac4));	// 17404 mov     ax, word_38AC4 ;~ 0934:1641
cs=0x934;eip=0x001644; 	T(ADD(ax, 0x7F));	// 17405 add     ax, 7Fh ;~ 0934:1644
cs=0x934;eip=0x001647; 	X(PUSH(ax));	// 17406 push    ax ;~ 0934:1647
cs=0x934;eip=0x001648; 	T(MOV(ax, 0x0A8));	// 17407 mov     ax, 0A8h ; '®' ;~ 0934:1648
cs=0x934;eip=0x00164b; 	X(PUSH(ax));	// 17408 push    ax ;~ 0934:164B
cs=0x934;eip=0x00164c; 	R(CALLF(sub_28183,0));	// 17409 call    far ptr sub_28183 ;~ 0934:164C
cs=0x934;eip=0x001651; 	T(ADD(sp, 0x10));	// 17410 add     sp, 10h ;~ 0934:1651
cs=0x934;eip=0x001654; 	T(MOV(al, byte_38cf4));	// 17411 mov     al, byte_38CF4 ;~ 0934:1654
cs=0x934;eip=0x001657; 	T(SUB(ah, ah));	// 17412 sub     ah, ah ;~ 0934:1657
cs=0x934;eip=0x001659; 	X(PUSH(ax));	// 17413 push    ax ;~ 0934:1659
cs=0x934;eip=0x00165a; 	R(CALLF(sub_27031,0));	// 17414 call    far ptr sub_27031 ;~ 0934:165A
cs=0x934;eip=0x00165f; 	T(ADD(sp, 2));	// 17415 add     sp, 2 ;~ 0934:165F
cs=0x934;eip=0x001662; 	X(PUSH(word_38aaa));	// 17416 push    word_38AAA ;~ 0934:1662
cs=0x934;eip=0x001666; 	X(PUSH(word_38aa8));	// 17417 push    word_38AA8 ;~ 0934:1666
cs=0x934;eip=0x00166a; 	R(CALLF(sub_26fb8,0));	// 17418 call    sub_26FB8 ;~ 0934:166A
cs=0x934;eip=0x00166f; 	T(ADD(sp, 4));	// 17419 add     sp, 4 ;~ 0934:166F
cs=0x934;eip=0x001672; 	X(PUSH(word_38aa4));	// 17420 push    word_38AA4 ;~ 0934:1672
cs=0x934;eip=0x001676; 	T(MOV(al, byte_3a3ee));	// 17421 mov     al, byte_3A3EE ;~ 0934:1676
cs=0x934;eip=0x001679; 	T(SUB(ah, ah));	// 17422 sub     ah, ah ;~ 0934:1679
cs=0x934;eip=0x00167b; 	T(MOV(cx, ax));	// 17423 mov     cx, ax ;~ 0934:167B
cs=0x934;eip=0x00167d; 	T(MOV(ax, word_38aa6));	// 17424 mov     ax, word_38AA6 ;~ 0934:167D
cs=0x934;eip=0x001680; 	T(MUL1_2(cx));	// 17425 mul     cx ;~ 0934:1680
cs=0x934;eip=0x001682; 	T(MOV(cx, ax));	// 17426 mov     cx, ax ;~ 0934:1682
cs=0x934;eip=0x001684; 	T(MOV(ax, 0x500));	// 17427 mov     ax, 500h ;~ 0934:1684
cs=0x934;eip=0x001687; 	X(IMUL1_2(word_38aca));	// 17428 imul    word_38ACA ;~ 0934:1687
cs=0x934;eip=0x00168b; 	T(SUB(cx, ax));	// 17429 sub     cx, ax ;~ 0934:168B
cs=0x934;eip=0x00168d; 	X(PUSH(cx));	// 17430 push    cx ;~ 0934:168D
cs=0x934;eip=0x00168e; 	R(CALLF(sub_2046b,0));	// 17431 call    sub_2046B ;~ 0934:168E
cs=0x934;eip=0x001693; 	T(ADD(sp, 4));	// 17432 add     sp, 4 ;~ 0934:1693
cs=0x934;eip=0x001696; 	T(MOV(ax, word_38aa8));	// 17433 mov     ax, word_38AA8 ;~ 0934:1696
cs=0x934;eip=0x001699; 	T(ADD(ax, word_352a0));	// 17434 add     ax, word_352A0 ;~ 0934:1699
cs=0x934;eip=0x00169d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 17435 mov     [bp+var_2], ax ;~ 0934:169D
cs=0x934;eip=0x0016a0; 	T(MOV(ax, word_38aaa));	// 17436 mov     ax, word_38AAA ;~ 0934:16A0
cs=0x934;eip=0x0016a3; 	T(SUB(ax, word_352a2));	// 17437 sub     ax, word_352A2 ;~ 0934:16A3
cs=0x934;eip=0x0016a7; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 17438 mov     [bp+var_4], ax ;~ 0934:16A7
cs=0x934;eip=0x0016aa; 	X(PUSH(ax));	// 17439 push    ax ;~ 0934:16AA
cs=0x934;eip=0x0016ab; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 17440 push    [bp+var_2] ;~ 0934:16AB
cs=0x934;eip=0x0016ae; 	R(CALLF(sub_26d92,0));	// 17441 call    sub_26D92 ;~ 0934:16AE
cs=0x934;eip=0x0016b3; 	T(ADD(sp, 4));	// 17442 add     sp, 4 ;~ 0934:16B3
cs=0x934;eip=0x0016b6; 	T(MOV(al, byte_3a3ee));	// 17443 mov     al, byte_3A3EE ;~ 0934:16B6
cs=0x934;eip=0x0016b9; 	X(MOV(byte_38a96, al));	// 17444 mov     byte_38A96, al ;~ 0934:16B9
cs=0x934;eip=0x0016bc; 	X(PUSH(cs));	// 17445 push    cs ;~ 0934:16BC
cs=0x934;eip=0x0016bd; 	R(CALL(sub_18e7e,0));	// 17446 call    near ptr sub_18E7E ;~ 0934:16BD
loc_18fe0:
	// 5277 
cs=0x934;eip=0x0016c0; 	T(MOV(sp, bp));	// 17450 mov     sp, bp ;~ 0934:16C0
cs=0x934;eip=0x0016c2; 	X(POP(bp));	// 17451 pop     bp ;~ 0934:16C2
cs=0x934;eip=0x0016c3; 	R(RETF(0));	// 17452 retf ;~ 0934:16C3
sub_18fe4:
	// 17460 
#undef var_c
#define var_c -0x0C
	// 17463 var_C           = word ptr -0Ch ;~ 0934:16C4
#undef var_a
#define var_a -0x0A
	// 17464 var_A           = word ptr -0Ah ;~ 0934:16C4
ret_934_16c4:
	// 5278 
cs=0x934;eip=0x0016c4; 	X(PUSH(bp));	// 17466 push    bp ;~ 0934:16C4
cs=0x934;eip=0x0016c5; 	T(MOV(bp, sp));	// 17467 mov     bp, sp ;~ 0934:16C5
cs=0x934;eip=0x0016c7; 	T(SUB(sp, 0x0C));	// 17468 sub     sp, 0Ch ;~ 0934:16C7
cs=0x934;eip=0x0016ca; 	T(MOV(ax, word_38ab0));	// 17469 mov     ax, word_38AB0 ;~ 0934:16CA
cs=0x934;eip=0x0016cd; 	T(ADD(ax, word_38ab2));	// 17470 add     ax, word_38AB2 ;~ 0934:16CD
cs=0x934;eip=0x0016d1; 	R(JNZ(loc_18ff6));	// 17471 jnz     short loc_18FF6 ;~ 0934:16D1
cs=0x934;eip=0x0016d3; 	R(JMP(loc_191f5));	// 17472 jmp     loc_191F5 ;~ 0934:16D3
loc_18ff6:
	// 5279 
cs=0x934;eip=0x0016d6; 	T(MOV(al, byte_38cdd));	// 17476 mov     al, byte_38CDD ;~ 0934:16D6
cs=0x934;eip=0x0016d9; 	T(CMP(byte_38ce8, al));	// 17477 cmp     byte_38CE8, al ;~ 0934:16D9
cs=0x934;eip=0x0016dd; 	R(JNZ(loc_19002));	// 17478 jnz     short loc_19002 ;~ 0934:16DD
cs=0x934;eip=0x0016df; 	R(JMP(loc_191b4));	// 17479 jmp     loc_191B4 ;~ 0934:16DF
loc_19002:
	// 5280 
cs=0x934;eip=0x0016e2; 	T(SUB(al, al));	// 17483 sub     al, al ;~ 0934:16E2
cs=0x934;eip=0x0016e4; 	X(MOV(byte_38a91, al));	// 17484 mov     byte_38A91, al ;~ 0934:16E4
cs=0x934;eip=0x0016e7; 	X(MOV(byte_38acc, al));	// 17485 mov     byte_38ACC, al ;~ 0934:16E7
cs=0x934;eip=0x0016ea; 	T(CMP(byte_38ce8, 0x36));	// 17486 cmp     byte_38CE8, 36h ; '6' ;~ 0934:16EA
cs=0x934;eip=0x0016ef; 	R(JBE(loc_1902d));	// 17487 jbe     short loc_1902D ;~ 0934:16EF
cs=0x934;eip=0x0016f1; 	T(MOV(al, byte_38ce8));	// 17488 mov     al, byte_38CE8 ;~ 0934:16F1
cs=0x934;eip=0x0016f4; 	T(SUB(al, 0x36));	// 17489 sub     al, 36h ; '6' ;~ 0934:16F4
cs=0x934;eip=0x0016f6; 	X(MOV(byte_38acc, al));	// 17490 mov     byte_38ACC, al ;~ 0934:16F6
cs=0x934;eip=0x0016f9; 	T(MOV(al, byte_3a39e));	// 17491 mov     al, byte_3A39E ;~ 0934:16F9
cs=0x934;eip=0x0016fc; 	T(SUB(ah, ah));	// 17492 sub     ah, ah ;~ 0934:16FC
cs=0x934;eip=0x0016fe; 	T(MOV(cl, 0x0A));	// 17493 mov     cl, 0Ah ;~ 0934:16FE
cs=0x934;eip=0x001700; 	T(DIV1(cl));	// 17494 div     cl ;~ 0934:1700
cs=0x934;eip=0x001702; 	T(CMP(ah, 9));	// 17495 cmp     ah, 9 ;~ 0934:1702
cs=0x934;eip=0x001705; 	R(JNZ(loc_1902d));	// 17496 jnz     short loc_1902D ;~ 0934:1705
cs=0x934;eip=0x001707; 	T(MOV(al, byte_38acc));	// 17497 mov     al, byte_38ACC ;~ 0934:1707
cs=0x934;eip=0x00170a; 	X(MOV(byte_38a91, al));	// 17498 mov     byte_38A91, al ;~ 0934:170A
loc_1902d:
	// 5281 
cs=0x934;eip=0x00170d; 	T(MOV(ax, word_38ab8));	// 17502 mov     ax, word_38AB8 ;~ 0934:170D
cs=0x934;eip=0x001710; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 17503 mov     [bp+var_A], ax ;~ 0934:1710
cs=0x934;eip=0x001713; 	T(MOV(ax, word_38aba));	// 17504 mov     ax, word_38ABA ;~ 0934:1713
cs=0x934;eip=0x001716; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 17505 mov     [bp+var_C], ax ;~ 0934:1716
cs=0x934;eip=0x001719; 	T(OR(ax, ax));	// 17506 or      ax, ax ;~ 0934:1719
cs=0x934;eip=0x00171b; 	R(JNZ(loc_19040));	// 17507 jnz     short loc_19040 ;~ 0934:171B
cs=0x934;eip=0x00171d; 	R(JMP(loc_191ae));	// 17508 jmp     loc_191AE ;~ 0934:171D
loc_19040:
	// 5282 
cs=0x934;eip=0x001720; 	T(MOV(ax, 1));	// 17512 mov     ax, 1 ;~ 0934:1720
cs=0x934;eip=0x001723; 	X(MOV(word_2beda, ax));	// 17513 mov     word_2BEDA, ax ;~ 0934:1723
cs=0x934;eip=0x001726; 	X(PUSH(ax));	// 17514 push    ax ;~ 0934:1726
cs=0x934;eip=0x001727; 	R(CALLF(sub_2714e,0));	// 17515 call    far ptr sub_2714E ;~ 0934:1727
cs=0x934;eip=0x00172c; 	T(ADD(sp, 2));	// 17516 add     sp, 2 ;~ 0934:172C
cs=0x934;eip=0x00172f; 	T(MOV(al, byte_38cf3));	// 17517 mov     al, byte_38CF3 ;~ 0934:172F
cs=0x934;eip=0x001732; 	T(SUB(ah, ah));	// 17518 sub     ah, ah ;~ 0934:1732
cs=0x934;eip=0x001734; 	X(PUSH(ax));	// 17519 push    ax ;~ 0934:1734
cs=0x934;eip=0x001735; 	R(CALLF(sub_27031,0));	// 17520 call    far ptr sub_27031 ;~ 0934:1735
cs=0x934;eip=0x00173a; 	T(ADD(sp, 2));	// 17521 add     sp, 2 ;~ 0934:173A
cs=0x934;eip=0x00173d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 17522 push    [bp+var_C] ;~ 0934:173D
cs=0x934;eip=0x001740; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 17523 mov     ax, [bp+var_C] ;~ 0934:1740
cs=0x934;eip=0x001743; 	T(SUB(ax, 4));	// 17524 sub     ax, 4 ;~ 0934:1743
cs=0x934;eip=0x001746; 	X(PUSH(ax));	// 17525 push    ax ;~ 0934:1746
cs=0x934;eip=0x001747; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 17526 mov     ax, [bp+var_A] ;~ 0934:1747
cs=0x934;eip=0x00174a; 	T(ADD(ax, 7));	// 17527 add     ax, 7 ;~ 0934:174A
cs=0x934;eip=0x00174d; 	X(PUSH(ax));	// 17528 push    ax ;~ 0934:174D
cs=0x934;eip=0x00174e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 17529 push    [bp+var_A] ;~ 0934:174E
cs=0x934;eip=0x001751; 	R(CALLF(sub_2785b,0));	// 17530 call    far ptr sub_2785B ;~ 0934:1751
cs=0x934;eip=0x001756; 	T(ADD(sp, 8));	// 17531 add     sp, 8 ;~ 0934:1756
cs=0x934;eip=0x001759; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 17532 push    [bp+var_C] ;~ 0934:1759
cs=0x934;eip=0x00175c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 17533 mov     ax, [bp+var_C] ;~ 0934:175C
cs=0x934;eip=0x00175f; 	T(SUB(ax, 4));	// 17534 sub     ax, 4 ;~ 0934:175F
cs=0x934;eip=0x001762; 	X(PUSH(ax));	// 17535 push    ax ;~ 0934:1762
cs=0x934;eip=0x001763; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 17536 mov     ax, [bp+var_A] ;~ 0934:1763
cs=0x934;eip=0x001766; 	T(ADD(ax, 0x0D));	// 17537 add     ax, 0Dh ;~ 0934:1766
cs=0x934;eip=0x001769; 	X(PUSH(ax));	// 17538 push    ax ;~ 0934:1769
cs=0x934;eip=0x00176a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 17539 mov     ax, [bp+var_A] ;~ 0934:176A
cs=0x934;eip=0x00176d; 	T(ADD(ax, 0x0A));	// 17540 add     ax, 0Ah ;~ 0934:176D
cs=0x934;eip=0x001770; 	X(PUSH(ax));	// 17541 push    ax ;~ 0934:1770
cs=0x934;eip=0x001771; 	R(CALLF(sub_2785b,0));	// 17542 call    far ptr sub_2785B ;~ 0934:1771
cs=0x934;eip=0x001776; 	T(ADD(sp, 8));	// 17543 add     sp, 8 ;~ 0934:1776
cs=0x934;eip=0x001779; 	T(MOV(al, byte_38cf2));	// 17544 mov     al, byte_38CF2 ;~ 0934:1779
cs=0x934;eip=0x00177c; 	T(SUB(ah, ah));	// 17545 sub     ah, ah ;~ 0934:177C
cs=0x934;eip=0x00177e; 	X(PUSH(ax));	// 17546 push    ax ;~ 0934:177E
cs=0x934;eip=0x00177f; 	R(CALLF(sub_27031,0));	// 17547 call    far ptr sub_27031 ;~ 0934:177F
cs=0x934;eip=0x001784; 	T(ADD(sp, 2));	// 17548 add     sp, 2 ;~ 0934:1784
cs=0x934;eip=0x001787; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 17549 push    [bp+var_C] ;~ 0934:1787
cs=0x934;eip=0x00178a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 17550 push    [bp+var_A] ;~ 0934:178A
cs=0x934;eip=0x00178d; 	R(CALLF(sub_26fb8,0));	// 17551 call    sub_26FB8 ;~ 0934:178D
cs=0x934;eip=0x001792; 	T(ADD(sp, 4));	// 17552 add     sp, 4 ;~ 0934:1792
cs=0x934;eip=0x001795; 	T(MOV(ax, 5));	// 17553 mov     ax, 5 ;~ 0934:1795
cs=0x934;eip=0x001798; 	X(PUSH(ax));	// 17554 push    ax ;~ 0934:1798
cs=0x934;eip=0x001799; 	T(MOV(ax, 1));	// 17555 mov     ax, 1 ;~ 0934:1799
cs=0x934;eip=0x00179c; 	X(PUSH(ax));	// 17556 push    ax ;~ 0934:179C
cs=0x934;eip=0x00179d; 	T(MOV(al, byte_3a39e));	// 17557 mov     al, byte_3A39E ;~ 0934:179D
cs=0x934;eip=0x0017a0; 	T(SUB(ah, ah));	// 17558 sub     ah, ah ;~ 0934:17A0
cs=0x934;eip=0x0017a2; 	T(MOV(cl, 0x0A));	// 17559 mov     cl, 0Ah ;~ 0934:17A2
cs=0x934;eip=0x0017a4; 	T(DIV1(cl));	// 17560 div     cl ;~ 0934:17A4
cs=0x934;eip=0x0017a6; 	T(SUB(ah, ah));	// 17561 sub     ah, ah ;~ 0934:17A6
cs=0x934;eip=0x0017a8; 	T(MOV(cx, ax));	// 17562 mov     cx, ax ;~ 0934:17A8
cs=0x934;eip=0x0017aa; 	T(SHL(ax, 1));	// 17563 shl     ax, 1 ;~ 0934:17AA
cs=0x934;eip=0x0017ac; 	T(ADD(ax, cx));	// 17564 add     ax, cx ;~ 0934:17AC
cs=0x934;eip=0x0017ae; 	T(SHL(ax, 1));	// 17565 shl     ax, 1 ;~ 0934:17AE
cs=0x934;eip=0x0017b0; 	T(MOV(cl, byte_38a91));	// 17566 mov     cl, byte_38A91 ;~ 0934:17B0
cs=0x934;eip=0x0017b4; 	T(SUB(ch, ch));	// 17567 sub     ch, ch ;~ 0934:17B4
cs=0x934;eip=0x0017b6; 	T(ADD(ax, cx));	// 17568 add     ax, cx ;~ 0934:17B6
cs=0x934;eip=0x0017b8; 	T(ADD(ax, 0x0B719));	// 17569 add     ax, 0B719h ;~ 0934:17B8
cs=0x934;eip=0x0017bb; 	X(PUSH(ax));	// 17570 push    ax ;~ 0934:17BB
cs=0x934;eip=0x0017bc; 	R(CALLF(sub_285fb,0));	// 17571 call    far ptr sub_285FB ;~ 0934:17BC
cs=0x934;eip=0x0017c1; 	T(ADD(sp, 6));	// 17572 add     sp, 6 ;~ 0934:17C1
cs=0x934;eip=0x0017c4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 17573 push    [bp+var_C] ;~ 0934:17C4
cs=0x934;eip=0x0017c7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 17574 mov     ax, [bp+var_A] ;~ 0934:17C7
cs=0x934;eip=0x0017ca; 	T(ADD(ax, 4));	// 17575 add     ax, 4 ;~ 0934:17CA
cs=0x934;eip=0x0017cd; 	X(PUSH(ax));	// 17576 push    ax ;~ 0934:17CD
cs=0x934;eip=0x0017ce; 	R(CALLF(sub_26fb8,0));	// 17577 call    sub_26FB8 ;~ 0934:17CE
cs=0x934;eip=0x0017d3; 	T(ADD(sp, 4));	// 17578 add     sp, 4 ;~ 0934:17D3
cs=0x934;eip=0x0017d6; 	T(MOV(ax, 5));	// 17579 mov     ax, 5 ;~ 0934:17D6
cs=0x934;eip=0x0017d9; 	X(PUSH(ax));	// 17580 push    ax ;~ 0934:17D9
cs=0x934;eip=0x0017da; 	T(MOV(ax, 1));	// 17581 mov     ax, 1 ;~ 0934:17DA
cs=0x934;eip=0x0017dd; 	X(PUSH(ax));	// 17582 push    ax ;~ 0934:17DD
cs=0x934;eip=0x0017de; 	T(MOV(al, byte_3a39e));	// 17583 mov     al, byte_3A39E ;~ 0934:17DE
cs=0x934;eip=0x0017e1; 	T(SUB(ah, ah));	// 17584 sub     ah, ah ;~ 0934:17E1
cs=0x934;eip=0x0017e3; 	T(MOV(cl, 0x0A));	// 17585 mov     cl, 0Ah ;~ 0934:17E3
cs=0x934;eip=0x0017e5; 	T(DIV1(cl));	// 17586 div     cl ;~ 0934:17E5
cs=0x934;eip=0x0017e7; 	T(MOV(al, ah));	// 17587 mov     al, ah ;~ 0934:17E7
cs=0x934;eip=0x0017e9; 	T(SUB(ah, ah));	// 17588 sub     ah, ah ;~ 0934:17E9
cs=0x934;eip=0x0017eb; 	T(MOV(cx, ax));	// 17589 mov     cx, ax ;~ 0934:17EB
cs=0x934;eip=0x0017ed; 	T(SHL(ax, 1));	// 17590 shl     ax, 1 ;~ 0934:17ED
cs=0x934;eip=0x0017ef; 	T(ADD(ax, cx));	// 17591 add     ax, cx ;~ 0934:17EF
cs=0x934;eip=0x0017f1; 	T(SHL(ax, 1));	// 17592 shl     ax, 1 ;~ 0934:17F1
cs=0x934;eip=0x0017f3; 	T(MOV(cl, byte_38acc));	// 17593 mov     cl, byte_38ACC ;~ 0934:17F3
cs=0x934;eip=0x0017f7; 	T(SUB(ch, ch));	// 17594 sub     ch, ch ;~ 0934:17F7
cs=0x934;eip=0x0017f9; 	T(ADD(ax, cx));	// 17595 add     ax, cx ;~ 0934:17F9
cs=0x934;eip=0x0017fb; 	T(ADD(ax, 0x0B719));	// 17596 add     ax, 0B719h ;~ 0934:17FB
cs=0x934;eip=0x0017fe; 	X(PUSH(ax));	// 17597 push    ax ;~ 0934:17FE
cs=0x934;eip=0x0017ff; 	R(CALLF(sub_285fb,0));	// 17598 call    far ptr sub_285FB ;~ 0934:17FF
cs=0x934;eip=0x001804; 	T(ADD(sp, 6));	// 17599 add     sp, 6 ;~ 0934:1804
cs=0x934;eip=0x001807; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 17600 push    [bp+var_C] ;~ 0934:1807
cs=0x934;eip=0x00180a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 17601 mov     ax, [bp+var_A] ;~ 0934:180A
cs=0x934;eip=0x00180d; 	T(ADD(ax, 0x0A));	// 17602 add     ax, 0Ah ;~ 0934:180D
cs=0x934;eip=0x001810; 	X(PUSH(ax));	// 17603 push    ax ;~ 0934:1810
cs=0x934;eip=0x001811; 	R(CALLF(sub_26fb8,0));	// 17604 call    sub_26FB8 ;~ 0934:1811
cs=0x934;eip=0x001816; 	T(ADD(sp, 4));	// 17605 add     sp, 4 ;~ 0934:1816
cs=0x934;eip=0x001819; 	T(MOV(ax, 5));	// 17606 mov     ax, 5 ;~ 0934:1819
cs=0x934;eip=0x00181c; 	X(PUSH(ax));	// 17607 push    ax ;~ 0934:181C
cs=0x934;eip=0x00181d; 	T(MOV(ax, 1));	// 17608 mov     ax, 1 ;~ 0934:181D
cs=0x934;eip=0x001820; 	X(PUSH(ax));	// 17609 push    ax ;~ 0934:1820
cs=0x934;eip=0x001821; 	T(MOV(al, byte_38ce8));	// 17610 mov     al, byte_38CE8 ;~ 0934:1821
cs=0x934;eip=0x001824; 	T(SUB(ah, ah));	// 17611 sub     ah, ah ;~ 0934:1824
cs=0x934;eip=0x001826; 	T(ADD(ax, 0x0B719));	// 17612 add     ax, 0B719h ;~ 0934:1826
cs=0x934;eip=0x001829; 	X(PUSH(ax));	// 17613 push    ax ;~ 0934:1829
cs=0x934;eip=0x00182a; 	R(CALLF(sub_285fb,0));	// 17614 call    far ptr sub_285FB ;~ 0934:182A
cs=0x934;eip=0x00182f; 	T(ADD(sp, 6));	// 17615 add     sp, 6 ;~ 0934:182F
cs=0x934;eip=0x001832; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 17616 push    [bp+var_C] ;~ 0934:1832
cs=0x934;eip=0x001835; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 17617 mov     ax, [bp+var_A] ;~ 0934:1835
cs=0x934;eip=0x001838; 	T(ADD(ax, 8));	// 17618 add     ax, 8 ;~ 0934:1838
cs=0x934;eip=0x00183b; 	X(PUSH(ax));	// 17619 push    ax ;~ 0934:183B
cs=0x934;eip=0x00183c; 	R(CALLF(sub_273c5,0));	// 17620 call    sub_273C5 ;~ 0934:183C
cs=0x934;eip=0x001841; 	T(ADD(sp, 4));	// 17621 add     sp, 4 ;~ 0934:1841
cs=0x934;eip=0x001844; 	T(MOV(al, byte_3a6a0));	// 17622 mov     al, byte_3A6A0 ;~ 0934:1844
cs=0x934;eip=0x001847; 	T(CMP(byte_3a39f, al));	// 17623 cmp     byte_3A39F, al ;~ 0934:1847
cs=0x934;eip=0x00184b; 	R(JNZ(loc_191ae));	// 17624 jnz     short loc_191AE ;~ 0934:184B
cs=0x934;eip=0x00184d; 	T(SUB(ax, ax));	// 17625 sub     ax, ax ;~ 0934:184D
cs=0x934;eip=0x00184f; 	X(PUSH(ax));	// 17626 push    ax ;~ 0934:184F
cs=0x934;eip=0x001850; 	T(MOV(ax, 1));	// 17627 mov     ax, 1 ;~ 0934:1850
cs=0x934;eip=0x001853; 	X(PUSH(ax));	// 17628 push    ax ;~ 0934:1853
cs=0x934;eip=0x001854; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 17629 mov     ax, [bp+var_C] ;~ 0934:1854
cs=0x934;eip=0x001857; 	T(ADD(ax, word_38ac2));	// 17630 add     ax, word_38AC2 ;~ 0934:1857
cs=0x934;eip=0x00185b; 	T(SUB(ax, 0x0C7));	// 17631 sub     ax, 0C7h ; '«' ;~ 0934:185B
cs=0x934;eip=0x00185e; 	X(PUSH(ax));	// 17632 push    ax ;~ 0934:185E
cs=0x934;eip=0x00185f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 17633 mov     ax, [bp+var_A] ;~ 0934:185F
cs=0x934;eip=0x001862; 	T(ADD(ax, word_38ac0));	// 17634 add     ax, word_38AC0 ;~ 0934:1862
cs=0x934;eip=0x001866; 	T(SUB(ax, 0x108));	// 17635 sub     ax, 108h ;~ 0934:1866
cs=0x934;eip=0x001869; 	X(PUSH(ax));	// 17636 push    ax ;~ 0934:1869
cs=0x934;eip=0x00186a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 17637 push    [bp+var_C] ;~ 0934:186A
cs=0x934;eip=0x00186d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 17638 mov     ax, [bp+var_C] ;~ 0934:186D
cs=0x934;eip=0x001870; 	T(SUB(ax, 4));	// 17639 sub     ax, 4 ;~ 0934:1870
cs=0x934;eip=0x001873; 	X(PUSH(ax));	// 17640 push    ax ;~ 0934:1873
cs=0x934;eip=0x001874; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 17641 mov     ax, [bp+var_A] ;~ 0934:1874
cs=0x934;eip=0x001877; 	T(ADD(ax, 0x0D));	// 17642 add     ax, 0Dh ;~ 0934:1877
cs=0x934;eip=0x00187a; 	X(PUSH(ax));	// 17643 push    ax ;~ 0934:187A
cs=0x934;eip=0x00187b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 17644 push    [bp+var_A] ;~ 0934:187B
cs=0x934;eip=0x00187e; 	R(CALLF(sub_28183,0));	// 17645 call    far ptr sub_28183 ;~ 0934:187E
cs=0x934;eip=0x001883; 	T(ADD(sp, 0x10));	// 17646 add     sp, 10h ;~ 0934:1883
cs=0x934;eip=0x001886; 	X(PUSH(cs));	// 17647 push    cs ;~ 0934:1886
cs=0x934;eip=0x001887; 	R(CALL(sub_191fa,0));	// 17648 call    near ptr sub_191FA ;~ 0934:1887
cs=0x934;eip=0x00188a; 	X(PUSH(cs));	// 17649 push    cs ;~ 0934:188A
cs=0x934;eip=0x00188b; 	R(CALL(sub_18e7e,0));	// 17650 call    near ptr sub_18E7E ;~ 0934:188B
loc_191ae:
	// 5283 
cs=0x934;eip=0x00188e; 	T(MOV(al, byte_38ce8));	// 17654 mov     al, byte_38CE8 ;~ 0934:188E
cs=0x934;eip=0x001891; 	X(MOV(byte_38cdd, al));	// 17655 mov     byte_38CDD, al ;~ 0934:1891
loc_191b4:
	// 5284 
cs=0x934;eip=0x001894; 	T(MOV(al, byte_3a6a0));	// 17658 mov     al, byte_3A6A0 ;~ 0934:1894
cs=0x934;eip=0x001897; 	T(CMP(byte_3a39f, al));	// 17659 cmp     byte_3A39F, al ;~ 0934:1897
cs=0x934;eip=0x00189b; 	R(JZ(loc_191f5));	// 17660 jz      short loc_191F5 ;~ 0934:189B
cs=0x934;eip=0x00189d; 	T(SUB(ax, ax));	// 17661 sub     ax, ax ;~ 0934:189D
cs=0x934;eip=0x00189f; 	X(PUSH(ax));	// 17662 push    ax ;~ 0934:189F
cs=0x934;eip=0x0018a0; 	T(MOV(ax, 1));	// 17663 mov     ax, 1 ;~ 0934:18A0
cs=0x934;eip=0x0018a3; 	X(PUSH(ax));	// 17664 push    ax ;~ 0934:18A3
cs=0x934;eip=0x0018a4; 	X(PUSH(word_38ac2));	// 17665 push    word_38AC2 ;~ 0934:18A4
cs=0x934;eip=0x0018a8; 	X(PUSH(word_38ac0));	// 17666 push    word_38AC0 ;~ 0934:18A8
cs=0x934;eip=0x0018ac; 	T(MOV(ax, 0x0C7));	// 17667 mov     ax, 0C7h ; '«' ;~ 0934:18AC
cs=0x934;eip=0x0018af; 	X(PUSH(ax));	// 17668 push    ax ;~ 0934:18AF
cs=0x934;eip=0x0018b0; 	T(MOV(ax, 0x0A7));	// 17669 mov     ax, 0A7h ; 'ß' ;~ 0934:18B0
cs=0x934;eip=0x0018b3; 	X(PUSH(ax));	// 17670 push    ax ;~ 0934:18B3
cs=0x934;eip=0x0018b4; 	T(MOV(ax, word_38ac6));	// 17671 mov     ax, word_38AC6 ;~ 0934:18B4
cs=0x934;eip=0x0018b7; 	T(ADD(ax, 0x107));	// 17672 add     ax, 107h ;~ 0934:18B7
cs=0x934;eip=0x0018ba; 	X(PUSH(ax));	// 17673 push    ax ;~ 0934:18BA
cs=0x934;eip=0x0018bb; 	T(MOV(ax, 0x108));	// 17674 mov     ax, 108h ;~ 0934:18BB
cs=0x934;eip=0x0018be; 	X(PUSH(ax));	// 17675 push    ax ;~ 0934:18BE
cs=0x934;eip=0x0018bf; 	R(CALLF(sub_28183,0));	// 17676 call    far ptr sub_28183 ;~ 0934:18BF
cs=0x934;eip=0x0018c4; 	T(ADD(sp, 0x10));	// 17677 add     sp, 10h ;~ 0934:18C4
cs=0x934;eip=0x0018c7; 	X(PUSH(cs));	// 17678 push    cs ;~ 0934:18C7
cs=0x934;eip=0x0018c8; 	R(CALL(sub_191fa,0));	// 17679 call    near ptr sub_191FA ;~ 0934:18C8
cs=0x934;eip=0x0018cb; 	X(PUSH(cs));	// 17680 push    cs ;~ 0934:18CB
cs=0x934;eip=0x0018cc; 	R(CALL(sub_18e7e,0));	// 17681 call    near ptr sub_18E7E ;~ 0934:18CC
cs=0x934;eip=0x0018cf; 	T(MOV(al, byte_3a39f));	// 17682 mov     al, byte_3A39F ;~ 0934:18CF
cs=0x934;eip=0x0018d2; 	X(MOV(byte_3a6a0, al));	// 17683 mov     byte_3A6A0, al ;~ 0934:18D2
loc_191f5:
	// 5285 
cs=0x934;eip=0x0018d5; 	T(MOV(sp, bp));	// 17687 mov     sp, bp ;~ 0934:18D5
cs=0x934;eip=0x0018d7; 	X(POP(bp));	// 17688 pop     bp ;~ 0934:18D7
cs=0x934;eip=0x0018d8; 	R(RETF(0));	// 17689 retf ;~ 0934:18D8
sub_191fa:
	// 17699 
#undef var_4
#define var_4 -4
	// 17702 var_4           = word ptr -4 ;~ 0934:18DA
#undef var_2
#define var_2 -2
	// 17703 var_2           = word ptr -2 ;~ 0934:18DA
ret_934_18da:
	// 5286 
cs=0x934;eip=0x0018da; 	X(PUSH(bp));	// 17705 push    bp ;~ 0934:18DA
cs=0x934;eip=0x0018db; 	T(MOV(bp, sp));	// 17706 mov     bp, sp ;~ 0934:18DB
cs=0x934;eip=0x0018dd; 	T(SUB(sp, 4));	// 17707 sub     sp, 4 ;~ 0934:18DD
cs=0x934;eip=0x0018e0; 	T(SUB(ax, ax));	// 17708 sub     ax, ax ;~ 0934:18E0
cs=0x934;eip=0x0018e2; 	X(MOV(word_2beda, ax));	// 17709 mov     word_2BEDA, ax ;~ 0934:18E2
cs=0x934;eip=0x0018e5; 	X(PUSH(ax));	// 17710 push    ax ;~ 0934:18E5
cs=0x934;eip=0x0018e6; 	R(CALLF(sub_2714e,0));	// 17711 call    far ptr sub_2714E ;~ 0934:18E6
cs=0x934;eip=0x0018eb; 	T(ADD(sp, 2));	// 17712 add     sp, 2 ;~ 0934:18EB
cs=0x934;eip=0x0018ee; 	T(MOV(al, byte_38cf5));	// 17713 mov     al, byte_38CF5 ;~ 0934:18EE
cs=0x934;eip=0x0018f1; 	T(SUB(ah, ah));	// 17714 sub     ah, ah ;~ 0934:18F1
cs=0x934;eip=0x0018f3; 	X(PUSH(ax));	// 17715 push    ax ;~ 0934:18F3
cs=0x934;eip=0x0018f4; 	R(CALLF(sub_27031,0));	// 17716 call    far ptr sub_27031 ;~ 0934:18F4
cs=0x934;eip=0x0018f9; 	T(ADD(sp, 2));	// 17717 add     sp, 2 ;~ 0934:18F9
cs=0x934;eip=0x0018fc; 	X(PUSH(word_38ab2));	// 17718 push    word_38AB2 ;~ 0934:18FC
cs=0x934;eip=0x001900; 	X(PUSH(word_38ab0));	// 17719 push    word_38AB0 ;~ 0934:1900
cs=0x934;eip=0x001904; 	R(CALLF(sub_26fb8,0));	// 17720 call    sub_26FB8 ;~ 0934:1904
cs=0x934;eip=0x001909; 	T(ADD(sp, 4));	// 17721 add     sp, 4 ;~ 0934:1909
cs=0x934;eip=0x00190c; 	X(PUSH(word_38aac));	// 17722 push    word_38AAC ;~ 0934:190C
cs=0x934;eip=0x001910; 	T(MOV(al, byte_3a39f));	// 17723 mov     al, byte_3A39F ;~ 0934:1910
cs=0x934;eip=0x001913; 	T(SUB(ah, ah));	// 17724 sub     ah, ah ;~ 0934:1913
cs=0x934;eip=0x001915; 	T(MOV(cx, ax));	// 17725 mov     cx, ax ;~ 0934:1915
cs=0x934;eip=0x001917; 	T(MOV(ax, word_38aae));	// 17726 mov     ax, word_38AAE ;~ 0934:1917
cs=0x934;eip=0x00191a; 	T(MUL1_2(cx));	// 17727 mul     cx ;~ 0934:191A
cs=0x934;eip=0x00191c; 	T(MOV(cx, ax));	// 17728 mov     cx, ax ;~ 0934:191C
cs=0x934;eip=0x00191e; 	T(MOV(ax, 0x500));	// 17729 mov     ax, 500h ;~ 0934:191E
cs=0x934;eip=0x001921; 	X(IMUL1_2(word_38ac8));	// 17730 imul    word_38AC8 ;~ 0934:1921
cs=0x934;eip=0x001925; 	T(SUB(cx, ax));	// 17731 sub     cx, ax ;~ 0934:1925
cs=0x934;eip=0x001927; 	X(PUSH(cx));	// 17732 push    cx ;~ 0934:1927
cs=0x934;eip=0x001928; 	R(CALLF(sub_2046b,0));	// 17733 call    sub_2046B ;~ 0934:1928
cs=0x934;eip=0x00192d; 	T(ADD(sp, 4));	// 17734 add     sp, 4 ;~ 0934:192D
cs=0x934;eip=0x001930; 	T(MOV(ax, word_38ab0));	// 17735 mov     ax, word_38AB0 ;~ 0934:1930
cs=0x934;eip=0x001933; 	T(ADD(ax, word_352a0));	// 17736 add     ax, word_352A0 ;~ 0934:1933
cs=0x934;eip=0x001937; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 17737 mov     [bp+var_2], ax ;~ 0934:1937
cs=0x934;eip=0x00193a; 	T(MOV(ax, word_38ab2));	// 17738 mov     ax, word_38AB2 ;~ 0934:193A
cs=0x934;eip=0x00193d; 	T(SUB(ax, word_352a2));	// 17739 sub     ax, word_352A2 ;~ 0934:193D
cs=0x934;eip=0x001941; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 17740 mov     [bp+var_4], ax ;~ 0934:1941
cs=0x934;eip=0x001944; 	X(PUSH(ax));	// 17741 push    ax ;~ 0934:1944
cs=0x934;eip=0x001945; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 17742 push    [bp+var_2] ;~ 0934:1945
cs=0x934;eip=0x001948; 	R(CALLF(sub_26d92,0));	// 17743 call    sub_26D92 ;~ 0934:1948
cs=0x934;eip=0x00194d; 	T(MOV(sp, bp));	// 17744 mov     sp, bp ;~ 0934:194D
cs=0x934;eip=0x00194f; 	X(POP(bp));	// 17745 pop     bp ;~ 0934:194F
cs=0x934;eip=0x001950; 	R(RETF(0));	// 17746 retf ;~ 0934:1950
sub_19272:
	// 17756 
#undef var_4
#define var_4 -4
	// 17758 var_4           = word ptr -4 ;~ 0934:1952
#undef var_2
#define var_2 -2
	// 17759 var_2           = word ptr -2 ;~ 0934:1952
ret_934_1952:
	// 5287 
cs=0x934;eip=0x001952; 	X(PUSH(bp));	// 17761 push    bp ;~ 0934:1952
cs=0x934;eip=0x001953; 	T(MOV(bp, sp));	// 17762 mov     bp, sp ;~ 0934:1953
cs=0x934;eip=0x001955; 	T(SUB(sp, 4));	// 17763 sub     sp, 4 ;~ 0934:1955
cs=0x934;eip=0x001958; 	T(MOV(ax, word_2d08e));	// 17764 mov     ax, word_2D08E ;~ 0934:1958
cs=0x934;eip=0x00195b; 	T(MOV(dx, word_2d090));	// 17765 mov     dx, word_2D090 ;~ 0934:195B
cs=0x934;eip=0x00195f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 17766 mov     [bp+var_4], ax ;~ 0934:195F
cs=0x934;eip=0x001962; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 17767 mov     [bp+var_2], dx ;~ 0934:1962
cs=0x934;eip=0x001965; 	T(OR(dx, dx));	// 17768 or      dx, dx ;~ 0934:1965
cs=0x934;eip=0x001967; 	R(JGE(loc_19296));	// 17769 jge     short loc_19296 ;~ 0934:1967
cs=0x934;eip=0x001969; 	T(NEG(ax));	// 17770 neg     ax ;~ 0934:1969
cs=0x934;eip=0x00196b; 	T(ADC(dx, 0));	// 17771 adc     dx, 0 ;~ 0934:196B
cs=0x934;eip=0x00196e; 	T(NEG(dx));	// 17772 neg     dx ;~ 0934:196E
cs=0x934;eip=0x001970; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 17773 mov     [bp+var_4], ax ;~ 0934:1970
cs=0x934;eip=0x001973; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 17774 mov     [bp+var_2], dx ;~ 0934:1973
loc_19296:
	// 5288 
cs=0x934;eip=0x001976; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 17777 mov     ax, [bp+var_4] ;~ 0934:1976
cs=0x934;eip=0x001979; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 17778 mov     dx, [bp+var_2] ;~ 0934:1979
cs=0x934;eip=0x00197c; 	X(ADD(word_2cfc6, ax));	// 17779 add     word_2CFC6, ax ;~ 0934:197C
cs=0x934;eip=0x001980; 	X(ADC(word_2cfc8, dx));	// 17780 adc     word_2CFC8, dx ;~ 0934:1980
loc_192a4:
	// 5289 
cs=0x934;eip=0x001984; 	T(MOV(ax, word_352f9));	// 17784 mov     ax, word_352F9 ;~ 0934:1984
cs=0x934;eip=0x001987; 	T(MOV(dx, word_352fb));	// 17785 mov     dx, word_352FB ;~ 0934:1987
cs=0x934;eip=0x00198b; 	T(CMP(word_2cfc8, dx));	// 17786 cmp     word_2CFC8, dx ;~ 0934:198B
cs=0x934;eip=0x00198f; 	R(JC(loc_192e6));	// 17787 jb      short loc_192E6 ;~ 0934:198F
cs=0x934;eip=0x001991; 	R(JA(loc_192b9));	// 17788 ja      short loc_192B9 ;~ 0934:1991
cs=0x934;eip=0x001993; 	T(CMP(word_2cfc6, ax));	// 17789 cmp     word_2CFC6, ax ;~ 0934:1993
cs=0x934;eip=0x001997; 	R(JC(loc_192e6));	// 17790 jb      short loc_192E6 ;~ 0934:1997
loc_192b9:
	// 5290 
cs=0x934;eip=0x001999; 	T(MOV(ax, word_352f9));	// 17793 mov     ax, word_352F9 ;~ 0934:1999
cs=0x934;eip=0x00199c; 	T(MOV(dx, word_352fb));	// 17794 mov     dx, word_352FB ;~ 0934:199C
cs=0x934;eip=0x0019a0; 	X(SUB(word_2cfc6, ax));	// 17795 sub     word_2CFC6, ax ;~ 0934:19A0
cs=0x934;eip=0x0019a4; 	X(SBB(word_2cfc8, dx));	// 17796 sbb     word_2CFC8, dx ;~ 0934:19A4
cs=0x934;eip=0x0019a8; 	T(MOV(al, byte_38ce8));	// 17797 mov     al, byte_38CE8 ;~ 0934:19A8
cs=0x934;eip=0x0019ab; 	X(INC(byte_38ce8));	// 17798 inc     byte_38CE8 ;~ 0934:19AB
cs=0x934;eip=0x0019af; 	T(CMP(al, 0x3C));	// 17799 cmp     al, 3Ch ; '<' ;~ 0934:19AF
cs=0x934;eip=0x0019b1; 	R(JC(loc_192a4));	// 17800 jb      short loc_192A4 ;~ 0934:19B1
cs=0x934;eip=0x0019b3; 	T(CMP(byte_3a39e, 0x63));	// 17801 cmp     byte_3A39E, 63h ; 'c' ;~ 0934:19B3
cs=0x934;eip=0x0019b8; 	R(JNC(loc_192de));	// 17802 jnb     short loc_192DE ;~ 0934:19B8
cs=0x934;eip=0x0019ba; 	X(INC(byte_3a39e));	// 17803 inc     byte_3A39E ;~ 0934:19BA
loc_192de:
	// 5291 
cs=0x934;eip=0x0019be; 	X(SUB(byte_38ce8, 0x3C));	// 17806 sub     byte_38CE8, 3Ch ; '<' ;~ 0934:19BE
cs=0x934;eip=0x0019c3; 	R(JMP(loc_192a4));	// 17807 jmp     short loc_192A4 ;~ 0934:19C3
loc_192e6:
	// 5292 
cs=0x934;eip=0x0019c6; 	T(MOV(sp, bp));	// 17813 mov     sp, bp ;~ 0934:19C6
cs=0x934;eip=0x0019c8; 	X(POP(bp));	// 17814 pop     bp ;~ 0934:19C8
cs=0x934;eip=0x0019c9; 	R(RETF(0));	// 17815 retf ;~ 0934:19C9
sub_192ea:
	// 17822 
cs=0x934;eip=0x0019ca; 	T(MOV(ax, 1));	// 17823 mov     ax, 1 ;~ 0934:19CA
ret_934_19cd:
	// 5293 
cs=0x934;eip=0x0019cd; 	X(MOV(word_2beda, ax));	// 17824 mov     word_2BEDA, ax ;~ 0934:19CD
cs=0x934;eip=0x0019d0; 	X(PUSH(ax));	// 17825 push    ax ;~ 0934:19D0
cs=0x934;eip=0x0019d1; 	R(CALLF(sub_2714e,0));	// 17826 call    far ptr sub_2714E ;~ 0934:19D1
cs=0x934;eip=0x0019d6; 	T(ADD(sp, 2));	// 17827 add     sp, 2 ;~ 0934:19D6
cs=0x934;eip=0x0019d9; 	T(MOV(ax, 0x2500));	// 17828 mov     ax, 2500h ;~ 0934:19D9
cs=0x934;eip=0x0019dc; 	X(PUSH(ds));	// 17829 push    ds ;~ 0934:19DC
cs=0x934;eip=0x0019dd; 	X(PUSH(ax));	// 17830 push    ax ;~ 0934:19DD
cs=0x934;eip=0x0019de; 	X(PUSH(word_3a392));	// 17831 push    word_3A392 ;~ 0934:19DE
cs=0x934;eip=0x0019e2; 	X(PUSH(word_3a390));	// 17832 push    word_3A390 ;~ 0934:19E2
cs=0x934;eip=0x0019e6; 	R(CALLF(sub_1ab87,0));	// 17833 call    sub_1AB87 ;~ 0934:19E6
cs=0x934;eip=0x0019eb; 	T(ADD(sp, 8));	// 17834 add     sp, 8 ;~ 0934:19EB
cs=0x934;eip=0x0019ee; 	X(MOV(byte_34f30, 0));	// 17835 mov     byte_34F30, 0 ;~ 0934:19EE
cs=0x934;eip=0x0019f3; 	T(CMP(word_3a178, 0x13));	// 17836 cmp     word_3A178, 13h ;~ 0934:19F3
cs=0x934;eip=0x0019f8; 	R(JNZ(loc_1932e));	// 17837 jnz     short loc_1932E ;~ 0934:19F8
cs=0x934;eip=0x0019fa; 	T(SUB(ax, ax));	// 17838 sub     ax, ax ;~ 0934:19FA
cs=0x934;eip=0x0019fc; 	X(PUSH(ax));	// 17839 push    ax ;~ 0934:19FC
cs=0x934;eip=0x0019fd; 	T(MOV(ax, 0x5F));	// 17840 mov     ax, 5Fh ; '_' ;~ 0934:19FD
cs=0x934;eip=0x001a00; 	X(PUSH(ax));	// 17841 push    ax ;~ 0934:1A00
cs=0x934;eip=0x001a01; 	T(SUB(ax, ax));	// 17842 sub     ax, ax ;~ 0934:1A01
cs=0x934;eip=0x001a03; 	X(PUSH(ax));	// 17843 push    ax ;~ 0934:1A03
cs=0x934;eip=0x001a04; 	T(MOV(ax, 0x0A0));	// 17844 mov     ax, 0A0h ; '†' ;~ 0934:1A04
cs=0x934;eip=0x001a07; 	X(PUSH(ax));	// 17845 push    ax ;~ 0934:1A07
cs=0x934;eip=0x001a08; 	T(MOV(ax, 0x1729));	// 17846 mov     ax, 1729h ;~ 0934:1A08
cs=0x934;eip=0x001a0b; 	R(JMP(loc_1933f));	// 17847 jmp     short loc_1933F ;~ 0934:1A0B
loc_1932e:
	// 5294 
cs=0x934;eip=0x001a0e; 	T(SUB(ax, ax));	// 17852 sub     ax, ax ;~ 0934:1A0E
cs=0x934;eip=0x001a10; 	X(PUSH(ax));	// 17853 push    ax ;~ 0934:1A10
cs=0x934;eip=0x001a11; 	T(MOV(ax, 0x5F));	// 17854 mov     ax, 5Fh ; '_' ;~ 0934:1A11
cs=0x934;eip=0x001a14; 	X(PUSH(ax));	// 17855 push    ax ;~ 0934:1A14
cs=0x934;eip=0x001a15; 	T(SUB(ax, ax));	// 17856 sub     ax, ax ;~ 0934:1A15
cs=0x934;eip=0x001a17; 	X(PUSH(ax));	// 17857 push    ax ;~ 0934:1A17
cs=0x934;eip=0x001a18; 	T(MOV(ax, 0x0A0));	// 17858 mov     ax, 0A0h ; '†' ;~ 0934:1A18
cs=0x934;eip=0x001a1b; 	X(PUSH(ax));	// 17859 push    ax ;~ 0934:1A1B
cs=0x934;eip=0x001a1c; 	T(MOV(ax, 0x12EA));	// 17860 mov     ax, 12EAh ;~ 0934:1A1C
loc_1933f:
	// 5295 
cs=0x934;eip=0x001a1f; 	X(PUSH(ax));	// 17863 push    ax ;~ 0934:1A1F
cs=0x934;eip=0x001a20; 	T(MOV(ax, 0x2500));	// 17864 mov     ax, 2500h ;~ 0934:1A20
cs=0x934;eip=0x001a23; 	X(PUSH(ax));	// 17865 push    ax ;~ 0934:1A23
cs=0x934;eip=0x001a24; 	R(CALLF(sub_178ec,0));	// 17866 call    sub_178EC ;~ 0934:1A24
cs=0x934;eip=0x001a29; 	T(ADD(sp, 0x0C));	// 17867 add     sp, 0Ch ;~ 0934:1A29
cs=0x934;eip=0x001a2c; 	T(MOV(ax, 6));	// 17868 mov     ax, 6 ;~ 0934:1A2C
cs=0x934;eip=0x001a2f; 	X(PUSH(ax));	// 17869 push    ax ;~ 0934:1A2F
cs=0x934;eip=0x001a30; 	R(CALLF(sub_1d2d0,0));	// 17870 call    sub_1D2D0 ;~ 0934:1A30
cs=0x934;eip=0x001a35; 	T(ADD(sp, 2));	// 17871 add     sp, 2 ;~ 0934:1A35
cs=0x934;eip=0x001a38; 	T(MOV(ax, 1));	// 17872 mov     ax, 1 ;~ 0934:1A38
cs=0x934;eip=0x001a3b; 	X(PUSH(ax));	// 17873 push    ax ;~ 0934:1A3B
cs=0x934;eip=0x001a3c; 	X(PUSH(ax));	// 17874 push    ax ;~ 0934:1A3C
cs=0x934;eip=0x001a3d; 	T(MOV(ax, 0x5F));	// 17875 mov     ax, 5Fh ; '_' ;~ 0934:1A3D
cs=0x934;eip=0x001a40; 	X(PUSH(ax));	// 17876 push    ax ;~ 0934:1A40
cs=0x934;eip=0x001a41; 	T(MOV(ax, 0x0A0));	// 17877 mov     ax, 0A0h ; '†' ;~ 0934:1A41
cs=0x934;eip=0x001a44; 	X(PUSH(ax));	// 17878 push    ax ;~ 0934:1A44
cs=0x934;eip=0x001a45; 	T(MOV(ax, 0x5F));	// 17879 mov     ax, 5Fh ; '_' ;~ 0934:1A45
cs=0x934;eip=0x001a48; 	X(PUSH(ax));	// 17880 push    ax ;~ 0934:1A48
cs=0x934;eip=0x001a49; 	T(SUB(ax, ax));	// 17881 sub     ax, ax ;~ 0934:1A49
cs=0x934;eip=0x001a4b; 	X(PUSH(ax));	// 17882 push    ax ;~ 0934:1A4B
cs=0x934;eip=0x001a4c; 	T(MOV(ax, 0x9F));	// 17883 mov     ax, 9Fh ; 'ü' ;~ 0934:1A4C
cs=0x934;eip=0x001a4f; 	X(PUSH(ax));	// 17884 push    ax ;~ 0934:1A4F
cs=0x934;eip=0x001a50; 	T(SUB(ax, ax));	// 17885 sub     ax, ax ;~ 0934:1A50
cs=0x934;eip=0x001a52; 	X(PUSH(ax));	// 17886 push    ax ;~ 0934:1A52
cs=0x934;eip=0x001a53; 	R(CALLF(sub_28183,0));	// 17887 call    far ptr sub_28183 ;~ 0934:1A53
cs=0x934;eip=0x001a58; 	T(ADD(sp, 0x10));	// 17888 add     sp, 10h ;~ 0934:1A58
cs=0x934;eip=0x001a5b; 	X(PUSH(cs));	// 17889 push    cs ;~ 0934:1A5B
cs=0x934;eip=0x001a5c; 	R(CALL(sub_19392,0));	// 17890 call    near ptr sub_19392 ;~ 0934:1A5C
cs=0x934;eip=0x001a5f; 	T(SUB(ax, ax));	// 17891 sub     ax, ax ;~ 0934:1A5F
cs=0x934;eip=0x001a61; 	X(MOV(word_2beda, ax));	// 17892 mov     word_2BEDA, ax ;~ 0934:1A61
cs=0x934;eip=0x001a64; 	X(PUSH(ax));	// 17893 push    ax ;~ 0934:1A64
cs=0x934;eip=0x001a65; 	R(CALLF(sub_2714e,0));	// 17894 call    far ptr sub_2714E ;~ 0934:1A65
cs=0x934;eip=0x001a6a; 	T(ADD(sp, 2));	// 17895 add     sp, 2 ;~ 0934:1A6A
cs=0x934;eip=0x001a6d; 	X(PUSH(cs));	// 17896 push    cs ;~ 0934:1A6D
cs=0x934;eip=0x001a6e; 	R(CALL(sub_1971e,0));	// 17897 call    near ptr sub_1971E ;~ 0934:1A6E
cs=0x934;eip=0x001a71; 	R(RETF(0));	// 17898 retf ;~ 0934:1A71
sub_19392:
	// 17905 
cs=0x934;eip=0x001a72; 	T(CMP(byte_3751c, 0));	// 17907 cmp     byte_3751C, 0 ;~ 0934:1A72
ret_934_1a77:
	// 5296 
cs=0x934;eip=0x001a77; 	R(JZ(loc_1939c));	// 17908 jz      short loc_1939C ;~ 0934:1A77
cs=0x934;eip=0x001a79; 	R(JMP(loc_19454));	// 17909 jmp     loc_19454 ;~ 0934:1A79
loc_1939c:
	// 5297 
cs=0x934;eip=0x001a7c; 	T(SUB(ax, ax));	// 17913 sub     ax, ax ;~ 0934:1A7C
cs=0x934;eip=0x001a7e; 	X(PUSH(ax));	// 17914 push    ax ;~ 0934:1A7E
cs=0x934;eip=0x001a7f; 	T(MOV(ax, 1));	// 17915 mov     ax, 1 ;~ 0934:1A7F
cs=0x934;eip=0x001a82; 	X(PUSH(ax));	// 17916 push    ax ;~ 0934:1A82
cs=0x934;eip=0x001a83; 	T(MOV(ax, 0x1F));	// 17917 mov     ax, 1Fh ;~ 0934:1A83
cs=0x934;eip=0x001a86; 	X(PUSH(ax));	// 17918 push    ax ;~ 0934:1A86
cs=0x934;eip=0x001a87; 	T(SUB(ax, ax));	// 17919 sub     ax, ax ;~ 0934:1A87
cs=0x934;eip=0x001a89; 	X(PUSH(ax));	// 17920 push    ax ;~ 0934:1A89
cs=0x934;eip=0x001a8a; 	T(MOV(ax, 0x0F));	// 17921 mov     ax, 0Fh ;~ 0934:1A8A
cs=0x934;eip=0x001a8d; 	X(PUSH(ax));	// 17922 push    ax ;~ 0934:1A8D
cs=0x934;eip=0x001a8e; 	T(SUB(ax, ax));	// 17923 sub     ax, ax ;~ 0934:1A8E
cs=0x934;eip=0x001a90; 	X(PUSH(ax));	// 17924 push    ax ;~ 0934:1A90
cs=0x934;eip=0x001a91; 	T(MOV(ax, 0x0A7));	// 17925 mov     ax, 0A7h ; 'ß' ;~ 0934:1A91
cs=0x934;eip=0x001a94; 	X(PUSH(ax));	// 17926 push    ax ;~ 0934:1A94
cs=0x934;eip=0x001a95; 	T(SUB(ax, ax));	// 17927 sub     ax, ax ;~ 0934:1A95
cs=0x934;eip=0x001a97; 	X(PUSH(ax));	// 17928 push    ax ;~ 0934:1A97
cs=0x934;eip=0x001a98; 	R(CALLF(sub_28183,0));	// 17929 call    far ptr sub_28183 ;~ 0934:1A98
cs=0x934;eip=0x001a9d; 	T(ADD(sp, 0x10));	// 17930 add     sp, 10h ;~ 0934:1A9D
cs=0x934;eip=0x001aa0; 	T(SUB(ax, ax));	// 17931 sub     ax, ax ;~ 0934:1AA0
cs=0x934;eip=0x001aa2; 	X(PUSH(ax));	// 17932 push    ax ;~ 0934:1AA2
cs=0x934;eip=0x001aa3; 	T(MOV(ax, 1));	// 17933 mov     ax, 1 ;~ 0934:1AA3
cs=0x934;eip=0x001aa6; 	X(PUSH(ax));	// 17934 push    ax ;~ 0934:1AA6
cs=0x934;eip=0x001aa7; 	T(MOV(ax, 0x1F));	// 17935 mov     ax, 1Fh ;~ 0934:1AA7
cs=0x934;eip=0x001aaa; 	X(PUSH(ax));	// 17936 push    ax ;~ 0934:1AAA
cs=0x934;eip=0x001aab; 	T(MOV(ax, 0x100));	// 17937 mov     ax, 100h ;~ 0934:1AAB
cs=0x934;eip=0x001aae; 	X(PUSH(ax));	// 17938 push    ax ;~ 0934:1AAE
cs=0x934;eip=0x001aaf; 	T(MOV(ax, 0x0F));	// 17939 mov     ax, 0Fh ;~ 0934:1AAF
cs=0x934;eip=0x001ab2; 	X(PUSH(ax));	// 17940 push    ax ;~ 0934:1AB2
cs=0x934;eip=0x001ab3; 	T(SUB(ax, ax));	// 17941 sub     ax, ax ;~ 0934:1AB3
cs=0x934;eip=0x001ab5; 	X(PUSH(ax));	// 17942 push    ax ;~ 0934:1AB5
cs=0x934;eip=0x001ab6; 	T(MOV(ax, 0x13F));	// 17943 mov     ax, 13Fh ;~ 0934:1AB6
cs=0x934;eip=0x001ab9; 	X(PUSH(ax));	// 17944 push    ax ;~ 0934:1AB9
cs=0x934;eip=0x001aba; 	T(MOV(ax, 0x100));	// 17945 mov     ax, 100h ;~ 0934:1ABA
cs=0x934;eip=0x001abd; 	X(PUSH(ax));	// 17946 push    ax ;~ 0934:1ABD
cs=0x934;eip=0x001abe; 	R(CALLF(sub_28183,0));	// 17947 call    far ptr sub_28183 ;~ 0934:1ABE
cs=0x934;eip=0x001ac3; 	T(ADD(sp, 0x10));	// 17948 add     sp, 10h ;~ 0934:1AC3
cs=0x934;eip=0x001ac6; 	T(SUB(ax, ax));	// 17949 sub     ax, ax ;~ 0934:1AC6
cs=0x934;eip=0x001ac8; 	X(PUSH(ax));	// 17950 push    ax ;~ 0934:1AC8
cs=0x934;eip=0x001ac9; 	T(MOV(ax, 1));	// 17951 mov     ax, 1 ;~ 0934:1AC9
cs=0x934;eip=0x001acc; 	X(PUSH(ax));	// 17952 push    ax ;~ 0934:1ACC
cs=0x934;eip=0x001acd; 	T(MOV(ax, 0x6F));	// 17953 mov     ax, 6Fh ; 'o' ;~ 0934:1ACD
cs=0x934;eip=0x001ad0; 	X(PUSH(ax));	// 17954 push    ax ;~ 0934:1AD0
cs=0x934;eip=0x001ad1; 	T(SUB(ax, ax));	// 17955 sub     ax, ax ;~ 0934:1AD1
cs=0x934;eip=0x001ad3; 	X(PUSH(ax));	// 17956 push    ax ;~ 0934:1AD3
cs=0x934;eip=0x001ad4; 	T(MOV(ax, 0x5F));	// 17957 mov     ax, 5Fh ; '_' ;~ 0934:1AD4
cs=0x934;eip=0x001ad7; 	X(PUSH(ax));	// 17958 push    ax ;~ 0934:1AD7
cs=0x934;eip=0x001ad8; 	T(MOV(ax, 0x10));	// 17959 mov     ax, 10h ;~ 0934:1AD8
cs=0x934;eip=0x001adb; 	X(PUSH(ax));	// 17960 push    ax ;~ 0934:1ADB
cs=0x934;eip=0x001adc; 	T(MOV(ax, 0x13F));	// 17961 mov     ax, 13Fh ;~ 0934:1ADC
cs=0x934;eip=0x001adf; 	X(PUSH(ax));	// 17962 push    ax ;~ 0934:1ADF
cs=0x934;eip=0x001ae0; 	T(SUB(ax, ax));	// 17963 sub     ax, ax ;~ 0934:1AE0
cs=0x934;eip=0x001ae2; 	X(PUSH(ax));	// 17964 push    ax ;~ 0934:1AE2
cs=0x934;eip=0x001ae3; 	R(CALLF(sub_28183,0));	// 17965 call    far ptr sub_28183 ;~ 0934:1AE3
cs=0x934;eip=0x001ae8; 	T(ADD(sp, 0x10));	// 17966 add     sp, 10h ;~ 0934:1AE8
cs=0x934;eip=0x001aeb; 	T(MOV(ax, 1));	// 17967 mov     ax, 1 ;~ 0934:1AEB
cs=0x934;eip=0x001aee; 	X(PUSH(ax));	// 17968 push    ax ;~ 0934:1AEE
cs=0x934;eip=0x001aef; 	X(PUSH(ax));	// 17969 push    ax ;~ 0934:1AEF
cs=0x934;eip=0x001af0; 	T(MOV(ax, 0x5F));	// 17970 mov     ax, 5Fh ; '_' ;~ 0934:1AF0
cs=0x934;eip=0x001af3; 	X(PUSH(ax));	// 17971 push    ax ;~ 0934:1AF3
cs=0x934;eip=0x001af4; 	T(SUB(ax, ax));	// 17972 sub     ax, ax ;~ 0934:1AF4
cs=0x934;eip=0x001af6; 	X(PUSH(ax));	// 17973 push    ax ;~ 0934:1AF6
cs=0x934;eip=0x001af7; 	T(MOV(ax, 0x5D));	// 17974 mov     ax, 5Dh ; ']' ;~ 0934:1AF7
cs=0x934;eip=0x001afa; 	X(PUSH(ax));	// 17975 push    ax ;~ 0934:1AFA
cs=0x934;eip=0x001afb; 	T(SUB(ax, ax));	// 17976 sub     ax, ax ;~ 0934:1AFB
cs=0x934;eip=0x001afd; 	X(PUSH(ax));	// 17977 push    ax ;~ 0934:1AFD
cs=0x934;eip=0x001afe; 	T(MOV(ax, 0x13F));	// 17978 mov     ax, 13Fh ;~ 0934:1AFE
cs=0x934;eip=0x001b01; 	X(PUSH(ax));	// 17979 push    ax ;~ 0934:1B01
cs=0x934;eip=0x001b02; 	T(SUB(ax, ax));	// 17980 sub     ax, ax ;~ 0934:1B02
cs=0x934;eip=0x001b04; 	X(PUSH(ax));	// 17981 push    ax ;~ 0934:1B04
cs=0x934;eip=0x001b05; 	R(CALLF(sub_28183,0));	// 17982 call    far ptr sub_28183 ;~ 0934:1B05
cs=0x934;eip=0x001b0a; 	T(ADD(sp, 0x10));	// 17983 add     sp, 10h ;~ 0934:1B0A
cs=0x934;eip=0x001b0d; 	T(MOV(ax, 1));	// 17984 mov     ax, 1 ;~ 0934:1B0D
cs=0x934;eip=0x001b10; 	X(PUSH(ax));	// 17985 push    ax ;~ 0934:1B10
cs=0x934;eip=0x001b11; 	T(SUB(ax, ax));	// 17986 sub     ax, ax ;~ 0934:1B11
cs=0x934;eip=0x001b13; 	X(PUSH(ax));	// 17987 push    ax ;~ 0934:1B13
cs=0x934;eip=0x001b14; 	T(MOV(ax, 1));	// 17988 mov     ax, 1 ;~ 0934:1B14
cs=0x934;eip=0x001b17; 	X(PUSH(ax));	// 17989 push    ax ;~ 0934:1B17
cs=0x934;eip=0x001b18; 	T(SUB(ax, ax));	// 17990 sub     ax, ax ;~ 0934:1B18
cs=0x934;eip=0x001b1a; 	X(PUSH(ax));	// 17991 push    ax ;~ 0934:1B1A
cs=0x934;eip=0x001b1b; 	T(MOV(ax, 0x6F));	// 17992 mov     ax, 6Fh ; 'o' ;~ 0934:1B1B
cs=0x934;eip=0x001b1e; 	X(PUSH(ax));	// 17993 push    ax ;~ 0934:1B1E
cs=0x934;eip=0x001b1f; 	T(MOV(ax, 0x6E));	// 17994 mov     ax, 6Eh ; 'n' ;~ 0934:1B1F
cs=0x934;eip=0x001b22; 	X(PUSH(ax));	// 17995 push    ax ;~ 0934:1B22
cs=0x934;eip=0x001b23; 	T(MOV(ax, 0x13F));	// 17996 mov     ax, 13Fh ;~ 0934:1B23
cs=0x934;eip=0x001b26; 	X(PUSH(ax));	// 17997 push    ax ;~ 0934:1B26
cs=0x934;eip=0x001b27; 	T(SUB(ax, ax));	// 17998 sub     ax, ax ;~ 0934:1B27
cs=0x934;eip=0x001b29; 	X(PUSH(ax));	// 17999 push    ax ;~ 0934:1B29
cs=0x934;eip=0x001b2a; 	R(CALLF(sub_28183,0));	// 18000 call    far ptr sub_28183 ;~ 0934:1B2A
cs=0x934;eip=0x001b2f; 	T(ADD(sp, 0x10));	// 18001 add     sp, 10h ;~ 0934:1B2F
cs=0x934;eip=0x001b32; 	R(RETF(0));	// 18002 retf ;~ 0934:1B32
loc_19454:
	// 5298 
cs=0x934;eip=0x001b34; 	T(SUB(ax, ax));	// 18007 sub     ax, ax ;~ 0934:1B34
cs=0x934;eip=0x001b36; 	X(PUSH(ax));	// 18008 push    ax ;~ 0934:1B36
cs=0x934;eip=0x001b37; 	T(MOV(ax, 1));	// 18009 mov     ax, 1 ;~ 0934:1B37
cs=0x934;eip=0x001b3a; 	X(PUSH(ax));	// 18010 push    ax ;~ 0934:1B3A
cs=0x934;eip=0x001b3b; 	T(MOV(ax, 0x1F));	// 18011 mov     ax, 1Fh ;~ 0934:1B3B
cs=0x934;eip=0x001b3e; 	X(PUSH(ax));	// 18012 push    ax ;~ 0934:1B3E
cs=0x934;eip=0x001b3f; 	T(MOV(ax, 0x28));	// 18013 mov     ax, 28h ; '(' ;~ 0934:1B3F
cs=0x934;eip=0x001b42; 	X(PUSH(ax));	// 18014 push    ax ;~ 0934:1B42
cs=0x934;eip=0x001b43; 	T(MOV(ax, 0x0F));	// 18015 mov     ax, 0Fh ;~ 0934:1B43
cs=0x934;eip=0x001b46; 	X(PUSH(ax));	// 18016 push    ax ;~ 0934:1B46
cs=0x934;eip=0x001b47; 	T(SUB(ax, ax));	// 18017 sub     ax, ax ;~ 0934:1B47
cs=0x934;eip=0x001b49; 	X(PUSH(ax));	// 18018 push    ax ;~ 0934:1B49
cs=0x934;eip=0x001b4a; 	T(MOV(ax, 0x0A8));	// 18019 mov     ax, 0A8h ; '®' ;~ 0934:1B4A
cs=0x934;eip=0x001b4d; 	X(PUSH(ax));	// 18020 push    ax ;~ 0934:1B4D
cs=0x934;eip=0x001b4e; 	T(MOV(ax, 0x28));	// 18021 mov     ax, 28h ; '(' ;~ 0934:1B4E
cs=0x934;eip=0x001b51; 	X(PUSH(ax));	// 18022 push    ax ;~ 0934:1B51
cs=0x934;eip=0x001b52; 	R(CALLF(sub_28183,0));	// 18023 call    far ptr sub_28183 ;~ 0934:1B52
cs=0x934;eip=0x001b57; 	T(ADD(sp, 0x10));	// 18024 add     sp, 10h ;~ 0934:1B57
cs=0x934;eip=0x001b5a; 	T(SUB(ax, ax));	// 18025 sub     ax, ax ;~ 0934:1B5A
cs=0x934;eip=0x001b5c; 	X(PUSH(ax));	// 18026 push    ax ;~ 0934:1B5C
cs=0x934;eip=0x001b5d; 	T(MOV(ax, 1));	// 18027 mov     ax, 1 ;~ 0934:1B5D
cs=0x934;eip=0x001b60; 	X(PUSH(ax));	// 18028 push    ax ;~ 0934:1B60
cs=0x934;eip=0x001b61; 	T(MOV(ax, 0x1F));	// 18029 mov     ax, 1Fh ;~ 0934:1B61
cs=0x934;eip=0x001b64; 	X(PUSH(ax));	// 18030 push    ax ;~ 0934:1B64
cs=0x934;eip=0x001b65; 	T(MOV(ax, 0x100));	// 18031 mov     ax, 100h ;~ 0934:1B65
cs=0x934;eip=0x001b68; 	X(PUSH(ax));	// 18032 push    ax ;~ 0934:1B68
cs=0x934;eip=0x001b69; 	T(MOV(ax, 0x0F));	// 18033 mov     ax, 0Fh ;~ 0934:1B69
cs=0x934;eip=0x001b6c; 	X(PUSH(ax));	// 18034 push    ax ;~ 0934:1B6C
cs=0x934;eip=0x001b6d; 	T(SUB(ax, ax));	// 18035 sub     ax, ax ;~ 0934:1B6D
cs=0x934;eip=0x001b6f; 	X(PUSH(ax));	// 18036 push    ax ;~ 0934:1B6F
cs=0x934;eip=0x001b70; 	T(MOV(ax, 0x117));	// 18037 mov     ax, 117h ;~ 0934:1B70
cs=0x934;eip=0x001b73; 	X(PUSH(ax));	// 18038 push    ax ;~ 0934:1B73
cs=0x934;eip=0x001b74; 	T(MOV(ax, 0x100));	// 18039 mov     ax, 100h ;~ 0934:1B74
cs=0x934;eip=0x001b77; 	X(PUSH(ax));	// 18040 push    ax ;~ 0934:1B77
cs=0x934;eip=0x001b78; 	R(CALLF(sub_28183,0));	// 18041 call    far ptr sub_28183 ;~ 0934:1B78
cs=0x934;eip=0x001b7d; 	T(ADD(sp, 0x10));	// 18042 add     sp, 10h ;~ 0934:1B7D
cs=0x934;eip=0x001b80; 	T(SUB(ax, ax));	// 18043 sub     ax, ax ;~ 0934:1B80
cs=0x934;eip=0x001b82; 	X(PUSH(ax));	// 18044 push    ax ;~ 0934:1B82
cs=0x934;eip=0x001b83; 	T(MOV(ax, 1));	// 18045 mov     ax, 1 ;~ 0934:1B83
cs=0x934;eip=0x001b86; 	X(PUSH(ax));	// 18046 push    ax ;~ 0934:1B86
cs=0x934;eip=0x001b87; 	T(MOV(ax, 0x4F));	// 18047 mov     ax, 4Fh ; 'O' ;~ 0934:1B87
cs=0x934;eip=0x001b8a; 	X(PUSH(ax));	// 18048 push    ax ;~ 0934:1B8A
cs=0x934;eip=0x001b8b; 	T(MOV(ax, 0x28));	// 18049 mov     ax, 28h ; '(' ;~ 0934:1B8B
cs=0x934;eip=0x001b8e; 	X(PUSH(ax));	// 18050 push    ax ;~ 0934:1B8E
cs=0x934;eip=0x001b8f; 	T(MOV(ax, 0x3F));	// 18051 mov     ax, 3Fh ; '?' ;~ 0934:1B8F
cs=0x934;eip=0x001b92; 	X(PUSH(ax));	// 18052 push    ax ;~ 0934:1B92
cs=0x934;eip=0x001b93; 	T(MOV(ax, 0x10));	// 18053 mov     ax, 10h ;~ 0934:1B93
cs=0x934;eip=0x001b96; 	X(PUSH(ax));	// 18054 push    ax ;~ 0934:1B96
cs=0x934;eip=0x001b97; 	T(MOV(ax, 0x117));	// 18055 mov     ax, 117h ;~ 0934:1B97
cs=0x934;eip=0x001b9a; 	X(PUSH(ax));	// 18056 push    ax ;~ 0934:1B9A
cs=0x934;eip=0x001b9b; 	T(MOV(ax, 0x28));	// 18057 mov     ax, 28h ; '(' ;~ 0934:1B9B
cs=0x934;eip=0x001b9e; 	X(PUSH(ax));	// 18058 push    ax ;~ 0934:1B9E
cs=0x934;eip=0x001b9f; 	R(CALLF(sub_28183,0));	// 18059 call    far ptr sub_28183 ;~ 0934:1B9F
cs=0x934;eip=0x001ba4; 	T(ADD(sp, 0x10));	// 18060 add     sp, 10h ;~ 0934:1BA4
cs=0x934;eip=0x001ba7; 	T(MOV(ax, 1));	// 18061 mov     ax, 1 ;~ 0934:1BA7
cs=0x934;eip=0x001baa; 	X(PUSH(ax));	// 18062 push    ax ;~ 0934:1BAA
cs=0x934;eip=0x001bab; 	X(PUSH(ax));	// 18063 push    ax ;~ 0934:1BAB
cs=0x934;eip=0x001bac; 	T(MOV(ax, 0x3F));	// 18064 mov     ax, 3Fh ; '?' ;~ 0934:1BAC
cs=0x934;eip=0x001baf; 	X(PUSH(ax));	// 18065 push    ax ;~ 0934:1BAF
cs=0x934;eip=0x001bb0; 	T(MOV(ax, 0x28));	// 18066 mov     ax, 28h ; '(' ;~ 0934:1BB0
cs=0x934;eip=0x001bb3; 	X(PUSH(ax));	// 18067 push    ax ;~ 0934:1BB3
cs=0x934;eip=0x001bb4; 	T(MOV(ax, 0x3D));	// 18068 mov     ax, 3Dh ; '=' ;~ 0934:1BB4
cs=0x934;eip=0x001bb7; 	X(PUSH(ax));	// 18069 push    ax ;~ 0934:1BB7
cs=0x934;eip=0x001bb8; 	T(SUB(ax, ax));	// 18070 sub     ax, ax ;~ 0934:1BB8
cs=0x934;eip=0x001bba; 	X(PUSH(ax));	// 18071 push    ax ;~ 0934:1BBA
cs=0x934;eip=0x001bbb; 	T(MOV(ax, 0x117));	// 18072 mov     ax, 117h ;~ 0934:1BBB
cs=0x934;eip=0x001bbe; 	X(PUSH(ax));	// 18073 push    ax ;~ 0934:1BBE
cs=0x934;eip=0x001bbf; 	T(MOV(ax, 0x28));	// 18074 mov     ax, 28h ; '(' ;~ 0934:1BBF
cs=0x934;eip=0x001bc2; 	X(PUSH(ax));	// 18075 push    ax ;~ 0934:1BC2
cs=0x934;eip=0x001bc3; 	R(CALLF(sub_28183,0));	// 18076 call    far ptr sub_28183 ;~ 0934:1BC3
cs=0x934;eip=0x001bc8; 	T(ADD(sp, 0x10));	// 18077 add     sp, 10h ;~ 0934:1BC8
cs=0x934;eip=0x001bcb; 	T(MOV(ax, 1));	// 18078 mov     ax, 1 ;~ 0934:1BCB
cs=0x934;eip=0x001bce; 	X(PUSH(ax));	// 18079 push    ax ;~ 0934:1BCE
cs=0x934;eip=0x001bcf; 	T(SUB(ax, ax));	// 18080 sub     ax, ax ;~ 0934:1BCF
cs=0x934;eip=0x001bd1; 	X(PUSH(ax));	// 18081 push    ax ;~ 0934:1BD1
cs=0x934;eip=0x001bd2; 	T(MOV(ax, 1));	// 18082 mov     ax, 1 ;~ 0934:1BD2
cs=0x934;eip=0x001bd5; 	X(PUSH(ax));	// 18083 push    ax ;~ 0934:1BD5
cs=0x934;eip=0x001bd6; 	T(MOV(ax, 0x28));	// 18084 mov     ax, 28h ; '(' ;~ 0934:1BD6
cs=0x934;eip=0x001bd9; 	X(PUSH(ax));	// 18085 push    ax ;~ 0934:1BD9
cs=0x934;eip=0x001bda; 	T(MOV(ax, 0x4F));	// 18086 mov     ax, 4Fh ; 'O' ;~ 0934:1BDA
cs=0x934;eip=0x001bdd; 	X(PUSH(ax));	// 18087 push    ax ;~ 0934:1BDD
cs=0x934;eip=0x001bde; 	T(MOV(ax, 0x4E));	// 18088 mov     ax, 4Eh ; 'N' ;~ 0934:1BDE
cs=0x934;eip=0x001be1; 	X(PUSH(ax));	// 18089 push    ax ;~ 0934:1BE1
cs=0x934;eip=0x001be2; 	T(MOV(ax, 0x117));	// 18090 mov     ax, 117h ;~ 0934:1BE2
cs=0x934;eip=0x001be5; 	X(PUSH(ax));	// 18091 push    ax ;~ 0934:1BE5
cs=0x934;eip=0x001be6; 	T(MOV(ax, 0x28));	// 18092 mov     ax, 28h ; '(' ;~ 0934:1BE6
cs=0x934;eip=0x001be9; 	X(PUSH(ax));	// 18093 push    ax ;~ 0934:1BE9
cs=0x934;eip=0x001bea; 	R(CALLF(sub_28183,0));	// 18094 call    far ptr sub_28183 ;~ 0934:1BEA
cs=0x934;eip=0x001bef; 	T(ADD(sp, 0x10));	// 18095 add     sp, 10h ;~ 0934:1BEF
cs=0x934;eip=0x001bf2; 	T(MOV(ax, 1));	// 18096 mov     ax, 1 ;~ 0934:1BF2
cs=0x934;eip=0x001bf5; 	X(PUSH(ax));	// 18097 push    ax ;~ 0934:1BF5
cs=0x934;eip=0x001bf6; 	R(CALLF(sub_26ffb,0));	// 18098 call    sub_26FFB ;~ 0934:1BF6
cs=0x934;eip=0x001bfb; 	T(ADD(sp, 2));	// 18099 add     sp, 2 ;~ 0934:1BFB
cs=0x934;eip=0x001bfe; 	R(RETF(0));	// 18100 retf ;~ 0934:1BFE
sub_19520:
	// 18109 
cs=0x934;eip=0x001c00; 	T(MOV(ax, 0x2500));	// 18110 mov     ax, 2500h ;~ 0934:1C00
ret_934_1c03:
	// 5299 
cs=0x934;eip=0x001c03; 	X(PUSH(ds));	// 18111 push    ds ;~ 0934:1C03
cs=0x934;eip=0x001c04; 	X(PUSH(ax));	// 18112 push    ax ;~ 0934:1C04
cs=0x934;eip=0x001c05; 	X(PUSH(word_3a39c));	// 18113 push    word_3A39C ;~ 0934:1C05
cs=0x934;eip=0x001c09; 	X(PUSH(word_3a39a));	// 18114 push    word_3A39A ;~ 0934:1C09
cs=0x934;eip=0x001c0d; 	R(CALLF(sub_1ab87,0));	// 18115 call    sub_1AB87 ;~ 0934:1C0D
cs=0x934;eip=0x001c12; 	T(ADD(sp, 8));	// 18116 add     sp, 8 ;~ 0934:1C12
cs=0x934;eip=0x001c15; 	T(MOV(ax, 2));	// 18117 mov     ax, 2 ;~ 0934:1C15
cs=0x934;eip=0x001c18; 	X(PUSH(ax));	// 18118 push    ax ;~ 0934:1C18
cs=0x934;eip=0x001c19; 	R(CALLF(sub_1d2d0,0));	// 18119 call    sub_1D2D0 ;~ 0934:1C19
cs=0x934;eip=0x001c1e; 	T(ADD(sp, 2));	// 18120 add     sp, 2 ;~ 0934:1C1E
cs=0x934;eip=0x001c21; 	T(SUB(ax, ax));	// 18121 sub     ax, ax ;~ 0934:1C21
cs=0x934;eip=0x001c23; 	X(MOV(word_2beda, ax));	// 18122 mov     word_2BEDA, ax ;~ 0934:1C23
cs=0x934;eip=0x001c26; 	X(PUSH(ax));	// 18123 push    ax ;~ 0934:1C26
cs=0x934;eip=0x001c27; 	R(CALLF(sub_2714e,0));	// 18124 call    far ptr sub_2714E ;~ 0934:1C27
cs=0x934;eip=0x001c2c; 	T(ADD(sp, 2));	// 18125 add     sp, 2 ;~ 0934:1C2C
cs=0x934;eip=0x001c2f; 	T(CMP(word_3a178, 0x13));	// 18126 cmp     word_3A178, 13h ;~ 0934:1C2F
cs=0x934;eip=0x001c34; 	R(JNZ(loc_19560));	// 18127 jnz     short loc_19560 ;~ 0934:1C34
cs=0x934;eip=0x001c36; 	T(MOV(ax, 0x5F));	// 18128 mov     ax, 5Fh ; '_' ;~ 0934:1C36
cs=0x934;eip=0x001c39; 	X(PUSH(ax));	// 18129 push    ax ;~ 0934:1C39
cs=0x934;eip=0x001c3a; 	T(MOV(ax, 0x23C2));	// 18130 mov     ax, 23C2h ;~ 0934:1C3A
cs=0x934;eip=0x001c3d; 	R(JMP(loc_19567));	// 18131 jmp     short loc_19567 ;~ 0934:1C3D
loc_19560:
	// 5300 
cs=0x934;eip=0x001c40; 	T(MOV(ax, 0x5F));	// 18136 mov     ax, 5Fh ; '_' ;~ 0934:1C40
cs=0x934;eip=0x001c43; 	X(PUSH(ax));	// 18137 push    ax ;~ 0934:1C43
cs=0x934;eip=0x001c44; 	T(MOV(ax, 0x19E1));	// 18138 mov     ax, 19E1h ;~ 0934:1C44
loc_19567:
	// 5301 
cs=0x934;eip=0x001c47; 	X(PUSH(ax));	// 18141 push    ax ;~ 0934:1C47
cs=0x934;eip=0x001c48; 	T(MOV(ax, 0x2500));	// 18142 mov     ax, 2500h ;~ 0934:1C48
cs=0x934;eip=0x001c4b; 	X(PUSH(ax));	// 18143 push    ax ;~ 0934:1C4B
cs=0x934;eip=0x001c4c; 	R(CALLF(sub_1d919,0));	// 18144 call    sub_1D919 ;~ 0934:1C4C
cs=0x934;eip=0x001c51; 	T(ADD(sp, 6));	// 18145 add     sp, 6 ;~ 0934:1C51
cs=0x934;eip=0x001c54; 	R(CALLF(sub_25d41,0));	// 18146 call    sub_25D41 ;~ 0934:1C54
cs=0x934;eip=0x001c59; 	X(MOV(word_37914, 0));	// 18147 mov     word_37914, 0 ;~ 0934:1C59
cs=0x934;eip=0x001c5f; 	R(CALLF(sub_1d598,0));	// 18148 call    sub_1D598 ;~ 0934:1C5F
cs=0x934;eip=0x001c64; 	R(RETF(0));	// 18149 retf ;~ 0934:1C64
sub_19586:
	// 18159 
#undef arg_0
#define arg_0 6
	// 18162 arg_0           = word ptr  6 ;~ 0934:1C66
ret_934_1c66:
	// 5302 
cs=0x934;eip=0x001c66; 	X(PUSH(bp));	// 18164 push    bp ;~ 0934:1C66
cs=0x934;eip=0x001c67; 	T(MOV(bp, sp));	// 18165 mov     bp, sp ;~ 0934:1C67
cs=0x934;eip=0x001c69; 	T(MOV(ax, 0x64));	// 18166 mov     ax, 64h ; 'd' ;~ 0934:1C69
cs=0x934;eip=0x001c6c; 	X(PUSH(ax));	// 18167 push    ax ;~ 0934:1C6C
cs=0x934;eip=0x001c6d; 	T(MOV(ax, 0x0A0));	// 18168 mov     ax, 0A0h ; '†' ;~ 0934:1C6D
cs=0x934;eip=0x001c70; 	X(PUSH(ax));	// 18169 push    ax ;~ 0934:1C70
cs=0x934;eip=0x001c71; 	R(CALLF(sub_26ef9,0));	// 18170 call    sub_26EF9 ;~ 0934:1C71
cs=0x934;eip=0x001c76; 	T(ADD(sp, 4));	// 18171 add     sp, 4 ;~ 0934:1C76
cs=0x934;eip=0x001c79; 	X(MOV(byte_34f30, 0x80));	// 18172 mov     byte_34F30, 80h ; 'Ä' ;~ 0934:1C79
cs=0x934;eip=0x001c7e; 	T(MOV(ax, 0x11E9));	// 18173 mov     ax, 11E9h ;~ 0934:1C7E
cs=0x934;eip=0x001c81; 	X(PUSH(ax));	// 18174 push    ax ;~ 0934:1C81
cs=0x934;eip=0x001c82; 	T(MOV(ax, 0x0AC1));	// 18175 mov     ax, 0AC1h ;~ 0934:1C82
cs=0x934;eip=0x001c85; 	X(PUSH(ax));	// 18176 push    ax ;~ 0934:1C85
cs=0x934;eip=0x001c86; 	R(CALLF(sub_29b46,0));	// 18177 call    sub_29B46 ;~ 0934:1C86
cs=0x934;eip=0x001c8b; 	T(ADD(sp, 4));	// 18178 add     sp, 4 ;~ 0934:1C8B
cs=0x934;eip=0x001c8e; 	X(PUSH(word_38a9e));	// 18179 push    word_38A9E ;~ 0934:1C8E
cs=0x934;eip=0x001c92; 	X(PUSH(word_38a9c));	// 18180 push    word_38A9C ;~ 0934:1C92
cs=0x934;eip=0x001c96; 	T(MOV(ax, 0x0ABA));	// 18181 mov     ax, 0ABAh ;~ 0934:1C96
cs=0x934;eip=0x001c99; 	X(PUSH(ax));	// 18182 push    ax ;~ 0934:1C99
cs=0x934;eip=0x001c9a; 	R(CALLF(sub_10ee0,0));	// 18183 call    sub_10EE0 ;~ 0934:1C9A
cs=0x934;eip=0x001c9f; 	T(ADD(sp, 6));	// 18184 add     sp, 6 ;~ 0934:1C9F
cs=0x934;eip=0x001ca2; 	T(MOV(ax, 0x2500));	// 18185 mov     ax, 2500h ;~ 0934:1CA2
cs=0x934;eip=0x001ca5; 	X(PUSH(ds));	// 18186 push    ds ;~ 0934:1CA5
cs=0x934;eip=0x001ca6; 	X(PUSH(ax));	// 18187 push    ax ;~ 0934:1CA6
cs=0x934;eip=0x001ca7; 	X(PUSH(word_38a9e));	// 18188 push    word_38A9E ;~ 0934:1CA7
cs=0x934;eip=0x001cab; 	X(PUSH(word_38a9c));	// 18189 push    word_38A9C ;~ 0934:1CAB
cs=0x934;eip=0x001caf; 	R(CALLF(sub_1ab87,0));	// 18190 call    sub_1AB87 ;~ 0934:1CAF
cs=0x934;eip=0x001cb4; 	T(ADD(sp, 8));	// 18191 add     sp, 8 ;~ 0934:1CB4
cs=0x934;eip=0x001cb7; 	T(SUB(ax, ax));	// 18192 sub     ax, ax ;~ 0934:1CB7
cs=0x934;eip=0x001cb9; 	X(PUSH(ax));	// 18193 push    ax ;~ 0934:1CB9
cs=0x934;eip=0x001cba; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 18194 push    [bp+arg_0] ;~ 0934:1CBA
cs=0x934;eip=0x001cbd; 	X(PUSH(ax));	// 18195 push    ax ;~ 0934:1CBD
cs=0x934;eip=0x001cbe; 	T(MOV(ax, 0x140));	// 18196 mov     ax, 140h ;~ 0934:1CBE
cs=0x934;eip=0x001cc1; 	X(PUSH(ax));	// 18197 push    ax ;~ 0934:1CC1
cs=0x934;eip=0x001cc2; 	X(PUSH(word_2c99e));	// 18198 push    word_2C99E ;~ 0934:1CC2
cs=0x934;eip=0x001cc6; 	T(MOV(ax, 0x2500));	// 18199 mov     ax, 2500h ;~ 0934:1CC6
cs=0x934;eip=0x001cc9; 	X(PUSH(ax));	// 18200 push    ax ;~ 0934:1CC9
cs=0x934;eip=0x001cca; 	R(CALLF(sub_178ec,0));	// 18201 call    sub_178EC ;~ 0934:1CCA
cs=0x934;eip=0x001ccf; 	T(ADD(sp, 0x0C));	// 18202 add     sp, 0Ch ;~ 0934:1CCF
cs=0x934;eip=0x001cd2; 	T(MOV(ax, 0x11EF));	// 18203 mov     ax, 11EFh ;~ 0934:1CD2
cs=0x934;eip=0x001cd5; 	X(PUSH(ax));	// 18204 push    ax ;~ 0934:1CD5
cs=0x934;eip=0x001cd6; 	T(MOV(ax, 0x0AC1));	// 18205 mov     ax, 0AC1h ;~ 0934:1CD6
cs=0x934;eip=0x001cd9; 	X(PUSH(ax));	// 18206 push    ax ;~ 0934:1CD9
cs=0x934;eip=0x001cda; 	R(CALLF(sub_29b46,0));	// 18207 call    sub_29B46 ;~ 0934:1CDA
cs=0x934;eip=0x001cdf; 	T(ADD(sp, 4));	// 18208 add     sp, 4 ;~ 0934:1CDF
cs=0x934;eip=0x001ce2; 	X(PUSH(word_38a9e));	// 18209 push    word_38A9E ;~ 0934:1CE2
cs=0x934;eip=0x001ce6; 	X(PUSH(word_38a9c));	// 18210 push    word_38A9C ;~ 0934:1CE6
cs=0x934;eip=0x001cea; 	T(MOV(ax, 0x0ABA));	// 18211 mov     ax, 0ABAh ;~ 0934:1CEA
cs=0x934;eip=0x001ced; 	X(PUSH(ax));	// 18212 push    ax ;~ 0934:1CED
cs=0x934;eip=0x001cee; 	R(CALLF(sub_10ee0,0));	// 18213 call    sub_10EE0 ;~ 0934:1CEE
cs=0x934;eip=0x001cf3; 	T(ADD(sp, 6));	// 18214 add     sp, 6 ;~ 0934:1CF3
cs=0x934;eip=0x001cf6; 	T(MOV(ax, 0x2500));	// 18215 mov     ax, 2500h ;~ 0934:1CF6
cs=0x934;eip=0x001cf9; 	X(PUSH(ds));	// 18216 push    ds ;~ 0934:1CF9
cs=0x934;eip=0x001cfa; 	X(PUSH(ax));	// 18217 push    ax ;~ 0934:1CFA
cs=0x934;eip=0x001cfb; 	X(PUSH(word_38a9e));	// 18218 push    word_38A9E ;~ 0934:1CFB
cs=0x934;eip=0x001cff; 	X(PUSH(word_38a9c));	// 18219 push    word_38A9C ;~ 0934:1CFF
cs=0x934;eip=0x001d03; 	R(CALLF(sub_1ab87,0));	// 18220 call    sub_1AB87 ;~ 0934:1D03
cs=0x934;eip=0x001d08; 	T(ADD(sp, 8));	// 18221 add     sp, 8 ;~ 0934:1D08
cs=0x934;eip=0x001d0b; 	T(MOV(ax, 1));	// 18222 mov     ax, 1 ;~ 0934:1D0B
cs=0x934;eip=0x001d0e; 	X(PUSH(ax));	// 18223 push    ax ;~ 0934:1D0E
cs=0x934;eip=0x001d0f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 18224 mov     ax, [bp+arg_0] ;~ 0934:1D0F
cs=0x934;eip=0x001d12; 	T(SUB(ax, 0x2C));	// 18225 sub     ax, 2Ch ; ',' ;~ 0934:1D12
cs=0x934;eip=0x001d15; 	X(PUSH(ax));	// 18226 push    ax ;~ 0934:1D15
cs=0x934;eip=0x001d16; 	T(SUB(ax, ax));	// 18227 sub     ax, ax ;~ 0934:1D16
cs=0x934;eip=0x001d18; 	X(PUSH(ax));	// 18228 push    ax ;~ 0934:1D18
cs=0x934;eip=0x001d19; 	T(MOV(ax, 0x140));	// 18229 mov     ax, 140h ;~ 0934:1D19
cs=0x934;eip=0x001d1c; 	X(PUSH(ax));	// 18230 push    ax ;~ 0934:1D1C
cs=0x934;eip=0x001d1d; 	X(PUSH(word_2c99c));	// 18231 push    word_2C99C ;~ 0934:1D1D
cs=0x934;eip=0x001d21; 	T(MOV(ax, 0x2500));	// 18232 mov     ax, 2500h ;~ 0934:1D21
cs=0x934;eip=0x001d24; 	X(PUSH(ax));	// 18233 push    ax ;~ 0934:1D24
cs=0x934;eip=0x001d25; 	R(CALLF(sub_178ec,0));	// 18234 call    sub_178EC ;~ 0934:1D25
cs=0x934;eip=0x001d2a; 	T(ADD(sp, 0x0C));	// 18235 add     sp, 0Ch ;~ 0934:1D2A
cs=0x934;eip=0x001d2d; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0C7));	// 18236 cmp     [bp+arg_0], 0C7h ; '«' ;~ 0934:1D2D
cs=0x934;eip=0x001d32; 	R(JNZ(loc_196cf));	// 18237 jnz     short loc_196CF ;~ 0934:1D32
cs=0x934;eip=0x001d34; 	T(MOV(ax, 0x11F5));	// 18238 mov     ax, 11F5h ;~ 0934:1D34
cs=0x934;eip=0x001d37; 	X(PUSH(ax));	// 18239 push    ax ;~ 0934:1D37
cs=0x934;eip=0x001d38; 	T(MOV(ax, 0x0AC1));	// 18240 mov     ax, 0AC1h ;~ 0934:1D38
cs=0x934;eip=0x001d3b; 	X(PUSH(ax));	// 18241 push    ax ;~ 0934:1D3B
cs=0x934;eip=0x001d3c; 	R(CALLF(sub_29b46,0));	// 18242 call    sub_29B46 ;~ 0934:1D3C
cs=0x934;eip=0x001d41; 	T(ADD(sp, 4));	// 18243 add     sp, 4 ;~ 0934:1D41
cs=0x934;eip=0x001d44; 	X(PUSH(word_38a9e));	// 18244 push    word_38A9E ;~ 0934:1D44
cs=0x934;eip=0x001d48; 	X(PUSH(word_38a9c));	// 18245 push    word_38A9C ;~ 0934:1D48
cs=0x934;eip=0x001d4c; 	T(MOV(ax, 0x0ABA));	// 18246 mov     ax, 0ABAh ;~ 0934:1D4C
cs=0x934;eip=0x001d4f; 	X(PUSH(ax));	// 18247 push    ax ;~ 0934:1D4F
cs=0x934;eip=0x001d50; 	R(CALLF(sub_10ee0,0));	// 18248 call    sub_10EE0 ;~ 0934:1D50
cs=0x934;eip=0x001d55; 	T(ADD(sp, 6));	// 18249 add     sp, 6 ;~ 0934:1D55
cs=0x934;eip=0x001d58; 	T(MOV(ax, 0x2500));	// 18250 mov     ax, 2500h ;~ 0934:1D58
cs=0x934;eip=0x001d5b; 	X(PUSH(ds));	// 18251 push    ds ;~ 0934:1D5B
cs=0x934;eip=0x001d5c; 	X(PUSH(ax));	// 18252 push    ax ;~ 0934:1D5C
cs=0x934;eip=0x001d5d; 	X(PUSH(word_38a9e));	// 18253 push    word_38A9E ;~ 0934:1D5D
cs=0x934;eip=0x001d61; 	X(PUSH(word_38a9c));	// 18254 push    word_38A9C ;~ 0934:1D61
cs=0x934;eip=0x001d65; 	R(CALLF(sub_1ab87,0));	// 18255 call    sub_1AB87 ;~ 0934:1D65
cs=0x934;eip=0x001d6a; 	T(ADD(sp, 8));	// 18256 add     sp, 8 ;~ 0934:1D6A
cs=0x934;eip=0x001d6d; 	T(SUB(ax, ax));	// 18257 sub     ax, ax ;~ 0934:1D6D
cs=0x934;eip=0x001d6f; 	X(PUSH(ax));	// 18258 push    ax ;~ 0934:1D6F
cs=0x934;eip=0x001d70; 	T(MOV(ax, 0x0F));	// 18259 mov     ax, 0Fh ;~ 0934:1D70
cs=0x934;eip=0x001d73; 	X(PUSH(ax));	// 18260 push    ax ;~ 0934:1D73
cs=0x934;eip=0x001d74; 	T(SUB(ax, ax));	// 18261 sub     ax, ax ;~ 0934:1D74
cs=0x934;eip=0x001d76; 	X(PUSH(ax));	// 18262 push    ax ;~ 0934:1D76
cs=0x934;eip=0x001d77; 	T(MOV(ax, 0x140));	// 18263 mov     ax, 140h ;~ 0934:1D77
cs=0x934;eip=0x001d7a; 	X(PUSH(ax));	// 18264 push    ax ;~ 0934:1D7A
cs=0x934;eip=0x001d7b; 	X(PUSH(word_2c99a));	// 18265 push    word_2C99A ;~ 0934:1D7B
cs=0x934;eip=0x001d7f; 	T(MOV(ax, 0x2500));	// 18266 mov     ax, 2500h ;~ 0934:1D7F
cs=0x934;eip=0x001d82; 	X(PUSH(ax));	// 18267 push    ax ;~ 0934:1D82
cs=0x934;eip=0x001d83; 	R(CALLF(sub_178ec,0));	// 18268 call    sub_178EC ;~ 0934:1D83
cs=0x934;eip=0x001d88; 	T(ADD(sp, 0x0C));	// 18269 add     sp, 0Ch ;~ 0934:1D88
cs=0x934;eip=0x001d8b; 	T(SUB(ax, ax));	// 18270 sub     ax, ax ;~ 0934:1D8B
cs=0x934;eip=0x001d8d; 	X(PUSH(ax));	// 18271 push    ax ;~ 0934:1D8D
cs=0x934;eip=0x001d8e; 	T(MOV(ax, 1));	// 18272 mov     ax, 1 ;~ 0934:1D8E
cs=0x934;eip=0x001d91; 	X(PUSH(ax));	// 18273 push    ax ;~ 0934:1D91
cs=0x934;eip=0x001d92; 	T(MOV(ax, 0x0C7));	// 18274 mov     ax, 0C7h ; '«' ;~ 0934:1D92
cs=0x934;eip=0x001d95; 	X(PUSH(ax));	// 18275 push    ax ;~ 0934:1D95
cs=0x934;eip=0x001d96; 	T(SUB(ax, ax));	// 18276 sub     ax, ax ;~ 0934:1D96
cs=0x934;eip=0x001d98; 	X(PUSH(ax));	// 18277 push    ax ;~ 0934:1D98
cs=0x934;eip=0x001d99; 	T(MOV(ax, 0x0C7));	// 18278 mov     ax, 0C7h ; '«' ;~ 0934:1D99
cs=0x934;eip=0x001d9c; 	X(PUSH(ax));	// 18279 push    ax ;~ 0934:1D9C
cs=0x934;eip=0x001d9d; 	T(SUB(ax, ax));	// 18280 sub     ax, ax ;~ 0934:1D9D
cs=0x934;eip=0x001d9f; 	X(PUSH(ax));	// 18281 push    ax ;~ 0934:1D9F
cs=0x934;eip=0x001da0; 	T(MOV(ax, 0x13F));	// 18282 mov     ax, 13Fh ;~ 0934:1DA0
cs=0x934;eip=0x001da3; 	X(PUSH(ax));	// 18283 push    ax ;~ 0934:1DA3
cs=0x934;eip=0x001da4; 	T(SUB(ax, ax));	// 18284 sub     ax, ax ;~ 0934:1DA4
cs=0x934;eip=0x001da6; 	X(PUSH(ax));	// 18285 push    ax ;~ 0934:1DA6
cs=0x934;eip=0x001da7; 	R(CALLF(sub_28183,0));	// 18286 call    far ptr sub_28183 ;~ 0934:1DA7
cs=0x934;eip=0x001dac; 	T(ADD(sp, 0x10));	// 18287 add     sp, 10h ;~ 0934:1DAC
loc_196cf:
	// 5303 
cs=0x934;eip=0x001daf; 	T(MOV(ax, 1));	// 18290 mov     ax, 1 ;~ 0934:1DAF
cs=0x934;eip=0x001db2; 	X(MOV(word_2beda, ax));	// 18291 mov     word_2BEDA, ax ;~ 0934:1DB2
cs=0x934;eip=0x001db5; 	X(PUSH(ax));	// 18292 push    ax ;~ 0934:1DB5
cs=0x934;eip=0x001db6; 	R(CALLF(sub_2714e,0));	// 18293 call    far ptr sub_2714E ;~ 0934:1DB6
cs=0x934;eip=0x001dbb; 	T(ADD(sp, 2));	// 18294 add     sp, 2 ;~ 0934:1DBB
cs=0x934;eip=0x001dbe; 	T(MOV(ax, 0x2500));	// 18295 mov     ax, 2500h ;~ 0934:1DBE
cs=0x934;eip=0x001dc1; 	X(PUSH(ds));	// 18296 push    ds ;~ 0934:1DC1
cs=0x934;eip=0x001dc2; 	X(PUSH(ax));	// 18297 push    ax ;~ 0934:1DC2
cs=0x934;eip=0x001dc3; 	X(PUSH(word_3a3fe));	// 18298 push    word_3A3FE ;~ 0934:1DC3
cs=0x934;eip=0x001dc7; 	X(PUSH(word_3a3fc));	// 18299 push    word_3A3FC ;~ 0934:1DC7
cs=0x934;eip=0x001dcb; 	R(CALLF(sub_1ab87,0));	// 18300 call    sub_1AB87 ;~ 0934:1DCB
cs=0x934;eip=0x001dd0; 	T(ADD(sp, 8));	// 18301 add     sp, 8 ;~ 0934:1DD0
cs=0x934;eip=0x001dd3; 	T(SUB(ax, ax));	// 18302 sub     ax, ax ;~ 0934:1DD3
cs=0x934;eip=0x001dd5; 	X(PUSH(ax));	// 18303 push    ax ;~ 0934:1DD5
cs=0x934;eip=0x001dd6; 	T(MOV(ax, 7));	// 18304 mov     ax, 7 ;~ 0934:1DD6
cs=0x934;eip=0x001dd9; 	X(PUSH(ax));	// 18305 push    ax ;~ 0934:1DD9
cs=0x934;eip=0x001dda; 	T(SUB(ax, ax));	// 18306 sub     ax, ax ;~ 0934:1DDA
cs=0x934;eip=0x001ddc; 	X(PUSH(ax));	// 18307 push    ax ;~ 0934:1DDC
cs=0x934;eip=0x001ddd; 	T(MOV(ax, 0x98));	// 18308 mov     ax, 98h ;~ 0934:1DDD
cs=0x934;eip=0x001de0; 	X(PUSH(ax));	// 18309 push    ax ;~ 0934:1DE0
cs=0x934;eip=0x001de1; 	T(MOV(ax, 0x180));	// 18310 mov     ax, 180h ;~ 0934:1DE1
cs=0x934;eip=0x001de4; 	X(PUSH(ax));	// 18311 push    ax ;~ 0934:1DE4
cs=0x934;eip=0x001de5; 	T(MOV(ax, 0x2500));	// 18312 mov     ax, 2500h ;~ 0934:1DE5
cs=0x934;eip=0x001de8; 	X(PUSH(ax));	// 18313 push    ax ;~ 0934:1DE8
cs=0x934;eip=0x001de9; 	R(CALLF(sub_178ec,0));	// 18314 call    sub_178EC ;~ 0934:1DE9
cs=0x934;eip=0x001dee; 	T(ADD(sp, 0x0C));	// 18315 add     sp, 0Ch ;~ 0934:1DEE
cs=0x934;eip=0x001df1; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0C7));	// 18316 cmp     [bp+arg_0], 0C7h ; '«' ;~ 0934:1DF1
cs=0x934;eip=0x001df6; 	R(JZ(loc_1971c));	// 18317 jz      short loc_1971C ;~ 0934:1DF6
cs=0x934;eip=0x001df8; 	X(PUSH(cs));	// 18318 push    cs ;~ 0934:1DF8
cs=0x934;eip=0x001df9; 	R(CALL(sub_1971e,0));	// 18319 call    near ptr sub_1971E ;~ 0934:1DF9
loc_1971c:
	// 5304 
cs=0x934;eip=0x001dfc; 	X(POP(bp));	// 18322 pop     bp ;~ 0934:1DFC
cs=0x934;eip=0x001dfd; 	R(RETF(0));	// 18323 retf ;~ 0934:1DFD
sub_1971e:
	// 18330 
cs=0x934;eip=0x001dfe; 	T(CMP(word_3a178, 0x13));	// 18332 cmp     word_3A178, 13h ;~ 0934:1DFE
ret_934_1e03:
	// 5305 
cs=0x934;eip=0x001e03; 	R(JZ(locret_19777));	// 18333 jz      short locret_19777 ;~ 0934:1E03
cs=0x934;eip=0x001e05; 	T(CMP(byte_2bec8, 0));	// 18334 cmp     byte_2BEC8, 0 ;~ 0934:1E05
cs=0x934;eip=0x001e0a; 	R(JZ(locret_19777));	// 18335 jz      short locret_19777 ;~ 0934:1E0A
cs=0x934;eip=0x001e0c; 	T(CMP(byte_2c949, 0));	// 18336 cmp     byte_2C949, 0 ;~ 0934:1E0C
cs=0x934;eip=0x001e11; 	R(JZ(locret_19777));	// 18337 jz      short locret_19777 ;~ 0934:1E11
cs=0x934;eip=0x001e13; 	T(CMP(byte_2c804, 0));	// 18338 cmp     byte_2C804, 0 ;~ 0934:1E13
cs=0x934;eip=0x001e18; 	R(JNZ(locret_19777));	// 18339 jnz     short locret_19777 ;~ 0934:1E18
cs=0x934;eip=0x001e1a; 	T(MOV(al, byte_38cdc));	// 18340 mov     al, byte_38CDC ;~ 0934:1E1A
cs=0x934;eip=0x001e1d; 	T(SUB(ah, ah));	// 18341 sub     ah, ah ;~ 0934:1E1D
cs=0x934;eip=0x001e1f; 	T(MOV(cx, ax));	// 18342 mov     cx, ax ;~ 0934:1E1F
cs=0x934;eip=0x001e21; 	T(SHL(ax, 1));	// 18343 shl     ax, 1 ;~ 0934:1E21
cs=0x934;eip=0x001e23; 	T(ADD(ax, cx));	// 18344 add     ax, cx ;~ 0934:1E23
cs=0x934;eip=0x001e25; 	T(SHL(ax, 1));	// 18345 shl     ax, 1 ;~ 0934:1E25
cs=0x934;eip=0x001e27; 	T(ADD(ax, 0x9E0));	// 18346 add     ax, 9E0h ;~ 0934:1E27
cs=0x934;eip=0x001e2a; 	X(PUSH(ax));	// 18347 push    ax ;~ 0934:1E2A
cs=0x934;eip=0x001e2b; 	T(MOV(ax, 0x0ACC));	// 18348 mov     ax, 0ACCh ;~ 0934:1E2B
cs=0x934;eip=0x001e2e; 	X(PUSH(ax));	// 18349 push    ax ;~ 0934:1E2E
cs=0x934;eip=0x001e2f; 	R(CALLF(sub_29b46,0));	// 18350 call    sub_29B46 ;~ 0934:1E2F
cs=0x934;eip=0x001e34; 	T(ADD(sp, 4));	// 18351 add     sp, 4 ;~ 0934:1E34
cs=0x934;eip=0x001e37; 	T(MOV(ax, 0x11FA));	// 18352 mov     ax, 11FAh ;~ 0934:1E37
cs=0x934;eip=0x001e3a; 	X(PUSH(ax));	// 18353 push    ax ;~ 0934:1E3A
cs=0x934;eip=0x001e3b; 	T(MOV(ax, 0x0AD1));	// 18354 mov     ax, 0AD1h ;~ 0934:1E3B
cs=0x934;eip=0x001e3e; 	X(PUSH(ax));	// 18355 push    ax ;~ 0934:1E3E
cs=0x934;eip=0x001e3f; 	R(CALLF(sub_29b46,0));	// 18356 call    sub_29B46 ;~ 0934:1E3F
cs=0x934;eip=0x001e44; 	T(ADD(sp, 4));	// 18357 add     sp, 4 ;~ 0934:1E44
cs=0x934;eip=0x001e47; 	T(MOV(ax, 0x0CEBC));	// 18358 mov     ax, 0CEBCh ;~ 0934:1E47
cs=0x934;eip=0x001e4a; 	X(PUSH(ax));	// 18359 push    ax ;~ 0934:1E4A
cs=0x934;eip=0x001e4b; 	T(MOV(ax, 0x0ACA));	// 18360 mov     ax, 0ACAh ;~ 0934:1E4B
cs=0x934;eip=0x001e4e; 	X(PUSH(ax));	// 18361 push    ax ;~ 0934:1E4E
cs=0x934;eip=0x001e4f; 	R(CALLF(sub_10e74,0));	// 18362 call    sub_10E74 ;~ 0934:1E4F
cs=0x934;eip=0x001e54; 	T(ADD(sp, 4));	// 18363 add     sp, 4 ;~ 0934:1E54
locret_19777:
	// 5306 
cs=0x934;eip=0x001e57; 	R(RETF(0));	// 18367 retf ;~ 0934:1E57

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_17992: 	goto loc_17992;
        case m2c::kloc_179aa: 	goto loc_179aa;
        case m2c::kloc_179ce: 	goto loc_179ce;
        case m2c::kloc_17a01: 	goto loc_17a01;
        case m2c::kloc_17a0c: 	goto loc_17a0c;
        case m2c::kloc_17a1c: 	goto loc_17a1c;
        case m2c::kloc_17a26: 	goto loc_17a26;
        case m2c::kloc_17a34: 	goto loc_17a34;
        case m2c::kloc_17a38: 	goto loc_17a38;
        case m2c::kloc_17a40: 	goto loc_17a40;
        case m2c::kloc_17a4c: 	goto loc_17a4c;
        case m2c::kloc_17a55: 	goto loc_17a55;
        case m2c::kloc_17a70: 	goto loc_17a70;
        case m2c::kloc_17aab: 	goto loc_17aab;
        case m2c::kloc_17ac2: 	goto loc_17ac2;
        case m2c::kloc_17adf: 	goto loc_17adf;
        case m2c::kloc_17af0: 	goto loc_17af0;
        case m2c::kloc_17b01: 	goto loc_17b01;
        case m2c::kloc_17b16: 	goto loc_17b16;
        case m2c::kloc_17b1b: 	goto loc_17b1b;
        case m2c::kloc_17b30: 	goto loc_17b30;
        case m2c::kloc_17b3e: 	goto loc_17b3e;
        case m2c::kloc_17b5a: 	goto loc_17b5a;
        case m2c::kloc_17b97: 	goto loc_17b97;
        case m2c::kloc_17baa: 	goto loc_17baa;
        case m2c::kloc_17be1: 	goto loc_17be1;
        case m2c::kloc_17be9: 	goto loc_17be9;
        case m2c::kloc_17bec: 	goto loc_17bec;
        case m2c::kloc_17bf8: 	goto loc_17bf8;
        case m2c::kloc_17c04: 	goto loc_17c04;
        case m2c::kloc_17c12: 	goto loc_17c12;
        case m2c::kloc_17c17: 	goto loc_17c17;
        case m2c::kloc_17c1d: 	goto loc_17c1d;
        case m2c::kloc_17c3d: 	goto loc_17c3d;
        case m2c::kloc_17c4b: 	goto loc_17c4b;
        case m2c::kloc_17c56: 	goto loc_17c56;
        case m2c::kloc_17c62: 	goto loc_17c62;
        case m2c::kloc_17c6e: 	goto loc_17c6e;
        case m2c::kloc_17c7a: 	goto loc_17c7a;
        case m2c::kloc_17c82: 	goto loc_17c82;
        case m2c::kloc_17c87: 	goto loc_17c87;
        case m2c::kloc_17c8e: 	goto loc_17c8e;
        case m2c::kloc_17c96: 	goto loc_17c96;
        case m2c::kloc_17ca7: 	goto loc_17ca7;
        case m2c::kloc_17cb3: 	goto loc_17cb3;
        case m2c::kloc_17cc2: 	goto loc_17cc2;
        case m2c::kloc_17cca: 	goto loc_17cca;
        case m2c::kloc_17cd4: 	goto loc_17cd4;
        case m2c::kloc_17cde: 	goto loc_17cde;
        case m2c::kloc_17cea: 	goto loc_17cea;
        case m2c::kloc_17d47: 	goto loc_17d47;
        case m2c::kloc_17d4e: 	goto loc_17d4e;
        case m2c::kloc_17d61: 	goto loc_17d61;
        case m2c::kloc_17d72: 	goto loc_17d72;
        case m2c::kloc_17d83: 	goto loc_17d83;
        case m2c::kloc_17dc9: 	goto loc_17dc9;
        case m2c::kloc_17dd5: 	goto loc_17dd5;
        case m2c::kloc_17de1: 	goto loc_17de1;
        case m2c::kloc_17de5: 	goto loc_17de5;
        case m2c::kloc_1802d: 	goto loc_1802d;
        case m2c::kloc_1806d: 	goto loc_1806d;
        case m2c::kloc_18094: 	goto loc_18094;
        case m2c::kloc_180ee: 	goto loc_180ee;
        case m2c::kloc_18152: 	goto loc_18152;
        case m2c::kloc_1819c: 	goto loc_1819c;
        case m2c::kloc_181ea: 	goto loc_181ea;
        case m2c::kloc_18200: 	goto loc_18200;
        case m2c::kloc_1821c: 	goto loc_1821c;
        case m2c::kloc_1838a: 	goto loc_1838a;
        case m2c::kloc_1838f: 	goto loc_1838f;
        case m2c::kloc_1863f: 	goto loc_1863f;
        case m2c::kloc_186ae: 	goto loc_186ae;
        case m2c::kloc_186be: 	goto loc_186be;
        case m2c::kloc_18742: 	goto loc_18742;
        case m2c::kloc_18777: 	goto loc_18777;
        case m2c::kloc_18780: 	goto loc_18780;
        case m2c::kloc_18789: 	goto loc_18789;
        case m2c::kloc_187a6: 	goto loc_187a6;
        case m2c::kloc_187bc: 	goto loc_187bc;
        case m2c::kloc_187c8: 	goto loc_187c8;
        case m2c::kloc_18830: 	goto loc_18830;
        case m2c::kloc_188b8: 	goto loc_188b8;
        case m2c::kloc_188d8: 	goto loc_188d8;
        case m2c::kloc_188e9: 	goto loc_188e9;
        case m2c::kloc_18924: 	goto loc_18924;
        case m2c::kloc_18939: 	goto loc_18939;
        case m2c::kloc_18945: 	goto loc_18945;
        case m2c::kloc_18953: 	goto loc_18953;
        case m2c::kloc_18960: 	goto loc_18960;
        case m2c::kloc_18963: 	goto loc_18963;
        case m2c::kloc_1897e: 	goto loc_1897e;
        case m2c::kloc_18982: 	goto loc_18982;
        case m2c::kloc_18990: 	goto loc_18990;
        case m2c::kloc_189a3: 	goto loc_189a3;
        case m2c::kloc_189b6: 	goto loc_189b6;
        case m2c::kloc_189c0: 	goto loc_189c0;
        case m2c::kloc_189d8: 	goto loc_189d8;
        case m2c::kloc_189fa: 	goto loc_189fa;
        case m2c::kloc_18a12: 	goto loc_18a12;
        case m2c::kloc_18a16: 	goto loc_18a16;
        case m2c::kloc_18a28: 	goto loc_18a28;
        case m2c::kloc_18a69: 	goto loc_18a69;
        case m2c::kloc_18ab0: 	goto loc_18ab0;
        case m2c::kloc_18b1e: 	goto loc_18b1e;
        case m2c::kloc_18b23: 	goto loc_18b23;
        case m2c::kloc_18c4a: 	goto loc_18c4a;
        case m2c::kloc_18c4f: 	goto loc_18c4f;
        case m2c::kloc_18c5b: 	goto loc_18c5b;
        case m2c::kloc_18c77: 	goto loc_18c77;
        case m2c::kloc_18c80: 	goto loc_18c80;
        case m2c::kloc_18c86: 	goto loc_18c86;
        case m2c::kloc_18c90: 	goto loc_18c90;
        case m2c::kloc_18c96: 	goto loc_18c96;
        case m2c::kloc_18cb1: 	goto loc_18cb1;
        case m2c::kloc_18cbd: 	goto loc_18cbd;
        case m2c::kloc_18d20: 	goto loc_18d20;
        case m2c::kloc_18d96: 	goto loc_18d96;
        case m2c::kloc_18da4: 	goto loc_18da4;
        case m2c::kloc_18f06: 	goto loc_18f06;
        case m2c::kloc_18f12: 	goto loc_18f12;
        case m2c::kloc_18fe0: 	goto loc_18fe0;
        case m2c::kloc_18ff6: 	goto loc_18ff6;
        case m2c::kloc_19002: 	goto loc_19002;
        case m2c::kloc_1902d: 	goto loc_1902d;
        case m2c::kloc_19040: 	goto loc_19040;
        case m2c::kloc_191ae: 	goto loc_191ae;
        case m2c::kloc_191b4: 	goto loc_191b4;
        case m2c::kloc_191f5: 	goto loc_191f5;
        case m2c::kloc_19296: 	goto loc_19296;
        case m2c::kloc_192a4: 	goto loc_192a4;
        case m2c::kloc_192b9: 	goto loc_192b9;
        case m2c::kloc_192de: 	goto loc_192de;
        case m2c::kloc_192e6: 	goto loc_192e6;
        case m2c::kloc_1932e: 	goto loc_1932e;
        case m2c::kloc_1933f: 	goto loc_1933f;
        case m2c::kloc_1939c: 	goto loc_1939c;
        case m2c::kloc_19454: 	goto loc_19454;
        case m2c::kloc_19560: 	goto loc_19560;
        case m2c::kloc_19567: 	goto loc_19567;
        case m2c::kloc_196cf: 	goto loc_196cf;
        case m2c::kloc_1971c: 	goto loc_1971c;
        case m2c::klocret_18a74: 	goto locret_18a74;
        case m2c::klocret_19777: 	goto locret_19777;
        case m2c::kret_934_10ab: 	goto ret_934_10ab;
        case m2c::kret_934_10cd: 	goto ret_934_10cd;
        case m2c::kret_934_1156: 	goto ret_934_1156;
        case m2c::kret_934_16c4: 	goto ret_934_16c4;
        case m2c::kret_934_18da: 	goto ret_934_18da;
        case m2c::kret_934_1952: 	goto ret_934_1952;
        case m2c::kret_934_19cd: 	goto ret_934_19cd;
        case m2c::kret_934_1a77: 	goto ret_934_1a77;
        case m2c::kret_934_1c03: 	goto ret_934_1c03;
        case m2c::kret_934_1c66: 	goto ret_934_1c66;
        case m2c::kret_934_1e03: 	goto ret_934_1e03;
        case m2c::kret_934_414: 	goto ret_934_414;
        case m2c::kret_934_4cf: 	goto ret_934_4cf;
        case m2c::kret_934_59c: 	goto ret_934_59c;
        case m2c::kret_934_841: 	goto ret_934_841;
        case m2c::kret_934_cee: 	goto ret_934_cee;
        case m2c::kret_934_fce: 	goto ret_934_fce;
        case m2c::ksub_1792c: 	goto sub_1792c;
        case m2c::ksub_17dea: 	goto sub_17dea;
        case m2c::ksub_17eba: 	goto sub_17eba;
        case m2c::ksub_17f22: 	goto sub_17f22;
        case m2c::ksub_1815c: 	goto sub_1815c;
        case m2c::ksub_18242: 	goto sub_18242;
        case m2c::ksub_1860c: 	goto sub_1860c;
        case m2c::ksub_1864e: 	goto sub_1864e;
        case m2c::ksub_189c6: 	goto sub_189c6;
        case m2c::ksub_189e8: 	goto sub_189e8;
        case m2c::ksub_18c30: 	goto sub_18c30;
        case m2c::ksub_18da8: 	goto sub_18da8;
        case m2c::ksub_18e7e: 	goto sub_18e7e;
        case m2c::ksub_18ef4: 	goto sub_18ef4;
        case m2c::ksub_192ea: 	goto sub_192ea;
        case m2c::ksub_19392: 	goto sub_19392;
        case m2c::ksub_19520: 	goto sub_19520;
        case m2c::ksub_1971e: 	goto sub_1971e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

