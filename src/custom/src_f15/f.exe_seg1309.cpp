/* THIS IS GENERATED FILE */

        
#include "f.exe.h"

                

 bool seg1309_0_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg1309_0_proc:
    _begin:
loc_13090:
	// 4581 
cs=0x4ab;eip=0x000000; 	T(bx = 0x2AE;);	// 8071                  mov     bx, 2AEh        ; jumptable 00013A6F cases -8--2 ;~ 04AB:0000
cs=0x4ab;eip=0x000003; 	T(ADD(bx, ax));	// 8072                  add     bx, ax ;~ 04AB:0003
cs=0x4ab;eip=0x000005; 	T(MOV(al, *(raddr(ds,bx+1))));	// 8073                  mov     al, [bx+1] ;~ 04AB:0005
cs=0x4ab;eip=0x000008; 	T(CBW);	// 8074                  cbw ;~ 04AB:0008
cs=0x4ab;eip=0x000009; 	T(bx = ax;);	// 8075                  mov     bx, ax ;~ 04AB:0009
cs=0x4ab;eip=0x00000b; 	T(MOV(al, *(raddr(ds,bx+0x2C4))));	// 8076                  mov     al, [bx+2C4h] ;~ 04AB:000B
cs=0x4ab;eip=0x00000f; 	T(CBW);	// 8077                  cbw ;~ 04AB:000F
cs=0x4ab;eip=0x000010; 	T(ADD(ax, 0x40));	// 8078                  add     ax, 40h ; '@' ;~ 04AB:0010
cs=0x4ab;eip=0x000013; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8079                  mov     [bp+var_2], ax ;~ 04AB:0013
cs=0x4ab;eip=0x000016; 	J(JMP(loc_130bf));	// 8080                  jmp     short loc_130BF ;~ 04AB:0016
loc_130a8:
	// 4582 
cs=0x4ab;eip=0x000018; 	T(MOV(bx, *(dw*)(raddr(ss,bp+4))));	// 8085                  mov     bx, [bp+4] ;~ 04AB:0018
cs=0x4ab;eip=0x00001b; 	T(SHL(bx, 1));	// 8086                  shl     bx, 1 ;~ 04AB:001B
cs=0x4ab;eip=0x00001d; 	T(MOV(al, *(raddr(ds,bx+0x2AE))));	// 8087                  mov     al, [bx+2AEh] ;~ 04AB:001D
cs=0x4ab;eip=0x000021; 	T(CBW);	// 8088                  cbw ;~ 04AB:0021
cs=0x4ab;eip=0x000022; 	T(bx = ax;);	// 8089                  mov     bx, ax ;~ 04AB:0022
cs=0x4ab;eip=0x000024; 	T(MOV(al, *(raddr(ds,bx+0x2C4))));	// 8090                  mov     al, [bx+2C4h] ;~ 04AB:0024
cs=0x4ab;eip=0x000028; 	T(CBW);	// 8091                  cbw ;~ 04AB:0028
cs=0x4ab;eip=0x000029; 	T(ADD(ax, 0x40));	// 8092                  add     ax, 40h ; '@' ;~ 04AB:0029
cs=0x4ab;eip=0x00002c; 	X(MOV(*(dw*)(raddr(ss,bp-2)), ax));	// 8093                  mov     [bp-2], ax ;~ 04AB:002C
loc_130bf:
	// 4583 
cs=0x4ab;eip=0x00002f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 8097                  mov     bx, [bp+var_2] ;~ 04AB:002F
cs=0x4ab;eip=0x000032; 	T(MOV(al, *(raddr(ds,bx+0x0C32))));	// 8098                  mov     al, [bx+0C32h] ;~ 04AB:0032
cs=0x4ab;eip=0x000036; 	T(AND(ax, 0x0C0));	// 8099                  and     ax, 0C0h ;~ 04AB:0036
cs=0x4ab;eip=0x000039; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 8100                  mov     [bp+var_4], ax ;~ 04AB:0039
cs=0x4ab;eip=0x00003c; 	T(MOV(ax, *(raddr(ss,bp+arg_2))));	// 8101                  mov     ax, [bp+arg_2] ;~ 04AB:003C
cs=0x4ab;eip=0x00003f; 	T(AND(ax, 0x3F));	// 8102                  and     ax, 3Fh ;~ 04AB:003F
cs=0x4ab;eip=0x000042; 	T(cx = 0x3F;);	// 8103                  mov     cx, 3Fh ; '?' ;~ 04AB:0042
cs=0x4ab;eip=0x000045; 	T(SUB(cx, ax));	// 8104                  sub     cx, ax ;~ 04AB:0045
cs=0x4ab;eip=0x000047; 	X(OR(*(dw*)(raddr(ss,bp+var_4)), cx));	// 8105                  or      [bp+var_4], cx ;~ 04AB:0047
cs=0x4ab;eip=0x00004a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 8106                  push    [bp+var_4] ;~ 04AB:004A
cs=0x4ab;eip=0x00004d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 8107                  push    [bp+var_2] ;~ 04AB:004D
cs=0x4ab;eip=0x000050; 	J(CALL(__dispatch_call,unk_22a31));	// 8108                  call    near ptr unk_22A31 ;~ 04AB:0050
cs=0x4ab;eip=0x000053; 	T(ADD(sp, 4));	// 8109                  add     sp, 4 ;~ 04AB:0053
cs=0x4ab;eip=0x000056; 	T(sp = bp;);	// 8110                  mov     sp, bp ;~ 04AB:0056
cs=0x4ab;eip=0x000058; 	X(POP(bp));	// 8111                  pop     bp ;~ 04AB:0058
cs=0x4ab;eip=0x000059; 	J(RETN(0));	// 8112                  retn ;~ 04AB:0059

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_130a8: 	goto loc_130a8;
        case m2c::kloc_130bf: 	goto loc_130bf;
        case m2c::kseg1309_0_proc: 	goto seg1309_0_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_130ea(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_130ea:
    _begin:
#undef var_4
#define var_4 -4
	// 8121 var_4           = word ptr -4 ;~ 04AB:005A
#undef var_2
#define var_2 -2
	// 8122 var_2           = word ptr -2 ;~ 04AB:005A
#undef arg_0
#define arg_0 4
	// 8123 arg_0           = word ptr  4 ;~ 04AB:005A
#undef arg_2
#define arg_2 6
	// 8124 arg_2           = word ptr  6 ;~ 04AB:005A
cs=0x4ab;eip=0x00005a; 	X(PUSH(bp));	// 8126                  push    bp ;~ 04AB:005A
cs=0x4ab;eip=0x00005b; 	T(bp = sp;);	// 8127                  mov     bp, sp ;~ 04AB:005B
cs=0x4ab;eip=0x00005d; 	T(SUB(sp, 4));	// 8128                  sub     sp, 4 ;~ 04AB:005D
cs=0x4ab;eip=0x000061; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8129                  mov     bx, [bp+arg_0] ;~ 04AB:0061
cs=0x4ab;eip=0x000064; 	T(SHL(bx, 1));	// 8130                  shl     bx, 1 ;~ 04AB:0064
cs=0x4ab;eip=0x000066; 	T(MOV(al, *(raddr(ds,bx+0x2AE))));	// 8131                  mov     al, [bx+2AEh] ;~ 04AB:0066
cs=0x4ab;eip=0x00006a; 	T(CBW);	// 8132                  cbw ;~ 04AB:006A
cs=0x4ab;eip=0x00006b; 	T(bx = ax;);	// 8133                  mov     bx, ax ;~ 04AB:006B
cs=0x4ab;eip=0x00006d; 	T(MOV(al, *(raddr(ds,bx+0x2C4))));	// 8134                  mov     al, [bx+2C4h] ;~ 04AB:006D
cs=0x4ab;eip=0x000071; 	T(CBW);	// 8135                  cbw ;~ 04AB:0071
cs=0x4ab;eip=0x000072; 	T(ADD(ax, 0x40));	// 8136                  add     ax, 40h ; '@' ;~ 04AB:0072
cs=0x4ab;eip=0x000075; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8137                  mov     [bp+var_2], ax ;~ 04AB:0075
cs=0x4ab;eip=0x000078; 	T(bx = ax;);	// 8138                  mov     bx, ax ;~ 04AB:0078
cs=0x4ab;eip=0x00007a; 	T(MOV(al, *(raddr(ds,bx+0x0C32))));	// 8139                  mov     al, [bx+0C32h] ;~ 04AB:007A
cs=0x4ab;eip=0x00007e; 	T(AND(ax, 0x0C0));	// 8140                  and     ax, 0C0h ;~ 04AB:007E
cs=0x4ab;eip=0x000081; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 8141                  mov     [bp+var_4], ax ;~ 04AB:0081
loc_13114:
	// 4584 
cs=0x4ab;eip=0x000084; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 8145                  mov     ax, [bp+arg_2] ;~ 04AB:0084
cs=0x4ab;eip=0x000087; 	T(AND(ax, 0x3F));	// 8146                  and     ax, 3Fh ;~ 04AB:0087
cs=0x4ab;eip=0x00008a; 	T(cx = 0x3F;);	// 8147                  mov     cx, 3Fh ; '?' ;~ 04AB:008A
cs=0x4ab;eip=0x00008d; 	T(SUB(cx, ax));	// 8148                  sub     cx, ax ;~ 04AB:008D
cs=0x4ab;eip=0x00008f; 	X(OR(*(dw*)(raddr(ss,bp+var_4)), cx));	// 8149                  or      [bp+var_4], cx ;~ 04AB:008F
cs=0x4ab;eip=0x000092; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 8150                  push    [bp+var_4] ;~ 04AB:0092
cs=0x4ab;eip=0x000095; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 8151                  push    [bp+var_2] ;~ 04AB:0095
cs=0x4ab;eip=0x000098; 	J(CALL(__dispatch_call,unk_22a31));	// 8152                  call    near ptr unk_22A31 ;~ 04AB:0098
cs=0x4ab;eip=0x00009b; 	T(ADD(sp, 4));	// 8153                  add     sp, 4 ;~ 04AB:009B
cs=0x4ab;eip=0x00009e; 	T(sp = bp;);	// 8154                  mov     sp, bp ;~ 04AB:009E
cs=0x4ab;eip=0x0000a0; 	X(POP(bp));	// 8155                  pop     bp ;~ 04AB:00A0
cs=0x4ab;eip=0x0000a1; 	J(RETN(0));	// 8156                  retn ;~ 04AB:00A1

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_13114: 	goto loc_13114;
        case m2c::ksub_130ea: 	goto sub_130ea;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13132(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13132:
    _begin:
#undef var_c
#define var_c -0x0C
	// 8166 var_C           = word ptr -0Ch ;~ 04AB:00A2
#undef var_a
#define var_a -0x0A
	// 8167 var_A           = byte ptr -0Ah ;~ 04AB:00A2
#undef var_8
#define var_8 -8
	// 8168 var_8           = byte ptr -8 ;~ 04AB:00A2
#undef var_6
#define var_6 -6
	// 8169 var_6           = byte ptr -6 ;~ 04AB:00A2
#undef var_4
#define var_4 -4
	// 8170 var_4           = word ptr -4 ;~ 04AB:00A2
#undef var_2
#define var_2 -2
	// 8171 var_2           = word ptr -2 ;~ 04AB:00A2
#undef arg_0
#define arg_0 4
	// 8172 arg_0           = word ptr  4 ;~ 04AB:00A2
#undef arg_2
#define arg_2 6
	// 8173 arg_2           = word ptr  6 ;~ 04AB:00A2
cs=0x4ab;eip=0x0000a2; 	X(PUSH(bp));	// 8175                  push    bp ;~ 04AB:00A2
cs=0x4ab;eip=0x0000a3; 	T(bp = sp;);	// 8176                  mov     bp, sp ;~ 04AB:00A3
cs=0x4ab;eip=0x0000a5; 	T(SUB(sp, 0x0C));	// 8177                  sub     sp, 0Ch ;~ 04AB:00A5
cs=0x4ab;eip=0x0000a9; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 8178                  push    [bp+arg_0] ;~ 04AB:00A9
cs=0x4ab;eip=0x0000ac; 	J(CALL(__dispatch_call,unk_23052));	// 8179                  call    near ptr unk_23052 ;~ 04AB:00AC
cs=0x4ab;eip=0x0000af; 	T(ADD(sp, 2));	// 8180                  add     sp, 2 ;~ 04AB:00AF
cs=0x4ab;eip=0x0000b2; 	T(ADD(ax, 0x0A0));	// 8181                  add     ax, 0A0h ;~ 04AB:00B2
cs=0x4ab;eip=0x0000b5; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8182                  mov     [bp+var_2], ax ;~ 04AB:00B5
cs=0x4ab;eip=0x0000b8; 	T(cx = 0x0C;);	// 8183                  mov     cx, 0Ch ;~ 04AB:00B8
cs=0x4ab;eip=0x0000bb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 8184                  mov     ax, [bp+arg_2] ;~ 04AB:00BB
cs=0x4ab;eip=0x0000be; 	T(SUB(dx, dx));	// 8185                  sub     dx, dx ;~ 04AB:00BE
loc_13150:
	// 4585 
cs=0x4ab;eip=0x0000c0; 	T(DIV2(cx));	// 8189                  div     cx ;~ 04AB:00C0
loc_13152:
	// 4586 
cs=0x4ab;eip=0x0000c2; 	X(MOV(*(raddr(ss,bp+var_8)), dl));	// 8192                  mov     [bp+var_8], dl ;~ 04AB:00C2
cs=0x4ab;eip=0x0000c5; 	T(cx = 0x0C;);	// 8193                  mov     cx, 0Ch ;~ 04AB:00C5
cs=0x4ab;eip=0x0000c8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 8194                  mov     ax, [bp+arg_2] ;~ 04AB:00C8
cs=0x4ab;eip=0x0000cb; 	T(SUB(dx, dx));	// 8195                  sub     dx, dx ;~ 04AB:00CB
cs=0x4ab;eip=0x0000cd; 	T(DIV2(cx));	// 8196                  div     cx ;~ 04AB:00CD
cs=0x4ab;eip=0x0000cf; 	X(MOV(*(raddr(ss,bp+var_a)), al));	// 8197                  mov     [bp+var_A], al ;~ 04AB:00CF
cs=0x4ab;eip=0x0000d2; 	T(MOV(al, *(raddr(ss,bp+var_8))));	// 8198                  mov     al, [bp+var_8] ;~ 04AB:00D2
cs=0x4ab;eip=0x0000d5; 	T(AND(ax, 0x0FF));	// 8199                  and     ax, 0FFh ;~ 04AB:00D5
cs=0x4ab;eip=0x0000d8; 	T(bx = ax;);	// 8200                  mov     bx, ax ;~ 04AB:00D8
cs=0x4ab;eip=0x0000da; 	T(SHL(bx, 1));	// 8201                  shl     bx, 1 ;~ 04AB:00DA
loc_1316c:
	// 4587 
cs=0x4ab;eip=0x0000dc; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x292))));	// 8205                  mov     ax, [bx+292h] ;~ 04AB:00DC
cs=0x4ab;eip=0x0000e0; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 8206                  mov     [bp+var_4], ax ;~ 04AB:00E0
cs=0x4ab;eip=0x0000e3; 	T(AND(ax, 0x0FF));	// 8207                  and     ax, 0FFh ;~ 04AB:00E3
cs=0x4ab;eip=0x0000e6; 	X(PUSH(ax));	// 8208                  push    ax ;~ 04AB:00E6
cs=0x4ab;eip=0x0000e7; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 8209                  push    [bp+var_2] ;~ 04AB:00E7
cs=0x4ab;eip=0x0000ea; 	J(CALL(__dispatch_call,unk_22a31));	// 8210                  call    near ptr unk_22A31 ;~ 04AB:00EA
cs=0x4ab;eip=0x0000ed; 	T(ADD(sp, 4));	// 8211                  add     sp, 4 ;~ 04AB:00ED
cs=0x4ab;eip=0x0000f0; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), 0x10));	// 8212                  add     [bp+var_2], 10h ;~ 04AB:00F0
cs=0x4ab;eip=0x0000f4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 8213                  mov     bx, [bp+var_2] ;~ 04AB:00F4
cs=0x4ab;eip=0x0000f7; 	T(MOV(al, *(raddr(ds,bx+0x0C32))));	// 8214                  mov     al, [bx+0C32h] ;~ 04AB:00F7
cs=0x4ab;eip=0x0000fb; 	T(AND(ax, 0x20));	// 8215                  and     ax, 20h ;~ 04AB:00FB
cs=0x4ab;eip=0x0000fe; 	X(MOV(*(raddr(ss,bp+var_6)), al));	// 8216                  mov     [bp+var_6], al ;~ 04AB:00FE
cs=0x4ab;eip=0x000101; 	T(cx = 8;);	// 8217                  mov     cx, 8 ;~ 04AB:0101
cs=0x4ab;eip=0x000104; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 8218                  mov     ax, [bp+var_4] ;~ 04AB:0104
cs=0x4ab;eip=0x000107; 	T(SHR(ax, cl));	// 8219                  shr     ax, cl ;~ 04AB:0107
cs=0x4ab;eip=0x000109; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 8220                  mov     [bp+var_C], ax ;~ 04AB:0109
cs=0x4ab;eip=0x00010c; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 8221                  mov     al, [bp+var_A] ;~ 04AB:010C
cs=0x4ab;eip=0x00010f; 	T(AND(ax, 0x0FF));	// 8222                  and     ax, 0FFh ;~ 04AB:010F
cs=0x4ab;eip=0x000112; 	T(SHL(ax, 1));	// 8223                  shl     ax, 1 ;~ 04AB:0112
cs=0x4ab;eip=0x000114; 	T(SHL(ax, 1));	// 8224                  shl     ax, 1 ;~ 04AB:0114
cs=0x4ab;eip=0x000116; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_c))));	// 8225                  mov     cx, [bp+var_C] ;~ 04AB:0116
cs=0x4ab;eip=0x000119; 	T(OR(cx, ax));	// 8226                  or      cx, ax ;~ 04AB:0119
cs=0x4ab;eip=0x00011b; 	X(OR(*(raddr(ss,bp+var_6)), cl));	// 8227                  or      [bp+var_6], cl ;~ 04AB:011B
cs=0x4ab;eip=0x00011e; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 8228                  mov     al, [bp+var_6] ;~ 04AB:011E
cs=0x4ab;eip=0x000121; 	T(AND(ax, 0x0FF));	// 8229                  and     ax, 0FFh ;~ 04AB:0121
cs=0x4ab;eip=0x000124; 	X(PUSH(ax));	// 8230                  push    ax ;~ 04AB:0124
cs=0x4ab;eip=0x000125; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 8231                  push    [bp+var_2] ;~ 04AB:0125
cs=0x4ab;eip=0x000128; 	J(CALL(__dispatch_call,unk_22a31));	// 8232                  call    near ptr unk_22A31 ;~ 04AB:0128
cs=0x4ab;eip=0x00012b; 	T(ADD(sp, 4));	// 8233                  add     sp, 4 ;~ 04AB:012B
cs=0x4ab;eip=0x00012e; 	T(sp = bp;);	// 8234                  mov     sp, bp ;~ 04AB:012E
cs=0x4ab;eip=0x000130; 	X(POP(bp));	// 8235                  pop     bp ;~ 04AB:0130
cs=0x4ab;eip=0x000131; 	J(RETN(0));	// 8236                  retn ;~ 04AB:0131

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_13150: 	goto loc_13150;
        case m2c::kloc_13152: 	goto loc_13152;
        case m2c::kloc_1316c: 	goto loc_1316c;
        case m2c::ksub_13132: 	goto sub_13132;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_131c2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_131c2:
    _begin:
#undef var_4
#define var_4 -4
	// 8246 var_4           = byte ptr -4 ;~ 04AB:0132
#undef var_2
#define var_2 -2
	// 8247 var_2           = word ptr -2 ;~ 04AB:0132
#undef arg_0
#define arg_0 4
	// 8248 arg_0           = byte ptr  4 ;~ 04AB:0132
#undef arg_2
#define arg_2 6
	// 8249 arg_2           = word ptr  6 ;~ 04AB:0132
cs=0x4ab;eip=0x000132; 	X(PUSH(bp));	// 8251                  push    bp ;~ 04AB:0132
cs=0x4ab;eip=0x000133; 	T(bp = sp;);	// 8252                  mov     bp, sp ;~ 04AB:0133
cs=0x4ab;eip=0x000135; 	T(SUB(sp, 4));	// 8253                  sub     sp, 4 ;~ 04AB:0135
cs=0x4ab;eip=0x000139; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8254                  mov     al, [bp+arg_0] ;~ 04AB:0139
cs=0x4ab;eip=0x00013c; 	T(AND(ax, 0x0FF));	// 8255                  and     ax, 0FFh ;~ 04AB:013C
cs=0x4ab;eip=0x00013f; 	X(PUSH(ax));	// 8256                  push    ax ;~ 04AB:013F
cs=0x4ab;eip=0x000140; 	J(CALL(__dispatch_call,unk_23052));	// 8257                  call    near ptr unk_23052 ;~ 04AB:0140
cs=0x4ab;eip=0x000143; 	T(ADD(sp, 2));	// 8258                  add     sp, 2 ;~ 04AB:0143
cs=0x4ab;eip=0x000146; 	T(ADD(ax, 0x0A0));	// 8259                  add     ax, 0A0h ;~ 04AB:0146
cs=0x4ab;eip=0x000149; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8260                  mov     [bp+var_2], ax ;~ 04AB:0149
cs=0x4ab;eip=0x00014c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 8261                  mov     ax, [bp+arg_2] ;~ 04AB:014C
cs=0x4ab;eip=0x00014f; 	T(AND(ax, 0x0FF));	// 8262                  and     ax, 0FFh ;~ 04AB:014F
cs=0x4ab;eip=0x000152; 	X(PUSH(ax));	// 8263                  push    ax ;~ 04AB:0152
cs=0x4ab;eip=0x000153; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 8264                  push    [bp+var_2] ;~ 04AB:0153
cs=0x4ab;eip=0x000156; 	J(CALL(__dispatch_call,unk_22a31));	// 8265                  call    near ptr unk_22A31 ;~ 04AB:0156
cs=0x4ab;eip=0x000159; 	T(ADD(sp, 4));	// 8266                  add     sp, 4 ;~ 04AB:0159
cs=0x4ab;eip=0x00015c; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), 0x10));	// 8267                  add     [bp+var_2], 10h ;~ 04AB:015C
cs=0x4ab;eip=0x000160; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 8268                  mov     bx, [bp+var_2] ;~ 04AB:0160
cs=0x4ab;eip=0x000163; 	T(MOV(al, *(raddr(ds,bx+0x0C32))));	// 8269                  mov     al, [bx+0C32h] ;~ 04AB:0163
cs=0x4ab;eip=0x000167; 	T(AND(ax, 0x20));	// 8270                  and     ax, 20h ;~ 04AB:0167
cs=0x4ab;eip=0x00016a; 	X(MOV(*(raddr(ss,bp+var_4)), al));	// 8271                  mov     [bp+var_4], al ;~ 04AB:016A
cs=0x4ab;eip=0x00016d; 	T(cx = 8;);	// 8272                  mov     cx, 8 ;~ 04AB:016D
cs=0x4ab;eip=0x000170; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 8273                  mov     ax, [bp+arg_2] ;~ 04AB:0170
cs=0x4ab;eip=0x000173; 	T(SHR(ax, cl));	// 8274                  shr     ax, cl ;~ 04AB:0173
cs=0x4ab;eip=0x000175; 	X(OR(*(raddr(ss,bp+var_4)), al));	// 8275                  or      [bp+var_4], al ;~ 04AB:0175
cs=0x4ab;eip=0x000178; 	T(MOV(al, *(raddr(ss,bp+var_4))));	// 8276                  mov     al, [bp+var_4] ;~ 04AB:0178
cs=0x4ab;eip=0x00017b; 	T(AND(ax, 0x0FF));	// 8277                  and     ax, 0FFh ;~ 04AB:017B
cs=0x4ab;eip=0x00017e; 	X(PUSH(ax));	// 8278                  push    ax ;~ 04AB:017E
cs=0x4ab;eip=0x00017f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 8279                  push    [bp+var_2] ;~ 04AB:017F
cs=0x4ab;eip=0x000182; 	J(CALL(__dispatch_call,unk_22a31));	// 8280                  call    near ptr unk_22A31 ;~ 04AB:0182
cs=0x4ab;eip=0x000185; 	T(ADD(sp, 4));	// 8281                  add     sp, 4 ;~ 04AB:0185
cs=0x4ab;eip=0x000188; 	T(sp = bp;);	// 8282                  mov     sp, bp ;~ 04AB:0188
cs=0x4ab;eip=0x00018a; 	X(POP(bp));	// 8283                  pop     bp ;~ 04AB:018A
cs=0x4ab;eip=0x00018b; 	J(RETN(0));	// 8284                  retn ;~ 04AB:018B

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_131c2: 	goto sub_131c2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1321c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1321c:
    _begin:
