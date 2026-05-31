/* THIS IS GENERATED FILE */

        
#include "detroit.exe.h"

                

 bool sub_151f4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_151f4:
    _begin:
#undef var_4
#define var_4 -4
	// 14115 var_4           = dword ptr -4 ;~ 06C1:0004
#undef path
#define path 6
	// 14116 path            = dword ptr  6 ;~ 06C1:0004
cs=0x6c1;eip=0x000004; 	X(ENTER(4, 0));	// 14118                  enter   4, 0 ;~ 06C1:0004
cs=0x6c1;eip=0x000008; 	T(LES(bx, __ptr));	// 14119                  les     bx, __ptr ;~ 06C1:0008
cs=0x6c1;eip=0x00000c; 	T(CMP(*(raddr(es,bx+1)), 0));	// 14120                  cmp     byte ptr es:[bx+1], 0 ;~ 06C1:000C
cs=0x6c1;eip=0x000011; 	J(JA(loc_15206));	// 14121                  ja      short loc_15206 ;~ 06C1:0011
cs=0x6c1;eip=0x000013; 	J(JMP(locret_15346));	// 14122                  jmp     locret_15346 ;~ 06C1:0013
loc_15206:
	// 5172 
cs=0x6c1;eip=0x000016; 	X(PUSH(*(dw*)(raddr(ss,bp+path+2))));	// 14126                  push    word ptr [bp+path+2] ;~ 06C1:0016
cs=0x6c1;eip=0x000019; 	X(PUSH(*(dw*)(raddr(ss,bp+path))));	// 14127                  push    word ptr [bp+path] ; path ;~ 06C1:0019
cs=0x6c1;eip=0x00001c; 	J(CALLF(sub_18686,0));	// 14128                  call    sub_18686 ;~ 06C1:001C
cs=0x6c1;eip=0x000021; 	T(ADD(sp, 4));	// 14130                  add     sp, 4 ;~ 06C1:0021
cs=0x6c1;eip=0x000024; 	X(word_192d8 = dx;);	// 14131                  mov     word_192D8, dx ;~ 06C1:0024
cs=0x6c1;eip=0x000028; 	X(word_192d6 = ax;);	// 14132                  mov     word_192D6, ax ;~ 06C1:0028
cs=0x6c1;eip=0x00002b; 	T(OR(ax, word_192d8));	// 14133                  or      ax, word_192D8 ;~ 06C1:002B
cs=0x6c1;eip=0x00002f; 	J(JNZ(loc_1522d));	// 14134                  jnz     short loc_1522D ;~ 06C1:002F
cs=0x6c1;eip=0x000031; 	X(PUSH(ds));	// 14135                  push    ds ;~ 06C1:0031
cs=0x6c1;eip=0x000032; 	X(PUSH(offset(dseg,__acannotfindmusi)));	// 14136                  push    offset __aCannotFindMusi ;~ 06C1:0032
cs=0x6c1;eip=0x000035; 	J(CALLF(sub_14998,0));	// 14137                  call    sub_14998 ;~ 06C1:0035
cs=0x6c1;eip=0x00003a; 	T(ADD(sp, 4));	// 14139                  add     sp, 4 ;~ 06C1:003A
loc_1522d:
	// 5173 
cs=0x6c1;eip=0x00003d; 	J(CALLF(sub_15e0b,0));	// 14142                  call    far ptr sub_15E0B ;~ 06C1:003D
cs=0x6c1;eip=0x000042; 	X(PUSH(word_192d8));	// 14144                  push    word_192D8 ;~ 06C1:0042
cs=0x6c1;eip=0x000046; 	X(PUSH(word_192d6));	// 14145                  push    word_192D6 ;~ 06C1:0046
cs=0x6c1;eip=0x00004a; 	J(CALLF(sub_1615f,0));	// 14146                  call    far ptr sub_1615F ;~ 06C1:004A
cs=0x6c1;eip=0x00004f; 	T(ADD(sp, 4));	// 14147                  add     sp, 4 ;~ 06C1:004F
cs=0x6c1;eip=0x000052; 	X(word_192ee = ax;);	// 14148                  mov     word_192EE, ax ;~ 06C1:0052
cs=0x6c1;eip=0x000055; 	X(PUSH(ax));	// 14149                  push    ax ;~ 06C1:0055
cs=0x6c1;eip=0x000056; 	J(CALLF(sub_16289,0));	// 14150                  call    sub_16289 ;~ 06C1:0056
cs=0x6c1;eip=0x00005b; 	X(POP(cx));	// 14151                  pop     cx ;~ 06C1:005B
cs=0x6c1;eip=0x00005c; 	X(MOV(*(dw*)(raddr(ss,bp+var_4+2)), dx));	// 14152                  mov     word ptr [bp+var_4+2], dx ;~ 06C1:005C
cs=0x6c1;eip=0x00005f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 14153                  mov     word ptr [bp+var_4], ax ;~ 06C1:005F
cs=0x6c1;eip=0x000062; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 14154                  les     bx, [bp+var_4] ;~ 06C1:0062
cs=0x6c1;eip=0x000065; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 14156                  push    word ptr es:[bx+12h] ;~ 06C1:0065
cs=0x6c1;eip=0x000069; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 14157                  push    word ptr es:[bx+10h] ;~ 06C1:0069
cs=0x6c1;eip=0x00006d; 	X(PUSH(*(dw*)(raddr(es,bx+0x0E))));	// 14158                  push    word ptr es:[bx+0Eh] ;~ 06C1:006D
cs=0x6c1;eip=0x000071; 	X(PUSH(*(dw*)(raddr(es,bx+0x0C))));	// 14159                  push    word ptr es:[bx+0Ch] ;~ 06C1:0071
cs=0x6c1;eip=0x000075; 	X(PUSH(word_192ee));	// 14160                  push    word_192EE ;~ 06C1:0075
cs=0x6c1;eip=0x000079; 	J(CALLF(sub_162af,0));	// 14161                  call    sub_162AF ;~ 06C1:0079
cs=0x6c1;eip=0x00007e; 	T(ADD(sp, 0x0A));	// 14162                  add     sp, 0Ah ;~ 06C1:007E
cs=0x6c1;eip=0x000081; 	T(OR(ax, ax));	// 14163                  or      ax, ax ;~ 06C1:0081
cs=0x6c1;eip=0x000083; 	J(JNZ(loc_152c5));	// 14164                  jnz     short loc_152C5 ;~ 06C1:0083
loc_15275:
	// 5174 
cs=0x6c1;eip=0x000085; 	T(LES(bx, __ptr));	// 14167                  les     bx, __ptr ;~ 06C1:0085
cs=0x6c1;eip=0x000089; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1C))));	// 14168                  mov     ax, es:[bx+1Ch] ;~ 06C1:0089
cs=0x6c1;eip=0x00008d; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 14169                  les     bx, [bp+var_4] ;~ 06C1:008D
cs=0x6c1;eip=0x000090; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), ax));	// 14170                  mov     es:[bx+0Ch], ax ;~ 06C1:0090
cs=0x6c1;eip=0x000094; 	T(LES(bx, __ptr));	// 14171                  les     bx, __ptr ;~ 06C1:0094
cs=0x6c1;eip=0x000098; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x20))));	// 14172                  mov     ax, es:[bx+20h] ;~ 06C1:0098
cs=0x6c1;eip=0x00009c; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 14173                  les     bx, [bp+var_4] ;~ 06C1:009C
cs=0x6c1;eip=0x00009f; 	X(MOV(*(dw*)(raddr(es,bx+0x0E)), ax));	// 14174                  mov     es:[bx+0Eh], ax ;~ 06C1:009F
cs=0x6c1;eip=0x0000a3; 	T(LES(bx, __ptr));	// 14175                  les     bx, __ptr ;~ 06C1:00A3
cs=0x6c1;eip=0x0000a7; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1E))));	// 14176                  mov     ax, es:[bx+1Eh] ;~ 06C1:00A7
cs=0x6c1;eip=0x0000ab; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 14177                  les     bx, [bp+var_4] ;~ 06C1:00AB
cs=0x6c1;eip=0x0000ae; 	X(MOV(*(dw*)(raddr(es,bx+0x10)), ax));	// 14178                  mov     es:[bx+10h], ax ;~ 06C1:00AE
cs=0x6c1;eip=0x0000b2; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 14179                  push    word ptr es:[bx+12h] ;~ 06C1:00B2
cs=0x6c1;eip=0x0000b6; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 14180                  push    word ptr es:[bx+10h] ;~ 06C1:00B6
cs=0x6c1;eip=0x0000ba; 	X(PUSH(*(dw*)(raddr(es,bx+0x0E))));	// 14181                  push    word ptr es:[bx+0Eh] ;~ 06C1:00BA
cs=0x6c1;eip=0x0000be; 	X(PUSH(*(dw*)(raddr(es,bx+0x0C))));	// 14182                  push    word ptr es:[bx+0Ch] ;~ 06C1:00BE
cs=0x6c1;eip=0x0000c2; 	X(PUSH(word_192ee));	// 14183                  push    word_192EE ;~ 06C1:00C2
cs=0x6c1;eip=0x0000c6; 	J(CALLF(sub_162af,0));	// 14184                  call    sub_162AF ;~ 06C1:00C6
cs=0x6c1;eip=0x0000cb; 	T(ADD(sp, 0x0A));	// 14185                  add     sp, 0Ah ;~ 06C1:00CB
cs=0x6c1;eip=0x0000ce; 	T(OR(ax, ax));	// 14186                  or      ax, ax ;~ 06C1:00CE
cs=0x6c1;eip=0x0000d0; 	J(JNZ(loc_15275));	// 14187                  jnz     short loc_15275 ;~ 06C1:00D0
cs=0x6c1;eip=0x0000d2; 	J(JMP(locret_15346));	// 14188                  jmp     locret_15346 ;~ 06C1:00D2
loc_152c5:
	// 5175 
