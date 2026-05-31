/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool _group16(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group16:
    _begin:
mat_rot_x:
	// 80856 
#undef var_4
#define var_4 -4
	// 80859 var_4           = word ptr -4 ;~ 2894:000A
#undef var_2
#define var_2 -2
	// 80860 var_2           = word ptr -2 ;~ 2894:000A
#undef arg_0
#define arg_0 6
	// 80861 arg_0           = word ptr  6 ;~ 2894:000A
#undef arg_2
#define arg_2 8
	// 80862 arg_2           = word ptr  8 ;~ 2894:000A
ret_2894_a:
	// 9992 
cs=0x2894;eip=0x00000a; 	X(PUSH(bp));	// 80864 push    bp ;~ 2894:000A
cs=0x2894;eip=0x00000b; 	T(MOV(bp, sp));	// 80865 mov     bp, sp ;~ 2894:000B
cs=0x2894;eip=0x00000d; 	T(SUB(sp, 4));	// 80866 sub     sp, 4 ;~ 2894:000D
cs=0x2894;eip=0x000010; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 80867 push    [bp+arg_2] ;~ 2894:0010
cs=0x2894;eip=0x000013; 	R(CALLF(cos_fast,0));	// 80868 call    cos_fast ;~ 2894:0013
cs=0x2894;eip=0x000018; 	T(ADD(sp, 2));	// 80869 add     sp, 2 ;~ 2894:0018
cs=0x2894;eip=0x00001b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 80870 mov     [bp+var_2], ax ;~ 2894:001B
cs=0x2894;eip=0x00001e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 80871 push    [bp+arg_2] ;~ 2894:001E
cs=0x2894;eip=0x000021; 	R(CALLF(sin_fast,0));	// 80872 call    sin_fast ;~ 2894:0021
cs=0x2894;eip=0x000026; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 80873 mov     [bp+var_4], ax ;~ 2894:0026
cs=0x2894;eip=0x000029; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 80874 mov     bx, [bp+arg_0] ;~ 2894:0029
cs=0x2894;eip=0x00002c; 	X(MOV(*(dw*)(raddr(ds,bx+0)), 0x4000));	// 80875 mov     word ptr [bx+0], 4000h ;~ 2894:002C
cs=0x2894;eip=0x000030; 	X(MOV(*(dw*)(raddr(ds,bx+2)), 0));	// 80876 mov     word ptr [bx+2], 0 ;~ 2894:0030
cs=0x2894;eip=0x000035; 	X(MOV(*(dw*)(raddr(ds,bx+4)), 0));	// 80877 mov     word ptr [bx+4], 0 ;~ 2894:0035
cs=0x2894;eip=0x00003a; 	X(MOV(*(dw*)(raddr(ds,bx+6)), 0));	// 80878 mov     word ptr [bx+6], 0 ;~ 2894:003A
cs=0x2894;eip=0x00003f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 80879 mov     ax, [bp+var_2] ;~ 2894:003F
cs=0x2894;eip=0x000042; 	X(MOV(*(dw*)(raddr(ds,bx+8)), ax));	// 80880 mov     [bx+8], ax ;~ 2894:0042
cs=0x2894;eip=0x000045; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 80881 mov     ax, [bp+var_4] ;~ 2894:0045
cs=0x2894;eip=0x000048; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), ax));	// 80882 mov     [bx+0Ah], ax ;~ 2894:0048
cs=0x2894;eip=0x00004b; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), 0));	// 80883 mov     word ptr [bx+0Ch], 0 ;~ 2894:004B
cs=0x2894;eip=0x000050; 	T(NEG(ax));	// 80884 neg     ax ;~ 2894:0050
cs=0x2894;eip=0x000052; 	X(MOV(*(dw*)(raddr(ds,bx+0x0E)), ax));	// 80885 mov     [bx+0Eh], ax ;~ 2894:0052
cs=0x2894;eip=0x000055; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 80886 mov     ax, [bp+var_2] ;~ 2894:0055
cs=0x2894;eip=0x000058; 	X(MOV(*(dw*)(raddr(ds,bx+0x10)), ax));	// 80887 mov     [bx+10h], ax ;~ 2894:0058
cs=0x2894;eip=0x00005b; 	T(MOV(sp, bp));	// 80888 mov     sp, bp ;~ 2894:005B
cs=0x2894;eip=0x00005d; 	X(POP(bp));	// 80889 pop     bp ;~ 2894:005D
cs=0x2894;eip=0x00005e; 	R(RETF(0));	// 80890 retf ;~ 2894:005E
mat_rot_y:
	// 80900 