#undef var_a
#define var_a -0x0A
	// 8294 var_A           = word ptr -0Ah ;~ 04AB:018C
#undef var_8
#define var_8 -8
	// 8295 var_8           = byte ptr -8 ;~ 04AB:018C
#undef var_6
#define var_6 -6
	// 8296 var_6           = word ptr -6 ;~ 04AB:018C
#undef var_4
#define var_4 -4
	// 8297 var_4           = word ptr -4 ;~ 04AB:018C
#undef var_2
#define var_2 -2
	// 8298 var_2           = word ptr -2 ;~ 04AB:018C
#undef arg_0
#define arg_0 4
	// 8299 arg_0           = byte ptr  4 ;~ 04AB:018C
#undef arg_2
#define arg_2 6
	// 8300 arg_2           = byte ptr  6 ;~ 04AB:018C
cs=0x4ab;eip=0x00018c; 	X(PUSH(bp));	// 8302                  push    bp ;~ 04AB:018C
cs=0x4ab;eip=0x00018d; 	T(bp = sp;);	// 8303                  mov     bp, sp ;~ 04AB:018D
cs=0x4ab;eip=0x00018f; 	T(SUB(sp, 0x0A));	// 8304                  sub     sp, 0Ah ;~ 04AB:018F
cs=0x4ab;eip=0x000193; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8305                  mov     al, [bp+arg_0] ;~ 04AB:0193
cs=0x4ab;eip=0x000196; 	T(AND(ax, 0x0FF));	// 8306                  and     ax, 0FFh ;~ 04AB:0196
cs=0x4ab;eip=0x000199; 	X(PUSH(ax));	// 8307                  push    ax ;~ 04AB:0199
cs=0x4ab;eip=0x00019a; 	J(CALL(__dispatch_call,unk_23052));	// 8308                  call    near ptr unk_23052 ;~ 04AB:019A
cs=0x4ab;eip=0x00019d; 	T(ADD(sp, 2));	// 8309                  add     sp, 2 ;~ 04AB:019D
cs=0x4ab;eip=0x0001a0; 	T(ADD(ax, 0x0A0));	// 8310                  add     ax, 0A0h ;~ 04AB:01A0
cs=0x4ab;eip=0x0001a3; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8311                  mov     [bp+var_2], ax ;~ 04AB:01A3
cs=0x4ab;eip=0x0001a6; 	T(ADD(ax, 0x10));	// 8312                  add     ax, 10h ;~ 04AB:01A6
cs=0x4ab;eip=0x0001a9; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 8313                  mov     [bp+var_4], ax ;~ 04AB:01A9
cs=0x4ab;eip=0x0001ac; 	T(bx = ax;);	// 8314                  mov     bx, ax ;~ 04AB:01AC
cs=0x4ab;eip=0x0001ae; 	T(MOV(al, *(raddr(ds,bx+0x0C32))));	// 8315                  mov     al, [bx+0C32h] ;~ 04AB:01AE
cs=0x4ab;eip=0x0001b2; 	T(AND(ax, 0x1F));	// 8316                  and     ax, 1Fh ;~ 04AB:01B2
cs=0x4ab;eip=0x0001b5; 	T(cx = 8;);	// 8317                  mov     cx, 8 ;~ 04AB:01B5
cs=0x4ab;eip=0x0001b8; 	T(SHL(ax, cl));	// 8318                  shl     ax, cl ;~ 04AB:01B8
cs=0x4ab;eip=0x0001ba; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 8319                  mov     [bp+var_6], ax ;~ 04AB:01BA
cs=0x4ab;eip=0x0001bd; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 8320                  mov     bx, [bp+var_2] ;~ 04AB:01BD
cs=0x4ab;eip=0x0001c0; 	T(MOV(al, *(raddr(ds,bx+0x0C32))));	// 8321                  mov     al, [bx+0C32h] ;~ 04AB:01C0
cs=0x4ab;eip=0x0001c4; 	T(AND(ax, 0x0FF));	// 8322                  and     ax, 0FFh ;~ 04AB:01C4
cs=0x4ab;eip=0x0001c7; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 8323                  mov     [bp+var_A], ax ;~ 04AB:01C7
cs=0x4ab;eip=0x0001ca; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 8324                  mov     al, [bp+arg_2] ;~ 04AB:01CA
cs=0x4ab;eip=0x0001cd; 	T(CBW);	// 8325                  cbw ;~ 04AB:01CD
cs=0x4ab;eip=0x0001ce; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_a))));	// 8326                  mov     cx, [bp+var_A] ;~ 04AB:01CE
cs=0x4ab;eip=0x0001d1; 	T(ADD(cx, ax));	// 8327                  add     cx, ax ;~ 04AB:01D1
cs=0x4ab;eip=0x0001d3; 	X(ADD(*(dw*)(raddr(ss,bp+var_6)), cx));	// 8328                  add     [bp+var_6], cx ;~ 04AB:01D3
cs=0x4ab;eip=0x0001d6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 8329                  mov     ax, [bp+var_6] ;~ 04AB:01D6
cs=0x4ab;eip=0x0001d9; 	T(AND(ax, 0x0FF));	// 8330                  and     ax, 0FFh ;~ 04AB:01D9
cs=0x4ab;eip=0x0001dc; 	X(PUSH(ax));	// 8331                  push    ax ;~ 04AB:01DC
cs=0x4ab;eip=0x0001dd; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 8332                  push    [bp+var_2] ;~ 04AB:01DD
cs=0x4ab;eip=0x0001e0; 	J(CALL(__dispatch_call,unk_22a31));	// 8333                  call    near ptr unk_22A31 ;~ 04AB:01E0
cs=0x4ab;eip=0x0001e3; 	T(ADD(sp, 4));	// 8334                  add     sp, 4 ;~ 04AB:01E3
cs=0x4ab;eip=0x0001e6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 8335                  mov     bx, [bp+var_4] ;~ 04AB:01E6
cs=0x4ab;eip=0x0001e9; 	T(MOV(al, *(raddr(ds,bx+0x0C32))));	// 8336                  mov     al, [bx+0C32h] ;~ 04AB:01E9
cs=0x4ab;eip=0x0001ed; 	T(AND(ax, 0x20));	// 8337                  and     ax, 20h ;~ 04AB:01ED
cs=0x4ab;eip=0x0001f0; 	X(MOV(*(raddr(ss,bp+var_8)), al));	// 8338                  mov     [bp+var_8], al ;~ 04AB:01F0
cs=0x4ab;eip=0x0001f3; 	T(cx = 8;);	// 8339                  mov     cx, 8 ;~ 04AB:01F3
cs=0x4ab;eip=0x0001f6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 8340                  mov     ax, [bp+var_6] ;~ 04AB:01F6
cs=0x4ab;eip=0x0001f9; 	T(SHR(ax, cl));	// 8341                  shr     ax, cl ;~ 04AB:01F9
cs=0x4ab;eip=0x0001fb; 	X(OR(*(raddr(ss,bp+var_8)), al));	// 8342                  or      [bp+var_8], al ;~ 04AB:01FB
cs=0x4ab;eip=0x0001fe; 	T(MOV(al, *(raddr(ss,bp+var_8))));	// 8343                  mov     al, [bp+var_8] ;~ 04AB:01FE
cs=0x4ab;eip=0x000201; 	T(AND(ax, 0x0FF));	// 8344                  and     ax, 0FFh ;~ 04AB:0201
cs=0x4ab;eip=0x000204; 	X(PUSH(ax));	// 8345                  push    ax ;~ 04AB:0204
cs=0x4ab;eip=0x000205; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 8346                  push    [bp+var_4] ;~ 04AB:0205
cs=0x4ab;eip=0x000208; 	J(CALL(__dispatch_call,unk_22a31));	// 8347                  call    near ptr unk_22A31 ;~ 04AB:0208
cs=0x4ab;eip=0x00020b; 	T(ADD(sp, 4));	// 8348                  add     sp, 4 ;~ 04AB:020B
cs=0x4ab;eip=0x00020e; 	T(sp = bp;);	// 8349                  mov     sp, bp ;~ 04AB:020E
cs=0x4ab;eip=0x000210; 	X(POP(bp));	// 8350                  pop     bp ;~ 04AB:0210
cs=0x4ab;eip=0x000211; 	J(RETN(0));	// 8351                  retn ;~ 04AB:0211

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_1321c: 	goto sub_1321c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_132a2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_132a2:
    _begin:
#undef var_8
#define var_8 -8
	// 8361 var_8           = word ptr -8 ;~ 04AB:0212
#undef var_6
#define var_6 -6
	// 8362 var_6           = word ptr -6 ;~ 04AB:0212
#undef var_4
#define var_4 -4
	// 8363 var_4           = word ptr -4 ;~ 04AB:0212
#undef var_2
#define var_2 -2
	// 8364 var_2           = word ptr -2 ;~ 04AB:0212
#undef arg_0
#define arg_0 4
	// 8365 arg_0           = word ptr  4 ;~ 04AB:0212
#undef arg_2
#define arg_2 6
	// 8366 arg_2           = byte ptr  6 ;~ 04AB:0212
cs=0x4ab;eip=0x000212; 	X(PUSH(bp));	// 8368                  push    bp ;~ 04AB:0212
cs=0x4ab;eip=0x000213; 	T(bp = sp;);	// 8369                  mov     bp, sp ;~ 04AB:0213
cs=0x4ab;eip=0x000215; 	T(SUB(sp, 8));	// 8370                  sub     sp, 8 ;~ 04AB:0215
cs=0x4ab;eip=0x000219; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 6));	// 8371                  cmp     [bp+arg_0], 6 ;~ 04AB:0219
cs=0x4ab;eip=0x00021d; 	J(JA(loc_132cc));	// 8372                  ja      short loc_132CC ;~ 04AB:021D
cs=0x4ab;eip=0x00021f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 8373                  mov     ax, [bp+arg_0] ;~ 04AB:021F
cs=0x4ab;eip=0x000222; 	T(SHL(ax, 1));	// 8374                  shl     ax, 1 ;~ 04AB:0222
cs=0x4ab;eip=0x000224; 	T(bx = 0x2AE;);	// 8375                  mov     bx, 2AEh ;~ 04AB:0224
cs=0x4ab;eip=0x000227; 	T(ADD(bx, ax));	// 8376                  add     bx, ax ;~ 04AB:0227
cs=0x4ab;eip=0x000229; 	T(MOV(al, *(raddr(ds,bx+1))));	// 8377                  mov     al, [bx+1] ;~ 04AB:0229
cs=0x4ab;eip=0x00022c; 	T(CBW);	// 8378                  cbw ;~ 04AB:022C
cs=0x4ab;eip=0x00022d; 	T(bx = ax;);	// 8379                  mov     bx, ax ;~ 04AB:022D
cs=0x4ab;eip=0x00022f; 	T(MOV(al, *(raddr(ds,bx+0x2C4))));	// 8380                  mov     al, [bx+2C4h] ;~ 04AB:022F
cs=0x4ab;eip=0x000233; 	T(CBW);	// 8381                  cbw ;~ 04AB:0233
cs=0x4ab;eip=0x000234; 	T(ADD(ax, 0x40));	// 8382                  add     ax, 40h ; '@' ;~ 04AB:0234
cs=0x4ab;eip=0x000237; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8383                  mov     [bp+var_2], ax ;~ 04AB:0237
cs=0x4ab;eip=0x00023a; 	J(JMP(loc_132e3));	// 8384                  jmp     short loc_132E3 ;~ 04AB:023A
loc_132cc:
	// 4588 
cs=0x4ab;eip=0x00023c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8388                  mov     bx, [bp+arg_0] ;~ 04AB:023C
cs=0x4ab;eip=0x00023f; 	T(SHL(bx, 1));	// 8389                  shl     bx, 1 ;~ 04AB:023F
cs=0x4ab;eip=0x000241; 	T(MOV(al, *(raddr(ds,bx+0x2AE))));	// 8390                  mov     al, [bx+2AEh] ;~ 04AB:0241
cs=0x4ab;eip=0x000245; 	T(CBW);	// 8391                  cbw ;~ 04AB:0245
cs=0x4ab;eip=0x000246; 	T(bx = ax;);	// 8392                  mov     bx, ax ;~ 04AB:0246
cs=0x4ab;eip=0x000248; 	T(MOV(al, *(raddr(ds,bx+0x2C4))));	// 8393                  mov     al, [bx+2C4h] ;~ 04AB:0248
cs=0x4ab;eip=0x00024c; 	T(CBW);	// 8394                  cbw ;~ 04AB:024C
cs=0x4ab;eip=0x00024d; 	T(ADD(ax, 0x40));	// 8395                  add     ax, 40h ; '@' ;~ 04AB:024D
cs=0x4ab;eip=0x000250; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8396                  mov     [bp+var_2], ax ;~ 04AB:0250
loc_132e3:
	// 4589 
cs=0x4ab;eip=0x000253; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 8399                  mov     bx, [bp+var_2] ;~ 04AB:0253
cs=0x4ab;eip=0x000256; 	T(MOV(al, *(raddr(ds,bx+0x0C32))));	// 8400                  mov     al, [bx+0C32h] ;~ 04AB:0256
cs=0x4ab;eip=0x00025a; 	T(AND(ax, 0x0FF));	// 8401                  and     ax, 0FFh ;~ 04AB:025A
cs=0x4ab;eip=0x00025d; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 8402                  mov     [bp+var_6], ax ;~ 04AB:025D
cs=0x4ab;eip=0x000260; 	T(AND(ax, 0x3F));	// 8403                  and     ax, 3Fh ;~ 04AB:0260
cs=0x4ab;eip=0x000263; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 8404                  mov     [bp+var_8], ax ;~ 04AB:0263
cs=0x4ab;eip=0x000266; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 8405                  mov     al, [bp+arg_2] ;~ 04AB:0266
cs=0x4ab;eip=0x000269; 	T(CBW);	// 8406                  cbw ;~ 04AB:0269
cs=0x4ab;eip=0x00026a; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_8))));	// 8407                  mov     cx, [bp+var_8] ;~ 04AB:026A
cs=0x4ab;eip=0x00026d; 	T(SUB(cx, ax));	// 8408                  sub     cx, ax ;~ 04AB:026D
cs=0x4ab;eip=0x00026f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), cx));	// 8409                  mov     [bp+var_4], cx ;~ 04AB:026F
cs=0x4ab;eip=0x000272; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 8410                  mov     ax, [bp+var_6] ;~ 04AB:0272
cs=0x4ab;eip=0x000275; 	T(AND(ax, 0x0FFC0));	// 8411                  and     ax, 0FFC0h ;~ 04AB:0275
cs=0x4ab;eip=0x000278; 	X(OR(*(dw*)(raddr(ss,bp+var_4)), ax));	// 8412                  or      [bp+var_4], ax ;~ 04AB:0278
cs=0x4ab;eip=0x00027b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 8413                  push    [bp+var_4] ;~ 04AB:027B
cs=0x4ab;eip=0x00027e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 8414                  push    [bp+var_2] ;~ 04AB:027E
cs=0x4ab;eip=0x000281; 	J(CALL(__dispatch_call,unk_22a31));	// 8415                  call    near ptr unk_22A31 ;~ 04AB:0281
cs=0x4ab;eip=0x000284; 	T(ADD(sp, 4));	// 8416                  add     sp, 4 ;~ 04AB:0284
cs=0x4ab;eip=0x000287; 	T(sp = bp;);	// 8417                  mov     sp, bp ;~ 04AB:0287
cs=0x4ab;eip=0x000289; 	X(POP(bp));	// 8418                  pop     bp ;~ 04AB:0289
cs=0x4ab;eip=0x00028a; 	J(RETN(0));	// 8419                  retn ;~ 04AB:028A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_132cc: 	goto loc_132cc;
        case m2c::kloc_132e3: 	goto loc_132e3;
        case m2c::ksub_132a2: 	goto sub_132a2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1331c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1331c:
    _begin:
#undef var_6
#define var_6 -6
	// 8432 var_6           = word ptr -6 ;~ 04AB:028C
#undef var_4
#define var_4 -4
	// 8433 var_4           = word ptr -4 ;~ 04AB:028C
#undef var_2
#define var_2 -2
	// 8434 var_2           = byte ptr -2 ;~ 04AB:028C
#undef arg_0
#define arg_0 4
	// 8435 arg_0           = byte ptr  4 ;~ 04AB:028C
cs=0x4ab;eip=0x00028c; 	X(PUSH(bp));	// 8437                  push    bp ;~ 04AB:028C
cs=0x4ab;eip=0x00028d; 	T(bp = sp;);	// 8438                  mov     bp, sp ;~ 04AB:028D
cs=0x4ab;eip=0x00028f; 	T(SUB(sp, 6));	// 8439                  sub     sp, 6 ;~ 04AB:028F
cs=0x4ab;eip=0x000293; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8440                  mov     al, [bp+arg_0] ;~ 04AB:0293
cs=0x4ab;eip=0x000296; 	T(AND(ax, 0x0FF));	// 8441                  and     ax, 0FFh ;~ 04AB:0296
cs=0x4ab;eip=0x000299; 	T(CMP(ax, 6));	// 8442                  cmp     ax, 6 ;~ 04AB:0299
cs=0x4ab;eip=0x00029c; 	J(JGE(loc_13360));	// 8443                  jge     short loc_13360 ;~ 04AB:029C
cs=0x4ab;eip=0x00029e; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8444                  mov     al, [bp+arg_0] ;~ 04AB:029E
cs=0x4ab;eip=0x0002a1; 	T(AND(ax, 0x0FF));	// 8445                  and     ax, 0FFh ;~ 04AB:02A1
cs=0x4ab;eip=0x0002a4; 	X(PUSH(ax));	// 8446                  push    ax ;~ 04AB:02A4
cs=0x4ab;eip=0x0002a5; 	J(CALL(__dispatch_call,unk_23052));	// 8447                  call    near ptr unk_23052 ;~ 04AB:02A5
cs=0x4ab;eip=0x0002a8; 	T(ADD(sp, 2));	// 8448                  add     sp, 2 ;~ 04AB:02A8
cs=0x4ab;eip=0x0002ab; 	T(ADD(ax, 0x0B0));	// 8449                  add     ax, 0B0h ;~ 04AB:02AB
cs=0x4ab;eip=0x0002ae; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 8450                  mov     [bp+var_4], ax ;~ 04AB:02AE
cs=0x4ab;eip=0x0002b1; 	T(bx = ax;);	// 8451                  mov     bx, ax ;~ 04AB:02B1
cs=0x4ab;eip=0x0002b3; 	T(MOV(al, *(raddr(ds,bx+0x0C32))));	// 8452                  mov     al, [bx+0C32h] ;~ 04AB:02B3
cs=0x4ab;eip=0x0002b7; 	T(AND(ax, 0x0DF));	// 8453                  and     ax, 0DFh ;~ 04AB:02B7
cs=0x4ab;eip=0x0002ba; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 8454                  mov     [bp+var_2], al ;~ 04AB:02BA
cs=0x4ab;eip=0x0002bd; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 8455                  mov     al, [bp+var_2] ;~ 04AB:02BD
cs=0x4ab;eip=0x0002c0; 	T(AND(ax, 0x0FF));	// 8456                  and     ax, 0FFh ;~ 04AB:02C0
cs=0x4ab;eip=0x0002c3; 	X(PUSH(ax));	// 8457                  push    ax ;~ 04AB:02C3
cs=0x4ab;eip=0x0002c4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 8458                  push    [bp+var_4] ;~ 04AB:02C4
cs=0x4ab;eip=0x0002c7; 	J(CALL(__dispatch_call,unk_22a31));	// 8459                  call    near ptr unk_22A31 ;~ 04AB:02C7
cs=0x4ab;eip=0x0002ca; 	T(ADD(sp, 4));	// 8460                  add     sp, 4 ;~ 04AB:02CA
cs=0x4ab;eip=0x0002cd; 	J(JMP(loc_13394));	// 8461                  jmp     short loc_13394 ;~ 04AB:02CD
loc_13360:
	// 4590 
cs=0x4ab;eip=0x0002d0; 	T(MOV(al, *(raddr(ds,0x0CEF))));	// 8466                  mov     al, ds:0CEFh ;~ 04AB:02D0
cs=0x4ab;eip=0x0002d3; 	T(AND(ax, 0x0FF));	// 8467                  and     ax, 0FFh ;~ 04AB:02D3
cs=0x4ab;eip=0x0002d6; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 8468                  mov     [bp+var_6], ax ;~ 04AB:02D6
cs=0x4ab;eip=0x0002d9; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8469                  mov     al, [bp+arg_0] ;~ 04AB:02D9
cs=0x4ab;eip=0x0002dc; 	T(AND(ax, 0x0FF));	// 8470                  and     ax, 0FFh ;~ 04AB:02DC
cs=0x4ab;eip=0x0002df; 	T(bx = ax;);	// 8471                  mov     bx, ax ;~ 04AB:02DF
cs=0x4ab;eip=0x0002e1; 	T(ADD(bx, 0x0FFFA));	// 8472                  add     bx, 0FFFAh ;~ 04AB:02E1
cs=0x4ab;eip=0x0002e4; 	T(MOV(al, *(raddr(ds,bx+0x28C))));	// 8473                  mov     al, [bx+28Ch] ;~ 04AB:02E4
cs=0x4ab;eip=0x0002e8; 	T(CBW);	// 8474                  cbw ;~ 04AB:02E8
cs=0x4ab;eip=0x0002e9; 	T(NOT(ax));	// 8475                  not     ax ;~ 04AB:02E9
cs=0x4ab;eip=0x0002eb; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_6))));	// 8476                  mov     cx, [bp+var_6] ;~ 04AB:02EB
cs=0x4ab;eip=0x0002ee; 	T(AND(cx, ax));	// 8477                  and     cx, ax ;~ 04AB:02EE
cs=0x4ab;eip=0x0002f0; 	X(MOV(*(raddr(ss,bp+var_2)), cl));	// 8478                  mov     [bp+var_2], cl ;~ 04AB:02F0
cs=0x4ab;eip=0x0002f3; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 8479                  mov     al, [bp+var_2] ;~ 04AB:02F3
cs=0x4ab;eip=0x0002f6; 	T(AND(ax, 0x0FF));	// 8480                  and     ax, 0FFh ;~ 04AB:02F6
cs=0x4ab;eip=0x0002f9; 	X(PUSH(ax));	// 8481                  push    ax ;~ 04AB:02F9
cs=0x4ab;eip=0x0002fa; 	T(ax = 0x0BD;);	// 8482                  mov     ax, 0BDh ;~ 04AB:02FA
cs=0x4ab;eip=0x0002fd; 	X(PUSH(ax));	// 8483                  push    ax ;~ 04AB:02FD
cs=0x4ab;eip=0x0002fe; 	J(CALL(__dispatch_call,unk_22a31));	// 8484                  call    near ptr unk_22A31 ;~ 04AB:02FE
cs=0x4ab;eip=0x000301; 	T(ADD(sp, 4));	// 8485                  add     sp, 4 ;~ 04AB:0301
loc_13394:
	// 4591 
