/* THIS IS GENERATED FILE */

        
#include "f.exe.h"

                

 bool _group70(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group70:
    _begin:
sub_35ab2:
	// 117016 
#undef arg_2
#define arg_2 8
	// 117019 arg_2           = word ptr  8 ;~ 274D:0002
#undef arg_4
#define arg_4 0x0A
	// 117020 arg_4           = word ptr  0Ah ;~ 274D:0002
#undef arg_6
#define arg_6 0x0C
	// 117021 arg_6           = byte ptr  0Ch ;~ 274D:0002
cs=0x274d;eip=0x000002; 	X(PUSH(bp));	// 117023                  push    bp ;~ 274D:0002
cs=0x274d;eip=0x000003; 	T(bp = sp;);	// 117024                  mov     bp, sp ;~ 274D:0003
cs=0x274d;eip=0x000005; 	X(PUSH(es));	// 117025                  push    es ;~ 274D:0005
cs=0x274d;eip=0x000006; 	X(PUSH(ds));	// 117026                  push    ds ;~ 274D:0006
cs=0x274d;eip=0x000007; 	X(PUSH(si));	// 117027                  push    si ;~ 274D:0007
cs=0x274d;eip=0x000008; 	X(PUSH(di));	// 117028                  push    di ;~ 274D:0008
cs=0x274d;eip=0x000009; 	T(MOV(ah, *(raddr(ss,bp+arg_6))));	// 117029                  mov     ah, [bp+arg_6] ;~ 274D:0009
cs=0x274d;eip=0x00000c; 	J(CALLF(sub_49a3e,0));	// 117030                  call    far ptr sub_49A3E ;~ 274D:000C
cs=0x274d;eip=0x000011; 	J(CALL(sub_37950,0));	// 117032                  call    sub_37950 ;~ 274D:0011
cs=0x274d;eip=0x000014; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 117033                  mov     si, [bp+arg_4] ;~ 274D:0014
cs=0x274d;eip=0x000017; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_2))));	// 117034                  mov     cx, [bp+arg_2] ;~ 274D:0017
cs=0x274d;eip=0x00001a; 	T(DEC(cx));	// 117035                  dec     cx ;~ 274D:001A
cs=0x274d;eip=0x00001b; 	T(LODSW);	// 117036                  lodsw ;~ 274D:001B
cs=0x274d;eip=0x00001c; 	X(word_4d78d = ax;);	// 117037                  mov     ds:word_4D78D, ax ;~ 274D:001C
cs=0x274d;eip=0x00001f; 	X(PUSH(ax));	// 117038                  push    ax ;~ 274D:001F
cs=0x274d;eip=0x000020; 	T(LODSW);	// 117039                  lodsw ;~ 274D:0020
cs=0x274d;eip=0x000021; 	X(word_4d791 = ax;);	// 117040                  mov     ds:word_4D791, ax ;~ 274D:0021
cs=0x274d;eip=0x000024; 	X(PUSH(ax));	// 117041                  push    ax ;~ 274D:0024
loc_35ad5:
	// 6982 
cs=0x274d;eip=0x000025; 	X(PUSH(cx));	// 117044                  push    cx ;~ 274D:0025
cs=0x274d;eip=0x000026; 	T(LODSW);	// 117045                  lodsw ;~ 274D:0026
cs=0x274d;eip=0x000027; 	X(word_4d78f = ax;);	// 117046                  mov     ds:word_4D78F, ax ;~ 274D:0027
cs=0x274d;eip=0x00002a; 	X(PUSH(ax));	// 117047                  push    ax ;~ 274D:002A
cs=0x274d;eip=0x00002b; 	T(LODSW);	// 117048                  lodsw ;~ 274D:002B
cs=0x274d;eip=0x00002c; 	X(word_4d793 = ax;);	// 117049                  mov     ds:word_4D793, ax ;~ 274D:002C
cs=0x274d;eip=0x00002f; 	X(PUSH(ax));	// 117050                  push    ax ;~ 274D:002F
cs=0x274d;eip=0x000030; 	X(PUSH(si));	// 117051                  push    si ;~ 274D:0030
cs=0x274d;eip=0x000031; 	J(CALL(sub_37ad8,0));	// 117052                  call    sub_37AD8 ;~ 274D:0031
cs=0x274d;eip=0x000034; 	X(POP(si));	// 117054                  pop     si ;~ 274D:0034
cs=0x274d;eip=0x000035; 	X(POP(word_4d791));	// 117055                  pop     ds:word_4D791 ;~ 274D:0035
cs=0x274d;eip=0x000039; 	X(POP(word_4d78d));	// 117056                  pop     ds:word_4D78D ;~ 274D:0039
cs=0x274d;eip=0x00003d; 	X(POP(cx));	// 117057                  pop     cx ;~ 274D:003D
cs=0x274d;eip=0x00003e; 	J(LOOP(loc_35ad5));	// 117058                  loop    loc_35AD5 ;~ 274D:003E
cs=0x274d;eip=0x000040; 	X(POP(word_4d793));	// 117059                  pop     ds:word_4D793 ;~ 274D:0040
cs=0x274d;eip=0x000044; 	X(POP(word_4d78f));	// 117060                  pop     ds:word_4D78F ;~ 274D:0044
cs=0x274d;eip=0x000048; 	J(CALL(sub_37ad8,0));	// 117061                  call    sub_37AD8 ;~ 274D:0048
cs=0x274d;eip=0x00004b; 	T(ax = word_4db09;);	// 117062                  mov     ax, ds:word_4DB09 ;~ 274D:004B
cs=0x274d;eip=0x00004e; 	T(cx = word_4db0b;);	// 117063                  mov     cx, ds:word_4DB0B ;~ 274D:004E
cs=0x274d;eip=0x000052; 	T(bx = 0x4CB5;);	// 117064                  mov     bx, 4CB5h ;~ 274D:0052
cs=0x274d;eip=0x000055; 	J(CALLF(sub_49a57,0));	// 117065                  call    far ptr sub_49A57 ;~ 274D:0055
seg35ab_5a_proc:
	// 117069 
cs=0x274d;eip=0x00005a; 	J(CALLF(sub_49a48,0));	// 117069                  call    far ptr sub_49A48 ;~ 274D:005A
cs=0x274d;eip=0x00005f; 	X(POP(di));	// 117071                  pop     di ;~ 274D:005F
cs=0x274d;eip=0x000060; 	X(POP(si));	// 117072                  pop     si ;~ 274D:0060
cs=0x274d;eip=0x000061; 	X(POP(ds));	// 117073                  pop     ds ;~ 274D:0061
cs=0x274d;eip=0x000062; 	X(POP(es));	// 117074                  pop     es ;~ 274D:0062
cs=0x274d;eip=0x000063; 	X(POP(bp));	// 117076                  pop     bp ;~ 274D:0063
cs=0x274d;eip=0x000064; 	J(RETF(0));	// 117077                  retf ;~ 274D:0064
ret_274d_66:
	// 6983 
cs=0x274d;eip=0x000066; 	T(bx = sp;);	// 117081                  mov     bx, sp ;~ 274D:0066
cs=0x274d;eip=0x000068; 	X(PUSH(si));	// 117082                  push    si ;~ 274D:0068
cs=0x274d;eip=0x000069; 	X(PUSH(di));	// 117083                  push    di ;~ 274D:0069
cs=0x274d;eip=0x00006a; 	T(MOV(bx, *(dw*)(raddr(ss,bx+2))));	// 117084                  mov     bx, ss:[bx+2] ;~ 274D:006A
cs=0x274d;eip=0x00006e; 	T(SHL(bx, 1));	// 117085                  shl     bx, 1 ;~ 274D:006E
cs=0x274d;eip=0x000070; 	T(SHL(bx, 1));	// 117086                  shl     bx, 1 ;~ 274D:0070
cs=0x274d;eip=0x000072; 	J(CALL(sub_35b28,0));	// 117087                  call    sub_35B28 ;~ 274D:0072
cs=0x274d;eip=0x000075; 	X(POP(di));	// 117088                  pop     di ;~ 274D:0075
cs=0x274d;eip=0x000076; 	X(POP(si));	// 117089                  pop     si ;~ 274D:0076
cs=0x274d;eip=0x000077; 	J(RETN(0));	// 117090                  retn ;~ 274D:0077

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_35ad5: 	goto loc_35ad5;
        case m2c::kret_274d_66: 	goto ret_274d_66;
        case m2c::kseg35ab_5a_proc: 	goto seg35ab_5a_proc;
        case m2c::ksub_35ab2: 	goto sub_35ab2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35b28(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35b28:
    _begin:
cs=0x274d;eip=0x000078; 	T(MOV(cx, *(dw*)(raddr(ds,bx+0x1DD6))));	// 117098                  mov     cx, [bx+1DD6h] ;~ 274D:0078
cs=0x274d;eip=0x00007c; 	T(CMP(byte_4de54, 0));	// 117099                  cmp     ds:byte_4DE54, 0 ;~ 274D:007C
cs=0x274d;eip=0x000081; 	J(JZ(loc_35b35));	// 117100                  jz      short loc_35B35 ;~ 274D:0081
cs=0x274d;eip=0x000083; 	T(SHL(cx, 1));	// 117101                  shl     cx, 1 ;~ 274D:0083
loc_35b35:
	// 6984 
cs=0x274d;eip=0x000085; 	T(CMP(byte_4e73e, 0));	// 117104                  cmp     ds:byte_4E73E, 0 ;~ 274D:0085
cs=0x274d;eip=0x00008a; 	J(JZ(loc_35b46));	// 117105                  jz      short loc_35B46 ;~ 274D:008A
cs=0x274d;eip=0x00008c; 	T(XCHG(dx, cx));	// 117106                  xchg    dx, cx ;~ 274D:008C
cs=0x274d;eip=0x00008e; 	T(cl = byte_4e73e;);	// 117107                  mov     cl, ds:byte_4E73E ;~ 274D:008E
cs=0x274d;eip=0x000092; 	T(SAR(dx, cl));	// 117108                  sar     dx, cl ;~ 274D:0092
cs=0x274d;eip=0x000094; 	T(XCHG(dx, cx));	// 117109                  xchg    dx, cx ;~ 274D:0094
loc_35b46:
	// 6985 
cs=0x274d;eip=0x000096; 	T(OR(cx, cx));	// 117112                  or      cx, cx ;~ 274D:0096
cs=0x274d;eip=0x000098; 	J(JLE(loc_35b97));	// 117113                  jle     short loc_35B97 ;~ 274D:0098
cs=0x274d;eip=0x00009a; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x1A0D))));	// 117114                  mov     dx, [bx+1A0Dh] ;~ 274D:009A
cs=0x274d;eip=0x00009e; 	T(MOV(al, *(raddr(ds,bx+0x1A0F))));	// 117115                  mov     al, [bx+1A0Fh] ;~ 274D:009E
cs=0x274d;eip=0x0000a2; 	T(CBW);	// 117116                  cbw ;~ 274D:00A2
cs=0x274d;eip=0x0000a3; 	T(XCHG(ax, dx));	// 117117                  xchg    ax, dx ;~ 274D:00A3
cs=0x274d;eip=0x0000a4; 	R(IDIV2(cx));	// 117118                  idiv    cx ;~ 274D:00A4
cs=0x274d;eip=0x0000a6; 	T(CWD);	// 117119                  cwd ;~ 274D:00A6
cs=0x274d;eip=0x0000a7; 	T(OR(ax, ax));	// 117120                  or      ax, ax ;~ 274D:00A7
cs=0x274d;eip=0x0000a9; 	T(ADD(ax, word_48bbc));	// 117121                  add     ax, word_48BBC ;~ 274D:00A9
cs=0x274d;eip=0x0000ad; 	T(ADC(dx, 0));	// 117122                  adc     dx, 0 ;~ 274D:00AD
cs=0x274d;eip=0x0000b0; 	X(MOV(*(dw*)(raddr(ds,bx+0x1FBA)), dx));	// 117123                  mov     [bx+1FBAh], dx ;~ 274D:00B0
cs=0x274d;eip=0x0000b4; 	X(MOV(*(dw*)(raddr(ds,bx+0x1FB8)), ax));	// 117124                  mov     [bx+1FB8h], ax ;~ 274D:00B4
cs=0x274d;eip=0x0000b8; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x1BF1))));	// 117125                  mov     dx, [bx+1BF1h] ;~ 274D:00B8
cs=0x274d;eip=0x0000bc; 	T(MOV(al, *(raddr(ds,bx+0x1BF3))));	// 117126                  mov     al, [bx+1BF3h] ;~ 274D:00BC
cs=0x274d;eip=0x0000c0; 	T(CBW);	// 117127                  cbw ;~ 274D:00C0
cs=0x274d;eip=0x0000c1; 	T(XCHG(ax, dx));	// 117128                  xchg    ax, dx ;~ 274D:00C1
cs=0x274d;eip=0x0000c2; 	T(si = dx;);	// 117129                  mov     si, dx ;~ 274D:00C2
cs=0x274d;eip=0x0000c4; 	T(di = ax;);	// 117130                  mov     di, ax ;~ 274D:00C4
cs=0x274d;eip=0x0000c6; 	T(SAR(dx, 1));	// 117131                  sar     dx, 1 ;~ 274D:00C6
cs=0x274d;eip=0x0000c8; 	T(RCR(ax, 1));	// 117132                  rcr     ax, 1 ;~ 274D:00C8
cs=0x274d;eip=0x0000ca; 	T(SAR(dx, 1));	// 117133                  sar     dx, 1 ;~ 274D:00CA
cs=0x274d;eip=0x0000cc; 	T(RCR(ax, 1));	// 117134                  rcr     ax, 1 ;~ 274D:00CC
cs=0x274d;eip=0x0000ce; 	T(SUB(ax, di));	// 117135                  sub     ax, di ;~ 274D:00CE
cs=0x274d;eip=0x0000d0; 	T(SBB(dx, si));	// 117136                  sbb     dx, si ;~ 274D:00D0
cs=0x274d;eip=0x0000d2; 	T(IDIV2(cx));	// 117137                  idiv    cx ;~ 274D:00D2
cs=0x274d;eip=0x0000d4; 	T(CWD);	// 117138                  cwd ;~ 274D:00D4
cs=0x274d;eip=0x0000d5; 	T(OR(ax, ax));	// 117139                  or      ax, ax ;~ 274D:00D5
cs=0x274d;eip=0x0000d7; 	T(ADD(ax, *(word_48bbe)));	// 117140                  add     ax, word_48BBE ;~ 274D:00D7
cs=0x274d;eip=0x0000db; 	T(ADC(dx, 0));	// 117141                  adc     dx, 0 ;~ 274D:00DB
cs=0x274d;eip=0x0000de; 	X(MOV(*(dw*)(raddr(ds,bx+0x219E)), dx));	// 117142                  mov     [bx+219Eh], dx ;~ 274D:00DE
cs=0x274d;eip=0x0000e2; 	X(MOV(*(dw*)(raddr(ds,bx+0x219C)), ax));	// 117143                  mov     [bx+219Ch], ax ;~ 274D:00E2
cs=0x274d;eip=0x0000e6; 	J(RETN(0));	// 117144                  retn ;~ 274D:00E6
loc_35b97:
	// 6986 
cs=0x274d;eip=0x0000e7; 	T(ax = 0x8000;);	// 117148                  mov     ax, 8000h ;~ 274D:00E7
cs=0x274d;eip=0x0000ea; 	X(MOV(*(dw*)(raddr(ds,bx+0x1FB8)), ax));	// 117149                  mov     [bx+1FB8h], ax ;~ 274D:00EA
loc_35b9e:
	// 6987 
cs=0x274d;eip=0x0000ee; 	X(MOV(*(dw*)(raddr(ds,bx+0x1FBA)), ax));	// 117152                  mov     [bx+1FBAh], ax ;~ 274D:00EE
cs=0x274d;eip=0x0000f2; 	X(MOV(*(dw*)(raddr(ds,bx+0x219C)), ax));	// 117153                  mov     [bx+219Ch], ax ;~ 274D:00F2
cs=0x274d;eip=0x0000f6; 	X(MOV(*(dw*)(raddr(ds,bx+0x219E)), ax));	// 117154                  mov     [bx+219Eh], ax ;~ 274D:00F6
cs=0x274d;eip=0x0000fa; 	J(RETN(0));	// 117155                  retn ;~ 274D:00FA

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_35b35: 	goto loc_35b35;
        case m2c::kloc_35b46: 	goto loc_35b46;
        case m2c::kloc_35b97: 	goto loc_35b97;
        case m2c::kloc_35b9e: 	goto loc_35b9e;
        case m2c::ksub_35b28: 	goto sub_35b28;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg35ab_fb_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg35ab_fb_proc:
    _begin:
cs=0x274d;eip=0x0000fb; 	X(PUSH(bp));	// 117159                  push    bp ;~ 274D:00FB
cs=0x274d;eip=0x0000fc; 	T(bp = sp;);	// 117160                  mov     bp, sp ;~ 274D:00FC
cs=0x274d;eip=0x0000fe; 	X(ADD(*(dw*)(raddr(ss,bp+2)), 3));	// 117161                  add     word ptr [bp+2], 3 ;~ 274D:00FE
cs=0x274d;eip=0x000102; 	T(al = ah;);	// 117162                  mov     al, ah ;~ 274D:0102
cs=0x274d;eip=0x000104; 	T(ah = dl;);	// 117163                  mov     ah, dl ;~ 274D:0104
cs=0x274d;eip=0x000106; 	T(dl = dh;);	// 117164                  mov     dl, dh ;~ 274D:0106
cs=0x274d;eip=0x000108; 	T(IDIV2(cx));	// 117165                  idiv    cx ;~ 274D:0108
cs=0x274d;eip=0x00010a; 	T(CWD);	// 117166                  cwd ;~ 274D:010A
cs=0x274d;eip=0x00010b; 	T(dl = ah;);	// 117167                  mov     dl, ah ;~ 274D:010B
cs=0x274d;eip=0x00010d; 	T(ah = al;);	// 117168                  mov     ah, al ;~ 274D:010D
cs=0x274d;eip=0x00010f; 	T(SUB(al, al));	// 117169                  sub     al, al ;~ 274D:010F
cs=0x274d;eip=0x000111; 	X(POP(bp));	// 117170                  pop     bp ;~ 274D:0111
cs=0x274d;eip=0x000112; 	J(IRET);	// 117171                  iret ;~ 274D:0112

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg35ab_fb_proc: 	goto seg35ab_fb_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35bc3(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35bc3:
    _begin:
cs=0x274d;eip=0x000113; 	X(PUSH(es));	// 117178                  push    es ;~ 274D:0113
cs=0x274d;eip=0x000114; 	T(SUB(ax, ax));	// 117179                  sub     ax, ax ;~ 274D:0114
cs=0x274d;eip=0x000116; 	T(es = ax;);	// 117180                  mov     es, ax ;~ 274D:0116
cs=0x274d;eip=0x000118; 	T(MOV(ax, *(dw*)(raddr(es,0))));	// 117182                  mov     ax, es:0 ;~ 274D:0118
cs=0x274d;eip=0x00011c; 	X(word_4a380 = ax;);	// 117183                  mov     word_4A380, ax ;~ 274D:011C
cs=0x274d;eip=0x00011f; 	T(ax = offset(seg48ae,byte_48bc2)+0x19);	// 117184                  lea     ax, byte_48BC2+19h ;~ 274D:011F
cs=0x274d;eip=0x000123; 	X(MOV(*(dw*)(raddr(es,0)), ax));	// 117185                  mov     es:0, ax ;~ 274D:0123
cs=0x274d;eip=0x000127; 	T(MOV(ax, *(dw*)(raddr(es,2))));	// 117186                  mov     ax, es:2 ;~ 274D:0127
cs=0x274d;eip=0x00012b; 	X(*(word_4a382) = ax;);	// 117187                  mov     word_4A382, ax ;~ 274D:012B
cs=0x274d;eip=0x00012e; 	T(ax = seg_offset(seg35ab););	// 117188                  mov     ax, seg seg35ab ;~ 274D:012E
cs=0x274d;eip=0x000131; 	X(MOV(*(dw*)(raddr(es,2)), ax));	// 117189                  mov     es:2, ax ;~ 274D:0131
cs=0x274d;eip=0x000135; 	X(POP(es));	// 117190                  pop     es ;~ 274D:0135
cs=0x274d;eip=0x000136; 	J(RETN(0));	// 117192                  retn ;~ 274D:0136

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_35bc3: 	goto sub_35bc3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35be7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35be7:
    _begin:
cs=0x274d;eip=0x000137; 	X(PUSH(es));	// 117201                  push    es ;~ 274D:0137
cs=0x274d;eip=0x000138; 	T(SUB(ax, ax));	// 117202                  sub     ax, ax ;~ 274D:0138
cs=0x274d;eip=0x00013a; 	T(es = ax;);	// 117203                  mov     es, ax ;~ 274D:013A
cs=0x274d;eip=0x00013c; 	T(ax = word_4a380;);	// 117205                  mov     ax, word_4A380 ;~ 274D:013C
cs=0x274d;eip=0x00013f; 	X(MOV(*(dw*)(raddr(es,0)), ax));	// 117206                  mov     es:0, ax ;~ 274D:013F
cs=0x274d;eip=0x000143; 	T(ax = *(word_4a382););	// 117207                  mov     ax, word_4A382 ;~ 274D:0143
cs=0x274d;eip=0x000146; 	X(MOV(*(dw*)(raddr(es,2)), ax));	// 117208                  mov     es:2, ax ;~ 274D:0146
cs=0x274d;eip=0x00014a; 	X(POP(es));	// 117209                  pop     es ;~ 274D:014A
cs=0x274d;eip=0x00014b; 	J(RETN(0));	// 117211                  retn ;~ 274D:014B

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_35be7: 	goto sub_35be7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg35ab_14c_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg35ab_14c_proc:
    _begin:
cs=0x274d;eip=0x00014c; 	X(PUSH(bp));	// 117215                  push    bp ;~ 274D:014C
cs=0x274d;eip=0x00014d; 	T(bp = sp;);	// 117216                  mov     bp, sp ;~ 274D:014D
cs=0x274d;eip=0x00014f; 	X(PUSH(si));	// 117217                  push    si ;~ 274D:014F
cs=0x274d;eip=0x000150; 	X(PUSH(di));	// 117218                  push    di ;~ 274D:0150
cs=0x274d;eip=0x000151; 	X(PUSH(es));	// 117219                  push    es ;~ 274D:0151
cs=0x274d;eip=0x000152; 	T(MOV(di, *(dw*)(raddr(ss,bp+6))));	// 117220                  mov     di, [bp+6] ;~ 274D:0152
cs=0x274d;eip=0x000155; 	J(CALL(sub_35c0d,0));	// 117221                  call    sub_35C0D ;~ 274D:0155
cs=0x274d;eip=0x000158; 	X(POP(es));	// 117222                  pop     es ;~ 274D:0158
cs=0x274d;eip=0x000159; 	X(POP(di));	// 117224                  pop     di ;~ 274D:0159
cs=0x274d;eip=0x00015a; 	X(POP(si));	// 117225                  pop     si ;~ 274D:015A
cs=0x274d;eip=0x00015b; 	X(POP(bp));	// 117226                  pop     bp ;~ 274D:015B
cs=0x274d;eip=0x00015c; 	J(RETN(0));	// 117227                  retn ;~ 274D:015C

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg35ab_14c_proc: 	goto seg35ab_14c_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35c0d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35c0d:
    _begin:
cs=0x274d;eip=0x00015d; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 117235                  mov     ax, [di] ;~ 274D:015D
cs=0x274d;eip=0x00015f; 	T(MOV(cx, *(dw*)(raddr(ds,di+2))));	// 117236                  mov     cx, [di+2] ;~ 274D:015F
cs=0x274d;eip=0x000162; 	T(CWD);	// 117237                  cwd ;~ 274D:0162
cs=0x274d;eip=0x000163; 	T(CMP(dx, cx));	// 117238                  cmp     dx, cx ;~ 274D:0163
cs=0x274d;eip=0x000165; 	J(JNZ(loc_35c57));	// 117239                  jnz     short loc_35C57 ;~ 274D:0165
cs=0x274d;eip=0x000167; 	T(si = ax;);	// 117240                  mov     si, ax ;~ 274D:0167
cs=0x274d;eip=0x000169; 	T(MOV(ax, *(dw*)(raddr(ds,di+4))));	// 117241                  mov     ax, [di+4] ;~ 274D:0169
cs=0x274d;eip=0x00016c; 	T(MOV(cx, *(dw*)(raddr(ds,di+6))));	// 117242                  mov     cx, [di+6] ;~ 274D:016C
cs=0x274d;eip=0x00016f; 	T(CWD);	// 117243                  cwd ;~ 274D:016F
cs=0x274d;eip=0x000170; 	T(CMP(dx, cx));	// 117244                  cmp     dx, cx ;~ 274D:0170
cs=0x274d;eip=0x000172; 	J(JNZ(loc_35c57));	// 117245                  jnz     short loc_35C57 ;~ 274D:0172
cs=0x274d;eip=0x000174; 	T(cx = ax;);	// 117246                  mov     cx, ax ;~ 274D:0174
cs=0x274d;eip=0x000176; 	T(MOV(ax, *(dw*)(raddr(ds,di+8))));	// 117247                  mov     ax, [di+8] ;~ 274D:0176
cs=0x274d;eip=0x000179; 	T(MOV(bx, *(dw*)(raddr(ds,di+0x0A))));	// 117248                  mov     bx, [di+0Ah] ;~ 274D:0179
cs=0x274d;eip=0x00017c; 	T(CWD);	// 117249                  cwd ;~ 274D:017C
cs=0x274d;eip=0x00017d; 	T(CMP(dx, bx));	// 117250                  cmp     dx, bx ;~ 274D:017D
cs=0x274d;eip=0x00017f; 	J(JNZ(loc_35c57));	// 117251                  jnz     short loc_35C57 ;~ 274D:017F
cs=0x274d;eip=0x000181; 	T(bp = ax;);	// 117252                  mov     bp, ax ;~ 274D:0181
cs=0x274d;eip=0x000183; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x0C))));	// 117253                  mov     ax, [di+0Ch] ;~ 274D:0183
cs=0x274d;eip=0x000186; 	T(MOV(bx, *(dw*)(raddr(ds,di+0x0E))));	// 117254                  mov     bx, [di+0Eh] ;~ 274D:0186
cs=0x274d;eip=0x000189; 	T(CWD);	// 117255                  cwd ;~ 274D:0189
cs=0x274d;eip=0x00018a; 	T(CMP(dx, bx));	// 117256                  cmp     dx, bx ;~ 274D:018A
cs=0x274d;eip=0x00018c; 	J(JNZ(loc_35c57));	// 117257                  jnz     short loc_35C57 ;~ 274D:018C
cs=0x274d;eip=0x00018e; 	T(dx = ax;);	// 117258                  mov     dx, ax ;~ 274D:018E
cs=0x274d;eip=0x000190; 	T(ax = word_4d787;);	// 117259                  mov     ax, ds:word_4D787 ;~ 274D:0190
cs=0x274d;eip=0x000193; 	T(CMP(si, ax));	// 117260                  cmp     si, ax ;~ 274D:0193
cs=0x274d;eip=0x000195; 	J(JA(loc_35c57));	// 117261                  ja      short loc_35C57 ;~ 274D:0195
cs=0x274d;eip=0x000197; 	T(CMP(bp, ax));	// 117262                  cmp     bp, ax ;~ 274D:0197
cs=0x274d;eip=0x000199; 	J(JA(loc_35c57));	// 117263                  ja      short loc_35C57 ;~ 274D:0199
cs=0x274d;eip=0x00019b; 	T(ax = word_4d789;);	// 117264                  mov     ax, ds:word_4D789 ;~ 274D:019B
cs=0x274d;eip=0x00019e; 	T(CMP(cx, ax));	// 117265                  cmp     cx, ax ;~ 274D:019E
cs=0x274d;eip=0x0001a0; 	J(JA(loc_35c57));	// 117266                  ja      short loc_35C57 ;~ 274D:01A0
cs=0x274d;eip=0x0001a2; 	T(CMP(dx, ax));	// 117267                  cmp     dx, ax ;~ 274D:01A2
cs=0x274d;eip=0x0001a4; 	J(JA(loc_35c57));	// 117268                  ja      short loc_35C57 ;~ 274D:01A4
cs=0x274d;eip=0x0001a6; 	J(RETN(0));	// 117269                  retn ;~ 274D:01A6
loc_35c57:
	// 6988 
cs=0x274d;eip=0x0001a7; 	T(SUB(al, al));	// 117274                  sub     al, al ;~ 274D:01A7
cs=0x274d;eip=0x0001a9; 	X(byte_4a3a0 = al;);	// 117275                  mov     byte_4A3A0, al ;~ 274D:01A9
cs=0x274d;eip=0x0001ac; 	T(MOV(bx, *(dw*)(raddr(ds,di))));	// 117276                  mov     bx, [di] ;~ 274D:01AC
cs=0x274d;eip=0x0001ae; 	X(word_4a386 = bx;);	// 117277                  mov     word_4A386, bx ;~ 274D:01AE
cs=0x274d;eip=0x0001b2; 	T(MOV(cx, *(dw*)(raddr(ds,di+2))));	// 117278                  mov     cx, [di+2] ;~ 274D:01B2
cs=0x274d;eip=0x0001b5; 	X(word_4a388 = cx;);	// 117279                  mov     word_4A388, cx ;~ 274D:01B5
cs=0x274d;eip=0x0001b9; 	T(MOV(si, *(dw*)(raddr(ds,di+4))));	// 117280                  mov     si, [di+4] ;~ 274D:01B9
cs=0x274d;eip=0x0001bc; 	X(word_4a38a = si;);	// 117281                  mov     word_4A38A, si ;~ 274D:01BC
cs=0x274d;eip=0x0001c0; 	T(MOV(dx, *(dw*)(raddr(ds,di+6))));	// 117282                  mov     dx, [di+6] ;~ 274D:01C0
cs=0x274d;eip=0x0001c3; 	X(word_4a38c = dx;);	// 117283                  mov     word_4A38C, dx ;~ 274D:01C3
cs=0x274d;eip=0x0001c7; 	J(CALL(sub_35e33,0));	// 117284                  call    sub_35E33 ;~ 274D:01C7
cs=0x274d;eip=0x0001ca; 	X(byte_4a39e = al;);	// 117285                  mov     byte_4A39E, al ;~ 274D:01CA
cs=0x274d;eip=0x0001cd; 	J(JZ(loc_35c88));	// 117286                  jz      short loc_35C88 ;~ 274D:01CD
cs=0x274d;eip=0x0001cf; 	J(CALL(sub_35e6a,0));	// 117287                  call    sub_35E6A ;~ 274D:01CF
cs=0x274d;eip=0x0001d2; 	X(MOV(*(dw*)(raddr(ds,di+2)), ax));	// 117288                  mov     [di+2], ax ;~ 274D:01D2
cs=0x274d;eip=0x0001d5; 	X(MOV(*(dw*)(raddr(ds,di+6)), bp));	// 117289                  mov     [di+6], bp ;~ 274D:01D5
loc_35c88:
	// 6989 
cs=0x274d;eip=0x0001d8; 	T(MOV(bx, *(dw*)(raddr(ds,di+8))));	// 117292                  mov     bx, [di+8] ;~ 274D:01D8
cs=0x274d;eip=0x0001db; 	X(word_4a38e = bx;);	// 117293                  mov     word_4A38E, bx ;~ 274D:01DB
cs=0x274d;eip=0x0001df; 	T(MOV(cx, *(dw*)(raddr(ds,di+0x0A))));	// 117294                  mov     cx, [di+0Ah] ;~ 274D:01DF
cs=0x274d;eip=0x0001e2; 	X(word_4a390 = cx;);	// 117295                  mov     word_4A390, cx ;~ 274D:01E2
cs=0x274d;eip=0x0001e6; 	T(MOV(si, *(dw*)(raddr(ds,di+0x0C))));	// 117296                  mov     si, [di+0Ch] ;~ 274D:01E6
cs=0x274d;eip=0x0001e9; 	X(word_4a392 = si;);	// 117297                  mov     word_4A392, si ;~ 274D:01E9
cs=0x274d;eip=0x0001ed; 	T(MOV(dx, *(dw*)(raddr(ds,di+0x0E))));	// 117298                  mov     dx, [di+0Eh] ;~ 274D:01ED
cs=0x274d;eip=0x0001f0; 	X(word_4a394 = dx;);	// 117299                  mov     word_4A394, dx ;~ 274D:01F0
cs=0x274d;eip=0x0001f4; 	J(CALL(sub_35e33,0));	// 117300                  call    sub_35E33 ;~ 274D:01F4
cs=0x274d;eip=0x0001f7; 	X(byte_4a39f = al;);	// 117301                  mov     byte_4A39F, al ;~ 274D:01F7
cs=0x274d;eip=0x0001fa; 	J(JZ(loc_35cb5));	// 117302                  jz      short loc_35CB5 ;~ 274D:01FA
cs=0x274d;eip=0x0001fc; 	J(CALL(sub_35e6a,0));	// 117303                  call    sub_35E6A ;~ 274D:01FC
cs=0x274d;eip=0x0001ff; 	X(MOV(*(dw*)(raddr(ds,di+0x0A)), ax));	// 117304                  mov     [di+0Ah], ax ;~ 274D:01FF
cs=0x274d;eip=0x000202; 	X(MOV(*(dw*)(raddr(ds,di+0x0E)), bp));	// 117305                  mov     [di+0Eh], bp ;~ 274D:0202
loc_35cb5:
	// 6990 
cs=0x274d;eip=0x000205; 	T(ah = byte_4a39e;);	// 117308                  mov     ah, byte_4A39E ;~ 274D:0205
cs=0x274d;eip=0x000209; 	T(al = byte_4a39f;);	// 117309                  mov     al, byte_4A39F ;~ 274D:0209
cs=0x274d;eip=0x00020c; 	T(OR(ah, al));	// 117310                  or      ah, al ;~ 274D:020C
cs=0x274d;eip=0x00020e; 	T(TEST(byte_4a39e, al));	// 117311                  test    byte_4A39E, al ;~ 274D:020E
cs=0x274d;eip=0x000212; 	J(JNZ(loc_35ceb));	// 117312                  jnz     short loc_35CEB ;~ 274D:0212
cs=0x274d;eip=0x000214; 	T(OR(al, al));	// 117313                  or      al, al ;~ 274D:0214
cs=0x274d;eip=0x000216; 	J(JZ(loc_35cd3));	// 117314                  jz      short loc_35CD3 ;~ 274D:0216
cs=0x274d;eip=0x000218; 	T(al = byte_4a39e;);	// 117315                  mov     al, byte_4A39E ;~ 274D:0218
cs=0x274d;eip=0x00021b; 	T(OR(al, al));	// 117316                  or      al, al ;~ 274D:021B
cs=0x274d;eip=0x00021d; 	J(JZ(loc_35cd7));	// 117317                  jz      short loc_35CD7 ;~ 274D:021D
cs=0x274d;eip=0x00021f; 	J(CALL(sub_35cef,0));	// 117318                  call    sub_35CEF ;~ 274D:021F
cs=0x274d;eip=0x000222; 	J(RETN(0));	// 117319                  retn ;~ 274D:0222
loc_35cd3:
	// 6991 
cs=0x274d;eip=0x000223; 	J(CALL(sub_35d4d,0));	// 117323                  call    sub_35D4D ;~ 274D:0223
cs=0x274d;eip=0x000226; 	J(RETN(0));	// 117324                  retn ;~ 274D:0226
loc_35cd7:
	// 6992 
cs=0x274d;eip=0x000227; 	T(bx = word_4a386;);	// 117328                  mov     bx, word_4A386 ;~ 274D:0227
cs=0x274d;eip=0x00022b; 	T(cx = word_4a388;);	// 117329                  mov     cx, word_4A388 ;~ 274D:022B
cs=0x274d;eip=0x00022f; 	T(si = word_4a38a;);	// 117330                  mov     si, word_4A38A ;~ 274D:022F
cs=0x274d;eip=0x000233; 	T(dx = word_4a38c;);	// 117331                  mov     dx, word_4A38C ;~ 274D:0233
cs=0x274d;eip=0x000237; 	J(CALL(sub_35d82,0));	// 117332                  call    sub_35D82 ;~ 274D:0237
cs=0x274d;eip=0x00023a; 	J(RETN(0));	// 117333                  retn ;~ 274D:023A
loc_35ceb:
	// 6993 
cs=0x274d;eip=0x00023b; 	J(CALL(sub_35db8,0));	// 117337                  call    sub_35DB8 ;~ 274D:023B
cs=0x274d;eip=0x00023e; 	J(RETN(0));	// 117338                  retn ;~ 274D:023E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_35c57: 	goto loc_35c57;
        case m2c::kloc_35c88: 	goto loc_35c88;
        case m2c::kloc_35cb5: 	goto loc_35cb5;
        case m2c::kloc_35cd3: 	goto loc_35cd3;
        case m2c::kloc_35cd7: 	goto loc_35cd7;
        case m2c::kloc_35ceb: 	goto loc_35ceb;
        case m2c::ksub_35c0d: 	goto sub_35c0d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35cef(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35cef:
    _begin:
cs=0x274d;eip=0x00023f; 	T(ax = word_4a386;);	// 117346                  mov     ax, word_4A386 ;~ 274D:023F
cs=0x274d;eip=0x000242; 	X(word_4a396 = ax;);	// 117347                  mov     word_4A396, ax ;~ 274D:0242
cs=0x274d;eip=0x000245; 	T(ax = word_4a388;);	// 117348                  mov     ax, word_4A388 ;~ 274D:0245
cs=0x274d;eip=0x000248; 	X(word_4a398 = ax;);	// 117349                  mov     word_4A398, ax ;~ 274D:0248
cs=0x274d;eip=0x00024b; 	T(ax = word_4a38a;);	// 117350                  mov     ax, word_4A38A ;~ 274D:024B
cs=0x274d;eip=0x00024e; 	X(word_4a39a = ax;);	// 117351                  mov     word_4A39A, ax ;~ 274D:024E
cs=0x274d;eip=0x000251; 	T(ax = word_4a38c;);	// 117352                  mov     ax, word_4A38C ;~ 274D:0251
cs=0x274d;eip=0x000254; 	X(word_4a39c = ax;);	// 117353                  mov     word_4A39C, ax ;~ 274D:0254
cs=0x274d;eip=0x000257; 	T(bx = word_4a38e;);	// 117354                  mov     bx, word_4A38E ;~ 274D:0257
cs=0x274d;eip=0x00025b; 	T(cx = word_4a390;);	// 117355                  mov     cx, word_4A390 ;~ 274D:025B
cs=0x274d;eip=0x00025f; 	T(si = word_4a392;);	// 117356                  mov     si, word_4A392 ;~ 274D:025F
cs=0x274d;eip=0x000263; 	T(dx = word_4a394;);	// 117357                  mov     dx, word_4A394 ;~ 274D:0263
cs=0x274d;eip=0x000267; 	J(CALL(sub_35f34,0));	// 117358                  call    sub_35F34 ;~ 274D:0267
cs=0x274d;eip=0x00026a; 	J(JZ(loc_35d26));	// 117359                  jz      short loc_35D26 ;~ 274D:026A
cs=0x274d;eip=0x00026c; 	T(MOV(dx, *(dw*)(raddr(ds,di+0x0E))));	// 117360                  mov     dx, [di+0Eh] ;~ 274D:026C
cs=0x274d;eip=0x00026f; 	X(MOV(*(dw*)(raddr(ds,di+4)), dx));	// 117361                  mov     [di+4], dx ;~ 274D:026F
cs=0x274d;eip=0x000272; 	J(CALL(sub_35db8,0));	// 117362                  call    sub_35DB8 ;~ 274D:0272
cs=0x274d;eip=0x000275; 	J(RETN(0));	// 117363                  retn ;~ 274D:0275
loc_35d26:
	// 6994 
cs=0x274d;eip=0x000276; 	X(word_4a3a9 = bx;);	// 117367                  mov     word_4A3A9, bx ;~ 274D:0276
cs=0x274d;eip=0x00027a; 	X(word_4a3ab = cx;);	// 117368                  mov     word_4A3AB, cx ;~ 274D:027A
cs=0x274d;eip=0x00027e; 	X(word_4a3ad = si;);	// 117369                  mov     word_4A3AD, si ;~ 274D:027E
cs=0x274d;eip=0x000282; 	X(word_4a3af = dx;);	// 117370                  mov     word_4A3AF, dx ;~ 274D:0282
cs=0x274d;eip=0x000286; 	J(CALL(sub_35d4d,0));	// 117371                  call    sub_35D4D ;~ 274D:0286
cs=0x274d;eip=0x000289; 	T(bx = word_4a3a9;);	// 117372                  mov     bx, word_4A3A9 ;~ 274D:0289
cs=0x274d;eip=0x00028d; 	T(cx = word_4a3ab;);	// 117373                  mov     cx, word_4A3AB ;~ 274D:028D
cs=0x274d;eip=0x000291; 	T(si = word_4a3ad;);	// 117374                  mov     si, word_4A3AD ;~ 274D:0291
cs=0x274d;eip=0x000295; 	T(dx = word_4a3af;);	// 117375                  mov     dx, word_4A3AF ;~ 274D:0295
cs=0x274d;eip=0x000299; 	J(CALL(sub_35d82,0));	// 117376                  call    sub_35D82 ;~ 274D:0299
cs=0x274d;eip=0x00029c; 	J(RETN(0));	// 117377                  retn ;~ 274D:029C

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_35d26: 	goto loc_35d26;
        case m2c::ksub_35cef: 	goto sub_35cef;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35d4d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35d4d:
    _begin:
cs=0x274d;eip=0x00029d; 	X(word_4a396 = bx;);	// 117386                  mov     word_4A396, bx ;~ 274D:029D
cs=0x274d;eip=0x0002a1; 	X(word_4a398 = cx;);	// 117387                  mov     word_4A398, cx ;~ 274D:02A1
cs=0x274d;eip=0x0002a5; 	X(word_4a39a = si;);	// 117388                  mov     word_4A39A, si ;~ 274D:02A5
cs=0x274d;eip=0x0002a9; 	X(word_4a39c = dx;);	// 117389                  mov     word_4A39C, dx ;~ 274D:02A9
cs=0x274d;eip=0x0002ad; 	T(bx = word_4a386;);	// 117390                  mov     bx, word_4A386 ;~ 274D:02AD
cs=0x274d;eip=0x0002b1; 	T(cx = word_4a388;);	// 117391                  mov     cx, word_4A388 ;~ 274D:02B1
cs=0x274d;eip=0x0002b5; 	T(si = word_4a38a;);	// 117392                  mov     si, word_4A38A ;~ 274D:02B5
cs=0x274d;eip=0x0002b9; 	T(dx = word_4a38c;);	// 117393                  mov     dx, word_4A38C ;~ 274D:02B9
cs=0x274d;eip=0x0002bd; 	J(CALL(sub_35ebe,0));	// 117394                  call    sub_35EBE ;~ 274D:02BD
cs=0x274d;eip=0x0002c0; 	X(MOV(*(dw*)(raddr(ds,di)), bx));	// 117395                  mov     [di], bx ;~ 274D:02C0
cs=0x274d;eip=0x0002c2; 	X(MOV(*(dw*)(raddr(ds,di+4)), si));	// 117396                  mov     [di+4], si ;~ 274D:02C2
cs=0x274d;eip=0x0002c5; 	T(MOV(ax, *(dw*)(raddr(ds,di+4))));	// 117397                  mov     ax, [di+4] ;~ 274D:02C5
cs=0x274d;eip=0x0002c8; 	T(CMP(ax, *(dw*)(raddr(ds,di+6))));	// 117398                  cmp     ax, [di+6] ;~ 274D:02C8
cs=0x274d;eip=0x0002cb; 	J(JZ(locret_35d81));	// 117399                  jz      short locret_35D81 ;~ 274D:02CB
cs=0x274d;eip=0x0002cd; 	X(OR(*(raddr(ds,di+0x18)), 0x20));	// 117400                  or      byte ptr [di+18h], 20h ;~ 274D:02CD
locret_35d81:
	// 6995 
cs=0x274d;eip=0x0002d1; 	J(RETN(0));	// 117403                  retn ;~ 274D:02D1

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::klocret_35d81: 	goto locret_35d81;
        case m2c::ksub_35d4d: 	goto sub_35d4d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35d82(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35d82:
    _begin:
cs=0x274d;eip=0x0002d2; 	X(word_4a396 = bx;);	// 117412                  mov     word_4A396, bx ;~ 274D:02D2
cs=0x274d;eip=0x0002d6; 	X(word_4a398 = cx;);	// 117413                  mov     word_4A398, cx ;~ 274D:02D6
cs=0x274d;eip=0x0002da; 	X(word_4a39a = si;);	// 117414                  mov     word_4A39A, si ;~ 274D:02DA
cs=0x274d;eip=0x0002de; 	X(word_4a39c = dx;);	// 117415                  mov     word_4A39C, dx ;~ 274D:02DE
cs=0x274d;eip=0x0002e2; 	T(bx = word_4a38e;);	// 117416                  mov     bx, word_4A38E ;~ 274D:02E2
cs=0x274d;eip=0x0002e6; 	T(cx = word_4a390;);	// 117417                  mov     cx, word_4A390 ;~ 274D:02E6
cs=0x274d;eip=0x0002ea; 	T(si = word_4a392;);	// 117418                  mov     si, word_4A392 ;~ 274D:02EA
cs=0x274d;eip=0x0002ee; 	T(dx = word_4a394;);	// 117419                  mov     dx, word_4A394 ;~ 274D:02EE
cs=0x274d;eip=0x0002f2; 	J(CALL(sub_35ebe,0));	// 117420                  call    sub_35EBE ;~ 274D:02F2
cs=0x274d;eip=0x0002f5; 	X(MOV(*(dw*)(raddr(ds,di+8)), bx));	// 117421                  mov     [di+8], bx ;~ 274D:02F5
cs=0x274d;eip=0x0002f8; 	X(MOV(*(dw*)(raddr(ds,di+0x0C)), si));	// 117422                  mov     [di+0Ch], si ;~ 274D:02F8
cs=0x274d;eip=0x0002fb; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x0C))));	// 117423                  mov     ax, [di+0Ch] ;~ 274D:02FB
cs=0x274d;eip=0x0002fe; 	T(CMP(ax, *(dw*)(raddr(ds,di+0x0E))));	// 117424                  cmp     ax, [di+0Eh] ;~ 274D:02FE
cs=0x274d;eip=0x000301; 	J(JZ(locret_35db7));	// 117425                  jz      short locret_35DB7 ;~ 274D:0301
cs=0x274d;eip=0x000303; 	X(OR(*(raddr(ds,di+0x18)), 0x10));	// 117426                  or      byte ptr [di+18h], 10h ;~ 274D:0303
locret_35db7:
	// 6996 
cs=0x274d;eip=0x000307; 	J(RETN(0));	// 117429                  retn ;~ 274D:0307

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::klocret_35db7: 	goto locret_35db7;
        case m2c::ksub_35d82: 	goto sub_35d82;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35db8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35db8:
    _begin:
cs=0x274d;eip=0x000308; 	T(MOV(cl, *(raddr(ds,di+0x18))));	// 117438                  mov     cl, [di+18h] ;~ 274D:0308
cs=0x274d;eip=0x00030b; 	T(OR(cl, 0x80));	// 117439                  or      cl, 80h ;~ 274D:030B
cs=0x274d;eip=0x00030e; 	T(MOV(dx, *(dw*)(raddr(ds,di+0x0E))));	// 117440                  mov     dx, [di+0Eh] ;~ 274D:030E
cs=0x274d;eip=0x000311; 	X(MOV(*(dw*)(raddr(ds,di+4)), dx));	// 117441                  mov     [di+4], dx ;~ 274D:0311
cs=0x274d;eip=0x000314; 	T(TEST(al, 9));	// 117442                  test    al, 9 ;~ 274D:0314
cs=0x274d;eip=0x000316; 	J(JZ(loc_35de0));	// 117443                  jz      short loc_35DE0 ;~ 274D:0316
cs=0x274d;eip=0x000318; 	T(dx = 0;);	// 117444                  mov     dx, 0 ;~ 274D:0318
cs=0x274d;eip=0x00031b; 	T(TEST(al, 8));	// 117445                  test    al, 8 ;~ 274D:031B
cs=0x274d;eip=0x00031d; 	J(JNZ(loc_35dd3));	// 117446                  jnz     short loc_35DD3 ;~ 274D:031D
cs=0x274d;eip=0x00031f; 	T(dx = word_4d787;);	// 117447                  mov     dx, ds:word_4D787 ;~ 274D:031F
loc_35dd3:
	// 6997 
cs=0x274d;eip=0x000323; 	X(MOV(*(dw*)(raddr(ds,di)), dx));	// 117450                  mov     [di], dx ;~ 274D:0323
cs=0x274d;eip=0x000325; 	T(MOV(ax, *(dw*)(raddr(ds,di+4))));	// 117451                  mov     ax, [di+4] ;~ 274D:0325
cs=0x274d;eip=0x000328; 	T(CMP(ax, *(dw*)(raddr(ds,di+6))));	// 117452                  cmp     ax, [di+6] ;~ 274D:0328
cs=0x274d;eip=0x00032b; 	J(JZ(loc_35de0));	// 117453                  jz      short loc_35DE0 ;~ 274D:032B
cs=0x274d;eip=0x00032d; 	T(OR(cl, 0x20));	// 117454                  or      cl, 20h ;~ 274D:032D
loc_35de0:
	// 6998 
cs=0x274d;eip=0x000330; 	X(MOV(*(raddr(ds,di+0x18)), cl));	// 117458                  mov     [di+18h], cl ;~ 274D:0330
cs=0x274d;eip=0x000333; 	J(RETN(0));	// 117459                  retn ;~ 274D:0333

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_35dd3: 	goto loc_35dd3;
        case m2c::kloc_35de0: 	goto loc_35de0;
        case m2c::ksub_35db8: 	goto sub_35db8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35de4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35de4:
    _begin:
cs=0x274d;eip=0x000334; 	T(OR(cx, cx));	// 117467                  or      cx, cx ;~ 274D:0334
cs=0x274d;eip=0x000336; 	J(JNZ(loc_35df3));	// 117468                  jnz     short loc_35DF3 ;~ 274D:0336
cs=0x274d;eip=0x000338; 	T(CMP(bx, 0));	// 117469                  cmp     bx, 0 ;~ 274D:0338
cs=0x274d;eip=0x00033b; 	J(JZ(loc_35e05));	// 117470                  jz      short loc_35E05 ;~ 274D:033B
cs=0x274d;eip=0x00033d; 	T(CMP(bx, word_4d787));	// 117471                  cmp     bx, ds:word_4D787 ;~ 274D:033D
cs=0x274d;eip=0x000341; 	J(JZ(loc_35e05));	// 117472                  jz      short loc_35E05 ;~ 274D:0341
loc_35df3:
	// 6999 
cs=0x274d;eip=0x000343; 	T(OR(dx, dx));	// 117475                  or      dx, dx ;~ 274D:0343
cs=0x274d;eip=0x000345; 	J(JNZ(loc_35e02));	// 117476                  jnz     short loc_35E02 ;~ 274D:0345
cs=0x274d;eip=0x000347; 	T(CMP(si, 0));	// 117477                  cmp     si, 0 ;~ 274D:0347
cs=0x274d;eip=0x00034a; 	J(JZ(loc_35e1c));	// 117478                  jz      short loc_35E1C ;~ 274D:034A
cs=0x274d;eip=0x00034c; 	T(CMP(si, word_4d789));	// 117479                  cmp     si, ds:word_4D789 ;~ 274D:034C
cs=0x274d;eip=0x000350; 	J(JZ(loc_35e1c));	// 117480                  jz      short loc_35E1C ;~ 274D:0350
loc_35e02:
	// 7000 
cs=0x274d;eip=0x000352; 	T(SUB(ax, ax));	// 117483                  sub     ax, ax ;~ 274D:0352
cs=0x274d;eip=0x000354; 	J(RETN(0));	// 117484                  retn ;~ 274D:0354
loc_35e05:
	// 7001 
cs=0x274d;eip=0x000355; 	T(SUB(ax, ax));	// 117489                  sub     ax, ax ;~ 274D:0355
cs=0x274d;eip=0x000357; 	T(OR(dx, dx));	// 117490                  or      dx, dx ;~ 274D:0357
cs=0x274d;eip=0x000359; 	J(JS(loc_35e19));	// 117491                  js      short loc_35E19 ;~ 274D:0359
cs=0x274d;eip=0x00035b; 	J(JNZ(loc_35e19));	// 117492                  jnz     short loc_35E19 ;~ 274D:035B
cs=0x274d;eip=0x00035d; 	T(CMP(si, 0));	// 117493                  cmp     si, 0 ;~ 274D:035D
cs=0x274d;eip=0x000360; 	J(JC(loc_35e19));	// 117494                  jb      short loc_35E19 ;~ 274D:0360
cs=0x274d;eip=0x000362; 	T(CMP(si, word_4d789));	// 117495                  cmp     si, ds:word_4D789 ;~ 274D:0362
cs=0x274d;eip=0x000366; 	J(JA(loc_35e19));	// 117496                  ja      short loc_35E19 ;~ 274D:0366
cs=0x274d;eip=0x000368; 	T(INC(ax));	// 117497                  inc     ax ;~ 274D:0368
loc_35e19:
	// 7002 
cs=0x274d;eip=0x000369; 	T(OR(ax, ax));	// 117501                  or      ax, ax ;~ 274D:0369
cs=0x274d;eip=0x00036b; 	J(RETN(0));	// 117502                  retn ;~ 274D:036B
loc_35e1c:
	// 7003 
cs=0x274d;eip=0x00036c; 	T(SUB(ax, ax));	// 117507                  sub     ax, ax ;~ 274D:036C
cs=0x274d;eip=0x00036e; 	T(OR(cx, cx));	// 117508                  or      cx, cx ;~ 274D:036E
cs=0x274d;eip=0x000370; 	J(JS(loc_35e30));	// 117509                  js      short loc_35E30 ;~ 274D:0370
cs=0x274d;eip=0x000372; 	J(JNZ(loc_35e30));	// 117510                  jnz     short loc_35E30 ;~ 274D:0372
cs=0x274d;eip=0x000374; 	T(CMP(bx, 0));	// 117511                  cmp     bx, 0 ;~ 274D:0374
cs=0x274d;eip=0x000377; 	J(JC(loc_35e30));	// 117512                  jb      short loc_35E30 ;~ 274D:0377
cs=0x274d;eip=0x000379; 	T(CMP(bx, word_4d787));	// 117513                  cmp     bx, ds:word_4D787 ;~ 274D:0379
cs=0x274d;eip=0x00037d; 	J(JA(loc_35e30));	// 117514                  ja      short loc_35E30 ;~ 274D:037D
cs=0x274d;eip=0x00037f; 	T(INC(ax));	// 117515                  inc     ax ;~ 274D:037F
loc_35e30:
	// 7004 
cs=0x274d;eip=0x000380; 	T(OR(ax, ax));	// 117519                  or      ax, ax ;~ 274D:0380
cs=0x274d;eip=0x000382; 	J(RETN(0));	// 117520                  retn ;~ 274D:0382

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_35df3: 	goto loc_35df3;
        case m2c::kloc_35e02: 	goto loc_35e02;
        case m2c::kloc_35e05: 	goto loc_35e05;
        case m2c::kloc_35e19: 	goto loc_35e19;
        case m2c::kloc_35e1c: 	goto loc_35e1c;
        case m2c::kloc_35e30: 	goto loc_35e30;
        case m2c::ksub_35de4: 	goto sub_35de4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35e33(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35e33:
    _begin:
cs=0x274d;eip=0x000383; 	T(al = 0x0C;);	// 117529                  mov     al, 0Ch ;~ 274D:0383
cs=0x274d;eip=0x000385; 	T(OR(cx, cx));	// 117530                  or      cx, cx ;~ 274D:0385
cs=0x274d;eip=0x000387; 	J(JS(loc_35e4e));	// 117531                  js      short loc_35E4E ;~ 274D:0387
cs=0x274d;eip=0x000389; 	J(JNZ(loc_35e40));	// 117532                  jnz     short loc_35E40 ;~ 274D:0389
cs=0x274d;eip=0x00038b; 	T(CMP(bx, 0));	// 117533                  cmp     bx, 0 ;~ 274D:038B
cs=0x274d;eip=0x00038e; 	J(JC(loc_35e4e));	// 117534                  jb      short loc_35E4E ;~ 274D:038E
loc_35e40:
	// 7005 
cs=0x274d;eip=0x000390; 	T(XOR(al, 9));	// 117537                  xor     al, 9 ;~ 274D:0390
cs=0x274d;eip=0x000392; 	T(OR(cx, cx));	// 117538                  or      cx, cx ;~ 274D:0392
cs=0x274d;eip=0x000394; 	J(JNZ(loc_35e4e));	// 117539                  jnz     short loc_35E4E ;~ 274D:0394
cs=0x274d;eip=0x000396; 	T(CMP(bx, word_4d787));	// 117540                  cmp     bx, ds:word_4D787 ;~ 274D:0396
cs=0x274d;eip=0x00039a; 	J(JA(loc_35e4e));	// 117541                  ja      short loc_35E4E ;~ 274D:039A
cs=0x274d;eip=0x00039c; 	T(XOR(al, 1));	// 117542                  xor     al, 1 ;~ 274D:039C
loc_35e4e:
	// 7006 
cs=0x274d;eip=0x00039e; 	T(OR(dx, dx));	// 117546                  or      dx, dx ;~ 274D:039E
cs=0x274d;eip=0x0003a0; 	J(JS(loc_35e67));	// 117547                  js      short loc_35E67 ;~ 274D:03A0
cs=0x274d;eip=0x0003a2; 	J(JNZ(loc_35e59));	// 117548                  jnz     short loc_35E59 ;~ 274D:03A2
cs=0x274d;eip=0x0003a4; 	T(CMP(si, 0));	// 117549                  cmp     si, 0 ;~ 274D:03A4
cs=0x274d;eip=0x0003a7; 	J(JC(loc_35e67));	// 117550                  jb      short loc_35E67 ;~ 274D:03A7
loc_35e59:
	// 7007 
cs=0x274d;eip=0x0003a9; 	T(XOR(al, 6));	// 117553                  xor     al, 6 ;~ 274D:03A9
cs=0x274d;eip=0x0003ab; 	T(OR(dx, dx));	// 117554                  or      dx, dx ;~ 274D:03AB
cs=0x274d;eip=0x0003ad; 	J(JNZ(loc_35e67));	// 117555                  jnz     short loc_35E67 ;~ 274D:03AD
cs=0x274d;eip=0x0003af; 	T(CMP(si, word_4d789));	// 117556                  cmp     si, ds:word_4D789 ;~ 274D:03AF
cs=0x274d;eip=0x0003b3; 	J(JA(loc_35e67));	// 117557                  ja      short loc_35E67 ;~ 274D:03B3
cs=0x274d;eip=0x0003b5; 	T(XOR(al, 2));	// 117558                  xor     al, 2 ;~ 274D:03B5
loc_35e67:
	// 7008 
cs=0x274d;eip=0x0003b7; 	T(OR(al, al));	// 117562                  or      al, al ;~ 274D:03B7
cs=0x274d;eip=0x0003b9; 	J(RETN(0));	// 117563                  retn ;~ 274D:03B9

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_35e40: 	goto loc_35e40;
        case m2c::kloc_35e4e: 	goto loc_35e4e;
        case m2c::kloc_35e59: 	goto loc_35e59;
        case m2c::kloc_35e67: 	goto loc_35e67;
        case m2c::ksub_35e33: 	goto sub_35e33;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35e6a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35e6a:
    _begin:
cs=0x274d;eip=0x0003ba; 	T(ah = 1;);	// 117572                  mov     ah, 1 ;~ 274D:03BA
cs=0x274d;eip=0x0003bc; 	T(bp = cx;);	// 117573                  mov     bp, cx ;~ 274D:03BC
cs=0x274d;eip=0x0003be; 	T(INC(bp));	// 117574                  inc     bp ;~ 274D:03BE
cs=0x274d;eip=0x0003bf; 	T(CMP(bp, 1));	// 117575                  cmp     bp, 1 ;~ 274D:03BF
cs=0x274d;eip=0x0003c2; 	J(JA(loc_35e96));	// 117576                  ja      short loc_35E96 ;~ 274D:03C2
cs=0x274d;eip=0x0003c4; 	T(bp = cx;);	// 117577                  mov     bp, cx ;~ 274D:03C4
cs=0x274d;eip=0x0003c6; 	T(SAR(bp, 1));	// 117578                  sar     bp, 1 ;~ 274D:03C6
cs=0x274d;eip=0x0003c8; 	T(XOR(bp, bx));	// 117579                  xor     bp, bx ;~ 274D:03C8
cs=0x274d;eip=0x0003ca; 	T(AND(bp, 0x0C000));	// 117580                  and     bp, 0C000h ;~ 274D:03CA
cs=0x274d;eip=0x0003ce; 	J(JNZ(loc_35e96));	// 117581                  jnz     short loc_35E96 ;~ 274D:03CE
cs=0x274d;eip=0x0003d0; 	T(bp = dx;);	// 117582                  mov     bp, dx ;~ 274D:03D0
cs=0x274d;eip=0x0003d2; 	T(INC(bp));	// 117583                  inc     bp ;~ 274D:03D2
cs=0x274d;eip=0x0003d3; 	T(CMP(bp, 1));	// 117584                  cmp     bp, 1 ;~ 274D:03D3
cs=0x274d;eip=0x0003d6; 	J(JA(loc_35e96));	// 117585                  ja      short loc_35E96 ;~ 274D:03D6
cs=0x274d;eip=0x0003d8; 	T(bp = dx;);	// 117586                  mov     bp, dx ;~ 274D:03D8
cs=0x274d;eip=0x0003da; 	T(SAR(bp, 1));	// 117587                  sar     bp, 1 ;~ 274D:03DA
cs=0x274d;eip=0x0003dc; 	T(XOR(bp, si));	// 117588                  xor     bp, si ;~ 274D:03DC
cs=0x274d;eip=0x0003de; 	T(AND(bp, 0x0C000));	// 117589                  and     bp, 0C000h ;~ 274D:03DE
cs=0x274d;eip=0x0003e2; 	J(JNZ(loc_35e96));	// 117590                  jnz     short loc_35E96 ;~ 274D:03E2
cs=0x274d;eip=0x0003e4; 	T(SUB(ah, ah));	// 117591                  sub     ah, ah ;~ 274D:03E4
loc_35e96:
	// 7009 
cs=0x274d;eip=0x0003e6; 	X(OR(byte_4a3a0, ah));	// 117595                  or      byte_4A3A0, ah ;~ 274D:03E6
cs=0x274d;eip=0x0003ea; 	T(bp = si;);	// 117596                  mov     bp, si ;~ 274D:03EA
cs=0x274d;eip=0x0003ec; 	T(TEST(al, 4));	// 117597                  test    al, 4 ;~ 274D:03EC
cs=0x274d;eip=0x0003ee; 	J(JZ(loc_35ea3));	// 117598                  jz      short loc_35EA3 ;~ 274D:03EE
cs=0x274d;eip=0x0003f0; 	T(bp = 0;);	// 117599                  mov     bp, 0 ;~ 274D:03F0
loc_35ea3:
	// 7010 
cs=0x274d;eip=0x0003f3; 	T(TEST(al, 2));	// 117602                  test    al, 2 ;~ 274D:03F3
cs=0x274d;eip=0x0003f5; 	J(JZ(loc_35eab));	// 117603                  jz      short loc_35EAB ;~ 274D:03F5
cs=0x274d;eip=0x0003f7; 	T(bp = word_4d789;);	// 117604                  mov     bp, ds:word_4D789 ;~ 274D:03F7
loc_35eab:
	// 7011 
cs=0x274d;eip=0x0003fb; 	T(TEST(al, 8));	// 117607                  test    al, 8 ;~ 274D:03FB
cs=0x274d;eip=0x0003fd; 	J(JZ(loc_35eb3));	// 117608                  jz      short loc_35EB3 ;~ 274D:03FD
cs=0x274d;eip=0x0003ff; 	T(ax = 0;);	// 117609                  mov     ax, 0 ;~ 274D:03FF
cs=0x274d;eip=0x000402; 	J(RETN(0));	// 117610                  retn ;~ 274D:0402
loc_35eb3:
	// 7012 
cs=0x274d;eip=0x000403; 	T(TEST(al, 1));	// 117614                  test    al, 1 ;~ 274D:0403
cs=0x274d;eip=0x000405; 	J(JZ(loc_35ebb));	// 117615                  jz      short loc_35EBB ;~ 274D:0405
cs=0x274d;eip=0x000407; 	T(ax = word_4d787;);	// 117616                  mov     ax, ds:word_4D787 ;~ 274D:0407
cs=0x274d;eip=0x00040a; 	J(RETN(0));	// 117617                  retn ;~ 274D:040A
loc_35ebb:
	// 7013 
cs=0x274d;eip=0x00040b; 	T(ax = bx;);	// 117621                  mov     ax, bx ;~ 274D:040B
cs=0x274d;eip=0x00040d; 	J(RETN(0));	// 117622                  retn ;~ 274D:040D

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_35e96: 	goto loc_35e96;
        case m2c::kloc_35ea3: 	goto loc_35ea3;
        case m2c::kloc_35eab: 	goto loc_35eab;
        case m2c::kloc_35eb3: 	goto loc_35eb3;
        case m2c::kloc_35ebb: 	goto loc_35ebb;
        case m2c::ksub_35e6a: 	goto sub_35e6a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35ebe(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35ebe:
    _begin:
cs=0x274d;eip=0x00040e; 	T(al = byte_4a3a0;);	// 117634                  mov     al, byte_4A3A0 ;~ 274D:040E
cs=0x274d;eip=0x000411; 	T(OR(al, al));	// 117635                  or      al, al ;~ 274D:0411
cs=0x274d;eip=0x000413; 	J(JNZ(loc_35ec8));	// 117636                  jnz     short loc_35EC8 ;~ 274D:0413
cs=0x274d;eip=0x000415; 	J(return seg35ab_550_proc(m2c::kloc_3603a, _state););	// 117637                  jmp     loc_3603A ;~ 274D:0415
loc_35ec8:
	// 7014 
cs=0x274d;eip=0x000418; 	T(bp = 0x20;);	// 117641                  mov     bp, 20h ; ' ' ;~ 274D:0418
loc_35ecb:
	// 7015 
cs=0x274d;eip=0x00041b; 	X(word_4a3a1 = bx;);	// 117644                  mov     word_4A3A1, bx ;~ 274D:041B
cs=0x274d;eip=0x00041f; 	X(word_4a3a3 = cx;);	// 117645                  mov     word_4A3A3, cx ;~ 274D:041F
cs=0x274d;eip=0x000423; 	X(word_4a3a5 = si;);	// 117646                  mov     word_4A3A5, si ;~ 274D:0423
cs=0x274d;eip=0x000427; 	X(word_4a3a7 = dx;);	// 117647                  mov     word_4A3A7, dx ;~ 274D:0427
loc_35edb:
	// 7016 
cs=0x274d;eip=0x00042b; 	T(ADD(bx, word_4a396));	// 117650                  add     bx, word_4A396 ;~ 274D:042B
cs=0x274d;eip=0x00042f; 	T(ADC(cx, word_4a398));	// 117651                  adc     cx, word_4A398 ;~ 274D:042F
cs=0x274d;eip=0x000433; 	T(SAR(cx, 1));	// 117652                  sar     cx, 1 ;~ 274D:0433
cs=0x274d;eip=0x000435; 	T(RCR(bx, 1));	// 117653                  rcr     bx, 1 ;~ 274D:0435
cs=0x274d;eip=0x000437; 	T(ADD(si, word_4a39a));	// 117654                  add     si, word_4A39A ;~ 274D:0437
cs=0x274d;eip=0x00043b; 	T(ADC(dx, word_4a39c));	// 117655                  adc     dx, word_4A39C ;~ 274D:043B
cs=0x274d;eip=0x00043f; 	T(SAR(dx, 1));	// 117656                  sar     dx, 1 ;~ 274D:043F
cs=0x274d;eip=0x000441; 	T(RCR(si, 1));	// 117657                  rcr     si, 1 ;~ 274D:0441
cs=0x274d;eip=0x000443; 	J(CALL(sub_35de4,0));	// 117658                  call    sub_35DE4 ;~ 274D:0443
cs=0x274d;eip=0x000446; 	J(JNZ(locret_35f22));	// 117659                  jnz     short locret_35F22 ;~ 274D:0446
cs=0x274d;eip=0x000448; 	T(DEC(bp));	// 117660                  dec     bp ;~ 274D:0448
cs=0x274d;eip=0x000449; 	J(JZ(loc_35f23));	// 117661                  jz      short loc_35F23 ;~ 274D:0449
cs=0x274d;eip=0x00044b; 	J(CALL(sub_35e33,0));	// 117662                  call    sub_35E33 ;~ 274D:044B
cs=0x274d;eip=0x00044e; 	J(JNZ(loc_35ecb));	// 117663                  jnz     short loc_35ECB ;~ 274D:044E
cs=0x274d;eip=0x000450; 	X(word_4a396 = bx;);	// 117664                  mov     word_4A396, bx ;~ 274D:0450
cs=0x274d;eip=0x000454; 	X(word_4a398 = cx;);	// 117665                  mov     word_4A398, cx ;~ 274D:0454
cs=0x274d;eip=0x000458; 	X(word_4a39a = si;);	// 117666                  mov     word_4A39A, si ;~ 274D:0458
cs=0x274d;eip=0x00045c; 	X(word_4a39c = dx;);	// 117667                  mov     word_4A39C, dx ;~ 274D:045C
cs=0x274d;eip=0x000460; 	T(bx = word_4a3a1;);	// 117668                  mov     bx, word_4A3A1 ;~ 274D:0460
cs=0x274d;eip=0x000464; 	T(cx = word_4a3a3;);	// 117669                  mov     cx, word_4A3A3 ;~ 274D:0464
cs=0x274d;eip=0x000468; 	T(si = word_4a3a5;);	// 117670                  mov     si, word_4A3A5 ;~ 274D:0468
cs=0x274d;eip=0x00046c; 	T(dx = word_4a3a7;);	// 117671                  mov     dx, word_4A3A7 ;~ 274D:046C
cs=0x274d;eip=0x000470; 	J(JMP(loc_35edb));	// 117672                  jmp     short loc_35EDB ;~ 274D:0470
locret_35f22:
	// 7017 
cs=0x274d;eip=0x000472; 	J(RETN(0));	// 117676                  retn ;~ 274D:0472
loc_35f23:
	// 7018 
cs=0x274d;eip=0x000473; 	T(bx = word_4a396;);	// 117680                  mov     bx, word_4A396 ;~ 274D:0473
cs=0x274d;eip=0x000477; 	T(cx = word_4a398;);	// 117681                  mov     cx, word_4A398 ;~ 274D:0477
cs=0x274d;eip=0x00047b; 	T(si = word_4a39a;);	// 117682                  mov     si, word_4A39A ;~ 274D:047B
cs=0x274d;eip=0x00047f; 	T(dx = word_4a39c;);	// 117683                  mov     dx, word_4A39C ;~ 274D:047F
cs=0x274d;eip=0x000483; 	J(RETN(0));	// 117684                  retn ;~ 274D:0483

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_35ec8: 	goto loc_35ec8;
        case m2c::kloc_35ecb: 	goto loc_35ecb;
        case m2c::kloc_35edb: 	goto loc_35edb;
        case m2c::kloc_35f23: 	goto loc_35f23;
        case m2c::klocret_35f22: 	goto locret_35f22;
        case m2c::ksub_35ebe: 	goto sub_35ebe;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35f34(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35f34:
    _begin:
cs=0x274d;eip=0x000484; 	T(al = byte_4a3a0;);	// 117695                  mov     al, byte_4A3A0 ;~ 274D:0484
cs=0x274d;eip=0x000487; 	T(OR(al, al));	// 117696                  or      al, al ;~ 274D:0487
cs=0x274d;eip=0x000489; 	J(JNZ(loc_35f3e));	// 117697                  jnz     short loc_35F3E ;~ 274D:0489
cs=0x274d;eip=0x00048b; 	J(return seg35ab_550_proc(m2c::kloc_36000, _state););	// 117698                  jmp     loc_36000 ;~ 274D:048B
loc_35f3e:
	// 7019 
cs=0x274d;eip=0x00048e; 	T(bp = 0x20;);	// 117702                  mov     bp, 20h ; ' ' ;~ 274D:048E
loc_35f41:
	// 7020 
cs=0x274d;eip=0x000491; 	X(word_4a3a1 = bx;);	// 117705                  mov     word_4A3A1, bx ;~ 274D:0491
cs=0x274d;eip=0x000495; 	X(word_4a3a3 = cx;);	// 117706                  mov     word_4A3A3, cx ;~ 274D:0495
cs=0x274d;eip=0x000499; 	X(word_4a3a5 = si;);	// 117707                  mov     word_4A3A5, si ;~ 274D:0499
cs=0x274d;eip=0x00049d; 	X(word_4a3a7 = dx;);	// 117708                  mov     word_4A3A7, dx ;~ 274D:049D
loc_35f51:
	// 7021 
cs=0x274d;eip=0x0004a1; 	T(ADD(bx, word_4a396));	// 117711                  add     bx, word_4A396 ;~ 274D:04A1
cs=0x274d;eip=0x0004a5; 	T(ADC(cx, word_4a398));	// 117712                  adc     cx, word_4A398 ;~ 274D:04A5
cs=0x274d;eip=0x0004a9; 	T(SAR(cx, 1));	// 117713                  sar     cx, 1 ;~ 274D:04A9
cs=0x274d;eip=0x0004ab; 	T(RCR(bx, 1));	// 117714                  rcr     bx, 1 ;~ 274D:04AB
cs=0x274d;eip=0x0004ad; 	T(ADD(si, word_4a39a));	// 117715                  add     si, word_4A39A ;~ 274D:04AD
cs=0x274d;eip=0x0004b1; 	T(ADC(dx, word_4a39c));	// 117716                  adc     dx, word_4A39C ;~ 274D:04B1
cs=0x274d;eip=0x0004b5; 	T(SAR(dx, 1));	// 117717                  sar     dx, 1 ;~ 274D:04B5
cs=0x274d;eip=0x0004b7; 	T(RCR(si, 1));	// 117718                  rcr     si, 1 ;~ 274D:04B7
cs=0x274d;eip=0x0004b9; 	J(CALL(sub_35e33,0));	// 117719                  call    sub_35E33 ;~ 274D:04B9
cs=0x274d;eip=0x0004bc; 	J(JZ(loc_35f9f));	// 117720                  jz      short loc_35F9F ;~ 274D:04BC
cs=0x274d;eip=0x0004be; 	T(DEC(bp));	// 117721                  dec     bp ;~ 274D:04BE
cs=0x274d;eip=0x0004bf; 	J(JZ(loc_35f9f));	// 117722                  jz      short loc_35F9F ;~ 274D:04BF
cs=0x274d;eip=0x0004c1; 	T(TEST(byte_4a39e, al));	// 117723                  test    byte_4A39E, al ;~ 274D:04C1
cs=0x274d;eip=0x0004c5; 	J(JZ(loc_35f41));	// 117724                  jz      short loc_35F41 ;~ 274D:04C5
cs=0x274d;eip=0x0004c7; 	T(TEST(byte_4a39f, al));	// 117725                  test    byte_4A39F, al ;~ 274D:04C7
cs=0x274d;eip=0x0004cb; 	J(JNZ(loc_35f9f));	// 117726                  jnz     short loc_35F9F ;~ 274D:04CB
cs=0x274d;eip=0x0004cd; 	X(word_4a396 = bx;);	// 117727                  mov     word_4A396, bx ;~ 274D:04CD
cs=0x274d;eip=0x0004d1; 	X(word_4a398 = cx;);	// 117728                  mov     word_4A398, cx ;~ 274D:04D1
cs=0x274d;eip=0x0004d5; 	X(word_4a39a = si;);	// 117729                  mov     word_4A39A, si ;~ 274D:04D5
cs=0x274d;eip=0x0004d9; 	X(word_4a39c = dx;);	// 117730                  mov     word_4A39C, dx ;~ 274D:04D9
cs=0x274d;eip=0x0004dd; 	T(bx = word_4a3a1;);	// 117731                  mov     bx, word_4A3A1 ;~ 274D:04DD
cs=0x274d;eip=0x0004e1; 	T(cx = word_4a3a3;);	// 117732                  mov     cx, word_4A3A3 ;~ 274D:04E1
cs=0x274d;eip=0x0004e5; 	T(si = word_4a3a5;);	// 117733                  mov     si, word_4A3A5 ;~ 274D:04E5
cs=0x274d;eip=0x0004e9; 	T(dx = word_4a3a7;);	// 117734                  mov     dx, word_4A3A7 ;~ 274D:04E9
cs=0x274d;eip=0x0004ed; 	J(JMP(loc_35f51));	// 117735                  jmp     short loc_35F51 ;~ 274D:04ED
loc_35f9f:
	// 7022 
cs=0x274d;eip=0x0004ef; 	T(OR(al, al));	// 117740                  or      al, al ;~ 274D:04EF
cs=0x274d;eip=0x0004f1; 	J(RETN(0));	// 117741                  retn ;~ 274D:04F1

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_35f3e: 	goto loc_35f3e;
        case m2c::kloc_35f41: 	goto loc_35f41;
        case m2c::kloc_35f51: 	goto loc_35f51;
        case m2c::kloc_35f9f: 	goto loc_35f9f;
        case m2c::ksub_35f34: 	goto sub_35f34;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35fa2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35fa2:
    _begin:
cs=0x274d;eip=0x0004f2; 	T(CMP(bx, 0));	// 117749                  cmp     bx, 0 ;~ 274D:04F2
cs=0x274d;eip=0x0004f5; 	J(JZ(loc_35fbb));	// 117750                  jz      short loc_35FBB ;~ 274D:04F5
cs=0x274d;eip=0x0004f7; 	T(CMP(bx, word_4d787));	// 117751                  cmp     bx, ds:word_4D787 ;~ 274D:04F7
cs=0x274d;eip=0x0004fb; 	J(JZ(loc_35fbb));	// 117752                  jz      short loc_35FBB ;~ 274D:04FB
cs=0x274d;eip=0x0004fd; 	T(CMP(si, 0));	// 117753                  cmp     si, 0 ;~ 274D:04FD
cs=0x274d;eip=0x000500; 	J(JZ(loc_35fcc));	// 117754                  jz      short loc_35FCC ;~ 274D:0500
cs=0x274d;eip=0x000502; 	T(CMP(si, word_4d789));	// 117755                  cmp     si, ds:word_4D789 ;~ 274D:0502
cs=0x274d;eip=0x000506; 	J(JZ(loc_35fcc));	// 117756                  jz      short loc_35FCC ;~ 274D:0506
cs=0x274d;eip=0x000508; 	T(SUB(ax, ax));	// 117757                  sub     ax, ax ;~ 274D:0508
cs=0x274d;eip=0x00050a; 	J(RETN(0));	// 117758                  retn ;~ 274D:050A
loc_35fbb:
	// 7023 
cs=0x274d;eip=0x00050b; 	T(SUB(ax, ax));	// 117763                  sub     ax, ax ;~ 274D:050B
cs=0x274d;eip=0x00050d; 	T(CMP(si, 0));	// 117764                  cmp     si, 0 ;~ 274D:050D
cs=0x274d;eip=0x000510; 	J(JL(loc_35fc9));	// 117765                  jl      short loc_35FC9 ;~ 274D:0510
cs=0x274d;eip=0x000512; 	T(CMP(si, word_4d789));	// 117766                  cmp     si, ds:word_4D789 ;~ 274D:0512
cs=0x274d;eip=0x000516; 	J(JG(loc_35fc9));	// 117767                  jg      short loc_35FC9 ;~ 274D:0516
cs=0x274d;eip=0x000518; 	T(INC(ax));	// 117768                  inc     ax ;~ 274D:0518
loc_35fc9:
	// 7024 
cs=0x274d;eip=0x000519; 	T(OR(ax, ax));	// 117772                  or      ax, ax ;~ 274D:0519
cs=0x274d;eip=0x00051b; 	J(RETN(0));	// 117773                  retn ;~ 274D:051B
loc_35fcc:
	// 7025 
cs=0x274d;eip=0x00051c; 	T(SUB(ax, ax));	// 117778                  sub     ax, ax ;~ 274D:051C
cs=0x274d;eip=0x00051e; 	T(CMP(bx, 0));	// 117779                  cmp     bx, 0 ;~ 274D:051E
cs=0x274d;eip=0x000521; 	J(JL(loc_35fda));	// 117780                  jl      short loc_35FDA ;~ 274D:0521
cs=0x274d;eip=0x000523; 	T(CMP(bx, word_4d787));	// 117781                  cmp     bx, ds:word_4D787 ;~ 274D:0523
cs=0x274d;eip=0x000527; 	J(JG(loc_35fda));	// 117782                  jg      short loc_35FDA ;~ 274D:0527
cs=0x274d;eip=0x000529; 	T(INC(ax));	// 117783                  inc     ax ;~ 274D:0529
loc_35fda:
	// 7026 
cs=0x274d;eip=0x00052a; 	T(OR(ax, ax));	// 117787                  or      ax, ax ;~ 274D:052A
cs=0x274d;eip=0x00052c; 	J(RETN(0));	// 117788                  retn ;~ 274D:052C

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_35fbb: 	goto loc_35fbb;
        case m2c::kloc_35fc9: 	goto loc_35fc9;
        case m2c::kloc_35fcc: 	goto loc_35fcc;
        case m2c::kloc_35fda: 	goto loc_35fda;
        case m2c::ksub_35fa2: 	goto sub_35fa2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35fdd(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35fdd:
    _begin:
cs=0x274d;eip=0x00052d; 	T(al = 0x0C;);	// 117797                  mov     al, 0Ch ;~ 274D:052D
cs=0x274d;eip=0x00052f; 	T(CMP(bx, 0));	// 117798                  cmp     bx, 0 ;~ 274D:052F
cs=0x274d;eip=0x000532; 	J(JL(loc_35fee));	// 117799                  jl      short loc_35FEE ;~ 274D:0532
cs=0x274d;eip=0x000534; 	T(XOR(al, 9));	// 117800                  xor     al, 9 ;~ 274D:0534
cs=0x274d;eip=0x000536; 	T(CMP(bx, word_4d787));	// 117801                  cmp     bx, ds:word_4D787 ;~ 274D:0536
cs=0x274d;eip=0x00053a; 	J(JG(loc_35fee));	// 117802                  jg      short loc_35FEE ;~ 274D:053A
cs=0x274d;eip=0x00053c; 	T(XOR(al, 1));	// 117803                  xor     al, 1 ;~ 274D:053C
loc_35fee:
	// 7027 
cs=0x274d;eip=0x00053e; 	T(CMP(si, 0));	// 117807                  cmp     si, 0 ;~ 274D:053E
cs=0x274d;eip=0x000541; 	J(JL(loc_35ffd));	// 117808                  jl      short loc_35FFD ;~ 274D:0541
cs=0x274d;eip=0x000543; 	T(XOR(al, 6));	// 117809                  xor     al, 6 ;~ 274D:0543
cs=0x274d;eip=0x000545; 	T(CMP(si, word_4d789));	// 117810                  cmp     si, ds:word_4D789 ;~ 274D:0545
cs=0x274d;eip=0x000549; 	J(JG(loc_35ffd));	// 117811                  jg      short loc_35FFD ;~ 274D:0549
cs=0x274d;eip=0x00054b; 	T(XOR(al, 2));	// 117812                  xor     al, 2 ;~ 274D:054B
loc_35ffd:
	// 7028 
cs=0x274d;eip=0x00054d; 	T(OR(al, al));	// 117816                  or      al, al ;~ 274D:054D
cs=0x274d;eip=0x00054f; 	J(RETN(0));	// 117817                  retn ;~ 274D:054F

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_35fee: 	goto loc_35fee;
        case m2c::kloc_35ffd: 	goto loc_35ffd;
        case m2c::ksub_35fdd: 	goto sub_35fdd;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg35ab_550_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg35ab_550_proc:
    _begin:
loc_36000:
	// 7029 
cs=0x274d;eip=0x000550; 	X(PUSH(di));	// 117824                  push    di ;~ 274D:0550
cs=0x274d;eip=0x000551; 	T(cx = word_4a396;);	// 117825                  mov     cx, word_4A396 ;~ 274D:0551
cs=0x274d;eip=0x000555; 	T(dx = word_4a39a;);	// 117826                  mov     dx, word_4A39A ;~ 274D:0555
cs=0x274d;eip=0x000559; 	T(bp = 0x10;);	// 117827                  mov     bp, 10h ;~ 274D:0559
loc_3600c:
	// 7030 
cs=0x274d;eip=0x00055c; 	T(di = bx;);	// 117830                  mov     di, bx ;~ 274D:055C
cs=0x274d;eip=0x00055e; 	T(es = si;);	// 117831                  mov     es, si ;~ 274D:055E
loc_36010:
	// 7031 
cs=0x274d;eip=0x000560; 	T(ADD(bx, cx));	// 117835                  add     bx, cx ;~ 274D:0560
cs=0x274d;eip=0x000562; 	T(SAR(bx, 1));	// 117836                  sar     bx, 1 ;~ 274D:0562
cs=0x274d;eip=0x000564; 	T(ADD(si, dx));	// 117837                  add     si, dx ;~ 274D:0564
cs=0x274d;eip=0x000566; 	T(SAR(si, 1));	// 117838                  sar     si, 1 ;~ 274D:0566
cs=0x274d;eip=0x000568; 	J(CALL(sub_35fdd,0));	// 117839                  call    sub_35FDD ;~ 274D:0568
cs=0x274d;eip=0x00056b; 	J(JZ(loc_36036));	// 117840                  jz      short loc_36036 ;~ 274D:056B
cs=0x274d;eip=0x00056d; 	T(DEC(bp));	// 117841                  dec     bp ;~ 274D:056D
cs=0x274d;eip=0x00056e; 	J(JZ(loc_36036));	// 117842                  jz      short loc_36036 ;~ 274D:056E
cs=0x274d;eip=0x000570; 	T(TEST(byte_4a39e, al));	// 117843                  test    byte_4A39E, al ;~ 274D:0570
cs=0x274d;eip=0x000574; 	J(JZ(loc_3600c));	// 117844                  jz      short loc_3600C ;~ 274D:0574
cs=0x274d;eip=0x000576; 	T(TEST(byte_4a39f, al));	// 117845                  test    byte_4A39F, al ;~ 274D:0576
cs=0x274d;eip=0x00057a; 	J(JNZ(loc_36036));	// 117846                  jnz     short loc_36036 ;~ 274D:057A
cs=0x274d;eip=0x00057c; 	T(cx = bx;);	// 117848                  mov     cx, bx ;~ 274D:057C
cs=0x274d;eip=0x00057e; 	T(dx = si;);	// 117849                  mov     dx, si ;~ 274D:057E
cs=0x274d;eip=0x000580; 	T(bx = di;);	// 117850                  mov     bx, di ;~ 274D:0580
cs=0x274d;eip=0x000582; 	T(si = es;);	// 117851                  mov     si, es ;~ 274D:0582
cs=0x274d;eip=0x000584; 	J(JMP(loc_36010));	// 117852                  jmp     short loc_36010 ;~ 274D:0584
loc_36036:
	// 7032 
cs=0x274d;eip=0x000586; 	X(POP(di));	// 117857                  pop     di ;~ 274D:0586
cs=0x274d;eip=0x000587; 	T(OR(al, al));	// 117858                  or      al, al ;~ 274D:0587
cs=0x274d;eip=0x000589; 	J(RETN(0));	// 117859                  retn ;~ 274D:0589
loc_3603a:
	// 7033 
cs=0x274d;eip=0x00058a; 	X(PUSH(di));	// 117865                  push    di ;~ 274D:058A
cs=0x274d;eip=0x00058b; 	T(cx = word_4a396;);	// 117866                  mov     cx, word_4A396 ;~ 274D:058B
cs=0x274d;eip=0x00058f; 	T(dx = word_4a39a;);	// 117867                  mov     dx, word_4A39A ;~ 274D:058F
cs=0x274d;eip=0x000593; 	T(bp = 0x10;);	// 117868                  mov     bp, 10h ;~ 274D:0593
loc_36046:
	// 7034 
cs=0x274d;eip=0x000596; 	T(di = bx;);	// 117871                  mov     di, bx ;~ 274D:0596
cs=0x274d;eip=0x000598; 	T(es = si;);	// 117872                  mov     es, si ;~ 274D:0598
loc_3604a:
	// 7035 
cs=0x274d;eip=0x00059a; 	T(ADD(bx, cx));	// 117876                  add     bx, cx ;~ 274D:059A
cs=0x274d;eip=0x00059c; 	T(SAR(bx, 1));	// 117877                  sar     bx, 1 ;~ 274D:059C
cs=0x274d;eip=0x00059e; 	T(ADD(si, dx));	// 117878                  add     si, dx ;~ 274D:059E
cs=0x274d;eip=0x0005a0; 	T(SAR(si, 1));	// 117879                  sar     si, 1 ;~ 274D:05A0
cs=0x274d;eip=0x0005a2; 	J(CALL(sub_35fa2,0));	// 117880                  call    sub_35FA2 ;~ 274D:05A2
cs=0x274d;eip=0x0005a5; 	J(JNZ(loc_36069));	// 117881                  jnz     short loc_36069 ;~ 274D:05A5
cs=0x274d;eip=0x0005a7; 	T(DEC(bp));	// 117882                  dec     bp ;~ 274D:05A7
cs=0x274d;eip=0x0005a8; 	J(JZ(loc_3606b));	// 117883                  jz      short loc_3606B ;~ 274D:05A8
cs=0x274d;eip=0x0005aa; 	J(CALL(sub_35fdd,0));	// 117884                  call    sub_35FDD ;~ 274D:05AA
cs=0x274d;eip=0x0005ad; 	J(JNZ(loc_36046));	// 117885                  jnz     short loc_36046 ;~ 274D:05AD
cs=0x274d;eip=0x0005af; 	T(cx = bx;);	// 117886                  mov     cx, bx ;~ 274D:05AF
cs=0x274d;eip=0x0005b1; 	T(dx = si;);	// 117887                  mov     dx, si ;~ 274D:05B1
cs=0x274d;eip=0x0005b3; 	T(bx = di;);	// 117888                  mov     bx, di ;~ 274D:05B3
cs=0x274d;eip=0x0005b5; 	T(si = es;);	// 117889                  mov     si, es ;~ 274D:05B5
cs=0x274d;eip=0x0005b7; 	J(JMP(loc_3604a));	// 117890                  jmp     short loc_3604A ;~ 274D:05B7
loc_36069:
	// 7036 
cs=0x274d;eip=0x0005b9; 	X(POP(di));	// 117894                  pop     di ;~ 274D:05B9
cs=0x274d;eip=0x0005ba; 	J(RETN(0));	// 117895                  retn ;~ 274D:05BA
loc_3606b:
	// 7037 
cs=0x274d;eip=0x0005bb; 	T(bx = cx;);	// 117899                  mov     bx, cx ;~ 274D:05BB
cs=0x274d;eip=0x0005bd; 	T(si = dx;);	// 117900                  mov     si, dx ;~ 274D:05BD
cs=0x274d;eip=0x0005bf; 	X(POP(di));	// 117901                  pop     di ;~ 274D:05BF
cs=0x274d;eip=0x0005c0; 	J(RETN(0));	// 117902                  retn ;~ 274D:05C0
ret_274d_5c2:
	// 7038 
cs=0x274d;eip=0x0005c2; 	X(PUSH(bp));	// 117907                  push    bp ;~ 274D:05C2
cs=0x274d;eip=0x0005c3; 	T(bp = sp;);	// 117908                  mov     bp, sp ;~ 274D:05C3
cs=0x274d;eip=0x0005c5; 	X(PUSH(si));	// 117909                  push    si ;~ 274D:05C5
cs=0x274d;eip=0x0005c6; 	X(PUSH(di));	// 117910                  push    di ;~ 274D:05C6
cs=0x274d;eip=0x0005c7; 	T(MOV(si, *(dw*)(raddr(ss,bp+4))));	// 117911                  mov     si, [bp+4] ;~ 274D:05C7
cs=0x274d;eip=0x0005ca; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 117912                  mov     ax, [bp+6] ;~ 274D:05CA
cs=0x274d;eip=0x0005cd; 	T(es = ax;);	// 117913                  mov     es, ax ;~ 274D:05CD
cs=0x274d;eip=0x0005cf; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 117914                  mov     di, [bp+8] ;~ 274D:05CF
cs=0x274d;eip=0x0005d2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0A))));	// 117915                  mov     bx, [bp+0Ah] ;~ 274D:05D2
cs=0x274d;eip=0x0005d5; 	J(CALL(sub_3608c,0));	// 117916                  call    sub_3608C ;~ 274D:05D5
cs=0x274d;eip=0x0005d8; 	X(POP(di));	// 117917                  pop     di ;~ 274D:05D8
cs=0x274d;eip=0x0005d9; 	X(POP(si));	// 117918                  pop     si ;~ 274D:05D9
cs=0x274d;eip=0x0005da; 	X(POP(bp));	// 117919                  pop     bp ;~ 274D:05DA
cs=0x274d;eip=0x0005db; 	J(RETN(0));	// 117920                  retn ;~ 274D:05DB

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_36000: 	goto loc_36000;
        case m2c::kloc_3600c: 	goto loc_3600c;
        case m2c::kloc_36010: 	goto loc_36010;
        case m2c::kloc_36036: 	goto loc_36036;
        case m2c::kloc_3603a: 	goto loc_3603a;
        case m2c::kloc_36046: 	goto loc_36046;
        case m2c::kloc_3604a: 	goto loc_3604a;
        case m2c::kloc_36069: 	goto loc_36069;
        case m2c::kloc_3606b: 	goto loc_3606b;
        case m2c::kret_274d_5c2: 	goto ret_274d_5c2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3608c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3608c:
    _begin:
cs=0x274d;eip=0x0005dc; 	X(word_4a3c0 = bx;);	// 117928                  mov     word_4A3C0, bx ;~ 274D:05DC
cs=0x274d;eip=0x0005e0; 	T(SUB(bp, bp));	// 117929                  sub     bp, bp ;~ 274D:05E0
cs=0x274d;eip=0x0005e2; 	T(MOV(al, *(raddr(es,si))));	// 117930                  mov     al, es:[si] ;~ 274D:05E2
cs=0x274d;eip=0x0005e5; 	T(INC(si));	// 117931                  inc     si ;~ 274D:05E5
cs=0x274d;eip=0x0005e6; 	T(SUB(ah, ah));	// 117932                  sub     ah, ah ;~ 274D:05E6
cs=0x274d;eip=0x0005e8; 	T(cx = ax;);	// 117933                  mov     cx, ax ;~ 274D:05E8
loc_3609a:
	// 7039 
cs=0x274d;eip=0x0005ea; 	T(bx = word_4a3c0;);	// 117936                  mov     bx, word_4A3C0 ;~ 274D:05EA
cs=0x274d;eip=0x0005ee; 	T(ADD(bx, cx));	// 117937                  add     bx, cx ;~ 274D:05EE
cs=0x274d;eip=0x0005f0; 	T(MOV(al, *(raddr(ds,bx))));	// 117938                  mov     al, [bx] ;~ 274D:05F0
cs=0x274d;eip=0x0005f2; 	T(bx = cx;);	// 117939                  mov     bx, cx ;~ 274D:05F2
cs=0x274d;eip=0x0005f4; 	T(SHL(bx, 1));	// 117940                  shl     bx, 1 ;~ 274D:05F4
cs=0x274d;eip=0x0005f6; 	T(SUB(dx, dx));	// 117941                  sub     dx, dx ;~ 274D:05F6
cs=0x274d;eip=0x0005f8; 	T(CMP(al, 0x0FF));	// 117942                  cmp     al, 0FFh ;~ 274D:05F8
cs=0x274d;eip=0x0005fa; 	J(JNZ(loc_360af));	// 117943                  jnz     short loc_360AF ;~ 274D:05FA
cs=0x274d;eip=0x0005fc; 	T(dx = 2;);	// 117944                  mov     dx, 2 ;~ 274D:05FC
loc_360af:
	// 7040 
cs=0x274d;eip=0x0005ff; 	T(CMP(dx, 0));	// 117948                  cmp     dx, 0 ;~ 274D:05FF
cs=0x274d;eip=0x000602; 	J(JZ(loc_360c6));	// 117949                  jz      short loc_360C6 ;~ 274D:0602
cs=0x274d;eip=0x000604; 	T(CMP(dx, 1));	// 117950                  cmp     dx, 1 ;~ 274D:0604
cs=0x274d;eip=0x000607; 	J(JZ(loc_360cc));	// 117951                  jz      short loc_360CC ;~ 274D:0607
cs=0x274d;eip=0x000609; 	T(CMP(dx, 2));	// 117952                  cmp     dx, 2 ;~ 274D:0609
cs=0x274d;eip=0x00060c; 	J(JZ(loc_360d5));	// 117953                  jz      short loc_360D5 ;~ 274D:060C
cs=0x274d;eip=0x00060e; 	T(CMP(dx, 3));	// 117954                  cmp     dx, 3 ;~ 274D:060E
cs=0x274d;eip=0x000611; 	J(JZ(loc_360db));	// 117955                  jz      short loc_360DB ;~ 274D:0611
cs=0x274d;eip=0x000613; 	J(JMP(loc_360e4));	// 117956                  jmp     short loc_360E4 ;~ 274D:0613
loc_360c6:
	// 7041 
cs=0x274d;eip=0x000616; 	T(dx = 1;);	// 117962                  mov     dx, 1 ;~ 274D:0616
cs=0x274d;eip=0x000619; 	J(JMP(loc_36108));	// 117963                  jmp     short loc_36108 ;~ 274D:0619
loc_360cc:
	// 7042 
cs=0x274d;eip=0x00061c; 	X(MOV(*(raddr(ds,di)), cl));	// 117969                  mov     [di], cl ;~ 274D:061C
cs=0x274d;eip=0x00061e; 	T(INC(di));	// 117970                  inc     di ;~ 274D:061E
cs=0x274d;eip=0x00061f; 	T(dx = 4;);	// 117971                  mov     dx, 4 ;~ 274D:061F
cs=0x274d;eip=0x000622; 	J(JMP(loc_360fc));	// 117972                  jmp     short loc_360FC ;~ 274D:0622
loc_360d5:
	// 7043 
cs=0x274d;eip=0x000625; 	T(dx = 3;);	// 117978                  mov     dx, 3 ;~ 274D:0625
cs=0x274d;eip=0x000628; 	J(JMP(loc_360fc));	// 117979                  jmp     short loc_360FC ;~ 274D:0628
loc_360db:
	// 7044 
cs=0x274d;eip=0x00062b; 	X(MOV(*(raddr(ds,di)), cl));	// 117985                  mov     [di], cl ;~ 274D:062B
cs=0x274d;eip=0x00062d; 	T(INC(di));	// 117986                  inc     di ;~ 274D:062D
cs=0x274d;eip=0x00062e; 	T(dx = 4;);	// 117987                  mov     dx, 4 ;~ 274D:062E
cs=0x274d;eip=0x000631; 	J(JMP(loc_36108));	// 117988                  jmp     short loc_36108 ;~ 274D:0631
loc_360e4:
	// 7045 
cs=0x274d;eip=0x000634; 	T(SUB(bp, 1));	// 117994                  sub     bp, 1 ;~ 274D:0634
cs=0x274d;eip=0x000637; 	J(JS(loc_360f8));	// 117995                  js      short loc_360F8 ;~ 274D:0637
cs=0x274d;eip=0x000639; 	X(POP(ax));	// 117996                  pop     ax ;~ 274D:0639
cs=0x274d;eip=0x00063a; 	T(dl = al;);	// 117997                  mov     dl, al ;~ 274D:063A
cs=0x274d;eip=0x00063c; 	T(SUB(dh, dh));	// 117998                  sub     dh, dh ;~ 274D:063C
cs=0x274d;eip=0x00063e; 	T(cl = ah;);	// 117999                  mov     cl, ah ;~ 274D:063E
cs=0x274d;eip=0x000640; 	T(SUB(ch, ch));	// 118000                  sub     ch, ch ;~ 274D:0640
cs=0x274d;eip=0x000642; 	T(bx = cx;);	// 118001                  mov     bx, cx ;~ 274D:0642
cs=0x274d;eip=0x000644; 	T(SHL(bx, 1));	// 118002                  shl     bx, 1 ;~ 274D:0644
cs=0x274d;eip=0x000646; 	J(JMP(loc_360af));	// 118003                  jmp     short loc_360AF ;~ 274D:0646
loc_360f8:
	// 7046 
cs=0x274d;eip=0x000648; 	X(MOV(*(raddr(ds,di)), 0x0FF));	// 118007                  mov     byte ptr [di], 0FFh ;~ 274D:0648
cs=0x274d;eip=0x00064b; 	J(RETN(0));	// 118008                  retn ;~ 274D:064B
loc_360fc:
	// 7047 
cs=0x274d;eip=0x00064c; 	T(MOV(al, *(raddr(es,bx+si))));	// 118013                  mov     al, es:[bx+si] ;~ 274D:064C
cs=0x274d;eip=0x00064f; 	T(CMP(al, 0x0FF));	// 118014                  cmp     al, 0FFh ;~ 274D:064F
cs=0x274d;eip=0x000651; 	J(JZ(loc_36106));	// 118015                  jz      short loc_36106 ;~ 274D:0651
cs=0x274d;eip=0x000653; 	J(JMP(loc_36110));	// 118016                  jmp     short loc_36110 ;~ 274D:0653
loc_36106:
	// 7048 
cs=0x274d;eip=0x000656; 	J(JMP(loc_360af));	// 118023                  jmp     short loc_360AF ;~ 274D:0656
loc_36108:
	// 7049 
cs=0x274d;eip=0x000658; 	T(MOV(al, *(raddr(es,bx+si+1))));	// 118028                  mov     al, es:[bx+si+1] ;~ 274D:0658
cs=0x274d;eip=0x00065c; 	T(CMP(al, 0x0FF));	// 118029                  cmp     al, 0FFh ;~ 274D:065C
cs=0x274d;eip=0x00065e; 	J(JZ(loc_36106));	// 118030                  jz      short loc_36106 ;~ 274D:065E
loc_36110:
	// 7050 
cs=0x274d;eip=0x000660; 	T(SUB(ah, ah));	// 118033                  sub     ah, ah ;~ 274D:0660
cs=0x274d;eip=0x000662; 	T(XCHG(ax, cx));	// 118034                  xchg    ax, cx ;~ 274D:0662
cs=0x274d;eip=0x000663; 	T(ah = al;);	// 118035                  mov     ah, al ;~ 274D:0663
cs=0x274d;eip=0x000665; 	T(al = dl;);	// 118036                  mov     al, dl ;~ 274D:0665
cs=0x274d;eip=0x000667; 	X(PUSH(ax));	// 118037                  push    ax ;~ 274D:0667
cs=0x274d;eip=0x000668; 	T(INC(bp));	// 118038                  inc     bp ;~ 274D:0668
cs=0x274d;eip=0x000669; 	J(JMP(loc_3609a));	// 118039                  jmp     loc_3609A ;~ 274D:0669

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_3609a: 	goto loc_3609a;
        case m2c::kloc_360af: 	goto loc_360af;
        case m2c::kloc_360c6: 	goto loc_360c6;
        case m2c::kloc_360cc: 	goto loc_360cc;
        case m2c::kloc_360d5: 	goto loc_360d5;
        case m2c::kloc_360db: 	goto loc_360db;
        case m2c::kloc_360e4: 	goto loc_360e4;
        case m2c::kloc_360f8: 	goto loc_360f8;
        case m2c::kloc_360fc: 	goto loc_360fc;
        case m2c::kloc_36106: 	goto loc_36106;
        case m2c::kloc_36108: 	goto loc_36108;
        case m2c::kloc_36110: 	goto loc_36110;
        case m2c::ksub_3608c: 	goto sub_3608c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group71(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group71:
    _begin:
sub_3611c:
	// 118048 
#undef arg_0
#define arg_0 6
	// 118050 arg_0           = byte ptr  6 ;~ 274D:066C
cs=0x274d;eip=0x00066c; 	X(PUSH(bp));	// 118052                  push    bp ;~ 274D:066C
cs=0x274d;eip=0x00066d; 	T(bp = sp;);	// 118053                  mov     bp, sp ;~ 274D:066D
cs=0x274d;eip=0x00066f; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 118054                  mov     al, [bp+arg_0] ;~ 274D:066F
cs=0x274d;eip=0x000672; 	X(byte_4a3c6 = al;);	// 118055                  mov     byte_4A3C6, al ;~ 274D:0672
cs=0x274d;eip=0x000675; 	X(PUSH(si));	// 118056                  push    si ;~ 274D:0675
cs=0x274d;eip=0x000676; 	X(PUSH(di));	// 118057                  push    di ;~ 274D:0676
cs=0x274d;eip=0x000677; 	J(CALL(sub_3612e,0));	// 118058                  call    sub_3612E ;~ 274D:0677
seg35ab_67a_proc:
	// 118062 
cs=0x274d;eip=0x00067a; 	X(POP(di));	// 118062                  pop     di ;~ 274D:067A
cs=0x274d;eip=0x00067b; 	X(POP(si));	// 118063                  pop     si ;~ 274D:067B
cs=0x274d;eip=0x00067c; 	X(POP(bp));	// 118064                  pop     bp ;~ 274D:067C
cs=0x274d;eip=0x00067d; 	J(RETF(0));	// 118065                  retf ;~ 274D:067D

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg35ab_67a_proc: 	goto seg35ab_67a_proc;
        case m2c::ksub_3611c: 	goto sub_3611c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group72(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group72:
    _begin:
sub_3612e:
	// 118071 
cs=0x274d;eip=0x00067e; 	T(ax = word_4a4a2;);	// 118072                  mov     ax, word_4A4A2 ;~ 274D:067E
cs=0x274d;eip=0x000681; 	T(NEG(ax));	// 118073                  neg     ax ;~ 274D:0681
cs=0x274d;eip=0x000683; 	X(word_4a3c4 = ax;);	// 118074                  mov     word_4A3C4, ax ;~ 274D:0683
cs=0x274d;eip=0x000686; 	T(ax = word_4a49e;);	// 118075                  mov     ax, word_4A49E ;~ 274D:0686
cs=0x274d;eip=0x000689; 	T(CWD);	// 118076                  cwd ;~ 274D:0689
cs=0x274d;eip=0x00068a; 	T(dl = ah;);	// 118077                  mov     dl, ah ;~ 274D:068A
cs=0x274d;eip=0x00068c; 	T(ah = al;);	// 118078                  mov     ah, al ;~ 274D:068C
cs=0x274d;eip=0x00068e; 	T(SUB(al, al));	// 118079                  sub     al, al ;~ 274D:068E
cs=0x274d;eip=0x000690; 	T(cx = word_4a4a0;);	// 118080                  mov     cx, word_4A4A0 ;~ 274D:0690
cs=0x274d;eip=0x000694; 	T(CMP(cx, 0x1F0B));	// 118081                  cmp     cx, 1F0Bh ;~ 274D:0694
cs=0x274d;eip=0x000698; 	J(JG(loc_36150));	// 118082                  jg      short loc_36150 ;~ 274D:0698
cs=0x274d;eip=0x00069a; 	T(ax = 0x3FF;);	// 118083                  mov     ax, 3FFh ;~ 274D:069A
cs=0x274d;eip=0x00069d; 	J(JMP(loc_3616e));	// 118084                  jmp     short loc_3616E ;~ 274D:069D
loc_36150:
	// 7051 
cs=0x274d;eip=0x0006a0; 	T(IDIV2(cx));	// 118090                  idiv    cx ;~ 274D:06A0
cs=0x274d;eip=0x0006a2; 	T(CMP(*(db*)(&word_4f20c), 2));	// 118091                  cmp     byte ptr ds:word_4F20C, 2 ;~ 274D:06A2
cs=0x274d;eip=0x0006a7; 	J(JNZ(loc_3616e));	// 118092                  jnz     short loc_3616E ;~ 274D:06A7
cs=0x274d;eip=0x0006a9; 	T(dl = *(db*)(((db*)&word_4a498)+1););	// 118093                  mov     dl, byte ptr word_4A498+1 ;~ 274D:06A9
cs=0x274d;eip=0x0006ad; 	T(SUB(dh, dh));	// 118094                  sub     dh, dh ;~ 274D:06AD
cs=0x274d;eip=0x0006af; 	T(cx = dx;);	// 118095                  mov     cx, dx ;~ 274D:06AF
cs=0x274d;eip=0x0006b1; 	T(SHR(cx, 1));	// 118096                  shr     cx, 1 ;~ 274D:06B1
cs=0x274d;eip=0x0006b3; 	T(ADD(dx, cx));	// 118097                  add     dx, cx ;~ 274D:06B3
cs=0x274d;eip=0x0006b5; 	T(cl = 3;);	// 118098                  mov     cl, 3 ;~ 274D:06B5
cs=0x274d;eip=0x0006b7; 	T(SHR(dx, cl));	// 118099                  shr     dx, cl ;~ 274D:06B7
cs=0x274d;eip=0x0006b9; 	T(ADD(dx, 4));	// 118100                  add     dx, 4 ;~ 274D:06B9
cs=0x274d;eip=0x0006bc; 	T(SUB(ax, dx));	// 118101                  sub     ax, dx ;~ 274D:06BC
loc_3616e:
	// 7052 
cs=0x274d;eip=0x0006be; 	T(CMP(byte_4e73e, 0));	// 118105                  cmp     ds:byte_4E73E, 0 ;~ 274D:06BE
cs=0x274d;eip=0x0006c3; 	J(JZ(loc_3617b));	// 118106                  jz      short loc_3617B ;~ 274D:06C3
cs=0x274d;eip=0x0006c5; 	T(cl = byte_4e73e;);	// 118107                  mov     cl, ds:byte_4E73E ;~ 274D:06C5
cs=0x274d;eip=0x0006c9; 	T(SHL(ax, cl));	// 118108                  shl     ax, cl ;~ 274D:06C9
loc_3617b:
	// 7053 
cs=0x274d;eip=0x0006cb; 	T(CMP(byte_4de54, 0));	// 118111                  cmp     ds:byte_4DE54, 0 ;~ 274D:06CB
cs=0x274d;eip=0x0006d0; 	J(JZ(loc_36184));	// 118112                  jz      short loc_36184 ;~ 274D:06D0
cs=0x274d;eip=0x0006d2; 	T(SAR(ax, 1));	// 118113                  sar     ax, 1 ;~ 274D:06D2
loc_36184:
	// 7054 
cs=0x274d;eip=0x0006d4; 	T(bp = ax;);	// 118116                  mov     bp, ax ;~ 274D:06D4
cs=0x274d;eip=0x0006d6; 	X(IMUL1_2(word_4a3c4));	// 118117                  imul    word_4A3C4 ;~ 274D:06D6
cs=0x274d;eip=0x0006da; 	T(SHL(ax, 1));	// 118118                  shl     ax, 1 ;~ 274D:06DA
cs=0x274d;eip=0x0006dc; 	T(RCL(dx, 1));	// 118119                  rcl     dx, 1 ;~ 274D:06DC
cs=0x274d;eip=0x0006de; 	T(bx = ax;);	// 118120                  mov     bx, ax ;~ 274D:06DE
cs=0x274d;eip=0x0006e0; 	T(cx = dx;);	// 118121                  mov     cx, dx ;~ 274D:06E0
cs=0x274d;eip=0x0006e2; 	T(ax = word_48bbc;);	// 118122                  mov     ax, word_48BBC ;~ 274D:06E2
cs=0x274d;eip=0x0006e5; 	T(SHL(ax, 1));	// 118123                  shl     ax, 1 ;~ 274D:06E5
cs=0x274d;eip=0x0006e7; 	X(IMUL1_2(word_4a4a4));	// 118124                  imul    word_4A4A4 ;~ 274D:06E7
cs=0x274d;eip=0x0006eb; 	T(SHL(ax, 1));	// 118125                  shl     ax, 1 ;~ 274D:06EB
cs=0x274d;eip=0x0006ed; 	T(RCL(dx, 1));	// 118126                  rcl     dx, 1 ;~ 274D:06ED
cs=0x274d;eip=0x0006ef; 	T(si = ax;);	// 118127                  mov     si, ax ;~ 274D:06EF
cs=0x274d;eip=0x0006f1; 	T(di = dx;);	// 118128                  mov     di, dx ;~ 274D:06F1
cs=0x274d;eip=0x0006f3; 	T(SUB(ax, bx));	// 118129                  sub     ax, bx ;~ 274D:06F3
cs=0x274d;eip=0x0006f5; 	T(SBB(dx, cx));	// 118130                  sbb     dx, cx ;~ 274D:06F5
cs=0x274d;eip=0x0006f7; 	T(SHL(ax, 1));	// 118131                  shl     ax, 1 ;~ 274D:06F7
cs=0x274d;eip=0x0006f9; 	T(ADC(dx, word_48bbc));	// 118132                  adc     dx, word_48BBC ;~ 274D:06F9
cs=0x274d;eip=0x0006fd; 	X(word_4d78d = dx;);	// 118133                  mov     ds:word_4D78D, dx ;~ 274D:06FD
cs=0x274d;eip=0x000701; 	T(ADD(bx, si));	// 118134                  add     bx, si ;~ 274D:0701
cs=0x274d;eip=0x000703; 	T(ADC(cx, di));	// 118135                  adc     cx, di ;~ 274D:0703
cs=0x274d;eip=0x000705; 	T(SHL(bx, 1));	// 118136                  shl     bx, 1 ;~ 274D:0705
cs=0x274d;eip=0x000707; 	T(ADC(cx, 0));	// 118137                  adc     cx, 0 ;~ 274D:0707
cs=0x274d;eip=0x00070a; 	T(dx = word_48bbc;);	// 118138                  mov     dx, word_48BBC ;~ 274D:070A
cs=0x274d;eip=0x00070e; 	T(SUB(dx, cx));	// 118139                  sub     dx, cx ;~ 274D:070E
cs=0x274d;eip=0x000710; 	X(word_4d78f = dx;);	// 118140                  mov     ds:word_4D78F, dx ;~ 274D:0710
cs=0x274d;eip=0x000714; 	T(ax = bp;);	// 118141                  mov     ax, bp ;~ 274D:0714
cs=0x274d;eip=0x000716; 	X(IMUL1_2(word_4a4a4));	// 118142                  imul    word_4A4A4 ;~ 274D:0716
cs=0x274d;eip=0x00071a; 	T(SHL(ax, 1));	// 118143                  shl     ax, 1 ;~ 274D:071A
cs=0x274d;eip=0x00071c; 	T(RCL(dx, 1));	// 118144                  rcl     dx, 1 ;~ 274D:071C
cs=0x274d;eip=0x00071e; 	T(si = ax;);	// 118145                  mov     si, ax ;~ 274D:071E
cs=0x274d;eip=0x000720; 	T(di = dx;);	// 118146                  mov     di, dx ;~ 274D:0720
cs=0x274d;eip=0x000722; 	T(ax = word_48bbc;);	// 118147                  mov     ax, word_48BBC ;~ 274D:0722
cs=0x274d;eip=0x000725; 	T(SHL(ax, 1));	// 118148                  shl     ax, 1 ;~ 274D:0725
cs=0x274d;eip=0x000727; 	X(IMUL1_2(word_4a3c4));	// 118149                  imul    word_4A3C4 ;~ 274D:0727
cs=0x274d;eip=0x00072b; 	T(SHL(ax, 1));	// 118150                  shl     ax, 1 ;~ 274D:072B
cs=0x274d;eip=0x00072d; 	T(RCL(dx, 1));	// 118151                  rcl     dx, 1 ;~ 274D:072D
cs=0x274d;eip=0x00072f; 	T(bx = ax;);	// 118152                  mov     bx, ax ;~ 274D:072F
cs=0x274d;eip=0x000731; 	T(cx = dx;);	// 118153                  mov     cx, dx ;~ 274D:0731
cs=0x274d;eip=0x000733; 	T(SUB(ax, si));	// 118154                  sub     ax, si ;~ 274D:0733
cs=0x274d;eip=0x000735; 	T(SBB(dx, di));	// 118155                  sbb     dx, di ;~ 274D:0735
cs=0x274d;eip=0x000737; 	T(SHL(ax, 1));	// 118156                  shl     ax, 1 ;~ 274D:0737
cs=0x274d;eip=0x000739; 	T(ADC(dx, 0));	// 118157                  adc     dx, 0 ;~ 274D:0739
cs=0x274d;eip=0x00073c; 	T(ax = dx;);	// 118158                  mov     ax, dx ;~ 274D:073C
cs=0x274d;eip=0x00073e; 	T(SAR(ax, 1));	// 118159                  sar     ax, 1 ;~ 274D:073E
cs=0x274d;eip=0x000740; 	T(SAR(ax, 1));	// 118160                  sar     ax, 1 ;~ 274D:0740
cs=0x274d;eip=0x000742; 	T(SUB(dx, ax));	// 118161                  sub     dx, ax ;~ 274D:0742
cs=0x274d;eip=0x000744; 	T(ADD(dx, *(word_48bbe)));	// 118162                  add     dx, word_48BBE ;~ 274D:0744
cs=0x274d;eip=0x000748; 	X(word_4d793 = dx;);	// 118163                  mov     ds:word_4D793, dx ;~ 274D:0748
cs=0x274d;eip=0x00074c; 	T(ADD(si, bx));	// 118164                  add     si, bx ;~ 274D:074C
cs=0x274d;eip=0x00074e; 	T(ADC(di, cx));	// 118165                  adc     di, cx ;~ 274D:074E
cs=0x274d;eip=0x000750; 	T(SHL(si, 1));	// 118166                  shl     si, 1 ;~ 274D:0750
cs=0x274d;eip=0x000752; 	T(ADC(di, 0));	// 118167                  adc     di, 0 ;~ 274D:0752
cs=0x274d;eip=0x000755; 	T(si = di;);	// 118168                  mov     si, di ;~ 274D:0755
cs=0x274d;eip=0x000757; 	T(SAR(si, 1));	// 118169                  sar     si, 1 ;~ 274D:0757
cs=0x274d;eip=0x000759; 	T(SAR(si, 1));	// 118170                  sar     si, 1 ;~ 274D:0759
cs=0x274d;eip=0x00075b; 	T(SUB(di, si));	// 118171                  sub     di, si ;~ 274D:075B
cs=0x274d;eip=0x00075d; 	T(dx = *(word_48bbe););	// 118172                  mov     dx, word_48BBE ;~ 274D:075D
cs=0x274d;eip=0x000761; 	T(SUB(dx, di));	// 118173                  sub     dx, di ;~ 274D:0761
cs=0x274d;eip=0x000763; 	X(word_4d791 = dx;);	// 118174                  mov     ds:word_4D791, dx ;~ 274D:0763
cs=0x274d;eip=0x000767; 	X(word_4a3c8 = 0;);	// 118175                  mov     word_4A3C8, 0 ;~ 274D:0767
cs=0x274d;eip=0x00076d; 	T(ah = byte_4a3c6;);	// 118176                  mov     ah, byte_4A3C6 ;~ 274D:076D
cs=0x274d;eip=0x000771; 	J(CALLF(sub_49a3e,0));	// 118177                  call    far ptr sub_49A3E ;~ 274D:0771
seg35ab_776_proc:
	// 118181 
cs=0x274d;eip=0x000776; 	J(CALL(sub_37950,0));	// 118181                  call    sub_37950 ;~ 274D:0776
cs=0x274d;eip=0x000779; 	J(CALL(sub_37766,0));	// 118182                  call    sub_37766 ;~ 274D:0779
cs=0x274d;eip=0x00077c; 	J(JNC(loc_36272));	// 118183                  jnb     short loc_36272 ;~ 274D:077C
loc_3622e:
	// 7055 
cs=0x274d;eip=0x00077e; 	T(CMP(word_4a49e, 0));	// 118187                  cmp     word_4A49E, 0 ;~ 274D:077E
cs=0x274d;eip=0x000783; 	J(JS(loc_36248));	// 118188                  js      short loc_36248 ;~ 274D:0783
cs=0x274d;eip=0x000785; 	T(ah = byte_4a3c7;);	// 118189                  mov     ah, byte_4A3C7 ;~ 274D:0785
cs=0x274d;eip=0x000789; 	J(CALLF(sub_49a3e,0));	// 118190                  call    far ptr sub_49A3E ;~ 274D:0789
cs=0x274d;eip=0x00078e; 	T(CMP(*(db*)(&word_4f20c), 2));	// 118192                  cmp     byte ptr ds:word_4F20C, 2 ;~ 274D:078E
cs=0x274d;eip=0x000793; 	J(JNZ(loc_36248));	// 118193                  jnz     short loc_36248 ;~ 274D:0793
cs=0x274d;eip=0x000795; 	J(JMP(loc_3632e));	// 118194                  jmp     loc_3632E ;~ 274D:0795
loc_36248:
	// 7056 
cs=0x274d;eip=0x000798; 	T(SUB(si, si));	// 118199                  sub     si, si ;~ 274D:0798
cs=0x274d;eip=0x00079a; 	T(di = si;);	// 118200                  mov     di, si ;~ 274D:079A
cs=0x274d;eip=0x00079c; 	T(dx = word_4d789;);	// 118201                  mov     dx, ds:word_4D789 ;~ 274D:079C
cs=0x274d;eip=0x0007a0; 	J(CALL(sub_37986,0));	// 118202                  call    sub_37986 ;~ 274D:07A0
cs=0x274d;eip=0x0007a3; 	T(si = word_4d787;);	// 118203                  mov     si, ds:word_4D787 ;~ 274D:07A3
cs=0x274d;eip=0x0007a7; 	T(SUB(di, di));	// 118204                  sub     di, di ;~ 274D:07A7
cs=0x274d;eip=0x0007a9; 	T(dx = word_4d789;);	// 118205                  mov     dx, ds:word_4D789 ;~ 274D:07A9
cs=0x274d;eip=0x0007ad; 	J(CALL(sub_37986,0));	// 118206                  call    sub_37986 ;~ 274D:07AD
cs=0x274d;eip=0x0007b0; 	T(ax = word_4db09;);	// 118207                  mov     ax, ds:word_4DB09 ;~ 274D:07B0
cs=0x274d;eip=0x0007b3; 	T(cx = word_4db0b;);	// 118208                  mov     cx, ds:word_4DB0B ;~ 274D:07B3
cs=0x274d;eip=0x0007b7; 	T(bx = 0x4CB5;);	// 118209                  mov     bx, 4CB5h ;~ 274D:07B7
cs=0x274d;eip=0x0007ba; 	J(CALLF(sub_49a57,0));	// 118210                  call    far ptr sub_49A57 ;~ 274D:07BA
cs=0x274d;eip=0x0007bf; 	J(JMP(loc_3632e));	// 118212                  jmp     loc_3632E ;~ 274D:07BF
loc_36272:
	// 7057 
cs=0x274d;eip=0x0007c2; 	T(ax = word_4d791;);	// 118216                  mov     ax, ds:word_4D791 ;~ 274D:07C2
cs=0x274d;eip=0x0007c5; 	T(CMP(ax, word_4d793));	// 118217                  cmp     ax, ds:word_4D793 ;~ 274D:07C5
cs=0x274d;eip=0x0007c9; 	J(JNZ(loc_36285));	// 118218                  jnz     short loc_36285 ;~ 274D:07C9
cs=0x274d;eip=0x0007cb; 	T(OR(ax, ax));	// 118219                  or      ax, ax ;~ 274D:07CB
cs=0x274d;eip=0x0007cd; 	J(JZ(loc_3622e));	// 118220                  jz      short loc_3622E ;~ 274D:07CD
cs=0x274d;eip=0x0007cf; 	T(CMP(ax, word_4d789));	// 118221                  cmp     ax, ds:word_4D789 ;~ 274D:07CF
cs=0x274d;eip=0x0007d3; 	J(JZ(loc_3622e));	// 118222                  jz      short loc_3622E ;~ 274D:07D3
loc_36285:
	// 7058 
cs=0x274d;eip=0x0007d5; 	X(PUSH(word_4d78d));	// 118226                  push    ds:word_4D78D ;~ 274D:07D5
cs=0x274d;eip=0x0007d9; 	X(PUSH(word_4d791));	// 118227                  push    ds:word_4D791 ;~ 274D:07D9
cs=0x274d;eip=0x0007dd; 	X(PUSH(word_4d78f));	// 118228                  push    ds:word_4D78F ;~ 274D:07DD
cs=0x274d;eip=0x0007e1; 	X(PUSH(word_4d793));	// 118229                  push    ds:word_4D793 ;~ 274D:07E1
cs=0x274d;eip=0x0007e5; 	J(CALL(sub_37ad8,0));	// 118230                  call    sub_37AD8 ;~ 274D:07E5
cs=0x274d;eip=0x0007e8; 	X(POP(word_4d793));	// 118231                  pop     ds:word_4D793 ;~ 274D:07E8
cs=0x274d;eip=0x0007ec; 	X(POP(word_4d78f));	// 118232                  pop     ds:word_4D78F ;~ 274D:07EC
cs=0x274d;eip=0x0007f0; 	X(POP(word_4d791));	// 118233                  pop     ds:word_4D791 ;~ 274D:07F0
cs=0x274d;eip=0x0007f4; 	X(POP(word_4d78d));	// 118234                  pop     ds:word_4D78D ;~ 274D:07F4
cs=0x274d;eip=0x0007f8; 	T(SUB(ax, ax));	// 118235                  sub     ax, ax ;~ 274D:07F8
cs=0x274d;eip=0x0007fa; 	T(si = word_4a3c8;);	// 118236                  mov     si, word_4A3C8 ;~ 274D:07FA
cs=0x274d;eip=0x0007fe; 	T(XOR(si, word_4a3c4));	// 118237                  xor     si, word_4A3C4 ;~ 274D:07FE
cs=0x274d;eip=0x000802; 	J(JNS(loc_362b7));	// 118238                  jns     short loc_362B7 ;~ 274D:0802
cs=0x274d;eip=0x000804; 	T(ax = word_4d787;);	// 118239                  mov     ax, ds:word_4D787 ;~ 274D:0804
loc_362b7:
	// 7059 
cs=0x274d;eip=0x000807; 	X(word_4a3c2 = ax;);	// 118242                  mov     word_4A3C2, ax ;~ 274D:0807
cs=0x274d;eip=0x00080a; 	T(SUB(bx, bx));	// 118243                  sub     bx, bx ;~ 274D:080A
cs=0x274d;eip=0x00080c; 	T(bp = word_4d789;);	// 118244                  mov     bp, ds:word_4D789 ;~ 274D:080C
cs=0x274d;eip=0x000810; 	T(si = word_4a3c8;);	// 118245                  mov     si, word_4A3C8 ;~ 274D:0810
cs=0x274d;eip=0x000814; 	T(XOR(si, word_4a4a4));	// 118246                  xor     si, word_4A4A4 ;~ 274D:0814
cs=0x274d;eip=0x000818; 	J(JNS(loc_362cc));	// 118247                  jns     short loc_362CC ;~ 274D:0818
cs=0x274d;eip=0x00081a; 	T(XCHG(bx, bp));	// 118248                  xchg    bx, bp ;~ 274D:081A
loc_362cc:
	// 7060 
cs=0x274d;eip=0x00081c; 	T(si = word_4d78d;);	// 118251                  mov     si, ds:word_4D78D ;~ 274D:081C
cs=0x274d;eip=0x000820; 	T(di = word_4d791;);	// 118252                  mov     di, ds:word_4D791 ;~ 274D:0820
cs=0x274d;eip=0x000824; 	T(CMP(di, bx));	// 118253                  cmp     di, bx ;~ 274D:0824
cs=0x274d;eip=0x000826; 	J(JZ(loc_362e7));	// 118254                  jz      short loc_362E7 ;~ 274D:0826
cs=0x274d;eip=0x000828; 	T(CMP(di, bp));	// 118255                  cmp     di, bp ;~ 274D:0828
cs=0x274d;eip=0x00082a; 	J(JNZ(loc_362e2));	// 118256                  jnz     short loc_362E2 ;~ 274D:082A
cs=0x274d;eip=0x00082c; 	T(di = bp;);	// 118257                  mov     di, bp ;~ 274D:082C
cs=0x274d;eip=0x00082e; 	T(si = word_4a3c2;);	// 118258                  mov     si, word_4A3C2 ;~ 274D:082E
loc_362e2:
	// 7061 
cs=0x274d;eip=0x000832; 	T(dx = bx;);	// 118261                  mov     dx, bx ;~ 274D:0832
cs=0x274d;eip=0x000834; 	J(CALL(sub_37986,0));	// 118262                  call    sub_37986 ;~ 274D:0834
loc_362e7:
	// 7062 
cs=0x274d;eip=0x000837; 	T(si = word_4d78f;);	// 118265                  mov     si, ds:word_4D78F ;~ 274D:0837
cs=0x274d;eip=0x00083b; 	T(di = word_4d793;);	// 118266                  mov     di, ds:word_4D793 ;~ 274D:083B
cs=0x274d;eip=0x00083f; 	T(CMP(di, bx));	// 118267                  cmp     di, bx ;~ 274D:083F
cs=0x274d;eip=0x000841; 	J(JZ(loc_36302));	// 118268                  jz      short loc_36302 ;~ 274D:0841
cs=0x274d;eip=0x000843; 	T(CMP(di, bp));	// 118269                  cmp     di, bp ;~ 274D:0843
cs=0x274d;eip=0x000845; 	J(JNZ(loc_362fd));	// 118270                  jnz     short loc_362FD ;~ 274D:0845
cs=0x274d;eip=0x000847; 	T(di = bp;);	// 118271                  mov     di, bp ;~ 274D:0847
cs=0x274d;eip=0x000849; 	T(si = word_4a3c2;);	// 118272                  mov     si, word_4A3C2 ;~ 274D:0849
loc_362fd:
	// 7063 
cs=0x274d;eip=0x00084d; 	T(dx = bx;);	// 118275                  mov     dx, bx ;~ 274D:084D
cs=0x274d;eip=0x00084f; 	J(CALL(sub_37986,0));	// 118276                  call    sub_37986 ;~ 274D:084F
loc_36302:
	// 7064 
cs=0x274d;eip=0x000852; 	T(ax = word_4db09;);	// 118279                  mov     ax, ds:word_4DB09 ;~ 274D:0852
cs=0x274d;eip=0x000855; 	T(cx = word_4db0b;);	// 118280                  mov     cx, ds:word_4DB0B ;~ 274D:0855
cs=0x274d;eip=0x000859; 	T(bx = 0x4CB5;);	// 118281                  mov     bx, 4CB5h ;~ 274D:0859
cs=0x274d;eip=0x00085c; 	J(CALLF(sub_49a57,0));	// 118282                  call    far ptr sub_49A57 ;~ 274D:085C
cs=0x274d;eip=0x000861; 	T(CMP(*(db*)(&word_4f20c), 2));	// 118284                  cmp     byte ptr ds:word_4F20C, 2 ;~ 274D:0861
cs=0x274d;eip=0x000866; 	J(JZ(loc_3632e));	// 118285                  jz      short loc_3632E ;~ 274D:0866
cs=0x274d;eip=0x000868; 	X(XOR(word_4a3c8, 0x0FFFF));	// 118286                  xor     word_4A3C8, 0FFFFh ;~ 274D:0868
cs=0x274d;eip=0x00086d; 	J(JZ(loc_3632e));	// 118287                  jz      short loc_3632E ;~ 274D:086D
cs=0x274d;eip=0x00086f; 	T(ah = byte_4a3c7;);	// 118288                  mov     ah, byte_4A3C7 ;~ 274D:086F
cs=0x274d;eip=0x000873; 	J(CALLF(sub_49a3e,0));	// 118289                  call    far ptr sub_49A3E ;~ 274D:0873
cs=0x274d;eip=0x000878; 	J(CALL(sub_37950,0));	// 118291                  call    sub_37950 ;~ 274D:0878
cs=0x274d;eip=0x00087b; 	J(JMP(loc_36285));	// 118292                  jmp     loc_36285 ;~ 274D:087B
loc_3632e:
	// 7065 
cs=0x274d;eip=0x00087e; 	J(CALLF(sub_49a48,0));	// 118297                  call    far ptr sub_49A48 ;~ 274D:087E
cs=0x274d;eip=0x000883; 	J(RETN(0));	// 118299                  retn ;~ 274D:0883

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_36150: 	goto loc_36150;
        case m2c::kloc_3616e: 	goto loc_3616e;
        case m2c::kloc_3617b: 	goto loc_3617b;
        case m2c::kloc_36184: 	goto loc_36184;
        case m2c::kloc_3622e: 	goto loc_3622e;
        case m2c::kloc_36248: 	goto loc_36248;
        case m2c::kloc_36272: 	goto loc_36272;
        case m2c::kloc_36285: 	goto loc_36285;
        case m2c::kloc_362b7: 	goto loc_362b7;
        case m2c::kloc_362cc: 	goto loc_362cc;
        case m2c::kloc_362e2: 	goto loc_362e2;
        case m2c::kloc_362e7: 	goto loc_362e7;
        case m2c::kloc_362fd: 	goto loc_362fd;
        case m2c::kloc_36302: 	goto loc_36302;
        case m2c::kloc_3632e: 	goto loc_3632e;
        case m2c::kseg35ab_776_proc: 	goto seg35ab_776_proc;
        case m2c::ksub_3612e: 	goto sub_3612e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36334(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36334:
    _begin:
#undef arg_0
#define arg_0 6
	// 118308 arg_0           = dword ptr  6 ;~ 274D:0884
#undef arg_4
#define arg_4 0x0A
	// 118309 arg_4           = word ptr  0Ah ;~ 274D:0884
#undef arg_6
#define arg_6 0x0C
	// 118310 arg_6           = word ptr  0Ch ;~ 274D:0884
#undef arg_8
#define arg_8 0x0E
	// 118311 arg_8           = word ptr  0Eh ;~ 274D:0884
#undef arg_a
#define arg_a 0x10
	// 118312 arg_A           = word ptr  10h ;~ 274D:0884
#undef arg_c
#define arg_c 0x12
	// 118313 arg_C           = word ptr  12h ;~ 274D:0884
#undef arg_e
#define arg_e 0x14
	// 118314 arg_E           = word ptr  14h ;~ 274D:0884
cs=0x274d;eip=0x000884; 	X(PUSH(bp));	// 118316                  push    bp ;~ 274D:0884
cs=0x274d;eip=0x000885; 	T(bp = sp;);	// 118317                  mov     bp, sp ;~ 274D:0885
cs=0x274d;eip=0x000887; 	X(PUSH(si));	// 118318                  push    si ;~ 274D:0887
cs=0x274d;eip=0x000888; 	X(PUSH(di));	// 118319                  push    di ;~ 274D:0888
cs=0x274d;eip=0x000889; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 118320                  mov     ax, [bp+arg_4] ;~ 274D:0889
cs=0x274d;eip=0x00088c; 	X(word_4a476 = ax;);	// 118321                  mov     word_4A476, ax ;~ 274D:088C
cs=0x274d;eip=0x00088f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 118322                  mov     ax, [bp+arg_6] ;~ 274D:088F
cs=0x274d;eip=0x000892; 	X(word_4a478 = ax;);	// 118323                  mov     word_4A478, ax ;~ 274D:0892
cs=0x274d;eip=0x000895; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 118324                  mov     ax, [bp+arg_8] ;~ 274D:0895
cs=0x274d;eip=0x000898; 	X(word_4a47a = ax;);	// 118325                  mov     word_4A47A, ax ;~ 274D:0898
cs=0x274d;eip=0x00089b; 	T(LES(si, *(dd*)(raddr(ss,bp+arg_0))));	// 118326                  les     si, [bp+arg_0] ;~ 274D:089B
cs=0x274d;eip=0x00089e; 	X(*(dw*)(&dword_4a46c) = si;);	// 118328                  mov     word ptr dword_4A46C, si ;~ 274D:089E
cs=0x274d;eip=0x0008a2; 	X(*(dw*)(((db*)&dword_4a46c)+2) = es;);	// 118329                  mov     word ptr dword_4A46C+2, es ;~ 274D:08A2
cs=0x274d;eip=0x0008a6; 	X(LODS(*(raddr(es,si)),si,1));	// 118330                  lods    byte ptr es:[si] ;~ 274D:08A6
cs=0x274d;eip=0x0008a8; 	X(*(db*)(&word_4a492) = al;);	// 118331                  mov     byte ptr word_4A492, al ;~ 274D:08A8
cs=0x274d;eip=0x0008ab; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_c))));	// 118332                  mov     bx, [bp+arg_C] ;~ 274D:08AB
cs=0x274d;eip=0x0008ae; 	T(SUB(bx, word_4a496));	// 118333                  sub     bx, word_4A496 ;~ 274D:08AE
cs=0x274d;eip=0x0008b2; 	X(word_4a472 = bx;);	// 118334                  mov     word_4A472, bx ;~ 274D:08B2
cs=0x274d;eip=0x0008b6; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_e))));	// 118335                  mov     cx, [bp+arg_E] ;~ 274D:08B6
cs=0x274d;eip=0x0008b9; 	T(SUB(cx, word_4a498));	// 118336                  sub     cx, word_4A498 ;~ 274D:08B9
cs=0x274d;eip=0x0008bd; 	X(word_4a474 = cx;);	// 118337                  mov     word_4A474, cx ;~ 274D:08BD
cs=0x274d;eip=0x0008c1; 	T(MOV(bp, *(dw*)(raddr(ss,bp+arg_a))));	// 118338                  mov     bp, [bp+arg_A] ;~ 274D:08C1
cs=0x274d;eip=0x0008c4; 	T(SUB(bp, word_4a494));	// 118339                  sub     bp, word_4A494 ;~ 274D:08C4
cs=0x274d;eip=0x0008c8; 	X(word_4a470 = bp;);	// 118340                  mov     word_4A470, bp ;~ 274D:08C8
cs=0x274d;eip=0x0008cc; 	J(CALL(sub_363b8,0));	// 118341                  call    sub_363B8 ;~ 274D:08CC
cs=0x274d;eip=0x0008cf; 	J(JNZ(loc_363b4));	// 118342                  jnz     short loc_363B4 ;~ 274D:08CF
cs=0x274d;eip=0x0008d1; 	J(CALL(sub_364b9,0));	// 118343                  call    sub_364B9 ;~ 274D:08D1
cs=0x274d;eip=0x0008d4; 	T(CMP(si, 1));	// 118344                  cmp     si, 1 ;~ 274D:08D4
cs=0x274d;eip=0x0008d7; 	J(JNZ(loc_36390));	// 118345                  jnz     short loc_36390 ;~ 274D:08D7
cs=0x274d;eip=0x0008d9; 	T(CMP(word_4f20c, 2));	// 118346                  cmp     ds:word_4F20C, 2 ;~ 274D:08D9
cs=0x274d;eip=0x0008de; 	J(JNZ(loc_363b4));	// 118347                  jnz     short loc_363B4 ;~ 274D:08DE
loc_36390:
	// 7066 
cs=0x274d;eip=0x0008e0; 	T(cl = al;);	// 118350                  mov     cl, al ;~ 274D:08E0
cs=0x274d;eip=0x0008e2; 	T(AND(al, 0x60));	// 118351                  and     al, 60h ;~ 274D:08E2
cs=0x274d;eip=0x0008e4; 	T(CMP(al, 0x60));	// 118352                  cmp     al, 60h ; '`' ;~ 274D:08E4
cs=0x274d;eip=0x0008e6; 	J(JNZ(loc_3639b));	// 118353                  jnz     short loc_3639B ;~ 274D:08E6
cs=0x274d;eip=0x0008e8; 	J(CALL(sub_364e6,0));	// 118354                  call    sub_364E6 ;~ 274D:08E8
loc_3639b:
	// 7067 
cs=0x274d;eip=0x0008eb; 	T(TEST(cl, 0x40));	// 118357                  test    cl, 40h ;~ 274D:08EB
cs=0x274d;eip=0x0008ee; 	J(JNZ(loc_363ab));	// 118358                  jnz     short loc_363AB ;~ 274D:08EE
cs=0x274d;eip=0x0008f0; 	T(ax = word_4a498;);	// 118359                  mov     ax, word_4A498 ;~ 274D:08F0
cs=0x274d;eip=0x0008f3; 	T(NEG(ax));	// 118360                  neg     ax ;~ 274D:08F3
cs=0x274d;eip=0x0008f5; 	T(CMP(ax, word_4a474));	// 118361                  cmp     ax, word_4A474 ;~ 274D:08F5
cs=0x274d;eip=0x0008f9; 	J(JZ(loc_363b1));	// 118362                  jz      short loc_363B1 ;~ 274D:08F9
loc_363ab:
	// 7068 
cs=0x274d;eip=0x0008fb; 	J(CALL(sub_36530,0));	// 118365                  call    sub_36530 ;~ 274D:08FB
cs=0x274d;eip=0x0008fe; 	J(JMP(loc_363b4));	// 118367                  jmp     short loc_363B4 ;~ 274D:08FE
loc_363b1:
	// 7069 
cs=0x274d;eip=0x000901; 	J(CALL(sub_36697,0));	// 118374                  call    sub_36697 ;~ 274D:0901
loc_363b4:
	// 7070 
cs=0x274d;eip=0x000904; 	X(POP(di));	// 118378                  pop     di ;~ 274D:0904
cs=0x274d;eip=0x000905; 	X(POP(si));	// 118379                  pop     si ;~ 274D:0905
cs=0x274d;eip=0x000906; 	X(POP(bp));	// 118380                  pop     bp ;~ 274D:0906
cs=0x274d;eip=0x000907; 	J(RETF(0));	// 118381                  retf ;~ 274D:0907

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_36390: 	goto loc_36390;
        case m2c::kloc_3639b: 	goto loc_3639b;
        case m2c::kloc_363ab: 	goto loc_363ab;
        case m2c::kloc_363b1: 	goto loc_363b1;
        case m2c::kloc_363b4: 	goto loc_363b4;
        case m2c::ksub_36334: 	goto sub_36334;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_363b8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_363b8:
    _begin:
cs=0x274d;eip=0x000908; 	X(PUSH(si));	// 118390                  push    si ;~ 274D:0908
cs=0x274d;eip=0x000909; 	T(ax = word_4a4b2;);	// 118391                  mov     ax, word_4A4B2 ;~ 274D:0909
cs=0x274d;eip=0x00090c; 	T(IMUL1_2(bx));	// 118392                  imul    bx ;~ 274D:090C
cs=0x274d;eip=0x00090e; 	T(di = dx;);	// 118393                  mov     di, dx ;~ 274D:090E
cs=0x274d;eip=0x000910; 	T(si = ax;);	// 118394                  mov     si, ax ;~ 274D:0910
cs=0x274d;eip=0x000912; 	T(ax = word_4a4ac;);	// 118395                  mov     ax, word_4A4AC ;~ 274D:0912
cs=0x274d;eip=0x000915; 	T(IMUL1_2(cx));	// 118396                  imul    cx ;~ 274D:0915
cs=0x274d;eip=0x000917; 	T(ADD(si, ax));	// 118397                  add     si, ax ;~ 274D:0917
cs=0x274d;eip=0x000919; 	T(ADC(di, dx));	// 118398                  adc     di, dx ;~ 274D:0919
cs=0x274d;eip=0x00091b; 	T(ax = word_4a4a6;);	// 118399                  mov     ax, word_4A4A6 ;~ 274D:091B
cs=0x274d;eip=0x00091e; 	T(IMUL1_2(bp));	// 118400                  imul    bp ;~ 274D:091E
cs=0x274d;eip=0x000920; 	T(ADD(si, ax));	// 118401                  add     si, ax ;~ 274D:0920
cs=0x274d;eip=0x000922; 	T(ADC(di, dx));	// 118402                  adc     di, dx ;~ 274D:0922
cs=0x274d;eip=0x000924; 	T(SHL(si, 1));	// 118403                  shl     si, 1 ;~ 274D:0924
cs=0x274d;eip=0x000926; 	T(RCL(di, 1));	// 118404                  rcl     di, 1 ;~ 274D:0926
cs=0x274d;eip=0x000928; 	X(word_4a47c = si;);	// 118405                  mov     word_4A47C, si ;~ 274D:0928
cs=0x274d;eip=0x00092c; 	X(word_4a47e = di;);	// 118406                  mov     word_4A47E, di ;~ 274D:092C
cs=0x274d;eip=0x000930; 	T(ax = word_4a4b4;);	// 118407                  mov     ax, word_4A4B4 ;~ 274D:0930
cs=0x274d;eip=0x000933; 	T(IMUL1_2(bx));	// 118408                  imul    bx ;~ 274D:0933
cs=0x274d;eip=0x000935; 	T(di = dx;);	// 118409                  mov     di, dx ;~ 274D:0935
cs=0x274d;eip=0x000937; 	T(si = ax;);	// 118410                  mov     si, ax ;~ 274D:0937
cs=0x274d;eip=0x000939; 	T(ax = word_4a4ae;);	// 118411                  mov     ax, word_4A4AE ;~ 274D:0939
cs=0x274d;eip=0x00093c; 	T(IMUL1_2(cx));	// 118412                  imul    cx ;~ 274D:093C
cs=0x274d;eip=0x00093e; 	T(ADD(si, ax));	// 118413                  add     si, ax ;~ 274D:093E
cs=0x274d;eip=0x000940; 	T(ADC(di, dx));	// 118414                  adc     di, dx ;~ 274D:0940
cs=0x274d;eip=0x000942; 	T(ax = word_4a4a8;);	// 118415                  mov     ax, word_4A4A8 ;~ 274D:0942
cs=0x274d;eip=0x000945; 	T(IMUL1_2(bp));	// 118416                  imul    bp ;~ 274D:0945
cs=0x274d;eip=0x000947; 	T(ADD(si, ax));	// 118417                  add     si, ax ;~ 274D:0947
cs=0x274d;eip=0x000949; 	T(ADC(di, dx));	// 118418                  adc     di, dx ;~ 274D:0949
cs=0x274d;eip=0x00094b; 	T(SHL(si, 1));	// 118419                  shl     si, 1 ;~ 274D:094B
cs=0x274d;eip=0x00094d; 	T(RCL(di, 1));	// 118420                  rcl     di, 1 ;~ 274D:094D
cs=0x274d;eip=0x00094f; 	X(word_4a480 = si;);	// 118421                  mov     word_4A480, si ;~ 274D:094F
cs=0x274d;eip=0x000953; 	X(word_4a482 = di;);	// 118422                  mov     word_4A482, di ;~ 274D:0953
cs=0x274d;eip=0x000957; 	T(ax = word_4a4b6;);	// 118423                  mov     ax, word_4A4B6 ;~ 274D:0957
cs=0x274d;eip=0x00095a; 	T(IMUL1_2(bx));	// 118424                  imul    bx ;~ 274D:095A
cs=0x274d;eip=0x00095c; 	T(di = dx;);	// 118425                  mov     di, dx ;~ 274D:095C
cs=0x274d;eip=0x00095e; 	T(si = ax;);	// 118426                  mov     si, ax ;~ 274D:095E
cs=0x274d;eip=0x000960; 	T(ax = word_4a4b0;);	// 118427                  mov     ax, word_4A4B0 ;~ 274D:0960
cs=0x274d;eip=0x000963; 	T(IMUL1_2(cx));	// 118428                  imul    cx ;~ 274D:0963
cs=0x274d;eip=0x000965; 	T(ADD(si, ax));	// 118429                  add     si, ax ;~ 274D:0965
cs=0x274d;eip=0x000967; 	T(ADC(di, dx));	// 118430                  adc     di, dx ;~ 274D:0967
cs=0x274d;eip=0x000969; 	T(ax = word_4a4aa;);	// 118431                  mov     ax, word_4A4AA ;~ 274D:0969
cs=0x274d;eip=0x00096c; 	T(IMUL1_2(bp));	// 118432                  imul    bp ;~ 274D:096C
cs=0x274d;eip=0x00096e; 	T(ADD(si, ax));	// 118433                  add     si, ax ;~ 274D:096E
cs=0x274d;eip=0x000970; 	T(ADC(di, dx));	// 118434                  adc     di, dx ;~ 274D:0970
cs=0x274d;eip=0x000972; 	T(SHL(si, 1));	// 118435                  shl     si, 1 ;~ 274D:0972
cs=0x274d;eip=0x000974; 	T(RCL(di, 1));	// 118436                  rcl     di, 1 ;~ 274D:0974
cs=0x274d;eip=0x000976; 	X(word_4a484 = si;);	// 118437                  mov     word_4A484, si ;~ 274D:0976
cs=0x274d;eip=0x00097a; 	X(word_4a486 = di;);	// 118438                  mov     word_4A486, di ;~ 274D:097A
cs=0x274d;eip=0x00097e; 	T(CMP(di, *(word_4a3ec)));	// 118439                  cmp     di, word_4A3EC ;~ 274D:097E
cs=0x274d;eip=0x000982; 	J(JG(loc_364b2));	// 118440                  jg      short loc_364B2 ;~ 274D:0982
cs=0x274d;eip=0x000984; 	T(bx = word_4a492;);	// 118441                  mov     bx, word_4A492 ;~ 274D:0984
cs=0x274d;eip=0x000988; 	T(SHL(bx, 1));	// 118442                  shl     bx, 1 ;~ 274D:0988
cs=0x274d;eip=0x00098a; 	T(CMP(di, *(dw*)(raddr(ds,bx+0x191C))));	// 118443                  cmp     di, [bx+191Ch] ;~ 274D:098A
cs=0x274d;eip=0x00098e; 	J(JL(loc_364b2));	// 118444                  jl      short loc_364B2 ;~ 274D:098E
cs=0x274d;eip=0x000990; 	T(si = word_528cc;);	// 118445                  mov     si, ds:word_528CC ;~ 274D:0990
cs=0x274d;eip=0x000994; 	T(bp = word_528d2;);	// 118446                  mov     bp, ds:word_528D2 ;~ 274D:0994
cs=0x274d;eip=0x000998; 	T(ADD(si, bx));	// 118447                  add     si, bx ;~ 274D:0998
cs=0x274d;eip=0x00099a; 	T(ADD(bp, bx));	// 118448                  add     bp, bx ;~ 274D:099A
cs=0x274d;eip=0x00099c; 	T(cl = byte_4de54;);	// 118449                  mov     cl, ds:byte_4DE54 ;~ 274D:099C
cs=0x274d;eip=0x0009a0; 	T(XOR(cl, 1));	// 118450                  xor     cl, 1 ;~ 274D:09A0
cs=0x274d;eip=0x0009a3; 	T(ax = di;);	// 118451                  mov     ax, di ;~ 274D:09A3
cs=0x274d;eip=0x0009a5; 	T(CWD);	// 118452                  cwd ;~ 274D:09A5
cs=0x274d;eip=0x0009a6; 	T(XOR(ax, dx));	// 118453                  xor     ax, dx ;~ 274D:09A6
cs=0x274d;eip=0x0009a8; 	T(SUB(ax, dx));	// 118454                  sub     ax, dx ;~ 274D:09A8
cs=0x274d;eip=0x0009aa; 	T(di = ax;);	// 118455                  mov     di, ax ;~ 274D:09AA
cs=0x274d;eip=0x0009ac; 	T(ADD(ax, *(dw*)(raddr(ds,si))));	// 118456                  add     ax, [si] ;~ 274D:09AC
cs=0x274d;eip=0x0009ae; 	T(SAR(ax, cl));	// 118457                  sar     ax, cl ;~ 274D:09AE
cs=0x274d;eip=0x0009b0; 	T(si = ax;);	// 118458                  mov     si, ax ;~ 274D:09B0
cs=0x274d;eip=0x0009b2; 	T(SAR(si, 1));	// 118459                  sar     si, 1 ;~ 274D:09B2
cs=0x274d;eip=0x0009b4; 	T(SAR(si, 1));	// 118460                  sar     si, 1 ;~ 274D:09B4
cs=0x274d;eip=0x0009b6; 	T(ADD(si, ax));	// 118461                  add     si, ax ;~ 274D:09B6
cs=0x274d;eip=0x0009b8; 	T(ax = word_4a47e;);	// 118462                  mov     ax, word_4A47E ;~ 274D:09B8
cs=0x274d;eip=0x0009bb; 	T(CWD);	// 118463                  cwd ;~ 274D:09BB
cs=0x274d;eip=0x0009bc; 	T(XOR(ax, dx));	// 118464                  xor     ax, dx ;~ 274D:09BC
cs=0x274d;eip=0x0009be; 	T(SUB(ax, dx));	// 118465                  sub     ax, dx ;~ 274D:09BE
cs=0x274d;eip=0x0009c0; 	T(CMP(ax, si));	// 118466                  cmp     ax, si ;~ 274D:09C0
cs=0x274d;eip=0x0009c2; 	J(JG(loc_364b2));	// 118467                  jg      short loc_364B2 ;~ 274D:09C2
cs=0x274d;eip=0x0009c4; 	T(si = ax;);	// 118468                  mov     si, ax ;~ 274D:09C4
cs=0x274d;eip=0x0009c6; 	T(ax = di;);	// 118469                  mov     ax, di ;~ 274D:09C6
cs=0x274d;eip=0x0009c8; 	T(ADD(ax, *(dw*)(raddr(ss,bp+0))));	// 118470                  add     ax, [bp+0] ;~ 274D:09C8
cs=0x274d;eip=0x0009cb; 	T(SAR(ax, cl));	// 118471                  sar     ax, cl ;~ 274D:09CB
cs=0x274d;eip=0x0009cd; 	T(bx = ax;);	// 118472                  mov     bx, ax ;~ 274D:09CD
cs=0x274d;eip=0x0009cf; 	T(CMP(*(db*)(&word_492f2), 0));	// 118473                  cmp     byte ptr word_492F2, 0 ;~ 274D:09CF
cs=0x274d;eip=0x0009d4; 	J(JZ(loc_36490));	// 118474                  jz      short loc_36490 ;~ 274D:09D4
cs=0x274d;eip=0x0009d6; 	T(SAR(bx, 1));	// 118475                  sar     bx, 1 ;~ 274D:09D6
cs=0x274d;eip=0x0009d8; 	T(SAR(bx, 1));	// 118476                  sar     bx, 1 ;~ 274D:09D8
cs=0x274d;eip=0x0009da; 	T(SAR(bx, 1));	// 118477                  sar     bx, 1 ;~ 274D:09DA
cs=0x274d;eip=0x0009dc; 	T(ADD(bx, ax));	// 118478                  add     bx, ax ;~ 274D:09DC
cs=0x274d;eip=0x0009de; 	T(SAR(bx, 1));	// 118479                  sar     bx, 1 ;~ 274D:09DE
loc_36490:
	// 7071 
cs=0x274d;eip=0x0009e0; 	T(ax = word_4a482;);	// 118482                  mov     ax, word_4A482 ;~ 274D:09E0
cs=0x274d;eip=0x0009e3; 	T(CWD);	// 118483                  cwd ;~ 274D:09E3
cs=0x274d;eip=0x0009e4; 	T(XOR(ax, dx));	// 118484                  xor     ax, dx ;~ 274D:09E4
cs=0x274d;eip=0x0009e6; 	T(SUB(ax, dx));	// 118485                  sub     ax, dx ;~ 274D:09E6
cs=0x274d;eip=0x0009e8; 	T(CMP(ax, bx));	// 118486                  cmp     ax, bx ;~ 274D:09E8
cs=0x274d;eip=0x0009ea; 	J(JG(loc_364b2));	// 118487                  jg      short loc_364B2 ;~ 274D:09EA
cs=0x274d;eip=0x0009ec; 	T(ADD(si, ax));	// 118488                  add     si, ax ;~ 274D:09EC
cs=0x274d;eip=0x0009ee; 	T(SAR(si, 1));	// 118489                  sar     si, 1 ;~ 274D:09EE
cs=0x274d;eip=0x0009f0; 	T(SAR(si, 1));	// 118490                  sar     si, 1 ;~ 274D:09F0
cs=0x274d;eip=0x0009f2; 	T(ADD(si, di));	// 118491                  add     si, di ;~ 274D:09F2
cs=0x274d;eip=0x0009f4; 	X(word_4a490 = si;);	// 118492                  mov     word_4A490, si ;~ 274D:09F4
cs=0x274d;eip=0x0009f8; 	T(CMP(si, *(word_4a3ec)));	// 118493                  cmp     si, word_4A3EC ;~ 274D:09F8
cs=0x274d;eip=0x0009fc; 	J(JG(loc_364b2));	// 118494                  jg      short loc_364B2 ;~ 274D:09FC
cs=0x274d;eip=0x0009fe; 	T(SUB(ax, ax));	// 118495                  sub     ax, ax ;~ 274D:09FE
cs=0x274d;eip=0x000a00; 	X(POP(si));	// 118496                  pop     si ;~ 274D:0A00
cs=0x274d;eip=0x000a01; 	J(RETN(0));	// 118497                  retn ;~ 274D:0A01
loc_364b2:
	// 7072 
cs=0x274d;eip=0x000a02; 	T(ax = 1;);	// 118502                  mov     ax, 1 ;~ 274D:0A02
cs=0x274d;eip=0x000a05; 	T(OR(ax, ax));	// 118503                  or      ax, ax ;~ 274D:0A05
cs=0x274d;eip=0x000a07; 	X(POP(si));	// 118504                  pop     si ;~ 274D:0A07
cs=0x274d;eip=0x000a08; 	J(RETN(0));	// 118505                  retn ;~ 274D:0A08

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_36490: 	goto loc_36490;
        case m2c::kloc_364b2: 	goto loc_364b2;
        case m2c::ksub_363b8: 	goto sub_363b8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_364b9(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_364b9:
    _begin:
cs=0x274d;eip=0x000a09; 	T(MOV(al, *(raddr(es,si))));	// 118514                  mov     al, es:[si] ;~ 274D:0A09
cs=0x274d;eip=0x000a0c; 	T(TEST(al, 0x80));	// 118515                  test    al, 80h ;~ 274D:0A0C
cs=0x274d;eip=0x000a0e; 	J(JZ(locret_364e1));	// 118516                  jz      short locret_364E1 ;~ 274D:0A0E
cs=0x274d;eip=0x000a10; 	T(AND(ax, 7));	// 118517                  and     ax, 7 ;~ 274D:0A10
cs=0x274d;eip=0x000a13; 	T(SHL(ax, 1));	// 118518                  shl     ax, 1 ;~ 274D:0A13
cs=0x274d;eip=0x000a15; 	T(bx = ax;);	// 118519                  mov     bx, ax ;~ 274D:0A15
cs=0x274d;eip=0x000a17; 	T(ax = word_4a490;);	// 118520                  mov     ax, word_4A490 ;~ 274D:0A17
cs=0x274d;eip=0x000a1a; 	T(cl = byte_4e73e;);	// 118521                  mov     cl, ds:byte_4E73E ;~ 274D:0A1A
cs=0x274d;eip=0x000a1e; 	T(SAR(ax, cl));	// 118522                  sar     ax, cl ;~ 274D:0A1E
cs=0x274d;eip=0x000a20; 	T(CMP(ax, *(dw*)(raddr(ds,bx+0x18FC))));	// 118523                  cmp     ax, [bx+18FCh] ;~ 274D:0A20
cs=0x274d;eip=0x000a24; 	J(JLE(loc_364dc));	// 118524                  jle     short loc_364DC ;~ 274D:0A24
cs=0x274d;eip=0x000a26; 	T(ADD(si, *(dw*)(raddr(es,si+1))));	// 118525                  add     si, es:[si+1] ;~ 274D:0A26
cs=0x274d;eip=0x000a2a; 	J(JMP(sub_364b9));	// 118526                  jmp     short sub_364B9 ;~ 274D:0A2A
loc_364dc:
	// 7073 
cs=0x274d;eip=0x000a2c; 	T(ADD(si, 3));	// 118530                  add     si, 3 ;~ 274D:0A2C
cs=0x274d;eip=0x000a2f; 	J(JMP(sub_364b9));	// 118531                  jmp     short sub_364B9 ;~ 274D:0A2F
locret_364e1:
	// 7074 
cs=0x274d;eip=0x000a31; 	J(RETN(0));	// 118535                  retn ;~ 274D:0A31

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_364dc: 	goto loc_364dc;
        case m2c::klocret_364e1: 	goto locret_364e1;
        case m2c::ksub_364b9: 	goto sub_364b9;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group73(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group73:
    _begin:
seg35ab_a32_proc:
	// 118539 
cs=0x274d;eip=0x000a32; 	T(LES(si, dword_4a46c));	// 118539                  les     si, dword_4A46C ;~ 274D:0A32
sub_364e6:
	// 118545 
cs=0x274d;eip=0x000a36; 	X(LODS(*(raddr(es,si)),si,1));	// 118546                  lods    byte ptr es:[si] ;~ 274D:0A36
cs=0x274d;eip=0x000a38; 	T(AND(ax, 3));	// 118547                  and     ax, 3 ;~ 274D:0A38
cs=0x274d;eip=0x000a3b; 	T(SHL(ax, 1));	// 118548                  shl     ax, 1 ;~ 274D:0A3B
cs=0x274d;eip=0x000a3d; 	T(bx = ax;);	// 118549                  mov     bx, ax ;~ 274D:0A3D
cs=0x274d;eip=0x000a3f; 	T(ax = word_4a4ea;);	// 118550                  mov     ax, word_4A4EA ;~ 274D:0A3F
cs=0x274d;eip=0x000a42; 	X(MOV(*(dw*)(raddr(ds,bx+0x1994)), ax));	// 118551                  mov     [bx+1994h], ax ;~ 274D:0A42
cs=0x274d;eip=0x000a46; 	J(RETN(0));	// 118552                  retn ;~ 274D:0A46

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg35ab_a32_proc: 	goto seg35ab_a32_proc;
        case m2c::ksub_364e6: 	goto sub_364e6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_364f7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_364f7:
    _begin:
#undef arg_0
#define arg_0 6
	// 118562 arg_0           = word ptr  6 ;~ 274D:0A47
#undef arg_2
#define arg_2 8
	// 118563 arg_2           = word ptr  8 ;~ 274D:0A47
#undef arg_4
#define arg_4 0x0A
	// 118564 arg_4           = word ptr  0Ah ;~ 274D:0A47
cs=0x274d;eip=0x000a47; 	X(PUSH(bp));	// 118566                  push    bp ;~ 274D:0A47
cs=0x274d;eip=0x000a48; 	T(bp = sp;);	// 118567                  mov     bp, sp ;~ 274D:0A48
cs=0x274d;eip=0x000a4a; 	X(PUSH(di));	// 118568                  push    di ;~ 274D:0A4A
cs=0x274d;eip=0x000a4b; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_4))));	// 118569                  mov     cx, [bp+arg_4] ;~ 274D:0A4B
cs=0x274d;eip=0x000a4e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 118570                  mov     bx, [bp+arg_2] ;~ 274D:0A4E
cs=0x274d;eip=0x000a51; 	T(MOV(bp, *(dw*)(raddr(ss,bp+arg_0))));	// 118571                  mov     bp, [bp+arg_0] ;~ 274D:0A51
cs=0x274d;eip=0x000a54; 	J(CALL(sub_363b8,0));	// 118572                  call    sub_363B8 ;~ 274D:0A54
cs=0x274d;eip=0x000a57; 	X(POP(di));	// 118573                  pop     di ;~ 274D:0A57
cs=0x274d;eip=0x000a58; 	X(POP(bp));	// 118574                  pop     bp ;~ 274D:0A58
cs=0x274d;eip=0x000a59; 	J(RETF(0));	// 118575                  retf ;~ 274D:0A59

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_364f7: 	goto sub_364f7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3650a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3650a:
    _begin:
cs=0x274d;eip=0x000a5a; 	X(PUSH(si));	// 118584                  push    si ;~ 274D:0A5A
cs=0x274d;eip=0x000a5b; 	T(LES(si, dword_4a46c));	// 118585                  les     si, dword_4A46C ;~ 274D:0A5B
cs=0x274d;eip=0x000a5f; 	J(CALL(sub_364b9,0));	// 118587                  call    sub_364B9 ;~ 274D:0A5F
cs=0x274d;eip=0x000a62; 	X(*(dw*)(&dword_4a46c) = si;);	// 118588                  mov     word ptr dword_4A46C, si ;~ 274D:0A62
cs=0x274d;eip=0x000a66; 	X(POP(si));	// 118589                  pop     si ;~ 274D:0A66
cs=0x274d;eip=0x000a67; 	J(RETF(0));	// 118590                  retf ;~ 274D:0A67

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_3650a: 	goto sub_3650a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg35ab_a68_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg35ab_a68_proc:
    _begin:
cs=0x274d;eip=0x000a68; 	X(PUSH(bp));	// 118594                  push    bp ;~ 274D:0A68
cs=0x274d;eip=0x000a69; 	X(PUSH(si));	// 118595                  push    si ;~ 274D:0A69
cs=0x274d;eip=0x000a6a; 	X(PUSH(di));	// 118596                  push    di ;~ 274D:0A6A
cs=0x274d;eip=0x000a6b; 	T(LES(si, dword_4a46c));	// 118597                  les     si, dword_4A46C ;~ 274D:0A6B
cs=0x274d;eip=0x000a6f; 	J(CALL(sub_36530,0));	// 118599                  call    sub_36530 ;~ 274D:0A6F
cs=0x274d;eip=0x000a72; 	X(POP(di));	// 118600                  pop     di ;~ 274D:0A72
cs=0x274d;eip=0x000a73; 	X(POP(si));	// 118601                  pop     si ;~ 274D:0A73
cs=0x274d;eip=0x000a74; 	X(POP(bp));	// 118602                  pop     bp ;~ 274D:0A74
cs=0x274d;eip=0x000a75; 	J(RETN(0));	// 118603                  retn ;~ 274D:0A75

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg35ab_a68_proc: 	goto seg35ab_a68_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36526(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36526:
    _begin:
cs=0x274d;eip=0x000a76; 	X(PUSH(bp));	// 118609                  push    bp ;~ 274D:0A76
cs=0x274d;eip=0x000a77; 	X(PUSH(si));	// 118610                  push    si ;~ 274D:0A77
cs=0x274d;eip=0x000a78; 	X(PUSH(di));	// 118611                  push    di ;~ 274D:0A78
cs=0x274d;eip=0x000a79; 	J(CALL(sub_36610,0));	// 118612                  call    sub_36610 ;~ 274D:0A79
cs=0x274d;eip=0x000a7c; 	X(POP(di));	// 118614                  pop     di ;~ 274D:0A7C
cs=0x274d;eip=0x000a7d; 	X(POP(si));	// 118615                  pop     si ;~ 274D:0A7D
cs=0x274d;eip=0x000a7e; 	X(POP(bp));	// 118616                  pop     bp ;~ 274D:0A7E
cs=0x274d;eip=0x000a7f; 	J(RETF(0));	// 118617                  retf ;~ 274D:0A7F

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_36526: 	goto sub_36526;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36530(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36530:
    _begin:
cs=0x274d;eip=0x000a80; 	X(*(dw*)(&dword_4a46c) = si;);	// 118626                  mov     word ptr dword_4A46C, si ;~ 274D:0A80
cs=0x274d;eip=0x000a84; 	X(*(dw*)(((db*)&dword_4a46c)+2) = es;);	// 118627                  mov     word ptr dword_4A46C+2, es ;~ 274D:0A84
cs=0x274d;eip=0x000a88; 	T(ax = ds;);	// 118628                  mov     ax, ds ;~ 274D:0A88
cs=0x274d;eip=0x000a8a; 	T(es = ax;);	// 118629                  mov     es, ax ;~ 274D:0A8A
cs=0x274d;eip=0x000a8c; 	T(ax = word_4a4dc;);	// 118631                  mov     ax, word_4A4DC ;~ 274D:0A8C
cs=0x274d;eip=0x000a8f; 	T(CMP(ax, 0x23));	// 118632                  cmp     ax, 23h ; '#' ;~ 274D:0A8F
cs=0x274d;eip=0x000a92; 	J(JL(loc_3655c));	// 118633                  jl      short loc_3655C ;~ 274D:0A92
cs=0x274d;eip=0x000a94; 	T(bx = *(_unk_4bd28););	// 118634                  mov     bx, _unk_4BD28 ;~ 274D:0A94
cs=0x274d;eip=0x000a98; 	T(cx = 0x22;);	// 118635                  mov     cx, 22h ; '"' ;~ 274D:0A98
cs=0x274d;eip=0x000a9b; 	T(si = 0x324A;);	// 118636                  mov     si, 324Ah ;~ 274D:0A9B
cs=0x274d;eip=0x000a9e; 	T(di = 0x3248;);	// 118637                  mov     di, 3248h ;~ 274D:0A9E
	// 118638                  rep movsw ;~ 274D:0AA1
cs=0x274d;eip=0x000aa1; 	X(	REP MOVSW);	// 118638                  rep movsw ;~ 274D:0AA1
cs=0x274d;eip=0x000aa3; 	T(di = bx;);	// 118639                  mov     di, bx ;~ 274D:0AA3
cs=0x274d;eip=0x000aa5; 	T(DEC(ax));	// 118640                  dec     ax ;~ 274D:0AA5
cs=0x274d;eip=0x000aa6; 	X(word_4a4dc = ax;);	// 118641                  mov     word_4A4DC, ax ;~ 274D:0AA6
cs=0x274d;eip=0x000aa9; 	J(JMP(loc_36565));	// 118642                  jmp     short loc_36565 ;~ 274D:0AA9
loc_3655c:
	// 7075 
cs=0x274d;eip=0x000aac; 	T(di = 0x2DE8;);	// 118648                  mov     di, 2DE8h ;~ 274D:0AAC
cs=0x274d;eip=0x000aaf; 	T(cl = 5;);	// 118649                  mov     cl, 5 ;~ 274D:0AAF
cs=0x274d;eip=0x000ab1; 	T(SHL(ax, cl));	// 118650                  shl     ax, cl ;~ 274D:0AB1
cs=0x274d;eip=0x000ab3; 	T(ADD(di, ax));	// 118651                  add     di, ax ;~ 274D:0AB3
loc_36565:
	// 7076 
cs=0x274d;eip=0x000ab5; 	T(ax = word_4a484;);	// 118654                  mov     ax, word_4A484 ;~ 274D:0AB5
cs=0x274d;eip=0x000ab8; 	T(dx = word_4a486;);	// 118655                  mov     dx, word_4A486 ;~ 274D:0AB8
cs=0x274d;eip=0x000abc; 	T(cx = word_5239c;);	// 118656                  mov     cx, ds:word_5239C ;~ 274D:0ABC
cs=0x274d;eip=0x000ac0; 	T(bx = cx;);	// 118657                  mov     bx, cx ;~ 274D:0AC0
cs=0x274d;eip=0x000ac2; 	T(SHL(cx, 1));	// 118658                  shl     cx, 1 ;~ 274D:0AC2
cs=0x274d;eip=0x000ac4; 	T(NEG(cx));	// 118659                  neg     cx ;~ 274D:0AC4
cs=0x274d;eip=0x000ac6; 	T(ADD(cx, 8));	// 118660                  add     cx, 8 ;~ 274D:0AC6
cs=0x274d;eip=0x000ac9; 	J(JZ(loc_36581));	// 118661                  jz      short loc_36581 ;~ 274D:0AC9
loc_3657b:
	// 7077 
cs=0x274d;eip=0x000acb; 	T(SAR(dx, 1));	// 118664                  sar     dx, 1 ;~ 274D:0ACB
cs=0x274d;eip=0x000acd; 	T(RCR(ax, 1));	// 118665                  rcr     ax, 1 ;~ 274D:0ACD
cs=0x274d;eip=0x000acf; 	J(LOOP(loc_3657b));	// 118666                  loop    loc_3657B ;~ 274D:0ACF
loc_36581:
	// 7078 
cs=0x274d;eip=0x000ad1; 	T(CMP(bx, 2));	// 118669                  cmp     bx, 2 ;~ 274D:0AD1
cs=0x274d;eip=0x000ad4; 	J(JNZ(loc_36590));	// 118670                  jnz     short loc_36590 ;~ 274D:0AD4
cs=0x274d;eip=0x000ad6; 	T(CMP(word_4a492, 5));	// 118671                  cmp     word_4A492, 5 ;~ 274D:0AD6
cs=0x274d;eip=0x000adb; 	J(JNZ(loc_36590));	// 118672                  jnz     short loc_36590 ;~ 274D:0ADB
cs=0x274d;eip=0x000add; 	T(ADD(dx, 0x20));	// 118673                  add     dx, 20h ; ' ' ;~ 274D:0ADD
loc_36590:
	// 7079 
cs=0x274d;eip=0x000ae0; 	T(bp = di;);	// 118677                  mov     bp, di ;~ 274D:0AE0
cs=0x274d;eip=0x000ae2; 	X(PUSH(ax));	// 118678                  push    ax ;~ 274D:0AE2
cs=0x274d;eip=0x000ae3; 	X(PUSH(dx));	// 118679                  push    dx ;~ 274D:0AE3
cs=0x274d;eip=0x000ae4; 	X(STOSW);	// 118680                  stosw ;~ 274D:0AE4
cs=0x274d;eip=0x000ae5; 	T(ax = dx;);	// 118681                  mov     ax, dx ;~ 274D:0AE5
cs=0x274d;eip=0x000ae7; 	X(STOSW);	// 118682                  stosw ;~ 274D:0AE7
cs=0x274d;eip=0x000ae8; 	T(ax = *(dw*)(&dword_4a46c););	// 118683                  mov     ax, word ptr dword_4A46C ;~ 274D:0AE8
cs=0x274d;eip=0x000aeb; 	X(STOSW);	// 118684                  stosw ;~ 274D:0AEB
cs=0x274d;eip=0x000aec; 	T(ax = *(dw*)(((db*)&dword_4a46c)+2););	// 118685                  mov     ax, word ptr dword_4A46C+2 ;~ 274D:0AEC
cs=0x274d;eip=0x000aef; 	X(STOSW);	// 118686                  stosw ;~ 274D:0AEF
cs=0x274d;eip=0x000af0; 	T(ax = word_4a470;);	// 118687                  mov     ax, word_4A470 ;~ 274D:0AF0
cs=0x274d;eip=0x000af3; 	X(STOSW);	// 118688                  stosw ;~ 274D:0AF3
cs=0x274d;eip=0x000af4; 	T(ax = word_4a472;);	// 118689                  mov     ax, word_4A472 ;~ 274D:0AF4
cs=0x274d;eip=0x000af7; 	X(STOSW);	// 118690                  stosw ;~ 274D:0AF7
cs=0x274d;eip=0x000af8; 	T(ax = word_4a474;);	// 118691                  mov     ax, word_4A474 ;~ 274D:0AF8
cs=0x274d;eip=0x000afb; 	X(STOSW);	// 118692                  stosw ;~ 274D:0AFB
cs=0x274d;eip=0x000afc; 	T(ax = word_4a476;);	// 118693                  mov     ax, word_4A476 ;~ 274D:0AFC
cs=0x274d;eip=0x000aff; 	X(STOSW);	// 118694                  stosw ;~ 274D:0AFF
cs=0x274d;eip=0x000b00; 	T(ax = word_4a478;);	// 118695                  mov     ax, word_4A478 ;~ 274D:0B00
cs=0x274d;eip=0x000b03; 	X(STOSW);	// 118696                  stosw ;~ 274D:0B03
cs=0x274d;eip=0x000b04; 	T(ax = word_4a47a;);	// 118697                  mov     ax, word_4A47A ;~ 274D:0B04
cs=0x274d;eip=0x000b07; 	X(STOSW);	// 118698                  stosw ;~ 274D:0B07
cs=0x274d;eip=0x000b08; 	T(ax = word_4a47c;);	// 118699                  mov     ax, word_4A47C ;~ 274D:0B08
cs=0x274d;eip=0x000b0b; 	X(STOSW);	// 118700                  stosw ;~ 274D:0B0B
cs=0x274d;eip=0x000b0c; 	T(ax = word_4a47e;);	// 118701                  mov     ax, word_4A47E ;~ 274D:0B0C
cs=0x274d;eip=0x000b0f; 	X(STOSW);	// 118702                  stosw ;~ 274D:0B0F
cs=0x274d;eip=0x000b10; 	T(ax = word_4a480;);	// 118703                  mov     ax, word_4A480 ;~ 274D:0B10
cs=0x274d;eip=0x000b13; 	X(STOSW);	// 118704                  stosw ;~ 274D:0B13
cs=0x274d;eip=0x000b14; 	T(ax = word_4a482;);	// 118705                  mov     ax, word_4A482 ;~ 274D:0B14
cs=0x274d;eip=0x000b17; 	X(STOSW);	// 118706                  stosw ;~ 274D:0B17
cs=0x274d;eip=0x000b18; 	T(ax = word_4a484;);	// 118707                  mov     ax, word_4A484 ;~ 274D:0B18
cs=0x274d;eip=0x000b1b; 	X(STOSW);	// 118708                  stosw ;~ 274D:0B1B
cs=0x274d;eip=0x000b1c; 	T(ax = word_4a486;);	// 118709                  mov     ax, word_4A486 ;~ 274D:0B1C
cs=0x274d;eip=0x000b1f; 	X(STOSW);	// 118710                  stosw ;~ 274D:0B1F
cs=0x274d;eip=0x000b20; 	X(POP(dx));	// 118711                  pop     dx ;~ 274D:0B20
cs=0x274d;eip=0x000b21; 	X(POP(ax));	// 118712                  pop     ax ;~ 274D:0B21
cs=0x274d;eip=0x000b22; 	T(bx = word_4a4dc;);	// 118713                  mov     bx, word_4A4DC ;~ 274D:0B22
cs=0x274d;eip=0x000b26; 	T(SHL(bx, 1));	// 118714                  shl     bx, 1 ;~ 274D:0B26
cs=0x274d;eip=0x000b28; 	T(cx = bx;);	// 118715                  mov     cx, bx ;~ 274D:0B28
loc_365da:
	// 7080 
cs=0x274d;eip=0x000b2a; 	T(SUB(bx, 2));	// 118719                  sub     bx, 2 ;~ 274D:0B2A
cs=0x274d;eip=0x000b2d; 	J(JS(loc_365ee));	// 118720                  js      short loc_365EE ;~ 274D:0B2D
cs=0x274d;eip=0x000b2f; 	T(MOV(di, *(dw*)(raddr(ds,bx+0x3248))));	// 118721                  mov     di, [bx+3248h] ;~ 274D:0B2F
cs=0x274d;eip=0x000b33; 	T(CMP(dx, *(dw*)(raddr(ds,di+2))));	// 118722                  cmp     dx, [di+2] ;~ 274D:0B33
cs=0x274d;eip=0x000b36; 	J(JG(loc_365da));	// 118723                  jg      short loc_365DA ;~ 274D:0B36
cs=0x274d;eip=0x000b38; 	J(JL(loc_365ee));	// 118724                  jl      short loc_365EE ;~ 274D:0B38
cs=0x274d;eip=0x000b3a; 	T(CMP(ax, *(dw*)(raddr(ds,di))));	// 118725                  cmp     ax, [di] ;~ 274D:0B3A
cs=0x274d;eip=0x000b3c; 	J(JA(loc_365da));	// 118726                  ja      short loc_365DA ;~ 274D:0B3C
loc_365ee:
	// 7081 
cs=0x274d;eip=0x000b3e; 	T(SUB(cx, 2));	// 118730                  sub     cx, 2 ;~ 274D:0B3E
cs=0x274d;eip=0x000b41; 	T(di = cx;);	// 118731                  mov     di, cx ;~ 274D:0B41
cs=0x274d;eip=0x000b43; 	T(ADD(di, 0x324A));	// 118732                  add     di, 324Ah ;~ 274D:0B43
cs=0x274d;eip=0x000b47; 	T(si = cx;);	// 118733                  mov     si, cx ;~ 274D:0B47
cs=0x274d;eip=0x000b49; 	T(ADD(si, 0x3248));	// 118734                  add     si, 3248h ;~ 274D:0B49
cs=0x274d;eip=0x000b4d; 	T(SUB(cx, bx));	// 118735                  sub     cx, bx ;~ 274D:0B4D
cs=0x274d;eip=0x000b4f; 	J(JLE(loc_36609));	// 118736                  jle     short loc_36609 ;~ 274D:0B4F
cs=0x274d;eip=0x000b51; 	T(SHR(cx, 1));	// 118737                  shr     cx, 1 ;~ 274D:0B51
cs=0x274d;eip=0x000b53; 	T(CLI);	// 118738                  cli ;~ 274D:0B53
cs=0x274d;eip=0x000b54; 	T(STD);	// 118739                  std ;~ 274D:0B54
	// 118740                  rep movsw ;~ 274D:0B55
cs=0x274d;eip=0x000b55; 	X(	REP MOVSW);	// 118740                  rep movsw ;~ 274D:0B55
cs=0x274d;eip=0x000b57; 	T(CLD);	// 118741                  cld ;~ 274D:0B57
cs=0x274d;eip=0x000b58; 	T(STI);	// 118742                  sti ;~ 274D:0B58
loc_36609:
	// 7082 
cs=0x274d;eip=0x000b59; 	X(MOV(*(dw*)(raddr(ds,di)), bp));	// 118745                  mov     [di], bp ;~ 274D:0B59
cs=0x274d;eip=0x000b5b; 	X(INC(word_4a4dc));	// 118746                  inc     word_4A4DC ;~ 274D:0B5B
cs=0x274d;eip=0x000b5f; 	J(RETN(0));	// 118747                  retn ;~ 274D:0B5F

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_3655c: 	goto loc_3655c;
        case m2c::kloc_36565: 	goto loc_36565;
        case m2c::kloc_3657b: 	goto loc_3657b;
        case m2c::kloc_36581: 	goto loc_36581;
        case m2c::kloc_36590: 	goto loc_36590;
        case m2c::kloc_365da: 	goto loc_365da;
        case m2c::kloc_365ee: 	goto loc_365ee;
        case m2c::kloc_36609: 	goto loc_36609;
        case m2c::ksub_36530: 	goto sub_36530;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36610(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36610:
    _begin:
cs=0x274d;eip=0x000b60; 	T(CMP(word_4a4dc, 0));	// 118755                  cmp     word_4A4DC, 0 ;~ 274D:0B60
cs=0x274d;eip=0x000b65; 	J(JZ(locret_3666b));	// 118756                  jz      short locret_3666B ;~ 274D:0B65
cs=0x274d;eip=0x000b67; 	T(si = 0x3246;);	// 118757                  mov     si, 3246h ;~ 274D:0B67
loc_3661a:
	// 7083 
cs=0x274d;eip=0x000b6a; 	T(ADD(si, 2));	// 118760                  add     si, 2 ;~ 274D:0B6A
cs=0x274d;eip=0x000b6d; 	X(PUSH(si));	// 118761                  push    si ;~ 274D:0B6D
cs=0x274d;eip=0x000b6e; 	T(MOV(si, *(dw*)(raddr(ds,si))));	// 118762                  mov     si, [si] ;~ 274D:0B6E
cs=0x274d;eip=0x000b70; 	T(ADD(si, 4));	// 118763                  add     si, 4 ;~ 274D:0B70
cs=0x274d;eip=0x000b73; 	T(LODSW);	// 118764                  lodsw ;~ 274D:0B73
cs=0x274d;eip=0x000b74; 	X(*(dw*)(&dword_4a46c) = ax;);	// 118765                  mov     word ptr dword_4A46C, ax ;~ 274D:0B74
cs=0x274d;eip=0x000b77; 	T(LODSW);	// 118766                  lodsw ;~ 274D:0B77
cs=0x274d;eip=0x000b78; 	X(*(dw*)(((db*)&dword_4a46c)+2) = ax;);	// 118767                  mov     word ptr dword_4A46C+2, ax ;~ 274D:0B78
cs=0x274d;eip=0x000b7b; 	T(LODSW);	// 118768                  lodsw ;~ 274D:0B7B
cs=0x274d;eip=0x000b7c; 	X(word_4a470 = ax;);	// 118769                  mov     word_4A470, ax ;~ 274D:0B7C
cs=0x274d;eip=0x000b7f; 	T(LODSW);	// 118770                  lodsw ;~ 274D:0B7F
cs=0x274d;eip=0x000b80; 	X(word_4a472 = ax;);	// 118771                  mov     word_4A472, ax ;~ 274D:0B80
cs=0x274d;eip=0x000b83; 	T(LODSW);	// 118772                  lodsw ;~ 274D:0B83
cs=0x274d;eip=0x000b84; 	X(word_4a474 = ax;);	// 118773                  mov     word_4A474, ax ;~ 274D:0B84
cs=0x274d;eip=0x000b87; 	T(LODSW);	// 118774                  lodsw ;~ 274D:0B87
cs=0x274d;eip=0x000b88; 	X(word_4a476 = ax;);	// 118775                  mov     word_4A476, ax ;~ 274D:0B88
cs=0x274d;eip=0x000b8b; 	T(LODSW);	// 118776                  lodsw ;~ 274D:0B8B
cs=0x274d;eip=0x000b8c; 	X(word_4a478 = ax;);	// 118777                  mov     word_4A478, ax ;~ 274D:0B8C
cs=0x274d;eip=0x000b8f; 	T(LODSW);	// 118778                  lodsw ;~ 274D:0B8F
cs=0x274d;eip=0x000b90; 	X(word_4a47a = ax;);	// 118779                  mov     word_4A47A, ax ;~ 274D:0B90
cs=0x274d;eip=0x000b93; 	T(LODSW);	// 118780                  lodsw ;~ 274D:0B93
cs=0x274d;eip=0x000b94; 	X(word_4a47c = ax;);	// 118781                  mov     word_4A47C, ax ;~ 274D:0B94
cs=0x274d;eip=0x000b97; 	T(LODSW);	// 118782                  lodsw ;~ 274D:0B97
cs=0x274d;eip=0x000b98; 	X(word_4a47e = ax;);	// 118783                  mov     word_4A47E, ax ;~ 274D:0B98
cs=0x274d;eip=0x000b9b; 	T(LODSW);	// 118784                  lodsw ;~ 274D:0B9B
cs=0x274d;eip=0x000b9c; 	X(word_4a480 = ax;);	// 118785                  mov     word_4A480, ax ;~ 274D:0B9C
cs=0x274d;eip=0x000b9f; 	T(LODSW);	// 118786                  lodsw ;~ 274D:0B9F
cs=0x274d;eip=0x000ba0; 	X(word_4a482 = ax;);	// 118787                  mov     word_4A482, ax ;~ 274D:0BA0
cs=0x274d;eip=0x000ba3; 	T(LODSW);	// 118788                  lodsw ;~ 274D:0BA3
cs=0x274d;eip=0x000ba4; 	X(word_4a484 = ax;);	// 118789                  mov     word_4A484, ax ;~ 274D:0BA4
cs=0x274d;eip=0x000ba7; 	T(LODSW);	// 118790                  lodsw ;~ 274D:0BA7
cs=0x274d;eip=0x000ba8; 	X(word_4a486 = ax;);	// 118791                  mov     word_4A486, ax ;~ 274D:0BA8
cs=0x274d;eip=0x000bab; 	T(LES(si, dword_4a46c));	// 118792                  les     si, dword_4A46C ;~ 274D:0BAB
cs=0x274d;eip=0x000baf; 	J(CALL(sub_36697,0));	// 118794                  call    sub_36697 ;~ 274D:0BAF
cs=0x274d;eip=0x000bb2; 	X(POP(si));	// 118795                  pop     si ;~ 274D:0BB2
cs=0x274d;eip=0x000bb3; 	X(DEC(word_4a4dc));	// 118796                  dec     word_4A4DC ;~ 274D:0BB3
cs=0x274d;eip=0x000bb7; 	J(JZ(locret_3666b));	// 118797                  jz      short locret_3666B ;~ 274D:0BB7
cs=0x274d;eip=0x000bb9; 	J(JMP(loc_3661a));	// 118798                  jmp     short loc_3661A ;~ 274D:0BB9
locret_3666b:
	// 7084 
cs=0x274d;eip=0x000bbb; 	J(RETN(0));	// 118803                  retn ;~ 274D:0BBB

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_3661a: 	goto loc_3661a;
        case m2c::klocret_3666b: 	goto locret_3666b;
        case m2c::ksub_36610: 	goto sub_36610;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg35ab_bbc_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg35ab_bbc_proc:
    _begin:
cs=0x274d;eip=0x000bbc; 	X(PUSH(bp));	// 118807                  push    bp ;~ 274D:0BBC
cs=0x274d;eip=0x000bbd; 	X(PUSH(si));	// 118808                  push    si ;~ 274D:0BBD
cs=0x274d;eip=0x000bbe; 	X(PUSH(di));	// 118809                  push    di ;~ 274D:0BBE
cs=0x274d;eip=0x000bbf; 	T(LES(si, dword_4a46c));	// 118810                  les     si, dword_4A46C ;~ 274D:0BBF
cs=0x274d;eip=0x000bc3; 	J(CALL(sub_36697,0));	// 118812                  call    sub_36697 ;~ 274D:0BC3
cs=0x274d;eip=0x000bc6; 	X(POP(di));	// 118813                  pop     di ;~ 274D:0BC6
cs=0x274d;eip=0x000bc7; 	X(POP(si));	// 118814                  pop     si ;~ 274D:0BC7
cs=0x274d;eip=0x000bc8; 	X(POP(bp));	// 118815                  pop     bp ;~ 274D:0BC8
cs=0x274d;eip=0x000bc9; 	J(RETN(0));	// 118816                  retn ;~ 274D:0BC9

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg35ab_bbc_proc: 	goto seg35ab_bbc_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3667a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3667a:
    _begin:
cs=0x274d;eip=0x000bca; 	X(PUSH(bp));	// 118822                  push    bp ;~ 274D:0BCA
cs=0x274d;eip=0x000bcb; 	X(PUSH(si));	// 118823                  push    si ;~ 274D:0BCB
cs=0x274d;eip=0x000bcc; 	X(PUSH(di));	// 118824                  push    di ;~ 274D:0BCC
cs=0x274d;eip=0x000bcd; 	T(cx = word_4a474;);	// 118825                  mov     cx, word_4A474 ;~ 274D:0BCD
cs=0x274d;eip=0x000bd1; 	T(ax = word_4a472;);	// 118826                  mov     ax, word_4A472 ;~ 274D:0BD1
cs=0x274d;eip=0x000bd4; 	T(bp = word_4a470;);	// 118827                  mov     bp, word_4A470 ;~ 274D:0BD4
cs=0x274d;eip=0x000bd8; 	T(LES(si, dword_4a46c));	// 118828                  les     si, dword_4A46C ;~ 274D:0BD8
cs=0x274d;eip=0x000bdc; 	J(CALL(sub_36764,0));	// 118829                  call    sub_36764 ;~ 274D:0BDC
cs=0x274d;eip=0x000bdf; 	X(*(dw*)(&dword_4a46c) = si;);	// 118830                  mov     word ptr dword_4A46C, si ;~ 274D:0BDF
cs=0x274d;eip=0x000be3; 	X(POP(di));	// 118831                  pop     di ;~ 274D:0BE3
cs=0x274d;eip=0x000be4; 	X(POP(si));	// 118832                  pop     si ;~ 274D:0BE4
cs=0x274d;eip=0x000be5; 	X(POP(bp));	// 118833                  pop     bp ;~ 274D:0BE5
cs=0x274d;eip=0x000be6; 	J(RETF(0));	// 118834                  retf ;~ 274D:0BE6

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_3667a: 	goto sub_3667a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36697(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36697:
    _begin:
cs=0x274d;eip=0x000be7; 	T(ah = byte_48b63;);	// 118847                  mov     ah, byte_48B63 ;~ 274D:0BE7
cs=0x274d;eip=0x000beb; 	T(OR(ah, ah));	// 118848                  or      ah, ah ;~ 274D:0BEB
cs=0x274d;eip=0x000bed; 	J(JZ(loc_366c6));	// 118849                  jz      short loc_366C6 ;~ 274D:0BED
cs=0x274d;eip=0x000bef; 	T(al = *(db*)(((db*)&word_4a486)+1););	// 118850                  mov     al, byte ptr word_4A486+1 ;~ 274D:0BEF
cs=0x274d;eip=0x000bf2; 	T(CBW);	// 118851                  cbw ;~ 274D:0BF2
cs=0x274d;eip=0x000bf3; 	T(NOT(ah));	// 118852                  not     ah ;~ 274D:0BF3
cs=0x274d;eip=0x000bf5; 	T(AND(al, ah));	// 118853                  and     al, ah ;~ 274D:0BF5
cs=0x274d;eip=0x000bf7; 	T(SUB(ah, ah));	// 118854                  sub     ah, ah ;~ 274D:0BF7
cs=0x274d;eip=0x000bf9; 	T(SHR(ax, 1));	// 118855                  shr     ax, 1 ;~ 274D:0BF9
cs=0x274d;eip=0x000bfb; 	T(ah = al;);	// 118856                  mov     ah, al ;~ 274D:0BFB
cs=0x274d;eip=0x000bfd; 	T(SUB(ah, 0));	// 118857                  sub     ah, 0 ;~ 274D:0BFD
cs=0x274d;eip=0x000c00; 	J(JNS(loc_366b4));	// 118858                  jns     short loc_366B4 ;~ 274D:0C00
cs=0x274d;eip=0x000c02; 	T(SUB(ah, ah));	// 118859                  sub     ah, ah ;~ 274D:0C02
loc_366b4:
	// 7085 
cs=0x274d;eip=0x000c04; 	T(CMP(ah, 7));	// 118862                  cmp     ah, 7 ;~ 274D:0C04
cs=0x274d;eip=0x000c07; 	J(JLE(loc_366bb));	// 118863                  jle     short loc_366BB ;~ 274D:0C07
cs=0x274d;eip=0x000c09; 	T(ah = 7;);	// 118864                  mov     ah, 7 ;~ 274D:0C09
loc_366bb:
	// 7086 
cs=0x274d;eip=0x000c0b; 	T(SHL(ah, 1));	// 118867                  shl     ah, 1 ;~ 274D:0C0B
cs=0x274d;eip=0x000c0d; 	T(SHL(ah, 1));	// 118868                  shl     ah, 1 ;~ 274D:0C0D
cs=0x274d;eip=0x000c0f; 	T(SHL(ah, 1));	// 118869                  shl     ah, 1 ;~ 274D:0C0F
cs=0x274d;eip=0x000c11; 	T(SHL(ah, 1));	// 118870                  shl     ah, 1 ;~ 274D:0C11
cs=0x274d;eip=0x000c13; 	T(ADD(ah, 0x80));	// 118871                  add     ah, 80h ;~ 274D:0C13
loc_366c6:
	// 7087 
cs=0x274d;eip=0x000c16; 	X(*(byte_4a3ca) = ah;);	// 118874                  mov     byte_4A3CA, ah ;~ 274D:0C16
cs=0x274d;eip=0x000c1a; 	T(MOV(al, *(raddr(es,si))));	// 118875                  mov     al, es:[si] ;~ 274D:0C1A
cs=0x274d;eip=0x000c1d; 	T(AND(al, 0x3F));	// 118876                  and     al, 3Fh ;~ 274D:0C1D
cs=0x274d;eip=0x000c1f; 	T(CMP(al, 0x3E));	// 118877                  cmp     al, 3Eh ; '>' ;~ 274D:0C1F
cs=0x274d;eip=0x000c21; 	J(JL(loc_366db));	// 118878                  jl      short loc_366DB ;~ 274D:0C21
cs=0x274d;eip=0x000c23; 	J(JZ(loc_366d8));	// 118879                  jz      short loc_366D8 ;~ 274D:0C23
cs=0x274d;eip=0x000c25; 	J(return seg35ab_198a_proc(m2c::kloc_3743a, _state););	// 118880                  jmp     loc_3743A ;~ 274D:0C25
loc_366d8:
	// 7088 
cs=0x274d;eip=0x000c28; 	J(return seg35ab_198a_proc(m2c::kloc_375a4, _state););	// 118884                  jmp     loc_375A4 ;~ 274D:0C28
loc_366db:
	// 7089 
cs=0x274d;eip=0x000c2b; 	T(ax = word_4a476;);	// 118888                  mov     ax, word_4A476 ;~ 274D:0C2B
cs=0x274d;eip=0x000c2e; 	T(OR(ax, word_4a478));	// 118889                  or      ax, word_4A478 ;~ 274D:0C2E
cs=0x274d;eip=0x000c32; 	T(OR(ax, word_4a47a));	// 118890                  or      ax, word_4A47A ;~ 274D:0C32
cs=0x274d;eip=0x000c36; 	T(OR(al, ah));	// 118891                  or      al, ah ;~ 274D:0C36
cs=0x274d;eip=0x000c38; 	X(*(byte_4a488) = al;);	// 118892                  mov     byte_4A488, al ;~ 274D:0C38
cs=0x274d;eip=0x000c3b; 	J(JZ(loc_36710));	// 118893                  jz      short loc_36710 ;~ 274D:0C3B
cs=0x274d;eip=0x000c3d; 	X(PUSH(si));	// 118894                  push    si ;~ 274D:0C3D
cs=0x274d;eip=0x000c3e; 	T(di = 0x19D8;);	// 118895                  mov     di, 19D8h ;~ 274D:0C3E
cs=0x274d;eip=0x000c41; 	T(cx = word_4a476;);	// 118896                  mov     cx, word_4A476 ;~ 274D:0C41
cs=0x274d;eip=0x000c45; 	T(si = word_4a478;);	// 118897                  mov     si, word_4A478 ;~ 274D:0C45
cs=0x274d;eip=0x000c49; 	T(bp = word_4a47a;);	// 118898                  mov     bp, word_4A47A ;~ 274D:0C49
cs=0x274d;eip=0x000c4d; 	J(CALL(sub_36f2b,0));	// 118899                  call    sub_36F2B ;~ 274D:0C4D
cs=0x274d;eip=0x000c50; 	T(bx = 0x19D8;);	// 118900                  mov     bx, 19D8h ;~ 274D:0C50
cs=0x274d;eip=0x000c53; 	T(si = 0x19C6;);	// 118901                  mov     si, 19C6h ;~ 274D:0C53
cs=0x274d;eip=0x000c56; 	T(di = 0x19EA;);	// 118902                  mov     di, 19EAh ;~ 274D:0C56
cs=0x274d;eip=0x000c59; 	J(CALL(sub_3707d,0));	// 118903                  call    sub_3707D ;~ 274D:0C59
cs=0x274d;eip=0x000c5c; 	X(POP(si));	// 118904                  pop     si ;~ 274D:0C5C
cs=0x274d;eip=0x000c5d; 	J(JMP(loc_36746));	// 118905                  jmp     short loc_36746 ;~ 274D:0C5D
loc_36710:
	// 7090 
cs=0x274d;eip=0x000c60; 	T(ax = word_4a4a6;);	// 118911                  mov     ax, word_4A4A6 ;~ 274D:0C60
cs=0x274d;eip=0x000c63; 	X(word_4a4ca = ax;);	// 118912                  mov     word_4A4CA, ax ;~ 274D:0C63
cs=0x274d;eip=0x000c66; 	T(ax = word_4a4a8;);	// 118913                  mov     ax, word_4A4A8 ;~ 274D:0C66
cs=0x274d;eip=0x000c69; 	X(word_4a4cc = ax;);	// 118914                  mov     word_4A4CC, ax ;~ 274D:0C69
cs=0x274d;eip=0x000c6c; 	T(ax = word_4a4aa;);	// 118915                  mov     ax, word_4A4AA ;~ 274D:0C6C
cs=0x274d;eip=0x000c6f; 	X(word_4a4ce = ax;);	// 118916                  mov     word_4A4CE, ax ;~ 274D:0C6F
cs=0x274d;eip=0x000c72; 	T(ax = word_4a4ac;);	// 118917                  mov     ax, word_4A4AC ;~ 274D:0C72
cs=0x274d;eip=0x000c75; 	X(word_4a4d0 = ax;);	// 118918                  mov     word_4A4D0, ax ;~ 274D:0C75
cs=0x274d;eip=0x000c78; 	T(ax = word_4a4ae;);	// 118919                  mov     ax, word_4A4AE ;~ 274D:0C78
cs=0x274d;eip=0x000c7b; 	X(word_4a4d2 = ax;);	// 118920                  mov     word_4A4D2, ax ;~ 274D:0C7B
cs=0x274d;eip=0x000c7e; 	T(ax = word_4a4b0;);	// 118921                  mov     ax, word_4A4B0 ;~ 274D:0C7E
cs=0x274d;eip=0x000c81; 	X(word_4a4d4 = ax;);	// 118922                  mov     word_4A4D4, ax ;~ 274D:0C81
cs=0x274d;eip=0x000c84; 	T(ax = word_4a4b2;);	// 118923                  mov     ax, word_4A4B2 ;~ 274D:0C84
cs=0x274d;eip=0x000c87; 	X(word_4a4d6 = ax;);	// 118924                  mov     word_4A4D6, ax ;~ 274D:0C87
cs=0x274d;eip=0x000c8a; 	T(ax = word_4a4b4;);	// 118925                  mov     ax, word_4A4B4 ;~ 274D:0C8A
cs=0x274d;eip=0x000c8d; 	X(word_4a4d8 = ax;);	// 118926                  mov     word_4A4D8, ax ;~ 274D:0C8D
cs=0x274d;eip=0x000c90; 	T(ax = word_4a4b6;);	// 118927                  mov     ax, word_4A4B6 ;~ 274D:0C90
cs=0x274d;eip=0x000c93; 	X(word_4a4da = ax;);	// 118928                  mov     word_4A4DA, ax ;~ 274D:0C93
loc_36746:
	// 7091 
cs=0x274d;eip=0x000c96; 	T(cx = word_4a474;);	// 118931                  mov     cx, word_4A474 ;~ 274D:0C96
cs=0x274d;eip=0x000c9a; 	T(ax = word_4a472;);	// 118932                  mov     ax, word_4A472 ;~ 274D:0C9A
cs=0x274d;eip=0x000c9d; 	T(bp = word_4a470;);	// 118933                  mov     bp, word_4A470 ;~ 274D:0C9D
cs=0x274d;eip=0x000ca1; 	J(CALL(sub_36764,0));	// 118934                  call    sub_36764 ;~ 274D:0CA1
cs=0x274d;eip=0x000ca4; 	J(CALL(sub_35bc3,0));	// 118935                  call    sub_35BC3 ;~ 274D:0CA4
cs=0x274d;eip=0x000ca7; 	J(CALL(sub_36ba0,0));	// 118936                  call    sub_36BA0 ;~ 274D:0CA7
cs=0x274d;eip=0x000caa; 	J(CALL(sub_36c88,0));	// 118937                  call    sub_36C88 ;~ 274D:0CAA
cs=0x274d;eip=0x000cad; 	J(CALL(sub_3721a,0));	// 118938                  call    sub_3721A ;~ 274D:0CAD
cs=0x274d;eip=0x000cb0; 	J(CALL(sub_35be7,0));	// 118939                  call    sub_35BE7 ;~ 274D:0CB0
cs=0x274d;eip=0x000cb3; 	J(RETN(0));	// 118940                  retn ;~ 274D:0CB3

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_366b4: 	goto loc_366b4;
        case m2c::kloc_366bb: 	goto loc_366bb;
        case m2c::kloc_366c6: 	goto loc_366c6;
        case m2c::kloc_366d8: 	goto loc_366d8;
        case m2c::kloc_366db: 	goto loc_366db;
        case m2c::kloc_36710: 	goto loc_36710;
        case m2c::kloc_36746: 	goto loc_36746;
        case m2c::ksub_36697: 	goto sub_36697;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36764(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36764:
    _begin:
cs=0x274d;eip=0x000cb4; 	T(NEG(bp));	// 118949                  neg     bp ;~ 274D:0CB4
cs=0x274d;eip=0x000cb6; 	T(NEG(ax));	// 118950                  neg     ax ;~ 274D:0CB6
cs=0x274d;eip=0x000cb8; 	T(NEG(cx));	// 118951                  neg     cx ;~ 274D:0CB8
cs=0x274d;eip=0x000cba; 	T(CMP(*(byte_4a488), 0));	// 118952                  cmp     byte_4A488, 0 ;~ 274D:0CBA
cs=0x274d;eip=0x000cbf; 	J(JNZ(loc_3677f));	// 118953                  jnz     short loc_3677F ;~ 274D:0CBF
cs=0x274d;eip=0x000cc1; 	X(word_4cdae = bp;);	// 118954                  mov     ds:word_4CDAE, bp ;~ 274D:0CC1
cs=0x274d;eip=0x000cc5; 	X(word_4cdb0 = cx;);	// 118955                  mov     ds:word_4CDB0, cx ;~ 274D:0CC5
cs=0x274d;eip=0x000cc9; 	X(word_4cdb2 = ax;);	// 118956                  mov     ds:word_4CDB2, ax ;~ 274D:0CC9
cs=0x274d;eip=0x000ccc; 	J(JMP(loc_3680e));	// 118957                  jmp     loc_3680E ;~ 274D:0CCC
loc_3677f:
	// 7092 
cs=0x274d;eip=0x000ccf; 	X(word_4cdb4 = ax;);	// 118961                  mov     ds:word_4CDB4, ax ;~ 274D:0CCF
cs=0x274d;eip=0x000cd2; 	J(CALL(sub_37049,0));	// 118962                  call    sub_37049 ;~ 274D:0CD2
cs=0x274d;eip=0x000cd5; 	X(PUSH(si));	// 118963                  push    si ;~ 274D:0CD5
cs=0x274d;eip=0x000cd6; 	T(ax = word_4cdb4;);	// 118964                  mov     ax, ds:word_4CDB4 ;~ 274D:0CD6
cs=0x274d;eip=0x000cd9; 	X(IMUL1_2(word_4a4c4));	// 118965                  imul    word_4A4C4 ;~ 274D:0CD9
cs=0x274d;eip=0x000cdd; 	T(di = dx;);	// 118966                  mov     di, dx ;~ 274D:0CDD
cs=0x274d;eip=0x000cdf; 	T(si = ax;);	// 118967                  mov     si, ax ;~ 274D:0CDF
cs=0x274d;eip=0x000ce1; 	T(ax = cx;);	// 118968                  mov     ax, cx ;~ 274D:0CE1
cs=0x274d;eip=0x000ce3; 	X(IMUL1_2(word_4a4be));	// 118969                  imul    word_4A4BE ;~ 274D:0CE3
cs=0x274d;eip=0x000ce7; 	T(ADD(si, ax));	// 118970                  add     si, ax ;~ 274D:0CE7
cs=0x274d;eip=0x000ce9; 	T(ADC(di, dx));	// 118971                  adc     di, dx ;~ 274D:0CE9
cs=0x274d;eip=0x000ceb; 	T(ax = bp;);	// 118972                  mov     ax, bp ;~ 274D:0CEB
cs=0x274d;eip=0x000ced; 	X(IMUL1_2(word_4a4b8));	// 118973                  imul    word_4A4B8 ;~ 274D:0CED
cs=0x274d;eip=0x000cf1; 	T(ADD(si, ax));	// 118974                  add     si, ax ;~ 274D:0CF1
cs=0x274d;eip=0x000cf3; 	T(ADC(di, dx));	// 118975                  adc     di, dx ;~ 274D:0CF3
cs=0x274d;eip=0x000cf5; 	T(SHL(si, 1));	// 118976                  shl     si, 1 ;~ 274D:0CF5
cs=0x274d;eip=0x000cf7; 	T(RCL(di, 1));	// 118977                  rcl     di, 1 ;~ 274D:0CF7
cs=0x274d;eip=0x000cf9; 	T(SHL(si, 1));	// 118978                  shl     si, 1 ;~ 274D:0CF9
cs=0x274d;eip=0x000cfb; 	T(ADC(di, 0));	// 118979                  adc     di, 0 ;~ 274D:0CFB
cs=0x274d;eip=0x000cfe; 	X(word_4cdae = di;);	// 118980                  mov     ds:word_4CDAE, di ;~ 274D:0CFE
cs=0x274d;eip=0x000d02; 	T(ax = word_4cdb4;);	// 118981                  mov     ax, ds:word_4CDB4 ;~ 274D:0D02
cs=0x274d;eip=0x000d05; 	X(IMUL1_2(word_4a4c6));	// 118982                  imul    word_4A4C6 ;~ 274D:0D05
cs=0x274d;eip=0x000d09; 	T(di = dx;);	// 118983                  mov     di, dx ;~ 274D:0D09
cs=0x274d;eip=0x000d0b; 	T(si = ax;);	// 118984                  mov     si, ax ;~ 274D:0D0B
cs=0x274d;eip=0x000d0d; 	T(ax = cx;);	// 118985                  mov     ax, cx ;~ 274D:0D0D
cs=0x274d;eip=0x000d0f; 	X(IMUL1_2(word_4a4c0));	// 118986                  imul    word_4A4C0 ;~ 274D:0D0F
cs=0x274d;eip=0x000d13; 	T(ADD(si, ax));	// 118987                  add     si, ax ;~ 274D:0D13
cs=0x274d;eip=0x000d15; 	T(ADC(di, dx));	// 118988                  adc     di, dx ;~ 274D:0D15
cs=0x274d;eip=0x000d17; 	T(ax = bp;);	// 118989                  mov     ax, bp ;~ 274D:0D17
cs=0x274d;eip=0x000d19; 	X(IMUL1_2(word_4a4ba));	// 118990                  imul    word_4A4BA ;~ 274D:0D19
cs=0x274d;eip=0x000d1d; 	T(ADD(si, ax));	// 118991                  add     si, ax ;~ 274D:0D1D
cs=0x274d;eip=0x000d1f; 	T(ADC(di, dx));	// 118992                  adc     di, dx ;~ 274D:0D1F
cs=0x274d;eip=0x000d21; 	T(SHL(si, 1));	// 118993                  shl     si, 1 ;~ 274D:0D21
cs=0x274d;eip=0x000d23; 	T(RCL(di, 1));	// 118994                  rcl     di, 1 ;~ 274D:0D23
cs=0x274d;eip=0x000d25; 	T(SHL(si, 1));	// 118995                  shl     si, 1 ;~ 274D:0D25
cs=0x274d;eip=0x000d27; 	T(ADC(di, 0));	// 118996                  adc     di, 0 ;~ 274D:0D27
cs=0x274d;eip=0x000d2a; 	X(word_4cdb0 = di;);	// 118997                  mov     ds:word_4CDB0, di ;~ 274D:0D2A
cs=0x274d;eip=0x000d2e; 	T(ax = word_4cdb4;);	// 118998                  mov     ax, ds:word_4CDB4 ;~ 274D:0D2E
cs=0x274d;eip=0x000d31; 	X(IMUL1_2(word_4a4c8));	// 118999                  imul    word_4A4C8 ;~ 274D:0D31
cs=0x274d;eip=0x000d35; 	T(di = dx;);	// 119000                  mov     di, dx ;~ 274D:0D35
cs=0x274d;eip=0x000d37; 	T(si = ax;);	// 119001                  mov     si, ax ;~ 274D:0D37
cs=0x274d;eip=0x000d39; 	T(ax = cx;);	// 119002                  mov     ax, cx ;~ 274D:0D39
cs=0x274d;eip=0x000d3b; 	X(IMUL1_2(word_4a4c2));	// 119003                  imul    word_4A4C2 ;~ 274D:0D3B
cs=0x274d;eip=0x000d3f; 	T(ADD(si, ax));	// 119004                  add     si, ax ;~ 274D:0D3F
cs=0x274d;eip=0x000d41; 	T(ADC(di, dx));	// 119005                  adc     di, dx ;~ 274D:0D41
cs=0x274d;eip=0x000d43; 	T(ax = bp;);	// 119006                  mov     ax, bp ;~ 274D:0D43
cs=0x274d;eip=0x000d45; 	X(IMUL1_2(word_4a4bc));	// 119007                  imul    word_4A4BC ;~ 274D:0D45
cs=0x274d;eip=0x000d49; 	T(ADD(si, ax));	// 119008                  add     si, ax ;~ 274D:0D49
cs=0x274d;eip=0x000d4b; 	T(ADC(di, dx));	// 119009                  adc     di, dx ;~ 274D:0D4B
cs=0x274d;eip=0x000d4d; 	T(SHL(si, 1));	// 119010                  shl     si, 1 ;~ 274D:0D4D
cs=0x274d;eip=0x000d4f; 	T(RCL(di, 1));	// 119011                  rcl     di, 1 ;~ 274D:0D4F
cs=0x274d;eip=0x000d51; 	T(SHL(si, 1));	// 119012                  shl     si, 1 ;~ 274D:0D51
cs=0x274d;eip=0x000d53; 	T(ADC(di, 0));	// 119013                  adc     di, 0 ;~ 274D:0D53
cs=0x274d;eip=0x000d56; 	X(word_4cdb2 = di;);	// 119014                  mov     ds:word_4CDB2, di ;~ 274D:0D56
cs=0x274d;eip=0x000d5a; 	X(POP(si));	// 119015                  pop     si ;~ 274D:0D5A
cs=0x274d;eip=0x000d5b; 	J(CALL(sub_37049,0));	// 119016                  call    sub_37049 ;~ 274D:0D5B
loc_3680e:
	// 7093 
cs=0x274d;eip=0x000d5e; 	X(LODS(*(raddr(es,si)),si,1));	// 119019                  lods    byte ptr es:[si] ;~ 274D:0D5E
cs=0x274d;eip=0x000d60; 	T(AND(ax, 0x1F));	// 119020                  and     ax, 1Fh ;~ 274D:0D60
cs=0x274d;eip=0x000d63; 	X(*(word_4a4e0) = ax;);	// 119021                  mov     word_4A4E0, ax ;~ 274D:0D63
cs=0x274d;eip=0x000d66; 	T(cx = ax;);	// 119022                  mov     cx, ax ;~ 274D:0D66
cs=0x274d;eip=0x000d68; 	T(SUB(ax, ax));	// 119023                  sub     ax, ax ;~ 274D:0D68
cs=0x274d;eip=0x000d6a; 	T(CMP(cx, 0x10));	// 119024                  cmp     cx, 10h ;~ 274D:0D6A
cs=0x274d;eip=0x000d6d; 	J(JLE(loc_36820));	// 119025                  jle     short loc_36820 ;~ 274D:0D6D
cs=0x274d;eip=0x000d6f; 	T(INC(ax));	// 119026                  inc     ax ;~ 274D:0D6F
loc_36820:
	// 7094 
cs=0x274d;eip=0x000d70; 	X(*(byte_4a4e4) = al;);	// 119029                  mov     byte_4A4E4, al ;~ 274D:0D70
cs=0x274d;eip=0x000d73; 	X(word_4a4e6 = 0x0FFFF;);	// 119030                  mov     word_4A4E6, 0FFFFh ;~ 274D:0D73
cs=0x274d;eip=0x000d79; 	X(word_4a4e8 = 0x0FFFF;);	// 119031                  mov     word_4A4E8, 0FFFFh ;~ 274D:0D79
cs=0x274d;eip=0x000d7f; 	T(OR(cx, cx));	// 119032                  or      cx, cx ;~ 274D:0D7F
cs=0x274d;eip=0x000d81; 	J(JZ(loc_36877));	// 119033                  jz      short loc_36877 ;~ 274D:0D81
cs=0x274d;eip=0x000d83; 	T(bx = 1;);	// 119034                  mov     bx, 1 ;~ 274D:0D83
cs=0x274d;eip=0x000d86; 	T(SUB(di, di));	// 119035                  sub     di, di ;~ 274D:0D86
loc_36838:
	// 7095 
cs=0x274d;eip=0x000d88; 	X(PUSH(bx));	// 119038                  push    bx ;~ 274D:0D88
cs=0x274d;eip=0x000d89; 	X(LODS(*(dw*)(raddr(es,si)),si,2));	// 119039                  lods    word ptr es:[si] ;~ 274D:0D89
cs=0x274d;eip=0x000d8b; 	X(IMUL1_2(word_4cdae));	// 119040                  imul    ds:word_4CDAE ;~ 274D:0D8B
cs=0x274d;eip=0x000d8f; 	T(bp = ax;);	// 119041                  mov     bp, ax ;~ 274D:0D8F
cs=0x274d;eip=0x000d91; 	T(bx = dx;);	// 119042                  mov     bx, dx ;~ 274D:0D91
cs=0x274d;eip=0x000d93; 	X(LODS(*(dw*)(raddr(es,si)),si,2));	// 119043                  lods    word ptr es:[si] ;~ 274D:0D93
cs=0x274d;eip=0x000d95; 	X(IMUL1_2(word_4cdb2));	// 119044                  imul    ds:word_4CDB2 ;~ 274D:0D95
cs=0x274d;eip=0x000d99; 	T(ADD(bp, ax));	// 119045                  add     bp, ax ;~ 274D:0D99
cs=0x274d;eip=0x000d9b; 	T(ADC(bx, dx));	// 119046                  adc     bx, dx ;~ 274D:0D9B
cs=0x274d;eip=0x000d9d; 	X(LODS(*(dw*)(raddr(es,si)),si,2));	// 119047                  lods    word ptr es:[si] ;~ 274D:0D9D
cs=0x274d;eip=0x000d9f; 	X(IMUL1_2(word_4cdb0));	// 119048                  imul    ds:word_4CDB0 ;~ 274D:0D9F
cs=0x274d;eip=0x000da3; 	T(ADD(bp, ax));	// 119049                  add     bp, ax ;~ 274D:0DA3
cs=0x274d;eip=0x000da5; 	T(ADC(bx, dx));	// 119050                  adc     bx, dx ;~ 274D:0DA5
cs=0x274d;eip=0x000da7; 	X(LODS(*(dw*)(raddr(es,si)),si,2));	// 119051                  lods    word ptr es:[si] ;~ 274D:0DA7
cs=0x274d;eip=0x000da9; 	T(CWD);	// 119052                  cwd ;~ 274D:0DA9
cs=0x274d;eip=0x000daa; 	T(CMP(bx, dx));	// 119053                  cmp     bx, dx ;~ 274D:0DAA
cs=0x274d;eip=0x000dac; 	X(POP(bx));	// 119054                  pop     bx ;~ 274D:0DAC
cs=0x274d;eip=0x000dad; 	J(JG(loc_3686f));	// 119055                  jg      short loc_3686F ;~ 274D:0DAD
cs=0x274d;eip=0x000daf; 	J(JL(loc_36865));	// 119056                  jl      short loc_36865 ;~ 274D:0DAF
cs=0x274d;eip=0x000db1; 	T(CMP(bp, ax));	// 119057                  cmp     bp, ax ;~ 274D:0DB1
cs=0x274d;eip=0x000db3; 	J(JNC(loc_3686f));	// 119058                  jnb     short loc_3686F ;~ 274D:0DB3
loc_36865:
	// 7096 
cs=0x274d;eip=0x000db5; 	X(XOR(word_4a4e6, bx));	// 119061                  xor     word_4A4E6, bx ;~ 274D:0DB5
cs=0x274d;eip=0x000db9; 	X(XOR(word_4a4e8, di));	// 119062                  xor     word_4A4E8, di ;~ 274D:0DB9
cs=0x274d;eip=0x000dbd; 	T(INC(ch));	// 119063                  inc     ch ;~ 274D:0DBD
loc_3686f:
	// 7097 
cs=0x274d;eip=0x000dbf; 	T(SHL(bx, 1));	// 119067                  shl     bx, 1 ;~ 274D:0DBF
cs=0x274d;eip=0x000dc1; 	T(RCL(di, 1));	// 119068                  rcl     di, 1 ;~ 274D:0DC1
cs=0x274d;eip=0x000dc3; 	T(DEC(cl));	// 119069                  dec     cl ;~ 274D:0DC3
cs=0x274d;eip=0x000dc5; 	J(JNZ(loc_36838));	// 119070                  jnz     short loc_36838 ;~ 274D:0DC5
loc_36877:
	// 7098 
cs=0x274d;eip=0x000dc7; 	T(al = *(db*)(word_4a4e0););	// 119073                  mov     al, byte ptr word_4A4E0 ;~ 274D:0DC7
cs=0x274d;eip=0x000dca; 	T(CMP(al, 4));	// 119074                  cmp     al, 4 ;~ 274D:0DCA
cs=0x274d;eip=0x000dcc; 	J(JL(locret_36886));	// 119075                  jl      short locret_36886 ;~ 274D:0DCC
cs=0x274d;eip=0x000dce; 	T(CMP(al, ch));	// 119076                  cmp     al, ch ;~ 274D:0DCE
cs=0x274d;eip=0x000dd0; 	J(JNZ(locret_36886));	// 119077                  jnz     short locret_36886 ;~ 274D:0DD0
cs=0x274d;eip=0x000dd2; 	X(INC(word_4cdb6));	// 119078                  inc     ds:word_4CDB6 ;~ 274D:0DD2
locret_36886:
	// 7099 
cs=0x274d;eip=0x000dd6; 	J(RETN(0));	// 119082                  retn ;~ 274D:0DD6

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_3677f: 	goto loc_3677f;
        case m2c::kloc_3680e: 	goto loc_3680e;
        case m2c::kloc_36820: 	goto loc_36820;
        case m2c::kloc_36838: 	goto loc_36838;
        case m2c::kloc_36865: 	goto loc_36865;
        case m2c::kloc_3686f: 	goto loc_3686f;
        case m2c::kloc_36877: 	goto loc_36877;
        case m2c::klocret_36886: 	goto locret_36886;
        case m2c::ksub_36764: 	goto sub_36764;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg35ab_dd7_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg35ab_dd7_proc:
    _begin:
cs=0x274d;eip=0x000dd7; 	J(RETN(0));	// 119086                  retn ;~ 274D:0DD7

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg35ab_dd7_proc: 	goto seg35ab_dd7_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36888(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36888:
    _begin:
cs=0x274d;eip=0x000dd8; 	X(PUSH(bp));	// 119093                  push    bp ;~ 274D:0DD8
cs=0x274d;eip=0x000dd9; 	X(PUSH(si));	// 119094                  push    si ;~ 274D:0DD9
cs=0x274d;eip=0x000dda; 	X(PUSH(di));	// 119095                  push    di ;~ 274D:0DDA
cs=0x274d;eip=0x000ddb; 	J(CALL(sub_368a4,0));	// 119096                  call    sub_368A4 ;~ 274D:0DDB
cs=0x274d;eip=0x000dde; 	X(POP(di));	// 119097                  pop     di ;~ 274D:0DDE
cs=0x274d;eip=0x000ddf; 	X(POP(si));	// 119098                  pop     si ;~ 274D:0DDF
cs=0x274d;eip=0x000de0; 	X(POP(bp));	// 119099                  pop     bp ;~ 274D:0DE0
cs=0x274d;eip=0x000de1; 	J(RETF(0));	// 119100                  retf ;~ 274D:0DE1

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_36888: 	goto sub_36888;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg35ab_de2_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg35ab_de2_proc:
    _begin:
cs=0x274d;eip=0x000de2; 	X(PUSH(bp));	// 119104                  push    bp ;~ 274D:0DE2
cs=0x274d;eip=0x000de3; 	X(PUSH(si));	// 119105                  push    si ;~ 274D:0DE3
cs=0x274d;eip=0x000de4; 	X(PUSH(di));	// 119106                  push    di ;~ 274D:0DE4
cs=0x274d;eip=0x000de5; 	T(LES(si, dword_4a46c));	// 119107                  les     si, dword_4A46C ;~ 274D:0DE5
cs=0x274d;eip=0x000de9; 	J(CALL(sub_36ba0,0));	// 119109                  call    sub_36BA0 ;~ 274D:0DE9
cs=0x274d;eip=0x000dec; 	X(*(dw*)(&dword_4a46c) = si;);	// 119110                  mov     word ptr dword_4A46C, si ;~ 274D:0DEC
cs=0x274d;eip=0x000df0; 	X(POP(di));	// 119111                  pop     di ;~ 274D:0DF0
cs=0x274d;eip=0x000df1; 	X(POP(si));	// 119112                  pop     si ;~ 274D:0DF1
cs=0x274d;eip=0x000df2; 	X(POP(bp));	// 119113                  pop     bp ;~ 274D:0DF2
cs=0x274d;eip=0x000df3; 	J(RETN(0));	// 119114                  retn ;~ 274D:0DF3

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg35ab_de2_proc: 	goto seg35ab_de2_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_368a4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_368a4:
    _begin:
cs=0x274d;eip=0x000df4; 	T(CMP(word_4a046, 0));	// 119121                  cmp     word_4A046, 0 ;~ 274D:0DF4
cs=0x274d;eip=0x000df9; 	J(JNZ(loc_368ac));	// 119122                  jnz     short loc_368AC ;~ 274D:0DF9
cs=0x274d;eip=0x000dfb; 	J(RETN(0));	// 119123                  retn ;~ 274D:0DFB
loc_368ac:
	// 7100 
cs=0x274d;eip=0x000dfc; 	T(bx = word_4a040;);	// 119127                  mov     bx, word_4A040 ;~ 274D:0DFC
cs=0x274d;eip=0x000e00; 	T(DEC(bx));	// 119128                  dec     bx ;~ 274D:0E00
cs=0x274d;eip=0x000e01; 	T(SHL(bx, 1));	// 119129                  shl     bx, 1 ;~ 274D:0E01
cs=0x274d;eip=0x000e03; 	T(di = bx;);	// 119130                  mov     di, bx ;~ 274D:0E03
cs=0x274d;eip=0x000e05; 	T(SHL(di, 1));	// 119131                  shl     di, 1 ;~ 274D:0E05
loc_368b7:
	// 7101 
cs=0x274d;eip=0x000e07; 	T(MOV(cx, *(dw*)(raddr(ds,bx-0x6AB4))));	// 119134                  mov     cx, [bx-6AB4h] ;~ 274D:0E07
cs=0x274d;eip=0x000e0b; 	T(ax = word_4a4a6;);	// 119135                  mov     ax, word_4A4A6 ;~ 274D:0E0B
cs=0x274d;eip=0x000e0e; 	T(IMUL1_2(cx));	// 119136                  imul    cx ;~ 274D:0E0E
cs=0x274d;eip=0x000e10; 	T(SHL(ax, 1));	// 119137                  shl     ax, 1 ;~ 274D:0E10
cs=0x274d;eip=0x000e12; 	T(RCL(dx, 1));	// 119138                  rcl     dx, 1 ;~ 274D:0E12
cs=0x274d;eip=0x000e14; 	X(MOV(*(dw*)(raddr(ds,di+0x2A88)), ax));	// 119139                  mov     [di+2A88h], ax ;~ 274D:0E14
cs=0x274d;eip=0x000e18; 	X(MOV(*(dw*)(raddr(ds,di+0x2A8A)), dx));	// 119140                  mov     [di+2A8Ah], dx ;~ 274D:0E18
cs=0x274d;eip=0x000e1c; 	T(ax = word_4a4a8;);	// 119141                  mov     ax, word_4A4A8 ;~ 274D:0E1C
cs=0x274d;eip=0x000e1f; 	T(IMUL1_2(cx));	// 119142                  imul    cx ;~ 274D:0E1F
cs=0x274d;eip=0x000e21; 	T(SHL(ax, 1));	// 119143                  shl     ax, 1 ;~ 274D:0E21
cs=0x274d;eip=0x000e23; 	T(RCL(dx, 1));	// 119144                  rcl     dx, 1 ;~ 274D:0E23
cs=0x274d;eip=0x000e25; 	X(MOV(*(dw*)(raddr(ds,di+0x2B08)), ax));	// 119145                  mov     [di+2B08h], ax ;~ 274D:0E25
cs=0x274d;eip=0x000e29; 	X(MOV(*(dw*)(raddr(ds,di+0x2B0A)), dx));	// 119146                  mov     [di+2B0Ah], dx ;~ 274D:0E29
cs=0x274d;eip=0x000e2d; 	T(ax = word_4a4aa;);	// 119147                  mov     ax, word_4A4AA ;~ 274D:0E2D
cs=0x274d;eip=0x000e30; 	T(IMUL1_2(cx));	// 119148                  imul    cx ;~ 274D:0E30
cs=0x274d;eip=0x000e32; 	T(SHL(ax, 1));	// 119149                  shl     ax, 1 ;~ 274D:0E32
cs=0x274d;eip=0x000e34; 	T(RCL(dx, 1));	// 119150                  rcl     dx, 1 ;~ 274D:0E34
cs=0x274d;eip=0x000e36; 	X(MOV(*(dw*)(raddr(ds,di+0x2B88)), ax));	// 119151                  mov     [di+2B88h], ax ;~ 274D:0E36
cs=0x274d;eip=0x000e3a; 	X(MOV(*(dw*)(raddr(ds,di+0x2B8A)), dx));	// 119152                  mov     [di+2B8Ah], dx ;~ 274D:0E3A
cs=0x274d;eip=0x000e3e; 	T(SUB(di, 4));	// 119153                  sub     di, 4 ;~ 274D:0E3E
cs=0x274d;eip=0x000e41; 	T(SUB(bx, 2));	// 119154                  sub     bx, 2 ;~ 274D:0E41
cs=0x274d;eip=0x000e44; 	J(JNS(loc_368b7));	// 119155                  jns     short loc_368B7 ;~ 274D:0E44
cs=0x274d;eip=0x000e46; 	T(bx = word_4a044;);	// 119156                  mov     bx, word_4A044 ;~ 274D:0E46
cs=0x274d;eip=0x000e4a; 	T(DEC(bx));	// 119157                  dec     bx ;~ 274D:0E4A
cs=0x274d;eip=0x000e4b; 	T(SHL(bx, 1));	// 119158                  shl     bx, 1 ;~ 274D:0E4B
cs=0x274d;eip=0x000e4d; 	T(di = bx;);	// 119159                  mov     di, bx ;~ 274D:0E4D
cs=0x274d;eip=0x000e4f; 	T(SHL(di, 1));	// 119160                  shl     di, 1 ;~ 274D:0E4F
loc_36901:
	// 7102 
cs=0x274d;eip=0x000e51; 	T(MOV(cx, *(dw*)(raddr(ds,bx-0x6A30))));	// 119163                  mov     cx, [bx-6A30h] ;~ 274D:0E51
cs=0x274d;eip=0x000e55; 	T(ax = word_4a4ac;);	// 119164                  mov     ax, word_4A4AC ;~ 274D:0E55
cs=0x274d;eip=0x000e58; 	T(IMUL1_2(cx));	// 119165                  imul    cx ;~ 274D:0E58
cs=0x274d;eip=0x000e5a; 	T(SHL(ax, 1));	// 119166                  shl     ax, 1 ;~ 274D:0E5A
cs=0x274d;eip=0x000e5c; 	T(RCL(dx, 1));	// 119167                  rcl     dx, 1 ;~ 274D:0E5C
cs=0x274d;eip=0x000e5e; 	X(MOV(*(dw*)(raddr(ds,di+0x2C08)), ax));	// 119168                  mov     [di+2C08h], ax ;~ 274D:0E5E
cs=0x274d;eip=0x000e62; 	X(MOV(*(dw*)(raddr(ds,di+0x2C0A)), dx));	// 119169                  mov     [di+2C0Ah], dx ;~ 274D:0E62
cs=0x274d;eip=0x000e66; 	T(ax = word_4a4ae;);	// 119170                  mov     ax, word_4A4AE ;~ 274D:0E66
cs=0x274d;eip=0x000e69; 	T(IMUL1_2(cx));	// 119171                  imul    cx ;~ 274D:0E69
cs=0x274d;eip=0x000e6b; 	T(SHL(ax, 1));	// 119172                  shl     ax, 1 ;~ 274D:0E6B
cs=0x274d;eip=0x000e6d; 	T(RCL(dx, 1));	// 119173                  rcl     dx, 1 ;~ 274D:0E6D
cs=0x274d;eip=0x000e6f; 	X(MOV(*(dw*)(raddr(ds,di+0x2C28)), ax));	// 119174                  mov     [di+2C28h], ax ;~ 274D:0E6F
cs=0x274d;eip=0x000e73; 	X(MOV(*(dw*)(raddr(ds,di+0x2C2A)), dx));	// 119175                  mov     [di+2C2Ah], dx ;~ 274D:0E73
cs=0x274d;eip=0x000e77; 	T(ax = word_4a4b0;);	// 119176                  mov     ax, word_4A4B0 ;~ 274D:0E77
cs=0x274d;eip=0x000e7a; 	T(IMUL1_2(cx));	// 119177                  imul    cx ;~ 274D:0E7A
cs=0x274d;eip=0x000e7c; 	T(SHL(ax, 1));	// 119178                  shl     ax, 1 ;~ 274D:0E7C
cs=0x274d;eip=0x000e7e; 	T(RCL(dx, 1));	// 119179                  rcl     dx, 1 ;~ 274D:0E7E
cs=0x274d;eip=0x000e80; 	X(MOV(*(dw*)(raddr(ds,di+0x2C48)), ax));	// 119180                  mov     [di+2C48h], ax ;~ 274D:0E80
cs=0x274d;eip=0x000e84; 	X(MOV(*(dw*)(raddr(ds,di+0x2C4A)), dx));	// 119181                  mov     [di+2C4Ah], dx ;~ 274D:0E84
cs=0x274d;eip=0x000e88; 	T(SUB(di, 4));	// 119182                  sub     di, 4 ;~ 274D:0E88
cs=0x274d;eip=0x000e8b; 	T(SUB(bx, 2));	// 119183                  sub     bx, 2 ;~ 274D:0E8B
cs=0x274d;eip=0x000e8e; 	J(JNS(loc_36901));	// 119184                  jns     short loc_36901 ;~ 274D:0E8E
cs=0x274d;eip=0x000e90; 	T(bx = word_4a042;);	// 119185                  mov     bx, word_4A042 ;~ 274D:0E90
cs=0x274d;eip=0x000e94; 	T(DEC(bx));	// 119186                  dec     bx ;~ 274D:0E94
cs=0x274d;eip=0x000e95; 	T(SHL(bx, 1));	// 119187                  shl     bx, 1 ;~ 274D:0E95
cs=0x274d;eip=0x000e97; 	T(di = bx;);	// 119188                  mov     di, bx ;~ 274D:0E97
cs=0x274d;eip=0x000e99; 	T(SHL(di, 1));	// 119189                  shl     di, 1 ;~ 274D:0E99
loc_3694b:
	// 7103 
cs=0x274d;eip=0x000e9b; 	T(MOV(cx, *(dw*)(raddr(ds,bx-0x6A72))));	// 119192                  mov     cx, [bx-6A72h] ;~ 274D:0E9B
cs=0x274d;eip=0x000e9f; 	T(ax = word_4a4b2;);	// 119193                  mov     ax, word_4A4B2 ;~ 274D:0E9F
cs=0x274d;eip=0x000ea2; 	T(IMUL1_2(cx));	// 119194                  imul    cx ;~ 274D:0EA2
cs=0x274d;eip=0x000ea4; 	T(SHL(ax, 1));	// 119195                  shl     ax, 1 ;~ 274D:0EA4
cs=0x274d;eip=0x000ea6; 	T(RCL(dx, 1));	// 119196                  rcl     dx, 1 ;~ 274D:0EA6
cs=0x274d;eip=0x000ea8; 	X(MOV(*(dw*)(raddr(ds,di+0x2C68)), ax));	// 119197                  mov     [di+2C68h], ax ;~ 274D:0EA8
cs=0x274d;eip=0x000eac; 	X(MOV(*(dw*)(raddr(ds,di+0x2C6A)), dx));	// 119198                  mov     [di+2C6Ah], dx ;~ 274D:0EAC
cs=0x274d;eip=0x000eb0; 	T(ax = word_4a4b4;);	// 119199                  mov     ax, word_4A4B4 ;~ 274D:0EB0
cs=0x274d;eip=0x000eb3; 	T(IMUL1_2(cx));	// 119200                  imul    cx ;~ 274D:0EB3
cs=0x274d;eip=0x000eb5; 	T(SHL(ax, 1));	// 119201                  shl     ax, 1 ;~ 274D:0EB5
cs=0x274d;eip=0x000eb7; 	T(RCL(dx, 1));	// 119202                  rcl     dx, 1 ;~ 274D:0EB7
cs=0x274d;eip=0x000eb9; 	X(MOV(*(dw*)(raddr(ds,di+0x2CE8)), ax));	// 119203                  mov     [di+2CE8h], ax ;~ 274D:0EB9
cs=0x274d;eip=0x000ebd; 	X(MOV(*(dw*)(raddr(ds,di+0x2CEA)), dx));	// 119204                  mov     [di+2CEAh], dx ;~ 274D:0EBD
cs=0x274d;eip=0x000ec1; 	T(ax = word_4a4b6;);	// 119205                  mov     ax, word_4A4B6 ;~ 274D:0EC1
cs=0x274d;eip=0x000ec4; 	T(IMUL1_2(cx));	// 119206                  imul    cx ;~ 274D:0EC4
cs=0x274d;eip=0x000ec6; 	T(SHL(ax, 1));	// 119207                  shl     ax, 1 ;~ 274D:0EC6
cs=0x274d;eip=0x000ec8; 	T(RCL(dx, 1));	// 119208                  rcl     dx, 1 ;~ 274D:0EC8
cs=0x274d;eip=0x000eca; 	X(MOV(*(dw*)(raddr(ds,di+0x2D68)), ax));	// 119209                  mov     [di+2D68h], ax ;~ 274D:0ECA
cs=0x274d;eip=0x000ece; 	X(MOV(*(dw*)(raddr(ds,di+0x2D6A)), dx));	// 119210                  mov     [di+2D6Ah], dx ;~ 274D:0ECE
cs=0x274d;eip=0x000ed2; 	T(SUB(di, 4));	// 119211                  sub     di, 4 ;~ 274D:0ED2
cs=0x274d;eip=0x000ed5; 	T(SUB(bx, 2));	// 119212                  sub     bx, 2 ;~ 274D:0ED5
cs=0x274d;eip=0x000ed8; 	J(JNS(loc_3694b));	// 119213                  jns     short loc_3694B ;~ 274D:0ED8
cs=0x274d;eip=0x000eda; 	T(si = word_4a046;);	// 119214                  mov     si, word_4A046 ;~ 274D:0EDA
cs=0x274d;eip=0x000ede; 	T(DEC(si));	// 119215                  dec     si ;~ 274D:0EDE
loc_3698f:
	// 7104 
cs=0x274d;eip=0x000edf; 	T(MOV(bx, *(dw*)(raddr(ds,si-0x79A2))));	// 119218                  mov     bx, [si-79A2h] ;~ 274D:0EDF
cs=0x274d;eip=0x000ee3; 	T(AND(bx, 0x0FF));	// 119219                  and     bx, 0FFh ;~ 274D:0EE3
cs=0x274d;eip=0x000ee7; 	T(SHL(bx, 1));	// 119220                  shl     bx, 1 ;~ 274D:0EE7
cs=0x274d;eip=0x000ee9; 	T(SHL(bx, 1));	// 119221                  shl     bx, 1 ;~ 274D:0EE9
cs=0x274d;eip=0x000eeb; 	T(MOV(di, *(dw*)(raddr(ds,si-0x7802))));	// 119222                  mov     di, [si-7802h] ;~ 274D:0EEB
cs=0x274d;eip=0x000eef; 	T(AND(di, 0x0FF));	// 119223                  and     di, 0FFh ;~ 274D:0EEF
cs=0x274d;eip=0x000ef3; 	T(SHL(di, 1));	// 119224                  shl     di, 1 ;~ 274D:0EF3
cs=0x274d;eip=0x000ef5; 	T(SHL(di, 1));	// 119225                  shl     di, 1 ;~ 274D:0EF5
cs=0x274d;eip=0x000ef7; 	T(MOV(bp, *(dw*)(raddr(ds,si-0x7748))));	// 119226                  mov     bp, [si-7748h] ;~ 274D:0EF7
cs=0x274d;eip=0x000efb; 	T(AND(bp, 0x0FF));	// 119227                  and     bp, 0FFh ;~ 274D:0EFB
cs=0x274d;eip=0x000eff; 	T(SHL(bp, 1));	// 119228                  shl     bp, 1 ;~ 274D:0EFF
cs=0x274d;eip=0x000f01; 	T(SHL(bp, 1));	// 119229                  shl     bp, 1 ;~ 274D:0F01
cs=0x274d;eip=0x000f03; 	T(LES(ax, *(dw*)(raddr(ds,bx+0x2A88))));	// 119230                  les     ax, [bx+2A88h] ;~ 274D:0F03
cs=0x274d;eip=0x000f07; 	T(dx = es;);	// 119232                  mov     dx, es ;~ 274D:0F07
cs=0x274d;eip=0x000f09; 	T(LES(cx, *(dw*)(raddr(ss,bp+0x2C08))));	// 119233                  les     cx, [bp+2C08h] ;~ 274D:0F09
cs=0x274d;eip=0x000f0d; 	T(ADD(ax, cx));	// 119234                  add     ax, cx ;~ 274D:0F0D
cs=0x274d;eip=0x000f0f; 	T(cx = es;);	// 119235                  mov     cx, es ;~ 274D:0F0F
cs=0x274d;eip=0x000f11; 	T(ADC(dx, cx));	// 119236                  adc     dx, cx ;~ 274D:0F11
cs=0x274d;eip=0x000f13; 	T(LES(cx, *(dw*)(raddr(ds,di+0x2C68))));	// 119237                  les     cx, [di+2C68h] ;~ 274D:0F13
cs=0x274d;eip=0x000f17; 	T(ADD(ax, cx));	// 119238                  add     ax, cx ;~ 274D:0F17
cs=0x274d;eip=0x000f19; 	T(cx = es;);	// 119239                  mov     cx, es ;~ 274D:0F19
cs=0x274d;eip=0x000f1b; 	T(ADC(dx, cx));	// 119240                  adc     dx, cx ;~ 274D:0F1B
cs=0x274d;eip=0x000f1d; 	T(SHL(si, 1));	// 119241                  shl     si, 1 ;~ 274D:0F1D
cs=0x274d;eip=0x000f1f; 	T(SHL(si, 1));	// 119242                  shl     si, 1 ;~ 274D:0F1F
cs=0x274d;eip=0x000f21; 	X(MOV(*(dw*)(raddr(ds,si+0x2380)), ax));	// 119243                  mov     [si+2380h], ax ;~ 274D:0F21
cs=0x274d;eip=0x000f25; 	X(MOV(*(dw*)(raddr(ds,si+0x2382)), dx));	// 119244                  mov     [si+2382h], dx ;~ 274D:0F25
cs=0x274d;eip=0x000f29; 	T(LES(ax, *(dw*)(raddr(ds,bx+0x2B08))));	// 119245                  les     ax, [bx+2B08h] ;~ 274D:0F29
cs=0x274d;eip=0x000f2d; 	T(dx = es;);	// 119246                  mov     dx, es ;~ 274D:0F2D
cs=0x274d;eip=0x000f2f; 	T(LES(cx, *(dw*)(raddr(ss,bp+0x2C28))));	// 119247                  les     cx, [bp+2C28h] ;~ 274D:0F2F
cs=0x274d;eip=0x000f33; 	T(ADD(ax, cx));	// 119248                  add     ax, cx ;~ 274D:0F33
cs=0x274d;eip=0x000f35; 	T(cx = es;);	// 119249                  mov     cx, es ;~ 274D:0F35
cs=0x274d;eip=0x000f37; 	T(ADC(dx, cx));	// 119250                  adc     dx, cx ;~ 274D:0F37
cs=0x274d;eip=0x000f39; 	T(LES(cx, *(dw*)(raddr(ds,di+0x2CE8))));	// 119251                  les     cx, [di+2CE8h] ;~ 274D:0F39
cs=0x274d;eip=0x000f3d; 	T(ADD(ax, cx));	// 119252                  add     ax, cx ;~ 274D:0F3D
cs=0x274d;eip=0x000f3f; 	T(cx = es;);	// 119253                  mov     cx, es ;~ 274D:0F3F
cs=0x274d;eip=0x000f41; 	T(ADC(dx, cx));	// 119254                  adc     dx, cx ;~ 274D:0F41
cs=0x274d;eip=0x000f43; 	X(MOV(*(dw*)(raddr(ds,si+0x25D8)), ax));	// 119255                  mov     [si+25D8h], ax ;~ 274D:0F43
cs=0x274d;eip=0x000f47; 	X(MOV(*(dw*)(raddr(ds,si+0x25DA)), dx));	// 119256                  mov     [si+25DAh], dx ;~ 274D:0F47
cs=0x274d;eip=0x000f4b; 	T(LES(ax, *(dw*)(raddr(ds,bx+0x2B88))));	// 119257                  les     ax, [bx+2B88h] ;~ 274D:0F4B
cs=0x274d;eip=0x000f4f; 	T(dx = es;);	// 119258                  mov     dx, es ;~ 274D:0F4F
cs=0x274d;eip=0x000f51; 	T(LES(cx, *(dw*)(raddr(ss,bp+0x2C48))));	// 119259                  les     cx, [bp+2C48h] ;~ 274D:0F51
cs=0x274d;eip=0x000f55; 	T(ADD(ax, cx));	// 119260                  add     ax, cx ;~ 274D:0F55
cs=0x274d;eip=0x000f57; 	T(cx = es;);	// 119261                  mov     cx, es ;~ 274D:0F57
cs=0x274d;eip=0x000f59; 	T(ADC(dx, cx));	// 119262                  adc     dx, cx ;~ 274D:0F59
cs=0x274d;eip=0x000f5b; 	T(LES(cx, *(dw*)(raddr(ds,di+0x2D68))));	// 119263                  les     cx, [di+2D68h] ;~ 274D:0F5B
cs=0x274d;eip=0x000f5f; 	T(ADD(ax, cx));	// 119264                  add     ax, cx ;~ 274D:0F5F
cs=0x274d;eip=0x000f61; 	T(cx = es;);	// 119265                  mov     cx, es ;~ 274D:0F61
cs=0x274d;eip=0x000f63; 	T(ADC(dx, cx));	// 119266                  adc     dx, cx ;~ 274D:0F63
cs=0x274d;eip=0x000f65; 	X(MOV(*(dw*)(raddr(ds,si+0x2830)), ax));	// 119267                  mov     [si+2830h], ax ;~ 274D:0F65
cs=0x274d;eip=0x000f69; 	X(MOV(*(dw*)(raddr(ds,si+0x2832)), dx));	// 119268                  mov     [si+2832h], dx ;~ 274D:0F69
cs=0x274d;eip=0x000f6d; 	T(SHR(si, 1));	// 119269                  shr     si, 1 ;~ 274D:0F6D
cs=0x274d;eip=0x000f6f; 	T(SHR(si, 1));	// 119270                  shr     si, 1 ;~ 274D:0F6F
cs=0x274d;eip=0x000f71; 	T(DEC(si));	// 119271                  dec     si ;~ 274D:0F71
cs=0x274d;eip=0x000f72; 	J(JS(locret_36a27));	// 119272                  js      short locret_36A27 ;~ 274D:0F72
cs=0x274d;eip=0x000f74; 	J(JMP(loc_3698f));	// 119273                  jmp     loc_3698F ;~ 274D:0F74
locret_36a27:
	// 7105 
cs=0x274d;eip=0x000f77; 	J(RETN(0));	// 119277                  retn ;~ 274D:0F77

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_368ac: 	goto loc_368ac;
        case m2c::kloc_368b7: 	goto loc_368b7;
        case m2c::kloc_36901: 	goto loc_36901;
        case m2c::kloc_3694b: 	goto loc_3694b;
        case m2c::kloc_3698f: 	goto loc_3698f;
        case m2c::klocret_36a27: 	goto locret_36a27;
        case m2c::ksub_368a4: 	goto sub_368a4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group74(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group74:
    _begin:
seg35ab_f78_proc:
	// 119283 
loc_36a28:
	// 7106 
cs=0x274d;eip=0x000f78; 	T(bl = al;);	// 119284                  mov     bl, al ;~ 274D:0F78
cs=0x274d;eip=0x000f7a; 	T(AND(bx, 0x7F));	// 119285                  and     bx, 7Fh ;~ 274D:0F7A
cs=0x274d;eip=0x000f7d; 	T(SHL(bx, 1));	// 119286                  shl     bx, 1 ;~ 274D:0F7D
cs=0x274d;eip=0x000f7f; 	T(SHL(bx, 1));	// 119287                  shl     bx, 1 ;~ 274D:0F7F
cs=0x274d;eip=0x000f81; 	X(word_4cdb9 = bx;);	// 119288                  mov     ds:word_4CDB9, bx ;~ 274D:0F81
cs=0x274d;eip=0x000f85; 	T(bx = 0x0FFFC;);	// 119289                  mov     bx, 0FFFCh ;~ 274D:0F85
loc_36a38:
	// 7107 
cs=0x274d;eip=0x000f88; 	T(ADD(bx, 4));	// 119293                  add     bx, 4 ;~ 274D:0F88
cs=0x274d;eip=0x000f8b; 	T(CMP(bx, word_4cdb9));	// 119294                  cmp     bx, ds:word_4CDB9 ;~ 274D:0F8B
cs=0x274d;eip=0x000f8f; 	J(JL(loc_36a42));	// 119295                  jl      short loc_36A42 ;~ 274D:0F8F
cs=0x274d;eip=0x000f91; 	J(RETN(0));	// 119296                  retn ;~ 274D:0F91
loc_36a42:
	// 7108 
cs=0x274d;eip=0x000f92; 	J(CALL(sub_37652,0));	// 119300                  call    sub_37652 ;~ 274D:0F92
cs=0x274d;eip=0x000f95; 	T(INC(si));	// 119301                  inc     si ;~ 274D:0F95
cs=0x274d;eip=0x000f96; 	T(OR(ax, ax));	// 119302                  or      ax, ax ;~ 274D:0F96
cs=0x274d;eip=0x000f98; 	J(JZ(loc_36a38));	// 119303                  jz      short loc_36A38 ;~ 274D:0F98
cs=0x274d;eip=0x000f9a; 	T(MOV(bp, *(dw*)(raddr(es,si-1))));	// 119304                  mov     bp, es:[si-1] ;~ 274D:0F9A
cs=0x274d;eip=0x000f9e; 	T(AND(bp, 0x0FF));	// 119305                  and     bp, 0FFh ;~ 274D:0F9E
cs=0x274d;eip=0x000fa2; 	T(MOV(al, *(raddr(ss,bp-0x7748))));	// 119306                  mov     al, [bp-7748h] ;~ 274D:0FA2
cs=0x274d;eip=0x000fa6; 	T(SUB(ah, ah));	// 119307                  sub     ah, ah ;~ 274D:0FA6
cs=0x274d;eip=0x000fa8; 	T(SHL(ax, 1));	// 119308                  shl     ax, 1 ;~ 274D:0FA8
cs=0x274d;eip=0x000faa; 	T(bp = ax;);	// 119309                  mov     bp, ax ;~ 274D:0FAA
cs=0x274d;eip=0x000fac; 	T(MOV(cx, *(dw*)(raddr(ss,bp-0x6A30))));	// 119310                  mov     cx, [bp-6A30h] ;~ 274D:0FAC
cs=0x274d;eip=0x000fb0; 	T(MOV(bp, *(dw*)(raddr(es,si-1))));	// 119311                  mov     bp, es:[si-1] ;~ 274D:0FB0
cs=0x274d;eip=0x000fb4; 	T(AND(bp, 0x0FF));	// 119312                  and     bp, 0FFh ;~ 274D:0FB4
cs=0x274d;eip=0x000fb8; 	T(MOV(al, *(raddr(ss,bp-0x7802))));	// 119313                  mov     al, [bp-7802h] ;~ 274D:0FB8
cs=0x274d;eip=0x000fbc; 	T(SUB(ah, ah));	// 119314                  sub     ah, ah ;~ 274D:0FBC
cs=0x274d;eip=0x000fbe; 	T(SHL(ax, 1));	// 119315                  shl     ax, 1 ;~ 274D:0FBE
cs=0x274d;eip=0x000fc0; 	T(bp = ax;);	// 119316                  mov     bp, ax ;~ 274D:0FC0
cs=0x274d;eip=0x000fc2; 	T(MOV(ax, *(dw*)(raddr(ss,bp-0x6A72))));	// 119317                  mov     ax, [bp-6A72h] ;~ 274D:0FC2
cs=0x274d;eip=0x000fc6; 	X(word_4cdbb = ax;);	// 119318                  mov     ds:word_4CDBB, ax ;~ 274D:0FC6
cs=0x274d;eip=0x000fc9; 	T(MOV(bp, *(dw*)(raddr(es,si-1))));	// 119319                  mov     bp, es:[si-1] ;~ 274D:0FC9
cs=0x274d;eip=0x000fcd; 	T(AND(bp, 0x0FF));	// 119320                  and     bp, 0FFh ;~ 274D:0FCD
cs=0x274d;eip=0x000fd1; 	T(MOV(al, *(raddr(ss,bp-0x79A2))));	// 119321                  mov     al, [bp-79A2h] ;~ 274D:0FD1
cs=0x274d;eip=0x000fd5; 	T(SUB(ah, ah));	// 119322                  sub     ah, ah ;~ 274D:0FD5
cs=0x274d;eip=0x000fd7; 	T(SHL(ax, 1));	// 119323                  shl     ax, 1 ;~ 274D:0FD7
cs=0x274d;eip=0x000fd9; 	T(bp = ax;);	// 119324                  mov     bp, ax ;~ 274D:0FD9
cs=0x274d;eip=0x000fdb; 	T(MOV(bp, *(dw*)(raddr(ss,bp-0x6AB4))));	// 119325                  mov     bp, [bp-6AB4h] ;~ 274D:0FDB
cs=0x274d;eip=0x000fdf; 	X(PUSH(si));	// 119326                  push    si ;~ 274D:0FDF
cs=0x274d;eip=0x000fe0; 	T(ax = word_4cdbb;);	// 119327                  mov     ax, ds:word_4CDBB ;~ 274D:0FE0
cs=0x274d;eip=0x000fe3; 	X(IMUL1_2(word_4a4d6));	// 119328                  imul    word_4A4D6 ;~ 274D:0FE3
cs=0x274d;eip=0x000fe7; 	T(di = dx;);	// 119329                  mov     di, dx ;~ 274D:0FE7
cs=0x274d;eip=0x000fe9; 	T(si = ax;);	// 119330                  mov     si, ax ;~ 274D:0FE9
cs=0x274d;eip=0x000feb; 	T(ax = word_4a4d0;);	// 119331                  mov     ax, word_4A4D0 ;~ 274D:0FEB
cs=0x274d;eip=0x000fee; 	T(IMUL1_2(cx));	// 119332                  imul    cx ;~ 274D:0FEE
cs=0x274d;eip=0x000ff0; 	T(ADD(si, ax));	// 119333                  add     si, ax ;~ 274D:0FF0
cs=0x274d;eip=0x000ff2; 	T(ADC(di, dx));	// 119334                  adc     di, dx ;~ 274D:0FF2
cs=0x274d;eip=0x000ff4; 	T(ax = word_4a4ca;);	// 119335                  mov     ax, word_4A4CA ;~ 274D:0FF4
cs=0x274d;eip=0x000ff7; 	T(IMUL1_2(bp));	// 119336                  imul    bp ;~ 274D:0FF7
cs=0x274d;eip=0x000ff9; 	T(ADD(si, ax));	// 119337                  add     si, ax ;~ 274D:0FF9
cs=0x274d;eip=0x000ffb; 	T(ADC(di, dx));	// 119338                  adc     di, dx ;~ 274D:0FFB
cs=0x274d;eip=0x000ffd; 	T(SHL(si, 1));	// 119339                  shl     si, 1 ;~ 274D:0FFD
cs=0x274d;eip=0x000fff; 	T(RCL(di, 1));	// 119340                  rcl     di, 1 ;~ 274D:0FFF
cs=0x274d;eip=0x001001; 	T(ADD(si, word_4a47c));	// 119341                  add     si, word_4A47C ;~ 274D:1001
cs=0x274d;eip=0x001005; 	T(ADC(di, word_4a47e));	// 119342                  adc     di, word_4A47E ;~ 274D:1005
cs=0x274d;eip=0x001009; 	X(MOV(*(dw*)(raddr(ds,bx+0x1A0C)), si));	// 119343                  mov     [bx+1A0Ch], si ;~ 274D:1009
cs=0x274d;eip=0x00100d; 	X(MOV(*(dw*)(raddr(ds,bx+0x1A0E)), di));	// 119344                  mov     [bx+1A0Eh], di ;~ 274D:100D
cs=0x274d;eip=0x001011; 	T(ax = word_4cdbb;);	// 119345                  mov     ax, ds:word_4CDBB ;~ 274D:1011
cs=0x274d;eip=0x001014; 	X(IMUL1_2(word_4a4d8));	// 119346                  imul    word_4A4D8 ;~ 274D:1014
cs=0x274d;eip=0x001018; 	T(di = dx;);	// 119347                  mov     di, dx ;~ 274D:1018
cs=0x274d;eip=0x00101a; 	T(si = ax;);	// 119348                  mov     si, ax ;~ 274D:101A
cs=0x274d;eip=0x00101c; 	T(ax = word_4a4d2;);	// 119349                  mov     ax, word_4A4D2 ;~ 274D:101C
cs=0x274d;eip=0x00101f; 	T(IMUL1_2(cx));	// 119350                  imul    cx ;~ 274D:101F
cs=0x274d;eip=0x001021; 	T(ADD(si, ax));	// 119351                  add     si, ax ;~ 274D:1021
cs=0x274d;eip=0x001023; 	T(ADC(di, dx));	// 119352                  adc     di, dx ;~ 274D:1023
cs=0x274d;eip=0x001025; 	T(ax = word_4a4cc;);	// 119353                  mov     ax, word_4A4CC ;~ 274D:1025
cs=0x274d;eip=0x001028; 	T(IMUL1_2(bp));	// 119354                  imul    bp ;~ 274D:1028
cs=0x274d;eip=0x00102a; 	T(ADD(si, ax));	// 119355                  add     si, ax ;~ 274D:102A
cs=0x274d;eip=0x00102c; 	T(ADC(di, dx));	// 119356                  adc     di, dx ;~ 274D:102C
cs=0x274d;eip=0x00102e; 	T(SHL(si, 1));	// 119357                  shl     si, 1 ;~ 274D:102E
cs=0x274d;eip=0x001030; 	T(RCL(di, 1));	// 119358                  rcl     di, 1 ;~ 274D:1030
cs=0x274d;eip=0x001032; 	T(ADD(si, word_4a480));	// 119359                  add     si, word_4A480 ;~ 274D:1032
cs=0x274d;eip=0x001036; 	T(ADC(di, word_4a482));	// 119360                  adc     di, word_4A482 ;~ 274D:1036
cs=0x274d;eip=0x00103a; 	X(MOV(*(dw*)(raddr(ds,bx+0x1BF0)), si));	// 119361                  mov     [bx+1BF0h], si ;~ 274D:103A
cs=0x274d;eip=0x00103e; 	X(MOV(*(dw*)(raddr(ds,bx+0x1BF2)), di));	// 119362                  mov     [bx+1BF2h], di ;~ 274D:103E
cs=0x274d;eip=0x001042; 	T(ax = word_4cdbb;);	// 119363                  mov     ax, ds:word_4CDBB ;~ 274D:1042
cs=0x274d;eip=0x001045; 	X(IMUL1_2(word_4a4da));	// 119364                  imul    word_4A4DA ;~ 274D:1045
cs=0x274d;eip=0x001049; 	T(di = dx;);	// 119365                  mov     di, dx ;~ 274D:1049
cs=0x274d;eip=0x00104b; 	T(si = ax;);	// 119366                  mov     si, ax ;~ 274D:104B
cs=0x274d;eip=0x00104d; 	T(ax = word_4a4d4;);	// 119367                  mov     ax, word_4A4D4 ;~ 274D:104D
cs=0x274d;eip=0x001050; 	T(IMUL1_2(cx));	// 119368                  imul    cx ;~ 274D:1050
cs=0x274d;eip=0x001052; 	T(ADD(si, ax));	// 119369                  add     si, ax ;~ 274D:1052
cs=0x274d;eip=0x001054; 	T(ADC(di, dx));	// 119370                  adc     di, dx ;~ 274D:1054
cs=0x274d;eip=0x001056; 	T(ax = word_4a4ce;);	// 119371                  mov     ax, word_4A4CE ;~ 274D:1056
cs=0x274d;eip=0x001059; 	T(IMUL1_2(bp));	// 119372                  imul    bp ;~ 274D:1059
cs=0x274d;eip=0x00105b; 	T(ADD(si, ax));	// 119373                  add     si, ax ;~ 274D:105B
cs=0x274d;eip=0x00105d; 	T(ADC(di, dx));	// 119374                  adc     di, dx ;~ 274D:105D
cs=0x274d;eip=0x00105f; 	T(SHL(si, 1));	// 119375                  shl     si, 1 ;~ 274D:105F
cs=0x274d;eip=0x001061; 	T(RCL(di, 1));	// 119376                  rcl     di, 1 ;~ 274D:1061
cs=0x274d;eip=0x001063; 	T(ADD(si, word_4a484));	// 119377                  add     si, word_4A484 ;~ 274D:1063
cs=0x274d;eip=0x001067; 	T(ADC(di, word_4a486));	// 119378                  adc     di, word_4A486 ;~ 274D:1067
cs=0x274d;eip=0x00106b; 	X(MOV(*(dw*)(raddr(ds,bx+0x1DD4)), si));	// 119379                  mov     [bx+1DD4h], si ;~ 274D:106B
cs=0x274d;eip=0x00106f; 	X(MOV(*(dw*)(raddr(ds,bx+0x1DD6)), di));	// 119380                  mov     [bx+1DD6h], di ;~ 274D:106F
cs=0x274d;eip=0x001073; 	J(CALL(sub_35b28,0));	// 119381                  call    sub_35B28 ;~ 274D:1073
cs=0x274d;eip=0x001076; 	X(POP(si));	// 119382                  pop     si ;~ 274D:1076
cs=0x274d;eip=0x001077; 	J(JMP(loc_36a38));	// 119383                  jmp     loc_36A38 ;~ 274D:1077
loc_36b2a:
	// 7109 
cs=0x274d;eip=0x00107a; 	J(JMP(loc_36a28));	// 119387                  jmp     loc_36A28 ;~ 274D:107A
loc_36b2d:
	// 7110 
cs=0x274d;eip=0x00107d; 	T(CMP(byte_4cdb8, 0));	// 119392                  cmp     ds:byte_4CDB8, 0 ;~ 274D:107D
cs=0x274d;eip=0x001082; 	J(JNZ(loc_36b2a));	// 119393                  jnz     short loc_36B2A ;~ 274D:1082
cs=0x274d;eip=0x001084; 	T(cl = al;);	// 119394                  mov     cl, al ;~ 274D:1084
cs=0x274d;eip=0x001086; 	T(AND(cx, 0x7F));	// 119395                  and     cx, 7Fh ;~ 274D:1086
cs=0x274d;eip=0x001089; 	T(SUB(bx, bx));	// 119396                  sub     bx, bx ;~ 274D:1089
loc_36b3b:
	// 7111 
cs=0x274d;eip=0x00108b; 	J(CALL(sub_37652,0));	// 119400                  call    sub_37652 ;~ 274D:108B
cs=0x274d;eip=0x00108e; 	J(JNZ(loc_36b47));	// 119401                  jnz     short loc_36B47 ;~ 274D:108E
cs=0x274d;eip=0x001090; 	T(INC(si));	// 119402                  inc     si ;~ 274D:1090
cs=0x274d;eip=0x001091; 	T(ADD(bx, 4));	// 119403                  add     bx, 4 ;~ 274D:1091
cs=0x274d;eip=0x001094; 	J(LOOP(loc_36b3b));	// 119404                  loop    loc_36B3B ;~ 274D:1094
cs=0x274d;eip=0x001096; 	J(RETN(0));	// 119405                  retn ;~ 274D:1096
loc_36b47:
	// 7112 
cs=0x274d;eip=0x001097; 	X(LODS(*(raddr(es,si)),si,1));	// 119409                  lods    byte ptr es:[si] ;~ 274D:1097
cs=0x274d;eip=0x001099; 	T(SUB(ah, ah));	// 119410                  sub     ah, ah ;~ 274D:1099
cs=0x274d;eip=0x00109b; 	T(SHL(ax, 1));	// 119411                  shl     ax, 1 ;~ 274D:109B
cs=0x274d;eip=0x00109d; 	T(SHL(ax, 1));	// 119412                  shl     ax, 1 ;~ 274D:109D
cs=0x274d;eip=0x00109f; 	T(di = ax;);	// 119413                  mov     di, ax ;~ 274D:109F
cs=0x274d;eip=0x0010a1; 	T(ax = word_4a47c;);	// 119414                  mov     ax, word_4A47C ;~ 274D:10A1
cs=0x274d;eip=0x0010a4; 	T(ADD(ax, *(dw*)(raddr(ds,di+0x2380))));	// 119415                  add     ax, [di+2380h] ;~ 274D:10A4
cs=0x274d;eip=0x0010a8; 	X(MOV(*(dw*)(raddr(ds,bx+0x1A0C)), ax));	// 119416                  mov     [bx+1A0Ch], ax ;~ 274D:10A8
cs=0x274d;eip=0x0010ac; 	T(ax = word_4a47e;);	// 119417                  mov     ax, word_4A47E ;~ 274D:10AC
cs=0x274d;eip=0x0010af; 	T(ADC(ax, *(dw*)(raddr(ds,di+0x2382))));	// 119418                  adc     ax, [di+2382h] ;~ 274D:10AF
cs=0x274d;eip=0x0010b3; 	X(MOV(*(dw*)(raddr(ds,bx+0x1A0E)), ax));	// 119419                  mov     [bx+1A0Eh], ax ;~ 274D:10B3
cs=0x274d;eip=0x0010b7; 	T(ax = word_4a480;);	// 119420                  mov     ax, word_4A480 ;~ 274D:10B7
cs=0x274d;eip=0x0010ba; 	T(ADD(ax, *(dw*)(raddr(ds,di+0x25D8))));	// 119421                  add     ax, [di+25D8h] ;~ 274D:10BA
cs=0x274d;eip=0x0010be; 	X(MOV(*(dw*)(raddr(ds,bx+0x1BF0)), ax));	// 119422                  mov     [bx+1BF0h], ax ;~ 274D:10BE
cs=0x274d;eip=0x0010c2; 	T(ax = word_4a482;);	// 119423                  mov     ax, word_4A482 ;~ 274D:10C2
cs=0x274d;eip=0x0010c5; 	T(ADC(ax, *(dw*)(raddr(ds,di+0x25DA))));	// 119424                  adc     ax, [di+25DAh] ;~ 274D:10C5
cs=0x274d;eip=0x0010c9; 	X(MOV(*(dw*)(raddr(ds,bx+0x1BF2)), ax));	// 119425                  mov     [bx+1BF2h], ax ;~ 274D:10C9
cs=0x274d;eip=0x0010cd; 	T(ax = word_4a484;);	// 119426                  mov     ax, word_4A484 ;~ 274D:10CD
cs=0x274d;eip=0x0010d0; 	T(ADD(ax, *(dw*)(raddr(ds,di+0x2830))));	// 119427                  add     ax, [di+2830h] ;~ 274D:10D0
cs=0x274d;eip=0x0010d4; 	X(MOV(*(dw*)(raddr(ds,bx+0x1DD4)), ax));	// 119428                  mov     [bx+1DD4h], ax ;~ 274D:10D4
cs=0x274d;eip=0x0010d8; 	T(ax = word_4a486;);	// 119429                  mov     ax, word_4A486 ;~ 274D:10D8
cs=0x274d;eip=0x0010db; 	T(ADC(ax, *(dw*)(raddr(ds,di+0x2832))));	// 119430                  adc     ax, [di+2832h] ;~ 274D:10DB
cs=0x274d;eip=0x0010df; 	X(MOV(*(dw*)(raddr(ds,bx+0x1DD6)), ax));	// 119431                  mov     [bx+1DD6h], ax ;~ 274D:10DF
cs=0x274d;eip=0x0010e3; 	X(PUSH(cx));	// 119432                  push    cx ;~ 274D:10E3
cs=0x274d;eip=0x0010e4; 	X(PUSH(si));	// 119433                  push    si ;~ 274D:10E4
cs=0x274d;eip=0x0010e5; 	J(CALL(sub_35b28,0));	// 119434                  call    sub_35B28 ;~ 274D:10E5
cs=0x274d;eip=0x0010e8; 	X(POP(si));	// 119435                  pop     si ;~ 274D:10E8
cs=0x274d;eip=0x0010e9; 	X(POP(cx));	// 119436                  pop     cx ;~ 274D:10E9
cs=0x274d;eip=0x0010ea; 	T(ADD(bx, 4));	// 119437                  add     bx, 4 ;~ 274D:10EA
cs=0x274d;eip=0x0010ed; 	J(LOOP(loc_36b3b));	// 119438                  loop    loc_36B3B ;~ 274D:10ED
cs=0x274d;eip=0x0010ef; 	J(RETN(0));	// 119439                  retn ;~ 274D:10EF
sub_36ba0:
	// 119445 
cs=0x274d;eip=0x0010f0; 	X(LODS(*(raddr(es,si)),si,1));	// 119450                  lods    byte ptr es:[si] ;~ 274D:10F0
cs=0x274d;eip=0x0010f2; 	T(TEST(al, 0x80));	// 119451                  test    al, 80h ;~ 274D:10F2
cs=0x274d;eip=0x0010f4; 	J(JNZ(loc_36b2d));	// 119452                  jnz     short loc_36B2D ;~ 274D:10F4
cs=0x274d;eip=0x0010f6; 	T(TEST(al, 0x7F));	// 119453                  test    al, 7Fh ;~ 274D:10F6
cs=0x274d;eip=0x0010f8; 	J(JZ(locret_36bc3));	// 119454                  jz      short locret_36BC3 ;~ 274D:10F8
cs=0x274d;eip=0x0010fa; 	T(bl = al;);	// 119455                  mov     bl, al ;~ 274D:10FA
cs=0x274d;eip=0x0010fc; 	T(AND(bx, 0x7F));	// 119456                  and     bx, 7Fh ;~ 274D:10FC
cs=0x274d;eip=0x0010ff; 	T(SHL(bx, 1));	// 119457                  shl     bx, 1 ;~ 274D:10FF
cs=0x274d;eip=0x001101; 	T(SHL(bx, 1));	// 119458                  shl     bx, 1 ;~ 274D:1101
cs=0x274d;eip=0x001103; 	X(word_4cdb9 = bx;);	// 119459                  mov     ds:word_4CDB9, bx ;~ 274D:1103
cs=0x274d;eip=0x001107; 	T(bx = 0x0FFFC;);	// 119460                  mov     bx, 0FFFCh ;~ 274D:1107
loc_36bba:
	// 7113 
cs=0x274d;eip=0x00110a; 	T(ADD(bx, 4));	// 119464                  add     bx, 4 ;~ 274D:110A
cs=0x274d;eip=0x00110d; 	T(CMP(bx, word_4cdb9));	// 119465                  cmp     bx, ds:word_4CDB9 ;~ 274D:110D
cs=0x274d;eip=0x001111; 	J(JL(loc_36bc4));	// 119466                  jl      short loc_36BC4 ;~ 274D:1111
locret_36bc3:
	// 7114 
cs=0x274d;eip=0x001113; 	J(RETN(0));	// 119469                  retn ;~ 274D:1113
loc_36bc4:
	// 7115 
cs=0x274d;eip=0x001114; 	J(CALL(sub_37652,0));	// 119473                  call    sub_37652 ;~ 274D:1114
cs=0x274d;eip=0x001117; 	T(ADD(si, 6));	// 119474                  add     si, 6 ;~ 274D:1117
cs=0x274d;eip=0x00111a; 	T(OR(ax, ax));	// 119475                  or      ax, ax ;~ 274D:111A
cs=0x274d;eip=0x00111c; 	J(JZ(loc_36bba));	// 119476                  jz      short loc_36BBA ;~ 274D:111C
cs=0x274d;eip=0x00111e; 	T(MOV(bp, *(dw*)(raddr(es,si-6))));	// 119477                  mov     bp, es:[si-6] ;~ 274D:111E
cs=0x274d;eip=0x001122; 	T(MOV(cx, *(dw*)(raddr(es,si-2))));	// 119478                  mov     cx, es:[si-2] ;~ 274D:1122
cs=0x274d;eip=0x001126; 	T(MOV(ax, *(dw*)(raddr(es,si-4))));	// 119479                  mov     ax, es:[si-4] ;~ 274D:1126
cs=0x274d;eip=0x00112a; 	X(word_4cdbb = ax;);	// 119480                  mov     ds:word_4CDBB, ax ;~ 274D:112A
cs=0x274d;eip=0x00112d; 	X(PUSH(si));	// 119481                  push    si ;~ 274D:112D
cs=0x274d;eip=0x00112e; 	X(IMUL1_2(word_4a4d6));	// 119482                  imul    word_4A4D6 ;~ 274D:112E
cs=0x274d;eip=0x001132; 	T(di = dx;);	// 119483                  mov     di, dx ;~ 274D:1132
cs=0x274d;eip=0x001134; 	T(si = ax;);	// 119484                  mov     si, ax ;~ 274D:1134
cs=0x274d;eip=0x001136; 	T(ax = word_4a4d0;);	// 119485                  mov     ax, word_4A4D0 ;~ 274D:1136
cs=0x274d;eip=0x001139; 	T(IMUL1_2(cx));	// 119486                  imul    cx ;~ 274D:1139
cs=0x274d;eip=0x00113b; 	T(ADD(si, ax));	// 119487                  add     si, ax ;~ 274D:113B
cs=0x274d;eip=0x00113d; 	T(ADC(di, dx));	// 119488                  adc     di, dx ;~ 274D:113D
cs=0x274d;eip=0x00113f; 	T(ax = word_4a4ca;);	// 119489                  mov     ax, word_4A4CA ;~ 274D:113F
cs=0x274d;eip=0x001142; 	T(IMUL1_2(bp));	// 119490                  imul    bp ;~ 274D:1142
cs=0x274d;eip=0x001144; 	T(ADD(si, ax));	// 119491                  add     si, ax ;~ 274D:1144
cs=0x274d;eip=0x001146; 	T(ADC(di, dx));	// 119492                  adc     di, dx ;~ 274D:1146
cs=0x274d;eip=0x001148; 	T(SHL(si, 1));	// 119493                  shl     si, 1 ;~ 274D:1148
cs=0x274d;eip=0x00114a; 	T(RCL(di, 1));	// 119494                  rcl     di, 1 ;~ 274D:114A
cs=0x274d;eip=0x00114c; 	T(ADD(si, word_4a47c));	// 119495                  add     si, word_4A47C ;~ 274D:114C
cs=0x274d;eip=0x001150; 	T(ADC(di, word_4a47e));	// 119496                  adc     di, word_4A47E ;~ 274D:1150
cs=0x274d;eip=0x001154; 	X(MOV(*(dw*)(raddr(ds,bx+0x1A0C)), si));	// 119497                  mov     [bx+1A0Ch], si ;~ 274D:1154
cs=0x274d;eip=0x001158; 	X(MOV(*(dw*)(raddr(ds,bx+0x1A0E)), di));	// 119498                  mov     [bx+1A0Eh], di ;~ 274D:1158
cs=0x274d;eip=0x00115c; 	T(ax = word_4cdbb;);	// 119499                  mov     ax, ds:word_4CDBB ;~ 274D:115C
cs=0x274d;eip=0x00115f; 	X(IMUL1_2(word_4a4d8));	// 119500                  imul    word_4A4D8 ;~ 274D:115F
cs=0x274d;eip=0x001163; 	T(di = dx;);	// 119501                  mov     di, dx ;~ 274D:1163
cs=0x274d;eip=0x001165; 	T(si = ax;);	// 119502                  mov     si, ax ;~ 274D:1165
cs=0x274d;eip=0x001167; 	T(ax = word_4a4d2;);	// 119503                  mov     ax, word_4A4D2 ;~ 274D:1167
cs=0x274d;eip=0x00116a; 	T(IMUL1_2(cx));	// 119504                  imul    cx ;~ 274D:116A
cs=0x274d;eip=0x00116c; 	T(ADD(si, ax));	// 119505                  add     si, ax ;~ 274D:116C
cs=0x274d;eip=0x00116e; 	T(ADC(di, dx));	// 119506                  adc     di, dx ;~ 274D:116E
cs=0x274d;eip=0x001170; 	T(ax = word_4a4cc;);	// 119507                  mov     ax, word_4A4CC ;~ 274D:1170
cs=0x274d;eip=0x001173; 	T(IMUL1_2(bp));	// 119508                  imul    bp ;~ 274D:1173
cs=0x274d;eip=0x001175; 	T(ADD(si, ax));	// 119509                  add     si, ax ;~ 274D:1175
cs=0x274d;eip=0x001177; 	T(ADC(di, dx));	// 119510                  adc     di, dx ;~ 274D:1177
cs=0x274d;eip=0x001179; 	T(SHL(si, 1));	// 119511                  shl     si, 1 ;~ 274D:1179
cs=0x274d;eip=0x00117b; 	T(RCL(di, 1));	// 119512                  rcl     di, 1 ;~ 274D:117B
cs=0x274d;eip=0x00117d; 	T(ADD(si, word_4a480));	// 119513                  add     si, word_4A480 ;~ 274D:117D
cs=0x274d;eip=0x001181; 	T(ADC(di, word_4a482));	// 119514                  adc     di, word_4A482 ;~ 274D:1181
cs=0x274d;eip=0x001185; 	X(MOV(*(dw*)(raddr(ds,bx+0x1BF0)), si));	// 119515                  mov     [bx+1BF0h], si ;~ 274D:1185
cs=0x274d;eip=0x001189; 	X(MOV(*(dw*)(raddr(ds,bx+0x1BF2)), di));	// 119516                  mov     [bx+1BF2h], di ;~ 274D:1189
cs=0x274d;eip=0x00118d; 	T(ax = word_4cdbb;);	// 119517                  mov     ax, ds:word_4CDBB ;~ 274D:118D
cs=0x274d;eip=0x001190; 	X(IMUL1_2(word_4a4da));	// 119518                  imul    word_4A4DA ;~ 274D:1190
cs=0x274d;eip=0x001194; 	T(di = dx;);	// 119519                  mov     di, dx ;~ 274D:1194
cs=0x274d;eip=0x001196; 	T(si = ax;);	// 119520                  mov     si, ax ;~ 274D:1196
cs=0x274d;eip=0x001198; 	T(ax = word_4a4d4;);	// 119521                  mov     ax, word_4A4D4 ;~ 274D:1198
cs=0x274d;eip=0x00119b; 	T(IMUL1_2(cx));	// 119522                  imul    cx ;~ 274D:119B
cs=0x274d;eip=0x00119d; 	T(ADD(si, ax));	// 119523                  add     si, ax ;~ 274D:119D
cs=0x274d;eip=0x00119f; 	T(ADC(di, dx));	// 119524                  adc     di, dx ;~ 274D:119F
cs=0x274d;eip=0x0011a1; 	T(ax = word_4a4ce;);	// 119525                  mov     ax, word_4A4CE ;~ 274D:11A1
cs=0x274d;eip=0x0011a4; 	T(IMUL1_2(bp));	// 119526                  imul    bp ;~ 274D:11A4
cs=0x274d;eip=0x0011a6; 	T(ADD(si, ax));	// 119527                  add     si, ax ;~ 274D:11A6
cs=0x274d;eip=0x0011a8; 	T(ADC(di, dx));	// 119528                  adc     di, dx ;~ 274D:11A8
cs=0x274d;eip=0x0011aa; 	T(SHL(si, 1));	// 119529                  shl     si, 1 ;~ 274D:11AA
cs=0x274d;eip=0x0011ac; 	T(RCL(di, 1));	// 119530                  rcl     di, 1 ;~ 274D:11AC
cs=0x274d;eip=0x0011ae; 	T(ADD(si, word_4a484));	// 119531                  add     si, word_4A484 ;~ 274D:11AE
cs=0x274d;eip=0x0011b2; 	T(ADC(di, word_4a486));	// 119532                  adc     di, word_4A486 ;~ 274D:11B2
cs=0x274d;eip=0x0011b6; 	X(MOV(*(dw*)(raddr(ds,bx+0x1DD4)), si));	// 119533                  mov     [bx+1DD4h], si ;~ 274D:11B6
cs=0x274d;eip=0x0011ba; 	X(MOV(*(dw*)(raddr(ds,bx+0x1DD6)), di));	// 119534                  mov     [bx+1DD6h], di ;~ 274D:11BA
cs=0x274d;eip=0x0011be; 	J(CALL(sub_35b28,0));	// 119535                  call    sub_35B28 ;~ 274D:11BE
cs=0x274d;eip=0x0011c1; 	X(POP(si));	// 119536                  pop     si ;~ 274D:11C1
cs=0x274d;eip=0x0011c2; 	J(JMP(loc_36bba));	// 119537                  jmp     loc_36BBA ;~ 274D:11C2

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_36a28: 	goto loc_36a28;
        case m2c::kloc_36a38: 	goto loc_36a38;
        case m2c::kloc_36a42: 	goto loc_36a42;
        case m2c::kloc_36b2a: 	goto loc_36b2a;
        case m2c::kloc_36b2d: 	goto loc_36b2d;
        case m2c::kloc_36b3b: 	goto loc_36b3b;
        case m2c::kloc_36b47: 	goto loc_36b47;
        case m2c::kloc_36bba: 	goto loc_36bba;
        case m2c::kloc_36bc4: 	goto loc_36bc4;
        case m2c::klocret_36bc3: 	goto locret_36bc3;
        case m2c::ksub_36ba0: 	goto sub_36ba0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36c76(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36c76:
    _begin:
cs=0x274d;eip=0x0011c6; 	X(PUSH(bp));	// 119547                  push    bp ;~ 274D:11C6
cs=0x274d;eip=0x0011c7; 	X(PUSH(si));	// 119548                  push    si ;~ 274D:11C7
cs=0x274d;eip=0x0011c8; 	X(PUSH(di));	// 119549                  push    di ;~ 274D:11C8
cs=0x274d;eip=0x0011c9; 	T(LES(si, dword_4a46c));	// 119550                  les     si, dword_4A46C ;~ 274D:11C9
cs=0x274d;eip=0x0011cd; 	J(CALL(sub_36c88,0));	// 119551                  call    sub_36C88 ;~ 274D:11CD
cs=0x274d;eip=0x0011d0; 	X(*(dw*)(&dword_4a46c) = si;);	// 119552                  mov     word ptr dword_4A46C, si ;~ 274D:11D0
cs=0x274d;eip=0x0011d4; 	X(POP(di));	// 119553                  pop     di ;~ 274D:11D4
cs=0x274d;eip=0x0011d5; 	X(POP(si));	// 119554                  pop     si ;~ 274D:11D5
cs=0x274d;eip=0x0011d6; 	X(POP(bp));	// 119555                  pop     bp ;~ 274D:11D6
cs=0x274d;eip=0x0011d7; 	J(RETF(0));	// 119556                  retf ;~ 274D:11D7

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_36c76: 	goto sub_36c76;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36c88(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36c88:
    _begin:
cs=0x274d;eip=0x0011d8; 	T(SUB(ah, ah));	// 119565                  sub     ah, ah ;~ 274D:11D8
cs=0x274d;eip=0x0011da; 	X(LODS(*(raddr(es,si)),si,1));	// 119566                  lods    byte ptr es:[si] ;~ 274D:11DA
cs=0x274d;eip=0x0011dc; 	T(OR(ax, ax));	// 119567                  or      ax, ax ;~ 274D:11DC
cs=0x274d;eip=0x0011de; 	J(JZ(locret_36ca5));	// 119568                  jz      short locret_36CA5 ;~ 274D:11DE
cs=0x274d;eip=0x0011e0; 	T(cx = ax;);	// 119569                  mov     cx, ax ;~ 274D:11E0
cs=0x274d;eip=0x0011e2; 	T(SUB(di, di));	// 119570                  sub     di, di ;~ 274D:11E2
cs=0x274d;eip=0x0011e4; 	T(ADD(di, 0x328E));	// 119571                  add     di, 328Eh ;~ 274D:11E4
loc_36c98:
	// 7116 
cs=0x274d;eip=0x0011e8; 	J(CALL(sub_37652,0));	// 119575                  call    sub_37652 ;~ 274D:11E8
cs=0x274d;eip=0x0011eb; 	J(JNZ(loc_36ca6));	// 119576                  jnz     short loc_36CA6 ;~ 274D:11EB
cs=0x274d;eip=0x0011ed; 	T(ADD(si, 2));	// 119577                  add     si, 2 ;~ 274D:11ED
cs=0x274d;eip=0x0011f0; 	T(ADD(di, 0x1A));	// 119578                  add     di, 1Ah ;~ 274D:11F0
cs=0x274d;eip=0x0011f3; 	J(LOOP(loc_36c98));	// 119579                  loop    loc_36C98 ;~ 274D:11F3
locret_36ca5:
	// 7117 
cs=0x274d;eip=0x0011f5; 	J(RETN(0));	// 119582                  retn ;~ 274D:11F5
loc_36ca6:
	// 7118 
cs=0x274d;eip=0x0011f6; 	T(SUB(ah, ah));	// 119586                  sub     ah, ah ;~ 274D:11F6
cs=0x274d;eip=0x0011f8; 	X(LODS(*(raddr(es,si)),si,1));	// 119587                  lods    byte ptr es:[si] ;~ 274D:11F8
cs=0x274d;eip=0x0011fa; 	T(bx = ax;);	// 119588                  mov     bx, ax ;~ 274D:11FA
cs=0x274d;eip=0x0011fc; 	T(SHL(bx, 1));	// 119589                  shl     bx, 1 ;~ 274D:11FC
cs=0x274d;eip=0x0011fe; 	T(SHL(bx, 1));	// 119590                  shl     bx, 1 ;~ 274D:11FE
cs=0x274d;eip=0x001200; 	X(LODS(*(raddr(es,si)),si,1));	// 119591                  lods    byte ptr es:[si] ;~ 274D:1200
cs=0x274d;eip=0x001202; 	T(bp = ax;);	// 119592                  mov     bp, ax ;~ 274D:1202
cs=0x274d;eip=0x001204; 	T(SHL(bp, 1));	// 119593                  shl     bp, 1 ;~ 274D:1204
cs=0x274d;eip=0x001206; 	T(SHL(bp, 1));	// 119594                  shl     bp, 1 ;~ 274D:1206
cs=0x274d;eip=0x001208; 	X(MOV(*(raddr(ds,di+0x18)), 0));	// 119595                  mov     byte ptr [di+18h], 0 ;~ 274D:1208
cs=0x274d;eip=0x00120c; 	T(CMP(*(dw*)(raddr(ds,bx+0x1DD6)), 1));	// 119596                  cmp     word ptr [bx+1DD6h], 1 ;~ 274D:120C
cs=0x274d;eip=0x001211; 	J(JL(loc_36cf0));	// 119597                  jl      short loc_36CF0 ;~ 274D:1211
cs=0x274d;eip=0x001213; 	T(CMP(*(dw*)(raddr(ss,bp+0x1DD6)), 1));	// 119598                  cmp     word ptr [bp+1DD6h], 1 ;~ 274D:1213
cs=0x274d;eip=0x001218; 	J(JL(loc_36ce8));	// 119599                  jl      short loc_36CE8 ;~ 274D:1218
cs=0x274d;eip=0x00121a; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1FB8))));	// 119600                  mov     ax, [bx+1FB8h] ;~ 274D:121A
cs=0x274d;eip=0x00121e; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 119601                  mov     [di], ax ;~ 274D:121E
cs=0x274d;eip=0x001220; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1FBA))));	// 119602                  mov     ax, [bx+1FBAh] ;~ 274D:1220
cs=0x274d;eip=0x001224; 	X(MOV(*(dw*)(raddr(ds,di+2)), ax));	// 119603                  mov     [di+2], ax ;~ 274D:1224
cs=0x274d;eip=0x001227; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x219C))));	// 119604                  mov     ax, [bx+219Ch] ;~ 274D:1227
cs=0x274d;eip=0x00122b; 	X(MOV(*(dw*)(raddr(ds,di+4)), ax));	// 119605                  mov     [di+4], ax ;~ 274D:122B
cs=0x274d;eip=0x00122e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x219E))));	// 119606                  mov     ax, [bx+219Eh] ;~ 274D:122E
cs=0x274d;eip=0x001232; 	X(MOV(*(dw*)(raddr(ds,di+6)), ax));	// 119607                  mov     [di+6], ax ;~ 274D:1232
cs=0x274d;eip=0x001235; 	J(JMP(loc_36d01));	// 119608                  jmp     short loc_36D01 ;~ 274D:1235
loc_36ce8:
	// 7119 
cs=0x274d;eip=0x001238; 	T(XCHG(bp, bx));	// 119614                  xchg    bp, bx ;~ 274D:1238
cs=0x274d;eip=0x00123a; 	J(CALL(sub_36d32,0));	// 119615                  call    sub_36D32 ;~ 274D:123A
cs=0x274d;eip=0x00123d; 	J(JMP(loc_36d01));	// 119616                  jmp     short loc_36D01 ;~ 274D:123D
loc_36cf0:
	// 7120 
cs=0x274d;eip=0x001240; 	T(CMP(*(dw*)(raddr(ss,bp+0x1DD6)), 1));	// 119622                  cmp     word ptr [bp+1DD6h], 1 ;~ 274D:1240
cs=0x274d;eip=0x001245; 	J(JGE(loc_36cfe));	// 119623                  jge     short loc_36CFE ;~ 274D:1245
cs=0x274d;eip=0x001247; 	X(OR(*(raddr(ds,di+0x18)), 0x80));	// 119624                  or      byte ptr [di+18h], 80h ;~ 274D:1247
cs=0x274d;eip=0x00124b; 	J(JMP(loc_36d28));	// 119625                  jmp     short loc_36D28 ;~ 274D:124B
loc_36cfe:
	// 7121 
cs=0x274d;eip=0x00124e; 	J(CALL(sub_36d32,0));	// 119631                  call    sub_36D32 ;~ 274D:124E
loc_36d01:
	// 7122 
cs=0x274d;eip=0x001251; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x1FB8))));	// 119635                  mov     ax, [bp+1FB8h] ;~ 274D:1251
cs=0x274d;eip=0x001255; 	X(MOV(*(dw*)(raddr(ds,di+8)), ax));	// 119636                  mov     [di+8], ax ;~ 274D:1255
cs=0x274d;eip=0x001258; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x1FBA))));	// 119637                  mov     ax, [bp+1FBAh] ;~ 274D:1258
cs=0x274d;eip=0x00125c; 	X(MOV(*(dw*)(raddr(ds,di+0x0A)), ax));	// 119638                  mov     [di+0Ah], ax ;~ 274D:125C
cs=0x274d;eip=0x00125f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x219C))));	// 119639                  mov     ax, [bp+219Ch] ;~ 274D:125F
cs=0x274d;eip=0x001263; 	X(MOV(*(dw*)(raddr(ds,di+0x0C)), ax));	// 119640                  mov     [di+0Ch], ax ;~ 274D:1263
cs=0x274d;eip=0x001266; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x219E))));	// 119641                  mov     ax, [bp+219Eh] ;~ 274D:1266
cs=0x274d;eip=0x00126a; 	X(MOV(*(dw*)(raddr(ds,di+0x0E)), ax));	// 119642                  mov     [di+0Eh], ax ;~ 274D:126A
cs=0x274d;eip=0x00126d; 	X(PUSH(cx));	// 119643                  push    cx ;~ 274D:126D
cs=0x274d;eip=0x00126e; 	X(PUSH(si));	// 119644                  push    si ;~ 274D:126E
cs=0x274d;eip=0x00126f; 	J(CALL(sub_35c0d,0));	// 119645                  call    sub_35C0D ;~ 274D:126F
cs=0x274d;eip=0x001272; 	T(es = *(dw*)(((db*)&dword_4a46c)+2););	// 119646                  mov     es, word ptr dword_4A46C+2 ;~ 274D:1272
cs=0x274d;eip=0x001276; 	X(POP(si));	// 119647                  pop     si ;~ 274D:1276
cs=0x274d;eip=0x001277; 	X(POP(cx));	// 119648                  pop     cx ;~ 274D:1277
loc_36d28:
	// 7123 
cs=0x274d;eip=0x001278; 	T(ADD(di, 0x1A));	// 119651                  add     di, 1Ah ;~ 274D:1278
cs=0x274d;eip=0x00127b; 	T(DEC(cx));	// 119652                  dec     cx ;~ 274D:127B
cs=0x274d;eip=0x00127c; 	J(JZ(locret_36d31));	// 119653                  jz      short locret_36D31 ;~ 274D:127C
cs=0x274d;eip=0x00127e; 	J(JMP(loc_36c98));	// 119654                  jmp     loc_36C98 ;~ 274D:127E
locret_36d31:
	// 7124 
cs=0x274d;eip=0x001281; 	J(RETN(0));	// 119658                  retn ;~ 274D:1281

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_36c98: 	goto loc_36c98;
        case m2c::kloc_36ca6: 	goto loc_36ca6;
        case m2c::kloc_36ce8: 	goto loc_36ce8;
        case m2c::kloc_36cf0: 	goto loc_36cf0;
        case m2c::kloc_36cfe: 	goto loc_36cfe;
        case m2c::kloc_36d01: 	goto loc_36d01;
        case m2c::kloc_36d28: 	goto loc_36d28;
        case m2c::klocret_36ca5: 	goto locret_36ca5;
        case m2c::klocret_36d31: 	goto locret_36d31;
        case m2c::ksub_36c88: 	goto sub_36c88;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36d32(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36d32:
    _begin:
cs=0x274d;eip=0x001282; 	X(PUSH(es));	// 119667                  push    es ;~ 274D:1282
cs=0x274d;eip=0x001283; 	X(PUSH(cx));	// 119668                  push    cx ;~ 274D:1283
cs=0x274d;eip=0x001284; 	X(PUSH(si));	// 119669                  push    si ;~ 274D:1284
cs=0x274d;eip=0x001285; 	X(PUSH(di));	// 119670                  push    di ;~ 274D:1285
cs=0x274d;eip=0x001286; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x1DD4))));	// 119671                  mov     ax, [bp+1DD4h] ;~ 274D:1286
cs=0x274d;eip=0x00128a; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x1DD6))));	// 119672                  mov     dx, [bp+1DD6h] ;~ 274D:128A
cs=0x274d;eip=0x00128e; 	T(cx = dx;);	// 119673                  mov     cx, dx ;~ 274D:128E
cs=0x274d;eip=0x001290; 	T(SUB(cx, *(dw*)(raddr(ds,bx+0x1DD6))));	// 119674                  sub     cx, [bx+1DD6h] ;~ 274D:1290
cs=0x274d;eip=0x001294; 	T(DEC(dx));	// 119675                  dec     dx ;~ 274D:1294
cs=0x274d;eip=0x001295; 	T(DIV2(cx));	// 119676                  div     cx ;~ 274D:1295
cs=0x274d;eip=0x001297; 	T(SHR(ax, 1));	// 119677                  shr     ax, 1 ;~ 274D:1297
cs=0x274d;eip=0x001299; 	T(cx = ax;);	// 119678                  mov     cx, ax ;~ 274D:1299
cs=0x274d;eip=0x00129b; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x1A0C))));	// 119679                  mov     dx, [bp+1A0Ch] ;~ 274D:129B
cs=0x274d;eip=0x00129f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x1A0E))));	// 119680                  mov     ax, [bp+1A0Eh] ;~ 274D:129F
cs=0x274d;eip=0x0012a3; 	T(si = dx;);	// 119681                  mov     si, dx ;~ 274D:12A3
cs=0x274d;eip=0x0012a5; 	T(di = ax;);	// 119682                  mov     di, ax ;~ 274D:12A5
cs=0x274d;eip=0x0012a7; 	T(SUB(dx, *(dw*)(raddr(ds,bx+0x1A0C))));	// 119683                  sub     dx, [bx+1A0Ch] ;~ 274D:12A7
cs=0x274d;eip=0x0012ab; 	T(SBB(ax, *(dw*)(raddr(ds,bx+0x1A0E))));	// 119684                  sbb     ax, [bx+1A0Eh] ;~ 274D:12AB
cs=0x274d;eip=0x0012af; 	T(SHL(dx, 1));	// 119685                  shl     dx, 1 ;~ 274D:12AF
cs=0x274d;eip=0x0012b1; 	T(ADC(ax, 0));	// 119686                  adc     ax, 0 ;~ 274D:12B1
cs=0x274d;eip=0x0012b4; 	T(IMUL1_2(cx));	// 119687                  imul    cx ;~ 274D:12B4
cs=0x274d;eip=0x0012b6; 	T(SHL(ax, 1));	// 119688                  shl     ax, 1 ;~ 274D:12B6
cs=0x274d;eip=0x0012b8; 	T(RCL(dx, 1));	// 119689                  rcl     dx, 1 ;~ 274D:12B8
cs=0x274d;eip=0x0012ba; 	T(SUB(si, ax));	// 119690                  sub     si, ax ;~ 274D:12BA
cs=0x274d;eip=0x0012bc; 	T(SBB(di, dx));	// 119691                  sbb     di, dx ;~ 274D:12BC
cs=0x274d;eip=0x0012be; 	X(word_4a6cc = si;);	// 119692                  mov     word_4A6CC, si ;~ 274D:12BE
cs=0x274d;eip=0x0012c2; 	X(word_4a6ce = di;);	// 119693                  mov     word_4A6CE, di ;~ 274D:12C2
cs=0x274d;eip=0x0012c6; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x1BF0))));	// 119694                  mov     dx, [bp+1BF0h] ;~ 274D:12C6
cs=0x274d;eip=0x0012ca; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x1BF2))));	// 119695                  mov     ax, [bp+1BF2h] ;~ 274D:12CA
cs=0x274d;eip=0x0012ce; 	T(si = dx;);	// 119696                  mov     si, dx ;~ 274D:12CE
cs=0x274d;eip=0x0012d0; 	T(di = ax;);	// 119697                  mov     di, ax ;~ 274D:12D0
cs=0x274d;eip=0x0012d2; 	T(SUB(dx, *(dw*)(raddr(ds,bx+0x1BF0))));	// 119698                  sub     dx, [bx+1BF0h] ;~ 274D:12D2
cs=0x274d;eip=0x0012d6; 	T(SBB(ax, *(dw*)(raddr(ds,bx+0x1BF2))));	// 119699                  sbb     ax, [bx+1BF2h] ;~ 274D:12D6
cs=0x274d;eip=0x0012da; 	T(SHL(dx, 1));	// 119700                  shl     dx, 1 ;~ 274D:12DA
cs=0x274d;eip=0x0012dc; 	T(ADC(ax, 0));	// 119701                  adc     ax, 0 ;~ 274D:12DC
cs=0x274d;eip=0x0012df; 	T(IMUL1_2(cx));	// 119702                  imul    cx ;~ 274D:12DF
cs=0x274d;eip=0x0012e1; 	T(SHL(ax, 1));	// 119703                  shl     ax, 1 ;~ 274D:12E1
cs=0x274d;eip=0x0012e3; 	T(RCL(dx, 1));	// 119704                  rcl     dx, 1 ;~ 274D:12E3
cs=0x274d;eip=0x0012e5; 	T(SUB(si, ax));	// 119705                  sub     si, ax ;~ 274D:12E5
cs=0x274d;eip=0x0012e7; 	T(SBB(di, dx));	// 119706                  sbb     di, dx ;~ 274D:12E7
cs=0x274d;eip=0x0012e9; 	X(word_4a8b0 = si;);	// 119707                  mov     word_4A8B0, si ;~ 274D:12E9
cs=0x274d;eip=0x0012ed; 	X(word_4a8b2 = di;);	// 119708                  mov     word_4A8B2, di ;~ 274D:12ED
cs=0x274d;eip=0x0012f1; 	X(word_4aa94 = 0;);	// 119709                  mov     word_4AA94, 0 ;~ 274D:12F1
cs=0x274d;eip=0x0012f7; 	X(word_4aa96 = 1;);	// 119710                  mov     word_4AA96, 1 ;~ 274D:12F7
cs=0x274d;eip=0x0012fd; 	X(PUSH(bx));	// 119711                  push    bx ;~ 274D:12FD
cs=0x274d;eip=0x0012fe; 	T(bx = 0x1E0;);	// 119712                  mov     bx, 1E0h ;~ 274D:12FE
cs=0x274d;eip=0x001301; 	J(CALL(sub_35b28,0));	// 119713                  call    sub_35B28 ;~ 274D:1301
cs=0x274d;eip=0x001304; 	X(POP(bx));	// 119714                  pop     bx ;~ 274D:1304
cs=0x274d;eip=0x001305; 	X(POP(di));	// 119715                  pop     di ;~ 274D:1305
cs=0x274d;eip=0x001306; 	T(LES(ax, *(dd*)(word_4ac78)));	// 119716                  les     ax, dword ptr word_4AC78 ;~ 274D:1306
cs=0x274d;eip=0x00130a; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 119718                  mov     [di], ax ;~ 274D:130A
cs=0x274d;eip=0x00130c; 	X(MOV(*(dw*)(raddr(ds,di+2)), es));	// 119719                  mov     word ptr [di+2], es ;~ 274D:130C
cs=0x274d;eip=0x00130f; 	X(MOV(*(dw*)(raddr(ds,di+0x10)), ax));	// 119720                  mov     [di+10h], ax ;~ 274D:130F
cs=0x274d;eip=0x001312; 	X(MOV(*(dw*)(raddr(ds,di+0x12)), es));	// 119721                  mov     word ptr [di+12h], es ;~ 274D:1312
cs=0x274d;eip=0x001315; 	T(LES(ax, *(dd*)(word_4ae5c)));	// 119722                  les     ax, dword ptr word_4AE5C ;~ 274D:1315
cs=0x274d;eip=0x001319; 	X(MOV(*(dw*)(raddr(ds,di+4)), ax));	// 119723                  mov     [di+4], ax ;~ 274D:1319
cs=0x274d;eip=0x00131c; 	X(MOV(*(dw*)(raddr(ds,di+6)), es));	// 119724                  mov     word ptr [di+6], es ;~ 274D:131C
cs=0x274d;eip=0x00131f; 	X(MOV(*(dw*)(raddr(ds,di+0x14)), ax));	// 119725                  mov     [di+14h], ax ;~ 274D:131F
cs=0x274d;eip=0x001322; 	X(MOV(*(dw*)(raddr(ds,di+0x16)), es));	// 119726                  mov     word ptr [di+16h], es ;~ 274D:1322
cs=0x274d;eip=0x001325; 	X(OR(*(dw*)(raddr(ds,di+0x18)), 0x40));	// 119727                  or      word ptr [di+18h], 40h ;~ 274D:1325
cs=0x274d;eip=0x001329; 	X(POP(si));	// 119728                  pop     si ;~ 274D:1329
cs=0x274d;eip=0x00132a; 	X(POP(cx));	// 119729                  pop     cx ;~ 274D:132A
cs=0x274d;eip=0x00132b; 	X(POP(es));	// 119730                  pop     es ;~ 274D:132B
cs=0x274d;eip=0x00132c; 	J(RETN(0));	// 119732                  retn ;~ 274D:132C

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_36d32: 	goto sub_36d32;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36dde(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36dde:
    _begin:
#undef arg_0
#define arg_0 6
	// 119745 arg_0           = word ptr  6 ;~ 274D:132E
#undef arg_2
#define arg_2 8
	// 119746 arg_2           = word ptr  8 ;~ 274D:132E
#undef arg_4
#define arg_4 0x0A
	// 119747 arg_4           = word ptr  0Ah ;~ 274D:132E
#undef arg_6
#define arg_6 0x0C
	// 119748 arg_6           = word ptr  0Ch ;~ 274D:132E
cs=0x274d;eip=0x00132e; 	X(PUSH(bp));	// 119750                  push    bp ;~ 274D:132E
cs=0x274d;eip=0x00132f; 	T(bp = sp;);	// 119751                  mov     bp, sp ;~ 274D:132F
cs=0x274d;eip=0x001331; 	X(PUSH(si));	// 119752                  push    si ;~ 274D:1331
cs=0x274d;eip=0x001332; 	X(PUSH(di));	// 119753                  push    di ;~ 274D:1332
cs=0x274d;eip=0x001333; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 119754                  mov     di, [bp+arg_0] ;~ 274D:1333
cs=0x274d;eip=0x001336; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_2))));	// 119755                  mov     cx, [bp+arg_2] ;~ 274D:1336
cs=0x274d;eip=0x001339; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 119756                  mov     si, [bp+arg_4] ;~ 274D:1339
cs=0x274d;eip=0x00133c; 	T(MOV(bp, *(dw*)(raddr(ss,bp+arg_6))));	// 119757                  mov     bp, [bp+arg_6] ;~ 274D:133C
cs=0x274d;eip=0x00133f; 	J(CALL(sub_36e0f,0));	// 119758                  call    sub_36E0F ;~ 274D:133F
cs=0x274d;eip=0x001342; 	X(POP(di));	// 119759                  pop     di ;~ 274D:1342
cs=0x274d;eip=0x001343; 	X(POP(si));	// 119760                  pop     si ;~ 274D:1343
cs=0x274d;eip=0x001344; 	X(POP(bp));	// 119761                  pop     bp ;~ 274D:1344
cs=0x274d;eip=0x001345; 	J(RETF(0));	// 119762                  retf ;~ 274D:1345

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_36dde: 	goto sub_36dde;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg35ab_1346_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg35ab_1346_proc:
    _begin:
cs=0x274d;eip=0x001346; 	X(PUSH(bp));	// 119766                  push    bp ;~ 274D:1346
cs=0x274d;eip=0x001347; 	X(PUSH(si));	// 119767                  push    si ;~ 274D:1347
cs=0x274d;eip=0x001348; 	X(PUSH(di));	// 119768                  push    di ;~ 274D:1348
cs=0x274d;eip=0x001349; 	T(di = 0x19D8;);	// 119769                  mov     di, 19D8h ;~ 274D:1349
cs=0x274d;eip=0x00134c; 	T(cx = word_4a476;);	// 119770                  mov     cx, word_4A476 ;~ 274D:134C
cs=0x274d;eip=0x001350; 	T(si = word_4a478;);	// 119771                  mov     si, word_4A478 ;~ 274D:1350
cs=0x274d;eip=0x001354; 	T(bp = word_4a47a;);	// 119772                  mov     bp, word_4A47A ;~ 274D:1354
cs=0x274d;eip=0x001358; 	J(CALL(sub_36f2b,0));	// 119773                  call    sub_36F2B ;~ 274D:1358
cs=0x274d;eip=0x00135b; 	X(POP(di));	// 119774                  pop     di ;~ 274D:135B
cs=0x274d;eip=0x00135c; 	X(POP(si));	// 119775                  pop     si ;~ 274D:135C
cs=0x274d;eip=0x00135d; 	X(POP(bp));	// 119776                  pop     bp ;~ 274D:135D
cs=0x274d;eip=0x00135e; 	J(RETN(0));	// 119777                  retn ;~ 274D:135E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg35ab_1346_proc: 	goto seg35ab_1346_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36e0f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36e0f:
    _begin:
cs=0x274d;eip=0x00135f; 	T(bx = cx;);	// 119783                  mov     bx, cx ;~ 274D:135F
cs=0x274d;eip=0x001361; 	J(CALLF(sub_29df1,0));	// 119784                  call    sub_29DF1 ;~ 274D:1361
cs=0x274d;eip=0x001366; 	X(word_4a49a = bx;);	// 119785                  mov     word_4A49A, bx ;~ 274D:1366
cs=0x274d;eip=0x00136a; 	T(bx = cx;);	// 119786                  mov     bx, cx ;~ 274D:136A
cs=0x274d;eip=0x00136c; 	J(CALLF(sub_29df5,0));	// 119787                  call    sub_29DF5 ;~ 274D:136C
cs=0x274d;eip=0x001371; 	X(word_4a49c = bx;);	// 119788                  mov     word_4A49C, bx ;~ 274D:1371
cs=0x274d;eip=0x001375; 	T(bx = bp;);	// 119789                  mov     bx, bp ;~ 274D:1375
cs=0x274d;eip=0x001377; 	J(CALLF(sub_29df1,0));	// 119790                  call    sub_29DF1 ;~ 274D:1377
cs=0x274d;eip=0x00137c; 	X(word_4a4a2 = bx;);	// 119791                  mov     word_4A4A2, bx ;~ 274D:137C
cs=0x274d;eip=0x001380; 	T(bx = bp;);	// 119792                  mov     bx, bp ;~ 274D:1380
cs=0x274d;eip=0x001382; 	J(CALLF(sub_29df5,0));	// 119793                  call    sub_29DF5 ;~ 274D:1382
cs=0x274d;eip=0x001387; 	X(word_4a4a4 = bx;);	// 119794                  mov     word_4A4A4, bx ;~ 274D:1387
cs=0x274d;eip=0x00138b; 	T(bx = si;);	// 119795                  mov     bx, si ;~ 274D:138B
cs=0x274d;eip=0x00138d; 	J(CALLF(sub_29df1,0));	// 119796                  call    sub_29DF1 ;~ 274D:138D
cs=0x274d;eip=0x001392; 	X(word_4a49e = bx;);	// 119797                  mov     word_4A49E, bx ;~ 274D:1392
cs=0x274d;eip=0x001396; 	T(bx = si;);	// 119798                  mov     bx, si ;~ 274D:1396
cs=0x274d;eip=0x001398; 	J(CALLF(sub_29df5,0));	// 119799                  call    sub_29DF5 ;~ 274D:1398
cs=0x274d;eip=0x00139d; 	X(word_4a4a0 = bx;);	// 119800                  mov     word_4A4A0, bx ;~ 274D:139D
cs=0x274d;eip=0x0013a1; 	T(ax = word_4a49e;);	// 119801                  mov     ax, word_4A49E ;~ 274D:13A1
cs=0x274d;eip=0x0013a4; 	X(IMUL1_2(word_4a4a2));	// 119802                  imul    word_4A4A2 ;~ 274D:13A4
cs=0x274d;eip=0x0013a8; 	T(SHL(ax, 1));	// 119803                  shl     ax, 1 ;~ 274D:13A8
cs=0x274d;eip=0x0013aa; 	T(RCL(dx, 1));	// 119804                  rcl     dx, 1 ;~ 274D:13AA
cs=0x274d;eip=0x0013ac; 	T(si = dx;);	// 119805                  mov     si, dx ;~ 274D:13AC
cs=0x274d;eip=0x0013ae; 	T(ax = dx;);	// 119806                  mov     ax, dx ;~ 274D:13AE
cs=0x274d;eip=0x0013b0; 	X(IMUL1_2(word_4a49a));	// 119807                  imul    word_4A49A ;~ 274D:13B0
cs=0x274d;eip=0x0013b4; 	T(SHL(ax, 1));	// 119808                  shl     ax, 1 ;~ 274D:13B4
cs=0x274d;eip=0x0013b6; 	T(RCL(dx, 1));	// 119809                  rcl     dx, 1 ;~ 274D:13B6
cs=0x274d;eip=0x0013b8; 	T(bx = ax;);	// 119810                  mov     bx, ax ;~ 274D:13B8
cs=0x274d;eip=0x0013ba; 	T(cx = dx;);	// 119811                  mov     cx, dx ;~ 274D:13BA
cs=0x274d;eip=0x0013bc; 	T(ax = word_4a49c;);	// 119812                  mov     ax, word_4A49C ;~ 274D:13BC
cs=0x274d;eip=0x0013bf; 	X(IMUL1_2(word_4a4a4));	// 119813                  imul    word_4A4A4 ;~ 274D:13BF
cs=0x274d;eip=0x0013c3; 	T(SHL(ax, 1));	// 119814                  shl     ax, 1 ;~ 274D:13C3
cs=0x274d;eip=0x0013c5; 	T(RCL(dx, 1));	// 119815                  rcl     dx, 1 ;~ 274D:13C5
cs=0x274d;eip=0x0013c7; 	T(ADD(ax, bx));	// 119816                  add     ax, bx ;~ 274D:13C7
cs=0x274d;eip=0x0013c9; 	T(ADC(dx, cx));	// 119817                  adc     dx, cx ;~ 274D:13C9
cs=0x274d;eip=0x0013cb; 	X(MOV(*(dw*)(raddr(ds,di)), dx));	// 119818                  mov     [di], dx ;~ 274D:13CB
cs=0x274d;eip=0x0013cd; 	T(ax = word_4a49e;);	// 119819                  mov     ax, word_4A49E ;~ 274D:13CD
cs=0x274d;eip=0x0013d0; 	X(IMUL1_2(word_4a4a4));	// 119820                  imul    word_4A4A4 ;~ 274D:13D0
cs=0x274d;eip=0x0013d4; 	T(SHL(ax, 1));	// 119821                  shl     ax, 1 ;~ 274D:13D4
cs=0x274d;eip=0x0013d6; 	T(RCL(dx, 1));	// 119822                  rcl     dx, 1 ;~ 274D:13D6
cs=0x274d;eip=0x0013d8; 	T(bp = dx;);	// 119823                  mov     bp, dx ;~ 274D:13D8
cs=0x274d;eip=0x0013da; 	T(ax = dx;);	// 119824                  mov     ax, dx ;~ 274D:13DA
cs=0x274d;eip=0x0013dc; 	X(IMUL1_2(word_4a49a));	// 119825                  imul    word_4A49A ;~ 274D:13DC
cs=0x274d;eip=0x0013e0; 	T(SHL(ax, 1));	// 119826                  shl     ax, 1 ;~ 274D:13E0
cs=0x274d;eip=0x0013e2; 	T(RCL(dx, 1));	// 119827                  rcl     dx, 1 ;~ 274D:13E2
cs=0x274d;eip=0x0013e4; 	T(bx = ax;);	// 119828                  mov     bx, ax ;~ 274D:13E4
cs=0x274d;eip=0x0013e6; 	T(cx = dx;);	// 119829                  mov     cx, dx ;~ 274D:13E6
cs=0x274d;eip=0x0013e8; 	T(ax = word_4a49c;);	// 119830                  mov     ax, word_4A49C ;~ 274D:13E8
cs=0x274d;eip=0x0013eb; 	X(IMUL1_2(word_4a4a2));	// 119831                  imul    word_4A4A2 ;~ 274D:13EB
cs=0x274d;eip=0x0013ef; 	T(SHL(ax, 1));	// 119832                  shl     ax, 1 ;~ 274D:13EF
cs=0x274d;eip=0x0013f1; 	T(RCL(dx, 1));	// 119833                  rcl     dx, 1 ;~ 274D:13F1
cs=0x274d;eip=0x0013f3; 	T(SUB(bx, ax));	// 119834                  sub     bx, ax ;~ 274D:13F3
cs=0x274d;eip=0x0013f5; 	T(SBB(cx, dx));	// 119835                  sbb     cx, dx ;~ 274D:13F5
cs=0x274d;eip=0x0013f7; 	X(MOV(*(dw*)(raddr(ds,di+2)), cx));	// 119836                  mov     [di+2], cx ;~ 274D:13F7
cs=0x274d;eip=0x0013fa; 	T(ax = word_4a49a;);	// 119837                  mov     ax, word_4A49A ;~ 274D:13FA
cs=0x274d;eip=0x0013fd; 	X(IMUL1_2(word_4a4a0));	// 119838                  imul    word_4A4A0 ;~ 274D:13FD
cs=0x274d;eip=0x001401; 	T(SHL(ax, 1));	// 119839                  shl     ax, 1 ;~ 274D:1401
cs=0x274d;eip=0x001403; 	T(RCL(dx, 1));	// 119840                  rcl     dx, 1 ;~ 274D:1403
cs=0x274d;eip=0x001405; 	X(MOV(*(dw*)(raddr(ds,di+4)), dx));	// 119841                  mov     [di+4], dx ;~ 274D:1405
cs=0x274d;eip=0x001408; 	T(ax = word_4a4a2;);	// 119842                  mov     ax, word_4A4A2 ;~ 274D:1408
cs=0x274d;eip=0x00140b; 	X(IMUL1_2(word_4a4a0));	// 119843                  imul    word_4A4A0 ;~ 274D:140B
cs=0x274d;eip=0x00140f; 	T(SHL(ax, 1));	// 119844                  shl     ax, 1 ;~ 274D:140F
cs=0x274d;eip=0x001411; 	T(RCL(dx, 1));	// 119845                  rcl     dx, 1 ;~ 274D:1411
cs=0x274d;eip=0x001413; 	X(MOV(*(dw*)(raddr(ds,di+6)), dx));	// 119846                  mov     [di+6], dx ;~ 274D:1413
cs=0x274d;eip=0x001416; 	T(ax = word_4a4a4;);	// 119847                  mov     ax, word_4A4A4 ;~ 274D:1416
cs=0x274d;eip=0x001419; 	X(IMUL1_2(word_4a4a0));	// 119848                  imul    word_4A4A0 ;~ 274D:1419
cs=0x274d;eip=0x00141d; 	T(SHL(ax, 1));	// 119849                  shl     ax, 1 ;~ 274D:141D
cs=0x274d;eip=0x00141f; 	T(RCL(dx, 1));	// 119850                  rcl     dx, 1 ;~ 274D:141F
cs=0x274d;eip=0x001421; 	X(MOV(*(dw*)(raddr(ds,di+8)), dx));	// 119851                  mov     [di+8], dx ;~ 274D:1421
cs=0x274d;eip=0x001424; 	T(ax = word_4a49e;);	// 119852                  mov     ax, word_4A49E ;~ 274D:1424
cs=0x274d;eip=0x001427; 	T(NEG(ax));	// 119853                  neg     ax ;~ 274D:1427
cs=0x274d;eip=0x001429; 	X(MOV(*(dw*)(raddr(ds,di+0x0A)), ax));	// 119854                  mov     [di+0Ah], ax ;~ 274D:1429
cs=0x274d;eip=0x00142c; 	T(ax = si;);	// 119855                  mov     ax, si ;~ 274D:142C
cs=0x274d;eip=0x00142e; 	X(IMUL1_2(word_4a49c));	// 119856                  imul    word_4A49C ;~ 274D:142E
cs=0x274d;eip=0x001432; 	T(SHL(ax, 1));	// 119857                  shl     ax, 1 ;~ 274D:1432
cs=0x274d;eip=0x001434; 	T(RCL(dx, 1));	// 119858                  rcl     dx, 1 ;~ 274D:1434
cs=0x274d;eip=0x001436; 	T(bx = ax;);	// 119859                  mov     bx, ax ;~ 274D:1436
cs=0x274d;eip=0x001438; 	T(cx = dx;);	// 119860                  mov     cx, dx ;~ 274D:1438
cs=0x274d;eip=0x00143a; 	T(ax = word_4a49a;);	// 119861                  mov     ax, word_4A49A ;~ 274D:143A
cs=0x274d;eip=0x00143d; 	X(IMUL1_2(word_4a4a4));	// 119862                  imul    word_4A4A4 ;~ 274D:143D
cs=0x274d;eip=0x001441; 	T(SHL(ax, 1));	// 119863                  shl     ax, 1 ;~ 274D:1441
cs=0x274d;eip=0x001443; 	T(RCL(dx, 1));	// 119864                  rcl     dx, 1 ;~ 274D:1443
cs=0x274d;eip=0x001445; 	T(SUB(bx, ax));	// 119865                  sub     bx, ax ;~ 274D:1445
cs=0x274d;eip=0x001447; 	T(SBB(cx, dx));	// 119866                  sbb     cx, dx ;~ 274D:1447
cs=0x274d;eip=0x001449; 	X(MOV(*(dw*)(raddr(ds,di+0x0C)), cx));	// 119867                  mov     [di+0Ch], cx ;~ 274D:1449
cs=0x274d;eip=0x00144c; 	T(ax = bp;);	// 119868                  mov     ax, bp ;~ 274D:144C
cs=0x274d;eip=0x00144e; 	X(IMUL1_2(word_4a49c));	// 119869                  imul    word_4A49C ;~ 274D:144E
cs=0x274d;eip=0x001452; 	T(SHL(ax, 1));	// 119870                  shl     ax, 1 ;~ 274D:1452
cs=0x274d;eip=0x001454; 	T(RCL(dx, 1));	// 119871                  rcl     dx, 1 ;~ 274D:1454
cs=0x274d;eip=0x001456; 	T(bx = ax;);	// 119872                  mov     bx, ax ;~ 274D:1456
cs=0x274d;eip=0x001458; 	T(cx = dx;);	// 119873                  mov     cx, dx ;~ 274D:1458
cs=0x274d;eip=0x00145a; 	T(ax = word_4a49a;);	// 119874                  mov     ax, word_4A49A ;~ 274D:145A
cs=0x274d;eip=0x00145d; 	X(IMUL1_2(word_4a4a2));	// 119875                  imul    word_4A4A2 ;~ 274D:145D
cs=0x274d;eip=0x001461; 	T(SHL(ax, 1));	// 119876                  shl     ax, 1 ;~ 274D:1461
cs=0x274d;eip=0x001463; 	T(RCL(dx, 1));	// 119877                  rcl     dx, 1 ;~ 274D:1463
cs=0x274d;eip=0x001465; 	T(ADD(ax, bx));	// 119878                  add     ax, bx ;~ 274D:1465
cs=0x274d;eip=0x001467; 	T(ADC(dx, cx));	// 119879                  adc     dx, cx ;~ 274D:1467
cs=0x274d;eip=0x001469; 	X(MOV(*(dw*)(raddr(ds,di+0x0E)), dx));	// 119880                  mov     [di+0Eh], dx ;~ 274D:1469
cs=0x274d;eip=0x00146c; 	T(ax = word_4a49c;);	// 119881                  mov     ax, word_4A49C ;~ 274D:146C
cs=0x274d;eip=0x00146f; 	X(IMUL1_2(word_4a4a0));	// 119882                  imul    word_4A4A0 ;~ 274D:146F
cs=0x274d;eip=0x001473; 	T(SHL(ax, 1));	// 119883                  shl     ax, 1 ;~ 274D:1473
cs=0x274d;eip=0x001475; 	T(RCL(dx, 1));	// 119884                  rcl     dx, 1 ;~ 274D:1475
cs=0x274d;eip=0x001477; 	X(MOV(*(dw*)(raddr(ds,di+0x10)), dx));	// 119885                  mov     [di+10h], dx ;~ 274D:1477
cs=0x274d;eip=0x00147a; 	J(RETN(0));	// 119886                  retn ;~ 274D:147A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_36e0f: 	goto sub_36e0f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36f2b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36f2b:
    _begin:
cs=0x274d;eip=0x00147b; 	T(bx = cx;);	// 119895                  mov     bx, cx ;~ 274D:147B
cs=0x274d;eip=0x00147d; 	J(CALLF(sub_29df1,0));	// 119896                  call    sub_29DF1 ;~ 274D:147D
cs=0x274d;eip=0x001482; 	X(word_4a49a = bx;);	// 119897                  mov     word_4A49A, bx ;~ 274D:1482
cs=0x274d;eip=0x001486; 	T(bx = cx;);	// 119898                  mov     bx, cx ;~ 274D:1486
cs=0x274d;eip=0x001488; 	J(CALLF(sub_29df5,0));	// 119899                  call    sub_29DF5 ;~ 274D:1488
cs=0x274d;eip=0x00148d; 	X(word_4a49c = bx;);	// 119900                  mov     word_4A49C, bx ;~ 274D:148D
cs=0x274d;eip=0x001491; 	T(bx = bp;);	// 119901                  mov     bx, bp ;~ 274D:1491
cs=0x274d;eip=0x001493; 	J(CALLF(sub_29df1,0));	// 119902                  call    sub_29DF1 ;~ 274D:1493
cs=0x274d;eip=0x001498; 	X(word_4a4a2 = bx;);	// 119903                  mov     word_4A4A2, bx ;~ 274D:1498
cs=0x274d;eip=0x00149c; 	T(bx = bp;);	// 119904                  mov     bx, bp ;~ 274D:149C
cs=0x274d;eip=0x00149e; 	J(CALLF(sub_29df5,0));	// 119905                  call    sub_29DF5 ;~ 274D:149E
cs=0x274d;eip=0x0014a3; 	X(word_4a4a4 = bx;);	// 119906                  mov     word_4A4A4, bx ;~ 274D:14A3
cs=0x274d;eip=0x0014a7; 	T(bx = si;);	// 119907                  mov     bx, si ;~ 274D:14A7
cs=0x274d;eip=0x0014a9; 	J(CALLF(sub_29df1,0));	// 119908                  call    sub_29DF1 ;~ 274D:14A9
cs=0x274d;eip=0x0014ae; 	X(word_4a49e = bx;);	// 119909                  mov     word_4A49E, bx ;~ 274D:14AE
cs=0x274d;eip=0x0014b2; 	T(bx = si;);	// 119910                  mov     bx, si ;~ 274D:14B2
cs=0x274d;eip=0x0014b4; 	J(CALLF(sub_29df5,0));	// 119911                  call    sub_29DF5 ;~ 274D:14B4
cs=0x274d;eip=0x0014b9; 	X(word_4a4a0 = bx;);	// 119912                  mov     word_4A4A0, bx ;~ 274D:14B9
cs=0x274d;eip=0x0014bd; 	T(ax = word_4a49e;);	// 119913                  mov     ax, word_4A49E ;~ 274D:14BD
cs=0x274d;eip=0x0014c0; 	X(IMUL1_2(word_4a4a2));	// 119914                  imul    word_4A4A2 ;~ 274D:14C0
cs=0x274d;eip=0x0014c4; 	T(SHL(ax, 1));	// 119915                  shl     ax, 1 ;~ 274D:14C4
cs=0x274d;eip=0x0014c6; 	T(RCL(dx, 1));	// 119916                  rcl     dx, 1 ;~ 274D:14C6
cs=0x274d;eip=0x0014c8; 	T(si = dx;);	// 119917                  mov     si, dx ;~ 274D:14C8
cs=0x274d;eip=0x0014ca; 	T(ax = dx;);	// 119918                  mov     ax, dx ;~ 274D:14CA
cs=0x274d;eip=0x0014cc; 	X(IMUL1_2(word_4a49a));	// 119919                  imul    word_4A49A ;~ 274D:14CC
cs=0x274d;eip=0x0014d0; 	T(SHL(ax, 1));	// 119920                  shl     ax, 1 ;~ 274D:14D0
cs=0x274d;eip=0x0014d2; 	T(RCL(dx, 1));	// 119921                  rcl     dx, 1 ;~ 274D:14D2
cs=0x274d;eip=0x0014d4; 	T(bx = ax;);	// 119922                  mov     bx, ax ;~ 274D:14D4
cs=0x274d;eip=0x0014d6; 	T(cx = dx;);	// 119923                  mov     cx, dx ;~ 274D:14D6
cs=0x274d;eip=0x0014d8; 	T(ax = word_4a49c;);	// 119924                  mov     ax, word_4A49C ;~ 274D:14D8
cs=0x274d;eip=0x0014db; 	X(IMUL1_2(word_4a4a4));	// 119925                  imul    word_4A4A4 ;~ 274D:14DB
cs=0x274d;eip=0x0014df; 	T(SHL(ax, 1));	// 119926                  shl     ax, 1 ;~ 274D:14DF
cs=0x274d;eip=0x0014e1; 	T(RCL(dx, 1));	// 119927                  rcl     dx, 1 ;~ 274D:14E1
cs=0x274d;eip=0x0014e3; 	T(SUB(ax, bx));	// 119928                  sub     ax, bx ;~ 274D:14E3
cs=0x274d;eip=0x0014e5; 	T(SBB(dx, cx));	// 119929                  sbb     dx, cx ;~ 274D:14E5
cs=0x274d;eip=0x0014e7; 	X(MOV(*(dw*)(raddr(ds,di)), dx));	// 119930                  mov     [di], dx ;~ 274D:14E7
cs=0x274d;eip=0x0014e9; 	T(ax = word_4a49e;);	// 119931                  mov     ax, word_4A49E ;~ 274D:14E9
cs=0x274d;eip=0x0014ec; 	X(IMUL1_2(word_4a4a4));	// 119932                  imul    word_4A4A4 ;~ 274D:14EC
cs=0x274d;eip=0x0014f0; 	T(SHL(ax, 1));	// 119933                  shl     ax, 1 ;~ 274D:14F0
cs=0x274d;eip=0x0014f2; 	T(RCL(dx, 1));	// 119934                  rcl     dx, 1 ;~ 274D:14F2
cs=0x274d;eip=0x0014f4; 	T(bp = dx;);	// 119935                  mov     bp, dx ;~ 274D:14F4
cs=0x274d;eip=0x0014f6; 	T(ax = dx;);	// 119936                  mov     ax, dx ;~ 274D:14F6
cs=0x274d;eip=0x0014f8; 	X(IMUL1_2(word_4a49a));	// 119937                  imul    word_4A49A ;~ 274D:14F8
cs=0x274d;eip=0x0014fc; 	T(SHL(ax, 1));	// 119938                  shl     ax, 1 ;~ 274D:14FC
cs=0x274d;eip=0x0014fe; 	T(RCL(dx, 1));	// 119939                  rcl     dx, 1 ;~ 274D:14FE
cs=0x274d;eip=0x001500; 	T(bx = ax;);	// 119940                  mov     bx, ax ;~ 274D:1500
cs=0x274d;eip=0x001502; 	T(cx = dx;);	// 119941                  mov     cx, dx ;~ 274D:1502
cs=0x274d;eip=0x001504; 	T(ax = word_4a49c;);	// 119942                  mov     ax, word_4A49C ;~ 274D:1504
cs=0x274d;eip=0x001507; 	X(IMUL1_2(word_4a4a2));	// 119943                  imul    word_4A4A2 ;~ 274D:1507
cs=0x274d;eip=0x00150b; 	T(SHL(ax, 1));	// 119944                  shl     ax, 1 ;~ 274D:150B
cs=0x274d;eip=0x00150d; 	T(RCL(dx, 1));	// 119945                  rcl     dx, 1 ;~ 274D:150D
cs=0x274d;eip=0x00150f; 	T(ADD(bx, ax));	// 119946                  add     bx, ax ;~ 274D:150F
cs=0x274d;eip=0x001511; 	T(ADC(cx, dx));	// 119947                  adc     cx, dx ;~ 274D:1511
cs=0x274d;eip=0x001513; 	X(MOV(*(dw*)(raddr(ds,di+6)), cx));	// 119948                  mov     [di+6], cx ;~ 274D:1513
cs=0x274d;eip=0x001516; 	T(ax = word_4a49a;);	// 119949                  mov     ax, word_4A49A ;~ 274D:1516
cs=0x274d;eip=0x001519; 	X(IMUL1_2(word_4a4a0));	// 119950                  imul    word_4A4A0 ;~ 274D:1519
cs=0x274d;eip=0x00151d; 	T(SHL(ax, 1));	// 119951                  shl     ax, 1 ;~ 274D:151D
cs=0x274d;eip=0x00151f; 	T(RCL(dx, 1));	// 119952                  rcl     dx, 1 ;~ 274D:151F
cs=0x274d;eip=0x001521; 	T(NEG(dx));	// 119953                  neg     dx ;~ 274D:1521
cs=0x274d;eip=0x001523; 	X(MOV(*(dw*)(raddr(ds,di+0x0C)), dx));	// 119954                  mov     [di+0Ch], dx ;~ 274D:1523
cs=0x274d;eip=0x001526; 	T(ax = word_4a4a2;);	// 119955                  mov     ax, word_4A4A2 ;~ 274D:1526
cs=0x274d;eip=0x001529; 	X(IMUL1_2(word_4a4a0));	// 119956                  imul    word_4A4A0 ;~ 274D:1529
cs=0x274d;eip=0x00152d; 	T(SHL(ax, 1));	// 119957                  shl     ax, 1 ;~ 274D:152D
cs=0x274d;eip=0x00152f; 	T(RCL(dx, 1));	// 119958                  rcl     dx, 1 ;~ 274D:152F
cs=0x274d;eip=0x001531; 	T(NEG(dx));	// 119959                  neg     dx ;~ 274D:1531
cs=0x274d;eip=0x001533; 	X(MOV(*(dw*)(raddr(ds,di+2)), dx));	// 119960                  mov     [di+2], dx ;~ 274D:1533
cs=0x274d;eip=0x001536; 	T(ax = word_4a4a4;);	// 119961                  mov     ax, word_4A4A4 ;~ 274D:1536
cs=0x274d;eip=0x001539; 	X(IMUL1_2(word_4a4a0));	// 119962                  imul    word_4A4A0 ;~ 274D:1539
cs=0x274d;eip=0x00153d; 	T(SHL(ax, 1));	// 119963                  shl     ax, 1 ;~ 274D:153D
cs=0x274d;eip=0x00153f; 	T(RCL(dx, 1));	// 119964                  rcl     dx, 1 ;~ 274D:153F
cs=0x274d;eip=0x001541; 	X(MOV(*(dw*)(raddr(ds,di+8)), dx));	// 119965                  mov     [di+8], dx ;~ 274D:1541
cs=0x274d;eip=0x001544; 	T(ax = word_4a49e;);	// 119966                  mov     ax, word_4A49E ;~ 274D:1544
cs=0x274d;eip=0x001547; 	X(MOV(*(dw*)(raddr(ds,di+0x0E)), ax));	// 119967                  mov     [di+0Eh], ax ;~ 274D:1547
cs=0x274d;eip=0x00154a; 	T(ax = si;);	// 119968                  mov     ax, si ;~ 274D:154A
cs=0x274d;eip=0x00154c; 	X(IMUL1_2(word_4a49c));	// 119969                  imul    word_4A49C ;~ 274D:154C
cs=0x274d;eip=0x001550; 	T(SHL(ax, 1));	// 119970                  shl     ax, 1 ;~ 274D:1550
cs=0x274d;eip=0x001552; 	T(RCL(dx, 1));	// 119971                  rcl     dx, 1 ;~ 274D:1552
cs=0x274d;eip=0x001554; 	T(bx = ax;);	// 119972                  mov     bx, ax ;~ 274D:1554
cs=0x274d;eip=0x001556; 	T(cx = dx;);	// 119973                  mov     cx, dx ;~ 274D:1556
cs=0x274d;eip=0x001558; 	T(ax = word_4a49a;);	// 119974                  mov     ax, word_4A49A ;~ 274D:1558
cs=0x274d;eip=0x00155b; 	X(IMUL1_2(word_4a4a4));	// 119975                  imul    word_4A4A4 ;~ 274D:155B
cs=0x274d;eip=0x00155f; 	T(SHL(ax, 1));	// 119976                  shl     ax, 1 ;~ 274D:155F
cs=0x274d;eip=0x001561; 	T(RCL(dx, 1));	// 119977                  rcl     dx, 1 ;~ 274D:1561
cs=0x274d;eip=0x001563; 	T(ADD(bx, ax));	// 119978                  add     bx, ax ;~ 274D:1563
cs=0x274d;eip=0x001565; 	T(ADC(cx, dx));	// 119979                  adc     cx, dx ;~ 274D:1565
cs=0x274d;eip=0x001567; 	X(MOV(*(dw*)(raddr(ds,di+4)), cx));	// 119980                  mov     [di+4], cx ;~ 274D:1567
cs=0x274d;eip=0x00156a; 	T(ax = bp;);	// 119981                  mov     ax, bp ;~ 274D:156A
cs=0x274d;eip=0x00156c; 	X(IMUL1_2(word_4a49c));	// 119982                  imul    word_4A49C ;~ 274D:156C
cs=0x274d;eip=0x001570; 	T(SHL(ax, 1));	// 119983                  shl     ax, 1 ;~ 274D:1570
cs=0x274d;eip=0x001572; 	T(RCL(dx, 1));	// 119984                  rcl     dx, 1 ;~ 274D:1572
cs=0x274d;eip=0x001574; 	T(bx = ax;);	// 119985                  mov     bx, ax ;~ 274D:1574
cs=0x274d;eip=0x001576; 	T(cx = dx;);	// 119986                  mov     cx, dx ;~ 274D:1576
cs=0x274d;eip=0x001578; 	T(ax = word_4a49a;);	// 119987                  mov     ax, word_4A49A ;~ 274D:1578
cs=0x274d;eip=0x00157b; 	X(IMUL1_2(word_4a4a2));	// 119988                  imul    word_4A4A2 ;~ 274D:157B
cs=0x274d;eip=0x00157f; 	T(SHL(ax, 1));	// 119989                  shl     ax, 1 ;~ 274D:157F
cs=0x274d;eip=0x001581; 	T(RCL(dx, 1));	// 119990                  rcl     dx, 1 ;~ 274D:1581
cs=0x274d;eip=0x001583; 	T(SUB(ax, bx));	// 119991                  sub     ax, bx ;~ 274D:1583
cs=0x274d;eip=0x001585; 	T(SBB(dx, cx));	// 119992                  sbb     dx, cx ;~ 274D:1585
cs=0x274d;eip=0x001587; 	X(MOV(*(dw*)(raddr(ds,di+0x0A)), dx));	// 119993                  mov     [di+0Ah], dx ;~ 274D:1587
cs=0x274d;eip=0x00158a; 	T(ax = word_4a49c;);	// 119994                  mov     ax, word_4A49C ;~ 274D:158A
cs=0x274d;eip=0x00158d; 	X(IMUL1_2(word_4a4a0));	// 119995                  imul    word_4A4A0 ;~ 274D:158D
cs=0x274d;eip=0x001591; 	T(SHL(ax, 1));	// 119996                  shl     ax, 1 ;~ 274D:1591
cs=0x274d;eip=0x001593; 	T(RCL(dx, 1));	// 119997                  rcl     dx, 1 ;~ 274D:1593
cs=0x274d;eip=0x001595; 	X(MOV(*(dw*)(raddr(ds,di+0x10)), dx));	// 119998                  mov     [di+10h], dx ;~ 274D:1595
cs=0x274d;eip=0x001598; 	J(RETN(0));	// 119999                  retn ;~ 274D:1598

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_36f2b: 	goto sub_36f2b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_37049(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_37049:
    _begin:
cs=0x274d;eip=0x001599; 	T(bx = 0x19D8;);	// 120008                  mov     bx, 19D8h ;~ 274D:1599
cs=0x274d;eip=0x00159c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 120009                  mov     ax, [bx+2] ;~ 274D:159C
cs=0x274d;eip=0x00159f; 	X(XCHG(ax, *(dw*)(raddr(ds,bx+6))));	// 120010                  xchg    ax, [bx+6] ;~ 274D:159F
cs=0x274d;eip=0x0015a2; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 120011                  mov     [bx+2], ax ;~ 274D:15A2
cs=0x274d;eip=0x0015a5; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 120012                  mov     ax, [bx+4] ;~ 274D:15A5
cs=0x274d;eip=0x0015a8; 	X(XCHG(ax, *(dw*)(raddr(ds,bx+0x0C))));	// 120013                  xchg    ax, [bx+0Ch] ;~ 274D:15A8
cs=0x274d;eip=0x0015ab; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 120014                  mov     [bx+4], ax ;~ 274D:15AB
cs=0x274d;eip=0x0015ae; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0A))));	// 120015                  mov     ax, [bx+0Ah] ;~ 274D:15AE
cs=0x274d;eip=0x0015b1; 	X(XCHG(ax, *(dw*)(raddr(ds,bx+0x0E))));	// 120016                  xchg    ax, [bx+0Eh] ;~ 274D:15B1
cs=0x274d;eip=0x0015b4; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), ax));	// 120017                  mov     [bx+0Ah], ax ;~ 274D:15B4
cs=0x274d;eip=0x0015b7; 	J(RETN(0));	// 120018                  retn ;~ 274D:15B7

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_37049: 	goto sub_37049;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_37068(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_37068:
    _begin:
#undef arg_0
#define arg_0 6
	// 120029 arg_0           = word ptr  6 ;~ 274D:15B8
#undef arg_2
#define arg_2 8
	// 120030 arg_2           = word ptr  8 ;~ 274D:15B8
#undef arg_4
#define arg_4 0x0A
	// 120031 arg_4           = word ptr  0Ah ;~ 274D:15B8
cs=0x274d;eip=0x0015b8; 	X(PUSH(bp));	// 120033                  push    bp ;~ 274D:15B8
cs=0x274d;eip=0x0015b9; 	T(bp = sp;);	// 120034                  mov     bp, sp ;~ 274D:15B9
cs=0x274d;eip=0x0015bb; 	X(PUSH(si));	// 120035                  push    si ;~ 274D:15BB
cs=0x274d;eip=0x0015bc; 	X(PUSH(di));	// 120036                  push    di ;~ 274D:15BC
cs=0x274d;eip=0x0015bd; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 120037                  mov     bx, [bp+arg_0] ;~ 274D:15BD
cs=0x274d;eip=0x0015c0; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 120038                  mov     si, [bp+arg_2] ;~ 274D:15C0
cs=0x274d;eip=0x0015c3; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_4))));	// 120039                  mov     di, [bp+arg_4] ;~ 274D:15C3
cs=0x274d;eip=0x0015c6; 	J(CALL(sub_3707d,0));	// 120040                  call    sub_3707D ;~ 274D:15C6
cs=0x274d;eip=0x0015c9; 	X(POP(di));	// 120041                  pop     di ;~ 274D:15C9
cs=0x274d;eip=0x0015ca; 	X(POP(si));	// 120042                  pop     si ;~ 274D:15CA
cs=0x274d;eip=0x0015cb; 	X(POP(bp));	// 120043                  pop     bp ;~ 274D:15CB
cs=0x274d;eip=0x0015cc; 	J(RETF(0));	// 120044                  retf ;~ 274D:15CC

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_37068: 	goto sub_37068;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3707d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3707d:
    _begin:
cs=0x274d;eip=0x0015cd; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 120053                  mov     ax, [bx] ;~ 274D:15CD
cs=0x274d;eip=0x0015cf; 	X(IMUL1_2(*(dw*)(raddr(ds,si))));	// 120054                  imul    word ptr [si] ;~ 274D:15CF
cs=0x274d;eip=0x0015d1; 	T(SHL(ax, 1));	// 120055                  shl     ax, 1 ;~ 274D:15D1
cs=0x274d;eip=0x0015d3; 	T(RCL(dx, 1));	// 120056                  rcl     dx, 1 ;~ 274D:15D3
cs=0x274d;eip=0x0015d5; 	T(bp = ax;);	// 120057                  mov     bp, ax ;~ 274D:15D5
cs=0x274d;eip=0x0015d7; 	T(cx = dx;);	// 120058                  mov     cx, dx ;~ 274D:15D7
cs=0x274d;eip=0x0015d9; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 120059                  mov     ax, [bx+2] ;~ 274D:15D9
cs=0x274d;eip=0x0015dc; 	X(IMUL1_2(*(dw*)(raddr(ds,si+6))));	// 120060                  imul    word ptr [si+6] ;~ 274D:15DC
cs=0x274d;eip=0x0015df; 	T(SHL(ax, 1));	// 120061                  shl     ax, 1 ;~ 274D:15DF
cs=0x274d;eip=0x0015e1; 	T(RCL(dx, 1));	// 120062                  rcl     dx, 1 ;~ 274D:15E1
cs=0x274d;eip=0x0015e3; 	T(ADD(bp, ax));	// 120063                  add     bp, ax ;~ 274D:15E3
cs=0x274d;eip=0x0015e5; 	T(ADC(cx, dx));	// 120064                  adc     cx, dx ;~ 274D:15E5
cs=0x274d;eip=0x0015e7; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 120065                  mov     ax, [bx+4] ;~ 274D:15E7
cs=0x274d;eip=0x0015ea; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x0C))));	// 120066                  imul    word ptr [si+0Ch] ;~ 274D:15EA
cs=0x274d;eip=0x0015ed; 	T(SHL(ax, 1));	// 120067                  shl     ax, 1 ;~ 274D:15ED
cs=0x274d;eip=0x0015ef; 	T(RCL(dx, 1));	// 120068                  rcl     dx, 1 ;~ 274D:15EF
cs=0x274d;eip=0x0015f1; 	T(ADD(bp, ax));	// 120069                  add     bp, ax ;~ 274D:15F1
cs=0x274d;eip=0x0015f3; 	T(ADC(cx, dx));	// 120070                  adc     cx, dx ;~ 274D:15F3
cs=0x274d;eip=0x0015f5; 	X(MOV(*(dw*)(raddr(ds,di)), cx));	// 120071                  mov     [di], cx ;~ 274D:15F5
cs=0x274d;eip=0x0015f7; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 120072                  mov     ax, [bx] ;~ 274D:15F7
cs=0x274d;eip=0x0015f9; 	X(IMUL1_2(*(dw*)(raddr(ds,si+2))));	// 120073                  imul    word ptr [si+2] ;~ 274D:15F9
cs=0x274d;eip=0x0015fc; 	T(SHL(ax, 1));	// 120074                  shl     ax, 1 ;~ 274D:15FC
cs=0x274d;eip=0x0015fe; 	T(RCL(dx, 1));	// 120075                  rcl     dx, 1 ;~ 274D:15FE
cs=0x274d;eip=0x001600; 	T(bp = ax;);	// 120076                  mov     bp, ax ;~ 274D:1600
cs=0x274d;eip=0x001602; 	T(cx = dx;);	// 120077                  mov     cx, dx ;~ 274D:1602
cs=0x274d;eip=0x001604; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 120078                  mov     ax, [bx+2] ;~ 274D:1604
cs=0x274d;eip=0x001607; 	X(IMUL1_2(*(dw*)(raddr(ds,si+8))));	// 120079                  imul    word ptr [si+8] ;~ 274D:1607
cs=0x274d;eip=0x00160a; 	T(SHL(ax, 1));	// 120080                  shl     ax, 1 ;~ 274D:160A
cs=0x274d;eip=0x00160c; 	T(RCL(dx, 1));	// 120081                  rcl     dx, 1 ;~ 274D:160C
cs=0x274d;eip=0x00160e; 	T(ADD(bp, ax));	// 120082                  add     bp, ax ;~ 274D:160E
cs=0x274d;eip=0x001610; 	T(ADC(cx, dx));	// 120083                  adc     cx, dx ;~ 274D:1610
cs=0x274d;eip=0x001612; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 120084                  mov     ax, [bx+4] ;~ 274D:1612
cs=0x274d;eip=0x001615; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x0E))));	// 120085                  imul    word ptr [si+0Eh] ;~ 274D:1615
cs=0x274d;eip=0x001618; 	T(SHL(ax, 1));	// 120086                  shl     ax, 1 ;~ 274D:1618
cs=0x274d;eip=0x00161a; 	T(RCL(dx, 1));	// 120087                  rcl     dx, 1 ;~ 274D:161A
cs=0x274d;eip=0x00161c; 	T(ADD(bp, ax));	// 120088                  add     bp, ax ;~ 274D:161C
cs=0x274d;eip=0x00161e; 	T(ADC(cx, dx));	// 120089                  adc     cx, dx ;~ 274D:161E
cs=0x274d;eip=0x001620; 	X(MOV(*(dw*)(raddr(ds,di+2)), cx));	// 120090                  mov     [di+2], cx ;~ 274D:1620
cs=0x274d;eip=0x001623; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 120091                  mov     ax, [bx] ;~ 274D:1623
cs=0x274d;eip=0x001625; 	X(IMUL1_2(*(dw*)(raddr(ds,si+4))));	// 120092                  imul    word ptr [si+4] ;~ 274D:1625
cs=0x274d;eip=0x001628; 	T(SHL(ax, 1));	// 120093                  shl     ax, 1 ;~ 274D:1628
cs=0x274d;eip=0x00162a; 	T(RCL(dx, 1));	// 120094                  rcl     dx, 1 ;~ 274D:162A
cs=0x274d;eip=0x00162c; 	T(bp = ax;);	// 120095                  mov     bp, ax ;~ 274D:162C
cs=0x274d;eip=0x00162e; 	T(cx = dx;);	// 120096                  mov     cx, dx ;~ 274D:162E
cs=0x274d;eip=0x001630; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 120097                  mov     ax, [bx+2] ;~ 274D:1630
cs=0x274d;eip=0x001633; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x0A))));	// 120098                  imul    word ptr [si+0Ah] ;~ 274D:1633
cs=0x274d;eip=0x001636; 	T(SHL(ax, 1));	// 120099                  shl     ax, 1 ;~ 274D:1636
cs=0x274d;eip=0x001638; 	T(RCL(dx, 1));	// 120100                  rcl     dx, 1 ;~ 274D:1638
cs=0x274d;eip=0x00163a; 	T(ADD(bp, ax));	// 120101                  add     bp, ax ;~ 274D:163A
cs=0x274d;eip=0x00163c; 	T(ADC(cx, dx));	// 120102                  adc     cx, dx ;~ 274D:163C
cs=0x274d;eip=0x00163e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 120103                  mov     ax, [bx+4] ;~ 274D:163E
cs=0x274d;eip=0x001641; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x10))));	// 120104                  imul    word ptr [si+10h] ;~ 274D:1641
cs=0x274d;eip=0x001644; 	T(SHL(ax, 1));	// 120105                  shl     ax, 1 ;~ 274D:1644
cs=0x274d;eip=0x001646; 	T(RCL(dx, 1));	// 120106                  rcl     dx, 1 ;~ 274D:1646
cs=0x274d;eip=0x001648; 	T(ADD(bp, ax));	// 120107                  add     bp, ax ;~ 274D:1648
cs=0x274d;eip=0x00164a; 	T(ADC(cx, dx));	// 120108                  adc     cx, dx ;~ 274D:164A
cs=0x274d;eip=0x00164c; 	X(MOV(*(dw*)(raddr(ds,di+4)), cx));	// 120109                  mov     [di+4], cx ;~ 274D:164C
cs=0x274d;eip=0x00164f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 120110                  mov     ax, [bx+6] ;~ 274D:164F
cs=0x274d;eip=0x001652; 	X(IMUL1_2(*(dw*)(raddr(ds,si))));	// 120111                  imul    word ptr [si] ;~ 274D:1652
cs=0x274d;eip=0x001654; 	T(SHL(ax, 1));	// 120112                  shl     ax, 1 ;~ 274D:1654
cs=0x274d;eip=0x001656; 	T(RCL(dx, 1));	// 120113                  rcl     dx, 1 ;~ 274D:1656
cs=0x274d;eip=0x001658; 	T(bp = ax;);	// 120114                  mov     bp, ax ;~ 274D:1658
cs=0x274d;eip=0x00165a; 	T(cx = dx;);	// 120115                  mov     cx, dx ;~ 274D:165A
cs=0x274d;eip=0x00165c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 120116                  mov     ax, [bx+8] ;~ 274D:165C
cs=0x274d;eip=0x00165f; 	X(IMUL1_2(*(dw*)(raddr(ds,si+6))));	// 120117                  imul    word ptr [si+6] ;~ 274D:165F
cs=0x274d;eip=0x001662; 	T(SHL(ax, 1));	// 120118                  shl     ax, 1 ;~ 274D:1662
cs=0x274d;eip=0x001664; 	T(RCL(dx, 1));	// 120119                  rcl     dx, 1 ;~ 274D:1664
cs=0x274d;eip=0x001666; 	T(ADD(bp, ax));	// 120120                  add     bp, ax ;~ 274D:1666
cs=0x274d;eip=0x001668; 	T(ADC(cx, dx));	// 120121                  adc     cx, dx ;~ 274D:1668
cs=0x274d;eip=0x00166a; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0A))));	// 120122                  mov     ax, [bx+0Ah] ;~ 274D:166A
cs=0x274d;eip=0x00166d; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x0C))));	// 120123                  imul    word ptr [si+0Ch] ;~ 274D:166D
cs=0x274d;eip=0x001670; 	T(SHL(ax, 1));	// 120124                  shl     ax, 1 ;~ 274D:1670
cs=0x274d;eip=0x001672; 	T(RCL(dx, 1));	// 120125                  rcl     dx, 1 ;~ 274D:1672
cs=0x274d;eip=0x001674; 	T(ADD(bp, ax));	// 120126                  add     bp, ax ;~ 274D:1674
cs=0x274d;eip=0x001676; 	T(ADC(cx, dx));	// 120127                  adc     cx, dx ;~ 274D:1676
cs=0x274d;eip=0x001678; 	X(MOV(*(dw*)(raddr(ds,di+6)), cx));	// 120128                  mov     [di+6], cx ;~ 274D:1678
cs=0x274d;eip=0x00167b; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 120129                  mov     ax, [bx+6] ;~ 274D:167B
cs=0x274d;eip=0x00167e; 	X(IMUL1_2(*(dw*)(raddr(ds,si+2))));	// 120130                  imul    word ptr [si+2] ;~ 274D:167E
cs=0x274d;eip=0x001681; 	T(SHL(ax, 1));	// 120131                  shl     ax, 1 ;~ 274D:1681
cs=0x274d;eip=0x001683; 	T(RCL(dx, 1));	// 120132                  rcl     dx, 1 ;~ 274D:1683
cs=0x274d;eip=0x001685; 	T(bp = ax;);	// 120133                  mov     bp, ax ;~ 274D:1685
cs=0x274d;eip=0x001687; 	T(cx = dx;);	// 120134                  mov     cx, dx ;~ 274D:1687
cs=0x274d;eip=0x001689; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 120135                  mov     ax, [bx+8] ;~ 274D:1689
cs=0x274d;eip=0x00168c; 	X(IMUL1_2(*(dw*)(raddr(ds,si+8))));	// 120136                  imul    word ptr [si+8] ;~ 274D:168C
cs=0x274d;eip=0x00168f; 	T(SHL(ax, 1));	// 120137                  shl     ax, 1 ;~ 274D:168F
cs=0x274d;eip=0x001691; 	T(RCL(dx, 1));	// 120138                  rcl     dx, 1 ;~ 274D:1691
cs=0x274d;eip=0x001693; 	T(ADD(bp, ax));	// 120139                  add     bp, ax ;~ 274D:1693
cs=0x274d;eip=0x001695; 	T(ADC(cx, dx));	// 120140                  adc     cx, dx ;~ 274D:1695
cs=0x274d;eip=0x001697; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0A))));	// 120141                  mov     ax, [bx+0Ah] ;~ 274D:1697
cs=0x274d;eip=0x00169a; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x0E))));	// 120142                  imul    word ptr [si+0Eh] ;~ 274D:169A
cs=0x274d;eip=0x00169d; 	T(SHL(ax, 1));	// 120143                  shl     ax, 1 ;~ 274D:169D
cs=0x274d;eip=0x00169f; 	T(RCL(dx, 1));	// 120144                  rcl     dx, 1 ;~ 274D:169F
cs=0x274d;eip=0x0016a1; 	T(ADD(bp, ax));	// 120145                  add     bp, ax ;~ 274D:16A1
cs=0x274d;eip=0x0016a3; 	T(ADC(cx, dx));	// 120146                  adc     cx, dx ;~ 274D:16A3
cs=0x274d;eip=0x0016a5; 	X(MOV(*(dw*)(raddr(ds,di+8)), cx));	// 120147                  mov     [di+8], cx ;~ 274D:16A5
cs=0x274d;eip=0x0016a8; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 120148                  mov     ax, [bx+6] ;~ 274D:16A8
cs=0x274d;eip=0x0016ab; 	X(IMUL1_2(*(dw*)(raddr(ds,si+4))));	// 120149                  imul    word ptr [si+4] ;~ 274D:16AB
cs=0x274d;eip=0x0016ae; 	T(SHL(ax, 1));	// 120150                  shl     ax, 1 ;~ 274D:16AE
cs=0x274d;eip=0x0016b0; 	T(RCL(dx, 1));	// 120151                  rcl     dx, 1 ;~ 274D:16B0
cs=0x274d;eip=0x0016b2; 	T(bp = ax;);	// 120152                  mov     bp, ax ;~ 274D:16B2
cs=0x274d;eip=0x0016b4; 	T(cx = dx;);	// 120153                  mov     cx, dx ;~ 274D:16B4
cs=0x274d;eip=0x0016b6; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 120154                  mov     ax, [bx+8] ;~ 274D:16B6
cs=0x274d;eip=0x0016b9; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x0A))));	// 120155                  imul    word ptr [si+0Ah] ;~ 274D:16B9
cs=0x274d;eip=0x0016bc; 	T(SHL(ax, 1));	// 120156                  shl     ax, 1 ;~ 274D:16BC
cs=0x274d;eip=0x0016be; 	T(RCL(dx, 1));	// 120157                  rcl     dx, 1 ;~ 274D:16BE
cs=0x274d;eip=0x0016c0; 	T(ADD(bp, ax));	// 120158                  add     bp, ax ;~ 274D:16C0
cs=0x274d;eip=0x0016c2; 	T(ADC(cx, dx));	// 120159                  adc     cx, dx ;~ 274D:16C2
cs=0x274d;eip=0x0016c4; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0A))));	// 120160                  mov     ax, [bx+0Ah] ;~ 274D:16C4
cs=0x274d;eip=0x0016c7; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x10))));	// 120161                  imul    word ptr [si+10h] ;~ 274D:16C7
cs=0x274d;eip=0x0016ca; 	T(SHL(ax, 1));	// 120162                  shl     ax, 1 ;~ 274D:16CA
cs=0x274d;eip=0x0016cc; 	T(RCL(dx, 1));	// 120163                  rcl     dx, 1 ;~ 274D:16CC
cs=0x274d;eip=0x0016ce; 	T(ADD(bp, ax));	// 120164                  add     bp, ax ;~ 274D:16CE
cs=0x274d;eip=0x0016d0; 	T(ADC(cx, dx));	// 120165                  adc     cx, dx ;~ 274D:16D0
cs=0x274d;eip=0x0016d2; 	X(MOV(*(dw*)(raddr(ds,di+0x0A)), cx));	// 120166                  mov     [di+0Ah], cx ;~ 274D:16D2
cs=0x274d;eip=0x0016d5; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0C))));	// 120167                  mov     ax, [bx+0Ch] ;~ 274D:16D5
cs=0x274d;eip=0x0016d8; 	X(IMUL1_2(*(dw*)(raddr(ds,si))));	// 120168                  imul    word ptr [si] ;~ 274D:16D8
cs=0x274d;eip=0x0016da; 	T(SHL(ax, 1));	// 120169                  shl     ax, 1 ;~ 274D:16DA
cs=0x274d;eip=0x0016dc; 	T(RCL(dx, 1));	// 120170                  rcl     dx, 1 ;~ 274D:16DC
cs=0x274d;eip=0x0016de; 	T(bp = ax;);	// 120171                  mov     bp, ax ;~ 274D:16DE
cs=0x274d;eip=0x0016e0; 	T(cx = dx;);	// 120172                  mov     cx, dx ;~ 274D:16E0
cs=0x274d;eip=0x0016e2; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0E))));	// 120173                  mov     ax, [bx+0Eh] ;~ 274D:16E2
cs=0x274d;eip=0x0016e5; 	X(IMUL1_2(*(dw*)(raddr(ds,si+6))));	// 120174                  imul    word ptr [si+6] ;~ 274D:16E5
cs=0x274d;eip=0x0016e8; 	T(SHL(ax, 1));	// 120175                  shl     ax, 1 ;~ 274D:16E8
cs=0x274d;eip=0x0016ea; 	T(RCL(dx, 1));	// 120176                  rcl     dx, 1 ;~ 274D:16EA
cs=0x274d;eip=0x0016ec; 	T(ADD(bp, ax));	// 120177                  add     bp, ax ;~ 274D:16EC
cs=0x274d;eip=0x0016ee; 	T(ADC(cx, dx));	// 120178                  adc     cx, dx ;~ 274D:16EE
cs=0x274d;eip=0x0016f0; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x10))));	// 120179                  mov     ax, [bx+10h] ;~ 274D:16F0
cs=0x274d;eip=0x0016f3; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x0C))));	// 120180                  imul    word ptr [si+0Ch] ;~ 274D:16F3
cs=0x274d;eip=0x0016f6; 	T(SHL(ax, 1));	// 120181                  shl     ax, 1 ;~ 274D:16F6
cs=0x274d;eip=0x0016f8; 	T(RCL(dx, 1));	// 120182                  rcl     dx, 1 ;~ 274D:16F8
cs=0x274d;eip=0x0016fa; 	T(ADD(bp, ax));	// 120183                  add     bp, ax ;~ 274D:16FA
cs=0x274d;eip=0x0016fc; 	T(ADC(cx, dx));	// 120184                  adc     cx, dx ;~ 274D:16FC
cs=0x274d;eip=0x0016fe; 	X(MOV(*(dw*)(raddr(ds,di+0x0C)), cx));	// 120185                  mov     [di+0Ch], cx ;~ 274D:16FE
cs=0x274d;eip=0x001701; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0C))));	// 120186                  mov     ax, [bx+0Ch] ;~ 274D:1701
cs=0x274d;eip=0x001704; 	X(IMUL1_2(*(dw*)(raddr(ds,si+2))));	// 120187                  imul    word ptr [si+2] ;~ 274D:1704
cs=0x274d;eip=0x001707; 	T(SHL(ax, 1));	// 120188                  shl     ax, 1 ;~ 274D:1707
cs=0x274d;eip=0x001709; 	T(RCL(dx, 1));	// 120189                  rcl     dx, 1 ;~ 274D:1709
cs=0x274d;eip=0x00170b; 	T(bp = ax;);	// 120190                  mov     bp, ax ;~ 274D:170B
cs=0x274d;eip=0x00170d; 	T(cx = dx;);	// 120191                  mov     cx, dx ;~ 274D:170D
cs=0x274d;eip=0x00170f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0E))));	// 120192                  mov     ax, [bx+0Eh] ;~ 274D:170F
cs=0x274d;eip=0x001712; 	X(IMUL1_2(*(dw*)(raddr(ds,si+8))));	// 120193                  imul    word ptr [si+8] ;~ 274D:1712
cs=0x274d;eip=0x001715; 	T(SHL(ax, 1));	// 120194                  shl     ax, 1 ;~ 274D:1715
cs=0x274d;eip=0x001717; 	T(RCL(dx, 1));	// 120195                  rcl     dx, 1 ;~ 274D:1717
cs=0x274d;eip=0x001719; 	T(ADD(bp, ax));	// 120196                  add     bp, ax ;~ 274D:1719
cs=0x274d;eip=0x00171b; 	T(ADC(cx, dx));	// 120197                  adc     cx, dx ;~ 274D:171B
cs=0x274d;eip=0x00171d; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x10))));	// 120198                  mov     ax, [bx+10h] ;~ 274D:171D
cs=0x274d;eip=0x001720; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x0E))));	// 120199                  imul    word ptr [si+0Eh] ;~ 274D:1720
cs=0x274d;eip=0x001723; 	T(SHL(ax, 1));	// 120200                  shl     ax, 1 ;~ 274D:1723
cs=0x274d;eip=0x001725; 	T(RCL(dx, 1));	// 120201                  rcl     dx, 1 ;~ 274D:1725
cs=0x274d;eip=0x001727; 	T(ADD(bp, ax));	// 120202                  add     bp, ax ;~ 274D:1727
cs=0x274d;eip=0x001729; 	T(ADC(cx, dx));	// 120203                  adc     cx, dx ;~ 274D:1729
cs=0x274d;eip=0x00172b; 	X(MOV(*(dw*)(raddr(ds,di+0x0E)), cx));	// 120204                  mov     [di+0Eh], cx ;~ 274D:172B
cs=0x274d;eip=0x00172e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0C))));	// 120205                  mov     ax, [bx+0Ch] ;~ 274D:172E
cs=0x274d;eip=0x001731; 	X(IMUL1_2(*(dw*)(raddr(ds,si+4))));	// 120206                  imul    word ptr [si+4] ;~ 274D:1731
cs=0x274d;eip=0x001734; 	T(SHL(ax, 1));	// 120207                  shl     ax, 1 ;~ 274D:1734
cs=0x274d;eip=0x001736; 	T(RCL(dx, 1));	// 120208                  rcl     dx, 1 ;~ 274D:1736
cs=0x274d;eip=0x001738; 	T(bp = ax;);	// 120209                  mov     bp, ax ;~ 274D:1738
cs=0x274d;eip=0x00173a; 	T(cx = dx;);	// 120210                  mov     cx, dx ;~ 274D:173A
cs=0x274d;eip=0x00173c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0E))));	// 120211                  mov     ax, [bx+0Eh] ;~ 274D:173C
cs=0x274d;eip=0x00173f; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x0A))));	// 120212                  imul    word ptr [si+0Ah] ;~ 274D:173F
cs=0x274d;eip=0x001742; 	T(SHL(ax, 1));	// 120213                  shl     ax, 1 ;~ 274D:1742
cs=0x274d;eip=0x001744; 	T(RCL(dx, 1));	// 120214                  rcl     dx, 1 ;~ 274D:1744
cs=0x274d;eip=0x001746; 	T(ADD(bp, ax));	// 120215                  add     bp, ax ;~ 274D:1746
cs=0x274d;eip=0x001748; 	T(ADC(cx, dx));	// 120216                  adc     cx, dx ;~ 274D:1748
cs=0x274d;eip=0x00174a; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x10))));	// 120217                  mov     ax, [bx+10h] ;~ 274D:174A
cs=0x274d;eip=0x00174d; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x10))));	// 120218                  imul    word ptr [si+10h] ;~ 274D:174D
cs=0x274d;eip=0x001750; 	T(SHL(ax, 1));	// 120219                  shl     ax, 1 ;~ 274D:1750
cs=0x274d;eip=0x001752; 	T(RCL(dx, 1));	// 120220                  rcl     dx, 1 ;~ 274D:1752
cs=0x274d;eip=0x001754; 	T(ADD(bp, ax));	// 120221                  add     bp, ax ;~ 274D:1754
cs=0x274d;eip=0x001756; 	T(ADC(cx, dx));	// 120222                  adc     cx, dx ;~ 274D:1756
cs=0x274d;eip=0x001758; 	X(MOV(*(dw*)(raddr(ds,di+0x10)), cx));	// 120223                  mov     [di+10h], cx ;~ 274D:1758
cs=0x274d;eip=0x00175b; 	J(RETN(0));	// 120224                  retn ;~ 274D:175B

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_3707d: 	goto sub_3707d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3720c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3720c:
    _begin:
cs=0x274d;eip=0x00175c; 	X(PUSH(bp));	// 120233                  push    bp ;~ 274D:175C
cs=0x274d;eip=0x00175d; 	X(PUSH(si));	// 120234                  push    si ;~ 274D:175D
cs=0x274d;eip=0x00175e; 	X(PUSH(di));	// 120235                  push    di ;~ 274D:175E
cs=0x274d;eip=0x00175f; 	T(LES(si, dword_4a46c));	// 120236                  les     si, dword_4A46C ;~ 274D:175F
cs=0x274d;eip=0x001763; 	J(CALL(sub_3721a,0));	// 120237                  call    sub_3721A ;~ 274D:1763
cs=0x274d;eip=0x001766; 	X(POP(di));	// 120238                  pop     di ;~ 274D:1766
cs=0x274d;eip=0x001767; 	X(POP(si));	// 120239                  pop     si ;~ 274D:1767
cs=0x274d;eip=0x001768; 	X(POP(bp));	// 120240                  pop     bp ;~ 274D:1768
cs=0x274d;eip=0x001769; 	J(RETF(0));	// 120241                  retf ;~ 274D:1769

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_3720c: 	goto sub_3720c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3721a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3721a:
    _begin:
cs=0x274d;eip=0x00176a; 	X(LODS(*(raddr(es,si)),si,1));	// 120250                  lods    byte ptr es:[si] ;~ 274D:176A
cs=0x274d;eip=0x00176c; 	T(OR(al, al));	// 120251                  or      al, al ;~ 274D:176C
cs=0x274d;eip=0x00176e; 	J(JZ(locret_37230));	// 120252                  jz      short locret_37230 ;~ 274D:176E
cs=0x274d;eip=0x001770; 	T(CMP(al, 0x0FF));	// 120253                  cmp     al, 0FFh ;~ 274D:1770
cs=0x274d;eip=0x001772; 	J(JZ(loc_37231));	// 120254                  jz      short loc_37231 ;~ 274D:1772
cs=0x274d;eip=0x001774; 	X(byte_4cdde = al;);	// 120255                  mov     ds:byte_4CDDE, al ;~ 274D:1774
loc_37227:
	// 7125 
cs=0x274d;eip=0x001777; 	J(CALL(sub_372a5,0));	// 120258                  call    sub_372A5 ;~ 274D:1777
cs=0x274d;eip=0x00177a; 	X(DEC(byte_4cdde));	// 120259                  dec     ds:byte_4CDDE ;~ 274D:177A
cs=0x274d;eip=0x00177e; 	J(JNZ(loc_37227));	// 120260                  jnz     short loc_37227 ;~ 274D:177E
locret_37230:
	// 7126 
cs=0x274d;eip=0x001780; 	J(RETN(0));	// 120263                  retn ;~ 274D:1780
loc_37231:
	// 7127 
cs=0x274d;eip=0x001781; 	T(ax = word_4a4e6;);	// 120267                  mov     ax, word_4A4E6 ;~ 274D:1781
cs=0x274d;eip=0x001784; 	T(bp = word_4a4e8;);	// 120268                  mov     bp, word_4A4E8 ;~ 274D:1784
cs=0x274d;eip=0x001788; 	T(cx = *(word_4a4e0););	// 120269                  mov     cx, word_4A4E0 ;~ 274D:1788
cs=0x274d;eip=0x00178c; 	T(di = 0x4340;);	// 120270                  mov     di, 4340h ;~ 274D:178C
cs=0x274d;eip=0x00178f; 	T(bx = di;);	// 120271                  mov     bx, di ;~ 274D:178F
loc_37241:
	// 7128 
cs=0x274d;eip=0x001791; 	T(SHR(bp, 1));	// 120274                  shr     bp, 1 ;~ 274D:1791
cs=0x274d;eip=0x001793; 	T(RCR(ax, 1));	// 120275                  rcr     ax, 1 ;~ 274D:1793
cs=0x274d;eip=0x001795; 	T(dl = 0x0FF;);	// 120276                  mov     dl, 0FFh ;~ 274D:1795
cs=0x274d;eip=0x001797; 	T(ADC(dl, 0));	// 120277                  adc     dl, 0 ;~ 274D:1797
cs=0x274d;eip=0x00179a; 	X(MOV(*(raddr(ds,di)), dl));	// 120278                  mov     [di], dl ;~ 274D:179A
cs=0x274d;eip=0x00179c; 	T(INC(di));	// 120279                  inc     di ;~ 274D:179C
cs=0x274d;eip=0x00179d; 	J(LOOP(loc_37241));	// 120280                  loop    loc_37241 ;~ 274D:179D
cs=0x274d;eip=0x00179f; 	T(di = 0x42FF;);	// 120281                  mov     di, 42FFh ;~ 274D:179F
cs=0x274d;eip=0x0017a2; 	X(PUSH(si));	// 120282                  push    si ;~ 274D:17A2
cs=0x274d;eip=0x0017a3; 	J(CALL(sub_3608c,0));	// 120283                  call    sub_3608C ;~ 274D:17A3
cs=0x274d;eip=0x0017a6; 	X(POP(si));	// 120284                  pop     si ;~ 274D:17A6
cs=0x274d;eip=0x0017a7; 	T(bx = *(word_4a4e0););	// 120285                  mov     bx, word_4A4E0 ;~ 274D:17A7
cs=0x274d;eip=0x0017ab; 	T(ax = bx;);	// 120286                  mov     ax, bx ;~ 274D:17AB
cs=0x274d;eip=0x0017ad; 	T(SHL(ax, 1));	// 120287                  shl     ax, 1 ;~ 274D:17AD
cs=0x274d;eip=0x0017af; 	T(ADD(si, ax));	// 120288                  add     si, ax ;~ 274D:17AF
cs=0x274d;eip=0x0017b1; 	T(INC(si));	// 120289                  inc     si ;~ 274D:17B1
cs=0x274d;eip=0x0017b2; 	X(word_4ce40 = si;);	// 120290                  mov     ds:word_4CE40, si ;~ 274D:17B2
cs=0x274d;eip=0x0017b6; 	T(ADD(si, ax));	// 120291                  add     si, ax ;~ 274D:17B6
cs=0x274d;eip=0x0017b8; 	X(word_4ce42 = si;);	// 120292                  mov     ds:word_4CE42, si ;~ 274D:17B8
cs=0x274d;eip=0x0017bc; 	T(ADD(si, bx));	// 120293                  add     si, bx ;~ 274D:17BC
cs=0x274d;eip=0x0017be; 	X(word_4ce44 = si;);	// 120294                  mov     ds:word_4CE44, si ;~ 274D:17BE
cs=0x274d;eip=0x0017c2; 	T(si = 0x42FF;);	// 120295                  mov     si, 42FFh ;~ 274D:17C2
cs=0x274d;eip=0x0017c5; 	T(LODSB);	// 120296                  lodsb ;~ 274D:17C5
loc_37276:
	// 7129 
cs=0x274d;eip=0x0017c6; 	T(SUB(ah, ah));	// 120299                  sub     ah, ah ;~ 274D:17C6
cs=0x274d;eip=0x0017c8; 	X(PUSH(si));	// 120300                  push    si ;~ 274D:17C8
cs=0x274d;eip=0x0017c9; 	T(di = word_4ce42;);	// 120301                  mov     di, ds:word_4CE42 ;~ 274D:17C9
cs=0x274d;eip=0x0017cd; 	T(ADD(di, ax));	// 120302                  add     di, ax ;~ 274D:17CD
cs=0x274d;eip=0x0017cf; 	T(MOV(bl, *(raddr(es,di))));	// 120303                  mov     bl, es:[di] ;~ 274D:17CF
cs=0x274d;eip=0x0017d2; 	X(byte_4ce46 = bl;);	// 120304                  mov     ds:byte_4CE46, bl ;~ 274D:17D2
cs=0x274d;eip=0x0017d6; 	T(si = word_4ce40;);	// 120305                  mov     si, ds:word_4CE40 ;~ 274D:17D6
cs=0x274d;eip=0x0017da; 	T(SHL(ax, 1));	// 120306                  shl     ax, 1 ;~ 274D:17DA
cs=0x274d;eip=0x0017dc; 	T(ADD(si, ax));	// 120307                  add     si, ax ;~ 274D:17DC
cs=0x274d;eip=0x0017de; 	T(MOV(si, *(dw*)(raddr(es,si))));	// 120308                  mov     si, es:[si] ;~ 274D:17DE
cs=0x274d;eip=0x0017e1; 	T(ADD(si, word_4ce44));	// 120309                  add     si, ds:word_4CE44 ;~ 274D:17E1
loc_37295:
	// 7130 
cs=0x274d;eip=0x0017e5; 	J(CALL(sub_372a5,0));	// 120312                  call    sub_372A5 ;~ 274D:17E5
cs=0x274d;eip=0x0017e8; 	X(DEC(byte_4ce46));	// 120313                  dec     ds:byte_4CE46 ;~ 274D:17E8
cs=0x274d;eip=0x0017ec; 	J(JNZ(loc_37295));	// 120314                  jnz     short loc_37295 ;~ 274D:17EC
cs=0x274d;eip=0x0017ee; 	X(POP(si));	// 120315                  pop     si ;~ 274D:17EE
cs=0x274d;eip=0x0017ef; 	T(LODSB);	// 120316                  lodsb ;~ 274D:17EF
cs=0x274d;eip=0x0017f0; 	T(CMP(al, 0x0FF));	// 120317                  cmp     al, 0FFh ;~ 274D:17F0
cs=0x274d;eip=0x0017f2; 	J(JNZ(loc_37276));	// 120318                  jnz     short loc_37276 ;~ 274D:17F2
cs=0x274d;eip=0x0017f4; 	J(RETN(0));	// 120319                  retn ;~ 274D:17F4

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_37227: 	goto loc_37227;
        case m2c::kloc_37231: 	goto loc_37231;
        case m2c::kloc_37241: 	goto loc_37241;
        case m2c::kloc_37276: 	goto loc_37276;
        case m2c::kloc_37295: 	goto loc_37295;
        case m2c::klocret_37230: 	goto locret_37230;
        case m2c::ksub_3721a: 	goto sub_3721a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group75(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group75:
    _begin:
sub_372a5:
	// 120326 
cs=0x274d;eip=0x0017f5; 	X(LODS(*(raddr(es,si)),si,1));	// 120328                  lods    byte ptr es:[si] ;~ 274D:17F5
cs=0x274d;eip=0x0017f7; 	T(bl = al;);	// 120329                  mov     bl, al ;~ 274D:17F7
cs=0x274d;eip=0x0017f9; 	T(AND(al, 3));	// 120330                  and     al, 3 ;~ 274D:17F9
cs=0x274d;eip=0x0017fb; 	T(CMP(al, 1));	// 120331                  cmp     al, 1 ;~ 274D:17FB
cs=0x274d;eip=0x0017fd; 	J(JZ(loc_372fe));	// 120332                  jz      short loc_372FE ;~ 274D:17FD
cs=0x274d;eip=0x0017ff; 	J(CALL(sub_37652,0));	// 120333                  call    sub_37652 ;~ 274D:17FF
cs=0x274d;eip=0x001802; 	J(JNZ(loc_372b8));	// 120334                  jnz     short loc_372B8 ;~ 274D:1802
cs=0x274d;eip=0x001804; 	T(ADD(si, 2));	// 120335                  add     si, 2 ;~ 274D:1804
cs=0x274d;eip=0x001807; 	J(RETN(0));	// 120336                  retn ;~ 274D:1807
loc_372b8:
	// 7131 
cs=0x274d;eip=0x001808; 	X(LODS(*(raddr(es,si)),si,1));	// 120340                  lods    byte ptr es:[si] ;~ 274D:1808
cs=0x274d;eip=0x00180a; 	T(SUB(ah, ah));	// 120341                  sub     ah, ah ;~ 274D:180A
cs=0x274d;eip=0x00180c; 	T(SHL(ax, 1));	// 120342                  shl     ax, 1 ;~ 274D:180C
cs=0x274d;eip=0x00180e; 	T(bx = ax;);	// 120343                  mov     bx, ax ;~ 274D:180E
cs=0x274d;eip=0x001810; 	T(SHL(bx, 1));	// 120344                  shl     bx, 1 ;~ 274D:1810
cs=0x274d;eip=0x001812; 	T(SHL(bx, 1));	// 120345                  shl     bx, 1 ;~ 274D:1812
cs=0x274d;eip=0x001814; 	T(cx = bx;);	// 120346                  mov     cx, bx ;~ 274D:1814
cs=0x274d;eip=0x001816; 	T(SHL(cx, 1));	// 120347                  shl     cx, 1 ;~ 274D:1816
cs=0x274d;eip=0x001818; 	T(ADD(bx, cx));	// 120348                  add     bx, cx ;~ 274D:1818
cs=0x274d;eip=0x00181a; 	T(ADD(bx, ax));	// 120349                  add     bx, ax ;~ 274D:181A
cs=0x274d;eip=0x00181c; 	T(ADD(bx, 0x328E));	// 120350                  add     bx, 328Eh ;~ 274D:181C
cs=0x274d;eip=0x001820; 	T(TEST(*(raddr(ds,bx+0x18)), 0x80));	// 120351                  test    byte ptr [bx+18h], 80h ;~ 274D:1820
cs=0x274d;eip=0x001824; 	J(JZ(loc_372d8));	// 120352                  jz      short loc_372D8 ;~ 274D:1824
cs=0x274d;eip=0x001826; 	T(INC(si));	// 120353                  inc     si ;~ 274D:1826
cs=0x274d;eip=0x001827; 	J(RETN(0));	// 120354                  retn ;~ 274D:1827
loc_372d8:
	// 7132 
cs=0x274d;eip=0x001828; 	X(LODS(*(raddr(es,si)),si,1));	// 120358                  lods    byte ptr es:[si] ;~ 274D:1828
cs=0x274d;eip=0x00182a; 	T(SUB(ah, ah));	// 120359                  sub     ah, ah ;~ 274D:182A
cs=0x274d;eip=0x00182c; 	T(di = ax;);	// 120360                  mov     di, ax ;~ 274D:182C
cs=0x274d;eip=0x00182e; 	T(MOV(ah, *(raddr(ds,di+0x18EC))));	// 120361                  mov     ah, [di+18ECh] ;~ 274D:182E
cs=0x274d;eip=0x001832; 	T(ADD(ah, *(byte_4a3ca)));	// 120362                  add     ah, byte_4A3CA ;~ 274D:1832
cs=0x274d;eip=0x001836; 	J(CALLF(sub_49a3e,0));	// 120363                  call    far ptr sub_49A3E ;~ 274D:1836
cs=0x274d;eip=0x00183b; 	T(MOV(cx, *(dw*)(raddr(ds,bx+8))));	// 120365                  mov     cx, [bx+8] ;~ 274D:183B
cs=0x274d;eip=0x00183e; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0C))));	// 120366                  mov     dx, [bx+0Ch] ;~ 274D:183E
cs=0x274d;eip=0x001841; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 120367                  mov     ax, [bx] ;~ 274D:1841
cs=0x274d;eip=0x001843; 	T(MOV(bx, *(dw*)(raddr(ds,bx+4))));	// 120368                  mov     bx, [bx+4] ;~ 274D:1843
cs=0x274d;eip=0x001846; 	X(PUSH(si));	// 120369                  push    si ;~ 274D:1846
cs=0x274d;eip=0x001847; 	J(CALLF(sub_49a39,0));	// 120370                  call    far ptr sub_49A39 ;~ 274D:1847
cs=0x274d;eip=0x00184c; 	X(POP(si));	// 120372                  pop     si ;~ 274D:184C
cs=0x274d;eip=0x00184d; 	J(RETN(0));	// 120373                  retn ;~ 274D:184D
loc_372fe:
	// 7133 
cs=0x274d;eip=0x00184e; 	X(LODS(*(raddr(es,si)),si,1));	// 120377                  lods    byte ptr es:[si] ;~ 274D:184E
cs=0x274d;eip=0x001850; 	T(SHR(bl, 1));	// 120378                  shr     bl, 1 ;~ 274D:1850
cs=0x274d;eip=0x001852; 	T(SHR(bl, 1));	// 120379                  shr     bl, 1 ;~ 274D:1852
cs=0x274d;eip=0x001854; 	T(cl = bl;);	// 120380                  mov     cl, bl ;~ 274D:1854
cs=0x274d;eip=0x001856; 	T(AND(bx, 0x1E));	// 120381                  and     bx, 1Eh ;~ 274D:1856
cs=0x274d;eip=0x001859; 	T(MOV(bx, *(dw*)(raddr(ds,bx+0x42DE))));	// 120382                  mov     bx, [bx+42DEh] ;~ 274D:1859
cs=0x274d;eip=0x00185d; 	T(TEST(cl, 0x20));	// 120383                  test    cl, 20h ;~ 274D:185D
cs=0x274d;eip=0x001860; 	J(JNZ(loc_3731e));	// 120384                  jnz     short loc_3731E ;~ 274D:1860
cs=0x274d;eip=0x001862; 	T(TEST(word_4a4e6, bx));	// 120385                  test    word_4A4E6, bx ;~ 274D:1862
cs=0x274d;eip=0x001866; 	J(JNZ(loc_37324));	// 120386                  jnz     short loc_37324 ;~ 274D:1866
loc_37318:
	// 7134 
cs=0x274d;eip=0x001868; 	T(SUB(ah, ah));	// 120390                  sub     ah, ah ;~ 274D:1868
cs=0x274d;eip=0x00186a; 	T(ADD(si, ax));	// 120391                  add     si, ax ;~ 274D:186A
cs=0x274d;eip=0x00186c; 	T(INC(si));	// 120392                  inc     si ;~ 274D:186C
cs=0x274d;eip=0x00186d; 	J(RETN(0));	// 120393                  retn ;~ 274D:186D
loc_3731e:
	// 7135 
cs=0x274d;eip=0x00186e; 	T(TEST(word_4a4e8, bx));	// 120397                  test    word_4A4E8, bx ;~ 274D:186E
cs=0x274d;eip=0x001872; 	J(JZ(loc_37318));	// 120398                  jz      short loc_37318 ;~ 274D:1872
loc_37324:
	// 7136 
cs=0x274d;eip=0x001874; 	X(byte_4ce47 = al;);	// 120401                  mov     ds:byte_4CE47, al ;~ 274D:1874
cs=0x274d;eip=0x001877; 	T(bl = al;);	// 120402                  mov     bl, al ;~ 274D:1877
cs=0x274d;eip=0x001879; 	T(SUB(bh, bh));	// 120403                  sub     bh, bh ;~ 274D:1879
cs=0x274d;eip=0x00187b; 	T(MOV(bl, *(raddr(es,bx+si))));	// 120404                  mov     bl, es:[bx+si] ;~ 274D:187B
cs=0x274d;eip=0x00187e; 	T(CMP(bl, 0x0FF));	// 120405                  cmp     bl, 0FFh ;~ 274D:187E
cs=0x274d;eip=0x001881; 	J(JZ(loc_37318));	// 120406                  jz      short loc_37318 ;~ 274D:1881
cs=0x274d;eip=0x001883; 	T(CMP(word_49ddc, 0x400));	// 120407                  cmp     word_49DDC, 400h ;~ 274D:1883
cs=0x274d;eip=0x001889; 	J(JNZ(loc_37340));	// 120408                  jnz     short loc_37340 ;~ 274D:1889
cs=0x274d;eip=0x00188b; 	T(CMP(bl, 1));	// 120409                  cmp     bl, 1 ;~ 274D:188B
cs=0x274d;eip=0x00188e; 	J(JNZ(loc_37318));	// 120410                  jnz     short loc_37318 ;~ 274D:188E
loc_37340:
	// 7137 
cs=0x274d;eip=0x001890; 	T(di = bx;);	// 120413                  mov     di, bx ;~ 274D:1890
cs=0x274d;eip=0x001892; 	T(MOV(ah, *(raddr(ds,di+0x18EC))));	// 120414                  mov     ah, [di+18ECh] ;~ 274D:1892
cs=0x274d;eip=0x001896; 	T(ADD(ah, *(byte_4a3ca)));	// 120415                  add     ah, byte_4A3CA ;~ 274D:1896
cs=0x274d;eip=0x00189a; 	J(CALLF(sub_49a3e,0));	// 120416                  call    far ptr sub_49A3E ;~ 274D:189A
cs=0x274d;eip=0x00189f; 	J(CALL(sub_37950,0));	// 120418                  call    sub_37950 ;~ 274D:189F
cs=0x274d;eip=0x0018a2; 	T(es = *(dw*)(((db*)&dword_4a46c)+2););	// 120419                  mov     es, word ptr dword_4A46C+2 ;~ 274D:18A2
cs=0x274d;eip=0x0018a6; 	X(byte_4ce48 = 0;);	// 120420                  mov     ds:byte_4CE48, 0 ;~ 274D:18A6
loc_3735b:
	// 7138 
cs=0x274d;eip=0x0018ab; 	X(LODS(*(raddr(es,si)),si,1));	// 120423                  lods    byte ptr es:[si] ;~ 274D:18AB
cs=0x274d;eip=0x0018ad; 	T(SUB(ah, ah));	// 120424                  sub     ah, ah ;~ 274D:18AD
cs=0x274d;eip=0x0018af; 	T(SHL(ax, 1));	// 120425                  shl     ax, 1 ;~ 274D:18AF
cs=0x274d;eip=0x0018b1; 	T(bx = ax;);	// 120426                  mov     bx, ax ;~ 274D:18B1
cs=0x274d;eip=0x0018b3; 	T(SHL(bx, 1));	// 120427                  shl     bx, 1 ;~ 274D:18B3
cs=0x274d;eip=0x0018b5; 	T(SHL(bx, 1));	// 120428                  shl     bx, 1 ;~ 274D:18B5
cs=0x274d;eip=0x0018b7; 	T(cx = bx;);	// 120429                  mov     cx, bx ;~ 274D:18B7
cs=0x274d;eip=0x0018b9; 	T(SHL(cx, 1));	// 120430                  shl     cx, 1 ;~ 274D:18B9
cs=0x274d;eip=0x0018bb; 	T(ADD(bx, cx));	// 120431                  add     bx, cx ;~ 274D:18BB
cs=0x274d;eip=0x0018bd; 	T(ADD(bx, ax));	// 120432                  add     bx, ax ;~ 274D:18BD
cs=0x274d;eip=0x0018bf; 	T(ADD(bx, 0x328E));	// 120433                  add     bx, 328Eh ;~ 274D:18BF
cs=0x274d;eip=0x0018c3; 	T(TEST(*(raddr(ds,bx+0x18)), 0x40));	// 120434                  test    byte ptr [bx+18h], 40h ;~ 274D:18C3
cs=0x274d;eip=0x0018c7; 	J(JZ(loc_373b1));	// 120435                  jz      short loc_373B1 ;~ 274D:18C7
cs=0x274d;eip=0x0018c9; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x10))));	// 120436                  mov     ax, [bx+10h] ;~ 274D:18C9
cs=0x274d;eip=0x0018cc; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x12))));	// 120437                  mov     dx, [bx+12h] ;~ 274D:18CC
cs=0x274d;eip=0x0018cf; 	T(MOV(cx, *(dw*)(raddr(ds,bx+0x14))));	// 120438                  mov     cx, [bx+14h] ;~ 274D:18CF
cs=0x274d;eip=0x0018d2; 	T(MOV(di, *(dw*)(raddr(ds,bx+0x16))));	// 120439                  mov     di, [bx+16h] ;~ 274D:18D2
cs=0x274d;eip=0x0018d5; 	T(CMP(byte_4ce48, 0));	// 120440                  cmp     ds:byte_4CE48, 0 ;~ 274D:18D5
cs=0x274d;eip=0x0018da; 	J(JNZ(loc_3739e));	// 120441                  jnz     short loc_3739E ;~ 274D:18DA
cs=0x274d;eip=0x0018dc; 	X(word_4ce49 = ax;);	// 120442                  mov     ds:word_4CE49, ax ;~ 274D:18DC
cs=0x274d;eip=0x0018df; 	X(word_4ce4b = dx;);	// 120443                  mov     ds:word_4CE4B, dx ;~ 274D:18DF
cs=0x274d;eip=0x0018e3; 	X(word_4ce4d = cx;);	// 120444                  mov     ds:word_4CE4D, cx ;~ 274D:18E3
cs=0x274d;eip=0x0018e7; 	X(word_4ce4f = di;);	// 120445                  mov     ds:word_4CE4F, di ;~ 274D:18E7
cs=0x274d;eip=0x0018eb; 	J(JMP(loc_373ad));	// 120446                  jmp     short loc_373AD ;~ 274D:18EB
loc_3739e:
	// 7139 
cs=0x274d;eip=0x0018ee; 	X(word_4ce51 = ax;);	// 120452                  mov     ds:word_4CE51, ax ;~ 274D:18EE
cs=0x274d;eip=0x0018f1; 	X(word_4ce53 = dx;);	// 120453                  mov     ds:word_4CE53, dx ;~ 274D:18F1
cs=0x274d;eip=0x0018f5; 	X(word_4ce55 = cx;);	// 120454                  mov     ds:word_4CE55, cx ;~ 274D:18F5
cs=0x274d;eip=0x0018f9; 	X(word_4ce57 = di;);	// 120455                  mov     ds:word_4CE57, di ;~ 274D:18F9
loc_373ad:
	// 7140 
cs=0x274d;eip=0x0018fd; 	X(INC(byte_4ce48));	// 120458                  inc     ds:byte_4CE48 ;~ 274D:18FD
loc_373b1:
	// 7141 
cs=0x274d;eip=0x001901; 	X(PUSH(si));	// 120461                  push    si ;~ 274D:1901
cs=0x274d;eip=0x001902; 	J(CALL(sub_373ea,0));	// 120462                  call    sub_373EA ;~ 274D:1902
cs=0x274d;eip=0x001905; 	X(POP(si));	// 120463                  pop     si ;~ 274D:1905
cs=0x274d;eip=0x001906; 	X(DEC(byte_4ce47));	// 120464                  dec     ds:byte_4CE47 ;~ 274D:1906
cs=0x274d;eip=0x00190a; 	J(JNZ(loc_3735b));	// 120465                  jnz     short loc_3735B ;~ 274D:190A
cs=0x274d;eip=0x00190c; 	T(INC(si));	// 120466                  inc     si ;~ 274D:190C
cs=0x274d;eip=0x00190d; 	X(PUSH(si));	// 120467                  push    si ;~ 274D:190D
cs=0x274d;eip=0x00190e; 	T(CMP(byte_4ce48, 2));	// 120468                  cmp     ds:byte_4CE48, 2 ;~ 274D:190E
cs=0x274d;eip=0x001913; 	J(JL(loc_373d9));	// 120469                  jl      short loc_373D9 ;~ 274D:1913
cs=0x274d;eip=0x001915; 	X(byte_4ce61 = 0;);	// 120470                  mov     ds:byte_4CE61, 0 ;~ 274D:1915
cs=0x274d;eip=0x00191a; 	T(di = 0x4369;);	// 120471                  mov     di, 4369h ;~ 274D:191A
cs=0x274d;eip=0x00191d; 	J(CALL(sub_35c0d,0));	// 120472                  call    sub_35C0D ;~ 274D:191D
cs=0x274d;eip=0x001920; 	T(es = *(dw*)(((db*)&dword_4a46c)+2););	// 120473                  mov     es, word ptr dword_4A46C+2 ;~ 274D:1920
cs=0x274d;eip=0x001924; 	T(bx = di;);	// 120474                  mov     bx, di ;~ 274D:1924
cs=0x274d;eip=0x001926; 	J(CALL(sub_373ea,0));	// 120475                  call    sub_373EA ;~ 274D:1926
loc_373d9:
	// 7142 
cs=0x274d;eip=0x001929; 	T(ax = word_4db09;);	// 120478                  mov     ax, ds:word_4DB09 ;~ 274D:1929
cs=0x274d;eip=0x00192c; 	T(cx = word_4db0b;);	// 120479                  mov     cx, ds:word_4DB0B ;~ 274D:192C
cs=0x274d;eip=0x001930; 	T(bx = 0x4CB5;);	// 120480                  mov     bx, 4CB5h ;~ 274D:1930
cs=0x274d;eip=0x001933; 	J(CALLF(sub_49a57,0));	// 120481                  call    far ptr sub_49A57 ;~ 274D:1933
seg35ab_1938_proc:
	// 120485 
cs=0x274d;eip=0x001938; 	X(POP(si));	// 120485                  pop     si ;~ 274D:1938
cs=0x274d;eip=0x001939; 	J(RETN(0));	// 120486                  retn ;~ 274D:1939

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_372b8: 	goto loc_372b8;
        case m2c::kloc_372d8: 	goto loc_372d8;
        case m2c::kloc_372fe: 	goto loc_372fe;
        case m2c::kloc_37318: 	goto loc_37318;
        case m2c::kloc_3731e: 	goto loc_3731e;
        case m2c::kloc_37324: 	goto loc_37324;
        case m2c::kloc_37340: 	goto loc_37340;
        case m2c::kloc_3735b: 	goto loc_3735b;
        case m2c::kloc_3739e: 	goto loc_3739e;
        case m2c::kloc_373ad: 	goto loc_373ad;
        case m2c::kloc_373b1: 	goto loc_373b1;
        case m2c::kloc_373d9: 	goto loc_373d9;
        case m2c::kseg35ab_1938_proc: 	goto seg35ab_1938_proc;
        case m2c::ksub_372a5: 	goto sub_372a5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_373ea(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_373ea:
    _begin:
cs=0x274d;eip=0x00193a; 	T(TEST(*(raddr(ds,bx+0x18)), 0x80));	// 120493                  test    byte ptr [bx+18h], 80h ;~ 274D:193A
cs=0x274d;eip=0x00193e; 	J(JNZ(loc_3740c));	// 120494                  jnz     short loc_3740C ;~ 274D:193E
cs=0x274d;eip=0x001940; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 120495                  mov     ax, [bx] ;~ 274D:1940
cs=0x274d;eip=0x001942; 	X(word_4d78d = ax;);	// 120496                  mov     ds:word_4D78D, ax ;~ 274D:1942
cs=0x274d;eip=0x001945; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 120497                  mov     ax, [bx+4] ;~ 274D:1945
cs=0x274d;eip=0x001948; 	X(word_4d791 = ax;);	// 120498                  mov     ds:word_4D791, ax ;~ 274D:1948
cs=0x274d;eip=0x00194b; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 120499                  mov     ax, [bx+8] ;~ 274D:194B
cs=0x274d;eip=0x00194e; 	X(word_4d78f = ax;);	// 120500                  mov     ds:word_4D78F, ax ;~ 274D:194E
cs=0x274d;eip=0x001951; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0C))));	// 120501                  mov     ax, [bx+0Ch] ;~ 274D:1951
cs=0x274d;eip=0x001954; 	X(word_4d793 = ax;);	// 120502                  mov     ds:word_4D793, ax ;~ 274D:1954
cs=0x274d;eip=0x001957; 	X(PUSH(bx));	// 120503                  push    bx ;~ 274D:1957
cs=0x274d;eip=0x001958; 	J(CALL(sub_379e4,0));	// 120504                  call    sub_379E4 ;~ 274D:1958
cs=0x274d;eip=0x00195b; 	X(POP(bx));	// 120505                  pop     bx ;~ 274D:195B
loc_3740c:
	// 7143 
cs=0x274d;eip=0x00195c; 	T(TEST(*(raddr(ds,bx+0x18)), 0x20));	// 120508                  test    byte ptr [bx+18h], 20h ;~ 274D:195C
cs=0x274d;eip=0x001960; 	J(JZ(loc_37423));	// 120509                  jz      short loc_37423 ;~ 274D:1960
cs=0x274d;eip=0x001962; 	T(MOV(si, *(dw*)(raddr(ds,bx))));	// 120510                  mov     si, [bx] ;~ 274D:1962
cs=0x274d;eip=0x001964; 	T(MOV(di, *(dw*)(raddr(ds,bx+4))));	// 120511                  mov     di, [bx+4] ;~ 274D:1964
cs=0x274d;eip=0x001967; 	T(MOV(dx, *(dw*)(raddr(ds,bx+6))));	// 120512                  mov     dx, [bx+6] ;~ 274D:1967
cs=0x274d;eip=0x00196a; 	X(PUSH(bx));	// 120513                  push    bx ;~ 274D:196A
cs=0x274d;eip=0x00196b; 	J(CALL(sub_37986,0));	// 120514                  call    sub_37986 ;~ 274D:196B
cs=0x274d;eip=0x00196e; 	T(es = *(dw*)(((db*)&dword_4a46c)+2););	// 120516                  mov     es, word ptr dword_4A46C+2 ;~ 274D:196E
cs=0x274d;eip=0x001972; 	X(POP(bx));	// 120518                  pop     bx ;~ 274D:1972
loc_37423:
	// 7144 
cs=0x274d;eip=0x001973; 	T(TEST(*(raddr(ds,bx+0x18)), 0x10));	// 120521                  test    byte ptr [bx+18h], 10h ;~ 274D:1973
cs=0x274d;eip=0x001977; 	J(JZ(locret_37439));	// 120522                  jz      short locret_37439 ;~ 274D:1977
cs=0x274d;eip=0x001979; 	T(MOV(si, *(dw*)(raddr(ds,bx+8))));	// 120523                  mov     si, [bx+8] ;~ 274D:1979
cs=0x274d;eip=0x00197c; 	T(MOV(di, *(dw*)(raddr(ds,bx+0x0C))));	// 120524                  mov     di, [bx+0Ch] ;~ 274D:197C
cs=0x274d;eip=0x00197f; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0E))));	// 120525                  mov     dx, [bx+0Eh] ;~ 274D:197F
cs=0x274d;eip=0x001982; 	J(CALL(sub_37986,0));	// 120526                  call    sub_37986 ;~ 274D:1982
cs=0x274d;eip=0x001985; 	T(es = *(dw*)(((db*)&dword_4a46c)+2););	// 120528                  mov     es, word ptr dword_4A46C+2 ;~ 274D:1985
locret_37439:
	// 7145 
cs=0x274d;eip=0x001989; 	J(RETN(0));	// 120532                  retn ;~ 274D:1989

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_3740c: 	goto loc_3740c;
        case m2c::kloc_37423: 	goto loc_37423;
        case m2c::klocret_37439: 	goto locret_37439;
        case m2c::ksub_373ea: 	goto sub_373ea;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg35ab_198a_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg35ab_198a_proc:
    _begin:
loc_3743a:
	// 7146 
cs=0x274d;eip=0x00198a; 	T(ax = word_4a486;);	// 120539                  mov     ax, word_4A486 ;~ 274D:198A
cs=0x274d;eip=0x00198d; 	T(CMP(ax, 1));	// 120540                  cmp     ax, 1 ;~ 274D:198D
cs=0x274d;eip=0x001990; 	J(JL(locret_37497));	// 120541                  jl      short locret_37497 ;~ 274D:1990
cs=0x274d;eip=0x001992; 	X(*(word_4a8b6) = ax;);	// 120542                  mov     word_4A8B6, ax ;~ 274D:1992
cs=0x274d;eip=0x001995; 	T(ax = word_4a484;);	// 120543                  mov     ax, word_4A484 ;~ 274D:1995
cs=0x274d;eip=0x001998; 	X(word_4a8b4 = ax;);	// 120544                  mov     word_4A8B4, ax ;~ 274D:1998
cs=0x274d;eip=0x00199b; 	T(ax = word_4a47c;);	// 120545                  mov     ax, word_4A47C ;~ 274D:199B
cs=0x274d;eip=0x00199e; 	X(word_4a4ec = ax;);	// 120546                  mov     word_4A4EC, ax ;~ 274D:199E
cs=0x274d;eip=0x0019a1; 	T(ax = word_4a47e;);	// 120547                  mov     ax, word_4A47E ;~ 274D:19A1
cs=0x274d;eip=0x0019a4; 	X(*(word_4a4ee) = ax;);	// 120548                  mov     word_4A4EE, ax ;~ 274D:19A4
cs=0x274d;eip=0x0019a7; 	T(ax = word_4a480;);	// 120549                  mov     ax, word_4A480 ;~ 274D:19A7
cs=0x274d;eip=0x0019aa; 	X(word_4a6d0 = ax;);	// 120550                  mov     word_4A6D0, ax ;~ 274D:19AA
cs=0x274d;eip=0x0019ad; 	T(ax = word_4a482;);	// 120551                  mov     ax, word_4A482 ;~ 274D:19AD
cs=0x274d;eip=0x0019b0; 	X(*(word_4a6d2) = ax;);	// 120552                  mov     word_4A6D2, ax ;~ 274D:19B0
cs=0x274d;eip=0x0019b3; 	T(INC(si));	// 120553                  inc     si ;~ 274D:19B3
cs=0x274d;eip=0x0019b4; 	X(LODS(*(raddr(es,si)),si,1));	// 120554                  lods    byte ptr es:[si] ;~ 274D:19B4
cs=0x274d;eip=0x0019b6; 	T(SUB(ah, ah));	// 120555                  sub     ah, ah ;~ 274D:19B6
cs=0x274d;eip=0x0019b8; 	T(di = ax;);	// 120556                  mov     di, ax ;~ 274D:19B8
cs=0x274d;eip=0x0019ba; 	T(MOV(ah, *(raddr(ds,di+0x18EC))));	// 120557                  mov     ah, [di+18ECh] ;~ 274D:19BA
cs=0x274d;eip=0x0019be; 	T(ADD(ah, *(byte_4a3ca)));	// 120558                  add     ah, byte_4A3CA ;~ 274D:19BE
cs=0x274d;eip=0x0019c2; 	J(CALLF(sub_49a3e,0));	// 120559                  call    far ptr sub_49A3E ;~ 274D:19C2
cs=0x274d;eip=0x0019c7; 	J(CALL(sub_35bc3,0));	// 120561                  call    sub_35BC3 ;~ 274D:19C7
cs=0x274d;eip=0x0019ca; 	T(SUB(bx, bx));	// 120562                  sub     bx, bx ;~ 274D:19CA
cs=0x274d;eip=0x0019cc; 	J(CALL(sub_35b28,0));	// 120563                  call    sub_35B28 ;~ 274D:19CC
cs=0x274d;eip=0x0019cf; 	J(CALL(sub_35be7,0));	// 120564                  call    sub_35BE7 ;~ 274D:19CF
cs=0x274d;eip=0x0019d2; 	T(ax = *(word_4aa98););	// 120565                  mov     ax, word_4AA98 ;~ 274D:19D2
cs=0x274d;eip=0x0019d5; 	X(word_4d78d = ax;);	// 120566                  mov     ds:word_4D78D, ax ;~ 274D:19D5
cs=0x274d;eip=0x0019d8; 	X(word_4d78f = ax;);	// 120567                  mov     ds:word_4D78F, ax ;~ 274D:19D8
cs=0x274d;eip=0x0019db; 	T(ax = *(word_4ac7c););	// 120568                  mov     ax, word_4AC7C ;~ 274D:19DB
cs=0x274d;eip=0x0019de; 	X(word_4d791 = ax;);	// 120569                  mov     ds:word_4D791, ax ;~ 274D:19DE
cs=0x274d;eip=0x0019e1; 	X(word_4d793 = ax;);	// 120570                  mov     ds:word_4D793, ax ;~ 274D:19E1
cs=0x274d;eip=0x0019e4; 	J(CALL(sub_37766,0));	// 120571                  call    sub_37766 ;~ 274D:19E4
locret_37497:
	// 7147 
cs=0x274d;eip=0x0019e7; 	J(RETN(0));	// 120575                  retn ;~ 274D:19E7
loc_37498:
	// 7148 
cs=0x274d;eip=0x0019e8; 	X(LODS(*(raddr(es,si)),si,1));	// 120581                  lods    byte ptr es:[si] ;~ 274D:19E8
cs=0x274d;eip=0x0019ea; 	T(SUB(ah, ah));	// 120582                  sub     ah, ah ;~ 274D:19EA
cs=0x274d;eip=0x0019ec; 	T(di = ax;);	// 120583                  mov     di, ax ;~ 274D:19EC
cs=0x274d;eip=0x0019ee; 	T(MOV(bl, *(raddr(ds,di-0x7748))));	// 120584                  mov     bl, [di-7748h] ;~ 274D:19EE
cs=0x274d;eip=0x0019f2; 	T(SUB(bh, bh));	// 120585                  sub     bh, bh ;~ 274D:19F2
cs=0x274d;eip=0x0019f4; 	T(SHL(bx, 1));	// 120586                  shl     bx, 1 ;~ 274D:19F4
cs=0x274d;eip=0x0019f6; 	T(MOV(cx, *(dw*)(raddr(ds,bx-0x6A30))));	// 120587                  mov     cx, [bx-6A30h] ;~ 274D:19F6
cs=0x274d;eip=0x0019fa; 	T(MOV(bl, *(raddr(ds,di-0x7802))));	// 120588                  mov     bl, [di-7802h] ;~ 274D:19FA
cs=0x274d;eip=0x0019fe; 	T(SUB(bh, bh));	// 120589                  sub     bh, bh ;~ 274D:19FE
cs=0x274d;eip=0x001a00; 	T(SHL(bx, 1));	// 120590                  shl     bx, 1 ;~ 274D:1A00
cs=0x274d;eip=0x001a02; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x6A72))));	// 120591                  mov     ax, [bx-6A72h] ;~ 274D:1A02
cs=0x274d;eip=0x001a06; 	X(word_4ce63 = ax;);	// 120592                  mov     ds:word_4CE63, ax ;~ 274D:1A06
cs=0x274d;eip=0x001a09; 	T(MOV(bl, *(raddr(ds,di-0x79A2))));	// 120593                  mov     bl, [di-79A2h] ;~ 274D:1A09
cs=0x274d;eip=0x001a0d; 	T(SUB(bh, bh));	// 120594                  sub     bh, bh ;~ 274D:1A0D
cs=0x274d;eip=0x001a0f; 	T(SHL(bx, 1));	// 120595                  shl     bx, 1 ;~ 274D:1A0F
cs=0x274d;eip=0x001a11; 	T(MOV(bx, *(dw*)(raddr(ds,bx-0x6AB4))));	// 120596                  mov     bx, [bx-6AB4h] ;~ 274D:1A11
cs=0x274d;eip=0x001a15; 	X(PUSH(si));	// 120597                  push    si ;~ 274D:1A15
cs=0x274d;eip=0x001a16; 	T(ax = word_4ce63;);	// 120598                  mov     ax, ds:word_4CE63 ;~ 274D:1A16
cs=0x274d;eip=0x001a19; 	X(IMUL1_2(word_4a4d6));	// 120599                  imul    word_4A4D6 ;~ 274D:1A19
cs=0x274d;eip=0x001a1d; 	T(di = dx;);	// 120600                  mov     di, dx ;~ 274D:1A1D
cs=0x274d;eip=0x001a1f; 	T(si = ax;);	// 120601                  mov     si, ax ;~ 274D:1A1F
cs=0x274d;eip=0x001a21; 	T(ax = word_4a4d0;);	// 120602                  mov     ax, word_4A4D0 ;~ 274D:1A21
cs=0x274d;eip=0x001a24; 	T(IMUL1_2(cx));	// 120603                  imul    cx ;~ 274D:1A24
cs=0x274d;eip=0x001a26; 	T(ADD(si, ax));	// 120604                  add     si, ax ;~ 274D:1A26
cs=0x274d;eip=0x001a28; 	T(ADC(di, dx));	// 120605                  adc     di, dx ;~ 274D:1A28
cs=0x274d;eip=0x001a2a; 	T(ax = word_4a4ca;);	// 120606                  mov     ax, word_4A4CA ;~ 274D:1A2A
cs=0x274d;eip=0x001a2d; 	T(IMUL1_2(bx));	// 120607                  imul    bx ;~ 274D:1A2D
cs=0x274d;eip=0x001a2f; 	T(ADD(si, ax));	// 120608                  add     si, ax ;~ 274D:1A2F
cs=0x274d;eip=0x001a31; 	T(ADC(di, dx));	// 120609                  adc     di, dx ;~ 274D:1A31
cs=0x274d;eip=0x001a33; 	T(SHL(si, 1));	// 120610                  shl     si, 1 ;~ 274D:1A33
cs=0x274d;eip=0x001a35; 	T(RCL(di, 1));	// 120611                  rcl     di, 1 ;~ 274D:1A35
cs=0x274d;eip=0x001a37; 	T(ADD(si, word_4a47c));	// 120612                  add     si, word_4A47C ;~ 274D:1A37
cs=0x274d;eip=0x001a3b; 	T(ADC(di, word_4a47e));	// 120613                  adc     di, word_4A47E ;~ 274D:1A3B
cs=0x274d;eip=0x001a3f; 	X(word_4a4ec = si;);	// 120614                  mov     word_4A4EC, si ;~ 274D:1A3F
cs=0x274d;eip=0x001a43; 	X(*(word_4a4ee) = di;);	// 120615                  mov     word_4A4EE, di ;~ 274D:1A43
cs=0x274d;eip=0x001a47; 	T(ax = word_4ce63;);	// 120616                  mov     ax, ds:word_4CE63 ;~ 274D:1A47
cs=0x274d;eip=0x001a4a; 	X(IMUL1_2(word_4a4d8));	// 120617                  imul    word_4A4D8 ;~ 274D:1A4A
cs=0x274d;eip=0x001a4e; 	T(di = dx;);	// 120618                  mov     di, dx ;~ 274D:1A4E
cs=0x274d;eip=0x001a50; 	T(si = ax;);	// 120619                  mov     si, ax ;~ 274D:1A50
cs=0x274d;eip=0x001a52; 	T(ax = word_4a4d2;);	// 120620                  mov     ax, word_4A4D2 ;~ 274D:1A52
cs=0x274d;eip=0x001a55; 	T(IMUL1_2(cx));	// 120621                  imul    cx ;~ 274D:1A55
cs=0x274d;eip=0x001a57; 	T(ADD(si, ax));	// 120622                  add     si, ax ;~ 274D:1A57
cs=0x274d;eip=0x001a59; 	T(ADC(di, dx));	// 120623                  adc     di, dx ;~ 274D:1A59
cs=0x274d;eip=0x001a5b; 	T(ax = word_4a4cc;);	// 120624                  mov     ax, word_4A4CC ;~ 274D:1A5B
cs=0x274d;eip=0x001a5e; 	T(IMUL1_2(bx));	// 120625                  imul    bx ;~ 274D:1A5E
cs=0x274d;eip=0x001a60; 	T(ADD(si, ax));	// 120626                  add     si, ax ;~ 274D:1A60
cs=0x274d;eip=0x001a62; 	T(ADC(di, dx));	// 120627                  adc     di, dx ;~ 274D:1A62
cs=0x274d;eip=0x001a64; 	T(SHL(si, 1));	// 120628                  shl     si, 1 ;~ 274D:1A64
cs=0x274d;eip=0x001a66; 	T(RCL(di, 1));	// 120629                  rcl     di, 1 ;~ 274D:1A66
cs=0x274d;eip=0x001a68; 	T(ADD(si, word_4a480));	// 120630                  add     si, word_4A480 ;~ 274D:1A68
cs=0x274d;eip=0x001a6c; 	T(ADC(di, word_4a482));	// 120631                  adc     di, word_4A482 ;~ 274D:1A6C
cs=0x274d;eip=0x001a70; 	X(word_4a6d0 = si;);	// 120632                  mov     word_4A6D0, si ;~ 274D:1A70
cs=0x274d;eip=0x001a74; 	X(*(word_4a6d2) = di;);	// 120633                  mov     word_4A6D2, di ;~ 274D:1A74
cs=0x274d;eip=0x001a78; 	T(ax = word_4ce63;);	// 120634                  mov     ax, ds:word_4CE63 ;~ 274D:1A78
cs=0x274d;eip=0x001a7b; 	X(IMUL1_2(word_4a4da));	// 120635                  imul    word_4A4DA ;~ 274D:1A7B
cs=0x274d;eip=0x001a7f; 	T(di = dx;);	// 120636                  mov     di, dx ;~ 274D:1A7F
cs=0x274d;eip=0x001a81; 	T(si = ax;);	// 120637                  mov     si, ax ;~ 274D:1A81
cs=0x274d;eip=0x001a83; 	T(ax = word_4a4d4;);	// 120638                  mov     ax, word_4A4D4 ;~ 274D:1A83
cs=0x274d;eip=0x001a86; 	T(IMUL1_2(cx));	// 120639                  imul    cx ;~ 274D:1A86
cs=0x274d;eip=0x001a88; 	T(ADD(si, ax));	// 120640                  add     si, ax ;~ 274D:1A88
cs=0x274d;eip=0x001a8a; 	T(ADC(di, dx));	// 120641                  adc     di, dx ;~ 274D:1A8A
cs=0x274d;eip=0x001a8c; 	T(ax = word_4a4ce;);	// 120642                  mov     ax, word_4A4CE ;~ 274D:1A8C
cs=0x274d;eip=0x001a8f; 	T(IMUL1_2(bx));	// 120643                  imul    bx ;~ 274D:1A8F
cs=0x274d;eip=0x001a91; 	T(ADD(si, ax));	// 120644                  add     si, ax ;~ 274D:1A91
cs=0x274d;eip=0x001a93; 	T(ADC(di, dx));	// 120645                  adc     di, dx ;~ 274D:1A93
cs=0x274d;eip=0x001a95; 	T(SHL(si, 1));	// 120646                  shl     si, 1 ;~ 274D:1A95
cs=0x274d;eip=0x001a97; 	T(RCL(di, 1));	// 120647                  rcl     di, 1 ;~ 274D:1A97
cs=0x274d;eip=0x001a99; 	T(ADD(si, word_4a484));	// 120648                  add     si, word_4A484 ;~ 274D:1A99
cs=0x274d;eip=0x001a9d; 	T(ADC(di, word_4a486));	// 120649                  adc     di, word_4A486 ;~ 274D:1A9D
cs=0x274d;eip=0x001aa1; 	X(word_4a8b4 = si;);	// 120650                  mov     word_4A8B4, si ;~ 274D:1AA1
cs=0x274d;eip=0x001aa5; 	X(*(word_4a8b6) = di;);	// 120651                  mov     word_4A8B6, di ;~ 274D:1AA5
cs=0x274d;eip=0x001aa9; 	T(bx = 8;);	// 120652                  mov     bx, 8 ;~ 274D:1AA9
cs=0x274d;eip=0x001aac; 	T(CMP(di, 0x1388));	// 120653                  cmp     di, 1388h ;~ 274D:1AAC
cs=0x274d;eip=0x001ab0; 	J(JG(loc_3756c));	// 120654                  jg      short loc_3756C ;~ 274D:1AB0
cs=0x274d;eip=0x001ab2; 	T(DEC(bx));	// 120655                  dec     bx ;~ 274D:1AB2
cs=0x274d;eip=0x001ab3; 	T(CMP(di, 0x9C4));	// 120656                  cmp     di, 9C4h ;~ 274D:1AB3
cs=0x274d;eip=0x001ab7; 	J(JG(loc_3756c));	// 120657                  jg      short loc_3756C ;~ 274D:1AB7
cs=0x274d;eip=0x001ab9; 	T(bx = 0x0F;);	// 120658                  mov     bx, 0Fh ;~ 274D:1AB9
loc_3756c:
	// 7149 
cs=0x274d;eip=0x001abc; 	T(MOV(ah, *(raddr(ds,bx+0x18EC))));	// 120662                  mov     ah, [bx+18ECh] ;~ 274D:1ABC
cs=0x274d;eip=0x001ac0; 	J(CALLF(sub_49a3e,0));	// 120663                  call    far ptr sub_49A3E ;~ 274D:1AC0
cs=0x274d;eip=0x001ac5; 	T(SUB(bx, bx));	// 120665                  sub     bx, bx ;~ 274D:1AC5
cs=0x274d;eip=0x001ac7; 	J(CALL(sub_35b28,0));	// 120666                  call    sub_35B28 ;~ 274D:1AC7
cs=0x274d;eip=0x001aca; 	T(ax = *(word_4aa98););	// 120667                  mov     ax, word_4AA98 ;~ 274D:1ACA
cs=0x274d;eip=0x001acd; 	X(word_4d78d = ax;);	// 120668                  mov     ds:word_4D78D, ax ;~ 274D:1ACD
cs=0x274d;eip=0x001ad0; 	X(word_4d78f = ax;);	// 120669                  mov     ds:word_4D78F, ax ;~ 274D:1AD0
cs=0x274d;eip=0x001ad3; 	T(ax = *(word_4ac7c););	// 120670                  mov     ax, word_4AC7C ;~ 274D:1AD3
cs=0x274d;eip=0x001ad6; 	X(word_4d791 = ax;);	// 120671                  mov     ds:word_4D791, ax ;~ 274D:1AD6
cs=0x274d;eip=0x001ad9; 	X(word_4d793 = ax;);	// 120672                  mov     ds:word_4D793, ax ;~ 274D:1AD9
cs=0x274d;eip=0x001adc; 	J(CALL(sub_37766,0));	// 120673                  call    sub_37766 ;~ 274D:1ADC
cs=0x274d;eip=0x001adf; 	X(POP(si));	// 120675                  pop     si ;~ 274D:1ADF
cs=0x274d;eip=0x001ae0; 	T(es = *(dw*)(((db*)&dword_4a46c)+2););	// 120676                  mov     es, word ptr dword_4A46C+2 ;~ 274D:1AE0
cs=0x274d;eip=0x001ae4; 	X(DEC(byte_4ce62));	// 120678                  dec     ds:byte_4CE62 ;~ 274D:1AE4
cs=0x274d;eip=0x001ae8; 	J(JZ(loc_3759d));	// 120679                  jz      short loc_3759D ;~ 274D:1AE8
cs=0x274d;eip=0x001aea; 	J(JMP(loc_37498));	// 120680                  jmp     loc_37498 ;~ 274D:1AEA
loc_3759d:
	// 7150 
cs=0x274d;eip=0x001aed; 	J(CALL(sub_35be7,0));	// 120684                  call    sub_35BE7 ;~ 274D:1AED
cs=0x274d;eip=0x001af0; 	J(RETN(0));	// 120685                  retn ;~ 274D:1AF0
loc_375a1:
	// 7151 
cs=0x274d;eip=0x001af1; 	J(JMP(loc_37498));	// 120689                  jmp     loc_37498 ;~ 274D:1AF1
loc_375a4:
	// 7152 
cs=0x274d;eip=0x001af4; 	J(CALL(sub_35bc3,0));	// 120693                  call    sub_35BC3 ;~ 274D:1AF4
cs=0x274d;eip=0x001af7; 	T(ADD(si, 2));	// 120694                  add     si, 2 ;~ 274D:1AF7
cs=0x274d;eip=0x001afa; 	X(LODS(*(raddr(es,si)),si,1));	// 120695                  lods    byte ptr es:[si] ;~ 274D:1AFA
cs=0x274d;eip=0x001afc; 	X(byte_4ce62 = al;);	// 120696                  mov     ds:byte_4CE62, al ;~ 274D:1AFC
cs=0x274d;eip=0x001aff; 	T(CMP(byte_4cdb8, 0));	// 120697                  cmp     ds:byte_4CDB8, 0 ;~ 274D:1AFF
cs=0x274d;eip=0x001b04; 	J(JNZ(loc_375a1));	// 120698                  jnz     short loc_375A1 ;~ 274D:1B04
loc_375b6:
	// 7153 
cs=0x274d;eip=0x001b06; 	X(LODS(*(raddr(es,si)),si,1));	// 120701                  lods    byte ptr es:[si] ;~ 274D:1B06
cs=0x274d;eip=0x001b08; 	T(SUB(ah, ah));	// 120702                  sub     ah, ah ;~ 274D:1B08
cs=0x274d;eip=0x001b0a; 	T(SHL(ax, 1));	// 120703                  shl     ax, 1 ;~ 274D:1B0A
cs=0x274d;eip=0x001b0c; 	T(SHL(ax, 1));	// 120704                  shl     ax, 1 ;~ 274D:1B0C
cs=0x274d;eip=0x001b0e; 	T(di = ax;);	// 120705                  mov     di, ax ;~ 274D:1B0E
cs=0x274d;eip=0x001b10; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x2830))));	// 120706                  mov     ax, [di+2830h] ;~ 274D:1B10
cs=0x274d;eip=0x001b14; 	T(ADD(ax, word_4a484));	// 120707                  add     ax, word_4A484 ;~ 274D:1B14
cs=0x274d;eip=0x001b18; 	X(word_4a8b4 = ax;);	// 120708                  mov     word_4A8B4, ax ;~ 274D:1B18
cs=0x274d;eip=0x001b1b; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x2832))));	// 120709                  mov     ax, [di+2832h] ;~ 274D:1B1B
cs=0x274d;eip=0x001b1f; 	T(ADC(ax, word_4a486));	// 120710                  adc     ax, word_4A486 ;~ 274D:1B1F
cs=0x274d;eip=0x001b23; 	T(CMP(ax, 1));	// 120711                  cmp     ax, 1 ;~ 274D:1B23
cs=0x274d;eip=0x001b26; 	J(JL(loc_37645));	// 120712                  jl      short loc_37645 ;~ 274D:1B26
cs=0x274d;eip=0x001b28; 	X(*(word_4a8b6) = ax;);	// 120713                  mov     word_4A8B6, ax ;~ 274D:1B28
cs=0x274d;eip=0x001b2b; 	T(dx = ax;);	// 120714                  mov     dx, ax ;~ 274D:1B2B
cs=0x274d;eip=0x001b2d; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x2380))));	// 120715                  mov     ax, [di+2380h] ;~ 274D:1B2D
cs=0x274d;eip=0x001b31; 	T(ADD(ax, word_4a47c));	// 120716                  add     ax, word_4A47C ;~ 274D:1B31
cs=0x274d;eip=0x001b35; 	X(word_4a4ec = ax;);	// 120717                  mov     word_4A4EC, ax ;~ 274D:1B35
cs=0x274d;eip=0x001b38; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x2382))));	// 120718                  mov     ax, [di+2382h] ;~ 274D:1B38
cs=0x274d;eip=0x001b3c; 	T(ADC(ax, word_4a47e));	// 120719                  adc     ax, word_4A47E ;~ 274D:1B3C
cs=0x274d;eip=0x001b40; 	X(*(word_4a4ee) = ax;);	// 120720                  mov     word_4A4EE, ax ;~ 274D:1B40
cs=0x274d;eip=0x001b43; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x25D8))));	// 120721                  mov     ax, [di+25D8h] ;~ 274D:1B43
cs=0x274d;eip=0x001b47; 	T(ADD(ax, word_4a480));	// 120722                  add     ax, word_4A480 ;~ 274D:1B47
cs=0x274d;eip=0x001b4b; 	X(word_4a6d0 = ax;);	// 120723                  mov     word_4A6D0, ax ;~ 274D:1B4B
cs=0x274d;eip=0x001b4e; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x25DA))));	// 120724                  mov     ax, [di+25DAh] ;~ 274D:1B4E
cs=0x274d;eip=0x001b52; 	T(ADC(ax, word_4a482));	// 120725                  adc     ax, word_4A482 ;~ 274D:1B52
cs=0x274d;eip=0x001b56; 	X(*(word_4a6d2) = ax;);	// 120726                  mov     word_4A6D2, ax ;~ 274D:1B56
cs=0x274d;eip=0x001b59; 	T(bx = 8;);	// 120727                  mov     bx, 8 ;~ 274D:1B59
cs=0x274d;eip=0x001b5c; 	T(CMP(dx, 0x1388));	// 120728                  cmp     dx, 1388h ;~ 274D:1B5C
cs=0x274d;eip=0x001b60; 	J(JG(loc_3761c));	// 120729                  jg      short loc_3761C ;~ 274D:1B60
cs=0x274d;eip=0x001b62; 	T(DEC(bx));	// 120730                  dec     bx ;~ 274D:1B62
cs=0x274d;eip=0x001b63; 	T(CMP(dx, 0x9C4));	// 120731                  cmp     dx, 9C4h ;~ 274D:1B63
cs=0x274d;eip=0x001b67; 	J(JG(loc_3761c));	// 120732                  jg      short loc_3761C ;~ 274D:1B67
cs=0x274d;eip=0x001b69; 	T(bx = 0x0F;);	// 120733                  mov     bx, 0Fh ;~ 274D:1B69
loc_3761c:
	// 7154 
cs=0x274d;eip=0x001b6c; 	T(MOV(ah, *(raddr(ds,bx+0x18EC))));	// 120737                  mov     ah, [bx+18ECh] ;~ 274D:1B6C
cs=0x274d;eip=0x001b70; 	J(CALLF(sub_49a3e,0));	// 120738                  call    far ptr sub_49A3E ;~ 274D:1B70
cs=0x274d;eip=0x001b75; 	X(PUSH(si));	// 120740                  push    si ;~ 274D:1B75
cs=0x274d;eip=0x001b76; 	T(SUB(bx, bx));	// 120741                  sub     bx, bx ;~ 274D:1B76
cs=0x274d;eip=0x001b78; 	J(CALL(sub_35b28,0));	// 120742                  call    sub_35B28 ;~ 274D:1B78
cs=0x274d;eip=0x001b7b; 	T(ax = *(word_4aa98););	// 120743                  mov     ax, word_4AA98 ;~ 274D:1B7B
cs=0x274d;eip=0x001b7e; 	X(word_4d78d = ax;);	// 120744                  mov     ds:word_4D78D, ax ;~ 274D:1B7E
cs=0x274d;eip=0x001b81; 	X(word_4d78f = ax;);	// 120745                  mov     ds:word_4D78F, ax ;~ 274D:1B81
cs=0x274d;eip=0x001b84; 	T(ax = *(word_4ac7c););	// 120746                  mov     ax, word_4AC7C ;~ 274D:1B84
cs=0x274d;eip=0x001b87; 	X(word_4d791 = ax;);	// 120747                  mov     ds:word_4D791, ax ;~ 274D:1B87
cs=0x274d;eip=0x001b8a; 	X(word_4d793 = ax;);	// 120748                  mov     ds:word_4D793, ax ;~ 274D:1B8A
cs=0x274d;eip=0x001b8d; 	J(CALL(sub_37766,0));	// 120749                  call    sub_37766 ;~ 274D:1B8D
cs=0x274d;eip=0x001b90; 	X(POP(si));	// 120751                  pop     si ;~ 274D:1B90
cs=0x274d;eip=0x001b91; 	T(es = *(dw*)(((db*)&dword_4a46c)+2););	// 120752                  mov     es, word ptr dword_4A46C+2 ;~ 274D:1B91
loc_37645:
	// 7155 
cs=0x274d;eip=0x001b95; 	X(DEC(byte_4ce62));	// 120756                  dec     ds:byte_4CE62 ;~ 274D:1B95
cs=0x274d;eip=0x001b99; 	J(JZ(loc_3764e));	// 120757                  jz      short loc_3764E ;~ 274D:1B99
cs=0x274d;eip=0x001b9b; 	J(JMP(loc_375b6));	// 120758                  jmp     loc_375B6 ;~ 274D:1B9B
loc_3764e:
	// 7156 
cs=0x274d;eip=0x001b9e; 	J(CALL(sub_35be7,0));	// 120762                  call    sub_35BE7 ;~ 274D:1B9E
cs=0x274d;eip=0x001ba1; 	J(RETN(0));	// 120763                  retn ;~ 274D:1BA1

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_3743a: 	goto loc_3743a;
        case m2c::kloc_37498: 	goto loc_37498;
        case m2c::kloc_3756c: 	goto loc_3756c;
        case m2c::kloc_3759d: 	goto loc_3759d;
        case m2c::kloc_375a1: 	goto loc_375a1;
        case m2c::kloc_375a4: 	goto loc_375a4;
        case m2c::kloc_375b6: 	goto loc_375b6;
        case m2c::kloc_3761c: 	goto loc_3761c;
        case m2c::kloc_37645: 	goto loc_37645;
        case m2c::kloc_3764e: 	goto loc_3764e;
        case m2c::klocret_37497: 	goto locret_37497;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_37652(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_37652:
    _begin:
cs=0x274d;eip=0x001ba2; 	T(CMP(*(byte_4a4e4), 0));	// 120771                  cmp     byte_4A4E4, 0 ;~ 274D:1BA2
cs=0x274d;eip=0x001ba7; 	J(JNZ(loc_37660));	// 120772                  jnz     short loc_37660 ;~ 274D:1BA7
cs=0x274d;eip=0x001ba9; 	X(LODS(*(dw*)(raddr(es,si)),si,2));	// 120773                  lods    word ptr es:[si] ;~ 274D:1BA9
cs=0x274d;eip=0x001bab; 	T(AND(ax, word_4a4e6));	// 120774                  and     ax, word_4A4E6 ;~ 274D:1BAB
cs=0x274d;eip=0x001baf; 	J(RETN(0));	// 120775                  retn ;~ 274D:1BAF
loc_37660:
	// 7157 
cs=0x274d;eip=0x001bb0; 	X(LODS(*(dw*)(raddr(es,si)),si,2));	// 120779                  lods    word ptr es:[si] ;~ 274D:1BB0
cs=0x274d;eip=0x001bb2; 	T(MOV(dx, *(dw*)(raddr(es,si))));	// 120780                  mov     dx, es:[si] ;~ 274D:1BB2
cs=0x274d;eip=0x001bb5; 	T(ADD(si, 2));	// 120781                  add     si, 2 ;~ 274D:1BB5
cs=0x274d;eip=0x001bb8; 	T(AND(ax, word_4a4e6));	// 120782                  and     ax, word_4A4E6 ;~ 274D:1BB8
cs=0x274d;eip=0x001bbc; 	T(AND(dx, word_4a4e8));	// 120783                  and     dx, word_4A4E8 ;~ 274D:1BBC
cs=0x274d;eip=0x001bc0; 	T(OR(ax, dx));	// 120784                  or      ax, dx ;~ 274D:1BC0
cs=0x274d;eip=0x001bc2; 	J(RETN(0));	// 120785                  retn ;~ 274D:1BC2

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_37660: 	goto loc_37660;
        case m2c::ksub_37652: 	goto sub_37652;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group76(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group76:
    _begin:
sub_37674:
	// 120795 
cs=0x274d;eip=0x001bc4; 	X(PUSH(bp));	// 120797                  push    bp ;~ 274D:1BC4
cs=0x274d;eip=0x001bc5; 	T(bp = sp;);	// 120798                  mov     bp, sp ;~ 274D:1BC5
cs=0x274d;eip=0x001bc7; 	X(PUSH(di));	// 120799                  push    di ;~ 274D:1BC7
cs=0x274d;eip=0x001bc8; 	X(PUSH(si));	// 120800                  push    si ;~ 274D:1BC8
cs=0x274d;eip=0x001bc9; 	X(PUSH(bp));	// 120801                  push    bp ;~ 274D:1BC9
cs=0x274d;eip=0x001bca; 	X(PUSH(ds));	// 120802                  push    ds ;~ 274D:1BCA
cs=0x274d;eip=0x001bcb; 	X(POP(es));	// 120803                  pop     es ;~ 274D:1BCB
cs=0x274d;eip=0x001bcc; 	J(CALLF(sub_499ee,0));	// 120805                  call    far ptr sub_499EE ;~ 274D:1BCC
seg35ab_1bd1_proc:
	// 120809 
cs=0x274d;eip=0x001bd1; 	X(PUSH(ax));	// 120809                  push    ax ;~ 274D:1BD1
cs=0x274d;eip=0x001bd2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 120810                  mov     bx, [bp+6] ;~ 274D:1BD2
cs=0x274d;eip=0x001bd5; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 120811                  mov     ax, [bx] ;~ 274D:1BD5
cs=0x274d;eip=0x001bd7; 	J(CALLF(sub_499df,0));	// 120812                  call    far ptr sub_499DF ;~ 274D:1BD7
cs=0x274d;eip=0x001bdc; 	T(MOV(ah, *(raddr(ds,bx+4))));	// 120814                  mov     ah, [bx+4] ;~ 274D:1BDC
cs=0x274d;eip=0x001bdf; 	J(CALLF(sub_49a3e,0));	// 120815                  call    far ptr sub_49A3E ;~ 274D:1BDF
cs=0x274d;eip=0x001be4; 	J(CALL(sub_37950,0));	// 120817                  call    sub_37950 ;~ 274D:1BE4
cs=0x274d;eip=0x001be7; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0E))));	// 120818                  mov     cx, [bp+0Eh] ;~ 274D:1BE7
cs=0x274d;eip=0x001bea; 	T(MOV(si, *(dw*)(raddr(ss,bp+0x0A))));	// 120819                  mov     si, [bp+0Ah] ;~ 274D:1BEA
cs=0x274d;eip=0x001bed; 	X(word_4db0b = cx;);	// 120820                  mov     ds:word_4DB0B, cx ;~ 274D:1BED
cs=0x274d;eip=0x001bf1; 	X(word_4db09 = si;);	// 120821                  mov     ds:word_4DB09, si ;~ 274D:1BF1
cs=0x274d;eip=0x001bf5; 	T(SUB(cx, si));	// 120822                  sub     cx, si ;~ 274D:1BF5
cs=0x274d;eip=0x001bf7; 	T(INC(cx));	// 120823                  inc     cx ;~ 274D:1BF7
cs=0x274d;eip=0x001bf8; 	T(di = 0x4cb5);	// 120824                  lea     di, unk_4D795 - byte_48AE0 ;~ 274D:1BF8
cs=0x274d;eip=0x001bfc; 	T(SHL(si, 1));	// 120825                  shl     si, 1 ;~ 274D:1BFC
cs=0x274d;eip=0x001bfe; 	T(ADD(di, si));	// 120826                  add     di, si ;~ 274D:1BFE
cs=0x274d;eip=0x001c00; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 120827                  mov     ax, [bp+8] ;~ 274D:1C00
cs=0x274d;eip=0x001c03; 	T(dx = cx;);	// 120828                  mov     dx, cx ;~ 274D:1C03
	// 120829                  rep stosw ;~ 274D:1C05
cs=0x274d;eip=0x001c05; 	X(	REP STOSW);	// 120829                  rep stosw ;~ 274D:1C05
cs=0x274d;eip=0x001c07; 	T(cx = dx;);	// 120830                  mov     cx, dx ;~ 274D:1C07
cs=0x274d;eip=0x001c09; 	T(di = 0x4e6d);	// 120831                  lea     di, unk_4D94D - byte_48AE0 ;~ 274D:1C09
cs=0x274d;eip=0x001c0d; 	T(ADD(di, si));	// 120832                  add     di, si ;~ 274D:1C0D
cs=0x274d;eip=0x001c0f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0C))));	// 120833                  mov     ax, [bp+0Ch] ;~ 274D:1C0F
	// 120834                  rep stosw ;~ 274D:1C12
cs=0x274d;eip=0x001c12; 	X(	REP STOSW);	// 120834                  rep stosw ;~ 274D:1C12
cs=0x274d;eip=0x001c14; 	T(bx = 0x4CB5;);	// 120835                  mov     bx, 4CB5h ;~ 274D:1C14
cs=0x274d;eip=0x001c17; 	T(ax = word_4db09;);	// 120836                  mov     ax, ds:word_4DB09 ;~ 274D:1C17
cs=0x274d;eip=0x001c1a; 	T(cx = word_4db0b;);	// 120837                  mov     cx, ds:word_4DB0B ;~ 274D:1C1A
cs=0x274d;eip=0x001c1e; 	J(CALLF(sub_49a66,0));	// 120838                  call    far ptr sub_49A66 ;~ 274D:1C1E
cs=0x274d;eip=0x001c23; 	J(CALLF(sub_49a48,0));	// 120840                  call    far ptr sub_49A48 ;~ 274D:1C23
cs=0x274d;eip=0x001c28; 	X(POP(ax));	// 120842                  pop     ax ;~ 274D:1C28
cs=0x274d;eip=0x001c29; 	J(CALLF(sub_499e9,0));	// 120843                  call    far ptr sub_499E9 ;~ 274D:1C29
cs=0x274d;eip=0x001c2e; 	X(POP(bp));	// 120845                  pop     bp ;~ 274D:1C2E
cs=0x274d;eip=0x001c2f; 	X(POP(si));	// 120846                  pop     si ;~ 274D:1C2F
cs=0x274d;eip=0x001c30; 	X(POP(di));	// 120847                  pop     di ;~ 274D:1C30
cs=0x274d;eip=0x001c31; 	T(sp = bp;);	// 120848                  mov     sp, bp ;~ 274D:1C31
cs=0x274d;eip=0x001c33; 	X(POP(bp));	// 120849                  pop     bp ;~ 274D:1C33
cs=0x274d;eip=0x001c34; 	J(RETF(0));	// 120850                  retf ;~ 274D:1C34
ret_274d_1c35:
	// 7158 
cs=0x274d;eip=0x001c35; 	X(PUSH(bp));	// 120852                  push    bp ;~ 274D:1C35
cs=0x274d;eip=0x001c36; 	T(bp = sp;);	// 120853                  mov     bp, sp ;~ 274D:1C36
cs=0x274d;eip=0x001c38; 	X(PUSH(di));	// 120854                  push    di ;~ 274D:1C38
cs=0x274d;eip=0x001c39; 	X(PUSH(si));	// 120855                  push    si ;~ 274D:1C39
cs=0x274d;eip=0x001c3a; 	X(PUSH(bp));	// 120856                  push    bp ;~ 274D:1C3A
cs=0x274d;eip=0x001c3b; 	X(PUSH(ds));	// 120857                  push    ds ;~ 274D:1C3B
cs=0x274d;eip=0x001c3c; 	X(POP(es));	// 120858                  pop     es ;~ 274D:1C3C
cs=0x274d;eip=0x001c3d; 	J(CALLF(sub_499ee,0));	// 120859                  call    far ptr sub_499EE ;~ 274D:1C3D
cs=0x274d;eip=0x001c42; 	X(PUSH(ax));	// 120861                  push    ax ;~ 274D:1C42
cs=0x274d;eip=0x001c43; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 120862                  mov     bx, [bp+6] ;~ 274D:1C43
cs=0x274d;eip=0x001c46; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 120863                  mov     ax, [bx] ;~ 274D:1C46
cs=0x274d;eip=0x001c48; 	J(CALLF(sub_499df,0));	// 120864                  call    far ptr sub_499DF ;~ 274D:1C48
cs=0x274d;eip=0x001c4d; 	T(MOV(ah, *(raddr(ds,bx+6))));	// 120866                  mov     ah, [bx+6] ;~ 274D:1C4D
cs=0x274d;eip=0x001c50; 	J(CALLF(sub_49a3e,0));	// 120867                  call    far ptr sub_49A3E ;~ 274D:1C50
cs=0x274d;eip=0x001c55; 	J(CALL(sub_37950,0));	// 120869                  call    sub_37950 ;~ 274D:1C55
cs=0x274d;eip=0x001c58; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0E))));	// 120870                  mov     cx, [bp+0Eh] ;~ 274D:1C58
cs=0x274d;eip=0x001c5b; 	T(MOV(si, *(dw*)(raddr(ss,bp+0x0A))));	// 120871                  mov     si, [bp+0Ah] ;~ 274D:1C5B
cs=0x274d;eip=0x001c5e; 	X(word_4db0b = cx;);	// 120872                  mov     ds:word_4DB0B, cx ;~ 274D:1C5E
cs=0x274d;eip=0x001c62; 	X(word_4db09 = si;);	// 120873                  mov     ds:word_4DB09, si ;~ 274D:1C62
cs=0x274d;eip=0x001c66; 	T(SUB(cx, si));	// 120874                  sub     cx, si ;~ 274D:1C66
cs=0x274d;eip=0x001c68; 	T(INC(cx));	// 120875                  inc     cx ;~ 274D:1C68
cs=0x274d;eip=0x001c69; 	T(di = offset(seg4c7a,unk_4d795)-offset(seg48ae,byte_48ae0));	// 120876                  lea     di, unk_4D795 - byte_48AE0 ;~ 274D:1C69
cs=0x274d;eip=0x001c6d; 	T(SHL(si, 1));	// 120877                  shl     si, 1 ;~ 274D:1C6D
cs=0x274d;eip=0x001c6f; 	T(ADD(di, si));	// 120878                  add     di, si ;~ 274D:1C6F
cs=0x274d;eip=0x001c71; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 120879                  mov     ax, [bp+8] ;~ 274D:1C71
cs=0x274d;eip=0x001c74; 	T(dx = cx;);	// 120880                  mov     dx, cx ;~ 274D:1C74
	// 120881                  rep stosw ;~ 274D:1C76
cs=0x274d;eip=0x001c76; 	X(	REP STOSW);	// 120881                  rep stosw ;~ 274D:1C76
cs=0x274d;eip=0x001c78; 	T(cx = dx;);	// 120882                  mov     cx, dx ;~ 274D:1C78
cs=0x274d;eip=0x001c7a; 	T(di = offset(seg4c7a,unk_4d94d)-offset(seg48ae,byte_48ae0));	// 120883                  lea     di, unk_4D94D - byte_48AE0 ;~ 274D:1C7A
cs=0x274d;eip=0x001c7e; 	T(ADD(di, si));	// 120884                  add     di, si ;~ 274D:1C7E
cs=0x274d;eip=0x001c80; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0C))));	// 120885                  mov     ax, [bp+0Ch] ;~ 274D:1C80
	// 120886                  rep stosw ;~ 274D:1C83
cs=0x274d;eip=0x001c83; 	X(	REP STOSW);	// 120886                  rep stosw ;~ 274D:1C83
cs=0x274d;eip=0x001c85; 	T(bx = 0x4CB5;);	// 120887                  mov     bx, 4CB5h ;~ 274D:1C85
cs=0x274d;eip=0x001c88; 	T(ax = word_4db09;);	// 120888                  mov     ax, ds:word_4DB09 ;~ 274D:1C88
cs=0x274d;eip=0x001c8b; 	T(cx = word_4db0b;);	// 120889                  mov     cx, ds:word_4DB0B ;~ 274D:1C8B
cs=0x274d;eip=0x001c8f; 	J(CALLF(sub_49a66,0));	// 120890                  call    far ptr sub_49A66 ;~ 274D:1C8F
cs=0x274d;eip=0x001c94; 	J(CALLF(sub_49a48,0));	// 120892                  call    far ptr sub_49A48 ;~ 274D:1C94
cs=0x274d;eip=0x001c99; 	X(POP(ax));	// 120894                  pop     ax ;~ 274D:1C99
cs=0x274d;eip=0x001c9a; 	J(CALLF(sub_499e9,0));	// 120895                  call    far ptr sub_499E9 ;~ 274D:1C9A
cs=0x274d;eip=0x001c9f; 	X(POP(bp));	// 120897                  pop     bp ;~ 274D:1C9F
cs=0x274d;eip=0x001ca0; 	X(POP(si));	// 120898                  pop     si ;~ 274D:1CA0
cs=0x274d;eip=0x001ca1; 	X(POP(di));	// 120899                  pop     di ;~ 274D:1CA1
cs=0x274d;eip=0x001ca2; 	T(sp = bp;);	// 120900                  mov     sp, bp ;~ 274D:1CA2
cs=0x274d;eip=0x001ca4; 	X(POP(bp));	// 120901                  pop     bp ;~ 274D:1CA4
cs=0x274d;eip=0x001ca5; 	J(RETN(0));	// 120902                  retn ;~ 274D:1CA5

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kret_274d_1c35: 	goto ret_274d_1c35;
        case m2c::kseg35ab_1bd1_proc: 	goto seg35ab_1bd1_proc;
        case m2c::ksub_37674: 	goto sub_37674;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_37756(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_37756:
    _begin:
cs=0x274d;eip=0x001ca6; 	J(CALL(sub_37766,0));	// 120908                  call    sub_37766 ;~ 274D:1CA6
cs=0x274d;eip=0x001ca9; 	J(RETF(0));	// 120909                  retf ;~ 274D:1CA9

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_37756: 	goto sub_37756;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3775a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3775a:
    _begin:
cs=0x274d;eip=0x001caa; 	X(PUSH(bp));	// 120918                  push    bp ;~ 274D:1CAA
cs=0x274d;eip=0x001cab; 	X(PUSH(si));	// 120919                  push    si ;~ 274D:1CAB
cs=0x274d;eip=0x001cac; 	X(PUSH(di));	// 120920                  push    di ;~ 274D:1CAC
cs=0x274d;eip=0x001cad; 	X(PUSH(es));	// 120921                  push    es ;~ 274D:1CAD
cs=0x274d;eip=0x001cae; 	J(CALL(sub_37766,0));	// 120922                  call    sub_37766 ;~ 274D:1CAE
cs=0x274d;eip=0x001cb1; 	X(POP(es));	// 120923                  pop     es ;~ 274D:1CB1
cs=0x274d;eip=0x001cb2; 	X(POP(di));	// 120925                  pop     di ;~ 274D:1CB2
cs=0x274d;eip=0x001cb3; 	X(POP(si));	// 120926                  pop     si ;~ 274D:1CB3
cs=0x274d;eip=0x001cb4; 	X(POP(bp));	// 120927                  pop     bp ;~ 274D:1CB4
cs=0x274d;eip=0x001cb5; 	J(RETF(0));	// 120928                  retf ;~ 274D:1CB5

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_3775a: 	goto sub_3775a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_37766(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_37766:
    _begin:
cs=0x274d;eip=0x001cb6; 	T(SUB(ax, ax));	// 120937                  sub     ax, ax ;~ 274D:1CB6
cs=0x274d;eip=0x001cb8; 	T(es = ax;);	// 120938                  mov     es, ax ;~ 274D:1CB8
cs=0x274d;eip=0x001cba; 	X(PUSH(*(dw*)(raddr(es,0))));	// 120940                  push    word ptr es:0 ;~ 274D:1CBA
cs=0x274d;eip=0x001cbf; 	X(PUSH(*(dw*)(raddr(es,2))));	// 120941                  push    word ptr es:2 ;~ 274D:1CBF
cs=0x274d;eip=0x001cc4; 	T(ax = offset(seg48ae,word_4a8b6)+0x8D);	// 120942                  lea     ax, word_4A8B6+8Dh ;~ 274D:1CC4
cs=0x274d;eip=0x001cc8; 	X(MOV(*(dw*)(raddr(es,0)), ax));	// 120943                  mov     es:0, ax ;~ 274D:1CC8
cs=0x274d;eip=0x001ccc; 	X(MOV(*(dw*)(raddr(es,2)), seg_offset(seg35ab)));	// 120944                  mov     word ptr es:2, seg seg35ab ;~ 274D:1CCC
cs=0x274d;eip=0x001cd3; 	X(PUSH(ds));	// 120945                  push    ds ;~ 274D:1CD3
cs=0x274d;eip=0x001cd4; 	X(POP(es));	// 120946                  pop     es ;~ 274D:1CD4
cs=0x274d;eip=0x001cd5; 	J(JMP(loc_377ee));	// 120948                  jmp     short loc_377EE ;~ 274D:1CD5
loc_37788:
	// 7159 
cs=0x274d;eip=0x001cd8; 	T(SUB(ax, ax));	// 120955                  sub     ax, ax ;~ 274D:1CD8
cs=0x274d;eip=0x001cda; 	T(es = ax;);	// 120956                  mov     es, ax ;~ 274D:1CDA
cs=0x274d;eip=0x001cdc; 	X(POP(*(dw*)(raddr(es,2))));	// 120958                  pop     word ptr es:2 ;~ 274D:1CDC
cs=0x274d;eip=0x001ce1; 	X(POP(*(dw*)(raddr(es,0))));	// 120959                  pop     word ptr es:0 ;~ 274D:1CE1
cs=0x274d;eip=0x001ce6; 	X(PUSH(ds));	// 120960                  push    ds ;~ 274D:1CE6
cs=0x274d;eip=0x001ce7; 	X(POP(es));	// 120961                  pop     es ;~ 274D:1CE7
cs=0x274d;eip=0x001ce8; 	T(ax = word_4d78d;);	// 120963                  mov     ax, ds:word_4D78D ;~ 274D:1CE8
cs=0x274d;eip=0x001ceb; 	T(bx = word_4d791;);	// 120964                  mov     bx, ds:word_4D791 ;~ 274D:1CEB
cs=0x274d;eip=0x001cef; 	T(cx = word_4d78f;);	// 120965                  mov     cx, ds:word_4D78F ;~ 274D:1CEF
cs=0x274d;eip=0x001cf3; 	T(dx = word_4d793;);	// 120966                  mov     dx, ds:word_4D793 ;~ 274D:1CF3
cs=0x274d;eip=0x001cf7; 	J(CALLF(sub_49a39,0));	// 120967                  call    far ptr sub_49A39 ;~ 274D:1CF7
cs=0x274d;eip=0x001cfc; 	T(CLC);	// 120969                  clc ;~ 274D:1CFC
cs=0x274d;eip=0x001cfd; 	J(RETN(0));	// 120970                  retn ;~ 274D:1CFD
loc_377ae:
	// 7160 
cs=0x274d;eip=0x001cfe; 	T(SUB(ax, ax));	// 120975                  sub     ax, ax ;~ 274D:1CFE
cs=0x274d;eip=0x001d00; 	T(es = ax;);	// 120976                  mov     es, ax ;~ 274D:1D00
cs=0x274d;eip=0x001d02; 	X(POP(*(dw*)(raddr(es,2))));	// 120978                  pop     word ptr es:2 ;~ 274D:1D02
cs=0x274d;eip=0x001d07; 	X(POP(*(dw*)(raddr(es,0))));	// 120979                  pop     word ptr es:0 ;~ 274D:1D07
cs=0x274d;eip=0x001d0c; 	X(PUSH(ds));	// 120980                  push    ds ;~ 274D:1D0C
cs=0x274d;eip=0x001d0d; 	X(POP(es));	// 120981                  pop     es ;~ 274D:1D0D
cs=0x274d;eip=0x001d0e; 	T(STC);	// 120983                  stc ;~ 274D:1D0E
cs=0x274d;eip=0x001d0f; 	J(RETN(0));	// 120984                  retn ;~ 274D:1D0F
loc_377c0:
	// 7161 
cs=0x274d;eip=0x001d10; 	T(CMC);	// 120988                  cmc ;~ 274D:1D10
cs=0x274d;eip=0x001d11; 	T(RCR(dx, 1));	// 120989                  rcr     dx, 1 ;~ 274D:1D11
cs=0x274d;eip=0x001d13; 	X(word_4d77f = dx;);	// 120990                  mov     ds:word_4D77F, dx ;~ 274D:1D13
cs=0x274d;eip=0x001d17; 	T(SAR(dx, 1));	// 120991                  sar     dx, 1 ;~ 274D:1D17
cs=0x274d;eip=0x001d19; 	X(word_4d783 = dx;);	// 120992                  mov     ds:word_4D783, dx ;~ 274D:1D19
cs=0x274d;eip=0x001d1d; 	T(dx = di;);	// 120993                  mov     dx, di ;~ 274D:1D1D
cs=0x274d;eip=0x001d1f; 	T(SUB(dx, bp));	// 120994                  sub     dx, bp ;~ 274D:1D1F
cs=0x274d;eip=0x001d21; 	J(JNO(loc_377d9));	// 120995                  jno     short loc_377D9 ;~ 274D:1D21
cs=0x274d;eip=0x001d23; 	T(CMC);	// 120996                  cmc ;~ 274D:1D23
cs=0x274d;eip=0x001d24; 	T(RCR(dx, 1));	// 120997                  rcr     dx, 1 ;~ 274D:1D24
cs=0x274d;eip=0x001d26; 	J(JMP(loc_37849));	// 120998                  jmp     short loc_37849 ;~ 274D:1D26
loc_377d9:
	// 7162 
cs=0x274d;eip=0x001d29; 	T(SAR(dx, 1));	// 121004                  sar     dx, 1 ;~ 274D:1D29
cs=0x274d;eip=0x001d2b; 	J(JMP(loc_37849));	// 121005                  jmp     short loc_37849 ;~ 274D:1D2B
loc_377de:
	// 7163 
cs=0x274d;eip=0x001d2e; 	T(CMC);	// 121011                  cmc ;~ 274D:1D2E
cs=0x274d;eip=0x001d2f; 	T(RCR(dx, 1));	// 121012                  rcr     dx, 1 ;~ 274D:1D2F
cs=0x274d;eip=0x001d31; 	X(SAR(word_4d77f, 1));	// 121013                  sar     ds:word_4D77F, 1 ;~ 274D:1D31
cs=0x274d;eip=0x001d35; 	X(SAR(word_4d783, 1));	// 121014                  sar     ds:word_4D783, 1 ;~ 274D:1D35
cs=0x274d;eip=0x001d39; 	J(JMP(loc_37849));	// 121015                  jmp     short loc_37849 ;~ 274D:1D39
loc_377ec:
	// 7164 
cs=0x274d;eip=0x001d3c; 	J(JMP(loc_377ae));	// 121021                  jmp     short loc_377AE ;~ 274D:1D3C
loc_377ee:
	// 7165 
cs=0x274d;eip=0x001d3e; 	T(cx = word_4d78d;);	// 121025                  mov     cx, ds:word_4D78D ;~ 274D:1D3E
cs=0x274d;eip=0x001d42; 	T(dx = word_4d791;);	// 121026                  mov     dx, ds:word_4D791 ;~ 274D:1D42
cs=0x274d;eip=0x001d46; 	T(si = word_4d78f;);	// 121027                  mov     si, ds:word_4D78F ;~ 274D:1D46
cs=0x274d;eip=0x001d4a; 	T(di = word_4d793;);	// 121028                  mov     di, ds:word_4D793 ;~ 274D:1D4A
cs=0x274d;eip=0x001d4e; 	T(bx = cx;);	// 121029                  mov     bx, cx ;~ 274D:1D4E
cs=0x274d;eip=0x001d50; 	T(bp = dx;);	// 121030                  mov     bp, dx ;~ 274D:1D50
cs=0x274d;eip=0x001d52; 	J(CALL(sub_378f2,0));	// 121031                  call    sub_378F2 ;~ 274D:1D52
cs=0x274d;eip=0x001d55; 	X(byte_4d77e = al;);	// 121032                  mov     ds:byte_4D77E, al ;~ 274D:1D55
cs=0x274d;eip=0x001d58; 	T(bx = si;);	// 121033                  mov     bx, si ;~ 274D:1D58
cs=0x274d;eip=0x001d5a; 	T(bp = di;);	// 121034                  mov     bp, di ;~ 274D:1D5A
cs=0x274d;eip=0x001d5c; 	J(CALL(sub_378f2,0));	// 121035                  call    sub_378F2 ;~ 274D:1D5C
cs=0x274d;eip=0x001d5f; 	J(JNZ(loc_3782b));	// 121036                  jnz     short loc_3782B ;~ 274D:1D5F
cs=0x274d;eip=0x001d61; 	T(CMP(byte_4d77e, 0));	// 121037                  cmp     ds:byte_4D77E, 0 ;~ 274D:1D61
cs=0x274d;eip=0x001d66; 	J(JNZ(loc_3781b));	// 121038                  jnz     short loc_3781B ;~ 274D:1D66
cs=0x274d;eip=0x001d68; 	J(JMP(loc_37788));	// 121039                  jmp     loc_37788 ;~ 274D:1D68
loc_3781b:
	// 7166 
cs=0x274d;eip=0x001d6b; 	T(XCHG(cx, si));	// 121043                  xchg    cx, si ;~ 274D:1D6B
cs=0x274d;eip=0x001d6d; 	T(XCHG(dx, di));	// 121044                  xchg    dx, di ;~ 274D:1D6D
cs=0x274d;eip=0x001d6f; 	X(XCHG(al, byte_4d77e));	// 121045                  xchg    al, ds:byte_4D77E ;~ 274D:1D6F
cs=0x274d;eip=0x001d73; 	X(word_4d78d = cx;);	// 121046                  mov     ds:word_4D78D, cx ;~ 274D:1D73
cs=0x274d;eip=0x001d77; 	X(word_4d791 = dx;);	// 121047                  mov     ds:word_4D791, dx ;~ 274D:1D77
loc_3782b:
	// 7167 
cs=0x274d;eip=0x001d7b; 	T(TEST(byte_4d77e, al));	// 121050                  test    ds:byte_4D77E, al ;~ 274D:1D7B
cs=0x274d;eip=0x001d7f; 	J(JNZ(loc_377ec));	// 121051                  jnz     short loc_377EC ;~ 274D:1D7F
cs=0x274d;eip=0x001d81; 	T(bp = dx;);	// 121052                  mov     bp, dx ;~ 274D:1D81
cs=0x274d;eip=0x001d83; 	T(dx = si;);	// 121053                  mov     dx, si ;~ 274D:1D83
cs=0x274d;eip=0x001d85; 	T(SUB(dx, cx));	// 121054                  sub     dx, cx ;~ 274D:1D85
cs=0x274d;eip=0x001d87; 	J(JO(loc_377c0));	// 121055                  jo      short loc_377C0 ;~ 274D:1D87
cs=0x274d;eip=0x001d89; 	X(word_4d77f = dx;);	// 121056                  mov     ds:word_4D77F, dx ;~ 274D:1D89
cs=0x274d;eip=0x001d8d; 	T(SAR(dx, 1));	// 121057                  sar     dx, 1 ;~ 274D:1D8D
cs=0x274d;eip=0x001d8f; 	X(word_4d783 = dx;);	// 121058                  mov     ds:word_4D783, dx ;~ 274D:1D8F
cs=0x274d;eip=0x001d93; 	T(dx = di;);	// 121059                  mov     dx, di ;~ 274D:1D93
cs=0x274d;eip=0x001d95; 	T(SUB(dx, bp));	// 121060                  sub     dx, bp ;~ 274D:1D95
cs=0x274d;eip=0x001d97; 	J(JO(loc_377de));	// 121061                  jo      short loc_377DE ;~ 274D:1D97
loc_37849:
	// 7168 
cs=0x274d;eip=0x001d99; 	X(word_4d781 = dx;);	// 121065                  mov     ds:word_4D781, dx ;~ 274D:1D99
cs=0x274d;eip=0x001d9d; 	T(SAR(dx, 1));	// 121066                  sar     dx, 1 ;~ 274D:1D9D
cs=0x274d;eip=0x001d9f; 	X(word_4d785 = dx;);	// 121067                  mov     ds:word_4D785, dx ;~ 274D:1D9F
loc_37853:
	// 7169 
cs=0x274d;eip=0x001da3; 	T(TEST(al, 9));	// 121070                  test    al, 9 ;~ 274D:1DA3
cs=0x274d;eip=0x001da5; 	J(JZ(loc_3788f));	// 121071                  jz      short loc_3788F ;~ 274D:1DA5
cs=0x274d;eip=0x001da7; 	T(SUB(bx, bx));	// 121072                  sub     bx, bx ;~ 274D:1DA7
cs=0x274d;eip=0x001da9; 	T(OR(si, si));	// 121073                  or      si, si ;~ 274D:1DA9
cs=0x274d;eip=0x001dab; 	J(JS(loc_37861));	// 121074                  js      short loc_37861 ;~ 274D:1DAB
cs=0x274d;eip=0x001dad; 	T(bx = word_4d787;);	// 121075                  mov     bx, ds:word_4D787 ;~ 274D:1DAD
loc_37861:
	// 7170 
cs=0x274d;eip=0x001db1; 	T(ax = bx;);	// 121078                  mov     ax, bx ;~ 274D:1DB1
cs=0x274d;eip=0x001db3; 	T(SUB(ax, cx));	// 121079                  sub     ax, cx ;~ 274D:1DB3
cs=0x274d;eip=0x001db5; 	X(IMUL1_2(word_4d781));	// 121080                  imul    ds:word_4D781 ;~ 274D:1DB5
cs=0x274d;eip=0x001db9; 	X(PUSH(bx));	// 121081                  push    bx ;~ 274D:1DB9
cs=0x274d;eip=0x001dba; 	T(bx = dx;);	// 121082                  mov     bx, dx ;~ 274D:1DBA
cs=0x274d;eip=0x001dbc; 	X(IDIV2(word_4d77f));	// 121083                  idiv    ds:word_4D77F ;~ 274D:1DBC
cs=0x274d;eip=0x001dc0; 	T(bl = bh;);	// 121084                  mov     bl, bh ;~ 274D:1DC0
cs=0x274d;eip=0x001dc2; 	T(XOR(bl, *(db*)(((db*)&word_4d77f)+1)));	// 121085                  xor     bl, byte ptr ds:word_4D77F+1 ;~ 274D:1DC2
cs=0x274d;eip=0x001dc6; 	J(JNS(loc_3787b));	// 121086                  jns     short loc_3787B ;~ 274D:1DC6
cs=0x274d;eip=0x001dc8; 	T(NEG(dx));	// 121087                  neg     dx ;~ 274D:1DC8
cs=0x274d;eip=0x001dca; 	T(DEC(ax));	// 121088                  dec     ax ;~ 274D:1DCA
loc_3787b:
	// 7171 
cs=0x274d;eip=0x001dcb; 	T(SUB(dx, word_4d783));	// 121091                  sub     dx, ds:word_4D783 ;~ 274D:1DCB
cs=0x274d;eip=0x001dcf; 	T(XOR(dh, bh));	// 121092                  xor     dh, bh ;~ 274D:1DCF
cs=0x274d;eip=0x001dd1; 	J(JS(loc_37884));	// 121093                  js      short loc_37884 ;~ 274D:1DD1
cs=0x274d;eip=0x001dd3; 	T(INC(ax));	// 121094                  inc     ax ;~ 274D:1DD3
loc_37884:
	// 7172 
cs=0x274d;eip=0x001dd4; 	X(POP(bx));	// 121097                  pop     bx ;~ 274D:1DD4
cs=0x274d;eip=0x001dd5; 	T(ADD(ax, bp));	// 121098                  add     ax, bp ;~ 274D:1DD5
cs=0x274d;eip=0x001dd7; 	J(JS(loc_37897));	// 121099                  js      short loc_37897 ;~ 274D:1DD7
cs=0x274d;eip=0x001dd9; 	T(CMP(ax, word_4d789));	// 121100                  cmp     ax, ds:word_4D789 ;~ 274D:1DD9
cs=0x274d;eip=0x001ddd; 	J(JLE(loc_378c8));	// 121101                  jle     short loc_378C8 ;~ 274D:1DDD
loc_3788f:
	// 7173 
cs=0x274d;eip=0x001ddf; 	T(bx = word_4d789;);	// 121104                  mov     bx, ds:word_4D789 ;~ 274D:1DDF
cs=0x274d;eip=0x001de3; 	T(CMP(di, bx));	// 121105                  cmp     di, bx ;~ 274D:1DE3
cs=0x274d;eip=0x001de5; 	J(JG(loc_37899));	// 121106                  jg      short loc_37899 ;~ 274D:1DE5
loc_37897:
	// 7174 
cs=0x274d;eip=0x001de7; 	T(SUB(bx, bx));	// 121109                  sub     bx, bx ;~ 274D:1DE7
loc_37899:
	// 7175 
cs=0x274d;eip=0x001de9; 	T(ax = bx;);	// 121112                  mov     ax, bx ;~ 274D:1DE9
cs=0x274d;eip=0x001deb; 	T(SUB(ax, bp));	// 121113                  sub     ax, bp ;~ 274D:1DEB
cs=0x274d;eip=0x001ded; 	X(IMUL1_2(word_4d77f));	// 121114                  imul    ds:word_4D77F ;~ 274D:1DED
cs=0x274d;eip=0x001df1; 	X(PUSH(bx));	// 121115                  push    bx ;~ 274D:1DF1
cs=0x274d;eip=0x001df2; 	T(bx = dx;);	// 121116                  mov     bx, dx ;~ 274D:1DF2
cs=0x274d;eip=0x001df4; 	X(IDIV2(word_4d781));	// 121117                  idiv    ds:word_4D781 ;~ 274D:1DF4
cs=0x274d;eip=0x001df8; 	T(bl = bh;);	// 121118                  mov     bl, bh ;~ 274D:1DF8
cs=0x274d;eip=0x001dfa; 	T(XOR(bl, *(db*)(((db*)&word_4d781)+1)));	// 121119                  xor     bl, byte ptr ds:word_4D781+1 ;~ 274D:1DFA
cs=0x274d;eip=0x001dfe; 	J(JNS(loc_378b3));	// 121120                  jns     short loc_378B3 ;~ 274D:1DFE
cs=0x274d;eip=0x001e00; 	T(NEG(dx));	// 121121                  neg     dx ;~ 274D:1E00
cs=0x274d;eip=0x001e02; 	T(DEC(ax));	// 121122                  dec     ax ;~ 274D:1E02
loc_378b3:
	// 7176 
cs=0x274d;eip=0x001e03; 	T(SUB(dx, word_4d785));	// 121125                  sub     dx, ds:word_4D785 ;~ 274D:1E03
cs=0x274d;eip=0x001e07; 	T(XOR(dh, bh));	// 121126                  xor     dh, bh ;~ 274D:1E07
cs=0x274d;eip=0x001e09; 	J(JS(loc_378bc));	// 121127                  js      short loc_378BC ;~ 274D:1E09
cs=0x274d;eip=0x001e0b; 	T(INC(ax));	// 121128                  inc     ax ;~ 274D:1E0B
loc_378bc:
	// 7177 
cs=0x274d;eip=0x001e0c; 	X(POP(bx));	// 121131                  pop     bx ;~ 274D:1E0C
cs=0x274d;eip=0x001e0d; 	T(ADD(ax, cx));	// 121132                  add     ax, cx ;~ 274D:1E0D
cs=0x274d;eip=0x001e0f; 	J(JS(loc_378d9));	// 121133                  js      short loc_378D9 ;~ 274D:1E0F
cs=0x274d;eip=0x001e11; 	T(CMP(ax, word_4d787));	// 121134                  cmp     ax, ds:word_4D787 ;~ 274D:1E11
cs=0x274d;eip=0x001e15; 	J(JG(loc_378d9));	// 121135                  jg      short loc_378D9 ;~ 274D:1E15
cs=0x274d;eip=0x001e17; 	T(XCHG(ax, bx));	// 121136                  xchg    ax, bx ;~ 274D:1E17
loc_378c8:
	// 7178 
cs=0x274d;eip=0x001e18; 	T(CMP(byte_4d77e, 0));	// 121139                  cmp     ds:byte_4D77E, 0 ;~ 274D:1E18
cs=0x274d;eip=0x001e1d; 	J(JNZ(loc_378dc));	// 121140                  jnz     short loc_378DC ;~ 274D:1E1D
cs=0x274d;eip=0x001e1f; 	X(word_4d793 = ax;);	// 121141                  mov     ds:word_4D793, ax ;~ 274D:1E1F
cs=0x274d;eip=0x001e22; 	X(word_4d78f = bx;);	// 121142                  mov     ds:word_4D78F, bx ;~ 274D:1E22
cs=0x274d;eip=0x001e26; 	J(JMP(loc_37788));	// 121143                  jmp     loc_37788 ;~ 274D:1E26
loc_378d9:
	// 7179 
cs=0x274d;eip=0x001e29; 	J(JMP(loc_377ae));	// 121148                  jmp     loc_377AE ;~ 274D:1E29
loc_378dc:
	// 7180 
cs=0x274d;eip=0x001e2c; 	X(word_4d791 = ax;);	// 121152                  mov     ds:word_4D791, ax ;~ 274D:1E2C
cs=0x274d;eip=0x001e2f; 	X(word_4d78d = bx;);	// 121153                  mov     ds:word_4D78D, bx ;~ 274D:1E2F
cs=0x274d;eip=0x001e33; 	T(XCHG(cx, si));	// 121154                  xchg    cx, si ;~ 274D:1E33
cs=0x274d;eip=0x001e35; 	T(XCHG(bp, di));	// 121155                  xchg    bp, di ;~ 274D:1E35
cs=0x274d;eip=0x001e37; 	T(al = byte_4d77e;);	// 121156                  mov     al, ds:byte_4D77E ;~ 274D:1E37
cs=0x274d;eip=0x001e3a; 	X(byte_4d77e = 0;);	// 121157                  mov     ds:byte_4D77E, 0 ;~ 274D:1E3A
cs=0x274d;eip=0x001e3f; 	J(JMP(loc_37853));	// 121158                  jmp     loc_37853 ;~ 274D:1E3F

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_37788: 	goto loc_37788;
        case m2c::kloc_377ae: 	goto loc_377ae;
        case m2c::kloc_377c0: 	goto loc_377c0;
        case m2c::kloc_377d9: 	goto loc_377d9;
        case m2c::kloc_377de: 	goto loc_377de;
        case m2c::kloc_377ec: 	goto loc_377ec;
        case m2c::kloc_377ee: 	goto loc_377ee;
        case m2c::kloc_3781b: 	goto loc_3781b;
        case m2c::kloc_3782b: 	goto loc_3782b;
        case m2c::kloc_37849: 	goto loc_37849;
        case m2c::kloc_37853: 	goto loc_37853;
        case m2c::kloc_37861: 	goto loc_37861;
        case m2c::kloc_3787b: 	goto loc_3787b;
        case m2c::kloc_37884: 	goto loc_37884;
        case m2c::kloc_3788f: 	goto loc_3788f;
        case m2c::kloc_37897: 	goto loc_37897;
        case m2c::kloc_37899: 	goto loc_37899;
        case m2c::kloc_378b3: 	goto loc_378b3;
        case m2c::kloc_378bc: 	goto loc_378bc;
        case m2c::kloc_378c8: 	goto loc_378c8;
        case m2c::kloc_378d9: 	goto loc_378d9;
        case m2c::kloc_378dc: 	goto loc_378dc;
        case m2c::ksub_37766: 	goto sub_37766;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_378f2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_378f2:
    _begin:
cs=0x274d;eip=0x001e42; 	T(al = 0x0F;);	// 121167                  mov     al, 0Fh ;~ 274D:1E42
cs=0x274d;eip=0x001e44; 	T(OR(bx, bx));	// 121168                  or      bx, bx ;~ 274D:1E44
cs=0x274d;eip=0x001e46; 	J(JS(loc_378fa));	// 121169                  js      short loc_378FA ;~ 274D:1E46
cs=0x274d;eip=0x001e48; 	T(AND(al, 0x0F7));	// 121170                  and     al, 0F7h ;~ 274D:1E48
loc_378fa:
	// 7181 
cs=0x274d;eip=0x001e4a; 	T(CMP(bx, word_4d787));	// 121173                  cmp     bx, ds:word_4D787 ;~ 274D:1E4A
cs=0x274d;eip=0x001e4e; 	J(JG(loc_37902));	// 121174                  jg      short loc_37902 ;~ 274D:1E4E
cs=0x274d;eip=0x001e50; 	T(AND(al, 0x0FE));	// 121175                  and     al, 0FEh ;~ 274D:1E50
loc_37902:
	// 7182 
cs=0x274d;eip=0x001e52; 	T(OR(bp, bp));	// 121178                  or      bp, bp ;~ 274D:1E52
cs=0x274d;eip=0x001e54; 	J(JS(loc_37908));	// 121179                  js      short loc_37908 ;~ 274D:1E54
cs=0x274d;eip=0x001e56; 	T(AND(al, 0x0FB));	// 121180                  and     al, 0FBh ;~ 274D:1E56
loc_37908:
	// 7183 
cs=0x274d;eip=0x001e58; 	T(CMP(bp, word_4d789));	// 121183                  cmp     bp, ds:word_4D789 ;~ 274D:1E58
cs=0x274d;eip=0x001e5c; 	J(JG(loc_37910));	// 121184                  jg      short loc_37910 ;~ 274D:1E5C
cs=0x274d;eip=0x001e5e; 	T(AND(al, 0x0FD));	// 121185                  and     al, 0FDh ;~ 274D:1E5E
loc_37910:
	// 7184 
cs=0x274d;eip=0x001e60; 	T(OR(al, al));	// 121188                  or      al, al ;~ 274D:1E60
cs=0x274d;eip=0x001e62; 	J(RETN(0));	// 121189                  retn ;~ 274D:1E62

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_378fa: 	goto loc_378fa;
        case m2c::kloc_37902: 	goto loc_37902;
        case m2c::kloc_37908: 	goto loc_37908;
        case m2c::kloc_37910: 	goto loc_37910;
        case m2c::ksub_378f2: 	goto sub_378f2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg35ab_1e63_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg35ab_1e63_proc:
    _begin:
cs=0x274d;eip=0x001e63; 	X(PUSH(bp));	// 121193                  push    bp ;~ 274D:1E63
cs=0x274d;eip=0x001e64; 	T(bp = sp;);	// 121194                  mov     bp, sp ;~ 274D:1E64
cs=0x274d;eip=0x001e66; 	T(CMP(*(dw*)(raddr(ss,bp+2)), 0x1DF4));	// 121195                  cmp     word ptr [bp+2], 1DF4h ;~ 274D:1E66
cs=0x274d;eip=0x001e6b; 	T(ax = word_4d781;);	// 121196                  mov     ax, ds:word_4D781 ;~ 274D:1E6B
cs=0x274d;eip=0x001e6e; 	J(JZ(loc_37923));	// 121197                  jz      short loc_37923 ;~ 274D:1E6E
cs=0x274d;eip=0x001e70; 	T(ax = word_4d77f;);	// 121198                  mov     ax, ds:word_4D77F ;~ 274D:1E70
loc_37923:
	// 7185 
cs=0x274d;eip=0x001e73; 	T(XOR(dx, ax));	// 121201                  xor     dx, ax ;~ 274D:1E73
cs=0x274d;eip=0x001e75; 	T(ax = 0x7F00;);	// 121202                  mov     ax, 7F00h ;~ 274D:1E75
cs=0x274d;eip=0x001e78; 	J(JNS(loc_3792c));	// 121203                  jns     short loc_3792C ;~ 274D:1E78
cs=0x274d;eip=0x001e7a; 	T(NEG(ax));	// 121204                  neg     ax ;~ 274D:1E7A
loc_3792c:
	// 7186 
cs=0x274d;eip=0x001e7c; 	X(ADD(*(dw*)(raddr(ss,bp+2)), 4));	// 121207                  add     word ptr [bp+2], 4 ;~ 274D:1E7C
cs=0x274d;eip=0x001e80; 	T(SUB(dx, dx));	// 121208                  sub     dx, dx ;~ 274D:1E80
cs=0x274d;eip=0x001e82; 	X(POP(bp));	// 121209                  pop     bp ;~ 274D:1E82
cs=0x274d;eip=0x001e83; 	J(IRET);	// 121210                  iret ;~ 274D:1E83

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_37923: 	goto loc_37923;
        case m2c::kloc_3792c: 	goto loc_3792c;
        case m2c::kseg35ab_1e63_proc: 	goto seg35ab_1e63_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group77(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group77:
    _begin:
sub_37934:
	// 121216 
cs=0x274d;eip=0x001e84; 	X(PUSH(di));	// 121217                  push    di ;~ 274D:1E84
cs=0x274d;eip=0x001e85; 	X(PUSH(si));	// 121218                  push    si ;~ 274D:1E85
cs=0x274d;eip=0x001e86; 	X(PUSH(bp));	// 121219                  push    bp ;~ 274D:1E86
cs=0x274d;eip=0x001e87; 	T(ax = word_4db09;);	// 121220                  mov     ax, ds:word_4DB09 ;~ 274D:1E87
cs=0x274d;eip=0x001e8a; 	T(cx = word_4db0b;);	// 121221                  mov     cx, ds:word_4DB0B ;~ 274D:1E8A
cs=0x274d;eip=0x001e8e; 	T(bx = 0x4CB5;);	// 121222                  mov     bx, 4CB5h ;~ 274D:1E8E
cs=0x274d;eip=0x001e91; 	J(CALLF(sub_49a57,0));	// 121223                  call    far ptr sub_49A57 ;~ 274D:1E91
seg35ab_1e96_proc:
	// 121227 
cs=0x274d;eip=0x001e96; 	X(POP(bp));	// 121227                  pop     bp ;~ 274D:1E96
cs=0x274d;eip=0x001e97; 	X(POP(si));	// 121228                  pop     si ;~ 274D:1E97
cs=0x274d;eip=0x001e98; 	X(POP(di));	// 121229                  pop     di ;~ 274D:1E98
cs=0x274d;eip=0x001e99; 	J(RETF(0));	// 121230                  retf ;~ 274D:1E99

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg35ab_1e96_proc: 	goto seg35ab_1e96_proc;
        case m2c::ksub_37934: 	goto sub_37934;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3794a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3794a:
    _begin:
cs=0x274d;eip=0x001e9a; 	X(PUSH(di));	// 121237                  push    di ;~ 274D:1E9A
cs=0x274d;eip=0x001e9b; 	J(CALL(sub_37950,0));	// 121238                  call    sub_37950 ;~ 274D:1E9B
cs=0x274d;eip=0x001e9e; 	X(POP(di));	// 121240                  pop     di ;~ 274D:1E9E
cs=0x274d;eip=0x001e9f; 	J(RETF(0));	// 121241                  retf ;~ 274D:1E9F

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_3794a: 	goto sub_3794a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_37950(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_37950:
    _begin:
cs=0x274d;eip=0x001ea0; 	T(di = word_4db09;);	// 121250                  mov     di, ds:word_4DB09 ;~ 274D:1EA0
cs=0x274d;eip=0x001ea4; 	T(OR(di, di));	// 121251                  or      di, di ;~ 274D:1EA4
cs=0x274d;eip=0x001ea6; 	J(JS(locret_37985));	// 121252                  js      short locret_37985 ;~ 274D:1EA6
cs=0x274d;eip=0x001ea8; 	T(ax = seg_offset(seg48ae););	// 121253                  mov     ax, seg seg48ae ;~ 274D:1EA8
cs=0x274d;eip=0x001eab; 	T(es = ax;);	// 121254                  mov     es, ax ;~ 274D:1EAB
cs=0x274d;eip=0x001ead; 	T(cx = word_4db0b;);	// 121255                  mov     cx, ds:word_4DB0B ;~ 274D:1EAD
cs=0x274d;eip=0x001eb1; 	T(INC(cx));	// 121256                  inc     cx ;~ 274D:1EB1
cs=0x274d;eip=0x001eb2; 	T(SUB(cx, di));	// 121257                  sub     cx, di ;~ 274D:1EB2
cs=0x274d;eip=0x001eb4; 	T(SHL(di, 1));	// 121258                  shl     di, 1 ;~ 274D:1EB4
cs=0x274d;eip=0x001eb6; 	T(bx = cx;);	// 121259                  mov     bx, cx ;~ 274D:1EB6
cs=0x274d;eip=0x001eb8; 	T(dx = di;);	// 121260                  mov     dx, di ;~ 274D:1EB8
cs=0x274d;eip=0x001eba; 	T(ADD(di, 0x4CB5));	// 121261                  add     di, 4CB5h ;~ 274D:1EBA
cs=0x274d;eip=0x001ebe; 	T(ax = 0x0FFFF;);	// 121262                  mov     ax, 0FFFFh ;~ 274D:1EBE
	// 121263                  rep stosw ;~ 274D:1EC1
cs=0x274d;eip=0x001ec1; 	X(	REP STOSW);	// 121263                  rep stosw ;~ 274D:1EC1
cs=0x274d;eip=0x001ec3; 	X(word_4db09 = ax;);	// 121264                  mov     ds:word_4DB09, ax ;~ 274D:1EC3
cs=0x274d;eip=0x001ec6; 	T(cx = bx;);	// 121265                  mov     cx, bx ;~ 274D:1EC6
cs=0x274d;eip=0x001ec8; 	T(di = dx;);	// 121266                  mov     di, dx ;~ 274D:1EC8
cs=0x274d;eip=0x001eca; 	T(ADD(di, 0x4E6D));	// 121267                  add     di, 4E6Dh ;~ 274D:1ECA
cs=0x274d;eip=0x001ece; 	T(SUB(ax, ax));	// 121268                  sub     ax, ax ;~ 274D:1ECE
	// 121269                  rep stosw ;~ 274D:1ED0
cs=0x274d;eip=0x001ed0; 	X(	REP STOSW);	// 121269                  rep stosw ;~ 274D:1ED0
cs=0x274d;eip=0x001ed2; 	X(word_4db0b = ax;);	// 121270                  mov     ds:word_4DB0B, ax ;~ 274D:1ED2
locret_37985:
	// 7187 
cs=0x274d;eip=0x001ed5; 	J(RETN(0));	// 121273                  retn ;~ 274D:1ED5

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::klocret_37985: 	goto locret_37985;
        case m2c::ksub_37950: 	goto sub_37950;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group78(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group78:
    _begin:
sub_37986:
	// 121280 
cs=0x274d;eip=0x001ed6; 	T(ax = seg_offset(seg48ae););	// 121282                  mov     ax, seg seg48ae ;~ 274D:1ED6
cs=0x274d;eip=0x001ed9; 	T(es = ax;);	// 121283                  mov     es, ax ;~ 274D:1ED9
cs=0x274d;eip=0x001edb; 	T(cx = di;);	// 121284                  mov     cx, di ;~ 274D:1EDB
cs=0x274d;eip=0x001edd; 	T(OR(si, si));	// 121285                  or      si, si ;~ 274D:1EDD
cs=0x274d;eip=0x001edf; 	T(di = 0x4CB5);	// 121286                  lea     di, unk_4D795 - byte_48AE0 ;~ 274D:1EDF
cs=0x274d;eip=0x001ee3; 	J(JZ(loc_3799f));	// 121287                  jz      short loc_3799F ;~ 274D:1EE3
cs=0x274d;eip=0x001ee5; 	T(CMP(si, word_4d787));	// 121288                  cmp     si, ds:word_4D787 ;~ 274D:1EE5
cs=0x274d;eip=0x001ee9; 	J(JNZ(locret_379d4));	// 121289                  jnz     short locret_379D4 ;~ 274D:1EE9
cs=0x274d;eip=0x001eeb; 	T(di = 0x4E6D);	// 121290                  lea     di, unk_4D94D - byte_48AE0 ;~ 274D:1EEB
loc_3799f:
	// 7188 
cs=0x274d;eip=0x001eef; 	T(CMP(cx, dx));	// 121293                  cmp     cx, dx ;~ 274D:1EEF
cs=0x274d;eip=0x001ef1; 	J(JGE(loc_379a5));	// 121294                  jge     short loc_379A5 ;~ 274D:1EF1
cs=0x274d;eip=0x001ef3; 	T(XCHG(cx, dx));	// 121295                  xchg    cx, dx ;~ 274D:1EF3
loc_379a5:
	// 7189 
cs=0x274d;eip=0x001ef5; 	T(OR(dx, dx));	// 121298                  or      dx, dx ;~ 274D:1EF5
cs=0x274d;eip=0x001ef7; 	J(JNS(loc_379ab));	// 121299                  jns     short loc_379AB ;~ 274D:1EF7
cs=0x274d;eip=0x001ef9; 	T(SUB(dx, dx));	// 121300                  sub     dx, dx ;~ 274D:1EF9
loc_379ab:
	// 7190 
cs=0x274d;eip=0x001efb; 	T(CMP(cx, word_4d789));	// 121303                  cmp     cx, ds:word_4D789 ;~ 274D:1EFB
cs=0x274d;eip=0x001eff; 	J(JLE(loc_379b5));	// 121304                  jle     short loc_379B5 ;~ 274D:1EFF
cs=0x274d;eip=0x001f01; 	T(cx = word_4d789;);	// 121305                  mov     cx, ds:word_4D789 ;~ 274D:1F01
loc_379b5:
	// 7191 
cs=0x274d;eip=0x001f05; 	T(CMP(cx, word_4db0b));	// 121308                  cmp     cx, ds:word_4DB0B ;~ 274D:1F05
cs=0x274d;eip=0x001f09; 	J(JBE(loc_379bf));	// 121309                  jbe     short loc_379BF ;~ 274D:1F09
cs=0x274d;eip=0x001f0b; 	X(word_4db0b = cx;);	// 121310                  mov     ds:word_4DB0B, cx ;~ 274D:1F0B
loc_379bf:
	// 7192 
cs=0x274d;eip=0x001f0f; 	T(CMP(dx, word_4db09));	// 121313                  cmp     dx, ds:word_4DB09 ;~ 274D:1F0F
cs=0x274d;eip=0x001f13; 	J(JNC(loc_379c9));	// 121314                  jnb     short loc_379C9 ;~ 274D:1F13
cs=0x274d;eip=0x001f15; 	X(word_4db09 = dx;);	// 121315                  mov     ds:word_4DB09, dx ;~ 274D:1F15
loc_379c9:
	// 7193 
cs=0x274d;eip=0x001f19; 	T(ADD(di, dx));	// 121318                  add     di, dx ;~ 274D:1F19
cs=0x274d;eip=0x001f1b; 	T(ADD(di, dx));	// 121319                  add     di, dx ;~ 274D:1F1B
cs=0x274d;eip=0x001f1d; 	T(SUB(cx, dx));	// 121320                  sub     cx, dx ;~ 274D:1F1D
cs=0x274d;eip=0x001f1f; 	T(INC(cx));	// 121321                  inc     cx ;~ 274D:1F1F
cs=0x274d;eip=0x001f20; 	T(ax = si;);	// 121322                  mov     ax, si ;~ 274D:1F20
	// 121323                  rep stosw ;~ 274D:1F22
cs=0x274d;eip=0x001f22; 	X(	REP STOSW);	// 121323                  rep stosw ;~ 274D:1F22
locret_379d4:
	// 7194 
cs=0x274d;eip=0x001f24; 	J(RETN(0));	// 121326                  retn ;~ 274D:1F24
seg35ab_1f25_proc:
	// 121332 
loc_379d5:
	// 7195 
cs=0x274d;eip=0x001f25; 	T(SUB(si, si));	// 121333                  sub     si, si ;~ 274D:1F25
cs=0x274d;eip=0x001f27; 	T(OR(bx, bx));	// 121334                  or      bx, bx ;~ 274D:1F27
cs=0x274d;eip=0x001f29; 	J(JS(sub_37986));	// 121335                  js      short sub_37986 ;~ 274D:1F29
cs=0x274d;eip=0x001f2b; 	T(si = word_4d787;);	// 121336                  mov     si, ds:word_4D787 ;~ 274D:1F2B
cs=0x274d;eip=0x001f2f; 	T(CMP(bx, si));	// 121337                  cmp     bx, si ;~ 274D:1F2F
cs=0x274d;eip=0x001f31; 	J(JG(sub_37986));	// 121338                  jg      short sub_37986 ;~ 274D:1F31
cs=0x274d;eip=0x001f33; 	J(RETN(0));	// 121339                  retn ;~ 274D:1F33

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_3799f: 	goto loc_3799f;
        case m2c::kloc_379a5: 	goto loc_379a5;
        case m2c::kloc_379ab: 	goto loc_379ab;
        case m2c::kloc_379b5: 	goto loc_379b5;
        case m2c::kloc_379bf: 	goto loc_379bf;
        case m2c::kloc_379c9: 	goto loc_379c9;
        case m2c::klocret_379d4: 	goto locret_379d4;
        case m2c::kseg35ab_1f25_proc: 	goto seg35ab_1f25_proc;
        case m2c::ksub_37986: 	goto sub_37986;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_379e4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_379e4:
    _begin:
cs=0x274d;eip=0x001f34; 	T(ax = word_4d78f;);	// 121347                  mov     ax, ds:word_4D78F ;~ 274D:1F34
cs=0x274d;eip=0x001f37; 	T(CMP(ax, word_4d78d));	// 121348                  cmp     ax, ds:word_4D78D ;~ 274D:1F37
cs=0x274d;eip=0x001f3b; 	J(JNC(loc_37a06));	// 121349                  jnb     short loc_37A06 ;~ 274D:1F3B
cs=0x274d;eip=0x001f3d; 	T(bx = word_4d78d;);	// 121350                  mov     bx, ds:word_4D78D ;~ 274D:1F3D
cs=0x274d;eip=0x001f41; 	X(word_4d78f = bx;);	// 121351                  mov     ds:word_4D78F, bx ;~ 274D:1F41
cs=0x274d;eip=0x001f45; 	X(word_4d78d = ax;);	// 121352                  mov     ds:word_4D78D, ax ;~ 274D:1F45
cs=0x274d;eip=0x001f48; 	T(ax = word_4d793;);	// 121353                  mov     ax, ds:word_4D793 ;~ 274D:1F48
cs=0x274d;eip=0x001f4b; 	T(bx = word_4d791;);	// 121354                  mov     bx, ds:word_4D791 ;~ 274D:1F4B
cs=0x274d;eip=0x001f4f; 	X(word_4d793 = bx;);	// 121355                  mov     ds:word_4D793, bx ;~ 274D:1F4F
cs=0x274d;eip=0x001f53; 	X(word_4d791 = ax;);	// 121356                  mov     ds:word_4D791, ax ;~ 274D:1F53
loc_37a06:
	// 7196 
cs=0x274d;eip=0x001f56; 	T(bx = word_4d78f;);	// 121359                  mov     bx, ds:word_4D78F ;~ 274D:1F56
cs=0x274d;eip=0x001f5a; 	T(SUB(bx, word_4d78d));	// 121360                  sub     bx, ds:word_4D78D ;~ 274D:1F5A
cs=0x274d;eip=0x001f5e; 	X(word_4db05 = bx;);	// 121361                  mov     ds:word_4DB05, bx ;~ 274D:1F5E
cs=0x274d;eip=0x001f62; 	T(ax = word_4d793;);	// 121362                  mov     ax, ds:word_4D793 ;~ 274D:1F62
cs=0x274d;eip=0x001f65; 	T(dx = ax;);	// 121363                  mov     dx, ax ;~ 274D:1F65
cs=0x274d;eip=0x001f67; 	T(cx = word_4d791;);	// 121364                  mov     cx, ds:word_4D791 ;~ 274D:1F67
cs=0x274d;eip=0x001f6b; 	T(SUB(ax, cx));	// 121365                  sub     ax, cx ;~ 274D:1F6B
cs=0x274d;eip=0x001f6d; 	T(bp = 2;);	// 121366                  mov     bp, 2 ;~ 274D:1F6D
cs=0x274d;eip=0x001f70; 	J(JNS(loc_37a28));	// 121367                  jns     short loc_37A28 ;~ 274D:1F70
cs=0x274d;eip=0x001f72; 	T(XCHG(cx, dx));	// 121368                  xchg    cx, dx ;~ 274D:1F72
cs=0x274d;eip=0x001f74; 	T(NEG(bp));	// 121369                  neg     bp ;~ 274D:1F74
cs=0x274d;eip=0x001f76; 	T(NEG(ax));	// 121370                  neg     ax ;~ 274D:1F76
loc_37a28:
	// 7197 
cs=0x274d;eip=0x001f78; 	X(word_4db07 = ax;);	// 121373                  mov     ds:word_4DB07, ax ;~ 274D:1F78
cs=0x274d;eip=0x001f7b; 	T(CMP(dx, word_4db0b));	// 121374                  cmp     dx, ds:word_4DB0B ;~ 274D:1F7B
cs=0x274d;eip=0x001f7f; 	J(JBE(loc_37a35));	// 121375                  jbe     short loc_37A35 ;~ 274D:1F7F
cs=0x274d;eip=0x001f81; 	X(word_4db0b = dx;);	// 121376                  mov     ds:word_4DB0B, dx ;~ 274D:1F81
loc_37a35:
	// 7198 
cs=0x274d;eip=0x001f85; 	T(CMP(cx, word_4db09));	// 121379                  cmp     cx, ds:word_4DB09 ;~ 274D:1F85
cs=0x274d;eip=0x001f89; 	J(JNC(loc_37a3f));	// 121380                  jnb     short loc_37A3F ;~ 274D:1F89
cs=0x274d;eip=0x001f8b; 	X(word_4db09 = cx;);	// 121381                  mov     ds:word_4DB09, cx ;~ 274D:1F8B
loc_37a3f:
	// 7199 
cs=0x274d;eip=0x001f8f; 	T(CMP(ax, bx));	// 121384                  cmp     ax, bx ;~ 274D:1F8F
cs=0x274d;eip=0x001f91; 	J(JNC(loc_37a8e));	// 121385                  jnb     short loc_37A8E ;~ 274D:1F91
cs=0x274d;eip=0x001f93; 	T(di = word_4d791;);	// 121386                  mov     di, ds:word_4D791 ;~ 274D:1F93
cs=0x274d;eip=0x001f97; 	T(SHL(di, 1));	// 121387                  shl     di, 1 ;~ 274D:1F97
cs=0x274d;eip=0x001f99; 	T(ax = word_4d78d;);	// 121388                  mov     ax, ds:word_4D78D ;~ 274D:1F99
cs=0x274d;eip=0x001f9c; 	T(dx = word_4db05;);	// 121389                  mov     dx, ds:word_4DB05 ;~ 274D:1F9C
cs=0x274d;eip=0x001fa0; 	T(cx = dx;);	// 121390                  mov     cx, dx ;~ 274D:1FA0
cs=0x274d;eip=0x001fa2; 	T(bx = cx;);	// 121391                  mov     bx, cx ;~ 274D:1FA2
cs=0x274d;eip=0x001fa4; 	T(INC(bx));	// 121392                  inc     bx ;~ 274D:1FA4
cs=0x274d;eip=0x001fa5; 	T(SHR(bx, 1));	// 121393                  shr     bx, 1 ;~ 274D:1FA5
cs=0x274d;eip=0x001fa7; 	T(NEG(bx));	// 121394                  neg     bx ;~ 274D:1FA7
cs=0x274d;eip=0x001fa9; 	T(si = word_4db07;);	// 121395                  mov     si, ds:word_4DB07 ;~ 274D:1FA9
cs=0x274d;eip=0x001fad; 	J(JMP(loc_37a6f));	// 121396                  jmp     short loc_37A6F ;~ 274D:1FAD
loc_37a60:
	// 7200 
cs=0x274d;eip=0x001fb0; 	T(CMP(ax, *(dw*)(raddr(ds,di+0x4E6D))));	// 121402                  cmp     ax, [di+4E6Dh] ;~ 274D:1FB0
cs=0x274d;eip=0x001fb4; 	J(JBE(loc_37a6a));	// 121403                  jbe     short loc_37A6A ;~ 274D:1FB4
cs=0x274d;eip=0x001fb6; 	X(MOV(*(dw*)(raddr(ds,di+0x4E6D)), ax));	// 121404                  mov     [di+4E6Dh], ax ;~ 274D:1FB6
loc_37a6a:
	// 7201 
cs=0x274d;eip=0x001fba; 	T(INC(ax));	// 121407                  inc     ax ;~ 274D:1FBA
cs=0x274d;eip=0x001fbb; 	T(SUB(bx, dx));	// 121408                  sub     bx, dx ;~ 274D:1FBB
cs=0x274d;eip=0x001fbd; 	T(ADD(di, bp));	// 121409                  add     di, bp ;~ 274D:1FBD
loc_37a6f:
	// 7202 
cs=0x274d;eip=0x001fbf; 	T(CMP(ax, *(dw*)(raddr(ds,di+0x4CB5))));	// 121412                  cmp     ax, [di+4CB5h] ;~ 274D:1FBF
cs=0x274d;eip=0x001fc3; 	J(JNC(loc_37a79));	// 121413                  jnb     short loc_37A79 ;~ 274D:1FC3
cs=0x274d;eip=0x001fc5; 	X(MOV(*(dw*)(raddr(ds,di+0x4CB5)), ax));	// 121414                  mov     [di+4CB5h], ax ;~ 274D:1FC5
loc_37a79:
	// 7203 
cs=0x274d;eip=0x001fc9; 	T(DEC(cx));	// 121418                  dec     cx ;~ 274D:1FC9
cs=0x274d;eip=0x001fca; 	J(JS(loc_37a83));	// 121419                  js      short loc_37A83 ;~ 274D:1FCA
cs=0x274d;eip=0x001fcc; 	T(ADD(bx, si));	// 121420                  add     bx, si ;~ 274D:1FCC
cs=0x274d;eip=0x001fce; 	J(JNS(loc_37a60));	// 121421                  jns     short loc_37A60 ;~ 274D:1FCE
cs=0x274d;eip=0x001fd0; 	T(INC(ax));	// 121422                  inc     ax ;~ 274D:1FD0
cs=0x274d;eip=0x001fd1; 	J(JMP(loc_37a79));	// 121423                  jmp     short loc_37A79 ;~ 274D:1FD1
loc_37a83:
	// 7204 
cs=0x274d;eip=0x001fd3; 	T(CMP(ax, *(dw*)(raddr(ds,di+0x4E6D))));	// 121427                  cmp     ax, [di+4E6Dh] ;~ 274D:1FD3
cs=0x274d;eip=0x001fd7; 	J(JBE(locret_37a8d));	// 121428                  jbe     short locret_37A8D ;~ 274D:1FD7
cs=0x274d;eip=0x001fd9; 	X(MOV(*(dw*)(raddr(ds,di+0x4E6D)), ax));	// 121429                  mov     [di+4E6Dh], ax ;~ 274D:1FD9
locret_37a8d:
	// 7205 
cs=0x274d;eip=0x001fdd; 	J(RETN(0));	// 121432                  retn ;~ 274D:1FDD
loc_37a8e:
	// 7206 
cs=0x274d;eip=0x001fde; 	T(di = word_4d791;);	// 121436                  mov     di, ds:word_4D791 ;~ 274D:1FDE
cs=0x274d;eip=0x001fe2; 	T(SHL(di, 1));	// 121437                  shl     di, 1 ;~ 274D:1FE2
cs=0x274d;eip=0x001fe4; 	T(ax = word_4d78d;);	// 121438                  mov     ax, ds:word_4D78D ;~ 274D:1FE4
cs=0x274d;eip=0x001fe7; 	T(dx = word_4db07;);	// 121439                  mov     dx, ds:word_4DB07 ;~ 274D:1FE7
cs=0x274d;eip=0x001feb; 	T(cx = dx;);	// 121440                  mov     cx, dx ;~ 274D:1FEB
cs=0x274d;eip=0x001fed; 	T(bx = cx;);	// 121441                  mov     bx, cx ;~ 274D:1FED
cs=0x274d;eip=0x001fef; 	T(INC(bx));	// 121442                  inc     bx ;~ 274D:1FEF
cs=0x274d;eip=0x001ff0; 	T(SHR(bx, 1));	// 121443                  shr     bx, 1 ;~ 274D:1FF0
cs=0x274d;eip=0x001ff2; 	T(NEG(bx));	// 121444                  neg     bx ;~ 274D:1FF2
cs=0x274d;eip=0x001ff4; 	T(si = word_4db05;);	// 121445                  mov     si, ds:word_4DB05 ;~ 274D:1FF4
loc_37aa8:
	// 7207 
cs=0x274d;eip=0x001ff8; 	T(CMP(ax, *(dw*)(raddr(ds,di+0x4CB5))));	// 121449                  cmp     ax, [di+4CB5h] ;~ 274D:1FF8
cs=0x274d;eip=0x001ffc; 	J(JNC(loc_37ab2));	// 121450                  jnb     short loc_37AB2 ;~ 274D:1FFC
cs=0x274d;eip=0x001ffe; 	X(MOV(*(dw*)(raddr(ds,di+0x4CB5)), ax));	// 121451                  mov     [di+4CB5h], ax ;~ 274D:1FFE
loc_37ab2:
	// 7208 
cs=0x274d;eip=0x002002; 	T(CMP(ax, *(dw*)(raddr(ds,di+0x4E6D))));	// 121454                  cmp     ax, [di+4E6Dh] ;~ 274D:2002
cs=0x274d;eip=0x002006; 	J(JBE(loc_37abc));	// 121455                  jbe     short loc_37ABC ;~ 274D:2006
cs=0x274d;eip=0x002008; 	X(MOV(*(dw*)(raddr(ds,di+0x4E6D)), ax));	// 121456                  mov     [di+4E6Dh], ax ;~ 274D:2008
loc_37abc:
	// 7209 
cs=0x274d;eip=0x00200c; 	T(DEC(cx));	// 121459                  dec     cx ;~ 274D:200C
cs=0x274d;eip=0x00200d; 	J(JS(locret_37aca));	// 121460                  js      short locret_37ACA ;~ 274D:200D
cs=0x274d;eip=0x00200f; 	T(ADD(di, bp));	// 121461                  add     di, bp ;~ 274D:200F
cs=0x274d;eip=0x002011; 	T(ADD(bx, si));	// 121462                  add     bx, si ;~ 274D:2011
cs=0x274d;eip=0x002013; 	J(JS(loc_37aa8));	// 121463                  js      short loc_37AA8 ;~ 274D:2013
cs=0x274d;eip=0x002015; 	T(SUB(bx, dx));	// 121464                  sub     bx, dx ;~ 274D:2015
cs=0x274d;eip=0x002017; 	T(INC(ax));	// 121465                  inc     ax ;~ 274D:2017
cs=0x274d;eip=0x002018; 	J(JMP(loc_37aa8));	// 121466                  jmp     short loc_37AA8 ;~ 274D:2018
locret_37aca:
	// 7210 
cs=0x274d;eip=0x00201a; 	J(RETN(0));	// 121470                  retn ;~ 274D:201A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_37a06: 	goto loc_37a06;
        case m2c::kloc_37a28: 	goto loc_37a28;
        case m2c::kloc_37a35: 	goto loc_37a35;
        case m2c::kloc_37a3f: 	goto loc_37a3f;
        case m2c::kloc_37a60: 	goto loc_37a60;
        case m2c::kloc_37a6a: 	goto loc_37a6a;
        case m2c::kloc_37a6f: 	goto loc_37a6f;
        case m2c::kloc_37a79: 	goto loc_37a79;
        case m2c::kloc_37a83: 	goto loc_37a83;
        case m2c::kloc_37a8e: 	goto loc_37a8e;
        case m2c::kloc_37aa8: 	goto loc_37aa8;
        case m2c::kloc_37ab2: 	goto loc_37ab2;
        case m2c::kloc_37abc: 	goto loc_37abc;
        case m2c::klocret_37a8d: 	goto locret_37a8d;
        case m2c::klocret_37aca: 	goto locret_37aca;
        case m2c::ksub_379e4: 	goto sub_379e4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_37acc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_37acc:
    _begin:
cs=0x274d;eip=0x00201c; 	X(PUSH(es));	// 121480                  push    es ;~ 274D:201C
cs=0x274d;eip=0x00201d; 	X(PUSH(si));	// 121481                  push    si ;~ 274D:201D
cs=0x274d;eip=0x00201e; 	X(PUSH(di));	// 121482                  push    di ;~ 274D:201E
cs=0x274d;eip=0x00201f; 	X(PUSH(bp));	// 121483                  push    bp ;~ 274D:201F
cs=0x274d;eip=0x002020; 	J(CALL(sub_37ad8,0));	// 121484                  call    sub_37AD8 ;~ 274D:2020
cs=0x274d;eip=0x002023; 	X(POP(bp));	// 121485                  pop     bp ;~ 274D:2023
cs=0x274d;eip=0x002024; 	X(POP(di));	// 121486                  pop     di ;~ 274D:2024
cs=0x274d;eip=0x002025; 	X(POP(si));	// 121487                  pop     si ;~ 274D:2025
cs=0x274d;eip=0x002026; 	X(POP(es));	// 121488                  pop     es ;~ 274D:2026
cs=0x274d;eip=0x002027; 	J(RETF(0));	// 121489                  retf ;~ 274D:2027

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_37acc: 	goto sub_37acc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_37ad8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_37ad8:
    _begin:
cs=0x274d;eip=0x002028; 	T(SUB(ax, ax));	// 121501                  sub     ax, ax ;~ 274D:2028
cs=0x274d;eip=0x00202a; 	T(es = ax;);	// 121502                  mov     es, ax ;~ 274D:202A
cs=0x274d;eip=0x00202c; 	X(PUSH(*(dw*)(raddr(es,0))));	// 121504                  push    word ptr es:0 ;~ 274D:202C
cs=0x274d;eip=0x002031; 	X(PUSH(*(dw*)(raddr(es,2))));	// 121505                  push    word ptr es:2 ;~ 274D:2031
cs=0x274d;eip=0x002036; 	T(ax = offset(seg48ae,word_4ac7c)+0x3C);	// 121506                  lea     ax, word_4AC7C+3Ch ;~ 274D:2036
cs=0x274d;eip=0x00203a; 	X(MOV(*(dw*)(raddr(es,0)), ax));	// 121507                  mov     es:0, ax ;~ 274D:203A
cs=0x274d;eip=0x00203e; 	X(MOV(*(dw*)(raddr(es,2)), seg_offset(seg35ab)));	// 121508                  mov     word ptr es:2, seg seg35ab ;~ 274D:203E
cs=0x274d;eip=0x002045; 	X(PUSH(ds));	// 121509                  push    ds ;~ 274D:2045
cs=0x274d;eip=0x002046; 	X(POP(es));	// 121510                  pop     es ;~ 274D:2046
cs=0x274d;eip=0x002047; 	J(JMP(loc_37b47));	// 121512                  jmp     short loc_37B47 ;~ 274D:2047
loc_37afa:
	// 7211 
cs=0x274d;eip=0x00204a; 	T(SUB(ax, ax));	// 121518                  sub     ax, ax ;~ 274D:204A
cs=0x274d;eip=0x00204c; 	T(es = ax;);	// 121519                  mov     es, ax ;~ 274D:204C
cs=0x274d;eip=0x00204e; 	X(POP(*(dw*)(raddr(es,2))));	// 121521                  pop     word ptr es:2 ;~ 274D:204E
cs=0x274d;eip=0x002053; 	X(POP(*(dw*)(raddr(es,0))));	// 121522                  pop     word ptr es:0 ;~ 274D:2053
cs=0x274d;eip=0x002058; 	X(PUSH(ds));	// 121523                  push    ds ;~ 274D:2058
cs=0x274d;eip=0x002059; 	X(POP(es));	// 121524                  pop     es ;~ 274D:2059
cs=0x274d;eip=0x00205a; 	J(RETN(0));	// 121526                  retn ;~ 274D:205A
loc_37b0b:
	// 7212 
cs=0x274d;eip=0x00205b; 	T(AND(al, byte_4db0e));	// 121530                  and     al, ds:byte_4DB0E ;~ 274D:205B
cs=0x274d;eip=0x00205f; 	T(TEST(al, 6));	// 121531                  test    al, 6 ;~ 274D:205F
cs=0x274d;eip=0x002061; 	J(JNZ(loc_37afa));	// 121532                  jnz     short loc_37AFA ;~ 274D:2061
cs=0x274d;eip=0x002063; 	T(bx = cx;);	// 121533                  mov     bx, cx ;~ 274D:2063
cs=0x274d;eip=0x002065; 	J(JMP(loc_37c4a));	// 121534                  jmp     loc_37C4A ;~ 274D:2065
loc_37b18:
	// 7213 
cs=0x274d;eip=0x002068; 	J(JMP(loc_37c75));	// 121538                  jmp     loc_37C75 ;~ 274D:2068
loc_37b1b:
	// 7214 
cs=0x274d;eip=0x00206b; 	T(CMC);	// 121542                  cmc ;~ 274D:206B
cs=0x274d;eip=0x00206c; 	T(RCR(dx, 1));	// 121543                  rcr     dx, 1 ;~ 274D:206C
cs=0x274d;eip=0x00206e; 	X(word_4db0f = dx;);	// 121544                  mov     ds:word_4DB0F, dx ;~ 274D:206E
cs=0x274d;eip=0x002072; 	T(SAR(dx, 1));	// 121545                  sar     dx, 1 ;~ 274D:2072
cs=0x274d;eip=0x002074; 	X(word_4db13 = dx;);	// 121546                  mov     ds:word_4DB13, dx ;~ 274D:2074
cs=0x274d;eip=0x002078; 	T(dx = di;);	// 121547                  mov     dx, di ;~ 274D:2078
cs=0x274d;eip=0x00207a; 	T(SUB(dx, bp));	// 121548                  sub     dx, bp ;~ 274D:207A
cs=0x274d;eip=0x00207c; 	J(JNO(loc_37b34));	// 121549                  jno     short loc_37B34 ;~ 274D:207C
cs=0x274d;eip=0x00207e; 	T(CMC);	// 121550                  cmc ;~ 274D:207E
cs=0x274d;eip=0x00207f; 	T(RCR(dx, 1));	// 121551                  rcr     dx, 1 ;~ 274D:207F
cs=0x274d;eip=0x002081; 	J(JMP(loc_37b9f));	// 121552                  jmp     short loc_37B9F ;~ 274D:2081
loc_37b34:
	// 7215 
cs=0x274d;eip=0x002084; 	T(SAR(dx, 1));	// 121558                  sar     dx, 1 ;~ 274D:2084
cs=0x274d;eip=0x002086; 	J(JMP(loc_37b9f));	// 121559                  jmp     short loc_37B9F ;~ 274D:2086
loc_37b39:
	// 7216 
cs=0x274d;eip=0x002089; 	T(CMC);	// 121565                  cmc ;~ 274D:2089
cs=0x274d;eip=0x00208a; 	T(RCR(dx, 1));	// 121566                  rcr     dx, 1 ;~ 274D:208A
cs=0x274d;eip=0x00208c; 	X(SAR(word_4db0f, 1));	// 121567                  sar     ds:word_4DB0F, 1 ;~ 274D:208C
cs=0x274d;eip=0x002090; 	X(SAR(word_4db13, 1));	// 121568                  sar     ds:word_4DB13, 1 ;~ 274D:2090
cs=0x274d;eip=0x002094; 	J(JMP(loc_37b9f));	// 121569                  jmp     short loc_37B9F ;~ 274D:2094
loc_37b47:
	// 7217 
cs=0x274d;eip=0x002097; 	T(cx = word_4d78d;);	// 121575                  mov     cx, ds:word_4D78D ;~ 274D:2097
cs=0x274d;eip=0x00209b; 	T(dx = word_4d791;);	// 121576                  mov     dx, ds:word_4D791 ;~ 274D:209B
cs=0x274d;eip=0x00209f; 	T(si = word_4d78f;);	// 121577                  mov     si, ds:word_4D78F ;~ 274D:209F
cs=0x274d;eip=0x0020a3; 	T(di = word_4d793;);	// 121578                  mov     di, ds:word_4D793 ;~ 274D:20A3
cs=0x274d;eip=0x0020a7; 	T(bx = cx;);	// 121579                  mov     bx, cx ;~ 274D:20A7
cs=0x274d;eip=0x0020a9; 	T(bp = dx;);	// 121580                  mov     bp, dx ;~ 274D:20A9
cs=0x274d;eip=0x0020ab; 	J(CALL(sub_378f2,0));	// 121581                  call    sub_378F2 ;~ 274D:20AB
cs=0x274d;eip=0x0020ae; 	X(byte_4db0e = al;);	// 121582                  mov     ds:byte_4DB0E, al ;~ 274D:20AE
cs=0x274d;eip=0x0020b1; 	T(bx = si;);	// 121583                  mov     bx, si ;~ 274D:20B1
cs=0x274d;eip=0x0020b3; 	T(bp = di;);	// 121584                  mov     bp, di ;~ 274D:20B3
cs=0x274d;eip=0x0020b5; 	J(CALL(sub_378f2,0));	// 121585                  call    sub_378F2 ;~ 274D:20B5
cs=0x274d;eip=0x0020b8; 	J(JNZ(loc_37b81));	// 121586                  jnz     short loc_37B81 ;~ 274D:20B8
cs=0x274d;eip=0x0020ba; 	T(CMP(byte_4db0e, 0));	// 121587                  cmp     ds:byte_4DB0E, 0 ;~ 274D:20BA
cs=0x274d;eip=0x0020bf; 	J(JZ(loc_37b18));	// 121588                  jz      short loc_37B18 ;~ 274D:20BF
cs=0x274d;eip=0x0020c1; 	T(XCHG(cx, si));	// 121589                  xchg    cx, si ;~ 274D:20C1
cs=0x274d;eip=0x0020c3; 	T(XCHG(dx, di));	// 121590                  xchg    dx, di ;~ 274D:20C3
cs=0x274d;eip=0x0020c5; 	X(XCHG(al, byte_4db0e));	// 121591                  xchg    al, ds:byte_4DB0E ;~ 274D:20C5
cs=0x274d;eip=0x0020c9; 	X(word_4d78d = cx;);	// 121592                  mov     ds:word_4D78D, cx ;~ 274D:20C9
cs=0x274d;eip=0x0020cd; 	X(word_4d791 = dx;);	// 121593                  mov     ds:word_4D791, dx ;~ 274D:20CD
loc_37b81:
	// 7218 
cs=0x274d;eip=0x0020d1; 	T(bp = dx;);	// 121596                  mov     bp, dx ;~ 274D:20D1
cs=0x274d;eip=0x0020d3; 	T(TEST(byte_4db0e, al));	// 121597                  test    ds:byte_4DB0E, al ;~ 274D:20D3
cs=0x274d;eip=0x0020d7; 	J(JNZ(loc_37b0b));	// 121598                  jnz     short loc_37B0B ;~ 274D:20D7
cs=0x274d;eip=0x0020d9; 	T(dx = si;);	// 121599                  mov     dx, si ;~ 274D:20D9
cs=0x274d;eip=0x0020db; 	T(SUB(dx, cx));	// 121600                  sub     dx, cx ;~ 274D:20DB
cs=0x274d;eip=0x0020dd; 	J(JO(loc_37b1b));	// 121601                  jo      short loc_37B1B ;~ 274D:20DD
cs=0x274d;eip=0x0020df; 	X(word_4db0f = dx;);	// 121602                  mov     ds:word_4DB0F, dx ;~ 274D:20DF
cs=0x274d;eip=0x0020e3; 	T(SAR(dx, 1));	// 121603                  sar     dx, 1 ;~ 274D:20E3
cs=0x274d;eip=0x0020e5; 	X(word_4db13 = dx;);	// 121604                  mov     ds:word_4DB13, dx ;~ 274D:20E5
cs=0x274d;eip=0x0020e9; 	T(dx = di;);	// 121605                  mov     dx, di ;~ 274D:20E9
cs=0x274d;eip=0x0020eb; 	T(SUB(dx, bp));	// 121606                  sub     dx, bp ;~ 274D:20EB
cs=0x274d;eip=0x0020ed; 	J(JO(loc_37b39));	// 121607                  jo      short loc_37B39 ;~ 274D:20ED
loc_37b9f:
	// 7219 
cs=0x274d;eip=0x0020ef; 	X(word_4db11 = dx;);	// 121611                  mov     ds:word_4DB11, dx ;~ 274D:20EF
cs=0x274d;eip=0x0020f3; 	T(SAR(dx, 1));	// 121612                  sar     dx, 1 ;~ 274D:20F3
cs=0x274d;eip=0x0020f5; 	X(word_4db15 = dx;);	// 121613                  mov     ds:word_4DB15, dx ;~ 274D:20F5
loc_37ba9:
	// 7220 
cs=0x274d;eip=0x0020f9; 	T(TEST(al, 9));	// 121616                  test    al, 9 ;~ 274D:20F9
cs=0x274d;eip=0x0020fb; 	J(JZ(loc_37be9));	// 121617                  jz      short loc_37BE9 ;~ 274D:20FB
cs=0x274d;eip=0x0020fd; 	T(SUB(bx, bx));	// 121618                  sub     bx, bx ;~ 274D:20FD
cs=0x274d;eip=0x0020ff; 	T(OR(si, si));	// 121619                  or      si, si ;~ 274D:20FF
cs=0x274d;eip=0x002101; 	J(JS(loc_37bb7));	// 121620                  js      short loc_37BB7 ;~ 274D:2101
cs=0x274d;eip=0x002103; 	T(bx = word_4d787;);	// 121621                  mov     bx, ds:word_4D787 ;~ 274D:2103
loc_37bb7:
	// 7221 
cs=0x274d;eip=0x002107; 	T(ax = bx;);	// 121624                  mov     ax, bx ;~ 274D:2107
cs=0x274d;eip=0x002109; 	T(SUB(ax, cx));	// 121625                  sub     ax, cx ;~ 274D:2109
cs=0x274d;eip=0x00210b; 	X(IMUL1_2(word_4db11));	// 121626                  imul    ds:word_4DB11 ;~ 274D:210B
cs=0x274d;eip=0x00210f; 	X(PUSH(bx));	// 121627                  push    bx ;~ 274D:210F
cs=0x274d;eip=0x002110; 	T(bx = dx;);	// 121628                  mov     bx, dx ;~ 274D:2110
cs=0x274d;eip=0x002112; 	X(IDIV2(word_4db0f));	// 121629                  idiv    ds:word_4DB0F ;~ 274D:2112
cs=0x274d;eip=0x002116; 	T(OR(ax, ax));	// 121630                  or      ax, ax ;~ 274D:2116
cs=0x274d;eip=0x002118; 	T(OR(ax, ax));	// 121631                  or      ax, ax ;~ 274D:2118
cs=0x274d;eip=0x00211a; 	T(bl = bh;);	// 121632                  mov     bl, bh ;~ 274D:211A
cs=0x274d;eip=0x00211c; 	T(XOR(bl, *(db*)(((db*)&word_4db0f)+1)));	// 121633                  xor     bl, byte ptr ds:word_4DB0F+1 ;~ 274D:211C
cs=0x274d;eip=0x002120; 	J(JNS(loc_37bd5));	// 121634                  jns     short loc_37BD5 ;~ 274D:2120
cs=0x274d;eip=0x002122; 	T(NEG(dx));	// 121635                  neg     dx ;~ 274D:2122
cs=0x274d;eip=0x002124; 	T(DEC(ax));	// 121636                  dec     ax ;~ 274D:2124
loc_37bd5:
	// 7222 
cs=0x274d;eip=0x002125; 	T(SUB(dx, word_4db13));	// 121639                  sub     dx, ds:word_4DB13 ;~ 274D:2125
cs=0x274d;eip=0x002129; 	T(XOR(dh, bh));	// 121640                  xor     dh, bh ;~ 274D:2129
cs=0x274d;eip=0x00212b; 	J(JS(loc_37bde));	// 121641                  js      short loc_37BDE ;~ 274D:212B
cs=0x274d;eip=0x00212d; 	T(INC(ax));	// 121642                  inc     ax ;~ 274D:212D
loc_37bde:
	// 7223 
cs=0x274d;eip=0x00212e; 	X(POP(bx));	// 121645                  pop     bx ;~ 274D:212E
cs=0x274d;eip=0x00212f; 	T(ADD(ax, bp));	// 121646                  add     ax, bp ;~ 274D:212F
cs=0x274d;eip=0x002131; 	J(JS(loc_37bf1));	// 121647                  js      short loc_37BF1 ;~ 274D:2131
cs=0x274d;eip=0x002133; 	T(CMP(ax, word_4d789));	// 121648                  cmp     ax, ds:word_4D789 ;~ 274D:2133
cs=0x274d;eip=0x002137; 	J(JLE(loc_37c26));	// 121649                  jle     short loc_37C26 ;~ 274D:2137
loc_37be9:
	// 7224 
cs=0x274d;eip=0x002139; 	T(bx = word_4d789;);	// 121652                  mov     bx, ds:word_4D789 ;~ 274D:2139
cs=0x274d;eip=0x00213d; 	T(CMP(di, bx));	// 121653                  cmp     di, bx ;~ 274D:213D
cs=0x274d;eip=0x00213f; 	J(JG(loc_37bf3));	// 121654                  jg      short loc_37BF3 ;~ 274D:213F
loc_37bf1:
	// 7225 
cs=0x274d;eip=0x002141; 	T(SUB(bx, bx));	// 121657                  sub     bx, bx ;~ 274D:2141
loc_37bf3:
	// 7226 
cs=0x274d;eip=0x002143; 	T(ax = bx;);	// 121660                  mov     ax, bx ;~ 274D:2143
cs=0x274d;eip=0x002145; 	T(SUB(ax, bp));	// 121661                  sub     ax, bp ;~ 274D:2145
cs=0x274d;eip=0x002147; 	X(IMUL1_2(word_4db0f));	// 121662                  imul    ds:word_4DB0F ;~ 274D:2147
cs=0x274d;eip=0x00214b; 	X(PUSH(bx));	// 121663                  push    bx ;~ 274D:214B
cs=0x274d;eip=0x00214c; 	T(bx = dx;);	// 121664                  mov     bx, dx ;~ 274D:214C
cs=0x274d;eip=0x00214e; 	X(IDIV2(word_4db11));	// 121665                  idiv    ds:word_4DB11 ;~ 274D:214E
cs=0x274d;eip=0x002152; 	T(OR(ax, ax));	// 121666                  or      ax, ax ;~ 274D:2152
cs=0x274d;eip=0x002154; 	T(OR(ax, ax));	// 121667                  or      ax, ax ;~ 274D:2154
cs=0x274d;eip=0x002156; 	T(bl = bh;);	// 121668                  mov     bl, bh ;~ 274D:2156
cs=0x274d;eip=0x002158; 	T(XOR(bl, *(db*)(((db*)&word_4db11)+1)));	// 121669                  xor     bl, byte ptr ds:word_4DB11+1 ;~ 274D:2158
cs=0x274d;eip=0x00215c; 	J(JNS(loc_37c11));	// 121670                  jns     short loc_37C11 ;~ 274D:215C
cs=0x274d;eip=0x00215e; 	T(NEG(dx));	// 121671                  neg     dx ;~ 274D:215E
cs=0x274d;eip=0x002160; 	T(DEC(ax));	// 121672                  dec     ax ;~ 274D:2160
loc_37c11:
	// 7227 
cs=0x274d;eip=0x002161; 	T(SUB(dx, word_4db15));	// 121675                  sub     dx, ds:word_4DB15 ;~ 274D:2161
cs=0x274d;eip=0x002165; 	T(XOR(dh, bh));	// 121676                  xor     dh, bh ;~ 274D:2165
cs=0x274d;eip=0x002167; 	J(JS(loc_37c1a));	// 121677                  js      short loc_37C1A ;~ 274D:2167
cs=0x274d;eip=0x002169; 	T(INC(ax));	// 121678                  inc     ax ;~ 274D:2169
loc_37c1a:
	// 7228 
cs=0x274d;eip=0x00216a; 	X(POP(bx));	// 121681                  pop     bx ;~ 274D:216A
cs=0x274d;eip=0x00216b; 	T(ADD(ax, cx));	// 121682                  add     ax, cx ;~ 274D:216B
cs=0x274d;eip=0x00216d; 	T(XCHG(ax, bx));	// 121683                  xchg    ax, bx ;~ 274D:216D
cs=0x274d;eip=0x00216e; 	J(JS(loc_37c4a));	// 121684                  js      short loc_37C4A ;~ 274D:216E
cs=0x274d;eip=0x002170; 	T(CMP(bx, word_4d787));	// 121685                  cmp     bx, ds:word_4D787 ;~ 274D:2170
cs=0x274d;eip=0x002174; 	J(JG(loc_37c4a));	// 121686                  jg      short loc_37C4A ;~ 274D:2174
loc_37c26:
	// 7229 
cs=0x274d;eip=0x002176; 	X(PUSH(ax));	// 121689                  push    ax ;~ 274D:2176
cs=0x274d;eip=0x002177; 	X(PUSH(bx));	// 121690                  push    bx ;~ 274D:2177
cs=0x274d;eip=0x002178; 	X(PUSH(cx));	// 121691                  push    cx ;~ 274D:2178
cs=0x274d;eip=0x002179; 	X(PUSH(si));	// 121692                  push    si ;~ 274D:2179
cs=0x274d;eip=0x00217a; 	X(PUSH(di));	// 121693                  push    di ;~ 274D:217A
cs=0x274d;eip=0x00217b; 	T(dx = di;);	// 121694                  mov     dx, di ;~ 274D:217B
cs=0x274d;eip=0x00217d; 	T(di = ax;);	// 121695                  mov     di, ax ;~ 274D:217D
cs=0x274d;eip=0x00217f; 	T(si = bx;);	// 121696                  mov     si, bx ;~ 274D:217F
cs=0x274d;eip=0x002181; 	J(CALL(sub_37986,0));	// 121697                  call    sub_37986 ;~ 274D:2181
cs=0x274d;eip=0x002184; 	X(POP(di));	// 121698                  pop     di ;~ 274D:2184
cs=0x274d;eip=0x002185; 	X(POP(si));	// 121699                  pop     si ;~ 274D:2185
cs=0x274d;eip=0x002186; 	X(POP(cx));	// 121700                  pop     cx ;~ 274D:2186
cs=0x274d;eip=0x002187; 	X(POP(bx));	// 121701                  pop     bx ;~ 274D:2187
cs=0x274d;eip=0x002188; 	X(POP(ax));	// 121702                  pop     ax ;~ 274D:2188
cs=0x274d;eip=0x002189; 	T(CMP(byte_4db0e, 0));	// 121703                  cmp     ds:byte_4DB0E, 0 ;~ 274D:2189
cs=0x274d;eip=0x00218e; 	J(JNZ(loc_37c5f));	// 121704                  jnz     short loc_37C5F ;~ 274D:218E
cs=0x274d;eip=0x002190; 	X(word_4d793 = ax;);	// 121705                  mov     ds:word_4D793, ax ;~ 274D:2190
cs=0x274d;eip=0x002193; 	X(word_4d78f = bx;);	// 121706                  mov     ds:word_4D78F, bx ;~ 274D:2193
cs=0x274d;eip=0x002197; 	J(JMP(loc_37c75));	// 121707                  jmp     short loc_37C75 ;~ 274D:2197
loc_37c4a:
	// 7230 
cs=0x274d;eip=0x00219a; 	T(dx = bp;);	// 121714                  mov     dx, bp ;~ 274D:219A
cs=0x274d;eip=0x00219c; 	T(SUB(ax, ax));	// 121715                  sub     ax, ax ;~ 274D:219C
cs=0x274d;eip=0x00219e; 	T(es = ax;);	// 121716                  mov     es, ax ;~ 274D:219E
cs=0x274d;eip=0x0021a0; 	X(POP(*(dw*)(raddr(es,2))));	// 121718                  pop     word ptr es:2 ;~ 274D:21A0
cs=0x274d;eip=0x0021a5; 	X(POP(*(dw*)(raddr(es,0))));	// 121719                  pop     word ptr es:0 ;~ 274D:21A5
cs=0x274d;eip=0x0021aa; 	X(PUSH(ds));	// 121720                  push    ds ;~ 274D:21AA
cs=0x274d;eip=0x0021ab; 	X(POP(es));	// 121721                  pop     es ;~ 274D:21AB
cs=0x274d;eip=0x0021ac; 	J(return _group78(m2c::kloc_379d5, _state););	// 121723                  jmp     loc_379D5 ;~ 274D:21AC
loc_37c5f:
	// 7231 
cs=0x274d;eip=0x0021af; 	X(word_4d791 = ax;);	// 121727                  mov     ds:word_4D791, ax ;~ 274D:21AF
cs=0x274d;eip=0x0021b2; 	X(word_4d78d = bx;);	// 121728                  mov     ds:word_4D78D, bx ;~ 274D:21B2
cs=0x274d;eip=0x0021b6; 	T(XCHG(cx, si));	// 121729                  xchg    cx, si ;~ 274D:21B6
cs=0x274d;eip=0x0021b8; 	T(XCHG(bp, di));	// 121730                  xchg    bp, di ;~ 274D:21B8
cs=0x274d;eip=0x0021ba; 	T(al = byte_4db0e;);	// 121731                  mov     al, ds:byte_4DB0E ;~ 274D:21BA
cs=0x274d;eip=0x0021bd; 	X(byte_4db0e = 0;);	// 121732                  mov     ds:byte_4DB0E, 0 ;~ 274D:21BD
cs=0x274d;eip=0x0021c2; 	J(JMP(loc_37ba9));	// 121733                  jmp     loc_37BA9 ;~ 274D:21C2
loc_37c75:
	// 7232 
cs=0x274d;eip=0x0021c5; 	T(SUB(ax, ax));	// 121738                  sub     ax, ax ;~ 274D:21C5
cs=0x274d;eip=0x0021c7; 	T(es = ax;);	// 121739                  mov     es, ax ;~ 274D:21C7
cs=0x274d;eip=0x0021c9; 	X(POP(*(dw*)(raddr(es,2))));	// 121741                  pop     word ptr es:2 ;~ 274D:21C9
cs=0x274d;eip=0x0021ce; 	X(POP(*(dw*)(raddr(es,0))));	// 121742                  pop     word ptr es:0 ;~ 274D:21CE
cs=0x274d;eip=0x0021d3; 	X(PUSH(ds));	// 121743                  push    ds ;~ 274D:21D3
cs=0x274d;eip=0x0021d4; 	X(POP(es));	// 121744                  pop     es ;~ 274D:21D4
cs=0x274d;eip=0x0021d5; 	J(return sub_379e4(0, _state););	// 121746                  jmp     sub_379E4 ;~ 274D:21D5

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_37afa: 	goto loc_37afa;
        case m2c::kloc_37b0b: 	goto loc_37b0b;
        case m2c::kloc_37b18: 	goto loc_37b18;
        case m2c::kloc_37b1b: 	goto loc_37b1b;
        case m2c::kloc_37b34: 	goto loc_37b34;
        case m2c::kloc_37b39: 	goto loc_37b39;
        case m2c::kloc_37b47: 	goto loc_37b47;
        case m2c::kloc_37b81: 	goto loc_37b81;
        case m2c::kloc_37b9f: 	goto loc_37b9f;
        case m2c::kloc_37ba9: 	goto loc_37ba9;
        case m2c::kloc_37bb7: 	goto loc_37bb7;
        case m2c::kloc_37bd5: 	goto loc_37bd5;
        case m2c::kloc_37bde: 	goto loc_37bde;
        case m2c::kloc_37be9: 	goto loc_37be9;
        case m2c::kloc_37bf1: 	goto loc_37bf1;
        case m2c::kloc_37bf3: 	goto loc_37bf3;
        case m2c::kloc_37c11: 	goto loc_37c11;
        case m2c::kloc_37c1a: 	goto loc_37c1a;
        case m2c::kloc_37c26: 	goto loc_37c26;
        case m2c::kloc_37c4a: 	goto loc_37c4a;
        case m2c::kloc_37c5f: 	goto loc_37c5f;
        case m2c::kloc_37c75: 	goto loc_37c75;
        case m2c::ksub_37ad8: 	goto sub_37ad8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg35ab_21d8_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg35ab_21d8_proc:
    _begin:
cs=0x274d;eip=0x0021d8; 	X(PUSH(bp));	// 121750                  push    bp ;~ 274D:21D8
cs=0x274d;eip=0x0021d9; 	T(bp = sp;);	// 121751                  mov     bp, sp ;~ 274D:21D9
cs=0x274d;eip=0x0021db; 	T(CMP(*(dw*)(raddr(ss,bp+2)), 0x214E));	// 121752                  cmp     word ptr [bp+2], 214Eh ;~ 274D:21DB
cs=0x274d;eip=0x0021e0; 	T(ax = word_4db11;);	// 121753                  mov     ax, ds:word_4DB11 ;~ 274D:21E0
cs=0x274d;eip=0x0021e3; 	J(JZ(loc_37c98));	// 121754                  jz      short loc_37C98 ;~ 274D:21E3
cs=0x274d;eip=0x0021e5; 	T(ax = word_4db0f;);	// 121755                  mov     ax, ds:word_4DB0F ;~ 274D:21E5
loc_37c98:
	// 7233 
cs=0x274d;eip=0x0021e8; 	T(XOR(dx, ax));	// 121758                  xor     dx, ax ;~ 274D:21E8
cs=0x274d;eip=0x0021ea; 	T(ax = 0x7F00;);	// 121759                  mov     ax, 7F00h ;~ 274D:21EA
cs=0x274d;eip=0x0021ed; 	J(JNS(loc_37ca1));	// 121760                  jns     short loc_37CA1 ;~ 274D:21ED
loc_37c9f:
	// 7234 
cs=0x274d;eip=0x0021ef; 	T(NEG(ax));	// 121763                  neg     ax ;~ 274D:21EF
loc_37ca1:
	// 7235 
cs=0x274d;eip=0x0021f1; 	X(ADD(*(dw*)(raddr(ss,bp+2)), 4));	// 121766                  add     word ptr [bp+2], 4 ;~ 274D:21F1
cs=0x274d;eip=0x0021f5; 	T(SUB(dx, dx));	// 121767                  sub     dx, dx ;~ 274D:21F5
cs=0x274d;eip=0x0021f7; 	X(POP(bp));	// 121768                  pop     bp ;~ 274D:21F7
cs=0x274d;eip=0x0021f8; 	J(IRET);	// 121769                  iret ;~ 274D:21F8

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_37c98: 	goto loc_37c98;
        case m2c::kloc_37c9f: 	goto loc_37c9f;
        case m2c::kloc_37ca1: 	goto loc_37ca1;
        case m2c::kseg35ab_21d8_proc: 	goto seg35ab_21d8_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