cs=0x6c1;eip=0x0000d5; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 14192                  les     bx, [bp+var_4] ;~ 06C1:00D5
cs=0x6c1;eip=0x0000d8; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 14193                  push    word ptr es:[bx+12h] ;~ 06C1:00D8
cs=0x6c1;eip=0x0000dc; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 14194                  push    word ptr es:[bx+10h] ;~ 06C1:00DC
cs=0x6c1;eip=0x0000e0; 	X(PUSH(*(dw*)(raddr(es,bx+0x0E))));	// 14195                  push    word ptr es:[bx+0Eh] ;~ 06C1:00E0
cs=0x6c1;eip=0x0000e4; 	X(PUSH(*(dw*)(raddr(es,bx+0x0C))));	// 14196                  push    word ptr es:[bx+0Ch] ;~ 06C1:00E4
cs=0x6c1;eip=0x0000e8; 	X(PUSH(word_192ee));	// 14197                  push    word_192EE ;~ 06C1:00E8
cs=0x6c1;eip=0x0000ec; 	J(CALLF(sub_162b5,0));	// 14198                  call    far ptr sub_162B5 ;~ 06C1:00EC
cs=0x6c1;eip=0x0000f1; 	T(ADD(sp, 0x0A));	// 14199                  add     sp, 0Ah ;~ 06C1:00F1
cs=0x6c1;eip=0x0000f4; 	X(PUSH(word_192ee));	// 14200                  push    word_192EE ;~ 06C1:00F4
cs=0x6c1;eip=0x0000f8; 	J(CALLF(sub_163f4,0));	// 14201                  call    sub_163F4 ;~ 06C1:00F8
cs=0x6c1;eip=0x0000fd; 	X(POP(cx));	// 14202                  pop     cx ;~ 06C1:00FD
cs=0x6c1;eip=0x0000fe; 	X(word_192cc = 0;);	// 14203                  mov     word_192CC, 0 ;~ 06C1:00FE
cs=0x6c1;eip=0x000104; 	X(nbytes_ = ax;);	// 14204                  mov     nbytes_, ax ;~ 06C1:0104
cs=0x6c1;eip=0x000107; 	X(PUSH(word_192ee));	// 14205                  push    word_192EE ;~ 06C1:0107
cs=0x6c1;eip=0x00010b; 	J(CALLF(sub_16406,0));	// 14206                  call    sub_16406 ;~ 06C1:010B
cs=0x6c1;eip=0x000110; 	X(POP(cx));	// 14207                  pop     cx ;~ 06C1:0110
cs=0x6c1;eip=0x000111; 	X(word_192c4 = ax;);	// 14208                  mov     word_192C4, ax ;~ 06C1:0111
cs=0x6c1;eip=0x000114; 	T(CMP(word_192c4, 0));	// 14209                  cmp     word_192C4, 0 ;~ 06C1:0114
cs=0x6c1;eip=0x000119; 	J(JZ(loc_1532f));	// 14210                  jz      short loc_1532F ;~ 06C1:0119
cs=0x6c1;eip=0x00011b; 	X(PUSH(0));	// 14211                  push    0 ;~ 06C1:011B
cs=0x6c1;eip=0x00011d; 	X(PUSH(ax));	// 14212                  push    ax              ; nbytes ;~ 06C1:011D
cs=0x6c1;eip=0x00011e; 	J(CALLF(___farmalloc,0));	// 14213                  call    ___farmalloc ;~ 06C1:011E
cs=0x6c1;eip=0x000123; 	T(ADD(sp, 4));	// 14214                  add     sp, 4 ;~ 06C1:0123
cs=0x6c1;eip=0x000126; 	X(word_192d0 = dx;);	// 14215                  mov     word_192D0, dx ;~ 06C1:0126
cs=0x6c1;eip=0x00012a; 	X(word_192ce = ax;);	// 14216                  mov     word_192CE, ax ;~ 06C1:012A
cs=0x6c1;eip=0x00012d; 	X(PUSH(word_192c4));	// 14217                  push    word_192C4 ;~ 06C1:012D
cs=0x6c1;eip=0x000131; 	X(PUSH(dx));	// 14218                  push    dx ;~ 06C1:0131
cs=0x6c1;eip=0x000132; 	X(PUSH(ax));	// 14219                  push    ax ;~ 06C1:0132
cs=0x6c1;eip=0x000133; 	X(PUSH(word_192ee));	// 14220                  push    word_192EE ;~ 06C1:0133
cs=0x6c1;eip=0x000137; 	J(CALLF(sub_1640c,0));	// 14221                  call    sub_1640C ;~ 06C1:0137
cs=0x6c1;eip=0x00013c; 	T(ADD(sp, 8));	// 14222                  add     sp, 8 ;~ 06C1:013C
loc_1532f:
	// 5176 
cs=0x6c1;eip=0x00013f; 	X(PUSH(word_192cc));	// 14225                  push    word_192CC ;~ 06C1:013F
cs=0x6c1;eip=0x000143; 	X(PUSH(nbytes_));	// 14226                  push    nbytes_         ; nbytes ;~ 06C1:0143
cs=0x6c1;eip=0x000147; 	J(CALLF(___farmalloc,0));	// 14227                  call    ___farmalloc ;~ 06C1:0147
cs=0x6c1;eip=0x00014c; 	T(ADD(sp, 4));	// 14228                  add     sp, 4 ;~ 06C1:014C
cs=0x6c1;eip=0x00014f; 	X(word_192e0 = dx;);	// 14229                  mov     word_192E0, dx ;~ 06C1:014F
cs=0x6c1;eip=0x000153; 	X(word_192de = ax;);	// 14230                  mov     word_192DE, ax ;~ 06C1:0153
locret_15346:
	// 5177 
