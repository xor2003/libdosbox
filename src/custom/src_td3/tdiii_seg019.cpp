/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool _group10(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group10:
    _begin:
sub_270e2:
	// 43814 
#undef arg_2
#define arg_2 6
	// 43817 arg_2           = word ptr  6 ;~ 18B0:0002
ret_18b0_2:
	// 7582 
cs=0x18b0;eip=0x000002; 	X(PUSH(bp));	// 43819 push    bp ;~ 18B0:0002
cs=0x18b0;eip=0x000003; 	T(MOV(bp, sp));	// 43820 mov     bp, sp ;~ 18B0:0003
cs=0x18b0;eip=0x000005; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 43821 mov     ax, [bp+arg_2] ;~ 18B0:0005
cs=0x18b0;eip=0x000008; 	T(AND(ax, 0x0F));	// 43822 and     ax, 0Fh ;~ 18B0:0008
cs=0x18b0;eip=0x00000b; 	T(bx = offset(dseg,ampasslz));	// 43823 lea     bx, aMpassLz    ; "MPASS.LZ" ;~ 18B0:000B
cs=0x18b0;eip=0x00000f; 	T(ADD(bx, word_37b84));	// 43824 add     bx, word_37B84 ;~ 18B0:000F
cs=0x18b0;eip=0x000013; __disp=*(dw*)(raddr(cs,bx));
	R(JMP(__dispatch_call));	// 43825 jmp     word ptr cs:[bx] ;~ 18B0:0013
seg019_proc:
	// 43830 
loc_270f6:
	// 7583 
cs=0x18b0;eip=0x000016; 	T(CMP(al, 1));	// 43831 cmp     al, 1 ;~ 18B0:0016
cs=0x18b0;eip=0x000018; 	R(JLE(loc_2710c));	// 43832 jle     short loc_2710C ;~ 18B0:0018
loc_270fa:
	// 7584 
cs=0x18b0;eip=0x00001a; 	X(MOV(byte_37b83, al));	// 43835 mov     byte_37B83, al ;~ 18B0:001A
cs=0x18b0;eip=0x00001d; 	T(SHL(ax, 1));	// 43836 shl     ax, 1 ;~ 18B0:001D
cs=0x18b0;eip=0x00001f; 	T(bx = offset(dseg,unk_37bcc));	// 43837 lea     bx, unk_37BCC ;~ 18B0:001F
cs=0x18b0;eip=0x000023; 	T(ADD(bx, ax));	// 43838 add     bx, ax ;~ 18B0:0023
cs=0x18b0;eip=0x000025; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 43839 mov     ax, [bx] ;~ 18B0:0025
cs=0x18b0;eip=0x000027; 	X(MOV(word_37bc6, ax));	// 43840 mov     word_37BC6, ax ;~ 18B0:0027
cs=0x18b0;eip=0x00002a; 	R(JMP(loc_27120));	// 43841 jmp     short loc_27120 ;~ 18B0:002A
loc_2710c:
	// 7585 
cs=0x18b0;eip=0x00002c; 	X(MOV(byte_37b83, al));	// 43846 mov     byte_37B83, al ;~ 18B0:002C
cs=0x18b0;eip=0x00002f; 	T(MOV(cx, word_37fec));	// 43847 mov     cx, word_37FEC ;~ 18B0:002F
cs=0x18b0;eip=0x000033; 	T(MUL1_2(cx));	// 43848 mul     cx ;~ 18B0:0033
cs=0x18b0;eip=0x000035; 	T(MOV(cl, 4));	// 43849 mov     cl, 4 ;~ 18B0:0035
cs=0x18b0;eip=0x000037; 	T(SHR(ax, cl));	// 43850 shr     ax, cl ;~ 18B0:0037
cs=0x18b0;eip=0x000039; 	T(ADD(ax, word_38070));	// 43851 add     ax, word_38070 ;~ 18B0:0039
cs=0x18b0;eip=0x00003d; 	X(MOV(word_37bc6, ax));	// 43852 mov     word_37BC6, ax ;~ 18B0:003D
loc_27120:
	// 7586 
cs=0x18b0;eip=0x000040; 	T(XOR(ax, ax));	// 43855 xor     ax, ax ;~ 18B0:0040
cs=0x18b0;eip=0x000042; 	X(POP(bp));	// 43856 pop     bp ;~ 18B0:0042
cs=0x18b0;eip=0x000043; 	R(RETF(0));	// 43857 retf ;~ 18B0:0043

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_270fa: 	goto loc_270fa;
        case m2c::kloc_2710c: 	goto loc_2710c;
        case m2c::kloc_27120: 	goto loc_27120;
        case m2c::kseg019_proc: 	goto seg019_proc;
        case m2c::ksub_270e2: 	goto sub_270e2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

