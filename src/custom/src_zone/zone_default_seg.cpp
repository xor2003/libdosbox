/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "zone.h"

                

 bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
cs=0x192;eip=0x000100; 	T(MOV(ax, 0x3D00));	// 30 mov     ax, 3D00h ;~ 0192:0100
ret_192_103:
	// 4369 
cs=0x192;eip=0x000103; 	T(MOV(dx, 0x1F0));	// 31 mov     dx, 1F0h ;~ 0192:0103
cs=0x192;eip=0x000106; 	R(_INT(0x21));	// 32 int     21h             ; DOS - 2+ - OPEN DISK FILE WITH HANDLE ;~ 0192:0106
cs=0x192;eip=0x000108; 	T(MOV(sp, 0x2FE));	// 36 mov     sp, 2FEh ;~ 0192:0108
cs=0x192;eip=0x00010b; 	T(MOV(bx, ax));	// 37 mov     bx, ax ;~ 0192:010B
cs=0x192;eip=0x00010d; 	T(MOV(ax, cs));	// 38 mov     ax, cs ;~ 0192:010D
cs=0x192;eip=0x00010f; 	T(ADD(ax, 0x40));	// 39 add     ax, 40h ; '@' ;~ 0192:010F
cs=0x192;eip=0x000112; 	T(MOV(ds, ax));	// 40 mov     ds, ax ;~ 0192:0112
cs=0x192;eip=0x000114; 	T(MOV(cx, 0x9000));	// 42 mov     cx, 9000h ;~ 0192:0114
cs=0x192;eip=0x000117; 	T(MOV(dx, 0));	// 43 mov     dx, 0 ;~ 0192:0117
cs=0x192;eip=0x00011a; 	T(MOV(ax, 0x3F00));	// 44 mov     ax, 3F00h ;~ 0192:011A
cs=0x192;eip=0x00011d; 	R(_INT(0x21));	// 45 int     21h             ; DOS - 2+ - READ FROM FILE WITH HANDLE ;~ 0192:011D
cs=0x192;eip=0x00011f; 	T(MOV(ax, ds));	// 48 mov     ax, ds ;~ 0192:011F
cs=0x192;eip=0x000121; 	T(ADD(ax, 0x900));	// 49 add     ax, 900h ;~ 0192:0121
cs=0x192;eip=0x000124; 	T(MOV(ds, ax));	// 50 mov     ds, ax ;~ 0192:0124
cs=0x192;eip=0x000126; 	T(MOV(cx, 0x9000));	// 52 mov     cx, 9000h ;~ 0192:0126
cs=0x192;eip=0x000129; 	T(MOV(dx, 0));	// 53 mov     dx, 0 ;~ 0192:0129
cs=0x192;eip=0x00012c; 	T(MOV(ax, 0x3F00));	// 54 mov     ax, 3F00h ;~ 0192:012C
cs=0x192;eip=0x00012f; 	R(_INT(0x21));	// 55 int     21h             ; DOS - 2+ - READ FROM FILE WITH HANDLE ;~ 0192:012F
cs=0x192;eip=0x000131; 	T(MOV(ax, 0x3E00));	// 58 mov     ax, 3E00h ;~ 0192:0131
cs=0x192;eip=0x000134; 	R(_INT(0x21));	// 59 int     21h             ; DOS - 2+ - CLOSE A FILE WITH HANDLE ;~ 0192:0134
cs=0x192;eip=0x000136; 	T(XOR(ax, ax));	// 61 xor     ax, ax ;~ 0192:0136
cs=0x192;eip=0x000138; 	T(MOV(di, 0x300));	// 62 mov     di, 300h ;~ 0192:0138
cs=0x192;eip=0x00013b; 	T(MOV(cx, 0x100));	// 63 mov     cx, 100h ;~ 0192:013B
	// 64 rep stosb ;~ 0192:013E
