/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void sub_2f4ee(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_2f4ee:
    _begin:
#undef var_8
#define var_8 -8
	// 70750 var_8           = word ptr -8 ;~ 20F0:000E
#undef var_6
#define var_6 -6
	// 70751 var_6           = word ptr -6 ;~ 20F0:000E
#undef var_4
#define var_4 -4
	// 70752 var_4           = word ptr -4 ;~ 20F0:000E
#undef var_2
#define var_2 -2
	// 70753 var_2           = word ptr -2 ;~ 20F0:000E
#undef arg_0
#define arg_0 6
	// 70754 arg_0           = word ptr  6 ;~ 20F0:000E
#undef arg_2
#define arg_2 8
	// 70755 arg_2           = word ptr  8 ;~ 20F0:000E
#undef arg_4
#define arg_4 0x0A
	// 70756 arg_4           = word ptr  0Ah ;~ 20F0:000E
#undef arg_6
#define arg_6 0x0C
	// 70757 arg_6           = word ptr  0Ch ;~ 20F0:000E
#undef arg_8
#define arg_8 0x0E
	// 70758 arg_8           = dword ptr  0Eh ;~ 20F0:000E
cs=0x20f0;eip=0x00000e; 	X(PUSH(bp));	// 70760 push    bp ;~ 20F0:000E
cs=0x20f0;eip=0x00000f; 	T(MOV(bp, sp));	// 70761 mov     bp, sp ;~ 20F0:000F
cs=0x20f0;eip=0x000011; 	T(SUB(sp, 8));	// 70762 sub     sp, 8 ;~ 20F0:0011
cs=0x20f0;eip=0x000014; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 70763 cmp     [bp+arg_2], 0 ;~ 20F0:0014
cs=0x20f0;eip=0x000018; 	R(JG(loc_2f508));	// 70764 jg      short loc_2F508 ;~ 20F0:0018
cs=0x20f0;eip=0x00001a; 	R(JGE(loc_2f4ff));	// 70765 jge     short loc_2F4FF ;~ 20F0:001A
cs=0x20f0;eip=0x00001c; 	R(JMP(loc_2f605));	// 70766 jmp     loc_2F605 ;~ 20F0:001C
loc_2f4ff:
	// 8945 
cs=0x20f0;eip=0x00001f; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 70770 cmp     [bp+arg_0], 0 ;~ 20F0:001F
cs=0x20f0;eip=0x000023; 	R(JNZ(loc_2f508));	// 70771 jnz     short loc_2F508 ;~ 20F0:0023
cs=0x20f0;eip=0x000025; 	R(JMP(loc_2f605));	// 70772 jmp     loc_2F605 ;~ 20F0:0025
loc_2f508:
	// 8946 
cs=0x20f0;eip=0x000028; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 70777 cmp     [bp+arg_2], 0 ;~ 20F0:0028
cs=0x20f0;eip=0x00002c; 	R(JG(loc_2f578));	// 70778 jg      short loc_2F578 ;~ 20F0:002C
cs=0x20f0;eip=0x00002e; 	R(JL(loc_2f517));	// 70779 jl      short loc_2F517 ;~ 20F0:002E
cs=0x20f0;eip=0x000030; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x4000));	// 70780 cmp     [bp+arg_0], 4000h ;~ 20F0:0030
cs=0x20f0;eip=0x000035; 	R(JA(loc_2f578));	// 70781 ja      short loc_2F578 ;~ 20F0:0035
loc_2f517:
	// 8947 
