/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "dnprgdrv.h"

                

 bool sub_335b0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_335b0:
    _begin:
cs=0x24ed;eip=0x000100; 	J(return sub_33e17(0, _state););	// 103745 jmp     near ptr sub_33E17 ;~ 24ED:0100

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_335b0: 	goto sub_335b0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_335b3(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_335b3:
    _begin:
cs=0x24ed;eip=0x000103; 	J(return sub_33e89(0, _state););	// 103757 jmp     near ptr sub_33E89 ;~ 24ED:0103

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_335b3: 	goto sub_335b3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_335b6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_335b6:
    _begin:
cs=0x24ed;eip=0x000106; 	J(return sub_33e92(0, _state););	// 103767 jmp     near ptr sub_33E92 ;~ 24ED:0106

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_335b6: 	goto sub_335b6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_335b9(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_335b9:
    _begin:
cs=0x24ed;eip=0x000109; 	J(return sub_34cac(0, _state););	// 103778 jmp     near ptr sub_34CAC ;~ 24ED:0109

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_335b9: 	goto sub_335b9;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_335bc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_335bc:
    _begin:
cs=0x24ed;eip=0x00010c; 	J(return sub_34d64(0, _state););	// 103789 jmp     near ptr sub_34D64 ;~ 24ED:010C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_335bc: 	goto sub_335bc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_335bf(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_335bf:
    _begin:
cs=0x24ed;eip=0x00010f; 	J(return _group139(m2c::ksub_343dd, _state););	// 103799 jmp     near ptr sub_343DD ;~ 24ED:010F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_335bf: 	goto sub_335bf;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_335c2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_335c2:
    _begin:
cs=0x24ed;eip=0x000112; 	J(return _group139(m2c::ksub_348c5, _state););	// 103809 jmp     near ptr sub_348C5 ;~ 24ED:0112

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_335c2: 	goto sub_335c2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_335c5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_335c5:
    _begin:
cs=0x24ed;eip=0x000115; 	J(return sub_3506d(0, _state););	// 103820 jmp     near ptr sub_3506D ;~ 24ED:0115

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_335c5: 	goto sub_335c5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_335c8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_335c8:
    _begin:
cs=0x24ed;eip=0x000118; 	J(return sub_34e0f(0, _state););	// 103830 jmp     near ptr sub_34E0F ;~ 24ED:0118

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_335c8: 	goto sub_335c8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_335cb(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_335cb:
    _begin:
cs=0x24ed;eip=0x00011b; 	J(return sub_34d91(0, _state););	// 103841 jmp     sub_34D91 ;~ 24ED:011B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_335cb: 	goto sub_335cb;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_335ce(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_335ce:
    _begin:
cs=0x24ed;eip=0x00011e; 	J(return sub_34d93(0, _state););	// 103851 jmp     near ptr sub_34D93 ;~ 24ED:011E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_335ce: 	goto sub_335ce;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_335d1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_335d1:
    _begin:
cs=0x24ed;eip=0x000121; 	J(return sub_34f94(0, _state););	// 103862 jmp     near ptr sub_34F94 ;~ 24ED:0121

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_335d1: 	goto sub_335d1;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_335d4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_335d4:
    _begin:
cs=0x24ed;eip=0x000124; 	J(return sub_34fa7(0, _state););	// 103872 jmp     near ptr sub_34FA7 ;~ 24ED:0124

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_335d4: 	goto sub_335d4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_335d7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_335d7:
    _begin:
cs=0x24ed;eip=0x000127; 	J(return sub_34f94(0, _state););	// 103882 jmp     near ptr sub_34F94 ;~ 24ED:0127

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_335d7: 	goto sub_335d7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_335da(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_335da:
    _begin:
cs=0x24ed;eip=0x00012a; 	J(return sub_34fa5(0, _state););	// 103893 jmp     sub_34FA5 ;~ 24ED:012A

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_335da: 	goto sub_335da;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_335dd(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_335dd:
    _begin:
cs=0x24ed;eip=0x00012d; 	J(return sub_34f94(0, _state););	// 103905 jmp     near ptr sub_34F94 ;~ 24ED:012D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_335dd: 	goto sub_335dd;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_335e0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_335e0:
    _begin:
cs=0x24ed;eip=0x000130; 	J(return sub_34fa7(0, _state););	// 103915 jmp     near ptr sub_34FA7 ;~ 24ED:0130

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_335e0: 	goto sub_335e0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_335e3(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_335e3:
    _begin:
cs=0x24ed;eip=0x000133; 	J(return sub_35041(0, _state););	// 103924 jmp     near ptr sub_35041 ;~ 24ED:0133

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_335e3: 	goto sub_335e3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_335e6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_335e6:
    _begin:
cs=0x24ed;eip=0x000136; 	J(return sub_3505e(0, _state););	// 103936 jmp     near ptr sub_3505E ;~ 24ED:0136

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_335e6: 	goto sub_335e6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_335e9(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_335e9:
    _begin:
cs=0x24ed;eip=0x000139; 	J(return sub_34e1f(0, _state););	// 103946 jmp     near ptr sub_34E1F ;~ 24ED:0139

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_335e9: 	goto sub_335e9;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_335ec(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_335ec:
    _begin:
cs=0x24ed;eip=0x00013c; 	J(RETF(0));	// 103955 retf ;~ 24ED:013C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_335ec: 	goto sub_335ec;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_13d_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_13d_proc:
    _begin:
cs=0x24ed;eip=0x00013d; 	J(RETF(0));	// 103959 retf ;~ 24ED:013D
ret_24ed_13e:
	// 6948 
cs=0x24ed;eip=0x00013e; 	J(RETF(0));	// 103961 retf ;~ 24ED:013E
loc_335ef:
	// 6949 
cs=0x24ed;eip=0x00013f; 	J(return _group139(m2c::kloc_340c4, _state););	// 103965 jmp     loc_340C4 ;~ 24ED:013F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_335ef: 	goto loc_335ef;
        case m2c::kret_24ed_13e: 	goto ret_24ed_13e;
        case m2c::kseg002_13d_proc: 	goto seg002_13d_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_335f2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_335f2:
    _begin:
cs=0x24ed;eip=0x000142; 	J(return sub_3584b(0, _state););	// 103973 jmp     near ptr sub_3584B ;~ 24ED:0142

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_335f2: 	goto sub_335f2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_335f5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_335f5:
    _begin:
cs=0x24ed;eip=0x000145; 	J(return _group141(m2c::ksub_3513c, _state););	// 103984 jmp     near ptr sub_3513C ;~ 24ED:0145

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_335f5: 	goto sub_335f5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_335f8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_335f8:
    _begin:
cs=0x24ed;eip=0x000148; 	J(return _group141(m2c::ksub_3518d, _state););	// 103995 jmp     near ptr sub_3518D ;~ 24ED:0148

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_335f8: 	goto sub_335f8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_335fb(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_335fb:
    _begin:
cs=0x24ed;eip=0x00014b; 	J(return sub_350be(0, _state););	// 104006 jmp     near ptr sub_350BE ;~ 24ED:014B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_335fb: 	goto sub_335fb;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_335fe(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_335fe:
    _begin:
cs=0x24ed;eip=0x00014e; 	J(return sub_350f5(0, _state););	// 104016 jmp     near ptr sub_350F5 ;~ 24ED:014E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_335fe: 	goto sub_335fe;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_33601(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_33601:
    _begin:
cs=0x24ed;eip=0x000151; 	J(return sub_35a56(0, _state););	// 104027 jmp     near ptr sub_35A56 ;~ 24ED:0151

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_33601: 	goto sub_33601;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_33604(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_33604:
    _begin:
cs=0x24ed;eip=0x000154; 	J(return sub_33e25(0, _state););	// 104038 jmp     near ptr sub_33E25 ;~ 24ED:0154

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_33604: 	goto sub_33604;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_33607(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_33607:
    _begin:
cs=0x24ed;eip=0x000157; 	J(return sub_353ce(0, _state););	// 104049 jmp     near ptr sub_353CE ;~ 24ED:0157

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_33607: 	goto sub_33607;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3360a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3360a:
    _begin:
cs=0x24ed;eip=0x00015a; 	J(return sub_366ac(0, _state););	// 104061 jmp     near ptr sub_366AC ;~ 24ED:015A

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_3360a: 	goto sub_3360a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3360d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3360d:
    _begin:
cs=0x24ed;eip=0x00015d; 	J(return sub_34de1(0, _state););	// 104073 jmp     near ptr sub_34DE1 ;~ 24ED:015D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_3360d: 	goto sub_3360d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_33610(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_33610:
    _begin:
cs=0x24ed;eip=0x000160; 	J(return sub_33f81(m2c::kloc_33fb0, _state););	// 104084 jmp     loc_33FB0 ;~ 24ED:0160

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_33610: 	goto sub_33610;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_33613(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_33613:
    _begin:
cs=0x24ed;eip=0x000163; 	J(return sub_3409e(0, _state););	// 104094 jmp     near ptr sub_3409E ;~ 24ED:0163

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_33613: 	goto sub_33613;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_166_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_166_proc:
    _begin:
locret_33616:
	// 6950 
cs=0x24ed;eip=0x000166; 	J(RETF(0));	// 104100 retf ;~ 24ED:0166
ret_24ed_167:
	// 6951 
cs=0x24ed;eip=0x000167; 	J(RETF(0));	// 104102 retf ;~ 24ED:0167
ret_24ed_168:
	// 6952 
cs=0x24ed;eip=0x000168; 	J(RETF(0));	// 104104 retf ;~ 24ED:0168

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kret_24ed_167: 	goto ret_24ed_167;
        case m2c::kret_24ed_168: 	goto ret_24ed_168;
        case m2c::kseg002_166_proc: 	goto seg002_166_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_33619(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_33619:
    _begin:
cs=0x24ed;eip=0x000169; 	J(return sub_3420d(0, _state););	// 104112 jmp     near ptr sub_3420D ;~ 24ED:0169

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_33619: 	goto sub_33619;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3361c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3361c:
    _begin:
cs=0x24ed;eip=0x00016c; 	J(return sub_36ea5(0, _state););	// 104123 jmp     near ptr sub_36EA5 ;~ 24ED:016C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_3361c: 	goto sub_3361c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3361f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3361f:
    _begin:
cs=0x24ed;eip=0x00016f; 	J(return sub_36ed0(0, _state););	// 104134 jmp     near ptr sub_36ED0 ;~ 24ED:016F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_3361f: 	goto sub_3361f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_33622(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_33622:
    _begin:
cs=0x24ed;eip=0x000172; 	J(return sub_33ef0(0, _state););	// 104145 jmp     near ptr sub_33EF0 ;~ 24ED:0172

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_33622: 	goto sub_33622;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_33625(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_33625:
    _begin:
cs=0x24ed;eip=0x000175; 	J(return sub_33f81(0, _state););	// 104156 jmp     near ptr sub_33F81 ;~ 24ED:0175

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_33625: 	goto sub_33625;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_178_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_178_proc:
    _begin:
loc_33628:
	// 6953 
cs=0x24ed;eip=0x000178; 	J(return seg002_aa4_proc(m2c::kloc_33f54, _state););	// 104162 jmp     loc_33F54 ;~ 24ED:0178

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kseg002_178_proc: 	goto seg002_178_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3362b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3362b:
    _begin:
cs=0x24ed;eip=0x00017b; 	J(return sub_33f18(0, _state););	// 104170 jmp     near ptr sub_33F18 ;~ 24ED:017B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_3362b: 	goto sub_3362b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_17e_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_17e_proc:
    _begin:
loc_3362e:
	// 6954 
cs=0x24ed;eip=0x00017e; 	J(return seg002_240c_proc(m2c::kloc_358bc, _state););	// 104176 jmp     loc_358BC ;~ 24ED:017E
loc_33631:
	// 6955 
cs=0x24ed;eip=0x000181; 	J(return seg002_3730_proc(m2c::kloc_36be0, _state););	// 104180 jmp     loc_36BE0 ;~ 24ED:0181
loc_33634:
	// 6956 
cs=0x24ed;eip=0x000184; 	J(return _group139(m2c::kloc_340cb, _state););	// 104184 jmp     loc_340CB ;~ 24ED:0184

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_33631: 	goto loc_33631;
        case m2c::kloc_33634: 	goto loc_33634;
        case m2c::kseg002_17e_proc: 	goto seg002_17e_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_33637(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_33637:
    _begin:
cs=0x24ed;eip=0x000187; 	J(return sub_33f26(0, _state););	// 104193 jmp     near ptr sub_33F26 ;~ 24ED:0187

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_33637: 	goto sub_33637;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_33e17(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_33e17:
    _begin:
cs=0x24ed;eip=0x000967; 	T(MOV(ah, 0x0F));	// 106220 mov     ah, 0Fh ;~ 24ED:0967
cs=0x24ed;eip=0x000969; 	S(_INT(0x10));	// 106221 int     10h             ; - VIDEO - GET CURRENT VIDEO MODE ;~ 24ED:0969
cs=0x24ed;eip=0x00096b; 	T(CMP(al, 0x13));	// 106225 cmp     al, 13h ;~ 24ED:096B
cs=0x24ed;eip=0x00096d; 	J(JZ(locret_33e24));	// 106226 jz      short locret_33E24 ;~ 24ED:096D
cs=0x24ed;eip=0x00096f; 	T(MOV(ax, 0x13));	// 106227 mov     ax, 13h ;~ 24ED:096F
cs=0x24ed;eip=0x000972; 	S(_INT(0x10));	// 106228 int     10h             ; - VIDEO - SET VIDEO MODE ;~ 24ED:0972
locret_33e24:
	// 6957 
cs=0x24ed;eip=0x000974; 	J(RETF(0));	// 106232 retf ;~ 24ED:0974

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::klocret_33e24: 	goto locret_33e24;
        case m2c::ksub_33e17: 	goto sub_33e17;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_33e25(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_33e25:
    _begin:
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000975; 	X(MOV(*(&byte_3366d), al));	// 106241 mov     cs:byte_3366D, al ;~ 24ED:0975
cs=0x24ed;eip=0x000979; 	X(PUSHF);	// 106242 pushf ;~ 24ED:0979
cs=0x24ed;eip=0x00097a; 	T(STI);	// 106243 sti ;~ 24ED:097A
cs=0x24ed;eip=0x00097b; 	T(MOV(ax, 0x40));	// 106244 mov     ax, 40h ; '@' ;~ 24ED:097B
cs=0x24ed;eip=0x00097e; 	T(MOV(es, ax));	// 106245 mov     es, ax ;~ 24ED:097E
cs=0x24ed;eip=0x000980; 	T(MOV(dx, *(dw*)(raddr(es,0x63))));	// 106247 mov     dx, es:63h ;~ 24ED:0980
cs=0x24ed;eip=0x000985; 	T(ADD(dl, 6));	// 106248 add     dl, 6 ;~ 24ED:0985
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000988; 	X(MOV(*(dw*)(((db*)&word_3364f)), dx));	// 106249 mov     cs:word_3364F, dx ;~ 24ED:0988
cs=0x24ed;eip=0x00098d; 	S(IN(al, dx));	// 106250 in      al, dx ;~ 24ED:098D
cs=0x24ed;eip=0x00098e; 	T(AND(al, 8));	// 106251 and     al, 8 ;~ 24ED:098E
cs=0x24ed;eip=0x000990; 	J(CALL(sub_33e68,0));	// 106252 call    sub_33E68 ;~ 24ED:0990
cs=0x24ed;eip=0x000993; 	J(JNC(loc_33e64));	// 106253 jnb     short loc_33E64 ;~ 24ED:0993
cs=0x24ed;eip=0x000995; 	J(CALL(sub_33e68,0));	// 106254 call    sub_33E68 ;~ 24ED:0995
cs=0x24ed;eip=0x000998; 	J(JNC(loc_33e64));	// 106255 jnb     short loc_33E64 ;~ 24ED:0998
cs=0x24ed;eip=0x00099a; 	T(MOV(di, si));	// 106256 mov     di, si ;~ 24ED:099A
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00099c; 	X(MOV(*(&byte_33652), ah));	// 106257 mov     cs:byte_33652, ah ;~ 24ED:099C
cs=0x24ed;eip=0x0009a1; 	J(CALL(sub_33e68,0));	// 106258 call    sub_33E68 ;~ 24ED:09A1
cs=0x24ed;eip=0x0009a4; 	J(JNC(loc_33e64));	// 106259 jnb     short loc_33E64 ;~ 24ED:09A4
cs=0x24ed;eip=0x0009a6; 	T(CMP(si, di));	// 106260 cmp     si, di ;~ 24ED:09A6
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0009a8; 	X(NOT(*(&byte_33651)));	// 106261 not     cs:byte_33651 ;~ 24ED:09A8
cs=0x24ed;eip=0x0009ad; 	J(JNC(loc_33e64));	// 106262 jnb     short loc_33E64 ;~ 24ED:09AD
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0009af; 	X(MOV(*(&byte_33652), ah));	// 106263 mov     cs:byte_33652, ah ;~ 24ED:09AF
loc_33e64:
	// 6958 
cs=0x24ed;eip=0x0009b4; 	X(POPF);	// 106267 popf ;~ 24ED:09B4
cs=0x24ed;eip=0x0009b5; 	J(return sub_33f81(m2c::kloc_33fb0, _state););	// 106268 jmp     loc_33FB0 ;~ 24ED:09B5

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_33e64: 	goto loc_33e64;
        case m2c::ksub_33e25: 	goto sub_33e25;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_33e68(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_33e68:
    _begin:
cs=0x24ed;eip=0x0009b8; 	T(MOV(ah, al));	// 106277 mov     ah, al ;~ 24ED:09B8
cs=0x24ed;eip=0x0009ba; 	T(XOR(si, si));	// 106278 xor     si, si ;~ 24ED:09BA
cs=0x24ed;eip=0x0009bc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 106279 mov     bx, [bp+0] ;~ 24ED:09BC
loc_33e6f:
	// 6959 
cs=0x24ed;eip=0x0009bf; 	T(INC(si));	// 106282 inc     si ;~ 24ED:09BF
cs=0x24ed;eip=0x0009c0; 	J(JNZ(loc_33e73));	// 106283 jnz     short loc_33E73 ;~ 24ED:09C0
cs=0x24ed;eip=0x0009c2; 	T(DEC(si));	// 106284 dec     si ;~ 24ED:09C2
loc_33e73:
	// 6960 
cs=0x24ed;eip=0x0009c3; 	S(IN(al, dx));	// 106287 in      al, dx ;~ 24ED:09C3
cs=0x24ed;eip=0x0009c4; 	T(AND(al, 8));	// 106288 and     al, 8 ;~ 24ED:09C4
cs=0x24ed;eip=0x0009c6; 	T(CMP(al, ah));	// 106289 cmp     al, ah ;~ 24ED:09C6
cs=0x24ed;eip=0x0009c8; 	J(JNZ(loc_33e87));	// 106290 jnz     short loc_33E87 ;~ 24ED:09C8
cs=0x24ed;eip=0x0009ca; 	X(PUSH(ax));	// 106291 push    ax ;~ 24ED:09CA
cs=0x24ed;eip=0x0009cb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 106292 mov     ax, [bp+0] ;~ 24ED:09CB
cs=0x24ed;eip=0x0009ce; 	T(SUB(ax, bx));	// 106293 sub     ax, bx ;~ 24ED:09CE
cs=0x24ed;eip=0x0009d0; 	T(CMP(ax, 0x64));	// 106294 cmp     ax, 64h ; 'd' ;~ 24ED:09D0
cs=0x24ed;eip=0x0009d3; 	X(POP(ax));	// 106295 pop     ax ;~ 24ED:09D3
cs=0x24ed;eip=0x0009d4; 	J(JC(loc_33e6f));	// 106296 jb      short loc_33E6F ;~ 24ED:09D4
cs=0x24ed;eip=0x0009d6; 	J(RETN(0));	// 106297 retn ;~ 24ED:09D6
loc_33e87:
	// 6961 
cs=0x24ed;eip=0x0009d7; 	T(STC);	// 106301 stc ;~ 24ED:09D7
cs=0x24ed;eip=0x0009d8; 	J(RETN(0));	// 106302 retn ;~ 24ED:09D8

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_33e6f: 	goto loc_33e6f;
        case m2c::kloc_33e73: 	goto loc_33e73;
        case m2c::kloc_33e87: 	goto loc_33e87;
        case m2c::ksub_33e68: 	goto sub_33e68;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_33e89(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_33e89:
    _begin:
cs=0x24ed;eip=0x0009d9; 	T(MOV(ax, 0x0A000));	// 106311 mov     ax, 0A000h ;~ 24ED:09D9
cs=0x24ed;eip=0x0009dc; 	T(MOV(cx, 0x0FA00));	// 106312 mov     cx, 0FA00h ;~ 24ED:09DC
cs=0x24ed;eip=0x0009df; 	T(XOR(bp, bp));	// 106313 xor     bp, bp ;~ 24ED:09DF
cs=0x24ed;eip=0x0009e1; 	J(RETF(0));	// 106314 retf ;~ 24ED:09E1

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_33e89: 	goto sub_33e89;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_33e92(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_33e92:
    _begin:
cs=0x24ed;eip=0x0009e2; 	X(PUSH(ax));	// 106322 push    ax ;~ 24ED:09E2
cs=0x24ed;eip=0x0009e3; 	X(PUSH(bx));	// 106323 push    bx ;~ 24ED:09E3
cs=0x24ed;eip=0x0009e4; 	X(PUSH(cx));	// 106324 push    cx ;~ 24ED:09E4
cs=0x24ed;eip=0x0009e5; 	X(PUSH(si));	// 106325 push    si ;~ 24ED:09E5
cs=0x24ed;eip=0x0009e6; 	X(PUSH(di));	// 106326 push    di ;~ 24ED:09E6
cs=0x24ed;eip=0x0009e7; 	X(PUSH(ds));	// 106327 push    ds ;~ 24ED:09E7
cs=0x24ed;eip=0x0009e8; 	X(PUSH(es));	// 106328 push    es ;~ 24ED:09E8
cs=0x24ed;eip=0x0009e9; 	X(PUSH(es));	// 106329 push    es ;~ 24ED:09E9
cs=0x24ed;eip=0x0009ea; 	X(POP(ds));	// 106330 pop     ds ;~ 24ED:09EA
cs=0x24ed;eip=0x0009eb; 	X(PUSH(cs));	// 106332 push    cs ;~ 24ED:09EB
cs=0x24ed;eip=0x0009ec; 	X(POP(es));	// 106333 pop     es ;~ 24ED:09EC
cs=0x24ed;eip=0x0009ed; 	T(MOV(di, 0x5BF));	// 106335 mov     di, 5BFh ;~ 24ED:09ED
cs=0x24ed;eip=0x0009f0; 	T(ADD(di, bx));	// 106336 add     di, bx ;~ 24ED:09F0
cs=0x24ed;eip=0x0009f2; 	T(MOV(ax, cx));	// 106337 mov     ax, cx ;~ 24ED:09F2
cs=0x24ed;eip=0x0009f4; 	T(MOV(si, dx));	// 106338 mov     si, dx ;~ 24ED:09F4
	// 106339 repe cmpsb ;~ 24ED:09F6
cs=0x24ed;eip=0x0009f6; 	T(	REPE CMPSB);	// 106339 repe cmpsb ;~ 24ED:09F6
cs=0x24ed;eip=0x0009f8; 	J(JZ(loc_33ec9));	// 106340 jz      short loc_33EC9 ;~ 24ED:09F8
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0009fa; 	X(MOV(*(&byte_3366e), 1));	// 106341 mov     cs:byte_3366E, 1 ;~ 24ED:09FA
cs=0x24ed;eip=0x000a00; 	T(MOV(di, 0x5BF));	// 106342 mov     di, 5BFh ;~ 24ED:0A00
cs=0x24ed;eip=0x000a03; 	T(ADD(di, bx));	// 106343 add     di, bx ;~ 24ED:0A03
cs=0x24ed;eip=0x000a05; 	T(MOV(si, dx));	// 106344 mov     si, dx ;~ 24ED:0A05
cs=0x24ed;eip=0x000a07; 	T(MOV(cx, ax));	// 106345 mov     cx, ax ;~ 24ED:0A07
cs=0x24ed;eip=0x000a09; 	X(PUSH(cx));	// 106346 push    cx ;~ 24ED:0A09
	// 106347 rep movsb ;~ 24ED:0A0A
cs=0x24ed;eip=0x000a0a; 	X(	REP MOVSB);	// 106347 rep movsb ;~ 24ED:0A0A
cs=0x24ed;eip=0x000a0c; 	X(POP(cx));	// 106348 pop     cx ;~ 24ED:0A0C
cs=0x24ed;eip=0x000a0d; 	J(CALL(sub_33ed1,0));	// 106349 call    sub_33ED1 ;~ 24ED:0A0D
cs=0x24ed;eip=0x000a10; 	T(MOV(di, 0x1BF));	// 106350 mov     di, 1BFh ;~ 24ED:0A10
cs=0x24ed;eip=0x000a13; 	T(ADD(di, bx));	// 106351 add     di, bx ;~ 24ED:0A13
cs=0x24ed;eip=0x000a15; 	T(MOV(al, 1));	// 106352 mov     al, 1 ;~ 24ED:0A15
	// 106353 rep stosb ;~ 24ED:0A17
cs=0x24ed;eip=0x000a17; 	X(	REP STOSB);	// 106353 rep stosb ;~ 24ED:0A17
loc_33ec9:
	// 6962 
cs=0x24ed;eip=0x000a19; 	X(POP(es));	// 106356 pop     es ;~ 24ED:0A19
cs=0x24ed;eip=0x000a1a; 	X(POP(ds));	// 106358 pop     ds ;~ 24ED:0A1A
cs=0x24ed;eip=0x000a1b; 	X(POP(di));	// 106360 pop     di ;~ 24ED:0A1B
cs=0x24ed;eip=0x000a1c; 	X(POP(si));	// 106361 pop     si ;~ 24ED:0A1C
cs=0x24ed;eip=0x000a1d; 	X(POP(cx));	// 106362 pop     cx ;~ 24ED:0A1D
cs=0x24ed;eip=0x000a1e; 	X(POP(bx));	// 106363 pop     bx ;~ 24ED:0A1E
cs=0x24ed;eip=0x000a1f; 	X(POP(ax));	// 106364 pop     ax ;~ 24ED:0A1F
cs=0x24ed;eip=0x000a20; 	J(RETF(0));	// 106365 retf ;~ 24ED:0A20

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_33ec9: 	goto loc_33ec9;
        case m2c::ksub_33e92: 	goto sub_33e92;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_33ed1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_33ed1:
    _begin:
cs=0x24ed;eip=0x000a21; 	X(PUSH(dx));	// 106375 push    dx ;~ 24ED:0A21
cs=0x24ed;eip=0x000a22; 	T(MOV(ax, bx));	// 106376 mov     ax, bx ;~ 24ED:0A22
cs=0x24ed;eip=0x000a24; 	T(MOV(dl, 3));	// 106377 mov     dl, 3 ;~ 24ED:0A24
cs=0x24ed;eip=0x000a26; 	T(DIV1(dl));	// 106378 div     dl ;~ 24ED:0A26
cs=0x24ed;eip=0x000a28; 	T(XOR(ah, ah));	// 106379 xor     ah, ah ;~ 24ED:0A28
cs=0x24ed;eip=0x000a2a; 	T(MOV(bx, ax));	// 106380 mov     bx, ax ;~ 24ED:0A2A
cs=0x24ed;eip=0x000a2c; 	T(MOV(ax, cx));	// 106381 mov     ax, cx ;~ 24ED:0A2C
cs=0x24ed;eip=0x000a2e; 	T(CMP(ax, 0x300));	// 106382 cmp     ax, 300h ;~ 24ED:0A2E
cs=0x24ed;eip=0x000a31; 	J(JNC(loc_33eeb));	// 106383 jnb     short loc_33EEB ;~ 24ED:0A31
cs=0x24ed;eip=0x000a33; 	T(DIV1(dl));	// 106384 div     dl ;~ 24ED:0A33
cs=0x24ed;eip=0x000a35; 	T(XOR(ah, ah));	// 106385 xor     ah, ah ;~ 24ED:0A35
cs=0x24ed;eip=0x000a37; 	T(MOV(cx, ax));	// 106386 mov     cx, ax ;~ 24ED:0A37
cs=0x24ed;eip=0x000a39; 	X(POP(dx));	// 106387 pop     dx ;~ 24ED:0A39
cs=0x24ed;eip=0x000a3a; 	J(RETN(0));	// 106388 retn ;~ 24ED:0A3A
loc_33eeb:
	// 6963 
cs=0x24ed;eip=0x000a3b; 	T(MOV(cx, 0x100));	// 106392 mov     cx, 100h ;~ 24ED:0A3B
cs=0x24ed;eip=0x000a3e; 	X(POP(dx));	// 106393 pop     dx ;~ 24ED:0A3E
cs=0x24ed;eip=0x000a3f; 	J(RETN(0));	// 106394 retn ;~ 24ED:0A3F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_33eeb: 	goto loc_33eeb;
        case m2c::ksub_33ed1: 	goto sub_33ed1;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_33ef0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_33ef0:
    _begin:
cs=0x24ed;eip=0x000a40; 	X(PUSH(cx));	// 106403 push    cx ;~ 24ED:0A40
cs=0x24ed;eip=0x000a41; 	X(PUSH(si));	// 106404 push    si ;~ 24ED:0A41
cs=0x24ed;eip=0x000a42; 	X(PUSH(di));	// 106405 push    di ;~ 24ED:0A42
cs=0x24ed;eip=0x000a43; 	X(PUSH(ds));	// 106406 push    ds ;~ 24ED:0A43
cs=0x24ed;eip=0x000a44; 	X(PUSH(es));	// 106407 push    es ;~ 24ED:0A44
cs=0x24ed;eip=0x000a45; 	X(PUSH(es));	// 106408 push    es ;~ 24ED:0A45
cs=0x24ed;eip=0x000a46; 	X(POP(ds));	// 106409 pop     ds ;~ 24ED:0A46
cs=0x24ed;eip=0x000a47; 	X(PUSH(cs));	// 106411 push    cs ;~ 24ED:0A47
cs=0x24ed;eip=0x000a48; 	X(POP(es));	// 106412 pop     es ;~ 24ED:0A48
cs=0x24ed;eip=0x000a49; 	T(MOV(di, 0x2BF));	// 106414 mov     di, 2BFh ;~ 24ED:0A49
cs=0x24ed;eip=0x000a4c; 	T(ADD(di, bx));	// 106415 add     di, bx ;~ 24ED:0A4C
cs=0x24ed;eip=0x000a4e; 	T(MOV(si, dx));	// 106416 mov     si, dx ;~ 24ED:0A4E
	// 106417 rep movsb ;~ 24ED:0A50
cs=0x24ed;eip=0x000a50; 	X(	REP MOVSB);	// 106417 rep movsb ;~ 24ED:0A50
cs=0x24ed;eip=0x000a52; 	X(POP(es));	// 106418 pop     es ;~ 24ED:0A52
cs=0x24ed;eip=0x000a53; 	X(POP(ds));	// 106420 pop     ds ;~ 24ED:0A53
cs=0x24ed;eip=0x000a54; 	X(POP(di));	// 106422 pop     di ;~ 24ED:0A54
cs=0x24ed;eip=0x000a55; 	X(POP(si));	// 106423 pop     si ;~ 24ED:0A55
cs=0x24ed;eip=0x000a56; 	X(POP(cx));	// 106424 pop     cx ;~ 24ED:0A56
cs=0x24ed;eip=0x000a57; 	J(RETF(0));	// 106425 retf ;~ 24ED:0A57

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_33ef0: 	goto sub_33ef0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_33f08(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_33f08:
    _begin:
cs=0x24ed;eip=0x000a58; 	X(PUSH(cs));	// 106434 push    cs ;~ 24ED:0A58
cs=0x24ed;eip=0x000a59; 	X(PUSH(cs));	// 106435 push    cs ;~ 24ED:0A59
cs=0x24ed;eip=0x000a5a; 	X(POP(ds));	// 106436 pop     ds ;~ 24ED:0A5A
cs=0x24ed;eip=0x000a5b; 	X(POP(es));	// 106438 pop     es ;~ 24ED:0A5B
cs=0x24ed;eip=0x000a5c; 	T(MOV(si, 0x5BF));	// 106440 mov     si, 5BFh ;~ 24ED:0A5C
cs=0x24ed;eip=0x000a5f; 	T(MOV(di, 0x2BF));	// 106441 mov     di, 2BFh ;~ 24ED:0A5F
cs=0x24ed;eip=0x000a62; 	T(MOV(cx, 0x180));	// 106442 mov     cx, 180h ;~ 24ED:0A62
	// 106443 rep movsw ;~ 24ED:0A65
cs=0x24ed;eip=0x000a65; 	X(	REP MOVSW);	// 106443 rep movsw ;~ 24ED:0A65
cs=0x24ed;eip=0x000a67; 	J(RETN(0));	// 106444 retn ;~ 24ED:0A67

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_33f08: 	goto sub_33f08;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_33f18(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_33f18:
    _begin:
cs=0x24ed;eip=0x000a68; 	X(PUSH(cx));	// 106453 push    cx ;~ 24ED:0A68
cs=0x24ed;eip=0x000a69; 	X(PUSH(si));	// 106454 push    si ;~ 24ED:0A69
cs=0x24ed;eip=0x000a6a; 	X(PUSH(di));	// 106455 push    di ;~ 24ED:0A6A
cs=0x24ed;eip=0x000a6b; 	X(PUSH(ds));	// 106456 push    ds ;~ 24ED:0A6B
cs=0x24ed;eip=0x000a6c; 	X(PUSH(es));	// 106457 push    es ;~ 24ED:0A6C
cs=0x24ed;eip=0x000a6d; 	J(CALL(sub_33f08,0));	// 106458 call    sub_33F08 ;~ 24ED:0A6D
cs=0x24ed;eip=0x000a70; 	X(POP(es));	// 106460 pop     es ;~ 24ED:0A70
cs=0x24ed;eip=0x000a71; 	X(POP(ds));	// 106462 pop     ds ;~ 24ED:0A71
cs=0x24ed;eip=0x000a72; 	X(POP(di));	// 106464 pop     di ;~ 24ED:0A72
cs=0x24ed;eip=0x000a73; 	X(POP(si));	// 106465 pop     si ;~ 24ED:0A73
cs=0x24ed;eip=0x000a74; 	X(POP(cx));	// 106466 pop     cx ;~ 24ED:0A74
cs=0x24ed;eip=0x000a75; 	J(RETF(0));	// 106467 retf ;~ 24ED:0A75

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_33f18: 	goto sub_33f18;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_33f26(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_33f26:
    _begin:
cs=0x24ed;eip=0x000a76; 	X(PUSH(ax));	// 106476 push    ax ;~ 24ED:0A76
cs=0x24ed;eip=0x000a77; 	X(PUSH(cx));	// 106477 push    cx ;~ 24ED:0A77
cs=0x24ed;eip=0x000a78; 	X(PUSH(si));	// 106478 push    si ;~ 24ED:0A78
cs=0x24ed;eip=0x000a79; 	X(PUSH(di));	// 106479 push    di ;~ 24ED:0A79
cs=0x24ed;eip=0x000a7a; 	X(PUSH(ds));	// 106480 push    ds ;~ 24ED:0A7A
cs=0x24ed;eip=0x000a7b; 	X(PUSH(es));	// 106481 push    es ;~ 24ED:0A7B
cs=0x24ed;eip=0x000a7c; 	X(PUSH(cs));	// 106482 push    cs ;~ 24ED:0A7C
cs=0x24ed;eip=0x000a7d; 	X(PUSH(cs));	// 106483 push    cs ;~ 24ED:0A7D
cs=0x24ed;eip=0x000a7e; 	X(POP(ds));	// 106484 pop     ds ;~ 24ED:0A7E
cs=0x24ed;eip=0x000a7f; 	X(POP(es));	// 106486 pop     es ;~ 24ED:0A7F
cs=0x24ed;eip=0x000a80; 	T(MOV(si, 0x5BF));	// 106488 mov     si, 5BFh ;~ 24ED:0A80
cs=0x24ed;eip=0x000a83; 	T(MOV(di, 0x2BF));	// 106489 mov     di, 2BFh ;~ 24ED:0A83
cs=0x24ed;eip=0x000a86; 	T(MOV(cx, 0x180));	// 106490 mov     cx, 180h ;~ 24ED:0A86
loc_33f39:
	// 6964 
cs=0x24ed;eip=0x000a89; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 106493 mov     ax, [di] ;~ 24ED:0A89
cs=0x24ed;eip=0x000a8b; 	X(XCHG(ax, *(dw*)(raddr(ds,si))));	// 106494 xchg    ax, [si] ;~ 24ED:0A8B
cs=0x24ed;eip=0x000a8d; 	X(STOSW);	// 106495 stosw ;~ 24ED:0A8D
cs=0x24ed;eip=0x000a8e; 	T(ADD(si, 2));	// 106496 add     si, 2 ;~ 24ED:0A8E
cs=0x24ed;eip=0x000a91; 	J(LOOP(loc_33f39));	// 106497 loop    loc_33F39 ;~ 24ED:0A91
cs=0x24ed;eip=0x000a93; 	T(MOV(al, 1));	// 106498 mov     al, 1 ;~ 24ED:0A93
cs=0x24ed;eip=0x000a95; 	T(MOV(di, 0x1BE));	// 106499 mov     di, 1BEh ;~ 24ED:0A95
cs=0x24ed;eip=0x000a98; 	T(MOV(cx, 0x101));	// 106500 mov     cx, 101h ;~ 24ED:0A98
	// 106501 rep stosb ;~ 24ED:0A9B
cs=0x24ed;eip=0x000a9b; 	X(	REP STOSB);	// 106501 rep stosb ;~ 24ED:0A9B
cs=0x24ed;eip=0x000a9d; 	X(POP(es));	// 106502 pop     es ;~ 24ED:0A9D
cs=0x24ed;eip=0x000a9e; 	X(POP(ds));	// 106504 pop     ds ;~ 24ED:0A9E
cs=0x24ed;eip=0x000a9f; 	X(POP(di));	// 106506 pop     di ;~ 24ED:0A9F
cs=0x24ed;eip=0x000aa0; 	X(POP(si));	// 106507 pop     si ;~ 24ED:0AA0
cs=0x24ed;eip=0x000aa1; 	X(POP(cx));	// 106508 pop     cx ;~ 24ED:0AA1
cs=0x24ed;eip=0x000aa2; 	X(POP(ax));	// 106509 pop     ax ;~ 24ED:0AA2
cs=0x24ed;eip=0x000aa3; 	J(RETF(0));	// 106510 retf ;~ 24ED:0AA3

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_33f39: 	goto loc_33f39;
        case m2c::ksub_33f26: 	goto sub_33f26;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_aa4_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_aa4_proc:
    _begin:
loc_33f54:
	// 6965 
cs=0x24ed;eip=0x000aa4; 	X(PUSHA);	// 106516 pusha ;~ 24ED:0AA4
cs=0x24ed;eip=0x000aa5; 	X(PUSH(es));	// 106517 push    es ;~ 24ED:0AA5
cs=0x24ed;eip=0x000aa6; 	X(PUSH(ds));	// 106518 push    ds ;~ 24ED:0AA6
cs=0x24ed;eip=0x000aa7; 	X(PUSH(cs));	// 106519 push    cs ;~ 24ED:0AA7
cs=0x24ed;eip=0x000aa8; 	X(POP(ds));	// 106520 pop     ds ;~ 24ED:0AA8
cs=0x24ed;eip=0x000aa9; 	X(PUSH(cs));	// 106522 push    cs ;~ 24ED:0AA9
cs=0x24ed;eip=0x000aaa; 	X(POP(es));	// 106523 pop     es ;~ 24ED:0AAA
cs=0x24ed;eip=0x000aab; 	T(MOV(si, 0x5BF));	// 106525 mov     si, 5BFh ;~ 24ED:0AAB
cs=0x24ed;eip=0x000aae; 	T(ADD(si, bx));	// 106526 add     si, bx ;~ 24ED:0AAE
cs=0x24ed;eip=0x000ab0; 	T(di = si-0x300);	// 106527 lea     di, [si-300h] ;~ 24ED:0AB0
cs=0x24ed;eip=0x000ab4; 	T(MOV(dx, si));	// 106528 mov     dx, si ;~ 24ED:0AB4
cs=0x24ed;eip=0x000ab6; 	X(PUSH(cx));	// 106529 push    cx ;~ 24ED:0AB6
	// 106530 rep movsb ;~ 24ED:0AB7
cs=0x24ed;eip=0x000ab7; 	X(	REP MOVSB);	// 106530 rep movsb ;~ 24ED:0AB7
cs=0x24ed;eip=0x000ab9; 	X(POP(cx));	// 106531 pop     cx ;~ 24ED:0AB9
cs=0x24ed;eip=0x000aba; 	T(MOV(di, dx));	// 106532 mov     di, dx ;~ 24ED:0ABA
cs=0x24ed;eip=0x000abc; 	T(XOR(ax, ax));	// 106533 xor     ax, ax ;~ 24ED:0ABC
cs=0x24ed;eip=0x000abe; 	X(PUSH(cx));	// 106534 push    cx ;~ 24ED:0ABE
	// 106535 rep stosb ;~ 24ED:0ABF
cs=0x24ed;eip=0x000abf; 	X(	REP STOSB);	// 106535 rep stosb ;~ 24ED:0ABF
cs=0x24ed;eip=0x000ac1; 	X(POP(cx));	// 106536 pop     cx ;~ 24ED:0AC1
cs=0x24ed;eip=0x000ac2; 	J(CALL(sub_33ed1,0));	// 106537 call    sub_33ED1 ;~ 24ED:0AC2
cs=0x24ed;eip=0x000ac5; 	T(MOV(di, 0x1BE));	// 106538 mov     di, 1BEh ;~ 24ED:0AC5
cs=0x24ed;eip=0x000ac8; 	T(MOV(al, 1));	// 106539 mov     al, 1 ;~ 24ED:0AC8
cs=0x24ed;eip=0x000aca; 	X(STOSB);	// 106540 stosb ;~ 24ED:0ACA
cs=0x24ed;eip=0x000acb; 	T(ADD(di, bx));	// 106541 add     di, bx ;~ 24ED:0ACB
	// 106542 rep stosb ;~ 24ED:0ACD
cs=0x24ed;eip=0x000acd; 	X(	REP STOSB);	// 106542 rep stosb ;~ 24ED:0ACD
cs=0x24ed;eip=0x000acf; 	J(return sub_33f81(m2c::kloc_33fad, _state););	// 106543 jmp     short loc_33FAD ;~ 24ED:0ACF

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_33f54: 	goto loc_33f54;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_33f81(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_33f81:
    _begin:
cs=0x24ed;eip=0x000ad1; 	X(PUSHA);	// 106550 pusha ;~ 24ED:0AD1
cs=0x24ed;eip=0x000ad2; 	X(PUSH(es));	// 106551 push    es ;~ 24ED:0AD2
cs=0x24ed;eip=0x000ad3; 	X(PUSH(ds));	// 106552 push    ds ;~ 24ED:0AD3
cs=0x24ed;eip=0x000ad4; 	X(PUSH(cs));	// 106553 push    cs ;~ 24ED:0AD4
cs=0x24ed;eip=0x000ad5; 	X(POP(ds));	// 106554 pop     ds ;~ 24ED:0AD5
cs=0x24ed;eip=0x000ad6; 	X(PUSH(cs));	// 106556 push    cs ;~ 24ED:0AD6
cs=0x24ed;eip=0x000ad7; 	X(POP(es));	// 106557 pop     es ;~ 24ED:0AD7
cs=0x24ed;eip=0x000ad8; 	T(MOV(dl, al));	// 106559 mov     dl, al ;~ 24ED:0AD8
cs=0x24ed;eip=0x000ada; 	T(OR(dl, dl));	// 106560 or      dl, dl ;~ 24ED:0ADA
cs=0x24ed;eip=0x000adc; 	J(JNZ(loc_33f8f));	// 106561 jnz     short loc_33F8F ;~ 24ED:0ADC
cs=0x24ed;eip=0x000ade; 	T(INC(dx));	// 106562 inc     dx ;~ 24ED:0ADE
loc_33f8f:
	// 6966 
cs=0x24ed;eip=0x000adf; 	T(MOV(di, 0x5BF));	// 106565 mov     di, 5BFh ;~ 24ED:0ADF
cs=0x24ed;eip=0x000ae2; 	T(ADD(di, bx));	// 106566 add     di, bx ;~ 24ED:0AE2
cs=0x24ed;eip=0x000ae4; 	T(si = di-0x300);	// 106567 lea     si, [di-300h] ;~ 24ED:0AE4
cs=0x24ed;eip=0x000ae8; 	X(PUSH(di));	// 106568 push    di ;~ 24ED:0AE8
cs=0x24ed;eip=0x000ae9; 	X(PUSH(cx));	// 106569 push    cx ;~ 24ED:0AE9
loc_33f9a:
	// 6967 
cs=0x24ed;eip=0x000aea; 	T(LODSB);	// 106572 lodsb ;~ 24ED:0AEA
cs=0x24ed;eip=0x000aeb; 	T(SUB(al, *(raddr(ds,di))));	// 106573 sub     al, [di] ;~ 24ED:0AEB
cs=0x24ed;eip=0x000aed; 	T(CBW);	// 106574 cbw ;~ 24ED:0AED
cs=0x24ed;eip=0x000aee; 	T(IDIV1(dl));	// 106575 idiv    dl ;~ 24ED:0AEE
cs=0x24ed;eip=0x000af0; 	T(ADD(al, *(raddr(ds,di))));	// 106576 add     al, [di] ;~ 24ED:0AF0
cs=0x24ed;eip=0x000af2; 	X(STOSB);	// 106577 stosb ;~ 24ED:0AF2
cs=0x24ed;eip=0x000af3; 	J(LOOP(loc_33f9a));	// 106578 loop    loc_33F9A ;~ 24ED:0AF3
cs=0x24ed;eip=0x000af5; 	X(POP(cx));	// 106579 pop     cx ;~ 24ED:0AF5
cs=0x24ed;eip=0x000af6; 	J(CALL(sub_33ed1,0));	// 106580 call    sub_33ED1 ;~ 24ED:0AF6
cs=0x24ed;eip=0x000af9; 	X(POP(dx));	// 106581 pop     dx ;~ 24ED:0AF9
cs=0x24ed;eip=0x000afa; 	J(CALL(sub_34000,0));	// 106582 call    sub_34000 ;~ 24ED:0AFA
loc_33fad:
	// 6968 
cs=0x24ed;eip=0x000afd; 	X(POP(ds));	// 106585 pop     ds ;~ 24ED:0AFD
cs=0x24ed;eip=0x000afe; 	J(JMP(loc_33ffd));	// 106587 jmp     short loc_33FFD ;~ 24ED:0AFE
loc_33fb0:
	// 6969 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000b00; 	T(CMP(*(&byte_3366e), 0));	// 106592 cmp     cs:byte_3366E, 0 ;~ 24ED:0B00
cs=0x24ed;eip=0x000b06; 	J(JZ(locret_33fff));	// 106593 jz      short locret_33FFF ;~ 24ED:0B06
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000b08; 	X(MOV(*(&byte_3366e), 0));	// 106594 mov     cs:byte_3366E, 0 ;~ 24ED:0B08
cs=0x24ed;eip=0x000b0e; 	X(PUSHA);	// 106595 pusha ;~ 24ED:0B0E
cs=0x24ed;eip=0x000b0f; 	X(PUSH(es));	// 106596 push    es ;~ 24ED:0B0F
cs=0x24ed;eip=0x000b10; 	X(PUSH(cs));	// 106597 push    cs ;~ 24ED:0B10
cs=0x24ed;eip=0x000b11; 	X(POP(es));	// 106598 pop     es ;~ 24ED:0B11
cs=0x24ed;eip=0x000b12; 	T(MOV(di, 0x1BF));	// 106599 mov     di, 1BFh ;~ 24ED:0B12
cs=0x24ed;eip=0x000b15; 	T(MOV(cx, 0x100));	// 106600 mov     cx, 100h ;~ 24ED:0B15
loc_33fc8:
	// 6970 
cs=0x24ed;eip=0x000b18; 	T(XOR(al, al));	// 106603 xor     al, al ;~ 24ED:0B18
	// 106604 repe scasb ;~ 24ED:0B1A
cs=0x24ed;eip=0x000b1a; 	T(	REPE SCASB);	// 106604 repe scasb ;~ 24ED:0B1A
cs=0x24ed;eip=0x000b1c; 	J(JZ(loc_33ff3));	// 106605 jz      short loc_33FF3 ;~ 24ED:0B1C
cs=0x24ed;eip=0x000b1e; 	T(DEC(di));	// 106606 dec     di ;~ 24ED:0B1E
cs=0x24ed;eip=0x000b1f; 	T(INC(cx));	// 106607 inc     cx ;~ 24ED:0B1F
cs=0x24ed;eip=0x000b20; 	T(MOV(bx, cx));	// 106608 mov     bx, cx ;~ 24ED:0B20
	// 106609 repne scasb ;~ 24ED:0B22
cs=0x24ed;eip=0x000b22; 	T(	REPNE SCASB);	// 106609 repne scasb ;~ 24ED:0B22
cs=0x24ed;eip=0x000b24; 	X(PUSH(cx));	// 106610 push    cx ;~ 24ED:0B24
cs=0x24ed;eip=0x000b25; 	J(JNZ(loc_33fd8));	// 106611 jnz     short loc_33FD8 ;~ 24ED:0B25
cs=0x24ed;eip=0x000b27; 	T(INC(cx));	// 106612 inc     cx ;~ 24ED:0B27
loc_33fd8:
	// 6971 
cs=0x24ed;eip=0x000b28; 	T(SUB(cx, bx));	// 106615 sub     cx, bx ;~ 24ED:0B28
cs=0x24ed;eip=0x000b2a; 	T(NEG(cx));	// 106616 neg     cx ;~ 24ED:0B2A
cs=0x24ed;eip=0x000b2c; 	T(MOV(dx, 0x100));	// 106617 mov     dx, 100h ;~ 24ED:0B2C
cs=0x24ed;eip=0x000b2f; 	T(SUB(dx, bx));	// 106618 sub     dx, bx ;~ 24ED:0B2F
cs=0x24ed;eip=0x000b31; 	T(MOV(bx, dx));	// 106619 mov     bx, dx ;~ 24ED:0B31
cs=0x24ed;eip=0x000b33; 	T(ADD(dx, dx));	// 106620 add     dx, dx ;~ 24ED:0B33
cs=0x24ed;eip=0x000b35; 	T(ADD(dx, bx));	// 106621 add     dx, bx ;~ 24ED:0B35
cs=0x24ed;eip=0x000b37; 	T(ADD(dx, 0x5BF));	// 106622 add     dx, 5BFh ;~ 24ED:0B37
cs=0x24ed;eip=0x000b3b; 	J(CALL(sub_34000,0));	// 106623 call    sub_34000 ;~ 24ED:0B3B
cs=0x24ed;eip=0x000b3e; 	X(POP(cx));	// 106624 pop     cx ;~ 24ED:0B3E
cs=0x24ed;eip=0x000b3f; 	T(OR(cx, cx));	// 106625 or      cx, cx ;~ 24ED:0B3F
cs=0x24ed;eip=0x000b41; 	J(JNZ(loc_33fc8));	// 106626 jnz     short loc_33FC8 ;~ 24ED:0B41
loc_33ff3:
	// 6972 
cs=0x24ed;eip=0x000b43; 	T(MOV(di, 0x1BF));	// 106629 mov     di, 1BFh ;~ 24ED:0B43
cs=0x24ed;eip=0x000b46; 	T(MOV(cx, 0x80));	// 106630 mov     cx, 80h ; '€' ;~ 24ED:0B46
cs=0x24ed;eip=0x000b49; 	T(XOR(ax, ax));	// 106631 xor     ax, ax ;~ 24ED:0B49
	// 106632 rep stosw ;~ 24ED:0B4B
cs=0x24ed;eip=0x000b4b; 	X(	REP STOSW);	// 106632 rep stosw ;~ 24ED:0B4B
loc_33ffd:
	// 6973 
cs=0x24ed;eip=0x000b4d; 	X(POP(es));	// 106635 pop     es ;~ 24ED:0B4D
cs=0x24ed;eip=0x000b4e; 	X(POPA);	// 106637 popa ;~ 24ED:0B4E
locret_33fff:
	// 6974 
cs=0x24ed;eip=0x000b4f; 	J(RETF(0));	// 106640 retf ;~ 24ED:0B4F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_33f8f: 	goto loc_33f8f;
        case m2c::kloc_33f9a: 	goto loc_33f9a;
        case m2c::kloc_33fad: 	goto loc_33fad;
        case m2c::kloc_33fb0: 	goto loc_33fb0;
        case m2c::kloc_33fc8: 	goto loc_33fc8;
        case m2c::kloc_33fd8: 	goto loc_33fd8;
        case m2c::kloc_33ff3: 	goto loc_33ff3;
        case m2c::kloc_33ffd: 	goto loc_33ffd;
        case m2c::klocret_33fff: 	goto locret_33fff;
        case m2c::ksub_33f81: 	goto sub_33f81;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_34000(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_34000:
    _begin:
cs=0x24ed;eip=0x000b50; 	X(PUSH(si));	// 106650 push    si ;~ 24ED:0B50
cs=0x24ed;eip=0x000b51; 	X(PUSH(ds));	// 106651 push    ds ;~ 24ED:0B51
cs=0x24ed;eip=0x000b52; 	X(PUSH(es));	// 106652 push    es ;~ 24ED:0B52
cs=0x24ed;eip=0x000b53; 	X(POP(ds));	// 106653 pop     ds ;~ 24ED:0B53
cs=0x24ed;eip=0x000b54; 	T(MOV(si, dx));	// 106655 mov     si, dx ;~ 24ED:0B54
cs=0x24ed;eip=0x000b56; 	X(PUSHF);	// 106656 pushf ;~ 24ED:0B56
cs=0x24ed;eip=0x000b57; 	T(CMP(byte_33651, 0));	// 106657 cmp     byte_33651, 0 ;~ 24ED:0B57
cs=0x24ed;eip=0x000b5c; 	J(JZ(loc_3401b));	// 106658 jz      short loc_3401B ;~ 24ED:0B5C
cs=0x24ed;eip=0x000b5e; 	T(MOV(dx, word_3364f));	// 106659 mov     dx, word_3364F ;~ 24ED:0B5E
loc_34012:
	// 6975 
cs=0x24ed;eip=0x000b62; 	S(IN(al, dx));	// 106662 in      al, dx ;~ 24ED:0B62
cs=0x24ed;eip=0x000b63; 	T(AND(al, 8));	// 106663 and     al, 8 ;~ 24ED:0B63
cs=0x24ed;eip=0x000b65; 	T(CMP(al, byte_33652));	// 106664 cmp     al, byte_33652 ;~ 24ED:0B65
cs=0x24ed;eip=0x000b69; 	J(JNZ(loc_34012));	// 106665 jnz     short loc_34012 ;~ 24ED:0B69
loc_3401b:
	// 6976 
cs=0x24ed;eip=0x000b6b; 	T(CLI);	// 106668 cli ;~ 24ED:0B6B
cs=0x24ed;eip=0x000b6c; 	T(MOV(dx, 0x3C8));	// 106669 mov     dx, 3C8h ;~ 24ED:0B6C
cs=0x24ed;eip=0x000b6f; 	T(MOV(al, bl));	// 106670 mov     al, bl ;~ 24ED:0B6F
cs=0x24ed;eip=0x000b71; 	S(OUT(dx, al));	// 106671 out     dx, al ;~ 24ED:0B71
cs=0x24ed;eip=0x000b72; 	J({;});	// 106672 jmp     short $+2 ;~ 24ED:0B72
loc_34024:
	// 6977 
cs=0x24ed;eip=0x000b74; 	J({;});	// 106676 jmp     short $+2 ;~ 24ED:0B74
loc_34026:
	// 6978 
cs=0x24ed;eip=0x000b76; 	J({;});	// 106680 jmp     short $+2 ;~ 24ED:0B76
loc_34028:
	// 6979 
cs=0x24ed;eip=0x000b78; 	J({;});	// 106684 jmp     short $+2 ;~ 24ED:0B78
loc_3402a:
	// 6980 
cs=0x24ed;eip=0x000b7a; 	T(INC(dx));	// 106688 inc     dx ;~ 24ED:0B7A
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000b7b; 	T(CMP(*(&byte_3366d), 0));	// 106689 cmp     cs:byte_3366D, 0 ;~ 24ED:0B7B
cs=0x24ed;eip=0x000b81; 	J(JNZ(loc_34041));	// 106690 jnz     short loc_34041 ;~ 24ED:0B81
cs=0x24ed;eip=0x000b83; 	T(MOV(ax, cx));	// 106691 mov     ax, cx ;~ 24ED:0B83
cs=0x24ed;eip=0x000b85; 	T(ADD(cx, cx));	// 106692 add     cx, cx ;~ 24ED:0B85
cs=0x24ed;eip=0x000b87; 	T(ADD(cx, ax));	// 106693 add     cx, ax ;~ 24ED:0B87
loc_34039:
	// 6981 
cs=0x24ed;eip=0x000b89; 	T(LODSB);	// 106696 lodsb ;~ 24ED:0B89
cs=0x24ed;eip=0x000b8a; 	S(OUT(dx, al));	// 106697 out     dx, al ;~ 24ED:0B8A
cs=0x24ed;eip=0x000b8b; 	J(LOOP(loc_34039));	// 106698 loop    loc_34039 ;~ 24ED:0B8B
cs=0x24ed;eip=0x000b8d; 	X(POPF);	// 106699 popf ;~ 24ED:0B8D
cs=0x24ed;eip=0x000b8e; 	X(POP(ds));	// 106700 pop     ds ;~ 24ED:0B8E
cs=0x24ed;eip=0x000b8f; 	X(POP(si));	// 106702 pop     si ;~ 24ED:0B8F
cs=0x24ed;eip=0x000b90; 	J(RETN(0));	// 106703 retn ;~ 24ED:0B90
loc_34041:
	// 6982 
cs=0x24ed;eip=0x000b91; 	T(LODSB);	// 106708 lodsb ;~ 24ED:0B91
cs=0x24ed;eip=0x000b92; 	T(AND(ax, 0x3F));	// 106709 and     ax, 3Fh ;~ 24ED:0B92
cs=0x24ed;eip=0x000b95; 	T(MOV(bp, ax));	// 106710 mov     bp, ax ;~ 24ED:0B95
cs=0x24ed;eip=0x000b97; 	T(SHL(bp, 1));	// 106711 shl     bp, 1 ;~ 24ED:0B97
cs=0x24ed;eip=0x000b99; 	T(SHL(bp, 1));	// 106712 shl     bp, 1 ;~ 24ED:0B99
cs=0x24ed;eip=0x000b9b; 	T(ADD(bp, ax));	// 106713 add     bp, ax ;~ 24ED:0B9B
cs=0x24ed;eip=0x000b9d; 	T(LODSB);	// 106714 lodsb ;~ 24ED:0B9D
cs=0x24ed;eip=0x000b9e; 	T(AND(al, 0x3F));	// 106715 and     al, 3Fh ;~ 24ED:0B9E
cs=0x24ed;eip=0x000ba0; 	T(MOV(bx, ax));	// 106716 mov     bx, ax ;~ 24ED:0BA0
cs=0x24ed;eip=0x000ba2; 	T(SHL(bx, 1));	// 106717 shl     bx, 1 ;~ 24ED:0BA2
cs=0x24ed;eip=0x000ba4; 	T(SHL(bx, 1));	// 106718 shl     bx, 1 ;~ 24ED:0BA4
cs=0x24ed;eip=0x000ba6; 	T(SHL(bx, 1));	// 106719 shl     bx, 1 ;~ 24ED:0BA6
cs=0x24ed;eip=0x000ba8; 	T(ADD(bx, ax));	// 106720 add     bx, ax ;~ 24ED:0BA8
cs=0x24ed;eip=0x000baa; 	T(LODSB);	// 106721 lodsb ;~ 24ED:0BAA
cs=0x24ed;eip=0x000bab; 	T(AND(al, 0x3F));	// 106722 and     al, 3Fh ;~ 24ED:0BAB
cs=0x24ed;eip=0x000bad; 	T(SHL(ax, 1));	// 106723 shl     ax, 1 ;~ 24ED:0BAD
cs=0x24ed;eip=0x000baf; 	T(ADD(ax, bp));	// 106724 add     ax, bp ;~ 24ED:0BAF
cs=0x24ed;eip=0x000bb1; 	T(ADD(ax, bx));	// 106725 add     ax, bx ;~ 24ED:0BB1
cs=0x24ed;eip=0x000bb3; 	T(SHR(ax, 1));	// 106726 shr     ax, 1 ;~ 24ED:0BB3
cs=0x24ed;eip=0x000bb5; 	T(SHR(ax, 1));	// 106727 shr     ax, 1 ;~ 24ED:0BB5
cs=0x24ed;eip=0x000bb7; 	T(SHR(ax, 1));	// 106728 shr     ax, 1 ;~ 24ED:0BB7
cs=0x24ed;eip=0x000bb9; 	T(SHR(ax, 1));	// 106729 shr     ax, 1 ;~ 24ED:0BB9
cs=0x24ed;eip=0x000bbb; 	S(OUT(dx, al));	// 106730 out     dx, al ;~ 24ED:0BBB
cs=0x24ed;eip=0x000bbc; 	S(OUT(dx, al));	// 106731 out     dx, al ;~ 24ED:0BBC
cs=0x24ed;eip=0x000bbd; 	S(OUT(dx, al));	// 106732 out     dx, al ;~ 24ED:0BBD
cs=0x24ed;eip=0x000bbe; 	J(LOOP(loc_34041));	// 106733 loop    loc_34041 ;~ 24ED:0BBE
cs=0x24ed;eip=0x000bc0; 	X(POPF);	// 106734 popf ;~ 24ED:0BC0
cs=0x24ed;eip=0x000bc1; 	X(POP(ds));	// 106735 pop     ds ;~ 24ED:0BC1
cs=0x24ed;eip=0x000bc2; 	X(POP(si));	// 106736 pop     si ;~ 24ED:0BC2
cs=0x24ed;eip=0x000bc3; 	J(RETN(0));	// 106737 retn ;~ 24ED:0BC3

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_34012: 	goto loc_34012;
        case m2c::kloc_3401b: 	goto loc_3401b;
        case m2c::kloc_34024: 	goto loc_34024;
        case m2c::kloc_34026: 	goto loc_34026;
        case m2c::kloc_34028: 	goto loc_34028;
        case m2c::kloc_3402a: 	goto loc_3402a;
        case m2c::kloc_34039: 	goto loc_34039;
        case m2c::kloc_34041: 	goto loc_34041;
        case m2c::ksub_34000: 	goto sub_34000;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_34074(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_34074:
    _begin:
cs=0x24ed;eip=0x000bc4; 	X(PUSH(si));	// 106745 push    si ;~ 24ED:0BC4
cs=0x24ed;eip=0x000bc5; 	X(PUSH(ds));	// 106746 push    ds ;~ 24ED:0BC5
cs=0x24ed;eip=0x000bc6; 	X(PUSH(es));	// 106747 push    es ;~ 24ED:0BC6
cs=0x24ed;eip=0x000bc7; 	X(PUSH(cs));	// 106748 push    cs ;~ 24ED:0BC7
cs=0x24ed;eip=0x000bc8; 	X(PUSH(cs));	// 106749 push    cs ;~ 24ED:0BC8
cs=0x24ed;eip=0x000bc9; 	X(POP(ds));	// 106750 pop     ds ;~ 24ED:0BC9
cs=0x24ed;eip=0x000bca; 	X(POP(es));	// 106752 pop     es ;~ 24ED:0BCA
cs=0x24ed;eip=0x000bcb; 	T(MOV(si, 0x73F));	// 106754 mov     si, 73Fh ;~ 24ED:0BCB
cs=0x24ed;eip=0x000bce; 	T(MOV(dx, si));	// 106755 mov     dx, si ;~ 24ED:0BCE
cs=0x24ed;eip=0x000bd0; 	T(MOV(di, si));	// 106756 mov     di, si ;~ 24ED:0BD0
cs=0x24ed;eip=0x000bd2; 	T(LODSW);	// 106757 lodsw ;~ 24ED:0BD2
cs=0x24ed;eip=0x000bd3; 	T(MOV(bl, *(raddr(ds,si))));	// 106758 mov     bl, [si] ;~ 24ED:0BD3
cs=0x24ed;eip=0x000bd5; 	T(INC(si));	// 106759 inc     si ;~ 24ED:0BD5
cs=0x24ed;eip=0x000bd6; 	T(MOV(cx, 0x5E));	// 106760 mov     cx, 5Eh ; '^' ;~ 24ED:0BD6
	// 106761 rep movsw ;~ 24ED:0BD9
cs=0x24ed;eip=0x000bd9; 	X(	REP MOVSW);	// 106761 rep movsw ;~ 24ED:0BD9
cs=0x24ed;eip=0x000bdb; 	X(MOVSB);	// 106762 movsb ;~ 24ED:0BDB
cs=0x24ed;eip=0x000bdc; 	X(STOSW);	// 106763 stosw ;~ 24ED:0BDC
cs=0x24ed;eip=0x000bdd; 	X(MOV(*(raddr(ds,di)), bl));	// 106764 mov     [di], bl ;~ 24ED:0BDD
cs=0x24ed;eip=0x000bdf; 	T(MOV(bx, 0x80));	// 106765 mov     bx, 80h ; '€' ;~ 24ED:0BDF
cs=0x24ed;eip=0x000be2; 	T(MOV(cx, 0x40));	// 106766 mov     cx, 40h ; '@' ;~ 24ED:0BE2
cs=0x24ed;eip=0x000be5; 	J(CALL(sub_34000,0));	// 106767 call    sub_34000 ;~ 24ED:0BE5
cs=0x24ed;eip=0x000be8; 	X(POP(es));	// 106768 pop     es ;~ 24ED:0BE8
cs=0x24ed;eip=0x000be9; 	X(POP(ds));	// 106769 pop     ds ;~ 24ED:0BE9
cs=0x24ed;eip=0x000bea; 	X(POP(si));	// 106771 pop     si ;~ 24ED:0BEA
cs=0x24ed;eip=0x000beb; 	J(RETN(0));	// 106772 retn ;~ 24ED:0BEB

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_34074: 	goto sub_34074;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool nullsub_20(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    nullsub_20:
    _begin:
cs=0x24ed;eip=0x000bec; 	J(RETF(0));	// 106781 retf ;~ 24ED:0BEC

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::knullsub_20: 	goto nullsub_20;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3409e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3409e:
    _begin:
cs=0x24ed;eip=0x000bee; 	T(MOV(dx, 0x140));	// 106792 mov     dx, 140h ;~ 24ED:0BEE
cs=0x24ed;eip=0x000bf1; 	T(MUL1_2(dx));	// 106793 mul     dx ;~ 24ED:0BF1
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000bf3; 	X(MOV(*(dw*)(((db*)&word_33653)), ax));	// 106794 mov     cs:word_33653, ax ;~ 24ED:0BF3
cs=0x24ed;eip=0x000bf7; 	J(RETF(0));	// 106795 retf ;~ 24ED:0BF7

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_3409e: 	goto sub_3409e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_340a8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_340a8:
    _begin:
cs=0x24ed;eip=0x000bf8; 	T(CMP(bx, 0x0C8));	// 106804 cmp     bx, 0C8h ; 'È' ;~ 24ED:0BF8
cs=0x24ed;eip=0x000bfc; 	J(JC(loc_340b1));	// 106805 jb      short loc_340B1 ;~ 24ED:0BFC
cs=0x24ed;eip=0x000bfe; 	T(MOV(bx, 0x0C7));	// 106806 mov     bx, 0C7h ; 'Ç' ;~ 24ED:0BFE
loc_340b1:
	// 6983 
cs=0x24ed;eip=0x000c01; 	T(XCHG(bh, bl));	// 106809 xchg    bh, bl ;~ 24ED:0C01
cs=0x24ed;eip=0x000c03; 	T(MOV(di, bx));	// 106810 mov     di, bx ;~ 24ED:0C03
cs=0x24ed;eip=0x000c05; 	T(SHR(di, 2));	// 106811 shr     di, 2 ;~ 24ED:0C05
cs=0x24ed;eip=0x000c08; 	T(ADD(di, bx));	// 106812 add     di, bx ;~ 24ED:0C08
cs=0x24ed;eip=0x000c0a; 	T(XCHG(bh, bl));	// 106813 xchg    bh, bl ;~ 24ED:0C0A
cs=0x24ed;eip=0x000c0c; 	T(ADD(di, dx));	// 106814 add     di, dx ;~ 24ED:0C0C
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000c0e; 	T(ADD(di, *(dw*)(((db*)&word_33653))));	// 106815 add     di, cs:word_33653 ;~ 24ED:0C0E
cs=0x24ed;eip=0x000c13; 	J(RETN(0));	// 106816 retn ;~ 24ED:0C13

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_340b1: 	goto loc_340b1;
        case m2c::ksub_340a8: 	goto sub_340a8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group139(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group139:
    _begin:
seg002_c14_proc:
	// 106821 
loc_340c4:
	// 6984 
cs=0x24ed;eip=0x000c14; 	X(PUSH(bx));	// 106822 push    bx ;~ 24ED:0C14
cs=0x24ed;eip=0x000c15; 	J(CALL(sub_340a8,0));	// 106823 call    sub_340A8 ;~ 24ED:0C15
cs=0x24ed;eip=0x000c18; 	X(POP(bx));	// 106824 pop     bx ;~ 24ED:0C18
cs=0x24ed;eip=0x000c19; 	X(STOSB);	// 106825 stosb ;~ 24ED:0C19
cs=0x24ed;eip=0x000c1a; 	J(RETF(0));	// 106826 retf ;~ 24ED:0C1A
loc_340cb:
	// 6985 
cs=0x24ed;eip=0x000c1b; 	J(CALL(sub_340a8,0));	// 106830 call    sub_340A8 ;~ 24ED:0C1B
cs=0x24ed;eip=0x000c1e; 	T(MOV(al, *(raddr(es,di))));	// 106831 mov     al, es:[di] ;~ 24ED:0C1E
cs=0x24ed;eip=0x000c21; 	J(RETF(0));	// 106832 retf ;~ 24ED:0C21
loc_340d2:
	// 6986 
cs=0x24ed;eip=0x000c22; 	T(MOV(bp, 0x2E));	// 106839 mov     bp, 2Eh ; '.' ;~ 24ED:0C22
cs=0x24ed;eip=0x000c25; 	T(SUB(di, bp));	// 106840 sub     di, bp ;~ 24ED:0C25
cs=0x24ed;eip=0x000c27; 	T(SUB(di, bp));	// 106841 sub     di, bp ;~ 24ED:0C27
loc_340d9:
	// 6987 
cs=0x24ed;eip=0x000c29; 	T(ADD(di, 0x140));	// 106845 add     di, 140h ;~ 24ED:0C29
loc_340dd:
	// 6988 
cs=0x24ed;eip=0x000c2d; 	T(LODSB);	// 106849 lodsb ;~ 24ED:0C2D
cs=0x24ed;eip=0x000c2e; 	T(OR(al, al));	// 106850 or      al, al ;~ 24ED:0C2E
cs=0x24ed;eip=0x000c30; 	J(JS(loc_34118));	// 106851 js      short loc_34118 ;~ 24ED:0C30
cs=0x24ed;eip=0x000c32; 	T(MOV(cx, ax));	// 106852 mov     cx, ax ;~ 24ED:0C32
cs=0x24ed;eip=0x000c34; 	T(XOR(ch, ch));	// 106853 xor     ch, ch ;~ 24ED:0C34
cs=0x24ed;eip=0x000c36; 	T(INC(cx));	// 106854 inc     cx ;~ 24ED:0C36
cs=0x24ed;eip=0x000c37; 	T(SUB(bp, cx));	// 106855 sub     bp, cx ;~ 24ED:0C37
loc_340e9:
	// 6989 
cs=0x24ed;eip=0x000c39; 	T(LODSB);	// 106859 lodsb ;~ 24ED:0C39
cs=0x24ed;eip=0x000c3a; 	T(MOV(ah, al));	// 106860 mov     ah, al ;~ 24ED:0C3A
cs=0x24ed;eip=0x000c3c; 	T(AND(al, dl));	// 106861 and     al, dl ;~ 24ED:0C3C
cs=0x24ed;eip=0x000c3e; 	J(JZ(loc_3410d));	// 106862 jz      short loc_3410D ;~ 24ED:0C3E
cs=0x24ed;eip=0x000c40; 	T(ADD(al, dh));	// 106863 add     al, dh ;~ 24ED:0C40
cs=0x24ed;eip=0x000c42; 	X(STOSB);	// 106864 stosb ;~ 24ED:0C42
cs=0x24ed;eip=0x000c43; 	T(SHR(ah, 4));	// 106865 shr     ah, 4 ;~ 24ED:0C43
cs=0x24ed;eip=0x000c46; 	J(JZ(loc_34113));	// 106866 jz      short loc_34113 ;~ 24ED:0C46
loc_340f8:
	// 6990 
cs=0x24ed;eip=0x000c48; 	T(MOV(al, ah));	// 106869 mov     al, ah ;~ 24ED:0C48
cs=0x24ed;eip=0x000c4a; 	T(ADD(al, dh));	// 106870 add     al, dh ;~ 24ED:0C4A
cs=0x24ed;eip=0x000c4c; 	X(STOSB);	// 106871 stosb ;~ 24ED:0C4C
cs=0x24ed;eip=0x000c4d; 	J(LOOP(loc_340e9));	// 106872 loop    loc_340E9 ;~ 24ED:0C4D
loc_340ff:
	// 6991 
cs=0x24ed;eip=0x000c4f; 	T(OR(bp, bp));	// 106875 or      bp, bp ;~ 24ED:0C4F
cs=0x24ed;eip=0x000c51; 	J(JA(loc_340dd));	// 106876 ja      short loc_340DD ;~ 24ED:0C51
cs=0x24ed;eip=0x000c53; 	T(DEC(bx));	// 106877 dec     bx ;~ 24ED:0C53
cs=0x24ed;eip=0x000c54; 	J(JNZ(loc_340d2));	// 106878 jnz     short loc_340D2 ;~ 24ED:0C54
loc_34106:
	// 6992 
cs=0x24ed;eip=0x000c56; 	X(MOV(*(raddr(cs,m2c::kloc_340d9+1)), 0x0C7));	// 106881 mov     byte ptr cs:loc_340D9+1, 0C7h ; 'Ç' ;~ 24ED:0C56
cs=0x24ed;eip=0x000c5c; 	J(RETF(0));	// 106882 retf ;~ 24ED:0C5C
loc_3410d:
	// 6993 
cs=0x24ed;eip=0x000c5d; 	T(INC(di));	// 106886 inc     di ;~ 24ED:0C5D
cs=0x24ed;eip=0x000c5e; 	T(SHR(ah, 4));	// 106887 shr     ah, 4 ;~ 24ED:0C5E
cs=0x24ed;eip=0x000c61; 	J(JNZ(loc_340f8));	// 106888 jnz     short loc_340F8 ;~ 24ED:0C61
loc_34113:
	// 6994 
cs=0x24ed;eip=0x000c63; 	T(INC(di));	// 106891 inc     di ;~ 24ED:0C63
cs=0x24ed;eip=0x000c64; 	J(LOOP(loc_340e9));	// 106892 loop    loc_340E9 ;~ 24ED:0C64
cs=0x24ed;eip=0x000c66; 	J(JMP(loc_340ff));	// 106893 jmp     short loc_340FF ;~ 24ED:0C66
loc_34118:
	// 6995 
cs=0x24ed;eip=0x000c68; 	T(MOV(cx, 0x101));	// 106897 mov     cx, 101h ;~ 24ED:0C68
cs=0x24ed;eip=0x000c6b; 	T(XOR(ah, ah));	// 106898 xor     ah, ah ;~ 24ED:0C6B
cs=0x24ed;eip=0x000c6d; 	T(SUB(cx, ax));	// 106899 sub     cx, ax ;~ 24ED:0C6D
cs=0x24ed;eip=0x000c6f; 	T(SUB(bp, cx));	// 106900 sub     bp, cx ;~ 24ED:0C6F
cs=0x24ed;eip=0x000c71; 	T(LODSB);	// 106901 lodsb ;~ 24ED:0C71
cs=0x24ed;eip=0x000c72; 	T(SHL(ax, 4));	// 106902 shl     ax, 4 ;~ 24ED:0C72
cs=0x24ed;eip=0x000c75; 	J(JZ(loc_3413f));	// 106903 jz      short loc_3413F ;~ 24ED:0C75
cs=0x24ed;eip=0x000c77; 	T(SHR(al, 4));	// 106904 shr     al, 4 ;~ 24ED:0C77
cs=0x24ed;eip=0x000c7a; 	J(JZ(loc_34149));	// 106905 jz      short loc_34149 ;~ 24ED:0C7A
cs=0x24ed;eip=0x000c7c; 	T(ADD(al, dh));	// 106906 add     al, dh ;~ 24ED:0C7C
cs=0x24ed;eip=0x000c7e; 	T(OR(ah, ah));	// 106907 or      ah, ah ;~ 24ED:0C7E
cs=0x24ed;eip=0x000c80; 	J(JZ(loc_34157));	// 106908 jz      short loc_34157 ;~ 24ED:0C80
cs=0x24ed;eip=0x000c82; 	T(ADD(ah, dh));	// 106909 add     ah, dh ;~ 24ED:0C82
	// 106910 rep stosw ;~ 24ED:0C84
cs=0x24ed;eip=0x000c84; 	X(	REP STOSW);	// 106910 rep stosw ;~ 24ED:0C84
loc_34136:
	// 6996 
cs=0x24ed;eip=0x000c86; 	T(OR(bp, bp));	// 106913 or      bp, bp ;~ 24ED:0C86
cs=0x24ed;eip=0x000c88; 	J(JA(loc_340dd));	// 106914 ja      short loc_340DD ;~ 24ED:0C88
loc_3413a:
	// 6997 
cs=0x24ed;eip=0x000c8a; 	T(DEC(bx));	// 106918 dec     bx ;~ 24ED:0C8A
cs=0x24ed;eip=0x000c8b; 	J(JNZ(loc_340d2));	// 106919 jnz     short loc_340D2 ;~ 24ED:0C8B
cs=0x24ed;eip=0x000c8d; 	J(JMP(loc_34106));	// 106920 jmp     short loc_34106 ;~ 24ED:0C8D
loc_3413f:
	// 6998 
cs=0x24ed;eip=0x000c8f; 	T(SHL(cx, 1));	// 106924 shl     cx, 1 ;~ 24ED:0C8F
cs=0x24ed;eip=0x000c91; 	T(ADD(di, cx));	// 106925 add     di, cx ;~ 24ED:0C91
cs=0x24ed;eip=0x000c93; 	T(OR(bp, bp));	// 106926 or      bp, bp ;~ 24ED:0C93
cs=0x24ed;eip=0x000c95; 	J(JA(loc_340dd));	// 106927 ja      short loc_340DD ;~ 24ED:0C95
cs=0x24ed;eip=0x000c97; 	J(JMP(loc_3413a));	// 106928 jmp     short loc_3413A ;~ 24ED:0C97
loc_34149:
	// 6999 
cs=0x24ed;eip=0x000c99; 	T(MOV(al, ah));	// 106932 mov     al, ah ;~ 24ED:0C99
cs=0x24ed;eip=0x000c9b; 	T(ADD(al, dh));	// 106933 add     al, dh ;~ 24ED:0C9B
loc_3414d:
	// 7000 
cs=0x24ed;eip=0x000c9d; 	T(INC(di));	// 106936 inc     di ;~ 24ED:0C9D
cs=0x24ed;eip=0x000c9e; 	X(STOSB);	// 106937 stosb ;~ 24ED:0C9E
cs=0x24ed;eip=0x000c9f; 	J(LOOP(loc_3414d));	// 106938 loop    loc_3414D ;~ 24ED:0C9F
cs=0x24ed;eip=0x000ca1; 	T(OR(bp, bp));	// 106939 or      bp, bp ;~ 24ED:0CA1
cs=0x24ed;eip=0x000ca3; 	J(JBE(loc_3413a));	// 106940 jbe     short loc_3413A ;~ 24ED:0CA3
cs=0x24ed;eip=0x000ca5; 	J(JMP(loc_340dd));	// 106941 jmp     short loc_340DD ;~ 24ED:0CA5
loc_34157:
	// 7001 
cs=0x24ed;eip=0x000ca7; 	X(STOSB);	// 106946 stosb ;~ 24ED:0CA7
cs=0x24ed;eip=0x000ca8; 	T(INC(di));	// 106947 inc     di ;~ 24ED:0CA8
cs=0x24ed;eip=0x000ca9; 	J(LOOP(loc_34157));	// 106948 loop    loc_34157 ;~ 24ED:0CA9
cs=0x24ed;eip=0x000cab; 	J(JMP(loc_34136));	// 106949 jmp     short loc_34136 ;~ 24ED:0CAB
loc_3415d:
	// 7002 
cs=0x24ed;eip=0x000cad; 	T(MOV(bp, 8));	// 106958 mov     bp, 8 ;~ 24ED:0CAD
cs=0x24ed;eip=0x000cb0; 	T(ADD(di, bp));	// 106959 add     di, bp ;~ 24ED:0CB0
cs=0x24ed;eip=0x000cb2; 	T(ADD(di, bp));	// 106960 add     di, bp ;~ 24ED:0CB2
loc_34164:
	// 7003 
cs=0x24ed;eip=0x000cb4; 	T(ADD(di, 0x140));	// 106964 add     di, 140h ;~ 24ED:0CB4
loc_34168:
	// 7004 
cs=0x24ed;eip=0x000cb8; 	T(MOV(al, *(raddr(ds,si))));	// 106968 mov     al, [si] ;~ 24ED:0CB8
cs=0x24ed;eip=0x000cba; 	T(INC(si));	// 106969 inc     si ;~ 24ED:0CBA
cs=0x24ed;eip=0x000cbb; 	T(OR(al, al));	// 106970 or      al, al ;~ 24ED:0CBB
cs=0x24ed;eip=0x000cbd; 	J(JS(loc_341d9));	// 106971 js      short loc_341D9 ;~ 24ED:0CBD
cs=0x24ed;eip=0x000cbf; 	T(MOV(cx, ax));	// 106972 mov     cx, ax ;~ 24ED:0CBF
cs=0x24ed;eip=0x000cc1; 	T(XOR(ch, ch));	// 106973 xor     ch, ch ;~ 24ED:0CC1
cs=0x24ed;eip=0x000cc3; 	T(INC(cx));	// 106974 inc     cx ;~ 24ED:0CC3
cs=0x24ed;eip=0x000cc4; 	T(SUB(bp, cx));	// 106975 sub     bp, cx ;~ 24ED:0CC4
loc_34176:
	// 7005 
cs=0x24ed;eip=0x000cc6; 	T(MOV(al, *(raddr(ds,si))));	// 106979 mov     al, [si] ;~ 24ED:0CC6
cs=0x24ed;eip=0x000cc8; 	T(INC(si));	// 106980 inc     si ;~ 24ED:0CC8
cs=0x24ed;eip=0x000cc9; 	T(MOV(ah, al));	// 106981 mov     ah, al ;~ 24ED:0CC9
cs=0x24ed;eip=0x000ccb; 	T(AND(al, dl));	// 106982 and     al, dl ;~ 24ED:0CCB
cs=0x24ed;eip=0x000ccd; 	J(JZ(loc_341a2));	// 106983 jz      short loc_341A2 ;~ 24ED:0CCD
cs=0x24ed;eip=0x000ccf; 	T(ADD(al, dh));	// 106984 add     al, dh ;~ 24ED:0CCF
cs=0x24ed;eip=0x000cd1; 	X(STOSB);	// 106985 stosb ;~ 24ED:0CD1
cs=0x24ed;eip=0x000cd2; 	T(SHR(ah, 1));	// 106986 shr     ah, 1 ;~ 24ED:0CD2
loc_34184:
	// 7006 
cs=0x24ed;eip=0x000cd4; 	T(SHR(ah, 1));	// 106989 shr     ah, 1 ;~ 24ED:0CD4
cs=0x24ed;eip=0x000cd6; 	T(SHR(ah, 1));	// 106990 shr     ah, 1 ;~ 24ED:0CD6
cs=0x24ed;eip=0x000cd8; 	T(SHR(ah, 1));	// 106991 shr     ah, 1 ;~ 24ED:0CD8
cs=0x24ed;eip=0x000cda; 	J(JZ(loc_341a7));	// 106992 jz      short loc_341A7 ;~ 24ED:0CDA
cs=0x24ed;eip=0x000cdc; 	T(MOV(al, ah));	// 106993 mov     al, ah ;~ 24ED:0CDC
cs=0x24ed;eip=0x000cde; 	T(ADD(al, dh));	// 106994 add     al, dh ;~ 24ED:0CDE
cs=0x24ed;eip=0x000ce0; 	X(STOSB);	// 106995 stosb ;~ 24ED:0CE0
cs=0x24ed;eip=0x000ce1; 	J(LOOP(loc_34176));	// 106996 loop    loc_34176 ;~ 24ED:0CE1
loc_34193:
	// 7007 
cs=0x24ed;eip=0x000ce3; 	T(OR(bp, bp));	// 106999 or      bp, bp ;~ 24ED:0CE3
cs=0x24ed;eip=0x000ce5; 	J(JA(loc_34168));	// 107000 ja      short loc_34168 ;~ 24ED:0CE5
cs=0x24ed;eip=0x000ce7; 	T(DEC(bx));	// 107001 dec     bx ;~ 24ED:0CE7
cs=0x24ed;eip=0x000ce8; 	J(JNZ(loc_3415d));	// 107002 jnz     short loc_3415D ;~ 24ED:0CE8
cs=0x24ed;eip=0x000cea; 	T(CLD);	// 107003 cld ;~ 24ED:0CEA
cs=0x24ed;eip=0x000ceb; 	X(MOV(*(raddr(cs,m2c::kloc_34164+1)), 0x0C7));	// 107004 mov     byte ptr cs:loc_34164+1, 0C7h ; 'Ç' ;~ 24ED:0CEB
cs=0x24ed;eip=0x000cf1; 	J(RETF(0));	// 107005 retf ;~ 24ED:0CF1
loc_341a2:
	// 7008 
cs=0x24ed;eip=0x000cf2; 	T(DEC(di));	// 107009 dec     di ;~ 24ED:0CF2
cs=0x24ed;eip=0x000cf3; 	T(SHR(ah, 1));	// 107010 shr     ah, 1 ;~ 24ED:0CF3
cs=0x24ed;eip=0x000cf5; 	J(JNZ(loc_34184));	// 107011 jnz     short loc_34184 ;~ 24ED:0CF5
loc_341a7:
	// 7009 
cs=0x24ed;eip=0x000cf7; 	T(DEC(di));	// 107014 dec     di ;~ 24ED:0CF7
cs=0x24ed;eip=0x000cf8; 	J(LOOP(loc_34176));	// 107015 loop    loc_34176 ;~ 24ED:0CF8
cs=0x24ed;eip=0x000cfa; 	J(JMP(loc_34193));	// 107016 jmp     short loc_34193 ;~ 24ED:0CFA
loc_341ac:
	// 7010 
cs=0x24ed;eip=0x000cfc; 	T(SHL(cx, 1));	// 107020 shl     cx, 1 ;~ 24ED:0CFC
cs=0x24ed;eip=0x000cfe; 	T(SUB(di, cx));	// 107021 sub     di, cx ;~ 24ED:0CFE
cs=0x24ed;eip=0x000d00; 	T(OR(bp, bp));	// 107022 or      bp, bp ;~ 24ED:0D00
cs=0x24ed;eip=0x000d02; 	J(JA(loc_34168));	// 107023 ja      short loc_34168 ;~ 24ED:0D02
cs=0x24ed;eip=0x000d04; 	J(JMP(loc_341ce));	// 107024 jmp     short loc_341CE ;~ 24ED:0D04
loc_341b7:
	// 7011 
cs=0x24ed;eip=0x000d07; 	T(MOV(al, ah));	// 107033 mov     al, ah ;~ 24ED:0D07
cs=0x24ed;eip=0x000d09; 	T(ADD(al, dh));	// 107034 add     al, dh ;~ 24ED:0D09
loc_341bb:
	// 7012 
cs=0x24ed;eip=0x000d0b; 	T(DEC(di));	// 107037 dec     di ;~ 24ED:0D0B
cs=0x24ed;eip=0x000d0c; 	X(STOSB);	// 107038 stosb ;~ 24ED:0D0C
cs=0x24ed;eip=0x000d0d; 	J(LOOP(loc_341bb));	// 107039 loop    loc_341BB ;~ 24ED:0D0D
cs=0x24ed;eip=0x000d0f; 	T(OR(bp, bp));	// 107040 or      bp, bp ;~ 24ED:0D0F
cs=0x24ed;eip=0x000d11; 	J(JA(loc_34168));	// 107041 ja      short loc_34168 ;~ 24ED:0D11
cs=0x24ed;eip=0x000d13; 	J(JMP(loc_341ce));	// 107042 jmp     short loc_341CE ;~ 24ED:0D13
loc_341c6:
	// 7013 
cs=0x24ed;eip=0x000d16; 	X(STOSB);	// 107052 stosb ;~ 24ED:0D16
cs=0x24ed;eip=0x000d17; 	T(DEC(di));	// 107053 dec     di ;~ 24ED:0D17
cs=0x24ed;eip=0x000d18; 	J(LOOP(loc_341c6));	// 107054 loop    loc_341C6 ;~ 24ED:0D18
loc_341ca:
	// 7014 
cs=0x24ed;eip=0x000d1a; 	T(OR(bp, bp));	// 107057 or      bp, bp ;~ 24ED:0D1A
cs=0x24ed;eip=0x000d1c; 	J(JA(loc_34168));	// 107058 ja      short loc_34168 ;~ 24ED:0D1C
loc_341ce:
	// 7015 
cs=0x24ed;eip=0x000d1e; 	T(DEC(bx));	// 107062 dec     bx ;~ 24ED:0D1E
cs=0x24ed;eip=0x000d1f; 	J(JNZ(loc_3415d));	// 107063 jnz     short loc_3415D ;~ 24ED:0D1F
cs=0x24ed;eip=0x000d21; 	T(CLD);	// 107064 cld ;~ 24ED:0D21
cs=0x24ed;eip=0x000d22; 	X(MOV(*(raddr(cs,m2c::kloc_34164+1)), 0x0C7));	// 107065 mov     byte ptr cs:loc_34164+1, 0C7h ; 'Ç' ;~ 24ED:0D22
cs=0x24ed;eip=0x000d28; 	J(RETF(0));	// 107066 retf ;~ 24ED:0D28
loc_341d9:
	// 7016 
cs=0x24ed;eip=0x000d29; 	T(MOV(cx, 0x101));	// 107070 mov     cx, 101h ;~ 24ED:0D29
cs=0x24ed;eip=0x000d2c; 	T(XOR(ah, ah));	// 107071 xor     ah, ah ;~ 24ED:0D2C
cs=0x24ed;eip=0x000d2e; 	T(SUB(cx, ax));	// 107072 sub     cx, ax ;~ 24ED:0D2E
cs=0x24ed;eip=0x000d30; 	T(SUB(bp, cx));	// 107073 sub     bp, cx ;~ 24ED:0D30
cs=0x24ed;eip=0x000d32; 	T(MOV(al, *(raddr(ds,si))));	// 107074 mov     al, [si] ;~ 24ED:0D32
cs=0x24ed;eip=0x000d34; 	T(INC(si));	// 107075 inc     si ;~ 24ED:0D34
cs=0x24ed;eip=0x000d35; 	T(SHL(ax, 1));	// 107076 shl     ax, 1 ;~ 24ED:0D35
cs=0x24ed;eip=0x000d37; 	J(JZ(loc_341ac));	// 107077 jz      short loc_341AC ;~ 24ED:0D37
cs=0x24ed;eip=0x000d39; 	T(SHL(ax, 1));	// 107078 shl     ax, 1 ;~ 24ED:0D39
cs=0x24ed;eip=0x000d3b; 	T(SHL(ax, 1));	// 107079 shl     ax, 1 ;~ 24ED:0D3B
cs=0x24ed;eip=0x000d3d; 	T(SHL(ax, 1));	// 107080 shl     ax, 1 ;~ 24ED:0D3D
cs=0x24ed;eip=0x000d3f; 	T(SHR(al, 1));	// 107081 shr     al, 1 ;~ 24ED:0D3F
cs=0x24ed;eip=0x000d41; 	J(JZ(loc_341b7));	// 107082 jz      short loc_341B7 ;~ 24ED:0D41
cs=0x24ed;eip=0x000d43; 	T(SHR(al, 1));	// 107083 shr     al, 1 ;~ 24ED:0D43
cs=0x24ed;eip=0x000d45; 	T(SHR(al, 1));	// 107084 shr     al, 1 ;~ 24ED:0D45
cs=0x24ed;eip=0x000d47; 	T(SHR(al, 1));	// 107085 shr     al, 1 ;~ 24ED:0D47
cs=0x24ed;eip=0x000d49; 	T(ADD(al, dh));	// 107086 add     al, dh ;~ 24ED:0D49
cs=0x24ed;eip=0x000d4b; 	T(OR(ah, ah));	// 107087 or      ah, ah ;~ 24ED:0D4B
cs=0x24ed;eip=0x000d4d; 	J(JZ(loc_341c6));	// 107088 jz      short loc_341C6 ;~ 24ED:0D4D
cs=0x24ed;eip=0x000d4f; 	T(ADD(ah, dh));	// 107089 add     ah, dh ;~ 24ED:0D4F
cs=0x24ed;eip=0x000d51; 	T(DEC(di));	// 107090 dec     di ;~ 24ED:0D51
cs=0x24ed;eip=0x000d52; 	T(XCHG(ah, al));	// 107091 xchg    ah, al ;~ 24ED:0D52
	// 107092 rep stosw ;~ 24ED:0D54
cs=0x24ed;eip=0x000d54; 	X(	REP STOSW);	// 107092 rep stosw ;~ 24ED:0D54
cs=0x24ed;eip=0x000d56; 	T(INC(di));	// 107093 inc     di ;~ 24ED:0D56
cs=0x24ed;eip=0x000d57; 	J(JMP(loc_341ca));	// 107094 jmp     short loc_341CA ;~ 24ED:0D57
seg002_dff_proc:
	// 107195 
loc_342af:
	// 7025 
cs=0x24ed;eip=0x000dff; 	T(MOV(bp, dx));	// 107197 mov     bp, dx ;~ 24ED:0DFF
cs=0x24ed;eip=0x000e01; 	T(SUB(di, bp));	// 107198 sub     di, bp ;~ 24ED:0E01
loc_342b3:
	// 7026 
cs=0x24ed;eip=0x000e03; 	T(ADD(di, 0x140));	// 107202 add     di, 140h ;~ 24ED:0E03
loc_342b7:
	// 7027 
cs=0x24ed;eip=0x000e07; 	T(LODSB);	// 107206 lodsb ;~ 24ED:0E07
cs=0x24ed;eip=0x000e08; 	T(OR(al, al));	// 107207 or      al, al ;~ 24ED:0E08
cs=0x24ed;eip=0x000e0a; 	J(JS(loc_342ec));	// 107208 js      short loc_342EC ;~ 24ED:0E0A
cs=0x24ed;eip=0x000e0c; 	T(MOV(cx, ax));	// 107209 mov     cx, ax ;~ 24ED:0E0C
cs=0x24ed;eip=0x000e0e; 	T(XOR(ch, ch));	// 107210 xor     ch, ch ;~ 24ED:0E0E
cs=0x24ed;eip=0x000e10; 	T(INC(cx));	// 107211 inc     cx ;~ 24ED:0E10
cs=0x24ed;eip=0x000e11; 	T(SUB(bp, cx));	// 107212 sub     bp, cx ;~ 24ED:0E11
loc_342c3:
	// 7028 
cs=0x24ed;eip=0x000e13; 	T(LODSB);	// 107216 lodsb ;~ 24ED:0E13
cs=0x24ed;eip=0x000e14; 	T(OR(al, al));	// 107217 or      al, al ;~ 24ED:0E14
cs=0x24ed;eip=0x000e16; 	J(JZ(loc_342e0));	// 107218 jz      short loc_342E0 ;~ 24ED:0E16
cs=0x24ed;eip=0x000e18; 	X(STOSB);	// 107219 stosb ;~ 24ED:0E18
cs=0x24ed;eip=0x000e19; 	J(LOOP(loc_342c3));	// 107220 loop    loc_342C3 ;~ 24ED:0E19
cs=0x24ed;eip=0x000e1b; 	T(OR(bp, bp));	// 107221 or      bp, bp ;~ 24ED:0E1B
cs=0x24ed;eip=0x000e1d; 	J(JA(loc_342b7));	// 107222 ja      short loc_342B7 ;~ 24ED:0E1D
cs=0x24ed;eip=0x000e1f; 	T(DEC(bx));	// 107223 dec     bx ;~ 24ED:0E1F
cs=0x24ed;eip=0x000e20; 	J(JNZ(loc_342af));	// 107224 jnz     short loc_342AF ;~ 24ED:0E20
loc_342d2:
	// 7029 
cs=0x24ed;eip=0x000e22; 	T(CLD);	// 107228 cld ;~ 24ED:0E22
cs=0x24ed;eip=0x000e23; 	X(MOV(*(raddr(cs,m2c::kloc_342b3+1)), 0x0C7));	// 107229 mov     byte ptr cs:loc_342B3+1, 0C7h ; 'Ç' ;~ 24ED:0E23
cs=0x24ed;eip=0x000e29; 	X(MOV(*(raddr(cs,m2c::kloc_34371+1)), 0x0C7));	// 107230 mov     byte ptr cs:loc_34371+1, 0C7h ; 'Ç' ;~ 24ED:0E29
cs=0x24ed;eip=0x000e2f; 	J(RETF(0));	// 107231 retf ;~ 24ED:0E2F
loc_342e0:
	// 7030 
cs=0x24ed;eip=0x000e30; 	T(INC(di));	// 107235 inc     di ;~ 24ED:0E30
cs=0x24ed;eip=0x000e31; 	J(LOOP(loc_342c3));	// 107236 loop    loc_342C3 ;~ 24ED:0E31
cs=0x24ed;eip=0x000e33; 	T(OR(bp, bp));	// 107238 or      bp, bp ;~ 24ED:0E33
cs=0x24ed;eip=0x000e35; 	J(JA(loc_342b7));	// 107239 ja      short loc_342B7 ;~ 24ED:0E35
cs=0x24ed;eip=0x000e37; 	T(DEC(bx));	// 107241 dec     bx ;~ 24ED:0E37
cs=0x24ed;eip=0x000e38; 	J(JNZ(loc_342af));	// 107242 jnz     short loc_342AF ;~ 24ED:0E38
cs=0x24ed;eip=0x000e3a; 	J(JMP(loc_342d2));	// 107243 jmp     short loc_342D2 ;~ 24ED:0E3A
loc_342ec:
	// 7031 
cs=0x24ed;eip=0x000e3c; 	T(MOV(cx, 0x101));	// 107247 mov     cx, 101h ;~ 24ED:0E3C
cs=0x24ed;eip=0x000e3f; 	T(XOR(ah, ah));	// 107248 xor     ah, ah ;~ 24ED:0E3F
cs=0x24ed;eip=0x000e41; 	T(SUB(cx, ax));	// 107249 sub     cx, ax ;~ 24ED:0E41
cs=0x24ed;eip=0x000e43; 	T(SUB(bp, cx));	// 107250 sub     bp, cx ;~ 24ED:0E43
cs=0x24ed;eip=0x000e45; 	T(LODSB);	// 107251 lodsb ;~ 24ED:0E45
cs=0x24ed;eip=0x000e46; 	T(OR(al, al));	// 107252 or      al, al ;~ 24ED:0E46
cs=0x24ed;eip=0x000e48; 	J(JZ(loc_34305));	// 107253 jz      short loc_34305 ;~ 24ED:0E48
	// 107254 rep stosb ;~ 24ED:0E4A
cs=0x24ed;eip=0x000e4a; 	X(	REP STOSB);	// 107254 rep stosb ;~ 24ED:0E4A
cs=0x24ed;eip=0x000e4c; 	T(OR(bp, bp));	// 107255 or      bp, bp ;~ 24ED:0E4C
cs=0x24ed;eip=0x000e4e; 	J(JA(loc_342b7));	// 107256 ja      short loc_342B7 ;~ 24ED:0E4E
cs=0x24ed;eip=0x000e50; 	T(DEC(bx));	// 107257 dec     bx ;~ 24ED:0E50
cs=0x24ed;eip=0x000e51; 	J(JNZ(loc_342af));	// 107258 jnz     short loc_342AF ;~ 24ED:0E51
cs=0x24ed;eip=0x000e53; 	J(JMP(loc_342d2));	// 107259 jmp     short loc_342D2 ;~ 24ED:0E53
loc_34305:
	// 7032 
cs=0x24ed;eip=0x000e55; 	T(ADD(di, cx));	// 107263 add     di, cx ;~ 24ED:0E55
cs=0x24ed;eip=0x000e57; 	T(OR(bp, bp));	// 107264 or      bp, bp ;~ 24ED:0E57
cs=0x24ed;eip=0x000e59; 	J(JA(loc_342b7));	// 107265 ja      short loc_342B7 ;~ 24ED:0E59
cs=0x24ed;eip=0x000e5b; 	T(DEC(bx));	// 107266 dec     bx ;~ 24ED:0E5B
cs=0x24ed;eip=0x000e5c; 	J(JNZ(loc_342af));	// 107267 jnz     short loc_342AF ;~ 24ED:0E5C
cs=0x24ed;eip=0x000e5e; 	J(JMP(loc_342d2));	// 107268 jmp     short loc_342D2 ;~ 24ED:0E5E
loc_34310:
	// 7033 
cs=0x24ed;eip=0x000e60; 	T(MOV(bp, dx));	// 107273 mov     bp, dx ;~ 24ED:0E60
cs=0x24ed;eip=0x000e62; 	T(ADD(di, bp));	// 107274 add     di, bp ;~ 24ED:0E62
loc_34314:
	// 7034 
cs=0x24ed;eip=0x000e64; 	T(ADD(di, 0x140));	// 107277 add     di, 140h ;~ 24ED:0E64
loc_34318:
	// 7035 
cs=0x24ed;eip=0x000e68; 	T(MOV(al, *(raddr(ds,si))));	// 107281 mov     al, [si] ;~ 24ED:0E68
cs=0x24ed;eip=0x000e6a; 	T(INC(si));	// 107282 inc     si ;~ 24ED:0E6A
cs=0x24ed;eip=0x000e6b; 	T(OR(al, al));	// 107283 or      al, al ;~ 24ED:0E6B
cs=0x24ed;eip=0x000e6d; 	J(JZ(loc_34345));	// 107284 jz      short loc_34345 ;~ 24ED:0E6D
cs=0x24ed;eip=0x000e6f; 	T(MOV(cx, ax));	// 107285 mov     cx, ax ;~ 24ED:0E6F
cs=0x24ed;eip=0x000e71; 	T(XOR(ch, ch));	// 107286 xor     ch, ch ;~ 24ED:0E71
cs=0x24ed;eip=0x000e73; 	T(INC(cx));	// 107287 inc     cx ;~ 24ED:0E73
cs=0x24ed;eip=0x000e74; 	T(SUB(bp, cx));	// 107288 sub     bp, cx ;~ 24ED:0E74
loc_34326:
	// 7036 
cs=0x24ed;eip=0x000e76; 	T(MOV(al, *(raddr(ds,si))));	// 107292 mov     al, [si] ;~ 24ED:0E76
cs=0x24ed;eip=0x000e78; 	T(INC(si));	// 107293 inc     si ;~ 24ED:0E78
cs=0x24ed;eip=0x000e79; 	T(OR(al, al));	// 107294 or      al, al ;~ 24ED:0E79
cs=0x24ed;eip=0x000e7b; 	J(JZ(loc_34339));	// 107295 jz      short loc_34339 ;~ 24ED:0E7B
cs=0x24ed;eip=0x000e7d; 	X(STOSB);	// 107296 stosb ;~ 24ED:0E7D
cs=0x24ed;eip=0x000e7e; 	J(LOOP(loc_34326));	// 107297 loop    loc_34326 ;~ 24ED:0E7E
cs=0x24ed;eip=0x000e80; 	T(OR(bp, bp));	// 107298 or      bp, bp ;~ 24ED:0E80
cs=0x24ed;eip=0x000e82; 	J(JA(loc_34318));	// 107299 ja      short loc_34318 ;~ 24ED:0E82
cs=0x24ed;eip=0x000e84; 	T(DEC(bx));	// 107300 dec     bx ;~ 24ED:0E84
cs=0x24ed;eip=0x000e85; 	J(JNZ(loc_34310));	// 107301 jnz     short loc_34310 ;~ 24ED:0E85
cs=0x24ed;eip=0x000e87; 	J(JMP(loc_342d2));	// 107302 jmp     short loc_342D2 ;~ 24ED:0E87
loc_34339:
	// 7037 
cs=0x24ed;eip=0x000e89; 	T(DEC(di));	// 107306 dec     di ;~ 24ED:0E89
cs=0x24ed;eip=0x000e8a; 	J(LOOP(loc_34326));	// 107307 loop    loc_34326 ;~ 24ED:0E8A
cs=0x24ed;eip=0x000e8c; 	T(OR(bp, bp));	// 107308 or      bp, bp ;~ 24ED:0E8C
cs=0x24ed;eip=0x000e8e; 	J(JA(loc_34318));	// 107309 ja      short loc_34318 ;~ 24ED:0E8E
cs=0x24ed;eip=0x000e90; 	T(DEC(bx));	// 107310 dec     bx ;~ 24ED:0E90
cs=0x24ed;eip=0x000e91; 	J(JNZ(loc_34310));	// 107311 jnz     short loc_34310 ;~ 24ED:0E91
cs=0x24ed;eip=0x000e93; 	J(JMP(loc_342d2));	// 107312 jmp     short loc_342D2 ;~ 24ED:0E93
loc_34345:
	// 7038 
cs=0x24ed;eip=0x000e95; 	T(MOV(cx, 0x101));	// 107316 mov     cx, 101h ;~ 24ED:0E95
cs=0x24ed;eip=0x000e98; 	T(XOR(ah, ah));	// 107317 xor     ah, ah ;~ 24ED:0E98
cs=0x24ed;eip=0x000e9a; 	T(SUB(cx, ax));	// 107318 sub     cx, ax ;~ 24ED:0E9A
cs=0x24ed;eip=0x000e9c; 	T(SUB(bp, cx));	// 107319 sub     bp, cx ;~ 24ED:0E9C
cs=0x24ed;eip=0x000e9e; 	T(MOV(al, *(raddr(ds,si))));	// 107320 mov     al, [si] ;~ 24ED:0E9E
cs=0x24ed;eip=0x000ea0; 	T(INC(si));	// 107321 inc     si ;~ 24ED:0EA0
cs=0x24ed;eip=0x000ea1; 	T(OR(al, al));	// 107322 or      al, al ;~ 24ED:0EA1
cs=0x24ed;eip=0x000ea3; 	J(JZ(loc_34361));	// 107323 jz      short loc_34361 ;~ 24ED:0EA3
	// 107324 rep stosb ;~ 24ED:0EA5
cs=0x24ed;eip=0x000ea5; 	X(	REP STOSB);	// 107324 rep stosb ;~ 24ED:0EA5
cs=0x24ed;eip=0x000ea7; 	T(OR(bp, bp));	// 107325 or      bp, bp ;~ 24ED:0EA7
cs=0x24ed;eip=0x000ea9; 	J(JA(loc_34318));	// 107326 ja      short loc_34318 ;~ 24ED:0EA9
cs=0x24ed;eip=0x000eab; 	T(DEC(bx));	// 107327 dec     bx ;~ 24ED:0EAB
cs=0x24ed;eip=0x000eac; 	J(JNZ(loc_34310));	// 107328 jnz     short loc_34310 ;~ 24ED:0EAC
cs=0x24ed;eip=0x000eae; 	J(JMP(loc_342d2));	// 107329 jmp     loc_342D2 ;~ 24ED:0EAE
loc_34361:
	// 7039 
cs=0x24ed;eip=0x000eb1; 	T(SUB(di, cx));	// 107333 sub     di, cx ;~ 24ED:0EB1
cs=0x24ed;eip=0x000eb3; 	T(OR(bp, bp));	// 107334 or      bp, bp ;~ 24ED:0EB3
cs=0x24ed;eip=0x000eb5; 	J(JA(loc_34318));	// 107335 ja      short loc_34318 ;~ 24ED:0EB5
cs=0x24ed;eip=0x000eb7; 	T(DEC(bx));	// 107336 dec     bx ;~ 24ED:0EB7
cs=0x24ed;eip=0x000eb8; 	J(JNZ(loc_34310));	// 107337 jnz     short loc_34310 ;~ 24ED:0EB8
cs=0x24ed;eip=0x000eba; 	J(JMP(loc_342d2));	// 107338 jmp     loc_342D2 ;~ 24ED:0EBA
loc_3436d:
	// 7040 
cs=0x24ed;eip=0x000ebd; 	T(MOV(bp, dx));	// 107344 mov     bp, dx ;~ 24ED:0EBD
cs=0x24ed;eip=0x000ebf; 	T(SUB(di, bp));	// 107345 sub     di, bp ;~ 24ED:0EBF
loc_34371:
	// 7041 
cs=0x24ed;eip=0x000ec1; 	T(ADD(di, 0x140));	// 107349 add     di, 140h ;~ 24ED:0EC1
loc_34375:
	// 7042 
cs=0x24ed;eip=0x000ec5; 	T(LODSB);	// 107353 lodsb ;~ 24ED:0EC5
cs=0x24ed;eip=0x000ec6; 	T(OR(al, al));	// 107354 or      al, al ;~ 24ED:0EC6
cs=0x24ed;eip=0x000ec8; 	J(JS(loc_3438b));	// 107355 js      short loc_3438B ;~ 24ED:0EC8
cs=0x24ed;eip=0x000eca; 	T(MOV(cx, ax));	// 107356 mov     cx, ax ;~ 24ED:0ECA
cs=0x24ed;eip=0x000ecc; 	T(XOR(ch, ch));	// 107357 xor     ch, ch ;~ 24ED:0ECC
cs=0x24ed;eip=0x000ece; 	T(INC(cx));	// 107358 inc     cx ;~ 24ED:0ECE
cs=0x24ed;eip=0x000ecf; 	T(SUB(bp, cx));	// 107359 sub     bp, cx ;~ 24ED:0ECF
	// 107360 rep movsb ;~ 24ED:0ED1
cs=0x24ed;eip=0x000ed1; 	X(	REP MOVSB);	// 107360 rep movsb ;~ 24ED:0ED1
cs=0x24ed;eip=0x000ed3; 	J(JA(loc_34375));	// 107361 ja      short loc_34375 ;~ 24ED:0ED3
cs=0x24ed;eip=0x000ed5; 	T(DEC(bx));	// 107362 dec     bx ;~ 24ED:0ED5
cs=0x24ed;eip=0x000ed6; 	J(JNZ(loc_3436d));	// 107363 jnz     short loc_3436D ;~ 24ED:0ED6
cs=0x24ed;eip=0x000ed8; 	J(JMP(loc_342d2));	// 107364 jmp     loc_342D2 ;~ 24ED:0ED8
loc_3438b:
	// 7043 
cs=0x24ed;eip=0x000edb; 	T(MOV(cx, 0x101));	// 107368 mov     cx, 101h ;~ 24ED:0EDB
cs=0x24ed;eip=0x000ede; 	T(XOR(ah, ah));	// 107369 xor     ah, ah ;~ 24ED:0EDE
cs=0x24ed;eip=0x000ee0; 	T(SUB(cx, ax));	// 107370 sub     cx, ax ;~ 24ED:0EE0
cs=0x24ed;eip=0x000ee2; 	T(SUB(bp, cx));	// 107371 sub     bp, cx ;~ 24ED:0EE2
cs=0x24ed;eip=0x000ee4; 	T(LODSB);	// 107372 lodsb ;~ 24ED:0EE4
	// 107373 rep stosb ;~ 24ED:0EE5
cs=0x24ed;eip=0x000ee5; 	X(	REP STOSB);	// 107373 rep stosb ;~ 24ED:0EE5
cs=0x24ed;eip=0x000ee7; 	J(JA(loc_34375));	// 107374 ja      short loc_34375 ;~ 24ED:0EE7
cs=0x24ed;eip=0x000ee9; 	T(DEC(bx));	// 107375 dec     bx ;~ 24ED:0EE9
cs=0x24ed;eip=0x000eea; 	J(JNZ(loc_3436d));	// 107376 jnz     short loc_3436D ;~ 24ED:0EEA
cs=0x24ed;eip=0x000eec; 	J(JMP(loc_342d2));	// 107377 jmp     loc_342D2 ;~ 24ED:0EEC
loc_3439f:
	// 7044 
cs=0x24ed;eip=0x000eef; 	T(MOV(bp, dx));	// 107382 mov     bp, dx ;~ 24ED:0EEF
cs=0x24ed;eip=0x000ef1; 	T(ADD(di, bp));	// 107383 add     di, bp ;~ 24ED:0EF1
loc_343a3:
	// 7045 
cs=0x24ed;eip=0x000ef3; 	T(ADD(di, 0x140));	// 107386 add     di, 140h ;~ 24ED:0EF3
loc_343a7:
	// 7046 
cs=0x24ed;eip=0x000ef7; 	T(MOV(al, *(raddr(ds,si))));	// 107390 mov     al, [si] ;~ 24ED:0EF7
cs=0x24ed;eip=0x000ef9; 	T(INC(si));	// 107391 inc     si ;~ 24ED:0EF9
cs=0x24ed;eip=0x000efa; 	T(OR(al, al));	// 107392 or      al, al ;~ 24ED:0EFA
cs=0x24ed;eip=0x000efc; 	J(JZ(loc_343c5));	// 107393 jz      short loc_343C5 ;~ 24ED:0EFC
cs=0x24ed;eip=0x000efe; 	T(MOV(cx, ax));	// 107394 mov     cx, ax ;~ 24ED:0EFE
cs=0x24ed;eip=0x000f00; 	T(XOR(ch, ch));	// 107395 xor     ch, ch ;~ 24ED:0F00
cs=0x24ed;eip=0x000f02; 	T(INC(cx));	// 107396 inc     cx ;~ 24ED:0F02
cs=0x24ed;eip=0x000f03; 	T(SUB(bp, cx));	// 107397 sub     bp, cx ;~ 24ED:0F03
loc_343b5:
	// 7047 
cs=0x24ed;eip=0x000f05; 	T(MOV(al, *(raddr(ds,si))));	// 107400 mov     al, [si] ;~ 24ED:0F05
cs=0x24ed;eip=0x000f07; 	T(INC(si));	// 107401 inc     si ;~ 24ED:0F07
cs=0x24ed;eip=0x000f08; 	X(STOSB);	// 107402 stosb ;~ 24ED:0F08
cs=0x24ed;eip=0x000f09; 	J(LOOP(loc_343b5));	// 107403 loop    loc_343B5 ;~ 24ED:0F09
cs=0x24ed;eip=0x000f0b; 	T(OR(bp, bp));	// 107404 or      bp, bp ;~ 24ED:0F0B
cs=0x24ed;eip=0x000f0d; 	J(JA(loc_343a7));	// 107405 ja      short loc_343A7 ;~ 24ED:0F0D
cs=0x24ed;eip=0x000f0f; 	T(DEC(bx));	// 107406 dec     bx ;~ 24ED:0F0F
cs=0x24ed;eip=0x000f10; 	J(JNZ(loc_3439f));	// 107407 jnz     short loc_3439F ;~ 24ED:0F10
cs=0x24ed;eip=0x000f12; 	J(JMP(loc_342d2));	// 107408 jmp     loc_342D2 ;~ 24ED:0F12
loc_343c5:
	// 7048 
cs=0x24ed;eip=0x000f15; 	T(MOV(cx, 0x101));	// 107412 mov     cx, 101h ;~ 24ED:0F15
cs=0x24ed;eip=0x000f18; 	T(XOR(ah, ah));	// 107413 xor     ah, ah ;~ 24ED:0F18
cs=0x24ed;eip=0x000f1a; 	T(SUB(cx, ax));	// 107414 sub     cx, ax ;~ 24ED:0F1A
cs=0x24ed;eip=0x000f1c; 	T(SUB(bp, cx));	// 107415 sub     bp, cx ;~ 24ED:0F1C
cs=0x24ed;eip=0x000f1e; 	T(MOV(al, *(raddr(ds,si))));	// 107416 mov     al, [si] ;~ 24ED:0F1E
cs=0x24ed;eip=0x000f20; 	T(INC(si));	// 107417 inc     si ;~ 24ED:0F20
	// 107418 rep stosb ;~ 24ED:0F21
cs=0x24ed;eip=0x000f21; 	X(	REP STOSB);	// 107418 rep stosb ;~ 24ED:0F21
cs=0x24ed;eip=0x000f23; 	T(OR(bp, bp));	// 107419 or      bp, bp ;~ 24ED:0F23
cs=0x24ed;eip=0x000f25; 	J(JA(loc_343a7));	// 107420 ja      short loc_343A7 ;~ 24ED:0F25
cs=0x24ed;eip=0x000f27; 	T(DEC(bx));	// 107421 dec     bx ;~ 24ED:0F27
cs=0x24ed;eip=0x000f28; 	J(JNZ(loc_3439f));	// 107422 jnz     short loc_3439F ;~ 24ED:0F28
cs=0x24ed;eip=0x000f2a; 	J(JMP(loc_342d2));	// 107423 jmp     loc_342D2 ;~ 24ED:0F2A
sub_343dd:
	// 107429 
cs=0x24ed;eip=0x000f2d; 	T(CMP(ch, 0x0FE));	// 107436 cmp     ch, 0FEh ; 'ş' ;~ 24ED:0F2D
cs=0x24ed;eip=0x000f30; 	J(JC(loc_343e5));	// 107437 jb      short loc_343E5 ;~ 24ED:0F30
cs=0x24ed;eip=0x000f32; 	J(JMP(loc_3448a));	// 107438 jmp     loc_3448A ;~ 24ED:0F32
loc_343e5:
	// 7049 
cs=0x24ed;eip=0x000f35; 	T(OR(di, di));	// 107442 or      di, di ;~ 24ED:0F35
cs=0x24ed;eip=0x000f37; 	J(JS(loc_3440f));	// 107443 js      short loc_3440F ;~ 24ED:0F37
cs=0x24ed;eip=0x000f39; 	T(MOV(ax, di));	// 107444 mov     ax, di ;~ 24ED:0F39
cs=0x24ed;eip=0x000f3b; 	T(MOV(bp, 0x100));	// 107445 mov     bp, 100h ;~ 24ED:0F3B
cs=0x24ed;eip=0x000f3e; 	T(TEST(ax, 0x6000));	// 107446 test    ax, 6000h ;~ 24ED:0F3E
cs=0x24ed;eip=0x000f41; 	J(JZ(loc_343f6));	// 107447 jz      short loc_343F6 ;~ 24ED:0F41
cs=0x24ed;eip=0x000f43; 	J(return sub_3420d(0, _state););	// 107448 jmp     near ptr sub_3420D ;~ 24ED:0F43
loc_343f6:
	// 7050 
cs=0x24ed;eip=0x000f46; 	T(AND(ax, 0x1FF));	// 107452 and     ax, 1FFh ;~ 24ED:0F46
cs=0x24ed;eip=0x000f49; 	T(ADD(ax, 3));	// 107453 add     ax, 3 ;~ 24ED:0F49
cs=0x24ed;eip=0x000f4c; 	T(SHR(ax, 2));	// 107454 shr     ax, 2 ;~ 24ED:0F4C
cs=0x24ed;eip=0x000f4f; 	X(MOV(*(dw*)(raddr(cs,m2c::kloc_349fb+1)), ax));	// 107455 mov     word ptr cs:loc_349FB+1, ax ;~ 24ED:0F4F
cs=0x24ed;eip=0x000f53; 	J(CALL(sub_340a8,0));	// 107456 call    sub_340A8 ;~ 24ED:0F53
cs=0x24ed;eip=0x000f56; 	T(MOV(dh, ch));	// 107457 mov     dh, ch ;~ 24ED:0F56
cs=0x24ed;eip=0x000f58; 	T(XOR(ch, ch));	// 107458 xor     ch, ch ;~ 24ED:0F58
cs=0x24ed;eip=0x000f5a; 	T(MOV(dl, 0x0F));	// 107459 mov     dl, 0Fh ;~ 24ED:0F5A
cs=0x24ed;eip=0x000f5c; 	J(JMP(loc_349fb));	// 107460 jmp     loc_349FB ;~ 24ED:0F5C
loc_3440f:
	// 7051 
cs=0x24ed;eip=0x000f5f; 	T(MOV(ax, di));	// 107464 mov     ax, di ;~ 24ED:0F5F
cs=0x24ed;eip=0x000f61; 	T(AND(ax, 0x1FF));	// 107465 and     ax, 1FFh ;~ 24ED:0F61
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000f64; 	X(MOV(*(dw*)(((db*)&word_34209)), ax));	// 107466 mov     cs:word_34209, ax ;~ 24ED:0F64
cs=0x24ed;eip=0x000f68; 	T(ADD(ax, 3));	// 107467 add     ax, 3 ;~ 24ED:0F68
cs=0x24ed;eip=0x000f6b; 	T(SHR(ax, 2));	// 107468 shr     ax, 2 ;~ 24ED:0F6B
cs=0x24ed;eip=0x000f6e; 	T(SHL(ax, 1));	// 107469 shl     ax, 1 ;~ 24ED:0F6E
cs=0x24ed;eip=0x000f70; 	T(MOV(bp, ax));	// 107470 mov     bp, ax ;~ 24ED:0F70
cs=0x24ed;eip=0x000f72; 	T(MOV(ax, di));	// 107471 mov     ax, di ;~ 24ED:0F72
cs=0x24ed;eip=0x000f74; 	J(CALL(sub_340a8,0));	// 107472 call    sub_340A8 ;~ 24ED:0F74
cs=0x24ed;eip=0x000f77; 	T(MOV(dh, ch));	// 107473 mov     dh, ch ;~ 24ED:0F77
cs=0x24ed;eip=0x000f79; 	T(XOR(ch, ch));	// 107474 xor     ch, ch ;~ 24ED:0F79
cs=0x24ed;eip=0x000f7b; 	T(MOV(dl, 0x0F));	// 107475 mov     dl, 0Fh ;~ 24ED:0F7B
cs=0x24ed;eip=0x000f7d; 	T(MOV(bx, cx));	// 107476 mov     bx, cx ;~ 24ED:0F7D
cs=0x24ed;eip=0x000f7f; 	T(TEST(ax, 0x4000));	// 107477 test    ax, 4000h ;~ 24ED:0F7F
cs=0x24ed;eip=0x000f82; 	J(JNZ(loc_34459));	// 107478 jnz     short loc_34459 ;~ 24ED:0F82
cs=0x24ed;eip=0x000f84; 	X(MOV(*(dw*)(raddr(cs,m2c::kloc_340d2+1)), bp));	// 107479 mov     word ptr cs:loc_340D2+1, bp ;~ 24ED:0F84
cs=0x24ed;eip=0x000f89; 	T(TEST(ax, 0x2000));	// 107480 test    ax, 2000h ;~ 24ED:0F89
cs=0x24ed;eip=0x000f8c; 	J(JZ(loc_34456));	// 107481 jz      short loc_34456 ;~ 24ED:0F8C
cs=0x24ed;eip=0x000f8e; 	X(MOV(*(raddr(cs,m2c::kloc_340d9+1)), 0x0EF));	// 107482 mov     byte ptr cs:loc_340D9+1, 0EFh ; 'ï' ;~ 24ED:0F8E
cs=0x24ed;eip=0x000f94; 	T(MOV(ah, bl));	// 107483 mov     ah, bl ;~ 24ED:0F94
cs=0x24ed;eip=0x000f96; 	T(DEC(ah));	// 107484 dec     ah ;~ 24ED:0F96
cs=0x24ed;eip=0x000f98; 	T(MOV(ch, ah));	// 107485 mov     ch, ah ;~ 24ED:0F98
cs=0x24ed;eip=0x000f9a; 	T(XOR(cl, cl));	// 107486 xor     cl, cl ;~ 24ED:0F9A
cs=0x24ed;eip=0x000f9c; 	T(MOV(al, cl));	// 107487 mov     al, cl ;~ 24ED:0F9C
cs=0x24ed;eip=0x000f9e; 	T(SHR(cx, 1));	// 107488 shr     cx, 1 ;~ 24ED:0F9E
cs=0x24ed;eip=0x000fa0; 	T(SHR(cx, 1));	// 107489 shr     cx, 1 ;~ 24ED:0FA0
cs=0x24ed;eip=0x000fa2; 	T(ADD(di, ax));	// 107490 add     di, ax ;~ 24ED:0FA2
cs=0x24ed;eip=0x000fa4; 	T(ADD(di, cx));	// 107491 add     di, cx ;~ 24ED:0FA4
loc_34456:
	// 7052 
cs=0x24ed;eip=0x000fa6; 	J(JMP(loc_340dd));	// 107494 jmp     loc_340DD ;~ 24ED:0FA6
loc_34459:
	// 7053 
cs=0x24ed;eip=0x000fa9; 	X(MOV(*(dw*)(raddr(cs,m2c::kloc_3415d+1)), bp));	// 107498 mov     word ptr cs:loc_3415D+1, bp ;~ 24ED:0FA9
cs=0x24ed;eip=0x000fae; 	T(TEST(ax, 0x2000));	// 107499 test    ax, 2000h ;~ 24ED:0FAE
cs=0x24ed;eip=0x000fb1; 	J(JZ(loc_3447b));	// 107500 jz      short loc_3447B ;~ 24ED:0FB1
cs=0x24ed;eip=0x000fb3; 	X(MOV(*(raddr(cs,m2c::kloc_34164+1)), 0x0EF));	// 107501 mov     byte ptr cs:loc_34164+1, 0EFh ; 'ï' ;~ 24ED:0FB3
cs=0x24ed;eip=0x000fb9; 	T(MOV(ah, bl));	// 107502 mov     ah, bl ;~ 24ED:0FB9
cs=0x24ed;eip=0x000fbb; 	T(DEC(ah));	// 107503 dec     ah ;~ 24ED:0FBB
cs=0x24ed;eip=0x000fbd; 	T(MOV(ch, ah));	// 107504 mov     ch, ah ;~ 24ED:0FBD
cs=0x24ed;eip=0x000fbf; 	T(XOR(cl, cl));	// 107505 xor     cl, cl ;~ 24ED:0FBF
cs=0x24ed;eip=0x000fc1; 	T(MOV(al, cl));	// 107506 mov     al, cl ;~ 24ED:0FC1
cs=0x24ed;eip=0x000fc3; 	T(SHR(cx, 1));	// 107507 shr     cx, 1 ;~ 24ED:0FC3
cs=0x24ed;eip=0x000fc5; 	T(SHR(cx, 1));	// 107508 shr     cx, 1 ;~ 24ED:0FC5
cs=0x24ed;eip=0x000fc7; 	T(ADD(di, ax));	// 107509 add     di, ax ;~ 24ED:0FC7
cs=0x24ed;eip=0x000fc9; 	T(ADD(di, cx));	// 107510 add     di, cx ;~ 24ED:0FC9
loc_3447b:
	// 7054 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000fcb; 	T(ADD(di, *(dw*)(((db*)&word_34209))));	// 107513 add     di, cs:word_34209 ;~ 24ED:0FCB
cs=0x24ed;eip=0x000fd0; 	T(DEC(di));	// 107514 dec     di ;~ 24ED:0FD0
cs=0x24ed;eip=0x000fd1; 	T(STD);	// 107515 std ;~ 24ED:0FD1
cs=0x24ed;eip=0x000fd2; 	J(JMP(loc_34168));	// 107516 jmp     loc_34168 ;~ 24ED:0FD2
ret_24ed_fd5:
	// 7055 
cs=0x24ed;eip=0x000fd5; 	T(CMP(ch, 0x0FE));	// 107518 cmp     ch, 0FEh ; 'ş' ;~ 24ED:0FD5
cs=0x24ed;eip=0x000fd8; 
	J({;});	// 107519 jnb     short $+2 ;~ 24ED:0FD8
loc_3448a:
	// 7056 
cs=0x24ed;eip=0x000fda; 	T(OR(di, di));	// 107523 or      di, di ;~ 24ED:0FDA
cs=0x24ed;eip=0x000fdc; 	J(JS(loc_344f8));	// 107524 js      short loc_344F8 ;~ 24ED:0FDC
cs=0x24ed;eip=0x000fde; 	T(MOV(bp, di));	// 107526 mov     bp, di ;~ 24ED:0FDE
cs=0x24ed;eip=0x000fe0; 	T(AND(bp, 0x1FF));	// 107527 and     bp, 1FFh ;~ 24ED:0FE0
cs=0x24ed;eip=0x000fe4; 	T(MOV(ax, di));	// 107528 mov     ax, di ;~ 24ED:0FE4
cs=0x24ed;eip=0x000fe6; 	J(CALL(sub_340a8,0));	// 107529 call    sub_340A8 ;~ 24ED:0FE6
cs=0x24ed;eip=0x000fe9; 	T(MOV(bx, cx));	// 107530 mov     bx, cx ;~ 24ED:0FE9
cs=0x24ed;eip=0x000feb; 	T(XOR(bh, bh));	// 107531 xor     bh, bh ;~ 24ED:0FEB
cs=0x24ed;eip=0x000fed; 	T(CMP(ch, 0x0FF));	// 107532 cmp     ch, 0FFh ;~ 24ED:0FED
cs=0x24ed;eip=0x000ff0; 	J(JZ(loc_344d7));	// 107533 jz      short loc_344D7 ;~ 24ED:0FF0
cs=0x24ed;eip=0x000ff2; 	T(SHR(bp, 1));	// 107534 shr     bp, 1 ;~ 24ED:0FF2
cs=0x24ed;eip=0x000ff4; 	T(MOV(ax, di));	// 107535 mov     ax, di ;~ 24ED:0FF4
cs=0x24ed;eip=0x000ff6; 	J(JC(loc_344bb));	// 107536 jb      short loc_344BB ;~ 24ED:0FF6
cs=0x24ed;eip=0x000ff8; 	T(SHR(bp, 1));	// 107537 shr     bp, 1 ;~ 24ED:0FF8
cs=0x24ed;eip=0x000ffa; 	J(JNC(loc_344c9));	// 107538 jnb     short loc_344C9 ;~ 24ED:0FFA
cs=0x24ed;eip=0x000ffc; 	T(RCL(bp, 1));	// 107539 rcl     bp, 1 ;~ 24ED:0FFC
loc_344ae:
	// 7057 
cs=0x24ed;eip=0x000ffe; 	T(MOV(cx, bp));	// 107542 mov     cx, bp ;~ 24ED:0FFE
cs=0x24ed;eip=0x001000; 	T(MOV(di, ax));	// 107543 mov     di, ax ;~ 24ED:1000
	// 107544 rep movsw ;~ 24ED:1002
cs=0x24ed;eip=0x001002; 	X(	REP MOVSW);	// 107544 rep movsw ;~ 24ED:1002
cs=0x24ed;eip=0x001004; 	T(ADD(ax, 0x140));	// 107545 add     ax, 140h ;~ 24ED:1004
cs=0x24ed;eip=0x001007; 	T(DEC(bx));	// 107546 dec     bx ;~ 24ED:1007
cs=0x24ed;eip=0x001008; 	J(JNZ(loc_344ae));	// 107547 jnz     short loc_344AE ;~ 24ED:1008
cs=0x24ed;eip=0x00100a; 	J(RETF(0));	// 107548 retf ;~ 24ED:100A
loc_344bb:
	// 7058 
cs=0x24ed;eip=0x00100b; 	T(MOV(cx, bp));	// 107553 mov     cx, bp ;~ 24ED:100B
cs=0x24ed;eip=0x00100d; 	T(MOV(di, ax));	// 107554 mov     di, ax ;~ 24ED:100D
	// 107555 rep movsw ;~ 24ED:100F
cs=0x24ed;eip=0x00100f; 	X(	REP MOVSW);	// 107555 rep movsw ;~ 24ED:100F
cs=0x24ed;eip=0x001011; 	X(MOVSB);	// 107556 movsb ;~ 24ED:1011
cs=0x24ed;eip=0x001012; 	T(ADD(ax, 0x140));	// 107557 add     ax, 140h ;~ 24ED:1012
cs=0x24ed;eip=0x001015; 	T(DEC(bx));	// 107558 dec     bx ;~ 24ED:1015
cs=0x24ed;eip=0x001016; 	J(JNZ(loc_344bb));	// 107559 jnz     short loc_344BB ;~ 24ED:1016
cs=0x24ed;eip=0x001018; 	J(RETF(0));	// 107560 retf ;~ 24ED:1018
loc_344c9:
	// 7059 
cs=0x24ed;eip=0x001019; 	T(MOV(cx, bp));	// 107565 mov     cx, bp ;~ 24ED:1019
cs=0x24ed;eip=0x00101b; 	T(MOV(di, ax));	// 107566 mov     di, ax ;~ 24ED:101B
	// 107567 rep movsd ;~ 24ED:101D
cs=0x24ed;eip=0x00101d; 	X(	REP MOVSD);	// 107567 rep movsd ;~ 24ED:101D
cs=0x24ed;eip=0x001020; 	T(ADD(ax, 0x140));	// 107568 add     ax, 140h ;~ 24ED:1020
cs=0x24ed;eip=0x001023; 	T(DEC(bx));	// 107569 dec     bx ;~ 24ED:1023
cs=0x24ed;eip=0x001024; 	J(JNZ(loc_344c9));	// 107570 jnz     short loc_344C9 ;~ 24ED:1024
cs=0x24ed;eip=0x001026; 	J(RETF(0));	// 107571 retf ;~ 24ED:1026
loc_344d7:
	// 7060 
cs=0x24ed;eip=0x001027; 	T(MOV(dx, di));	// 107575 mov     dx, di ;~ 24ED:1027
loc_344d9:
	// 7061 
cs=0x24ed;eip=0x001029; 	T(MOV(cx, bp));	// 107579 mov     cx, bp ;~ 24ED:1029
cs=0x24ed;eip=0x00102b; 	T(MOV(di, dx));	// 107580 mov     di, dx ;~ 24ED:102B
loc_344dd:
	// 7062 
cs=0x24ed;eip=0x00102d; 	T(LODSB);	// 107584 lodsb ;~ 24ED:102D
cs=0x24ed;eip=0x00102e; 	T(OR(al, al));	// 107585 or      al, al ;~ 24ED:102E
cs=0x24ed;eip=0x001030; 	J(JZ(loc_344ed));	// 107586 jz      short loc_344ED ;~ 24ED:1030
cs=0x24ed;eip=0x001032; 	X(STOSB);	// 107587 stosb ;~ 24ED:1032
cs=0x24ed;eip=0x001033; 	J(LOOP(loc_344dd));	// 107588 loop    loc_344DD ;~ 24ED:1033
cs=0x24ed;eip=0x001035; 	T(ADD(dx, 0x140));	// 107589 add     dx, 140h ;~ 24ED:1035
cs=0x24ed;eip=0x001039; 	T(DEC(bx));	// 107590 dec     bx ;~ 24ED:1039
cs=0x24ed;eip=0x00103a; 	J(JNZ(loc_344d9));	// 107591 jnz     short loc_344D9 ;~ 24ED:103A
cs=0x24ed;eip=0x00103c; 	J(RETF(0));	// 107592 retf ;~ 24ED:103C
loc_344ed:
	// 7063 
cs=0x24ed;eip=0x00103d; 	T(INC(di));	// 107596 inc     di ;~ 24ED:103D
cs=0x24ed;eip=0x00103e; 	J(LOOP(loc_344dd));	// 107597 loop    loc_344DD ;~ 24ED:103E
cs=0x24ed;eip=0x001040; 	T(ADD(dx, 0x140));	// 107598 add     dx, 140h ;~ 24ED:1040
cs=0x24ed;eip=0x001044; 	T(DEC(bx));	// 107599 dec     bx ;~ 24ED:1044
cs=0x24ed;eip=0x001045; 	J(JNZ(loc_344d9));	// 107600 jnz     short loc_344D9 ;~ 24ED:1045
cs=0x24ed;eip=0x001047; 	J(RETF(0));	// 107601 retf ;~ 24ED:1047
loc_344f8:
	// 7064 
cs=0x24ed;eip=0x001048; 	T(MOV(bp, di));	// 107605 mov     bp, di ;~ 24ED:1048
cs=0x24ed;eip=0x00104a; 	T(AND(bp, 0x1FF));	// 107606 and     bp, 1FFh ;~ 24ED:104A
cs=0x24ed;eip=0x00104e; 	T(MOV(ax, di));	// 107607 mov     ax, di ;~ 24ED:104E
cs=0x24ed;eip=0x001050; 	J(CALL(sub_340a8,0));	// 107608 call    sub_340A8 ;~ 24ED:1050
cs=0x24ed;eip=0x001053; 	T(MOV(bx, cx));	// 107609 mov     bx, cx ;~ 24ED:1053
cs=0x24ed;eip=0x001055; 	T(XOR(bh, bh));	// 107610 xor     bh, bh ;~ 24ED:1055
cs=0x24ed;eip=0x001057; 	T(TEST(ax, 0x4000));	// 107611 test    ax, 4000h ;~ 24ED:1057
cs=0x24ed;eip=0x00105a; 	J(JNZ(loc_3453c));	// 107612 jnz     short loc_3453C ;~ 24ED:105A
cs=0x24ed;eip=0x00105c; 	T(TEST(ax, 0x2000));	// 107613 test    ax, 2000h ;~ 24ED:105C
cs=0x24ed;eip=0x00105f; 	J(JZ(loc_3452f));	// 107614 jz      short loc_3452F ;~ 24ED:105F
cs=0x24ed;eip=0x001061; 	X(MOV(*(raddr(cs,m2c::kloc_342b3+1)), 0x0EF));	// 107615 mov     byte ptr cs:loc_342B3+1, 0EFh ; 'ï' ;~ 24ED:1061
cs=0x24ed;eip=0x001067; 	X(MOV(*(raddr(cs,m2c::kloc_34371+1)), 0x0EF));	// 107616 mov     byte ptr cs:loc_34371+1, 0EFh ; 'ï' ;~ 24ED:1067
cs=0x24ed;eip=0x00106d; 	T(MOV(ah, bl));	// 107617 mov     ah, bl ;~ 24ED:106D
cs=0x24ed;eip=0x00106f; 	T(DEC(ah));	// 107618 dec     ah ;~ 24ED:106F
cs=0x24ed;eip=0x001071; 	T(MOV(dh, ah));	// 107619 mov     dh, ah ;~ 24ED:1071
cs=0x24ed;eip=0x001073; 	T(XOR(dl, dl));	// 107620 xor     dl, dl ;~ 24ED:1073
cs=0x24ed;eip=0x001075; 	T(MOV(al, dl));	// 107621 mov     al, dl ;~ 24ED:1075
cs=0x24ed;eip=0x001077; 	T(SHR(dx, 1));	// 107622 shr     dx, 1 ;~ 24ED:1077
cs=0x24ed;eip=0x001079; 	T(SHR(dx, 1));	// 107623 shr     dx, 1 ;~ 24ED:1079
cs=0x24ed;eip=0x00107b; 	T(ADD(di, ax));	// 107624 add     di, ax ;~ 24ED:107B
cs=0x24ed;eip=0x00107d; 	T(ADD(di, dx));	// 107625 add     di, dx ;~ 24ED:107D
loc_3452f:
	// 7065 
cs=0x24ed;eip=0x00107f; 	T(MOV(dx, bp));	// 107628 mov     dx, bp ;~ 24ED:107F
cs=0x24ed;eip=0x001081; 	T(CMP(ch, 0x0FF));	// 107629 cmp     ch, 0FFh ;~ 24ED:1081
cs=0x24ed;eip=0x001084; 	J(JZ(loc_34539));	// 107630 jz      short loc_34539 ;~ 24ED:1084
cs=0x24ed;eip=0x001086; 	J(JMP(loc_34375));	// 107631 jmp     loc_34375 ;~ 24ED:1086
loc_34539:
	// 7066 
cs=0x24ed;eip=0x001089; 	J(JMP(loc_342b7));	// 107635 jmp     loc_342B7 ;~ 24ED:1089
loc_3453c:
	// 7067 
cs=0x24ed;eip=0x00108c; 	T(TEST(ax, 0x2000));	// 107639 test    ax, 2000h ;~ 24ED:108C
cs=0x24ed;eip=0x00108f; 	J(JZ(loc_3455f));	// 107640 jz      short loc_3455F ;~ 24ED:108F
cs=0x24ed;eip=0x001091; 	X(MOV(*(raddr(cs,m2c::kloc_34314+1)), 0x0EF));	// 107641 mov     byte ptr cs:loc_34314+1, 0EFh ; 'ï' ;~ 24ED:1091
cs=0x24ed;eip=0x001097; 	X(MOV(*(raddr(cs,m2c::kloc_343a3+1)), 0x0EF));	// 107642 mov     byte ptr cs:loc_343A3+1, 0EFh ; 'ï' ;~ 24ED:1097
cs=0x24ed;eip=0x00109d; 	T(MOV(ah, bl));	// 107643 mov     ah, bl ;~ 24ED:109D
cs=0x24ed;eip=0x00109f; 	T(DEC(ah));	// 107644 dec     ah ;~ 24ED:109F
cs=0x24ed;eip=0x0010a1; 	T(MOV(dh, ah));	// 107645 mov     dh, ah ;~ 24ED:10A1
cs=0x24ed;eip=0x0010a3; 	T(XOR(dl, dl));	// 107646 xor     dl, dl ;~ 24ED:10A3
cs=0x24ed;eip=0x0010a5; 	T(MOV(al, dl));	// 107647 mov     al, dl ;~ 24ED:10A5
cs=0x24ed;eip=0x0010a7; 	T(SHR(dx, 1));	// 107648 shr     dx, 1 ;~ 24ED:10A7
cs=0x24ed;eip=0x0010a9; 	T(SHR(dx, 1));	// 107649 shr     dx, 1 ;~ 24ED:10A9
cs=0x24ed;eip=0x0010ab; 	T(ADD(di, ax));	// 107650 add     di, ax ;~ 24ED:10AB
cs=0x24ed;eip=0x0010ad; 	T(ADD(di, dx));	// 107651 add     di, dx ;~ 24ED:10AD
loc_3455f:
	// 7068 
cs=0x24ed;eip=0x0010af; 	T(ADD(di, bp));	// 107654 add     di, bp ;~ 24ED:10AF
cs=0x24ed;eip=0x0010b1; 	T(DEC(di));	// 107655 dec     di ;~ 24ED:10B1
cs=0x24ed;eip=0x0010b2; 	T(STD);	// 107656 std ;~ 24ED:10B2
cs=0x24ed;eip=0x0010b3; 	T(MOV(dx, bp));	// 107657 mov     dx, bp ;~ 24ED:10B3
cs=0x24ed;eip=0x0010b5; 	T(CMP(ch, 0x0FF));	// 107658 cmp     ch, 0FFh ;~ 24ED:10B5
cs=0x24ed;eip=0x0010b8; 	J(JZ(loc_3456d));	// 107659 jz      short loc_3456D ;~ 24ED:10B8
cs=0x24ed;eip=0x0010ba; 	J(JMP(loc_343a7));	// 107660 jmp     loc_343A7 ;~ 24ED:10BA
loc_3456d:
	// 7069 
cs=0x24ed;eip=0x0010bd; 	J(JMP(loc_34318));	// 107664 jmp     loc_34318 ;~ 24ED:10BD
seg002_10c6_proc:
	// 107677 
loc_34576:
	// 7070 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0010c6; 	T(MOV(bp, *(dw*)(((db*)&word_34572))));	// 107679 mov     bp, cs:word_34572 ;~ 24ED:10C6
cs=0x24ed;eip=0x0010cb; 	T(SHR(bp, 1));	// 107680 shr     bp, 1 ;~ 24ED:10CB
cs=0x24ed;eip=0x0010cd; 	X(PUSHF);	// 107681 pushf ;~ 24ED:10CD
cs=0x24ed;eip=0x0010ce; 	J(JCXZ(loc_34588));	// 107682 jcxz    short loc_34588 ;~ 24ED:10CE
cs=0x24ed;eip=0x0010d0; 	T(OR(dl, dl));	// 107683 or      dl, dl ;~ 24ED:10D0
cs=0x24ed;eip=0x0010d2; 	J(JS(loc_345b1));	// 107684 js      short loc_345B1 ;~ 24ED:10D2
cs=0x24ed;eip=0x0010d4; 	J(JMP(loc_34594));	// 107685 jmp     short loc_34594 ;~ 24ED:10D4
loc_34586:
	// 7071 
cs=0x24ed;eip=0x0010d6; 	T(ADD(si, cx));	// 107689 add     si, cx ;~ 24ED:10D6
loc_34588:
	// 7072 
cs=0x24ed;eip=0x0010d8; 	T(LODSB);	// 107693 lodsb ;~ 24ED:10D8
cs=0x24ed;eip=0x0010d9; 	T(XOR(ah, ah));	// 107694 xor     ah, ah ;~ 24ED:10D9
cs=0x24ed;eip=0x0010db; 	T(MOV(dl, al));	// 107695 mov     dl, al ;~ 24ED:10DB
cs=0x24ed;eip=0x0010dd; 	T(OR(al, al));	// 107696 or      al, al ;~ 24ED:10DD
cs=0x24ed;eip=0x0010df; 	J(JS(loc_345ab));	// 107697 js      short loc_345AB ;~ 24ED:10DF
cs=0x24ed;eip=0x0010e1; 	T(MOV(cx, ax));	// 107698 mov     cx, ax ;~ 24ED:10E1
cs=0x24ed;eip=0x0010e3; 	T(INC(cx));	// 107699 inc     cx ;~ 24ED:10E3
loc_34594:
	// 7073 
cs=0x24ed;eip=0x0010e4; 	T(SUB(bp, cx));	// 107702 sub     bp, cx ;~ 24ED:10E4
cs=0x24ed;eip=0x0010e6; 	J(JNC(loc_34586));	// 107703 jnb     short loc_34586 ;~ 24ED:10E6
cs=0x24ed;eip=0x0010e8; 	T(ADD(cx, bp));	// 107704 add     cx, bp ;~ 24ED:10E8
cs=0x24ed;eip=0x0010ea; 	T(ADD(si, cx));	// 107705 add     si, cx ;~ 24ED:10EA
cs=0x24ed;eip=0x0010ec; 	T(MOV(cx, bp));	// 107706 mov     cx, bp ;~ 24ED:10EC
cs=0x24ed;eip=0x0010ee; 	T(NEG(cx));	// 107707 neg     cx ;~ 24ED:10EE
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0010f0; 	T(MOV(bp, *(dw*)(((db*)&word_34574))));	// 107708 mov     bp, cs:word_34574 ;~ 24ED:10F0
cs=0x24ed;eip=0x0010f5; 	X(POPF);	// 107709 popf ;~ 24ED:10F5
cs=0x24ed;eip=0x0010f6; 	J(JNC(loc_345d5));	// 107710 jnb     short loc_345D5 ;~ 24ED:10F6
cs=0x24ed;eip=0x0010f8; 	T(LODSB);	// 107712 lodsb ;~ 24ED:10F8
cs=0x24ed;eip=0x0010f9; 	J(JMP(loc_345c6));	// 107713 jmp     short loc_345C6 ;~ 24ED:10F9
loc_345ab:
	// 7074 
cs=0x24ed;eip=0x0010fb; 	T(MOV(cx, 0x101));	// 107717 mov     cx, 101h ;~ 24ED:10FB
cs=0x24ed;eip=0x0010fe; 	T(SUB(cx, ax));	// 107718 sub     cx, ax ;~ 24ED:10FE
cs=0x24ed;eip=0x001100; 	T(INC(si));	// 107719 inc     si ;~ 24ED:1100
loc_345b1:
	// 7075 
cs=0x24ed;eip=0x001101; 	T(SUB(bp, cx));	// 107722 sub     bp, cx ;~ 24ED:1101
cs=0x24ed;eip=0x001103; 	J(JNC(loc_34588));	// 107723 jnb     short loc_34588 ;~ 24ED:1103
cs=0x24ed;eip=0x001105; 	T(XOR(ah, ah));	// 107724 xor     ah, ah ;~ 24ED:1105
cs=0x24ed;eip=0x001107; 	T(MOV(cx, bp));	// 107725 mov     cx, bp ;~ 24ED:1107
cs=0x24ed;eip=0x001109; 	T(NEG(cx));	// 107726 neg     cx ;~ 24ED:1109
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00110b; 	T(MOV(bp, *(dw*)(((db*)&word_34574))));	// 107727 mov     bp, cs:word_34574 ;~ 24ED:110B
cs=0x24ed;eip=0x001110; 	X(POPF);	// 107728 popf ;~ 24ED:1110
cs=0x24ed;eip=0x001111; 	J(JNC(loc_345d5));	// 107729 jnb     short loc_345D5 ;~ 24ED:1111
cs=0x24ed;eip=0x001113; 	T(MOV(al, *(raddr(ds,si-1))));	// 107730 mov     al, [si-1] ;~ 24ED:1113
loc_345c6:
	// 7076 
cs=0x24ed;eip=0x001116; 	T(SHR(al, 4));	// 107733 shr     al, 4 ;~ 24ED:1116
cs=0x24ed;eip=0x001119; 	J(JZ(loc_345d0));	// 107734 jz      short loc_345D0 ;~ 24ED:1119
cs=0x24ed;eip=0x00111b; 	T(ADD(al, dh));	// 107735 add     al, dh ;~ 24ED:111B
cs=0x24ed;eip=0x00111d; 	X(MOV(*(raddr(es,di)), al));	// 107736 mov     es:[di], al ;~ 24ED:111D
loc_345d0:
	// 7077 
cs=0x24ed;eip=0x001120; 	T(INC(di));	// 107739 inc     di ;~ 24ED:1120
cs=0x24ed;eip=0x001121; 	T(DEC(cx));	// 107740 dec     cx ;~ 24ED:1121
cs=0x24ed;eip=0x001122; 	T(DEC(bp));	// 107741 dec     bp ;~ 24ED:1122
cs=0x24ed;eip=0x001123; 	J(JZ(loc_34610));	// 107742 jz      short loc_34610 ;~ 24ED:1123
loc_345d5:
	// 7078 
cs=0x24ed;eip=0x001125; 	T(SHR(bp, 1));	// 107746 shr     bp, 1 ;~ 24ED:1125
cs=0x24ed;eip=0x001127; 	J(JCXZ(loc_345e0));	// 107747 jcxz    short loc_345E0 ;~ 24ED:1127
cs=0x24ed;eip=0x001129; 	T(OR(dl, dl));	// 107748 or      dl, dl ;~ 24ED:1129
cs=0x24ed;eip=0x00112b; 	J(JNS(loc_345ec));	// 107749 jns     short loc_345EC ;~ 24ED:112B
cs=0x24ed;eip=0x00112d; 	J(JMP(loc_34633));	// 107750 jmp     short loc_34633 ;~ 24ED:112D
loc_345e0:
	// 7079 
cs=0x24ed;eip=0x001130; 	T(LODSB);	// 107759 lodsb ;~ 24ED:1130
cs=0x24ed;eip=0x001131; 	T(XOR(ah, ah));	// 107760 xor     ah, ah ;~ 24ED:1131
cs=0x24ed;eip=0x001133; 	T(MOV(dl, al));	// 107761 mov     dl, al ;~ 24ED:1133
cs=0x24ed;eip=0x001135; 	T(OR(al, al));	// 107762 or      al, al ;~ 24ED:1135
cs=0x24ed;eip=0x001137; 	J(JS(loc_3462d));	// 107763 js      short loc_3462D ;~ 24ED:1137
cs=0x24ed;eip=0x001139; 	T(MOV(cx, ax));	// 107764 mov     cx, ax ;~ 24ED:1139
cs=0x24ed;eip=0x00113b; 	T(INC(cx));	// 107765 inc     cx ;~ 24ED:113B
loc_345ec:
	// 7080 
cs=0x24ed;eip=0x00113c; 	T(SUB(bp, cx));	// 107768 sub     bp, cx ;~ 24ED:113C
cs=0x24ed;eip=0x00113e; 	J(JNC(loc_345f4));	// 107769 jnb     short loc_345F4 ;~ 24ED:113E
cs=0x24ed;eip=0x001140; 	T(ADD(cx, bp));	// 107770 add     cx, bp ;~ 24ED:1140
cs=0x24ed;eip=0x001142; 	J(JZ(loc_3460c));	// 107771 jz      short loc_3460C ;~ 24ED:1142
loc_345f4:
	// 7081 
cs=0x24ed;eip=0x001144; 	T(LODSB);	// 107775 lodsb ;~ 24ED:1144
cs=0x24ed;eip=0x001145; 	T(MOV(ah, al));	// 107776 mov     ah, al ;~ 24ED:1145
cs=0x24ed;eip=0x001147; 	T(AND(al, 0x0F));	// 107777 and     al, 0Fh ;~ 24ED:1147
cs=0x24ed;eip=0x001149; 	J(JZ(loc_34623));	// 107778 jz      short loc_34623 ;~ 24ED:1149
cs=0x24ed;eip=0x00114b; 	T(ADD(al, dh));	// 107779 add     al, dh ;~ 24ED:114B
cs=0x24ed;eip=0x00114d; 	X(STOSB);	// 107780 stosb ;~ 24ED:114D
cs=0x24ed;eip=0x00114e; 	T(SHR(ah, 1));	// 107781 shr     ah, 1 ;~ 24ED:114E
loc_34600:
	// 7082 
cs=0x24ed;eip=0x001150; 	T(SHR(ah, 3));	// 107784 shr     ah, 3 ;~ 24ED:1150
cs=0x24ed;eip=0x001153; 	J(JZ(loc_34628));	// 107785 jz      short loc_34628 ;~ 24ED:1153
cs=0x24ed;eip=0x001155; 	T(MOV(al, ah));	// 107786 mov     al, ah ;~ 24ED:1155
cs=0x24ed;eip=0x001157; 	T(ADD(al, dh));	// 107787 add     al, dh ;~ 24ED:1157
cs=0x24ed;eip=0x001159; 	X(STOSB);	// 107788 stosb ;~ 24ED:1159
cs=0x24ed;eip=0x00115a; 	J(LOOP(loc_345f4));	// 107789 loop    loc_345F4 ;~ 24ED:115A
loc_3460c:
	// 7083 
cs=0x24ed;eip=0x00115c; 	T(OR(bp, bp));	// 107793 or      bp, bp ;~ 24ED:115C
cs=0x24ed;eip=0x00115e; 	J(JNS(loc_345e0));	// 107794 jns     short loc_345E0 ;~ 24ED:115E
loc_34610:
	// 7084 
cs=0x24ed;eip=0x001160; 	T(MOV(cx, bp));	// 107798 mov     cx, bp ;~ 24ED:1160
cs=0x24ed;eip=0x001162; 	T(NEG(cx));	// 107799 neg     cx ;~ 24ED:1162
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001164; 	T(SUB(di, *(dw*)(((db*)&word_34574))));	// 107800 sub     di, cs:word_34574 ;~ 24ED:1164
cs=0x24ed;eip=0x001169; 	T(ADD(di, 0x140));	// 107801 add     di, 140h ;~ 24ED:1169
cs=0x24ed;eip=0x00116d; 	T(DEC(bx));	// 107802 dec     bx ;~ 24ED:116D
cs=0x24ed;eip=0x00116e; 	J(JNZ(loc_34576));	// 107803 jnz     loc_34576 ;~ 24ED:116E
cs=0x24ed;eip=0x001172; 	J(RETF(0));	// 107804 retf ;~ 24ED:1172
loc_34623:
	// 7085 
cs=0x24ed;eip=0x001173; 	T(INC(di));	// 107808 inc     di ;~ 24ED:1173
cs=0x24ed;eip=0x001174; 	T(SHR(ah, 1));	// 107809 shr     ah, 1 ;~ 24ED:1174
cs=0x24ed;eip=0x001176; 	J(JNZ(loc_34600));	// 107810 jnz     short loc_34600 ;~ 24ED:1176
loc_34628:
	// 7086 
cs=0x24ed;eip=0x001178; 	T(INC(di));	// 107813 inc     di ;~ 24ED:1178
cs=0x24ed;eip=0x001179; 	J(LOOP(loc_345f4));	// 107814 loop    loc_345F4 ;~ 24ED:1179
cs=0x24ed;eip=0x00117b; 	J(JMP(loc_3460c));	// 107815 jmp     short loc_3460C ;~ 24ED:117B
loc_3462d:
	// 7087 
cs=0x24ed;eip=0x00117d; 	T(MOV(cx, 0x101));	// 107819 mov     cx, 101h ;~ 24ED:117D
cs=0x24ed;eip=0x001180; 	T(SUB(cx, ax));	// 107820 sub     cx, ax ;~ 24ED:1180
cs=0x24ed;eip=0x001182; 	T(INC(si));	// 107821 inc     si ;~ 24ED:1182
loc_34633:
	// 7088 
cs=0x24ed;eip=0x001183; 	T(SUB(bp, cx));	// 107824 sub     bp, cx ;~ 24ED:1183
cs=0x24ed;eip=0x001185; 	J(JNC(loc_3463b));	// 107825 jnb     short loc_3463B ;~ 24ED:1185
cs=0x24ed;eip=0x001187; 	T(ADD(cx, bp));	// 107826 add     cx, bp ;~ 24ED:1187
cs=0x24ed;eip=0x001189; 	J(JZ(loc_34656));	// 107827 jz      short loc_34656 ;~ 24ED:1189
loc_3463b:
	// 7089 
cs=0x24ed;eip=0x00118b; 	T(MOV(al, *(raddr(ds,si-1))));	// 107830 mov     al, [si-1] ;~ 24ED:118B
cs=0x24ed;eip=0x00118e; 	T(SHL(ax, 1));	// 107831 shl     ax, 1 ;~ 24ED:118E
cs=0x24ed;eip=0x001190; 	J(JZ(loc_3465c));	// 107832 jz      short loc_3465C ;~ 24ED:1190
cs=0x24ed;eip=0x001192; 	T(SHL(ax, 3));	// 107833 shl     ax, 3 ;~ 24ED:1192
cs=0x24ed;eip=0x001195; 	T(SHR(al, 1));	// 107834 shr     al, 1 ;~ 24ED:1195
cs=0x24ed;eip=0x001197; 	J(JZ(loc_34662));	// 107835 jz      short loc_34662 ;~ 24ED:1197
cs=0x24ed;eip=0x001199; 	T(SHR(al, 3));	// 107836 shr     al, 3 ;~ 24ED:1199
cs=0x24ed;eip=0x00119c; 	T(ADD(al, dh));	// 107837 add     al, dh ;~ 24ED:119C
cs=0x24ed;eip=0x00119e; 	T(OR(ah, ah));	// 107838 or      ah, ah ;~ 24ED:119E
cs=0x24ed;eip=0x0011a0; 	J(JZ(loc_3466c));	// 107839 jz      short loc_3466C ;~ 24ED:11A0
cs=0x24ed;eip=0x0011a2; 	T(ADD(ah, dh));	// 107840 add     ah, dh ;~ 24ED:11A2
	// 107841 rep stosw ;~ 24ED:11A4
cs=0x24ed;eip=0x0011a4; 	X(	REP STOSW);	// 107841 rep stosw ;~ 24ED:11A4
loc_34656:
	// 7090 
cs=0x24ed;eip=0x0011a6; 	T(OR(bp, bp));	// 107845 or      bp, bp ;~ 24ED:11A6
cs=0x24ed;eip=0x0011a8; 	J(JS(loc_34610));	// 107846 js      short loc_34610 ;~ 24ED:11A8
cs=0x24ed;eip=0x0011aa; 	J(JMP(loc_345e0));	// 107847 jmp     short loc_345E0 ;~ 24ED:11AA
loc_3465c:
	// 7091 
cs=0x24ed;eip=0x0011ac; 	T(SHL(cx, 1));	// 107851 shl     cx, 1 ;~ 24ED:11AC
cs=0x24ed;eip=0x0011ae; 	T(ADD(di, cx));	// 107852 add     di, cx ;~ 24ED:11AE
cs=0x24ed;eip=0x0011b0; 	J(JMP(loc_34656));	// 107853 jmp     short loc_34656 ;~ 24ED:11B0
loc_34662:
	// 7092 
cs=0x24ed;eip=0x0011b2; 	T(MOV(al, ah));	// 107857 mov     al, ah ;~ 24ED:11B2
cs=0x24ed;eip=0x0011b4; 	T(ADD(al, dh));	// 107858 add     al, dh ;~ 24ED:11B4
loc_34666:
	// 7093 
cs=0x24ed;eip=0x0011b6; 	T(INC(di));	// 107861 inc     di ;~ 24ED:11B6
cs=0x24ed;eip=0x0011b7; 	X(STOSB);	// 107862 stosb ;~ 24ED:11B7
cs=0x24ed;eip=0x0011b8; 	J(LOOP(loc_34666));	// 107863 loop    loc_34666 ;~ 24ED:11B8
cs=0x24ed;eip=0x0011ba; 	J(JMP(loc_34656));	// 107864 jmp     short loc_34656 ;~ 24ED:11BA
loc_3466c:
	// 7094 
cs=0x24ed;eip=0x0011bc; 	X(STOSB);	// 107869 stosb ;~ 24ED:11BC
cs=0x24ed;eip=0x0011bd; 	T(INC(di));	// 107870 inc     di ;~ 24ED:11BD
cs=0x24ed;eip=0x0011be; 	J(LOOP(loc_3466c));	// 107871 loop    loc_3466C ;~ 24ED:11BE
cs=0x24ed;eip=0x0011c0; 	J(JMP(loc_34656));	// 107872 jmp     short loc_34656 ;~ 24ED:11C0
loc_34672:
	// 7095 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0011c2; 	T(MOV(bp, *(dw*)(((db*)&word_34572))));	// 107877 mov     bp, cs:word_34572 ;~ 24ED:11C2
cs=0x24ed;eip=0x0011c7; 	T(OR(bp, bp));	// 107878 or      bp, bp ;~ 24ED:11C7
cs=0x24ed;eip=0x0011c9; 	J(JNZ(loc_34683));	// 107879 jnz     short loc_34683 ;~ 24ED:11C9
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0011cb; 	T(MOV(bp, *(dw*)(((db*)&word_34574))));	// 107880 mov     bp, cs:word_34574 ;~ 24ED:11CB
cs=0x24ed;eip=0x0011d0; 	J(JMP(loc_346e5));	// 107881 jmp     short loc_346E5 ;~ 24ED:11D0
loc_34683:
	// 7096 
cs=0x24ed;eip=0x0011d3; 	T(SHR(bp, 1));	// 107889 shr     bp, 1 ;~ 24ED:11D3
cs=0x24ed;eip=0x0011d5; 	X(PUSHF);	// 107890 pushf ;~ 24ED:11D5
cs=0x24ed;eip=0x0011d6; 	J(JCXZ(loc_34690));	// 107891 jcxz    short loc_34690 ;~ 24ED:11D6
cs=0x24ed;eip=0x0011d8; 	T(OR(dl, dl));	// 107892 or      dl, dl ;~ 24ED:11D8
cs=0x24ed;eip=0x0011da; 	J(JS(loc_346b9));	// 107893 js      short loc_346B9 ;~ 24ED:11DA
cs=0x24ed;eip=0x0011dc; 	J(JMP(loc_3469c));	// 107894 jmp     short loc_3469C ;~ 24ED:11DC
loc_3468e:
	// 7097 
cs=0x24ed;eip=0x0011de; 	T(ADD(si, cx));	// 107898 add     si, cx ;~ 24ED:11DE
loc_34690:
	// 7098 
cs=0x24ed;eip=0x0011e0; 	T(LODSB);	// 107902 lodsb ;~ 24ED:11E0
cs=0x24ed;eip=0x0011e1; 	T(XOR(ah, ah));	// 107903 xor     ah, ah ;~ 24ED:11E1
cs=0x24ed;eip=0x0011e3; 	T(MOV(dl, al));	// 107904 mov     dl, al ;~ 24ED:11E3
cs=0x24ed;eip=0x0011e5; 	T(OR(al, al));	// 107905 or      al, al ;~ 24ED:11E5
cs=0x24ed;eip=0x0011e7; 	J(JS(loc_346b3));	// 107906 js      short loc_346B3 ;~ 24ED:11E7
cs=0x24ed;eip=0x0011e9; 	T(MOV(cx, ax));	// 107907 mov     cx, ax ;~ 24ED:11E9
cs=0x24ed;eip=0x0011eb; 	T(INC(cx));	// 107908 inc     cx ;~ 24ED:11EB
loc_3469c:
	// 7099 
cs=0x24ed;eip=0x0011ec; 	T(SUB(bp, cx));	// 107911 sub     bp, cx ;~ 24ED:11EC
cs=0x24ed;eip=0x0011ee; 	J(JNC(loc_3468e));	// 107912 jnb     short loc_3468E ;~ 24ED:11EE
cs=0x24ed;eip=0x0011f0; 	T(ADD(cx, bp));	// 107913 add     cx, bp ;~ 24ED:11F0
cs=0x24ed;eip=0x0011f2; 	T(ADD(si, cx));	// 107914 add     si, cx ;~ 24ED:11F2
cs=0x24ed;eip=0x0011f4; 	T(MOV(cx, bp));	// 107915 mov     cx, bp ;~ 24ED:11F4
cs=0x24ed;eip=0x0011f6; 	T(NEG(cx));	// 107916 neg     cx ;~ 24ED:11F6
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0011f8; 	T(MOV(bp, *(dw*)(((db*)&word_34574))));	// 107917 mov     bp, cs:word_34574 ;~ 24ED:11F8
cs=0x24ed;eip=0x0011fd; 	X(POPF);	// 107918 popf ;~ 24ED:11FD
cs=0x24ed;eip=0x0011fe; 	J(JNC(loc_346e5));	// 107919 jnb     short loc_346E5 ;~ 24ED:11FE
cs=0x24ed;eip=0x001200; 	T(LODSB);	// 107920 lodsb ;~ 24ED:1200
cs=0x24ed;eip=0x001201; 	J(JMP(loc_346ce));	// 107921 jmp     short loc_346CE ;~ 24ED:1201
loc_346b3:
	// 7100 
cs=0x24ed;eip=0x001203; 	T(MOV(cx, 0x101));	// 107925 mov     cx, 101h ;~ 24ED:1203
cs=0x24ed;eip=0x001206; 	T(SUB(cx, ax));	// 107926 sub     cx, ax ;~ 24ED:1206
cs=0x24ed;eip=0x001208; 	T(INC(si));	// 107927 inc     si ;~ 24ED:1208
loc_346b9:
	// 7101 
cs=0x24ed;eip=0x001209; 	T(SUB(bp, cx));	// 107930 sub     bp, cx ;~ 24ED:1209
cs=0x24ed;eip=0x00120b; 	J(JNC(loc_34690));	// 107931 jnb     short loc_34690 ;~ 24ED:120B
cs=0x24ed;eip=0x00120d; 	T(XOR(ah, ah));	// 107932 xor     ah, ah ;~ 24ED:120D
cs=0x24ed;eip=0x00120f; 	T(MOV(cx, bp));	// 107933 mov     cx, bp ;~ 24ED:120F
cs=0x24ed;eip=0x001211; 	T(NEG(cx));	// 107934 neg     cx ;~ 24ED:1211
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001213; 	T(MOV(bp, *(dw*)(((db*)&word_34574))));	// 107935 mov     bp, cs:word_34574 ;~ 24ED:1213
cs=0x24ed;eip=0x001218; 	X(POPF);	// 107936 popf ;~ 24ED:1218
cs=0x24ed;eip=0x001219; 	J(JNC(loc_346e5));	// 107937 jnb     short loc_346E5 ;~ 24ED:1219
cs=0x24ed;eip=0x00121b; 	T(MOV(al, *(raddr(ds,si-1))));	// 107938 mov     al, [si-1] ;~ 24ED:121B
loc_346ce:
	// 7102 
cs=0x24ed;eip=0x00121e; 	T(SHR(al, 4));	// 107941 shr     al, 4 ;~ 24ED:121E
cs=0x24ed;eip=0x001221; 	J(JZ(loc_346d8));	// 107942 jz      short loc_346D8 ;~ 24ED:1221
cs=0x24ed;eip=0x001223; 	T(ADD(al, dh));	// 107943 add     al, dh ;~ 24ED:1223
cs=0x24ed;eip=0x001225; 	X(MOV(*(raddr(es,di)), al));	// 107944 mov     es:[di], al ;~ 24ED:1225
loc_346d8:
	// 7103 
cs=0x24ed;eip=0x001228; 	T(INC(di));	// 107947 inc     di ;~ 24ED:1228
cs=0x24ed;eip=0x001229; 	T(DEC(cx));	// 107948 dec     cx ;~ 24ED:1229
cs=0x24ed;eip=0x00122a; 	T(DEC(bp));	// 107949 dec     bp ;~ 24ED:122A
cs=0x24ed;eip=0x00122b; 	J(JNZ(loc_346e5));	// 107950 jnz     short loc_346E5 ;~ 24ED:122B
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00122d; 	T(MOV(bp, *(dw*)(((db*)&word_34570))));	// 107951 mov     bp, cs:word_34570 ;~ 24ED:122D
cs=0x24ed;eip=0x001232; 	J(JMP(loc_347a1));	// 107952 jmp     loc_347A1 ;~ 24ED:1232
loc_346e5:
	// 7104 
cs=0x24ed;eip=0x001235; 	T(SHR(bp, 1));	// 107957 shr     bp, 1 ;~ 24ED:1235
cs=0x24ed;eip=0x001237; 	X(PUSHF);	// 107958 pushf ;~ 24ED:1237
cs=0x24ed;eip=0x001238; 	J(JCXZ(loc_346f1));	// 107959 jcxz    short loc_346F1 ;~ 24ED:1238
cs=0x24ed;eip=0x00123a; 	T(OR(dl, dl));	// 107960 or      dl, dl ;~ 24ED:123A
cs=0x24ed;eip=0x00123c; 	J(JNS(loc_346fd));	// 107961 jns     short loc_346FD ;~ 24ED:123C
cs=0x24ed;eip=0x00123e; 	J(JMP(loc_34743));	// 107962 jmp     short loc_34743 ;~ 24ED:123E
loc_346f1:
	// 7105 
cs=0x24ed;eip=0x001241; 	T(LODSB);	// 107971 lodsb ;~ 24ED:1241
cs=0x24ed;eip=0x001242; 	T(XOR(ah, ah));	// 107972 xor     ah, ah ;~ 24ED:1242
cs=0x24ed;eip=0x001244; 	T(MOV(dl, al));	// 107973 mov     dl, al ;~ 24ED:1244
cs=0x24ed;eip=0x001246; 	T(OR(al, al));	// 107974 or      al, al ;~ 24ED:1246
cs=0x24ed;eip=0x001248; 	J(JS(loc_3473d));	// 107975 js      short loc_3473D ;~ 24ED:1248
cs=0x24ed;eip=0x00124a; 	T(MOV(cx, ax));	// 107976 mov     cx, ax ;~ 24ED:124A
cs=0x24ed;eip=0x00124c; 	T(INC(cx));	// 107977 inc     cx ;~ 24ED:124C
loc_346fd:
	// 7106 
cs=0x24ed;eip=0x00124d; 	T(SUB(bp, cx));	// 107980 sub     bp, cx ;~ 24ED:124D
cs=0x24ed;eip=0x00124f; 	J(JNC(loc_34705));	// 107981 jnb     short loc_34705 ;~ 24ED:124F
cs=0x24ed;eip=0x001251; 	T(ADD(cx, bp));	// 107982 add     cx, bp ;~ 24ED:1251
cs=0x24ed;eip=0x001253; 	J(JZ(loc_3471d));	// 107983 jz      short loc_3471D ;~ 24ED:1253
loc_34705:
	// 7107 
cs=0x24ed;eip=0x001255; 	T(LODSB);	// 107987 lodsb ;~ 24ED:1255
cs=0x24ed;eip=0x001256; 	T(MOV(ah, al));	// 107988 mov     ah, al ;~ 24ED:1256
cs=0x24ed;eip=0x001258; 	T(AND(al, 0x0F));	// 107989 and     al, 0Fh ;~ 24ED:1258
cs=0x24ed;eip=0x00125a; 	J(JZ(loc_34733));	// 107990 jz      short loc_34733 ;~ 24ED:125A
cs=0x24ed;eip=0x00125c; 	T(ADD(al, dh));	// 107991 add     al, dh ;~ 24ED:125C
cs=0x24ed;eip=0x00125e; 	X(STOSB);	// 107992 stosb ;~ 24ED:125E
cs=0x24ed;eip=0x00125f; 	T(SHR(ah, 1));	// 107993 shr     ah, 1 ;~ 24ED:125F
loc_34711:
	// 7108 
cs=0x24ed;eip=0x001261; 	T(SHR(ah, 3));	// 107996 shr     ah, 3 ;~ 24ED:1261
cs=0x24ed;eip=0x001264; 	J(JZ(loc_34738));	// 107997 jz      short loc_34738 ;~ 24ED:1264
cs=0x24ed;eip=0x001266; 	T(MOV(al, ah));	// 107998 mov     al, ah ;~ 24ED:1266
cs=0x24ed;eip=0x001268; 	T(ADD(al, dh));	// 107999 add     al, dh ;~ 24ED:1268
cs=0x24ed;eip=0x00126a; 	X(STOSB);	// 108000 stosb ;~ 24ED:126A
cs=0x24ed;eip=0x00126b; 	J(LOOP(loc_34705));	// 108001 loop    loc_34705 ;~ 24ED:126B
loc_3471d:
	// 7109 
cs=0x24ed;eip=0x00126d; 	T(OR(bp, bp));	// 108005 or      bp, bp ;~ 24ED:126D
cs=0x24ed;eip=0x00126f; 	J(JNS(loc_346f1));	// 108006 jns     short loc_346F1 ;~ 24ED:126F
cs=0x24ed;eip=0x001271; 	T(MOV(cx, bp));	// 108007 mov     cx, bp ;~ 24ED:1271
cs=0x24ed;eip=0x001273; 	T(NEG(cx));	// 108008 neg     cx ;~ 24ED:1273
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001275; 	T(MOV(bp, *(dw*)(((db*)&word_34570))));	// 108009 mov     bp, cs:word_34570 ;~ 24ED:1275
cs=0x24ed;eip=0x00127a; 	T(XOR(ah, ah));	// 108010 xor     ah, ah ;~ 24ED:127A
cs=0x24ed;eip=0x00127c; 	X(POPF);	// 108011 popf ;~ 24ED:127C
cs=0x24ed;eip=0x00127d; 	J(JNC(loc_347a1));	// 108012 jnb     short loc_347A1 ;~ 24ED:127D
cs=0x24ed;eip=0x00127f; 	T(LODSB);	// 108013 lodsb ;~ 24ED:127F
cs=0x24ed;eip=0x001280; 	J(JMP(loc_34793));	// 108014 jmp     short loc_34793 ;~ 24ED:1280
loc_34733:
	// 7110 
cs=0x24ed;eip=0x001283; 	T(INC(di));	// 108022 inc     di ;~ 24ED:1283
cs=0x24ed;eip=0x001284; 	T(SHR(ah, 1));	// 108023 shr     ah, 1 ;~ 24ED:1284
cs=0x24ed;eip=0x001286; 	J(JNZ(loc_34711));	// 108024 jnz     short loc_34711 ;~ 24ED:1286
loc_34738:
	// 7111 
cs=0x24ed;eip=0x001288; 	T(INC(di));	// 108027 inc     di ;~ 24ED:1288
cs=0x24ed;eip=0x001289; 	J(LOOP(loc_34705));	// 108028 loop    loc_34705 ;~ 24ED:1289
cs=0x24ed;eip=0x00128b; 	J(JMP(loc_3471d));	// 108029 jmp     short loc_3471D ;~ 24ED:128B
loc_3473d:
	// 7112 
cs=0x24ed;eip=0x00128d; 	T(MOV(cx, 0x101));	// 108033 mov     cx, 101h ;~ 24ED:128D
cs=0x24ed;eip=0x001290; 	T(SUB(cx, ax));	// 108034 sub     cx, ax ;~ 24ED:1290
cs=0x24ed;eip=0x001292; 	T(INC(si));	// 108035 inc     si ;~ 24ED:1292
loc_34743:
	// 7113 
cs=0x24ed;eip=0x001293; 	T(SUB(bp, cx));	// 108038 sub     bp, cx ;~ 24ED:1293
cs=0x24ed;eip=0x001295; 	J(JNC(loc_3474b));	// 108039 jnb     short loc_3474B ;~ 24ED:1295
cs=0x24ed;eip=0x001297; 	T(ADD(cx, bp));	// 108040 add     cx, bp ;~ 24ED:1297
cs=0x24ed;eip=0x001299; 	J(JZ(loc_3477c));	// 108041 jz      short loc_3477C ;~ 24ED:1299
loc_3474b:
	// 7114 
cs=0x24ed;eip=0x00129b; 	T(MOV(al, *(raddr(ds,si-1))));	// 108044 mov     al, [si-1] ;~ 24ED:129B
cs=0x24ed;eip=0x00129e; 	T(SHL(ax, 1));	// 108045 shl     ax, 1 ;~ 24ED:129E
cs=0x24ed;eip=0x0012a0; 	J(JZ(loc_34768));	// 108046 jz      short loc_34768 ;~ 24ED:12A0
cs=0x24ed;eip=0x0012a2; 	T(SHL(ax, 3));	// 108047 shl     ax, 3 ;~ 24ED:12A2
cs=0x24ed;eip=0x0012a5; 	T(SHR(al, 1));	// 108048 shr     al, 1 ;~ 24ED:12A5
cs=0x24ed;eip=0x0012a7; 	J(JZ(loc_3476e));	// 108049 jz      short loc_3476E ;~ 24ED:12A7
cs=0x24ed;eip=0x0012a9; 	T(SHR(al, 3));	// 108050 shr     al, 3 ;~ 24ED:12A9
cs=0x24ed;eip=0x0012ac; 	T(ADD(al, dh));	// 108051 add     al, dh ;~ 24ED:12AC
cs=0x24ed;eip=0x0012ae; 	T(OR(ah, ah));	// 108052 or      ah, ah ;~ 24ED:12AE
cs=0x24ed;eip=0x0012b0; 	J(JZ(loc_34778));	// 108053 jz      short loc_34778 ;~ 24ED:12B0
cs=0x24ed;eip=0x0012b2; 	T(ADD(ah, dh));	// 108054 add     ah, dh ;~ 24ED:12B2
	// 108055 rep stosw ;~ 24ED:12B4
cs=0x24ed;eip=0x0012b4; 	X(	REP STOSW);	// 108055 rep stosw ;~ 24ED:12B4
cs=0x24ed;eip=0x0012b6; 	J(JMP(loc_3477c));	// 108056 jmp     short loc_3477C ;~ 24ED:12B6
loc_34768:
	// 7115 
cs=0x24ed;eip=0x0012b8; 	T(SHL(cx, 1));	// 108060 shl     cx, 1 ;~ 24ED:12B8
cs=0x24ed;eip=0x0012ba; 	T(ADD(di, cx));	// 108061 add     di, cx ;~ 24ED:12BA
cs=0x24ed;eip=0x0012bc; 	J(JMP(loc_3477c));	// 108062 jmp     short loc_3477C ;~ 24ED:12BC
loc_3476e:
	// 7116 
cs=0x24ed;eip=0x0012be; 	T(MOV(al, ah));	// 108067 mov     al, ah ;~ 24ED:12BE
cs=0x24ed;eip=0x0012c0; 	T(ADD(al, dh));	// 108068 add     al, dh ;~ 24ED:12C0
loc_34772:
	// 7117 
cs=0x24ed;eip=0x0012c2; 	T(INC(di));	// 108071 inc     di ;~ 24ED:12C2
cs=0x24ed;eip=0x0012c3; 	X(STOSB);	// 108072 stosb ;~ 24ED:12C3
cs=0x24ed;eip=0x0012c4; 	J(LOOP(loc_34772));	// 108073 loop    loc_34772 ;~ 24ED:12C4
cs=0x24ed;eip=0x0012c6; 	J(JMP(loc_3477c));	// 108074 jmp     short loc_3477C ;~ 24ED:12C6
loc_34778:
	// 7118 
cs=0x24ed;eip=0x0012c8; 	X(STOSB);	// 108079 stosb ;~ 24ED:12C8
cs=0x24ed;eip=0x0012c9; 	T(INC(di));	// 108080 inc     di ;~ 24ED:12C9
cs=0x24ed;eip=0x0012ca; 	J(LOOP(loc_34778));	// 108081 loop    loc_34778 ;~ 24ED:12CA
loc_3477c:
	// 7119 
cs=0x24ed;eip=0x0012cc; 	T(OR(bp, bp));	// 108085 or      bp, bp ;~ 24ED:12CC
cs=0x24ed;eip=0x0012ce; 	J(JNS(loc_346f1));	// 108086 jns     loc_346F1 ;~ 24ED:12CE
cs=0x24ed;eip=0x0012d2; 	T(XOR(ah, ah));	// 108087 xor     ah, ah ;~ 24ED:12D2
cs=0x24ed;eip=0x0012d4; 	T(MOV(cx, bp));	// 108088 mov     cx, bp ;~ 24ED:12D4
cs=0x24ed;eip=0x0012d6; 	T(NEG(cx));	// 108089 neg     cx ;~ 24ED:12D6
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0012d8; 	T(MOV(bp, *(dw*)(((db*)&word_34570))));	// 108090 mov     bp, cs:word_34570 ;~ 24ED:12D8
cs=0x24ed;eip=0x0012dd; 	X(POPF);	// 108091 popf ;~ 24ED:12DD
cs=0x24ed;eip=0x0012de; 	J(JNC(loc_347a1));	// 108092 jnb     short loc_347A1 ;~ 24ED:12DE
cs=0x24ed;eip=0x0012e0; 	T(MOV(al, *(raddr(ds,si-1))));	// 108093 mov     al, [si-1] ;~ 24ED:12E0
loc_34793:
	// 7120 
cs=0x24ed;eip=0x0012e3; 	T(AND(al, 0x0F));	// 108096 and     al, 0Fh ;~ 24ED:12E3
cs=0x24ed;eip=0x0012e5; 	J(JZ(loc_3479c));	// 108097 jz      short loc_3479C ;~ 24ED:12E5
cs=0x24ed;eip=0x0012e7; 	T(ADD(al, dh));	// 108098 add     al, dh ;~ 24ED:12E7
cs=0x24ed;eip=0x0012e9; 	X(MOV(*(raddr(es,di)), al));	// 108099 mov     es:[di], al ;~ 24ED:12E9
loc_3479c:
	// 7121 
cs=0x24ed;eip=0x0012ec; 	T(INC(di));	// 108102 inc     di ;~ 24ED:12EC
cs=0x24ed;eip=0x0012ed; 	T(DEC(cx));	// 108103 dec     cx ;~ 24ED:12ED
cs=0x24ed;eip=0x0012ee; 	T(DEC(bp));	// 108104 dec     bp ;~ 24ED:12EE
cs=0x24ed;eip=0x0012ef; 	J(JZ(loc_347d7));	// 108105 jz      short loc_347D7 ;~ 24ED:12EF
loc_347a1:
	// 7122 
cs=0x24ed;eip=0x0012f1; 	T(SHR(bp, 1));	// 108109 shr     bp, 1 ;~ 24ED:12F1
cs=0x24ed;eip=0x0012f3; 	J(JCXZ(loc_347ad));	// 108110 jcxz    short loc_347AD ;~ 24ED:12F3
cs=0x24ed;eip=0x0012f5; 	T(OR(dl, dl));	// 108111 or      dl, dl ;~ 24ED:12F5
cs=0x24ed;eip=0x0012f7; 	J(JS(loc_347cd));	// 108112 js      short loc_347CD ;~ 24ED:12F7
cs=0x24ed;eip=0x0012f9; 	J(JMP(loc_347b9));	// 108113 jmp     short loc_347B9 ;~ 24ED:12F9
loc_347ab:
	// 7123 
cs=0x24ed;eip=0x0012fb; 	T(ADD(si, cx));	// 108117 add     si, cx ;~ 24ED:12FB
loc_347ad:
	// 7124 
cs=0x24ed;eip=0x0012fd; 	T(LODSB);	// 108121 lodsb ;~ 24ED:12FD
cs=0x24ed;eip=0x0012fe; 	T(XOR(ah, ah));	// 108122 xor     ah, ah ;~ 24ED:12FE
cs=0x24ed;eip=0x001300; 	T(MOV(dl, al));	// 108123 mov     dl, al ;~ 24ED:1300
cs=0x24ed;eip=0x001302; 	T(OR(al, al));	// 108124 or      al, al ;~ 24ED:1302
cs=0x24ed;eip=0x001304; 	J(JS(loc_347c7));	// 108125 js      short loc_347C7 ;~ 24ED:1304
cs=0x24ed;eip=0x001306; 	T(MOV(cx, ax));	// 108126 mov     cx, ax ;~ 24ED:1306
cs=0x24ed;eip=0x001308; 	T(INC(cx));	// 108127 inc     cx ;~ 24ED:1308
loc_347b9:
	// 7125 
cs=0x24ed;eip=0x001309; 	T(SUB(bp, cx));	// 108130 sub     bp, cx ;~ 24ED:1309
cs=0x24ed;eip=0x00130b; 	J(JNC(loc_347ab));	// 108131 jnb     short loc_347AB ;~ 24ED:130B
cs=0x24ed;eip=0x00130d; 	T(ADD(cx, bp));	// 108132 add     cx, bp ;~ 24ED:130D
cs=0x24ed;eip=0x00130f; 	T(ADD(si, cx));	// 108133 add     si, cx ;~ 24ED:130F
cs=0x24ed;eip=0x001311; 	T(MOV(cx, bp));	// 108134 mov     cx, bp ;~ 24ED:1311
cs=0x24ed;eip=0x001313; 	T(NEG(cx));	// 108135 neg     cx ;~ 24ED:1313
cs=0x24ed;eip=0x001315; 	J(JMP(loc_347d7));	// 108136 jmp     short loc_347D7 ;~ 24ED:1315
loc_347c7:
	// 7126 
cs=0x24ed;eip=0x001317; 	T(MOV(cx, 0x101));	// 108140 mov     cx, 101h ;~ 24ED:1317
cs=0x24ed;eip=0x00131a; 	T(SUB(cx, ax));	// 108141 sub     cx, ax ;~ 24ED:131A
cs=0x24ed;eip=0x00131c; 	T(INC(si));	// 108142 inc     si ;~ 24ED:131C
loc_347cd:
	// 7127 
cs=0x24ed;eip=0x00131d; 	T(SUB(bp, cx));	// 108145 sub     bp, cx ;~ 24ED:131D
cs=0x24ed;eip=0x00131f; 	J(JNC(loc_347ad));	// 108146 jnb     short loc_347AD ;~ 24ED:131F
cs=0x24ed;eip=0x001321; 	T(XOR(ah, ah));	// 108147 xor     ah, ah ;~ 24ED:1321
cs=0x24ed;eip=0x001323; 	T(MOV(cx, bp));	// 108148 mov     cx, bp ;~ 24ED:1323
cs=0x24ed;eip=0x001325; 	T(NEG(cx));	// 108149 neg     cx ;~ 24ED:1325
loc_347d7:
	// 7128 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001327; 	T(SUB(di, *(dw*)(((db*)&word_34574))));	// 108153 sub     di, cs:word_34574 ;~ 24ED:1327
cs=0x24ed;eip=0x00132c; 	T(ADD(di, 0x140));	// 108154 add     di, 140h ;~ 24ED:132C
cs=0x24ed;eip=0x001330; 	T(DEC(bx));	// 108155 dec     bx ;~ 24ED:1330
cs=0x24ed;eip=0x001331; 	J(JNZ(loc_34672));	// 108156 jnz     loc_34672 ;~ 24ED:1331
cs=0x24ed;eip=0x001335; 	J(RETF(0));	// 108157 retf ;~ 24ED:1335
loc_347e6:
	// 7129 
cs=0x24ed;eip=0x001336; 	T(MOV(al, *(raddr(ds,si-1))));	// 108161 mov     al, [si-1] ;~ 24ED:1336
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001339; 	X(MOV(*(&byte_3364e), al));	// 108162 mov     cs:byte_3364E, al ;~ 24ED:1339
cs=0x24ed;eip=0x00133d; 	T(AND(di, 0x1FFF));	// 108163 and     di, 1FFFh ;~ 24ED:133D
cs=0x24ed;eip=0x001341; 	X(MOV(*(dw*)(raddr(cs,m2c::kloc_349fb+1)), di));	// 108164 mov     word ptr cs:loc_349FB+1, di ;~ 24ED:1341
cs=0x24ed;eip=0x001346; 	T(ADD(di, 3));	// 108165 add     di, 3 ;~ 24ED:1346
cs=0x24ed;eip=0x001349; 	T(SHR(di, 2));	// 108166 shr     di, 2 ;~ 24ED:1349
cs=0x24ed;eip=0x00134c; 	T(SHL(di, 1));	// 108167 shl     di, 1 ;~ 24ED:134C
cs=0x24ed;eip=0x00134e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+2))));	// 108168 mov     ax, [bp+2] ;~ 24ED:134E
cs=0x24ed;eip=0x001351; 	T(SUB(ax, bx));	// 108169 sub     ax, bx ;~ 24ED:1351
cs=0x24ed;eip=0x001353; 	J(JLE(loc_34831));	// 108170 jle     short loc_34831 ;~ 24ED:1353
cs=0x24ed;eip=0x001355; 	T(SUB(cx, ax));	// 108171 sub     cx, ax ;~ 24ED:1355
cs=0x24ed;eip=0x001357; 	J(JBE(locret_34864));	// 108172 jbe     short locret_34864 ;~ 24ED:1357
cs=0x24ed;eip=0x001359; 	T(ADD(bx, ax));	// 108173 add     bx, ax ;~ 24ED:1359
cs=0x24ed;eip=0x00135b; 	X(PUSH(dx));	// 108174 push    dx ;~ 24ED:135B
cs=0x24ed;eip=0x00135c; 	X(PUSH(cx));	// 108175 push    cx ;~ 24ED:135C
cs=0x24ed;eip=0x00135d; 	X(PUSH(bp));	// 108176 push    bp ;~ 24ED:135D
cs=0x24ed;eip=0x00135e; 	T(MUL1_2(di));	// 108177 mul     di ;~ 24ED:135E
cs=0x24ed;eip=0x001360; 	T(MOV(bp, ax));	// 108178 mov     bp, ax ;~ 24ED:1360
cs=0x24ed;eip=0x001362; 	T(XOR(ah, ah));	// 108179 xor     ah, ah ;~ 24ED:1362
loc_34814:
	// 7130 
cs=0x24ed;eip=0x001364; 	T(LODSB);	// 108183 lodsb ;~ 24ED:1364
cs=0x24ed;eip=0x001365; 	T(OR(al, al));	// 108184 or      al, al ;~ 24ED:1365
cs=0x24ed;eip=0x001367; 	J(JS(loc_34824));	// 108185 js      short loc_34824 ;~ 24ED:1367
cs=0x24ed;eip=0x001369; 	T(MOV(cx, ax));	// 108186 mov     cx, ax ;~ 24ED:1369
cs=0x24ed;eip=0x00136b; 	T(INC(cx));	// 108187 inc     cx ;~ 24ED:136B
cs=0x24ed;eip=0x00136c; 	T(ADD(si, cx));	// 108188 add     si, cx ;~ 24ED:136C
cs=0x24ed;eip=0x00136e; 	T(SUB(bp, cx));	// 108189 sub     bp, cx ;~ 24ED:136E
cs=0x24ed;eip=0x001370; 	J(JNZ(loc_34814));	// 108190 jnz     short loc_34814 ;~ 24ED:1370
cs=0x24ed;eip=0x001372; 	J(JMP(loc_3482e));	// 108191 jmp     short loc_3482E ;~ 24ED:1372
loc_34824:
	// 7131 
cs=0x24ed;eip=0x001374; 	T(MOV(cx, 0x101));	// 108195 mov     cx, 101h ;~ 24ED:1374
cs=0x24ed;eip=0x001377; 	T(SUB(cx, ax));	// 108196 sub     cx, ax ;~ 24ED:1377
cs=0x24ed;eip=0x001379; 	T(INC(si));	// 108197 inc     si ;~ 24ED:1379
cs=0x24ed;eip=0x00137a; 	T(SUB(bp, cx));	// 108198 sub     bp, cx ;~ 24ED:137A
cs=0x24ed;eip=0x00137c; 	J(JNZ(loc_34814));	// 108199 jnz     short loc_34814 ;~ 24ED:137C
loc_3482e:
	// 7132 
cs=0x24ed;eip=0x00137e; 	X(POP(bp));	// 108202 pop     bp ;~ 24ED:137E
cs=0x24ed;eip=0x00137f; 	X(POP(cx));	// 108203 pop     cx ;~ 24ED:137F
cs=0x24ed;eip=0x001380; 	X(POP(dx));	// 108204 pop     dx ;~ 24ED:1380
loc_34831:
	// 7133 
cs=0x24ed;eip=0x001381; 	T(MOV(ax, bx));	// 108207 mov     ax, bx ;~ 24ED:1381
cs=0x24ed;eip=0x001383; 	T(ADD(ax, cx));	// 108208 add     ax, cx ;~ 24ED:1383
cs=0x24ed;eip=0x001385; 	T(SUB(ax, *(dw*)(raddr(ss,bp+6))));	// 108209 sub     ax, [bp+6] ;~ 24ED:1385
cs=0x24ed;eip=0x001388; 	J(JBE(loc_3483e));	// 108210 jbe     short loc_3483E ;~ 24ED:1388
cs=0x24ed;eip=0x00138a; 	T(SUB(cx, ax));	// 108211 sub     cx, ax ;~ 24ED:138A
cs=0x24ed;eip=0x00138c; 	J(JBE(locret_34864));	// 108212 jbe     short locret_34864 ;~ 24ED:138C
loc_3483e:
	// 7134 
cs=0x24ed;eip=0x00138e; 	T(MOV(ax, dx));	// 108215 mov     ax, dx ;~ 24ED:138E
cs=0x24ed;eip=0x001390; 	T(ADD(ax, di));	// 108216 add     ax, di ;~ 24ED:1390
cs=0x24ed;eip=0x001392; 	T(ADD(ax, di));	// 108217 add     ax, di ;~ 24ED:1392
cs=0x24ed;eip=0x001394; 	T(SUB(ax, *(dw*)(raddr(ss,bp+4))));	// 108218 sub     ax, [bp+4] ;~ 24ED:1394
cs=0x24ed;eip=0x001397; 	J(JG(loc_3488c));	// 108219 jg      short loc_3488C ;~ 24ED:1397
cs=0x24ed;eip=0x001399; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 108220 mov     ax, [bp+0] ;~ 24ED:1399
cs=0x24ed;eip=0x00139c; 	T(SUB(ax, dx));	// 108221 sub     ax, dx ;~ 24ED:139C
cs=0x24ed;eip=0x00139e; 	J(JG(loc_34865));	// 108222 jg      short loc_34865 ;~ 24ED:139E
cs=0x24ed;eip=0x0013a0; 	X(MOV(*(dw*)(raddr(cs,m2c::kloc_340d2+1)), di));	// 108223 mov     word ptr cs:loc_340D2+1, di ;~ 24ED:13A0
cs=0x24ed;eip=0x0013a5; 	T(MOV(bp, di));	// 108224 mov     bp, di ;~ 24ED:13A5
cs=0x24ed;eip=0x0013a7; 	J(CALL(sub_340a8,0));	// 108225 call    sub_340A8 ;~ 24ED:13A7
cs=0x24ed;eip=0x0013aa; 	T(MOV(bx, cx));	// 108226 mov     bx, cx ;~ 24ED:13AA
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0013ac; 	T(MOV(dx, *(dw*)((&unk_3364d))));	// 108227 mov     dx, word ptr cs:unk_3364D ;~ 24ED:13AC
cs=0x24ed;eip=0x0013b1; 	J(JMP(loc_340dd));	// 108228 jmp     loc_340DD ;~ 24ED:13B1
locret_34864:
	// 7135 
cs=0x24ed;eip=0x0013b4; 	J(RETF(0));	// 108233 retf ;~ 24ED:13B4
loc_34865:
	// 7136 
cs=0x24ed;eip=0x0013b5; 	T(CMP(ax, *(dw*)(raddr(cs,m2c::kloc_349fb+1))));	// 108237 cmp     ax, word ptr cs:loc_349FB+1 ;~ 24ED:13B5
cs=0x24ed;eip=0x0013ba; 	J(JNC(locret_34864));	// 108238 jnb     short locret_34864 ;~ 24ED:13BA
cs=0x24ed;eip=0x0013bc; 	T(MOV(bp, di));	// 108239 mov     bp, di ;~ 24ED:13BC
cs=0x24ed;eip=0x0013be; 	T(SHL(bp, 1));	// 108240 shl     bp, 1 ;~ 24ED:13BE
cs=0x24ed;eip=0x0013c0; 	T(SUB(bp, ax));	// 108241 sub     bp, ax ;~ 24ED:13C0
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0013c2; 	X(MOV(*(dw*)(((db*)&word_34574)), bp));	// 108242 mov     cs:word_34574, bp ;~ 24ED:13C2
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0013c7; 	X(MOV(*(dw*)(((db*)&word_34572)), ax));	// 108243 mov     cs:word_34572, ax ;~ 24ED:13C7
cs=0x24ed;eip=0x0013cb; 	T(ADD(dx, ax));	// 108244 add     dx, ax ;~ 24ED:13CB
cs=0x24ed;eip=0x0013cd; 	J(CALL(sub_340a8,0));	// 108245 call    sub_340A8 ;~ 24ED:13CD
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0013d0; 	T(MOV(dx, *(dw*)((&unk_3364d))));	// 108246 mov     dx, word ptr cs:unk_3364D ;~ 24ED:13D0
cs=0x24ed;eip=0x0013d5; 	T(MOV(bx, cx));	// 108247 mov     bx, cx ;~ 24ED:13D5
cs=0x24ed;eip=0x0013d7; 	T(XOR(cx, cx));	// 108248 xor     cx, cx ;~ 24ED:13D7
cs=0x24ed;eip=0x0013d9; 	J(JMP(loc_34576));	// 108249 jmp     loc_34576 ;~ 24ED:13D9
loc_3488c:
	// 7137 
cs=0x24ed;eip=0x0013dc; 	T(SHL(di, 1));	// 108253 shl     di, 1 ;~ 24ED:13DC
cs=0x24ed;eip=0x0013de; 	T(SUB(di, ax));	// 108254 sub     di, ax ;~ 24ED:13DE
cs=0x24ed;eip=0x0013e0; 	J(JLE(locret_34864));	// 108255 jle     short locret_34864 ;~ 24ED:13E0
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0013e2; 	X(MOV(*(dw*)(((db*)&word_34570)), ax));	// 108256 mov     cs:word_34570, ax ;~ 24ED:13E2
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0013e6; 	X(MOV(*(dw*)(((db*)&word_34572)), 0));	// 108257 mov     cs:word_34572, 0 ;~ 24ED:13E6
cs=0x24ed;eip=0x0013ed; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 108258 mov     ax, [bp+0] ;~ 24ED:13ED
cs=0x24ed;eip=0x0013f0; 	T(SUB(ax, dx));	// 108259 sub     ax, dx ;~ 24ED:13F0
cs=0x24ed;eip=0x0013f2; 	J(JLE(loc_348ae));	// 108260 jle     short loc_348AE ;~ 24ED:13F2
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0013f4; 	X(MOV(*(dw*)(((db*)&word_34572)), ax));	// 108261 mov     cs:word_34572, ax ;~ 24ED:13F4
cs=0x24ed;eip=0x0013f8; 	T(SUB(di, ax));	// 108262 sub     di, ax ;~ 24ED:13F8
cs=0x24ed;eip=0x0013fa; 	J(JLE(locret_34864));	// 108263 jle     short locret_34864 ;~ 24ED:13FA
cs=0x24ed;eip=0x0013fc; 	T(ADD(dx, ax));	// 108264 add     dx, ax ;~ 24ED:13FC
loc_348ae:
	// 7138 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0013fe; 	X(MOV(*(dw*)(((db*)&word_34574)), di));	// 108267 mov     cs:word_34574, di ;~ 24ED:13FE
cs=0x24ed;eip=0x001403; 	J(CALL(sub_340a8,0));	// 108268 call    sub_340A8 ;~ 24ED:1403
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001406; 	T(MOV(dx, *(dw*)((&unk_3364d))));	// 108269 mov     dx, word ptr cs:unk_3364D ;~ 24ED:1406
cs=0x24ed;eip=0x00140b; 	T(MOV(bx, cx));	// 108270 mov     bx, cx ;~ 24ED:140B
cs=0x24ed;eip=0x00140d; 	T(XOR(cx, cx));	// 108271 xor     cx, cx ;~ 24ED:140D
cs=0x24ed;eip=0x00140f; 	J(JMP(loc_34672));	// 108272 jmp     loc_34672 ;~ 24ED:140F
loc_348c2:
	// 7139 
cs=0x24ed;eip=0x001412; 	J(JMP(loc_34c0c));	// 108276 jmp     loc_34C0C ;~ 24ED:1412
sub_348c5:
	// 108282 
cs=0x24ed;eip=0x001415; 	T(CMP(ch, 0x0FE));	// 108293 cmp     ch, 0FEh ; 'ş' ;~ 24ED:1415
cs=0x24ed;eip=0x001418; 	J(JNC(loc_348c2));	// 108294 jnb     short loc_348C2 ;~ 24ED:1418
cs=0x24ed;eip=0x00141a; 	T(OR(di, di));	// 108295 or      di, di ;~ 24ED:141A
cs=0x24ed;eip=0x00141c; 	J(JS(loc_347e6));	// 108296 js      loc_347E6 ;~ 24ED:141C
cs=0x24ed;eip=0x001420; 	T(MOV(al, *(raddr(ds,si-1))));	// 108297 mov     al, [si-1] ;~ 24ED:1420
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001423; 	X(MOV(*(&byte_3364e), al));	// 108298 mov     cs:byte_3364E, al ;~ 24ED:1423
cs=0x24ed;eip=0x001427; 	X(MOV(*(dw*)(raddr(cs,m2c::kloc_349fb+1)), di));	// 108299 mov     word ptr cs:loc_349FB+1, di ;~ 24ED:1427
cs=0x24ed;eip=0x00142c; 	T(ADD(di, 3));	// 108300 add     di, 3 ;~ 24ED:142C
cs=0x24ed;eip=0x00142f; 	T(SHR(di, 2));	// 108301 shr     di, 2 ;~ 24ED:142F
cs=0x24ed;eip=0x001432; 	T(SHL(di, 1));	// 108302 shl     di, 1 ;~ 24ED:1432
cs=0x24ed;eip=0x001434; 	T(MOV(ax, *(dw*)(raddr(ss,bp+2))));	// 108303 mov     ax, [bp+2] ;~ 24ED:1434
cs=0x24ed;eip=0x001437; 	T(SUB(ax, bx));	// 108304 sub     ax, bx ;~ 24ED:1437
cs=0x24ed;eip=0x001439; 	J(JLE(loc_348f6));	// 108305 jle     short loc_348F6 ;~ 24ED:1439
cs=0x24ed;eip=0x00143b; 	T(SUB(cx, ax));	// 108306 sub     cx, ax ;~ 24ED:143B
cs=0x24ed;eip=0x00143d; 	J(JBE(locret_34929));	// 108307 jbe     short locret_34929 ;~ 24ED:143D
cs=0x24ed;eip=0x00143f; 	T(ADD(bx, ax));	// 108309 add     bx, ax ;~ 24ED:143F
loc_348f1:
	// 7140 
cs=0x24ed;eip=0x001441; 	T(ADD(si, di));	// 108312 add     si, di ;~ 24ED:1441
cs=0x24ed;eip=0x001443; 	T(DEC(ax));	// 108313 dec     ax ;~ 24ED:1443
cs=0x24ed;eip=0x001444; 	J(JNZ(loc_348f1));	// 108314 jnz     short loc_348F1 ;~ 24ED:1444
loc_348f6:
	// 7141 
cs=0x24ed;eip=0x001446; 	T(MOV(ax, bx));	// 108317 mov     ax, bx ;~ 24ED:1446
cs=0x24ed;eip=0x001448; 	T(ADD(ax, cx));	// 108318 add     ax, cx ;~ 24ED:1448
cs=0x24ed;eip=0x00144a; 	T(SUB(ax, *(dw*)(raddr(ss,bp+6))));	// 108319 sub     ax, [bp+6] ;~ 24ED:144A
cs=0x24ed;eip=0x00144d; 	J(JBE(loc_34903));	// 108320 jbe     short loc_34903 ;~ 24ED:144D
cs=0x24ed;eip=0x00144f; 	T(SUB(cx, ax));	// 108321 sub     cx, ax ;~ 24ED:144F
cs=0x24ed;eip=0x001451; 	J(JBE(locret_34929));	// 108322 jbe     short locret_34929 ;~ 24ED:1451
loc_34903:
	// 7142 
cs=0x24ed;eip=0x001453; 	T(MOV(ax, dx));	// 108325 mov     ax, dx ;~ 24ED:1453
cs=0x24ed;eip=0x001455; 	T(ADD(ax, *(dw*)(raddr(cs,m2c::kloc_349fb+1))));	// 108326 add     ax, word ptr cs:loc_349FB+1 ;~ 24ED:1455
cs=0x24ed;eip=0x00145a; 	T(SUB(ax, *(dw*)(raddr(ss,bp+4))));	// 108327 sub     ax, [bp+4] ;~ 24ED:145A
cs=0x24ed;eip=0x00145d; 	J(JG(loc_3496e));	// 108328 jg      short loc_3496E ;~ 24ED:145D
cs=0x24ed;eip=0x00145f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 108329 mov     ax, [bp+0] ;~ 24ED:145F
cs=0x24ed;eip=0x001462; 	T(SUB(ax, dx));	// 108330 sub     ax, dx ;~ 24ED:1462
cs=0x24ed;eip=0x001464; 	J(JG(loc_3492a));	// 108331 jg      short loc_3492A ;~ 24ED:1464
cs=0x24ed;eip=0x001466; 	T(MOV(ax, di));	// 108332 mov     ax, di ;~ 24ED:1466
cs=0x24ed;eip=0x001468; 	T(SHR(ax, 1));	// 108333 shr     ax, 1 ;~ 24ED:1468
cs=0x24ed;eip=0x00146a; 	X(MOV(*(dw*)(raddr(cs,m2c::kloc_349fb+1)), ax));	// 108334 mov     word ptr cs:loc_349FB+1, ax ;~ 24ED:146A
cs=0x24ed;eip=0x00146e; 	J(CALL(sub_340a8,0));	// 108335 call    sub_340A8 ;~ 24ED:146E
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001471; 	T(MOV(dx, *(dw*)((&unk_3364d))));	// 108336 mov     dx, word ptr cs:unk_3364D ;~ 24ED:1471
cs=0x24ed;eip=0x001476; 	J(JMP(loc_349fb));	// 108337 jmp     loc_349FB ;~ 24ED:1476
locret_34929:
	// 7143 
cs=0x24ed;eip=0x001479; 	J(RETF(0));	// 108343 retf ;~ 24ED:1479
loc_3492a:
	// 7144 
cs=0x24ed;eip=0x00147a; 	X(SUB(*(dw*)(raddr(cs,m2c::kloc_349fb+1)), ax));	// 108347 sub     word ptr cs:loc_349FB+1, ax ;~ 24ED:147A
cs=0x24ed;eip=0x00147f; 	J(JLE(locret_34929));	// 108348 jle     short locret_34929 ;~ 24ED:147F
cs=0x24ed;eip=0x001481; 	X(PUSH(si));	// 108350 push    si ;~ 24ED:1481
cs=0x24ed;eip=0x001482; 	T(ADD(dx, ax));	// 108351 add     dx, ax ;~ 24ED:1482
cs=0x24ed;eip=0x001484; 	T(MOV(si, ax));	// 108352 mov     si, ax ;~ 24ED:1484
cs=0x24ed;eip=0x001486; 	T(AND(si, 3));	// 108353 and     si, 3 ;~ 24ED:1486
cs=0x24ed;eip=0x001489; 	T(SHL(si, 1));	// 108354 shl     si, 1           ; switch 4 cases ;~ 24ED:1489
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00148b; 	T(MOV(si, *(dw*)(((db*)&jpt_34964)+si)));	// 108355 mov     si, cs:jpt_34964[si] ;~ 24ED:148B
cs=0x24ed;eip=0x001490; 	T(SHR(di, 1));	// 108356 shr     di, 1 ;~ 24ED:1490
cs=0x24ed;eip=0x001492; 	T(SHR(ax, 1));	// 108357 shr     ax, 1 ;~ 24ED:1492
cs=0x24ed;eip=0x001494; 	X(MOV(*(raddr(cs,si+2)), al));	// 108358 mov     cs:[si+2], al ;~ 24ED:1494
cs=0x24ed;eip=0x001498; 	T(SHR(ax, 1));	// 108359 shr     ax, 1 ;~ 24ED:1498
cs=0x24ed;eip=0x00149a; 	T(SUB(di, ax));	// 108360 sub     di, ax ;~ 24ED:149A
cs=0x24ed;eip=0x00149c; 	X(MOV(*(dw*)(raddr(cs,si+4)), di));	// 108361 mov     cs:[si+4], di ;~ 24ED:149C
cs=0x24ed;eip=0x0014a0; 	J(CALL(sub_340a8,0));	// 108362 call    sub_340A8 ;~ 24ED:14A0
cs=0x24ed;eip=0x0014a3; 	T(MOV(bp, si));	// 108363 mov     bp, si ;~ 24ED:14A3
cs=0x24ed;eip=0x0014a5; 	X(POP(si));	// 108364 pop     si ;~ 24ED:14A5
cs=0x24ed;eip=0x0014a6; 	T(MOV(ax, bp));	// 108365 mov     ax, bp ;~ 24ED:14A6
cs=0x24ed;eip=0x0014a8; 	T(SUB(ax, 0x15E6));	// 108366 sub     ax, 15E6h ;~ 24ED:14A8
cs=0x24ed;eip=0x0014ab; 	X(MOV(*(raddr(cs,m2c::kloc_34a94+1)), al));	// 108367 mov     byte ptr cs:loc_34A94+1, al ;~ 24ED:14AB
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0014af; 	T(MOV(dx, *(dw*)((&unk_3364d))));	// 108368 mov     dx, word ptr cs:unk_3364D ;~ 24ED:14AF
cs=0x24ed;eip=0x0014b4; __disp=bp;
	J(return __dispatch_call(__disp, _state););	// 108369 jmp     bp              ; switch jump ;~ 24ED:14B4
loc_3496e:
	// 7145 
cs=0x24ed;eip=0x0014be; 	X(SUB(*(dw*)(raddr(cs,m2c::kloc_349fb+1)), ax));	// 108378 sub     word ptr cs:loc_349FB+1, ax ;~ 24ED:14BE
cs=0x24ed;eip=0x0014c3; 	J(JLE(locret_34929));	// 108379 jle     short locret_34929 ;~ 24ED:14C3
cs=0x24ed;eip=0x0014c5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 108380 mov     ax, [bp+0] ;~ 24ED:14C5
cs=0x24ed;eip=0x0014c8; 	T(SUB(ax, dx));	// 108381 sub     ax, dx ;~ 24ED:14C8
cs=0x24ed;eip=0x0014ca; 	J(JG(loc_3499e));	// 108382 jg      short loc_3499E ;~ 24ED:14CA
cs=0x24ed;eip=0x0014cc; 	T(MOV(ax, *(dw*)(raddr(cs,m2c::kloc_349fb+1))));	// 108383 mov     ax, word ptr cs:loc_349FB+1 ;~ 24ED:14CC
cs=0x24ed;eip=0x0014d0; 	X(MOV(*(dw*)(raddr(cs,m2c::kloc_34af4+1)), ax));	// 108384 mov     word ptr cs:loc_34AF4+1, ax ;~ 24ED:14D0
cs=0x24ed;eip=0x0014d4; 	T(ADD(ax, 3));	// 108385 add     ax, 3 ;~ 24ED:14D4
cs=0x24ed;eip=0x0014d7; 	T(SHR(ax, 1));	// 108386 shr     ax, 1 ;~ 24ED:14D7
cs=0x24ed;eip=0x0014d9; 	T(AND(al, 0x0FE));	// 108387 and     al, 0FEh ;~ 24ED:14D9
cs=0x24ed;eip=0x0014db; 	T(SUB(di, ax));	// 108388 sub     di, ax ;~ 24ED:14DB
cs=0x24ed;eip=0x0014dd; 	T(MOV(ax, di));	// 108389 mov     ax, di ;~ 24ED:14DD
cs=0x24ed;eip=0x0014df; 	X(MOV(*(raddr(cs,m2c::kloc_34af1+2)), al));	// 108390 mov     byte ptr cs:loc_34AF1+2, al ;~ 24ED:14DF
cs=0x24ed;eip=0x0014e3; 	J(CALL(sub_340a8,0));	// 108391 call    sub_340A8 ;~ 24ED:14E3
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0014e6; 	T(MOV(dx, *(dw*)((&unk_3364d))));	// 108392 mov     dx, word ptr cs:unk_3364D ;~ 24ED:14E6
cs=0x24ed;eip=0x0014eb; 	J(JMP(loc_34af4));	// 108393 jmp     loc_34AF4 ;~ 24ED:14EB
loc_3499e:
	// 7146 
cs=0x24ed;eip=0x0014ee; 	X(SUB(*(dw*)(raddr(cs,m2c::kloc_349fb+1)), ax));	// 108397 sub     word ptr cs:loc_349FB+1, ax ;~ 24ED:14EE
cs=0x24ed;eip=0x0014f3; 	J(JLE(locret_34929));	// 108398 jle     short locret_34929 ;~ 24ED:14F3
cs=0x24ed;eip=0x0014f5; 	X(PUSH(cx));	// 108399 push    cx ;~ 24ED:14F5
cs=0x24ed;eip=0x0014f6; 	T(MOV(cx, ax));	// 108400 mov     cx, ax ;~ 24ED:14F6
cs=0x24ed;eip=0x0014f8; 	T(SHR(cx, 1));	// 108401 shr     cx, 1 ;~ 24ED:14F8
cs=0x24ed;eip=0x0014fa; 	T(ADD(si, cx));	// 108402 add     si, cx ;~ 24ED:14FA
cs=0x24ed;eip=0x0014fc; 	X(PUSH(si));	// 108403 push    si ;~ 24ED:14FC
cs=0x24ed;eip=0x0014fd; 	T(ADD(dx, ax));	// 108404 add     dx, ax ;~ 24ED:14FD
cs=0x24ed;eip=0x0014ff; 	T(MOV(si, ax));	// 108405 mov     si, ax ;~ 24ED:14FF
cs=0x24ed;eip=0x001501; 	T(AND(si, 3));	// 108406 and     si, 3 ;~ 24ED:1501
cs=0x24ed;eip=0x001504; 	T(SHL(si, 1));	// 108407 shl     si, 1 ;~ 24ED:1504
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001506; 	T(MOV(si, *(dw*)(((db*)&off_349f3)+si)));	// 108408 mov     si, cs:off_349F3[si] ;~ 24ED:1506
cs=0x24ed;eip=0x00150b; 	T(ADD(ax, *(dw*)(raddr(cs,m2c::kloc_349fb+1))));	// 108409 add     ax, word ptr cs:loc_349FB+1 ;~ 24ED:150B
cs=0x24ed;eip=0x001510; 	T(ADD(ax, 3));	// 108410 add     ax, 3 ;~ 24ED:1510
cs=0x24ed;eip=0x001513; 	T(SHR(ax, 1));	// 108411 shr     ax, 1 ;~ 24ED:1513
cs=0x24ed;eip=0x001515; 	T(AND(al, 0x0FE));	// 108412 and     al, 0FEh ;~ 24ED:1515
cs=0x24ed;eip=0x001517; 	T(SUB(di, ax));	// 108413 sub     di, ax ;~ 24ED:1517
cs=0x24ed;eip=0x001519; 	T(MOV(ax, di));	// 108414 mov     ax, di ;~ 24ED:1519
cs=0x24ed;eip=0x00151b; 	T(ADD(ax, cx));	// 108415 add     ax, cx ;~ 24ED:151B
cs=0x24ed;eip=0x00151d; 	X(MOV(*(raddr(cs,si+2)), al));	// 108416 mov     cs:[si+2], al ;~ 24ED:151D
cs=0x24ed;eip=0x001521; 	T(MOV(ax, *(dw*)(raddr(cs,m2c::kloc_349fb+1))));	// 108417 mov     ax, word ptr cs:loc_349FB+1 ;~ 24ED:1521
cs=0x24ed;eip=0x001525; 	X(MOV(*(dw*)(raddr(cs,si+4)), ax));	// 108418 mov     cs:[si+4], ax ;~ 24ED:1525
cs=0x24ed;eip=0x001529; 	J(CALL(sub_340a8,0));	// 108419 call    sub_340A8 ;~ 24ED:1529
cs=0x24ed;eip=0x00152c; 	T(MOV(bp, si));	// 108420 mov     bp, si ;~ 24ED:152C
cs=0x24ed;eip=0x00152e; 	X(POP(si));	// 108421 pop     si ;~ 24ED:152E
cs=0x24ed;eip=0x00152f; 	X(POP(cx));	// 108422 pop     cx ;~ 24ED:152F
cs=0x24ed;eip=0x001530; 	T(MOV(ax, bp));	// 108423 mov     ax, bp ;~ 24ED:1530
cs=0x24ed;eip=0x001532; 	T(SUB(ax, m2c::klocret_34bab));	// 108424 sub     ax, offset locret_34BAB ;~ 24ED:1532
cs=0x24ed;eip=0x001535; 	X(MOV(*(raddr(cs,m2c::kloc_34ba9+1)), al));	// 108425 mov     byte ptr cs:loc_34BA9+1, al ;~ 24ED:1535
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001539; 	T(MOV(dx, *(dw*)((&unk_3364d))));	// 108426 mov     dx, word ptr cs:unk_3364D ;~ 24ED:1539
cs=0x24ed;eip=0x00153e; 	T(ADD(bp, 3));	// 108427 add     bp, 3 ;~ 24ED:153E
cs=0x24ed;eip=0x001541; __disp=bp;
	J(return __dispatch_call(__disp, _state););	// 108428 jmp     bp ;~ 24ED:1541
loc_349fb:
	// 7147 
cs=0x24ed;eip=0x00154b; 	T(MOV(bp, 3));	// 108438 mov     bp, 3 ;~ 24ED:154B
cs=0x24ed;eip=0x00154e; 	X(PUSH(di));	// 108439 push    di ;~ 24ED:154E
loc_349ff:
	// 7148 
cs=0x24ed;eip=0x00154f; 	T(LODSW);	// 108443 lodsw ;~ 24ED:154F
cs=0x24ed;eip=0x001550; 	T(MOV(bl, al));	// 108444 mov     bl, al ;~ 24ED:1550
cs=0x24ed;eip=0x001552; 	T(AND(al, dl));	// 108445 and     al, dl ;~ 24ED:1552
cs=0x24ed;eip=0x001554; 	J(JZ(loc_34a31));	// 108446 jz      short loc_34A31 ;~ 24ED:1554
cs=0x24ed;eip=0x001556; 	T(ADD(al, dh));	// 108447 add     al, dh ;~ 24ED:1556
cs=0x24ed;eip=0x001558; 	X(STOSB);	// 108448 stosb ;~ 24ED:1558
cs=0x24ed;eip=0x001559; 	T(SHR(bl, 4));	// 108449 shr     bl, 4 ;~ 24ED:1559
cs=0x24ed;eip=0x00155c; 	J(JZ(loc_34a3b));	// 108450 jz      short loc_34A3B ;~ 24ED:155C
cs=0x24ed;eip=0x00155e; 	T(MOV(al, bl));	// 108451 mov     al, bl ;~ 24ED:155E
loc_34a10:
	// 7149 
cs=0x24ed;eip=0x001560; 	T(ADD(al, dh));	// 108454 add     al, dh ;~ 24ED:1560
cs=0x24ed;eip=0x001562; 	X(STOSB);	// 108455 stosb ;~ 24ED:1562
cs=0x24ed;eip=0x001563; 	T(MOV(al, ah));	// 108456 mov     al, ah ;~ 24ED:1563
loc_34a15:
	// 7150 
cs=0x24ed;eip=0x001565; 	T(AND(al, dl));	// 108459 and     al, dl ;~ 24ED:1565
cs=0x24ed;eip=0x001567; 	J(JZ(loc_34a50));	// 108460 jz      short loc_34A50 ;~ 24ED:1567
cs=0x24ed;eip=0x001569; 	T(ADD(al, dh));	// 108461 add     al, dh ;~ 24ED:1569
cs=0x24ed;eip=0x00156b; 	X(STOSB);	// 108462 stosb ;~ 24ED:156B
cs=0x24ed;eip=0x00156c; 	T(SHR(ah, 4));	// 108463 shr     ah, 4 ;~ 24ED:156C
loc_34a1f:
	// 7151 
cs=0x24ed;eip=0x00156f; 	J(JZ(loc_34a58));	// 108466 jz      short loc_34A58 ;~ 24ED:156F
cs=0x24ed;eip=0x001571; 	T(MOV(al, ah));	// 108467 mov     al, ah ;~ 24ED:1571
cs=0x24ed;eip=0x001573; 	T(ADD(al, dh));	// 108468 add     al, dh ;~ 24ED:1573
cs=0x24ed;eip=0x001575; 	X(STOSB);	// 108469 stosb ;~ 24ED:1575
cs=0x24ed;eip=0x001576; 	T(DEC(bp));	// 108470 dec     bp ;~ 24ED:1576
cs=0x24ed;eip=0x001577; 	J(JNZ(loc_349ff));	// 108471 jnz     short loc_349FF ;~ 24ED:1577
cs=0x24ed;eip=0x001579; 	X(POP(di));	// 108472 pop     di ;~ 24ED:1579
cs=0x24ed;eip=0x00157a; 	T(ADD(di, 0x140));	// 108473 add     di, 140h ;~ 24ED:157A
cs=0x24ed;eip=0x00157e; 	J(LOOP(loc_349fb));	// 108474 loop    loc_349FB ;~ 24ED:157E
cs=0x24ed;eip=0x001580; 	J(RETF(0));	// 108475 retf ;~ 24ED:1580
loc_34a31:
	// 7152 
cs=0x24ed;eip=0x001581; 	T(INC(di));	// 108479 inc     di ;~ 24ED:1581
cs=0x24ed;eip=0x001582; 	T(OR(al, bl));	// 108480 or      al, bl ;~ 24ED:1582
cs=0x24ed;eip=0x001584; 	J(JZ(loc_34a3b));	// 108481 jz      short loc_34A3B ;~ 24ED:1584
cs=0x24ed;eip=0x001586; 	T(SHR(al, 4));	// 108482 shr     al, 4 ;~ 24ED:1586
cs=0x24ed;eip=0x001589; 	J(JMP(loc_34a10));	// 108483 jmp     short loc_34A10 ;~ 24ED:1589
loc_34a3b:
	// 7153 
cs=0x24ed;eip=0x00158b; 	T(INC(di));	// 108488 inc     di ;~ 24ED:158B
cs=0x24ed;eip=0x00158c; 	T(MOV(al, ah));	// 108489 mov     al, ah ;~ 24ED:158C
cs=0x24ed;eip=0x00158e; 	T(OR(al, al));	// 108490 or      al, al ;~ 24ED:158E
cs=0x24ed;eip=0x001590; 	J(JNZ(loc_34a15));	// 108491 jnz     short loc_34A15 ;~ 24ED:1590
loc_34a42:
	// 7154 
cs=0x24ed;eip=0x001592; 	T(ADD(di, 2));	// 108494 add     di, 2 ;~ 24ED:1592
cs=0x24ed;eip=0x001595; 	T(DEC(bp));	// 108495 dec     bp ;~ 24ED:1595
cs=0x24ed;eip=0x001596; 	J(JNZ(loc_349ff));	// 108496 jnz     short loc_349FF ;~ 24ED:1596
loc_34a48:
	// 7155 
cs=0x24ed;eip=0x001598; 	X(POP(di));	// 108499 pop     di ;~ 24ED:1598
cs=0x24ed;eip=0x001599; 	T(ADD(di, 0x140));	// 108500 add     di, 140h ;~ 24ED:1599
cs=0x24ed;eip=0x00159d; 	J(LOOP(loc_349fb));	// 108501 loop    loc_349FB ;~ 24ED:159D
cs=0x24ed;eip=0x00159f; 	J(RETF(0));	// 108502 retf ;~ 24ED:159F
loc_34a50:
	// 7156 
cs=0x24ed;eip=0x0015a0; 	T(SHR(ah, 4));	// 108506 shr     ah, 4 ;~ 24ED:15A0
cs=0x24ed;eip=0x0015a3; 	J(JZ(loc_34a42));	// 108507 jz      short loc_34A42 ;~ 24ED:15A3
cs=0x24ed;eip=0x0015a5; 	T(INC(di));	// 108508 inc     di ;~ 24ED:15A5
cs=0x24ed;eip=0x0015a6; 	J(JMP(loc_34a1f));	// 108509 jmp     short loc_34A1F ;~ 24ED:15A6
loc_34a58:
	// 7157 
cs=0x24ed;eip=0x0015a8; 	T(INC(di));	// 108513 inc     di ;~ 24ED:15A8
cs=0x24ed;eip=0x0015a9; 	T(DEC(bp));	// 108514 dec     bp ;~ 24ED:15A9
cs=0x24ed;eip=0x0015aa; 	J(JNZ(loc_349ff));	// 108515 jnz     short loc_349FF ;~ 24ED:15AA
cs=0x24ed;eip=0x0015ac; 	J(JMP(loc_34a48));	// 108516 jmp     short loc_34A48 ;~ 24ED:15AC
loc_34a5e:
	// 7158 
cs=0x24ed;eip=0x0015ae; 	T(ADD(si, 0x12));	// 108522 add     si, 12h         ; jumptable 00034964 case 0 ;~ 24ED:15AE
cs=0x24ed;eip=0x0015b1; 	T(MOV(bp, 0x1234));	// 108523 mov     bp, 1234h ;~ 24ED:15B1
cs=0x24ed;eip=0x0015b4; 	X(PUSH(di));	// 108524 push    di ;~ 24ED:15B4
loc_34a65:
	// 7159 
cs=0x24ed;eip=0x0015b5; 	T(LODSW);	// 108528 lodsw ;~ 24ED:15B5
cs=0x24ed;eip=0x0015b6; 	T(MOV(bl, al));	// 108529 mov     bl, al ;~ 24ED:15B6
cs=0x24ed;eip=0x0015b8; 	T(AND(al, dl));	// 108530 and     al, dl ;~ 24ED:15B8
cs=0x24ed;eip=0x0015ba; 	J(JZ(loc_34a97));	// 108531 jz      short loc_34A97 ;~ 24ED:15BA
cs=0x24ed;eip=0x0015bc; 	T(ADD(al, dh));	// 108532 add     al, dh ;~ 24ED:15BC
cs=0x24ed;eip=0x0015be; 	X(STOSB);	// 108533 stosb ;~ 24ED:15BE
cs=0x24ed;eip=0x0015bf; 	T(SHR(bl, 4));	// 108534 shr     bl, 4 ;~ 24ED:15BF
cs=0x24ed;eip=0x0015c2; 	J(JZ(loc_34aa1));	// 108535 jz      short loc_34AA1 ;~ 24ED:15C2
cs=0x24ed;eip=0x0015c4; 	T(MOV(al, bl));	// 108536 mov     al, bl ;~ 24ED:15C4
loc_34a76:
	// 7160 
cs=0x24ed;eip=0x0015c6; 	T(ADD(al, dh));	// 108540 add     al, dh ;~ 24ED:15C6
cs=0x24ed;eip=0x0015c8; 	X(STOSB);	// 108541 stosb ;~ 24ED:15C8
cs=0x24ed;eip=0x0015c9; 	T(MOV(al, ah));	// 108542 mov     al, ah ;~ 24ED:15C9
loc_34a7b:
	// 7161 
cs=0x24ed;eip=0x0015cb; 	T(AND(al, dl));	// 108546 and     al, dl ;~ 24ED:15CB
cs=0x24ed;eip=0x0015cd; 	J(JZ(loc_34ab5));	// 108547 jz      short loc_34AB5 ;~ 24ED:15CD
cs=0x24ed;eip=0x0015cf; 	T(ADD(al, dh));	// 108548 add     al, dh ;~ 24ED:15CF
cs=0x24ed;eip=0x0015d1; 	X(STOSB);	// 108549 stosb ;~ 24ED:15D1
cs=0x24ed;eip=0x0015d2; 	T(SHR(ah, 4));	// 108550 shr     ah, 4 ;~ 24ED:15D2
loc_34a85:
	// 7162 
cs=0x24ed;eip=0x0015d5; 	J(JZ(loc_34abd));	// 108553 jz      short loc_34ABD ;~ 24ED:15D5
cs=0x24ed;eip=0x0015d7; 	T(MOV(al, ah));	// 108554 mov     al, ah ;~ 24ED:15D7
loc_34a89:
	// 7163 
cs=0x24ed;eip=0x0015d9; 	T(ADD(al, dh));	// 108557 add     al, dh ;~ 24ED:15D9
cs=0x24ed;eip=0x0015db; 	X(STOSB);	// 108558 stosb ;~ 24ED:15DB
cs=0x24ed;eip=0x0015dc; 	T(DEC(bp));	// 108559 dec     bp ;~ 24ED:15DC
cs=0x24ed;eip=0x0015dd; 	J(JNZ(loc_34a65));	// 108560 jnz     short loc_34A65 ;~ 24ED:15DD
cs=0x24ed;eip=0x0015df; 	X(POP(di));	// 108561 pop     di ;~ 24ED:15DF
cs=0x24ed;eip=0x0015e0; 	T(ADD(di, 0x140));	// 108562 add     di, 140h ;~ 24ED:15E0
loc_34a94:
	// 7164 
cs=0x24ed;eip=0x0015e4; 	J(LOOP(loc_34a5e));	// 108566 loop    loc_34A5E       ; jumptable 00034964 case 0 ;~ 24ED:15E4
cs=0x24ed;eip=0x0015e6; 	J(RETF(0));	// 108567 retf ;~ 24ED:15E6
loc_34a97:
	// 7165 
cs=0x24ed;eip=0x0015e7; 	T(INC(di));	// 108571 inc     di ;~ 24ED:15E7
cs=0x24ed;eip=0x0015e8; 	T(OR(al, bl));	// 108572 or      al, bl ;~ 24ED:15E8
cs=0x24ed;eip=0x0015ea; 	J(JZ(loc_34aa1));	// 108573 jz      short loc_34AA1 ;~ 24ED:15EA
cs=0x24ed;eip=0x0015ec; 	T(SHR(al, 4));	// 108574 shr     al, 4 ;~ 24ED:15EC
cs=0x24ed;eip=0x0015ef; 	J(JMP(loc_34a76));	// 108575 jmp     short loc_34A76 ;~ 24ED:15EF
loc_34aa1:
	// 7166 
cs=0x24ed;eip=0x0015f1; 	T(INC(di));	// 108580 inc     di ;~ 24ED:15F1
cs=0x24ed;eip=0x0015f2; 	T(MOV(al, ah));	// 108581 mov     al, ah ;~ 24ED:15F2
cs=0x24ed;eip=0x0015f4; 	T(OR(al, al));	// 108582 or      al, al ;~ 24ED:15F4
cs=0x24ed;eip=0x0015f6; 	J(JNZ(loc_34a7b));	// 108583 jnz     short loc_34A7B ;~ 24ED:15F6
loc_34aa8:
	// 7167 
cs=0x24ed;eip=0x0015f8; 	T(ADD(di, 2));	// 108586 add     di, 2 ;~ 24ED:15F8
cs=0x24ed;eip=0x0015fb; 	T(DEC(bp));	// 108587 dec     bp ;~ 24ED:15FB
cs=0x24ed;eip=0x0015fc; 	J(JNZ(loc_34a65));	// 108588 jnz     short loc_34A65 ;~ 24ED:15FC
loc_34aae:
	// 7168 
cs=0x24ed;eip=0x0015fe; 	X(POP(di));	// 108591 pop     di ;~ 24ED:15FE
cs=0x24ed;eip=0x0015ff; 	T(ADD(di, 0x140));	// 108592 add     di, 140h ;~ 24ED:15FF
cs=0x24ed;eip=0x001603; 	J(JMP(loc_34a94));	// 108593 jmp     short loc_34A94 ;~ 24ED:1603
loc_34ab5:
	// 7169 
cs=0x24ed;eip=0x001605; 	T(SHR(ah, 4));	// 108597 shr     ah, 4 ;~ 24ED:1605
cs=0x24ed;eip=0x001608; 	J(JZ(loc_34aa8));	// 108598 jz      short loc_34AA8 ;~ 24ED:1608
cs=0x24ed;eip=0x00160a; 	T(INC(di));	// 108599 inc     di ;~ 24ED:160A
cs=0x24ed;eip=0x00160b; 	J(JMP(loc_34a85));	// 108600 jmp     short loc_34A85 ;~ 24ED:160B
loc_34abd:
	// 7170 
cs=0x24ed;eip=0x00160d; 	T(INC(di));	// 108605 inc     di ;~ 24ED:160D
cs=0x24ed;eip=0x00160e; 	T(DEC(bp));	// 108606 dec     bp ;~ 24ED:160E
cs=0x24ed;eip=0x00160f; 	J(JNZ(loc_34a65));	// 108607 jnz     short loc_34A65 ;~ 24ED:160F
cs=0x24ed;eip=0x001611; 	J(JMP(loc_34aae));	// 108608 jmp     short loc_34AAE ;~ 24ED:1611
loc_34ac3:
	// 7171 
cs=0x24ed;eip=0x001613; 	T(ADD(si, 0x12));	// 108613 add     si, 12h         ; jumptable 00034964 case 3 ;~ 24ED:1613
cs=0x24ed;eip=0x001616; 	T(MOV(bp, 0x1234));	// 108614 mov     bp, 1234h ;~ 24ED:1616
cs=0x24ed;eip=0x001619; 	X(PUSH(di));	// 108615 push    di ;~ 24ED:1619
cs=0x24ed;eip=0x00161a; 	T(LODSB);	// 108616 lodsb ;~ 24ED:161A
cs=0x24ed;eip=0x00161b; 	T(CMP(al, dl));	// 108617 cmp     al, dl ;~ 24ED:161B
cs=0x24ed;eip=0x00161d; 	J(JBE(loc_34abd));	// 108618 jbe     short loc_34ABD ;~ 24ED:161D
cs=0x24ed;eip=0x00161f; 	T(SHR(al, 4));	// 108619 shr     al, 4 ;~ 24ED:161F
cs=0x24ed;eip=0x001622; 	J(JMP(loc_34a89));	// 108620 jmp     short loc_34A89 ;~ 24ED:1622
loc_34ad4:
	// 7172 
cs=0x24ed;eip=0x001624; 	T(ADD(si, 0x12));	// 108625 add     si, 12h         ; jumptable 00034964 case 2 ;~ 24ED:1624
cs=0x24ed;eip=0x001627; 	T(MOV(bp, 0x1234));	// 108626 mov     bp, 1234h ;~ 24ED:1627
cs=0x24ed;eip=0x00162a; 	X(PUSH(di));	// 108627 push    di ;~ 24ED:162A
cs=0x24ed;eip=0x00162b; 	T(LODSB);	// 108628 lodsb ;~ 24ED:162B
cs=0x24ed;eip=0x00162c; 	T(MOV(ah, al));	// 108629 mov     ah, al ;~ 24ED:162C
cs=0x24ed;eip=0x00162e; 	J(JMP(loc_34a7b));	// 108630 jmp     short loc_34A7B ;~ 24ED:162E
loc_34ae0:
	// 7173 
cs=0x24ed;eip=0x001630; 	T(ADD(si, 0x12));	// 108635 add     si, 12h         ; jumptable 00034964 case 1 ;~ 24ED:1630
cs=0x24ed;eip=0x001633; 	T(MOV(bp, 0x1234));	// 108636 mov     bp, 1234h ;~ 24ED:1633
cs=0x24ed;eip=0x001636; 	X(PUSH(di));	// 108637 push    di ;~ 24ED:1636
cs=0x24ed;eip=0x001637; 	T(LODSW);	// 108638 lodsw ;~ 24ED:1637
cs=0x24ed;eip=0x001638; 	T(AND(al, 0x0F0));	// 108639 and     al, 0F0h ;~ 24ED:1638
cs=0x24ed;eip=0x00163a; 	J(JZ(loc_34aa1));	// 108640 jz      short loc_34AA1 ;~ 24ED:163A
cs=0x24ed;eip=0x00163c; 	T(SHR(al, 4));	// 108641 shr     al, 4 ;~ 24ED:163C
cs=0x24ed;eip=0x00163f; 	J(JMP(loc_34a76));	// 108642 jmp     short loc_34A76 ;~ 24ED:163F
loc_34af1:
	// 7174 
cs=0x24ed;eip=0x001641; 	T(ADD(si, 0x12));	// 108647 add     si, 12h ;~ 24ED:1641
loc_34af4:
	// 7175 
cs=0x24ed;eip=0x001644; 	T(MOV(bp, 0x1234));	// 108651 mov     bp, 1234h ;~ 24ED:1644
cs=0x24ed;eip=0x001647; 	X(PUSH(di));	// 108652 push    di ;~ 24ED:1647
cs=0x24ed;eip=0x001648; 	T(ADD(bp, di));	// 108653 add     bp, di ;~ 24ED:1648
loc_34afa:
	// 7176 
cs=0x24ed;eip=0x00164a; 	T(LODSW);	// 108656 lodsw ;~ 24ED:164A
cs=0x24ed;eip=0x00164b; 	T(MOV(bl, al));	// 108657 mov     bl, al ;~ 24ED:164B
cs=0x24ed;eip=0x00164d; 	T(AND(al, dl));	// 108658 and     al, dl ;~ 24ED:164D
cs=0x24ed;eip=0x00164f; 	J(JZ(loc_34b39));	// 108659 jz      short loc_34B39 ;~ 24ED:164F
cs=0x24ed;eip=0x001651; 	T(ADD(al, dh));	// 108660 add     al, dh ;~ 24ED:1651
cs=0x24ed;eip=0x001653; 	X(STOSB);	// 108661 stosb ;~ 24ED:1653
cs=0x24ed;eip=0x001654; 	T(CMP(di, bp));	// 108662 cmp     di, bp ;~ 24ED:1654
cs=0x24ed;eip=0x001656; 	J(JNC(loc_34b31));	// 108663 jnb     short loc_34B31 ;~ 24ED:1656
cs=0x24ed;eip=0x001658; 	T(SHR(bl, 4));	// 108664 shr     bl, 4 ;~ 24ED:1658
cs=0x24ed;eip=0x00165b; 	J(JZ(loc_34b47));	// 108665 jz      short loc_34B47 ;~ 24ED:165B
cs=0x24ed;eip=0x00165d; 	T(MOV(al, bl));	// 108666 mov     al, bl ;~ 24ED:165D
loc_34b0f:
	// 7177 
cs=0x24ed;eip=0x00165f; 	T(ADD(al, dh));	// 108669 add     al, dh ;~ 24ED:165F
cs=0x24ed;eip=0x001661; 	X(STOSB);	// 108670 stosb ;~ 24ED:1661
cs=0x24ed;eip=0x001662; 	T(CMP(di, bp));	// 108671 cmp     di, bp ;~ 24ED:1662
cs=0x24ed;eip=0x001664; 	J(JNC(loc_34b31));	// 108672 jnb     short loc_34B31 ;~ 24ED:1664
cs=0x24ed;eip=0x001666; 	T(MOV(al, ah));	// 108673 mov     al, ah ;~ 24ED:1666
loc_34b18:
	// 7178 
cs=0x24ed;eip=0x001668; 	T(AND(al, dl));	// 108676 and     al, dl ;~ 24ED:1668
cs=0x24ed;eip=0x00166a; 	J(JZ(loc_34b57));	// 108677 jz      short loc_34B57 ;~ 24ED:166A
cs=0x24ed;eip=0x00166c; 	T(ADD(al, dh));	// 108678 add     al, dh ;~ 24ED:166C
cs=0x24ed;eip=0x00166e; 	X(STOSB);	// 108679 stosb ;~ 24ED:166E
cs=0x24ed;eip=0x00166f; 	T(CMP(di, bp));	// 108680 cmp     di, bp ;~ 24ED:166F
cs=0x24ed;eip=0x001671; 	J(JNC(loc_34b31));	// 108681 jnb     short loc_34B31 ;~ 24ED:1671
cs=0x24ed;eip=0x001673; 	T(SHR(ah, 4));	// 108682 shr     ah, 4 ;~ 24ED:1673
loc_34b26:
	// 7179 
cs=0x24ed;eip=0x001676; 	J(JZ(loc_34b61));	// 108685 jz      short loc_34B61 ;~ 24ED:1676
cs=0x24ed;eip=0x001678; 	T(MOV(al, ah));	// 108686 mov     al, ah ;~ 24ED:1678
cs=0x24ed;eip=0x00167a; 	T(ADD(al, dh));	// 108687 add     al, dh ;~ 24ED:167A
cs=0x24ed;eip=0x00167c; 	X(STOSB);	// 108688 stosb ;~ 24ED:167C
loc_34b2d:
	// 7180 
cs=0x24ed;eip=0x00167d; 	T(CMP(di, bp));	// 108692 cmp     di, bp ;~ 24ED:167D
cs=0x24ed;eip=0x00167f; 	J(JC(loc_34afa));	// 108693 jb      short loc_34AFA ;~ 24ED:167F
loc_34b31:
	// 7181 
cs=0x24ed;eip=0x001681; 	X(POP(di));	// 108697 pop     di ;~ 24ED:1681
cs=0x24ed;eip=0x001682; 	T(ADD(di, 0x140));	// 108698 add     di, 140h ;~ 24ED:1682
loc_34b36:
	// 7182 
cs=0x24ed;eip=0x001686; 	J(LOOP(loc_34af1));	// 108701 loop    loc_34AF1 ;~ 24ED:1686
cs=0x24ed;eip=0x001688; 	J(RETF(0));	// 108702 retf ;~ 24ED:1688
loc_34b39:
	// 7183 
cs=0x24ed;eip=0x001689; 	T(INC(di));	// 108706 inc     di ;~ 24ED:1689
cs=0x24ed;eip=0x00168a; 	T(CMP(di, bp));	// 108707 cmp     di, bp ;~ 24ED:168A
cs=0x24ed;eip=0x00168c; 	J(JNC(loc_34b31));	// 108708 jnb     short loc_34B31 ;~ 24ED:168C
cs=0x24ed;eip=0x00168e; 	T(OR(al, bl));	// 108709 or      al, bl ;~ 24ED:168E
cs=0x24ed;eip=0x001690; 	J(JZ(loc_34b47));	// 108710 jz      short loc_34B47 ;~ 24ED:1690
cs=0x24ed;eip=0x001692; 	T(SHR(al, 4));	// 108711 shr     al, 4 ;~ 24ED:1692
cs=0x24ed;eip=0x001695; 	J(JMP(loc_34b0f));	// 108712 jmp     short loc_34B0F ;~ 24ED:1695
loc_34b47:
	// 7184 
cs=0x24ed;eip=0x001697; 	T(INC(di));	// 108717 inc     di ;~ 24ED:1697
cs=0x24ed;eip=0x001698; 	T(CMP(di, bp));	// 108718 cmp     di, bp ;~ 24ED:1698
cs=0x24ed;eip=0x00169a; 	J(JNC(loc_34b31));	// 108719 jnb     short loc_34B31 ;~ 24ED:169A
cs=0x24ed;eip=0x00169c; 	T(MOV(al, ah));	// 108720 mov     al, ah ;~ 24ED:169C
cs=0x24ed;eip=0x00169e; 	T(OR(al, al));	// 108721 or      al, al ;~ 24ED:169E
cs=0x24ed;eip=0x0016a0; 	J(JNZ(loc_34b18));	// 108722 jnz     short loc_34B18 ;~ 24ED:16A0
cs=0x24ed;eip=0x0016a2; 	T(ADD(di, 2));	// 108723 add     di, 2 ;~ 24ED:16A2
cs=0x24ed;eip=0x0016a5; 	J(JMP(loc_34b2d));	// 108724 jmp     short loc_34B2D ;~ 24ED:16A5
loc_34b57:
	// 7185 
cs=0x24ed;eip=0x0016a7; 	T(INC(di));	// 108728 inc     di ;~ 24ED:16A7
cs=0x24ed;eip=0x0016a8; 	T(CMP(di, bp));	// 108729 cmp     di, bp ;~ 24ED:16A8
cs=0x24ed;eip=0x0016aa; 	J(JNC(loc_34b31));	// 108730 jnb     short loc_34B31 ;~ 24ED:16AA
cs=0x24ed;eip=0x0016ac; 	T(SHR(ah, 4));	// 108731 shr     ah, 4 ;~ 24ED:16AC
cs=0x24ed;eip=0x0016af; 	J(JNZ(loc_34b26));	// 108732 jnz     short loc_34B26 ;~ 24ED:16AF
loc_34b61:
	// 7186 
cs=0x24ed;eip=0x0016b1; 	T(INC(di));	// 108735 inc     di ;~ 24ED:16B1
cs=0x24ed;eip=0x0016b2; 	J(JMP(loc_34b2d));	// 108736 jmp     short loc_34B2D ;~ 24ED:16B2
seg002_16b4_proc:
	// 108741 
loc_34b64:
	// 7187 
cs=0x24ed;eip=0x0016b4; 	T(ADD(si, 0x12));	// 108743 add     si, 12h ;~ 24ED:16B4
cs=0x24ed;eip=0x0016b7; 	T(MOV(bp, 0x1234));	// 108744 mov     bp, 1234h ;~ 24ED:16B7
cs=0x24ed;eip=0x0016ba; 	X(PUSH(di));	// 108745 push    di ;~ 24ED:16BA
cs=0x24ed;eip=0x0016bb; 	T(ADD(bp, di));	// 108746 add     bp, di ;~ 24ED:16BB
loc_34b6d:
	// 7188 
cs=0x24ed;eip=0x0016bd; 	T(LODSW);	// 108749 lodsw ;~ 24ED:16BD
cs=0x24ed;eip=0x0016be; 	T(MOV(bl, al));	// 108750 mov     bl, al ;~ 24ED:16BE
cs=0x24ed;eip=0x0016c0; 	T(AND(al, dl));	// 108751 and     al, dl ;~ 24ED:16C0
cs=0x24ed;eip=0x0016c2; 	J(JZ(loc_34bac));	// 108752 jz      short loc_34BAC ;~ 24ED:16C2
cs=0x24ed;eip=0x0016c4; 	T(ADD(al, dh));	// 108753 add     al, dh ;~ 24ED:16C4
cs=0x24ed;eip=0x0016c6; 	X(STOSB);	// 108754 stosb ;~ 24ED:16C6
cs=0x24ed;eip=0x0016c7; 	T(CMP(di, bp));	// 108755 cmp     di, bp ;~ 24ED:16C7
cs=0x24ed;eip=0x0016c9; 	J(JNC(loc_34ba4));	// 108756 jnb     short loc_34BA4 ;~ 24ED:16C9
cs=0x24ed;eip=0x0016cb; 	T(SHR(bl, 4));	// 108757 shr     bl, 4 ;~ 24ED:16CB
cs=0x24ed;eip=0x0016ce; 	J(JZ(loc_34bba));	// 108758 jz      short loc_34BBA ;~ 24ED:16CE
cs=0x24ed;eip=0x0016d0; 	T(MOV(al, bl));	// 108759 mov     al, bl ;~ 24ED:16D0
loc_34b82:
	// 7189 
cs=0x24ed;eip=0x0016d2; 	T(ADD(al, dh));	// 108763 add     al, dh ;~ 24ED:16D2
cs=0x24ed;eip=0x0016d4; 	X(STOSB);	// 108764 stosb ;~ 24ED:16D4
cs=0x24ed;eip=0x0016d5; 	T(CMP(di, bp));	// 108765 cmp     di, bp ;~ 24ED:16D5
cs=0x24ed;eip=0x0016d7; 	J(JNC(loc_34ba4));	// 108766 jnb     short loc_34BA4 ;~ 24ED:16D7
cs=0x24ed;eip=0x0016d9; 	T(MOV(al, ah));	// 108767 mov     al, ah ;~ 24ED:16D9
loc_34b8b:
	// 7190 
cs=0x24ed;eip=0x0016db; 	T(AND(al, dl));	// 108771 and     al, dl ;~ 24ED:16DB
cs=0x24ed;eip=0x0016dd; 	J(JZ(loc_34bca));	// 108772 jz      short loc_34BCA ;~ 24ED:16DD
cs=0x24ed;eip=0x0016df; 	T(ADD(al, dh));	// 108773 add     al, dh ;~ 24ED:16DF
cs=0x24ed;eip=0x0016e1; 	X(STOSB);	// 108774 stosb ;~ 24ED:16E1
cs=0x24ed;eip=0x0016e2; 	T(CMP(di, bp));	// 108775 cmp     di, bp ;~ 24ED:16E2
cs=0x24ed;eip=0x0016e4; 	J(JNC(loc_34ba4));	// 108776 jnb     short loc_34BA4 ;~ 24ED:16E4
cs=0x24ed;eip=0x0016e6; 	T(SHR(ah, 4));	// 108777 shr     ah, 4 ;~ 24ED:16E6
loc_34b99:
	// 7191 
cs=0x24ed;eip=0x0016e9; 	J(JZ(loc_34bd4));	// 108780 jz      short loc_34BD4 ;~ 24ED:16E9
cs=0x24ed;eip=0x0016eb; 	T(MOV(al, ah));	// 108781 mov     al, ah ;~ 24ED:16EB
loc_34b9d:
	// 7192 
cs=0x24ed;eip=0x0016ed; 	T(ADD(al, dh));	// 108784 add     al, dh ;~ 24ED:16ED
cs=0x24ed;eip=0x0016ef; 	X(STOSB);	// 108785 stosb ;~ 24ED:16EF
loc_34ba0:
	// 7193 
cs=0x24ed;eip=0x0016f0; 	T(CMP(di, bp));	// 108789 cmp     di, bp ;~ 24ED:16F0
cs=0x24ed;eip=0x0016f2; 	J(JC(loc_34b6d));	// 108790 jb      short loc_34B6D ;~ 24ED:16F2
loc_34ba4:
	// 7194 
cs=0x24ed;eip=0x0016f4; 	X(POP(di));	// 108794 pop     di ;~ 24ED:16F4
cs=0x24ed;eip=0x0016f5; 	T(ADD(di, 0x140));	// 108795 add     di, 140h ;~ 24ED:16F5
loc_34ba9:
	// 7195 
cs=0x24ed;eip=0x0016f9; 	J(LOOP(loc_34b64));	// 108798 loop    loc_34B64 ;~ 24ED:16F9
locret_34bab:
	// 7196 
cs=0x24ed;eip=0x0016fb; 	J(RETF(0));	// 108801 retf ;~ 24ED:16FB
loc_34bac:
	// 7197 
cs=0x24ed;eip=0x0016fc; 	T(INC(di));	// 108805 inc     di ;~ 24ED:16FC
cs=0x24ed;eip=0x0016fd; 	T(CMP(di, bp));	// 108806 cmp     di, bp ;~ 24ED:16FD
cs=0x24ed;eip=0x0016ff; 	J(JNC(loc_34ba4));	// 108807 jnb     short loc_34BA4 ;~ 24ED:16FF
cs=0x24ed;eip=0x001701; 	T(OR(al, bl));	// 108808 or      al, bl ;~ 24ED:1701
cs=0x24ed;eip=0x001703; 	J(JZ(loc_34bba));	// 108809 jz      short loc_34BBA ;~ 24ED:1703
cs=0x24ed;eip=0x001705; 	T(SHR(al, 4));	// 108810 shr     al, 4 ;~ 24ED:1705
cs=0x24ed;eip=0x001708; 	J(JMP(loc_34b82));	// 108811 jmp     short loc_34B82 ;~ 24ED:1708
loc_34bba:
	// 7198 
cs=0x24ed;eip=0x00170a; 	T(INC(di));	// 108816 inc     di ;~ 24ED:170A
cs=0x24ed;eip=0x00170b; 	T(CMP(di, bp));	// 108817 cmp     di, bp ;~ 24ED:170B
cs=0x24ed;eip=0x00170d; 	J(JNC(loc_34ba4));	// 108818 jnb     short loc_34BA4 ;~ 24ED:170D
cs=0x24ed;eip=0x00170f; 	T(MOV(al, ah));	// 108819 mov     al, ah ;~ 24ED:170F
cs=0x24ed;eip=0x001711; 	T(OR(al, al));	// 108820 or      al, al ;~ 24ED:1711
cs=0x24ed;eip=0x001713; 	J(JNZ(loc_34b8b));	// 108821 jnz     short loc_34B8B ;~ 24ED:1713
cs=0x24ed;eip=0x001715; 	T(ADD(di, 2));	// 108822 add     di, 2 ;~ 24ED:1715
cs=0x24ed;eip=0x001718; 	J(JMP(loc_34ba0));	// 108823 jmp     short loc_34BA0 ;~ 24ED:1718
loc_34bca:
	// 7199 
cs=0x24ed;eip=0x00171a; 	T(INC(di));	// 108827 inc     di ;~ 24ED:171A
cs=0x24ed;eip=0x00171b; 	T(CMP(di, bp));	// 108828 cmp     di, bp ;~ 24ED:171B
cs=0x24ed;eip=0x00171d; 	J(JNC(loc_34ba4));	// 108829 jnb     short loc_34BA4 ;~ 24ED:171D
cs=0x24ed;eip=0x00171f; 	T(SHR(ah, 4));	// 108830 shr     ah, 4 ;~ 24ED:171F
cs=0x24ed;eip=0x001722; 	J(JZ(loc_34b99));	// 108831 jz      short loc_34B99 ;~ 24ED:1722
loc_34bd4:
	// 7200 
cs=0x24ed;eip=0x001724; 	T(INC(di));	// 108835 inc     di ;~ 24ED:1724
cs=0x24ed;eip=0x001725; 	J(JMP(loc_34ba0));	// 108836 jmp     short loc_34BA0 ;~ 24ED:1725
loc_34bd7:
	// 7201 
cs=0x24ed;eip=0x001727; 	T(ADD(si, 0x12));	// 108840 add     si, 12h ;~ 24ED:1727
cs=0x24ed;eip=0x00172a; 	T(MOV(bp, 0x1234));	// 108841 mov     bp, 1234h ;~ 24ED:172A
cs=0x24ed;eip=0x00172d; 	X(PUSH(di));	// 108842 push    di ;~ 24ED:172D
cs=0x24ed;eip=0x00172e; 	T(ADD(bp, di));	// 108843 add     bp, di ;~ 24ED:172E
cs=0x24ed;eip=0x001730; 	T(LODSB);	// 108844 lodsb ;~ 24ED:1730
cs=0x24ed;eip=0x001731; 	T(CMP(al, dl));	// 108845 cmp     al, dl ;~ 24ED:1731
cs=0x24ed;eip=0x001733; 	J(JBE(loc_34bd4));	// 108846 jbe     short loc_34BD4 ;~ 24ED:1733
cs=0x24ed;eip=0x001735; 	T(SHR(al, 4));	// 108847 shr     al, 4 ;~ 24ED:1735
cs=0x24ed;eip=0x001738; 	J(JMP(loc_34b9d));	// 108848 jmp     short loc_34B9D ;~ 24ED:1738
loc_34bea:
	// 7202 
cs=0x24ed;eip=0x00173a; 	T(ADD(si, 0x12));	// 108852 add     si, 12h ;~ 24ED:173A
cs=0x24ed;eip=0x00173d; 	T(MOV(bp, 0x1234));	// 108853 mov     bp, 1234h ;~ 24ED:173D
cs=0x24ed;eip=0x001740; 	X(PUSH(di));	// 108854 push    di ;~ 24ED:1740
cs=0x24ed;eip=0x001741; 	T(ADD(bp, di));	// 108855 add     bp, di ;~ 24ED:1741
cs=0x24ed;eip=0x001743; 	T(LODSB);	// 108856 lodsb ;~ 24ED:1743
cs=0x24ed;eip=0x001744; 	T(MOV(ah, al));	// 108857 mov     ah, al ;~ 24ED:1744
cs=0x24ed;eip=0x001746; 	J(JMP(loc_34b8b));	// 108858 jmp     short loc_34B8B ;~ 24ED:1746
loc_34bf8:
	// 7203 
cs=0x24ed;eip=0x001748; 	T(ADD(si, 0x12));	// 108862 add     si, 12h ;~ 24ED:1748
cs=0x24ed;eip=0x00174b; 	T(MOV(bp, 0x1234));	// 108863 mov     bp, 1234h ;~ 24ED:174B
cs=0x24ed;eip=0x00174e; 	X(PUSH(di));	// 108864 push    di ;~ 24ED:174E
cs=0x24ed;eip=0x00174f; 	T(ADD(bp, di));	// 108865 add     bp, di ;~ 24ED:174F
cs=0x24ed;eip=0x001751; 	T(LODSW);	// 108866 lodsw ;~ 24ED:1751
cs=0x24ed;eip=0x001752; 	T(AND(al, 0x0F0));	// 108867 and     al, 0F0h ;~ 24ED:1752
cs=0x24ed;eip=0x001754; 	J(JZ(loc_34bba));	// 108868 jz      short loc_34BBA ;~ 24ED:1754
cs=0x24ed;eip=0x001756; 	T(SHR(al, 4));	// 108869 shr     al, 4 ;~ 24ED:1756
cs=0x24ed;eip=0x001759; 	J(JMP(loc_34b82));	// 108870 jmp     loc_34B82 ;~ 24ED:1759
loc_34c0c:
	// 7204 
cs=0x24ed;eip=0x00175c; 	T(XOR(ch, ch));	// 108875 xor     ch, ch ;~ 24ED:175C
cs=0x24ed;eip=0x00175e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+2))));	// 108876 mov     ax, [bp+2] ;~ 24ED:175E
cs=0x24ed;eip=0x001761; 	T(SUB(ax, bx));	// 108877 sub     ax, bx ;~ 24ED:1761
cs=0x24ed;eip=0x001763; 	J(JLE(loc_34c20));	// 108878 jle     short loc_34C20 ;~ 24ED:1763
cs=0x24ed;eip=0x001765; 	T(SUB(cx, ax));	// 108879 sub     cx, ax ;~ 24ED:1765
cs=0x24ed;eip=0x001767; 	J(JBE(nullsub_22));	// 108880 jbe     short near ptr nullsub_22 ;~ 24ED:1767
cs=0x24ed;eip=0x001769; 	T(ADD(bx, ax));	// 108881 add     bx, ax ;~ 24ED:1769
loc_34c1b:
	// 7205 
cs=0x24ed;eip=0x00176b; 	T(ADD(si, di));	// 108884 add     si, di ;~ 24ED:176B
cs=0x24ed;eip=0x00176d; 	T(DEC(ax));	// 108885 dec     ax ;~ 24ED:176D
cs=0x24ed;eip=0x00176e; 	J(JNZ(loc_34c1b));	// 108886 jnz     short loc_34C1B ;~ 24ED:176E
loc_34c20:
	// 7206 
cs=0x24ed;eip=0x001770; 	T(MOV(ax, bx));	// 108889 mov     ax, bx ;~ 24ED:1770
cs=0x24ed;eip=0x001772; 	T(ADD(ax, cx));	// 108890 add     ax, cx ;~ 24ED:1772
cs=0x24ed;eip=0x001774; 	T(SUB(ax, *(dw*)(raddr(ss,bp+6))));	// 108891 sub     ax, [bp+6] ;~ 24ED:1774
cs=0x24ed;eip=0x001777; 	J(JBE(loc_34c2d));	// 108892 jbe     short loc_34C2D ;~ 24ED:1777
cs=0x24ed;eip=0x001779; 	T(SUB(cx, ax));	// 108893 sub     cx, ax ;~ 24ED:1779
cs=0x24ed;eip=0x00177b; 	J(JBE(nullsub_22));	// 108894 jbe     short near ptr nullsub_22 ;~ 24ED:177B
loc_34c2d:
	// 7207 
cs=0x24ed;eip=0x00177d; 	T(MOV(ax, dx));	// 108897 mov     ax, dx ;~ 24ED:177D
cs=0x24ed;eip=0x00177f; 	T(ADD(ax, di));	// 108898 add     ax, di ;~ 24ED:177F
cs=0x24ed;eip=0x001781; 	T(SUB(ax, *(dw*)(raddr(ss,bp+4))));	// 108899 sub     ax, [bp+4] ;~ 24ED:1781
cs=0x24ed;eip=0x001784; 	J(JG(loc_34c78));	// 108900 jg      short loc_34C78 ;~ 24ED:1784
cs=0x24ed;eip=0x001786; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 108901 mov     ax, [bp+0] ;~ 24ED:1786
cs=0x24ed;eip=0x001789; 	T(SUB(ax, dx));	// 108902 sub     ax, dx ;~ 24ED:1789
cs=0x24ed;eip=0x00178b; 	J(JG(loc_34c4a));	// 108903 jg      short loc_34C4A ;~ 24ED:178B
cs=0x24ed;eip=0x00178d; 	T(MOV(bp, di));	// 108904 mov     bp, di ;~ 24ED:178D
cs=0x24ed;eip=0x00178f; 	X(PUSH(di));	// 108905 push    di ;~ 24ED:178F
cs=0x24ed;eip=0x001790; 	J(CALL(sub_340a8,0));	// 108906 call    sub_340A8 ;~ 24ED:1790
cs=0x24ed;eip=0x001793; 	X(POP(dx));	// 108907 pop     dx ;~ 24ED:1793
cs=0x24ed;eip=0x001794; 	T(MOV(bx, cx));	// 108908 mov     bx, cx ;~ 24ED:1794
cs=0x24ed;eip=0x001796; 	J(JMP(loc_34c5b));	// 108909 jmp     short loc_34C5B ;~ 24ED:1796
nullsub_22:
	// 108917 
cs=0x24ed;eip=0x001799; 	J(RETF(0));	// 108919 retf ;~ 24ED:1799
seg002_179a_proc:
	// 108925 
loc_34c4a:
	// 7208 
cs=0x24ed;eip=0x00179a; 	T(MOV(bp, di));	// 108926 mov     bp, di ;~ 24ED:179A
cs=0x24ed;eip=0x00179c; 	T(SUB(di, ax));	// 108927 sub     di, ax ;~ 24ED:179C
cs=0x24ed;eip=0x00179e; 	J(JLE(nullsub_22));	// 108928 jle     short near ptr nullsub_22 ;~ 24ED:179E
cs=0x24ed;eip=0x0017a0; 	T(ADD(dx, ax));	// 108929 add     dx, ax ;~ 24ED:17A0
cs=0x24ed;eip=0x0017a2; 	T(ADD(si, ax));	// 108930 add     si, ax ;~ 24ED:17A2
cs=0x24ed;eip=0x0017a4; 	X(PUSH(di));	// 108931 push    di ;~ 24ED:17A4
cs=0x24ed;eip=0x0017a5; 	J(CALL(sub_340a8,0));	// 108932 call    sub_340A8 ;~ 24ED:17A5
cs=0x24ed;eip=0x0017a8; 	X(POP(dx));	// 108933 pop     dx ;~ 24ED:17A8
cs=0x24ed;eip=0x0017a9; 	T(MOV(bx, cx));	// 108934 mov     bx, cx ;~ 24ED:17A9
loc_34c5b:
	// 7209 
cs=0x24ed;eip=0x0017ab; 	T(SUB(bp, dx));	// 108938 sub     bp, dx ;~ 24ED:17AB
loc_34c5d:
	// 7210 
cs=0x24ed;eip=0x0017ad; 	T(MOV(cx, dx));	// 108941 mov     cx, dx ;~ 24ED:17AD
loc_34c5f:
	// 7211 
cs=0x24ed;eip=0x0017af; 	T(LODSB);	// 108945 lodsb ;~ 24ED:17AF
cs=0x24ed;eip=0x0017b0; 	T(OR(al, al));	// 108946 or      al, al ;~ 24ED:17B0
cs=0x24ed;eip=0x0017b2; 	J(JZ(loc_34c73));	// 108947 jz      short loc_34C73 ;~ 24ED:17B2
cs=0x24ed;eip=0x0017b4; 	X(STOSB);	// 108948 stosb ;~ 24ED:17B4
cs=0x24ed;eip=0x0017b5; 	J(LOOP(loc_34c5f));	// 108949 loop    loc_34C5F ;~ 24ED:17B5
loc_34c67:
	// 7212 
cs=0x24ed;eip=0x0017b7; 	T(SUB(di, dx));	// 108952 sub     di, dx ;~ 24ED:17B7
cs=0x24ed;eip=0x0017b9; 	T(ADD(si, bp));	// 108953 add     si, bp ;~ 24ED:17B9
cs=0x24ed;eip=0x0017bb; 	T(ADD(di, 0x140));	// 108954 add     di, 140h ;~ 24ED:17BB
cs=0x24ed;eip=0x0017bf; 	T(DEC(bx));	// 108955 dec     bx ;~ 24ED:17BF
cs=0x24ed;eip=0x0017c0; 	J(JNZ(loc_34c5d));	// 108956 jnz     short loc_34C5D ;~ 24ED:17C0
cs=0x24ed;eip=0x0017c2; 	J(RETF(0));	// 108957 retf ;~ 24ED:17C2
loc_34c73:
	// 7213 
cs=0x24ed;eip=0x0017c3; 	T(INC(di));	// 108961 inc     di ;~ 24ED:17C3
cs=0x24ed;eip=0x0017c4; 	J(LOOP(loc_34c5f));	// 108962 loop    loc_34C5F ;~ 24ED:17C4
cs=0x24ed;eip=0x0017c6; 	J(JMP(loc_34c67));	// 108963 jmp     short loc_34C67 ;~ 24ED:17C6
loc_34c78:
	// 7214 
cs=0x24ed;eip=0x0017c8; 	X(MOV(*(dw*)(raddr(cs,m2c::kloc_349fb+1)), di));	// 108967 mov     word ptr cs:loc_349FB+1, di ;~ 24ED:17C8
cs=0x24ed;eip=0x0017cd; 	T(SUB(di, ax));	// 108968 sub     di, ax ;~ 24ED:17CD
cs=0x24ed;eip=0x0017cf; 	J(JLE(nullsub_22));	// 108969 jle     short near ptr nullsub_22 ;~ 24ED:17CF
cs=0x24ed;eip=0x0017d1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 108970 mov     ax, [bp+0] ;~ 24ED:17D1
cs=0x24ed;eip=0x0017d4; 	T(SUB(ax, dx));	// 108971 sub     ax, dx ;~ 24ED:17D4
cs=0x24ed;eip=0x0017d6; 	J(JG(loc_34c96));	// 108972 jg      short loc_34C96 ;~ 24ED:17D6
cs=0x24ed;eip=0x0017d8; 	X(PUSH(di));	// 108973 push    di ;~ 24ED:17D8
cs=0x24ed;eip=0x0017d9; 	J(CALL(sub_340a8,0));	// 108974 call    sub_340A8 ;~ 24ED:17D9
cs=0x24ed;eip=0x0017dc; 	X(POP(dx));	// 108975 pop     dx ;~ 24ED:17DC
cs=0x24ed;eip=0x0017dd; 	T(MOV(bp, *(dw*)(raddr(cs,m2c::kloc_349fb+1))));	// 108976 mov     bp, word ptr cs:loc_349FB+1 ;~ 24ED:17DD
cs=0x24ed;eip=0x0017e2; 	T(MOV(bx, cx));	// 108977 mov     bx, cx ;~ 24ED:17E2
cs=0x24ed;eip=0x0017e4; 	J(JMP(loc_34c5b));	// 108978 jmp     short loc_34C5B ;~ 24ED:17E4
loc_34c96:
	// 7215 
cs=0x24ed;eip=0x0017e6; 	T(SUB(di, ax));	// 108982 sub     di, ax ;~ 24ED:17E6
cs=0x24ed;eip=0x0017e8; 	J(JLE(nullsub_22));	// 108983 jle     short near ptr nullsub_22 ;~ 24ED:17E8
cs=0x24ed;eip=0x0017ea; 	T(ADD(si, ax));	// 108984 add     si, ax ;~ 24ED:17EA
cs=0x24ed;eip=0x0017ec; 	T(ADD(dx, ax));	// 108985 add     dx, ax ;~ 24ED:17EC
cs=0x24ed;eip=0x0017ee; 	X(PUSH(di));	// 108986 push    di ;~ 24ED:17EE
cs=0x24ed;eip=0x0017ef; 	J(CALL(sub_340a8,0));	// 108987 call    sub_340A8 ;~ 24ED:17EF
cs=0x24ed;eip=0x0017f2; 	X(POP(dx));	// 108988 pop     dx ;~ 24ED:17F2
cs=0x24ed;eip=0x0017f3; 	T(MOV(bp, *(dw*)(raddr(cs,m2c::kloc_349fb+1))));	// 108989 mov     bp, word ptr cs:loc_349FB+1 ;~ 24ED:17F3
cs=0x24ed;eip=0x0017f8; 	T(MOV(bx, cx));	// 108990 mov     bx, cx ;~ 24ED:17F8
cs=0x24ed;eip=0x0017fa; 	J(JMP(loc_34c5b));	// 108991 jmp     short loc_34C5B ;~ 24ED:17FA

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_340c4: 	goto loc_340c4;
        case m2c::kloc_340cb: 	goto loc_340cb;
        case m2c::kloc_340d2: 	goto loc_340d2;
        case m2c::kloc_340d9: 	goto loc_340d9;
        case m2c::kloc_340dd: 	goto loc_340dd;
        case m2c::kloc_340e9: 	goto loc_340e9;
        case m2c::kloc_340f8: 	goto loc_340f8;
        case m2c::kloc_340ff: 	goto loc_340ff;
        case m2c::kloc_34106: 	goto loc_34106;
        case m2c::kloc_3410d: 	goto loc_3410d;
        case m2c::kloc_34113: 	goto loc_34113;
        case m2c::kloc_34118: 	goto loc_34118;
        case m2c::kloc_34136: 	goto loc_34136;
        case m2c::kloc_3413a: 	goto loc_3413a;
        case m2c::kloc_3413f: 	goto loc_3413f;
        case m2c::kloc_34149: 	goto loc_34149;
        case m2c::kloc_3414d: 	goto loc_3414d;
        case m2c::kloc_34157: 	goto loc_34157;
        case m2c::kloc_3415d: 	goto loc_3415d;
        case m2c::kloc_34164: 	goto loc_34164;
        case m2c::kloc_34168: 	goto loc_34168;
        case m2c::kloc_34176: 	goto loc_34176;
        case m2c::kloc_34184: 	goto loc_34184;
        case m2c::kloc_34193: 	goto loc_34193;
        case m2c::kloc_341a2: 	goto loc_341a2;
        case m2c::kloc_341a7: 	goto loc_341a7;
        case m2c::kloc_341ac: 	goto loc_341ac;
        case m2c::kloc_341b7: 	goto loc_341b7;
        case m2c::kloc_341bb: 	goto loc_341bb;
        case m2c::kloc_341c6: 	goto loc_341c6;
        case m2c::kloc_341ca: 	goto loc_341ca;
        case m2c::kloc_341ce: 	goto loc_341ce;
        case m2c::kloc_341d9: 	goto loc_341d9;
        case m2c::kloc_342af: 	goto loc_342af;
        case m2c::kloc_342b3: 	goto loc_342b3;
        case m2c::kloc_342b7: 	goto loc_342b7;
        case m2c::kloc_342c3: 	goto loc_342c3;
        case m2c::kloc_342d2: 	goto loc_342d2;
        case m2c::kloc_342e0: 	goto loc_342e0;
        case m2c::kloc_342ec: 	goto loc_342ec;
        case m2c::kloc_34305: 	goto loc_34305;
        case m2c::kloc_34310: 	goto loc_34310;
        case m2c::kloc_34314: 	goto loc_34314;
        case m2c::kloc_34318: 	goto loc_34318;
        case m2c::kloc_34326: 	goto loc_34326;
        case m2c::kloc_34339: 	goto loc_34339;
        case m2c::kloc_34345: 	goto loc_34345;
        case m2c::kloc_34361: 	goto loc_34361;
        case m2c::kloc_3436d: 	goto loc_3436d;
        case m2c::kloc_34371: 	goto loc_34371;
        case m2c::kloc_34375: 	goto loc_34375;
        case m2c::kloc_3438b: 	goto loc_3438b;
        case m2c::kloc_3439f: 	goto loc_3439f;
        case m2c::kloc_343a3: 	goto loc_343a3;
        case m2c::kloc_343a7: 	goto loc_343a7;
        case m2c::kloc_343b5: 	goto loc_343b5;
        case m2c::kloc_343c5: 	goto loc_343c5;
        case m2c::kloc_343e5: 	goto loc_343e5;
        case m2c::kloc_343f6: 	goto loc_343f6;
        case m2c::kloc_3440f: 	goto loc_3440f;
        case m2c::kloc_34456: 	goto loc_34456;
        case m2c::kloc_34459: 	goto loc_34459;
        case m2c::kloc_3447b: 	goto loc_3447b;
        case m2c::kloc_3448a: 	goto loc_3448a;
        case m2c::kloc_344ae: 	goto loc_344ae;
        case m2c::kloc_344bb: 	goto loc_344bb;
        case m2c::kloc_344c9: 	goto loc_344c9;
        case m2c::kloc_344d7: 	goto loc_344d7;
        case m2c::kloc_344d9: 	goto loc_344d9;
        case m2c::kloc_344dd: 	goto loc_344dd;
        case m2c::kloc_344ed: 	goto loc_344ed;
        case m2c::kloc_344f8: 	goto loc_344f8;
        case m2c::kloc_3452f: 	goto loc_3452f;
        case m2c::kloc_34539: 	goto loc_34539;
        case m2c::kloc_3453c: 	goto loc_3453c;
        case m2c::kloc_3455f: 	goto loc_3455f;
        case m2c::kloc_3456d: 	goto loc_3456d;
        case m2c::kloc_34576: 	goto loc_34576;
        case m2c::kloc_34586: 	goto loc_34586;
        case m2c::kloc_34588: 	goto loc_34588;
        case m2c::kloc_34594: 	goto loc_34594;
        case m2c::kloc_345ab: 	goto loc_345ab;
        case m2c::kloc_345b1: 	goto loc_345b1;
        case m2c::kloc_345c6: 	goto loc_345c6;
        case m2c::kloc_345d0: 	goto loc_345d0;
        case m2c::kloc_345d5: 	goto loc_345d5;
        case m2c::kloc_345e0: 	goto loc_345e0;
        case m2c::kloc_345ec: 	goto loc_345ec;
        case m2c::kloc_345f4: 	goto loc_345f4;
        case m2c::kloc_34600: 	goto loc_34600;
        case m2c::kloc_3460c: 	goto loc_3460c;
        case m2c::kloc_34610: 	goto loc_34610;
        case m2c::kloc_34623: 	goto loc_34623;
        case m2c::kloc_34628: 	goto loc_34628;
        case m2c::kloc_3462d: 	goto loc_3462d;
        case m2c::kloc_34633: 	goto loc_34633;
        case m2c::kloc_3463b: 	goto loc_3463b;
        case m2c::kloc_34656: 	goto loc_34656;
        case m2c::kloc_3465c: 	goto loc_3465c;
        case m2c::kloc_34662: 	goto loc_34662;
        case m2c::kloc_34666: 	goto loc_34666;
        case m2c::kloc_3466c: 	goto loc_3466c;
        case m2c::kloc_34672: 	goto loc_34672;
        case m2c::kloc_34683: 	goto loc_34683;
        case m2c::kloc_3468e: 	goto loc_3468e;
        case m2c::kloc_34690: 	goto loc_34690;
        case m2c::kloc_3469c: 	goto loc_3469c;
        case m2c::kloc_346b3: 	goto loc_346b3;
        case m2c::kloc_346b9: 	goto loc_346b9;
        case m2c::kloc_346ce: 	goto loc_346ce;
        case m2c::kloc_346d8: 	goto loc_346d8;
        case m2c::kloc_346e5: 	goto loc_346e5;
        case m2c::kloc_346f1: 	goto loc_346f1;
        case m2c::kloc_346fd: 	goto loc_346fd;
        case m2c::kloc_34705: 	goto loc_34705;
        case m2c::kloc_34711: 	goto loc_34711;
        case m2c::kloc_3471d: 	goto loc_3471d;
        case m2c::kloc_34733: 	goto loc_34733;
        case m2c::kloc_34738: 	goto loc_34738;
        case m2c::kloc_3473d: 	goto loc_3473d;
        case m2c::kloc_34743: 	goto loc_34743;
        case m2c::kloc_3474b: 	goto loc_3474b;
        case m2c::kloc_34768: 	goto loc_34768;
        case m2c::kloc_3476e: 	goto loc_3476e;
        case m2c::kloc_34772: 	goto loc_34772;
        case m2c::kloc_34778: 	goto loc_34778;
        case m2c::kloc_3477c: 	goto loc_3477c;
        case m2c::kloc_34793: 	goto loc_34793;
        case m2c::kloc_3479c: 	goto loc_3479c;
        case m2c::kloc_347a1: 	goto loc_347a1;
        case m2c::kloc_347ab: 	goto loc_347ab;
        case m2c::kloc_347ad: 	goto loc_347ad;
        case m2c::kloc_347b9: 	goto loc_347b9;
        case m2c::kloc_347c7: 	goto loc_347c7;
        case m2c::kloc_347cd: 	goto loc_347cd;
        case m2c::kloc_347d7: 	goto loc_347d7;
        case m2c::kloc_347e6: 	goto loc_347e6;
        case m2c::kloc_34814: 	goto loc_34814;
        case m2c::kloc_34824: 	goto loc_34824;
        case m2c::kloc_3482e: 	goto loc_3482e;
        case m2c::kloc_34831: 	goto loc_34831;
        case m2c::kloc_3483e: 	goto loc_3483e;
        case m2c::kloc_34865: 	goto loc_34865;
        case m2c::kloc_3488c: 	goto loc_3488c;
        case m2c::kloc_348ae: 	goto loc_348ae;
        case m2c::kloc_348c2: 	goto loc_348c2;
        case m2c::kloc_348f1: 	goto loc_348f1;
        case m2c::kloc_348f6: 	goto loc_348f6;
        case m2c::kloc_34903: 	goto loc_34903;
        case m2c::kloc_3492a: 	goto loc_3492a;
        case m2c::kloc_3496e: 	goto loc_3496e;
        case m2c::kloc_3499e: 	goto loc_3499e;
        case m2c::kloc_349fb: 	goto loc_349fb;
        case m2c::kloc_349ff: 	goto loc_349ff;
        case m2c::kloc_34a10: 	goto loc_34a10;
        case m2c::kloc_34a15: 	goto loc_34a15;
        case m2c::kloc_34a1f: 	goto loc_34a1f;
        case m2c::kloc_34a31: 	goto loc_34a31;
        case m2c::kloc_34a3b: 	goto loc_34a3b;
        case m2c::kloc_34a42: 	goto loc_34a42;
        case m2c::kloc_34a48: 	goto loc_34a48;
        case m2c::kloc_34a50: 	goto loc_34a50;
        case m2c::kloc_34a58: 	goto loc_34a58;
        case m2c::kloc_34a5e: 	goto loc_34a5e;
        case m2c::kloc_34a65: 	goto loc_34a65;
        case m2c::kloc_34a76: 	goto loc_34a76;
        case m2c::kloc_34a7b: 	goto loc_34a7b;
        case m2c::kloc_34a85: 	goto loc_34a85;
        case m2c::kloc_34a89: 	goto loc_34a89;
        case m2c::kloc_34a94: 	goto loc_34a94;
        case m2c::kloc_34a97: 	goto loc_34a97;
        case m2c::kloc_34aa1: 	goto loc_34aa1;
        case m2c::kloc_34aa8: 	goto loc_34aa8;
        case m2c::kloc_34aae: 	goto loc_34aae;
        case m2c::kloc_34ab5: 	goto loc_34ab5;
        case m2c::kloc_34abd: 	goto loc_34abd;
        case m2c::kloc_34ac3: 	goto loc_34ac3;
        case m2c::kloc_34ad4: 	goto loc_34ad4;
        case m2c::kloc_34ae0: 	goto loc_34ae0;
        case m2c::kloc_34af1: 	goto loc_34af1;
        case m2c::kloc_34af4: 	goto loc_34af4;
        case m2c::kloc_34afa: 	goto loc_34afa;
        case m2c::kloc_34b0f: 	goto loc_34b0f;
        case m2c::kloc_34b18: 	goto loc_34b18;
        case m2c::kloc_34b26: 	goto loc_34b26;
        case m2c::kloc_34b2d: 	goto loc_34b2d;
        case m2c::kloc_34b31: 	goto loc_34b31;
        case m2c::kloc_34b36: 	goto loc_34b36;
        case m2c::kloc_34b39: 	goto loc_34b39;
        case m2c::kloc_34b47: 	goto loc_34b47;
        case m2c::kloc_34b57: 	goto loc_34b57;
        case m2c::kloc_34b61: 	goto loc_34b61;
        case m2c::kloc_34b64: 	goto loc_34b64;
        case m2c::kloc_34b6d: 	goto loc_34b6d;
        case m2c::kloc_34b82: 	goto loc_34b82;
        case m2c::kloc_34b8b: 	goto loc_34b8b;
        case m2c::kloc_34b99: 	goto loc_34b99;
        case m2c::kloc_34b9d: 	goto loc_34b9d;
        case m2c::kloc_34ba0: 	goto loc_34ba0;
        case m2c::kloc_34ba4: 	goto loc_34ba4;
        case m2c::kloc_34ba9: 	goto loc_34ba9;
        case m2c::kloc_34bac: 	goto loc_34bac;
        case m2c::kloc_34bba: 	goto loc_34bba;
        case m2c::kloc_34bca: 	goto loc_34bca;
        case m2c::kloc_34bd4: 	goto loc_34bd4;
        case m2c::kloc_34bd7: 	goto loc_34bd7;
        case m2c::kloc_34bea: 	goto loc_34bea;
        case m2c::kloc_34bf8: 	goto loc_34bf8;
        case m2c::kloc_34c0c: 	goto loc_34c0c;
        case m2c::kloc_34c1b: 	goto loc_34c1b;
        case m2c::kloc_34c20: 	goto loc_34c20;
        case m2c::kloc_34c2d: 	goto loc_34c2d;
        case m2c::kloc_34c5b: 	goto loc_34c5b;
        case m2c::kloc_34c5d: 	goto loc_34c5d;
        case m2c::kloc_34c5f: 	goto loc_34c5f;
        case m2c::kloc_34c67: 	goto loc_34c67;
        case m2c::kloc_34c73: 	goto loc_34c73;
        case m2c::kloc_34c78: 	goto loc_34c78;
        case m2c::kloc_34c96: 	goto loc_34c96;
        case m2c::klocret_34864: 	goto locret_34864;
        case m2c::klocret_34929: 	goto locret_34929;
        case m2c::klocret_34bab: 	goto locret_34bab;
        case m2c::knullsub_22: 	goto nullsub_22;
        case m2c::kret_24ed_fd5: 	goto ret_24ed_fd5;
        case m2c::kseg002_179a_proc: 	goto seg002_179a_proc;
        case m2c::ksub_343dd: 	goto sub_343dd;
        case m2c::ksub_348c5: 	goto sub_348c5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3420d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3420d:
    _begin:
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000d5d; 	X(MOV(*(&byte_3364e), ch));	// 107107 mov     cs:byte_3364E, ch ;~ 24ED:0D5D
cs=0x24ed;eip=0x000d62; 	T(XOR(ch, ch));	// 107108 xor     ch, ch ;~ 24ED:0D62
cs=0x24ed;eip=0x000d64; 	T(AND(ax, 0x3FF));	// 107109 and     ax, 3FFh ;~ 24ED:0D64
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000d67; 	X(MOV(*(dw*)(((db*)&word_34209)), ax));	// 107110 mov     cs:word_34209, ax ;~ 24ED:0D67
cs=0x24ed;eip=0x000d6b; 	T(MOV(ax, di));	// 107111 mov     ax, di ;~ 24ED:0D6B
cs=0x24ed;eip=0x000d6d; 	T(AND(di, 0x1FF));	// 107112 and     di, 1FFh ;~ 24ED:0D6D
cs=0x24ed;eip=0x000d71; 	T(ADD(di, 3));	// 107113 add     di, 3 ;~ 24ED:0D71
cs=0x24ed;eip=0x000d74; 	T(SHR(di, 2));	// 107114 shr     di, 2 ;~ 24ED:0D74
cs=0x24ed;eip=0x000d77; 	T(SHL(di, 1));	// 107115 shl     di, 1 ;~ 24ED:0D77
cs=0x24ed;eip=0x000d79; 	X(MOV(*(dw*)(raddr(cs,m2c::kloc_34264+1)), di));	// 107116 mov     word ptr cs:loc_34264+1, di ;~ 24ED:0D79
cs=0x24ed;eip=0x000d7e; 	X(MOV(*(raddr(cs,m2c::kloc_34294+1)), 0x0C7));	// 107117 mov     byte ptr cs:loc_34294+1, 0C7h ; 'Ç' ;~ 24ED:0D7E
cs=0x24ed;eip=0x000d84; 	T(TEST(ax, 0x2000));	// 107118 test    ax, 2000h ;~ 24ED:0D84
cs=0x24ed;eip=0x000d87; 	J(JZ(loc_34242));	// 107119 jz      short loc_34242 ;~ 24ED:0D87
cs=0x24ed;eip=0x000d89; 	X(MOV(*(raddr(cs,m2c::kloc_34294+1)), 0x0EF));	// 107121 mov     byte ptr cs:loc_34294+1, 0EFh ; 'ï' ;~ 24ED:0D89
cs=0x24ed;eip=0x000d8f; 	T(ADD(bx, cx));	// 107122 add     bx, cx ;~ 24ED:0D8F
cs=0x24ed;eip=0x000d91; 	T(DEC(bx));	// 107123 dec     bx ;~ 24ED:0D91
loc_34242:
	// 7017 
cs=0x24ed;eip=0x000d92; 	X(MOV(*(raddr(cs,m2c::kloc_342a8)), 0x47));	// 107126 mov     byte ptr cs:loc_342A8, 47h ; 'G' ;~ 24ED:0D92
cs=0x24ed;eip=0x000d98; 	T(TEST(ax, 0x4000));	// 107127 test    ax, 4000h ;~ 24ED:0D98
cs=0x24ed;eip=0x000d9b; 	J(JZ(loc_3425a));	// 107128 jz      short loc_3425A ;~ 24ED:0D9B
cs=0x24ed;eip=0x000d9d; 	X(MOV(*(raddr(cs,m2c::kloc_342a8)), 0x4F));	// 107129 mov     byte ptr cs:loc_342A8, 4Fh ; 'O' ;~ 24ED:0D9D
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000da3; 	T(ADD(dx, *(dw*)(((db*)&word_34209))));	// 107130 add     dx, cs:word_34209 ;~ 24ED:0DA3
cs=0x24ed;eip=0x000da8; 	T(DEC(dx));	// 107131 dec     dx ;~ 24ED:0DA8
cs=0x24ed;eip=0x000da9; 	T(STD);	// 107132 std ;~ 24ED:0DA9
loc_3425a:
	// 7018 
cs=0x24ed;eip=0x000daa; 	J(CALL(sub_340a8,0));	// 107135 call    sub_340A8 ;~ 24ED:0DAA
cs=0x24ed;eip=0x000dad; 	T(XOR(bx, bx));	// 107136 xor     bx, bx ;~ 24ED:0DAD
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000daf; 	X(MOV(*(dw*)(((db*)&word_3420b)), bx));	// 107137 mov     cs:word_3420B, bx ;~ 24ED:0DAF
loc_34264:
	// 7019 
cs=0x24ed;eip=0x000db4; 	T(MOV(ax, 2));	// 107141 mov     ax, 2 ;~ 24ED:0DB4
cs=0x24ed;eip=0x000db7; 	X(PUSH(si));	// 107142 push    si ;~ 24ED:0DB7
cs=0x24ed;eip=0x000db8; 	T(MUL1_1(bh));	// 107143 mul     bh ;~ 24ED:0DB8
cs=0x24ed;eip=0x000dba; 	T(ADD(si, ax));	// 107144 add     si, ax ;~ 24ED:0DBA
cs=0x24ed;eip=0x000dbc; 	X(PUSH(di));	// 107145 push    di ;~ 24ED:0DBC
cs=0x24ed;eip=0x000dbd; 	X(PUSH(cx));	// 107146 push    cx ;~ 24ED:0DBD
cs=0x24ed;eip=0x000dbe; 	T(XOR(dx, dx));	// 107147 xor     dx, dx ;~ 24ED:0DBE
cs=0x24ed;eip=0x000dc0; 	T(MOV(bx, si));	// 107148 mov     bx, si ;~ 24ED:0DC0
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000dc2; 	T(MOV(cx, *(dw*)(((db*)&word_34209))));	// 107149 mov     cx, cs:word_34209 ;~ 24ED:0DC2
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000dc7; 	T(MOV(ah, *(&byte_3364e)));	// 107150 mov     ah, cs:byte_3364E ;~ 24ED:0DC7
loc_3427c:
	// 7020 
cs=0x24ed;eip=0x000dcc; 	T(MOV(al, dh));	// 107154 mov     al, dh ;~ 24ED:0DCC
cs=0x24ed;eip=0x000dce; 	T(SHR(al, 1));	// 107155 shr     al, 1 ;~ 24ED:0DCE
cs=0x24ed;eip=0x000dd0; 	T(XLAT);	// 107156 xlat ;~ 24ED:0DD0
cs=0x24ed;eip=0x000dd1; 	J(JNC(loc_34286));	// 107157 jnb     short loc_34286 ;~ 24ED:0DD1
cs=0x24ed;eip=0x000dd3; 	T(SHR(al, 4));	// 107158 shr     al, 4 ;~ 24ED:0DD3
loc_34286:
	// 7021 
cs=0x24ed;eip=0x000dd6; 	T(AND(al, 0x0F));	// 107161 and     al, 0Fh ;~ 24ED:0DD6
cs=0x24ed;eip=0x000dd8; 	J(JZ(loc_342a8));	// 107162 jz      short loc_342A8 ;~ 24ED:0DD8
cs=0x24ed;eip=0x000dda; 	T(ADD(al, ah));	// 107163 add     al, ah ;~ 24ED:0DDA
cs=0x24ed;eip=0x000ddc; 	X(STOSB);	// 107164 stosb ;~ 24ED:0DDC
cs=0x24ed;eip=0x000ddd; 	T(ADD(dx, bp));	// 107165 add     dx, bp ;~ 24ED:0DDD
cs=0x24ed;eip=0x000ddf; 	J(LOOP(loc_3427c));	// 107166 loop    loc_3427C ;~ 24ED:0DDF
loc_34291:
	// 7022 
cs=0x24ed;eip=0x000de1; 	X(POP(cx));	// 107169 pop     cx ;~ 24ED:0DE1
cs=0x24ed;eip=0x000de2; 	X(POP(di));	// 107170 pop     di ;~ 24ED:0DE2
cs=0x24ed;eip=0x000de3; 	X(POP(si));	// 107171 pop     si ;~ 24ED:0DE3
loc_34294:
	// 7023 
cs=0x24ed;eip=0x000de4; 	T(ADD(di, 0x140));	// 107175 add     di, 140h ;~ 24ED:0DE4
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000de8; 	T(MOV(bx, *(dw*)(((db*)&word_3420b))));	// 107176 mov     bx, cs:word_3420B ;~ 24ED:0DE8
cs=0x24ed;eip=0x000ded; 	T(ADD(bx, bp));	// 107177 add     bx, bp ;~ 24ED:0DED
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000def; 	X(MOV(*(dw*)(((db*)&word_3420b)), bx));	// 107178 mov     cs:word_3420B, bx ;~ 24ED:0DEF
cs=0x24ed;eip=0x000df4; 	J(LOOP(loc_34264));	// 107179 loop    loc_34264 ;~ 24ED:0DF4
cs=0x24ed;eip=0x000df6; 	T(CLD);	// 107180 cld ;~ 24ED:0DF6
cs=0x24ed;eip=0x000df7; 	J(RETF(0));	// 107181 retf ;~ 24ED:0DF7
loc_342a8:
	// 7024 
cs=0x24ed;eip=0x000df8; 	T(DEC(di));	// 107186 dec     di ;~ 24ED:0DF8
cs=0x24ed;eip=0x000df9; 	T(ADD(dx, bp));	// 107187 add     dx, bp ;~ 24ED:0DF9
cs=0x24ed;eip=0x000dfb; 	J(LOOP(loc_3427c));	// 107188 loop    loc_3427C ;~ 24ED:0DFB
cs=0x24ed;eip=0x000dfd; 	J(JMP(loc_34291));	// 107189 jmp     short loc_34291 ;~ 24ED:0DFD

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_34242: 	goto loc_34242;
        case m2c::kloc_3425a: 	goto loc_3425a;
        case m2c::kloc_34264: 	goto loc_34264;
        case m2c::kloc_3427c: 	goto loc_3427c;
        case m2c::kloc_34286: 	goto loc_34286;
        case m2c::kloc_34291: 	goto loc_34291;
        case m2c::kloc_34294: 	goto loc_34294;
        case m2c::kloc_342a8: 	goto loc_342a8;
        case m2c::ksub_3420d: 	goto sub_3420d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_34cac(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_34cac:
    _begin:
cs=0x24ed;eip=0x0017fc; 	T(LODSW);	// 108999 lodsw ;~ 24ED:17FC
cs=0x24ed;eip=0x0017fd; 	T(SUB(dx, ax));	// 109000 sub     dx, ax ;~ 24ED:17FD
cs=0x24ed;eip=0x0017ff; 	J(JNC(loc_34cb3));	// 109001 jnb     short loc_34CB3 ;~ 24ED:17FF
cs=0x24ed;eip=0x001801; 	T(XOR(dx, dx));	// 109002 xor     dx, dx ;~ 24ED:1801
loc_34cb3:
	// 7216 
cs=0x24ed;eip=0x001803; 	T(LODSW);	// 109005 lodsw ;~ 24ED:1803
cs=0x24ed;eip=0x001804; 	T(SUB(bx, ax));	// 109006 sub     bx, ax ;~ 24ED:1804
cs=0x24ed;eip=0x001806; 	J(JNC(loc_34cba));	// 109007 jnb     short loc_34CBA ;~ 24ED:1806
cs=0x24ed;eip=0x001808; 	T(XOR(bx, bx));	// 109008 xor     bx, bx ;~ 24ED:1808
loc_34cba:
	// 7217 
cs=0x24ed;eip=0x00180a; 	T(MOV(cx, 0x10));	// 109011 mov     cx, 10h ;~ 24ED:180A
cs=0x24ed;eip=0x00180d; 	T(CMP(bx, 0x0B8));	// 109012 cmp     bx, 0B8h ; '¸' ;~ 24ED:180D
cs=0x24ed;eip=0x001811; 	J(JBE(loc_34cc8));	// 109013 jbe     short loc_34CC8 ;~ 24ED:1811
cs=0x24ed;eip=0x001813; 	T(MOV(cx, 0x0C8));	// 109014 mov     cx, 0C8h ; 'È' ;~ 24ED:1813
cs=0x24ed;eip=0x001816; 	T(SUB(cx, bx));	// 109015 sub     cx, bx ;~ 24ED:1816
loc_34cc8:
	// 7218 
cs=0x24ed;eip=0x001818; 	J(CALL(sub_340a8,0));	// 109018 call    sub_340A8 ;~ 24ED:1818
cs=0x24ed;eip=0x00181b; 	T(MOV(ax, 0x0A000));	// 109019 mov     ax, 0A000h ;~ 24ED:181B
cs=0x24ed;eip=0x00181e; 	T(MOV(es, ax));	// 109020 mov     es, ax ;~ 24ED:181E
cs=0x24ed;eip=0x001820; 	T(SUB(dx, 0x140));	// 109022 sub     dx, 140h ;~ 24ED:1820
cs=0x24ed;eip=0x001824; 	T(NEG(dx));	// 109023 neg     dx ;~ 24ED:1824
cs=0x24ed;eip=0x001826; 	T(CMP(dx, 0x10));	// 109024 cmp     dx, 10h ;~ 24ED:1826
cs=0x24ed;eip=0x001829; 	J(JBE(loc_34cde));	// 109025 jbe     short loc_34CDE ;~ 24ED:1829
cs=0x24ed;eip=0x00182b; 	T(MOV(dx, 0x10));	// 109026 mov     dx, 10h ;~ 24ED:182B
loc_34cde:
	// 7219 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00182e; 	X(MOV(*(dw*)(((db*)&word_3363c)), dx));	// 109029 mov     cs:word_3363C, dx ;~ 24ED:182E
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001833; 	X(MOV(*(dw*)(((db*)&word_3363e)), cx));	// 109030 mov     cs:word_3363E, cx ;~ 24ED:1833
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001838; 	X(MOV(*(dw*)(((db*)&word_3363a)), di));	// 109031 mov     cs:word_3363A, di ;~ 24ED:1838
cs=0x24ed;eip=0x00183d; 	T(MOV(bx, 0x0FA00));	// 109032 mov     bx, 0FA00h ;~ 24ED:183D
cs=0x24ed;eip=0x001840; 	T(SHR(dx, 1));	// 109033 shr     dx, 1 ;~ 24ED:1840
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001842; 	X(MOV(*(dw*)(((db*)&word_33640)), dx));	// 109034 mov     cs:word_33640, dx ;~ 24ED:1842
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001847; 	X(MOV(*(dw*)(((db*)&word_33642)), cx));	// 109035 mov     cs:word_33642, cx ;~ 24ED:1847
loc_34cfc:
	// 7220 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00184c; 	T(MOV(cx, *(dw*)(((db*)&word_33640))));	// 109038 mov     cx, cs:word_33640 ;~ 24ED:184C
cs=0x24ed;eip=0x001851; 	T(MOV(bp, *(dw*)(raddr(ds,si+0x20))));	// 109039 mov     bp, [si+20h] ;~ 24ED:1851
cs=0x24ed;eip=0x001854; 	T(LODSW);	// 109040 lodsw ;~ 24ED:1854
cs=0x24ed;eip=0x001855; 	T(MOV(dx, ax));	// 109041 mov     dx, ax ;~ 24ED:1855
cs=0x24ed;eip=0x001857; 	J(JCXZ(loc_34d35));	// 109042 jcxz    short loc_34D35 ;~ 24ED:1857
loc_34d09:
	// 7221 
cs=0x24ed;eip=0x001859; 	T(MOV(ax, *(dw*)(raddr(es,di))));	// 109045 mov     ax, es:[di] ;~ 24ED:1859
cs=0x24ed;eip=0x00185c; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 109046 mov     es:[bx], ax ;~ 24ED:185C
cs=0x24ed;eip=0x00185f; 	T(ADD(bx, 2));	// 109047 add     bx, 2 ;~ 24ED:185F
cs=0x24ed;eip=0x001862; 	T(ROL(bp, 1));	// 109048 rol     bp, 1 ;~ 24ED:1862
cs=0x24ed;eip=0x001864; 	T(ADD(dx, dx));	// 109049 add     dx, dx ;~ 24ED:1864
cs=0x24ed;eip=0x001866; 	J(JC(loc_34d22));	// 109050 jb      short loc_34D22 ;~ 24ED:1866
cs=0x24ed;eip=0x001868; 	T(XOR(al, al));	// 109051 xor     al, al ;~ 24ED:1868
cs=0x24ed;eip=0x00186a; 	T(TEST(bp, 1));	// 109052 test    bp, 1 ;~ 24ED:186A
cs=0x24ed;eip=0x00186e; 	J(JZ(loc_34d22));	// 109053 jz      short loc_34D22 ;~ 24ED:186E
cs=0x24ed;eip=0x001870; 	T(MOV(al, 0x0F));	// 109054 mov     al, 0Fh ;~ 24ED:1870
loc_34d22:
	// 7222 
cs=0x24ed;eip=0x001872; 	T(ROL(bp, 1));	// 109058 rol     bp, 1 ;~ 24ED:1872
cs=0x24ed;eip=0x001874; 	T(ADD(dx, dx));	// 109059 add     dx, dx ;~ 24ED:1874
cs=0x24ed;eip=0x001876; 	J(JC(loc_34d32));	// 109060 jb      short loc_34D32 ;~ 24ED:1876
cs=0x24ed;eip=0x001878; 	T(XOR(ah, ah));	// 109061 xor     ah, ah ;~ 24ED:1878
cs=0x24ed;eip=0x00187a; 	T(TEST(bp, 1));	// 109062 test    bp, 1 ;~ 24ED:187A
cs=0x24ed;eip=0x00187e; 	J(JZ(loc_34d32));	// 109063 jz      short loc_34D32 ;~ 24ED:187E
cs=0x24ed;eip=0x001880; 	T(MOV(ah, 0x0F));	// 109064 mov     ah, 0Fh ;~ 24ED:1880
loc_34d32:
	// 7223 
cs=0x24ed;eip=0x001882; 	X(STOSW);	// 109068 stosw ;~ 24ED:1882
cs=0x24ed;eip=0x001883; 	J(LOOP(loc_34d09));	// 109069 loop    loc_34D09 ;~ 24ED:1883
loc_34d35:
	// 7224 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001885; 	T(TEST(*(db*)(((db*)&word_3363c)), 1));	// 109072 test    byte ptr cs:word_3363C, 1 ;~ 24ED:1885
cs=0x24ed;eip=0x00188b; 	J(JZ(loc_34d53));	// 109073 jz      short loc_34D53 ;~ 24ED:188B
cs=0x24ed;eip=0x00188d; 	T(MOV(al, *(raddr(es,di))));	// 109074 mov     al, es:[di] ;~ 24ED:188D
cs=0x24ed;eip=0x001890; 	X(MOV(*(raddr(es,bx)), al));	// 109075 mov     es:[bx], al ;~ 24ED:1890
cs=0x24ed;eip=0x001893; 	T(INC(bx));	// 109076 inc     bx ;~ 24ED:1893
cs=0x24ed;eip=0x001894; 	T(INC(di));	// 109077 inc     di ;~ 24ED:1894
cs=0x24ed;eip=0x001895; 	T(ADD(dx, dx));	// 109078 add     dx, dx ;~ 24ED:1895
cs=0x24ed;eip=0x001897; 	J(JC(loc_34d53));	// 109079 jb      short loc_34D53 ;~ 24ED:1897
cs=0x24ed;eip=0x001899; 	T(XOR(al, al));	// 109080 xor     al, al ;~ 24ED:1899
cs=0x24ed;eip=0x00189b; 	T(ADD(bp, bp));	// 109081 add     bp, bp ;~ 24ED:189B
cs=0x24ed;eip=0x00189d; 	J(JNC(loc_34d51));	// 109082 jnb     short loc_34D51 ;~ 24ED:189D
cs=0x24ed;eip=0x00189f; 	T(MOV(al, 0x0F));	// 109083 mov     al, 0Fh ;~ 24ED:189F
loc_34d51:
	// 7225 
cs=0x24ed;eip=0x0018a1; 	T(DEC(di));	// 109086 dec     di ;~ 24ED:18A1
cs=0x24ed;eip=0x0018a2; 	X(STOSB);	// 109087 stosb ;~ 24ED:18A2
loc_34d53:
	// 7226 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0018a3; 	T(SUB(di, *(dw*)(((db*)&word_3363c))));	// 109091 sub     di, cs:word_3363C ;~ 24ED:18A3
cs=0x24ed;eip=0x0018a8; 	T(ADD(di, 0x140));	// 109092 add     di, 140h ;~ 24ED:18A8
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0018ac; 	X(DEC(*(dw*)(((db*)&word_33642))));	// 109093 dec     cs:word_33642 ;~ 24ED:18AC
cs=0x24ed;eip=0x0018b1; 	J(JNZ(loc_34cfc));	// 109094 jnz     short loc_34CFC ;~ 24ED:18B1
cs=0x24ed;eip=0x0018b3; 	J(RETF(0));	// 109095 retf ;~ 24ED:18B3

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_34cb3: 	goto loc_34cb3;
        case m2c::kloc_34cba: 	goto loc_34cba;
        case m2c::kloc_34cc8: 	goto loc_34cc8;
        case m2c::kloc_34cde: 	goto loc_34cde;
        case m2c::kloc_34cfc: 	goto loc_34cfc;
        case m2c::kloc_34d09: 	goto loc_34d09;
        case m2c::kloc_34d22: 	goto loc_34d22;
        case m2c::kloc_34d32: 	goto loc_34d32;
        case m2c::kloc_34d35: 	goto loc_34d35;
        case m2c::kloc_34d51: 	goto loc_34d51;
        case m2c::kloc_34d53: 	goto loc_34d53;
        case m2c::ksub_34cac: 	goto sub_34cac;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_34d64(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_34d64:
    _begin:
cs=0x24ed;eip=0x0018b4; 	X(PUSHA);	// 109103 pusha ;~ 24ED:18B4
cs=0x24ed;eip=0x0018b5; 	X(PUSH(ds));	// 109104 push    ds ;~ 24ED:18B5
cs=0x24ed;eip=0x0018b6; 	X(PUSH(es));	// 109105 push    es ;~ 24ED:18B6
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0018b7; 	T(MOV(bp, *(dw*)(((db*)&word_3363a))));	// 109106 mov     bp, cs:word_3363A ;~ 24ED:18B7
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0018bc; 	T(MOV(bx, *(dw*)(((db*)&word_3363c))));	// 109107 mov     bx, cs:word_3363C ;~ 24ED:18BC
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0018c1; 	T(MOV(dx, *(dw*)(((db*)&word_3363e))));	// 109108 mov     dx, cs:word_3363E ;~ 24ED:18C1
cs=0x24ed;eip=0x0018c6; 	T(MOV(ax, 0x0A000));	// 109109 mov     ax, 0A000h ;~ 24ED:18C6
cs=0x24ed;eip=0x0018c9; 	T(MOV(es, ax));	// 109110 mov     es, ax ;~ 24ED:18C9
cs=0x24ed;eip=0x0018cb; 	T(MOV(ds, ax));	// 109111 mov     ds, ax ;~ 24ED:18CB
cs=0x24ed;eip=0x0018cd; 	T(MOV(si, 0x0FA00));	// 109113 mov     si, 0FA00h ;~ 24ED:18CD
loc_34d80:
	// 7227 
cs=0x24ed;eip=0x0018d0; 	T(MOV(di, bp));	// 109116 mov     di, bp ;~ 24ED:18D0
cs=0x24ed;eip=0x0018d2; 	T(MOV(cx, bx));	// 109117 mov     cx, bx ;~ 24ED:18D2
	// 109118 rep movsb ;~ 24ED:18D4
cs=0x24ed;eip=0x0018d4; 	X(	REP MOVSB);	// 109118 rep movsb ;~ 24ED:18D4
cs=0x24ed;eip=0x0018d6; 	T(ADD(bp, 0x140));	// 109119 add     bp, 140h ;~ 24ED:18D6
cs=0x24ed;eip=0x0018da; 	T(DEC(dx));	// 109120 dec     dx ;~ 24ED:18DA
cs=0x24ed;eip=0x0018db; 	J(JNZ(loc_34d80));	// 109121 jnz     short loc_34D80 ;~ 24ED:18DB
cs=0x24ed;eip=0x0018dd; 	X(POP(es));	// 109122 pop     es ;~ 24ED:18DD
cs=0x24ed;eip=0x0018de; 	X(POP(ds));	// 109124 pop     ds ;~ 24ED:18DE
cs=0x24ed;eip=0x0018df; 	X(POPA);	// 109126 popa ;~ 24ED:18DF
cs=0x24ed;eip=0x0018e0; 	J(RETF(0));	// 109127 retf ;~ 24ED:18E0

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_34d80: 	goto loc_34d80;
        case m2c::ksub_34d64: 	goto sub_34d64;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_34d91(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_34d91:
    _begin:
cs=0x24ed;eip=0x0018e1; 	T(XOR(ax, ax));	// 109136 xor     ax, ax ;~ 24ED:18E1
	R(return sub_34d93(0, _state););
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_34d91: 	goto sub_34d91;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_34d93(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_34d93:
    _begin:
cs=0x24ed;eip=0x0018e3; 	T(MOV(ah, al));	// 109144 mov     ah, al ;~ 24ED:18E3
cs=0x24ed;eip=0x0018e5; 	X(PUSH(ax));	// 109145 push    ax ;~ 24ED:18E5
cs=0x24ed;eip=0x0018e6; 	T(LODSW);	// 109146 lodsw ;~ 24ED:18E6
cs=0x24ed;eip=0x0018e7; 	T(MOV(dx, ax));	// 109147 mov     dx, ax ;~ 24ED:18E7
cs=0x24ed;eip=0x0018e9; 	T(LODSW);	// 109148 lodsw ;~ 24ED:18E9
cs=0x24ed;eip=0x0018ea; 	T(MOV(bx, ax));	// 109149 mov     bx, ax ;~ 24ED:18EA
cs=0x24ed;eip=0x0018ec; 	J(CALL(sub_340a8,0));	// 109150 call    sub_340A8 ;~ 24ED:18EC
cs=0x24ed;eip=0x0018ef; 	T(LODSW);	// 109151 lodsw ;~ 24ED:18EF
cs=0x24ed;eip=0x0018f0; 	T(MOV(bp, ax));	// 109152 mov     bp, ax ;~ 24ED:18F0
cs=0x24ed;eip=0x0018f2; 	T(SUB(bp, dx));	// 109153 sub     bp, dx ;~ 24ED:18F2
cs=0x24ed;eip=0x0018f4; 	J(JBE(loc_34ddf));	// 109154 jbe     short loc_34DDF ;~ 24ED:18F4
cs=0x24ed;eip=0x0018f6; 	T(LODSW);	// 109155 lodsw ;~ 24ED:18F6
cs=0x24ed;eip=0x0018f7; 	T(SUB(bx, ax));	// 109156 sub     bx, ax ;~ 24ED:18F7
cs=0x24ed;eip=0x0018f9; 	J(JNC(loc_34ddf));	// 109157 jnb     short loc_34DDF ;~ 24ED:18F9
cs=0x24ed;eip=0x0018fb; 	T(NEG(bx));	// 109158 neg     bx ;~ 24ED:18FB
cs=0x24ed;eip=0x0018fd; 	X(POP(ax));	// 109159 pop     ax ;~ 24ED:18FD
cs=0x24ed;eip=0x0018fe; 	T(MOV(si, di));	// 109160 mov     si, di ;~ 24ED:18FE
cs=0x24ed;eip=0x001900; 	T(SHR(bp, 1));	// 109161 shr     bp, 1 ;~ 24ED:1900
cs=0x24ed;eip=0x001902; 	J(JC(loc_34dc4));	// 109162 jb      short loc_34DC4 ;~ 24ED:1902
cs=0x24ed;eip=0x001904; 	J(JZ(locret_34dde));	// 109163 jz      short locret_34DDE ;~ 24ED:1904
loc_34db6:
	// 7228 
cs=0x24ed;eip=0x001906; 	T(MOV(di, si));	// 109166 mov     di, si ;~ 24ED:1906
cs=0x24ed;eip=0x001908; 	T(MOV(cx, bp));	// 109167 mov     cx, bp ;~ 24ED:1908
	// 109168 rep stosw ;~ 24ED:190A
cs=0x24ed;eip=0x00190a; 	X(	REP STOSW);	// 109168 rep stosw ;~ 24ED:190A
cs=0x24ed;eip=0x00190c; 	T(ADD(si, 0x140));	// 109169 add     si, 140h ;~ 24ED:190C
cs=0x24ed;eip=0x001910; 	T(DEC(bx));	// 109170 dec     bx ;~ 24ED:1910
cs=0x24ed;eip=0x001911; 	J(JNZ(loc_34db6));	// 109171 jnz     short loc_34DB6 ;~ 24ED:1911
cs=0x24ed;eip=0x001913; 	J(RETF(0));	// 109172 retf ;~ 24ED:1913
loc_34dc4:
	// 7229 
cs=0x24ed;eip=0x001914; 	J(JZ(loc_34dd5));	// 109176 jz      short loc_34DD5 ;~ 24ED:1914
loc_34dc6:
	// 7230 
cs=0x24ed;eip=0x001916; 	T(MOV(di, si));	// 109179 mov     di, si ;~ 24ED:1916
cs=0x24ed;eip=0x001918; 	T(MOV(cx, bp));	// 109180 mov     cx, bp ;~ 24ED:1918
	// 109181 rep stosw ;~ 24ED:191A
cs=0x24ed;eip=0x00191a; 	X(	REP STOSW);	// 109181 rep stosw ;~ 24ED:191A
cs=0x24ed;eip=0x00191c; 	X(STOSB);	// 109182 stosb ;~ 24ED:191C
cs=0x24ed;eip=0x00191d; 	T(ADD(si, 0x140));	// 109183 add     si, 140h ;~ 24ED:191D
cs=0x24ed;eip=0x001921; 	T(DEC(bx));	// 109184 dec     bx ;~ 24ED:1921
cs=0x24ed;eip=0x001922; 	J(JNZ(loc_34dc6));	// 109185 jnz     short loc_34DC6 ;~ 24ED:1922
cs=0x24ed;eip=0x001924; 	J(RETF(0));	// 109186 retf ;~ 24ED:1924
loc_34dd5:
	// 7231 
cs=0x24ed;eip=0x001925; 	T(MOV(cx, bx));	// 109190 mov     cx, bx ;~ 24ED:1925
loc_34dd7:
	// 7232 
cs=0x24ed;eip=0x001927; 	X(STOSB);	// 109193 stosb ;~ 24ED:1927
cs=0x24ed;eip=0x001928; 	T(ADD(di, 0x13F));	// 109194 add     di, 13Fh ;~ 24ED:1928
cs=0x24ed;eip=0x00192c; 	J(LOOP(loc_34dd7));	// 109195 loop    loc_34DD7 ;~ 24ED:192C
locret_34dde:
	// 7233 
cs=0x24ed;eip=0x00192e; 	J(RETF(0));	// 109198 retf ;~ 24ED:192E
loc_34ddf:
	// 7234 
cs=0x24ed;eip=0x00192f; 	X(POP(ax));	// 109203 pop     ax ;~ 24ED:192F
cs=0x24ed;eip=0x001930; 	J(RETF(0));	// 109204 retf ;~ 24ED:1930

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_34db6: 	goto loc_34db6;
        case m2c::kloc_34dc4: 	goto loc_34dc4;
        case m2c::kloc_34dc6: 	goto loc_34dc6;
        case m2c::kloc_34dd5: 	goto loc_34dd5;
        case m2c::kloc_34dd7: 	goto loc_34dd7;
        case m2c::kloc_34ddf: 	goto loc_34ddf;
        case m2c::klocret_34dde: 	goto locret_34dde;
        case m2c::ksub_34d93: 	goto sub_34d93;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_34de1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_34de1:
    _begin:
cs=0x24ed;eip=0x001931; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0))));	// 109213 mov     dx, [bp+0] ;~ 24ED:1931
cs=0x24ed;eip=0x001934; 	T(MOV(bx, *(dw*)(raddr(ss,bp+2))));	// 109214 mov     bx, [bp+2] ;~ 24ED:1934
cs=0x24ed;eip=0x001937; 	J(CALL(sub_340a8,0));	// 109215 call    sub_340A8 ;~ 24ED:1937
cs=0x24ed;eip=0x00193a; 	T(MOV(si, di));	// 109216 mov     si, di ;~ 24ED:193A
cs=0x24ed;eip=0x00193c; 	T(MOV(dx, *(dw*)(raddr(ss,bp+8))));	// 109217 mov     dx, [bp+8] ;~ 24ED:193C
cs=0x24ed;eip=0x00193f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0A))));	// 109218 mov     bx, [bp+0Ah] ;~ 24ED:193F
cs=0x24ed;eip=0x001942; 	J(CALL(sub_340a8,0));	// 109219 call    sub_340A8 ;~ 24ED:1942
cs=0x24ed;eip=0x001945; 	T(MOV(dx, *(dw*)(raddr(ss,bp+4))));	// 109220 mov     dx, [bp+4] ;~ 24ED:1945
cs=0x24ed;eip=0x001948; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 109221 mov     bx, [bp+6] ;~ 24ED:1948
loc_34dfb:
	// 7235 
cs=0x24ed;eip=0x00194b; 	T(MOV(cx, dx));	// 109224 mov     cx, dx ;~ 24ED:194B
	// 109225 rep movsb ;~ 24ED:194D
cs=0x24ed;eip=0x00194d; 	X(	REP MOVSB);	// 109225 rep movsb ;~ 24ED:194D
cs=0x24ed;eip=0x00194f; 	T(SUB(si, dx));	// 109226 sub     si, dx ;~ 24ED:194F
cs=0x24ed;eip=0x001951; 	T(SUB(di, dx));	// 109227 sub     di, dx ;~ 24ED:1951
cs=0x24ed;eip=0x001953; 	T(ADD(si, 0x140));	// 109228 add     si, 140h ;~ 24ED:1953
cs=0x24ed;eip=0x001957; 	T(ADD(di, 0x140));	// 109229 add     di, 140h ;~ 24ED:1957
cs=0x24ed;eip=0x00195b; 	T(DEC(bx));	// 109230 dec     bx ;~ 24ED:195B
cs=0x24ed;eip=0x00195c; 	J(JNZ(loc_34dfb));	// 109231 jnz     short loc_34DFB ;~ 24ED:195C
cs=0x24ed;eip=0x00195e; 	J(RETF(0));	// 109232 retf ;~ 24ED:195E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_34dfb: 	goto loc_34dfb;
        case m2c::ksub_34de1: 	goto sub_34de1;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_34e0f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_34e0f:
    _begin:
cs=0x24ed;eip=0x00195f; 	X(PUSH(ax));	// 109241 push    ax ;~ 24ED:195F
cs=0x24ed;eip=0x001960; 	X(PUSH(cx));	// 109242 push    cx ;~ 24ED:1960
cs=0x24ed;eip=0x001961; 	X(PUSH(di));	// 109243 push    di ;~ 24ED:1961
cs=0x24ed;eip=0x001962; 	T(XOR(di, di));	// 109244 xor     di, di ;~ 24ED:1962
cs=0x24ed;eip=0x001964; 	T(XOR(ax, ax));	// 109245 xor     ax, ax ;~ 24ED:1964
cs=0x24ed;eip=0x001966; 	T(MOV(cx, 0x7D00));	// 109246 mov     cx, 7D00h ;~ 24ED:1966
	// 109247 rep stosw ;~ 24ED:1969
cs=0x24ed;eip=0x001969; 	X(	REP STOSW);	// 109247 rep stosw ;~ 24ED:1969
cs=0x24ed;eip=0x00196b; 	X(POP(di));	// 109248 pop     di ;~ 24ED:196B
cs=0x24ed;eip=0x00196c; 	X(POP(cx));	// 109249 pop     cx ;~ 24ED:196C
cs=0x24ed;eip=0x00196d; 	X(POP(ax));	// 109250 pop     ax ;~ 24ED:196D
cs=0x24ed;eip=0x00196e; 	J(RETF(0));	// 109251 retf ;~ 24ED:196E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_34e0f: 	goto sub_34e0f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_34e1f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_34e1f:
    _begin:
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00196f; 	X(MOV(*(dw*)(((db*)&word_3364a)), bp));	// 109259 mov     cs:word_3364A, bp ;~ 24ED:196F
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001974; 	X(MOV(*(dw*)(((db*)&word_33648)), si));	// 109260 mov     cs:word_33648, si ;~ 24ED:1974
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001979; 	X(MOV(*(&byte_3364c), al));	// 109261 mov     cs:byte_3364C, al ;~ 24ED:1979
cs=0x24ed;eip=0x00197d; 	X(PUSH(ax));	// 109262 push    ax ;~ 24ED:197D
cs=0x24ed;eip=0x00197e; 	X(PUSH(bx));	// 109263 push    bx ;~ 24ED:197E
cs=0x24ed;eip=0x00197f; 	X(PUSH(cx));	// 109264 push    cx ;~ 24ED:197F
cs=0x24ed;eip=0x001980; 	X(PUSH(dx));	// 109265 push    dx ;~ 24ED:1980
cs=0x24ed;eip=0x001981; 	X(PUSH(di));	// 109266 push    di ;~ 24ED:1981
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001982; 	X(MOV(*(dw*)(((db*)&word_33644)), dx));	// 109267 mov     cs:word_33644, dx ;~ 24ED:1982
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001987; 	X(MOV(*(dw*)(((db*)&word_33646)), bx));	// 109268 mov     cs:word_33646, bx ;~ 24ED:1987
cs=0x24ed;eip=0x00198c; 	T(SUB(bx, cx));	// 109269 sub     bx, cx ;~ 24ED:198C
cs=0x24ed;eip=0x00198e; 	T(SUB(dx, di));	// 109270 sub     dx, di ;~ 24ED:198E
cs=0x24ed;eip=0x001990; 	T(NEG(bx));	// 109271 neg     bx ;~ 24ED:1990
cs=0x24ed;eip=0x001992; 	T(NEG(dx));	// 109272 neg     dx ;~ 24ED:1992
cs=0x24ed;eip=0x001994; 	J(CALL(sub_34ef4,0));	// 109273 call    sub_34EF4 ;~ 24ED:1994
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001997; 	T(MOV(bp, *(dw*)(((db*)&word_3364a))));	// 109274 mov     bp, cs:word_3364A ;~ 24ED:1997
cs=0x24ed;eip=0x00199c; 	X(POP(di));	// 109275 pop     di ;~ 24ED:199C
cs=0x24ed;eip=0x00199d; 	X(POP(dx));	// 109276 pop     dx ;~ 24ED:199D
cs=0x24ed;eip=0x00199e; 	X(POP(cx));	// 109277 pop     cx ;~ 24ED:199E
cs=0x24ed;eip=0x00199f; 	X(POP(bx));	// 109278 pop     bx ;~ 24ED:199F
cs=0x24ed;eip=0x0019a0; 	X(POP(ax));	// 109279 pop     ax ;~ 24ED:19A0
cs=0x24ed;eip=0x0019a1; 	J(RETF(0));	// 109280 retf ;~ 24ED:19A1

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_34e1f: 	goto sub_34e1f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group140(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group140:
    _begin:
seg002_19a2_proc:
	// 109286 
loc_34e52:
	// 7236 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0019a2; 	T(MOV(bx, *(dw*)(((db*)&word_33646))));	// 109287 mov     bx, cs:word_33646 ;~ 24ED:19A2
cs=0x24ed;eip=0x0019a7; 	T(MOV(cx, dx));	// 109288 mov     cx, dx ;~ 24ED:19A7
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0019a9; 	T(MOV(ax, *(dw*)(((db*)&word_33644))));	// 109289 mov     ax, cs:word_33644 ;~ 24ED:19A9
cs=0x24ed;eip=0x0019ad; 	T(MOV(dx, ax));	// 109290 mov     dx, ax ;~ 24ED:19AD
cs=0x24ed;eip=0x0019af; 	T(ADD(ax, cx));	// 109291 add     ax, cx ;~ 24ED:19AF
cs=0x24ed;eip=0x0019b1; 	T(CMP(ax, dx));	// 109292 cmp     ax, dx ;~ 24ED:19B1
cs=0x24ed;eip=0x0019b3; 	J(JG(loc_34e69));	// 109293 jg      short loc_34E69 ;~ 24ED:19B3
cs=0x24ed;eip=0x0019b5; 	T(MOV(dx, ax));	// 109294 mov     dx, ax ;~ 24ED:19B5
cs=0x24ed;eip=0x0019b7; 	T(NEG(cx));	// 109295 neg     cx ;~ 24ED:19B7
loc_34e69:
	// 7237 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0019b9; 	T(MOV(di, *(dw*)(((db*)&word_33648))));	// 109298 mov     di, cs:word_33648 ;~ 24ED:19B9
cs=0x24ed;eip=0x0019be; 	T(CMP(bx, *(dw*)(raddr(ds,di+2))));	// 109299 cmp     bx, [di+2] ;~ 24ED:19BE
cs=0x24ed;eip=0x0019c1; 	J(JL(loc_34e9b));	// 109300 jl      short loc_34E9B ;~ 24ED:19C1
cs=0x24ed;eip=0x0019c3; 	T(CMP(bx, *(dw*)(raddr(ds,di+6))));	// 109301 cmp     bx, [di+6] ;~ 24ED:19C3
cs=0x24ed;eip=0x0019c6; 	J(JGE(loc_34e9b));	// 109302 jge     short loc_34E9B ;~ 24ED:19C6
cs=0x24ed;eip=0x0019c8; 	J(CALL(sub_340a8,0));	// 109303 call    sub_340A8 ;~ 24ED:19C8
cs=0x24ed;eip=0x0019cb; 	T(INC(cx));	// 109304 inc     cx ;~ 24ED:19CB
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0019cc; 	T(MOV(al, *(&byte_3364c)));	// 109305 mov     al, cs:byte_3364C ;~ 24ED:19CC
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0019d0; 	T(MOV(si, *(dw*)(((db*)&word_33648))));	// 109306 mov     si, cs:word_33648 ;~ 24ED:19D0
loc_34e85:
	// 7238 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0019d5; 	X(ROL(*(dw*)(((db*)&word_3364a)), 1));	// 109309 rol     cs:word_3364A, 1 ;~ 24ED:19D5
cs=0x24ed;eip=0x0019da; 	J(JNC(loc_34e97));	// 109310 jnb     short loc_34E97 ;~ 24ED:19DA
cs=0x24ed;eip=0x0019dc; 	T(CMP(dx, *(dw*)(raddr(ds,si))));	// 109311 cmp     dx, [si] ;~ 24ED:19DC
cs=0x24ed;eip=0x0019de; 	J(JL(loc_34e97));	// 109312 jl      short loc_34E97 ;~ 24ED:19DE
cs=0x24ed;eip=0x0019e0; 	T(CMP(dx, *(dw*)(raddr(ds,si+4))));	// 109313 cmp     dx, [si+4] ;~ 24ED:19E0
cs=0x24ed;eip=0x0019e3; 	J(JGE(loc_34e97));	// 109314 jge     short loc_34E97 ;~ 24ED:19E3
cs=0x24ed;eip=0x0019e5; 	X(STOSB);	// 109315 stosb ;~ 24ED:19E5
cs=0x24ed;eip=0x0019e6; 	T(DEC(di));	// 109316 dec     di ;~ 24ED:19E6
loc_34e97:
	// 7239 
cs=0x24ed;eip=0x0019e7; 	T(INC(di));	// 109320 inc     di ;~ 24ED:19E7
cs=0x24ed;eip=0x0019e8; 	T(INC(dx));	// 109321 inc     dx ;~ 24ED:19E8
cs=0x24ed;eip=0x0019e9; 	J(LOOP(loc_34e85));	// 109322 loop    loc_34E85 ;~ 24ED:19E9
loc_34e9b:
	// 7240 
cs=0x24ed;eip=0x0019eb; 	X(POP(si));	// 109326 pop     si ;~ 24ED:19EB
cs=0x24ed;eip=0x0019ec; 	X(POP(di));	// 109327 pop     di ;~ 24ED:19EC
cs=0x24ed;eip=0x0019ed; 	J(RETN(0));	// 109328 retn ;~ 24ED:19ED
loc_34e9e:
	// 7241 
cs=0x24ed;eip=0x0019ee; 	T(MOV(cx, bx));	// 109332 mov     cx, bx ;~ 24ED:19EE
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0019f0; 	T(MOV(bx, *(dw*)(((db*)&word_33646))));	// 109333 mov     bx, cs:word_33646 ;~ 24ED:19F0
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0019f5; 	T(MOV(dx, *(dw*)(((db*)&word_33644))));	// 109334 mov     dx, cs:word_33644 ;~ 24ED:19F5
cs=0x24ed;eip=0x0019fa; 	T(OR(ax, ax));	// 109335 or      ax, ax ;~ 24ED:19FA
cs=0x24ed;eip=0x0019fc; 	J(JNS(loc_34eb0));	// 109336 jns     short loc_34EB0 ;~ 24ED:19FC
cs=0x24ed;eip=0x0019fe; 	T(SUB(bx, cx));	// 109337 sub     bx, cx ;~ 24ED:19FE
loc_34eb0:
	// 7242 
cs=0x24ed;eip=0x001a00; 	T(CMP(bx, 0x0C8));	// 109340 cmp     bx, 0C8h ; 'È' ;~ 24ED:1A00
cs=0x24ed;eip=0x001a04; 	J(JC(loc_34ebc));	// 109341 jb      short loc_34EBC ;~ 24ED:1A04
cs=0x24ed;eip=0x001a06; 	J(JGE(loc_34ef1));	// 109342 jge     short loc_34EF1 ;~ 24ED:1A06
cs=0x24ed;eip=0x001a08; 	T(ADD(cx, bx));	// 109343 add     cx, bx ;~ 24ED:1A08
cs=0x24ed;eip=0x001a0a; 	T(XOR(bx, bx));	// 109344 xor     bx, bx ;~ 24ED:1A0A
loc_34ebc:
	// 7243 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001a0c; 	T(MOV(di, *(dw*)(((db*)&word_33648))));	// 109347 mov     di, cs:word_33648 ;~ 24ED:1A0C
cs=0x24ed;eip=0x001a11; 	T(CMP(dx, *(dw*)(raddr(ds,di))));	// 109348 cmp     dx, [di] ;~ 24ED:1A11
cs=0x24ed;eip=0x001a13; 	J(JL(loc_34ef1));	// 109349 jl      short loc_34EF1 ;~ 24ED:1A13
cs=0x24ed;eip=0x001a15; 	T(CMP(dx, *(dw*)(raddr(ds,di+4))));	// 109350 cmp     dx, [di+4] ;~ 24ED:1A15
cs=0x24ed;eip=0x001a18; 	J(JGE(loc_34ef1));	// 109351 jge     short loc_34EF1 ;~ 24ED:1A18
cs=0x24ed;eip=0x001a1a; 	J(CALL(sub_340a8,0));	// 109352 call    sub_340A8 ;~ 24ED:1A1A
cs=0x24ed;eip=0x001a1d; 	T(INC(cx));	// 109353 inc     cx ;~ 24ED:1A1D
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001a1e; 	T(MOV(al, *(&byte_3364c)));	// 109354 mov     al, cs:byte_3364C ;~ 24ED:1A1E
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001a22; 	T(MOV(si, *(dw*)(((db*)&word_33648))));	// 109355 mov     si, cs:word_33648 ;~ 24ED:1A22
loc_34ed7:
	// 7244 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001a27; 	X(ROL(*(dw*)(((db*)&word_3364a)), 1));	// 109358 rol     cs:word_3364A, 1 ;~ 24ED:1A27
cs=0x24ed;eip=0x001a2c; 	J(JNC(loc_34eea));	// 109359 jnb     short loc_34EEA ;~ 24ED:1A2C
cs=0x24ed;eip=0x001a2e; 	T(CMP(bx, *(dw*)(raddr(ds,si+2))));	// 109360 cmp     bx, [si+2] ;~ 24ED:1A2E
cs=0x24ed;eip=0x001a31; 	J(JL(loc_34eea));	// 109361 jl      short loc_34EEA ;~ 24ED:1A31
cs=0x24ed;eip=0x001a33; 	T(CMP(bx, *(dw*)(raddr(ds,si+6))));	// 109362 cmp     bx, [si+6] ;~ 24ED:1A33
cs=0x24ed;eip=0x001a36; 	J(JGE(loc_34eea));	// 109363 jge     short loc_34EEA ;~ 24ED:1A36
cs=0x24ed;eip=0x001a38; 	X(STOSB);	// 109364 stosb ;~ 24ED:1A38
cs=0x24ed;eip=0x001a39; 	T(DEC(di));	// 109365 dec     di ;~ 24ED:1A39
loc_34eea:
	// 7245 
cs=0x24ed;eip=0x001a3a; 	T(INC(bx));	// 109369 inc     bx ;~ 24ED:1A3A
cs=0x24ed;eip=0x001a3b; 	T(ADD(di, 0x140));	// 109370 add     di, 140h ;~ 24ED:1A3B
cs=0x24ed;eip=0x001a3f; 	J(LOOP(loc_34ed7));	// 109371 loop    loc_34ED7 ;~ 24ED:1A3F
loc_34ef1:
	// 7246 
cs=0x24ed;eip=0x001a41; 	X(POP(si));	// 109375 pop     si ;~ 24ED:1A41
cs=0x24ed;eip=0x001a42; 	X(POP(di));	// 109376 pop     di ;~ 24ED:1A42
cs=0x24ed;eip=0x001a43; 	J(RETN(0));	// 109377 retn ;~ 24ED:1A43
sub_34ef4:
	// 109383 
cs=0x24ed;eip=0x001a44; 	X(PUSH(di));	// 109387 push    di ;~ 24ED:1A44
cs=0x24ed;eip=0x001a45; 	X(PUSH(si));	// 109388 push    si ;~ 24ED:1A45
cs=0x24ed;eip=0x001a46; 	T(OR(bx, bx));	// 109389 or      bx, bx ;~ 24ED:1A46
cs=0x24ed;eip=0x001a48; 	J(JNZ(loc_34efd));	// 109390 jnz     short loc_34EFD ;~ 24ED:1A48
cs=0x24ed;eip=0x001a4a; 	J(JMP(loc_34e52));	// 109391 jmp     loc_34E52 ;~ 24ED:1A4A
loc_34efd:
	// 7247 
cs=0x24ed;eip=0x001a4d; 	T(MOV(ax, 1));	// 109395 mov     ax, 1 ;~ 24ED:1A4D
cs=0x24ed;eip=0x001a50; 	J(JNS(loc_34f06));	// 109396 jns     short loc_34F06 ;~ 24ED:1A50
cs=0x24ed;eip=0x001a52; 	T(NEG(bx));	// 109397 neg     bx ;~ 24ED:1A52
cs=0x24ed;eip=0x001a54; 	T(NEG(ax));	// 109398 neg     ax ;~ 24ED:1A54
loc_34f06:
	// 7248 
cs=0x24ed;eip=0x001a56; 	T(OR(dx, dx));	// 109401 or      dx, dx ;~ 24ED:1A56
cs=0x24ed;eip=0x001a58; 	J(JZ(loc_34e9e));	// 109402 jz      short loc_34E9E ;~ 24ED:1A58
cs=0x24ed;eip=0x001a5a; 	T(MOV(cx, 1));	// 109403 mov     cx, 1 ;~ 24ED:1A5A
cs=0x24ed;eip=0x001a5d; 	J(JNS(loc_34f13));	// 109404 jns     short loc_34F13 ;~ 24ED:1A5D
cs=0x24ed;eip=0x001a5f; 	T(NEG(cx));	// 109405 neg     cx ;~ 24ED:1A5F
cs=0x24ed;eip=0x001a61; 	T(NEG(dx));	// 109406 neg     dx ;~ 24ED:1A61
loc_34f13:
	// 7249 
cs=0x24ed;eip=0x001a63; 	X(PUSH(ax));	// 109409 push    ax ;~ 24ED:1A63
cs=0x24ed;eip=0x001a64; 	X(PUSH(cx));	// 109410 push    cx ;~ 24ED:1A64
cs=0x24ed;eip=0x001a65; 	X(PUSH(ax));	// 109411 push    ax ;~ 24ED:1A65
cs=0x24ed;eip=0x001a66; 	X(PUSH(cx));	// 109412 push    cx ;~ 24ED:1A66
cs=0x24ed;eip=0x001a67; 	T(MOV(bp, sp));	// 109413 mov     bp, sp ;~ 24ED:1A67
cs=0x24ed;eip=0x001a69; 	T(MOV(si, bx));	// 109414 mov     si, bx ;~ 24ED:1A69
cs=0x24ed;eip=0x001a6b; 	T(MOV(di, dx));	// 109415 mov     di, dx ;~ 24ED:1A6B
cs=0x24ed;eip=0x001a6d; 	T(XOR(ax, ax));	// 109416 xor     ax, ax ;~ 24ED:1A6D
cs=0x24ed;eip=0x001a6f; 	T(CMP(dx, bx));	// 109417 cmp     dx, bx ;~ 24ED:1A6F
cs=0x24ed;eip=0x001a71; 	J(JBE(loc_34f28));	// 109418 jbe     short loc_34F28 ;~ 24ED:1A71
cs=0x24ed;eip=0x001a73; 	X(MOV(*(dw*)(raddr(ss,bp+2)), ax));	// 109419 mov     [bp+2], ax ;~ 24ED:1A73
cs=0x24ed;eip=0x001a76; 	J(JMP(loc_34f31));	// 109420 jmp     short loc_34F31 ;~ 24ED:1A76
loc_34f28:
	// 7250 
cs=0x24ed;eip=0x001a78; 	T(OR(bx, bx));	// 109424 or      bx, bx ;~ 24ED:1A78
cs=0x24ed;eip=0x001a7a; 	J(JZ(loc_34f8e));	// 109425 jz      short loc_34F8E ;~ 24ED:1A7A
cs=0x24ed;eip=0x001a7c; 	T(XCHG(di, si));	// 109426 xchg    di, si ;~ 24ED:1A7C
cs=0x24ed;eip=0x001a7e; 	X(MOV(*(dw*)(raddr(ss,bp+0)), ax));	// 109427 mov     [bp+0], ax ;~ 24ED:1A7E
loc_34f31:
	// 7251 
cs=0x24ed;eip=0x001a81; 	T(MOV(ax, di));	// 109430 mov     ax, di ;~ 24ED:1A81
cs=0x24ed;eip=0x001a83; 	T(MOV(cx, di));	// 109431 mov     cx, di ;~ 24ED:1A83
cs=0x24ed;eip=0x001a85; 	T(SHR(ax, 1));	// 109432 shr     ax, 1 ;~ 24ED:1A85
loc_34f37:
	// 7252 
cs=0x24ed;eip=0x001a87; 	T(ADD(ax, si));	// 109435 add     ax, si ;~ 24ED:1A87
cs=0x24ed;eip=0x001a89; 	T(CMP(ax, di));	// 109436 cmp     ax, di ;~ 24ED:1A89
cs=0x24ed;eip=0x001a8b; 	J(JC(loc_34f47));	// 109437 jb      short loc_34F47 ;~ 24ED:1A8B
cs=0x24ed;eip=0x001a8d; 	T(SUB(ax, di));	// 109438 sub     ax, di ;~ 24ED:1A8D
cs=0x24ed;eip=0x001a8f; 	T(MOV(dx, *(dw*)(raddr(ss,bp+4))));	// 109439 mov     dx, [bp+4] ;~ 24ED:1A8F
cs=0x24ed;eip=0x001a92; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 109440 mov     bx, [bp+6] ;~ 24ED:1A92
cs=0x24ed;eip=0x001a95; 	J(JMP(loc_34f4d));	// 109441 jmp     short loc_34F4D ;~ 24ED:1A95
loc_34f47:
	// 7253 
cs=0x24ed;eip=0x001a97; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0))));	// 109445 mov     dx, [bp+0] ;~ 24ED:1A97
cs=0x24ed;eip=0x001a9a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+2))));	// 109446 mov     bx, [bp+2] ;~ 24ED:1A9A
loc_34f4d:
	// 7254 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001a9d; 	T(ADD(dx, *(dw*)(((db*)&word_33644))));	// 109449 add     dx, cs:word_33644 ;~ 24ED:1A9D
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001aa2; 	T(ADD(bx, *(dw*)(((db*)&word_33646))));	// 109450 add     bx, cs:word_33646 ;~ 24ED:1AA2
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001aa7; 	X(MOV(*(dw*)(((db*)&word_33644)), dx));	// 109451 mov     cs:word_33644, dx ;~ 24ED:1AA7
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001aac; 	X(MOV(*(dw*)(((db*)&word_33646)), bx));	// 109452 mov     cs:word_33646, bx ;~ 24ED:1AAC
cs=0x24ed;eip=0x001ab1; 	X(PUSH(ax));	// 109453 push    ax ;~ 24ED:1AB1
cs=0x24ed;eip=0x001ab2; 	X(PUSH(di));	// 109454 push    di ;~ 24ED:1AB2
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001ab3; 	X(ROL(*(dw*)(((db*)&word_3364a)), 1));	// 109455 rol     cs:word_3364A, 1 ;~ 24ED:1AB3
cs=0x24ed;eip=0x001ab8; 	J(JNC(loc_34f8a));	// 109456 jnb     short loc_34F8A ;~ 24ED:1AB8
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001aba; 	T(MOV(di, *(dw*)(((db*)&word_33648))));	// 109457 mov     di, cs:word_33648 ;~ 24ED:1ABA
cs=0x24ed;eip=0x001abf; 	T(CMP(dx, *(dw*)(raddr(ds,di))));	// 109458 cmp     dx, [di] ;~ 24ED:1ABF
cs=0x24ed;eip=0x001ac1; 	J(JL(loc_34f8a));	// 109459 jl      short loc_34F8A ;~ 24ED:1AC1
cs=0x24ed;eip=0x001ac3; 	T(CMP(bx, *(dw*)(raddr(ds,di+2))));	// 109460 cmp     bx, [di+2] ;~ 24ED:1AC3
cs=0x24ed;eip=0x001ac6; 	J(JL(loc_34f8a));	// 109461 jl      short loc_34F8A ;~ 24ED:1AC6
cs=0x24ed;eip=0x001ac8; 	T(CMP(dx, *(dw*)(raddr(ds,di+4))));	// 109462 cmp     dx, [di+4] ;~ 24ED:1AC8
cs=0x24ed;eip=0x001acb; 	J(JGE(loc_34f8a));	// 109463 jge     short loc_34F8A ;~ 24ED:1ACB
cs=0x24ed;eip=0x001acd; 	T(CMP(bx, *(dw*)(raddr(ds,di+6))));	// 109464 cmp     bx, [di+6] ;~ 24ED:1ACD
cs=0x24ed;eip=0x001ad0; 	J(JGE(loc_34f8a));	// 109465 jge     short loc_34F8A ;~ 24ED:1AD0
cs=0x24ed;eip=0x001ad2; 	J(CALL(sub_340a8,0));	// 109466 call    sub_340A8 ;~ 24ED:1AD2
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001ad5; 	T(MOV(al, *(&byte_3364c)));	// 109467 mov     al, cs:byte_3364C ;~ 24ED:1AD5
cs=0x24ed;eip=0x001ad9; 	X(STOSB);	// 109468 stosb ;~ 24ED:1AD9
loc_34f8a:
	// 7255 
cs=0x24ed;eip=0x001ada; 	X(POP(di));	// 109472 pop     di ;~ 24ED:1ADA
cs=0x24ed;eip=0x001adb; 	X(POP(ax));	// 109473 pop     ax ;~ 24ED:1ADB
cs=0x24ed;eip=0x001adc; 	J(LOOP(loc_34f37));	// 109474 loop    loc_34F37 ;~ 24ED:1ADC
loc_34f8e:
	// 7256 
cs=0x24ed;eip=0x001ade; 	T(ADD(sp, 8));	// 109477 add     sp, 8 ;~ 24ED:1ADE
cs=0x24ed;eip=0x001ae1; 	X(POP(si));	// 109478 pop     si ;~ 24ED:1AE1
cs=0x24ed;eip=0x001ae2; 	X(POP(di));	// 109479 pop     di ;~ 24ED:1AE2
cs=0x24ed;eip=0x001ae3; 	J(RETN(0));	// 109480 retn ;~ 24ED:1AE3

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_34e52: 	goto loc_34e52;
        case m2c::kloc_34e69: 	goto loc_34e69;
        case m2c::kloc_34e85: 	goto loc_34e85;
        case m2c::kloc_34e97: 	goto loc_34e97;
        case m2c::kloc_34e9b: 	goto loc_34e9b;
        case m2c::kloc_34e9e: 	goto loc_34e9e;
        case m2c::kloc_34eb0: 	goto loc_34eb0;
        case m2c::kloc_34ebc: 	goto loc_34ebc;
        case m2c::kloc_34ed7: 	goto loc_34ed7;
        case m2c::kloc_34eea: 	goto loc_34eea;
        case m2c::kloc_34ef1: 	goto loc_34ef1;
        case m2c::kloc_34efd: 	goto loc_34efd;
        case m2c::kloc_34f06: 	goto loc_34f06;
        case m2c::kloc_34f13: 	goto loc_34f13;
        case m2c::kloc_34f28: 	goto loc_34f28;
        case m2c::kloc_34f31: 	goto loc_34f31;
        case m2c::kloc_34f37: 	goto loc_34f37;
        case m2c::kloc_34f47: 	goto loc_34f47;
        case m2c::kloc_34f4d: 	goto loc_34f4d;
        case m2c::kloc_34f8a: 	goto loc_34f8a;
        case m2c::kloc_34f8e: 	goto loc_34f8e;
        case m2c::ksub_34ef4: 	goto sub_34ef4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_34f94(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_34f94:
    _begin:
cs=0x24ed;eip=0x001ae4; 	X(PUSH(cx));	// 109489 push    cx ;~ 24ED:1AE4
cs=0x24ed;eip=0x001ae5; 	X(PUSH(si));	// 109490 push    si ;~ 24ED:1AE5
cs=0x24ed;eip=0x001ae6; 	X(PUSH(di));	// 109491 push    di ;~ 24ED:1AE6
cs=0x24ed;eip=0x001ae7; 	T(XOR(si, si));	// 109492 xor     si, si ;~ 24ED:1AE7
cs=0x24ed;eip=0x001ae9; 	T(MOV(di, si));	// 109493 mov     di, si ;~ 24ED:1AE9
cs=0x24ed;eip=0x001aeb; 	T(MOV(cx, 0x3E80));	// 109494 mov     cx, 3E80h ;~ 24ED:1AEB
	// 109495 rep movsd ;~ 24ED:1AEE
cs=0x24ed;eip=0x001aee; 	X(	REP MOVSD);	// 109495 rep movsd ;~ 24ED:1AEE
cs=0x24ed;eip=0x001af1; 	X(POP(di));	// 109496 pop     di ;~ 24ED:1AF1
cs=0x24ed;eip=0x001af2; 	X(POP(si));	// 109497 pop     si ;~ 24ED:1AF2
cs=0x24ed;eip=0x001af3; 	X(POP(cx));	// 109498 pop     cx ;~ 24ED:1AF3
cs=0x24ed;eip=0x001af4; 	J(RETF(0));	// 109499 retf ;~ 24ED:1AF4

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_34f94: 	goto sub_34f94;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_34fa5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_34fa5:
    _begin:
cs=0x24ed;eip=0x001af5; 	T(MOV(ds, si));	// 109507 mov     ds, si ;~ 24ED:1AF5
	R(return sub_34fa7(0, _state););
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_34fa5: 	goto sub_34fa5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_34fa7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_34fa7:
    _begin:
cs=0x24ed;eip=0x001af7; 	J(CALL(sub_340a8,0));	// 109517 call    sub_340A8 ;~ 24ED:1AF7
cs=0x24ed;eip=0x001afa; 	T(SHR(bp, 1));	// 109518 shr     bp, 1 ;~ 24ED:1AFA
cs=0x24ed;eip=0x001afc; 	J(JC(loc_34fe5));	// 109519 jb      loc_34FE5 ;~ 24ED:1AFC
cs=0x24ed;eip=0x001b00; 	T(SHR(bp, 1));	// 109520 shr     bp, 1 ;~ 24ED:1B00
cs=0x24ed;eip=0x001b02; 	J(JC(loc_34fcd));	// 109521 jb      loc_34FCD ;~ 24ED:1B02
cs=0x24ed;eip=0x001b06; 	J(JZ(locret_34fe4));	// 109522 jz      locret_34FE4 ;~ 24ED:1B06
cs=0x24ed;eip=0x001b0a; 	T(MOV(dx, di));	// 109523 mov     dx, di ;~ 24ED:1B0A
loc_34fbc:
	// 7257 
cs=0x24ed;eip=0x001b0c; 	T(MOV(si, dx));	// 109526 mov     si, dx ;~ 24ED:1B0C
cs=0x24ed;eip=0x001b0e; 	T(MOV(di, si));	// 109527 mov     di, si ;~ 24ED:1B0E
cs=0x24ed;eip=0x001b10; 	T(MOV(cx, bp));	// 109528 mov     cx, bp ;~ 24ED:1B10
	// 109529 rep movsd ;~ 24ED:1B12
cs=0x24ed;eip=0x001b12; 	X(	REP MOVSD);	// 109529 rep movsd ;~ 24ED:1B12
cs=0x24ed;eip=0x001b15; 	T(ADD(dx, 0x140));	// 109530 add     dx, 140h ;~ 24ED:1B15
cs=0x24ed;eip=0x001b19; 	T(DEC(ax));	// 109531 dec     ax ;~ 24ED:1B19
cs=0x24ed;eip=0x001b1a; 	J(JNZ(loc_34fbc));	// 109532 jnz     short loc_34FBC ;~ 24ED:1B1A
cs=0x24ed;eip=0x001b1c; 	J(RETF(0));	// 109533 retf ;~ 24ED:1B1C
loc_34fcd:
	// 7258 
cs=0x24ed;eip=0x001b1d; 	J(JZ(loc_35028));	// 109537 jz      loc_35028 ;~ 24ED:1B1D
cs=0x24ed;eip=0x001b21; 	T(MOV(dx, di));	// 109538 mov     dx, di ;~ 24ED:1B21
loc_34fd3:
	// 7259 
cs=0x24ed;eip=0x001b23; 	T(MOV(si, dx));	// 109541 mov     si, dx ;~ 24ED:1B23
cs=0x24ed;eip=0x001b25; 	T(MOV(di, si));	// 109542 mov     di, si ;~ 24ED:1B25
cs=0x24ed;eip=0x001b27; 	T(MOV(cx, bp));	// 109543 mov     cx, bp ;~ 24ED:1B27
	// 109544 rep movsd ;~ 24ED:1B29
cs=0x24ed;eip=0x001b29; 	X(	REP MOVSD);	// 109544 rep movsd ;~ 24ED:1B29
cs=0x24ed;eip=0x001b2c; 	X(MOVSW);	// 109545 movsw ;~ 24ED:1B2C
cs=0x24ed;eip=0x001b2d; 	T(ADD(dx, 0x140));	// 109546 add     dx, 140h ;~ 24ED:1B2D
cs=0x24ed;eip=0x001b31; 	T(DEC(ax));	// 109547 dec     ax ;~ 24ED:1B31
cs=0x24ed;eip=0x001b32; 	J(JNZ(loc_34fd3));	// 109548 jnz     short loc_34FD3 ;~ 24ED:1B32
locret_34fe4:
	// 7260 
cs=0x24ed;eip=0x001b34; 	J(RETF(0));	// 109551 retf ;~ 24ED:1B34
loc_34fe5:
	// 7261 
cs=0x24ed;eip=0x001b35; 	J(JZ(loc_3501c));	// 109555 jz      loc_3501C ;~ 24ED:1B35
cs=0x24ed;eip=0x001b39; 	T(SHR(bp, 1));	// 109556 shr     bp, 1 ;~ 24ED:1B39
cs=0x24ed;eip=0x001b3b; 	J(JC(loc_35003));	// 109557 jb      loc_35003 ;~ 24ED:1B3B
cs=0x24ed;eip=0x001b3f; 	T(MOV(dx, di));	// 109558 mov     dx, di ;~ 24ED:1B3F
loc_34ff1:
	// 7262 
cs=0x24ed;eip=0x001b41; 	T(MOV(si, dx));	// 109561 mov     si, dx ;~ 24ED:1B41
cs=0x24ed;eip=0x001b43; 	T(MOV(di, si));	// 109562 mov     di, si ;~ 24ED:1B43
cs=0x24ed;eip=0x001b45; 	T(MOV(cx, bp));	// 109563 mov     cx, bp ;~ 24ED:1B45
	// 109564 rep movsd ;~ 24ED:1B47
cs=0x24ed;eip=0x001b47; 	X(	REP MOVSD);	// 109564 rep movsd ;~ 24ED:1B47
cs=0x24ed;eip=0x001b4a; 	X(MOVSB);	// 109565 movsb ;~ 24ED:1B4A
cs=0x24ed;eip=0x001b4b; 	T(ADD(dx, 0x140));	// 109566 add     dx, 140h ;~ 24ED:1B4B
cs=0x24ed;eip=0x001b4f; 	T(DEC(ax));	// 109567 dec     ax ;~ 24ED:1B4F
cs=0x24ed;eip=0x001b50; 	J(JNZ(loc_34ff1));	// 109568 jnz     short loc_34FF1 ;~ 24ED:1B50
cs=0x24ed;eip=0x001b52; 	J(RETF(0));	// 109569 retf ;~ 24ED:1B52
loc_35003:
	// 7263 
cs=0x24ed;eip=0x001b53; 	J(JZ(loc_35034));	// 109573 jz      loc_35034 ;~ 24ED:1B53
cs=0x24ed;eip=0x001b57; 	T(MOV(dx, di));	// 109574 mov     dx, di ;~ 24ED:1B57
loc_35009:
	// 7264 
cs=0x24ed;eip=0x001b59; 	T(MOV(si, dx));	// 109577 mov     si, dx ;~ 24ED:1B59
cs=0x24ed;eip=0x001b5b; 	T(MOV(di, si));	// 109578 mov     di, si ;~ 24ED:1B5B
cs=0x24ed;eip=0x001b5d; 	T(MOV(cx, bp));	// 109579 mov     cx, bp ;~ 24ED:1B5D
	// 109580 rep movsd ;~ 24ED:1B5F
cs=0x24ed;eip=0x001b5f; 	X(	REP MOVSD);	// 109580 rep movsd ;~ 24ED:1B5F
cs=0x24ed;eip=0x001b62; 	X(MOVSW);	// 109581 movsw ;~ 24ED:1B62
cs=0x24ed;eip=0x001b63; 	X(MOVSB);	// 109582 movsb ;~ 24ED:1B63
cs=0x24ed;eip=0x001b64; 	T(ADD(dx, 0x140));	// 109583 add     dx, 140h ;~ 24ED:1B64
cs=0x24ed;eip=0x001b68; 	T(DEC(ax));	// 109584 dec     ax ;~ 24ED:1B68
cs=0x24ed;eip=0x001b69; 	J(JNZ(loc_35009));	// 109585 jnz     short loc_35009 ;~ 24ED:1B69
cs=0x24ed;eip=0x001b6b; 	J(RETF(0));	// 109586 retf ;~ 24ED:1B6B
loc_3501c:
	// 7265 
cs=0x24ed;eip=0x001b6c; 	T(MOV(cx, ax));	// 109590 mov     cx, ax ;~ 24ED:1B6C
loc_3501e:
	// 7266 
cs=0x24ed;eip=0x001b6e; 	T(MOV(si, di));	// 109593 mov     si, di ;~ 24ED:1B6E
cs=0x24ed;eip=0x001b70; 	X(MOVSB);	// 109594 movsb ;~ 24ED:1B70
cs=0x24ed;eip=0x001b71; 	T(ADD(di, 0x13F));	// 109595 add     di, 13Fh ;~ 24ED:1B71
cs=0x24ed;eip=0x001b75; 	J(LOOP(loc_3501e));	// 109596 loop    loc_3501E ;~ 24ED:1B75
cs=0x24ed;eip=0x001b77; 	J(RETF(0));	// 109597 retf ;~ 24ED:1B77
loc_35028:
	// 7267 
cs=0x24ed;eip=0x001b78; 	T(MOV(cx, ax));	// 109601 mov     cx, ax ;~ 24ED:1B78
loc_3502a:
	// 7268 
cs=0x24ed;eip=0x001b7a; 	T(MOV(si, di));	// 109604 mov     si, di ;~ 24ED:1B7A
cs=0x24ed;eip=0x001b7c; 	X(MOVSW);	// 109605 movsw ;~ 24ED:1B7C
cs=0x24ed;eip=0x001b7d; 	T(ADD(di, 0x13E));	// 109606 add     di, 13Eh ;~ 24ED:1B7D
cs=0x24ed;eip=0x001b81; 	J(LOOP(loc_3502a));	// 109607 loop    loc_3502A ;~ 24ED:1B81
cs=0x24ed;eip=0x001b83; 	J(RETF(0));	// 109608 retf ;~ 24ED:1B83
loc_35034:
	// 7269 
cs=0x24ed;eip=0x001b84; 	T(MOV(cx, ax));	// 109612 mov     cx, ax ;~ 24ED:1B84
loc_35036:
	// 7270 
cs=0x24ed;eip=0x001b86; 	T(MOV(si, di));	// 109615 mov     si, di ;~ 24ED:1B86
cs=0x24ed;eip=0x001b88; 	X(MOVSW);	// 109616 movsw ;~ 24ED:1B88
cs=0x24ed;eip=0x001b89; 	X(MOVSB);	// 109617 movsb ;~ 24ED:1B89
cs=0x24ed;eip=0x001b8a; 	T(ADD(di, 0x13D));	// 109618 add     di, 13Dh ;~ 24ED:1B8A
cs=0x24ed;eip=0x001b8e; 	J(LOOP(loc_35036));	// 109619 loop    loc_35036 ;~ 24ED:1B8E
cs=0x24ed;eip=0x001b90; 	J(RETF(0));	// 109620 retf ;~ 24ED:1B90

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_34fbc: 	goto loc_34fbc;
        case m2c::kloc_34fcd: 	goto loc_34fcd;
        case m2c::kloc_34fd3: 	goto loc_34fd3;
        case m2c::kloc_34fe5: 	goto loc_34fe5;
        case m2c::kloc_34ff1: 	goto loc_34ff1;
        case m2c::kloc_35003: 	goto loc_35003;
        case m2c::kloc_35009: 	goto loc_35009;
        case m2c::kloc_3501c: 	goto loc_3501c;
        case m2c::kloc_3501e: 	goto loc_3501e;
        case m2c::kloc_35028: 	goto loc_35028;
        case m2c::kloc_3502a: 	goto loc_3502a;
        case m2c::kloc_35034: 	goto loc_35034;
        case m2c::kloc_35036: 	goto loc_35036;
        case m2c::klocret_34fe4: 	goto locret_34fe4;
        case m2c::ksub_34fa7: 	goto sub_34fa7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35041(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35041:
    _begin:
cs=0x24ed;eip=0x001b91; 	T(MOV(bp, di));	// 109628 mov     bp, di ;~ 24ED:1B91
cs=0x24ed;eip=0x001b93; 	T(AND(bp, 0x1FF));	// 109629 and     bp, 1FFh ;~ 24ED:1B93
cs=0x24ed;eip=0x001b97; 	J(CALL(sub_340a8,0));	// 109630 call    sub_340A8 ;~ 24ED:1B97
cs=0x24ed;eip=0x001b9a; 	T(MOV(dx, cx));	// 109631 mov     dx, cx ;~ 24ED:1B9A
cs=0x24ed;eip=0x001b9c; 	T(XOR(dh, dh));	// 109632 xor     dh, dh ;~ 24ED:1B9C
loc_3504e:
	// 7271 
cs=0x24ed;eip=0x001b9e; 	T(MOV(cx, bp));	// 109635 mov     cx, bp ;~ 24ED:1B9E
cs=0x24ed;eip=0x001ba0; 	X(PUSH(di));	// 109636 push    di ;~ 24ED:1BA0
loc_35051:
	// 7272 
cs=0x24ed;eip=0x001ba1; 	X(MOVSB);	// 109639 movsb ;~ 24ED:1BA1
cs=0x24ed;eip=0x001ba2; 	T(INC(di));	// 109640 inc     di ;~ 24ED:1BA2
cs=0x24ed;eip=0x001ba3; 	J(LOOP(loc_35051));	// 109641 loop    loc_35051 ;~ 24ED:1BA3
cs=0x24ed;eip=0x001ba5; 	X(POP(di));	// 109642 pop     di ;~ 24ED:1BA5
cs=0x24ed;eip=0x001ba6; 	T(ADD(di, 0x280));	// 109643 add     di, 280h ;~ 24ED:1BA6
cs=0x24ed;eip=0x001baa; 	T(DEC(dx));	// 109644 dec     dx ;~ 24ED:1BAA
cs=0x24ed;eip=0x001bab; 	J(JNZ(loc_3504e));	// 109645 jnz     short loc_3504E ;~ 24ED:1BAB
cs=0x24ed;eip=0x001bad; 	J(RETF(0));	// 109646 retf ;~ 24ED:1BAD

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_3504e: 	goto loc_3504e;
        case m2c::kloc_35051: 	goto loc_35051;
        case m2c::ksub_35041: 	goto sub_35041;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3505e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3505e:
    _begin:
cs=0x24ed;eip=0x001bae; 	X(PUSH(ds));	// 109655 push    ds ;~ 24ED:1BAE
cs=0x24ed;eip=0x001baf; 	T(MOV(ds, si));	// 109656 mov     ds, si ;~ 24ED:1BAF
cs=0x24ed;eip=0x001bb1; 	T(XOR(si, si));	// 109658 xor     si, si ;~ 24ED:1BB1
cs=0x24ed;eip=0x001bb3; 	T(MOV(di, si));	// 109659 mov     di, si ;~ 24ED:1BB3
cs=0x24ed;eip=0x001bb5; 	T(MOV(cx, 0x2F80));	// 109660 mov     cx, 2F80h ;~ 24ED:1BB5
	// 109661 rep movsd ;~ 24ED:1BB8
cs=0x24ed;eip=0x001bb8; 	X(	REP MOVSD);	// 109661 rep movsd ;~ 24ED:1BB8
cs=0x24ed;eip=0x001bbb; 	X(POP(ds));	// 109662 pop     ds ;~ 24ED:1BBB
cs=0x24ed;eip=0x001bbc; 	J(RETF(0));	// 109664 retf ;~ 24ED:1BBC

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_3505e: 	goto sub_3505e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3506d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3506d:
    _begin:
cs=0x24ed;eip=0x001bbd; 	J(CALL(sub_340a8,0));	// 109672 call    sub_340A8 ;~ 24ED:1BBD
cs=0x24ed;eip=0x001bc0; 	T(MOV(bx, ax));	// 109673 mov     bx, ax ;~ 24ED:1BC0
cs=0x24ed;eip=0x001bc2; 	T(MOV(dx, cx));	// 109674 mov     dx, cx ;~ 24ED:1BC2
cs=0x24ed;eip=0x001bc4; 	T(XOR(cx, cx));	// 109675 xor     cx, cx ;~ 24ED:1BC4
cs=0x24ed;eip=0x001bc6; 	T(MOV(bp, di));	// 109676 mov     bp, di ;~ 24ED:1BC6
cs=0x24ed;eip=0x001bc8; 	T(OR(bh, bh));	// 109677 or      bh, bh ;~ 24ED:1BC8
cs=0x24ed;eip=0x001bca; 	J(JZ(loc_35097));	// 109678 jz      short loc_35097 ;~ 24ED:1BCA
loc_3507c:
	// 7273 
cs=0x24ed;eip=0x001bcc; 	T(MOV(cl, dl));	// 109681 mov     cl, dl ;~ 24ED:1BCC
cs=0x24ed;eip=0x001bce; 	T(LODSB);	// 109682 lodsb ;~ 24ED:1BCE
cs=0x24ed;eip=0x001bcf; 	T(MOV(ah, al));	// 109683 mov     ah, al ;~ 24ED:1BCF
loc_35081:
	// 7274 
cs=0x24ed;eip=0x001bd1; 	T(MOV(al, bl));	// 109686 mov     al, bl ;~ 24ED:1BD1
cs=0x24ed;eip=0x001bd3; 	T(SHL(ah, 1));	// 109687 shl     ah, 1 ;~ 24ED:1BD3
cs=0x24ed;eip=0x001bd5; 	J(JC(loc_35089));	// 109688 jb      short loc_35089 ;~ 24ED:1BD5
cs=0x24ed;eip=0x001bd7; 	T(MOV(al, bh));	// 109689 mov     al, bh ;~ 24ED:1BD7
loc_35089:
	// 7275 
cs=0x24ed;eip=0x001bd9; 	X(STOSB);	// 109692 stosb ;~ 24ED:1BD9
cs=0x24ed;eip=0x001bda; 	J(LOOP(loc_35081));	// 109693 loop    loc_35081 ;~ 24ED:1BDA
cs=0x24ed;eip=0x001bdc; 	T(ADD(bp, 0x140));	// 109694 add     bp, 140h ;~ 24ED:1BDC
cs=0x24ed;eip=0x001be0; 	T(MOV(di, bp));	// 109695 mov     di, bp ;~ 24ED:1BE0
cs=0x24ed;eip=0x001be2; 	T(DEC(dh));	// 109696 dec     dh ;~ 24ED:1BE2
cs=0x24ed;eip=0x001be4; 	J(JNZ(loc_3507c));	// 109697 jnz     short loc_3507C ;~ 24ED:1BE4
cs=0x24ed;eip=0x001be6; 	J(RETF(0));	// 109698 retf ;~ 24ED:1BE6
loc_35097:
	// 7276 
cs=0x24ed;eip=0x001be7; 	T(MOV(cl, dl));	// 109703 mov     cl, dl ;~ 24ED:1BE7
cs=0x24ed;eip=0x001be9; 	T(LODSB);	// 109704 lodsb ;~ 24ED:1BE9
cs=0x24ed;eip=0x001bea; 	T(MOV(ah, al));	// 109705 mov     ah, al ;~ 24ED:1BEA
cs=0x24ed;eip=0x001bec; 	T(MOV(al, bl));	// 109706 mov     al, bl ;~ 24ED:1BEC
loc_3509e:
	// 7277 
cs=0x24ed;eip=0x001bee; 	T(SHL(ah, 1));	// 109710 shl     ah, 1 ;~ 24ED:1BEE
cs=0x24ed;eip=0x001bf0; 	J(JC(loc_350b0));	// 109711 jb      short loc_350B0 ;~ 24ED:1BF0
cs=0x24ed;eip=0x001bf2; 	T(INC(di));	// 109712 inc     di ;~ 24ED:1BF2
cs=0x24ed;eip=0x001bf3; 	J(LOOP(loc_3509e));	// 109713 loop    loc_3509E ;~ 24ED:1BF3
cs=0x24ed;eip=0x001bf5; 	T(ADD(bp, 0x140));	// 109714 add     bp, 140h ;~ 24ED:1BF5
cs=0x24ed;eip=0x001bf9; 	T(MOV(di, bp));	// 109715 mov     di, bp ;~ 24ED:1BF9
cs=0x24ed;eip=0x001bfb; 	T(DEC(dh));	// 109716 dec     dh ;~ 24ED:1BFB
cs=0x24ed;eip=0x001bfd; 	J(JNZ(loc_35097));	// 109717 jnz     short loc_35097 ;~ 24ED:1BFD
cs=0x24ed;eip=0x001bff; 	J(RETF(0));	// 109718 retf ;~ 24ED:1BFF
loc_350b0:
	// 7278 
cs=0x24ed;eip=0x001c00; 	X(STOSB);	// 109722 stosb ;~ 24ED:1C00
cs=0x24ed;eip=0x001c01; 	J(LOOP(loc_3509e));	// 109723 loop    loc_3509E ;~ 24ED:1C01
cs=0x24ed;eip=0x001c03; 	T(ADD(bp, 0x140));	// 109724 add     bp, 140h ;~ 24ED:1C03
cs=0x24ed;eip=0x001c07; 	T(MOV(di, bp));	// 109725 mov     di, bp ;~ 24ED:1C07
cs=0x24ed;eip=0x001c09; 	T(DEC(dh));	// 109726 dec     dh ;~ 24ED:1C09
cs=0x24ed;eip=0x001c0b; 	J(JNZ(loc_35097));	// 109727 jnz     short loc_35097 ;~ 24ED:1C0B
cs=0x24ed;eip=0x001c0d; 	J(RETF(0));	// 109728 retf ;~ 24ED:1C0D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_3507c: 	goto loc_3507c;
        case m2c::kloc_35081: 	goto loc_35081;
        case m2c::kloc_35089: 	goto loc_35089;
        case m2c::kloc_35097: 	goto loc_35097;
        case m2c::kloc_3509e: 	goto loc_3509e;
        case m2c::kloc_350b0: 	goto loc_350b0;
        case m2c::ksub_3506d: 	goto sub_3506d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_350be(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_350be:
    _begin:
cs=0x24ed;eip=0x001c0e; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0))));	// 109737 mov     dx, [bp+0] ;~ 24ED:1C0E
cs=0x24ed;eip=0x001c11; 	T(MOV(bx, *(dw*)(raddr(ss,bp+2))));	// 109738 mov     bx, [bp+2] ;~ 24ED:1C11
cs=0x24ed;eip=0x001c14; 	J(CALL(sub_340a8,0));	// 109739 call    sub_340A8 ;~ 24ED:1C14
cs=0x24ed;eip=0x001c17; 	T(MOV(cx, *(dw*)(raddr(ss,bp+4))));	// 109740 mov     cx, [bp+4] ;~ 24ED:1C17
cs=0x24ed;eip=0x001c1a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 109741 mov     ax, [bp+6] ;~ 24ED:1C1A
cs=0x24ed;eip=0x001c1d; 	T(SUB(cx, dx));	// 109742 sub     cx, dx ;~ 24ED:1C1D
cs=0x24ed;eip=0x001c1f; 	T(SUB(ax, bx));	// 109743 sub     ax, bx ;~ 24ED:1C1F
cs=0x24ed;eip=0x001c21; 	T(XCHG(di, si));	// 109744 xchg    di, si ;~ 24ED:1C21
cs=0x24ed;eip=0x001c23; 	T(MOV(dx, 0x140));	// 109745 mov     dx, 140h ;~ 24ED:1C23
cs=0x24ed;eip=0x001c26; 	T(SUB(dx, cx));	// 109746 sub     dx, cx ;~ 24ED:1C26
cs=0x24ed;eip=0x001c28; 	X(PUSH(ds));	// 109747 push    ds ;~ 24ED:1C28
cs=0x24ed;eip=0x001c29; 	X(PUSH(es));	// 109748 push    es ;~ 24ED:1C29
cs=0x24ed;eip=0x001c2a; 	X(POP(ds));	// 109749 pop     ds ;~ 24ED:1C2A
cs=0x24ed;eip=0x001c2b; 	X(POP(es));	// 109751 pop     es ;~ 24ED:1C2B
loc_350dc:
	// 7279 
cs=0x24ed;eip=0x001c2c; 	X(PUSH(cx));	// 109755 push    cx ;~ 24ED:1C2C
cs=0x24ed;eip=0x001c2d; 	T(MOV(bp, cx));	// 109756 mov     bp, cx ;~ 24ED:1C2D
cs=0x24ed;eip=0x001c2f; 	T(SHR(cx, 2));	// 109757 shr     cx, 2 ;~ 24ED:1C2F
	// 109758 rep movsd ;~ 24ED:1C32
cs=0x24ed;eip=0x001c32; 	X(	REP MOVSD);	// 109758 rep movsd ;~ 24ED:1C32
cs=0x24ed;eip=0x001c35; 	T(MOV(cx, bp));	// 109759 mov     cx, bp ;~ 24ED:1C35
cs=0x24ed;eip=0x001c37; 	T(AND(cx, 3));	// 109760 and     cx, 3 ;~ 24ED:1C37
	// 109761 rep movsb ;~ 24ED:1C3A
cs=0x24ed;eip=0x001c3a; 	X(	REP MOVSB);	// 109761 rep movsb ;~ 24ED:1C3A
cs=0x24ed;eip=0x001c3c; 	X(POP(cx));	// 109762 pop     cx ;~ 24ED:1C3C
cs=0x24ed;eip=0x001c3d; 	T(ADD(si, dx));	// 109763 add     si, dx ;~ 24ED:1C3D
cs=0x24ed;eip=0x001c3f; 	T(DEC(ax));	// 109764 dec     ax ;~ 24ED:1C3F
cs=0x24ed;eip=0x001c40; 	J(JNZ(loc_350dc));	// 109765 jnz     short loc_350DC ;~ 24ED:1C40
cs=0x24ed;eip=0x001c42; 	X(PUSH(ss));	// 109766 push    ss ;~ 24ED:1C42
cs=0x24ed;eip=0x001c43; 	X(POP(ds));	// 109767 pop     ds ;~ 24ED:1C43
cs=0x24ed;eip=0x001c44; 	J(RETF(0));	// 109769 retf ;~ 24ED:1C44

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_350dc: 	goto loc_350dc;
        case m2c::ksub_350be: 	goto sub_350be;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_350f5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_350f5:
    _begin:
cs=0x24ed;eip=0x001c45; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0))));	// 109778 mov     dx, [bp+0] ;~ 24ED:1C45
cs=0x24ed;eip=0x001c48; 	T(MOV(bx, *(dw*)(raddr(ss,bp+2))));	// 109779 mov     bx, [bp+2] ;~ 24ED:1C48
cs=0x24ed;eip=0x001c4b; 	J(CALL(sub_340a8,0));	// 109780 call    sub_340A8 ;~ 24ED:1C4B
cs=0x24ed;eip=0x001c4e; 	T(MOV(cx, *(dw*)(raddr(ss,bp+4))));	// 109781 mov     cx, [bp+4] ;~ 24ED:1C4E
cs=0x24ed;eip=0x001c51; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 109782 mov     ax, [bp+6] ;~ 24ED:1C51
cs=0x24ed;eip=0x001c54; 	T(SUB(cx, dx));	// 109783 sub     cx, dx ;~ 24ED:1C54
cs=0x24ed;eip=0x001c56; 	T(SUB(ax, bx));	// 109784 sub     ax, bx ;~ 24ED:1C56
cs=0x24ed;eip=0x001c58; 	T(MOV(dx, 0x140));	// 109785 mov     dx, 140h ;~ 24ED:1C58
cs=0x24ed;eip=0x001c5b; 	T(SUB(dx, cx));	// 109786 sub     dx, cx ;~ 24ED:1C5B
loc_3510d:
	// 7280 
cs=0x24ed;eip=0x001c5d; 	X(PUSH(cx));	// 109789 push    cx ;~ 24ED:1C5D
cs=0x24ed;eip=0x001c5e; 	T(MOV(bp, cx));	// 109790 mov     bp, cx ;~ 24ED:1C5E
cs=0x24ed;eip=0x001c60; 	T(SHR(cx, 2));	// 109791 shr     cx, 2 ;~ 24ED:1C60
	// 109792 rep movsd ;~ 24ED:1C63
cs=0x24ed;eip=0x001c63; 	X(	REP MOVSD);	// 109792 rep movsd ;~ 24ED:1C63
cs=0x24ed;eip=0x001c66; 	T(MOV(cx, bp));	// 109793 mov     cx, bp ;~ 24ED:1C66
cs=0x24ed;eip=0x001c68; 	T(AND(cx, 3));	// 109794 and     cx, 3 ;~ 24ED:1C68
	// 109795 rep movsb ;~ 24ED:1C6B
cs=0x24ed;eip=0x001c6b; 	X(	REP MOVSB);	// 109795 rep movsb ;~ 24ED:1C6B
cs=0x24ed;eip=0x001c6d; 	X(POP(cx));	// 109796 pop     cx ;~ 24ED:1C6D
cs=0x24ed;eip=0x001c6e; 	T(ADD(di, dx));	// 109797 add     di, dx ;~ 24ED:1C6E
cs=0x24ed;eip=0x001c70; 	T(DEC(ax));	// 109798 dec     ax ;~ 24ED:1C70
cs=0x24ed;eip=0x001c71; 	J(JNZ(loc_3510d));	// 109799 jnz     short loc_3510D ;~ 24ED:1C71
cs=0x24ed;eip=0x001c73; 	X(PUSH(ss));	// 109800 push    ss ;~ 24ED:1C73
cs=0x24ed;eip=0x001c74; 	X(POP(ds));	// 109801 pop     ds ;~ 24ED:1C74
cs=0x24ed;eip=0x001c75; 	J(RETF(0));	// 109802 retf ;~ 24ED:1C75

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_3510d: 	goto loc_3510d;
        case m2c::ksub_350f5: 	goto sub_350f5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group141(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group141:
    _begin:
sub_3513c:
	// 109833 
cs=0x24ed;eip=0x001c8c; 	T(OR(al, al));	// 109834 or      al, al ;~ 24ED:1C8C
cs=0x24ed;eip=0x001c8e; 	T(MOV(ax, 0x9090));	// 109835 mov     ax, 9090h ;~ 24ED:1C8E
cs=0x24ed;eip=0x001c91; 	J(JZ(loc_35146));	// 109836 jz      short loc_35146 ;~ 24ED:1C91
cs=0x24ed;eip=0x001c93; 	T(MOV(ax, 0x7DEB));	// 109837 mov     ax, 7DEBh ;~ 24ED:1C93
loc_35146:
	// 7281 
cs=0x24ed;eip=0x001c96; 	X(MOV(*(dw*)(raddr(cs,m2c::kloc_352cc)), ax));	// 109840 mov     word ptr cs:loc_352CC, ax ;~ 24ED:1C96
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001c9a; 	X(MOV(*(dw*)(((db*)&word_35126)), si));	// 109841 mov     cs:word_35126, si ;~ 24ED:1C9A
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001c9f; 	X(MOV(*(dw*)(((db*)&word_35128)), ds));	// 109842 mov     cs:word_35128, ds ;~ 24ED:1C9F
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001ca4; 	X(MOV(*(dw*)(((db*)&word_3512a)), bp));	// 109843 mov     cs:word_3512A, bp ;~ 24ED:1CA4
cs=0x24ed;eip=0x001ca9; 	T(ADD(bp, 0x319));	// 109844 add     bp, 319h ;~ 24ED:1CA9
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001cad; 	X(MOV(*(dw*)(((db*)&word_3512e)), bp));	// 109845 mov     cs:word_3512E, bp ;~ 24ED:1CAD
cs=0x24ed;eip=0x001cb2; 	T(MOV(di, bp));	// 109846 mov     di, bp ;~ 24ED:1CB2
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001cb4; 	X(MOV(*(dw*)(((db*)&word_3512c)), bp));	// 109847 mov     cs:word_3512C, bp ;~ 24ED:1CB4
cs=0x24ed;eip=0x001cb9; 	T(ADD(bp, 0x0CD9));	// 109848 add     bp, 0CD9h ;~ 24ED:1CB9
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001cbd; 	X(MOV(*(dw*)(((db*)&word_35130)), bp));	// 109849 mov     cs:word_35130, bp ;~ 24ED:1CBD
cs=0x24ed;eip=0x001cc2; 	T(ADD(bp, 0x3301));	// 109850 add     bp, 3301h ;~ 24ED:1CC2
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001cc6; 	X(MOV(*(dw*)(((db*)&word_35132)), bp));	// 109851 mov     cs:word_35132, bp ;~ 24ED:1CC6
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001ccb; 	X(MOV(*(dw*)(((db*)&word_3513a)), 0x0FEC0));	// 109852 mov     cs:word_3513A, 0FEC0h ;~ 24ED:1CCB
cs=0x24ed;eip=0x001cd2; 	X(PUSH(cs));	// 109853 push    cs ;~ 24ED:1CD2
cs=0x24ed;eip=0x001cd3; 	J(CALL(sub_351e0,0));	// 109854 call    near ptr sub_351E0 ;~ 24ED:1CD3
loc_35186:
	// 7282 
cs=0x24ed;eip=0x001cd6; 	X(PUSH(cs));	// 109858 push    cs ;~ 24ED:1CD6
cs=0x24ed;eip=0x001cd7; 	J(CALL(sub_3518d,0));	// 109859 call    near ptr sub_3518D ;~ 24ED:1CD7
cs=0x24ed;eip=0x001cda; 	J(JNC(loc_35186));	// 109860 jnb     short loc_35186 ;~ 24ED:1CDA
cs=0x24ed;eip=0x001cdc; 	J(RETF(0));	// 109861 retf ;~ 24ED:1CDC
sub_3518d:
	// 109868 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001cdd; 	T(MOV(ds, *(dw*)(((db*)&word_35128))));	// 109874 mov     ds, cs:word_35128 ;~ 24ED:1CDD
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001ce2; 	T(MOV(di, *(dw*)(((db*)&word_3512c))));	// 109876 mov     di, cs:word_3512C ;~ 24ED:1CE2
cs=0x24ed;eip=0x001ce7; 	T(MOV(al, *(raddr(ss,di))));	// 109877 mov     al, ss:[di] ;~ 24ED:1CE7
cs=0x24ed;eip=0x001cea; 	T(XOR(ah, ah));	// 109878 xor     ah, ah ;~ 24ED:1CEA
cs=0x24ed;eip=0x001cec; 	T(INC(di));	// 109879 inc     di ;~ 24ED:1CEC
cs=0x24ed;eip=0x001ced; 	T(OR(al, al));	// 109880 or      al, al ;~ 24ED:1CED
cs=0x24ed;eip=0x001cef; 	J(JNS(loc_351d8));	// 109881 jns     short loc_351D8 ;~ 24ED:1CEF
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001cf1; 	T(MOV(di, *(dw*)(((db*)&word_3512e))));	// 109882 mov     di, cs:word_3512E ;~ 24ED:1CF1
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001cf6; 	X(NEG(*(dw*)(((db*)&word_3513a))));	// 109883 neg     cs:word_3513A ;~ 24ED:1CF6
cs=0x24ed;eip=0x001cfb; 	J(JS(sub_351e0));	// 109884 js      short near ptr sub_351E0 ;~ 24ED:1CFB
cs=0x24ed;eip=0x001cfd; 	X(MOV(*(dw*)(raddr(cs,m2c::kloc_35327+1)), 0x0FEDF));	// 109885 mov     word ptr cs:loc_35327+1, 0FEDFh ;~ 24ED:1CFD
cs=0x24ed;eip=0x001d04; 	X(MOV(*(dw*)(raddr(cs,m2c::kloc_353aa+1)), 0x0FE5C));	// 109886 mov     word ptr cs:loc_353AA+1, 0FE5Ch ;~ 24ED:1D04
cs=0x24ed;eip=0x001d0b; 	T(MOV(ax, 0x64A0));	// 109887 mov     ax, 64A0h ;~ 24ED:1D0B
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001d0e; 	X(MOV(*(dw*)(((db*)&word_35136)), ax));	// 109888 mov     cs:word_35136, ax ;~ 24ED:1D0E
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001d12; 	X(MOV(*(dw*)(((db*)&word_35138)), ax));	// 109889 mov     cs:word_35138, ax ;~ 24ED:1D12
cs=0x24ed;eip=0x001d16; 	T(DEC(ax));	// 109890 dec     ax ;~ 24ED:1D16
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001d17; 	X(MOV(*(dw*)(((db*)&word_35134)), ax));	// 109891 mov     cs:word_35134, ax ;~ 24ED:1D17
cs=0x24ed;eip=0x001d1b; 	T(MOV(al, *(raddr(ss,di-1))));	// 109892 mov     al, ss:[di-1] ;~ 24ED:1D1B
cs=0x24ed;eip=0x001d1f; 	T(CBW);	// 109893 cbw ;~ 24ED:1D1F
cs=0x24ed;eip=0x001d20; 	T(SUB(di, ax));	// 109894 sub     di, ax ;~ 24ED:1D20
cs=0x24ed;eip=0x001d22; 	T(MOV(al, *(raddr(ss,di))));	// 109895 mov     al, ss:[di] ;~ 24ED:1D22
cs=0x24ed;eip=0x001d25; 	T(XOR(ah, ah));	// 109896 xor     ah, ah ;~ 24ED:1D25
cs=0x24ed;eip=0x001d27; 	T(INC(di));	// 109897 inc     di ;~ 24ED:1D27
loc_351d8:
	// 7283 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001d28; 	T(MOV(si, *(dw*)(((db*)&word_35130))));	// 109900 mov     si, cs:word_35130 ;~ 24ED:1D28
cs=0x24ed;eip=0x001d2d; 	J(JMP(loc_35327));	// 109901 jmp     loc_35327 ;~ 24ED:1D2D
sub_351e0:
	// 109908 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001d30; 	X(MOV(*(dw*)(((db*)&word_3512c)), di));	// 109910 mov     cs:word_3512C, di ;~ 24ED:1D30
cs=0x24ed;eip=0x001d35; 	X(MOV(*(dw*)(raddr(cs,m2c::kloc_35327+1)), 0x0FEE1));	// 109911 mov     word ptr cs:loc_35327+1, 0FEE1h ;~ 24ED:1D35
cs=0x24ed;eip=0x001d3c; 	X(MOV(*(dw*)(raddr(cs,m2c::kloc_353aa+1)), 0x0FE5E));	// 109912 mov     word ptr cs:loc_353AA+1, 0FE5Eh ;~ 24ED:1D3C
cs=0x24ed;eip=0x001d43; 	T(MOV(ax, 0x6360));	// 109913 mov     ax, 6360h ;~ 24ED:1D43
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001d46; 	X(MOV(*(dw*)(((db*)&word_35136)), ax));	// 109914 mov     cs:word_35136, ax ;~ 24ED:1D46
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001d4a; 	X(MOV(*(dw*)(((db*)&word_35138)), ax));	// 109915 mov     cs:word_35138, ax ;~ 24ED:1D4A
cs=0x24ed;eip=0x001d4e; 	T(DEC(ax));	// 109916 dec     ax ;~ 24ED:1D4E
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001d4f; 	X(MOV(*(dw*)(((db*)&word_35134)), ax));	// 109917 mov     cs:word_35134, ax ;~ 24ED:1D4F
cs=0x24ed;eip=0x001d53; 	T(MOV(ax, ss));	// 109918 mov     ax, ss ;~ 24ED:1D53
cs=0x24ed;eip=0x001d55; 	T(MOV(ds, ax));	// 109919 mov     ds, ax ;~ 24ED:1D55
cs=0x24ed;eip=0x001d57; 	T(STC);	// 109921 stc ;~ 24ED:1D57
cs=0x24ed;eip=0x001d58; 	J(RETF(0));	// 109922 retf ;~ 24ED:1D58
seg002_1d59_proc:
	// 109927 
cs=0x24ed;eip=0x001d59; 	T(NEG(ax));	// 109927 neg     ax ;~ 24ED:1D59
loc_3520b:
	// 7284 
cs=0x24ed;eip=0x001d5b; 	T(ADD(ax, ax));	// 109932 add     ax, ax ;~ 24ED:1D5B
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001d5d; 	T(MOV(bp, *(dw*)(((db*)&word_35132))));	// 109933 mov     bp, cs:word_35132 ;~ 24ED:1D5D
cs=0x24ed;eip=0x001d62; 	T(ADD(bp, ax));	// 109934 add     bp, ax ;~ 24ED:1D62
cs=0x24ed;eip=0x001d64; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 109935 mov     ax, [bp+0] ;~ 24ED:1D64
cs=0x24ed;eip=0x001d67; 	T(OR(ax, ax));	// 109936 or      ax, ax ;~ 24ED:1D67
cs=0x24ed;eip=0x001d69; 	J(JS(loc_35267));	// 109937 js      short loc_35267 ;~ 24ED:1D69
cs=0x24ed;eip=0x001d6b; 	T(CBW);	// 109938 cbw ;~ 24ED:1D6B
cs=0x24ed;eip=0x001d6c; 	T(OR(ax, ax));	// 109939 or      ax, ax ;~ 24ED:1D6C
cs=0x24ed;eip=0x001d6e; 	J(JNS(loc_35247));	// 109940 jns     short loc_35247 ;~ 24ED:1D6E
cs=0x24ed;eip=0x001d70; 	T(NEG(ax));	// 109941 neg     ax ;~ 24ED:1D70
cs=0x24ed;eip=0x001d72; 	T(MOV(bp, ax));	// 109942 mov     bp, ax ;~ 24ED:1D72
cs=0x24ed;eip=0x001d74; 	T(MOV(bl, *(raddr(ss,bp+si))));	// 109943 mov     bl, [bp+si] ;~ 24ED:1D74
cs=0x24ed;eip=0x001d76; 	T(MOV(al, *(raddr(ss,bp+si+0x64))));	// 109944 mov     al, [bp+si+64h] ;~ 24ED:1D76
cs=0x24ed;eip=0x001d79; 	T(XOR(ah, ah));	// 109945 xor     ah, ah ;~ 24ED:1D79
cs=0x24ed;eip=0x001d7b; 	T(MOV(bh, ah));	// 109946 mov     bh, ah ;~ 24ED:1D7B
cs=0x24ed;eip=0x001d7d; 	T(SHL(bx, 2));	// 109947 shl     bx, 2 ;~ 24ED:1D7D
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001d80; 	T(MOV(bp, *(dw*)(((db*)&word_3512a))));	// 109948 mov     bp, cs:word_3512A ;~ 24ED:1D80
cs=0x24ed;eip=0x001d85; 	T(ADD(bp, bx));	// 109949 add     bp, bx ;~ 24ED:1D85
cs=0x24ed;eip=0x001d87; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 109950 mov     bx, [bp+0] ;~ 24ED:1D87
cs=0x24ed;eip=0x001d8a; 	T(MOV(cx, *(dw*)(raddr(ss,bp+2))));	// 109951 mov     cx, [bp+2] ;~ 24ED:1D8A
cs=0x24ed;eip=0x001d8d; 	T(MOV(dx, *(dw*)(raddr(ss,bp+4))));	// 109952 mov     dx, [bp+4] ;~ 24ED:1D8D
cs=0x24ed;eip=0x001d90; 	T(NEG(ax));	// 109953 neg     ax ;~ 24ED:1D90
cs=0x24ed;eip=0x001d92; 	T(ADD(ax, cx));	// 109954 add     ax, cx ;~ 24ED:1D92
cs=0x24ed;eip=0x001d94; 	J(JMP(loc_352b4));	// 109955 jmp     short loc_352B4 ;~ 24ED:1D94
loc_35247:
	// 7285 
cs=0x24ed;eip=0x001d97; 	T(MOV(bp, ax));	// 109963 mov     bp, ax ;~ 24ED:1D97
cs=0x24ed;eip=0x001d99; 	T(MOV(bl, *(raddr(ss,bp+si))));	// 109964 mov     bl, [bp+si] ;~ 24ED:1D99
cs=0x24ed;eip=0x001d9b; 	T(MOV(al, *(raddr(ss,bp+si+0x64))));	// 109965 mov     al, [bp+si+64h] ;~ 24ED:1D9B
cs=0x24ed;eip=0x001d9e; 	T(XOR(ah, ah));	// 109966 xor     ah, ah ;~ 24ED:1D9E
cs=0x24ed;eip=0x001da0; 	T(MOV(bh, ah));	// 109967 mov     bh, ah ;~ 24ED:1DA0
cs=0x24ed;eip=0x001da2; 	T(SHL(bx, 2));	// 109968 shl     bx, 2 ;~ 24ED:1DA2
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001da5; 	T(MOV(bp, *(dw*)(((db*)&word_3512a))));	// 109969 mov     bp, cs:word_3512A ;~ 24ED:1DA5
cs=0x24ed;eip=0x001daa; 	T(ADD(bp, bx));	// 109970 add     bp, bx ;~ 24ED:1DAA
cs=0x24ed;eip=0x001dac; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 109971 mov     bx, [bp+0] ;~ 24ED:1DAC
cs=0x24ed;eip=0x001daf; 	T(MOV(cx, *(dw*)(raddr(ss,bp+2))));	// 109972 mov     cx, [bp+2] ;~ 24ED:1DAF
cs=0x24ed;eip=0x001db2; 	T(MOV(dx, *(dw*)(raddr(ss,bp+4))));	// 109973 mov     dx, [bp+4] ;~ 24ED:1DB2
cs=0x24ed;eip=0x001db5; 	J(JMP(loc_352b4));	// 109974 jmp     short loc_352B4 ;~ 24ED:1DB5
loc_35267:
	// 7286 
cs=0x24ed;eip=0x001db7; 	T(CBW);	// 109978 cbw ;~ 24ED:1DB7
cs=0x24ed;eip=0x001db8; 	T(OR(ax, ax));	// 109979 or      ax, ax ;~ 24ED:1DB8
cs=0x24ed;eip=0x001dba; 	J(JNS(loc_35294));	// 109980 jns     short loc_35294 ;~ 24ED:1DBA
cs=0x24ed;eip=0x001dbc; 	T(NEG(ax));	// 109981 neg     ax ;~ 24ED:1DBC
cs=0x24ed;eip=0x001dbe; 	T(MOV(bp, ax));	// 109982 mov     bp, ax ;~ 24ED:1DBE
cs=0x24ed;eip=0x001dc0; 	T(MOV(bl, *(raddr(ss,bp+si))));	// 109983 mov     bl, [bp+si] ;~ 24ED:1DC0
cs=0x24ed;eip=0x001dc2; 	T(MOV(al, *(raddr(ss,bp+si+0x64))));	// 109984 mov     al, [bp+si+64h] ;~ 24ED:1DC2
cs=0x24ed;eip=0x001dc5; 	T(XOR(ah, ah));	// 109985 xor     ah, ah ;~ 24ED:1DC5
cs=0x24ed;eip=0x001dc7; 	T(MOV(bh, ah));	// 109986 mov     bh, ah ;~ 24ED:1DC7
cs=0x24ed;eip=0x001dc9; 	T(SHL(bx, 2));	// 109987 shl     bx, 2 ;~ 24ED:1DC9
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001dcc; 	T(MOV(bp, *(dw*)(((db*)&word_3512a))));	// 109988 mov     bp, cs:word_3512A ;~ 24ED:1DCC
cs=0x24ed;eip=0x001dd1; 	T(ADD(bp, bx));	// 109989 add     bp, bx ;~ 24ED:1DD1
cs=0x24ed;eip=0x001dd3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 109990 mov     bx, [bp+0] ;~ 24ED:1DD3
cs=0x24ed;eip=0x001dd6; 	T(MOV(cx, *(dw*)(raddr(ss,bp+2))));	// 109991 mov     cx, [bp+2] ;~ 24ED:1DD6
cs=0x24ed;eip=0x001dd9; 	T(MOV(dx, *(dw*)(raddr(ss,bp+4))));	// 109992 mov     dx, [bp+4] ;~ 24ED:1DD9
cs=0x24ed;eip=0x001ddc; 	T(NEG(ax));	// 109993 neg     ax ;~ 24ED:1DDC
cs=0x24ed;eip=0x001dde; 	T(ADD(ax, cx));	// 109994 add     ax, cx ;~ 24ED:1DDE
cs=0x24ed;eip=0x001de0; 	T(NEG(bx));	// 109995 neg     bx ;~ 24ED:1DE0
cs=0x24ed;eip=0x001de2; 	J(JMP(loc_352b4));	// 109996 jmp     short loc_352B4 ;~ 24ED:1DE2
loc_35294:
	// 7287 
cs=0x24ed;eip=0x001de4; 	T(MOV(bp, ax));	// 110000 mov     bp, ax ;~ 24ED:1DE4
cs=0x24ed;eip=0x001de6; 	T(MOV(bl, *(raddr(ss,bp+si))));	// 110001 mov     bl, [bp+si] ;~ 24ED:1DE6
cs=0x24ed;eip=0x001de8; 	T(MOV(al, *(raddr(ss,bp+si+0x64))));	// 110002 mov     al, [bp+si+64h] ;~ 24ED:1DE8
cs=0x24ed;eip=0x001deb; 	T(XOR(ah, ah));	// 110003 xor     ah, ah ;~ 24ED:1DEB
cs=0x24ed;eip=0x001ded; 	T(MOV(bh, ah));	// 110004 mov     bh, ah ;~ 24ED:1DED
cs=0x24ed;eip=0x001def; 	T(SHL(bx, 2));	// 110005 shl     bx, 2 ;~ 24ED:1DEF
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001df2; 	T(MOV(bp, *(dw*)(((db*)&word_3512a))));	// 110006 mov     bp, cs:word_3512A ;~ 24ED:1DF2
cs=0x24ed;eip=0x001df7; 	T(ADD(bp, bx));	// 110007 add     bp, bx ;~ 24ED:1DF7
cs=0x24ed;eip=0x001df9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 110008 mov     bx, [bp+0] ;~ 24ED:1DF9
cs=0x24ed;eip=0x001dfc; 	T(MOV(cx, *(dw*)(raddr(ss,bp+2))));	// 110009 mov     cx, [bp+2] ;~ 24ED:1DFC
cs=0x24ed;eip=0x001dff; 	T(MOV(dx, *(dw*)(raddr(ss,bp+4))));	// 110010 mov     dx, [bp+4] ;~ 24ED:1DFF
cs=0x24ed;eip=0x001e02; 	T(NEG(bx));	// 110011 neg     bx ;~ 24ED:1E02
loc_352b4:
	// 7288 
cs=0x24ed;eip=0x001e04; 	T(ADD(cx, cx));	// 110015 add     cx, cx ;~ 24ED:1E04
cs=0x24ed;eip=0x001e06; 	T(MOV(bp, dx));	// 110016 mov     bp, dx ;~ 24ED:1E06
cs=0x24ed;eip=0x001e08; 	T(SUB(bp, ax));	// 110017 sub     bp, ax ;~ 24ED:1E08
cs=0x24ed;eip=0x001e0a; 	J(JNS(loc_352be));	// 110018 jns     short loc_352BE ;~ 24ED:1E0A
cs=0x24ed;eip=0x001e0c; 	T(ADD(bp, cx));	// 110019 add     bp, cx ;~ 24ED:1E0C
loc_352be:
	// 7289 
cs=0x24ed;eip=0x001e0e; 	T(ADD(bp, bx));	// 110022 add     bp, bx ;~ 24ED:1E0E
cs=0x24ed;eip=0x001e10; 	T(ADD(dx, ax));	// 110023 add     dx, ax ;~ 24ED:1E10
cs=0x24ed;eip=0x001e12; 	X(PUSH(si));	// 110024 push    si ;~ 24ED:1E12
cs=0x24ed;eip=0x001e13; 	X(PUSH(di));	// 110025 push    di ;~ 24ED:1E13
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001e14; 	T(MOV(si, *(dw*)(((db*)&word_35126))));	// 110026 mov     si, cs:word_35126 ;~ 24ED:1E14
cs=0x24ed;eip=0x001e19; 	T(MOV(al, *(raddr(ds,bp+si))));	// 110027 mov     al, ds:[bp+si] ;~ 24ED:1E19
loc_352cc:
	// 7290 
cs=0x24ed;eip=0x001e1c; 	T(NOP);	// 110030 nop ;~ 24ED:1E1C
cs=0x24ed;eip=0x001e1d; 	T(NOP);	// 110031 nop ;~ 24ED:1E1D
cs=0x24ed;eip=0x001e1e; 	T(MOV(ah, al));	// 110032 mov     ah, al ;~ 24ED:1E1E
cs=0x24ed;eip=0x001e20; 	T(AND(ax, 0x300F));	// 110033 and     ax, 300Fh ;~ 24ED:1E20
cs=0x24ed;eip=0x001e23; 	T(CMP(ah, 0x10));	// 110034 cmp     ah, 10h ;~ 24ED:1E23
cs=0x24ed;eip=0x001e26; 	J(JNZ(loc_352de));	// 110035 jnz     short loc_352DE ;~ 24ED:1E26
cs=0x24ed;eip=0x001e28; 	T(CMP(al, 8));	// 110036 cmp     al, 8 ;~ 24ED:1E28
cs=0x24ed;eip=0x001e2a; 	J(JNC(loc_352de));	// 110037 jnb     short loc_352DE ;~ 24ED:1E2A
cs=0x24ed;eip=0x001e2c; 	T(ADD(al, 0x0C));	// 110038 add     al, 0Ch ;~ 24ED:1E2C
loc_352de:
	// 7291 
cs=0x24ed;eip=0x001e2e; 	T(ADD(al, 0x10));	// 110042 add     al, 10h ;~ 24ED:1E2E
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001e30; 	T(MOV(di, *(dw*)(((db*)&word_35134))));	// 110043 mov     di, cs:word_35134 ;~ 24ED:1E30
cs=0x24ed;eip=0x001e35; 	T(STD);	// 110044 std ;~ 24ED:1E35
cs=0x24ed;eip=0x001e36; 	X(STOSB);	// 110045 stosb ;~ 24ED:1E36
cs=0x24ed;eip=0x001e37; 	T(CLD);	// 110046 cld ;~ 24ED:1E37
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001e38; 	X(MOV(*(dw*)(((db*)&word_35134)), di));	// 110047 mov     cs:word_35134, di ;~ 24ED:1E38
cs=0x24ed;eip=0x001e3d; 	T(MOV(bp, dx));	// 110048 mov     bp, dx ;~ 24ED:1E3D
cs=0x24ed;eip=0x001e3f; 	T(SUB(bp, cx));	// 110049 sub     bp, cx ;~ 24ED:1E3F
cs=0x24ed;eip=0x001e41; 	J(JNS(loc_352f5));	// 110050 jns     short loc_352F5 ;~ 24ED:1E41
cs=0x24ed;eip=0x001e43; 	T(ADD(bp, cx));	// 110051 add     bp, cx ;~ 24ED:1E43
loc_352f5:
	// 7292 
cs=0x24ed;eip=0x001e45; 	T(ADD(bp, bx));	// 110054 add     bp, bx ;~ 24ED:1E45
cs=0x24ed;eip=0x001e47; 	T(MOV(al, *(raddr(ds,bp+si))));	// 110055 mov     al, ds:[bp+si] ;~ 24ED:1E47
cs=0x24ed;eip=0x001e4a; 	T(MOV(ah, al));	// 110056 mov     ah, al ;~ 24ED:1E4A
cs=0x24ed;eip=0x001e4c; 	T(AND(ax, 0x300F));	// 110057 and     ax, 300Fh ;~ 24ED:1E4C
cs=0x24ed;eip=0x001e4f; 	T(CMP(ah, 0x10));	// 110058 cmp     ah, 10h ;~ 24ED:1E4F
cs=0x24ed;eip=0x001e52; 	J(JNZ(loc_3530a));	// 110059 jnz     short loc_3530A ;~ 24ED:1E52
cs=0x24ed;eip=0x001e54; 	T(CMP(al, 8));	// 110060 cmp     al, 8 ;~ 24ED:1E54
cs=0x24ed;eip=0x001e56; 	J(JNC(loc_3530a));	// 110061 jnb     short loc_3530A ;~ 24ED:1E56
cs=0x24ed;eip=0x001e58; 	T(ADD(al, 0x0C));	// 110062 add     al, 0Ch ;~ 24ED:1E58
loc_3530a:
	// 7293 
cs=0x24ed;eip=0x001e5a; 	T(ADD(al, 0x10));	// 110066 add     al, 10h ;~ 24ED:1E5A
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001e5c; 	T(MOV(di, *(dw*)(((db*)&word_35136))));	// 110067 mov     di, cs:word_35136 ;~ 24ED:1E5C
cs=0x24ed;eip=0x001e61; 	X(STOSB);	// 110068 stosb ;~ 24ED:1E61
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001e62; 	X(MOV(*(dw*)(((db*)&word_35136)), di));	// 110069 mov     cs:word_35136, di ;~ 24ED:1E62
cs=0x24ed;eip=0x001e67; 	X(POP(di));	// 110070 pop     di ;~ 24ED:1E67
cs=0x24ed;eip=0x001e68; 	X(POP(si));	// 110071 pop     si ;~ 24ED:1E68
cs=0x24ed;eip=0x001e69; 	T(ADD(si, 0x0C8));	// 110072 add     si, 0C8h ; 'È' ;~ 24ED:1E69
cs=0x24ed;eip=0x001e6d; 	T(MOV(al, *(raddr(ss,di))));	// 110073 mov     al, ss:[di] ;~ 24ED:1E6D
cs=0x24ed;eip=0x001e70; 	T(XOR(ah, ah));	// 110074 xor     ah, ah ;~ 24ED:1E70
cs=0x24ed;eip=0x001e72; 	T(INC(di));	// 110075 inc     di ;~ 24ED:1E72
cs=0x24ed;eip=0x001e73; 	T(OR(al, al));	// 110076 or      al, al ;~ 24ED:1E73
cs=0x24ed;eip=0x001e75; 	J(JS(loc_3532a));	// 110077 js      short loc_3532A ;~ 24ED:1E75
loc_35327:
	// 7294 
cs=0x24ed;eip=0x001e77; 	J(JMP(loc_3520b));	// 110081 jmp     loc_3520B ;~ 24ED:1E77
loc_3532a:
	// 7295 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001e7a; 	X(MOV(*(dw*)(((db*)&word_3512c)), di));	// 110085 mov     cs:word_3512C, di ;~ 24ED:1E7A
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001e7f; 	T(MOV(ax, *(dw*)(((db*)&word_3513a))));	// 110086 mov     ax, cs:word_3513A ;~ 24ED:1E7F
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001e83; 	T(ADD(ax, *(dw*)(((db*)&word_35138))));	// 110087 add     ax, cs:word_35138 ;~ 24ED:1E83
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001e88; 	X(MOV(*(dw*)(((db*)&word_35138)), ax));	// 110088 mov     cs:word_35138, ax ;~ 24ED:1E88
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001e8c; 	X(MOV(*(dw*)(((db*)&word_35136)), ax));	// 110089 mov     cs:word_35136, ax ;~ 24ED:1E8C
cs=0x24ed;eip=0x001e90; 	T(DEC(ax));	// 110090 dec     ax ;~ 24ED:1E90
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001e91; 	X(MOV(*(dw*)(((db*)&word_35134)), ax));	// 110091 mov     cs:word_35134, ax ;~ 24ED:1E91
cs=0x24ed;eip=0x001e95; 	T(CLC);	// 110092 clc ;~ 24ED:1E95
cs=0x24ed;eip=0x001e96; 	T(MOV(ax, ss));	// 110093 mov     ax, ss ;~ 24ED:1E96
cs=0x24ed;eip=0x001e98; 	T(MOV(ds, ax));	// 110094 mov     ds, ax ;~ 24ED:1E98
cs=0x24ed;eip=0x001e9a; 	J(RETF(0));	// 110096 retf ;~ 24ED:1E9A
ret_24ed_1e9b:
	// 7296 
cs=0x24ed;eip=0x001e9b; 	T(MOV(ah, al));	// 110100 mov     ah, al ;~ 24ED:1E9B
cs=0x24ed;eip=0x001e9d; 	T(AND(ax, 0x300F));	// 110101 and     ax, 300Fh ;~ 24ED:1E9D
cs=0x24ed;eip=0x001ea0; 	T(OR(al, 0x10));	// 110102 or      al, 10h ;~ 24ED:1EA0
cs=0x24ed;eip=0x001ea2; 	T(SUB(ah, 0x10));	// 110103 sub     ah, 10h ;~ 24ED:1EA2
cs=0x24ed;eip=0x001ea5; 	J(JC(loc_35360));	// 110104 jb      short loc_35360 ;~ 24ED:1EA5
cs=0x24ed;eip=0x001ea7; 	T(SHR(ah, 1));	// 110105 shr     ah, 1 ;~ 24ED:1EA7
cs=0x24ed;eip=0x001ea9; 	T(AND(ah, 0x10));	// 110106 and     ah, 10h ;~ 24ED:1EA9
cs=0x24ed;eip=0x001eac; 	T(ADD(al, 0x10));	// 110107 add     al, 10h ;~ 24ED:1EAC
cs=0x24ed;eip=0x001eae; 	T(ADD(al, ah));	// 110108 add     al, ah ;~ 24ED:1EAE
loc_35360:
	// 7297 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001eb0; 	T(MOV(di, *(dw*)(((db*)&word_35134))));	// 110111 mov     di, cs:word_35134 ;~ 24ED:1EB0
cs=0x24ed;eip=0x001eb5; 	T(STD);	// 110112 std ;~ 24ED:1EB5
cs=0x24ed;eip=0x001eb6; 	X(STOSB);	// 110113 stosb ;~ 24ED:1EB6
cs=0x24ed;eip=0x001eb7; 	T(CLD);	// 110114 cld ;~ 24ED:1EB7
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001eb8; 	X(MOV(*(dw*)(((db*)&word_35134)), di));	// 110115 mov     cs:word_35134, di ;~ 24ED:1EB8
cs=0x24ed;eip=0x001ebd; 	T(MOV(bp, dx));	// 110116 mov     bp, dx ;~ 24ED:1EBD
cs=0x24ed;eip=0x001ebf; 	T(SUB(bp, cx));	// 110117 sub     bp, cx ;~ 24ED:1EBF
cs=0x24ed;eip=0x001ec1; 	J(JNS(loc_35375));	// 110118 jns     short loc_35375 ;~ 24ED:1EC1
cs=0x24ed;eip=0x001ec3; 	T(ADD(bp, cx));	// 110119 add     bp, cx ;~ 24ED:1EC3
loc_35375:
	// 7298 
cs=0x24ed;eip=0x001ec5; 	T(ADD(bp, bx));	// 110122 add     bp, bx ;~ 24ED:1EC5
cs=0x24ed;eip=0x001ec7; 	T(MOV(al, *(raddr(ds,bp+si))));	// 110123 mov     al, ds:[bp+si] ;~ 24ED:1EC7
cs=0x24ed;eip=0x001eca; 	T(MOV(ah, al));	// 110124 mov     ah, al ;~ 24ED:1ECA
cs=0x24ed;eip=0x001ecc; 	T(AND(ax, 0x300F));	// 110125 and     ax, 300Fh ;~ 24ED:1ECC
cs=0x24ed;eip=0x001ecf; 	T(OR(al, 0x10));	// 110126 or      al, 10h ;~ 24ED:1ECF
cs=0x24ed;eip=0x001ed1; 	T(SUB(ah, 0x10));	// 110127 sub     ah, 10h ;~ 24ED:1ED1
cs=0x24ed;eip=0x001ed4; 	J(JC(loc_3538f));	// 110128 jb      short loc_3538F ;~ 24ED:1ED4
cs=0x24ed;eip=0x001ed6; 	T(SHR(ah, 1));	// 110129 shr     ah, 1 ;~ 24ED:1ED6
cs=0x24ed;eip=0x001ed8; 	T(AND(ah, 0x10));	// 110130 and     ah, 10h ;~ 24ED:1ED8
cs=0x24ed;eip=0x001edb; 	T(ADD(al, 0x10));	// 110131 add     al, 10h ;~ 24ED:1EDB
cs=0x24ed;eip=0x001edd; 	T(ADD(al, ah));	// 110132 add     al, ah ;~ 24ED:1EDD
loc_3538f:
	// 7299 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001edf; 	T(MOV(di, *(dw*)(((db*)&word_35136))));	// 110135 mov     di, cs:word_35136 ;~ 24ED:1EDF
cs=0x24ed;eip=0x001ee4; 	X(STOSB);	// 110136 stosb ;~ 24ED:1EE4
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001ee5; 	X(MOV(*(dw*)(((db*)&word_35136)), di));	// 110137 mov     cs:word_35136, di ;~ 24ED:1EE5
cs=0x24ed;eip=0x001eea; 	X(POP(di));	// 110138 pop     di ;~ 24ED:1EEA
cs=0x24ed;eip=0x001eeb; 	X(POP(si));	// 110139 pop     si ;~ 24ED:1EEB
cs=0x24ed;eip=0x001eec; 	T(ADD(si, 0x0C8));	// 110140 add     si, 0C8h ; 'È' ;~ 24ED:1EEC
cs=0x24ed;eip=0x001ef0; 	T(MOV(al, *(raddr(ss,di))));	// 110141 mov     al, ss:[di] ;~ 24ED:1EF0
cs=0x24ed;eip=0x001ef3; 	T(XOR(ah, ah));	// 110142 xor     ah, ah ;~ 24ED:1EF3
cs=0x24ed;eip=0x001ef5; 	T(INC(di));	// 110143 inc     di ;~ 24ED:1EF5
cs=0x24ed;eip=0x001ef6; 	T(OR(al, al));	// 110144 or      al, al ;~ 24ED:1EF6
cs=0x24ed;eip=0x001ef8; 	J(JS(loc_353ad));	// 110145 js      short loc_353AD ;~ 24ED:1EF8
loc_353aa:
	// 7300 
cs=0x24ed;eip=0x001efa; 	J(JMP(loc_3520b));	// 110149 jmp     loc_3520B ;~ 24ED:1EFA
loc_353ad:
	// 7301 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001efd; 	X(MOV(*(dw*)(((db*)&word_3512c)), di));	// 110153 mov     cs:word_3512C, di ;~ 24ED:1EFD
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f02; 	T(MOV(ax, *(dw*)(((db*)&word_3513a))));	// 110154 mov     ax, cs:word_3513A ;~ 24ED:1F02
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f06; 	T(ADD(ax, *(dw*)(((db*)&word_35138))));	// 110155 add     ax, cs:word_35138 ;~ 24ED:1F06
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f0b; 	X(MOV(*(dw*)(((db*)&word_35138)), ax));	// 110156 mov     cs:word_35138, ax ;~ 24ED:1F0B
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f0f; 	X(MOV(*(dw*)(((db*)&word_35136)), ax));	// 110157 mov     cs:word_35136, ax ;~ 24ED:1F0F
cs=0x24ed;eip=0x001f13; 	T(DEC(ax));	// 110158 dec     ax ;~ 24ED:1F13
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f14; 	X(MOV(*(dw*)(((db*)&word_35134)), ax));	// 110159 mov     cs:word_35134, ax ;~ 24ED:1F14
cs=0x24ed;eip=0x001f18; 	T(CLC);	// 110160 clc ;~ 24ED:1F18
cs=0x24ed;eip=0x001f19; 	T(MOV(ax, ss));	// 110161 mov     ax, ss ;~ 24ED:1F19
cs=0x24ed;eip=0x001f1b; 	T(MOV(ds, ax));	// 110162 mov     ds, ax ;~ 24ED:1F1B
cs=0x24ed;eip=0x001f1d; 	J(RETF(0));	// 110164 retf ;~ 24ED:1F1D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_35146: 	goto loc_35146;
        case m2c::kloc_35186: 	goto loc_35186;
        case m2c::kloc_351d8: 	goto loc_351d8;
        case m2c::kloc_3520b: 	goto loc_3520b;
        case m2c::kloc_35247: 	goto loc_35247;
        case m2c::kloc_35267: 	goto loc_35267;
        case m2c::kloc_35294: 	goto loc_35294;
        case m2c::kloc_352b4: 	goto loc_352b4;
        case m2c::kloc_352be: 	goto loc_352be;
        case m2c::kloc_352cc: 	goto loc_352cc;
        case m2c::kloc_352de: 	goto loc_352de;
        case m2c::kloc_352f5: 	goto loc_352f5;
        case m2c::kloc_3530a: 	goto loc_3530a;
        case m2c::kloc_35327: 	goto loc_35327;
        case m2c::kloc_3532a: 	goto loc_3532a;
        case m2c::kloc_35360: 	goto loc_35360;
        case m2c::kloc_35375: 	goto loc_35375;
        case m2c::kloc_3538f: 	goto loc_3538f;
        case m2c::kloc_353aa: 	goto loc_353aa;
        case m2c::kloc_353ad: 	goto loc_353ad;
        case m2c::kret_24ed_1e9b: 	goto ret_24ed_1e9b;
        case m2c::kseg002_1d59_proc: 	goto seg002_1d59_proc;
        case m2c::ksub_3513c: 	goto sub_3513c;
        case m2c::ksub_3518d: 	goto sub_3518d;
        case m2c::ksub_351e0: 	goto sub_351e0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_353ce(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_353ce:
    _begin:
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f1e; 	X(MOV(*(dw*)(((db*)&dword_33657)), di));	// 110171 mov     word ptr cs:dword_33657, di ;~ 24ED:1F1E
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f23; 	X(MOV(*(dw*)(((db*)&dword_33657)+2), es));	// 110172 mov     word ptr cs:dword_33657+2, es ;~ 24ED:1F23
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f28; 	X(MOV(*(dw*)(((db*)&word_3366b)), bp));	// 110173 mov     cs:word_3366B, bp ;~ 24ED:1F28
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f2d; 	X(MOV(*(dw*)(((db*)&word_33655)), si));	// 110174 mov     cs:word_33655, si ;~ 24ED:1F2D
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f32; 	X(MOV(*(dw*)(((db*)&word_33667)), 0x24));	// 110175 mov     cs:word_33667, 24h ; '$' ;~ 24ED:1F32
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f39; 	X(MOV(*(dw*)(((db*)&word_3365b)), bx));	// 110176 mov     cs:word_3365B, bx ;~ 24ED:1F39
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f3e; 	X(MOV(*(dw*)(((db*)&word_35138)), 0x504));	// 110177 mov     cs:word_35138, 504h ;~ 24ED:1F3E
cs=0x24ed;eip=0x001f45; 	T(SHL(ax, 3));	// 110178 shl     ax, 3 ;~ 24ED:1F45
cs=0x24ed;eip=0x001f48; 	J(JNS(loc_35462));	// 110179 jns     short loc_35462 ;~ 24ED:1F48
cs=0x24ed;eip=0x001f4a; 	T(NEG(ax));	// 110180 neg     ax ;~ 24ED:1F4A
cs=0x24ed;eip=0x001f4c; 	T(ADD(bp, ax));	// 110181 add     bp, ax ;~ 24ED:1F4C
cs=0x24ed;eip=0x001f4e; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0))));	// 110182 mov     cx, [bp+0] ;~ 24ED:1F4E
cs=0x24ed;eip=0x001f51; 	T(MOV(bx, *(dw*)(raddr(ss,bp+2))));	// 110183 mov     bx, [bp+2] ;~ 24ED:1F51
cs=0x24ed;eip=0x001f54; 	T(NEG(cx));	// 110184 neg     cx ;~ 24ED:1F54
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f56; 	T(MOV(di, *(dw*)(((db*)&word_33655))));	// 110185 mov     di, cs:word_33655 ;~ 24ED:1F56
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f5b; 	X(MOV(*(dw*)(((db*)&word_33669)), 0x8F7));	// 110186 mov     cs:word_33669, 8F7h ;~ 24ED:1F5B
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f62; 	X(ADD(*(dw*)(((db*)&word_3366b)), 0x2B0));	// 110187 add     cs:word_3366B, 2B0h ;~ 24ED:1F62
cs=0x24ed;eip=0x001f69; 	T(ADD(di, 0x8C));	// 110188 add     di, 8Ch ; 'Œ' ;~ 24ED:1F69
cs=0x24ed;eip=0x001f6d; 	J(CALL(sub_354a4,0));	// 110189 call    sub_354A4 ;~ 24ED:1F6D
loc_35420:
	// 7302 
cs=0x24ed;eip=0x001f70; 	T(SUB(bp, 8));	// 110193 sub     bp, 8 ;~ 24ED:1F70
cs=0x24ed;eip=0x001f73; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0))));	// 110194 mov     cx, [bp+0] ;~ 24ED:1F73
cs=0x24ed;eip=0x001f76; 	T(MOV(bx, *(dw*)(raddr(ss,bp+2))));	// 110195 mov     bx, [bp+2] ;~ 24ED:1F76
cs=0x24ed;eip=0x001f79; 	T(NEG(cx));	// 110196 neg     cx ;~ 24ED:1F79
cs=0x24ed;eip=0x001f7b; 	J(JZ(loc_35444));	// 110197 jz      short loc_35444 ;~ 24ED:1F7B
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f7d; 	T(MOV(di, *(dw*)(((db*)&word_33655))));	// 110198 mov     di, cs:word_33655 ;~ 24ED:1F7D
cs=0x24ed;eip=0x001f82; 	T(ADD(di, 0x6CC));	// 110199 add     di, 6CCh ;~ 24ED:1F82
cs=0x24ed;eip=0x001f86; 	J(CALL(sub_354a4,0));	// 110200 call    sub_354A4 ;~ 24ED:1F86
cs=0x24ed;eip=0x001f89; 	J(CALL(sub_3558d,0));	// 110201 call    sub_3558D ;~ 24ED:1F89
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f8c; 	X(DEC(*(dw*)(((db*)&word_33667))));	// 110202 dec     cs:word_33667 ;~ 24ED:1F8C
cs=0x24ed;eip=0x001f91; 	J(JNZ(loc_35420));	// 110203 jnz     short loc_35420 ;~ 24ED:1F91
cs=0x24ed;eip=0x001f93; 	J(RETF(0));	// 110204 retf ;~ 24ED:1F93
loc_35444:
	// 7303 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f94; 	T(MOV(di, *(dw*)(((db*)&word_33655))));	// 110208 mov     di, cs:word_33655 ;~ 24ED:1F94
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f99; 	X(MOV(*(dw*)(((db*)&word_33669)), 0x92F));	// 110209 mov     cs:word_33669, 92Fh ;~ 24ED:1F99
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001fa0; 	X(ADD(*(dw*)(((db*)&word_3366b)), 8));	// 110210 add     cs:word_3366B, 8 ;~ 24ED:1FA0
cs=0x24ed;eip=0x001fa6; 	T(ADD(di, 0x6CC));	// 110211 add     di, 6CCh ;~ 24ED:1FA6
cs=0x24ed;eip=0x001faa; 	J(CALL(sub_354a4,0));	// 110212 call    sub_354A4 ;~ 24ED:1FAA
cs=0x24ed;eip=0x001fad; 	J(CALL(sub_3558d,0));	// 110213 call    sub_3558D ;~ 24ED:1FAD
cs=0x24ed;eip=0x001fb0; 	J(JMP(loc_3549c));	// 110214 jmp     short loc_3549C ;~ 24ED:1FB0
loc_35462:
	// 7304 
cs=0x24ed;eip=0x001fb2; 	T(ADD(bp, ax));	// 110218 add     bp, ax ;~ 24ED:1FB2
cs=0x24ed;eip=0x001fb4; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0))));	// 110219 mov     cx, [bp+0] ;~ 24ED:1FB4
cs=0x24ed;eip=0x001fb7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+2))));	// 110220 mov     bx, [bp+2] ;~ 24ED:1FB7
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001fba; 	T(MOV(di, *(dw*)(((db*)&word_33655))));	// 110221 mov     di, cs:word_33655 ;~ 24ED:1FBA
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001fbf; 	X(MOV(*(dw*)(((db*)&word_33669)), 0x92F));	// 110222 mov     cs:word_33669, 92Fh ;~ 24ED:1FBF
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001fc6; 	X(ADD(*(dw*)(((db*)&word_3366b)), 0x2B8));	// 110223 add     cs:word_3366B, 2B8h ;~ 24ED:1FC6
cs=0x24ed;eip=0x001fcd; 	T(ADD(di, 0x8C));	// 110224 add     di, 8Ch ; 'Œ' ;~ 24ED:1FCD
cs=0x24ed;eip=0x001fd1; 	J(CALL(sub_354a4,0));	// 110225 call    sub_354A4 ;~ 24ED:1FD1
loc_35484:
	// 7305 
cs=0x24ed;eip=0x001fd4; 	T(ADD(bp, 8));	// 110228 add     bp, 8 ;~ 24ED:1FD4
cs=0x24ed;eip=0x001fd7; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0))));	// 110229 mov     cx, [bp+0] ;~ 24ED:1FD7
cs=0x24ed;eip=0x001fda; 	T(MOV(bx, *(dw*)(raddr(ss,bp+2))));	// 110230 mov     bx, [bp+2] ;~ 24ED:1FDA
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001fdd; 	T(MOV(di, *(dw*)(((db*)&word_33655))));	// 110231 mov     di, cs:word_33655 ;~ 24ED:1FDD
cs=0x24ed;eip=0x001fe2; 	T(ADD(di, 0x6CC));	// 110232 add     di, 6CCh ;~ 24ED:1FE2
cs=0x24ed;eip=0x001fe6; 	J(CALL(sub_354a4,0));	// 110233 call    sub_354A4 ;~ 24ED:1FE6
cs=0x24ed;eip=0x001fe9; 	J(CALL(sub_355bd,0));	// 110234 call    sub_355BD ;~ 24ED:1FE9
loc_3549c:
	// 7306 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001fec; 	X(DEC(*(dw*)(((db*)&word_33667))));	// 110237 dec     cs:word_33667 ;~ 24ED:1FEC
cs=0x24ed;eip=0x001ff1; 	J(JNZ(loc_35484));	// 110238 jnz     short loc_35484 ;~ 24ED:1FF1
cs=0x24ed;eip=0x001ff3; 	J(RETF(0));	// 110239 retf ;~ 24ED:1FF3

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_35420: 	goto loc_35420;
        case m2c::kloc_35444: 	goto loc_35444;
        case m2c::kloc_35462: 	goto loc_35462;
        case m2c::kloc_35484: 	goto loc_35484;
        case m2c::kloc_3549c: 	goto loc_3549c;
        case m2c::ksub_353ce: 	goto sub_353ce;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_354a4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_354a4:
    _begin:
cs=0x24ed;eip=0x001ff4; 	X(PUSH(dx));	// 110248 push    dx ;~ 24ED:1FF4
cs=0x24ed;eip=0x001ff5; 	X(PUSH(ds));	// 110249 push    ds ;~ 24ED:1FF5
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001ff6; 	T(LDS(si, *(dd*)(((db*)&dword_33657))));	// 110250 lds     si, cs:dword_33657 ;~ 24ED:1FF6
cs=0x24ed;eip=0x001ffb; 	T(MOV(ax, ss));	// 110252 mov     ax, ss ;~ 24ED:1FFB
cs=0x24ed;eip=0x001ffd; 	T(MOV(es, ax));	// 110253 mov     es, ax ;~ 24ED:1FFD
cs=0x24ed;eip=0x001fff; 	T(ADD(si, cx));	// 110254 add     si, cx ;~ 24ED:1FFF
cs=0x24ed;eip=0x002001; 	T(ADD(bx, bx));	// 110255 add     bx, bx ;~ 24ED:2001
cs=0x24ed;eip=0x002003; 	T(MOV(ax, dx));	// 110256 mov     ax, dx ;~ 24ED:2003
cs=0x24ed;eip=0x002005; 	T(MUL1_2(bx));	// 110257 mul     bx ;~ 24ED:2005
cs=0x24ed;eip=0x002007; 	X(MOV(*(dw*)(raddr(ss,bp+4)), dx));	// 110258 mov     [bp+4], dx ;~ 24ED:2007
cs=0x24ed;eip=0x00200a; 	T(ROL(ax, 2));	// 110259 rol     ax, 2 ;~ 24ED:200A
cs=0x24ed;eip=0x00200d; 	T(AND(ax, 3));	// 110260 and     ax, 3 ;~ 24ED:200D
cs=0x24ed;eip=0x002010; 	T(SUB(di, ax));	// 110261 sub     di, ax ;~ 24ED:2010
cs=0x24ed;eip=0x002012; 	T(MOV(ax, dx));	// 110262 mov     ax, dx ;~ 24ED:2012
cs=0x24ed;eip=0x002014; 	T(MOV(cx, 0x58));	// 110263 mov     cx, 58h ; 'X' ;~ 24ED:2014
cs=0x24ed;eip=0x002017; 	T(CMP(bx, cx));	// 110264 cmp     bx, cx ;~ 24ED:2017
cs=0x24ed;eip=0x002019; 	J(JNC(loc_354f3));	// 110265 jnb     short loc_354F3 ;~ 24ED:2019
cs=0x24ed;eip=0x00201b; 	T(SUB(cx, bx));	// 110266 sub     cx, bx ;~ 24ED:201B
cs=0x24ed;eip=0x00201d; 	T(SHL(cx, 1));	// 110267 shl     cx, 1 ;~ 24ED:201D
cs=0x24ed;eip=0x00201f; 	T(ADD(di, cx));	// 110268 add     di, cx ;~ 24ED:201F
cs=0x24ed;eip=0x002021; 	T(MOV(cx, bx));	// 110269 mov     cx, bx ;~ 24ED:2021
cs=0x24ed;eip=0x002023; 	T(SHR(cx, 1));	// 110270 shr     cx, 1 ;~ 24ED:2023
cs=0x24ed;eip=0x002025; 	T(SUB(ax, cx));	// 110271 sub     ax, cx ;~ 24ED:2025
cs=0x24ed;eip=0x002027; 	J(JNS(loc_354db));	// 110272 jns     short loc_354DB ;~ 24ED:2027
cs=0x24ed;eip=0x002029; 	T(ADD(ax, bx));	// 110273 add     ax, bx ;~ 24ED:2029
loc_354db:
	// 7307 
cs=0x24ed;eip=0x00202b; 	T(MOV(cx, bx));	// 110276 mov     cx, bx ;~ 24ED:202B
cs=0x24ed;eip=0x00202d; 	T(SUB(bx, ax));	// 110277 sub     bx, ax ;~ 24ED:202D
cs=0x24ed;eip=0x00202f; 	T(INC(cx));	// 110278 inc     cx ;~ 24ED:202F
cs=0x24ed;eip=0x002030; 	T(SUB(cx, bx));	// 110279 sub     cx, bx ;~ 24ED:2030
cs=0x24ed;eip=0x002032; 	J(JNS(loc_35514));	// 110280 jns     short loc_35514 ;~ 24ED:2032
cs=0x24ed;eip=0x002034; 	T(ADD(cx, bx));	// 110281 add     cx, bx ;~ 24ED:2034
cs=0x24ed;eip=0x002036; 	T(ADD(si, ax));	// 110282 add     si, ax ;~ 24ED:2036
cs=0x24ed;eip=0x002038; 	T(MOV(al, *(raddr(ds,si-1))));	// 110283 mov     al, [si-1] ;~ 24ED:2038
cs=0x24ed;eip=0x00203b; 	T(SHL(al, 4));	// 110284 shl     al, 4 ;~ 24ED:203B
cs=0x24ed;eip=0x00203e; 	T(OR(al, 8));	// 110285 or      al, 8 ;~ 24ED:203E
cs=0x24ed;eip=0x002040; 	J(JMP(loc_35559));	// 110286 jmp     short loc_35559 ;~ 24ED:2040
loc_354f3:
	// 7308 
cs=0x24ed;eip=0x002043; 	T(SHR(cx, 1));	// 110292 shr     cx, 1 ;~ 24ED:2043
cs=0x24ed;eip=0x002045; 	T(SUB(ax, cx));	// 110293 sub     ax, cx ;~ 24ED:2045
cs=0x24ed;eip=0x002047; 	J(JNS(loc_354fb));	// 110294 jns     short loc_354FB ;~ 24ED:2047
cs=0x24ed;eip=0x002049; 	T(ADD(ax, bx));	// 110295 add     ax, bx ;~ 24ED:2049
loc_354fb:
	// 7309 
cs=0x24ed;eip=0x00204b; 	T(SUB(bx, ax));	// 110298 sub     bx, ax ;~ 24ED:204B
cs=0x24ed;eip=0x00204d; 	T(MOV(cx, 0x58));	// 110299 mov     cx, 58h ; 'X' ;~ 24ED:204D
cs=0x24ed;eip=0x002050; 	T(INC(cx));	// 110300 inc     cx ;~ 24ED:2050
cs=0x24ed;eip=0x002051; 	T(SUB(cx, bx));	// 110301 sub     cx, bx ;~ 24ED:2051
cs=0x24ed;eip=0x002053; 	J(JNS(loc_35514));	// 110302 jns     short loc_35514 ;~ 24ED:2053
cs=0x24ed;eip=0x002055; 	T(ADD(cx, bx));	// 110303 add     cx, bx ;~ 24ED:2055
cs=0x24ed;eip=0x002057; 	T(ADD(si, ax));	// 110304 add     si, ax ;~ 24ED:2057
cs=0x24ed;eip=0x002059; 	T(MOV(al, *(raddr(ds,si-1))));	// 110305 mov     al, [si-1] ;~ 24ED:2059
cs=0x24ed;eip=0x00205c; 	T(SHL(al, 4));	// 110306 shl     al, 4 ;~ 24ED:205C
cs=0x24ed;eip=0x00205f; 	T(OR(al, 8));	// 110307 or      al, 8 ;~ 24ED:205F
cs=0x24ed;eip=0x002061; 	J(JMP(loc_35559));	// 110308 jmp     short loc_35559 ;~ 24ED:2061
loc_35514:
	// 7310 
cs=0x24ed;eip=0x002064; 	T(OR(bx, bx));	// 110315 or      bx, bx ;~ 24ED:2064
cs=0x24ed;eip=0x002066; 	J(JZ(loc_35559));	// 110316 jz      short loc_35559 ;~ 24ED:2066
cs=0x24ed;eip=0x002068; 	T(XCHG(cx, bx));	// 110317 xchg    cx, bx ;~ 24ED:2068
cs=0x24ed;eip=0x00206a; 	X(PUSH(si));	// 110318 push    si ;~ 24ED:206A
cs=0x24ed;eip=0x00206b; 	T(ADD(si, ax));	// 110319 add     si, ax ;~ 24ED:206B
cs=0x24ed;eip=0x00206d; 	T(MOV(al, *(raddr(ds,si-1))));	// 110320 mov     al, [si-1] ;~ 24ED:206D
cs=0x24ed;eip=0x002070; 	T(SHL(al, 4));	// 110321 shl     al, 4 ;~ 24ED:2070
cs=0x24ed;eip=0x002073; 	T(OR(al, 8));	// 110322 or      al, 8 ;~ 24ED:2073
loc_35525:
	// 7311 
cs=0x24ed;eip=0x002075; 	T(MOV(dh, *(raddr(ds,si))));	// 110326 mov     dh, [si] ;~ 24ED:2075
cs=0x24ed;eip=0x002077; 	T(INC(si));	// 110327 inc     si ;~ 24ED:2077
cs=0x24ed;eip=0x002078; 	T(SHL(dh, 4));	// 110328 shl     dh, 4 ;~ 24ED:2078
cs=0x24ed;eip=0x00207b; 	T(OR(dh, 8));	// 110329 or      dh, 8 ;~ 24ED:207B
cs=0x24ed;eip=0x00207e; 	T(MOV(dl, dh));	// 110330 mov     dl, dh ;~ 24ED:207E
cs=0x24ed;eip=0x002080; 	T(SUB(dl, al));	// 110331 sub     dl, al ;~ 24ED:2080
cs=0x24ed;eip=0x002082; 	T(SAR(dl, 2));	// 110332 sar     dl, 2 ;~ 24ED:2082
cs=0x24ed;eip=0x002085; 	T(OR(dl, dl));	// 110333 or      dl, dl ;~ 24ED:2085
cs=0x24ed;eip=0x002087; 	J(JZ(loc_3554e));	// 110334 jz      short loc_3554E ;~ 24ED:2087
cs=0x24ed;eip=0x002089; 	T(MOV(ah, al));	// 110335 mov     ah, al ;~ 24ED:2089
cs=0x24ed;eip=0x00208b; 	T(ADD(ah, dl));	// 110336 add     ah, dl ;~ 24ED:208B
cs=0x24ed;eip=0x00208d; 	X(STOSW);	// 110337 stosw ;~ 24ED:208D
cs=0x24ed;eip=0x00208e; 	T(ADD(ah, dl));	// 110338 add     ah, dl ;~ 24ED:208E
cs=0x24ed;eip=0x002090; 	T(MOV(al, ah));	// 110339 mov     al, ah ;~ 24ED:2090
cs=0x24ed;eip=0x002092; 	T(ADD(ah, dl));	// 110340 add     ah, dl ;~ 24ED:2092
cs=0x24ed;eip=0x002094; 	X(STOSW);	// 110341 stosw ;~ 24ED:2094
cs=0x24ed;eip=0x002095; 	T(MOV(al, dh));	// 110342 mov     al, dh ;~ 24ED:2095
cs=0x24ed;eip=0x002097; 	J(LOOP(loc_35525));	// 110343 loop    loc_35525 ;~ 24ED:2097
cs=0x24ed;eip=0x002099; 	T(MOV(cx, bx));	// 110344 mov     cx, bx ;~ 24ED:2099
cs=0x24ed;eip=0x00209b; 	X(POP(si));	// 110345 pop     si ;~ 24ED:209B
cs=0x24ed;eip=0x00209c; 	J(JMP(loc_35559));	// 110346 jmp     short loc_35559 ;~ 24ED:209C
loc_3554e:
	// 7312 
cs=0x24ed;eip=0x00209e; 	T(MOV(ah, al));	// 110350 mov     ah, al ;~ 24ED:209E
cs=0x24ed;eip=0x0020a0; 	X(STOSW);	// 110351 stosw ;~ 24ED:20A0
cs=0x24ed;eip=0x0020a1; 	X(STOSW);	// 110352 stosw ;~ 24ED:20A1
cs=0x24ed;eip=0x0020a2; 	T(MOV(al, dh));	// 110353 mov     al, dh ;~ 24ED:20A2
cs=0x24ed;eip=0x0020a4; 	J(LOOP(loc_35525));	// 110354 loop    loc_35525 ;~ 24ED:20A4
cs=0x24ed;eip=0x0020a6; 	T(MOV(cx, bx));	// 110355 mov     cx, bx ;~ 24ED:20A6
cs=0x24ed;eip=0x0020a8; 	X(POP(si));	// 110356 pop     si ;~ 24ED:20A8
loc_35559:
	// 7313 
cs=0x24ed;eip=0x0020a9; 	J(JCXZ(loc_3557f));	// 110360 jcxz    short loc_3557F ;~ 24ED:20A9
loc_3555b:
	// 7314 
cs=0x24ed;eip=0x0020ab; 	T(MOV(dh, *(raddr(ds,si))));	// 110364 mov     dh, [si] ;~ 24ED:20AB
cs=0x24ed;eip=0x0020ad; 	T(INC(si));	// 110365 inc     si ;~ 24ED:20AD
cs=0x24ed;eip=0x0020ae; 	T(SHL(dh, 4));	// 110366 shl     dh, 4 ;~ 24ED:20AE
cs=0x24ed;eip=0x0020b1; 	T(OR(dh, 8));	// 110367 or      dh, 8 ;~ 24ED:20B1
cs=0x24ed;eip=0x0020b4; 	T(MOV(dl, dh));	// 110368 mov     dl, dh ;~ 24ED:20B4
cs=0x24ed;eip=0x0020b6; 	T(SUB(dl, al));	// 110369 sub     dl, al ;~ 24ED:20B6
cs=0x24ed;eip=0x0020b8; 	T(SAR(dl, 2));	// 110370 sar     dl, 2 ;~ 24ED:20B8
cs=0x24ed;eip=0x0020bb; 	T(OR(dl, dl));	// 110371 or      dl, dl ;~ 24ED:20BB
cs=0x24ed;eip=0x0020bd; 	J(JZ(loc_35582));	// 110372 jz      short loc_35582 ;~ 24ED:20BD
cs=0x24ed;eip=0x0020bf; 	T(MOV(ah, al));	// 110373 mov     ah, al ;~ 24ED:20BF
cs=0x24ed;eip=0x0020c1; 	T(ADD(ah, dl));	// 110374 add     ah, dl ;~ 24ED:20C1
cs=0x24ed;eip=0x0020c3; 	X(STOSW);	// 110375 stosw ;~ 24ED:20C3
cs=0x24ed;eip=0x0020c4; 	T(ADD(ah, dl));	// 110376 add     ah, dl ;~ 24ED:20C4
cs=0x24ed;eip=0x0020c6; 	T(MOV(al, ah));	// 110377 mov     al, ah ;~ 24ED:20C6
cs=0x24ed;eip=0x0020c8; 	T(ADD(ah, dl));	// 110378 add     ah, dl ;~ 24ED:20C8
cs=0x24ed;eip=0x0020ca; 	X(STOSW);	// 110379 stosw ;~ 24ED:20CA
cs=0x24ed;eip=0x0020cb; 	T(MOV(al, dh));	// 110380 mov     al, dh ;~ 24ED:20CB
cs=0x24ed;eip=0x0020cd; 	J(LOOP(loc_3555b));	// 110381 loop    loc_3555B ;~ 24ED:20CD
loc_3557f:
	// 7315 
cs=0x24ed;eip=0x0020cf; 	X(POP(ds));	// 110384 pop     ds ;~ 24ED:20CF
cs=0x24ed;eip=0x0020d0; 	X(POP(dx));	// 110386 pop     dx ;~ 24ED:20D0
cs=0x24ed;eip=0x0020d1; 	J(RETN(0));	// 110387 retn ;~ 24ED:20D1
loc_35582:
	// 7316 
cs=0x24ed;eip=0x0020d2; 	T(MOV(ah, al));	// 110392 mov     ah, al ;~ 24ED:20D2
cs=0x24ed;eip=0x0020d4; 	X(STOSW);	// 110393 stosw ;~ 24ED:20D4
cs=0x24ed;eip=0x0020d5; 	X(STOSW);	// 110394 stosw ;~ 24ED:20D5
cs=0x24ed;eip=0x0020d6; 	T(MOV(al, dh));	// 110395 mov     al, dh ;~ 24ED:20D6
cs=0x24ed;eip=0x0020d8; 	J(LOOP(loc_3555b));	// 110396 loop    loc_3555B ;~ 24ED:20D8
cs=0x24ed;eip=0x0020da; 	X(POP(ds));	// 110397 pop     ds ;~ 24ED:20DA
cs=0x24ed;eip=0x0020db; 	X(POP(dx));	// 110399 pop     dx ;~ 24ED:20DB
cs=0x24ed;eip=0x0020dc; 	J(RETN(0));	// 110400 retn ;~ 24ED:20DC

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_354db: 	goto loc_354db;
        case m2c::kloc_354f3: 	goto loc_354f3;
        case m2c::kloc_354fb: 	goto loc_354fb;
        case m2c::kloc_35514: 	goto loc_35514;
        case m2c::kloc_35525: 	goto loc_35525;
        case m2c::kloc_3554e: 	goto loc_3554e;
        case m2c::kloc_35559: 	goto loc_35559;
        case m2c::kloc_3555b: 	goto loc_3555b;
        case m2c::kloc_3557f: 	goto loc_3557f;
        case m2c::kloc_35582: 	goto loc_35582;
        case m2c::ksub_354a4: 	goto sub_354a4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3558d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3558d:
    _begin:
cs=0x24ed;eip=0x0020dd; 	X(PUSH(dx));	// 110409 push    dx ;~ 24ED:20DD
cs=0x24ed;eip=0x0020de; 	X(PUSH(bp));	// 110410 push    bp ;~ 24ED:20DE
cs=0x24ed;eip=0x0020df; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0A))));	// 110411 mov     cx, [bp+0Ah] ;~ 24ED:20DF
cs=0x24ed;eip=0x0020e2; 	T(MOV(dx, *(dw*)(raddr(ss,bp+2))));	// 110412 mov     dx, [bp+2] ;~ 24ED:20E2
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0020e5; 	T(MOV(di, *(dw*)(((db*)&word_33655))));	// 110413 mov     di, cs:word_33655 ;~ 24ED:20E5
cs=0x24ed;eip=0x0020ea; 	T(ADD(di, 0x13C));	// 110414 add     di, 13Ch ;~ 24ED:20EA
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0020ee; 	X(MOV(*(dw*)(((db*)&word_33663)), 0x0B0));	// 110415 mov     cs:word_33663, 0B0h ; '°' ;~ 24ED:20EE
cs=0x24ed;eip=0x0020f5; 	T(MOV(si, di));	// 110416 mov     si, di ;~ 24ED:20F5
cs=0x24ed;eip=0x0020f7; 	T(MOV(ax, 0x190));	// 110417 mov     ax, 190h ;~ 24ED:20F7
cs=0x24ed;eip=0x0020fa; 	T(ADD(di, ax));	// 110418 add     di, ax ;~ 24ED:20FA
cs=0x24ed;eip=0x0020fc; 	T(MOV(bp, di));	// 110419 mov     bp, di ;~ 24ED:20FC
cs=0x24ed;eip=0x0020fe; 	T(ADD(di, ax));	// 110420 add     di, ax ;~ 24ED:20FE
cs=0x24ed;eip=0x002100; 	T(MOV(bx, di));	// 110421 mov     bx, di ;~ 24ED:2100
cs=0x24ed;eip=0x002102; 	T(ADD(di, ax));	// 110422 add     di, ax ;~ 24ED:2102
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002104; 	X(MOV(*(dw*)(((db*)&word_33665)), di));	// 110423 mov     cs:word_33665, di ;~ 24ED:2104
cs=0x24ed;eip=0x002109; 	T(ADD(di, ax));	// 110424 add     di, ax ;~ 24ED:2109
cs=0x24ed;eip=0x00210b; 	J(return sub_355bd(m2c::kloc_355ed, _state););	// 110425 jmp     short loc_355ED ;~ 24ED:210B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_3558d: 	goto sub_3558d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_355bd(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_355bd:
    _begin:
cs=0x24ed;eip=0x00210d; 	X(PUSH(dx));	// 110433 push    dx ;~ 24ED:210D
cs=0x24ed;eip=0x00210e; 	X(PUSH(bp));	// 110434 push    bp ;~ 24ED:210E
cs=0x24ed;eip=0x00210f; 	T(MOV(cx, *(dw*)(raddr(ss,bp+2))));	// 110435 mov     cx, [bp+2] ;~ 24ED:210F
cs=0x24ed;eip=0x002112; 	T(MOV(dx, *(dw*)(raddr(ss,bp-6))));	// 110436 mov     dx, [bp-6] ;~ 24ED:2112
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002115; 	T(MOV(di, *(dw*)(((db*)&word_33655))));	// 110437 mov     di, cs:word_33655 ;~ 24ED:2115
cs=0x24ed;eip=0x00211a; 	T(ADD(di, 0x13C));	// 110438 add     di, 13Ch ;~ 24ED:211A
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00211e; 	X(MOV(*(dw*)(((db*)&word_33663)), 0x0B0));	// 110439 mov     cs:word_33663, 0B0h ; '°' ;~ 24ED:211E
cs=0x24ed;eip=0x002125; 	X(PUSH(di));	// 110440 push    di ;~ 24ED:2125
cs=0x24ed;eip=0x002126; 	T(MOV(ax, 0x190));	// 110441 mov     ax, 190h ;~ 24ED:2126
cs=0x24ed;eip=0x002129; 	T(ADD(di, ax));	// 110442 add     di, ax ;~ 24ED:2129
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00212b; 	X(MOV(*(dw*)(((db*)&word_33665)), di));	// 110443 mov     cs:word_33665, di ;~ 24ED:212B
cs=0x24ed;eip=0x002130; 	T(ADD(di, ax));	// 110444 add     di, ax ;~ 24ED:2130
cs=0x24ed;eip=0x002132; 	T(MOV(bx, di));	// 110445 mov     bx, di ;~ 24ED:2132
cs=0x24ed;eip=0x002134; 	T(ADD(di, ax));	// 110446 add     di, ax ;~ 24ED:2134
cs=0x24ed;eip=0x002136; 	T(MOV(bp, di));	// 110447 mov     bp, di ;~ 24ED:2136
cs=0x24ed;eip=0x002138; 	T(ADD(di, ax));	// 110448 add     di, ax ;~ 24ED:2138
cs=0x24ed;eip=0x00213a; 	T(MOV(si, di));	// 110449 mov     si, di ;~ 24ED:213A
cs=0x24ed;eip=0x00213c; 	X(POP(di));	// 110450 pop     di ;~ 24ED:213C
loc_355ed:
	// 7317 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00213d; 	X(PUSH(*(dw*)(((db*)&word_33663))));	// 110453 push    cs:word_33663 ;~ 24ED:213D
cs=0x24ed;eip=0x002142; 	X(PUSH(di));	// 110454 push    di ;~ 24ED:2142
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002143; 	X(PUSH(*(dw*)(((db*)&word_33665))));	// 110455 push    cs:word_33665 ;~ 24ED:2143
cs=0x24ed;eip=0x002148; 	X(PUSH(bx));	// 110456 push    bx ;~ 24ED:2148
cs=0x24ed;eip=0x002149; 	X(PUSH(bp));	// 110457 push    bp ;~ 24ED:2149
cs=0x24ed;eip=0x00214a; 	X(PUSH(si));	// 110458 push    si ;~ 24ED:214A
cs=0x24ed;eip=0x00214b; 	T(SUB(dx, cx));	// 110459 sub     dx, cx ;~ 24ED:214B
cs=0x24ed;eip=0x00214d; 	T(MOV(ax, ds));	// 110460 mov     ax, ds ;~ 24ED:214D
cs=0x24ed;eip=0x00214f; 	T(MOV(es, ax));	// 110461 mov     es, ax ;~ 24ED:214F
cs=0x24ed;eip=0x002151; 	T(XOR(ax, ax));	// 110462 xor     ax, ax ;~ 24ED:2151
cs=0x24ed;eip=0x002153; 	T(DIV2(cx));	// 110463 div     cx ;~ 24ED:2153
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002155; 	X(MOV(*(dw*)(((db*)&word_3365d)), ax));	// 110464 mov     cs:word_3365D, ax ;~ 24ED:2155
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002159; 	X(MOV(*(dw*)(((db*)&word_3365f)), ax));	// 110465 mov     cs:word_3365F, ax ;~ 24ED:2159
cs=0x24ed;eip=0x00215d; 	T(SHR(ax, 1));	// 110466 shr     ax, 1 ;~ 24ED:215D
cs=0x24ed;eip=0x00215f; 	T(MOV(dx, ax));	// 110467 mov     dx, ax ;~ 24ED:215F
cs=0x24ed;eip=0x002161; 	T(SHR(ax, 1));	// 110468 shr     ax, 1 ;~ 24ED:2161
cs=0x24ed;eip=0x002163; 	T(MOV(cx, dx));	// 110469 mov     cx, dx ;~ 24ED:2163
cs=0x24ed;eip=0x002165; 	T(ADD(cx, ax));	// 110470 add     cx, ax ;~ 24ED:2165
cs=0x24ed;eip=0x002167; 	T(ADD(ax, 0x80));	// 110471 add     ax, 80h ; '€' ;~ 24ED:2167
cs=0x24ed;eip=0x00216a; 	T(ADD(cx, 0x80));	// 110472 add     cx, 80h ; '€' ;~ 24ED:216A
cs=0x24ed;eip=0x00216e; 	T(ADD(dx, 0x80));	// 110473 add     dx, 80h ; '€' ;~ 24ED:216E
cs=0x24ed;eip=0x002172; 	T(MOV(cl, ch));	// 110474 mov     cl, ch ;~ 24ED:2172
cs=0x24ed;eip=0x002174; 	T(MOV(ch, ah));	// 110475 mov     ch, ah ;~ 24ED:2174
cs=0x24ed;eip=0x002176; 	T(MOV(dl, dh));	// 110476 mov     dl, dh ;~ 24ED:2176
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002178; 	X(MOV(*(dw*)(((db*)&word_33661)), cx));	// 110477 mov     cs:word_33661, cx ;~ 24ED:2178
loc_3562d:
	// 7318 
cs=0x24ed;eip=0x00217d; 	T(LODSB);	// 110481 lodsb ;~ 24ED:217D
cs=0x24ed;eip=0x00217e; 	T(MOV(ah, *(raddr(ds,di))));	// 110482 mov     ah, [di] ;~ 24ED:217E
cs=0x24ed;eip=0x002180; 	T(INC(di));	// 110483 inc     di ;~ 24ED:2180
cs=0x24ed;eip=0x002181; 	T(SUB(ah, al));	// 110484 sub     ah, al ;~ 24ED:2181
cs=0x24ed;eip=0x002183; 	T(SAR(ah, 2));	// 110485 sar     ah, 2 ;~ 24ED:2183
cs=0x24ed;eip=0x002186; 	T(ADD(al, ah));	// 110486 add     al, ah ;~ 24ED:2186
cs=0x24ed;eip=0x002188; 	X(MOV(*(raddr(ss,bp+0)), al));	// 110487 mov     [bp+0], al ;~ 24ED:2188
cs=0x24ed;eip=0x00218b; 	T(INC(bp));	// 110488 inc     bp ;~ 24ED:218B
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00218c; 	T(ADD(ch, *(db*)(((db*)&word_33661)+1)));	// 110489 add     ch, byte ptr cs:word_33661+1 ;~ 24ED:218C
cs=0x24ed;eip=0x002191; 	J(JC(loc_35674));	// 110490 jb      short loc_35674 ;~ 24ED:2191
loc_35643:
	// 7319 
cs=0x24ed;eip=0x002193; 	T(ADD(al, ah));	// 110493 add     al, ah ;~ 24ED:2193
cs=0x24ed;eip=0x002195; 	X(MOV(*(raddr(ds,bx)), al));	// 110494 mov     [bx], al ;~ 24ED:2195
cs=0x24ed;eip=0x002197; 	T(INC(bx));	// 110495 inc     bx ;~ 24ED:2197
cs=0x24ed;eip=0x002198; 	T(ADD(dl, dh));	// 110496 add     dl, dh ;~ 24ED:2198
cs=0x24ed;eip=0x00219a; 	J(JC(loc_3567a));	// 110497 jb      short loc_3567A ;~ 24ED:219A
loc_3564c:
	// 7320 
cs=0x24ed;eip=0x00219c; 	T(ADD(al, ah));	// 110500 add     al, ah ;~ 24ED:219C
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00219e; 	X(XCHG(di, *(dw*)(((db*)&word_33665))));	// 110501 xchg    di, cs:word_33665 ;~ 24ED:219E
cs=0x24ed;eip=0x0021a3; 	X(STOSB);	// 110502 stosb ;~ 24ED:21A3
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0021a4; 	T(ADD(cl, *(db*)(((db*)&word_33661))));	// 110503 add     cl, byte ptr cs:word_33661 ;~ 24ED:21A4
cs=0x24ed;eip=0x0021a9; 	J(JC(loc_3567f));	// 110504 jb      short loc_3567F ;~ 24ED:21A9
loc_3565b:
	// 7321 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0021ab; 	X(XCHG(di, *(dw*)(((db*)&word_33665))));	// 110507 xchg    di, cs:word_33665 ;~ 24ED:21AB
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0021b0; 	T(MOV(ax, *(dw*)(((db*)&word_3365d))));	// 110508 mov     ax, cs:word_3365D ;~ 24ED:21B0
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0021b4; 	X(ADD(*(dw*)(((db*)&word_3365f)), ax));	// 110509 add     cs:word_3365F, ax ;~ 24ED:21B4
cs=0x24ed;eip=0x0021b9; 	J(JC(loc_35682));	// 110510 jb      short loc_35682 ;~ 24ED:21B9
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0021bb; 	X(DEC(*(dw*)(((db*)&word_33663))));	// 110511 dec     cs:word_33663 ;~ 24ED:21BB
cs=0x24ed;eip=0x0021c0; 	J(JNZ(loc_3562d));	// 110512 jnz     short loc_3562D ;~ 24ED:21C0
cs=0x24ed;eip=0x0021c2; 	J(JMP(loc_3568a));	// 110513 jmp     short loc_3568A ;~ 24ED:21C2
loc_35674:
	// 7322 
cs=0x24ed;eip=0x0021c4; 	X(MOV(*(raddr(ss,bp+0)), al));	// 110517 mov     [bp+0], al ;~ 24ED:21C4
cs=0x24ed;eip=0x0021c7; 	T(INC(bp));	// 110518 inc     bp ;~ 24ED:21C7
cs=0x24ed;eip=0x0021c8; 	J(JMP(loc_35643));	// 110519 jmp     short loc_35643 ;~ 24ED:21C8
loc_3567a:
	// 7323 
cs=0x24ed;eip=0x0021ca; 	X(MOV(*(raddr(ds,bx)), al));	// 110523 mov     [bx], al ;~ 24ED:21CA
cs=0x24ed;eip=0x0021cc; 	T(INC(bx));	// 110524 inc     bx ;~ 24ED:21CC
cs=0x24ed;eip=0x0021cd; 	J(JMP(loc_3564c));	// 110525 jmp     short loc_3564C ;~ 24ED:21CD
loc_3567f:
	// 7324 
cs=0x24ed;eip=0x0021cf; 	X(STOSB);	// 110529 stosb ;~ 24ED:21CF
cs=0x24ed;eip=0x0021d0; 	J(JMP(loc_3565b));	// 110530 jmp     short loc_3565B ;~ 24ED:21D0
loc_35682:
	// 7325 
cs=0x24ed;eip=0x0021d2; 	T(INC(di));	// 110534 inc     di ;~ 24ED:21D2
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0021d3; 	X(DEC(*(dw*)(((db*)&word_33663))));	// 110535 dec     cs:word_33663 ;~ 24ED:21D3
cs=0x24ed;eip=0x0021d8; 	J(JNZ(loc_3562d));	// 110536 jnz     short loc_3562D ;~ 24ED:21D8
loc_3568a:
	// 7326 
cs=0x24ed;eip=0x0021da; 	X(POP(si));	// 110539 pop     si ;~ 24ED:21DA
cs=0x24ed;eip=0x0021db; 	X(POP(bp));	// 110540 pop     bp ;~ 24ED:21DB
cs=0x24ed;eip=0x0021dc; 	X(POP(bx));	// 110541 pop     bx ;~ 24ED:21DC
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0021dd; 	X(POP(*(dw*)(((db*)&word_33665))));	// 110542 pop     cs:word_33665 ;~ 24ED:21DD
cs=0x24ed;eip=0x0021e2; 	X(POP(di));	// 110543 pop     di ;~ 24ED:21E2
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0021e3; 	X(POP(*(dw*)(((db*)&word_33663))));	// 110544 pop     cs:word_33663 ;~ 24ED:21E3
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0021e8; 	T(MOV(cx, *(dw*)(((db*)&word_33661))));	// 110545 mov     cx, cs:word_33661 ;~ 24ED:21E8
cs=0x24ed;eip=0x0021ed; 	T(MOV(dl, dh));	// 110546 mov     dl, dh ;~ 24ED:21ED
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0021ef; 	T(MOV(ax, *(dw*)(((db*)&word_3365d))));	// 110547 mov     ax, cs:word_3365D ;~ 24ED:21EF
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0021f3; 	X(MOV(*(dw*)(((db*)&word_3365f)), ax));	// 110548 mov     cs:word_3365F, ax ;~ 24ED:21F3
cs=0x24ed;eip=0x0021f7; 	T(DEC(si));	// 110549 dec     si ;~ 24ED:21F7
cs=0x24ed;eip=0x0021f8; 	T(DEC(di));	// 110550 dec     di ;~ 24ED:21F8
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0021f9; 	X(DEC(*(dw*)(((db*)&word_33665))));	// 110551 dec     cs:word_33665 ;~ 24ED:21F9
cs=0x24ed;eip=0x0021fe; 	T(STD);	// 110552 std ;~ 24ED:21FE
loc_356af:
	// 7327 
cs=0x24ed;eip=0x0021ff; 	T(LODSB);	// 110555 lodsb ;~ 24ED:21FF
cs=0x24ed;eip=0x002200; 	T(MOV(ah, *(raddr(ds,di))));	// 110556 mov     ah, [di] ;~ 24ED:2200
cs=0x24ed;eip=0x002202; 	T(DEC(di));	// 110557 dec     di ;~ 24ED:2202
cs=0x24ed;eip=0x002203; 	T(SUB(ah, al));	// 110558 sub     ah, al ;~ 24ED:2203
cs=0x24ed;eip=0x002205; 	T(SAR(ah, 2));	// 110559 sar     ah, 2 ;~ 24ED:2205
cs=0x24ed;eip=0x002208; 	T(ADD(al, ah));	// 110560 add     al, ah ;~ 24ED:2208
cs=0x24ed;eip=0x00220a; 	T(DEC(bp));	// 110561 dec     bp ;~ 24ED:220A
cs=0x24ed;eip=0x00220b; 	X(MOV(*(raddr(ss,bp+0)), al));	// 110562 mov     [bp+0], al ;~ 24ED:220B
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00220e; 	T(ADD(ch, *(db*)(((db*)&word_33661)+1)));	// 110563 add     ch, byte ptr cs:word_33661+1 ;~ 24ED:220E
cs=0x24ed;eip=0x002213; 	J(JC(loc_356f7));	// 110564 jb      short loc_356F7 ;~ 24ED:2213
loc_356c5:
	// 7328 
cs=0x24ed;eip=0x002215; 	T(ADD(al, ah));	// 110567 add     al, ah ;~ 24ED:2215
cs=0x24ed;eip=0x002217; 	T(DEC(bx));	// 110568 dec     bx ;~ 24ED:2217
cs=0x24ed;eip=0x002218; 	X(MOV(*(raddr(ds,bx)), al));	// 110569 mov     [bx], al ;~ 24ED:2218
cs=0x24ed;eip=0x00221a; 	T(ADD(dl, dh));	// 110570 add     dl, dh ;~ 24ED:221A
cs=0x24ed;eip=0x00221c; 	J(JC(loc_356fd));	// 110571 jb      short loc_356FD ;~ 24ED:221C
loc_356ce:
	// 7329 
cs=0x24ed;eip=0x00221e; 	T(ADD(al, ah));	// 110574 add     al, ah ;~ 24ED:221E
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002220; 	X(XCHG(di, *(dw*)(((db*)&word_33665))));	// 110575 xchg    di, cs:word_33665 ;~ 24ED:2220
cs=0x24ed;eip=0x002225; 	X(STOSB);	// 110576 stosb ;~ 24ED:2225
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002226; 	T(ADD(cl, *(db*)(((db*)&word_33661))));	// 110577 add     cl, byte ptr cs:word_33661 ;~ 24ED:2226
cs=0x24ed;eip=0x00222b; 	J(JC(loc_35702));	// 110578 jb      short loc_35702 ;~ 24ED:222B
loc_356dd:
	// 7330 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00222d; 	X(XCHG(di, *(dw*)(((db*)&word_33665))));	// 110581 xchg    di, cs:word_33665 ;~ 24ED:222D
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002232; 	T(MOV(ax, *(dw*)(((db*)&word_3365d))));	// 110582 mov     ax, cs:word_3365D ;~ 24ED:2232
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002236; 	X(ADD(*(dw*)(((db*)&word_3365f)), ax));	// 110583 add     cs:word_3365F, ax ;~ 24ED:2236
cs=0x24ed;eip=0x00223b; 	J(JC(loc_35705));	// 110584 jb      short loc_35705 ;~ 24ED:223B
loc_356ed:
	// 7331 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00223d; 	X(DEC(*(dw*)(((db*)&word_33663))));	// 110587 dec     cs:word_33663 ;~ 24ED:223D
cs=0x24ed;eip=0x002242; 	J(JNZ(loc_356af));	// 110588 jnz     short loc_356AF ;~ 24ED:2242
cs=0x24ed;eip=0x002244; 	T(CLD);	// 110589 cld ;~ 24ED:2244
cs=0x24ed;eip=0x002245; 	J(JMP(loc_35708));	// 110590 jmp     short loc_35708 ;~ 24ED:2245
loc_356f7:
	// 7332 
cs=0x24ed;eip=0x002247; 	T(DEC(bp));	// 110594 dec     bp ;~ 24ED:2247
cs=0x24ed;eip=0x002248; 	X(MOV(*(raddr(ss,bp+0)), al));	// 110595 mov     [bp+0], al ;~ 24ED:2248
cs=0x24ed;eip=0x00224b; 	J(JMP(loc_356c5));	// 110596 jmp     short loc_356C5 ;~ 24ED:224B
loc_356fd:
	// 7333 
cs=0x24ed;eip=0x00224d; 	T(DEC(bx));	// 110600 dec     bx ;~ 24ED:224D
cs=0x24ed;eip=0x00224e; 	X(MOV(*(raddr(ds,bx)), al));	// 110601 mov     [bx], al ;~ 24ED:224E
cs=0x24ed;eip=0x002250; 	J(JMP(loc_356ce));	// 110602 jmp     short loc_356CE ;~ 24ED:2250
loc_35702:
	// 7334 
cs=0x24ed;eip=0x002252; 	X(STOSB);	// 110606 stosb ;~ 24ED:2252
cs=0x24ed;eip=0x002253; 	J(JMP(loc_356dd));	// 110607 jmp     short loc_356DD ;~ 24ED:2253
loc_35705:
	// 7335 
cs=0x24ed;eip=0x002255; 	T(DEC(di));	// 110611 dec     di ;~ 24ED:2255
cs=0x24ed;eip=0x002256; 	J(JMP(loc_356ed));	// 110612 jmp     short loc_356ED ;~ 24ED:2256
loc_35708:
	// 7336 
cs=0x24ed;eip=0x002258; 	X(POP(bp));	// 110616 pop     bp ;~ 24ED:2258
cs=0x24ed;eip=0x002259; 	X(PUSH(bp));	// 110617 push    bp ;~ 24ED:2259
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00225a; 	T(SUB(bp, *(dw*)(((db*)&word_3366b))));	// 110618 sub     bp, cs:word_3366B ;~ 24ED:225A
cs=0x24ed;eip=0x00225f; 	J(JC(loc_35772));	// 110619 jb      short loc_35772 ;~ 24ED:225F
cs=0x24ed;eip=0x002261; 	T(MOV(ax, cs));	// 110620 mov     ax, cs ;~ 24ED:2261
cs=0x24ed;eip=0x002263; 	T(MOV(ds, ax));	// 110621 mov     ds, ax ;~ 24ED:2263
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002265; 	T(ADD(bp, *(dw*)(((db*)&word_33669))));	// 110623 add     bp, cs:word_33669 ;~ 24ED:2265
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00226a; 	T(MOV(di, *(dw*)(((db*)&word_33655))));	// 110624 mov     di, cs:word_33655 ;~ 24ED:226A
cs=0x24ed;eip=0x00226f; 	T(ADD(di, 0x0A0));	// 110625 add     di, 0A0h ; ' ' ;~ 24ED:226F
cs=0x24ed;eip=0x002273; 	T(XOR(ch, ch));	// 110626 xor     ch, ch ;~ 24ED:2273
cs=0x24ed;eip=0x002275; 	T(XOR(al, al));	// 110627 xor     al, al ;~ 24ED:2275
cs=0x24ed;eip=0x002277; 	T(MOV(bl, 4));	// 110628 mov     bl, 4 ;~ 24ED:2277
loc_35729:
	// 7337 
cs=0x24ed;eip=0x002279; 	T(MOV(si, 0x8EF));	// 110631 mov     si, 8EFh ;~ 24ED:2279
cs=0x24ed;eip=0x00227c; 	T(MOV(cl, *(raddr(cs,bp+0))));	// 110632 mov     cl, cs:[bp+0] ;~ 24ED:227C
cs=0x24ed;eip=0x002280; 	T(MOV(bh, cl));	// 110633 mov     bh, cl ;~ 24ED:2280
cs=0x24ed;eip=0x002282; 	T(SUB(cx, 4));	// 110634 sub     cx, 4 ;~ 24ED:2282
cs=0x24ed;eip=0x002285; 	J(JA(loc_35741));	// 110635 ja      short loc_35741 ;~ 24ED:2285
cs=0x24ed;eip=0x002287; 	T(NEG(cx));	// 110636 neg     cx ;~ 24ED:2287
cs=0x24ed;eip=0x002289; 	T(ADD(si, cx));	// 110637 add     si, cx ;~ 24ED:2289
cs=0x24ed;eip=0x00228b; 	T(MOV(cl, bh));	// 110638 mov     cl, bh ;~ 24ED:228B
	// 110639 rep movsb ;~ 24ED:228D
cs=0x24ed;eip=0x00228d; 	X(	REP MOVSB);	// 110639 rep movsb ;~ 24ED:228D
cs=0x24ed;eip=0x00228f; 	J(JMP(loc_35747));	// 110640 jmp     short loc_35747 ;~ 24ED:228F
loc_35741:
	// 7338 
cs=0x24ed;eip=0x002291; 	T(XOR(al, al));	// 110644 xor     al, al ;~ 24ED:2291
	// 110645 rep stosb ;~ 24ED:2293
cs=0x24ed;eip=0x002293; 	X(	REP STOSB);	// 110645 rep stosb ;~ 24ED:2293
cs=0x24ed;eip=0x002295; 	X(MOVSD);	// 110646 movsd ;~ 24ED:2295
loc_35747:
	// 7339 
cs=0x24ed;eip=0x002297; 	T(MOV(cl, *(raddr(cs,bp+1))));	// 110649 mov     cl, cs:[bp+1] ;~ 24ED:2297
cs=0x24ed;eip=0x00229b; 	T(ADD(di, cx));	// 110650 add     di, cx ;~ 24ED:229B
cs=0x24ed;eip=0x00229d; 	T(ADD(di, cx));	// 110651 add     di, cx ;~ 24ED:229D
cs=0x24ed;eip=0x00229f; 	T(MOV(cl, bh));	// 110652 mov     cl, bh ;~ 24ED:229F
cs=0x24ed;eip=0x0022a1; 	T(SUB(cx, 4));	// 110653 sub     cx, 4 ;~ 24ED:22A1
cs=0x24ed;eip=0x0022a4; 	J(JA(loc_3575e));	// 110654 ja      short loc_3575E ;~ 24ED:22A4
cs=0x24ed;eip=0x0022a6; 	T(MOV(cl, bh));	// 110655 mov     cl, bh ;~ 24ED:22A6
cs=0x24ed;eip=0x0022a8; 	T(XOR(ch, ch));	// 110656 xor     ch, ch ;~ 24ED:22A8
	// 110657 rep movsb ;~ 24ED:22AA
cs=0x24ed;eip=0x0022aa; 	X(	REP MOVSB);	// 110657 rep movsb ;~ 24ED:22AA
cs=0x24ed;eip=0x0022ac; 	J(JMP(loc_35764));	// 110658 jmp     short loc_35764 ;~ 24ED:22AC
loc_3575e:
	// 7340 
cs=0x24ed;eip=0x0022ae; 	X(MOVSD);	// 110662 movsd ;~ 24ED:22AE
cs=0x24ed;eip=0x0022b0; 	T(XOR(al, al));	// 110663 xor     al, al ;~ 24ED:22B0
	// 110664 rep stosb ;~ 24ED:22B2
cs=0x24ed;eip=0x0022b2; 	X(	REP STOSB);	// 110664 rep stosb ;~ 24ED:22B2
loc_35764:
	// 7341 
cs=0x24ed;eip=0x0022b4; 	T(ADD(di, 0x58));	// 110667 add     di, 58h ; 'X' ;~ 24ED:22B4
cs=0x24ed;eip=0x0022b7; 	T(ADD(bp, 2));	// 110668 add     bp, 2 ;~ 24ED:22B7
cs=0x24ed;eip=0x0022ba; 	T(DEC(bl));	// 110669 dec     bl ;~ 24ED:22BA
cs=0x24ed;eip=0x0022bc; 	J(JNZ(loc_35729));	// 110670 jnz     short loc_35729 ;~ 24ED:22BC
cs=0x24ed;eip=0x0022be; 	T(MOV(ax, ss));	// 110671 mov     ax, ss ;~ 24ED:22BE
cs=0x24ed;eip=0x0022c0; 	T(MOV(ds, ax));	// 110672 mov     ds, ax ;~ 24ED:22C0
loc_35772:
	// 7342 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0022c2; 	T(MOV(es, *(dw*)(((db*)&word_3365b))));	// 110676 mov     es, cs:word_3365B ;~ 24ED:22C2
cs=0x24ed;eip=0x0022c7; 	T(MOV(cx, 0x138));	// 110678 mov     cx, 138h ;~ 24ED:22C7
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0022ca; 	T(MOV(di, *(dw*)(((db*)&word_35138))));	// 110679 mov     di, cs:word_35138 ;~ 24ED:22CA
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0022cf; 	T(MOV(si, *(dw*)(((db*)&word_33655))));	// 110680 mov     si, cs:word_33655 ;~ 24ED:22CF
cs=0x24ed;eip=0x0022d4; 	T(ADD(si, 0x0A0));	// 110681 add     si, 0A0h ; ' ' ;~ 24ED:22D4
cs=0x24ed;eip=0x0022d8; 	J(CALL(sub_357ac,0));	// 110682 call    sub_357AC ;~ 24ED:22D8
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0022db; 	X(MOV(*(dw*)(((db*)&word_35138)), di));	// 110683 mov     cs:word_35138, di ;~ 24ED:22DB
cs=0x24ed;eip=0x0022e0; 	T(MOV(ax, ds));	// 110684 mov     ax, ds ;~ 24ED:22E0
cs=0x24ed;eip=0x0022e2; 	T(MOV(es, ax));	// 110685 mov     es, ax ;~ 24ED:22E2
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0022e4; 	T(MOV(di, *(dw*)(((db*)&word_33655))));	// 110687 mov     di, cs:word_33655 ;~ 24ED:22E4
cs=0x24ed;eip=0x0022e9; 	T(ADD(di, 0x8C));	// 110688 add     di, 8Ch ; 'Œ' ;~ 24ED:22E9
cs=0x24ed;eip=0x0022ed; 	T(MOV(si, di));	// 110689 mov     si, di ;~ 24ED:22ED
cs=0x24ed;eip=0x0022ef; 	T(ADD(si, 0x640));	// 110690 add     si, 640h ;~ 24ED:22EF
cs=0x24ed;eip=0x0022f3; 	T(MOV(cx, 0x159));	// 110691 mov     cx, 159h ;~ 24ED:22F3
	// 110692 rep movsd ;~ 24ED:22F6
cs=0x24ed;eip=0x0022f6; 	X(	REP MOVSD);	// 110692 rep movsd ;~ 24ED:22F6
cs=0x24ed;eip=0x0022f9; 	X(POP(bp));	// 110693 pop     bp ;~ 24ED:22F9
cs=0x24ed;eip=0x0022fa; 	X(POP(dx));	// 110694 pop     dx ;~ 24ED:22FA
cs=0x24ed;eip=0x0022fb; 	J(RETN(0));	// 110695 retn ;~ 24ED:22FB

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_355ed: 	goto loc_355ed;
        case m2c::kloc_3562d: 	goto loc_3562d;
        case m2c::kloc_35643: 	goto loc_35643;
        case m2c::kloc_3564c: 	goto loc_3564c;
        case m2c::kloc_3565b: 	goto loc_3565b;
        case m2c::kloc_35674: 	goto loc_35674;
        case m2c::kloc_3567a: 	goto loc_3567a;
        case m2c::kloc_3567f: 	goto loc_3567f;
        case m2c::kloc_35682: 	goto loc_35682;
        case m2c::kloc_3568a: 	goto loc_3568a;
        case m2c::kloc_356af: 	goto loc_356af;
        case m2c::kloc_356c5: 	goto loc_356c5;
        case m2c::kloc_356ce: 	goto loc_356ce;
        case m2c::kloc_356dd: 	goto loc_356dd;
        case m2c::kloc_356ed: 	goto loc_356ed;
        case m2c::kloc_356f7: 	goto loc_356f7;
        case m2c::kloc_356fd: 	goto loc_356fd;
        case m2c::kloc_35702: 	goto loc_35702;
        case m2c::kloc_35705: 	goto loc_35705;
        case m2c::kloc_35708: 	goto loc_35708;
        case m2c::kloc_35729: 	goto loc_35729;
        case m2c::kloc_35741: 	goto loc_35741;
        case m2c::kloc_35747: 	goto loc_35747;
        case m2c::kloc_3575e: 	goto loc_3575e;
        case m2c::kloc_35764: 	goto loc_35764;
        case m2c::kloc_35772: 	goto loc_35772;
        case m2c::ksub_355bd: 	goto sub_355bd;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_357ac(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_357ac:
    _begin:
cs=0x24ed;eip=0x0022fc; 	X(PUSH(dx));	// 110704 push    dx ;~ 24ED:22FC
cs=0x24ed;eip=0x0022fd; 	X(PUSH(bp));	// 110705 push    bp ;~ 24ED:22FD
cs=0x24ed;eip=0x0022fe; 	T(MOV(bh, 4));	// 110706 mov     bh, 4 ;~ 24ED:22FE
cs=0x24ed;eip=0x002300; 	T(MOV(ebp, 0x0F0F0F0F));	// 110707 mov     ebp, 0F0F0F0Fh ;~ 24ED:2300
cs=0x24ed;eip=0x002306; 	T(MOV(edx, 0x10101010));	// 110708 mov     edx, 10101010h ;~ 24ED:2306
loc_357bc:
	// 7343 
cs=0x24ed;eip=0x00230c; 	X(PUSH(cx));	// 110711 push    cx ;~ 24ED:230C
cs=0x24ed;eip=0x00230d; 	T(SHR(cx, 2));	// 110712 shr     cx, 2 ;~ 24ED:230D
loc_357c0:
	// 7344 
cs=0x24ed;eip=0x002310; 	T(LODSD);	// 110715 lodsd ;~ 24ED:2310
cs=0x24ed;eip=0x002312; 	T(SHR(eax, 4));	// 110716 shr     eax, 4 ;~ 24ED:2312
cs=0x24ed;eip=0x002316; 	T(AND(eax, ebp));	// 110717 and     eax, ebp ;~ 24ED:2316
cs=0x24ed;eip=0x002319; 	T(ADD(eax, edx));	// 110718 add     eax, edx ;~ 24ED:2319
cs=0x24ed;eip=0x00231c; 	X(STOSD);	// 110719 stosd ;~ 24ED:231C
cs=0x24ed;eip=0x00231e; 	J(LOOP(loc_357c0));	// 110720 loop    loc_357C0 ;~ 24ED:231E
cs=0x24ed;eip=0x002320; 	X(POP(cx));	// 110721 pop     cx ;~ 24ED:2320
cs=0x24ed;eip=0x002321; 	T(SUB(di, cx));	// 110722 sub     di, cx ;~ 24ED:2321
cs=0x24ed;eip=0x002323; 	T(SUB(si, cx));	// 110723 sub     si, cx ;~ 24ED:2323
cs=0x24ed;eip=0x002325; 	T(ADD(di, 0x140));	// 110724 add     di, 140h ;~ 24ED:2325
cs=0x24ed;eip=0x002329; 	T(ADD(si, 0x190));	// 110725 add     si, 190h ;~ 24ED:2329
cs=0x24ed;eip=0x00232d; 	T(DEC(bh));	// 110726 dec     bh ;~ 24ED:232D
cs=0x24ed;eip=0x00232f; 	J(JNZ(loc_357bc));	// 110727 jnz     short loc_357BC ;~ 24ED:232F
cs=0x24ed;eip=0x002331; 	X(POP(bp));	// 110728 pop     bp ;~ 24ED:2331
cs=0x24ed;eip=0x002332; 	X(POP(dx));	// 110729 pop     dx ;~ 24ED:2332
cs=0x24ed;eip=0x002333; 	J(RETN(0));	// 110730 retn ;~ 24ED:2333

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_357bc: 	goto loc_357bc;
        case m2c::kloc_357c0: 	goto loc_357c0;
        case m2c::ksub_357ac: 	goto sub_357ac;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_357f6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_357f6:
    _begin:
cs=0x24ed;eip=0x002346; 	T(XOR(dx, dx));	// 110758 xor     dx, dx ;~ 24ED:2346
cs=0x24ed;eip=0x002348; 	T(OR(ax, ax));	// 110759 or      ax, ax ;~ 24ED:2348
cs=0x24ed;eip=0x00234a; 	J(JNS(loc_357fe));	// 110760 jns     short loc_357FE ;~ 24ED:234A
cs=0x24ed;eip=0x00234c; 	T(NEG(ax));	// 110761 neg     ax ;~ 24ED:234C
loc_357fe:
	// 7345 
cs=0x24ed;eip=0x00234e; 	T(SUB(ax, 0x46));	// 110764 sub     ax, 46h ; 'F' ;~ 24ED:234E
cs=0x24ed;eip=0x002351; 	J(JC(locret_3582b));	// 110765 jb      short locret_3582B ;~ 24ED:2351
cs=0x24ed;eip=0x002353; 	T(MOV(bx, 0x2334));	// 110766 mov     bx, 2334h ;~ 24ED:2353
cs=0x24ed;eip=0x002356; 	X(XLATP(raddr(cs,bx)));	// 110767 xlat    byte ptr cs:[bx] ;~ 24ED:2356
cs=0x24ed;eip=0x002358; 	T(XOR(ah, ah));	// 110768 xor     ah, ah ;~ 24ED:2358
cs=0x24ed;eip=0x00235a; 	T(MOV(dx, ax));	// 110769 mov     dx, ax ;~ 24ED:235A
cs=0x24ed;eip=0x00235c; 	T(XOR(al, al));	// 110770 xor     al, al ;~ 24ED:235C
cs=0x24ed;eip=0x00235e; 	T(ADD(si, dx));	// 110771 add     si, dx ;~ 24ED:235E
cs=0x24ed;eip=0x002360; 	T(SUB(cx, dx));	// 110772 sub     cx, dx ;~ 24ED:2360
cs=0x24ed;eip=0x002362; 	T(SUB(cx, dx));	// 110773 sub     cx, dx ;~ 24ED:2362
cs=0x24ed;eip=0x002364; 	J(JC(loc_3582c));	// 110774 jb      short loc_3582C ;~ 24ED:2364
cs=0x24ed;eip=0x002366; 	X(PUSH(dx));	// 110775 push    dx ;~ 24ED:2366
cs=0x24ed;eip=0x002367; 	T(XCHG(cx, dx));	// 110776 xchg    cx, dx ;~ 24ED:2367
cs=0x24ed;eip=0x002369; 	T(SUB(cx, 4));	// 110777 sub     cx, 4 ;~ 24ED:2369
cs=0x24ed;eip=0x00236c; 	J(JC(loc_35824));	// 110778 jb      short loc_35824 ;~ 24ED:236C
	// 110779 rep stosb ;~ 24ED:236E
cs=0x24ed;eip=0x00236e; 	X(	REP STOSB);	// 110779 rep stosb ;~ 24ED:236E
cs=0x24ed;eip=0x002370; 	T(MOV(ax, 0x191C));	// 110780 mov     ax, 191Ch ;~ 24ED:2370
cs=0x24ed;eip=0x002373; 	X(STOSW);	// 110781 stosw ;~ 24ED:2373
loc_35824:
	// 7346 
cs=0x24ed;eip=0x002374; 	T(MOV(ax, 0x1718));	// 110784 mov     ax, 1718h ;~ 24ED:2374
cs=0x24ed;eip=0x002377; 	X(STOSW);	// 110785 stosw ;~ 24ED:2377
cs=0x24ed;eip=0x002378; 	T(MOV(cx, dx));	// 110786 mov     cx, dx ;~ 24ED:2378
cs=0x24ed;eip=0x00237a; 	X(POP(dx));	// 110787 pop     dx ;~ 24ED:237A
locret_3582b:
	// 7347 
cs=0x24ed;eip=0x00237b; 	J(RETN(0));	// 110790 retn ;~ 24ED:237B
loc_3582c:
	// 7348 
cs=0x24ed;eip=0x00237c; 	T(ADD(cx, dx));	// 110794 add     cx, dx ;~ 24ED:237C
cs=0x24ed;eip=0x00237e; 	T(ADD(cx, dx));	// 110795 add     cx, dx ;~ 24ED:237E
	// 110796 rep stosb ;~ 24ED:2380
cs=0x24ed;eip=0x002380; 	X(	REP STOSB);	// 110796 rep stosb ;~ 24ED:2380
cs=0x24ed;eip=0x002382; 	T(XOR(cx, cx));	// 110797 xor     cx, cx ;~ 24ED:2382
cs=0x24ed;eip=0x002384; 	T(XOR(dx, dx));	// 110798 xor     dx, dx ;~ 24ED:2384
cs=0x24ed;eip=0x002386; 	J(RETN(0));	// 110799 retn ;~ 24ED:2386

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_357fe: 	goto loc_357fe;
        case m2c::kloc_35824: 	goto loc_35824;
        case m2c::kloc_3582c: 	goto loc_3582c;
        case m2c::klocret_3582b: 	goto locret_3582b;
        case m2c::ksub_357f6: 	goto sub_357f6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35837(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35837:
    _begin:
cs=0x24ed;eip=0x002387; 	J(JCXZ(locret_3584a));	// 110808 jcxz    short locret_3584A ;~ 24ED:2387
cs=0x24ed;eip=0x002389; 	T(MOV(ax, 0x1817));	// 110809 mov     ax, 1817h ;~ 24ED:2389
cs=0x24ed;eip=0x00238c; 	X(STOSW);	// 110810 stosw ;~ 24ED:238C
cs=0x24ed;eip=0x00238d; 	T(SUB(cx, 4));	// 110811 sub     cx, 4 ;~ 24ED:238D
cs=0x24ed;eip=0x002390; 	J(JC(locret_3584a));	// 110812 jb      short locret_3584A ;~ 24ED:2390
cs=0x24ed;eip=0x002392; 	T(MOV(ax, 0x1C19));	// 110813 mov     ax, 1C19h ;~ 24ED:2392
cs=0x24ed;eip=0x002395; 	X(STOSW);	// 110814 stosw ;~ 24ED:2395
cs=0x24ed;eip=0x002396; 	T(XOR(al, al));	// 110815 xor     al, al ;~ 24ED:2396
	// 110816 rep stosb ;~ 24ED:2398
cs=0x24ed;eip=0x002398; 	X(	REP STOSB);	// 110816 rep stosb ;~ 24ED:2398
locret_3584a:
	// 7349 
cs=0x24ed;eip=0x00239a; 	J(RETN(0));	// 110820 retn ;~ 24ED:239A

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::klocret_3584a: 	goto locret_3584a;
        case m2c::ksub_35837: 	goto sub_35837;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3584b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3584b:
    _begin:
cs=0x24ed;eip=0x00239b; 	X(PUSH(di));	// 110828 push    di ;~ 24ED:239B
cs=0x24ed;eip=0x00239c; 	T(MOV(di, cx));	// 110829 mov     di, cx ;~ 24ED:239C
cs=0x24ed;eip=0x00239e; 	T(DEC(di));	// 110830 dec     di ;~ 24ED:239E
cs=0x24ed;eip=0x00239f; 	T(ADD(bx, di));	// 110831 add     bx, di ;~ 24ED:239F
cs=0x24ed;eip=0x0023a1; 	T(ADD(ax, di));	// 110832 add     ax, di ;~ 24ED:23A1
cs=0x24ed;eip=0x0023a3; 	X(PUSH(ax));	// 110833 push    ax ;~ 24ED:23A3
cs=0x24ed;eip=0x0023a4; 	X(PUSH(dx));	// 110834 push    dx ;~ 24ED:23A4
cs=0x24ed;eip=0x0023a5; 	T(MOV(ax, 0x0C8));	// 110835 mov     ax, 0C8h ; 'È' ;~ 24ED:23A5
cs=0x24ed;eip=0x0023a8; 	T(MUL1_2(di));	// 110836 mul     di ;~ 24ED:23A8
cs=0x24ed;eip=0x0023aa; 	T(ADD(si, ax));	// 110837 add     si, ax ;~ 24ED:23AA
cs=0x24ed;eip=0x0023ac; 	X(POP(dx));	// 110838 pop     dx ;~ 24ED:23AC
cs=0x24ed;eip=0x0023ad; 	X(POP(ax));	// 110839 pop     ax ;~ 24ED:23AD
cs=0x24ed;eip=0x0023ae; 	J(CALL(sub_340a8,0));	// 110840 call    sub_340A8 ;~ 24ED:23AE
cs=0x24ed;eip=0x0023b1; 	X(POP(dx));	// 110841 pop     dx ;~ 24ED:23B1
cs=0x24ed;eip=0x0023b2; 	T(XCHG(cx, dx));	// 110842 xchg    cx, dx ;~ 24ED:23B2
loc_35864:
	// 7350 
cs=0x24ed;eip=0x0023b4; 	J(CALL(sub_35873,0));	// 110845 call    sub_35873 ;~ 24ED:23B4
cs=0x24ed;eip=0x0023b7; 	T(SUB(si, 0x0C8));	// 110846 sub     si, 0C8h ; 'È' ;~ 24ED:23B7
cs=0x24ed;eip=0x0023bb; 	T(SUB(di, 0x140));	// 110847 sub     di, 140h ;~ 24ED:23BB
cs=0x24ed;eip=0x0023bf; 	T(DEC(dx));	// 110848 dec     dx ;~ 24ED:23BF
cs=0x24ed;eip=0x0023c0; 	J(JNZ(loc_35864));	// 110849 jnz     short loc_35864 ;~ 24ED:23C0
cs=0x24ed;eip=0x0023c2; 	J(RETF(0));	// 110850 retf ;~ 24ED:23C2

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_35864: 	goto loc_35864;
        case m2c::ksub_3584b: 	goto sub_3584b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35873(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35873:
    _begin:
cs=0x24ed;eip=0x0023c3; 	X(PUSH(ax));	// 110858 push    ax ;~ 24ED:23C3
cs=0x24ed;eip=0x0023c4; 	X(PUSH(cx));	// 110859 push    cx ;~ 24ED:23C4
cs=0x24ed;eip=0x0023c5; 	X(PUSH(dx));	// 110860 push    dx ;~ 24ED:23C5
cs=0x24ed;eip=0x0023c6; 	X(PUSH(si));	// 110861 push    si ;~ 24ED:23C6
cs=0x24ed;eip=0x0023c7; 	X(PUSH(di));	// 110862 push    di ;~ 24ED:23C7
cs=0x24ed;eip=0x0023c8; 	J(CALL(sub_357f6,0));	// 110863 call    sub_357F6 ;~ 24ED:23C8
cs=0x24ed;eip=0x0023cb; 	X(PUSH(dx));	// 110864 push    dx ;~ 24ED:23CB
cs=0x24ed;eip=0x0023cc; 	T(MOV(ebp, 0x0F0F0F0F));	// 110865 mov     ebp, 0F0F0F0Fh ;~ 24ED:23CC
cs=0x24ed;eip=0x0023d2; 	T(TEST(cx, 3));	// 110866 test    cx, 3 ;~ 24ED:23D2
cs=0x24ed;eip=0x0023d6; 	J(JZ(loc_35898));	// 110867 jz      loc_35898 ;~ 24ED:23D6
cs=0x24ed;eip=0x0023da; 	T(MOV(dx, cx));	// 110868 mov     dx, cx ;~ 24ED:23DA
cs=0x24ed;eip=0x0023dc; 	T(AND(dx, 3));	// 110869 and     dx, 3 ;~ 24ED:23DC
loc_3588f:
	// 7351 
cs=0x24ed;eip=0x0023df; 	T(LODSB);	// 110872 lodsb ;~ 24ED:23DF
cs=0x24ed;eip=0x0023e0; 	T(AND(ax, bp));	// 110873 and     ax, bp ;~ 24ED:23E0
cs=0x24ed;eip=0x0023e2; 	T(ADD(al, 0x10));	// 110874 add     al, 10h ;~ 24ED:23E2
cs=0x24ed;eip=0x0023e4; 	X(STOSB);	// 110875 stosb ;~ 24ED:23E4
cs=0x24ed;eip=0x0023e5; 	T(DEC(dx));	// 110876 dec     dx ;~ 24ED:23E5
cs=0x24ed;eip=0x0023e6; 	J(JNZ(loc_3588f));	// 110877 jnz     short loc_3588F ;~ 24ED:23E6
loc_35898:
	// 7352 
cs=0x24ed;eip=0x0023e8; 	T(SHR(cx, 2));	// 110880 shr     cx, 2 ;~ 24ED:23E8
cs=0x24ed;eip=0x0023eb; 	J(JZ(loc_358b1));	// 110881 jz      loc_358B1 ;~ 24ED:23EB
cs=0x24ed;eip=0x0023ef; 	T(MOV(edx, 0x10101010));	// 110882 mov     edx, 10101010h ;~ 24ED:23EF
loc_358a5:
	// 7353 
cs=0x24ed;eip=0x0023f5; 	T(LODSD);	// 110885 lodsd ;~ 24ED:23F5
cs=0x24ed;eip=0x0023f7; 	T(AND(eax, ebp));	// 110886 and     eax, ebp ;~ 24ED:23F7
cs=0x24ed;eip=0x0023fa; 	T(ADD(eax, edx));	// 110887 add     eax, edx ;~ 24ED:23FA
cs=0x24ed;eip=0x0023fd; 	X(STOSD);	// 110888 stosd ;~ 24ED:23FD
cs=0x24ed;eip=0x0023ff; 	J(LOOP(loc_358a5));	// 110889 loop    loc_358A5 ;~ 24ED:23FF
loc_358b1:
	// 7354 
cs=0x24ed;eip=0x002401; 	X(POP(cx));	// 110892 pop     cx ;~ 24ED:2401
cs=0x24ed;eip=0x002402; 	J(CALL(sub_35837,0));	// 110893 call    sub_35837 ;~ 24ED:2402
cs=0x24ed;eip=0x002405; 	X(POP(di));	// 110894 pop     di ;~ 24ED:2405
cs=0x24ed;eip=0x002406; 	X(POP(si));	// 110895 pop     si ;~ 24ED:2406
cs=0x24ed;eip=0x002407; 	X(POP(dx));	// 110896 pop     dx ;~ 24ED:2407
cs=0x24ed;eip=0x002408; 	X(POP(cx));	// 110897 pop     cx ;~ 24ED:2408
cs=0x24ed;eip=0x002409; 	X(POP(ax));	// 110898 pop     ax ;~ 24ED:2409
cs=0x24ed;eip=0x00240a; 	T(DEC(ax));	// 110899 dec     ax ;~ 24ED:240A
cs=0x24ed;eip=0x00240b; 	J(RETN(0));	// 110900 retn ;~ 24ED:240B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_3588f: 	goto loc_3588f;
        case m2c::kloc_35898: 	goto loc_35898;
        case m2c::kloc_358a5: 	goto loc_358a5;
        case m2c::kloc_358b1: 	goto loc_358b1;
        case m2c::ksub_35873: 	goto sub_35873;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_240c_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_240c_proc:
    _begin:
loc_358bc:
	// 7355 
cs=0x24ed;eip=0x00240c; 	X(PUSH(bx));	// 110906 push    bx ;~ 24ED:240C
cs=0x24ed;eip=0x00240d; 	T(XOR(bh, bh));	// 110907 xor     bh, bh ;~ 24ED:240D
cs=0x24ed;eip=0x00240f; 	X(PUSH(di));	// 110908 push    di ;~ 24ED:240F
cs=0x24ed;eip=0x002410; 	J(CALL(sub_340a8,0));	// 110909 call    sub_340A8 ;~ 24ED:2410
cs=0x24ed;eip=0x002413; 	X(POP(dx));	// 110910 pop     dx ;~ 24ED:2413
cs=0x24ed;eip=0x002414; 	T(XCHG(cx, dx));	// 110911 xchg    cx, dx ;~ 24ED:2414
cs=0x24ed;eip=0x002416; 	X(POP(bx));	// 110912 pop     bx ;~ 24ED:2416
cs=0x24ed;eip=0x002417; 	T(OR(bh, bh));	// 110913 or      bh, bh ;~ 24ED:2417
cs=0x24ed;eip=0x002419; 	J(JNZ(loc_358f6));	// 110914 jnz     short loc_358F6 ;~ 24ED:2419
loc_358cb:
	// 7356 
cs=0x24ed;eip=0x00241b; 	J(CALL(sub_3591c,0));	// 110917 call    sub_3591C ;~ 24ED:241B
cs=0x24ed;eip=0x00241e; 	T(ADD(si, 0x0C8));	// 110918 add     si, 0C8h ; 'È' ;~ 24ED:241E
cs=0x24ed;eip=0x002422; 	T(ADD(di, 0x140));	// 110919 add     di, 140h ;~ 24ED:2422
cs=0x24ed;eip=0x002426; 	T(DEC(dx));	// 110920 dec     dx ;~ 24ED:2426
cs=0x24ed;eip=0x002427; 	J(JNZ(loc_358cb));	// 110921 jnz     short loc_358CB ;~ 24ED:2427
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002429; 	T(CMP(*(&byte_3366d), 0));	// 110922 cmp     cs:byte_3366D, 0 ;~ 24ED:2429
cs=0x24ed;eip=0x00242f; 	J(JZ(locret_358f5));	// 110923 jz      short locret_358F5 ;~ 24ED:242F
cs=0x24ed;eip=0x002431; 	X(PUSHA);	// 110924 pusha ;~ 24ED:2431
cs=0x24ed;eip=0x002432; 	X(PUSH(ds));	// 110925 push    ds ;~ 24ED:2432
cs=0x24ed;eip=0x002433; 	X(PUSH(es));	// 110926 push    es ;~ 24ED:2433
cs=0x24ed;eip=0x002434; 	X(PUSH(cs));	// 110927 push    cs ;~ 24ED:2434
cs=0x24ed;eip=0x002435; 	X(POP(es));	// 110928 pop     es ;~ 24ED:2435
cs=0x24ed;eip=0x002436; 	T(MOV(dx, 0x8BF));	// 110930 mov     dx, 8BFh ;~ 24ED:2436
cs=0x24ed;eip=0x002439; 	T(MOV(cx, 0x10));	// 110931 mov     cx, 10h ;~ 24ED:2439
cs=0x24ed;eip=0x00243c; 	T(MOV(bx, 0x50));	// 110932 mov     bx, 50h ; 'P' ;~ 24ED:243C
cs=0x24ed;eip=0x00243f; 	J(CALL(sub_34000,0));	// 110933 call    sub_34000 ;~ 24ED:243F
cs=0x24ed;eip=0x002442; 	X(POP(es));	// 110934 pop     es ;~ 24ED:2442
cs=0x24ed;eip=0x002443; 	X(POP(ds));	// 110936 pop     ds ;~ 24ED:2443
cs=0x24ed;eip=0x002444; 	X(POPA);	// 110938 popa ;~ 24ED:2444
locret_358f5:
	// 7357 
cs=0x24ed;eip=0x002445; 	J(RETF(0));	// 110941 retf ;~ 24ED:2445
loc_358f6:
	// 7358 
cs=0x24ed;eip=0x002446; 	J(CALL(sub_35958,0));	// 110946 call    sub_35958 ;~ 24ED:2446
cs=0x24ed;eip=0x002449; 	T(ADD(si, 0x0C8));	// 110947 add     si, 0C8h ; 'È' ;~ 24ED:2449
cs=0x24ed;eip=0x00244d; 	T(ADD(di, 0x140));	// 110948 add     di, 140h ;~ 24ED:244D
cs=0x24ed;eip=0x002451; 	X(PUSH(ax));	// 110949 push    ax ;~ 24ED:2451
cs=0x24ed;eip=0x002452; 	T(bx = bp+0x100);	// 110950 lea     bx, [bp+100h] ;~ 24ED:2452
loc_35906:
	// 7359 
cs=0x24ed;eip=0x002456; 	T(DEC(bx));	// 110953 dec     bx ;~ 24ED:2456
cs=0x24ed;eip=0x002457; 	T(MOV(al, *(raddr(ds,bx))));	// 110954 mov     al, [bx] ;~ 24ED:2457
cs=0x24ed;eip=0x002459; 	T(CMP(al, 0x70));	// 110955 cmp     al, 70h ; 'p' ;~ 24ED:2459
cs=0x24ed;eip=0x00245b; 	J(JZ(loc_35913));	// 110956 jz      short loc_35913 ;~ 24ED:245B
cs=0x24ed;eip=0x00245d; 	T(ROL(al, 1));	// 110957 rol     al, 1 ;~ 24ED:245D
cs=0x24ed;eip=0x00245f; 	T(ROL(al, 1));	// 110958 rol     al, 1 ;~ 24ED:245F
cs=0x24ed;eip=0x002461; 	X(MOV(*(raddr(ds,bx)), al));	// 110959 mov     [bx], al ;~ 24ED:2461
loc_35913:
	// 7360 
cs=0x24ed;eip=0x002463; 	T(CMP(bx, bp));	// 110962 cmp     bx, bp ;~ 24ED:2463
cs=0x24ed;eip=0x002465; 	J(JA(loc_35906));	// 110963 ja      short loc_35906 ;~ 24ED:2465
cs=0x24ed;eip=0x002467; 	X(POP(ax));	// 110964 pop     ax ;~ 24ED:2467
cs=0x24ed;eip=0x002468; 	T(DEC(dx));	// 110965 dec     dx ;~ 24ED:2468
cs=0x24ed;eip=0x002469; 	J(JNZ(loc_358f6));	// 110966 jnz     short loc_358F6 ;~ 24ED:2469
cs=0x24ed;eip=0x00246b; 	J(RETF(0));	// 110967 retf ;~ 24ED:246B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_358cb: 	goto loc_358cb;
        case m2c::kloc_358f6: 	goto loc_358f6;
        case m2c::kloc_35906: 	goto loc_35906;
        case m2c::kloc_35913: 	goto loc_35913;
        case m2c::klocret_358f5: 	goto locret_358f5;
        case m2c::kseg002_240c_proc: 	goto seg002_240c_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3591c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3591c:
    _begin:
cs=0x24ed;eip=0x00246c; 	X(PUSH(ax));	// 110973 push    ax ;~ 24ED:246C
cs=0x24ed;eip=0x00246d; 	X(PUSH(cx));	// 110974 push    cx ;~ 24ED:246D
cs=0x24ed;eip=0x00246e; 	X(PUSH(dx));	// 110975 push    dx ;~ 24ED:246E
cs=0x24ed;eip=0x00246f; 	X(PUSH(si));	// 110976 push    si ;~ 24ED:246F
cs=0x24ed;eip=0x002470; 	X(PUSH(di));	// 110977 push    di ;~ 24ED:2470
cs=0x24ed;eip=0x002471; 	J(CALL(sub_357f6,0));	// 110978 call    sub_357F6 ;~ 24ED:2471
cs=0x24ed;eip=0x002474; 	X(PUSH(dx));	// 110979 push    dx ;~ 24ED:2474
cs=0x24ed;eip=0x002475; 	T(MOV(bx, bp));	// 110980 mov     bx, bp ;~ 24ED:2475
cs=0x24ed;eip=0x002477; 	T(MOV(ah, 0x70));	// 110981 mov     ah, 70h ; 'p' ;~ 24ED:2477
cs=0x24ed;eip=0x002479; 	T(DEC(cx));	// 110982 dec     cx ;~ 24ED:2479
loc_3592a:
	// 7361 
cs=0x24ed;eip=0x00247a; 	T(LODSB);	// 110986 lodsb ;~ 24ED:247A
cs=0x24ed;eip=0x00247b; 	T(CMP(al, *(raddr(ds,si))));	// 110987 cmp     al, [si] ;~ 24ED:247B
cs=0x24ed;eip=0x00247d; 	J(JNZ(loc_3593b));	// 110988 jnz     short loc_3593B ;~ 24ED:247D
cs=0x24ed;eip=0x00247f; 	T(CMP(al, *(raddr(ds,si+0x0C7))));	// 110989 cmp     al, [si+0C7h] ;~ 24ED:247F
cs=0x24ed;eip=0x002483; 	J(JNZ(loc_3593b));	// 110990 jnz     short loc_3593B ;~ 24ED:2483
cs=0x24ed;eip=0x002485; 	T(XLAT);	// 110991 xlat ;~ 24ED:2485
cs=0x24ed;eip=0x002486; 	X(STOSB);	// 110992 stosb ;~ 24ED:2486
cs=0x24ed;eip=0x002487; 	J(LOOP(loc_3592a));	// 110993 loop    loc_3592A ;~ 24ED:2487
cs=0x24ed;eip=0x002489; 	J(JMP(loc_35940));	// 110994 jmp     short loc_35940 ;~ 24ED:2489
loc_3593b:
	// 7362 
cs=0x24ed;eip=0x00248b; 	T(MOV(al, ah));	// 110999 mov     al, ah ;~ 24ED:248B
cs=0x24ed;eip=0x00248d; 	X(STOSB);	// 111000 stosb ;~ 24ED:248D
cs=0x24ed;eip=0x00248e; 	J(LOOP(loc_3592a));	// 111001 loop    loc_3592A ;~ 24ED:248E
loc_35940:
	// 7363 
cs=0x24ed;eip=0x002490; 	T(LODSB);	// 111004 lodsb ;~ 24ED:2490
cs=0x24ed;eip=0x002491; 	T(CMP(al, *(raddr(ds,si+0x0C7))));	// 111005 cmp     al, [si+0C7h] ;~ 24ED:2491
cs=0x24ed;eip=0x002495; 	J(JNZ(loc_3594a));	// 111006 jnz     short loc_3594A ;~ 24ED:2495
cs=0x24ed;eip=0x002497; 	T(XLAT);	// 111007 xlat ;~ 24ED:2497
cs=0x24ed;eip=0x002498; 	J(JMP(loc_3594c));	// 111008 jmp     short loc_3594C ;~ 24ED:2498
loc_3594a:
	// 7364 
cs=0x24ed;eip=0x00249a; 	T(MOV(al, ah));	// 111012 mov     al, ah ;~ 24ED:249A
loc_3594c:
	// 7365 
cs=0x24ed;eip=0x00249c; 	X(STOSB);	// 111015 stosb ;~ 24ED:249C
cs=0x24ed;eip=0x00249d; 	X(POP(cx));	// 111016 pop     cx ;~ 24ED:249D
cs=0x24ed;eip=0x00249e; 	J(CALL(sub_35837,0));	// 111017 call    sub_35837 ;~ 24ED:249E
cs=0x24ed;eip=0x0024a1; 	X(POP(di));	// 111018 pop     di ;~ 24ED:24A1
cs=0x24ed;eip=0x0024a2; 	X(POP(si));	// 111019 pop     si ;~ 24ED:24A2
cs=0x24ed;eip=0x0024a3; 	X(POP(dx));	// 111020 pop     dx ;~ 24ED:24A3
cs=0x24ed;eip=0x0024a4; 	X(POP(cx));	// 111021 pop     cx ;~ 24ED:24A4
cs=0x24ed;eip=0x0024a5; 	X(POP(ax));	// 111022 pop     ax ;~ 24ED:24A5
cs=0x24ed;eip=0x0024a6; 	T(INC(ax));	// 111023 inc     ax ;~ 24ED:24A6
cs=0x24ed;eip=0x0024a7; 	J(RETN(0));	// 111024 retn ;~ 24ED:24A7

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_3592a: 	goto loc_3592a;
        case m2c::kloc_3593b: 	goto loc_3593b;
        case m2c::kloc_35940: 	goto loc_35940;
        case m2c::kloc_3594a: 	goto loc_3594a;
        case m2c::kloc_3594c: 	goto loc_3594c;
        case m2c::ksub_3591c: 	goto sub_3591c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35958(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35958:
    _begin:
cs=0x24ed;eip=0x0024a8; 	X(PUSH(ax));	// 111032 push    ax ;~ 24ED:24A8
cs=0x24ed;eip=0x0024a9; 	X(PUSH(cx));	// 111033 push    cx ;~ 24ED:24A9
cs=0x24ed;eip=0x0024aa; 	X(PUSH(dx));	// 111034 push    dx ;~ 24ED:24AA
cs=0x24ed;eip=0x0024ab; 	X(PUSH(si));	// 111035 push    si ;~ 24ED:24AB
cs=0x24ed;eip=0x0024ac; 	X(PUSH(di));	// 111036 push    di ;~ 24ED:24AC
cs=0x24ed;eip=0x0024ad; 	J(CALL(sub_357f6,0));	// 111037 call    sub_357F6 ;~ 24ED:24AD
cs=0x24ed;eip=0x0024b0; 	X(PUSH(dx));	// 111038 push    dx ;~ 24ED:24B0
cs=0x24ed;eip=0x0024b1; 	T(MOV(bx, bp));	// 111039 mov     bx, bp ;~ 24ED:24B1
cs=0x24ed;eip=0x0024b3; 	T(MOV(ah, 0x70));	// 111040 mov     ah, 70h ; 'p' ;~ 24ED:24B3
cs=0x24ed;eip=0x0024b5; 	T(DEC(cx));	// 111041 dec     cx ;~ 24ED:24B5
loc_35966:
	// 7366 
cs=0x24ed;eip=0x0024b6; 	T(LODSB);	// 111045 lodsb ;~ 24ED:24B6
cs=0x24ed;eip=0x0024b7; 	T(CMP(al, *(raddr(ds,si))));	// 111046 cmp     al, [si] ;~ 24ED:24B7
cs=0x24ed;eip=0x0024b9; 	J(JNZ(loc_3597f));	// 111047 jnz     short loc_3597F ;~ 24ED:24B9
cs=0x24ed;eip=0x0024bb; 	T(CMP(al, *(raddr(ds,si+0x0C7))));	// 111048 cmp     al, [si+0C7h] ;~ 24ED:24BB
cs=0x24ed;eip=0x0024bf; 	J(JNZ(loc_3597f));	// 111049 jnz     short loc_3597F ;~ 24ED:24BF
cs=0x24ed;eip=0x0024c1; 	T(XLAT);	// 111050 xlat ;~ 24ED:24C1
cs=0x24ed;eip=0x0024c2; 	T(CMP(al, ah));	// 111051 cmp     al, ah ;~ 24ED:24C2
cs=0x24ed;eip=0x0024c4; 	J(JZ(loc_35981));	// 111052 jz      short loc_35981 ;~ 24ED:24C4
cs=0x24ed;eip=0x0024c6; 	T(AND(al, 3));	// 111053 and     al, 3 ;~ 24ED:24C6
cs=0x24ed;eip=0x0024c8; 	T(ADD(al, 0x71));	// 111054 add     al, 71h ; 'q' ;~ 24ED:24C8
cs=0x24ed;eip=0x0024ca; 	X(STOSB);	// 111055 stosb ;~ 24ED:24CA
cs=0x24ed;eip=0x0024cb; 	J(LOOP(loc_35966));	// 111056 loop    loc_35966 ;~ 24ED:24CB
cs=0x24ed;eip=0x0024cd; 	J(JMP(loc_35984));	// 111057 jmp     short loc_35984 ;~ 24ED:24CD
loc_3597f:
	// 7367 
cs=0x24ed;eip=0x0024cf; 	T(MOV(al, ah));	// 111062 mov     al, ah ;~ 24ED:24CF
loc_35981:
	// 7368 
cs=0x24ed;eip=0x0024d1; 	X(STOSB);	// 111065 stosb ;~ 24ED:24D1
cs=0x24ed;eip=0x0024d2; 	J(LOOP(loc_35966));	// 111066 loop    loc_35966 ;~ 24ED:24D2
loc_35984:
	// 7369 
cs=0x24ed;eip=0x0024d4; 	T(LODSB);	// 111069 lodsb ;~ 24ED:24D4
cs=0x24ed;eip=0x0024d5; 	T(CMP(al, *(raddr(ds,si+0x0C7))));	// 111070 cmp     al, [si+0C7h] ;~ 24ED:24D5
cs=0x24ed;eip=0x0024d9; 	J(JNZ(loc_35996));	// 111071 jnz     short loc_35996 ;~ 24ED:24D9
cs=0x24ed;eip=0x0024db; 	T(XLAT);	// 111072 xlat ;~ 24ED:24DB
cs=0x24ed;eip=0x0024dc; 	T(CMP(al, ah));	// 111073 cmp     al, ah ;~ 24ED:24DC
cs=0x24ed;eip=0x0024de; 	J(JZ(loc_35998));	// 111074 jz      short loc_35998 ;~ 24ED:24DE
cs=0x24ed;eip=0x0024e0; 	T(AND(al, 3));	// 111075 and     al, 3 ;~ 24ED:24E0
cs=0x24ed;eip=0x0024e2; 	T(ADD(al, 0x71));	// 111076 add     al, 71h ; 'q' ;~ 24ED:24E2
cs=0x24ed;eip=0x0024e4; 	J(JMP(loc_35998));	// 111077 jmp     short loc_35998 ;~ 24ED:24E4
loc_35996:
	// 7370 
cs=0x24ed;eip=0x0024e6; 	T(MOV(al, ah));	// 111081 mov     al, ah ;~ 24ED:24E6
loc_35998:
	// 7371 
cs=0x24ed;eip=0x0024e8; 	X(STOSB);	// 111085 stosb ;~ 24ED:24E8
cs=0x24ed;eip=0x0024e9; 	X(POP(cx));	// 111086 pop     cx ;~ 24ED:24E9
cs=0x24ed;eip=0x0024ea; 	J(CALL(sub_35837,0));	// 111087 call    sub_35837 ;~ 24ED:24EA
cs=0x24ed;eip=0x0024ed; 	X(POP(di));	// 111088 pop     di ;~ 24ED:24ED
cs=0x24ed;eip=0x0024ee; 	X(POP(si));	// 111089 pop     si ;~ 24ED:24EE
cs=0x24ed;eip=0x0024ef; 	X(POP(dx));	// 111090 pop     dx ;~ 24ED:24EF
cs=0x24ed;eip=0x0024f0; 	X(POP(cx));	// 111091 pop     cx ;~ 24ED:24F0
cs=0x24ed;eip=0x0024f1; 	X(POP(ax));	// 111092 pop     ax ;~ 24ED:24F1
cs=0x24ed;eip=0x0024f2; 	T(INC(ax));	// 111093 inc     ax ;~ 24ED:24F2
cs=0x24ed;eip=0x0024f3; 	J(RETN(0));	// 111094 retn ;~ 24ED:24F3

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_35966: 	goto loc_35966;
        case m2c::kloc_3597f: 	goto loc_3597f;
        case m2c::kloc_35981: 	goto loc_35981;
        case m2c::kloc_35984: 	goto loc_35984;
        case m2c::kloc_35996: 	goto loc_35996;
        case m2c::kloc_35998: 	goto loc_35998;
        case m2c::ksub_35958: 	goto sub_35958;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group142(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group142:
    _begin:
sub_359ac:
	// 111111 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0024fc; 	T(CMP(*(&byte_33651), 0));	// 111113 cmp     cs:byte_33651, 0 ;~ 24ED:24FC
cs=0x24ed;eip=0x002502; 	J(JZ(loc_359d3));	// 111114 jz      short loc_359D3 ;~ 24ED:2502
loc_359b4:
	// 7372 
cs=0x24ed;eip=0x002504; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 111117 mov     ax, [bp+0] ;~ 24ED:2504
cs=0x24ed;eip=0x002507; 	T(SUB(ax, bx));	// 111118 sub     ax, bx ;~ 24ED:2507
cs=0x24ed;eip=0x002509; 	T(CMP(ax, 5));	// 111119 cmp     ax, 5 ;~ 24ED:2509
cs=0x24ed;eip=0x00250c; 	J(JC(loc_359b4));	// 111120 jb      short loc_359B4 ;~ 24ED:250C
loc_359be:
	// 7373 
cs=0x24ed;eip=0x00250e; 	X(PUSH(dx));	// 111123 push    dx ;~ 24ED:250E
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00250f; 	T(MOV(dx, *(dw*)(((db*)&word_3364f))));	// 111124 mov     dx, cs:word_3364F ;~ 24ED:250F
loc_359c4:
	// 7374 
cs=0x24ed;eip=0x002514; 	S(IN(al, dx));	// 111127 in      al, dx          ; Video status bits: ;~ 24ED:2514
cs=0x24ed;eip=0x002515; 	T(AND(al, 8));	// 111132 and     al, 8 ;~ 24ED:2515
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002517; 	T(CMP(al, *(&byte_33652)));	// 111133 cmp     al, cs:byte_33652 ;~ 24ED:2517
cs=0x24ed;eip=0x00251c; 	J(JNZ(loc_359c4));	// 111134 jnz     short loc_359C4 ;~ 24ED:251C
cs=0x24ed;eip=0x00251e; 	X(POP(dx));	// 111135 pop     dx ;~ 24ED:251E
cs=0x24ed;eip=0x00251f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 111136 mov     bx, [bp+0] ;~ 24ED:251F
cs=0x24ed;eip=0x002522; 	J(RETN(0));	// 111137 retn ;~ 24ED:2522
loc_359d3:
	// 7375 
cs=0x24ed;eip=0x002523; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 111142 mov     ax, [bp+0] ;~ 24ED:2523
cs=0x24ed;eip=0x002526; 	T(SUB(ax, bx));	// 111143 sub     ax, bx ;~ 24ED:2526
cs=0x24ed;eip=0x002528; 	T(CMP(ax, 6));	// 111144 cmp     ax, 6 ;~ 24ED:2528
cs=0x24ed;eip=0x00252b; 	J(JC(loc_359d3));	// 111145 jb      short loc_359D3 ;~ 24ED:252B
cs=0x24ed;eip=0x00252d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 111146 mov     bx, [bp+0] ;~ 24ED:252D
cs=0x24ed;eip=0x002530; 	J(RETN(0));	// 111147 retn ;~ 24ED:2530
sub_359e1:
	// 111154 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002531; 	T(CMP(*(&byte_33651), 0));	// 111156 cmp     cs:byte_33651, 0 ;~ 24ED:2531
cs=0x24ed;eip=0x002537; 	J(JNZ(loc_359be));	// 111157 jnz     short loc_359BE ;~ 24ED:2537
loc_359e9:
	// 7376 
cs=0x24ed;eip=0x002539; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 111160 mov     ax, [bp+0] ;~ 24ED:2539
cs=0x24ed;eip=0x00253c; 	T(SUB(ax, bx));	// 111161 sub     ax, bx ;~ 24ED:253C
cs=0x24ed;eip=0x00253e; 	T(CMP(ax, 3));	// 111162 cmp     ax, 3 ;~ 24ED:253E
cs=0x24ed;eip=0x002541; 	J(JC(loc_359e9));	// 111163 jb      short loc_359E9 ;~ 24ED:2541
cs=0x24ed;eip=0x002543; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 111164 mov     bx, [bp+0] ;~ 24ED:2543
cs=0x24ed;eip=0x002546; 	J(RETN(0));	// 111165 retn ;~ 24ED:2546

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_359b4: 	goto loc_359b4;
        case m2c::kloc_359be: 	goto loc_359be;
        case m2c::kloc_359c4: 	goto loc_359c4;
        case m2c::kloc_359d3: 	goto loc_359d3;
        case m2c::kloc_359e9: 	goto loc_359e9;
        case m2c::ksub_359ac: 	goto sub_359ac;
        case m2c::ksub_359e1: 	goto sub_359e1;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_359f7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_359f7:
    _begin:
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002547; 	T(MOV(ax, *(dw*)(((db*)&word_359a4))));	// 111173 mov     ax, cs:word_359A4 ;~ 24ED:2547
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00254b; 	X(XCHG(ax, *(dw*)(((db*)&word_359a6))));	// 111174 xchg    ax, cs:word_359A6 ;~ 24ED:254B
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002550; 	X(MOV(*(dw*)(((db*)&word_359a4)), ax));	// 111175 mov     cs:word_359A4, ax ;~ 24ED:2550
cs=0x24ed;eip=0x002554; 	J(RETN(0));	// 111176 retn ;~ 24ED:2554

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_359f7: 	goto sub_359f7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35a05(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35a05:
    _begin:
cs=0x24ed;eip=0x002555; 	X(PUSH(ds));	// 111185 push    ds ;~ 24ED:2555
cs=0x24ed;eip=0x002556; 	X(PUSH(es));	// 111186 push    es ;~ 24ED:2556
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002557; 	T(MOV(ds, *(dw*)(((db*)&word_359a8))));	// 111187 mov     ds, cs:word_359A8 ;~ 24ED:2557
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00255c; 	T(MOV(es, *(dw*)(((db*)&word_359a4))));	// 111189 mov     es, cs:word_359A4 ;~ 24ED:255C
cs=0x24ed;eip=0x002561; 	X(PUSH(cs));	// 111191 push    cs ;~ 24ED:2561
cs=0x24ed;eip=0x002562; 	J(CALL(sub_34f94,0));	// 111192 call    near ptr sub_34F94 ;~ 24ED:2562
cs=0x24ed;eip=0x002565; 	X(POP(es));	// 111193 pop     es ;~ 24ED:2565
cs=0x24ed;eip=0x002566; 	X(POP(ds));	// 111195 pop     ds ;~ 24ED:2566
cs=0x24ed;eip=0x002567; 	J(RETN(0));	// 111197 retn ;~ 24ED:2567

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_35a05: 	goto sub_35a05;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35a56(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35a56:
    _begin:
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0025a6; 	X(MOV(*(dw*)(((db*)&word_35bf2)), 8));	// 111247 mov     cs:word_35BF2, 8 ;~ 24ED:25A6
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0025ad; 	X(MOV(*(dw*)(((db*)&word_35bf4)), 1));	// 111248 mov     cs:word_35BF4, 1 ;~ 24ED:25AD
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0025b4; 	X(MOV(*(dw*)(((db*)&word_359a4)), si));	// 111249 mov     cs:word_359A4, si ;~ 24ED:25B4
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0025b9; 	X(MOV(*(dw*)(((db*)&word_359a6)), ds));	// 111250 mov     cs:word_359A6, ds ;~ 24ED:25B9
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0025be; 	X(MOV(*(dw*)(((db*)&word_359a8)), es));	// 111251 mov     cs:word_359A8, es ;~ 24ED:25BE
cs=0x24ed;eip=0x0025c3; 	T(MOV(cx, 0x98));	// 111252 mov     cx, 98h ;~ 24ED:25C3
cs=0x24ed;eip=0x0025c6; 	T(AND(ax, 0x0FE));	// 111253 and     ax, 0FEh ;~ 24ED:25C6
loc_35a79:
	// 7377 
cs=0x24ed;eip=0x0025c9; 	T(CMP(ax, 0x3E));	// 111256 cmp     ax, 3Eh ; '>' ;~ 24ED:25C9
cs=0x24ed;eip=0x0025cc; 	J(JC(loc_35a83));	// 111257 jb      short loc_35A83 ;~ 24ED:25CC
cs=0x24ed;eip=0x0025ce; 	T(SUB(ax, 0x3E));	// 111258 sub     ax, 3Eh ; '>' ;~ 24ED:25CE
cs=0x24ed;eip=0x0025d1; 	J(JMP(loc_35a79));	// 111259 jmp     short loc_35A79 ;~ 24ED:25D1
loc_35a83:
	// 7378 
cs=0x24ed;eip=0x0025d3; 	T(MOV(bx, ax));	// 111263 mov     bx, ax ;~ 24ED:25D3
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0025d5; __disp=*(dw*)(((db*)&off_35a18)+bx);
	J(return __dispatch_call(__disp, _state););	// 111264 jmp     cs:off_35A18[bx] ;~ 24ED:25D5

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_35a79: 	goto loc_35a79;
        case m2c::kloc_35a83: 	goto loc_35a83;
        case m2c::ksub_35a56: 	goto sub_35a56;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35a8c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35a8c:
    _begin:
cs=0x24ed;eip=0x0025dc; 	T(CMP(byte_33651, 0));	// 111277 cmp     byte_33651, 0 ;~ 24ED:25DC
cs=0x24ed;eip=0x0025e1; 	J(JNZ(locret_35a96));	// 111278 jnz     short locret_35A96 ;~ 24ED:25E1
cs=0x24ed;eip=0x0025e3; 	J(CALL(sub_359e1,0));	// 111279 call    sub_359E1 ;~ 24ED:25E3
locret_35a96:
	// 7379 
cs=0x24ed;eip=0x0025e6; 	J(RETN(0));	// 111282 retn ;~ 24ED:25E6

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::klocret_35a96: 	goto locret_35a96;
        case m2c::ksub_35a8c: 	goto sub_35a8c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group143(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group143:
    _begin:
seg002_25e7_proc:
	// 111288 
loc_35a97:
	// 7380 
cs=0x24ed;eip=0x0025e7; 	J(CALL(sub_33f08,0));	// 111290 call    sub_33F08 ;~ 24ED:25E7
cs=0x24ed;eip=0x0025ea; 	T(XOR(ax, ax));	// 111291 xor     ax, ax ;~ 24ED:25EA
cs=0x24ed;eip=0x0025ec; 	T(MOV(di, 0x1BE));	// 111292 mov     di, 1BEh ;~ 24ED:25EC
cs=0x24ed;eip=0x0025ef; 	T(MOV(cx, 0x101));	// 111293 mov     cx, 101h ;~ 24ED:25EF
	// 111294 rep stosb ;~ 24ED:25F2
cs=0x24ed;eip=0x0025f2; 	X(	REP STOSB);	// 111294 rep stosb ;~ 24ED:25F2
cs=0x24ed;eip=0x0025f4; 	T(MOV(di, 0x5BF));	// 111295 mov     di, 5BFh ;~ 24ED:25F4
cs=0x24ed;eip=0x0025f7; 	T(MOV(dx, di));	// 111296 mov     dx, di ;~ 24ED:25F7
cs=0x24ed;eip=0x0025f9; 	T(MOV(cx, 0x2FD));	// 111297 mov     cx, 2FDh ;~ 24ED:25F9
	// 111298 rep stosb ;~ 24ED:25FC
cs=0x24ed;eip=0x0025fc; 	X(	REP STOSB);	// 111298 rep stosb ;~ 24ED:25FC
cs=0x24ed;eip=0x0025fe; 	T(XOR(bx, bx));	// 111299 xor     bx, bx ;~ 24ED:25FE
cs=0x24ed;eip=0x002600; 	T(MOV(cx, 0x0FF));	// 111300 mov     cx, 0FFh ;~ 24ED:2600
cs=0x24ed;eip=0x002603; 	J(CALL(sub_34000,0));	// 111301 call    sub_34000 ;~ 24ED:2603
cs=0x24ed;eip=0x002606; 	T(MOV(cx, 0x60));	// 111302 mov     cx, 60h ; '`' ;~ 24ED:2606
cs=0x24ed;eip=0x002609; 	T(MOV(dx, 320));	// 111303 mov     dx, (offset loc_36B9F+1 - offset unk_46A60) ;~ 24ED:2609
loc_35abc:
	// 7381 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00260c; 	T(MOV(ds, *(dw*)(((db*)&word_359a6))));	// 111307 mov     ds, cs:word_359A6 ;~ 24ED:260C
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002611; 	T(MOV(es, *(dw*)(((db*)&word_359a8))));	// 111309 mov     es, cs:word_359A8 ;~ 24ED:2611
cs=0x24ed;eip=0x002616; 	X(PUSH(cs));	// 111311 push    cs ;~ 24ED:2616
cs=0x24ed;eip=0x002617; 	J(CALL(sub_34f94,0));	// 111312 call    near ptr sub_34F94 ;~ 24ED:2617
cs=0x24ed;eip=0x00261a; 	X(PUSH(cs));	// 111313 push    cs ;~ 24ED:261A
cs=0x24ed;eip=0x00261b; 	X(PUSH(cs));	// 111314 push    cs ;~ 24ED:261B
cs=0x24ed;eip=0x00261c; 	X(POP(ds));	// 111315 pop     ds ;~ 24ED:261C
cs=0x24ed;eip=0x00261d; 	X(POP(es));	// 111317 pop     es ;~ 24ED:261D
loc_35ace:
	// 7382 
cs=0x24ed;eip=0x00261e; 	T(XOR(bx, bx));	// 111321 xor     bx, bx ;~ 24ED:261E
loc_35ad0:
	// 7383 
cs=0x24ed;eip=0x002620; 	X(PUSH(bx));	// 111324 push    bx ;~ 24ED:2620
cs=0x24ed;eip=0x002621; 	X(PUSH(cx));	// 111325 push    cx ;~ 24ED:2621
cs=0x24ed;eip=0x002622; 	X(PUSH(dx));	// 111326 push    dx ;~ 24ED:2622
cs=0x24ed;eip=0x002623; 	X(PUSH(*(dw*)(raddr(ss,bp+0))));	// 111327 push    word ptr [bp+0] ;~ 24ED:2623
cs=0x24ed;eip=0x002626; 	T(MOV(di, 0x5BF));	// 111328 mov     di, 5BFh ;~ 24ED:2626
cs=0x24ed;eip=0x002629; 	T(ADD(di, bx));	// 111329 add     di, bx ;~ 24ED:2629
cs=0x24ed;eip=0x00262b; 	T(si = di-0x300);	// 111330 lea     si, [di-300h] ;~ 24ED:262B
cs=0x24ed;eip=0x00262f; 	X(PUSH(bx));	// 111331 push    bx ;~ 24ED:262F
cs=0x24ed;eip=0x002630; 	X(PUSH(cx));	// 111332 push    cx ;~ 24ED:2630
cs=0x24ed;eip=0x002631; 	X(PUSH(di));	// 111333 push    di ;~ 24ED:2631
loc_35ae2:
	// 7384 
cs=0x24ed;eip=0x002632; 	T(LODSB);	// 111336 lodsb ;~ 24ED:2632
cs=0x24ed;eip=0x002633; 	T(SUB(al, *(raddr(ds,di))));	// 111337 sub     al, [di] ;~ 24ED:2633
cs=0x24ed;eip=0x002635; 	J(JZ(loc_35aff));	// 111338 jz      short loc_35AFF ;~ 24ED:2635
cs=0x24ed;eip=0x002637; 	T(MOV(bl, al));	// 111339 mov     bl, al ;~ 24ED:2637
cs=0x24ed;eip=0x002639; 	T(XOR(ah, ah));	// 111340 xor     ah, ah ;~ 24ED:2639
cs=0x24ed;eip=0x00263b; 	T(DIV1(dh));	// 111341 div     dh ;~ 24ED:263B
cs=0x24ed;eip=0x00263d; 	T(XCHG(al, ah));	// 111342 xchg    al, ah ;~ 24ED:263D
cs=0x24ed;eip=0x00263f; 	T(INC(ah));	// 111343 inc     ah ;~ 24ED:263F
cs=0x24ed;eip=0x002641; 	T(OR(al, al));	// 111344 or      al, al ;~ 24ED:2641
cs=0x24ed;eip=0x002643; 	J(JNZ(loc_35af9));	// 111345 jnz     short loc_35AF9 ;~ 24ED:2643
cs=0x24ed;eip=0x002645; 	T(DEC(ah));	// 111346 dec     ah ;~ 24ED:2645
cs=0x24ed;eip=0x002647; 	T(MOV(al, dh));	// 111347 mov     al, dh ;~ 24ED:2647
loc_35af9:
	// 7385 
cs=0x24ed;eip=0x002649; 	T(CMP(ah, dl));	// 111350 cmp     ah, dl ;~ 24ED:2649
cs=0x24ed;eip=0x00264b; 	J(JC(loc_35aff));	// 111351 jb      short loc_35AFF ;~ 24ED:264B
cs=0x24ed;eip=0x00264d; 	X(ADD(*(raddr(ds,di)), al));	// 111352 add     [di], al ;~ 24ED:264D
loc_35aff:
	// 7386 
cs=0x24ed;eip=0x00264f; 	T(INC(di));	// 111356 inc     di ;~ 24ED:264F
cs=0x24ed;eip=0x002650; 	J(LOOP(loc_35ae2));	// 111357 loop    loc_35AE2 ;~ 24ED:2650
cs=0x24ed;eip=0x002652; 	X(POP(dx));	// 111358 pop     dx ;~ 24ED:2652
cs=0x24ed;eip=0x002653; 	X(POP(cx));	// 111359 pop     cx ;~ 24ED:2653
cs=0x24ed;eip=0x002654; 	X(POP(bx));	// 111360 pop     bx ;~ 24ED:2654
cs=0x24ed;eip=0x002655; 	J(CALL(sub_33ed1,0));	// 111361 call    sub_33ED1 ;~ 24ED:2655
cs=0x24ed;eip=0x002658; 	J(CALL(sub_34000,0));	// 111362 call    sub_34000 ;~ 24ED:2658
cs=0x24ed;eip=0x00265b; 	X(POP(bx));	// 111363 pop     bx ;~ 24ED:265B
cs=0x24ed;eip=0x00265c; 	J(CALL(sub_35a8c,0));	// 111364 call    sub_35A8C ;~ 24ED:265C
cs=0x24ed;eip=0x00265f; 	X(POP(dx));	// 111365 pop     dx ;~ 24ED:265F
cs=0x24ed;eip=0x002660; 	X(POP(cx));	// 111366 pop     cx ;~ 24ED:2660
cs=0x24ed;eip=0x002661; 	X(POP(bx));	// 111367 pop     bx ;~ 24ED:2661
cs=0x24ed;eip=0x002662; 	T(ADD(bx, cx));	// 111368 add     bx, cx ;~ 24ED:2662
cs=0x24ed;eip=0x002664; 	T(CMP(bx, 0x2FD));	// 111369 cmp     bx, 2FDh ;~ 24ED:2664
cs=0x24ed;eip=0x002668; 	J(JC(loc_35ad0));	// 111370 jb      short loc_35AD0 ;~ 24ED:2668
cs=0x24ed;eip=0x00266a; 	T(DEC(dl));	// 111371 dec     dl ;~ 24ED:266A
cs=0x24ed;eip=0x00266c; 	J(JNZ(loc_35ace));	// 111372 jnz     short loc_35ACE ;~ 24ED:266C
cs=0x24ed;eip=0x00266e; 	J(RETF(0));	// 111373 retf ;~ 24ED:266E
loc_35b1f:
	// 7387 
cs=0x24ed;eip=0x00266f; 	J(CALL(sub_33f08,0));	// 111378 call    sub_33F08 ;~ 24ED:266F
cs=0x24ed;eip=0x002672; 	T(MOV(dx, 0x220));	// 111379 mov     dx, 220h ;~ 24ED:2672
cs=0x24ed;eip=0x002675; 	T(MOV(ax, 0x40));	// 111380 mov     ax, 40h ; '@' ;~ 24ED:2675
cs=0x24ed;eip=0x002678; 	J(CALL(sub_35b52,0));	// 111381 call    sub_35B52 ;~ 24ED:2678
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00267b; 	T(MOV(ds, *(dw*)(((db*)&word_359a6))));	// 111382 mov     ds, cs:word_359A6 ;~ 24ED:267B
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002680; 	T(MOV(es, *(dw*)(((db*)&word_359a8))));	// 111384 mov     es, cs:word_359A8 ;~ 24ED:2680
cs=0x24ed;eip=0x002685; 	X(PUSH(cs));	// 111386 push    cs ;~ 24ED:2685
cs=0x24ed;eip=0x002686; 	J(CALL(sub_34f94,0));	// 111387 call    near ptr sub_34F94 ;~ 24ED:2686
cs=0x24ed;eip=0x002689; 	X(PUSH(cs));	// 111388 push    cs ;~ 24ED:2689
cs=0x24ed;eip=0x00268a; 	X(PUSH(cs));	// 111389 push    cs ;~ 24ED:268A
cs=0x24ed;eip=0x00268b; 	X(POP(ds));	// 111390 pop     ds ;~ 24ED:268B
cs=0x24ed;eip=0x00268c; 	X(POP(es));	// 111392 pop     es ;~ 24ED:268C
cs=0x24ed;eip=0x00268d; 	T(MOV(di, 0x5BF));	// 111393 mov     di, 5BFh ;~ 24ED:268D
cs=0x24ed;eip=0x002690; 	T(MOV(dx, di));	// 111394 mov     dx, di ;~ 24ED:2690
cs=0x24ed;eip=0x002692; 	T(MOV(si, 0x2BF));	// 111395 mov     si, 2BFh ;~ 24ED:2692
cs=0x24ed;eip=0x002695; 	T(MOV(cx, 0x180));	// 111396 mov     cx, 180h ;~ 24ED:2695
	// 111397 rep movsw ;~ 24ED:2698
cs=0x24ed;eip=0x002698; 	X(	REP MOVSW);	// 111397 rep movsw ;~ 24ED:2698
cs=0x24ed;eip=0x00269a; 	T(XOR(bx, bx));	// 111398 xor     bx, bx ;~ 24ED:269A
cs=0x24ed;eip=0x00269c; 	T(MOV(cx, 0x60));	// 111399 mov     cx, 60h ; '`' ;~ 24ED:269C
cs=0x24ed;eip=0x00269f; 	J(return sub_33f81(m2c::kloc_33fb0, _state););	// 111400 jmp     loc_33FB0 ;~ 24ED:269F
sub_36b6c:
	// 114243 
cs=0x24ed;eip=0x0036bc; 	T(MOV(ax, *(dw*)(raddr(ds,di+4))));	// 114244 mov     ax, [di+4] ;~ 24ED:36BC
cs=0x24ed;eip=0x0036bf; 	T(MOV(dx, *(dw*)(raddr(ds,di))));	// 114245 mov     dx, [di] ;~ 24ED:36BF
cs=0x24ed;eip=0x0036c1; 	T(SUB(ax, dx));	// 114246 sub     ax, dx ;~ 24ED:36C1
cs=0x24ed;eip=0x0036c3; 	T(SUB(ax, 0x14));	// 114247 sub     ax, 14h ;~ 24ED:36C3
cs=0x24ed;eip=0x0036c6; 	T(SHR(ax, 1));	// 114248 shr     ax, 1 ;~ 24ED:36C6
cs=0x24ed;eip=0x0036c8; 	T(ADD(dx, ax));	// 114249 add     dx, ax ;~ 24ED:36C8
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0036ca; 	X(MOV(*(dw*)(((db*)&word_36ab2)), dx));	// 114250 mov     cs:word_36AB2, dx ;~ 24ED:36CA
cs=0x24ed;eip=0x0036cf; 	T(SHR(ax, 1));	// 114251 shr     ax, 1 ;~ 24ED:36CF
cs=0x24ed;eip=0x0036d1; 	T(SHR(ax, 1));	// 114252 shr     ax, 1 ;~ 24ED:36D1
cs=0x24ed;eip=0x0036d3; 	T(SHR(ax, 1));	// 114253 shr     ax, 1 ;~ 24ED:36D3
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0036d5; 	X(MOV(*(dw*)(((db*)&word_36aaa)), ax));	// 114254 mov     cs:word_36AAA, ax ;~ 24ED:36D5
cs=0x24ed;eip=0x0036d9; 	T(MOV(ax, *(dw*)(raddr(ds,di+6))));	// 114255 mov     ax, [di+6] ;~ 24ED:36D9
cs=0x24ed;eip=0x0036dc; 	T(MOV(bx, *(dw*)(raddr(ds,di+2))));	// 114256 mov     bx, [di+2] ;~ 24ED:36DC
cs=0x24ed;eip=0x0036df; 	T(SUB(ax, bx));	// 114257 sub     ax, bx ;~ 24ED:36DF
cs=0x24ed;eip=0x0036e1; 	T(SUB(ax, 0x14));	// 114258 sub     ax, 14h ;~ 24ED:36E1
cs=0x24ed;eip=0x0036e4; 	T(SHR(ax, 1));	// 114259 shr     ax, 1 ;~ 24ED:36E4
cs=0x24ed;eip=0x0036e6; 	T(ADD(bx, ax));	// 114260 add     bx, ax ;~ 24ED:36E6
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0036e8; 	X(MOV(*(dw*)(((db*)&word_36ab4)), bx));	// 114261 mov     cs:word_36AB4, bx ;~ 24ED:36E8
cs=0x24ed;eip=0x0036ed; 	T(SHR(ax, 1));	// 114262 shr     ax, 1 ;~ 24ED:36ED
loc_36b9f:
	// 7582 
cs=0x24ed;eip=0x0036ef; 	T(SHR(ax, 1));	// 114265 shr     ax, 1 ;~ 24ED:36EF
cs=0x24ed;eip=0x0036f1; 	T(SHR(ax, 1));	// 114266 shr     ax, 1 ;~ 24ED:36F1
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0036f3; 	X(MOV(*(dw*)(((db*)&word_36aac)), ax));	// 114267 mov     cs:word_36AAC, ax ;~ 24ED:36F3
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0036f7; 	T(SUB(dx, *(dw*)(((db*)&word_36aae))));	// 114268 sub     dx, cs:word_36AAE ;~ 24ED:36F7
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0036fc; 	T(SUB(bx, *(dw*)(((db*)&word_36ab0))));	// 114269 sub     bx, cs:word_36AB0 ;~ 24ED:36FC
cs=0x24ed;eip=0x003701; 	T(OR(dx, dx));	// 114270 or      dx, dx ;~ 24ED:3701
cs=0x24ed;eip=0x003703; 	X(PUSHF);	// 114271 pushf ;~ 24ED:3703
cs=0x24ed;eip=0x003704; 	J(JNS(loc_36bb8));	// 114272 jns     short loc_36BB8 ;~ 24ED:3704
cs=0x24ed;eip=0x003706; 	T(NEG(dx));	// 114273 neg     dx ;~ 24ED:3706
loc_36bb8:
	// 7583 
cs=0x24ed;eip=0x003708; 	T(SHR(dx, 1));	// 114276 shr     dx, 1 ;~ 24ED:3708
cs=0x24ed;eip=0x00370a; 	T(SHR(dx, 1));	// 114277 shr     dx, 1 ;~ 24ED:370A
cs=0x24ed;eip=0x00370c; 	T(SHR(dx, 1));	// 114278 shr     dx, 1 ;~ 24ED:370C
cs=0x24ed;eip=0x00370e; 	X(POPF);	// 114279 popf ;~ 24ED:370E
cs=0x24ed;eip=0x00370f; 	J(JNS(loc_36bc3));	// 114280 jns     short loc_36BC3 ;~ 24ED:370F
cs=0x24ed;eip=0x003711; 	T(NEG(dx));	// 114281 neg     dx ;~ 24ED:3711
loc_36bc3:
	// 7584 
cs=0x24ed;eip=0x003713; 	T(OR(bx, bx));	// 114284 or      bx, bx ;~ 24ED:3713
cs=0x24ed;eip=0x003715; 	X(PUSHF);	// 114285 pushf ;~ 24ED:3715
cs=0x24ed;eip=0x003716; 	J(JNS(loc_36bca));	// 114286 jns     short loc_36BCA ;~ 24ED:3716
cs=0x24ed;eip=0x003718; 	T(NEG(bx));	// 114287 neg     bx ;~ 24ED:3718
loc_36bca:
	// 7585 
cs=0x24ed;eip=0x00371a; 	T(SHR(bx, 1));	// 114290 shr     bx, 1 ;~ 24ED:371A
cs=0x24ed;eip=0x00371c; 	T(SHR(bx, 1));	// 114291 shr     bx, 1 ;~ 24ED:371C
cs=0x24ed;eip=0x00371e; 	T(SHR(bx, 1));	// 114292 shr     bx, 1 ;~ 24ED:371E
cs=0x24ed;eip=0x003720; 	X(POPF);	// 114293 popf ;~ 24ED:3720
cs=0x24ed;eip=0x003721; 	J(JNS(loc_36bd5));	// 114294 jns     short loc_36BD5 ;~ 24ED:3721
cs=0x24ed;eip=0x003723; 	T(NEG(bx));	// 114295 neg     bx ;~ 24ED:3723
loc_36bd5:
	// 7586 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003725; 	X(MOV(*(dw*)(((db*)&word_36aa6)), dx));	// 114298 mov     cs:word_36AA6, dx ;~ 24ED:3725
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00372a; 	X(MOV(*(dw*)(((db*)&word_36aa8)), bx));	// 114299 mov     cs:word_36AA8, bx ;~ 24ED:372A
cs=0x24ed;eip=0x00372f; 	J(RETN(0));	// 114300 retn ;~ 24ED:372F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_35a97: 	goto loc_35a97;
        case m2c::kloc_35abc: 	goto loc_35abc;
        case m2c::kloc_35ace: 	goto loc_35ace;
        case m2c::kloc_35ad0: 	goto loc_35ad0;
        case m2c::kloc_35ae2: 	goto loc_35ae2;
        case m2c::kloc_35af9: 	goto loc_35af9;
        case m2c::kloc_35aff: 	goto loc_35aff;
        case m2c::kloc_35b1f: 	goto loc_35b1f;
        case m2c::kloc_36b9f: 	goto loc_36b9f;
        case m2c::kloc_36bb8: 	goto loc_36bb8;
        case m2c::kloc_36bc3: 	goto loc_36bc3;
        case m2c::kloc_36bca: 	goto loc_36bca;
        case m2c::kloc_36bd5: 	goto loc_36bd5;
        case m2c::ksub_36b6c: 	goto sub_36b6c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35b52(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35b52:
    _begin:
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0026a2; 	X(MOV(*(dw*)(((db*)&word_35a8a)), ax));	// 111409 mov     cs:word_35A8A, ax ;~ 24ED:26A2
loc_35b56:
	// 7388 
cs=0x24ed;eip=0x0026a6; 	T(XOR(bx, bx));	// 111412 xor     bx, bx ;~ 24ED:26A6
loc_35b58:
	// 7389 
cs=0x24ed;eip=0x0026a8; 	X(PUSH(bx));	// 111415 push    bx ;~ 24ED:26A8
cs=0x24ed;eip=0x0026a9; 	X(PUSH(dx));	// 111416 push    dx ;~ 24ED:26A9
cs=0x24ed;eip=0x0026aa; 	X(PUSH(*(dw*)(raddr(ss,bp+0))));	// 111417 push    word ptr [bp+0] ;~ 24ED:26AA
cs=0x24ed;eip=0x0026ad; 	T(MOV(si, 0x5BF));	// 111418 mov     si, 5BFh ;~ 24ED:26AD
cs=0x24ed;eip=0x0026b0; 	T(ADD(si, bx));	// 111419 add     si, bx ;~ 24ED:26B0
cs=0x24ed;eip=0x0026b2; 	T(ADD(si, bx));	// 111420 add     si, bx ;~ 24ED:26B2
cs=0x24ed;eip=0x0026b4; 	T(ADD(si, bx));	// 111421 add     si, bx ;~ 24ED:26B4
cs=0x24ed;eip=0x0026b6; 	T(MOV(di, si));	// 111422 mov     di, si ;~ 24ED:26B6
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0026b8; 	T(MOV(ax, *(dw*)(((db*)&word_35a8a))));	// 111423 mov     ax, cs:word_35A8A ;~ 24ED:26B8
cs=0x24ed;eip=0x0026bc; 	X(PUSH(ax));	// 111424 push    ax ;~ 24ED:26BC
cs=0x24ed;eip=0x0026bd; 	T(MOV(cx, ax));	// 111425 mov     cx, ax ;~ 24ED:26BD
cs=0x24ed;eip=0x0026bf; 	T(ADD(cx, cx));	// 111426 add     cx, cx ;~ 24ED:26BF
cs=0x24ed;eip=0x0026c1; 	T(ADD(cx, ax));	// 111427 add     cx, ax ;~ 24ED:26C1
loc_35b73:
	// 7390 
cs=0x24ed;eip=0x0026c3; 	T(MOV(al, *(raddr(ds,si))));	// 111430 mov     al, [si] ;~ 24ED:26C3
cs=0x24ed;eip=0x0026c5; 	T(SUB(al, dh));	// 111431 sub     al, dh ;~ 24ED:26C5
cs=0x24ed;eip=0x0026c7; 	J(JNS(loc_35b7b));	// 111432 jns     short loc_35B7B ;~ 24ED:26C7
cs=0x24ed;eip=0x0026c9; 	T(XOR(al, al));	// 111433 xor     al, al ;~ 24ED:26C9
loc_35b7b:
	// 7391 
cs=0x24ed;eip=0x0026cb; 	X(MOV(*(raddr(ds,si)), al));	// 111436 mov     [si], al ;~ 24ED:26CB
cs=0x24ed;eip=0x0026cd; 	T(INC(si));	// 111437 inc     si ;~ 24ED:26CD
cs=0x24ed;eip=0x0026ce; 	J(LOOP(loc_35b73));	// 111438 loop    loc_35B73 ;~ 24ED:26CE
cs=0x24ed;eip=0x0026d0; 	X(POP(cx));	// 111439 pop     cx ;~ 24ED:26D0
cs=0x24ed;eip=0x0026d1; 	T(MOV(dx, di));	// 111440 mov     dx, di ;~ 24ED:26D1
cs=0x24ed;eip=0x0026d3; 	J(CALL(sub_34000,0));	// 111441 call    sub_34000 ;~ 24ED:26D3
cs=0x24ed;eip=0x0026d6; 	X(POP(bx));	// 111442 pop     bx ;~ 24ED:26D6
cs=0x24ed;eip=0x0026d7; 	J(CALL(sub_35a8c,0));	// 111443 call    sub_35A8C ;~ 24ED:26D7
cs=0x24ed;eip=0x0026da; 	X(POP(dx));	// 111444 pop     dx ;~ 24ED:26DA
cs=0x24ed;eip=0x0026db; 	X(POP(bx));	// 111445 pop     bx ;~ 24ED:26DB
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0026dc; 	T(MOV(ax, *(dw*)(((db*)&word_35a8a))));	// 111446 mov     ax, cs:word_35A8A ;~ 24ED:26DC
cs=0x24ed;eip=0x0026e0; 	T(ADD(bx, ax));	// 111447 add     bx, ax ;~ 24ED:26E0
cs=0x24ed;eip=0x0026e2; 	T(CMP(bx, 0x0FF));	// 111448 cmp     bx, 0FFh ;~ 24ED:26E2
cs=0x24ed;eip=0x0026e6; 	J(JC(loc_35b58));	// 111449 jb      short loc_35B58 ;~ 24ED:26E6
cs=0x24ed;eip=0x0026e8; 	T(DEC(dl));	// 111450 dec     dl ;~ 24ED:26E8
cs=0x24ed;eip=0x0026ea; 	J(JNZ(loc_35b56));	// 111451 jnz     short loc_35B56 ;~ 24ED:26EA
cs=0x24ed;eip=0x0026ec; 	J(RETN(0));	// 111452 retn ;~ 24ED:26EC

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_35b56: 	goto loc_35b56;
        case m2c::kloc_35b58: 	goto loc_35b58;
        case m2c::kloc_35b73: 	goto loc_35b73;
        case m2c::kloc_35b7b: 	goto loc_35b7b;
        case m2c::ksub_35b52: 	goto sub_35b52;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_26ed_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_26ed_proc:
    _begin:
loc_35b9d:
	// 7392 
cs=0x24ed;eip=0x0026ed; 	X(PUSH(cs));	// 111461 push    cs ;~ 24ED:26ED
cs=0x24ed;eip=0x0026ee; 	X(PUSH(cs));	// 111462 push    cs ;~ 24ED:26EE
cs=0x24ed;eip=0x0026ef; 	X(POP(ds));	// 111463 pop     ds ;~ 24ED:26EF
cs=0x24ed;eip=0x0026f0; 	X(POP(es));	// 111465 pop     es ;~ 24ED:26F0
cs=0x24ed;eip=0x0026f1; 	T(MOV(si, 0x5C2));	// 111467 mov     si, 5C2h ;~ 24ED:26F1
cs=0x24ed;eip=0x0026f4; 	T(MOV(di, 0x2C2));	// 111468 mov     di, 2C2h ;~ 24ED:26F4
cs=0x24ed;eip=0x0026f7; 	T(MOV(cx, 0x17D));	// 111469 mov     cx, 17Dh ;~ 24ED:26F7
loc_35baa:
	// 7393 
cs=0x24ed;eip=0x0026fa; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 111472 mov     ax, [di] ;~ 24ED:26FA
cs=0x24ed;eip=0x0026fc; 	X(XCHG(ax, *(dw*)(raddr(ds,si))));	// 111473 xchg    ax, [si] ;~ 24ED:26FC
cs=0x24ed;eip=0x0026fe; 	X(STOSW);	// 111474 stosw ;~ 24ED:26FE
cs=0x24ed;eip=0x0026ff; 	T(ADD(si, 2));	// 111475 add     si, 2 ;~ 24ED:26FF
cs=0x24ed;eip=0x002702; 	J(LOOP(loc_35baa));	// 111476 loop    loc_35BAA ;~ 24ED:2702
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002704; 	T(CMP(*(&byte_3366d), 0));	// 111477 cmp     cs:byte_3366D, 0 ;~ 24ED:2704
cs=0x24ed;eip=0x00270a; 	J(JNZ(loc_35bce));	// 111478 jnz     short loc_35BCE ;~ 24ED:270A
cs=0x24ed;eip=0x00270c; 	T(MOV(ax, 0x0FF));	// 111479 mov     ax, 0FFh ;~ 24ED:270C
cs=0x24ed;eip=0x00270f; 	T(MOV(dx, 0x140));	// 111480 mov     dx, 140h ;~ 24ED:270F
cs=0x24ed;eip=0x002712; 	J(CALL(sub_35b52,0));	// 111481 call    sub_35B52 ;~ 24ED:2712
cs=0x24ed;eip=0x002715; 	T(MOV(cx, 0x2FD));	// 111482 mov     cx, 2FDh ;~ 24ED:2715
cs=0x24ed;eip=0x002718; 	T(MOV(dx, 0x140));	// 111483 mov     dx, 140h ;~ 24ED:2718
cs=0x24ed;eip=0x00271b; 	J(return _group143(m2c::kloc_35abc, _state););	// 111484 jmp     loc_35ABC ;~ 24ED:271B
loc_35bce:
	// 7394 
cs=0x24ed;eip=0x00271e; 	T(MOV(ax, 0x55));	// 111488 mov     ax, 55h ; 'U' ;~ 24ED:271E
cs=0x24ed;eip=0x002721; 	T(MOV(dx, 0x316));	// 111489 mov     dx, 316h ;~ 24ED:2721
cs=0x24ed;eip=0x002724; 	J(CALL(sub_35b52,0));	// 111490 call    sub_35B52 ;~ 24ED:2724
cs=0x24ed;eip=0x002727; 	T(MOV(cx, 0x0FF));	// 111491 mov     cx, 0FFh ;~ 24ED:2727
cs=0x24ed;eip=0x00272a; 	T(MOV(dx, 0x316));	// 111492 mov     dx, 316h ;~ 24ED:272A
cs=0x24ed;eip=0x00272d; 	J(return _group143(m2c::kloc_35abc, _state););	// 111493 jmp     loc_35ABC ;~ 24ED:272D
loc_35be0:
	// 7395 
cs=0x24ed;eip=0x002730; 	X(PUSH(cs));	// 111498 push    cs ;~ 24ED:2730
cs=0x24ed;eip=0x002731; 	J(CALL(sub_33f81,m2c::kloc_33fb0));	// 111499 call    loc_33FB0 ;~ 24ED:2731
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002734; 	T(MOV(di, *(dw*)(((db*)&word_33653))));	// 111500 mov     di, cs:word_33653 ;~ 24ED:2734
cs=0x24ed;eip=0x002739; 	T(MOV(si, di));	// 111501 mov     si, di ;~ 24ED:2739
cs=0x24ed;eip=0x00273b; 	T(MOV(cx, 0x2F80));	// 111502 mov     cx, 2F80h ;~ 24ED:273B
	// 111503 rep movsd ;~ 24ED:273E
cs=0x24ed;eip=0x00273e; 	X(	REP MOVSD);	// 111503 rep movsd ;~ 24ED:273E
cs=0x24ed;eip=0x002741; 	J(RETF(0));	// 111504 retf ;~ 24ED:2741
loc_35bf6:
	// 7396 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002746; 	T(MOV(cx, *(dw*)(((db*)&word_35bf2))));	// 111516 mov     cx, cs:word_35BF2 ;~ 24ED:2746
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00274b; 	T(MOV(si, *(dw*)(((db*)&word_35bf4))));	// 111517 mov     si, cs:word_35BF4 ;~ 24ED:274B
cs=0x24ed;eip=0x002750; 	X(PUSH(cx));	// 111518 push    cx ;~ 24ED:2750
cs=0x24ed;eip=0x002751; 	X(PUSH(si));	// 111519 push    si ;~ 24ED:2751
cs=0x24ed;eip=0x002752; 	J(CALL(sub_35c70,0));	// 111520 call    sub_35C70 ;~ 24ED:2752
cs=0x24ed;eip=0x002755; 	X(POP(si));	// 111521 pop     si ;~ 24ED:2755
cs=0x24ed;eip=0x002756; 	X(POP(cx));	// 111522 pop     cx ;~ 24ED:2756
cs=0x24ed;eip=0x002757; 	T(ADD(cx, 8));	// 111523 add     cx, 8 ;~ 24ED:2757
cs=0x24ed;eip=0x00275a; 	T(ADD(si, 1));	// 111524 add     si, 1 ;~ 24ED:275A
cs=0x24ed;eip=0x00275d; 	T(CMP(cx, 0x212));	// 111525 cmp     cx, 212h ;~ 24ED:275D
cs=0x24ed;eip=0x002761; 	J(JC(loc_35c19));	// 111526 jb      short loc_35C19 ;~ 24ED:2761
cs=0x24ed;eip=0x002763; 	T(MOV(cx, 8));	// 111527 mov     cx, 8 ;~ 24ED:2763
cs=0x24ed;eip=0x002766; 	T(MOV(si, 1));	// 111528 mov     si, 1 ;~ 24ED:2766
loc_35c19:
	// 7397 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002769; 	X(MOV(*(dw*)(((db*)&word_35bf2)), cx));	// 111531 mov     cs:word_35BF2, cx ;~ 24ED:2769
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00276e; 	X(MOV(*(dw*)(((db*)&word_35bf4)), si));	// 111532 mov     cs:word_35BF4, si ;~ 24ED:276E
cs=0x24ed;eip=0x002773; 	J(RETF(0));	// 111533 retf ;~ 24ED:2773
loc_35c24:
	// 7398 
cs=0x24ed;eip=0x002774; 	J(CALL(sub_35a05,0));	// 111540 call    sub_35A05 ;~ 24ED:2774
cs=0x24ed;eip=0x002777; 	X(PUSH(ds));	// 111541 push    ds ;~ 24ED:2777
cs=0x24ed;eip=0x002778; 	T(MOV(ds, si));	// 111542 mov     ds, si ;~ 24ED:2778
cs=0x24ed;eip=0x00277a; 	T(MOV(cx, 8));	// 111544 mov     cx, 8 ;~ 24ED:277A
cs=0x24ed;eip=0x00277d; 	T(MOV(si, 1));	// 111545 mov     si, 1 ;~ 24ED:277D
cs=0x24ed;eip=0x002780; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 111546 mov     bx, [bp+0] ;~ 24ED:2780
cs=0x24ed;eip=0x002783; 	T(MOV(dx, bx));	// 111547 mov     dx, bx ;~ 24ED:2783
loc_35c35:
	// 7399 
cs=0x24ed;eip=0x002785; 	X(PUSH(dx));	// 111550 push    dx ;~ 24ED:2785
cs=0x24ed;eip=0x002786; 	T(CMP(cx, 0x1F4));	// 111551 cmp     cx, 1F4h ;~ 24ED:2786
cs=0x24ed;eip=0x00278a; 	J(JNC(loc_35c43));	// 111552 jnb     short loc_35C43 ;~ 24ED:278A
cs=0x24ed;eip=0x00278c; 	X(PUSH(cx));	// 111553 push    cx ;~ 24ED:278C
cs=0x24ed;eip=0x00278d; 	X(PUSH(si));	// 111554 push    si ;~ 24ED:278D
cs=0x24ed;eip=0x00278e; 	J(CALL(sub_35c70,0));	// 111555 call    sub_35C70 ;~ 24ED:278E
cs=0x24ed;eip=0x002791; 	X(POP(si));	// 111556 pop     si ;~ 24ED:2791
cs=0x24ed;eip=0x002792; 	X(POP(cx));	// 111557 pop     cx ;~ 24ED:2792
loc_35c43:
	// 7400 
cs=0x24ed;eip=0x002793; 	J(CALL(sub_359ac,0));	// 111560 call    sub_359AC ;~ 24ED:2793
cs=0x24ed;eip=0x002796; 	J(CALL(sub_359ac,0));	// 111561 call    sub_359AC ;~ 24ED:2796
cs=0x24ed;eip=0x002799; 	J(CALL(sub_359ac,0));	// 111562 call    sub_359AC ;~ 24ED:2799
cs=0x24ed;eip=0x00279c; 	T(ADD(cx, 8));	// 111563 add     cx, 8 ;~ 24ED:279C
cs=0x24ed;eip=0x00279f; 	T(ADD(si, 1));	// 111564 add     si, 1 ;~ 24ED:279F
cs=0x24ed;eip=0x0027a2; 	T(CMP(cx, 0x3C0));	// 111565 cmp     cx, 3C0h ;~ 24ED:27A2
cs=0x24ed;eip=0x0027a6; 	J(JC(loc_35c61));	// 111566 jb      short loc_35C61 ;~ 24ED:27A6
cs=0x24ed;eip=0x0027a8; 	J(CALL(sub_35c8c,0));	// 111567 call    sub_35C8C ;~ 24ED:27A8
cs=0x24ed;eip=0x0027ab; 	T(MOV(cx, 8));	// 111568 mov     cx, 8 ;~ 24ED:27AB
cs=0x24ed;eip=0x0027ae; 	T(MOV(si, 1));	// 111569 mov     si, 1 ;~ 24ED:27AE
loc_35c61:
	// 7401 
cs=0x24ed;eip=0x0027b1; 	X(POP(dx));	// 111572 pop     dx ;~ 24ED:27B1
cs=0x24ed;eip=0x0027b2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 111573 mov     ax, [bp+0] ;~ 24ED:27B2
cs=0x24ed;eip=0x0027b5; 	T(SUB(ax, dx));	// 111574 sub     ax, dx ;~ 24ED:27B5
cs=0x24ed;eip=0x0027b7; 	T(CMP(ax, 0x12C0));	// 111575 cmp     ax, 12C0h ;~ 24ED:27B7
cs=0x24ed;eip=0x0027ba; 	J(JC(loc_35c35));	// 111576 jb      short loc_35C35 ;~ 24ED:27BA
cs=0x24ed;eip=0x0027bc; 	X(POP(ds));	// 111577 pop     ds ;~ 24ED:27BC
cs=0x24ed;eip=0x0027bd; 	J(RETF(0));	// 111578 retf ;~ 24ED:27BD

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_35baa: 	goto loc_35baa;
        case m2c::kloc_35bce: 	goto loc_35bce;
        case m2c::kloc_35be0: 	goto loc_35be0;
        case m2c::kloc_35bf6: 	goto loc_35bf6;
        case m2c::kloc_35c19: 	goto loc_35c19;
        case m2c::kloc_35c24: 	goto loc_35c24;
        case m2c::kloc_35c35: 	goto loc_35c35;
        case m2c::kloc_35c43: 	goto loc_35c43;
        case m2c::kloc_35c61: 	goto loc_35c61;
        case m2c::kseg002_26ed_proc: 	goto seg002_26ed_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35c70(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35c70:
    _begin:
cs=0x24ed;eip=0x0027c0; 	J(CALL(sub_35c8c,0));	// 111589 call    sub_35C8C ;~ 24ED:27C0
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0027c3; 	X(MOV(*(dw*)(((db*)&off_35c6e)), 0x27FD));	// 111590 mov     cs:off_35C6E, 27FDh ;~ 24ED:27C3
cs=0x24ed;eip=0x0027ca; 	X(PUSH(cx));	// 111591 push    cx ;~ 24ED:27CA
cs=0x24ed;eip=0x0027cb; 	X(PUSH(si));	// 111592 push    si ;~ 24ED:27CB
cs=0x24ed;eip=0x0027cc; 	X(PUSH(bx));	// 111593 push    bx ;~ 24ED:27CC
cs=0x24ed;eip=0x0027cd; 	X(PUSH(bp));	// 111594 push    bp ;~ 24ED:27CD
cs=0x24ed;eip=0x0027ce; 	T(MOV(dx, 0x0B0));	// 111595 mov     dx, 0B0h ; '°' ;~ 24ED:27CE
cs=0x24ed;eip=0x0027d1; 	T(MOV(bx, 0x5B));	// 111596 mov     bx, 5Bh ; '[' ;~ 24ED:27D1
cs=0x24ed;eip=0x0027d4; 	J(CALL(sub_35d7e,0));	// 111597 call    sub_35D7E ;~ 24ED:27D4
cs=0x24ed;eip=0x0027d7; 	X(POP(bp));	// 111598 pop     bp ;~ 24ED:27D7
cs=0x24ed;eip=0x0027d8; 	X(POP(bx));	// 111599 pop     bx ;~ 24ED:27D8
cs=0x24ed;eip=0x0027d9; 	X(POP(si));	// 111600 pop     si ;~ 24ED:27D9
cs=0x24ed;eip=0x0027da; 	X(POP(cx));	// 111601 pop     cx ;~ 24ED:27DA
cs=0x24ed;eip=0x0027db; 	J(RETN(0));	// 111602 retn ;~ 24ED:27DB

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_35c70: 	goto sub_35c70;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35c8c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35c8c:
    _begin:
cs=0x24ed;eip=0x0027dc; 	X(PUSH(cx));	// 111611 push    cx ;~ 24ED:27DC
cs=0x24ed;eip=0x0027dd; 	X(PUSH(si));	// 111612 push    si ;~ 24ED:27DD
cs=0x24ed;eip=0x0027de; 	T(SUB(cx, 8));	// 111613 sub     cx, 8 ;~ 24ED:27DE
cs=0x24ed;eip=0x0027e1; 	J(JZ(loc_35caa));	// 111614 jz      short loc_35CAA ;~ 24ED:27E1
cs=0x24ed;eip=0x0027e3; 	X(PUSH(bx));	// 111615 push    bx ;~ 24ED:27E3
cs=0x24ed;eip=0x0027e4; 	X(PUSH(bp));	// 111616 push    bp ;~ 24ED:27E4
cs=0x24ed;eip=0x0027e5; 	T(SUB(si, 1));	// 111617 sub     si, 1 ;~ 24ED:27E5
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0027e8; 	X(MOV(*(dw*)(((db*)&off_35c6e)), 0x2869));	// 111618 mov     cs:off_35C6E, 2869h ;~ 24ED:27E8
cs=0x24ed;eip=0x0027ef; 	T(MOV(dx, 0x0B0));	// 111619 mov     dx, 0B0h ; '°' ;~ 24ED:27EF
cs=0x24ed;eip=0x0027f2; 	T(MOV(bx, 0x5B));	// 111620 mov     bx, 5Bh ; '[' ;~ 24ED:27F2
cs=0x24ed;eip=0x0027f5; 	J(CALL(sub_35d7e,0));	// 111621 call    sub_35D7E ;~ 24ED:27F5
cs=0x24ed;eip=0x0027f8; 	X(POP(bp));	// 111622 pop     bp ;~ 24ED:27F8
cs=0x24ed;eip=0x0027f9; 	X(POP(bx));	// 111623 pop     bx ;~ 24ED:27F9
loc_35caa:
	// 7402 
cs=0x24ed;eip=0x0027fa; 	X(POP(si));	// 111626 pop     si ;~ 24ED:27FA
cs=0x24ed;eip=0x0027fb; 	X(POP(cx));	// 111627 pop     cx ;~ 24ED:27FB
cs=0x24ed;eip=0x0027fc; 	J(RETN(0));	// 111628 retn ;~ 24ED:27FC

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_35caa: 	goto loc_35caa;
        case m2c::ksub_35c8c: 	goto sub_35c8c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group144(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group144:
    _begin:
sub_35cad:
	// 111635 
cs=0x24ed;eip=0x0027fd; 	X(PUSH(bx));	// 111637 push    bx ;~ 24ED:27FD
cs=0x24ed;eip=0x0027fe; 	T(MOV(ax, 0x5B));	// 111638 mov     ax, 5Bh ; '[' ;~ 24ED:27FE
cs=0x24ed;eip=0x002801; 	T(SUB(ax, bx));	// 111639 sub     ax, bx ;~ 24ED:2801
cs=0x24ed;eip=0x002803; 	J(JS(loc_35cbc));	// 111640 js      short loc_35CBC ;~ 24ED:2803
cs=0x24ed;eip=0x002805; 	T(SHR(ax, 1));	// 111641 shr     ax, 1 ;~ 24ED:2805
cs=0x24ed;eip=0x002807; 	T(MOV(bx, 0x5B));	// 111642 mov     bx, 5Bh ; '[' ;~ 24ED:2807
cs=0x24ed;eip=0x00280a; 	T(SUB(bx, ax));	// 111643 sub     bx, ax ;~ 24ED:280A
loc_35cbc:
	// 7403 
cs=0x24ed;eip=0x00280c; 	T(MOV(ax, bx));	// 111646 mov     ax, bx ;~ 24ED:280C
cs=0x24ed;eip=0x00280e; 	T(SUB(ax, 0x47));	// 111647 sub     ax, 47h ; 'G' ;~ 24ED:280E
cs=0x24ed;eip=0x002811; 	T(CMP(ax, 0x4E));	// 111648 cmp     ax, 4Eh ; 'N' ;~ 24ED:2811
cs=0x24ed;eip=0x002814; 	J(JNC(loc_35d17));	// 111649 jnb     short loc_35D17 ;~ 24ED:2814
cs=0x24ed;eip=0x002816; 	T(CMP(dx, 0x140));	// 111650 cmp     dx, 140h ;~ 24ED:2816
cs=0x24ed;eip=0x00281a; 	J(JNC(loc_35d17));	// 111651 jnb     short loc_35D17 ;~ 24ED:281A
cs=0x24ed;eip=0x00281c; 	X(PUSH(cx));	// 111652 push    cx ;~ 24ED:281C
cs=0x24ed;eip=0x00281d; 	X(PUSH(di));	// 111653 push    di ;~ 24ED:281D
cs=0x24ed;eip=0x00281e; 	J(CALL(sub_340a8,0));	// 111654 call    sub_340A8 ;~ 24ED:281E
cs=0x24ed;eip=0x002821; 	T(MOV(ax, *(dw*)(raddr(es,di))));	// 111655 mov     ax, es:[di] ;~ 24ED:2821
cs=0x24ed;eip=0x002824; 	T(AND(ax, *(dw*)(raddr(es,di+2))));	// 111656 and     ax, es:[di+2] ;~ 24ED:2824
cs=0x24ed;eip=0x002828; 	T(AND(ax, *(dw*)(raddr(es,di+0x140))));	// 111657 and     ax, es:[di+140h] ;~ 24ED:2828
cs=0x24ed;eip=0x00282d; 	T(AND(ax, *(dw*)(raddr(es,di+0x142))));	// 111658 and     ax, es:[di+142h] ;~ 24ED:282D
cs=0x24ed;eip=0x002832; 	T(AND(ax, *(dw*)(raddr(es,di+0x280))));	// 111659 and     ax, es:[di+280h] ;~ 24ED:2832
cs=0x24ed;eip=0x002837; 	T(AND(ax, *(dw*)(raddr(es,di+0x282))));	// 111660 and     ax, es:[di+282h] ;~ 24ED:2837
cs=0x24ed;eip=0x00283c; 	T(AND(ax, *(dw*)(raddr(es,di+0x3C0))));	// 111661 and     ax, es:[di+3C0h] ;~ 24ED:283C
cs=0x24ed;eip=0x002841; 	T(AND(ax, *(dw*)(raddr(es,di+0x3C2))));	// 111662 and     ax, es:[di+3C2h] ;~ 24ED:2841
cs=0x24ed;eip=0x002846; 	T(AND(al, ah));	// 111663 and     al, ah ;~ 24ED:2846
cs=0x24ed;eip=0x002848; 	J(JNS(loc_35d15));	// 111664 jns     short loc_35D15 ;~ 24ED:2848
cs=0x24ed;eip=0x00284a; 	T(MOV(al, *(raddr(ds,di))));	// 111665 mov     al, [di] ;~ 24ED:284A
cs=0x24ed;eip=0x00284c; 	T(CMP(al, 0x0F0));	// 111666 cmp     al, 0F0h ; 'ğ' ;~ 24ED:284C
cs=0x24ed;eip=0x00284e; 	J(JNC(loc_35d15));	// 111667 jnb     short loc_35D15 ;~ 24ED:284E
cs=0x24ed;eip=0x002850; 	T(MOV(ah, al));	// 111668 mov     ah, al ;~ 24ED:2850
cs=0x24ed;eip=0x002852; 	T(MOV(cx, ax));	// 111669 mov     cx, ax ;~ 24ED:2852
cs=0x24ed;eip=0x002854; 	T(SHL(eax, 0x10));	// 111670 shl     eax, 10h ;~ 24ED:2854
cs=0x24ed;eip=0x002858; 	T(MOV(ax, cx));	// 111671 mov     ax, cx ;~ 24ED:2858
cs=0x24ed;eip=0x00285a; 	T(MOV(cx, 4));	// 111672 mov     cx, 4 ;~ 24ED:285A
loc_35d0d:
	// 7404 
cs=0x24ed;eip=0x00285d; 	X(STOSD);	// 111675 stosd ;~ 24ED:285D
cs=0x24ed;eip=0x00285f; 	T(ADD(di, 0x13C));	// 111676 add     di, 13Ch ;~ 24ED:285F
cs=0x24ed;eip=0x002863; 	J(LOOP(loc_35d0d));	// 111677 loop    loc_35D0D ;~ 24ED:2863
loc_35d15:
	// 7405 
cs=0x24ed;eip=0x002865; 	X(POP(di));	// 111681 pop     di ;~ 24ED:2865
cs=0x24ed;eip=0x002866; 	X(POP(cx));	// 111682 pop     cx ;~ 24ED:2866
loc_35d17:
	// 7406 
cs=0x24ed;eip=0x002867; 	X(POP(bx));	// 111686 pop     bx ;~ 24ED:2867
cs=0x24ed;eip=0x002868; 	J(RETN(0));	// 111687 retn ;~ 24ED:2868
seg002_2869_proc:
	// 111691 
cs=0x24ed;eip=0x002869; 	X(PUSH(bx));	// 111691 push    bx ;~ 24ED:2869
cs=0x24ed;eip=0x00286a; 	T(MOV(ax, 0x5B));	// 111692 mov     ax, 5Bh ; '[' ;~ 24ED:286A
cs=0x24ed;eip=0x00286d; 	T(SUB(ax, bx));	// 111693 sub     ax, bx ;~ 24ED:286D
cs=0x24ed;eip=0x00286f; 	J(JS(loc_35d28));	// 111694 js      short loc_35D28 ;~ 24ED:286F
cs=0x24ed;eip=0x002871; 	T(SHR(ax, 1));	// 111695 shr     ax, 1 ;~ 24ED:2871
cs=0x24ed;eip=0x002873; 	T(MOV(bx, 0x5B));	// 111696 mov     bx, 5Bh ; '[' ;~ 24ED:2873
cs=0x24ed;eip=0x002876; 	T(SUB(bx, ax));	// 111697 sub     bx, ax ;~ 24ED:2876
loc_35d28:
	// 7407 
cs=0x24ed;eip=0x002878; 	T(MOV(ax, bx));	// 111700 mov     ax, bx ;~ 24ED:2878
cs=0x24ed;eip=0x00287a; 	T(SUB(ax, 0x47));	// 111701 sub     ax, 47h ; 'G' ;~ 24ED:287A
cs=0x24ed;eip=0x00287d; 	T(CMP(ax, 0x4E));	// 111702 cmp     ax, 4Eh ; 'N' ;~ 24ED:287D
cs=0x24ed;eip=0x002880; 	J(JNC(loc_35d17));	// 111703 jnb     short loc_35D17 ;~ 24ED:2880
cs=0x24ed;eip=0x002882; 	T(CMP(dx, 0x140));	// 111704 cmp     dx, 140h ;~ 24ED:2882
cs=0x24ed;eip=0x002886; 	J(JNC(loc_35d17));	// 111705 jnb     short loc_35D17 ;~ 24ED:2886
cs=0x24ed;eip=0x002888; 	X(PUSH(cx));	// 111706 push    cx ;~ 24ED:2888
cs=0x24ed;eip=0x002889; 	X(PUSH(si));	// 111707 push    si ;~ 24ED:2889
cs=0x24ed;eip=0x00288a; 	X(PUSH(di));	// 111708 push    di ;~ 24ED:288A
cs=0x24ed;eip=0x00288b; 	J(CALL(sub_340a8,0));	// 111709 call    sub_340A8 ;~ 24ED:288B
cs=0x24ed;eip=0x00288e; 	T(MOV(cx, 4));	// 111710 mov     cx, 4 ;~ 24ED:288E
loc_35d41:
	// 7408 
cs=0x24ed;eip=0x002891; 	T(MOV(si, di));	// 111713 mov     si, di ;~ 24ED:2891
cs=0x24ed;eip=0x002893; 	T(MOV(al, *(raddr(es,di))));	// 111714 mov     al, es:[di] ;~ 24ED:2893
cs=0x24ed;eip=0x002896; 	T(OR(al, al));	// 111715 or      al, al ;~ 24ED:2896
cs=0x24ed;eip=0x002898; 	J(JNS(loc_35d4d));	// 111716 jns     short loc_35D4D ;~ 24ED:2898
cs=0x24ed;eip=0x00289a; 	X(MOVSB);	// 111717 movsb ;~ 24ED:289A
cs=0x24ed;eip=0x00289b; 	T(DEC(si));	// 111718 dec     si ;~ 24ED:289B
cs=0x24ed;eip=0x00289c; 	T(DEC(di));	// 111719 dec     di ;~ 24ED:289C
loc_35d4d:
	// 7409 
cs=0x24ed;eip=0x00289d; 	T(INC(si));	// 111722 inc     si ;~ 24ED:289D
cs=0x24ed;eip=0x00289e; 	T(INC(di));	// 111723 inc     di ;~ 24ED:289E
cs=0x24ed;eip=0x00289f; 	T(MOV(al, *(raddr(es,di))));	// 111724 mov     al, es:[di] ;~ 24ED:289F
cs=0x24ed;eip=0x0028a2; 	T(OR(al, al));	// 111725 or      al, al ;~ 24ED:28A2
cs=0x24ed;eip=0x0028a4; 	J(JNS(loc_35d59));	// 111726 jns     short loc_35D59 ;~ 24ED:28A4
cs=0x24ed;eip=0x0028a6; 	X(MOVSB);	// 111727 movsb ;~ 24ED:28A6
cs=0x24ed;eip=0x0028a7; 	T(DEC(si));	// 111728 dec     si ;~ 24ED:28A7
cs=0x24ed;eip=0x0028a8; 	T(DEC(di));	// 111729 dec     di ;~ 24ED:28A8
loc_35d59:
	// 7410 
cs=0x24ed;eip=0x0028a9; 	T(INC(si));	// 111732 inc     si ;~ 24ED:28A9
cs=0x24ed;eip=0x0028aa; 	T(INC(di));	// 111733 inc     di ;~ 24ED:28AA
cs=0x24ed;eip=0x0028ab; 	T(MOV(al, *(raddr(es,di))));	// 111734 mov     al, es:[di] ;~ 24ED:28AB
cs=0x24ed;eip=0x0028ae; 	T(OR(al, al));	// 111735 or      al, al ;~ 24ED:28AE
cs=0x24ed;eip=0x0028b0; 	J(JNS(loc_35d65));	// 111736 jns     short loc_35D65 ;~ 24ED:28B0
cs=0x24ed;eip=0x0028b2; 	X(MOVSB);	// 111737 movsb ;~ 24ED:28B2
cs=0x24ed;eip=0x0028b3; 	T(DEC(si));	// 111738 dec     si ;~ 24ED:28B3
cs=0x24ed;eip=0x0028b4; 	T(DEC(di));	// 111739 dec     di ;~ 24ED:28B4
loc_35d65:
	// 7411 
cs=0x24ed;eip=0x0028b5; 	T(INC(si));	// 111742 inc     si ;~ 24ED:28B5
cs=0x24ed;eip=0x0028b6; 	T(INC(di));	// 111743 inc     di ;~ 24ED:28B6
cs=0x24ed;eip=0x0028b7; 	T(MOV(al, *(raddr(es,di))));	// 111744 mov     al, es:[di] ;~ 24ED:28B7
cs=0x24ed;eip=0x0028ba; 	T(OR(al, al));	// 111745 or      al, al ;~ 24ED:28BA
cs=0x24ed;eip=0x0028bc; 	J(JNS(loc_35d71));	// 111746 jns     short loc_35D71 ;~ 24ED:28BC
cs=0x24ed;eip=0x0028be; 	X(MOVSB);	// 111747 movsb ;~ 24ED:28BE
cs=0x24ed;eip=0x0028bf; 	T(DEC(si));	// 111748 dec     si ;~ 24ED:28BF
cs=0x24ed;eip=0x0028c0; 	T(DEC(di));	// 111749 dec     di ;~ 24ED:28C0
loc_35d71:
	// 7412 
cs=0x24ed;eip=0x0028c1; 	T(INC(si));	// 111752 inc     si ;~ 24ED:28C1
cs=0x24ed;eip=0x0028c2; 	T(INC(di));	// 111753 inc     di ;~ 24ED:28C2
cs=0x24ed;eip=0x0028c3; 	T(ADD(di, 0x13C));	// 111754 add     di, 13Ch ;~ 24ED:28C3
cs=0x24ed;eip=0x0028c7; 	J(LOOP(loc_35d41));	// 111755 loop    loc_35D41 ;~ 24ED:28C7
cs=0x24ed;eip=0x0028c9; 	X(POP(di));	// 111756 pop     di ;~ 24ED:28C9
cs=0x24ed;eip=0x0028ca; 	X(POP(si));	// 111757 pop     si ;~ 24ED:28CA
cs=0x24ed;eip=0x0028cb; 	X(POP(cx));	// 111758 pop     cx ;~ 24ED:28CB
cs=0x24ed;eip=0x0028cc; 	X(POP(bx));	// 111759 pop     bx ;~ 24ED:28CC
cs=0x24ed;eip=0x0028cd; 	J(RETN(0));	// 111760 retn ;~ 24ED:28CD

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_35cbc: 	goto loc_35cbc;
        case m2c::kloc_35d0d: 	goto loc_35d0d;
        case m2c::kloc_35d15: 	goto loc_35d15;
        case m2c::kloc_35d17: 	goto loc_35d17;
        case m2c::kloc_35d28: 	goto loc_35d28;
        case m2c::kloc_35d41: 	goto loc_35d41;
        case m2c::kloc_35d4d: 	goto loc_35d4d;
        case m2c::kloc_35d59: 	goto loc_35d59;
        case m2c::kloc_35d65: 	goto loc_35d65;
        case m2c::kloc_35d71: 	goto loc_35d71;
        case m2c::kseg002_2869_proc: 	goto seg002_2869_proc;
        case m2c::ksub_35cad: 	goto sub_35cad;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35d7e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35d7e:
    _begin:
cs=0x24ed;eip=0x0028ce; 	T(SUB(sp, 0x14));	// 111767 sub     sp, 14h ;~ 24ED:28CE
cs=0x24ed;eip=0x0028d1; 	T(MOV(bp, sp));	// 111768 mov     bp, sp ;~ 24ED:28D1
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0028d3; 	X(MOV(*(&byte_35e65), 0));	// 111769 mov     cs:byte_35E65, 0 ;~ 24ED:28D3
cs=0x24ed;eip=0x0028d9; 	X(PUSH(dx));	// 111770 push    dx ;~ 24ED:28D9
cs=0x24ed;eip=0x0028da; 	T(XOR(ax, ax));	// 111771 xor     ax, ax ;~ 24ED:28DA
cs=0x24ed;eip=0x0028dc; 	T(MOV(dx, ax));	// 111772 mov     dx, ax ;~ 24ED:28DC
cs=0x24ed;eip=0x0028de; 	T(MOV(ah, cl));	// 111773 mov     ah, cl ;~ 24ED:28DE
cs=0x24ed;eip=0x0028e0; 	T(MOV(dl, ch));	// 111774 mov     dl, ch ;~ 24ED:28E0
cs=0x24ed;eip=0x0028e2; 	X(PUSH(ax));	// 111775 push    ax ;~ 24ED:28E2
cs=0x24ed;eip=0x0028e3; 	X(PUSH(dx));	// 111776 push    dx ;~ 24ED:28E3
cs=0x24ed;eip=0x0028e4; 	T(ADD(ax, ax));	// 111777 add     ax, ax ;~ 24ED:28E4
cs=0x24ed;eip=0x0028e6; 	T(ADC(dx, dx));	// 111778 adc     dx, dx ;~ 24ED:28E6
cs=0x24ed;eip=0x0028e8; 	T(ADD(ah, 2));	// 111779 add     ah, 2 ;~ 24ED:28E8
cs=0x24ed;eip=0x0028eb; 	T(ADC(dx, 0));	// 111780 adc     dx, 0 ;~ 24ED:28EB
cs=0x24ed;eip=0x0028ee; 	X(MOV(*(dw*)(raddr(ss,bp+0)), ax));	// 111781 mov     [bp+0], ax ;~ 24ED:28EE
cs=0x24ed;eip=0x0028f1; 	X(MOV(*(dw*)(raddr(ss,bp+2)), dx));	// 111782 mov     [bp+2], dx ;~ 24ED:28F1
cs=0x24ed;eip=0x0028f4; 	T(SUB(ah, 4));	// 111783 sub     ah, 4 ;~ 24ED:28F4
cs=0x24ed;eip=0x0028f7; 	T(SBB(dx, 0));	// 111784 sbb     dx, 0 ;~ 24ED:28F7
cs=0x24ed;eip=0x0028fa; 	X(MOV(*(dw*)(raddr(ss,bp+4)), ax));	// 111785 mov     [bp+4], ax ;~ 24ED:28FA
cs=0x24ed;eip=0x0028fd; 	X(MOV(*(dw*)(raddr(ss,bp+6)), dx));	// 111786 mov     [bp+6], dx ;~ 24ED:28FD
cs=0x24ed;eip=0x002900; 	X(POP(dx));	// 111787 pop     dx ;~ 24ED:2900
cs=0x24ed;eip=0x002901; 	X(POP(ax));	// 111788 pop     ax ;~ 24ED:2901
cs=0x24ed;eip=0x002902; 	T(DIV2(si));	// 111789 div     si ;~ 24ED:2902
cs=0x24ed;eip=0x002904; 	T(MUL1_2(ax));	// 111790 mul     ax ;~ 24ED:2904
cs=0x24ed;eip=0x002906; 	T(MOV(al, ah));	// 111791 mov     al, ah ;~ 24ED:2906
cs=0x24ed;eip=0x002908; 	T(MOV(ah, dl));	// 111792 mov     ah, dl ;~ 24ED:2908
cs=0x24ed;eip=0x00290a; 	T(MOV(dl, dh));	// 111793 mov     dl, dh ;~ 24ED:290A
cs=0x24ed;eip=0x00290c; 	T(XOR(dh, dh));	// 111794 xor     dh, dh ;~ 24ED:290C
cs=0x24ed;eip=0x00290e; 	X(MOV(*(dw*)(raddr(ss,bp+8)), ax));	// 111795 mov     [bp+8], ax ;~ 24ED:290E
cs=0x24ed;eip=0x002911; 	X(MOV(*(dw*)(raddr(ss,bp+0x0A)), dx));	// 111796 mov     [bp+0Ah], dx ;~ 24ED:2911
cs=0x24ed;eip=0x002914; 	T(ADD(ax, ax));	// 111797 add     ax, ax ;~ 24ED:2914
cs=0x24ed;eip=0x002916; 	T(ADC(dx, dx));	// 111798 adc     dx, dx ;~ 24ED:2916
cs=0x24ed;eip=0x002918; 	X(MOV(*(dw*)(raddr(ss,bp+0x0C)), ax));	// 111799 mov     [bp+0Ch], ax ;~ 24ED:2918
cs=0x24ed;eip=0x00291b; 	X(MOV(*(dw*)(raddr(ss,bp+0x0E)), dx));	// 111800 mov     [bp+0Eh], dx ;~ 24ED:291B
cs=0x24ed;eip=0x00291e; 	X(POP(dx));	// 111801 pop     dx ;~ 24ED:291E
cs=0x24ed;eip=0x00291f; 	T(MOV(di, dx));	// 111802 mov     di, dx ;~ 24ED:291F
cs=0x24ed;eip=0x002921; 	T(ADD(di, cx));	// 111803 add     di, cx ;~ 24ED:2921
cs=0x24ed;eip=0x002923; 	T(SUB(dx, cx));	// 111804 sub     dx, cx ;~ 24ED:2923
cs=0x24ed;eip=0x002925; 	T(MOV(si, bx));	// 111805 mov     si, bx ;~ 24ED:2925
cs=0x24ed;eip=0x002927; 	J(JMP(loc_35df0));	// 111806 jmp     short loc_35DF0 ;~ 24ED:2927
loc_35dd9:
	// 7413 
cs=0x24ed;eip=0x002929; 	X(SUB(*(dw*)(raddr(ss,bp+4)), 0x200));	// 111810 sub     word ptr [bp+4], 200h ;~ 24ED:2929
cs=0x24ed;eip=0x00292e; 	X(SBB(*(dw*)(raddr(ss,bp+6)), 0));	// 111811 sbb     word ptr [bp+6], 0 ;~ 24ED:292E
loc_35de2:
	// 7414 
cs=0x24ed;eip=0x002932; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0C))));	// 111814 mov     ax, [bp+0Ch] ;~ 24ED:2932
cs=0x24ed;eip=0x002935; 	X(ADD(*(dw*)(raddr(ss,bp+8)), ax));	// 111815 add     [bp+8], ax ;~ 24ED:2935
cs=0x24ed;eip=0x002938; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0E))));	// 111816 mov     ax, [bp+0Eh] ;~ 24ED:2938
cs=0x24ed;eip=0x00293b; 	X(ADC(*(dw*)(raddr(ss,bp+0x0A)), ax));	// 111817 adc     [bp+0Ah], ax ;~ 24ED:293B
cs=0x24ed;eip=0x00293e; 	T(INC(bx));	// 111818 inc     bx ;~ 24ED:293E
cs=0x24ed;eip=0x00293f; 	T(DEC(si));	// 111819 dec     si ;~ 24ED:293F
loc_35df0:
	// 7415 
cs=0x24ed;eip=0x002940; 	J(CALL(sub_35e66,0));	// 111822 call    sub_35E66 ;~ 24ED:2940
cs=0x24ed;eip=0x002943; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 111823 mov     ax, [bp+8] ;~ 24ED:2943
cs=0x24ed;eip=0x002946; 	X(SUB(*(dw*)(raddr(ss,bp+0)), ax));	// 111824 sub     [bp+0], ax ;~ 24ED:2946
cs=0x24ed;eip=0x002949; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 111825 mov     ax, [bp+0Ah] ;~ 24ED:2949
cs=0x24ed;eip=0x00294c; 	X(SBB(*(dw*)(raddr(ss,bp+2)), ax));	// 111826 sbb     [bp+2], ax ;~ 24ED:294C
cs=0x24ed;eip=0x00294f; 	J(JNC(loc_35de2));	// 111827 jnb     short loc_35DE2 ;~ 24ED:294F
cs=0x24ed;eip=0x002951; 	T(INC(dx));	// 111828 inc     dx ;~ 24ED:2951
cs=0x24ed;eip=0x002952; 	T(DEC(di));	// 111829 dec     di ;~ 24ED:2952
cs=0x24ed;eip=0x002953; 	T(MOV(ax, *(dw*)(raddr(ss,bp+4))));	// 111830 mov     ax, [bp+4] ;~ 24ED:2953
cs=0x24ed;eip=0x002956; 	X(ADD(*(dw*)(raddr(ss,bp+0)), ax));	// 111831 add     [bp+0], ax ;~ 24ED:2956
cs=0x24ed;eip=0x002959; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 111832 mov     ax, [bp+6] ;~ 24ED:2959
cs=0x24ed;eip=0x00295c; 	X(ADC(*(dw*)(raddr(ss,bp+2)), ax));	// 111833 adc     [bp+2], ax ;~ 24ED:295C
cs=0x24ed;eip=0x00295f; 	J(JC(loc_35dd9));	// 111834 jb      short loc_35DD9 ;~ 24ED:295F
cs=0x24ed;eip=0x002961; 	X(SUB(*(dw*)(raddr(ss,bp+4)), 0x200));	// 111835 sub     word ptr [bp+4], 200h ;~ 24ED:2961
cs=0x24ed;eip=0x002966; 	X(SBB(*(dw*)(raddr(ss,bp+6)), 0));	// 111836 sbb     word ptr [bp+6], 0 ;~ 24ED:2966
cs=0x24ed;eip=0x00296a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0C))));	// 111837 mov     ax, [bp+0Ch] ;~ 24ED:296A
cs=0x24ed;eip=0x00296d; 	X(ADD(*(dw*)(raddr(ss,bp+8)), ax));	// 111838 add     [bp+8], ax ;~ 24ED:296D
cs=0x24ed;eip=0x002970; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0E))));	// 111839 mov     ax, [bp+0Eh] ;~ 24ED:2970
cs=0x24ed;eip=0x002973; 	X(ADC(*(dw*)(raddr(ss,bp+0x0A)), ax));	// 111840 adc     [bp+0Ah], ax ;~ 24ED:2973
loc_35e26:
	// 7416 
cs=0x24ed;eip=0x002976; 	J(CALL(sub_35e66,0));	// 111843 call    sub_35E66 ;~ 24ED:2976
cs=0x24ed;eip=0x002979; 	T(INC(dx));	// 111844 inc     dx ;~ 24ED:2979
cs=0x24ed;eip=0x00297a; 	T(DEC(di));	// 111845 dec     di ;~ 24ED:297A
cs=0x24ed;eip=0x00297b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+4))));	// 111846 mov     ax, [bp+4] ;~ 24ED:297B
cs=0x24ed;eip=0x00297e; 	X(ADD(*(dw*)(raddr(ss,bp+0)), ax));	// 111847 add     [bp+0], ax ;~ 24ED:297E
cs=0x24ed;eip=0x002981; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 111848 mov     ax, [bp+6] ;~ 24ED:2981
cs=0x24ed;eip=0x002984; 	X(ADC(*(dw*)(raddr(ss,bp+2)), ax));	// 111849 adc     [bp+2], ax ;~ 24ED:2984
cs=0x24ed;eip=0x002987; 	J(JNC(loc_35e53));	// 111850 jnb     short loc_35E53 ;~ 24ED:2987
cs=0x24ed;eip=0x002989; 	T(INC(bx));	// 111851 inc     bx ;~ 24ED:2989
cs=0x24ed;eip=0x00298a; 	T(DEC(si));	// 111852 dec     si ;~ 24ED:298A
cs=0x24ed;eip=0x00298b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 111853 mov     ax, [bp+8] ;~ 24ED:298B
cs=0x24ed;eip=0x00298e; 	X(SUB(*(dw*)(raddr(ss,bp+0)), ax));	// 111854 sub     [bp+0], ax ;~ 24ED:298E
cs=0x24ed;eip=0x002991; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 111855 mov     ax, [bp+0Ah] ;~ 24ED:2991
cs=0x24ed;eip=0x002994; 	X(SBB(*(dw*)(raddr(ss,bp+2)), ax));	// 111856 sbb     [bp+2], ax ;~ 24ED:2994
cs=0x24ed;eip=0x002997; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0C))));	// 111857 mov     ax, [bp+0Ch] ;~ 24ED:2997
cs=0x24ed;eip=0x00299a; 	X(ADD(*(dw*)(raddr(ss,bp+8)), ax));	// 111858 add     [bp+8], ax ;~ 24ED:299A
cs=0x24ed;eip=0x00299d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0E))));	// 111859 mov     ax, [bp+0Eh] ;~ 24ED:299D
cs=0x24ed;eip=0x0029a0; 	X(ADC(*(dw*)(raddr(ss,bp+0x0A)), ax));	// 111860 adc     [bp+0Ah], ax ;~ 24ED:29A0
loc_35e53:
	// 7417 
cs=0x24ed;eip=0x0029a3; 	X(SUB(*(dw*)(raddr(ss,bp+4)), 0x200));	// 111863 sub     word ptr [bp+4], 200h ;~ 24ED:29A3
cs=0x24ed;eip=0x0029a8; 	X(SBB(*(dw*)(raddr(ss,bp+6)), 0));	// 111864 sbb     word ptr [bp+6], 0 ;~ 24ED:29A8
cs=0x24ed;eip=0x0029ac; 	J(JNS(loc_35e26));	// 111865 jns     short loc_35E26 ;~ 24ED:29AC
cs=0x24ed;eip=0x0029ae; 	J(CALL(sub_35e66,0));	// 111866 call    sub_35E66 ;~ 24ED:29AE
cs=0x24ed;eip=0x0029b1; 	T(ADD(sp, 0x14));	// 111867 add     sp, 14h ;~ 24ED:29B1
cs=0x24ed;eip=0x0029b4; 	J(RETN(0));	// 111868 retn ;~ 24ED:29B4

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_35dd9: 	goto loc_35dd9;
        case m2c::kloc_35de2: 	goto loc_35de2;
        case m2c::kloc_35df0: 	goto loc_35df0;
        case m2c::kloc_35e26: 	goto loc_35e26;
        case m2c::kloc_35e53: 	goto loc_35e53;
        case m2c::ksub_35d7e: 	goto sub_35d7e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35e66(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35e66:
    _begin:
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0029b6; 	X(INC(*(&byte_35e65)));	// 111880 inc     cs:byte_35E65 ;~ 24ED:29B6
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0029bb; 	T(MOV(al, *(&byte_35e65)));	// 111881 mov     al, cs:byte_35E65 ;~ 24ED:29BB
cs=0x24ed;eip=0x0029bf; 	T(AND(al, 3));	// 111882 and     al, 3 ;~ 24ED:29BF
cs=0x24ed;eip=0x0029c1; 	J(JZ(loc_35e87));	// 111883 jz      short loc_35E87 ;~ 24ED:29C1
cs=0x24ed;eip=0x0029c3; 	T(CMP(al, 2));	// 111884 cmp     al, 2 ;~ 24ED:29C3
cs=0x24ed;eip=0x0029c5; 	J(JC(loc_35e8d));	// 111885 jb      short loc_35E8D ;~ 24ED:29C5
cs=0x24ed;eip=0x0029c7; 	J(JZ(loc_35e97));	// 111886 jz      short loc_35E97 ;~ 24ED:29C7
cs=0x24ed;eip=0x0029c9; 	T(XCHG(dx, di));	// 111887 xchg    dx, di ;~ 24ED:29C9
cs=0x24ed;eip=0x0029cb; 	T(XCHG(bx, si));	// 111888 xchg    bx, si ;~ 24ED:29CB
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0029cd; 	J(CALL(__dispatch_call,*(dw*)(((db*)&off_35c6e))));	// 111889 call    cs:off_35C6E ;~ 24ED:29CD
cs=0x24ed;eip=0x0029d2; 	T(XCHG(bx, si));	// 111890 xchg    bx, si ;~ 24ED:29D2
cs=0x24ed;eip=0x0029d4; 	T(XCHG(dx, di));	// 111891 xchg    dx, di ;~ 24ED:29D4
cs=0x24ed;eip=0x0029d6; 	J(RETN(0));	// 111892 retn ;~ 24ED:29D6
loc_35e87:
	// 7418 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0029d7; 	J(CALL(__dispatch_call,*(dw*)(((db*)&off_35c6e))));	// 111896 call    cs:off_35C6E ;~ 24ED:29D7
cs=0x24ed;eip=0x0029dc; 	J(RETN(0));	// 111897 retn ;~ 24ED:29DC
loc_35e8d:
	// 7419 
cs=0x24ed;eip=0x0029dd; 	T(XCHG(dx, di));	// 111901 xchg    dx, di ;~ 24ED:29DD
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0029df; 	J(CALL(__dispatch_call,*(dw*)(((db*)&off_35c6e))));	// 111902 call    cs:off_35C6E ;~ 24ED:29DF
cs=0x24ed;eip=0x0029e4; 	T(XCHG(dx, di));	// 111903 xchg    dx, di ;~ 24ED:29E4
cs=0x24ed;eip=0x0029e6; 	J(RETN(0));	// 111904 retn ;~ 24ED:29E6
loc_35e97:
	// 7420 
cs=0x24ed;eip=0x0029e7; 	T(XCHG(bx, si));	// 111908 xchg    bx, si ;~ 24ED:29E7
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0029e9; 	J(CALL(__dispatch_call,*(dw*)(((db*)&off_35c6e))));	// 111909 call    cs:off_35C6E ;~ 24ED:29E9
cs=0x24ed;eip=0x0029ee; 	T(XCHG(bx, si));	// 111910 xchg    bx, si ;~ 24ED:29EE
cs=0x24ed;eip=0x0029f0; 	J(RETN(0));	// 111911 retn ;~ 24ED:29F0

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_35e87: 	goto loc_35e87;
        case m2c::kloc_35e8d: 	goto loc_35e8d;
        case m2c::kloc_35e97: 	goto loc_35e97;
        case m2c::ksub_35e66: 	goto sub_35e66;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool nullsub_23(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    nullsub_23:
    _begin:
cs=0x24ed;eip=0x0029f1; 	J(RETF(0));	// 111920 retf ;~ 24ED:29F1

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::knullsub_23: 	goto nullsub_23;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_29f2_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_29f2_proc:
    _begin:
loc_35ea2:
	// 7421 
cs=0x24ed;eip=0x0029f2; 	T(MOV(dx, 0x50));	// 111928 mov     dx, 50h ; 'P' ;~ 24ED:29F2
cs=0x24ed;eip=0x0029f5; 	J(JMP(loc_35eaa));	// 111929 jmp     short loc_35EAA ;~ 24ED:29F5
loc_35ea7:
	// 7422 
cs=0x24ed;eip=0x0029f7; 	T(MOV(dx, 0x96));	// 111934 mov     dx, 96h ; '–' ;~ 24ED:29F7
loc_35eaa:
	// 7423 
cs=0x24ed;eip=0x0029fa; 	T(MOV(ax, 0x140));	// 111937 mov     ax, 140h ;~ 24ED:29FA
cs=0x24ed;eip=0x0029fd; 	X(PUSH(dx));	// 111938 push    dx ;~ 24ED:29FD
cs=0x24ed;eip=0x0029fe; 	T(MUL1_2(cx));	// 111939 mul     cx ;~ 24ED:29FE
cs=0x24ed;eip=0x002a00; 	X(POP(dx));	// 111940 pop     dx ;~ 24ED:2A00
cs=0x24ed;eip=0x002a01; 	T(MOV(cx, 1));	// 111941 mov     cx, 1 ;~ 24ED:2A01
loc_35eb4:
	// 7424 
cs=0x24ed;eip=0x002a04; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 111944 mov     bx, [bp+0] ;~ 24ED:2A04
cs=0x24ed;eip=0x002a07; 	X(PUSH(dx));	// 111945 push    dx ;~ 24ED:2A07
loc_35eb8:
	// 7425 
cs=0x24ed;eip=0x002a08; 	T(MOV(si, cx));	// 111948 mov     si, cx ;~ 24ED:2A08
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002a0a; 	T(ADD(si, *(dw*)(((db*)&word_33653))));	// 111949 add     si, cs:word_33653 ;~ 24ED:2A0A
cs=0x24ed;eip=0x002a0f; 	T(MOV(di, si));	// 111950 mov     di, si ;~ 24ED:2A0F
cs=0x24ed;eip=0x002a11; 	X(MOVSB);	// 111951 movsb ;~ 24ED:2A11
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002a12; 	T(SUB(si, *(dw*)(((db*)&word_33653))));	// 111952 sub     si, cs:word_33653 ;~ 24ED:2A12
cs=0x24ed;eip=0x002a17; 	T(ADD(si, 0x7FFE));	// 111953 add     si, 7FFEh ;~ 24ED:2A17
cs=0x24ed;eip=0x002a1b; 	T(CMP(si, ax));	// 111954 cmp     si, ax ;~ 24ED:2A1B
cs=0x24ed;eip=0x002a1d; 	J(JNC(loc_35edc));	// 111955 jnb     short loc_35EDC ;~ 24ED:2A1D
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002a1f; 	T(ADD(si, *(dw*)(((db*)&word_33653))));	// 111956 add     si, cs:word_33653 ;~ 24ED:2A1F
cs=0x24ed;eip=0x002a24; 	T(MOV(di, si));	// 111957 mov     di, si ;~ 24ED:2A24
cs=0x24ed;eip=0x002a26; 	X(MOVSB);	// 111958 movsb ;~ 24ED:2A26
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002a27; 	T(SUB(si, *(dw*)(((db*)&word_33653))));	// 111959 sub     si, cs:word_33653 ;~ 24ED:2A27
loc_35edc:
	// 7426 
cs=0x24ed;eip=0x002a2c; 	T(SHR(cx, 1));	// 111962 shr     cx, 1 ;~ 24ED:2A2C
cs=0x24ed;eip=0x002a2e; 	J(JNC(loc_35ee3));	// 111963 jnb     short loc_35EE3 ;~ 24ED:2A2E
cs=0x24ed;eip=0x002a30; 	T(XOR(ch, 0x44));	// 111964 xor     ch, 44h ;~ 24ED:2A30
loc_35ee3:
	// 7427 
cs=0x24ed;eip=0x002a33; 	T(CMP(cx, 1));	// 111967 cmp     cx, 1 ;~ 24ED:2A33
cs=0x24ed;eip=0x002a36; 	J(JZ(loc_35ef3));	// 111968 jz      short loc_35EF3 ;~ 24ED:2A36
cs=0x24ed;eip=0x002a38; 	T(DEC(dx));	// 111969 dec     dx ;~ 24ED:2A38
cs=0x24ed;eip=0x002a39; 	J(JNZ(loc_35eb8));	// 111970 jnz     short loc_35EB8 ;~ 24ED:2A39
cs=0x24ed;eip=0x002a3b; 	X(POP(dx));	// 111971 pop     dx ;~ 24ED:2A3B
loc_35eec:
	// 7428 
cs=0x24ed;eip=0x002a3c; 	T(CMP(bx, *(dw*)(raddr(ss,bp+0))));	// 111974 cmp     bx, [bp+0] ;~ 24ED:2A3C
cs=0x24ed;eip=0x002a3f; 	J(JZ(loc_35eec));	// 111975 jz      short loc_35EEC ;~ 24ED:2A3F
cs=0x24ed;eip=0x002a41; 	J(JMP(loc_35eb4));	// 111976 jmp     short loc_35EB4 ;~ 24ED:2A41
loc_35ef3:
	// 7429 
cs=0x24ed;eip=0x002a43; 	X(POP(dx));	// 111980 pop     dx ;~ 24ED:2A43
cs=0x24ed;eip=0x002a44; 	T(XOR(si, si));	// 111981 xor     si, si ;~ 24ED:2A44
cs=0x24ed;eip=0x002a46; 	T(MOV(di, si));	// 111982 mov     di, si ;~ 24ED:2A46
cs=0x24ed;eip=0x002a48; 	X(MOVSB);	// 111983 movsb ;~ 24ED:2A48
cs=0x24ed;eip=0x002a49; 	J(RETF(0));	// 111984 retf ;~ 24ED:2A49
loc_35efa:
	// 7430 
cs=0x24ed;eip=0x002a4a; 	T(MOV(bx, 0x4A));	// 111990 mov     bx, 4Ah ; 'J' ;~ 24ED:2A4A
cs=0x24ed;eip=0x002a4d; 	T(MOV(dx, 0x9C));	// 111991 mov     dx, 9Ch ; 'œ' ;~ 24ED:2A4D
cs=0x24ed;eip=0x002a50; 	J(CALL(sub_340a8,0));	// 111992 call    sub_340A8 ;~ 24ED:2A50
cs=0x24ed;eip=0x002a53; 	T(MOV(dx, 1));	// 111993 mov     dx, 1 ;~ 24ED:2A53
cs=0x24ed;eip=0x002a56; 	T(MOV(ax, 0x0FB08));	// 111994 mov     ax, 0FB08h ;~ 24ED:2A56
cs=0x24ed;eip=0x002a59; 	J(CALL(sub_35f42,0));	// 111995 call    sub_35F42 ;~ 24ED:2A59
cs=0x24ed;eip=0x002a5c; 	T(INC(dx));	// 111996 inc     dx ;~ 24ED:2A5C
cs=0x24ed;eip=0x002a5d; 	T(XOR(ax, ax));	// 111997 xor     ax, ax ;~ 24ED:2A5D
cs=0x24ed;eip=0x002a5f; 	J(CALL(sub_35f42,0));	// 111998 call    sub_35F42 ;~ 24ED:2A5F
cs=0x24ed;eip=0x002a62; 	T(MOV(dx, 2));	// 111999 mov     dx, 2 ;~ 24ED:2A62
loc_35f15:
	// 7431 
cs=0x24ed;eip=0x002a65; 	T(MOV(ax, 0x0FAF8));	// 112002 mov     ax, 0FAF8h ;~ 24ED:2A65
cs=0x24ed;eip=0x002a68; 	T(ADD(di, ax));	// 112003 add     di, ax ;~ 24ED:2A68
cs=0x24ed;eip=0x002a6a; 	J(CALL(sub_35f42,0));	// 112004 call    sub_35F42 ;~ 24ED:2A6A
cs=0x24ed;eip=0x002a6d; 	T(SUB(di, 0x4F8));	// 112005 sub     di, 4F8h ;~ 24ED:2A6D
cs=0x24ed;eip=0x002a71; 	T(MOV(ax, 0x0F600));	// 112006 mov     ax, 0F600h ;~ 24ED:2A71
cs=0x24ed;eip=0x002a74; 	J(CALL(sub_35f42,0));	// 112007 call    sub_35F42 ;~ 24ED:2A74
cs=0x24ed;eip=0x002a77; 	T(ADD(di, 0x508));	// 112008 add     di, 508h ;~ 24ED:2A77
cs=0x24ed;eip=0x002a7b; 	T(INC(dx));	// 112009 inc     dx ;~ 24ED:2A7B
cs=0x24ed;eip=0x002a7c; 	T(MOV(ax, 0x0FB08));	// 112010 mov     ax, 0FB08h ;~ 24ED:2A7C
cs=0x24ed;eip=0x002a7f; 	J(CALL(sub_35f42,0));	// 112011 call    sub_35F42 ;~ 24ED:2A7F
cs=0x24ed;eip=0x002a82; 	T(ADD(di, 0x4F8));	// 112012 add     di, 4F8h ;~ 24ED:2A82
cs=0x24ed;eip=0x002a86; 	T(XOR(ax, ax));	// 112013 xor     ax, ax ;~ 24ED:2A86
cs=0x24ed;eip=0x002a88; 	J(CALL(sub_35f42,0));	// 112014 call    sub_35F42 ;~ 24ED:2A88
cs=0x24ed;eip=0x002a8b; 	T(INC(dx));	// 112015 inc     dx ;~ 24ED:2A8B
cs=0x24ed;eip=0x002a8c; 	T(CMP(dx, 0x26));	// 112016 cmp     dx, 26h ; '&' ;~ 24ED:2A8C
cs=0x24ed;eip=0x002a8f; 	J(JC(loc_35f15));	// 112017 jb      short loc_35F15 ;~ 24ED:2A8F
cs=0x24ed;eip=0x002a91; 	J(RETF(0));	// 112018 retf ;~ 24ED:2A91

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_35ea7: 	goto loc_35ea7;
        case m2c::kloc_35eaa: 	goto loc_35eaa;
        case m2c::kloc_35eb4: 	goto loc_35eb4;
        case m2c::kloc_35eb8: 	goto loc_35eb8;
        case m2c::kloc_35edc: 	goto loc_35edc;
        case m2c::kloc_35ee3: 	goto loc_35ee3;
        case m2c::kloc_35eec: 	goto loc_35eec;
        case m2c::kloc_35ef3: 	goto loc_35ef3;
        case m2c::kloc_35efa: 	goto loc_35efa;
        case m2c::kloc_35f15: 	goto loc_35f15;
        case m2c::kseg002_29f2_proc: 	goto seg002_29f2_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35f42(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35f42:
    _begin:
cs=0x24ed;eip=0x002a92; 	X(PUSH(*(dw*)(raddr(ss,bp+0))));	// 112026 push    word ptr [bp+0] ;~ 24ED:2A92
cs=0x24ed;eip=0x002a95; 	T(MOV(bx, dx));	// 112027 mov     bx, dx ;~ 24ED:2A95
loc_35f47:
	// 7432 
cs=0x24ed;eip=0x002a97; 	T(MOV(cx, 4));	// 112030 mov     cx, 4 ;~ 24ED:2A97
loc_35f4a:
	// 7433 
cs=0x24ed;eip=0x002a9a; 	T(MOV(si, di));	// 112033 mov     si, di ;~ 24ED:2A9A
cs=0x24ed;eip=0x002a9c; 	X(MOVSD);	// 112034 movsd ;~ 24ED:2A9C
cs=0x24ed;eip=0x002a9e; 	X(MOVSD);	// 112035 movsd ;~ 24ED:2A9E
cs=0x24ed;eip=0x002aa0; 	T(ADD(di, 0x138));	// 112036 add     di, 138h ;~ 24ED:2AA0
cs=0x24ed;eip=0x002aa4; 	J(LOOP(loc_35f4a));	// 112037 loop    loc_35F4A ;~ 24ED:2AA4
cs=0x24ed;eip=0x002aa6; 	T(ADD(di, ax));	// 112038 add     di, ax ;~ 24ED:2AA6
cs=0x24ed;eip=0x002aa8; 	T(DEC(bx));	// 112039 dec     bx ;~ 24ED:2AA8
cs=0x24ed;eip=0x002aa9; 	J(JNZ(loc_35f47));	// 112040 jnz     short loc_35F47 ;~ 24ED:2AA9
cs=0x24ed;eip=0x002aab; 	X(POP(ax));	// 112041 pop     ax ;~ 24ED:2AAB
loc_35f5c:
	// 7434 
cs=0x24ed;eip=0x002aac; 	T(CMP(ax, *(dw*)(raddr(ss,bp+0))));	// 112044 cmp     ax, [bp+0] ;~ 24ED:2AAC
cs=0x24ed;eip=0x002aaf; 	J(JZ(loc_35f5c));	// 112045 jz      short loc_35F5C ;~ 24ED:2AAF
cs=0x24ed;eip=0x002ab1; 	J(RETN(0));	// 112046 retn ;~ 24ED:2AB1

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_35f47: 	goto loc_35f47;
        case m2c::kloc_35f4a: 	goto loc_35f4a;
        case m2c::kloc_35f5c: 	goto loc_35f5c;
        case m2c::ksub_35f42: 	goto sub_35f42;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool nullsub_24(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    nullsub_24:
    _begin:
cs=0x24ed;eip=0x002ab2; 	J(RETF(0));	// 112055 retf ;~ 24ED:2AB2

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::knullsub_24: 	goto nullsub_24;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_2ab3_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_2ab3_proc:
    _begin:
loc_35f63:
	// 7435 
cs=0x24ed;eip=0x002ab3; 	X(PUSH(cs));	// 112063 push    cs ;~ 24ED:2AB3
cs=0x24ed;eip=0x002ab4; 	J(CALL(sub_33f81,m2c::kloc_33fb0));	// 112064 call    loc_33FB0 ;~ 24ED:2AB4
cs=0x24ed;eip=0x002ab7; 	T(OR(dx, dx));	// 112065 or      dx, dx ;~ 24ED:2AB7
cs=0x24ed;eip=0x002ab9; 	J(JS(loc_35fac));	// 112066 js      short loc_35FAC ;~ 24ED:2AB9
cs=0x24ed;eip=0x002abb; 	X(PUSH(cx));	// 112067 push    cx ;~ 24ED:2ABB
cs=0x24ed;eip=0x002abc; 	X(PUSH(ds));	// 112068 push    ds ;~ 24ED:2ABC
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002abd; 	T(MOV(ds, *(dw*)(((db*)&word_359a8))));	// 112069 mov     ds, cs:word_359A8 ;~ 24ED:2ABD
cs=0x24ed;eip=0x002ac2; 	J(CALL(sub_360e4,0));	// 112071 call    sub_360E4 ;~ 24ED:2AC2
cs=0x24ed;eip=0x002ac5; 	X(POP(ds));	// 112072 pop     ds ;~ 24ED:2AC5
cs=0x24ed;eip=0x002ac6; 	X(POP(cx));	// 112074 pop     cx ;~ 24ED:2AC6
cs=0x24ed;eip=0x002ac7; 	T(MOV(bx, cx));	// 112075 mov     bx, cx ;~ 24ED:2AC7
loc_35f79:
	// 7436 
cs=0x24ed;eip=0x002ac9; 	T(MOV(dx, 0x140));	// 112078 mov     dx, 140h ;~ 24ED:2AC9
cs=0x24ed;eip=0x002acc; 	T(SUB(bx, 8));	// 112079 sub     bx, 8 ;~ 24ED:2ACC
cs=0x24ed;eip=0x002acf; 	X(PUSH(bx));	// 112080 push    bx ;~ 24ED:2ACF
cs=0x24ed;eip=0x002ad0; 	X(PUSH(*(dw*)(raddr(ss,bp+0))));	// 112081 push    word ptr [bp+0] ;~ 24ED:2AD0
cs=0x24ed;eip=0x002ad3; 	J(JNS(loc_35f89));	// 112082 jns     short loc_35F89 ;~ 24ED:2AD3
cs=0x24ed;eip=0x002ad5; 	T(ADD(dx, bx));	// 112084 add     dx, bx ;~ 24ED:2AD5
cs=0x24ed;eip=0x002ad7; 	T(XOR(bx, bx));	// 112085 xor     bx, bx ;~ 24ED:2AD7
loc_35f89:
	// 7437 
cs=0x24ed;eip=0x002ad9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 112088 mov     ax, [bp+0] ;~ 24ED:2AD9
loc_35f8c:
	// 7438 
cs=0x24ed;eip=0x002adc; 	T(CMP(ax, *(dw*)(raddr(ss,bp+0))));	// 112091 cmp     ax, [bp+0] ;~ 24ED:2ADC
cs=0x24ed;eip=0x002adf; 	J(JZ(loc_35f8c));	// 112092 jz      short loc_35F8C ;~ 24ED:2ADF
cs=0x24ed;eip=0x002ae1; 	J(CALL(sub_340a8,0));	// 112093 call    sub_340A8 ;~ 24ED:2AE1
cs=0x24ed;eip=0x002ae4; 	X(PUSH(bx));	// 112094 push    bx ;~ 24ED:2AE4
cs=0x24ed;eip=0x002ae5; 	X(PUSH(dx));	// 112095 push    dx ;~ 24ED:2AE5
cs=0x24ed;eip=0x002ae6; 	X(PUSH(di));	// 112096 push    di ;~ 24ED:2AE6
cs=0x24ed;eip=0x002ae7; 	J(CALL(sub_3603e,0));	// 112097 call    sub_3603E ;~ 24ED:2AE7
cs=0x24ed;eip=0x002aea; 	X(POP(di));	// 112099 pop     di ;~ 24ED:2AEA
cs=0x24ed;eip=0x002aeb; 	X(POP(dx));	// 112100 pop     dx ;~ 24ED:2AEB
cs=0x24ed;eip=0x002aec; 	X(POP(bx));	// 112101 pop     bx ;~ 24ED:2AEC
cs=0x24ed;eip=0x002aed; 	J(CALL(sub_35fe8,0));	// 112102 call    sub_35FE8 ;~ 24ED:2AED
cs=0x24ed;eip=0x002af0; 	X(POP(bx));	// 112104 pop     bx ;~ 24ED:2AF0
cs=0x24ed;eip=0x002af1; 	J(CALL(sub_359e1,0));	// 112105 call    sub_359E1 ;~ 24ED:2AF1
cs=0x24ed;eip=0x002af4; 	X(POP(bx));	// 112106 pop     bx ;~ 24ED:2AF4
cs=0x24ed;eip=0x002af5; 	T(CMP(bx, 0x0FEC8));	// 112107 cmp     bx, 0FEC8h ;~ 24ED:2AF5
cs=0x24ed;eip=0x002af9; 	J(JG(loc_35f79));	// 112108 jg      short loc_35F79 ;~ 24ED:2AF9
cs=0x24ed;eip=0x002afb; 	J(RETF(0));	// 112109 retf ;~ 24ED:2AFB
loc_35fac:
	// 7439 
cs=0x24ed;eip=0x002afc; 	X(PUSH(cx));	// 112113 push    cx ;~ 24ED:2AFC
cs=0x24ed;eip=0x002afd; 	X(PUSH(ds));	// 112114 push    ds ;~ 24ED:2AFD
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002afe; 	T(MOV(ds, *(dw*)(((db*)&word_359a6))));	// 112115 mov     ds, cs:word_359A6 ;~ 24ED:2AFE
cs=0x24ed;eip=0x002b03; 	J(CALL(sub_360e4,0));	// 112117 call    sub_360E4 ;~ 24ED:2B03
cs=0x24ed;eip=0x002b06; 	X(POP(ds));	// 112118 pop     ds ;~ 24ED:2B06
cs=0x24ed;eip=0x002b07; 	X(POP(cx));	// 112119 pop     cx ;~ 24ED:2B07
cs=0x24ed;eip=0x002b08; 	T(MOV(bx, 0x0FEC8));	// 112120 mov     bx, 0FEC8h ;~ 24ED:2B08
loc_35fbb:
	// 7440 
cs=0x24ed;eip=0x002b0b; 	T(MOV(dx, 0x140));	// 112123 mov     dx, 140h ;~ 24ED:2B0B
cs=0x24ed;eip=0x002b0e; 	X(PUSH(bx));	// 112124 push    bx ;~ 24ED:2B0E
cs=0x24ed;eip=0x002b0f; 	X(PUSH(*(dw*)(raddr(ss,bp+0))));	// 112125 push    word ptr [bp+0] ;~ 24ED:2B0F
cs=0x24ed;eip=0x002b12; 	T(OR(bx, bx));	// 112126 or      bx, bx ;~ 24ED:2B12
cs=0x24ed;eip=0x002b14; 	J(JNS(loc_35fca));	// 112127 jns     short loc_35FCA ;~ 24ED:2B14
cs=0x24ed;eip=0x002b16; 	T(ADD(dx, bx));	// 112128 add     dx, bx ;~ 24ED:2B16
cs=0x24ed;eip=0x002b18; 	T(XOR(bx, bx));	// 112129 xor     bx, bx ;~ 24ED:2B18
loc_35fca:
	// 7441 
cs=0x24ed;eip=0x002b1a; 	J(CALL(sub_340a8,0));	// 112132 call    sub_340A8 ;~ 24ED:2B1A
cs=0x24ed;eip=0x002b1d; 	X(PUSH(bx));	// 112133 push    bx ;~ 24ED:2B1D
cs=0x24ed;eip=0x002b1e; 	X(PUSH(dx));	// 112134 push    dx ;~ 24ED:2B1E
cs=0x24ed;eip=0x002b1f; 	X(PUSH(di));	// 112135 push    di ;~ 24ED:2B1F
cs=0x24ed;eip=0x002b20; 	J(CALL(sub_36094,0));	// 112136 call    sub_36094 ;~ 24ED:2B20
cs=0x24ed;eip=0x002b23; 	X(POP(di));	// 112137 pop     di ;~ 24ED:2B23
cs=0x24ed;eip=0x002b24; 	X(POP(dx));	// 112138 pop     dx ;~ 24ED:2B24
cs=0x24ed;eip=0x002b25; 	X(POP(bx));	// 112139 pop     bx ;~ 24ED:2B25
cs=0x24ed;eip=0x002b26; 	J(CALL(sub_35fe8,0));	// 112140 call    sub_35FE8 ;~ 24ED:2B26
cs=0x24ed;eip=0x002b29; 	X(POP(bx));	// 112141 pop     bx ;~ 24ED:2B29
cs=0x24ed;eip=0x002b2a; 	J(CALL(sub_359e1,0));	// 112142 call    sub_359E1 ;~ 24ED:2B2A
cs=0x24ed;eip=0x002b2d; 	X(POP(bx));	// 112143 pop     bx ;~ 24ED:2B2D
cs=0x24ed;eip=0x002b2e; 	T(ADD(bx, 8));	// 112144 add     bx, 8 ;~ 24ED:2B2E
cs=0x24ed;eip=0x002b31; 	T(CMP(bx, 0x98));	// 112145 cmp     bx, 98h ;~ 24ED:2B31
cs=0x24ed;eip=0x002b35; 	J(JL(loc_35fbb));	// 112146 jl      short loc_35FBB ;~ 24ED:2B35
cs=0x24ed;eip=0x002b37; 	J(RETF(0));	// 112147 retf ;~ 24ED:2B37

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_35f63: 	goto loc_35f63;
        case m2c::kloc_35f79: 	goto loc_35f79;
        case m2c::kloc_35f89: 	goto loc_35f89;
        case m2c::kloc_35f8c: 	goto loc_35f8c;
        case m2c::kloc_35fac: 	goto loc_35fac;
        case m2c::kloc_35fbb: 	goto loc_35fbb;
        case m2c::kloc_35fca: 	goto loc_35fca;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35fe8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35fe8:
    _begin:
cs=0x24ed;eip=0x002b38; 	X(PUSH(dx));	// 112156 push    dx ;~ 24ED:2B38
cs=0x24ed;eip=0x002b39; 	T(MOV(ax, 0x0C8));	// 112157 mov     ax, 0C8h ; 'È' ;~ 24ED:2B39
cs=0x24ed;eip=0x002b3c; 	T(NEG(dx));	// 112158 neg     dx ;~ 24ED:2B3C
cs=0x24ed;eip=0x002b3e; 	T(ADD(dx, 0x140));	// 112159 add     dx, 140h ;~ 24ED:2B3E
cs=0x24ed;eip=0x002b42; 	T(INC(dx));	// 112160 inc     dx ;~ 24ED:2B42
cs=0x24ed;eip=0x002b43; 	T(MUL1_2(dx));	// 112161 mul     dx ;~ 24ED:2B43
cs=0x24ed;eip=0x002b45; 	T(MOV(si, ax));	// 112162 mov     si, ax ;~ 24ED:2B45
cs=0x24ed;eip=0x002b47; 	T(MOV(ax, 0x98));	// 112163 mov     ax, 98h ;~ 24ED:2B47
cs=0x24ed;eip=0x002b4a; 	T(SUB(si, ax));	// 112164 sub     si, ax ;~ 24ED:2B4A
cs=0x24ed;eip=0x002b4c; 	X(POP(dx));	// 112165 pop     dx ;~ 24ED:2B4C
cs=0x24ed;eip=0x002b4d; 	T(CMP(dx, ax));	// 112166 cmp     dx, ax ;~ 24ED:2B4D
cs=0x24ed;eip=0x002b4f; 	J(JNC(loc_36005));	// 112167 jnb     short loc_36005 ;~ 24ED:2B4F
cs=0x24ed;eip=0x002b51; 	T(ADD(si, ax));	// 112168 add     si, ax ;~ 24ED:2B51
cs=0x24ed;eip=0x002b53; 	T(SUB(si, dx));	// 112169 sub     si, dx ;~ 24ED:2B53
loc_36005:
	// 7442 
cs=0x24ed;eip=0x002b55; 	T(SUB(ax, bx));	// 112172 sub     ax, bx ;~ 24ED:2B55
cs=0x24ed;eip=0x002b57; 	T(CMP(ax, dx));	// 112173 cmp     ax, dx ;~ 24ED:2B57
cs=0x24ed;eip=0x002b59; 	J(JC(loc_3600d));	// 112174 jb      short loc_3600D ;~ 24ED:2B59
cs=0x24ed;eip=0x002b5b; 	T(MOV(ax, dx));	// 112175 mov     ax, dx ;~ 24ED:2B5B
loc_3600d:
	// 7443 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002b5d; 	T(MOV(ds, *(dw*)(((db*)&word_359a4))));	// 112178 mov     ds, cs:word_359A4 ;~ 24ED:2B5D
cs=0x24ed;eip=0x002b62; 	T(SUB(di, ax));	// 112180 sub     di, ax ;~ 24ED:2B62
loc_36014:
	// 7444 
cs=0x24ed;eip=0x002b64; 	T(MOV(cx, ax));	// 112183 mov     cx, ax ;~ 24ED:2B64
cs=0x24ed;eip=0x002b66; 	T(SHR(cx, 1));	// 112184 shr     cx, 1 ;~ 24ED:2B66
	// 112185 rep movsw ;~ 24ED:2B68
cs=0x24ed;eip=0x002b68; 	X(	REP MOVSW);	// 112185 rep movsw ;~ 24ED:2B68
cs=0x24ed;eip=0x002b6a; 	T(SUB(si, ax));	// 112186 sub     si, ax ;~ 24ED:2B6A
cs=0x24ed;eip=0x002b6c; 	T(SUB(di, ax));	// 112187 sub     di, ax ;~ 24ED:2B6C
cs=0x24ed;eip=0x002b6e; 	T(ADD(si, 0x0C8));	// 112188 add     si, 0C8h ; 'È' ;~ 24ED:2B6E
cs=0x24ed;eip=0x002b72; 	T(ADD(di, 0x140));	// 112189 add     di, 140h ;~ 24ED:2B72
cs=0x24ed;eip=0x002b76; 	T(DEC(ax));	// 112190 dec     ax ;~ 24ED:2B76
cs=0x24ed;eip=0x002b77; 	T(MOV(cx, ax));	// 112191 mov     cx, ax ;~ 24ED:2B77
cs=0x24ed;eip=0x002b79; 	T(SHR(cx, 1));	// 112192 shr     cx, 1 ;~ 24ED:2B79
	// 112193 rep movsw ;~ 24ED:2B7B
cs=0x24ed;eip=0x002b7b; 	X(	REP MOVSW);	// 112193 rep movsw ;~ 24ED:2B7B
cs=0x24ed;eip=0x002b7d; 	X(MOVSB);	// 112194 movsb ;~ 24ED:2B7D
cs=0x24ed;eip=0x002b7e; 	T(SUB(si, ax));	// 112195 sub     si, ax ;~ 24ED:2B7E
cs=0x24ed;eip=0x002b80; 	T(SUB(di, ax));	// 112196 sub     di, ax ;~ 24ED:2B80
cs=0x24ed;eip=0x002b82; 	T(ADD(si, 0x0C8));	// 112197 add     si, 0C8h ; 'È' ;~ 24ED:2B82
cs=0x24ed;eip=0x002b86; 	T(ADD(di, 0x140));	// 112198 add     di, 140h ;~ 24ED:2B86
cs=0x24ed;eip=0x002b8a; 	T(DEC(ax));	// 112199 dec     ax ;~ 24ED:2B8A
cs=0x24ed;eip=0x002b8b; 	J(JG(loc_36014));	// 112200 jg      short loc_36014 ;~ 24ED:2B8B
cs=0x24ed;eip=0x002b8d; 	J(RETN(0));	// 112201 retn ;~ 24ED:2B8D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_36005: 	goto loc_36005;
        case m2c::kloc_3600d: 	goto loc_3600d;
        case m2c::kloc_36014: 	goto loc_36014;
        case m2c::ksub_35fe8: 	goto sub_35fe8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3603e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3603e:
    _begin:
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002b8e; 	T(MOV(ds, *(dw*)(((db*)&word_359a6))));	// 112209 mov     ds, cs:word_359A6 ;~ 24ED:2B8E
cs=0x24ed;eip=0x002b93; 	T(MOV(ax, 0x98));	// 112211 mov     ax, 98h ;~ 24ED:2B93
cs=0x24ed;eip=0x002b96; 	T(SUB(ax, bx));	// 112212 sub     ax, bx ;~ 24ED:2B96
cs=0x24ed;eip=0x002b98; 	T(MOV(bx, dx));	// 112213 mov     bx, dx ;~ 24ED:2B98
cs=0x24ed;eip=0x002b9a; 	T(SUB(bx, ax));	// 112214 sub     bx, ax ;~ 24ED:2B9A
cs=0x24ed;eip=0x002b9c; 	J(JNS(loc_36050));	// 112215 jns     short loc_36050 ;~ 24ED:2B9C
cs=0x24ed;eip=0x002b9e; 	T(ADD(ax, bx));	// 112216 add     ax, bx ;~ 24ED:2B9E
loc_36050:
	// 7445 
cs=0x24ed;eip=0x002ba0; 	T(CMP(dx, 0x138));	// 112219 cmp     dx, 138h ;~ 24ED:2BA0
cs=0x24ed;eip=0x002ba4; 	J(JBE(loc_3606f));	// 112220 jbe     short loc_3606F ;~ 24ED:2BA4
cs=0x24ed;eip=0x002ba6; 	T(XOR(dx, dx));	// 112221 xor     dx, dx ;~ 24ED:2BA6
loc_36058:
	// 7446 
cs=0x24ed;eip=0x002ba8; 	T(MOV(cx, dx));	// 112224 mov     cx, dx ;~ 24ED:2BA8
cs=0x24ed;eip=0x002baa; 	T(MOV(si, di));	// 112225 mov     si, di ;~ 24ED:2BAA
	// 112226 rep movsb ;~ 24ED:2BAC
cs=0x24ed;eip=0x002bac; 	X(	REP MOVSB);	// 112226 rep movsb ;~ 24ED:2BAC
cs=0x24ed;eip=0x002bae; 	T(SUB(di, dx));	// 112227 sub     di, dx ;~ 24ED:2BAE
cs=0x24ed;eip=0x002bb0; 	T(ADD(di, 0x13F));	// 112228 add     di, 13Fh ;~ 24ED:2BB0
cs=0x24ed;eip=0x002bb4; 	T(INC(dx));	// 112229 inc     dx ;~ 24ED:2BB4
cs=0x24ed;eip=0x002bb5; 	T(CMP(dx, 8));	// 112230 cmp     dx, 8 ;~ 24ED:2BB5
cs=0x24ed;eip=0x002bb8; 	J(JC(loc_36058));	// 112231 jb      short loc_36058 ;~ 24ED:2BB8
cs=0x24ed;eip=0x002bba; 	T(SUB(ax, 8));	// 112232 sub     ax, 8 ;~ 24ED:2BBA
cs=0x24ed;eip=0x002bbd; 	J(JBE(locret_36093));	// 112233 jbe     short locret_36093 ;~ 24ED:2BBD
loc_3606f:
	// 7447 
cs=0x24ed;eip=0x002bbf; 	T(MOV(si, di));	// 112237 mov     si, di ;~ 24ED:2BBF
cs=0x24ed;eip=0x002bc1; 	T(MOV(cx, 4));	// 112238 mov     cx, 4 ;~ 24ED:2BC1
	// 112239 rep movsw ;~ 24ED:2BC4
cs=0x24ed;eip=0x002bc4; 	X(	REP MOVSW);	// 112239 rep movsw ;~ 24ED:2BC4
cs=0x24ed;eip=0x002bc6; 	T(ADD(di, 0x137));	// 112240 add     di, 137h ;~ 24ED:2BC6
cs=0x24ed;eip=0x002bca; 	T(DEC(ax));	// 112241 dec     ax ;~ 24ED:2BCA
cs=0x24ed;eip=0x002bcb; 	J(JNZ(loc_3606f));	// 112242 jnz     short loc_3606F ;~ 24ED:2BCB
cs=0x24ed;eip=0x002bcd; 	T(OR(bx, bx));	// 112243 or      bx, bx ;~ 24ED:2BCD
cs=0x24ed;eip=0x002bcf; 	J(JGE(locret_36093));	// 112244 jge     short locret_36093 ;~ 24ED:2BCF
cs=0x24ed;eip=0x002bd1; 	T(MOV(dx, 8));	// 112245 mov     dx, 8 ;~ 24ED:2BD1
loc_36084:
	// 7448 
cs=0x24ed;eip=0x002bd4; 	T(MOV(cx, dx));	// 112248 mov     cx, dx ;~ 24ED:2BD4
cs=0x24ed;eip=0x002bd6; 	T(MOV(si, di));	// 112249 mov     si, di ;~ 24ED:2BD6
	// 112250 rep movsb ;~ 24ED:2BD8
cs=0x24ed;eip=0x002bd8; 	X(	REP MOVSB);	// 112250 rep movsb ;~ 24ED:2BD8
cs=0x24ed;eip=0x002bda; 	T(SUB(di, dx));	// 112251 sub     di, dx ;~ 24ED:2BDA
cs=0x24ed;eip=0x002bdc; 	T(ADD(di, 0x140));	// 112252 add     di, 140h ;~ 24ED:2BDC
cs=0x24ed;eip=0x002be0; 	T(DEC(dx));	// 112253 dec     dx ;~ 24ED:2BE0
cs=0x24ed;eip=0x002be1; 	J(JNZ(loc_36084));	// 112254 jnz     short loc_36084 ;~ 24ED:2BE1
locret_36093:
	// 7449 
cs=0x24ed;eip=0x002be3; 	J(RETN(0));	// 112258 retn ;~ 24ED:2BE3

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_36050: 	goto loc_36050;
        case m2c::kloc_36058: 	goto loc_36058;
        case m2c::kloc_3606f: 	goto loc_3606f;
        case m2c::kloc_36084: 	goto loc_36084;
        case m2c::klocret_36093: 	goto locret_36093;
        case m2c::ksub_3603e: 	goto sub_3603e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36094(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36094:
    _begin:
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002be4; 	T(MOV(ds, *(dw*)(((db*)&word_359a6))));	// 112266 mov     ds, cs:word_359A6 ;~ 24ED:2BE4
cs=0x24ed;eip=0x002be9; 	T(MOV(ax, 0x98));	// 112268 mov     ax, 98h ;~ 24ED:2BE9
cs=0x24ed;eip=0x002bec; 	T(ADD(ax, 8));	// 112269 add     ax, 8 ;~ 24ED:2BEC
cs=0x24ed;eip=0x002bef; 	T(CMP(di, ax));	// 112270 cmp     di, ax ;~ 24ED:2BEF
cs=0x24ed;eip=0x002bf1; 	J(JC(locret_360e3));	// 112271 jb      short locret_360E3 ;~ 24ED:2BF1
cs=0x24ed;eip=0x002bf3; 	T(OR(bx, bx));	// 112272 or      bx, bx ;~ 24ED:2BF3
cs=0x24ed;eip=0x002bf5; 	T(SUB(ax, 8));	// 112273 sub     ax, 8 ;~ 24ED:2BF5
cs=0x24ed;eip=0x002bf8; 	T(OR(bx, bx));	// 112274 or      bx, bx ;~ 24ED:2BF8
cs=0x24ed;eip=0x002bfa; 	J(JLE(loc_360d0));	// 112275 jle     short loc_360D0 ;~ 24ED:2BFA
cs=0x24ed;eip=0x002bfc; 	T(ADD(ax, 8));	// 112276 add     ax, 8 ;~ 24ED:2BFC
cs=0x24ed;eip=0x002bff; 	T(SUB(ax, bx));	// 112277 sub     ax, bx ;~ 24ED:2BFF
cs=0x24ed;eip=0x002c01; 	T(SUB(di, ax));	// 112278 sub     di, ax ;~ 24ED:2C01
cs=0x24ed;eip=0x002c03; 	T(SUB(di, 0x0A00));	// 112279 sub     di, 0A00h ;~ 24ED:2C03
cs=0x24ed;eip=0x002c07; 	T(MOV(dx, 8));	// 112280 mov     dx, 8 ;~ 24ED:2C07
loc_360ba:
	// 7450 
cs=0x24ed;eip=0x002c0a; 	T(MOV(cx, ax));	// 112283 mov     cx, ax ;~ 24ED:2C0A
cs=0x24ed;eip=0x002c0c; 	T(SHR(cx, 1));	// 112284 shr     cx, 1 ;~ 24ED:2C0C
cs=0x24ed;eip=0x002c0e; 	T(MOV(si, di));	// 112285 mov     si, di ;~ 24ED:2C0E
	// 112286 rep movsw ;~ 24ED:2C10
cs=0x24ed;eip=0x002c10; 	X(	REP MOVSW);	// 112286 rep movsw ;~ 24ED:2C10
cs=0x24ed;eip=0x002c12; 	T(SUB(di, ax));	// 112287 sub     di, ax ;~ 24ED:2C12
loc_360c4:
	// 7451 
cs=0x24ed;eip=0x002c14; 	T(ADD(di, 0x140));	// 112290 add     di, 140h ;~ 24ED:2C14
cs=0x24ed;eip=0x002c18; 	T(DEC(dx));	// 112291 dec     dx ;~ 24ED:2C18
cs=0x24ed;eip=0x002c19; 	J(JNZ(loc_360ba));	// 112292 jnz     short loc_360BA ;~ 24ED:2C19
cs=0x24ed;eip=0x002c1b; 	T(SUB(ax, 8));	// 112293 sub     ax, 8 ;~ 24ED:2C1B
cs=0x24ed;eip=0x002c1e; 	J(JMP(loc_360d5));	// 112294 jmp     short loc_360D5 ;~ 24ED:2C1E
loc_360d0:
	// 7452 
cs=0x24ed;eip=0x002c20; 	T(SUB(di, ax));	// 112298 sub     di, ax ;~ 24ED:2C20
cs=0x24ed;eip=0x002c22; 	T(SUB(di, 8));	// 112299 sub     di, 8 ;~ 24ED:2C22
loc_360d5:
	// 7453 
cs=0x24ed;eip=0x002c25; 	T(MOV(si, di));	// 112303 mov     si, di ;~ 24ED:2C25
cs=0x24ed;eip=0x002c27; 	T(MOV(cx, 4));	// 112304 mov     cx, 4 ;~ 24ED:2C27
	// 112305 rep movsw ;~ 24ED:2C2A
cs=0x24ed;eip=0x002c2a; 	X(	REP MOVSW);	// 112305 rep movsw ;~ 24ED:2C2A
cs=0x24ed;eip=0x002c2c; 	T(ADD(di, 0x138));	// 112306 add     di, 138h ;~ 24ED:2C2C
cs=0x24ed;eip=0x002c30; 	T(DEC(ax));	// 112307 dec     ax ;~ 24ED:2C30
cs=0x24ed;eip=0x002c31; 	J(JNZ(loc_360d5));	// 112308 jnz     short loc_360D5 ;~ 24ED:2C31
locret_360e3:
	// 7454 
cs=0x24ed;eip=0x002c33; 	J(RETN(0));	// 112311 retn ;~ 24ED:2C33

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_360ba: 	goto loc_360ba;
        case m2c::kloc_360c4: 	goto loc_360c4;
        case m2c::kloc_360d0: 	goto loc_360d0;
        case m2c::kloc_360d5: 	goto loc_360d5;
        case m2c::klocret_360e3: 	goto locret_360e3;
        case m2c::ksub_36094: 	goto sub_36094;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_360e4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_360e4:
    _begin:
cs=0x24ed;eip=0x002c34; 	X(PUSH(es));	// 112321 push    es ;~ 24ED:2C34
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002c35; 	T(MOV(es, *(dw*)(((db*)&word_359a4))));	// 112322 mov     es, cs:word_359A4 ;~ 24ED:2C35
cs=0x24ed;eip=0x002c3a; 	T(MOV(si, 0x0F9FF));	// 112324 mov     si, 0F9FFh ;~ 24ED:2C3A
cs=0x24ed;eip=0x002c3d; 	T(XOR(di, di));	// 112325 xor     di, di ;~ 24ED:2C3D
cs=0x24ed;eip=0x002c3f; 	T(MOV(dx, 0x140));	// 112326 mov     dx, 140h ;~ 24ED:2C3F
cs=0x24ed;eip=0x002c42; 	T(MOV(bx, 0x6062));	// 112327 mov     bx, 6062h ;~ 24ED:2C42
loc_360f5:
	// 7455 
cs=0x24ed;eip=0x002c45; 	X(PUSH(si));	// 112330 push    si ;~ 24ED:2C45
cs=0x24ed;eip=0x002c46; 	T(MOV(cx, 0x32));	// 112331 mov     cx, 32h ; '2' ;~ 24ED:2C46
loc_360f9:
	// 7456 
cs=0x24ed;eip=0x002c49; 	T(MOV(ah, *(raddr(ds,si-0x140))));	// 112334 mov     ah, [si-140h] ;~ 24ED:2C49
cs=0x24ed;eip=0x002c4d; 	T(CMP(ah, bh));	// 112335 cmp     ah, bh ;~ 24ED:2C4D
cs=0x24ed;eip=0x002c4f; 	J(JC(loc_36108));	// 112336 jb      short loc_36108 ;~ 24ED:2C4F
cs=0x24ed;eip=0x002c51; 	T(CMP(ah, bl));	// 112337 cmp     ah, bl ;~ 24ED:2C51
cs=0x24ed;eip=0x002c53; 	J(JNC(loc_36108));	// 112338 jnb     short loc_36108 ;~ 24ED:2C53
cs=0x24ed;eip=0x002c55; 	T(ADD(ah, 2));	// 112339 add     ah, 2 ;~ 24ED:2C55
loc_36108:
	// 7457 
cs=0x24ed;eip=0x002c58; 	T(MOV(al, *(raddr(ds,si))));	// 112343 mov     al, [si] ;~ 24ED:2C58
cs=0x24ed;eip=0x002c5a; 	T(CMP(al, bh));	// 112344 cmp     al, bh ;~ 24ED:2C5A
cs=0x24ed;eip=0x002c5c; 	J(JC(loc_36114));	// 112345 jb      short loc_36114 ;~ 24ED:2C5C
cs=0x24ed;eip=0x002c5e; 	T(CMP(al, bl));	// 112346 cmp     al, bl ;~ 24ED:2C5E
cs=0x24ed;eip=0x002c60; 	J(JNC(loc_36114));	// 112347 jnb     short loc_36114 ;~ 24ED:2C60
cs=0x24ed;eip=0x002c62; 	T(ADD(al, 2));	// 112348 add     al, 2 ;~ 24ED:2C62
loc_36114:
	// 7458 
cs=0x24ed;eip=0x002c64; 	X(STOSW);	// 112352 stosw ;~ 24ED:2C64
cs=0x24ed;eip=0x002c65; 	T(MOV(ah, *(raddr(ds,si-0x3C0))));	// 112353 mov     ah, [si-3C0h] ;~ 24ED:2C65
cs=0x24ed;eip=0x002c69; 	T(CMP(ah, bh));	// 112354 cmp     ah, bh ;~ 24ED:2C69
cs=0x24ed;eip=0x002c6b; 	J(JC(loc_36124));	// 112355 jb      short loc_36124 ;~ 24ED:2C6B
cs=0x24ed;eip=0x002c6d; 	T(CMP(ah, bl));	// 112356 cmp     ah, bl ;~ 24ED:2C6D
cs=0x24ed;eip=0x002c6f; 	J(JNC(loc_36124));	// 112357 jnb     short loc_36124 ;~ 24ED:2C6F
cs=0x24ed;eip=0x002c71; 	T(ADD(ah, 2));	// 112358 add     ah, 2 ;~ 24ED:2C71
loc_36124:
	// 7459 
cs=0x24ed;eip=0x002c74; 	T(MOV(al, *(raddr(ds,si-0x280))));	// 112362 mov     al, [si-280h] ;~ 24ED:2C74
cs=0x24ed;eip=0x002c78; 	T(CMP(al, bh));	// 112363 cmp     al, bh ;~ 24ED:2C78
cs=0x24ed;eip=0x002c7a; 	J(JC(loc_36132));	// 112364 jb      short loc_36132 ;~ 24ED:2C7A
cs=0x24ed;eip=0x002c7c; 	T(CMP(al, bl));	// 112365 cmp     al, bl ;~ 24ED:2C7C
cs=0x24ed;eip=0x002c7e; 	J(JNC(loc_36132));	// 112366 jnb     short loc_36132 ;~ 24ED:2C7E
loc_36130:
	// 7460 
cs=0x24ed;eip=0x002c80; 	T(ADD(al, 2));	// 112369 add     al, 2 ;~ 24ED:2C80
loc_36132:
	// 7461 
cs=0x24ed;eip=0x002c82; 	X(STOSW);	// 112373 stosw ;~ 24ED:2C82
cs=0x24ed;eip=0x002c83; 	T(SUB(si, 0x500));	// 112374 sub     si, 500h ;~ 24ED:2C83
cs=0x24ed;eip=0x002c87; 	J(LOOP(loc_360f9));	// 112375 loop    loc_360F9 ;~ 24ED:2C87
cs=0x24ed;eip=0x002c89; 	X(POP(si));	// 112376 pop     si ;~ 24ED:2C89
cs=0x24ed;eip=0x002c8a; 	T(DEC(si));	// 112377 dec     si ;~ 24ED:2C8A
cs=0x24ed;eip=0x002c8b; 	T(DEC(dx));	// 112378 dec     dx ;~ 24ED:2C8B
cs=0x24ed;eip=0x002c8c; 	J(JNZ(loc_360f5));	// 112379 jnz     short loc_360F5 ;~ 24ED:2C8C
cs=0x24ed;eip=0x002c8e; 	X(PUSH(ds));	// 112380 push    ds ;~ 24ED:2C8E
cs=0x24ed;eip=0x002c8f; 	X(PUSH(es));	// 112381 push    es ;~ 24ED:2C8F
cs=0x24ed;eip=0x002c90; 	X(POP(ds));	// 112382 pop     ds ;~ 24ED:2C90
cs=0x24ed;eip=0x002c91; 	T(MOV(di, 0x62A0));	// 112384 mov     di, 62A0h ;~ 24ED:2C91
cs=0x24ed;eip=0x002c94; 	T(MOV(dx, 0x44));	// 112385 mov     dx, 44h ; 'D' ;~ 24ED:2C94
loc_36147:
	// 7462 
cs=0x24ed;eip=0x002c97; 	T(si = di-0x2A30);	// 112388 lea     si, [di-2A30h] ;~ 24ED:2C97
cs=0x24ed;eip=0x002c9b; 	X(MOVSW);	// 112389 movsw ;~ 24ED:2C9B
cs=0x24ed;eip=0x002c9c; 	X(MOVSW);	// 112390 movsw ;~ 24ED:2C9C
cs=0x24ed;eip=0x002c9d; 	X(MOVSW);	// 112391 movsw ;~ 24ED:2C9D
cs=0x24ed;eip=0x002c9e; 	X(MOVSW);	// 112392 movsw ;~ 24ED:2C9E
cs=0x24ed;eip=0x002c9f; 	T(ADD(di, 0x0C0));	// 112393 add     di, 0C0h ; 'À' ;~ 24ED:2C9F
cs=0x24ed;eip=0x002ca3; 	T(DEC(dx));	// 112394 dec     dx ;~ 24ED:2CA3
cs=0x24ed;eip=0x002ca4; 	J(JNZ(loc_36147));	// 112395 jnz     short loc_36147 ;~ 24ED:2CA4
cs=0x24ed;eip=0x002ca6; 	X(POP(ds));	// 112396 pop     ds ;~ 24ED:2CA6
cs=0x24ed;eip=0x002ca7; 	X(POP(es));	// 112398 pop     es ;~ 24ED:2CA7
cs=0x24ed;eip=0x002ca8; 	J(RETN(0));	// 112400 retn ;~ 24ED:2CA8

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_360f5: 	goto loc_360f5;
        case m2c::kloc_360f9: 	goto loc_360f9;
        case m2c::kloc_36108: 	goto loc_36108;
        case m2c::kloc_36114: 	goto loc_36114;
        case m2c::kloc_36124: 	goto loc_36124;
        case m2c::kloc_36130: 	goto loc_36130;
        case m2c::kloc_36132: 	goto loc_36132;
        case m2c::kloc_36147: 	goto loc_36147;
        case m2c::ksub_360e4: 	goto sub_360e4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool nullsub_25(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    nullsub_25:
    _begin:
cs=0x24ed;eip=0x002ca9; 	J(RETF(0));	// 112409 retf ;~ 24ED:2CA9

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::knullsub_25: 	goto nullsub_25;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool nullsub_26(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    nullsub_26:
    _begin:
cs=0x24ed;eip=0x002caa; 	J(RETF(0));	// 112418 retf ;~ 24ED:2CAA

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::knullsub_26: 	goto nullsub_26;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool nullsub_27(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    nullsub_27:
    _begin:
cs=0x24ed;eip=0x002cab; 	J(RETF(0));	// 112427 retf ;~ 24ED:2CAB

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::knullsub_27: 	goto nullsub_27;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_2cac_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_2cac_proc:
    _begin:
loc_3615c:
	// 7463 
cs=0x24ed;eip=0x002cac; 	T(OR(dl, dl));	// 112436 or      dl, dl ;~ 24ED:2CAC
cs=0x24ed;eip=0x002cae; 	J(JS(loc_36196));	// 112437 js      short loc_36196 ;~ 24ED:2CAE
cs=0x24ed;eip=0x002cb0; 	T(MOV(ax, 0x140));	// 112438 mov     ax, 140h ;~ 24ED:2CB0
cs=0x24ed;eip=0x002cb3; 	T(MUL1_2(cx));	// 112439 mul     cx ;~ 24ED:2CB3
cs=0x24ed;eip=0x002cb5; 	T(MOV(dx, ax));	// 112440 mov     dx, ax ;~ 24ED:2CB5
cs=0x24ed;eip=0x002cb7; 	T(MOV(si, dx));	// 112441 mov     si, dx ;~ 24ED:2CB7
cs=0x24ed;eip=0x002cb9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 112442 mov     bx, [bp+0] ;~ 24ED:2CB9
loc_3616c:
	// 7464 
cs=0x24ed;eip=0x002cbc; 	T(XOR(di, di));	// 112445 xor     di, di ;~ 24ED:2CBC
cs=0x24ed;eip=0x002cbe; 	T(MOV(cx, dx));	// 112446 mov     cx, dx ;~ 24ED:2CBE
cs=0x24ed;eip=0x002cc0; 	T(SUB(cx, si));	// 112447 sub     cx, si ;~ 24ED:2CC0
cs=0x24ed;eip=0x002cc2; 	J(JZ(loc_3617c));	// 112448 jz      short loc_3617C ;~ 24ED:2CC2
cs=0x24ed;eip=0x002cc4; 	X(PUSH(si));	// 112449 push    si ;~ 24ED:2CC4
cs=0x24ed;eip=0x002cc5; 	T(SHR(cx, 2));	// 112450 shr     cx, 2 ;~ 24ED:2CC5
	// 112451 rep movsd ;~ 24ED:2CC8
cs=0x24ed;eip=0x002cc8; 	X(	REP MOVSD);	// 112451 rep movsd ;~ 24ED:2CC8
cs=0x24ed;eip=0x002ccb; 	X(POP(si));	// 112452 pop     si ;~ 24ED:2CCB
loc_3617c:
	// 7465 
cs=0x24ed;eip=0x002ccc; 	T(MOV(cx, 0x280));	// 112455 mov     cx, 280h ;~ 24ED:2CCC
cs=0x24ed;eip=0x002ccf; 	T(MOV(eax, 0x7070707));	// 112456 mov     eax, 7070707h ;~ 24ED:2CCF
	// 112457 rep stosd ;~ 24ED:2CD5
cs=0x24ed;eip=0x002cd5; 	X(	REP STOSD);	// 112457 rep stosd ;~ 24ED:2CD5
cs=0x24ed;eip=0x002cd8; 	T(SUB(si, 0x0A00));	// 112458 sub     si, 0A00h ;~ 24ED:2CD8
cs=0x24ed;eip=0x002cdc; 	J(CALL(sub_359ac,0));	// 112459 call    sub_359AC ;~ 24ED:2CDC
cs=0x24ed;eip=0x002cdf; 	T(CMP(si, 0x0A00));	// 112460 cmp     si, 0A00h ;~ 24ED:2CDF
cs=0x24ed;eip=0x002ce3; 	J(JA(loc_3616c));	// 112461 ja      short loc_3616C ;~ 24ED:2CE3
cs=0x24ed;eip=0x002ce5; 	J(RETF(0));	// 112462 retf ;~ 24ED:2CE5
loc_36196:
	// 7466 
cs=0x24ed;eip=0x002ce6; 	J(CALL(sub_35a05,0));	// 112466 call    sub_35A05 ;~ 24ED:2CE6
cs=0x24ed;eip=0x002ce9; 	T(MOV(ax, 0x140));	// 112467 mov     ax, 140h ;~ 24ED:2CE9
cs=0x24ed;eip=0x002cec; 	T(MUL1_2(cx));	// 112468 mul     cx ;~ 24ED:2CEC
cs=0x24ed;eip=0x002cee; 	T(MOV(dx, ax));	// 112469 mov     dx, ax ;~ 24ED:2CEE
cs=0x24ed;eip=0x002cf0; 	T(MOV(si, 0x0A00));	// 112470 mov     si, 0A00h ;~ 24ED:2CF0
cs=0x24ed;eip=0x002cf3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 112471 mov     bx, [bp+0] ;~ 24ED:2CF3
loc_361a6:
	// 7467 
cs=0x24ed;eip=0x002cf6; 	X(PUSH(si));	// 112474 push    si ;~ 24ED:2CF6
cs=0x24ed;eip=0x002cf7; 	T(XOR(di, di));	// 112475 xor     di, di ;~ 24ED:2CF7
cs=0x24ed;eip=0x002cf9; 	T(MOV(cx, dx));	// 112476 mov     cx, dx ;~ 24ED:2CF9
cs=0x24ed;eip=0x002cfb; 	T(SUB(cx, si));	// 112477 sub     cx, si ;~ 24ED:2CFB
cs=0x24ed;eip=0x002cfd; 	T(MOV(ax, ds));	// 112478 mov     ax, ds ;~ 24ED:2CFD
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002cff; 	T(MOV(ds, *(dw*)(((db*)&word_359a4))));	// 112479 mov     ds, cs:word_359A4 ;~ 24ED:2CFF
cs=0x24ed;eip=0x002d04; 	T(SHR(cx, 2));	// 112481 shr     cx, 2 ;~ 24ED:2D04
	// 112482 rep movsd ;~ 24ED:2D07
cs=0x24ed;eip=0x002d07; 	X(	REP MOVSD);	// 112482 rep movsd ;~ 24ED:2D07
cs=0x24ed;eip=0x002d0a; 	T(MOV(ds, ax));	// 112483 mov     ds, ax ;~ 24ED:2D0A
cs=0x24ed;eip=0x002d0c; 	T(MOV(cx, 0x280));	// 112485 mov     cx, 280h ;~ 24ED:2D0C
cs=0x24ed;eip=0x002d0f; 	T(MOV(eax, 0x7070707));	// 112486 mov     eax, 7070707h ;~ 24ED:2D0F
	// 112487 rep stosd ;~ 24ED:2D15
cs=0x24ed;eip=0x002d15; 	X(	REP STOSD);	// 112487 rep stosd ;~ 24ED:2D15
cs=0x24ed;eip=0x002d18; 	T(CMP(di, dx));	// 112488 cmp     di, dx ;~ 24ED:2D18
cs=0x24ed;eip=0x002d1a; 	J(JNC(loc_361d6));	// 112489 jnb     loc_361D6 ;~ 24ED:2D1A
cs=0x24ed;eip=0x002d1e; 	T(MOV(cx, 0x280));	// 112490 mov     cx, 280h ;~ 24ED:2D1E
cs=0x24ed;eip=0x002d21; 	T(MOV(si, di));	// 112491 mov     si, di ;~ 24ED:2D21
	// 112492 rep movsd ;~ 24ED:2D23
cs=0x24ed;eip=0x002d23; 	X(	REP MOVSD);	// 112492 rep movsd ;~ 24ED:2D23
loc_361d6:
	// 7468 
cs=0x24ed;eip=0x002d26; 	X(POP(si));	// 112495 pop     si ;~ 24ED:2D26
cs=0x24ed;eip=0x002d27; 	T(ADD(si, 0x0A00));	// 112496 add     si, 0A00h ;~ 24ED:2D27
cs=0x24ed;eip=0x002d2b; 	J(CALL(sub_359ac,0));	// 112497 call    sub_359AC ;~ 24ED:2D2B
loc_361de:
	// 7469 
cs=0x24ed;eip=0x002d2e; 	T(CMP(si, dx));	// 112500 cmp     si, dx ;~ 24ED:2D2E
loc_361e0:
	// 7470 
cs=0x24ed;eip=0x002d30; 	J(JBE(loc_361a6));	// 112503 jbe     short loc_361A6 ;~ 24ED:2D30
cs=0x24ed;eip=0x002d32; 	J(RETF(0));	// 112504 retf ;~ 24ED:2D32
locret_361e3:
	// 7471 
cs=0x24ed;eip=0x002d33; 	J(RETF(0));	// 112509 retf ;~ 24ED:2D33
locret_361e4:
	// 7472 
cs=0x24ed;eip=0x002d34; 	J(RETF(0));	// 112514 retf ;~ 24ED:2D34
loc_361e5:
	// 7473 
cs=0x24ed;eip=0x002d35; 	T(MOV(bx, 0x0FEC0));	// 112519 mov     bx, 0FEC0h ;~ 24ED:2D35
cs=0x24ed;eip=0x002d38; 	J(CALL(sub_35a05,0));	// 112520 call    sub_35A05 ;~ 24ED:2D38
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002d3b; 	X(MOV(*(dw*)(((db*)&word_359aa)), 0));	// 112521 mov     cs:word_359AA, 0 ;~ 24ED:2D3B
cs=0x24ed;eip=0x002d42; 	X(PUSH(bx));	// 112522 push    bx ;~ 24ED:2D42
cs=0x24ed;eip=0x002d43; 	T(XOR(dx, dx));	// 112523 xor     dx, dx ;~ 24ED:2D43
cs=0x24ed;eip=0x002d45; 	T(MOV(bx, cx));	// 112524 mov     bx, cx ;~ 24ED:2D45
cs=0x24ed;eip=0x002d47; 	J(CALL(sub_340a8,0));	// 112525 call    sub_340A8 ;~ 24ED:2D47
cs=0x24ed;eip=0x002d4a; 	X(POP(bx));	// 112526 pop     bx ;~ 24ED:2D4A
cs=0x24ed;eip=0x002d4b; 	T(MOV(si, di));	// 112527 mov     si, di ;~ 24ED:2D4B
cs=0x24ed;eip=0x002d4d; 	T(MOV(dx, di));	// 112528 mov     dx, di ;~ 24ED:2D4D
cs=0x24ed;eip=0x002d4f; 	J(CALL(sub_359f7,0));	// 112529 call    sub_359F7 ;~ 24ED:2D4F
cs=0x24ed;eip=0x002d52; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0))));	// 112530 mov     cx, [bp+0] ;~ 24ED:2D52
loc_36205:
	// 7474 
cs=0x24ed;eip=0x002d55; 	X(PUSH(cx));	// 112533 push    cx ;~ 24ED:2D55
cs=0x24ed;eip=0x002d56; 	X(PUSH(si));	// 112534 push    si ;~ 24ED:2D56
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002d57; 	T(MOV(di, *(dw*)(((db*)&word_33653))));	// 112535 mov     di, cs:word_33653 ;~ 24ED:2D57
cs=0x24ed;eip=0x002d5c; 	T(MOV(cx, dx));	// 112536 mov     cx, dx ;~ 24ED:2D5C
cs=0x24ed;eip=0x002d5e; 	T(SUB(cx, si));	// 112537 sub     cx, si ;~ 24ED:2D5E
cs=0x24ed;eip=0x002d60; 	J(JZ(loc_3621b));	// 112538 jz      short loc_3621B ;~ 24ED:2D60
cs=0x24ed;eip=0x002d62; 	T(SHR(cx, 1));	// 112539 shr     cx, 1 ;~ 24ED:2D62
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002d64; 	T(MOV(ds, *(dw*)(((db*)&word_359a4))));	// 112540 mov     ds, cs:word_359A4 ;~ 24ED:2D64
	// 112542 rep movsw ;~ 24ED:2D69
cs=0x24ed;eip=0x002d69; 	X(	REP MOVSW);	// 112542 rep movsw ;~ 24ED:2D69
loc_3621b:
	// 7475 
cs=0x24ed;eip=0x002d6b; 	T(MOV(cx, dx));	// 112545 mov     cx, dx ;~ 24ED:2D6B
cs=0x24ed;eip=0x002d6d; 	T(SUB(cx, di));	// 112546 sub     cx, di ;~ 24ED:2D6D
cs=0x24ed;eip=0x002d6f; 	J(JZ(loc_3622f));	// 112547 jz      short loc_3622F ;~ 24ED:2D6F
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002d71; 	T(MOV(ds, *(dw*)(((db*)&word_359a6))));	// 112548 mov     ds, cs:word_359A6 ;~ 24ED:2D71
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002d76; 	T(MOV(si, *(dw*)(((db*)&word_33653))));	// 112549 mov     si, cs:word_33653 ;~ 24ED:2D76
cs=0x24ed;eip=0x002d7b; 	T(SHR(cx, 1));	// 112550 shr     cx, 1 ;~ 24ED:2D7B
	// 112551 rep movsw ;~ 24ED:2D7D
cs=0x24ed;eip=0x002d7d; 	X(	REP MOVSW);	// 112551 rep movsw ;~ 24ED:2D7D
loc_3622f:
	// 7476 
cs=0x24ed;eip=0x002d7f; 	X(POP(si));	// 112554 pop     si ;~ 24ED:2D7F
cs=0x24ed;eip=0x002d80; 	X(POP(cx));	// 112555 pop     cx ;~ 24ED:2D80
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002d81; 	X(INC(*(dw*)(((db*)&word_359aa))));	// 112556 inc     cs:word_359AA ;~ 24ED:2D81
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002d86; 	T(MOV(ax, *(dw*)(((db*)&word_359aa))));	// 112557 mov     ax, cs:word_359AA ;~ 24ED:2D86
cs=0x24ed;eip=0x002d8a; 	T(MOV(ah, 6));	// 112558 mov     ah, 6 ;~ 24ED:2D8A
cs=0x24ed;eip=0x002d8c; 	T(MUL1_1(ah));	// 112559 mul     ah ;~ 24ED:2D8C
loc_3623e:
	// 7477 
cs=0x24ed;eip=0x002d8e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 112562 mov     bx, [bp+0] ;~ 24ED:2D8E
cs=0x24ed;eip=0x002d91; 	T(SUB(bx, cx));	// 112563 sub     bx, cx ;~ 24ED:2D91
cs=0x24ed;eip=0x002d93; 	T(CMP(bx, ax));	// 112564 cmp     bx, ax ;~ 24ED:2D93
cs=0x24ed;eip=0x002d95; 	J(JC(loc_3623e));	// 112565 jb      short loc_3623E ;~ 24ED:2D95
cs=0x24ed;eip=0x002d97; 	T(MOV(bx, 0x0FEC0));	// 112566 mov     bx, 0FEC0h ;~ 24ED:2D97
cs=0x24ed;eip=0x002d9a; 	J(JZ(loc_36253));	// 112567 jz      short loc_36253 ;~ 24ED:2D9A
cs=0x24ed;eip=0x002d9c; 	T(ADD(bx, bx));	// 112568 add     bx, bx ;~ 24ED:2D9C
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002d9e; 	X(INC(*(dw*)(((db*)&word_359aa))));	// 112569 inc     cs:word_359AA ;~ 24ED:2D9E
loc_36253:
	// 7478 
cs=0x24ed;eip=0x002da3; 	T(ADD(si, bx));	// 112572 add     si, bx ;~ 24ED:2DA3
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002da5; 	T(CMP(si, *(dw*)(((db*)&word_33653))));	// 112573 cmp     si, cs:word_33653 ;~ 24ED:2DA5
cs=0x24ed;eip=0x002daa; 	J(JC(locret_36260));	// 112574 jb      short locret_36260 ;~ 24ED:2DAA
cs=0x24ed;eip=0x002dac; 	T(CMP(si, dx));	// 112575 cmp     si, dx ;~ 24ED:2DAC
cs=0x24ed;eip=0x002dae; 	J(JC(loc_36205));	// 112576 jb      short loc_36205 ;~ 24ED:2DAE
locret_36260:
	// 7479 
cs=0x24ed;eip=0x002db0; 	J(RETF(0));	// 112579 retf ;~ 24ED:2DB0
loc_36261:
	// 7480 
cs=0x24ed;eip=0x002db1; 	T(MOV(cx, 0x0C8));	// 112585 mov     cx, 0C8h ; 'È' ;~ 24ED:2DB1
loc_36264:
	// 7481 
cs=0x24ed;eip=0x002db4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 112589 mov     bx, [bp+0] ;~ 24ED:2DB4
cs=0x24ed;eip=0x002db7; 	T(MOV(si, 0x2FC8));	// 112590 mov     si, 2FC8h ;~ 24ED:2DB7
cs=0x24ed;eip=0x002dba; 	T(SHR(cx, 1));	// 112591 shr     cx, 1 ;~ 24ED:2DBA
cs=0x24ed;eip=0x002dbc; 	T(SHR(cx, 1));	// 112592 shr     cx, 1 ;~ 24ED:2DBC
loc_3626e:
	// 7482 
cs=0x24ed;eip=0x002dbe; 	X(LODS(*(dw*)(raddr(cs,si)),si,2));	// 112595 lods    word ptr cs:[si] ;~ 24ED:2DBE
cs=0x24ed;eip=0x002dc0; 	T(OR(ax, ax));	// 112596 or      ax, ax ;~ 24ED:2DC0
cs=0x24ed;eip=0x002dc2; 	J(JS(loc_36298));	// 112597 js      short loc_36298 ;~ 24ED:2DC2
cs=0x24ed;eip=0x002dc4; 	X(PUSH(cx));	// 112598 push    cx ;~ 24ED:2DC4
cs=0x24ed;eip=0x002dc5; 	X(PUSH(si));	// 112599 push    si ;~ 24ED:2DC5
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002dc6; 	T(ADD(ax, *(dw*)(((db*)&word_33653))));	// 112600 add     ax, cs:word_33653 ;~ 24ED:2DC6
cs=0x24ed;eip=0x002dcb; 	T(MOV(di, ax));	// 112601 mov     di, ax ;~ 24ED:2DCB
cs=0x24ed;eip=0x002dcd; 	T(XOR(ax, ax));	// 112602 xor     ax, ax ;~ 24ED:2DCD
loc_3627f:
	// 7483 
cs=0x24ed;eip=0x002dcf; 	X(PUSH(di));	// 112605 push    di ;~ 24ED:2DCF
cs=0x24ed;eip=0x002dd0; 	T(MOV(dx, 0x50));	// 112606 mov     dx, 50h ; 'P' ;~ 24ED:2DD0
loc_36283:
	// 7484 
cs=0x24ed;eip=0x002dd3; 	X(STOSB);	// 112609 stosb ;~ 24ED:2DD3
cs=0x24ed;eip=0x002dd4; 	T(ADD(di, 3));	// 112610 add     di, 3 ;~ 24ED:2DD4
cs=0x24ed;eip=0x002dd7; 	T(DEC(dx));	// 112611 dec     dx ;~ 24ED:2DD7
cs=0x24ed;eip=0x002dd8; 	J(JNZ(loc_36283));	// 112612 jnz     short loc_36283 ;~ 24ED:2DD8
cs=0x24ed;eip=0x002dda; 	X(POP(di));	// 112613 pop     di ;~ 24ED:2DDA
cs=0x24ed;eip=0x002ddb; 	T(ADD(di, 0x500));	// 112614 add     di, 500h ;~ 24ED:2DDB
cs=0x24ed;eip=0x002ddf; 	J(LOOP(loc_3627f));	// 112615 loop    loc_3627F ;~ 24ED:2DDF
cs=0x24ed;eip=0x002de1; 	J(CALL(sub_359e1,0));	// 112616 call    sub_359E1 ;~ 24ED:2DE1
cs=0x24ed;eip=0x002de4; 	X(POP(si));	// 112617 pop     si ;~ 24ED:2DE4
cs=0x24ed;eip=0x002de5; 	X(POP(cx));	// 112618 pop     cx ;~ 24ED:2DE5
cs=0x24ed;eip=0x002de6; 	J(JMP(loc_3626e));	// 112619 jmp     short loc_3626E ;~ 24ED:2DE6
loc_36298:
	// 7485 
cs=0x24ed;eip=0x002de8; 	X(PUSH(cs));	// 112623 push    cs ;~ 24ED:2DE8
cs=0x24ed;eip=0x002de9; 	J(CALL(sub_33f81,m2c::kloc_33fb0));	// 112624 call    loc_33FB0 ;~ 24ED:2DE9
cs=0x24ed;eip=0x002dec; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 112625 mov     bx, [bp+0] ;~ 24ED:2DEC
cs=0x24ed;eip=0x002def; 	T(MOV(si, 0x2FC8));	// 112626 mov     si, 2FC8h ;~ 24ED:2DEF
loc_362a2:
	// 7486 
cs=0x24ed;eip=0x002df2; 	X(LODS(*(dw*)(raddr(cs,si)),si,2));	// 112629 lods    word ptr cs:[si] ;~ 24ED:2DF2
cs=0x24ed;eip=0x002df4; 	T(OR(ax, ax));	// 112630 or      ax, ax ;~ 24ED:2DF4
cs=0x24ed;eip=0x002df6; 	J(JS(locret_362cc));	// 112631 js      short locret_362CC ;~ 24ED:2DF6
cs=0x24ed;eip=0x002df8; 	X(PUSH(cx));	// 112632 push    cx ;~ 24ED:2DF8
cs=0x24ed;eip=0x002df9; 	X(PUSH(si));	// 112633 push    si ;~ 24ED:2DF9
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002dfa; 	T(ADD(ax, *(dw*)(((db*)&word_33653))));	// 112634 add     ax, cs:word_33653 ;~ 24ED:2DFA
cs=0x24ed;eip=0x002dff; 	T(MOV(di, ax));	// 112635 mov     di, ax ;~ 24ED:2DFF
loc_362b1:
	// 7487 
cs=0x24ed;eip=0x002e01; 	X(PUSH(di));	// 112638 push    di ;~ 24ED:2E01
cs=0x24ed;eip=0x002e02; 	T(MOV(dx, 0x50));	// 112639 mov     dx, 50h ; 'P' ;~ 24ED:2E02
loc_362b5:
	// 7488 
cs=0x24ed;eip=0x002e05; 	T(MOV(si, di));	// 112642 mov     si, di ;~ 24ED:2E05
cs=0x24ed;eip=0x002e07; 	X(MOVSB);	// 112643 movsb ;~ 24ED:2E07
cs=0x24ed;eip=0x002e08; 	T(ADD(di, 3));	// 112644 add     di, 3 ;~ 24ED:2E08
cs=0x24ed;eip=0x002e0b; 	T(DEC(dx));	// 112645 dec     dx ;~ 24ED:2E0B
cs=0x24ed;eip=0x002e0c; 	J(JNZ(loc_362b5));	// 112646 jnz     short loc_362B5 ;~ 24ED:2E0C
cs=0x24ed;eip=0x002e0e; 	X(POP(di));	// 112647 pop     di ;~ 24ED:2E0E
cs=0x24ed;eip=0x002e0f; 	T(ADD(di, 0x500));	// 112648 add     di, 500h ;~ 24ED:2E0F
cs=0x24ed;eip=0x002e13; 	J(LOOP(loc_362b1));	// 112649 loop    loc_362B1 ;~ 24ED:2E13
cs=0x24ed;eip=0x002e15; 	J(CALL(sub_359e1,0));	// 112650 call    sub_359E1 ;~ 24ED:2E15
cs=0x24ed;eip=0x002e18; 	X(POP(si));	// 112651 pop     si ;~ 24ED:2E18
cs=0x24ed;eip=0x002e19; 	X(POP(cx));	// 112652 pop     cx ;~ 24ED:2E19
cs=0x24ed;eip=0x002e1a; 	J(JMP(loc_362a2));	// 112653 jmp     short loc_362A2 ;~ 24ED:2E1A
locret_362cc:
	// 7489 
cs=0x24ed;eip=0x002e1c; 	J(RETF(0));	// 112657 retf ;~ 24ED:2E1C
ret_24ed_2e1d:
	// 7490 
cs=0x24ed;eip=0x002e1d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 112660 mov     bx, [bp+0] ;~ 24ED:2E1D
cs=0x24ed;eip=0x002e20; 	T(MOV(si, 0x2FC8));	// 112661 mov     si, 2FC8h ;~ 24ED:2E20
cs=0x24ed;eip=0x002e23; 	T(SHR(cx, 1));	// 112662 shr     cx, 1 ;~ 24ED:2E23
cs=0x24ed;eip=0x002e25; 	T(SHR(cx, 1));	// 112663 shr     cx, 1 ;~ 24ED:2E25
loc_362d7:
	// 7491 
cs=0x24ed;eip=0x002e27; 	T(CMP(si, 0x2FD8));	// 112666 cmp     si, 2FD8h ;~ 24ED:2E27
cs=0x24ed;eip=0x002e2b; 	J(JNZ(loc_362e1));	// 112667 jnz     short loc_362E1 ;~ 24ED:2E2B
cs=0x24ed;eip=0x002e2d; 	X(PUSH(cs));	// 112668 push    cs ;~ 24ED:2E2D
cs=0x24ed;eip=0x002e2e; 	J(CALL(sub_33f81,m2c::kloc_33fb0));	// 112669 call    loc_33FB0 ;~ 24ED:2E2E
loc_362e1:
	// 7492 
cs=0x24ed;eip=0x002e31; 	X(LODS(*(dw*)(raddr(cs,si)),si,2));	// 112672 lods    word ptr cs:[si] ;~ 24ED:2E31
cs=0x24ed;eip=0x002e33; 	T(OR(ax, ax));	// 112673 or      ax, ax ;~ 24ED:2E33
cs=0x24ed;eip=0x002e35; 	J(JS(locret_36306));	// 112674 js      short locret_36306 ;~ 24ED:2E35
cs=0x24ed;eip=0x002e37; 	X(PUSH(cx));	// 112675 push    cx ;~ 24ED:2E37
cs=0x24ed;eip=0x002e38; 	X(PUSH(si));	// 112676 push    si ;~ 24ED:2E38
cs=0x24ed;eip=0x002e39; 	T(MOV(si, ax));	// 112677 mov     si, ax ;~ 24ED:2E39
loc_362eb:
	// 7493 
cs=0x24ed;eip=0x002e3b; 	X(PUSH(si));	// 112680 push    si ;~ 24ED:2E3B
cs=0x24ed;eip=0x002e3c; 	T(MOV(dx, 0x50));	// 112681 mov     dx, 50h ; 'P' ;~ 24ED:2E3C
loc_362ef:
	// 7494 
cs=0x24ed;eip=0x002e3f; 	T(MOV(di, si));	// 112684 mov     di, si ;~ 24ED:2E3F
cs=0x24ed;eip=0x002e41; 	X(MOVSB);	// 112685 movsb ;~ 24ED:2E41
cs=0x24ed;eip=0x002e42; 	T(ADD(si, 3));	// 112686 add     si, 3 ;~ 24ED:2E42
cs=0x24ed;eip=0x002e45; 	T(DEC(dx));	// 112687 dec     dx ;~ 24ED:2E45
cs=0x24ed;eip=0x002e46; 	J(JNZ(loc_362ef));	// 112688 jnz     short loc_362EF ;~ 24ED:2E46
cs=0x24ed;eip=0x002e48; 	X(POP(si));	// 112689 pop     si ;~ 24ED:2E48
cs=0x24ed;eip=0x002e49; 	T(ADD(si, 0x500));	// 112690 add     si, 500h ;~ 24ED:2E49
cs=0x24ed;eip=0x002e4d; 	J(LOOP(loc_362eb));	// 112691 loop    loc_362EB ;~ 24ED:2E4D
cs=0x24ed;eip=0x002e4f; 	J(CALL(sub_359ac,0));	// 112692 call    sub_359AC ;~ 24ED:2E4F
cs=0x24ed;eip=0x002e52; 	X(POP(si));	// 112693 pop     si ;~ 24ED:2E52
cs=0x24ed;eip=0x002e53; 	X(POP(cx));	// 112694 pop     cx ;~ 24ED:2E53
cs=0x24ed;eip=0x002e54; 	J(JMP(loc_362d7));	// 112695 jmp     short loc_362D7 ;~ 24ED:2E54
locret_36306:
	// 7495 
cs=0x24ed;eip=0x002e56; 	J(RETF(0));	// 112699 retf ;~ 24ED:2E56
loc_3638b:
	// 7496 
cs=0x24ed;eip=0x002edb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 112838 mov     bx, [bp+0] ;~ 24ED:2EDB
cs=0x24ed;eip=0x002ede; 	T(MOV(si, 0x2ED9));	// 112839 mov     si, 2ED9h ;~ 24ED:2EDE
cs=0x24ed;eip=0x002ee1; 	T(SHR(cx, 1));	// 112840 shr     cx, 1 ;~ 24ED:2EE1
cs=0x24ed;eip=0x002ee3; 	T(SHR(cx, 1));	// 112841 shr     cx, 1 ;~ 24ED:2EE3
cs=0x24ed;eip=0x002ee5; 	T(SHR(cx, 1));	// 112842 shr     cx, 1 ;~ 24ED:2EE5
loc_36397:
	// 7497 
cs=0x24ed;eip=0x002ee7; 	T(CMP(si, 0x2E57));	// 112845 cmp     si, 2E57h ;~ 24ED:2EE7
cs=0x24ed;eip=0x002eeb; 	J(JBE(loc_363c5));	// 112846 jbe     short loc_363C5 ;~ 24ED:2EEB
cs=0x24ed;eip=0x002eed; 	T(SUB(si, 2));	// 112847 sub     si, 2 ;~ 24ED:2EED
cs=0x24ed;eip=0x002ef0; 	T(MOV(ax, *(dw*)(raddr(cs,si))));	// 112848 mov     ax, cs:[si] ;~ 24ED:2EF0
cs=0x24ed;eip=0x002ef3; 	X(PUSH(cx));	// 112849 push    cx ;~ 24ED:2EF3
cs=0x24ed;eip=0x002ef4; 	T(MOV(di, ax));	// 112850 mov     di, ax ;~ 24ED:2EF4
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002ef6; 	T(ADD(di, *(dw*)(((db*)&word_33653))));	// 112851 add     di, cs:word_33653 ;~ 24ED:2EF6
cs=0x24ed;eip=0x002efb; 	T(XOR(ax, ax));	// 112852 xor     ax, ax ;~ 24ED:2EFB
loc_363ad:
	// 7498 
cs=0x24ed;eip=0x002efd; 	X(PUSH(di));	// 112855 push    di ;~ 24ED:2EFD
cs=0x24ed;eip=0x002efe; 	T(MOV(dx, 0x28));	// 112856 mov     dx, 28h ; '(' ;~ 24ED:2EFE
loc_363b1:
	// 7499 
cs=0x24ed;eip=0x002f01; 	X(STOSB);	// 112859 stosb ;~ 24ED:2F01
cs=0x24ed;eip=0x002f02; 	T(ADD(di, 7));	// 112860 add     di, 7 ;~ 24ED:2F02
cs=0x24ed;eip=0x002f05; 	T(DEC(dx));	// 112861 dec     dx ;~ 24ED:2F05
cs=0x24ed;eip=0x002f06; 	J(JNZ(loc_363b1));	// 112862 jnz     short loc_363B1 ;~ 24ED:2F06
cs=0x24ed;eip=0x002f08; 	X(POP(di));	// 112863 pop     di ;~ 24ED:2F08
cs=0x24ed;eip=0x002f09; 	T(ADD(di, 0x0A00));	// 112864 add     di, 0A00h ;~ 24ED:2F09
cs=0x24ed;eip=0x002f0d; 	J(LOOP(loc_363ad));	// 112865 loop    loc_363AD ;~ 24ED:2F0D
cs=0x24ed;eip=0x002f0f; 	J(CALL(sub_359e1,0));	// 112866 call    sub_359E1 ;~ 24ED:2F0F
cs=0x24ed;eip=0x002f12; 	X(POP(cx));	// 112867 pop     cx ;~ 24ED:2F12
cs=0x24ed;eip=0x002f13; 	J(JMP(loc_36397));	// 112868 jmp     short loc_36397 ;~ 24ED:2F13
loc_363c5:
	// 7500 
cs=0x24ed;eip=0x002f15; 	X(PUSH(cs));	// 112872 push    cs ;~ 24ED:2F15
cs=0x24ed;eip=0x002f16; 	J(CALL(sub_33f81,m2c::kloc_33fb0));	// 112873 call    loc_33FB0 ;~ 24ED:2F16
loc_363c9:
	// 7501 
cs=0x24ed;eip=0x002f19; 	X(LODS(*(dw*)(raddr(cs,si)),si,2));	// 112876 lods    word ptr cs:[si] ;~ 24ED:2F19
cs=0x24ed;eip=0x002f1b; 	T(OR(ax, ax));	// 112877 or      ax, ax ;~ 24ED:2F1B
cs=0x24ed;eip=0x002f1d; 	J(JS(locret_363f3));	// 112878 js      short locret_363F3 ;~ 24ED:2F1D
cs=0x24ed;eip=0x002f1f; 	X(PUSH(cx));	// 112879 push    cx ;~ 24ED:2F1F
cs=0x24ed;eip=0x002f20; 	X(PUSH(si));	// 112880 push    si ;~ 24ED:2F20
cs=0x24ed;eip=0x002f21; 	T(MOV(si, ax));	// 112881 mov     si, ax ;~ 24ED:2F21
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002f23; 	T(ADD(si, *(dw*)(((db*)&word_33653))));	// 112882 add     si, cs:word_33653 ;~ 24ED:2F23
loc_363d8:
	// 7502 
cs=0x24ed;eip=0x002f28; 	X(PUSH(si));	// 112885 push    si ;~ 24ED:2F28
cs=0x24ed;eip=0x002f29; 	T(MOV(dx, 0x28));	// 112886 mov     dx, 28h ; '(' ;~ 24ED:2F29
loc_363dc:
	// 7503 
cs=0x24ed;eip=0x002f2c; 	T(MOV(di, si));	// 112889 mov     di, si ;~ 24ED:2F2C
cs=0x24ed;eip=0x002f2e; 	X(MOVSB);	// 112890 movsb ;~ 24ED:2F2E
cs=0x24ed;eip=0x002f2f; 	T(ADD(si, 7));	// 112891 add     si, 7 ;~ 24ED:2F2F
cs=0x24ed;eip=0x002f32; 	T(DEC(dx));	// 112892 dec     dx ;~ 24ED:2F32
cs=0x24ed;eip=0x002f33; 	J(JNZ(loc_363dc));	// 112893 jnz     short loc_363DC ;~ 24ED:2F33
cs=0x24ed;eip=0x002f35; 	X(POP(si));	// 112894 pop     si ;~ 24ED:2F35
cs=0x24ed;eip=0x002f36; 	T(ADD(si, 0x0A00));	// 112895 add     si, 0A00h ;~ 24ED:2F36
cs=0x24ed;eip=0x002f3a; 	J(LOOP(loc_363d8));	// 112896 loop    loc_363D8 ;~ 24ED:2F3A
cs=0x24ed;eip=0x002f3c; 	J(CALL(sub_359e1,0));	// 112897 call    sub_359E1 ;~ 24ED:2F3C
cs=0x24ed;eip=0x002f3f; 	X(POP(si));	// 112898 pop     si ;~ 24ED:2F3F
cs=0x24ed;eip=0x002f40; 	X(POP(cx));	// 112899 pop     cx ;~ 24ED:2F40
cs=0x24ed;eip=0x002f41; 	J(JMP(loc_363c9));	// 112900 jmp     short loc_363C9 ;~ 24ED:2F41
locret_363f3:
	// 7504 
cs=0x24ed;eip=0x002f43; 	J(RETF(0));	// 112904 retf ;~ 24ED:2F43
loc_363f4:
	// 7505 
cs=0x24ed;eip=0x002f44; 	J(CALL(sub_35a05,0));	// 112909 call    sub_35A05 ;~ 24ED:2F44
cs=0x24ed;eip=0x002f47; 	X(PUSH(ds));	// 112910 push    ds ;~ 24ED:2F47
cs=0x24ed;eip=0x002f48; 	T(MOV(ds, si));	// 112911 mov     ds, si ;~ 24ED:2F48
cs=0x24ed;eip=0x002f4a; 	J(CALL(sub_36462,0));	// 112913 call    sub_36462 ;~ 24ED:2F4A
cs=0x24ed;eip=0x002f4d; 	J(CALL(sub_3649a,0));	// 112914 call    sub_3649A ;~ 24ED:2F4D
cs=0x24ed;eip=0x002f50; 	J(CALL(sub_364d2,0));	// 112915 call    sub_364D2 ;~ 24ED:2F50
cs=0x24ed;eip=0x002f53; 	X(PUSH(cs));	// 112916 push    cs ;~ 24ED:2F53
cs=0x24ed;eip=0x002f54; 	J(CALL(sub_33f81,m2c::kloc_33fb0));	// 112917 call    loc_33FB0 ;~ 24ED:2F54
cs=0x24ed;eip=0x002f57; 	X(POP(ds));	// 112918 pop     ds ;~ 24ED:2F57
cs=0x24ed;eip=0x002f58; 	J(CALL(sub_364d2,0));	// 112919 call    sub_364D2 ;~ 24ED:2F58
cs=0x24ed;eip=0x002f5b; 	J(CALL(sub_3649a,0));	// 112920 call    sub_3649A ;~ 24ED:2F5B
cs=0x24ed;eip=0x002f5e; 	J(CALL(sub_36462,0));	// 112921 call    sub_36462 ;~ 24ED:2F5E
cs=0x24ed;eip=0x002f61; 	J(RETF(0));	// 112922 retf ;~ 24ED:2F61
loc_36412:
	// 7506 
cs=0x24ed;eip=0x002f62; 	J(CALL(sub_364d2,0));	// 112927 call    sub_364D2 ;~ 24ED:2F62
cs=0x24ed;eip=0x002f65; 	J(CALL(sub_364d2,0));	// 112928 call    sub_364D2 ;~ 24ED:2F65
cs=0x24ed;eip=0x002f68; 	J(CALL(sub_364d2,0));	// 112929 call    sub_364D2 ;~ 24ED:2F68
cs=0x24ed;eip=0x002f6b; 	J(CALL(sub_3649a,0));	// 112930 call    sub_3649A ;~ 24ED:2F6B
cs=0x24ed;eip=0x002f6e; 	J(CALL(sub_3649a,0));	// 112931 call    sub_3649A ;~ 24ED:2F6E
cs=0x24ed;eip=0x002f71; 	J(CALL(sub_36462,0));	// 112932 call    sub_36462 ;~ 24ED:2F71
cs=0x24ed;eip=0x002f74; 	J(CALL(sub_36462,0));	// 112933 call    sub_36462 ;~ 24ED:2F74
cs=0x24ed;eip=0x002f77; 	J(RETF(0));	// 112934 retf ;~ 24ED:2F77
loc_36428:
	// 7507 
cs=0x24ed;eip=0x002f78; 	J(CALL(sub_35a05,0));	// 112939 call    sub_35A05 ;~ 24ED:2F78
cs=0x24ed;eip=0x002f7b; 	X(PUSH(ds));	// 112940 push    ds ;~ 24ED:2F7B
cs=0x24ed;eip=0x002f7c; 	T(MOV(ds, si));	// 112941 mov     ds, si ;~ 24ED:2F7C
cs=0x24ed;eip=0x002f7e; 	J(CALL(sub_36462,0));	// 112942 call    sub_36462 ;~ 24ED:2F7E
cs=0x24ed;eip=0x002f81; 	J(CALL(sub_3649a,0));	// 112943 call    sub_3649A ;~ 24ED:2F81
cs=0x24ed;eip=0x002f84; 	X(PUSH(cs));	// 112944 push    cs ;~ 24ED:2F84
cs=0x24ed;eip=0x002f85; 	J(CALL(sub_33f81,m2c::kloc_33fb0));	// 112945 call    loc_33FB0 ;~ 24ED:2F85
cs=0x24ed;eip=0x002f88; 	X(POP(ds));	// 112946 pop     ds ;~ 24ED:2F88
cs=0x24ed;eip=0x002f89; 	J(CALL(sub_3649a,0));	// 112947 call    sub_3649A ;~ 24ED:2F89
cs=0x24ed;eip=0x002f8c; 	J(CALL(sub_36462,0));	// 112948 call    sub_36462 ;~ 24ED:2F8C
cs=0x24ed;eip=0x002f8f; 	J(RETF(0));	// 112949 retf ;~ 24ED:2F8F
loc_36440:
	// 7508 
cs=0x24ed;eip=0x002f90; 	J(CALL(sub_35a05,0));	// 112954 call    sub_35A05 ;~ 24ED:2F90
cs=0x24ed;eip=0x002f93; 	X(PUSH(ds));	// 112955 push    ds ;~ 24ED:2F93
cs=0x24ed;eip=0x002f94; 	T(MOV(ds, si));	// 112956 mov     ds, si ;~ 24ED:2F94
cs=0x24ed;eip=0x002f96; 	J(CALL(sub_36462,0));	// 112957 call    sub_36462 ;~ 24ED:2F96
cs=0x24ed;eip=0x002f99; 	J(CALL(sub_36462,0));	// 112958 call    sub_36462 ;~ 24ED:2F99
cs=0x24ed;eip=0x002f9c; 	J(CALL(sub_36462,0));	// 112959 call    sub_36462 ;~ 24ED:2F9C
cs=0x24ed;eip=0x002f9f; 	X(PUSH(cs));	// 112960 push    cs ;~ 24ED:2F9F
cs=0x24ed;eip=0x002fa0; 	J(CALL(sub_33f81,m2c::kloc_33fb0));	// 112961 call    loc_33FB0 ;~ 24ED:2FA0
cs=0x24ed;eip=0x002fa3; 	X(POP(ds));	// 112962 pop     ds ;~ 24ED:2FA3
cs=0x24ed;eip=0x002fa4; 	J(CALL(sub_36462,0));	// 112963 call    sub_36462 ;~ 24ED:2FA4
cs=0x24ed;eip=0x002fa7; 	J(RETF(0));	// 112964 retf ;~ 24ED:2FA7

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_3616c: 	goto loc_3616c;
        case m2c::kloc_3617c: 	goto loc_3617c;
        case m2c::kloc_36196: 	goto loc_36196;
        case m2c::kloc_361a6: 	goto loc_361a6;
        case m2c::kloc_361d6: 	goto loc_361d6;
        case m2c::kloc_361de: 	goto loc_361de;
        case m2c::kloc_361e0: 	goto loc_361e0;
        case m2c::kloc_361e5: 	goto loc_361e5;
        case m2c::kloc_36205: 	goto loc_36205;
        case m2c::kloc_3621b: 	goto loc_3621b;
        case m2c::kloc_3622f: 	goto loc_3622f;
        case m2c::kloc_3623e: 	goto loc_3623e;
        case m2c::kloc_36253: 	goto loc_36253;
        case m2c::kloc_36261: 	goto loc_36261;
        case m2c::kloc_36264: 	goto loc_36264;
        case m2c::kloc_3626e: 	goto loc_3626e;
        case m2c::kloc_3627f: 	goto loc_3627f;
        case m2c::kloc_36283: 	goto loc_36283;
        case m2c::kloc_36298: 	goto loc_36298;
        case m2c::kloc_362a2: 	goto loc_362a2;
        case m2c::kloc_362b1: 	goto loc_362b1;
        case m2c::kloc_362b5: 	goto loc_362b5;
        case m2c::kloc_362d7: 	goto loc_362d7;
        case m2c::kloc_362e1: 	goto loc_362e1;
        case m2c::kloc_362eb: 	goto loc_362eb;
        case m2c::kloc_362ef: 	goto loc_362ef;
        case m2c::kloc_3638b: 	goto loc_3638b;
        case m2c::kloc_36397: 	goto loc_36397;
        case m2c::kloc_363ad: 	goto loc_363ad;
        case m2c::kloc_363b1: 	goto loc_363b1;
        case m2c::kloc_363c5: 	goto loc_363c5;
        case m2c::kloc_363c9: 	goto loc_363c9;
        case m2c::kloc_363d8: 	goto loc_363d8;
        case m2c::kloc_363dc: 	goto loc_363dc;
        case m2c::kloc_363f4: 	goto loc_363f4;
        case m2c::kloc_36412: 	goto loc_36412;
        case m2c::kloc_36428: 	goto loc_36428;
        case m2c::kloc_36440: 	goto loc_36440;
        case m2c::klocret_361e3: 	goto locret_361e3;
        case m2c::klocret_361e4: 	goto locret_361e4;
        case m2c::klocret_36260: 	goto locret_36260;
        case m2c::klocret_362cc: 	goto locret_362cc;
        case m2c::klocret_36306: 	goto locret_36306;
        case m2c::klocret_363f3: 	goto locret_363f3;
        case m2c::kret_24ed_2e1d: 	goto ret_24ed_2e1d;
        case m2c::kseg002_2cac_proc: 	goto seg002_2cac_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36462(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36462:
    _begin:
cs=0x24ed;eip=0x002fb2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 112983 mov     bx, [bp+0] ;~ 24ED:2FB2
loc_36465:
	// 7509 
cs=0x24ed;eip=0x002fb5; 	T(MOV(si, 0x2FA8));	// 112986 mov     si, 2FA8h ;~ 24ED:2FB5
loc_36468:
	// 7510 
cs=0x24ed;eip=0x002fb8; 	X(LODS(*(dw*)(raddr(cs,si)),si,2));	// 112989 lods    word ptr cs:[si] ;~ 24ED:2FB8
cs=0x24ed;eip=0x002fba; 	T(OR(ax, ax));	// 112990 or      ax, ax ;~ 24ED:2FBA
cs=0x24ed;eip=0x002fbc; 	J(JS(loc_36465));	// 112991 js      short loc_36465 ;~ 24ED:2FBC
cs=0x24ed;eip=0x002fbe; 	X(PUSH(si));	// 112992 push    si ;~ 24ED:2FBE
cs=0x24ed;eip=0x002fbf; 	T(MOV(si, ax));	// 112993 mov     si, ax ;~ 24ED:2FBF
cs=0x24ed;eip=0x002fc1; 	J(CALL(sub_3656a,0));	// 112994 call    sub_3656A ;~ 24ED:2FC1
cs=0x24ed;eip=0x002fc4; 	X(POP(si));	// 112995 pop     si ;~ 24ED:2FC4
cs=0x24ed;eip=0x002fc5; 	J(JC(loc_36468));	// 112996 jb      short loc_36468 ;~ 24ED:2FC5
cs=0x24ed;eip=0x002fc7; 	J(RETN(0));	// 112997 retn ;~ 24ED:2FC7

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_36465: 	goto loc_36465;
        case m2c::kloc_36468: 	goto loc_36468;
        case m2c::ksub_36462: 	goto sub_36462;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3649a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3649a:
    _begin:
cs=0x24ed;eip=0x002fea; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 113041 mov     bx, [bp+0] ;~ 24ED:2FEA
loc_3649d:
	// 7511 
cs=0x24ed;eip=0x002fed; 	T(MOV(si, 0x2FC8));	// 113044 mov     si, 2FC8h ;~ 24ED:2FED
loc_364a0:
	// 7512 
cs=0x24ed;eip=0x002ff0; 	X(LODS(*(dw*)(raddr(cs,si)),si,2));	// 113047 lods    word ptr cs:[si] ;~ 24ED:2FF0
cs=0x24ed;eip=0x002ff2; 	T(OR(ax, ax));	// 113048 or      ax, ax ;~ 24ED:2FF2
cs=0x24ed;eip=0x002ff4; 	J(JS(loc_3649d));	// 113049 js      short loc_3649D ;~ 24ED:2FF4
cs=0x24ed;eip=0x002ff6; 	X(PUSH(si));	// 113050 push    si ;~ 24ED:2FF6
cs=0x24ed;eip=0x002ff7; 	T(MOV(si, ax));	// 113051 mov     si, ax ;~ 24ED:2FF7
cs=0x24ed;eip=0x002ff9; 	J(CALL(sub_36532,0));	// 113052 call    sub_36532 ;~ 24ED:2FF9
cs=0x24ed;eip=0x002ffc; 	X(POP(si));	// 113053 pop     si ;~ 24ED:2FFC
cs=0x24ed;eip=0x002ffd; 	J(JC(loc_364a0));	// 113054 jb      short loc_364A0 ;~ 24ED:2FFD
cs=0x24ed;eip=0x002fff; 	J(RETN(0));	// 113055 retn ;~ 24ED:2FFF

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_3649d: 	goto loc_3649d;
        case m2c::kloc_364a0: 	goto loc_364a0;
        case m2c::ksub_3649a: 	goto sub_3649a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_364d2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_364d2:
    _begin:
cs=0x24ed;eip=0x003022; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 113099 mov     bx, [bp+0] ;~ 24ED:3022
loc_364d5:
	// 7513 
cs=0x24ed;eip=0x003025; 	T(MOV(si, 0x3000));	// 113102 mov     si, 3000h ;~ 24ED:3025
loc_364d8:
	// 7514 
cs=0x24ed;eip=0x003028; 	X(LODS(*(dw*)(raddr(cs,si)),si,2));	// 113105 lods    word ptr cs:[si] ;~ 24ED:3028
cs=0x24ed;eip=0x00302a; 	T(OR(ax, ax));	// 113106 or      ax, ax ;~ 24ED:302A
cs=0x24ed;eip=0x00302c; 	J(JS(loc_364d5));	// 113107 js      short loc_364D5 ;~ 24ED:302C
cs=0x24ed;eip=0x00302e; 	X(PUSH(si));	// 113108 push    si ;~ 24ED:302E
cs=0x24ed;eip=0x00302f; 	T(MOV(si, ax));	// 113109 mov     si, ax ;~ 24ED:302F
cs=0x24ed;eip=0x003031; 	J(CALL(sub_364e8,0));	// 113110 call    sub_364E8 ;~ 24ED:3031
cs=0x24ed;eip=0x003034; 	X(POP(si));	// 113111 pop     si ;~ 24ED:3034
cs=0x24ed;eip=0x003035; 	J(JC(loc_364d8));	// 113112 jb      short loc_364D8 ;~ 24ED:3035
cs=0x24ed;eip=0x003037; 	J(RETN(0));	// 113113 retn ;~ 24ED:3037

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_364d5: 	goto loc_364d5;
        case m2c::kloc_364d8: 	goto loc_364d8;
        case m2c::ksub_364d2: 	goto sub_364d2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_364e8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_364e8:
    _begin:
cs=0x24ed;eip=0x003038; 	X(PUSH(cx));	// 113121 push    cx ;~ 24ED:3038
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003039; 	T(MOV(di, *(dw*)(((db*)&word_33653))));	// 113122 mov     di, cs:word_33653 ;~ 24ED:3039
cs=0x24ed;eip=0x00303e; 	T(ADD(si, di));	// 113123 add     si, di ;~ 24ED:303E
cs=0x24ed;eip=0x003040; 	T(SHR(cx, 3));	// 113124 shr     cx, 3 ;~ 24ED:3040
loc_364f3:
	// 7515 
cs=0x24ed;eip=0x003043; 	X(PUSH(cx));	// 113127 push    cx ;~ 24ED:3043
cs=0x24ed;eip=0x003044; 	X(PUSH(si));	// 113128 push    si ;~ 24ED:3044
cs=0x24ed;eip=0x003045; 	X(PUSH(di));	// 113129 push    di ;~ 24ED:3045
cs=0x24ed;eip=0x003046; 	T(MOV(cx, 0x28));	// 113130 mov     cx, 28h ; '(' ;~ 24ED:3046
loc_364f9:
	// 7516 
cs=0x24ed;eip=0x003049; 	T(LODSB);	// 113133 lodsb ;~ 24ED:3049
cs=0x24ed;eip=0x00304a; 	T(ADD(si, 7));	// 113134 add     si, 7 ;~ 24ED:304A
cs=0x24ed;eip=0x00304d; 	T(MOV(ah, al));	// 113135 mov     ah, al ;~ 24ED:304D
cs=0x24ed;eip=0x00304f; 	T(MOV(dx, ax));	// 113136 mov     dx, ax ;~ 24ED:304F
cs=0x24ed;eip=0x003051; 	T(SHL(eax, 0x10));	// 113137 shl     eax, 10h ;~ 24ED:3051
cs=0x24ed;eip=0x003055; 	T(MOV(ax, dx));	// 113138 mov     ax, dx ;~ 24ED:3055
cs=0x24ed;eip=0x003057; 	T(MOV(dx, 8));	// 113139 mov     dx, 8 ;~ 24ED:3057
loc_3650a:
	// 7517 
cs=0x24ed;eip=0x00305a; 	X(STOSD);	// 113142 stosd ;~ 24ED:305A
cs=0x24ed;eip=0x00305c; 	X(STOSD);	// 113143 stosd ;~ 24ED:305C
cs=0x24ed;eip=0x00305e; 	T(ADD(di, 0x138));	// 113144 add     di, 138h ;~ 24ED:305E
cs=0x24ed;eip=0x003062; 	T(DEC(dx));	// 113145 dec     dx ;~ 24ED:3062
cs=0x24ed;eip=0x003063; 	J(JNZ(loc_3650a));	// 113146 jnz     short loc_3650A ;~ 24ED:3063
cs=0x24ed;eip=0x003065; 	T(SUB(di, 0x9F8));	// 113147 sub     di, 9F8h ;~ 24ED:3065
cs=0x24ed;eip=0x003069; 	J(LOOP(loc_364f9));	// 113148 loop    loc_364F9 ;~ 24ED:3069
cs=0x24ed;eip=0x00306b; 	X(POP(di));	// 113149 pop     di ;~ 24ED:306B
cs=0x24ed;eip=0x00306c; 	X(POP(si));	// 113150 pop     si ;~ 24ED:306C
cs=0x24ed;eip=0x00306d; 	X(POP(cx));	// 113151 pop     cx ;~ 24ED:306D
cs=0x24ed;eip=0x00306e; 	T(ADD(di, 0x0A00));	// 113152 add     di, 0A00h ;~ 24ED:306E
cs=0x24ed;eip=0x003072; 	T(ADD(si, 0x0A00));	// 113153 add     si, 0A00h ;~ 24ED:3072
cs=0x24ed;eip=0x003076; 	J(LOOP(loc_364f3));	// 113154 loop    loc_364F3 ;~ 24ED:3076
loc_36528:
	// 7518 
cs=0x24ed;eip=0x003078; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 113158 mov     ax, [bp+0] ;~ 24ED:3078
cs=0x24ed;eip=0x00307b; 	T(SUB(ax, bx));	// 113159 sub     ax, bx ;~ 24ED:307B
cs=0x24ed;eip=0x00307d; 	T(CMP(ax, 0x24));	// 113160 cmp     ax, 24h ; '$' ;~ 24ED:307D
cs=0x24ed;eip=0x003080; 	X(POP(cx));	// 113161 pop     cx ;~ 24ED:3080
cs=0x24ed;eip=0x003081; 	J(RETN(0));	// 113162 retn ;~ 24ED:3081

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_364f3: 	goto loc_364f3;
        case m2c::kloc_364f9: 	goto loc_364f9;
        case m2c::kloc_3650a: 	goto loc_3650a;
        case m2c::kloc_36528: 	goto loc_36528;
        case m2c::ksub_364e8: 	goto sub_364e8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36532(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36532:
    _begin:
cs=0x24ed;eip=0x003082; 	X(PUSH(cx));	// 113170 push    cx ;~ 24ED:3082
cs=0x24ed;eip=0x003083; 	T(SHR(cx, 2));	// 113171 shr     cx, 2 ;~ 24ED:3083
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003086; 	T(MOV(di, *(dw*)(((db*)&word_33653))));	// 113172 mov     di, cs:word_33653 ;~ 24ED:3086
cs=0x24ed;eip=0x00308b; 	T(ADD(si, di));	// 113173 add     si, di ;~ 24ED:308B
loc_3653d:
	// 7519 
cs=0x24ed;eip=0x00308d; 	X(PUSH(cx));	// 113176 push    cx ;~ 24ED:308D
cs=0x24ed;eip=0x00308e; 	X(PUSH(si));	// 113177 push    si ;~ 24ED:308E
cs=0x24ed;eip=0x00308f; 	X(PUSH(di));	// 113178 push    di ;~ 24ED:308F
cs=0x24ed;eip=0x003090; 	T(MOV(cx, 0x50));	// 113179 mov     cx, 50h ; 'P' ;~ 24ED:3090
loc_36543:
	// 7520 
cs=0x24ed;eip=0x003093; 	T(LODSB);	// 113182 lodsb ;~ 24ED:3093
cs=0x24ed;eip=0x003094; 	T(ADD(si, 3));	// 113183 add     si, 3 ;~ 24ED:3094
cs=0x24ed;eip=0x003097; 	T(MOV(ah, al));	// 113184 mov     ah, al ;~ 24ED:3097
cs=0x24ed;eip=0x003099; 	T(MOV(dx, 4));	// 113185 mov     dx, 4 ;~ 24ED:3099
loc_3654c:
	// 7521 
cs=0x24ed;eip=0x00309c; 	X(STOSW);	// 113188 stosw ;~ 24ED:309C
cs=0x24ed;eip=0x00309d; 	X(STOSW);	// 113189 stosw ;~ 24ED:309D
cs=0x24ed;eip=0x00309e; 	T(ADD(di, 0x13C));	// 113190 add     di, 13Ch ;~ 24ED:309E
cs=0x24ed;eip=0x0030a2; 	T(DEC(dx));	// 113191 dec     dx ;~ 24ED:30A2
cs=0x24ed;eip=0x0030a3; 	J(JNZ(loc_3654c));	// 113192 jnz     short loc_3654C ;~ 24ED:30A3
cs=0x24ed;eip=0x0030a5; 	T(SUB(di, 0x4FC));	// 113193 sub     di, 4FCh ;~ 24ED:30A5
cs=0x24ed;eip=0x0030a9; 	J(LOOP(loc_36543));	// 113194 loop    loc_36543 ;~ 24ED:30A9
cs=0x24ed;eip=0x0030ab; 	X(POP(di));	// 113195 pop     di ;~ 24ED:30AB
cs=0x24ed;eip=0x0030ac; 	X(POP(si));	// 113196 pop     si ;~ 24ED:30AC
cs=0x24ed;eip=0x0030ad; 	X(POP(cx));	// 113197 pop     cx ;~ 24ED:30AD
cs=0x24ed;eip=0x0030ae; 	T(ADD(si, 0x500));	// 113198 add     si, 500h ;~ 24ED:30AE
cs=0x24ed;eip=0x0030b2; 	T(ADD(di, 0x500));	// 113199 add     di, 500h ;~ 24ED:30B2
cs=0x24ed;eip=0x0030b6; 	J(LOOP(loc_3653d));	// 113200 loop    loc_3653D ;~ 24ED:30B6
cs=0x24ed;eip=0x0030b8; 	J(return sub_364e8(m2c::kloc_36528, _state););	// 113201 jmp     short loc_36528 ;~ 24ED:30B8

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_3653d: 	goto loc_3653d;
        case m2c::kloc_36543: 	goto loc_36543;
        case m2c::kloc_3654c: 	goto loc_3654c;
        case m2c::ksub_36532: 	goto sub_36532;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3656a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3656a:
    _begin:
cs=0x24ed;eip=0x0030ba; 	X(PUSH(cx));	// 113209 push    cx ;~ 24ED:30BA
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0030bb; 	T(MOV(di, *(dw*)(((db*)&word_33653))));	// 113210 mov     di, cs:word_33653 ;~ 24ED:30BB
cs=0x24ed;eip=0x0030c0; 	T(ADD(si, di));	// 113211 add     si, di ;~ 24ED:30C0
cs=0x24ed;eip=0x0030c2; 	T(SHR(cx, 1));	// 113212 shr     cx, 1 ;~ 24ED:30C2
loc_36574:
	// 7522 
cs=0x24ed;eip=0x0030c4; 	X(PUSH(cx));	// 113215 push    cx ;~ 24ED:30C4
cs=0x24ed;eip=0x0030c5; 	X(PUSH(si));	// 113216 push    si ;~ 24ED:30C5
cs=0x24ed;eip=0x0030c6; 	X(PUSH(di));	// 113217 push    di ;~ 24ED:30C6
cs=0x24ed;eip=0x0030c7; 	T(MOV(cx, 0x0A0));	// 113218 mov     cx, 0A0h ; ' ' ;~ 24ED:30C7
loc_3657a:
	// 7523 
cs=0x24ed;eip=0x0030ca; 	T(LODSB);	// 113221 lodsb ;~ 24ED:30CA
cs=0x24ed;eip=0x0030cb; 	T(INC(si));	// 113222 inc     si ;~ 24ED:30CB
cs=0x24ed;eip=0x0030cc; 	T(MOV(ah, al));	// 113223 mov     ah, al ;~ 24ED:30CC
cs=0x24ed;eip=0x0030ce; 	X(MOV(*(dw*)(raddr(es,di+0x140)), ax));	// 113224 mov     es:[di+140h], ax ;~ 24ED:30CE
cs=0x24ed;eip=0x0030d3; 	X(STOSW);	// 113225 stosw ;~ 24ED:30D3
cs=0x24ed;eip=0x0030d4; 	J(LOOP(loc_3657a));	// 113226 loop    loc_3657A ;~ 24ED:30D4
cs=0x24ed;eip=0x0030d6; 	X(POP(di));	// 113227 pop     di ;~ 24ED:30D6
cs=0x24ed;eip=0x0030d7; 	X(POP(si));	// 113228 pop     si ;~ 24ED:30D7
cs=0x24ed;eip=0x0030d8; 	X(POP(cx));	// 113229 pop     cx ;~ 24ED:30D8
cs=0x24ed;eip=0x0030d9; 	T(ADD(si, 0x280));	// 113230 add     si, 280h ;~ 24ED:30D9
cs=0x24ed;eip=0x0030dd; 	T(ADD(di, 0x280));	// 113231 add     di, 280h ;~ 24ED:30DD
cs=0x24ed;eip=0x0030e1; 	J(LOOP(loc_36574));	// 113232 loop    loc_36574 ;~ 24ED:30E1
cs=0x24ed;eip=0x0030e3; 	J(return sub_364e8(m2c::kloc_36528, _state););	// 113233 jmp     short loc_36528 ;~ 24ED:30E3

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_36574: 	goto loc_36574;
        case m2c::kloc_3657a: 	goto loc_3657a;
        case m2c::ksub_3656a: 	goto sub_3656a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool nullsub_28(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    nullsub_28:
    _begin:
cs=0x24ed;eip=0x0030e5; 	J(RETF(0));	// 113242 retf ;~ 24ED:30E5

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::knullsub_28: 	goto nullsub_28;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool nullsub_29(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    nullsub_29:
    _begin:
cs=0x24ed;eip=0x0030e6; 	J(RETF(0));	// 113251 retf ;~ 24ED:30E6

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::knullsub_29: 	goto nullsub_29;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group145(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group145:
    _begin:
seg002_310f_proc:
	// 113298 
loc_365bf:
	// 7524 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00310f; 	T(MOV(di, *(dw*)(((db*)&word_365bd))));	// 113299 mov     di, cs:word_365BD ;~ 24ED:310F
cs=0x24ed;eip=0x003114; 	T(XOR(ax, ax));	// 113300 xor     ax, ax ;~ 24ED:3114
cs=0x24ed;eip=0x003116; 	T(MOV(cx, 0x12C0));	// 113301 mov     cx, 12C0h ;~ 24ED:3116
	// 113302 rep stosw ;~ 24ED:3119
cs=0x24ed;eip=0x003119; 	X(	REP STOSW);	// 113302 rep stosw ;~ 24ED:3119
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00311b; 	T(MOV(ds, *(dw*)(((db*)&word_359a6))));	// 113303 mov     ds, cs:word_359A6 ;~ 24ED:311B
cs=0x24ed;eip=0x003120; 	X(PUSH(cs));	// 113304 push    cs ;~ 24ED:3120
cs=0x24ed;eip=0x003121; 	J(CALL(sub_33f81,m2c::kloc_33fb0));	// 113305 call    loc_33FB0 ;~ 24ED:3121
cs=0x24ed;eip=0x003124; 	J(RETN(0));	// 113306 retn ;~ 24ED:3124
loc_365d5:
	// 7525 
cs=0x24ed;eip=0x003125; 	J(CALL(sub_35a05,0));	// 113313 call    sub_35A05 ;~ 24ED:3125
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003128; 	T(MOV(ds, *(dw*)(((db*)&word_359a4))));	// 113314 mov     ds, cs:word_359A4 ;~ 24ED:3128
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00312d; 	T(MOV(ax, *(dw*)(((db*)&word_33653))));	// 113315 mov     ax, cs:word_33653 ;~ 24ED:312D
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003131; 	X(MOV(*(dw*)(((db*)&word_365bd)), ax));	// 113316 mov     cs:word_365BD, ax ;~ 24ED:3131
cs=0x24ed;eip=0x003135; 	T(OR(dl, dl));	// 113317 or      dl, dl ;~ 24ED:3135
cs=0x24ed;eip=0x003137; 	T(MOV(cx, 0x101));	// 113318 mov     cx, 101h ;~ 24ED:3137
cs=0x24ed;eip=0x00313a; 	J(JS(loc_365ef));	// 113319 js      short loc_365EF ;~ 24ED:313A
cs=0x24ed;eip=0x00313c; 	T(MOV(cx, 0x0FF11));	// 113320 mov     cx, 0FF11h ;~ 24ED:313C
loc_365ef:
	// 7526 
cs=0x24ed;eip=0x00313f; 	X(PUSH(*(dw*)(raddr(ss,bp+0))));	// 113324 push    word ptr [bp+0] ;~ 24ED:313F
cs=0x24ed;eip=0x003142; 	X(PUSH(cx));	// 113325 push    cx ;~ 24ED:3142
cs=0x24ed;eip=0x003143; 	X(PUSH(bp));	// 113326 push    bp ;~ 24ED:3143
cs=0x24ed;eip=0x003144; 	T(XOR(ch, ch));	// 113327 xor     ch, ch ;~ 24ED:3144
cs=0x24ed;eip=0x003146; 	T(MOV(bx, cx));	// 113328 mov     bx, cx ;~ 24ED:3146
cs=0x24ed;eip=0x003148; 	T(SHL(bx, 1));	// 113329 shl     bx, 1 ;~ 24ED:3148
cs=0x24ed;eip=0x00314a; 	T(MOV(ax, *(dw*)(raddr(cs,bx+0x30E5))));	// 113330 mov     ax, cs:[bx+30E5h] ;~ 24ED:314A
cs=0x24ed;eip=0x00314f; 	J(CALL(sub_36612,0));	// 113331 call    sub_36612 ;~ 24ED:314F
cs=0x24ed;eip=0x003152; 	X(POP(bp));	// 113332 pop     bp ;~ 24ED:3152
cs=0x24ed;eip=0x003153; 	X(POP(cx));	// 113333 pop     cx ;~ 24ED:3153
cs=0x24ed;eip=0x003154; 	X(POP(bx));	// 113334 pop     bx ;~ 24ED:3154
cs=0x24ed;eip=0x003155; 	J(CALL(sub_359ac,0));	// 113335 call    sub_359AC ;~ 24ED:3155
cs=0x24ed;eip=0x003158; 	T(ADD(cl, ch));	// 113336 add     cl, ch ;~ 24ED:3158
cs=0x24ed;eip=0x00315a; 	J(JZ(locret_36611));	// 113337 jz      short locret_36611 ;~ 24ED:315A
cs=0x24ed;eip=0x00315c; 	T(CMP(cl, 0x11));	// 113338 cmp     cl, 11h ;~ 24ED:315C
cs=0x24ed;eip=0x00315f; 	J(JC(loc_365ef));	// 113339 jb      short loc_365EF ;~ 24ED:315F
locret_36611:
	// 7527 
cs=0x24ed;eip=0x003161; 	J(RETF(0));	// 113342 retf ;~ 24ED:3161
sub_36612:
	// 113348 
cs=0x24ed;eip=0x003162; 	T(CMP(cl, 9));	// 113352 cmp     cl, 9 ;~ 24ED:3162
cs=0x24ed;eip=0x003165; 	J(JZ(loc_365bf));	// 113353 jz      short loc_365BF ;~ 24ED:3165
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003167; 	X(MOV(*(dw*)(((db*)&word_365b9)), ax));	// 113354 mov     cs:word_365B9, ax ;~ 24ED:3167
cs=0x24ed;eip=0x00316b; 	T(MOV(di, 0x5DC0));	// 113355 mov     di, 5DC0h ;~ 24ED:316B
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00316e; 	T(ADD(di, *(dw*)(((db*)&word_33653))));	// 113356 add     di, cs:word_33653 ;~ 24ED:316E
cs=0x24ed;eip=0x003173; 	T(bp = di+0x140);	// 113357 lea     bp, [di+140h] ;~ 24ED:3173
cs=0x24ed;eip=0x003177; 	T(MOV(si, di));	// 113358 mov     si, di ;~ 24ED:3177
cs=0x24ed;eip=0x003179; 	T(MOV(bx, bp));	// 113359 mov     bx, bp ;~ 24ED:3179
cs=0x24ed;eip=0x00317b; 	T(MOV(dx, 0x4C));	// 113360 mov     dx, 4Ch ; 'L' ;~ 24ED:317B
cs=0x24ed;eip=0x00317e; 	J(JMP(loc_36638));	// 113361 jmp     short loc_36638 ;~ 24ED:317E
loc_36630:
	// 7528 
cs=0x24ed;eip=0x003180; 	T(SUB(si, 0x280));	// 113366 sub     si, 280h ;~ 24ED:3180
cs=0x24ed;eip=0x003184; 	T(SUB(di, 0x280));	// 113367 sub     di, 280h ;~ 24ED:3184
loc_36638:
	// 7529 
cs=0x24ed;eip=0x003188; 	T(DEC(dx));	// 113370 dec     dx ;~ 24ED:3188
cs=0x24ed;eip=0x003189; 	J(JS(loc_3666c));	// 113371 js      short loc_3666C ;~ 24ED:3189
cs=0x24ed;eip=0x00318b; 	T(MOV(cx, 0x50));	// 113372 mov     cx, 50h ; 'P' ;~ 24ED:318B
	// 113373 rep movsd ;~ 24ED:318E
cs=0x24ed;eip=0x00318e; 	X(	REP MOVSD);	// 113373 rep movsd ;~ 24ED:318E
cs=0x24ed;eip=0x003191; 	T(XCHG(di, bp));	// 113374 xchg    di, bp ;~ 24ED:3191
cs=0x24ed;eip=0x003193; 	T(XCHG(si, bx));	// 113375 xchg    si, bx ;~ 24ED:3193
cs=0x24ed;eip=0x003195; 	T(MOV(cx, 0x50));	// 113376 mov     cx, 50h ; 'P' ;~ 24ED:3195
	// 113377 rep movsd ;~ 24ED:3198
cs=0x24ed;eip=0x003198; 	X(	REP MOVSD);	// 113377 rep movsd ;~ 24ED:3198
cs=0x24ed;eip=0x00319b; 	T(XCHG(di, bp));	// 113378 xchg    di, bp ;~ 24ED:319B
cs=0x24ed;eip=0x00319d; 	T(XCHG(si, bx));	// 113379 xchg    si, bx ;~ 24ED:319D
cs=0x24ed;eip=0x00319f; 	T(DEC(al));	// 113380 dec     al ;~ 24ED:319F
cs=0x24ed;eip=0x0031a1; 	J(JNZ(loc_36630));	// 113381 jnz     short loc_36630 ;~ 24ED:31A1
cs=0x24ed;eip=0x0031a3; 	T(MOV(cx, 0x140));	// 113382 mov     cx, 140h ;~ 24ED:31A3
cs=0x24ed;eip=0x0031a6; 	T(SUB(dl, ah));	// 113383 sub     dl, ah ;~ 24ED:31A6
cs=0x24ed;eip=0x0031a8; 	J(JBE(loc_36668));	// 113384 jbe     short loc_36668 ;~ 24ED:31A8
loc_3665a:
	// 7530 
cs=0x24ed;eip=0x0031aa; 	T(SUB(si, cx));	// 113387 sub     si, cx ;~ 24ED:31AA
cs=0x24ed;eip=0x0031ac; 	T(ADD(bx, cx));	// 113388 add     bx, cx ;~ 24ED:31AC
cs=0x24ed;eip=0x0031ae; 	T(DEC(ah));	// 113389 dec     ah ;~ 24ED:31AE
cs=0x24ed;eip=0x0031b0; 	J(JNZ(loc_3665a));	// 113390 jnz     short loc_3665A ;~ 24ED:31B0
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0031b2; 	T(MOV(ax, *(dw*)(((db*)&word_365b9))));	// 113391 mov     ax, cs:word_365B9 ;~ 24ED:31B2
cs=0x24ed;eip=0x0031b6; 	J(JMP(loc_36630));	// 113392 jmp     short loc_36630 ;~ 24ED:31B6
loc_36668:
	// 7531 
cs=0x24ed;eip=0x0031b8; 	T(SUB(di, 0x280));	// 113396 sub     di, 280h ;~ 24ED:31B8
loc_3666c:
	// 7532 
cs=0x24ed;eip=0x0031bc; 	T(MOV(bx, di));	// 113399 mov     bx, di ;~ 24ED:31BC
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0031be; 	X(XCHG(bx, *(dw*)(((db*)&word_365bd))));	// 113400 xchg    bx, cs:word_365BD ;~ 24ED:31BE
cs=0x24ed;eip=0x0031c3; 	T(XOR(eax, eax));	// 113401 xor     eax, eax ;~ 24ED:31C3
loc_36676:
	// 7533 
cs=0x24ed;eip=0x0031c6; 	T(CMP(bx, di));	// 113404 cmp     bx, di ;~ 24ED:31C6
cs=0x24ed;eip=0x0031c8; 	J(JG(locret_36691));	// 113405 jg      locret_36691 ;~ 24ED:31C8
cs=0x24ed;eip=0x0031cc; 	T(MOV(cx, 0x50));	// 113406 mov     cx, 50h ; 'P' ;~ 24ED:31CC
cs=0x24ed;eip=0x0031cf; 	T(XCHG(bp, di));	// 113407 xchg    bp, di ;~ 24ED:31CF
	// 113408 rep stosd ;~ 24ED:31D1
cs=0x24ed;eip=0x0031d1; 	X(	REP STOSD);	// 113408 rep stosd ;~ 24ED:31D1
cs=0x24ed;eip=0x0031d4; 	T(XCHG(bp, di));	// 113409 xchg    bp, di ;~ 24ED:31D4
cs=0x24ed;eip=0x0031d6; 	T(MOV(cl, 0x50));	// 113410 mov     cl, 50h ; 'P' ;~ 24ED:31D6
	// 113411 rep stosd ;~ 24ED:31D8
cs=0x24ed;eip=0x0031d8; 	X(	REP STOSD);	// 113411 rep stosd ;~ 24ED:31D8
cs=0x24ed;eip=0x0031db; 	T(SUB(di, 0x280));	// 113412 sub     di, 280h ;~ 24ED:31DB
cs=0x24ed;eip=0x0031df; 	J(JMP(loc_36676));	// 113413 jmp     short loc_36676 ;~ 24ED:31DF
locret_36691:
	// 7534 
cs=0x24ed;eip=0x0031e1; 	J(RETN(0));	// 113417 retn ;~ 24ED:31E1

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_365bf: 	goto loc_365bf;
        case m2c::kloc_365d5: 	goto loc_365d5;
        case m2c::kloc_365ef: 	goto loc_365ef;
        case m2c::kloc_36630: 	goto loc_36630;
        case m2c::kloc_36638: 	goto loc_36638;
        case m2c::kloc_3665a: 	goto loc_3665a;
        case m2c::kloc_36668: 	goto loc_36668;
        case m2c::kloc_3666c: 	goto loc_3666c;
        case m2c::kloc_36676: 	goto loc_36676;
        case m2c::klocret_36611: 	goto locret_36611;
        case m2c::klocret_36691: 	goto locret_36691;
        case m2c::ksub_36612: 	goto sub_36612;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_366ac(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_366ac:
    _begin:
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0031fc; 	X(MOV(*(dw*)(((db*)&word_359a4)), si));	// 113448 mov     cs:word_359A4, si ;~ 24ED:31FC
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003201; 	X(MOV(*(dw*)(((db*)&word_359a6)), ds));	// 113449 mov     cs:word_359A6, ds ;~ 24ED:3201
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003206; 	X(MOV(*(dw*)(((db*)&word_359a8)), es));	// 113450 mov     cs:word_359A8, es ;~ 24ED:3206
cs=0x24ed;eip=0x00320b; 	T(AND(ax, 0x0FE));	// 113451 and     ax, 0FEh ;~ 24ED:320B
loc_366be:
	// 7535 
cs=0x24ed;eip=0x00320e; 	T(CMP(ax, 0x1A));	// 113454 cmp     ax, 1Ah ;~ 24ED:320E
cs=0x24ed;eip=0x003211; 	J(JC(loc_366c8));	// 113455 jb      short loc_366C8 ;~ 24ED:3211
cs=0x24ed;eip=0x003213; 	T(SUB(ax, 0x1A));	// 113456 sub     ax, 1Ah ;~ 24ED:3213
cs=0x24ed;eip=0x003216; 	J(JMP(loc_366be));	// 113457 jmp     short loc_366BE ;~ 24ED:3216
loc_366c8:
	// 7536 
cs=0x24ed;eip=0x003218; 	T(MOV(bx, ax));	// 113461 mov     bx, ax ;~ 24ED:3218
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00321a; __disp=*(dw*)(((db*)&off_36692)+bx);
	J(return __dispatch_call(__disp, _state););	// 113462 jmp     cs:off_36692[bx] ;~ 24ED:321A
loc_366cf:
	// 7537 
cs=0x24ed;eip=0x00321f; 	X(PUSH(bp));	// 113467 push    bp ;~ 24ED:321F
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003220; 	T(MOV(es, *(dw*)(((db*)&word_359a4))));	// 113468 mov     es, cs:word_359A4 ;~ 24ED:3220
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003225; 	T(MOV(ds, *(dw*)(((db*)&word_359a8))));	// 113470 mov     ds, cs:word_359A8 ;~ 24ED:3225
cs=0x24ed;eip=0x00322a; 	X(PUSH(ds));	// 113471 push    ds ;~ 24ED:322A
cs=0x24ed;eip=0x00322b; 	X(PUSH(es));	// 113472 push    es ;~ 24ED:322B
cs=0x24ed;eip=0x00322c; 	T(MOV(dx, 0x5C));	// 113473 mov     dx, 5Ch ; '\' ;~ 24ED:322C
cs=0x24ed;eip=0x00322f; 	T(MOV(bx, 0x9F));	// 113474 mov     bx, 9Fh ; 'Ÿ' ;~ 24ED:322F
cs=0x24ed;eip=0x003232; 	T(MOV(bp, 0x88));	// 113475 mov     bp, 88h ; 'ˆ' ;~ 24ED:3232
cs=0x24ed;eip=0x003235; 	T(MOV(ax, 0x29));	// 113476 mov     ax, 29h ; ')' ;~ 24ED:3235
cs=0x24ed;eip=0x003238; 	X(PUSH(cs));	// 113477 push    cs ;~ 24ED:3238
cs=0x24ed;eip=0x003239; 	J(CALL(sub_34fa7,0));	// 113478 call    near ptr sub_34FA7 ;~ 24ED:3239
cs=0x24ed;eip=0x00323c; 	X(POP(ds));	// 113479 pop     ds ;~ 24ED:323C
cs=0x24ed;eip=0x00323d; 	X(POP(es));	// 113480 pop     es ;~ 24ED:323D
cs=0x24ed;eip=0x00323e; 	X(POP(bp));	// 113481 pop     bp ;~ 24ED:323E
cs=0x24ed;eip=0x00323f; 	T(XOR(dx, dx));	// 113482 xor     dx, dx ;~ 24ED:323F
cs=0x24ed;eip=0x003241; 	T(OR(dl, dl));	// 113483 or      dl, dl ;~ 24ED:3241
cs=0x24ed;eip=0x003243; 	T(MOV(cx, 0x101));	// 113484 mov     cx, 101h ;~ 24ED:3243
cs=0x24ed;eip=0x003246; 	J(JS(loc_366fb));	// 113485 js      short loc_366FB ;~ 24ED:3246
cs=0x24ed;eip=0x003248; 	T(MOV(cx, 0x0FF11));	// 113486 mov     cx, 0FF11h ;~ 24ED:3248
loc_366fb:
	// 7538 
cs=0x24ed;eip=0x00324b; 	X(PUSH(*(dw*)(raddr(ss,bp+0))));	// 113490 push    word ptr [bp+0] ;~ 24ED:324B
cs=0x24ed;eip=0x00324e; 	X(PUSH(cx));	// 113491 push    cx ;~ 24ED:324E
cs=0x24ed;eip=0x00324f; 	X(PUSH(bp));	// 113492 push    bp ;~ 24ED:324F
cs=0x24ed;eip=0x003250; 	T(XOR(ch, ch));	// 113493 xor     ch, ch ;~ 24ED:3250
cs=0x24ed;eip=0x003252; 	T(MOV(bx, cx));	// 113494 mov     bx, cx ;~ 24ED:3252
cs=0x24ed;eip=0x003254; 	T(SHL(bx, 1));	// 113495 shl     bx, 1 ;~ 24ED:3254
cs=0x24ed;eip=0x003256; 	T(MOV(ax, *(dw*)(raddr(cs,bx+0x30E5))));	// 113496 mov     ax, cs:[bx+30E5h] ;~ 24ED:3256
cs=0x24ed;eip=0x00325b; 	J(CALL(sub_3676d,0));	// 113497 call    sub_3676D ;~ 24ED:325B
cs=0x24ed;eip=0x00325e; 	X(POP(bp));	// 113498 pop     bp ;~ 24ED:325E
cs=0x24ed;eip=0x00325f; 	X(POP(cx));	// 113499 pop     cx ;~ 24ED:325F
cs=0x24ed;eip=0x003260; 	X(POP(bx));	// 113500 pop     bx ;~ 24ED:3260
cs=0x24ed;eip=0x003261; 	J(CALL(sub_359ac,0));	// 113501 call    sub_359AC ;~ 24ED:3261
cs=0x24ed;eip=0x003264; 	T(ADD(cl, ch));	// 113502 add     cl, ch ;~ 24ED:3264
cs=0x24ed;eip=0x003266; 	J(JZ(loc_3671d));	// 113503 jz      short loc_3671D ;~ 24ED:3266
cs=0x24ed;eip=0x003268; 	T(CMP(cl, 0x11));	// 113504 cmp     cl, 11h ;~ 24ED:3268
cs=0x24ed;eip=0x00326b; 	J(JC(loc_366fb));	// 113505 jb      short loc_366FB ;~ 24ED:326B
loc_3671d:
	// 7539 
cs=0x24ed;eip=0x00326d; 	T(MOV(dx, 0x5C));	// 113508 mov     dx, 5Ch ; '\' ;~ 24ED:326D
cs=0x24ed;eip=0x003270; 	T(MOV(bx, 0x9F));	// 113509 mov     bx, 9Fh ; 'Ÿ' ;~ 24ED:3270
cs=0x24ed;eip=0x003273; 	T(MOV(bp, 0x88));	// 113510 mov     bp, 88h ; 'ˆ' ;~ 24ED:3273
cs=0x24ed;eip=0x003276; 	T(MOV(ax, 0x29));	// 113511 mov     ax, 29h ; ')' ;~ 24ED:3276
cs=0x24ed;eip=0x003279; 	J(return sub_34fa7(0, _state););	// 113512 jmp     near ptr sub_34FA7 ;~ 24ED:3279

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_366be: 	goto loc_366be;
        case m2c::kloc_366c8: 	goto loc_366c8;
        case m2c::kloc_366cf: 	goto loc_366cf;
        case m2c::kloc_366fb: 	goto loc_366fb;
        case m2c::kloc_3671d: 	goto loc_3671d;
        case m2c::ksub_366ac: 	goto sub_366ac;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group146(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group146:
    _begin:
seg002_327c_proc:
	// 113519 
loc_3672c:
	// 7540 
cs=0x24ed;eip=0x00327c; 	T(MOV(di, 0x0C71C));	// 113520 mov     di, 0C71Ch ;~ 24ED:327C
cs=0x24ed;eip=0x00327f; 	T(MOV(dx, 0x10));	// 113521 mov     dx, 10h ;~ 24ED:327F
cs=0x24ed;eip=0x003282; 	T(MOV(ax, 0x0FEFE));	// 113522 mov     ax, 0FEFEh ;~ 24ED:3282
loc_36735:
	// 7541 
cs=0x24ed;eip=0x003285; 	T(MOV(cx, 0x44));	// 113525 mov     cx, 44h ; 'D' ;~ 24ED:3285
	// 113526 rep stosw ;~ 24ED:3288
cs=0x24ed;eip=0x003288; 	X(	REP STOSW);	// 113526 rep stosw ;~ 24ED:3288
cs=0x24ed;eip=0x00328a; 	T(ADD(di, 0x0B8));	// 113527 add     di, 0B8h ; '¸' ;~ 24ED:328A
cs=0x24ed;eip=0x00328e; 	T(DEC(dx));	// 113528 dec     dx ;~ 24ED:328E
cs=0x24ed;eip=0x00328f; 	J(JNZ(loc_36735));	// 113529 jnz     short loc_36735 ;~ 24ED:328F
cs=0x24ed;eip=0x003291; 	T(MOV(dx, 8));	// 113530 mov     dx, 8 ;~ 24ED:3291
cs=0x24ed;eip=0x003294; 	T(MOV(ax, 0x0F208));	// 113531 mov     ax, 0F208h ;~ 24ED:3294
loc_36747:
	// 7542 
cs=0x24ed;eip=0x003297; 	T(MOV(cx, 0x44));	// 113534 mov     cx, 44h ; 'D' ;~ 24ED:3297
	// 113535 rep stosw ;~ 24ED:329A
cs=0x24ed;eip=0x00329a; 	X(	REP STOSW);	// 113535 rep stosw ;~ 24ED:329A
cs=0x24ed;eip=0x00329c; 	T(ADD(di, 0x0B8));	// 113536 add     di, 0B8h ; '¸' ;~ 24ED:329C
cs=0x24ed;eip=0x0032a0; 	T(XCHG(al, ah));	// 113537 xchg    al, ah ;~ 24ED:32A0
cs=0x24ed;eip=0x0032a2; 	T(DEC(dx));	// 113538 dec     dx ;~ 24ED:32A2
cs=0x24ed;eip=0x0032a3; 	J(JNZ(loc_36747));	// 113539 jnz     short loc_36747 ;~ 24ED:32A3
cs=0x24ed;eip=0x0032a5; 	T(MOV(dx, 0x10));	// 113540 mov     dx, 10h ;~ 24ED:32A5
cs=0x24ed;eip=0x0032a8; 	T(MOV(ax, 0x0FEFE));	// 113541 mov     ax, 0FEFEh ;~ 24ED:32A8
loc_3675b:
	// 7543 
cs=0x24ed;eip=0x0032ab; 	T(MOV(cx, 0x44));	// 113544 mov     cx, 44h ; 'D' ;~ 24ED:32AB
	// 113545 rep stosw ;~ 24ED:32AE
cs=0x24ed;eip=0x0032ae; 	X(	REP STOSW);	// 113545 rep stosw ;~ 24ED:32AE
cs=0x24ed;eip=0x0032b0; 	T(ADD(di, 0x0B8));	// 113546 add     di, 0B8h ; '¸' ;~ 24ED:32B0
cs=0x24ed;eip=0x0032b4; 	T(DEC(dx));	// 113547 dec     dx ;~ 24ED:32B4
cs=0x24ed;eip=0x0032b5; 	J(JNZ(loc_3675b));	// 113548 jnz     short loc_3675B ;~ 24ED:32B5
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0032b7; 	T(MOV(ds, *(dw*)(((db*)&word_359a6))));	// 113549 mov     ds, cs:word_359A6 ;~ 24ED:32B7
cs=0x24ed;eip=0x0032bc; 	J(RETN(0));	// 113551 retn ;~ 24ED:32BC
sub_3676d:
	// 113557 
cs=0x24ed;eip=0x0032bd; 	T(CMP(cl, 9));	// 113562 cmp     cl, 9 ;~ 24ED:32BD
cs=0x24ed;eip=0x0032c0; 	J(JZ(loc_3672c));	// 113563 jz      short loc_3672C ;~ 24ED:32C0
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0032c2; 	X(MOV(*(dw*)(((db*)&word_365bb)), cx));	// 113564 mov     cs:word_365BB, cx ;~ 24ED:32C2
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0032c7; 	X(MOV(*(dw*)(((db*)&word_365b9)), ax));	// 113565 mov     cs:word_365B9, ax ;~ 24ED:32C7
cs=0x24ed;eip=0x0032cb; 	T(MOV(di, 0x0E01C));	// 113566 mov     di, 0E01Ch ;~ 24ED:32CB
cs=0x24ed;eip=0x0032ce; 	T(bp = di-0x140);	// 113567 lea     bp, [di-140h] ;~ 24ED:32CE
cs=0x24ed;eip=0x0032d2; 	T(MOV(cx, 0x44));	// 113568 mov     cx, 44h ; 'D' ;~ 24ED:32D2
cs=0x24ed;eip=0x0032d5; 	T(MOV(si, di));	// 113569 mov     si, di ;~ 24ED:32D5
	// 113570 rep movsw ;~ 24ED:32D7
cs=0x24ed;eip=0x0032d7; 	X(	REP MOVSW);	// 113570 rep movsw ;~ 24ED:32D7
cs=0x24ed;eip=0x0032d9; 	T(ADD(di, 0x0B8));	// 113571 add     di, 0B8h ; '¸' ;~ 24ED:32D9
cs=0x24ed;eip=0x0032dd; 	T(MOV(si, di));	// 113572 mov     si, di ;~ 24ED:32DD
cs=0x24ed;eip=0x0032df; 	T(MOV(bx, bp));	// 113573 mov     bx, bp ;~ 24ED:32DF
cs=0x24ed;eip=0x0032e1; 	T(MOV(dx, 0x14));	// 113574 mov     dx, 14h ;~ 24ED:32E1
cs=0x24ed;eip=0x0032e4; 	J(JMP(loc_367a6));	// 113575 jmp     short loc_367A6 ;~ 24ED:32E4
loc_36796:
	// 7544 
cs=0x24ed;eip=0x0032e6; 	T(SUB(si, 0x1C8));	// 113580 sub     si, 1C8h ;~ 24ED:32E6
cs=0x24ed;eip=0x0032ea; 	T(SUB(di, 0x1C8));	// 113581 sub     di, 1C8h ;~ 24ED:32EA
cs=0x24ed;eip=0x0032ee; 	T(ADD(bx, 0x0B8));	// 113582 add     bx, 0B8h ; '¸' ;~ 24ED:32EE
cs=0x24ed;eip=0x0032f2; 	T(ADD(bp, 0x0B8));	// 113583 add     bp, 0B8h ; '¸' ;~ 24ED:32F2
loc_367a6:
	// 7545 
cs=0x24ed;eip=0x0032f6; 	T(DEC(dx));	// 113586 dec     dx ;~ 24ED:32F6
cs=0x24ed;eip=0x0032f7; 	J(JS(loc_367dc));	// 113587 js      short loc_367DC ;~ 24ED:32F7
cs=0x24ed;eip=0x0032f9; 	T(MOV(cx, 0x44));	// 113588 mov     cx, 44h ; 'D' ;~ 24ED:32F9
	// 113589 rep movsw ;~ 24ED:32FC
cs=0x24ed;eip=0x0032fc; 	X(	REP MOVSW);	// 113589 rep movsw ;~ 24ED:32FC
cs=0x24ed;eip=0x0032fe; 	T(XCHG(di, bp));	// 113590 xchg    di, bp ;~ 24ED:32FE
cs=0x24ed;eip=0x003300; 	T(XCHG(si, bx));	// 113591 xchg    si, bx ;~ 24ED:3300
cs=0x24ed;eip=0x003302; 	T(MOV(cx, 0x44));	// 113592 mov     cx, 44h ; 'D' ;~ 24ED:3302
	// 113593 rep movsw ;~ 24ED:3305
cs=0x24ed;eip=0x003305; 	X(	REP MOVSW);	// 113593 rep movsw ;~ 24ED:3305
cs=0x24ed;eip=0x003307; 	T(XCHG(di, bp));	// 113594 xchg    di, bp ;~ 24ED:3307
cs=0x24ed;eip=0x003309; 	T(XCHG(si, bx));	// 113595 xchg    si, bx ;~ 24ED:3309
cs=0x24ed;eip=0x00330b; 	T(DEC(al));	// 113596 dec     al ;~ 24ED:330B
cs=0x24ed;eip=0x00330d; 	J(JNZ(loc_36796));	// 113597 jnz     short loc_36796 ;~ 24ED:330D
cs=0x24ed;eip=0x00330f; 	T(MOV(cx, 0x140));	// 113598 mov     cx, 140h ;~ 24ED:330F
cs=0x24ed;eip=0x003312; 	T(SUB(dl, ah));	// 113599 sub     dl, ah ;~ 24ED:3312
cs=0x24ed;eip=0x003314; 	J(JBE(loc_367d4));	// 113600 jbe     short loc_367D4 ;~ 24ED:3314
loc_367c6:
	// 7546 
cs=0x24ed;eip=0x003316; 	T(SUB(si, cx));	// 113603 sub     si, cx ;~ 24ED:3316
cs=0x24ed;eip=0x003318; 	T(ADD(bx, cx));	// 113604 add     bx, cx ;~ 24ED:3318
cs=0x24ed;eip=0x00331a; 	T(DEC(ah));	// 113605 dec     ah ;~ 24ED:331A
cs=0x24ed;eip=0x00331c; 	J(JNZ(loc_367c6));	// 113606 jnz     short loc_367C6 ;~ 24ED:331C
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00331e; 	T(MOV(ax, *(dw*)(((db*)&word_365b9))));	// 113607 mov     ax, cs:word_365B9 ;~ 24ED:331E
cs=0x24ed;eip=0x003322; 	J(JMP(loc_36796));	// 113608 jmp     short loc_36796 ;~ 24ED:3322
loc_367d4:
	// 7547 
cs=0x24ed;eip=0x003324; 	T(SUB(di, 0x1C8));	// 113612 sub     di, 1C8h ;~ 24ED:3324
cs=0x24ed;eip=0x003328; 	T(ADD(bp, 0x0B8));	// 113613 add     bp, 0B8h ; '¸' ;~ 24ED:3328
loc_367dc:
	// 7548 
cs=0x24ed;eip=0x00332c; 	T(MOV(bx, 0x0FEFE));	// 113616 mov     bx, 0FEFEh ;~ 24ED:332C
cs=0x24ed;eip=0x00332f; 	T(MOV(ax, 0x0F208));	// 113617 mov     ax, 0F208h ;~ 24ED:332F
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003332; 	T(MOV(dx, *(dw*)(((db*)&word_365bb))));	// 113618 mov     dx, cs:word_365BB ;~ 24ED:3332
cs=0x24ed;eip=0x003337; 	T(CMP(dx, 9));	// 113619 cmp     dx, 9 ;~ 24ED:3337
cs=0x24ed;eip=0x00333a; 	J(JC(loc_367f2));	// 113620 jb      short loc_367F2 ;~ 24ED:333A
cs=0x24ed;eip=0x00333c; 	T(SUB(dx, 0x12));	// 113622 sub     dx, 12h ;~ 24ED:333C
cs=0x24ed;eip=0x00333f; 	T(NEG(dx));	// 113623 neg     dx ;~ 24ED:333F
cs=0x24ed;eip=0x003341; 	T(XCHG(ax, bx));	// 113624 xchg    ax, bx ;~ 24ED:3341
loc_367f2:
	// 7549 
cs=0x24ed;eip=0x003342; 	T(MOV(cx, 0x44));	// 113628 mov     cx, 44h ; 'D' ;~ 24ED:3342
cs=0x24ed;eip=0x003345; 	T(XCHG(ax, bx));	// 113629 xchg    ax, bx ;~ 24ED:3345
cs=0x24ed;eip=0x003346; 	T(XCHG(bp, di));	// 113630 xchg    bp, di ;~ 24ED:3346
	// 113631 rep stosw ;~ 24ED:3348
cs=0x24ed;eip=0x003348; 	X(	REP STOSW);	// 113631 rep stosw ;~ 24ED:3348
cs=0x24ed;eip=0x00334a; 	T(XCHG(ax, bx));	// 113632 xchg    ax, bx ;~ 24ED:334A
cs=0x24ed;eip=0x00334b; 	T(XCHG(bp, di));	// 113633 xchg    bp, di ;~ 24ED:334B
cs=0x24ed;eip=0x00334d; 	T(MOV(cl, 0x44));	// 113634 mov     cl, 44h ; 'D' ;~ 24ED:334D
	// 113635 rep stosw ;~ 24ED:334F
cs=0x24ed;eip=0x00334f; 	X(	REP STOSW);	// 113635 rep stosw ;~ 24ED:334F
cs=0x24ed;eip=0x003351; 	T(XCHG(al, ah));	// 113636 xchg    al, ah ;~ 24ED:3351
cs=0x24ed;eip=0x003353; 	T(XCHG(bl, bh));	// 113637 xchg    bl, bh ;~ 24ED:3353
cs=0x24ed;eip=0x003355; 	T(SUB(di, 0x1C8));	// 113638 sub     di, 1C8h ;~ 24ED:3355
cs=0x24ed;eip=0x003359; 	T(ADD(bp, 0x0B8));	// 113639 add     bp, 0B8h ; '¸' ;~ 24ED:3359
cs=0x24ed;eip=0x00335d; 	T(DEC(dx));	// 113640 dec     dx ;~ 24ED:335D
cs=0x24ed;eip=0x00335e; 	J(JNZ(loc_367f2));	// 113641 jnz     short loc_367F2 ;~ 24ED:335E
cs=0x24ed;eip=0x003360; 	T(MOV(ax, 0x0FEFE));	// 113642 mov     ax, 0FEFEh ;~ 24ED:3360
loc_36813:
	// 7550 
cs=0x24ed;eip=0x003363; 	T(MOV(cl, 0x44));	// 113645 mov     cl, 44h ; 'D' ;~ 24ED:3363
cs=0x24ed;eip=0x003365; 	T(XCHG(bp, di));	// 113646 xchg    bp, di ;~ 24ED:3365
	// 113647 rep stosw ;~ 24ED:3367
cs=0x24ed;eip=0x003367; 	X(	REP STOSW);	// 113647 rep stosw ;~ 24ED:3367
cs=0x24ed;eip=0x003369; 	T(XCHG(bp, di));	// 113648 xchg    bp, di ;~ 24ED:3369
cs=0x24ed;eip=0x00336b; 	T(MOV(cl, 0x44));	// 113649 mov     cl, 44h ; 'D' ;~ 24ED:336B
	// 113650 rep stosw ;~ 24ED:336D
cs=0x24ed;eip=0x00336d; 	X(	REP STOSW);	// 113650 rep stosw ;~ 24ED:336D
cs=0x24ed;eip=0x00336f; 	T(SUB(di, 0x1C8));	// 113651 sub     di, 1C8h ;~ 24ED:336F
cs=0x24ed;eip=0x003373; 	T(ADD(bp, 0x0B8));	// 113652 add     bp, 0B8h ; '¸' ;~ 24ED:3373
cs=0x24ed;eip=0x003377; 	T(CMP(di, 0x0C6C0));	// 113653 cmp     di, 0C6C0h ;~ 24ED:3377
cs=0x24ed;eip=0x00337b; 	J(JNC(loc_36813));	// 113654 jnb     short loc_36813 ;~ 24ED:337B
cs=0x24ed;eip=0x00337d; 	J(RETN(0));	// 113655 retn ;~ 24ED:337D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_3672c: 	goto loc_3672c;
        case m2c::kloc_36735: 	goto loc_36735;
        case m2c::kloc_36747: 	goto loc_36747;
        case m2c::kloc_3675b: 	goto loc_3675b;
        case m2c::kloc_36796: 	goto loc_36796;
        case m2c::kloc_367a6: 	goto loc_367a6;
        case m2c::kloc_367c6: 	goto loc_367c6;
        case m2c::kloc_367d4: 	goto loc_367d4;
        case m2c::kloc_367dc: 	goto loc_367dc;
        case m2c::kloc_367f2: 	goto loc_367f2;
        case m2c::kloc_36813: 	goto loc_36813;
        case m2c::ksub_3676d: 	goto sub_3676d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_337e_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_337e_proc:
    _begin:
loc_3682e:
	// 7551 
cs=0x24ed;eip=0x00337e; 	T(CMP(cx, 0x11));	// 113664 cmp     cx, 11h ;~ 24ED:337E
cs=0x24ed;eip=0x003381; 	J(JNZ(loc_3684f));	// 113665 jnz     short loc_3684F ;~ 24ED:3381
cs=0x24ed;eip=0x003383; 	X(PUSH(cx));	// 113666 push    cx ;~ 24ED:3383
cs=0x24ed;eip=0x003384; 	X(PUSH(si));	// 113667 push    si ;~ 24ED:3384
cs=0x24ed;eip=0x003385; 	X(PUSH(ds));	// 113668 push    ds ;~ 24ED:3385
cs=0x24ed;eip=0x003386; 	X(PUSH(es));	// 113669 push    es ;~ 24ED:3386
cs=0x24ed;eip=0x003387; 	X(PUSH(es));	// 113670 push    es ;~ 24ED:3387
cs=0x24ed;eip=0x003388; 	X(PUSH(si));	// 113671 push    si ;~ 24ED:3388
cs=0x24ed;eip=0x003389; 	X(POP(es));	// 113672 pop     es ;~ 24ED:3389
cs=0x24ed;eip=0x00338a; 	X(POP(ds));	// 113674 pop     ds ;~ 24ED:338A
cs=0x24ed;eip=0x00338b; 	T(MOV(dx, 0x5C));	// 113676 mov     dx, 5Ch ; '\' ;~ 24ED:338B
cs=0x24ed;eip=0x00338e; 	T(MOV(bx, 0x9F));	// 113677 mov     bx, 9Fh ; 'Ÿ' ;~ 24ED:338E
cs=0x24ed;eip=0x003391; 	T(MOV(bp, 0x88));	// 113678 mov     bp, 88h ; 'ˆ' ;~ 24ED:3391
cs=0x24ed;eip=0x003394; 	T(MOV(ax, 0x29));	// 113679 mov     ax, 29h ; ')' ;~ 24ED:3394
cs=0x24ed;eip=0x003397; 	X(PUSH(cs));	// 113680 push    cs ;~ 24ED:3397
cs=0x24ed;eip=0x003398; 	J(CALL(sub_34fa7,0));	// 113681 call    near ptr sub_34FA7 ;~ 24ED:3398
cs=0x24ed;eip=0x00339b; 	X(POP(es));	// 113682 pop     es ;~ 24ED:339B
cs=0x24ed;eip=0x00339c; 	X(POP(ds));	// 113684 pop     ds ;~ 24ED:339C
cs=0x24ed;eip=0x00339d; 	X(POP(si));	// 113686 pop     si ;~ 24ED:339D
cs=0x24ed;eip=0x00339e; 	X(POP(cx));	// 113687 pop     cx ;~ 24ED:339E
loc_3684f:
	// 7552 
cs=0x24ed;eip=0x00339f; 	T(CMP(cl, 9));	// 113690 cmp     cl, 9 ;~ 24ED:339F
cs=0x24ed;eip=0x0033a2; 	J(JC(loc_36856));	// 113691 jb      short loc_36856 ;~ 24ED:33A2
cs=0x24ed;eip=0x0033a4; 	X(PUSH(si));	// 113692 push    si ;~ 24ED:33A4
cs=0x24ed;eip=0x0033a5; 	X(POP(ds));	// 113693 pop     ds ;~ 24ED:33A5
loc_36856:
	// 7553 
cs=0x24ed;eip=0x0033a6; 	X(PUSH(cx));	// 113697 push    cx ;~ 24ED:33A6
cs=0x24ed;eip=0x0033a7; 	T(MOV(bx, cx));	// 113698 mov     bx, cx ;~ 24ED:33A7
cs=0x24ed;eip=0x0033a9; 	T(SHL(bx, 1));	// 113699 shl     bx, 1 ;~ 24ED:33A9
cs=0x24ed;eip=0x0033ab; 	T(MOV(ax, *(dw*)(raddr(cs,bx+0x30E5))));	// 113700 mov     ax, cs:[bx+30E5h] ;~ 24ED:33AB
cs=0x24ed;eip=0x0033b0; 	J(CALL(sub_3676d,0));	// 113701 call    sub_3676D ;~ 24ED:33B0
cs=0x24ed;eip=0x0033b3; 	X(POP(cx));	// 113702 pop     cx ;~ 24ED:33B3
cs=0x24ed;eip=0x0033b4; 	J(LOOP(locret_36875));	// 113703 loop    locret_36875 ;~ 24ED:33B4
cs=0x24ed;eip=0x0033b6; 	T(MOV(dx, 0x5C));	// 113705 mov     dx, 5Ch ; '\' ;~ 24ED:33B6
cs=0x24ed;eip=0x0033b9; 	T(MOV(bx, 0x9F));	// 113706 mov     bx, 9Fh ; 'Ÿ' ;~ 24ED:33B9
cs=0x24ed;eip=0x0033bc; 	T(MOV(bp, 0x88));	// 113707 mov     bp, 88h ; 'ˆ' ;~ 24ED:33BC
cs=0x24ed;eip=0x0033bf; 	T(MOV(ax, 0x29));	// 113708 mov     ax, 29h ; ')' ;~ 24ED:33BF
cs=0x24ed;eip=0x0033c2; 	J(return sub_34fa7(0, _state););	// 113709 jmp     near ptr sub_34FA7 ;~ 24ED:33C2
locret_36875:
	// 7554 
cs=0x24ed;eip=0x0033c5; 	J(RETF(0));	// 113713 retf ;~ 24ED:33C5
loc_36876:
	// 7555 
cs=0x24ed;eip=0x0033c6; 	T(MOV(bp, si));	// 113718 mov     bp, si ;~ 24ED:33C6
cs=0x24ed;eip=0x0033c8; 	X(PUSH(bp));	// 113719 push    bp ;~ 24ED:33C8
cs=0x24ed;eip=0x0033c9; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0))));	// 113720 mov     dx, [bp+0] ;~ 24ED:33C9
cs=0x24ed;eip=0x0033cc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 113721 mov     bx, [bp+6] ;~ 24ED:33CC
cs=0x24ed;eip=0x0033cf; 	T(SUB(bx, 2));	// 113722 sub     bx, 2 ;~ 24ED:33CF
cs=0x24ed;eip=0x0033d2; 	J(CALL(sub_340a8,0));	// 113723 call    sub_340A8 ;~ 24ED:33D2
cs=0x24ed;eip=0x0033d5; 	T(MOV(si, di));	// 113724 mov     si, di ;~ 24ED:33D5
cs=0x24ed;eip=0x0033d7; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0))));	// 113725 mov     dx, [bp+0] ;~ 24ED:33D7
cs=0x24ed;eip=0x0033da; 	T(MOV(bx, *(dw*)(raddr(ss,bp+2))));	// 113726 mov     bx, [bp+2] ;~ 24ED:33DA
cs=0x24ed;eip=0x0033dd; 	J(CALL(sub_340a8,0));	// 113727 call    sub_340A8 ;~ 24ED:33DD
cs=0x24ed;eip=0x0033e0; 	T(MOV(dx, *(dw*)(raddr(ss,bp+4))));	// 113728 mov     dx, [bp+4] ;~ 24ED:33E0
cs=0x24ed;eip=0x0033e3; 	T(SUB(dx, *(dw*)(raddr(ss,bp+0))));	// 113729 sub     dx, [bp+0] ;~ 24ED:33E3
cs=0x24ed;eip=0x0033e6; 	T(SHR(dx, 1));	// 113730 shr     dx, 1 ;~ 24ED:33E6
cs=0x24ed;eip=0x0033e8; 	T(MOV(bx, 2));	// 113731 mov     bx, 2 ;~ 24ED:33E8
loc_3689b:
	// 7556 
cs=0x24ed;eip=0x0033eb; 	X(PUSH(bx));	// 113734 push    bx ;~ 24ED:33EB
cs=0x24ed;eip=0x0033ec; 	X(PUSH(si));	// 113735 push    si ;~ 24ED:33EC
cs=0x24ed;eip=0x0033ed; 	X(PUSH(di));	// 113736 push    di ;~ 24ED:33ED
cs=0x24ed;eip=0x0033ee; 	T(MOV(ax, dx));	// 113737 mov     ax, dx ;~ 24ED:33EE
cs=0x24ed;eip=0x0033f0; 	T(ADD(ax, ax));	// 113738 add     ax, ax ;~ 24ED:33F0
loc_368a2:
	// 7557 
cs=0x24ed;eip=0x0033f2; 	T(MOV(cx, dx));	// 113741 mov     cx, dx ;~ 24ED:33F2
cs=0x24ed;eip=0x0033f4; 	T(SHR(cx, 1));	// 113742 shr     cx, 1 ;~ 24ED:33F4
	// 113743 rep movsd ;~ 24ED:33F6
cs=0x24ed;eip=0x0033f6; 	X(	REP MOVSD);	// 113743 rep movsd ;~ 24ED:33F6
cs=0x24ed;eip=0x0033f9; 	T(SUB(si, ax));	// 113744 sub     si, ax ;~ 24ED:33F9
cs=0x24ed;eip=0x0033fb; 	T(SUB(di, ax));	// 113745 sub     di, ax ;~ 24ED:33FB
cs=0x24ed;eip=0x0033fd; 	T(ADD(di, 0x140));	// 113746 add     di, 140h ;~ 24ED:33FD
cs=0x24ed;eip=0x003401; 	T(ADD(si, 0x140));	// 113747 add     si, 140h ;~ 24ED:3401
cs=0x24ed;eip=0x003405; 	T(DEC(bx));	// 113748 dec     bx ;~ 24ED:3405
cs=0x24ed;eip=0x003406; 	J(JNZ(loc_368a2));	// 113749 jnz     short loc_368A2 ;~ 24ED:3406
cs=0x24ed;eip=0x003408; 	X(POP(di));	// 113750 pop     di ;~ 24ED:3408
cs=0x24ed;eip=0x003409; 	X(POP(si));	// 113751 pop     si ;~ 24ED:3409
cs=0x24ed;eip=0x00340a; 	X(POP(bx));	// 113752 pop     bx ;~ 24ED:340A
cs=0x24ed;eip=0x00340b; 	T(ADD(bx, 2));	// 113753 add     bx, 2 ;~ 24ED:340B
cs=0x24ed;eip=0x00340e; 	T(SUB(si, 0x280));	// 113754 sub     si, 280h ;~ 24ED:340E
cs=0x24ed;eip=0x003412; 	J(JNC(loc_3689b));	// 113755 jnb     short loc_3689B ;~ 24ED:3412
cs=0x24ed;eip=0x003414; 	X(POP(bp));	// 113756 pop     bp ;~ 24ED:3414
cs=0x24ed;eip=0x003415; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0))));	// 113757 mov     dx, [bp+0] ;~ 24ED:3415
cs=0x24ed;eip=0x003418; 	T(MOV(bx, *(dw*)(raddr(ss,bp+2))));	// 113758 mov     bx, [bp+2] ;~ 24ED:3418
cs=0x24ed;eip=0x00341b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 113759 mov     ax, [bp+6] ;~ 24ED:341B
cs=0x24ed;eip=0x00341e; 	T(MOV(bp, *(dw*)(raddr(ss,bp+4))));	// 113760 mov     bp, [bp+4] ;~ 24ED:341E
cs=0x24ed;eip=0x003421; 	T(SUB(bp, dx));	// 113761 sub     bp, dx ;~ 24ED:3421
cs=0x24ed;eip=0x003423; 	T(SUB(ax, bx));	// 113762 sub     ax, bx ;~ 24ED:3423
cs=0x24ed;eip=0x003425; 	J(return sub_34fa7(0, _state););	// 113763 jmp     near ptr sub_34FA7 ;~ 24ED:3425
loc_368d8:
	// 7558 
cs=0x24ed;eip=0x003428; 	T(MOV(bp, si));	// 113768 mov     bp, si ;~ 24ED:3428
cs=0x24ed;eip=0x00342a; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0))));	// 113769 mov     dx, [bp+0] ;~ 24ED:342A
cs=0x24ed;eip=0x00342d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+2))));	// 113770 mov     bx, [bp+2] ;~ 24ED:342D
cs=0x24ed;eip=0x003430; 	J(CALL(sub_340a8,0));	// 113771 call    sub_340A8 ;~ 24ED:3430
cs=0x24ed;eip=0x003433; 	T(MOV(dx, *(dw*)(raddr(ss,bp+4))));	// 113772 mov     dx, [bp+4] ;~ 24ED:3433
cs=0x24ed;eip=0x003436; 	T(SUB(dx, *(dw*)(raddr(ss,bp+0))));	// 113773 sub     dx, [bp+0] ;~ 24ED:3436
cs=0x24ed;eip=0x003439; 	T(SHR(dx, 1));	// 113774 shr     dx, 1 ;~ 24ED:3439
cs=0x24ed;eip=0x00343b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 113775 mov     bx, [bp+6] ;~ 24ED:343B
cs=0x24ed;eip=0x00343e; 	T(SUB(bx, *(dw*)(raddr(ss,bp+2))));	// 113776 sub     bx, [bp+2] ;~ 24ED:343E
cs=0x24ed;eip=0x003441; 	T(SUB(bx, 6));	// 113777 sub     bx, 6 ;~ 24ED:3441
loc_368f4:
	// 7559 
cs=0x24ed;eip=0x003444; 	X(PUSH(bx));	// 113781 push    bx ;~ 24ED:3444
cs=0x24ed;eip=0x003445; 	X(PUSH(di));	// 113782 push    di ;~ 24ED:3445
cs=0x24ed;eip=0x003446; 	T(MOV(ax, dx));	// 113783 mov     ax, dx ;~ 24ED:3446
cs=0x24ed;eip=0x003448; 	T(ADD(ax, ax));	// 113784 add     ax, ax ;~ 24ED:3448
cs=0x24ed;eip=0x00344a; 	T(OR(bx, bx));	// 113785 or      bx, bx ;~ 24ED:344A
cs=0x24ed;eip=0x00344c; 	J(JZ(loc_36916));	// 113786 jz      short loc_36916 ;~ 24ED:344C
cs=0x24ed;eip=0x00344e; 	X(PUSH(ds));	// 113787 push    ds ;~ 24ED:344E
cs=0x24ed;eip=0x00344f; 	X(PUSH(es));	// 113788 push    es ;~ 24ED:344F
cs=0x24ed;eip=0x003450; 	X(POP(ds));	// 113789 pop     ds ;~ 24ED:3450
loc_36901:
	// 7560 
cs=0x24ed;eip=0x003451; 	T(MOV(cx, dx));	// 113793 mov     cx, dx ;~ 24ED:3451
cs=0x24ed;eip=0x003453; 	T(si = di+0x780);	// 113794 lea     si, [di+780h] ;~ 24ED:3453
cs=0x24ed;eip=0x003457; 	T(SHR(cx, 1));	// 113795 shr     cx, 1 ;~ 24ED:3457
	// 113796 rep movsd ;~ 24ED:3459
cs=0x24ed;eip=0x003459; 	X(	REP MOVSD);	// 113796 rep movsd ;~ 24ED:3459
cs=0x24ed;eip=0x00345c; 	T(SUB(di, ax));	// 113797 sub     di, ax ;~ 24ED:345C
cs=0x24ed;eip=0x00345e; 	T(ADD(di, 0x140));	// 113798 add     di, 140h ;~ 24ED:345E
cs=0x24ed;eip=0x003462; 	T(DEC(bx));	// 113799 dec     bx ;~ 24ED:3462
cs=0x24ed;eip=0x003463; 	J(JNZ(loc_36901));	// 113800 jnz     short loc_36901 ;~ 24ED:3463
cs=0x24ed;eip=0x003465; 	X(POP(ds));	// 113801 pop     ds ;~ 24ED:3465
loc_36916:
	// 7561 
cs=0x24ed;eip=0x003466; 	T(MOV(bx, 6));	// 113805 mov     bx, 6 ;~ 24ED:3466
loc_36919:
	// 7562 
cs=0x24ed;eip=0x003469; 	T(MOV(cx, dx));	// 113808 mov     cx, dx ;~ 24ED:3469
cs=0x24ed;eip=0x00346b; 	T(MOV(si, di));	// 113809 mov     si, di ;~ 24ED:346B
cs=0x24ed;eip=0x00346d; 	T(SHR(cx, 1));	// 113810 shr     cx, 1 ;~ 24ED:346D
	// 113811 rep movsd ;~ 24ED:346F
cs=0x24ed;eip=0x00346f; 	X(	REP MOVSD);	// 113811 rep movsd ;~ 24ED:346F
cs=0x24ed;eip=0x003472; 	T(SUB(di, ax));	// 113812 sub     di, ax ;~ 24ED:3472
cs=0x24ed;eip=0x003474; 	T(ADD(di, 0x140));	// 113813 add     di, 140h ;~ 24ED:3474
cs=0x24ed;eip=0x003478; 	T(DEC(bx));	// 113814 dec     bx ;~ 24ED:3478
cs=0x24ed;eip=0x003479; 	J(JNZ(loc_36919));	// 113815 jnz     short loc_36919 ;~ 24ED:3479
cs=0x24ed;eip=0x00347b; 	X(POP(di));	// 113816 pop     di ;~ 24ED:347B
cs=0x24ed;eip=0x00347c; 	X(POP(bx));	// 113817 pop     bx ;~ 24ED:347C
cs=0x24ed;eip=0x00347d; 	T(SUB(bx, 6));	// 113818 sub     bx, 6 ;~ 24ED:347D
cs=0x24ed;eip=0x003480; 	J(JNC(loc_368f4));	// 113819 jnb     short loc_368F4 ;~ 24ED:3480
cs=0x24ed;eip=0x003482; 	T(CMP(bx, 0x0FFFA));	// 113820 cmp     bx, 0FFFAh ;~ 24ED:3482
cs=0x24ed;eip=0x003485; 	T(MOV(bx, 0));	// 113821 mov     bx, 0 ;~ 24ED:3485
cs=0x24ed;eip=0x003488; 	J(JNZ(loc_368f4));	// 113822 jnz     short loc_368F4 ;~ 24ED:3488
cs=0x24ed;eip=0x00348a; 	J(RETF(0));	// 113823 retf ;~ 24ED:348A
locret_3693b:
	// 7563 
cs=0x24ed;eip=0x00348b; 	J(RETF(0));	// 113828 retf ;~ 24ED:348B
loc_369b5:
	// 7564 
cs=0x24ed;eip=0x003505; 	J(CALL(sub_34074,0));	// 113956 call    sub_34074 ;~ 24ED:3505
cs=0x24ed;eip=0x003508; 	X(PUSH(si));	// 113957 push    si ;~ 24ED:3508
cs=0x24ed;eip=0x003509; 	T(MOV(dx, *(dw*)(raddr(ss,si))));	// 113958 mov     dx, ss:[si] ;~ 24ED:3509
cs=0x24ed;eip=0x00350c; 	T(MOV(bx, *(dw*)(raddr(ss,si+2))));	// 113959 mov     bx, ss:[si+2] ;~ 24ED:350C
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003510; 	T(ADD(bx, *(dw*)(((db*)&word_369b1))));	// 113960 add     bx, cs:word_369B1 ;~ 24ED:3510
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003515; 	X(INC(*(dw*)(((db*)&word_369b1))));	// 113961 inc     cs:word_369B1 ;~ 24ED:3515
cs=0x24ed;eip=0x00351a; 	T(MOV(bp, *(dw*)(raddr(ss,si+6))));	// 113962 mov     bp, ss:[si+6] ;~ 24ED:351A
cs=0x24ed;eip=0x00351e; 	T(SUB(bp, bx));	// 113963 sub     bp, bx ;~ 24ED:351E
cs=0x24ed;eip=0x003520; 	J(JA(loc_369e1));	// 113964 ja      short loc_369E1 ;~ 24ED:3520
cs=0x24ed;eip=0x003522; 	T(ADD(bp, bx));	// 113965 add     bp, bx ;~ 24ED:3522
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003524; 	X(MOV(*(dw*)(((db*)&word_369b1)), 0));	// 113966 mov     cs:word_369B1, 0 ;~ 24ED:3524
cs=0x24ed;eip=0x00352b; 	T(MOV(bx, *(dw*)(raddr(ss,si+2))));	// 113967 mov     bx, ss:[si+2] ;~ 24ED:352B
cs=0x24ed;eip=0x00352f; 	T(SUB(bp, bx));	// 113968 sub     bp, bx ;~ 24ED:352F
loc_369e1:
	// 7565 
cs=0x24ed;eip=0x003531; 	J(CALL(sub_340a8,0));	// 113971 call    sub_340A8 ;~ 24ED:3531
cs=0x24ed;eip=0x003534; 	T(SUB(dx, *(dw*)(raddr(ss,si+4))));	// 113972 sub     dx, ss:[si+4] ;~ 24ED:3534
cs=0x24ed;eip=0x003538; 	T(NEG(dx));	// 113973 neg     dx ;~ 24ED:3538
cs=0x24ed;eip=0x00353a; 	T(SHR(dx, 1));	// 113974 shr     dx, 1 ;~ 24ED:353A
cs=0x24ed;eip=0x00353c; 	X(PUSH(di));	// 113975 push    di ;~ 24ED:353C
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00353d; 	X(XCHG(di, *(dw*)(((db*)&word_369b3))));	// 113976 xchg    di, cs:word_369B3 ;~ 24ED:353D
cs=0x24ed;eip=0x003542; 	T(SUB(di, 5));	// 113977 sub     di, 5 ;~ 24ED:3542
cs=0x24ed;eip=0x003545; 	T(MOV(si, di));	// 113978 mov     si, di ;~ 24ED:3545
cs=0x24ed;eip=0x003547; 	T(MOV(cx, dx));	// 113979 mov     cx, dx ;~ 24ED:3547
cs=0x24ed;eip=0x003549; 	T(ADD(cx, 5));	// 113980 add     cx, 5 ;~ 24ED:3549
	// 113981 rep movsw ;~ 24ED:354C
cs=0x24ed;eip=0x00354c; 	X(	REP MOVSW);	// 113981 rep movsw ;~ 24ED:354C
cs=0x24ed;eip=0x00354e; 	X(POP(di));	// 113982 pop     di ;~ 24ED:354E
cs=0x24ed;eip=0x00354f; 	T(MOV(si, 0x348C));	// 113983 mov     si, 348Ch ;~ 24ED:354F
loc_36a02:
	// 7566 
cs=0x24ed;eip=0x003552; 	X(LODS(*(raddr(cs,si)),si,1));	// 113987 lods    byte ptr cs:[si] ;~ 24ED:3552
cs=0x24ed;eip=0x003554; 	T(CMP(al, 0x80));	// 113988 cmp     al, 80h ; '€' ;~ 24ED:3554
cs=0x24ed;eip=0x003556; 	J(JZ(loc_36a22));	// 113989 jz      short loc_36A22 ;~ 24ED:3556
cs=0x24ed;eip=0x003558; 	J(CALL(sub_36a24,0));	// 113990 call    sub_36A24 ;~ 24ED:3558
cs=0x24ed;eip=0x00355b; 	T(DEC(bp));	// 113991 dec     bp ;~ 24ED:355B
cs=0x24ed;eip=0x00355c; 	J(JNZ(loc_36a02));	// 113992 jnz     short loc_36A02 ;~ 24ED:355C
cs=0x24ed;eip=0x00355e; 	X(POP(ax));	// 113993 pop     ax ;~ 24ED:355E
cs=0x24ed;eip=0x00355f; 	X(PUSH(ax));	// 113994 push    ax ;~ 24ED:355F
cs=0x24ed;eip=0x003560; 	X(PUSH(dx));	// 113995 push    dx ;~ 24ED:3560
cs=0x24ed;eip=0x003561; 	X(PUSH(si));	// 113996 push    si ;~ 24ED:3561
cs=0x24ed;eip=0x003562; 	T(MOV(si, ax));	// 113997 mov     si, ax ;~ 24ED:3562
cs=0x24ed;eip=0x003564; 	T(MOV(dx, *(dw*)(raddr(ss,si))));	// 113998 mov     dx, ss:[si] ;~ 24ED:3564
cs=0x24ed;eip=0x003567; 	T(MOV(bx, *(dw*)(raddr(ss,si+2))));	// 113999 mov     bx, ss:[si+2] ;~ 24ED:3567
cs=0x24ed;eip=0x00356b; 	J(CALL(sub_340a8,0));	// 114000 call    sub_340A8 ;~ 24ED:356B
cs=0x24ed;eip=0x00356e; 	X(POP(si));	// 114001 pop     si ;~ 24ED:356E
cs=0x24ed;eip=0x00356f; 	X(POP(dx));	// 114002 pop     dx ;~ 24ED:356F
cs=0x24ed;eip=0x003570; 	J(JMP(loc_36a02));	// 114003 jmp     short loc_36A02 ;~ 24ED:3570
loc_36a22:
	// 7567 
cs=0x24ed;eip=0x003572; 	X(POP(si));	// 114007 pop     si ;~ 24ED:3572
cs=0x24ed;eip=0x003573; 	J(RETF(0));	// 114008 retf ;~ 24ED:3573

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_3682e: 	goto loc_3682e;
        case m2c::kloc_3684f: 	goto loc_3684f;
        case m2c::kloc_36856: 	goto loc_36856;
        case m2c::kloc_36876: 	goto loc_36876;
        case m2c::kloc_3689b: 	goto loc_3689b;
        case m2c::kloc_368a2: 	goto loc_368a2;
        case m2c::kloc_368d8: 	goto loc_368d8;
        case m2c::kloc_368f4: 	goto loc_368f4;
        case m2c::kloc_36901: 	goto loc_36901;
        case m2c::kloc_36916: 	goto loc_36916;
        case m2c::kloc_36919: 	goto loc_36919;
        case m2c::kloc_369b5: 	goto loc_369b5;
        case m2c::kloc_369e1: 	goto loc_369e1;
        case m2c::kloc_36a02: 	goto loc_36a02;
        case m2c::kloc_36a22: 	goto loc_36a22;
        case m2c::klocret_36875: 	goto locret_36875;
        case m2c::klocret_3693b: 	goto locret_3693b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36a24(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36a24:
    _begin:
cs=0x24ed;eip=0x003574; 	X(PUSH(si));	// 114015 push    si ;~ 24ED:3574
cs=0x24ed;eip=0x003575; 	X(PUSH(di));	// 114016 push    di ;~ 24ED:3575
cs=0x24ed;eip=0x003576; 	T(MOV(si, di));	// 114017 mov     si, di ;~ 24ED:3576
cs=0x24ed;eip=0x003578; 	T(CBW);	// 114018 cbw ;~ 24ED:3578
cs=0x24ed;eip=0x003579; 	T(ADD(di, ax));	// 114019 add     di, ax ;~ 24ED:3579
cs=0x24ed;eip=0x00357b; 	T(MOV(cx, dx));	// 114020 mov     cx, dx ;~ 24ED:357B
cs=0x24ed;eip=0x00357d; 	T(SHR(cx, 1));	// 114021 shr     cx, 1 ;~ 24ED:357D
	// 114022 rep movsd ;~ 24ED:357F
cs=0x24ed;eip=0x00357f; 	X(	REP MOVSD);	// 114022 rep movsd ;~ 24ED:357F
cs=0x24ed;eip=0x003582; 	T(ADC(cx, cx));	// 114023 adc     cx, cx ;~ 24ED:3582
	// 114024 rep movsw ;~ 24ED:3584
cs=0x24ed;eip=0x003584; 	X(	REP MOVSW);	// 114024 rep movsw ;~ 24ED:3584
cs=0x24ed;eip=0x003586; 	X(POP(di));	// 114025 pop     di ;~ 24ED:3586
cs=0x24ed;eip=0x003587; 	X(POP(si));	// 114026 pop     si ;~ 24ED:3587
cs=0x24ed;eip=0x003588; 	T(ADD(di, 0x140));	// 114027 add     di, 140h ;~ 24ED:3588
cs=0x24ed;eip=0x00358c; 	J(RETN(0));	// 114028 retn ;~ 24ED:358C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_36a24: 	goto sub_36a24;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_358d_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_358d_proc:
    _begin:
loc_36a3d:
	// 7568 
cs=0x24ed;eip=0x00358d; 	T(MOV(dx, *(dw*)(raddr(ss,si))));	// 114036 mov     dx, ss:[si] ;~ 24ED:358D
cs=0x24ed;eip=0x003590; 	T(MOV(bx, *(dw*)(raddr(ss,si+2))));	// 114037 mov     bx, ss:[si+2] ;~ 24ED:3590
cs=0x24ed;eip=0x003594; 	J(CALL(sub_340a8,0));	// 114038 call    sub_340A8 ;~ 24ED:3594
cs=0x24ed;eip=0x003597; 	T(MOV(dx, *(dw*)(raddr(ss,si+4))));	// 114039 mov     dx, ss:[si+4] ;~ 24ED:3597
cs=0x24ed;eip=0x00359b; 	T(SUB(dx, *(dw*)(raddr(ss,si))));	// 114040 sub     dx, ss:[si] ;~ 24ED:359B
cs=0x24ed;eip=0x00359e; 	T(SHR(dx, 1));	// 114041 shr     dx, 1 ;~ 24ED:359E
cs=0x24ed;eip=0x0035a0; 	T(MOV(bx, *(dw*)(raddr(ss,si+6))));	// 114042 mov     bx, ss:[si+6] ;~ 24ED:35A0
cs=0x24ed;eip=0x0035a4; 	T(SUB(bx, *(dw*)(raddr(ss,si+2))));	// 114043 sub     bx, ss:[si+2] ;~ 24ED:35A4
cs=0x24ed;eip=0x0035a8; 	T(SHR(bx, 1));	// 114044 shr     bx, 1 ;~ 24ED:35A8
cs=0x24ed;eip=0x0035aa; 	J(JZ(locret_36a83));	// 114045 jz      short locret_36A83 ;~ 24ED:35AA
cs=0x24ed;eip=0x0035ac; 	X(PUSH(*(dw*)(raddr(ss,bp+0))));	// 114046 push    word ptr [bp+0] ;~ 24ED:35AC
loc_36a5f:
	// 7569 
cs=0x24ed;eip=0x0035af; 	T(MOV(si, 0x2FA8));	// 114049 mov     si, 2FA8h ;~ 24ED:35AF
loc_36a62:
	// 7570 
cs=0x24ed;eip=0x0035b2; 	X(LODS(*(dw*)(raddr(cs,si)),si,2));	// 114052 lods    word ptr cs:[si] ;~ 24ED:35B2
cs=0x24ed;eip=0x0035b4; 	T(OR(ax, ax));	// 114053 or      ax, ax ;~ 24ED:35B4
cs=0x24ed;eip=0x0035b6; 	J(JS(loc_36a5f));	// 114054 js      short loc_36A5F ;~ 24ED:35B6
cs=0x24ed;eip=0x0035b8; 	X(PUSH(bx));	// 114055 push    bx ;~ 24ED:35B8
cs=0x24ed;eip=0x0035b9; 	X(PUSH(cx));	// 114056 push    cx ;~ 24ED:35B9
cs=0x24ed;eip=0x0035ba; 	X(PUSH(dx));	// 114057 push    dx ;~ 24ED:35BA
cs=0x24ed;eip=0x0035bb; 	X(PUSH(si));	// 114058 push    si ;~ 24ED:35BB
cs=0x24ed;eip=0x0035bc; 	X(PUSH(di));	// 114059 push    di ;~ 24ED:35BC
cs=0x24ed;eip=0x0035bd; 	X(PUSH(bp));	// 114060 push    bp ;~ 24ED:35BD
cs=0x24ed;eip=0x0035be; 	J(CALL(sub_36a84,0));	// 114061 call    sub_36A84 ;~ 24ED:35BE
cs=0x24ed;eip=0x0035c1; 	X(POP(bp));	// 114062 pop     bp ;~ 24ED:35C1
cs=0x24ed;eip=0x0035c2; 	X(POP(di));	// 114063 pop     di ;~ 24ED:35C2
cs=0x24ed;eip=0x0035c3; 	X(POP(si));	// 114064 pop     si ;~ 24ED:35C3
cs=0x24ed;eip=0x0035c4; 	X(POP(dx));	// 114065 pop     dx ;~ 24ED:35C4
cs=0x24ed;eip=0x0035c5; 	X(POP(cx));	// 114066 pop     cx ;~ 24ED:35C5
cs=0x24ed;eip=0x0035c6; 	X(POP(bx));	// 114067 pop     bx ;~ 24ED:35C6
cs=0x24ed;eip=0x0035c7; 	X(POP(ax));	// 114068 pop     ax ;~ 24ED:35C7
cs=0x24ed;eip=0x0035c8; 	X(PUSH(ax));	// 114069 push    ax ;~ 24ED:35C8
cs=0x24ed;eip=0x0035c9; 	T(SUB(ax, *(dw*)(raddr(ss,bp+0))));	// 114070 sub     ax, [bp+0] ;~ 24ED:35C9
cs=0x24ed;eip=0x0035cc; 	T(NEG(ax));	// 114071 neg     ax ;~ 24ED:35CC
cs=0x24ed;eip=0x0035ce; 	T(CMP(ax, cx));	// 114072 cmp     ax, cx ;~ 24ED:35CE
cs=0x24ed;eip=0x0035d0; 	J(JC(loc_36a62));	// 114073 jb      short loc_36A62 ;~ 24ED:35D0
cs=0x24ed;eip=0x0035d2; 	X(POP(ax));	// 114074 pop     ax ;~ 24ED:35D2
locret_36a83:
	// 7571 
cs=0x24ed;eip=0x0035d3; 	J(RETF(0));	// 114077 retf ;~ 24ED:35D3

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_36a3d: 	goto loc_36a3d;
        case m2c::kloc_36a5f: 	goto loc_36a5f;
        case m2c::kloc_36a62: 	goto loc_36a62;
        case m2c::klocret_36a83: 	goto locret_36a83;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36a84(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36a84:
    _begin:
cs=0x24ed;eip=0x0035d4; 	T(MOV(si, di));	// 114084 mov     si, di ;~ 24ED:35D4
cs=0x24ed;eip=0x0035d6; 	T(ADD(si, ax));	// 114085 add     si, ax ;~ 24ED:35D6
loc_36a88:
	// 7572 
cs=0x24ed;eip=0x0035d8; 	X(PUSH(si));	// 114088 push    si ;~ 24ED:35D8
cs=0x24ed;eip=0x0035d9; 	X(PUSH(di));	// 114089 push    di ;~ 24ED:35D9
cs=0x24ed;eip=0x0035da; 	T(MOV(cx, dx));	// 114090 mov     cx, dx ;~ 24ED:35DA
loc_36a8c:
	// 7573 
cs=0x24ed;eip=0x0035dc; 	T(LODSB);	// 114093 lodsb ;~ 24ED:35DC
cs=0x24ed;eip=0x0035dd; 	T(INC(si));	// 114094 inc     si ;~ 24ED:35DD
cs=0x24ed;eip=0x0035de; 	T(MOV(ah, al));	// 114095 mov     ah, al ;~ 24ED:35DE
cs=0x24ed;eip=0x0035e0; 	X(MOV(*(dw*)(raddr(es,di+0x140)), ax));	// 114096 mov     es:[di+140h], ax ;~ 24ED:35E0
cs=0x24ed;eip=0x0035e5; 	X(STOSW);	// 114097 stosw ;~ 24ED:35E5
cs=0x24ed;eip=0x0035e6; 	J(LOOP(loc_36a8c));	// 114098 loop    loc_36A8C ;~ 24ED:35E6
cs=0x24ed;eip=0x0035e8; 	X(POP(di));	// 114099 pop     di ;~ 24ED:35E8
cs=0x24ed;eip=0x0035e9; 	X(POP(si));	// 114100 pop     si ;~ 24ED:35E9
cs=0x24ed;eip=0x0035ea; 	T(ADD(si, 0x280));	// 114101 add     si, 280h ;~ 24ED:35EA
cs=0x24ed;eip=0x0035ee; 	T(ADD(di, 0x280));	// 114102 add     di, 280h ;~ 24ED:35EE
cs=0x24ed;eip=0x0035f2; 	T(DEC(bx));	// 114103 dec     bx ;~ 24ED:35F2
cs=0x24ed;eip=0x0035f3; 	J(JNZ(loc_36a88));	// 114104 jnz     short loc_36A88 ;~ 24ED:35F3
cs=0x24ed;eip=0x0035f5; 	J(RETN(0));	// 114105 retn ;~ 24ED:35F5

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_36a88: 	goto loc_36a88;
        case m2c::kloc_36a8c: 	goto loc_36a8c;
        case m2c::ksub_36a84: 	goto sub_36a84;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_360e_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_360e_proc:
    _begin:
loc_36abe:
	// 7574 
cs=0x24ed;eip=0x00360e; 	X(PUSH(ds));	// 114139 push    ds ;~ 24ED:360E
cs=0x24ed;eip=0x00360f; 	T(LODSW);	// 114140 lodsw ;~ 24ED:360F
cs=0x24ed;eip=0x003610; 	T(OR(ax, ax));	// 114141 or      ax, ax ;~ 24ED:3610
cs=0x24ed;eip=0x003612; 	J(JNS(loc_36ac6));	// 114142 jns     short loc_36AC6 ;~ 24ED:3612
cs=0x24ed;eip=0x003614; 	T(XOR(ax, ax));	// 114143 xor     ax, ax ;~ 24ED:3614
loc_36ac6:
	// 7575 
cs=0x24ed;eip=0x003616; 	T(CMP(ax, 0x12C));	// 114146 cmp     ax, 12Ch ;~ 24ED:3616
cs=0x24ed;eip=0x003619; 	J(JC(loc_36ace));	// 114147 jb      short loc_36ACE ;~ 24ED:3619
cs=0x24ed;eip=0x00361b; 	T(MOV(ax, 0x12C));	// 114148 mov     ax, 12Ch ;~ 24ED:361B
loc_36ace:
	// 7576 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00361e; 	X(MOV(*(dw*)(((db*)&word_36aae)), ax));	// 114151 mov     cs:word_36AAE, ax ;~ 24ED:361E
cs=0x24ed;eip=0x003622; 	X(PUSH(ax));	// 114152 push    ax ;~ 24ED:3622
cs=0x24ed;eip=0x003623; 	T(LODSW);	// 114153 lodsw ;~ 24ED:3623
cs=0x24ed;eip=0x003624; 	T(OR(ax, ax));	// 114154 or      ax, ax ;~ 24ED:3624
cs=0x24ed;eip=0x003626; 	J(JNS(loc_36ada));	// 114155 jns     short loc_36ADA ;~ 24ED:3626
cs=0x24ed;eip=0x003628; 	T(XOR(ax, ax));	// 114156 xor     ax, ax ;~ 24ED:3628
loc_36ada:
	// 7577 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00362a; 	X(MOV(*(dw*)(((db*)&word_36ab0)), ax));	// 114159 mov     cs:word_36AB0, ax ;~ 24ED:362A
cs=0x24ed;eip=0x00362e; 	X(PUSH(ax));	// 114160 push    ax ;~ 24ED:362E
cs=0x24ed;eip=0x00362f; 	J(CALL(sub_36b6c,0));	// 114161 call    sub_36B6C ;~ 24ED:362F
cs=0x24ed;eip=0x003632; 	X(POP(bx));	// 114162 pop     bx ;~ 24ED:3632
cs=0x24ed;eip=0x003633; 	X(POP(dx));	// 114163 pop     dx ;~ 24ED:3633
cs=0x24ed;eip=0x003634; 	X(PUSH(es));	// 114164 push    es ;~ 24ED:3634
cs=0x24ed;eip=0x003635; 	X(POP(ds));	// 114165 pop     ds ;~ 24ED:3635
cs=0x24ed;eip=0x003636; 	T(MOV(cx, 2));	// 114167 mov     cx, 2 ;~ 24ED:3636
loc_36ae9:
	// 7578 
cs=0x24ed;eip=0x003639; 	X(PUSH(bx));	// 114170 push    bx ;~ 24ED:3639
cs=0x24ed;eip=0x00363a; 	X(PUSH(cx));	// 114171 push    cx ;~ 24ED:363A
cs=0x24ed;eip=0x00363b; 	X(PUSH(dx));	// 114172 push    dx ;~ 24ED:363B
cs=0x24ed;eip=0x00363c; 	T(MOV(cx, 8));	// 114173 mov     cx, 8 ;~ 24ED:363C
loc_36aef:
	// 7579 
cs=0x24ed;eip=0x00363f; 	X(PUSH(bx));	// 114176 push    bx ;~ 24ED:363F
cs=0x24ed;eip=0x003640; 	X(PUSH(cx));	// 114177 push    cx ;~ 24ED:3640
cs=0x24ed;eip=0x003641; 	X(PUSH(dx));	// 114178 push    dx ;~ 24ED:3641
cs=0x24ed;eip=0x003642; 	X(PUSH(*(dw*)(raddr(ss,bp+0))));	// 114179 push    word ptr [bp+0] ;~ 24ED:3642
cs=0x24ed;eip=0x003645; 	J(CALL(sub_36be9,0));	// 114180 call    sub_36BE9 ;~ 24ED:3645
cs=0x24ed;eip=0x003648; 	X(POP(bx));	// 114181 pop     bx ;~ 24ED:3648
cs=0x24ed;eip=0x003649; 	J(CALL(sub_359e1,0));	// 114182 call    sub_359E1 ;~ 24ED:3649
cs=0x24ed;eip=0x00364c; 	X(POP(dx));	// 114183 pop     dx ;~ 24ED:364C
cs=0x24ed;eip=0x00364d; 	X(POP(cx));	// 114184 pop     cx ;~ 24ED:364D
cs=0x24ed;eip=0x00364e; 	X(POP(bx));	// 114185 pop     bx ;~ 24ED:364E
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00364f; 	T(ADD(dx, *(dw*)(((db*)&word_36aa6))));	// 114186 add     dx, cs:word_36AA6 ;~ 24ED:364F
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003654; 	T(ADD(bx, *(dw*)(((db*)&word_36aa8))));	// 114187 add     bx, cs:word_36AA8 ;~ 24ED:3654
cs=0x24ed;eip=0x003659; 	J(LOOP(loc_36aef));	// 114188 loop    loc_36AEF ;~ 24ED:3659
cs=0x24ed;eip=0x00365b; 	X(POP(dx));	// 114189 pop     dx ;~ 24ED:365B
cs=0x24ed;eip=0x00365c; 	X(POP(cx));	// 114190 pop     cx ;~ 24ED:365C
cs=0x24ed;eip=0x00365d; 	X(POP(bx));	// 114191 pop     bx ;~ 24ED:365D
cs=0x24ed;eip=0x00365e; 	J(LOOP(loc_36ae9));	// 114192 loop    loc_36AE9 ;~ 24ED:365E
cs=0x24ed;eip=0x003660; 	T(MOV(ax, 2));	// 114193 mov     ax, 2 ;~ 24ED:3660
loc_36b13:
	// 7580 
cs=0x24ed;eip=0x003663; 	X(PUSH(ax));	// 114196 push    ax ;~ 24ED:3663
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003664; 	T(MOV(dx, *(dw*)(((db*)&word_36ab2))));	// 114197 mov     dx, cs:word_36AB2 ;~ 24ED:3664
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003669; 	T(MOV(bx, *(dw*)(((db*)&word_36ab4))));	// 114198 mov     bx, cs:word_36AB4 ;~ 24ED:3669
cs=0x24ed;eip=0x00366e; 	T(MOV(cx, 0x14));	// 114199 mov     cx, 14h ;~ 24ED:366E
cs=0x24ed;eip=0x003671; 	T(MOV(si, 0x14));	// 114200 mov     si, 14h ;~ 24ED:3671
cs=0x24ed;eip=0x003674; 	T(MOV(ax, 8));	// 114201 mov     ax, 8 ;~ 24ED:3674
loc_36b27:
	// 7581 
cs=0x24ed;eip=0x003677; 	X(PUSH(ax));	// 114204 push    ax ;~ 24ED:3677
cs=0x24ed;eip=0x003678; 	X(PUSH(bx));	// 114205 push    bx ;~ 24ED:3678
cs=0x24ed;eip=0x003679; 	X(PUSH(cx));	// 114206 push    cx ;~ 24ED:3679
cs=0x24ed;eip=0x00367a; 	X(PUSH(dx));	// 114207 push    dx ;~ 24ED:367A
cs=0x24ed;eip=0x00367b; 	X(PUSH(si));	// 114208 push    si ;~ 24ED:367B
cs=0x24ed;eip=0x00367c; 	X(PUSH(*(dw*)(raddr(ss,bp+0))));	// 114209 push    word ptr [bp+0] ;~ 24ED:367C
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00367f; 	X(MOV(*(dw*)(((db*)&word_36ab6)), dx));	// 114210 mov     cs:word_36AB6, dx ;~ 24ED:367F
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003684; 	X(MOV(*(dw*)(((db*)&word_36ab8)), bx));	// 114211 mov     cs:word_36AB8, bx ;~ 24ED:3684
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003689; 	X(MOV(*(dw*)(((db*)&word_36aba)), cx));	// 114212 mov     cs:word_36ABA, cx ;~ 24ED:3689
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00368e; 	X(MOV(*(dw*)(((db*)&word_36abc)), si));	// 114213 mov     cs:word_36ABC, si ;~ 24ED:368E
cs=0x24ed;eip=0x003693; 	J(CALL(sub_36c6d,0));	// 114214 call    sub_36C6D ;~ 24ED:3693
cs=0x24ed;eip=0x003696; 	X(POP(bx));	// 114215 pop     bx ;~ 24ED:3696
cs=0x24ed;eip=0x003697; 	J(CALL(sub_359e1,0));	// 114216 call    sub_359E1 ;~ 24ED:3697
cs=0x24ed;eip=0x00369a; 	X(POP(si));	// 114217 pop     si ;~ 24ED:369A
cs=0x24ed;eip=0x00369b; 	X(POP(dx));	// 114218 pop     dx ;~ 24ED:369B
cs=0x24ed;eip=0x00369c; 	X(POP(cx));	// 114219 pop     cx ;~ 24ED:369C
cs=0x24ed;eip=0x00369d; 	X(POP(bx));	// 114220 pop     bx ;~ 24ED:369D
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00369e; 	T(MOV(ax, *(dw*)(((db*)&word_36aaa))));	// 114221 mov     ax, cs:word_36AAA ;~ 24ED:369E
cs=0x24ed;eip=0x0036a2; 	T(SUB(dx, ax));	// 114222 sub     dx, ax ;~ 24ED:36A2
cs=0x24ed;eip=0x0036a4; 	T(ADD(cx, ax));	// 114223 add     cx, ax ;~ 24ED:36A4
cs=0x24ed;eip=0x0036a6; 	T(ADD(cx, ax));	// 114224 add     cx, ax ;~ 24ED:36A6
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0036a8; 	T(MOV(ax, *(dw*)(((db*)&word_36aac))));	// 114225 mov     ax, cs:word_36AAC ;~ 24ED:36A8
cs=0x24ed;eip=0x0036ac; 	T(SUB(bx, ax));	// 114226 sub     bx, ax ;~ 24ED:36AC
cs=0x24ed;eip=0x0036ae; 	T(ADD(si, ax));	// 114227 add     si, ax ;~ 24ED:36AE
cs=0x24ed;eip=0x0036b0; 	T(ADD(si, ax));	// 114228 add     si, ax ;~ 24ED:36B0
cs=0x24ed;eip=0x0036b2; 	X(POP(ax));	// 114229 pop     ax ;~ 24ED:36B2
cs=0x24ed;eip=0x0036b3; 	T(DEC(ax));	// 114230 dec     ax ;~ 24ED:36B3
cs=0x24ed;eip=0x0036b4; 	J(JNZ(loc_36b27));	// 114231 jnz     short loc_36B27 ;~ 24ED:36B4
cs=0x24ed;eip=0x0036b6; 	X(POP(ax));	// 114232 pop     ax ;~ 24ED:36B6
cs=0x24ed;eip=0x0036b7; 	T(DEC(ax));	// 114233 dec     ax ;~ 24ED:36B7
cs=0x24ed;eip=0x0036b8; 	J(JNZ(loc_36b13));	// 114234 jnz     short loc_36B13 ;~ 24ED:36B8
cs=0x24ed;eip=0x0036ba; 	X(POP(ds));	// 114235 pop     ds ;~ 24ED:36BA
cs=0x24ed;eip=0x0036bb; 	J(RETF(0));	// 114237 retf ;~ 24ED:36BB

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_36ac6: 	goto loc_36ac6;
        case m2c::kloc_36ace: 	goto loc_36ace;
        case m2c::kloc_36ada: 	goto loc_36ada;
        case m2c::kloc_36ae9: 	goto loc_36ae9;
        case m2c::kloc_36aef: 	goto loc_36aef;
        case m2c::kloc_36b13: 	goto loc_36b13;
        case m2c::kloc_36b27: 	goto loc_36b27;
        case m2c::kseg002_360e_proc: 	goto seg002_360e_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_3730_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_3730_proc:
    _begin:
loc_36be0:
	// 7587 
cs=0x24ed;eip=0x003730; 	T(DEC(si));	// 114306 dec     si ;~ 24ED:3730
cs=0x24ed;eip=0x003731; 	X(PUSH(ds));	// 114307 push    ds ;~ 24ED:3731
cs=0x24ed;eip=0x003732; 	X(PUSH(es));	// 114308 push    es ;~ 24ED:3732
cs=0x24ed;eip=0x003733; 	X(POP(ds));	// 114309 pop     ds ;~ 24ED:3733
cs=0x24ed;eip=0x003734; 	J(CALL(sub_36bef,0));	// 114311 call    sub_36BEF ;~ 24ED:3734
cs=0x24ed;eip=0x003737; 	X(POP(ds));	// 114312 pop     ds ;~ 24ED:3737
cs=0x24ed;eip=0x003738; 	J(RETF(0));	// 114314 retf ;~ 24ED:3738

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kseg002_3730_proc: 	goto seg002_3730_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36be9(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36be9:
    _begin:
cs=0x24ed;eip=0x003739; 	T(MOV(cx, 0x14));	// 114322 mov     cx, 14h ;~ 24ED:3739
cs=0x24ed;eip=0x00373c; 	T(MOV(si, 0x14));	// 114323 mov     si, 14h ;~ 24ED:373C
	R(return sub_36bef(0, _state););
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_36be9: 	goto sub_36be9;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36bef(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36bef:
    _begin:
cs=0x24ed;eip=0x00373f; 	T(ADD(si, dx));	// 114332 add     si, dx ;~ 24ED:373F
cs=0x24ed;eip=0x003741; 	T(ADD(cx, bx));	// 114333 add     cx, bx ;~ 24ED:3741
cs=0x24ed;eip=0x003743; 	T(MOV(ax, 4));	// 114334 mov     ax, 4 ;~ 24ED:3743
cs=0x24ed;eip=0x003746; 	T(CMP(dx, ax));	// 114335 cmp     dx, ax ;~ 24ED:3746
cs=0x24ed;eip=0x003748; 	J(JGE(loc_36bfc));	// 114336 jge     short loc_36BFC ;~ 24ED:3748
cs=0x24ed;eip=0x00374a; 	T(MOV(dx, ax));	// 114337 mov     dx, ax ;~ 24ED:374A
loc_36bfc:
	// 7588 
cs=0x24ed;eip=0x00374c; 	T(CMP(si, ax));	// 114340 cmp     si, ax ;~ 24ED:374C
cs=0x24ed;eip=0x00374e; 	J(JGE(loc_36c02));	// 114341 jge     short loc_36C02 ;~ 24ED:374E
cs=0x24ed;eip=0x003750; 	T(MOV(si, ax));	// 114342 mov     si, ax ;~ 24ED:3750
loc_36c02:
	// 7589 
cs=0x24ed;eip=0x003752; 	T(MOV(ax, 0x13C));	// 114345 mov     ax, 13Ch ;~ 24ED:3752
cs=0x24ed;eip=0x003755; 	T(CMP(dx, ax));	// 114346 cmp     dx, ax ;~ 24ED:3755
cs=0x24ed;eip=0x003757; 	J(JLE(loc_36c0b));	// 114347 jle     short loc_36C0B ;~ 24ED:3757
cs=0x24ed;eip=0x003759; 	T(MOV(dx, ax));	// 114348 mov     dx, ax ;~ 24ED:3759
loc_36c0b:
	// 7590 
cs=0x24ed;eip=0x00375b; 	T(CMP(si, ax));	// 114351 cmp     si, ax ;~ 24ED:375B
cs=0x24ed;eip=0x00375d; 	J(JLE(loc_36c11));	// 114352 jle     short loc_36C11 ;~ 24ED:375D
cs=0x24ed;eip=0x00375f; 	T(MOV(si, ax));	// 114353 mov     si, ax ;~ 24ED:375F
loc_36c11:
	// 7591 
cs=0x24ed;eip=0x003761; 	T(MOV(ax, 4));	// 114356 mov     ax, 4 ;~ 24ED:3761
cs=0x24ed;eip=0x003764; 	T(CMP(bx, ax));	// 114357 cmp     bx, ax ;~ 24ED:3764
cs=0x24ed;eip=0x003766; 	J(JGE(loc_36c1a));	// 114358 jge     short loc_36C1A ;~ 24ED:3766
cs=0x24ed;eip=0x003768; 	T(MOV(bx, ax));	// 114359 mov     bx, ax ;~ 24ED:3768
loc_36c1a:
	// 7592 
cs=0x24ed;eip=0x00376a; 	T(CMP(cx, ax));	// 114362 cmp     cx, ax ;~ 24ED:376A
cs=0x24ed;eip=0x00376c; 	J(JGE(loc_36c20));	// 114363 jge     short loc_36C20 ;~ 24ED:376C
cs=0x24ed;eip=0x00376e; 	T(MOV(cx, ax));	// 114364 mov     cx, ax ;~ 24ED:376E
loc_36c20:
	// 7593 
cs=0x24ed;eip=0x003770; 	T(MOV(ax, 0x94));	// 114367 mov     ax, 94h ; '”' ;~ 24ED:3770
cs=0x24ed;eip=0x003773; 	T(CMP(bx, ax));	// 114368 cmp     bx, ax ;~ 24ED:3773
cs=0x24ed;eip=0x003775; 	J(JLE(loc_36c29));	// 114369 jle     short loc_36C29 ;~ 24ED:3775
cs=0x24ed;eip=0x003777; 	T(MOV(bx, ax));	// 114370 mov     bx, ax ;~ 24ED:3777
loc_36c29:
	// 7594 
cs=0x24ed;eip=0x003779; 	T(CMP(cx, ax));	// 114373 cmp     cx, ax ;~ 24ED:3779
cs=0x24ed;eip=0x00377b; 	J(JLE(loc_36c2f));	// 114374 jle     short loc_36C2F ;~ 24ED:377B
cs=0x24ed;eip=0x00377d; 	T(MOV(cx, ax));	// 114375 mov     cx, ax ;~ 24ED:377D
loc_36c2f:
	// 7595 
cs=0x24ed;eip=0x00377f; 	T(SUB(si, dx));	// 114378 sub     si, dx ;~ 24ED:377F
cs=0x24ed;eip=0x003781; 	T(SUB(cx, bx));	// 114379 sub     cx, bx ;~ 24ED:3781
cs=0x24ed;eip=0x003783; 	T(INC(si));	// 114380 inc     si ;~ 24ED:3783
cs=0x24ed;eip=0x003784; 	T(SUB(cx, 2));	// 114381 sub     cx, 2 ;~ 24ED:3784
cs=0x24ed;eip=0x003787; 	J(CALL(sub_340a8,0));	// 114382 call    sub_340A8 ;~ 24ED:3787
cs=0x24ed;eip=0x00378a; 	X(PUSH(cx));	// 114383 push    cx ;~ 24ED:378A
cs=0x24ed;eip=0x00378b; 	X(PUSH(cx));	// 114384 push    cx ;~ 24ED:378B
cs=0x24ed;eip=0x00378c; 	T(MOV(cx, si));	// 114385 mov     cx, si ;~ 24ED:378C
cs=0x24ed;eip=0x00378e; 	T(MOV(al, 0x0F));	// 114386 mov     al, 0Fh ;~ 24ED:378E
loc_36c40:
	// 7596 
cs=0x24ed;eip=0x003790; 	X(XOR(*(raddr(ds,di)), al));	// 114389 xor     [di], al ;~ 24ED:3790
cs=0x24ed;eip=0x003792; 	T(INC(di));	// 114390 inc     di ;~ 24ED:3792
cs=0x24ed;eip=0x003793; 	J(LOOP(loc_36c40));	// 114391 loop    loc_36C40 ;~ 24ED:3793
cs=0x24ed;eip=0x003795; 	T(DEC(di));	// 114392 dec     di ;~ 24ED:3795
cs=0x24ed;eip=0x003796; 	X(POP(cx));	// 114393 pop     cx ;~ 24ED:3796
cs=0x24ed;eip=0x003797; 	T(OR(cx, cx));	// 114394 or      cx, cx ;~ 24ED:3797
cs=0x24ed;eip=0x003799; 	J(JLE(loc_36c57));	// 114395 jle     short loc_36C57 ;~ 24ED:3799
loc_36c4b:
	// 7597 
cs=0x24ed;eip=0x00379b; 	T(ADD(di, 0x140));	// 114398 add     di, 140h ;~ 24ED:379B
cs=0x24ed;eip=0x00379f; 	X(XOR(*(raddr(ds,di)), al));	// 114399 xor     [di], al ;~ 24ED:379F
cs=0x24ed;eip=0x0037a1; 	J(LOOP(loc_36c4b));	// 114400 loop    loc_36C4B ;~ 24ED:37A1
cs=0x24ed;eip=0x0037a3; 	T(ADD(di, 0x140));	// 114401 add     di, 140h ;~ 24ED:37A3
loc_36c57:
	// 7598 
cs=0x24ed;eip=0x0037a7; 	T(MOV(cx, si));	// 114404 mov     cx, si ;~ 24ED:37A7
loc_36c59:
	// 7599 
cs=0x24ed;eip=0x0037a9; 	X(XOR(*(raddr(ds,di)), al));	// 114407 xor     [di], al ;~ 24ED:37A9
cs=0x24ed;eip=0x0037ab; 	T(DEC(di));	// 114408 dec     di ;~ 24ED:37AB
cs=0x24ed;eip=0x0037ac; 	J(LOOP(loc_36c59));	// 114409 loop    loc_36C59 ;~ 24ED:37AC
cs=0x24ed;eip=0x0037ae; 	T(INC(di));	// 114410 inc     di ;~ 24ED:37AE
cs=0x24ed;eip=0x0037af; 	X(POP(cx));	// 114411 pop     cx ;~ 24ED:37AF
cs=0x24ed;eip=0x0037b0; 	T(OR(cx, cx));	// 114412 or      cx, cx ;~ 24ED:37B0
cs=0x24ed;eip=0x0037b2; 	J(JLE(locret_36c6c));	// 114413 jle     short locret_36C6C ;~ 24ED:37B2
loc_36c64:
	// 7600 
cs=0x24ed;eip=0x0037b4; 	T(SUB(di, 0x140));	// 114416 sub     di, 140h ;~ 24ED:37B4
cs=0x24ed;eip=0x0037b8; 	X(XOR(*(raddr(ds,di)), al));	// 114417 xor     [di], al ;~ 24ED:37B8
cs=0x24ed;eip=0x0037ba; 	J(LOOP(loc_36c64));	// 114418 loop    loc_36C64 ;~ 24ED:37BA
locret_36c6c:
	// 7601 
cs=0x24ed;eip=0x0037bc; 	J(RETN(0));	// 114421 retn ;~ 24ED:37BC

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_36bfc: 	goto loc_36bfc;
        case m2c::kloc_36c02: 	goto loc_36c02;
        case m2c::kloc_36c0b: 	goto loc_36c0b;
        case m2c::kloc_36c11: 	goto loc_36c11;
        case m2c::kloc_36c1a: 	goto loc_36c1a;
        case m2c::kloc_36c20: 	goto loc_36c20;
        case m2c::kloc_36c29: 	goto loc_36c29;
        case m2c::kloc_36c2f: 	goto loc_36c2f;
        case m2c::kloc_36c40: 	goto loc_36c40;
        case m2c::kloc_36c4b: 	goto loc_36c4b;
        case m2c::kloc_36c57: 	goto loc_36c57;
        case m2c::kloc_36c59: 	goto loc_36c59;
        case m2c::kloc_36c64: 	goto loc_36c64;
        case m2c::klocret_36c6c: 	goto locret_36c6c;
        case m2c::ksub_36bef: 	goto sub_36bef;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36c6d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36c6d:
    _begin:
cs=0x24ed;eip=0x0037bd; 	X(PUSH(bp));	// 114430 push    bp ;~ 24ED:37BD
cs=0x24ed;eip=0x0037be; 	T(MOV(bp, cx));	// 114431 mov     bp, cx ;~ 24ED:37BE
cs=0x24ed;eip=0x0037c0; 	J(CALL(sub_340a8,0));	// 114432 call    sub_340A8 ;~ 24ED:37C0
cs=0x24ed;eip=0x0037c3; 	T(MOV(ax, 0x0F0F));	// 114433 mov     ax, 0F0Fh ;~ 24ED:37C3
cs=0x24ed;eip=0x0037c6; 	T(MOV(cx, 5));	// 114434 mov     cx, 5 ;~ 24ED:37C6
loc_36c79:
	// 7602 
cs=0x24ed;eip=0x0037c9; 	X(XOR(*(dw*)(raddr(ds,di)), ax));	// 114437 xor     [di], ax ;~ 24ED:37C9
cs=0x24ed;eip=0x0037cb; 	T(ADD(di, 2));	// 114438 add     di, 2 ;~ 24ED:37CB
cs=0x24ed;eip=0x0037ce; 	J(LOOP(loc_36c79));	// 114439 loop    loc_36C79 ;~ 24ED:37CE
cs=0x24ed;eip=0x0037d0; 	T(ADD(di, bp));	// 114440 add     di, bp ;~ 24ED:37D0
cs=0x24ed;eip=0x0037d2; 	T(SUB(di, 0x14));	// 114441 sub     di, 14h ;~ 24ED:37D2
cs=0x24ed;eip=0x0037d5; 	T(MOV(cx, 5));	// 114442 mov     cx, 5 ;~ 24ED:37D5
loc_36c88:
	// 7603 
cs=0x24ed;eip=0x0037d8; 	X(XOR(*(dw*)(raddr(ds,di)), ax));	// 114445 xor     [di], ax ;~ 24ED:37D8
cs=0x24ed;eip=0x0037da; 	T(ADD(di, 2));	// 114446 add     di, 2 ;~ 24ED:37DA
cs=0x24ed;eip=0x0037dd; 	J(LOOP(loc_36c88));	// 114447 loop    loc_36C88 ;~ 24ED:37DD
cs=0x24ed;eip=0x0037df; 	T(DEC(di));	// 114448 dec     di ;~ 24ED:37DF
cs=0x24ed;eip=0x0037e0; 	T(MOV(cx, 9));	// 114449 mov     cx, 9 ;~ 24ED:37E0
loc_36c93:
	// 7604 
cs=0x24ed;eip=0x0037e3; 	T(ADD(di, 0x140));	// 114452 add     di, 140h ;~ 24ED:37E3
cs=0x24ed;eip=0x0037e7; 	X(XOR(*(raddr(ds,di)), al));	// 114453 xor     [di], al ;~ 24ED:37E7
cs=0x24ed;eip=0x0037e9; 	J(LOOP(loc_36c93));	// 114454 loop    loc_36C93 ;~ 24ED:37E9
cs=0x24ed;eip=0x0037eb; 	T(MOV(ax, si));	// 114455 mov     ax, si ;~ 24ED:37EB
cs=0x24ed;eip=0x0037ed; 	T(SUB(ax, 0x14));	// 114456 sub     ax, 14h ;~ 24ED:37ED
cs=0x24ed;eip=0x0037f0; 	T(MOV(cx, 0x140));	// 114457 mov     cx, 140h ;~ 24ED:37F0
cs=0x24ed;eip=0x0037f3; 	T(IMUL1_2(cx));	// 114458 imul    cx ;~ 24ED:37F3
cs=0x24ed;eip=0x0037f5; 	T(ADD(di, ax));	// 114459 add     di, ax ;~ 24ED:37F5
cs=0x24ed;eip=0x0037f7; 	T(MOV(ax, 0x0F0F));	// 114460 mov     ax, 0F0Fh ;~ 24ED:37F7
cs=0x24ed;eip=0x0037fa; 	T(MOV(cx, 9));	// 114461 mov     cx, 9 ;~ 24ED:37FA
loc_36cad:
	// 7605 
cs=0x24ed;eip=0x0037fd; 	T(ADD(di, 0x140));	// 114464 add     di, 140h ;~ 24ED:37FD
cs=0x24ed;eip=0x003801; 	X(XOR(*(raddr(ds,di)), al));	// 114465 xor     [di], al ;~ 24ED:3801
cs=0x24ed;eip=0x003803; 	J(LOOP(loc_36cad));	// 114466 loop    loc_36CAD ;~ 24ED:3803
cs=0x24ed;eip=0x003805; 	T(ADD(di, 0x140));	// 114467 add     di, 140h ;~ 24ED:3805
cs=0x24ed;eip=0x003809; 	T(DEC(di));	// 114468 dec     di ;~ 24ED:3809
cs=0x24ed;eip=0x00380a; 	T(MOV(cx, 5));	// 114469 mov     cx, 5 ;~ 24ED:380A
loc_36cbd:
	// 7606 
cs=0x24ed;eip=0x00380d; 	X(XOR(*(dw*)(raddr(ds,di)), ax));	// 114472 xor     [di], ax ;~ 24ED:380D
cs=0x24ed;eip=0x00380f; 	T(SUB(di, 2));	// 114473 sub     di, 2 ;~ 24ED:380F
cs=0x24ed;eip=0x003812; 	J(LOOP(loc_36cbd));	// 114474 loop    loc_36CBD ;~ 24ED:3812
cs=0x24ed;eip=0x003814; 	T(SUB(di, bp));	// 114475 sub     di, bp ;~ 24ED:3814
cs=0x24ed;eip=0x003816; 	T(ADD(di, 0x14));	// 114476 add     di, 14h ;~ 24ED:3816
cs=0x24ed;eip=0x003819; 	T(MOV(cx, 5));	// 114477 mov     cx, 5 ;~ 24ED:3819
loc_36ccc:
	// 7607 
cs=0x24ed;eip=0x00381c; 	X(XOR(*(dw*)(raddr(ds,di)), ax));	// 114480 xor     [di], ax ;~ 24ED:381C
cs=0x24ed;eip=0x00381e; 	T(SUB(di, 2));	// 114481 sub     di, 2 ;~ 24ED:381E
cs=0x24ed;eip=0x003821; 	J(LOOP(loc_36ccc));	// 114482 loop    loc_36CCC ;~ 24ED:3821
cs=0x24ed;eip=0x003823; 	T(ADD(di, 2));	// 114483 add     di, 2 ;~ 24ED:3823
cs=0x24ed;eip=0x003826; 	T(MOV(cx, 9));	// 114484 mov     cx, 9 ;~ 24ED:3826
loc_36cd9:
	// 7608 
cs=0x24ed;eip=0x003829; 	T(SUB(di, 0x140));	// 114487 sub     di, 140h ;~ 24ED:3829
cs=0x24ed;eip=0x00382d; 	X(XOR(*(raddr(ds,di)), al));	// 114488 xor     [di], al ;~ 24ED:382D
cs=0x24ed;eip=0x00382f; 	J(LOOP(loc_36cd9));	// 114489 loop    loc_36CD9 ;~ 24ED:382F
cs=0x24ed;eip=0x003831; 	T(MOV(ax, si));	// 114490 mov     ax, si ;~ 24ED:3831
cs=0x24ed;eip=0x003833; 	T(SUB(ax, 0x14));	// 114491 sub     ax, 14h ;~ 24ED:3833
cs=0x24ed;eip=0x003836; 	T(MOV(cx, 0x140));	// 114492 mov     cx, 140h ;~ 24ED:3836
cs=0x24ed;eip=0x003839; 	T(IMUL1_2(cx));	// 114493 imul    cx ;~ 24ED:3839
cs=0x24ed;eip=0x00383b; 	T(SUB(di, ax));	// 114494 sub     di, ax ;~ 24ED:383B
cs=0x24ed;eip=0x00383d; 	T(MOV(ax, 0x0F0F));	// 114495 mov     ax, 0F0Fh ;~ 24ED:383D
cs=0x24ed;eip=0x003840; 	T(MOV(cx, 9));	// 114496 mov     cx, 9 ;~ 24ED:3840
loc_36cf3:
	// 7609 
cs=0x24ed;eip=0x003843; 	T(SUB(di, 0x140));	// 114499 sub     di, 140h ;~ 24ED:3843
cs=0x24ed;eip=0x003847; 	X(XOR(*(raddr(ds,di)), al));	// 114500 xor     [di], al ;~ 24ED:3847
cs=0x24ed;eip=0x003849; 	J(LOOP(loc_36cf3));	// 114501 loop    loc_36CF3 ;~ 24ED:3849
cs=0x24ed;eip=0x00384b; 	X(POP(bp));	// 114502 pop     bp ;~ 24ED:384B
cs=0x24ed;eip=0x00384c; 	J(RETN(0));	// 114503 retn ;~ 24ED:384C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_36c79: 	goto loc_36c79;
        case m2c::kloc_36c88: 	goto loc_36c88;
        case m2c::kloc_36c93: 	goto loc_36c93;
        case m2c::kloc_36cad: 	goto loc_36cad;
        case m2c::kloc_36cbd: 	goto loc_36cbd;
        case m2c::kloc_36ccc: 	goto loc_36ccc;
        case m2c::kloc_36cd9: 	goto loc_36cd9;
        case m2c::kloc_36cf3: 	goto loc_36cf3;
        case m2c::ksub_36c6d: 	goto sub_36c6d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_384d_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_384d_proc:
    _begin:
loc_36cfd:
	// 7610 
cs=0x24ed;eip=0x00384d; 	X(PUSH(ds));	// 114512 push    ds ;~ 24ED:384D
cs=0x24ed;eip=0x00384e; 	X(PUSH(es));	// 114513 push    es ;~ 24ED:384E
cs=0x24ed;eip=0x00384f; 	X(POP(ds));	// 114514 pop     ds ;~ 24ED:384F
cs=0x24ed;eip=0x003850; 	T(MOV(ax, 2));	// 114516 mov     ax, 2 ;~ 24ED:3850
loc_36d03:
	// 7611 
cs=0x24ed;eip=0x003853; 	X(PUSH(ax));	// 114519 push    ax ;~ 24ED:3853
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003854; 	T(MOV(dx, *(dw*)(((db*)&word_36ab6))));	// 114520 mov     dx, cs:word_36AB6 ;~ 24ED:3854
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003859; 	T(MOV(bx, *(dw*)(((db*)&word_36ab8))));	// 114521 mov     bx, cs:word_36AB8 ;~ 24ED:3859
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00385e; 	T(MOV(cx, *(dw*)(((db*)&word_36aba))));	// 114522 mov     cx, cs:word_36ABA ;~ 24ED:385E
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003863; 	T(MOV(si, *(dw*)(((db*)&word_36abc))));	// 114523 mov     si, cs:word_36ABC ;~ 24ED:3863
cs=0x24ed;eip=0x003868; 	T(MOV(ax, 8));	// 114524 mov     ax, 8 ;~ 24ED:3868
loc_36d1b:
	// 7612 
cs=0x24ed;eip=0x00386b; 	X(PUSH(ax));	// 114527 push    ax ;~ 24ED:386B
cs=0x24ed;eip=0x00386c; 	X(PUSH(bx));	// 114528 push    bx ;~ 24ED:386C
cs=0x24ed;eip=0x00386d; 	X(PUSH(cx));	// 114529 push    cx ;~ 24ED:386D
cs=0x24ed;eip=0x00386e; 	X(PUSH(dx));	// 114530 push    dx ;~ 24ED:386E
cs=0x24ed;eip=0x00386f; 	X(PUSH(si));	// 114531 push    si ;~ 24ED:386F
cs=0x24ed;eip=0x003870; 	X(PUSH(*(dw*)(raddr(ss,bp+0))));	// 114532 push    word ptr [bp+0] ;~ 24ED:3870
cs=0x24ed;eip=0x003873; 	J(CALL(sub_36c6d,0));	// 114533 call    sub_36C6D ;~ 24ED:3873
cs=0x24ed;eip=0x003876; 	X(POP(bx));	// 114534 pop     bx ;~ 24ED:3876
cs=0x24ed;eip=0x003877; 	J(CALL(sub_359e1,0));	// 114535 call    sub_359E1 ;~ 24ED:3877
cs=0x24ed;eip=0x00387a; 	X(POP(si));	// 114536 pop     si ;~ 24ED:387A
cs=0x24ed;eip=0x00387b; 	X(POP(dx));	// 114537 pop     dx ;~ 24ED:387B
cs=0x24ed;eip=0x00387c; 	X(POP(cx));	// 114538 pop     cx ;~ 24ED:387C
cs=0x24ed;eip=0x00387d; 	X(POP(bx));	// 114539 pop     bx ;~ 24ED:387D
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00387e; 	T(MOV(ax, *(dw*)(((db*)&word_36aaa))));	// 114540 mov     ax, cs:word_36AAA ;~ 24ED:387E
cs=0x24ed;eip=0x003882; 	T(ADD(dx, ax));	// 114541 add     dx, ax ;~ 24ED:3882
cs=0x24ed;eip=0x003884; 	T(SUB(cx, ax));	// 114542 sub     cx, ax ;~ 24ED:3884
cs=0x24ed;eip=0x003886; 	T(SUB(cx, ax));	// 114543 sub     cx, ax ;~ 24ED:3886
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003888; 	T(MOV(ax, *(dw*)(((db*)&word_36aac))));	// 114544 mov     ax, cs:word_36AAC ;~ 24ED:3888
cs=0x24ed;eip=0x00388c; 	T(ADD(bx, ax));	// 114545 add     bx, ax ;~ 24ED:388C
cs=0x24ed;eip=0x00388e; 	T(SUB(si, ax));	// 114546 sub     si, ax ;~ 24ED:388E
cs=0x24ed;eip=0x003890; 	T(SUB(si, ax));	// 114547 sub     si, ax ;~ 24ED:3890
cs=0x24ed;eip=0x003892; 	X(POP(ax));	// 114548 pop     ax ;~ 24ED:3892
cs=0x24ed;eip=0x003893; 	T(DEC(ax));	// 114549 dec     ax ;~ 24ED:3893
cs=0x24ed;eip=0x003894; 	J(JNZ(loc_36d1b));	// 114550 jnz     short loc_36D1B ;~ 24ED:3894
cs=0x24ed;eip=0x003896; 	X(POP(ax));	// 114551 pop     ax ;~ 24ED:3896
cs=0x24ed;eip=0x003897; 	T(DEC(ax));	// 114552 dec     ax ;~ 24ED:3897
cs=0x24ed;eip=0x003898; 	J(JNZ(loc_36d03));	// 114553 jnz     short loc_36D03 ;~ 24ED:3898
cs=0x24ed;eip=0x00389a; 	T(MOV(cx, 2));	// 114554 mov     cx, 2 ;~ 24ED:389A
loc_36d4d:
	// 7613 
cs=0x24ed;eip=0x00389d; 	X(PUSH(cx));	// 114557 push    cx ;~ 24ED:389D
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00389e; 	T(MOV(dx, *(dw*)(((db*)&word_36ab2))));	// 114558 mov     dx, cs:word_36AB2 ;~ 24ED:389E
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0038a3; 	T(MOV(bx, *(dw*)(((db*)&word_36ab4))));	// 114559 mov     bx, cs:word_36AB4 ;~ 24ED:38A3
cs=0x24ed;eip=0x0038a8; 	T(MOV(cx, 8));	// 114560 mov     cx, 8 ;~ 24ED:38A8
loc_36d5b:
	// 7614 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0038ab; 	T(SUB(dx, *(dw*)(((db*)&word_36aa6))));	// 114563 sub     dx, cs:word_36AA6 ;~ 24ED:38AB
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0038b0; 	T(SUB(bx, *(dw*)(((db*)&word_36aa8))));	// 114564 sub     bx, cs:word_36AA8 ;~ 24ED:38B0
cs=0x24ed;eip=0x0038b5; 	X(PUSH(bx));	// 114565 push    bx ;~ 24ED:38B5
cs=0x24ed;eip=0x0038b6; 	X(PUSH(cx));	// 114566 push    cx ;~ 24ED:38B6
cs=0x24ed;eip=0x0038b7; 	X(PUSH(dx));	// 114567 push    dx ;~ 24ED:38B7
cs=0x24ed;eip=0x0038b8; 	X(PUSH(*(dw*)(raddr(ss,bp+0))));	// 114568 push    word ptr [bp+0] ;~ 24ED:38B8
cs=0x24ed;eip=0x0038bb; 	J(CALL(sub_36be9,0));	// 114569 call    sub_36BE9 ;~ 24ED:38BB
cs=0x24ed;eip=0x0038be; 	X(POP(bx));	// 114570 pop     bx ;~ 24ED:38BE
cs=0x24ed;eip=0x0038bf; 	J(CALL(sub_359e1,0));	// 114571 call    sub_359E1 ;~ 24ED:38BF
cs=0x24ed;eip=0x0038c2; 	X(POP(dx));	// 114572 pop     dx ;~ 24ED:38C2
cs=0x24ed;eip=0x0038c3; 	X(POP(cx));	// 114573 pop     cx ;~ 24ED:38C3
cs=0x24ed;eip=0x0038c4; 	X(POP(bx));	// 114574 pop     bx ;~ 24ED:38C4
cs=0x24ed;eip=0x0038c5; 	J(LOOP(loc_36d5b));	// 114575 loop    loc_36D5B ;~ 24ED:38C5
cs=0x24ed;eip=0x0038c7; 	X(POP(cx));	// 114576 pop     cx ;~ 24ED:38C7
cs=0x24ed;eip=0x0038c8; 	J(LOOP(loc_36d4d));	// 114577 loop    loc_36D4D ;~ 24ED:38C8
cs=0x24ed;eip=0x0038ca; 	X(POP(ds));	// 114578 pop     ds ;~ 24ED:38CA
cs=0x24ed;eip=0x0038cb; 	J(RETF(0));	// 114580 retf ;~ 24ED:38CB
loc_36d94:
	// 7615 
cs=0x24ed;eip=0x0038e4; 	T(LODSW);	// 114612 lodsw ;~ 24ED:38E4
cs=0x24ed;eip=0x0038e5; 	T(ADD(ax, 8));	// 114613 add     ax, 8 ;~ 24ED:38E5
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0038e8; 	X(MOV(*(dw*)(((db*)&word_36d84)), ax));	// 114614 mov     cs:word_36D84, ax ;~ 24ED:38E8
cs=0x24ed;eip=0x0038ec; 	T(LODSW);	// 114615 lodsw ;~ 24ED:38EC
cs=0x24ed;eip=0x0038ed; 	T(ADD(ax, 8));	// 114616 add     ax, 8 ;~ 24ED:38ED
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0038f0; 	X(MOV(*(dw*)(((db*)&word_36d86)), ax));	// 114617 mov     cs:word_36D86, ax ;~ 24ED:38F0
cs=0x24ed;eip=0x0038f4; 	T(MOV(si, di));	// 114618 mov     si, di ;~ 24ED:38F4
cs=0x24ed;eip=0x0038f6; 	T(LODSW);	// 114619 lodsw ;~ 24ED:38F6
cs=0x24ed;eip=0x0038f7; 	T(MOV(dx, ax));	// 114620 mov     dx, ax ;~ 24ED:38F7
cs=0x24ed;eip=0x0038f9; 	T(LODSW);	// 114621 lodsw ;~ 24ED:38F9
cs=0x24ed;eip=0x0038fa; 	T(MOV(bx, ax));	// 114622 mov     bx, ax ;~ 24ED:38FA
cs=0x24ed;eip=0x0038fc; 	T(LODSW);	// 114623 lodsw ;~ 24ED:38FC
cs=0x24ed;eip=0x0038fd; 	T(MOV(cx, ax));	// 114624 mov     cx, ax ;~ 24ED:38FD
cs=0x24ed;eip=0x0038ff; 	T(LODSW);	// 114625 lodsw ;~ 24ED:38FF
cs=0x24ed;eip=0x003900; 	T(MOV(si, ax));	// 114626 mov     si, ax ;~ 24ED:3900
cs=0x24ed;eip=0x003902; 	T(XCHG(cx, si));	// 114627 xchg    cx, si ;~ 24ED:3902
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003904; 	X(MOV(*(dw*)(((db*)&word_36d88)), dx));	// 114628 mov     cs:word_36D88, dx ;~ 24ED:3904
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003909; 	X(MOV(*(dw*)(((db*)&word_36d8a)), bx));	// 114629 mov     cs:word_36D8A, bx ;~ 24ED:3909
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00390e; 	X(MOV(*(dw*)(((db*)&word_36d8c)), si));	// 114630 mov     cs:word_36D8C, si ;~ 24ED:390E
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003913; 	X(MOV(*(dw*)(((db*)&word_36d8e)), cx));	// 114631 mov     cs:word_36D8E, cx ;~ 24ED:3913
cs=0x24ed;eip=0x003918; 	T(SUB(si, dx));	// 114632 sub     si, dx ;~ 24ED:3918
cs=0x24ed;eip=0x00391a; 	T(SHR(si, 1));	// 114633 shr     si, 1 ;~ 24ED:391A
cs=0x24ed;eip=0x00391c; 	T(SHR(si, 1));	// 114634 shr     si, 1 ;~ 24ED:391C
cs=0x24ed;eip=0x00391e; 	T(SHR(si, 1));	// 114635 shr     si, 1 ;~ 24ED:391E
cs=0x24ed;eip=0x003920; 	T(SHR(si, 1));	// 114636 shr     si, 1 ;~ 24ED:3920
cs=0x24ed;eip=0x003922; 	T(SUB(cx, bx));	// 114637 sub     cx, bx ;~ 24ED:3922
cs=0x24ed;eip=0x003924; 	T(SHR(cx, 1));	// 114638 shr     cx, 1 ;~ 24ED:3924
cs=0x24ed;eip=0x003926; 	T(SHR(cx, 1));	// 114639 shr     cx, 1 ;~ 24ED:3926
cs=0x24ed;eip=0x003928; 	T(SHR(cx, 1));	// 114640 shr     cx, 1 ;~ 24ED:3928
cs=0x24ed;eip=0x00392a; 	T(SHR(cx, 1));	// 114641 shr     cx, 1 ;~ 24ED:392A
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00392c; 	X(MOV(*(dw*)(((db*)&word_36d80)), si));	// 114642 mov     cs:word_36D80, si ;~ 24ED:392C
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003931; 	X(MOV(*(dw*)(((db*)&word_36d82)), cx));	// 114643 mov     cs:word_36D82, cx ;~ 24ED:3931
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003936; 	T(SUB(dx, *(dw*)(((db*)&word_36d84))));	// 114644 sub     dx, cs:word_36D84 ;~ 24ED:3936
cs=0x24ed;eip=0x00393b; 	X(PUSHF);	// 114645 pushf ;~ 24ED:393B
cs=0x24ed;eip=0x00393c; 	J(JNS(loc_36df0));	// 114646 jns     short loc_36DF0 ;~ 24ED:393C
cs=0x24ed;eip=0x00393e; 	T(NEG(dx));	// 114647 neg     dx ;~ 24ED:393E
loc_36df0:
	// 7616 
cs=0x24ed;eip=0x003940; 	T(SHR(dx, 1));	// 114650 shr     dx, 1 ;~ 24ED:3940
cs=0x24ed;eip=0x003942; 	T(SHR(dx, 1));	// 114651 shr     dx, 1 ;~ 24ED:3942
cs=0x24ed;eip=0x003944; 	T(SHR(dx, 1));	// 114652 shr     dx, 1 ;~ 24ED:3944
cs=0x24ed;eip=0x003946; 	T(SHR(dx, 1));	// 114653 shr     dx, 1 ;~ 24ED:3946
cs=0x24ed;eip=0x003948; 	X(POPF);	// 114654 popf ;~ 24ED:3948
cs=0x24ed;eip=0x003949; 	J(JNS(loc_36dfd));	// 114655 jns     short loc_36DFD ;~ 24ED:3949
cs=0x24ed;eip=0x00394b; 	T(NEG(dx));	// 114656 neg     dx ;~ 24ED:394B
loc_36dfd:
	// 7617 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00394d; 	X(MOV(*(dw*)(((db*)&word_36d7c)), dx));	// 114659 mov     cs:word_36D7C, dx ;~ 24ED:394D
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003952; 	T(SUB(bx, *(dw*)(((db*)&word_36d86))));	// 114660 sub     bx, cs:word_36D86 ;~ 24ED:3952
cs=0x24ed;eip=0x003957; 	X(PUSHF);	// 114661 pushf ;~ 24ED:3957
cs=0x24ed;eip=0x003958; 	J(JNS(loc_36e0c));	// 114662 jns     short loc_36E0C ;~ 24ED:3958
cs=0x24ed;eip=0x00395a; 	T(NEG(bx));	// 114663 neg     bx ;~ 24ED:395A
loc_36e0c:
	// 7618 
cs=0x24ed;eip=0x00395c; 	T(SHR(bx, 1));	// 114666 shr     bx, 1 ;~ 24ED:395C
cs=0x24ed;eip=0x00395e; 	T(SHR(bx, 1));	// 114667 shr     bx, 1 ;~ 24ED:395E
cs=0x24ed;eip=0x003960; 	T(SHR(bx, 1));	// 114668 shr     bx, 1 ;~ 24ED:3960
cs=0x24ed;eip=0x003962; 	T(SHR(bx, 1));	// 114669 shr     bx, 1 ;~ 24ED:3962
cs=0x24ed;eip=0x003964; 	X(POPF);	// 114670 popf ;~ 24ED:3964
cs=0x24ed;eip=0x003965; 	J(JNS(loc_36e19));	// 114671 jns     short loc_36E19 ;~ 24ED:3965
cs=0x24ed;eip=0x003967; 	T(NEG(bx));	// 114672 neg     bx ;~ 24ED:3967
loc_36e19:
	// 7619 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003969; 	X(MOV(*(dw*)(((db*)&word_36d7e)), bx));	// 114675 mov     cs:word_36D7E, bx ;~ 24ED:3969
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00396e; 	T(MOV(dx, *(dw*)(((db*)&word_36d84))));	// 114676 mov     dx, cs:word_36D84 ;~ 24ED:396E
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003973; 	T(MOV(bx, *(dw*)(((db*)&word_36d86))));	// 114677 mov     bx, cs:word_36D86 ;~ 24ED:3973
cs=0x24ed;eip=0x003978; 	T(XOR(cx, cx));	// 114678 xor     cx, cx ;~ 24ED:3978
cs=0x24ed;eip=0x00397a; 	T(XOR(si, si));	// 114679 xor     si, si ;~ 24ED:397A
loc_36e2c:
	// 7620 
cs=0x24ed;eip=0x00397c; 	X(PUSH(ds));	// 114682 push    ds ;~ 24ED:397C
cs=0x24ed;eip=0x00397d; 	X(PUSH(es));	// 114683 push    es ;~ 24ED:397D
cs=0x24ed;eip=0x00397e; 	X(POP(ds));	// 114684 pop     ds ;~ 24ED:397E
cs=0x24ed;eip=0x00397f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 114686 mov     ax, [bp+0] ;~ 24ED:397F
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003982; 	X(MOV(*(dw*)(((db*)&word_36d90)), ax));	// 114687 mov     cs:word_36D90, ax ;~ 24ED:3982
cs=0x24ed;eip=0x003986; 	T(MOV(ax, 0x0F));	// 114688 mov     ax, 0Fh ;~ 24ED:3986
loc_36e39:
	// 7621 
cs=0x24ed;eip=0x003989; 	X(PUSH(ax));	// 114691 push    ax ;~ 24ED:3989
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00398a; 	T(ADD(dx, *(dw*)(((db*)&word_36d7c))));	// 114692 add     dx, cs:word_36D7C ;~ 24ED:398A
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00398f; 	T(ADD(bx, *(dw*)(((db*)&word_36d7e))));	// 114693 add     bx, cs:word_36D7E ;~ 24ED:398F
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003994; 	T(ADD(si, *(dw*)(((db*)&word_36d80))));	// 114694 add     si, cs:word_36D80 ;~ 24ED:3994
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003999; 	T(ADD(cx, *(dw*)(((db*)&word_36d82))));	// 114695 add     cx, cs:word_36D82 ;~ 24ED:3999
cs=0x24ed;eip=0x00399e; 	X(PUSH(bx));	// 114696 push    bx ;~ 24ED:399E
cs=0x24ed;eip=0x00399f; 	X(PUSH(cx));	// 114697 push    cx ;~ 24ED:399F
cs=0x24ed;eip=0x0039a0; 	X(PUSH(dx));	// 114698 push    dx ;~ 24ED:39A0
cs=0x24ed;eip=0x0039a1; 	X(PUSH(si));	// 114699 push    si ;~ 24ED:39A1
cs=0x24ed;eip=0x0039a2; 	J(CALL(sub_36bef,0));	// 114700 call    sub_36BEF ;~ 24ED:39A2
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0039a5; 	T(MOV(bx, *(dw*)(((db*)&word_36d90))));	// 114701 mov     bx, cs:word_36D90 ;~ 24ED:39A5
cs=0x24ed;eip=0x0039aa; 	J(CALL(sub_359e1,0));	// 114702 call    sub_359E1 ;~ 24ED:39AA
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0039ad; 	X(MOV(*(dw*)(((db*)&word_36d90)), bx));	// 114703 mov     cs:word_36D90, bx ;~ 24ED:39AD
cs=0x24ed;eip=0x0039b2; 	X(POP(si));	// 114704 pop     si ;~ 24ED:39B2
cs=0x24ed;eip=0x0039b3; 	X(POP(dx));	// 114705 pop     dx ;~ 24ED:39B3
cs=0x24ed;eip=0x0039b4; 	X(POP(cx));	// 114706 pop     cx ;~ 24ED:39B4
cs=0x24ed;eip=0x0039b5; 	X(POP(bx));	// 114707 pop     bx ;~ 24ED:39B5
cs=0x24ed;eip=0x0039b6; 	X(PUSH(bx));	// 114708 push    bx ;~ 24ED:39B6
cs=0x24ed;eip=0x0039b7; 	X(PUSH(cx));	// 114709 push    cx ;~ 24ED:39B7
cs=0x24ed;eip=0x0039b8; 	X(PUSH(dx));	// 114710 push    dx ;~ 24ED:39B8
cs=0x24ed;eip=0x0039b9; 	X(PUSH(si));	// 114711 push    si ;~ 24ED:39B9
cs=0x24ed;eip=0x0039ba; 	J(CALL(sub_36bef,0));	// 114712 call    sub_36BEF ;~ 24ED:39BA
cs=0x24ed;eip=0x0039bd; 	X(POP(si));	// 114713 pop     si ;~ 24ED:39BD
cs=0x24ed;eip=0x0039be; 	X(POP(dx));	// 114714 pop     dx ;~ 24ED:39BE
cs=0x24ed;eip=0x0039bf; 	X(POP(cx));	// 114715 pop     cx ;~ 24ED:39BF
cs=0x24ed;eip=0x0039c0; 	X(POP(bx));	// 114716 pop     bx ;~ 24ED:39C0
cs=0x24ed;eip=0x0039c1; 	X(POP(ax));	// 114717 pop     ax ;~ 24ED:39C1
cs=0x24ed;eip=0x0039c2; 	T(DEC(ax));	// 114718 dec     ax ;~ 24ED:39C2
cs=0x24ed;eip=0x0039c3; 	J(JNZ(loc_36e39));	// 114719 jnz     short loc_36E39 ;~ 24ED:39C3
cs=0x24ed;eip=0x0039c5; 	X(POP(ds));	// 114720 pop     ds ;~ 24ED:39C5
cs=0x24ed;eip=0x0039c6; 	J(RETF(0));	// 114722 retf ;~ 24ED:39C6
loc_36e77:
	// 7622 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0039c7; 	T(MOV(dx, *(dw*)(((db*)&word_36d88))));	// 114727 mov     dx, cs:word_36D88 ;~ 24ED:39C7
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0039cc; 	T(MOV(bx, *(dw*)(((db*)&word_36d8a))));	// 114728 mov     bx, cs:word_36D8A ;~ 24ED:39CC
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0039d1; 	T(MOV(si, *(dw*)(((db*)&word_36d8c))));	// 114729 mov     si, cs:word_36D8C ;~ 24ED:39D1
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0039d6; 	T(MOV(cx, *(dw*)(((db*)&word_36d8e))));	// 114730 mov     cx, cs:word_36D8E ;~ 24ED:39D6
cs=0x24ed;eip=0x0039db; 	T(SUB(si, dx));	// 114731 sub     si, dx ;~ 24ED:39DB
cs=0x24ed;eip=0x0039dd; 	T(SUB(cx, bx));	// 114732 sub     cx, bx ;~ 24ED:39DD
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0039df; 	X(NEG(*(dw*)(((db*)&word_36d7c))));	// 114733 neg     cs:word_36D7C ;~ 24ED:39DF
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0039e4; 	X(NEG(*(dw*)(((db*)&word_36d7e))));	// 114734 neg     cs:word_36D7E ;~ 24ED:39E4
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0039e9; 	X(NEG(*(dw*)(((db*)&word_36d80))));	// 114735 neg     cs:word_36D80 ;~ 24ED:39E9
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0039ee; 	X(NEG(*(dw*)(((db*)&word_36d82))));	// 114736 neg     cs:word_36D82 ;~ 24ED:39EE
cs=0x24ed;eip=0x0039f3; 	J(JMP(loc_36e2c));	// 114737 jmp     short loc_36E2C ;~ 24ED:39F3

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_36d03: 	goto loc_36d03;
        case m2c::kloc_36d1b: 	goto loc_36d1b;
        case m2c::kloc_36d4d: 	goto loc_36d4d;
        case m2c::kloc_36d5b: 	goto loc_36d5b;
        case m2c::kloc_36d94: 	goto loc_36d94;
        case m2c::kloc_36df0: 	goto loc_36df0;
        case m2c::kloc_36dfd: 	goto loc_36dfd;
        case m2c::kloc_36e0c: 	goto loc_36e0c;
        case m2c::kloc_36e19: 	goto loc_36e19;
        case m2c::kloc_36e2c: 	goto loc_36e2c;
        case m2c::kloc_36e39: 	goto loc_36e39;
        case m2c::kloc_36e77: 	goto loc_36e77;
        case m2c::kseg002_384d_proc: 	goto seg002_384d_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36ea5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36ea5:
    _begin:
cs=0x24ed;eip=0x0039f5; 	X(PUSH(ax));	// 114745 push    ax ;~ 24ED:39F5
cs=0x24ed;eip=0x0039f6; 	X(PUSH(di));	// 114746 push    di ;~ 24ED:39F6
cs=0x24ed;eip=0x0039f7; 	J(CALL(sub_340a8,0));	// 114747 call    sub_340A8 ;~ 24ED:39F7
cs=0x24ed;eip=0x0039fa; 	X(POP(bx));	// 114748 pop     bx ;~ 24ED:39FA
cs=0x24ed;eip=0x0039fb; 	T(MOV(dx, ax));	// 114749 mov     dx, ax ;~ 24ED:39FB
loc_36ead:
	// 7623 
cs=0x24ed;eip=0x0039fd; 	T(SHR(bp, 1));	// 114752 shr     bp, 1 ;~ 24ED:39FD
cs=0x24ed;eip=0x0039ff; 	J(JNC(loc_36eb3));	// 114753 jnb     short loc_36EB3 ;~ 24ED:39FF
cs=0x24ed;eip=0x003a01; 	T(XOR(bp, si));	// 114754 xor     bp, si ;~ 24ED:3A01
loc_36eb3:
	// 7624 
cs=0x24ed;eip=0x003a03; 	T(MOV(ax, bp));	// 114757 mov     ax, bp ;~ 24ED:3A03
cs=0x24ed;eip=0x003a05; 	T(AND(ax, 3));	// 114758 and     ax, 3 ;~ 24ED:3A05
cs=0x24ed;eip=0x003a08; 	T(DEC(ax));	// 114759 dec     ax ;~ 24ED:3A08
cs=0x24ed;eip=0x003a09; 	T(ADD(al, dh));	// 114760 add     al, dh ;~ 24ED:3A09
cs=0x24ed;eip=0x003a0b; 	X(STOSB);	// 114761 stosb ;~ 24ED:3A0B
cs=0x24ed;eip=0x003a0c; 	T(ADD(dx, bx));	// 114762 add     dx, bx ;~ 24ED:3A0C
cs=0x24ed;eip=0x003a0e; 	J(LOOP(loc_36ead));	// 114763 loop    loc_36EAD ;~ 24ED:3A0E
	R(return sub_36ed0(0, _state););
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_36ead: 	goto loc_36ead;
        case m2c::kloc_36eb3: 	goto loc_36eb3;
        case m2c::ksub_36ea5: 	goto sub_36ea5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36ed0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36ed0:
    _begin:
cs=0x24ed;eip=0x003a20; 	J(CALL(sub_340a8,0));	// 114784 call    sub_340A8 ;~ 24ED:3A20
cs=0x24ed;eip=0x003a23; 	T(MOV(si, di));	// 114785 mov     si, di ;~ 24ED:3A23
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003a25; 	T(MOV(di, *(dw*)(((db*)&word_33653))));	// 114786 mov     di, cs:word_33653 ;~ 24ED:3A25
cs=0x24ed;eip=0x003a2a; 	T(SHL(bp, 1));	// 114787 shl     bp, 1           ; switch 8 cases ;~ 24ED:3A2A
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003a2c; __disp=*(dw*)(((db*)&jpt_36edc)+bp);
	J(return __dispatch_call(__disp, _state););	// 114788 jmp     cs:jpt_36EDC[bp] ; switch jump ;~ 24ED:3A2C
loc_36ee1:
	// 7625 
cs=0x24ed;eip=0x003a31; 	T(MOV(bx, 0x13));	// 114793 mov     bx, 13h         ; jumptable 00036EDC case 1 ;~ 24ED:3A31
loc_36ee4:
	// 7626 
cs=0x24ed;eip=0x003a34; 	T(MOV(cx, 0x28));	// 114796 mov     cx, 28h ; '(' ;~ 24ED:3A34
cs=0x24ed;eip=0x003a37; 	T(MOV(bp, 6));	// 114797 mov     bp, 6 ;~ 24ED:3A37
loc_36eea:
	// 7627 
cs=0x24ed;eip=0x003a3a; 	X(PUSH(cx));	// 114800 push    cx ;~ 24ED:3A3A
loc_36eeb:
	// 7628 
cs=0x24ed;eip=0x003a3b; 	T(LODSB);	// 114803 lodsb ;~ 24ED:3A3B
cs=0x24ed;eip=0x003a3c; 	T(MOV(ah, al));	// 114804 mov     ah, al ;~ 24ED:3A3C
cs=0x24ed;eip=0x003a3e; 	X(STOSW);	// 114805 stosw ;~ 24ED:3A3E
cs=0x24ed;eip=0x003a3f; 	X(MOVSW);	// 114806 movsw ;~ 24ED:3A3F
cs=0x24ed;eip=0x003a40; 	X(MOVSW);	// 114807 movsw ;~ 24ED:3A40
cs=0x24ed;eip=0x003a41; 	X(MOVSW);	// 114808 movsw ;~ 24ED:3A41
cs=0x24ed;eip=0x003a42; 	J(LOOP(loc_36eeb));	// 114809 loop    loc_36EEB ;~ 24ED:3A42
cs=0x24ed;eip=0x003a44; 	X(POP(cx));	// 114810 pop     cx ;~ 24ED:3A44
cs=0x24ed;eip=0x003a45; 	T(ADD(si, cx));	// 114811 add     si, cx ;~ 24ED:3A45
cs=0x24ed;eip=0x003a47; 	T(DEC(bp));	// 114812 dec     bp ;~ 24ED:3A47
cs=0x24ed;eip=0x003a48; 	J(JNZ(loc_36eea));	// 114813 jnz     short loc_36EEA ;~ 24ED:3A48
loc_36efa:
	// 7629 
cs=0x24ed;eip=0x003a4a; 	T(LODSB);	// 114816 lodsb ;~ 24ED:3A4A
cs=0x24ed;eip=0x003a4b; 	T(MOV(ah, al));	// 114817 mov     ah, al ;~ 24ED:3A4B
cs=0x24ed;eip=0x003a4d; 	X(MOV(*(dw*)(raddr(es,di+0x140)), ax));	// 114818 mov     es:[di+140h], ax ;~ 24ED:3A4D
cs=0x24ed;eip=0x003a52; 	X(STOSW);	// 114819 stosw ;~ 24ED:3A52
cs=0x24ed;eip=0x003a53; 	T(LODSW);	// 114820 lodsw ;~ 24ED:3A53
cs=0x24ed;eip=0x003a54; 	X(MOV(*(dw*)(raddr(es,di+0x140)), ax));	// 114821 mov     es:[di+140h], ax ;~ 24ED:3A54
cs=0x24ed;eip=0x003a59; 	X(STOSW);	// 114822 stosw ;~ 24ED:3A59
cs=0x24ed;eip=0x003a5a; 	T(LODSW);	// 114823 lodsw ;~ 24ED:3A5A
cs=0x24ed;eip=0x003a5b; 	X(MOV(*(dw*)(raddr(es,di+0x140)), ax));	// 114824 mov     es:[di+140h], ax ;~ 24ED:3A5B
cs=0x24ed;eip=0x003a60; 	X(STOSW);	// 114825 stosw ;~ 24ED:3A60
cs=0x24ed;eip=0x003a61; 	T(LODSW);	// 114826 lodsw ;~ 24ED:3A61
cs=0x24ed;eip=0x003a62; 	X(MOV(*(dw*)(raddr(es,di+0x140)), ax));	// 114827 mov     es:[di+140h], ax ;~ 24ED:3A62
cs=0x24ed;eip=0x003a67; 	X(STOSW);	// 114828 stosw ;~ 24ED:3A67
cs=0x24ed;eip=0x003a68; 	J(LOOP(loc_36efa));	// 114829 loop    loc_36EFA ;~ 24ED:3A68
cs=0x24ed;eip=0x003a6a; 	T(ADD(si, 0x28));	// 114830 add     si, 28h ; '(' ;~ 24ED:3A6A
cs=0x24ed;eip=0x003a6d; 	T(ADD(di, 0x140));	// 114831 add     di, 140h ;~ 24ED:3A6D
cs=0x24ed;eip=0x003a71; 	T(DEC(bx));	// 114832 dec     bx ;~ 24ED:3A71
cs=0x24ed;eip=0x003a72; 	J(JNZ(loc_36ee4));	// 114833 jnz     short loc_36EE4 ;~ 24ED:3A72
cs=0x24ed;eip=0x003a74; 	J(RETF(0));	// 114834 retf ;~ 24ED:3A74
loc_36f25:
	// 7630 
cs=0x24ed;eip=0x003a75; 	T(MOV(bx, 0x26));	// 114839 mov     bx, 26h ; '&'   ; jumptable 00036EDC case 2 ;~ 24ED:3A75
loc_36f28:
	// 7631 
cs=0x24ed;eip=0x003a78; 	T(MOV(cx, 0x50));	// 114842 mov     cx, 50h ; 'P' ;~ 24ED:3A78
cs=0x24ed;eip=0x003a7b; 	T(MOV(bp, 2));	// 114843 mov     bp, 2 ;~ 24ED:3A7B
loc_36f2e:
	// 7632 
cs=0x24ed;eip=0x003a7e; 	X(PUSH(cx));	// 114846 push    cx ;~ 24ED:3A7E
loc_36f2f:
	// 7633 
cs=0x24ed;eip=0x003a7f; 	T(LODSB);	// 114849 lodsb ;~ 24ED:3A7F
cs=0x24ed;eip=0x003a80; 	T(MOV(ah, al));	// 114850 mov     ah, al ;~ 24ED:3A80
cs=0x24ed;eip=0x003a82; 	X(STOSW);	// 114851 stosw ;~ 24ED:3A82
cs=0x24ed;eip=0x003a83; 	X(MOVSW);	// 114852 movsw ;~ 24ED:3A83
cs=0x24ed;eip=0x003a84; 	J(LOOP(loc_36f2f));	// 114853 loop    loc_36F2F ;~ 24ED:3A84
cs=0x24ed;eip=0x003a86; 	X(POP(cx));	// 114854 pop     cx ;~ 24ED:3A86
cs=0x24ed;eip=0x003a87; 	T(ADD(si, cx));	// 114855 add     si, cx ;~ 24ED:3A87
cs=0x24ed;eip=0x003a89; 	T(DEC(bp));	// 114856 dec     bp ;~ 24ED:3A89
cs=0x24ed;eip=0x003a8a; 	J(JNZ(loc_36f2e));	// 114857 jnz     short loc_36F2E ;~ 24ED:3A8A
loc_36f3c:
	// 7634 
cs=0x24ed;eip=0x003a8c; 	T(LODSB);	// 114860 lodsb ;~ 24ED:3A8C
cs=0x24ed;eip=0x003a8d; 	T(MOV(ah, al));	// 114861 mov     ah, al ;~ 24ED:3A8D
cs=0x24ed;eip=0x003a8f; 	X(MOV(*(dw*)(raddr(es,di+0x140)), ax));	// 114862 mov     es:[di+140h], ax ;~ 24ED:3A8F
cs=0x24ed;eip=0x003a94; 	X(STOSW);	// 114863 stosw ;~ 24ED:3A94
cs=0x24ed;eip=0x003a95; 	T(LODSW);	// 114864 lodsw ;~ 24ED:3A95
cs=0x24ed;eip=0x003a96; 	X(MOV(*(dw*)(raddr(es,di+0x140)), ax));	// 114865 mov     es:[di+140h], ax ;~ 24ED:3A96
cs=0x24ed;eip=0x003a9b; 	X(STOSW);	// 114866 stosw ;~ 24ED:3A9B
cs=0x24ed;eip=0x003a9c; 	J(LOOP(loc_36f3c));	// 114867 loop    loc_36F3C ;~ 24ED:3A9C
cs=0x24ed;eip=0x003a9e; 	T(ADD(si, 0x50));	// 114868 add     si, 50h ; 'P' ;~ 24ED:3A9E
cs=0x24ed;eip=0x003aa1; 	T(ADD(di, 0x140));	// 114869 add     di, 140h ;~ 24ED:3AA1
cs=0x24ed;eip=0x003aa5; 	T(DEC(bx));	// 114870 dec     bx ;~ 24ED:3AA5
cs=0x24ed;eip=0x003aa6; 	J(JNZ(loc_36f28));	// 114871 jnz     short loc_36F28 ;~ 24ED:3AA6
cs=0x24ed;eip=0x003aa8; 	J(RETF(0));	// 114872 retf ;~ 24ED:3AA8
loc_36f59:
	// 7635 
cs=0x24ed;eip=0x003aa9; 	T(MOV(bx, 0x32));	// 114877 mov     bx, 32h ; '2'   ; jumptable 00036EDC case 3 ;~ 24ED:3AA9
loc_36f5c:
	// 7636 
cs=0x24ed;eip=0x003aac; 	T(MOV(cx, 0x6A));	// 114880 mov     cx, 6Ah ; 'j' ;~ 24ED:3AAC
cs=0x24ed;eip=0x003aaf; 	X(PUSH(cx));	// 114881 push    cx ;~ 24ED:3AAF
loc_36f60:
	// 7637 
cs=0x24ed;eip=0x003ab0; 	T(LODSB);	// 114884 lodsb ;~ 24ED:3AB0
cs=0x24ed;eip=0x003ab1; 	T(MOV(ah, al));	// 114885 mov     ah, al ;~ 24ED:3AB1
cs=0x24ed;eip=0x003ab3; 	X(STOSW);	// 114886 stosw ;~ 24ED:3AB3
cs=0x24ed;eip=0x003ab4; 	X(MOVSB);	// 114887 movsb ;~ 24ED:3AB4
cs=0x24ed;eip=0x003ab5; 	J(LOOP(loc_36f60));	// 114888 loop    loc_36F60 ;~ 24ED:3AB5
cs=0x24ed;eip=0x003ab7; 	T(LODSB);	// 114889 lodsb ;~ 24ED:3AB7
cs=0x24ed;eip=0x003ab8; 	T(MOV(ah, al));	// 114890 mov     ah, al ;~ 24ED:3AB8
cs=0x24ed;eip=0x003aba; 	X(STOSW);	// 114891 stosw ;~ 24ED:3ABA
cs=0x24ed;eip=0x003abb; 	X(POP(cx));	// 114892 pop     cx ;~ 24ED:3ABB
cs=0x24ed;eip=0x003abc; 	T(ADD(si, cx));	// 114893 add     si, cx ;~ 24ED:3ABC
cs=0x24ed;eip=0x003abe; 	T(INC(si));	// 114894 inc     si ;~ 24ED:3ABE
loc_36f6f:
	// 7638 
cs=0x24ed;eip=0x003abf; 	T(LODSB);	// 114897 lodsb ;~ 24ED:3ABF
cs=0x24ed;eip=0x003ac0; 	T(MOV(ah, al));	// 114898 mov     ah, al ;~ 24ED:3AC0
cs=0x24ed;eip=0x003ac2; 	X(MOV(*(dw*)(raddr(es,di+0x140)), ax));	// 114899 mov     es:[di+140h], ax ;~ 24ED:3AC2
cs=0x24ed;eip=0x003ac7; 	X(STOSW);	// 114900 stosw ;~ 24ED:3AC7
cs=0x24ed;eip=0x003ac8; 	T(LODSB);	// 114901 lodsb ;~ 24ED:3AC8
cs=0x24ed;eip=0x003ac9; 	X(MOV(*(raddr(es,di+0x140)), al));	// 114902 mov     es:[di+140h], al ;~ 24ED:3AC9
cs=0x24ed;eip=0x003ace; 	X(STOSB);	// 114903 stosb ;~ 24ED:3ACE
cs=0x24ed;eip=0x003acf; 	J(LOOP(loc_36f6f));	// 114904 loop    loc_36F6F ;~ 24ED:3ACF
cs=0x24ed;eip=0x003ad1; 	T(LODSB);	// 114905 lodsb ;~ 24ED:3AD1
cs=0x24ed;eip=0x003ad2; 	T(MOV(ah, al));	// 114906 mov     ah, al ;~ 24ED:3AD2
cs=0x24ed;eip=0x003ad4; 	X(MOV(*(dw*)(raddr(es,di+0x140)), ax));	// 114907 mov     es:[di+140h], ax ;~ 24ED:3AD4
cs=0x24ed;eip=0x003ad9; 	X(STOSW);	// 114908 stosw ;~ 24ED:3AD9
cs=0x24ed;eip=0x003ada; 	T(ADD(si, 0x6B));	// 114909 add     si, 6Bh ; 'k' ;~ 24ED:3ADA
cs=0x24ed;eip=0x003add; 	T(ADD(di, 0x140));	// 114910 add     di, 140h ;~ 24ED:3ADD
cs=0x24ed;eip=0x003ae1; 	T(DEC(bx));	// 114911 dec     bx ;~ 24ED:3AE1
cs=0x24ed;eip=0x003ae2; 	J(JNZ(loc_36f5c));	// 114912 jnz     short loc_36F5C ;~ 24ED:3AE2
cs=0x24ed;eip=0x003ae4; 	J(RETF(0));	// 114913 retf ;~ 24ED:3AE4
loc_36f95:
	// 7639 
cs=0x24ed;eip=0x003ae5; 	T(MOV(bx, 0x4C));	// 114918 mov     bx, 4Ch ; 'L'   ; jumptable 00036EDC case 4 ;~ 24ED:3AE5
loc_36f98:
	// 7640 
cs=0x24ed;eip=0x003ae8; 	T(MOV(cx, 0x0A0));	// 114921 mov     cx, 0A0h ; ' ' ;~ 24ED:3AE8
loc_36f9b:
	// 7641 
cs=0x24ed;eip=0x003aeb; 	T(LODSB);	// 114924 lodsb ;~ 24ED:3AEB
cs=0x24ed;eip=0x003aec; 	T(MOV(ah, al));	// 114925 mov     ah, al ;~ 24ED:3AEC
cs=0x24ed;eip=0x003aee; 	X(MOV(*(dw*)(raddr(es,di+0x140)), ax));	// 114926 mov     es:[di+140h], ax ;~ 24ED:3AEE
cs=0x24ed;eip=0x003af3; 	X(STOSW);	// 114927 stosw ;~ 24ED:3AF3
cs=0x24ed;eip=0x003af4; 	J(LOOP(loc_36f9b));	// 114928 loop    loc_36F9B ;~ 24ED:3AF4
cs=0x24ed;eip=0x003af6; 	T(ADD(si, 0x0A0));	// 114929 add     si, 0A0h ; ' ' ;~ 24ED:3AF6
cs=0x24ed;eip=0x003afa; 	T(ADD(di, 0x140));	// 114930 add     di, 140h ;~ 24ED:3AFA
cs=0x24ed;eip=0x003afe; 	T(DEC(bx));	// 114931 dec     bx ;~ 24ED:3AFE
cs=0x24ed;eip=0x003aff; 	J(JNZ(loc_36f98));	// 114932 jnz     short loc_36F98 ;~ 24ED:3AFF
cs=0x24ed;eip=0x003b01; 	J(RETF(0));	// 114933 retf ;~ 24ED:3B01
loc_36fb2:
	// 7642 
cs=0x24ed;eip=0x003b02; 	T(MOV(bx, 0x32));	// 114938 mov     bx, 32h ; '2'   ; jumptable 00036EDC case 5 ;~ 24ED:3B02
loc_36fb5:
	// 7643 
cs=0x24ed;eip=0x003b05; 	T(MOV(cx, 0x6A));	// 114941 mov     cx, 6Ah ; 'j' ;~ 24ED:3B05
loc_36fb8:
	// 7644 
cs=0x24ed;eip=0x003b08; 	T(LODSB);	// 114944 lodsb ;~ 24ED:3B08
cs=0x24ed;eip=0x003b09; 	T(MOV(ah, al));	// 114945 mov     ah, al ;~ 24ED:3B09
cs=0x24ed;eip=0x003b0b; 	X(STOSW);	// 114946 stosw ;~ 24ED:3B0B
cs=0x24ed;eip=0x003b0c; 	X(STOSB);	// 114947 stosb ;~ 24ED:3B0C
cs=0x24ed;eip=0x003b0d; 	T(ADD(di, 0x13D));	// 114948 add     di, 13Dh ;~ 24ED:3B0D
cs=0x24ed;eip=0x003b11; 	X(STOSW);	// 114949 stosw ;~ 24ED:3B11
cs=0x24ed;eip=0x003b12; 	X(STOSB);	// 114950 stosb ;~ 24ED:3B12
cs=0x24ed;eip=0x003b13; 	T(ADD(di, 0x13D));	// 114951 add     di, 13Dh ;~ 24ED:3B13
cs=0x24ed;eip=0x003b17; 	X(STOSW);	// 114952 stosw ;~ 24ED:3B17
cs=0x24ed;eip=0x003b18; 	X(STOSB);	// 114953 stosb ;~ 24ED:3B18
cs=0x24ed;eip=0x003b19; 	T(SUB(di, 0x280));	// 114954 sub     di, 280h ;~ 24ED:3B19
cs=0x24ed;eip=0x003b1d; 	J(LOOP(loc_36fb8));	// 114955 loop    loc_36FB8 ;~ 24ED:3B1D
cs=0x24ed;eip=0x003b1f; 	T(LODSB);	// 114956 lodsb ;~ 24ED:3B1F
cs=0x24ed;eip=0x003b20; 	T(MOV(ah, al));	// 114957 mov     ah, al ;~ 24ED:3B20
cs=0x24ed;eip=0x003b22; 	X(STOSW);	// 114958 stosw ;~ 24ED:3B22
cs=0x24ed;eip=0x003b23; 	T(ADD(di, 0x13E));	// 114959 add     di, 13Eh ;~ 24ED:3B23
cs=0x24ed;eip=0x003b27; 	X(STOSW);	// 114960 stosw ;~ 24ED:3B27
cs=0x24ed;eip=0x003b28; 	T(ADD(di, 0x13E));	// 114961 add     di, 13Eh ;~ 24ED:3B28
cs=0x24ed;eip=0x003b2c; 	X(STOSW);	// 114962 stosw ;~ 24ED:3B2C
cs=0x24ed;eip=0x003b2d; 	T(ADD(si, 0x0D5));	// 114963 add     si, 0D5h ; 'Õ' ;~ 24ED:3B2D
cs=0x24ed;eip=0x003b31; 	T(DEC(bx));	// 114964 dec     bx ;~ 24ED:3B31
cs=0x24ed;eip=0x003b32; 	J(JNZ(loc_36fb5));	// 114965 jnz     short loc_36FB5 ;~ 24ED:3B32
cs=0x24ed;eip=0x003b34; 	T(MOV(cx, 0x6A));	// 114966 mov     cx, 6Ah ; 'j' ;~ 24ED:3B34
loc_36fe7:
	// 7645 
cs=0x24ed;eip=0x003b37; 	T(LODSB);	// 114969 lodsb ;~ 24ED:3B37
cs=0x24ed;eip=0x003b38; 	T(MOV(ah, al));	// 114970 mov     ah, al ;~ 24ED:3B38
cs=0x24ed;eip=0x003b3a; 	X(STOSW);	// 114971 stosw ;~ 24ED:3B3A
cs=0x24ed;eip=0x003b3b; 	X(STOSB);	// 114972 stosb ;~ 24ED:3B3B
cs=0x24ed;eip=0x003b3c; 	T(ADD(di, 0x13D));	// 114973 add     di, 13Dh ;~ 24ED:3B3C
cs=0x24ed;eip=0x003b40; 	X(STOSW);	// 114974 stosw ;~ 24ED:3B40
cs=0x24ed;eip=0x003b41; 	X(STOSB);	// 114975 stosb ;~ 24ED:3B41
cs=0x24ed;eip=0x003b42; 	T(SUB(di, 0x140));	// 114976 sub     di, 140h ;~ 24ED:3B42
cs=0x24ed;eip=0x003b46; 	J(LOOP(loc_36fe7));	// 114977 loop    loc_36FE7 ;~ 24ED:3B46
cs=0x24ed;eip=0x003b48; 	T(LODSB);	// 114978 lodsb ;~ 24ED:3B48
cs=0x24ed;eip=0x003b49; 	T(MOV(ah, al));	// 114979 mov     ah, al ;~ 24ED:3B49
cs=0x24ed;eip=0x003b4b; 	X(STOSW);	// 114980 stosw ;~ 24ED:3B4B
loc_36ffc:
	// 7646 
cs=0x24ed;eip=0x003b4c; 	T(ADD(di, 0x13E));	// 114983 add     di, 13Eh ;~ 24ED:3B4C
cs=0x24ed;eip=0x003b50; 	X(STOSW);	// 114984 stosw ;~ 24ED:3B50
cs=0x24ed;eip=0x003b51; 	J(RETF(0));	// 114985 retf ;~ 24ED:3B51
loc_37002:
	// 7647 
cs=0x24ed;eip=0x003b52; 	T(MOV(bx, 0x26));	// 114990 mov     bx, 26h ; '&'   ; jumptable 00036EDC case 6 ;~ 24ED:3B52
loc_37005:
	// 7648 
cs=0x24ed;eip=0x003b55; 	T(MOV(cx, 0x50));	// 114993 mov     cx, 50h ; 'P' ;~ 24ED:3B55
loc_37008:
	// 7649 
cs=0x24ed;eip=0x003b58; 	T(LODSB);	// 114996 lodsb ;~ 24ED:3B58
cs=0x24ed;eip=0x003b59; 	T(MOV(ah, al));	// 114997 mov     ah, al ;~ 24ED:3B59
cs=0x24ed;eip=0x003b5b; 	T(MOV(bp, 4));	// 114998 mov     bp, 4 ;~ 24ED:3B5B
loc_3700e:
	// 7650 
cs=0x24ed;eip=0x003b5e; 	X(STOSW);	// 115001 stosw ;~ 24ED:3B5E
cs=0x24ed;eip=0x003b5f; 	X(STOSW);	// 115002 stosw ;~ 24ED:3B5F
cs=0x24ed;eip=0x003b60; 	T(ADD(di, 0x13C));	// 115003 add     di, 13Ch ;~ 24ED:3B60
cs=0x24ed;eip=0x003b64; 	T(DEC(bp));	// 115004 dec     bp ;~ 24ED:3B64
cs=0x24ed;eip=0x003b65; 	J(JNZ(loc_3700e));	// 115005 jnz     short loc_3700E ;~ 24ED:3B65
cs=0x24ed;eip=0x003b67; 	T(SUB(di, 0x4FC));	// 115006 sub     di, 4FCh ;~ 24ED:3B67
cs=0x24ed;eip=0x003b6b; 	J(LOOP(loc_37008));	// 115007 loop    loc_37008 ;~ 24ED:3B6B
cs=0x24ed;eip=0x003b6d; 	T(ADD(si, 0x0F0));	// 115008 add     si, 0F0h ; 'ğ' ;~ 24ED:3B6D
cs=0x24ed;eip=0x003b71; 	T(ADD(di, 0x3C0));	// 115009 add     di, 3C0h ;~ 24ED:3B71
cs=0x24ed;eip=0x003b75; 	T(DEC(bx));	// 115010 dec     bx ;~ 24ED:3B75
cs=0x24ed;eip=0x003b76; 	J(JNZ(loc_37005));	// 115011 jnz     short loc_37005 ;~ 24ED:3B76
cs=0x24ed;eip=0x003b78; 	J(RETF(0));	// 115012 retf ;~ 24ED:3B78
loc_37029:
	// 7651 
cs=0x24ed;eip=0x003b79; 	T(MOV(bx, 0x13));	// 115017 mov     bx, 13h         ; jumptable 00036EDC case 7 ;~ 24ED:3B79
loc_3702c:
	// 7652 
cs=0x24ed;eip=0x003b7c; 	T(MOV(cx, 0x28));	// 115020 mov     cx, 28h ; '(' ;~ 24ED:3B7C
loc_3702f:
	// 7653 
cs=0x24ed;eip=0x003b7f; 	T(LODSB);	// 115023 lodsb ;~ 24ED:3B7F
cs=0x24ed;eip=0x003b80; 	T(MOV(ah, al));	// 115024 mov     ah, al ;~ 24ED:3B80
cs=0x24ed;eip=0x003b82; 	T(MOV(bp, 8));	// 115025 mov     bp, 8 ;~ 24ED:3B82
loc_37035:
	// 7654 
cs=0x24ed;eip=0x003b85; 	X(STOSW);	// 115028 stosw ;~ 24ED:3B85
cs=0x24ed;eip=0x003b86; 	X(STOSW);	// 115029 stosw ;~ 24ED:3B86
cs=0x24ed;eip=0x003b87; 	X(STOSW);	// 115030 stosw ;~ 24ED:3B87
cs=0x24ed;eip=0x003b88; 	X(STOSW);	// 115031 stosw ;~ 24ED:3B88
cs=0x24ed;eip=0x003b89; 	T(ADD(di, 0x138));	// 115032 add     di, 138h ;~ 24ED:3B89
cs=0x24ed;eip=0x003b8d; 	T(DEC(bp));	// 115033 dec     bp ;~ 24ED:3B8D
cs=0x24ed;eip=0x003b8e; 	J(JNZ(loc_37035));	// 115034 jnz     short loc_37035 ;~ 24ED:3B8E
cs=0x24ed;eip=0x003b90; 	T(SUB(di, 0x9F8));	// 115035 sub     di, 9F8h ;~ 24ED:3B90
cs=0x24ed;eip=0x003b94; 	J(LOOP(loc_3702f));	// 115036 loop    loc_3702F ;~ 24ED:3B94
cs=0x24ed;eip=0x003b96; 	T(ADD(si, 0x118));	// 115037 add     si, 118h ;~ 24ED:3B96
cs=0x24ed;eip=0x003b9a; 	T(ADD(di, 0x8C0));	// 115038 add     di, 8C0h ;~ 24ED:3B9A
cs=0x24ed;eip=0x003b9e; 	T(DEC(bx));	// 115039 dec     bx ;~ 24ED:3B9E
cs=0x24ed;eip=0x003b9f; 	J(JNZ(loc_3702c));	// 115040 jnz     short loc_3702C ;~ 24ED:3B9F
cs=0x24ed;eip=0x003ba1; 	J(RETF(0));	// 115041 retf ;~ 24ED:3BA1

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_36ee1: 	goto loc_36ee1;
        case m2c::kloc_36ee4: 	goto loc_36ee4;
        case m2c::kloc_36eea: 	goto loc_36eea;
        case m2c::kloc_36eeb: 	goto loc_36eeb;
        case m2c::kloc_36efa: 	goto loc_36efa;
        case m2c::kloc_36f25: 	goto loc_36f25;
        case m2c::kloc_36f28: 	goto loc_36f28;
        case m2c::kloc_36f2e: 	goto loc_36f2e;
        case m2c::kloc_36f2f: 	goto loc_36f2f;
        case m2c::kloc_36f3c: 	goto loc_36f3c;
        case m2c::kloc_36f59: 	goto loc_36f59;
        case m2c::kloc_36f5c: 	goto loc_36f5c;
        case m2c::kloc_36f60: 	goto loc_36f60;
        case m2c::kloc_36f6f: 	goto loc_36f6f;
        case m2c::kloc_36f95: 	goto loc_36f95;
        case m2c::kloc_36f98: 	goto loc_36f98;
        case m2c::kloc_36f9b: 	goto loc_36f9b;
        case m2c::kloc_36fb2: 	goto loc_36fb2;
        case m2c::kloc_36fb5: 	goto loc_36fb5;
        case m2c::kloc_36fb8: 	goto loc_36fb8;
        case m2c::kloc_36fe7: 	goto loc_36fe7;
        case m2c::kloc_36ffc: 	goto loc_36ffc;
        case m2c::kloc_37002: 	goto loc_37002;
        case m2c::kloc_37005: 	goto loc_37005;
        case m2c::kloc_37008: 	goto loc_37008;
        case m2c::kloc_3700e: 	goto loc_3700e;
        case m2c::kloc_37029: 	goto loc_37029;
        case m2c::kloc_3702c: 	goto loc_3702c;
        case m2c::kloc_3702f: 	goto loc_3702f;
        case m2c::kloc_37035: 	goto loc_37035;
        case m2c::ksub_36ed0: 	goto sub_36ed0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

