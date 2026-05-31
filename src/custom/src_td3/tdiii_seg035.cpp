/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool _group24(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group24:
    _begin:
sub_29373:
	// 48787 
cs=0x1ad9;eip=0x000003; 	X(PUSH(di));	// 48788 push    di ;~ 1AD9:0003
ret_1ad9_4:
	// 7876 
cs=0x1ad9;eip=0x000004; 	T(CLD);	// 48789 cld ;~ 1AD9:0004
cs=0x1ad9;eip=0x000005; 	T(MOV(ax, word_37bc8));	// 48790 mov     ax, word_37BC8 ;~ 1AD9:0005
cs=0x1ad9;eip=0x000008; 	T(MOV(es, ax));	// 48791 mov     es, ax ;~ 1AD9:0008
cs=0x1ad9;eip=0x00000a; 	T(MOV(cx, word_37fec));	// 48793 mov     cx, word_37FEC ;~ 1AD9:000A
cs=0x1ad9;eip=0x00000e; 	T(XOR(di, di));	// 48794 xor     di, di ;~ 1AD9:000E
cs=0x1ad9;eip=0x000010; 	T(bx = offset(dseg,aokelz));	// 48795 lea     bx, aOkeLz      ; "OKE.LZ" ;~ 1AD9:0010
cs=0x1ad9;eip=0x000014; 	T(ADD(bx, word_37b84));	// 48796 add     bx, word_37B84 ;~ 1AD9:0014
cs=0x1ad9;eip=0x000018; __disp=*(dw*)(raddr(cs,bx));
	R(JMP(__dispatch_call));	// 48797 jmp     word ptr cs:[bx] ;~ 1AD9:0018
seg035_proc:
	// 48802 
loc_2938b:
	// 7877 
cs=0x1ad9;eip=0x00001b; 	T(MOV(al, 0x20));	// 48803 mov     al, 20h ; ' ' ;~ 1AD9:001B
cs=0x1ad9;eip=0x00001d; 	T(MOV(ah, 7));	// 48804 mov     ah, 7 ;~ 1AD9:001D
cs=0x1ad9;eip=0x00001f; 	T(SHR(cx, 1));	// 48805 shr     cx, 1 ;~ 1AD9:001F
	// 48806 rep stosw ;~ 1AD9:0021
cs=0x1ad9;eip=0x000021; 	X(	REP STOSW);	// 48806 rep stosw ;~ 1AD9:0021
cs=0x1ad9;eip=0x000023; 	T(XOR(ax, ax));	// 48807 xor     ax, ax ;~ 1AD9:0023
cs=0x1ad9;eip=0x000025; 	X(POP(di));	// 48808 pop     di ;~ 1AD9:0025
cs=0x1ad9;eip=0x000026; 	R(RETF(0));	// 48809 retf ;~ 1AD9:0026
loc_29397:
	// 7878 
cs=0x1ad9;eip=0x000027; 	T(XOR(ax, ax));	// 48813 xor     ax, ax ;~ 1AD9:0027
cs=0x1ad9;eip=0x000029; 	T(SHR(cx, 1));	// 48814 shr     cx, 1 ;~ 1AD9:0029
	// 48815 rep stosw ;~ 1AD9:002B
cs=0x1ad9;eip=0x00002b; 	X(	REP STOSW);	// 48815 rep stosw ;~ 1AD9:002B
cs=0x1ad9;eip=0x00002d; 	X(POP(di));	// 48816 pop     di ;~ 1AD9:002D
cs=0x1ad9;eip=0x00002e; 	R(RETF(0));	// 48817 retf ;~ 1AD9:002E
loc_2939f:
	// 7879 
cs=0x1ad9;eip=0x00002f; 	X(PUSH(ax));	// 48821 push    ax ;~ 1AD9:002F
cs=0x1ad9;eip=0x000030; 	T(MOV(al, 5));	// 48822 mov     al, 5 ;~ 1AD9:0030
cs=0x1ad9;eip=0x000032; 	T(MOV(ah, 2));	// 48823 mov     ah, 2 ;~ 1AD9:0032
cs=0x1ad9;eip=0x000034; 	X(PUSH(dx));	// 48824 push    dx ;~ 1AD9:0034
cs=0x1ad9;eip=0x000035; 	T(MOV(dx, 0x3CE));	// 48825 mov     dx, 3CEh ;~ 1AD9:0035
cs=0x1ad9;eip=0x000038; 	R(OUT(dx, ax));	// 48826 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1AD9:0038
cs=0x1ad9;eip=0x000039; 	X(POP(dx));	// 48828 pop     dx ;~ 1AD9:0039
cs=0x1ad9;eip=0x00003a; 	X(POP(ax));	// 48829 pop     ax ;~ 1AD9:003A
cs=0x1ad9;eip=0x00003b; 	X(PUSH(ax));	// 48830 push    ax ;~ 1AD9:003B
cs=0x1ad9;eip=0x00003c; 	T(MOV(al, 8));	// 48831 mov     al, 8 ;~ 1AD9:003C
cs=0x1ad9;eip=0x00003e; 	T(MOV(ah, 0x0FF));	// 48832 mov     ah, 0FFh ;~ 1AD9:003E
cs=0x1ad9;eip=0x000040; 	X(PUSH(dx));	// 48833 push    dx ;~ 1AD9:0040
cs=0x1ad9;eip=0x000041; 	T(MOV(dx, 0x3CE));	// 48834 mov     dx, 3CEh ;~ 1AD9:0041
cs=0x1ad9;eip=0x000044; 	R(OUT(dx, ax));	// 48835 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1AD9:0044
cs=0x1ad9;eip=0x000045; 	X(POP(dx));	// 48837 pop     dx ;~ 1AD9:0045
cs=0x1ad9;eip=0x000046; 	X(POP(ax));	// 48838 pop     ax ;~ 1AD9:0046
cs=0x1ad9;eip=0x000047; 	T(XOR(ax, ax));	// 48839 xor     ax, ax ;~ 1AD9:0047
loc_293b9:
	// 7880 
cs=0x1ad9;eip=0x000049; 	T(MOV(dl, *(raddr(es,di))));	// 48842 mov     dl, es:[di] ;~ 1AD9:0049
cs=0x1ad9;eip=0x00004c; 	X(STOSB);	// 48843 stosb ;~ 1AD9:004C
cs=0x1ad9;eip=0x00004d; 	R(LOOP(loc_293b9));	// 48844 loop    loc_293B9 ;~ 1AD9:004D
cs=0x1ad9;eip=0x00004f; 	X(PUSH(ax));	// 48845 push    ax ;~ 1AD9:004F
cs=0x1ad9;eip=0x000050; 	T(MOV(al, 5));	// 48846 mov     al, 5 ;~ 1AD9:0050
cs=0x1ad9;eip=0x000052; 	T(MOV(ah, 0));	// 48847 mov     ah, 0 ;~ 1AD9:0052
cs=0x1ad9;eip=0x000054; 	X(PUSH(dx));	// 48848 push    dx ;~ 1AD9:0054
cs=0x1ad9;eip=0x000055; 	T(MOV(dx, 0x3CE));	// 48849 mov     dx, 3CEh ;~ 1AD9:0055
cs=0x1ad9;eip=0x000058; 	R(OUT(dx, ax));	// 48850 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1AD9:0058
cs=0x1ad9;eip=0x000059; 	X(POP(dx));	// 48857 pop     dx ;~ 1AD9:0059
cs=0x1ad9;eip=0x00005a; 	X(POP(ax));	// 48858 pop     ax ;~ 1AD9:005A
cs=0x1ad9;eip=0x00005b; 	X(POP(di));	// 48859 pop     di ;~ 1AD9:005B
cs=0x1ad9;eip=0x00005c; 	R(RETF(0));	// 48860 retf ;~ 1AD9:005C
loc_293cd:
	// 7881 
cs=0x1ad9;eip=0x00005d; 	T(MOV(dx, 0x3C4));	// 48864 mov     dx, 3C4h ;~ 1AD9:005D
cs=0x1ad9;eip=0x000060; 	T(MOV(al, 2));	// 48865 mov     al, 2 ;~ 1AD9:0060
cs=0x1ad9;eip=0x000062; 	T(MOV(ah, 0x0F));	// 48866 mov     ah, 0Fh ;~ 1AD9:0062
cs=0x1ad9;eip=0x000064; 	R(OUT(dx, ax));	// 48867 out     dx, ax          ; EGA: sequencer address reg ;~ 1AD9:0064
cs=0x1ad9;eip=0x000065; 	T(XOR(ax, ax));	// 48869 xor     ax, ax ;~ 1AD9:0065
cs=0x1ad9;eip=0x000067; 	T(SHR(cx, 1));	// 48870 shr     cx, 1 ;~ 1AD9:0067
	// 48871 rep stosw ;~ 1AD9:0069
cs=0x1ad9;eip=0x000069; 	X(	REP STOSW);	// 48871 rep stosw ;~ 1AD9:0069
cs=0x1ad9;eip=0x00006b; 	X(POP(di));	// 48872 pop     di ;~ 1AD9:006B
cs=0x1ad9;eip=0x00006c; 	R(RETF(0));	// 48873 retf ;~ 1AD9:006C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_29397: 	goto loc_29397;
        case m2c::kloc_2939f: 	goto loc_2939f;
        case m2c::kloc_293b9: 	goto loc_293b9;
        case m2c::kloc_293cd: 	goto loc_293cd;
        case m2c::kret_1ad9_4: 	goto ret_1ad9_4;
        case m2c::kseg035_proc: 	goto seg035_proc;
        case m2c::ksub_29373: 	goto sub_29373;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