cs=0x6c1;eip=0x000156; 	T(LEAVE);	// 14234                  leave ;~ 06C1:0156
cs=0x6c1;eip=0x000157; 	J(RETF(0));	// 14235                  retf ;~ 06C1:0157

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_15206: 	goto loc_15206;
        case m2c::kloc_1522d: 	goto loc_1522d;
        case m2c::kloc_15275: 	goto loc_15275;
        case m2c::kloc_152c5: 	goto loc_152c5;
        case m2c::kloc_1532f: 	goto loc_1532f;
        case m2c::klocret_15346: 	goto locret_15346;
        case m2c::ksub_151f4: 	goto sub_151f4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_15348(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_15348:
    _begin:
#undef var_4
#define var_4 -4
	// 14246 var_4           = dword ptr -4 ;~ 06C1:0158
#undef stream
#define stream 6
	// 14247 stream          = dword ptr  6 ;~ 06C1:0158
#undef arg_4
#define arg_4 0x0A
	// 14248 arg_4           = word ptr  0Ah ;~ 06C1:0158
#undef arg_6
#define arg_6 0x0C
	// 14249 arg_6           = word ptr  0Ch ;~ 06C1:0158
cs=0x6c1;eip=0x000158; 	X(ENTER(4, 0));	// 14251                  enter   4, 0 ;~ 06C1:0158
cs=0x6c1;eip=0x00015c; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 14252                  push    word ptr [bp+stream+2] ;~ 06C1:015C
cs=0x6c1;eip=0x00015f; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 14253                  push    word ptr [bp+stream] ; stream ;~ 06C1:015F
cs=0x6c1;eip=0x000162; 	J(CALLF(___rewind,0));	// 14254                  call    ___rewind ;~ 06C1:0162
cs=0x6c1;eip=0x000167; 	T(ADD(sp, 4));	// 14255                  add     sp, 4 ;~ 06C1:0167
loc_1535a:
	// 5178 
cs=0x6c1;eip=0x00016a; 	X(PUSH(ds));	// 14259                  push    ds ;~ 06C1:016A
cs=0x6c1;eip=0x00016b; 	X(PUSH(offset(dseg,byte_19378)));	// 14260                  push    offset byte_19378 ; ptr ;~ 06C1:016B
cs=0x6c1;eip=0x00016e; 	X(PUSH(6));	// 14261                  push    6               ; n ;~ 06C1:016E
cs=0x6c1;eip=0x000170; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 14262                  push    word ptr [bp+stream+2] ;~ 06C1:0170
cs=0x6c1;eip=0x000173; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 14263                  push    word ptr [bp+stream] ; stream ;~ 06C1:0173
cs=0x6c1;eip=0x000176; 	J(CALLF(sub_14b86,0));	// 14264                  call    sub_14B86 ;~ 06C1:0176
cs=0x6c1;eip=0x00017b; 	T(ADD(sp, 0x0A));	// 14265                  add     sp, 0Ah ;~ 06C1:017B
cs=0x6c1;eip=0x00017e; 	T(CMP(byte_19379, 0x0FF));	// 14266                  cmp     byte_19379, 0FFh ;~ 06C1:017E
cs=0x6c1;eip=0x000183; 	J(JNZ(loc_1537c));	// 14267                  jnz     short loc_1537C ;~ 06C1:0183
cs=0x6c1;eip=0x000185; 	T(XOR(dx, dx));	// 14268                  xor     dx, dx ;~ 06C1:0185
cs=0x6c1;eip=0x000187; 	T(XOR(ax, ax));	// 14269                  xor     ax, ax ;~ 06C1:0187
cs=0x6c1;eip=0x000189; 	J(JMP(locret_1540c));	// 14270                  jmp     locret_1540C ;~ 06C1:0189
loc_1537c:
	// 5179 
cs=0x6c1;eip=0x00018c; 	T(al = byte_19379;);	// 14274                  mov     al, byte_19379 ;~ 06C1:018C
cs=0x6c1;eip=0x00018f; 	T(CBW);	// 14275                  cbw ;~ 06C1:018F
cs=0x6c1;eip=0x000190; 	T(CMP(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 14276                  cmp     ax, [bp+arg_4] ;~ 06C1:0190
cs=0x6c1;eip=0x000193; 	J(JNZ(loc_1535a));	// 14277                  jnz     short loc_1535A ;~ 06C1:0193
cs=0x6c1;eip=0x000195; 	T(al = byte_19378;);	// 14278                  mov     al, byte_19378 ;~ 06C1:0195
cs=0x6c1;eip=0x000198; 	T(CBW);	// 14279                  cbw ;~ 06C1:0198
cs=0x6c1;eip=0x000199; 	T(CMP(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 14280                  cmp     ax, [bp+arg_6] ;~ 06C1:0199
cs=0x6c1;eip=0x00019c; 	J(JNZ(loc_1535a));	// 14281                  jnz     short loc_1535A ;~ 06C1:019C
cs=0x6c1;eip=0x00019e; 	X(PUSH(0));	// 14282                  push    0               ; whence ;~ 06C1:019E
cs=0x6c1;eip=0x0001a0; 	X(PUSH(word_1937c));	// 14283                  push    word_1937C ;~ 06C1:01A0
cs=0x6c1;eip=0x0001a4; 	X(PUSH(__offset));	// 14284                  push    __offset        ; offset1 ;~ 06C1:01A4
cs=0x6c1;eip=0x0001a8; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 14285                  push    word ptr [bp+stream+2] ;~ 06C1:01A8
cs=0x6c1;eip=0x0001ab; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 14286                  push    word ptr [bp+stream] ; stream ;~ 06C1:01AB
cs=0x6c1;eip=0x0001ae; 	J(CALLF(sub_14b2d,0));	// 14287                  call    sub_14B2D ;~ 06C1:01AE
cs=0x6c1;eip=0x0001b3; 	T(ADD(sp, 0x0A));	// 14288                  add     sp, 0Ah ;~ 06C1:01B3
cs=0x6c1;eip=0x0001b6; 	X(PUSH(ds));	// 14289                  push    ds ;~ 06C1:01B6
cs=0x6c1;eip=0x0001b7; 	X(PUSH(offset(dseg,ptr_)));	// 14290                  push    offset ptr_     ; ptr ;~ 06C1:01B7
cs=0x6c1;eip=0x0001ba; 	X(PUSH(2));	// 14291                  push    2               ; n ;~ 06C1:01BA
cs=0x6c1;eip=0x0001bc; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 14292                  push    word ptr [bp+stream+2] ;~ 06C1:01BC
cs=0x6c1;eip=0x0001bf; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 14293                  push    word ptr [bp+stream] ; stream ;~ 06C1:01BF
cs=0x6c1;eip=0x0001c2; 	J(CALLF(sub_14b86,0));	// 14294                  call    sub_14B86 ;~ 06C1:01C2
cs=0x6c1;eip=0x0001c7; 	T(ADD(sp, 0x0A));	// 14295                  add     sp, 0Ah ;~ 06C1:01C7
cs=0x6c1;eip=0x0001ca; 	X(PUSH(0));	// 14296                  push    0 ;~ 06C1:01CA
cs=0x6c1;eip=0x0001cc; 	X(PUSH(ptr_));	// 14297                  push    ptr_            ; nbytes ;~ 06C1:01CC
cs=0x6c1;eip=0x0001d0; 	J(CALLF(___farmalloc,0));	// 14298                  call    ___farmalloc ;~ 06C1:01D0
cs=0x6c1;eip=0x0001d5; 	T(ADD(sp, 4));	// 14299                  add     sp, 4 ;~ 06C1:01D5
cs=0x6c1;eip=0x0001d8; 	X(MOV(*(dw*)(raddr(ss,bp+var_4+2)), dx));	// 14300                  mov     word ptr [bp+var_4+2], dx ;~ 06C1:01D8
cs=0x6c1;eip=0x0001db; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 14301                  mov     word ptr [bp+var_4], ax ;~ 06C1:01DB
cs=0x6c1;eip=0x0001de; 	T(OR(ax, dx));	// 14302                  or      ax, dx ;~ 06C1:01DE
cs=0x6c1;eip=0x0001e0; 	J(JNZ(loc_153de));	// 14303                  jnz     short loc_153DE ;~ 06C1:01E0
cs=0x6c1;eip=0x0001e2; 	X(PUSH(ds));	// 14304                  push    ds ;~ 06C1:01E2
cs=0x6c1;eip=0x0001e3; 	X(PUSH(offset(dseg,__acannotfarmallo_3)));	// 14305                  push    offset __aCannotFarmallo_3 ;~ 06C1:01E3
cs=0x6c1;eip=0x0001e6; 	J(CALLF(sub_14998,0));	// 14306                  call    sub_14998 ;~ 06C1:01E6
cs=0x6c1;eip=0x0001eb; 	T(ADD(sp, 4));	// 14308                  add     sp, 4 ;~ 06C1:01EB
loc_153de:
	// 5180 
cs=0x6c1;eip=0x0001ee; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 14311                  les     bx, [bp+var_4] ;~ 06C1:01EE
cs=0x6c1;eip=0x0001f1; 	T(ax = ptr_;);	// 14312                  mov     ax, ptr_ ;~ 06C1:01F1
cs=0x6c1;eip=0x0001f4; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 14313                  mov     es:[bx], ax ;~ 06C1:01F4
cs=0x6c1;eip=0x0001f7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 14314                  mov     ax, word ptr [bp+var_4] ;~ 06C1:01F7
cs=0x6c1;eip=0x0001fa; 	T(ADD(ax, 2));	// 14315                  add     ax, 2 ;~ 06C1:01FA
cs=0x6c1;eip=0x0001fd; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4+2))));	// 14316                  push    word ptr [bp+var_4+2] ;~ 06C1:01FD
cs=0x6c1;eip=0x000200; 	X(PUSH(ax));	// 14317                  push    ax              ; ptr ;~ 06C1:0200
cs=0x6c1;eip=0x000201; 	T(ax = ptr_;);	// 14318                  mov     ax, ptr_ ;~ 06C1:0201
cs=0x6c1;eip=0x000204; 	T(SUB(ax, 2));	// 14319                  sub     ax, 2 ;~ 06C1:0204
cs=0x6c1;eip=0x000207; 	X(PUSH(ax));	// 14320                  push    ax              ; n ;~ 06C1:0207
cs=0x6c1;eip=0x000208; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 14321                  push    word ptr [bp+stream+2] ;~ 06C1:0208
cs=0x6c1;eip=0x00020b; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 14322                  push    word ptr [bp+stream] ; stream ;~ 06C1:020B
cs=0x6c1;eip=0x00020e; 	J(CALLF(sub_14b86,0));	// 14323                  call    sub_14B86 ;~ 06C1:020E
cs=0x6c1;eip=0x000213; 	T(ADD(sp, 0x0A));	// 14324                  add     sp, 0Ah ;~ 06C1:0213
cs=0x6c1;eip=0x000216; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4+2))));	// 14325                  mov     dx, word ptr [bp+var_4+2] ;~ 06C1:0216
cs=0x6c1;eip=0x000219; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 14326                  mov     ax, word ptr [bp+var_4] ;~ 06C1:0219
locret_1540c:
	// 5181 
