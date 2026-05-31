/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool _group11(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group11:
    _begin:
sub_2714e:
	// 43878 
#undef arg_2
#define arg_2 6
	// 43881 arg_2           = word ptr  6 ;~ 18B6:000E
ret_18b6_e:
	// 7587 
cs=0x18b6;eip=0x00000e; 	X(PUSH(bp));	// 43883 push    bp ;~ 18B6:000E
cs=0x18b6;eip=0x00000f; 	T(MOV(bp, sp));	// 43884 mov     bp, sp ;~ 18B6:000F
cs=0x18b6;eip=0x000011; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 43885 mov     ax, [bp+arg_2] ;~ 18B6:0011
cs=0x18b6;eip=0x000014; 	T(AND(ax, 0x0F));	// 43886 and     ax, 0Fh ;~ 18B6:0014
cs=0x18b6;eip=0x000017; 	T(bx = offset(dseg,aerlz));	// 43887 lea     bx, aErLz       ; "ER.LZ" ;~ 18B6:0017
cs=0x18b6;eip=0x00001b; 	T(ADD(bx, word_37b84));	// 43888 add     bx, word_37B84 ;~ 18B6:001B
cs=0x18b6;eip=0x00001f; __disp=*(dw*)(raddr(cs,bx));
	R(JMP(__dispatch_call));	// 43889 jmp     word ptr cs:[bx] ;~ 18B6:001F
seg020_proc:
	// 43894 
loc_27162:
	// 7588 
cs=0x18b6;eip=0x000022; 	T(CMP(al, 1));	// 43895 cmp     al, 1 ;~ 18B6:0022
cs=0x18b6;eip=0x000024; 	R(JLE(loc_27178));	// 43896 jle     short loc_27178 ;~ 18B6:0024
loc_27166:
	// 7589 
cs=0x18b6;eip=0x000026; 	X(MOV(byte_37b80, al));	// 43899 mov     byte_37B80, al ;~ 18B6:0026
cs=0x18b6;eip=0x000029; 	T(bx = offset(dseg,unk_37bcc));	// 43900 lea     bx, unk_37BCC ;~ 18B6:0029
cs=0x18b6;eip=0x00002d; 	T(SHL(ax, 1));	// 43901 shl     ax, 1 ;~ 18B6:002D
cs=0x18b6;eip=0x00002f; 	T(ADD(bx, ax));	// 43902 add     bx, ax ;~ 18B6:002F
cs=0x18b6;eip=0x000031; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 43903 mov     ax, [bx] ;~ 18B6:0031
cs=0x18b6;eip=0x000033; 	X(MOV(word_37bc8, ax));	// 43904 mov     word_37BC8, ax ;~ 18B6:0033
cs=0x18b6;eip=0x000036; 	R(JMP(loc_2718c));	// 43905 jmp     short loc_2718C ;~ 18B6:0036
loc_27178:
	// 7590 
cs=0x18b6;eip=0x000038; 	X(MOV(byte_37b80, al));	// 43910 mov     byte_37B80, al ;~ 18B6:0038
cs=0x18b6;eip=0x00003b; 	T(MOV(cx, word_37fec));	// 43911 mov     cx, word_37FEC ;~ 18B6:003B
cs=0x18b6;eip=0x00003f; 	T(MUL1_2(cx));	// 43912 mul     cx ;~ 18B6:003F
cs=0x18b6;eip=0x000041; 	T(MOV(cl, 4));	// 43913 mov     cl, 4 ;~ 18B6:0041
cs=0x18b6;eip=0x000043; 	T(SHR(ax, cl));	// 43914 shr     ax, cl ;~ 18B6:0043
cs=0x18b6;eip=0x000045; 	T(ADD(ax, word_38070));	// 43915 add     ax, word_38070 ;~ 18B6:0045
cs=0x18b6;eip=0x000049; 	X(MOV(word_37bc8, ax));	// 43916 mov     word_37BC8, ax ;~ 18B6:0049
loc_2718c:
	// 7591 
cs=0x18b6;eip=0x00004c; 	T(XOR(ax, ax));	// 43920 xor     ax, ax ;~ 18B6:004C
cs=0x18b6;eip=0x00004e; 	X(POP(bp));	// 43921 pop     bp ;~ 18B6:004E
cs=0x18b6;eip=0x00004f; 	R(RETF(0));	// 43922 retf ;~ 18B6:004F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_27166: 	goto loc_27166;
        case m2c::kloc_27178: 	goto loc_27178;
        case m2c::kloc_2718c: 	goto loc_2718c;
        case m2c::kseg020_proc: 	goto seg020_proc;
        case m2c::ksub_2714e: 	goto sub_2714e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