cs=0x4ab;eip=0x000304; 	T(sp = bp;);	// 8488                  mov     sp, bp ;~ 04AB:0304
cs=0x4ab;eip=0x000306; 	X(POP(bp));	// 8489                  pop     bp ;~ 04AB:0306
cs=0x4ab;eip=0x000307; 	J(RETN(0));	// 8490                  retn ;~ 04AB:0307

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_13360: 	goto loc_13360;
        case m2c::kloc_13394: 	goto loc_13394;
        case m2c::ksub_1331c: 	goto sub_1331c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13398(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13398:
    _begin:
#undef var_6
#define var_6 -6
	// 8501 var_6           = word ptr -6 ;~ 04AB:0308
#undef var_4
#define var_4 -4
	// 8502 var_4           = word ptr -4 ;~ 04AB:0308
#undef var_2
#define var_2 -2
	// 8503 var_2           = byte ptr -2 ;~ 04AB:0308
#undef arg_0
#define arg_0 4
	// 8504 arg_0           = byte ptr  4 ;~ 04AB:0308
#undef arg_2
#define arg_2 6
	// 8505 arg_2           = byte ptr  6 ;~ 04AB:0308
#undef arg_4
#define arg_4 8
	// 8506 arg_4           = byte ptr  8 ;~ 04AB:0308
#undef arg_6
#define arg_6 0x0A
	// 8507 arg_6           = byte ptr  0Ah ;~ 04AB:0308
cs=0x4ab;eip=0x000308; 	X(PUSH(bp));	// 8509                  push    bp ;~ 04AB:0308
cs=0x4ab;eip=0x000309; 	T(bp = sp;);	// 8510                  mov     bp, sp ;~ 04AB:0309
cs=0x4ab;eip=0x00030b; 	T(SUB(sp, 6));	// 8511                  sub     sp, 6 ;~ 04AB:030B
cs=0x4ab;eip=0x00030f; 	X(PUSH(si));	// 8512                  push    si ;~ 04AB:030F
cs=0x4ab;eip=0x000310; 	X(PUSH(di));	// 8513                  push    di ;~ 04AB:0310
cs=0x4ab;eip=0x000311; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8514                  mov     al, [bp+arg_0] ;~ 04AB:0311
cs=0x4ab;eip=0x000314; 	T(AND(ax, 0x0FF));	// 8515                  and     ax, 0FFh ;~ 04AB:0314
cs=0x4ab;eip=0x000317; 	T(bx = ax;);	// 8516                  mov     bx, ax ;~ 04AB:0317
cs=0x4ab;eip=0x000319; 	T(SHL(bx, 1));	// 8517                  shl     bx, 1 ;~ 04AB:0319
cs=0x4ab;eip=0x00031b; 	T(SHL(bx, 1));	// 8518                  shl     bx, 1 ;~ 04AB:031B
cs=0x4ab;eip=0x00031d; 	T(SHL(bx, 1));	// 8519                  shl     bx, 1 ;~ 04AB:031D
cs=0x4ab;eip=0x00031f; 	T(MOV(al, *(raddr(ds,bx+0x0D32))));	// 8520                  mov     al, [bx+0D32h] ;~ 04AB:031F
cs=0x4ab;eip=0x000323; 	T(AND(ax, 0x0FF));	// 8521                  and     ax, 0FFh ;~ 04AB:0323
cs=0x4ab;eip=0x000326; 	J(JNZ(loc_133bb));	// 8522                  jnz     short loc_133BB ;~ 04AB:0326
cs=0x4ab;eip=0x000328; 	J(JMP(loc_13492));	// 8523                  jmp     loc_13492 ;~ 04AB:0328
loc_133bb:
	// 4592 
cs=0x4ab;eip=0x00032b; 	T(MOV(al, *(raddr(ds,0x0C28))));	// 8527                  mov     al, ds:0C28h ;~ 04AB:032B
cs=0x4ab;eip=0x00032e; 	T(AND(ax, 0x0FF));	// 8528                  and     ax, 0FFh ;~ 04AB:032E
cs=0x4ab;eip=0x000331; 	J(JZ(loc_133c6));	// 8529                  jz      short loc_133C6 ;~ 04AB:0331
cs=0x4ab;eip=0x000333; 	J(JMP(loc_1342c));	// 8530                  jmp     loc_1342C ;~ 04AB:0333
loc_133c6:
	// 4593 
cs=0x4ab;eip=0x000336; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8534                  mov     al, [bp+arg_0] ;~ 04AB:0336
cs=0x4ab;eip=0x000339; 	X(MOV(*(raddr(ds,0x0C2F)), al));	// 8535                  mov     ds:0C2Fh, al ;~ 04AB:0339
cs=0x4ab;eip=0x00033c; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8536                  mov     al, [bp+arg_0] ;~ 04AB:033C
cs=0x4ab;eip=0x00033f; 	T(AND(ax, 0x0FF));	// 8537                  and     ax, 0FFh ;~ 04AB:033F
cs=0x4ab;eip=0x000342; 	T(bx = ax;);	// 8538                  mov     bx, ax ;~ 04AB:0342
cs=0x4ab;eip=0x000344; 	T(SHL(bx, 1));	// 8539                  shl     bx, 1 ;~ 04AB:0344
cs=0x4ab;eip=0x000346; 	T(SHL(bx, 1));	// 8540                  shl     bx, 1 ;~ 04AB:0346
cs=0x4ab;eip=0x000348; 	T(SHL(bx, 1));	// 8541                  shl     bx, 1 ;~ 04AB:0348
cs=0x4ab;eip=0x00034a; 	T(MOV(al, *(raddr(ds,bx+0x0D32))));	// 8542                  mov     al, [bx+0D32h] ;~ 04AB:034A
cs=0x4ab;eip=0x00034e; 	X(MOV(*(raddr(ds,0x0C28)), al));	// 8543                  mov     ds:0C28h, al ;~ 04AB:034E
cs=0x4ab;eip=0x000351; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8544                  mov     al, [bp+arg_0] ;~ 04AB:0351
cs=0x4ab;eip=0x000354; 	T(AND(ax, 0x0FF));	// 8545                  and     ax, 0FFh ;~ 04AB:0354
cs=0x4ab;eip=0x000357; 	T(SHL(ax, 1));	// 8546                  shl     ax, 1 ;~ 04AB:0357
cs=0x4ab;eip=0x000359; 	T(SHL(ax, 1));	// 8547                  shl     ax, 1 ;~ 04AB:0359
cs=0x4ab;eip=0x00035b; 	T(SHL(ax, 1));	// 8548                  shl     ax, 1 ;~ 04AB:035B
cs=0x4ab;eip=0x00035d; 	T(bx = 0x0D32;);	// 8549                  mov     bx, 0D32h ;~ 04AB:035D
cs=0x4ab;eip=0x000360; 	T(ADD(bx, ax));	// 8550                  add     bx, ax ;~ 04AB:0360
cs=0x4ab;eip=0x000362; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 8551                  mov     ax, [bx+2] ;~ 04AB:0362
cs=0x4ab;eip=0x000365; 	X(MOV(*(dw*)(raddr(ds,0x0C2A)), ax));	// 8552                  mov     ds:0C2Ah, ax ;~ 04AB:0365
cs=0x4ab;eip=0x000368; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8553                  mov     al, [bp+arg_0] ;~ 04AB:0368
cs=0x4ab;eip=0x00036b; 	T(AND(ax, 0x0FF));	// 8554                  and     ax, 0FFh ;~ 04AB:036B
cs=0x4ab;eip=0x00036e; 	T(SHL(ax, 1));	// 8555                  shl     ax, 1 ;~ 04AB:036E
cs=0x4ab;eip=0x000370; 	T(SHL(ax, 1));	// 8556                  shl     ax, 1 ;~ 04AB:0370
cs=0x4ab;eip=0x000372; 	T(SHL(ax, 1));	// 8557                  shl     ax, 1 ;~ 04AB:0372
cs=0x4ab;eip=0x000374; 	T(bx = 0x0D32;);	// 8558                  mov     bx, 0D32h ;~ 04AB:0374
cs=0x4ab;eip=0x000377; 	T(ADD(bx, ax));	// 8559                  add     bx, ax ;~ 04AB:0377
cs=0x4ab;eip=0x000379; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 8560                  mov     ax, [bx+4] ;~ 04AB:0379
cs=0x4ab;eip=0x00037c; 	X(MOV(*(dw*)(raddr(ds,0x0B92)), ax));	// 8561                  mov     ds:0B92h, ax ;~ 04AB:037C
cs=0x4ab;eip=0x00037f; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8562                  mov     al, [bp+arg_0] ;~ 04AB:037F
cs=0x4ab;eip=0x000382; 	T(AND(ax, 0x0FF));	// 8563                  and     ax, 0FFh ;~ 04AB:0382
cs=0x4ab;eip=0x000385; 	T(SHL(ax, 1));	// 8564                  shl     ax, 1 ;~ 04AB:0385
cs=0x4ab;eip=0x000387; 	T(SHL(ax, 1));	// 8565                  shl     ax, 1 ;~ 04AB:0387
cs=0x4ab;eip=0x000389; 	T(SHL(ax, 1));	// 8566                  shl     ax, 1 ;~ 04AB:0389
cs=0x4ab;eip=0x00038b; 	T(bx = 0x0D32;);	// 8567                  mov     bx, 0D32h ;~ 04AB:038B
cs=0x4ab;eip=0x00038e; 	T(ADD(bx, ax));	// 8568                  add     bx, ax ;~ 04AB:038E
cs=0x4ab;eip=0x000390; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 8569                  mov     ax, [bx+6] ;~ 04AB:0390
cs=0x4ab;eip=0x000393; 	X(MOV(*(dw*)(raddr(ds,0x0B96)), ax));	// 8570                  mov     ds:0B96h, ax ;~ 04AB:0393
cs=0x4ab;eip=0x000396; 	J(CALL(__dispatch_call,unk_22b4b));	// 8571                  call    near ptr unk_22B4B ;~ 04AB:0396
cs=0x4ab;eip=0x000399; 	J(JMP(loc_1348f));	// 8572                  jmp     loc_1348F ;~ 04AB:0399
loc_1342c:
	// 4594 
cs=0x4ab;eip=0x00039c; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8576                  mov     al, [bp+arg_0] ;~ 04AB:039C
cs=0x4ab;eip=0x00039f; 	X(MOV(*(raddr(ds,0x0C30)), al));	// 8577                  mov     ds:0C30h, al ;~ 04AB:039F
cs=0x4ab;eip=0x0003a2; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8578                  mov     al, [bp+arg_0] ;~ 04AB:03A2
cs=0x4ab;eip=0x0003a5; 	T(AND(ax, 0x0FF));	// 8579                  and     ax, 0FFh ;~ 04AB:03A5
cs=0x4ab;eip=0x0003a8; 	T(bx = ax;);	// 8580                  mov     bx, ax ;~ 04AB:03A8
cs=0x4ab;eip=0x0003aa; 	T(SHL(bx, 1));	// 8581                  shl     bx, 1 ;~ 04AB:03AA
cs=0x4ab;eip=0x0003ac; 	T(SHL(bx, 1));	// 8582                  shl     bx, 1 ;~ 04AB:03AC
cs=0x4ab;eip=0x0003ae; 	T(SHL(bx, 1));	// 8583                  shl     bx, 1 ;~ 04AB:03AE
cs=0x4ab;eip=0x0003b0; 	T(MOV(al, *(raddr(ds,bx+0x0D32))));	// 8584                  mov     al, [bx+0D32h] ;~ 04AB:03B0
cs=0x4ab;eip=0x0003b4; 	X(MOV(*(raddr(ds,0x0C29)), al));	// 8585                  mov     ds:0C29h, al ;~ 04AB:03B4
cs=0x4ab;eip=0x0003b7; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8586                  mov     al, [bp+arg_0] ;~ 04AB:03B7
cs=0x4ab;eip=0x0003ba; 	T(AND(ax, 0x0FF));	// 8587                  and     ax, 0FFh ;~ 04AB:03BA
cs=0x4ab;eip=0x0003bd; 	T(SHL(ax, 1));	// 8588                  shl     ax, 1 ;~ 04AB:03BD
cs=0x4ab;eip=0x0003bf; 	T(SHL(ax, 1));	// 8589                  shl     ax, 1 ;~ 04AB:03BF
cs=0x4ab;eip=0x0003c1; 	T(SHL(ax, 1));	// 8590                  shl     ax, 1 ;~ 04AB:03C1
cs=0x4ab;eip=0x0003c3; 	T(bx = 0x0D32;);	// 8591                  mov     bx, 0D32h ;~ 04AB:03C3
cs=0x4ab;eip=0x0003c6; 	T(ADD(bx, ax));	// 8592                  add     bx, ax ;~ 04AB:03C6
cs=0x4ab;eip=0x0003c8; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 8593                  mov     ax, [bx+2] ;~ 04AB:03C8
cs=0x4ab;eip=0x0003cb; 	X(MOV(*(dw*)(raddr(ds,0x0C2C)), ax));	// 8594                  mov     ds:0C2Ch, ax ;~ 04AB:03CB
cs=0x4ab;eip=0x0003ce; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8595                  mov     al, [bp+arg_0] ;~ 04AB:03CE
cs=0x4ab;eip=0x0003d1; 	T(AND(ax, 0x0FF));	// 8596                  and     ax, 0FFh ;~ 04AB:03D1
cs=0x4ab;eip=0x0003d4; 	T(SHL(ax, 1));	// 8597                  shl     ax, 1 ;~ 04AB:03D4
cs=0x4ab;eip=0x0003d6; 	T(SHL(ax, 1));	// 8598                  shl     ax, 1 ;~ 04AB:03D6
cs=0x4ab;eip=0x0003d8; 	T(SHL(ax, 1));	// 8599                  shl     ax, 1 ;~ 04AB:03D8
cs=0x4ab;eip=0x0003da; 	T(bx = 0x0D32;);	// 8600                  mov     bx, 0D32h ;~ 04AB:03DA
cs=0x4ab;eip=0x0003dd; 	T(ADD(bx, ax));	// 8601                  add     bx, ax ;~ 04AB:03DD
cs=0x4ab;eip=0x0003df; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 8602                  mov     ax, [bx+4] ;~ 04AB:03DF
cs=0x4ab;eip=0x0003e2; 	X(MOV(*(dw*)(raddr(ds,0x0B94)), ax));	// 8603                  mov     ds:0B94h, ax ;~ 04AB:03E2
cs=0x4ab;eip=0x0003e5; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8604                  mov     al, [bp+arg_0] ;~ 04AB:03E5
cs=0x4ab;eip=0x0003e8; 	T(AND(ax, 0x0FF));	// 8605                  and     ax, 0FFh ;~ 04AB:03E8
cs=0x4ab;eip=0x0003eb; 	T(SHL(ax, 1));	// 8606                  shl     ax, 1 ;~ 04AB:03EB
cs=0x4ab;eip=0x0003ed; 	T(SHL(ax, 1));	// 8607                  shl     ax, 1 ;~ 04AB:03ED
cs=0x4ab;eip=0x0003ef; 	T(SHL(ax, 1));	// 8608                  shl     ax, 1 ;~ 04AB:03EF
cs=0x4ab;eip=0x0003f1; 	T(bx = 0x0D32;);	// 8609                  mov     bx, 0D32h ;~ 04AB:03F1
cs=0x4ab;eip=0x0003f4; 	T(ADD(bx, ax));	// 8610                  add     bx, ax ;~ 04AB:03F4
cs=0x4ab;eip=0x0003f6; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 8611                  mov     ax, [bx+6] ;~ 04AB:03F6
cs=0x4ab;eip=0x0003f9; 	X(MOV(*(dw*)(raddr(ds,0x0B98)), ax));	// 8612                  mov     ds:0B98h, ax ;~ 04AB:03F9
cs=0x4ab;eip=0x0003fc; 	J(CALL(__dispatch_call,unk_22b4b));	// 8613                  call    near ptr unk_22B4B ;~ 04AB:03FC
loc_1348f:
	// 4595 
cs=0x4ab;eip=0x0003ff; 	J(JMP(loc_1353e));	// 8616                  jmp     loc_1353E ;~ 04AB:03FF
loc_13492:
	// 4596 
cs=0x4ab;eip=0x000402; 	T(CMP(*(raddr(ss,bp+arg_6)), 0));	// 8620                  cmp     [bp+arg_6], 0 ;~ 04AB:0402
cs=0x4ab;eip=0x000406; 	J(JNZ(loc_134a5));	// 8621                  jnz     short loc_134A5 ;~ 04AB:0406
cs=0x4ab;eip=0x000408; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8622                  mov     al, [bp+arg_0] ;~ 04AB:0408
cs=0x4ab;eip=0x00040b; 	T(AND(ax, 0x0FF));	// 8623                  and     ax, 0FFh ;~ 04AB:040B
cs=0x4ab;eip=0x00040e; 	X(PUSH(ax));	// 8624                  push    ax ;~ 04AB:040E
cs=0x4ab;eip=0x00040f; 	J(CALL(sub_1331c,0));	// 8625                  call    sub_1331C ;~ 04AB:040F
cs=0x4ab;eip=0x000412; 	T(ADD(sp, 2));	// 8626                  add     sp, 2 ;~ 04AB:0412
loc_134a5:
	// 4597 
cs=0x4ab;eip=0x000415; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 8629                  mov     al, [bp+arg_2] ;~ 04AB:0415
cs=0x4ab;eip=0x000418; 	T(AND(ax, 0x0FF));	// 8630                  and     ax, 0FFh ;~ 04AB:0418
cs=0x4ab;eip=0x00041b; 	X(PUSH(ax));	// 8631                  push    ax ;~ 04AB:041B
cs=0x4ab;eip=0x00041c; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8632                  mov     al, [bp+arg_0] ;~ 04AB:041C
cs=0x4ab;eip=0x00041f; 	T(AND(ax, 0x0FF));	// 8633                  and     ax, 0FFh ;~ 04AB:041F
cs=0x4ab;eip=0x000422; 	X(PUSH(ax));	// 8634                  push    ax ;~ 04AB:0422
cs=0x4ab;eip=0x000423; 	J(CALL(sub_13132,0));	// 8635                  call    sub_13132 ;~ 04AB:0423
cs=0x4ab;eip=0x000426; 	T(ADD(sp, 4));	// 8636                  add     sp, 4 ;~ 04AB:0426
cs=0x4ab;eip=0x000429; 	T(MOV(al, *(raddr(ss,bp+arg_4))));	// 8637                  mov     al, [bp+arg_4] ;~ 04AB:0429
cs=0x4ab;eip=0x00042c; 	T(AND(ax, 0x0FF));	// 8638                  and     ax, 0FFh ;~ 04AB:042C
cs=0x4ab;eip=0x00042f; 	X(PUSH(ax));	// 8639                  push    ax ;~ 04AB:042F
cs=0x4ab;eip=0x000430; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8640                  mov     al, [bp+arg_0] ;~ 04AB:0430
cs=0x4ab;eip=0x000433; 	T(AND(ax, 0x0FF));	// 8641                  and     ax, 0FFh ;~ 04AB:0433
cs=0x4ab;eip=0x000436; 	X(PUSH(ax));	// 8642                  push    ax ;~ 04AB:0436
cs=0x4ab;eip=0x000437; 	J(CALL(__dispatch_call,unk_2307e));	// 8643                  call    near ptr unk_2307E ;~ 04AB:0437
cs=0x4ab;eip=0x00043a; 	T(ADD(sp, 4));	// 8644                  add     sp, 4 ;~ 04AB:043A
cs=0x4ab;eip=0x00043d; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8645                  mov     al, [bp+arg_0] ;~ 04AB:043D
cs=0x4ab;eip=0x000440; 	T(AND(ax, 0x0FF));	// 8646                  and     ax, 0FFh ;~ 04AB:0440
cs=0x4ab;eip=0x000443; 	T(CMP(ax, 6));	// 8647                  cmp     ax, 6 ;~ 04AB:0443
cs=0x4ab;eip=0x000446; 	J(JGE(loc_1350c));	// 8648                  jge     short loc_1350C ;~ 04AB:0446
cs=0x4ab;eip=0x000448; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8649                  mov     al, [bp+arg_0] ;~ 04AB:0448
cs=0x4ab;eip=0x00044b; 	T(AND(ax, 0x0FF));	// 8650                  and     ax, 0FFh ;~ 04AB:044B
cs=0x4ab;eip=0x00044e; 	X(PUSH(ax));	// 8651                  push    ax ;~ 04AB:044E
cs=0x4ab;eip=0x00044f; 	J(CALL(__dispatch_call,unk_23052));	// 8652                  call    near ptr unk_23052 ;~ 04AB:044F
cs=0x4ab;eip=0x000452; 	T(ADD(sp, 2));	// 8653                  add     sp, 2 ;~ 04AB:0452
cs=0x4ab;eip=0x000455; 	T(ADD(ax, 0x0B0));	// 8654                  add     ax, 0B0h ;~ 04AB:0455
cs=0x4ab;eip=0x000458; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 8655                  mov     [bp+var_4], ax ;~ 04AB:0458
cs=0x4ab;eip=0x00045b; 	T(bx = ax;);	// 8656                  mov     bx, ax ;~ 04AB:045B
cs=0x4ab;eip=0x00045d; 	T(MOV(al, *(raddr(ds,bx+0x0C32))));	// 8657                  mov     al, [bx+0C32h] ;~ 04AB:045D
cs=0x4ab;eip=0x000461; 	T(AND(ax, 0x0FF));	// 8658                  and     ax, 0FFh ;~ 04AB:0461
cs=0x4ab;eip=0x000464; 	T(OR(ax, 0x20));	// 8659                  or      ax, 20h ;~ 04AB:0464
cs=0x4ab;eip=0x000467; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 8660                  mov     [bp+var_2], al ;~ 04AB:0467
cs=0x4ab;eip=0x00046a; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 8661                  mov     al, [bp+var_2] ;~ 04AB:046A
cs=0x4ab;eip=0x00046d; 	T(AND(ax, 0x0FF));	// 8662                  and     ax, 0FFh ;~ 04AB:046D
cs=0x4ab;eip=0x000470; 	X(PUSH(ax));	// 8663                  push    ax ;~ 04AB:0470
cs=0x4ab;eip=0x000471; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 8664                  push    [bp+var_4] ;~ 04AB:0471
cs=0x4ab;eip=0x000474; 	J(CALL(__dispatch_call,unk_22a31));	// 8665                  call    near ptr unk_22A31 ;~ 04AB:0474
cs=0x4ab;eip=0x000477; 	T(ADD(sp, 4));	// 8666                  add     sp, 4 ;~ 04AB:0477
cs=0x4ab;eip=0x00047a; 	J(JMP(loc_1353e));	// 8667                  jmp     short loc_1353E ;~ 04AB:047A
loc_1350c:
	// 4598 
cs=0x4ab;eip=0x00047c; 	T(MOV(al, *(raddr(ds,0x0CEF))));	// 8671                  mov     al, ds:0CEFh ;~ 04AB:047C
cs=0x4ab;eip=0x00047f; 	T(AND(ax, 0x0FF));	// 8672                  and     ax, 0FFh ;~ 04AB:047F
cs=0x4ab;eip=0x000482; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 8673                  mov     [bp+var_6], ax ;~ 04AB:0482
cs=0x4ab;eip=0x000485; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8674                  mov     al, [bp+arg_0] ;~ 04AB:0485
cs=0x4ab;eip=0x000488; 	T(AND(ax, 0x0FF));	// 8675                  and     ax, 0FFh ;~ 04AB:0488
cs=0x4ab;eip=0x00048b; 	T(bx = ax;);	// 8676                  mov     bx, ax ;~ 04AB:048B
cs=0x4ab;eip=0x00048d; 	T(ADD(bx, 0x0FFFA));	// 8677                  add     bx, 0FFFAh ;~ 04AB:048D
cs=0x4ab;eip=0x000490; 	T(MOV(al, *(raddr(ds,bx+0x28C))));	// 8678                  mov     al, [bx+28Ch] ;~ 04AB:0490
cs=0x4ab;eip=0x000494; 	T(CBW);	// 8679                  cbw ;~ 04AB:0494
cs=0x4ab;eip=0x000495; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_6))));	// 8680                  mov     cx, [bp+var_6] ;~ 04AB:0495
cs=0x4ab;eip=0x000498; 	T(OR(cx, ax));	// 8681                  or      cx, ax ;~ 04AB:0498
cs=0x4ab;eip=0x00049a; 	X(MOV(*(raddr(ss,bp+var_2)), cl));	// 8682                  mov     [bp+var_2], cl ;~ 04AB:049A
cs=0x4ab;eip=0x00049d; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 8683                  mov     al, [bp+var_2] ;~ 04AB:049D
cs=0x4ab;eip=0x0004a0; 	T(AND(ax, 0x0FF));	// 8684                  and     ax, 0FFh ;~ 04AB:04A0
cs=0x4ab;eip=0x0004a3; 	X(PUSH(ax));	// 8685                  push    ax ;~ 04AB:04A3
cs=0x4ab;eip=0x0004a4; 	T(ax = 0x0BD;);	// 8686                  mov     ax, 0BDh ;~ 04AB:04A4
cs=0x4ab;eip=0x0004a7; 	X(PUSH(ax));	// 8687                  push    ax ;~ 04AB:04A7
cs=0x4ab;eip=0x0004a8; 	J(CALL(__dispatch_call,unk_22a31));	// 8688                  call    near ptr unk_22A31 ;~ 04AB:04A8
cs=0x4ab;eip=0x0004ab; 	T(ADD(sp, 4));	// 8689                  add     sp, 4 ;~ 04AB:04AB
loc_1353e:
	// 4599 
