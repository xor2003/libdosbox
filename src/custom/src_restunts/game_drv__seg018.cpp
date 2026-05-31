/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool _group15(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group15:
    _begin:
seg018_2_proc:
	// 80260 
cs=0x2851;eip=0x000002; 	R(RETF(0));	// 80260 retf ;~ 2851:0002
kb_shift_checking1:
	// 80267 
cs=0x2851;eip=0x000004; 	T(MOV(ax, 0x40));	// 80268 mov     ax, 40h ; '@' ;~ 2851:0004
ret_2851_7:
	// 9966 
cs=0x2851;eip=0x000007; 	T(MOV(es, ax));	// 80269 mov     es, ax ;~ 2851:0007
cs=0x2851;eip=0x000009; 	X(OR(*(raddr(es,0x17)), 0x20));	// 80271 or      byte ptr es:17h, 20h ; 40h:17h = keyboard shift flags ;~ 2851:0009
cs=0x2851;eip=0x00000f; 	R(CALLF(kb_checking,0));	// 80272 call    kb_checking ;~ 2851:000F
cs=0x2851;eip=0x000014; 	R(RETF(0));	// 80273 retf ;~ 2851:0014
kb_shift_checking2:
	// 80280 
cs=0x2851;eip=0x000015; 	T(MOV(ax, 0x40));	// 80281 mov     ax, 40h ; '@' ;~ 2851:0015
ret_2851_18:
	// 9967 
cs=0x2851;eip=0x000018; 	T(MOV(es, ax));	// 80282 mov     es, ax ;~ 2851:0018
cs=0x2851;eip=0x00001a; 	X(AND(*(raddr(es,0x17)), 0x0DF));	// 80283 and     byte ptr es:17h, 0DFh ; 40h:17h = keyboard shift flags ;~ 2851:001A
cs=0x2851;eip=0x000020; 	R(CALLF(kb_checking,0));	// 80284 call    kb_checking ;~ 2851:0020
cs=0x2851;eip=0x000025; 	R(RETF(0));	// 80285 retf ;~ 2851:0025

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return true;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kkb_shift_checking1: 	goto kb_shift_checking1;
        case m2c::kkb_shift_checking2: 	goto kb_shift_checking2;
        case m2c::kret_2851_18: 	goto ret_2851_18;
        case m2c::kret_2851_7: 	goto ret_2851_7;
        case m2c::kseg018_2_proc: 	goto seg018_2_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