cs=0x6c1;eip=0x00021c; 	T(LEAVE);	// 14329                  leave ;~ 06C1:021C
cs=0x6c1;eip=0x00021d; 	J(RETF(0));	// 14330                  retf ;~ 06C1:021D

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1535a: 	goto loc_1535a;
        case m2c::kloc_1537c: 	goto loc_1537c;
        case m2c::kloc_153de: 	goto loc_153de;
        case m2c::klocret_1540c: 	goto locret_1540c;
        case m2c::ksub_15348: 	goto sub_15348;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1540e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1540e:
    _begin:
#undef dest
#define dest -0x16
	// 14342 dest            = byte ptr -16h ;~ 06C1:021E
#undef string
#define string -8
	// 14343 string          = byte ptr -8 ;~ 06C1:021E
#undef stream
#define stream -4
	// 14344 stream          = dword ptr -4 ;~ 06C1:021E
#undef value
#define value 6
	// 14345 value           = word ptr  6 ;~ 06C1:021E
cs=0x6c1;eip=0x00021e; 	X(ENTER(0x16, 0));	// 14347                  enter   16h, 0 ;~ 06C1:021E
cs=0x6c1;eip=0x000222; 	T(LES(bx, __ptr));	// 14348                  les     bx, __ptr ;~ 06C1:0222
cs=0x6c1;eip=0x000226; 	T(CMP(*(raddr(es,bx+1)), 0));	// 14349                  cmp     byte ptr es:[bx+1], 0 ;~ 06C1:0226
cs=0x6c1;eip=0x00022b; 	J(JA(loc_15420));	// 14350                  ja      short loc_15420 ;~ 06C1:022B
cs=0x6c1;eip=0x00022d; 	J(JMP(locret_15603));	// 14351                  jmp     locret_15603 ;~ 06C1:022D
loc_15420:
	// 5182 
cs=0x6c1;eip=0x000230; 	T(TEST(*(raddr(es,bx)), 2));	// 14355                  test    byte ptr es:[bx], 2 ;~ 06C1:0230
cs=0x6c1;eip=0x000234; 	J(JNZ(loc_15429));	// 14356                  jnz     short loc_15429 ;~ 06C1:0234
cs=0x6c1;eip=0x000236; 	J(JMP(locret_15603));	// 14357                  jmp     locret_15603 ;~ 06C1:0236
loc_15429:
	// 5183 
cs=0x6c1;eip=0x000239; 	X(PUSH(word_192ec));	// 14361                  push    word_192EC ;~ 06C1:0239
cs=0x6c1;eip=0x00023d; 	X(PUSH(word_192ee));	// 14362                  push    word_192EE ;~ 06C1:023D
cs=0x6c1;eip=0x000241; 	J(CALLF(sub_16442,0));	// 14363                  call    sub_16442 ;~ 06C1:0241
cs=0x6c1;eip=0x000246; 	T(ADD(sp, 4));	// 14364                  add     sp, 4 ;~ 06C1:0246
cs=0x6c1;eip=0x000249; 	T(CMP(ax, 1));	// 14365                  cmp     ax, 1 ;~ 06C1:0249
cs=0x6c1;eip=0x00024c; 	J(JNZ(loc_15441));	// 14366                  jnz     short loc_15441 ;~ 06C1:024C
cs=0x6c1;eip=0x00024e; 	J(JMP(locret_15603));	// 14367                  jmp     locret_15603 ;~ 06C1:024E
loc_15441:
	// 5184 
cs=0x6c1;eip=0x000251; 	X(PUSH(ds));	// 14371                  push    ds ;~ 06C1:0251
cs=0x6c1;eip=0x000252; 	X(PUSH(offset(dseg,__adet0)));	// 14372                  push    offset __aDet0  ; src ;~ 06C1:0252
cs=0x6c1;eip=0x000255; 	X(PUSH(ss));	// 14373                  push    ss ;~ 06C1:0255
cs=0x6c1;eip=0x000256; 	T(ax = bp+dest);	// 14374                  lea     ax, [bp+dest] ;~ 06C1:0256
cs=0x6c1;eip=0x000259; 	X(PUSH(ax));	// 14375                  push    ax              ; dest ;~ 06C1:0259
cs=0x6c1;eip=0x00025a; 	J(CALLF(___strcpy,0));	// 14376                  call    ___strcpy ;~ 06C1:025A
cs=0x6c1;eip=0x00025f; 	T(ADD(sp, 8));	// 14377                  add     sp, 8 ;~ 06C1:025F
cs=0x6c1;eip=0x000262; 	X(PUSH(0x0A));	// 14378                  push    0Ah             ; radix ;~ 06C1:0262
cs=0x6c1;eip=0x000264; 	X(PUSH(ss));	// 14379                  push    ss ;~ 06C1:0264
cs=0x6c1;eip=0x000265; 	T(ax = bp+string);	// 14380                  lea     ax, [bp+string] ;~ 06C1:0265
cs=0x6c1;eip=0x000268; 	X(PUSH(ax));	// 14381                  push    ax              ; string ;~ 06C1:0268
cs=0x6c1;eip=0x000269; 	X(PUSH(*(dw*)(raddr(ss,bp+value))));	// 14382                  push    [bp+value]      ; value ;~ 06C1:0269
cs=0x6c1;eip=0x00026c; 	J(CALLF(___itoa,0));	// 14383                  call    ___itoa ;~ 06C1:026C
cs=0x6c1;eip=0x000271; 	T(ADD(sp, 8));	// 14384                  add     sp, 8 ;~ 06C1:0271
cs=0x6c1;eip=0x000274; 	T(CMP(*(dw*)(raddr(ss,bp+value)), 0x0A));	// 14385                  cmp     [bp+value], 0Ah ;~ 06C1:0274
cs=0x6c1;eip=0x000278; 	J(JGE(loc_1547b));	// 14386                  jge     short loc_1547B ;~ 06C1:0278
cs=0x6c1;eip=0x00027a; 	X(PUSH(ds));	// 14387                  push    ds ;~ 06C1:027A
cs=0x6c1;eip=0x00027b; 	X(PUSH(offset(dseg,__a0)));	// 14388                  push    offset __a0     ; src ;~ 06C1:027B
cs=0x6c1;eip=0x00027e; 	X(PUSH(ss));	// 14389                  push    ss ;~ 06C1:027E
cs=0x6c1;eip=0x00027f; 	T(ax = bp+dest);	// 14390                  lea     ax, [bp+dest] ;~ 06C1:027F
cs=0x6c1;eip=0x000282; 	X(PUSH(ax));	// 14391                  push    ax              ; dest ;~ 06C1:0282
cs=0x6c1;eip=0x000283; 	J(CALLF(___strcat,0));	// 14392                  call    ___strcat ;~ 06C1:0283
cs=0x6c1;eip=0x000288; 	T(ADD(sp, 8));	// 14393                  add     sp, 8 ;~ 06C1:0288
loc_1547b:
	// 5185 
