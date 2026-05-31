/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool seg018_2_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg018_2_proc:
    _begin:
cs=0x2851;eip=0x000002; 	J(RETF(0));	// 80243 retf ;~ 2851:0002

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kseg018_2_proc: 	goto seg018_2_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool kb_shift_checking1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    kb_shift_checking1:
    _begin:
cs=0x2851;eip=0x000004; 	T(MOV(ax, 0x40));	// 80251 mov     ax, 40h ; '@' ;~ 2851:0004
cs=0x2851;eip=0x000007; 	T(MOV(es, ax));	// 80252 mov     es, ax ;~ 2851:0007
cs=0x2851;eip=0x000009; 	X(OR(*(raddr(es,0x17)), 0x20));	// 80254 or      byte ptr es:17h, 20h ; 40h:17h = keyboard shift flags ;~ 2851:0009
cs=0x2851;eip=0x00000f; 	J(CALLF(kb_checking,0));	// 80255 call    kb_checking ;~ 2851:000F
cs=0x2851;eip=0x000014; 	J(RETF(0));	// 80256 retf ;~ 2851:0014

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kkb_shift_checking1: 	goto kb_shift_checking1;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool kb_shift_checking2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    kb_shift_checking2:
    _begin:
cs=0x2851;eip=0x000015; 	T(MOV(ax, 0x40));	// 80264 mov     ax, 40h ; '@' ;~ 2851:0015
cs=0x2851;eip=0x000018; 	T(MOV(es, ax));	// 80265 mov     es, ax ;~ 2851:0018
cs=0x2851;eip=0x00001a; 	X(AND(*(raddr(es,0x17)), 0x0DF));	// 80266 and     byte ptr es:17h, 0DFh ; 40h:17h = keyboard shift flags ;~ 2851:001A
cs=0x2851;eip=0x000020; 	J(CALLF(kb_checking,0));	// 80267 call    kb_checking ;~ 2851:0020
cs=0x2851;eip=0x000025; 	J(RETF(0));	// 80268 retf ;~ 2851:0025

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kkb_shift_checking2: 	goto kb_shift_checking2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