cs=0x4ab;eip=0x0004ae; 	X(POP(di));	// 8693                  pop     di ;~ 04AB:04AE
cs=0x4ab;eip=0x0004af; 	X(POP(si));	// 8694                  pop     si ;~ 04AB:04AF
cs=0x4ab;eip=0x0004b0; 	T(sp = bp;);	// 8695                  mov     sp, bp ;~ 04AB:04B0
cs=0x4ab;eip=0x0004b2; 	X(POP(bp));	// 8696                  pop     bp ;~ 04AB:04B2
cs=0x4ab;eip=0x0004b3; 	J(RETN(0));	// 8697                  retn ;~ 04AB:04B3

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_133bb: 	goto loc_133bb;
        case m2c::kloc_133c6: 	goto loc_133c6;
        case m2c::kloc_1342c: 	goto loc_1342c;
        case m2c::kloc_1348f: 	goto loc_1348f;
        case m2c::kloc_13492: 	goto loc_13492;
        case m2c::kloc_134a5: 	goto loc_134a5;
        case m2c::kloc_1350c: 	goto loc_1350c;
        case m2c::kloc_1353e: 	goto loc_1353e;
        case m2c::ksub_13398: 	goto sub_13398;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13544(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13544:
    _begin:
#undef var_2
#define var_2 -2
	// 8707 var_2           = byte ptr -2 ;~ 04AB:04B4
cs=0x4ab;eip=0x0004b4; 	X(PUSH(bp));	// 8709                  push    bp ;~ 04AB:04B4
cs=0x4ab;eip=0x0004b5; 	T(bp = sp;);	// 8710                  mov     bp, sp ;~ 04AB:04B5
cs=0x4ab;eip=0x0004b7; 	T(SUB(sp, 2));	// 8711                  sub     sp, 2 ;~ 04AB:04B7
cs=0x4ab;eip=0x0004bb; 	T(MOV(al, *(raddr(ds,0x0CEF))));	// 8712                  mov     al, ds:0CEFh ;~ 04AB:04BB
cs=0x4ab;eip=0x0004be; 	T(AND(ax, 0x3F));	// 8713                  and     ax, 3Fh ;~ 04AB:04BE
cs=0x4ab;eip=0x0004c1; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 8714                  mov     [bp+var_2], al ;~ 04AB:04C1
cs=0x4ab;eip=0x0004c4; 	T(MOV(al, *(raddr(ds,0x2AA))));	// 8715                  mov     al, ds:2AAh ;~ 04AB:04C4
cs=0x4ab;eip=0x0004c7; 	T(AND(ax, 0x0FF));	// 8716                  and     ax, 0FFh ;~ 04AB:04C7
cs=0x4ab;eip=0x0004ca; 	J(JZ(loc_13562));	// 8717                  jz      short loc_13562 ;~ 04AB:04CA
cs=0x4ab;eip=0x0004cc; 	T(ax = 0x80;);	// 8718                  mov     ax, 80h ;~ 04AB:04CC
cs=0x4ab;eip=0x0004cf; 	J(JMP(loc_13564));	// 8719                  jmp     short loc_13564 ;~ 04AB:04CF
loc_13562:
	// 4600 
cs=0x4ab;eip=0x0004d2; 	T(XOR(ax, ax));	// 8724                  xor     ax, ax ;~ 04AB:04D2
loc_13564:
	// 4601 
cs=0x4ab;eip=0x0004d4; 	X(OR(*(raddr(ss,bp+var_2)), al));	// 8727                  or      [bp+var_2], al ;~ 04AB:04D4
cs=0x4ab;eip=0x0004d7; 	T(MOV(al, *(raddr(ds,0x2AB))));	// 8728                  mov     al, ds:2ABh ;~ 04AB:04D7
cs=0x4ab;eip=0x0004da; 	T(AND(ax, 0x0FF));	// 8729                  and     ax, 0FFh ;~ 04AB:04DA
cs=0x4ab;eip=0x0004dd; 	J(JZ(loc_13574));	// 8730                  jz      short loc_13574 ;~ 04AB:04DD
cs=0x4ab;eip=0x0004df; 	T(ax = 0x40;);	// 8731                  mov     ax, 40h ; '@' ;~ 04AB:04DF
cs=0x4ab;eip=0x0004e2; 	J(JMP(loc_13576));	// 8732                  jmp     short loc_13576 ;~ 04AB:04E2
loc_13574:
	// 4602 
cs=0x4ab;eip=0x0004e4; 	T(XOR(ax, ax));	// 8736                  xor     ax, ax ;~ 04AB:04E4
loc_13576:
	// 4603 
cs=0x4ab;eip=0x0004e6; 	X(OR(*(raddr(ss,bp+var_2)), al));	// 8739                  or      [bp+var_2], al ;~ 04AB:04E6
cs=0x4ab;eip=0x0004e9; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 8740                  mov     al, [bp+var_2] ;~ 04AB:04E9
cs=0x4ab;eip=0x0004ec; 	T(AND(ax, 0x0FF));	// 8741                  and     ax, 0FFh ;~ 04AB:04EC
cs=0x4ab;eip=0x0004ef; 	X(PUSH(ax));	// 8742                  push    ax ;~ 04AB:04EF
cs=0x4ab;eip=0x0004f0; 	T(ax = 0x0BD;);	// 8743                  mov     ax, 0BDh ;~ 04AB:04F0
cs=0x4ab;eip=0x0004f3; 	X(PUSH(ax));	// 8744                  push    ax ;~ 04AB:04F3
cs=0x4ab;eip=0x0004f4; 	J(CALL(__dispatch_call,unk_22a31));	// 8745                  call    near ptr unk_22A31 ;~ 04AB:04F4
cs=0x4ab;eip=0x0004f7; 	T(ADD(sp, 4));	// 8746                  add     sp, 4 ;~ 04AB:04F7
cs=0x4ab;eip=0x0004fa; 	T(sp = bp;);	// 8747                  mov     sp, bp ;~ 04AB:04FA
cs=0x4ab;eip=0x0004fc; 	X(POP(bp));	// 8748                  pop     bp ;~ 04AB:04FC
cs=0x4ab;eip=0x0004fd; 	J(RETN(0));	// 8749                  retn ;~ 04AB:04FD

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_13562: 	goto loc_13562;
        case m2c::kloc_13564: 	goto loc_13564;
        case m2c::kloc_13574: 	goto loc_13574;
        case m2c::kloc_13576: 	goto loc_13576;
        case m2c::ksub_13544: 	goto sub_13544;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1358e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1358e:
    _begin:
cs=0x4ab;eip=0x0004fe; 	T(MOV(al, *(raddr(ds,0x2AC))));	// 8757                  mov     al, ds:2ACh ;~ 04AB:04FE
cs=0x4ab;eip=0x000501; 	T(AND(ax, 0x0FF));	// 8758                  and     ax, 0FFh ;~ 04AB:0501
cs=0x4ab;eip=0x000504; 	J(JZ(loc_1359c));	// 8759                  jz      short loc_1359C ;~ 04AB:0504
cs=0x4ab;eip=0x000506; 	T(ax = 0x40;);	// 8760                  mov     ax, 40h ; '@' ;~ 04AB:0506
cs=0x4ab;eip=0x000509; 	J(JMP(loc_1359e));	// 8761                  jmp     short loc_1359E ;~ 04AB:0509
loc_1359c:
	// 4604 
cs=0x4ab;eip=0x00050c; 	T(XOR(ax, ax));	// 8766                  xor     ax, ax ;~ 04AB:050C
loc_1359e:
	// 4605 
cs=0x4ab;eip=0x00050e; 	X(PUSH(ax));	// 8769                  push    ax ;~ 04AB:050E
cs=0x4ab;eip=0x00050f; 	T(ax = 8;);	// 8770                  mov     ax, 8 ;~ 04AB:050F
cs=0x4ab;eip=0x000512; 	X(PUSH(ax));	// 8771                  push    ax ;~ 04AB:0512
cs=0x4ab;eip=0x000513; 	J(CALL(__dispatch_call,unk_22a31));	// 8772                  call    near ptr unk_22A31 ;~ 04AB:0513
cs=0x4ab;eip=0x000516; 	T(ADD(sp, 4));	// 8773                  add     sp, 4 ;~ 04AB:0516
cs=0x4ab;eip=0x000519; 	J(RETN(0));	// 8774                  retn ;~ 04AB:0519

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1359c: 	goto loc_1359c;
        case m2c::kloc_1359e: 	goto loc_1359e;
        case m2c::ksub_1358e: 	goto sub_1358e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_135aa(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_135aa:
    _begin:
#undef var_4
#define var_4 -4
	// 8784 var_4           = word ptr -4 ;~ 04AB:051A
#undef var_2
#define var_2 -2
	// 8785 var_2           = word ptr -2 ;~ 04AB:051A
cs=0x4ab;eip=0x00051a; 	X(PUSH(bp));	// 8787                  push    bp ;~ 04AB:051A
cs=0x4ab;eip=0x00051b; 	T(bp = sp;);	// 8788                  mov     bp, sp ;~ 04AB:051B
cs=0x4ab;eip=0x00051d; 	T(SUB(sp, 4));	// 8789                  sub     sp, 4 ;~ 04AB:051D
cs=0x4ab;eip=0x000521; 	T(MOV(ax, *(dw*)(raddr(ds,0x0D8C))));	// 8790                  mov     ax, ds:0D8Ch ;~ 04AB:0521
cs=0x4ab;eip=0x000524; 	T(ADD(ax, 0x40));	// 8791                  add     ax, 40h ; '@' ;~ 04AB:0524
cs=0x4ab;eip=0x000527; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 8792                  mov     [bp+var_4], ax ;~ 04AB:0527
cs=0x4ab;eip=0x00052a; 	T(MOV(bx, *(dw*)(raddr(ds,0x0D8E))));	// 8793                  mov     bx, ds:0D8Eh ;~ 04AB:052A
cs=0x4ab;eip=0x00052e; 	T(MOV(al, *(raddr(ds,bx+6))));	// 8794                  mov     al, [bx+6] ;~ 04AB:052E
cs=0x4ab;eip=0x000531; 	T(AND(ax, 0x3F));	// 8795                  and     ax, 3Fh ;~ 04AB:0531
cs=0x4ab;eip=0x000534; 	T(cx = 0x3F;);	// 8796                  mov     cx, 3Fh ; '?' ;~ 04AB:0534
cs=0x4ab;eip=0x000537; 	T(SUB(cx, ax));	// 8797                  sub     cx, ax ;~ 04AB:0537
cs=0x4ab;eip=0x000539; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), cx));	// 8798                  mov     [bp+var_2], cx ;~ 04AB:0539
cs=0x4ab;eip=0x00053c; 	T(MOV(bx, *(dw*)(raddr(ds,0x0D8E))));	// 8799                  mov     bx, ds:0D8Eh ;~ 04AB:053C
cs=0x4ab;eip=0x000540; 	T(MOV(al, *(raddr(ds,bx+7))));	// 8800                  mov     al, [bx+7] ;~ 04AB:0540
cs=0x4ab;eip=0x000543; 	T(AND(ax, 0x0FF));	// 8801                  and     ax, 0FFh ;~ 04AB:0543
cs=0x4ab;eip=0x000546; 	T(cx = 6;);	// 8802                  mov     cx, 6 ;~ 04AB:0546
cs=0x4ab;eip=0x000549; 	T(SHL(ax, cl));	// 8803                  shl     ax, cl ;~ 04AB:0549
cs=0x4ab;eip=0x00054b; 	X(OR(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8804                  or      [bp+var_2], ax ;~ 04AB:054B
cs=0x4ab;eip=0x00054e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 8805                  push    [bp+var_2] ;~ 04AB:054E
cs=0x4ab;eip=0x000551; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 8806                  mov     ax, [bp+var_4] ;~ 04AB:0551
cs=0x4ab;eip=0x000554; 	X(PUSH(ax));	// 8807                  push    ax ;~ 04AB:0554
cs=0x4ab;eip=0x000555; 	J(CALL(__dispatch_call,unk_22a31));	// 8808                  call    near ptr unk_22A31 ;~ 04AB:0555
cs=0x4ab;eip=0x000558; 	T(ADD(sp, 4));	// 8809                  add     sp, 4 ;~ 04AB:0558
cs=0x4ab;eip=0x00055b; 	T(sp = bp;);	// 8810                  mov     sp, bp ;~ 04AB:055B
cs=0x4ab;eip=0x00055d; 	X(POP(bp));	// 8811                  pop     bp ;~ 04AB:055D
cs=0x4ab;eip=0x00055e; 	J(RETN(0));	// 8812                  retn ;~ 04AB:055E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_135aa: 	goto sub_135aa;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_135f0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_135f0:
    _begin:
#undef var_4
#define var_4 -4
	// 8824 var_4           = word ptr -4 ;~ 04AB:0560
#undef var_2
#define var_2 -2
	// 8825 var_2           = word ptr -2 ;~ 04AB:0560
cs=0x4ab;eip=0x000560; 	X(PUSH(bp));	// 8827                  push    bp ;~ 04AB:0560
cs=0x4ab;eip=0x000561; 	T(bp = sp;);	// 8828                  mov     bp, sp ;~ 04AB:0561
cs=0x4ab;eip=0x000563; 	T(SUB(sp, 4));	// 8829                  sub     sp, 4 ;~ 04AB:0563
cs=0x4ab;eip=0x000567; 	T(MOV(ax, *(dw*)(raddr(ds,0x0D8A))));	// 8830                  mov     ax, ds:0D8Ah ;~ 04AB:0567
cs=0x4ab;eip=0x00056a; 	T(ADD(ax, 0x0C0));	// 8831                  add     ax, 0C0h ;~ 04AB:056A
cs=0x4ab;eip=0x00056d; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 8832                  mov     [bp+var_4], ax ;~ 04AB:056D
cs=0x4ab;eip=0x000570; 	T(MOV(bx, *(dw*)(raddr(ds,0x0D8E))));	// 8833                  mov     bx, ds:0D8Eh ;~ 04AB:0570
cs=0x4ab;eip=0x000574; 	T(MOV(al, *(raddr(ds,bx+0x0A))));	// 8834                  mov     al, [bx+0Ah] ;~ 04AB:0574
cs=0x4ab;eip=0x000577; 	T(AND(ax, 0x0FF));	// 8835                  and     ax, 0FFh ;~ 04AB:0577
cs=0x4ab;eip=0x00057a; 	T(SHL(ax, 1));	// 8836                  shl     ax, 1 ;~ 04AB:057A
cs=0x4ab;eip=0x00057c; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8837                  mov     [bp+var_2], ax ;~ 04AB:057C
cs=0x4ab;eip=0x00057f; 	T(MOV(bx, *(dw*)(raddr(ds,0x0D8E))));	// 8838                  mov     bx, ds:0D8Eh ;~ 04AB:057F
cs=0x4ab;eip=0x000583; 	T(MOV(al, *(raddr(ds,bx+0x0D))));	// 8839                  mov     al, [bx+0Dh] ;~ 04AB:0583
cs=0x4ab;eip=0x000586; 	T(AND(ax, 0x0FF));	// 8840                  and     ax, 0FFh ;~ 04AB:0586
cs=0x4ab;eip=0x000589; 	J(JZ(loc_13620));	// 8841                  jz      short loc_13620 ;~ 04AB:0589
cs=0x4ab;eip=0x00058b; 	T(XOR(ax, ax));	// 8842                  xor     ax, ax ;~ 04AB:058B
cs=0x4ab;eip=0x00058d; 	J(JMP(loc_13623));	// 8843                  jmp     short loc_13623 ;~ 04AB:058D
loc_13620:
	// 4606 
cs=0x4ab;eip=0x000590; 	T(ax = 1;);	// 8848                  mov     ax, 1 ;~ 04AB:0590
loc_13623:
	// 4607 
cs=0x4ab;eip=0x000593; 	X(OR(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8851                  or      [bp+var_2], ax ;~ 04AB:0593
cs=0x4ab;eip=0x000596; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 8852                  push    [bp+var_2] ;~ 04AB:0596
cs=0x4ab;eip=0x000599; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 8853                  mov     ax, [bp+var_4] ;~ 04AB:0599
cs=0x4ab;eip=0x00059c; 	X(PUSH(ax));	// 8854                  push    ax ;~ 04AB:059C
cs=0x4ab;eip=0x00059d; 	J(CALL(__dispatch_call,unk_22a31));	// 8855                  call    near ptr unk_22A31 ;~ 04AB:059D
cs=0x4ab;eip=0x0005a0; 	T(ADD(sp, 4));	// 8856                  add     sp, 4 ;~ 04AB:05A0
cs=0x4ab;eip=0x0005a3; 	T(sp = bp;);	// 8857                  mov     sp, bp ;~ 04AB:05A3
cs=0x4ab;eip=0x0005a5; 	X(POP(bp));	// 8858                  pop     bp ;~ 04AB:05A5
cs=0x4ab;eip=0x0005a6; 	J(RETN(0));	// 8859                  retn ;~ 04AB:05A6

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_13620: 	goto loc_13620;
        case m2c::kloc_13623: 	goto loc_13623;
        case m2c::ksub_135f0: 	goto sub_135f0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13638(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13638:
    _begin:
#undef var_4
#define var_4 -4
	// 8871 var_4           = word ptr -4 ;~ 04AB:05A8
#undef var_2
#define var_2 -2
	// 8872 var_2           = word ptr -2 ;~ 04AB:05A8
cs=0x4ab;eip=0x0005a8; 	X(PUSH(bp));	// 8874                  push    bp ;~ 04AB:05A8
cs=0x4ab;eip=0x0005a9; 	T(bp = sp;);	// 8875                  mov     bp, sp ;~ 04AB:05A9
cs=0x4ab;eip=0x0005ab; 	T(SUB(sp, 4));	// 8876                  sub     sp, 4 ;~ 04AB:05AB
cs=0x4ab;eip=0x0005af; 	T(MOV(ax, *(dw*)(raddr(ds,0x0D8C))));	// 8877                  mov     ax, ds:0D8Ch ;~ 04AB:05AF
cs=0x4ab;eip=0x0005b2; 	T(ADD(ax, 0x60));	// 8878                  add     ax, 60h ; '`' ;~ 04AB:05B2
cs=0x4ab;eip=0x0005b5; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 8879                  mov     [bp+var_4], ax ;~ 04AB:05B5
cs=0x4ab;eip=0x0005b8; 	T(MOV(bx, *(dw*)(raddr(ds,0x0D8E))));	// 8880                  mov     bx, ds:0D8Eh ;~ 04AB:05B8
cs=0x4ab;eip=0x0005bc; 	T(MOV(al, *(raddr(ds,bx))));	// 8881                  mov     al, [bx] ;~ 04AB:05BC
cs=0x4ab;eip=0x0005be; 	T(AND(ax, 0x0FF));	// 8882                  and     ax, 0FFh ;~ 04AB:05BE
cs=0x4ab;eip=0x0005c1; 	T(SHL(ax, 1));	// 8883                  shl     ax, 1 ;~ 04AB:05C1
cs=0x4ab;eip=0x0005c3; 	T(SHL(ax, 1));	// 8884                  shl     ax, 1 ;~ 04AB:05C3
cs=0x4ab;eip=0x0005c5; 	T(SHL(ax, 1));	// 8885                  shl     ax, 1 ;~ 04AB:05C5
cs=0x4ab;eip=0x0005c7; 	T(SHL(ax, 1));	// 8886                  shl     ax, 1 ;~ 04AB:05C7
cs=0x4ab;eip=0x0005c9; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8887                  mov     [bp+var_2], ax ;~ 04AB:05C9
cs=0x4ab;eip=0x0005cc; 	T(MOV(bx, *(dw*)(raddr(ds,0x0D8E))));	// 8888                  mov     bx, ds:0D8Eh ;~ 04AB:05CC
cs=0x4ab;eip=0x0005d0; 	T(MOV(al, *(raddr(ds,bx+1))));	// 8889                  mov     al, [bx+1] ;~ 04AB:05D0
cs=0x4ab;eip=0x0005d3; 	T(AND(ax, 0x0F));	// 8890                  and     ax, 0Fh ;~ 04AB:05D3
cs=0x4ab;eip=0x0005d6; 	X(OR(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8891                  or      [bp+var_2], ax ;~ 04AB:05D6
cs=0x4ab;eip=0x0005d9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 8892                  push    [bp+var_2] ;~ 04AB:05D9
cs=0x4ab;eip=0x0005dc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 8893                  mov     ax, [bp+var_4] ;~ 04AB:05DC
cs=0x4ab;eip=0x0005df; 	X(PUSH(ax));	// 8894                  push    ax ;~ 04AB:05DF
cs=0x4ab;eip=0x0005e0; 	J(CALL(__dispatch_call,unk_22a31));	// 8895                  call    near ptr unk_22A31 ;~ 04AB:05E0
cs=0x4ab;eip=0x0005e3; 	T(ADD(sp, 4));	// 8896                  add     sp, 4 ;~ 04AB:05E3
cs=0x4ab;eip=0x0005e6; 	T(sp = bp;);	// 8897                  mov     sp, bp ;~ 04AB:05E6
cs=0x4ab;eip=0x0005e8; 	X(POP(bp));	// 8898                  pop     bp ;~ 04AB:05E8
cs=0x4ab;eip=0x0005e9; 	J(RETN(0));	// 8899                  retn ;~ 04AB:05E9

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_13638: 	goto sub_13638;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1367a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1367a:
    _begin:
#undef var_4
#define var_4 -4
	// 8909 var_4           = word ptr -4 ;~ 04AB:05EA
#undef var_2
#define var_2 -2
	// 8910 var_2           = word ptr -2 ;~ 04AB:05EA
cs=0x4ab;eip=0x0005ea; 	X(PUSH(bp));	// 8912                  push    bp ;~ 04AB:05EA
cs=0x4ab;eip=0x0005eb; 	T(bp = sp;);	// 8913                  mov     bp, sp ;~ 04AB:05EB
cs=0x4ab;eip=0x0005ed; 	T(SUB(sp, 4));	// 8914                  sub     sp, 4 ;~ 04AB:05ED
cs=0x4ab;eip=0x0005f1; 	T(MOV(ax, *(dw*)(raddr(ds,0x0D8C))));	// 8915                  mov     ax, ds:0D8Ch ;~ 04AB:05F1
cs=0x4ab;eip=0x0005f4; 	T(ADD(ax, 0x80));	// 8916                  add     ax, 80h ;~ 04AB:05F4
cs=0x4ab;eip=0x0005f7; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 8917                  mov     [bp+var_4], ax ;~ 04AB:05F7
cs=0x4ab;eip=0x0005fa; 	T(MOV(bx, *(dw*)(raddr(ds,0x0D8E))));	// 8918                  mov     bx, ds:0D8Eh ;~ 04AB:05FA
cs=0x4ab;eip=0x0005fe; 	T(MOV(al, *(raddr(ds,bx+2))));	// 8919                  mov     al, [bx+2] ;~ 04AB:05FE
cs=0x4ab;eip=0x000601; 	T(AND(ax, 0x0FF));	// 8920                  and     ax, 0FFh ;~ 04AB:0601
cs=0x4ab;eip=0x000604; 	T(SHL(ax, 1));	// 8921                  shl     ax, 1 ;~ 04AB:0604
cs=0x4ab;eip=0x000606; 	T(SHL(ax, 1));	// 8922                  shl     ax, 1 ;~ 04AB:0606
cs=0x4ab;eip=0x000608; 	T(SHL(ax, 1));	// 8923                  shl     ax, 1 ;~ 04AB:0608
cs=0x4ab;eip=0x00060a; 	T(SHL(ax, 1));	// 8924                  shl     ax, 1 ;~ 04AB:060A
cs=0x4ab;eip=0x00060c; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8925                  mov     [bp+var_2], ax ;~ 04AB:060C
cs=0x4ab;eip=0x00060f; 	T(MOV(bx, *(dw*)(raddr(ds,0x0D8E))));	// 8926                  mov     bx, ds:0D8Eh ;~ 04AB:060F
cs=0x4ab;eip=0x000613; 	T(MOV(al, *(raddr(ds,bx+3))));	// 8927                  mov     al, [bx+3] ;~ 04AB:0613
cs=0x4ab;eip=0x000616; 	T(AND(ax, 0x0F));	// 8928                  and     ax, 0Fh ;~ 04AB:0616
cs=0x4ab;eip=0x000619; 	X(OR(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8929                  or      [bp+var_2], ax ;~ 04AB:0619
cs=0x4ab;eip=0x00061c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 8930                  push    [bp+var_2] ;~ 04AB:061C
cs=0x4ab;eip=0x00061f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 8931                  mov     ax, [bp+var_4] ;~ 04AB:061F
cs=0x4ab;eip=0x000622; 	X(PUSH(ax));	// 8932                  push    ax ;~ 04AB:0622
cs=0x4ab;eip=0x000623; 	J(CALL(__dispatch_call,unk_22a31));	// 8933                  call    near ptr unk_22A31 ;~ 04AB:0623
cs=0x4ab;eip=0x000626; 	T(ADD(sp, 4));	// 8934                  add     sp, 4 ;~ 04AB:0626
cs=0x4ab;eip=0x000629; 	T(sp = bp;);	// 8935                  mov     sp, bp ;~ 04AB:0629
cs=0x4ab;eip=0x00062b; 	X(POP(bp));	// 8936                  pop     bp ;~ 04AB:062B
cs=0x4ab;eip=0x00062c; 	J(RETN(0));	// 8937                  retn ;~ 04AB:062C

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_1367a: 	goto sub_1367a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_136be(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_136be:
    _begin:
#undef var_4
#define var_4 -4
	// 8949 var_4           = word ptr -4 ;~ 04AB:062E
#undef var_2
#define var_2 -2
	// 8950 var_2           = word ptr -2 ;~ 04AB:062E
cs=0x4ab;eip=0x00062e; 	X(PUSH(bp));	// 8952                  push    bp ;~ 04AB:062E
cs=0x4ab;eip=0x00062f; 	T(bp = sp;);	// 8953                  mov     bp, sp ;~ 04AB:062F
cs=0x4ab;eip=0x000631; 	T(SUB(sp, 4));	// 8954                  sub     sp, 4 ;~ 04AB:0631
cs=0x4ab;eip=0x000635; 	T(MOV(ax, *(dw*)(raddr(ds,0x0D8C))));	// 8955                  mov     ax, ds:0D8Ch ;~ 04AB:0635
cs=0x4ab;eip=0x000638; 	T(ADD(ax, 0x20));	// 8956                  add     ax, 20h ; ' ' ;~ 04AB:0638
cs=0x4ab;eip=0x00063b; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 8957                  mov     [bp+var_4], ax ;~ 04AB:063B
cs=0x4ab;eip=0x00063e; 	T(MOV(bx, *(dw*)(raddr(ds,0x0D8E))));	// 8958                  mov     bx, ds:0D8Eh ;~ 04AB:063E
cs=0x4ab;eip=0x000642; 	T(MOV(al, *(raddr(ds,bx+0x0B))));	// 8959                  mov     al, [bx+0Bh] ;~ 04AB:0642
cs=0x4ab;eip=0x000645; 	T(AND(ax, 0x0FF));	// 8960                  and     ax, 0FFh ;~ 04AB:0645
cs=0x4ab;eip=0x000648; 	J(JZ(loc_136e0));	// 8961                  jz      short loc_136E0 ;~ 04AB:0648
cs=0x4ab;eip=0x00064a; 	T(ax = 0x80;);	// 8962                  mov     ax, 80h ;~ 04AB:064A
cs=0x4ab;eip=0x00064d; 	J(JMP(loc_136e2));	// 8963                  jmp     short loc_136E2 ;~ 04AB:064D
loc_136e0:
	// 4608 
cs=0x4ab;eip=0x000650; 	T(XOR(ax, ax));	// 8968                  xor     ax, ax ;~ 04AB:0650
loc_136e2:
	// 4609 
cs=0x4ab;eip=0x000652; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8971                  mov     [bp+var_2], ax ;~ 04AB:0652
cs=0x4ab;eip=0x000655; 	T(MOV(bx, *(dw*)(raddr(ds,0x0D8E))));	// 8972                  mov     bx, ds:0D8Eh ;~ 04AB:0655
cs=0x4ab;eip=0x000659; 	T(MOV(al, *(raddr(ds,bx+0x0C))));	// 8973                  mov     al, [bx+0Ch] ;~ 04AB:0659
cs=0x4ab;eip=0x00065c; 	T(AND(ax, 0x0FF));	// 8974                  and     ax, 0FFh ;~ 04AB:065C
cs=0x4ab;eip=0x00065f; 	J(JZ(loc_136f6));	// 8975                  jz      short loc_136F6 ;~ 04AB:065F
cs=0x4ab;eip=0x000661; 	T(ax = 0x40;);	// 8976                  mov     ax, 40h ; '@' ;~ 04AB:0661
cs=0x4ab;eip=0x000664; 	J(JMP(loc_136f8));	// 8977                  jmp     short loc_136F8 ;~ 04AB:0664
loc_136f6:
	// 4610 
cs=0x4ab;eip=0x000666; 	T(XOR(ax, ax));	// 8981                  xor     ax, ax ;~ 04AB:0666
loc_136f8:
	// 4611 
cs=0x4ab;eip=0x000668; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8984                  add     [bp+var_2], ax ;~ 04AB:0668
cs=0x4ab;eip=0x00066b; 	T(MOV(bx, *(dw*)(raddr(ds,0x0D8E))));	// 8985                  mov     bx, ds:0D8Eh ;~ 04AB:066B
cs=0x4ab;eip=0x00066f; 	T(MOV(al, *(raddr(ds,bx+4))));	// 8986                  mov     al, [bx+4] ;~ 04AB:066F
cs=0x4ab;eip=0x000672; 	T(AND(ax, 0x0FF));	// 8987                  and     ax, 0FFh ;~ 04AB:0672
cs=0x4ab;eip=0x000675; 	J(JZ(loc_1370c));	// 8988                  jz      short loc_1370C ;~ 04AB:0675
cs=0x4ab;eip=0x000677; 	T(ax = 0x20;);	// 8989                  mov     ax, 20h ; ' ' ;~ 04AB:0677
cs=0x4ab;eip=0x00067a; 	J(JMP(loc_1370e));	// 8990                  jmp     short loc_1370E ;~ 04AB:067A
loc_1370c:
	// 4612 
cs=0x4ab;eip=0x00067c; 	T(XOR(ax, ax));	// 8994                  xor     ax, ax ;~ 04AB:067C
loc_1370e:
	// 4613 
cs=0x4ab;eip=0x00067e; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8997                  add     [bp+var_2], ax ;~ 04AB:067E
cs=0x4ab;eip=0x000681; 	T(MOV(bx, *(dw*)(raddr(ds,0x0D8E))));	// 8998                  mov     bx, ds:0D8Eh ;~ 04AB:0681
cs=0x4ab;eip=0x000685; 	T(MOV(al, *(raddr(ds,bx+5))));	// 8999                  mov     al, [bx+5] ;~ 04AB:0685
cs=0x4ab;eip=0x000688; 	T(AND(ax, 0x0FF));	// 9000                  and     ax, 0FFh ;~ 04AB:0688
cs=0x4ab;eip=0x00068b; 	J(JZ(loc_13722));	// 9001                  jz      short loc_13722 ;~ 04AB:068B
cs=0x4ab;eip=0x00068d; 	T(ax = 0x10;);	// 9002                  mov     ax, 10h ;~ 04AB:068D
cs=0x4ab;eip=0x000690; 	J(JMP(loc_13724));	// 9003                  jmp     short loc_13724 ;~ 04AB:0690
loc_13722:
	// 4614 
cs=0x4ab;eip=0x000692; 	T(XOR(ax, ax));	// 9007                  xor     ax, ax ;~ 04AB:0692
loc_13724:
	// 4615 
cs=0x4ab;eip=0x000694; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9010                  add     [bp+var_2], ax ;~ 04AB:0694
cs=0x4ab;eip=0x000697; 	T(MOV(bx, *(dw*)(raddr(ds,0x0D8E))));	// 9011                  mov     bx, ds:0D8Eh ;~ 04AB:0697
cs=0x4ab;eip=0x00069b; 	T(MOV(al, *(raddr(ds,bx+9))));	// 9012                  mov     al, [bx+9] ;~ 04AB:069B
cs=0x4ab;eip=0x00069e; 	T(AND(ax, 0x0F));	// 9013                  and     ax, 0Fh ;~ 04AB:069E
cs=0x4ab;eip=0x0006a1; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9014                  add     [bp+var_2], ax ;~ 04AB:06A1
cs=0x4ab;eip=0x0006a4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 9015                  push    [bp+var_2] ;~ 04AB:06A4
cs=0x4ab;eip=0x0006a7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 9016                  mov     ax, [bp+var_4] ;~ 04AB:06A7
cs=0x4ab;eip=0x0006aa; 	X(PUSH(ax));	// 9017                  push    ax ;~ 04AB:06AA
cs=0x4ab;eip=0x0006ab; 	J(CALL(__dispatch_call,unk_22a31));	// 9018                  call    near ptr unk_22A31 ;~ 04AB:06AB
cs=0x4ab;eip=0x0006ae; 	T(ADD(sp, 4));	// 9019                  add     sp, 4 ;~ 04AB:06AE
cs=0x4ab;eip=0x0006b1; 	T(sp = bp;);	// 9020                  mov     sp, bp ;~ 04AB:06B1
cs=0x4ab;eip=0x0006b3; 	X(POP(bp));	// 9021                  pop     bp ;~ 04AB:06B3
cs=0x4ab;eip=0x0006b4; 	J(RETN(0));	// 9022                  retn ;~ 04AB:06B4

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_136e0: 	goto loc_136e0;
        case m2c::kloc_136e2: 	goto loc_136e2;
        case m2c::kloc_136f6: 	goto loc_136f6;
        case m2c::kloc_136f8: 	goto loc_136f8;
        case m2c::kloc_1370c: 	goto loc_1370c;
        case m2c::kloc_1370e: 	goto loc_1370e;
        case m2c::kloc_13722: 	goto loc_13722;
        case m2c::kloc_13724: 	goto loc_13724;
        case m2c::ksub_136be: 	goto sub_136be;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13746(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13746:
    _begin:
#undef var_2
#define var_2 -2
	// 9034 var_2           = word ptr -2 ;~ 04AB:06B6
cs=0x4ab;eip=0x0006b6; 	X(PUSH(bp));	// 9036                  push    bp ;~ 04AB:06B6
cs=0x4ab;eip=0x0006b7; 	T(bp = sp;);	// 9037                  mov     bp, sp ;~ 04AB:06B7
cs=0x4ab;eip=0x0006b9; 	T(SUB(sp, 2));	// 9038                  sub     sp, 2 ;~ 04AB:06B9
cs=0x4ab;eip=0x0006bd; 	T(MOV(ax, *(dw*)(raddr(ds,0x0D8C))));	// 9039                  mov     ax, ds:0D8Ch ;~ 04AB:06BD
cs=0x4ab;eip=0x0006c0; 	T(ADD(ax, 0x0E0));	// 9040                  add     ax, 0E0h ;~ 04AB:06C0
cs=0x4ab;eip=0x0006c3; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9041                  mov     [bp+var_2], ax ;~ 04AB:06C3
cs=0x4ab;eip=0x0006c6; 	T(MOV(bx, *(dw*)(raddr(ds,0x0D8E))));	// 9042                  mov     bx, ds:0D8Eh ;~ 04AB:06C6
cs=0x4ab;eip=0x0006ca; 	T(MOV(al, *(raddr(ds,bx+8))));	// 9043                  mov     al, [bx+8] ;~ 04AB:06CA
cs=0x4ab;eip=0x0006cd; 	T(AND(ax, 3));	// 9044                  and     ax, 3 ;~ 04AB:06CD
cs=0x4ab;eip=0x0006d0; 	X(PUSH(ax));	// 9045                  push    ax ;~ 04AB:06D0
cs=0x4ab;eip=0x0006d1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 9046                  push    [bp+var_2] ;~ 04AB:06D1
cs=0x4ab;eip=0x0006d4; 	J(CALL(__dispatch_call,unk_22a31));	// 9047                  call    near ptr unk_22A31 ;~ 04AB:06D4
cs=0x4ab;eip=0x0006d7; 	T(ADD(sp, 4));	// 9048                  add     sp, 4 ;~ 04AB:06D7
cs=0x4ab;eip=0x0006da; 	T(sp = bp;);	// 9049                  mov     sp, bp ;~ 04AB:06DA
cs=0x4ab;eip=0x0006dc; 	X(POP(bp));	// 9050                  pop     bp ;~ 04AB:06DC
cs=0x4ab;eip=0x0006dd; 	J(RETN(0));	// 9051                  retn ;~ 04AB:06DD

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_13746: 	goto sub_13746;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1376e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1376e:
    _begin:
cs=0x4ab;eip=0x0006de; 	J(CALL(sub_13544,0));	// 9060                  call    sub_13544 ;~ 04AB:06DE
cs=0x4ab;eip=0x0006e1; 	J(CALL(sub_1358e,0));	// 9061                  call    sub_1358E ;~ 04AB:06E1
cs=0x4ab;eip=0x0006e4; 	J(CALL(sub_135aa,0));	// 9062                  call    sub_135AA ;~ 04AB:06E4
cs=0x4ab;eip=0x0006e7; 	J(CALL(sub_135f0,0));	// 9063                  call    sub_135F0 ;~ 04AB:06E7
cs=0x4ab;eip=0x0006ea; 	J(CALL(sub_13638,0));	// 9064                  call    sub_13638 ;~ 04AB:06EA
cs=0x4ab;eip=0x0006ed; 	J(CALL(sub_1367a,0));	// 9065                  call    sub_1367A ;~ 04AB:06ED
cs=0x4ab;eip=0x0006f0; 	J(CALL(sub_136be,0));	// 9066                  call    sub_136BE ;~ 04AB:06F0
cs=0x4ab;eip=0x0006f3; 	J(CALL(sub_13746,0));	// 9067                  call    sub_13746 ;~ 04AB:06F3
cs=0x4ab;eip=0x0006f6; 	J(RETN(0));	// 9068                  retn ;~ 04AB:06F6

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_1376e: 	goto sub_1376e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13788(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13788:
    _begin:
#undef var_2
#define var_2 -2
	// 9081 var_2           = word ptr -2 ;~ 04AB:06F8
#undef arg_0
#define arg_0 4
	// 9082 arg_0           = byte ptr  4 ;~ 04AB:06F8
#undef arg_2
#define arg_2 6
	// 9083 arg_2           = byte ptr  6 ;~ 04AB:06F8
cs=0x4ab;eip=0x0006f8; 	X(PUSH(bp));	// 9085                  push    bp ;~ 04AB:06F8
cs=0x4ab;eip=0x0006f9; 	T(bp = sp;);	// 9086                  mov     bp, sp ;~ 04AB:06F9
cs=0x4ab;eip=0x0006fb; 	T(SUB(sp, 2));	// 9087                  sub     sp, 2 ;~ 04AB:06FB
cs=0x4ab;eip=0x0006ff; 	X(PUSH(si));	// 9088                  push    si ;~ 04AB:06FF
cs=0x4ab;eip=0x000700; 	X(PUSH(di));	// 9089                  push    di ;~ 04AB:0700
cs=0x4ab;eip=0x000701; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 9090                  mov     al, [bp+arg_0] ;~ 04AB:0701
cs=0x4ab;eip=0x000704; 	T(AND(ax, 0x0FF));	// 9091                  and     ax, 0FFh ;~ 04AB:0704
cs=0x4ab;eip=0x000707; 	X(PUSH(ax));	// 9092                  push    ax ;~ 04AB:0707
cs=0x4ab;eip=0x000708; 	J(CALL(__dispatch_call,unk_23052));	// 9093                  call    near ptr unk_23052 ;~ 04AB:0708
cs=0x4ab;eip=0x00070b; 	T(ADD(sp, 2));	// 9094                  add     sp, 2 ;~ 04AB:070B
cs=0x4ab;eip=0x00070e; 	X(MOV(*(dw*)(raddr(ds,0x0D8A)), ax));	// 9095                  mov     ds:0D8Ah, ax ;~ 04AB:070E
cs=0x4ab;eip=0x000711; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 9096                  mov     al, [bp+arg_2] ;~ 04AB:0711
cs=0x4ab;eip=0x000714; 	T(AND(ax, 0x0FF));	// 9097                  and     ax, 0FFh ;~ 04AB:0714
cs=0x4ab;eip=0x000717; 	T(cx = 0x2C;);	// 9098                  mov     cx, 2Ch ; ',' ;~ 04AB:0717
cs=0x4ab;eip=0x00071a; 	T(IMUL1_2(cx));	// 9099                  imul    cx ;~ 04AB:071A
cs=0x4ab;eip=0x00071c; 	T(cx = 0x2D6;);	// 9100                  mov     cx, 2D6h ;~ 04AB:071C
cs=0x4ab;eip=0x00071f; 	T(ADD(cx, ax));	// 9101                  add     cx, ax ;~ 04AB:071F
cs=0x4ab;eip=0x000721; 	X(MOV(*(dw*)(raddr(ds,0x0D8E)), cx));	// 9102                  mov     ds:0D8Eh, cx ;~ 04AB:0721
cs=0x4ab;eip=0x000725; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 9103                  mov     al, [bp+arg_0] ;~ 04AB:0725
cs=0x4ab;eip=0x000728; 	T(AND(ax, 0x0FF));	// 9104                  and     ax, 0FFh ;~ 04AB:0728
cs=0x4ab;eip=0x00072b; 	T(bx = ax;);	// 9105                  mov     bx, ax ;~ 04AB:072B
cs=0x4ab;eip=0x00072d; 	T(SHL(bx, 1));	// 9106                  shl     bx, 1 ;~ 04AB:072D
cs=0x4ab;eip=0x00072f; 	T(MOV(al, *(raddr(ds,bx+0x2AE))));	// 9107                  mov     al, [bx+2AEh] ;~ 04AB:072F
cs=0x4ab;eip=0x000733; 	T(CBW);	// 9108                  cbw ;~ 04AB:0733
cs=0x4ab;eip=0x000734; 	T(bx = ax;);	// 9109                  mov     bx, ax ;~ 04AB:0734
cs=0x4ab;eip=0x000736; 	T(MOV(al, *(raddr(ds,bx+0x2C4))));	// 9110                  mov     al, [bx+2C4h] ;~ 04AB:0736
cs=0x4ab;eip=0x00073a; 	T(CBW);	// 9111                  cbw ;~ 04AB:073A
cs=0x4ab;eip=0x00073b; 	X(MOV(*(dw*)(raddr(ds,0x0D8C)), ax));	// 9112                  mov     ds:0D8Ch, ax ;~ 04AB:073B
cs=0x4ab;eip=0x00073e; 	T(CMP(ax, 0x14));	// 9113                  cmp     ax, 14h ;~ 04AB:073E
cs=0x4ab;eip=0x000741; 	J(JC(loc_137d6));	// 9114                  jb      short loc_137D6 ;~ 04AB:0741
cs=0x4ab;eip=0x000743; 	J(JMP(loc_1385b));	// 9115                  jmp     loc_1385B ;~ 04AB:0743
loc_137d6:
	// 4616 
cs=0x4ab;eip=0x000746; 	J(CALL(sub_1376e,0));	// 9119                  call    sub_1376E ;~ 04AB:0746
cs=0x4ab;eip=0x000749; 	T(MOV(bx, *(dw*)(raddr(ds,0x0D8E))));	// 9120                  mov     bx, ds:0D8Eh ;~ 04AB:0749
cs=0x4ab;eip=0x00074d; 	T(MOV(al, *(raddr(ds,bx+0x0E))));	// 9121                  mov     al, [bx+0Eh] ;~ 04AB:074D
cs=0x4ab;eip=0x000750; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9122                  mov     [bp+var_2], ax ;~ 04AB:0750
cs=0x4ab;eip=0x000753; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 9123                  mov     al, [bp+arg_0] ;~ 04AB:0753
cs=0x4ab;eip=0x000756; 	T(AND(ax, 0x0FF));	// 9124                  and     ax, 0FFh ;~ 04AB:0756
cs=0x4ab;eip=0x000759; 	T(bx = ax;);	// 9125                  mov     bx, ax ;~ 04AB:0759
cs=0x4ab;eip=0x00075b; 	T(SHL(bx, 1));	// 9126                  shl     bx, 1 ;~ 04AB:075B
cs=0x4ab;eip=0x00075d; 	T(SHL(bx, 1));	// 9127                  shl     bx, 1 ;~ 04AB:075D
cs=0x4ab;eip=0x00075f; 	T(SHL(bx, 1));	// 9128                  shl     bx, 1 ;~ 04AB:075F
cs=0x4ab;eip=0x000761; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 9129                  mov     ax, [bp+var_2] ;~ 04AB:0761
cs=0x4ab;eip=0x000764; 	X(MOV(*(raddr(ds,bx+0x0D32)), al));	// 9130                  mov     [bx+0D32h], al ;~ 04AB:0764
cs=0x4ab;eip=0x000768; 	T(MOV(bx, *(dw*)(raddr(ds,0x0D8E))));	// 9131                  mov     bx, ds:0D8Eh ;~ 04AB:0768
cs=0x4ab;eip=0x00076c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x10))));	// 9132                  mov     ax, [bx+10h] ;~ 04AB:076C
cs=0x4ab;eip=0x00076f; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9133                  mov     [bp+var_2], ax ;~ 04AB:076F
cs=0x4ab;eip=0x000772; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 9134                  mov     al, [bp+arg_0] ;~ 04AB:0772
cs=0x4ab;eip=0x000775; 	T(AND(ax, 0x0FF));	// 9135                  and     ax, 0FFh ;~ 04AB:0775
cs=0x4ab;eip=0x000778; 	T(SHL(ax, 1));	// 9136                  shl     ax, 1 ;~ 04AB:0778
cs=0x4ab;eip=0x00077a; 	T(SHL(ax, 1));	// 9137                  shl     ax, 1 ;~ 04AB:077A
cs=0x4ab;eip=0x00077c; 	T(SHL(ax, 1));	// 9138                  shl     ax, 1 ;~ 04AB:077C
cs=0x4ab;eip=0x00077e; 	T(bx = 0x0D32;);	// 9139                  mov     bx, 0D32h ;~ 04AB:077E
cs=0x4ab;eip=0x000781; 	T(ADD(bx, ax));	// 9140                  add     bx, ax ;~ 04AB:0781
cs=0x4ab;eip=0x000783; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 9141                  mov     ax, [bp+var_2] ;~ 04AB:0783
cs=0x4ab;eip=0x000786; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 9142                  mov     [bx+2], ax ;~ 04AB:0786
cs=0x4ab;eip=0x000789; 	T(MOV(bx, *(dw*)(raddr(ds,0x0D8E))));	// 9143                  mov     bx, ds:0D8Eh ;~ 04AB:0789
cs=0x4ab;eip=0x00078d; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x12))));	// 9144                  mov     ax, [bx+12h] ;~ 04AB:078D
cs=0x4ab;eip=0x000790; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9145                  mov     [bp+var_2], ax ;~ 04AB:0790
cs=0x4ab;eip=0x000793; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 9146                  mov     al, [bp+arg_0] ;~ 04AB:0793
cs=0x4ab;eip=0x000796; 	T(AND(ax, 0x0FF));	// 9147                  and     ax, 0FFh ;~ 04AB:0796
cs=0x4ab;eip=0x000799; 	T(SHL(ax, 1));	// 9148                  shl     ax, 1 ;~ 04AB:0799
cs=0x4ab;eip=0x00079b; 	T(SHL(ax, 1));	// 9149                  shl     ax, 1 ;~ 04AB:079B
cs=0x4ab;eip=0x00079d; 	T(SHL(ax, 1));	// 9150                  shl     ax, 1 ;~ 04AB:079D
cs=0x4ab;eip=0x00079f; 	T(bx = 0x0D32;);	// 9151                  mov     bx, 0D32h ;~ 04AB:079F
cs=0x4ab;eip=0x0007a2; 	T(ADD(bx, ax));	// 9152                  add     bx, ax ;~ 04AB:07A2
cs=0x4ab;eip=0x0007a4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 9153                  mov     ax, [bp+var_2] ;~ 04AB:07A4
cs=0x4ab;eip=0x0007a7; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 9154                  mov     [bx+4], ax ;~ 04AB:07A7
cs=0x4ab;eip=0x0007aa; 	T(MOV(bx, *(dw*)(raddr(ds,0x0D8E))));	// 9155                  mov     bx, ds:0D8Eh ;~ 04AB:07AA
cs=0x4ab;eip=0x0007ae; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x14))));	// 9156                  mov     ax, [bx+14h] ;~ 04AB:07AE
cs=0x4ab;eip=0x0007b1; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9157                  mov     [bp+var_2], ax ;~ 04AB:07B1
cs=0x4ab;eip=0x0007b4; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 9158                  mov     al, [bp+arg_0] ;~ 04AB:07B4
cs=0x4ab;eip=0x0007b7; 	T(AND(ax, 0x0FF));	// 9159                  and     ax, 0FFh ;~ 04AB:07B7
cs=0x4ab;eip=0x0007ba; 	T(SHL(ax, 1));	// 9160                  shl     ax, 1 ;~ 04AB:07BA
cs=0x4ab;eip=0x0007bc; 	T(SHL(ax, 1));	// 9161                  shl     ax, 1 ;~ 04AB:07BC
cs=0x4ab;eip=0x0007be; 	T(SHL(ax, 1));	// 9162                  shl     ax, 1 ;~ 04AB:07BE
cs=0x4ab;eip=0x0007c0; 	T(bx = 0x0D32;);	// 9163                  mov     bx, 0D32h ;~ 04AB:07C0
cs=0x4ab;eip=0x0007c3; 	T(ADD(bx, ax));	// 9164                  add     bx, ax ;~ 04AB:07C3
cs=0x4ab;eip=0x0007c5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 9165                  mov     ax, [bp+var_2] ;~ 04AB:07C5
cs=0x4ab;eip=0x0007c8; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 9166                  mov     [bx+6], ax ;~ 04AB:07C8
loc_1385b:
	// 4617 
