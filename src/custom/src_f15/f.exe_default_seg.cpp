/* THIS IS GENERATED FILE */

        
#include "f.exe.h"

                

 bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
loc_10000:
	// 4369 
cs=0x1a2;eip=0x000000; 	T(sp = 0x70E;);	// 30                  mov     sp, 70Eh ;~ 01A2:0000
cs=0x1a2;eip=0x000003; 	T(XOR(ax, ax));	// 31                  xor     ax, ax ;~ 01A2:0003
cs=0x1a2;eip=0x000005; 	X(PUSH(ax));	// 32                  push    ax ;~ 01A2:0005
cs=0x1a2;eip=0x000006; 	X(PUSH(ds));	// 33                  push    ds ;~ 01A2:0006
cs=0x1a2;eip=0x000007; 	T(XOR(ax, ax));	// 34                  xor     ax, ax ;~ 01A2:0007
cs=0x1a2;eip=0x000009; 	T(ds = ax;);	// 35                  mov     ds, ax ;~ 01A2:0009
cs=0x1a2;eip=0x00000b; 	X(MOV(*(dw*)(raddr(ds,0x417)), ax));	// 37                  mov     ds:417h, ax ;~ 01A2:000B
cs=0x1a2;eip=0x00000e; 	X(POP(ds));	// 39                  pop     ds ;~ 01A2:000E
cs=0x1a2;eip=0x00000f; 	T(si = m2c::kloc_2634e+2);	// 41                  lea     si, loc_2634E+2 ;~ 01A2:000F
cs=0x1a2;eip=0x000013; 	T(di = 0x44F);	// 42                  lea     di, ds:44Fh ;~ 01A2:0013
cs=0x1a2;eip=0x000017; 	J(return _group1(m2c::kloc_1001b, _state););	// 43                  jmp     short loc_1001B ;~ 01A2:0017
	J(CALL(start,0));	J(RETN(0));
            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_10000: 	goto loc_10000;
        case m2c::kmainproc: 	goto mainproc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