#undef var_4
#define var_4 -4
	// 80903 var_4           = word ptr -4 ;~ 2894:0060
#undef var_2
#define var_2 -2
	// 80904 var_2           = word ptr -2 ;~ 2894:0060
#undef arg_0
#define arg_0 6
	// 80905 arg_0           = word ptr  6 ;~ 2894:0060
#undef arg_2
#define arg_2 8
	// 80906 arg_2           = word ptr  8 ;~ 2894:0060
ret_2894_60:
	// 9993 
cs=0x2894;eip=0x000060; 	X(PUSH(bp));	// 80908 push    bp ;~ 2894:0060
cs=0x2894;eip=0x000061; 	T(MOV(bp, sp));	// 80909 mov     bp, sp ;~ 2894:0061
cs=0x2894;eip=0x000063; 	T(SUB(sp, 4));	// 80910 sub     sp, 4 ;~ 2894:0063
cs=0x2894;eip=0x000066; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 80911 push    [bp+arg_2] ;~ 2894:0066
cs=0x2894;eip=0x000069; 	R(CALLF(cos_fast,0));	// 80912 call    cos_fast ;~ 2894:0069
cs=0x2894;eip=0x00006e; 	T(ADD(sp, 2));	// 80913 add     sp, 2 ;~ 2894:006E
cs=0x2894;eip=0x000071; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 80914 mov     [bp+var_2], ax ;~ 2894:0071
cs=0x2894;eip=0x000074; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 80915 push    [bp+arg_2] ;~ 2894:0074
cs=0x2894;eip=0x000077; 	R(CALLF(sin_fast,0));	// 80916 call    sin_fast ;~ 2894:0077
cs=0x2894;eip=0x00007c; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 80917 mov     [bp+var_4], ax ;~ 2894:007C
cs=0x2894;eip=0x00007f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 80918 mov     bx, [bp+arg_0] ;~ 2894:007F
cs=0x2894;eip=0x000082; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 80919 mov     ax, [bp+var_2] ;~ 2894:0082
cs=0x2894;eip=0x000085; 	X(MOV(*(dw*)(raddr(ds,bx+0)), ax));	// 80920 mov     [bx+0], ax ;~ 2894:0085
cs=0x2894;eip=0x000087; 	X(MOV(*(dw*)(raddr(ds,bx+2)), 0));	// 80921 mov     word ptr [bx+2], 0 ;~ 2894:0087
cs=0x2894;eip=0x00008c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 80922 mov     ax, [bp+var_4] ;~ 2894:008C
cs=0x2894;eip=0x00008f; 	T(NEG(ax));	// 80923 neg     ax ;~ 2894:008F
cs=0x2894;eip=0x000091; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 80924 mov     [bx+4], ax ;~ 2894:0091
cs=0x2894;eip=0x000094; 	X(MOV(*(dw*)(raddr(ds,bx+6)), 0));	// 80925 mov     word ptr [bx+6], 0 ;~ 2894:0094
cs=0x2894;eip=0x000099; 	X(MOV(*(dw*)(raddr(ds,bx+8)), 0x4000));	// 80926 mov     word ptr [bx+8], 4000h ;~ 2894:0099
cs=0x2894;eip=0x00009e; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), 0));	// 80927 mov     word ptr [bx+0Ah], 0 ;~ 2894:009E
cs=0x2894;eip=0x0000a3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 80928 mov     ax, [bp+var_4] ;~ 2894:00A3
cs=0x2894;eip=0x0000a6; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), ax));	// 80929 mov     [bx+0Ch], ax ;~ 2894:00A6
cs=0x2894;eip=0x0000a9; 	X(MOV(*(dw*)(raddr(ds,bx+0x0E)), 0));	// 80930 mov     word ptr [bx+0Eh], 0 ;~ 2894:00A9
cs=0x2894;eip=0x0000ae; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 80931 mov     ax, [bp+var_2] ;~ 2894:00AE
cs=0x2894;eip=0x0000b1; 	X(MOV(*(dw*)(raddr(ds,bx+0x10)), ax));	// 80932 mov     [bx+10h], ax ;~ 2894:00B1
cs=0x2894;eip=0x0000b4; 	T(MOV(sp, bp));	// 80933 mov     sp, bp ;~ 2894:00B4
cs=0x2894;eip=0x0000b6; 	X(POP(bp));	// 80934 pop     bp ;~ 2894:00B6
cs=0x2894;eip=0x0000b7; 	R(RETF(0));	// 80935 retf ;~ 2894:00B7
mat_rot_z:
	// 80943 
