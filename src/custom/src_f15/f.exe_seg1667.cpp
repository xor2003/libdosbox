/* THIS IS GENERATED FILE */

        
#include "f.exe.h"

                

 bool seg1667_fac0_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg1667_fac0_proc:
    _begin:
loc_26130:
	// 4811 
cs=0x809;eip=0x00fac0; 	S(_INT(0x20));	// 82568                  int     20h             ; DOS - PROGRAM TERMINATION ;~ 0809:FAC0
cs=0x809;eip=0x00fac5; __disp=*(dd*)(raddr(ds,0x0FFFF));
	J(return __dispatch_call(__disp, _state););	// 82575                  jmp     far ptr 0DEADh:0FFFFh ;~ 0809:FAC5
ret_809_fb10:
	// 4812 
cs=0x809;eip=0x00fb10; 	S(_INT(0x21));	// 82644                  int     21h             ; DOS - ;~ 0809:FB10
cs=0x809;eip=0x00fb12; 	J(RETF(0));	// 82645                  retf ;~ 0809:FB12

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kret_809_fb10: 	goto ret_809_fb10;
        case m2c::kseg1667_fac0_proc: 	goto seg1667_fac0_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