cs=0x20f0;eip=0x000037; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 70784 mov     ax, [bp+arg_0] ;~ 20F0:0037
cs=0x20f0;eip=0x00003a; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 70785 mov     [bp+var_4], ax ;~ 20F0:003A
cs=0x20f0;eip=0x00003d; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0));	// 70786 cmp     [bp+arg_4], 0 ;~ 20F0:003D
cs=0x20f0;eip=0x000041; 	R(JZ(loc_2f547));	// 70787 jz      short loc_2F547 ;~ 20F0:0041
cs=0x20f0;eip=0x000043; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 70788 mov     [bp+var_2], 0 ;~ 20F0:0043
cs=0x20f0;eip=0x000048; 	T(ax = bp+var_4);	// 70789 lea     ax, [bp+var_4] ;~ 20F0:0048
cs=0x20f0;eip=0x00004b; 	X(PUSH(ax));	// 70790 push    ax ;~ 20F0:004B
cs=0x20f0;eip=0x00004c; 	T(MOV(ax, 0x106));	// 70791 mov     ax, 106h ;~ 20F0:004C
cs=0x20f0;eip=0x00004f; 	X(PUSH(ax));	// 70792 push    ax ;~ 20F0:004F
cs=0x20f0;eip=0x000050; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 70793 push    [bp+arg_4] ;~ 20F0:0050
cs=0x20f0;eip=0x000053; 	R(CALLF(sub_27d5d,0));	// 70794 call    sub_27D5D ;~ 20F0:0053
cs=0x20f0;eip=0x000058; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 70795 mov     ax, [bp+var_2] ;~ 20F0:0058
cs=0x20f0;eip=0x00005b; 	T(CWD);	// 70796 cwd ;~ 20F0:005B
cs=0x20f0;eip=0x00005c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 70797 les     bx, [bp+arg_8] ;~ 20F0:005C
cs=0x20f0;eip=0x00005f; 	X(ADD(*(dw*)(raddr(es,bx+4)), ax));	// 70798 add     es:[bx+4], ax ;~ 20F0:005F
cs=0x20f0;eip=0x000063; 	X(ADC(*(dw*)(raddr(es,bx+6)), dx));	// 70799 adc     es:[bx+6], dx ;~ 20F0:0063
loc_2f547:
	// 8948 
cs=0x20f0;eip=0x000067; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 70802 mov     [bp+var_8], 0 ;~ 20F0:0067
cs=0x20f0;eip=0x00006c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 70803 mov     ax, [bp+var_4] ;~ 20F0:006C
cs=0x20f0;eip=0x00006f; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 70804 mov     [bp+var_6], ax ;~ 20F0:006F
cs=0x20f0;eip=0x000072; 	T(ax = bp+var_8);	// 70805 lea     ax, [bp+var_8] ;~ 20F0:0072
cs=0x20f0;eip=0x000075; 	X(PUSH(ax));	// 70806 push    ax ;~ 20F0:0075
cs=0x20f0;eip=0x000076; 	T(MOV(ax, 0x106));	// 70807 mov     ax, 106h ;~ 20F0:0076
cs=0x20f0;eip=0x000079; 	X(PUSH(ax));	// 70808 push    ax ;~ 20F0:0079
cs=0x20f0;eip=0x00007a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 70809 push    [bp+arg_6] ;~ 20F0:007A
cs=0x20f0;eip=0x00007d; 	R(CALLF(sub_27d5d,0));	// 70810 call    sub_27D5D ;~ 20F0:007D
cs=0x20f0;eip=0x000082; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 70811 mov     ax, [bp+var_8] ;~ 20F0:0082
cs=0x20f0;eip=0x000085; 	T(CWD);	// 70812 cwd ;~ 20F0:0085
cs=0x20f0;eip=0x000086; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 70813 les     bx, [bp+arg_8] ;~ 20F0:0086
cs=0x20f0;eip=0x000089; 	X(ADD(*(dw*)(raddr(es,bx)), ax));	// 70814 add     es:[bx], ax ;~ 20F0:0089
cs=0x20f0;eip=0x00008c; 	X(ADC(*(dw*)(raddr(es,bx+2)), dx));	// 70815 adc     es:[bx+2], dx ;~ 20F0:008C
cs=0x20f0;eip=0x000090; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 70816 mov     ax, [bp+var_6] ;~ 20F0:0090
cs=0x20f0;eip=0x000093; 	T(CWD);	// 70817 cwd ;~ 20F0:0093
cs=0x20f0;eip=0x000094; 	R(JMP(loc_2f5fa));	// 70818 jmp     loc_2F5FA ;~ 20F0:0094
loc_2f578:
	// 8949 
cs=0x20f0;eip=0x000098; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 70824 mov     ax, [bp+arg_0] ;~ 20F0:0098
cs=0x20f0;eip=0x00009b; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 70825 mov     dx, [bp+arg_2] ;~ 20F0:009B
cs=0x20f0;eip=0x00009e; 	T(MOV(cl, 8));	// 70826 mov     cl, 8 ;~ 20F0:009E
loc_2f580:
	// 8950 
