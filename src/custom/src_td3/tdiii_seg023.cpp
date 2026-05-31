/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool _group13(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group13:
    _begin:
sub_27364:
	// 44195 
cs=0x18d8;eip=0x000004; 	X(PUSH(bp));	// 44197 push    bp ;~ 18D8:0004
ret_18d8_5:
	// 7606 
cs=0x18d8;eip=0x000005; 	T(MOV(bp, sp));	// 44198 mov     bp, sp ;~ 18D8:0005
cs=0x18d8;eip=0x000007; 	T(MOV(ax, 1));	// 44199 mov     ax, 1 ;~ 18D8:0007
cs=0x18d8;eip=0x00000a; 	T(bx = offset(dseg,unk_2be7b));	// 44200 lea     bx, unk_2BE7B ;~ 18D8:000A
cs=0x18d8;eip=0x00000e; 	T(ADD(bx, word_37b84));	// 44201 add     bx, word_37B84 ;~ 18D8:000E
cs=0x18d8;eip=0x000012; __disp=*(dw*)(raddr(cs,bx));
	R(JMP(__dispatch_call));	// 44202 jmp     word ptr cs:[bx] ;~ 18D8:0012
seg023_proc:
	// 44207 
loc_27375:
	// 7607 
cs=0x18d8;eip=0x000015; 	T(bx = offset(dseg,unk_37bcc));	// 44208 lea     bx, unk_37BCC ;~ 18D8:0015
cs=0x18d8;eip=0x000019; 	T(MOV(cx, *(dw*)(raddr(ss,bp+6))));	// 44209 mov     cx, [bp+6] ;~ 18D8:0019
cs=0x18d8;eip=0x00001c; 	T(SHL(cx, 1));	// 44210 shl     cx, 1 ;~ 18D8:001C
cs=0x18d8;eip=0x00001e; 	T(ADD(bx, cx));	// 44211 add     bx, cx ;~ 18D8:001E
cs=0x18d8;eip=0x000020; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 44212 mov     ax, [bx] ;~ 18D8:0020
cs=0x18d8;eip=0x000022; 	T(MOV(es, ax));	// 44213 mov     es, ax ;~ 18D8:0022
cs=0x18d8;eip=0x000024; 	T(MOV(ah, 0x49));	// 44214 mov     ah, 49h ;~ 18D8:0024
cs=0x18d8;eip=0x000026; 	R(_INT(0x21));	// 44215 int     21h             ; DOS - 2+ - FREE MEMORY ;~ 18D8:0026
cs=0x18d8;eip=0x000028; 	T(CMP(ax, 7));	// 44217 cmp     ax, 7 ;~ 18D8:0028
cs=0x18d8;eip=0x00002b; 	R(JZ(loc_27399));	// 44218 jz      short loc_27399 ;~ 18D8:002B
cs=0x18d8;eip=0x00002d; 	T(CMP(ax, 9));	// 44219 cmp     ax, 9 ;~ 18D8:002D
cs=0x18d8;eip=0x000030; 	R(JZ(loc_27399));	// 44220 jz      short loc_27399 ;~ 18D8:0030
cs=0x18d8;eip=0x000032; 	T(MOV(ax, word_38070));	// 44221 mov     ax, word_38070 ;~ 18D8:0032
cs=0x18d8;eip=0x000035; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 44222 mov     [bx], ax ;~ 18D8:0035
cs=0x18d8;eip=0x000037; 	T(XOR(ax, ax));	// 44223 xor     ax, ax ;~ 18D8:0037
loc_27399:
	// 7608 
cs=0x18d8;eip=0x000039; 	X(POP(bp));	// 44228 pop     bp ;~ 18D8:0039
cs=0x18d8;eip=0x00003a; 	R(RETF(0));	// 44229 retf ;~ 18D8:003A

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_27375: 	goto loc_27375;
        case m2c::kloc_27399: 	goto loc_27399;
        case m2c::kret_18d8_5: 	goto ret_18d8_5;
        case m2c::ksub_27364: 	goto sub_27364;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