cs=0x6c1;eip=0x00028b; 	X(PUSH(ss));	// 14396                  push    ss ;~ 06C1:028B
cs=0x6c1;eip=0x00028c; 	T(ax = bp+string);	// 14397                  lea     ax, [bp+string] ;~ 06C1:028C
cs=0x6c1;eip=0x00028f; 	X(PUSH(ax));	// 14398                  push    ax              ; src ;~ 06C1:028F
cs=0x6c1;eip=0x000290; 	X(PUSH(ss));	// 14399                  push    ss ;~ 06C1:0290
cs=0x6c1;eip=0x000291; 	T(ax = bp+dest);	// 14400                  lea     ax, [bp+dest] ;~ 06C1:0291
cs=0x6c1;eip=0x000294; 	X(PUSH(ax));	// 14401                  push    ax              ; dest ;~ 06C1:0294
cs=0x6c1;eip=0x000295; 	J(CALLF(___strcat,0));	// 14402                  call    ___strcat ;~ 06C1:0295
cs=0x6c1;eip=0x00029a; 	T(ADD(sp, 8));	// 14403                  add     sp, 8 ;~ 06C1:029A
cs=0x6c1;eip=0x00029d; 	X(PUSH(ds));	// 14404                  push    ds ;~ 06C1:029D
cs=0x6c1;eip=0x00029e; 	X(PUSH(offset(dseg,__axmi)));	// 14405                  push    offset __aXmi   ; src ;~ 06C1:029E
cs=0x6c1;eip=0x0002a1; 	X(PUSH(ss));	// 14406                  push    ss ;~ 06C1:02A1
cs=0x6c1;eip=0x0002a2; 	T(ax = bp+dest);	// 14407                  lea     ax, [bp+dest] ;~ 06C1:02A2
cs=0x6c1;eip=0x0002a5; 	X(PUSH(ax));	// 14408                  push    ax              ; dest ;~ 06C1:02A5
cs=0x6c1;eip=0x0002a6; 	J(CALLF(___strcat,0));	// 14409                  call    ___strcat ;~ 06C1:02A6
cs=0x6c1;eip=0x0002ab; 	T(ADD(sp, 8));	// 14410                  add     sp, 8 ;~ 06C1:02AB
cs=0x6c1;eip=0x0002ae; 	X(PUSH(word_192ec));	// 14411                  push    word_192EC ;~ 06C1:02AE
cs=0x6c1;eip=0x0002b2; 	X(PUSH(word_192ee));	// 14412                  push    word_192EE ;~ 06C1:02B2
cs=0x6c1;eip=0x0002b6; 	J(CALLF(sub_16436,0));	// 14413                  call    sub_16436 ;~ 06C1:02B6
cs=0x6c1;eip=0x0002bb; 	T(ADD(sp, 4));	// 14414                  add     sp, 4 ;~ 06C1:02BB
cs=0x6c1;eip=0x0002be; 	X(PUSH(word_192ec));	// 14415                  push    word_192EC ;~ 06C1:02BE
cs=0x6c1;eip=0x0002c2; 	X(PUSH(word_192ee));	// 14416                  push    word_192EE ;~ 06C1:02C2
cs=0x6c1;eip=0x0002c6; 	J(CALLF(sub_16400,0));	// 14417                  call    sub_16400 ;~ 06C1:02C6
cs=0x6c1;eip=0x0002cb; 	T(ADD(sp, 4));	// 14418                  add     sp, 4 ;~ 06C1:02CB
cs=0x6c1;eip=0x0002ce; 	X(PUSH(ds));	// 14419                  push    ds ;~ 06C1:02CE
cs=0x6c1;eip=0x0002cf; 	X(PUSH(offset(dseg,__arb_0)));	// 14420                  push    offset __aRb_0  ; mode ;~ 06C1:02CF
cs=0x6c1;eip=0x0002d2; 	X(PUSH(ss));	// 14421                  push    ss ;~ 06C1:02D2
cs=0x6c1;eip=0x0002d3; 	T(ax = bp+dest);	// 14422                  lea     ax, [bp+dest] ;~ 06C1:02D3
cs=0x6c1;eip=0x0002d6; 	X(PUSH(ax));	// 14423                  push    ax              ; path ;~ 06C1:02D6
cs=0x6c1;eip=0x0002d7; 	J(CALLF(sub_14aee,0));	// 14424                  call    sub_14AEE ;~ 06C1:02D7
cs=0x6c1;eip=0x0002dc; 	T(ADD(sp, 8));	// 14425                  add     sp, 8 ;~ 06C1:02DC
cs=0x6c1;eip=0x0002df; 	X(MOV(*(dw*)(raddr(ss,bp+stream+2)), dx));	// 14426                  mov     word ptr [bp+stream+2], dx ;~ 06C1:02DF
cs=0x6c1;eip=0x0002e2; 	X(MOV(*(dw*)(raddr(ss,bp+stream)), ax));	// 14427                  mov     word ptr [bp+stream], ax ;~ 06C1:02E2
cs=0x6c1;eip=0x0002e5; 	X(PUSH(word_192ea));	// 14428                  push    word_192EA ;~ 06C1:02E5
cs=0x6c1;eip=0x0002e9; 	X(PUSH(block_));	// 14429                  push    block_          ; ptr ;~ 06C1:02E9
cs=0x6c1;eip=0x0002ed; 	T(LES(bx, *(dd*)(raddr(ss,bp+stream))));	// 14430                  les     bx, [bp+stream] ;~ 06C1:02ED
cs=0x6c1;eip=0x0002f0; 	T(MOV(al, *(raddr(es,bx+4))));	// 14431                  mov     al, es:[bx+4] ;~ 06C1:02F0
cs=0x6c1;eip=0x0002f4; 	T(CBW);	// 14432                  cbw ;~ 06C1:02F4
cs=0x6c1;eip=0x0002f5; 	X(PUSH(ax));	// 14433                  push    ax              ; handle ;~ 06C1:02F5
cs=0x6c1;eip=0x0002f6; 	J(CALLF(___filelength,0));	// 14434                  call    ___filelength ;~ 06C1:02F6
cs=0x6c1;eip=0x0002fb; 	X(POP(cx));	// 14435                  pop     cx ;~ 06C1:02FB
cs=0x6c1;eip=0x0002fc; 	X(PUSH(ax));	// 14436                  push    ax              ; n ;~ 06C1:02FC
cs=0x6c1;eip=0x0002fd; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 14437                  push    word ptr [bp+stream+2] ;~ 06C1:02FD
cs=0x6c1;eip=0x000300; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 14438                  push    word ptr [bp+stream] ; stream ;~ 06C1:0300
cs=0x6c1;eip=0x000303; 	J(CALLF(sub_14b86,0));	// 14439                  call    sub_14B86 ;~ 06C1:0303
cs=0x6c1;eip=0x000308; 	T(ADD(sp, 0x0A));	// 14440                  add     sp, 0Ah ;~ 06C1:0308
cs=0x6c1;eip=0x00030b; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 14441                  push    word ptr [bp+stream+2] ;~ 06C1:030B
cs=0x6c1;eip=0x00030e; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 14442                  push    word ptr [bp+stream] ; stream ;~ 06C1:030E
cs=0x6c1;eip=0x000311; 	J(CALLF(sub_14bb4,0));	// 14443                  call    sub_14BB4 ;~ 06C1:0311
cs=0x6c1;eip=0x000316; 	T(ADD(sp, 4));	// 14444                  add     sp, 4 ;~ 06C1:0316
cs=0x6c1;eip=0x000319; 	X(PUSH(0));	// 14445                  push    0 ;~ 06C1:0319
cs=0x6c1;eip=0x00031b; 	X(PUSH(0));	// 14446                  push    0 ;~ 06C1:031B
cs=0x6c1;eip=0x00031d; 	X(PUSH(word_192e0));	// 14447                  push    word_192E0 ;~ 06C1:031D
cs=0x6c1;eip=0x000321; 	X(PUSH(word_192de));	// 14448                  push    word_192DE ;~ 06C1:0321
cs=0x6c1;eip=0x000325; 	X(PUSH(0));	// 14449                  push    0 ;~ 06C1:0325
cs=0x6c1;eip=0x000327; 	X(PUSH(word_192ea));	// 14450                  push    word_192EA ;~ 06C1:0327
cs=0x6c1;eip=0x00032b; 	X(PUSH(block_));	// 14451                  push    block_ ;~ 06C1:032B
cs=0x6c1;eip=0x00032f; 	X(PUSH(word_192ee));	// 14452                  push    word_192EE ;~ 06C1:032F
cs=0x6c1;eip=0x000333; 	J(CALLF(sub_163fa,0));	// 14453                  call    sub_163FA ;~ 06C1:0333
cs=0x6c1;eip=0x000338; 	T(ADD(sp, 0x10));	// 14454                  add     sp, 10h ;~ 06C1:0338
cs=0x6c1;eip=0x00033b; 	X(word_192ec = ax;);	// 14455                  mov     word_192EC, ax ;~ 06C1:033B
cs=0x6c1;eip=0x00033e; 	X(PUSH(ds));	// 14456                  push    ds ;~ 06C1:033E
cs=0x6c1;eip=0x00033f; 	X(PUSH(offset(dseg,__arb_1)));	// 14457                  push    offset __aRb_1  ; mode ;~ 06C1:033F
cs=0x6c1;eip=0x000342; 	X(PUSH(ds));	// 14458                  push    ds ;~ 06C1:0342
cs=0x6c1;eip=0x000343; 	X(PUSH(offset(dseg,__asamplead)));	// 14459                  push    offset __aSampleAd ; path ;~ 06C1:0343
cs=0x6c1;eip=0x000346; 	J(CALLF(sub_14aee,0));	// 14460                  call    sub_14AEE ;~ 06C1:0346
cs=0x6c1;eip=0x00034b; 	T(ADD(sp, 8));	// 14461                  add     sp, 8 ;~ 06C1:034B
cs=0x6c1;eip=0x00034e; 	X(MOV(*(dw*)(raddr(ss,bp+stream+2)), dx));	// 14462                  mov     word ptr [bp+stream+2], dx ;~ 06C1:034E
cs=0x6c1;eip=0x000351; 	X(MOV(*(dw*)(raddr(ss,bp+stream)), ax));	// 14463                  mov     word ptr [bp+stream], ax ;~ 06C1:0351
cs=0x6c1;eip=0x000354; 	J(JMP(loc_155b6));	// 14464                  jmp     short loc_155B6 ;~ 06C1:0354
loc_15546:
	// 5186 