cs=0x4ab;eip=0x0007cb; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 9169                  mov     al, [bp+arg_2] ;~ 04AB:07CB
cs=0x4ab;eip=0x0007ce; 	T(AND(ax, 0x0FF));	// 9170                  and     ax, 0FFh ;~ 04AB:07CE
cs=0x4ab;eip=0x0007d1; 	T(cx = 0x2C;);	// 9171                  mov     cx, 2Ch ; ',' ;~ 04AB:07D1
cs=0x4ab;eip=0x0007d4; 	T(IMUL1_2(cx));	// 9172                  imul    cx ;~ 04AB:07D4
cs=0x4ab;eip=0x0007d6; 	T(cx = 0x2D6;);	// 9173                  mov     cx, 2D6h ;~ 04AB:07D6
cs=0x4ab;eip=0x0007d9; 	T(ADD(cx, ax));	// 9174                  add     cx, ax ;~ 04AB:07D9
cs=0x4ab;eip=0x0007db; 	T(ax = 0x16;);	// 9175                  mov     ax, 16h ;~ 04AB:07DB
cs=0x4ab;eip=0x0007de; 	T(ADD(cx, ax));	// 9176                  add     cx, ax ;~ 04AB:07DE
cs=0x4ab;eip=0x0007e0; 	X(MOV(*(dw*)(raddr(ds,0x0D8E)), cx));	// 9177                  mov     ds:0D8Eh, cx ;~ 04AB:07E0
cs=0x4ab;eip=0x0007e4; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 9178                  mov     al, [bp+arg_0] ;~ 04AB:07E4
cs=0x4ab;eip=0x0007e7; 	T(AND(ax, 0x0FF));	// 9179                  and     ax, 0FFh ;~ 04AB:07E7
cs=0x4ab;eip=0x0007ea; 	T(SHL(ax, 1));	// 9180                  shl     ax, 1 ;~ 04AB:07EA
cs=0x4ab;eip=0x0007ec; 	T(bx = 0x2AE;);	// 9181                  mov     bx, 2AEh ;~ 04AB:07EC
cs=0x4ab;eip=0x0007ef; 	T(ADD(bx, ax));	// 9182                  add     bx, ax ;~ 04AB:07EF
cs=0x4ab;eip=0x0007f1; 	T(MOV(al, *(raddr(ds,bx+1))));	// 9183                  mov     al, [bx+1] ;~ 04AB:07F1
cs=0x4ab;eip=0x0007f4; 	T(CBW);	// 9184                  cbw ;~ 04AB:07F4
cs=0x4ab;eip=0x0007f5; 	T(bx = ax;);	// 9185                  mov     bx, ax ;~ 04AB:07F5
cs=0x4ab;eip=0x0007f7; 	T(MOV(al, *(raddr(ds,bx+0x2C4))));	// 9186                  mov     al, [bx+2C4h] ;~ 04AB:07F7
cs=0x4ab;eip=0x0007fb; 	T(CBW);	// 9187                  cbw ;~ 04AB:07FB
cs=0x4ab;eip=0x0007fc; 	X(MOV(*(dw*)(raddr(ds,0x0D8C)), ax));	// 9188                  mov     ds:0D8Ch, ax ;~ 04AB:07FC
cs=0x4ab;eip=0x0007ff; 	T(CMP(ax, 0x14));	// 9189                  cmp     ax, 14h ;~ 04AB:07FF
cs=0x4ab;eip=0x000802; 	J(JNC(loc_13897));	// 9190                  jnb     short loc_13897 ;~ 04AB:0802
cs=0x4ab;eip=0x000804; 	J(CALL(sub_1376e,0));	// 9191                  call    sub_1376E ;~ 04AB:0804
loc_13897:
	// 4618 