#undef var_4
#define var_4 -4
	// 80945 var_4           = word ptr -4 ;~ 2894:00B8
#undef var_2
#define var_2 -2
	// 80946 var_2           = word ptr -2 ;~ 2894:00B8
#undef arg_0
#define arg_0 6
	// 80947 arg_0           = word ptr  6 ;~ 2894:00B8
#undef arg_2
#define arg_2 8
	// 80948 arg_2           = word ptr  8 ;~ 2894:00B8
ret_2894_b8:
	// 9994 
cs=0x2894;eip=0x0000b8; 	X(PUSH(bp));	// 80950 push    bp ;~ 2894:00B8
cs=0x2894;eip=0x0000b9; 	T(MOV(bp, sp));	// 80951 mov     bp, sp ;~ 2894:00B9
cs=0x2894;eip=0x0000bb; 	T(SUB(sp, 4));	// 80952 sub     sp, 4 ;~ 2894:00BB
cs=0x2894;eip=0x0000be; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 80953 push    [bp+arg_2] ;~ 2894:00BE
cs=0x2894;eip=0x0000c1; 	R(CALLF(cos_fast,0));	// 80954 call    cos_fast ;~ 2894:00C1
cs=0x2894;eip=0x0000c6; 	T(ADD(sp, 2));	// 80955 add     sp, 2 ;~ 2894:00C6
cs=0x2894;eip=0x0000c9; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 80956 mov     [bp+var_2], ax ;~ 2894:00C9
cs=0x2894;eip=0x0000cc; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 80957 push    [bp+arg_2] ;~ 2894:00CC
cs=0x2894;eip=0x0000cf; 	R(CALLF(sin_fast,0));	// 80958 call    sin_fast ;~ 2894:00CF
cs=0x2894;eip=0x0000d4; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 80959 mov     [bp+var_4], ax ;~ 2894:00D4
cs=0x2894;eip=0x0000d7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 80960 mov     bx, [bp+arg_0] ;~ 2894:00D7
cs=0x2894;eip=0x0000da; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 80961 mov     ax, [bp+var_2] ;~ 2894:00DA
cs=0x2894;eip=0x0000dd; 	X(MOV(*(dw*)(raddr(ds,bx+0)), ax));	// 80962 mov     [bx+0], ax ;~ 2894:00DD
cs=0x2894;eip=0x0000df; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 80963 mov     ax, [bp+var_4] ;~ 2894:00DF
cs=0x2894;eip=0x0000e2; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 80964 mov     [bx+2], ax ;~ 2894:00E2
cs=0x2894;eip=0x0000e5; 	X(MOV(*(dw*)(raddr(ds,bx+4)), 0));	// 80965 mov     word ptr [bx+4], 0 ;~ 2894:00E5
cs=0x2894;eip=0x0000ea; 	T(NEG(ax));	// 80966 neg     ax ;~ 2894:00EA
cs=0x2894;eip=0x0000ec; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 80967 mov     [bx+6], ax ;~ 2894:00EC
cs=0x2894;eip=0x0000ef; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 80968 mov     ax, [bp+var_2] ;~ 2894:00EF
cs=0x2894;eip=0x0000f2; 	X(MOV(*(dw*)(raddr(ds,bx+8)), ax));	// 80969 mov     [bx+8], ax ;~ 2894:00F2
cs=0x2894;eip=0x0000f5; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), 0));	// 80970 mov     word ptr [bx+0Ah], 0 ;~ 2894:00F5
cs=0x2894;eip=0x0000fa; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), 0));	// 80971 mov     word ptr [bx+0Ch], 0 ;~ 2894:00FA
cs=0x2894;eip=0x0000ff; 	X(MOV(*(dw*)(raddr(ds,bx+0x0E)), 0));	// 80972 mov     word ptr [bx+0Eh], 0 ;~ 2894:00FF
cs=0x2894;eip=0x000104; 	X(MOV(*(dw*)(raddr(ds,bx+0x10)), 0x4000));	// 80973 mov     word ptr [bx+10h], 4000h ;~ 2894:0104
cs=0x2894;eip=0x000109; 	T(MOV(sp, bp));	// 80974 mov     sp, bp ;~ 2894:0109
cs=0x2894;eip=0x00010b; 	X(POP(bp));	// 80975 pop     bp ;~ 2894:010B
cs=0x2894;eip=0x00010c; 	R(RETF(0));	// 80976 retf ;~ 2894:010C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return true;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kmat_rot_x: 	goto mat_rot_x;
        case m2c::kmat_rot_z: 	goto mat_rot_z;
        case m2c::kret_2894_60: 	goto ret_2894_60;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

