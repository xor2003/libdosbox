/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

#include "vikings.exe.h"


bool sub_100bb(m2c::_offsets, struct m2c::_STATE* _state){return start(m2c::ksub_100bb, _state);}

 bool nullsub_6(m2c::_offsets, struct m2c::_STATE* _state){return _group12(m2c::knullsub_6, _state);}

 bool seg000_28d1_proc(m2c::_offsets, struct m2c::_STATE* _state){return _group1(m2c::kseg000_28d1_proc, _state);}

 bool seg000_76bc_proc(m2c::_offsets, struct m2c::_STATE* _state){return _group11(m2c::kseg000_76bc_proc, _state);}

 bool seg003_470_proc(m2c::_offsets, struct m2c::_STATE* _state){return _group13(m2c::kseg003_470_proc, _state);}

 bool seg003_f9e_proc(m2c::_offsets, struct m2c::_STATE* _state){return _group14(m2c::kseg003_f9e_proc, _state);}

 bool sub_12948(m2c::_offsets, struct m2c::_STATE* _state){return _group1(m2c::ksub_12948, _state);}

 bool sub_14487(m2c::_offsets, struct m2c::_STATE* _state){return _group2(m2c::ksub_14487, _state);}

 bool sub_144ad(m2c::_offsets, struct m2c::_STATE* _state){return _group2(m2c::ksub_144ad, _state);}

 bool sub_146d0(m2c::_offsets, struct m2c::_STATE* _state){return _group3(m2c::ksub_146d0, _state);}

 bool sub_146de(m2c::_offsets, struct m2c::_STATE* _state){return _group3(m2c::ksub_146de, _state);}

 bool sub_146f6(m2c::_offsets, struct m2c::_STATE* _state){return _group4(m2c::ksub_146f6, _state);}

 bool sub_14704(m2c::_offsets, struct m2c::_STATE* _state){return _group4(m2c::ksub_14704, _state);}

 bool sub_14713(m2c::_offsets, struct m2c::_STATE* _state){return _group5(m2c::ksub_14713, _state);}

 bool sub_14721(m2c::_offsets, struct m2c::_STATE* _state){return _group5(m2c::ksub_14721, _state);}

 bool sub_1473d(m2c::_offsets, struct m2c::_STATE* _state){return _group6(m2c::ksub_1473d, _state);}

 bool sub_1474b(m2c::_offsets, struct m2c::_STATE* _state){return _group6(m2c::ksub_1474b, _state);}

 bool sub_14763(m2c::_offsets, struct m2c::_STATE* _state){return _group7(m2c::ksub_14763, _state);}

 bool sub_14771(m2c::_offsets, struct m2c::_STATE* _state){return _group7(m2c::ksub_14771, _state);}

 bool sub_1477d(m2c::_offsets, struct m2c::_STATE* _state){return _group8(m2c::ksub_1477d, _state);}

 bool sub_1478b(m2c::_offsets, struct m2c::_STATE* _state){return _group8(m2c::ksub_1478b, _state);}

 bool sub_151bc(m2c::_offsets, struct m2c::_STATE* _state){return _group9(m2c::ksub_151bc, _state);}

 bool sub_151f6(m2c::_offsets, struct m2c::_STATE* _state){return _group9(m2c::ksub_151f6, _state);}

 bool sub_1555c(m2c::_offsets, struct m2c::_STATE* _state){return _group10(m2c::ksub_1555c, _state);}

 bool sub_15569(m2c::_offsets, struct m2c::_STATE* _state){return _group10(m2c::ksub_15569, _state);}

 bool sub_17561(m2c::_offsets, struct m2c::_STATE* _state){return _group11(m2c::ksub_17561, _state);}

 bool sub_17791(m2c::_offsets, struct m2c::_STATE* _state){return _group12(m2c::ksub_17791, _state);}

 bool sub_1c8f1(m2c::_offsets, struct m2c::_STATE* _state){return _group13(m2c::ksub_1c8f1, _state);}

 bool sub_1d3b2(m2c::_offsets, struct m2c::_STATE* _state){return _group14(m2c::ksub_1d3b2, _state);}

namespace m2c{ m2cf* _ENTRY_POINT_ = &start;}
        
 bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
    X86_REGREF
    if ((__i>>16) == 0) {__i |= ((dd)cs) << 16;}

    __disp=__i;
    if ((__disp >> 16) == 0xf000)
	{m2c::log_debug("Calling BIOS %x\n",__disp);
/*cs=0xf000;eip=__disp&0xffff;*/m2c::fix_segs();
if (from_callf) m2c::interpret_unknown_callf(0xf000,eip=__disp&0xffff,1);
m2c::log_debug("doing return1\n");
m2c::shadow_stack.noneedreturn();return true;}
    switch (__i) {
        case m2c::kmainproc: 	mainproc(0, _state); break;
        case m2c::kstart: 	start(0, _state); break;
        case m2c::kloc_1001e: 	start(__disp, _state); break;
        case m2c::ksub_100bb: 	sub_100bb(0, _state); break;
        case m2c::kloc_1011b: 	sub_100bb(__disp, _state); break;
        case m2c::kloc_10121: 	sub_100bb(__disp, _state); break;
        case m2c::kloc_100f7: 	sub_100bb(__disp, _state); break;
        case m2c::kloc_1012d: 	sub_100bb(__disp, _state); break;
        case m2c::ksub_10130: 	sub_10130(0, _state); break;
        case m2c::ksub_10138: 	sub_10138(0, _state); break;
        case m2c::kloc_10191: 	sub_10138(__disp, _state); break;
        case m2c::kloc_1014b: 	sub_10138(__disp, _state); break;
        case m2c::kloc_10164: 	sub_10138(__disp, _state); break;
        case m2c::kloc_10169: 	sub_10138(__disp, _state); break;
        case m2c::kloc_10151: 	sub_10138(__disp, _state); break;
        case m2c::kseg000_1ac_proc: 	seg000_1ac_proc(0, _state); break;
        case m2c::kloc_101b5: 	seg000_1ac_proc(__disp, _state); break;
        case m2c::ksub_101be: 	sub_101be(0, _state); break;
        case m2c::kloc_101d4: 	sub_101be(__disp, _state); break;
        case m2c::kloc_101df: 	sub_101be(__disp, _state); break;
        case m2c::kloc_101e8: 	sub_101be(__disp, _state); break;
        case m2c::kloc_101f7: 	sub_101be(__disp, _state); break;
        case m2c::kloc_10202: 	sub_101be(__disp, _state); break;
        case m2c::kloc_101d9: 	sub_101be(__disp, _state); break;
        case m2c::kloc_101ee: 	sub_101be(__disp, _state); break;
        case m2c::kloc_101fc: 	sub_101be(__disp, _state); break;
        case m2c::kloc_101f9: 	sub_101be(__disp, _state); break;
        case m2c::kloc_101f1: 	sub_101be(__disp, _state); break;
        case m2c::kloc_101ce: 	sub_101be(__disp, _state); break;
        case m2c::kloc_1020b: 	sub_101be(__disp, _state); break;
        case m2c::kloc_101e4: 	sub_101be(__disp, _state); break;
        case m2c::kloc_101cb: 	sub_101be(__disp, _state); break;
        case m2c::ksub_1020f: 	sub_1020f(0, _state); break;
        case m2c::ksub_10255: 	sub_10255(0, _state); break;
        case m2c::ksub_102ad: 	sub_102ad(0, _state); break;
        case m2c::kloc_10336: 	sub_102ad(__disp, _state); break;
        case m2c::kloc_1033c: 	sub_102ad(__disp, _state); break;
        case m2c::kloc_10317: 	sub_102ad(__disp, _state); break;
        case m2c::kloc_102e8: 	sub_102ad(__disp, _state); break;
        case m2c::kloc_1034a: 	sub_102ad(__disp, _state); break;
        case m2c::kloc_102b5: 	sub_102ad(__disp, _state); break;
        case m2c::kloc_1031f: 	sub_102ad(__disp, _state); break;
        case m2c::klocret_102b4: 	sub_102ad(__disp, _state); break;
        case m2c::kloc_10332: 	sub_102ad(__disp, _state); break;
        case m2c::kloc_10344: 	sub_102ad(__disp, _state); break;
        case m2c::kloc_10309: 	sub_102ad(__disp, _state); break;
        case m2c::kloc_102f0: 	sub_102ad(__disp, _state); break;
        case m2c::ksub_10350: 	sub_10350(0, _state); break;
        case m2c::kloc_1037f: 	sub_10350(__disp, _state); break;
        case m2c::kloc_103b7: 	sub_10350(__disp, _state); break;
        case m2c::kloc_10389: 	sub_10350(__disp, _state); break;
        case m2c::kloc_10374: 	sub_10350(__disp, _state); break;
        case m2c::klocret_103c9: 	sub_10350(__disp, _state); break;
        case m2c::ksub_103ca: 	sub_103ca(0, _state); break;
        case m2c::klocret_1041b: 	sub_103ca(__disp, _state); break;
        case m2c::ksub_1041c: 	sub_1041c(0, _state); break;
        case m2c::kloc_10469: 	sub_1041c(__disp, _state); break;
        case m2c::klocret_1047b: 	sub_1041c(__disp, _state); break;
        case m2c::ksub_1047c: 	sub_1047c(0, _state); break;
        case m2c::ksub_104a1: 	sub_104a1(0, _state); break;
        case m2c::kloc_104ff: 	sub_104a1(__disp, _state); break;
        case m2c::kloc_104c3: 	sub_104a1(__disp, _state); break;
        case m2c::kloc_104f0: 	sub_104a1(__disp, _state); break;
        case m2c::ksub_10555: 	sub_10555(0, _state); break;
        case m2c::kloc_105ac: 	sub_10555(__disp, _state); break;
        case m2c::klocret_105ca: 	sub_10555(__disp, _state); break;
        case m2c::kloc_10598: 	sub_10555(__disp, _state); break;
        case m2c::kloc_10577: 	sub_10555(__disp, _state); break;
        case m2c::ksub_105cb: 	sub_105cb(0, _state); break;
        case m2c::kloc_10649: 	sub_105cb(__disp, _state); break;
        case m2c::kloc_10631: 	sub_105cb(__disp, _state); break;
        case m2c::kloc_10617: 	sub_105cb(__disp, _state); break;
        case m2c::kloc_105f1: 	sub_105cb(__disp, _state); break;
        case m2c::kloc_10624: 	sub_105cb(__disp, _state); break;
        case m2c::kloc_1063d: 	sub_105cb(__disp, _state); break;
        case m2c::ksub_1064b: 	sub_1064b(0, _state); break;
        case m2c::kloc_106bb: 	sub_1064b(__disp, _state); break;
        case m2c::klocret_10703: 	sub_1064b(__disp, _state); break;
        case m2c::kloc_106f6: 	sub_1064b(__disp, _state); break;
        case m2c::kloc_10689: 	sub_1064b(__disp, _state); break;
        case m2c::kloc_106ae: 	sub_1064b(__disp, _state); break;
        case m2c::kloc_10698: 	sub_1064b(__disp, _state); break;
        case m2c::kloc_106d4: 	sub_1064b(__disp, _state); break;
        case m2c::kloc_106e1: 	sub_1064b(__disp, _state); break;
        case m2c::ksub_10704: 	sub_10704(0, _state); break;
        case m2c::klocret_10752: 	sub_10704(__disp, _state); break;
        case m2c::kloc_10719: 	sub_10704(__disp, _state); break;
        case m2c::kloc_1073f: 	sub_10704(__disp, _state); break;
        case m2c::kloc_1072c: 	sub_10704(__disp, _state); break;
        case m2c::ksub_10753: 	sub_10753(0, _state); break;
        case m2c::klocret_107a1: 	sub_10753(__disp, _state); break;
        case m2c::kloc_10768: 	sub_10753(__disp, _state); break;
        case m2c::kloc_1077b: 	sub_10753(__disp, _state); break;
        case m2c::kloc_1078e: 	sub_10753(__disp, _state); break;
        case m2c::kloc_107a2: 	seg000_7a2_proc(__disp, _state); break;
        case m2c::klocret_10812: 	seg000_7a2_proc(__disp, _state); break;
        case m2c::kloc_107d5: 	seg000_7a2_proc(__disp, _state); break;
        case m2c::kloc_107c9: 	seg000_7a2_proc(__disp, _state); break;
        case m2c::kloc_10802: 	seg000_7a2_proc(__disp, _state); break;
        case m2c::ksub_10813: 	sub_10813(0, _state); break;
        case m2c::kloc_10862: 	sub_10813(__disp, _state); break;
        case m2c::klocret_1081c: 	sub_10813(__disp, _state); break;
        case m2c::kloc_1085f: 	sub_10813(__disp, _state); break;
        case m2c::kloc_1081d: 	sub_10813(__disp, _state); break;
        case m2c::ksub_1086f: 	sub_1086f(0, _state); break;
        case m2c::kloc_108a5: 	sub_1086f(__disp, _state); break;
        case m2c::ksub_108b8: 	sub_108b8(0, _state); break;
        case m2c::ksub_108c8: 	sub_108c8(0, _state); break;
        case m2c::kloc_108f5: 	sub_108c8(__disp, _state); break;
        case m2c::kloc_10935: 	sub_108c8(__disp, _state); break;
        case m2c::klocret_1097e: 	sub_108c8(__disp, _state); break;
        case m2c::kloc_10959: 	sub_108c8(__disp, _state); break;
        case m2c::kloc_1092d: 	sub_108c8(__disp, _state); break;
        case m2c::ksub_10982: 	sub_10982(0, _state); break;
        case m2c::kloc_10b1f: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10b99: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10ac9: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10bef: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10b43: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10a44: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10b27: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10bd3: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10c48: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10ad1: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10bcb: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10c45: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10c9e: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10ab0: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10a97: 	sub_10982(__disp, _state); break;
        case m2c::kloc_1098e: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10c9b: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10a41: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10a5a: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10c08: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10a7b: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10b46: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10c21: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10aed: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10bf2: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10cd5: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10b06: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10b9c: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10b75: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10bb2: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10a9a: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10b5c: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10c7f: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10ccd: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10a11: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10989: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10b7d: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10c29: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10c5e: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10a73: 	sub_10982(__disp, _state); break;
        case m2c::kloc_1099f: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10a22: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10c77: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10cb4: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10af0: 	sub_10982(__disp, _state); break;
        case m2c::kloc_10997: 	sub_10982(__disp, _state); break;
        case m2c::ksub_10cd8: 	sub_10cd8(0, _state); break;
        case m2c::kloc_10d8a: 	sub_10cd8(__disp, _state); break;
        case m2c::kloc_10d8e: 	sub_10cd8(__disp, _state); break;
        case m2c::ksub_10d96: 	sub_10d96(0, _state); break;
        case m2c::ksub_10d9f: 	sub_10d9f(0, _state); break;
        case m2c::kloc_10da6: 	sub_10d9f(__disp, _state); break;
        case m2c::kseg000_dae_proc: 	seg000_dae_proc(0, _state); break;
        case m2c::kloc_10db7: 	seg000_dae_proc(__disp, _state); break;
        case m2c::ksub_10dba: 	sub_10dba(0, _state); break;
        case m2c::kloc_10e30: 	sub_10dba(__disp, _state); break;
        case m2c::kloc_10e35: 	seg000_e35_proc(__disp, _state); break;
        case m2c::ksub_10e85: 	sub_10e85(0, _state); break;
        case m2c::ksub_10e99: 	sub_10e99(0, _state); break;
        case m2c::kloc_10eeb: 	sub_10e99(__disp, _state); break;
        case m2c::kloc_10efc: 	sub_10e99(__disp, _state); break;
        case m2c::kloc_10ef5: 	sub_10e99(__disp, _state); break;
        case m2c::kloc_10ecf: 	sub_10e99(__disp, _state); break;
        case m2c::kloc_10ed7: 	sub_10e99(__disp, _state); break;
        case m2c::kloc_10ee5: 	sub_10e99(__disp, _state); break;
        case m2c::kloc_10edd: 	sub_10e99(__disp, _state); break;
        case m2c::kloc_10ec9: 	sub_10e99(__disp, _state); break;
        case m2c::kloc_10ec2: 	sub_10e99(__disp, _state); break;
        case m2c::ksub_10f03: 	sub_10f03(0, _state); break;
        case m2c::kloc_10f2c: 	sub_10f03(__disp, _state); break;
        case m2c::kloc_10f41: 	sub_10f03(__disp, _state); break;
        case m2c::kloc_10f4f: 	sub_10f03(__disp, _state); break;
        case m2c::kloc_10f33: 	sub_10f03(__disp, _state); break;
        case m2c::kloc_10f39: 	sub_10f03(__disp, _state); break;
        case m2c::kloc_10f47: 	sub_10f03(__disp, _state); break;
        case m2c::kloc_10f55: 	sub_10f03(__disp, _state); break;
        case m2c::ksub_10f5d: 	sub_10f5d(0, _state); break;
        case m2c::kloc_10f61: 	sub_10f5d(__disp, _state); break;
        case m2c::ksub_10fa0: 	sub_10fa0(0, _state); break;
        case m2c::kloc_10fa4: 	sub_10fa0(__disp, _state); break;
        case m2c::ksub_10fe6: 	sub_10fe6(0, _state); break;
        case m2c::ksub_10ffc: 	sub_10ffc(0, _state); break;
        case m2c::kloc_11005: 	sub_10ffc(__disp, _state); break;
        case m2c::kloc_1104d: 	sub_10ffc(__disp, _state); break;
        case m2c::kloc_1106b: 	sub_10ffc(__disp, _state); break;
        case m2c::klocret_1106e: 	sub_10ffc(__disp, _state); break;
        case m2c::ksub_1106f: 	sub_1106f(0, _state); break;
        case m2c::kloc_1107b: 	sub_1106f(__disp, _state); break;
        case m2c::ksub_11080: 	sub_11080(0, _state); break;
        case m2c::kloc_11153: 	sub_11080(__disp, _state); break;
        case m2c::ksub_11192: 	sub_11192(0, _state); break;
        case m2c::kloc_11195: 	sub_11192(__disp, _state); break;
        case m2c::ksub_111a1: 	sub_111a1(0, _state); break;
        case m2c::ksub_111b1: 	sub_111b1(0, _state); break;
        case m2c::kloc_111d4: 	sub_111b1(__disp, _state); break;
        case m2c::ksub_111df: 	sub_111df(0, _state); break;
        case m2c::ksub_11204: 	sub_11204(0, _state); break;
        case m2c::kloc_112a2: 	sub_11204(__disp, _state); break;
        case m2c::kloc_1127b: 	sub_11204(__disp, _state); break;
        case m2c::kloc_1121b: 	sub_11204(__disp, _state); break;
        case m2c::kloc_11254: 	sub_11204(__disp, _state); break;
        case m2c::ksub_112ae: 	sub_112ae(0, _state); break;
        case m2c::kloc_112da: 	sub_112ae(__disp, _state); break;
        case m2c::ksub_1133a: 	sub_1133a(0, _state); break;
        case m2c::kloc_11381: 	sub_1133a(__disp, _state); break;
        case m2c::kloc_1136b: 	sub_1133a(__disp, _state); break;
        case m2c::kloc_11347: 	sub_1133a(__disp, _state); break;
        case m2c::kloc_11379: 	sub_1133a(__disp, _state); break;
        case m2c::ksub_11383: 	sub_11383(0, _state); break;
        case m2c::kloc_11393: 	sub_11383(__disp, _state); break;
        case m2c::kloc_11386: 	sub_11383(__disp, _state); break;
        case m2c::ksub_11397: 	sub_11397(0, _state); break;
        case m2c::ksub_113b0: 	sub_113b0(0, _state); break;
        case m2c::ksub_113d8: 	sub_113d8(0, _state); break;
        case m2c::kloc_113f2: 	sub_113d8(__disp, _state); break;
        case m2c::kloc_11424: 	sub_113d8(__disp, _state); break;
        case m2c::kloc_113fb: 	sub_113d8(__disp, _state); break;
        case m2c::kloc_113e6: 	sub_113d8(__disp, _state); break;
        case m2c::kloc_1141b: 	sub_113d8(__disp, _state); break;
        case m2c::ksub_11439: 	sub_11439(0, _state); break;
        case m2c::kloc_11443: 	sub_11439(__disp, _state); break;
        case m2c::ksub_11446: 	sub_11446(0, _state); break;
        case m2c::kloc_114f8: 	sub_11446(__disp, _state); break;
        case m2c::kloc_114b9: 	sub_11446(__disp, _state); break;
        case m2c::kloc_1154a: 	sub_11446(__disp, _state); break;
        case m2c::kloc_1152c: 	sub_11446(__disp, _state); break;
        case m2c::kloc_1146a: 	sub_11446(__disp, _state); break;
        case m2c::kloc_11526: 	sub_11446(__disp, _state); break;
        case m2c::kloc_114b1: 	sub_11446(__disp, _state); break;
        case m2c::kloc_11496: 	sub_11446(__disp, _state); break;
        case m2c::kloc_114f2: 	sub_11446(__disp, _state); break;
        case m2c::kloc_114a8: 	sub_11446(__disp, _state); break;
        case m2c::kloc_1149f: 	sub_11446(__disp, _state); break;
        case m2c::kloc_114bd: 	sub_11446(__disp, _state); break;
        case m2c::ksub_11569: 	sub_11569(0, _state); break;
        case m2c::ksub_115d2: 	sub_115d2(0, _state); break;
        case m2c::ksub_1167a: 	sub_1167a(0, _state); break;
        case m2c::kloc_11680: 	sub_1167a(__disp, _state); break;
        case m2c::kloc_116aa: 	sub_1167a(__disp, _state); break;
        case m2c::ksub_116ae: 	sub_116ae(0, _state); break;
        case m2c::klocret_116e2: 	sub_116ae(__disp, _state); break;
        case m2c::kloc_116b1: 	sub_116ae(__disp, _state); break;
        case m2c::ksub_116e3: 	sub_116e3(0, _state); break;
        case m2c::kloc_11723: 	sub_116e3(__disp, _state); break;
        case m2c::kloc_11733: 	sub_116e3(__disp, _state); break;
        case m2c::kloc_11720: 	sub_116e3(__disp, _state); break;
        case m2c::kloc_11780: 	sub_116e3(__disp, _state); break;
        case m2c::kloc_11774: 	sub_116e3(__disp, _state); break;
        case m2c::kloc_11771: 	sub_116e3(__disp, _state); break;
        case m2c::kloc_1176c: 	sub_116e3(__disp, _state); break;
        case m2c::kseg000_1783_proc: 	seg000_1783_proc(0, _state); break;
        case m2c::ksub_11784: 	sub_11784(0, _state); break;
        case m2c::ksub_11792: 	sub_11792(0, _state); break;
        case m2c::klocret_117ac: 	sub_11792(__disp, _state); break;
        case m2c::ksub_117ad: 	sub_117ad(0, _state); break;
        case m2c::klocret_117cf: 	sub_117ad(__disp, _state); break;
        case m2c::ksub_117d0: 	sub_117d0(0, _state); break;
        case m2c::kloc_1181e: 	sub_117d0(__disp, _state); break;
        case m2c::kloc_1180a: 	sub_117d0(__disp, _state); break;
        case m2c::kloc_117f6: 	sub_117d0(__disp, _state); break;
        case m2c::kloc_11833: 	sub_117d0(__disp, _state); break;
        case m2c::ksub_1183d: 	sub_1183d(0, _state); break;
        case m2c::kloc_11890: 	sub_1183d(__disp, _state); break;
        case m2c::kloc_1186a: 	sub_1183d(__disp, _state); break;
        case m2c::kloc_118a3: 	sub_1183d(__disp, _state); break;
        case m2c::kloc_1184c: 	sub_1183d(__disp, _state); break;
        case m2c::kloc_1187d: 	sub_1183d(__disp, _state); break;
        case m2c::ksub_118ad: 	sub_118ad(0, _state); break;
        case m2c::ksub_11aa4: 	sub_11aa4(0, _state); break;
        case m2c::kloc_11ad7: 	sub_11aa4(__disp, _state); break;
        case m2c::kloc_11ac2: 	sub_11aa4(__disp, _state); break;
        case m2c::kloc_11aec: 	sub_11aa4(__disp, _state); break;
        case m2c::kloc_11b01: 	sub_11aa4(__disp, _state); break;
        case m2c::ksub_11b0b: 	sub_11b0b(0, _state); break;
        case m2c::kloc_11b3e: 	sub_11b0b(__disp, _state); break;
        case m2c::kloc_11b51: 	sub_11b0b(__disp, _state); break;
        case m2c::kloc_11b5f: 	sub_11b0b(__disp, _state); break;
        case m2c::klocret_11ba4: 	sub_11b0b(__disp, _state); break;
        case m2c::kloc_11b84: 	sub_11b0b(__disp, _state); break;
        case m2c::kloc_11b92: 	sub_11b0b(__disp, _state); break;
        case m2c::kloc_11b2c: 	sub_11b0b(__disp, _state); break;
        case m2c::kloc_11b71: 	sub_11b0b(__disp, _state); break;
        case m2c::kloc_11b1e: 	sub_11b0b(__disp, _state); break;
        case m2c::ksub_11ba5: 	sub_11ba5(0, _state); break;
        case m2c::kloc_11c4b: 	sub_11ba5(__disp, _state); break;
        case m2c::klocret_11bb6: 	sub_11ba5(__disp, _state); break;
        case m2c::kloc_11c1f: 	sub_11ba5(__disp, _state); break;
        case m2c::kloc_11bb7: 	sub_11ba5(__disp, _state); break;
        case m2c::ksub_11c52: 	sub_11c52(0, _state); break;
        case m2c::kloc_11c8f: 	sub_11c52(__disp, _state); break;
        case m2c::kloc_11cb1: 	sub_11c52(__disp, _state); break;
        case m2c::klocret_11cba: 	sub_11c52(__disp, _state); break;
        case m2c::klocret_11c8e: 	sub_11c52(__disp, _state); break;
        case m2c::kloc_11c7f: 	sub_11c52(__disp, _state); break;
        case m2c::ksub_11cbb: 	sub_11cbb(0, _state); break;
        case m2c::kloc_11dd7: 	sub_11cbb(__disp, _state); break;
        case m2c::kloc_11f27: 	sub_11cbb(__disp, _state); break;
        case m2c::kloc_11f45: 	sub_11cbb(__disp, _state); break;
        case m2c::kloc_11e1b: 	sub_11cbb(__disp, _state); break;
        case m2c::kloc_11d6d: 	sub_11cbb(__disp, _state); break;
        case m2c::kloc_11d04: 	sub_11cbb(__disp, _state); break;
        case m2c::kloc_11de2: 	sub_11cbb(__disp, _state); break;
        case m2c::kloc_11ee4: 	sub_11cbb(__disp, _state); break;
        case m2c::kloc_11cfc: 	sub_11cbb(__disp, _state); break;
        case m2c::kloc_11d8a: 	sub_11cbb(__disp, _state); break;
        case m2c::kloc_11d44: 	sub_11cbb(__disp, _state); break;
        case m2c::kloc_11e5e: 	sub_11cbb(__disp, _state); break;
        case m2c::kloc_11d51: 	sub_11cbb(__disp, _state); break;
        case m2c::kloc_11d92: 	sub_11cbb(__disp, _state); break;
        case m2c::kloc_11d6f: 	sub_11cbb(__disp, _state); break;
        case m2c::kloc_11d34: 	sub_11cbb(__disp, _state); break;
        case m2c::kloc_11d5e: 	sub_11cbb(__disp, _state); break;
        case m2c::kloc_11ea1: 	sub_11cbb(__disp, _state); break;
        case m2c::kloc_11d39: 	sub_11cbb(__disp, _state); break;
        case m2c::kloc_11d11: 	sub_11cbb(__disp, _state); break;
        case m2c::kloc_11f35: 	sub_11cbb(__disp, _state); break;
        case m2c::kloc_11d7e: 	sub_11cbb(__disp, _state); break;
        case m2c::kloc_11cf7: 	sub_11cbb(__disp, _state); break;
        case m2c::kloc_11cd4: 	sub_11cbb(__disp, _state); break;
        case m2c::kloc_11dcb: 	sub_11cbb(__disp, _state); break;
        case m2c::kloc_11cc5: 	sub_11cbb(__disp, _state); break;
        case m2c::ksub_11f47: 	sub_11f47(0, _state); break;
        case m2c::kloc_11f6d: 	sub_11f47(__disp, _state); break;
        case m2c::kloc_11f89: 	sub_11f47(__disp, _state); break;
        case m2c::kloc_11f5a: 	sub_11f47(__disp, _state); break;
        case m2c::kloc_11f79: 	sub_11f47(__disp, _state); break;
        case m2c::ksub_11f93: 	sub_11f93(0, _state); break;
        case m2c::kloc_11fc2: 	sub_11f93(__disp, _state); break;
        case m2c::kloc_11ffb: 	sub_11f93(__disp, _state); break;
        case m2c::kloc_11fb1: 	sub_11f93(__disp, _state); break;
        case m2c::ksub_1200a: 	sub_1200a(0, _state); break;
        case m2c::ksub_1201d: 	sub_1201d(0, _state); break;
        case m2c::kloc_12020: 	sub_1201d(__disp, _state); break;
        case m2c::ksub_12034: 	sub_12034(0, _state); break;
        case m2c::ksub_1205b: 	sub_1205b(0, _state); break;
        case m2c::kloc_1207e: 	sub_1205b(__disp, _state); break;
        case m2c::klocret_120d0: 	sub_1205b(__disp, _state); break;
        case m2c::kloc_120a7: 	sub_1205b(__disp, _state); break;
        case m2c::ksub_120d1: 	sub_120d1(0, _state); break;
        case m2c::ksub_120ff: 	sub_120ff(0, _state); break;
        case m2c::kloc_12183: 	sub_120ff(__disp, _state); break;
        case m2c::kloc_12120: 	sub_120ff(__disp, _state); break;
        case m2c::kloc_12111: 	sub_120ff(__disp, _state); break;
        case m2c::kloc_1211d: 	sub_120ff(__disp, _state); break;
        case m2c::kloc_12186: 	sub_120ff(__disp, _state); break;
        case m2c::kloc_12150: 	sub_120ff(__disp, _state); break;
        case m2c::kloc_12153: 	sub_120ff(__disp, _state); break;
        case m2c::klocret_12198: 	sub_120ff(__disp, _state); break;
        case m2c::kloc_12177: 	sub_120ff(__disp, _state); break;
        case m2c::kloc_12165: 	sub_120ff(__disp, _state); break;
        case m2c::kloc_12144: 	sub_120ff(__disp, _state); break;
        case m2c::kloc_12132: 	sub_120ff(__disp, _state); break;
        case m2c::ksub_12199: 	sub_12199(0, _state); break;
        case m2c::kloc_121b0: 	sub_12199(__disp, _state); break;
        case m2c::kloc_1219c: 	sub_12199(__disp, _state); break;
        case m2c::ksub_121b9: 	sub_121b9(0, _state); break;
        case m2c::klocret_121f5: 	sub_121b9(__disp, _state); break;
        case m2c::ksub_121f6: 	sub_121f6(0, _state); break;
        case m2c::kloc_1221d: 	sub_121f6(__disp, _state); break;
        case m2c::kloc_1220a: 	sub_121f6(__disp, _state); break;
        case m2c::ksub_12250: 	sub_12250(0, _state); break;
        case m2c::kloc_12279: 	sub_12250(__disp, _state); break;
        case m2c::kloc_12272: 	sub_12250(__disp, _state); break;
        case m2c::kloc_12274: 	sub_12250(__disp, _state); break;
        case m2c::kloc_12264: 	sub_12250(__disp, _state); break;
        case m2c::ksub_1227e: 	sub_1227e(0, _state); break;
        case m2c::kloc_122a5: 	sub_1227e(__disp, _state); break;
        case m2c::kloc_122ba: 	sub_1227e(__disp, _state); break;
        case m2c::kloc_1229f: 	sub_1227e(__disp, _state); break;
        case m2c::ksub_122c0: 	sub_122c0(0, _state); break;
        case m2c::kloc_122ef: 	sub_122c0(__disp, _state); break;
        case m2c::kloc_122e1: 	sub_122c0(__disp, _state); break;
        case m2c::kloc_122db: 	sub_122c0(__disp, _state); break;
        case m2c::ksub_122f3: 	sub_122f3(0, _state); break;
        case m2c::kloc_12309: 	sub_122f3(__disp, _state); break;
        case m2c::ksub_12312: 	sub_12312(0, _state); break;
        case m2c::kloc_12335: 	sub_12312(__disp, _state); break;
        case m2c::ksub_12345: 	sub_12345(0, _state); break;
        case m2c::ksub_12352: 	sub_12352(0, _state); break;
        case m2c::kloc_12363: 	sub_12352(__disp, _state); break;
        case m2c::ksub_1237f: 	sub_1237f(0, _state); break;
        case m2c::kloc_12382: 	sub_1237f(__disp, _state); break;
        case m2c::ksub_12388: 	sub_12388(0, _state); break;
        case m2c::kloc_12415: 	sub_12388(__disp, _state); break;
        case m2c::kloc_123e2: 	sub_12388(__disp, _state); break;
        case m2c::kloc_123c1: 	sub_12388(__disp, _state); break;
        case m2c::kloc_1239d: 	sub_12388(__disp, _state); break;
        case m2c::kloc_1240f: 	sub_12388(__disp, _state); break;
        case m2c::kloc_123b5: 	sub_12388(__disp, _state); break;
        case m2c::kloc_12412: 	sub_12388(__disp, _state); break;
        case m2c::ksub_1241e: 	sub_1241e(0, _state); break;
        case m2c::ksub_1242e: 	sub_1242e(0, _state); break;
        case m2c::ksub_1246d: 	sub_1246d(0, _state); break;
        case m2c::ksub_124a9: 	sub_124a9(0, _state); break;
        case m2c::ksub_124c5: 	sub_124a9(__disp, _state); break;
        case m2c::kloc_124d8: 	sub_124a9(__disp, _state); break;
        case m2c::kloc_12509: 	sub_124a9(__disp, _state); break;
        case m2c::kloc_124ec: 	sub_124a9(__disp, _state); break;
        case m2c::kloc_12502: 	sub_124a9(__disp, _state); break;
        case m2c::kloc_124e5: 	sub_124a9(__disp, _state); break;

        case m2c::ksub_1250b: 	sub_1250b(0, _state); break;
        case m2c::ksub_12515: 	sub_12515(0, _state); break;
        case m2c::ksub_12529: 	sub_12529(0, _state); break;
        case m2c::ksub_12543: 	sub_12543(0, _state); break;
        case m2c::ksub_12549: 	sub_12549(0, _state); break;
        case m2c::kloc_1257a: 	sub_12549(__disp, _state); break;
        case m2c::kloc_12577: 	sub_12549(__disp, _state); break;
        case m2c::kloc_12585: 	sub_12549(__disp, _state); break;
        case m2c::kloc_1256f: 	sub_12549(__disp, _state); break;
        case m2c::kloc_12597: 	sub_12549(__disp, _state); break;
        case m2c::kloc_1258c: 	sub_12549(__disp, _state); break;
        case m2c::kloc_12591: 	sub_12549(__disp, _state); break;
        case m2c::ksub_125a3: 	sub_125a3(0, _state); break;
        case m2c::kloc_125ca: 	sub_125a3(__disp, _state); break;
        case m2c::kloc_125f3: 	sub_125a3(__disp, _state); break;
        case m2c::kloc_125f0: 	sub_125a3(__disp, _state); break;
        case m2c::kloc_125c7: 	sub_125a3(__disp, _state); break;
        case m2c::ksub_125fa: 	sub_125fa(0, _state); break;
        case m2c::ksub_12613: 	sub_12613(0, _state); break;
        case m2c::kloc_1262f: 	sub_12613(__disp, _state); break;
        case m2c::kloc_1261f: 	sub_12613(__disp, _state); break;
        case m2c::ksub_12634: 	sub_12634(0, _state); break;
        case m2c::ksub_1265b: 	sub_1265b(0, _state); break;
        case m2c::ksub_12669: 	sub_12669(0, _state); break;
        case m2c::ksub_1267b: 	sub_1267b(0, _state); break;
        case m2c::ksub_1268d: 	sub_1268d(0, _state); break;
        case m2c::ksub_126a9: 	sub_126a9(0, _state); break;
        case m2c::ksub_126ef: 	sub_126ef(0, _state); break;
        case m2c::ksub_12709: 	sub_12709(0, _state); break;
        case m2c::ksub_12738: 	sub_12738(0, _state); break;
        case m2c::ksub_12758: 	sub_12758(0, _state); break;
        case m2c::kloc_12777: 	sub_12758(__disp, _state); break;
        case m2c::ksub_127db: 	sub_127db(0, _state); break;
        case m2c::ksub_127e4: 	sub_127e4(0, _state); break;
        case m2c::ksub_12816: 	sub_12816(0, _state); break;
        case m2c::ksub_12829: 	sub_12829(0, _state); break;
        case m2c::kloc_1286d: 	sub_12829(__disp, _state); break;
        case m2c::kloc_1282e: 	sub_12829(__disp, _state); break;
        case m2c::kloc_1285e: 	sub_12829(__disp, _state); break;
        case m2c::ksub_1287a: 	sub_1287a(0, _state); break;
        case m2c::ksub_128a9: 	sub_128a9(0, _state); break;
        case m2c::kloc_128cf: 	sub_128a9(__disp, _state); break;
        case m2c::ksub_1292f: 	sub_1292f(0, _state); break;
        case m2c::klocret_12947: 	sub_1292f(__disp, _state); break;
        case m2c::ksub_12989: 	sub_12989(0, _state); break;
        case m2c::kloc_12a8c: 	sub_12989(__disp, _state); break;
        case m2c::kloc_12aa6: 	sub_12989(__disp, _state); break;
        case m2c::kloc_12aaf: 	sub_12989(__disp, _state); break;
        case m2c::kloc_129e2: 	sub_12989(__disp, _state); break;
        case m2c::kloc_12a9d: 	sub_12989(__disp, _state); break;
        case m2c::kloc_12a06: 	sub_12989(__disp, _state); break;
        case m2c::kloc_12a84: 	sub_12989(__disp, _state); break;
        case m2c::klocret_12a83: 	sub_12989(__disp, _state); break;
        case m2c::kloc_12a94: 	sub_12989(__disp, _state); break;
        case m2c::ksub_12ab8: 	sub_12ab8(0, _state); break;
        case m2c::kloc_12b47: 	sub_12ab8(__disp, _state); break;
        case m2c::ksub_12ca3: 	sub_12ca3(0, _state); break;
        case m2c::ksub_12ce4: 	sub_12ce4(0, _state); break;
        case m2c::kloc_12cf9: 	sub_12ce4(__disp, _state); break;
        case m2c::ksub_12d2c: 	sub_12d2c(0, _state); break;
        case m2c::kloc_12d4f: 	sub_12d2c(__disp, _state); break;
        case m2c::kloc_12d49: 	sub_12d2c(__disp, _state); break;
        case m2c::kloc_12d6b: 	sub_12d2c(__disp, _state); break;
        case m2c::ksub_12d72: 	sub_12d72(0, _state); break;
        case m2c::kloc_12dd2: 	sub_12d72(__disp, _state); break;
        case m2c::klocret_12dc3: 	sub_12d72(__disp, _state); break;
        case m2c::kloc_12de6: 	sub_12d72(__disp, _state); break;
        case m2c::kloc_12dfa: 	sub_12d72(__disp, _state); break;
        case m2c::kloc_12dc4: 	sub_12d72(__disp, _state); break;
        case m2c::kloc_12d9b: 	sub_12d72(__disp, _state); break;
        case m2c::ksub_12e16: 	sub_12e16(0, _state); break;
        case m2c::klocret_12e2c: 	sub_12e16(__disp, _state); break;
        case m2c::ksub_12e2d: 	sub_12e2d(0, _state); break;
        case m2c::kloc_12e68: 	sub_12e2d(__disp, _state); break;
        case m2c::kloc_12e5d: 	sub_12e2d(__disp, _state); break;
        case m2c::klocret_12e78: 	sub_12e2d(__disp, _state); break;
        case m2c::kloc_12e75: 	sub_12e2d(__disp, _state); break;
        case m2c::kloc_12e50: 	sub_12e2d(__disp, _state); break;
        case m2c::ksub_12e79: 	sub_12e79(0, _state); break;
        case m2c::klocret_12e83: 	sub_12e79(__disp, _state); break;
        case m2c::ksub_12e84: 	sub_12e84(0, _state); break;
        case m2c::kloc_12ecd: 	sub_12e84(__disp, _state); break;
        case m2c::kloc_12ebf: 	sub_12e84(__disp, _state); break;
        case m2c::klocret_12eec: 	sub_12e84(__disp, _state); break;
        case m2c::kloc_12e98: 	sub_12e84(__disp, _state); break;
        case m2c::kloc_12eb7: 	sub_12e84(__disp, _state); break;
        case m2c::kloc_12eb3: 	sub_12e84(__disp, _state); break;
        case m2c::kloc_12ea3: 	sub_12e84(__disp, _state); break;
        case m2c::kseg000_2eed_proc: 	seg000_2eed_proc(0, _state); break;
        case m2c::kloc_12ef1: 	seg000_2eed_proc(__disp, _state); break;
        case m2c::ksub_12ef8: 	sub_12ef8(0, _state); break;
        case m2c::kloc_12f17: 	sub_12ef8(__disp, _state); break;
        case m2c::kloc_12f46: 	sub_12ef8(__disp, _state); break;
        case m2c::kloc_12f6a: 	sub_12ef8(__disp, _state); break;
        case m2c::kloc_12f22: 	sub_12ef8(__disp, _state); break;
        case m2c::kloc_12f2c: 	sub_12ef8(__disp, _state); break;
        case m2c::kloc_12f37: 	sub_12ef8(__disp, _state); break;
        case m2c::kloc_12f52: 	sub_12ef8(__disp, _state); break;
        case m2c::kloc_12f5e: 	sub_12ef8(__disp, _state); break;
        case m2c::klocret_12f81: 	sub_12ef8(__disp, _state); break;
        case m2c::kloc_12f73: 	sub_12ef8(__disp, _state); break;
        case m2c::ksub_12f82: 	sub_12f82(0, _state); break;
        case m2c::kloc_12f9f: 	sub_12f82(__disp, _state); break;
        case m2c::kloc_12faa: 	sub_12f82(__disp, _state); break;
        case m2c::kloc_12fa5: 	sub_12f82(__disp, _state); break;
        case m2c::kloc_12f8f: 	sub_12f82(__disp, _state); break;
        case m2c::ksub_12fb3: 	sub_12fb3(0, _state); break;
        case m2c::kloc_12fb6: 	sub_12fb3(__disp, _state); break;
        case m2c::ksub_12fc6: 	sub_12fc6(0, _state); break;
        case m2c::ksub_12fcb: 	sub_12fcb(0, _state); break;
        case m2c::ksub_12fd0: 	sub_12fd0(0, _state); break;
        case m2c::kloc_12fd5: 	sub_12fd0(__disp, _state); break;
        case m2c::kloc_12fdc: 	sub_12fd0(__disp, _state); break;
        case m2c::ksub_12fe5: 	sub_12fe5(0, _state); break;
        case m2c::klocret_13030: 	sub_12fe5(__disp, _state); break;
        case m2c::kloc_1301b: 	sub_12fe5(__disp, _state); break;
        case m2c::ksub_13031: 	sub_13031(0, _state); break;
        case m2c::ksub_1303a: 	sub_1303a(0, _state); break;
        case m2c::klocret_13083: 	sub_1303a(__disp, _state); break;
        case m2c::ksub_13084: 	sub_13084(0, _state); break;
        case m2c::klocret_130a1: 	sub_13084(__disp, _state); break;
        case m2c::kloc_13091: 	sub_13084(__disp, _state); break;
        case m2c::ksub_130a2: 	sub_130a2(0, _state); break;
        case m2c::kloc_130c1: 	sub_130a2(__disp, _state); break;
        case m2c::kloc_130d1: 	sub_130a2(__disp, _state); break;
        case m2c::kloc_130db: 	sub_130a2(__disp, _state); break;
        case m2c::ksub_130ef: 	sub_130ef(0, _state); break;
        case m2c::kloc_13132: 	sub_130ef(__disp, _state); break;
        case m2c::kloc_13128: 	sub_130ef(__disp, _state); break;
        case m2c::kloc_13106: 	sub_130ef(__disp, _state); break;
        case m2c::ksub_13158: 	sub_13158(0, _state); break;
        case m2c::kloc_1318a: 	sub_13158(__disp, _state); break;
        case m2c::kloc_1317a: 	sub_13158(__disp, _state); break;
        case m2c::kloc_13194: 	sub_13158(__disp, _state); break;
        case m2c::kloc_1316f: 	sub_13158(__disp, _state); break;
        case m2c::ksub_131a4: 	sub_131a4(0, _state); break;
        case m2c::kloc_131b0: 	sub_131a4(__disp, _state); break;
        case m2c::klocret_131f0: 	sub_131a4(__disp, _state); break;
        case m2c::kloc_131d2: 	sub_131a4(__disp, _state); break;
        case m2c::ksub_131f1: 	sub_131f1(0, _state); break;
        case m2c::kloc_13208: 	sub_131f1(__disp, _state); break;
        case m2c::kloc_13213: 	sub_131f1(__disp, _state); break;
        case m2c::kloc_13223: 	sub_131f1(__disp, _state); break;
        case m2c::kloc_1322d: 	sub_131f1(__disp, _state); break;
        case m2c::ksub_1323d: 	sub_1323d(0, _state); break;
        case m2c::kloc_13249: 	sub_1323d(__disp, _state); break;
        case m2c::kloc_1326b: 	sub_1323d(__disp, _state); break;
        case m2c::klocret_13285: 	sub_1323d(__disp, _state); break;
        case m2c::ksub_13286: 	sub_13286(0, _state); break;
        case m2c::ksub_13288: 	sub_13288(0, _state); break;
        case m2c::kloc_132ba: 	sub_13288(__disp, _state); break;
        case m2c::kloc_132b0: 	sub_13288(__disp, _state); break;
        case m2c::kloc_13297: 	sub_13288(__disp, _state); break;
        case m2c::ksub_132df: 	sub_132df(0, _state); break;
        case m2c::kloc_1335f: 	sub_132df(__disp, _state); break;
        case m2c::kloc_13381: 	sub_132df(__disp, _state); break;
        case m2c::kloc_132fb: 	sub_132df(__disp, _state); break;
        case m2c::kloc_13355: 	sub_132df(__disp, _state); break;
        case m2c::kloc_13316: 	sub_132df(__disp, _state); break;
        case m2c::kloc_1330f: 	sub_132df(__disp, _state); break;
        case m2c::ksub_1339f: 	sub_1339f(0, _state); break;
        case m2c::kloc_133ae: 	sub_1339f(__disp, _state); break;
        case m2c::kloc_133c9: 	sub_1339f(__disp, _state); break;
        case m2c::kloc_133bf: 	sub_1339f(__disp, _state); break;
        case m2c::ksub_133de: 	sub_133de(0, _state); break;
        case m2c::kloc_133ed: 	sub_133de(__disp, _state); break;
        case m2c::kloc_133ff: 	sub_133de(__disp, _state); break;
        case m2c::kloc_13409: 	sub_133de(__disp, _state); break;
        case m2c::ksub_1341f: 	sub_1341f(0, _state); break;
        case m2c::kloc_1343f: 	sub_1341f(__disp, _state); break;
        case m2c::kloc_1342e: 	sub_1341f(__disp, _state); break;
        case m2c::kloc_13449: 	sub_1341f(__disp, _state); break;
        case m2c::ksub_1345e: 	sub_1345e(0, _state); break;
        case m2c::ksub_1346d: 	sub_1346d(0, _state); break;
        case m2c::ksub_1346f: 	sub_1346f(0, _state); break;
        case m2c::ksub_13474: 	sub_13474(0, _state); break;
        case m2c::ksub_13480: 	sub_13480(0, _state); break;
        case m2c::ksub_13485: 	sub_13485(0, _state); break;
        case m2c::ksub_1348a: 	sub_1348a(0, _state); break;
        case m2c::kloc_134ac: 	sub_1348a(__disp, _state); break;
        case m2c::kloc_1348d: 	sub_1348a(__disp, _state); break;
        case m2c::kloc_134b6: 	sub_1348a(__disp, _state); break;
        case m2c::kloc_1349c: 	sub_1348a(__disp, _state); break;
        case m2c::ksub_134ca: 	sub_134ca(0, _state); break;
        case m2c::ksub_134d3: 	sub_134d3(0, _state); break;
        case m2c::ksub_134d7: 	sub_134d7(0, _state); break;
        case m2c::ksub_134dc: 	sub_134dc(0, _state); break;
        case m2c::kloc_1352c: 	sub_134dc(__disp, _state); break;
        case m2c::kloc_1354f: 	sub_134dc(__disp, _state); break;
        case m2c::kloc_1355a: 	sub_134dc(__disp, _state); break;
        case m2c::kloc_1355f: 	sub_134dc(__disp, _state); break;
        case m2c::kloc_1353e: 	sub_134dc(__disp, _state); break;
        case m2c::kloc_13566: 	sub_134dc(__disp, _state); break;
        case m2c::kloc_13533: 	sub_134dc(__disp, _state); break;
        case m2c::ksub_1356e: 	sub_1356e(0, _state); break;
        case m2c::kloc_1358c: 	sub_1356e(__disp, _state); break;
        case m2c::kloc_1357b: 	sub_1356e(__disp, _state); break;
        case m2c::ksub_135cf: 	sub_135cf(0, _state); break;
        case m2c::kloc_13618: 	sub_135cf(__disp, _state); break;
        case m2c::kloc_13669: 	sub_135cf(__disp, _state); break;
        case m2c::kloc_1366f: 	sub_135cf(__disp, _state); break;
        case m2c::kloc_135e6: 	sub_135cf(__disp, _state); break;
        case m2c::kloc_13651: 	sub_135cf(__disp, _state); break;
        case m2c::kloc_13631: 	sub_135cf(__disp, _state); break;
        case m2c::kloc_1363f: 	sub_135cf(__disp, _state); break;
        case m2c::kloc_1363d: 	sub_135cf(__disp, _state); break;
        case m2c::kloc_135f5: 	sub_135cf(__disp, _state); break;
        case m2c::kloc_13616: 	sub_135cf(__disp, _state); break;
        case m2c::kloc_13657: 	sub_135cf(__disp, _state); break;
        case m2c::kloc_135d7: 	sub_135cf(__disp, _state); break;
        case m2c::kloc_1360a: 	sub_135cf(__disp, _state); break;
        case m2c::ksub_13674: 	sub_13674(0, _state); break;
        case m2c::kseg000_3678_proc: 	seg000_3678_proc(0, _state); break;
        case m2c::ksub_1367c: 	sub_1367c(0, _state); break;
        case m2c::klocret_1368b: 	sub_1367c(__disp, _state); break;
        case m2c::ksub_1368c: 	sub_1368c(0, _state); break;
        case m2c::klocret_1369b: 	sub_1368c(__disp, _state); break;
        case m2c::ksub_1369c: 	sub_1369c(0, _state); break;
        case m2c::ksub_136a0: 	sub_136a0(0, _state); break;
        case m2c::kloc_136fa: 	sub_136a0(__disp, _state); break;
        case m2c::kloc_136d9: 	sub_136a0(__disp, _state); break;
        case m2c::kloc_136fc: 	seg000_36fc_proc(__disp, _state); break;
        case m2c::klocret_13732: 	seg000_36fc_proc(__disp, _state); break;
        case m2c::kloc_13711: 	seg000_36fc_proc(__disp, _state); break;
        case m2c::ksub_13733: 	sub_13733(0, _state); break;
        case m2c::klocret_13742: 	sub_13733(__disp, _state); break;
        case m2c::ksub_13743: 	sub_13743(0, _state); break;
        case m2c::klocret_13752: 	sub_13743(__disp, _state); break;
        case m2c::ksub_13753: 	sub_13753(0, _state); break;
        case m2c::ksub_13757: 	sub_13757(0, _state); break;
        case m2c::kloc_13795: 	sub_13757(__disp, _state); break;
        case m2c::kloc_137b6: 	sub_13757(__disp, _state); break;
        case m2c::kloc_137b8: 	seg000_37b8_proc(__disp, _state); break;
        case m2c::kloc_137ef: 	seg000_37b8_proc(__disp, _state); break;
        case m2c::kloc_137ce: 	seg000_37b8_proc(__disp, _state); break;
        case m2c::ksub_137f1: 	sub_137f1(0, _state); break;
        case m2c::kloc_137f4: 	sub_137f1(__disp, _state); break;
        case m2c::ksub_13809: 	sub_13809(0, _state); break;
        case m2c::kloc_13860: 	sub_13809(__disp, _state); break;
        case m2c::kloc_1385c: 	sub_13809(__disp, _state); break;
        case m2c::kloc_1384d: 	sub_13809(__disp, _state); break;
        case m2c::kloc_13866: 	sub_13809(__disp, _state); break;
        case m2c::ksub_1386b: 	sub_1386b(0, _state); break;
        case m2c::kloc_1386e: 	sub_1386b(__disp, _state); break;
        case m2c::kloc_138ed: 	sub_1386b(__disp, _state); break;
        case m2c::kloc_138ef: 	sub_1386b(__disp, _state); break;
        case m2c::kloc_13878: 	sub_1386b(__disp, _state); break;
        case m2c::klocret_13915: 	sub_1386b(__disp, _state); break;
        case m2c::kloc_13909: 	sub_1386b(__disp, _state); break;
        case m2c::kloc_138a4: 	sub_1386b(__disp, _state); break;
        case m2c::kloc_138b0: 	sub_1386b(__disp, _state); break;
        case m2c::kloc_138b2: 	sub_1386b(__disp, _state); break;
        case m2c::kloc_138e1: 	sub_1386b(__disp, _state); break;
        case m2c::ksub_13916: 	sub_13916(0, _state); break;
        case m2c::kloc_139cc: 	sub_13916(__disp, _state); break;
        case m2c::kloc_13923: 	sub_13916(__disp, _state); break;
        case m2c::kloc_1397b: 	sub_13916(__disp, _state); break;
        case m2c::kloc_139c8: 	sub_13916(__disp, _state); break;
        case m2c::kloc_139aa: 	sub_13916(__disp, _state); break;
        case m2c::kloc_139e2: 	sub_13916(__disp, _state); break;
        case m2c::klocret_139ee: 	sub_13916(__disp, _state); break;
        case m2c::kloc_13984: 	sub_13916(__disp, _state); break;
        case m2c::kloc_1392d: 	sub_13916(__disp, _state); break;
        case m2c::kloc_13919: 	sub_13916(__disp, _state); break;
        case m2c::kloc_1395e: 	sub_13916(__disp, _state); break;
        case m2c::kloc_139a6: 	sub_13916(__disp, _state); break;
        case m2c::ksub_139ef: 	sub_139ef(0, _state); break;
        case m2c::ksub_13a0e: 	sub_13a0e(0, _state); break;
        case m2c::ksub_13a14: 	sub_13a14(0, _state); break;
        case m2c::ksub_13a34: 	sub_13a34(0, _state); break;
        case m2c::kloc_13aa1: 	sub_13a34(__disp, _state); break;
        case m2c::klocret_13adf: 	sub_13a34(__disp, _state); break;
        case m2c::kloc_13ac8: 	sub_13a34(__disp, _state); break;
        case m2c::kloc_13a74: 	sub_13a34(__disp, _state); break;
        case m2c::kloc_13abb: 	sub_13a34(__disp, _state); break;
        case m2c::kloc_13ad4: 	sub_13a34(__disp, _state); break;
        case m2c::kloc_13a94: 	sub_13a34(__disp, _state); break;
        case m2c::kloc_13aae: 	sub_13a34(__disp, _state); break;
        case m2c::kloc_13a54: 	sub_13a34(__disp, _state); break;
        case m2c::ksub_13ae0: 	sub_13ae0(0, _state); break;
        case m2c::kloc_13ba1: 	sub_13ae0(__disp, _state); break;
        case m2c::kloc_13af9: 	sub_13ae0(__disp, _state); break;
        case m2c::kloc_13b32: 	sub_13ae0(__disp, _state); break;
        case m2c::kloc_13ba3: 	sub_13ae0(__disp, _state); break;
        case m2c::kloc_13aec: 	sub_13ae0(__disp, _state); break;
        case m2c::kloc_13b0a: 	sub_13ae0(__disp, _state); break;
        case m2c::kloc_13ba0: 	sub_13ae0(__disp, _state); break;
        case m2c::kloc_13b1b: 	sub_13ae0(__disp, _state); break;
        case m2c::kloc_13b43: 	sub_13ae0(__disp, _state); break;
        case m2c::ksub_13ba5: 	sub_13ba5(0, _state); break;
        case m2c::kloc_13bb1: 	sub_13ba5(__disp, _state); break;
        case m2c::klocret_13bbc: 	sub_13ba5(__disp, _state); break;
        case m2c::ksub_13bbd: 	sub_13bbd(0, _state); break;
        case m2c::kloc_13c08: 	sub_13bbd(__disp, _state); break;
        case m2c::kloc_13c0a: 	sub_13bbd(__disp, _state); break;
        case m2c::ksub_13c0c: 	sub_13c0c(0, _state); break;
        case m2c::kloc_13c1c: 	sub_13c0c(__disp, _state); break;
        case m2c::kloc_13c1f: 	sub_13c0c(__disp, _state); break;
        case m2c::kloc_13c3c: 	sub_13c0c(__disp, _state); break;
        case m2c::kloc_13c83: 	sub_13c0c(__disp, _state); break;
        case m2c::kloc_13c89: 	sub_13c0c(__disp, _state); break;
        case m2c::kloc_13c30: 	sub_13c0c(__disp, _state); break;
        case m2c::ksub_13c93: 	sub_13c93(0, _state); break;
        case m2c::kloc_13cb5: 	sub_13c93(__disp, _state); break;
        case m2c::kloc_13ca2: 	sub_13c93(__disp, _state); break;
        case m2c::kloc_13cd3: 	sub_13c93(__disp, _state); break;
        case m2c::kloc_13cc4: 	sub_13c93(__disp, _state); break;
        case m2c::kloc_13cfc: 	sub_13c93(__disp, _state); break;
        case m2c::kloc_13cf5: 	sub_13c93(__disp, _state); break;
        case m2c::klocret_13d2f: 	sub_13c93(__disp, _state); break;
        case m2c::kloc_13ce9: 	sub_13c93(__disp, _state); break;
        case m2c::ksub_13d30: 	sub_13d30(0, _state); break;
        case m2c::kloc_13d50: 	sub_13d30(__disp, _state); break;
        case m2c::kloc_13d4e: 	sub_13d30(__disp, _state); break;
        case m2c::ksub_13d52: 	sub_13d52(0, _state); break;
        case m2c::kloc_13d55: 	sub_13d52(__disp, _state); break;
        case m2c::kloc_13d66: 	sub_13d52(__disp, _state); break;
        case m2c::ksub_13d68: 	sub_13d68(0, _state); break;
        case m2c::kloc_13db9: 	sub_13d68(__disp, _state); break;
        case m2c::kloc_13d95: 	sub_13d68(__disp, _state); break;
        case m2c::kloc_13daa: 	sub_13d68(__disp, _state); break;
        case m2c::kloc_13da8: 	sub_13d68(__disp, _state); break;
        case m2c::kloc_13d8c: 	sub_13d68(__disp, _state); break;
        case m2c::kloc_13d81: 	sub_13d68(__disp, _state); break;
        case m2c::kloc_13dd4: 	sub_13d68(__disp, _state); break;
        case m2c::ksub_13dd6: 	sub_13dd6(0, _state); break;
        case m2c::kloc_13dec: 	sub_13dd6(__disp, _state); break;
        case m2c::ksub_13e15: 	sub_13e15(0, _state); break;
        case m2c::kloc_13e26: 	sub_13e15(__disp, _state); break;
        case m2c::kloc_13e3f: 	sub_13e15(__disp, _state); break;
        case m2c::ksub_13e52: 	sub_13e52(0, _state); break;
        case m2c::kloc_13e93: 	sub_13e52(__disp, _state); break;
        case m2c::kloc_13e81: 	sub_13e52(__disp, _state); break;
        case m2c::kloc_13fb4: 	sub_13e52(__disp, _state); break;
        case m2c::ksub_13fc2: 	sub_13fc2(0, _state); break;
        case m2c::kloc_1406a: 	sub_13fc2(__disp, _state); break;
        case m2c::ksub_1406d: 	sub_1406d(0, _state); break;
        case m2c::kloc_14181: 	sub_1406d(__disp, _state); break;
        case m2c::kloc_14078: 	sub_1406d(__disp, _state); break;
        case m2c::kloc_14075: 	sub_1406d(__disp, _state); break;
        case m2c::kloc_1416c: 	sub_1406d(__disp, _state); break;
        case m2c::klocret_14198: 	sub_1406d(__disp, _state); break;
        case m2c::kloc_140ce: 	sub_1406d(__disp, _state); break;
        case m2c::kloc_1413b: 	sub_1406d(__disp, _state); break;
        case m2c::kloc_140d6: 	sub_1406d(__disp, _state); break;
        case m2c::kloc_14106: 	sub_1406d(__disp, _state); break;
        case m2c::kloc_1415c: 	sub_1406d(__disp, _state); break;
        case m2c::kloc_1407b: 	sub_1406d(__disp, _state); break;
        case m2c::kloc_14191: 	sub_1406d(__disp, _state); break;
        case m2c::kloc_140ad: 	sub_1406d(__disp, _state); break;
        case m2c::kloc_1412b: 	sub_1406d(__disp, _state); break;
        case m2c::kloc_140b5: 	sub_1406d(__disp, _state); break;
        case m2c::kloc_14116: 	sub_1406d(__disp, _state); break;
        case m2c::ksub_14199: 	sub_14199(0, _state); break;
        case m2c::ksub_141a7: 	sub_141a7(0, _state); break;
        case m2c::ksub_141b3: 	sub_141b3(0, _state); break;
        case m2c::ksub_141ba: 	sub_141ba(0, _state); break;
        case m2c::kloc_141c4: 	sub_141ba(__disp, _state); break;
        case m2c::kloc_141ce: 	sub_141ba(__disp, _state); break;
        case m2c::ksub_141e0: 	sub_141e0(0, _state); break;
        case m2c::knullsub_4: 	nullsub_4(0, _state); break;
        case m2c::ksub_141f7: 	sub_141f7(0, _state); break;
        case m2c::ksub_141fb: 	sub_141fb(0, _state); break;
        case m2c::ksub_141ff: 	sub_141ff(0, _state); break;
        case m2c::ksub_14203: 	sub_14203(0, _state); break;
        case m2c::ksub_14207: 	sub_14207(0, _state); break;
        case m2c::kloc_14242: 	sub_14207(__disp, _state); break;
        case m2c::kloc_14227: 	sub_14207(__disp, _state); break;
        case m2c::kloc_14219: 	sub_14207(__disp, _state); break;
        case m2c::ksub_1424c: 	sub_1424c(0, _state); break;
        case m2c::kloc_14283: 	sub_1424c(__disp, _state); break;
        case m2c::klocret_142b6: 	sub_1424c(__disp, _state); break;
        case m2c::kloc_142a2: 	sub_1424c(__disp, _state); break;
        case m2c::kloc_142a6: 	sub_1424c(__disp, _state); break;
        case m2c::kloc_14266: 	sub_1424c(__disp, _state); break;
        case m2c::ksub_142b7: 	sub_142b7(0, _state); break;
        case m2c::knullsub_5: 	nullsub_5(0, _state); break;
        case m2c::ksub_142c1: 	sub_142c1(0, _state); break;
        case m2c::ksub_142cf: 	sub_142cf(0, _state); break;
        case m2c::ksub_142d3: 	sub_142d3(0, _state); break;
        case m2c::ksub_142dc: 	sub_142dc(0, _state); break;
        case m2c::klocret_142fb: 	sub_142dc(__disp, _state); break;
        case m2c::ksub_142fc: 	sub_142fc(0, _state); break;
        case m2c::klocret_1431b: 	sub_142fc(__disp, _state); break;
        case m2c::ksub_1431c: 	sub_1431c(0, _state); break;
        case m2c::ksub_14327: 	sub_14327(0, _state); break;
        case m2c::ksub_14334: 	sub_14334(0, _state); break;
        case m2c::ksub_14340: 	sub_14340(0, _state); break;
        case m2c::ksub_1434c: 	sub_1434c(0, _state); break;
        case m2c::kloc_143eb: 	sub_1434c(__disp, _state); break;
        case m2c::kloc_1438a: 	sub_1434c(__disp, _state); break;
        case m2c::kloc_14396: 	sub_1434c(__disp, _state); break;
        case m2c::kseg000_43ee_proc: 	seg000_43ee_proc(0, _state); break;
        case m2c::ksub_143f2: 	sub_143f2(0, _state); break;
        case m2c::ksub_143fe: 	sub_143fe(0, _state); break;
        case m2c::ksub_14409: 	sub_14409(0, _state); break;
        case m2c::kloc_14415: 	sub_14409(__disp, _state); break;
        case m2c::ksub_14428: 	sub_14428(0, _state); break;
        case m2c::ksub_1443d: 	sub_1443d(0, _state); break;
        case m2c::kloc_1444b: 	sub_1443d(__disp, _state); break;
        case m2c::ksub_1444f: 	sub_1444f(0, _state); break;
        case m2c::ksub_14453: 	sub_14453(0, _state); break;
        case m2c::kloc_14455: 	sub_14453(__disp, _state); break;
        case m2c::ksub_14469: 	sub_14469(0, _state); break;
        case m2c::ksub_1446d: 	sub_1446d(0, _state); break;
        case m2c::kloc_1446f: 	sub_1446d(__disp, _state); break;
        case m2c::ksub_14483: 	sub_14483(0, _state); break;
        case m2c::ksub_144a9: 	sub_144a9(0, _state); break;
        case m2c::ksub_144cf: 	sub_144cf(0, _state); break;
        case m2c::ksub_144d3: 	sub_144d3(0, _state); break;
        case m2c::kloc_144d5: 	sub_144d3(__disp, _state); break;
        case m2c::kloc_144e9: 	seg000_44e9_proc(__disp, _state); break;
        case m2c::kloc_144ef: 	seg000_44e9_proc(__disp, _state); break;
        case m2c::kloc_144f3: 	seg000_44e9_proc(__disp, _state); break;
        case m2c::kloc_144f9: 	seg000_44e9_proc(__disp, _state); break;
        case m2c::ksub_144fd: 	sub_144fd(0, _state); break;
        case m2c::ksub_14501: 	sub_14501(0, _state); break;
        case m2c::kloc_14503: 	sub_14501(__disp, _state); break;
        case m2c::ksub_1450b: 	sub_1450b(0, _state); break;
        case m2c::ksub_14532: 	sub_14532(0, _state); break;
        case m2c::ksub_14561: 	sub_14561(0, _state); break;
        case m2c::ksub_14590: 	sub_14590(0, _state); break;
        case m2c::kloc_145ac: 	sub_14590(__disp, _state); break;
        case m2c::ksub_145b5: 	sub_145b5(0, _state); break;
        case m2c::kloc_145d1: 	sub_145b5(__disp, _state); break;
        case m2c::ksub_145da: 	sub_145da(0, _state); break;
        case m2c::ksub_145e5: 	sub_145e5(0, _state); break;
        case m2c::kloc_145f1: 	sub_145e5(__disp, _state); break;
        case m2c::ksub_14604: 	sub_14604(0, _state); break;
        case m2c::kloc_14610: 	sub_14604(__disp, _state); break;
        case m2c::ksub_14624: 	sub_14624(0, _state); break;
        case m2c::ksub_1462e: 	sub_1462e(0, _state); break;
        case m2c::ksub_14646: 	sub_14646(0, _state); break;
        case m2c::ksub_14652: 	sub_14652(0, _state); break;
        case m2c::ksub_1466e: 	sub_1466e(0, _state); break;
        case m2c::ksub_14675: 	sub_14675(0, _state); break;
        case m2c::ksub_14681: 	sub_14681(0, _state); break;
        case m2c::ksub_14686: 	sub_14686(0, _state); break;
        case m2c::ksub_1469e: 	sub_1469e(0, _state); break;
        case m2c::ksub_146a3: 	sub_146a3(0, _state); break;
        case m2c::ksub_146af: 	sub_146af(0, _state); break;
        case m2c::ksub_146b4: 	sub_146b4(0, _state); break;
        case m2c::ksub_147a7: 	sub_147a7(0, _state); break;
        case m2c::ksub_147bf: 	sub_147bf(0, _state); break;
        case m2c::ksub_147cb: 	sub_147cb(0, _state); break;
        case m2c::ksub_147e7: 	sub_147e7(0, _state); break;
        case m2c::ksub_147ff: 	sub_147ff(0, _state); break;
        case m2c::ksub_1480b: 	sub_1480b(0, _state); break;
        case m2c::ksub_14827: 	sub_14827(0, _state); break;
        case m2c::ksub_1483f: 	sub_1483f(0, _state); break;
        case m2c::ksub_1484b: 	sub_1484b(0, _state); break;
        case m2c::ksub_14867: 	sub_14867(0, _state); break;
        case m2c::kloc_14875: 	sub_14867(__disp, _state); break;
        case m2c::ksub_14879: 	sub_14879(0, _state); break;
        case m2c::kloc_14887: 	sub_14879(__disp, _state); break;
        case m2c::ksub_1488b: 	sub_1488b(0, _state); break;
        case m2c::kloc_14899: 	sub_1488b(__disp, _state); break;
        case m2c::ksub_1489d: 	sub_1489d(0, _state); break;
        case m2c::kloc_148ab: 	sub_1489d(__disp, _state); break;
        case m2c::ksub_148af: 	sub_148af(0, _state); break;
        case m2c::kloc_148bd: 	sub_148af(__disp, _state); break;
        case m2c::ksub_148c1: 	sub_148c1(0, _state); break;
        case m2c::kloc_148cf: 	sub_148c1(__disp, _state); break;
        case m2c::ksub_148d3: 	sub_148d3(0, _state); break;
        case m2c::kloc_148e1: 	sub_148d3(__disp, _state); break;
        case m2c::ksub_148e5: 	sub_148e5(0, _state); break;
        case m2c::kloc_148f3: 	sub_148e5(__disp, _state); break;
        case m2c::ksub_148f7: 	sub_148f7(0, _state); break;
        case m2c::kloc_14905: 	sub_148f7(__disp, _state); break;
        case m2c::ksub_14909: 	sub_14909(0, _state); break;
        case m2c::kloc_14917: 	sub_14909(__disp, _state); break;
        case m2c::ksub_1491b: 	sub_1491b(0, _state); break;
        case m2c::kloc_1492c: 	sub_1491b(__disp, _state); break;
        case m2c::kloc_1492f: 	sub_1491b(__disp, _state); break;
        case m2c::kloc_1492a: 	sub_1491b(__disp, _state); break;
        case m2c::ksub_14933: 	sub_14933(0, _state); break;
        case m2c::kloc_14947: 	sub_14933(__disp, _state); break;
        case m2c::kloc_14942: 	sub_14933(__disp, _state); break;
        case m2c::kloc_14944: 	sub_14933(__disp, _state); break;
        case m2c::ksub_1494b: 	sub_1494b(0, _state); break;
        case m2c::kloc_1495c: 	sub_1494b(__disp, _state); break;
        case m2c::kloc_1495a: 	sub_1494b(__disp, _state); break;
        case m2c::kloc_1495f: 	sub_1494b(__disp, _state); break;
        case m2c::ksub_14963: 	sub_14963(0, _state); break;
        case m2c::kloc_14974: 	sub_14963(__disp, _state); break;
        case m2c::kloc_14972: 	sub_14963(__disp, _state); break;
        case m2c::kloc_14977: 	sub_14963(__disp, _state); break;
        case m2c::ksub_1497b: 	sub_1497b(0, _state); break;
        case m2c::kloc_1498a: 	sub_1497b(__disp, _state); break;
        case m2c::kloc_1498f: 	sub_1497b(__disp, _state); break;
        case m2c::kloc_1498c: 	sub_1497b(__disp, _state); break;
        case m2c::ksub_14993: 	sub_14993(0, _state); break;
        case m2c::kloc_149a2: 	sub_14993(__disp, _state); break;
        case m2c::kloc_149a7: 	sub_14993(__disp, _state); break;
        case m2c::kloc_149a4: 	sub_14993(__disp, _state); break;
        case m2c::ksub_149ab: 	sub_149ab(0, _state); break;
        case m2c::kloc_149bf: 	sub_149ab(__disp, _state); break;
        case m2c::kloc_149bc: 	sub_149ab(__disp, _state); break;
        case m2c::kloc_149ba: 	sub_149ab(__disp, _state); break;
        case m2c::ksub_149c3: 	sub_149c3(0, _state); break;
        case m2c::kloc_149d4: 	sub_149c3(__disp, _state); break;
        case m2c::kloc_149d2: 	sub_149c3(__disp, _state); break;
        case m2c::kloc_149d7: 	sub_149c3(__disp, _state); break;
        case m2c::ksub_149db: 	sub_149db(0, _state); break;
        case m2c::kloc_149ea: 	sub_149db(__disp, _state); break;
        case m2c::kloc_149ef: 	sub_149db(__disp, _state); break;
        case m2c::kloc_149ec: 	sub_149db(__disp, _state); break;
        case m2c::ksub_149f3: 	sub_149f3(0, _state); break;
        case m2c::kloc_14a07: 	sub_149f3(__disp, _state); break;
        case m2c::kloc_14a04: 	sub_149f3(__disp, _state); break;
        case m2c::kloc_14a02: 	sub_149f3(__disp, _state); break;
        case m2c::ksub_14a0b: 	sub_14a0b(0, _state); break;
        case m2c::kloc_14a17: 	sub_14a0b(__disp, _state); break;
        case m2c::ksub_14a1b: 	sub_14a1b(0, _state); break;
        case m2c::kloc_14a27: 	sub_14a1b(__disp, _state); break;
        case m2c::ksub_14a2b: 	sub_14a2b(0, _state); break;
        case m2c::kloc_14a37: 	sub_14a2b(__disp, _state); break;
        case m2c::ksub_14a3b: 	sub_14a3b(0, _state); break;
        case m2c::kloc_14a47: 	sub_14a3b(__disp, _state); break;
        case m2c::ksub_14a4b: 	sub_14a4b(0, _state); break;
        case m2c::kloc_14a57: 	sub_14a4b(__disp, _state); break;
        case m2c::ksub_14a5b: 	sub_14a5b(0, _state); break;
        case m2c::kloc_14a67: 	sub_14a5b(__disp, _state); break;
        case m2c::ksub_14a6b: 	sub_14a6b(0, _state); break;
        case m2c::kloc_14a77: 	sub_14a6b(__disp, _state); break;
        case m2c::ksub_14a7b: 	sub_14a7b(0, _state); break;
        case m2c::kloc_14a87: 	sub_14a7b(__disp, _state); break;
        case m2c::ksub_14a8b: 	sub_14a8b(0, _state); break;
        case m2c::kloc_14a97: 	sub_14a8b(__disp, _state); break;
        case m2c::ksub_14a9b: 	sub_14a9b(0, _state); break;
        case m2c::kloc_14aa7: 	sub_14a9b(__disp, _state); break;
        case m2c::ksub_14aab: 	sub_14aab(0, _state); break;
        case m2c::kloc_14ab7: 	sub_14aab(__disp, _state); break;
        case m2c::ksub_14abb: 	sub_14abb(0, _state); break;
        case m2c::kloc_14ac7: 	sub_14abb(__disp, _state); break;
        case m2c::ksub_14acb: 	sub_14acb(0, _state); break;
        case m2c::kloc_14ad7: 	sub_14acb(__disp, _state); break;
        case m2c::ksub_14adb: 	sub_14adb(0, _state); break;
        case m2c::kloc_14ae7: 	sub_14adb(__disp, _state); break;
        case m2c::ksub_14aeb: 	sub_14aeb(0, _state); break;
        case m2c::kloc_14af7: 	sub_14aeb(__disp, _state); break;
        case m2c::ksub_14afb: 	sub_14afb(0, _state); break;
        case m2c::kloc_14b07: 	sub_14afb(__disp, _state); break;
        case m2c::ksub_14b0b: 	sub_14b0b(0, _state); break;
        case m2c::kloc_14b17: 	sub_14b0b(__disp, _state); break;
        case m2c::ksub_14b1b: 	sub_14b1b(0, _state); break;
        case m2c::kloc_14b27: 	sub_14b1b(__disp, _state); break;
        case m2c::ksub_14b2b: 	sub_14b2b(0, _state); break;
        case m2c::kloc_14b37: 	sub_14b2b(__disp, _state); break;
        case m2c::ksub_14b3b: 	sub_14b3b(0, _state); break;
        case m2c::kloc_14b47: 	sub_14b3b(__disp, _state); break;
        case m2c::ksub_14b4b: 	sub_14b4b(0, _state); break;
        case m2c::ksub_14b52: 	sub_14b52(0, _state); break;
        case m2c::ksub_14b59: 	sub_14b59(0, _state); break;
        case m2c::ksub_14b60: 	sub_14b60(0, _state); break;
        case m2c::ksub_14b67: 	sub_14b67(0, _state); break;
        case m2c::ksub_14b71: 	sub_14b71(0, _state); break;
        case m2c::kloc_14b87: 	sub_14b71(__disp, _state); break;
        case m2c::ksub_14ba7: 	sub_14ba7(0, _state); break;
        case m2c::kloc_14bbd: 	sub_14ba7(__disp, _state); break;
        case m2c::ksub_14bcf: 	sub_14bcf(0, _state); break;
        case m2c::kloc_14be5: 	sub_14bcf(__disp, _state); break;
        case m2c::ksub_14c09: 	sub_14c09(0, _state); break;
        case m2c::kloc_14c1f: 	sub_14c09(__disp, _state); break;
        case m2c::ksub_14c37: 	sub_14c37(0, _state); break;
        case m2c::kloc_14c4d: 	sub_14c37(__disp, _state); break;
        case m2c::ksub_14c59: 	sub_14c59(0, _state); break;
        case m2c::kloc_14c6f: 	sub_14c59(__disp, _state); break;
        case m2c::ksub_14c8d: 	sub_14c8d(0, _state); break;
        case m2c::kloc_14ca3: 	sub_14c8d(__disp, _state); break;
        case m2c::ksub_14cbb: 	sub_14cbb(0, _state); break;
        case m2c::kloc_14cd1: 	sub_14cbb(__disp, _state); break;
        case m2c::ksub_14cdd: 	sub_14cdd(0, _state); break;
        case m2c::kloc_14cf3: 	sub_14cdd(__disp, _state); break;
        case m2c::ksub_14d0f: 	sub_14d0f(0, _state); break;
        case m2c::kloc_14d25: 	sub_14d0f(__disp, _state); break;
        case m2c::ksub_14d3d: 	sub_14d3d(0, _state); break;
        case m2c::kloc_14d53: 	sub_14d3d(__disp, _state); break;
        case m2c::ksub_14d5f: 	sub_14d5f(0, _state); break;
        case m2c::kloc_14d75: 	sub_14d5f(__disp, _state); break;
        case m2c::ksub_14d91: 	sub_14d91(0, _state); break;
        case m2c::kloc_14d9d: 	sub_14d91(__disp, _state); break;
        case m2c::ksub_14da1: 	sub_14da1(0, _state); break;
        case m2c::kloc_14dad: 	sub_14da1(__disp, _state); break;
        case m2c::ksub_14db1: 	sub_14db1(0, _state); break;
        case m2c::kloc_14dbd: 	sub_14db1(__disp, _state); break;
        case m2c::ksub_14dc1: 	sub_14dc1(0, _state); break;
        case m2c::kloc_14dcd: 	sub_14dc1(__disp, _state); break;
        case m2c::ksub_14dd1: 	sub_14dd1(0, _state); break;
        case m2c::kloc_14de0: 	sub_14dd1(__disp, _state); break;
        case m2c::ksub_14de4: 	sub_14de4(0, _state); break;
        case m2c::kloc_14df0: 	sub_14de4(__disp, _state); break;
        case m2c::ksub_14df4: 	sub_14df4(0, _state); break;
        case m2c::kloc_14e00: 	sub_14df4(__disp, _state); break;
        case m2c::ksub_14e04: 	sub_14e04(0, _state); break;
        case m2c::kloc_14e10: 	sub_14e04(__disp, _state); break;
        case m2c::ksub_14e14: 	sub_14e14(0, _state); break;
        case m2c::kloc_14e20: 	sub_14e14(__disp, _state); break;
        case m2c::ksub_14e24: 	sub_14e24(0, _state); break;
        case m2c::kloc_14e33: 	sub_14e24(__disp, _state); break;
        case m2c::ksub_14e37: 	sub_14e37(0, _state); break;
        case m2c::kloc_14e43: 	sub_14e37(__disp, _state); break;
        case m2c::ksub_14e47: 	sub_14e47(0, _state); break;
        case m2c::kloc_14e53: 	sub_14e47(__disp, _state); break;
        case m2c::ksub_14e57: 	sub_14e57(0, _state); break;
        case m2c::kloc_14e63: 	sub_14e57(__disp, _state); break;
        case m2c::ksub_14e67: 	sub_14e67(0, _state); break;
        case m2c::kloc_14e73: 	sub_14e67(__disp, _state); break;
        case m2c::ksub_14e77: 	sub_14e77(0, _state); break;
        case m2c::kloc_14e86: 	sub_14e77(__disp, _state); break;
        case m2c::ksub_14e8a: 	sub_14e8a(0, _state); break;
        case m2c::kloc_14e96: 	sub_14e8a(__disp, _state); break;
        case m2c::ksub_14e9a: 	sub_14e9a(0, _state); break;
        case m2c::kloc_14ea6: 	sub_14e9a(__disp, _state); break;
        case m2c::ksub_14eaa: 	sub_14eaa(0, _state); break;
        case m2c::kloc_14eb6: 	sub_14eaa(__disp, _state); break;
        case m2c::ksub_14eba: 	sub_14eba(0, _state); break;
        case m2c::kloc_14ec6: 	sub_14eba(__disp, _state); break;
        case m2c::ksub_14eca: 	sub_14eca(0, _state); break;
        case m2c::kloc_14ed9: 	sub_14eca(__disp, _state); break;
        case m2c::ksub_14edd: 	sub_14edd(0, _state); break;
        case m2c::ksub_14f09: 	sub_14f09(0, _state); break;
        case m2c::ksub_14f27: 	sub_14f27(0, _state); break;
        case m2c::ksub_14f59: 	sub_14f59(0, _state); break;
        case m2c::klocret_14fc3: 	sub_14f59(__disp, _state); break;
        case m2c::ksub_14fc4: 	sub_14fc4(0, _state); break;
        case m2c::ksub_14fc8: 	sub_14fc8(0, _state); break;
        case m2c::kloc_14fca: 	sub_14fc8(__disp, _state); break;
        case m2c::ksub_14fec: 	sub_14fec(0, _state); break;
        case m2c::ksub_15017: 	sub_15017(0, _state); break;
        case m2c::ksub_15039: 	sub_15039(0, _state); break;
        case m2c::ksub_15078: 	sub_15078(0, _state); break;
        case m2c::ksub_150b5: 	sub_150b5(0, _state); break;
        case m2c::kloc_150d4: 	sub_150b5(__disp, _state); break;
        case m2c::kloc_150e2: 	sub_150b5(__disp, _state); break;
        case m2c::kloc_150ee: 	sub_150b5(__disp, _state); break;
        case m2c::kloc_150c1: 	sub_150b5(__disp, _state); break;
        case m2c::ksub_150fc: 	sub_150fc(0, _state); break;
        case m2c::ksub_15106: 	sub_15106(0, _state); break;
        case m2c::kloc_15145: 	sub_15106(__disp, _state); break;
        case m2c::kloc_1510e: 	sub_15106(__disp, _state); break;
        case m2c::kloc_15128: 	sub_15106(__disp, _state); break;
        case m2c::kloc_1513d: 	sub_15106(__disp, _state); break;
        case m2c::kloc_15120: 	sub_15106(__disp, _state); break;
        case m2c::ksub_1515c: 	sub_1515c(0, _state); break;
        case m2c::ksub_15160: 	sub_15160(0, _state); break;
        case m2c::kloc_15162: 	sub_15160(__disp, _state); break;
        case m2c::ksub_1518a: 	sub_1518a(0, _state); break;
        case m2c::ksub_1518e: 	sub_1518e(0, _state); break;
        case m2c::kloc_15190: 	sub_1518e(__disp, _state); break;
        case m2c::ksub_151b8: 	sub_151b8(0, _state); break;
        case m2c::ksub_151f2: 	sub_151f2(0, _state); break;
        case m2c::ksub_1522c: 	sub_1522c(0, _state); break;
        case m2c::ksub_1524a: 	sub_1524a(0, _state); break;
        case m2c::ksub_15268: 	sub_15268(0, _state); break;
        case m2c::klocret_1527a: 	sub_15268(__disp, _state); break;
        case m2c::ksub_1527b: 	sub_1527b(0, _state); break;
        case m2c::kloc_1528b: 	sub_1527b(__disp, _state); break;
        case m2c::klocret_15299: 	sub_1527b(__disp, _state); break;
        case m2c::ksub_1529a: 	sub_1529a(0, _state); break;
        case m2c::klocret_152b2: 	sub_1529a(__disp, _state); break;
        case m2c::ksub_152b3: 	sub_152b3(0, _state); break;
        case m2c::klocret_152c5: 	sub_152b3(__disp, _state); break;
        case m2c::ksub_152c6: 	sub_152c6(0, _state); break;
        case m2c::ksub_152ca: 	sub_152ca(0, _state); break;
        case m2c::kloc_152cc: 	sub_152ca(__disp, _state); break;
        case m2c::ksub_152d6: 	sub_152d6(0, _state); break;
        case m2c::ksub_152de: 	sub_152de(0, _state); break;
        case m2c::kloc_15313: 	sub_152de(__disp, _state); break;
        case m2c::kloc_15318: 	sub_152de(__disp, _state); break;
        case m2c::kloc_152e4: 	sub_152de(__disp, _state); break;
        case m2c::ksub_1531c: 	sub_1531c(0, _state); break;
        case m2c::kloc_1537f: 	sub_1531c(__disp, _state); break;
        case m2c::kloc_15367: 	sub_1531c(__disp, _state); break;
        case m2c::kloc_1535b: 	sub_1531c(__disp, _state); break;
        case m2c::kloc_153aa: 	sub_1531c(__disp, _state); break;
        case m2c::kloc_153cc: 	sub_1531c(__disp, _state); break;
        case m2c::kloc_153e5: 	sub_1531c(__disp, _state); break;
        case m2c::kloc_15399: 	sub_1531c(__disp, _state); break;
        case m2c::kloc_153b7: 	sub_1531c(__disp, _state); break;
        case m2c::kloc_15342: 	sub_1531c(__disp, _state); break;
        case m2c::ksub_153ea: 	sub_153ea(0, _state); break;
        case m2c::klocret_15402: 	sub_153ea(__disp, _state); break;
        case m2c::ksub_15403: 	sub_15403(0, _state); break;
        case m2c::klocret_15429: 	sub_15403(__disp, _state); break;
        case m2c::ksub_1542a: 	sub_1542a(0, _state); break;
        case m2c::klocret_15444: 	sub_1542a(__disp, _state); break;
        case m2c::ksub_15445: 	sub_15445(0, _state); break;
        case m2c::klocret_1546f: 	sub_15445(__disp, _state); break;
        case m2c::ksub_15470: 	sub_15470(0, _state); break;
        case m2c::ksub_15473: 	sub_15473(0, _state); break;
        case m2c::ksub_1547e: 	sub_1547e(0, _state); break;
        case m2c::ksub_15485: 	sub_15485(0, _state); break;
        case m2c::ksub_1549a: 	sub_1549a(0, _state); break;
        case m2c::ksub_154a3: 	sub_154a3(0, _state); break;
        case m2c::kloc_154bc: 	seg000_54bc_proc(__disp, _state); break;
        case m2c::ksub_154bf: 	sub_154bf(0, _state); break;
        case m2c::kloc_154e1: 	sub_154bf(__disp, _state); break;
        case m2c::klocret_15504: 	sub_154bf(__disp, _state); break;
        case m2c::kloc_154eb: 	sub_154bf(__disp, _state); break;
        case m2c::kloc_154cb: 	sub_154bf(__disp, _state); break;
        case m2c::ksub_15505: 	sub_15505(0, _state); break;
        case m2c::kloc_15512: 	sub_15505(__disp, _state); break;
        case m2c::ksub_15517: 	sub_15517(0, _state); break;
        case m2c::kloc_1551e: 	sub_15517(__disp, _state); break;
        case m2c::ksub_15530: 	sub_15530(0, _state); break;
        case m2c::kloc_15539: 	sub_15530(__disp, _state); break;
        case m2c::ksub_15546: 	sub_15546(0, _state); break;
        case m2c::kloc_1554f: 	sub_15546(__disp, _state); break;
        case m2c::ksub_1559c: 	sub_1559c(0, _state); break;
        case m2c::kloc_155b7: 	sub_1559c(__disp, _state); break;
        case m2c::ksub_155c0: 	sub_155c0(0, _state); break;
        case m2c::kloc_155cd: 	sub_155c0(__disp, _state); break;
        case m2c::ksub_155d6: 	sub_155d6(0, _state); break;
        case m2c::kloc_1565c: 	sub_155d6(__disp, _state); break;
        case m2c::kloc_15610: 	sub_155d6(__disp, _state); break;
        case m2c::kloc_1566a: 	sub_155d6(__disp, _state); break;
        case m2c::kloc_155e0: 	sub_155d6(__disp, _state); break;
        case m2c::kloc_155e5: 	sub_155d6(__disp, _state); break;
        case m2c::kloc_15667: 	sub_155d6(__disp, _state); break;
        case m2c::kloc_15665: 	sub_155d6(__disp, _state); break;
        case m2c::ksub_15686: 	sub_15686(0, _state); break;
        case m2c::kloc_156a1: 	sub_15686(__disp, _state); break;
        case m2c::ksub_156aa: 	sub_156aa(0, _state); break;
        case m2c::kloc_156b7: 	sub_156aa(__disp, _state); break;
        case m2c::ksub_156c0: 	sub_156c0(0, _state); break;
        case m2c::kloc_156f8: 	sub_156c0(__disp, _state); break;
        case m2c::kloc_15744: 	sub_156c0(__disp, _state); break;
        case m2c::kloc_156ca: 	sub_156c0(__disp, _state); break;
        case m2c::kloc_156cf: 	sub_156c0(__disp, _state); break;
        case m2c::kloc_1574d: 	sub_156c0(__disp, _state); break;
        case m2c::kloc_1574f: 	sub_156c0(__disp, _state); break;
        case m2c::kloc_15754: 	sub_156c0(__disp, _state); break;
        case m2c::ksub_15772: 	sub_15772(0, _state); break;
        case m2c::kloc_1577f: 	sub_15772(__disp, _state); break;
        case m2c::ksub_15788: 	sub_15788(0, _state); break;
        case m2c::kloc_157bd: 	sub_15788(__disp, _state); break;
        case m2c::kloc_157a7: 	sub_15788(__disp, _state); break;
        case m2c::kloc_157af: 	sub_15788(__disp, _state); break;
        case m2c::kloc_157bb: 	sub_15788(__disp, _state); break;
        case m2c::kloc_157c0: 	sub_15788(__disp, _state); break;
        case m2c::ksub_157d5: 	sub_157d5(0, _state); break;
        case m2c::kloc_157e2: 	sub_157d5(__disp, _state); break;
        case m2c::ksub_157eb: 	sub_157eb(0, _state); break;
        case m2c::kloc_15820: 	sub_157eb(__disp, _state); break;
        case m2c::kloc_1580a: 	sub_157eb(__disp, _state); break;
        case m2c::kloc_15812: 	sub_157eb(__disp, _state); break;
        case m2c::kloc_15823: 	sub_157eb(__disp, _state); break;
        case m2c::kloc_1581e: 	sub_157eb(__disp, _state); break;
        case m2c::ksub_15838: 	sub_15838(0, _state); break;
        case m2c::kloc_15845: 	sub_15838(__disp, _state); break;
        case m2c::ksub_1584e: 	sub_1584e(0, _state); break;
        case m2c::kloc_1586d: 	sub_1584e(__disp, _state); break;
        case m2c::kloc_15886: 	sub_1584e(__disp, _state); break;
        case m2c::kloc_15883: 	sub_1584e(__disp, _state); break;
        case m2c::kloc_15875: 	sub_1584e(__disp, _state); break;
        case m2c::kloc_15881: 	sub_1584e(__disp, _state); break;
        case m2c::ksub_1589b: 	sub_1589b(0, _state); break;
        case m2c::klocret_158a9: 	sub_1589b(__disp, _state); break;
        case m2c::ksub_158aa: 	sub_158aa(0, _state); break;
        case m2c::klocret_158b8: 	sub_158aa(__disp, _state); break;
        case m2c::ksub_158b9: 	sub_158b9(0, _state); break;
        case m2c::klocret_158c7: 	sub_158b9(__disp, _state); break;
        case m2c::ksub_158c8: 	sub_158c8(0, _state); break;
        case m2c::klocret_158d6: 	sub_158c8(__disp, _state); break;
        case m2c::ksub_158d7: 	sub_158d7(0, _state); break;
        case m2c::klocret_158e5: 	sub_158d7(__disp, _state); break;
        case m2c::ksub_158e6: 	sub_158e6(0, _state); break;
        case m2c::klocret_158f4: 	sub_158e6(__disp, _state); break;
        case m2c::ksub_158f5: 	sub_158f5(0, _state); break;
        case m2c::kloc_15908: 	sub_158f5(__disp, _state); break;
        case m2c::kloc_1590f: 	sub_158f5(__disp, _state); break;
        case m2c::ksub_15911: 	sub_15911(0, _state); break;
        case m2c::kloc_15924: 	sub_15911(__disp, _state); break;
        case m2c::kloc_1592b: 	sub_15911(__disp, _state); break;
        case m2c::ksub_1592d: 	sub_1592d(0, _state); break;
        case m2c::kloc_15953: 	sub_1592d(__disp, _state); break;
        case m2c::ksub_15972: 	sub_15972(0, _state); break;
        case m2c::kloc_15996: 	sub_15972(__disp, _state); break;
        case m2c::kloc_159a5: 	sub_15972(__disp, _state); break;
        case m2c::kloc_15984: 	sub_15972(__disp, _state); break;
        case m2c::ksub_159c6: 	sub_159c6(0, _state); break;
        case m2c::ksub_159d3: 	sub_159d3(0, _state); break;
        case m2c::ksub_159df: 	sub_159df(0, _state); break;
        case m2c::kloc_15a24: 	sub_159df(__disp, _state); break;
        case m2c::kloc_159ec: 	sub_159df(__disp, _state); break;
        case m2c::kloc_15a2f: 	sub_159df(__disp, _state); break;
        case m2c::kloc_15a3a: 	sub_159df(__disp, _state); break;
        case m2c::kloc_159f6: 	sub_159df(__disp, _state); break;
        case m2c::kloc_15a26: 	sub_159df(__disp, _state); break;
        case m2c::kloc_15a05: 	sub_159df(__disp, _state); break;
        case m2c::kloc_15a49: 	sub_159df(__disp, _state); break;
        case m2c::kloc_15a53: 	sub_159df(__disp, _state); break;
        case m2c::ksub_15a57: 	sub_15a57(0, _state); break;
        case m2c::kloc_15ab6: 	sub_15a57(__disp, _state); break;
        case m2c::kloc_15a9c: 	sub_15a57(__disp, _state); break;
        case m2c::kloc_15ac0: 	sub_15a57(__disp, _state); break;
        case m2c::kloc_15a64: 	sub_15a57(__disp, _state); break;
        case m2c::kloc_15a70: 	sub_15a57(__disp, _state); break;
        case m2c::kloc_15a87: 	sub_15a57(__disp, _state); break;
        case m2c::kloc_15a7d: 	sub_15a57(__disp, _state); break;
        case m2c::kloc_15aa7: 	sub_15a57(__disp, _state); break;
        case m2c::kloc_15a93: 	sub_15a57(__disp, _state); break;
        case m2c::ksub_15ac4: 	sub_15ac4(0, _state); break;
        case m2c::kloc_15ad9: 	sub_15ac4(__disp, _state); break;
        case m2c::kloc_15ade: 	sub_15ac4(__disp, _state); break;
        case m2c::ksub_15ae9: 	sub_15ae9(0, _state); break;
        case m2c::ksub_15afd: 	sub_15afd(0, _state); break;
        case m2c::kloc_15b84: 	sub_15afd(__disp, _state); break;
        case m2c::kloc_15b88: 	sub_15afd(__disp, _state); break;
        case m2c::kloc_15bab: 	sub_15afd(__disp, _state); break;
        case m2c::kloc_15bf0: 	sub_15afd(__disp, _state); break;
        case m2c::kloc_15c00: 	sub_15afd(__disp, _state); break;
        case m2c::kloc_15c2d: 	sub_15afd(__disp, _state); break;
        case m2c::kloc_15bdd: 	sub_15afd(__disp, _state); break;
        case m2c::kloc_15c20: 	sub_15afd(__disp, _state); break;
        case m2c::kloc_15b09: 	sub_15afd(__disp, _state); break;
        case m2c::kloc_15b0b: 	sub_15afd(__disp, _state); break;
        case m2c::kloc_15b22: 	sub_15afd(__disp, _state); break;
        case m2c::kloc_15b13: 	sub_15afd(__disp, _state); break;
        case m2c::kloc_15c0b: 	sub_15afd(__disp, _state); break;
        case m2c::kloc_15bb8: 	sub_15afd(__disp, _state); break;
        case m2c::kloc_15b2a: 	sub_15afd(__disp, _state); break;
        case m2c::ksub_15c37: 	sub_15c37(0, _state); break;
        case m2c::kloc_15c62: 	sub_15c37(__disp, _state); break;
        case m2c::kloc_15c88: 	sub_15c37(__disp, _state); break;
        case m2c::kloc_15c57: 	sub_15c37(__disp, _state); break;
        case m2c::kloc_15c84: 	sub_15c37(__disp, _state); break;
        case m2c::kloc_15c7b: 	sub_15c37(__disp, _state); break;
        case m2c::kloc_15c3e: 	sub_15c37(__disp, _state); break;
        case m2c::ksub_15c93: 	sub_15c93(0, _state); break;
        case m2c::kloc_15cbe: 	sub_15c93(__disp, _state); break;
        case m2c::kloc_15cd7: 	sub_15c93(__disp, _state); break;
        case m2c::kloc_15ce0: 	sub_15c93(__disp, _state); break;
        case m2c::kloc_15c9a: 	sub_15c93(__disp, _state); break;
        case m2c::kloc_15ce4: 	sub_15c93(__disp, _state); break;
        case m2c::kloc_15cb3: 	sub_15c93(__disp, _state); break;
        case m2c::ksub_15cef: 	sub_15cef(0, _state); break;
        case m2c::ksub_15cf5: 	sub_15cf5(0, _state); break;
        case m2c::kloc_15d3a: 	sub_15cf5(__disp, _state); break;
        case m2c::kloc_15cf9: 	sub_15cf5(__disp, _state); break;
        case m2c::ksub_15d3c: 	sub_15d3c(0, _state); break;
        case m2c::ksub_15d42: 	sub_15d42(0, _state); break;
        case m2c::kloc_15d46: 	sub_15d42(__disp, _state); break;
        case m2c::kloc_15d69: 	sub_15d42(__disp, _state); break;
        case m2c::ksub_15d6b: 	sub_15d6b(0, _state); break;
        case m2c::kloc_15d8c: 	sub_15d6b(__disp, _state); break;
        case m2c::ksub_15da8: 	sub_15da8(0, _state); break;
        case m2c::kloc_15dc9: 	sub_15da8(__disp, _state); break;
        case m2c::ksub_15de5: 	sub_15de5(0, _state); break;
        case m2c::ksub_15df2: 	sub_15df2(0, _state); break;
        case m2c::kloc_15e6f: 	sub_15df2(__disp, _state); break;
        case m2c::kloc_15dfd: 	sub_15df2(__disp, _state); break;
        case m2c::kloc_15e28: 	sub_15df2(__disp, _state); break;
        case m2c::kloc_15e5a: 	sub_15df2(__disp, _state); break;
        case m2c::kloc_15e1d: 	sub_15df2(__disp, _state); break;
        case m2c::kloc_15e04: 	sub_15df2(__disp, _state); break;
        case m2c::kloc_15e6b: 	sub_15df2(__disp, _state); break;
        case m2c::ksub_15e7c: 	sub_15e7c(0, _state); break;
        case m2c::ksub_15e8a: 	sub_15e8a(0, _state); break;
        case m2c::ksub_15e91: 	sub_15e91(0, _state); break;
        case m2c::kloc_15f0c: 	sub_15e91(__disp, _state); break;
        case m2c::kloc_15ec8: 	sub_15e91(__disp, _state); break;
        case m2c::kloc_15eb3: 	sub_15e91(__disp, _state); break;
        case m2c::kloc_15ed3: 	sub_15e91(__disp, _state); break;
        case m2c::kloc_15e9d: 	sub_15e91(__disp, _state); break;
        case m2c::ksub_15f17: 	sub_15f17(0, _state); break;
        case m2c::ksub_15f25: 	sub_15f25(0, _state); break;
        case m2c::ksub_15f2c: 	sub_15f2c(0, _state); break;
        case m2c::kloc_15f4e: 	sub_15f2c(__disp, _state); break;
        case m2c::kloc_15f38: 	sub_15f2c(__disp, _state); break;
        case m2c::kloc_15fa7: 	sub_15f2c(__disp, _state); break;
        case m2c::kloc_15f63: 	sub_15f2c(__disp, _state); break;
        case m2c::kloc_15f6e: 	sub_15f2c(__disp, _state); break;
        case m2c::ksub_15fb1: 	sub_15fb1(0, _state); break;
        case m2c::ksub_15fbe: 	sub_15fbe(0, _state); break;
        case m2c::kloc_1602d: 	sub_15fbe(__disp, _state); break;
        case m2c::kloc_15fd0: 	sub_15fbe(__disp, _state); break;
        case m2c::kloc_16031: 	sub_15fbe(__disp, _state); break;
        case m2c::kloc_15fc9: 	sub_15fbe(__disp, _state); break;
        case m2c::kloc_15ff4: 	sub_15fbe(__disp, _state); break;
        case m2c::kloc_15fe9: 	sub_15fbe(__disp, _state); break;
        case m2c::ksub_1603e: 	sub_1603e(0, _state); break;
        case m2c::kloc_16053: 	sub_1603e(__disp, _state); break;
        case m2c::kloc_160be: 	sub_1603e(__disp, _state); break;
        case m2c::kloc_160c2: 	sub_1603e(__disp, _state); break;
        case m2c::kloc_1608b: 	sub_1603e(__disp, _state); break;
        case m2c::kloc_16058: 	sub_1603e(__disp, _state); break;
        case m2c::kloc_16067: 	sub_1603e(__disp, _state); break;
        case m2c::kloc_16080: 	sub_1603e(__disp, _state); break;
        case m2c::ksub_160cf: 	sub_160cf(0, _state); break;
        case m2c::kloc_1613d: 	sub_160cf(__disp, _state); break;
        case m2c::kloc_1610a: 	sub_160cf(__disp, _state); break;
        case m2c::kloc_160e6: 	sub_160cf(__disp, _state); break;
        case m2c::kloc_16141: 	sub_160cf(__disp, _state); break;
        case m2c::kloc_160ff: 	sub_160cf(__disp, _state); break;
        case m2c::ksub_1614e: 	sub_1614e(0, _state); break;
        case m2c::kloc_16192: 	sub_1614e(__disp, _state); break;
        case m2c::kloc_16155: 	sub_1614e(__disp, _state); break;
        case m2c::kloc_16179: 	sub_1614e(__disp, _state); break;
        case m2c::kloc_1616e: 	sub_1614e(__disp, _state); break;
        case m2c::kloc_16196: 	sub_1614e(__disp, _state); break;
        case m2c::ksub_161a1: 	sub_161a1(0, _state); break;
        case m2c::kloc_161f2: 	sub_161a1(__disp, _state); break;
        case m2c::kloc_161c4: 	sub_161a1(__disp, _state); break;
        case m2c::kloc_1621c: 	sub_161a1(__disp, _state); break;
        case m2c::kloc_161d8: 	sub_161a1(__disp, _state); break;
        case m2c::kloc_161ae: 	sub_161a1(__disp, _state); break;
        case m2c::kloc_16233: 	sub_161a1(__disp, _state); break;
        case m2c::kloc_161e9: 	sub_161a1(__disp, _state); break;
        case m2c::ksub_16235: 	sub_16235(0, _state); break;
        case m2c::ksub_16243: 	sub_16243(0, _state); break;
        case m2c::ksub_16252: 	sub_16252(0, _state); break;
        case m2c::ksub_1625d: 	sub_1625d(0, _state); break;
        case m2c::kloc_162f4: 	sub_1625d(__disp, _state); break;
        case m2c::kloc_16260: 	sub_1625d(__disp, _state); break;
        case m2c::klocret_1638f: 	sub_1625d(__disp, _state); break;
        case m2c::kloc_162d3: 	sub_1625d(__disp, _state); break;
        case m2c::kloc_1632f: 	sub_1625d(__disp, _state); break;
        case m2c::kloc_16279: 	sub_1625d(__disp, _state); break;
        case m2c::kloc_16311: 	sub_1625d(__disp, _state); break;
        case m2c::kloc_16363: 	sub_1625d(__disp, _state); break;
        case m2c::kloc_162e0: 	sub_1625d(__disp, _state); break;
        case m2c::kloc_1637f: 	sub_1625d(__disp, _state); break;
        case m2c::kloc_16289: 	sub_1625d(__disp, _state); break;
        case m2c::kloc_16353: 	sub_1625d(__disp, _state); break;
        case m2c::kloc_1626e: 	sub_1625d(__disp, _state); break;
        case m2c::kloc_162c4: 	sub_1625d(__disp, _state); break;
        case m2c::kloc_1636d: 	sub_1625d(__disp, _state); break;
        case m2c::ksub_16390: 	sub_16390(0, _state); break;
        case m2c::ksub_163ac: 	sub_163ac(0, _state); break;
        case m2c::kloc_163f3: 	sub_163ac(__disp, _state); break;
        case m2c::kloc_16431: 	sub_163ac(__disp, _state); break;
        case m2c::kloc_163c8: 	sub_163ac(__disp, _state); break;
        case m2c::kloc_1640d: 	sub_163ac(__disp, _state); break;
        case m2c::kloc_16433: 	sub_163ac(__disp, _state); break;
        case m2c::kloc_163c1: 	sub_163ac(__disp, _state); break;
        case m2c::kseg000_6440_proc: 	seg000_6440_proc(0, _state); break;
        case m2c::kloc_16477: 	seg000_6440_proc(__disp, _state); break;
        case m2c::kloc_16506: 	seg000_6440_proc(__disp, _state); break;
        case m2c::kloc_164ca: 	seg000_6440_proc(__disp, _state); break;
        case m2c::kloc_164d6: 	seg000_6440_proc(__disp, _state); break;
        case m2c::kloc_164fa: 	seg000_6440_proc(__disp, _state); break;
        case m2c::kloc_1651f: 	seg000_6440_proc(__disp, _state); break;
        case m2c::kloc_16497: 	seg000_6440_proc(__disp, _state); break;
        case m2c::kloc_164e2: 	seg000_6440_proc(__disp, _state); break;
        case m2c::kloc_16512: 	seg000_6440_proc(__disp, _state); break;
        case m2c::kloc_16488: 	seg000_6440_proc(__disp, _state); break;
        case m2c::kloc_164ee: 	seg000_6440_proc(__disp, _state); break;
        case m2c::kloc_164b2: 	seg000_6440_proc(__disp, _state); break;
        case m2c::ksub_16528: 	sub_16528(0, _state); break;
        case m2c::ksub_16546: 	sub_16546(0, _state); break;
        case m2c::klocret_16562: 	sub_16546(__disp, _state); break;
        case m2c::kseg000_6563_proc: 	seg000_6563_proc(0, _state); break;
        case m2c::kloc_16595: 	seg000_6563_proc(__disp, _state); break;
        case m2c::klocret_16594: 	seg000_6563_proc(__disp, _state); break;
        case m2c::kloc_16573: 	seg000_6563_proc(__disp, _state); break;
        case m2c::kloc_165a0: 	seg000_6563_proc(__disp, _state); break;
        case m2c::ksub_165aa: 	sub_165aa(0, _state); break;
        case m2c::kloc_165ef: 	sub_165aa(__disp, _state); break;
        case m2c::kloc_16620: 	sub_165aa(__disp, _state); break;
        case m2c::kloc_16656: 	sub_165aa(__disp, _state); break;
        case m2c::kloc_1664f: 	sub_165aa(__disp, _state); break;
        case m2c::ksub_16661: 	sub_16661(0, _state); break;
        case m2c::kloc_166bc: 	sub_16661(__disp, _state); break;
        case m2c::kloc_16694: 	sub_16661(__disp, _state); break;
        case m2c::kloc_16676: 	sub_16661(__disp, _state); break;
        case m2c::kloc_1667c: 	sub_16661(__disp, _state); break;
        case m2c::klocret_16693: 	sub_16661(__disp, _state); break;
        case m2c::kloc_1668e: 	sub_16661(__disp, _state); break;
        case m2c::kloc_166b6: 	sub_16661(__disp, _state); break;
        case m2c::kloc_166c7: 	sub_16661(__disp, _state); break;
        case m2c::kloc_166e2: 	sub_16661(__disp, _state); break;
        case m2c::kloc_1669b: 	sub_16661(__disp, _state); break;
        case m2c::ksub_166e8: 	sub_166e8(0, _state); break;
        case m2c::kloc_1670a: 	sub_166e8(__disp, _state); break;
        case m2c::kloc_166ef: 	sub_166e8(__disp, _state); break;
        case m2c::ksub_16710: 	sub_16710(0, _state); break;
        case m2c::kloc_1671b: 	sub_16710(__disp, _state); break;
        case m2c::kloc_16736: 	sub_16710(__disp, _state); break;
        case m2c::ksub_1673c: 	sub_1673c(0, _state); break;
        case m2c::kloc_16753: 	sub_1673c(__disp, _state); break;
        case m2c::kloc_16759: 	sub_1673c(__disp, _state); break;
        case m2c::klocret_16774: 	sub_1673c(__disp, _state); break;
        case m2c::kloc_1676e: 	sub_1673c(__disp, _state); break;
        case m2c::ksub_16775: 	sub_16775(0, _state); break;
        case m2c::kloc_167bc: 	sub_16775(__disp, _state); break;
        case m2c::kloc_1678c: 	sub_16775(__disp, _state); break;
        case m2c::ksub_167ff: 	sub_167ff(0, _state); break;
        case m2c::ksub_16807: 	sub_16807(0, _state); break;
        case m2c::kloc_1684a: 	sub_16807(__disp, _state); break;
        case m2c::ksub_1686f: 	sub_1686f(0, _state); break;
        case m2c::klocret_1687f: 	sub_1686f(__disp, _state); break;
        case m2c::ksub_16880: 	sub_16880(0, _state); break;
        case m2c::kseg000_6898_proc: 	seg000_6898_proc(0, _state); break;
        case m2c::ksub_1689e: 	sub_1689e(0, _state); break;
        case m2c::kloc_168ba: 	sub_1689e(__disp, _state); break;
        case m2c::kloc_16b3f: 	sub_1689e(__disp, _state); break;
        case m2c::kloc_168bd: 	sub_1689e(__disp, _state); break;
        case m2c::kloc_16c60: 	sub_1689e(__disp, _state); break;
        case m2c::kloc_168b1: 	sub_1689e(__disp, _state); break;
        case m2c::kloc_169de: 	sub_1689e(__disp, _state); break;
        case m2c::ksub_16dc1: 	sub_16dc1(0, _state); break;
        case m2c::kloc_16dc7: 	sub_16dc1(__disp, _state); break;
        case m2c::ksub_16dd9: 	sub_16dd9(0, _state); break;
        case m2c::kloc_16ddc: 	sub_16dd9(__disp, _state); break;
        case m2c::ksub_16ded: 	sub_16ded(0, _state); break;
        case m2c::kloc_16e2f: 	sub_16ded(__disp, _state); break;
        case m2c::kloc_16df7: 	sub_16ded(__disp, _state); break;
        case m2c::kloc_16e23: 	sub_16ded(__disp, _state); break;
        case m2c::ksub_16e75: 	sub_16e75(0, _state); break;
        case m2c::klocret_16f5e: 	sub_16e75(__disp, _state); break;
        case m2c::kloc_16e7f: 	sub_16e75(__disp, _state); break;
        case m2c::kloc_16f0c: 	sub_16e75(__disp, _state); break;
        case m2c::kloc_16f16: 	sub_16e75(__disp, _state); break;
        case m2c::kloc_16ec4: 	sub_16e75(__disp, _state); break;
        case m2c::kloc_16ece: 	sub_16e75(__disp, _state); break;
        case m2c::ksub_16f5f: 	sub_16f5f(0, _state); break;
        case m2c::kloc_16ff6: 	sub_16f5f(__disp, _state); break;
        case m2c::kloc_16fb8: 	sub_16f5f(__disp, _state); break;
        case m2c::kloc_16fae: 	sub_16f5f(__disp, _state); break;
        case m2c::kloc_16f69: 	sub_16f5f(__disp, _state); break;
        case m2c::kloc_17000: 	sub_16f5f(__disp, _state); break;
        case m2c::ksub_17049: 	sub_17049(0, _state); break;
        case m2c::kloc_1707f: 	sub_17049(__disp, _state); break;
        case m2c::kloc_17053: 	sub_17049(__disp, _state); break;
        case m2c::kseg000_70b8_proc: 	seg000_70b8_proc(0, _state); break;
        case m2c::ksub_170b9: 	sub_170b9(0, _state); break;
        case m2c::kloc_170f1: 	sub_170b9(__disp, _state); break;
        case m2c::kloc_170c5: 	sub_170b9(__disp, _state); break;
        case m2c::kseg000_712a_proc: 	seg000_712a_proc(0, _state); break;
        case m2c::ksub_1712b: 	sub_1712b(0, _state); break;
        case m2c::kloc_1719a: 	sub_1712b(__disp, _state); break;
        case m2c::kloc_17189: 	sub_1712b(__disp, _state); break;
        case m2c::kloc_17152: 	sub_1712b(__disp, _state); break;
        case m2c::kloc_17176: 	sub_1712b(__disp, _state); break;
        case m2c::kloc_171d1: 	sub_1712b(__disp, _state); break;
        case m2c::kloc_171be: 	sub_1712b(__disp, _state); break;
        case m2c::ksub_171dc: 	sub_171dc(0, _state); break;
        case m2c::kseg000_721b_proc: 	seg000_721b_proc(0, _state); break;
        case m2c::kloc_172b3: 	seg000_721b_proc(__disp, _state); break;
        case m2c::kloc_17274: 	seg000_721b_proc(__disp, _state); break;
        case m2c::kloc_17251: 	seg000_721b_proc(__disp, _state); break;
        case m2c::kloc_1729e: 	seg000_721b_proc(__disp, _state); break;
        case m2c::kloc_1724e: 	seg000_721b_proc(__disp, _state); break;
        case m2c::kloc_17289: 	seg000_721b_proc(__disp, _state); break;
        case m2c::kloc_172a5: 	seg000_721b_proc(__disp, _state); break;
        case m2c::kloc_172ba: 	seg000_721b_proc(__disp, _state); break;
        case m2c::kloc_1726d: 	seg000_721b_proc(__disp, _state); break;
        case m2c::kloc_17282: 	seg000_721b_proc(__disp, _state); break;
        case m2c::ksub_172d3: 	sub_172d3(0, _state); break;
        case m2c::kseg000_7333_proc: 	seg000_7333_proc(0, _state); break;
        case m2c::ksub_17337: 	sub_17337(0, _state); break;
        case m2c::kloc_173ba: 	sub_17337(__disp, _state); break;
        case m2c::kseg000_73c3_proc: 	seg000_73c3_proc(0, _state); break;
        case m2c::ksub_173c7: 	sub_173c7(0, _state); break;
        case m2c::kloc_1744f: 	sub_173c7(__disp, _state); break;
        case m2c::kloc_173f7: 	sub_173c7(__disp, _state); break;
        case m2c::ksub_1746c: 	sub_1746c(0, _state); break;
        case m2c::klocret_17495: 	sub_1746c(__disp, _state); break;
        case m2c::kloc_17482: 	sub_1746c(__disp, _state); break;
        case m2c::ksub_17496: 	sub_17496(0, _state); break;
        case m2c::klocret_174be: 	sub_17496(__disp, _state); break;
        case m2c::kloc_174ab: 	sub_17496(__disp, _state); break;
        case m2c::kloc_174bf: 	seg000_74bf_proc(__disp, _state); break;
        case m2c::kloc_174e9: 	seg000_74bf_proc(__disp, _state); break;
        case m2c::klocret_17511: 	seg000_74bf_proc(__disp, _state); break;
        case m2c::kloc_174fe: 	seg000_74bf_proc(__disp, _state); break;
        case m2c::klocret_174e8: 	seg000_74bf_proc(__disp, _state); break;
        case m2c::kloc_174d5: 	seg000_74bf_proc(__disp, _state); break;
        case m2c::ksub_17512: 	sub_17512(0, _state); break;
        case m2c::kloc_17543: 	sub_17512(__disp, _state); break;
        case m2c::kloc_17521: 	sub_17512(__disp, _state); break;
        case m2c::ksub_1754c: 	sub_1754c(0, _state); break;
        case m2c::klocret_17560: 	sub_1754c(__disp, _state); break;
        case m2c::ksub_176bd: 	sub_176bd(0, _state); break;
        case m2c::kloc_176de: 	sub_176bd(__disp, _state); break;
        case m2c::kloc_17735: 	sub_176bd(__disp, _state); break;
        case m2c::ksub_17749: 	sub_17749(0, _state); break;
        case m2c::ksub_1774f: 	sub_1774f(0, _state); break;
        case m2c::kloc_17753: 	sub_1774f(__disp, _state); break;
        case m2c::ksub_1775d: 	sub_1775d(0, _state); break;
        case m2c::klocret_17790: 	sub_1775d(__disp, _state); break;
        case m2c::ksub_177b2: 	sub_177b2(0, _state); break;
        case m2c::ksub_177bb: 	sub_177bb(0, _state); break;
        case m2c::kloc_177ca: 	sub_177bb(__disp, _state); break;
        case m2c::kloc_17820: 	sub_177bb(__disp, _state); break;
        case m2c::kloc_177e1: 	sub_177bb(__disp, _state); break;
        case m2c::kloc_17827: 	sub_177bb(__disp, _state); break;
        case m2c::ksub_1782a: 	sub_1782a(0, _state); break;
        case m2c::kloc_1783e: 	sub_1782a(__disp, _state); break;
        case m2c::kloc_17877: 	sub_1782a(__disp, _state); break;
        case m2c::kloc_1787c: 	sub_1782a(__disp, _state); break;
        case m2c::ksub_1787f: 	sub_1787f(0, _state); break;
        case m2c::kloc_17895: 	sub_1787f(__disp, _state); break;
        case m2c::kloc_178ce: 	sub_1787f(__disp, _state); break;
        case m2c::kloc_178d3: 	sub_1787f(__disp, _state); break;
        case m2c::ksub_178d6: 	sub_178d6(0, _state); break;
        case m2c::klocret_178f0: 	sub_178d6(__disp, _state); break;
        case m2c::ksub_178f1: 	sub_178f1(0, _state); break;
        case m2c::klocret_17911: 	sub_178f1(__disp, _state); break;
        case m2c::ksub_17912: 	sub_17912(0, _state); break;
        case m2c::klocret_17973: 	sub_17912(__disp, _state); break;
        case m2c::kloc_1796b: 	sub_17912(__disp, _state); break;
        case m2c::kloc_17924: 	sub_17912(__disp, _state); break;
        case m2c::kloc_17931: 	sub_17912(__disp, _state); break;
        case m2c::knullsub_1: 	nullsub_1(0, _state); break;
        case m2c::ksub_1797b: 	sub_1797b(0, _state); break;
        case m2c::klocret_179a6: 	sub_1797b(__disp, _state); break;
        case m2c::ksub_179a8: 	sub_179a8(0, _state); break;
        case m2c::kloc_179c2: 	sub_179a8(__disp, _state); break;
        case m2c::kloc_179e8: 	sub_179a8(__disp, _state); break;
        case m2c::kloc_179b1: 	sub_179a8(__disp, _state); break;
        case m2c::kloc_179c9: 	sub_179a8(__disp, _state); break;
        case m2c::kloc_179d0: 	sub_179a8(__disp, _state); break;
        case m2c::kloc_179dd: 	sub_179a8(__disp, _state); break;
        case m2c::kloc_179e2: 	sub_179a8(__disp, _state); break;
        case m2c::ksub_179fb: 	sub_179fb(0, _state); break;
        case m2c::kloc_17a32: 	sub_179fb(__disp, _state); break;
        case m2c::kloc_17a05: 	sub_179fb(__disp, _state); break;
        case m2c::kloc_17a41: 	sub_179fb(__disp, _state); break;
        case m2c::kloc_17a39: 	sub_179fb(__disp, _state); break;
        case m2c::kloc_17a19: 	sub_179fb(__disp, _state); break;
        case m2c::kseg000_7a44_proc: 	seg000_7a44_proc(0, _state); break;
        case m2c::kloc_17a4f: 	seg000_7a44_proc(__disp, _state); break;
        case m2c::ksub_1be8a: 	sub_1be8a(0, _state); break;
        case m2c::kloc_1bebb: 	sub_1be8a(__disp, _state); break;
        case m2c::kloc_1beb4: 	sub_1be8a(__disp, _state); break;
        case m2c::kloc_1be9e: 	sub_1be8a(__disp, _state); break;
        case m2c::ksub_1bec2: 	sub_1bec2(0, _state); break;
        case m2c::klocret_1bed9: 	sub_1bec2(__disp, _state); break;
        case m2c::kloc_1bed6: 	sub_1bec2(__disp, _state); break;
        case m2c::ksub_1bedc: 	sub_1bedc(0, _state); break;
        case m2c::kloc_1bef9: 	sub_1bedc(__disp, _state); break;
        case m2c::kloc_1bf0d: 	sub_1bedc(__disp, _state); break;
        case m2c::kloc_1bef3: 	sub_1bedc(__disp, _state); break;
        case m2c::klocret_1bf1a: 	sub_1bedc(__disp, _state); break;
        case m2c::kloc_1befe: 	sub_1bedc(__disp, _state); break;
        case m2c::kloc_1bf13: 	sub_1bedc(__disp, _state); break;
        case m2c::ksub_1bf1b: 	sub_1bf1b(0, _state); break;
        case m2c::kloc_1bfb0: 	sub_1bf1b(__disp, _state); break;
        case m2c::kloc_1bf39: 	sub_1bf1b(__disp, _state); break;
        case m2c::kloc_1bf8b: 	sub_1bf1b(__disp, _state); break;
        case m2c::kloc_1bf97: 	sub_1bf1b(__disp, _state); break;
        case m2c::kloc_1bfec: 	sub_1bf1b(__disp, _state); break;
        case m2c::kloc_1bf51: 	sub_1bf1b(__disp, _state); break;
        case m2c::kloc_1bfc7: 	sub_1bf1b(__disp, _state); break;
        case m2c::kseg002_526_proc: 	seg002_526_proc(0, _state); break;
        case m2c::ksub_1bff8: 	sub_1bff8(0, _state); break;
        case m2c::kseg002_55a_proc: 	seg002_55a_proc(0, _state); break;
        case m2c::kret_d4f_564: 	seg002_55a_proc(__disp, _state); break;
//        case m2c::kret_d4f_55b: 	seg002_55a_proc(__disp, _state); break;
        case m2c::ksub_1c03b: 	sub_1c03b(0, _state); break;
        case m2c::kloc_1c07c: 	seg002_5ac_proc(__disp, _state); break;
        case m2c::ksub_1c087: 	sub_1c087(0, _state); break;
        case m2c::kloc_1c0ac: 	sub_1c087(__disp, _state); break;
        case m2c::kseg002_5df_proc: 	seg002_5df_proc(0, _state); break;
        case m2c::ksub_1c0b7: 	sub_1c0b7(0, _state); break;
        case m2c::kloc_1c0d2: 	sub_1c0b7(__disp, _state); break;
        case m2c::kloc_1c0d4: 	sub_1c0b7(__disp, _state); break;
        case m2c::kloc_1c0cc: 	sub_1c0b7(__disp, _state); break;
//        case m2c::kseg002_607_proc: 	seg002_607_proc(0, _state); break;
        case m2c::ksub_1c0e0: 	sub_1c0e0(0, _state); break;
        case m2c::kloc_1c0fd: 	sub_1c0e0(__disp, _state); break;
        case m2c::ksub_1c10a: 	sub_1c10a(0, _state); break;
        case m2c::kloc_1c14c: 	sub_1c10a(__disp, _state); break;
        case m2c::kloc_1c143: 	sub_1c10a(__disp, _state); break;
        case m2c::kloc_1c150: 	sub_1c10a(__disp, _state); break;
        case m2c::kloc_1c148: 	sub_1c10a(__disp, _state); break;
        case m2c::kloc_1c128: 	sub_1c10a(__disp, _state); break;
        case m2c::kloc_1c131: 	sub_1c10a(__disp, _state); break;
        case m2c::ksub_1c155: 	sub_1c155(0, _state); break;
        case m2c::kloc_1c194: 	sub_1c155(__disp, _state); break;
        case m2c::kloc_1c16c: 	sub_1c155(__disp, _state); break;
        case m2c::kloc_1c1ba: 	sub_1c155(__disp, _state); break;
        case m2c::kloc_1c19d: 	sub_1c155(__disp, _state); break;
        case m2c::kloc_1c1df: 	sub_1c155(__disp, _state); break;
        case m2c::kseg002_712_proc: 	seg002_712_proc(0, _state); break;
        case m2c::ksub_1c1ea: 	sub_1c1ea(0, _state); break;
        case m2c::kloc_1c223: 	seg002_753_proc(__disp, _state); break;
        case m2c::ksub_1c22e: 	sub_1c22e(0, _state); break;
        case m2c::kloc_1c264: 	sub_1c22e(__disp, _state); break;
        case m2c::kloc_1c276: 	sub_1c22e(__disp, _state); break;
        case m2c::kloc_1c23d: 	sub_1c22e(__disp, _state); break;
        case m2c::kloc_1c287: 	sub_1c22e(__disp, _state); break;
        case m2c::kseg002_7ba_proc: 	seg002_7ba_proc(0, _state); break;
        case m2c::ksub_1c293: 	sub_1c293(0, _state); break;
        case m2c::kloc_1c352: 	sub_1c293(__disp, _state); break;
        case m2c::kloc_1c2a0: 	sub_1c293(__disp, _state); break;
        case m2c::kloc_1c2b6: 	sub_1c293(__disp, _state); break;
        case m2c::kseg002_885_proc: 	seg002_885_proc(0, _state); break;
        case m2c::ksub_1c35e: 	sub_1c35e(0, _state); break;
        case m2c::kloc_1c39b: 	sub_1c35e(__disp, _state); break;
        case m2c::kseg002_8ce_proc: 	seg002_8ce_proc(0, _state); break;
        case m2c::ksub_1c3a7: 	sub_1c3a7(0, _state); break;
        case m2c::kloc_1c3af: 	sub_1c3a7(__disp, _state); break;
        case m2c::kloc_1c3ba: 	sub_1c3a7(__disp, _state); break;
        case m2c::kseg002_8ed_proc: 	seg002_8ed_proc(0, _state); break;
        case m2c::ksub_1c3c5: 	sub_1c3c5(0, _state); break;
        case m2c::kloc_1c3e1: 	sub_1c3c5(__disp, _state); break;
        case m2c::kseg002_914_proc: 	seg002_914_proc(0, _state); break;
        case m2c::kret_d4f_91d: 	seg002_914_proc(__disp, _state); break;
        case m2c::kloc_1c3f5: 	seg002_914_proc(__disp, _state); break;
        case m2c::kloc_1c400: 	seg002_914_proc(__disp, _state); break;
        case m2c::ksub_1c40b: 	sub_1c40b(0, _state); break;
        case m2c::kloc_1c427: 	sub_1c40b(__disp, _state); break;
        case m2c::kseg002_963_proc: 	seg002_963_proc(0, _state); break;
        case m2c::kloc_1c43b: 	seg002_963_proc(__disp, _state); break;
        case m2c::kloc_1c446: 	seg002_963_proc(__disp, _state); break;
        case m2c::ksub_1c451: 	sub_1c451(0, _state); break;
        case m2c::kloc_1c49a: 	sub_1c451(__disp, _state); break;
        case m2c::kseg002_9cd_proc: 	seg002_9cd_proc(0, _state); break;
        case m2c::ksub_1c4a6: 	sub_1c4a6(0, _state); break;
        case m2c::kloc_1c4db: 	sub_1c4a6(__disp, _state); break;
        case m2c::kseg002_a0e_proc: 	seg002_a0e_proc(0, _state); break;
        case m2c::kret_d4f_a17: 	seg002_a0e_proc(__disp, _state); break;
        case m2c::kloc_1c50b: 	seg002_a0e_proc(__disp, _state); break;
        case m2c::kloc_1c4fd: 	seg002_a0e_proc(__disp, _state); break;
        case m2c::kret_d4f_a53: 	seg002_a0e_proc(__disp, _state); break;
        case m2c::kloc_1c52c: 	seg002_a0e_proc(__disp, _state); break;
        case m2c::kloc_1c517: 	seg002_a0e_proc(__disp, _state); break;
        case m2c::ksub_1c537: 	sub_1c537(0, _state); break;
        case m2c::kloc_1c546: 	sub_1c537(__disp, _state); break;
        case m2c::kloc_1c56d: 	sub_1c537(__disp, _state); break;
        case m2c::kloc_1c5b5: 	sub_1c537(__disp, _state); break;
        case m2c::kseg002_ae8_proc: 	seg002_ae8_proc(0, _state); break;
        case m2c::kret_d4f_af1: 	seg002_ae8_proc(__disp, _state); break;
        case m2c::kloc_1c5e3: 	seg002_ae8_proc(__disp, _state); break;
        case m2c::ksub_1c5ef: 	sub_1c5ef(0, _state); break;
        case m2c::ksub_1c615: 	sub_1c615(0, _state); break;
        case m2c::ksub_1c61b: 	sub_1c61b(0, _state); break;
        case m2c::kloc_1c6c4: 	sub_1c61b(__disp, _state); break;
        case m2c::kloc_1c62c: 	sub_1c61b(__disp, _state); break;
        case m2c::kloc_1c68b: 	sub_1c61b(__disp, _state); break;
        case m2c::kseg002_bf7_proc: 	seg002_bf7_proc(0, _state); break;
        case m2c::ksub_1c6d0: 	sub_1c6d0(0, _state); break;
        case m2c::kloc_1c6fc: 	sub_1c6d0(__disp, _state); break;
        case m2c::klocret_1c702: 	sub_1c6d0(__disp, _state); break;
        case m2c::kseg002_c33_proc: 	seg002_c33_proc(0, _state); break;
        case m2c::kret_d4f_c7b: 	seg002_c33_proc(__disp, _state); break;
        case m2c::kret_d4f_c6f: 	seg002_c33_proc(__disp, _state); break;
        case m2c::kret_d4f_c5d: 	seg002_c33_proc(__disp, _state); break;
        case m2c::kret_d4f_c81: 	seg002_c33_proc(__disp, _state); break;
        case m2c::kret_d4f_c75: 	seg002_c33_proc(__disp, _state); break;
        case m2c::kret_d4f_c39: 	seg002_c33_proc(__disp, _state); break;
        case m2c::kret_d4f_c8d: 	seg002_c33_proc(__disp, _state); break;
        case m2c::kret_d4f_c51: 	seg002_c33_proc(__disp, _state); break;
        case m2c::kret_d4f_c45: 	seg002_c33_proc(__disp, _state); break;
        case m2c::kret_d4f_c69: 	seg002_c33_proc(__disp, _state); break;
        case m2c::kret_d4f_c3f: 	seg002_c33_proc(__disp, _state); break;
        case m2c::kret_d4f_c57: 	seg002_c33_proc(__disp, _state); break;
        case m2c::kret_d4f_c4b: 	seg002_c33_proc(__disp, _state); break;
        case m2c::kret_d4f_c87: 	seg002_c33_proc(__disp, _state); break;
        case m2c::kret_d4f_c63: 	seg002_c33_proc(__disp, _state); break;
        case m2c::ksub_1c763: 	sub_1c763(0, _state); break;
        case m2c::ksub_1c769: 	sub_1c769(0, _state); break;
        case m2c::ksub_1c76f: 	sub_1c76f(0, _state); break;
        case m2c::ksub_1c775: 	sub_1c775(0, _state); break;
        case m2c::ksub_1c77b: 	sub_1c77b(0, _state); break;
        case m2c::ksub_1c781: 	sub_1c781(0, _state); break;
        case m2c::kseg002_cb7_proc: 	seg002_cb7_proc(0, _state); break;
        case m2c::kret_d4f_cbd: 	seg002_cb7_proc(__disp, _state); break;
        case m2c::kret_d4f_cc3: 	seg002_cb7_proc(__disp, _state); break;
        case m2c::ksub_1c799: 	sub_1c799(0, _state); break;
        case m2c::ksub_1c79f: 	sub_1c79f(0, _state); break;
        case m2c::kseg002_cd5_proc: 	seg002_cd5_proc(0, _state); break;
        case m2c::ksub_1c7ab: 	sub_1c7ab(0, _state); break;
        case m2c::kseg002_ce1_proc: 	seg002_ce1_proc(0, _state); break;
        case m2c::kret_d4f_ce7: 	seg002_ce1_proc(__disp, _state); break;
        case m2c::ksub_1c7bd: 	sub_1c7bd(0, _state); break;
        case m2c::kseg002_cf3_proc: 	seg002_cf3_proc(0, _state); break;
        case m2c::kret_d4f_d23: 	seg002_cf3_proc(__disp, _state); break;
        case m2c::kret_d4f_d41: 	seg002_cf3_proc(__disp, _state); break;
        case m2c::kret_d4f_d0b: 	seg002_cf3_proc(__disp, _state); break;
        case m2c::kret_d4f_d11: 	seg002_cf3_proc(__disp, _state); break;
        case m2c::kret_d4f_d1d: 	seg002_cf3_proc(__disp, _state); break;
        case m2c::kret_d4f_d17: 	seg002_cf3_proc(__disp, _state); break;
        case m2c::kret_d4f_cf9: 	seg002_cf3_proc(__disp, _state); break;
        case m2c::kret_d4f_d05: 	seg002_cf3_proc(__disp, _state); break;
        case m2c::kret_d4f_d35: 	seg002_cf3_proc(__disp, _state); break;
        case m2c::kret_d4f_d47: 	seg002_cf3_proc(__disp, _state); break;
        case m2c::kret_d4f_d3b: 	seg002_cf3_proc(__disp, _state); break;
        case m2c::kret_d4f_d29: 	seg002_cf3_proc(__disp, _state); break;
        case m2c::kret_d4f_d2f: 	seg002_cf3_proc(__disp, _state); break;
        case m2c::kret_d4f_cff: 	seg002_cf3_proc(__disp, _state); break;
        case m2c::kret_d4f_d4d: 	seg002_cf3_proc(__disp, _state); break;
        case m2c::ksub_1cd7b: 	sub_1cd7b(0, _state); break;
        case m2c::ksub_1cd7d: 	sub_1cd7d(0, _state); break;
        case m2c::kloc_1cd84: 	sub_1cd7d(__disp, _state); break;
        case m2c::kloc_1cd8b: 	sub_1cd7d(__disp, _state); break;
        case m2c::kloc_1cdbc: 	sub_1cd7d(__disp, _state); break;
        case m2c::kloc_1cdd4: 	sub_1cd7d(__disp, _state); break;
        case m2c::kloc_1cdb2: 	sub_1cd7d(__disp, _state); break;
        case m2c::klocret_1cdee: 	sub_1cd7d(__disp, _state); break;
        case m2c::kloc_1cda0: 	sub_1cd7d(__disp, _state); break;
        case m2c::kloc_1cdde: 	sub_1cd7d(__disp, _state); break;
        case m2c::kloc_1cde0: 	sub_1cd7d(__disp, _state); break;
        case m2c::ksub_1cdef: 	sub_1cdef(0, _state); break;
        case m2c::kloc_1ce64: 	sub_1cdef(__disp, _state); break;
        case m2c::kloc_1ce08: 	sub_1cdef(__disp, _state); break;
        case m2c::kloc_1ce36: 	sub_1cdef(__disp, _state); break;
        case m2c::kloc_1ce24: 	sub_1cdef(__disp, _state); break;
        case m2c::kloc_1ce40: 	sub_1cdef(__disp, _state); break;
        case m2c::kloc_1ce0f: 	sub_1cdef(__disp, _state); break;
        case m2c::klocret_1ce77: 	sub_1cdef(__disp, _state); break;
        case m2c::kloc_1ce58: 	sub_1cdef(__disp, _state); break;
        case m2c::kloc_1ce75: 	sub_1cdef(__disp, _state); break;
        case m2c::kloc_1ce62: 	sub_1cdef(__disp, _state); break;
        case m2c::kloc_1ce78: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1d05c: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1d00c: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1d154: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1cf89: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1cff3: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1d043: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1d134: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1d213: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1d1ab: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1d0e5: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1d264: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1d175: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1cfbc: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1d094: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1d29b: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1cf6c: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1cf53: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1d14d: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1d150: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1d230: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1d24b: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1d304: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1d33b: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1cfd9: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1d1df: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1d1fa: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1d38b: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1d0fe: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1d281: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1d1c4: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1cf39: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1d3a4: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1d190: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1d2b4: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1d2eb: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1cfa3: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1d354: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1d029: 	seg003_648_proc(__disp, _state); break;
        case m2c::kloc_1d0ad: 	seg003_648_proc(__disp, _state); break;
        case m2c::ksub_1dd9c: 	sub_1dd9c(0, _state); break;
        case m2c::kloc_1dd9f: 	sub_1dd9c(__disp, _state); break;
        case m2c::kloc_1ddd2: 	sub_1dd9c(__disp, _state); break;
        case m2c::kloc_1ddf0: 	sub_1dd9c(__disp, _state); break;
        case m2c::kloc_1ddc7: 	sub_1dd9c(__disp, _state); break;
        case m2c::ksub_1de05: 	sub_1de05(0, _state); break;
        case m2c::kloc_1df5c: 	sub_1de05(__disp, _state); break;
        case m2c::kloc_1deaa: 	sub_1de05(__disp, _state); break;
        case m2c::kloc_1de60: 	sub_1de05(__disp, _state); break;
        case m2c::kloc_1de09: 	sub_1de05(__disp, _state); break;
        case m2c::kloc_1dee4: 	sub_1de05(__disp, _state); break;
        case m2c::kloc_1de41: 	sub_1de05(__disp, _state); break;
        case m2c::kloc_1dede: 	sub_1de05(__disp, _state); break;
        case m2c::kloc_1de93: 	sub_1de05(__disp, _state); break;
        case m2c::kloc_1deca: 	sub_1de05(__disp, _state); break;
        case m2c::ksub_1df6a: 	sub_1df6a(0, _state); break;
        case m2c::kloc_1dfa2: 	sub_1df6a(__disp, _state); break;
        case m2c::kloc_1e027: 	sub_1df6a(__disp, _state); break;
        case m2c::kloc_1e03b: 	sub_1df6a(__disp, _state); break;
        case m2c::kloc_1e041: 	sub_1df6a(__disp, _state); break;
        case m2c::kloc_1dff0: 	sub_1df6a(__disp, _state); break;
        case m2c::kloc_1e007: 	sub_1df6a(__disp, _state); break;
        case m2c::kloc_1e0b9: 	sub_1df6a(__disp, _state); break;
        case m2c::kloc_1df6e: 	sub_1df6a(__disp, _state); break;
        case m2c::kloc_1dfbd: 	sub_1df6a(__disp, _state); break;
        case m2c::ksub_1e0c7: 	sub_1e0c7(0, _state); break;
        case m2c::kloc_1e0e4: 	sub_1e0c7(__disp, _state); break;
        case m2c::kloc_1e147: 	sub_1e0c7(__disp, _state); break;
        case m2c::kloc_1e133: 	sub_1e0c7(__disp, _state); break;
        case m2c::klocret_1e16c: 	sub_1e0c7(__disp, _state); break;
        case m2c::kloc_1e142: 	sub_1e0c7(__disp, _state); break;
        case m2c::kloc_1e158: 	sub_1e0c7(__disp, _state); break;
        case m2c::kloc_1e0ea: 	sub_1e0c7(__disp, _state); break;
        case m2c::ksub_1e16d: 	sub_1e16d(0, _state); break;
        case m2c::kloc_1f1a0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f1c7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20938: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f25c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26a10: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25885: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27b55: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2173b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_264e2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21999: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2353c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_207e7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25d84: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2253b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24ccd: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2323e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_244ea: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21322: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21d28: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2511a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27334: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_211a4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2496c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f1d7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20327: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2224e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2374e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27d27: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_243ba: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_228a1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24a56: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2354e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25a66: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2382c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24da5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22b38: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_273cc: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25e18: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20617: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25d66: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2404c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_256ca: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f76b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2567a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27975: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f2e3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_228b8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_284b8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20cec: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24632: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22bc4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26052: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f1f7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fb42: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_263cd: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_253b6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_270d2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_28218: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20efc: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_272b7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f7b8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_218ad: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25bd3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2081a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23831: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26209: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_238d0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f283: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2390c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21721: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24908: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f20e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f60e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fe2a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_237c9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2367a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27776: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21080: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_232e0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23609: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20927: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22399: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fb2d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20037: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24922: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23847: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_208cd: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f51e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20203: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27724: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_210ba: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27cfd: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_236e3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f2cc: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23c3b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21c3f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20e55: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f207: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22c22: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2202b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26242: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20381: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f273: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21826: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25251: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20e76: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22052: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25f73: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20267: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20065: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22b3e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27711: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_206df: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24bb6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25dac: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24946: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2379d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25f44: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_230c9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_224e8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_215f2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25c9e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_28254: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_272c0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2693e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25f3d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24452: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_229f7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_220a9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_28063: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2741b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25d41: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20d12: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_276a2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2214c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22ce0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_213e6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22a92: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22a59: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2225e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27b14: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_220c2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2554e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23c1d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25fb0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f474: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24612: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26196: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26105: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f569: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23223: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20651: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_28188: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24252: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24122: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_227c6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_230a8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24010: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_270c8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2140d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_219e8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27007: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2290f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21693: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f24c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f400: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2177e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25fed: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21978: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_214f6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2138a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f991: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2634a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20188: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24a44: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f693: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23e52: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23e00: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f879: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26cef: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22788: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26c08: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_206b0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25ea2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_213a1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_223fd: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25466: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21d83: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_268eb: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_241a4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_222dc: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20b88: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_226cd: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fb7a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21677: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27ce5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_218ce: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2029a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23964: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f8e2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f7b3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_212eb: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22b1f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23b29: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27282: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20910: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24432: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22270: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_225b8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_237d7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2020c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26b2f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23712: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25a87: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24b96: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20626: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2422d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23673: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26da9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27d54: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_223bb: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25f07: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25a22: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_201c4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_248a6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_267d6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f593: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_212d9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24e72: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26540: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21da6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23595: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2550c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27c59: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23a75: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_240d2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26123: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27671: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f7f2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_28005: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20777: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_246aa: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2088f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22869: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24502: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_243d2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_240bc: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21391: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20ac3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22757: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23433: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22f11: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21656: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2811d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fd47: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_241e1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22117: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23911: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27bcc: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26663: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26928: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_274a0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23b66: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24bf0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21d60: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23b94: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2297d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fdec: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20916: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2432a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fb6c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26421: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fe73: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_210d9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27f1f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21a45: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24ed8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1ffd7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25d94: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23a23: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23c2c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_257a9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_270a1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2843c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fd70: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27f41: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_213f6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23aac: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25d2a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21aae: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_203f6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26898: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25cf8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fc88: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27e3b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_204c0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_269f0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23fdc: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f73a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_229d3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f944: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26372: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2267c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_28233: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_237c4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2071c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23022: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27131: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26231: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_233c4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21b10: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27580: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24af6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2219f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23523: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_283d0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2528f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_235be: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24ad9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27017: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_224c9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2043e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21f58: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23191: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_227e4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2710f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22371: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27747: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fff9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_250f9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26859: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_283fc: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21ce0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_28155: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f983: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_214da: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2135c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f5e4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_273d5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24c92: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2389c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2293c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_262e8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23701: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22852: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26160: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27cb2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20c43: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_246c2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24c81: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21fe6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2409e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27202: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_221d4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22287: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_225b0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_205f7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26167: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27171: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24752: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26a29: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_252a6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20576: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f7cd: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24957: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20f5c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20530: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25fcf: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f415: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26be9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20542: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_221f2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22803: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27f62: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22fa5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_265d1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_211bb: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21de5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2125a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2473a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25d6c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27aca: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_218e3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24aa6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20c82: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24ca9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fac2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24c17: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_207fa: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_262fe: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21363: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2147b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21adf: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27be4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23ad8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f464: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20cfb: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2476a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21765: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25cd0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24a8c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2021c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21187: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25523: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20398: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25ac1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20f41: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20b28: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_201d4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24e8f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20347: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20c2e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_280c3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21f41: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24e62: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23b7d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25058: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_262c1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_239e7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_273ef: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_246e2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f564: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2655e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24412: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25d48: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24e07: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_254c5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25532: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20d7c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_209ac: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27f7d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24c62: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24080: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_249c2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23969: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24bd5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23c42: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_271d2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26c9e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_224a0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2241e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20d9e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21492: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23682: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_267b8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2368c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_219f6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_219be: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21301: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21015: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fb1f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1ff18: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2008c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26fce: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2380e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25d32: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f2c3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f579: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22716: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fe8c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27a44: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2430a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22c93: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fdae: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_225f3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_265b3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20d47: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25ce8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_247dd: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24cc6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2497c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21434: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f4ca: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_266c1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f677: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25ee2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27b6f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20155: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20787: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f735: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f6bf: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25708: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_283b7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_234e1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27ec0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20beb: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fbf1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2768a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21e4f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_272d9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_261d3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27ae1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_279af: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_271e6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2146d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22a8c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_247ab: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21e84: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f490: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27c41: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21476: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_215e4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_219d3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fa52: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23953: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_281a0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23938: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_248d9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_226e5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2145d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24e51: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25d7d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24f83: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20a6b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_281f7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fe13: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_231ec: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20a81: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21ea2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26745: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_239ae: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_226a3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21b72: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20010: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23990: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25977: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27086: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f6db: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f263: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22c3a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22c59: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24792: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f3fb: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f3eb: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_270bf: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23883: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21001: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26ef2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27503: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_208df: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26e3f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2336e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27061: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fd59: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25db4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2203b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27d64: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f1e7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27412: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2466a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20248: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23bd1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22448: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26f8f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_207a8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_236a7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2274f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_225ca: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22a39: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27a0c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25dca: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f1f0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f1c9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_203ce: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26d51: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_249f5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25e7a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f509: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27356: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2054a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20157: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22554: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24973: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_248c8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20c52: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25e5b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2266a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27db9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2484a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25f7a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_28414: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_204fb: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21ef5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_225d2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_203a0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22aff: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f9b8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26de7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_205ff: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25487: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f225: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23c60: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_222ae: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_239d1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2704e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_240fe: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_238a1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26476: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21373: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_255ae: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_276ff: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2126c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_211ea: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f6ed: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_234b5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22997: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_204b8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27032: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_203b6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27028: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22da3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2457a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2141d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2152e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25372: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_261eb: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22a08: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22cfd: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26314: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f554: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23977: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23b09: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_201e4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23842: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23a52: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25a13: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21200: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_224ba: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2696b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27f99: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fa13: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23787: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22341: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2544f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22f80: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23a1e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24bf7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1ff5d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23771: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25ec0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fb9d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23fa0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24c30: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21ac3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23c7e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24807: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_260ce: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26e5e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24b18: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_236fc: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27a24: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27d7c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23de2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20dda: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23d22: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_284c8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25aa0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21381: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1ffc0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25411: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25638: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2086f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20800: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_272fa: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25cb8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_217cb: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2250b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20b59: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_232b1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_202dd: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26359: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2136a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24dc7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25f1e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21a92: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25188: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21cfe: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25c76: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f46f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22099: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_223e5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25920: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_208f8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2735f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22a33: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_275c6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25de8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2031f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f34c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20477: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21dbb: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f59c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21bd6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1ff46: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20f8a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2365c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_258a6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f4ed: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26ff7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_213df: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2830c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_254dc: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21242: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20258: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2503d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f31b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21ed7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21818: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_277bb: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22629: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21760: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20178: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23646: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27408: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21b3a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26c27: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_203ee: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f3cf: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20e42: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24362: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_271ef: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26871: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20a03: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_241bb: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_278b7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21229: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_260b0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f3e6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fa36: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_236c5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_271c9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2760e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21c5b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21994: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_259fc: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20637: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20733: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20fbd: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1ff92: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21641: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2004e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_255c6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26d90: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27d3e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f1b9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27df2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20781: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f44d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26070: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23782: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2288a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_261b4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27226: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25e82: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25fe6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_240e8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f425: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2531c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21803: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22871: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26fe6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27e5e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23be8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25ba5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25dd2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21963: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21cb6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23e70: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_243a2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24d9e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25363: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20bb7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2258f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_224af: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24fd2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2534c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f39e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22631: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2363e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_201f3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f2a3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22417: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27e7b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22237: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f9a8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fdc5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25e1f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f848: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_262d8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2102d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2113d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21dd7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f53f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_235e7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_270aa: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21646: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f807: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25e36: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2619d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27106: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21543: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f766: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21f6f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25582: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2285a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_221bd: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_249ee: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20d74: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_237f5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21af4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2633b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26626: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20c01: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2194c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f685: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_275ac: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27b8f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23487: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25e27: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2632b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2707d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22079: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23f32: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f42a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27119: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_259cc: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26219: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_201a3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_232cc: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f368: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24cef: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21857: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2747b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21dfa: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_276e7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2306d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_202e5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_213a8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2176e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_260d5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2134a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26f20: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fa28: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2062e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24a12: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2191b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27da9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_216aa: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2393d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2270e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23af3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2247f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27ccc: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2308e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27de9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21c2a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24167: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27256: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25956: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21947: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2626e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27ab2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2357e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21406: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21c0e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f7f7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26a48: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f1d0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_275e8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26813: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22438: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20027: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_200a3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f320: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24b5b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22dd8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20361: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20410: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21ffd: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_236ea: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24e1f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f702: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_228c0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_219ae: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20dba: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23650: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26258: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_230e8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2055b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27fb4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fcbd: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26ec7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21e13: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23f5e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27736: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23927: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_204db: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2162a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2232a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2049f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26088: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20596: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2092d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21517: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21625: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21dc9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25ed1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_219a9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f57e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_274da: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26e07: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20a4f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26403: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25594: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2187a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22eea: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23691: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2423c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23004: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f9e9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2142d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24a77: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25dc3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1ff01: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26440: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2698a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20fa4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22351: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27557: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21a0d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22523: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24a34: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f7c8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26763: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_226b3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24f94: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_203d6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21c8c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26954: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25e8b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_254a6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26069: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fca6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25e45: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20ad2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24150: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2846d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26d20: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_231db: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21a29: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24a19: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27497: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22188: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25804: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_214ae: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27128: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21c70: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23f82: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f92f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24782: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fe03: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21873: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_28495: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_217a8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26099: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2248e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_229aa: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_278ec: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_253d7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22303: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f3ba: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27591: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23140: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f5d6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_263e5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2816f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fb8f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22d41: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2617f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2729b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f756: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26fa0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20a98: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22408: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23d92: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_265f0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_208af: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23664: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_250bd: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_208e5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21341: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25d9c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20f26: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_215d4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21f86: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24a70: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20426: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23ac2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f669: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24bbd: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_229c2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1ff28: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_282cd: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2058e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21937: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21f96: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_236a2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20170: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23179: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_237ae: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22649: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_238b2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_28048: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22aca: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_271c0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2110c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20cd7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_258c7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25217: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2066b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_208fe: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27ee1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21e31: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21cee: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2007c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22be4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_207e1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25620: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23cd0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25e63: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_216e0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_218fa: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fa67: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fd97: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2672d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20aae: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_268ae: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23add: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27629: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2420f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20167: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2602a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21bc1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26b91: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23655: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_242b2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_266f0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_237d2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f36d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26004: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_206f0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_234cb: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f5c1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2216a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24ac0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27459: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22a12: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24c4f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26bd0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2042e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_219ed: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2116e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_279cf: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24702: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f815: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2341d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2424b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_215f7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27bae: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26692: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fad7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22b5c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2394e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20135: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2085d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25c18: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_236ae: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f54f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26220: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26f09: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2600b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23a41: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_202cb: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25c8e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2707b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21533: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23632: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23922: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_251b2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27752: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26511: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24292: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21fbf: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27397: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_215aa: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27b35: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22641: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22476: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21b89: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24d8d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_216f5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20528: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f719: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21849: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2304c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f389: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24342: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25e3d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20744: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fbce: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22bba: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21ba5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25d6e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25b16: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_229e6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24fb8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f4f2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f96e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23f74: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27074: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fc0a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25fb7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25be2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20df4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27d93: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23753: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_200b3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f9fe: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_210a0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2719e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_218b2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24960: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24895: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_239e2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_204d3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2717b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21332: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21916: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fc7d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22d2b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2060f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f797: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_207c8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20d38: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2311f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2492c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f2d1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27144: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f523: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23813: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20767: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27fe2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25ee9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24fa7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_248f2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22737: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25430: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_209ca: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_245aa: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27fce: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f71e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_210f2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_212b1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23ee0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_283e3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1ffe7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24d24: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20145: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24b76: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_218c9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24b54: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_225eb: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27643: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_258e0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_28484: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_271b6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23865: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27876: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24c37: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f384: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_257eb: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26bb0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27323: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26ee0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20515: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_271ad: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26c60: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f895: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_235a5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23bab: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25f5c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26e97: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f4df: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_234f0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fc35: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26999: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_236c0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_254f5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_214a9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_213ef: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_28293: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24ac7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22b56: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_270b4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23ec2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_215cf: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22aee: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24562: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20c18: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_213b1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fbc0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_273ba: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f58e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25862: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24f0c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fd37: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2610c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_262ab: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22b8c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2283c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20820: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2706b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_201aa: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24d6d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21064: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_224d9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24b3a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26eaf: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21b64: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_270ec: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25c44: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fcf2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22a79: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f80c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24ff7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2720b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20eb0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f448: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_28370: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26c7f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25786: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2703b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23629: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_273ff: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_277f9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_218de: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25e00: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_244aa: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2281b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26295: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25230: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23bba: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_28382: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f8fe: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24d66: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f2ff: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23208: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26a67: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_219d8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22b6d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26e20: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24382: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27380: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26b47: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21609: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25a45: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20ec9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2187f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20709: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20756: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27995: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25648: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23a00: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_276ce: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22f29: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_264f9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_238f3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2103f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f4a0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f6d6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_268c5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21284: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25608: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f959: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23dd4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_200ca: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24c10: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21b25: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22062: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f2e8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27a63: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_248fc: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23bff: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26882: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2045f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26f38: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23a05: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24472: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27854: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_215a5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23e8e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_223ac: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f782: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2160e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fc1c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24d2b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_268d5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_274e3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f623: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2023d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27058: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_273a0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21512: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2129b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27536: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_233e3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24ce8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2572b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2046f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26238: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1faad: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fbea: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25395: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21125: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23972: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2612a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23a57: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20cc1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22684: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25d75: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2753f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_28027: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24f36: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25b56: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_237b3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20875: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_270e3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23452: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_208a9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_272e2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26781: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24e4a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23cb2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_201b4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_275f2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24950: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f82c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27897: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22aac: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_216db: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_269a9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f293: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25b75: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_214ca: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_248e9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2509c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_219c3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24a3b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2464a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20457: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22ca9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26e7e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f1fe: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25305: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21711: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2254c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_227ce: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24ad2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2137a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_249a0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20697: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25e0f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21ca1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f23c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25c5e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25bfe: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_200da: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27799: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24e00: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26595: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24997: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22467: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26abf: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27514: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_267f4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_207a2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2697b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20408: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_204f3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23cee: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27c72: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2490f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2373c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_205e6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_266d2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25d0a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22a53: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24139: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22014: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f1e0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2751d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20994: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21d75: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25ea9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2048e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_227a8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22fe4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fe3a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f6ad: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21595: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_281d5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f330: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_249d4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f6c4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_28358: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_208c7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1ff7b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24ef3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2231a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2448a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26842: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24e39: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24f6a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_260b7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2143d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22df6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26c47: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24176: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21896: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22cc8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f5ac: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_216af: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_223ee: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22705: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_244ca: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22662: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2713b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2839d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f245: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2366c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_264cb: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_216c4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f21e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2315a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22d13: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f235: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22ba3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_272a4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_200ea: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_239cc: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_274b9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24114: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27efc: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_227fb: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27232: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_226ed: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_273b1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27d0f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_269d1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21793: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2501a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_220b9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24542: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_223dc: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fe4a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22e2e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22ff3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22457: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_214df: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22ec0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2759a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20123: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f1a7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21d4b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25b37: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2375a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20446: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22f52: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27560: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2576d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_241ca: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f2b3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2256e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_249fe: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26d32: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2513b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2371e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f79c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1febc: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25d5f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27577: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27932: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_220db: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_215bf: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27c04: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2723b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2682b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_236cc: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2566a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22576: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2603b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20957: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_249db: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_274c2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_239b3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21932: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24afd: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22823: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27a81: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fcdb: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_259b5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26178: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f6f2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23778: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26b72: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23107: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21d98: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_247ee: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_214fb: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_252c7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22b86: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_280dc: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22b25: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20359: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21ccb: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22e61: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22ed5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24de7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_249e4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fb57: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21590: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23735: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f7e2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_284a7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21a5a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f45f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26b17: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2296c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24c99: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22b05: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25f91: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25851: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20b99: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22f41: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2493c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24b41: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_274fa: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_233ac: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22e43: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23b57: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24c7a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2329f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2183b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23d40: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_261f2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fd20: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20306: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21311: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24d46: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f654: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24d0a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24e32: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_215ba: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_237f0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_277d7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_280fd: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22c76: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23698: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26918: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27c8a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23567: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26092: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27377: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_216bf: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fe6a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26369: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22381: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_252e6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20e0f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21416: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2334e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20b71: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26901: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26ade: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_238b7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fd09: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25b8c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_280a4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2010a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20d57: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_212c1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24522: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21e66: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21574: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23b40: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21891: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_226d5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27af2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f3ca: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26059: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23013: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_255de: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2718b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_282ed: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23619: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_245c2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f9d4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22777: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f28a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_248b7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27657: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24272: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_207c2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fbb2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23ab1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_281b2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22899: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2574c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21fd6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26390: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25de1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20976: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25682: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f4e4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2743f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2170c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_243ea: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21865: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26023: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26608: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20e29: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_226bb: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25996: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_249b2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25e07: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25f55: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23da8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22dc1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_232f9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23995: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f1c0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27e17: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1ffa9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27303: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_263ae: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2670e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20379: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21bf2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21a76: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_242ea: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1feea: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26522: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20c99: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22220: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2721d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25e73: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25ed8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_245f2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f6a8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2269b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22e78: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23b04: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24839: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_205ce: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20857: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27484: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_278d1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2229e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2731a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fb0a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23d7c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24ec5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24fc9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26dc8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2326d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_223cb: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23708: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2212e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_202b3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_269b2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26148: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22a18: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_282ac: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27ca1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20fd5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20193: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23860: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2260a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_270f6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_275df: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f646: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_205de: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23ff2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_213b8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2022d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_251f6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_220f9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2272f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2516f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27906: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_275b5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_247c4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2350a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23fbe: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f1b2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_273e6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f6fd: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23e3c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22bb4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27194: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25eb9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fae5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21f2a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25f25: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23286: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27dda: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22ae8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22ad0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f864: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fc47: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_28084: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_217e0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20b0a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20bcf: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_206c8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22922: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2657d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22361: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f8b1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_275cf: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_228f5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2376c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_213cf: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24c69: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f7dd: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21371: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f50e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_260f4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2155f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21df3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24de0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27436: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f5f9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2050d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24863: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_238d5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_253f0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2330b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_223cd: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27dca: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_256a7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_227ec: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23c9c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21f0c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2238a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_205c6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2813c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23f48: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26494: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27462: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21750: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22b9d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_227b0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23aee: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_255ee: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26afe: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fc59: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2197d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_257ca: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2349d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26d07: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26f49: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2033f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27045: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26458: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22089: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20497: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20a37: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22c03: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22f96: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26285: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21fa8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25901: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25f98: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21351: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2487c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24933: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2842b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2783a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24ca2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_228db: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23d0c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25335: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22e94: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f4a5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_276b4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f8cd: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20c6a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21672: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_218ff: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20f14: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25f00: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2565a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27099: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27954: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21726: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20895: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f43a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_236de: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21d13: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23637: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26cd7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20486: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24a22: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21968: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21ec0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20684: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_216f0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22597: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_205a8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2714d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2725f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27279: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2402e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24e18: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2791f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f335: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26fb7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20a19: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22209: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25df0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24e69: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26aa0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22f6a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fe5a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23ac7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2346a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f410: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2331f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_213c8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24b7d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25838: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_28455: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21564: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_224f1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20e91: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22d57: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23dbe: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24d11: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23717: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fa98: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2387e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23a3c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2139a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24990: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_261da: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2581f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fbdc: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21579: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fc6b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20b40: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22a73: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20839: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21052: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21736: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23a8e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22834: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20af1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_241f8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24918: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2144d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23730: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_211d3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22429: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f913: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24d86: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f304: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24c48: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27168: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f399: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22b73: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_259e5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f751: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f6a1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24a93: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fed3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24b9d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_202fe: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24f25: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2507b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_238ee: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_215e9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_248e2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23e1e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25568: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27157: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2667b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21b4f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23c0e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2014e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23a93: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21548: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25270: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_256ed: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26042: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24f51: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20d23: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25d39: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_267a0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2114f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_235f7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_231c3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2421e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26a87: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20113: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22e12: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f4ba: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24820: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20caa: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_226fd: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24402: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25bbc: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22ea9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2056e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2083f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26141: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fa83: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20277: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_28274: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22954: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22612: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27e9e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24b1f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26b60: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20ee3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2733d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22d85: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23eac: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_217f5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21210: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_231ab: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25da5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_235d0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23d5e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24bce: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_264b3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f4cf: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1faf5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25d50: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22fce: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20280: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_251d5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2174b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fd87: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20fe7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25ae0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20d66: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_223c4: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f53a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_28325: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24aad: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_200fa: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23331: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2418d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25e92: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26cbe: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24dc0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f48b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24a5d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24d4d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23f1c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2833f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25d8d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25c32: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_245d2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_261bb: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_279ee: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2366e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24592: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22d66: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26d70: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23343: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24722: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2492a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fddc: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21d36: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_222f3: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_251a1: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24eaa: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20563: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2276f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23252: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23400: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_242ca: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24a66: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2593f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25aff: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27090: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_20f76: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22ab2: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25154: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27c23: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22ef8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_205b0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22fbd: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26202: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26644: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_260ed: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26f60: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_266a9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_228b0: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f26c: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_249b9: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1fe9e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23b12: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25d1a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25d57: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23a70: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22882: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_203be: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_214c5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23efe: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f43f: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f4b5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_222c5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2168e: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_250d6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f631: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_22790: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f787: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_24062: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26f77: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25e54: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_27a99: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2781a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2165b: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_23798: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_217b6: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f351: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_209e7: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_25fc8: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2302a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_26081: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_1f3b5: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_21075: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2148d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2338d: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_2468a: 	seg003_2970_proc(__disp, _state); break;
        case m2c::kloc_128d1: 	_group1(__disp, _state); break;
        case m2c::ksub_12948: 	_group1(__disp, _state); break;
        case m2c::kloc_12923: 	_group1(__disp, _state); break;
        case m2c::kloc_12901: 	_group1(__disp, _state); break;
        case m2c::kloc_1290b: 	_group1(__disp, _state); break;
        case m2c::kloc_128f8: 	_group1(__disp, _state); break;
        case m2c::ksub_14487: 	_group2(__disp, _state); break;
        case m2c::kloc_144bb: 	_group2(__disp, _state); break;
        case m2c::ksub_144ad: 	_group2(__disp, _state); break;
        case m2c::kloc_14489: 	_group2(__disp, _state); break;
        case m2c::kloc_144af: 	_group2(__disp, _state); break;
        case m2c::kloc_14495: 	_group2(__disp, _state); break;
        case m2c::ksub_146d0: 	_group3(__disp, _state); break;
        case m2c::ksub_146de: 	_group3(__disp, _state); break;
        case m2c::ksub_146f6: 	_group4(__disp, _state); break;
        case m2c::ksub_14704: 	_group4(__disp, _state); break;
        case m2c::ksub_14713: 	_group5(__disp, _state); break;
        case m2c::ksub_14721: 	_group5(__disp, _state); break;
        case m2c::ksub_1473d: 	_group6(__disp, _state); break;
        case m2c::ksub_1474b: 	_group6(__disp, _state); break;
        case m2c::ksub_14763: 	_group7(__disp, _state); break;
        case m2c::ksub_14771: 	_group7(__disp, _state); break;
        case m2c::ksub_1477d: 	_group8(__disp, _state); break;
        case m2c::ksub_1478b: 	_group8(__disp, _state); break;
        case m2c::ksub_151bc: 	_group9(__disp, _state); break;
        case m2c::kloc_151be: 	_group9(__disp, _state); break;
        case m2c::kloc_15214: 	_group9(__disp, _state); break;
        case m2c::ksub_151f6: 	_group9(__disp, _state); break;
        case m2c::kloc_151f8: 	_group9(__disp, _state); break;
        case m2c::kloc_151da: 	_group9(__disp, _state); break;
        case m2c::ksub_1555c: 	_group10(__disp, _state); break;
        case m2c::klocret_1559b: 	_group10(__disp, _state); break;
        case m2c::ksub_15569: 	_group10(__disp, _state); break;
        case m2c::kloc_15582: 	_group10(__disp, _state); break;
        case m2c::kloc_15597: 	_group10(__disp, _state); break;
        case m2c::ksub_17561: 	_group11(__disp, _state); break;
        case m2c::kloc_17679: 	_group11(__disp, _state); break;
        case m2c::kloc_17693: 	_group11(__disp, _state); break;
        case m2c::kseg000_76bc_proc: 	_group11(__disp, _state); break;
        case m2c::kloc_17581: 	_group11(__disp, _state); break;
        case m2c::kloc_175d3: 	_group11(__disp, _state); break;
        case m2c::kloc_17636: 	_group11(__disp, _state); break;
        case m2c::kloc_1759c: 	_group11(__disp, _state); break;
        case m2c::klocret_17678: 	_group11(__disp, _state); break;
        case m2c::ksub_17791: 	_group12(__disp, _state); break;
        case m2c::knullsub_6: 	_group12(__disp, _state); break;
        case m2c::ksub_1c8f1: 	_group13(__disp, _state); break;
        case m2c::kloc_1caac: 	_group13(__disp, _state); break;
        case m2c::kloc_1cb1a: 	_group13(__disp, _state); break;
        case m2c::kloc_1cbdd: 	_group13(__disp, _state); break;
        case m2c::kloc_1ca5b: 	_group13(__disp, _state); break;
        case m2c::kloc_1c9ce: 	_group13(__disp, _state); break;
        case m2c::kloc_1c9b6: 	_group13(__disp, _state); break;
        case m2c::kloc_1cd6b: 	_group13(__disp, _state); break;
        case m2c::kloc_1cb77: 	_group13(__disp, _state); break;
        case m2c::kloc_1ca3c: 	_group13(__disp, _state); break;
        case m2c::kloc_1ca91: 	_group13(__disp, _state); break;
        case m2c::kloc_1ca24: 	_group13(__disp, _state); break;
        case m2c::kloc_1cba6: 	_group13(__disp, _state); break;
        case m2c::kloc_1cd5d: 	_group13(__disp, _state); break;
        case m2c::kloc_1ccd7: 	_group13(__disp, _state); break;
        case m2c::kloc_1cd45: 	_group13(__disp, _state); break;
        case m2c::kloc_1c9ed: 	_group13(__disp, _state); break;
        case m2c::kloc_1cae3: 	_group13(__disp, _state); break;
        case m2c::kloc_1cbf5: 	_group13(__disp, _state); break;
        case m2c::kloc_1cb7a: 	_group13(__disp, _state); break;
        case m2c::kseg003_470_proc: 	_group13(__disp, _state); break;
        case m2c::kloc_1cc4b: 	_group13(__disp, _state); break;
        case m2c::kloc_1cbbe: 	_group13(__disp, _state); break;
        case m2c::kloc_1cc81: 	_group13(__disp, _state); break;
        case m2c::kloc_1c912: 	_group13(__disp, _state); break;
        case m2c::kloc_1cc71: 	_group13(__disp, _state); break;
        case m2c::kloc_1cb51: 	_group13(__disp, _state); break;
        case m2c::kloc_1ca05: 	_group13(__disp, _state); break;
        case m2c::kloc_1c92a: 	_group13(__disp, _state); break;
        case m2c::kloc_1c937: 	_group13(__disp, _state); break;
        case m2c::kloc_1c99b: 	_group13(__disp, _state); break;
        case m2c::kloc_1cafb: 	_group13(__disp, _state); break;
        case m2c::kloc_1cb87: 	_group13(__disp, _state); break;
        case m2c::kloc_1cd0e: 	_group13(__disp, _state); break;
        case m2c::kloc_1cc63: 	_group13(__disp, _state); break;
        case m2c::kloc_1cd6e: 	_group13(__disp, _state); break;
        case m2c::kloc_1cac4: 	_group13(__disp, _state); break;
        case m2c::kloc_1cd26: 	_group13(__disp, _state); break;
        case m2c::kloc_1cc74: 	_group13(__disp, _state); break;
        case m2c::kloc_1cc2c: 	_group13(__disp, _state); break;
        case m2c::kloc_1cb69: 	_group13(__disp, _state); break;
        case m2c::kloc_1cc14: 	_group13(__disp, _state); break;
        case m2c::kloc_1ca73: 	_group13(__disp, _state); break;
        case m2c::kloc_1ccb8: 	_group13(__disp, _state); break;
        case m2c::kloc_1ca81: 	_group13(__disp, _state); break;
        case m2c::kloc_1ca84: 	_group13(__disp, _state); break;
        case m2c::kloc_1ccef: 	_group13(__disp, _state); break;
        case m2c::kloc_1cb32: 	_group13(__disp, _state); break;
        case m2c::kloc_1c939: 	_group13(__disp, _state); break;
        case m2c::ksub_1d3b2: 	_group14(__disp, _state); break;
        case m2c::kloc_1d5c0: 	_group14(__disp, _state); break;
        case m2c::kloc_1dd48: 	_group14(__disp, _state); break;
        case m2c::kloc_1d9f8: 	_group14(__disp, _state); break;
        case m2c::kloc_1da07: 	_group14(__disp, _state); break;
        case m2c::kloc_1d708: 	_group14(__disp, _state); break;
        case m2c::kloc_1d9ed: 	_group14(__disp, _state); break;
        case m2c::kloc_1db94: 	_group14(__disp, _state); break;
        case m2c::kloc_1db98: 	_group14(__disp, _state); break;
        case m2c::kloc_1d57e: 	_group14(__disp, _state); break;
        case m2c::kloc_1d8a8: 	_group14(__disp, _state); break;
        case m2c::kloc_1da6a: 	_group14(__disp, _state); break;
        case m2c::kloc_1d810: 	_group14(__disp, _state); break;
        case m2c::kloc_1dca7: 	_group14(__disp, _state); break;
        case m2c::kloc_1d44c: 	_group14(__disp, _state); break;
        case m2c::kloc_1db8c: 	_group14(__disp, _state); break;
        case m2c::kloc_1dd7a: 	_group14(__disp, _state); break;
        case m2c::kloc_1dcc6: 	_group14(__disp, _state); break;
        case m2c::kloc_1dbe8: 	_group14(__disp, _state); break;
        case m2c::kloc_1da29: 	_group14(__disp, _state); break;
        case m2c::kloc_1d749: 	_group14(__disp, _state); break;
        case m2c::kseg003_f9e_proc: 	_group14(__disp, _state); break;
        case m2c::kloc_1dafd: 	_group14(__disp, _state); break;
        case m2c::kloc_1d843: 	_group14(__disp, _state); break;
        case m2c::kloc_1da89: 	_group14(__disp, _state); break;
        case m2c::kloc_1d885: 	_group14(__disp, _state); break;
        case m2c::kloc_1d7bf: 	_group14(__disp, _state); break;
        case m2c::kloc_1dc65: 	_group14(__disp, _state); break;
        case m2c::kloc_1dc85: 	_group14(__disp, _state); break;
        case m2c::kloc_1d8f3: 	_group14(__disp, _state); break;
        case m2c::kloc_1da48: 	_group14(__disp, _state); break;
        case m2c::kloc_1db0c: 	_group14(__disp, _state); break;
        case m2c::kloc_1d73a: 	_group14(__disp, _state); break;
        case m2c::kloc_1d663: 	_group14(__disp, _state); break;
        case m2c::kloc_1d654: 	_group14(__disp, _state); break;
        case m2c::kloc_1d894: 	_group14(__disp, _state); break;
        case m2c::kloc_1da39: 	_group14(__disp, _state); break;
        case m2c::kloc_1d6ed: 	_group14(__disp, _state); break;
        case m2c::kloc_1db3d: 	_group14(__disp, _state); break;
        case m2c::kloc_1d50a: 	_group14(__disp, _state); break;
        case m2c::kloc_1d519: 	_group14(__disp, _state); break;
        case m2c::kloc_1d613: 	_group14(__disp, _state); break;
        case m2c::kloc_1dd89: 	_group14(__disp, _state); break;
        case m2c::kloc_1dcb7: 	_group14(__disp, _state); break;
        case m2c::kloc_1d55b: 	_group14(__disp, _state); break;
        case m2c::kloc_1dbf4: 	_group14(__disp, _state); break;
        case m2c::kloc_1dd39: 	_group14(__disp, _state); break;
        case m2c::kloc_1d77d: 	_group14(__disp, _state); break;
        case m2c::kloc_1dd07: 	_group14(__disp, _state); break;
        case m2c::kloc_1d5d0: 	_group14(__disp, _state); break;
        case m2c::kloc_1d425: 	_group14(__disp, _state); break;
        case m2c::kloc_1d5df: 	_group14(__disp, _state); break;
        case m2c::kloc_1d58e: 	_group14(__disp, _state); break;
        case m2c::kloc_1d53c: 	_group14(__disp, _state); break;
        case m2c::kloc_1daca: 	_group14(__disp, _state); break;
        case m2c::kloc_1d622: 	_group14(__disp, _state); break;
        case m2c::kloc_1dc76: 	_group14(__disp, _state); break;
        case m2c::kloc_1d695: 	_group14(__disp, _state); break;
        case m2c::kloc_1da7a: 	_group14(__disp, _state); break;
        case m2c::kloc_1d852: 	_group14(__disp, _state); break;
        case m2c::kloc_1dc43: 	_group14(__disp, _state); break;
        case m2c::kloc_1d4ff: 	_group14(__disp, _state); break;
        case m2c::kloc_1d729: 	_group14(__disp, _state); break;
        case m2c::kloc_1d801: 	_group14(__disp, _state); break;
        case m2c::kloc_1d6a4: 	_group14(__disp, _state); break;
        case m2c::kloc_1d6f9: 	_group14(__disp, _state); break;
        case m2c::kloc_1d471: 	_group14(__disp, _state); break;
        case m2c::kloc_1d78c: 	_group14(__disp, _state); break;
        case m2c::kloc_1db4c: 	_group14(__disp, _state); break;
        case m2c::kloc_1d95b: 	_group14(__disp, _state); break;
        case m2c::kloc_1d6ad: 	_group14(__disp, _state); break;
        case m2c::kloc_1dc34: 	_group14(__disp, _state); break;
        case m2c::kloc_1d93d: 	_group14(__disp, _state); break;
        case m2c::kloc_1d7af: 	_group14(__disp, _state); break;
        case m2c::kloc_1dcf8: 	_group14(__disp, _state); break;
        case m2c::kloc_1dabb: 	_group14(__disp, _state); break;
        case m2c::kloc_1dbcd: 	_group14(__disp, _state); break;
        case m2c::kloc_1d59d: 	_group14(__disp, _state); break;
        case m2c::kloc_1daab: 	_group14(__disp, _state); break;
        case m2c::kloc_1d6d2: 	_group14(__disp, _state); break;
        case m2c::kloc_1dc03: 	_group14(__disp, _state); break;
        case m2c::kloc_1d6b1: 	_group14(__disp, _state); break;
        case m2c::kloc_1dc23: 	_group14(__disp, _state); break;
        case m2c::kloc_1d54c: 	_group14(__disp, _state); break;
        case m2c::kloc_1db7d: 	_group14(__disp, _state); break;
        case m2c::kloc_1d91b: 	_group14(__disp, _state); break;
        case m2c::kloc_1d76c: 	_group14(__disp, _state); break;
        case m2c::kloc_1d3fd: 	_group14(__disp, _state); break;
        default: m2c::log_error("cs=%x ip=%x Don't know how to call to 0x%x. See " __FILE__ " line %d\n", cs,ip,__disp, __LINE__);
if (_state->call_source==3) {_state->call_source=0;return false;}
m2c::interpret_unknown_callf(__disp>>16,__disp&0xffff,2);
m2c::shadow_stack.getneedtoskipcallndclean(); // Put inside interpret_unknown_callf??
m2c::log_debug("doing return2\n");return true;
//m2c::stackDump(_state); abort();
     };
     return true;
}

#include <algorithm>
#include <iterator>
#ifdef DOSBOX_CUSTOM
#include <numeric>

 #define MYCOPY(x) {m2c::set_type(x);m2c::mycopy((db*)&x,(db*)&tmp999,sizeof(tmp999),#x);}

 namespace m2c {
  void   Initializer()
#else
 #define MYCOPY(x) memcpy(&x,&tmp999,sizeof(tmp999));
 namespace {
  struct Initializer {
   Initializer()
#endif
{
    {char tmp999[24]={'H','i',' ','M','o','m',' ','a','n','d',' ','D','a','d','.',' ','A','n','d',' ','T','a','m','i'};MYCOPY(ahimomanddadand)} // 01a2:0194
    {dw tmp999=0;MYCOPY(word_10980)} // 01a2:0980
    {db tmp999=0;MYCOPY(byte_128a8)} // 01a2:28a8
    {dw tmp999=8;MYCOPY(dummy7_4cf7)} // 01a2:32d7
    {dw tmp999=32;MYCOPY(dummy7_4cf9)} // 01a2:32d9
    {dw tmp999=16;MYCOPY(dummy7_4cfb)} // 01a2:32db
    {dw tmp999=176;MYCOPY(dummy7_4cfd)} // 01a2:32dd
    {db tmp999=0;MYCOPY(byte_1339e)} // 01a2:339e
    {db tmp999=0;MYCOPY(byte_1356d)} // 01a2:356d
    {dw tmp999=0;MYCOPY(word_16436)} // 01a2:6436
    {dw tmp999=0;MYCOPY(word_16438)} // 01a2:6438
    {db tmp999[6]={0};MYCOPY(dummy7_7e5a)} // 01a2:643a
    {dw tmp999=0;MYCOPY(word_17467)} // 01a2:7467
    {dw tmp999=0;MYCOPY(word_17469)} // 01a2:7469
    {dw tmp999=(dw)m2c::knullsub_1;MYCOPY(off_17974)} // 01a2:7974
    {dw tmp999=(dw)m2c::ksub_10ffc;MYCOPY(dummy7_9396)} // 01a2:7976
    {dw tmp999=(dw)m2c::ksub_10fe6;MYCOPY(dummy7_9398)} // 01a2:7978
    {db tmp999[4]={0};MYCOPY(dummy7_947c)} // 01a2:7a5c
    {dw tmp999=offset(seg001,unk_17d6c);MYCOPY(dummy7_9480)} // 0948:0000
    {dw tmp999=offset(seg001,unk_17d7c);MYCOPY(dummy7_9482)} // 0948:0002
    {dw tmp999=offset(seg001,unk_17d86);MYCOPY(dummy7_9484)} // 0948:0004
    {dw tmp999=offset(seg001,unk_17d93);MYCOPY(dummy7_9486)} // 0948:0006
    {dw tmp999=offset(seg001,ano);MYCOPY(dummy7_9488)} // 0948:0008
    {dw tmp999=offset(seg001,ayes);MYCOPY(dummy7_948a)} // 0948:000a
    {dw tmp999=offset(seg001,asc_17dd5);MYCOPY(dummy7_948c)} // 0948:000c
    {dw tmp999=offset(seg001,unk_17dd9);MYCOPY(dummy7_948e)} // 0948:000e
    {dw tmp999=offset(seg001,unk_17de8);MYCOPY(dummy7_9490)} // 0948:0010
    {dw tmp999=offset(seg001,byte_17e0b);MYCOPY(dummy7_9492)} // 0948:0012
    {dw tmp999=offset(seg001,unk_17e54);MYCOPY(dummy7_9494)} // 0948:0014
    {dw tmp999=offset(seg001,unk_17e67);MYCOPY(dummy7_9496)} // 0948:0016
    {dw tmp999=offset(seg001,unk_17ea4);MYCOPY(dummy7_9498)} // 0948:0018
    {dw tmp999=offset(seg001,unk_17ecb);MYCOPY(dummy7_949a)} // 0948:001a
    {dw tmp999=offset(seg001,unk_17f18);MYCOPY(dummy7_949c)} // 0948:001c
    {dw tmp999=offset(seg001,unk_17f33);MYCOPY(dummy7_949e)} // 0948:001e
    {dw tmp999=offset(seg001,unk_17f4f);MYCOPY(dummy7_94a0)} // 0948:0020
    {dw tmp999=offset(seg001,unk_17f4f);MYCOPY(dummy7_94a2)} // 0948:0022
    {dw tmp999=offset(seg001,unk_17f7d);MYCOPY(dummy7_94a4)} // 0948:0024
    {dw tmp999=offset(seg001,unk_17f9b);MYCOPY(dummy7_94a6)} // 0948:0026
    {dw tmp999=offset(seg001,unk_17fc0);MYCOPY(dummy7_94a8)} // 0948:0028
    {dw tmp999=offset(seg001,unk_17fe2);MYCOPY(dummy7_94aa)} // 0948:002a
    {dw tmp999=offset(seg001,unk_18004);MYCOPY(dummy7_94ac)} // 0948:002c
    {dw tmp999=offset(seg001,unk_18040);MYCOPY(dummy7_94ae)} // 0948:002e
    {dw tmp999=offset(seg001,unk_18051);MYCOPY(dummy7_94b0)} // 0948:0030
    {dw tmp999=offset(seg001,unk_18066);MYCOPY(dummy7_94b2)} // 0948:0032
    {dw tmp999=offset(seg001,unk_180ab);MYCOPY(dummy7_94b4)} // 0948:0034
    {dw tmp999=offset(seg001,unk_180d2);MYCOPY(dummy7_94b6)} // 0948:0036
    {dw tmp999=offset(seg001,unk_18126);MYCOPY(dummy7_94b8)} // 0948:0038
    {dw tmp999=offset(seg001,unk_18130);MYCOPY(dummy7_94ba)} // 0948:003a
    {dw tmp999=offset(seg001,unk_18161);MYCOPY(dummy7_94bc)} // 0948:003c
    {dw tmp999=offset(seg001,unk_1818a);MYCOPY(dummy7_94be)} // 0948:003e
    {dw tmp999=offset(seg001,unk_181bc);MYCOPY(dummy7_94c0)} // 0948:0040
    {dw tmp999=offset(seg001,unk_181e9);MYCOPY(dummy7_94c2)} // 0948:0042
    {dw tmp999=offset(seg001,unk_18221);MYCOPY(dummy7_94c4)} // 0948:0044
    {dw tmp999=offset(seg001,unk_18221);MYCOPY(dummy7_94c6)} // 0948:0046
    {dw tmp999=offset(seg001,unk_18221);MYCOPY(dummy7_94c8)} // 0948:0048
    {dw tmp999=offset(seg001,unk_18221);MYCOPY(dummy7_94ca)} // 0948:004a
    {dw tmp999=offset(seg001,unk_1823d);MYCOPY(dummy7_94cc)} // 0948:004c
    {dw tmp999=offset(seg001,unk_18265);MYCOPY(dummy7_94ce)} // 0948:004e
    {dw tmp999=offset(seg001,unk_18289);MYCOPY(dummy7_94d0)} // 0948:0050
    {dw tmp999=offset(seg001,unk_182bb);MYCOPY(dummy7_94d2)} // 0948:0052
    {dw tmp999=offset(seg001,unk_182e3);MYCOPY(dummy7_94d4)} // 0948:0054
    {dw tmp999=offset(seg001,unk_182fb);MYCOPY(dummy7_94d6)} // 0948:0056
    {dw tmp999=offset(seg001,unk_18318);MYCOPY(dummy7_94d8)} // 0948:0058
    {dw tmp999=offset(seg001,unk_18349);MYCOPY(dummy7_94da)} // 0948:005a
    {dw tmp999=offset(seg001,unk_1837f);MYCOPY(dummy7_94dc)} // 0948:005c
    {dw tmp999=offset(seg001,unk_183a4);MYCOPY(dummy7_94de)} // 0948:005e
    {dw tmp999=offset(seg001,unk_183c7);MYCOPY(dummy7_94e0)} // 0948:0060
    {dw tmp999=offset(seg001,unk_18423);MYCOPY(dummy7_94e2)} // 0948:0062
    {dw tmp999=offset(seg001,unk_18475);MYCOPY(dummy7_94e4)} // 0948:0064
    {dw tmp999=offset(seg001,unk_184b2);MYCOPY(dummy7_94e6)} // 0948:0066
    {dw tmp999=offset(seg001,unk_184e9);MYCOPY(dummy7_94e8)} // 0948:0068
    {dw tmp999=offset(seg001,unk_1851b);MYCOPY(dummy7_94ea)} // 0948:006a
    {dw tmp999=offset(seg001,unk_18536);MYCOPY(dummy7_94ec)} // 0948:006c
    {dw tmp999=offset(seg001,unk_1855f);MYCOPY(dummy7_94ee)} // 0948:006e
    {dw tmp999=offset(seg001,unk_18589);MYCOPY(dummy7_94f0)} // 0948:0070
    {dw tmp999=offset(seg001,unk_185a6);MYCOPY(dummy7_94f2)} // 0948:0072
    {dw tmp999=offset(seg001,unk_185d3);MYCOPY(dummy7_94f4)} // 0948:0074
    {dw tmp999=offset(seg001,unk_185ea);MYCOPY(dummy7_94f6)} // 0948:0076
    {dw tmp999=offset(seg001,unk_185fe);MYCOPY(dummy7_94f8)} // 0948:0078
    {dw tmp999=offset(seg001,unk_18623);MYCOPY(dummy7_94fa)} // 0948:007a
    {dw tmp999=offset(seg001,unk_18667);MYCOPY(dummy7_94fc)} // 0948:007c
    {dw tmp999=offset(seg001,unk_18698);MYCOPY(dummy7_94fe)} // 0948:007e
    {dw tmp999=offset(seg001,unk_186d2);MYCOPY(dummy7_9500)} // 0948:0080
    {dw tmp999=offset(seg001,unk_18718);MYCOPY(dummy7_9502)} // 0948:0082
    {dw tmp999=offset(seg001,unk_18762);MYCOPY(dummy7_9504)} // 0948:0084
    {dw tmp999=offset(seg001,unk_18762);MYCOPY(dummy7_9506)} // 0948:0086
    {dw tmp999=offset(seg001,atotradeanitemp);MYCOPY(dummy7_9508)} // 0948:0088
    {dw tmp999=offset(seg001,unk_18827);MYCOPY(dummy7_950a)} // 0948:008a
    {dw tmp999=offset(seg001,unk_18867);MYCOPY(dummy7_950c)} // 0948:008c
    {dw tmp999=offset(seg001,unk_188cc);MYCOPY(dummy7_950e)} // 0948:008e
    {dw tmp999=offset(seg001,unk_188f0);MYCOPY(dummy7_9510)} // 0948:0090
    {dw tmp999=offset(seg001,unk_1891d);MYCOPY(dummy7_9512)} // 0948:0092
    {dw tmp999=offset(seg001,unk_1899d);MYCOPY(dummy7_9514)} // 0948:0094
    {dw tmp999=offset(seg001,unk_189d3);MYCOPY(dummy7_9516)} // 0948:0096
    {dw tmp999=offset(seg001,unk_18a4b);MYCOPY(dummy7_9518)} // 0948:0098
    {dw tmp999=offset(seg001,unk_18ac2);MYCOPY(dummy7_951a)} // 0948:009a
    {dw tmp999=offset(seg001,unk_18b48);MYCOPY(dummy7_951c)} // 0948:009c
    {dw tmp999=offset(seg001,unk_18bd3);MYCOPY(dummy7_951e)} // 0948:009e
    {dw tmp999=offset(seg001,unk_18bfe);MYCOPY(dummy7_9520)} // 0948:00a0
    {dw tmp999=offset(seg001,unk_18c2f);MYCOPY(dummy7_9522)} // 0948:00a2
    {dw tmp999=offset(seg001,unk_18c3b);MYCOPY(dummy7_9524)} // 0948:00a4
    {dw tmp999=offset(seg001,unk_18c60);MYCOPY(dummy7_9526)} // 0948:00a6
    {dw tmp999=offset(seg001,unk_18c7a);MYCOPY(dummy7_9528)} // 0948:00a8
    {dw tmp999=offset(seg001,unk_18c85);MYCOPY(dummy7_952a)} // 0948:00aa
    {dw tmp999=offset(seg001,unk_18cb1);MYCOPY(dummy7_952c)} // 0948:00ac
    {dw tmp999=offset(seg001,unk_18cdb);MYCOPY(dummy7_952e)} // 0948:00ae
    {dw tmp999=offset(seg001,unk_18d13);MYCOPY(dummy7_9530)} // 0948:00b0
    {dw tmp999=offset(seg001,unk_18d5b);MYCOPY(dummy7_9532)} // 0948:00b2
    {dw tmp999=offset(seg001,unk_18d96);MYCOPY(dummy7_9534)} // 0948:00b4
    {dw tmp999=offset(seg001,unk_18db2);MYCOPY(dummy7_9536)} // 0948:00b6
    {dw tmp999=offset(seg001,unk_18dcf);MYCOPY(dummy7_9538)} // 0948:00b8
    {dw tmp999=offset(seg001,unk_18df7);MYCOPY(dummy7_953a)} // 0948:00ba
    {dw tmp999=offset(seg001,unk_18e23);MYCOPY(dummy7_953c)} // 0948:00bc
    {dw tmp999=offset(seg001,unk_18e3f);MYCOPY(dummy7_953e)} // 0948:00be
    {dw tmp999=offset(seg001,unk_18e63);MYCOPY(dummy7_9540)} // 0948:00c0
    {dw tmp999=offset(seg001,unk_18e6f);MYCOPY(dummy7_9542)} // 0948:00c2
    {dw tmp999=offset(seg001,unk_18e83);MYCOPY(dummy7_9544)} // 0948:00c4
    {dw tmp999=offset(seg001,unk_18e98);MYCOPY(dummy7_9546)} // 0948:00c6
    {dw tmp999=offset(seg001,unk_18eb8);MYCOPY(dummy7_9548)} // 0948:00c8
    {dw tmp999=offset(seg001,unk_18ed9);MYCOPY(dummy7_954a)} // 0948:00ca
    {dw tmp999=offset(seg001,unk_18f01);MYCOPY(dummy7_954c)} // 0948:00cc
    {dw tmp999=offset(seg001,unk_18f2d);MYCOPY(dummy7_954e)} // 0948:00ce
    {dw tmp999=offset(seg001,unk_18f52);MYCOPY(dummy7_9550)} // 0948:00d0
    {dw tmp999=offset(seg001,unk_18f87);MYCOPY(dummy7_9552)} // 0948:00d2
    {dw tmp999=offset(seg001,unk_18faa);MYCOPY(dummy7_9554)} // 0948:00d4
    {dw tmp999=offset(seg001,unk_18fdb);MYCOPY(dummy7_9556)} // 0948:00d6
    {dw tmp999=offset(seg001,unk_18feb);MYCOPY(dummy7_9558)} // 0948:00d8
    {dw tmp999=offset(seg001,unk_18ff9);MYCOPY(dummy7_955a)} // 0948:00da
    {dw tmp999=offset(seg001,unk_1902c);MYCOPY(dummy7_955c)} // 0948:00dc
    {dw tmp999=offset(seg001,unk_1904c);MYCOPY(dummy7_955e)} // 0948:00de
    {dw tmp999=offset(seg001,unk_1906a);MYCOPY(dummy7_9560)} // 0948:00e0
    {dw tmp999=offset(seg001,byte_190aa);MYCOPY(dummy7_9562)} // 0948:00e2
    {dw tmp999=offset(seg001,unk_190d8);MYCOPY(dummy7_9564)} // 0948:00e4
    {dw tmp999=offset(seg001,unk_19108);MYCOPY(dummy7_9566)} // 0948:00e6
    {dw tmp999=offset(seg001,unk_19138);MYCOPY(dummy7_9568)} // 0948:00e8
    {dw tmp999=offset(seg001,unk_19157);MYCOPY(dummy7_956a)} // 0948:00ea
    {dw tmp999=offset(seg001,unk_19170);MYCOPY(dummy7_956c)} // 0948:00ec
    {dw tmp999=offset(seg001,unk_1919f);MYCOPY(dummy7_956e)} // 0948:00ee
    {dw tmp999=offset(seg001,unk_191cb);MYCOPY(dummy7_9570)} // 0948:00f0
    {dw tmp999=offset(seg001,unk_191fd);MYCOPY(dummy7_9572)} // 0948:00f2
    {dw tmp999=offset(seg001,unk_19214);MYCOPY(dummy7_9574)} // 0948:00f4
    {dw tmp999=offset(seg001,unk_19222);MYCOPY(dummy7_9576)} // 0948:00f6
    {dw tmp999=offset(seg001,unk_1922f);MYCOPY(dummy7_9578)} // 0948:00f8
    {dw tmp999=offset(seg001,unk_19243);MYCOPY(dummy7_957a)} // 0948:00fa
    {dw tmp999=offset(seg001,unk_1925c);MYCOPY(dummy7_957c)} // 0948:00fc
    {dw tmp999=offset(seg001,unk_19278);MYCOPY(dummy7_957e)} // 0948:00fe
    {dw tmp999=offset(seg001,unk_19298);MYCOPY(dummy7_9580)} // 0948:0100
    {dw tmp999=offset(seg001,unk_192c0);MYCOPY(dummy7_9582)} // 0948:0102
    {dw tmp999=offset(seg001,unk_192e6);MYCOPY(dummy7_9584)} // 0948:0104
    {dw tmp999=offset(seg001,unk_192f8);MYCOPY(dummy7_9586)} // 0948:0106
    {dw tmp999=offset(seg001,unk_19309);MYCOPY(dummy7_9588)} // 0948:0108
    {dw tmp999=offset(seg001,unk_1932e);MYCOPY(dummy7_958a)} // 0948:010a
    {dw tmp999=offset(seg001,unk_1934f);MYCOPY(dummy7_958c)} // 0948:010c
    {dw tmp999=offset(seg001,unk_19380);MYCOPY(dummy7_958e)} // 0948:010e
    {dw tmp999=offset(seg001,unk_193a7);MYCOPY(dummy7_9590)} // 0948:0110
    {dw tmp999=offset(seg001,unk_193b9);MYCOPY(dummy7_9592)} // 0948:0112
    {dw tmp999=offset(seg001,unk_193e5);MYCOPY(dummy7_9594)} // 0948:0114
    {dw tmp999=offset(seg001,unk_193f9);MYCOPY(dummy7_9596)} // 0948:0116
    {dw tmp999=offset(seg001,unk_1940c);MYCOPY(dummy7_9598)} // 0948:0118
    {dw tmp999=offset(seg001,unk_19423);MYCOPY(dummy7_959a)} // 0948:011a
    {dw tmp999=offset(seg001,unk_19450);MYCOPY(dummy7_959c)} // 0948:011c
    {dw tmp999=offset(seg001,unk_19467);MYCOPY(dummy7_959e)} // 0948:011e
    {dw tmp999=offset(seg001,unk_19481);MYCOPY(dummy7_95a0)} // 0948:0120
    {dw tmp999=offset(seg001,unk_194af);MYCOPY(dummy7_95a2)} // 0948:0122
    {dw tmp999=offset(seg001,unk_194e2);MYCOPY(dummy7_95a4)} // 0948:0124
    {dw tmp999=offset(seg001,unk_1950c);MYCOPY(dummy7_95a6)} // 0948:0126
    {dw tmp999=offset(seg001,unk_19534);MYCOPY(dummy7_95a8)} // 0948:0128
    {dw tmp999=offset(seg001,unk_19554);MYCOPY(dummy7_95aa)} // 0948:012a
    {dw tmp999=offset(seg001,unk_1957b);MYCOPY(dummy7_95ac)} // 0948:012c
    {dw tmp999=offset(seg001,unk_195ad);MYCOPY(dummy7_95ae)} // 0948:012e
    {dw tmp999=offset(seg001,unk_195cc);MYCOPY(dummy7_95b0)} // 0948:0130
    {dw tmp999=offset(seg001,unk_195f8);MYCOPY(dummy7_95b2)} // 0948:0132
    {dw tmp999=offset(seg001,unk_19620);MYCOPY(dummy7_95b4)} // 0948:0134
    {dw tmp999=offset(seg001,unk_1965b);MYCOPY(dummy7_95b6)} // 0948:0136
    {dw tmp999=offset(seg001,unk_19686);MYCOPY(dummy7_95b8)} // 0948:0138
    {dw tmp999=offset(seg001,unk_1969f);MYCOPY(dummy7_95ba)} // 0948:013a
    {dw tmp999=offset(seg001,unk_196d8);MYCOPY(dummy7_95bc)} // 0948:013c
    {dw tmp999=offset(seg001,unk_196fc);MYCOPY(dummy7_95be)} // 0948:013e
    {dw tmp999=offset(seg001,unk_19732);MYCOPY(dummy7_95c0)} // 0948:0140
    {dw tmp999=offset(seg001,unk_1975b);MYCOPY(dummy7_95c2)} // 0948:0142
    {dw tmp999=offset(seg001,unk_19792);MYCOPY(dummy7_95c4)} // 0948:0144
    {dw tmp999=offset(seg001,unk_197ba);MYCOPY(dummy7_95c6)} // 0948:0146
    {dw tmp999=offset(seg001,unk_197c2);MYCOPY(dummy7_95c8)} // 0948:0148
    {dw tmp999=offset(seg001,unk_197d2);MYCOPY(dummy7_95ca)} // 0948:014a
    {dw tmp999=offset(seg001,unk_197e4);MYCOPY(dummy7_95cc)} // 0948:014c
    {dw tmp999=offset(seg001,unk_1981e);MYCOPY(dummy7_95ce)} // 0948:014e
    {dw tmp999=offset(seg001,unk_19859);MYCOPY(dummy7_95d0)} // 0948:0150
    {dw tmp999=offset(seg001,unk_19876);MYCOPY(dummy7_95d2)} // 0948:0152
    {dw tmp999=offset(seg001,unk_198b2);MYCOPY(dummy7_95d4)} // 0948:0154
    {dw tmp999=offset(seg001,unk_198d7);MYCOPY(dummy7_95d6)} // 0948:0156
    {dw tmp999=offset(seg001,unk_198f9);MYCOPY(dummy7_95d8)} // 0948:0158
    {dw tmp999=offset(seg001,unk_19932);MYCOPY(dummy7_95da)} // 0948:015a
    {dw tmp999=offset(seg001,unk_1996b);MYCOPY(dummy7_95dc)} // 0948:015c
    {dw tmp999=offset(seg001,unk_1998a);MYCOPY(dummy7_95de)} // 0948:015e
    {dw tmp999=offset(seg001,unk_199aa);MYCOPY(dummy7_95e0)} // 0948:0160
    {dw tmp999=offset(seg001,unk_199ca);MYCOPY(dummy7_95e2)} // 0948:0162
    {dw tmp999=offset(seg001,unk_199db);MYCOPY(dummy7_95e4)} // 0948:0164
    {dw tmp999=offset(seg001,unk_199ef);MYCOPY(dummy7_95e6)} // 0948:0166
    {dw tmp999=offset(seg001,unk_19a13);MYCOPY(dummy7_95e8)} // 0948:0168
    {dw tmp999=offset(seg001,unk_19a44);MYCOPY(dummy7_95ea)} // 0948:016a
    {dw tmp999=offset(seg001,unk_19a5b);MYCOPY(dummy7_95ec)} // 0948:016c
    {dw tmp999=offset(seg001,unk_19a88);MYCOPY(dummy7_95ee)} // 0948:016e
    {dw tmp999=offset(seg001,unk_19ad5);MYCOPY(dummy7_95f0)} // 0948:0170
    {dw tmp999=offset(seg001,unk_19afb);MYCOPY(dummy7_95f2)} // 0948:0172
    {dw tmp999=offset(seg001,unk_19b24);MYCOPY(dummy7_95f4)} // 0948:0174
    {dw tmp999=offset(seg001,unk_19b40);MYCOPY(dummy7_95f6)} // 0948:0176
    {dw tmp999=offset(seg001,unk_19b6f);MYCOPY(dummy7_95f8)} // 0948:0178
    {dw tmp999=offset(seg001,unk_19bbe);MYCOPY(dummy7_95fa)} // 0948:017a
    {dw tmp999=offset(seg001,unk_19bcc);MYCOPY(dummy7_95fc)} // 0948:017c
    {dw tmp999=offset(seg001,unk_19be9);MYCOPY(dummy7_95fe)} // 0948:017e
    {dw tmp999=offset(seg001,unk_19c18);MYCOPY(dummy7_9600)} // 0948:0180
    {dw tmp999=offset(seg001,unk_19c2a);MYCOPY(dummy7_9602)} // 0948:0182
    {dw tmp999=offset(seg001,unk_19c3c);MYCOPY(dummy7_9604)} // 0948:0184
    {dw tmp999=offset(seg001,unk_19c59);MYCOPY(dummy7_9606)} // 0948:0186
    {dw tmp999=offset(seg001,unk_19c79);MYCOPY(dummy7_9608)} // 0948:0188
    {dw tmp999=offset(seg001,unk_19ca5);MYCOPY(dummy7_960a)} // 0948:018a
    {dw tmp999=offset(seg001,unk_19cc4);MYCOPY(dummy7_960c)} // 0948:018c
    {dw tmp999=offset(seg001,unk_19ce1);MYCOPY(dummy7_960e)} // 0948:018e
    {dw tmp999=offset(seg001,unk_19d03);MYCOPY(dummy7_9610)} // 0948:0190
    {dw tmp999=offset(seg001,unk_19d12);MYCOPY(dummy7_9612)} // 0948:0192
    {dw tmp999=offset(seg001,unk_19d41);MYCOPY(dummy7_9614)} // 0948:0194
    {dw tmp999=offset(seg001,unk_19d81);MYCOPY(dummy7_9616)} // 0948:0196
    {dw tmp999=offset(seg001,unk_19dba);MYCOPY(dummy7_9618)} // 0948:0198
    {dw tmp999=offset(seg001,unk_19de6);MYCOPY(dummy7_961a)} // 0948:019a
    {dw tmp999=offset(seg001,unk_19e00);MYCOPY(dummy7_961c)} // 0948:019c
    {dw tmp999=offset(seg001,unk_19e27);MYCOPY(dummy7_961e)} // 0948:019e
    {dw tmp999=offset(seg001,unk_19e56);MYCOPY(dummy7_9620)} // 0948:01a0
    {dw tmp999=offset(seg001,unk_19e79);MYCOPY(dummy7_9622)} // 0948:01a2
    {dw tmp999=offset(seg001,unk_19e96);MYCOPY(dummy7_9624)} // 0948:01a4
    {dw tmp999=offset(seg001,unk_19ec0);MYCOPY(dummy7_9626)} // 0948:01a6
    {dw tmp999=offset(seg001,unk_19eee);MYCOPY(dummy7_9628)} // 0948:01a8
    {dw tmp999=offset(seg001,unk_19f25);MYCOPY(dummy7_962a)} // 0948:01aa
    {dw tmp999=offset(seg001,unk_19f46);MYCOPY(dummy7_962c)} // 0948:01ac
    {dw tmp999=offset(seg001,unk_19f7e);MYCOPY(dummy7_962e)} // 0948:01ae
    {dw tmp999=offset(seg001,unk_19f8e);MYCOPY(dummy7_9630)} // 0948:01b0
    {dw tmp999=offset(seg001,unk_19fc5);MYCOPY(dummy7_9632)} // 0948:01b2
    {dw tmp999=offset(seg001,unk_19fdd);MYCOPY(dummy7_9634)} // 0948:01b4
    {dw tmp999=offset(seg001,unk_1a008);MYCOPY(dummy7_9636)} // 0948:01b6
    {dw tmp999=offset(seg001,unk_1a024);MYCOPY(dummy7_9638)} // 0948:01b8
    {dw tmp999=offset(seg001,unk_1a03b);MYCOPY(dummy7_963a)} // 0948:01ba
    {dw tmp999=offset(seg001,unk_1a06a);MYCOPY(dummy7_963c)} // 0948:01bc
    {dw tmp999=offset(seg001,unk_1a08f);MYCOPY(dummy7_963e)} // 0948:01be
    {dw tmp999=offset(seg001,unk_1a0b0);MYCOPY(dummy7_9640)} // 0948:01c0
    {dw tmp999=offset(seg001,unk_1a0de);MYCOPY(dummy7_9642)} // 0948:01c2
    {dw tmp999=offset(seg001,unk_1a106);MYCOPY(dummy7_9644)} // 0948:01c4
    {dw tmp999=offset(seg001,unk_1a137);MYCOPY(dummy7_9646)} // 0948:01c6
    {dw tmp999=offset(seg001,unk_1a160);MYCOPY(dummy7_9648)} // 0948:01c8
    {dw tmp999=offset(seg001,unk_1a17d);MYCOPY(dummy7_964a)} // 0948:01ca
    {dw tmp999=offset(seg001,unk_1a19d);MYCOPY(dummy7_964c)} // 0948:01cc
    {dw tmp999=offset(seg001,unk_1a1ce);MYCOPY(dummy7_964e)} // 0948:01ce
    {dw tmp999=offset(seg001,unk_1a206);MYCOPY(dummy7_9650)} // 0948:01d0
    {dw tmp999=offset(seg001,unk_1a22b);MYCOPY(dummy7_9652)} // 0948:01d2
    {dw tmp999=offset(seg001,unk_1a243);MYCOPY(dummy7_9654)} // 0948:01d4
    {dw tmp999=offset(seg001,unk_1a2a2);MYCOPY(dummy7_9656)} // 0948:01d6
    {dw tmp999=offset(seg001,unk_1a2ca);MYCOPY(dummy7_9658)} // 0948:01d8
    {dw tmp999=offset(seg001,unk_1a304);MYCOPY(dummy7_965a)} // 0948:01da
    {dw tmp999=offset(seg001,unk_1a317);MYCOPY(dummy7_965c)} // 0948:01dc
    {dw tmp999=offset(seg001,unk_1a357);MYCOPY(dummy7_965e)} // 0948:01de
    {dw tmp999=offset(seg001,unk_1a38a);MYCOPY(dummy7_9660)} // 0948:01e0
    {dw tmp999=offset(seg001,unk_1a3ac);MYCOPY(dummy7_9662)} // 0948:01e2
    {dw tmp999=offset(seg001,unk_1a3c4);MYCOPY(dummy7_9664)} // 0948:01e4
    {dw tmp999=offset(seg001,unk_1a3e4);MYCOPY(dummy7_9666)} // 0948:01e6
    {dw tmp999=offset(seg001,unk_1a409);MYCOPY(dummy7_9668)} // 0948:01e8
    {dw tmp999=offset(seg001,unk_1a445);MYCOPY(dummy7_966a)} // 0948:01ea
    {dw tmp999=offset(seg001,unk_1a474);MYCOPY(dummy7_966c)} // 0948:01ec
    {dw tmp999=offset(seg001,unk_1a4b8);MYCOPY(dummy7_966e)} // 0948:01ee
    {dw tmp999=offset(seg001,unk_1a4cf);MYCOPY(dummy7_9670)} // 0948:01f0
    {dw tmp999=offset(seg001,unk_1a4f7);MYCOPY(dummy7_9672)} // 0948:01f2
    {dw tmp999=offset(seg001,unk_1a514);MYCOPY(dummy7_9674)} // 0948:01f4
    {dw tmp999=offset(seg001,unk_1a53f);MYCOPY(dummy7_9676)} // 0948:01f6
    {dw tmp999=offset(seg001,unk_1a56d);MYCOPY(dummy7_9678)} // 0948:01f8
    {dw tmp999=offset(seg001,unk_1a58e);MYCOPY(dummy7_967a)} // 0948:01fa
    {dw tmp999=offset(seg001,unk_1a59c);MYCOPY(dummy7_967c)} // 0948:01fc
    {dw tmp999=offset(seg001,anewgame);MYCOPY(dummy7_967e)} // 0948:01fe
    {dw tmp999=offset(seg001,apassword);MYCOPY(dummy7_9680)} // 0948:0200
    {dw tmp999=offset(seg001,asc_1a5ea);MYCOPY(dummy7_9682)} // 0948:0202
    {dw tmp999=offset(seg001,agameover);MYCOPY(dummy7_9684)} // 0948:0204
    {dw tmp999=offset(seg001,aoptions);MYCOPY(dummy7_9686)} // 0948:0206
    {dw tmp999=offset(seg001,aplayers);MYCOPY(dummy7_9688)} // 0948:0208
    {dw tmp999=offset(seg001,aone);MYCOPY(dummy7_968a)} // 0948:020a
    {dw tmp999=offset(seg001,atwo);MYCOPY(dummy7_968c)} // 0948:020c
    {dw tmp999=offset(seg001,amusic);MYCOPY(dummy7_968e)} // 0948:020e
    {dw tmp999=offset(seg001,asound);MYCOPY(dummy7_9690)} // 0948:0210
    {dw tmp999=offset(seg001,astereo);MYCOPY(dummy7_9692)} // 0948:0212
    {dw tmp999=offset(seg001,aon);MYCOPY(dummy7_9694)} // 0948:0214
    {dw tmp999=offset(seg001,aoff);MYCOPY(dummy7_9696)} // 0948:0216
    {dw tmp999=offset(seg001,aexit);MYCOPY(dummy7_9698)} // 0948:0218
    {dw tmp999=offset(seg001,unk_1a63d);MYCOPY(dummy7_969a)} // 0948:021a
    {dw tmp999=offset(seg001,ainvalidpasswor);MYCOPY(dummy7_969c)} // 0948:021c
    {dw tmp999=offset(seg001,unk_1a662);MYCOPY(dummy7_969e)} // 0948:021e
    {dw tmp999=offset(seg001,aquittodos_0);MYCOPY(dummy7_96a0)} // 0948:0220
    {dw tmp999=offset(seg001,unk_1a691);MYCOPY(dummy7_96a2)} // 0948:0222
    {dw tmp999=offset(seg001,unk_1a6c3);MYCOPY(dummy7_96a4)} // 0948:0224
    {dw tmp999=offset(seg001,unk_1a6ef);MYCOPY(dummy7_96a6)} // 0948:0226
    {dw tmp999=offset(seg001,unk_1a714);MYCOPY(dummy7_96a8)} // 0948:0228
    {dw tmp999=offset(seg001,unk_1a724);MYCOPY(dummy7_96aa)} // 0948:022a
    {dw tmp999=offset(seg001,unk_1a72d);MYCOPY(dummy7_96ac)} // 0948:022c
    {dw tmp999=offset(seg001,unk_1a761);MYCOPY(dummy7_96ae)} // 0948:022e
    {dw tmp999=offset(seg001,unk_1a7a6);MYCOPY(dummy7_96b0)} // 0948:0230
    {dw tmp999=offset(seg001,unk_1a7be);MYCOPY(dummy7_96b2)} // 0948:0232
    {dw tmp999=offset(seg001,unk_1a7d6);MYCOPY(dummy7_96b4)} // 0948:0234
    {dw tmp999=offset(seg001,unk_1a80a);MYCOPY(dummy7_96b6)} // 0948:0236
    {dw tmp999=offset(seg001,unk_1a824);MYCOPY(dummy7_96b8)} // 0948:0238
    {dw tmp999=offset(seg001,unk_1a86f);MYCOPY(dummy7_96ba)} // 0948:023a
    {dw tmp999=offset(seg001,unk_1a898);MYCOPY(dummy7_96bc)} // 0948:023c
    {dw tmp999=offset(seg001,unk_1a8bc);MYCOPY(dummy7_96be)} // 0948:023e
    {dw tmp999=offset(seg001,unk_1a8d9);MYCOPY(dummy7_96c0)} // 0948:0240
    {dw tmp999=offset(seg001,unk_1a91a);MYCOPY(dummy7_96c2)} // 0948:0242
    {dw tmp999=offset(seg001,unk_1a934);MYCOPY(dummy7_96c4)} // 0948:0244
    {dw tmp999=offset(seg001,unk_1a94e);MYCOPY(dummy7_96c6)} // 0948:0246
    {dw tmp999=offset(seg001,unk_1a987);MYCOPY(dummy7_96c8)} // 0948:0248
    {dw tmp999=offset(seg001,unk_1a9bc);MYCOPY(dummy7_96ca)} // 0948:024a
    {dw tmp999=offset(seg001,unk_1a9ed);MYCOPY(dummy7_96cc)} // 0948:024c
    {dw tmp999=offset(seg001,unk_1aa21);MYCOPY(dummy7_96ce)} // 0948:024e
    {dw tmp999=offset(seg001,unk_1aa30);MYCOPY(dummy7_96d0)} // 0948:0250
    {dw tmp999=offset(seg001,unk_1aa55);MYCOPY(dummy7_96d2)} // 0948:0252
    {dw tmp999=offset(seg001,unk_1aaa9);MYCOPY(dummy7_96d4)} // 0948:0254
    {dw tmp999=offset(seg001,unk_1aaff);MYCOPY(dummy7_96d6)} // 0948:0256
    {dw tmp999=offset(seg001,unk_1ab10);MYCOPY(dummy7_96d8)} // 0948:0258
    {dw tmp999=offset(seg001,unk_1ab23);MYCOPY(dummy7_96da)} // 0948:025a
    {dw tmp999=offset(seg001,unk_1ab42);MYCOPY(dummy7_96dc)} // 0948:025c
    {dw tmp999=offset(seg001,unk_1ab77);MYCOPY(dummy7_96de)} // 0948:025e
    {dw tmp999=offset(seg001,unk_1aba4);MYCOPY(dummy7_96e0)} // 0948:0260
    {dw tmp999=offset(seg001,unk_1abc1);MYCOPY(dummy7_96e2)} // 0948:0262
    {dw tmp999=offset(seg001,unk_1abeb);MYCOPY(dummy7_96e4)} // 0948:0264
    {dw tmp999=offset(seg001,unk_1ac1d);MYCOPY(dummy7_96e6)} // 0948:0266
    {dw tmp999=offset(seg001,unk_1ac57);MYCOPY(dummy7_96e8)} // 0948:0268
    {dw tmp999=offset(seg001,unk_1ac8b);MYCOPY(dummy7_96ea)} // 0948:026a
    {dw tmp999=offset(seg001,unk_1acbb);MYCOPY(dummy7_96ec)} // 0948:026c
    {dw tmp999=offset(seg001,unk_1ace2);MYCOPY(dummy7_96ee)} // 0948:026e
    {dw tmp999=offset(seg001,unk_1aced);MYCOPY(dummy7_96f0)} // 0948:0270
    {dw tmp999=offset(seg001,unk_1ad1e);MYCOPY(dummy7_96f2)} // 0948:0272
    {dw tmp999=offset(seg001,unk_1ad49);MYCOPY(dummy7_96f4)} // 0948:0274
    {dw tmp999=offset(seg001,unk_1ad62);MYCOPY(dummy7_96f6)} // 0948:0276
    {dw tmp999=offset(seg001,unk_1ada2);MYCOPY(dummy7_96f8)} // 0948:0278
    {dw tmp999=offset(seg001,unk_1adc5);MYCOPY(dummy7_96fa)} // 0948:027a
    {dw tmp999=offset(seg001,unk_1adfe);MYCOPY(dummy7_96fc)} // 0948:027c
    {dw tmp999=offset(seg001,unk_1ae1a);MYCOPY(dummy7_96fe)} // 0948:027e
    {dw tmp999=offset(seg001,unk_1ae77);MYCOPY(dummy7_9700)} // 0948:0280
    {dw tmp999=offset(seg001,unk_1aeb6);MYCOPY(dummy7_9702)} // 0948:0282
    {dw tmp999=offset(seg001,unk_1aecc);MYCOPY(dummy7_9704)} // 0948:0284
    {dw tmp999=offset(seg001,unk_1aefe);MYCOPY(dummy7_9706)} // 0948:0286
    {dw tmp999=offset(seg001,unk_1af0b);MYCOPY(dummy7_9708)} // 0948:0288
    {dw tmp999=offset(seg001,unk_1af25);MYCOPY(dummy7_970a)} // 0948:028a
    {dw tmp999=offset(seg001,unk_1af5a);MYCOPY(dummy7_970c)} // 0948:028c
    {dw tmp999=offset(seg001,unk_1af7c);MYCOPY(dummy7_970e)} // 0948:028e
    {dw tmp999=offset(seg001,unk_1af90);MYCOPY(dummy7_9710)} // 0948:0290
    {dw tmp999=offset(seg001,unk_1afc5);MYCOPY(dummy7_9712)} // 0948:0292
    {dw tmp999=offset(seg001,unk_1afe6);MYCOPY(dummy7_9714)} // 0948:0294
    {dw tmp999=offset(seg001,unk_1b01d);MYCOPY(dummy7_9716)} // 0948:0296
    {dw tmp999=offset(seg001,unk_1b035);MYCOPY(dummy7_9718)} // 0948:0298
    {dw tmp999=offset(seg001,unk_1b090);MYCOPY(dummy7_971a)} // 0948:029a
    {dw tmp999=offset(seg001,unk_1b099);MYCOPY(dummy7_971c)} // 0948:029c
    {dw tmp999=offset(seg001,unk_1b101);MYCOPY(dummy7_971e)} // 0948:029e
    {dw tmp999=offset(seg001,unk_1b10b);MYCOPY(dummy7_9720)} // 0948:02a0
    {dw tmp999=offset(seg001,unk_1b147);MYCOPY(dummy7_9722)} // 0948:02a2
    {dw tmp999=offset(seg001,unk_1b193);MYCOPY(dummy7_9724)} // 0948:02a4
    {dw tmp999=offset(seg001,unk_1b1c5);MYCOPY(dummy7_9726)} // 0948:02a6
    {dw tmp999=offset(seg001,unk_1b20c);MYCOPY(dummy7_9728)} // 0948:02a8
    {dw tmp999=offset(seg001,unk_1b233);MYCOPY(dummy7_972a)} // 0948:02aa
    {dw tmp999=offset(seg001,unk_1b25a);MYCOPY(dummy7_972c)} // 0948:02ac
    {dw tmp999=offset(seg001,unk_1b28b);MYCOPY(dummy7_972e)} // 0948:02ae
    {dw tmp999=offset(seg001,unk_1b2b1);MYCOPY(dummy7_9730)} // 0948:02b0
    {dw tmp999=offset(seg001,unk_1b2ec);MYCOPY(dummy7_9732)} // 0948:02b2
    {dw tmp999=offset(seg001,unk_1b31d);MYCOPY(dummy7_9734)} // 0948:02b4
    {dw tmp999=offset(seg001,unk_1b34f);MYCOPY(dummy7_9736)} // 0948:02b6
    {dw tmp999=offset(seg001,unk_1b3aa);MYCOPY(dummy7_9738)} // 0948:02b8
    {dw tmp999=offset(seg001,unk_1b3df);MYCOPY(dummy7_973a)} // 0948:02ba
    {dw tmp999=offset(seg001,unk_1b435);MYCOPY(dummy7_973c)} // 0948:02bc
    {dw tmp999=offset(seg001,unk_1b44c);MYCOPY(dummy7_973e)} // 0948:02be
    {dw tmp999=offset(seg001,unk_1b473);MYCOPY(dummy7_9740)} // 0948:02c0
    {dw tmp999=offset(seg001,unk_1b498);MYCOPY(dummy7_9742)} // 0948:02c2
    {dw tmp999=offset(seg001,unk_1b4da);MYCOPY(dummy7_9744)} // 0948:02c4
    {dw tmp999=offset(seg001,unk_1b4f0);MYCOPY(dummy7_9746)} // 0948:02c6
    {dw tmp999=offset(seg001,unk_1b504);MYCOPY(dummy7_9748)} // 0948:02c8
    {dw tmp999=offset(seg001,unk_1b50e);MYCOPY(dummy7_974a)} // 0948:02ca
    {dw tmp999=offset(seg001,unk_1b515);MYCOPY(dummy7_974c)} // 0948:02cc
    {dw tmp999=offset(seg001,unk_1b51e);MYCOPY(dummy7_974e)} // 0948:02ce
    {dw tmp999=offset(seg001,unk_1b550);MYCOPY(dummy7_9750)} // 0948:02d0
    {dw tmp999=offset(seg001,unk_1b574);MYCOPY(dummy7_9752)} // 0948:02d2
    {dw tmp999=offset(seg001,unk_1b5a1);MYCOPY(dummy7_9754)} // 0948:02d4
    {dw tmp999=offset(seg001,unk_1b5bf);MYCOPY(dummy7_9756)} // 0948:02d6
    {dw tmp999=offset(seg001,unk_1b5e5);MYCOPY(dummy7_9758)} // 0948:02d8
    {dw tmp999=offset(seg001,unk_1b618);MYCOPY(dummy7_975a)} // 0948:02da
    {dw tmp999=offset(seg001,unk_1b63a);MYCOPY(dummy7_975c)} // 0948:02dc
    {dw tmp999=offset(seg001,unk_1b658);MYCOPY(dummy7_975e)} // 0948:02de
    {dw tmp999=offset(seg001,unk_1b685);MYCOPY(dummy7_9760)} // 0948:02e0
    {dw tmp999=offset(seg001,unk_1b6c7);MYCOPY(dummy7_9762)} // 0948:02e2
    {dw tmp999=offset(seg001,unk_1b721);MYCOPY(dummy7_9764)} // 0948:02e4
    {dw tmp999=offset(seg001,unk_1b774);MYCOPY(dummy7_9766)} // 0948:02e6
    {dw tmp999=offset(seg001,unk_1b7bb);MYCOPY(dummy7_9768)} // 0948:02e8
    {dw tmp999=offset(seg001,unk_1b804);MYCOPY(dummy7_976a)} // 0948:02ea
    {dw tmp999=offset(seg001,unk_1b861);MYCOPY(dummy7_976c)} // 0948:02ec
    {dw tmp999=offset(seg001,unk_1b8d9);MYCOPY(dummy7_976e)} // 0948:02ee
    {dw tmp999=offset(seg001,unk_1b8ff);MYCOPY(dummy7_9770)} // 0948:02f0
    {dw tmp999=offset(seg001,unk_1b919);MYCOPY(dummy7_9772)} // 0948:02f2
    {dw tmp999=offset(seg001,unk_1b924);MYCOPY(dummy7_9774)} // 0948:02f4
    {dw tmp999=offset(seg001,unk_1b93c);MYCOPY(dummy7_9776)} // 0948:02f6
    {dw tmp999=offset(seg001,unk_1b97d);MYCOPY(dummy7_9778)} // 0948:02f8
    {dw tmp999=offset(seg001,unk_1b9a3);MYCOPY(dummy7_977a)} // 0948:02fa
    {dw tmp999=offset(seg001,unk_1b9d4);MYCOPY(dummy7_977c)} // 0948:02fc
    {dw tmp999=offset(seg001,unk_1b9e0);MYCOPY(dummy7_977e)} // 0948:02fe
    {dw tmp999=offset(seg001,unk_1b9fe);MYCOPY(dummy7_9780)} // 0948:0300
    {dw tmp999=offset(seg001,unk_1ba14);MYCOPY(dummy7_9782)} // 0948:0302
    {dw tmp999=offset(seg001,unk_1ba2d);MYCOPY(dummy7_9784)} // 0948:0304
    {dw tmp999=offset(seg001,unk_1ba5a);MYCOPY(dummy7_9786)} // 0948:0306
    {dw tmp999=offset(seg001,unk_1ba7c);MYCOPY(dummy7_9788)} // 0948:0308
    {dw tmp999=offset(seg001,unk_1baaa);MYCOPY(dummy7_978a)} // 0948:030a
    {db tmp999=15;MYCOPY(unk_17d6c)} // 0948:030c
    {db tmp999=3;MYCOPY(dummy7_978d)} // 0948:030d
    {char tmp999[14]="WHERE ARE WE?";MYCOPY(awherearewe)} // 0948:030e
    {db tmp999=9;MYCOPY(unk_17d7c)} // 0948:031c
    {db tmp999=3;MYCOPY(dummy7_979d)} // 0948:031d
    {char tmp999[8]="KANSAS?";MYCOPY(akansas)} // 0948:031e
    {db tmp999=10;MYCOPY(unk_17d86)} // 0948:0326
    {db tmp999=5;MYCOPY(dummy7_97a7)} // 0948:0327
    {char tmp999[11]="GIVE UP?\r\r";MYCOPY(agiveup)} // 0948:0328
    {db tmp999=14;MYCOPY(unk_17d93)} // 0948:0333
    {db tmp999=7;MYCOPY(dummy7_97b4)} // 0948:0334
    {char tmp999[46]={'Q','U','I','T',' ','T','O',' ','D','O','S','?','\r',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\r',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\r',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\r'};MYCOPY(aquittodos)} // 0948:0335
    {char tmp999[11]="          ";MYCOPY(dummy7_97e3)} // 0948:0335
    {char tmp999[3]="NO";MYCOPY(ano)} // 0948:036e
    {char tmp999[4]="YES";MYCOPY(ayes)} // 0948:0371
    {char tmp999[4]="   ";MYCOPY(asc_17dd5)} // 0948:0375
    {db tmp999=14;MYCOPY(unk_17dd9)} // 0948:0379
    {db tmp999=3;MYCOPY(dummy7_97fa)} // 0948:037a
    {char tmp999[13]="HELLO THERE.";MYCOPY(ahellothere)} // 0948:037b
    {db tmp999=19;MYCOPY(unk_17de8)} // 0948:0388
    {db tmp999=4;MYCOPY(dummy7_9809)} // 0948:0389
    {char tmp999[33]="THANK YOU SO MUCH\rFOR SAVING ME.";MYCOPY(athankyousomuch)} // 0948:038a
    {db tmp999=21;MYCOPY(byte_17e0b)} // 0948:03ab
    {db tmp999=6;MYCOPY(dummy7_982c)} // 0948:03ac
    {char tmp999[53]={'T','O',' ','E','S','C','A','P','E',' ','F','R','O','M',' ','T','H','I','S','\r','P','L','A','C','E',' ','Y','O','U',' ','M','U','S','T',' ','F','I','N','D','\r','T','H','E',' ','K','E','Y',' ','A','N','D',' ','D'};MYCOPY(atoescapefromth)} // 0948:03ad
    {char tmp999[18]="RAIN\rTHE VOLCANO.";MYCOPY(dummy7_9862)} // 0948:03ad
    {db tmp999=18;MYCOPY(unk_17e54)} // 0948:03f4
    {db tmp999=3;MYCOPY(dummy7_9875)} // 0948:03f5
    {char tmp999[17]="WHERE'S THE KEY?";MYCOPY(awheresthekey)} // 0948:03f6
    {db tmp999=18;MYCOPY(unk_17e67)} // 0948:0407
    {db tmp999=6;MYCOPY(dummy7_9888)} // 0948:0408
    {char tmp999[47]={'Y','O','U',' ','M','U','S','T',' ','G','O',' ','B','A','C','K','\r','D','O','W','N',' ','A','N','D',' ','B','A','S','H','\r','Y','O','U','R',' ','W','A','Y',' ','I','N','T','O','\r','T','H'};MYCOPY(ayoumustgobackd)} // 0948:0409
    {char tmp999[12]="E MOUNTAIN.";MYCOPY(dummy7_98b8)} // 0948:0409
    {db tmp999=23;MYCOPY(unk_17ea4)} // 0948:0444
    {db tmp999=4;MYCOPY(dummy7_98c5)} // 0948:0445
    {char tmp999[37]="COULD YOU BE A LITTLE\rMORE SPECIFIC?";MYCOPY(acouldyoubealit)} // 0948:0446
    {db tmp999=23;MYCOPY(unk_17ecb)} // 0948:046b
    {db tmp999=6;MYCOPY(dummy7_98ec)} // 0948:046c
    {char tmp999[53]={'I',' ','W','I','L','L',' ','U','S','E',' ','M','Y',' ','P','S','Y','C','H','I','C','\r','P','O','W','E','R','S',' ','T','O',' ','D','E','S','T','R','O','Y',' ','T','H','E','\r','F','I','R','E','B','A','L','L','S'};MYCOPY(aiwillusemypsyc)} // 0948:046d
    {char tmp999[22]=" INSIDE THE\rMOUNTAIN.";MYCOPY(dummy7_9922)} // 0948:046d
    {db tmp999=15;MYCOPY(unk_17f18)} // 0948:04b8
    {db tmp999=4;MYCOPY(dummy7_9939)} // 0948:04b9
    {char tmp999[25]="THANK YOU FOR\rYOUR HELP.";MYCOPY(athankyouforyou)} // 0948:04ba
    {db tmp999=15;MYCOPY(unk_17f33)} // 0948:04d3
    {db tmp999=4;MYCOPY(dummy7_9954)} // 0948:04d4
    {char tmp999[26]="THAT'S WHAT\rI'M HERE FOR.";MYCOPY(athatswhatimher)} // 0948:04d5
    {db tmp999=19;MYCOPY(unk_17f4f)} // 0948:04ef
    {db tmp999=5;MYCOPY(dummy7_9970)} // 0948:04f0
    {char tmp999[44]="WHAT DO YOU THINK\rYOU ARE DOING IN\rMY TREE!";MYCOPY(awhatdoyouthink)} // 0948:04f1
    {db tmp999=19;MYCOPY(unk_17f7d)} // 0948:051d
    {db tmp999=4;MYCOPY(dummy7_999e)} // 0948:051e
    {char tmp999[28]="IDENTIFY YOURSELF\rINTRUDER.";MYCOPY(aidentifyyourse)} // 0948:051f
    {db tmp999=15;MYCOPY(unk_17f9b)} // 0948:053b
    {db tmp999=5;MYCOPY(dummy7_99bc)} // 0948:053c
    {char tmp999[35]="BALEOG THE\rFIERCE AT\rYOUR SERVICE.";MYCOPY(abaleogthefierc)} // 0948:053d
    {db tmp999=18;MYCOPY(unk_17fc0)} // 0948:0560
    {db tmp999=4;MYCOPY(dummy7_99e1)} // 0948:0561
    {char tmp999[32]="ERIK THE SWIFT\rAT YOUR SERVICE.";MYCOPY(aeriktheswiftat)} // 0948:0562
    {db tmp999=18;MYCOPY(unk_17fe2)} // 0948:0582
    {db tmp999=4;MYCOPY(dummy7_9a03)} // 0948:0583
    {char tmp999[32]="OLAF THE STOUT\rAT YOUR SERVICE.";MYCOPY(aolafthestoutat)} // 0948:0584
    {db tmp999=18;MYCOPY(unk_18004)} // 0948:05a4
    {db tmp999=6;MYCOPY(dummy7_9a25)} // 0948:05a5
    {char tmp999[49]={'I',' ','S','E','E','.','.','.','A','N','D',' ','W','H','Y','\r','D','O',' ','Y','O','U',' ','W','E','A','R',' ','S','U','C','H','\r','A',' ','F','U','N','N','Y',' ','L','O','O','K','I','N','G','\r'};MYCOPY(aiseeandwhydoyo)} // 0948:05a6
    {char tmp999[9]="COSTUME?";MYCOPY(dummy7_9a57)} // 0948:05a6
    {db tmp999=16;MYCOPY(unk_18040)} // 0948:05e0
    {db tmp999=3;MYCOPY(dummy7_9a61)} // 0948:05e1
    {char tmp999[15]="I AM A VIKING!";MYCOPY(aiamaviking)} // 0948:05e2
    {db tmp999=20;MYCOPY(unk_18051)} // 0948:05f1
    {db tmp999=3;MYCOPY(dummy7_9a72)} // 0948:05f2
    {char tmp999[19]="OF COURSE YOU ARE.";MYCOPY(aofcourseyouare)} // 0948:05f3
    {db tmp999=20;MYCOPY(unk_18066)} // 0948:0606
    {db tmp999=6;MYCOPY(dummy7_9a87)} // 0948:0607
    {char tmp999[52]={'W','E','L','L',',',' ','Y','O','U',' ','A','R','E',' ','O','N','\r','P','R','I','V','A','T','E',' ','P','R','O','P','E','R','T','Y',',','\r','V','I','K','I','N','G','.',' ','Y','O','U',' ','M','U','S','T','\r'};MYCOPY(awellyouareonpr)} // 0948:0608
    {char tmp999[15]="LEAVE AT ONCE!";MYCOPY(dummy7_9abc)} // 0948:0608
    {db tmp999=21;MYCOPY(unk_180ab)} // 0948:064b
    {db tmp999=4;MYCOPY(dummy7_9acc)} // 0948:064c
    {char tmp999[37]="TELL ME THE WAY,\rAND I WILL BE GONE.";MYCOPY(atellmethewayan)} // 0948:064d
    {db tmp999=19;MYCOPY(unk_180d2)} // 0948:0672
    {db tmp999=7;MYCOPY(dummy7_9af3)} // 0948:0673
    {char tmp999[49]={'Y','O','U',' ','W','I','L','L',' ','F','I','N','D',' ','A','\r','K','E','Y',' ','T','O',' ','T','H','E',' ','B','R','I','D','G','E','\r','I','N',' ','T','H','E',' ','T','R','E','E',' ','O','N','\r'};MYCOPY(ayouwillfindake)} // 0948:0674
    {char tmp999[33]="THE OTHER SIDE\rOF THE WATERFALL.";MYCOPY(dummy7_9b25)} // 0948:0674
    {db tmp999=9;MYCOPY(unk_18126)} // 0948:06c6
    {db tmp999=3;MYCOPY(dummy7_9b47)} // 0948:06c7
    {char tmp999[8]="NOW GO!";MYCOPY(anowgo)} // 0948:06c8
    {db tmp999=19;MYCOPY(unk_18130)} // 0948:06d0
    {db tmp999=5;MYCOPY(dummy7_9b51)} // 0948:06d1
    {char tmp999[47]="I HAVE WARNED YOU\rTO LEAVE AND YET\rYOU RETURN.";MYCOPY(aihavewarnedyou)} // 0948:06d2
    {db tmp999=18;MYCOPY(unk_18161)} // 0948:0701
    {db tmp999=5;MYCOPY(dummy7_9b82)} // 0948:0702
    {char tmp999[39]="YOU HAVE ALL THE\rINFORMATION YOU\rNEED.";MYCOPY(ayouhaveallthei)} // 0948:0703
    {db tmp999=19;MYCOPY(unk_1818a)} // 0948:072a
    {db tmp999=5;MYCOPY(dummy7_9bab)} // 0948:072b
    {char tmp999[47]={'P','L','E','A','S','E',' ','T','E','L','L',' ','M','E','\r','A','G','A','I','N','.',' ','I',' ','W','O','N',39,'T','\r','F','O','R','G','E','T',' ','T','H','I','S',' ','T','I','M','E','.'};MYCOPY(apleasetellmeag)} // 0948:072c
    {db tmp999=17;MYCOPY(unk_181bc)} // 0948:075c
    {db tmp999=5;MYCOPY(dummy7_9bdd)} // 0948:075d
    {char tmp999[43]="ONCE AGAIN, THE\rKEY TO LOWER\rTHE BRIDGE...";MYCOPY(aonceagaintheke)} // 0948:075e
    {db tmp999=16;MYCOPY(unk_181e9)} // 0948:0789
    {db tmp999=6;MYCOPY(dummy7_9c0a)} // 0948:078a
    {char tmp999[47]={'.','.','.','I','S',' ','I','N',' ','T','H','E','\r','T','R','E','E',' ','O','N',' ','T','H','E','\r','O','T','H','E','R',' ','S','I','D','E',' ','O','F','\r','T','H','E',' ','W','A','T','E'};MYCOPY(aisinthetreeont)} // 0948:078b
    {char tmp999[7]="RFALL.";MYCOPY(dummy7_9c3a)} // 0948:078b
    {db tmp999=15;MYCOPY(unk_18221)} // 0948:07c1
    {db tmp999=4;MYCOPY(dummy7_9c42)} // 0948:07c2
    {char tmp999[26]="BZZDT...HELP!\rHELP..BZZT!";MYCOPY(abzzdthelphelpb)} // 0948:07c3
    {db tmp999=22;MYCOPY(unk_1823d)} // 0948:07dd
    {db tmp999=4;MYCOPY(dummy7_9c5e)} // 0948:07de
    {char tmp999[38]="YOU LOOK AWFULLY\rHAPPY! WHAT ARE YOU?";MYCOPY(ayoulookawfully)} // 0948:07df
    {db tmp999=18;MYCOPY(unk_18265)} // 0948:0805
    {db tmp999=4;MYCOPY(dummy7_9c86)} // 0948:0806
    {char tmp999[34]="I AM AFTIEK. ARE\rYOU THE JANITOR?";MYCOPY(aiamaftiekareyo)} // 0948:0807
    {db tmp999=19;MYCOPY(unk_18289)} // 0948:0829
    {db tmp999=5;MYCOPY(dummy7_9caa)} // 0948:082a
    {char tmp999[47]={'W','H','A','T',39,'S',' ','A',' ','J','A','N','I','T','O','R','?','\r','A','N','D',' ','H','O','W',' ','D','O',' ','I',' ','G','E','T','\r','O','U','T',' ','O','F',' ','H','E','R','E','?'};MYCOPY(awhatsajanitora)} // 0948:082b
    {db tmp999=22;MYCOPY(unk_182bb)} // 0948:085b
    {db tmp999=4;MYCOPY(dummy7_9cdc)} // 0948:085c
    {char tmp999[38]="YOU MUST DESTROY THE\rSHIP'S COMPUTER.";MYCOPY(ayoumustdestroy)} // 0948:085d
    {db tmp999=24;MYCOPY(unk_182e3)} // 0948:0883
    {db tmp999=3;MYCOPY(dummy7_9d04)} // 0948:0884
    {char tmp999[22]="THIS IS NOT A SHIP...";MYCOPY(athisisnotaship)} // 0948:0885
    {db tmp999=16;MYCOPY(unk_182fb)} // 0948:089b
    {db tmp999=4;MYCOPY(dummy7_9d1c)} // 0948:089c
    {char tmp999[27]="...AND WHAT IS\rA COMPUTER?";MYCOPY(aandwhatisacomp)} // 0948:089d
    {db tmp999=22;MYCOPY(unk_18318)} // 0948:08b8
    {db tmp999=5;MYCOPY(dummy7_9d39)} // 0948:08b9
    {char tmp999[47]="NEVER MIND, YOU MUST\rFIND BOMBS TO BLOW\rIT UP.";MYCOPY(anevermindyoumu)} // 0948:08ba
    {db tmp999=19;MYCOPY(unk_18349)} // 0948:08e9
    {db tmp999=5;MYCOPY(dummy7_9d6a)} // 0948:08ea
    {char tmp999[52]="HEY, AFTIEK. WHAT\rWERE YOU SAYING\rABOUT A COMPUTER?";MYCOPY(aheyaftiekwhatw)} // 0948:08eb
    {db tmp999=21;MYCOPY(unk_1837f)} // 0948:091f
    {db tmp999=4;MYCOPY(dummy7_9da0)} // 0948:0920
    {char tmp999[35]="YOU MUST FIND BOMBS\rTO BLOW IT UP.";MYCOPY(ayoumustfindbom)} // 0948:0921
    {db tmp999=21;MYCOPY(unk_183a4)} // 0948:0944
    {db tmp999[32]={4,66,90,90,68,84,46,46,46,66,79,77,66,33,13,85,83,69,46,46,79,78,46,46,67,79,77,80,85,84,69,82};MYCOPY(dummy7_9dc5)} // 0948:0945
    {db tmp999=33;MYCOPY(dummy7_9de5)} // 0948:0965
    {db tmp999=21;MYCOPY(unk_183c7)} // 0948:0967
    {db tmp999[32]={7,67,82,79,85,84,79,78,73,65,78,32,83,69,67,85,82,73,84,89,13,87,73,76,76,32,66,69,32,76,79,79};MYCOPY(dummy7_9de8)} // 0948:0968
    {db tmp999=75;MYCOPY(dummy7_9e08)} // 0948:0988
    {db tmp999=73;MYCOPY(dummy7_9e09)} // 0948:0989
    {db tmp999=78;MYCOPY(dummy7_9e0a)} // 0948:098a
    {db tmp999=71;MYCOPY(dummy7_9e0b)} // 0948:098b
    {db tmp999=13;MYCOPY(dummy7_9e0c)} // 0948:098c
    {db tmp999=70;MYCOPY(dummy7_9e0d)} // 0948:098d
    {db tmp999=79;MYCOPY(dummy7_9e0e)} // 0948:098e
    {db tmp999=82;MYCOPY(dummy7_9e0f)} // 0948:098f
    {db tmp999=32;MYCOPY(dummy7_9e10)} // 0948:0990
    {db tmp999=89;MYCOPY(dummy7_9e11)} // 0948:0991
    {db tmp999=79;MYCOPY(dummy7_9e12)} // 0948:0992
    {db tmp999=85;MYCOPY(dummy7_9e13)} // 0948:0993
    {db tmp999=46;MYCOPY(dummy7_9e14)} // 0948:0994
    {db tmp999=32;MYCOPY(dummy7_9e15)} // 0948:0995
    {db tmp999=89;MYCOPY(dummy7_9e16)} // 0948:0996
    {db tmp999=79;MYCOPY(dummy7_9e17)} // 0948:0997
    {db tmp999=85;MYCOPY(dummy7_9e18)} // 0948:0998
    {db tmp999=32;MYCOPY(dummy7_9e19)} // 0948:0999
    {db tmp999=87;MYCOPY(dummy7_9e1a)} // 0948:099a
    {db tmp999=73;MYCOPY(dummy7_9e1b)} // 0948:099b
    {db tmp999=76;MYCOPY(dummy7_9e1c)} // 0948:099c
    {db tmp999=76;MYCOPY(dummy7_9e1d)} // 0948:099d
    {db tmp999=13;MYCOPY(dummy7_9e1e)} // 0948:099e
    {db tmp999=79;MYCOPY(dummy7_9e1f)} // 0948:099f
    {db tmp999=78;MYCOPY(dummy7_9e20)} // 0948:09a0
    {db tmp999=76;MYCOPY(dummy7_9e21)} // 0948:09a1
    {db tmp999=89;MYCOPY(dummy7_9e22)} // 0948:09a2
    {db tmp999=32;MYCOPY(dummy7_9e23)} // 0948:09a3
    {dw tmp999=21843;MYCOPY(dummy7_9e24)} // 0948:09a4
    {db tmp999=82;MYCOPY(dummy7_9e26)} // 0948:09a6
    {char tmp999[28]="VIVE IF YOU\rWORK AS A TEAM.";MYCOPY(aviveifyouworka)} // 0948:09a7
    {db tmp999=22;MYCOPY(unk_18423)} // 0948:09c3
    {db tmp999[32]={6,89,79,85,32,77,85,83,84,32,66,69,32,79,78,69,32,79,70,13,84,72,69,32,65,76,73,69,78,83,32,84};MYCOPY(dummy7_9e44)} // 0948:09c4
    {db tmp999[32]={72,65,84,32,84,72,69,13,67,82,79,85,84,79,78,73,65,78,83,32,72,65,86,69,32,65,76,76,13,66,69,69};MYCOPY(dummy7_9e64)} // 0948:09e4
    {db tmp999=78;MYCOPY(dummy7_9e84)} // 0948:0a04
    {db tmp999=32;MYCOPY(dummy7_9e85)} // 0948:0a05
    {db tmp999=84;MYCOPY(dummy7_9e86)} // 0948:0a06
    {db tmp999=65;MYCOPY(dummy7_9e87)} // 0948:0a07
    {db tmp999=76;MYCOPY(dummy7_9e88)} // 0948:0a08
    {db tmp999=75;MYCOPY(dummy7_9e89)} // 0948:0a09
    {db tmp999=73;MYCOPY(dummy7_9e8a)} // 0948:0a0a
    {db tmp999=78;MYCOPY(dummy7_9e8b)} // 0948:0a0b
    {db tmp999=71;MYCOPY(dummy7_9e8c)} // 0948:0a0c
    {db tmp999=32;MYCOPY(dummy7_9e8d)} // 0948:0a0d
    {db tmp999=65;MYCOPY(dummy7_9e8e)} // 0948:0a0e
    {db tmp999=66;MYCOPY(dummy7_9e8f)} // 0948:0a0f
    {db tmp999=79;MYCOPY(dummy7_9e90)} // 0948:0a10
    {db tmp999=85;MYCOPY(dummy7_9e91)} // 0948:0a11
    {db tmp999=84;MYCOPY(dummy7_9e92)} // 0948:0a12
    {db tmp999=46;MYCOPY(dummy7_9e93)} // 0948:0a13
    {db tmp999=18;MYCOPY(unk_18475)} // 0948:0a15
    {db tmp999[32]={6,87,72,79,32,65,82,69,32,84,72,69,83,69,13,67,82,79,85,84,79,78,73,65,78,83,44,32,65,78,68,13};MYCOPY(dummy7_9e96)} // 0948:0a16
    {db tmp999=87;MYCOPY(dummy7_9eb6)} // 0948:0a36
    {db tmp999=72;MYCOPY(dummy7_9eb7)} // 0948:0a37
    {db tmp999=89;MYCOPY(dummy7_9eb8)} // 0948:0a38
    {db tmp999=32;MYCOPY(dummy7_9eb9)} // 0948:0a39
    {db tmp999=68;MYCOPY(dummy7_9eba)} // 0948:0a3a
    {db tmp999=73;MYCOPY(dummy7_9ebb)} // 0948:0a3b
    {db tmp999=68;MYCOPY(dummy7_9ebc)} // 0948:0a3c
    {db tmp999=32;MYCOPY(dummy7_9ebd)} // 0948:0a3d
    {db tmp999=84;MYCOPY(dummy7_9ebe)} // 0948:0a3e
    {db tmp999=72;MYCOPY(dummy7_9ebf)} // 0948:0a3f
    {db tmp999=69;MYCOPY(dummy7_9ec0)} // 0948:0a40
    {db tmp999=89;MYCOPY(dummy7_9ec1)} // 0948:0a41
    {db tmp999=13;MYCOPY(dummy7_9ec2)} // 0948:0a42
    {db tmp999=66;MYCOPY(dummy7_9ec3)} // 0948:0a43
    {db tmp999=82;MYCOPY(dummy7_9ec4)} // 0948:0a44
    {db tmp999=73;MYCOPY(dummy7_9ec5)} // 0948:0a45
    {db tmp999=78;MYCOPY(dummy7_9ec6)} // 0948:0a46
    {db tmp999=71;MYCOPY(dummy7_9ec7)} // 0948:0a47
    {db tmp999=32;MYCOPY(dummy7_9ec8)} // 0948:0a48
    {db tmp999=85;MYCOPY(dummy7_9ec9)} // 0948:0a49
    {db tmp999=83;MYCOPY(dummy7_9eca)} // 0948:0a4a
    {db tmp999=32;MYCOPY(dummy7_9ecb)} // 0948:0a4b
    {db tmp999=72;MYCOPY(dummy7_9ecc)} // 0948:0a4c
    {db tmp999=69;MYCOPY(dummy7_9ecd)} // 0948:0a4d
    {db tmp999=82;MYCOPY(dummy7_9ece)} // 0948:0a4e
    {db tmp999=69;MYCOPY(dummy7_9ecf)} // 0948:0a4f
    {db tmp999=63;MYCOPY(dummy7_9ed0)} // 0948:0a50
    {db tmp999=19;MYCOPY(unk_184b2)} // 0948:0a52
    {db tmp999[32]={5,84,79,77,65,84,79,82,44,32,84,72,69,32,69,86,73,76,13,67,82,79,85,84,79,78,73,65,78,32,82,85};MYCOPY(dummy7_9ed3)} // 0948:0a53
    {db tmp999=76;MYCOPY(dummy7_9ef3)} // 0948:0a73
    {db tmp999=69;MYCOPY(dummy7_9ef4)} // 0948:0a74
    {db tmp999=82;MYCOPY(dummy7_9ef5)} // 0948:0a75
    {db tmp999=44;MYCOPY(dummy7_9ef6)} // 0948:0a76
    {db tmp999=13;MYCOPY(dummy7_9ef7)} // 0948:0a77
    {db tmp999=73;MYCOPY(dummy7_9ef8)} // 0948:0a78
    {db tmp999=83;MYCOPY(dummy7_9ef9)} // 0948:0a79
    {db tmp999=32;MYCOPY(dummy7_9efa)} // 0948:0a7a
    {db tmp999=67;MYCOPY(dummy7_9efb)} // 0948:0a7b
    {db tmp999=79;MYCOPY(dummy7_9efc)} // 0948:0a7c
    {db tmp999=76;MYCOPY(dummy7_9efd)} // 0948:0a7d
    {db tmp999=76;MYCOPY(dummy7_9efe)} // 0948:0a7e
    {db tmp999=69;MYCOPY(dummy7_9eff)} // 0948:0a7f
    {db tmp999=67;MYCOPY(dummy7_9f00)} // 0948:0a80
    {db tmp999=84;MYCOPY(dummy7_9f01)} // 0948:0a81
    {db tmp999=73;MYCOPY(dummy7_9f02)} // 0948:0a82
    {db tmp999=78;MYCOPY(dummy7_9f03)} // 0948:0a83
    {db tmp999=71;MYCOPY(dummy7_9f04)} // 0948:0a84
    {db tmp999=46;MYCOPY(dummy7_9f05)} // 0948:0a85
    {db tmp999=46;MYCOPY(dummy7_9f06)} // 0948:0a86
    {db tmp999=46;MYCOPY(dummy7_9f07)} // 0948:0a87
    {db tmp999=22;MYCOPY(unk_184e9)} // 0948:0a89
    {db tmp999[32]={5,46,46,46,85,78,73,81,85,69,32,76,73,70,69,32,70,79,82,77,83,13,84,79,32,68,73,83,80,76,65,89};MYCOPY(dummy7_9f0a)} // 0948:0a8a
    {db tmp999=32;MYCOPY(dummy7_9f2a)} // 0948:0aaa
    {db tmp999=73;MYCOPY(dummy7_9f2b)} // 0948:0aab
    {db tmp999=78;MYCOPY(dummy7_9f2c)} // 0948:0aac
    {db tmp999=32;MYCOPY(dummy7_9f2d)} // 0948:0aad
    {db tmp999=72;MYCOPY(dummy7_9f2e)} // 0948:0aae
    {db tmp999=73;MYCOPY(dummy7_9f2f)} // 0948:0aaf
    {db tmp999=83;MYCOPY(dummy7_9f30)} // 0948:0ab0
    {db tmp999=13;MYCOPY(dummy7_9f31)} // 0948:0ab1
    {db tmp999=71;MYCOPY(dummy7_9f32)} // 0948:0ab2
    {db tmp999=65;MYCOPY(dummy7_9f33)} // 0948:0ab3
    {db tmp999=76;MYCOPY(dummy7_9f34)} // 0948:0ab4
    {db tmp999=76;MYCOPY(dummy7_9f35)} // 0948:0ab5
    {db tmp999=69;MYCOPY(dummy7_9f36)} // 0948:0ab6
    {db tmp999=82;MYCOPY(dummy7_9f37)} // 0948:0ab7
    {db tmp999=89;MYCOPY(dummy7_9f38)} // 0948:0ab8
    {db tmp999=46;MYCOPY(dummy7_9f39)} // 0948:0ab9
    {db tmp999=15;MYCOPY(unk_1851b)} // 0948:0abb
    {db tmp999=4;MYCOPY(dummy7_9f3c)} // 0948:0abc
    {db tmp999=83;MYCOPY(dummy7_9f3d)} // 0948:0abd
    {db tmp999=79;MYCOPY(dummy7_9f3e)} // 0948:0abe
    {db tmp999=85;MYCOPY(dummy7_9f3f)} // 0948:0abf
    {db tmp999=78;MYCOPY(dummy7_9f40)} // 0948:0ac0
    {db tmp999=68;MYCOPY(dummy7_9f41)} // 0948:0ac1
    {db tmp999=83;MYCOPY(dummy7_9f42)} // 0948:0ac2
    {db tmp999=32;MYCOPY(dummy7_9f43)} // 0948:0ac3
    {db tmp999=76;MYCOPY(dummy7_9f44)} // 0948:0ac4
    {db tmp999=73;MYCOPY(dummy7_9f45)} // 0948:0ac5
    {db tmp999=75;MYCOPY(dummy7_9f46)} // 0948:0ac6
    {db tmp999=69;MYCOPY(dummy7_9f47)} // 0948:0ac7
    {db tmp999=32;MYCOPY(dummy7_9f48)} // 0948:0ac8
    {db tmp999=65;MYCOPY(dummy7_9f49)} // 0948:0ac9
    {db tmp999=13;MYCOPY(dummy7_9f4a)} // 0948:0aca
    {db tmp999=71;MYCOPY(dummy7_9f4b)} // 0948:0acb
    {db tmp999=82;MYCOPY(dummy7_9f4c)} // 0948:0acc
    {db tmp999=69;MYCOPY(dummy7_9f4d)} // 0948:0acd
    {db tmp999=65;MYCOPY(dummy7_9f4e)} // 0948:0ace
    {db tmp999=84;MYCOPY(dummy7_9f4f)} // 0948:0acf
    {db tmp999=32;MYCOPY(dummy7_9f50)} // 0948:0ad0
    {db tmp999=71;MYCOPY(dummy7_9f51)} // 0948:0ad1
    {db tmp999=85;MYCOPY(dummy7_9f52)} // 0948:0ad2
    {db tmp999=89;MYCOPY(dummy7_9f53)} // 0948:0ad3
    {db tmp999=46;MYCOPY(dummy7_9f54)} // 0948:0ad4
    {db tmp999=18;MYCOPY(unk_18536)} // 0948:0ad6
    {db tmp999[32]={5,68,79,32,78,79,84,32,69,88,80,69,67,84,32,65,78,13,73,78,86,73,84,65,84,73,79,78,32,84,79,13};MYCOPY(dummy7_9f57)} // 0948:0ad7
    {db tmp999=68;MYCOPY(dummy7_9f77)} // 0948:0af7
    {db tmp999=73;MYCOPY(dummy7_9f78)} // 0948:0af8
    {db tmp999=78;MYCOPY(dummy7_9f79)} // 0948:0af9
    {db tmp999=78;MYCOPY(dummy7_9f7a)} // 0948:0afa
    {db tmp999=69;MYCOPY(dummy7_9f7b)} // 0948:0afb
    {db tmp999=82;MYCOPY(dummy7_9f7c)} // 0948:0afc
    {db tmp999=46;MYCOPY(dummy7_9f7d)} // 0948:0afd
    {db tmp999=22;MYCOPY(unk_1855f)} // 0948:0aff
    {db tmp999[32]={4,89,79,85,32,67,76,69,65,82,76,89,32,68,79,32,78,79,84,13,66,69,76,79,78,71,32,72,69,82,69,44};MYCOPY(dummy7_9f80)} // 0948:0b00
    {db tmp999=32;MYCOPY(dummy7_9fa0)} // 0948:0b20
    {db tmp999=70;MYCOPY(dummy7_9fa1)} // 0948:0b21
    {db tmp999=82;MYCOPY(dummy7_9fa2)} // 0948:0b22
    {db tmp999=73;MYCOPY(dummy7_9fa3)} // 0948:0b23
    {db tmp999=69;MYCOPY(dummy7_9fa4)} // 0948:0b24
    {db tmp999=78;MYCOPY(dummy7_9fa5)} // 0948:0b25
    {db tmp999=68;MYCOPY(dummy7_9fa6)} // 0948:0b26
    {db tmp999=46;MYCOPY(dummy7_9fa7)} // 0948:0b27
    {db tmp999=16;MYCOPY(unk_18589)} // 0948:0b29
    {db tmp999=4;MYCOPY(dummy7_9faa)} // 0948:0b2a
    {db tmp999=84;MYCOPY(dummy7_9fab)} // 0948:0b2b
    {db tmp999=72;MYCOPY(dummy7_9fac)} // 0948:0b2c
    {db tmp999=65;MYCOPY(dummy7_9fad)} // 0948:0b2d
    {db tmp999=78;MYCOPY(dummy7_9fae)} // 0948:0b2e
    {db tmp999=75;MYCOPY(dummy7_9faf)} // 0948:0b2f
    {db tmp999=83;MYCOPY(dummy7_9fb0)} // 0948:0b30
    {db tmp999=32;MYCOPY(dummy7_9fb1)} // 0948:0b31
    {db tmp999=70;MYCOPY(dummy7_9fb2)} // 0948:0b32
    {db tmp999=79;MYCOPY(dummy7_9fb3)} // 0948:0b33
    {db tmp999=82;MYCOPY(dummy7_9fb4)} // 0948:0b34
    {db tmp999=32;MYCOPY(dummy7_9fb5)} // 0948:0b35
    {db tmp999=84;MYCOPY(dummy7_9fb6)} // 0948:0b36
    {db tmp999=72;MYCOPY(dummy7_9fb7)} // 0948:0b37
    {db tmp999=69;MYCOPY(dummy7_9fb8)} // 0948:0b38
    {db tmp999=13;MYCOPY(dummy7_9fb9)} // 0948:0b39
    {db tmp999=78;MYCOPY(dummy7_9fba)} // 0948:0b3a
    {db tmp999=69;MYCOPY(dummy7_9fbb)} // 0948:0b3b
    {db tmp999=87;MYCOPY(dummy7_9fbc)} // 0948:0b3c
    {db tmp999=83;MYCOPY(dummy7_9fbd)} // 0948:0b3d
    {db tmp999=32;MYCOPY(dummy7_9fbe)} // 0948:0b3e
    {db tmp999=70;MYCOPY(dummy7_9fbf)} // 0948:0b3f
    {db tmp999=76;MYCOPY(dummy7_9fc0)} // 0948:0b40
    {db tmp999=65;MYCOPY(dummy7_9fc1)} // 0948:0b41
    {db tmp999=83;MYCOPY(dummy7_9fc2)} // 0948:0b42
    {db tmp999=72;MYCOPY(dummy7_9fc3)} // 0948:0b43
    {db tmp999=46;MYCOPY(dummy7_9fc4)} // 0948:0b44
    {db tmp999=20;MYCOPY(unk_185a6)} // 0948:0b46
    {db tmp999[32]={5,73,32,83,69,69,32,84,72,65,84,32,84,79,77,65,84,79,82,13,73,83,32,85,80,32,84,79,32,72,73,83};MYCOPY(dummy7_9fc7)} // 0948:0b47
    {db tmp999=32;MYCOPY(dummy7_9fe7)} // 0948:0b67
    {db tmp999=79;MYCOPY(dummy7_9fe8)} // 0948:0b68
    {db tmp999=76;MYCOPY(dummy7_9fe9)} // 0948:0b69
    {db tmp999=68;MYCOPY(dummy7_9fea)} // 0948:0b6a
    {db tmp999=13;MYCOPY(dummy7_9feb)} // 0948:0b6b
    {db tmp999=71;MYCOPY(dummy7_9fec)} // 0948:0b6c
    {db tmp999=65;MYCOPY(dummy7_9fed)} // 0948:0b6d
    {db tmp999=77;MYCOPY(dummy7_9fee)} // 0948:0b6e
    {db tmp999=69;MYCOPY(dummy7_9fef)} // 0948:0b6f
    {db tmp999=83;MYCOPY(dummy7_9ff0)} // 0948:0b70
    {db tmp999=46;MYCOPY(dummy7_9ff1)} // 0948:0b71
    {db tmp999=13;MYCOPY(unk_185d3)} // 0948:0b73
    {db tmp999=4;MYCOPY(dummy7_9ff4)} // 0948:0b74
    {db tmp999=89;MYCOPY(dummy7_9ff5)} // 0948:0b75
    {db tmp999=79;MYCOPY(dummy7_9ff6)} // 0948:0b76
    {db tmp999=85;MYCOPY(dummy7_9ff7)} // 0948:0b77
    {db tmp999=32;MYCOPY(dummy7_9ff8)} // 0948:0b78
    {db tmp999=75;MYCOPY(dummy7_9ff9)} // 0948:0b79
    {db tmp999=78;MYCOPY(dummy7_9ffa)} // 0948:0b7a
    {db tmp999=79;MYCOPY(dummy7_9ffb)} // 0948:0b7b
    {dw tmp999=8279;MYCOPY(dummy7_9ffc)} // 0948:0b7c
    {dw tmp999=17999;MYCOPY(dummy7_9ffe)} // 0948:0b7e
    {char tmp999[10]="\rTOMATOR?";MYCOPY(atomator)} // 0948:0b80
    {db tmp999=19;MYCOPY(unk_185ea)} // 0948:0b8a
    {db tmp999=3;MYCOPY(dummy7_a00b)} // 0948:0b8b
    {db tmp999=82;MYCOPY(dummy7_a00c)} // 0948:0b8c
    {db tmp999=69;MYCOPY(dummy7_a00d)} // 0948:0b8d
    {db tmp999=71;MYCOPY(dummy7_a00e)} // 0948:0b8e
    {db tmp999=82;MYCOPY(dummy7_a00f)} // 0948:0b8f
    {db tmp999=69;MYCOPY(dummy7_a010)} // 0948:0b90
    {db tmp999=84;MYCOPY(dummy7_a011)} // 0948:0b91
    {db tmp999=70;MYCOPY(dummy7_a012)} // 0948:0b92
    {db tmp999=85;MYCOPY(dummy7_a013)} // 0948:0b93
    {db tmp999=76;MYCOPY(dummy7_a014)} // 0948:0b94
    {db tmp999=76;MYCOPY(dummy7_a015)} // 0948:0b95
    {db tmp999=89;MYCOPY(dummy7_a016)} // 0948:0b96
    {db tmp999=44;MYCOPY(dummy7_a017)} // 0948:0b97
    {db tmp999=32;MYCOPY(dummy7_a018)} // 0948:0b98
    {db tmp999=89;MYCOPY(dummy7_a019)} // 0948:0b99
    {db tmp999=69;MYCOPY(dummy7_a01a)} // 0948:0b9a
    {db tmp999=83;MYCOPY(dummy7_a01b)} // 0948:0b9b
    {db tmp999=46;MYCOPY(dummy7_a01c)} // 0948:0b9c
    {db tmp999=19;MYCOPY(unk_185fe)} // 0948:0b9e
    {db tmp999[32]={4,89,79,85,32,77,85,83,84,32,70,73,78,68,32,72,73,77,13,65,78,68,32,68,69,83,84,82,79,89,32,72};MYCOPY(dummy7_a01f)} // 0948:0b9f
    {db tmp999=73;MYCOPY(dummy7_a03f)} // 0948:0bbf
    {db tmp999=77;MYCOPY(dummy7_a040)} // 0948:0bc0
    {db tmp999=46;MYCOPY(dummy7_a041)} // 0948:0bc1
    {db tmp999=20;MYCOPY(unk_18623)} // 0948:0bc3
    {db tmp999=6;MYCOPY(dummy7_a044)} // 0948:0bc4
    {db tmp999=65;MYCOPY(dummy7_a045)} // 0948:0bc5
    {db tmp999=83;MYCOPY(dummy7_a046)} // 0948:0bc6
    {db tmp999=32;MYCOPY(dummy7_a047)} // 0948:0bc7
    {db tmp999=76;MYCOPY(dummy7_a048)} // 0948:0bc8
    {db tmp999=79;MYCOPY(dummy7_a049)} // 0948:0bc9
    {db tmp999=78;MYCOPY(dummy7_a04a)} // 0948:0bca
    {db tmp999=71;MYCOPY(dummy7_a04b)} // 0948:0bcb
    {db tmp999=32;MYCOPY(dummy7_a04c)} // 0948:0bcc
    {db tmp999=65;MYCOPY(dummy7_a04d)} // 0948:0bcd
    {db tmp999=83;MYCOPY(dummy7_a04e)} // 0948:0bce
    {db tmp999=32;MYCOPY(dummy7_a04f)} // 0948:0bcf
    {db tmp999=84;MYCOPY(dummy7_a050)} // 0948:0bd0
    {db tmp999=79;MYCOPY(dummy7_a051)} // 0948:0bd1
    {db tmp999=77;MYCOPY(dummy7_a052)} // 0948:0bd2
    {db tmp999=65;MYCOPY(dummy7_a053)} // 0948:0bd3
    {dw tmp999=20308;MYCOPY(dummy7_a054)} // 0948:0bd4
    {char tmp999[47]={'R','\r','L','I','V','E','S',',',' ','Y','O','U',' ','W','I','L','L','\r','N','E','V','E','R',' ','R','E','T','U','R','N',' ','T','O','\r','Y','O','U','R',' ','O','W','N',' ','T','I','M','E'};MYCOPY(arlivesyouwilln)} // 0948:0bd6
    {char tmp999[2]=".";MYCOPY(dummy7_a085)} // 0948:0bd6
    {db tmp999=18;MYCOPY(unk_18667)} // 0948:0c07
    {db tmp999[32]={5,87,72,69,82,69,32,73,83,32,84,72,73,83,13,84,79,77,65,84,79,82,44,32,65,78,68,32,72,79,87,13};MYCOPY(dummy7_a088)} // 0948:0c08
    {db tmp999=68;MYCOPY(dummy7_a0a8)} // 0948:0c28
    {db tmp999=79;MYCOPY(dummy7_a0a9)} // 0948:0c29
    {db tmp999=32;MYCOPY(dummy7_a0aa)} // 0948:0c2a
    {db tmp999=87;MYCOPY(dummy7_a0ab)} // 0948:0c2b
    {db tmp999=69;MYCOPY(dummy7_a0ac)} // 0948:0c2c
    {db tmp999=32;MYCOPY(dummy7_a0ad)} // 0948:0c2d
    {db tmp999=70;MYCOPY(dummy7_a0ae)} // 0948:0c2e
    {db tmp999=73;MYCOPY(dummy7_a0af)} // 0948:0c2f
    {db tmp999=78;MYCOPY(dummy7_a0b0)} // 0948:0c30
    {db tmp999=68;MYCOPY(dummy7_a0b1)} // 0948:0c31
    {db tmp999=32;MYCOPY(dummy7_a0b2)} // 0948:0c32
    {db tmp999=72;MYCOPY(dummy7_a0b3)} // 0948:0c33
    {db tmp999=73;MYCOPY(dummy7_a0b4)} // 0948:0c34
    {db tmp999=77;MYCOPY(dummy7_a0b5)} // 0948:0c35
    {db tmp999=63;MYCOPY(dummy7_a0b6)} // 0948:0c36
    {db tmp999=23;MYCOPY(unk_18698)} // 0948:0c38
    {db tmp999[32]={5,89,79,85,32,77,85,83,84,32,75,69,69,80,32,77,79,86,73,78,71,46,13,87,72,69,78,32,89,79,85,32};MYCOPY(dummy7_a0b9)} // 0948:0c39
    {db tmp999=70;MYCOPY(dummy7_a0d9)} // 0948:0c59
    {db tmp999=73;MYCOPY(dummy7_a0da)} // 0948:0c5a
    {db tmp999=78;MYCOPY(dummy7_a0db)} // 0948:0c5b
    {db tmp999=68;MYCOPY(dummy7_a0dc)} // 0948:0c5c
    {db tmp999=32;MYCOPY(dummy7_a0dd)} // 0948:0c5d
    {db tmp999=72;MYCOPY(dummy7_a0de)} // 0948:0c5e
    {db tmp999=73;MYCOPY(dummy7_a0df)} // 0948:0c5f
    {db tmp999=77;MYCOPY(dummy7_a0e0)} // 0948:0c60
    {db tmp999=44;MYCOPY(dummy7_a0e1)} // 0948:0c61
    {db tmp999=13;MYCOPY(dummy7_a0e2)} // 0948:0c62
    {db tmp999=89;MYCOPY(dummy7_a0e3)} // 0948:0c63
    {db tmp999=79;MYCOPY(dummy7_a0e4)} // 0948:0c64
    {db tmp999=85;MYCOPY(dummy7_a0e5)} // 0948:0c65
    {db tmp999=32;MYCOPY(dummy7_a0e6)} // 0948:0c66
    {db tmp999=87;MYCOPY(dummy7_a0e7)} // 0948:0c67
    {db tmp999=73;MYCOPY(dummy7_a0e8)} // 0948:0c68
    {db tmp999=76;MYCOPY(dummy7_a0e9)} // 0948:0c69
    {db tmp999=76;MYCOPY(dummy7_a0ea)} // 0948:0c6a
    {db tmp999=32;MYCOPY(dummy7_a0eb)} // 0948:0c6b
    {db tmp999=75;MYCOPY(dummy7_a0ec)} // 0948:0c6c
    {db tmp999=78;MYCOPY(dummy7_a0ed)} // 0948:0c6d
    {db tmp999=79;MYCOPY(dummy7_a0ee)} // 0948:0c6e
    {db tmp999=87;MYCOPY(dummy7_a0ef)} // 0948:0c6f
    {db tmp999=46;MYCOPY(dummy7_a0f0)} // 0948:0c70
    {db tmp999=25;MYCOPY(unk_186d2)} // 0948:0c72
    {db tmp999[32]={5,89,79,85,32,67,65,78,32,71,69,84,32,72,73,78,84,83,32,73,70,13,89,79,85,32,83,84,65,78,68,32};MYCOPY(dummy7_a0f3)} // 0948:0c73
    {db tmp999[32]={78,69,88,84,32,84,79,32,84,72,69,83,69,13,66,85,84,84,79,78,83,32,65,78,68,32,80,82,69,83,83,32};MYCOPY(dummy7_a113)} // 0948:0c93
    {db tmp999=39;MYCOPY(dummy7_a133)} // 0948:0cb3
    {db tmp999=83;MYCOPY(dummy7_a134)} // 0948:0cb4
    {db tmp999=39;MYCOPY(dummy7_a135)} // 0948:0cb5
    {db tmp999=46;MYCOPY(dummy7_a136)} // 0948:0cb6
    {db tmp999=25;MYCOPY(unk_18718)} // 0948:0cb8
    {db tmp999[32]={6,80,82,69,83,83,32,39,83,39,32,84,79,32,80,85,83,72,13,66,85,84,84,79,78,83,44,32,70,76,73,80};MYCOPY(dummy7_a139)} // 0948:0cb9
    {db tmp999[32]={32,83,87,73,84,67,72,69,83,44,13,65,78,68,32,84,65,76,75,32,84,79,32,79,84,72,69,82,13,67,72,65};MYCOPY(dummy7_a159)} // 0948:0cd9
    {db tmp999=82;MYCOPY(dummy7_a179)} // 0948:0cf9
    {db tmp999=65;MYCOPY(dummy7_a17a)} // 0948:0cfa
    {db tmp999=67;MYCOPY(dummy7_a17b)} // 0948:0cfb
    {db tmp999=84;MYCOPY(dummy7_a17c)} // 0948:0cfc
    {db tmp999=69;MYCOPY(dummy7_a17d)} // 0948:0cfd
    {db tmp999=82;MYCOPY(dummy7_a17e)} // 0948:0cfe
    {db tmp999=83;MYCOPY(dummy7_a17f)} // 0948:0cff
    {db tmp999=46;MYCOPY(dummy7_a180)} // 0948:0d00
    {db tmp999=20;MYCOPY(unk_18762)} // 0948:0d02
    {db tmp999[32]={6,79,76,65,70,32,67,65,78,32,72,69,76,80,32,69,82,73,75,13,84,79,32,74,85,77,80,32,72,73,71,72};MYCOPY(dummy7_a183)} // 0948:0d03
    {db tmp999[32]={69,82,32,66,89,13,76,69,84,84,73,78,71,32,72,73,77,32,83,84,65,78,68,13,79,78,32,72,73,83,32,83};MYCOPY(dummy7_a1a3)} // 0948:0d23
    {db tmp999=72;MYCOPY(dummy7_a1c3)} // 0948:0d43
    {db tmp999=73;MYCOPY(dummy7_a1c4)} // 0948:0d44
    {db tmp999=69;MYCOPY(dummy7_a1c5)} // 0948:0d45
    {db tmp999=76;MYCOPY(dummy7_a1c6)} // 0948:0d46
    {db tmp999=68;MYCOPY(dummy7_a1c7)} // 0948:0d47
    {db tmp999=46;MYCOPY(dummy7_a1c8)} // 0948:0d48
    {char tmp999[46]={27,8,'T','O',' ','T','R','A','D','E',' ','A','N',' ','I','T','E','M',',',' ','P','R','E','S','S','\r',39,'T','A','B',39,' ','A','N','D',' ','T','H','E','N',' ','P','R','E','S','S'};MYCOPY(atotradeanitemp)} // 0948:0d4a
    {char tmp999[47]={'\r',39,'F',39,' ','O','V','E','R',' ','T','H','E',' ','I','T','E','M','.',' ','N','O','W','\r','G','I','V','E',' ','T','H','E',' ','I','T','E','M',' ','T','O',' ','A',' ','N','E','A','R'};MYCOPY(dummy7_a1f8)} // 0948:0d4a
    {char tmp999[32]="BY\rVIKING. PRESS 'TAB'\rTO EXIT.";MYCOPY(dummy7_a227)} // 0948:0d4a
    {db tmp999=22;MYCOPY(unk_18827)} // 0948:0dc7
    {db tmp999[32]={5,80,82,69,83,83,32,39,83,39,32,84,79,32,79,80,69,82,65,84,69,13,65,32,80,85,77,80,46,32,32,84};MYCOPY(dummy7_a248)} // 0948:0dc8
    {db tmp999=79;MYCOPY(dummy7_a268)} // 0948:0de8
    {db tmp999=32;MYCOPY(dummy7_a269)} // 0948:0de9
    {db tmp999=77;MYCOPY(dummy7_a26a)} // 0948:0dea
    {db tmp999=65;MYCOPY(dummy7_a26b)} // 0948:0deb
    {db tmp999=78;MYCOPY(dummy7_a26c)} // 0948:0dec
    {db tmp999=85;MYCOPY(dummy7_a26d)} // 0948:0ded
    {db tmp999=65;MYCOPY(dummy7_a26e)} // 0948:0dee
    {db tmp999=76;MYCOPY(dummy7_a26f)} // 0948:0def
    {db tmp999=76;MYCOPY(dummy7_a270)} // 0948:0df0
    {db tmp999=89;MYCOPY(dummy7_a271)} // 0948:0df1
    {db tmp999=13;MYCOPY(dummy7_a272)} // 0948:0df2
    {db tmp999=68;MYCOPY(dummy7_a273)} // 0948:0df3
    {db tmp999=69;MYCOPY(dummy7_a274)} // 0948:0df4
    {db tmp999=70;MYCOPY(dummy7_a275)} // 0948:0df5
    {db tmp999=76;MYCOPY(dummy7_a276)} // 0948:0df6
    {db tmp999=65;MYCOPY(dummy7_a277)} // 0948:0df7
    {db tmp999=84;MYCOPY(dummy7_a278)} // 0948:0df8
    {db tmp999=69;MYCOPY(dummy7_a279)} // 0948:0df9
    {db tmp999=44;MYCOPY(dummy7_a27a)} // 0948:0dfa
    {db tmp999=32;MYCOPY(dummy7_a27b)} // 0948:0dfb
    {db tmp999=80;MYCOPY(dummy7_a27c)} // 0948:0dfc
    {db tmp999=82;MYCOPY(dummy7_a27d)} // 0948:0dfd
    {db tmp999=69;MYCOPY(dummy7_a27e)} // 0948:0dfe
    {db tmp999=83;MYCOPY(dummy7_a27f)} // 0948:0dff
    {db tmp999=83;MYCOPY(dummy7_a280)} // 0948:0e00
    {db tmp999=32;MYCOPY(dummy7_a281)} // 0948:0e01
    {db tmp999=39;MYCOPY(dummy7_a282)} // 0948:0e02
    {db tmp999=70;MYCOPY(dummy7_a283)} // 0948:0e03
    {db tmp999=39;MYCOPY(dummy7_a284)} // 0948:0e04
    {db tmp999=46;MYCOPY(dummy7_a285)} // 0948:0e05
    {db tmp999=26;MYCOPY(unk_18867)} // 0948:0e07
    {db tmp999[32]={7,84,79,32,83,69,76,69,67,84,32,65,78,32,73,84,69,77,44,32,80,82,69,83,83,13,39,84,65,66,39,32};MYCOPY(dummy7_a288)} // 0948:0e08
    {db tmp999[32]={65,78,68,32,84,72,69,78,32,77,79,86,69,13,89,79,85,82,32,70,76,65,83,72,73,78,71,32,66,79,88,32};MYCOPY(dummy7_a2a8)} // 0948:0e28
    {db tmp999[32]={79,86,69,82,13,84,72,69,32,73,84,69,77,46,32,80,82,69,83,83,32,39,84,65,66,39,13,84,79,32,69,88};MYCOPY(dummy7_a2c8)} // 0948:0e48
    {db tmp999=73;MYCOPY(dummy7_a2e8)} // 0948:0e68
    {db tmp999=84;MYCOPY(dummy7_a2e9)} // 0948:0e69
    {db tmp999=46;MYCOPY(dummy7_a2ea)} // 0948:0e6a
    {db tmp999=24;MYCOPY(unk_188cc)} // 0948:0e6c
    {db tmp999[32]={4,84,79,32,85,83,69,32,65,32,83,69,76,69,67,84,69,68,32,73,84,69,77,13,80,82,69,83,83,32,39,69};MYCOPY(dummy7_a2ed)} // 0948:0e6d
    {db tmp999=39;MYCOPY(dummy7_a30d)} // 0948:0e8d
    {db tmp999=46;MYCOPY(dummy7_a30e)} // 0948:0e8e
    {db tmp999=23;MYCOPY(unk_188f0)} // 0948:0e90
    {db tmp999[32]={4,83,84,65,78,68,32,79,78,32,84,72,69,32,69,76,69,86,65,84,79,82,13,65,78,68,32,77,79,86,69,32};MYCOPY(dummy7_a311)} // 0948:0e91
    {db tmp999=85;MYCOPY(dummy7_a331)} // 0948:0eb1
    {db tmp999=80;MYCOPY(dummy7_a332)} // 0948:0eb2
    {db tmp999=32;MYCOPY(dummy7_a333)} // 0948:0eb3
    {db tmp999=79;MYCOPY(dummy7_a334)} // 0948:0eb4
    {db tmp999=82;MYCOPY(dummy7_a335)} // 0948:0eb5
    {db tmp999=32;MYCOPY(dummy7_a336)} // 0948:0eb6
    {db tmp999=68;MYCOPY(dummy7_a337)} // 0948:0eb7
    {db tmp999=79;MYCOPY(dummy7_a338)} // 0948:0eb8
    {db tmp999=87;MYCOPY(dummy7_a339)} // 0948:0eb9
    {db tmp999=78;MYCOPY(dummy7_a33a)} // 0948:0eba
    {db tmp999=46;MYCOPY(dummy7_a33b)} // 0948:0ebb
    {db tmp999=29;MYCOPY(unk_1891d)} // 0948:0ebd
    {db tmp999[32]={7,84,79,32,79,80,69,82,65,84,69,32,65,32,67,82,65,78,69,44,32,80,82,69,83,83,13,39,83,39,32,84};MYCOPY(dummy7_a33e)} // 0948:0ebe
    {db tmp999[32]={79,32,69,78,84,69,82,32,79,82,32,69,88,73,84,44,13,84,72,69,78,32,77,79,86,69,32,84,72,69,32,77};MYCOPY(dummy7_a35e)} // 0948:0ede
    {db tmp999[32]={65,71,78,69,84,32,76,69,70,84,13,79,82,32,82,73,71,72,84,46,32,32,80,82,69,83,83,32,39,70,39,32};MYCOPY(dummy7_a37e)} // 0948:0efe
    {db tmp999=84;MYCOPY(dummy7_a39e)} // 0948:0f1e
    {db tmp999=79;MYCOPY(dummy7_a39f)} // 0948:0f1f
    {db tmp999=13;MYCOPY(dummy7_a3a0)} // 0948:0f20
    {db tmp999=84;MYCOPY(dummy7_a3a1)} // 0948:0f21
    {db tmp999=85;MYCOPY(dummy7_a3a2)} // 0948:0f22
    {db tmp999=82;MYCOPY(dummy7_a3a3)} // 0948:0f23
    {db tmp999=78;MYCOPY(dummy7_a3a4)} // 0948:0f24
    {db tmp999=32;MYCOPY(dummy7_a3a5)} // 0948:0f25
    {db tmp999=84;MYCOPY(dummy7_a3a6)} // 0948:0f26
    {db tmp999=72;MYCOPY(dummy7_a3a7)} // 0948:0f27
    {db tmp999=69;MYCOPY(dummy7_a3a8)} // 0948:0f28
    {db tmp999=32;MYCOPY(dummy7_a3a9)} // 0948:0f29
    {db tmp999=77;MYCOPY(dummy7_a3aa)} // 0948:0f2a
    {db tmp999=65;MYCOPY(dummy7_a3ab)} // 0948:0f2b
    {db tmp999=71;MYCOPY(dummy7_a3ac)} // 0948:0f2c
    {db tmp999=78;MYCOPY(dummy7_a3ad)} // 0948:0f2d
    {db tmp999=69;MYCOPY(dummy7_a3ae)} // 0948:0f2e
    {db tmp999=84;MYCOPY(dummy7_a3af)} // 0948:0f2f
    {db tmp999=32;MYCOPY(dummy7_a3b0)} // 0948:0f30
    {db tmp999=79;MYCOPY(dummy7_a3b1)} // 0948:0f31
    {db tmp999=78;MYCOPY(dummy7_a3b2)} // 0948:0f32
    {db tmp999=32;MYCOPY(dummy7_a3b3)} // 0948:0f33
    {db tmp999=65;MYCOPY(dummy7_a3b4)} // 0948:0f34
    {db tmp999=78;MYCOPY(dummy7_a3b5)} // 0948:0f35
    {db tmp999=68;MYCOPY(dummy7_a3b6)} // 0948:0f36
    {db tmp999=32;MYCOPY(dummy7_a3b7)} // 0948:0f37
    {db tmp999=79;MYCOPY(dummy7_a3b8)} // 0948:0f38
    {db tmp999=70;MYCOPY(dummy7_a3b9)} // 0948:0f39
    {db tmp999=70;MYCOPY(dummy7_a3ba)} // 0948:0f3a
    {db tmp999=46;MYCOPY(dummy7_a3bb)} // 0948:0f3b
    {db tmp999=28;MYCOPY(unk_1899d)} // 0948:0f3d
    {db tmp999[32]={4,84,79,32,79,80,69,82,65,84,69,32,65,32,84,69,76,69,80,79,82,84,69,82,44,13,83,84,65,78,68,32};MYCOPY(dummy7_a3be)} // 0948:0f3e
    {db tmp999=73;MYCOPY(dummy7_a3de)} // 0948:0f5e
    {db tmp999=78;MYCOPY(dummy7_a3df)} // 0948:0f5f
    {db tmp999=32;MYCOPY(dummy7_a3e0)} // 0948:0f60
    {db tmp999=73;MYCOPY(dummy7_a3e1)} // 0948:0f61
    {db tmp999=84;MYCOPY(dummy7_a3e2)} // 0948:0f62
    {db tmp999=32;MYCOPY(dummy7_a3e3)} // 0948:0f63
    {db tmp999=65;MYCOPY(dummy7_a3e4)} // 0948:0f64
    {db tmp999=78;MYCOPY(dummy7_a3e5)} // 0948:0f65
    {db tmp999=68;MYCOPY(dummy7_a3e6)} // 0948:0f66
    {db tmp999=32;MYCOPY(dummy7_a3e7)} // 0948:0f67
    {db tmp999=80;MYCOPY(dummy7_a3e8)} // 0948:0f68
    {db tmp999=82;MYCOPY(dummy7_a3e9)} // 0948:0f69
    {db tmp999=69;MYCOPY(dummy7_a3ea)} // 0948:0f6a
    {db tmp999=83;MYCOPY(dummy7_a3eb)} // 0948:0f6b
    {db tmp999=83;MYCOPY(dummy7_a3ec)} // 0948:0f6c
    {db tmp999=32;MYCOPY(dummy7_a3ed)} // 0948:0f6d
    {db tmp999=39;MYCOPY(dummy7_a3ee)} // 0948:0f6e
    {db tmp999=83;MYCOPY(dummy7_a3ef)} // 0948:0f6f
    {db tmp999=39;MYCOPY(dummy7_a3f0)} // 0948:0f70
    {db tmp999=46;MYCOPY(dummy7_a3f1)} // 0948:0f71
    {db tmp999=28;MYCOPY(unk_189d3)} // 0948:0f73
    {db tmp999[32]={7,79,76,65,70,32,84,72,69,32,83,84,79,85,84,32,67,65,78,32,85,83,69,32,72,73,83,13,83,72,73,69};MYCOPY(dummy7_a3f4)} // 0948:0f74
    {db tmp999[32]={76,68,32,65,83,32,65,32,72,65,78,71,32,71,76,73,68,69,82,46,13,87,72,73,76,69,32,70,65,76,76,73};MYCOPY(dummy7_a414)} // 0948:0f94
    {db tmp999[32]={78,71,44,32,80,79,83,73,84,73,79,78,13,84,72,69,32,83,72,73,69,76,68,32,65,66,79,86,69,32,72,73};MYCOPY(dummy7_a434)} // 0948:0fb4
    {db tmp999=83;MYCOPY(dummy7_a454)} // 0948:0fd4
    {db tmp999=32;MYCOPY(dummy7_a455)} // 0948:0fd5
    {db tmp999=72;MYCOPY(dummy7_a456)} // 0948:0fd6
    {db tmp999=69;MYCOPY(dummy7_a457)} // 0948:0fd7
    {db tmp999=65;MYCOPY(dummy7_a458)} // 0948:0fd8
    {db tmp999=68;MYCOPY(dummy7_a459)} // 0948:0fd9
    {db tmp999=13;MYCOPY(dummy7_a45a)} // 0948:0fda
    {db tmp999=66;MYCOPY(dummy7_a45b)} // 0948:0fdb
    {db tmp999=89;MYCOPY(dummy7_a45c)} // 0948:0fdc
    {db tmp999=32;MYCOPY(dummy7_a45d)} // 0948:0fdd
    {db tmp999=80;MYCOPY(dummy7_a45e)} // 0948:0fde
    {db tmp999=82;MYCOPY(dummy7_a45f)} // 0948:0fdf
    {db tmp999=69;MYCOPY(dummy7_a460)} // 0948:0fe0
    {db tmp999=83;MYCOPY(dummy7_a461)} // 0948:0fe1
    {db tmp999=83;MYCOPY(dummy7_a462)} // 0948:0fe2
    {db tmp999=73;MYCOPY(dummy7_a463)} // 0948:0fe3
    {db tmp999=78;MYCOPY(dummy7_a464)} // 0948:0fe4
    {db tmp999=71;MYCOPY(dummy7_a465)} // 0948:0fe5
    {db tmp999=32;MYCOPY(dummy7_a466)} // 0948:0fe6
    {db tmp999=39;MYCOPY(dummy7_a467)} // 0948:0fe7
    {db tmp999=70;MYCOPY(dummy7_a468)} // 0948:0fe8
    {db tmp999=39;MYCOPY(dummy7_a469)} // 0948:0fe9
    {db tmp999=28;MYCOPY(unk_18a4b)} // 0948:0feb
    {db tmp999[32]={7,69,82,73,75,32,84,72,69,32,83,87,73,70,84,32,72,65,83,32,65,32,84,79,85,71,72,13,72,69,65,68};MYCOPY(dummy7_a46c)} // 0948:0fec
    {db tmp999[32]={46,32,32,72,69,32,67,65,78,32,66,65,83,72,32,69,78,69,77,73,69,83,13,65,78,68,32,75,78,79,67,75};MYCOPY(dummy7_a48c)} // 0948:100c
    {db tmp999[32]={32,68,79,87,78,32,67,69,82,84,65,73,78,13,66,65,82,82,73,69,82,83,32,66,89,32,80,82,69,83,83,73};MYCOPY(dummy7_a4ac)} // 0948:102c
    {db tmp999=78;MYCOPY(dummy7_a4cc)} // 0948:104c
    {db tmp999=71;MYCOPY(dummy7_a4cd)} // 0948:104d
    {db tmp999=32;MYCOPY(dummy7_a4ce)} // 0948:104e
    {db tmp999=39;MYCOPY(dummy7_a4cf)} // 0948:104f
    {db tmp999=68;MYCOPY(dummy7_a4d0)} // 0948:1050
    {db tmp999=39;MYCOPY(dummy7_a4d1)} // 0948:1051
    {db tmp999=13;MYCOPY(dummy7_a4d2)} // 0948:1052
    {db tmp999=87;MYCOPY(dummy7_a4d3)} // 0948:1053
    {db tmp999=72;MYCOPY(dummy7_a4d4)} // 0948:1054
    {db tmp999=73;MYCOPY(dummy7_a4d5)} // 0948:1055
    {db tmp999=76;MYCOPY(dummy7_a4d6)} // 0948:1056
    {db tmp999=69;MYCOPY(dummy7_a4d7)} // 0948:1057
    {db tmp999=32;MYCOPY(dummy7_a4d8)} // 0948:1058
    {db tmp999=82;MYCOPY(dummy7_a4d9)} // 0948:1059
    {db tmp999=85;MYCOPY(dummy7_a4da)} // 0948:105a
    {db tmp999=78;MYCOPY(dummy7_a4db)} // 0948:105b
    {db tmp999=78;MYCOPY(dummy7_a4dc)} // 0948:105c
    {db tmp999=73;MYCOPY(dummy7_a4dd)} // 0948:105d
    {db tmp999=78;MYCOPY(dummy7_a4de)} // 0948:105e
    {db tmp999=71;MYCOPY(dummy7_a4df)} // 0948:105f
    {db tmp999=46;MYCOPY(dummy7_a4e0)} // 0948:1060
    {db tmp999=28;MYCOPY(unk_18ac2)} // 0948:1062
    {db tmp999[32]={8,66,65,76,69,79,71,32,84,72,69,32,70,73,69,82,67,69,32,73,83,32,65,13,83,84,85,68,46,32,72,69};MYCOPY(dummy7_a4e3)} // 0948:1063
    {db tmp999[32]={32,67,65,78,32,85,83,69,32,72,73,83,13,65,82,82,79,87,83,32,84,79,32,84,79,71,71,76,69,32,83,87};MYCOPY(dummy7_a503)} // 0948:1083
    {db tmp999[32]={73,84,67,72,69,83,44,13,65,83,32,87,69,76,76,32,65,83,32,84,79,32,68,69,70,69,65,84,13,77,79,78};MYCOPY(dummy7_a523)} // 0948:10a3
    {db tmp999[32]={83,84,69,82,83,46,32,84,79,32,83,72,79,79,84,32,65,78,13,65,82,82,79,87,44,32,80,82,69,83,83,32};MYCOPY(dummy7_a543)} // 0948:10c3
    {db tmp999=39;MYCOPY(dummy7_a563)} // 0948:10e3
    {db tmp999=68;MYCOPY(dummy7_a564)} // 0948:10e4
    {db tmp999=39;MYCOPY(dummy7_a565)} // 0948:10e5
    {db tmp999=46;MYCOPY(dummy7_a566)} // 0948:10e6
    {db tmp999=28;MYCOPY(unk_18b48)} // 0948:10e8
    {db tmp999[32]={8,84,79,32,85,78,76,79,67,75,32,65,32,75,69,89,72,79,76,69,44,32,84,72,69,13,67,79,82,82,69,67};MYCOPY(dummy7_a569)} // 0948:10e9
    {db tmp999[32]={84,32,75,69,89,32,77,85,83,84,32,66,69,32,85,83,69,68,46,13,83,84,65,78,68,32,78,69,88,84,32,84};MYCOPY(dummy7_a589)} // 0948:1109
    {db tmp999[32]={79,32,84,72,69,32,75,69,89,72,79,76,69,44,13,83,69,76,69,67,84,32,84,72,69,32,67,79,82,82,69,67};MYCOPY(dummy7_a5a9)} // 0948:1129
    {db tmp999[32]={84,32,75,69,89,13,70,82,79,77,32,89,79,85,82,32,73,78,86,69,78,84,79,82,89,44,32,65,78,68,13,80};MYCOPY(dummy7_a5c9)} // 0948:1149
    {db tmp999=82;MYCOPY(dummy7_a5e9)} // 0948:1169
    {db tmp999=69;MYCOPY(dummy7_a5ea)} // 0948:116a
    {db tmp999=83;MYCOPY(dummy7_a5eb)} // 0948:116b
    {db tmp999=83;MYCOPY(dummy7_a5ec)} // 0948:116c
    {db tmp999=32;MYCOPY(dummy7_a5ed)} // 0948:116d
    {db tmp999=39;MYCOPY(dummy7_a5ee)} // 0948:116e
    {db tmp999=69;MYCOPY(dummy7_a5ef)} // 0948:116f
    {db tmp999=39;MYCOPY(dummy7_a5f0)} // 0948:1170
    {db tmp999=46;MYCOPY(dummy7_a5f1)} // 0948:1171
    {db tmp999=22;MYCOPY(unk_18bd3)} // 0948:1173
    {db tmp999[32]={4,65,76,76,32,79,70,32,85,83,32,77,85,83,84,32,82,69,65,67,72,13,84,72,69,32,69,88,73,84,32,84};MYCOPY(dummy7_a5f4)} // 0948:1174
    {db tmp999=79;MYCOPY(dummy7_a614)} // 0948:1194
    {db tmp999=32;MYCOPY(dummy7_a615)} // 0948:1195
    {db tmp999=69;MYCOPY(dummy7_a616)} // 0948:1196
    {db tmp999=83;MYCOPY(dummy7_a617)} // 0948:1197
    {db tmp999=67;MYCOPY(dummy7_a618)} // 0948:1198
    {db tmp999=65;MYCOPY(dummy7_a619)} // 0948:1199
    {db tmp999=80;MYCOPY(dummy7_a61a)} // 0948:119a
    {db tmp999=69;MYCOPY(dummy7_a61b)} // 0948:119b
    {db tmp999=46;MYCOPY(dummy7_a61c)} // 0948:119c
    {db tmp999=28;MYCOPY(unk_18bfe)} // 0948:119e
    {db tmp999[32]={4,80,82,69,83,83,32,39,67,84,82,76,39,32,79,82,32,39,73,78,83,39,32,84,79,13,83,87,73,84,67,72};MYCOPY(dummy7_a61f)} // 0948:119f
    {db tmp999=32;MYCOPY(dummy7_a63f)} // 0948:11bf
    {db tmp999=84;MYCOPY(dummy7_a640)} // 0948:11c0
    {db tmp999=79;MYCOPY(dummy7_a641)} // 0948:11c1
    {db tmp999=32;MYCOPY(dummy7_a642)} // 0948:11c2
    {db tmp999=77;MYCOPY(dummy7_a643)} // 0948:11c3
    {db tmp999=89;MYCOPY(dummy7_a644)} // 0948:11c4
    {db tmp999=32;MYCOPY(dummy7_a645)} // 0948:11c5
    {db tmp999=66;MYCOPY(dummy7_a646)} // 0948:11c6
    {db tmp999=85;MYCOPY(dummy7_a647)} // 0948:11c7
    {db tmp999=68;MYCOPY(dummy7_a648)} // 0948:11c8
    {db tmp999=68;MYCOPY(dummy7_a649)} // 0948:11c9
    {db tmp999=73;MYCOPY(dummy7_a64a)} // 0948:11ca
    {db tmp999=69;MYCOPY(dummy7_a64b)} // 0948:11cb
    {db tmp999=83;MYCOPY(dummy7_a64c)} // 0948:11cc
    {db tmp999=46;MYCOPY(dummy7_a64d)} // 0948:11cd
    {db tmp999=11;MYCOPY(unk_18c2f)} // 0948:11cf
    {db tmp999=3;MYCOPY(dummy7_a650)} // 0948:11d0
    {db tmp999=85;MYCOPY(dummy7_a651)} // 0948:11d1
    {db tmp999=72;MYCOPY(dummy7_a652)} // 0948:11d2
    {db tmp999=44;MYCOPY(dummy7_a653)} // 0948:11d3
    {db tmp999=32;MYCOPY(dummy7_a654)} // 0948:11d4
    {db tmp999=71;MYCOPY(dummy7_a655)} // 0948:11d5
    {db tmp999=85;MYCOPY(dummy7_a656)} // 0948:11d6
    {db tmp999=89;MYCOPY(dummy7_a657)} // 0948:11d7
    {db tmp999=83;MYCOPY(dummy7_a658)} // 0948:11d8
    {db tmp999=63;MYCOPY(dummy7_a659)} // 0948:11d9
    {db tmp999=22;MYCOPY(unk_18c3b)} // 0948:11db
    {db tmp999[32]={4,73,32,72,65,86,69,32,65,32,66,65,68,32,70,69,69,76,73,78,71,13,65,66,79,85,84,32,84,72,73,83};MYCOPY(dummy7_a65c)} // 0948:11dc
    {db tmp999=46;MYCOPY(dummy7_a67c)} // 0948:11fc
    {db tmp999=46;MYCOPY(dummy7_a67d)} // 0948:11fd
    {db tmp999=46;MYCOPY(dummy7_a67e)} // 0948:11fe
    {db tmp999=13;MYCOPY(unk_18c60)} // 0948:1200
    {db tmp999=4;MYCOPY(dummy7_a681)} // 0948:1201
    {db tmp999=87;MYCOPY(dummy7_a682)} // 0948:1202
    {db tmp999=72;MYCOPY(dummy7_a683)} // 0948:1203
    {db tmp999=65;MYCOPY(dummy7_a684)} // 0948:1204
    {db tmp999=84;MYCOPY(dummy7_a685)} // 0948:1205
    {db tmp999=32;MYCOPY(dummy7_a686)} // 0948:1206
    {db tmp999=65;MYCOPY(dummy7_a687)} // 0948:1207
    {db tmp999=82;MYCOPY(dummy7_a688)} // 0948:1208
    {db tmp999=69;MYCOPY(dummy7_a689)} // 0948:1209
    {db tmp999=32;MYCOPY(dummy7_a68a)} // 0948:120a
    {db tmp999=87;MYCOPY(dummy7_a68b)} // 0948:120b
    {db tmp999=69;MYCOPY(dummy7_a68c)} // 0948:120c
    {db tmp999=13;MYCOPY(dummy7_a68d)} // 0948:120d
    {db tmp999=68;MYCOPY(dummy7_a68e)} // 0948:120e
    {db tmp999=79;MYCOPY(dummy7_a68f)} // 0948:120f
    {db tmp999=73;MYCOPY(dummy7_a690)} // 0948:1210
    {db tmp999=78;MYCOPY(dummy7_a691)} // 0948:1211
    {db tmp999=71;MYCOPY(dummy7_a692)} // 0948:1212
    {db tmp999=32;MYCOPY(dummy7_a693)} // 0948:1213
    {db tmp999=72;MYCOPY(dummy7_a694)} // 0948:1214
    {db tmp999=69;MYCOPY(dummy7_a695)} // 0948:1215
    {db tmp999=82;MYCOPY(dummy7_a696)} // 0948:1216
    {db tmp999=69;MYCOPY(dummy7_a697)} // 0948:1217
    {db tmp999=63;MYCOPY(dummy7_a698)} // 0948:1218
    {db tmp999=10;MYCOPY(unk_18c7a)} // 0948:121a
    {db tmp999=3;MYCOPY(dummy7_a69b)} // 0948:121b
    {db tmp999=73;MYCOPY(dummy7_a69c)} // 0948:121c
    {db tmp999=32;MYCOPY(dummy7_a69d)} // 0948:121d
    {db tmp999=68;MYCOPY(dummy7_a69e)} // 0948:121e
    {db tmp999=85;MYCOPY(dummy7_a69f)} // 0948:121f
    {db tmp999=78;MYCOPY(dummy7_a6a0)} // 0948:1220
    {db tmp999=78;MYCOPY(dummy7_a6a1)} // 0948:1221
    {db tmp999=79;MYCOPY(dummy7_a6a2)} // 0948:1222
    {db tmp999=46;MYCOPY(dummy7_a6a3)} // 0948:1223
    {db tmp999=16;MYCOPY(unk_18c85)} // 0948:1225
    {db tmp999[32]={5,87,73,76,76,32,89,79,85,32,71,85,89,83,13,74,85,83,84,32,83,72,85,84,32,85,80,13,65,78,68,32};MYCOPY(dummy7_a6a6)} // 0948:1226
    {db tmp999=70;MYCOPY(dummy7_a6c6)} // 0948:1246
    {db tmp999=79;MYCOPY(dummy7_a6c7)} // 0948:1247
    {db tmp999=76;MYCOPY(dummy7_a6c8)} // 0948:1248
    {db tmp999=76;MYCOPY(dummy7_a6c9)} // 0948:1249
    {db tmp999=79;MYCOPY(dummy7_a6ca)} // 0948:124a
    {db tmp999=87;MYCOPY(dummy7_a6cb)} // 0948:124b
    {db tmp999=32;MYCOPY(dummy7_a6cc)} // 0948:124c
    {db tmp999=77;MYCOPY(dummy7_a6cd)} // 0948:124d
    {db tmp999=69;MYCOPY(dummy7_a6ce)} // 0948:124e
    {db tmp999=33;MYCOPY(dummy7_a6cf)} // 0948:124f
    {db tmp999=17;MYCOPY(unk_18cb1)} // 0948:1251
    {db tmp999[32]={5,83,84,73,67,75,32,67,76,79,83,69,32,84,79,13,77,69,44,32,73,32,87,73,76,76,32,76,69,65,68,13};MYCOPY(dummy7_a6d2)} // 0948:1252
    {db tmp999=84;MYCOPY(dummy7_a6f2)} // 0948:1272
    {db tmp999=72;MYCOPY(dummy7_a6f3)} // 0948:1273
    {db tmp999=69;MYCOPY(dummy7_a6f4)} // 0948:1274
    {db tmp999=32;MYCOPY(dummy7_a6f5)} // 0948:1275
    {db tmp999=87;MYCOPY(dummy7_a6f6)} // 0948:1276
    {db tmp999=65;MYCOPY(dummy7_a6f7)} // 0948:1277
    {db tmp999=89;MYCOPY(dummy7_a6f8)} // 0948:1278
    {db tmp999=46;MYCOPY(dummy7_a6f9)} // 0948:1279
    {db tmp999=19;MYCOPY(unk_18cdb)} // 0948:127b
    {db tmp999[32]={5,89,79,85,32,87,79,85,76,68,78,39,84,32,75,78,79,87,13,87,72,73,67,72,32,87,65,89,32,84,79,32};MYCOPY(dummy7_a6fc)} // 0948:127c
    {db tmp999=76;MYCOPY(dummy7_a71c)} // 0948:129c
    {db tmp999=69;MYCOPY(dummy7_a71d)} // 0948:129d
    {db tmp999=65;MYCOPY(dummy7_a71e)} // 0948:129e
    {db tmp999=68;MYCOPY(dummy7_a71f)} // 0948:129f
    {db tmp999=13;MYCOPY(dummy7_a720)} // 0948:12a0
    {db tmp999=73;MYCOPY(dummy7_a721)} // 0948:12a1
    {db tmp999=70;MYCOPY(dummy7_a722)} // 0948:12a2
    {db tmp999=32;MYCOPY(dummy7_a723)} // 0948:12a3
    {db tmp999=89;MYCOPY(dummy7_a724)} // 0948:12a4
    {db tmp999=79;MYCOPY(dummy7_a725)} // 0948:12a5
    {db tmp999=85;MYCOPY(dummy7_a726)} // 0948:12a6
    {db tmp999=32;MYCOPY(dummy7_a727)} // 0948:12a7
    {db tmp999=72;MYCOPY(dummy7_a728)} // 0948:12a8
    {db tmp999=65;MYCOPY(dummy7_a729)} // 0948:12a9
    {db tmp999=68;MYCOPY(dummy7_a72a)} // 0948:12aa
    {db tmp999=32;MYCOPY(dummy7_a72b)} // 0948:12ab
    {db tmp999=65;MYCOPY(dummy7_a72c)} // 0948:12ac
    {db tmp999=32;MYCOPY(dummy7_a72d)} // 0948:12ad
    {db tmp999=77;MYCOPY(dummy7_a72e)} // 0948:12ae
    {db tmp999=65;MYCOPY(dummy7_a72f)} // 0948:12af
    {db tmp999=80;MYCOPY(dummy7_a730)} // 0948:12b0
    {db tmp999=46;MYCOPY(dummy7_a731)} // 0948:12b1
    {db tmp999=21;MYCOPY(unk_18d13)} // 0948:12b3
    {db tmp999[32]={6,73,70,32,89,79,85,32,84,87,79,32,68,79,78,39,84,13,83,84,79,80,32,70,73,71,72,84,73,78,71,44};MYCOPY(dummy7_a734)} // 0948:12b4
    {db tmp999[32]={32,73,32,65,77,13,71,79,73,78,71,32,84,79,32,72,65,86,69,32,84,79,13,66,82,65,73,78,32,89,79,85};MYCOPY(dummy7_a754)} // 0948:12d4
    {db tmp999=32;MYCOPY(dummy7_a774)} // 0948:12f4
    {db tmp999=66;MYCOPY(dummy7_a775)} // 0948:12f5
    {db tmp999=79;MYCOPY(dummy7_a776)} // 0948:12f6
    {db tmp999=84;MYCOPY(dummy7_a777)} // 0948:12f7
    {db tmp999=72;MYCOPY(dummy7_a778)} // 0948:12f8
    {db tmp999=33;MYCOPY(dummy7_a779)} // 0948:12f9
    {db tmp999=20;MYCOPY(unk_18d5b)} // 0948:12fb
    {db tmp999[32]={5,73,70,32,73,32,66,65,83,72,32,79,78,69,32,77,79,82,69,13,87,65,76,76,32,82,73,71,72,84,32,78};MYCOPY(dummy7_a77c)} // 0948:12fc
    {db tmp999=79;MYCOPY(dummy7_a79c)} // 0948:131c
    {db tmp999=87;MYCOPY(dummy7_a79d)} // 0948:131d
    {db tmp999=44;MYCOPY(dummy7_a79e)} // 0948:131e
    {db tmp999=32;MYCOPY(dummy7_a79f)} // 0948:131f
    {db tmp999=77;MYCOPY(dummy7_a7a0)} // 0948:1320
    {db tmp999=89;MYCOPY(dummy7_a7a1)} // 0948:1321
    {db tmp999=13;MYCOPY(dummy7_a7a2)} // 0948:1322
    {db tmp999=72;MYCOPY(dummy7_a7a3)} // 0948:1323
    {db tmp999=69;MYCOPY(dummy7_a7a4)} // 0948:1324
    {db tmp999=65;MYCOPY(dummy7_a7a5)} // 0948:1325
    {db tmp999=68;MYCOPY(dummy7_a7a6)} // 0948:1326
    {db tmp999=32;MYCOPY(dummy7_a7a7)} // 0948:1327
    {db tmp999=87;MYCOPY(dummy7_a7a8)} // 0948:1328
    {db tmp999=73;MYCOPY(dummy7_a7a9)} // 0948:1329
    {db tmp999=76;MYCOPY(dummy7_a7aa)} // 0948:132a
    {db tmp999=76;MYCOPY(dummy7_a7ab)} // 0948:132b
    {db tmp999=32;MYCOPY(dummy7_a7ac)} // 0948:132c
    {db tmp999=69;MYCOPY(dummy7_a7ad)} // 0948:132d
    {db tmp999=88;MYCOPY(dummy7_a7ae)} // 0948:132e
    {db tmp999=80;MYCOPY(dummy7_a7af)} // 0948:132f
    {db tmp999=76;MYCOPY(dummy7_a7b0)} // 0948:1330
    {db tmp999=79;MYCOPY(dummy7_a7b1)} // 0948:1331
    {db tmp999=68;MYCOPY(dummy7_a7b2)} // 0948:1332
    {db tmp999=69;MYCOPY(dummy7_a7b3)} // 0948:1333
    {db tmp999=33;MYCOPY(dummy7_a7b4)} // 0948:1334
    {db tmp999=15;MYCOPY(unk_18d96)} // 0948:1336
    {db tmp999=4;MYCOPY(dummy7_a7b7)} // 0948:1337
    {db tmp999=73;MYCOPY(dummy7_a7b8)} // 0948:1338
    {db tmp999=32;MYCOPY(dummy7_a7b9)} // 0948:1339
    {db tmp999=71;MYCOPY(dummy7_a7ba)} // 0948:133a
    {db tmp999=79;MYCOPY(dummy7_a7bb)} // 0948:133b
    {db tmp999=84;MYCOPY(dummy7_a7bc)} // 0948:133c
    {db tmp999=32;MYCOPY(dummy7_a7bd)} // 0948:133d
    {db tmp999=68;MYCOPY(dummy7_a7be)} // 0948:133e
    {db tmp999=73;MYCOPY(dummy7_a7bf)} // 0948:133f
    {db tmp999=66;MYCOPY(dummy7_a7c0)} // 0948:1340
    {db tmp999=83;MYCOPY(dummy7_a7c1)} // 0948:1341
    {db tmp999=32;MYCOPY(dummy7_a7c2)} // 0948:1342
    {db tmp999=79;MYCOPY(dummy7_a7c3)} // 0948:1343
    {db tmp999=78;MYCOPY(dummy7_a7c4)} // 0948:1344
    {db tmp999=13;MYCOPY(dummy7_a7c5)} // 0948:1345
    {db tmp999=72;MYCOPY(dummy7_a7c6)} // 0948:1346
    {db tmp999=73;MYCOPY(dummy7_a7c7)} // 0948:1347
    {db tmp999=83;MYCOPY(dummy7_a7c8)} // 0948:1348
    {db tmp999=32;MYCOPY(dummy7_a7c9)} // 0948:1349
    {db tmp999=72;MYCOPY(dummy7_a7ca)} // 0948:134a
    {db tmp999=69;MYCOPY(dummy7_a7cb)} // 0948:134b
    {db tmp999=76;MYCOPY(dummy7_a7cc)} // 0948:134c
    {db tmp999=77;MYCOPY(dummy7_a7cd)} // 0948:134d
    {db tmp999=69;MYCOPY(dummy7_a7ce)} // 0948:134e
    {db tmp999=84;MYCOPY(dummy7_a7cf)} // 0948:134f
    {db tmp999=46;MYCOPY(dummy7_a7d0)} // 0948:1350
    {db tmp999=17;MYCOPY(unk_18db2)} // 0948:1352
    {db tmp999=4;MYCOPY(dummy7_a7d3)} // 0948:1353
    {db tmp999=79;MYCOPY(dummy7_a7d4)} // 0948:1354
    {db tmp999=75;MYCOPY(dummy7_a7d5)} // 0948:1355
    {db tmp999=65;MYCOPY(dummy7_a7d6)} // 0948:1356
    {db tmp999=89;MYCOPY(dummy7_a7d7)} // 0948:1357
    {db tmp999=44;MYCOPY(dummy7_a7d8)} // 0948:1358
    {db tmp999=32;MYCOPY(dummy7_a7d9)} // 0948:1359
    {db tmp999=66;MYCOPY(dummy7_a7da)} // 0948:135a
    {db tmp999=85;MYCOPY(dummy7_a7db)} // 0948:135b
    {db tmp999=84;MYCOPY(dummy7_a7dc)} // 0948:135c
    {db tmp999=32;MYCOPY(dummy7_a7dd)} // 0948:135d
    {db tmp999=73;MYCOPY(dummy7_a7de)} // 0948:135e
    {db tmp999=32;MYCOPY(dummy7_a7df)} // 0948:135f
    {db tmp999=71;MYCOPY(dummy7_a7e0)} // 0948:1360
    {db tmp999=69;MYCOPY(dummy7_a7e1)} // 0948:1361
    {db tmp999=84;MYCOPY(dummy7_a7e2)} // 0948:1362
    {db tmp999=13;MYCOPY(dummy7_a7e3)} // 0948:1363
    {db tmp999=72;MYCOPY(dummy7_a7e4)} // 0948:1364
    {db tmp999=73;MYCOPY(dummy7_a7e5)} // 0948:1365
    {db tmp999=83;MYCOPY(dummy7_a7e6)} // 0948:1366
    {db tmp999=32;MYCOPY(dummy7_a7e7)} // 0948:1367
    {db tmp999=66;MYCOPY(dummy7_a7e8)} // 0948:1368
    {db tmp999=79;MYCOPY(dummy7_a7e9)} // 0948:1369
    {db tmp999=79;MYCOPY(dummy7_a7ea)} // 0948:136a
    {db tmp999=84;MYCOPY(dummy7_a7eb)} // 0948:136b
    {db tmp999=83;MYCOPY(dummy7_a7ec)} // 0948:136c
    {db tmp999=46;MYCOPY(dummy7_a7ed)} // 0948:136d
    {db tmp999=20;MYCOPY(unk_18dcf)} // 0948:136f
    {db tmp999[32]={4,73,84,39,83,32,71,82,69,65,84,32,84,79,32,72,65,86,69,13,83,85,67,72,32,71,79,79,68,32,70,82};MYCOPY(dummy7_a7f0)} // 0948:1370
    {db tmp999=73;MYCOPY(dummy7_a810)} // 0948:1390
    {db tmp999=69;MYCOPY(dummy7_a811)} // 0948:1391
    {db tmp999=78;MYCOPY(dummy7_a812)} // 0948:1392
    {db tmp999=68;MYCOPY(dummy7_a813)} // 0948:1393
    {db tmp999=83;MYCOPY(dummy7_a814)} // 0948:1394
    {db tmp999=46;MYCOPY(dummy7_a815)} // 0948:1395
    {db tmp999=19;MYCOPY(unk_18df7)} // 0948:1397
    {db tmp999[32]={5,65,82,69,32,89,79,85,32,71,85,89,83,32,83,85,82,69,13,87,69,32,87,65,78,84,32,84,79,32,71,79};MYCOPY(dummy7_a818)} // 0948:1398
    {db tmp999=32;MYCOPY(dummy7_a838)} // 0948:13b8
    {db tmp999=73;MYCOPY(dummy7_a839)} // 0948:13b9
    {db tmp999=78;MYCOPY(dummy7_a83a)} // 0948:13ba
    {db tmp999=13;MYCOPY(dummy7_a83b)} // 0948:13bb
    {db tmp999=84;MYCOPY(dummy7_a83c)} // 0948:13bc
    {db tmp999=72;MYCOPY(dummy7_a83d)} // 0948:13bd
    {db tmp999=69;MYCOPY(dummy7_a83e)} // 0948:13be
    {db tmp999=82;MYCOPY(dummy7_a83f)} // 0948:13bf
    {db tmp999=69;MYCOPY(dummy7_a840)} // 0948:13c0
    {db tmp999=63;MYCOPY(dummy7_a841)} // 0948:13c1
    {db tmp999=16;MYCOPY(unk_18e23)} // 0948:13c3
    {db tmp999=4;MYCOPY(dummy7_a844)} // 0948:13c4
    {db tmp999=77;MYCOPY(dummy7_a845)} // 0948:13c5
    {db tmp999=65;MYCOPY(dummy7_a846)} // 0948:13c6
    {db tmp999=89;MYCOPY(dummy7_a847)} // 0948:13c7
    {db tmp999=66;MYCOPY(dummy7_a848)} // 0948:13c8
    {db tmp999=69;MYCOPY(dummy7_a849)} // 0948:13c9
    {db tmp999=32;MYCOPY(dummy7_a84a)} // 0948:13ca
    {db tmp999=73;MYCOPY(dummy7_a84b)} // 0948:13cb
    {db tmp999=84;MYCOPY(dummy7_a84c)} // 0948:13cc
    {db tmp999=32;MYCOPY(dummy7_a84d)} // 0948:13cd
    {db tmp999=76;MYCOPY(dummy7_a84e)} // 0948:13ce
    {db tmp999=69;MYCOPY(dummy7_a84f)} // 0948:13cf
    {db tmp999=65;MYCOPY(dummy7_a850)} // 0948:13d0
    {db tmp999=68;MYCOPY(dummy7_a851)} // 0948:13d1
    {db tmp999=83;MYCOPY(dummy7_a852)} // 0948:13d2
    {db tmp999=13;MYCOPY(dummy7_a853)} // 0948:13d3
    {db tmp999=66;MYCOPY(dummy7_a854)} // 0948:13d4
    {db tmp999=65;MYCOPY(dummy7_a855)} // 0948:13d5
    {db tmp999=67;MYCOPY(dummy7_a856)} // 0948:13d6
    {db tmp999=75;MYCOPY(dummy7_a857)} // 0948:13d7
    {db tmp999=32;MYCOPY(dummy7_a858)} // 0948:13d8
    {db tmp999=72;MYCOPY(dummy7_a859)} // 0948:13d9
    {db tmp999=79;MYCOPY(dummy7_a85a)} // 0948:13da
    {db tmp999=77;MYCOPY(dummy7_a85b)} // 0948:13db
    {db tmp999=69;MYCOPY(dummy7_a85c)} // 0948:13dc
    {db tmp999=33;MYCOPY(dummy7_a85d)} // 0948:13dd
    {db tmp999=18;MYCOPY(unk_18e3f)} // 0948:13df
    {db tmp999[32]={4,84,72,69,82,69,39,83,32,79,78,76,89,32,79,78,69,13,87,65,89,32,84,79,32,70,73,78,68,32,79,85};MYCOPY(dummy7_a860)} // 0948:13e0
    {db tmp999=84;MYCOPY(dummy7_a880)} // 0948:1400
    {db tmp999=46;MYCOPY(dummy7_a881)} // 0948:1401
    {db tmp999=11;MYCOPY(unk_18e63)} // 0948:1403
    {db tmp999=3;MYCOPY(dummy7_a884)} // 0948:1404
    {db tmp999=76;MYCOPY(dummy7_a885)} // 0948:1405
    {db tmp999=69;MYCOPY(dummy7_a886)} // 0948:1406
    {db tmp999=84;MYCOPY(dummy7_a887)} // 0948:1407
    {db tmp999=39;MYCOPY(dummy7_a888)} // 0948:1408
    {db tmp999=83;MYCOPY(dummy7_a889)} // 0948:1409
    {db tmp999=32;MYCOPY(dummy7_a88a)} // 0948:140a
    {db tmp999=71;MYCOPY(dummy7_a88b)} // 0948:140b
    {db tmp999=79;MYCOPY(dummy7_a88c)} // 0948:140c
    {db tmp999=33;MYCOPY(dummy7_a88d)} // 0948:140d
    {db tmp999=19;MYCOPY(unk_18e6f)} // 0948:140f
    {db tmp999=3;MYCOPY(dummy7_a890)} // 0948:1410
    {db tmp999=84;MYCOPY(dummy7_a891)} // 0948:1411
    {db tmp999=72;MYCOPY(dummy7_a892)} // 0948:1412
    {db tmp999=65;MYCOPY(dummy7_a893)} // 0948:1413
    {db tmp999=84;MYCOPY(dummy7_a894)} // 0948:1414
    {db tmp999=32;MYCOPY(dummy7_a895)} // 0948:1415
    {db tmp999=87;MYCOPY(dummy7_a896)} // 0948:1416
    {db tmp999=65;MYCOPY(dummy7_a897)} // 0948:1417
    {db tmp999=83;MYCOPY(dummy7_a898)} // 0948:1418
    {db tmp999=32;MYCOPY(dummy7_a899)} // 0948:1419
    {db tmp999=73;MYCOPY(dummy7_a89a)} // 0948:141a
    {db tmp999=78;MYCOPY(dummy7_a89b)} // 0948:141b
    {db tmp999=84;MYCOPY(dummy7_a89c)} // 0948:141c
    {db tmp999=69;MYCOPY(dummy7_a89d)} // 0948:141d
    {db tmp999=78;MYCOPY(dummy7_a89e)} // 0948:141e
    {db tmp999=83;MYCOPY(dummy7_a89f)} // 0948:141f
    {db tmp999=69;MYCOPY(dummy7_a8a0)} // 0948:1420
    {db tmp999=46;MYCOPY(dummy7_a8a1)} // 0948:1421
    {db tmp999=20;MYCOPY(unk_18e83)} // 0948:1423
    {db tmp999=3;MYCOPY(dummy7_a8a4)} // 0948:1424
    {db tmp999=89;MYCOPY(dummy7_a8a5)} // 0948:1425
    {db tmp999=69;MYCOPY(dummy7_a8a6)} // 0948:1426
    {db tmp999=65;MYCOPY(dummy7_a8a7)} // 0948:1427
    {db tmp999=72;MYCOPY(dummy7_a8a8)} // 0948:1428
    {db tmp999=33;MYCOPY(dummy7_a8a9)} // 0948:1429
    {db tmp999=32;MYCOPY(dummy7_a8aa)} // 0948:142a
    {db tmp999=87;MYCOPY(dummy7_a8ab)} // 0948:142b
    {db tmp999=72;MYCOPY(dummy7_a8ac)} // 0948:142c
    {db tmp999=65;MYCOPY(dummy7_a8ad)} // 0948:142d
    {db tmp999=84;MYCOPY(dummy7_a8ae)} // 0948:142e
    {db tmp999=32;MYCOPY(dummy7_a8af)} // 0948:142f
    {db tmp999=65;MYCOPY(dummy7_a8b0)} // 0948:1430
    {db tmp999=32;MYCOPY(dummy7_a8b1)} // 0948:1431
    {db tmp999=82;MYCOPY(dummy7_a8b2)} // 0948:1432
    {db tmp999=73;MYCOPY(dummy7_a8b3)} // 0948:1433
    {db tmp999=68;MYCOPY(dummy7_a8b4)} // 0948:1434
    {db tmp999=69;MYCOPY(dummy7_a8b5)} // 0948:1435
    {db tmp999=33;MYCOPY(dummy7_a8b6)} // 0948:1436
    {db tmp999=19;MYCOPY(unk_18e98)} // 0948:1438
    {db tmp999=4;MYCOPY(dummy7_a8b9)} // 0948:1439
    {db tmp999=73;MYCOPY(dummy7_a8ba)} // 0948:143a
    {db tmp999=32;MYCOPY(dummy7_a8bb)} // 0948:143b
    {db tmp999=84;MYCOPY(dummy7_a8bc)} // 0948:143c
    {db tmp999=72;MYCOPY(dummy7_a8bd)} // 0948:143d
    {db tmp999=73;MYCOPY(dummy7_a8be)} // 0948:143e
    {db tmp999=78;MYCOPY(dummy7_a8bf)} // 0948:143f
    {db tmp999=75;MYCOPY(dummy7_a8c0)} // 0948:1440
    {db tmp999=32;MYCOPY(dummy7_a8c1)} // 0948:1441
    {db tmp999=73;MYCOPY(dummy7_a8c2)} // 0948:1442
    {db tmp999=39;MYCOPY(dummy7_a8c3)} // 0948:1443
    {db tmp999=77;MYCOPY(dummy7_a8c4)} // 0948:1444
    {db tmp999=32;MYCOPY(dummy7_a8c5)} // 0948:1445
    {db tmp999=71;MYCOPY(dummy7_a8c6)} // 0948:1446
    {db tmp999=79;MYCOPY(dummy7_a8c7)} // 0948:1447
    {db tmp999=73;MYCOPY(dummy7_a8c8)} // 0948:1448
    {db tmp999=78;MYCOPY(dummy7_a8c9)} // 0948:1449
    {db tmp999=71;MYCOPY(dummy7_a8ca)} // 0948:144a
    {db tmp999=13;MYCOPY(dummy7_a8cb)} // 0948:144b
    {db tmp999=84;MYCOPY(dummy7_a8cc)} // 0948:144c
    {db tmp999=79;MYCOPY(dummy7_a8cd)} // 0948:144d
    {db tmp999=32;MYCOPY(dummy7_a8ce)} // 0948:144e
    {db tmp999=66;MYCOPY(dummy7_a8cf)} // 0948:144f
    {db tmp999=69;MYCOPY(dummy7_a8d0)} // 0948:1450
    {db tmp999=32;MYCOPY(dummy7_a8d1)} // 0948:1451
    {db tmp999=83;MYCOPY(dummy7_a8d2)} // 0948:1452
    {db tmp999=73;MYCOPY(dummy7_a8d3)} // 0948:1453
    {db tmp999=67;MYCOPY(dummy7_a8d4)} // 0948:1454
    {db tmp999=75;MYCOPY(dummy7_a8d5)} // 0948:1455
    {db tmp999=46;MYCOPY(dummy7_a8d6)} // 0948:1456
    {db tmp999=17;MYCOPY(unk_18eb8)} // 0948:1458
    {db tmp999[32]={4,73,84,39,83,32,78,73,67,69,32,84,79,32,66,69,13,79,85,84,83,73,68,69,32,65,71,65,73,78,46,0};MYCOPY(dummy7_a8d9)} // 0948:1459
    {db tmp999=20;MYCOPY(unk_18ed9)} // 0948:1479
    {db tmp999[32]={4,84,72,79,83,69,32,66,76,85,69,32,76,73,90,65,82,68,83,13,87,69,82,69,32,75,73,78,68,32,79,70};MYCOPY(dummy7_a8fa)} // 0948:147a
    {db tmp999=32;MYCOPY(dummy7_a91a)} // 0948:149a
    {db tmp999=67;MYCOPY(dummy7_a91b)} // 0948:149b
    {db tmp999=85;MYCOPY(dummy7_a91c)} // 0948:149c
    {db tmp999=84;MYCOPY(dummy7_a91d)} // 0948:149d
    {db tmp999=69;MYCOPY(dummy7_a91e)} // 0948:149e
    {db tmp999=46;MYCOPY(dummy7_a91f)} // 0948:149f
    {db tmp999=17;MYCOPY(unk_18f01)} // 0948:14a1
    {db tmp999[32]={5,89,69,65,72,44,32,87,72,69,78,32,84,72,69,89,13,87,69,82,69,78,39,84,32,84,82,89,73,78,71,13};MYCOPY(dummy7_a922)} // 0948:14a2
    {db tmp999=84;MYCOPY(dummy7_a942)} // 0948:14c2
    {db tmp999=79;MYCOPY(dummy7_a943)} // 0948:14c3
    {db tmp999=32;MYCOPY(dummy7_a944)} // 0948:14c4
    {db tmp999=69;MYCOPY(dummy7_a945)} // 0948:14c5
    {db tmp999=65;MYCOPY(dummy7_a946)} // 0948:14c6
    {db tmp999=84;MYCOPY(dummy7_a947)} // 0948:14c7
    {db tmp999=32;MYCOPY(dummy7_a948)} // 0948:14c8
    {db tmp999=85;MYCOPY(dummy7_a949)} // 0948:14c9
    {db tmp999=83;MYCOPY(dummy7_a94a)} // 0948:14ca
    {db tmp999=33;MYCOPY(dummy7_a94b)} // 0948:14cb
    {db tmp999=21;MYCOPY(unk_18f2d)} // 0948:14cd
    {db tmp999[32]={4,87,72,79,32,87,69,82,69,32,84,72,79,83,69,13,87,69,73,82,68,32,76,79,79,75,73,78,71,32,71,85};MYCOPY(dummy7_a94e)} // 0948:14ce
    {db tmp999=89;MYCOPY(dummy7_a96e)} // 0948:14ee
    {db tmp999=83;MYCOPY(dummy7_a96f)} // 0948:14ef
    {db tmp999=63;MYCOPY(dummy7_a970)} // 0948:14f0
    {db tmp999=19;MYCOPY(unk_18f52)} // 0948:14f2
    {db tmp999[32]={5,73,32,68,79,78,39,84,32,75,78,79,87,44,32,66,85,84,13,68,73,68,32,89,79,85,32,67,72,69,67,75};MYCOPY(dummy7_a973)} // 0948:14f3
    {db tmp999=32;MYCOPY(dummy7_a993)} // 0948:1513
    {db tmp999=79;MYCOPY(dummy7_a994)} // 0948:1514
    {db tmp999=85;MYCOPY(dummy7_a995)} // 0948:1515
    {db tmp999=84;MYCOPY(dummy7_a996)} // 0948:1516
    {db tmp999=13;MYCOPY(dummy7_a997)} // 0948:1517
    {db tmp999=84;MYCOPY(dummy7_a998)} // 0948:1518
    {db tmp999=72;MYCOPY(dummy7_a999)} // 0948:1519
    {db tmp999=69;MYCOPY(dummy7_a99a)} // 0948:151a
    {db tmp999=73;MYCOPY(dummy7_a99b)} // 0948:151b
    {db tmp999=82;MYCOPY(dummy7_a99c)} // 0948:151c
    {db tmp999=32;MYCOPY(dummy7_a99d)} // 0948:151d
    {db tmp999=72;MYCOPY(dummy7_a99e)} // 0948:151e
    {db tmp999=65;MYCOPY(dummy7_a99f)} // 0948:151f
    {db tmp999=73;MYCOPY(dummy7_a9a0)} // 0948:1520
    {db tmp999=82;MYCOPY(dummy7_a9a1)} // 0948:1521
    {db tmp999=68;MYCOPY(dummy7_a9a2)} // 0948:1522
    {db tmp999=79;MYCOPY(dummy7_a9a3)} // 0948:1523
    {db tmp999=83;MYCOPY(dummy7_a9a4)} // 0948:1524
    {db tmp999=63;MYCOPY(dummy7_a9a5)} // 0948:1525
    {db tmp999=19;MYCOPY(unk_18f87)} // 0948:1527
    {db tmp999[32]={4,65,78,68,32,80,69,79,80,76,69,32,83,65,89,32,87,69,13,78,69,69,68,32,72,65,73,82,67,85,84,83};MYCOPY(dummy7_a9a8)} // 0948:1528
    {db tmp999=63;MYCOPY(dummy7_a9c8)} // 0948:1548
    {db tmp999=19;MYCOPY(unk_18faa)} // 0948:154a
    {db tmp999[32]={5,87,72,69,78,32,87,69,32,71,69,84,32,72,79,77,69,44,13,87,69,32,78,69,69,68,32,84,79,32,71,69};MYCOPY(dummy7_a9cb)} // 0948:154b
    {db tmp999=84;MYCOPY(dummy7_a9eb)} // 0948:156b
    {db tmp999=13;MYCOPY(dummy7_a9ec)} // 0948:156c
    {db tmp999=79;MYCOPY(dummy7_a9ed)} // 0948:156d
    {db tmp999=78;MYCOPY(dummy7_a9ee)} // 0948:156e
    {db tmp999=69;MYCOPY(dummy7_a9ef)} // 0948:156f
    {db tmp999=32;MYCOPY(dummy7_a9f0)} // 0948:1570
    {db tmp999=79;MYCOPY(dummy7_a9f1)} // 0948:1571
    {db tmp999=70;MYCOPY(dummy7_a9f2)} // 0948:1572
    {db tmp999=32;MYCOPY(dummy7_a9f3)} // 0948:1573
    {db tmp999=84;MYCOPY(dummy7_a9f4)} // 0948:1574
    {db tmp999=72;MYCOPY(dummy7_a9f5)} // 0948:1575
    {db tmp999=79;MYCOPY(dummy7_a9f6)} // 0948:1576
    {db tmp999=83;MYCOPY(dummy7_a9f7)} // 0948:1577
    {db tmp999=69;MYCOPY(dummy7_a9f8)} // 0948:1578
    {db tmp999=46;MYCOPY(dummy7_a9f9)} // 0948:1579
    {db tmp999=15;MYCOPY(unk_18fdb)} // 0948:157b
    {db tmp999=3;MYCOPY(dummy7_a9fc)} // 0948:157c
    {db tmp999=71;MYCOPY(dummy7_a9fd)} // 0948:157d
    {db tmp999=73;MYCOPY(dummy7_a9fe)} // 0948:157e
    {db tmp999=65;MYCOPY(dummy7_a9ff)} // 0948:157f
    {db tmp999=78;MYCOPY(dummy7_aa00)} // 0948:1580
    {db tmp999=84;MYCOPY(dummy7_aa01)} // 0948:1581
    {db tmp999=32;MYCOPY(dummy7_aa02)} // 0948:1582
    {db tmp999=83;MYCOPY(dummy7_aa03)} // 0948:1583
    {db tmp999=78;MYCOPY(dummy7_aa04)} // 0948:1584
    {db tmp999=65;MYCOPY(dummy7_aa05)} // 0948:1585
    {db tmp999=73;MYCOPY(dummy7_aa06)} // 0948:1586
    {db tmp999=76;MYCOPY(dummy7_aa07)} // 0948:1587
    {db tmp999=83;MYCOPY(dummy7_aa08)} // 0948:1588
    {db tmp999=63;MYCOPY(dummy7_aa09)} // 0948:1589
    {db tmp999=13;MYCOPY(unk_18feb)} // 0948:158b
    {db tmp999=3;MYCOPY(dummy7_aa0c)} // 0948:158c
    {db tmp999=84;MYCOPY(dummy7_aa0d)} // 0948:158d
    {db tmp999=82;MYCOPY(dummy7_aa0e)} // 0948:158e
    {db tmp999=69;MYCOPY(dummy7_aa0f)} // 0948:158f
    {db tmp999=69;MYCOPY(dummy7_aa10)} // 0948:1590
    {db tmp999=72;MYCOPY(dummy7_aa11)} // 0948:1591
    {db tmp999=79;MYCOPY(dummy7_aa12)} // 0948:1592
    {db tmp999=85;MYCOPY(dummy7_aa13)} // 0948:1593
    {db tmp999=83;MYCOPY(dummy7_aa14)} // 0948:1594
    {db tmp999=69;MYCOPY(dummy7_aa15)} // 0948:1595
    {db tmp999=83;MYCOPY(dummy7_aa16)} // 0948:1596
    {db tmp999=63;MYCOPY(dummy7_aa17)} // 0948:1597
    {db tmp999=19;MYCOPY(unk_18ff9)} // 0948:1599
    {db tmp999[32]={5,78,79,44,32,84,72,79,83,69,32,67,79,79,76,13,87,65,84,69,82,70,65,76,76,83,32,84,72,65,84,13};MYCOPY(dummy7_aa1a)} // 0948:159a
    {db tmp999=72;MYCOPY(dummy7_aa3a)} // 0948:15ba
    {db tmp999=79;MYCOPY(dummy7_aa3b)} // 0948:15bb
    {db tmp999=86;MYCOPY(dummy7_aa3c)} // 0948:15bc
    {db tmp999=69;MYCOPY(dummy7_aa3d)} // 0948:15bd
    {db tmp999=82;MYCOPY(dummy7_aa3e)} // 0948:15be
    {db tmp999=32;MYCOPY(dummy7_aa3f)} // 0948:15bf
    {db tmp999=73;MYCOPY(dummy7_aa40)} // 0948:15c0
    {db tmp999=78;MYCOPY(dummy7_aa41)} // 0948:15c1
    {db tmp999=32;MYCOPY(dummy7_aa42)} // 0948:15c2
    {db tmp999=77;MYCOPY(dummy7_aa43)} // 0948:15c3
    {db tmp999=73;MYCOPY(dummy7_aa44)} // 0948:15c4
    {db tmp999=68;MYCOPY(dummy7_aa45)} // 0948:15c5
    {db tmp999=32;MYCOPY(dummy7_aa46)} // 0948:15c6
    {db tmp999=65;MYCOPY(dummy7_aa47)} // 0948:15c7
    {db tmp999=73;MYCOPY(dummy7_aa48)} // 0948:15c8
    {db tmp999=82;MYCOPY(dummy7_aa49)} // 0948:15c9
    {db tmp999=33;MYCOPY(dummy7_aa4a)} // 0948:15ca
    {db tmp999=22;MYCOPY(unk_1902c)} // 0948:15cc
    {db tmp999=4;MYCOPY(dummy7_aa4d)} // 0948:15cd
    {db tmp999=65;MYCOPY(dummy7_aa4e)} // 0948:15ce
    {db tmp999=82;MYCOPY(dummy7_aa4f)} // 0948:15cf
    {db tmp999=69;MYCOPY(dummy7_aa50)} // 0948:15d0
    {db tmp999=32;MYCOPY(dummy7_aa51)} // 0948:15d1
    {db tmp999=89;MYCOPY(dummy7_aa52)} // 0948:15d2
    {db tmp999=79;MYCOPY(dummy7_aa53)} // 0948:15d3
    {db tmp999=85;MYCOPY(dummy7_aa54)} // 0948:15d4
    {db tmp999=32;MYCOPY(dummy7_aa55)} // 0948:15d5
    {db tmp999=71;MYCOPY(dummy7_aa56)} // 0948:15d6
    {db tmp999=85;MYCOPY(dummy7_aa57)} // 0948:15d7
    {db tmp999=89;MYCOPY(dummy7_aa58)} // 0948:15d8
    {db tmp999=83;MYCOPY(dummy7_aa59)} // 0948:15d9
    {db tmp999=32;MYCOPY(dummy7_aa5a)} // 0948:15da
    {db tmp999=72;MYCOPY(dummy7_aa5b)} // 0948:15db
    {db tmp999=79;MYCOPY(dummy7_aa5c)} // 0948:15dc
    {db tmp999=76;MYCOPY(dummy7_aa5d)} // 0948:15dd
    {db tmp999=68;MYCOPY(dummy7_aa5e)} // 0948:15de
    {db tmp999=73;MYCOPY(dummy7_aa5f)} // 0948:15df
    {db tmp999=78;MYCOPY(dummy7_aa60)} // 0948:15e0
    {db tmp999=71;MYCOPY(dummy7_aa61)} // 0948:15e1
    {db tmp999=13;MYCOPY(dummy7_aa62)} // 0948:15e2
    {db tmp999=85;MYCOPY(dummy7_aa63)} // 0948:15e3
    {db tmp999=80;MYCOPY(dummy7_aa64)} // 0948:15e4
    {db tmp999=32;MYCOPY(dummy7_aa65)} // 0948:15e5
    {db tmp999=79;MYCOPY(dummy7_aa66)} // 0948:15e6
    {db tmp999=75;MYCOPY(dummy7_aa67)} // 0948:15e7
    {db tmp999=65;MYCOPY(dummy7_aa68)} // 0948:15e8
    {db tmp999=89;MYCOPY(dummy7_aa69)} // 0948:15e9
    {db tmp999=63;MYCOPY(dummy7_aa6a)} // 0948:15ea
    {db tmp999=14;MYCOPY(unk_1904c)} // 0948:15ec
    {db tmp999=5;MYCOPY(dummy7_aa6d)} // 0948:15ed
    {db tmp999=73;MYCOPY(dummy7_aa6e)} // 0948:15ee
    {db tmp999=39;MYCOPY(dummy7_aa6f)} // 0948:15ef
    {db tmp999=77;MYCOPY(dummy7_aa70)} // 0948:15f0
    {db tmp999=32;MYCOPY(dummy7_aa71)} // 0948:15f1
    {db tmp999=72;MYCOPY(dummy7_aa72)} // 0948:15f2
    {db tmp999=65;MYCOPY(dummy7_aa73)} // 0948:15f3
    {db tmp999=86;MYCOPY(dummy7_aa74)} // 0948:15f4
    {db tmp999=73;MYCOPY(dummy7_aa75)} // 0948:15f5
    {db tmp999=78;MYCOPY(dummy7_aa76)} // 0948:15f6
    {db tmp999=71;MYCOPY(dummy7_aa77)} // 0948:15f7
    {db tmp999=32;MYCOPY(dummy7_aa78)} // 0948:15f8
    {db tmp999=65;MYCOPY(dummy7_aa79)} // 0948:15f9
    {db tmp999=13;MYCOPY(dummy7_aa7a)} // 0948:15fa
    {db tmp999=84;MYCOPY(dummy7_aa7b)} // 0948:15fb
    {db tmp999=69;MYCOPY(dummy7_aa7c)} // 0948:15fc
    {db tmp999=82;MYCOPY(dummy7_aa7d)} // 0948:15fd
    {db tmp999=82;MYCOPY(dummy7_aa7e)} // 0948:15fe
    {db tmp999=73;MYCOPY(dummy7_aa7f)} // 0948:15ff
    {db tmp999=66;MYCOPY(dummy7_aa80)} // 0948:1600
    {db tmp999=76;MYCOPY(dummy7_aa81)} // 0948:1601
    {db tmp999=69;MYCOPY(dummy7_aa82)} // 0948:1602
    {db tmp999=13;MYCOPY(dummy7_aa83)} // 0948:1603
    {db tmp999=84;MYCOPY(dummy7_aa84)} // 0948:1604
    {db tmp999=73;MYCOPY(dummy7_aa85)} // 0948:1605
    {db tmp999=77;MYCOPY(dummy7_aa86)} // 0948:1606
    {db tmp999=69;MYCOPY(dummy7_aa87)} // 0948:1607
    {db tmp999=46;MYCOPY(dummy7_aa88)} // 0948:1608
    {db tmp999=24;MYCOPY(unk_1906a)} // 0948:160a
    {db tmp999[32]={5,78,79,84,32,77,69,46,46,46,73,32,72,65,86,69,78,39,84,13,69,86,69,82,32,71,79,84,32,84,79,32};MYCOPY(dummy7_aa8b)} // 0948:160b
    {db tmp999=67;MYCOPY(dummy7_aaab)} // 0948:162b
    {db tmp999=76;MYCOPY(dummy7_aaac)} // 0948:162c
    {db tmp999=79;MYCOPY(dummy7_aaad)} // 0948:162d
    {db tmp999=66;MYCOPY(dummy7_aaae)} // 0948:162e
    {db tmp999=66;MYCOPY(dummy7_aaaf)} // 0948:162f
    {db tmp999=69;MYCOPY(dummy7_aab0)} // 0948:1630
    {db tmp999=82;MYCOPY(dummy7_aab1)} // 0948:1631
    {db tmp999=13;MYCOPY(dummy7_aab2)} // 0948:1632
    {db tmp999=83;MYCOPY(dummy7_aab3)} // 0948:1633
    {db tmp999=79;MYCOPY(dummy7_aab4)} // 0948:1634
    {db tmp999=32;MYCOPY(dummy7_aab5)} // 0948:1635
    {db tmp999=77;MYCOPY(dummy7_aab6)} // 0948:1636
    {db tmp999=65;MYCOPY(dummy7_aab7)} // 0948:1637
    {db tmp999=78;MYCOPY(dummy7_aab8)} // 0948:1638
    {db tmp999=89;MYCOPY(dummy7_aab9)} // 0948:1639
    {db tmp999=32;MYCOPY(dummy7_aaba)} // 0948:163a
    {db tmp999=67;MYCOPY(dummy7_aabb)} // 0948:163b
    {db tmp999=79;MYCOPY(dummy7_aabc)} // 0948:163c
    {db tmp999=79;MYCOPY(dummy7_aabd)} // 0948:163d
    {db tmp999=76;MYCOPY(dummy7_aabe)} // 0948:163e
    {db tmp999=32;MYCOPY(dummy7_aabf)} // 0948:163f
    {db tmp999=77;MYCOPY(dummy7_aac0)} // 0948:1640
    {db tmp999=79;MYCOPY(dummy7_aac1)} // 0948:1641
    {db tmp999=78;MYCOPY(dummy7_aac2)} // 0948:1642
    {db tmp999=83;MYCOPY(dummy7_aac3)} // 0948:1643
    {db tmp999=84;MYCOPY(dummy7_aac4)} // 0948:1644
    {char tmp999[5]="ERS.";MYCOPY(aers)} // 0948:1645
    {db tmp999=19;MYCOPY(byte_190aa)} // 0948:164a
    {db tmp999=5;MYCOPY(dummy7_aacb)} // 0948:164b
    {db tmp999=73;MYCOPY(dummy7_aacc)} // 0948:164c
    {db tmp999=39;MYCOPY(dummy7_aacd)} // 0948:164d
    {db tmp999=77;MYCOPY(dummy7_aace)} // 0948:164e
    {db tmp999=32;MYCOPY(dummy7_aacf)} // 0948:164f
    {db tmp999=83;MYCOPY(dummy7_aad0)} // 0948:1650
    {char tmp999[39]="URPRISED\rTHAT BUBBLE\rHELD YOU UP OLAF.";MYCOPY(aurprisedthatbu)} // 0948:1651
    {db tmp999=18;MYCOPY(unk_190d8)} // 0948:1678
    {db tmp999[32]={5,87,65,84,67,72,32,73,84,46,32,73,39,77,13,86,69,82,89,32,83,69,78,83,73,84,73,86,69,13,65,66};MYCOPY(dummy7_aaf9)} // 0948:1679
    {db tmp999=79;MYCOPY(dummy7_ab19)} // 0948:1699
    {db tmp999=85;MYCOPY(dummy7_ab1a)} // 0948:169a
    {db tmp999=84;MYCOPY(dummy7_ab1b)} // 0948:169b
    {db tmp999=32;MYCOPY(dummy7_ab1c)} // 0948:169c
    {db tmp999=77;MYCOPY(dummy7_ab1d)} // 0948:169d
    {db tmp999=89;MYCOPY(dummy7_ab1e)} // 0948:169e
    {db tmp999=32;MYCOPY(dummy7_ab1f)} // 0948:169f
    {db tmp999=87;MYCOPY(dummy7_ab20)} // 0948:16a0
    {db tmp999=69;MYCOPY(dummy7_ab21)} // 0948:16a1
    {db tmp999=73;MYCOPY(dummy7_ab22)} // 0948:16a2
    {db tmp999=71;MYCOPY(dummy7_ab23)} // 0948:16a3
    {db tmp999=72;MYCOPY(dummy7_ab24)} // 0948:16a4
    {db tmp999=84;MYCOPY(dummy7_ab25)} // 0948:16a5
    {db tmp999=46;MYCOPY(dummy7_ab26)} // 0948:16a6
    {db tmp999=19;MYCOPY(unk_19108)} // 0948:16a8
    {db tmp999[32]={5,72,79,87,32,68,73,68,32,73,32,77,65,78,65,71,69,13,84,79,32,71,69,84,32,83,84,85,67,75,32,87};MYCOPY(dummy7_ab29)} // 0948:16a9
    {db tmp999=73;MYCOPY(dummy7_ab49)} // 0948:16c9
    {db tmp999=84;MYCOPY(dummy7_ab4a)} // 0948:16ca
    {db tmp999=72;MYCOPY(dummy7_ab4b)} // 0948:16cb
    {db tmp999=13;MYCOPY(dummy7_ab4c)} // 0948:16cc
    {db tmp999=84;MYCOPY(dummy7_ab4d)} // 0948:16cd
    {db tmp999=72;MYCOPY(dummy7_ab4e)} // 0948:16ce
    {db tmp999=69;MYCOPY(dummy7_ab4f)} // 0948:16cf
    {db tmp999=83;MYCOPY(dummy7_ab50)} // 0948:16d0
    {db tmp999=69;MYCOPY(dummy7_ab51)} // 0948:16d1
    {db tmp999=32;MYCOPY(dummy7_ab52)} // 0948:16d2
    {db tmp999=84;MYCOPY(dummy7_ab53)} // 0948:16d3
    {db tmp999=87;MYCOPY(dummy7_ab54)} // 0948:16d4
    {db tmp999=79;MYCOPY(dummy7_ab55)} // 0948:16d5
    {db tmp999=63;MYCOPY(dummy7_ab56)} // 0948:16d6
    {db tmp999=18;MYCOPY(unk_19138)} // 0948:16d8
    {db tmp999=4;MYCOPY(dummy7_ab59)} // 0948:16d9
    {db tmp999=78;MYCOPY(dummy7_ab5a)} // 0948:16da
    {db tmp999=79;MYCOPY(dummy7_ab5b)} // 0948:16db
    {db tmp999=87;MYCOPY(dummy7_ab5c)} // 0948:16dc
    {db tmp999=32;MYCOPY(dummy7_ab5d)} // 0948:16dd
    {db tmp999=87;MYCOPY(dummy7_ab5e)} // 0948:16de
    {db tmp999=69;MYCOPY(dummy7_ab5f)} // 0948:16df
    {db tmp999=32;MYCOPY(dummy7_ab60)} // 0948:16e0
    {db tmp999=65;MYCOPY(dummy7_ab61)} // 0948:16e1
    {db tmp999=76;MYCOPY(dummy7_ab62)} // 0948:16e2
    {db tmp999=76;MYCOPY(dummy7_ab63)} // 0948:16e3
    {db tmp999=32;MYCOPY(dummy7_ab64)} // 0948:16e4
    {db tmp999=83;MYCOPY(dummy7_ab65)} // 0948:16e5
    {db tmp999=77;MYCOPY(dummy7_ab66)} // 0948:16e6
    {db tmp999=69;MYCOPY(dummy7_ab67)} // 0948:16e7
    {db tmp999=76;MYCOPY(dummy7_ab68)} // 0948:16e8
    {db tmp999=76;MYCOPY(dummy7_ab69)} // 0948:16e9
    {db tmp999=13;MYCOPY(dummy7_ab6a)} // 0948:16ea
    {db tmp999=76;MYCOPY(dummy7_ab6b)} // 0948:16eb
    {db tmp999=73;MYCOPY(dummy7_ab6c)} // 0948:16ec
    {db tmp999=75;MYCOPY(dummy7_ab6d)} // 0948:16ed
    {db tmp999=69;MYCOPY(dummy7_ab6e)} // 0948:16ee
    {db tmp999=32;MYCOPY(dummy7_ab6f)} // 0948:16ef
    {db tmp999=83;MYCOPY(dummy7_ab70)} // 0948:16f0
    {db tmp999=87;MYCOPY(dummy7_ab71)} // 0948:16f1
    {db tmp999=65;MYCOPY(dummy7_ab72)} // 0948:16f2
    {db tmp999=77;MYCOPY(dummy7_ab73)} // 0948:16f3
    {db tmp999=80;MYCOPY(dummy7_ab74)} // 0948:16f4
    {db tmp999=46;MYCOPY(dummy7_ab75)} // 0948:16f5
    {db tmp999=13;MYCOPY(unk_19157)} // 0948:16f7
    {db tmp999=4;MYCOPY(dummy7_ab78)} // 0948:16f8
    {db tmp999=66;MYCOPY(dummy7_ab79)} // 0948:16f9
    {db tmp999=79;MYCOPY(dummy7_ab7a)} // 0948:16fa
    {db tmp999=89;MYCOPY(dummy7_ab7b)} // 0948:16fb
    {db tmp999=44;MYCOPY(dummy7_ab7c)} // 0948:16fc
    {db tmp999=32;MYCOPY(dummy7_ab7d)} // 0948:16fd
    {db tmp999=68;MYCOPY(dummy7_ab7e)} // 0948:16fe
    {db tmp999=79;MYCOPY(dummy7_ab7f)} // 0948:16ff
    {db tmp999=32;MYCOPY(dummy7_ab80)} // 0948:1700
    {db tmp999=87;MYCOPY(dummy7_ab81)} // 0948:1701
    {db tmp999=69;MYCOPY(dummy7_ab82)} // 0948:1702
    {db tmp999=13;MYCOPY(dummy7_ab83)} // 0948:1703
    {db tmp999=78;MYCOPY(dummy7_ab84)} // 0948:1704
    {db tmp999=69;MYCOPY(dummy7_ab85)} // 0948:1705
    {db tmp999=69;MYCOPY(dummy7_ab86)} // 0948:1706
    {db tmp999=68;MYCOPY(dummy7_ab87)} // 0948:1707
    {db tmp999=32;MYCOPY(dummy7_ab88)} // 0948:1708
    {db tmp999=66;MYCOPY(dummy7_ab89)} // 0948:1709
    {db tmp999=65;MYCOPY(dummy7_ab8a)} // 0948:170a
    {db tmp999=84;MYCOPY(dummy7_ab8b)} // 0948:170b
    {db tmp999=72;MYCOPY(dummy7_ab8c)} // 0948:170c
    {db tmp999=83;MYCOPY(dummy7_ab8d)} // 0948:170d
    {db tmp999=33;MYCOPY(dummy7_ab8e)} // 0948:170e
    {db tmp999=17;MYCOPY(unk_19170)} // 0948:1710
    {db tmp999[32]={5,66,65,84,72,83,33,32,86,73,75,73,78,71,83,13,68,79,78,39,84,32,78,69,69,68,32,78,79,13,83,84};MYCOPY(dummy7_ab91)} // 0948:1711
    {db tmp999=73;MYCOPY(dummy7_abb1)} // 0948:1731
    {db tmp999=78;MYCOPY(dummy7_abb2)} // 0948:1732
    {db tmp999=75;MYCOPY(dummy7_abb3)} // 0948:1733
    {db tmp999=73;MYCOPY(dummy7_abb4)} // 0948:1734
    {db tmp999=78;MYCOPY(dummy7_abb5)} // 0948:1735
    {db tmp999=71;MYCOPY(dummy7_abb6)} // 0948:1736
    {db tmp999=32;MYCOPY(dummy7_abb7)} // 0948:1737
    {db tmp999=66;MYCOPY(dummy7_abb8)} // 0948:1738
    {db tmp999=65;MYCOPY(dummy7_abb9)} // 0948:1739
    {db tmp999=84;MYCOPY(dummy7_abba)} // 0948:173a
    {db tmp999=72;MYCOPY(dummy7_abbb)} // 0948:173b
    {db tmp999=83;MYCOPY(dummy7_abbc)} // 0948:173c
    {db tmp999=33;MYCOPY(dummy7_abbd)} // 0948:173d
    {db tmp999=18;MYCOPY(unk_1919f)} // 0948:173f
    {db tmp999[32]={5,87,69,32,68,79,78,39,84,32,78,69,69,68,32,78,79,13,83,84,73,78,75,73,78,71,32,86,73,75,73,78};MYCOPY(dummy7_abc0)} // 0948:1740
    {db tmp999=71;MYCOPY(dummy7_abe0)} // 0948:1760
    {db tmp999=83;MYCOPY(dummy7_abe1)} // 0948:1761
    {db tmp999=13;MYCOPY(dummy7_abe2)} // 0948:1762
    {db tmp999=69;MYCOPY(dummy7_abe3)} // 0948:1763
    {db tmp999=73;MYCOPY(dummy7_abe4)} // 0948:1764
    {db tmp999=84;MYCOPY(dummy7_abe5)} // 0948:1765
    {db tmp999=72;MYCOPY(dummy7_abe6)} // 0948:1766
    {db tmp999=69;MYCOPY(dummy7_abe7)} // 0948:1767
    {db tmp999=82;MYCOPY(dummy7_abe8)} // 0948:1768
    {db tmp999=33;MYCOPY(dummy7_abe9)} // 0948:1769
    {db tmp999=19;MYCOPY(unk_191cb)} // 0948:176b
    {db tmp999[32]={5,77,65,89,66,69,32,84,72,69,82,69,39,83,13,65,32,68,73,70,70,69,82,69,78,84,32,87,65,89,13,84};MYCOPY(dummy7_abec)} // 0948:176c
    {db tmp999=79;MYCOPY(dummy7_ac0c)} // 0948:178c
    {db tmp999=32;MYCOPY(dummy7_ac0d)} // 0948:178d
    {db tmp999=71;MYCOPY(dummy7_ac0e)} // 0948:178e
    {db tmp999=69;MYCOPY(dummy7_ac0f)} // 0948:178f
    {db tmp999=84;MYCOPY(dummy7_ac10)} // 0948:1790
    {db tmp999=32;MYCOPY(dummy7_ac11)} // 0948:1791
    {db tmp999=66;MYCOPY(dummy7_ac12)} // 0948:1792
    {db tmp999=65;MYCOPY(dummy7_ac13)} // 0948:1793
    {db tmp999=67;MYCOPY(dummy7_ac14)} // 0948:1794
    {db tmp999=75;MYCOPY(dummy7_ac15)} // 0948:1795
    {db tmp999=32;MYCOPY(dummy7_ac16)} // 0948:1796
    {dw tmp999=20296;MYCOPY(dummy7_ac17)} // 0948:1797
    {dw tmp999=17741;MYCOPY(dummy7_ac19)} // 0948:1799
    {dw tmp999=46;MYCOPY(dummy7_ac1b)} // 0948:179b
    {db tmp999=16;MYCOPY(unk_191fd)} // 0948:179d
    {db tmp999=4;MYCOPY(dummy7_ac1e)} // 0948:179e
    {db tmp999=71;MYCOPY(dummy7_ac1f)} // 0948:179f
    {db tmp999=79;MYCOPY(dummy7_ac20)} // 0948:17a0
    {db tmp999=84;MYCOPY(dummy7_ac21)} // 0948:17a1
    {db tmp999=32;MYCOPY(dummy7_ac22)} // 0948:17a2
    {db tmp999=65;MYCOPY(dummy7_ac23)} // 0948:17a3
    {db tmp999=78;MYCOPY(dummy7_ac24)} // 0948:17a4
    {db tmp999=89;MYCOPY(dummy7_ac25)} // 0948:17a5
    {db tmp999=32;MYCOPY(dummy7_ac26)} // 0948:17a6
    {db tmp999=73;MYCOPY(dummy7_ac27)} // 0948:17a7
    {db tmp999=68;MYCOPY(dummy7_ac28)} // 0948:17a8
    {db tmp999=69;MYCOPY(dummy7_ac29)} // 0948:17a9
    {db tmp999=65;MYCOPY(dummy7_ac2a)} // 0948:17aa
    {db tmp999=83;MYCOPY(dummy7_ac2b)} // 0948:17ab
    {db tmp999=44;MYCOPY(dummy7_ac2c)} // 0948:17ac
    {db tmp999=13;MYCOPY(dummy7_ac2d)} // 0948:17ad
    {db tmp999=79;MYCOPY(dummy7_ac2e)} // 0948:17ae
    {db tmp999=76;MYCOPY(dummy7_ac2f)} // 0948:17af
    {db tmp999=65;MYCOPY(dummy7_ac30)} // 0948:17b0
    {db tmp999=70;MYCOPY(dummy7_ac31)} // 0948:17b1
    {db tmp999=63;MYCOPY(dummy7_ac32)} // 0948:17b2
    {db tmp999=13;MYCOPY(unk_19214)} // 0948:17b4
    {db tmp999=3;MYCOPY(dummy7_ac35)} // 0948:17b5
    {db tmp999=85;MYCOPY(dummy7_ac36)} // 0948:17b6
    {db tmp999=72;MYCOPY(dummy7_ac37)} // 0948:17b7
    {db tmp999=44;MYCOPY(dummy7_ac38)} // 0948:17b8
    {db tmp999=32;MYCOPY(dummy7_ac39)} // 0948:17b9
    {db tmp999=87;MYCOPY(dummy7_ac3a)} // 0948:17ba
    {db tmp999=69;MYCOPY(dummy7_ac3b)} // 0948:17bb
    {db tmp999=76;MYCOPY(dummy7_ac3c)} // 0948:17bc
    {db tmp999=76;MYCOPY(dummy7_ac3d)} // 0948:17bd
    {db tmp999=46;MYCOPY(dummy7_ac3e)} // 0948:17be
    {db tmp999=46;MYCOPY(dummy7_ac3f)} // 0948:17bf
    {db tmp999=46;MYCOPY(dummy7_ac40)} // 0948:17c0
    {db tmp999=12;MYCOPY(unk_19222)} // 0948:17c2
    {db tmp999=3;MYCOPY(dummy7_ac43)} // 0948:17c3
    {db tmp999=84;MYCOPY(dummy7_ac44)} // 0948:17c4
    {db tmp999=73;MYCOPY(dummy7_ac45)} // 0948:17c5
    {db tmp999=77;MYCOPY(dummy7_ac46)} // 0948:17c6
    {db tmp999=69;MYCOPY(dummy7_ac47)} // 0948:17c7
    {db tmp999=39;MYCOPY(dummy7_ac48)} // 0948:17c8
    {db tmp999=83;MYCOPY(dummy7_ac49)} // 0948:17c9
    {db tmp999=32;MYCOPY(dummy7_ac4a)} // 0948:17ca
    {db tmp999=85;MYCOPY(dummy7_ac4b)} // 0948:17cb
    {db tmp999=80;MYCOPY(dummy7_ac4c)} // 0948:17cc
    {db tmp999=46;MYCOPY(dummy7_ac4d)} // 0948:17cd
    {db tmp999=19;MYCOPY(unk_1922f)} // 0948:17cf
    {db tmp999=3;MYCOPY(dummy7_ac50)} // 0948:17d0
    {db tmp999=78;MYCOPY(dummy7_ac51)} // 0948:17d1
    {db tmp999=79;MYCOPY(dummy7_ac52)} // 0948:17d2
    {db tmp999=87;MYCOPY(dummy7_ac53)} // 0948:17d3
    {db tmp999=32;MYCOPY(dummy7_ac54)} // 0948:17d4
    {db tmp999=87;MYCOPY(dummy7_ac55)} // 0948:17d5
    {db tmp999=72;MYCOPY(dummy7_ac56)} // 0948:17d6
    {db tmp999=69;MYCOPY(dummy7_ac57)} // 0948:17d7
    {db tmp999=82;MYCOPY(dummy7_ac58)} // 0948:17d8
    {db tmp999=69;MYCOPY(dummy7_ac59)} // 0948:17d9
    {db tmp999=32;MYCOPY(dummy7_ac5a)} // 0948:17da
    {db tmp999=65;MYCOPY(dummy7_ac5b)} // 0948:17db
    {db tmp999=82;MYCOPY(dummy7_ac5c)} // 0948:17dc
    {db tmp999=69;MYCOPY(dummy7_ac5d)} // 0948:17dd
    {db tmp999=32;MYCOPY(dummy7_ac5e)} // 0948:17de
    {db tmp999=87;MYCOPY(dummy7_ac5f)} // 0948:17df
    {db tmp999=69;MYCOPY(dummy7_ac60)} // 0948:17e0
    {db tmp999=63;MYCOPY(dummy7_ac61)} // 0948:17e1
    {db tmp999=16;MYCOPY(unk_19243)} // 0948:17e3
    {db tmp999=4;MYCOPY(dummy7_ac64)} // 0948:17e4
    {db tmp999=76;MYCOPY(dummy7_ac65)} // 0948:17e5
    {db tmp999=79;MYCOPY(dummy7_ac66)} // 0948:17e6
    {db tmp999=79;MYCOPY(dummy7_ac67)} // 0948:17e7
    {db tmp999=75;MYCOPY(dummy7_ac68)} // 0948:17e8
    {db tmp999=83;MYCOPY(dummy7_ac69)} // 0948:17e9
    {db tmp999=32;MYCOPY(dummy7_ac6a)} // 0948:17ea
    {db tmp999=76;MYCOPY(dummy7_ac6b)} // 0948:17eb
    {db tmp999=73;MYCOPY(dummy7_ac6c)} // 0948:17ec
    {db tmp999=75;MYCOPY(dummy7_ac6d)} // 0948:17ed
    {db tmp999=69;MYCOPY(dummy7_ac6e)} // 0948:17ee
    {db tmp999=32;MYCOPY(dummy7_ac6f)} // 0948:17ef
    {db tmp999=84;MYCOPY(dummy7_ac70)} // 0948:17f0
    {db tmp999=72;MYCOPY(dummy7_ac71)} // 0948:17f1
    {db tmp999=69;MYCOPY(dummy7_ac72)} // 0948:17f2
    {db tmp999=13;MYCOPY(dummy7_ac73)} // 0948:17f3
    {db tmp999=68;MYCOPY(dummy7_ac74)} // 0948:17f4
    {db tmp999=69;MYCOPY(dummy7_ac75)} // 0948:17f5
    {db tmp999=83;MYCOPY(dummy7_ac76)} // 0948:17f6
    {db tmp999=69;MYCOPY(dummy7_ac77)} // 0948:17f7
    {db tmp999=82;MYCOPY(dummy7_ac78)} // 0948:17f8
    {db tmp999=84;MYCOPY(dummy7_ac79)} // 0948:17f9
    {db tmp999=46;MYCOPY(dummy7_ac7a)} // 0948:17fa
    {db tmp999=17;MYCOPY(unk_1925c)} // 0948:17fc
    {db tmp999=4;MYCOPY(dummy7_ac7d)} // 0948:17fd
    {db tmp999=73;MYCOPY(dummy7_ac7e)} // 0948:17fe
    {db tmp999=32;MYCOPY(dummy7_ac7f)} // 0948:17ff
    {db tmp999=67;MYCOPY(dummy7_ac80)} // 0948:1800
    {db tmp999=65;MYCOPY(dummy7_ac81)} // 0948:1801
    {db tmp999=78;MYCOPY(dummy7_ac82)} // 0948:1802
    {db tmp999=32;MYCOPY(dummy7_ac83)} // 0948:1803
    {db tmp999=83;MYCOPY(dummy7_ac84)} // 0948:1804
    {db tmp999=69;MYCOPY(dummy7_ac85)} // 0948:1805
    {db tmp999=69;MYCOPY(dummy7_ac86)} // 0948:1806
    {db tmp999=32;MYCOPY(dummy7_ac87)} // 0948:1807
    {db tmp999=84;MYCOPY(dummy7_ac88)} // 0948:1808
    {db tmp999=72;MYCOPY(dummy7_ac89)} // 0948:1809
    {db tmp999=65;MYCOPY(dummy7_ac8a)} // 0948:180a
    {db tmp999=84;MYCOPY(dummy7_ac8b)} // 0948:180b
    {db tmp999=44;MYCOPY(dummy7_ac8c)} // 0948:180c
    {db tmp999=13;MYCOPY(dummy7_ac8d)} // 0948:180d
    {db tmp999=83;MYCOPY(dummy7_ac8e)} // 0948:180e
    {db tmp999=72;MYCOPY(dummy7_ac8f)} // 0948:180f
    {db tmp999=69;MYCOPY(dummy7_ac90)} // 0948:1810
    {db tmp999=82;MYCOPY(dummy7_ac91)} // 0948:1811
    {db tmp999=76;MYCOPY(dummy7_ac92)} // 0948:1812
    {db tmp999=79;MYCOPY(dummy7_ac93)} // 0948:1813
    {db tmp999=67;MYCOPY(dummy7_ac94)} // 0948:1814
    {db tmp999=75;MYCOPY(dummy7_ac95)} // 0948:1815
    {db tmp999=46;MYCOPY(dummy7_ac96)} // 0948:1816
    {db tmp999=19;MYCOPY(unk_19278)} // 0948:1818
    {db tmp999=4;MYCOPY(dummy7_ac99)} // 0948:1819
    {db tmp999=73;MYCOPY(dummy7_ac9a)} // 0948:181a
    {db tmp999=32;MYCOPY(dummy7_ac9b)} // 0948:181b
    {db tmp999=84;MYCOPY(dummy7_ac9c)} // 0948:181c
    {db tmp999=72;MYCOPY(dummy7_ac9d)} // 0948:181d
    {db tmp999=73;MYCOPY(dummy7_ac9e)} // 0948:181e
    {db tmp999=78;MYCOPY(dummy7_ac9f)} // 0948:181f
    {db tmp999=75;MYCOPY(dummy7_aca0)} // 0948:1820
    {db tmp999=32;MYCOPY(dummy7_aca1)} // 0948:1821
    {db tmp999=73;MYCOPY(dummy7_aca2)} // 0948:1822
    {db tmp999=39;MYCOPY(dummy7_aca3)} // 0948:1823
    {db tmp999=77;MYCOPY(dummy7_aca4)} // 0948:1824
    {db tmp999=32;MYCOPY(dummy7_aca5)} // 0948:1825
    {db tmp999=71;MYCOPY(dummy7_aca6)} // 0948:1826
    {db tmp999=79;MYCOPY(dummy7_aca7)} // 0948:1827
    {db tmp999=73;MYCOPY(dummy7_aca8)} // 0948:1828
    {db tmp999=78;MYCOPY(dummy7_aca9)} // 0948:1829
    {db tmp999=71;MYCOPY(dummy7_acaa)} // 0948:182a
    {db tmp999=13;MYCOPY(dummy7_acab)} // 0948:182b
    {db tmp999=84;MYCOPY(dummy7_acac)} // 0948:182c
    {db tmp999=79;MYCOPY(dummy7_acad)} // 0948:182d
    {db tmp999=32;MYCOPY(dummy7_acae)} // 0948:182e
    {db tmp999=66;MYCOPY(dummy7_acaf)} // 0948:182f
    {db tmp999=69;MYCOPY(dummy7_acb0)} // 0948:1830
    {db tmp999=32;MYCOPY(dummy7_acb1)} // 0948:1831
    {db tmp999=83;MYCOPY(dummy7_acb2)} // 0948:1832
    {db tmp999=73;MYCOPY(dummy7_acb3)} // 0948:1833
    {db tmp999=67;MYCOPY(dummy7_acb4)} // 0948:1834
    {db tmp999=75;MYCOPY(dummy7_acb5)} // 0948:1835
    {db tmp999=46;MYCOPY(dummy7_acb6)} // 0948:1836
    {db tmp999=20;MYCOPY(unk_19298)} // 0948:1838
    {db tmp999[32]={4,66,79,89,32,84,72,69,83,69,32,77,79,78,83,84,69,82,83,13,65,82,69,32,71,69,84,84,73,78,71,32};MYCOPY(dummy7_acb9)} // 0948:1839
    {db tmp999=84;MYCOPY(dummy7_acd9)} // 0948:1859
    {db tmp999=79;MYCOPY(dummy7_acda)} // 0948:185a
    {db tmp999=85;MYCOPY(dummy7_acdb)} // 0948:185b
    {db tmp999=71;MYCOPY(dummy7_acdc)} // 0948:185c
    {db tmp999=72;MYCOPY(dummy7_acdd)} // 0948:185d
    {db tmp999=46;MYCOPY(dummy7_acde)} // 0948:185e
    {db tmp999=19;MYCOPY(unk_192c0)} // 0948:1860
    {db tmp999[32]={4,68,79,78,39,84,32,87,79,82,82,89,32,71,85,89,83,44,13,73,39,76,76,32,80,82,79,84,69,67,84,32};MYCOPY(dummy7_ace1)} // 0948:1861
    {db tmp999=89;MYCOPY(dummy7_ad01)} // 0948:1881
    {db tmp999=79;MYCOPY(dummy7_ad02)} // 0948:1882
    {db tmp999=85;MYCOPY(dummy7_ad03)} // 0948:1883
    {db tmp999=46;MYCOPY(dummy7_ad04)} // 0948:1884
    {db tmp999=17;MYCOPY(unk_192e6)} // 0948:1886
    {db tmp999=3;MYCOPY(dummy7_ad07)} // 0948:1887
    {db tmp999=87;MYCOPY(dummy7_ad08)} // 0948:1888
    {db tmp999=69;MYCOPY(dummy7_ad09)} // 0948:1889
    {db tmp999=39;MYCOPY(dummy7_ad0a)} // 0948:188a
    {db tmp999=82;MYCOPY(dummy7_ad0b)} // 0948:188b
    {db tmp999=69;MYCOPY(dummy7_ad0c)} // 0948:188c
    {db tmp999=32;MYCOPY(dummy7_ad0d)} // 0948:188d
    {db tmp999=68;MYCOPY(dummy7_ad0e)} // 0948:188e
    {db tmp999=79;MYCOPY(dummy7_ad0f)} // 0948:188f
    {db tmp999=79;MYCOPY(dummy7_ad10)} // 0948:1890
    {db tmp999=77;MYCOPY(dummy7_ad11)} // 0948:1891
    {db tmp999=69;MYCOPY(dummy7_ad12)} // 0948:1892
    {db tmp999=68;MYCOPY(dummy7_ad13)} // 0948:1893
    {db tmp999=46;MYCOPY(dummy7_ad14)} // 0948:1894
    {db tmp999=46;MYCOPY(dummy7_ad15)} // 0948:1895
    {db tmp999=46;MYCOPY(dummy7_ad16)} // 0948:1896
    {db tmp999=16;MYCOPY(unk_192f8)} // 0948:1898
    {db tmp999=3;MYCOPY(dummy7_ad19)} // 0948:1899
    {db tmp999=71;MYCOPY(dummy7_ad1a)} // 0948:189a
    {db tmp999=65;MYCOPY(dummy7_ad1b)} // 0948:189b
    {db tmp999=77;MYCOPY(dummy7_ad1c)} // 0948:189c
    {db tmp999=69;MYCOPY(dummy7_ad1d)} // 0948:189d
    {db tmp999=32;MYCOPY(dummy7_ad1e)} // 0948:189e
    {db tmp999=79;MYCOPY(dummy7_ad1f)} // 0948:189f
    {db tmp999=86;MYCOPY(dummy7_ad20)} // 0948:18a0
    {db tmp999=69;MYCOPY(dummy7_ad21)} // 0948:18a1
    {db tmp999=82;MYCOPY(dummy7_ad22)} // 0948:18a2
    {db tmp999=32;MYCOPY(dummy7_ad23)} // 0948:18a3
    {db tmp999=77;MYCOPY(dummy7_ad24)} // 0948:18a4
    {db tmp999=65;MYCOPY(dummy7_ad25)} // 0948:18a5
    {db tmp999=78;MYCOPY(dummy7_ad26)} // 0948:18a6
    {db tmp999=33;MYCOPY(dummy7_ad27)} // 0948:18a7
    {db tmp999=20;MYCOPY(unk_19309)} // 0948:18a9
    {db tmp999[32]={4,87,72,65,84,32,73,83,32,73,84,32,87,73,84,72,13,84,72,69,83,69,32,69,71,89,80,84,73,65,78,83};MYCOPY(dummy7_ad2a)} // 0948:18aa
    {db tmp999=46;MYCOPY(dummy7_ad4a)} // 0948:18ca
    {db tmp999=46;MYCOPY(dummy7_ad4b)} // 0948:18cb
    {db tmp999=46;MYCOPY(dummy7_ad4c)} // 0948:18cc
    {db tmp999=17;MYCOPY(unk_1932e)} // 0948:18ce
    {db tmp999[32]={4,84,72,69,73,82,32,84,79,77,66,83,32,65,82,69,13,70,85,76,76,32,79,70,32,84,82,65,80,83,46,0};MYCOPY(dummy7_ad4f)} // 0948:18cf
    {db tmp999=17;MYCOPY(unk_1934f)} // 0948:18ef
    {db tmp999[32]={5,87,72,89,32,67,65,78,39,84,32,84,72,69,89,13,74,85,83,84,32,75,69,69,80,32,84,72,69,73,82,13};MYCOPY(dummy7_ad70)} // 0948:18f0
    {db tmp999=66;MYCOPY(dummy7_ad90)} // 0948:1910
    {db tmp999=73;MYCOPY(dummy7_ad91)} // 0948:1911
    {db tmp999=71;MYCOPY(dummy7_ad92)} // 0948:1912
    {db tmp999=32;MYCOPY(dummy7_ad93)} // 0948:1913
    {db tmp999=84;MYCOPY(dummy7_ad94)} // 0948:1914
    {db tmp999=82;MYCOPY(dummy7_ad95)} // 0948:1915
    {db tmp999=65;MYCOPY(dummy7_ad96)} // 0948:1916
    {db tmp999=80;MYCOPY(dummy7_ad97)} // 0948:1917
    {db tmp999=83;MYCOPY(dummy7_ad98)} // 0948:1918
    {db tmp999=32;MYCOPY(dummy7_ad99)} // 0948:1919
    {db tmp999=83;MYCOPY(dummy7_ad9a)} // 0948:191a
    {db tmp999=72;MYCOPY(dummy7_ad9b)} // 0948:191b
    {db tmp999=85;MYCOPY(dummy7_ad9c)} // 0948:191c
    {db tmp999=84;MYCOPY(dummy7_ad9d)} // 0948:191d
    {db tmp999=33;MYCOPY(dummy7_ad9e)} // 0948:191e
    {db tmp999=21;MYCOPY(unk_19380)} // 0948:1920
    {db tmp999[32]={4,73,32,87,79,78,68,69,82,32,73,70,32,84,72,73,83,13,73,83,32,75,73,78,71,32,84,85,84,39,83,32};MYCOPY(dummy7_ada1)} // 0948:1921
    {db tmp999=84;MYCOPY(dummy7_adc1)} // 0948:1941
    {db tmp999=79;MYCOPY(dummy7_adc2)} // 0948:1942
    {db tmp999=77;MYCOPY(dummy7_adc3)} // 0948:1943
    {db tmp999=66;MYCOPY(dummy7_adc4)} // 0948:1944
    {db tmp999=46;MYCOPY(dummy7_adc5)} // 0948:1945
    {db tmp999=17;MYCOPY(unk_193a7)} // 0948:1947
    {db tmp999=3;MYCOPY(dummy7_adc8)} // 0948:1948
    {db tmp999=87;MYCOPY(dummy7_adc9)} // 0948:1949
    {db tmp999=72;MYCOPY(dummy7_adca)} // 0948:194a
    {db tmp999=79;MYCOPY(dummy7_adcb)} // 0948:194b
    {db tmp999=39;MYCOPY(dummy7_adcc)} // 0948:194c
    {db tmp999=83;MYCOPY(dummy7_adcd)} // 0948:194d
    {db tmp999=32;MYCOPY(dummy7_adce)} // 0948:194e
    {db tmp999=75;MYCOPY(dummy7_adcf)} // 0948:194f
    {db tmp999=73;MYCOPY(dummy7_add0)} // 0948:1950
    {db tmp999=78;MYCOPY(dummy7_add1)} // 0948:1951
    {db tmp999=71;MYCOPY(dummy7_add2)} // 0948:1952
    {db tmp999=32;MYCOPY(dummy7_add3)} // 0948:1953
    {db tmp999=84;MYCOPY(dummy7_add4)} // 0948:1954
    {db tmp999=85;MYCOPY(dummy7_add5)} // 0948:1955
    {db tmp999=84;MYCOPY(dummy7_add6)} // 0948:1956
    {db tmp999=63;MYCOPY(dummy7_add7)} // 0948:1957
    {db tmp999=16;MYCOPY(unk_193b9)} // 0948:1959
    {db tmp999[32]={5,83,79,77,69,32,71,85,89,32,83,84,69,86,69,13,77,65,82,84,73,78,32,87,82,79,84,69,13,65,32,83};MYCOPY(dummy7_adda)} // 0948:195a
    {db tmp999=79;MYCOPY(dummy7_adfa)} // 0948:197a
    {db tmp999=78;MYCOPY(dummy7_adfb)} // 0948:197b
    {db tmp999=71;MYCOPY(dummy7_adfc)} // 0948:197c
    {db tmp999=32;MYCOPY(dummy7_adfd)} // 0948:197d
    {db tmp999=65;MYCOPY(dummy7_adfe)} // 0948:197e
    {db tmp999=66;MYCOPY(dummy7_adff)} // 0948:197f
    {db tmp999=79;MYCOPY(dummy7_ae00)} // 0948:1980
    {db tmp999=85;MYCOPY(dummy7_ae01)} // 0948:1981
    {db tmp999=84;MYCOPY(dummy7_ae02)} // 0948:1982
    {db tmp999=46;MYCOPY(dummy7_ae03)} // 0948:1983
    {db tmp999=19;MYCOPY(unk_193e5)} // 0948:1985
    {db tmp999=3;MYCOPY(dummy7_ae06)} // 0948:1986
    {db tmp999=79;MYCOPY(dummy7_ae07)} // 0948:1987
    {db tmp999=72;MYCOPY(dummy7_ae08)} // 0948:1988
    {db tmp999=44;MYCOPY(dummy7_ae09)} // 0948:1989
    {db tmp999=32;MYCOPY(dummy7_ae0a)} // 0948:198a
    {db tmp999=84;MYCOPY(dummy7_ae0b)} // 0948:198b
    {db tmp999=72;MYCOPY(dummy7_ae0c)} // 0948:198c
    {db tmp999=65;MYCOPY(dummy7_ae0d)} // 0948:198d
    {db tmp999=84;MYCOPY(dummy7_ae0e)} // 0948:198e
    {db tmp999=39;MYCOPY(dummy7_ae0f)} // 0948:198f
    {db tmp999=83;MYCOPY(dummy7_ae10)} // 0948:1990
    {db tmp999=32;MYCOPY(dummy7_ae11)} // 0948:1991
    {db tmp999=82;MYCOPY(dummy7_ae12)} // 0948:1992
    {db tmp999=73;MYCOPY(dummy7_ae13)} // 0948:1993
    {db tmp999=71;MYCOPY(dummy7_ae14)} // 0948:1994
    {db tmp999=72;MYCOPY(dummy7_ae15)} // 0948:1995
    {db tmp999=84;MYCOPY(dummy7_ae16)} // 0948:1996
    {db tmp999=46;MYCOPY(dummy7_ae17)} // 0948:1997
    {db tmp999=18;MYCOPY(unk_193f9)} // 0948:1999
    {db tmp999=3;MYCOPY(dummy7_ae1a)} // 0948:199a
    {db tmp999=71;MYCOPY(dummy7_ae1b)} // 0948:199b
    {db tmp999=82;MYCOPY(dummy7_ae1c)} // 0948:199c
    {db tmp999=69;MYCOPY(dummy7_ae1d)} // 0948:199d
    {db tmp999=65;MYCOPY(dummy7_ae1e)} // 0948:199e
    {db tmp999=84;MYCOPY(dummy7_ae1f)} // 0948:199f
    {db tmp999=32;MYCOPY(dummy7_ae20)} // 0948:19a0
    {db tmp999=87;MYCOPY(dummy7_ae21)} // 0948:19a1
    {db tmp999=79;MYCOPY(dummy7_ae22)} // 0948:19a2
    {db tmp999=82;MYCOPY(dummy7_ae23)} // 0948:19a3
    {db tmp999=75;MYCOPY(dummy7_ae24)} // 0948:19a4
    {db tmp999=32;MYCOPY(dummy7_ae25)} // 0948:19a5
    {db tmp999=71;MYCOPY(dummy7_ae26)} // 0948:19a6
    {db tmp999=85;MYCOPY(dummy7_ae27)} // 0948:19a7
    {db tmp999=89;MYCOPY(dummy7_ae28)} // 0948:19a8
    {db tmp999=83;MYCOPY(dummy7_ae29)} // 0948:19a9
    {db tmp999=46;MYCOPY(dummy7_ae2a)} // 0948:19aa
    {db tmp999=22;MYCOPY(unk_1940c)} // 0948:19ac
    {db tmp999=3;MYCOPY(dummy7_ae2d)} // 0948:19ad
    {db tmp999=89;MYCOPY(dummy7_ae2e)} // 0948:19ae
    {db tmp999=69;MYCOPY(dummy7_ae2f)} // 0948:19af
    {db tmp999=65;MYCOPY(dummy7_ae30)} // 0948:19b0
    {db tmp999=72;MYCOPY(dummy7_ae31)} // 0948:19b1
    {db tmp999=44;MYCOPY(dummy7_ae32)} // 0948:19b2
    {db tmp999=32;MYCOPY(dummy7_ae33)} // 0948:19b3
    {db tmp999=87;MYCOPY(dummy7_ae34)} // 0948:19b4
    {db tmp999=72;MYCOPY(dummy7_ae35)} // 0948:19b5
    {db tmp999=65;MYCOPY(dummy7_ae36)} // 0948:19b6
    {db tmp999=84;MYCOPY(dummy7_ae37)} // 0948:19b7
    {db tmp999=32;MYCOPY(dummy7_ae38)} // 0948:19b8
    {db tmp999=84;MYCOPY(dummy7_ae39)} // 0948:19b9
    {db tmp999=69;MYCOPY(dummy7_ae3a)} // 0948:19ba
    {db tmp999=65;MYCOPY(dummy7_ae3b)} // 0948:19bb
    {db tmp999=77;MYCOPY(dummy7_ae3c)} // 0948:19bc
    {db tmp999=87;MYCOPY(dummy7_ae3d)} // 0948:19bd
    {db tmp999=79;MYCOPY(dummy7_ae3e)} // 0948:19be
    {db tmp999=82;MYCOPY(dummy7_ae3f)} // 0948:19bf
    {db tmp999=75;MYCOPY(dummy7_ae40)} // 0948:19c0
    {db tmp999=33;MYCOPY(dummy7_ae41)} // 0948:19c1
    {db tmp999=18;MYCOPY(unk_19423)} // 0948:19c3
    {db tmp999[32]={5,77,65,89,66,69,32,87,69,39,76,76,32,71,69,84,13,67,65,76,76,69,68,32,85,80,32,84,79,32,84,72};MYCOPY(dummy7_ae44)} // 0948:19c4
    {db tmp999=69;MYCOPY(dummy7_ae64)} // 0948:19e4
    {db tmp999=13;MYCOPY(dummy7_ae65)} // 0948:19e5
    {db tmp999=77;MYCOPY(dummy7_ae66)} // 0948:19e6
    {db tmp999=65;MYCOPY(dummy7_ae67)} // 0948:19e7
    {db tmp999=74;MYCOPY(dummy7_ae68)} // 0948:19e8
    {db tmp999=79;MYCOPY(dummy7_ae69)} // 0948:19e9
    {db tmp999=82;MYCOPY(dummy7_ae6a)} // 0948:19ea
    {db tmp999=83;MYCOPY(dummy7_ae6b)} // 0948:19eb
    {db tmp999=46;MYCOPY(dummy7_ae6c)} // 0948:19ec
    {db tmp999=46;MYCOPY(dummy7_ae6d)} // 0948:19ed
    {db tmp999=46;MYCOPY(dummy7_ae6e)} // 0948:19ee
    {db tmp999=16;MYCOPY(unk_19450)} // 0948:19f0
    {db tmp999=4;MYCOPY(dummy7_ae71)} // 0948:19f1
    {db tmp999=68;MYCOPY(dummy7_ae72)} // 0948:19f2
    {db tmp999=69;MYCOPY(dummy7_ae73)} // 0948:19f3
    {db tmp999=67;MYCOPY(dummy7_ae74)} // 0948:19f4
    {db tmp999=69;MYCOPY(dummy7_ae75)} // 0948:19f5
    {db tmp999=78;MYCOPY(dummy7_ae76)} // 0948:19f6
    {db tmp999=84;MYCOPY(dummy7_ae77)} // 0948:19f7
    {db tmp999=32;MYCOPY(dummy7_ae78)} // 0948:19f8
    {db tmp999=70;MYCOPY(dummy7_ae79)} // 0948:19f9
    {db tmp999=76;MYCOPY(dummy7_ae7a)} // 0948:19fa
    {db tmp999=89;MYCOPY(dummy7_ae7b)} // 0948:19fb
    {db tmp999=73;MYCOPY(dummy7_ae7c)} // 0948:19fc
    {db tmp999=78;MYCOPY(dummy7_ae7d)} // 0948:19fd
    {db tmp999=71;MYCOPY(dummy7_ae7e)} // 0948:19fe
    {db tmp999=44;MYCOPY(dummy7_ae7f)} // 0948:19ff
    {db tmp999=13;MYCOPY(dummy7_ae80)} // 0948:1a00
    {db tmp999=79;MYCOPY(dummy7_ae81)} // 0948:1a01
    {db tmp999=76;MYCOPY(dummy7_ae82)} // 0948:1a02
    {db tmp999=65;MYCOPY(dummy7_ae83)} // 0948:1a03
    {db tmp999=70;MYCOPY(dummy7_ae84)} // 0948:1a04
    {db tmp999=46;MYCOPY(dummy7_ae85)} // 0948:1a05
    {db tmp999=17;MYCOPY(unk_19467)} // 0948:1a07
    {db tmp999=4;MYCOPY(dummy7_ae88)} // 0948:1a08
    {dw tmp999=21063;MYCOPY(dummy7_ae89)} // 0948:1a09
    {db tmp999=69;MYCOPY(dummy7_ae8b)} // 0948:1a0b
    {char tmp999[21]="AT FIGHTING,\rBALEOG.";MYCOPY(aatfightingbale)} // 0948:1a0c
    {db tmp999=20;MYCOPY(unk_19481)} // 0948:1a21
    {db tmp999[32]={5,89,69,65,72,44,32,65,78,68,32,78,79,13,79,78,69,32,77,65,68,69,32,65,78,89,13,68,85,77,66,32};MYCOPY(dummy7_aea2)} // 0948:1a22
    {db tmp999=77;MYCOPY(dummy7_aec2)} // 0948:1a42
    {db tmp999=85;MYCOPY(dummy7_aec3)} // 0948:1a43
    {db tmp999=77;MYCOPY(dummy7_aec4)} // 0948:1a44
    {db tmp999=77;MYCOPY(dummy7_aec5)} // 0948:1a45
    {db tmp999=89;MYCOPY(dummy7_aec6)} // 0948:1a46
    {db tmp999=32;MYCOPY(dummy7_aec7)} // 0948:1a47
    {db tmp999=74;MYCOPY(dummy7_aec8)} // 0948:1a48
    {db tmp999=79;MYCOPY(dummy7_aec9)} // 0948:1a49
    {db tmp999=75;MYCOPY(dummy7_aeca)} // 0948:1a4a
    {db tmp999=69;MYCOPY(dummy7_aecb)} // 0948:1a4b
    {db tmp999=83;MYCOPY(dummy7_aecc)} // 0948:1a4c
    {db tmp999=33;MYCOPY(dummy7_aecd)} // 0948:1a4d
    {db tmp999=20;MYCOPY(unk_194af)} // 0948:1a4f
    {db tmp999[32]={5,87,69,76,76,44,32,87,72,69,82,69,32,68,79,32,89,79,85,13,84,72,73,78,75,32,87,69,39,76,76,32};MYCOPY(dummy7_aed0)} // 0948:1a50
    {db tmp999=69;MYCOPY(dummy7_aef0)} // 0948:1a70
    {db tmp999=78;MYCOPY(dummy7_aef1)} // 0948:1a71
    {db tmp999=68;MYCOPY(dummy7_aef2)} // 0948:1a72
    {db tmp999=32;MYCOPY(dummy7_aef3)} // 0948:1a73
    {db tmp999=85;MYCOPY(dummy7_aef4)} // 0948:1a74
    {db tmp999=80;MYCOPY(dummy7_aef5)} // 0948:1a75
    {db tmp999=13;MYCOPY(dummy7_aef6)} // 0948:1a76
    {db tmp999=84;MYCOPY(dummy7_aef7)} // 0948:1a77
    {db tmp999=72;MYCOPY(dummy7_aef8)} // 0948:1a78
    {db tmp999=73;MYCOPY(dummy7_aef9)} // 0948:1a79
    {db tmp999=83;MYCOPY(dummy7_aefa)} // 0948:1a7a
    {db tmp999=32;MYCOPY(dummy7_aefb)} // 0948:1a7b
    {db tmp999=84;MYCOPY(dummy7_aefc)} // 0948:1a7c
    {db tmp999=73;MYCOPY(dummy7_aefd)} // 0948:1a7d
    {db tmp999=77;MYCOPY(dummy7_aefe)} // 0948:1a7e
    {db tmp999=69;MYCOPY(dummy7_aeff)} // 0948:1a7f
    {db tmp999=63;MYCOPY(dummy7_af00)} // 0948:1a80
    {db tmp999=15;MYCOPY(unk_194e2)} // 0948:1a82
    {db tmp999[32]={5,79,72,44,32,83,79,77,69,87,72,69,82,69,13,83,85,82,82,79,85,78,68,69,68,32,66,89,13,77,79,78};MYCOPY(dummy7_af03)} // 0948:1a83
    {db tmp999=83;MYCOPY(dummy7_af23)} // 0948:1aa3
    {db tmp999=84;MYCOPY(dummy7_af24)} // 0948:1aa4
    {db tmp999=69;MYCOPY(dummy7_af25)} // 0948:1aa5
    {db tmp999=82;MYCOPY(dummy7_af26)} // 0948:1aa6
    {db tmp999=83;MYCOPY(dummy7_af27)} // 0948:1aa7
    {db tmp999=46;MYCOPY(dummy7_af28)} // 0948:1aa8
    {db tmp999=46;MYCOPY(dummy7_af29)} // 0948:1aa9
    {db tmp999=46;MYCOPY(dummy7_af2a)} // 0948:1aaa
    {db tmp999=22;MYCOPY(unk_1950c)} // 0948:1aac
    {db tmp999[32]={4,87,73,84,72,32,78,65,83,84,89,32,84,82,65,80,83,13,69,86,69,82,89,32,87,72,69,82,69,32,87,69};MYCOPY(dummy7_af2d)} // 0948:1aad
    {db tmp999=32;MYCOPY(dummy7_af4d)} // 0948:1acd
    {db tmp999=84;MYCOPY(dummy7_af4e)} // 0948:1ace
    {db tmp999=85;MYCOPY(dummy7_af4f)} // 0948:1acf
    {db tmp999=82;MYCOPY(dummy7_af50)} // 0948:1ad0
    {db tmp999=78;MYCOPY(dummy7_af51)} // 0948:1ad1
    {db tmp999=46;MYCOPY(dummy7_af52)} // 0948:1ad2
    {db tmp999=18;MYCOPY(unk_19534)} // 0948:1ad4
    {db tmp999=4;MYCOPY(dummy7_af55)} // 0948:1ad5
    {db tmp999=89;MYCOPY(dummy7_af56)} // 0948:1ad6
    {db tmp999=69;MYCOPY(dummy7_af57)} // 0948:1ad7
    {db tmp999=80;MYCOPY(dummy7_af58)} // 0948:1ad8
    {db tmp999=44;MYCOPY(dummy7_af59)} // 0948:1ad9
    {db tmp999=32;MYCOPY(dummy7_af5a)} // 0948:1ada
    {db tmp999=84;MYCOPY(dummy7_af5b)} // 0948:1adb
    {db tmp999=72;MYCOPY(dummy7_af5c)} // 0948:1adc
    {db tmp999=65;MYCOPY(dummy7_af5d)} // 0948:1add
    {db tmp999=84;MYCOPY(dummy7_af5e)} // 0948:1ade
    {db tmp999=32;MYCOPY(dummy7_af5f)} // 0948:1adf
    {db tmp999=83;MYCOPY(dummy7_af60)} // 0948:1ae0
    {db tmp999=79;MYCOPY(dummy7_af61)} // 0948:1ae1
    {db tmp999=85;MYCOPY(dummy7_af62)} // 0948:1ae2
    {db tmp999=78;MYCOPY(dummy7_af63)} // 0948:1ae3
    {db tmp999=68;MYCOPY(dummy7_af64)} // 0948:1ae4
    {db tmp999=83;MYCOPY(dummy7_af65)} // 0948:1ae5
    {db tmp999=13;MYCOPY(dummy7_af66)} // 0948:1ae6
    {db tmp999=65;MYCOPY(dummy7_af67)} // 0948:1ae7
    {db tmp999=66;MYCOPY(dummy7_af68)} // 0948:1ae8
    {db tmp999=79;MYCOPY(dummy7_af69)} // 0948:1ae9
    {db tmp999=85;MYCOPY(dummy7_af6a)} // 0948:1aea
    {db tmp999=84;MYCOPY(dummy7_af6b)} // 0948:1aeb
    {db tmp999=32;MYCOPY(dummy7_af6c)} // 0948:1aec
    {db tmp999=82;MYCOPY(dummy7_af6d)} // 0948:1aed
    {db tmp999=73;MYCOPY(dummy7_af6e)} // 0948:1aee
    {db tmp999=71;MYCOPY(dummy7_af6f)} // 0948:1aef
    {db tmp999=72;MYCOPY(dummy7_af70)} // 0948:1af0
    {db tmp999=84;MYCOPY(dummy7_af71)} // 0948:1af1
    {db tmp999=46;MYCOPY(dummy7_af72)} // 0948:1af2
    {db tmp999=20;MYCOPY(unk_19554)} // 0948:1af4
    {db tmp999[32]={4,87,72,65,84,32,68,79,32,89,79,85,32,84,72,73,78,75,13,84,72,79,83,69,32,80,79,85,78,68,69,82};MYCOPY(dummy7_af75)} // 0948:1af5
    {db tmp999=83;MYCOPY(dummy7_af95)} // 0948:1b15
    {db tmp999=32;MYCOPY(dummy7_af96)} // 0948:1b16
    {db tmp999=68;MYCOPY(dummy7_af97)} // 0948:1b17
    {db tmp999=79;MYCOPY(dummy7_af98)} // 0948:1b18
    {db tmp999=63;MYCOPY(dummy7_af99)} // 0948:1b19
    {db tmp999=21;MYCOPY(unk_1957b)} // 0948:1b1b
    {db tmp999[32]={5,83,77,65,83,72,32,66,73,71,32,70,65,84,13,86,73,75,73,78,71,83,32,73,78,84,79,32,76,73,84,84};MYCOPY(dummy7_af9c)} // 0948:1b1c
    {db tmp999=76;MYCOPY(dummy7_afbc)} // 0948:1b3c
    {db tmp999=69;MYCOPY(dummy7_afbd)} // 0948:1b3d
    {db tmp999=13;MYCOPY(dummy7_afbe)} // 0948:1b3e
    {db tmp999=70;MYCOPY(dummy7_afbf)} // 0948:1b3f
    {db tmp999=76;MYCOPY(dummy7_afc0)} // 0948:1b40
    {db tmp999=65;MYCOPY(dummy7_afc1)} // 0948:1b41
    {db tmp999=84;MYCOPY(dummy7_afc2)} // 0948:1b42
    {db tmp999=32;MYCOPY(dummy7_afc3)} // 0948:1b43
    {db tmp999=86;MYCOPY(dummy7_afc4)} // 0948:1b44
    {db tmp999=73;MYCOPY(dummy7_afc5)} // 0948:1b45
    {db tmp999=75;MYCOPY(dummy7_afc6)} // 0948:1b46
    {db tmp999=73;MYCOPY(dummy7_afc7)} // 0948:1b47
    {db tmp999=78;MYCOPY(dummy7_afc8)} // 0948:1b48
    {db tmp999=71;MYCOPY(dummy7_afc9)} // 0948:1b49
    {db tmp999=83;MYCOPY(dummy7_afca)} // 0948:1b4a
    {db tmp999=63;MYCOPY(dummy7_afcb)} // 0948:1b4b
    {db tmp999=18;MYCOPY(unk_195ad)} // 0948:1b4d
    {db tmp999=4;MYCOPY(dummy7_afce)} // 0948:1b4e
    {db tmp999=76;MYCOPY(dummy7_afcf)} // 0948:1b4f
    {db tmp999=69;MYCOPY(dummy7_afd0)} // 0948:1b50
    {db tmp999=84;MYCOPY(dummy7_afd1)} // 0948:1b51
    {db tmp999=39;MYCOPY(dummy7_afd2)} // 0948:1b52
    {db tmp999=83;MYCOPY(dummy7_afd3)} // 0948:1b53
    {db tmp999=32;MYCOPY(dummy7_afd4)} // 0948:1b54
    {db tmp999=84;MYCOPY(dummy7_afd5)} // 0948:1b55
    {db tmp999=82;MYCOPY(dummy7_afd6)} // 0948:1b56
    {db tmp999=89;MYCOPY(dummy7_afd7)} // 0948:1b57
    {db tmp999=32;MYCOPY(dummy7_afd8)} // 0948:1b58
    {db tmp999=78;MYCOPY(dummy7_afd9)} // 0948:1b59
    {db tmp999=79;MYCOPY(dummy7_afda)} // 0948:1b5a
    {db tmp999=84;MYCOPY(dummy7_afdb)} // 0948:1b5b
    {db tmp999=32;MYCOPY(dummy7_afdc)} // 0948:1b5c
    {db tmp999=84;MYCOPY(dummy7_afdd)} // 0948:1b5d
    {db tmp999=79;MYCOPY(dummy7_afde)} // 0948:1b5e
    {db tmp999=13;MYCOPY(dummy7_afdf)} // 0948:1b5f
    {db tmp999=70;MYCOPY(dummy7_afe0)} // 0948:1b60
    {db tmp999=73;MYCOPY(dummy7_afe1)} // 0948:1b61
    {db tmp999=78;MYCOPY(dummy7_afe2)} // 0948:1b62
    {db tmp999=68;MYCOPY(dummy7_afe3)} // 0948:1b63
    {db tmp999=32;MYCOPY(dummy7_afe4)} // 0948:1b64
    {db tmp999=79;MYCOPY(dummy7_afe5)} // 0948:1b65
    {db tmp999=85;MYCOPY(dummy7_afe6)} // 0948:1b66
    {db tmp999=84;MYCOPY(dummy7_afe7)} // 0948:1b67
    {db tmp999=46;MYCOPY(dummy7_afe8)} // 0948:1b68
    {db tmp999=46;MYCOPY(dummy7_afe9)} // 0948:1b69
    {db tmp999=46;MYCOPY(dummy7_afea)} // 0948:1b6a
    {db tmp999=15;MYCOPY(unk_195cc)} // 0948:1b6c
    {db tmp999[32]={5,69,82,73,75,44,32,87,72,89,32,65,82,69,13,89,79,85,32,65,76,87,65,89,83,32,73,78,13,83,85,67};MYCOPY(dummy7_afed)} // 0948:1b6d
    {db tmp999=72;MYCOPY(dummy7_b00d)} // 0948:1b8d
    {db tmp999=32;MYCOPY(dummy7_b00e)} // 0948:1b8e
    {db tmp999=65;MYCOPY(dummy7_b00f)} // 0948:1b8f
    {db tmp999=32;MYCOPY(dummy7_b010)} // 0948:1b90
    {db tmp999=72;MYCOPY(dummy7_b011)} // 0948:1b91
    {db tmp999=85;MYCOPY(dummy7_b012)} // 0948:1b92
    {db tmp999=82;MYCOPY(dummy7_b013)} // 0948:1b93
    {db tmp999=82;MYCOPY(dummy7_b014)} // 0948:1b94
    {db tmp999=89;MYCOPY(dummy7_b015)} // 0948:1b95
    {db tmp999=63;MYCOPY(dummy7_b016)} // 0948:1b96
    {db tmp999=16;MYCOPY(unk_195f8)} // 0948:1b98
    {db tmp999[32]={5,89,79,85,32,78,69,69,68,32,84,79,13,82,69,76,65,88,32,65,32,76,73,84,84,76,69,13,83,79,77,69};MYCOPY(dummy7_b019)} // 0948:1b99
    {db tmp999=84;MYCOPY(dummy7_b039)} // 0948:1bb9
    {db tmp999=73;MYCOPY(dummy7_b03a)} // 0948:1bba
    {db tmp999=77;MYCOPY(dummy7_b03b)} // 0948:1bbb
    {db tmp999=69;MYCOPY(dummy7_b03c)} // 0948:1bbc
    {db tmp999=83;MYCOPY(dummy7_b03d)} // 0948:1bbd
    {db tmp999=46;MYCOPY(dummy7_b03e)} // 0948:1bbe
    {db tmp999=17;MYCOPY(unk_19620)} // 0948:1bc0
    {db tmp999[32]={6,77,89,32,70,65,84,72,69,82,32,87,65,83,32,65,13,82,85,78,78,69,82,32,65,78,68,32,83,79,13,87};MYCOPY(dummy7_b041)} // 0948:1bc1
    {db tmp999=65;MYCOPY(dummy7_b061)} // 0948:1be1
    {db tmp999=83;MYCOPY(dummy7_b062)} // 0948:1be2
    {db tmp999=32;MYCOPY(dummy7_b063)} // 0948:1be3
    {db tmp999=72;MYCOPY(dummy7_b064)} // 0948:1be4
    {db tmp999=73;MYCOPY(dummy7_b065)} // 0948:1be5
    {db tmp999=83;MYCOPY(dummy7_b066)} // 0948:1be6
    {db tmp999=32;MYCOPY(dummy7_b067)} // 0948:1be7
    {db tmp999=70;MYCOPY(dummy7_b068)} // 0948:1be8
    {db tmp999=65;MYCOPY(dummy7_b069)} // 0948:1be9
    {db tmp999=84;MYCOPY(dummy7_b06a)} // 0948:1bea
    {db tmp999=72;MYCOPY(dummy7_b06b)} // 0948:1beb
    {db tmp999=69;MYCOPY(dummy7_b06c)} // 0948:1bec
    {db tmp999=82;MYCOPY(dummy7_b06d)} // 0948:1bed
    {db tmp999=13;MYCOPY(dummy7_b06e)} // 0948:1bee
    {db tmp999=66;MYCOPY(dummy7_b06f)} // 0948:1bef
    {db tmp999=69;MYCOPY(dummy7_b070)} // 0948:1bf0
    {db tmp999=70;MYCOPY(dummy7_b071)} // 0948:1bf1
    {db tmp999=79;MYCOPY(dummy7_b072)} // 0948:1bf2
    {db tmp999=82;MYCOPY(dummy7_b073)} // 0948:1bf3
    {db tmp999=69;MYCOPY(dummy7_b074)} // 0948:1bf4
    {db tmp999=32;MYCOPY(dummy7_b075)} // 0948:1bf5
    {db tmp999=72;MYCOPY(dummy7_b076)} // 0948:1bf6
    {db tmp999=73;MYCOPY(dummy7_b077)} // 0948:1bf7
    {db tmp999=77;MYCOPY(dummy7_b078)} // 0948:1bf8
    {db tmp999=46;MYCOPY(dummy7_b079)} // 0948:1bf9
    {db tmp999=17;MYCOPY(unk_1965b)} // 0948:1bfb
    {db tmp999[32]={5,73,32,71,85,69,83,83,32,89,79,85,13,67,79,85,76,68,32,83,65,89,32,73,32,87,65,83,13,66,79,82};MYCOPY(dummy7_b07c)} // 0948:1bfc
    {db tmp999=78;MYCOPY(dummy7_b09c)} // 0948:1c1c
    {db tmp999=32;MYCOPY(dummy7_b09d)} // 0948:1c1d
    {db tmp999=84;MYCOPY(dummy7_b09e)} // 0948:1c1e
    {db tmp999=79;MYCOPY(dummy7_b09f)} // 0948:1c1f
    {db tmp999=32;MYCOPY(dummy7_b0a0)} // 0948:1c20
    {db tmp999=82;MYCOPY(dummy7_b0a1)} // 0948:1c21
    {db tmp999=85;MYCOPY(dummy7_b0a2)} // 0948:1c22
    {db tmp999=78;MYCOPY(dummy7_b0a3)} // 0948:1c23
    {db tmp999=46;MYCOPY(dummy7_b0a4)} // 0948:1c24
    {db tmp999=15;MYCOPY(unk_19686)} // 0948:1c26
    {db tmp999=4;MYCOPY(dummy7_b0a7)} // 0948:1c27
    {db tmp999=79;MYCOPY(dummy7_b0a8)} // 0948:1c28
    {db tmp999=72;MYCOPY(dummy7_b0a9)} // 0948:1c29
    {db tmp999=32;MYCOPY(dummy7_b0aa)} // 0948:1c2a
    {db tmp999=69;MYCOPY(dummy7_b0ab)} // 0948:1c2b
    {db tmp999=82;MYCOPY(dummy7_b0ac)} // 0948:1c2c
    {db tmp999=73;MYCOPY(dummy7_b0ad)} // 0948:1c2d
    {db tmp999=75;MYCOPY(dummy7_b0ae)} // 0948:1c2e
    {db tmp999=44;MYCOPY(dummy7_b0af)} // 0948:1c2f
    {db tmp999=32;MYCOPY(dummy7_b0b0)} // 0948:1c30
    {db tmp999=84;MYCOPY(dummy7_b0b1)} // 0948:1c31
    {db tmp999=72;MYCOPY(dummy7_b0b2)} // 0948:1c32
    {db tmp999=65;MYCOPY(dummy7_b0b3)} // 0948:1c33
    {db tmp999=84;MYCOPY(dummy7_b0b4)} // 0948:1c34
    {db tmp999=13;MYCOPY(dummy7_b0b5)} // 0948:1c35
    {db tmp999=87;MYCOPY(dummy7_b0b6)} // 0948:1c36
    {db tmp999=65;MYCOPY(dummy7_b0b7)} // 0948:1c37
    {db tmp999=83;MYCOPY(dummy7_b0b8)} // 0948:1c38
    {db tmp999=32;MYCOPY(dummy7_b0b9)} // 0948:1c39
    {db tmp999=66;MYCOPY(dummy7_b0ba)} // 0948:1c3a
    {db tmp999=65;MYCOPY(dummy7_b0bb)} // 0948:1c3b
    {db tmp999=68;MYCOPY(dummy7_b0bc)} // 0948:1c3c
    {db tmp999=46;MYCOPY(dummy7_b0bd)} // 0948:1c3d
    {db tmp999=21;MYCOPY(unk_1969f)} // 0948:1c3f
    {db tmp999[32]={5,73,70,32,84,79,77,65,84,79,82,32,73,83,32,83,79,13,69,86,73,76,44,32,84,72,69,78,32,87,72,89};MYCOPY(dummy7_b0c0)} // 0948:1c40
    {db tmp999=32;MYCOPY(dummy7_b0e0)} // 0948:1c60
    {db tmp999=68;MYCOPY(dummy7_b0e1)} // 0948:1c61
    {db tmp999=79;MYCOPY(dummy7_b0e2)} // 0948:1c62
    {db tmp999=69;MYCOPY(dummy7_b0e3)} // 0948:1c63
    {db tmp999=83;MYCOPY(dummy7_b0e4)} // 0948:1c64
    {db tmp999=13;MYCOPY(dummy7_b0e5)} // 0948:1c65
    {db tmp999=72;MYCOPY(dummy7_b0e6)} // 0948:1c66
    {db tmp999=69;MYCOPY(dummy7_b0e7)} // 0948:1c67
    {db tmp999=32;MYCOPY(dummy7_b0e8)} // 0948:1c68
    {db tmp999=76;MYCOPY(dummy7_b0e9)} // 0948:1c69
    {db tmp999=69;MYCOPY(dummy7_b0ea)} // 0948:1c6a
    {db tmp999=65;MYCOPY(dummy7_b0eb)} // 0948:1c6b
    {db tmp999=86;MYCOPY(dummy7_b0ec)} // 0948:1c6c
    {db tmp999=69;MYCOPY(dummy7_b0ed)} // 0948:1c6d
    {db tmp999=32;MYCOPY(dummy7_b0ee)} // 0948:1c6e
    {db tmp999=84;MYCOPY(dummy7_b0ef)} // 0948:1c6f
    {db tmp999=72;MYCOPY(dummy7_b0f0)} // 0948:1c70
    {db tmp999=69;MYCOPY(dummy7_b0f1)} // 0948:1c71
    {db tmp999=83;MYCOPY(dummy7_b0f2)} // 0948:1c72
    {db tmp999=69;MYCOPY(dummy7_b0f3)} // 0948:1c73
    {db tmp999=46;MYCOPY(dummy7_b0f4)} // 0948:1c74
    {db tmp999=46;MYCOPY(dummy7_b0f5)} // 0948:1c75
    {db tmp999=46;MYCOPY(dummy7_b0f6)} // 0948:1c76
    {db tmp999=20;MYCOPY(unk_196d8)} // 0948:1c78
    {db tmp999[32]={4,66,79,77,66,83,32,65,78,68,32,77,65,67,72,73,78,69,83,13,70,79,82,32,85,83,32,84,79,32,85,83};MYCOPY(dummy7_b0f9)} // 0948:1c79
    {db tmp999=69;MYCOPY(dummy7_b119)} // 0948:1c99
    {db tmp999=63;MYCOPY(dummy7_b11a)} // 0948:1c9a
    {db tmp999=20;MYCOPY(unk_196fc)} // 0948:1c9c
    {db tmp999[32]={5,78,79,32,79,78,69,32,69,76,83,69,32,73,78,13,86,73,68,69,79,71,65,77,69,83,32,87,79,78,68,69};MYCOPY(dummy7_b11d)} // 0948:1c9d
    {db tmp999=82;MYCOPY(dummy7_b13d)} // 0948:1cbd
    {db tmp999=83;MYCOPY(dummy7_b13e)} // 0948:1cbe
    {db tmp999=13;MYCOPY(dummy7_b13f)} // 0948:1cbf
    {db tmp999=65;MYCOPY(dummy7_b140)} // 0948:1cc0
    {db tmp999=66;MYCOPY(dummy7_b141)} // 0948:1cc1
    {db tmp999=79;MYCOPY(dummy7_b142)} // 0948:1cc2
    {db tmp999=85;MYCOPY(dummy7_b143)} // 0948:1cc3
    {db tmp999=84;MYCOPY(dummy7_b144)} // 0948:1cc4
    {db tmp999=32;MYCOPY(dummy7_b145)} // 0948:1cc5
    {db tmp999=84;MYCOPY(dummy7_b146)} // 0948:1cc6
    {db tmp999=72;MYCOPY(dummy7_b147)} // 0948:1cc7
    {db tmp999=65;MYCOPY(dummy7_b148)} // 0948:1cc8
    {db tmp999=84;MYCOPY(dummy7_b149)} // 0948:1cc9
    {db tmp999=32;MYCOPY(dummy7_b14a)} // 0948:1cca
    {db tmp999=83;MYCOPY(dummy7_b14b)} // 0948:1ccb
    {db tmp999=84;MYCOPY(dummy7_b14c)} // 0948:1ccc
    {db tmp999=85;MYCOPY(dummy7_b14d)} // 0948:1ccd
    {db tmp999=70;MYCOPY(dummy7_b14e)} // 0948:1cce
    {db tmp999=70;MYCOPY(dummy7_b14f)} // 0948:1ccf
    {db tmp999=46;MYCOPY(dummy7_b150)} // 0948:1cd0
    {db tmp999=21;MYCOPY(unk_19732)} // 0948:1cd2
    {db tmp999[32]={4,89,69,65,72,44,32,81,85,73,84,32,66,69,73,78,71,32,65,13,84,82,79,85,66,76,69,77,65,75,69,82};MYCOPY(dummy7_b153)} // 0948:1cd3
    {db tmp999=44;MYCOPY(dummy7_b173)} // 0948:1cf3
    {db tmp999=32;MYCOPY(dummy7_b174)} // 0948:1cf4
    {db tmp999=79;MYCOPY(dummy7_b175)} // 0948:1cf5
    {db tmp999=76;MYCOPY(dummy7_b176)} // 0948:1cf6
    {db tmp999=65;MYCOPY(dummy7_b177)} // 0948:1cf7
    {db tmp999=70;MYCOPY(dummy7_b178)} // 0948:1cf8
    {db tmp999=46;MYCOPY(dummy7_b179)} // 0948:1cf9
    {db tmp999=20;MYCOPY(unk_1975b)} // 0948:1cfb
    {db tmp999[32]={5,83,79,77,69,84,73,77,69,83,32,73,32,71,69,84,32,83,79,13,77,65,68,44,32,73,32,87,65,78,84,32};MYCOPY(dummy7_b17c)} // 0948:1cfc
    {db tmp999=84;MYCOPY(dummy7_b19c)} // 0948:1d1c
    {db tmp999=79;MYCOPY(dummy7_b19d)} // 0948:1d1d
    {db tmp999=13;MYCOPY(dummy7_b19e)} // 0948:1d1e
    {db tmp999=67;MYCOPY(dummy7_b19f)} // 0948:1d1f
    {db tmp999=76;MYCOPY(dummy7_b1a0)} // 0948:1d20
    {db tmp999=79;MYCOPY(dummy7_b1a1)} // 0948:1d21
    {db tmp999=66;MYCOPY(dummy7_b1a2)} // 0948:1d22
    {db tmp999=66;MYCOPY(dummy7_b1a3)} // 0948:1d23
    {db tmp999=69;MYCOPY(dummy7_b1a4)} // 0948:1d24
    {db tmp999=82;MYCOPY(dummy7_b1a5)} // 0948:1d25
    {db tmp999=32;MYCOPY(dummy7_b1a6)} // 0948:1d26
    {db tmp999=83;MYCOPY(dummy7_b1a7)} // 0948:1d27
    {db tmp999=79;MYCOPY(dummy7_b1a8)} // 0948:1d28
    {db tmp999=77;MYCOPY(dummy7_b1a9)} // 0948:1d29
    {db tmp999=69;MYCOPY(dummy7_b1aa)} // 0948:1d2a
    {db tmp999=84;MYCOPY(dummy7_b1ab)} // 0948:1d2b
    {db tmp999=72;MYCOPY(dummy7_b1ac)} // 0948:1d2c
    {db tmp999=73;MYCOPY(dummy7_b1ad)} // 0948:1d2d
    {db tmp999=78;MYCOPY(dummy7_b1ae)} // 0948:1d2e
    {db tmp999=71;MYCOPY(dummy7_b1af)} // 0948:1d2f
    {db tmp999=46;MYCOPY(dummy7_b1b0)} // 0948:1d30
    {db tmp999=15;MYCOPY(unk_19792)} // 0948:1d32
    {db tmp999[32]={5,66,85,84,32,89,79,85,32,68,79,13,84,72,65,84,32,65,76,76,32,84,72,69,13,84,73,77,69,44,32,66};MYCOPY(dummy7_b1b3)} // 0948:1d33
    {db tmp999=65;MYCOPY(dummy7_b1d3)} // 0948:1d53
    {db tmp999=76;MYCOPY(dummy7_b1d4)} // 0948:1d54
    {db tmp999=69;MYCOPY(dummy7_b1d5)} // 0948:1d55
    {db tmp999=79;MYCOPY(dummy7_b1d6)} // 0948:1d56
    {db tmp999=71;MYCOPY(dummy7_b1d7)} // 0948:1d57
    {db tmp999=46;MYCOPY(dummy7_b1d8)} // 0948:1d58
    {db tmp999=7;MYCOPY(unk_197ba)} // 0948:1d5a
    {db tmp999=3;MYCOPY(dummy7_b1db)} // 0948:1d5b
    {db tmp999=73;MYCOPY(dummy7_b1dc)} // 0948:1d5c
    {db tmp999=32;MYCOPY(dummy7_b1dd)} // 0948:1d5d
    {db tmp999=68;MYCOPY(dummy7_b1de)} // 0948:1d5e
    {db tmp999=79;MYCOPY(dummy7_b1df)} // 0948:1d5f
    {db tmp999=63;MYCOPY(dummy7_b1e0)} // 0948:1d60
    {db tmp999=15;MYCOPY(unk_197c2)} // 0948:1d62
    {db tmp999=3;MYCOPY(dummy7_b1e3)} // 0948:1d63
    {db tmp999=65;MYCOPY(dummy7_b1e4)} // 0948:1d64
    {db tmp999=76;MYCOPY(dummy7_b1e5)} // 0948:1d65
    {db tmp999=76;MYCOPY(dummy7_b1e6)} // 0948:1d66
    {db tmp999=32;MYCOPY(dummy7_b1e7)} // 0948:1d67
    {db tmp999=84;MYCOPY(dummy7_b1e8)} // 0948:1d68
    {db tmp999=72;MYCOPY(dummy7_b1e9)} // 0948:1d69
    {db tmp999=69;MYCOPY(dummy7_b1ea)} // 0948:1d6a
    {db tmp999=32;MYCOPY(dummy7_b1eb)} // 0948:1d6b
    {db tmp999=84;MYCOPY(dummy7_b1ec)} // 0948:1d6c
    {db tmp999=73;MYCOPY(dummy7_b1ed)} // 0948:1d6d
    {db tmp999=77;MYCOPY(dummy7_b1ee)} // 0948:1d6e
    {db tmp999=69;MYCOPY(dummy7_b1ef)} // 0948:1d6f
    {db tmp999=46;MYCOPY(dummy7_b1f0)} // 0948:1d70
    {db tmp999=17;MYCOPY(unk_197d2)} // 0948:1d72
    {db tmp999=3;MYCOPY(dummy7_b1f3)} // 0948:1d73
    {db tmp999=79;MYCOPY(dummy7_b1f4)} // 0948:1d74
    {db tmp999=72;MYCOPY(dummy7_b1f5)} // 0948:1d75
    {db tmp999=32;MYCOPY(dummy7_b1f6)} // 0948:1d76
    {db tmp999=89;MYCOPY(dummy7_b1f7)} // 0948:1d77
    {db tmp999=69;MYCOPY(dummy7_b1f8)} // 0948:1d78
    {db tmp999=65;MYCOPY(dummy7_b1f9)} // 0948:1d79
    {db tmp999=72;MYCOPY(dummy7_b1fa)} // 0948:1d7a
    {db tmp999=44;MYCOPY(dummy7_b1fb)} // 0948:1d7b
    {dw tmp999=21024;MYCOPY(dummy7_b1fc)} // 0948:1d7c
    {char tmp999[6]="IGHT.";MYCOPY(aight)} // 0948:1d7e
    {db tmp999=23;MYCOPY(unk_197e4)} // 0948:1d84
    {db tmp999=5;MYCOPY(dummy7_b205)} // 0948:1d85
    {dw tmp999=20292;MYCOPY(dummy7_b206)} // 0948:1d86
    {db tmp999[32]={32,89,79,85,32,71,85,89,83,32,72,65,86,69,13,84,72,69,32,70,69,69,76,73,78,71,32,84,72,65,84,13};MYCOPY(dummy7_b208)} // 0948:1d88
    {db tmp999=87;MYCOPY(dummy7_b228)} // 0948:1da8
    {db tmp999=69;MYCOPY(dummy7_b229)} // 0948:1da9
    {db tmp999=32;MYCOPY(dummy7_b22a)} // 0948:1daa
    {db tmp999=65;MYCOPY(dummy7_b22b)} // 0948:1dab
    {dw tmp999=17746;MYCOPY(dummy7_b22c)} // 0948:1dac
    {char tmp999[16]=" BEING WATCHED?";MYCOPY(abeingwatched)} // 0948:1dae
    {db tmp999=24;MYCOPY(unk_1981e)} // 0948:1dbe
    {db tmp999[32]={5,89,69,65,72,44,32,65,76,77,79,83,84,32,76,73,75,69,13,83,79,77,69,79,78,69,32,73,83,32,67,79};MYCOPY(dummy7_b23f)} // 0948:1dbf
    {db tmp999=78;MYCOPY(dummy7_b25f)} // 0948:1ddf
    {db tmp999=84;MYCOPY(dummy7_b260)} // 0948:1de0
    {db tmp999=82;MYCOPY(dummy7_b261)} // 0948:1de1
    {db tmp999=79;MYCOPY(dummy7_b262)} // 0948:1de2
    {db tmp999=76;MYCOPY(dummy7_b263)} // 0948:1de3
    {db tmp999=76;MYCOPY(dummy7_b264)} // 0948:1de4
    {db tmp999=73;MYCOPY(dummy7_b265)} // 0948:1de5
    {db tmp999=78;MYCOPY(dummy7_b266)} // 0948:1de6
    {db tmp999=71;MYCOPY(dummy7_b267)} // 0948:1de7
    {db tmp999=13;MYCOPY(dummy7_b268)} // 0948:1de8
    {db tmp999=79;MYCOPY(dummy7_b269)} // 0948:1de9
    {db tmp999=85;MYCOPY(dummy7_b26a)} // 0948:1dea
    {db tmp999=82;MYCOPY(dummy7_b26b)} // 0948:1deb
    {db tmp999=32;MYCOPY(dummy7_b26c)} // 0948:1dec
    {db tmp999=69;MYCOPY(dummy7_b26d)} // 0948:1ded
    {db tmp999=86;MYCOPY(dummy7_b26e)} // 0948:1dee
    {db tmp999=69;MYCOPY(dummy7_b26f)} // 0948:1def
    {db tmp999=82;MYCOPY(dummy7_b270)} // 0948:1df0
    {db tmp999=89;MYCOPY(dummy7_b271)} // 0948:1df1
    {db tmp999=32;MYCOPY(dummy7_b272)} // 0948:1df2
    {db tmp999=77;MYCOPY(dummy7_b273)} // 0948:1df3
    {db tmp999=79;MYCOPY(dummy7_b274)} // 0948:1df4
    {db tmp999=86;MYCOPY(dummy7_b275)} // 0948:1df5
    {db tmp999=69;MYCOPY(dummy7_b276)} // 0948:1df6
    {db tmp999=46;MYCOPY(dummy7_b277)} // 0948:1df7
    {db tmp999=18;MYCOPY(unk_19859)} // 0948:1df9
    {db tmp999=4;MYCOPY(dummy7_b27a)} // 0948:1dfa
    {db tmp999=89;MYCOPY(dummy7_b27b)} // 0948:1dfb
    {db tmp999=79;MYCOPY(dummy7_b27c)} // 0948:1dfc
    {db tmp999=85;MYCOPY(dummy7_b27d)} // 0948:1dfd
    {db tmp999=32;MYCOPY(dummy7_b27e)} // 0948:1dfe
    {db tmp999=84;MYCOPY(dummy7_b27f)} // 0948:1dff
    {db tmp999=87;MYCOPY(dummy7_b280)} // 0948:1e00
    {db tmp999=79;MYCOPY(dummy7_b281)} // 0948:1e01
    {db tmp999=32;MYCOPY(dummy7_b282)} // 0948:1e02
    {db tmp999=65;MYCOPY(dummy7_b283)} // 0948:1e03
    {db tmp999=82;MYCOPY(dummy7_b284)} // 0948:1e04
    {db tmp999=69;MYCOPY(dummy7_b285)} // 0948:1e05
    {db tmp999=32;MYCOPY(dummy7_b286)} // 0948:1e06
    {db tmp999=74;MYCOPY(dummy7_b287)} // 0948:1e07
    {db tmp999=85;MYCOPY(dummy7_b288)} // 0948:1e08
    {db tmp999=83;MYCOPY(dummy7_b289)} // 0948:1e09
    {db tmp999=84;MYCOPY(dummy7_b28a)} // 0948:1e0a
    {db tmp999=13;MYCOPY(dummy7_b28b)} // 0948:1e0b
    {db tmp999=80;MYCOPY(dummy7_b28c)} // 0948:1e0c
    {db tmp999=65;MYCOPY(dummy7_b28d)} // 0948:1e0d
    {db tmp999=82;MYCOPY(dummy7_b28e)} // 0948:1e0e
    {db tmp999=65;MYCOPY(dummy7_b28f)} // 0948:1e0f
    {db tmp999=78;MYCOPY(dummy7_b290)} // 0948:1e10
    {db tmp999=79;MYCOPY(dummy7_b291)} // 0948:1e11
    {db tmp999=73;MYCOPY(dummy7_b292)} // 0948:1e12
    {db tmp999=68;MYCOPY(dummy7_b293)} // 0948:1e13
    {db tmp999=46;MYCOPY(dummy7_b294)} // 0948:1e14
    {db tmp999=22;MYCOPY(unk_19876)} // 0948:1e16
    {db tmp999[32]={5,79,72,32,89,69,65,72,44,32,87,69,76,76,32,87,72,79,32,73,83,13,84,72,65,84,32,80,69,82,83,79};MYCOPY(dummy7_b297)} // 0948:1e17
    {db tmp999=78;MYCOPY(dummy7_b2b7)} // 0948:1e37
    {db tmp999=32;MYCOPY(dummy7_b2b8)} // 0948:1e38
    {db tmp999=83;MYCOPY(dummy7_b2b9)} // 0948:1e39
    {db tmp999=84;MYCOPY(dummy7_b2ba)} // 0948:1e3a
    {db tmp999=65;MYCOPY(dummy7_b2bb)} // 0948:1e3b
    {db tmp999=82;MYCOPY(dummy7_b2bc)} // 0948:1e3c
    {db tmp999=73;MYCOPY(dummy7_b2bd)} // 0948:1e3d
    {db tmp999=78;MYCOPY(dummy7_b2be)} // 0948:1e3e
    {db tmp999=71;MYCOPY(dummy7_b2bf)} // 0948:1e3f
    {db tmp999=13;MYCOPY(dummy7_b2c0)} // 0948:1e40
    {db tmp999=65;MYCOPY(dummy7_b2c1)} // 0948:1e41
    {db tmp999=84;MYCOPY(dummy7_b2c2)} // 0948:1e42
    {db tmp999=32;MYCOPY(dummy7_b2c3)} // 0948:1e43
    {db tmp999=85;MYCOPY(dummy7_b2c4)} // 0948:1e44
    {db tmp999=83;MYCOPY(dummy7_b2c5)} // 0948:1e45
    {db tmp999=32;MYCOPY(dummy7_b2c6)} // 0948:1e46
    {db tmp999=82;MYCOPY(dummy7_b2c7)} // 0948:1e47
    {db tmp999=73;MYCOPY(dummy7_b2c8)} // 0948:1e48
    {db tmp999=71;MYCOPY(dummy7_b2c9)} // 0948:1e49
    {db tmp999=72;MYCOPY(dummy7_b2ca)} // 0948:1e4a
    {db tmp999=84;MYCOPY(dummy7_b2cb)} // 0948:1e4b
    {db tmp999=32;MYCOPY(dummy7_b2cc)} // 0948:1e4c
    {db tmp999=78;MYCOPY(dummy7_b2cd)} // 0948:1e4d
    {db tmp999=79;MYCOPY(dummy7_b2ce)} // 0948:1e4e
    {db tmp999=87;MYCOPY(dummy7_b2cf)} // 0948:1e4f
    {db tmp999=63;MYCOPY(dummy7_b2d0)} // 0948:1e50
    {db tmp999=19;MYCOPY(unk_198b2)} // 0948:1e52
    {db tmp999[32]={4,72,69,39,83,32,82,73,71,72,84,33,32,76,69,84,39,83,13,71,69,84,32,79,85,84,32,79,70,32,72,69};MYCOPY(dummy7_b2d3)} // 0948:1e53
    {db tmp999=82;MYCOPY(dummy7_b2f3)} // 0948:1e73
    {db tmp999=69;MYCOPY(dummy7_b2f4)} // 0948:1e74
    {db tmp999=33;MYCOPY(dummy7_b2f5)} // 0948:1e75
    {db tmp999=18;MYCOPY(unk_198d7)} // 0948:1e77
    {db tmp999[32]={4,67,65,78,39,84,32,89,79,85,32,71,85,89,83,13,87,65,76,75,32,65,78,89,32,70,65,83,84,69,82,63};MYCOPY(dummy7_b2f8)} // 0948:1e78
    {db tmp999=21;MYCOPY(unk_198f9)} // 0948:1e99
    {db tmp999[32]={5,73,39,68,32,76,73,75,69,32,84,79,32,83,69,69,13,89,79,85,32,76,85,71,32,84,72,73,83,32,83,72};MYCOPY(dummy7_b31a)} // 0948:1e9a
    {db tmp999=73;MYCOPY(dummy7_b33a)} // 0948:1eba
    {db tmp999=69;MYCOPY(dummy7_b33b)} // 0948:1ebb
    {db tmp999=76;MYCOPY(dummy7_b33c)} // 0948:1ebc
    {db tmp999=68;MYCOPY(dummy7_b33d)} // 0948:1ebd
    {db tmp999=13;MYCOPY(dummy7_b33e)} // 0948:1ebe
    {db tmp999=65;MYCOPY(dummy7_b33f)} // 0948:1ebf
    {db tmp999=82;MYCOPY(dummy7_b340)} // 0948:1ec0
    {db tmp999=79;MYCOPY(dummy7_b341)} // 0948:1ec1
    {db tmp999=85;MYCOPY(dummy7_b342)} // 0948:1ec2
    {db tmp999=78;MYCOPY(dummy7_b343)} // 0948:1ec3
    {db tmp999=68;MYCOPY(dummy7_b344)} // 0948:1ec4
    {db tmp999=32;MYCOPY(dummy7_b345)} // 0948:1ec5
    {db tmp999=70;MYCOPY(dummy7_b346)} // 0948:1ec6
    {db tmp999=79;MYCOPY(dummy7_b347)} // 0948:1ec7
    {db tmp999=82;MYCOPY(dummy7_b348)} // 0948:1ec8
    {db tmp999=32;MYCOPY(dummy7_b349)} // 0948:1ec9
    {db tmp999=65;MYCOPY(dummy7_b34a)} // 0948:1eca
    {db tmp999=87;MYCOPY(dummy7_b34b)} // 0948:1ecb
    {db tmp999=72;MYCOPY(dummy7_b34c)} // 0948:1ecc
    {db tmp999=73;MYCOPY(dummy7_b34d)} // 0948:1ecd
    {db tmp999=76;MYCOPY(dummy7_b34e)} // 0948:1ece
    {db tmp999=69;MYCOPY(dummy7_b34f)} // 0948:1ecf
    {db tmp999=46;MYCOPY(dummy7_b350)} // 0948:1ed0
    {db tmp999=23;MYCOPY(unk_19932)} // 0948:1ed2
    {db tmp999[32]={5,89,69,65,72,44,32,79,82,32,65,32,66,82,79,65,68,83,87,79,82,68,13,65,78,68,32,65,32,76,73,70};MYCOPY(dummy7_b353)} // 0948:1ed3
    {db tmp999=69;MYCOPY(dummy7_b373)} // 0948:1ef3
    {db tmp999=84;MYCOPY(dummy7_b374)} // 0948:1ef4
    {db tmp999=73;MYCOPY(dummy7_b375)} // 0948:1ef5
    {db tmp999=77;MYCOPY(dummy7_b376)} // 0948:1ef6
    {db tmp999=69;MYCOPY(dummy7_b377)} // 0948:1ef7
    {db tmp999=32;MYCOPY(dummy7_b378)} // 0948:1ef8
    {db tmp999=83;MYCOPY(dummy7_b379)} // 0948:1ef9
    {db tmp999=85;MYCOPY(dummy7_b37a)} // 0948:1efa
    {db tmp999=80;MYCOPY(dummy7_b37b)} // 0948:1efb
    {db tmp999=80;MYCOPY(dummy7_b37c)} // 0948:1efc
    {db tmp999=76;MYCOPY(dummy7_b37d)} // 0948:1efd
    {db tmp999=89;MYCOPY(dummy7_b37e)} // 0948:1efe
    {db tmp999=13;MYCOPY(dummy7_b37f)} // 0948:1eff
    {db tmp999=79;MYCOPY(dummy7_b380)} // 0948:1f00
    {db tmp999=70;MYCOPY(dummy7_b381)} // 0948:1f01
    {db tmp999=32;MYCOPY(dummy7_b382)} // 0948:1f02
    {db tmp999=65;MYCOPY(dummy7_b383)} // 0948:1f03
    {db tmp999=82;MYCOPY(dummy7_b384)} // 0948:1f04
    {db tmp999=82;MYCOPY(dummy7_b385)} // 0948:1f05
    {db tmp999=79;MYCOPY(dummy7_b386)} // 0948:1f06
    {db tmp999=87;MYCOPY(dummy7_b387)} // 0948:1f07
    {db tmp999=83;MYCOPY(dummy7_b388)} // 0948:1f08
    {db tmp999=46;MYCOPY(dummy7_b389)} // 0948:1f09
    {db tmp999=16;MYCOPY(unk_1996b)} // 0948:1f0b
    {db tmp999=4;MYCOPY(dummy7_b38c)} // 0948:1f0c
    {db tmp999=87;MYCOPY(dummy7_b38d)} // 0948:1f0d
    {db tmp999=69;MYCOPY(dummy7_b38e)} // 0948:1f0e
    {db tmp999=39;MYCOPY(dummy7_b38f)} // 0948:1f0f
    {db tmp999=76;MYCOPY(dummy7_b390)} // 0948:1f10
    {db tmp999=76;MYCOPY(dummy7_b391)} // 0948:1f11
    {db tmp999=32;MYCOPY(dummy7_b392)} // 0948:1f12
    {db tmp999=83;MYCOPY(dummy7_b393)} // 0948:1f13
    {db tmp999=69;MYCOPY(dummy7_b394)} // 0948:1f14
    {db tmp999=69;MYCOPY(dummy7_b395)} // 0948:1f15
    {db tmp999=32;MYCOPY(dummy7_b396)} // 0948:1f16
    {db tmp999=72;MYCOPY(dummy7_b397)} // 0948:1f17
    {db tmp999=79;MYCOPY(dummy7_b398)} // 0948:1f18
    {db tmp999=87;MYCOPY(dummy7_b399)} // 0948:1f19
    {db tmp999=13;MYCOPY(dummy7_b39a)} // 0948:1f1a
    {db tmp999=70;MYCOPY(dummy7_b39b)} // 0948:1f1b
    {db tmp999=65;MYCOPY(dummy7_b39c)} // 0948:1f1c
    {db tmp999=83;MYCOPY(dummy7_b39d)} // 0948:1f1d
    {db tmp999=84;MYCOPY(dummy7_b39e)} // 0948:1f1e
    {db tmp999=32;MYCOPY(dummy7_b39f)} // 0948:1f1f
    {db tmp999=89;MYCOPY(dummy7_b3a0)} // 0948:1f20
    {db tmp999=79;MYCOPY(dummy7_b3a1)} // 0948:1f21
    {db tmp999=85;MYCOPY(dummy7_b3a2)} // 0948:1f22
    {db tmp999=32;MYCOPY(dummy7_b3a3)} // 0948:1f23
    {db tmp999=87;MYCOPY(dummy7_b3a4)} // 0948:1f24
    {db tmp999=65;MYCOPY(dummy7_b3a5)} // 0948:1f25
    {db tmp999=76;MYCOPY(dummy7_b3a6)} // 0948:1f26
    {db tmp999=75;MYCOPY(dummy7_b3a7)} // 0948:1f27
    {db tmp999=46;MYCOPY(dummy7_b3a8)} // 0948:1f28
    {db tmp999=16;MYCOPY(unk_1998a)} // 0948:1f2a
    {db tmp999=4;MYCOPY(dummy7_b3ab)} // 0948:1f2b
    {db tmp999=85;MYCOPY(dummy7_b3ac)} // 0948:1f2c
    {db tmp999=72;MYCOPY(dummy7_b3ad)} // 0948:1f2d
    {db tmp999=32;MYCOPY(dummy7_b3ae)} // 0948:1f2e
    {db tmp999=79;MYCOPY(dummy7_b3af)} // 0948:1f2f
    {db tmp999=72;MYCOPY(dummy7_b3b0)} // 0948:1f30
    {db tmp999=46;MYCOPY(dummy7_b3b1)} // 0948:1f31
    {db tmp999=32;MYCOPY(dummy7_b3b2)} // 0948:1f32
    {db tmp999=73;MYCOPY(dummy7_b3b3)} // 0948:1f33
    {db tmp999=32;MYCOPY(dummy7_b3b4)} // 0948:1f34
    {db tmp999=84;MYCOPY(dummy7_b3b5)} // 0948:1f35
    {db tmp999=72;MYCOPY(dummy7_b3b6)} // 0948:1f36
    {db tmp999=73;MYCOPY(dummy7_b3b7)} // 0948:1f37
    {db tmp999=78;MYCOPY(dummy7_b3b8)} // 0948:1f38
    {db tmp999=75;MYCOPY(dummy7_b3b9)} // 0948:1f39
    {db tmp999=13;MYCOPY(dummy7_b3ba)} // 0948:1f3a
    {db tmp999=73;MYCOPY(dummy7_b3bb)} // 0948:1f3b
    {db tmp999=32;MYCOPY(dummy7_b3bc)} // 0948:1f3c
    {db tmp999=72;MYCOPY(dummy7_b3bd)} // 0948:1f3d
    {db tmp999=73;MYCOPY(dummy7_b3be)} // 0948:1f3e
    {db tmp999=84;MYCOPY(dummy7_b3bf)} // 0948:1f3f
    {db tmp999=32;MYCOPY(dummy7_b3c0)} // 0948:1f40
    {db tmp999=65;MYCOPY(dummy7_b3c1)} // 0948:1f41
    {db tmp999=32;MYCOPY(dummy7_b3c2)} // 0948:1f42
    {db tmp999=78;MYCOPY(dummy7_b3c3)} // 0948:1f43
    {db tmp999=69;MYCOPY(dummy7_b3c4)} // 0948:1f44
    {db tmp999=82;MYCOPY(dummy7_b3c5)} // 0948:1f45
    {db tmp999=86;MYCOPY(dummy7_b3c6)} // 0948:1f46
    {db tmp999=69;MYCOPY(dummy7_b3c7)} // 0948:1f47
    {db tmp999=46;MYCOPY(dummy7_b3c8)} // 0948:1f48
    {db tmp999=17;MYCOPY(unk_199aa)} // 0948:1f4a
    {db tmp999=4;MYCOPY(dummy7_b3cb)} // 0948:1f4b
    {db tmp999=89;MYCOPY(dummy7_b3cc)} // 0948:1f4c
    {db tmp999=79;MYCOPY(dummy7_b3cd)} // 0948:1f4d
    {db tmp999=85;MYCOPY(dummy7_b3ce)} // 0948:1f4e
    {db tmp999=32;MYCOPY(dummy7_b3cf)} // 0948:1f4f
    {db tmp999=71;MYCOPY(dummy7_b3d0)} // 0948:1f50
    {db tmp999=85;MYCOPY(dummy7_b3d1)} // 0948:1f51
    {db tmp999=89;MYCOPY(dummy7_b3d2)} // 0948:1f52
    {db tmp999=83;MYCOPY(dummy7_b3d3)} // 0948:1f53
    {db tmp999=32;MYCOPY(dummy7_b3d4)} // 0948:1f54
    {db tmp999=74;MYCOPY(dummy7_b3d5)} // 0948:1f55
    {db tmp999=85;MYCOPY(dummy7_b3d6)} // 0948:1f56
    {db tmp999=83;MYCOPY(dummy7_b3d7)} // 0948:1f57
    {db tmp999=84;MYCOPY(dummy7_b3d8)} // 0948:1f58
    {db tmp999=13;MYCOPY(dummy7_b3d9)} // 0948:1f59
    {db tmp999=84;MYCOPY(dummy7_b3da)} // 0948:1f5a
    {db tmp999=65;MYCOPY(dummy7_b3db)} // 0948:1f5b
    {db tmp999=75;MYCOPY(dummy7_b3dc)} // 0948:1f5c
    {db tmp999=69;MYCOPY(dummy7_b3dd)} // 0948:1f5d
    {db tmp999=32;MYCOPY(dummy7_b3de)} // 0948:1f5e
    {db tmp999=89;MYCOPY(dummy7_b3df)} // 0948:1f5f
    {db tmp999=79;MYCOPY(dummy7_b3e0)} // 0948:1f60
    {db tmp999=85;MYCOPY(dummy7_b3e1)} // 0948:1f61
    {db tmp999=82;MYCOPY(dummy7_b3e2)} // 0948:1f62
    {db tmp999=32;MYCOPY(dummy7_b3e3)} // 0948:1f63
    {db tmp999=84;MYCOPY(dummy7_b3e4)} // 0948:1f64
    {db tmp999=73;MYCOPY(dummy7_b3e5)} // 0948:1f65
    {db tmp999=77;MYCOPY(dummy7_b3e6)} // 0948:1f66
    {db tmp999=69;MYCOPY(dummy7_b3e7)} // 0948:1f67
    {db tmp999=46;MYCOPY(dummy7_b3e8)} // 0948:1f68
    {db tmp999=17;MYCOPY(unk_199ca)} // 0948:1f6a
    {db tmp999=3;MYCOPY(dummy7_b3eb)} // 0948:1f6b
    {db tmp999=84;MYCOPY(dummy7_b3ec)} // 0948:1f6c
    {db tmp999=72;MYCOPY(dummy7_b3ed)} // 0948:1f6d
    {db tmp999=65;MYCOPY(dummy7_b3ee)} // 0948:1f6e
    {db tmp999=84;MYCOPY(dummy7_b3ef)} // 0948:1f6f
    {db tmp999=39;MYCOPY(dummy7_b3f0)} // 0948:1f70
    {db tmp999=83;MYCOPY(dummy7_b3f1)} // 0948:1f71
    {db tmp999=32;MYCOPY(dummy7_b3f2)} // 0948:1f72
    {db tmp999=66;MYCOPY(dummy7_b3f3)} // 0948:1f73
    {db tmp999=69;MYCOPY(dummy7_b3f4)} // 0948:1f74
    {db tmp999=84;MYCOPY(dummy7_b3f5)} // 0948:1f75
    {db tmp999=84;MYCOPY(dummy7_b3f6)} // 0948:1f76
    {db tmp999=69;MYCOPY(dummy7_b3f7)} // 0948:1f77
    {db tmp999=82;MYCOPY(dummy7_b3f8)} // 0948:1f78
    {db tmp999=46;MYCOPY(dummy7_b3f9)} // 0948:1f79
    {db tmp999=19;MYCOPY(unk_199db)} // 0948:1f7b
    {db tmp999=3;MYCOPY(dummy7_b3fc)} // 0948:1f7c
    {db tmp999=87;MYCOPY(dummy7_b3fd)} // 0948:1f7d
    {db tmp999=72;MYCOPY(dummy7_b3fe)} // 0948:1f7e
    {db tmp999=65;MYCOPY(dummy7_b3ff)} // 0948:1f7f
    {db tmp999=84;MYCOPY(dummy7_b400)} // 0948:1f80
    {db tmp999=32;MYCOPY(dummy7_b401)} // 0948:1f81
    {db tmp999=65;MYCOPY(dummy7_b402)} // 0948:1f82
    {db tmp999=32;MYCOPY(dummy7_b403)} // 0948:1f83
    {db tmp999=67;MYCOPY(dummy7_b404)} // 0948:1f84
    {db tmp999=72;MYCOPY(dummy7_b405)} // 0948:1f85
    {db tmp999=65;MYCOPY(dummy7_b406)} // 0948:1f86
    {db tmp999=76;MYCOPY(dummy7_b407)} // 0948:1f87
    {db tmp999=76;MYCOPY(dummy7_b408)} // 0948:1f88
    {db tmp999=69;MYCOPY(dummy7_b409)} // 0948:1f89
    {db tmp999=78;MYCOPY(dummy7_b40a)} // 0948:1f8a
    {db tmp999=71;MYCOPY(dummy7_b40b)} // 0948:1f8b
    {db tmp999=69;MYCOPY(dummy7_b40c)} // 0948:1f8c
    {db tmp999=33;MYCOPY(dummy7_b40d)} // 0948:1f8d
    {db tmp999=18;MYCOPY(unk_199ef)} // 0948:1f8f
    {db tmp999[32]={4,72,79,87,32,79,78,32,69,65,82,84,72,32,68,73,68,13,87,69,32,83,85,82,86,73,86,69,32,84,72,65};MYCOPY(dummy7_b410)} // 0948:1f90
    {db tmp999=84;MYCOPY(dummy7_b430)} // 0948:1fb0
    {db tmp999=63;MYCOPY(dummy7_b431)} // 0948:1fb1
    {db tmp999=18;MYCOPY(unk_19a13)} // 0948:1fb3
    {db tmp999[32]={5,87,69,32,72,65,86,69,32,71,85,84,83,32,65,78,68,13,67,79,85,82,65,71,69,46,32,87,69,39,82,69};MYCOPY(dummy7_b434)} // 0948:1fb4
    {db tmp999=13;MYCOPY(dummy7_b454)} // 0948:1fd4
    {db tmp999=86;MYCOPY(dummy7_b455)} // 0948:1fd5
    {db tmp999=73;MYCOPY(dummy7_b456)} // 0948:1fd6
    {db tmp999=75;MYCOPY(dummy7_b457)} // 0948:1fd7
    {db tmp999=73;MYCOPY(dummy7_b458)} // 0948:1fd8
    {db tmp999=78;MYCOPY(dummy7_b459)} // 0948:1fd9
    {db tmp999=71;MYCOPY(dummy7_b45a)} // 0948:1fda
    {db tmp999=32;MYCOPY(dummy7_b45b)} // 0948:1fdb
    {db tmp999=72;MYCOPY(dummy7_b45c)} // 0948:1fdc
    {db tmp999=69;MYCOPY(dummy7_b45d)} // 0948:1fdd
    {db tmp999=82;MYCOPY(dummy7_b45e)} // 0948:1fde
    {db tmp999=79;MYCOPY(dummy7_b45f)} // 0948:1fdf
    {db tmp999=69;MYCOPY(dummy7_b460)} // 0948:1fe0
    {db tmp999=83;MYCOPY(dummy7_b461)} // 0948:1fe1
    {db tmp999=33;MYCOPY(dummy7_b462)} // 0948:1fe2
    {db tmp999=13;MYCOPY(unk_19a44)} // 0948:1fe4
    {db tmp999=4;MYCOPY(dummy7_b465)} // 0948:1fe5
    {db tmp999=65;MYCOPY(dummy7_b466)} // 0948:1fe6
    {db tmp999=78;MYCOPY(dummy7_b467)} // 0948:1fe7
    {db tmp999=68;MYCOPY(dummy7_b468)} // 0948:1fe8
    {db tmp999=32;MYCOPY(dummy7_b469)} // 0948:1fe9
    {db tmp999=84;MYCOPY(dummy7_b46a)} // 0948:1fea
    {db tmp999=72;MYCOPY(dummy7_b46b)} // 0948:1feb
    {db tmp999=69;MYCOPY(dummy7_b46c)} // 0948:1fec
    {db tmp999=78;MYCOPY(dummy7_b46d)} // 0948:1fed
    {db tmp999=32;MYCOPY(dummy7_b46e)} // 0948:1fee
    {db tmp999=87;MYCOPY(dummy7_b46f)} // 0948:1fef
    {db tmp999=69;MYCOPY(dummy7_b470)} // 0948:1ff0
    {db tmp999=13;MYCOPY(dummy7_b471)} // 0948:1ff1
    {db tmp999=87;MYCOPY(dummy7_b472)} // 0948:1ff2
    {db tmp999=79;MYCOPY(dummy7_b473)} // 0948:1ff3
    {db tmp999=75;MYCOPY(dummy7_b474)} // 0948:1ff4
    {db tmp999=69;MYCOPY(dummy7_b475)} // 0948:1ff5
    {db tmp999=32;MYCOPY(dummy7_b476)} // 0948:1ff6
    {db tmp999=85;MYCOPY(dummy7_b477)} // 0948:1ff7
    {db tmp999=80;MYCOPY(dummy7_b478)} // 0948:1ff8
    {db tmp999=46;MYCOPY(dummy7_b479)} // 0948:1ff9
    {db tmp999=18;MYCOPY(unk_19a5b)} // 0948:1ffb
    {db tmp999[32]={5,77,79,78,83,84,69,82,83,33,32,84,82,65,80,83,33,13,73,83,32,65,78,89,32,82,69,87,65,82,68,13};MYCOPY(dummy7_b47c)} // 0948:1ffc
    {db tmp999=87;MYCOPY(dummy7_b49c)} // 0948:201c
    {db tmp999=79;MYCOPY(dummy7_b49d)} // 0948:201d
    {db tmp999=82;MYCOPY(dummy7_b49e)} // 0948:201e
    {db tmp999=84;MYCOPY(dummy7_b49f)} // 0948:201f
    {db tmp999=72;MYCOPY(dummy7_b4a0)} // 0948:2020
    {db tmp999=32;MYCOPY(dummy7_b4a1)} // 0948:2021
    {db tmp999=84;MYCOPY(dummy7_b4a2)} // 0948:2022
    {db tmp999=72;MYCOPY(dummy7_b4a3)} // 0948:2023
    {db tmp999=73;MYCOPY(dummy7_b4a4)} // 0948:2024
    {db tmp999=83;MYCOPY(dummy7_b4a5)} // 0948:2025
    {db tmp999=63;MYCOPY(dummy7_b4a6)} // 0948:2026
    {db tmp999=21;MYCOPY(unk_19a88)} // 0948:2028
    {db tmp999[32]={6,73,70,32,87,69,32,77,65,75,69,32,73,84,32,66,65,67,75,44,13,77,65,89,66,69,32,84,72,69,89,39};MYCOPY(dummy7_b4a9)} // 0948:2029
    {db tmp999[32]={76,76,32,77,65,75,69,13,85,83,32,73,78,84,79,32,65,32,83,65,84,85,82,68,65,89,13,77,79,82,78,73};MYCOPY(dummy7_b4c9)} // 0948:2049
    {db tmp999=78;MYCOPY(dummy7_b4e9)} // 0948:2069
    {db tmp999=71;MYCOPY(dummy7_b4ea)} // 0948:206a
    {db tmp999=32;MYCOPY(dummy7_b4eb)} // 0948:206b
    {db tmp999=67;MYCOPY(dummy7_b4ec)} // 0948:206c
    {db tmp999=65;MYCOPY(dummy7_b4ed)} // 0948:206d
    {db tmp999=82;MYCOPY(dummy7_b4ee)} // 0948:206e
    {db tmp999=84;MYCOPY(dummy7_b4ef)} // 0948:206f
    {db tmp999=79;MYCOPY(dummy7_b4f0)} // 0948:2070
    {db tmp999=79;MYCOPY(dummy7_b4f1)} // 0948:2071
    {db tmp999=78;MYCOPY(dummy7_b4f2)} // 0948:2072
    {db tmp999=46;MYCOPY(dummy7_b4f3)} // 0948:2073
    {db tmp999=19;MYCOPY(unk_19ad5)} // 0948:2075
    {db tmp999[32]={4,87,79,87,44,32,73,32,87,79,78,68,69,82,32,72,79,87,13,73,39,68,32,76,79,79,75,32,79,78,32,84};MYCOPY(dummy7_b4f6)} // 0948:2076
    {db tmp999=86;MYCOPY(dummy7_b516)} // 0948:2096
    {db tmp999=46;MYCOPY(dummy7_b517)} // 0948:2097
    {db tmp999=46;MYCOPY(dummy7_b518)} // 0948:2098
    {db tmp999=46;MYCOPY(dummy7_b519)} // 0948:2099
    {db tmp999=22;MYCOPY(unk_19afb)} // 0948:209b
    {db tmp999[32]={4,73,32,87,79,78,68,69,82,32,87,72,69,82,69,32,87,69,39,76,76,13,69,78,68,32,85,80,32,84,72,73};MYCOPY(dummy7_b51c)} // 0948:209c
    {db tmp999=83;MYCOPY(dummy7_b53c)} // 0948:20bc
    {db tmp999=32;MYCOPY(dummy7_b53d)} // 0948:20bd
    {db tmp999=84;MYCOPY(dummy7_b53e)} // 0948:20be
    {db tmp999=73;MYCOPY(dummy7_b53f)} // 0948:20bf
    {db tmp999=77;MYCOPY(dummy7_b540)} // 0948:20c0
    {db tmp999=69;MYCOPY(dummy7_b541)} // 0948:20c1
    {db tmp999=46;MYCOPY(dummy7_b542)} // 0948:20c2
    {db tmp999=18;MYCOPY(unk_19b24)} // 0948:20c4
    {db tmp999=4;MYCOPY(dummy7_b545)} // 0948:20c5
    {db tmp999=77;MYCOPY(dummy7_b546)} // 0948:20c6
    {db tmp999=65;MYCOPY(dummy7_b547)} // 0948:20c7
    {db tmp999=89;MYCOPY(dummy7_b548)} // 0948:20c8
    {db tmp999=66;MYCOPY(dummy7_b549)} // 0948:20c9
    {db tmp999=69;MYCOPY(dummy7_b54a)} // 0948:20ca
    {db tmp999=32;MYCOPY(dummy7_b54b)} // 0948:20cb
    {db tmp999=73;MYCOPY(dummy7_b54c)} // 0948:20cc
    {db tmp999=84;MYCOPY(dummy7_b54d)} // 0948:20cd
    {db tmp999=39;MYCOPY(dummy7_b54e)} // 0948:20ce
    {db tmp999=76;MYCOPY(dummy7_b54f)} // 0948:20cf
    {db tmp999=76;MYCOPY(dummy7_b550)} // 0948:20d0
    {db tmp999=32;MYCOPY(dummy7_b551)} // 0948:20d1
    {db tmp999=84;MYCOPY(dummy7_b552)} // 0948:20d2
    {db tmp999=65;MYCOPY(dummy7_b553)} // 0948:20d3
    {db tmp999=75;MYCOPY(dummy7_b554)} // 0948:20d4
    {db tmp999=69;MYCOPY(dummy7_b555)} // 0948:20d5
    {db tmp999=13;MYCOPY(dummy7_b556)} // 0948:20d6
    {db tmp999=85;MYCOPY(dummy7_b557)} // 0948:20d7
    {db tmp999=83;MYCOPY(dummy7_b558)} // 0948:20d8
    {db tmp999=32;MYCOPY(dummy7_b559)} // 0948:20d9
    {db tmp999=72;MYCOPY(dummy7_b55a)} // 0948:20da
    {db tmp999=79;MYCOPY(dummy7_b55b)} // 0948:20db
    {db tmp999=77;MYCOPY(dummy7_b55c)} // 0948:20dc
    {db tmp999=69;MYCOPY(dummy7_b55d)} // 0948:20dd
    {db tmp999=46;MYCOPY(dummy7_b55e)} // 0948:20de
    {db tmp999=18;MYCOPY(unk_19b40)} // 0948:20e0
    {db tmp999[32]={5,79,82,32,77,65,89,66,69,32,73,84,32,87,73,76,76,13,68,82,79,80,32,85,83,32,73,78,32,65,13,66};MYCOPY(dummy7_b561)} // 0948:20e1
    {db tmp999=76;MYCOPY(dummy7_b581)} // 0948:2101
    {db tmp999=65;MYCOPY(dummy7_b582)} // 0948:2102
    {db tmp999=67;MYCOPY(dummy7_b583)} // 0948:2103
    {db tmp999=75;MYCOPY(dummy7_b584)} // 0948:2104
    {db tmp999=32;MYCOPY(dummy7_b585)} // 0948:2105
    {db tmp999=65;MYCOPY(dummy7_b586)} // 0948:2106
    {db tmp999=66;MYCOPY(dummy7_b587)} // 0948:2107
    {db tmp999=89;MYCOPY(dummy7_b588)} // 0948:2108
    {db tmp999=83;MYCOPY(dummy7_b589)} // 0948:2109
    {db tmp999=83;MYCOPY(dummy7_b58a)} // 0948:210a
    {db tmp999=46;MYCOPY(dummy7_b58b)} // 0948:210b
    {db tmp999=46;MYCOPY(dummy7_b58c)} // 0948:210c
    {db tmp999=46;MYCOPY(dummy7_b58d)} // 0948:210d
    {db tmp999=22;MYCOPY(unk_19b6f)} // 0948:210f
    {db tmp999[32]={6,87,72,69,82,69,32,87,69,32,87,73,76,76,32,70,65,76,76,13,69,78,68,76,69,83,83,76,89,32,65,78};MYCOPY(dummy7_b590)} // 0948:2110
    {db tmp999[32]={68,32,78,79,32,79,78,69,13,87,73,76,76,32,72,69,65,82,32,85,83,32,67,65,76,76,73,78,71,13,79,85};MYCOPY(dummy7_b5b0)} // 0948:2130
    {db tmp999=84;MYCOPY(dummy7_b5d0)} // 0948:2150
    {db tmp999=32;MYCOPY(dummy7_b5d1)} // 0948:2151
    {db tmp999=70;MYCOPY(dummy7_b5d2)} // 0948:2152
    {db tmp999=79;MYCOPY(dummy7_b5d3)} // 0948:2153
    {db tmp999=82;MYCOPY(dummy7_b5d4)} // 0948:2154
    {db tmp999=32;MYCOPY(dummy7_b5d5)} // 0948:2155
    {db tmp999=72;MYCOPY(dummy7_b5d6)} // 0948:2156
    {db tmp999=69;MYCOPY(dummy7_b5d7)} // 0948:2157
    {db tmp999=76;MYCOPY(dummy7_b5d8)} // 0948:2158
    {db tmp999=80;MYCOPY(dummy7_b5d9)} // 0948:2159
    {db tmp999=46;MYCOPY(dummy7_b5da)} // 0948:215a
    {db tmp999=46;MYCOPY(dummy7_b5db)} // 0948:215b
    {db tmp999=46;MYCOPY(dummy7_b5dc)} // 0948:215c
    {db tmp999=13;MYCOPY(unk_19bbe)} // 0948:215e
    {db tmp999=3;MYCOPY(dummy7_b5df)} // 0948:215f
    {db tmp999=46;MYCOPY(dummy7_b5e0)} // 0948:2160
    {db tmp999=46;MYCOPY(dummy7_b5e1)} // 0948:2161
    {db tmp999=46;MYCOPY(dummy7_b5e2)} // 0948:2162
    {db tmp999=70;MYCOPY(dummy7_b5e3)} // 0948:2163
    {db tmp999=79;MYCOPY(dummy7_b5e4)} // 0948:2164
    {db tmp999=82;MYCOPY(dummy7_b5e5)} // 0948:2165
    {db tmp999=69;MYCOPY(dummy7_b5e6)} // 0948:2166
    {db tmp999=86;MYCOPY(dummy7_b5e7)} // 0948:2167
    {db tmp999=69;MYCOPY(dummy7_b5e8)} // 0948:2168
    {db tmp999=82;MYCOPY(dummy7_b5e9)} // 0948:2169
    {db tmp999=46;MYCOPY(dummy7_b5ea)} // 0948:216a
    {db tmp999=15;MYCOPY(unk_19bcc)} // 0948:216c
    {db tmp999=4;MYCOPY(dummy7_b5ed)} // 0948:216d
    {db tmp999=79;MYCOPY(dummy7_b5ee)} // 0948:216e
    {db tmp999=76;MYCOPY(dummy7_b5ef)} // 0948:216f
    {db tmp999=65;MYCOPY(dummy7_b5f0)} // 0948:2170
    {db tmp999=70;MYCOPY(dummy7_b5f1)} // 0948:2171
    {db tmp999=46;MYCOPY(dummy7_b5f2)} // 0948:2172
    {db tmp999=32;MYCOPY(dummy7_b5f3)} // 0948:2173
    {db tmp999=65;MYCOPY(dummy7_b5f4)} // 0948:2174
    {db tmp999=76;MYCOPY(dummy7_b5f5)} // 0948:2175
    {db tmp999=87;MYCOPY(dummy7_b5f6)} // 0948:2176
    {db tmp999=65;MYCOPY(dummy7_b5f7)} // 0948:2177
    {db tmp999=89;MYCOPY(dummy7_b5f8)} // 0948:2178
    {db tmp999=83;MYCOPY(dummy7_b5f9)} // 0948:2179
    {db tmp999=13;MYCOPY(dummy7_b5fa)} // 0948:217a
    {db tmp999=84;MYCOPY(dummy7_b5fb)} // 0948:217b
    {db tmp999=72;MYCOPY(dummy7_b5fc)} // 0948:217c
    {db tmp999=69;MYCOPY(dummy7_b5fd)} // 0948:217d
    {db tmp999=32;MYCOPY(dummy7_b5fe)} // 0948:217e
    {db tmp999=79;MYCOPY(dummy7_b5ff)} // 0948:217f
    {db tmp999=80;MYCOPY(dummy7_b600)} // 0948:2180
    {db tmp999=84;MYCOPY(dummy7_b601)} // 0948:2181
    {db tmp999=73;MYCOPY(dummy7_b602)} // 0948:2182
    {db tmp999=77;MYCOPY(dummy7_b603)} // 0948:2183
    {db tmp999=73;MYCOPY(dummy7_b604)} // 0948:2184
    {db tmp999=83;MYCOPY(dummy7_b605)} // 0948:2185
    {db tmp999=84;MYCOPY(dummy7_b606)} // 0948:2186
    {db tmp999=46;MYCOPY(dummy7_b607)} // 0948:2187
    {db tmp999=17;MYCOPY(unk_19be9)} // 0948:2189
    {db tmp999[32]={5,73,32,68,79,78,39,84,32,84,72,73,78,75,13,87,69,39,82,69,32,73,78,32,75,65,78,83,65,83,13,65};MYCOPY(dummy7_b60a)} // 0948:218a
    {db tmp999=78;MYCOPY(dummy7_b62a)} // 0948:21aa
    {db tmp999=89;MYCOPY(dummy7_b62b)} // 0948:21ab
    {db tmp999=77;MYCOPY(dummy7_b62c)} // 0948:21ac
    {db tmp999=79;MYCOPY(dummy7_b62d)} // 0948:21ad
    {db tmp999=82;MYCOPY(dummy7_b62e)} // 0948:21ae
    {db tmp999=69;MYCOPY(dummy7_b62f)} // 0948:21af
    {db tmp999=44;MYCOPY(dummy7_b630)} // 0948:21b0
    {db tmp999=32;MYCOPY(dummy7_b631)} // 0948:21b1
    {db tmp999=84;MYCOPY(dummy7_b632)} // 0948:21b2
    {db tmp999=79;MYCOPY(dummy7_b633)} // 0948:21b3
    {db tmp999=84;MYCOPY(dummy7_b634)} // 0948:21b4
    {db tmp999=79;MYCOPY(dummy7_b635)} // 0948:21b5
    {db tmp999=46;MYCOPY(dummy7_b636)} // 0948:21b6
    {db tmp999=17;MYCOPY(unk_19c18)} // 0948:21b8
    {db tmp999=3;MYCOPY(dummy7_b639)} // 0948:21b9
    {db tmp999=87;MYCOPY(dummy7_b63a)} // 0948:21ba
    {db tmp999=72;MYCOPY(dummy7_b63b)} // 0948:21bb
    {db tmp999=69;MYCOPY(dummy7_b63c)} // 0948:21bc
    {db tmp999=82;MYCOPY(dummy7_b63d)} // 0948:21bd
    {db tmp999=69;MYCOPY(dummy7_b63e)} // 0948:21be
    {db tmp999=39;MYCOPY(dummy7_b63f)} // 0948:21bf
    {db tmp999=83;MYCOPY(dummy7_b640)} // 0948:21c0
    {db tmp999=32;MYCOPY(dummy7_b641)} // 0948:21c1
    {db tmp999=75;MYCOPY(dummy7_b642)} // 0948:21c2
    {db tmp999=65;MYCOPY(dummy7_b643)} // 0948:21c3
    {db tmp999=78;MYCOPY(dummy7_b644)} // 0948:21c4
    {db tmp999=83;MYCOPY(dummy7_b645)} // 0948:21c5
    {db tmp999=65;MYCOPY(dummy7_b646)} // 0948:21c6
    {db tmp999=83;MYCOPY(dummy7_b647)} // 0948:21c7
    {db tmp999=63;MYCOPY(dummy7_b648)} // 0948:21c8
    {db tmp999=17;MYCOPY(unk_19c2a)} // 0948:21ca
    {db tmp999=3;MYCOPY(dummy7_b64b)} // 0948:21cb
    {db tmp999=65;MYCOPY(dummy7_b64c)} // 0948:21cc
    {db tmp999=78;MYCOPY(dummy7_b64d)} // 0948:21cd
    {db tmp999=68;MYCOPY(dummy7_b64e)} // 0948:21ce
    {db tmp999=32;MYCOPY(dummy7_b64f)} // 0948:21cf
    {db tmp999=87;MYCOPY(dummy7_b650)} // 0948:21d0
    {db tmp999=72;MYCOPY(dummy7_b651)} // 0948:21d1
    {db tmp999=79;MYCOPY(dummy7_b652)} // 0948:21d2
    {db tmp999=39;MYCOPY(dummy7_b653)} // 0948:21d3
    {db tmp999=83;MYCOPY(dummy7_b654)} // 0948:21d4
    {db tmp999=32;MYCOPY(dummy7_b655)} // 0948:21d5
    {db tmp999=84;MYCOPY(dummy7_b656)} // 0948:21d6
    {db tmp999=79;MYCOPY(dummy7_b657)} // 0948:21d7
    {db tmp999=84;MYCOPY(dummy7_b658)} // 0948:21d8
    {db tmp999=79;MYCOPY(dummy7_b659)} // 0948:21d9
    {db tmp999=63;MYCOPY(dummy7_b65a)} // 0948:21da
    {db tmp999=18;MYCOPY(unk_19c3c)} // 0948:21dc
    {db tmp999=4;MYCOPY(dummy7_b65d)} // 0948:21dd
    {db tmp999=84;MYCOPY(dummy7_b65e)} // 0948:21de
    {db tmp999=72;MYCOPY(dummy7_b65f)} // 0948:21df
    {db tmp999=79;MYCOPY(dummy7_b660)} // 0948:21e0
    {db tmp999=83;MYCOPY(dummy7_b661)} // 0948:21e1
    {db tmp999=69;MYCOPY(dummy7_b662)} // 0948:21e2
    {db tmp999=32;MYCOPY(dummy7_b663)} // 0948:21e3
    {db tmp999=80;MYCOPY(dummy7_b664)} // 0948:21e4
    {db tmp999=85;MYCOPY(dummy7_b665)} // 0948:21e5
    {db tmp999=77;MYCOPY(dummy7_b666)} // 0948:21e6
    {db tmp999=80;MYCOPY(dummy7_b667)} // 0948:21e7
    {db tmp999=83;MYCOPY(dummy7_b668)} // 0948:21e8
    {db tmp999=32;MYCOPY(dummy7_b669)} // 0948:21e9
    {db tmp999=77;MYCOPY(dummy7_b66a)} // 0948:21ea
    {db tmp999=65;MYCOPY(dummy7_b66b)} // 0948:21eb
    {db tmp999=75;MYCOPY(dummy7_b66c)} // 0948:21ec
    {db tmp999=69;MYCOPY(dummy7_b66d)} // 0948:21ed
    {db tmp999=13;MYCOPY(dummy7_b66e)} // 0948:21ee
    {db tmp999=77;MYCOPY(dummy7_b66f)} // 0948:21ef
    {db tmp999=69;MYCOPY(dummy7_b670)} // 0948:21f0
    {db tmp999=32;MYCOPY(dummy7_b671)} // 0948:21f1
    {db tmp999=68;MYCOPY(dummy7_b672)} // 0948:21f2
    {db tmp999=73;MYCOPY(dummy7_b673)} // 0948:21f3
    {db tmp999=90;MYCOPY(dummy7_b674)} // 0948:21f4
    {db tmp999=90;MYCOPY(dummy7_b675)} // 0948:21f5
    {db tmp999=89;MYCOPY(dummy7_b676)} // 0948:21f6
    {db tmp999=46;MYCOPY(dummy7_b677)} // 0948:21f7
    {db tmp999=17;MYCOPY(unk_19c59)} // 0948:21f9
    {db tmp999=4;MYCOPY(dummy7_b67a)} // 0948:21fa
    {db tmp999=84;MYCOPY(dummy7_b67b)} // 0948:21fb
    {db tmp999=72;MYCOPY(dummy7_b67c)} // 0948:21fc
    {db tmp999=69;MYCOPY(dummy7_b67d)} // 0948:21fd
    {db tmp999=89;MYCOPY(dummy7_b67e)} // 0948:21fe
    {db tmp999=32;MYCOPY(dummy7_b67f)} // 0948:21ff
    {db tmp999=77;MYCOPY(dummy7_b680)} // 0948:2200
    {db tmp999=65;MYCOPY(dummy7_b681)} // 0948:2201
    {db tmp999=75;MYCOPY(dummy7_b682)} // 0948:2202
    {db tmp999=69;MYCOPY(dummy7_b683)} // 0948:2203
    {db tmp999=32;MYCOPY(dummy7_b684)} // 0948:2204
    {db tmp999=89;MYCOPY(dummy7_b685)} // 0948:2205
    {db tmp999=79;MYCOPY(dummy7_b686)} // 0948:2206
    {db tmp999=85;MYCOPY(dummy7_b687)} // 0948:2207
    {db tmp999=13;MYCOPY(dummy7_b688)} // 0948:2208
    {db tmp999=76;MYCOPY(dummy7_b689)} // 0948:2209
    {db tmp999=79;MYCOPY(dummy7_b68a)} // 0948:220a
    {db tmp999=79;MYCOPY(dummy7_b68b)} // 0948:220b
    {db tmp999=75;MYCOPY(dummy7_b68c)} // 0948:220c
    {db tmp999=32;MYCOPY(dummy7_b68d)} // 0948:220d
    {db tmp999=76;MYCOPY(dummy7_b68e)} // 0948:220e
    {db tmp999=73;MYCOPY(dummy7_b68f)} // 0948:220f
    {db tmp999=75;MYCOPY(dummy7_b690)} // 0948:2210
    {db tmp999=69;MYCOPY(dummy7_b691)} // 0948:2211
    {db tmp999=32;MYCOPY(dummy7_b692)} // 0948:2212
    {db tmp999=79;MYCOPY(dummy7_b693)} // 0948:2213
    {db tmp999=76;MYCOPY(dummy7_b694)} // 0948:2214
    {db tmp999=65;MYCOPY(dummy7_b695)} // 0948:2215
    {db tmp999=70;MYCOPY(dummy7_b696)} // 0948:2216
    {db tmp999=46;MYCOPY(dummy7_b697)} // 0948:2217
    {db tmp999=18;MYCOPY(unk_19c79)} // 0948:2219
    {db tmp999[32]={5,65,78,68,32,84,72,69,89,32,77,65,75,69,13,89,79,85,82,32,86,79,73,67,69,32,83,79,85,78,68,13};MYCOPY(dummy7_b69a)} // 0948:221a
    {db tmp999=70;MYCOPY(dummy7_b6ba)} // 0948:223a
    {db tmp999=85;MYCOPY(dummy7_b6bb)} // 0948:223b
    {db tmp999=78;MYCOPY(dummy7_b6bc)} // 0948:223c
    {db tmp999=78;MYCOPY(dummy7_b6bd)} // 0948:223d
    {db tmp999=89;MYCOPY(dummy7_b6be)} // 0948:223e
    {db tmp999=32;MYCOPY(dummy7_b6bf)} // 0948:223f
    {db tmp999=84;MYCOPY(dummy7_b6c0)} // 0948:2240
    {db tmp999=79;MYCOPY(dummy7_b6c1)} // 0948:2241
    {db tmp999=79;MYCOPY(dummy7_b6c2)} // 0948:2242
    {db tmp999=46;MYCOPY(dummy7_b6c3)} // 0948:2243
    {db tmp999=18;MYCOPY(unk_19ca5)} // 0948:2245
    {db tmp999=4;MYCOPY(dummy7_b6c6)} // 0948:2246
    {db tmp999=87;MYCOPY(dummy7_b6c7)} // 0948:2247
    {db tmp999=79;MYCOPY(dummy7_b6c8)} // 0948:2248
    {db tmp999=87;MYCOPY(dummy7_b6c9)} // 0948:2249
    {db tmp999=33;MYCOPY(dummy7_b6ca)} // 0948:224a
    {db tmp999=32;MYCOPY(dummy7_b6cb)} // 0948:224b
    {db tmp999=76;MYCOPY(dummy7_b6cc)} // 0948:224c
    {db tmp999=79;MYCOPY(dummy7_b6cd)} // 0948:224d
    {db tmp999=79;MYCOPY(dummy7_b6ce)} // 0948:224e
    {db tmp999=75;MYCOPY(dummy7_b6cf)} // 0948:224f
    {db tmp999=32;MYCOPY(dummy7_b6d0)} // 0948:2250
    {db tmp999=65;MYCOPY(dummy7_b6d1)} // 0948:2251
    {db tmp999=84;MYCOPY(dummy7_b6d2)} // 0948:2252
    {db tmp999=32;MYCOPY(dummy7_b6d3)} // 0948:2253
    {db tmp999=65;MYCOPY(dummy7_b6d4)} // 0948:2254
    {db tmp999=76;MYCOPY(dummy7_b6d5)} // 0948:2255
    {db tmp999=76;MYCOPY(dummy7_b6d6)} // 0948:2256
    {db tmp999=13;MYCOPY(dummy7_b6d7)} // 0948:2257
    {db tmp999=84;MYCOPY(dummy7_b6d8)} // 0948:2258
    {db tmp999=72;MYCOPY(dummy7_b6d9)} // 0948:2259
    {db tmp999=73;MYCOPY(dummy7_b6da)} // 0948:225a
    {db tmp999=83;MYCOPY(dummy7_b6db)} // 0948:225b
    {db tmp999=32;MYCOPY(dummy7_b6dc)} // 0948:225c
    {db tmp999=67;MYCOPY(dummy7_b6dd)} // 0948:225d
    {db tmp999=65;MYCOPY(dummy7_b6de)} // 0948:225e
    {db tmp999=78;MYCOPY(dummy7_b6df)} // 0948:225f
    {db tmp999=68;MYCOPY(dummy7_b6e0)} // 0948:2260
    {db tmp999=89;MYCOPY(dummy7_b6e1)} // 0948:2261
    {db tmp999=33;MYCOPY(dummy7_b6e2)} // 0948:2262
    {db tmp999=16;MYCOPY(unk_19cc4)} // 0948:2264
    {db tmp999=4;MYCOPY(dummy7_b6e5)} // 0948:2265
    {db tmp999=79;MYCOPY(dummy7_b6e6)} // 0948:2266
    {db tmp999=76;MYCOPY(dummy7_b6e7)} // 0948:2267
    {db tmp999=65;MYCOPY(dummy7_b6e8)} // 0948:2268
    {db tmp999=70;MYCOPY(dummy7_b6e9)} // 0948:2269
    {db tmp999=44;MYCOPY(dummy7_b6ea)} // 0948:226a
    {db tmp999=32;MYCOPY(dummy7_b6eb)} // 0948:226b
    {db tmp999=80;MYCOPY(dummy7_b6ec)} // 0948:226c
    {db tmp999=85;MYCOPY(dummy7_b6ed)} // 0948:226d
    {db tmp999=84;MYCOPY(dummy7_b6ee)} // 0948:226e
    {db tmp999=32;MYCOPY(dummy7_b6ef)} // 0948:226f
    {db tmp999=84;MYCOPY(dummy7_b6f0)} // 0948:2270
    {db tmp999=72;MYCOPY(dummy7_b6f1)} // 0948:2271
    {db tmp999=65;MYCOPY(dummy7_b6f2)} // 0948:2272
    {db tmp999=84;MYCOPY(dummy7_b6f3)} // 0948:2273
    {db tmp999=13;MYCOPY(dummy7_b6f4)} // 0948:2274
    {db tmp999=67;MYCOPY(dummy7_b6f5)} // 0948:2275
    {db tmp999=65;MYCOPY(dummy7_b6f6)} // 0948:2276
    {db tmp999=78;MYCOPY(dummy7_b6f7)} // 0948:2277
    {db tmp999=68;MYCOPY(dummy7_b6f8)} // 0948:2278
    {db tmp999=89;MYCOPY(dummy7_b6f9)} // 0948:2279
    {db tmp999=32;MYCOPY(dummy7_b6fa)} // 0948:227a
    {db tmp999=66;MYCOPY(dummy7_b6fb)} // 0948:227b
    {db tmp999=65;MYCOPY(dummy7_b6fc)} // 0948:227c
    {db tmp999=67;MYCOPY(dummy7_b6fd)} // 0948:227d
    {db tmp999=75;MYCOPY(dummy7_b6fe)} // 0948:227e
    {db tmp999=46;MYCOPY(dummy7_b6ff)} // 0948:227f
    {db tmp999=19;MYCOPY(unk_19ce1)} // 0948:2281
    {db tmp999[32]={4,67,79,77,69,32,79,78,32,71,85,89,83,44,13,73,84,39,83,32,70,79,82,32,77,89,32,75,73,68,83,46};MYCOPY(dummy7_b702)} // 0948:2282
    {db tmp999=14;MYCOPY(unk_19d03)} // 0948:22a3
    {db tmp999=3;MYCOPY(dummy7_b724)} // 0948:22a4
    {db tmp999=89;MYCOPY(dummy7_b725)} // 0948:22a5
    {db tmp999=69;MYCOPY(dummy7_b726)} // 0948:22a6
    {db tmp999=65;MYCOPY(dummy7_b727)} // 0948:22a7
    {db tmp999=72;MYCOPY(dummy7_b728)} // 0948:22a8
    {db tmp999=44;MYCOPY(dummy7_b729)} // 0948:22a9
    {db tmp999=32;MYCOPY(dummy7_b72a)} // 0948:22aa
    {db tmp999=82;MYCOPY(dummy7_b72b)} // 0948:22ab
    {db tmp999=73;MYCOPY(dummy7_b72c)} // 0948:22ac
    {db tmp999=71;MYCOPY(dummy7_b72d)} // 0948:22ad
    {db tmp999=72;MYCOPY(dummy7_b72e)} // 0948:22ae
    {db tmp999=84;MYCOPY(dummy7_b72f)} // 0948:22af
    {db tmp999=46;MYCOPY(dummy7_b730)} // 0948:22b0
    {db tmp999=21;MYCOPY(unk_19d12)} // 0948:22b2
    {db tmp999[32]={5,79,72,32,78,79,44,32,73,32,74,85,83,84,13,84,72,79,85,71,72,84,32,79,70,13,83,79,77,69,84,72};MYCOPY(dummy7_b733)} // 0948:22b3
    {db tmp999=73;MYCOPY(dummy7_b753)} // 0948:22d3
    {db tmp999=78;MYCOPY(dummy7_b754)} // 0948:22d4
    {db tmp999=71;MYCOPY(dummy7_b755)} // 0948:22d5
    {db tmp999=32;MYCOPY(dummy7_b756)} // 0948:22d6
    {db tmp999=84;MYCOPY(dummy7_b757)} // 0948:22d7
    {db tmp999=69;MYCOPY(dummy7_b758)} // 0948:22d8
    {db tmp999=82;MYCOPY(dummy7_b759)} // 0948:22d9
    {db tmp999=82;MYCOPY(dummy7_b75a)} // 0948:22da
    {db tmp999=73;MYCOPY(dummy7_b75b)} // 0948:22db
    {db tmp999=66;MYCOPY(dummy7_b75c)} // 0948:22dc
    {db tmp999=76;MYCOPY(dummy7_b75d)} // 0948:22dd
    {db tmp999=69;MYCOPY(dummy7_b75e)} // 0948:22de
    {db tmp999=46;MYCOPY(dummy7_b75f)} // 0948:22df
    {db tmp999=23;MYCOPY(unk_19d41)} // 0948:22e1
    {db tmp999[32]={5,72,79,87,32,67,65,78,32,89,79,85,32,84,72,73,78,75,13,79,70,32,83,79,77,69,84,72,73,78,71,32};MYCOPY(dummy7_b762)} // 0948:22e2
    {db tmp999=84;MYCOPY(dummy7_b782)} // 0948:2302
    {db tmp999=69;MYCOPY(dummy7_b783)} // 0948:2303
    {db tmp999=82;MYCOPY(dummy7_b784)} // 0948:2304
    {db tmp999=82;MYCOPY(dummy7_b785)} // 0948:2305
    {db tmp999=73;MYCOPY(dummy7_b786)} // 0948:2306
    {db tmp999=66;MYCOPY(dummy7_b787)} // 0948:2307
    {db tmp999=76;MYCOPY(dummy7_b788)} // 0948:2308
    {db tmp999=69;MYCOPY(dummy7_b789)} // 0948:2309
    {db tmp999=13;MYCOPY(dummy7_b78a)} // 0948:230a
    {db tmp999=73;MYCOPY(dummy7_b78b)} // 0948:230b
    {db tmp999=78;MYCOPY(dummy7_b78c)} // 0948:230c
    {db tmp999=32;MYCOPY(dummy7_b78d)} // 0948:230d
    {db tmp999=65;MYCOPY(dummy7_b78e)} // 0948:230e
    {db tmp999=32;MYCOPY(dummy7_b78f)} // 0948:230f
    {db tmp999=80;MYCOPY(dummy7_b790)} // 0948:2310
    {db tmp999=76;MYCOPY(dummy7_b791)} // 0948:2311
    {db tmp999=65;MYCOPY(dummy7_b792)} // 0948:2312
    {db tmp999=67;MYCOPY(dummy7_b793)} // 0948:2313
    {db tmp999=69;MYCOPY(dummy7_b794)} // 0948:2314
    {db tmp999=32;MYCOPY(dummy7_b795)} // 0948:2315
    {db tmp999=76;MYCOPY(dummy7_b796)} // 0948:2316
    {db tmp999=73;MYCOPY(dummy7_b797)} // 0948:2317
    {db tmp999=75;MYCOPY(dummy7_b798)} // 0948:2318
    {db tmp999=69;MYCOPY(dummy7_b799)} // 0948:2319
    {db tmp999=32;MYCOPY(dummy7_b79a)} // 0948:231a
    {db tmp999=84;MYCOPY(dummy7_b79b)} // 0948:231b
    {db tmp999=72;MYCOPY(dummy7_b79c)} // 0948:231c
    {db tmp999=73;MYCOPY(dummy7_b79d)} // 0948:231d
    {db tmp999=83;MYCOPY(dummy7_b79e)} // 0948:231e
    {db tmp999=63;MYCOPY(dummy7_b79f)} // 0948:231f
    {db tmp999=21;MYCOPY(unk_19d81)} // 0948:2321
    {db tmp999[32]={5,73,70,32,87,69,32,68,79,78,39,84,32,71,69,84,13,72,79,77,69,32,83,79,79,78,44,32,87,69,32,87};MYCOPY(dummy7_b7a2)} // 0948:2322
    {db tmp999=73;MYCOPY(dummy7_b7c2)} // 0948:2342
    {db tmp999=76;MYCOPY(dummy7_b7c3)} // 0948:2343
    {db tmp999=76;MYCOPY(dummy7_b7c4)} // 0948:2344
    {db tmp999=13;MYCOPY(dummy7_b7c5)} // 0948:2345
    {db tmp999=66;MYCOPY(dummy7_b7c6)} // 0948:2346
    {db tmp999=69;MYCOPY(dummy7_b7c7)} // 0948:2347
    {db tmp999=32;MYCOPY(dummy7_b7c8)} // 0948:2348
    {db tmp999=76;MYCOPY(dummy7_b7c9)} // 0948:2349
    {db tmp999=65;MYCOPY(dummy7_b7ca)} // 0948:234a
    {db tmp999=84;MYCOPY(dummy7_b7cb)} // 0948:234b
    {db tmp999=69;MYCOPY(dummy7_b7cc)} // 0948:234c
    {db tmp999=32;MYCOPY(dummy7_b7cd)} // 0948:234d
    {db tmp999=70;MYCOPY(dummy7_b7ce)} // 0948:234e
    {db tmp999=79;MYCOPY(dummy7_b7cf)} // 0948:234f
    {db tmp999=82;MYCOPY(dummy7_b7d0)} // 0948:2350
    {db tmp999=32;MYCOPY(dummy7_b7d1)} // 0948:2351
    {db tmp999=83;MYCOPY(dummy7_b7d2)} // 0948:2352
    {db tmp999=85;MYCOPY(dummy7_b7d3)} // 0948:2353
    {db tmp999=80;MYCOPY(dummy7_b7d4)} // 0948:2354
    {db tmp999=80;MYCOPY(dummy7_b7d5)} // 0948:2355
    {db tmp999=69;MYCOPY(dummy7_b7d6)} // 0948:2356
    {db tmp999=82;MYCOPY(dummy7_b7d7)} // 0948:2357
    {db tmp999=33;MYCOPY(dummy7_b7d8)} // 0948:2358
    {db tmp999=18;MYCOPY(unk_19dba)} // 0948:235a
    {db tmp999[32]={5,84,72,69,32,87,65,76,76,80,65,80,69,82,32,73,78,13,72,69,82,69,32,73,83,32,65,87,70,85,76,76};MYCOPY(dummy7_b7db)} // 0948:235b
    {db tmp999=89;MYCOPY(dummy7_b7fb)} // 0948:237b
    {db tmp999=13;MYCOPY(dummy7_b7fc)} // 0948:237c
    {db tmp999=83;MYCOPY(dummy7_b7fd)} // 0948:237d
    {db tmp999=84;MYCOPY(dummy7_b7fe)} // 0948:237e
    {db tmp999=82;MYCOPY(dummy7_b7ff)} // 0948:237f
    {db tmp999=65;MYCOPY(dummy7_b800)} // 0948:2380
    {db tmp999=78;MYCOPY(dummy7_b801)} // 0948:2381
    {db tmp999=71;MYCOPY(dummy7_b802)} // 0948:2382
    {db tmp999=69;MYCOPY(dummy7_b803)} // 0948:2383
    {db tmp999=46;MYCOPY(dummy7_b804)} // 0948:2384
    {db tmp999=13;MYCOPY(unk_19de6)} // 0948:2386
    {db tmp999=4;MYCOPY(dummy7_b807)} // 0948:2387
    {db tmp999=87;MYCOPY(dummy7_b808)} // 0948:2388
    {db tmp999=72;MYCOPY(dummy7_b809)} // 0948:2389
    {db tmp999=65;MYCOPY(dummy7_b80a)} // 0948:238a
    {db tmp999=84;MYCOPY(dummy7_b80b)} // 0948:238b
    {db tmp999=32;MYCOPY(dummy7_b80c)} // 0948:238c
    {db tmp999=68;MYCOPY(dummy7_b80d)} // 0948:238d
    {db tmp999=79;MYCOPY(dummy7_b80e)} // 0948:238e
    {db tmp999=32;MYCOPY(dummy7_b80f)} // 0948:238f
    {db tmp999=89;MYCOPY(dummy7_b810)} // 0948:2390
    {db tmp999=79;MYCOPY(dummy7_b811)} // 0948:2391
    {db tmp999=85;MYCOPY(dummy7_b812)} // 0948:2392
    {db tmp999=13;MYCOPY(dummy7_b813)} // 0948:2393
    {db tmp999=84;MYCOPY(dummy7_b814)} // 0948:2394
    {db tmp999=72;MYCOPY(dummy7_b815)} // 0948:2395
    {db tmp999=73;MYCOPY(dummy7_b816)} // 0948:2396
    {db tmp999=78;MYCOPY(dummy7_b817)} // 0948:2397
    {db tmp999=75;MYCOPY(dummy7_b818)} // 0948:2398
    {db tmp999=32;MYCOPY(dummy7_b819)} // 0948:2399
    {db tmp999=79;MYCOPY(dummy7_b81a)} // 0948:239a
    {db tmp999=76;MYCOPY(dummy7_b81b)} // 0948:239b
    {db tmp999=65;MYCOPY(dummy7_b81c)} // 0948:239c
    {db tmp999=70;MYCOPY(dummy7_b81d)} // 0948:239d
    {db tmp999=63;MYCOPY(dummy7_b81e)} // 0948:239e
    {db tmp999=20;MYCOPY(unk_19e00)} // 0948:23a0
    {db tmp999[32]={4,65,78,89,79,78,69,32,70,79,82,32,65,32,81,85,73,67,75,13,71,65,77,69,32,79,70,32,67,72,69,67};MYCOPY(dummy7_b821)} // 0948:23a1
    {db tmp999=75;MYCOPY(dummy7_b841)} // 0948:23c1
    {db tmp999=69;MYCOPY(dummy7_b842)} // 0948:23c2
    {db tmp999=82;MYCOPY(dummy7_b843)} // 0948:23c3
    {db tmp999=83;MYCOPY(dummy7_b844)} // 0948:23c4
    {db tmp999=63;MYCOPY(dummy7_b845)} // 0948:23c5
    {db tmp999=17;MYCOPY(unk_19e27)} // 0948:23c7
    {db tmp999[32]={5,73,32,68,79,78,39,84,32,75,78,79,87,32,73,70,13,87,69,32,67,65,78,32,77,65,75,69,32,73,84,13};MYCOPY(dummy7_b848)} // 0948:23c8
    {db tmp999=77;MYCOPY(dummy7_b868)} // 0948:23e8
    {db tmp999=85;MYCOPY(dummy7_b869)} // 0948:23e9
    {db tmp999=67;MYCOPY(dummy7_b86a)} // 0948:23ea
    {db tmp999=72;MYCOPY(dummy7_b86b)} // 0948:23eb
    {db tmp999=32;MYCOPY(dummy7_b86c)} // 0948:23ec
    {db tmp999=70;MYCOPY(dummy7_b86d)} // 0948:23ed
    {db tmp999=85;MYCOPY(dummy7_b86e)} // 0948:23ee
    {db tmp999=82;MYCOPY(dummy7_b86f)} // 0948:23ef
    {db tmp999=84;MYCOPY(dummy7_b870)} // 0948:23f0
    {db tmp999=72;MYCOPY(dummy7_b871)} // 0948:23f1
    {db tmp999=69;MYCOPY(dummy7_b872)} // 0948:23f2
    {db tmp999=82;MYCOPY(dummy7_b873)} // 0948:23f3
    {db tmp999=46;MYCOPY(dummy7_b874)} // 0948:23f4
    {db tmp999=19;MYCOPY(unk_19e56)} // 0948:23f6
    {db tmp999[32]={4,79,70,32,67,79,85,82,83,69,32,87,69,32,67,65,78,46,13,87,69,39,82,69,32,86,73,75,73,78,71,83};MYCOPY(dummy7_b877)} // 0948:23f7
    {db tmp999=33;MYCOPY(dummy7_b897)} // 0948:2417
    {db tmp999=16;MYCOPY(unk_19e79)} // 0948:2419
    {db tmp999=4;MYCOPY(dummy7_b89a)} // 0948:241a
    {db tmp999=84;MYCOPY(dummy7_b89b)} // 0948:241b
    {db tmp999=72;MYCOPY(dummy7_b89c)} // 0948:241c
    {db tmp999=65;MYCOPY(dummy7_b89d)} // 0948:241d
    {db tmp999=78;MYCOPY(dummy7_b89e)} // 0948:241e
    {db tmp999=75;MYCOPY(dummy7_b89f)} // 0948:241f
    {db tmp999=83;MYCOPY(dummy7_b8a0)} // 0948:2420
    {db tmp999=44;MYCOPY(dummy7_b8a1)} // 0948:2421
    {db tmp999=32;MYCOPY(dummy7_b8a2)} // 0948:2422
    {db tmp999=73;MYCOPY(dummy7_b8a3)} // 0948:2423
    {db tmp999=32;MYCOPY(dummy7_b8a4)} // 0948:2424
    {db tmp999=70;MYCOPY(dummy7_b8a5)} // 0948:2425
    {db tmp999=69;MYCOPY(dummy7_b8a6)} // 0948:2426
    {db tmp999=69;MYCOPY(dummy7_b8a7)} // 0948:2427
    {db tmp999=76;MYCOPY(dummy7_b8a8)} // 0948:2428
    {db tmp999=13;MYCOPY(dummy7_b8a9)} // 0948:2429
    {db tmp999=66;MYCOPY(dummy7_b8aa)} // 0948:242a
    {db tmp999=69;MYCOPY(dummy7_b8ab)} // 0948:242b
    {db tmp999=84;MYCOPY(dummy7_b8ac)} // 0948:242c
    {db tmp999=84;MYCOPY(dummy7_b8ad)} // 0948:242d
    {db tmp999=69;MYCOPY(dummy7_b8ae)} // 0948:242e
    {db tmp999=82;MYCOPY(dummy7_b8af)} // 0948:242f
    {db tmp999=32;MYCOPY(dummy7_b8b0)} // 0948:2430
    {db tmp999=78;MYCOPY(dummy7_b8b1)} // 0948:2431
    {db tmp999=79;MYCOPY(dummy7_b8b2)} // 0948:2432
    {db tmp999=87;MYCOPY(dummy7_b8b3)} // 0948:2433
    {db tmp999=46;MYCOPY(dummy7_b8b4)} // 0948:2434
    {db tmp999=23;MYCOPY(unk_19e96)} // 0948:2436
    {db tmp999[32]={4,87,65,73,84,44,32,76,69,84,39,83,32,74,85,83,84,32,82,69,83,84,13,72,69,82,69,32,70,79,82,32};MYCOPY(dummy7_b8b7)} // 0948:2437
    {db tmp999=65;MYCOPY(dummy7_b8d7)} // 0948:2457
    {db tmp999=32;MYCOPY(dummy7_b8d8)} // 0948:2458
    {db tmp999=87;MYCOPY(dummy7_b8d9)} // 0948:2459
    {db tmp999=72;MYCOPY(dummy7_b8da)} // 0948:245a
    {db tmp999=73;MYCOPY(dummy7_b8db)} // 0948:245b
    {db tmp999=76;MYCOPY(dummy7_b8dc)} // 0948:245c
    {db tmp999=69;MYCOPY(dummy7_b8dd)} // 0948:245d
    {db tmp999=46;MYCOPY(dummy7_b8de)} // 0948:245e
    {db tmp999=18;MYCOPY(unk_19ec0)} // 0948:2460
    {db tmp999[32]={5,72,69,32,74,85,83,84,32,87,65,78,84,83,32,84,79,13,83,84,85,70,70,32,72,73,83,32,70,65,67,69};MYCOPY(dummy7_b8e1)} // 0948:2461
    {db tmp999=13;MYCOPY(dummy7_b901)} // 0948:2481
    {db tmp999=87;MYCOPY(dummy7_b902)} // 0948:2482
    {db tmp999=73;MYCOPY(dummy7_b903)} // 0948:2483
    {db tmp999=84;MYCOPY(dummy7_b904)} // 0948:2484
    {db tmp999=72;MYCOPY(dummy7_b905)} // 0948:2485
    {db tmp999=32;MYCOPY(dummy7_b906)} // 0948:2486
    {db tmp999=67;MYCOPY(dummy7_b907)} // 0948:2487
    {db tmp999=65;MYCOPY(dummy7_b908)} // 0948:2488
    {db tmp999=78;MYCOPY(dummy7_b909)} // 0948:2489
    {db tmp999=68;MYCOPY(dummy7_b90a)} // 0948:248a
    {db tmp999=89;MYCOPY(dummy7_b90b)} // 0948:248b
    {db tmp999=46;MYCOPY(dummy7_b90c)} // 0948:248c
    {db tmp999=21;MYCOPY(unk_19eee)} // 0948:248e
    {db tmp999[32]={5,76,69,84,39,83,32,78,79,84,32,83,76,79,87,32,68,79,87,78,13,78,79,87,46,32,73,32,75,78,79,87};MYCOPY(dummy7_b90f)} // 0948:248f
    {db tmp999=32;MYCOPY(dummy7_b92f)} // 0948:24af
    {db tmp999=87;MYCOPY(dummy7_b930)} // 0948:24b0
    {db tmp999=69;MYCOPY(dummy7_b931)} // 0948:24b1
    {db tmp999=39;MYCOPY(dummy7_b932)} // 0948:24b2
    {db tmp999=82;MYCOPY(dummy7_b933)} // 0948:24b3
    {db tmp999=69;MYCOPY(dummy7_b934)} // 0948:24b4
    {db tmp999=13;MYCOPY(dummy7_b935)} // 0948:24b5
    {db tmp999=71;MYCOPY(dummy7_b936)} // 0948:24b6
    {db tmp999=69;MYCOPY(dummy7_b937)} // 0948:24b7
    {db tmp999=84;MYCOPY(dummy7_b938)} // 0948:24b8
    {db tmp999=84;MYCOPY(dummy7_b939)} // 0948:24b9
    {db tmp999=73;MYCOPY(dummy7_b93a)} // 0948:24ba
    {db tmp999=78;MYCOPY(dummy7_b93b)} // 0948:24bb
    {db tmp999=71;MYCOPY(dummy7_b93c)} // 0948:24bc
    {db tmp999=32;MYCOPY(dummy7_b93d)} // 0948:24bd
    {db tmp999=67;MYCOPY(dummy7_b93e)} // 0948:24be
    {db tmp999=76;MYCOPY(dummy7_b93f)} // 0948:24bf
    {db tmp999=79;MYCOPY(dummy7_b940)} // 0948:24c0
    {db tmp999=83;MYCOPY(dummy7_b941)} // 0948:24c1
    {db tmp999=69;MYCOPY(dummy7_b942)} // 0948:24c2
    {db tmp999=46;MYCOPY(dummy7_b943)} // 0948:24c3
    {db tmp999=20;MYCOPY(unk_19f25)} // 0948:24c5
    {db tmp999[32]={4,87,69,76,76,44,32,87,69,39,82,69,32,77,65,75,73,78,71,13,80,82,79,71,82,69,83,83,46,46,46,0};MYCOPY(dummy7_b946)} // 0948:24c6
    {db tmp999=21;MYCOPY(unk_19f46)} // 0948:24e6
    {db tmp999[32]={5,73,39,77,32,83,73,67,75,32,79,70,32,83,80,73,75,69,83,44,13,73,32,87,65,78,84,32,77,79,78,83};MYCOPY(dummy7_b967)} // 0948:24e7
    {db tmp999=84;MYCOPY(dummy7_b987)} // 0948:2507
    {db tmp999=69;MYCOPY(dummy7_b988)} // 0948:2508
    {db tmp999=82;MYCOPY(dummy7_b989)} // 0948:2509
    {db tmp999=83;MYCOPY(dummy7_b98a)} // 0948:250a
    {db tmp999=33;MYCOPY(dummy7_b98b)} // 0948:250b
    {db tmp999=32;MYCOPY(dummy7_b98c)} // 0948:250c
    {db tmp999=73;MYCOPY(dummy7_b98d)} // 0948:250d
    {db tmp999=13;MYCOPY(dummy7_b98e)} // 0948:250e
    {db tmp999=87;MYCOPY(dummy7_b98f)} // 0948:250f
    {db tmp999=65;MYCOPY(dummy7_b990)} // 0948:2510
    {db tmp999=78;MYCOPY(dummy7_b991)} // 0948:2511
    {db tmp999=84;MYCOPY(dummy7_b992)} // 0948:2512
    {db tmp999=32;MYCOPY(dummy7_b993)} // 0948:2513
    {db tmp999=77;MYCOPY(dummy7_b994)} // 0948:2514
    {db tmp999=79;MYCOPY(dummy7_b995)} // 0948:2515
    {db tmp999=78;MYCOPY(dummy7_b996)} // 0948:2516
    {db tmp999=83;MYCOPY(dummy7_b997)} // 0948:2517
    {db tmp999=84;MYCOPY(dummy7_b998)} // 0948:2518
    {db tmp999=69;MYCOPY(dummy7_b999)} // 0948:2519
    {db tmp999=82;MYCOPY(dummy7_b99a)} // 0948:251a
    {db tmp999=83;MYCOPY(dummy7_b99b)} // 0948:251b
    {db tmp999=33;MYCOPY(dummy7_b99c)} // 0948:251c
    {db tmp999=15;MYCOPY(unk_19f7e)} // 0948:251e
    {db tmp999=3;MYCOPY(dummy7_b99f)} // 0948:251f
    {db tmp999=83;MYCOPY(dummy7_b9a0)} // 0948:2520
    {db tmp999=84;MYCOPY(dummy7_b9a1)} // 0948:2521
    {db tmp999=79;MYCOPY(dummy7_b9a2)} // 0948:2522
    {db tmp999=80;MYCOPY(dummy7_b9a3)} // 0948:2523
    {db tmp999=32;MYCOPY(dummy7_b9a4)} // 0948:2524
    {db tmp999=87;MYCOPY(dummy7_b9a5)} // 0948:2525
    {db tmp999=72;MYCOPY(dummy7_b9a6)} // 0948:2526
    {db tmp999=73;MYCOPY(dummy7_b9a7)} // 0948:2527
    {db tmp999=78;MYCOPY(dummy7_b9a8)} // 0948:2528
    {db tmp999=73;MYCOPY(dummy7_b9a9)} // 0948:2529
    {db tmp999=78;MYCOPY(dummy7_b9aa)} // 0948:252a
    {db tmp999=71;MYCOPY(dummy7_b9ab)} // 0948:252b
    {db tmp999=33;MYCOPY(dummy7_b9ac)} // 0948:252c
    {db tmp999=21;MYCOPY(unk_19f8e)} // 0948:252e
    {db tmp999[32]={5,65,78,68,32,73,32,84,72,79,85,71,72,84,32,84,72,79,83,69,13,87,65,76,76,83,32,87,69,82,69,32};MYCOPY(dummy7_b9af)} // 0948:252f
    {db tmp999=71;MYCOPY(dummy7_b9cf)} // 0948:254f
    {db tmp999=73;MYCOPY(dummy7_b9d0)} // 0948:2550
    {db tmp999=86;MYCOPY(dummy7_b9d1)} // 0948:2551
    {db tmp999=73;MYCOPY(dummy7_b9d2)} // 0948:2552
    {db tmp999=78;MYCOPY(dummy7_b9d3)} // 0948:2553
    {db tmp999=71;MYCOPY(dummy7_b9d4)} // 0948:2554
    {db tmp999=13;MYCOPY(dummy7_b9d5)} // 0948:2555
    {db tmp999=77;MYCOPY(dummy7_b9d6)} // 0948:2556
    {db tmp999=69;MYCOPY(dummy7_b9d7)} // 0948:2557
    {db tmp999=32;MYCOPY(dummy7_b9d8)} // 0948:2558
    {db tmp999=65;MYCOPY(dummy7_b9d9)} // 0948:2559
    {db tmp999=32;MYCOPY(dummy7_b9da)} // 0948:255a
    {db tmp999=72;MYCOPY(dummy7_b9db)} // 0948:255b
    {db tmp999=69;MYCOPY(dummy7_b9dc)} // 0948:255c
    {db tmp999=65;MYCOPY(dummy7_b9dd)} // 0948:255d
    {db tmp999=68;MYCOPY(dummy7_b9de)} // 0948:255e
    {db tmp999=65;MYCOPY(dummy7_b9df)} // 0948:255f
    {db tmp999=67;MYCOPY(dummy7_b9e0)} // 0948:2560
    {db tmp999=72;MYCOPY(dummy7_b9e1)} // 0948:2561
    {db tmp999=69;MYCOPY(dummy7_b9e2)} // 0948:2562
    {db tmp999=33;MYCOPY(dummy7_b9e3)} // 0948:2563
    {db tmp999=12;MYCOPY(unk_19fc5)} // 0948:2565
    {db tmp999=4;MYCOPY(dummy7_b9e6)} // 0948:2566
    {db tmp999=87;MYCOPY(dummy7_b9e7)} // 0948:2567
    {db tmp999=72;MYCOPY(dummy7_b9e8)} // 0948:2568
    {db tmp999=69;MYCOPY(dummy7_b9e9)} // 0948:2569
    {db tmp999=87;MYCOPY(dummy7_b9ea)} // 0948:256a
    {db tmp999=44;MYCOPY(dummy7_b9eb)} // 0948:256b
    {db tmp999=32;MYCOPY(dummy7_b9ec)} // 0948:256c
    {db tmp999=84;MYCOPY(dummy7_b9ed)} // 0948:256d
    {db tmp999=72;MYCOPY(dummy7_b9ee)} // 0948:256e
    {db tmp999=65;MYCOPY(dummy7_b9ef)} // 0948:256f
    {db tmp999=84;MYCOPY(dummy7_b9f0)} // 0948:2570
    {db tmp999=13;MYCOPY(dummy7_b9f1)} // 0948:2571
    {db tmp999=87;MYCOPY(dummy7_b9f2)} // 0948:2572
    {db tmp999=65;MYCOPY(dummy7_b9f3)} // 0948:2573
    {db tmp999=83;MYCOPY(dummy7_b9f4)} // 0948:2574
    {db tmp999=32;MYCOPY(dummy7_b9f5)} // 0948:2575
    {db tmp999=67;MYCOPY(dummy7_b9f6)} // 0948:2576
    {db tmp999=76;MYCOPY(dummy7_b9f7)} // 0948:2577
    {db tmp999=79;MYCOPY(dummy7_b9f8)} // 0948:2578
    {db tmp999=83;MYCOPY(dummy7_b9f9)} // 0948:2579
    {db tmp999=69;MYCOPY(dummy7_b9fa)} // 0948:257a
    {db tmp999=33;MYCOPY(dummy7_b9fb)} // 0948:257b
    {db tmp999=17;MYCOPY(unk_19fdd)} // 0948:257d
    {db tmp999[32]={5,89,69,65,72,44,32,66,85,84,32,87,69,39,82,69,13,83,65,70,69,32,78,79,87,46,32,78,73,67,69,13};MYCOPY(dummy7_b9fe)} // 0948:257e
    {db tmp999=87;MYCOPY(dummy7_ba1e)} // 0948:259e
    {db tmp999=79;MYCOPY(dummy7_ba1f)} // 0948:259f
    {db tmp999=82;MYCOPY(dummy7_ba20)} // 0948:25a0
    {db tmp999=75;MYCOPY(dummy7_ba21)} // 0948:25a1
    {db tmp999=32;MYCOPY(dummy7_ba22)} // 0948:25a2
    {db tmp999=77;MYCOPY(dummy7_ba23)} // 0948:25a3
    {db tmp999=69;MYCOPY(dummy7_ba24)} // 0948:25a4
    {db tmp999=78;MYCOPY(dummy7_ba25)} // 0948:25a5
    {db tmp999=33;MYCOPY(dummy7_ba26)} // 0948:25a6
    {db tmp999=15;MYCOPY(unk_1a008)} // 0948:25a8
    {db tmp999=4;MYCOPY(dummy7_ba29)} // 0948:25a9
    {db tmp999=87;MYCOPY(dummy7_ba2a)} // 0948:25aa
    {db tmp999=69;MYCOPY(dummy7_ba2b)} // 0948:25ab
    {db tmp999=76;MYCOPY(dummy7_ba2c)} // 0948:25ac
    {db tmp999=76;MYCOPY(dummy7_ba2d)} // 0948:25ad
    {db tmp999=44;MYCOPY(dummy7_ba2e)} // 0948:25ae
    {db tmp999=32;MYCOPY(dummy7_ba2f)} // 0948:25af
    {db tmp999=72;MYCOPY(dummy7_ba30)} // 0948:25b0
    {db tmp999=69;MYCOPY(dummy7_ba31)} // 0948:25b1
    {db tmp999=82;MYCOPY(dummy7_ba32)} // 0948:25b2
    {db tmp999=69;MYCOPY(dummy7_ba33)} // 0948:25b3
    {db tmp999=32;MYCOPY(dummy7_ba34)} // 0948:25b4
    {db tmp999=87;MYCOPY(dummy7_ba35)} // 0948:25b5
    {db tmp999=69;MYCOPY(dummy7_ba36)} // 0948:25b6
    {db tmp999=13;MYCOPY(dummy7_ba37)} // 0948:25b7
    {db tmp999=71;MYCOPY(dummy7_ba38)} // 0948:25b8
    {db tmp999=79;MYCOPY(dummy7_ba39)} // 0948:25b9
    {db tmp999=32;MYCOPY(dummy7_ba3a)} // 0948:25ba
    {db tmp999=65;MYCOPY(dummy7_ba3b)} // 0948:25bb
    {db tmp999=71;MYCOPY(dummy7_ba3c)} // 0948:25bc
    {db tmp999=65;MYCOPY(dummy7_ba3d)} // 0948:25bd
    {db tmp999=73;MYCOPY(dummy7_ba3e)} // 0948:25be
    {db tmp999=78;MYCOPY(dummy7_ba3f)} // 0948:25bf
    {db tmp999=46;MYCOPY(dummy7_ba40)} // 0948:25c0
    {db tmp999=46;MYCOPY(dummy7_ba41)} // 0948:25c1
    {db tmp999=46;MYCOPY(dummy7_ba42)} // 0948:25c2
    {db tmp999=22;MYCOPY(unk_1a024)} // 0948:25c4
    {db tmp999=3;MYCOPY(dummy7_ba45)} // 0948:25c5
    {db tmp999=87;MYCOPY(dummy7_ba46)} // 0948:25c6
    {db tmp999=69;MYCOPY(dummy7_ba47)} // 0948:25c7
    {db tmp999=39;MYCOPY(dummy7_ba48)} // 0948:25c8
    {db tmp999=82;MYCOPY(dummy7_ba49)} // 0948:25c9
    {db tmp999=69;MYCOPY(dummy7_ba4a)} // 0948:25ca
    {db tmp999=32;MYCOPY(dummy7_ba4b)} // 0948:25cb
    {db tmp999=66;MYCOPY(dummy7_ba4c)} // 0948:25cc
    {db tmp999=65;MYCOPY(dummy7_ba4d)} // 0948:25cd
    {db tmp999=67;MYCOPY(dummy7_ba4e)} // 0948:25ce
    {db tmp999=75;MYCOPY(dummy7_ba4f)} // 0948:25cf
    {db tmp999=32;MYCOPY(dummy7_ba50)} // 0948:25d0
    {db tmp999=73;MYCOPY(dummy7_ba51)} // 0948:25d1
    {db tmp999=78;MYCOPY(dummy7_ba52)} // 0948:25d2
    {db tmp999=32;MYCOPY(dummy7_ba53)} // 0948:25d3
    {db tmp999=83;MYCOPY(dummy7_ba54)} // 0948:25d4
    {db tmp999=80;MYCOPY(dummy7_ba55)} // 0948:25d5
    {db tmp999=65;MYCOPY(dummy7_ba56)} // 0948:25d6
    {db tmp999=67;MYCOPY(dummy7_ba57)} // 0948:25d7
    {db tmp999=69;MYCOPY(dummy7_ba58)} // 0948:25d8
    {db tmp999=33;MYCOPY(dummy7_ba59)} // 0948:25d9
    {db tmp999=25;MYCOPY(unk_1a03b)} // 0948:25db
    {db tmp999[32]={4,71,79,79,68,44,32,78,79,87,32,76,69,84,39,83,32,70,73,78,68,13,84,72,73,83,32,84,79,77,65,84};MYCOPY(dummy7_ba5c)} // 0948:25dc
    {db tmp999=79;MYCOPY(dummy7_ba7c)} // 0948:25fc
    {db tmp999=82;MYCOPY(dummy7_ba7d)} // 0948:25fd
    {db tmp999=32;MYCOPY(dummy7_ba7e)} // 0948:25fe
    {db tmp999=67;MYCOPY(dummy7_ba7f)} // 0948:25ff
    {db tmp999=72;MYCOPY(dummy7_ba80)} // 0948:2600
    {db tmp999=65;MYCOPY(dummy7_ba81)} // 0948:2601
    {db tmp999=82;MYCOPY(dummy7_ba82)} // 0948:2602
    {db tmp999=65;MYCOPY(dummy7_ba83)} // 0948:2603
    {db tmp999=67;MYCOPY(dummy7_ba84)} // 0948:2604
    {db tmp999=84;MYCOPY(dummy7_ba85)} // 0948:2605
    {db tmp999=69;MYCOPY(dummy7_ba86)} // 0948:2606
    {db tmp999=82;MYCOPY(dummy7_ba87)} // 0948:2607
    {db tmp999=46;MYCOPY(dummy7_ba88)} // 0948:2608
    {db tmp999=21;MYCOPY(unk_1a06a)} // 0948:260a
    {db tmp999[32]={4,89,69,65,72,44,32,73,70,32,72,69,32,68,79,69,83,78,39,84,13,70,73,78,68,32,85,83,32,70,73,82};MYCOPY(dummy7_ba8b)} // 0948:260b
    {db tmp999=83;MYCOPY(dummy7_baab)} // 0948:262b
    {db tmp999=84;MYCOPY(dummy7_baac)} // 0948:262c
    {db tmp999=46;MYCOPY(dummy7_baad)} // 0948:262d
    {db tmp999=17;MYCOPY(unk_1a08f)} // 0948:262f
    {db tmp999[32]={4,83,79,32,89,79,85,39,82,69,32,66,65,67,75,13,65,66,79,65,82,68,32,77,89,32,83,72,73,80,46,0};MYCOPY(dummy7_bab0)} // 0948:2630
    {db tmp999=16;MYCOPY(unk_1a0b0)} // 0948:2650
    {db tmp999[32]={5,87,72,89,32,68,79,78,39,84,32,89,79,85,13,76,69,84,32,85,83,32,71,79,32,66,65,67,75,13,72,79};MYCOPY(dummy7_bad1)} // 0948:2651
    {db tmp999=77;MYCOPY(dummy7_baf1)} // 0948:2671
    {db tmp999=69;MYCOPY(dummy7_baf2)} // 0948:2672
    {db tmp999=44;MYCOPY(dummy7_baf3)} // 0948:2673
    {db tmp999=32;MYCOPY(dummy7_baf4)} // 0948:2674
    {db tmp999=84;MYCOPY(dummy7_baf5)} // 0948:2675
    {db tmp999=79;MYCOPY(dummy7_baf6)} // 0948:2676
    {db tmp999=77;MYCOPY(dummy7_baf7)} // 0948:2677
    {db tmp999=65;MYCOPY(dummy7_baf8)} // 0948:2678
    {db tmp999=84;MYCOPY(dummy7_baf9)} // 0948:2679
    {db tmp999=79;MYCOPY(dummy7_bafa)} // 0948:267a
    {db tmp999=82;MYCOPY(dummy7_bafb)} // 0948:267b
    {db tmp999=63;MYCOPY(dummy7_bafc)} // 0948:267c
    {db tmp999=16;MYCOPY(unk_1a0de)} // 0948:267e
    {db tmp999[32]={5,83,73,76,76,89,32,86,73,75,73,78,71,83,44,13,68,79,78,39,84,32,89,79,85,32,75,78,79,87,13,84};MYCOPY(dummy7_baff)} // 0948:267f
    {db tmp999=72;MYCOPY(dummy7_bb1f)} // 0948:269f
    {db tmp999=65;MYCOPY(dummy7_bb20)} // 0948:26a0
    {db tmp999=84;MYCOPY(dummy7_bb21)} // 0948:26a1
    {db tmp999=46;MYCOPY(dummy7_bb22)} // 0948:26a2
    {db tmp999=46;MYCOPY(dummy7_bb23)} // 0948:26a3
    {db tmp999=46;MYCOPY(dummy7_bb24)} // 0948:26a4
    {db tmp999=21;MYCOPY(unk_1a106)} // 0948:26a6
    {db tmp999[32]={5,65,76,76,32,69,86,73,76,32,83,80,65,67,69,13,65,76,73,69,78,83,32,78,69,69,68,13,73,78,78,79};MYCOPY(dummy7_bb27)} // 0948:26a7
    {db tmp999=67;MYCOPY(dummy7_bb47)} // 0948:26c7
    {db tmp999=69;MYCOPY(dummy7_bb48)} // 0948:26c8
    {db tmp999=78;MYCOPY(dummy7_bb49)} // 0948:26c9
    {db tmp999=84;MYCOPY(dummy7_bb4a)} // 0948:26ca
    {db tmp999=32;MYCOPY(dummy7_bb4b)} // 0948:26cb
    {db tmp999=80;MYCOPY(dummy7_bb4c)} // 0948:26cc
    {db tmp999=82;MYCOPY(dummy7_bb4d)} // 0948:26cd
    {db tmp999=73;MYCOPY(dummy7_bb4e)} // 0948:26ce
    {db tmp999=83;MYCOPY(dummy7_bb4f)} // 0948:26cf
    {db tmp999=79;MYCOPY(dummy7_bb50)} // 0948:26d0
    {db tmp999=78;MYCOPY(dummy7_bb51)} // 0948:26d1
    {db tmp999=69;MYCOPY(dummy7_bb52)} // 0948:26d2
    {db tmp999=82;MYCOPY(dummy7_bb53)} // 0948:26d3
    {db tmp999=83;MYCOPY(dummy7_bb54)} // 0948:26d4
    {db tmp999=33;MYCOPY(dummy7_bb55)} // 0948:26d5
    {db tmp999=16;MYCOPY(unk_1a137)} // 0948:26d7
    {db tmp999[32]={5,78,79,87,32,73,32,72,65,86,69,32,89,79,85,13,82,73,71,72,84,32,87,72,69,82,69,32,73,13,87,65};MYCOPY(dummy7_bb58)} // 0948:26d8
    {db tmp999=78;MYCOPY(dummy7_bb78)} // 0948:26f8
    {db tmp999=84;MYCOPY(dummy7_bb79)} // 0948:26f9
    {db tmp999=32;MYCOPY(dummy7_bb7a)} // 0948:26fa
    {db tmp999=89;MYCOPY(dummy7_bb7b)} // 0948:26fb
    {db tmp999=79;MYCOPY(dummy7_bb7c)} // 0948:26fc
    {db tmp999=85;MYCOPY(dummy7_bb7d)} // 0948:26fd
    {db tmp999=33;MYCOPY(dummy7_bb7e)} // 0948:26fe
    {db tmp999=15;MYCOPY(unk_1a160)} // 0948:2700
    {db tmp999=4;MYCOPY(dummy7_bb81)} // 0948:2701
    {db tmp999=83;MYCOPY(dummy7_bb82)} // 0948:2702
    {db tmp999=84;MYCOPY(dummy7_bb83)} // 0948:2703
    {db tmp999=65;MYCOPY(dummy7_bb84)} // 0948:2704
    {db tmp999=78;MYCOPY(dummy7_bb85)} // 0948:2705
    {db tmp999=68;MYCOPY(dummy7_bb86)} // 0948:2706
    {db tmp999=73;MYCOPY(dummy7_bb87)} // 0948:2707
    {db tmp999=78;MYCOPY(dummy7_bb88)} // 0948:2708
    {db tmp999=71;MYCOPY(dummy7_bb89)} // 0948:2709
    {db tmp999=32;MYCOPY(dummy7_bb8a)} // 0948:270a
    {db tmp999=78;MYCOPY(dummy7_bb8b)} // 0948:270b
    {db tmp999=69;MYCOPY(dummy7_bb8c)} // 0948:270c
    {db tmp999=88;MYCOPY(dummy7_bb8d)} // 0948:270d
    {db tmp999=84;MYCOPY(dummy7_bb8e)} // 0948:270e
    {db tmp999=13;MYCOPY(dummy7_bb8f)} // 0948:270f
    {db tmp999=84;MYCOPY(dummy7_bb90)} // 0948:2710
    {db tmp999=79;MYCOPY(dummy7_bb91)} // 0948:2711
    {db tmp999=32;MYCOPY(dummy7_bb92)} // 0948:2712
    {db tmp999=84;MYCOPY(dummy7_bb93)} // 0948:2713
    {db tmp999=72;MYCOPY(dummy7_bb94)} // 0948:2714
    {db tmp999=69;MYCOPY(dummy7_bb95)} // 0948:2715
    {db tmp999=32;MYCOPY(dummy7_bb96)} // 0948:2716
    {db tmp999=69;MYCOPY(dummy7_bb97)} // 0948:2717
    {db tmp999=88;MYCOPY(dummy7_bb98)} // 0948:2718
    {db tmp999=73;MYCOPY(dummy7_bb99)} // 0948:2719
    {db tmp999=84;MYCOPY(dummy7_bb9a)} // 0948:271a
    {db tmp999=63;MYCOPY(dummy7_bb9b)} // 0948:271b
    {db tmp999=18;MYCOPY(unk_1a17d)} // 0948:271d
    {db tmp999=4;MYCOPY(dummy7_bb9e)} // 0948:271e
    {db tmp999=81;MYCOPY(dummy7_bb9f)} // 0948:271f
    {db tmp999=85;MYCOPY(dummy7_bba0)} // 0948:2720
    {db tmp999=73;MYCOPY(dummy7_bba1)} // 0948:2721
    {db tmp999=67;MYCOPY(dummy7_bba2)} // 0948:2722
    {db tmp999=75;MYCOPY(dummy7_bba3)} // 0948:2723
    {db tmp999=44;MYCOPY(dummy7_bba4)} // 0948:2724
    {db tmp999=32;MYCOPY(dummy7_bba5)} // 0948:2725
    {db tmp999=76;MYCOPY(dummy7_bba6)} // 0948:2726
    {db tmp999=69;MYCOPY(dummy7_bba7)} // 0948:2727
    {db tmp999=84;MYCOPY(dummy7_bba8)} // 0948:2728
    {db tmp999=39;MYCOPY(dummy7_bba9)} // 0948:2729
    {db tmp999=83;MYCOPY(dummy7_bbaa)} // 0948:272a
    {db tmp999=13;MYCOPY(dummy7_bbab)} // 0948:272b
    {db tmp999=71;MYCOPY(dummy7_bbac)} // 0948:272c
    {db tmp999=69;MYCOPY(dummy7_bbad)} // 0948:272d
    {db tmp999=84;MYCOPY(dummy7_bbae)} // 0948:272e
    {db tmp999=32;MYCOPY(dummy7_bbaf)} // 0948:272f
    {db tmp999=79;MYCOPY(dummy7_bbb0)} // 0948:2730
    {db tmp999=85;MYCOPY(dummy7_bbb1)} // 0948:2731
    {db tmp999=84;MYCOPY(dummy7_bbb2)} // 0948:2732
    {db tmp999=32;MYCOPY(dummy7_bbb3)} // 0948:2733
    {db tmp999=79;MYCOPY(dummy7_bbb4)} // 0948:2734
    {db tmp999=70;MYCOPY(dummy7_bbb5)} // 0948:2735
    {db tmp999=32;MYCOPY(dummy7_bbb6)} // 0948:2736
    {db tmp999=72;MYCOPY(dummy7_bbb7)} // 0948:2737
    {db tmp999=69;MYCOPY(dummy7_bbb8)} // 0948:2738
    {db tmp999=82;MYCOPY(dummy7_bbb9)} // 0948:2739
    {db tmp999=69;MYCOPY(dummy7_bbba)} // 0948:273a
    {db tmp999=46;MYCOPY(dummy7_bbbb)} // 0948:273b
    {db tmp999=19;MYCOPY(unk_1a19d)} // 0948:273d
    {db tmp999[32]={5,87,65,73,84,44,32,84,72,65,84,39,83,13,69,88,65,67,84,76,89,32,87,72,65,84,32,72,69,13,69,88};MYCOPY(dummy7_bbbe)} // 0948:273e
    {db tmp999=80;MYCOPY(dummy7_bbde)} // 0948:275e
    {db tmp999=69;MYCOPY(dummy7_bbdf)} // 0948:275f
    {db tmp999=67;MYCOPY(dummy7_bbe0)} // 0948:2760
    {db tmp999=84;MYCOPY(dummy7_bbe1)} // 0948:2761
    {db tmp999=83;MYCOPY(dummy7_bbe2)} // 0948:2762
    {db tmp999=32;MYCOPY(dummy7_bbe3)} // 0948:2763
    {db tmp999=85;MYCOPY(dummy7_bbe4)} // 0948:2764
    {db tmp999=83;MYCOPY(dummy7_bbe5)} // 0948:2765
    {db tmp999=32;MYCOPY(dummy7_bbe6)} // 0948:2766
    {db tmp999=84;MYCOPY(dummy7_bbe7)} // 0948:2767
    {db tmp999=79;MYCOPY(dummy7_bbe8)} // 0948:2768
    {db tmp999=32;MYCOPY(dummy7_bbe9)} // 0948:2769
    {db tmp999=68;MYCOPY(dummy7_bbea)} // 0948:276a
    {db tmp999=79;MYCOPY(dummy7_bbeb)} // 0948:276b
    {db tmp999=46;MYCOPY(dummy7_bbec)} // 0948:276c
    {db tmp999=20;MYCOPY(unk_1a1ce)} // 0948:276e
    {db tmp999[32]={5,46,46,79,82,32,77,65,89,66,69,32,84,72,65,84,39,83,13,87,72,65,84,32,72,69,32,87,65,78,84,83};MYCOPY(dummy7_bbef)} // 0948:276f
    {db tmp999=32;MYCOPY(dummy7_bc0f)} // 0948:278f
    {db tmp999=85;MYCOPY(dummy7_bc10)} // 0948:2790
    {db tmp999=83;MYCOPY(dummy7_bc11)} // 0948:2791
    {db tmp999=13;MYCOPY(dummy7_bc12)} // 0948:2792
    {db tmp999=84;MYCOPY(dummy7_bc13)} // 0948:2793
    {db tmp999=79;MYCOPY(dummy7_bc14)} // 0948:2794
    {db tmp999=32;MYCOPY(dummy7_bc15)} // 0948:2795
    {db tmp999=84;MYCOPY(dummy7_bc16)} // 0948:2796
    {db tmp999=72;MYCOPY(dummy7_bc17)} // 0948:2797
    {db tmp999=73;MYCOPY(dummy7_bc18)} // 0948:2798
    {db tmp999=78;MYCOPY(dummy7_bc19)} // 0948:2799
    {db tmp999=75;MYCOPY(dummy7_bc1a)} // 0948:279a
    {db tmp999=32;MYCOPY(dummy7_bc1b)} // 0948:279b
    {db tmp999=72;MYCOPY(dummy7_bc1c)} // 0948:279c
    {db tmp999=69;MYCOPY(dummy7_bc1d)} // 0948:279d
    {db tmp999=32;MYCOPY(dummy7_bc1e)} // 0948:279e
    {db tmp999=87;MYCOPY(dummy7_bc1f)} // 0948:279f
    {db tmp999=65;MYCOPY(dummy7_bc20)} // 0948:27a0
    {db tmp999=78;MYCOPY(dummy7_bc21)} // 0948:27a1
    {db tmp999=84;MYCOPY(dummy7_bc22)} // 0948:27a2
    {db tmp999=83;MYCOPY(dummy7_bc23)} // 0948:27a3
    {db tmp999=46;MYCOPY(dummy7_bc24)} // 0948:27a4
    {db tmp999=21;MYCOPY(unk_1a206)} // 0948:27a6
    {db tmp999[32]={4,78,79,87,32,73,39,77,32,67,79,78,70,85,83,69,68,46,46,46,13,76,69,84,39,83,32,74,85,83,84,32};MYCOPY(dummy7_bc27)} // 0948:27a7
    {db tmp999=71;MYCOPY(dummy7_bc47)} // 0948:27c7
    {db tmp999=79;MYCOPY(dummy7_bc48)} // 0948:27c8
    {db tmp999=46;MYCOPY(dummy7_bc49)} // 0948:27c9
    {db tmp999=23;MYCOPY(unk_1a22b)} // 0948:27cb
    {db tmp999=3;MYCOPY(dummy7_bc4c)} // 0948:27cc
    {db tmp999=87;MYCOPY(dummy7_bc4d)} // 0948:27cd
    {db tmp999=69;MYCOPY(dummy7_bc4e)} // 0948:27ce
    {db tmp999=76;MYCOPY(dummy7_bc4f)} // 0948:27cf
    {db tmp999=67;MYCOPY(dummy7_bc50)} // 0948:27d0
    {db tmp999=79;MYCOPY(dummy7_bc51)} // 0948:27d1
    {db tmp999=77;MYCOPY(dummy7_bc52)} // 0948:27d2
    {db tmp999=69;MYCOPY(dummy7_bc53)} // 0948:27d3
    {db tmp999=32;MYCOPY(dummy7_bc54)} // 0948:27d4
    {db tmp999=84;MYCOPY(dummy7_bc55)} // 0948:27d5
    {db tmp999=79;MYCOPY(dummy7_bc56)} // 0948:27d6
    {db tmp999=32;MYCOPY(dummy7_bc57)} // 0948:27d7
    {db tmp999=84;MYCOPY(dummy7_bc58)} // 0948:27d8
    {db tmp999=72;MYCOPY(dummy7_bc59)} // 0948:27d9
    {db tmp999=69;MYCOPY(dummy7_bc5a)} // 0948:27da
    {db tmp999=32;MYCOPY(dummy7_bc5b)} // 0948:27db
    {db tmp999=65;MYCOPY(dummy7_bc5c)} // 0948:27dc
    {db tmp999=82;MYCOPY(dummy7_bc5d)} // 0948:27dd
    {db tmp999=69;MYCOPY(dummy7_bc5e)} // 0948:27de
    {db tmp999=78;MYCOPY(dummy7_bc5f)} // 0948:27df
    {db tmp999=65;MYCOPY(dummy7_bc60)} // 0948:27e0
    {db tmp999=33;MYCOPY(dummy7_bc61)} // 0948:27e1
    {db tmp999=25;MYCOPY(unk_1a243)} // 0948:27e3
    {db tmp999[32]={6,89,79,85,32,84,72,82,69,69,32,72,65,86,69,32,83,85,82,86,73,86,69,68,13,76,79,78,71,69,82,32};MYCOPY(dummy7_bc64)} // 0948:27e4
    {db tmp999[32]={84,72,65,78,32,73,32,69,88,80,69,67,84,69,68,44,13,66,85,84,32,80,69,82,83,73,83,84,69,78,67,69};MYCOPY(dummy7_bc84)} // 0948:2804
    {db tmp999=32;MYCOPY(dummy7_bca4)} // 0948:2824
    {db tmp999=65;MYCOPY(dummy7_bca5)} // 0948:2825
    {db tmp999=76;MYCOPY(dummy7_bca6)} // 0948:2826
    {db tmp999=79;MYCOPY(dummy7_bca7)} // 0948:2827
    {db tmp999=78;MYCOPY(dummy7_bca8)} // 0948:2828
    {db tmp999=69;MYCOPY(dummy7_bca9)} // 0948:2829
    {db tmp999=13;MYCOPY(dummy7_bcaa)} // 0948:282a
    {db tmp999=87;MYCOPY(dummy7_bcab)} // 0948:282b
    {db tmp999=73;MYCOPY(dummy7_bcac)} // 0948:282c
    {db tmp999=76;MYCOPY(dummy7_bcad)} // 0948:282d
    {db tmp999=76;MYCOPY(dummy7_bcae)} // 0948:282e
    {db tmp999=32;MYCOPY(dummy7_bcaf)} // 0948:282f
    {db tmp999=78;MYCOPY(dummy7_bcb0)} // 0948:2830
    {db tmp999=79;MYCOPY(dummy7_bcb1)} // 0948:2831
    {db tmp999=84;MYCOPY(dummy7_bcb2)} // 0948:2832
    {db tmp999=32;MYCOPY(dummy7_bcb3)} // 0948:2833
    {db tmp999=83;MYCOPY(dummy7_bcb4)} // 0948:2834
    {db tmp999=65;MYCOPY(dummy7_bcb5)} // 0948:2835
    {db tmp999=86;MYCOPY(dummy7_bcb6)} // 0948:2836
    {db tmp999=69;MYCOPY(dummy7_bcb7)} // 0948:2837
    {db tmp999=32;MYCOPY(dummy7_bcb8)} // 0948:2838
    {db tmp999=89;MYCOPY(dummy7_bcb9)} // 0948:2839
    {db tmp999=79;MYCOPY(dummy7_bcba)} // 0948:283a
    {db tmp999=85;MYCOPY(dummy7_bcbb)} // 0948:283b
    {dw tmp999=20000;MYCOPY(dummy7_bcbc)} // 0948:283c
    {db tmp999=79;MYCOPY(dummy7_bcbe)} // 0948:283e
    {db tmp999=87;MYCOPY(dummy7_bcbf)} // 0948:283f
    {db tmp999=46;MYCOPY(dummy7_bcc0)} // 0948:2840
    {db tmp999=24;MYCOPY(unk_1a2a2)} // 0948:2842
    {db tmp999[32]={4,70,65,82,69,87,69,76,76,32,77,89,32,70,82,73,69,78,68,83,46,46,46,13,46,46,46,72,65,32,72,65};MYCOPY(dummy7_bcc3)} // 0948:2843
    {db tmp999=32;MYCOPY(dummy7_bce3)} // 0948:2863
    {db tmp999=72;MYCOPY(dummy7_bce4)} // 0948:2864
    {db tmp999=65;MYCOPY(dummy7_bce5)} // 0948:2865
    {db tmp999=33;MYCOPY(dummy7_bce6)} // 0948:2866
    {db tmp999=33;MYCOPY(dummy7_bce7)} // 0948:2867
    {db tmp999=33;MYCOPY(dummy7_bce8)} // 0948:2868
    {db tmp999=20;MYCOPY(unk_1a2ca)} // 0948:286a
    {db tmp999[32]={5,72,69,89,44,32,84,79,77,65,84,79,82,44,32,87,72,89,13,68,79,78,39,84,32,89,79,85,32,67,79,77};MYCOPY(dummy7_bceb)} // 0948:286b
    {db tmp999=69;MYCOPY(dummy7_bd0b)} // 0948:288b
    {db tmp999=32;MYCOPY(dummy7_bd0c)} // 0948:288c
    {db tmp999=79;MYCOPY(dummy7_bd0d)} // 0948:288d
    {db tmp999=85;MYCOPY(dummy7_bd0e)} // 0948:288e
    {db tmp999=84;MYCOPY(dummy7_bd0f)} // 0948:288f
    {db tmp999=13;MYCOPY(dummy7_bd10)} // 0948:2890
    {db tmp999=65;MYCOPY(dummy7_bd11)} // 0948:2891
    {db tmp999=78;MYCOPY(dummy7_bd12)} // 0948:2892
    {db tmp999=68;MYCOPY(dummy7_bd13)} // 0948:2893
    {db tmp999=32;MYCOPY(dummy7_bd14)} // 0948:2894
    {db tmp999=83;MYCOPY(dummy7_bd15)} // 0948:2895
    {db tmp999=72;MYCOPY(dummy7_bd16)} // 0948:2896
    {db tmp999=79;MYCOPY(dummy7_bd17)} // 0948:2897
    {db tmp999=87;MYCOPY(dummy7_bd18)} // 0948:2898
    {db tmp999=32;MYCOPY(dummy7_bd19)} // 0948:2899
    {db tmp999=89;MYCOPY(dummy7_bd1a)} // 0948:289a
    {db tmp999=79;MYCOPY(dummy7_bd1b)} // 0948:289b
    {db tmp999=85;MYCOPY(dummy7_bd1c)} // 0948:289c
    {db tmp999=82;MYCOPY(dummy7_bd1d)} // 0948:289d
    {db tmp999=83;MYCOPY(dummy7_bd1e)} // 0948:289e
    {db tmp999=69;MYCOPY(dummy7_bd1f)} // 0948:289f
    {db tmp999=76;MYCOPY(dummy7_bd20)} // 0948:28a0
    {db tmp999=70;MYCOPY(dummy7_bd21)} // 0948:28a1
    {db tmp999=63;MYCOPY(dummy7_bd22)} // 0948:28a2
    {db tmp999=18;MYCOPY(unk_1a304)} // 0948:28a4
    {db tmp999=3;MYCOPY(dummy7_bd25)} // 0948:28a5
    {db tmp999=83;MYCOPY(dummy7_bd26)} // 0948:28a6
    {db tmp999=72;MYCOPY(dummy7_bd27)} // 0948:28a7
    {db tmp999=85;MYCOPY(dummy7_bd28)} // 0948:28a8
    {db tmp999=84;MYCOPY(dummy7_bd29)} // 0948:28a9
    {db tmp999=32;MYCOPY(dummy7_bd2a)} // 0948:28aa
    {db tmp999=85;MYCOPY(dummy7_bd2b)} // 0948:28ab
    {db tmp999=80;MYCOPY(dummy7_bd2c)} // 0948:28ac
    {db tmp999=44;MYCOPY(dummy7_bd2d)} // 0948:28ad
    {db tmp999=32;MYCOPY(dummy7_bd2e)} // 0948:28ae
    {db tmp999=66;MYCOPY(dummy7_bd2f)} // 0948:28af
    {db tmp999=65;MYCOPY(dummy7_bd30)} // 0948:28b0
    {db tmp999=76;MYCOPY(dummy7_bd31)} // 0948:28b1
    {db tmp999=69;MYCOPY(dummy7_bd32)} // 0948:28b2
    {db tmp999=79;MYCOPY(dummy7_bd33)} // 0948:28b3
    {db tmp999=71;MYCOPY(dummy7_bd34)} // 0948:28b4
    {db tmp999=33;MYCOPY(dummy7_bd35)} // 0948:28b5
    {db tmp999=24;MYCOPY(unk_1a317)} // 0948:28b7
    {db tmp999[32]={5,87,72,65,84,32,65,82,69,32,89,79,85,32,84,82,89,73,78,71,13,84,79,32,68,79,44,32,71,69,84,32};MYCOPY(dummy7_bd38)} // 0948:28b8
    {db tmp999=85;MYCOPY(dummy7_bd58)} // 0948:28d8
    {db tmp999=83;MYCOPY(dummy7_bd59)} // 0948:28d9
    {db tmp999=32;MYCOPY(dummy7_bd5a)} // 0948:28da
    {db tmp999=67;MYCOPY(dummy7_bd5b)} // 0948:28db
    {db tmp999=65;MYCOPY(dummy7_bd5c)} // 0948:28dc
    {db tmp999=80;MYCOPY(dummy7_bd5d)} // 0948:28dd
    {db tmp999=84;MYCOPY(dummy7_bd5e)} // 0948:28de
    {db tmp999=85;MYCOPY(dummy7_bd5f)} // 0948:28df
    {db tmp999=82;MYCOPY(dummy7_bd60)} // 0948:28e0
    {db tmp999=69;MYCOPY(dummy7_bd61)} // 0948:28e1
    {db tmp999=68;MYCOPY(dummy7_bd62)} // 0948:28e2
    {db tmp999=13;MYCOPY(dummy7_bd63)} // 0948:28e3
    {db tmp999=82;MYCOPY(dummy7_bd64)} // 0948:28e4
    {db tmp999=73;MYCOPY(dummy7_bd65)} // 0948:28e5
    {db tmp999=71;MYCOPY(dummy7_bd66)} // 0948:28e6
    {db tmp999=72;MYCOPY(dummy7_bd67)} // 0948:28e7
    {db tmp999=84;MYCOPY(dummy7_bd68)} // 0948:28e8
    {db tmp999=32;MYCOPY(dummy7_bd69)} // 0948:28e9
    {db tmp999=84;MYCOPY(dummy7_bd6a)} // 0948:28ea
    {db tmp999=72;MYCOPY(dummy7_bd6b)} // 0948:28eb
    {db tmp999=73;MYCOPY(dummy7_bd6c)} // 0948:28ec
    {db tmp999=83;MYCOPY(dummy7_bd6d)} // 0948:28ed
    {db tmp999=32;MYCOPY(dummy7_bd6e)} // 0948:28ee
    {db tmp999=83;MYCOPY(dummy7_bd6f)} // 0948:28ef
    {db tmp999=69;MYCOPY(dummy7_bd70)} // 0948:28f0
    {db tmp999=67;MYCOPY(dummy7_bd71)} // 0948:28f1
    {db tmp999=79;MYCOPY(dummy7_bd72)} // 0948:28f2
    {db tmp999=78;MYCOPY(dummy7_bd73)} // 0948:28f3
    {db tmp999=68;MYCOPY(dummy7_bd74)} // 0948:28f4
    {db tmp999=63;MYCOPY(dummy7_bd75)} // 0948:28f5
    {db tmp999=19;MYCOPY(unk_1a357)} // 0948:28f7
    {db tmp999[32]={5,78,79,44,32,66,85,84,32,84,72,73,83,32,71,85,89,13,73,83,32,82,69,65,76,76,89,32,71,69,84,84};MYCOPY(dummy7_bd78)} // 0948:28f8
    {db tmp999=73;MYCOPY(dummy7_bd98)} // 0948:2918
    {db tmp999=78;MYCOPY(dummy7_bd99)} // 0948:2919
    {db tmp999=71;MYCOPY(dummy7_bd9a)} // 0948:291a
    {db tmp999=13;MYCOPY(dummy7_bd9b)} // 0948:291b
    {db tmp999=79;MYCOPY(dummy7_bd9c)} // 0948:291c
    {db tmp999=78;MYCOPY(dummy7_bd9d)} // 0948:291d
    {db tmp999=32;MYCOPY(dummy7_bd9e)} // 0948:291e
    {db tmp999=77;MYCOPY(dummy7_bd9f)} // 0948:291f
    {db tmp999=89;MYCOPY(dummy7_bda0)} // 0948:2920
    {db tmp999=32;MYCOPY(dummy7_bda1)} // 0948:2921
    {db tmp999=78;MYCOPY(dummy7_bda2)} // 0948:2922
    {db tmp999=69;MYCOPY(dummy7_bda3)} // 0948:2923
    {db tmp999=82;MYCOPY(dummy7_bda4)} // 0948:2924
    {db tmp999=86;MYCOPY(dummy7_bda5)} // 0948:2925
    {db tmp999=69;MYCOPY(dummy7_bda6)} // 0948:2926
    {db tmp999=83;MYCOPY(dummy7_bda7)} // 0948:2927
    {db tmp999=46;MYCOPY(dummy7_bda8)} // 0948:2928
    {db tmp999=17;MYCOPY(unk_1a38a)} // 0948:292a
    {db tmp999=4;MYCOPY(dummy7_bdab)} // 0948:292b
    {db tmp999=69;MYCOPY(dummy7_bdac)} // 0948:292c
    {db tmp999=78;MYCOPY(dummy7_bdad)} // 0948:292d
    {db tmp999=79;MYCOPY(dummy7_bdae)} // 0948:292e
    {db tmp999=85;MYCOPY(dummy7_bdaf)} // 0948:292f
    {db tmp999=71;MYCOPY(dummy7_bdb0)} // 0948:2930
    {db tmp999=72;MYCOPY(dummy7_bdb1)} // 0948:2931
    {db tmp999=32;MYCOPY(dummy7_bdb2)} // 0948:2932
    {db tmp999=67;MYCOPY(dummy7_bdb3)} // 0948:2933
    {db tmp999=72;MYCOPY(dummy7_bdb4)} // 0948:2934
    {db tmp999=65;MYCOPY(dummy7_bdb5)} // 0948:2935
    {db tmp999=84;MYCOPY(dummy7_bdb6)} // 0948:2936
    {db tmp999=84;MYCOPY(dummy7_bdb7)} // 0948:2937
    {db tmp999=69;MYCOPY(dummy7_bdb8)} // 0948:2938
    {db tmp999=82;MYCOPY(dummy7_bdb9)} // 0948:2939
    {db tmp999=44;MYCOPY(dummy7_bdba)} // 0948:293a
    {db tmp999=13;MYCOPY(dummy7_bdbb)} // 0948:293b
    {dw tmp999=17740;MYCOPY(dummy7_bdbc)} // 0948:293c
    {char tmp999[14]="T'S MOVE OUT!";MYCOPY(atsmoveout)} // 0948:293e
    {db tmp999=23;MYCOPY(unk_1a3ac)} // 0948:294c
    {db tmp999=3;MYCOPY(dummy7_bdcd)} // 0948:294d
    {db tmp999=78;MYCOPY(dummy7_bdce)} // 0948:294e
    {db tmp999=79;MYCOPY(dummy7_bdcf)} // 0948:294f
    {db tmp999=84;MYCOPY(dummy7_bdd0)} // 0948:2950
    {db tmp999=32;MYCOPY(dummy7_bdd1)} // 0948:2951
    {db tmp999=83;MYCOPY(dummy7_bdd2)} // 0948:2952
    {db tmp999=79;MYCOPY(dummy7_bdd3)} // 0948:2953
    {db tmp999=32;MYCOPY(dummy7_bdd4)} // 0948:2954
    {db tmp999=70;MYCOPY(dummy7_bdd5)} // 0948:2955
    {db tmp999=65;MYCOPY(dummy7_bdd6)} // 0948:2956
    {db tmp999=83;MYCOPY(dummy7_bdd7)} // 0948:2957
    {db tmp999=84;MYCOPY(dummy7_bdd8)} // 0948:2958
    {db tmp999=44;MYCOPY(dummy7_bdd9)} // 0948:2959
    {db tmp999=32;MYCOPY(dummy7_bdda)} // 0948:295a
    {db tmp999=86;MYCOPY(dummy7_bddb)} // 0948:295b
    {db tmp999=73;MYCOPY(dummy7_bddc)} // 0948:295c
    {db tmp999=75;MYCOPY(dummy7_bddd)} // 0948:295d
    {db tmp999=73;MYCOPY(dummy7_bdde)} // 0948:295e
    {db tmp999=78;MYCOPY(dummy7_bddf)} // 0948:295f
    {db tmp999=71;MYCOPY(dummy7_bde0)} // 0948:2960
    {db tmp999=83;MYCOPY(dummy7_bde1)} // 0948:2961
    {db tmp999=46;MYCOPY(dummy7_bde2)} // 0948:2962
    {db tmp999=17;MYCOPY(unk_1a3c4)} // 0948:2964
    {db tmp999=4;MYCOPY(dummy7_bde5)} // 0948:2965
    {db tmp999=87;MYCOPY(dummy7_bde6)} // 0948:2966
    {db tmp999=69;MYCOPY(dummy7_bde7)} // 0948:2967
    {db tmp999=39;MYCOPY(dummy7_bde8)} // 0948:2968
    {db tmp999=82;MYCOPY(dummy7_bde9)} // 0948:2969
    {db tmp999=69;MYCOPY(dummy7_bdea)} // 0948:296a
    {db tmp999=32;MYCOPY(dummy7_bdeb)} // 0948:296b
    {db tmp999=82;MYCOPY(dummy7_bdec)} // 0948:296c
    {db tmp999=69;MYCOPY(dummy7_bded)} // 0948:296d
    {db tmp999=65;MYCOPY(dummy7_bdee)} // 0948:296e
    {db tmp999=68;MYCOPY(dummy7_bdef)} // 0948:296f
    {db tmp999=89;MYCOPY(dummy7_bdf0)} // 0948:2970
    {db tmp999=32;MYCOPY(dummy7_bdf1)} // 0948:2971
    {db tmp999=70;MYCOPY(dummy7_bdf2)} // 0948:2972
    {db tmp999=79;MYCOPY(dummy7_bdf3)} // 0948:2973
    {db tmp999=82;MYCOPY(dummy7_bdf4)} // 0948:2974
    {db tmp999=13;MYCOPY(dummy7_bdf5)} // 0948:2975
    {db tmp999=89;MYCOPY(dummy7_bdf6)} // 0948:2976
    {db tmp999=79;MYCOPY(dummy7_bdf7)} // 0948:2977
    {db tmp999=85;MYCOPY(dummy7_bdf8)} // 0948:2978
    {db tmp999=44;MYCOPY(dummy7_bdf9)} // 0948:2979
    {db tmp999=32;MYCOPY(dummy7_bdfa)} // 0948:297a
    {db tmp999=84;MYCOPY(dummy7_bdfb)} // 0948:297b
    {db tmp999=79;MYCOPY(dummy7_bdfc)} // 0948:297c
    {db tmp999=77;MYCOPY(dummy7_bdfd)} // 0948:297d
    {db tmp999=65;MYCOPY(dummy7_bdfe)} // 0948:297e
    {db tmp999=84;MYCOPY(dummy7_bdff)} // 0948:297f
    {db tmp999=79;MYCOPY(dummy7_be00)} // 0948:2980
    {db tmp999=82;MYCOPY(dummy7_be01)} // 0948:2981
    {db tmp999=46;MYCOPY(dummy7_be02)} // 0948:2982
    {db tmp999=20;MYCOPY(unk_1a3e4)} // 0948:2984
    {db tmp999[32]={4,87,72,65,84,39,83,32,84,72,69,32,77,65,84,84,69,82,63,13,65,82,69,32,89,79,85,32,65,70,82,65};MYCOPY(dummy7_be05)} // 0948:2985
    {db tmp999=73;MYCOPY(dummy7_be25)} // 0948:29a5
    {db tmp999=68;MYCOPY(dummy7_be26)} // 0948:29a6
    {db tmp999=63;MYCOPY(dummy7_be27)} // 0948:29a7
    {db tmp999=24;MYCOPY(unk_1a409)} // 0948:29a9
    {db tmp999[32]={5,66,65,76,69,79,71,44,32,73,32,82,69,65,76,76,89,32,84,72,73,78,75,13,89,79,85,32,78,69,69,68};MYCOPY(dummy7_be2a)} // 0948:29aa
    {db tmp999=32;MYCOPY(dummy7_be4a)} // 0948:29ca
    {db tmp999=84;MYCOPY(dummy7_be4b)} // 0948:29cb
    {db tmp999=79;MYCOPY(dummy7_be4c)} // 0948:29cc
    {db tmp999=32;MYCOPY(dummy7_be4d)} // 0948:29cd
    {db tmp999=82;MYCOPY(dummy7_be4e)} // 0948:29ce
    {db tmp999=69;MYCOPY(dummy7_be4f)} // 0948:29cf
    {db tmp999=84;MYCOPY(dummy7_be50)} // 0948:29d0
    {db tmp999=72;MYCOPY(dummy7_be51)} // 0948:29d1
    {db tmp999=73;MYCOPY(dummy7_be52)} // 0948:29d2
    {db tmp999=78;MYCOPY(dummy7_be53)} // 0948:29d3
    {db tmp999=75;MYCOPY(dummy7_be54)} // 0948:29d4
    {db tmp999=13;MYCOPY(dummy7_be55)} // 0948:29d5
    {db tmp999=89;MYCOPY(dummy7_be56)} // 0948:29d6
    {db tmp999=79;MYCOPY(dummy7_be57)} // 0948:29d7
    {db tmp999=85;MYCOPY(dummy7_be58)} // 0948:29d8
    {db tmp999=82;MYCOPY(dummy7_be59)} // 0948:29d9
    {db tmp999=32;MYCOPY(dummy7_be5a)} // 0948:29da
    {db tmp999=83;MYCOPY(dummy7_be5b)} // 0948:29db
    {db tmp999=84;MYCOPY(dummy7_be5c)} // 0948:29dc
    {db tmp999=82;MYCOPY(dummy7_be5d)} // 0948:29dd
    {db tmp999=65;MYCOPY(dummy7_be5e)} // 0948:29de
    {db tmp999=84;MYCOPY(dummy7_be5f)} // 0948:29df
    {db tmp999=69;MYCOPY(dummy7_be60)} // 0948:29e0
    {db tmp999=71;MYCOPY(dummy7_be61)} // 0948:29e1
    {db tmp999=89;MYCOPY(dummy7_be62)} // 0948:29e2
    {db tmp999=46;MYCOPY(dummy7_be63)} // 0948:29e3
    {db tmp999=24;MYCOPY(unk_1a445)} // 0948:29e5
    {db tmp999[32]={4,67,79,77,69,32,79,78,32,79,76,65,70,44,32,87,72,79,32,68,79,69,83,13,84,72,73,83,32,71,85,89};MYCOPY(dummy7_be66)} // 0948:29e6
    {db tmp999=32;MYCOPY(dummy7_be86)} // 0948:2a06
    {db tmp999=84;MYCOPY(dummy7_be87)} // 0948:2a07
    {db tmp999=72;MYCOPY(dummy7_be88)} // 0948:2a08
    {db tmp999=73;MYCOPY(dummy7_be89)} // 0948:2a09
    {db tmp999=78;MYCOPY(dummy7_be8a)} // 0948:2a0a
    {db tmp999=75;MYCOPY(dummy7_be8b)} // 0948:2a0b
    {db tmp999=32;MYCOPY(dummy7_be8c)} // 0948:2a0c
    {db tmp999=72;MYCOPY(dummy7_be8d)} // 0948:2a0d
    {db tmp999=69;MYCOPY(dummy7_be8e)} // 0948:2a0e
    {db tmp999=32;MYCOPY(dummy7_be8f)} // 0948:2a0f
    {db tmp999=73;MYCOPY(dummy7_be90)} // 0948:2a10
    {db tmp999=83;MYCOPY(dummy7_be91)} // 0948:2a11
    {db tmp999=63;MYCOPY(dummy7_be92)} // 0948:2a12
    {db tmp999=23;MYCOPY(unk_1a474)} // 0948:2a14
    {db tmp999[32]={5,73,32,65,77,32,84,79,77,65,84,79,82,44,32,83,85,80,82,69,77,69,13,82,85,76,69,82,32,79,70,32};MYCOPY(dummy7_be95)} // 0948:2a15
    {db tmp999[32]={67,82,79,85,84,79,78,44,32,65,78,68,13,89,79,85,32,65,82,69,32,77,89,32,80,82,73,83,79,78,69,82};MYCOPY(dummy7_beb5)} // 0948:2a35
    {db tmp999=83;MYCOPY(dummy7_bed5)} // 0948:2a55
    {db tmp999=33;MYCOPY(dummy7_bed6)} // 0948:2a56
    {db tmp999=22;MYCOPY(unk_1a4b8)} // 0948:2a58
    {db tmp999=3;MYCOPY(dummy7_bed9)} // 0948:2a59
    {db tmp999=89;MYCOPY(dummy7_beda)} // 0948:2a5a
    {db tmp999=79;MYCOPY(dummy7_bedb)} // 0948:2a5b
    {db tmp999=85;MYCOPY(dummy7_bedc)} // 0948:2a5c
    {db tmp999=32;MYCOPY(dummy7_bedd)} // 0948:2a5d
    {db tmp999=87;MYCOPY(dummy7_bede)} // 0948:2a5e
    {db tmp999=73;MYCOPY(dummy7_bedf)} // 0948:2a5f
    {db tmp999=76;MYCOPY(dummy7_bee0)} // 0948:2a60
    {db tmp999=76;MYCOPY(dummy7_bee1)} // 0948:2a61
    {db tmp999=32;MYCOPY(dummy7_bee2)} // 0948:2a62
    {db tmp999=78;MYCOPY(dummy7_bee3)} // 0948:2a63
    {db tmp999=79;MYCOPY(dummy7_bee4)} // 0948:2a64
    {db tmp999=84;MYCOPY(dummy7_bee5)} // 0948:2a65
    {db tmp999=32;MYCOPY(dummy7_bee6)} // 0948:2a66
    {db tmp999=69;MYCOPY(dummy7_bee7)} // 0948:2a67
    {db tmp999=83;MYCOPY(dummy7_bee8)} // 0948:2a68
    {db tmp999=67;MYCOPY(dummy7_bee9)} // 0948:2a69
    {db tmp999=65;MYCOPY(dummy7_beea)} // 0948:2a6a
    {db tmp999=80;MYCOPY(dummy7_beeb)} // 0948:2a6b
    {db tmp999=69;MYCOPY(dummy7_beec)} // 0948:2a6c
    {db tmp999=46;MYCOPY(dummy7_beed)} // 0948:2a6d
    {db tmp999=24;MYCOPY(unk_1a4cf)} // 0948:2a6f
    {db tmp999[32]={4,65,78,68,32,87,72,69,82,69,32,68,79,32,89,79,85,32,84,72,73,78,75,13,89,79,85,32,65,82,69,32};MYCOPY(dummy7_bef0)} // 0948:2a70
    {db tmp999=71;MYCOPY(dummy7_bf10)} // 0948:2a90
    {db tmp999=79;MYCOPY(dummy7_bf11)} // 0948:2a91
    {db tmp999=73;MYCOPY(dummy7_bf12)} // 0948:2a92
    {db tmp999=78;MYCOPY(dummy7_bf13)} // 0948:2a93
    {db tmp999=71;MYCOPY(dummy7_bf14)} // 0948:2a94
    {db tmp999=63;MYCOPY(dummy7_bf15)} // 0948:2a95
    {db tmp999=15;MYCOPY(unk_1a4f7)} // 0948:2a97
    {db tmp999=4;MYCOPY(dummy7_bf18)} // 0948:2a98
    {db tmp999=79;MYCOPY(dummy7_bf19)} // 0948:2a99
    {db tmp999=85;MYCOPY(dummy7_bf1a)} // 0948:2a9a
    {db tmp999=84;MYCOPY(dummy7_bf1b)} // 0948:2a9b
    {db tmp999=32;MYCOPY(dummy7_bf1c)} // 0948:2a9c
    {db tmp999=84;MYCOPY(dummy7_bf1d)} // 0948:2a9d
    {db tmp999=72;MYCOPY(dummy7_bf1e)} // 0948:2a9e
    {db tmp999=69;MYCOPY(dummy7_bf1f)} // 0948:2a9f
    {db tmp999=32;MYCOPY(dummy7_bf20)} // 0948:2aa0
    {db tmp999=69;MYCOPY(dummy7_bf21)} // 0948:2aa1
    {db tmp999=88;MYCOPY(dummy7_bf22)} // 0948:2aa2
    {db tmp999=73;MYCOPY(dummy7_bf23)} // 0948:2aa3
    {db tmp999=84;MYCOPY(dummy7_bf24)} // 0948:2aa4
    {db tmp999=44;MYCOPY(dummy7_bf25)} // 0948:2aa5
    {db tmp999=13;MYCOPY(dummy7_bf26)} // 0948:2aa6
    {db tmp999=84;MYCOPY(dummy7_bf27)} // 0948:2aa7
    {db tmp999=79;MYCOPY(dummy7_bf28)} // 0948:2aa8
    {db tmp999=77;MYCOPY(dummy7_bf29)} // 0948:2aa9
    {db tmp999=65;MYCOPY(dummy7_bf2a)} // 0948:2aaa
    {db tmp999=84;MYCOPY(dummy7_bf2b)} // 0948:2aab
    {db tmp999=79;MYCOPY(dummy7_bf2c)} // 0948:2aac
    {db tmp999=32;MYCOPY(dummy7_bf2d)} // 0948:2aad
    {db tmp999=72;MYCOPY(dummy7_bf2e)} // 0948:2aae
    {db tmp999=69;MYCOPY(dummy7_bf2f)} // 0948:2aaf
    {db tmp999=65;MYCOPY(dummy7_bf30)} // 0948:2ab0
    {db tmp999=68;MYCOPY(dummy7_bf31)} // 0948:2ab1
    {db tmp999=33;MYCOPY(dummy7_bf32)} // 0948:2ab2
    {db tmp999=15;MYCOPY(unk_1a514)} // 0948:2ab4
    {db tmp999[32]={5,80,76,69,65,83,69,32,76,69,84,32,85,83,13,71,79,32,66,65,67,75,32,72,79,77,69,44,13,77,82,46};MYCOPY(dummy7_bf35)} // 0948:2ab5
    {db tmp999=32;MYCOPY(dummy7_bf55)} // 0948:2ad5
    {db tmp999=84;MYCOPY(dummy7_bf56)} // 0948:2ad6
    {db tmp999=79;MYCOPY(dummy7_bf57)} // 0948:2ad7
    {db tmp999=77;MYCOPY(dummy7_bf58)} // 0948:2ad8
    {db tmp999=65;MYCOPY(dummy7_bf59)} // 0948:2ad9
    {db tmp999=84;MYCOPY(dummy7_bf5a)} // 0948:2ada
    {db tmp999=79;MYCOPY(dummy7_bf5b)} // 0948:2adb
    {db tmp999=82;MYCOPY(dummy7_bf5c)} // 0948:2adc
    {db tmp999=46;MYCOPY(dummy7_bf5d)} // 0948:2add
    {db tmp999=17;MYCOPY(unk_1a53f)} // 0948:2adf
    {db tmp999[32]={5,66,85,84,32,89,79,85,32,72,65,86,69,78,39,84,13,69,86,69,78,32,83,69,69,78,32,84,72,69,13,66};MYCOPY(dummy7_bf60)} // 0948:2ae0
    {db tmp999=65;MYCOPY(dummy7_bf80)} // 0948:2b00
    {db tmp999=76;MYCOPY(dummy7_bf81)} // 0948:2b01
    {db tmp999=76;MYCOPY(dummy7_bf82)} // 0948:2b02
    {db tmp999=82;MYCOPY(dummy7_bf83)} // 0948:2b03
    {db tmp999=79;MYCOPY(dummy7_bf84)} // 0948:2b04
    {db tmp999=79;MYCOPY(dummy7_bf85)} // 0948:2b05
    {db tmp999=77;MYCOPY(dummy7_bf86)} // 0948:2b06
    {db tmp999=32;MYCOPY(dummy7_bf87)} // 0948:2b07
    {db tmp999=89;MYCOPY(dummy7_bf88)} // 0948:2b08
    {db tmp999=69;MYCOPY(dummy7_bf89)} // 0948:2b09
    {db tmp999=84;MYCOPY(dummy7_bf8a)} // 0948:2b0a
    {db tmp999=33;MYCOPY(dummy7_bf8b)} // 0948:2b0b
    {db tmp999=18;MYCOPY(unk_1a56d)} // 0948:2b0d
    {db tmp999[32]={4,89,79,85,32,84,87,79,32,79,85,71,72,84,32,84,79,13,66,69,32,68,73,80,76,79,77,65,84,83,46,0};MYCOPY(dummy7_bf8e)} // 0948:2b0e
    {db tmp999=13;MYCOPY(unk_1a58e)} // 0948:2b2e
    {db tmp999=3;MYCOPY(dummy7_bfaf)} // 0948:2b2f
    {db tmp999=86;MYCOPY(dummy7_bfb0)} // 0948:2b30
    {db tmp999=69;MYCOPY(dummy7_bfb1)} // 0948:2b31
    {db tmp999=82;MYCOPY(dummy7_bfb2)} // 0948:2b32
    {db tmp999=89;MYCOPY(dummy7_bfb3)} // 0948:2b33
    {db tmp999=32;MYCOPY(dummy7_bfb4)} // 0948:2b34
    {db tmp999=70;MYCOPY(dummy7_bfb5)} // 0948:2b35
    {db tmp999=85;MYCOPY(dummy7_bfb6)} // 0948:2b36
    {db tmp999=78;MYCOPY(dummy7_bfb7)} // 0948:2b37
    {db tmp999=78;MYCOPY(dummy7_bfb8)} // 0948:2b38
    {db tmp999=89;MYCOPY(dummy7_bfb9)} // 0948:2b39
    {db tmp999=46;MYCOPY(dummy7_bfba)} // 0948:2b3a
    {db tmp999=21;MYCOPY(unk_1a59c)} // 0948:2b3c
    {db tmp999[32]={5,83,72,72,72,46,32,81,85,73,67,75,44,32,76,69,84,39,83,13,72,85,82,82,89,32,79,85,84,32,84,72};MYCOPY(dummy7_bfbd)} // 0948:2b3d
    {db tmp999=69;MYCOPY(dummy7_bfdd)} // 0948:2b5d
    {db tmp999=32;MYCOPY(dummy7_bfde)} // 0948:2b5e
    {db tmp999=69;MYCOPY(dummy7_bfdf)} // 0948:2b5f
    {db tmp999=88;MYCOPY(dummy7_bfe0)} // 0948:2b60
    {db tmp999=73;MYCOPY(dummy7_bfe1)} // 0948:2b61
    {db tmp999=84;MYCOPY(dummy7_bfe2)} // 0948:2b62
    {db tmp999=13;MYCOPY(dummy7_bfe3)} // 0948:2b63
    {db tmp999=66;MYCOPY(dummy7_bfe4)} // 0948:2b64
    {db tmp999=69;MYCOPY(dummy7_bfe5)} // 0948:2b65
    {db tmp999=70;MYCOPY(dummy7_bfe6)} // 0948:2b66
    {db tmp999=79;MYCOPY(dummy7_bfe7)} // 0948:2b67
    {db tmp999=82;MYCOPY(dummy7_bfe8)} // 0948:2b68
    {db tmp999=69;MYCOPY(dummy7_bfe9)} // 0948:2b69
    {db tmp999=32;MYCOPY(dummy7_bfea)} // 0948:2b6a
    {db tmp999=72;MYCOPY(dummy7_bfeb)} // 0948:2b6b
    {db tmp999=69;MYCOPY(dummy7_bfec)} // 0948:2b6c
    {db tmp999=32;MYCOPY(dummy7_bfed)} // 0948:2b6d
    {db tmp999=70;MYCOPY(dummy7_bfee)} // 0948:2b6e
    {db tmp999=73;MYCOPY(dummy7_bfef)} // 0948:2b6f
    {db tmp999=78;MYCOPY(dummy7_bff0)} // 0948:2b70
    {db tmp999=68;MYCOPY(dummy7_bff1)} // 0948:2b71
    {db tmp999=83;MYCOPY(dummy7_bff2)} // 0948:2b72
    {db tmp999=32;MYCOPY(dummy7_bff3)} // 0948:2b73
    {db tmp999=85;MYCOPY(dummy7_bff4)} // 0948:2b74
    {db tmp999=83;MYCOPY(dummy7_bff5)} // 0948:2b75
    {db tmp999=46;MYCOPY(dummy7_bff6)} // 0948:2b76
    {char tmp999[9]="NEW GAME";MYCOPY(anewgame)} // 0948:2b78
    {char tmp999[9]="PASSWORD";MYCOPY(apassword)} // 0948:2b81
    {char tmp999[17]="                ";MYCOPY(asc_1a5ea)} // 0948:2b8a
    {char tmp999[10]="GAME OVER";MYCOPY(agameover)} // 0948:2b9b
    {char tmp999[8]="OPTIONS";MYCOPY(aoptions)} // 0948:2ba5
    {char tmp999[8]="PLAYERS";MYCOPY(aplayers)} // 0948:2bad
    {char tmp999[4]="ONE";MYCOPY(aone)} // 0948:2bb5
    {char tmp999[4]="TWO";MYCOPY(atwo)} // 0948:2bb9
    {char tmp999[6]="MUSIC";MYCOPY(amusic)} // 0948:2bbd
    {char tmp999[6]="SOUND";MYCOPY(asound)} // 0948:2bc3
    {char tmp999[7]="STEREO";MYCOPY(astereo)} // 0948:2bc9
    {char tmp999[4]="ON ";MYCOPY(aon)} // 0948:2bd0
    {char tmp999[4]="OFF";MYCOPY(aoff)} // 0948:2bd4
    {char tmp999[5]="EXIT";MYCOPY(aexit)} // 0948:2bd8
    {db tmp999=10;MYCOPY(unk_1a63d)} // 0948:2bdd
    {db tmp999=4;MYCOPY(dummy7_c05e)} // 0948:2bde
    {db tmp999=80;MYCOPY(dummy7_c05f)} // 0948:2bdf
    {db tmp999=65;MYCOPY(dummy7_c060)} // 0948:2be0
    {db tmp999=83;MYCOPY(dummy7_c061)} // 0948:2be1
    {db tmp999=83;MYCOPY(dummy7_c062)} // 0948:2be2
    {db tmp999=87;MYCOPY(dummy7_c063)} // 0948:2be3
    {db tmp999=79;MYCOPY(dummy7_c064)} // 0948:2be4
    {db tmp999=82;MYCOPY(dummy7_c065)} // 0948:2be5
    {db tmp999=68;MYCOPY(dummy7_c066)} // 0948:2be6
    {db tmp999=13;MYCOPY(dummy7_c067)} // 0948:2be7
    {db tmp999=32;MYCOPY(dummy7_c068)} // 0948:2be8
    {db tmp999=32;MYCOPY(dummy7_c069)} // 0948:2be9
    {db tmp999=32;MYCOPY(dummy7_c06a)} // 0948:2bea
    {db tmp999=32;MYCOPY(dummy7_c06b)} // 0948:2beb
    {db tmp999=32;MYCOPY(dummy7_c06c)} // 0948:2bec
    {db tmp999=32;MYCOPY(dummy7_c06d)} // 0948:2bed
    {db tmp999=32;MYCOPY(dummy7_c06e)} // 0948:2bee
    {db tmp999=32;MYCOPY(dummy7_c06f)} // 0948:2bef
    {char tmp999[17]="INVALID PASSWORD";MYCOPY(ainvalidpasswor)} // 0948:2bf1
    {db tmp999=12;MYCOPY(unk_1a662)} // 0948:2c02
    {db tmp999[32]={5,84,82,89,32,65,71,65,73,78,63,13,32,32,32,32,32,32,32,32,32,32,13,32,32,32,32,32,32,32,32,32};MYCOPY(dummy7_c083)} // 0948:2c03
    {db tmp999=32;MYCOPY(dummy7_c0a3)} // 0948:2c23
    {char tmp999[12]="QUIT TO DOS";MYCOPY(aquittodos_0)} // 0948:2c25
    {db tmp999=25;MYCOPY(unk_1a691)} // 0948:2c31
    {db tmp999[32]={4,71,82,82,82,46,46,46,84,72,69,32,84,72,82,69,69,32,79,70,32,89,79,85,13,72,65,86,69,32,66,69};MYCOPY(dummy7_c0b2)} // 0948:2c32
    {db tmp999=69;MYCOPY(dummy7_c0d2)} // 0948:2c52
    {db tmp999=78;MYCOPY(dummy7_c0d3)} // 0948:2c53
    {db tmp999=32;MYCOPY(dummy7_c0d4)} // 0948:2c54
    {db tmp999=65;MYCOPY(dummy7_c0d5)} // 0948:2c55
    {db tmp999=32;MYCOPY(dummy7_c0d6)} // 0948:2c56
    {db tmp999=67;MYCOPY(dummy7_c0d7)} // 0948:2c57
    {db tmp999=79;MYCOPY(dummy7_c0d8)} // 0948:2c58
    {db tmp999=78;MYCOPY(dummy7_c0d9)} // 0948:2c59
    {db tmp999=83;MYCOPY(dummy7_c0da)} // 0948:2c5a
    {db tmp999=84;MYCOPY(dummy7_c0db)} // 0948:2c5b
    {db tmp999=65;MYCOPY(dummy7_c0dc)} // 0948:2c5c
    {db tmp999=78;MYCOPY(dummy7_c0dd)} // 0948:2c5d
    {db tmp999=84;MYCOPY(dummy7_c0de)} // 0948:2c5e
    {db tmp999=46;MYCOPY(dummy7_c0df)} // 0948:2c5f
    {db tmp999=46;MYCOPY(dummy7_c0e0)} // 0948:2c60
    {db tmp999=46;MYCOPY(dummy7_c0e1)} // 0948:2c61
    {db tmp999=23;MYCOPY(unk_1a6c3)} // 0948:2c63
    {db tmp999[32]={4,72,69,65,68,65,67,72,69,32,69,86,69,82,32,83,73,78,67,69,32,73,13,66,82,79,85,71,72,84,32,89};MYCOPY(dummy7_c0e4)} // 0948:2c64
    {db tmp999=79;MYCOPY(dummy7_c104)} // 0948:2c84
    {db tmp999=85;MYCOPY(dummy7_c105)} // 0948:2c85
    {db tmp999=32;MYCOPY(dummy7_c106)} // 0948:2c86
    {db tmp999=65;MYCOPY(dummy7_c107)} // 0948:2c87
    {db tmp999=66;MYCOPY(dummy7_c108)} // 0948:2c88
    {db tmp999=79;MYCOPY(dummy7_c109)} // 0948:2c89
    {db tmp999=65;MYCOPY(dummy7_c10a)} // 0948:2c8a
    {db tmp999=82;MYCOPY(dummy7_c10b)} // 0948:2c8b
    {db tmp999=68;MYCOPY(dummy7_c10c)} // 0948:2c8c
    {db tmp999=33;MYCOPY(dummy7_c10d)} // 0948:2c8d
    {db tmp999=19;MYCOPY(unk_1a6ef)} // 0948:2c8f
    {db tmp999[32]={4,68,79,69,83,32,84,72,65,84,32,77,69,65,78,32,87,69,13,67,65,78,32,71,79,32,72,79,77,69,32,78};MYCOPY(dummy7_c110)} // 0948:2c90
    {db tmp999=79;MYCOPY(dummy7_c130)} // 0948:2cb0
    {db tmp999=87;MYCOPY(dummy7_c131)} // 0948:2cb1
    {db tmp999=63;MYCOPY(dummy7_c132)} // 0948:2cb2
    {db tmp999=15;MYCOPY(unk_1a714)} // 0948:2cb4
    {db tmp999=3;MYCOPY(dummy7_c135)} // 0948:2cb5
    {db tmp999=85;MYCOPY(dummy7_c136)} // 0948:2cb6
    {db tmp999=77;MYCOPY(dummy7_c137)} // 0948:2cb7
    {db tmp999=77;MYCOPY(dummy7_c138)} // 0948:2cb8
    {db tmp999=77;MYCOPY(dummy7_c139)} // 0948:2cb9
    {db tmp999=46;MYCOPY(dummy7_c13a)} // 0948:2cba
    {db tmp999=46;MYCOPY(dummy7_c13b)} // 0948:2cbb
    {db tmp999=46;MYCOPY(dummy7_c13c)} // 0948:2cbc
    {db tmp999=46;MYCOPY(dummy7_c13d)} // 0948:2cbd
    {db tmp999=79;MYCOPY(dummy7_c13e)} // 0948:2cbe
    {db tmp999=75;MYCOPY(dummy7_c13f)} // 0948:2cbf
    {db tmp999=65;MYCOPY(dummy7_c140)} // 0948:2cc0
    {db tmp999=89;MYCOPY(dummy7_c141)} // 0948:2cc1
    {db tmp999=46;MYCOPY(dummy7_c142)} // 0948:2cc2
    {db tmp999=8;MYCOPY(unk_1a724)} // 0948:2cc4
    {db tmp999=3;MYCOPY(dummy7_c145)} // 0948:2cc5
    {db tmp999=78;MYCOPY(dummy7_c146)} // 0948:2cc6
    {db tmp999=79;MYCOPY(dummy7_c147)} // 0948:2cc7
    {db tmp999=84;MYCOPY(dummy7_c148)} // 0948:2cc8
    {db tmp999=33;MYCOPY(dummy7_c149)} // 0948:2cc9
    {db tmp999=33;MYCOPY(dummy7_c14a)} // 0948:2cca
    {db tmp999=33;MYCOPY(dummy7_c14b)} // 0948:2ccb
    {db tmp999=20;MYCOPY(unk_1a72d)} // 0948:2ccd
    {db tmp999[32]={5,78,79,87,32,84,72,73,83,32,73,83,32,65,78,13,65,76,73,69,78,32,84,72,65,84,32,73,32,67,65,78};MYCOPY(dummy7_c14e)} // 0948:2cce
    {db tmp999=39;MYCOPY(dummy7_c16e)} // 0948:2cee
    {db tmp999=84;MYCOPY(dummy7_c16f)} // 0948:2cef
    {db tmp999=13;MYCOPY(dummy7_c170)} // 0948:2cf0
    {db tmp999=87;MYCOPY(dummy7_c171)} // 0948:2cf1
    {db tmp999=65;MYCOPY(dummy7_c172)} // 0948:2cf2
    {db tmp999=73;MYCOPY(dummy7_c173)} // 0948:2cf3
    {db tmp999=84;MYCOPY(dummy7_c174)} // 0948:2cf4
    {db tmp999=32;MYCOPY(dummy7_c175)} // 0948:2cf5
    {db tmp999=84;MYCOPY(dummy7_c176)} // 0948:2cf6
    {db tmp999=79;MYCOPY(dummy7_c177)} // 0948:2cf7
    {db tmp999=32;MYCOPY(dummy7_c178)} // 0948:2cf8
    {db tmp999=66;MYCOPY(dummy7_c179)} // 0948:2cf9
    {db tmp999=65;MYCOPY(dummy7_c17a)} // 0948:2cfa
    {db tmp999=83;MYCOPY(dummy7_c17b)} // 0948:2cfb
    {db tmp999=72;MYCOPY(dummy7_c17c)} // 0948:2cfc
    {db tmp999=33;MYCOPY(dummy7_c17d)} // 0948:2cfd
    {db tmp999=33;MYCOPY(dummy7_c17e)} // 0948:2cfe
    {db tmp999=33;MYCOPY(dummy7_c17f)} // 0948:2cff
    {db tmp999=19;MYCOPY(unk_1a761)} // 0948:2d01
    {db tmp999[32]={6,87,69,76,76,44,32,73,39,68,32,76,79,86,69,13,84,79,32,67,72,65,84,44,32,66,85,84,32,73,39,86};MYCOPY(dummy7_c182)} // 0948:2d02
    {db tmp999[32]={69,13,71,79,84,32,77,69,65,78,32,65,78,68,32,69,86,73,76,13,84,72,73,78,71,83,32,84,79,32,68,79};MYCOPY(dummy7_c1a2)} // 0948:2d22
    {db tmp999=46;MYCOPY(dummy7_c1c2)} // 0948:2d42
    {db tmp999=46;MYCOPY(dummy7_c1c3)} // 0948:2d43
    {db tmp999=46;MYCOPY(dummy7_c1c4)} // 0948:2d44
    {db tmp999=13;MYCOPY(unk_1a7a6)} // 0948:2d46
    {db tmp999=4;MYCOPY(dummy7_c1c7)} // 0948:2d47
    {db tmp999=72;MYCOPY(dummy7_c1c8)} // 0948:2d48
    {db tmp999=65;MYCOPY(dummy7_c1c9)} // 0948:2d49
    {db tmp999=86;MYCOPY(dummy7_c1ca)} // 0948:2d4a
    {db tmp999=69;MYCOPY(dummy7_c1cb)} // 0948:2d4b
    {db tmp999=32;MYCOPY(dummy7_c1cc)} // 0948:2d4c
    {db tmp999=70;MYCOPY(dummy7_c1cd)} // 0948:2d4d
    {db tmp999=85;MYCOPY(dummy7_c1ce)} // 0948:2d4e
    {db tmp999=78;MYCOPY(dummy7_c1cf)} // 0948:2d4f
    {db tmp999=46;MYCOPY(dummy7_c1d0)} // 0948:2d50
    {db tmp999=13;MYCOPY(dummy7_c1d1)} // 0948:2d51
    {db tmp999=72;MYCOPY(dummy7_c1d2)} // 0948:2d52
    {db tmp999=65;MYCOPY(dummy7_c1d3)} // 0948:2d53
    {db tmp999=32;MYCOPY(dummy7_c1d4)} // 0948:2d54
    {db tmp999=72;MYCOPY(dummy7_c1d5)} // 0948:2d55
    {db tmp999=65;MYCOPY(dummy7_c1d6)} // 0948:2d56
    {db tmp999=32;MYCOPY(dummy7_c1d7)} // 0948:2d57
    {db tmp999=72;MYCOPY(dummy7_c1d8)} // 0948:2d58
    {db tmp999=65;MYCOPY(dummy7_c1d9)} // 0948:2d59
    {db tmp999=33;MYCOPY(dummy7_c1da)} // 0948:2d5a
    {db tmp999=33;MYCOPY(dummy7_c1db)} // 0948:2d5b
    {db tmp999=33;MYCOPY(dummy7_c1dc)} // 0948:2d5c
    {db tmp999=16;MYCOPY(unk_1a7be)} // 0948:2d5e
    {db tmp999=4;MYCOPY(dummy7_c1df)} // 0948:2d5f
    {db tmp999=78;MYCOPY(dummy7_c1e0)} // 0948:2d60
    {db tmp999=79;MYCOPY(dummy7_c1e1)} // 0948:2d61
    {db tmp999=84;MYCOPY(dummy7_c1e2)} // 0948:2d62
    {db tmp999=32;MYCOPY(dummy7_c1e3)} // 0948:2d63
    {db tmp999=84;MYCOPY(dummy7_c1e4)} // 0948:2d64
    {db tmp999=72;MYCOPY(dummy7_c1e5)} // 0948:2d65
    {db tmp999=73;MYCOPY(dummy7_c1e6)} // 0948:2d66
    {db tmp999=83;MYCOPY(dummy7_c1e7)} // 0948:2d67
    {db tmp999=32;MYCOPY(dummy7_c1e8)} // 0948:2d68
    {db tmp999=76;MYCOPY(dummy7_c1e9)} // 0948:2d69
    {db tmp999=69;MYCOPY(dummy7_c1ea)} // 0948:2d6a
    {db tmp999=86;MYCOPY(dummy7_c1eb)} // 0948:2d6b
    {db tmp999=69;MYCOPY(dummy7_c1ec)} // 0948:2d6c
    {db tmp999=76;MYCOPY(dummy7_c1ed)} // 0948:2d6d
    {db tmp999=13;MYCOPY(dummy7_c1ee)} // 0948:2d6e
    {db tmp999=65;MYCOPY(dummy7_c1ef)} // 0948:2d6f
    {db tmp999=71;MYCOPY(dummy7_c1f0)} // 0948:2d70
    {db tmp999=65;MYCOPY(dummy7_c1f1)} // 0948:2d71
    {db tmp999=73;MYCOPY(dummy7_c1f2)} // 0948:2d72
    {db tmp999=78;MYCOPY(dummy7_c1f3)} // 0948:2d73
    {db tmp999=33;MYCOPY(dummy7_c1f4)} // 0948:2d74
    {db tmp999=16;MYCOPY(unk_1a7d6)} // 0948:2d76
    {db tmp999[32]={6,78,79,87,32,76,79,79,75,32,72,69,82,69,44,13,80,76,65,89,69,82,44,32,87,69,39,82,69,13,84,73};MYCOPY(dummy7_c1f7)} // 0948:2d77
    {db tmp999=82;MYCOPY(dummy7_c217)} // 0948:2d97
    {db tmp999=69;MYCOPY(dummy7_c218)} // 0948:2d98
    {db tmp999=68;MYCOPY(dummy7_c219)} // 0948:2d99
    {db tmp999=32;MYCOPY(dummy7_c21a)} // 0948:2d9a
    {db tmp999=79;MYCOPY(dummy7_c21b)} // 0948:2d9b
    {db tmp999=70;MYCOPY(dummy7_c21c)} // 0948:2d9c
    {db tmp999=32;MYCOPY(dummy7_c21d)} // 0948:2d9d
    {db tmp999=84;MYCOPY(dummy7_c21e)} // 0948:2d9e
    {db tmp999=72;MYCOPY(dummy7_c21f)} // 0948:2d9f
    {db tmp999=73;MYCOPY(dummy7_c220)} // 0948:2da0
    {db tmp999=83;MYCOPY(dummy7_c221)} // 0948:2da1
    {db tmp999=13;MYCOPY(dummy7_c222)} // 0948:2da2
    {db tmp999=76;MYCOPY(dummy7_c223)} // 0948:2da3
    {db tmp999=69;MYCOPY(dummy7_c224)} // 0948:2da4
    {db tmp999=86;MYCOPY(dummy7_c225)} // 0948:2da5
    {db tmp999=69;MYCOPY(dummy7_c226)} // 0948:2da6
    {db tmp999=76;MYCOPY(dummy7_c227)} // 0948:2da7
    {db tmp999=46;MYCOPY(dummy7_c228)} // 0948:2da8
    {db tmp999=19;MYCOPY(unk_1a80a)} // 0948:2daa
    {db tmp999=4;MYCOPY(dummy7_c22b)} // 0948:2dab
    {db tmp999=78;MYCOPY(dummy7_c22c)} // 0948:2dac
    {db tmp999=79;MYCOPY(dummy7_c22d)} // 0948:2dad
    {db tmp999=32;MYCOPY(dummy7_c22e)} // 0948:2dae
    {db tmp999=77;MYCOPY(dummy7_c22f)} // 0948:2daf
    {db tmp999=79;MYCOPY(dummy7_c230)} // 0948:2db0
    {db tmp999=82;MYCOPY(dummy7_c231)} // 0948:2db1
    {db tmp999=69;MYCOPY(dummy7_c232)} // 0948:2db2
    {db tmp999=32;MYCOPY(dummy7_c233)} // 0948:2db3
    {db tmp999=77;MYCOPY(dummy7_c234)} // 0948:2db4
    {db tmp999=73;MYCOPY(dummy7_c235)} // 0948:2db5
    {db tmp999=83;MYCOPY(dummy7_c236)} // 0948:2db6
    {db tmp999=84;MYCOPY(dummy7_c237)} // 0948:2db7
    {db tmp999=65;MYCOPY(dummy7_c238)} // 0948:2db8
    {db tmp999=75;MYCOPY(dummy7_c239)} // 0948:2db9
    {db tmp999=69;MYCOPY(dummy7_c23a)} // 0948:2dba
    {db tmp999=83;MYCOPY(dummy7_c23b)} // 0948:2dbb
    {db tmp999=44;MYCOPY(dummy7_c23c)} // 0948:2dbc
    {db tmp999=13;MYCOPY(dummy7_c23d)} // 0948:2dbd
    {db tmp999=79;MYCOPY(dummy7_c23e)} // 0948:2dbe
    {db tmp999=75;MYCOPY(dummy7_c23f)} // 0948:2dbf
    {db tmp999=65;MYCOPY(dummy7_c240)} // 0948:2dc0
    {db tmp999=89;MYCOPY(dummy7_c241)} // 0948:2dc1
    {db tmp999=33;MYCOPY(dummy7_c242)} // 0948:2dc2
    {db tmp999=21;MYCOPY(unk_1a824)} // 0948:2dc4
    {db tmp999[32]={6,68,79,78,39,84,32,66,69,32,83,79,32,72,65,82,68,32,79,78,13,84,72,69,32,80,76,65,89,69,82,44};MYCOPY(dummy7_c245)} // 0948:2dc5
    {db tmp999[32]={32,66,65,76,69,79,71,46,13,72,85,77,65,78,32,66,69,73,78,71,83,32,65,82,69,13,86,69,82,89,32,83};MYCOPY(dummy7_c265)} // 0948:2de5
    {db tmp999=69;MYCOPY(dummy7_c285)} // 0948:2e05
    {db tmp999=78;MYCOPY(dummy7_c286)} // 0948:2e06
    {db tmp999=83;MYCOPY(dummy7_c287)} // 0948:2e07
    {db tmp999=73;MYCOPY(dummy7_c288)} // 0948:2e08
    {db tmp999=84;MYCOPY(dummy7_c289)} // 0948:2e09
    {db tmp999=73;MYCOPY(dummy7_c28a)} // 0948:2e0a
    {db tmp999=86;MYCOPY(dummy7_c28b)} // 0948:2e0b
    {db tmp999=69;MYCOPY(dummy7_c28c)} // 0948:2e0c
    {db tmp999=46;MYCOPY(dummy7_c28d)} // 0948:2e0d
    {db tmp999=22;MYCOPY(unk_1a86f)} // 0948:2e0f
    {db tmp999[32]={4,87,69,76,76,44,32,73,70,32,65,84,32,70,73,82,83,84,13,89,79,85,32,68,79,78,39,84,32,83,85,67};MYCOPY(dummy7_c290)} // 0948:2e10
    {db tmp999=67;MYCOPY(dummy7_c2b0)} // 0948:2e30
    {db tmp999=69;MYCOPY(dummy7_c2b1)} // 0948:2e31
    {db tmp999=69;MYCOPY(dummy7_c2b2)} // 0948:2e32
    {db tmp999=68;MYCOPY(dummy7_c2b3)} // 0948:2e33
    {db tmp999=46;MYCOPY(dummy7_c2b4)} // 0948:2e34
    {db tmp999=46;MYCOPY(dummy7_c2b5)} // 0948:2e35
    {db tmp999=46;MYCOPY(dummy7_c2b6)} // 0948:2e36
    {db tmp999=19;MYCOPY(unk_1a898)} // 0948:2e38
    {db tmp999[32]={4,66,69,32,72,65,80,80,89,32,89,79,85,32,72,65,86,69,13,65,78,79,84,72,69,82,32,67,72,65,78,67};MYCOPY(dummy7_c2b9)} // 0948:2e39
    {db tmp999=69;MYCOPY(dummy7_c2d9)} // 0948:2e59
    {db tmp999=63;MYCOPY(dummy7_c2da)} // 0948:2e5a
    {db tmp999=15;MYCOPY(unk_1a8bc)} // 0948:2e5c
    {db tmp999=4;MYCOPY(dummy7_c2dd)} // 0948:2e5d
    {db tmp999=66;MYCOPY(dummy7_c2de)} // 0948:2e5e
    {db tmp999=65;MYCOPY(dummy7_c2df)} // 0948:2e5f
    {db tmp999=76;MYCOPY(dummy7_c2e0)} // 0948:2e60
    {db tmp999=69;MYCOPY(dummy7_c2e1)} // 0948:2e61
    {db tmp999=79;MYCOPY(dummy7_c2e2)} // 0948:2e62
    {db tmp999=71;MYCOPY(dummy7_c2e3)} // 0948:2e63
    {db tmp999=44;MYCOPY(dummy7_c2e4)} // 0948:2e64
    {db tmp999=32;MYCOPY(dummy7_c2e5)} // 0948:2e65
    {db tmp999=84;MYCOPY(dummy7_c2e6)} // 0948:2e66
    {db tmp999=72;MYCOPY(dummy7_c2e7)} // 0948:2e67
    {db tmp999=65;MYCOPY(dummy7_c2e8)} // 0948:2e68
    {db tmp999=84;MYCOPY(dummy7_c2e9)} // 0948:2e69
    {db tmp999=13;MYCOPY(dummy7_c2ea)} // 0948:2e6a
    {db tmp999=87;MYCOPY(dummy7_c2eb)} // 0948:2e6b
    {db tmp999=65;MYCOPY(dummy7_c2ec)} // 0948:2e6c
    {db tmp999=83;MYCOPY(dummy7_c2ed)} // 0948:2e6d
    {db tmp999=32;MYCOPY(dummy7_c2ee)} // 0948:2e6e
    {db tmp999=80;MYCOPY(dummy7_c2ef)} // 0948:2e6f
    {db tmp999=82;MYCOPY(dummy7_c2f0)} // 0948:2e70
    {db tmp999=79;MYCOPY(dummy7_c2f1)} // 0948:2e71
    {db tmp999=70;MYCOPY(dummy7_c2f2)} // 0948:2e72
    {db tmp999=79;MYCOPY(dummy7_c2f3)} // 0948:2e73
    {db tmp999=85;MYCOPY(dummy7_c2f4)} // 0948:2e74
    {db tmp999=78;MYCOPY(dummy7_c2f5)} // 0948:2e75
    {db tmp999=68;MYCOPY(dummy7_c2f6)} // 0948:2e76
    {db tmp999=46;MYCOPY(dummy7_c2f7)} // 0948:2e77
    {db tmp999=23;MYCOPY(unk_1a8d9)} // 0948:2e79
    {db tmp999[32]={5,87,69,39,82,69,32,66,65,67,75,32,87,72,69,82,69,32,87,69,13,83,84,65,82,84,69,68,33,32,32,87};MYCOPY(dummy7_c2fa)} // 0948:2e7a
    {db tmp999[32]={69,39,86,69,32,66,69,69,78,13,71,73,86,69,78,32,65,78,79,84,72,69,82,32,67,72,65,78,67,69,33,0};MYCOPY(dummy7_c31a)} // 0948:2e9a
    {db tmp999=15;MYCOPY(unk_1a91a)} // 0948:2eba
    {db tmp999=4;MYCOPY(dummy7_c33b)} // 0948:2ebb
    {db tmp999=77;MYCOPY(dummy7_c33c)} // 0948:2ebc
    {db tmp999=79;MYCOPY(dummy7_c33d)} // 0948:2ebd
    {db tmp999=82;MYCOPY(dummy7_c33e)} // 0948:2ebe
    {db tmp999=69;MYCOPY(dummy7_c33f)} // 0948:2ebf
    {db tmp999=32;MYCOPY(dummy7_c340)} // 0948:2ec0
    {db tmp999=77;MYCOPY(dummy7_c341)} // 0948:2ec1
    {db tmp999=79;MYCOPY(dummy7_c342)} // 0948:2ec2
    {db tmp999=78;MYCOPY(dummy7_c343)} // 0948:2ec3
    {db tmp999=83;MYCOPY(dummy7_c344)} // 0948:2ec4
    {db tmp999=84;MYCOPY(dummy7_c345)} // 0948:2ec5
    {db tmp999=69;MYCOPY(dummy7_c346)} // 0948:2ec6
    {db tmp999=82;MYCOPY(dummy7_c347)} // 0948:2ec7
    {db tmp999=83;MYCOPY(dummy7_c348)} // 0948:2ec8
    {db tmp999=13;MYCOPY(dummy7_c349)} // 0948:2ec9
    {db tmp999=84;MYCOPY(dummy7_c34a)} // 0948:2eca
    {db tmp999=79;MYCOPY(dummy7_c34b)} // 0948:2ecb
    {db tmp999=32;MYCOPY(dummy7_c34c)} // 0948:2ecc
    {db tmp999=70;MYCOPY(dummy7_c34d)} // 0948:2ecd
    {db tmp999=73;MYCOPY(dummy7_c34e)} // 0948:2ece
    {db tmp999=71;MYCOPY(dummy7_c34f)} // 0948:2ecf
    {db tmp999=72;MYCOPY(dummy7_c350)} // 0948:2ed0
    {db tmp999=84;MYCOPY(dummy7_c351)} // 0948:2ed1
    {db tmp999=33;MYCOPY(dummy7_c352)} // 0948:2ed2
    {db tmp999=16;MYCOPY(unk_1a934)} // 0948:2ed4
    {db tmp999=4;MYCOPY(dummy7_c355)} // 0948:2ed5
    {db tmp999=77;MYCOPY(dummy7_c356)} // 0948:2ed6
    {db tmp999=79;MYCOPY(dummy7_c357)} // 0948:2ed7
    {db tmp999=82;MYCOPY(dummy7_c358)} // 0948:2ed8
    {db tmp999=69;MYCOPY(dummy7_c359)} // 0948:2ed9
    {db tmp999=32;MYCOPY(dummy7_c35a)} // 0948:2eda
    {db tmp999=84;MYCOPY(dummy7_c35b)} // 0948:2edb
    {db tmp999=82;MYCOPY(dummy7_c35c)} // 0948:2edc
    {db tmp999=69;MYCOPY(dummy7_c35d)} // 0948:2edd
    {db tmp999=65;MYCOPY(dummy7_c35e)} // 0948:2ede
    {db tmp999=83;MYCOPY(dummy7_c35f)} // 0948:2edf
    {db tmp999=85;MYCOPY(dummy7_c360)} // 0948:2ee0
    {db tmp999=82;MYCOPY(dummy7_c361)} // 0948:2ee1
    {db tmp999=69;MYCOPY(dummy7_c362)} // 0948:2ee2
    {db tmp999=83;MYCOPY(dummy7_c363)} // 0948:2ee3
    {db tmp999=13;MYCOPY(dummy7_c364)} // 0948:2ee4
    {db tmp999=84;MYCOPY(dummy7_c365)} // 0948:2ee5
    {db tmp999=79;MYCOPY(dummy7_c366)} // 0948:2ee6
    {db tmp999=32;MYCOPY(dummy7_c367)} // 0948:2ee7
    {db tmp999=70;MYCOPY(dummy7_c368)} // 0948:2ee8
    {db tmp999=73;MYCOPY(dummy7_c369)} // 0948:2ee9
    {db tmp999=78;MYCOPY(dummy7_c36a)} // 0948:2eea
    {db tmp999=68;MYCOPY(dummy7_c36b)} // 0948:2eeb
    {db tmp999=33;MYCOPY(dummy7_c36c)} // 0948:2eec
    {db tmp999=22;MYCOPY(unk_1a94e)} // 0948:2eee
    {db tmp999[32]={5,77,79,82,69,32,70,79,79,68,33,32,32,73,39,77,13,83,84,65,82,86,73,78,71,44,32,76,69,84,39,83};MYCOPY(dummy7_c36f)} // 0948:2eef
    {db tmp999=32;MYCOPY(dummy7_c38f)} // 0948:2f0f
    {db tmp999=70;MYCOPY(dummy7_c390)} // 0948:2f10
    {db tmp999=73;MYCOPY(dummy7_c391)} // 0948:2f11
    {db tmp999=78;MYCOPY(dummy7_c392)} // 0948:2f12
    {db tmp999=68;MYCOPY(dummy7_c393)} // 0948:2f13
    {db tmp999=13;MYCOPY(dummy7_c394)} // 0948:2f14
    {db tmp999=83;MYCOPY(dummy7_c395)} // 0948:2f15
    {db tmp999=79;MYCOPY(dummy7_c396)} // 0948:2f16
    {db tmp999=77;MYCOPY(dummy7_c397)} // 0948:2f17
    {db tmp999=69;MYCOPY(dummy7_c398)} // 0948:2f18
    {db tmp999=84;MYCOPY(dummy7_c399)} // 0948:2f19
    {db tmp999=72;MYCOPY(dummy7_c39a)} // 0948:2f1a
    {db tmp999=73;MYCOPY(dummy7_c39b)} // 0948:2f1b
    {db tmp999=78;MYCOPY(dummy7_c39c)} // 0948:2f1c
    {db tmp999=71;MYCOPY(dummy7_c39d)} // 0948:2f1d
    {db tmp999=32;MYCOPY(dummy7_c39e)} // 0948:2f1e
    {db tmp999=84;MYCOPY(dummy7_c39f)} // 0948:2f1f
    {db tmp999=79;MYCOPY(dummy7_c3a0)} // 0948:2f20
    {db tmp999=32;MYCOPY(dummy7_c3a1)} // 0948:2f21
    {db tmp999=69;MYCOPY(dummy7_c3a2)} // 0948:2f22
    {db tmp999=65;MYCOPY(dummy7_c3a3)} // 0948:2f23
    {db tmp999=84;MYCOPY(dummy7_c3a4)} // 0948:2f24
    {db tmp999=33;MYCOPY(dummy7_c3a5)} // 0948:2f25
    {db tmp999=20;MYCOPY(unk_1a987)} // 0948:2f27
    {db tmp999[32]={5,78,79,84,32,84,72,73,83,32,80,76,65,67,69,13,65,71,65,73,78,63,32,32,70,65,73,76,85,82,69,32};MYCOPY(dummy7_c3a8)} // 0948:2f28
    {db tmp999=73;MYCOPY(dummy7_c3c8)} // 0948:2f48
    {db tmp999=83;MYCOPY(dummy7_c3c9)} // 0948:2f49
    {db tmp999=13;MYCOPY(dummy7_c3ca)} // 0948:2f4a
    {db tmp999=83;MYCOPY(dummy7_c3cb)} // 0948:2f4b
    {db tmp999=79;MYCOPY(dummy7_c3cc)} // 0948:2f4c
    {db tmp999=32;MYCOPY(dummy7_c3cd)} // 0948:2f4d
    {db tmp999=68;MYCOPY(dummy7_c3ce)} // 0948:2f4e
    {db tmp999=73;MYCOPY(dummy7_c3cf)} // 0948:2f4f
    {db tmp999=83;MYCOPY(dummy7_c3d0)} // 0948:2f50
    {db tmp999=67;MYCOPY(dummy7_c3d1)} // 0948:2f51
    {db tmp999=79;MYCOPY(dummy7_c3d2)} // 0948:2f52
    {db tmp999=85;MYCOPY(dummy7_c3d3)} // 0948:2f53
    {db tmp999=82;MYCOPY(dummy7_c3d4)} // 0948:2f54
    {db tmp999=65;MYCOPY(dummy7_c3d5)} // 0948:2f55
    {db tmp999=71;MYCOPY(dummy7_c3d6)} // 0948:2f56
    {db tmp999=73;MYCOPY(dummy7_c3d7)} // 0948:2f57
    {db tmp999=78;MYCOPY(dummy7_c3d8)} // 0948:2f58
    {db tmp999=71;MYCOPY(dummy7_c3d9)} // 0948:2f59
    {db tmp999=33;MYCOPY(dummy7_c3da)} // 0948:2f5a
    {db tmp999=17;MYCOPY(unk_1a9bc)} // 0948:2f5c
    {db tmp999[32]={5,67,72,69,69,82,32,85,80,44,32,69,82,73,75,46,13,77,65,89,66,69,32,84,72,73,83,32,84,73,77,69};MYCOPY(dummy7_c3dd)} // 0948:2f5d
    {db tmp999=13;MYCOPY(dummy7_c3fd)} // 0948:2f7d
    {db tmp999=87;MYCOPY(dummy7_c3fe)} // 0948:2f7e
    {db tmp999=69;MYCOPY(dummy7_c3ff)} // 0948:2f7f
    {db tmp999=32;MYCOPY(dummy7_c400)} // 0948:2f80
    {db tmp999=87;MYCOPY(dummy7_c401)} // 0948:2f81
    {db tmp999=79;MYCOPY(dummy7_c402)} // 0948:2f82
    {db tmp999=78;MYCOPY(dummy7_c403)} // 0948:2f83
    {db tmp999=39;MYCOPY(dummy7_c404)} // 0948:2f84
    {db tmp999=84;MYCOPY(dummy7_c405)} // 0948:2f85
    {db tmp999=32;MYCOPY(dummy7_c406)} // 0948:2f86
    {db tmp999=70;MYCOPY(dummy7_c407)} // 0948:2f87
    {db tmp999=65;MYCOPY(dummy7_c408)} // 0948:2f88
    {db tmp999=73;MYCOPY(dummy7_c409)} // 0948:2f89
    {db tmp999=76;MYCOPY(dummy7_c40a)} // 0948:2f8a
    {db tmp999=46;MYCOPY(dummy7_c40b)} // 0948:2f8b
    {db tmp999=19;MYCOPY(unk_1a9ed)} // 0948:2f8d
    {db tmp999[32]={5,77,65,89,66,69,32,87,69,32,67,65,78,32,74,85,83,84,13,83,69,84,84,76,69,32,70,79,82,32,83,79};MYCOPY(dummy7_c40e)} // 0948:2f8e
    {db tmp999=77;MYCOPY(dummy7_c42e)} // 0948:2fae
    {db tmp999=69;MYCOPY(dummy7_c42f)} // 0948:2faf
    {db tmp999=13;MYCOPY(dummy7_c430)} // 0948:2fb0
    {db tmp999=77;MYCOPY(dummy7_c431)} // 0948:2fb1
    {db tmp999=73;MYCOPY(dummy7_c432)} // 0948:2fb2
    {db tmp999=78;MYCOPY(dummy7_c433)} // 0948:2fb3
    {db tmp999=79;MYCOPY(dummy7_c434)} // 0948:2fb4
    {db tmp999=82;MYCOPY(dummy7_c435)} // 0948:2fb5
    {db tmp999=32;MYCOPY(dummy7_c436)} // 0948:2fb6
    {db tmp999=83;MYCOPY(dummy7_c437)} // 0948:2fb7
    {db tmp999=69;MYCOPY(dummy7_c438)} // 0948:2fb8
    {db tmp999=84;MYCOPY(dummy7_c439)} // 0948:2fb9
    {db tmp999=66;MYCOPY(dummy7_c43a)} // 0948:2fba
    {db tmp999=65;MYCOPY(dummy7_c43b)} // 0948:2fbb
    {db tmp999=67;MYCOPY(dummy7_c43c)} // 0948:2fbc
    {db tmp999=75;MYCOPY(dummy7_c43d)} // 0948:2fbd
    {db tmp999=83;MYCOPY(dummy7_c43e)} // 0948:2fbe
    {db tmp999=46;MYCOPY(dummy7_c43f)} // 0948:2fbf
    {db tmp999=14;MYCOPY(unk_1aa21)} // 0948:2fc1
    {db tmp999=3;MYCOPY(dummy7_c442)} // 0948:2fc2
    {db tmp999=87;MYCOPY(dummy7_c443)} // 0948:2fc3
    {db tmp999=72;MYCOPY(dummy7_c444)} // 0948:2fc4
    {db tmp999=65;MYCOPY(dummy7_c445)} // 0948:2fc5
    {db tmp999=84;MYCOPY(dummy7_c446)} // 0948:2fc6
    {db tmp999=32;MYCOPY(dummy7_c447)} // 0948:2fc7
    {db tmp999=65;MYCOPY(dummy7_c448)} // 0948:2fc8
    {db tmp999=32;MYCOPY(dummy7_c449)} // 0948:2fc9
    {db tmp999=68;MYCOPY(dummy7_c44a)} // 0948:2fca
    {db tmp999=69;MYCOPY(dummy7_c44b)} // 0948:2fcb
    {db tmp999=65;MYCOPY(dummy7_c44c)} // 0948:2fcc
    {db tmp999=76;MYCOPY(dummy7_c44d)} // 0948:2fcd
    {db tmp999=46;MYCOPY(dummy7_c44e)} // 0948:2fce
    {db tmp999=19;MYCOPY(unk_1aa30)} // 0948:2fd0
    {db tmp999[32]={4,72,69,89,33,32,32,72,65,86,69,78,39,84,32,87,69,13,66,69,69,78,32,72,69,82,69,32,66,69,70,79};MYCOPY(dummy7_c451)} // 0948:2fd1
    {db tmp999=82;MYCOPY(dummy7_c471)} // 0948:2ff1
    {db tmp999=69;MYCOPY(dummy7_c472)} // 0948:2ff2
    {db tmp999=63;MYCOPY(dummy7_c473)} // 0948:2ff3
    {db tmp999=25;MYCOPY(unk_1aa55)} // 0948:2ff5
    {db tmp999[32]={6,79,70,32,67,79,85,82,83,69,32,87,69,32,72,65,86,69,33,13,65,78,68,32,87,69,39,68,32,66,69,84};MYCOPY(dummy7_c476)} // 0948:2ff6
    {db tmp999[32]={84,69,82,32,73,77,80,82,79,86,69,13,79,82,32,87,69,39,82,69,32,78,79,84,32,71,79,73,78,71,13,84};MYCOPY(dummy7_c496)} // 0948:3016
    {db tmp999=79;MYCOPY(dummy7_c4b6)} // 0948:3036
    {db tmp999=32;MYCOPY(dummy7_c4b7)} // 0948:3037
    {db tmp999=71;MYCOPY(dummy7_c4b8)} // 0948:3038
    {db tmp999=69;MYCOPY(dummy7_c4b9)} // 0948:3039
    {db tmp999=84;MYCOPY(dummy7_c4ba)} // 0948:303a
    {db tmp999=32;MYCOPY(dummy7_c4bb)} // 0948:303b
    {db tmp999=79;MYCOPY(dummy7_c4bc)} // 0948:303c
    {db tmp999=85;MYCOPY(dummy7_c4bd)} // 0948:303d
    {db tmp999=84;MYCOPY(dummy7_c4be)} // 0948:303e
    {db tmp999=32;MYCOPY(dummy7_c4bf)} // 0948:303f
    {db tmp999=79;MYCOPY(dummy7_c4c0)} // 0948:3040
    {db tmp999=70;MYCOPY(dummy7_c4c1)} // 0948:3041
    {db tmp999=32;MYCOPY(dummy7_c4c2)} // 0948:3042
    {db tmp999=72;MYCOPY(dummy7_c4c3)} // 0948:3043
    {db tmp999=69;MYCOPY(dummy7_c4c4)} // 0948:3044
    {db tmp999=82;MYCOPY(dummy7_c4c5)} // 0948:3045
    {db tmp999=69;MYCOPY(dummy7_c4c6)} // 0948:3046
    {db tmp999=46;MYCOPY(dummy7_c4c7)} // 0948:3047
    {db tmp999=21;MYCOPY(unk_1aaa9)} // 0948:3049
    {db tmp999[32]={7,73,70,32,84,72,69,89,39,68,32,72,65,86,69,32,77,79,82,69,13,77,79,78,83,84,69,82,83,32,70,79};MYCOPY(dummy7_c4ca)} // 0948:304a
    {db tmp999[32]={82,32,77,69,13,84,79,32,67,76,79,66,66,69,82,44,32,84,72,73,78,71,83,13,87,79,85,76,68,32,66,69};MYCOPY(dummy7_c4ea)} // 0948:306a
    {db tmp999=32;MYCOPY(dummy7_c50a)} // 0948:308a
    {db tmp999=71;MYCOPY(dummy7_c50b)} // 0948:308b
    {db tmp999=79;MYCOPY(dummy7_c50c)} // 0948:308c
    {db tmp999=73;MYCOPY(dummy7_c50d)} // 0948:308d
    {db tmp999=78;MYCOPY(dummy7_c50e)} // 0948:308e
    {db tmp999=71;MYCOPY(dummy7_c50f)} // 0948:308f
    {db tmp999=32;MYCOPY(dummy7_c510)} // 0948:3090
    {db tmp999=65;MYCOPY(dummy7_c511)} // 0948:3091
    {db tmp999=13;MYCOPY(dummy7_c512)} // 0948:3092
    {db tmp999=76;MYCOPY(dummy7_c513)} // 0948:3093
    {db tmp999=79;MYCOPY(dummy7_c514)} // 0948:3094
    {db tmp999=84;MYCOPY(dummy7_c515)} // 0948:3095
    {db tmp999=32;MYCOPY(dummy7_c516)} // 0948:3096
    {db tmp999=66;MYCOPY(dummy7_c517)} // 0948:3097
    {db tmp999=69;MYCOPY(dummy7_c518)} // 0948:3098
    {db tmp999=84;MYCOPY(dummy7_c519)} // 0948:3099
    {db tmp999=84;MYCOPY(dummy7_c51a)} // 0948:309a
    {db tmp999=69;MYCOPY(dummy7_c51b)} // 0948:309b
    {db tmp999=82;MYCOPY(dummy7_c51c)} // 0948:309c
    {db tmp999=33;MYCOPY(dummy7_c51d)} // 0948:309d
    {db tmp999=16;MYCOPY(unk_1aaff)} // 0948:309f
    {db tmp999=3;MYCOPY(dummy7_c520)} // 0948:30a0
    {db tmp999=87;MYCOPY(dummy7_c521)} // 0948:30a1
    {db tmp999=72;MYCOPY(dummy7_c522)} // 0948:30a2
    {db tmp999=65;MYCOPY(dummy7_c523)} // 0948:30a3
    {db tmp999=84;MYCOPY(dummy7_c524)} // 0948:30a4
    {db tmp999=32;MYCOPY(dummy7_c525)} // 0948:30a5
    {db tmp999=72;MYCOPY(dummy7_c526)} // 0948:30a6
    {db tmp999=65;MYCOPY(dummy7_c527)} // 0948:30a7
    {db tmp999=80;MYCOPY(dummy7_c528)} // 0948:30a8
    {db tmp999=80;MYCOPY(dummy7_c529)} // 0948:30a9
    {db tmp999=69;MYCOPY(dummy7_c52a)} // 0948:30aa
    {db tmp999=78;MYCOPY(dummy7_c52b)} // 0948:30ab
    {db tmp999=69;MYCOPY(dummy7_c52c)} // 0948:30ac
    {db tmp999=68;MYCOPY(dummy7_c52d)} // 0948:30ad
    {db tmp999=63;MYCOPY(dummy7_c52e)} // 0948:30ae
    {db tmp999=18;MYCOPY(unk_1ab10)} // 0948:30b0
    {db tmp999=3;MYCOPY(dummy7_c531)} // 0948:30b1
    {db tmp999=87;MYCOPY(dummy7_c532)} // 0948:30b2
    {db tmp999=69;MYCOPY(dummy7_c533)} // 0948:30b3
    {db tmp999=32;MYCOPY(dummy7_c534)} // 0948:30b4
    {db tmp999=70;MYCOPY(dummy7_c535)} // 0948:30b5
    {db tmp999=65;MYCOPY(dummy7_c536)} // 0948:30b6
    {db tmp999=73;MYCOPY(dummy7_c537)} // 0948:30b7
    {db tmp999=76;MYCOPY(dummy7_c538)} // 0948:30b8
    {db tmp999=69;MYCOPY(dummy7_c539)} // 0948:30b9
    {db tmp999=68;MYCOPY(dummy7_c53a)} // 0948:30ba
    {db tmp999=32;MYCOPY(dummy7_c53b)} // 0948:30bb
    {db tmp999=65;MYCOPY(dummy7_c53c)} // 0948:30bc
    {db tmp999=71;MYCOPY(dummy7_c53d)} // 0948:30bd
    {db tmp999=65;MYCOPY(dummy7_c53e)} // 0948:30be
    {db tmp999=73;MYCOPY(dummy7_c53f)} // 0948:30bf
    {db tmp999=78;MYCOPY(dummy7_c540)} // 0948:30c0
    {db tmp999=46;MYCOPY(dummy7_c541)} // 0948:30c1
    {db tmp999=16;MYCOPY(unk_1ab23)} // 0948:30c3
    {db tmp999=4;MYCOPY(dummy7_c544)} // 0948:30c4
    {db tmp999=73;MYCOPY(dummy7_c545)} // 0948:30c5
    {db tmp999=32;MYCOPY(dummy7_c546)} // 0948:30c6
    {db tmp999=72;MYCOPY(dummy7_c547)} // 0948:30c7
    {db tmp999=65;MYCOPY(dummy7_c548)} // 0948:30c8
    {db tmp999=84;MYCOPY(dummy7_c549)} // 0948:30c9
    {db tmp999=69;MYCOPY(dummy7_c54a)} // 0948:30ca
    {db tmp999=32;MYCOPY(dummy7_c54b)} // 0948:30cb
    {db tmp999=73;MYCOPY(dummy7_c54c)} // 0948:30cc
    {db tmp999=84;MYCOPY(dummy7_c54d)} // 0948:30cd
    {db tmp999=32;MYCOPY(dummy7_c54e)} // 0948:30ce
    {db tmp999=87;MYCOPY(dummy7_c54f)} // 0948:30cf
    {db tmp999=72;MYCOPY(dummy7_c550)} // 0948:30d0
    {db tmp999=69;MYCOPY(dummy7_c551)} // 0948:30d1
    {db tmp999=78;MYCOPY(dummy7_c552)} // 0948:30d2
    {db tmp999=13;MYCOPY(dummy7_c553)} // 0948:30d3
    {db tmp999=84;MYCOPY(dummy7_c554)} // 0948:30d4
    {db tmp999=72;MYCOPY(dummy7_c555)} // 0948:30d5
    {db tmp999=65;MYCOPY(dummy7_c556)} // 0948:30d6
    {db tmp999=84;MYCOPY(dummy7_c557)} // 0948:30d7
    {db tmp999=32;MYCOPY(dummy7_c558)} // 0948:30d8
    {db tmp999=72;MYCOPY(dummy7_c559)} // 0948:30d9
    {db tmp999=65;MYCOPY(dummy7_c55a)} // 0948:30da
    {db tmp999=80;MYCOPY(dummy7_c55b)} // 0948:30db
    {db tmp999=80;MYCOPY(dummy7_c55c)} // 0948:30dc
    {db tmp999=69;MYCOPY(dummy7_c55d)} // 0948:30dd
    {db tmp999=78;MYCOPY(dummy7_c55e)} // 0948:30de
    {db tmp999=83;MYCOPY(dummy7_c55f)} // 0948:30df
    {db tmp999=46;MYCOPY(dummy7_c560)} // 0948:30e0
    {db tmp999=23;MYCOPY(unk_1ab42)} // 0948:30e2
    {db tmp999[32]={5,73,83,32,73,84,32,77,89,32,73,77,65,71,73,78,65,84,73,79,78,44,13,79,82,32,72,65,86,69,32,87};MYCOPY(dummy7_c563)} // 0948:30e3
    {db tmp999=69;MYCOPY(dummy7_c583)} // 0948:3103
    {db tmp999=32;MYCOPY(dummy7_c584)} // 0948:3104
    {db tmp999=66;MYCOPY(dummy7_c585)} // 0948:3105
    {db tmp999=69;MYCOPY(dummy7_c586)} // 0948:3106
    {db tmp999=69;MYCOPY(dummy7_c587)} // 0948:3107
    {db tmp999=78;MYCOPY(dummy7_c588)} // 0948:3108
    {db tmp999=13;MYCOPY(dummy7_c589)} // 0948:3109
    {db tmp999=72;MYCOPY(dummy7_c58a)} // 0948:310a
    {db tmp999=69;MYCOPY(dummy7_c58b)} // 0948:310b
    {db tmp999=82;MYCOPY(dummy7_c58c)} // 0948:310c
    {db tmp999=69;MYCOPY(dummy7_c58d)} // 0948:310d
    {db tmp999=32;MYCOPY(dummy7_c58e)} // 0948:310e
    {db tmp999=66;MYCOPY(dummy7_c58f)} // 0948:310f
    {db tmp999=69;MYCOPY(dummy7_c590)} // 0948:3110
    {db tmp999=70;MYCOPY(dummy7_c591)} // 0948:3111
    {db tmp999=79;MYCOPY(dummy7_c592)} // 0948:3112
    {db tmp999=82;MYCOPY(dummy7_c593)} // 0948:3113
    {db tmp999=69;MYCOPY(dummy7_c594)} // 0948:3114
    {db tmp999=63;MYCOPY(dummy7_c595)} // 0948:3115
    {db tmp999=25;MYCOPY(unk_1ab77)} // 0948:3117
    {db tmp999[32]={4,73,39,77,32,71,69,84,84,73,78,71,32,82,65,84,72,69,82,13,65,84,84,65,67,72,69,68,32,84,79,32};MYCOPY(dummy7_c598)} // 0948:3118
    {db tmp999=84;MYCOPY(dummy7_c5b8)} // 0948:3138
    {db tmp999=72;MYCOPY(dummy7_c5b9)} // 0948:3139
    {db tmp999=73;MYCOPY(dummy7_c5ba)} // 0948:313a
    {db tmp999=83;MYCOPY(dummy7_c5bb)} // 0948:313b
    {db tmp999=32;MYCOPY(dummy7_c5bc)} // 0948:313c
    {db tmp999=80;MYCOPY(dummy7_c5bd)} // 0948:313d
    {db tmp999=76;MYCOPY(dummy7_c5be)} // 0948:313e
    {db tmp999=65;MYCOPY(dummy7_c5bf)} // 0948:313f
    {db tmp999=67;MYCOPY(dummy7_c5c0)} // 0948:3140
    {db tmp999=69;MYCOPY(dummy7_c5c1)} // 0948:3141
    {db tmp999=46;MYCOPY(dummy7_c5c2)} // 0948:3142
    {db tmp999=18;MYCOPY(unk_1aba4)} // 0948:3144
    {db tmp999=4;MYCOPY(dummy7_c5c5)} // 0948:3145
    {db tmp999=84;MYCOPY(dummy7_c5c6)} // 0948:3146
    {db tmp999=72;MYCOPY(dummy7_c5c7)} // 0948:3147
    {db tmp999=73;MYCOPY(dummy7_c5c8)} // 0948:3148
    {db tmp999=83;MYCOPY(dummy7_c5c9)} // 0948:3149
    {db tmp999=32;MYCOPY(dummy7_c5ca)} // 0948:314a
    {db tmp999=80;MYCOPY(dummy7_c5cb)} // 0948:314b
    {db tmp999=76;MYCOPY(dummy7_c5cc)} // 0948:314c
    {db tmp999=65;MYCOPY(dummy7_c5cd)} // 0948:314d
    {db tmp999=67;MYCOPY(dummy7_c5ce)} // 0948:314e
    {db tmp999=69;MYCOPY(dummy7_c5cf)} // 0948:314f
    {db tmp999=32;MYCOPY(dummy7_c5d0)} // 0948:3150
    {db tmp999=76;MYCOPY(dummy7_c5d1)} // 0948:3151
    {db tmp999=79;MYCOPY(dummy7_c5d2)} // 0948:3152
    {db tmp999=79;MYCOPY(dummy7_c5d3)} // 0948:3153
    {db tmp999=75;MYCOPY(dummy7_c5d4)} // 0948:3154
    {db tmp999=83;MYCOPY(dummy7_c5d5)} // 0948:3155
    {db tmp999=13;MYCOPY(dummy7_c5d6)} // 0948:3156
    {db tmp999=70;MYCOPY(dummy7_c5d7)} // 0948:3157
    {db tmp999=65;MYCOPY(dummy7_c5d8)} // 0948:3158
    {db tmp999=77;MYCOPY(dummy7_c5d9)} // 0948:3159
    {db tmp999=73;MYCOPY(dummy7_c5da)} // 0948:315a
    {db tmp999=76;MYCOPY(dummy7_c5db)} // 0948:315b
    {db tmp999=73;MYCOPY(dummy7_c5dc)} // 0948:315c
    {db tmp999=65;MYCOPY(dummy7_c5dd)} // 0948:315d
    {db tmp999=82;MYCOPY(dummy7_c5de)} // 0948:315e
    {db tmp999=46;MYCOPY(dummy7_c5df)} // 0948:315f
    {db tmp999=16;MYCOPY(unk_1abc1)} // 0948:3161
    {db tmp999[32]={5,89,69,65,72,44,32,73,84,83,32,76,73,75,69,13,87,69,39,86,69,32,65,76,82,69,65,68,89,13,66,69};MYCOPY(dummy7_c5e2)} // 0948:3162
    {db tmp999=69;MYCOPY(dummy7_c602)} // 0948:3182
    {db tmp999=78;MYCOPY(dummy7_c603)} // 0948:3183
    {db tmp999=32;MYCOPY(dummy7_c604)} // 0948:3184
    {db tmp999=72;MYCOPY(dummy7_c605)} // 0948:3185
    {db tmp999=69;MYCOPY(dummy7_c606)} // 0948:3186
    {db tmp999=82;MYCOPY(dummy7_c607)} // 0948:3187
    {db tmp999=69;MYCOPY(dummy7_c608)} // 0948:3188
    {db tmp999=46;MYCOPY(dummy7_c609)} // 0948:3189
    {db tmp999=18;MYCOPY(unk_1abeb)} // 0948:318b
    {db tmp999[32]={5,82,69,80,69,84,73,84,73,79,78,32,67,65,78,13,77,65,75,69,32,89,79,85,82,32,77,69,77,79,82,89};MYCOPY(dummy7_c60c)} // 0948:318c
    {db tmp999=13;MYCOPY(dummy7_c62c)} // 0948:31ac
    {db tmp999=65;MYCOPY(dummy7_c62d)} // 0948:31ad
    {db tmp999=32;MYCOPY(dummy7_c62e)} // 0948:31ae
    {db tmp999=76;MYCOPY(dummy7_c62f)} // 0948:31af
    {db tmp999=73;MYCOPY(dummy7_c630)} // 0948:31b0
    {db tmp999=84;MYCOPY(dummy7_c631)} // 0948:31b1
    {db tmp999=84;MYCOPY(dummy7_c632)} // 0948:31b2
    {db tmp999=76;MYCOPY(dummy7_c633)} // 0948:31b3
    {db tmp999=69;MYCOPY(dummy7_c634)} // 0948:31b4
    {db tmp999=32;MYCOPY(dummy7_c635)} // 0948:31b5
    {db tmp999=70;MYCOPY(dummy7_c636)} // 0948:31b6
    {db tmp999=85;MYCOPY(dummy7_c637)} // 0948:31b7
    {db tmp999=90;MYCOPY(dummy7_c638)} // 0948:31b8
    {db tmp999=90;MYCOPY(dummy7_c639)} // 0948:31b9
    {db tmp999=89;MYCOPY(dummy7_c63a)} // 0948:31ba
    {db tmp999=46;MYCOPY(dummy7_c63b)} // 0948:31bb
    {db tmp999=21;MYCOPY(unk_1ac1d)} // 0948:31bd
    {db tmp999[32]={5,87,69,39,86,69,32,67,79,77,69,32,66,65,67,75,13,72,69,82,69,32,83,79,32,77,65,78,89,32,84,73};MYCOPY(dummy7_c63e)} // 0948:31be
    {db tmp999=77;MYCOPY(dummy7_c65e)} // 0948:31de
    {db tmp999=69;MYCOPY(dummy7_c65f)} // 0948:31df
    {db tmp999=83;MYCOPY(dummy7_c660)} // 0948:31e0
    {db tmp999=33;MYCOPY(dummy7_c661)} // 0948:31e1
    {db tmp999=13;MYCOPY(dummy7_c662)} // 0948:31e2
    {db tmp999=84;MYCOPY(dummy7_c663)} // 0948:31e3
    {db tmp999=72;MYCOPY(dummy7_c664)} // 0948:31e4
    {db tmp999=73;MYCOPY(dummy7_c665)} // 0948:31e5
    {db tmp999=83;MYCOPY(dummy7_c666)} // 0948:31e6
    {db tmp999=32;MYCOPY(dummy7_c667)} // 0948:31e7
    {db tmp999=73;MYCOPY(dummy7_c668)} // 0948:31e8
    {db tmp999=83;MYCOPY(dummy7_c669)} // 0948:31e9
    {db tmp999=32;MYCOPY(dummy7_c66a)} // 0948:31ea
    {db tmp999=65;MYCOPY(dummy7_c66b)} // 0948:31eb
    {db tmp999=32;MYCOPY(dummy7_c66c)} // 0948:31ec
    {db tmp999=68;MYCOPY(dummy7_c66d)} // 0948:31ed
    {db tmp999=73;MYCOPY(dummy7_c66e)} // 0948:31ee
    {db tmp999=83;MYCOPY(dummy7_c66f)} // 0948:31ef
    {db tmp999=71;MYCOPY(dummy7_c670)} // 0948:31f0
    {db tmp999=82;MYCOPY(dummy7_c671)} // 0948:31f1
    {db tmp999=65;MYCOPY(dummy7_c672)} // 0948:31f2
    {db tmp999=67;MYCOPY(dummy7_c673)} // 0948:31f3
    {db tmp999=69;MYCOPY(dummy7_c674)} // 0948:31f4
    {db tmp999=46;MYCOPY(dummy7_c675)} // 0948:31f5
    {db tmp999=21;MYCOPY(unk_1ac57)} // 0948:31f7
    {db tmp999[32]={5,66,85,84,32,87,69,39,86,69,32,67,76,79,66,66,69,82,69,68,13,76,79,84,83,32,79,70,32,77,79,78};MYCOPY(dummy7_c678)} // 0948:31f8
    {db tmp999=83;MYCOPY(dummy7_c698)} // 0948:3218
    {db tmp999=84;MYCOPY(dummy7_c699)} // 0948:3219
    {db tmp999=69;MYCOPY(dummy7_c69a)} // 0948:321a
    {db tmp999=82;MYCOPY(dummy7_c69b)} // 0948:321b
    {db tmp999=83;MYCOPY(dummy7_c69c)} // 0948:321c
    {db tmp999=44;MYCOPY(dummy7_c69d)} // 0948:321d
    {db tmp999=13;MYCOPY(dummy7_c69e)} // 0948:321e
    {db tmp999=72;MYCOPY(dummy7_c69f)} // 0948:321f
    {db tmp999=65;MYCOPY(dummy7_c6a0)} // 0948:3220
    {db tmp999=86;MYCOPY(dummy7_c6a1)} // 0948:3221
    {db tmp999=69;MYCOPY(dummy7_c6a2)} // 0948:3222
    {db tmp999=78;MYCOPY(dummy7_c6a3)} // 0948:3223
    {db tmp999=39;MYCOPY(dummy7_c6a4)} // 0948:3224
    {db tmp999=84;MYCOPY(dummy7_c6a5)} // 0948:3225
    {db tmp999=32;MYCOPY(dummy7_c6a6)} // 0948:3226
    {db tmp999=87;MYCOPY(dummy7_c6a7)} // 0948:3227
    {db tmp999=69;MYCOPY(dummy7_c6a8)} // 0948:3228
    {db tmp999=63;MYCOPY(dummy7_c6a9)} // 0948:3229
    {db tmp999=24;MYCOPY(unk_1ac8b)} // 0948:322b
    {db tmp999[32]={4,71,73,86,69,32,85,83,32,65,32,66,82,69,65,75,44,32,69,82,73,75,46,13,84,72,73,83,32,73,83,32};MYCOPY(dummy7_c6ac)} // 0948:322c
    {db tmp999=65;MYCOPY(dummy7_c6cc)} // 0948:324c
    {db tmp999=32;MYCOPY(dummy7_c6cd)} // 0948:324d
    {db tmp999=84;MYCOPY(dummy7_c6ce)} // 0948:324e
    {db tmp999=79;MYCOPY(dummy7_c6cf)} // 0948:324f
    {db tmp999=85;MYCOPY(dummy7_c6d0)} // 0948:3250
    {db tmp999=71;MYCOPY(dummy7_c6d1)} // 0948:3251
    {db tmp999=72;MYCOPY(dummy7_c6d2)} // 0948:3252
    {db tmp999=32;MYCOPY(dummy7_c6d3)} // 0948:3253
    {db tmp999=76;MYCOPY(dummy7_c6d4)} // 0948:3254
    {db tmp999=69;MYCOPY(dummy7_c6d5)} // 0948:3255
    {db tmp999=86;MYCOPY(dummy7_c6d6)} // 0948:3256
    {db tmp999=69;MYCOPY(dummy7_c6d7)} // 0948:3257
    {db tmp999=76;MYCOPY(dummy7_c6d8)} // 0948:3258
    {db tmp999=33;MYCOPY(dummy7_c6d9)} // 0948:3259
    {db tmp999=18;MYCOPY(unk_1acbb)} // 0948:325b
    {db tmp999[32]={5,73,32,72,65,86,69,32,65,32,83,84,82,65,78,71,69,13,70,69,69,76,73,78,71,32,79,70,13,68,69,74};MYCOPY(dummy7_c6dc)} // 0948:325c
    {db tmp999=65;MYCOPY(dummy7_c6fc)} // 0948:327c
    {db tmp999=32;MYCOPY(dummy7_c6fd)} // 0948:327d
    {db tmp999=86;MYCOPY(dummy7_c6fe)} // 0948:327e
    {db tmp999=85;MYCOPY(dummy7_c6ff)} // 0948:327f
    {db tmp999=46;MYCOPY(dummy7_c700)} // 0948:3280
    {db tmp999=10;MYCOPY(unk_1ace2)} // 0948:3282
    {db tmp999=3;MYCOPY(dummy7_c703)} // 0948:3283
    {db tmp999=68;MYCOPY(dummy7_c704)} // 0948:3284
    {db tmp999=69;MYCOPY(dummy7_c705)} // 0948:3285
    {db tmp999=74;MYCOPY(dummy7_c706)} // 0948:3286
    {db tmp999=65;MYCOPY(dummy7_c707)} // 0948:3287
    {db tmp999=32;MYCOPY(dummy7_c708)} // 0948:3288
    {db tmp999=86;MYCOPY(dummy7_c709)} // 0948:3289
    {db tmp999=85;MYCOPY(dummy7_c70a)} // 0948:328a
    {db tmp999=63;MYCOPY(dummy7_c70b)} // 0948:328b
    {db tmp999=18;MYCOPY(unk_1aced)} // 0948:328d
    {db tmp999[32]={5,84,72,65,84,32,73,39,86,69,32,66,69,69,78,13,72,69,82,69,32,66,69,70,79,82,69,32,73,78,13,65};MYCOPY(dummy7_c70e)} // 0948:328e
    {db tmp999=32;MYCOPY(dummy7_c72e)} // 0948:32ae
    {db tmp999=80;MYCOPY(dummy7_c72f)} // 0948:32af
    {db tmp999=82;MYCOPY(dummy7_c730)} // 0948:32b0
    {db tmp999=69;MYCOPY(dummy7_c731)} // 0948:32b1
    {db tmp999=86;MYCOPY(dummy7_c732)} // 0948:32b2
    {db tmp999=73;MYCOPY(dummy7_c733)} // 0948:32b3
    {db tmp999=79;MYCOPY(dummy7_c734)} // 0948:32b4
    {db tmp999=85;MYCOPY(dummy7_c735)} // 0948:32b5
    {db tmp999=83;MYCOPY(dummy7_c736)} // 0948:32b6
    {db tmp999=32;MYCOPY(dummy7_c737)} // 0948:32b7
    {db tmp999=76;MYCOPY(dummy7_c738)} // 0948:32b8
    {db tmp999=73;MYCOPY(dummy7_c739)} // 0948:32b9
    {db tmp999=70;MYCOPY(dummy7_c73a)} // 0948:32ba
    {db tmp999=69;MYCOPY(dummy7_c73b)} // 0948:32bb
    {db tmp999=46;MYCOPY(dummy7_c73c)} // 0948:32bc
    {db tmp999=17;MYCOPY(unk_1ad1e)} // 0948:32be
    {db tmp999[32]={5,65,67,84,85,65,76,76,89,44,32,87,69,39,86,69,13,66,69,69,78,32,72,69,82,69,32,76,79,84,83,13};MYCOPY(dummy7_c73f)} // 0948:32bf
    {db tmp999=79;MYCOPY(dummy7_c75f)} // 0948:32df
    {db tmp999=70;MYCOPY(dummy7_c760)} // 0948:32e0
    {db tmp999=32;MYCOPY(dummy7_c761)} // 0948:32e1
    {db tmp999=84;MYCOPY(dummy7_c762)} // 0948:32e2
    {db tmp999=73;MYCOPY(dummy7_c763)} // 0948:32e3
    {db tmp999=77;MYCOPY(dummy7_c764)} // 0948:32e4
    {db tmp999=69;MYCOPY(dummy7_c765)} // 0948:32e5
    {db tmp999=83;MYCOPY(dummy7_c766)} // 0948:32e6
    {db tmp999=46;MYCOPY(dummy7_c767)} // 0948:32e7
    {db tmp999=13;MYCOPY(unk_1ad49)} // 0948:32e9
    {db tmp999=4;MYCOPY(dummy7_c76a)} // 0948:32ea
    {db tmp999=84;MYCOPY(dummy7_c76b)} // 0948:32eb
    {db tmp999=72;MYCOPY(dummy7_c76c)} // 0948:32ec
    {db tmp999=65;MYCOPY(dummy7_c76d)} // 0948:32ed
    {db tmp999=84;MYCOPY(dummy7_c76e)} // 0948:32ee
    {db tmp999=32;MYCOPY(dummy7_c76f)} // 0948:32ef
    {db tmp999=87;MYCOPY(dummy7_c770)} // 0948:32f0
    {db tmp999=79;MYCOPY(dummy7_c771)} // 0948:32f1
    {db tmp999=85;MYCOPY(dummy7_c772)} // 0948:32f2
    {db tmp999=76;MYCOPY(dummy7_c773)} // 0948:32f3
    {db tmp999=68;MYCOPY(dummy7_c774)} // 0948:32f4
    {db tmp999=13;MYCOPY(dummy7_c775)} // 0948:32f5
    {db tmp999=69;MYCOPY(dummy7_c776)} // 0948:32f6
    {db tmp999=88;MYCOPY(dummy7_c777)} // 0948:32f7
    {db tmp999=80;MYCOPY(dummy7_c778)} // 0948:32f8
    {db tmp999=76;MYCOPY(dummy7_c779)} // 0948:32f9
    {db tmp999=65;MYCOPY(dummy7_c77a)} // 0948:32fa
    {db tmp999=73;MYCOPY(dummy7_c77b)} // 0948:32fb
    {db tmp999=78;MYCOPY(dummy7_c77c)} // 0948:32fc
    {db tmp999=32;MYCOPY(dummy7_c77d)} // 0948:32fd
    {db tmp999=73;MYCOPY(dummy7_c77e)} // 0948:32fe
    {db tmp999=84;MYCOPY(dummy7_c77f)} // 0948:32ff
    {db tmp999=46;MYCOPY(dummy7_c780)} // 0948:3300
    {db tmp999=18;MYCOPY(unk_1ad62)} // 0948:3302
    {db tmp999[32]={6,78,79,44,32,78,79,84,32,65,71,65,73,78,33,13,68,79,32,89,79,85,32,82,69,65,76,73,90,69,13,72};MYCOPY(dummy7_c783)} // 0948:3303
    {db tmp999=79;MYCOPY(dummy7_c7a3)} // 0948:3323
    {db tmp999=87;MYCOPY(dummy7_c7a4)} // 0948:3324
    {db tmp999=32;MYCOPY(dummy7_c7a5)} // 0948:3325
    {db tmp999=76;MYCOPY(dummy7_c7a6)} // 0948:3326
    {db tmp999=79;MYCOPY(dummy7_c7a7)} // 0948:3327
    {db tmp999=78;MYCOPY(dummy7_c7a8)} // 0948:3328
    {db tmp999=71;MYCOPY(dummy7_c7a9)} // 0948:3329
    {db tmp999=32;MYCOPY(dummy7_c7aa)} // 0948:332a
    {db tmp999=87;MYCOPY(dummy7_c7ab)} // 0948:332b
    {db tmp999=69;MYCOPY(dummy7_c7ac)} // 0948:332c
    {db tmp999=39;MYCOPY(dummy7_c7ad)} // 0948:332d
    {db tmp999=86;MYCOPY(dummy7_c7ae)} // 0948:332e
    {db tmp999=69;MYCOPY(dummy7_c7af)} // 0948:332f
    {db tmp999=13;MYCOPY(dummy7_c7b0)} // 0948:3330
    {db tmp999=66;MYCOPY(dummy7_c7b1)} // 0948:3331
    {db tmp999=69;MYCOPY(dummy7_c7b2)} // 0948:3332
    {db tmp999=69;MYCOPY(dummy7_c7b3)} // 0948:3333
    {db tmp999=78;MYCOPY(dummy7_c7b4)} // 0948:3334
    {db tmp999=32;MYCOPY(dummy7_c7b5)} // 0948:3335
    {db tmp999=83;MYCOPY(dummy7_c7b6)} // 0948:3336
    {db tmp999=84;MYCOPY(dummy7_c7b7)} // 0948:3337
    {db tmp999=85;MYCOPY(dummy7_c7b8)} // 0948:3338
    {db tmp999=67;MYCOPY(dummy7_c7b9)} // 0948:3339
    {db tmp999=75;MYCOPY(dummy7_c7ba)} // 0948:333a
    {db tmp999=32;MYCOPY(dummy7_c7bb)} // 0948:333b
    {db tmp999=72;MYCOPY(dummy7_c7bc)} // 0948:333c
    {db tmp999=69;MYCOPY(dummy7_c7bd)} // 0948:333d
    {db tmp999=82;MYCOPY(dummy7_c7be)} // 0948:333e
    {db tmp999=69;MYCOPY(dummy7_c7bf)} // 0948:333f
    {db tmp999=63;MYCOPY(dummy7_c7c0)} // 0948:3340
    {db tmp999=18;MYCOPY(unk_1ada2)} // 0948:3342
    {db tmp999[32]={4,77,65,89,66,69,32,87,69,32,83,72,79,85,76,68,13,66,85,89,32,65,32,72,79,77,69,32,72,69,82,69};MYCOPY(dummy7_c7c3)} // 0948:3343
    {db tmp999=46;MYCOPY(dummy7_c7e3)} // 0948:3363
    {db tmp999=20;MYCOPY(unk_1adc5)} // 0948:3365
    {db tmp999[32]={5,84,72,73,83,32,68,79,69,83,78,39,84,32,76,79,79,75,13,76,73,75,69,32,65,32,80,76,65,67,69,32};MYCOPY(dummy7_c7e6)} // 0948:3366
    {db tmp999=87;MYCOPY(dummy7_c806)} // 0948:3386
    {db tmp999=72;MYCOPY(dummy7_c807)} // 0948:3387
    {db tmp999=69;MYCOPY(dummy7_c808)} // 0948:3388
    {db tmp999=82;MYCOPY(dummy7_c809)} // 0948:3389
    {db tmp999=69;MYCOPY(dummy7_c80a)} // 0948:338a
    {db tmp999=13;MYCOPY(dummy7_c80b)} // 0948:338b
    {db tmp999=73;MYCOPY(dummy7_c80c)} // 0948:338c
    {db tmp999=39;MYCOPY(dummy7_c80d)} // 0948:338d
    {db tmp999=68;MYCOPY(dummy7_c80e)} // 0948:338e
    {db tmp999=32;MYCOPY(dummy7_c80f)} // 0948:338f
    {db tmp999=87;MYCOPY(dummy7_c810)} // 0948:3390
    {db tmp999=65;MYCOPY(dummy7_c811)} // 0948:3391
    {db tmp999=78;MYCOPY(dummy7_c812)} // 0948:3392
    {db tmp999=84;MYCOPY(dummy7_c813)} // 0948:3393
    {db tmp999=32;MYCOPY(dummy7_c814)} // 0948:3394
    {db tmp999=84;MYCOPY(dummy7_c815)} // 0948:3395
    {db tmp999=79;MYCOPY(dummy7_c816)} // 0948:3396
    {db tmp999=32;MYCOPY(dummy7_c817)} // 0948:3397
    {db tmp999=76;MYCOPY(dummy7_c818)} // 0948:3398
    {db tmp999=73;MYCOPY(dummy7_c819)} // 0948:3399
    {db tmp999=86;MYCOPY(dummy7_c81a)} // 0948:339a
    {db tmp999=69;MYCOPY(dummy7_c81b)} // 0948:339b
    {db tmp999=33;MYCOPY(dummy7_c81c)} // 0948:339c
    {db tmp999=15;MYCOPY(unk_1adfe)} // 0948:339e
    {db tmp999=4;MYCOPY(dummy7_c81f)} // 0948:339f
    {db tmp999=73;MYCOPY(dummy7_c820)} // 0948:33a0
    {db tmp999=84;MYCOPY(dummy7_c821)} // 0948:33a1
    {db tmp999=32;MYCOPY(dummy7_c822)} // 0948:33a2
    {db tmp999=87;MYCOPY(dummy7_c823)} // 0948:33a3
    {db tmp999=65;MYCOPY(dummy7_c824)} // 0948:33a4
    {db tmp999=83;MYCOPY(dummy7_c825)} // 0948:33a5
    {db tmp999=32;MYCOPY(dummy7_c826)} // 0948:33a6
    {db tmp999=79;MYCOPY(dummy7_c827)} // 0948:33a7
    {db tmp999=78;MYCOPY(dummy7_c828)} // 0948:33a8
    {db tmp999=76;MYCOPY(dummy7_c829)} // 0948:33a9
    {db tmp999=89;MYCOPY(dummy7_c82a)} // 0948:33aa
    {db tmp999=32;MYCOPY(dummy7_c82b)} // 0948:33ab
    {db tmp999=65;MYCOPY(dummy7_c82c)} // 0948:33ac
    {db tmp999=13;MYCOPY(dummy7_c82d)} // 0948:33ad
    {db tmp999=83;MYCOPY(dummy7_c82e)} // 0948:33ae
    {db tmp999=85;MYCOPY(dummy7_c82f)} // 0948:33af
    {db tmp999=71;MYCOPY(dummy7_c830)} // 0948:33b0
    {db tmp999=71;MYCOPY(dummy7_c831)} // 0948:33b1
    {db tmp999=69;MYCOPY(dummy7_c832)} // 0948:33b2
    {db tmp999=83;MYCOPY(dummy7_c833)} // 0948:33b3
    {db tmp999=84;MYCOPY(dummy7_c834)} // 0948:33b4
    {db tmp999=73;MYCOPY(dummy7_c835)} // 0948:33b5
    {db tmp999=79;MYCOPY(dummy7_c836)} // 0948:33b6
    {db tmp999=78;MYCOPY(dummy7_c837)} // 0948:33b7
    {db tmp999=46;MYCOPY(dummy7_c838)} // 0948:33b8
    {db tmp999=25;MYCOPY(unk_1ae1a)} // 0948:33ba
    {db tmp999[32]={6,73,39,77,32,84,73,82,69,68,44,32,69,82,73,75,46,32,87,69,39,86,69,13,66,69,69,78,32,84,72,82};MYCOPY(dummy7_c83b)} // 0948:33bb
    {db tmp999[32]={79,85,71,72,32,84,72,73,83,32,76,69,86,69,76,13,84,79,79,32,77,65,78,89,32,84,73,77,69,83,33,32};MYCOPY(dummy7_c85b)} // 0948:33db
    {db tmp999=32;MYCOPY(dummy7_c87b)} // 0948:33fb
    {db tmp999=87;MYCOPY(dummy7_c87c)} // 0948:33fc
    {db tmp999=65;MYCOPY(dummy7_c87d)} // 0948:33fd
    {db tmp999=75;MYCOPY(dummy7_c87e)} // 0948:33fe
    {db tmp999=69;MYCOPY(dummy7_c87f)} // 0948:33ff
    {db tmp999=13;MYCOPY(dummy7_c880)} // 0948:3400
    {db tmp999=77;MYCOPY(dummy7_c881)} // 0948:3401
    {db tmp999=69;MYCOPY(dummy7_c882)} // 0948:3402
    {db tmp999=32;MYCOPY(dummy7_c883)} // 0948:3403
    {db tmp999=87;MYCOPY(dummy7_c884)} // 0948:3404
    {db tmp999=72;MYCOPY(dummy7_c885)} // 0948:3405
    {db tmp999=69;MYCOPY(dummy7_c886)} // 0948:3406
    {db tmp999=78;MYCOPY(dummy7_c887)} // 0948:3407
    {db tmp999=32;MYCOPY(dummy7_c888)} // 0948:3408
    {db tmp999=87;MYCOPY(dummy7_c889)} // 0948:3409
    {db tmp999=69;MYCOPY(dummy7_c88a)} // 0948:340a
    {db tmp999=32;MYCOPY(dummy7_c88b)} // 0948:340b
    {db tmp999=70;MYCOPY(dummy7_c88c)} // 0948:340c
    {db tmp999=73;MYCOPY(dummy7_c88d)} // 0948:340d
    {db tmp999=78;MYCOPY(dummy7_c88e)} // 0948:340e
    {db tmp999=73;MYCOPY(dummy7_c88f)} // 0948:340f
    {db tmp999=83;MYCOPY(dummy7_c890)} // 0948:3410
    {db tmp999=72;MYCOPY(dummy7_c891)} // 0948:3411
    {db tmp999=32;MYCOPY(dummy7_c892)} // 0948:3412
    {db tmp999=73;MYCOPY(dummy7_c893)} // 0948:3413
    {db tmp999=84;MYCOPY(dummy7_c894)} // 0948:3414
    {db tmp999=46;MYCOPY(dummy7_c895)} // 0948:3415
    {db tmp999=19;MYCOPY(unk_1ae77)} // 0948:3417
    {db tmp999[32]={6,71,79,79,68,32,78,73,71,72,84,44,32,79,76,65,70,46,13,72,65,86,69,32,78,73,67,69,32,68,82,69};MYCOPY(dummy7_c898)} // 0948:3418
    {db tmp999=65;MYCOPY(dummy7_c8b8)} // 0948:3438
    {db tmp999=77;MYCOPY(dummy7_c8b9)} // 0948:3439
    {db tmp999=83;MYCOPY(dummy7_c8ba)} // 0948:343a
    {db tmp999=13;MYCOPY(dummy7_c8bb)} // 0948:343b
    {db tmp999=79;MYCOPY(dummy7_c8bc)} // 0948:343c
    {db tmp999=70;MYCOPY(dummy7_c8bd)} // 0948:343d
    {db tmp999=32;MYCOPY(dummy7_c8be)} // 0948:343e
    {db tmp999=71;MYCOPY(dummy7_c8bf)} // 0948:343f
    {db tmp999=76;MYCOPY(dummy7_c8c0)} // 0948:3440
    {db tmp999=73;MYCOPY(dummy7_c8c1)} // 0948:3441
    {db tmp999=68;MYCOPY(dummy7_c8c2)} // 0948:3442
    {db tmp999=73;MYCOPY(dummy7_c8c3)} // 0948:3443
    {db tmp999=78;MYCOPY(dummy7_c8c4)} // 0948:3444
    {db tmp999=71;MYCOPY(dummy7_c8c5)} // 0948:3445
    {db tmp999=32;MYCOPY(dummy7_c8c6)} // 0948:3446
    {db tmp999=79;MYCOPY(dummy7_c8c7)} // 0948:3447
    {db tmp999=86;MYCOPY(dummy7_c8c8)} // 0948:3448
    {db tmp999=69;MYCOPY(dummy7_c8c9)} // 0948:3449
    {db tmp999=82;MYCOPY(dummy7_c8ca)} // 0948:344a
    {db tmp999=13;MYCOPY(dummy7_c8cb)} // 0948:344b
    {db tmp999=77;MYCOPY(dummy7_c8cc)} // 0948:344c
    {db tmp999=79;MYCOPY(dummy7_c8cd)} // 0948:344d
    {db tmp999=78;MYCOPY(dummy7_c8ce)} // 0948:344e
    {db tmp999=83;MYCOPY(dummy7_c8cf)} // 0948:344f
    {db tmp999=84;MYCOPY(dummy7_c8d0)} // 0948:3450
    {db tmp999=69;MYCOPY(dummy7_c8d1)} // 0948:3451
    {db tmp999=82;MYCOPY(dummy7_c8d2)} // 0948:3452
    {db tmp999=83;MYCOPY(dummy7_c8d3)} // 0948:3453
    {db tmp999=46;MYCOPY(dummy7_c8d4)} // 0948:3454
    {db tmp999=21;MYCOPY(unk_1aeb6)} // 0948:3456
    {db tmp999=3;MYCOPY(dummy7_c8d7)} // 0948:3457
    {db tmp999=71;MYCOPY(dummy7_c8d8)} // 0948:3458
    {db tmp999=79;MYCOPY(dummy7_c8d9)} // 0948:3459
    {db tmp999=79;MYCOPY(dummy7_c8da)} // 0948:345a
    {db tmp999=68;MYCOPY(dummy7_c8db)} // 0948:345b
    {db tmp999=32;MYCOPY(dummy7_c8dc)} // 0948:345c
    {db tmp999=78;MYCOPY(dummy7_c8dd)} // 0948:345d
    {db tmp999=73;MYCOPY(dummy7_c8de)} // 0948:345e
    {db tmp999=71;MYCOPY(dummy7_c8df)} // 0948:345f
    {db tmp999=72;MYCOPY(dummy7_c8e0)} // 0948:3460
    {db tmp999=84;MYCOPY(dummy7_c8e1)} // 0948:3461
    {db tmp999=44;MYCOPY(dummy7_c8e2)} // 0948:3462
    {db tmp999=32;MYCOPY(dummy7_c8e3)} // 0948:3463
    {db tmp999=79;MYCOPY(dummy7_c8e4)} // 0948:3464
    {db tmp999=76;MYCOPY(dummy7_c8e5)} // 0948:3465
    {db tmp999=65;MYCOPY(dummy7_c8e6)} // 0948:3466
    {db tmp999=70;MYCOPY(dummy7_c8e7)} // 0948:3467
    {db tmp999=46;MYCOPY(dummy7_c8e8)} // 0948:3468
    {db tmp999=46;MYCOPY(dummy7_c8e9)} // 0948:3469
    {db tmp999=46;MYCOPY(dummy7_c8ea)} // 0948:346a
    {db tmp999=19;MYCOPY(unk_1aecc)} // 0948:346c
    {db tmp999[32]={5,87,65,73,84,32,65,32,77,73,78,85,84,69,44,13,87,69,32,78,69,69,68,32,89,79,85,32,84,79,13,70};MYCOPY(dummy7_c8ed)} // 0948:346d
    {db tmp999=73;MYCOPY(dummy7_c90d)} // 0948:348d
    {db tmp999=78;MYCOPY(dummy7_c90e)} // 0948:348e
    {db tmp999=73;MYCOPY(dummy7_c90f)} // 0948:348f
    {db tmp999=83;MYCOPY(dummy7_c910)} // 0948:3490
    {db tmp999=72;MYCOPY(dummy7_c911)} // 0948:3491
    {db tmp999=32;MYCOPY(dummy7_c912)} // 0948:3492
    {db tmp999=84;MYCOPY(dummy7_c913)} // 0948:3493
    {db tmp999=72;MYCOPY(dummy7_c914)} // 0948:3494
    {db tmp999=69;MYCOPY(dummy7_c915)} // 0948:3495
    {db tmp999=32;MYCOPY(dummy7_c916)} // 0948:3496
    {db tmp999=76;MYCOPY(dummy7_c917)} // 0948:3497
    {db tmp999=69;MYCOPY(dummy7_c918)} // 0948:3498
    {db tmp999=86;MYCOPY(dummy7_c919)} // 0948:3499
    {db tmp999=69;MYCOPY(dummy7_c91a)} // 0948:349a
    {db tmp999=76;MYCOPY(dummy7_c91b)} // 0948:349b
    {db tmp999=33;MYCOPY(dummy7_c91c)} // 0948:349c
    {db tmp999=12;MYCOPY(unk_1aefe)} // 0948:349e
    {db tmp999=3;MYCOPY(dummy7_c91f)} // 0948:349f
    {db tmp999=79;MYCOPY(dummy7_c920)} // 0948:34a0
    {db tmp999=72;MYCOPY(dummy7_c921)} // 0948:34a1
    {db tmp999=44;MYCOPY(dummy7_c922)} // 0948:34a2
    {db tmp999=32;MYCOPY(dummy7_c923)} // 0948:34a3
    {db tmp999=83;MYCOPY(dummy7_c924)} // 0948:34a4
    {db tmp999=79;MYCOPY(dummy7_c925)} // 0948:34a5
    {db tmp999=82;MYCOPY(dummy7_c926)} // 0948:34a6
    {db tmp999=82;MYCOPY(dummy7_c927)} // 0948:34a7
    {db tmp999=89;MYCOPY(dummy7_c928)} // 0948:34a8
    {db tmp999=46;MYCOPY(dummy7_c929)} // 0948:34a9
    {db tmp999=14;MYCOPY(unk_1af0b)} // 0948:34ab
    {db tmp999=4;MYCOPY(dummy7_c92c)} // 0948:34ac
    {db tmp999=87;MYCOPY(dummy7_c92d)} // 0948:34ad
    {db tmp999=69;MYCOPY(dummy7_c92e)} // 0948:34ae
    {db tmp999=39;MYCOPY(dummy7_c92f)} // 0948:34af
    {db tmp999=86;MYCOPY(dummy7_c930)} // 0948:34b0
    {db tmp999=69;MYCOPY(dummy7_c931)} // 0948:34b1
    {db tmp999=32;MYCOPY(dummy7_c932)} // 0948:34b2
    {db tmp999=66;MYCOPY(dummy7_c933)} // 0948:34b3
    {db tmp999=69;MYCOPY(dummy7_c934)} // 0948:34b4
    {db tmp999=69;MYCOPY(dummy7_c935)} // 0948:34b5
    {db tmp999=78;MYCOPY(dummy7_c936)} // 0948:34b6
    {db tmp999=13;MYCOPY(dummy7_c937)} // 0948:34b7
    {db tmp999=72;MYCOPY(dummy7_c938)} // 0948:34b8
    {db tmp999=69;MYCOPY(dummy7_c939)} // 0948:34b9
    {db tmp999=82;MYCOPY(dummy7_c93a)} // 0948:34ba
    {db tmp999=69;MYCOPY(dummy7_c93b)} // 0948:34bb
    {db tmp999=32;MYCOPY(dummy7_c93c)} // 0948:34bc
    {db tmp999=66;MYCOPY(dummy7_c93d)} // 0948:34bd
    {db tmp999=69;MYCOPY(dummy7_c93e)} // 0948:34be
    {db tmp999=70;MYCOPY(dummy7_c93f)} // 0948:34bf
    {db tmp999=79;MYCOPY(dummy7_c940)} // 0948:34c0
    {db tmp999=82;MYCOPY(dummy7_c941)} // 0948:34c1
    {db tmp999=69;MYCOPY(dummy7_c942)} // 0948:34c2
    {db tmp999=46;MYCOPY(dummy7_c943)} // 0948:34c3
    {db tmp999=15;MYCOPY(unk_1af25)} // 0948:34c5
    {db tmp999[32]={6,89,69,83,44,32,87,69,32,72,65,86,69,46,13,87,73,76,76,32,89,79,85,32,84,87,79,13,80,76,69,65};MYCOPY(dummy7_c946)} // 0948:34c6
    {db tmp999=83;MYCOPY(dummy7_c966)} // 0948:34e6
    {db tmp999=69;MYCOPY(dummy7_c967)} // 0948:34e7
    {db tmp999=32;MYCOPY(dummy7_c968)} // 0948:34e8
    {db tmp999=66;MYCOPY(dummy7_c969)} // 0948:34e9
    {db tmp999=69;MYCOPY(dummy7_c96a)} // 0948:34ea
    {db tmp999=13;MYCOPY(dummy7_c96b)} // 0948:34eb
    {db tmp999=77;MYCOPY(dummy7_c96c)} // 0948:34ec
    {db tmp999=79;MYCOPY(dummy7_c96d)} // 0948:34ed
    {db tmp999=82;MYCOPY(dummy7_c96e)} // 0948:34ee
    {db tmp999=69;MYCOPY(dummy7_c96f)} // 0948:34ef
    {db tmp999=32;MYCOPY(dummy7_c970)} // 0948:34f0
    {db tmp999=67;MYCOPY(dummy7_c971)} // 0948:34f1
    {db tmp999=65;MYCOPY(dummy7_c972)} // 0948:34f2
    {db tmp999=82;MYCOPY(dummy7_c973)} // 0948:34f3
    {db tmp999=69;MYCOPY(dummy7_c974)} // 0948:34f4
    {db tmp999=70;MYCOPY(dummy7_c975)} // 0948:34f5
    {db tmp999=85;MYCOPY(dummy7_c976)} // 0948:34f6
    {db tmp999=76;MYCOPY(dummy7_c977)} // 0948:34f7
    {db tmp999=63;MYCOPY(dummy7_c978)} // 0948:34f8
    {db tmp999=22;MYCOPY(unk_1af5a)} // 0948:34fa
    {db tmp999[32]={4,89,79,85,39,86,69,32,77,65,68,69,32,77,73,83,84,65,75,69,83,13,84,79,79,44,32,69,82,73,75,46};MYCOPY(dummy7_c97b)} // 0948:34fb
    {db tmp999=19;MYCOPY(unk_1af7c)} // 0948:351c
    {db tmp999=3;MYCOPY(dummy7_c99d)} // 0948:351d
    {db tmp999=79;MYCOPY(dummy7_c99e)} // 0948:351e
    {db tmp999=72;MYCOPY(dummy7_c99f)} // 0948:351f
    {db tmp999=44;MYCOPY(dummy7_c9a0)} // 0948:3520
    {db tmp999=32;MYCOPY(dummy7_c9a1)} // 0948:3521
    {db tmp999=84;MYCOPY(dummy7_c9a2)} // 0948:3522
    {db tmp999=72;MYCOPY(dummy7_c9a3)} // 0948:3523
    {db tmp999=65;MYCOPY(dummy7_c9a4)} // 0948:3524
    {db tmp999=84;MYCOPY(dummy7_c9a5)} // 0948:3525
    {db tmp999=32;MYCOPY(dummy7_c9a6)} // 0948:3526
    {db tmp999=87;MYCOPY(dummy7_c9a7)} // 0948:3527
    {db tmp999=65;MYCOPY(dummy7_c9a8)} // 0948:3528
    {db tmp999=83;MYCOPY(dummy7_c9a9)} // 0948:3529
    {db tmp999=32;MYCOPY(dummy7_c9aa)} // 0948:352a
    {db tmp999=76;MYCOPY(dummy7_c9ab)} // 0948:352b
    {db tmp999=79;MYCOPY(dummy7_c9ac)} // 0948:352c
    {db tmp999=87;MYCOPY(dummy7_c9ad)} // 0948:352d
    {db tmp999=46;MYCOPY(dummy7_c9ae)} // 0948:352e
    {db tmp999=28;MYCOPY(unk_1af90)} // 0948:3530
    {db tmp999[32]={4,84,72,73,83,32,73,83,32,84,72,69,32,86,79,73,67,69,32,79,70,32,84,72,79,82,44,13,86,73,75,73};MYCOPY(dummy7_c9b1)} // 0948:3531
    {db tmp999=78;MYCOPY(dummy7_c9d1)} // 0948:3551
    {db tmp999=71;MYCOPY(dummy7_c9d2)} // 0948:3552
    {db tmp999=32;MYCOPY(dummy7_c9d3)} // 0948:3553
    {db tmp999=76;MYCOPY(dummy7_c9d4)} // 0948:3554
    {db tmp999=79;MYCOPY(dummy7_c9d5)} // 0948:3555
    {db tmp999=82;MYCOPY(dummy7_c9d6)} // 0948:3556
    {db tmp999=68;MYCOPY(dummy7_c9d7)} // 0948:3557
    {db tmp999=32;MYCOPY(dummy7_c9d8)} // 0948:3558
    {db tmp999=79;MYCOPY(dummy7_c9d9)} // 0948:3559
    {db tmp999=70;MYCOPY(dummy7_c9da)} // 0948:355a
    {db tmp999=32;MYCOPY(dummy7_c9db)} // 0948:355b
    {db tmp999=84;MYCOPY(dummy7_c9dc)} // 0948:355c
    {db tmp999=72;MYCOPY(dummy7_c9dd)} // 0948:355d
    {db tmp999=85;MYCOPY(dummy7_c9de)} // 0948:355e
    {db tmp999=78;MYCOPY(dummy7_c9df)} // 0948:355f
    {db tmp999=68;MYCOPY(dummy7_c9e0)} // 0948:3560
    {db tmp999=69;MYCOPY(dummy7_c9e1)} // 0948:3561
    {db tmp999=82;MYCOPY(dummy7_c9e2)} // 0948:3562
    {db tmp999=46;MYCOPY(dummy7_c9e3)} // 0948:3563
    {db tmp999=17;MYCOPY(unk_1afc5)} // 0948:3565
    {db tmp999[32]={4,73,32,65,77,32,82,69,65,76,32,65,78,71,82,89,13,87,73,84,72,32,89,79,85,32,71,85,89,83,46,0};MYCOPY(dummy7_c9e6)} // 0948:3566
    {db tmp999=24;MYCOPY(unk_1afe6)} // 0948:3586
    {db tmp999[32]={5,72,79,87,32,72,65,86,69,32,87,69,32,68,73,83,80,76,69,65,83,69,68,13,89,79,85,44,32,79,72,32};MYCOPY(dummy7_ca07)} // 0948:3587
    {db tmp999=77;MYCOPY(dummy7_ca27)} // 0948:35a7
    {db tmp999=73;MYCOPY(dummy7_ca28)} // 0948:35a8
    {db tmp999=71;MYCOPY(dummy7_ca29)} // 0948:35a9
    {db tmp999=72;MYCOPY(dummy7_ca2a)} // 0948:35aa
    {db tmp999=84;MYCOPY(dummy7_ca2b)} // 0948:35ab
    {db tmp999=89;MYCOPY(dummy7_ca2c)} // 0948:35ac
    {db tmp999=32;MYCOPY(dummy7_ca2d)} // 0948:35ad
    {db tmp999=86;MYCOPY(dummy7_ca2e)} // 0948:35ae
    {db tmp999=79;MYCOPY(dummy7_ca2f)} // 0948:35af
    {db tmp999=73;MYCOPY(dummy7_ca30)} // 0948:35b0
    {db tmp999=67;MYCOPY(dummy7_ca31)} // 0948:35b1
    {db tmp999=69;MYCOPY(dummy7_ca32)} // 0948:35b2
    {db tmp999=13;MYCOPY(dummy7_ca33)} // 0948:35b3
    {db tmp999=79;MYCOPY(dummy7_ca34)} // 0948:35b4
    {db tmp999=70;MYCOPY(dummy7_ca35)} // 0948:35b5
    {db tmp999=32;MYCOPY(dummy7_ca36)} // 0948:35b6
    {db tmp999=84;MYCOPY(dummy7_ca37)} // 0948:35b7
    {db tmp999=72;MYCOPY(dummy7_ca38)} // 0948:35b8
    {db tmp999=79;MYCOPY(dummy7_ca39)} // 0948:35b9
    {db tmp999=82;MYCOPY(dummy7_ca3a)} // 0948:35ba
    {db tmp999=63;MYCOPY(dummy7_ca3b)} // 0948:35bb
    {db tmp999=23;MYCOPY(unk_1b01d)} // 0948:35bd
    {db tmp999=3;MYCOPY(dummy7_ca3e)} // 0948:35be
    {db tmp999=87;MYCOPY(dummy7_ca3f)} // 0948:35bf
    {db tmp999=72;MYCOPY(dummy7_ca40)} // 0948:35c0
    {db tmp999=89;MYCOPY(dummy7_ca41)} // 0948:35c1
    {db tmp999=32;MYCOPY(dummy7_ca42)} // 0948:35c2
    {db tmp999=67;MYCOPY(dummy7_ca43)} // 0948:35c3
    {db tmp999=65;MYCOPY(dummy7_ca44)} // 0948:35c4
    {db tmp999=78;MYCOPY(dummy7_ca45)} // 0948:35c5
    {db tmp999=39;MYCOPY(dummy7_ca46)} // 0948:35c6
    {db tmp999=84;MYCOPY(dummy7_ca47)} // 0948:35c7
    {db tmp999=32;MYCOPY(dummy7_ca48)} // 0948:35c8
    {db tmp999=87;MYCOPY(dummy7_ca49)} // 0948:35c9
    {db tmp999=69;MYCOPY(dummy7_ca4a)} // 0948:35ca
    {db tmp999=32;MYCOPY(dummy7_ca4b)} // 0948:35cb
    {db tmp999=83;MYCOPY(dummy7_ca4c)} // 0948:35cc
    {db tmp999=69;MYCOPY(dummy7_ca4d)} // 0948:35cd
    {db tmp999=69;MYCOPY(dummy7_ca4e)} // 0948:35ce
    {db tmp999=32;MYCOPY(dummy7_ca4f)} // 0948:35cf
    {db tmp999=89;MYCOPY(dummy7_ca50)} // 0948:35d0
    {db tmp999=79;MYCOPY(dummy7_ca51)} // 0948:35d1
    {db tmp999=85;MYCOPY(dummy7_ca52)} // 0948:35d2
    {db tmp999=63;MYCOPY(dummy7_ca53)} // 0948:35d3
    {db tmp999=25;MYCOPY(unk_1b035)} // 0948:35d5
    {db tmp999[32]={6,87,79,85,76,68,32,89,79,85,32,87,65,78,84,32,84,79,32,66,69,13,83,69,69,78,32,87,73,84,72,32};MYCOPY(dummy7_ca56)} // 0948:35d6
    {db tmp999[32]={86,73,75,73,78,71,83,32,84,72,65,84,13,72,65,86,69,32,70,65,73,76,69,68,32,49,53,32,84,73,77,69};MYCOPY(dummy7_ca76)} // 0948:35f6
    {db tmp999=83;MYCOPY(dummy7_ca96)} // 0948:3616
    {db tmp999=32;MYCOPY(dummy7_ca97)} // 0948:3617
    {db tmp999=84;MYCOPY(dummy7_ca98)} // 0948:3618
    {db tmp999=79;MYCOPY(dummy7_ca99)} // 0948:3619
    {db tmp999=13;MYCOPY(dummy7_ca9a)} // 0948:361a
    {db tmp999=71;MYCOPY(dummy7_ca9b)} // 0948:361b
    {db tmp999=69;MYCOPY(dummy7_ca9c)} // 0948:361c
    {db tmp999=84;MYCOPY(dummy7_ca9d)} // 0948:361d
    {db tmp999=32;MYCOPY(dummy7_ca9e)} // 0948:361e
    {db tmp999=84;MYCOPY(dummy7_ca9f)} // 0948:361f
    {db tmp999=72;MYCOPY(dummy7_caa0)} // 0948:3620
    {db tmp999=82;MYCOPY(dummy7_caa1)} // 0948:3621
    {db tmp999=79;MYCOPY(dummy7_caa2)} // 0948:3622
    {db tmp999=85;MYCOPY(dummy7_caa3)} // 0948:3623
    {db tmp999=71;MYCOPY(dummy7_caa4)} // 0948:3624
    {db tmp999=72;MYCOPY(dummy7_caa5)} // 0948:3625
    {db tmp999=32;MYCOPY(dummy7_caa6)} // 0948:3626
    {db tmp999=65;MYCOPY(dummy7_caa7)} // 0948:3627
    {db tmp999=32;MYCOPY(dummy7_caa8)} // 0948:3628
    {db tmp999=76;MYCOPY(dummy7_caa9)} // 0948:3629
    {db tmp999=69;MYCOPY(dummy7_caaa)} // 0948:362a
    {db tmp999=86;MYCOPY(dummy7_caab)} // 0948:362b
    {db tmp999=69;MYCOPY(dummy7_caac)} // 0948:362c
    {db tmp999=76;MYCOPY(dummy7_caad)} // 0948:362d
    {db tmp999=63;MYCOPY(dummy7_caae)} // 0948:362e
    {db tmp999=8;MYCOPY(unk_1b090)} // 0948:3630
    {db tmp999=3;MYCOPY(dummy7_cab1)} // 0948:3631
    {db tmp999=66;MYCOPY(dummy7_cab2)} // 0948:3632
    {db tmp999=85;MYCOPY(dummy7_cab3)} // 0948:3633
    {db tmp999=84;MYCOPY(dummy7_cab4)} // 0948:3634
    {db tmp999=46;MYCOPY(dummy7_cab5)} // 0948:3635
    {db tmp999=46;MYCOPY(dummy7_cab6)} // 0948:3636
    {db tmp999=46;MYCOPY(dummy7_cab7)} // 0948:3637
    {db tmp999=29;MYCOPY(unk_1b099)} // 0948:3639
    {db tmp999[32]={6,73,78,32,77,89,32,68,65,89,44,32,86,73,75,73,78,71,83,32,87,69,82,69,13,70,65,67,69,68,32,87};MYCOPY(dummy7_caba)} // 0948:363a
    {db tmp999[32]={73,84,72,32,77,85,67,72,32,84,79,85,71,72,69,82,13,76,69,86,69,76,83,44,32,65,78,68,32,87,69,32};MYCOPY(dummy7_cada)} // 0948:365a
    {db tmp999[32]={65,76,87,65,89,83,32,71,79,84,13,80,65,83,84,32,84,72,69,77,32,79,78,32,84,72,69,32,70,73,82,83};MYCOPY(dummy7_cafa)} // 0948:367a
    {db tmp999=84;MYCOPY(dummy7_cb1a)} // 0948:369a
    {db tmp999=32;MYCOPY(dummy7_cb1b)} // 0948:369b
    {db tmp999=84;MYCOPY(dummy7_cb1c)} // 0948:369c
    {db tmp999=82;MYCOPY(dummy7_cb1d)} // 0948:369d
    {db tmp999=89;MYCOPY(dummy7_cb1e)} // 0948:369e
    {db tmp999=33;MYCOPY(dummy7_cb1f)} // 0948:369f
    {db tmp999=9;MYCOPY(unk_1b101)} // 0948:36a1
    {db tmp999=3;MYCOPY(dummy7_cb22)} // 0948:36a2
    {db tmp999=65;MYCOPY(dummy7_cb23)} // 0948:36a3
    {db tmp999=76;MYCOPY(dummy7_cb24)} // 0948:36a4
    {db tmp999=87;MYCOPY(dummy7_cb25)} // 0948:36a5
    {db tmp999=65;MYCOPY(dummy7_cb26)} // 0948:36a6
    {db tmp999=89;MYCOPY(dummy7_cb27)} // 0948:36a7
    {db tmp999=83;MYCOPY(dummy7_cb28)} // 0948:36a8
    {db tmp999=63;MYCOPY(dummy7_cb29)} // 0948:36a9
    {db tmp999=24;MYCOPY(unk_1b10b)} // 0948:36ab
    {db tmp999[32]={5,68,79,32,89,79,85,32,68,79,85,66,84,32,84,72,79,82,63,32,78,79,87,13,71,79,32,79,85,84,32,84};MYCOPY(dummy7_cb2c)} // 0948:36ac
    {db tmp999=72;MYCOPY(dummy7_cb4c)} // 0948:36cc
    {db tmp999=69;MYCOPY(dummy7_cb4d)} // 0948:36cd
    {db tmp999=82;MYCOPY(dummy7_cb4e)} // 0948:36ce
    {db tmp999=69;MYCOPY(dummy7_cb4f)} // 0948:36cf
    {db tmp999=32;MYCOPY(dummy7_cb50)} // 0948:36d0
    {db tmp999=65;MYCOPY(dummy7_cb51)} // 0948:36d1
    {db tmp999=78;MYCOPY(dummy7_cb52)} // 0948:36d2
    {db tmp999=68;MYCOPY(dummy7_cb53)} // 0948:36d3
    {db tmp999=32;MYCOPY(dummy7_cb54)} // 0948:36d4
    {db tmp999=70;MYCOPY(dummy7_cb55)} // 0948:36d5
    {db tmp999=73;MYCOPY(dummy7_cb56)} // 0948:36d6
    {db tmp999=78;MYCOPY(dummy7_cb57)} // 0948:36d7
    {db tmp999=68;MYCOPY(dummy7_cb58)} // 0948:36d8
    {db tmp999=13;MYCOPY(dummy7_cb59)} // 0948:36d9
    {db tmp999=84;MYCOPY(dummy7_cb5a)} // 0948:36da
    {db tmp999=72;MYCOPY(dummy7_cb5b)} // 0948:36db
    {db tmp999=65;MYCOPY(dummy7_cb5c)} // 0948:36dc
    {db tmp999=84;MYCOPY(dummy7_cb5d)} // 0948:36dd
    {db tmp999=32;MYCOPY(dummy7_cb5e)} // 0948:36de
    {db tmp999=69;MYCOPY(dummy7_cb5f)} // 0948:36df
    {db tmp999=88;MYCOPY(dummy7_cb60)} // 0948:36e0
    {db tmp999=73;MYCOPY(dummy7_cb61)} // 0948:36e1
    {db tmp999=84;MYCOPY(dummy7_cb62)} // 0948:36e2
    {db tmp999=33;MYCOPY(dummy7_cb63)} // 0948:36e3
    {db tmp999=33;MYCOPY(dummy7_cb64)} // 0948:36e4
    {db tmp999=33;MYCOPY(dummy7_cb65)} // 0948:36e5
    {db tmp999=21;MYCOPY(unk_1b147)} // 0948:36e7
    {db tmp999[32]={6,67,79,78,71,82,65,84,85,76,65,84,73,79,78,83,33,13,89,79,85,39,86,69,32,74,85,83,84,32,87,79};MYCOPY(dummy7_cb68)} // 0948:36e8
    {db tmp999[32]={78,32,84,72,69,13,39,84,79,79,32,77,85,67,72,32,84,73,77,69,32,79,78,13,89,79,85,82,32,72,65,78};MYCOPY(dummy7_cb88)} // 0948:3708
    {db tmp999=68;MYCOPY(dummy7_cba8)} // 0948:3728
    {db tmp999=83;MYCOPY(dummy7_cba9)} // 0948:3729
    {db tmp999=32;MYCOPY(dummy7_cbaa)} // 0948:372a
    {db tmp999=65;MYCOPY(dummy7_cbab)} // 0948:372b
    {db tmp999=87;MYCOPY(dummy7_cbac)} // 0948:372c
    {db tmp999=65;MYCOPY(dummy7_cbad)} // 0948:372d
    {db tmp999=82;MYCOPY(dummy7_cbae)} // 0948:372e
    {db tmp999=68;MYCOPY(dummy7_cbaf)} // 0948:372f
    {db tmp999=39;MYCOPY(dummy7_cbb0)} // 0948:3730
    {db tmp999=46;MYCOPY(dummy7_cbb1)} // 0948:3731
    {db tmp999=20;MYCOPY(unk_1b193)} // 0948:3733
    {db tmp999[32]={5,65,78,68,32,89,79,85,32,72,65,86,69,32,87,65,65,65,89,13,84,79,79,32,77,85,67,72,32,84,73,77};MYCOPY(dummy7_cbb4)} // 0948:3734
    {db tmp999=69;MYCOPY(dummy7_cbd4)} // 0948:3754
    {db tmp999=32;MYCOPY(dummy7_cbd5)} // 0948:3755
    {db tmp999=79;MYCOPY(dummy7_cbd6)} // 0948:3756
    {db tmp999=78;MYCOPY(dummy7_cbd7)} // 0948:3757
    {db tmp999=13;MYCOPY(dummy7_cbd8)} // 0948:3758
    {db tmp999=89;MYCOPY(dummy7_cbd9)} // 0948:3759
    {db tmp999=79;MYCOPY(dummy7_cbda)} // 0948:375a
    {db tmp999=85;MYCOPY(dummy7_cbdb)} // 0948:375b
    {db tmp999=82;MYCOPY(dummy7_cbdc)} // 0948:375c
    {db tmp999=32;MYCOPY(dummy7_cbdd)} // 0948:375d
    {db tmp999=72;MYCOPY(dummy7_cbde)} // 0948:375e
    {db tmp999=65;MYCOPY(dummy7_cbdf)} // 0948:375f
    {db tmp999=78;MYCOPY(dummy7_cbe0)} // 0948:3760
    {db tmp999=68;MYCOPY(dummy7_cbe1)} // 0948:3761
    {db tmp999=83;MYCOPY(dummy7_cbe2)} // 0948:3762
    {db tmp999=46;MYCOPY(dummy7_cbe3)} // 0948:3763
    {db tmp999=20;MYCOPY(unk_1b1c5)} // 0948:3765
    {db tmp999[32]={6,89,79,85,39,86,69,32,71,73,86,69,78,32,85,80,32,53,48,13,84,73,77,69,83,32,74,85,83,84,32,84};MYCOPY(dummy7_cbe6)} // 0948:3766
    {db tmp999[32]={79,32,83,69,69,13,73,70,32,84,72,69,82,69,32,65,82,69,32,65,78,89,13,77,79,82,69,32,77,69,83,83};MYCOPY(dummy7_cc06)} // 0948:3786
    {db tmp999=65;MYCOPY(dummy7_cc26)} // 0948:37a6
    {db tmp999=71;MYCOPY(dummy7_cc27)} // 0948:37a7
    {db tmp999=69;MYCOPY(dummy7_cc28)} // 0948:37a8
    {db tmp999=83;MYCOPY(dummy7_cc29)} // 0948:37a9
    {db tmp999=33;MYCOPY(dummy7_cc2a)} // 0948:37aa
    {db tmp999=21;MYCOPY(unk_1b20c)} // 0948:37ac
    {db tmp999[32]={4,87,69,76,76,44,32,73,39,76,76,32,83,65,86,69,32,89,79,85,13,65,32,76,73,84,84,76,69,32,84,73};MYCOPY(dummy7_cc2d)} // 0948:37ad
    {db tmp999=77;MYCOPY(dummy7_cc4d)} // 0948:37cd
    {db tmp999=69;MYCOPY(dummy7_cc4e)} // 0948:37ce
    {db tmp999=46;MYCOPY(dummy7_cc4f)} // 0948:37cf
    {db tmp999=46;MYCOPY(dummy7_cc50)} // 0948:37d0
    {db tmp999=46;MYCOPY(dummy7_cc51)} // 0948:37d1
    {db tmp999=21;MYCOPY(unk_1b233)} // 0948:37d3
    {db tmp999[32]={4,84,72,73,83,32,73,83,32,84,72,69,32,76,65,83,84,13,77,69,83,83,65,71,69,32,89,79,85,39,76,76};MYCOPY(dummy7_cc54)} // 0948:37d4
    {db tmp999=32;MYCOPY(dummy7_cc74)} // 0948:37f4
    {db tmp999=71;MYCOPY(dummy7_cc75)} // 0948:37f5
    {db tmp999=69;MYCOPY(dummy7_cc76)} // 0948:37f6
    {db tmp999=84;MYCOPY(dummy7_cc77)} // 0948:37f7
    {db tmp999=46;MYCOPY(dummy7_cc78)} // 0948:37f8
    {db tmp999=20;MYCOPY(unk_1b25a)} // 0948:37fa
    {db tmp999[32]={5,89,69,65,72,44,32,83,79,32,89,79,85,32,77,73,71,72,84,13,65,83,32,87,69,76,76,32,74,85,83,84};MYCOPY(dummy7_cc7b)} // 0948:37fb
    {db tmp999=32;MYCOPY(dummy7_cc9b)} // 0948:381b
    {db tmp999=80;MYCOPY(dummy7_cc9c)} // 0948:381c
    {db tmp999=76;MYCOPY(dummy7_cc9d)} // 0948:381d
    {db tmp999=65;MYCOPY(dummy7_cc9e)} // 0948:381e
    {db tmp999=89;MYCOPY(dummy7_cc9f)} // 0948:381f
    {db tmp999=13;MYCOPY(dummy7_cca0)} // 0948:3820
    {db tmp999=84;MYCOPY(dummy7_cca1)} // 0948:3821
    {db tmp999=72;MYCOPY(dummy7_cca2)} // 0948:3822
    {db tmp999=69;MYCOPY(dummy7_cca3)} // 0948:3823
    {db tmp999=32;MYCOPY(dummy7_cca4)} // 0948:3824
    {db tmp999=71;MYCOPY(dummy7_cca5)} // 0948:3825
    {db tmp999=65;MYCOPY(dummy7_cca6)} // 0948:3826
    {db tmp999=77;MYCOPY(dummy7_cca7)} // 0948:3827
    {db tmp999=69;MYCOPY(dummy7_cca8)} // 0948:3828
    {db tmp999=46;MYCOPY(dummy7_cca9)} // 0948:3829
    {db tmp999=22;MYCOPY(unk_1b28b)} // 0948:382b
    {db tmp999[32]={4,73,84,39,83,32,65,67,84,85,65,76,76,89,32,80,82,69,84,84,89,13,70,85,78,44,32,89,79,85,32,75};MYCOPY(dummy7_ccac)} // 0948:382c
    {db tmp999=78;MYCOPY(dummy7_cccc)} // 0948:384c
    {db tmp999=79;MYCOPY(dummy7_cccd)} // 0948:384d
    {db tmp999=87;MYCOPY(dummy7_ccce)} // 0948:384e
    {db tmp999=46;MYCOPY(dummy7_cccf)} // 0948:384f
    {db tmp999=16;MYCOPY(unk_1b2b1)} // 0948:3851
    {db tmp999[32]={6,78,79,87,44,32,68,73,68,78,39,84,32,73,13,74,85,83,84,32,83,65,89,32,84,72,65,84,13,84,72,69};MYCOPY(dummy7_ccd2)} // 0948:3852
    {db tmp999=82;MYCOPY(dummy7_ccf2)} // 0948:3872
    {db tmp999=69;MYCOPY(dummy7_ccf3)} // 0948:3873
    {db tmp999=32;MYCOPY(dummy7_ccf4)} // 0948:3874
    {db tmp999=87;MYCOPY(dummy7_ccf5)} // 0948:3875
    {db tmp999=69;MYCOPY(dummy7_ccf6)} // 0948:3876
    {db tmp999=82;MYCOPY(dummy7_ccf7)} // 0948:3877
    {db tmp999=69;MYCOPY(dummy7_ccf8)} // 0948:3878
    {db tmp999=32;MYCOPY(dummy7_ccf9)} // 0948:3879
    {db tmp999=78;MYCOPY(dummy7_ccfa)} // 0948:387a
    {db tmp999=79;MYCOPY(dummy7_ccfb)} // 0948:387b
    {db tmp999=13;MYCOPY(dummy7_ccfc)} // 0948:387c
    {db tmp999=77;MYCOPY(dummy7_ccfd)} // 0948:387d
    {db tmp999=79;MYCOPY(dummy7_ccfe)} // 0948:387e
    {db tmp999=82;MYCOPY(dummy7_ccff)} // 0948:387f
    {db tmp999=69;MYCOPY(dummy7_cd00)} // 0948:3880
    {db tmp999=32;MYCOPY(dummy7_cd01)} // 0948:3881
    {db tmp999=77;MYCOPY(dummy7_cd02)} // 0948:3882
    {db tmp999=69;MYCOPY(dummy7_cd03)} // 0948:3883
    {db tmp999=83;MYCOPY(dummy7_cd04)} // 0948:3884
    {db tmp999=83;MYCOPY(dummy7_cd05)} // 0948:3885
    {db tmp999=65;MYCOPY(dummy7_cd06)} // 0948:3886
    {db tmp999=71;MYCOPY(dummy7_cd07)} // 0948:3887
    {db tmp999=69;MYCOPY(dummy7_cd08)} // 0948:3888
    {db tmp999=83;MYCOPY(dummy7_cd09)} // 0948:3889
    {db tmp999=63;MYCOPY(dummy7_cd0a)} // 0948:388a
    {db tmp999=18;MYCOPY(unk_1b2ec)} // 0948:388c
    {db tmp999[32]={5,89,79,85,32,68,79,78,39,84,32,70,79,76,76,79,87,13,68,73,82,69,67,84,73,79,78,83,32,86,69,82};MYCOPY(dummy7_cd0d)} // 0948:388d
    {db tmp999=89;MYCOPY(dummy7_cd2d)} // 0948:38ad
    {db tmp999=13;MYCOPY(dummy7_cd2e)} // 0948:38ae
    {db tmp999=87;MYCOPY(dummy7_cd2f)} // 0948:38af
    {db tmp999=69;MYCOPY(dummy7_cd30)} // 0948:38b0
    {db tmp999=76;MYCOPY(dummy7_cd31)} // 0948:38b1
    {db tmp999=76;MYCOPY(dummy7_cd32)} // 0948:38b2
    {db tmp999=44;MYCOPY(dummy7_cd33)} // 0948:38b3
    {db tmp999=32;MYCOPY(dummy7_cd34)} // 0948:38b4
    {db tmp999=68;MYCOPY(dummy7_cd35)} // 0948:38b5
    {db tmp999=79;MYCOPY(dummy7_cd36)} // 0948:38b6
    {db tmp999=32;MYCOPY(dummy7_cd37)} // 0948:38b7
    {db tmp999=89;MYCOPY(dummy7_cd38)} // 0948:38b8
    {db tmp999=79;MYCOPY(dummy7_cd39)} // 0948:38b9
    {db tmp999=85;MYCOPY(dummy7_cd3a)} // 0948:38ba
    {db tmp999=46;MYCOPY(dummy7_cd3b)} // 0948:38bb
    {db tmp999=18;MYCOPY(unk_1b31d)} // 0948:38bd
    {db tmp999[32]={5,84,72,73,83,32,84,73,77,69,32,87,69,39,82,69,13,83,69,82,73,79,85,83,46,32,32,83,84,79,80,13};MYCOPY(dummy7_cd3e)} // 0948:38be
    {db tmp999=71;MYCOPY(dummy7_cd5e)} // 0948:38de
    {db tmp999=73;MYCOPY(dummy7_cd5f)} // 0948:38df
    {db tmp999=86;MYCOPY(dummy7_cd60)} // 0948:38e0
    {db tmp999=73;MYCOPY(dummy7_cd61)} // 0948:38e1
    {db tmp999=78;MYCOPY(dummy7_cd62)} // 0948:38e2
    {db tmp999=71;MYCOPY(dummy7_cd63)} // 0948:38e3
    {db tmp999=32;MYCOPY(dummy7_cd64)} // 0948:38e4
    {db tmp999=85;MYCOPY(dummy7_cd65)} // 0948:38e5
    {db tmp999=80;MYCOPY(dummy7_cd66)} // 0948:38e6
    {db tmp999=44;MYCOPY(dummy7_cd67)} // 0948:38e7
    {db tmp999=32;MYCOPY(dummy7_cd68)} // 0948:38e8
    {db tmp999=79;MYCOPY(dummy7_cd69)} // 0948:38e9
    {db tmp999=75;MYCOPY(dummy7_cd6a)} // 0948:38ea
    {db tmp999=65;MYCOPY(dummy7_cd6b)} // 0948:38eb
    {db tmp999=89;MYCOPY(dummy7_cd6c)} // 0948:38ec
    {db tmp999=63;MYCOPY(dummy7_cd6d)} // 0948:38ed
    {db tmp999=28;MYCOPY(unk_1b34f)} // 0948:38ef
    {db tmp999[32]={6,77,89,32,78,65,77,69,32,73,83,32,69,82,73,75,32,84,72,69,32,83,87,73,70,84,46,13,73,32,67,65};MYCOPY(dummy7_cd70)} // 0948:38f0
    {db tmp999[32]={78,32,82,85,78,32,76,73,75,69,32,84,72,69,32,87,73,78,68,13,65,78,68,32,76,69,65,80,32,84,65,76};MYCOPY(dummy7_cd90)} // 0948:3910
    {db tmp999=76;MYCOPY(dummy7_cdb0)} // 0948:3930
    {db tmp999=32;MYCOPY(dummy7_cdb1)} // 0948:3931
    {db tmp999=72;MYCOPY(dummy7_cdb2)} // 0948:3932
    {db tmp999=85;MYCOPY(dummy7_cdb3)} // 0948:3933
    {db tmp999=84;MYCOPY(dummy7_cdb4)} // 0948:3934
    {db tmp999=83;MYCOPY(dummy7_cdb5)} // 0948:3935
    {db tmp999=32;MYCOPY(dummy7_cdb6)} // 0948:3936
    {db tmp999=73;MYCOPY(dummy7_cdb7)} // 0948:3937
    {db tmp999=78;MYCOPY(dummy7_cdb8)} // 0948:3938
    {db tmp999=32;MYCOPY(dummy7_cdb9)} // 0948:3939
    {db tmp999=65;MYCOPY(dummy7_cdba)} // 0948:393a
    {db tmp999=13;MYCOPY(dummy7_cdbb)} // 0948:393b
    {db tmp999=83;MYCOPY(dummy7_cdbc)} // 0948:393c
    {db tmp999=73;MYCOPY(dummy7_cdbd)} // 0948:393d
    {db tmp999=78;MYCOPY(dummy7_cdbe)} // 0948:393e
    {db tmp999=71;MYCOPY(dummy7_cdbf)} // 0948:393f
    {db tmp999=76;MYCOPY(dummy7_cdc0)} // 0948:3940
    {db tmp999=69;MYCOPY(dummy7_cdc1)} // 0948:3941
    {db tmp999=32;MYCOPY(dummy7_cdc2)} // 0948:3942
    {db tmp999=66;MYCOPY(dummy7_cdc3)} // 0948:3943
    {db tmp999=79;MYCOPY(dummy7_cdc4)} // 0948:3944
    {db tmp999=85;MYCOPY(dummy7_cdc5)} // 0948:3945
    {db tmp999=78;MYCOPY(dummy7_cdc6)} // 0948:3946
    {db tmp999=68;MYCOPY(dummy7_cdc7)} // 0948:3947
    {db tmp999=46;MYCOPY(dummy7_cdc8)} // 0948:3948
    {db tmp999=28;MYCOPY(unk_1b3aa)} // 0948:394a
    {db tmp999[32]={4,73,84,32,73,83,32,84,73,77,69,32,70,79,82,32,77,69,44,32,66,65,76,69,79,71,44,13,65,78,68,32};MYCOPY(dummy7_cdcb)} // 0948:394b
    {db tmp999=79;MYCOPY(dummy7_cdeb)} // 0948:396b
    {db tmp999=76;MYCOPY(dummy7_cdec)} // 0948:396c
    {db tmp999=65;MYCOPY(dummy7_cded)} // 0948:396d
    {db tmp999=70;MYCOPY(dummy7_cdee)} // 0948:396e
    {db tmp999=32;MYCOPY(dummy7_cdef)} // 0948:396f
    {db tmp999=84;MYCOPY(dummy7_cdf0)} // 0948:3970
    {db tmp999=79;MYCOPY(dummy7_cdf1)} // 0948:3971
    {db tmp999=32;MYCOPY(dummy7_cdf2)} // 0948:3972
    {db tmp999=71;MYCOPY(dummy7_cdf3)} // 0948:3973
    {db tmp999=79;MYCOPY(dummy7_cdf4)} // 0948:3974
    {db tmp999=32;MYCOPY(dummy7_cdf5)} // 0948:3975
    {db tmp999=72;MYCOPY(dummy7_cdf6)} // 0948:3976
    {db tmp999=85;MYCOPY(dummy7_cdf7)} // 0948:3977
    {db tmp999=78;MYCOPY(dummy7_cdf8)} // 0948:3978
    {db tmp999=84;MYCOPY(dummy7_cdf9)} // 0948:3979
    {db tmp999=73;MYCOPY(dummy7_cdfa)} // 0948:397a
    {db tmp999=78;MYCOPY(dummy7_cdfb)} // 0948:397b
    {db tmp999=71;MYCOPY(dummy7_cdfc)} // 0948:397c
    {db tmp999=46;MYCOPY(dummy7_cdfd)} // 0948:397d
    {db tmp999=26;MYCOPY(unk_1b3df)} // 0948:397f
    {db tmp999[32]={6,73,32,65,77,32,66,65,76,69,79,71,32,84,72,69,32,70,73,69,82,67,69,46,13,73,32,65,77,32,84,72};MYCOPY(dummy7_ce00)} // 0948:3980
    {db tmp999[32]={69,32,84,79,85,71,72,69,83,84,32,86,73,75,73,78,71,13,73,78,32,84,72,69,32,76,65,78,68,46,32,78};MYCOPY(dummy7_ce20)} // 0948:39a0
    {db tmp999=79;MYCOPY(dummy7_ce40)} // 0948:39c0
    {db tmp999=32;MYCOPY(dummy7_ce41)} // 0948:39c1
    {db tmp999=79;MYCOPY(dummy7_ce42)} // 0948:39c2
    {db tmp999=78;MYCOPY(dummy7_ce43)} // 0948:39c3
    {db tmp999=69;MYCOPY(dummy7_ce44)} // 0948:39c4
    {db tmp999=32;MYCOPY(dummy7_ce45)} // 0948:39c5
    {db tmp999=67;MYCOPY(dummy7_ce46)} // 0948:39c6
    {db tmp999=65;MYCOPY(dummy7_ce47)} // 0948:39c7
    {db tmp999=78;MYCOPY(dummy7_ce48)} // 0948:39c8
    {db tmp999=13;MYCOPY(dummy7_ce49)} // 0948:39c9
    {db tmp999=68;MYCOPY(dummy7_ce4a)} // 0948:39ca
    {db tmp999=69;MYCOPY(dummy7_ce4b)} // 0948:39cb
    {db tmp999=70;MYCOPY(dummy7_ce4c)} // 0948:39cc
    {db tmp999=69;MYCOPY(dummy7_ce4d)} // 0948:39cd
    {db tmp999=65;MYCOPY(dummy7_ce4e)} // 0948:39ce
    {db tmp999=84;MYCOPY(dummy7_ce4f)} // 0948:39cf
    {db tmp999=32;MYCOPY(dummy7_ce50)} // 0948:39d0
    {db tmp999=77;MYCOPY(dummy7_ce51)} // 0948:39d1
    {db tmp999=69;MYCOPY(dummy7_ce52)} // 0948:39d2
    {db tmp999=46;MYCOPY(dummy7_ce53)} // 0948:39d3
    {db tmp999=22;MYCOPY(unk_1b435)} // 0948:39d5
    {db tmp999=3;MYCOPY(dummy7_ce56)} // 0948:39d6
    {db tmp999=73;MYCOPY(dummy7_ce57)} // 0948:39d7
    {db tmp999=32;MYCOPY(dummy7_ce58)} // 0948:39d8
    {db tmp999=65;MYCOPY(dummy7_ce59)} // 0948:39d9
    {db tmp999=77;MYCOPY(dummy7_ce5a)} // 0948:39da
    {db tmp999=32;MYCOPY(dummy7_ce5b)} // 0948:39db
    {db tmp999=79;MYCOPY(dummy7_ce5c)} // 0948:39dc
    {db tmp999=76;MYCOPY(dummy7_ce5d)} // 0948:39dd
    {db tmp999=65;MYCOPY(dummy7_ce5e)} // 0948:39de
    {db tmp999=70;MYCOPY(dummy7_ce5f)} // 0948:39df
    {db tmp999=32;MYCOPY(dummy7_ce60)} // 0948:39e0
    {db tmp999=84;MYCOPY(dummy7_ce61)} // 0948:39e1
    {db tmp999=72;MYCOPY(dummy7_ce62)} // 0948:39e2
    {db tmp999=69;MYCOPY(dummy7_ce63)} // 0948:39e3
    {db tmp999=32;MYCOPY(dummy7_ce64)} // 0948:39e4
    {db tmp999=83;MYCOPY(dummy7_ce65)} // 0948:39e5
    {db tmp999=84;MYCOPY(dummy7_ce66)} // 0948:39e6
    {db tmp999=79;MYCOPY(dummy7_ce67)} // 0948:39e7
    {db tmp999=85;MYCOPY(dummy7_ce68)} // 0948:39e8
    {db tmp999=84;MYCOPY(dummy7_ce69)} // 0948:39e9
    {db tmp999=46;MYCOPY(dummy7_ce6a)} // 0948:39ea
    {db tmp999=22;MYCOPY(unk_1b44c)} // 0948:39ec
    {db tmp999[32]={4,73,32,67,65,78,32,66,76,79,67,75,32,65,78,89,84,72,73,78,71,13,87,73,84,72,32,77,89,32,83,72};MYCOPY(dummy7_ce6d)} // 0948:39ed
    {db tmp999=73;MYCOPY(dummy7_ce8d)} // 0948:3a0d
    {db tmp999=69;MYCOPY(dummy7_ce8e)} // 0948:3a0e
    {db tmp999=76;MYCOPY(dummy7_ce8f)} // 0948:3a0f
    {db tmp999=68;MYCOPY(dummy7_ce90)} // 0948:3a10
    {db tmp999=46;MYCOPY(dummy7_ce91)} // 0948:3a11
    {db tmp999=20;MYCOPY(unk_1b473)} // 0948:3a13
    {db tmp999[32]={4,65,78,79,84,72,69,82,32,83,85,67,67,69,83,83,70,85,76,13,68,65,89,32,79,70,32,72,85,78,84,73};MYCOPY(dummy7_ce94)} // 0948:3a14
    {db tmp999=78;MYCOPY(dummy7_ceb4)} // 0948:3a34
    {db tmp999=71;MYCOPY(dummy7_ceb5)} // 0948:3a35
    {db tmp999=46;MYCOPY(dummy7_ceb6)} // 0948:3a36
    {db tmp999=25;MYCOPY(unk_1b498)} // 0948:3a38
    {db tmp999[32]={5,76,73,70,69,32,73,83,32,71,79,79,68,46,32,32,73,32,72,79,80,69,32,73,13,78,69,86,69,82,32,72};MYCOPY(dummy7_ceb9)} // 0948:3a39
    {db tmp999[32]={65,86,69,32,84,79,32,76,69,65,86,69,32,77,89,13,66,69,76,79,86,69,68,32,86,73,76,76,65,71,69,46};MYCOPY(dummy7_ced9)} // 0948:3a59
    {db tmp999=21;MYCOPY(unk_1b4da)} // 0948:3a7a
    {db tmp999=3;MYCOPY(dummy7_cefb)} // 0948:3a7b
    {db tmp999=76;MYCOPY(dummy7_cefc)} // 0948:3a7c
    {db tmp999=65;MYCOPY(dummy7_cefd)} // 0948:3a7d
    {db tmp999=84;MYCOPY(dummy7_cefe)} // 0948:3a7e
    {db tmp999=69;MYCOPY(dummy7_ceff)} // 0948:3a7f
    {db tmp999=82;MYCOPY(dummy7_cf00)} // 0948:3a80
    {db tmp999=32;MYCOPY(dummy7_cf01)} // 0948:3a81
    {db tmp999=84;MYCOPY(dummy7_cf02)} // 0948:3a82
    {db tmp999=72;MYCOPY(dummy7_cf03)} // 0948:3a83
    {db tmp999=65;MYCOPY(dummy7_cf04)} // 0948:3a84
    {db tmp999=84;MYCOPY(dummy7_cf05)} // 0948:3a85
    {db tmp999=32;MYCOPY(dummy7_cf06)} // 0948:3a86
    {db tmp999=78;MYCOPY(dummy7_cf07)} // 0948:3a87
    {db tmp999=73;MYCOPY(dummy7_cf08)} // 0948:3a88
    {db tmp999=71;MYCOPY(dummy7_cf09)} // 0948:3a89
    {db tmp999=72;MYCOPY(dummy7_cf0a)} // 0948:3a8a
    {db tmp999=84;MYCOPY(dummy7_cf0b)} // 0948:3a8b
    {db tmp999=46;MYCOPY(dummy7_cf0c)} // 0948:3a8c
    {db tmp999=46;MYCOPY(dummy7_cf0d)} // 0948:3a8d
    {db tmp999=46;MYCOPY(dummy7_cf0e)} // 0948:3a8e
    {db tmp999=19;MYCOPY(unk_1b4f0)} // 0948:3a90
    {db tmp999=3;MYCOPY(dummy7_cf11)} // 0948:3a91
    {db tmp999=84;MYCOPY(dummy7_cf12)} // 0948:3a92
    {db tmp999=72;MYCOPY(dummy7_cf13)} // 0948:3a93
    {db tmp999=69;MYCOPY(dummy7_cf14)} // 0948:3a94
    {db tmp999=89;MYCOPY(dummy7_cf15)} // 0948:3a95
    {db tmp999=39;MYCOPY(dummy7_cf16)} // 0948:3a96
    {db tmp999=86;MYCOPY(dummy7_cf17)} // 0948:3a97
    {db tmp999=69;MYCOPY(dummy7_cf18)} // 0948:3a98
    {db tmp999=32;MYCOPY(dummy7_cf19)} // 0948:3a99
    {db tmp999=82;MYCOPY(dummy7_cf1a)} // 0948:3a9a
    {db tmp999=69;MYCOPY(dummy7_cf1b)} // 0948:3a9b
    {db tmp999=84;MYCOPY(dummy7_cf1c)} // 0948:3a9c
    {db tmp999=85;MYCOPY(dummy7_cf1d)} // 0948:3a9d
    {db tmp999=82;MYCOPY(dummy7_cf1e)} // 0948:3a9e
    {db tmp999=78;MYCOPY(dummy7_cf1f)} // 0948:3a9f
    {db tmp999=69;MYCOPY(dummy7_cf20)} // 0948:3aa0
    {db tmp999=68;MYCOPY(dummy7_cf21)} // 0948:3aa1
    {db tmp999=33;MYCOPY(dummy7_cf22)} // 0948:3aa2
    {db tmp999=9;MYCOPY(unk_1b504)} // 0948:3aa4
    {db tmp999=3;MYCOPY(dummy7_cf25)} // 0948:3aa5
    {db tmp999=72;MYCOPY(dummy7_cf26)} // 0948:3aa6
    {db tmp999=79;MYCOPY(dummy7_cf27)} // 0948:3aa7
    {db tmp999=79;MYCOPY(dummy7_cf28)} // 0948:3aa8
    {db tmp999=82;MYCOPY(dummy7_cf29)} // 0948:3aa9
    {db tmp999=65;MYCOPY(dummy7_cf2a)} // 0948:3aaa
    {db tmp999=89;MYCOPY(dummy7_cf2b)} // 0948:3aab
    {db tmp999=33;MYCOPY(dummy7_cf2c)} // 0948:3aac
    {db tmp999=7;MYCOPY(unk_1b50e)} // 0948:3aae
    {db tmp999=3;MYCOPY(dummy7_cf2f)} // 0948:3aaf
    {db tmp999=89;MYCOPY(dummy7_cf30)} // 0948:3ab0
    {db tmp999=69;MYCOPY(dummy7_cf31)} // 0948:3ab1
    {db tmp999=65;MYCOPY(dummy7_cf32)} // 0948:3ab2
    {db tmp999=33;MYCOPY(dummy7_cf33)} // 0948:3ab3
    {db tmp999=8;MYCOPY(unk_1b515)} // 0948:3ab5
    {db tmp999=3;MYCOPY(dummy7_cf36)} // 0948:3ab6
    {db tmp999=68;MYCOPY(dummy7_cf37)} // 0948:3ab7
    {db tmp999=65;MYCOPY(dummy7_cf38)} // 0948:3ab8
    {db tmp999=32;MYCOPY(dummy7_cf39)} // 0948:3ab9
    {db tmp999=68;MYCOPY(dummy7_cf3a)} // 0948:3aba
    {db tmp999=65;MYCOPY(dummy7_cf3b)} // 0948:3abb
    {db tmp999=33;MYCOPY(dummy7_cf3c)} // 0948:3abc
    {db tmp999=22;MYCOPY(unk_1b51e)} // 0948:3abe
    {db tmp999[32]={5,87,69,39,86,69,32,66,69,69,78,32,84,79,32,77,65,78,89,13,83,84,82,65,78,71,69,32,65,78,68,32};MYCOPY(dummy7_cf3f)} // 0948:3abf
    {db tmp999=69;MYCOPY(dummy7_cf5f)} // 0948:3adf
    {db tmp999=88;MYCOPY(dummy7_cf60)} // 0948:3ae0
    {db tmp999=67;MYCOPY(dummy7_cf61)} // 0948:3ae1
    {db tmp999=73;MYCOPY(dummy7_cf62)} // 0948:3ae2
    {db tmp999=84;MYCOPY(dummy7_cf63)} // 0948:3ae3
    {db tmp999=73;MYCOPY(dummy7_cf64)} // 0948:3ae4
    {db tmp999=78;MYCOPY(dummy7_cf65)} // 0948:3ae5
    {db tmp999=71;MYCOPY(dummy7_cf66)} // 0948:3ae6
    {db tmp999=13;MYCOPY(dummy7_cf67)} // 0948:3ae7
    {db tmp999=80;MYCOPY(dummy7_cf68)} // 0948:3ae8
    {db tmp999=76;MYCOPY(dummy7_cf69)} // 0948:3ae9
    {db tmp999=65;MYCOPY(dummy7_cf6a)} // 0948:3aea
    {db tmp999=67;MYCOPY(dummy7_cf6b)} // 0948:3aeb
    {db tmp999=69;MYCOPY(dummy7_cf6c)} // 0948:3aec
    {db tmp999=83;MYCOPY(dummy7_cf6d)} // 0948:3aed
    {db tmp999=46;MYCOPY(dummy7_cf6e)} // 0948:3aee
    {db tmp999=20;MYCOPY(unk_1b550)} // 0948:3af0
    {db tmp999[32]={4,66,85,84,32,78,79,87,72,69,82,69,32,83,79,13,87,79,78,68,69,82,70,85,76,32,65,83,32,72,79,77};MYCOPY(dummy7_cf71)} // 0948:3af1
    {db tmp999=69;MYCOPY(dummy7_cf91)} // 0948:3b11
    {db tmp999=33;MYCOPY(dummy7_cf92)} // 0948:3b12
    {db tmp999=23;MYCOPY(unk_1b574)} // 0948:3b14
    {db tmp999[32]={4,76,79,79,75,32,87,72,65,84,32,87,69,32,66,82,79,85,71,72,84,13,66,65,67,75,32,70,82,79,77,32};MYCOPY(dummy7_cf95)} // 0948:3b15
    {db tmp999=84;MYCOPY(dummy7_cfb5)} // 0948:3b35
    {db tmp999=72;MYCOPY(dummy7_cfb6)} // 0948:3b36
    {db tmp999=69;MYCOPY(dummy7_cfb7)} // 0948:3b37
    {db tmp999=32;MYCOPY(dummy7_cfb8)} // 0948:3b38
    {db tmp999=70;MYCOPY(dummy7_cfb9)} // 0948:3b39
    {db tmp999=85;MYCOPY(dummy7_cfba)} // 0948:3b3a
    {db tmp999=84;MYCOPY(dummy7_cfbb)} // 0948:3b3b
    {db tmp999=85;MYCOPY(dummy7_cfbc)} // 0948:3b3c
    {db tmp999=82;MYCOPY(dummy7_cfbd)} // 0948:3b3d
    {db tmp999=69;MYCOPY(dummy7_cfbe)} // 0948:3b3e
    {db tmp999=33;MYCOPY(dummy7_cfbf)} // 0948:3b3f
    {db tmp999=17;MYCOPY(unk_1b5a1)} // 0948:3b41
    {db tmp999=4;MYCOPY(dummy7_cfc2)} // 0948:3b42
    {db tmp999=84;MYCOPY(dummy7_cfc3)} // 0948:3b43
    {db tmp999=72;MYCOPY(dummy7_cfc4)} // 0948:3b44
    {db tmp999=73;MYCOPY(dummy7_cfc5)} // 0948:3b45
    {db tmp999=83;MYCOPY(dummy7_cfc6)} // 0948:3b46
    {db tmp999=32;MYCOPY(dummy7_cfc7)} // 0948:3b47
    {db tmp999=70;MYCOPY(dummy7_cfc8)} // 0948:3b48
    {db tmp999=79;MYCOPY(dummy7_cfc9)} // 0948:3b49
    {db tmp999=82;MYCOPY(dummy7_cfca)} // 0948:3b4a
    {db tmp999=69;MYCOPY(dummy7_cfcb)} // 0948:3b4b
    {db tmp999=83;MYCOPY(dummy7_cfcc)} // 0948:3b4c
    {db tmp999=84;MYCOPY(dummy7_cfcd)} // 0948:3b4d
    {db tmp999=13;MYCOPY(dummy7_cfce)} // 0948:3b4e
    {db tmp999=76;MYCOPY(dummy7_cfcf)} // 0948:3b4f
    {db tmp999=79;MYCOPY(dummy7_cfd0)} // 0948:3b50
    {db tmp999=79;MYCOPY(dummy7_cfd1)} // 0948:3b51
    {db tmp999=75;MYCOPY(dummy7_cfd2)} // 0948:3b52
    {db tmp999=83;MYCOPY(dummy7_cfd3)} // 0948:3b53
    {db tmp999=32;MYCOPY(dummy7_cfd4)} // 0948:3b54
    {db tmp999=70;MYCOPY(dummy7_cfd5)} // 0948:3b55
    {db tmp999=65;MYCOPY(dummy7_cfd6)} // 0948:3b56
    {db tmp999=77;MYCOPY(dummy7_cfd7)} // 0948:3b57
    {db tmp999=73;MYCOPY(dummy7_cfd8)} // 0948:3b58
    {db tmp999=76;MYCOPY(dummy7_cfd9)} // 0948:3b59
    {db tmp999=73;MYCOPY(dummy7_cfda)} // 0948:3b5a
    {db tmp999=65;MYCOPY(dummy7_cfdb)} // 0948:3b5b
    {db tmp999=82;MYCOPY(dummy7_cfdc)} // 0948:3b5c
    {db tmp999=46;MYCOPY(dummy7_cfdd)} // 0948:3b5d
    {db tmp999=21;MYCOPY(unk_1b5bf)} // 0948:3b5f
    {db tmp999[32]={5,71,65,77,69,32,68,69,83,73,71,78,32,66,89,13,13,83,73,76,73,67,79,78,32,65,78,68,32,83,89,78};MYCOPY(dummy7_cfe0)} // 0948:3b60
    {db tmp999=65;MYCOPY(dummy7_d000)} // 0948:3b80
    {db tmp999=80;MYCOPY(dummy7_d001)} // 0948:3b81
    {db tmp999=83;MYCOPY(dummy7_d002)} // 0948:3b82
    {db tmp999=69;MYCOPY(dummy7_d003)} // 0948:3b83
    {db tmp999=14;MYCOPY(unk_1b5e5)} // 0948:3b85
    {db tmp999[32]={7,80,82,79,68,85,67,69,82,83,13,13,65,76,76,69,78,32,65,68,72,65,77,13,65,76,65,78,32,80,65,86};MYCOPY(dummy7_d006)} // 0948:3b86
    {db tmp999=76;MYCOPY(dummy7_d026)} // 0948:3ba6
    {db tmp999=73;MYCOPY(dummy7_d027)} // 0948:3ba7
    {db tmp999=83;MYCOPY(dummy7_d028)} // 0948:3ba8
    {db tmp999=72;MYCOPY(dummy7_d029)} // 0948:3ba9
    {db tmp999=13;MYCOPY(dummy7_d02a)} // 0948:3baa
    {db tmp999=83;MYCOPY(dummy7_d02b)} // 0948:3bab
    {db tmp999=84;MYCOPY(dummy7_d02c)} // 0948:3bac
    {db tmp999=69;MYCOPY(dummy7_d02d)} // 0948:3bad
    {db tmp999=86;MYCOPY(dummy7_d02e)} // 0948:3bae
    {db tmp999=69;MYCOPY(dummy7_d02f)} // 0948:3baf
    {db tmp999=32;MYCOPY(dummy7_d030)} // 0948:3bb0
    {db tmp999=78;MYCOPY(dummy7_d031)} // 0948:3bb1
    {db tmp999=71;MYCOPY(dummy7_d032)} // 0948:3bb2
    {db tmp999=85;MYCOPY(dummy7_d033)} // 0948:3bb3
    {db tmp999=89;MYCOPY(dummy7_d034)} // 0948:3bb4
    {db tmp999=69;MYCOPY(dummy7_d035)} // 0948:3bb5
    {db tmp999=78;MYCOPY(dummy7_d036)} // 0948:3bb6
    {db tmp999=20;MYCOPY(unk_1b618)} // 0948:3bb8
    {db tmp999[32]={5,69,88,69,67,85,84,73,86,69,32,80,82,79,68,85,67,69,82,13,13,66,82,73,65,78,32,70,65,82,71,79};MYCOPY(dummy7_d039)} // 0948:3bb9
    {db tmp999=15;MYCOPY(unk_1b63a)} // 0948:3bda
    {db tmp999=5;MYCOPY(dummy7_d05b)} // 0948:3bdb
    {db tmp999=76;MYCOPY(dummy7_d05c)} // 0948:3bdc
    {db tmp999=69;MYCOPY(dummy7_d05d)} // 0948:3bdd
    {db tmp999=86;MYCOPY(dummy7_d05e)} // 0948:3bde
    {db tmp999=69;MYCOPY(dummy7_d05f)} // 0948:3bdf
    {db tmp999=76;MYCOPY(dummy7_d060)} // 0948:3be0
    {db tmp999=32;MYCOPY(dummy7_d061)} // 0948:3be1
    {db tmp999=68;MYCOPY(dummy7_d062)} // 0948:3be2
    {db tmp999=69;MYCOPY(dummy7_d063)} // 0948:3be3
    {db tmp999=83;MYCOPY(dummy7_d064)} // 0948:3be4
    {db tmp999=73;MYCOPY(dummy7_d065)} // 0948:3be5
    {db tmp999=71;MYCOPY(dummy7_d066)} // 0948:3be6
    {db tmp999=78;MYCOPY(dummy7_d067)} // 0948:3be7
    {db tmp999=13;MYCOPY(dummy7_d068)} // 0948:3be8
    {db tmp999=13;MYCOPY(dummy7_d069)} // 0948:3be9
    {db tmp999=82;MYCOPY(dummy7_d06a)} // 0948:3bea
    {db tmp999=79;MYCOPY(dummy7_d06b)} // 0948:3beb
    {db tmp999=78;MYCOPY(dummy7_d06c)} // 0948:3bec
    {db tmp999=65;MYCOPY(dummy7_d06d)} // 0948:3bed
    {db tmp999=76;MYCOPY(dummy7_d06e)} // 0948:3bee
    {db tmp999=68;MYCOPY(dummy7_d06f)} // 0948:3bef
    {db tmp999=32;MYCOPY(dummy7_d070)} // 0948:3bf0
    {db tmp999=77;MYCOPY(dummy7_d071)} // 0948:3bf1
    {db tmp999=73;MYCOPY(dummy7_d072)} // 0948:3bf2
    {db tmp999=76;MYCOPY(dummy7_d073)} // 0948:3bf3
    {db tmp999=76;MYCOPY(dummy7_d074)} // 0948:3bf4
    {db tmp999=65;MYCOPY(dummy7_d075)} // 0948:3bf5
    {db tmp999=82;MYCOPY(dummy7_d076)} // 0948:3bf6
    {db tmp999=17;MYCOPY(unk_1b658)} // 0948:3bf8
    {db tmp999[32]={6,80,67,32,80,82,79,71,82,65,77,77,73,78,71,13,13,66,82,89,65,78,32,87,65,84,69,82,83,13,80,65};MYCOPY(dummy7_d079)} // 0948:3bf9
    {db tmp999=84;MYCOPY(dummy7_d099)} // 0948:3c19
    {db tmp999=82;MYCOPY(dummy7_d09a)} // 0948:3c1a
    {db tmp999=73;MYCOPY(dummy7_d09b)} // 0948:3c1b
    {db tmp999=67;MYCOPY(dummy7_d09c)} // 0948:3c1c
    {db tmp999=75;MYCOPY(dummy7_d09d)} // 0948:3c1d
    {db tmp999=32;MYCOPY(dummy7_d09e)} // 0948:3c1e
    {db tmp999=87;MYCOPY(dummy7_d09f)} // 0948:3c1f
    {db tmp999=89;MYCOPY(dummy7_d0a0)} // 0948:3c20
    {db tmp999=65;MYCOPY(dummy7_d0a1)} // 0948:3c21
    {db tmp999=84;MYCOPY(dummy7_d0a2)} // 0948:3c22
    {db tmp999=84;MYCOPY(dummy7_d0a3)} // 0948:3c23
    {db tmp999=23;MYCOPY(unk_1b685)} // 0948:3c25
    {db tmp999[32]={7,79,82,73,71,73,78,65,76,32,80,82,79,71,82,65,77,77,73,78,71,13,13,77,73,67,72,65,69,76,32,77};MYCOPY(dummy7_d0a6)} // 0948:3c26
    {db tmp999[32]={79,82,72,65,73,77,69,13,70,82,65,78,75,32,80,69,65,82,67,69,13,65,76,76,69,78,32,65,68,72,65,77};MYCOPY(dummy7_d0c6)} // 0948:3c46
    {db tmp999=29;MYCOPY(unk_1b6c7)} // 0948:3c67
    {db tmp999[32]={8,65,68,68,73,84,73,79,78,65,76,32,83,78,69,83,32,80,82,79,71,82,65,77,77,73,78,71,13,13,80,65};MYCOPY(dummy7_d0e8)} // 0948:3c68
    {db tmp999[32]={84,82,73,67,75,32,87,89,65,84,84,13,74,73,77,32,83,80,82,79,85,76,13,77,73,67,72,65,69,76,32,83};MYCOPY(dummy7_d108)} // 0948:3c88
    {db tmp999=84;MYCOPY(dummy7_d128)} // 0948:3ca8
    {db tmp999=82;MYCOPY(dummy7_d129)} // 0948:3ca9
    {db tmp999=65;MYCOPY(dummy7_d12a)} // 0948:3caa
    {db tmp999=71;MYCOPY(dummy7_d12b)} // 0948:3cab
    {db tmp999=69;MYCOPY(dummy7_d12c)} // 0948:3cac
    {db tmp999=89;MYCOPY(dummy7_d12d)} // 0948:3cad
    {db tmp999=13;MYCOPY(dummy7_d12e)} // 0948:3cae
    {db tmp999=74;MYCOPY(dummy7_d12f)} // 0948:3caf
    {db tmp999=79;MYCOPY(dummy7_d130)} // 0948:3cb0
    {db tmp999=72;MYCOPY(dummy7_d131)} // 0948:3cb1
    {db tmp999=78;MYCOPY(dummy7_d132)} // 0948:3cb2
    {db tmp999=32;MYCOPY(dummy7_d133)} // 0948:3cb3
    {db tmp999=80;MYCOPY(dummy7_d134)} // 0948:3cb4
    {db tmp999=72;MYCOPY(dummy7_d135)} // 0948:3cb5
    {db tmp999=73;MYCOPY(dummy7_d136)} // 0948:3cb6
    {db tmp999=76;MYCOPY(dummy7_d137)} // 0948:3cb7
    {db tmp999=73;MYCOPY(dummy7_d138)} // 0948:3cb8
    {db tmp999=80;MYCOPY(dummy7_d139)} // 0948:3cb9
    {db tmp999=32;MYCOPY(dummy7_d13a)} // 0948:3cba
    {db tmp999=66;MYCOPY(dummy7_d13b)} // 0948:3cbb
    {db tmp999=82;MYCOPY(dummy7_d13c)} // 0948:3cbc
    {db tmp999=73;MYCOPY(dummy7_d13d)} // 0948:3cbd
    {db tmp999=84;MYCOPY(dummy7_d13e)} // 0948:3cbe
    {db tmp999=84;MYCOPY(dummy7_d13f)} // 0948:3cbf
    {db tmp999=17;MYCOPY(unk_1b721)} // 0948:3cc1
    {db tmp999[32]={9,65,82,84,87,79,82,75,13,13,74,79,69,89,82,65,89,32,72,65,76,76,13,82,79,78,65,76,68,32,77,73};MYCOPY(dummy7_d142)} // 0948:3cc2
    {db tmp999[32]={76,76,65,82,13,67,76,89,68,69,32,77,65,84,83,85,77,79,84,79,13,83,65,77,87,73,83,69,32,68,73,68};MYCOPY(dummy7_d162)} // 0948:3ce2
    {db tmp999=73;MYCOPY(dummy7_d182)} // 0948:3d02
    {db tmp999=69;MYCOPY(dummy7_d183)} // 0948:3d03
    {db tmp999=82;MYCOPY(dummy7_d184)} // 0948:3d04
    {db tmp999=13;MYCOPY(dummy7_d185)} // 0948:3d05
    {db tmp999=74;MYCOPY(dummy7_d186)} // 0948:3d06
    {db tmp999=65;MYCOPY(dummy7_d187)} // 0948:3d07
    {db tmp999=83;MYCOPY(dummy7_d188)} // 0948:3d08
    {db tmp999=79;MYCOPY(dummy7_d189)} // 0948:3d09
    {db tmp999=78;MYCOPY(dummy7_d18a)} // 0948:3d0a
    {db tmp999=32;MYCOPY(dummy7_d18b)} // 0948:3d0b
    {db tmp999=77;MYCOPY(dummy7_d18c)} // 0948:3d0c
    {db tmp999=65;MYCOPY(dummy7_d18d)} // 0948:3d0d
    {db tmp999=71;MYCOPY(dummy7_d18e)} // 0948:3d0e
    {db tmp999=78;MYCOPY(dummy7_d18f)} // 0948:3d0f
    {db tmp999=69;MYCOPY(dummy7_d190)} // 0948:3d10
    {db tmp999=83;MYCOPY(dummy7_d191)} // 0948:3d11
    {db tmp999=83;MYCOPY(dummy7_d192)} // 0948:3d12
    {db tmp999=20;MYCOPY(unk_1b774)} // 0948:3d14
    {db tmp999[32]={8,65,68,68,73,84,73,79,78,65,76,32,65,82,84,87,79,82,75,13,13,83,84,85,32,82,79,83,69,13,84,79};MYCOPY(dummy7_d195)} // 0948:3d15
    {db tmp999[32]={68,68,32,67,65,77,65,83,84,65,13,67,72,69,82,89,76,32,65,85,83,84,73,78,13,83,80,69,78,67,69,82};MYCOPY(dummy7_d1b5)} // 0948:3d35
    {db tmp999=32;MYCOPY(dummy7_d1d5)} // 0948:3d55
    {db tmp999=75;MYCOPY(dummy7_d1d6)} // 0948:3d56
    {db tmp999=73;MYCOPY(dummy7_d1d7)} // 0948:3d57
    {db tmp999=80;MYCOPY(dummy7_d1d8)} // 0948:3d58
    {db tmp999=69;MYCOPY(dummy7_d1d9)} // 0948:3d59
    {db tmp999=17;MYCOPY(unk_1b7bb)} // 0948:3d5b
    {db tmp999[32]={8,83,79,85,78,68,32,65,78,68,32,77,85,83,73,67,13,13,68,65,86,69,32,66,69,65,78,13,65,76,65,78};MYCOPY(dummy7_d1dc)} // 0948:3d5c
    {db tmp999[32]={32,80,82,69,77,83,69,76,65,65,82,13,71,76,69,78,78,32,83,84,65,70,70,79,82,68,13,82,73,67,75,32};MYCOPY(dummy7_d1fc)} // 0948:3d7c
    {db tmp999=74;MYCOPY(dummy7_d21c)} // 0948:3d9c
    {db tmp999=65;MYCOPY(dummy7_d21d)} // 0948:3d9d
    {db tmp999=67;MYCOPY(dummy7_d21e)} // 0948:3d9e
    {db tmp999=75;MYCOPY(dummy7_d21f)} // 0948:3d9f
    {db tmp999=83;MYCOPY(dummy7_d220)} // 0948:3da0
    {db tmp999=79;MYCOPY(dummy7_d221)} // 0948:3da1
    {db tmp999=78;MYCOPY(dummy7_d222)} // 0948:3da2
    {db tmp999=23;MYCOPY(unk_1b804)} // 0948:3da4
    {db tmp999[32]={9,80,76,65,89,32,84,69,83,84,13,13,74,65,67,79,66,32,82,46,32,66,85,67,72,69,82,84,44,32,73,73};MYCOPY(dummy7_d225)} // 0948:3da5
    {db tmp999[32]={73,13,74,69,82,69,77,89,32,83,46,32,66,65,82,78,69,83,13,82,79,68,78,69,89,32,78,46,32,82,69,76};MYCOPY(dummy7_d245)} // 0948:3dc5
    {db tmp999=79;MYCOPY(dummy7_d265)} // 0948:3de5
    {db tmp999=83;MYCOPY(dummy7_d266)} // 0948:3de6
    {db tmp999=65;MYCOPY(dummy7_d267)} // 0948:3de7
    {db tmp999=13;MYCOPY(dummy7_d268)} // 0948:3de8
    {db tmp999=80;MYCOPY(dummy7_d269)} // 0948:3de9
    {db tmp999=69;MYCOPY(dummy7_d26a)} // 0948:3dea
    {db tmp999=84;MYCOPY(dummy7_d26b)} // 0948:3deb
    {db tmp999=69;MYCOPY(dummy7_d26c)} // 0948:3dec
    {db tmp999=82;MYCOPY(dummy7_d26d)} // 0948:3ded
    {db tmp999=32;MYCOPY(dummy7_d26e)} // 0948:3dee
    {db tmp999=82;MYCOPY(dummy7_d26f)} // 0948:3def
    {db tmp999=73;MYCOPY(dummy7_d270)} // 0948:3df0
    {db tmp999=67;MYCOPY(dummy7_d271)} // 0948:3df1
    {db tmp999=69;MYCOPY(dummy7_d272)} // 0948:3df2
    {db tmp999=13;MYCOPY(dummy7_d273)} // 0948:3df3
    {db tmp999=67;MYCOPY(dummy7_d274)} // 0948:3df4
    {db tmp999=72;MYCOPY(dummy7_d275)} // 0948:3df5
    {db tmp999=82;MYCOPY(dummy7_d276)} // 0948:3df6
    {db tmp999=73;MYCOPY(dummy7_d277)} // 0948:3df7
    {db tmp999=83;MYCOPY(dummy7_d278)} // 0948:3df8
    {db tmp999=32;MYCOPY(dummy7_d279)} // 0948:3df9
    {db tmp999=66;MYCOPY(dummy7_d27a)} // 0948:3dfa
    {db tmp999=69;MYCOPY(dummy7_d27b)} // 0948:3dfb
    {db tmp999=78;MYCOPY(dummy7_d27c)} // 0948:3dfc
    {db tmp999=83;MYCOPY(dummy7_d27d)} // 0948:3dfd
    {db tmp999=79;MYCOPY(dummy7_d27e)} // 0948:3dfe
    {db tmp999=78;MYCOPY(dummy7_d27f)} // 0948:3dff
    {db tmp999=19;MYCOPY(unk_1b861)} // 0948:3e01
    {db tmp999[32]={8,77,79,82,69,32,80,76,65,89,32,84,69,83,84,13,13,84,72,69,79,68,79,82,69,32,66,65,78,67,82,79};MYCOPY(dummy7_d282)} // 0948:3e02
    {db tmp999[32]={70,84,13,83,67,79,84,84,32,67,65,77,80,66,69,76,76,13,68,69,65,78,32,83,67,72,85,76,84,69,13,65};MYCOPY(dummy7_d2a2)} // 0948:3e22
    {db tmp999[32]={78,68,32,69,86,69,82,89,79,78,69,32,69,76,83,69,0,14,6,84,72,65,78,75,83,32,84,79,13,13,83,67};MYCOPY(dummy7_d2c2)} // 0948:3e42
    {db tmp999=79;MYCOPY(dummy7_d2e2)} // 0948:3e62
    {db tmp999=84;MYCOPY(dummy7_d2e3)} // 0948:3e63
    {db tmp999=84;MYCOPY(dummy7_d2e4)} // 0948:3e64
    {db tmp999=32;MYCOPY(dummy7_d2e5)} // 0948:3e65
    {db tmp999=66;MYCOPY(dummy7_d2e6)} // 0948:3e66
    {db tmp999=69;MYCOPY(dummy7_d2e7)} // 0948:3e67
    {db tmp999=78;MYCOPY(dummy7_d2e8)} // 0948:3e68
    {db tmp999=78;MYCOPY(dummy7_d2e9)} // 0948:3e69
    {db tmp999=73;MYCOPY(dummy7_d2ea)} // 0948:3e6a
    {db tmp999=69;MYCOPY(dummy7_d2eb)} // 0948:3e6b
    {db tmp999=13;MYCOPY(dummy7_d2ec)} // 0948:3e6c
    {db tmp999=83;MYCOPY(dummy7_d2ed)} // 0948:3e6d
    {db tmp999=67;MYCOPY(dummy7_d2ee)} // 0948:3e6e
    {db tmp999=79;MYCOPY(dummy7_d2ef)} // 0948:3e6f
    {db tmp999=84;MYCOPY(dummy7_d2f0)} // 0948:3e70
    {db tmp999=84;MYCOPY(dummy7_d2f1)} // 0948:3e71
    {db tmp999=32;MYCOPY(dummy7_d2f2)} // 0948:3e72
    {db tmp999=77;MYCOPY(dummy7_d2f3)} // 0948:3e73
    {db tmp999=73;MYCOPY(dummy7_d2f4)} // 0948:3e74
    {db tmp999=76;MYCOPY(dummy7_d2f5)} // 0948:3e75
    {db tmp999=76;MYCOPY(dummy7_d2f6)} // 0948:3e76
    {db tmp999=83;MYCOPY(dummy7_d2f7)} // 0948:3e77
    {db tmp999=21;MYCOPY(unk_1b8d9)} // 0948:3e79
    {db tmp999[32]={5,32,32,32,32,32,87,65,84,67,72,32,70,79,82,13,13,84,72,69,32,76,79,83,84,32,86,73,75,73,78,71};MYCOPY(dummy7_d2fa)} // 0948:3e7a
    {db tmp999=83;MYCOPY(dummy7_d31a)} // 0948:3e9a
    {db tmp999=32;MYCOPY(dummy7_d31b)} // 0948:3e9b
    {db tmp999=73;MYCOPY(dummy7_d31c)} // 0948:3e9c
    {db tmp999=73;MYCOPY(dummy7_d31d)} // 0948:3e9d
    {db tmp999=13;MYCOPY(unk_1b8ff)} // 0948:3e9f
    {db tmp999=4;MYCOPY(dummy7_d320)} // 0948:3ea0
    {db tmp999=72;MYCOPY(dummy7_d321)} // 0948:3ea1
    {db tmp999=65;MYCOPY(dummy7_d322)} // 0948:3ea2
    {db tmp999=86;MYCOPY(dummy7_d323)} // 0948:3ea3
    {db tmp999=69;MYCOPY(dummy7_d324)} // 0948:3ea4
    {db tmp999=32;MYCOPY(dummy7_d325)} // 0948:3ea5
    {db tmp999=65;MYCOPY(dummy7_d326)} // 0948:3ea6
    {db tmp999=32;MYCOPY(dummy7_d327)} // 0948:3ea7
    {db tmp999=78;MYCOPY(dummy7_d328)} // 0948:3ea8
    {db tmp999=73;MYCOPY(dummy7_d329)} // 0948:3ea9
    {db tmp999=67;MYCOPY(dummy7_d32a)} // 0948:3eaa
    {db tmp999=69;MYCOPY(dummy7_d32b)} // 0948:3eab
    {db tmp999=13;MYCOPY(dummy7_d32c)} // 0948:3eac
    {db tmp999=68;MYCOPY(dummy7_d32d)} // 0948:3ead
    {db tmp999=65;MYCOPY(dummy7_d32e)} // 0948:3eae
    {db tmp999=89;MYCOPY(dummy7_d32f)} // 0948:3eaf
    {db tmp999=44;MYCOPY(dummy7_d330)} // 0948:3eb0
    {db tmp999=32;MYCOPY(dummy7_d331)} // 0948:3eb1
    {db tmp999=72;MYCOPY(dummy7_d332)} // 0948:3eb2
    {db tmp999=79;MYCOPY(dummy7_d333)} // 0948:3eb3
    {db tmp999=78;MYCOPY(dummy7_d334)} // 0948:3eb4
    {db tmp999=69;MYCOPY(dummy7_d335)} // 0948:3eb5
    {db tmp999=89;MYCOPY(dummy7_d336)} // 0948:3eb6
    {db tmp999=46;MYCOPY(dummy7_d337)} // 0948:3eb7
    {db tmp999=10;MYCOPY(unk_1b919)} // 0948:3eb9
    {db tmp999=3;MYCOPY(dummy7_d33a)} // 0948:3eba
    {db tmp999=77;MYCOPY(dummy7_d33b)} // 0948:3ebb
    {db tmp999=89;MYCOPY(dummy7_d33c)} // 0948:3ebc
    {db tmp999=32;MYCOPY(dummy7_d33d)} // 0948:3ebd
    {db tmp999=72;MYCOPY(dummy7_d33e)} // 0948:3ebe
    {db tmp999=69;MYCOPY(dummy7_d33f)} // 0948:3ebf
    {db tmp999=82;MYCOPY(dummy7_d340)} // 0948:3ec0
    {db tmp999=79;MYCOPY(dummy7_d341)} // 0948:3ec1
    {db tmp999=33;MYCOPY(dummy7_d342)} // 0948:3ec2
    {db tmp999=23;MYCOPY(unk_1b924)} // 0948:3ec4
    {db tmp999=3;MYCOPY(dummy7_d345)} // 0948:3ec5
    {db tmp999=87;MYCOPY(dummy7_d346)} // 0948:3ec6
    {db tmp999=72;MYCOPY(dummy7_d347)} // 0948:3ec7
    {db tmp999=69;MYCOPY(dummy7_d348)} // 0948:3ec8
    {db tmp999=87;MYCOPY(dummy7_d349)} // 0948:3ec9
    {db tmp999=33;MYCOPY(dummy7_d34a)} // 0948:3eca
    {db tmp999=32;MYCOPY(dummy7_d34b)} // 0948:3ecb
    {db tmp999=84;MYCOPY(dummy7_d34c)} // 0948:3ecc
    {db tmp999=72;MYCOPY(dummy7_d34d)} // 0948:3ecd
    {db tmp999=65;MYCOPY(dummy7_d34e)} // 0948:3ece
    {db tmp999=84;MYCOPY(dummy7_d34f)} // 0948:3ecf
    {db tmp999=32;MYCOPY(dummy7_d350)} // 0948:3ed0
    {db tmp999=87;MYCOPY(dummy7_d351)} // 0948:3ed1
    {db tmp999=65;MYCOPY(dummy7_d352)} // 0948:3ed2
    {db tmp999=83;MYCOPY(dummy7_d353)} // 0948:3ed3
    {db tmp999=32;MYCOPY(dummy7_d354)} // 0948:3ed4
    {db tmp999=67;MYCOPY(dummy7_d355)} // 0948:3ed5
    {db tmp999=76;MYCOPY(dummy7_d356)} // 0948:3ed6
    {db tmp999=79;MYCOPY(dummy7_d357)} // 0948:3ed7
    {db tmp999=83;MYCOPY(dummy7_d358)} // 0948:3ed8
    {db tmp999=69;MYCOPY(dummy7_d359)} // 0948:3ed9
    {db tmp999=33;MYCOPY(dummy7_d35a)} // 0948:3eda
    {db tmp999=24;MYCOPY(unk_1b93c)} // 0948:3edc
    {db tmp999[32]={5,78,79,87,32,76,69,84,39,83,32,74,85,77,80,32,73,78,32,84,72,65,84,13,84,73,77,69,32,68,79,79};MYCOPY(dummy7_d35d)} // 0948:3edd
    {db tmp999[32]={82,32,65,78,68,32,71,69,84,32,84,72,69,13,72,69,67,75,32,79,85,84,32,79,70,32,72,69,82,69,46,0};MYCOPY(dummy7_d37d)} // 0948:3efd
    {db tmp999=22;MYCOPY(unk_1b97d)} // 0948:3f1d
    {db tmp999[32]={4,87,65,73,84,46,32,32,73,32,84,72,73,78,75,32,73,32,67,65,78,13,70,76,89,32,84,72,73,83,32,83};MYCOPY(dummy7_d39e)} // 0948:3f1e
    {db tmp999=72;MYCOPY(dummy7_d3be)} // 0948:3f3e
    {db tmp999=73;MYCOPY(dummy7_d3bf)} // 0948:3f3f
    {db tmp999=80;MYCOPY(dummy7_d3c0)} // 0948:3f40
    {db tmp999=46;MYCOPY(dummy7_d3c1)} // 0948:3f41
    {db tmp999=25;MYCOPY(unk_1b9a3)} // 0948:3f43
    {db tmp999[32]={4,78,79,32,87,65,89,44,32,79,76,65,70,33,32,32,89,79,85,32,67,65,78,13,66,65,82,69,76,89,32,70};MYCOPY(dummy7_d3c4)} // 0948:3f44
    {db tmp999=76;MYCOPY(dummy7_d3e4)} // 0948:3f64
    {db tmp999=89;MYCOPY(dummy7_d3e5)} // 0948:3f65
    {db tmp999=32;MYCOPY(dummy7_d3e6)} // 0948:3f66
    {db tmp999=89;MYCOPY(dummy7_d3e7)} // 0948:3f67
    {db tmp999=79;MYCOPY(dummy7_d3e8)} // 0948:3f68
    {db tmp999=85;MYCOPY(dummy7_d3e9)} // 0948:3f69
    {db tmp999=82;MYCOPY(dummy7_d3ea)} // 0948:3f6a
    {db tmp999=32;MYCOPY(dummy7_d3eb)} // 0948:3f6b
    {db tmp999=83;MYCOPY(dummy7_d3ec)} // 0948:3f6c
    {db tmp999=72;MYCOPY(dummy7_d3ed)} // 0948:3f6d
    {db tmp999=73;MYCOPY(dummy7_d3ee)} // 0948:3f6e
    {db tmp999=69;MYCOPY(dummy7_d3ef)} // 0948:3f6f
    {db tmp999=76;MYCOPY(dummy7_d3f0)} // 0948:3f70
    {db tmp999=68;MYCOPY(dummy7_d3f1)} // 0948:3f71
    {db tmp999=46;MYCOPY(dummy7_d3f2)} // 0948:3f72
    {db tmp999=11;MYCOPY(unk_1b9d4)} // 0948:3f74
    {db tmp999=3;MYCOPY(dummy7_d3f5)} // 0948:3f75
    {db tmp999=84;MYCOPY(dummy7_d3f6)} // 0948:3f76
    {db tmp999=82;MYCOPY(dummy7_d3f7)} // 0948:3f77
    {db tmp999=85;MYCOPY(dummy7_d3f8)} // 0948:3f78
    {db tmp999=83;MYCOPY(dummy7_d3f9)} // 0948:3f79
    {db tmp999=84;MYCOPY(dummy7_d3fa)} // 0948:3f7a
    {db tmp999=32;MYCOPY(dummy7_d3fb)} // 0948:3f7b
    {db tmp999=77;MYCOPY(dummy7_d3fc)} // 0948:3f7c
    {db tmp999=69;MYCOPY(dummy7_d3fd)} // 0948:3f7d
    {db tmp999=46;MYCOPY(dummy7_d3fe)} // 0948:3f7e
    {db tmp999=16;MYCOPY(unk_1b9e0)} // 0948:3f80
    {db tmp999=4;MYCOPY(dummy7_d401)} // 0948:3f81
    {db tmp999=73;MYCOPY(dummy7_d402)} // 0948:3f82
    {db tmp999=39;MYCOPY(dummy7_d403)} // 0948:3f83
    {db tmp999=76;MYCOPY(dummy7_d404)} // 0948:3f84
    {db tmp999=76;MYCOPY(dummy7_d405)} // 0948:3f85
    {db tmp999=32;MYCOPY(dummy7_d406)} // 0948:3f86
    {db tmp999=74;MYCOPY(dummy7_d407)} // 0948:3f87
    {db tmp999=85;MYCOPY(dummy7_d408)} // 0948:3f88
    {db tmp999=83;MYCOPY(dummy7_d409)} // 0948:3f89
    {db tmp999=84;MYCOPY(dummy7_d40a)} // 0948:3f8a
    {db tmp999=32;MYCOPY(dummy7_d40b)} // 0948:3f8b
    {db tmp999=84;MYCOPY(dummy7_d40c)} // 0948:3f8c
    {db tmp999=85;MYCOPY(dummy7_d40d)} // 0948:3f8d
    {db tmp999=82;MYCOPY(dummy7_d40e)} // 0948:3f8e
    {db tmp999=78;MYCOPY(dummy7_d40f)} // 0948:3f8f
    {db tmp999=13;MYCOPY(dummy7_d410)} // 0948:3f90
    {db tmp999=84;MYCOPY(dummy7_d411)} // 0948:3f91
    {db tmp999=72;MYCOPY(dummy7_d412)} // 0948:3f92
    {db tmp999=73;MYCOPY(dummy7_d413)} // 0948:3f93
    {db tmp999=83;MYCOPY(dummy7_d414)} // 0948:3f94
    {db tmp999=32;MYCOPY(dummy7_d415)} // 0948:3f95
    {db tmp999=75;MYCOPY(dummy7_d416)} // 0948:3f96
    {db tmp999=78;MYCOPY(dummy7_d417)} // 0948:3f97
    {db tmp999=79;MYCOPY(dummy7_d418)} // 0948:3f98
    {db tmp999=66;MYCOPY(dummy7_d419)} // 0948:3f99
    {db tmp999=46;MYCOPY(dummy7_d41a)} // 0948:3f9a
    {db tmp999=46;MYCOPY(dummy7_d41b)} // 0948:3f9b
    {db tmp999=46;MYCOPY(dummy7_d41c)} // 0948:3f9c
    {db tmp999=21;MYCOPY(unk_1b9fe)} // 0948:3f9e
    {db tmp999=3;MYCOPY(dummy7_d41f)} // 0948:3f9f
    {db tmp999=70;MYCOPY(dummy7_d420)} // 0948:3fa0
    {db tmp999=76;MYCOPY(dummy7_d421)} // 0948:3fa1
    {db tmp999=73;MYCOPY(dummy7_d422)} // 0948:3fa2
    {db tmp999=80;MYCOPY(dummy7_d423)} // 0948:3fa3
    {db tmp999=32;MYCOPY(dummy7_d424)} // 0948:3fa4
    {db tmp999=84;MYCOPY(dummy7_d425)} // 0948:3fa5
    {db tmp999=72;MYCOPY(dummy7_d426)} // 0948:3fa6
    {db tmp999=73;MYCOPY(dummy7_d427)} // 0948:3fa7
    {db tmp999=83;MYCOPY(dummy7_d428)} // 0948:3fa8
    {db tmp999=32;MYCOPY(dummy7_d429)} // 0948:3fa9
    {db tmp999=83;MYCOPY(dummy7_d42a)} // 0948:3faa
    {db tmp999=87;MYCOPY(dummy7_d42b)} // 0948:3fab
    {db tmp999=73;MYCOPY(dummy7_d42c)} // 0948:3fac
    {db tmp999=84;MYCOPY(dummy7_d42d)} // 0948:3fad
    {db tmp999=67;MYCOPY(dummy7_d42e)} // 0948:3fae
    {db tmp999=72;MYCOPY(dummy7_d42f)} // 0948:3faf
    {db tmp999=46;MYCOPY(dummy7_d430)} // 0948:3fb0
    {db tmp999=46;MYCOPY(dummy7_d431)} // 0948:3fb1
    {db tmp999=46;MYCOPY(dummy7_d432)} // 0948:3fb2
    {db tmp999=24;MYCOPY(unk_1ba14)} // 0948:3fb4
    {db tmp999=3;MYCOPY(dummy7_d435)} // 0948:3fb5
    {db tmp999=65;MYCOPY(dummy7_d436)} // 0948:3fb6
    {db tmp999=78;MYCOPY(dummy7_d437)} // 0948:3fb7
    {db tmp999=68;MYCOPY(dummy7_d438)} // 0948:3fb8
    {db tmp999=32;MYCOPY(dummy7_d439)} // 0948:3fb9
    {db tmp999=80;MYCOPY(dummy7_d43a)} // 0948:3fba
    {db tmp999=82;MYCOPY(dummy7_d43b)} // 0948:3fbb
    {db tmp999=69;MYCOPY(dummy7_d43c)} // 0948:3fbc
    {db tmp999=83;MYCOPY(dummy7_d43d)} // 0948:3fbd
    {db tmp999=83;MYCOPY(dummy7_d43e)} // 0948:3fbe
    {db tmp999=32;MYCOPY(dummy7_d43f)} // 0948:3fbf
    {db tmp999=84;MYCOPY(dummy7_d440)} // 0948:3fc0
    {db tmp999=72;MYCOPY(dummy7_d441)} // 0948:3fc1
    {db tmp999=73;MYCOPY(dummy7_d442)} // 0948:3fc2
    {db tmp999=83;MYCOPY(dummy7_d443)} // 0948:3fc3
    {db tmp999=32;MYCOPY(dummy7_d444)} // 0948:3fc4
    {db tmp999=66;MYCOPY(dummy7_d445)} // 0948:3fc5
    {db tmp999=85;MYCOPY(dummy7_d446)} // 0948:3fc6
    {db tmp999=84;MYCOPY(dummy7_d447)} // 0948:3fc7
    {db tmp999=84;MYCOPY(dummy7_d448)} // 0948:3fc8
    {db tmp999=79;MYCOPY(dummy7_d449)} // 0948:3fc9
    {db tmp999=78;MYCOPY(dummy7_d44a)} // 0948:3fca
    {db tmp999=46;MYCOPY(dummy7_d44b)} // 0948:3fcb
    {db tmp999=24;MYCOPY(unk_1ba2d)} // 0948:3fcd
    {db tmp999[32]={4,83,69,76,70,32,68,69,83,84,82,85,67,84,32,83,69,81,85,69,78,67,69,13,72,65,83,32,66,69,69,78};MYCOPY(dummy7_d44e)} // 0948:3fce
    {db tmp999=32;MYCOPY(dummy7_d46e)} // 0948:3fee
    {db tmp999=73;MYCOPY(dummy7_d46f)} // 0948:3fef
    {db tmp999=78;MYCOPY(dummy7_d470)} // 0948:3ff0
    {db tmp999=73;MYCOPY(dummy7_d471)} // 0948:3ff1
    {db tmp999=84;MYCOPY(dummy7_d472)} // 0948:3ff2
    {db tmp999=73;MYCOPY(dummy7_d473)} // 0948:3ff3
    {db tmp999=65;MYCOPY(dummy7_d474)} // 0948:3ff4
    {db tmp999=84;MYCOPY(dummy7_d475)} // 0948:3ff5
    {db tmp999=69;MYCOPY(dummy7_d476)} // 0948:3ff6
    {db tmp999=68;MYCOPY(dummy7_d477)} // 0948:3ff7
    {db tmp999=46;MYCOPY(dummy7_d478)} // 0948:3ff8
    {db tmp999=18;MYCOPY(unk_1ba5a)} // 0948:3ffa
    {db tmp999[32]={4,53,32,83,69,67,79,78,68,83,32,84,73,76,76,13,83,69,76,70,32,68,69,83,84,82,85,67,84,46,46,46};MYCOPY(dummy7_d47b)} // 0948:3ffb
    {db tmp999=25;MYCOPY(unk_1ba7c)} // 0948:401c
    {db tmp999[32]={4,71,85,89,83,44,32,73,32,84,72,73,78,75,32,87,69,32,83,72,79,85,76,68,13,84,65,75,69,32,84,72};MYCOPY(dummy7_d49d)} // 0948:401d
    {db tmp999=69;MYCOPY(dummy7_d4bd)} // 0948:403d
    {db tmp999=32;MYCOPY(dummy7_d4be)} // 0948:403e
    {db tmp999=84;MYCOPY(dummy7_d4bf)} // 0948:403f
    {db tmp999=73;MYCOPY(dummy7_d4c0)} // 0948:4040
    {db tmp999=77;MYCOPY(dummy7_d4c1)} // 0948:4041
    {db tmp999=69;MYCOPY(dummy7_d4c2)} // 0948:4042
    {db tmp999=32;MYCOPY(dummy7_d4c3)} // 0948:4043
    {db tmp999=68;MYCOPY(dummy7_d4c4)} // 0948:4044
    {db tmp999=79;MYCOPY(dummy7_d4c5)} // 0948:4045
    {db tmp999=79;MYCOPY(dummy7_d4c6)} // 0948:4046
    {db tmp999=82;MYCOPY(dummy7_d4c7)} // 0948:4047
    {db tmp999=46;MYCOPY(dummy7_d4c8)} // 0948:4048
    {db tmp999=23;MYCOPY(unk_1baaa)} // 0948:404a
    {db tmp999[32]={3,71,79,79,68,32,73,68,69,65,46,32,32,76,69,84,39,83,32,71,79,33,0,0,0,0,0,0,0,0,0,0};MYCOPY(dummy7_d4cb)} // 0948:404b
    {dw tmp999=0;MYCOPY(word_1bad0)} // 0d4f:0000
    {dw tmp999=0;MYCOPY(word_1bad2)} // 0d4f:0002
    {db tmp999[60]={0};MYCOPY(dummy7_d4f8)} // 0d4f:0008
    {dw tmp999=0;MYCOPY(word_1bb14)} // 0d4f:0044
    {dw tmp999=0;MYCOPY(word_1bb16)} // 0d4f:0046
    {db tmp999[66]={0};MYCOPY(dummy7_d538)} // 0d4f:0048
    {dw tmp999=0;MYCOPY(word_1bb5a)} // 0d4f:008a
    {db tmp999[136]={0};MYCOPY(dummy7_d57c)} // 0d4f:008c
    {dw tmp999=0;MYCOPY(word_1bbe4)} // 0d4f:0114
    {dw tmp999=0;MYCOPY(word_1bbe6)} // 0d4f:0116
    {dd tmp999=0;MYCOPY(dword_1bbe8)} // 0d4f:0118
    {dw tmp999=0;MYCOPY(word_1bbec)} // 0d4f:011c
    {dw tmp999=0;MYCOPY(word_1bbee)} // 0d4f:011e
    {dw tmp999=0;MYCOPY(word_1bbf0)} // 0d4f:0120
    {dw tmp999=0;MYCOPY(word_1bbf2)} // 0d4f:0122
    {db tmp999[132]={0};MYCOPY(byte_1bbf4)} // 0d4f:0124
    {dw tmp999=0;MYCOPY(word_1bc78)} // 0d4f:01a8
    {db tmp999[4]={0};MYCOPY(dummy7_d69a)} // 0d4f:01aa
    {dw tmp999=0;MYCOPY(word_1bc7e)} // 0d4f:01ae
    {dw tmp999=25940;MYCOPY(atest)} // 0d4f:01b0
    {dw tmp999=29811;MYCOPY(word_1bc82)} // 0d4f:01b2
    {db tmp999[515]={0};MYCOPY(byte_1bc85)} // 0d4f:01b5
    {dw tmp999=211;MYCOPY(word_1be88)} // 0d4f:03b8
    {dw tmp999=2;MYCOPY(word_1beda)} // 0d4f:040a
    {db tmp999=128;MYCOPY(dummy7_da49)} // 0d4f:0559
    {db tmp999[13]={0};MYCOPY(dummy7_e243)} // 0d4f:0d53
    {dw tmp999=0;MYCOPY(word_1c830)} // 0e25:0000
    {dw tmp999=0;MYCOPY(word_1c832)} // 0e25:0002
    {dw tmp999=0;MYCOPY(word_1c834)} // 0e25:0004
    {db tmp999[4]={0};MYCOPY(byte_1c836)} // 0e25:0006
    {db tmp999=0;MYCOPY(byte_1c83a)} // 0e25:000a
    {db tmp999[12]={0,0,43,0,86,0,129,0,172,0,215,0};MYCOPY(dummy7_e25b)} // 0e25:000b
    {db tmp999[14]={2,1,45,1,88,1,131,1,174,1,217,1,4,2};MYCOPY(dummy7_e267)} // 0e25:000b
    {db tmp999[13]={47,2,90,2,133,2,176,2,219,2,6,3,49};MYCOPY(dummy7_e275)} // 0e25:000b
    {db tmp999[13]={3,92,3,135,3,178,3,221,3,8,4,0,0};MYCOPY(dummy7_e282)} // 0e25:000b
    {db tmp999[14]={9,0,18,0,27,0,36,0,45,0,54,0,63,0};MYCOPY(dummy7_e28f)} // 0e25:000b
    {db tmp999[13]={72,0,81,0,90,0,99,0,108,0,117,0,126};MYCOPY(dummy7_e29d)} // 0e25:000b
    {db tmp999[13]={0,135,0,144,0,153,0,162,0,171,0,180,0};MYCOPY(dummy7_e2aa)} // 0e25:000b
    {db tmp999[12]={189,0,198,0,207,0,216,0,225,0,234,0};MYCOPY(dummy7_e2b7)} // 0e25:000b
    {db tmp999[14]={243,0,252,0,5,1,14,1,23,1,32,1,0,0};MYCOPY(dummy7_e2c3)} // 0e25:000b
    {db tmp999[14]={86,0,172,0,2,1,88,1,174,1,4,2,90,2};MYCOPY(dummy7_e2d1)} // 0e25:000b
    {db tmp999[13]={176,2,6,3,92,3,178,3,8,4,94,4,180};MYCOPY(dummy7_e2df)} // 0e25:000b
    {db tmp999[13]={4,10,5,96,5,182,5,12,6,98,6,184,6};MYCOPY(dummy7_e2ec)} // 0e25:000b
    {db tmp999[13]={14,7,100,7,186,7,16,8,102,8,188,8,18};MYCOPY(dummy7_e2f9)} // 0e25:000b
    {db tmp999[11]={9,104,9,190,9,20,10,106,10,192,10};MYCOPY(dummy7_e306)} // 0e25:000b
    {dw tmp999=(dw)m2c::kloc_1cf39;MYCOPY(jpt_1cf34)} // 0e25:092d
    {dw tmp999=(dw)m2c::kloc_1cf89;MYCOPY(dummy7_eb7f)} // 0e25:092d
    {dw tmp999=(dw)m2c::kloc_1cfd9;MYCOPY(dummy7_eb81)} // 0e25:092d
    {dw tmp999=(dw)m2c::kloc_1d029;MYCOPY(dummy7_eb83)} // 0e25:092d
    {dw tmp999=65535;MYCOPY(dummy7_eb85)} // 0e25:0935
    {dw tmp999=30702;MYCOPY(dummy7_eb87)} // 0e25:0937
    {dw tmp999=13260;MYCOPY(dummy7_eb89)} // 0e25:0939
    {dw tmp999=4488;MYCOPY(dummy7_eb8b)} // 0e25:093b
    {dw tmp999=65535;MYCOPY(dummy7_eb8d)} // 0e25:093d
    {dw tmp999=61047;MYCOPY(dummy7_eb8f)} // 0e25:093f
    {dw tmp999=52275;MYCOPY(dummy7_eb91)} // 0e25:0941
    {dw tmp999=34833;MYCOPY(dummy7_eb93)} // 0e25:0943
    {dw tmp999=(dw)m2c::kloc_1d281;MYCOPY(jpt_1d18b)} // 0e25:0b7a
    {dw tmp999=(dw)m2c::kloc_1d230;MYCOPY(dummy7_edcc)} // 0e25:0b7a
    {dw tmp999=(dw)m2c::kloc_1d1df;MYCOPY(dummy7_edce)} // 0e25:0b7a
    {dw tmp999=(dw)m2c::kloc_1d190;MYCOPY(dummy7_edd0)} // 0e25:0b7a
    {dw tmp999=(dw)m2c::kloc_1d4ff;MYCOPY(jpt_1d4fa)} // 0e25:0e8a
    {dw tmp999=(dw)m2c::kloc_1d53c;MYCOPY(dummy7_f0dc)} // 0e25:0e8a
    {dw tmp999=(dw)m2c::kloc_1d57e;MYCOPY(dummy7_f0de)} // 0e25:0e8a
    {dw tmp999=(dw)m2c::kloc_1d5c0;MYCOPY(dummy7_f0e0)} // 0e25:0e8a
    {db tmp999[10]={255,255,238,119,204,51,136,17,255,255};MYCOPY(dummy7_f0e2)} // 0e25:0e92
    {db tmp999[6]={119,238,51,204,17,136};MYCOPY(dummy7_f0ec)} // 0e25:0e92
    {dw tmp999=(dw)m2c::kloc_1d7af;MYCOPY(jpt_1d6e8)} // 0e25:1070
    {dw tmp999=(dw)m2c::kloc_1d76c;MYCOPY(dummy7_f2c2)} // 0e25:1070
    {dw tmp999=(dw)m2c::kloc_1d729;MYCOPY(dummy7_f2c4)} // 0e25:1070
    {dw tmp999=(dw)m2c::kloc_1d6ed;MYCOPY(dummy7_f2c6)} // 0e25:1070
    {dw tmp999=(dw)m2c::kloc_1d9ed;MYCOPY(jpt_1d9e8)} // 0e25:1371
    {dw tmp999=(dw)m2c::kloc_1da29;MYCOPY(dummy7_f5c3)} // 0e25:1371
    {dw tmp999=(dw)m2c::kloc_1da6a;MYCOPY(dummy7_f5c5)} // 0e25:1371
    {dw tmp999=(dw)m2c::kloc_1daab;MYCOPY(dummy7_f5c7)} // 0e25:1371
    {db tmp999[9]={255,255,254,127,252,63,248,31,240};MYCOPY(dummy7_f5c9)} // 0e25:1379
    {db tmp999[11]={15,224,7,192,3,128,1,0,0,255,255};MYCOPY(dummy7_f5d2)} // 0e25:1379
    {db tmp999[10]={127,254,63,252,31,248,15,240,7,224};MYCOPY(dummy7_f5dd)} // 0e25:1379
    {db tmp999[6]={3,192,1,128,0,0};MYCOPY(dummy7_f5e7)} // 0e25:1379
    {dw tmp999=(dw)m2c::kloc_1dca7;MYCOPY(jpt_1dbe3)} // 0e25:1564
    {dw tmp999=(dw)m2c::kloc_1dc65;MYCOPY(dummy7_f7b6)} // 0e25:1564
    {dw tmp999=(dw)m2c::kloc_1dc23;MYCOPY(dummy7_f7b8)} // 0e25:1564
    {dw tmp999=(dw)m2c::kloc_1dbe8;MYCOPY(dummy7_f7ba)} // 0e25:1564
    {dw tmp999=(dw)m2c::kloc_1ce78;MYCOPY(dummy7_f81d)} // 0e25:15cd
    {dw tmp999=(dw)m2c::kloc_1d8a8;MYCOPY(dummy7_f81f)} // 0e25:15cf
    {dw tmp999=(dw)m2c::ksub_1d3b2;MYCOPY(dummy7_f823)} // 0e25:15d3
    {dw tmp999[3]={(dw)m2c::kloc_2366c,(dw)m2c::kloc_23682,(dw)m2c::kloc_23664};MYCOPY(jpt_1c9b1)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23646,(dw)m2c::kloc_23778,(dw)m2c::kloc_2375a};MYCOPY(dummy7_fbc6)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_2373c,(dw)m2c::kloc_2371e,(dw)m2c::kloc_23708};MYCOPY(dummy7_fbcc)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_236ea,(dw)m2c::kloc_236cc,(dw)m2c::kloc_236ae};MYCOPY(dummy7_fbd2)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23698,(dw)m2c::kloc_2367a,(dw)m2c::kloc_2365c};MYCOPY(dummy7_fbd8)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_2363e,(dw)m2c::kloc_23b09,(dw)m2c::kloc_23af3};MYCOPY(dummy7_fbde)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23add,(dw)m2c::kloc_23ac7,(dw)m2c::kloc_23ab1};MYCOPY(dummy7_fbe4)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23a93,(dw)m2c::kloc_23a75,(dw)m2c::kloc_23a57};MYCOPY(dummy7_fbea)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23a41,(dw)m2c::kloc_23a23,(dw)m2c::kloc_23a05};MYCOPY(dummy7_fbf0)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_239e7,(dw)m2c::kloc_239d1,(dw)m2c::kloc_239b3};MYCOPY(dummy7_fbf6)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23995,(dw)m2c::kloc_23977,(dw)m2c::kloc_23969};MYCOPY(dummy7_fbfc)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23953,(dw)m2c::kloc_2393d,(dw)m2c::kloc_23927};MYCOPY(dummy7_fc02)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23911,(dw)m2c::kloc_238f3,(dw)m2c::kloc_238d5};MYCOPY(dummy7_fc08)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_238b7,(dw)m2c::kloc_238a1,(dw)m2c::kloc_23883};MYCOPY(dummy7_fc0e)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23865,(dw)m2c::kloc_23847,(dw)m2c::kloc_23831};MYCOPY(dummy7_fc14)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23813,(dw)m2c::kloc_237f5,(dw)m2c::kloc_237d7};MYCOPY(dummy7_fc1a)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_237c9,(dw)m2c::kloc_237b3,(dw)m2c::kloc_2379d};MYCOPY(dummy7_fc20)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23787,(dw)m2c::kloc_23771,(dw)m2c::kloc_23753};MYCOPY(dummy7_fc26)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23735,(dw)m2c::kloc_23717,(dw)m2c::kloc_23701};MYCOPY(dummy7_fc2c)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_236e3,(dw)m2c::kloc_236c5,(dw)m2c::kloc_236a7};MYCOPY(dummy7_fc32)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23691,(dw)m2c::kloc_23673,(dw)m2c::kloc_23655};MYCOPY(dummy7_fc38)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23637,(dw)m2c::kloc_248d9,(dw)m2c::kloc_248c8};MYCOPY(dummy7_fc3e)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_248b7,(dw)m2c::kloc_248a6,(dw)m2c::kloc_24895};MYCOPY(dummy7_fc44)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_2487c,(dw)m2c::kloc_24863,(dw)m2c::kloc_2484a};MYCOPY(dummy7_fc4a)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_24839,(dw)m2c::kloc_24820,(dw)m2c::kloc_24807};MYCOPY(dummy7_fc50)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_247ee,(dw)m2c::kloc_247dd,(dw)m2c::kloc_247c4};MYCOPY(dummy7_fc56)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_247ab,(dw)m2c::kloc_24792,(dw)m2c::kloc_24782};MYCOPY(dummy7_fc5c)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_2476a,(dw)m2c::kloc_24752,(dw)m2c::kloc_2473a};MYCOPY(dummy7_fc62)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_24722,(dw)m2c::kloc_24702,(dw)m2c::kloc_246e2};MYCOPY(dummy7_fc68)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_246c2,(dw)m2c::kloc_246aa,(dw)m2c::kloc_2468a};MYCOPY(dummy7_fc6e)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_2466a,(dw)m2c::kloc_2464a,(dw)m2c::kloc_24632};MYCOPY(dummy7_fc74)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_24612,(dw)m2c::kloc_245f2,(dw)m2c::kloc_245d2};MYCOPY(dummy7_fc7a)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_245c2,(dw)m2c::kloc_245aa,(dw)m2c::kloc_24592};MYCOPY(dummy7_fc80)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_2457a,(dw)m2c::kloc_24562,(dw)m2c::kloc_24542};MYCOPY(dummy7_fc86)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_24522,(dw)m2c::kloc_24502,(dw)m2c::kloc_244ea};MYCOPY(dummy7_fc8c)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_244ca,(dw)m2c::kloc_244aa,(dw)m2c::kloc_2448a};MYCOPY(dummy7_fc92)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_24472,(dw)m2c::kloc_24452,(dw)m2c::kloc_24432};MYCOPY(dummy7_fc98)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_24412,(dw)m2c::kloc_24402,(dw)m2c::kloc_243ea};MYCOPY(dummy7_fc9e)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_243d2,(dw)m2c::kloc_243ba,(dw)m2c::kloc_243a2};MYCOPY(dummy7_fca4)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_24382,(dw)m2c::kloc_24362,(dw)m2c::kloc_24342};MYCOPY(dummy7_fcaa)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_2432a,(dw)m2c::kloc_2430a,(dw)m2c::kloc_242ea};MYCOPY(dummy7_fcb0)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_242ca,(dw)m2c::kloc_242b2,(dw)m2c::kloc_24292};MYCOPY(dummy7_fcb6)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_24272,(dw)m2c::kloc_24252,(dw)m2c::kloc_2424b};MYCOPY(dummy7_fcbc)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_2423c,(dw)m2c::kloc_2422d,(dw)m2c::kloc_2421e};MYCOPY(dummy7_fcc2)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_2420f,(dw)m2c::kloc_241f8,(dw)m2c::kloc_241e1};MYCOPY(dummy7_fcc8)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_241ca,(dw)m2c::kloc_241bb,(dw)m2c::kloc_241a4};MYCOPY(dummy7_fcce)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_2418d,(dw)m2c::kloc_24176,(dw)m2c::kloc_24167};MYCOPY(dummy7_fcd4)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_24150,(dw)m2c::kloc_24139,(dw)m2c::kloc_24122};MYCOPY(dummy7_fcda)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_24114,(dw)m2c::kloc_240fe,(dw)m2c::kloc_240e8};MYCOPY(dummy7_fce0)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_240d2,(dw)m2c::kloc_240bc,(dw)m2c::kloc_2409e};MYCOPY(dummy7_fce6)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_24080,(dw)m2c::kloc_24062,(dw)m2c::kloc_2404c};MYCOPY(dummy7_fcec)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_2402e,(dw)m2c::kloc_24010,(dw)m2c::kloc_23ff2};MYCOPY(dummy7_fcf2)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23fdc,(dw)m2c::kloc_23fbe,(dw)m2c::kloc_23fa0};MYCOPY(dummy7_fcf8)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23f82,(dw)m2c::kloc_23f74,(dw)m2c::kloc_23f5e};MYCOPY(dummy7_fcfe)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23f48,(dw)m2c::kloc_23f32,(dw)m2c::kloc_23f1c};MYCOPY(dummy7_fd04)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23efe,(dw)m2c::kloc_23ee0,(dw)m2c::kloc_23ec2};MYCOPY(dummy7_fd0a)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23eac,(dw)m2c::kloc_23e8e,(dw)m2c::kloc_23e70};MYCOPY(dummy7_fd10)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23e52,(dw)m2c::kloc_23e3c,(dw)m2c::kloc_23e1e};MYCOPY(dummy7_fd16)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23e00,(dw)m2c::kloc_23de2,(dw)m2c::kloc_23dd4};MYCOPY(dummy7_fd1c)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23dbe,(dw)m2c::kloc_23da8,(dw)m2c::kloc_23d92};MYCOPY(dummy7_fd22)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23d7c,(dw)m2c::kloc_23d5e,(dw)m2c::kloc_23d40};MYCOPY(dummy7_fd28)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23d22,(dw)m2c::kloc_23d0c,(dw)m2c::kloc_23cee};MYCOPY(dummy7_fd2e)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23cd0,(dw)m2c::kloc_23cb2,(dw)m2c::kloc_23c9c};MYCOPY(dummy7_fd34)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23c7e,(dw)m2c::kloc_23c60,(dw)m2c::kloc_23c42};MYCOPY(dummy7_fd3a)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23c3b,(dw)m2c::kloc_23c2c,(dw)m2c::kloc_23c1d};MYCOPY(dummy7_fd40)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23c0e,(dw)m2c::kloc_23bff,(dw)m2c::kloc_23be8};MYCOPY(dummy7_fd46)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23bd1,(dw)m2c::kloc_23bba,(dw)m2c::kloc_23bab};MYCOPY(dummy7_fd4c)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23b94,(dw)m2c::kloc_23b7d,(dw)m2c::kloc_23b66};MYCOPY(dummy7_fd52)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23b57,(dw)m2c::kloc_23b40,(dw)m2c::kloc_23b29};MYCOPY(dummy7_fd58)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23b12,(dw)m2c::kloc_23b04,(dw)m2c::kloc_23aee};MYCOPY(dummy7_fd5e)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23ad8,(dw)m2c::kloc_23ac2,(dw)m2c::kloc_23aac};MYCOPY(dummy7_fd64)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23a8e,(dw)m2c::kloc_23a70,(dw)m2c::kloc_23a52};MYCOPY(dummy7_fd6a)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23a3c,(dw)m2c::kloc_23a1e,(dw)m2c::kloc_23a00};MYCOPY(dummy7_fd70)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_239e2,(dw)m2c::kloc_239cc,(dw)m2c::kloc_239ae};MYCOPY(dummy7_fd76)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23990,(dw)m2c::kloc_23972,(dw)m2c::kloc_23964};MYCOPY(dummy7_fd7c)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_2394e,(dw)m2c::kloc_23938,(dw)m2c::kloc_23922};MYCOPY(dummy7_fd82)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_2390c,(dw)m2c::kloc_238ee,(dw)m2c::kloc_238d0};MYCOPY(dummy7_fd88)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_238b2,(dw)m2c::kloc_2389c,(dw)m2c::kloc_2387e};MYCOPY(dummy7_fd8e)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23860,(dw)m2c::kloc_23842,(dw)m2c::kloc_2382c};MYCOPY(dummy7_fd94)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_2380e,(dw)m2c::kloc_237f0,(dw)m2c::kloc_237d2};MYCOPY(dummy7_fd9a)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_237c4,(dw)m2c::kloc_237ae,(dw)m2c::kloc_23798};MYCOPY(dummy7_fda0)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23782,(dw)m2c::kloc_2376c,(dw)m2c::kloc_2374e};MYCOPY(dummy7_fda6)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_23730,(dw)m2c::kloc_23712,(dw)m2c::kloc_236fc};MYCOPY(dummy7_fdac)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_236de,(dw)m2c::kloc_236c0,(dw)m2c::kloc_236a2};MYCOPY(dummy7_fdb2)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_2368c,(dw)m2c::kloc_2366e,(dw)m2c::kloc_23650};MYCOPY(dummy7_fdb8)} // 0e25:1970
    {dw tmp999=(dw)m2c::kloc_23632;MYCOPY(dummy7_fdbe)} // 0e25:1970
    {dw tmp999[3]={(dw)m2c::kloc_2492a,(dw)m2c::kloc_24946,(dw)m2c::kloc_24922};MYCOPY(jpt_1caa7)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_248fc,(dw)m2c::kloc_24a66,(dw)m2c::kloc_24a44};MYCOPY(dummy7_fdc6)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24a22,(dw)m2c::kloc_249fe,(dw)m2c::kloc_249e4};MYCOPY(dummy7_fdcc)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_249c2,(dw)m2c::kloc_249a0,(dw)m2c::kloc_2497c};MYCOPY(dummy7_fdd2)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24960,(dw)m2c::kloc_2493c,(dw)m2c::kloc_24918};MYCOPY(dummy7_fdd8)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_248f2,(dw)m2c::kloc_24e69,(dw)m2c::kloc_24e51};MYCOPY(dummy7_fdde)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24e39,(dw)m2c::kloc_24e1f,(dw)m2c::kloc_24e07};MYCOPY(dummy7_fde4)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24de7,(dw)m2c::kloc_24dc7,(dw)m2c::kloc_24da5};MYCOPY(dummy7_fdea)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24d8d,(dw)m2c::kloc_24d6d,(dw)m2c::kloc_24d4d};MYCOPY(dummy7_fdf0)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24d2b,(dw)m2c::kloc_24d11,(dw)m2c::kloc_24cef};MYCOPY(dummy7_fdf6)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24ccd,(dw)m2c::kloc_24ca9,(dw)m2c::kloc_24c99};MYCOPY(dummy7_fdfc)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24c81,(dw)m2c::kloc_24c69,(dw)m2c::kloc_24c4f};MYCOPY(dummy7_fe02)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24c37,(dw)m2c::kloc_24c17,(dw)m2c::kloc_24bf7};MYCOPY(dummy7_fe08)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24bd5,(dw)m2c::kloc_24bbd,(dw)m2c::kloc_24b9d};MYCOPY(dummy7_fe0e)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24b7d,(dw)m2c::kloc_24b5b,(dw)m2c::kloc_24b41};MYCOPY(dummy7_fe14)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24b1f,(dw)m2c::kloc_24afd,(dw)m2c::kloc_24ad9};MYCOPY(dummy7_fe1a)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24ac7,(dw)m2c::kloc_24aad,(dw)m2c::kloc_24a93};MYCOPY(dummy7_fe20)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24a77,(dw)m2c::kloc_24a5d,(dw)m2c::kloc_24a3b};MYCOPY(dummy7_fe26)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24a19,(dw)m2c::kloc_249f5,(dw)m2c::kloc_249db};MYCOPY(dummy7_fe2c)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_249b9,(dw)m2c::kloc_24997,(dw)m2c::kloc_24973};MYCOPY(dummy7_fe32)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24957,(dw)m2c::kloc_24933,(dw)m2c::kloc_2490f};MYCOPY(dummy7_fe38)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_248e9,(dw)m2c::kloc_25d2a,(dw)m2c::kloc_25d1a};MYCOPY(dummy7_fe3e)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_25d0a,(dw)m2c::kloc_25cf8,(dw)m2c::kloc_25ce8};MYCOPY(dummy7_fe44)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_25cd0,(dw)m2c::kloc_25cb8,(dw)m2c::kloc_25c9e};MYCOPY(dummy7_fe4a)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_25c8e,(dw)m2c::kloc_25c76,(dw)m2c::kloc_25c5e};MYCOPY(dummy7_fe50)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_25c44,(dw)m2c::kloc_25c32,(dw)m2c::kloc_25c18};MYCOPY(dummy7_fe56)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_25bfe,(dw)m2c::kloc_25be2,(dw)m2c::kloc_25bd3};MYCOPY(dummy7_fe5c)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_25bbc,(dw)m2c::kloc_25ba5,(dw)m2c::kloc_25b8c};MYCOPY(dummy7_fe62)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_25b75,(dw)m2c::kloc_25b56,(dw)m2c::kloc_25b37};MYCOPY(dummy7_fe68)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_25b16,(dw)m2c::kloc_25aff,(dw)m2c::kloc_25ae0};MYCOPY(dummy7_fe6e)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_25ac1,(dw)m2c::kloc_25aa0,(dw)m2c::kloc_25a87};MYCOPY(dummy7_fe74)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_25a66,(dw)m2c::kloc_25a45,(dw)m2c::kloc_25a22};MYCOPY(dummy7_fe7a)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_25a13,(dw)m2c::kloc_259fc,(dw)m2c::kloc_259e5};MYCOPY(dummy7_fe80)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_259cc,(dw)m2c::kloc_259b5,(dw)m2c::kloc_25996};MYCOPY(dummy7_fe86)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_25977,(dw)m2c::kloc_25956,(dw)m2c::kloc_2593f};MYCOPY(dummy7_fe8c)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_25920,(dw)m2c::kloc_25901,(dw)m2c::kloc_258e0};MYCOPY(dummy7_fe92)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_258c7,(dw)m2c::kloc_258a6,(dw)m2c::kloc_25885};MYCOPY(dummy7_fe98)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_25862,(dw)m2c::kloc_25851,(dw)m2c::kloc_25838};MYCOPY(dummy7_fe9e)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_2581f,(dw)m2c::kloc_25804,(dw)m2c::kloc_257eb};MYCOPY(dummy7_fea4)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_257ca,(dw)m2c::kloc_257a9,(dw)m2c::kloc_25786};MYCOPY(dummy7_feaa)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_2576d,(dw)m2c::kloc_2574c,(dw)m2c::kloc_2572b};MYCOPY(dummy7_feb0)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_25708,(dw)m2c::kloc_256ed,(dw)m2c::kloc_256ca};MYCOPY(dummy7_feb6)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_256a7,(dw)m2c::kloc_25682,(dw)m2c::kloc_2567a};MYCOPY(dummy7_febc)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_2566a,(dw)m2c::kloc_2565a,(dw)m2c::kloc_25648};MYCOPY(dummy7_fec2)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_25638,(dw)m2c::kloc_25620,(dw)m2c::kloc_25608};MYCOPY(dummy7_fec8)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_255ee,(dw)m2c::kloc_255de,(dw)m2c::kloc_255c6};MYCOPY(dummy7_fece)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_255ae,(dw)m2c::kloc_25594,(dw)m2c::kloc_25582};MYCOPY(dummy7_fed4)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_25568,(dw)m2c::kloc_2554e,(dw)m2c::kloc_25532};MYCOPY(dummy7_feda)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_25523,(dw)m2c::kloc_2550c,(dw)m2c::kloc_254f5};MYCOPY(dummy7_fee0)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_254dc,(dw)m2c::kloc_254c5,(dw)m2c::kloc_254a6};MYCOPY(dummy7_fee6)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_25487,(dw)m2c::kloc_25466,(dw)m2c::kloc_2544f};MYCOPY(dummy7_feec)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_25430,(dw)m2c::kloc_25411,(dw)m2c::kloc_253f0};MYCOPY(dummy7_fef2)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_253d7,(dw)m2c::kloc_253b6,(dw)m2c::kloc_25395};MYCOPY(dummy7_fef8)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_25372,(dw)m2c::kloc_25363,(dw)m2c::kloc_2534c};MYCOPY(dummy7_fefe)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_25335,(dw)m2c::kloc_2531c,(dw)m2c::kloc_25305};MYCOPY(dummy7_ff04)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_252e6,(dw)m2c::kloc_252c7,(dw)m2c::kloc_252a6};MYCOPY(dummy7_ff0a)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_2528f,(dw)m2c::kloc_25270,(dw)m2c::kloc_25251};MYCOPY(dummy7_ff10)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_25230,(dw)m2c::kloc_25217,(dw)m2c::kloc_251f6};MYCOPY(dummy7_ff16)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_251d5,(dw)m2c::kloc_251b2,(dw)m2c::kloc_251a1};MYCOPY(dummy7_ff1c)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_25188,(dw)m2c::kloc_2516f,(dw)m2c::kloc_25154};MYCOPY(dummy7_ff22)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_2513b,(dw)m2c::kloc_2511a,(dw)m2c::kloc_250f9};MYCOPY(dummy7_ff28)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_250d6,(dw)m2c::kloc_250bd,(dw)m2c::kloc_2509c};MYCOPY(dummy7_ff2e)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_2507b,(dw)m2c::kloc_25058,(dw)m2c::kloc_2503d};MYCOPY(dummy7_ff34)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_2501a,(dw)m2c::kloc_24ff7,(dw)m2c::kloc_24fd2};MYCOPY(dummy7_ff3a)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24fc9,(dw)m2c::kloc_24fb8,(dw)m2c::kloc_24fa7};MYCOPY(dummy7_ff40)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24f94,(dw)m2c::kloc_24f83,(dw)m2c::kloc_24f6a};MYCOPY(dummy7_ff46)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24f51,(dw)m2c::kloc_24f36,(dw)m2c::kloc_24f25};MYCOPY(dummy7_ff4c)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24f0c,(dw)m2c::kloc_24ef3,(dw)m2c::kloc_24ed8};MYCOPY(dummy7_ff52)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24ec5,(dw)m2c::kloc_24eaa,(dw)m2c::kloc_24e8f};MYCOPY(dummy7_ff58)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24e72,(dw)m2c::kloc_24e62,(dw)m2c::kloc_24e4a};MYCOPY(dummy7_ff5e)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24e32,(dw)m2c::kloc_24e18,(dw)m2c::kloc_24e00};MYCOPY(dummy7_ff64)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24de0,(dw)m2c::kloc_24dc0,(dw)m2c::kloc_24d9e};MYCOPY(dummy7_ff6a)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24d86,(dw)m2c::kloc_24d66,(dw)m2c::kloc_24d46};MYCOPY(dummy7_ff70)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24d24,(dw)m2c::kloc_24d0a,(dw)m2c::kloc_24ce8};MYCOPY(dummy7_ff76)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24cc6,(dw)m2c::kloc_24ca2,(dw)m2c::kloc_24c92};MYCOPY(dummy7_ff7c)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24c7a,(dw)m2c::kloc_24c62,(dw)m2c::kloc_24c48};MYCOPY(dummy7_ff82)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24c30,(dw)m2c::kloc_24c10,(dw)m2c::kloc_24bf0};MYCOPY(dummy7_ff88)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24bce,(dw)m2c::kloc_24bb6,(dw)m2c::kloc_24b96};MYCOPY(dummy7_ff8e)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24b76,(dw)m2c::kloc_24b54,(dw)m2c::kloc_24b3a};MYCOPY(dummy7_ff94)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24b18,(dw)m2c::kloc_24af6,(dw)m2c::kloc_24ad2};MYCOPY(dummy7_ff9a)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24ac0,(dw)m2c::kloc_24aa6,(dw)m2c::kloc_24a8c};MYCOPY(dummy7_ffa0)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24a70,(dw)m2c::kloc_24a56,(dw)m2c::kloc_24a34};MYCOPY(dummy7_ffa6)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24a12,(dw)m2c::kloc_249ee,(dw)m2c::kloc_249d4};MYCOPY(dummy7_ffac)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_249b2,(dw)m2c::kloc_24990,(dw)m2c::kloc_2496c};MYCOPY(dummy7_ffb2)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_24950,(dw)m2c::kloc_2492c,(dw)m2c::kloc_24908};MYCOPY(dummy7_ffb8)} // 0e25:1b70
    {dw tmp999=(dw)m2c::kloc_248e2;MYCOPY(dummy7_ffbe)} // 0e25:1b70
    {dw tmp999[3]={(dw)m2c::kloc_25d6c,(dw)m2c::kloc_25d84,(dw)m2c::kloc_25d66};MYCOPY(jpt_1cba1)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_25d48,(dw)m2c::kloc_25e82,(dw)m2c::kloc_25e63};MYCOPY(dummy7_ffc6)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_25e45,(dw)m2c::kloc_25e27,(dw)m2c::kloc_25e0f};MYCOPY(dummy7_ffcc)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_25df0,(dw)m2c::kloc_25dd2,(dw)m2c::kloc_25db4};MYCOPY(dummy7_ffd2)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_25d9c,(dw)m2c::kloc_25d7d,(dw)m2c::kloc_25d5f};MYCOPY(dummy7_ffd8)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_25d41,(dw)m2c::kloc_26238,(dw)m2c::kloc_26220};MYCOPY(dummy7_ffde)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26209,(dw)m2c::kloc_261f2,(dw)m2c::kloc_261da};MYCOPY(dummy7_ffe4)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_261bb,(dw)m2c::kloc_2619d,(dw)m2c::kloc_2617f};MYCOPY(dummy7_ffea)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26167,(dw)m2c::kloc_26148,(dw)m2c::kloc_2612a};MYCOPY(dummy7_fff0)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_2610c,(dw)m2c::kloc_260f4,(dw)m2c::kloc_260d5};MYCOPY(dummy7_fff6)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_260b7,(dw)m2c::kloc_26099,(dw)m2c::kloc_26088};MYCOPY(dummy7_fffc)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26070,(dw)m2c::kloc_26059,(dw)m2c::kloc_26042};MYCOPY(dummy7_10002)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_2602a,(dw)m2c::kloc_2600b,(dw)m2c::kloc_25fed};MYCOPY(dummy7_10008)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_25fcf,(dw)m2c::kloc_25fb7,(dw)m2c::kloc_25f98};MYCOPY(dummy7_1000e)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_25f7a,(dw)m2c::kloc_25f5c,(dw)m2c::kloc_25f44};MYCOPY(dummy7_10014)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_25f25,(dw)m2c::kloc_25f07,(dw)m2c::kloc_25ee9};MYCOPY(dummy7_1001a)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_25ed8,(dw)m2c::kloc_25ec0,(dw)m2c::kloc_25ea9};MYCOPY(dummy7_10020)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_25e92,(dw)m2c::kloc_25e7a,(dw)m2c::kloc_25e5b};MYCOPY(dummy7_10026)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_25e3d,(dw)m2c::kloc_25e1f,(dw)m2c::kloc_25e07};MYCOPY(dummy7_1002c)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_25de8,(dw)m2c::kloc_25dca,(dw)m2c::kloc_25dac};MYCOPY(dummy7_10032)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_25d94,(dw)m2c::kloc_25d75,(dw)m2c::kloc_25d57};MYCOPY(dummy7_10038)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_25d39,(dw)m2c::kloc_27028,(dw)m2c::kloc_27017};MYCOPY(dummy7_1003e)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_27007,(dw)m2c::kloc_26ff7,(dw)m2c::kloc_26fe6};MYCOPY(dummy7_10044)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26fce,(dw)m2c::kloc_26fb7,(dw)m2c::kloc_26fa0};MYCOPY(dummy7_1004a)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26f8f,(dw)m2c::kloc_26f77,(dw)m2c::kloc_26f60};MYCOPY(dummy7_10050)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26f49,(dw)m2c::kloc_26f38,(dw)m2c::kloc_26f20};MYCOPY(dummy7_10056)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26f09,(dw)m2c::kloc_26ef2,(dw)m2c::kloc_26ee0};MYCOPY(dummy7_1005c)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26ec7,(dw)m2c::kloc_26eaf,(dw)m2c::kloc_26e97};MYCOPY(dummy7_10062)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26e7e,(dw)m2c::kloc_26e5e,(dw)m2c::kloc_26e3f};MYCOPY(dummy7_10068)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26e20,(dw)m2c::kloc_26e07,(dw)m2c::kloc_26de7};MYCOPY(dummy7_1006e)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26dc8,(dw)m2c::kloc_26da9,(dw)m2c::kloc_26d90};MYCOPY(dummy7_10074)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26d70,(dw)m2c::kloc_26d51,(dw)m2c::kloc_26d32};MYCOPY(dummy7_1007a)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26d20,(dw)m2c::kloc_26d07,(dw)m2c::kloc_26cef};MYCOPY(dummy7_10080)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26cd7,(dw)m2c::kloc_26cbe,(dw)m2c::kloc_26c9e};MYCOPY(dummy7_10086)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26c7f,(dw)m2c::kloc_26c60,(dw)m2c::kloc_26c47};MYCOPY(dummy7_1008c)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26c27,(dw)m2c::kloc_26c08,(dw)m2c::kloc_26be9};MYCOPY(dummy7_10092)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26bd0,(dw)m2c::kloc_26bb0,(dw)m2c::kloc_26b91};MYCOPY(dummy7_10098)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26b72,(dw)m2c::kloc_26b60,(dw)m2c::kloc_26b47};MYCOPY(dummy7_1009e)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26b2f,(dw)m2c::kloc_26b17,(dw)m2c::kloc_26afe};MYCOPY(dummy7_100a4)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26ade,(dw)m2c::kloc_26abf,(dw)m2c::kloc_26aa0};MYCOPY(dummy7_100aa)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26a87,(dw)m2c::kloc_26a67,(dw)m2c::kloc_26a48};MYCOPY(dummy7_100b0)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26a29,(dw)m2c::kloc_26a10,(dw)m2c::kloc_269f0};MYCOPY(dummy7_100b6)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_269d1,(dw)m2c::kloc_269b2,(dw)m2c::kloc_269a9};MYCOPY(dummy7_100bc)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26999,(dw)m2c::kloc_2698a,(dw)m2c::kloc_2697b};MYCOPY(dummy7_100c2)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_2696b,(dw)m2c::kloc_26954,(dw)m2c::kloc_2693e};MYCOPY(dummy7_100c8)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26928,(dw)m2c::kloc_26918,(dw)m2c::kloc_26901};MYCOPY(dummy7_100ce)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_268eb,(dw)m2c::kloc_268d5,(dw)m2c::kloc_268c5};MYCOPY(dummy7_100d4)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_268ae,(dw)m2c::kloc_26898,(dw)m2c::kloc_26882};MYCOPY(dummy7_100da)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26871,(dw)m2c::kloc_26859,(dw)m2c::kloc_26842};MYCOPY(dummy7_100e0)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_2682b,(dw)m2c::kloc_26813,(dw)m2c::kloc_267f4};MYCOPY(dummy7_100e6)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_267d6,(dw)m2c::kloc_267b8,(dw)m2c::kloc_267a0};MYCOPY(dummy7_100ec)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26781,(dw)m2c::kloc_26763,(dw)m2c::kloc_26745};MYCOPY(dummy7_100f2)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_2672d,(dw)m2c::kloc_2670e,(dw)m2c::kloc_266f0};MYCOPY(dummy7_100f8)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_266d2,(dw)m2c::kloc_266c1,(dw)m2c::kloc_266a9};MYCOPY(dummy7_100fe)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26692,(dw)m2c::kloc_2667b,(dw)m2c::kloc_26663};MYCOPY(dummy7_10104)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26644,(dw)m2c::kloc_26626,(dw)m2c::kloc_26608};MYCOPY(dummy7_1010a)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_265f0,(dw)m2c::kloc_265d1,(dw)m2c::kloc_265b3};MYCOPY(dummy7_10110)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26595,(dw)m2c::kloc_2657d,(dw)m2c::kloc_2655e};MYCOPY(dummy7_10116)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26540,(dw)m2c::kloc_26522,(dw)m2c::kloc_26511};MYCOPY(dummy7_1011c)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_264f9,(dw)m2c::kloc_264e2,(dw)m2c::kloc_264cb};MYCOPY(dummy7_10122)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_264b3,(dw)m2c::kloc_26494,(dw)m2c::kloc_26476};MYCOPY(dummy7_10128)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26458,(dw)m2c::kloc_26440,(dw)m2c::kloc_26421};MYCOPY(dummy7_1012e)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26403,(dw)m2c::kloc_263e5,(dw)m2c::kloc_263cd};MYCOPY(dummy7_10134)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_263ae,(dw)m2c::kloc_26390,(dw)m2c::kloc_26372};MYCOPY(dummy7_1013a)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26369,(dw)m2c::kloc_26359,(dw)m2c::kloc_2634a};MYCOPY(dummy7_10140)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_2633b,(dw)m2c::kloc_2632b,(dw)m2c::kloc_26314};MYCOPY(dummy7_10146)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_262fe,(dw)m2c::kloc_262e8,(dw)m2c::kloc_262d8};MYCOPY(dummy7_1014c)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_262c1,(dw)m2c::kloc_262ab,(dw)m2c::kloc_26295};MYCOPY(dummy7_10152)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26285,(dw)m2c::kloc_2626e,(dw)m2c::kloc_26258};MYCOPY(dummy7_10158)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26242,(dw)m2c::kloc_26231,(dw)m2c::kloc_26219};MYCOPY(dummy7_1015e)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26202,(dw)m2c::kloc_261eb,(dw)m2c::kloc_261d3};MYCOPY(dummy7_10164)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_261b4,(dw)m2c::kloc_26196,(dw)m2c::kloc_26178};MYCOPY(dummy7_1016a)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26160,(dw)m2c::kloc_26141,(dw)m2c::kloc_26123};MYCOPY(dummy7_10170)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26105,(dw)m2c::kloc_260ed,(dw)m2c::kloc_260ce};MYCOPY(dummy7_10176)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_260b0,(dw)m2c::kloc_26092,(dw)m2c::kloc_26081};MYCOPY(dummy7_1017c)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26069,(dw)m2c::kloc_26052,(dw)m2c::kloc_2603b};MYCOPY(dummy7_10182)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_26023,(dw)m2c::kloc_26004,(dw)m2c::kloc_25fe6};MYCOPY(dummy7_10188)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_25fc8,(dw)m2c::kloc_25fb0,(dw)m2c::kloc_25f91};MYCOPY(dummy7_1018e)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_25f73,(dw)m2c::kloc_25f55,(dw)m2c::kloc_25f3d};MYCOPY(dummy7_10194)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_25f1e,(dw)m2c::kloc_25f00,(dw)m2c::kloc_25ee2};MYCOPY(dummy7_1019a)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_25ed1,(dw)m2c::kloc_25eb9,(dw)m2c::kloc_25ea2};MYCOPY(dummy7_101a0)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_25e8b,(dw)m2c::kloc_25e73,(dw)m2c::kloc_25e54};MYCOPY(dummy7_101a6)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_25e36,(dw)m2c::kloc_25e18,(dw)m2c::kloc_25e00};MYCOPY(dummy7_101ac)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_25de1,(dw)m2c::kloc_25dc3,(dw)m2c::kloc_25da5};MYCOPY(dummy7_101b2)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_25d8d,(dw)m2c::kloc_25d6e,(dw)m2c::kloc_25d50};MYCOPY(dummy7_101b8)} // 0e25:1d70
    {dw tmp999=(dw)m2c::kloc_25d32;MYCOPY(dummy7_101be)} // 0e25:1d70
    {dw tmp999[3]={(dw)m2c::kloc_2707b,(dw)m2c::kloc_27099,(dw)m2c::kloc_27074};MYCOPY(jpt_1cc9b)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_2704e,(dw)m2c::kloc_271c0,(dw)m2c::kloc_2719e};MYCOPY(dummy7_101c6)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_2717b,(dw)m2c::kloc_27157,(dw)m2c::kloc_2713b};MYCOPY(dummy7_101cc)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27119,(dw)m2c::kloc_270f6,(dw)m2c::kloc_270d2};MYCOPY(dummy7_101d2)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_270b4,(dw)m2c::kloc_27090,(dw)m2c::kloc_2706b};MYCOPY(dummy7_101d8)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27045,(dw)m2c::kloc_275e8,(dw)m2c::kloc_275cf};MYCOPY(dummy7_101de)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_275b5,(dw)m2c::kloc_2759a,(dw)m2c::kloc_27580};MYCOPY(dummy7_101e4)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27560,(dw)m2c::kloc_2753f,(dw)m2c::kloc_2751d};MYCOPY(dummy7_101ea)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27503,(dw)m2c::kloc_274e3,(dw)m2c::kloc_274c2};MYCOPY(dummy7_101f0)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_274a0,(dw)m2c::kloc_27484,(dw)m2c::kloc_27462};MYCOPY(dummy7_101f6)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_2743f,(dw)m2c::kloc_2741b,(dw)m2c::kloc_27408};MYCOPY(dummy7_101fc)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_273ef,(dw)m2c::kloc_273d5,(dw)m2c::kloc_273ba};MYCOPY(dummy7_10202)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_273a0,(dw)m2c::kloc_27380,(dw)m2c::kloc_2735f};MYCOPY(dummy7_10208)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_2733d,(dw)m2c::kloc_27323,(dw)m2c::kloc_27303};MYCOPY(dummy7_1020e)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_272e2,(dw)m2c::kloc_272c0,(dw)m2c::kloc_272a4};MYCOPY(dummy7_10214)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27282,(dw)m2c::kloc_2725f,(dw)m2c::kloc_2723b};MYCOPY(dummy7_1021a)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27226,(dw)m2c::kloc_2720b,(dw)m2c::kloc_271ef};MYCOPY(dummy7_10220)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_271d2,(dw)m2c::kloc_271b6,(dw)m2c::kloc_27194};MYCOPY(dummy7_10226)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27171,(dw)m2c::kloc_2714d,(dw)m2c::kloc_27131};MYCOPY(dummy7_1022c)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_2710f,(dw)m2c::kloc_270ec,(dw)m2c::kloc_270c8};MYCOPY(dummy7_10232)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_270aa,(dw)m2c::kloc_27086,(dw)m2c::kloc_27061};MYCOPY(dummy7_10238)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_2703b,(dw)m2c::kloc_284c8,(dw)m2c::kloc_284b8};MYCOPY(dummy7_1023e)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_284a7,(dw)m2c::kloc_28495,(dw)m2c::kloc_28484};MYCOPY(dummy7_10244)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_2846d,(dw)m2c::kloc_28455,(dw)m2c::kloc_2843c};MYCOPY(dummy7_1024a)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_2842b,(dw)m2c::kloc_28414,(dw)m2c::kloc_283fc};MYCOPY(dummy7_10250)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_283e3,(dw)m2c::kloc_283d0,(dw)m2c::kloc_283b7};MYCOPY(dummy7_10256)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_2839d,(dw)m2c::kloc_28382,(dw)m2c::kloc_28370};MYCOPY(dummy7_1025c)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_28358,(dw)m2c::kloc_2833f,(dw)m2c::kloc_28325};MYCOPY(dummy7_10262)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_2830c,(dw)m2c::kloc_282ed,(dw)m2c::kloc_282cd};MYCOPY(dummy7_10268)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_282ac,(dw)m2c::kloc_28293,(dw)m2c::kloc_28274};MYCOPY(dummy7_1026e)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_28254,(dw)m2c::kloc_28233,(dw)m2c::kloc_28218};MYCOPY(dummy7_10274)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_281f7,(dw)m2c::kloc_281d5,(dw)m2c::kloc_281b2};MYCOPY(dummy7_1027a)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_281a0,(dw)m2c::kloc_28188,(dw)m2c::kloc_2816f};MYCOPY(dummy7_10280)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_28155,(dw)m2c::kloc_2813c,(dw)m2c::kloc_2811d};MYCOPY(dummy7_10286)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_280fd,(dw)m2c::kloc_280dc,(dw)m2c::kloc_280c3};MYCOPY(dummy7_1028c)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_280a4,(dw)m2c::kloc_28084,(dw)m2c::kloc_28063};MYCOPY(dummy7_10292)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_28048,(dw)m2c::kloc_28027,(dw)m2c::kloc_28005};MYCOPY(dummy7_10298)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27fe2,(dw)m2c::kloc_27fce,(dw)m2c::kloc_27fb4};MYCOPY(dummy7_1029e)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27f99,(dw)m2c::kloc_27f7d,(dw)m2c::kloc_27f62};MYCOPY(dummy7_102a4)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27f41,(dw)m2c::kloc_27f1f,(dw)m2c::kloc_27efc};MYCOPY(dummy7_102aa)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27ee1,(dw)m2c::kloc_27ec0,(dw)m2c::kloc_27e9e};MYCOPY(dummy7_102b0)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27e7b,(dw)m2c::kloc_27e5e,(dw)m2c::kloc_27e3b};MYCOPY(dummy7_102b6)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27e17,(dw)m2c::kloc_27df2,(dw)m2c::kloc_27de9};MYCOPY(dummy7_102bc)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27dda,(dw)m2c::kloc_27dca,(dw)m2c::kloc_27db9};MYCOPY(dummy7_102c2)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27da9,(dw)m2c::kloc_27d93,(dw)m2c::kloc_27d7c};MYCOPY(dummy7_102c8)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27d64,(dw)m2c::kloc_27d54,(dw)m2c::kloc_27d3e};MYCOPY(dummy7_102ce)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27d27,(dw)m2c::kloc_27d0f,(dw)m2c::kloc_27cfd};MYCOPY(dummy7_102d4)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27ce5,(dw)m2c::kloc_27ccc,(dw)m2c::kloc_27cb2};MYCOPY(dummy7_102da)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27ca1,(dw)m2c::kloc_27c8a,(dw)m2c::kloc_27c72};MYCOPY(dummy7_102e0)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27c59,(dw)m2c::kloc_27c41,(dw)m2c::kloc_27c23};MYCOPY(dummy7_102e6)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27c04,(dw)m2c::kloc_27be4,(dw)m2c::kloc_27bcc};MYCOPY(dummy7_102ec)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27bae,(dw)m2c::kloc_27b8f,(dw)m2c::kloc_27b6f};MYCOPY(dummy7_102f2)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27b55,(dw)m2c::kloc_27b35,(dw)m2c::kloc_27b14};MYCOPY(dummy7_102f8)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27af2,(dw)m2c::kloc_27ae1,(dw)m2c::kloc_27aca};MYCOPY(dummy7_102fe)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27ab2,(dw)m2c::kloc_27a99,(dw)m2c::kloc_27a81};MYCOPY(dummy7_10304)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27a63,(dw)m2c::kloc_27a44,(dw)m2c::kloc_27a24};MYCOPY(dummy7_1030a)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27a0c,(dw)m2c::kloc_279ee,(dw)m2c::kloc_279cf};MYCOPY(dummy7_10310)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_279af,(dw)m2c::kloc_27995,(dw)m2c::kloc_27975};MYCOPY(dummy7_10316)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27954,(dw)m2c::kloc_27932,(dw)m2c::kloc_2791f};MYCOPY(dummy7_1031c)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27906,(dw)m2c::kloc_278ec,(dw)m2c::kloc_278d1};MYCOPY(dummy7_10322)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_278b7,(dw)m2c::kloc_27897,(dw)m2c::kloc_27876};MYCOPY(dummy7_10328)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27854,(dw)m2c::kloc_2783a,(dw)m2c::kloc_2781a};MYCOPY(dummy7_1032e)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_277f9,(dw)m2c::kloc_277d7,(dw)m2c::kloc_277bb};MYCOPY(dummy7_10334)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27799,(dw)m2c::kloc_27776,(dw)m2c::kloc_27752};MYCOPY(dummy7_1033a)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27747,(dw)m2c::kloc_27736,(dw)m2c::kloc_27724};MYCOPY(dummy7_10340)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27711,(dw)m2c::kloc_276ff,(dw)m2c::kloc_276e7};MYCOPY(dummy7_10346)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_276ce,(dw)m2c::kloc_276b4,(dw)m2c::kloc_276a2};MYCOPY(dummy7_1034c)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_2768a,(dw)m2c::kloc_27671,(dw)m2c::kloc_27657};MYCOPY(dummy7_10352)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27643,(dw)m2c::kloc_27629,(dw)m2c::kloc_2760e};MYCOPY(dummy7_10358)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_275f2,(dw)m2c::kloc_275df,(dw)m2c::kloc_275c6};MYCOPY(dummy7_1035e)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_275ac,(dw)m2c::kloc_27591,(dw)m2c::kloc_27577};MYCOPY(dummy7_10364)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27557,(dw)m2c::kloc_27536,(dw)m2c::kloc_27514};MYCOPY(dummy7_1036a)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_274fa,(dw)m2c::kloc_274da,(dw)m2c::kloc_274b9};MYCOPY(dummy7_10370)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27497,(dw)m2c::kloc_2747b,(dw)m2c::kloc_27459};MYCOPY(dummy7_10376)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27436,(dw)m2c::kloc_27412,(dw)m2c::kloc_273ff};MYCOPY(dummy7_1037c)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_273e6,(dw)m2c::kloc_273cc,(dw)m2c::kloc_273b1};MYCOPY(dummy7_10382)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27397,(dw)m2c::kloc_27377,(dw)m2c::kloc_27356};MYCOPY(dummy7_10388)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27334,(dw)m2c::kloc_2731a,(dw)m2c::kloc_272fa};MYCOPY(dummy7_1038e)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_272d9,(dw)m2c::kloc_272b7,(dw)m2c::kloc_2729b};MYCOPY(dummy7_10394)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27279,(dw)m2c::kloc_27256,(dw)m2c::kloc_27232};MYCOPY(dummy7_1039a)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_2721d,(dw)m2c::kloc_27202,(dw)m2c::kloc_271e6};MYCOPY(dummy7_103a0)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_271c9,(dw)m2c::kloc_271ad,(dw)m2c::kloc_2718b};MYCOPY(dummy7_103a6)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27168,(dw)m2c::kloc_27144,(dw)m2c::kloc_27128};MYCOPY(dummy7_103ac)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_27106,(dw)m2c::kloc_270e3,(dw)m2c::kloc_270bf};MYCOPY(dummy7_103b2)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_270a1,(dw)m2c::kloc_2707d,(dw)m2c::kloc_27058};MYCOPY(dummy7_103b8)} // 0e25:1f70
    {dw tmp999=(dw)m2c::kloc_27032;MYCOPY(dummy7_103be)} // 0e25:1f70
    {dw tmp999[3]={(dw)m2c::kloc_21371,(dw)m2c::kloc_21381,(dw)m2c::kloc_2136a};MYCOPY(jpt_1d514)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_213a8,(dw)m2c::kloc_21434,(dw)m2c::kloc_2141d};MYCOPY(dummy7_103c6)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_2140d,(dw)m2c::kloc_213f6,(dw)m2c::kloc_213e6};MYCOPY(dummy7_103cc)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_213cf,(dw)m2c::kloc_213b8,(dw)m2c::kloc_213a1};MYCOPY(dummy7_103d2)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21391,(dw)m2c::kloc_2137a,(dw)m2c::kloc_21363};MYCOPY(dummy7_103d8)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21351,(dw)m2c::kloc_21765,(dw)m2c::kloc_21750};MYCOPY(dummy7_103de)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_2173b,(dw)m2c::kloc_21726,(dw)m2c::kloc_21711};MYCOPY(dummy7_103e4)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_216f5,(dw)m2c::kloc_216e0,(dw)m2c::kloc_216c4};MYCOPY(dummy7_103ea)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_216af,(dw)m2c::kloc_21693,(dw)m2c::kloc_21677};MYCOPY(dummy7_103f0)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_2165b,(dw)m2c::kloc_21646,(dw)m2c::kloc_2162a};MYCOPY(dummy7_103f6)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_2160e,(dw)m2c::kloc_215f7,(dw)m2c::kloc_215e9};MYCOPY(dummy7_103fc)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_215d4,(dw)m2c::kloc_215bf,(dw)m2c::kloc_215aa};MYCOPY(dummy7_10402)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21595,(dw)m2c::kloc_21579,(dw)m2c::kloc_21564};MYCOPY(dummy7_10408)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21548,(dw)m2c::kloc_21533,(dw)m2c::kloc_21517};MYCOPY(dummy7_1040e)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_214fb,(dw)m2c::kloc_214df,(dw)m2c::kloc_214ca};MYCOPY(dummy7_10414)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_214ae,(dw)m2c::kloc_21492,(dw)m2c::kloc_2147b};MYCOPY(dummy7_1041a)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_219ed,(dw)m2c::kloc_219d8,(dw)m2c::kloc_219c3};MYCOPY(dummy7_10420)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_219ae,(dw)m2c::kloc_21999,(dw)m2c::kloc_2197d};MYCOPY(dummy7_10426)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21968,(dw)m2c::kloc_2194c,(dw)m2c::kloc_21937};MYCOPY(dummy7_1042c)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_2191b,(dw)m2c::kloc_218ff,(dw)m2c::kloc_218e3};MYCOPY(dummy7_10432)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_218ce,(dw)m2c::kloc_218b2,(dw)m2c::kloc_21896};MYCOPY(dummy7_10438)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_2187f,(dw)m2c::kloc_22381,(dw)m2c::kloc_22371};MYCOPY(dummy7_1043e)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_22361,(dw)m2c::kloc_22351,(dw)m2c::kloc_22341};MYCOPY(dummy7_10444)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_2232a,(dw)m2c::kloc_2231a,(dw)m2c::kloc_22303};MYCOPY(dummy7_1044a)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_222f3,(dw)m2c::kloc_222dc,(dw)m2c::kloc_222c5};MYCOPY(dummy7_10450)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_222ae,(dw)m2c::kloc_2229e,(dw)m2c::kloc_22287};MYCOPY(dummy7_10456)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_22270,(dw)m2c::kloc_2225e,(dw)m2c::kloc_2224e};MYCOPY(dummy7_1045c)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_22237,(dw)m2c::kloc_22220,(dw)m2c::kloc_22209};MYCOPY(dummy7_10462)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_221f2,(dw)m2c::kloc_221d4,(dw)m2c::kloc_221bd};MYCOPY(dummy7_10468)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_2219f,(dw)m2c::kloc_22188,(dw)m2c::kloc_2216a};MYCOPY(dummy7_1046e)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_2214c,(dw)m2c::kloc_2212e,(dw)m2c::kloc_22117};MYCOPY(dummy7_10474)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_220f9,(dw)m2c::kloc_220db,(dw)m2c::kloc_220c2};MYCOPY(dummy7_1047a)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_220b9,(dw)m2c::kloc_220a9,(dw)m2c::kloc_22099};MYCOPY(dummy7_10480)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_22089,(dw)m2c::kloc_22079,(dw)m2c::kloc_22062};MYCOPY(dummy7_10486)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_22052,(dw)m2c::kloc_2203b,(dw)m2c::kloc_2202b};MYCOPY(dummy7_1048c)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_22014,(dw)m2c::kloc_21ffd,(dw)m2c::kloc_21fe6};MYCOPY(dummy7_10492)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21fd6,(dw)m2c::kloc_21fbf,(dw)m2c::kloc_21fa8};MYCOPY(dummy7_10498)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21f96,(dw)m2c::kloc_21f86,(dw)m2c::kloc_21f6f};MYCOPY(dummy7_1049e)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21f58,(dw)m2c::kloc_21f41,(dw)m2c::kloc_21f2a};MYCOPY(dummy7_104a4)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21f0c,(dw)m2c::kloc_21ef5,(dw)m2c::kloc_21ed7};MYCOPY(dummy7_104aa)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21ec0,(dw)m2c::kloc_21ea2,(dw)m2c::kloc_21e84};MYCOPY(dummy7_104b0)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21e66,(dw)m2c::kloc_21e4f,(dw)m2c::kloc_21e31};MYCOPY(dummy7_104b6)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21e13,(dw)m2c::kloc_21dfa,(dw)m2c::kloc_21df3};MYCOPY(dummy7_104bc)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21de5,(dw)m2c::kloc_21dd7,(dw)m2c::kloc_21dc9};MYCOPY(dummy7_104c2)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21dbb,(dw)m2c::kloc_21da6,(dw)m2c::kloc_21d98};MYCOPY(dummy7_104c8)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21d83,(dw)m2c::kloc_21d75,(dw)m2c::kloc_21d60};MYCOPY(dummy7_104ce)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21d4b,(dw)m2c::kloc_21d36,(dw)m2c::kloc_21d28};MYCOPY(dummy7_104d4)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21d13,(dw)m2c::kloc_21cfe,(dw)m2c::kloc_21cee};MYCOPY(dummy7_104da)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21ce0,(dw)m2c::kloc_21ccb,(dw)m2c::kloc_21cb6};MYCOPY(dummy7_104e0)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21ca1,(dw)m2c::kloc_21c8c,(dw)m2c::kloc_21c70};MYCOPY(dummy7_104e6)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21c5b,(dw)m2c::kloc_21c3f,(dw)m2c::kloc_21c2a};MYCOPY(dummy7_104ec)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21c0e,(dw)m2c::kloc_21bf2,(dw)m2c::kloc_21bd6};MYCOPY(dummy7_104f2)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21bc1,(dw)m2c::kloc_21ba5,(dw)m2c::kloc_21b89};MYCOPY(dummy7_104f8)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21b72,(dw)m2c::kloc_21b64,(dw)m2c::kloc_21b4f};MYCOPY(dummy7_104fe)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21b3a,(dw)m2c::kloc_21b25,(dw)m2c::kloc_21b10};MYCOPY(dummy7_10504)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21af4,(dw)m2c::kloc_21adf,(dw)m2c::kloc_21ac3};MYCOPY(dummy7_1050a)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21aae,(dw)m2c::kloc_21a92,(dw)m2c::kloc_21a76};MYCOPY(dummy7_10510)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21a5a,(dw)m2c::kloc_21a45,(dw)m2c::kloc_21a29};MYCOPY(dummy7_10516)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21a0d,(dw)m2c::kloc_219f6,(dw)m2c::kloc_219e8};MYCOPY(dummy7_1051c)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_219d3,(dw)m2c::kloc_219be,(dw)m2c::kloc_219a9};MYCOPY(dummy7_10522)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21994,(dw)m2c::kloc_21978,(dw)m2c::kloc_21963};MYCOPY(dummy7_10528)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21947,(dw)m2c::kloc_21932,(dw)m2c::kloc_21916};MYCOPY(dummy7_1052e)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_218fa,(dw)m2c::kloc_218de,(dw)m2c::kloc_218c9};MYCOPY(dummy7_10534)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_218ad,(dw)m2c::kloc_21891,(dw)m2c::kloc_2187a};MYCOPY(dummy7_1053a)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21873,(dw)m2c::kloc_21865,(dw)m2c::kloc_21857};MYCOPY(dummy7_10540)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21849,(dw)m2c::kloc_2183b,(dw)m2c::kloc_21826};MYCOPY(dummy7_10546)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21818,(dw)m2c::kloc_21803,(dw)m2c::kloc_217f5};MYCOPY(dummy7_1054c)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_217e0,(dw)m2c::kloc_217cb,(dw)m2c::kloc_217b6};MYCOPY(dummy7_10552)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_217a8,(dw)m2c::kloc_21793,(dw)m2c::kloc_2177e};MYCOPY(dummy7_10558)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_2176e,(dw)m2c::kloc_21760,(dw)m2c::kloc_2174b};MYCOPY(dummy7_1055e)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21736,(dw)m2c::kloc_21721,(dw)m2c::kloc_2170c};MYCOPY(dummy7_10564)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_216f0,(dw)m2c::kloc_216db,(dw)m2c::kloc_216bf};MYCOPY(dummy7_1056a)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_216aa,(dw)m2c::kloc_2168e,(dw)m2c::kloc_21672};MYCOPY(dummy7_10570)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21656,(dw)m2c::kloc_21641,(dw)m2c::kloc_21625};MYCOPY(dummy7_10576)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21609,(dw)m2c::kloc_215f2,(dw)m2c::kloc_215e4};MYCOPY(dummy7_1057c)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_215cf,(dw)m2c::kloc_215ba,(dw)m2c::kloc_215a5};MYCOPY(dummy7_10582)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21590,(dw)m2c::kloc_21574,(dw)m2c::kloc_2155f};MYCOPY(dummy7_10588)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21543,(dw)m2c::kloc_2152e,(dw)m2c::kloc_21512};MYCOPY(dummy7_1058e)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_214f6,(dw)m2c::kloc_214da,(dw)m2c::kloc_214c5};MYCOPY(dummy7_10594)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_214a9,(dw)m2c::kloc_2148d,(dw)m2c::kloc_21476};MYCOPY(dummy7_1059a)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_2146d,(dw)m2c::kloc_2145d,(dw)m2c::kloc_2144d};MYCOPY(dummy7_105a0)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_2143d,(dw)m2c::kloc_2142d,(dw)m2c::kloc_21416};MYCOPY(dummy7_105a6)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_21406,(dw)m2c::kloc_213ef,(dw)m2c::kloc_213df};MYCOPY(dummy7_105ac)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_213c8,(dw)m2c::kloc_213b1,(dw)m2c::kloc_2139a};MYCOPY(dummy7_105b2)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_2138a,(dw)m2c::kloc_21373,(dw)m2c::kloc_2135c};MYCOPY(dummy7_105b8)} // 0e25:2170
    {dw tmp999=(dw)m2c::kloc_2134a;MYCOPY(dummy7_105be)} // 0e25:2170
    {dw tmp999[3]={(dw)m2c::kloc_223cb,(dw)m2c::kloc_223e5,(dw)m2c::kloc_223c4};MYCOPY(jpt_1d703)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_2241e,(dw)m2c::kloc_224e8,(dw)m2c::kloc_224c9};MYCOPY(dummy7_105c6)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_224af,(dw)m2c::kloc_2248e,(dw)m2c::kloc_22476};MYCOPY(dummy7_105cc)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22457,(dw)m2c::kloc_22438,(dw)m2c::kloc_22417};MYCOPY(dummy7_105d2)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_223fd,(dw)m2c::kloc_223dc,(dw)m2c::kloc_223bb};MYCOPY(dummy7_105d8)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22399,(dw)m2c::kloc_228b8,(dw)m2c::kloc_228a1};MYCOPY(dummy7_105de)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_2288a,(dw)m2c::kloc_22871,(dw)m2c::kloc_2285a};MYCOPY(dummy7_105e4)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_2283c,(dw)m2c::kloc_22823,(dw)m2c::kloc_22803};MYCOPY(dummy7_105ea)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_227ec,(dw)m2c::kloc_227ce,(dw)m2c::kloc_227b0};MYCOPY(dummy7_105f0)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22790,(dw)m2c::kloc_22777,(dw)m2c::kloc_22757};MYCOPY(dummy7_105f6)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22737,(dw)m2c::kloc_22716,(dw)m2c::kloc_22705};MYCOPY(dummy7_105fc)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_226ed,(dw)m2c::kloc_226d5,(dw)m2c::kloc_226bb};MYCOPY(dummy7_10602)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_226a3,(dw)m2c::kloc_22684,(dw)m2c::kloc_2266a};MYCOPY(dummy7_10608)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22649,(dw)m2c::kloc_22631,(dw)m2c::kloc_22612};MYCOPY(dummy7_1060e)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_225f3,(dw)m2c::kloc_225d2,(dw)m2c::kloc_225b8};MYCOPY(dummy7_10614)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22597,(dw)m2c::kloc_22576,(dw)m2c::kloc_22554};MYCOPY(dummy7_1061a)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22bba,(dw)m2c::kloc_22ba3,(dw)m2c::kloc_22b8c};MYCOPY(dummy7_10620)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22b73,(dw)m2c::kloc_22b5c,(dw)m2c::kloc_22b3e};MYCOPY(dummy7_10626)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22b25,(dw)m2c::kloc_22b05,(dw)m2c::kloc_22aee};MYCOPY(dummy7_1062c)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22ad0,(dw)m2c::kloc_22ab2,(dw)m2c::kloc_22a92};MYCOPY(dummy7_10632)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22a79,(dw)m2c::kloc_22a59,(dw)m2c::kloc_22a39};MYCOPY(dummy7_10638)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22a18,(dw)m2c::kloc_23629,(dw)m2c::kloc_23619};MYCOPY(dummy7_1063e)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_23609,(dw)m2c::kloc_235f7,(dw)m2c::kloc_235e7};MYCOPY(dummy7_10644)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_235d0,(dw)m2c::kloc_235be,(dw)m2c::kloc_235a5};MYCOPY(dummy7_1064a)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_23595,(dw)m2c::kloc_2357e,(dw)m2c::kloc_23567};MYCOPY(dummy7_10650)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_2354e,(dw)m2c::kloc_2353c,(dw)m2c::kloc_23523};MYCOPY(dummy7_10656)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_2350a,(dw)m2c::kloc_234f0,(dw)m2c::kloc_234e1};MYCOPY(dummy7_1065c)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_234cb,(dw)m2c::kloc_234b5,(dw)m2c::kloc_2349d};MYCOPY(dummy7_10662)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_23487,(dw)m2c::kloc_2346a,(dw)m2c::kloc_23452};MYCOPY(dummy7_10668)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_23433,(dw)m2c::kloc_2341d,(dw)m2c::kloc_23400};MYCOPY(dummy7_1066e)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_233e3,(dw)m2c::kloc_233c4,(dw)m2c::kloc_233ac};MYCOPY(dummy7_10674)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_2338d,(dw)m2c::kloc_2336e,(dw)m2c::kloc_2334e};MYCOPY(dummy7_1067a)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_23343,(dw)m2c::kloc_23331,(dw)m2c::kloc_2331f};MYCOPY(dummy7_10680)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_2330b,(dw)m2c::kloc_232f9,(dw)m2c::kloc_232e0};MYCOPY(dummy7_10686)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_232cc,(dw)m2c::kloc_232b1,(dw)m2c::kloc_2329f};MYCOPY(dummy7_1068c)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_23286,(dw)m2c::kloc_2326d,(dw)m2c::kloc_23252};MYCOPY(dummy7_10692)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_2323e,(dw)m2c::kloc_23223,(dw)m2c::kloc_23208};MYCOPY(dummy7_10698)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_231ec,(dw)m2c::kloc_231db,(dw)m2c::kloc_231c3};MYCOPY(dummy7_1069e)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_231ab,(dw)m2c::kloc_23191,(dw)m2c::kloc_23179};MYCOPY(dummy7_106a4)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_2315a,(dw)m2c::kloc_23140,(dw)m2c::kloc_2311f};MYCOPY(dummy7_106aa)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_23107,(dw)m2c::kloc_230e8,(dw)m2c::kloc_230c9};MYCOPY(dummy7_106b0)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_230a8,(dw)m2c::kloc_2308e,(dw)m2c::kloc_2306d};MYCOPY(dummy7_106b6)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_2304c,(dw)m2c::kloc_2302a,(dw)m2c::kloc_23022};MYCOPY(dummy7_106bc)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_23013,(dw)m2c::kloc_23004,(dw)m2c::kloc_22ff3};MYCOPY(dummy7_106c2)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22fe4,(dw)m2c::kloc_22fce,(dw)m2c::kloc_22fbd};MYCOPY(dummy7_106c8)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22fa5,(dw)m2c::kloc_22f96,(dw)m2c::kloc_22f80};MYCOPY(dummy7_106ce)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22f6a,(dw)m2c::kloc_22f52,(dw)m2c::kloc_22f41};MYCOPY(dummy7_106d4)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22f29,(dw)m2c::kloc_22f11,(dw)m2c::kloc_22ef8};MYCOPY(dummy7_106da)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22eea,(dw)m2c::kloc_22ed5,(dw)m2c::kloc_22ec0};MYCOPY(dummy7_106e0)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22ea9,(dw)m2c::kloc_22e94,(dw)m2c::kloc_22e78};MYCOPY(dummy7_106e6)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22e61,(dw)m2c::kloc_22e43,(dw)m2c::kloc_22e2e};MYCOPY(dummy7_106ec)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22e12,(dw)m2c::kloc_22df6,(dw)m2c::kloc_22dd8};MYCOPY(dummy7_106f2)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22dc1,(dw)m2c::kloc_22da3,(dw)m2c::kloc_22d85};MYCOPY(dummy7_106f8)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22d66,(dw)m2c::kloc_22d57,(dw)m2c::kloc_22d41};MYCOPY(dummy7_106fe)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22d2b,(dw)m2c::kloc_22d13,(dw)m2c::kloc_22cfd};MYCOPY(dummy7_10704)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22ce0,(dw)m2c::kloc_22cc8,(dw)m2c::kloc_22ca9};MYCOPY(dummy7_1070a)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22c93,(dw)m2c::kloc_22c76,(dw)m2c::kloc_22c59};MYCOPY(dummy7_10710)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22c3a,(dw)m2c::kloc_22c22,(dw)m2c::kloc_22c03};MYCOPY(dummy7_10716)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22be4,(dw)m2c::kloc_22bc4,(dw)m2c::kloc_22bb4};MYCOPY(dummy7_1071c)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22b9d,(dw)m2c::kloc_22b86,(dw)m2c::kloc_22b6d};MYCOPY(dummy7_10722)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22b56,(dw)m2c::kloc_22b38,(dw)m2c::kloc_22b1f};MYCOPY(dummy7_10728)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22aff,(dw)m2c::kloc_22ae8,(dw)m2c::kloc_22aca};MYCOPY(dummy7_1072e)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22aac,(dw)m2c::kloc_22a8c,(dw)m2c::kloc_22a73};MYCOPY(dummy7_10734)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22a53,(dw)m2c::kloc_22a33,(dw)m2c::kloc_22a12};MYCOPY(dummy7_1073a)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22a08,(dw)m2c::kloc_229f7,(dw)m2c::kloc_229e6};MYCOPY(dummy7_10740)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_229d3,(dw)m2c::kloc_229c2,(dw)m2c::kloc_229aa};MYCOPY(dummy7_10746)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22997,(dw)m2c::kloc_2297d,(dw)m2c::kloc_2296c};MYCOPY(dummy7_1074c)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22954,(dw)m2c::kloc_2293c,(dw)m2c::kloc_22922};MYCOPY(dummy7_10752)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_2290f,(dw)m2c::kloc_228f5,(dw)m2c::kloc_228db};MYCOPY(dummy7_10758)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_228c0,(dw)m2c::kloc_228b0,(dw)m2c::kloc_22899};MYCOPY(dummy7_1075e)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22882,(dw)m2c::kloc_22869,(dw)m2c::kloc_22852};MYCOPY(dummy7_10764)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22834,(dw)m2c::kloc_2281b,(dw)m2c::kloc_227fb};MYCOPY(dummy7_1076a)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_227e4,(dw)m2c::kloc_227c6,(dw)m2c::kloc_227a8};MYCOPY(dummy7_10770)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22788,(dw)m2c::kloc_2276f,(dw)m2c::kloc_2274f};MYCOPY(dummy7_10776)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_2272f,(dw)m2c::kloc_2270e,(dw)m2c::kloc_226fd};MYCOPY(dummy7_1077c)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_226e5,(dw)m2c::kloc_226cd,(dw)m2c::kloc_226b3};MYCOPY(dummy7_10782)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_2269b,(dw)m2c::kloc_2267c,(dw)m2c::kloc_22662};MYCOPY(dummy7_10788)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22641,(dw)m2c::kloc_22629,(dw)m2c::kloc_2260a};MYCOPY(dummy7_1078e)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_225eb,(dw)m2c::kloc_225ca,(dw)m2c::kloc_225b0};MYCOPY(dummy7_10794)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_2258f,(dw)m2c::kloc_2256e,(dw)m2c::kloc_2254c};MYCOPY(dummy7_1079a)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_2253b,(dw)m2c::kloc_22523,(dw)m2c::kloc_2250b};MYCOPY(dummy7_107a0)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_224f1,(dw)m2c::kloc_224d9,(dw)m2c::kloc_224ba};MYCOPY(dummy7_107a6)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_224a0,(dw)m2c::kloc_2247f,(dw)m2c::kloc_22467};MYCOPY(dummy7_107ac)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_22448,(dw)m2c::kloc_22429,(dw)m2c::kloc_22408};MYCOPY(dummy7_107b2)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_223ee,(dw)m2c::kloc_223cd,(dw)m2c::kloc_223ac};MYCOPY(dummy7_107b8)} // 0e25:2370
    {dw tmp999=(dw)m2c::kloc_2238a;MYCOPY(dummy7_107be)} // 0e25:2370
    {dw tmp999[3]={(dw)m2c::kloc_1f1c7,(dw)m2c::kloc_1f1d7,(dw)m2c::kloc_1f1c0};MYCOPY(jpt_1da02)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f1fe,(dw)m2c::kloc_1f28a,(dw)m2c::kloc_1f273};MYCOPY(dummy7_107c6)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f263,(dw)m2c::kloc_1f24c,(dw)m2c::kloc_1f23c};MYCOPY(dummy7_107cc)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f225,(dw)m2c::kloc_1f20e,(dw)m2c::kloc_1f1f7};MYCOPY(dummy7_107d2)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f1e7,(dw)m2c::kloc_1f1d0,(dw)m2c::kloc_1f1b9};MYCOPY(dummy7_107d8)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f1a7,(dw)m2c::kloc_1f593,(dw)m2c::kloc_1f57e};MYCOPY(dummy7_107de)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f569,(dw)m2c::kloc_1f554,(dw)m2c::kloc_1f53f};MYCOPY(dummy7_107e4)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f523,(dw)m2c::kloc_1f50e,(dw)m2c::kloc_1f4f2};MYCOPY(dummy7_107ea)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f4e4,(dw)m2c::kloc_1f4cf,(dw)m2c::kloc_1f4ba};MYCOPY(dummy7_107f0)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f4a5,(dw)m2c::kloc_1f490,(dw)m2c::kloc_1f474};MYCOPY(dummy7_107f6)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f464,(dw)m2c::kloc_1f44d,(dw)m2c::kloc_1f43f};MYCOPY(dummy7_107fc)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f42a,(dw)m2c::kloc_1f415,(dw)m2c::kloc_1f400};MYCOPY(dummy7_10802)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f3eb,(dw)m2c::kloc_1f3cf,(dw)m2c::kloc_1f3ba};MYCOPY(dummy7_10808)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f39e,(dw)m2c::kloc_1f389,(dw)m2c::kloc_1f36d};MYCOPY(dummy7_1080e)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f351,(dw)m2c::kloc_1f335,(dw)m2c::kloc_1f320};MYCOPY(dummy7_10814)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f304,(dw)m2c::kloc_1f2e8,(dw)m2c::kloc_1f2d1};MYCOPY(dummy7_1081a)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f80c,(dw)m2c::kloc_1f7f7,(dw)m2c::kloc_1f7e2};MYCOPY(dummy7_10820)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f7cd,(dw)m2c::kloc_1f7b8,(dw)m2c::kloc_1f79c};MYCOPY(dummy7_10826)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f787,(dw)m2c::kloc_1f76b,(dw)m2c::kloc_1f756};MYCOPY(dummy7_1082c)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f73a,(dw)m2c::kloc_1f71e,(dw)m2c::kloc_1f702};MYCOPY(dummy7_10832)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f6f2,(dw)m2c::kloc_1f6db,(dw)m2c::kloc_1f6c4};MYCOPY(dummy7_10838)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f6ad,(dw)m2c::kloc_2010a,(dw)m2c::kloc_200fa};MYCOPY(dummy7_1083e)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_200ea,(dw)m2c::kloc_200da,(dw)m2c::kloc_200ca};MYCOPY(dummy7_10844)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_200b3,(dw)m2c::kloc_200a3,(dw)m2c::kloc_2008c};MYCOPY(dummy7_1084a)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_2007c,(dw)m2c::kloc_20065,(dw)m2c::kloc_2004e};MYCOPY(dummy7_10850)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_20037,(dw)m2c::kloc_20027,(dw)m2c::kloc_20010};MYCOPY(dummy7_10856)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1fff9,(dw)m2c::kloc_1ffe7,(dw)m2c::kloc_1ffd7};MYCOPY(dummy7_1085c)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1ffc0,(dw)m2c::kloc_1ffa9,(dw)m2c::kloc_1ff92};MYCOPY(dummy7_10862)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1ff7b,(dw)m2c::kloc_1ff5d,(dw)m2c::kloc_1ff46};MYCOPY(dummy7_10868)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1ff28,(dw)m2c::kloc_1ff18,(dw)m2c::kloc_1ff01};MYCOPY(dummy7_1086e)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1feea,(dw)m2c::kloc_1fed3,(dw)m2c::kloc_1febc};MYCOPY(dummy7_10874)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1fe9e,(dw)m2c::kloc_1fe8c,(dw)m2c::kloc_1fe73};MYCOPY(dummy7_1087a)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1fe6a,(dw)m2c::kloc_1fe5a,(dw)m2c::kloc_1fe4a};MYCOPY(dummy7_10880)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1fe3a,(dw)m2c::kloc_1fe2a,(dw)m2c::kloc_1fe13};MYCOPY(dummy7_10886)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1fe03,(dw)m2c::kloc_1fdec,(dw)m2c::kloc_1fddc};MYCOPY(dummy7_1088c)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1fdc5,(dw)m2c::kloc_1fdae,(dw)m2c::kloc_1fd97};MYCOPY(dummy7_10892)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1fd87,(dw)m2c::kloc_1fd70,(dw)m2c::kloc_1fd59};MYCOPY(dummy7_10898)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1fd47,(dw)m2c::kloc_1fd37,(dw)m2c::kloc_1fd20};MYCOPY(dummy7_1089e)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1fd09,(dw)m2c::kloc_1fcf2,(dw)m2c::kloc_1fcdb};MYCOPY(dummy7_108a4)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1fcbd,(dw)m2c::kloc_1fca6,(dw)m2c::kloc_1fc88};MYCOPY(dummy7_108aa)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1fc7d,(dw)m2c::kloc_1fc6b,(dw)m2c::kloc_1fc59};MYCOPY(dummy7_108b0)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1fc47,(dw)m2c::kloc_1fc35,(dw)m2c::kloc_1fc1c};MYCOPY(dummy7_108b6)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1fc0a,(dw)m2c::kloc_1fbf1,(dw)m2c::kloc_1fbea};MYCOPY(dummy7_108bc)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1fbdc,(dw)m2c::kloc_1fbce,(dw)m2c::kloc_1fbc0};MYCOPY(dummy7_108c2)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1fbb2,(dw)m2c::kloc_1fb9d,(dw)m2c::kloc_1fb8f};MYCOPY(dummy7_108c8)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1fb7a,(dw)m2c::kloc_1fb6c,(dw)m2c::kloc_1fb57};MYCOPY(dummy7_108ce)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1fb42,(dw)m2c::kloc_1fb2d,(dw)m2c::kloc_1fb1f};MYCOPY(dummy7_108d4)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1fb0a,(dw)m2c::kloc_1faf5,(dw)m2c::kloc_1fae5};MYCOPY(dummy7_108da)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1fad7,(dw)m2c::kloc_1fac2,(dw)m2c::kloc_1faad};MYCOPY(dummy7_108e0)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1fa98,(dw)m2c::kloc_1fa83,(dw)m2c::kloc_1fa67};MYCOPY(dummy7_108e6)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1fa52,(dw)m2c::kloc_1fa36,(dw)m2c::kloc_1fa28};MYCOPY(dummy7_108ec)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1fa13,(dw)m2c::kloc_1f9fe,(dw)m2c::kloc_1f9e9};MYCOPY(dummy7_108f2)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f9d4,(dw)m2c::kloc_1f9b8,(dw)m2c::kloc_1f9a8};MYCOPY(dummy7_108f8)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f991,(dw)m2c::kloc_1f983,(dw)m2c::kloc_1f96e};MYCOPY(dummy7_108fe)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f959,(dw)m2c::kloc_1f944,(dw)m2c::kloc_1f92f};MYCOPY(dummy7_10904)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f913,(dw)m2c::kloc_1f8fe,(dw)m2c::kloc_1f8e2};MYCOPY(dummy7_1090a)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f8cd,(dw)m2c::kloc_1f8b1,(dw)m2c::kloc_1f895};MYCOPY(dummy7_10910)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f879,(dw)m2c::kloc_1f864,(dw)m2c::kloc_1f848};MYCOPY(dummy7_10916)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f82c,(dw)m2c::kloc_1f815,(dw)m2c::kloc_1f807};MYCOPY(dummy7_1091c)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f7f2,(dw)m2c::kloc_1f7dd,(dw)m2c::kloc_1f7c8};MYCOPY(dummy7_10922)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f7b3,(dw)m2c::kloc_1f797,(dw)m2c::kloc_1f782};MYCOPY(dummy7_10928)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f766,(dw)m2c::kloc_1f751,(dw)m2c::kloc_1f735};MYCOPY(dummy7_1092e)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f719,(dw)m2c::kloc_1f6fd,(dw)m2c::kloc_1f6ed};MYCOPY(dummy7_10934)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f6d6,(dw)m2c::kloc_1f6bf,(dw)m2c::kloc_1f6a8};MYCOPY(dummy7_1093a)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f6a1,(dw)m2c::kloc_1f693,(dw)m2c::kloc_1f685};MYCOPY(dummy7_10940)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f677,(dw)m2c::kloc_1f669,(dw)m2c::kloc_1f654};MYCOPY(dummy7_10946)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f646,(dw)m2c::kloc_1f631,(dw)m2c::kloc_1f623};MYCOPY(dummy7_1094c)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f60e,(dw)m2c::kloc_1f5f9,(dw)m2c::kloc_1f5e4};MYCOPY(dummy7_10952)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f5d6,(dw)m2c::kloc_1f5c1,(dw)m2c::kloc_1f5ac};MYCOPY(dummy7_10958)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f59c,(dw)m2c::kloc_1f58e,(dw)m2c::kloc_1f579};MYCOPY(dummy7_1095e)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f564,(dw)m2c::kloc_1f54f,(dw)m2c::kloc_1f53a};MYCOPY(dummy7_10964)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f51e,(dw)m2c::kloc_1f509,(dw)m2c::kloc_1f4ed};MYCOPY(dummy7_1096a)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f4df,(dw)m2c::kloc_1f4ca,(dw)m2c::kloc_1f4b5};MYCOPY(dummy7_10970)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f4a0,(dw)m2c::kloc_1f48b,(dw)m2c::kloc_1f46f};MYCOPY(dummy7_10976)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f45f,(dw)m2c::kloc_1f448,(dw)m2c::kloc_1f43a};MYCOPY(dummy7_1097c)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f425,(dw)m2c::kloc_1f410,(dw)m2c::kloc_1f3fb};MYCOPY(dummy7_10982)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f3e6,(dw)m2c::kloc_1f3ca,(dw)m2c::kloc_1f3b5};MYCOPY(dummy7_10988)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f399,(dw)m2c::kloc_1f384,(dw)m2c::kloc_1f368};MYCOPY(dummy7_1098e)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f34c,(dw)m2c::kloc_1f330,(dw)m2c::kloc_1f31b};MYCOPY(dummy7_10994)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f2ff,(dw)m2c::kloc_1f2e3,(dw)m2c::kloc_1f2cc};MYCOPY(dummy7_1099a)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f2c3,(dw)m2c::kloc_1f2b3,(dw)m2c::kloc_1f2a3};MYCOPY(dummy7_109a0)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f293,(dw)m2c::kloc_1f283,(dw)m2c::kloc_1f26c};MYCOPY(dummy7_109a6)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f25c,(dw)m2c::kloc_1f245,(dw)m2c::kloc_1f235};MYCOPY(dummy7_109ac)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f21e,(dw)m2c::kloc_1f207,(dw)m2c::kloc_1f1f0};MYCOPY(dummy7_109b2)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_1f1e0,(dw)m2c::kloc_1f1c9,(dw)m2c::kloc_1f1b2};MYCOPY(dummy7_109b8)} // 0e25:2570
    {dw tmp999=(dw)m2c::kloc_1f1a0;MYCOPY(dummy7_109be)} // 0e25:2570
    {dw tmp999[3]={(dw)m2c::kloc_20155,(dw)m2c::kloc_20170,(dw)m2c::kloc_2014e};MYCOPY(jpt_1dbfe)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_201aa,(dw)m2c::kloc_20277,(dw)m2c::kloc_20258};MYCOPY(dummy7_109c6)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_2023d,(dw)m2c::kloc_2021c,(dw)m2c::kloc_20203};MYCOPY(dummy7_109cc)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_201e4,(dw)m2c::kloc_201c4,(dw)m2c::kloc_201a3};MYCOPY(dummy7_109d2)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20188,(dw)m2c::kloc_20167,(dw)m2c::kloc_20145};MYCOPY(dummy7_109d8)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20123,(dw)m2c::kloc_2062e,(dw)m2c::kloc_20617};MYCOPY(dummy7_109de)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_205ff,(dw)m2c::kloc_205e6,(dw)m2c::kloc_205ce};MYCOPY(dummy7_109e4)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_205b0,(dw)m2c::kloc_20596,(dw)m2c::kloc_20576};MYCOPY(dummy7_109ea)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20563,(dw)m2c::kloc_2054a,(dw)m2c::kloc_20530};MYCOPY(dummy7_109f0)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20515,(dw)m2c::kloc_204fb,(dw)m2c::kloc_204db};MYCOPY(dummy7_109f6)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_204c0,(dw)m2c::kloc_2049f,(dw)m2c::kloc_2048e};MYCOPY(dummy7_109fc)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20477,(dw)m2c::kloc_2045f,(dw)m2c::kloc_20446};MYCOPY(dummy7_10a02)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_2042e,(dw)m2c::kloc_20410,(dw)m2c::kloc_203f6};MYCOPY(dummy7_10a08)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_203d6,(dw)m2c::kloc_203be,(dw)m2c::kloc_203a0};MYCOPY(dummy7_10a0e)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20381,(dw)m2c::kloc_20361,(dw)m2c::kloc_20347};MYCOPY(dummy7_10a14)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20327,(dw)m2c::kloc_20306,(dw)m2c::kloc_202e5};MYCOPY(dummy7_10a1a)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_2092d,(dw)m2c::kloc_20916,(dw)m2c::kloc_208fe};MYCOPY(dummy7_10a20)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_208e5,(dw)m2c::kloc_208cd,(dw)m2c::kloc_208af};MYCOPY(dummy7_10a26)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20895,(dw)m2c::kloc_20875,(dw)m2c::kloc_2085d};MYCOPY(dummy7_10a2c)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_2083f,(dw)m2c::kloc_20820,(dw)m2c::kloc_20800};MYCOPY(dummy7_10a32)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_207e7,(dw)m2c::kloc_207c8,(dw)m2c::kloc_207a8};MYCOPY(dummy7_10a38)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20787,(dw)m2c::kloc_21341,(dw)m2c::kloc_21332};MYCOPY(dummy7_10a3e)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_21322,(dw)m2c::kloc_21311,(dw)m2c::kloc_21301};MYCOPY(dummy7_10a44)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_212eb,(dw)m2c::kloc_212d9,(dw)m2c::kloc_212c1};MYCOPY(dummy7_10a4a)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_212b1,(dw)m2c::kloc_2129b,(dw)m2c::kloc_21284};MYCOPY(dummy7_10a50)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_2126c,(dw)m2c::kloc_2125a,(dw)m2c::kloc_21242};MYCOPY(dummy7_10a56)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_21229,(dw)m2c::kloc_21210,(dw)m2c::kloc_21200};MYCOPY(dummy7_10a5c)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_211ea,(dw)m2c::kloc_211d3,(dw)m2c::kloc_211bb};MYCOPY(dummy7_10a62)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_211a4,(dw)m2c::kloc_21187,(dw)m2c::kloc_2116e};MYCOPY(dummy7_10a68)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_2114f,(dw)m2c::kloc_2113d,(dw)m2c::kloc_21125};MYCOPY(dummy7_10a6e)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_2110c,(dw)m2c::kloc_210f2,(dw)m2c::kloc_210d9};MYCOPY(dummy7_10a74)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_210ba,(dw)m2c::kloc_210a0,(dw)m2c::kloc_21080};MYCOPY(dummy7_10a7a)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_21075,(dw)m2c::kloc_21064,(dw)m2c::kloc_21052};MYCOPY(dummy7_10a80)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_2103f,(dw)m2c::kloc_2102d,(dw)m2c::kloc_21015};MYCOPY(dummy7_10a86)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_21001,(dw)m2c::kloc_20fe7,(dw)m2c::kloc_20fd5};MYCOPY(dummy7_10a8c)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20fbd,(dw)m2c::kloc_20fa4,(dw)m2c::kloc_20f8a};MYCOPY(dummy7_10a92)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20f76,(dw)m2c::kloc_20f5c,(dw)m2c::kloc_20f41};MYCOPY(dummy7_10a98)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20f26,(dw)m2c::kloc_20f14,(dw)m2c::kloc_20efc};MYCOPY(dummy7_10a9e)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20ee3,(dw)m2c::kloc_20ec9,(dw)m2c::kloc_20eb0};MYCOPY(dummy7_10aa4)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20e91,(dw)m2c::kloc_20e76,(dw)m2c::kloc_20e55};MYCOPY(dummy7_10aaa)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20e42,(dw)m2c::kloc_20e29,(dw)m2c::kloc_20e0f};MYCOPY(dummy7_10ab0)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20df4,(dw)m2c::kloc_20dda,(dw)m2c::kloc_20dba};MYCOPY(dummy7_10ab6)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20d9e,(dw)m2c::kloc_20d7c,(dw)m2c::kloc_20d74};MYCOPY(dummy7_10abc)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20d66,(dw)m2c::kloc_20d57,(dw)m2c::kloc_20d47};MYCOPY(dummy7_10ac2)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20d38,(dw)m2c::kloc_20d23,(dw)m2c::kloc_20d12};MYCOPY(dummy7_10ac8)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20cfb,(dw)m2c::kloc_20cec,(dw)m2c::kloc_20cd7};MYCOPY(dummy7_10ace)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20cc1,(dw)m2c::kloc_20caa,(dw)m2c::kloc_20c99};MYCOPY(dummy7_10ad4)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20c82,(dw)m2c::kloc_20c6a,(dw)m2c::kloc_20c52};MYCOPY(dummy7_10ada)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20c43,(dw)m2c::kloc_20c2e,(dw)m2c::kloc_20c18};MYCOPY(dummy7_10ae0)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20c01,(dw)m2c::kloc_20beb,(dw)m2c::kloc_20bcf};MYCOPY(dummy7_10ae6)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20bb7,(dw)m2c::kloc_20b99,(dw)m2c::kloc_20b88};MYCOPY(dummy7_10aec)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20b71,(dw)m2c::kloc_20b59,(dw)m2c::kloc_20b40};MYCOPY(dummy7_10af2)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20b28,(dw)m2c::kloc_20b0a,(dw)m2c::kloc_20af1};MYCOPY(dummy7_10af8)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20ad2,(dw)m2c::kloc_20ac3,(dw)m2c::kloc_20aae};MYCOPY(dummy7_10afe)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20a98,(dw)m2c::kloc_20a81,(dw)m2c::kloc_20a6b};MYCOPY(dummy7_10b04)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20a4f,(dw)m2c::kloc_20a37,(dw)m2c::kloc_20a19};MYCOPY(dummy7_10b0a)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20a03,(dw)m2c::kloc_209e7,(dw)m2c::kloc_209ca};MYCOPY(dummy7_10b10)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_209ac,(dw)m2c::kloc_20994,(dw)m2c::kloc_20976};MYCOPY(dummy7_10b16)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20957,(dw)m2c::kloc_20938,(dw)m2c::kloc_20927};MYCOPY(dummy7_10b1c)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20910,(dw)m2c::kloc_208f8,(dw)m2c::kloc_208df};MYCOPY(dummy7_10b22)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_208c7,(dw)m2c::kloc_208a9,(dw)m2c::kloc_2088f};MYCOPY(dummy7_10b28)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_2086f,(dw)m2c::kloc_20857,(dw)m2c::kloc_20839};MYCOPY(dummy7_10b2e)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_2081a,(dw)m2c::kloc_207fa,(dw)m2c::kloc_207e1};MYCOPY(dummy7_10b34)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_207c2,(dw)m2c::kloc_207a2,(dw)m2c::kloc_20781};MYCOPY(dummy7_10b3a)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20777,(dw)m2c::kloc_20767,(dw)m2c::kloc_20756};MYCOPY(dummy7_10b40)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20744,(dw)m2c::kloc_20733,(dw)m2c::kloc_2071c};MYCOPY(dummy7_10b46)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20709,(dw)m2c::kloc_206f0,(dw)m2c::kloc_206df};MYCOPY(dummy7_10b4c)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_206c8,(dw)m2c::kloc_206b0,(dw)m2c::kloc_20697};MYCOPY(dummy7_10b52)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20684,(dw)m2c::kloc_2066b,(dw)m2c::kloc_20651};MYCOPY(dummy7_10b58)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20637,(dw)m2c::kloc_20626,(dw)m2c::kloc_2060f};MYCOPY(dummy7_10b5e)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_205f7,(dw)m2c::kloc_205de,(dw)m2c::kloc_205c6};MYCOPY(dummy7_10b64)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_205a8,(dw)m2c::kloc_2058e,(dw)m2c::kloc_2056e};MYCOPY(dummy7_10b6a)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_2055b,(dw)m2c::kloc_20542,(dw)m2c::kloc_20528};MYCOPY(dummy7_10b70)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_2050d,(dw)m2c::kloc_204f3,(dw)m2c::kloc_204d3};MYCOPY(dummy7_10b76)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_204b8,(dw)m2c::kloc_20497,(dw)m2c::kloc_20486};MYCOPY(dummy7_10b7c)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_2046f,(dw)m2c::kloc_20457,(dw)m2c::kloc_2043e};MYCOPY(dummy7_10b82)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20426,(dw)m2c::kloc_20408,(dw)m2c::kloc_203ee};MYCOPY(dummy7_10b88)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_203ce,(dw)m2c::kloc_203b6,(dw)m2c::kloc_20398};MYCOPY(dummy7_10b8e)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20379,(dw)m2c::kloc_20359,(dw)m2c::kloc_2033f};MYCOPY(dummy7_10b94)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_2031f,(dw)m2c::kloc_202fe,(dw)m2c::kloc_202dd};MYCOPY(dummy7_10b9a)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_202cb,(dw)m2c::kloc_202b3,(dw)m2c::kloc_2029a};MYCOPY(dummy7_10ba0)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20280,(dw)m2c::kloc_20267,(dw)m2c::kloc_20248};MYCOPY(dummy7_10ba6)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_2022d,(dw)m2c::kloc_2020c,(dw)m2c::kloc_201f3};MYCOPY(dummy7_10bac)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_201d4,(dw)m2c::kloc_201b4,(dw)m2c::kloc_20193};MYCOPY(dummy7_10bb2)} // 0e25:2770
    {dw tmp999[3]={(dw)m2c::kloc_20178,(dw)m2c::kloc_20157,(dw)m2c::kloc_20135};MYCOPY(dummy7_10bb8)} // 0e25:2770
    {dw tmp999=(dw)m2c::kloc_20113;MYCOPY(dummy7_10bbe)} // 0e25:2770
    {db tmp999=38;MYCOPY(dummy7_11507)} // 0e25:32b7
    {db tmp999=136;MYCOPY(byte_1fae8)} // 0e25:32b8
    {db tmp999[14]={0};MYCOPY(dummy7_19ef2)} // 0e25:bca2
    {db tmp999[40]={0};MYCOPY(dummy7_19f00)} // 19f0:0000
    {db tmp999=0;MYCOPY(byte_28508)} // 19f0:0028
    {dw tmp999=0;MYCOPY(word_2850a)} // 19f0:002a
    {db tmp999[6]={0};MYCOPY(dummy7_19f2c)} // 19f0:002c
    {dw tmp999=0;MYCOPY(word_28512)} // 19f0:0032
    {dw tmp999=0;MYCOPY(word_28514)} // 19f0:0034
    {dw tmp999=0;MYCOPY(word_28516)} // 19f0:0036
    {dw tmp999=0;MYCOPY(word_28518)} // 19f0:0038
    {dw tmp999=0;MYCOPY(word_2851a)} // 19f0:003a
    {db tmp999[2]={0};MYCOPY(dummy7_19f3c)} // 19f0:003c
    {dw tmp999=0;MYCOPY(word_2851e)} // 19f0:003e
    {dw tmp999=0;MYCOPY(word_28520)} // 19f0:0040
    {dw tmp999=0;MYCOPY(word_28522)} // 19f0:0042
    {dw tmp999=0;MYCOPY(word_28524)} // 19f0:0044
    {dw tmp999=0;MYCOPY(word_28526)} // 19f0:0046
    {db tmp999[36]={0};MYCOPY(dummy7_19f48)} // 19f0:0048
    {dw tmp999=0;MYCOPY(word_2854c)} // 19f0:006c
    {dw tmp999=0;MYCOPY(word_2854e)} // 19f0:006e
    {db tmp999[8]={0};MYCOPY(dummy7_19f70)} // 19f0:0070
    {dw tmp999=0;MYCOPY(word_28558)} // 19f0:0078
    {dw tmp999=0;MYCOPY(word_2855a)} // 19f0:007a
    {dw tmp999=0;MYCOPY(word_2855c)} // 19f0:007c
    {dw tmp999=0;MYCOPY(word_28560)} // 19f0:0080
    {db tmp999[8]={0};MYCOPY(dummy7_19f82)} // 19f0:0082
    {dw tmp999=0;MYCOPY(word_2856a)} // 19f0:008a
    {db tmp999[374]={0};MYCOPY(dummy7_19f8c)} // 19f0:008c
    {dw tmp999=0;MYCOPY(word_286e2)} // 19f0:0202
    {db tmp999[136]={0};MYCOPY(dummy7_1a104)} // 19f0:0204
    {dw tmp999=0;MYCOPY(word_2876c)} // 19f0:028c
    {db tmp999[116]={0};MYCOPY(dummy7_1a18e)} // 19f0:028e
    {dw tmp999=0;MYCOPY(word_287e2)} // 19f0:0302
    {dw tmp999=0;MYCOPY(word_287e4)} // 19f0:0304
    {db tmp999=0;MYCOPY(byte_287e8)} // 19f0:0308
    {db tmp999[7]={0};MYCOPY(dummy7_1a209)} // 19f0:0309
    {dw tmp999=0;MYCOPY(word_287f0)} // 19f0:0310
    {dw tmp999=0;MYCOPY(word_287f2)} // 19f0:0312
    {dw tmp999=0;MYCOPY(word_287f4)} // 19f0:0314
    {dw tmp999=0;MYCOPY(word_287f6)} // 19f0:0316
    {db tmp999[22]={0};MYCOPY(dummy7_1a218)} // 19f0:0318
    {db tmp999=0;MYCOPY(byte_2880e)} // 19f0:032e
    {dw tmp999=0;MYCOPY(word_2880f)} // 19f0:032f
    {dw tmp999=0;MYCOPY(word_28811)} // 19f0:0331
    {dw tmp999=0;MYCOPY(word_28814)} // 19f0:0334
    {dw tmp999=0;MYCOPY(word_28816)} // 19f0:0336
    {db tmp999[4]={0};MYCOPY(dummy7_1a238)} // 19f0:0338
    {dw tmp999=0;MYCOPY(word_2881c)} // 19f0:033c
    {db tmp999[2]={0};MYCOPY(dummy7_1a23e)} // 19f0:033e
    {dw tmp999=0;MYCOPY(word_28820)} // 19f0:0340
    {db tmp999=0;MYCOPY(byte_28822)} // 19f0:0342
    {db tmp999=0;MYCOPY(byte_28823)} // 19f0:0343
    {db tmp999=0;MYCOPY(byte_28824)} // 19f0:0344
    {db tmp999=0;MYCOPY(byte_28825)} // 19f0:0345
    {db tmp999=0;MYCOPY(byte_28826)} // 19f0:0346
    {db tmp999=0;MYCOPY(byte_28827)} // 19f0:0347
    {dw tmp999=0;MYCOPY(word_28828)} // 19f0:0348
    {dw tmp999=0;MYCOPY(word_2882a)} // 19f0:034a
    {dw tmp999=0;MYCOPY(word_2882c)} // 19f0:034c
    {dw tmp999=0;MYCOPY(word_2882e)} // 19f0:034e
    {dw tmp999=0;MYCOPY(word_28830)} // 19f0:0350
    {dw tmp999=0;MYCOPY(word_28832)} // 19f0:0352
    {db tmp999[30]={0};MYCOPY(dummy7_1a254)} // 19f0:0354
    {dw tmp999=0;MYCOPY(word_28852)} // 19f0:0372
    {dw tmp999=0;MYCOPY(word_28854)} // 19f0:0374
    {dw tmp999=0;MYCOPY(word_28856)} // 19f0:0376
    {db tmp999[18]={0};MYCOPY(dummy7_1a27a)} // 19f0:037a
    {dw tmp999=0;MYCOPY(word_2886c)} // 19f0:038c
    {dw tmp999=0;MYCOPY(word_2886e)} // 19f0:038e
    {dw tmp999=0;MYCOPY(word_28870)} // 19f0:0390
    {dw tmp999=0;MYCOPY(word_28872)} // 19f0:0392
    {dw tmp999=0;MYCOPY(word_28874)} // 19f0:0394
    {dw tmp999=0;MYCOPY(word_28876)} // 19f0:0396
    {dw tmp999=0;MYCOPY(word_28878)} // 19f0:0398
    {dw tmp999=0;MYCOPY(word_2887a)} // 19f0:039a
    {dw tmp999=0;MYCOPY(word_2887c)} // 19f0:039c
    {dw tmp999=0;MYCOPY(word_2887e)} // 19f0:039e
    {dw tmp999=0;MYCOPY(word_28880)} // 19f0:03a0
    {dw tmp999=0;MYCOPY(word_28882)} // 19f0:03a2
    {dw tmp999=0;MYCOPY(word_28884)} // 19f0:03a4
    {dw tmp999=0;MYCOPY(word_28886)} // 19f0:03a6
    {dw tmp999=0;MYCOPY(word_28888)} // 19f0:03a8
    {dw tmp999=0;MYCOPY(word_2888a)} // 19f0:03aa
    {dw tmp999=0;MYCOPY(word_2888c)} // 19f0:03ac
    {dw tmp999=0;MYCOPY(word_2888e)} // 19f0:03ae
    {dw tmp999=0;MYCOPY(word_28890)} // 19f0:03b0
    {dw tmp999=0;MYCOPY(word_28892)} // 19f0:03b2
    {dw tmp999=0;MYCOPY(word_28894)} // 19f0:03b4
    {dw tmp999=0;MYCOPY(word_28896)} // 19f0:03b6
    {dw tmp999=0;MYCOPY(word_28898)} // 19f0:03b8
    {dw tmp999=0;MYCOPY(word_2889a)} // 19f0:03ba
    {db tmp999[6]={0};MYCOPY(dummy7_1a2bc)} // 19f0:03bc
    {dw tmp999=0;MYCOPY(word_288a2)} // 19f0:03c2
    {dw tmp999=0;MYCOPY(word_288a4)} // 19f0:03c4
    {dw tmp999=0;MYCOPY(word_288a6)} // 19f0:03c6
    {db tmp999[2]={0};MYCOPY(dummy7_1a2c8)} // 19f0:03c8
    {dw tmp999=0;MYCOPY(word_288aa)} // 19f0:03ca
    {dw tmp999=0;MYCOPY(word_288ac)} // 19f0:03cc
    {dw tmp999=0;MYCOPY(word_288ae)} // 19f0:03ce
    {dw tmp999=0;MYCOPY(word_288b0)} // 19f0:03d0
    {db tmp999[2]={0};MYCOPY(dummy7_1a2d2)} // 19f0:03d2
    {dw tmp999=0;MYCOPY(word_288b4)} // 19f0:03d4
    {dw tmp999=0;MYCOPY(word_288b6)} // 19f0:03d6
    {dw tmp999=0;MYCOPY(word_288b8)} // 19f0:03d8
    {dw tmp999=0;MYCOPY(word_288ba)} // 19f0:03da
    {dw tmp999=0;MYCOPY(word_288bc)} // 19f0:03dc
    {dw tmp999=0;MYCOPY(word_288be)} // 19f0:03de
    {dw tmp999=0;MYCOPY(word_288c0)} // 19f0:03e0
    {dw tmp999=0;MYCOPY(word_288c2)} // 19f0:03e2
    {db tmp999[48]={0};MYCOPY(dummy7_1a2e4)} // 19f0:03e4
    {dw tmp999=0;MYCOPY(word_288f4)} // 19f0:0414
    {dw tmp999=0;MYCOPY(word_288f6)} // 19f0:0416
    {dw tmp999=0;MYCOPY(word_288f8)} // 19f0:0418
    {dw tmp999=0;MYCOPY(word_288fa)} // 19f0:041a
    {dw tmp999=0;MYCOPY(word_288fc)} // 19f0:041c
    {dw tmp999=0;MYCOPY(word_288fe)} // 19f0:041e
    {dw tmp999=0;MYCOPY(word_28901)} // 19f0:0421
    {dw tmp999=0;MYCOPY(word_28903)} // 19f0:0423
    {dw tmp999=0;MYCOPY(word_28905)} // 19f0:0425
    {dw tmp999=0;MYCOPY(word_28907)} // 19f0:0427
    {dw tmp999=0;MYCOPY(word_28909)} // 19f0:0429
    {dw tmp999=0;MYCOPY(word_2890b)} // 19f0:042b
    {dw tmp999=0;MYCOPY(word_2890d)} // 19f0:042d
    {dw tmp999=0;MYCOPY(word_2890f)} // 19f0:042f
    {dw tmp999=0;MYCOPY(word_28911)} // 19f0:0431
    {dw tmp999=0;MYCOPY(word_28913)} // 19f0:0433
    {dw tmp999=0;MYCOPY(word_28915)} // 19f0:0435
    {dw tmp999=0;MYCOPY(word_28917)} // 19f0:0437
    {dw tmp999=0;MYCOPY(word_28919)} // 19f0:0439
    {dw tmp999=0;MYCOPY(word_2891b)} // 19f0:043b
    {dw tmp999=0;MYCOPY(word_2891d)} // 19f0:043d
    {dw tmp999=0;MYCOPY(word_2891f)} // 19f0:043f
    {dw tmp999=0;MYCOPY(word_28921)} // 19f0:0441
    {dw tmp999=0;MYCOPY(word_28923)} // 19f0:0443
    {dw tmp999=0;MYCOPY(word_28925)} // 19f0:0445
    {dw tmp999=0;MYCOPY(word_28927)} // 19f0:0447
    {dw tmp999=0;MYCOPY(word_28929)} // 19f0:0449
    {db tmp999=0;MYCOPY(byte_2892b)} // 19f0:044b
    {db tmp999[4049]={0};MYCOPY(dummy7_1a34c)} // 19f0:044c
    {dw tmp999=0;MYCOPY(word_298fd)} // 19f0:141d
    {db tmp999[398]={0};MYCOPY(dummy7_1b31f)} // 19f0:141f
    {dw tmp999=0;MYCOPY(word_29a8d)} // 19f0:15ad
    {dw tmp999=0;MYCOPY(word_29a8f)} // 19f0:15af
    {dw tmp999=0;MYCOPY(word_29a91)} // 19f0:15b1
    {db tmp999[314]={0};MYCOPY(dummy7_1b4b3)} // 19f0:15b3
    {dw tmp999=0;MYCOPY(word_29bcd)} // 19f0:16ed
    {dw tmp999=0;MYCOPY(word_29bcf)} // 19f0:16ef
    {dw tmp999=0;MYCOPY(word_29bd1)} // 19f0:16f1
    {db tmp999[2716]={0};MYCOPY(dummy7_1b5f3)} // 19f0:16f3
    {dw tmp999=0;MYCOPY(word_2a66f)} // 19f0:218f
    {dw tmp999=0;MYCOPY(word_2a671)} // 19f0:2191
    {db tmp999[1000]={0};MYCOPY(dummy7_1c093)} // 19f0:2193
    {dw tmp999=0;MYCOPY(word_2aa5b)} // 19f0:257b
    {dw tmp999=0;MYCOPY(word_2aa5d)} // 19f0:257d
    {dw tmp999=0;MYCOPY(word_2aa5f)} // 19f0:257f
    {dw tmp999=0;MYCOPY(word_2aa61)} // 19f0:2581
    {db tmp999=0;MYCOPY(byte_2aa63)} // 19f0:2583
    {db tmp999[32]={0};MYCOPY(dummy7_1c484)} // 19f0:2584
    {dw tmp999=0;MYCOPY(word_2aa84)} // 19f0:25a4
    {dw tmp999=0;MYCOPY(word_2aa86)} // 19f0:25a6
    {dw tmp999=0;MYCOPY(word_2aa88)} // 19f0:25a8
    {db tmp999=0;MYCOPY(byte_2aa8a)} // 19f0:25aa
    {dw tmp999=0;MYCOPY(word_2aa8b)} // 19f0:25ab
    {dw tmp999=0;MYCOPY(word_2aa8d)} // 19f0:25ad
    {dw tmp999=0;MYCOPY(word_2aa8f)} // 19f0:25af
    {db tmp999[2]={0};MYCOPY(dummy7_1c4b1)} // 19f0:25b1
    {dw tmp999=0;MYCOPY(word_2aa93)} // 19f0:25b3
    {dw tmp999=0;MYCOPY(word_2aa95)} // 19f0:25b5
    {dw tmp999=0;MYCOPY(word_2aa97)} // 19f0:25b7
    {dw tmp999=0;MYCOPY(word_2aa99)} // 19f0:25b9
    {dw tmp999=0;MYCOPY(word_2aa9b)} // 19f0:25bb
    {dw tmp999=0;MYCOPY(word_2aa9d)} // 19f0:25bd
    {dw tmp999=0;MYCOPY(word_2aa9f)} // 19f0:25bf
    {dw tmp999=0;MYCOPY(word_2aaa1)} // 19f0:25c1
    {dw tmp999=0;MYCOPY(word_2aaa3)} // 19f0:25c3
    {db tmp999[4]={0};MYCOPY(dummy7_1c4c5)} // 19f0:25c5
    {dw tmp999=0;MYCOPY(word_2aaa9)} // 19f0:25c9
    {dw tmp999=0;MYCOPY(word_2aaab)} // 19f0:25cb
    {db tmp999[2]={0};MYCOPY(dummy7_1c4cd)} // 19f0:25cd
    {db tmp999=0;MYCOPY(byte_2aaaf)} // 19f0:25cf
    {db tmp999[12]={0};MYCOPY(dummy7_1c4d0)} // 19f0:25d0
    {dw tmp999=0;MYCOPY(word_2aabc)} // 19f0:25dc
    {dw tmp999=0;MYCOPY(word_2aabe)} // 19f0:25de
    {dw tmp999=0;MYCOPY(word_2aac1)} // 19f0:25e1
    {dw tmp999=0;MYCOPY(word_2aac3)} // 19f0:25e3
    {dw tmp999=0;MYCOPY(word_2aac5)} // 19f0:25e5
    {db tmp999[1405]={0};MYCOPY(dummy7_1c4e7)} // 19f0:25e7
    {dw tmp999=0;MYCOPY(word_2b044)} // 19f0:2b64
    {db tmp999[14]={2,0,9,0,8,0,15,0,23,0,25,0,255,255};MYCOPY(dummy7_1ca66)} // 19f0:2b66
    {db tmp999[12]={162,1,163,1,164,1,166,1,165,1,192,1};MYCOPY(dummy7_1ca74)} // 19f0:2b66
    {db tmp999[20]={0,0,0,0,0,0,1,0,1,0,1,0,2,0,2,0,2,0,3,0};MYCOPY(dummy7_1ca80)} // 19f0:2b66
    {db tmp999[18]={3,0,3,0,4,0,4,0,4,0,5,0,5,0,5,0,6,0};MYCOPY(dummy7_1ca94)} // 19f0:2b66
    {dw tmp999=(dw)m2c::ksub_12709;MYCOPY(off_2b086)} // 19f0:2ba6
    {dw tmp999=(dw)m2c::ksub_12758;MYCOPY(dummy7_1caa8)} // 19f0:2ba8
    {dw tmp999=(dw)m2c::ksub_127db;MYCOPY(dummy7_1caaa)} // 19f0:2baa
    {dw tmp999=(dw)m2c::ksub_127e4;MYCOPY(dummy7_1caac)} // 19f0:2bac
    {dw tmp999=(dw)m2c::ksub_126ef;MYCOPY(dummy7_1caae)} // 19f0:2bae
    {dw tmp999=(dw)m2c::ksub_12738;MYCOPY(dummy7_1cab0)} // 19f0:2bb0
    {dw tmp999=0;MYCOPY(word_2b092)} // 19f0:2bb2
    {dd tmp999=0;MYCOPY(dword_2b094)} // 19f0:2bb4
    {dd tmp999=0;MYCOPY(dword_2b098)} // 19f0:2bb8
    {dw tmp999=0;MYCOPY(word_2b09c)} // 19f0:2bbc
    {db tmp999[2]={13,10};MYCOPY(aanerrorhasoccu)} // 19f0:2bbe
    {char tmp999[56]={'*','*','*',' ','A','n',' ','E','r','r','o','r',' ','h','a','s',' ','o','c','c','u','r','e','d',' ','w','h','i','l','e',' ','r','u','n','n','i','n','g',' ','P','C',' ','V','i','k','i','n','g','s',' ','*','*','*','\r','\n','$'};MYCOPY(dummy7_1cac0)} // 19f0:2bbe
    {db tmp999[2]={13,10};MYCOPY(anotenoughmemor)} // 19f0:2bf8
    {char tmp999[58]={'N','o','t',' ','e','n','o','u','g','h',' ','m','e','m','o','r','y',' ','-','-',' ','A','t',' ','l','e','a','s','t',' ','5','6','4','K',' ','o','f',' ','m','e','m','o','r','y',' ','i','s',' ','n','e','e','d','e','d','.','\r','\n','$'};MYCOPY(dummy7_1cafa)} // 19f0:2bf8
    {db tmp999[2]={13,10};MYCOPY(acannotfinddata)} // 19f0:2c34
    {char tmp999[53]={'C','a','n','n','o','t',' ','f','i','n','d',' ',39,'d','a','t','a','.','d','a','t',39,' ','f','i','l','e',' ','i','n',' ','t','h','e',' ','c','u','r','r','e','n','t',' ','d','i','r','e','c','t','o','r','y','.'};MYCOPY(dummy7_1cb36)} // 19f0:2c34
    {char tmp999[3]={'\r','\n','$'};MYCOPY(dummy7_1cb6b)} // 19f0:2c34
    {db tmp999[2]={13,10};MYCOPY(apcvikingsmustb)} // 19f0:2c6e
    {char tmp999[54]={'P','C',' ','V','i','k','i','n','g','s',' ','m','u','s','t',' ','b','e',' ','r','u','n',' ','o','n',' ','a',' ','s','y','s','t','e','m',' ','w','i','t','h',' ','a',' ','V','G','A',' ','c','a','r','d','.','\r','\n','$'};MYCOPY(dummy7_1cb70)} // 19f0:2c6e
    {db tmp999[2]={13,10};MYCOPY(apcvikingsrequi)} // 19f0:2ca6
    {char tmp999[61]={'P','C',' ','V','i','k','i','n','g','s',' ','r','e','q','u','i','r','e','s',' ','a',' ','3','8','6',' ','(','o','r',' ','b','e','t','t','e','r',')',' ','m','i','c','r','o','p','r','o','c','e','s','s','o','r',' ','t','o',' ','r','u','n','.','\r'};MYCOPY(dummy7_1cba8)} // 19f0:2ca6
    {char tmp999[2]={'\n','$'};MYCOPY(dummy7_1cbe5)} // 19f0:2ca6
    {db tmp999[2]={13,10};MYCOPY(aunabletoreadda)} // 19f0:2ce7
    {char tmp999[28]={'U','n','a','b','l','e',' ','t','o',' ','r','e','a','d',' ','d','a','t','a',' ','f','i','l','e','.','\r','\n','$'};MYCOPY(dummy7_1cbe9)} // 19f0:2ce7
    {db tmp999[2]={13,10};MYCOPY(aglobalbufferov)} // 19f0:2d05
    {char tmp999[38]={'G','l','o','b','a','l',' ','b','u','f','f','e','r',' ','o','v','e','r','r','u','n',' ','o','n',' ','f','i','l','e',' ','r','e','a','d','.','\r','\n','$'};MYCOPY(dummy7_1cc07)} // 19f0:2d05
    {db tmp999[2]={13,10};MYCOPY(auserabortedpro)} // 19f0:2d2d
    {char tmp999[39]={'U','s','e','r',' ','a','b','o','r','t','e','d',' ','p','r','o','g','r','a','m',' ','a','f','t','e','r',' ','I','/','O',' ','e','r','r','o','r','.','\r','\n'};MYCOPY(dummy7_1cc2f)} // 19f0:2d2d
    {char tmp999[3]={'$','\r','\n'};MYCOPY(dummy7_1cc56)} // 19f0:2d2d
    {char tmp999[50]={'D','a','t','a','.','d','a','t',' ','h','a','s',' ','b','e','e','n',' ','c','o','r','r','u','p','t','e','d','.',' ','P','l','e','a','s','e',' ','r','e','-','i','n','s','t','a','l','l','.','\r','\n','$'};MYCOPY(dummy7_1cc59)} // 19f0:2d2d
    {db tmp999[2]={13,10};MYCOPY(acopyprotection)} // 19f0:2d8b
    {char tmp999[45]={'C','o','p','y',' ','p','r','o','t','e','c','t','i','o','n',' ','f','a','i','l','u','r','e','.',' ','P','l','e','a','s','e',' ','r','u','n',' ','s','e','t','u','p','.','\r','\n','$'};MYCOPY(dummy7_1cc8d)} // 19f0:2d8b
    {db tmp999[2]={13,10};MYCOPY(astackoverflow)} // 19f0:2dba
    {char tmp999[18]={'S','t','a','c','k',' ','o','v','e','r','f','l','o','w','.','\r','\n','$'};MYCOPY(dummy7_1ccbc)} // 19f0:2dba
    {db tmp999[2]={13,10};MYCOPY(aloadinginstrum)} // 19f0:2dce
    {char tmp999[53]={'L','o','a','d','i','n','g',' ','i','n','s','t','r','u','m','e','n','t',' ','b','a','n','k',' ','f','o','r',' ','t','h','e',' ','M','T','3','2','.',' ','P','l','e','a','s','e',' ','w','a','i','t','.','\r','\n','$'};MYCOPY(dummy7_1ccd0)} // 19f0:2dce
    {db tmp999[2]={13,10};MYCOPY(aunabletoinitia)} // 19f0:2e05
    {char tmp999[61]={'U','n','a','b','l','e',' ','t','o',' ','i','n','i','t','i','a','l','i','z','e',' ','s','o','u','n','d',' ','c','a','r','d','.',' ',' ','D','e','f','a','u','l','t','i','n','g',' ','t','o',' ','n','o',' ','s','o','u','n','d','.','.','.','\r','\n'};MYCOPY(dummy7_1cd07)} // 19f0:2e05
    {char tmp999[1]={'$'};MYCOPY(dummy7_1cd44)} // 19f0:2e05
    {db tmp999[2]={13,10};MYCOPY(aerrorcodeis)} // 19f0:2e45
    {char tmp999[14]={'E','r','r','o','r',' ','c','o','d','e',' ','i','s',':'};MYCOPY(dummy7_1cd47)} // 19f0:2e45
    {db tmp999=32;MYCOPY(dummy7_1cd55)} // 19f0:2e55
    {db tmp999=32;MYCOPY(byte_2b336)} // 19f0:2e56
    {db tmp999=32;MYCOPY(byte_2b337)} // 19f0:2e57
    {db tmp999=32;MYCOPY(byte_2b338)} // 19f0:2e58
    {db tmp999=32;MYCOPY(byte_2b339)} // 19f0:2e59
    {db tmp999[3]={13,10,36};MYCOPY(dummy7_1cd5a)} // 19f0:2e5a
    {dw tmp999=0;MYCOPY(word_2b33d)} // 19f0:2e5d
    {dw tmp999=0;MYCOPY(word_2b33f)} // 19f0:2e5f
    {dw tmp999=0;MYCOPY(word_2b341)} // 19f0:2e61
    {dw tmp999=0;MYCOPY(word_2b343)} // 19f0:2e63
    {dw tmp999=0;MYCOPY(word_2b345)} // 19f0:2e65
    {dw tmp999=0;MYCOPY(word_2b347)} // 19f0:2e67
    {dw tmp999=0;MYCOPY(word_2b349)} // 19f0:2e69
    {dw tmp999=0;MYCOPY(word_2b34b)} // 19f0:2e6b
    {dw tmp999=0;MYCOPY(word_2b34d)} // 19f0:2e6d
    {dw tmp999=0;MYCOPY(word_2b34f)} // 19f0:2e6f
    {dw tmp999=0;MYCOPY(word_2b351)} // 19f0:2e71
    {dw tmp999=0;MYCOPY(word_2b353)} // 19f0:2e73
    {dw tmp999=0;MYCOPY(word_2b355)} // 19f0:2e75
    {dw tmp999=0;MYCOPY(word_2b357)} // 19f0:2e77
    {dd tmp999=0;MYCOPY(dword_2b359)} // 19f0:2e79
    {db tmp999[20608]={0};MYCOPY(dummy7_1cd7d)} // 19f0:2e7d
    {db tmp999=0;MYCOPY(byte_303dd)} // 19f0:7efd
    {dw tmp999=0;MYCOPY(word_303de)} // 19f0:7efe
    {dw tmp999=32514;MYCOPY(word_303e0)} // 19f0:7f00
    {db tmp999[9]={0};MYCOPY(dummy7_21e02)} // 19f0:7f02
    {dw tmp999=0;MYCOPY(word_303eb)} // 19f0:7f0b
    {db tmp999=0;MYCOPY(byte_303ed)} // 19f0:7f0d
    {db tmp999[36]={0};MYCOPY(dummy7_21e0e)} // 19f0:7f0e
    {dd tmp999=0;MYCOPY(dword_30412)} // 19f0:7f32
    {db tmp999[44]={0};MYCOPY(dummy7_21e36)} // 19f0:7f36
    {dd tmp999=0;MYCOPY(dword_30442)} // 19f0:7f62
    {db tmp999[44]={0};MYCOPY(dummy7_21e66)} // 19f0:7f66
    {dd tmp999=0;MYCOPY(dword_30472)} // 19f0:7f92
    {db tmp999[44]={0};MYCOPY(dummy7_21e96)} // 19f0:7f96
    {dd tmp999=0;MYCOPY(dword_304a2)} // 19f0:7fc2
    {db tmp999[44]={0};MYCOPY(dummy7_21ec6)} // 19f0:7fc6
    {dd tmp999=0;MYCOPY(dword_304d2)} // 19f0:7ff2
    {db tmp999[44]={0};MYCOPY(dummy7_21ef6)} // 19f0:7ff6
    {dd tmp999=0;MYCOPY(dword_30502)} // 19f0:8022
    {db tmp999[44]={0};MYCOPY(dummy7_21f26)} // 19f0:8026
    {dd tmp999=0;MYCOPY(dword_30532)} // 19f0:8052
    {db tmp999[44]={0};MYCOPY(dummy7_21f56)} // 19f0:8056
    {dd tmp999=0;MYCOPY(dword_30562)} // 19f0:8082
    {db tmp999[44]={0};MYCOPY(dummy7_21f86)} // 19f0:8086
    {dd tmp999=0;MYCOPY(dword_30592)} // 19f0:80b2
    {db tmp999[44]={0};MYCOPY(dummy7_21fb6)} // 19f0:80b6
    {dd tmp999=0;MYCOPY(dword_305c2)} // 19f0:80e2
    {db tmp999[44]={0};MYCOPY(dummy7_21fe6)} // 19f0:80e6
    {dd tmp999=0;MYCOPY(dword_305f2)} // 19f0:8112
    {db tmp999[44]={0};MYCOPY(dummy7_22016)} // 19f0:8116
    {dd tmp999=0;MYCOPY(dword_30622)} // 19f0:8142
    {db tmp999[44]={0};MYCOPY(dummy7_22046)} // 19f0:8146
    {dd tmp999=0;MYCOPY(dword_30652)} // 19f0:8172
    {db tmp999[44]={0};MYCOPY(dummy7_22076)} // 19f0:8176
    {dd tmp999=0;MYCOPY(dword_30682)} // 19f0:81a2
    {db tmp999[44]={0};MYCOPY(dummy7_220a6)} // 19f0:81a6
    {dd tmp999=0;MYCOPY(dword_306b2)} // 19f0:81d2
    {db tmp999[814]={0};MYCOPY(dummy7_220d6)} // 19f0:81d6
    {dw tmp999=0;MYCOPY(word_309e4)} // 19f0:8504
    {db tmp999=0;MYCOPY(byte_309e6)} // 19f0:8506
    {db tmp999[12]={32,0,162,1,0,0,176,1,162,0,64,0};MYCOPY(dummy7_22408)} // 19f0:8508
    {db tmp999[13]={32,0,98,0,0,0,39,0,66,1,0,0,191};MYCOPY(dummy7_22414)} // 19f0:8508
    {db tmp999[13]={0,32,1,64,0,95,1,47,1,0,0,88,0};MYCOPY(dummy7_22421)} // 19f0:8508
    {db tmp999[13]={128,0,0,0,200,0,128,0,64,0,128,0,112};MYCOPY(dummy7_2242e)} // 19f0:8508
    {db tmp999[12]={0,0,0,8,8,8,16,16,32,16,32,64};MYCOPY(dummy7_2243b)} // 19f0:8508
    {db tmp999[10]={32,64,64,125,46,125,49,125,52,125};MYCOPY(dummy7_22447)} // 19f0:8508
    {db tmp999[11]={55,125,58,125,61,125,64,125,67,125,70};MYCOPY(dummy7_22451)} // 19f0:8508
    {db tmp999[13]={109,6,127,6,145,6,31,6,35,6,127,11,131};MYCOPY(dummy7_2245c)} // 19f0:8508
    {db tmp999[12]={11,49,6,53,6,145,11,149,11,67,6,71};MYCOPY(dummy7_22469)} // 19f0:8508
    {db tmp999[11]={6,163,11,167,11,75,6,125,14,143,14};MYCOPY(dummy7_22475)} // 19f0:8508
    {db tmp999[11]={161,14,0,0,224,0,192,1,160,2,128};MYCOPY(dummy7_22480)} // 19f0:8508
    {db tmp999[16]={3,96,4,64,5,32,6,0,1,1,2,1,3,0,0,0};MYCOPY(dummy7_2248b)} // 19f0:8508
    {db tmp999[16]={4,5,6,0,0,0,0,0,0,0,211,212,210,212,199,210};MYCOPY(dummy7_2249b)} // 19f0:8508
    {db tmp999[9]={184,212,212,204,208,212,199,210,206};MYCOPY(dummy7_224ab)} // 19f0:8508
    {db tmp999[10]={196,204,204,205,176,198,204,176,212,212};MYCOPY(dummy7_224b4)} // 19f0:8508
    {db tmp999[9]={210,211,211,208,210,200,211,195,214};MYCOPY(dummy7_224be)} // 19f0:8508
    {db tmp999[9]={210,206,194,194,204,211,214,204,195};MYCOPY(dummy7_224c7)} // 19f0:8508
    {db tmp999[9]={206,209,195,203,211,208,200,210,176};MYCOPY(dummy7_224d0)} // 19f0:8508
    {db tmp999[9]={195,177,210,176,211,208,203,211,202};MYCOPY(dummy7_224d9)} // 19f0:8508
    {db tmp999[10]={205,206,206,212,212,210,211,202,204,204};MYCOPY(dummy7_224e2)} // 19f0:8508
    {db tmp999[9]={217,208,204,206,199,194,212,210,217};MYCOPY(dummy7_224ec)} // 19f0:8508
    {db tmp999[9]={202,206,203,210,195,194,204,212,200};MYCOPY(dummy7_224f5)} // 19f0:8508
    {db tmp999[9]={176,208,208,211,205,210,212,214,184};MYCOPY(dummy7_224fe)} // 19f0:8508
    {db tmp999[10]={212,210,206,198,204,184,215,203,217,217};MYCOPY(dummy7_22507)} // 19f0:8508
    {db tmp999[9]={195,205,194,176,184,194,204,204,212};MYCOPY(dummy7_22511)} // 19f0:8508
    {db tmp999[9]={210,196,210,198,206,212,205,215,210};MYCOPY(dummy7_2251a)} // 19f0:8508
    {db tmp999[11]={204,210,212,210,208,196,212,198,198,198,198};MYCOPY(dummy7_22523)} // 19f0:8508
    {db tmp999[9]={210,199,212,180,210,206,180,205,211};MYCOPY(dummy7_2252e)} // 19f0:8508
    {db tmp999[2]={212,210};MYCOPY(dummy7_22537)} // 19f0:8508
    {dd tmp999=0;MYCOPY(dword_30b19)} // 19f0:8639
    {db tmp999[2]={13,10};MYCOPY(aanioerrorhasoc)} // 19f0:863e
    {char tmp999[53]={'A','n',' ','I','/','O',' ','e','r','r','o','r',' ','h','a','s',' ','o','c','c','u','r','r','e','d',' ','w','h','i','l','e',' ','r','u','n','n','i','n','g',' ','P','C',' ','V','i','k','i','n','g','s','.','\r','\n'};MYCOPY(dummy7_22540)} // 19f0:863e
    {char tmp999[41]={'P','r','e','s','s',' ',39,'R',39,' ','t','o',' ','r','e','t','r','y',',',' ','o','r',' ',39,'A',39,' ','t','o',' ','e','x','i','t',' ','p','r','o','g','r','a'};MYCOPY(dummy7_22575)} // 19f0:863e
    {char tmp999[4]={'m','.','\r','\n'};MYCOPY(dummy7_2259e)} // 19f0:863e
    {char tmp999[10]="$data.dat";MYCOPY(dummy7_225a2)} // 19f0:863e
    {dw tmp999=0;MYCOPY(word_30b8c)} // 19f0:86ac
    {dw tmp999=0;MYCOPY(word_30b8e)} // 19f0:86ae
    {db tmp999[2]={0};MYCOPY(dummy7_225b0)} // 19f0:86b0
    {dw tmp999=0;MYCOPY(word_30b92)} // 19f0:86b2
    {dw tmp999=0;MYCOPY(word_30b94)} // 19f0:86b4
    {dw tmp999=0;MYCOPY(word_30b96)} // 19f0:86b6
    {dw tmp999=0;MYCOPY(word_30b98)} // 19f0:86b8
    {dw tmp999=0;MYCOPY(word_30b9a)} // 19f0:86ba
    {dw tmp999=0;MYCOPY(word_30b9c)} // 19f0:86bc
    {dw tmp999=0;MYCOPY(word_30b9e)} // 19f0:86be
    {dw tmp999=0;MYCOPY(word_30ba0)} // 19f0:86c0
    {dw tmp999=0;MYCOPY(word_30ba2)} // 19f0:86c2
    {dw tmp999=0;MYCOPY(word_30ba4)} // 19f0:86c4
    {dw tmp999=0;MYCOPY(word_30bb0)} // 19f0:86d0
    {dw tmp999=0;MYCOPY(word_30bb2)} // 19f0:86d2
    {dw tmp999=0;MYCOPY(word_30bb4)} // 19f0:86d4
    {dw tmp999=0;MYCOPY(word_30bb6)} // 19f0:86d6
    {dw tmp999=0;MYCOPY(word_30bb8)} // 19f0:86d8
    {dw tmp999=0;MYCOPY(word_30bba)} // 19f0:86da
    {dw tmp999=0;MYCOPY(word_30bbc)} // 19f0:86dc
    {dw tmp999=0;MYCOPY(word_30bbe)} // 19f0:86de
    {dw tmp999=(dw)m2c::ksub_1227e;MYCOPY(off_30bc0)} // 19f0:86e0
    {dw tmp999=(dw)m2c::ksub_122c0;MYCOPY(dummy7_225e2)} // 19f0:86e2
    {dw tmp999=(dw)m2c::ksub_122f3;MYCOPY(dummy7_225e4)} // 19f0:86e4
    {dw tmp999=(dw)m2c::ksub_130a2;MYCOPY(funcs_1309b)} // 19f0:86e6
    {dw tmp999=(dw)m2c::ksub_130ef;MYCOPY(dummy7_225e8)} // 19f0:86e6
    {dw tmp999=(dw)m2c::ksub_177b2;MYCOPY(dummy7_225ea)} // 19f0:86e6
    {dw tmp999=(dw)m2c::ksub_134d3;MYCOPY(dummy7_225ec)} // 19f0:86e6
    {dw tmp999=(dw)m2c::ksub_13674;MYCOPY(dummy7_225ee)} // 19f0:86e6
    {dw tmp999=(dw)m2c::ksub_134ca;MYCOPY(dummy7_225f0)} // 19f0:86e6
    {dw tmp999=(dw)m2c::ksub_134d7;MYCOPY(dummy7_225f2)} // 19f0:86e6
    {dw tmp999=(dw)m2c::ksub_13158;MYCOPY(dummy7_225f4)} // 19f0:86e6
    {dw tmp999=(dw)m2c::ksub_131a4;MYCOPY(dummy7_225f6)} // 19f0:86e6
    {dw tmp999=(dw)m2c::ksub_131f1;MYCOPY(dummy7_225f8)} // 19f0:86e6
    {dw tmp999=(dw)m2c::ksub_1323d;MYCOPY(dummy7_225fa)} // 19f0:86e6
    {dw tmp999=(dw)m2c::ksub_13286;MYCOPY(dummy7_225fc)} // 19f0:86e6
    {dw tmp999=(dw)m2c::ksub_13288;MYCOPY(dummy7_225fe)} // 19f0:86e6
    {dw tmp999=(dw)m2c::ksub_1345e;MYCOPY(dummy7_22600)} // 19f0:86e6
    {dw tmp999=(dw)m2c::ksub_1346d;MYCOPY(dummy7_22602)} // 19f0:86e6
    {dw tmp999=(dw)m2c::ksub_13474;MYCOPY(dummy7_22604)} // 19f0:86e6
    {dw tmp999=(dw)m2c::ksub_13480;MYCOPY(dummy7_22606)} // 19f0:86e6
    {dw tmp999=(dw)m2c::ksub_13485;MYCOPY(dummy7_22608)} // 19f0:86e6
    {dw tmp999=(dw)m2c::ksub_1348a;MYCOPY(dummy7_2260a)} // 19f0:86e6
    {dw tmp999=(dw)m2c::ksub_1341f;MYCOPY(dummy7_2260c)} // 19f0:86e6
    {dw tmp999=(dw)m2c::ksub_134dc;MYCOPY(dummy7_2260e)} // 19f0:86e6
    {dw tmp999=(dw)m2c::ksub_132df;MYCOPY(dummy7_22610)} // 19f0:86e6
    {dw tmp999=(dw)m2c::ksub_13674;MYCOPY(dummy7_22612)} // 19f0:86e6
    {dw tmp999=(dw)m2c::ksub_1356e;MYCOPY(dummy7_22614)} // 19f0:86e6
    {dw tmp999=(dw)m2c::ksub_1339f;MYCOPY(dummy7_22616)} // 19f0:86e6
    {dw tmp999=(dw)m2c::ksub_133de;MYCOPY(dummy7_22618)} // 19f0:86e6
    {dw tmp999=(dw)m2c::ksub_1346f;MYCOPY(dummy7_2261a)} // 19f0:86e6
    {db tmp999[14]={1,0,129,4,1,9,129,13,1,18,129,22,1,27};MYCOPY(dummy7_2261c)} // 19f0:871c
    {db tmp999[10]={129,31,1,36,129,40,1,45,129,49};MYCOPY(dummy7_2262a)} // 19f0:871c
    {dw tmp999=0;MYCOPY(word_30c14)} // 19f0:8734
    {db tmp999[120]={0};MYCOPY(dummy7_22636)} // 19f0:8736
    {dw tmp999=(dw)m2c::kloc_144e9;MYCOPY(off_30c8e)} // 19f0:87ae
    {dw tmp999=(dw)m2c::kloc_144f3;MYCOPY(dummy7_226b0)} // 19f0:87b0
    {dw tmp999=(dw)m2c::ksub_142cf;MYCOPY(off_30c92)} // 19f0:87b2
    {dw tmp999=(dw)m2c::kloc_15318;MYCOPY(off_30c94)} // 19f0:87b4
    {dw tmp999=(dw)m2c::ksub_142cf;MYCOPY(dummy7_226b6)} // 19f0:87b6
    {dw tmp999=(dw)m2c::ksub_1547e;MYCOPY(funcs_1547a)} // 19f0:87b8
    {dw tmp999=(dw)m2c::ksub_15485;MYCOPY(dummy7_226ba)} // 19f0:87b8
    {dw tmp999=(dw)m2c::ksub_1549a;MYCOPY(dummy7_226bc)} // 19f0:87b8
    {dw tmp999=(dw)m2c::ksub_154a3;MYCOPY(dummy7_226be)} // 19f0:87b8
    {dw tmp999=(dw)m2c::ksub_12312;MYCOPY(dummy7_226c0)} // 19f0:87b8
    {dw tmp999=(dw)m2c::klocret_15504;MYCOPY(dummy7_226c2)} // 19f0:87b8
    {dw tmp999=(dw)m2c::kloc_154cb;MYCOPY(dummy7_226c4)} // 19f0:87b8
    {dw tmp999=(dw)m2c::kloc_154e1;MYCOPY(dummy7_226c6)} // 19f0:87b8
    {dw tmp999=(dw)m2c::kloc_154eb;MYCOPY(dummy7_226c8)} // 19f0:87c8
    {dw tmp999=(dw)m2c::klocret_15504;MYCOPY(dummy7_226ca)} // 19f0:87ca
    {dw tmp999[3]={(dw)m2c::ksub_142b7,(dw)m2c::knullsub_5,(dw)m2c::ksub_177b2};MYCOPY(funcs_142b0)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_142cf,(dw)m2c::ksub_1782a,(dw)m2c::ksub_142c1};MYCOPY(dummy7_226d2)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_142d3,(dw)m2c::ksub_1368c,(dw)m2c::ksub_1367c};MYCOPY(dummy7_226d8)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_13743,(dw)m2c::ksub_13733,(dw)m2c::ksub_1369c};MYCOPY(dummy7_226de)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_13753,(dw)m2c::ksub_142dc,(dw)m2c::ksub_142fc};MYCOPY(dummy7_226e4)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_1431c,(dw)m2c::ksub_14327,(dw)m2c::ksub_14334};MYCOPY(dummy7_226ea)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_14340,(dw)m2c::ksub_1434c,(dw)m2c::ksub_14f59};MYCOPY(dummy7_226f0)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_150fc,(dw)m2c::ksub_15106,(dw)m2c::ksub_143f2};MYCOPY(dummy7_226f6)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_14409,(dw)m2c::ksub_14428,(dw)m2c::ksub_1559c};MYCOPY(dummy7_226fc)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_143fe,(dw)m2c::ksub_1443d,(dw)m2c::ksub_15686};MYCOPY(dummy7_22702)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_1444f,(dw)m2c::ksub_14469,(dw)m2c::ksub_144a9};MYCOPY(dummy7_22708)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_14483,(dw)m2c::ksub_14453,(dw)m2c::ksub_1446d};MYCOPY(dummy7_2270e)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_144ad,(dw)m2c::ksub_14487,(dw)m2c::ksub_14edd};MYCOPY(dummy7_22714)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_14f09,(dw)m2c::ksub_14f27,(dw)m2c::ksub_15017};MYCOPY(dummy7_2271a)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_15078,(dw)m2c::ksub_15039,(dw)m2c::ksub_15f2c};MYCOPY(dummy7_22720)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_15f25,(dw)m2c::ksub_1522c,(dw)m2c::ksub_13031};MYCOPY(dummy7_22726)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_144cf,(dw)m2c::ksub_144d3,(dw)m2c::ksub_15772};MYCOPY(dummy7_2272c)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_157d5,(dw)m2c::ksub_150b5,(dw)m2c::ksub_15e91};MYCOPY(dummy7_22732)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_15e8a,(dw)m2c::ksub_155c0,(dw)m2c::ksub_156aa};MYCOPY(dummy7_22738)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_145da,(dw)m2c::ksub_14340,(dw)m2c::ksub_1524a};MYCOPY(dummy7_2273e)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_15838,(dw)m2c::ksub_14532,(dw)m2c::ksub_14590};MYCOPY(dummy7_22744)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_145e5,(dw)m2c::ksub_14604,(dw)m2c::ksub_1242e};MYCOPY(dummy7_2274a)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_12669,(dw)m2c::ksub_1267b,(dw)m2c::ksub_1246d};MYCOPY(dummy7_22750)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_12634,(dw)m2c::ksub_1268d,(dw)m2c::knullsub_4};MYCOPY(dummy7_22756)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_14fec,(dw)m2c::ksub_14fc4,(dw)m2c::ksub_14fc8};MYCOPY(dummy7_2275c)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_16252,(dw)m2c::ksub_14561,(dw)m2c::ksub_145b5};MYCOPY(dummy7_22762)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_144fd,(dw)m2c::ksub_14501,(dw)m2c::ksub_126a9};MYCOPY(dummy7_22768)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_14624,(dw)m2c::ksub_1462e,(dw)m2c::ksub_14646};MYCOPY(dummy7_2276e)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_14652,(dw)m2c::ksub_1466e,(dw)m2c::ksub_14686};MYCOPY(dummy7_22774)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_146a3,(dw)m2c::ksub_146b4,(dw)m2c::ksub_146de};MYCOPY(dummy7_2277a)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_14704,(dw)m2c::ksub_14721,(dw)m2c::ksub_1474b};MYCOPY(dummy7_22780)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_14771,(dw)m2c::ksub_1478b,(dw)m2c::ksub_147a7};MYCOPY(dummy7_22786)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_147bf,(dw)m2c::ksub_147cb,(dw)m2c::ksub_147e7};MYCOPY(dummy7_2278c)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_147ff,(dw)m2c::ksub_1480b,(dw)m2c::ksub_14827};MYCOPY(dummy7_22792)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_1483f,(dw)m2c::ksub_1484b,(dw)m2c::ksub_14867};MYCOPY(dummy7_22798)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_14879,(dw)m2c::ksub_1488b,(dw)m2c::ksub_1489d};MYCOPY(dummy7_2279e)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_148af,(dw)m2c::ksub_148c1,(dw)m2c::ksub_148d3};MYCOPY(dummy7_227a4)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_148e5,(dw)m2c::ksub_148f7,(dw)m2c::ksub_14909};MYCOPY(dummy7_227aa)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_14a0b,(dw)m2c::ksub_14a1b,(dw)m2c::ksub_14a2b};MYCOPY(dummy7_227b0)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_14a3b,(dw)m2c::ksub_14a4b,(dw)m2c::ksub_14a5b};MYCOPY(dummy7_227b6)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_14a6b,(dw)m2c::ksub_14a7b,(dw)m2c::ksub_14a8b};MYCOPY(dummy7_227bc)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_14a9b,(dw)m2c::ksub_1491b,(dw)m2c::ksub_14933};MYCOPY(dummy7_227c2)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_1494b,(dw)m2c::ksub_14963,(dw)m2c::ksub_1497b};MYCOPY(dummy7_227c8)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_14993,(dw)m2c::ksub_149ab,(dw)m2c::ksub_149c3};MYCOPY(dummy7_227ce)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_149db,(dw)m2c::ksub_149f3,(dw)m2c::ksub_14aab};MYCOPY(dummy7_227d4)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_14abb,(dw)m2c::ksub_14acb,(dw)m2c::ksub_14adb};MYCOPY(dummy7_227da)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_14aeb,(dw)m2c::ksub_14afb,(dw)m2c::ksub_14b0b};MYCOPY(dummy7_227e0)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_14b1b,(dw)m2c::ksub_14b2b,(dw)m2c::ksub_14b3b};MYCOPY(dummy7_227e6)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_146d0,(dw)m2c::ksub_146f6,(dw)m2c::ksub_14713};MYCOPY(dummy7_227ec)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_1473d,(dw)m2c::ksub_14763,(dw)m2c::ksub_1477d};MYCOPY(dummy7_227f2)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_14675,(dw)m2c::ksub_14b4b,(dw)m2c::ksub_14b52};MYCOPY(dummy7_227f8)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_14b59,(dw)m2c::ksub_14b60,(dw)m2c::ksub_14b67};MYCOPY(dummy7_227fe)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_14b71,(dw)m2c::ksub_14ba7,(dw)m2c::ksub_14bcf};MYCOPY(dummy7_22804)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_14c09,(dw)m2c::ksub_14c37,(dw)m2c::ksub_14c59};MYCOPY(dummy7_2280a)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_14d0f,(dw)m2c::ksub_14d3d,(dw)m2c::ksub_14d5f};MYCOPY(dummy7_22810)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_14c8d,(dw)m2c::ksub_14cbb,(dw)m2c::ksub_14cdd};MYCOPY(dummy7_22816)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_14d91,(dw)m2c::ksub_14da1,(dw)m2c::ksub_14db1};MYCOPY(dummy7_2281c)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_14dc1,(dw)m2c::ksub_14dd1,(dw)m2c::ksub_14de4};MYCOPY(dummy7_22822)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_14df4,(dw)m2c::ksub_14e04,(dw)m2c::ksub_14e14};MYCOPY(dummy7_22828)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_14e24,(dw)m2c::ksub_14e37,(dw)m2c::ksub_14e47};MYCOPY(dummy7_2282e)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_14e57,(dw)m2c::ksub_14e67,(dw)m2c::ksub_14e77};MYCOPY(dummy7_22834)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_14e8a,(dw)m2c::ksub_14e9a,(dw)m2c::ksub_14eaa};MYCOPY(dummy7_2283a)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_14eba,(dw)m2c::ksub_14eca,(dw)m2c::ksub_14681};MYCOPY(dummy7_22840)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_1469e,(dw)m2c::ksub_146af,(dw)m2c::ksub_1515c};MYCOPY(dummy7_22846)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_1518a,(dw)m2c::ksub_151f2,(dw)m2c::ksub_151b8};MYCOPY(dummy7_2284c)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_15160,(dw)m2c::ksub_1518e,(dw)m2c::ksub_151f6};MYCOPY(dummy7_22852)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_151bc,(dw)m2c::ksub_15268,(dw)m2c::ksub_1527b};MYCOPY(dummy7_22858)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_1529a,(dw)m2c::ksub_152b3,(dw)m2c::ksub_1267b};MYCOPY(dummy7_2285e)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_152de,(dw)m2c::ksub_152ca,(dw)m2c::ksub_152d6};MYCOPY(dummy7_22864)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_152c6,(dw)m2c::ksub_15e7c,(dw)m2c::ksub_15f17};MYCOPY(dummy7_2286a)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_1287a,(dw)m2c::ksub_12829,(dw)m2c::ksub_1531c};MYCOPY(dummy7_22870)} // 19f0:87cc
    {dw tmp999[3]={(dw)m2c::ksub_178d6,(dw)m2c::ksub_178f1,(dw)m2c::ksub_1787f};MYCOPY(dummy7_22876)} // 19f0:87cc
    {db tmp999[15]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};MYCOPY(dummy7_2287c)} // 19f0:897c
    {db tmp999[12]={15,15,14,13,12,11,10,9,8,7,6,5};MYCOPY(dummy7_2288b)} // 19f0:897c
    {db tmp999[13]={4,3,2,1,0,0,0,1,1,2,2,3,3};MYCOPY(dummy7_22897)} // 19f0:897c
    {db tmp999[12]={4,4,5,5,6,6,7,7,8,8,9,9};MYCOPY(dummy7_228a4)} // 19f0:897c
    {db tmp999[10]={10,10,11,11,12,12,13,13,14,14};MYCOPY(dummy7_228b0)} // 19f0:897c
    {db tmp999[10]={15,15,7,7,6,6,5,5,4,4};MYCOPY(dummy7_228ba)} // 19f0:897c
    {db tmp999[10]={3,3,2,2,1,1,0,0,15,15};MYCOPY(dummy7_228c4)} // 19f0:897c
    {db tmp999[10]={14,14,13,13,12,12,11,11,10,10};MYCOPY(dummy7_228ce)} // 19f0:897c
    {db tmp999[12]={9,9,8,8,6,13,7,62,9,1,12,22};MYCOPY(dummy7_228d8)} // 19f0:897c
    {db tmp999[11]={13,0,16,234,17,172,18,223,19,43,20};MYCOPY(dummy7_228e4)} // 19f0:897c
    {db tmp999[9]={0,21,231,22,6,23,227,24,95};MYCOPY(dummy7_228ef)} // 19f0:897c
    {dw tmp999=5632;MYCOPY(word_30ed8)} // 19f0:89f8
    {db tmp999[10]={176,24,96,27,16,30,192,32,112,35};MYCOPY(dummy7_228fa)} // 19f0:89fa
    {db tmp999[10]={32,38,208,40,128,43,48,46,224,48};MYCOPY(dummy7_22904)} // 19f0:89fa
    {db tmp999[10]={144,51,64,54,240,56,160,59,80,62};MYCOPY(dummy7_2290e)} // 19f0:89fa
    {db tmp999[11]={0,65,176,67,96,70,16,73,192,75,112};MYCOPY(dummy7_22918)} // 19f0:89fa
    {db tmp999[10]={78,32,81,208,83,128,86,48,89,224};MYCOPY(dummy7_22923)} // 19f0:89fa
    {db tmp999[10]={91,144,94,64,97,240,99,160,102,80};MYCOPY(dummy7_2292d)} // 19f0:89fa
    {db tmp999[11]={105,0,108,176,110,96,113,16,116,192,118};MYCOPY(dummy7_22937)} // 19f0:89fa
    {db tmp999[11]={112,121,32,124,208,126,128,129,48,132,224};MYCOPY(dummy7_22942)} // 19f0:89fa
    {db tmp999[10]={134,144,137,64,140,240,142,160,145,80};MYCOPY(dummy7_2294d)} // 19f0:89fa
    {db tmp999[11]={148,0,151,176,153,96,156,16,159,192,161};MYCOPY(dummy7_22957)} // 19f0:89fa
    {db tmp999[10]={112,164,32,167,208,169,128,172,48,175};MYCOPY(dummy7_22962)} // 19f0:89fa
    {db tmp999[9]={224,177,144,180,64,183,240,185,160};MYCOPY(dummy7_2296c)} // 19f0:89fa
    {db tmp999[10]={188,80,191,0,194,176,196,96,199,16};MYCOPY(dummy7_22975)} // 19f0:89fa
    {db tmp999[9]={202,192,204,112,207,32,210,208,212};MYCOPY(dummy7_2297f)} // 19f0:89fa
    {db tmp999[10]={128,215,48,218,224,220,144,223,64,226};MYCOPY(dummy7_22988)} // 19f0:89fa
    {db tmp999[11]={240,228,0,22,176,24,96,27,16,30,192};MYCOPY(dummy7_22992)} // 19f0:89fa
    {db tmp999[11]={32,112,35,32,38,208,40,128,43,48,46};MYCOPY(dummy7_2299d)} // 19f0:89fa
    {db tmp999[10]={224,48,144,51,64,54,240,56,160,59};MYCOPY(dummy7_229a8)} // 19f0:89fa
    {db tmp999[11]={80,62,0,65,176,67,96,70,16,73,192};MYCOPY(dummy7_229b2)} // 19f0:89fa
    {db tmp999[11]={75,112,78,32,81,208,83,128,86,48,89};MYCOPY(dummy7_229bd)} // 19f0:89fa
    {db tmp999[10]={224,91,144,94,64,97,240,99,160,102};MYCOPY(dummy7_229c8)} // 19f0:89fa
    {db tmp999[11]={80,105,0,108,176,110,96,113,16,116,192};MYCOPY(dummy7_229d2)} // 19f0:89fa
    {db tmp999[11]={118,112,121,32,124,208,126,128,129,48,132};MYCOPY(dummy7_229dd)} // 19f0:89fa
    {db tmp999[10]={224,134,144,137,64,140,240,142,160,145};MYCOPY(dummy7_229e8)} // 19f0:89fa
    {db tmp999[11]={80,148,0,151,176,153,96,156,16,159,192};MYCOPY(dummy7_229f2)} // 19f0:89fa
    {db tmp999[10]={161,112,164,32,167,208,169,128,172,48};MYCOPY(dummy7_229fd)} // 19f0:89fa
    {db tmp999[9]={175,224,177,144,180,64,183,240,185};MYCOPY(dummy7_22a07)} // 19f0:89fa
    {db tmp999[10]={160,188,80,191,0,194,176,196,96,199};MYCOPY(dummy7_22a10)} // 19f0:89fa
    {db tmp999[10]={16,202,192,204,112,207,32,210,208,212};MYCOPY(dummy7_22a1a)} // 19f0:89fa
    {db tmp999[10]={128,215,48,218,224,220,144,223,64,226};MYCOPY(dummy7_22a24)} // 19f0:89fa
    {db tmp999[11]={240,228,0,22,176,24,96,27,16,30,192};MYCOPY(dummy7_22a2e)} // 19f0:89fa
    {db tmp999[11]={32,112,35,32,38,208,40,128,43,48,46};MYCOPY(dummy7_22a39)} // 19f0:89fa
    {db tmp999[10]={224,48,144,51,64,54,240,56,160,59};MYCOPY(dummy7_22a44)} // 19f0:89fa
    {db tmp999[11]={80,62,0,65,176,67,96,70,16,73,192};MYCOPY(dummy7_22a4e)} // 19f0:89fa
    {db tmp999[11]={75,112,78,32,81,208,83,128,86,48,89};MYCOPY(dummy7_22a59)} // 19f0:89fa
    {db tmp999[10]={224,91,144,94,64,97,240,99,160,102};MYCOPY(dummy7_22a64)} // 19f0:89fa
    {db tmp999[11]={80,105,0,108,176,110,96,113,16,116,192};MYCOPY(dummy7_22a6e)} // 19f0:89fa
    {db tmp999[11]={118,112,121,32,124,208,126,128,129,48,132};MYCOPY(dummy7_22a79)} // 19f0:89fa
    {db tmp999[10]={224,134,144,137,64,140,240,142,160,145};MYCOPY(dummy7_22a84)} // 19f0:89fa
    {db tmp999[11]={80,148,0,151,176,153,96,156,16,159,192};MYCOPY(dummy7_22a8e)} // 19f0:89fa
    {db tmp999[10]={161,112,164,32,167,208,169,128,172,48};MYCOPY(dummy7_22a99)} // 19f0:89fa
    {db tmp999[9]={175,224,177,144,180,64,183,240,185};MYCOPY(dummy7_22aa3)} // 19f0:89fa
    {db tmp999[10]={160,188,80,191,0,194,176,196,96,199};MYCOPY(dummy7_22aac)} // 19f0:89fa
    {db tmp999[10]={16,202,192,204,112,207,32,210,208,212};MYCOPY(dummy7_22ab6)} // 19f0:89fa
    {db tmp999[10]={128,215,48,218,224,220,144,223,64,226};MYCOPY(dummy7_22ac0)} // 19f0:89fa
    {db tmp999[11]={240,228,0,22,176,24,96,27,16,30,192};MYCOPY(dummy7_22aca)} // 19f0:89fa
    {db tmp999[11]={32,112,35,32,38,208,40,128,43,48,46};MYCOPY(dummy7_22ad5)} // 19f0:89fa
    {db tmp999[10]={224,48,144,51,64,54,240,56,160,59};MYCOPY(dummy7_22ae0)} // 19f0:89fa
    {db tmp999[11]={80,62,0,65,176,67,96,70,16,73,192};MYCOPY(dummy7_22aea)} // 19f0:89fa
    {db tmp999[5]={75,112,78,32,81};MYCOPY(dummy7_22af5)} // 19f0:89fa
    {db tmp999[10]={208,83,128,86,48,89,224,91,144,94};MYCOPY(dummy7_22afa)} // 19f0:8bfa
    {db tmp999[11]={64,97,240,99,160,102,80,105,0,108,176};MYCOPY(dummy7_22b04)} // 19f0:8bfa
    {db tmp999[11]={110,96,113,16,116,192,118,112,121,32,124};MYCOPY(dummy7_22b0f)} // 19f0:8bfa
    {db tmp999[10]={208,126,128,129,48,132,224,134,144,137};MYCOPY(dummy7_22b1a)} // 19f0:8bfa
    {db tmp999[11]={64,140,240,142,160,145,80,148,0,151,176};MYCOPY(dummy7_22b24)} // 19f0:8bfa
    {db tmp999[10]={153,96,156,16,159,192,161,112,164,32};MYCOPY(dummy7_22b2f)} // 19f0:8bfa
    {db tmp999[9]={167,208,169,128,172,48,175,224,177};MYCOPY(dummy7_22b39)} // 19f0:8bfa
    {db tmp999[10]={144,180,64,183,240,185,160,188,80,191};MYCOPY(dummy7_22b42)} // 19f0:8bfa
    {db tmp999[10]={0,194,176,196,96,199,16,202,192,204};MYCOPY(dummy7_22b4c)} // 19f0:8bfa
    {db tmp999[10]={112,207,32,210,208,212,128,215,48,218};MYCOPY(dummy7_22b56)} // 19f0:8bfa
    {db tmp999[10]={224,220,144,223,64,226,240,228,0,22};MYCOPY(dummy7_22b60)} // 19f0:8bfa
    {db tmp999[10]={176,24,96,27,16,30,192,32,112,35};MYCOPY(dummy7_22b6a)} // 19f0:8bfa
    {db tmp999[10]={32,38,208,40,128,43,48,46,224,48};MYCOPY(dummy7_22b74)} // 19f0:8bfa
    {db tmp999[10]={144,51,64,54,240,56,160,59,80,62};MYCOPY(dummy7_22b7e)} // 19f0:8bfa
    {db tmp999[11]={0,65,176,67,96,70,16,73,192,75,112};MYCOPY(dummy7_22b88)} // 19f0:8bfa
    {db tmp999[10]={78,32,81,208,83,128,86,48,89,224};MYCOPY(dummy7_22b93)} // 19f0:8bfa
    {db tmp999[10]={91,144,94,64,97,240,99,160,102,80};MYCOPY(dummy7_22b9d)} // 19f0:8bfa
    {db tmp999[11]={105,0,108,176,110,96,113,16,116,192,118};MYCOPY(dummy7_22ba7)} // 19f0:8bfa
    {db tmp999[11]={112,121,32,124,208,126,128,129,48,132,224};MYCOPY(dummy7_22bb2)} // 19f0:8bfa
    {db tmp999[10]={134,144,137,64,140,240,142,160,145,80};MYCOPY(dummy7_22bbd)} // 19f0:8bfa
    {db tmp999[11]={148,0,151,176,153,96,156,16,159,192,161};MYCOPY(dummy7_22bc7)} // 19f0:8bfa
    {db tmp999[10]={112,164,32,167,208,169,128,172,48,175};MYCOPY(dummy7_22bd2)} // 19f0:8bfa
    {db tmp999[9]={224,177,144,180,64,183,240,185,160};MYCOPY(dummy7_22bdc)} // 19f0:8bfa
    {db tmp999[10]={188,80,191,0,194,176,196,96,199,16};MYCOPY(dummy7_22be5)} // 19f0:8bfa
    {db tmp999[9]={202,192,204,112,207,32,210,208,212};MYCOPY(dummy7_22bef)} // 19f0:8bfa
    {db tmp999[10]={128,215,48,218,224,220,144,223,64,226};MYCOPY(dummy7_22bf8)} // 19f0:8bfa
    {db tmp999[11]={240,228,0,22,176,24,96,27,16,30,192};MYCOPY(dummy7_22c02)} // 19f0:8bfa
    {db tmp999[11]={32,112,35,32,38,208,40,128,43,48,46};MYCOPY(dummy7_22c0d)} // 19f0:8bfa
    {db tmp999[10]={224,48,144,51,64,54,240,56,160,59};MYCOPY(dummy7_22c18)} // 19f0:8bfa
    {db tmp999[11]={80,62,0,65,176,67,96,70,16,73,192};MYCOPY(dummy7_22c22)} // 19f0:8bfa
    {db tmp999[11]={75,112,78,32,81,208,83,128,86,48,89};MYCOPY(dummy7_22c2d)} // 19f0:8bfa
    {db tmp999[10]={224,91,144,94,64,97,240,99,160,102};MYCOPY(dummy7_22c38)} // 19f0:8bfa
    {db tmp999[11]={80,105,0,108,176,110,96,113,16,116,192};MYCOPY(dummy7_22c42)} // 19f0:8bfa
    {db tmp999[11]={118,112,121,32,124,208,126,128,129,48,132};MYCOPY(dummy7_22c4d)} // 19f0:8bfa
    {db tmp999[10]={224,134,144,137,64,140,240,142,160,145};MYCOPY(dummy7_22c58)} // 19f0:8bfa
    {db tmp999[11]={80,148,0,151,176,153,96,156,16,159,192};MYCOPY(dummy7_22c62)} // 19f0:8bfa
    {db tmp999[10]={161,112,164,32,167,208,169,128,172,48};MYCOPY(dummy7_22c6d)} // 19f0:8bfa
    {db tmp999[9]={175,224,177,144,180,64,183,240,185};MYCOPY(dummy7_22c77)} // 19f0:8bfa
    {db tmp999[10]={160,188,80,191,0,194,176,196,96,199};MYCOPY(dummy7_22c80)} // 19f0:8bfa
    {db tmp999[10]={16,202,192,204,112,207,32,210,208,212};MYCOPY(dummy7_22c8a)} // 19f0:8bfa
    {db tmp999[10]={128,215,48,218,224,220,144,223,64,226};MYCOPY(dummy7_22c94)} // 19f0:8bfa
    {db tmp999[11]={240,228,0,22,176,24,96,27,16,30,192};MYCOPY(dummy7_22c9e)} // 19f0:8bfa
    {db tmp999[11]={32,112,35,32,38,208,40,128,43,48,46};MYCOPY(dummy7_22ca9)} // 19f0:8bfa
    {db tmp999[10]={224,48,144,51,64,54,240,56,160,59};MYCOPY(dummy7_22cb4)} // 19f0:8bfa
    {db tmp999[11]={80,62,0,65,176,67,96,70,16,73,192};MYCOPY(dummy7_22cbe)} // 19f0:8bfa
    {db tmp999[11]={75,112,78,32,81,208,83,128,86,48,89};MYCOPY(dummy7_22cc9)} // 19f0:8bfa
    {db tmp999[10]={224,91,144,94,64,97,240,99,160,102};MYCOPY(dummy7_22cd4)} // 19f0:8bfa
    {db tmp999[11]={80,105,0,108,176,110,96,113,16,116,192};MYCOPY(dummy7_22cde)} // 19f0:8bfa
    {db tmp999[11]={118,112,121,32,124,208,126,128,129,48,132};MYCOPY(dummy7_22ce9)} // 19f0:8bfa
    {db tmp999[6]={224,134,144,137,64,140};MYCOPY(dummy7_22cf4)} // 19f0:8bfa
    {db tmp999[11]={240,142,160,145,80,148,0,151,176,153,96};MYCOPY(dummy7_22cfa)} // 19f0:8dfa
    {db tmp999[10]={156,16,159,192,161,112,164,32,167,208};MYCOPY(dummy7_22d05)} // 19f0:8dfa
    {db tmp999[10]={169,128,172,48,175,224,177,144,180,64};MYCOPY(dummy7_22d0f)} // 19f0:8dfa
    {db tmp999[10]={183,240,185,160,188,80,191,0,194,176};MYCOPY(dummy7_22d19)} // 19f0:8dfa
    {db tmp999[10]={196,96,199,16,202,192,204,112,207,32};MYCOPY(dummy7_22d23)} // 19f0:8dfa
    {db tmp999[9]={210,208,212,128,215,48,218,224,220};MYCOPY(dummy7_22d2d)} // 19f0:8dfa
    {db tmp999[10]={144,223,64,226,240,228,0,22,176,24};MYCOPY(dummy7_22d36)} // 19f0:8dfa
    {db tmp999[11]={96,27,16,30,192,32,112,35,32,38,208};MYCOPY(dummy7_22d40)} // 19f0:8dfa
    {db tmp999[11]={40,128,43,48,46,224,48,144,51,64,54};MYCOPY(dummy7_22d4b)} // 19f0:8dfa
    {db tmp999[12]={240,56,0,0,86,0,172,0,2,1,88,1};MYCOPY(dummy7_22d56)} // 19f0:8dfa
    {db tmp999[15]={174,1,4,2,90,2,0,0,0,0,49,0,50,0,51};MYCOPY(dummy7_22d62)} // 19f0:8dfa
    {db tmp999[14]={0,52,0,53,0,54,0,55,0,56,0,57,0,48};MYCOPY(dummy7_22d71)} // 19f0:8dfa
    {db tmp999[16]={0,0,0,0,0,128,0,0,0,81,0,87,0,0,0,82};MYCOPY(dummy7_22d7f)} // 19f0:8dfa
    {db tmp999[18]={0,84,0,89,0,0,0,0,0,0,0,80,0,129,0,129,0,129};MYCOPY(dummy7_22d8f)} // 19f0:8dfa
    {db tmp999[16]={0,0,0,0,0,83,0,68,0,70,0,71,0,72,0,74};MYCOPY(dummy7_22da1)} // 19f0:8dfa
    {db tmp999[21]={0,75,0,76,0,0,0,0,0,0,0,0,0,0,0,90,0,88,0,67,0};MYCOPY(dummy7_22db1)} // 19f0:8dfa
    {db tmp999[166]={86,0,66,0,78,0,77,0,0,0,0,0,0,0,0,0,0,0,0,0,129,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(dummy7_22dc6)} // 19f0:8dfa
    {dw tmp999=0;MYCOPY(word_3144c)} // 19f0:8f6c
    {db tmp999[506]={0};MYCOPY(dummy7_22e6e)} // 19f0:8f6e
    {dw tmp999=0;MYCOPY(word_31648)} // 19f0:9168
    {dw tmp999=0;MYCOPY(word_3164a)} // 19f0:916a
    {db tmp999[16]={0};MYCOPY(dummy7_2306c)} // 19f0:916c
    {db tmp999=0;MYCOPY(byte_3165c)} // 19f0:917c
    {db tmp999[2]={0};MYCOPY(dummy7_2307d)} // 19f0:917d
    {db tmp999=0;MYCOPY(byte_3165f)} // 19f0:917f
    {db tmp999=0;MYCOPY(byte_31661)} // 19f0:9181
    {db tmp999[7]={0};MYCOPY(dummy7_23082)} // 19f0:9182
    {db tmp999=0;MYCOPY(byte_31669)} // 19f0:9189
    {db tmp999=0;MYCOPY(byte_3166a)} // 19f0:918a
    {db tmp999=0;MYCOPY(byte_3166b)} // 19f0:918b
    {db tmp999[13]={0};MYCOPY(dummy7_2308c)} // 19f0:918c
    {db tmp999=0;MYCOPY(byte_31679)} // 19f0:9199
    {db tmp999[3]={0};MYCOPY(dummy7_2309a)} // 19f0:919a
    {db tmp999=0;MYCOPY(byte_3167d)} // 19f0:919d
    {db tmp999=0;MYCOPY(byte_3167e)} // 19f0:919e
    {db tmp999[5]={0};MYCOPY(dummy7_2309f)} // 19f0:919f
    {db tmp999=0;MYCOPY(byte_31684)} // 19f0:91a4
    {db tmp999[5]={0};MYCOPY(dummy7_230a5)} // 19f0:91a5
    {db tmp999=0;MYCOPY(byte_3168a)} // 19f0:91aa
    {db tmp999=0;MYCOPY(byte_3168b)} // 19f0:91ab
    {db tmp999=0;MYCOPY(byte_3168c)} // 19f0:91ac
    {db tmp999=0;MYCOPY(byte_31690)} // 19f0:91b0
    {db tmp999[14]={0};MYCOPY(dummy7_230b1)} // 19f0:91b1
    {db tmp999=0;MYCOPY(byte_3169f)} // 19f0:91bf
    {db tmp999[46]={0};MYCOPY(dummy7_230c0)} // 19f0:91c0
    {dw tmp999=0;MYCOPY(word_316ce)} // 19f0:91ee
    {db tmp999[26]={0};MYCOPY(dummy7_230f0)} // 19f0:91f0
    {dw tmp999=0;MYCOPY(word_316ea)} // 19f0:920a
    {dw tmp999=0;MYCOPY(word_316f0)} // 19f0:9210
    {db tmp999[12]={0};MYCOPY(dummy7_23112)} // 19f0:9212
    {dw tmp999=0;MYCOPY(word_316fe)} // 19f0:921e
    {db tmp999[4]={0};MYCOPY(dummy7_23120)} // 19f0:9220
    {dw tmp999=0;MYCOPY(word_31704)} // 19f0:9224
    {dw tmp999=0;MYCOPY(word_31706)} // 19f0:9226
    {db tmp999[2]={0};MYCOPY(dummy7_23128)} // 19f0:9228
    {dw tmp999=0;MYCOPY(word_3170a)} // 19f0:922a
    {dw tmp999=0;MYCOPY(word_3170c)} // 19f0:922c
    {dw tmp999=0;MYCOPY(word_3170e)} // 19f0:922e
    {db tmp999[46]={0};MYCOPY(dummy7_23130)} // 19f0:9230
    {dw tmp999=0;MYCOPY(word_3173e)} // 19f0:925e
    {dw tmp999=0;MYCOPY(word_31740)} // 19f0:9260
    {db tmp999[24]={0};MYCOPY(dummy7_23162)} // 19f0:9262
    {dw tmp999=0;MYCOPY(word_3175a)} // 19f0:927a
    {dw tmp999=0;MYCOPY(word_3175c)} // 19f0:927c
    {dw tmp999=0;MYCOPY(word_3175e)} // 19f0:927e
    {db tmp999[2]={0};MYCOPY(dummy7_23180)} // 19f0:9280
    {dw tmp999=0;MYCOPY(word_31762)} // 19f0:9282
    {dw tmp999=0;MYCOPY(word_31764)} // 19f0:9284
    {dw tmp999=0;MYCOPY(word_31766)} // 19f0:9286
    {dw tmp999=0;MYCOPY(word_31768)} // 19f0:9288
    {dw tmp999=0;MYCOPY(word_3176c)} // 19f0:928c
    {dw tmp999=0;MYCOPY(word_31770)} // 19f0:9290
    {db tmp999[92]={0};MYCOPY(dummy7_23192)} // 19f0:9292
    {db tmp999=0;MYCOPY(byte_317ce)} // 19f0:92ee
    {dw tmp999=0;MYCOPY(word_317cf)} // 19f0:92ef
    {dw tmp999=0;MYCOPY(word_317d1)} // 19f0:92f1
    {dw tmp999=0;MYCOPY(word_317d3)} // 19f0:92f3
    {dw tmp999=0;MYCOPY(word_317d5)} // 19f0:92f5
    {dw tmp999=0;MYCOPY(word_317d7)} // 19f0:92f7
    {dw tmp999=52;MYCOPY(word_317d9)} // 19f0:92f9
    {dw tmp999=104;MYCOPY(word_317db)} // 19f0:92fb
    {db tmp999[2]={0};MYCOPY(dummy7_231fd)} // 19f0:92fd
    {db tmp999=0;MYCOPY(byte_317df)} // 19f0:92ff
    {db tmp999=255;MYCOPY(byte_317e0)} // 19f0:9300
    {db tmp999[4]={0};MYCOPY(dummy7_23201)} // 19f0:9301
    {dw tmp999=0;MYCOPY(word_317e5)} // 19f0:9305
    {dw tmp999=0;MYCOPY(word_317e7)} // 19f0:9307
    {dw tmp999=0;MYCOPY(word_317e9)} // 19f0:9309
    {dw tmp999=0;MYCOPY(word_317eb)} // 19f0:930b
    {dw tmp999=0;MYCOPY(word_317ed)} // 19f0:930d
    {dw tmp999=0;MYCOPY(word_317ef)} // 19f0:930f
    {db tmp999=0;MYCOPY(byte_317f1)} // 19f0:9311
    {db tmp999=0;MYCOPY(byte_317f2)} // 19f0:9312
    {db tmp999=0;MYCOPY(byte_317f3)} // 19f0:9313
    {db tmp999=0;MYCOPY(byte_317f4)} // 19f0:9314
    {dw tmp999=0;MYCOPY(word_317f5)} // 19f0:9315
    {dw tmp999=0;MYCOPY(word_317f7)} // 19f0:9317
    {dw tmp999=0;MYCOPY(word_317f9)} // 19f0:9319
    {dw tmp999=0;MYCOPY(word_317fb)} // 19f0:931b
    {dw tmp999=0;MYCOPY(word_317fd)} // 19f0:931d
    {char tmp999[23]={'0',7,'1',7,'2',7,'3',7,'4',7,'5',7,'6',7,'7',7,'8',7,'9',7,'A',7,'B'};MYCOPY(a0123456789abcd)} // 19f0:931f
    {char tmp999[12]="\x07" "C\x07" "D\x07" "E\x07" "F\x07 \x07";MYCOPY(dummy7_23236)} // 19f0:931f
    {db tmp999[14]={0,74,1,0,0,0,40,0,80,0,120,0,160,0};MYCOPY(dummy7_23242)} // 19f0:9342
    {db tmp999[13]={200,0,240,0,24,1,64,1,104,1,144,1,184};MYCOPY(dummy7_23250)} // 19f0:9342
    {db tmp999[14]={1,224,1,8,2,48,2,88,2,128,2,168,2,208};MYCOPY(dummy7_2325d)} // 19f0:9342
    {db tmp999[13]={2,248,2,32,3,72,3,112,3,152,3,192,3};MYCOPY(dummy7_2326b)} // 19f0:9342
    {db tmp999[13]={232,3,16,4,56,4,96,4,136,4,176,4,216};MYCOPY(dummy7_23278)} // 19f0:9342
    {db tmp999[14]={4,0,5,40,5,0,0,43,0,86,0,129,0,172};MYCOPY(dummy7_23285)} // 19f0:9342
    {db tmp999[14]={0,215,0,2,1,45,1,88,1,131,1,174,1,217};MYCOPY(dummy7_23293)} // 19f0:9342
    {db tmp999[14]={1,4,2,47,2,90,2,133,2,176,2,219,2,6};MYCOPY(dummy7_232a1)} // 19f0:9342
    {db tmp999[14]={3,49,3,92,3,135,3,178,3,221,3,8,4,1};MYCOPY(dummy7_232af)} // 19f0:9342
    {db tmp999[11]={2,4,8,16,32,64,128,254,253,251,247};MYCOPY(dummy7_232bd)} // 19f0:9342
    {db tmp999[13]={239,223,191,127,1,0,2,0,4,0,8,0,16};MYCOPY(dummy7_232c8)} // 19f0:9342
    {db tmp999[14]={0,32,0,64,0,128,0,0,1,0,2,0,4,0};MYCOPY(dummy7_232d5)} // 19f0:9342
    {db tmp999[12]={8,0,16,0,32,0,64,0,128,254,255,253};MYCOPY(dummy7_232e3)} // 19f0:9342
    {db tmp999[9]={255,251,255,247,255,239,255,223,255};MYCOPY(dummy7_232ef)} // 19f0:9342
    {db tmp999[9]={191,255,127,255,255,254,255,253,255};MYCOPY(dummy7_232f8)} // 19f0:9342
    {db tmp999[9]={251,255,247,255,239,255,223,255,191};MYCOPY(dummy7_23301)} // 19f0:9342
    {db tmp999[11]={255,127,198,0,200,0,202,0,204,0,40};MYCOPY(dummy7_2330a)} // 19f0:9342
    {db tmp999[14]={0,42,0,44,0,46,0,48,0,50,0,52,0,75};MYCOPY(dummy7_23315)} // 19f0:9342
    {db tmp999[14]={0,77,0,79,0,81,0,83,0,85,0,114,0,116};MYCOPY(dummy7_23323)} // 19f0:9342
    {db tmp999[14]={0,118,0,120,0,122,0,124,0,126,0,128,0,156};MYCOPY(dummy7_23331)} // 19f0:9342
    {db tmp999[12]={0,158,0,160,0,162,0,164,0,166,0,168};MYCOPY(dummy7_2333f)} // 19f0:9342
    {db tmp999[12]={0,170,0,206,0,208,0,210,0,212,0,113};MYCOPY(dummy7_2334b)} // 19f0:9342
    {db tmp999[13]={1,125,1,134,1,140,1,146,1,126,1,175,1};MYCOPY(dummy7_23357)} // 19f0:9342
    {db tmp999[12]={176,1,177,1,178,1,218,0,193,1,193,1};MYCOPY(dummy7_23364)} // 19f0:9342
    {db tmp999[12]={193,1,193,1,194,1,194,1,194,1,194,1};MYCOPY(dummy7_23370)} // 19f0:9342
    {db tmp999[12]={194,1,194,1,194,1,195,1,195,1,195,1};MYCOPY(dummy7_2337c)} // 19f0:9342
    {db tmp999[12]={195,1,195,1,195,1,196,1,196,1,196,1};MYCOPY(dummy7_23388)} // 19f0:9342
    {db tmp999[12]={196,1,196,1,196,1,196,1,196,1,197,1};MYCOPY(dummy7_23394)} // 19f0:9342
    {db tmp999[12]={197,1,197,1,197,1,197,1,197,1,197,1};MYCOPY(dummy7_233a0)} // 19f0:9342
    {db tmp999[12]={197,1,193,1,193,1,193,1,193,1,255,255};MYCOPY(dummy7_233ac)} // 19f0:9342
    {db tmp999[12]={198,1,198,1,198,1,198,1,198,1,198,1};MYCOPY(dummy7_233b8)} // 19f0:9342
    {db tmp999[12]={198,1,198,1,198,1,198,1,0,255,1,255};MYCOPY(dummy7_233c4)} // 19f0:9342
    {db tmp999[12]={2,32,33,34,255,1,2,32,255,1,2,32};MYCOPY(dummy7_233d0)} // 19f0:9342
    {db tmp999[13]={48,49,50,51,52,53,255,1,2,4,5,6,32};MYCOPY(dummy7_233dc)} // 19f0:9342
    {db tmp999[12]={48,49,50,51,52,53,255,1,2,4,32,255};MYCOPY(dummy7_233e9)} // 19f0:9342
    {db tmp999[13]={3,4,13,255,4,255,1,2,5,32,255,0,1};MYCOPY(dummy7_233f5)} // 19f0:9342
    {db tmp999[12]={5,10,12,255,0,1,5,48,49,50,51,52};MYCOPY(dummy7_23402)} // 19f0:9342
    {db tmp999[12]={53,255,1,2,4,5,32,48,49,50,51,52};MYCOPY(dummy7_2340e)} // 19f0:9342
    {db tmp999[12]={53,255,1,2,6,32,255,1,10,255,1,10};MYCOPY(dummy7_2341a)} // 19f0:9342
    {db tmp999[11]={20,255,16,17,18,19,20,21,22,23,255};MYCOPY(dummy7_23426)} // 19f0:9342
    {db tmp999[10]={16,255,17,255,18,255,19,255,20,255};MYCOPY(dummy7_23431)} // 19f0:9342
    {db tmp999[10]={21,255,22,255,23,255,41,255,46,255};MYCOPY(dummy7_2343b)} // 19f0:9342
    {db tmp999[3]={47,255,6};MYCOPY(dummy7_23445)} // 19f0:9342
    {db tmp999[11]={255,7,255,1,2,12,13,32,255,44,255};MYCOPY(dummy7_23448)} // 19f0:9548
    {db tmp999[13]={42,255,1,5,6,255,1,2,5,6,10,32,255};MYCOPY(dummy7_23453)} // 19f0:9548
    {db tmp999[8]={0};MYCOPY(dummy7_23460)} // 19f0:9548
    {db tmp999=0;MYCOPY(byte_31a48)} // 19f0:9568
    {dw tmp999=0;MYCOPY(word_31a49)} // 19f0:9569
    {db tmp999=0;MYCOPY(byte_31a4b)} // 19f0:956b
    {db tmp999[880]={0};MYCOPY(dummy7_2346c)} // 19f0:956c
    {dw tmp999=0;MYCOPY(word_31dbc)} // 19f0:98dc
    {db tmp999[8]={0};MYCOPY(dummy7_237de)} // 19f0:98de
    {dw tmp999=0;MYCOPY(word_31dc6)} // 19f0:98e6
    {dd tmp999=0;MYCOPY(dword_31dc8)} // 19f0:98e8
    {db tmp999[32]={0};MYCOPY(dummy7_237ec)} // 19f0:98ec
    {dw tmp999=65535;MYCOPY(word_31dec)} // 19f0:990c
    {db tmp999[26]={255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,80,153,88,155,96,157,104,159};MYCOPY(dummy7_2380e)} // 19f0:990e
    {db tmp999[2]={112,161};MYCOPY(dummy7_23828)} // 19f0:990e
    {dw tmp999=0;MYCOPY(word_31e0a)} // 19f0:992a
    {dw tmp999=0;MYCOPY(word_31e0c)} // 19f0:992c
    {dw tmp999=0;MYCOPY(word_31e0e)} // 19f0:992e
    {dw tmp999=0;MYCOPY(word_31e10)} // 19f0:9930
    {dw tmp999=0;MYCOPY(word_31e12)} // 19f0:9932
    {dw tmp999=0;MYCOPY(word_31e14)} // 19f0:9934
    {db tmp999[8]={0};MYCOPY(dummy7_23836)} // 19f0:9936
    {dw tmp999=0;MYCOPY(word_31e1e)} // 19f0:993e
    {dw tmp999=0;MYCOPY(word_31e20)} // 19f0:9940
    {dw tmp999=0;MYCOPY(word_31e22)} // 19f0:9942
    {db tmp999[2]={0};MYCOPY(dummy7_23844)} // 19f0:9944
    {dw tmp999=0;MYCOPY(word_31e26)} // 19f0:9946
    {db tmp999[2608]={0};MYCOPY(dummy7_23848)} // 19f0:9948
    {dw tmp999=0;MYCOPY(word_32858)} // 19f0:a378
    {dw tmp999=(dw)m2c::ksub_17791;MYCOPY(funcs_17759)} // 19f0:a37a
    {dw tmp999=(dw)m2c::knullsub_6;MYCOPY(dummy7_2427c)} // 19f0:a37a
    {dw tmp999=(dw)m2c::ksub_178f1;MYCOPY(dummy7_2427e)} // 19f0:a37a
    {dw tmp999=(dw)m2c::ksub_1775d;MYCOPY(dummy7_24280)} // 19f0:a37a
    {dw tmp999=(dw)m2c::knullsub_6;MYCOPY(dummy7_24282)} // 19f0:a37a
    {dw tmp999=(dw)m2c::kloc_101ee;MYCOPY(dummy7_24284)} // 19f0:a37a
    {dw tmp999=(dw)m2c::kloc_101e8+1;MYCOPY(dummy7_24286)} // 19f0:a386
    {dw tmp999=(dw)m2c::kloc_101ce+2;MYCOPY(dummy7_24288)} // 19f0:a388
    {dw tmp999=(dw)m2c::kloc_101d4+1;MYCOPY(dummy7_2428a)} // 19f0:a38a
    {dw tmp999=(dw)m2c::kloc_101d9+1;MYCOPY(dummy7_2428c)} // 19f0:a38c
    {dw tmp999=(dw)m2c::kloc_101df;MYCOPY(dummy7_2428e)} // 19f0:a38e
    {dw tmp999=(dw)m2c::kloc_101f1+2;MYCOPY(dummy7_24290)} // 19f0:a390
    {dw tmp999=(dw)m2c::kloc_101e4;MYCOPY(dummy7_24292)} // 19f0:a392
    {dw tmp999=(dw)m2c::kloc_101f7+1;MYCOPY(dummy7_24294)} // 19f0:a394
    {dw tmp999=(dw)m2c::kloc_101fc+1;MYCOPY(dummy7_24296)} // 19f0:a396
    {dw tmp999=(dw)m2c::kloc_10202;MYCOPY(dummy7_24298)} // 19f0:a398
    {dw tmp999=0;MYCOPY(word_3287a)} // 19f0:a39a
    {dw tmp999=0;MYCOPY(word_3287c)} // 19f0:a39c
    {dw tmp999=0;MYCOPY(word_3287e)} // 19f0:a39e
    {dw tmp999=0;MYCOPY(word_32880)} // 19f0:a3a0
    {dw tmp999=0;MYCOPY(word_32882)} // 19f0:a3a2
    {db tmp999[12]={0};MYCOPY(dummy7_242a4)} // 19f0:a3a4
    {db tmp999[256]={0};MYCOPY(dummy7_242b0)} // 242b:0000

}
#ifndef DOSBOX_CUSTOM
  };
 static const Initializer i;
#endif
}