cs=0x4ab;eip=0x000807; 	X(POP(di));	// 9194                  pop     di ;~ 04AB:0807
cs=0x4ab;eip=0x000808; 	X(POP(si));	// 9195                  pop     si ;~ 04AB:0808
cs=0x4ab;eip=0x000809; 	T(sp = bp;);	// 9196                  mov     sp, bp ;~ 04AB:0809
cs=0x4ab;eip=0x00080b; 	X(POP(bp));	// 9197                  pop     bp ;~ 04AB:080B
cs=0x4ab;eip=0x00080c; 	J(RETN(0));	// 9198                  retn ;~ 04AB:080C

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_137d6: 	goto loc_137d6;
        case m2c::kloc_1385b: 	goto loc_1385b;
        case m2c::kloc_13897: 	goto loc_13897;
        case m2c::ksub_13788: 	goto sub_13788;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1389e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1389e:
    _begin:
#undef var_6
#define var_6 -6
	// 9211 var_6           = word ptr -6 ;~ 04AB:080E
#undef var_4
#define var_4 -4
	// 9212 var_4           = word ptr -4 ;~ 04AB:080E
#undef var_2
#define var_2 -2
	// 9213 var_2           = word ptr -2 ;~ 04AB:080E
#undef arg_0
#define arg_0 4
	// 9214 arg_0           = word ptr  4 ;~ 04AB:080E
#undef arg_2
#define arg_2 6
	// 9215 arg_2           = word ptr  6 ;~ 04AB:080E
cs=0x4ab;eip=0x00080e; 	X(PUSH(bp));	// 9220                  push    bp ;~ 04AB:080E
cs=0x4ab;eip=0x00080f; 	T(bp = sp;);	// 9221                  mov     bp, sp ;~ 04AB:080F
cs=0x4ab;eip=0x000811; 	T(SUB(sp, 6));	// 9222                  sub     sp, 6 ;~ 04AB:0811
cs=0x4ab;eip=0x000815; 	X(PUSH(si));	// 9223                  push    si ;~ 04AB:0815
cs=0x4ab;eip=0x000816; 	X(PUSH(di));	// 9224                  push    di ;~ 04AB:0816
cs=0x4ab;eip=0x000817; 	X(MOV(*(raddr(ss,bp+var_4)), 0));	// 9225                  mov     byte ptr [bp+var_4], 0 ;~ 04AB:0817
cs=0x4ab;eip=0x00081b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9226                  mov     bx, [bp+arg_0] ;~ 04AB:081B
cs=0x4ab;eip=0x00081e; 	T(MOV(al, *(raddr(ds,bx))));	// 9227                  mov     al, [bx] ;~ 04AB:081E
cs=0x4ab;eip=0x000820; 	T(AND(ax, 0x0FF));	// 9228                  and     ax, 0FFh ;~ 04AB:0820
cs=0x4ab;eip=0x000823; 	J(JNZ(loc_138b8));	// 9229                  jnz     short loc_138B8 ;~ 04AB:0823
cs=0x4ab;eip=0x000825; 	J(JMP(loc_13b2c));	// 9230                  jmp     loc_13B2C ;~ 04AB:0825
loc_138b8:
	// 4619 
cs=0x4ab;eip=0x000828; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9234                  mov     bx, [bp+arg_0] ;~ 04AB:0828
cs=0x4ab;eip=0x00082b; 	T(MOV(al, *(raddr(ds,bx+7))));	// 9235                  mov     al, [bx+7] ;~ 04AB:082B
cs=0x4ab;eip=0x00082e; 	T(AND(ax, 0x0FF));	// 9236                  and     ax, 0FFh ;~ 04AB:082E
cs=0x4ab;eip=0x000831; 	J(JZ(loc_138de));	// 9237                  jz      short loc_138DE ;~ 04AB:0831
cs=0x4ab;eip=0x000833; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9238                  mov     bx, [bp+arg_0] ;~ 04AB:0833
cs=0x4ab;eip=0x000836; 	X(DEC(*(raddr(ds,bx+7))));	// 9239                  dec     byte ptr [bx+7] ;~ 04AB:0836
cs=0x4ab;eip=0x000839; 	T(MOV(al, *(raddr(ds,bx+7))));	// 9240                  mov     al, [bx+7] ;~ 04AB:0839
cs=0x4ab;eip=0x00083c; 	T(AND(ax, 0x0FF));	// 9241                  and     ax, 0FFh ;~ 04AB:083C
cs=0x4ab;eip=0x00083f; 	J(JNZ(loc_138de));	// 9242                  jnz     short loc_138DE ;~ 04AB:083F
cs=0x4ab;eip=0x000841; 	T(MOV(al, *(raddr(ds,0x0C2E))));	// 9243                  mov     al, ds:0C2Eh ;~ 04AB:0841
cs=0x4ab;eip=0x000844; 	T(AND(ax, 0x0FF));	// 9244                  and     ax, 0FFh ;~ 04AB:0844
cs=0x4ab;eip=0x000847; 	X(PUSH(ax));	// 9245                  push    ax ;~ 04AB:0847
cs=0x4ab;eip=0x000848; 	J(CALL(sub_1331c,0));	// 9246                  call    sub_1331C ;~ 04AB:0848
cs=0x4ab;eip=0x00084b; 	T(ADD(sp, 2));	// 9247                  add     sp, 2 ;~ 04AB:084B
loc_138de:
	// 4620 
cs=0x4ab;eip=0x00084e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9251                  mov     bx, [bp+arg_0] ;~ 04AB:084E
cs=0x4ab;eip=0x000851; 	X(DEC(*(raddr(ds,bx))));	// 9252                  dec     byte ptr [bx] ;~ 04AB:0851
cs=0x4ab;eip=0x000853; 	T(MOV(al, *(raddr(ds,bx))));	// 9253                  mov     al, [bx] ;~ 04AB:0853
cs=0x4ab;eip=0x000855; 	T(AND(ax, 0x0FF));	// 9254                  and     ax, 0FFh ;~ 04AB:0855
cs=0x4ab;eip=0x000858; 	J(JLE(loc_138ed));	// 9255                  jle     short loc_138ED ;~ 04AB:0858
cs=0x4ab;eip=0x00085a; 	J(JMP(loc_13b2c));	// 9256                  jmp     loc_13B2C ;~ 04AB:085A
loc_138ed:
	// 4621 
cs=0x4ab;eip=0x00085d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9261                  mov     bx, [bp+arg_0] ;~ 04AB:085D
cs=0x4ab;eip=0x000860; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0C))));	// 9262                  mov     ax, [bx+0Ch] ;~ 04AB:0860
cs=0x4ab;eip=0x000863; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9263                  mov     bx, [bp+arg_0] ;~ 04AB:0863
cs=0x4ab;eip=0x000866; 	T(MOV(cx, *(dw*)(raddr(ds,bx+0x0A))));	// 9264                  mov     cx, [bx+0Ah] ;~ 04AB:0866
cs=0x4ab;eip=0x000869; 	T(ADD(cx, ax));	// 9265                  add     cx, ax ;~ 04AB:0869
cs=0x4ab;eip=0x00086b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), cx));	// 9266                  mov     [bp+var_2], cx ;~ 04AB:086B
cs=0x4ab;eip=0x00086e; 	T(bx = cx;);	// 9267                  mov     bx, cx ;~ 04AB:086E
cs=0x4ab;eip=0x000870; 	T(MOV(al, *(raddr(ds,bx))));	// 9268                  mov     al, [bx] ;~ 04AB:0870
cs=0x4ab;eip=0x000872; 	T(CBW);	// 9269                  cbw ;~ 04AB:0872
cs=0x4ab;eip=0x000873; 	T(AND(ax, 0x80));	// 9270                  and     ax, 80h ;~ 04AB:0873
cs=0x4ab;eip=0x000876; 	J(JNZ(loc_1390b));	// 9271                  jnz     short loc_1390B ;~ 04AB:0876
cs=0x4ab;eip=0x000878; 	J(JMP(loc_13a88));	// 9272                  jmp     loc_13A88 ;~ 04AB:0878
loc_1390b:
	// 4622 
cs=0x4ab;eip=0x00087b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 9276                  mov     bx, [bp+var_2] ;~ 04AB:087B
cs=0x4ab;eip=0x00087e; 	T(MOV(al, *(raddr(ds,bx))));	// 9277                  mov     al, [bx] ;~ 04AB:087E
cs=0x4ab;eip=0x000880; 	T(CBW);	// 9278                  cbw ;~ 04AB:0880
cs=0x4ab;eip=0x000881; 	J(JMP(loc_13a60));	// 9279                  jmp     loc_13A60 ;~ 04AB:0881
ret_4ab_884:
	// 4623 
cs=0x4ab;eip=0x000884; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9281                  mov     bx, [bp+arg_0] ;~ 04AB:0884
cs=0x4ab;eip=0x000887; 	T(CMP(*(dw*)(raddr(ds,bx+0x10)), 0));	// 9282                  cmp     word ptr [bx+10h], 0 ;~ 04AB:0887
cs=0x4ab;eip=0x00088b; 	J(JNZ(loc_1393a));	// 9283                  jnz     short loc_1393A ;~ 04AB:088B
cs=0x4ab;eip=0x00088d; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 9284                  inc     [bp+var_2] ;~ 04AB:088D
cs=0x4ab;eip=0x000890; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 9285                  mov     bx, [bp+var_2] ;~ 04AB:0890
cs=0x4ab;eip=0x000893; 	T(MOV(al, *(raddr(ds,bx))));	// 9286                  mov     al, [bx] ;~ 04AB:0893
cs=0x4ab;eip=0x000895; 	T(CBW);	// 9287                  cbw ;~ 04AB:0895
cs=0x4ab;eip=0x000896; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9288                  mov     bx, [bp+arg_0] ;~ 04AB:0896
cs=0x4ab;eip=0x000899; 	X(MOV(*(dw*)(raddr(ds,bx+0x10)), ax));	// 9289                  mov     [bx+10h], ax ;~ 04AB:0899
cs=0x4ab;eip=0x00089c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9290                  mov     bx, [bp+arg_0] ;~ 04AB:089C
cs=0x4ab;eip=0x00089f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0E))));	// 9291                  mov     ax, [bx+0Eh] ;~ 04AB:089F
cs=0x4ab;eip=0x0008a2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9292                  mov     bx, [bp+arg_0] ;~ 04AB:08A2
cs=0x4ab;eip=0x0008a5; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), ax));	// 9293                  mov     [bx+0Ch], ax ;~ 04AB:08A5
cs=0x4ab;eip=0x0008a8; 	J(JMP(loc_1396a));	// 9294                  jmp     short loc_1396A ;~ 04AB:08A8
loc_1393a:
	// 4624 
cs=0x4ab;eip=0x0008aa; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9298                  mov     bx, [bp+arg_0] ;~ 04AB:08AA
cs=0x4ab;eip=0x0008ad; 	X(DEC(*(dw*)(raddr(ds,bx+0x10))));	// 9299                  dec     word ptr [bx+10h] ;~ 04AB:08AD
cs=0x4ab;eip=0x0008b0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9300                  mov     bx, [bp+arg_0] ;~ 04AB:08B0
cs=0x4ab;eip=0x0008b3; 	T(CMP(*(dw*)(raddr(ds,bx+0x10)), 0));	// 9301                  cmp     word ptr [bx+10h], 0 ;~ 04AB:08B3
cs=0x4ab;eip=0x0008b7; 	J(JNZ(loc_1395e));	// 9302                  jnz     short loc_1395E ;~ 04AB:08B7
cs=0x4ab;eip=0x0008b9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9303                  mov     bx, [bp+arg_0] ;~ 04AB:08B9
cs=0x4ab;eip=0x0008bc; 	X(ADD(*(dw*)(raddr(ds,bx+0x0C)), 2));	// 9304                  add     word ptr [bx+0Ch], 2 ;~ 04AB:08BC
cs=0x4ab;eip=0x0008c0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9305                  mov     bx, [bp+arg_0] ;~ 04AB:08C0
cs=0x4ab;eip=0x0008c3; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0C))));	// 9306                  mov     ax, [bx+0Ch] ;~ 04AB:08C3
cs=0x4ab;eip=0x0008c6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9307                  mov     bx, [bp+arg_0] ;~ 04AB:08C6
cs=0x4ab;eip=0x0008c9; 	X(MOV(*(dw*)(raddr(ds,bx+0x0E)), ax));	// 9308                  mov     [bx+0Eh], ax ;~ 04AB:08C9
cs=0x4ab;eip=0x0008cc; 	J(JMP(loc_1396a));	// 9309                  jmp     short loc_1396A ;~ 04AB:08CC
loc_1395e:
	// 4625 
cs=0x4ab;eip=0x0008ce; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9313                  mov     bx, [bp+arg_0] ;~ 04AB:08CE
cs=0x4ab;eip=0x0008d1; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0E))));	// 9314                  mov     ax, [bx+0Eh] ;~ 04AB:08D1
cs=0x4ab;eip=0x0008d4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9315                  mov     bx, [bp+arg_0] ;~ 04AB:08D4
cs=0x4ab;eip=0x0008d7; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), ax));	// 9316                  mov     [bx+0Ch], ax ;~ 04AB:08D7
loc_1396a:
	// 4626 
cs=0x4ab;eip=0x0008da; 	J(JMP(def_13a6f));	// 9320                  jmp     def_13A6F       ; jumptable 00013A6F default case ;~ 04AB:08DA
ret_4ab_8de:
	// 4627 
cs=0x4ab;eip=0x0008de; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9323                  mov     bx, [bp+arg_0] ;~ 04AB:08DE
cs=0x4ab;eip=0x0008e1; 	X(INC(*(dw*)(raddr(ds,bx+0x0C))));	// 9324                  inc     word ptr [bx+0Ch] ;~ 04AB:08E1
cs=0x4ab;eip=0x0008e4; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0C))));	// 9325                  mov     ax, [bx+0Ch] ;~ 04AB:08E4
cs=0x4ab;eip=0x0008e7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9326                  mov     bx, [bp+arg_0] ;~ 04AB:08E7
cs=0x4ab;eip=0x0008ea; 	X(MOV(*(dw*)(raddr(ds,bx+0x0E)), ax));	// 9327                  mov     [bx+0Eh], ax ;~ 04AB:08EA
cs=0x4ab;eip=0x0008ed; 	J(JMP(def_13a6f));	// 9328                  jmp     def_13A6F       ; jumptable 00013A6F default case ;~ 04AB:08ED
ret_4ab_8f0:
	// 4628 
cs=0x4ab;eip=0x0008f0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9330                  mov     bx, [bp+arg_0] ;~ 04AB:08F0
cs=0x4ab;eip=0x0008f3; 	T(CMP(*(dw*)(raddr(ds,bx+0x12)), 0));	// 9331                  cmp     word ptr [bx+12h], 0 ;~ 04AB:08F3
cs=0x4ab;eip=0x0008f7; 	J(JNZ(loc_13994));	// 9332                  jnz     short loc_13994 ;~ 04AB:08F7
cs=0x4ab;eip=0x0008f9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9333                  mov     bx, [bp+arg_0] ;~ 04AB:08F9
cs=0x4ab;eip=0x0008fc; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), 0));	// 9334                  mov     word ptr [bx+0Ch], 0 ;~ 04AB:08FC
cs=0x4ab;eip=0x000901; 	J(JMP(loc_1399a));	// 9335                  jmp     short loc_1399A ;~ 04AB:0901
loc_13994:
	// 4629 
cs=0x4ab;eip=0x000904; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9340                  mov     bx, [bp+arg_0] ;~ 04AB:0904
cs=0x4ab;eip=0x000907; 	J(CALL(__dispatch_call,*(dw*)(raddr(ds,bx+0x12))));	// 9341                  call    word ptr [bx+12h] ;~ 04AB:0907
loc_1399a:
	// 4630 
cs=0x4ab;eip=0x00090a; 	J(JMP(def_13a6f));	// 9344                  jmp     def_13A6F       ; jumptable 00013A6F default case ;~ 04AB:090A
ret_4ab_90e:
	// 4631 
cs=0x4ab;eip=0x00090e; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 9347                  inc     [bp+var_2] ;~ 04AB:090E
cs=0x4ab;eip=0x000911; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 9348                  mov     bx, [bp+var_2] ;~ 04AB:0911
cs=0x4ab;eip=0x000914; 	T(MOV(al, *(raddr(ds,bx))));	// 9349                  mov     al, [bx] ;~ 04AB:0914
cs=0x4ab;eip=0x000916; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9350                  mov     bx, [bp+arg_0] ;~ 04AB:0916
cs=0x4ab;eip=0x000919; 	X(MOV(*(raddr(ds,bx+4)), al));	// 9351                  mov     [bx+4], al ;~ 04AB:0919
cs=0x4ab;eip=0x00091c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9352                  mov     bx, [bp+arg_0] ;~ 04AB:091C
cs=0x4ab;eip=0x00091f; 	X(ADD(*(dw*)(raddr(ds,bx+0x0C)), 2));	// 9353                  add     word ptr [bx+0Ch], 2 ;~ 04AB:091F
cs=0x4ab;eip=0x000923; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9354                  mov     bx, [bp+arg_0] ;~ 04AB:0923
cs=0x4ab;eip=0x000926; 	T(MOV(al, *(raddr(ds,bx+4))));	// 9355                  mov     al, [bx+4] ;~ 04AB:0926
cs=0x4ab;eip=0x000929; 	T(AND(ax, 0x0FF));	// 9356                  and     ax, 0FFh ;~ 04AB:0929
cs=0x4ab;eip=0x00092c; 	X(PUSH(ax));	// 9357                  push    ax ;~ 04AB:092C
cs=0x4ab;eip=0x00092d; 	T(MOV(al, *(raddr(ds,0x0C2E))));	// 9358                  mov     al, ds:0C2Eh ;~ 04AB:092D
cs=0x4ab;eip=0x000930; 	T(AND(ax, 0x0FF));	// 9359                  and     ax, 0FFh ;~ 04AB:0930
cs=0x4ab;eip=0x000933; 	X(PUSH(ax));	// 9360                  push    ax ;~ 04AB:0933
cs=0x4ab;eip=0x000934; 	J(CALL(sub_13788,0));	// 9361                  call    sub_13788 ;~ 04AB:0934
cs=0x4ab;eip=0x000937; 	T(ADD(sp, 4));	// 9362                  add     sp, 4 ;~ 04AB:0937
cs=0x4ab;eip=0x00093a; 	J(JMP(def_13a6f));	// 9363                  jmp     def_13A6F       ; jumptable 00013A6F default case ;~ 04AB:093A
ret_4ab_93e:
	// 4632 