cs=0x20f0;eip=0x0000a0; 	T(SAR(dx, 1));	// 70829 sar     dx, 1 ;~ 20F0:00A0
cs=0x20f0;eip=0x0000a2; 	T(RCR(ax, 1));	// 70830 rcr     ax, 1 ;~ 20F0:00A2
cs=0x20f0;eip=0x0000a4; 	T(DEC(cl));	// 70831 dec     cl ;~ 20F0:00A4
cs=0x20f0;eip=0x0000a6; 	R(JNZ(loc_2f580));	// 70832 jnz     short loc_2F580 ;~ 20F0:00A6
cs=0x20f0;eip=0x0000a8; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 70833 mov     [bp+var_4], ax ;~ 20F0:00A8
cs=0x20f0;eip=0x0000ab; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0));	// 70834 cmp     [bp+arg_4], 0 ;~ 20F0:00AB
cs=0x20f0;eip=0x0000af; 	R(JZ(loc_2f5bd));	// 70835 jz      short loc_2F5BD ;~ 20F0:00AF
cs=0x20f0;eip=0x0000b1; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 70836 mov     [bp+var_2], 0 ;~ 20F0:00B1
cs=0x20f0;eip=0x0000b6; 	T(ax = bp+var_4);	// 70837 lea     ax, [bp+var_4] ;~ 20F0:00B6
cs=0x20f0;eip=0x0000b9; 	X(PUSH(ax));	// 70838 push    ax ;~ 20F0:00B9
cs=0x20f0;eip=0x0000ba; 	T(MOV(ax, 0x106));	// 70839 mov     ax, 106h ;~ 20F0:00BA
cs=0x20f0;eip=0x0000bd; 	X(PUSH(ax));	// 70840 push    ax ;~ 20F0:00BD
cs=0x20f0;eip=0x0000be; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 70841 push    [bp+arg_4] ;~ 20F0:00BE
cs=0x20f0;eip=0x0000c1; 	R(CALLF(sub_27d5d,0));	// 70842 call    sub_27D5D ;~ 20F0:00C1
cs=0x20f0;eip=0x0000c6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 70843 mov     ax, [bp+var_2] ;~ 20F0:00C6
cs=0x20f0;eip=0x0000c9; 	T(CWD);	// 70844 cwd ;~ 20F0:00C9
cs=0x20f0;eip=0x0000ca; 	T(MOV(dh, dl));	// 70845 mov     dh, dl ;~ 20F0:00CA
cs=0x20f0;eip=0x0000cc; 	T(MOV(dl, ah));	// 70846 mov     dl, ah ;~ 20F0:00CC
cs=0x20f0;eip=0x0000ce; 	T(MOV(ah, al));	// 70847 mov     ah, al ;~ 20F0:00CE
cs=0x20f0;eip=0x0000d0; 	T(SUB(al, al));	// 70848 sub     al, al ;~ 20F0:00D0
cs=0x20f0;eip=0x0000d2; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 70849 les     bx, [bp+arg_8] ;~ 20F0:00D2
cs=0x20f0;eip=0x0000d5; 	X(ADD(*(dw*)(raddr(es,bx+4)), ax));	// 70850 add     es:[bx+4], ax ;~ 20F0:00D5
cs=0x20f0;eip=0x0000d9; 	X(ADC(*(dw*)(raddr(es,bx+6)), dx));	// 70851 adc     es:[bx+6], dx ;~ 20F0:00D9
loc_2f5bd:
	// 8951 
