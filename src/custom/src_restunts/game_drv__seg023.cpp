/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool prerender_wheel_helper(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    prerender_wheel_helper:
    _begin:
#undef var_a
#define var_a -0x0A
	// 80790 var_A           = word ptr -0Ah ;~ 288E:0000
#undef var_8
#define var_8 -8
	// 80791 var_8           = word ptr -8 ;~ 288E:0000
#undef var_6
#define var_6 -6
	// 80792 var_6           = word ptr -6 ;~ 288E:0000
#undef var_4
#define var_4 -4
	// 80793 var_4           = word ptr -4 ;~ 288E:0000
#undef var_2
#define var_2 -2
	// 80794 var_2           = word ptr -2 ;~ 288E:0000
#undef arg_0
#define arg_0 6
	// 80795 arg_0           = word ptr  6 ;~ 288E:0000
#undef arg_2
#define arg_2 8
	// 80796 arg_2           = word ptr  8 ;~ 288E:0000
#undef arg_4
#define arg_4 0x0A
	// 80797 arg_4           = word ptr  0Ah ;~ 288E:0000
ret_288e_0:
	// 9990 
cs=0x288e;eip=0x000000; 	X(PUSH(bp));	// 80799 push    bp ;~ 288E:0000
cs=0x288e;eip=0x000001; 	T(MOV(bp, sp));	// 80800 mov     bp, sp ;~ 288E:0001
cs=0x288e;eip=0x000003; 	T(SUB(sp, 0x0A));	// 80801 sub     sp, 0Ah ;~ 288E:0003
cs=0x288e;eip=0x000006; 	X(PUSH(si));	// 80802 push    si ;~ 288E:0006
cs=0x288e;eip=0x000007; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 80803 push    [bp+arg_4] ;~ 288E:0007
cs=0x288e;eip=0x00000a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 80804 push    [bp+arg_2] ;~ 288E:000A
cs=0x288e;eip=0x00000d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 80805 push    [bp+arg_0] ;~ 288E:000D
cs=0x288e;eip=0x000010; 	R(CALLF(prerender_wheel_helper2,0));	// 80806 call    preRender_wheel_helper2 ;~ 288E:0010
cs=0x288e;eip=0x000015; 	T(ADD(sp, 6));	// 80807 add     sp, 6 ;~ 288E:0015
cs=0x288e;eip=0x000018; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 80808 mov     bx, [bp+arg_0] ;~ 288E:0018
cs=0x288e;eip=0x00001b; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0C))));	// 80809 mov     ax, [bx+0Ch] ;~ 288E:001B
cs=0x288e;eip=0x00001e; 	T(SUB(ax, *(dw*)(raddr(ds,bx))));	// 80810 sub     ax, [bx] ;~ 288E:001E
cs=0x288e;eip=0x000020; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 80811 mov     [bp+var_8], ax ;~ 288E:0020
cs=0x288e;eip=0x000023; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0E))));	// 80812 mov     ax, [bx+0Eh] ;~ 288E:0023
cs=0x288e;eip=0x000026; 	T(SUB(ax, *(dw*)(raddr(ds,bx+2))));	// 80813 sub     ax, [bx+2] ;~ 288E:0026
cs=0x288e;eip=0x000029; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 80814 mov     [bp+var_A], ax ;~ 288E:0029
cs=0x288e;eip=0x00002c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 80815 mov     ax, [bp+arg_2] ;~ 288E:002C
cs=0x288e;eip=0x00002f; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 80816 mov     [bp+var_2], ax ;~ 288E:002F
cs=0x288e;eip=0x000032; 	T(ADD(ax, 0x80));	// 80817 add     ax, 80h ; '€' ;~ 288E:0032
cs=0x288e;eip=0x000035; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 80818 mov     [bp+var_4], ax ;~ 288E:0035
cs=0x288e;eip=0x000038; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0));	// 80819 mov     [bp+var_6], 0 ;~ 288E:0038
loc_36efd:
	// 9991 
cs=0x288e;eip=0x00003d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 80822 mov     bx, [bp+var_4] ;~ 288E:003D
cs=0x288e;eip=0x000040; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_2))));	// 80823 mov     si, [bp+var_2] ;~ 288E:0040
cs=0x288e;eip=0x000043; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 80824 mov     ax, [si] ;~ 288E:0043
cs=0x288e;eip=0x000045; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_8))));	// 80825 add     ax, [bp+var_8] ;~ 288E:0045
cs=0x288e;eip=0x000048; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 80826 mov     [bx], ax ;~ 288E:0048
cs=0x288e;eip=0x00004a; 	T(MOV(ax, *(dw*)(raddr(ds,si+2))));	// 80827 mov     ax, [si+2] ;~ 288E:004A
cs=0x288e;eip=0x00004d; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_a))));	// 80828 add     ax, [bp+var_A] ;~ 288E:004D
cs=0x288e;eip=0x000050; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 80829 mov     [bx+2], ax ;~ 288E:0050
cs=0x288e;eip=0x000053; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), 4));	// 80830 add     [bp+var_2], 4 ;~ 288E:0053
cs=0x288e;eip=0x000057; 	X(ADD(*(dw*)(raddr(ss,bp+var_4)), 4));	// 80831 add     [bp+var_4], 4 ;~ 288E:0057
cs=0x288e;eip=0x00005b; 	X(INC(*(dw*)(raddr(ss,bp+var_6))));	// 80832 inc     [bp+var_6] ;~ 288E:005B
cs=0x288e;eip=0x00005e; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0x10));	// 80833 cmp     [bp+var_6], 10h ;~ 288E:005E
cs=0x288e;eip=0x000062; 	R(JL(loc_36efd));	// 80834 jl      short loc_36EFD ;~ 288E:0062
cs=0x288e;eip=0x000064; 	X(POP(si));	// 80835 pop     si ;~ 288E:0064
cs=0x288e;eip=0x000065; 	T(MOV(sp, bp));	// 80836 mov     sp, bp ;~ 288E:0065
cs=0x288e;eip=0x000067; 	X(POP(bp));	// 80837 pop     bp ;~ 288E:0067
cs=0x288e;eip=0x000068; 	R(RETF(0));	// 80838 retf ;~ 288E:0068

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return true;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_36efd: 	goto loc_36efd;
        case m2c::kret_288e_0: 	goto ret_288e_0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