cs=0x6c1;eip=0x000356; 	T(ax = word_192c2;);	// 14468                  mov     ax, word_192C2 ;~ 06C1:0356
cs=0x6c1;eip=0x000359; 	T(SHR(ax, 8));	// 14469                  shr     ax, 8 ;~ 06C1:0359
cs=0x6c1;eip=0x00035c; 	X(word_192c8 = ax;);	// 14470                  mov     word_192C8, ax ;~ 06C1:035C
cs=0x6c1;eip=0x00035f; 	T(ax = word_192c2;);	// 14471                  mov     ax, word_192C2 ;~ 06C1:035F
cs=0x6c1;eip=0x000362; 	T(AND(ax, 0x0FF));	// 14472                  and     ax, 0FFh ;~ 06C1:0362
cs=0x6c1;eip=0x000365; 	X(word_192c6 = ax;);	// 14473                  mov     word_192C6, ax ;~ 06C1:0365
cs=0x6c1;eip=0x000368; 	X(PUSH(ax));	// 14474                  push    ax              ; int ;~ 06C1:0368
cs=0x6c1;eip=0x000369; 	X(PUSH(word_192c8));	// 14475                  push    word_192C8      ; int ;~ 06C1:0369
cs=0x6c1;eip=0x00036d; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 14476                  push    word ptr [bp+stream+2] ;~ 06C1:036D
cs=0x6c1;eip=0x000370; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 14477                  push    word ptr [bp+stream] ; stream ;~ 06C1:0370
cs=0x6c1;eip=0x000373; 	X(PUSH(cs));	// 14478                  push    cs ;~ 06C1:0373
cs=0x6c1;eip=0x000374; 	J(CALL(sub_15348,0));	// 14479                  call    near ptr sub_15348 ;~ 06C1:0374
cs=0x6c1;eip=0x000377; 	T(ADD(sp, 8));	// 14480                  add     sp, 8 ;~ 06C1:0377
cs=0x6c1;eip=0x00037a; 	X(word_192dc = dx;);	// 14481                  mov     word_192DC, dx ;~ 06C1:037A
cs=0x6c1;eip=0x00037e; 	X(word_192da = ax;);	// 14482                  mov     word_192DA, ax ;~ 06C1:037E
cs=0x6c1;eip=0x000381; 	T(OR(ax, word_192dc));	// 14483                  or      ax, word_192DC ;~ 06C1:0381
cs=0x6c1;eip=0x000385; 	J(JZ(loc_155a2));	// 14484                  jz      short loc_155A2 ;~ 06C1:0385
cs=0x6c1;eip=0x000387; 	X(PUSH(dx));	// 14485                  push    dx ;~ 06C1:0387
cs=0x6c1;eip=0x000388; 	X(PUSH(word_192da));	// 14486                  push    word_192DA ;~ 06C1:0388
cs=0x6c1;eip=0x00038c; 	X(PUSH(word_192c6));	// 14487                  push    word_192C6 ;~ 06C1:038C
cs=0x6c1;eip=0x000390; 	X(PUSH(word_192c8));	// 14488                  push    word_192C8 ;~ 06C1:0390
cs=0x6c1;eip=0x000394; 	X(PUSH(word_192ee));	// 14489                  push    word_192EE ;~ 06C1:0394
cs=0x6c1;eip=0x000398; 	J(CALLF(sub_16418,0));	// 14490                  call    sub_16418 ;~ 06C1:0398
cs=0x6c1;eip=0x00039d; 	T(ADD(sp, 0x0A));	// 14491                  add     sp, 0Ah ;~ 06C1:039D
cs=0x6c1;eip=0x0003a0; 	X(PUSH(word_192dc));	// 14492                  push    word_192DC ;~ 06C1:03A0
cs=0x6c1;eip=0x0003a4; 	X(PUSH(word_192da));	// 14493                  push    word_192DA      ; block ;~ 06C1:03A4
cs=0x6c1;eip=0x0003a8; 	J(CALLF(___farfree,0));	// 14494                  call    ___farfree ;~ 06C1:03A8
cs=0x6c1;eip=0x0003ad; 	T(ADD(sp, 4));	// 14495                  add     sp, 4 ;~ 06C1:03AD
cs=0x6c1;eip=0x0003b0; 	J(JMP(loc_155b6));	// 14496                  jmp     short loc_155B6 ;~ 06C1:03B0
loc_155a2:
	// 5187 
cs=0x6c1;eip=0x0003b2; 	X(PUSH(0));	// 14500                  push    0 ;~ 06C1:03B2
cs=0x6c1;eip=0x0003b4; 	X(PUSH(0));	// 14501                  push    0 ;~ 06C1:03B4
cs=0x6c1;eip=0x0003b6; 	J(CALLF(sub_15e56,0));	// 14502                  call    far ptr sub_15E56 ;~ 06C1:03B6
cs=0x6c1;eip=0x0003bb; 	T(ADD(sp, 4));	// 14503                  add     sp, 4 ;~ 06C1:03BB
cs=0x6c1;eip=0x0003be; 	X(PUSH(0));	// 14504                  push    0               ; status ;~ 06C1:03BE
cs=0x6c1;eip=0x0003c0; 	J(CALLF(___exit_0,0));	// 14505                  call    ___exit_0 ;~ 06C1:03C0
cs=0x6c1;eip=0x0003c5; 	X(POP(cx));	// 14507                  pop     cx ;~ 06C1:03C5
loc_155b6:
	// 5188 
cs=0x6c1;eip=0x0003c6; 	X(PUSH(word_192ec));	// 14511                  push    word_192EC ;~ 06C1:03C6
cs=0x6c1;eip=0x0003ca; 	X(PUSH(word_192ee));	// 14512                  push    word_192EE ;~ 06C1:03CA
cs=0x6c1;eip=0x0003ce; 	J(CALLF(sub_16412,0));	// 14513                  call    sub_16412 ;~ 06C1:03CE
cs=0x6c1;eip=0x0003d3; 	T(ADD(sp, 4));	// 14514                  add     sp, 4 ;~ 06C1:03D3
cs=0x6c1;eip=0x0003d6; 	X(word_192c2 = ax;);	// 14515                  mov     word_192C2, ax ;~ 06C1:03D6
cs=0x6c1;eip=0x0003d9; 	T(CMP(ax, 0x0FFFF));	// 14516                  cmp     ax, 0FFFFh ;~ 06C1:03D9
cs=0x6c1;eip=0x0003dc; 	J(JZ(loc_155d1));	// 14517                  jz      short loc_155D1 ;~ 06C1:03DC
cs=0x6c1;eip=0x0003de; 	J(JMP(loc_15546));	// 14518                  jmp     loc_15546 ;~ 06C1:03DE
loc_155d1:
	// 5189 
cs=0x6c1;eip=0x0003e1; 	X(PUSH(*(dw*)(raddr(ss,bp+stream+2))));	// 14522                  push    word ptr [bp+stream+2] ;~ 06C1:03E1
cs=0x6c1;eip=0x0003e4; 	X(PUSH(*(dw*)(raddr(ss,bp+stream))));	// 14523                  push    word ptr [bp+stream] ; stream ;~ 06C1:03E4
cs=0x6c1;eip=0x0003e7; 	J(CALLF(sub_14bb4,0));	// 14524                  call    sub_14BB4 ;~ 06C1:03E7
cs=0x6c1;eip=0x0003ec; 	T(ADD(sp, 4));	// 14525                  add     sp, 4 ;~ 06C1:03EC
cs=0x6c1;eip=0x0003ef; 	X(PUSH(0));	// 14526                  push    0 ;~ 06C1:03EF
cs=0x6c1;eip=0x0003f1; 	X(PUSH(0x64));	// 14527                  push    64h ; 'd' ;~ 06C1:03F1
cs=0x6c1;eip=0x0003f3; 	X(PUSH(word_192ec));	// 14528                  push    word_192EC ;~ 06C1:03F3
cs=0x6c1;eip=0x0003f7; 	X(PUSH(word_192ee));	// 14529                  push    word_192EE ;~ 06C1:03F7
cs=0x6c1;eip=0x0003fb; 	J(CALLF(sub_16454,0));	// 14530                  call    sub_16454 ;~ 06C1:03FB
cs=0x6c1;eip=0x000400; 	T(ADD(sp, 8));	// 14531                  add     sp, 8 ;~ 06C1:0400
cs=0x6c1;eip=0x000403; 	X(PUSH(word_192ec));	// 14532                  push    word_192EC ;~ 06C1:0403
cs=0x6c1;eip=0x000407; 	X(PUSH(word_192ee));	// 14533                  push    word_192EE ;~ 06C1:0407
cs=0x6c1;eip=0x00040b; 	J(CALLF(sub_16430,0));	// 14534                  call    sub_16430 ;~ 06C1:040B
cs=0x6c1;eip=0x000410; 	T(ADD(sp, 4));	// 14535                  add     sp, 4 ;~ 06C1:0410
locret_15603:
	// 5190 