cs=0x20f0;eip=0x0000dd; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 70854 mov     [bp+var_8], 0 ;~ 20F0:00DD
cs=0x20f0;eip=0x0000e2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 70855 mov     ax, [bp+var_4] ;~ 20F0:00E2
cs=0x20f0;eip=0x0000e5; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 70856 mov     [bp+var_6], ax ;~ 20F0:00E5
cs=0x20f0;eip=0x0000e8; 	T(ax = bp+var_8);	// 70857 lea     ax, [bp+var_8] ;~ 20F0:00E8
cs=0x20f0;eip=0x0000eb; 	X(PUSH(ax));	// 70858 push    ax ;~ 20F0:00EB
cs=0x20f0;eip=0x0000ec; 	T(MOV(ax, 0x106));	// 70859 mov     ax, 106h ;~ 20F0:00EC
cs=0x20f0;eip=0x0000ef; 	X(PUSH(ax));	// 70860 push    ax ;~ 20F0:00EF
cs=0x20f0;eip=0x0000f0; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 70861 push    [bp+arg_6] ;~ 20F0:00F0
cs=0x20f0;eip=0x0000f3; 	R(CALLF(sub_27d5d,0));	// 70862 call    sub_27D5D ;~ 20F0:00F3
cs=0x20f0;eip=0x0000f8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 70863 mov     ax, [bp+var_8] ;~ 20F0:00F8
cs=0x20f0;eip=0x0000fb; 	T(CWD);	// 70864 cwd ;~ 20F0:00FB
cs=0x20f0;eip=0x0000fc; 	T(MOV(dh, dl));	// 70865 mov     dh, dl ;~ 20F0:00FC
cs=0x20f0;eip=0x0000fe; 	T(MOV(dl, ah));	// 70866 mov     dl, ah ;~ 20F0:00FE
cs=0x20f0;eip=0x000100; 	T(MOV(ah, al));	// 70867 mov     ah, al ;~ 20F0:0100
cs=0x20f0;eip=0x000102; 	T(SUB(al, al));	// 70868 sub     al, al ;~ 20F0:0102
cs=0x20f0;eip=0x000104; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 70869 les     bx, [bp+arg_8] ;~ 20F0:0104
cs=0x20f0;eip=0x000107; 	X(ADD(*(dw*)(raddr(es,bx)), ax));	// 70870 add     es:[bx], ax ;~ 20F0:0107
cs=0x20f0;eip=0x00010a; 	X(ADC(*(dw*)(raddr(es,bx+2)), dx));	// 70871 adc     es:[bx+2], dx ;~ 20F0:010A
cs=0x20f0;eip=0x00010e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 70872 mov     ax, [bp+var_6] ;~ 20F0:010E
cs=0x20f0;eip=0x000111; 	T(CWD);	// 70873 cwd ;~ 20F0:0111
cs=0x20f0;eip=0x000112; 	T(MOV(dh, dl));	// 70874 mov     dh, dl ;~ 20F0:0112
cs=0x20f0;eip=0x000114; 	T(MOV(dl, ah));	// 70875 mov     dl, ah ;~ 20F0:0114
cs=0x20f0;eip=0x000116; 	T(MOV(ah, al));	// 70876 mov     ah, al ;~ 20F0:0116
cs=0x20f0;eip=0x000118; 	T(SUB(al, al));	// 70877 sub     al, al ;~ 20F0:0118
loc_2f5fa:
	// 8952 
cs=0x20f0;eip=0x00011a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 70880 les     bx, [bp+arg_8] ;~ 20F0:011A
cs=0x20f0;eip=0x00011d; 	X(ADD(*(dw*)(raddr(es,bx+8)), ax));	// 70881 add     es:[bx+8], ax ;~ 20F0:011D
cs=0x20f0;eip=0x000121; 	X(ADC(*(dw*)(raddr(es,bx+0x0A)), dx));	// 70882 adc     es:[bx+0Ah], dx ;~ 20F0:0121
loc_2f605:
	// 8953 
cs=0x20f0;eip=0x000125; 	T(MOV(sp, bp));	// 70886 mov     sp, bp ;~ 20F0:0125
cs=0x20f0;eip=0x000127; 	X(POP(bp));	// 70887 pop     bp ;~ 20F0:0127
cs=0x20f0;eip=0x000128; 	R(RETF(0x0C));	// 70888 retf    0Ch ;~ 20F0:0128

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_2f4ff: 	goto loc_2f4ff;
        case m2c::kloc_2f508: 	goto loc_2f508;
        case m2c::kloc_2f517: 	goto loc_2f517;
        case m2c::kloc_2f547: 	goto loc_2f547;
        case m2c::kloc_2f578: 	goto loc_2f578;
        case m2c::kloc_2f580: 	goto loc_2f580;
        case m2c::kloc_2f5bd: 	goto loc_2f5bd;
        case m2c::kloc_2f5fa: 	goto loc_2f5fa;
        case m2c::kloc_2f605: 	goto loc_2f605;
        case m2c::ksub_2f4ee: 	goto sub_2f4ee;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, _source);m2c::stackDump(_state); abort();
    };
}