cs=0x192;eip=0x00013e; 	X(	REP STOSB);	// 64 rep stosb ;~ 0192:013E
cs=0x192;eip=0x000140; 	T(MOV(ax, cs));	// 65 mov     ax, cs ;~ 0192:0140
cs=0x192;eip=0x000142; 	T(ADD(ax, 0x30));	// 66 add     ax, 30h ; '0' ;~ 0192:0142
cs=0x192;eip=0x000145; 	T(MOV(ds, ax));	// 67 mov     ds, ax ;~ 0192:0145
cs=0x192;eip=0x000147; 	T(ADD(ax, 0x10));	// 69 add     ax, 10h ;~ 0192:0147
cs=0x192;eip=0x00014a; 	X(MOV(*(dw*)(raddr(ds,m2c::kloc_14036+1)), ax));	// 70 mov     word ptr loc_14036+1, ax ;~ 0192:014A
cs=0x192;eip=0x00014d; 	T(ADD(ax, 0x434));	// 71 add     ax, 434h ;~ 0192:014D
cs=0x192;eip=0x000150; 	X(MOV(*(dw*)(raddr(ds,m2c::kloc_1036c+1)), ax));	// 72 mov     word ptr loc_1036C+1, ax ;~ 0192:0150
cs=0x192;eip=0x000153; 	X(MOV(*(dw*)(raddr(ds,m2c::kloc_13f3e +1)), ax));	// 73 mov     word ptr loc_13F3E+1, ax ;~ 0192:0153
cs=0x192;eip=0x000156; 	X(MOV(*(dw*)(raddr(ds,m2c::kloc_14145+1)), ax));	// 74 mov     word ptr loc_14145+1, ax ;~ 0192:0156
cs=0x192;eip=0x000159; 	X(MOV(*(dw*)(raddr(ds,m2c::kloc_14217+1)), ax));	// 75 mov     word ptr loc_14217+1, ax ;~ 0192:0159
cs=0x192;eip=0x00015c; 	X(MOV(*(dw*)(raddr(ds,m2c::kloc_1225c+1)), ax));	// 76 mov     word ptr loc_1225C+1, ax ;~ 0192:015C
cs=0x192;eip=0x00015f; 	T(ADD(ax, 0x0C6C));	// 77 add     ax, 0C6Ch ;~ 0192:015F
cs=0x192;eip=0x000162; 	X(MOV(*(dw*)(raddr(ds,m2c::kloc_128b3+1)), ax));	// 78 mov     word ptr loc_128B3+1, ax ;~ 0192:0162
cs=0x192;eip=0x000165; 	X(MOV(*(dw*)(raddr(ds,m2c::kloc_129bc+1)), ax));	// 79 mov     word ptr loc_129BC+1, ax ;~ 0192:0165
cs=0x192;eip=0x000168; 	X(MOV(*(dw*)(raddr(ds,m2c::kloc_12a6d+1)), ax));	// 80 mov     word ptr loc_12A6D+1, ax ;~ 0192:0168
cs=0x192;eip=0x00016b; 	X(MOV(*(dw*)(raddr(ds,m2c::kloc_13730+1)), ax));	// 81 mov     word ptr loc_13730+1, ax ;~ 0192:016B
cs=0x192;eip=0x00016e; 	X(MOV(*(dw*)(raddr(ds,m2c::kloc_13741+1)), ax));	// 82 mov     word ptr loc_13741+1, ax ;~ 0192:016E
cs=0x192;eip=0x000171; 	X(MOV(*(dw*)(raddr(ds,m2c::kloc_10616+1)), ax));	// 83 mov     word ptr loc_10616+1, ax ;~ 0192:0171
cs=0x192;eip=0x000174; 	X(MOV(*(dw*)(raddr(ds,m2c::kloc_10680+1)), ax));	// 84 mov     word ptr loc_10680+1, ax ;~ 0192:0174
cs=0x192;eip=0x000177; 	X(MOV(*(dw*)(raddr(ds,m2c::kloc_110cd+1)), ax));	// 85 mov     word ptr loc_110CD+1, ax ;~ 0192:0177
cs=0x192;eip=0x00017a; 	X(MOV(*(dw*)(raddr(ds,m2c::kloc_11400+1)), ax));	// 86 mov     word ptr loc_11400+1, ax ;~ 0192:017A
cs=0x192;eip=0x00017d; 	X(MOV(*(dw*)(raddr(ds,m2c::kloc_11479+1)), ax));	// 87 mov     word ptr loc_11479+1, ax ;~ 0192:017D
cs=0x192;eip=0x000180; 	X(MOV(*(dw*)(raddr(ds,m2c::kloc_1224e +1)), ax));	// 88 mov     word ptr loc_1224E+1, ax ;~ 0192:0180
cs=0x192;eip=0x000183; 	X(MOV(*(dw*)(raddr(ds,m2c::kloc_123dc+1)), ax));	// 89 mov     word ptr loc_123DC+1, ax ;~ 0192:0183
cs=0x192;eip=0x000186; 	X(MOV(*(dw*)(raddr(ds,m2c::kloc_1299b+1)), ax));	// 90 mov     word ptr loc_1299B+1, ax ;~ 0192:0186
cs=0x192;eip=0x000189; 	X(MOV(*(dw*)(raddr(ds,m2c::kloc_12a08+1)), ax));	// 91 mov     word ptr loc_12A08+1, ax ;~ 0192:0189
cs=0x192;eip=0x00018c; 	X(MOV(*(dw*)(raddr(ds,m2c::kloc_12dfb+1)), ax));	// 92 mov     word ptr loc_12DFB+1, ax ;~ 0192:018C
cs=0x192;eip=0x00018f; 	X(MOV(*(dw*)(raddr(ds,m2c::kloc_12e93+1)), ax));	// 93 mov     word ptr loc_12E93+1, ax ;~ 0192:018F
cs=0x192;eip=0x000192; 	X(MOV(*(dw*)(raddr(ds,m2c::kloc_12fa9+1)), ax));	// 94 mov     word ptr loc_12FA9+1, ax ;~ 0192:0192
cs=0x192;eip=0x000195; 	X(MOV(*(dw*)(raddr(ds,m2c::kloc_1431a+1)), ax));	// 95 mov     word ptr loc_1431A+1, ax ;~ 0192:0195
cs=0x192;eip=0x000198; 	X(PUSH(cs));	// 96 push    cs ;~ 0192:0198
cs=0x192;eip=0x000199; 	X(POP(ds));	// 97 pop     ds ;~ 0192:0199
cs=0x192;eip=0x00019a; 	X(MOV(word_100e0, 0x100));	// 99 mov     word_100E0, 100h ;~ 0192:019A
cs=0x192;eip=0x0001a0; 	T(MOV(ax, cs));	// 100 mov     ax, cs ;~ 0192:01A0
cs=0x192;eip=0x0001a2; 	T(ADD(ax, 0x30));	// 101 add     ax, 30h ; '0' ;~ 0192:01A2
cs=0x192;eip=0x0001a5; 	X(MOV(seg_100e2, ax));	// 102 mov     seg_100E2, ax ;~ 0192:01A5
cs=0x192;eip=0x0001a8; 	T(ADD(ax, 0x10B0));	// 103 add     ax, 10B0h ;~ 0192:01A8
cs=0x192;eip=0x0001ab; 	T(MOV(ds, ax));	// 104 mov     ds, ax ;~ 0192:01AB
cs=0x192;eip=0x0001ad; __disp=*(dd*)(((db*)&word_100e0));
	J(JMP(__dispatch_call));	// 106 jmp     dword ptr es:word_100E0 ;~ 0192:01AD
	J(CALL(sub_10300,0));	R(RETN(0));
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kmainproc: 	goto mainproc;
        case m2c::kret_192_103: 	goto ret_192_103;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

