/* THIS IS GENERATED FILE */

        
#include "f.exe.h"

                

 bool sub_4999e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_4999e:
    _begin:
cs=0x3a50;eip=0x000ebe; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191398                  jmp     far ptr 0:0 ;~ 3A50:0EBE

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_4999e: 	goto sub_4999e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_499a3(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_499a3:
    _begin:
cs=0x3a50;eip=0x000ec3; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191408                  jmp     far ptr 0:0 ;~ 3A50:0EC3

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_499a3: 	goto sub_499a3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_499a8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_499a8:
    _begin:
cs=0x3a50;eip=0x000ec8; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191417                  jmp     far ptr 0:0 ;~ 3A50:0EC8

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_499a8: 	goto sub_499a8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_499ad(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_499ad:
    _begin:
cs=0x3a50;eip=0x000ecd; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191426                  jmp     far ptr 0:0 ;~ 3A50:0ECD

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_499ad: 	goto sub_499ad;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_499b2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_499b2:
    _begin:
cs=0x3a50;eip=0x000ed2; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191436                  jmp     far ptr 0:0 ;~ 3A50:0ED2

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_499b2: 	goto sub_499b2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_499b7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_499b7:
    _begin:
cs=0x3a50;eip=0x000ed7; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191445                  jmp     far ptr 0:0 ;~ 3A50:0ED7

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_499b7: 	goto sub_499b7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_499bc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_499bc:
    _begin:
cs=0x3a50;eip=0x000edc; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191455                  jmp     far ptr 0:0 ;~ 3A50:0EDC

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_499bc: 	goto sub_499bc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg48ae_ee1_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg48ae_ee1_proc:
    _begin:
cs=0x3a50;eip=0x000ee1; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191459                  jmp     far ptr 0:0 ;~ 3A50:0EE1
ret_3a50_ee6:
	// 7320 
cs=0x3a50;eip=0x000ee6; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191461                  jmp     far ptr 0:0 ;~ 3A50:0EE6
ret_3a50_eeb:
	// 7321 
cs=0x3a50;eip=0x000eeb; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191463                  jmp     far ptr 0:0 ;~ 3A50:0EEB
ret_3a50_ef0:
	// 7322 
cs=0x3a50;eip=0x000ef0; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191465                  jmp     far ptr 0:0 ;~ 3A50:0EF0

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kret_3a50_ee6: 	goto ret_3a50_ee6;
        case m2c::kret_3a50_eeb: 	goto ret_3a50_eeb;
        case m2c::kret_3a50_ef0: 	goto ret_3a50_ef0;
        case m2c::kseg48ae_ee1_proc: 	goto seg48ae_ee1_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_499d5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_499d5:
    _begin:
cs=0x3a50;eip=0x000ef5; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191473                  jmp     far ptr 0:0 ;~ 3A50:0EF5

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_499d5: 	goto sub_499d5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_499da(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_499da:
    _begin:
cs=0x3a50;eip=0x000efa; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191482                  jmp     far ptr 0:0 ;~ 3A50:0EFA

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_499da: 	goto sub_499da;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_499df(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_499df:
    _begin:
cs=0x3a50;eip=0x000eff; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191492                  jmp     far ptr 0:0 ;~ 3A50:0EFF

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_499df: 	goto sub_499df;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_499e4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_499e4:
    _begin:
cs=0x3a50;eip=0x000f04; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191502                  jmp     far ptr 0:0 ;~ 3A50:0F04

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_499e4: 	goto sub_499e4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_499e9(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_499e9:
    _begin:
cs=0x3a50;eip=0x000f09; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191512                  jmp     far ptr 0:0 ;~ 3A50:0F09

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_499e9: 	goto sub_499e9;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_499ee(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_499ee:
    _begin:
cs=0x3a50;eip=0x000f0e; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191522                  jmp     far ptr 0:0 ;~ 3A50:0F0E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_499ee: 	goto sub_499ee;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg48ae_f13_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg48ae_f13_proc:
    _begin:
cs=0x3a50;eip=0x000f13; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191526                  jmp     far ptr 0:0 ;~ 3A50:0F13

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg48ae_f13_proc: 	goto seg48ae_f13_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_499f8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_499f8:
    _begin:
cs=0x3a50;eip=0x000f18; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191534                  jmp     far ptr 0:0 ;~ 3A50:0F18

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_499f8: 	goto sub_499f8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg48ae_f1d_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg48ae_f1d_proc:
    _begin:
cs=0x3a50;eip=0x000f1d; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191538                  jmp     far ptr 0:0 ;~ 3A50:0F1D
ret_3a50_f22:
	// 7323 
cs=0x3a50;eip=0x000f22; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191540                  jmp     far ptr 0:0 ;~ 3A50:0F22
ret_3a50_f27:
	// 7324 
cs=0x3a50;eip=0x000f27; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191542                  jmp     far ptr 0:0 ;~ 3A50:0F27
ret_3a50_f2c:
	// 7325 
cs=0x3a50;eip=0x000f2c; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191544                  jmp     far ptr 0:0 ;~ 3A50:0F2C
ret_3a50_f31:
	// 7326 
cs=0x3a50;eip=0x000f31; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191546                  jmp     far ptr 0:0 ;~ 3A50:0F31

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kret_3a50_f22: 	goto ret_3a50_f22;
        case m2c::kret_3a50_f27: 	goto ret_3a50_f27;
        case m2c::kret_3a50_f2c: 	goto ret_3a50_f2c;
        case m2c::kret_3a50_f31: 	goto ret_3a50_f31;
        case m2c::kseg48ae_f1d_proc: 	goto seg48ae_f1d_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a16(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a16:
    _begin:
cs=0x3a50;eip=0x000f36; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191553                  jmp     far ptr 0:0 ;~ 3A50:0F36

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a16: 	goto sub_49a16;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a1b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a1b:
    _begin:
cs=0x3a50;eip=0x000f3b; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191562                  jmp     far ptr 0:0 ;~ 3A50:0F3B

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a1b: 	goto sub_49a1b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a20(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a20:
    _begin:
cs=0x3a50;eip=0x000f40; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191572                  jmp     far ptr 0:0 ;~ 3A50:0F40

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a20: 	goto sub_49a20;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a25(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a25:
    _begin:
cs=0x3a50;eip=0x000f45; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191581                  jmp     far ptr 0:0 ;~ 3A50:0F45

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a25: 	goto sub_49a25;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a2a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a2a:
    _begin:
cs=0x3a50;eip=0x000f4a; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191590                  jmp     far ptr 0:0 ;~ 3A50:0F4A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a2a: 	goto sub_49a2a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a2f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a2f:
    _begin:
cs=0x3a50;eip=0x000f4f; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191599                  jmp     far ptr 0:0 ;~ 3A50:0F4F

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a2f: 	goto sub_49a2f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg48ae_f54_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg48ae_f54_proc:
    _begin:
cs=0x3a50;eip=0x000f54; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191603                  jmp     far ptr 0:0 ;~ 3A50:0F54

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg48ae_f54_proc: 	goto seg48ae_f54_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a39(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a39:
    _begin:
cs=0x3a50;eip=0x000f59; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191611                  jmp     far ptr 0:0 ;~ 3A50:0F59

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a39: 	goto sub_49a39;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a3e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a3e:
    _begin:
cs=0x3a50;eip=0x000f5e; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191621                  jmp     far ptr 0:0 ;~ 3A50:0F5E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a3e: 	goto sub_49a3e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a43(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a43:
    _begin:
cs=0x3a50;eip=0x000f63; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191631                  jmp     far ptr 0:0 ;~ 3A50:0F63

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a43: 	goto sub_49a43;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a48(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a48:
    _begin:
cs=0x3a50;eip=0x000f68; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191641                  jmp     far ptr 0:0 ;~ 3A50:0F68

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a48: 	goto sub_49a48;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a4d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a4d:
    _begin:
cs=0x3a50;eip=0x000f6d; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191651                  jmp     far ptr 0:0 ;~ 3A50:0F6D

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a4d: 	goto sub_49a4d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a52(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a52:
    _begin:
cs=0x3a50;eip=0x000f72; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191660                  jmp     far ptr 0:0 ;~ 3A50:0F72

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a52: 	goto sub_49a52;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a57(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a57:
    _begin:
cs=0x3a50;eip=0x000f77; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191670                  jmp     far ptr 0:0 ;~ 3A50:0F77

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a57: 	goto sub_49a57;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg48ae_f7c_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg48ae_f7c_proc:
    _begin:
cs=0x3a50;eip=0x000f7c; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191674                  jmp     far ptr 0:0 ;~ 3A50:0F7C
ret_3a50_f81:
	// 7327 
cs=0x3a50;eip=0x000f81; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191676                  jmp     far ptr 0:0 ;~ 3A50:0F81

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kret_3a50_f81: 	goto ret_3a50_f81;
        case m2c::kseg48ae_f7c_proc: 	goto seg48ae_f7c_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a66(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a66:
    _begin:
cs=0x3a50;eip=0x000f86; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191684                  jmp     far ptr 0:0 ;~ 3A50:0F86

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a66: 	goto sub_49a66;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a6b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a6b:
    _begin:
cs=0x3a50;eip=0x000f8b; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191694                  jmp     far ptr 0:0 ;~ 3A50:0F8B

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a6b: 	goto sub_49a6b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a70(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a70:
    _begin:
cs=0x3a50;eip=0x000f90; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191704                  jmp     far ptr 0:0 ;~ 3A50:0F90

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a70: 	goto sub_49a70;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a75(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a75:
    _begin:
cs=0x3a50;eip=0x000f95; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191713                  jmp     far ptr 0:0 ;~ 3A50:0F95

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a75: 	goto sub_49a75;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a7a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a7a:
    _begin:
cs=0x3a50;eip=0x000f9a; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191722                  jmp     far ptr 0:0 ;~ 3A50:0F9A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a7a: 	goto sub_49a7a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a7f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a7f:
    _begin:
cs=0x3a50;eip=0x000f9f; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191732                  jmp     far ptr 0:0 ;~ 3A50:0F9F

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a7f: 	goto sub_49a7f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a84(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a84:
    _begin:
cs=0x3a50;eip=0x000fa4; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191741                  jmp     far ptr 0:0 ;~ 3A50:0FA4

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a84: 	goto sub_49a84;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg48ae_fa9_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg48ae_fa9_proc:
    _begin:
cs=0x3a50;eip=0x000fa9; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191745                  jmp     far ptr 0:0 ;~ 3A50:0FA9
ret_3a50_fae:
	// 7328 
cs=0x3a50;eip=0x000fae; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191747                  jmp     far ptr 0:0 ;~ 3A50:0FAE
ret_3a50_fb3:
	// 7329 
cs=0x3a50;eip=0x000fb3; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191749                  jmp     far ptr 0:0 ;~ 3A50:0FB3

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kret_3a50_fae: 	goto ret_3a50_fae;
        case m2c::kret_3a50_fb3: 	goto ret_3a50_fb3;
        case m2c::kseg48ae_fa9_proc: 	goto seg48ae_fa9_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a98(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a98:
    _begin:
cs=0x3a50;eip=0x000fb8; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191756                  jmp     far ptr 0:0 ;~ 3A50:0FB8

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a98: 	goto sub_49a98;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a9d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a9d:
    _begin:
cs=0x3a50;eip=0x000fbd; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191766                  jmp     far ptr 0:0 ;~ 3A50:0FBD

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a9d: 	goto sub_49a9d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49aa2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49aa2:
    _begin:
cs=0x3a50;eip=0x000fc2; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191775                  jmp     far ptr 0:0 ;~ 3A50:0FC2

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49aa2: 	goto sub_49aa2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49aa7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49aa7:
    _begin:
cs=0x3a50;eip=0x000fc7; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191784                  jmp     far ptr 0:0 ;~ 3A50:0FC7

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49aa7: 	goto sub_49aa7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49aac(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49aac:
    _begin:
cs=0x3a50;eip=0x000fcc; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191793                  jmp     far ptr 0:0 ;~ 3A50:0FCC

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49aac: 	goto sub_49aac;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49ab1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49ab1:
    _begin:
cs=0x3a50;eip=0x000fd1; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191803                  jmp     far ptr 0:0 ;~ 3A50:0FD1

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49ab1: 	goto sub_49ab1;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49ab6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49ab6:
    _begin:
cs=0x3a50;eip=0x000fd6; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191812                  jmp     far ptr 0:0 ;~ 3A50:0FD6

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49ab6: 	goto sub_49ab6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg48ae_fdb_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg48ae_fdb_proc:
    _begin:
cs=0x3a50;eip=0x000fdb; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191816                  jmp     far ptr 0:0 ;~ 3A50:0FDB

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg48ae_fdb_proc: 	goto seg48ae_fdb_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49ac0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49ac0:
    _begin:
cs=0x3a50;eip=0x000fe0; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191824                  jmp     far ptr 0:0 ;~ 3A50:0FE0

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49ac0: 	goto sub_49ac0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49ac5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49ac5:
    _begin:
cs=0x3a50;eip=0x000fe5; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191834                  jmp     far ptr 0:0 ;~ 3A50:0FE5

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49ac5: 	goto sub_49ac5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg48ae_fea_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg48ae_fea_proc:
    _begin:
cs=0x3a50;eip=0x000fea; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191838                  jmp     far ptr 0:0 ;~ 3A50:0FEA

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg48ae_fea_proc: 	goto seg48ae_fea_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49acf(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49acf:
    _begin:
cs=0x3a50;eip=0x000fef; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191846                  jmp     far ptr 0:0 ;~ 3A50:0FEF

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49acf: 	goto sub_49acf;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49ad4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49ad4:
    _begin:
cs=0x3a50;eip=0x000ff4; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191856                  jmp     far ptr 0:0 ;~ 3A50:0FF4

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49ad4: 	goto sub_49ad4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49ad9(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49ad9:
    _begin:
cs=0x3a50;eip=0x000ff9; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191866                  jmp     far ptr 0:0 ;~ 3A50:0FF9

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49ad9: 	goto sub_49ad9;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg48ae_ffe_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg48ae_ffe_proc:
    _begin:
cs=0x3a50;eip=0x000ffe; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191870                  jmp     far ptr 0:0 ;~ 3A50:0FFE

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg48ae_ffe_proc: 	goto seg48ae_ffe_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49ae3(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49ae3:
    _begin:
cs=0x3a50;eip=0x001003; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191877                  jmp     far ptr 0:0 ;~ 3A50:1003

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49ae3: 	goto sub_49ae3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg48ae_1008_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg48ae_1008_proc:
    _begin:
cs=0x3a50;eip=0x001008; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191881                  jmp     far ptr 0:0 ;~ 3A50:1008
ret_3a50_100d:
	// 7330 
cs=0x3a50;eip=0x00100d; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191883                  jmp     far ptr 0:0 ;~ 3A50:100D

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kret_3a50_100d: 	goto ret_3a50_100d;
        case m2c::kseg48ae_1008_proc: 	goto seg48ae_1008_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49af2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49af2:
    _begin:
cs=0x3a50;eip=0x001012; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191890                  jmp     far ptr 0:0 ;~ 3A50:1012

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49af2: 	goto sub_49af2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49af7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49af7:
    _begin:
cs=0x3a50;eip=0x001017; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191900                  jmp     far ptr 0:0 ;~ 3A50:1017

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49af7: 	goto sub_49af7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49afc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49afc:
    _begin:
cs=0x3a50;eip=0x00101c; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191910                  jmp     far ptr 0:0 ;~ 3A50:101C

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49afc: 	goto sub_49afc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49b01(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49b01:
    _begin:
cs=0x3a50;eip=0x001021; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191920                  jmp     far ptr 0:0 ;~ 3A50:1021

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49b01: 	goto sub_49b01;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg48ae_1026_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg48ae_1026_proc:
    _begin:
cs=0x3a50;eip=0x001026; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191924                  jmp     far ptr 0:0 ;~ 3A50:1026

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg48ae_1026_proc: 	goto seg48ae_1026_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49b0b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49b0b:
    _begin:
cs=0x3a50;eip=0x00102b; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191931                  jmp     far ptr 0:0 ;~ 3A50:102B

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49b0b: 	goto sub_49b0b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg48ae_1030_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg48ae_1030_proc:
    _begin:
cs=0x3a50;eip=0x001030; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191935                  jmp     far ptr 0:0 ;~ 3A50:1030

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg48ae_1030_proc: 	goto seg48ae_1030_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49b15(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49b15:
    _begin:
cs=0x3a50;eip=0x001035; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191943                  jmp     far ptr 0:0 ;~ 3A50:1035

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49b15: 	goto sub_49b15;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49b1a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49b1a:
    _begin:
cs=0x3a50;eip=0x00103a; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191952                  jmp     far ptr 0:0 ;~ 3A50:103A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49b1a: 	goto sub_49b1a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg48ae_103f_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg48ae_103f_proc:
    _begin:
cs=0x3a50;eip=0x00103f; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191956                  jmp     far ptr 0:0 ;~ 3A50:103F
ret_3a50_1044:
	// 7331 
cs=0x3a50;eip=0x001044; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191958                  jmp     far ptr 0:0 ;~ 3A50:1044

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kret_3a50_1044: 	goto ret_3a50_1044;
        case m2c::kseg48ae_103f_proc: 	goto seg48ae_103f_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49b29(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49b29:
    _begin:
cs=0x3a50;eip=0x001049; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191966                  jmp     far ptr 0:0 ;~ 3A50:1049

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49b29: 	goto sub_49b29;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg48ae_104e_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg48ae_104e_proc:
    _begin:
cs=0x3a50;eip=0x00104e; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191970                  jmp     far ptr 0:0 ;~ 3A50:104E
ret_3a50_1053:
	// 7332 
cs=0x3a50;eip=0x001053; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191972                  jmp     far ptr 0:0 ;~ 3A50:1053

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kret_3a50_1053: 	goto ret_3a50_1053;
        case m2c::kseg48ae_104e_proc: 	goto seg48ae_104e_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49b38(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49b38:
    _begin:
cs=0x3a50;eip=0x001058; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191979                  jmp     far ptr 0:0 ;~ 3A50:1058

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49b38: 	goto sub_49b38;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg48ae_105d_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg48ae_105d_proc:
    _begin:
cs=0x3a50;eip=0x00105d; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 191983                  jmp     far ptr 0:0 ;~ 3A50:105D
ret_3a50_1080:
	// 7333 
cs=0x3a50;eip=0x001080; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 192016                  jmp     far ptr 0:0 ;~ 3A50:1080

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kret_3a50_1080: 	goto ret_3a50_1080;
        case m2c::kseg48ae_105d_proc: 	goto seg48ae_105d_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49b65(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49b65:
    _begin:
cs=0x3a50;eip=0x001085; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 192024                  jmp     far ptr 0:0 ;~ 3A50:1085

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49b65: 	goto sub_49b65;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg48ae_108a_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg48ae_108a_proc:
    _begin:
cs=0x3a50;eip=0x00108a; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 192028                  jmp     far ptr 0:0 ;~ 3A50:108A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg48ae_108a_proc: 	goto seg48ae_108a_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49b6f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49b6f:
    _begin:
cs=0x3a50;eip=0x00108f; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 192035                  jmp     far ptr 0:0 ;~ 3A50:108F

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49b6f: 	goto sub_49b6f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg48ae_1094_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg48ae_1094_proc:
    _begin:
cs=0x3a50;eip=0x001094; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 192039                  jmp     far ptr 0:0 ;~ 3A50:1094
ret_3a50_1099:
	// 7334 
cs=0x3a50;eip=0x001099; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 192041                  jmp     far ptr 0:0 ;~ 3A50:1099

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kret_3a50_1099: 	goto ret_3a50_1099;
        case m2c::kseg48ae_1094_proc: 	goto seg48ae_1094_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49b92(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49b92:
    _begin:
cs=0x3a50;eip=0x0010b2; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 192069                  jmp     far ptr 0:0 ;~ 3A50:10B2

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49b92: 	goto sub_49b92;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49b97(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49b97:
    _begin:
cs=0x3a50;eip=0x0010b7; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 192079                  jmp     far ptr 0:0 ;~ 3A50:10B7

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49b97: 	goto sub_49b97;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49b9c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49b9c:
    _begin:
cs=0x3a50;eip=0x0010bc; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 192088                  jmp     far ptr 0:0 ;~ 3A50:10BC

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49b9c: 	goto sub_49b9c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg48ae_10c1_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg48ae_10c1_proc:
    _begin:
cs=0x3a50;eip=0x0010c1; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 192092                  jmp     far ptr 0:0 ;~ 3A50:10C1

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg48ae_10c1_proc: 	goto seg48ae_10c1_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49ba6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49ba6:
    _begin:
cs=0x3a50;eip=0x0010c6; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 192099                  jmp     far ptr 0:0 ;~ 3A50:10C6

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49ba6: 	goto sub_49ba6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49bab(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49bab:
    _begin:
cs=0x3a50;eip=0x0010cb; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 192109                  jmp     far ptr 0:0 ;~ 3A50:10CB

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49bab: 	goto sub_49bab;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49bb0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49bb0:
    _begin:
cs=0x3a50;eip=0x0010d0; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 192118                  jmp     far ptr 0:0 ;~ 3A50:10D0

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49bb0: 	goto sub_49bb0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49bb5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49bb5:
    _begin:
cs=0x3a50;eip=0x0010d5; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 192127                  jmp     far ptr 0:0 ;~ 3A50:10D5

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49bb5: 	goto sub_49bb5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49bba(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49bba:
    _begin:
cs=0x3a50;eip=0x0010da; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 192136                  jmp     far ptr 0:0 ;~ 3A50:10DA

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49bba: 	goto sub_49bba;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49bbf(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49bbf:
    _begin:
cs=0x3a50;eip=0x0010df; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 192145                  jmp     far ptr 0:0 ;~ 3A50:10DF

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49bbf: 	goto sub_49bbf;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