cs=0x4ab;eip=0x00093e; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 9366                  inc     [bp+var_2] ;~ 04AB:093E
cs=0x4ab;eip=0x000941; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 9367                  mov     bx, [bp+var_2] ;~ 04AB:0941
cs=0x4ab;eip=0x000944; 	T(MOV(al, *(raddr(ds,bx))));	// 9368                  mov     al, [bx] ;~ 04AB:0944
cs=0x4ab;eip=0x000946; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9369                  mov     bx, [bp+arg_0] ;~ 04AB:0946
cs=0x4ab;eip=0x000949; 	X(MOV(*(raddr(ds,bx+6)), al));	// 9370                  mov     [bx+6], al ;~ 04AB:0949
cs=0x4ab;eip=0x00094c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9371                  mov     bx, [bp+arg_0] ;~ 04AB:094C
cs=0x4ab;eip=0x00094f; 	X(ADD(*(dw*)(raddr(ds,bx+0x0C)), 2));	// 9372                  add     word ptr [bx+0Ch], 2 ;~ 04AB:094F
cs=0x4ab;eip=0x000953; 	J(JMP(def_13a6f));	// 9373                  jmp     def_13A6F       ; jumptable 00013A6F default case ;~ 04AB:0953
ret_4ab_956:
	// 4633 
cs=0x4ab;eip=0x000956; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 9375                  inc     [bp+var_2] ;~ 04AB:0956
cs=0x4ab;eip=0x000959; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 9376                  mov     bx, [bp+var_2] ;~ 04AB:0959
cs=0x4ab;eip=0x00095c; 	T(MOV(al, *(raddr(ds,bx))));	// 9377                  mov     al, [bx] ;~ 04AB:095C
cs=0x4ab;eip=0x00095e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9378                  mov     bx, [bp+arg_0] ;~ 04AB:095E
cs=0x4ab;eip=0x000961; 	X(MOV(*(raddr(ds,bx+1)), al));	// 9379                  mov     [bx+1], al ;~ 04AB:0961
cs=0x4ab;eip=0x000964; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9380                  mov     bx, [bp+arg_0] ;~ 04AB:0964
cs=0x4ab;eip=0x000967; 	X(ADD(*(dw*)(raddr(ds,bx+0x0C)), 2));	// 9381                  add     word ptr [bx+0Ch], 2 ;~ 04AB:0967
cs=0x4ab;eip=0x00096b; 	J(JMP(def_13a6f));	// 9382                  jmp     def_13A6F       ; jumptable 00013A6F default case ;~ 04AB:096B
ret_4ab_96e:
	// 4634 
cs=0x4ab;eip=0x00096e; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 9384                  inc     [bp+var_2] ;~ 04AB:096E
cs=0x4ab;eip=0x000971; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 9385                  mov     bx, [bp+var_2] ;~ 04AB:0971
cs=0x4ab;eip=0x000974; 	T(MOV(al, *(raddr(ds,bx))));	// 9386                  mov     al, [bx] ;~ 04AB:0974
cs=0x4ab;eip=0x000976; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9387                  mov     bx, [bp+arg_0] ;~ 04AB:0976
cs=0x4ab;eip=0x000979; 	X(MOV(*(raddr(ds,bx+5)), al));	// 9388                  mov     [bx+5], al ;~ 04AB:0979
cs=0x4ab;eip=0x00097c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9389                  mov     bx, [bp+arg_0] ;~ 04AB:097C
cs=0x4ab;eip=0x00097f; 	X(ADD(*(dw*)(raddr(ds,bx+0x0C)), 2));	// 9390                  add     word ptr [bx+0Ch], 2 ;~ 04AB:097F
cs=0x4ab;eip=0x000983; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9391                  mov     bx, [bp+arg_0] ;~ 04AB:0983
cs=0x4ab;eip=0x000986; 	T(MOV(al, *(raddr(ds,bx+5))));	// 9392                  mov     al, [bx+5] ;~ 04AB:0986
cs=0x4ab;eip=0x000989; 	T(AND(ax, 0x0FF));	// 9393                  and     ax, 0FFh ;~ 04AB:0989
cs=0x4ab;eip=0x00098c; 	X(PUSH(ax));	// 9394                  push    ax ;~ 04AB:098C
cs=0x4ab;eip=0x00098d; 	T(MOV(al, *(raddr(ds,0x0C2E))));	// 9395                  mov     al, ds:0C2Eh ;~ 04AB:098D
cs=0x4ab;eip=0x000990; 	T(AND(ax, 0x0FF));	// 9396                  and     ax, 0FFh ;~ 04AB:0990
cs=0x4ab;eip=0x000993; 	X(PUSH(ax));	// 9397                  push    ax ;~ 04AB:0993
cs=0x4ab;eip=0x000994; 	J(CALL(__dispatch_call,unk_2307e));	// 9398                  call    near ptr unk_2307E ;~ 04AB:0994
cs=0x4ab;eip=0x000997; 	T(ADD(sp, 4));	// 9399                  add     sp, 4 ;~ 04AB:0997
cs=0x4ab;eip=0x00099a; 	J(JMP(def_13a6f));	// 9400                  jmp     def_13A6F       ; jumptable 00013A6F default case ;~ 04AB:099A
ret_4ab_99e:
	// 4635 
cs=0x4ab;eip=0x00099e; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 9403                  inc     [bp+var_2] ;~ 04AB:099E
cs=0x4ab;eip=0x0009a1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 9404                  mov     bx, [bp+var_2] ;~ 04AB:09A1
cs=0x4ab;eip=0x0009a4; 	T(MOV(al, *(raddr(ds,bx))));	// 9405                  mov     al, [bx] ;~ 04AB:09A4
cs=0x4ab;eip=0x0009a6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9406                  mov     bx, [bp+arg_0] ;~ 04AB:09A6
cs=0x4ab;eip=0x0009a9; 	X(MOV(*(raddr(ds,bx+9)), al));	// 9407                  mov     [bx+9], al ;~ 04AB:09A9
cs=0x4ab;eip=0x0009ac; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 9408                  inc     [bp+var_2] ;~ 04AB:09AC
cs=0x4ab;eip=0x0009af; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 9409                  mov     bx, [bp+var_2] ;~ 04AB:09AF
cs=0x4ab;eip=0x0009b2; 	T(MOV(al, *(raddr(ds,bx))));	// 9410                  mov     al, [bx] ;~ 04AB:09B2
cs=0x4ab;eip=0x0009b4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9411                  mov     bx, [bp+arg_0] ;~ 04AB:09B4
cs=0x4ab;eip=0x0009b7; 	X(MOV(*(raddr(ds,bx+2)), al));	// 9412                  mov     [bx+2], al ;~ 04AB:09B7
cs=0x4ab;eip=0x0009ba; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9413                  mov     bx, [bp+arg_0] ;~ 04AB:09BA
cs=0x4ab;eip=0x0009bd; 	X(MOV(*(raddr(ds,bx+8)), 1));	// 9414                  mov     byte ptr [bx+8], 1 ;~ 04AB:09BD
cs=0x4ab;eip=0x0009c1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9415                  mov     bx, [bp+arg_0] ;~ 04AB:09C1
cs=0x4ab;eip=0x0009c4; 	X(ADD(*(dw*)(raddr(ds,bx+0x0C)), 3));	// 9416                  add     word ptr [bx+0Ch], 3 ;~ 04AB:09C4
cs=0x4ab;eip=0x0009c8; 	J(JMP(def_13a6f));	// 9417                  jmp     def_13A6F       ; jumptable 00013A6F default case ;~ 04AB:09C8
ret_4ab_9cc:
	// 4636 
cs=0x4ab;eip=0x0009cc; 	J(JMP(def_13a6f));	// 9420                  jmp     def_13A6F       ; jumptable 00013A6F default case ;~ 04AB:09CC
loc_13a60:
	// 4637 
cs=0x4ab;eip=0x0009d0; 	T(SUB(ax, 0x0FFF8));	// 9425                  sub     ax, 0FFF8h      ; switch 7 cases ;~ 04AB:09D0
cs=0x4ab;eip=0x0009d3; 	T(CMP(ax, 7));	// 9426                  cmp     ax, 7 ;~ 04AB:09D3
cs=0x4ab;eip=0x0009d6; 	J(JBE(loc_13a6b));	// 9427                  jbe     short loc_13A6B ;~ 04AB:09D6
cs=0x4ab;eip=0x0009d8; 	J(JMP(def_13a6f));	// 9428                  jmp     def_13A6F       ; jumptable 00013A6F default case ;~ 04AB:09D8
loc_13a6b:
	// 4638 
cs=0x4ab;eip=0x0009db; 	T(SHL(ax, 1));	// 9432                  shl     ax, 1 ;~ 04AB:09DB
cs=0x4ab;eip=0x0009dd; 	T(bx = ax;);	// 9433                  mov     bx, ax ;~ 04AB:09DD
cs=0x4ab;eip=0x0009df; __disp=*(dw*)((((db*)&jpt_13a6f)-0x0FFFFFFFFFFFFF200)+bx);
	J(return __dispatch_call(__disp, _state););	// 9434                  jmp     cs:(jpt_13A6F - 0FFFFFFFFFFFFF200h)[bx] ; switch jump ;~ 04AB:09DF
def_13a6f:
	// 4639 
cs=0x4ab;eip=0x0009f4; 	J(JMP(loc_138ed));	// 9442                  jmp     loc_138ED       ; jumptable 00013A6F default case ;~ 04AB:09F4
loc_13a88:
	// 4640 
cs=0x4ab;eip=0x0009f8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9447                  mov     bx, [bp+arg_0] ;~ 04AB:09F8
cs=0x4ab;eip=0x0009fb; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0C))));	// 9448                  mov     ax, [bx+0Ch] ;~ 04AB:09FB
cs=0x4ab;eip=0x0009fe; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9449                  mov     bx, [bp+arg_0] ;~ 04AB:09FE
cs=0x4ab;eip=0x000a01; 	T(MOV(cx, *(dw*)(raddr(ds,bx+0x0A))));	// 9450                  mov     cx, [bx+0Ah] ;~ 04AB:0A01
cs=0x4ab;eip=0x000a04; 	T(ADD(cx, ax));	// 9451                  add     cx, ax ;~ 04AB:0A04
cs=0x4ab;eip=0x000a06; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), cx));	// 9452                  mov     [bp+var_2], cx ;~ 04AB:0A06
cs=0x4ab;eip=0x000a09; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 9453                  mov     bx, [bp+var_2] ;~ 04AB:0A09
cs=0x4ab;eip=0x000a0c; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 9454                  inc     [bp+var_2] ;~ 04AB:0A0C
cs=0x4ab;eip=0x000a0f; 	T(MOV(al, *(raddr(ds,bx))));	// 9455                  mov     al, [bx] ;~ 04AB:0A0F
cs=0x4ab;eip=0x000a11; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9456                  mov     bx, [bp+arg_0] ;~ 04AB:0A11
cs=0x4ab;eip=0x000a14; 	X(MOV(*(raddr(ds,bx+3)), al));	// 9457                  mov     [bx+3], al ;~ 04AB:0A14
cs=0x4ab;eip=0x000a17; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 9458                  mov     bx, [bp+var_2] ;~ 04AB:0A17
cs=0x4ab;eip=0x000a1a; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 9459                  inc     [bp+var_2] ;~ 04AB:0A1A
cs=0x4ab;eip=0x000a1d; 	T(MOV(al, *(raddr(ds,bx))));	// 9460                  mov     al, [bx] ;~ 04AB:0A1D
cs=0x4ab;eip=0x000a1f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9461                  mov     bx, [bp+arg_0] ;~ 04AB:0A1F
cs=0x4ab;eip=0x000a22; 	X(MOV(*(raddr(ds,bx)), al));	// 9462                  mov     [bx], al ;~ 04AB:0A22
cs=0x4ab;eip=0x000a24; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9463                  mov     bx, [bp+arg_0] ;~ 04AB:0A24
cs=0x4ab;eip=0x000a27; 	X(ADD(*(dw*)(raddr(ds,bx+0x0C)), 2));	// 9464                  add     word ptr [bx+0Ch], 2 ;~ 04AB:0A27
cs=0x4ab;eip=0x000a2b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9465                  mov     bx, [bp+arg_0] ;~ 04AB:0A2B
cs=0x4ab;eip=0x000a2e; 	T(MOV(al, *(raddr(ds,bx+3))));	// 9466                  mov     al, [bx+3] ;~ 04AB:0A2E
cs=0x4ab;eip=0x000a31; 	T(AND(ax, 0x0FF));	// 9467                  and     ax, 0FFh ;~ 04AB:0A31
cs=0x4ab;eip=0x000a34; 	J(JZ(loc_13ad0));	// 9468                  jz      short loc_13AD0 ;~ 04AB:0A34
cs=0x4ab;eip=0x000a36; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9469                  mov     bx, [bp+arg_0] ;~ 04AB:0A36
cs=0x4ab;eip=0x000a39; 	T(MOV(al, *(raddr(ds,bx))));	// 9470                  mov     al, [bx] ;~ 04AB:0A39
cs=0x4ab;eip=0x000a3b; 	T(AND(ax, 0x0FF));	// 9471                  and     ax, 0FFh ;~ 04AB:0A3B
cs=0x4ab;eip=0x000a3e; 	J(JNZ(loc_13ae0));	// 9472                  jnz     short loc_13AE0 ;~ 04AB:0A3E
loc_13ad0:
	// 4641 
cs=0x4ab;eip=0x000a40; 	T(MOV(al, *(raddr(ds,0x0C2E))));	// 9475                  mov     al, ds:0C2Eh ;~ 04AB:0A40
cs=0x4ab;eip=0x000a43; 	T(AND(ax, 0x0FF));	// 9476                  and     ax, 0FFh ;~ 04AB:0A43
cs=0x4ab;eip=0x000a46; 	X(PUSH(ax));	// 9477                  push    ax ;~ 04AB:0A46
cs=0x4ab;eip=0x000a47; 	J(CALL(sub_1331c,0));	// 9478                  call    sub_1331C ;~ 04AB:0A47
cs=0x4ab;eip=0x000a4a; 	T(ADD(sp, 2));	// 9479                  add     sp, 2 ;~ 04AB:0A4A
cs=0x4ab;eip=0x000a4d; 	J(JMP(loc_13b2c));	// 9480                  jmp     loc_13B2C ;~ 04AB:0A4D
loc_13ae0:
	// 4642 
cs=0x4ab;eip=0x000a50; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9484                  mov     bx, [bp+arg_0] ;~ 04AB:0A50
cs=0x4ab;eip=0x000a53; 	T(MOV(al, *(raddr(ds,bx+7))));	// 9485                  mov     al, [bx+7] ;~ 04AB:0A53
cs=0x4ab;eip=0x000a56; 	T(AND(ax, 0x0FF));	// 9486                  and     ax, 0FFh ;~ 04AB:0A56
cs=0x4ab;eip=0x000a59; 	X(PUSH(ax));	// 9487                  push    ax ;~ 04AB:0A59
cs=0x4ab;eip=0x000a5a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9488                  mov     bx, [bp+arg_0] ;~ 04AB:0A5A
cs=0x4ab;eip=0x000a5d; 	T(MOV(al, *(raddr(ds,bx+5))));	// 9489                  mov     al, [bx+5] ;~ 04AB:0A5D
cs=0x4ab;eip=0x000a60; 	T(AND(ax, 0x0FF));	// 9490                  and     ax, 0FFh ;~ 04AB:0A60
cs=0x4ab;eip=0x000a63; 	X(PUSH(ax));	// 9491                  push    ax ;~ 04AB:0A63
cs=0x4ab;eip=0x000a64; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9492                  mov     bx, [bp+arg_0] ;~ 04AB:0A64
cs=0x4ab;eip=0x000a67; 	T(MOV(al, *(raddr(ds,bx+3))));	// 9493                  mov     al, [bx+3] ;~ 04AB:0A67
cs=0x4ab;eip=0x000a6a; 	T(AND(ax, 0x0FF));	// 9494                  and     ax, 0FFh ;~ 04AB:0A6A
cs=0x4ab;eip=0x000a6d; 	X(PUSH(ax));	// 9495                  push    ax ;~ 04AB:0A6D
cs=0x4ab;eip=0x000a6e; 	T(MOV(al, *(raddr(ds,0x0C2E))));	// 9496                  mov     al, ds:0C2Eh ;~ 04AB:0A6E
cs=0x4ab;eip=0x000a71; 	T(AND(ax, 0x0FF));	// 9497                  and     ax, 0FFh ;~ 04AB:0A71
cs=0x4ab;eip=0x000a74; 	X(PUSH(ax));	// 9498                  push    ax ;~ 04AB:0A74
cs=0x4ab;eip=0x000a75; 	J(CALL(sub_13398,0));	// 9499                  call    sub_13398 ;~ 04AB:0A75
cs=0x4ab;eip=0x000a78; 	T(ADD(sp, 8));	// 9500                  add     sp, 8 ;~ 04AB:0A78
cs=0x4ab;eip=0x000a7b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9501                  mov     bx, [bp+arg_0] ;~ 04AB:0A7B
cs=0x4ab;eip=0x000a7e; 	T(MOV(al, *(raddr(ds,bx))));	// 9502                  mov     al, [bx] ;~ 04AB:0A7E
cs=0x4ab;eip=0x000a80; 	T(AND(ax, 0x0FF));	// 9503                  and     ax, 0FFh ;~ 04AB:0A80
cs=0x4ab;eip=0x000a83; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9504                  mov     bx, [bp+arg_0] ;~ 04AB:0A83
cs=0x4ab;eip=0x000a86; 	T(MOV(cl, *(raddr(ds,bx+6))));	// 9505                  mov     cl, [bx+6] ;~ 04AB:0A86
cs=0x4ab;eip=0x000a89; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 9506                  mov     [bp+var_6], ax ;~ 04AB:0A89
cs=0x4ab;eip=0x000a8c; 	T(ax = cx;);	// 9507                  mov     ax, cx ;~ 04AB:0A8C
cs=0x4ab;eip=0x000a8e; 	T(AND(ax, 0x0FF));	// 9508                  and     ax, 0FFh ;~ 04AB:0A8E
cs=0x4ab;eip=0x000a91; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_6))));	// 9509                  mov     cx, [bp+var_6] ;~ 04AB:0A91
cs=0x4ab;eip=0x000a94; 	T(SUB(cx, ax));	// 9510                  sub     cx, ax ;~ 04AB:0A94
cs=0x4ab;eip=0x000a96; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9511                  mov     bx, [bp+arg_0] ;~ 04AB:0A96
cs=0x4ab;eip=0x000a99; 	X(MOV(*(raddr(ds,bx+7)), cl));	// 9512                  mov     [bx+7], cl ;~ 04AB:0A99
loc_13b2c:
	// 4643 
cs=0x4ab;eip=0x000a9c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9516                  mov     bx, [bp+arg_0] ;~ 04AB:0A9C
cs=0x4ab;eip=0x000a9f; 	T(CMP(*(raddr(ds,bx+1)), 0));	// 9517                  cmp     byte ptr [bx+1], 0 ;~ 04AB:0A9F
cs=0x4ab;eip=0x000aa3; 	J(JZ(loc_13b4a));	// 9518                  jz      short loc_13B4A ;~ 04AB:0AA3
cs=0x4ab;eip=0x000aa5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9519                  mov     bx, [bp+arg_0] ;~ 04AB:0AA5
cs=0x4ab;eip=0x000aa8; 	T(MOV(al, *(raddr(ds,bx+1))));	// 9520                  mov     al, [bx+1] ;~ 04AB:0AA8
cs=0x4ab;eip=0x000aab; 	T(CBW);	// 9521                  cbw ;~ 04AB:0AAB
cs=0x4ab;eip=0x000aac; 	X(PUSH(ax));	// 9522                  push    ax ;~ 04AB:0AAC
cs=0x4ab;eip=0x000aad; 	T(MOV(al, *(raddr(ds,0x0C2E))));	// 9523                  mov     al, ds:0C2Eh ;~ 04AB:0AAD
cs=0x4ab;eip=0x000ab0; 	T(AND(ax, 0x0FF));	// 9524                  and     ax, 0FFh ;~ 04AB:0AB0
cs=0x4ab;eip=0x000ab3; 	X(PUSH(ax));	// 9525                  push    ax ;~ 04AB:0AB3
cs=0x4ab;eip=0x000ab4; 	J(CALL(sub_1321c,0));	// 9526                  call    sub_1321C ;~ 04AB:0AB4
cs=0x4ab;eip=0x000ab7; 	T(ADD(sp, 4));	// 9527                  add     sp, 4 ;~ 04AB:0AB7
loc_13b4a:
	// 4644 
cs=0x4ab;eip=0x000aba; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9530                  mov     bx, [bp+arg_0] ;~ 04AB:0ABA
cs=0x4ab;eip=0x000abd; 	X(DEC(*(raddr(ds,bx+8))));	// 9531                  dec     byte ptr [bx+8] ;~ 04AB:0ABD
cs=0x4ab;eip=0x000ac0; 	T(MOV(al, *(raddr(ds,bx+8))));	// 9532                  mov     al, [bx+8] ;~ 04AB:0AC0
cs=0x4ab;eip=0x000ac3; 	T(AND(ax, 0x0FF));	// 9533                  and     ax, 0FFh ;~ 04AB:0AC3
cs=0x4ab;eip=0x000ac6; 	J(JNZ(loc_13b82));	// 9534                  jnz     short loc_13B82 ;~ 04AB:0AC6
cs=0x4ab;eip=0x000ac8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9535                  mov     bx, [bp+arg_0] ;~ 04AB:0AC8
cs=0x4ab;eip=0x000acb; 	T(MOV(al, *(raddr(ds,bx+9))));	// 9536                  mov     al, [bx+9] ;~ 04AB:0ACB
cs=0x4ab;eip=0x000ace; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9537                  mov     bx, [bp+arg_0] ;~ 04AB:0ACE
cs=0x4ab;eip=0x000ad1; 	X(MOV(*(raddr(ds,bx+8)), al));	// 9538                  mov     [bx+8], al ;~ 04AB:0AD1
cs=0x4ab;eip=0x000ad4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9539                  mov     bx, [bp+arg_0] ;~ 04AB:0AD4
cs=0x4ab;eip=0x000ad7; 	T(CMP(*(raddr(ds,bx+2)), 0));	// 9540                  cmp     byte ptr [bx+2], 0 ;~ 04AB:0AD7
cs=0x4ab;eip=0x000adb; 	J(JZ(loc_13b82));	// 9541                  jz      short loc_13B82 ;~ 04AB:0ADB
cs=0x4ab;eip=0x000add; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9542                  mov     bx, [bp+arg_0] ;~ 04AB:0ADD
cs=0x4ab;eip=0x000ae0; 	T(MOV(al, *(raddr(ds,bx+2))));	// 9543                  mov     al, [bx+2] ;~ 04AB:0AE0
cs=0x4ab;eip=0x000ae3; 	T(CBW);	// 9544                  cbw ;~ 04AB:0AE3
cs=0x4ab;eip=0x000ae4; 	X(PUSH(ax));	// 9545                  push    ax ;~ 04AB:0AE4
cs=0x4ab;eip=0x000ae5; 	T(MOV(al, *(raddr(ds,0x0C2E))));	// 9546                  mov     al, ds:0C2Eh ;~ 04AB:0AE5
cs=0x4ab;eip=0x000ae8; 	T(AND(ax, 0x0FF));	// 9547                  and     ax, 0FFh ;~ 04AB:0AE8
cs=0x4ab;eip=0x000aeb; 	X(PUSH(ax));	// 9548                  push    ax ;~ 04AB:0AEB
cs=0x4ab;eip=0x000aec; 	J(CALL(sub_132a2,0));	// 9549                  call    sub_132A2 ;~ 04AB:0AEC
cs=0x4ab;eip=0x000aef; 	T(ADD(sp, 4));	// 9550                  add     sp, 4 ;~ 04AB:0AEF
loc_13b82:
	// 4645 