cs=0x6c1;eip=0x000413; 	T(LEAVE);	// 14539                  leave ;~ 06C1:0413
cs=0x6c1;eip=0x000414; 	J(RETF(0));	// 14540                  retf ;~ 06C1:0414

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_15420: 	goto loc_15420;
        case m2c::kloc_15429: 	goto loc_15429;
        case m2c::kloc_15441: 	goto loc_15441;
        case m2c::kloc_1547b: 	goto loc_1547b;
        case m2c::kloc_15546: 	goto loc_15546;
        case m2c::kloc_155a2: 	goto loc_155a2;
        case m2c::kloc_155b6: 	goto loc_155b6;
        case m2c::kloc_155d1: 	goto loc_155d1;
        case m2c::klocret_15603: 	goto locret_15603;
        case m2c::ksub_1540e: 	goto sub_1540e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_415_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_415_proc:
    _begin:
cs=0x6c1;eip=0x000415; 	X(ENTER(4, 0));	// 14544                  enter   4, 0 ;~ 06C1:0415
cs=0x6c1;eip=0x000419; 	T(LES(bx, __ptr));	// 14545                  les     bx, __ptr ;~ 06C1:0419
cs=0x6c1;eip=0x00041d; 	T(CMP(*(raddr(es,bx+1)), 0));	// 14546                  cmp     byte ptr es:[bx+1], 0 ;~ 06C1:041D
cs=0x6c1;eip=0x000422; 	J(JBE(locret_1567a));	// 14547                  jbe     short locret_1567A ;~ 06C1:0422
cs=0x6c1;eip=0x000424; 	X(PUSH(*(dw*)(raddr(ss,bp+8))));	// 14548                  push    word ptr [bp+8] ;~ 06C1:0424
cs=0x6c1;eip=0x000427; 	X(PUSH(*(dw*)(raddr(ss,bp+6))));	// 14549                  push    word ptr [bp+6] ;~ 06C1:0427
cs=0x6c1;eip=0x00042a; 	J(CALLF(sub_18686,0));	// 14550                  call    sub_18686 ;~ 06C1:042A
cs=0x6c1;eip=0x00042f; 	T(ADD(sp, 4));	// 14551                  add     sp, 4 ;~ 06C1:042F
cs=0x6c1;eip=0x000432; 	X(word_192d4 = dx;);	// 14552                  mov     word_192D4, dx ;~ 06C1:0432
cs=0x6c1;eip=0x000436; 	X(word_192d2 = ax;);	// 14553                  mov     word_192D2, ax ;~ 06C1:0436
cs=0x6c1;eip=0x000439; 	T(OR(ax, word_192d4));	// 14554                  or      ax, word_192D4 ;~ 06C1:0439
cs=0x6c1;eip=0x00043d; 	J(JNZ(loc_1563b));	// 14555                  jnz     short loc_1563B ;~ 06C1:043D
cs=0x6c1;eip=0x00043f; 	X(PUSH(ds));	// 14556                  push    ds ;~ 06C1:043F
cs=0x6c1;eip=0x000440; 	X(PUSH(offset(dseg,__acannotfindmusi_0)));	// 14557                  push    offset __aCannotFindMusi_0 ;~ 06C1:0440
cs=0x6c1;eip=0x000443; 	J(CALLF(sub_14998,0));	// 14558                  call    sub_14998 ;~ 06C1:0443
cs=0x6c1;eip=0x000448; 	T(ADD(sp, 4));	// 14560                  add     sp, 4 ;~ 06C1:0448
loc_1563b:
	// 5191 
cs=0x6c1;eip=0x00044b; 	X(PUSH(word_192d4));	// 14563                  push    word_192D4 ;~ 06C1:044B
cs=0x6c1;eip=0x00044f; 	X(PUSH(word_192d2));	// 14564                  push    word_192D2 ;~ 06C1:044F
cs=0x6c1;eip=0x000453; 	J(CALLF(sub_1615f,0));	// 14565                  call    far ptr sub_1615F ;~ 06C1:0453
cs=0x6c1;eip=0x000458; 	T(ADD(sp, 4));	// 14566                  add     sp, 4 ;~ 06C1:0458
cs=0x6c1;eip=0x00045b; 	X(word_192e6 = ax;);	// 14567                  mov     word_192E6, ax ;~ 06C1:045B
cs=0x6c1;eip=0x00045e; 	X(PUSH(ax));	// 14568                  push    ax ;~ 06C1:045E
cs=0x6c1;eip=0x00045f; 	J(CALLF(sub_16289,0));	// 14569                  call    sub_16289 ;~ 06C1:045F
cs=0x6c1;eip=0x000464; 	X(POP(cx));	// 14570                  pop     cx ;~ 06C1:0464
cs=0x6c1;eip=0x000465; 	X(MOV(*(dw*)(raddr(ss,bp-2)), dx));	// 14571                  mov     [bp-2], dx ;~ 06C1:0465
cs=0x6c1;eip=0x000468; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 14572                  mov     [bp-4], ax ;~ 06C1:0468
cs=0x6c1;eip=0x00046b; 	T(LES(bx, *(dw*)(raddr(ss,bp-4))));	// 14573                  les     bx, [bp-4] ;~ 06C1:046B
cs=0x6c1;eip=0x00046e; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 14574                  push    word ptr es:[bx+12h] ;~ 06C1:046E
cs=0x6c1;eip=0x000472; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 14575                  push    word ptr es:[bx+10h] ;~ 06C1:0472
cs=0x6c1;eip=0x000476; 	X(PUSH(*(dw*)(raddr(es,bx+0x0E))));	// 14576                  push    word ptr es:[bx+0Eh] ;~ 06C1:0476
cs=0x6c1;eip=0x00047a; 	X(PUSH(*(dw*)(raddr(es,bx+0x0C))));	// 14577                  push    word ptr es:[bx+0Ch] ;~ 06C1:047A
cs=0x6c1;eip=0x00047e; 	X(PUSH(word_192e6));	// 14578                  push    word_192E6 ;~ 06C1:047E
cs=0x6c1;eip=0x000482; 	J(CALLF(sub_162b5,0));	// 14579                  call    far ptr sub_162B5 ;~ 06C1:0482
cs=0x6c1;eip=0x000487; 	T(ADD(sp, 0x0A));	// 14580                  add     sp, 0Ah ;~ 06C1:0487
locret_1567a:
	// 5192 
cs=0x6c1;eip=0x00048a; 	T(LEAVE);	// 14583                  leave ;~ 06C1:048A
cs=0x6c1;eip=0x00048b; 	J(RETF(0));	// 14584                  retf ;~ 06C1:048B
ret_6c1_48c:
	// 5193 
cs=0x6c1;eip=0x00048c; 	X(ENTER(8, 0));	// 14586                  enter   8, 0 ;~ 06C1:048C
cs=0x6c1;eip=0x000490; 	T(LES(bx, __ptr));	// 14587                  les     bx, __ptr ;~ 06C1:0490
cs=0x6c1;eip=0x000494; 	T(CMP(*(raddr(es,bx+1)), 0));	// 14588                  cmp     byte ptr es:[bx+1], 0 ;~ 06C1:0494
cs=0x6c1;eip=0x000499; 	J(JA(loc_1568e));	// 14589                  ja      short loc_1568E ;~ 06C1:0499
cs=0x6c1;eip=0x00049b; 	J(JMP(locret_1573b));	// 14590                  jmp     locret_1573B ;~ 06C1:049B
loc_1568e:
	// 5194 
cs=0x6c1;eip=0x00049e; 	T(TEST(*(raddr(es,bx)), 1));	// 14594                  test    byte ptr es:[bx], 1 ;~ 06C1:049E
cs=0x6c1;eip=0x0004a2; 	J(JNZ(loc_15697));	// 14595                  jnz     short loc_15697 ;~ 06C1:04A2
cs=0x6c1;eip=0x0004a4; 	J(JMP(locret_1573b));	// 14596                  jmp     locret_1573B ;~ 06C1:04A4
loc_15697:
	// 5195 
