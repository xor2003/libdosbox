/* THIS IS GENERATED FILE */

        
#include "cfix.exe.h"

                

 bool sub_2f160(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_2f160:
    _begin:
cs=0x20b8;eip=0x000000; 	J(CALL(sub_2f199,0));	// 103992                  call    sub_2F199 ;~ 20B8:0000
cs=0x20b8;eip=0x000003; 	J(RETF(0));	// 103993                  retf ;~ 20B8:0003

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_2f160: 	goto sub_2f160;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_2f164(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_2f164:
    _begin:
cs=0x20b8;eip=0x000004; 	J(CALL(sub_2f56b,0));	// 104003                  call    sub_2F56B ;~ 20B8:0004
cs=0x20b8;eip=0x000007; 	J(RETF(0));	// 104004                  retf ;~ 20B8:0007

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_2f164: 	goto sub_2f164;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group39(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group39:
    _begin:
sub_2f199:
	// 104062 
cs=0x20b8;eip=0x000039; 	X(PUSH(ax));	// 104063                  push    ax ;~ 20B8:0039
cs=0x20b8;eip=0x00003a; 	X(PUSH(bx));	// 104064                  push    bx ;~ 20B8:003A
cs=0x20b8;eip=0x00003b; 	X(PUSH(cx));	// 104065                  push    cx ;~ 20B8:003B
cs=0x20b8;eip=0x00003c; 	X(PUSH(dx));	// 104066                  push    dx ;~ 20B8:003C
cs=0x20b8;eip=0x00003d; 	X(PUSH(di));	// 104067                  push    di ;~ 20B8:003D
cs=0x20b8;eip=0x00003e; 	X(PUSH(si));	// 104068                  push    si ;~ 20B8:003E
sub_2f19f:
	// 104075 
cs=0x20b8;eip=0x00003f; 	X(PUSH(ds));	// 104076                  push    ds ;~ 20B8:003F
cs=0x20b8;eip=0x000040; 	X(PUSH(es));	// 104077                  push    es ;~ 20B8:0040
cs=0x20b8;eip=0x000041; 	X(PUSH(cs));	// 104078                  push    cs ;~ 20B8:0041
cs=0x20b8;eip=0x000042; 	X(PUSH(cs));	// 104079                  push    cs ;~ 20B8:0042
cs=0x20b8;eip=0x000043; 	X(POP(ds));	// 104080                  pop     ds ;~ 20B8:0043
cs=0x20b8;eip=0x000044; 	X(POP(es));	// 104082                  pop     es ;~ 20B8:0044
cs=0x20b8;eip=0x000045; 	J(CALL(sub_2f50c,0));	// 104084                  call    sub_2F50C ;~ 20B8:0045
cs=0x20b8;eip=0x000048; 	J(CALL(sub_2f544,0));	// 104085                  call    sub_2F544 ;~ 20B8:0048
cs=0x20b8;eip=0x00004b; 	J(CALL(sub_2f47a,0));	// 104086                  call    sub_2F47A ;~ 20B8:004B
cs=0x20b8;eip=0x00004e; 	X(DEC(*(db*)(&seg_2f16f)));	// 104087                  dec     byte ptr seg_2F16F ;~ 20B8:004E
cs=0x20b8;eip=0x000052; 	T(di = 0x49C;);	// 104088                  mov     di, 49Ch ;~ 20B8:0052
cs=0x20b8;eip=0x000055; 	J(CALL(sub_2f1fe,0));	// 104089                  call    sub_2F1FE ;~ 20B8:0055
cs=0x20b8;eip=0x000058; 	T(di = 0x4B1;);	// 104090                  mov     di, 4B1h ;~ 20B8:0058
cs=0x20b8;eip=0x00005b; 	J(CALL(sub_2f1fe,0));	// 104091                  call    sub_2F1FE ;~ 20B8:005B
cs=0x20b8;eip=0x00005e; 	T(di = 0x4C6;);	// 104092                  mov     di, 4C6h ;~ 20B8:005E
cs=0x20b8;eip=0x000061; 	J(CALL(sub_2f1fe,0));	// 104093                  call    sub_2F1FE ;~ 20B8:0061
cs=0x20b8;eip=0x000064; 	T(di = 0x4DB;);	// 104094                  mov     di, 4DBh ;~ 20B8:0064
cs=0x20b8;eip=0x000067; 	J(CALL(sub_2f1fe,0));	// 104095                  call    sub_2F1FE ;~ 20B8:0067
cs=0x20b8;eip=0x00006a; 	T(di = 0x4F0;);	// 104096                  mov     di, 4F0h ;~ 20B8:006A
cs=0x20b8;eip=0x00006d; 	J(CALL(sub_2f1fe,0));	// 104097                  call    sub_2F1FE ;~ 20B8:006D
cs=0x20b8;eip=0x000070; 	T(di = 0x505;);	// 104098                  mov     di, 505h ;~ 20B8:0070
cs=0x20b8;eip=0x000073; 	J(CALL(sub_2f1fe,0));	// 104099                  call    sub_2F1FE ;~ 20B8:0073
cs=0x20b8;eip=0x000076; 	T(di = 0x51A;);	// 104100                  mov     di, 51Ah ;~ 20B8:0076
cs=0x20b8;eip=0x000079; 	J(CALL(sub_2f1fe,0));	// 104101                  call    sub_2F1FE ;~ 20B8:0079
cs=0x20b8;eip=0x00007c; 	T(di = 0x52F;);	// 104102                  mov     di, 52Fh ;~ 20B8:007C
cs=0x20b8;eip=0x00007f; 	J(CALL(sub_2f1fe,0));	// 104103                  call    sub_2F1FE ;~ 20B8:007F
cs=0x20b8;eip=0x000082; 	T(di = 0x544;);	// 104104                  mov     di, 544h ;~ 20B8:0082
cs=0x20b8;eip=0x000085; 	J(CALL(sub_2f1fe,0));	// 104105                  call    sub_2F1FE ;~ 20B8:0085
cs=0x20b8;eip=0x000088; 	T(CMP(*(db*)(&seg_2f16f), 0));	// 104106                  cmp     byte ptr seg_2F16F, 0 ;~ 20B8:0088
cs=0x20b8;eip=0x00008d; 	J(JNZ(loc_2f1f5));	// 104107                  jnz     short loc_2F1F5 ;~ 20B8:008D
cs=0x20b8;eip=0x00008f; 	T(al = *(db*)(((db*)&word_2f16d)+1););	// 104108                  mov     al, byte ptr word_2F16D+1 ;~ 20B8:008F
cs=0x20b8;eip=0x000092; 	X(*(db*)(&seg_2f16f) = al;);	// 104109                  mov     byte ptr seg_2F16F, al ;~ 20B8:0092
loc_2f1f5:
	// 6657 
cs=0x20b8;eip=0x000095; 	X(POP(es));	// 104112                  pop     es ;~ 20B8:0095
cs=0x20b8;eip=0x000096; 	X(POP(ds));	// 104114                  pop     ds ;~ 20B8:0096
cs=0x20b8;eip=0x000097; 	X(POP(si));	// 104116                  pop     si ;~ 20B8:0097
cs=0x20b8;eip=0x000098; 	X(POP(di));	// 104117                  pop     di ;~ 20B8:0098
cs=0x20b8;eip=0x000099; 	X(POP(dx));	// 104118                  pop     dx ;~ 20B8:0099
cs=0x20b8;eip=0x00009a; 	X(POP(cx));	// 104119                  pop     cx ;~ 20B8:009A
cs=0x20b8;eip=0x00009b; 	X(POP(bx));	// 104120                  pop     bx ;~ 20B8:009B
cs=0x20b8;eip=0x00009c; 	X(POP(ax));	// 104121                  pop     ax ;~ 20B8:009C
cs=0x20b8;eip=0x00009d; 	J(RETN(0));	// 104122                  retn ;~ 20B8:009D

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_2f1f5: 	goto loc_2f1f5;
        case m2c::ksub_2f199: 	goto sub_2f199;
        case m2c::ksub_2f19f: 	goto sub_2f19f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_2f1fe(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_2f1fe:
    _begin:
cs=0x20b8;eip=0x00009e; 	T(CMP(*(raddr(ds,di+0x10)), 0));	// 104132                  cmp     byte ptr [di+10h], 0 ;~ 20B8:009E
cs=0x20b8;eip=0x0000a2; 	J(JZ(locret_2f220));	// 104133                  jz      short locret_2F220 ;~ 20B8:00A2
cs=0x20b8;eip=0x0000a4; 	T(MOV(bx, *(dw*)(raddr(ds,di+0x0C))));	// 104134                  mov     bx, [di+0Ch] ;~ 20B8:00A4
cs=0x20b8;eip=0x0000a7; 	T(CMP(*(raddr(ds,di+0x10)), 2));	// 104135                  cmp     byte ptr [di+10h], 2 ;~ 20B8:00A7
cs=0x20b8;eip=0x0000ab; 	J(JZ(loc_2f214));	// 104136                  jz      short loc_2F214 ;~ 20B8:00AB
cs=0x20b8;eip=0x0000ad; 	T(CMP(*(db*)(&seg_2f16f), 0));	// 104137                  cmp     byte ptr seg_2F16F, 0 ;~ 20B8:00AD
cs=0x20b8;eip=0x0000b2; 	J(JNZ(loc_2f21f));	// 104138                  jnz     short loc_2F21F ;~ 20B8:00B2
loc_2f214:
	// 6658 
cs=0x20b8;eip=0x0000b4; 	X(DEC(*(raddr(ds,di+1))));	// 104141                  dec     byte ptr [di+1] ;~ 20B8:00B4
cs=0x20b8;eip=0x0000b7; 	J(JZ(loc_2f221));	// 104142                  jz      short loc_2F221 ;~ 20B8:00B7
cs=0x20b8;eip=0x0000b9; 	J(CALL(sub_2f371,0));	// 104143                  call    sub_2F371 ;~ 20B8:00B9
cs=0x20b8;eip=0x0000bc; 	J(CALL(sub_2f3f1,0));	// 104144                  call    sub_2F3F1 ;~ 20B8:00BC
loc_2f21f:
	// 6659 
cs=0x20b8;eip=0x0000bf; 	T(NOP);	// 104147                  nop ;~ 20B8:00BF
locret_2f220:
	// 6660 
cs=0x20b8;eip=0x0000c0; 	J(RETN(0));	// 104150                  retn ;~ 20B8:00C0
loc_2f221:
	// 6661 
cs=0x20b8;eip=0x0000c1; 	T(MOV(al, *(raddr(ds,bx))));	// 104155                  mov     al, [bx] ;~ 20B8:00C1
cs=0x20b8;eip=0x0000c3; 	T(INC(bx));	// 104156                  inc     bx ;~ 20B8:00C3
cs=0x20b8;eip=0x0000c4; 	T(OR(al, al));	// 104157                  or      al, al ;~ 20B8:00C4
cs=0x20b8;eip=0x0000c6; 	J(JS(loc_2f245));	// 104158                  js      short loc_2F245 ;~ 20B8:00C6
cs=0x20b8;eip=0x0000c8; 	X(MOV(*(raddr(ds,di)), al));	// 104159                  mov     [di], al ;~ 20B8:00C8
cs=0x20b8;eip=0x0000ca; 	T(MOV(ax, *(dw*)(raddr(ds,di+8))));	// 104160                  mov     ax, [di+8] ;~ 20B8:00CA
cs=0x20b8;eip=0x0000cd; 	J(CALL(sub_2f5bf,0));	// 104161                  call    sub_2F5BF ;~ 20B8:00CD
cs=0x20b8;eip=0x0000d0; 	J(CALL(sub_2f37c,0));	// 104162                  call    sub_2F37C ;~ 20B8:00D0
loc_2f233:
	// 6662 
cs=0x20b8;eip=0x0000d3; 	X(MOV(*(dw*)(raddr(ds,di+0x0C)), bx));	// 104166                  mov     [di+0Ch], bx ;~ 20B8:00D3
cs=0x20b8;eip=0x0000d6; 	T(MOV(al, *(raddr(ds,di+0x11))));	// 104167                  mov     al, [di+11h] ;~ 20B8:00D6
cs=0x20b8;eip=0x0000d9; 	X(MOV(*(raddr(ds,di+1)), al));	// 104168                  mov     [di+1], al ;~ 20B8:00D9
cs=0x20b8;eip=0x0000dc; 	J(RETN(0));	// 104169                  retn ;~ 20B8:00DC
loc_2f23d:
	// 6663 
cs=0x20b8;eip=0x0000dd; 	T(MOV(ax, *(dw*)(raddr(ds,di+8))));	// 104173                  mov     ax, [di+8] ;~ 20B8:00DD
cs=0x20b8;eip=0x0000e0; 	J(CALL(sub_2f5bf,0));	// 104174                  call    sub_2F5BF ;~ 20B8:00E0
cs=0x20b8;eip=0x0000e3; 	J(JMP(loc_2f233));	// 104175                  jmp     short loc_2F233 ;~ 20B8:00E3
loc_2f245:
	// 6664 
cs=0x20b8;eip=0x0000e5; 	T(CMP(al, 0x0E0));	// 104179                  cmp     al, 0E0h ;~ 20B8:00E5
cs=0x20b8;eip=0x0000e7; 	J(JNC(loc_2f259));	// 104180                  jnb     short loc_2F259 ;~ 20B8:00E7
cs=0x20b8;eip=0x0000e9; 	T(CMP(al, 0x0A0));	// 104181                  cmp     al, 0A0h ;~ 20B8:00E9
cs=0x20b8;eip=0x0000eb; 	J(JNC(loc_2f2ad));	// 104182                  jnb     short loc_2F2AD ;~ 20B8:00EB
cs=0x20b8;eip=0x0000ed; 	T(SHL(al, 1));	// 104183                  shl     al, 1 ;~ 20B8:00ED
cs=0x20b8;eip=0x0000ef; 	T(XOR(ah, ah));	// 104184                  xor     ah, ah ;~ 20B8:00EF
cs=0x20b8;eip=0x0000f1; 	T(si = ax;);	// 104185                  mov     si, ax ;~ 20B8:00F1
cs=0x20b8;eip=0x0000f3; 	T(ADD(si, 0x2AC));	// 104186                  add     si, 2ACh ;~ 20B8:00F3
cs=0x20b8;eip=0x0000f7; __disp=*(dw*)(raddr(ds,si));
	J(return __dispatch_call(__disp, _state););	// 104187                  jmp     word ptr [si] ;~ 20B8:00F7
loc_2f259:
	// 6665 
cs=0x20b8;eip=0x0000f9; 	T(SUB(al, 0x0DF));	// 104191                  sub     al, 0DFh ;~ 20B8:00F9
cs=0x20b8;eip=0x0000fb; 	X(MOV(*(raddr(ds,di+0x11)), al));	// 104192                  mov     [di+11h], al ;~ 20B8:00FB
cs=0x20b8;eip=0x0000fe; 	J(JMP(loc_2f221));	// 104193                  jmp     short loc_2F221 ;~ 20B8:00FE
loc_2f260:
	// 6666 
cs=0x20b8;eip=0x000100; 	T(MOV(al, *(raddr(ds,bx))));	// 104197                  mov     al, [bx] ;~ 20B8:0100
cs=0x20b8;eip=0x000102; 	T(INC(bx));	// 104198                  inc     bx ;~ 20B8:0102
cs=0x20b8;eip=0x000103; 	X(MOV(*(raddr(ds,di+0x0E)), al));	// 104199                  mov     [di+0Eh], al ;~ 20B8:0103
cs=0x20b8;eip=0x000106; 	X(PUSH(bx));	// 104200                  push    bx ;~ 20B8:0106
cs=0x20b8;eip=0x000107; 	X(PUSH(si));	// 104201                  push    si ;~ 20B8:0107
cs=0x20b8;eip=0x000108; 	T(MOV(si, *(dw*)(raddr(ds,di+2))));	// 104202                  mov     si, [di+2] ;~ 20B8:0108
cs=0x20b8;eip=0x00010b; 	T(bl = al;);	// 104203                  mov     bl, al ;~ 20B8:010B
cs=0x20b8;eip=0x00010d; 	T(XOR(bh, bh));	// 104204                  xor     bh, bh ;~ 20B8:010D
cs=0x20b8;eip=0x00010f; 	T(AND(bl, 0x7F));	// 104205                  and     bl, 7Fh ;~ 20B8:010F
cs=0x20b8;eip=0x000112; 	T(MOV(ah, *(raddr(ds,bx+0x55B))));	// 104206                  mov     ah, [bx+55Bh] ;~ 20B8:0112
cs=0x20b8;eip=0x000116; 	T(MOV(al, *(raddr(ds,si+0x0C))));	// 104207                  mov     al, [si+0Ch] ;~ 20B8:0116
cs=0x20b8;eip=0x000119; 	T(SHL(al, 1));	// 104208                  shl     al, 1 ;~ 20B8:0119
cs=0x20b8;eip=0x00011b; 	T(SHL(al, 1));	// 104209                  shl     al, 1 ;~ 20B8:011B
cs=0x20b8;eip=0x00011d; 	T(AND(al, 0x0C0));	// 104210                  and     al, 0C0h ;~ 20B8:011D
cs=0x20b8;eip=0x00011f; 	T(OR(ah, al));	// 104211                  or      ah, al ;~ 20B8:011F
cs=0x20b8;eip=0x000121; 	T(MOV(al, *(raddr(ds,di+6))));	// 104212                  mov     al, [di+6] ;~ 20B8:0121
cs=0x20b8;eip=0x000124; 	T(ADD(al, 0x40));	// 104213                  add     al, 40h ; '@' ;~ 20B8:0124
cs=0x20b8;eip=0x000126; 	J(CALL(sub_2f5bf,0));	// 104214                  call    sub_2F5BF ;~ 20B8:0126
cs=0x20b8;eip=0x000129; 	T(MOV(bl, *(raddr(ds,di+0x0F))));	// 104215                  mov     bl, [di+0Fh] ;~ 20B8:0129
cs=0x20b8;eip=0x00012c; 	T(AND(bl, 0x7F));	// 104216                  and     bl, 7Fh ;~ 20B8:012C
cs=0x20b8;eip=0x00012f; 	T(XOR(bh, bh));	// 104217                  xor     bh, bh ;~ 20B8:012F
cs=0x20b8;eip=0x000131; 	T(MOV(ah, *(raddr(ds,bx+0x55B))));	// 104218                  mov     ah, [bx+55Bh] ;~ 20B8:0131
cs=0x20b8;eip=0x000135; 	T(MOV(al, *(raddr(ds,si+0x0C))));	// 104219                  mov     al, [si+0Ch] ;~ 20B8:0135
cs=0x20b8;eip=0x000138; 	T(ROR(al, 1));	// 104220                  ror     al, 1 ;~ 20B8:0138
cs=0x20b8;eip=0x00013a; 	T(ROR(al, 1));	// 104221                  ror     al, 1 ;~ 20B8:013A
cs=0x20b8;eip=0x00013c; 	T(AND(al, 0x0C0));	// 104222                  and     al, 0C0h ;~ 20B8:013C
cs=0x20b8;eip=0x00013e; 	T(OR(ah, al));	// 104223                  or      ah, al ;~ 20B8:013E
cs=0x20b8;eip=0x000140; 	T(MOV(al, *(raddr(ds,di+5))));	// 104224                  mov     al, [di+5] ;~ 20B8:0140
cs=0x20b8;eip=0x000143; 	T(ADD(al, 0x40));	// 104225                  add     al, 40h ; '@' ;~ 20B8:0143
cs=0x20b8;eip=0x000145; 	J(CALL(sub_2f5bf,0));	// 104226                  call    sub_2F5BF ;~ 20B8:0145
cs=0x20b8;eip=0x000148; 	X(POP(si));	// 104227                  pop     si ;~ 20B8:0148
cs=0x20b8;eip=0x000149; 	X(POP(bx));	// 104228                  pop     bx ;~ 20B8:0149
cs=0x20b8;eip=0x00014a; 	J(JMP(loc_2f221));	// 104229                  jmp     loc_2F221 ;~ 20B8:014A
loc_2f2ad:
	// 6667 
cs=0x20b8;eip=0x00014d; 	T(SUB(al, 0x0A0));	// 104233                  sub     al, 0A0h ;~ 20B8:014D
cs=0x20b8;eip=0x00014f; 	X(PUSH(bx));	// 104234                  push    bx ;~ 20B8:014F
cs=0x20b8;eip=0x000150; 	X(MOV(*(raddr(ds,di+4)), al));	// 104235                  mov     [di+4], al ;~ 20B8:0150
cs=0x20b8;eip=0x000153; 	T(XOR(ah, ah));	// 104236                  xor     ah, ah ;~ 20B8:0153
cs=0x20b8;eip=0x000155; 	T(SHL(al, 1));	// 104237                  shl     al, 1 ;~ 20B8:0155
cs=0x20b8;eip=0x000157; 	T(SHL(al, 1));	// 104238                  shl     al, 1 ;~ 20B8:0157
cs=0x20b8;eip=0x000159; 	T(SHL(ax, 1));	// 104239                  shl     ax, 1 ;~ 20B8:0159
cs=0x20b8;eip=0x00015b; 	T(SHL(ax, 1));	// 104240                  shl     ax, 1 ;~ 20B8:015B
cs=0x20b8;eip=0x00015d; 	T(si = 0x80C;);	// 104241                  mov     si, 80Ch ;~ 20B8:015D
cs=0x20b8;eip=0x000160; 	T(ADD(si, ax));	// 104242                  add     si, ax ;~ 20B8:0160
cs=0x20b8;eip=0x000162; 	X(MOV(*(dw*)(raddr(ds,di+2)), si));	// 104243                  mov     [di+2], si ;~ 20B8:0162
cs=0x20b8;eip=0x000165; 	T(MOV(dx, *(dw*)(raddr(ds,di+5))));	// 104244                  mov     dx, [di+5] ;~ 20B8:0165
cs=0x20b8;eip=0x000168; 	T(MOV(ah, *(raddr(ds,si))));	// 104245                  mov     ah, [si] ;~ 20B8:0168
cs=0x20b8;eip=0x00016a; 	T(al = dl;);	// 104246                  mov     al, dl ;~ 20B8:016A
cs=0x20b8;eip=0x00016c; 	T(ADD(al, 0x60));	// 104247                  add     al, 60h ; '`' ;~ 20B8:016C
cs=0x20b8;eip=0x00016e; 	J(CALL(sub_2f5bf,0));	// 104248                  call    sub_2F5BF ;~ 20B8:016E
cs=0x20b8;eip=0x000171; 	T(MOV(ah, *(raddr(ds,si+1))));	// 104249                  mov     ah, [si+1] ;~ 20B8:0171
cs=0x20b8;eip=0x000174; 	T(al = dh;);	// 104250                  mov     al, dh ;~ 20B8:0174
cs=0x20b8;eip=0x000176; 	T(ADD(al, 0x60));	// 104251                  add     al, 60h ; '`' ;~ 20B8:0176
cs=0x20b8;eip=0x000178; 	J(CALL(sub_2f5bf,0));	// 104252                  call    sub_2F5BF ;~ 20B8:0178
cs=0x20b8;eip=0x00017b; 	T(MOV(ah, *(raddr(ds,si+2))));	// 104253                  mov     ah, [si+2] ;~ 20B8:017B
cs=0x20b8;eip=0x00017e; 	T(al = dl;);	// 104254                  mov     al, dl ;~ 20B8:017E
cs=0x20b8;eip=0x000180; 	T(ADD(al, 0x80));	// 104255                  add     al, 80h ;~ 20B8:0180
cs=0x20b8;eip=0x000182; 	J(CALL(sub_2f5bf,0));	// 104256                  call    sub_2F5BF ;~ 20B8:0182
cs=0x20b8;eip=0x000185; 	T(MOV(ah, *(raddr(ds,si+3))));	// 104257                  mov     ah, [si+3] ;~ 20B8:0185
cs=0x20b8;eip=0x000188; 	T(al = dh;);	// 104258                  mov     al, dh ;~ 20B8:0188
cs=0x20b8;eip=0x00018a; 	T(ADD(al, 0x80));	// 104259                  add     al, 80h ;~ 20B8:018A
cs=0x20b8;eip=0x00018c; 	J(CALL(sub_2f5bf,0));	// 104260                  call    sub_2F5BF ;~ 20B8:018C
cs=0x20b8;eip=0x00018f; 	T(MOV(ah, *(raddr(ds,si+6))));	// 104261                  mov     ah, [si+6] ;~ 20B8:018F
cs=0x20b8;eip=0x000192; 	T(al = dl;);	// 104262                  mov     al, dl ;~ 20B8:0192
cs=0x20b8;eip=0x000194; 	T(ADD(al, 0x0E0));	// 104263                  add     al, 0E0h ;~ 20B8:0194
cs=0x20b8;eip=0x000196; 	J(CALL(sub_2f5bf,0));	// 104264                  call    sub_2F5BF ;~ 20B8:0196
cs=0x20b8;eip=0x000199; 	T(MOV(ah, *(raddr(ds,si+7))));	// 104265                  mov     ah, [si+7] ;~ 20B8:0199
cs=0x20b8;eip=0x00019c; 	T(al = dh;);	// 104266                  mov     al, dh ;~ 20B8:019C
cs=0x20b8;eip=0x00019e; 	T(ADD(al, 0x0E0));	// 104267                  add     al, 0E0h ;~ 20B8:019E
cs=0x20b8;eip=0x0001a0; 	J(CALL(sub_2f5bf,0));	// 104268                  call    sub_2F5BF ;~ 20B8:01A0
cs=0x20b8;eip=0x0001a3; 	T(MOV(ah, *(raddr(ds,si+9))));	// 104269                  mov     ah, [si+9] ;~ 20B8:01A3
cs=0x20b8;eip=0x0001a6; 	T(MOV(al, *(raddr(ds,di+7))));	// 104270                  mov     al, [di+7] ;~ 20B8:01A6
cs=0x20b8;eip=0x0001a9; 	T(ADD(al, 0x0C0));	// 104271                  add     al, 0C0h ;~ 20B8:01A9
cs=0x20b8;eip=0x0001ab; 	J(CALL(sub_2f5bf,0));	// 104272                  call    sub_2F5BF ;~ 20B8:01AB
cs=0x20b8;eip=0x0001ae; 	T(MOV(ah, *(raddr(ds,si+4))));	// 104273                  mov     ah, [si+4] ;~ 20B8:01AE
cs=0x20b8;eip=0x0001b1; 	T(al = dl;);	// 104274                  mov     al, dl ;~ 20B8:01B1
cs=0x20b8;eip=0x0001b3; 	T(ADD(al, 0x20));	// 104275                  add     al, 20h ; ' ' ;~ 20B8:01B3
cs=0x20b8;eip=0x0001b5; 	J(CALL(sub_2f5bf,0));	// 104276                  call    sub_2F5BF ;~ 20B8:01B5
cs=0x20b8;eip=0x0001b8; 	T(MOV(ah, *(raddr(ds,si+5))));	// 104277                  mov     ah, [si+5] ;~ 20B8:01B8
cs=0x20b8;eip=0x0001bb; 	T(al = dh;);	// 104278                  mov     al, dh ;~ 20B8:01BB
cs=0x20b8;eip=0x0001bd; 	T(ADD(al, 0x20));	// 104279                  add     al, 20h ; ' ' ;~ 20B8:01BD
cs=0x20b8;eip=0x0001bf; 	J(CALL(sub_2f5bf,0));	// 104280                  call    sub_2F5BF ;~ 20B8:01BF
cs=0x20b8;eip=0x0001c2; 	T(MOV(bl, *(raddr(ds,si+0x0A))));	// 104281                  mov     bl, [si+0Ah] ;~ 20B8:01C2
cs=0x20b8;eip=0x0001c5; 	X(MOV(*(raddr(ds,di+0x0E)), bl));	// 104282                  mov     [di+0Eh], bl ;~ 20B8:01C5
cs=0x20b8;eip=0x0001c8; 	T(XOR(bh, bh));	// 104283                  xor     bh, bh ;~ 20B8:01C8
cs=0x20b8;eip=0x0001ca; 	T(AND(bl, 0x7F));	// 104284                  and     bl, 7Fh ;~ 20B8:01CA
cs=0x20b8;eip=0x0001cd; 	T(MOV(ah, *(raddr(ds,bx+0x55B))));	// 104285                  mov     ah, [bx+55Bh] ;~ 20B8:01CD
cs=0x20b8;eip=0x0001d1; 	T(MOV(al, *(raddr(ds,si+0x0C))));	// 104286                  mov     al, [si+0Ch] ;~ 20B8:01D1
cs=0x20b8;eip=0x0001d4; 	T(SHL(al, 1));	// 104287                  shl     al, 1 ;~ 20B8:01D4
cs=0x20b8;eip=0x0001d6; 	T(SHL(al, 1));	// 104288                  shl     al, 1 ;~ 20B8:01D6
cs=0x20b8;eip=0x0001d8; 	T(AND(al, 0x0C0));	// 104289                  and     al, 0C0h ;~ 20B8:01D8
cs=0x20b8;eip=0x0001da; 	T(OR(ah, al));	// 104290                  or      ah, al ;~ 20B8:01DA
cs=0x20b8;eip=0x0001dc; 	T(al = dh;);	// 104291                  mov     al, dh ;~ 20B8:01DC
cs=0x20b8;eip=0x0001de; 	T(ADD(al, 0x40));	// 104292                  add     al, 40h ; '@' ;~ 20B8:01DE
cs=0x20b8;eip=0x0001e0; 	J(CALL(sub_2f5bf,0));	// 104293                  call    sub_2F5BF ;~ 20B8:01E0
cs=0x20b8;eip=0x0001e3; 	T(MOV(bl, *(raddr(ds,si+0x0B))));	// 104294                  mov     bl, [si+0Bh] ;~ 20B8:01E3
cs=0x20b8;eip=0x0001e6; 	X(MOV(*(raddr(ds,di+0x0F)), bl));	// 104295                  mov     [di+0Fh], bl ;~ 20B8:01E6
cs=0x20b8;eip=0x0001e9; 	T(AND(bl, 0x7F));	// 104296                  and     bl, 7Fh ;~ 20B8:01E9
cs=0x20b8;eip=0x0001ec; 	T(XOR(bh, bh));	// 104297                  xor     bh, bh ;~ 20B8:01EC
cs=0x20b8;eip=0x0001ee; 	X(MOV(*(raddr(ds,di+0x13)), bh));	// 104298                  mov     [di+13h], bh ;~ 20B8:01EE
cs=0x20b8;eip=0x0001f1; 	T(MOV(ah, *(raddr(ds,bx+0x55B))));	// 104299                  mov     ah, [bx+55Bh] ;~ 20B8:01F1
cs=0x20b8;eip=0x0001f5; 	T(MOV(al, *(raddr(ds,si+0x0C))));	// 104300                  mov     al, [si+0Ch] ;~ 20B8:01F5
cs=0x20b8;eip=0x0001f8; 	T(ROR(al, 1));	// 104301                  ror     al, 1 ;~ 20B8:01F8
cs=0x20b8;eip=0x0001fa; 	T(ROR(al, 1));	// 104302                  ror     al, 1 ;~ 20B8:01FA
cs=0x20b8;eip=0x0001fc; 	T(AND(al, 0x0C0));	// 104303                  and     al, 0C0h ;~ 20B8:01FC
cs=0x20b8;eip=0x0001fe; 	T(OR(ah, al));	// 104304                  or      ah, al ;~ 20B8:01FE
cs=0x20b8;eip=0x000200; 	T(al = dl;);	// 104305                  mov     al, dl ;~ 20B8:0200
cs=0x20b8;eip=0x000202; 	T(ADD(al, 0x40));	// 104306                  add     al, 40h ; '@' ;~ 20B8:0202
cs=0x20b8;eip=0x000204; 	J(CALL(sub_2f5bf,0));	// 104307                  call    sub_2F5BF ;~ 20B8:0204
cs=0x20b8;eip=0x000207; 	T(MOV(al, *(raddr(ds,si+8))));	// 104308                  mov     al, [si+8] ;~ 20B8:0207
cs=0x20b8;eip=0x00020a; 	X(MOV(*(raddr(ds,di+0x12)), al));	// 104309                  mov     [di+12h], al ;~ 20B8:020A
cs=0x20b8;eip=0x00020d; 	X(POP(bx));	// 104310                  pop     bx ;~ 20B8:020D
cs=0x20b8;eip=0x00020e; 	J(JMP(loc_2f221));	// 104311                  jmp     loc_2F221 ;~ 20B8:020E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_2f214: 	goto loc_2f214;
        case m2c::kloc_2f21f: 	goto loc_2f21f;
        case m2c::kloc_2f221: 	goto loc_2f221;
        case m2c::kloc_2f233: 	goto loc_2f233;
        case m2c::kloc_2f23d: 	goto loc_2f23d;
        case m2c::kloc_2f245: 	goto loc_2f245;
        case m2c::kloc_2f259: 	goto loc_2f259;
        case m2c::kloc_2f260: 	goto loc_2f260;
        case m2c::kloc_2f2ad: 	goto loc_2f2ad;
        case m2c::klocret_2f220: 	goto locret_2f220;
        case m2c::ksub_2f1fe: 	goto sub_2f1fe;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group40(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group40:
    _begin:
sub_2f371:
	// 104318 
cs=0x20b8;eip=0x000211; 	T(MOV(al, *(raddr(ds,di+0x13))));	// 104319                  mov     al, [di+13h] ;~ 20B8:0211
cs=0x20b8;eip=0x000214; 	T(OR(al, al));	// 104320                  or      al, al ;~ 20B8:0214
cs=0x20b8;eip=0x000216; 	J(JZ(locret_2f3d4));	// 104321                  jz      short locret_2F3D4 ;~ 20B8:0216
cs=0x20b8;eip=0x000218; 	T(ADD(al, *(raddr(ds,di))));	// 104322                  add     al, [di] ;~ 20B8:0218
cs=0x20b8;eip=0x00021a; 	X(MOV(*(raddr(ds,di)), al));	// 104323                  mov     [di], al ;~ 20B8:021A
sub_2f37c:
	// 104330 
cs=0x20b8;eip=0x00021c; 	X(PUSH(bx));	// 104331                  push    bx ;~ 20B8:021C
cs=0x20b8;eip=0x00021d; 	X(PUSH(si));	// 104332                  push    si ;~ 20B8:021D
cs=0x20b8;eip=0x00021e; 	T(MOV(al, *(raddr(ds,di))));	// 104333                  mov     al, [di] ;~ 20B8:021E
cs=0x20b8;eip=0x000220; 	T(ADD(al, *(raddr(ds,di+0x12))));	// 104334                  add     al, [di+12h] ;~ 20B8:0220
cs=0x20b8;eip=0x000223; 	T(XOR(ah, ah));	// 104335                  xor     ah, ah ;~ 20B8:0223
cs=0x20b8;eip=0x000225; 	T(si = ax;);	// 104336                  mov     si, ax ;~ 20B8:0225
cs=0x20b8;eip=0x000227; 	T(MOV(bl, *(raddr(ds,si+0x75B))));	// 104337                  mov     bl, [si+75Bh] ;~ 20B8:0227
cs=0x20b8;eip=0x00022b; 	T(MOV(al, *(raddr(ds,si+0x7BB))));	// 104338                  mov     al, [si+7BBh] ;~ 20B8:022B
cs=0x20b8;eip=0x00022f; 	T(SHL(al, 1));	// 104339                  shl     al, 1 ;~ 20B8:022F
cs=0x20b8;eip=0x000231; 	T(SHL(al, 1));	// 104340                  shl     al, 1 ;~ 20B8:0231
cs=0x20b8;eip=0x000233; 	T(SHL(al, 1));	// 104341                  shl     al, 1 ;~ 20B8:0233
cs=0x20b8;eip=0x000235; 	T(SHL(al, 1));	// 104342                  shl     al, 1 ;~ 20B8:0235
cs=0x20b8;eip=0x000237; 	T(SHL(ax, 1));	// 104343                  shl     ax, 1 ;~ 20B8:0237
cs=0x20b8;eip=0x000239; 	T(si = 0x5DB;);	// 104344                  mov     si, 5DBh ;~ 20B8:0239
cs=0x20b8;eip=0x00023c; 	T(ADD(si, ax));	// 104345                  add     si, ax ;~ 20B8:023C
cs=0x20b8;eip=0x00023e; 	T(LODSW);	// 104346                  lodsw ;~ 20B8:023E
cs=0x20b8;eip=0x00023f; 	T(DEC(bl));	// 104347                  dec     bl ;~ 20B8:023F
cs=0x20b8;eip=0x000241; 	T(OR(ax, ax));	// 104348                  or      ax, ax ;~ 20B8:0241
cs=0x20b8;eip=0x000243; 	J(JGE(loc_2f3a7));	// 104349                  jge     short loc_2F3A7 ;~ 20B8:0243
cs=0x20b8;eip=0x000245; 	T(INC(bl));	// 104350                  inc     bl ;~ 20B8:0245
loc_2f3a7:
	// 6668 
cs=0x20b8;eip=0x000247; 	T(OR(bl, bl));	// 104353                  or      bl, bl ;~ 20B8:0247
cs=0x20b8;eip=0x000249; 	J(JGE(loc_2f3af));	// 104354                  jge     short loc_2F3AF ;~ 20B8:0249
cs=0x20b8;eip=0x00024b; 	T(INC(bl));	// 104355                  inc     bl ;~ 20B8:024B
cs=0x20b8;eip=0x00024d; 	T(SAR(ax, 1));	// 104356                  sar     ax, 1 ;~ 20B8:024D
loc_2f3af:
	// 6669 
cs=0x20b8;eip=0x00024f; 	X(PUSH(ax));	// 104359                  push    ax ;~ 20B8:024F
cs=0x20b8;eip=0x000250; 	T(ah = al;);	// 104360                  mov     ah, al ;~ 20B8:0250
cs=0x20b8;eip=0x000252; 	T(MOV(al, *(raddr(ds,di+7))));	// 104361                  mov     al, [di+7] ;~ 20B8:0252
cs=0x20b8;eip=0x000255; 	T(ADD(al, 0x0A0));	// 104362                  add     al, 0A0h ;~ 20B8:0255
cs=0x20b8;eip=0x000257; 	J(CALL(sub_2f5bf,0));	// 104363                  call    sub_2F5BF ;~ 20B8:0257
cs=0x20b8;eip=0x00025a; 	X(POP(ax));	// 104364                  pop     ax ;~ 20B8:025A
cs=0x20b8;eip=0x00025b; 	T(AND(ah, 3));	// 104365                  and     ah, 3 ;~ 20B8:025B
cs=0x20b8;eip=0x00025e; 	T(SHL(bl, 1));	// 104366                  shl     bl, 1 ;~ 20B8:025E
cs=0x20b8;eip=0x000260; 	T(SHL(bl, 1));	// 104367                  shl     bl, 1 ;~ 20B8:0260
cs=0x20b8;eip=0x000262; 	T(OR(ah, bl));	// 104368                  or      ah, bl ;~ 20B8:0262
cs=0x20b8;eip=0x000264; 	T(MOV(al, *(raddr(ds,di+7))));	// 104369                  mov     al, [di+7] ;~ 20B8:0264
cs=0x20b8;eip=0x000267; 	T(ADD(al, 0x0B0));	// 104370                  add     al, 0B0h ;~ 20B8:0267
cs=0x20b8;eip=0x000269; 	X(MOV(*(dw*)(raddr(ds,di+8)), ax));	// 104371                  mov     [di+8], ax ;~ 20B8:0269
cs=0x20b8;eip=0x00026c; 	T(OR(ah, 0x20));	// 104372                  or      ah, 20h ;~ 20B8:026C
cs=0x20b8;eip=0x00026f; 	J(CALL(sub_2f5bf,0));	// 104373                  call    sub_2F5BF ;~ 20B8:026F
cs=0x20b8;eip=0x000272; 	X(POP(si));	// 104374                  pop     si ;~ 20B8:0272
cs=0x20b8;eip=0x000273; 	X(POP(bx));	// 104375                  pop     bx ;~ 20B8:0273
locret_2f3d4:
	// 6670 
cs=0x20b8;eip=0x000274; 	J(RETN(0));	// 104378                  retn ;~ 20B8:0274

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_2f3a7: 	goto loc_2f3a7;
        case m2c::kloc_2f3af: 	goto loc_2f3af;
        case m2c::klocret_2f3d4: 	goto locret_2f3d4;
        case m2c::ksub_2f371: 	goto sub_2f371;
        case m2c::ksub_2f37c: 	goto sub_2f37c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_2f3d5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_2f3d5:
    _begin:
cs=0x20b8;eip=0x000275; 	T(di = 0x49C;);	// 104388                  mov     di, 49Ch ;~ 20B8:0275
cs=0x20b8;eip=0x000278; 	T(cx = 9;);	// 104389                  mov     cx, 9 ;~ 20B8:0278
loc_2f3db:
	// 6671 
cs=0x20b8;eip=0x00027b; 	T(MOV(ax, *(dw*)(raddr(ds,di+8))));	// 104392                  mov     ax, [di+8] ;~ 20B8:027B
cs=0x20b8;eip=0x00027e; 	J(CALL(sub_2f5bf,0));	// 104393                  call    sub_2F5BF ;~ 20B8:027E
cs=0x20b8;eip=0x000281; 	X(MOV(*(raddr(ds,di+0x10)), ch));	// 104394                  mov     [di+10h], ch ;~ 20B8:0281
cs=0x20b8;eip=0x000284; 	X(MOV(*(raddr(ds,di+0x14)), ch));	// 104395                  mov     [di+14h], ch ;~ 20B8:0284
cs=0x20b8;eip=0x000287; 	T(ADD(di, 0x15));	// 104396                  add     di, 15h ;~ 20B8:0287
cs=0x20b8;eip=0x00028a; 	J(LOOP(loc_2f3db));	// 104397                  loop    loc_2F3DB ;~ 20B8:028A
cs=0x20b8;eip=0x00028c; 	X(word_2f168 = cx;);	// 104398                  mov     word_2F168, cx ;~ 20B8:028C
cs=0x20b8;eip=0x000290; 	J(RETN(0));	// 104399                  retn ;~ 20B8:0290

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_2f3db: 	goto loc_2f3db;
        case m2c::ksub_2f3d5: 	goto sub_2f3d5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_2f3f1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_2f3f1:
    _begin:
cs=0x20b8;eip=0x000291; 	T(CMP(*(raddr(ds,bx)), 0x82));	// 104407                  cmp     byte ptr [bx], 82h ;~ 20B8:0291
cs=0x20b8;eip=0x000294; 	J(JZ(locret_2f40b));	// 104408                  jz      short locret_2F40B ;~ 20B8:0294
cs=0x20b8;eip=0x000296; 	T(MOV(si, *(dw*)(raddr(ds,di+2))));	// 104409                  mov     si, [di+2] ;~ 20B8:0296
cs=0x20b8;eip=0x000299; 	T(MOV(al, *(raddr(ds,si+0x0E))));	// 104410                  mov     al, [si+0Eh] ;~ 20B8:0299
cs=0x20b8;eip=0x00029c; 	T(CMP(al, *(raddr(ds,di+1))));	// 104411                  cmp     al, [di+1] ;~ 20B8:029C
cs=0x20b8;eip=0x00029f; 	J(JNZ(locret_2f40b));	// 104412                  jnz     short locret_2F40B ;~ 20B8:029F
cs=0x20b8;eip=0x0002a1; 	T(MOV(ax, *(dw*)(raddr(ds,di+8))));	// 104413                  mov     ax, [di+8] ;~ 20B8:02A1
cs=0x20b8;eip=0x0002a4; 	J(CALL(sub_2f5bf,0));	// 104414                  call    sub_2F5BF ;~ 20B8:02A4
cs=0x20b8;eip=0x0002a7; 	X(MOV(*(raddr(ds,di+0x13)), 0));	// 104415                  mov     byte ptr [di+13h], 0 ;~ 20B8:02A7
locret_2f40b:
	// 6672 
cs=0x20b8;eip=0x0002ab; 	J(RETN(0));	// 104419                  retn ;~ 20B8:02AB

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::klocret_2f40b: 	goto locret_2f40b;
        case m2c::ksub_2f3f1: 	goto sub_2f3f1;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg008_2c2_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg008_2c2_proc:
    _begin:
loc_2f422:
	// 6673 
cs=0x20b8;eip=0x0002c2; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 104437                  mov     bx, [bx] ;~ 20B8:02C2
cs=0x20b8;eip=0x0002c4; 	T(MOV(cx, *(dw*)(raddr(ds,bx))));	// 104438                  mov     cx, [bx] ;~ 20B8:02C4
cs=0x20b8;eip=0x0002c6; 	T(INC(bx));	// 104439                  inc     bx ;~ 20B8:02C6
cs=0x20b8;eip=0x0002c7; 	T(INC(bx));	// 104440                  inc     bx ;~ 20B8:02C7
cs=0x20b8;eip=0x0002c8; 	X(MOV(*(dw*)(raddr(ds,di+0x0A)), bx));	// 104441                  mov     [di+0Ah], bx ;~ 20B8:02C8
cs=0x20b8;eip=0x0002cb; 	X(MOV(*(dw*)(raddr(ds,di+0x0C)), cx));	// 104442                  mov     [di+0Ch], cx ;~ 20B8:02CB
cs=0x20b8;eip=0x0002ce; 	T(bx = cx;);	// 104443                  mov     bx, cx ;~ 20B8:02CE
cs=0x20b8;eip=0x0002d0; 	J(return sub_2f1fe(m2c::kloc_2f221, _state););	// 104444                  jmp     loc_2F221 ;~ 20B8:02D0
loc_2f433:
	// 6674 
cs=0x20b8;eip=0x0002d3; 	T(MOV(bx, *(dw*)(raddr(ds,di+0x0A))));	// 104448                  mov     bx, [di+0Ah] ;~ 20B8:02D3
cs=0x20b8;eip=0x0002d6; 	T(MOV(cx, *(dw*)(raddr(ds,bx))));	// 104449                  mov     cx, [bx] ;~ 20B8:02D6
cs=0x20b8;eip=0x0002d8; 	T(INC(bx));	// 104450                  inc     bx ;~ 20B8:02D8
cs=0x20b8;eip=0x0002d9; 	T(INC(bx));	// 104451                  inc     bx ;~ 20B8:02D9
cs=0x20b8;eip=0x0002da; 	J(JCXZ(loc_2f422));	// 104452                  jcxz    short loc_2F422 ;~ 20B8:02DA
cs=0x20b8;eip=0x0002dc; 	X(MOV(*(dw*)(raddr(ds,di+0x0A)), bx));	// 104453                  mov     [di+0Ah], bx ;~ 20B8:02DC
cs=0x20b8;eip=0x0002df; 	X(MOV(*(dw*)(raddr(ds,di+0x0C)), cx));	// 104454                  mov     [di+0Ch], cx ;~ 20B8:02DF
cs=0x20b8;eip=0x0002e2; 	T(bx = cx;);	// 104455                  mov     bx, cx ;~ 20B8:02E2
cs=0x20b8;eip=0x0002e4; 	J(return sub_2f1fe(m2c::kloc_2f221, _state););	// 104456                  jmp     loc_2F221 ;~ 20B8:02E4
loc_2f447:
	// 6675 
cs=0x20b8;eip=0x0002e7; 	T(MOV(al, *(raddr(ds,bx))));	// 104460                  mov     al, [bx] ;~ 20B8:02E7
cs=0x20b8;eip=0x0002e9; 	T(INC(bx));	// 104461                  inc     bx ;~ 20B8:02E9
cs=0x20b8;eip=0x0002ea; 	X(MOV(*(raddr(ds,di+0x12)), al));	// 104462                  mov     [di+12h], al ;~ 20B8:02EA
cs=0x20b8;eip=0x0002ed; 	J(return sub_2f1fe(m2c::kloc_2f221, _state););	// 104463                  jmp     loc_2F221 ;~ 20B8:02ED
loc_2f450:
	// 6676 
cs=0x20b8;eip=0x0002f0; 	T(MOV(al, *(raddr(ds,bx))));	// 104467                  mov     al, [bx] ;~ 20B8:02F0
cs=0x20b8;eip=0x0002f2; 	T(INC(bx));	// 104468                  inc     bx ;~ 20B8:02F2
cs=0x20b8;eip=0x0002f3; 	T(XOR(ah, ah));	// 104469                  xor     ah, ah ;~ 20B8:02F3
cs=0x20b8;eip=0x0002f5; 	X(word_2f168 = ax;);	// 104470                  mov     word_2F168, ax ;~ 20B8:02F5
loc_2f458:
	// 6677 
cs=0x20b8;eip=0x0002f8; 	T(MOV(ax, *(dw*)(raddr(ds,di+8))));	// 104475                  mov     ax, [di+8] ;~ 20B8:02F8
cs=0x20b8;eip=0x0002fb; 	J(CALL(sub_2f5bf,0));	// 104476                  call    sub_2F5BF ;~ 20B8:02FB
cs=0x20b8;eip=0x0002fe; 	X(MOV(*(raddr(ds,di+0x10)), 0));	// 104477                  mov     byte ptr [di+10h], 0 ;~ 20B8:02FE
cs=0x20b8;eip=0x000302; 	X(MOV(*(raddr(ds,di+0x14)), 0));	// 104478                  mov     byte ptr [di+14h], 0 ;~ 20B8:0302
cs=0x20b8;eip=0x000306; 	J(RETN(0));	// 104479                  retn ;~ 20B8:0306

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_2f422: 	goto loc_2f422;
        case m2c::kloc_2f433: 	goto loc_2f433;
        case m2c::kloc_2f447: 	goto loc_2f447;
        case m2c::kloc_2f450: 	goto loc_2f450;
        case m2c::kloc_2f458: 	goto loc_2f458;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_2f467(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_2f467:
    _begin:
cs=0x20b8;eip=0x000307; 	X(MOV(*(raddr(ds,di+0x13)), 1));	// 104486                  mov     byte ptr [di+13h], 1 ;~ 20B8:0307
cs=0x20b8;eip=0x00030b; 	J(return sub_2f1fe(m2c::kloc_2f221, _state););	// 104487                  jmp     loc_2F221 ;~ 20B8:030B

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_2f467: 	goto sub_2f467;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_2f46e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_2f46e:
    _begin:
cs=0x20b8;eip=0x00030e; 	X(MOV(*(raddr(ds,di+0x13)), 0x0FF));	// 104495                  mov     byte ptr [di+13h], 0FFh ;~ 20B8:030E
cs=0x20b8;eip=0x000312; 	J(return sub_2f1fe(m2c::kloc_2f221, _state););	// 104496                  jmp     loc_2F221 ;~ 20B8:0312

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_2f46e: 	goto sub_2f46e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_2f475(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_2f475:
    _begin:
cs=0x20b8;eip=0x000315; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 104504                  mov     bx, [bx] ;~ 20B8:0315
cs=0x20b8;eip=0x000317; 	J(return sub_2f1fe(m2c::kloc_2f221, _state););	// 104505                  jmp     loc_2F221 ;~ 20B8:0317

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_2f475: 	goto sub_2f475;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_2f47a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_2f47a:
    _begin:
cs=0x20b8;eip=0x00031a; 	T(CMP(*(db*)(((db*)&word_2f168)+1), 0));	// 104513                  cmp     byte ptr word_2F168+1, 0 ;~ 20B8:031A
cs=0x20b8;eip=0x00031f; 	J(JNZ(loc_2f487));	// 104514                  jnz     short loc_2F487 ;~ 20B8:031F
cs=0x20b8;eip=0x000321; 	T(al = *(db*)(&word_2f168););	// 104515                  mov     al, byte ptr word_2F168 ;~ 20B8:0321
cs=0x20b8;eip=0x000324; 	X(byte_2f174 = al;);	// 104516                  mov     byte_2F174, al ;~ 20B8:0324
loc_2f487:
	// 6678 
cs=0x20b8;eip=0x000327; 	T(CMP(byte_2f174, 0));	// 104519                  cmp     byte_2F174, 0 ;~ 20B8:0327
cs=0x20b8;eip=0x00032c; 	J(JZ(locret_2f50b));	// 104520                  jz      short locret_2F50B ;~ 20B8:032C
cs=0x20b8;eip=0x00032e; 	X(*(db*)(&word_2f168) = 0;);	// 104521                  mov     byte ptr word_2F168, 0 ;~ 20B8:032E
cs=0x20b8;eip=0x000333; 	X(byte_2f174 = 0;);	// 104522                  mov     byte_2F174, 0 ;~ 20B8:0333
cs=0x20b8;eip=0x000338; 	T(CMP(al, 4));	// 104523                  cmp     al, 4 ;~ 20B8:0338
cs=0x20b8;eip=0x00033a; 	J(JC(loc_2f49f));	// 104524                  jb      short loc_2F49F ;~ 20B8:033A
cs=0x20b8;eip=0x00033c; 	J(return sub_2f3d5(0, _state););	// 104525                  jmp     sub_2F3D5 ;~ 20B8:033C
loc_2f49f:
	// 6679 
cs=0x20b8;eip=0x00033f; 	X(PUSH(ax));	// 104529                  push    ax ;~ 20B8:033F
cs=0x20b8;eip=0x000340; 	J(CALL(sub_2f3d5,0));	// 104530                  call    sub_2F3D5 ;~ 20B8:0340
cs=0x20b8;eip=0x000343; 	X(POP(ax));	// 104531                  pop     ax ;~ 20B8:0343
cs=0x20b8;eip=0x000344; 	X(*(db*)(((db*)&word_2f168)+1) = al;);	// 104532                  mov     byte ptr word_2F168+1, al ;~ 20B8:0344
cs=0x20b8;eip=0x000347; 	T(SHL(al, 1));	// 104533                  shl     al, 1 ;~ 20B8:0347
cs=0x20b8;eip=0x000349; 	T(si = 0x0B9C;);	// 104534                  mov     si, 0B9Ch ;~ 20B8:0349
cs=0x20b8;eip=0x00034c; 	T(XOR(ah, ah));	// 104535                  xor     ah, ah ;~ 20B8:034C
cs=0x20b8;eip=0x00034e; 	T(ADD(si, ax));	// 104536                  add     si, ax ;~ 20B8:034E
cs=0x20b8;eip=0x000350; 	T(LODSW);	// 104537                  lodsw ;~ 20B8:0350
cs=0x20b8;eip=0x000351; 	T(si = ax;);	// 104538                  mov     si, ax ;~ 20B8:0351
cs=0x20b8;eip=0x000353; 	T(LODSB);	// 104539                  lodsb ;~ 20B8:0353
cs=0x20b8;eip=0x000354; 	X(*(db*)(((db*)&word_2f16d)+1) = al;);	// 104540                  mov     byte ptr word_2F16D+1, al ;~ 20B8:0354
cs=0x20b8;eip=0x000357; 	T(LODSB);	// 104541                  lodsb ;~ 20B8:0357
cs=0x20b8;eip=0x000358; 	T(cl = al;);	// 104542                  mov     cl, al ;~ 20B8:0358
cs=0x20b8;eip=0x00035a; 	T(XOR(ch, ch));	// 104543                  xor     ch, ch ;~ 20B8:035A
cs=0x20b8;eip=0x00035c; 	X(*(dw*)(&byte_2fcfc) = cx;);	// 104544                  mov     word ptr byte_2FCFC, cx ;~ 20B8:035C
cs=0x20b8;eip=0x000360; 	T(di = 0x49C;);	// 104545                  mov     di, 49Ch ;~ 20B8:0360
loc_2f4c3:
	// 6680 
cs=0x20b8;eip=0x000363; 	T(LODSW);	// 104548                  lodsw ;~ 20B8:0363
cs=0x20b8;eip=0x000364; 	T(bx = ax;);	// 104549                  mov     bx, ax ;~ 20B8:0364
cs=0x20b8;eip=0x000366; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 104550                  mov     ax, [bx] ;~ 20B8:0366
cs=0x20b8;eip=0x000368; 	T(INC(bx));	// 104551                  inc     bx ;~ 20B8:0368
cs=0x20b8;eip=0x000369; 	T(INC(bx));	// 104552                  inc     bx ;~ 20B8:0369
cs=0x20b8;eip=0x00036a; 	X(MOV(*(dw*)(raddr(ds,di+0x0A)), bx));	// 104553                  mov     [di+0Ah], bx ;~ 20B8:036A
cs=0x20b8;eip=0x00036d; 	X(MOV(*(dw*)(raddr(ds,di+0x0C)), ax));	// 104554                  mov     [di+0Ch], ax ;~ 20B8:036D
cs=0x20b8;eip=0x000370; 	X(MOV(*(raddr(ds,di+1)), 1));	// 104555                  mov     byte ptr [di+1], 1 ;~ 20B8:0370
cs=0x20b8;eip=0x000374; 	X(MOV(*(raddr(ds,di+0x10)), 1));	// 104556                  mov     byte ptr [di+10h], 1 ;~ 20B8:0374
cs=0x20b8;eip=0x000378; 	T(ADD(di, 0x15));	// 104557                  add     di, 15h ;~ 20B8:0378
cs=0x20b8;eip=0x00037b; 	J(LOOP(loc_2f4c3));	// 104558                  loop    loc_2F4C3 ;~ 20B8:037B
cs=0x20b8;eip=0x00037d; 	T(di = 0x49C;);	// 104559                  mov     di, 49Ch ;~ 20B8:037D
cs=0x20b8;eip=0x000380; 	T(cx = 9;);	// 104560                  mov     cx, 9 ;~ 20B8:0380
loc_2f4e3:
	// 6681 
cs=0x20b8;eip=0x000383; 	T(MOV(ax, *(dw*)(raddr(ds,di+8))));	// 104563                  mov     ax, [di+8] ;~ 20B8:0383
cs=0x20b8;eip=0x000386; 	J(CALL(sub_2f5bf,0));	// 104564                  call    sub_2F5BF ;~ 20B8:0386
cs=0x20b8;eip=0x000389; 	T(ADD(di, 0x15));	// 104565                  add     di, 15h ;~ 20B8:0389
cs=0x20b8;eip=0x00038c; 	J(LOOP(loc_2f4e3));	// 104566                  loop    loc_2F4E3 ;~ 20B8:038C
cs=0x20b8;eip=0x00038e; 	T(ax = 0x2001;);	// 104567                  mov     ax, 2001h ;~ 20B8:038E
cs=0x20b8;eip=0x000391; 	J(CALL(sub_2f5bf,0));	// 104568                  call    sub_2F5BF ;~ 20B8:0391
cs=0x20b8;eip=0x000394; 	T(ax = 0x0BD;);	// 104569                  mov     ax, 0BDh ;~ 20B8:0394
cs=0x20b8;eip=0x000397; 	J(CALL(sub_2f5bf,0));	// 104570                  call    sub_2F5BF ;~ 20B8:0397
cs=0x20b8;eip=0x00039a; 	T(ax = 8;);	// 104571                  mov     ax, 8 ;~ 20B8:039A
cs=0x20b8;eip=0x00039d; 	J(CALL(sub_2f5bf,0));	// 104572                  call    sub_2F5BF ;~ 20B8:039D
cs=0x20b8;eip=0x0003a0; 	T(ax = 0x2104;);	// 104573                  mov     ax, 2104h ;~ 20B8:03A0
cs=0x20b8;eip=0x0003a3; 	J(CALL(sub_2f5bf,0));	// 104574                  call    sub_2F5BF ;~ 20B8:03A3
cs=0x20b8;eip=0x0003a6; 	X(*(db*)(&seg_2f16f) = 1;);	// 104575                  mov     byte ptr seg_2F16F, 1 ;~ 20B8:03A6
locret_2f50b:
	// 6682 
cs=0x20b8;eip=0x0003ab; 	J(RETN(0));	// 104578                  retn ;~ 20B8:03AB

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_2f487: 	goto loc_2f487;
        case m2c::kloc_2f49f: 	goto loc_2f49f;
        case m2c::kloc_2f4c3: 	goto loc_2f4c3;
        case m2c::kloc_2f4e3: 	goto loc_2f4e3;
        case m2c::klocret_2f50b: 	goto locret_2f50b;
        case m2c::ksub_2f47a: 	goto sub_2f47a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_2f50c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_2f50c:
    _begin:
cs=0x20b8;eip=0x0003ac; 	T(bl = *(db*)(&word_2f16a););	// 104586                  mov     bl, byte ptr word_2F16A ;~ 20B8:03AC
cs=0x20b8;eip=0x0003b0; 	T(OR(bl, bl));	// 104587                  or      bl, bl ;~ 20B8:03B0
cs=0x20b8;eip=0x0003b2; 	J(JZ(locret_2f52a));	// 104588                  jz      short locret_2F52A ;~ 20B8:03B2
cs=0x20b8;eip=0x0003b4; 	T(CMP(bl, 0x46));	// 104589                  cmp     bl, 46h ; 'F' ;~ 20B8:03B4
cs=0x20b8;eip=0x0003b7; 	J(JNC(locret_2f52a));	// 104590                  jnb     short locret_2F52A ;~ 20B8:03B7
cs=0x20b8;eip=0x0003b9; 	T(di = 0x544;);	// 104591                  mov     di, 544h ;~ 20B8:03B9
cs=0x20b8;eip=0x0003bc; 	T(cx = 9;);	// 104592                  mov     cx, 9 ;~ 20B8:03BC
loc_2f51f:
	// 6683 
cs=0x20b8;eip=0x0003bf; 	T(CMP(*(raddr(ds,di+0x10)), 0));	// 104595                  cmp     byte ptr [di+10h], 0 ;~ 20B8:03BF
cs=0x20b8;eip=0x0003c3; 	J(JZ(loc_2f52b));	// 104596                  jz      short loc_2F52B ;~ 20B8:03C3
cs=0x20b8;eip=0x0003c5; 	T(SUB(di, 0x15));	// 104597                  sub     di, 15h ;~ 20B8:03C5
cs=0x20b8;eip=0x0003c8; 	J(LOOP(loc_2f51f));	// 104598                  loop    loc_2F51F ;~ 20B8:03C8
locret_2f52a:
	// 6684 
cs=0x20b8;eip=0x0003ca; 	J(RETN(0));	// 104602                  retn ;~ 20B8:03CA
loc_2f52b:
	// 6685 
cs=0x20b8;eip=0x0003cb; 	X(MOV(*(raddr(ds,di+0x10)), 2));	// 104606                  mov     byte ptr [di+10h], 2 ;~ 20B8:03CB
cs=0x20b8;eip=0x0003cf; 	X(MOV(*(raddr(ds,di+0x14)), bl));	// 104607                  mov     [di+14h], bl ;~ 20B8:03CF
cs=0x20b8;eip=0x0003d2; 	T(SHL(bl, 1));	// 104608                  shl     bl, 1 ;~ 20B8:03D2
cs=0x20b8;eip=0x0003d4; 	T(XOR(bh, bh));	// 104609                  xor     bh, bh ;~ 20B8:03D4
cs=0x20b8;eip=0x0003d6; 	X(*(db*)(&word_2f16a) = bh;);	// 104610                  mov     byte ptr word_2F16A, bh ;~ 20B8:03D6
cs=0x20b8;eip=0x0003da; 	X(MOV(*(raddr(ds,di+0x13)), bh));	// 104611                  mov     [di+13h], bh ;~ 20B8:03DA
cs=0x20b8;eip=0x0003dd; 	T(MOV(bx, *(dw*)(raddr(ds,bx+0x112F))));	// 104612                  mov     bx, [bx+112Fh] ;~ 20B8:03DD
cs=0x20b8;eip=0x0003e1; 	J(return sub_2f1fe(m2c::kloc_2f221, _state););	// 104613                  jmp     loc_2F221 ;~ 20B8:03E1

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_2f51f: 	goto loc_2f51f;
        case m2c::kloc_2f52b: 	goto loc_2f52b;
        case m2c::klocret_2f52a: 	goto locret_2f52a;
        case m2c::ksub_2f50c: 	goto sub_2f50c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group41(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group41:
    _begin:
sub_2f544:
	// 104620 
cs=0x20b8;eip=0x0003e4; 	T(si = 0x0C;);	// 104621                  mov     si, 0Ch ;~ 20B8:03E4
cs=0x20b8;eip=0x0003e7; 	J(CALL(sub_2f54d,0));	// 104622                  call    sub_2F54D ;~ 20B8:03E7
cs=0x20b8;eip=0x0003ea; 	T(si = 0x0D;);	// 104623                  mov     si, 0Dh ;~ 20B8:03EA
sub_2f54d:
	// 104630 
cs=0x20b8;eip=0x0003ed; 	T(MOV(al, *(raddr(ds,si))));	// 104634                  mov     al, [si] ;~ 20B8:03ED
cs=0x20b8;eip=0x0003ef; 	X(MOV(*(raddr(ds,si)), 0));	// 104635                  mov     byte ptr [si], 0 ;~ 20B8:03EF
cs=0x20b8;eip=0x0003f2; 	T(OR(al, al));	// 104636                  or      al, al ;~ 20B8:03F2
cs=0x20b8;eip=0x0003f4; 	J(JZ(locret_2f56a));	// 104637                  jz      short locret_2F56A ;~ 20B8:03F4
cs=0x20b8;eip=0x0003f6; 	T(di = 0x49C;);	// 104638                  mov     di, 49Ch ;~ 20B8:03F6
cs=0x20b8;eip=0x0003f9; 	T(cx = 9;);	// 104639                  mov     cx, 9 ;~ 20B8:03F9
loc_2f55c:
	// 6686 
cs=0x20b8;eip=0x0003fc; 	T(CMP(al, *(raddr(ds,di+0x14))));	// 104642                  cmp     al, [di+14h] ;~ 20B8:03FC
cs=0x20b8;eip=0x0003ff; 	J(JNZ(loc_2f564));	// 104643                  jnz     short loc_2F564 ;~ 20B8:03FF
cs=0x20b8;eip=0x000401; 	J(return seg008_2c2_proc(m2c::kloc_2f458, _state););	// 104644                  jmp     loc_2F458 ;~ 20B8:0401
loc_2f564:
	// 6687 
cs=0x20b8;eip=0x000404; 	T(ADD(di, 0x15));	// 104648                  add     di, 15h ;~ 20B8:0404
cs=0x20b8;eip=0x000407; 	J(LOOP(loc_2f55c));	// 104649                  loop    loc_2F55C ;~ 20B8:0407
cs=0x20b8;eip=0x000409; 	J(RETN(0));	// 104650                  retn ;~ 20B8:0409
locret_2f56a:
	// 6688 
cs=0x20b8;eip=0x00040a; 	J(RETN(0));	// 104654                  retn ;~ 20B8:040A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_2f55c: 	goto loc_2f55c;
        case m2c::kloc_2f564: 	goto loc_2f564;
        case m2c::klocret_2f56a: 	goto locret_2f56a;
        case m2c::ksub_2f544: 	goto sub_2f544;
        case m2c::ksub_2f54d: 	goto sub_2f54d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_2f56b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_2f56b:
    _begin:
cs=0x20b8;eip=0x00040b; 	X(PUSH(bx));	// 104663                  push    bx ;~ 20B8:040B
cs=0x20b8;eip=0x00040c; 	X(PUSH(cx));	// 104664                  push    cx ;~ 20B8:040C
cs=0x20b8;eip=0x00040d; 	X(PUSH(dx));	// 104665                  push    dx ;~ 20B8:040D
cs=0x20b8;eip=0x00040e; 	X(PUSH(ds));	// 104666                  push    ds ;~ 20B8:040E
cs=0x20b8;eip=0x00040f; 	X(PUSH(cs));	// 104667                  push    cs ;~ 20B8:040F
cs=0x20b8;eip=0x000410; 	X(POP(ds));	// 104668                  pop     ds ;~ 20B8:0410
cs=0x20b8;eip=0x000411; 	T(dx = *(dw*)(((db*)&seg_2f16f)+1););	// 104670                  mov     dx, seg_2F16F+1 ;~ 20B8:0411
cs=0x20b8;eip=0x000415; 	T(ax = 0x6004;);	// 104671                  mov     ax, 6004h ;~ 20B8:0415
cs=0x20b8;eip=0x000418; 	J(CALL(sub_2f5bf,0));	// 104672                  call    sub_2F5BF ;~ 20B8:0418
cs=0x20b8;eip=0x00041b; 	T(ax = 0x8004;);	// 104673                  mov     ax, 8004h ;~ 20B8:041B
cs=0x20b8;eip=0x00041e; 	J(CALL(sub_2f5bf,0));	// 104674                  call    sub_2F5BF ;~ 20B8:041E
cs=0x20b8;eip=0x000421; 	S(IN(al, dx));	// 104675                  in      al, dx ;~ 20B8:0421
cs=0x20b8;eip=0x000422; 	X(PUSH(ax));	// 104676                  push    ax ;~ 20B8:0422
cs=0x20b8;eip=0x000423; 	T(ax = 0x0FF02;);	// 104677                  mov     ax, 0FF02h ;~ 20B8:0423
cs=0x20b8;eip=0x000426; 	J(CALL(sub_2f5bf,0));	// 104678                  call    sub_2F5BF ;~ 20B8:0426
cs=0x20b8;eip=0x000429; 	T(ax = 0x2104;);	// 104679                  mov     ax, 2104h ;~ 20B8:0429
cs=0x20b8;eip=0x00042c; 	J(CALL(sub_2f5bf,0));	// 104680                  call    sub_2F5BF ;~ 20B8:042C
cs=0x20b8;eip=0x00042f; 	T(cx = 0x12C;);	// 104681                  mov     cx, 12Ch ;~ 20B8:042F
loc_2f592:
	// 6689 
cs=0x20b8;eip=0x000432; 	S(LOOP(loc_2f592));	// 104684                  loop    loc_2F592 ;~ 20B8:0432
cs=0x20b8;eip=0x000434; 	S(IN(al, dx));	// 104685                  in      al, dx ;~ 20B8:0434
cs=0x20b8;eip=0x000435; 	X(PUSH(ax));	// 104686                  push    ax ;~ 20B8:0435
cs=0x20b8;eip=0x000436; 	T(ax = 0x6004;);	// 104687                  mov     ax, 6004h ;~ 20B8:0436
cs=0x20b8;eip=0x000439; 	J(CALL(sub_2f5bf,0));	// 104688                  call    sub_2F5BF ;~ 20B8:0439
cs=0x20b8;eip=0x00043c; 	T(ax = 0x8004;);	// 104689                  mov     ax, 8004h ;~ 20B8:043C
cs=0x20b8;eip=0x00043f; 	J(CALL(sub_2f5bf,0));	// 104690                  call    sub_2F5BF ;~ 20B8:043F
cs=0x20b8;eip=0x000442; 	X(POP(ax));	// 104691                  pop     ax ;~ 20B8:0442
cs=0x20b8;eip=0x000443; 	X(POP(bx));	// 104692                  pop     bx ;~ 20B8:0443
cs=0x20b8;eip=0x000444; 	T(AND(al, 0x0E0));	// 104693                  and     al, 0E0h ;~ 20B8:0444
cs=0x20b8;eip=0x000446; 	T(AND(bl, 0x0E0));	// 104694                  and     bl, 0E0h ;~ 20B8:0446
cs=0x20b8;eip=0x000449; 	T(AND(bl, bl));	// 104695                  and     bl, bl ;~ 20B8:0449
cs=0x20b8;eip=0x00044b; 	J(JNZ(loc_2f5b8));	// 104696                  jnz     short loc_2F5B8 ;~ 20B8:044B
cs=0x20b8;eip=0x00044d; 	T(CMP(al, 0x0C0));	// 104697                  cmp     al, 0C0h ;~ 20B8:044D
cs=0x20b8;eip=0x00044f; 	J(JNZ(loc_2f5b8));	// 104698                  jnz     short loc_2F5B8 ;~ 20B8:044F
cs=0x20b8;eip=0x000451; 	T(al = 1;);	// 104699                  mov     al, 1 ;~ 20B8:0451
cs=0x20b8;eip=0x000453; 	X(POP(ds));	// 104700                  pop     ds ;~ 20B8:0453
cs=0x20b8;eip=0x000454; 	X(POP(dx));	// 104702                  pop     dx ;~ 20B8:0454
cs=0x20b8;eip=0x000455; 	X(POP(cx));	// 104703                  pop     cx ;~ 20B8:0455
cs=0x20b8;eip=0x000456; 	X(POP(bx));	// 104704                  pop     bx ;~ 20B8:0456
cs=0x20b8;eip=0x000457; 	J(RETN(0));	// 104705                  retn ;~ 20B8:0457
loc_2f5b8:
	// 6690 
cs=0x20b8;eip=0x000458; 	T(XOR(al, al));	// 104710                  xor     al, al ;~ 20B8:0458
cs=0x20b8;eip=0x00045a; 	X(POP(ds));	// 104711                  pop     ds ;~ 20B8:045A
cs=0x20b8;eip=0x00045b; 	X(POP(dx));	// 104713                  pop     dx ;~ 20B8:045B
cs=0x20b8;eip=0x00045c; 	X(POP(cx));	// 104714                  pop     cx ;~ 20B8:045C
cs=0x20b8;eip=0x00045d; 	X(POP(bx));	// 104715                  pop     bx ;~ 20B8:045D
cs=0x20b8;eip=0x00045e; 	J(RETN(0));	// 104716                  retn ;~ 20B8:045E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_2f592: 	goto loc_2f592;
        case m2c::kloc_2f5b8: 	goto loc_2f5b8;
        case m2c::ksub_2f56b: 	goto sub_2f56b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_2f5bf(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_2f5bf:
    _begin:
cs=0x20b8;eip=0x00045f; 	X(PUSH(dx));	// 104726                  push    dx ;~ 20B8:045F
cs=0x20b8;eip=0x000460; 	T(dx = *(dw*)(((db*)&seg_2f16f)+1););	// 104727                  mov     dx, seg_2F16F+1 ;~ 20B8:0460
cs=0x20b8;eip=0x000464; 	S(OUT(dx, al));	// 104728                  out     dx, al ;~ 20B8:0464
cs=0x20b8;eip=0x000465; 	S(IN(al, dx));	// 104729                  in      al, dx ;~ 20B8:0465
cs=0x20b8;eip=0x000466; 	S(IN(al, dx));	// 104730                  in      al, dx ;~ 20B8:0466
cs=0x20b8;eip=0x000467; 	S(IN(al, dx));	// 104731                  in      al, dx ;~ 20B8:0467
cs=0x20b8;eip=0x000468; 	S(IN(al, dx));	// 104732                  in      al, dx ;~ 20B8:0468
cs=0x20b8;eip=0x000469; 	S(IN(al, dx));	// 104733                  in      al, dx ;~ 20B8:0469
cs=0x20b8;eip=0x00046a; 	S(IN(al, dx));	// 104734                  in      al, dx ;~ 20B8:046A
cs=0x20b8;eip=0x00046b; 	T(al = ah;);	// 104735                  mov     al, ah ;~ 20B8:046B
cs=0x20b8;eip=0x00046d; 	T(INC(dx));	// 104736                  inc     dx ;~ 20B8:046D
cs=0x20b8;eip=0x00046e; 	S(OUT(dx, al));	// 104737                  out     dx, al ;~ 20B8:046E
cs=0x20b8;eip=0x00046f; 	S(IN(al, dx));	// 104738                  in      al, dx ;~ 20B8:046F
cs=0x20b8;eip=0x000470; 	S(IN(al, dx));	// 104739                  in      al, dx ;~ 20B8:0470
cs=0x20b8;eip=0x000471; 	S(IN(al, dx));	// 104740                  in      al, dx ;~ 20B8:0471
cs=0x20b8;eip=0x000472; 	S(IN(al, dx));	// 104741                  in      al, dx ;~ 20B8:0472
cs=0x20b8;eip=0x000473; 	S(IN(al, dx));	// 104742                  in      al, dx ;~ 20B8:0473
cs=0x20b8;eip=0x000474; 	S(IN(al, dx));	// 104743                  in      al, dx ;~ 20B8:0474
cs=0x20b8;eip=0x000475; 	S(IN(al, dx));	// 104744                  in      al, dx ;~ 20B8:0475
cs=0x20b8;eip=0x000476; 	S(IN(al, dx));	// 104745                  in      al, dx ;~ 20B8:0476
cs=0x20b8;eip=0x000477; 	S(IN(al, dx));	// 104746                  in      al, dx ;~ 20B8:0477
cs=0x20b8;eip=0x000478; 	S(IN(al, dx));	// 104747                  in      al, dx ;~ 20B8:0478
cs=0x20b8;eip=0x000479; 	S(IN(al, dx));	// 104748                  in      al, dx ;~ 20B8:0479
cs=0x20b8;eip=0x00047a; 	S(IN(al, dx));	// 104749                  in      al, dx ;~ 20B8:047A
cs=0x20b8;eip=0x00047b; 	S(IN(al, dx));	// 104750                  in      al, dx ;~ 20B8:047B
cs=0x20b8;eip=0x00047c; 	S(IN(al, dx));	// 104751                  in      al, dx ;~ 20B8:047C
cs=0x20b8;eip=0x00047d; 	S(IN(al, dx));	// 104752                  in      al, dx ;~ 20B8:047D
cs=0x20b8;eip=0x00047e; 	S(IN(al, dx));	// 104753                  in      al, dx ;~ 20B8:047E
cs=0x20b8;eip=0x00047f; 	S(IN(al, dx));	// 104754                  in      al, dx ;~ 20B8:047F
cs=0x20b8;eip=0x000480; 	S(IN(al, dx));	// 104755                  in      al, dx ;~ 20B8:0480
cs=0x20b8;eip=0x000481; 	S(IN(al, dx));	// 104756                  in      al, dx ;~ 20B8:0481
cs=0x20b8;eip=0x000482; 	S(IN(al, dx));	// 104757                  in      al, dx ;~ 20B8:0482
cs=0x20b8;eip=0x000483; 	S(IN(al, dx));	// 104758                  in      al, dx ;~ 20B8:0483
cs=0x20b8;eip=0x000484; 	S(IN(al, dx));	// 104759                  in      al, dx ;~ 20B8:0484
cs=0x20b8;eip=0x000485; 	S(IN(al, dx));	// 104760                  in      al, dx ;~ 20B8:0485
cs=0x20b8;eip=0x000486; 	S(IN(al, dx));	// 104761                  in      al, dx ;~ 20B8:0486
cs=0x20b8;eip=0x000487; 	S(IN(al, dx));	// 104762                  in      al, dx ;~ 20B8:0487
cs=0x20b8;eip=0x000488; 	S(IN(al, dx));	// 104763                  in      al, dx ;~ 20B8:0488
cs=0x20b8;eip=0x000489; 	S(IN(al, dx));	// 104764                  in      al, dx ;~ 20B8:0489
cs=0x20b8;eip=0x00048a; 	S(IN(al, dx));	// 104765                  in      al, dx ;~ 20B8:048A
cs=0x20b8;eip=0x00048b; 	S(IN(al, dx));	// 104766                  in      al, dx ;~ 20B8:048B
cs=0x20b8;eip=0x00048c; 	S(IN(al, dx));	// 104767                  in      al, dx ;~ 20B8:048C
cs=0x20b8;eip=0x00048d; 	S(IN(al, dx));	// 104768                  in      al, dx ;~ 20B8:048D
cs=0x20b8;eip=0x00048e; 	S(IN(al, dx));	// 104769                  in      al, dx ;~ 20B8:048E
cs=0x20b8;eip=0x00048f; 	S(IN(al, dx));	// 104770                  in      al, dx ;~ 20B8:048F
cs=0x20b8;eip=0x000490; 	S(IN(al, dx));	// 104771                  in      al, dx ;~ 20B8:0490
cs=0x20b8;eip=0x000491; 	S(IN(al, dx));	// 104772                  in      al, dx ;~ 20B8:0491
cs=0x20b8;eip=0x000492; 	X(POP(dx));	// 104773                  pop     dx ;~ 20B8:0492
cs=0x20b8;eip=0x000493; 	J(RETN(0));	// 104774                  retn ;~ 20B8:0493

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_2f5bf: 	goto sub_2f5bf;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg008_494_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg008_494_proc:
    _begin:
cs=0x20b8;eip=0x000494; 	X(PUSH(dx));	// 104778                  push    dx ;~ 20B8:0494
cs=0x20b8;eip=0x000495; 	T(dx = *(dw*)(((db*)&seg_2f16f)+1););	// 104779                  mov     dx, seg_2F16F+1 ;~ 20B8:0495
cs=0x20b8;eip=0x000499; 	S(IN(al, dx));	// 104780                  in      al, dx ;~ 20B8:0499
cs=0x20b8;eip=0x00049a; 	X(POP(dx));	// 104781                  pop     dx ;~ 20B8:049A
cs=0x20b8;eip=0x00049b; 	J(RETN(0));	// 104782                  retn ;~ 20B8:049B
ret_20b8_69b:
	// 6691 
cs=0x20b8;eip=0x00069b; 	J(IRET);	// 105269                  iret ;~ 20B8:069B
ret_20b8_8bc:
	// 6692 
cs=0x20b8;eip=0x0008bc; __disp=unk_38308;
	J(return __dispatch_call(__disp, _state););	// 105815                  jmp     near ptr unk_38308 ;~ 20B8:08BC
ret_20b8_a0c:
	// 6693 
cs=0x20b8;eip=0x000a0c; 	J(RETN(0));	// 106120                  retn ;~ 20B8:0A0C
ret_20b8_adc:
	// 6694 
cs=0x20b8;eip=0x000adc; 	J(RETN(0));	// 106330                  retn ;~ 20B8:0ADC
ret_20b8_12bd:
	// 6695 
cs=0x20b8;eip=0x0012bd; 	T(SHL(bl, 0x18));	// 108328                  shl     bl, 18h ;~ 20B8:12BD
cs=0x20b8;eip=0x0012c0; __disp=unk_38c3e;
	J(return __dispatch_call(__disp, _state););	// 108329                  jmp     near ptr unk_38C3E ;~ 20B8:12C0
ret_20b8_1442:
	// 6696 
cs=0x20b8;eip=0x001442; 	T(LODSW);	// 108710                  lodsw ;~ 20B8:1442
cs=0x20b8;eip=0x001443; __disp=unk_38aa6;
	J(return __dispatch_call(__disp, _state););	// 108711                  jmp     near ptr unk_38AA6 ;~ 20B8:1443

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kret_20b8_12bd: 	goto ret_20b8_12bd;
        case m2c::kret_20b8_1442: 	goto ret_20b8_1442;
        case m2c::kret_20b8_69b: 	goto ret_20b8_69b;
        case m2c::kret_20b8_8bc: 	goto ret_20b8_8bc;
        case m2c::kret_20b8_a0c: 	goto ret_20b8_a0c;
        case m2c::kret_20b8_adc: 	goto ret_20b8_adc;
        case m2c::kseg008_494_proc: 	goto seg008_494_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

