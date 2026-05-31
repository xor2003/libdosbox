/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool _group12(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group12:
    _begin:
sub_272de:
	// 44118 
#undef arg_2
#define arg_2 6
	// 44120 arg_2           = word ptr  6 ;~ 18CF:000E
ret_18cf_e:
	// 7602 
cs=0x18cf;eip=0x00000e; 	X(PUSH(bp));	// 44122 push    bp ;~ 18CF:000E
cs=0x18cf;eip=0x00000f; 	T(MOV(bp, sp));	// 44123 mov     bp, sp ;~ 18CF:000F
cs=0x18cf;eip=0x000011; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 44124 mov     dx, [bp+arg_2] ;~ 18CF:0011
cs=0x18cf;eip=0x000014; 	T(MOV(ax, 1));	// 44125 mov     ax, 1 ;~ 18CF:0014
cs=0x18cf;eip=0x000017; 	T(bx = offset(dseg,achaselz)+8);	// 44126 lea     bx, aChaseLz+8  ; "" ;~ 18CF:0017
cs=0x18cf;eip=0x00001b; 	T(ADD(bx, word_37b84));	// 44127 add     bx, word_37B84 ;~ 18CF:001B
cs=0x18cf;eip=0x00001f; __disp=*(dw*)(raddr(cs,bx));
	R(JMP(__dispatch_call));	// 44128 jmp     word ptr cs:[bx] ;~ 18CF:001F
seg022_proc:
	// 44133 
loc_272f2:
	// 7603 
cs=0x18cf;eip=0x000022; 	T(CMP(dl, 1));	// 44134 cmp     dl, 1 ;~ 18CF:0022
cs=0x18cf;eip=0x000025; 	R(JLE(loc_27338));	// 44135 jle     short loc_27338 ;~ 18CF:0025
loc_272f7:
	// 7604 
cs=0x18cf;eip=0x000027; 	T(OR(dx, dx));	// 44138 or      dx, dx ;~ 18CF:0027
cs=0x18cf;eip=0x000029; 	R(JLE(loc_27338));	// 44139 jle     short loc_27338 ;~ 18CF:0029
cs=0x18cf;eip=0x00002b; 	T(CMP(dx, 0x0F));	// 44140 cmp     dx, 0Fh ;~ 18CF:002B
cs=0x18cf;eip=0x00002e; 	R(JG(loc_27338));	// 44141 jg      short loc_27338 ;~ 18CF:002E
cs=0x18cf;eip=0x000030; 	T(MOV(ah, 0x48));	// 44142 mov     ah, 48h ; 'H' ;~ 18CF:0030
cs=0x18cf;eip=0x000032; 	T(MOV(bx, word_37fec));	// 44143 mov     bx, word_37FEC ;~ 18CF:0032
cs=0x18cf;eip=0x000036; 	T(SHR(bx, 1));	// 44144 shr     bx, 1 ;~ 18CF:0036
cs=0x18cf;eip=0x000038; 	T(SHR(bx, 1));	// 44145 shr     bx, 1 ;~ 18CF:0038
cs=0x18cf;eip=0x00003a; 	T(SHR(bx, 1));	// 44146 shr     bx, 1 ;~ 18CF:003A
cs=0x18cf;eip=0x00003c; 	T(SHR(bx, 1));	// 44147 shr     bx, 1 ;~ 18CF:003C
cs=0x18cf;eip=0x00003e; 	R(_INT(0x21));	// 44148 int     21h             ; DOS - 2+ - ALLOCATE MEMORY ;~ 18CF:003E
cs=0x18cf;eip=0x000040; 	T(CMP(ax, 7));	// 44150 cmp     ax, 7 ;~ 18CF:0040
cs=0x18cf;eip=0x000043; 	R(JZ(loc_27338));	// 44151 jz      short loc_27338 ;~ 18CF:0043
cs=0x18cf;eip=0x000045; 	T(CMP(ax, 8));	// 44152 cmp     ax, 8 ;~ 18CF:0045
cs=0x18cf;eip=0x000048; 	R(JZ(loc_27338));	// 44153 jz      short loc_27338 ;~ 18CF:0048
cs=0x18cf;eip=0x00004a; 	T(bx = offset(dseg,unk_37bcc));	// 44154 lea     bx, unk_37BCC ;~ 18CF:004A
cs=0x18cf;eip=0x00004e; 	T(MOV(cx, *(dw*)(raddr(ss,bp+6))));	// 44155 mov     cx, [bp+6] ;~ 18CF:004E
cs=0x18cf;eip=0x000051; 	T(SHL(cx, 1));	// 44156 shl     cx, 1 ;~ 18CF:0051
cs=0x18cf;eip=0x000053; 	T(ADD(bx, cx));	// 44157 add     bx, cx ;~ 18CF:0053
cs=0x18cf;eip=0x000055; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 44158 mov     [bx], ax ;~ 18CF:0055
cs=0x18cf;eip=0x000057; 	T(MOV(es, ax));	// 44159 mov     es, ax ;~ 18CF:0057
cs=0x18cf;eip=0x000059; 	T(MOV(cx, word_37fec));	// 44160 mov     cx, word_37FEC ;~ 18CF:0059
cs=0x18cf;eip=0x00005d; 	T(SHR(cx, 1));	// 44161 shr     cx, 1 ;~ 18CF:005D
cs=0x18cf;eip=0x00005f; 	X(PUSH(di));	// 44162 push    di ;~ 18CF:005F
cs=0x18cf;eip=0x000060; 	T(XOR(di, di));	// 44163 xor     di, di ;~ 18CF:0060
cs=0x18cf;eip=0x000062; 	T(XOR(ax, ax));	// 44164 xor     ax, ax ;~ 18CF:0062
cs=0x18cf;eip=0x000064; 	T(CLD);	// 44165 cld ;~ 18CF:0064
	// 44166 rep stosw ;~ 18CF:0065
cs=0x18cf;eip=0x000065; 	X(	REP STOSW);	// 44166 rep stosw ;~ 18CF:0065
cs=0x18cf;eip=0x000067; 	X(POP(di));	// 44167 pop     di ;~ 18CF:0067
loc_27338:
	// 7605 
cs=0x18cf;eip=0x000068; 	X(POP(bp));	// 44171 pop     bp ;~ 18CF:0068
cs=0x18cf;eip=0x000069; 	R(RETF(0));	// 44172 retf ;~ 18CF:0069

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_272f7: 	goto loc_272f7;
        case m2c::kloc_27338: 	goto loc_27338;
        case m2c::kret_18cf_e: 	goto ret_18cf_e;
        case m2c::kseg022_proc: 	goto seg022_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