cs=0x6c1;eip=0x0004a7; 	X(PUSH(word_192e6));	// 14600                  push    word_192E6 ;~ 06C1:04A7
cs=0x6c1;eip=0x0004ab; 	J(CALLF(sub_163be,0));	// 14601                  call    sub_163BE ;~ 06C1:04AB
cs=0x6c1;eip=0x0004b0; 	X(POP(cx));	// 14602                  pop     cx ;~ 06C1:04B0
cs=0x6c1;eip=0x0004b1; 	T(CMP(ax, 2));	// 14603                  cmp     ax, 2 ;~ 06C1:04B1
cs=0x6c1;eip=0x0004b4; 	J(JNZ(loc_156a9));	// 14604                  jnz     short loc_156A9 ;~ 06C1:04B4
cs=0x6c1;eip=0x0004b6; 	J(JMP(locret_1573b));	// 14605                  jmp     locret_1573B ;~ 06C1:04B6
loc_156a9:
	// 5196 
cs=0x6c1;eip=0x0004b9; 	X(PUSH(word_192e6));	// 14609                  push    word_192E6 ;~ 06C1:04B9
cs=0x6c1;eip=0x0004bd; 	J(CALLF(sub_163ca,0));	// 14610                  call    sub_163CA ;~ 06C1:04BD
cs=0x6c1;eip=0x0004c2; 	X(POP(cx));	// 14611                  pop     cx ;~ 06C1:04C2
cs=0x6c1;eip=0x0004c3; 	X(PUSH(ds));	// 14612                  push    ds ;~ 06C1:04C3
cs=0x6c1;eip=0x0004c4; 	X(PUSH(offset(dseg,__arb_3)));	// 14613                  push    offset __aRb_3 ;~ 06C1:04C4
cs=0x6c1;eip=0x0004c7; 	X(PUSH(*(dw*)(raddr(ss,bp+8))));	// 14614                  push    word ptr [bp+8] ;~ 06C1:04C7
cs=0x6c1;eip=0x0004ca; 	X(PUSH(*(dw*)(raddr(ss,bp+6))));	// 14615                  push    word ptr [bp+6] ;~ 06C1:04CA
cs=0x6c1;eip=0x0004cd; 	J(CALLF(sub_14aee,0));	// 14616                  call    sub_14AEE ;~ 06C1:04CD
cs=0x6c1;eip=0x0004d2; 	T(ADD(sp, 8));	// 14617                  add     sp, 8 ;~ 06C1:04D2
cs=0x6c1;eip=0x0004d5; 	X(MOV(*(dw*)(raddr(ss,bp-6)), dx));	// 14618                  mov     [bp-6], dx ;~ 06C1:04D5
cs=0x6c1;eip=0x0004d8; 	X(MOV(*(dw*)(raddr(ss,bp-8)), ax));	// 14619                  mov     [bp-8], ax ;~ 06C1:04D8
cs=0x6c1;eip=0x0004db; 	T(LES(bx, *(dw*)(raddr(ss,bp-8))));	// 14620                  les     bx, [bp-8] ;~ 06C1:04DB
cs=0x6c1;eip=0x0004de; 	T(MOV(al, *(raddr(es,bx+4))));	// 14621                  mov     al, es:[bx+4] ;~ 06C1:04DE
cs=0x6c1;eip=0x0004e2; 	T(CBW);	// 14622                  cbw ;~ 06C1:04E2
cs=0x6c1;eip=0x0004e3; 	X(PUSH(ax));	// 14623                  push    ax ;~ 06C1:04E3
cs=0x6c1;eip=0x0004e4; 	J(CALLF(___filelength,0));	// 14624                  call    ___filelength ;~ 06C1:04E4
cs=0x6c1;eip=0x0004e9; 	X(POP(cx));	// 14625                  pop     cx ;~ 06C1:04E9
cs=0x6c1;eip=0x0004ea; 	X(MOV(*(dw*)(raddr(ss,bp-2)), dx));	// 14626                  mov     [bp-2], dx ;~ 06C1:04EA
cs=0x6c1;eip=0x0004ed; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 14627                  mov     [bp-4], ax ;~ 06C1:04ED
cs=0x6c1;eip=0x0004f0; 	X(PUSH(word_192e4));	// 14628                  push    word_192E4 ;~ 06C1:04F0
cs=0x6c1;eip=0x0004f4; 	X(PUSH(word_192e2));	// 14629                  push    word_192E2 ;~ 06C1:04F4
cs=0x6c1;eip=0x0004f8; 	X(PUSH(ax));	// 14630                  push    ax ;~ 06C1:04F8
cs=0x6c1;eip=0x0004f9; 	X(PUSH(*(dw*)(raddr(ss,bp-6))));	// 14631                  push    word ptr [bp-6] ;~ 06C1:04F9
cs=0x6c1;eip=0x0004fc; 	X(PUSH(*(dw*)(raddr(ss,bp-8))));	// 14632                  push    word ptr [bp-8] ;~ 06C1:04FC
cs=0x6c1;eip=0x0004ff; 	J(CALLF(sub_14b86,0));	// 14633                  call    sub_14B86 ;~ 06C1:04FF
cs=0x6c1;eip=0x000504; 	T(ADD(sp, 0x0A));	// 14634                  add     sp, 0Ah ;~ 06C1:0504
cs=0x6c1;eip=0x000507; 	X(PUSH(*(dw*)(raddr(ss,bp-6))));	// 14635                  push    word ptr [bp-6] ;~ 06C1:0507
cs=0x6c1;eip=0x00050a; 	X(PUSH(*(dw*)(raddr(ss,bp-8))));	// 14636                  push    word ptr [bp-8] ;~ 06C1:050A
cs=0x6c1;eip=0x00050d; 	J(CALLF(sub_14bb4,0));	// 14637                  call    sub_14BB4 ;~ 06C1:050D
cs=0x6c1;eip=0x000512; 	T(ADD(sp, 4));	// 14638                  add     sp, 4 ;~ 06C1:0512
cs=0x6c1;eip=0x000515; 	X(PUSH(0x0FFFF));	// 14639                  push    0FFFFh ;~ 06C1:0515
cs=0x6c1;eip=0x000517; 	X(PUSH(word_192e4));	// 14640                  push    word_192E4 ;~ 06C1:0517
cs=0x6c1;eip=0x00051b; 	X(PUSH(word_192e2));	// 14641                  push    word_192E2 ;~ 06C1:051B
cs=0x6c1;eip=0x00051f; 	X(PUSH(word_192e6));	// 14642                  push    word_192E6 ;~ 06C1:051F
cs=0x6c1;eip=0x000523; 	J(CALLF(sub_163b8,0));	// 14643                  call    sub_163B8 ;~ 06C1:0523
cs=0x6c1;eip=0x000528; 	T(ADD(sp, 8));	// 14644                  add     sp, 8 ;~ 06C1:0528
cs=0x6c1;eip=0x00052b; 	X(PUSH(0x0FFFF));	// 14645                  push    0FFFFh ;~ 06C1:052B
cs=0x6c1;eip=0x00052d; 	X(PUSH(word_192e4));	// 14646                  push    word_192E4 ;~ 06C1:052D
cs=0x6c1;eip=0x000531; 	X(PUSH(word_192e2));	// 14647                  push    word_192E2 ;~ 06C1:0531
cs=0x6c1;eip=0x000535; 	X(PUSH(word_192e6));	// 14648                  push    word_192E6 ;~ 06C1:0535
cs=0x6c1;eip=0x000539; 	J(CALLF(sub_163b2,0));	// 14649                  call    sub_163B2 ;~ 06C1:0539
cs=0x6c1;eip=0x00053e; 	T(ADD(sp, 8));	// 14650                  add     sp, 8 ;~ 06C1:053E
cs=0x6c1;eip=0x000541; 	X(PUSH(word_192e6));	// 14651                  push    word_192E6 ;~ 06C1:0541
cs=0x6c1;eip=0x000545; 	J(CALLF(sub_163c4,0));	// 14652                  call    sub_163C4 ;~ 06C1:0545
cs=0x6c1;eip=0x00054a; 	X(POP(cx));	// 14653                  pop     cx ;~ 06C1:054A
locret_1573b:
	// 5197 
cs=0x6c1;eip=0x00054b; 	T(LEAVE);	// 14657                  leave ;~ 06C1:054B
cs=0x6c1;eip=0x00054c; 	J(RETF(0));	// 14658                  retf ;~ 06C1:054C

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1563b: 	goto loc_1563b;
        case m2c::kloc_1568e: 	goto loc_1568e;
        case m2c::kloc_15697: 	goto loc_15697;
        case m2c::kloc_156a9: 	goto loc_156a9;
        case m2c::klocret_1567a: 	goto locret_1567a;
        case m2c::klocret_1573b: 	goto locret_1573b;
        case m2c::kret_6c1_48c: 	goto ret_6c1_48c;
        case m2c::kseg002_415_proc: 	goto seg002_415_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