cs=0x4ab;eip=0x000af2; 	X(INC(*(raddr(ds,0x0C2E))));	// 9554                  inc     byte ptr ds:0C2Eh ;~ 04AB:0AF2
cs=0x4ab;eip=0x000af6; 	X(POP(di));	// 9555                  pop     di ;~ 04AB:0AF6
cs=0x4ab;eip=0x000af7; 	X(POP(si));	// 9556                  pop     si ;~ 04AB:0AF7
cs=0x4ab;eip=0x000af8; 	T(sp = bp;);	// 9557                  mov     sp, bp ;~ 04AB:0AF8
cs=0x4ab;eip=0x000afa; 	X(POP(bp));	// 9558                  pop     bp ;~ 04AB:0AFA
cs=0x4ab;eip=0x000afb; 	J(RETN(0));	// 9559                  retn ;~ 04AB:0AFB

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kdef_13a6f: 	goto def_13a6f;
        case m2c::kloc_138b8: 	goto loc_138b8;
        case m2c::kloc_138de: 	goto loc_138de;
        case m2c::kloc_138ed: 	goto loc_138ed;
        case m2c::kloc_1390b: 	goto loc_1390b;
        case m2c::kloc_1393a: 	goto loc_1393a;
        case m2c::kloc_1395e: 	goto loc_1395e;
        case m2c::kloc_1396a: 	goto loc_1396a;
        case m2c::kloc_13994: 	goto loc_13994;
        case m2c::kloc_1399a: 	goto loc_1399a;
        case m2c::kloc_13a60: 	goto loc_13a60;
        case m2c::kloc_13a6b: 	goto loc_13a6b;
        case m2c::kloc_13a88: 	goto loc_13a88;
        case m2c::kloc_13ad0: 	goto loc_13ad0;
        case m2c::kloc_13ae0: 	goto loc_13ae0;
        case m2c::kloc_13b2c: 	goto loc_13b2c;
        case m2c::kloc_13b4a: 	goto loc_13b4a;
        case m2c::kloc_13b82: 	goto loc_13b82;
        case m2c::kret_4ab_884: 	goto ret_4ab_884;
        case m2c::kret_4ab_8de: 	goto ret_4ab_8de;
        case m2c::kret_4ab_8f0: 	goto ret_4ab_8f0;
        case m2c::kret_4ab_90e: 	goto ret_4ab_90e;
        case m2c::kret_4ab_93e: 	goto ret_4ab_93e;
        case m2c::kret_4ab_956: 	goto ret_4ab_956;
        case m2c::kret_4ab_96e: 	goto ret_4ab_96e;
        case m2c::kret_4ab_99e: 	goto ret_4ab_99e;
        case m2c::kret_4ab_9cc: 	goto ret_4ab_9cc;
        case m2c::ksub_1389e: 	goto sub_1389e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13b8c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13b8c:
    _begin:
#undef var_2
#define var_2 -2
	// 9569 var_2           = word ptr -2 ;~ 04AB:0AFC
cs=0x4ab;eip=0x000afc; 	X(PUSH(bp));	// 9571                  push    bp ;~ 04AB:0AFC
cs=0x4ab;eip=0x000afd; 	T(bp = sp;);	// 9572                  mov     bp, sp ;~ 04AB:0AFD
cs=0x4ab;eip=0x000aff; 	T(SUB(sp, 2));	// 9573                  sub     sp, 2 ;~ 04AB:0AFF
cs=0x4ab;eip=0x000b03; 	X(PUSH(si));	// 9574                  push    si ;~ 04AB:0B03
cs=0x4ab;eip=0x000b04; 	X(PUSH(di));	// 9575                  push    di ;~ 04AB:0B04
cs=0x4ab;eip=0x000b05; 	T(MOV(al, *(raddr(ds,0x286))));	// 9576                  mov     al, ds:286h ;~ 04AB:0B05
cs=0x4ab;eip=0x000b08; 	T(AND(ax, 0x0FF));	// 9577                  and     ax, 0FFh ;~ 04AB:0B08
cs=0x4ab;eip=0x000b0b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9578                  mov     [bp+var_2], ax ;~ 04AB:0B0B
cs=0x4ab;eip=0x000b0e; 	T(MOV(al, *(raddr(ds,0x287))));	// 9579                  mov     al, ds:287h ;~ 04AB:0B0E
cs=0x4ab;eip=0x000b11; 	T(AND(ax, 0x0FF));	// 9580                  and     ax, 0FFh ;~ 04AB:0B11
cs=0x4ab;eip=0x000b14; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_2))));	// 9581                  mov     cx, [bp+var_2] ;~ 04AB:0B14
cs=0x4ab;eip=0x000b17; 	T(CMP(cx, ax));	// 9582                  cmp     cx, ax ;~ 04AB:0B17
cs=0x4ab;eip=0x000b19; 	J(JNZ(loc_13bae));	// 9583                  jnz     short loc_13BAE ;~ 04AB:0B19
cs=0x4ab;eip=0x000b1b; 	J(JMP(loc_13c2e));	// 9584                  jmp     loc_13C2E ;~ 04AB:0B1B
loc_13bae:
	// 4646 
cs=0x4ab;eip=0x000b1e; 	T(MOV(al, *(raddr(ds,0x286))));	// 9588                  mov     al, ds:286h ;~ 04AB:0B1E
cs=0x4ab;eip=0x000b21; 	T(AND(ax, 0x0FF));	// 9589                  and     ax, 0FFh ;~ 04AB:0B21
cs=0x4ab;eip=0x000b24; 	J(JNZ(loc_13bb9));	// 9590                  jnz     short loc_13BB9 ;~ 04AB:0B24
cs=0x4ab;eip=0x000b26; 	J(JMP(loc_13c10));	// 9591                  jmp     loc_13C10 ;~ 04AB:0B26
loc_13bb9:
	// 4647 
cs=0x4ab;eip=0x000b29; 	T(ax = 6;);	// 9595                  mov     ax, 6 ;~ 04AB:0B29
cs=0x4ab;eip=0x000b2c; 	X(PUSH(ax));	// 9596                  push    ax ;~ 04AB:0B2C
cs=0x4ab;eip=0x000b2d; 	T(ax = 5;);	// 9597                  mov     ax, 5 ;~ 04AB:0B2D
cs=0x4ab;eip=0x000b30; 	X(PUSH(ax));	// 9598                  push    ax ;~ 04AB:0B30
cs=0x4ab;eip=0x000b31; 	J(CALL(sub_13788,0));	// 9599                  call    sub_13788 ;~ 04AB:0B31
cs=0x4ab;eip=0x000b34; 	T(ADD(sp, 4));	// 9600                  add     sp, 4 ;~ 04AB:0B34
cs=0x4ab;eip=0x000b37; 	T(ax = 1;);	// 9601                  mov     ax, 1 ;~ 04AB:0B37
cs=0x4ab;eip=0x000b3a; 	X(PUSH(ax));	// 9602                  push    ax ;~ 04AB:0B3A
cs=0x4ab;eip=0x000b3b; 	T(ax = 6;);	// 9603                  mov     ax, 6 ;~ 04AB:0B3B
cs=0x4ab;eip=0x000b3e; 	X(PUSH(ax));	// 9604                  push    ax ;~ 04AB:0B3E
cs=0x4ab;eip=0x000b3f; 	J(CALL(sub_13788,0));	// 9605                  call    sub_13788 ;~ 04AB:0B3F
cs=0x4ab;eip=0x000b42; 	T(ADD(sp, 4));	// 9606                  add     sp, 4 ;~ 04AB:0B42
cs=0x4ab;eip=0x000b45; 	T(ax = 0x0F;);	// 9607                  mov     ax, 0Fh ;~ 04AB:0B45
cs=0x4ab;eip=0x000b48; 	X(PUSH(ax));	// 9608                  push    ax ;~ 04AB:0B48
cs=0x4ab;eip=0x000b49; 	T(ax = 5;);	// 9609                  mov     ax, 5 ;~ 04AB:0B49
cs=0x4ab;eip=0x000b4c; 	X(PUSH(ax));	// 9610                  push    ax ;~ 04AB:0B4C
cs=0x4ab;eip=0x000b4d; 	J(CALL(sub_130ea,0));	// 9611                  call    sub_130EA ;~ 04AB:0B4D
cs=0x4ab;eip=0x000b50; 	T(ADD(sp, 4));	// 9612                  add     sp, 4 ;~ 04AB:0B50
cs=0x4ab;eip=0x000b53; 	T(XOR(ax, ax));	// 9613                  xor     ax, ax ;~ 04AB:0B53
cs=0x4ab;eip=0x000b55; 	X(PUSH(ax));	// 9614                  push    ax ;~ 04AB:0B55
cs=0x4ab;eip=0x000b56; 	T(ax = 0x0F;);	// 9615                  mov     ax, 0Fh ;~ 04AB:0B56
cs=0x4ab;eip=0x000b59; 	X(PUSH(ax));	// 9616                  push    ax ;~ 04AB:0B59
cs=0x4ab;eip=0x000b5a; 	T(ax = 0x0B;);	// 9617                  mov     ax, 0Bh ;~ 04AB:0B5A
cs=0x4ab;eip=0x000b5d; 	X(PUSH(ax));	// 9618                  push    ax ;~ 04AB:0B5D
cs=0x4ab;eip=0x000b5e; 	T(ax = 5;);	// 9619                  mov     ax, 5 ;~ 04AB:0B5E
cs=0x4ab;eip=0x000b61; 	X(PUSH(ax));	// 9620                  push    ax ;~ 04AB:0B61
cs=0x4ab;eip=0x000b62; 	J(CALL(sub_13398,0));	// 9621                  call    sub_13398 ;~ 04AB:0B62
cs=0x4ab;eip=0x000b65; 	T(ADD(sp, 8));	// 9622                  add     sp, 8 ;~ 04AB:0B65
cs=0x4ab;eip=0x000b68; 	T(XOR(ax, ax));	// 9623                  xor     ax, ax ;~ 04AB:0B68
cs=0x4ab;eip=0x000b6a; 	X(PUSH(ax));	// 9624                  push    ax ;~ 04AB:0B6A
cs=0x4ab;eip=0x000b6b; 	T(ax = 0x0F;);	// 9625                  mov     ax, 0Fh ;~ 04AB:0B6B
cs=0x4ab;eip=0x000b6e; 	X(PUSH(ax));	// 9626                  push    ax ;~ 04AB:0B6E
cs=0x4ab;eip=0x000b6f; 	T(ax = 0x37;);	// 9627                  mov     ax, 37h ; '7' ;~ 04AB:0B6F
cs=0x4ab;eip=0x000b72; 	X(PUSH(ax));	// 9628                  push    ax ;~ 04AB:0B72
cs=0x4ab;eip=0x000b73; 	T(ax = 6;);	// 9629                  mov     ax, 6 ;~ 04AB:0B73
cs=0x4ab;eip=0x000b76; 	X(PUSH(ax));	// 9630                  push    ax ;~ 04AB:0B76
cs=0x4ab;eip=0x000b77; 	J(CALL(sub_13398,0));	// 9631                  call    sub_13398 ;~ 04AB:0B77
cs=0x4ab;eip=0x000b7a; 	T(ADD(sp, 8));	// 9632                  add     sp, 8 ;~ 04AB:0B7A
cs=0x4ab;eip=0x000b7d; 	J(JMP(loc_13c24));	// 9633                  jmp     short loc_13C24 ;~ 04AB:0B7D
loc_13c10:
	// 4648 
cs=0x4ab;eip=0x000b80; 	T(ax = 5;);	// 9638                  mov     ax, 5 ;~ 04AB:0B80
cs=0x4ab;eip=0x000b83; 	X(PUSH(ax));	// 9639                  push    ax ;~ 04AB:0B83
cs=0x4ab;eip=0x000b84; 	J(CALL(sub_1331c,0));	// 9640                  call    sub_1331C ;~ 04AB:0B84
cs=0x4ab;eip=0x000b87; 	T(ADD(sp, 2));	// 9641                  add     sp, 2 ;~ 04AB:0B87
cs=0x4ab;eip=0x000b8a; 	T(ax = 6;);	// 9642                  mov     ax, 6 ;~ 04AB:0B8A
cs=0x4ab;eip=0x000b8d; 	X(PUSH(ax));	// 9643                  push    ax ;~ 04AB:0B8D
cs=0x4ab;eip=0x000b8e; 	J(CALL(sub_1331c,0));	// 9644                  call    sub_1331C ;~ 04AB:0B8E
cs=0x4ab;eip=0x000b91; 	T(ADD(sp, 2));	// 9645                  add     sp, 2 ;~ 04AB:0B91
loc_13c24:
	// 4649 
cs=0x4ab;eip=0x000b94; 	T(MOV(al, *(raddr(ds,0x286))));	// 9648                  mov     al, ds:286h ;~ 04AB:0B94
cs=0x4ab;eip=0x000b97; 	X(MOV(*(raddr(ds,0x287)), al));	// 9649                  mov     ds:287h, al ;~ 04AB:0B97
cs=0x4ab;eip=0x000b9a; 	J(JMP(loc_13c85));	// 9650                  jmp     loc_13C85 ;~ 04AB:0B9A
loc_13c2e:
	// 4650 
cs=0x4ab;eip=0x000b9e; 	T(MOV(al, *(raddr(ds,0x286))));	// 9655                  mov     al, ds:286h ;~ 04AB:0B9E
cs=0x4ab;eip=0x000ba1; 	T(AND(ax, 0x0FF));	// 9656                  and     ax, 0FFh ;~ 04AB:0BA1
cs=0x4ab;eip=0x000ba4; 	J(JNZ(loc_13c39));	// 9657                  jnz     short loc_13C39 ;~ 04AB:0BA4
cs=0x4ab;eip=0x000ba6; 	J(JMP(loc_13c85));	// 9658                  jmp     loc_13C85 ;~ 04AB:0BA6
loc_13c39:
	// 4651 
cs=0x4ab;eip=0x000ba9; 	T(MOV(ax, *(dw*)(raddr(ds,0x280))));	// 9662                  mov     ax, ds:280h ;~ 04AB:0BA9
cs=0x4ab;eip=0x000bac; 	T(CMP(*(dw*)(raddr(ds,0x27E)), ax));	// 9663                  cmp     ds:27Eh, ax ;~ 04AB:0BAC
cs=0x4ab;eip=0x000bb0; 	J(JZ(loc_13c85));	// 9664                  jz      short loc_13C85 ;~ 04AB:0BB0
cs=0x4ab;eip=0x000bb2; 	T(MOV(ax, *(dw*)(raddr(ds,0x27E))));	// 9665                  mov     ax, ds:27Eh ;~ 04AB:0BB2
cs=0x4ab;eip=0x000bb5; 	T(ADD(ax, 0x8FC));	// 9666                  add     ax, 8FCh ;~ 04AB:0BB5
cs=0x4ab;eip=0x000bb8; 	X(PUSH(ax));	// 9667                  push    ax ;~ 04AB:0BB8
cs=0x4ab;eip=0x000bb9; 	T(ax = 5;);	// 9668                  mov     ax, 5 ;~ 04AB:0BB9
cs=0x4ab;eip=0x000bbc; 	X(PUSH(ax));	// 9669                  push    ax ;~ 04AB:0BBC
cs=0x4ab;eip=0x000bbd; 	J(CALL(sub_131c2,0));	// 9670                  call    sub_131C2 ;~ 04AB:0BBD
cs=0x4ab;eip=0x000bc0; 	T(ADD(sp, 4));	// 9671                  add     sp, 4 ;~ 04AB:0BC0
cs=0x4ab;eip=0x000bc3; 	T(cx = 6;);	// 9672                  mov     cx, 6 ;~ 04AB:0BC3
cs=0x4ab;eip=0x000bc6; 	T(MOV(ax, *(dw*)(raddr(ds,0x27E))));	// 9673                  mov     ax, ds:27Eh ;~ 04AB:0BC6
cs=0x4ab;eip=0x000bc9; 	T(SHR(ax, cl));	// 9674                  shr     ax, cl ;~ 04AB:0BC9
cs=0x4ab;eip=0x000bcb; 	T(ADD(ax, 0x0F));	// 9675                  add     ax, 0Fh ;~ 04AB:0BCB
cs=0x4ab;eip=0x000bce; 	X(PUSH(ax));	// 9676                  push    ax ;~ 04AB:0BCE
cs=0x4ab;eip=0x000bcf; 	T(ax = 6;);	// 9677                  mov     ax, 6 ;~ 04AB:0BCF
cs=0x4ab;eip=0x000bd2; 	X(PUSH(ax));	// 9678                  push    ax ;~ 04AB:0BD2
cs=0x4ab;eip=0x000bd3; 	J(CALL(__dispatch_call,unk_2307e));	// 9679                  call    near ptr unk_2307E ;~ 04AB:0BD3
cs=0x4ab;eip=0x000bd6; 	T(ADD(sp, 4));	// 9680                  add     sp, 4 ;~ 04AB:0BD6
cs=0x4ab;eip=0x000bd9; 	T(cx = 7;);	// 9681                  mov     cx, 7 ;~ 04AB:0BD9
cs=0x4ab;eip=0x000bdc; 	T(MOV(ax, *(dw*)(raddr(ds,0x27E))));	// 9682                  mov     ax, ds:27Eh ;~ 04AB:0BDC
cs=0x4ab;eip=0x000bdf; 	T(SHR(ax, cl));	// 9683                  shr     ax, cl ;~ 04AB:0BDF
cs=0x4ab;eip=0x000be1; 	T(ADD(ax, 0x0F));	// 9684                  add     ax, 0Fh ;~ 04AB:0BE1
cs=0x4ab;eip=0x000be4; 	X(PUSH(ax));	// 9685                  push    ax ;~ 04AB:0BE4
cs=0x4ab;eip=0x000be5; 	T(ax = 5;);	// 9686                  mov     ax, 5 ;~ 04AB:0BE5
cs=0x4ab;eip=0x000be8; 	X(PUSH(ax));	// 9687                  push    ax ;~ 04AB:0BE8
cs=0x4ab;eip=0x000be9; 	J(CALL(__dispatch_call,unk_2307e));	// 9688                  call    near ptr unk_2307E ;~ 04AB:0BE9
cs=0x4ab;eip=0x000bec; 	T(ADD(sp, 4));	// 9689                  add     sp, 4 ;~ 04AB:0BEC
cs=0x4ab;eip=0x000bef; 	T(MOV(ax, *(dw*)(raddr(ds,0x27E))));	// 9690                  mov     ax, ds:27Eh ;~ 04AB:0BEF
cs=0x4ab;eip=0x000bf2; 	X(MOV(*(dw*)(raddr(ds,0x280)), ax));	// 9691                  mov     ds:280h, ax ;~ 04AB:0BF2
loc_13c85:
	// 4652 
cs=0x4ab;eip=0x000bf5; 	X(POP(di));	// 9695                  pop     di ;~ 04AB:0BF5
cs=0x4ab;eip=0x000bf6; 	X(POP(si));	// 9696                  pop     si ;~ 04AB:0BF6
cs=0x4ab;eip=0x000bf7; 	T(sp = bp;);	// 9697                  mov     sp, bp ;~ 04AB:0BF7
cs=0x4ab;eip=0x000bf9; 	X(POP(bp));	// 9698                  pop     bp ;~ 04AB:0BF9
cs=0x4ab;eip=0x000bfa; 	J(RETN(0));	// 9699                  retn ;~ 04AB:0BFA

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_13bae: 	goto loc_13bae;
        case m2c::kloc_13bb9: 	goto loc_13bb9;
        case m2c::kloc_13c10: 	goto loc_13c10;
        case m2c::kloc_13c24: 	goto loc_13c24;
        case m2c::kloc_13c2e: 	goto loc_13c2e;
        case m2c::kloc_13c39: 	goto loc_13c39;
        case m2c::kloc_13c85: 	goto loc_13c85;
        case m2c::ksub_13b8c: 	goto sub_13b8c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg1309_bfc_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg1309_bfc_proc:
    _begin:
loc_13c8c:
	// 4653 
cs=0x4ab;eip=0x000bfc; 	T(CMP(*(raddr(ds,0x0B9A)), 0));	// 9706                  cmp     byte ptr ds:0B9Ah, 0 ;~ 04AB:0BFC
cs=0x4ab;eip=0x000c01; 	J(JNZ(loc_13c96));	// 9707                  jnz     short loc_13C96 ;~ 04AB:0C01
cs=0x4ab;eip=0x000c03; 	J(JMP(locret_13cda));	// 9708                  jmp     locret_13CDA ;~ 04AB:0C03
loc_13c96:
	// 4654 
cs=0x4ab;eip=0x000c06; 	X(MOV(*(raddr(ds,0x0C2E)), 0));	// 9712                  mov     byte ptr ds:0C2Eh, 0 ;~ 04AB:0C06
cs=0x4ab;eip=0x000c0b; 	T(ax = 0x0B9C;);	// 9713                  mov     ax, 0B9Ch ;~ 04AB:0C0B
cs=0x4ab;eip=0x000c0e; 	X(PUSH(ax));	// 9714                  push    ax ;~ 04AB:0C0E
cs=0x4ab;eip=0x000c0f; 	J(CALL(sub_1389e,0));	// 9715                  call    sub_1389E ;~ 04AB:0C0F
cs=0x4ab;eip=0x000c12; 	T(ADD(sp, 2));	// 9716                  add     sp, 2 ;~ 04AB:0C12
cs=0x4ab;eip=0x000c15; 	T(ax = 0x0BB0;);	// 9717                  mov     ax, 0BB0h ;~ 04AB:0C15
cs=0x4ab;eip=0x000c18; 	X(PUSH(ax));	// 9718                  push    ax ;~ 04AB:0C18
cs=0x4ab;eip=0x000c19; 	J(CALL(sub_1389e,0));	// 9719                  call    sub_1389E ;~ 04AB:0C19
cs=0x4ab;eip=0x000c1c; 	T(ADD(sp, 2));	// 9720                  add     sp, 2 ;~ 04AB:0C1C
cs=0x4ab;eip=0x000c1f; 	T(ax = 0x0BC4;);	// 9721                  mov     ax, 0BC4h ;~ 04AB:0C1F
cs=0x4ab;eip=0x000c22; 	X(PUSH(ax));	// 9722                  push    ax ;~ 04AB:0C22
cs=0x4ab;eip=0x000c23; 	J(CALL(sub_1389e,0));	// 9723                  call    sub_1389E ;~ 04AB:0C23
cs=0x4ab;eip=0x000c26; 	T(ADD(sp, 2));	// 9724                  add     sp, 2 ;~ 04AB:0C26
cs=0x4ab;eip=0x000c29; 	T(ax = 0x0BD8;);	// 9725                  mov     ax, 0BD8h ;~ 04AB:0C29
cs=0x4ab;eip=0x000c2c; 	X(PUSH(ax));	// 9726                  push    ax ;~ 04AB:0C2C
cs=0x4ab;eip=0x000c2d; 	J(CALL(sub_1389e,0));	// 9727                  call    sub_1389E ;~ 04AB:0C2D
cs=0x4ab;eip=0x000c30; 	T(ADD(sp, 2));	// 9728                  add     sp, 2 ;~ 04AB:0C30
cs=0x4ab;eip=0x000c33; 	T(ax = 0x0BEC;);	// 9729                  mov     ax, 0BECh ;~ 04AB:0C33
cs=0x4ab;eip=0x000c36; 	X(PUSH(ax));	// 9730                  push    ax ;~ 04AB:0C36
cs=0x4ab;eip=0x000c37; 	J(CALL(sub_1389e,0));	// 9731                  call    sub_1389E ;~ 04AB:0C37
cs=0x4ab;eip=0x000c3a; 	T(ADD(sp, 2));	// 9732                  add     sp, 2 ;~ 04AB:0C3A
cs=0x4ab;eip=0x000c3d; 	T(ax = 0x0C00;);	// 9733                  mov     ax, 0C00h ;~ 04AB:0C3D
cs=0x4ab;eip=0x000c40; 	X(PUSH(ax));	// 9734                  push    ax ;~ 04AB:0C40
cs=0x4ab;eip=0x000c41; 	J(CALL(sub_1389e,0));	// 9735                  call    sub_1389E ;~ 04AB:0C41
cs=0x4ab;eip=0x000c44; 	T(ADD(sp, 2));	// 9736                  add     sp, 2 ;~ 04AB:0C44
cs=0x4ab;eip=0x000c47; 	J(CALL(sub_13b8c,0));	// 9737                  call    sub_13B8C ;~ 04AB:0C47
locret_13cda:
	// 4655 
cs=0x4ab;eip=0x000c4a; 	J(RETN(0));	// 9740                  retn ;~ 04AB:0C4A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_13c96: 	goto loc_13c96;
        case m2c::klocret_13cda: 	goto locret_13cda;
        case m2c::kseg1309_bfc_proc: 	goto seg1309_bfc_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

