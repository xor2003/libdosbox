/* THIS IS GENERATED FILE */

        
#include "f.exe.h"

                

 bool sub_10f7a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_10f7a:
    _begin:
#undef var_32
#define var_32 -0x32
	// 1229 var_32          = byte ptr -32h ;~ 0204:095A
#undef var_16
#define var_16 -0x16
	// 1230 var_16          = word ptr -16h ;~ 0204:095A
#undef var_12
#define var_12 -0x12
	// 1231 var_12          = word ptr -12h ;~ 0204:095A
#undef var_10
#define var_10 -0x10
	// 1232 var_10          = word ptr -10h ;~ 0204:095A
#undef var_4
#define var_4 -4
	// 1233 var_4           = word ptr -4 ;~ 0204:095A
#undef var_2
#define var_2 -2
	// 1234 var_2           = word ptr -2 ;~ 0204:095A
#undef arg_0
#define arg_0 4
	// 1235 arg_0           = word ptr  4 ;~ 0204:095A
cs=0x204;eip=0x00095a; 	X(ENTER(0x32, 0));	// 1237                  enter   32h, 0 ;~ 0204:095A
cs=0x204;eip=0x00095e; 	X(PUSH(es));	// 1238                  push    es ;~ 0204:095E
cs=0x204;eip=0x00095f; 	X(PUSH(di));	// 1239                  push    di ;~ 0204:095F
cs=0x204;eip=0x000960; 	X(PUSH(bx));	// 1240                  push    bx ;~ 0204:0960
cs=0x204;eip=0x000961; 	X(PUSH(cx));	// 1241                  push    cx ;~ 0204:0961
cs=0x204;eip=0x000962; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), 0x4900));	// 1242                  mov     [bp+var_16], 4900h ;~ 0204:0962
cs=0x204;eip=0x000967; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 1243                  mov     ax, [bp+arg_0] ;~ 0204:0967
cs=0x204;eip=0x00096a; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 1244                  mov     [bp+var_10], ax ;~ 0204:096A
cs=0x204;eip=0x00096d; 	T(ax = ss;);	// 1245                  mov     ax, ss ;~ 0204:096D
cs=0x204;eip=0x00096f; 	T(es = ax;);	// 1246                  mov     es, ax ;~ 0204:096F
cs=0x204;eip=0x000971; 	T(di = bp+var_32);	// 1247                  lea     di, [bp+var_32] ;~ 0204:0971
cs=0x204;eip=0x000974; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 1248                  mov     [bp+var_2], 0 ;~ 0204:0974
cs=0x204;eip=0x000979; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 1249                  mov     [bp+var_4], 0 ;~ 0204:0979
cs=0x204;eip=0x00097e; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), 0));	// 1250                  mov     [bp+var_12], 0 ;~ 0204:097E
cs=0x204;eip=0x000983; 	T(ax = 0x300;);	// 1251                  mov     ax, 300h ;~ 0204:0983
cs=0x204;eip=0x000986; 	T(bx = 0x21;);	// 1252                  mov     bx, 21h ; '!' ;~ 0204:0986
cs=0x204;eip=0x000989; 	T(XOR(cx, cx));	// 1253                  xor     cx, cx ;~ 0204:0989
cs=0x204;eip=0x00098b; 	J(CALL(__dispatch_call,unk_1f35f));	// 1254                  call    near ptr unk_1F35F ;~ 0204:098B
cs=0x204;eip=0x00098e; 	J(JC(loc_10fc5));	// 1255                  jb      short loc_10FC5 ;~ 0204:098E
cs=0x204;eip=0x000990; 	T(TEST(*(dw*)(raddr(ss,bp+var_12)), 1));	// 1256                  test    [bp+var_12], 1 ;~ 0204:0990
cs=0x204;eip=0x000995; 	J(JNZ(loc_10fbc));	// 1257                  jnz     short loc_10FBC ;~ 0204:0995
cs=0x204;eip=0x000997; 	T(ax = 0;);	// 1258                  mov     ax, 0 ;~ 0204:0997
cs=0x204;eip=0x00099a; 	J(JMP(loc_10fbf));	// 1259                  jmp     short loc_10FBF ;~ 0204:099A
loc_10fbc:
	// 4398 
cs=0x204;eip=0x00099c; 	T(ax = 1;);	// 1263                  mov     ax, 1 ;~ 0204:099C
loc_10fbf:
	// 4399 
cs=0x204;eip=0x00099f; 	X(POP(cx));	// 1267                  pop     cx ;~ 0204:099F
cs=0x204;eip=0x0009a0; 	X(POP(bx));	// 1268                  pop     bx ;~ 0204:09A0
cs=0x204;eip=0x0009a1; 	X(POP(di));	// 1269                  pop     di ;~ 0204:09A1
cs=0x204;eip=0x0009a2; 	X(POP(es));	// 1270                  pop     es ;~ 0204:09A2
cs=0x204;eip=0x0009a3; 	T(LEAVE);	// 1271                  leave ;~ 0204:09A3
cs=0x204;eip=0x0009a4; 	J(RETN(0));	// 1272                  retn ;~ 0204:09A4
loc_10fc5:
	// 4400 
cs=0x204;eip=0x0009a5; 	T(ax = 0x21;);	// 1276                  mov     ax, 21h ; '!' ;~ 0204:09A5
cs=0x204;eip=0x0009a8; 	J(JMP(loc_10fbf));	// 1277                  jmp     short loc_10FBF ;~ 0204:09A8

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_10fbc: 	goto loc_10fbc;
        case m2c::kloc_10fbf: 	goto loc_10fbf;
        case m2c::kloc_10fc5: 	goto loc_10fc5;
        case m2c::ksub_10f7a: 	goto sub_10f7a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_10fca(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_10fca:
    _begin:
#undef var_32
#define var_32 -0x32
	// 1288 var_32          = byte ptr -32h ;~ 0204:09AA
#undef var_22
#define var_22 -0x22
	// 1289 var_22          = word ptr -22h ;~ 0204:09AA
#undef var_16
#define var_16 -0x16
	// 1290 var_16          = word ptr -16h ;~ 0204:09AA
#undef var_12
#define var_12 -0x12
	// 1291 var_12          = word ptr -12h ;~ 0204:09AA
#undef var_10
#define var_10 -0x10
	// 1292 var_10          = word ptr -10h ;~ 0204:09AA
#undef var_4
#define var_4 -4
	// 1293 var_4           = word ptr -4 ;~ 0204:09AA
#undef var_2
#define var_2 -2
	// 1294 var_2           = word ptr -2 ;~ 0204:09AA
#undef arg_0
#define arg_0 4
	// 1295 arg_0           = word ptr  4 ;~ 0204:09AA
#undef arg_2
#define arg_2 6
	// 1296 arg_2           = word ptr  6 ;~ 0204:09AA
cs=0x204;eip=0x0009aa; 	X(ENTER(0x32, 0));	// 1298                  enter   32h, 0 ;~ 0204:09AA
cs=0x204;eip=0x0009ae; 	X(PUSH(es));	// 1299                  push    es ;~ 0204:09AE
cs=0x204;eip=0x0009af; 	X(PUSH(di));	// 1300                  push    di ;~ 0204:09AF
cs=0x204;eip=0x0009b0; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), 0x4A00));	// 1301                  mov     [bp+var_16], 4A00h ;~ 0204:09B0
cs=0x204;eip=0x0009b5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 1302                  mov     ax, [bp+arg_0] ;~ 0204:09B5
cs=0x204;eip=0x0009b8; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 1303                  mov     [bp+var_10], ax ;~ 0204:09B8
cs=0x204;eip=0x0009bb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 1304                  mov     ax, [bp+arg_2] ;~ 0204:09BB
cs=0x204;eip=0x0009be; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 1305                  mov     [bp+var_22], ax ;~ 0204:09BE
cs=0x204;eip=0x0009c1; 	T(ax = ss;);	// 1306                  mov     ax, ss ;~ 0204:09C1
cs=0x204;eip=0x0009c3; 	T(es = ax;);	// 1307                  mov     es, ax ;~ 0204:09C3
cs=0x204;eip=0x0009c5; 	T(di = bp+var_32);	// 1308                  lea     di, [bp+var_32] ;~ 0204:09C5
cs=0x204;eip=0x0009c8; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 1309                  mov     [bp+var_2], 0 ;~ 0204:09C8
cs=0x204;eip=0x0009cd; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 1310                  mov     [bp+var_4], 0 ;~ 0204:09CD
cs=0x204;eip=0x0009d2; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), 0));	// 1311                  mov     [bp+var_12], 0 ;~ 0204:09D2
cs=0x204;eip=0x0009d7; 	T(ax = 0x300;);	// 1312                  mov     ax, 300h ;~ 0204:09D7
cs=0x204;eip=0x0009da; 	T(bx = 0x21;);	// 1313                  mov     bx, 21h ; '!' ;~ 0204:09DA
cs=0x204;eip=0x0009dd; 	T(XOR(cx, cx));	// 1314                  xor     cx, cx ;~ 0204:09DD
cs=0x204;eip=0x0009df; 	X(PUSH(ax));	// 1315                  push    ax ;~ 0204:09DF
cs=0x204;eip=0x0009e0; 	X(PUSH(ax));	// 1316                  push    ax ;~ 0204:09E0
cs=0x204;eip=0x0009e1; 	X(PUSH(bx));	// 1317                  push    bx ;~ 0204:09E1
cs=0x204;eip=0x0009e2; 	X(PUSHF);	// 1318                  pushf ;~ 0204:09E2
cs=0x204;eip=0x0009e3; 	T(ax = 0x5100;);	// 1319                  mov     ax, 5100h ;~ 0204:09E3
cs=0x204;eip=0x0009e6; 	S(_INT(0x21));	// 1320                  int     21h             ; DOS - 2+ internal - GET PSP SEGMENT ;~ 0204:09E6
cs=0x204;eip=0x0009e8; 	T(ax = bx;);	// 1322                  mov     ax, bx ;~ 0204:09E8
cs=0x204;eip=0x0009ea; 	T(bx = sp;);	// 1323                  mov     bx, sp ;~ 0204:09EA
cs=0x204;eip=0x0009ec; 	X(MOV(*(dw*)(raddr(ss,bx+6)), ax));	// 1324                  mov     ss:[bx+6], ax ;~ 0204:09EC
cs=0x204;eip=0x0009f0; 	T(bx = *(dw*)((amsruntimelibra)+3););	// 1325                  mov     bx, word ptr aMsRunTimeLibra+3 ; "Run-Time Library - Copyright (c) 1988, "... ;~ 0204:09F0
cs=0x204;eip=0x0009f4; 	T(ax = 0x5000;);	// 1326                  mov     ax, 5000h ;~ 0204:09F4
cs=0x204;eip=0x0009f7; 	S(_INT(0x21));	// 1327                  int     21h             ; DOS - 2+ internal - SET PSP SEGMENT ;~ 0204:09F7
cs=0x204;eip=0x0009f9; 	X(POPF);	// 1329                  popf ;~ 0204:09F9
cs=0x204;eip=0x0009fa; 	X(POP(bx));	// 1330                  pop     bx ;~ 0204:09FA
cs=0x204;eip=0x0009fb; 	X(POP(ax));	// 1331                  pop     ax ;~ 0204:09FB
cs=0x204;eip=0x0009fc; 	J(CALL(__dispatch_call,unk_1f35f));	// 1332                  call    near ptr unk_1F35F ;~ 0204:09FC
cs=0x204;eip=0x0009ff; 	X(PUSH(ax));	// 1333                  push    ax ;~ 0204:09FF
cs=0x204;eip=0x000a00; 	X(PUSH(bx));	// 1334                  push    bx ;~ 0204:0A00
cs=0x204;eip=0x000a01; 	X(PUSHF);	// 1335                  pushf ;~ 0204:0A01
cs=0x204;eip=0x000a02; 	T(bx = sp;);	// 1336                  mov     bx, sp ;~ 0204:0A02
cs=0x204;eip=0x000a04; 	T(MOV(bx, *(dw*)(raddr(ss,bx+6))));	// 1337                  mov     bx, ss:[bx+6] ;~ 0204:0A04
cs=0x204;eip=0x000a08; 	T(ax = 0x5000;);	// 1338                  mov     ax, 5000h ;~ 0204:0A08
cs=0x204;eip=0x000a0b; 	S(_INT(0x21));	// 1339                  int     21h             ; DOS - 2+ internal - SET PSP SEGMENT ;~ 0204:0A0B
cs=0x204;eip=0x000a0d; 	X(POPF);	// 1341                  popf ;~ 0204:0A0D
cs=0x204;eip=0x000a0e; 	X(POP(bx));	// 1342                  pop     bx ;~ 0204:0A0E
cs=0x204;eip=0x000a0f; 	X(POP(ax));	// 1343                  pop     ax ;~ 0204:0A0F
cs=0x204;eip=0x000a10; 	T(ADD(sp, 2));	// 1344                  add     sp, 2 ;~ 0204:0A10
cs=0x204;eip=0x000a13; 	J(JC(loc_1104b));	// 1345                  jb      short loc_1104B ;~ 0204:0A13
cs=0x204;eip=0x000a15; 	T(TEST(*(dw*)(raddr(ss,bp+var_12)), 1));	// 1346                  test    [bp+var_12], 1 ;~ 0204:0A15
cs=0x204;eip=0x000a1a; 	J(JNZ(loc_11041));	// 1347                  jnz     short loc_11041 ;~ 0204:0A1A
cs=0x204;eip=0x000a1c; 	T(ax = 0;);	// 1348                  mov     ax, 0 ;~ 0204:0A1C
cs=0x204;eip=0x000a1f; 	J(JMP(loc_11044));	// 1349                  jmp     short loc_11044 ;~ 0204:0A1F
loc_11041:
	// 4401 
cs=0x204;eip=0x000a21; 	T(ax = 1;);	// 1353                  mov     ax, 1 ;~ 0204:0A21
loc_11044:
	// 4402 
cs=0x204;eip=0x000a24; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_22))));	// 1357                  mov     bx, [bp+var_22] ;~ 0204:0A24
cs=0x204;eip=0x000a27; 	X(POP(di));	// 1358                  pop     di ;~ 0204:0A27
cs=0x204;eip=0x000a28; 	X(POP(es));	// 1359                  pop     es ;~ 0204:0A28
cs=0x204;eip=0x000a29; 	T(LEAVE);	// 1360                  leave ;~ 0204:0A29
cs=0x204;eip=0x000a2a; 	J(RETN(0));	// 1361                  retn ;~ 0204:0A2A
loc_1104b:
	// 4403 
cs=0x204;eip=0x000a2b; 	T(ax = 0x21;);	// 1365                  mov     ax, 21h ; '!' ;~ 0204:0A2B
cs=0x204;eip=0x000a2e; 	J(JMP(loc_11044));	// 1366                  jmp     short loc_11044 ;~ 0204:0A2E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_11041: 	goto loc_11041;
        case m2c::kloc_11044: 	goto loc_11044;
        case m2c::kloc_1104b: 	goto loc_1104b;
        case m2c::ksub_10fca: 	goto sub_10fca;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_11050(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11050:
    _begin:
#undef var_2
#define var_2 -2
	// 1376 var_2           = byte ptr -2 ;~ 0204:0A30
cs=0x204;eip=0x000a30; 	X(ENTER(2, 0));	// 1378                  enter   2, 0 ;~ 0204:0A30
cs=0x204;eip=0x000a34; 	X(PUSH(es));	// 1379                  push    es ;~ 0204:0A34
cs=0x204;eip=0x000a35; 	X(PUSH(si));	// 1380                  push    si ;~ 0204:0A35
cs=0x204;eip=0x000a36; 	X(PUSH(di));	// 1381                  push    di ;~ 0204:0A36
loc_11057:
	// 4404 
cs=0x204;eip=0x000a37; 	T(cx = *(dw*)(((db*)word_4ae5c)+0x484););	// 1384                  mov     cx, word_4AE5C+484h ;~ 0204:0A37
cs=0x204;eip=0x000a3b; 	T(CMP(cx, *(dw*)(((db*)word_4ae5c)+0x47C)));	// 1385                  cmp     cx, word_4AE5C+47Ch ;~ 0204:0A3B
cs=0x204;eip=0x000a3f; 	J(JNC(loc_11066));	// 1386                  jnb     short loc_11066 ;~ 0204:0A3F
cs=0x204;eip=0x000a41; 	T(ax = 1;);	// 1387                  mov     ax, 1 ;~ 0204:0A41
cs=0x204;eip=0x000a44; 	J(JMP(loc_110ab));	// 1388                  jmp     short loc_110AB ;~ 0204:0A44
loc_11066:
	// 4405 
cs=0x204;eip=0x000a46; 	T(bx = cx;);	// 1392                  mov     bx, cx ;~ 0204:0A46
cs=0x204;eip=0x000a48; 	T(SHL(cx, 0x0A));	// 1393                  shl     cx, 0Ah ;~ 0204:0A48
cs=0x204;eip=0x000a4b; 	T(SHR(bx, 6));	// 1394                  shr     bx, 6 ;~ 0204:0A4B
cs=0x204;eip=0x000a4e; 	T(ax = 0x501;);	// 1395                  mov     ax, 501h ;~ 0204:0A4E
cs=0x204;eip=0x000a51; 	J(CALL(__dispatch_call,unk_1f35f));	// 1396                  call    near ptr unk_1F35F ;~ 0204:0A51
cs=0x204;eip=0x000a54; 	J(JNC(loc_11084));	// 1397                  jnb     short loc_11084 ;~ 0204:0A54
cs=0x204;eip=0x000a56; 	T(CMP(*(dw*)(((db*)word_4ae5c)+0x484), 0x40));	// 1398                  cmp     word_4AE5C+484h, 40h ; '@' ;~ 0204:0A56
cs=0x204;eip=0x000a5b; 	J(JBE(loc_110ab));	// 1399                  jbe     short loc_110AB ;~ 0204:0A5B
cs=0x204;eip=0x000a5d; 	X(SUB(*(dw*)(((db*)word_4ae5c)+0x484), 0x40));	// 1400                  sub     word_4AE5C+484h, 40h ; '@' ;~ 0204:0A5D
cs=0x204;eip=0x000a62; 	J(JMP(loc_11057));	// 1401                  jmp     short loc_11057 ;~ 0204:0A62
loc_11084:
	// 4406 
cs=0x204;eip=0x000a64; 	X(*(dw*)(((db*)word_4ae5c)+0x48A) = di;);	// 1405                  mov     word_4AE5C+48Ah, di ;~ 0204:0A64
cs=0x204;eip=0x000a68; 	X(*(dw*)(((db*)word_4ae5c)+0x48C) = si;);	// 1406                  mov     word_4AE5C+48Ch, si ;~ 0204:0A68
cs=0x204;eip=0x000a6c; 	T(ax = *(dw*)(((db*)word_4ae5c)+0x484););	// 1407                  mov     ax, word_4AE5C+484h ;~ 0204:0A6C
cs=0x204;eip=0x000a6f; 	X(ADD(*(dw*)(((db*)word_4ae5c)+0x488), ax));	// 1408                  add     word_4AE5C+488h, ax ;~ 0204:0A6F
cs=0x204;eip=0x000a73; 	T(dx = ax;);	// 1409                  mov     dx, ax ;~ 0204:0A73
cs=0x204;eip=0x000a75; 	T(SHL(ax, 0x0A));	// 1410                  shl     ax, 0Ah ;~ 0204:0A75
cs=0x204;eip=0x000a78; 	T(SHR(dx, 6));	// 1411                  shr     dx, 6 ;~ 0204:0A78
cs=0x204;eip=0x000a7b; 	T(si = bp+var_2);	// 1412                  lea     si, [bp+var_2] ;~ 0204:0A7B
cs=0x204;eip=0x000a7e; 	X(PUSH(bx));	// 1413                  push    bx ;~ 0204:0A7E
cs=0x204;eip=0x000a7f; 	X(PUSH(cx));	// 1414                  push    cx ;~ 0204:0A7F
cs=0x204;eip=0x000a80; 	X(PUSH(dx));	// 1415                  push    dx ;~ 0204:0A80
cs=0x204;eip=0x000a81; 	X(PUSH(ax));	// 1416                  push    ax ;~ 0204:0A81
cs=0x204;eip=0x000a82; 	X(PUSH(0));	// 1417                  push    0 ;~ 0204:0A82
cs=0x204;eip=0x000a84; 	X(PUSH(ss));	// 1418                  push    ss ;~ 0204:0A84
cs=0x204;eip=0x000a85; 	X(PUSH(si));	// 1419                  push    si ;~ 0204:0A85
cs=0x204;eip=0x000a86; 	T(NOP);	// 1420                  nop ;~ 0204:0A86
cs=0x204;eip=0x000a87; 	X(PUSH(cs));	// 1421                  push    cs ;~ 0204:0A87
cs=0x204;eip=0x000a88; 	J(CALL(__dispatch_call,unk_18fd8));	// 1422                  call    near ptr unk_18FD8 ;~ 0204:0A88
loc_110ab:
	// 4407 
cs=0x204;eip=0x000a8b; 	X(POP(di));	// 1426                  pop     di ;~ 0204:0A8B
cs=0x204;eip=0x000a8c; 	X(POP(si));	// 1427                  pop     si ;~ 0204:0A8C
cs=0x204;eip=0x000a8d; 	X(POP(es));	// 1428                  pop     es ;~ 0204:0A8D
cs=0x204;eip=0x000a8e; 	T(LEAVE);	// 1429                  leave ;~ 0204:0A8E
cs=0x204;eip=0x000a8f; 	J(RETN(0));	// 1430                  retn ;~ 0204:0A8F

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_11057: 	goto loc_11057;
        case m2c::kloc_11066: 	goto loc_11066;
        case m2c::kloc_11084: 	goto loc_11084;
        case m2c::kloc_110ab: 	goto loc_110ab;
        case m2c::ksub_11050: 	goto sub_11050;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_110b0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_110b0:
    _begin:
cs=0x204;eip=0x000a90; 	T(es = *(dw*)((amsruntimelibra)+3););	// 1438                  mov     es, word ptr aMsRunTimeLibra+3 ; "Run-Time Library - Copyright (c) 1988, "... ;~ 0204:0A90
cs=0x204;eip=0x000a94; 	T(MOV(es, *(dw*)(raddr(es,0x2C))));	// 1440                  mov     es, word ptr es:2Ch ;~ 0204:0A94
cs=0x204;eip=0x000a99; 	T(XOR(di, di));	// 1442                  xor     di, di ;~ 0204:0A99
cs=0x204;eip=0x000a9b; 	T(XOR(ax, ax));	// 1443                  xor     ax, ax ;~ 0204:0A9B
cs=0x204;eip=0x000a9d; 	T(CLD);	// 1444                  cld ;~ 0204:0A9D
loc_110be:
	// 4408 
cs=0x204;eip=0x000a9e; 	X(PUSH(di));	// 1447                  push    di ;~ 0204:0A9E
cs=0x204;eip=0x000a9f; 	T(si = 0x2846;);	// 1448                  mov     si, 2846h ;~ 0204:0A9F
cs=0x204;eip=0x000aa2; 	T(cx = 4;);	// 1449                  mov     cx, 4 ;~ 0204:0AA2
	// 1450                  repe cmpsb ;~ 0204:0AA5
cs=0x204;eip=0x000aa5; 	T(	REPE CMPSB);	// 1450                  repe cmpsb ;~ 0204:0AA5
cs=0x204;eip=0x000aa7; 	X(POP(di));	// 1451                  pop     di ;~ 0204:0AA7
cs=0x204;eip=0x000aa8; 	J(JZ(loc_110d8));	// 1452                  jz      short loc_110D8 ;~ 0204:0AA8
cs=0x204;eip=0x000aaa; 	T(cx = 0x0FFFF;);	// 1453                  mov     cx, 0FFFFh ;~ 0204:0AAA
	// 1454                  repne scasb ;~ 0204:0AAD
cs=0x204;eip=0x000aad; 	T(	REPNE SCASB);	// 1454                  repne scasb ;~ 0204:0AAD
cs=0x204;eip=0x000aaf; 	T(CMP(*(raddr(es,di)), 0));	// 1455                  cmp     byte ptr es:[di], 0 ;~ 0204:0AAF
cs=0x204;eip=0x000ab3; 	J(JNZ(loc_110be));	// 1456                  jnz     short loc_110BE ;~ 0204:0AB3
cs=0x204;eip=0x000ab5; 	T(XOR(ax, ax));	// 1457                  xor     ax, ax ;~ 0204:0AB5
cs=0x204;eip=0x000ab7; 	J(RETN(0));	// 1458                  retn ;~ 0204:0AB7
loc_110d8:
	// 4409 
cs=0x204;eip=0x000ab8; 	T(ADD(di, 4));	// 1462                  add     di, 4 ;~ 0204:0AB8
cs=0x204;eip=0x000abb; 	X(PUSH(di));	// 1463                  push    di ;~ 0204:0ABB
loc_110dc:
	// 4410 
cs=0x204;eip=0x000abc; 	T(MOV(al, *(raddr(es,di))));	// 1466                  mov     al, es:[di] ;~ 0204:0ABC
cs=0x204;eip=0x000abf; 	T(CMP(al, 0x61));	// 1467                  cmp     al, 61h ; 'a' ;~ 0204:0ABF
cs=0x204;eip=0x000ac1; 	J(JC(loc_110ec));	// 1468                  jb      short loc_110EC ;~ 0204:0AC1
cs=0x204;eip=0x000ac3; 	T(CMP(al, 0x7A));	// 1469                  cmp     al, 7Ah ; 'z' ;~ 0204:0AC3
cs=0x204;eip=0x000ac5; 	J(JA(loc_110ec));	// 1470                  ja      short loc_110EC ;~ 0204:0AC5
cs=0x204;eip=0x000ac7; 	T(ADD(al, 0x0E0));	// 1471                  add     al, 0E0h ;~ 0204:0AC7
cs=0x204;eip=0x000ac9; 	X(MOV(*(raddr(es,di)), al));	// 1472                  mov     es:[di], al ;~ 0204:0AC9
loc_110ec:
	// 4411 
cs=0x204;eip=0x000acc; 	T(INC(di));	// 1476                  inc     di ;~ 0204:0ACC
cs=0x204;eip=0x000acd; 	T(CMP(al, 0));	// 1477                  cmp     al, 0 ;~ 0204:0ACD
cs=0x204;eip=0x000acf; 	J(JNZ(loc_110dc));	// 1478                  jnz     short loc_110DC ;~ 0204:0ACF
cs=0x204;eip=0x000ad1; 	X(POP(di));	// 1479                  pop     di ;~ 0204:0AD1
loc_110f2:
	// 4412 
cs=0x204;eip=0x000ad2; 	T(MOV(al, *(raddr(es,di))));	// 1483                  mov     al, es:[di] ;~ 0204:0AD2
cs=0x204;eip=0x000ad5; 	T(INC(di));	// 1484                  inc     di ;~ 0204:0AD5
cs=0x204;eip=0x000ad6; 	T(CMP(al, 0));	// 1485                  cmp     al, 0 ;~ 0204:0AD6
cs=0x204;eip=0x000ad8; 	J(JNZ(loc_110fd));	// 1486                  jnz     short loc_110FD ;~ 0204:0AD8
cs=0x204;eip=0x000ada; 	J(JMP(loc_111c3));	// 1487                  jmp     loc_111C3 ;~ 0204:0ADA
loc_110fd:
	// 4413 
cs=0x204;eip=0x000add; 	T(CMP(al, 0x20));	// 1491                  cmp     al, 20h ; ' ' ;~ 0204:0ADD
cs=0x204;eip=0x000adf; 	J(JBE(loc_110f2));	// 1492                  jbe     short loc_110F2 ;~ 0204:0ADF
cs=0x204;eip=0x000ae1; 	T(DEC(di));	// 1493                  dec     di ;~ 0204:0AE1
cs=0x204;eip=0x000ae2; 	T(dx = di;);	// 1494                  mov     dx, di ;~ 0204:0AE2
cs=0x204;eip=0x000ae4; 	T(bx = 0x287C;);	// 1495                  mov     bx, 287Ch ;~ 0204:0AE4
loc_11107:
	// 4414 
cs=0x204;eip=0x000ae7; 	T(MOV(si, *(dw*)(raddr(ds,bx))));	// 1498                  mov     si, [bx] ;~ 0204:0AE7
cs=0x204;eip=0x000ae9; 	T(MOV(cx, *(dw*)(raddr(ds,bx+2))));	// 1499                  mov     cx, [bx+2] ;~ 0204:0AE9
cs=0x204;eip=0x000aec; 	T(di = dx;);	// 1500                  mov     di, dx ;~ 0204:0AEC
	// 1501                  repe cmpsb ;~ 0204:0AEE
cs=0x204;eip=0x000aee; 	T(	REPE CMPSB);	// 1501                  repe cmpsb ;~ 0204:0AEE
cs=0x204;eip=0x000af0; 	J(JZ(loc_11144));	// 1502                  jz      short loc_11144 ;~ 0204:0AF0
cs=0x204;eip=0x000af2; 	T(ADD(bx, 6));	// 1503                  add     bx, 6 ;~ 0204:0AF2
cs=0x204;eip=0x000af5; 	T(CMP(*(dw*)(raddr(ds,bx)), 0));	// 1504                  cmp     word ptr [bx], 0 ;~ 0204:0AF5
cs=0x204;eip=0x000af8; 	J(JNZ(loc_11107));	// 1505                  jnz     short loc_11107 ;~ 0204:0AF8
cs=0x204;eip=0x000afa; 	T(di = dx;);	// 1506                  mov     di, dx ;~ 0204:0AFA
loc_1111c:
	// 4415 
cs=0x204;eip=0x000afc; 	T(MOV(al, *(raddr(es,di))));	// 1510                  mov     al, es:[di] ;~ 0204:0AFC
cs=0x204;eip=0x000aff; 	T(INC(di));	// 1511                  inc     di ;~ 0204:0AFF
cs=0x204;eip=0x000b00; 	T(CMP(al, 0));	// 1512                  cmp     al, 0 ;~ 0204:0B00
cs=0x204;eip=0x000b02; 	J(JNZ(loc_11127));	// 1513                  jnz     short loc_11127 ;~ 0204:0B02
cs=0x204;eip=0x000b04; 	J(JMP(loc_111c3));	// 1514                  jmp     loc_111C3 ;~ 0204:0B04
loc_11127:
	// 4416 
cs=0x204;eip=0x000b07; 	T(CMP(al, 0x20));	// 1518                  cmp     al, 20h ; ' ' ;~ 0204:0B07
cs=0x204;eip=0x000b09; 	J(JA(loc_1111c));	// 1519                  ja      short loc_1111C ;~ 0204:0B09
cs=0x204;eip=0x000b0b; 	T(DEC(di));	// 1520                  dec     di ;~ 0204:0B0B
cs=0x204;eip=0x000b0c; 	X(PUSH(ax));	// 1521                  push    ax ;~ 0204:0B0C
cs=0x204;eip=0x000b0d; 	X(PUSH(bx));	// 1522                  push    bx ;~ 0204:0B0D
cs=0x204;eip=0x000b0e; 	X(PUSH(cx));	// 1523                  push    cx ;~ 0204:0B0E
cs=0x204;eip=0x000b0f; 	X(PUSH(dx));	// 1524                  push    dx ;~ 0204:0B0F
cs=0x204;eip=0x000b10; 	T(cx = 0x38;);	// 1525                  mov     cx, 38h ; '8' ;~ 0204:0B10
cs=0x204;eip=0x000b13; 	T(dx = 0x28A8;);	// 1526                  mov     dx, 28A8h ;~ 0204:0B13
cs=0x204;eip=0x000b16; 	T(bx = 2;);	// 1527                  mov     bx, 2 ;~ 0204:0B16
cs=0x204;eip=0x000b19; 	T(ax = 0x4000;);	// 1528                  mov     ax, 4000h ;~ 0204:0B19
cs=0x204;eip=0x000b1c; 	S(_INT(0x21));	// 1529                  int     21h             ; DOS - 2+ - WRITE TO FILE WITH HANDLE ;~ 0204:0B1C
cs=0x204;eip=0x000b1e; 	X(POP(dx));	// 1531                  pop     dx ;~ 0204:0B1E
cs=0x204;eip=0x000b1f; 	X(POP(cx));	// 1532                  pop     cx ;~ 0204:0B1F
cs=0x204;eip=0x000b20; 	X(POP(bx));	// 1533                  pop     bx ;~ 0204:0B20
cs=0x204;eip=0x000b21; 	X(POP(ax));	// 1534                  pop     ax ;~ 0204:0B21
cs=0x204;eip=0x000b22; 	J(JMP(loc_110f2));	// 1535                  jmp     short loc_110F2 ;~ 0204:0B22
loc_11144:
	// 4417 
cs=0x204;eip=0x000b24; 	T(MOV(al, *(raddr(es,di))));	// 1540                  mov     al, es:[di] ;~ 0204:0B24
cs=0x204;eip=0x000b27; 	T(INC(di));	// 1541                  inc     di ;~ 0204:0B27
cs=0x204;eip=0x000b28; 	T(CMP(al, 0));	// 1542                  cmp     al, 0 ;~ 0204:0B28
cs=0x204;eip=0x000b2a; 	J(JZ(loc_111c3));	// 1543                  jz      short loc_111C3 ;~ 0204:0B2A
cs=0x204;eip=0x000b2c; 	T(CMP(al, 0x20));	// 1544                  cmp     al, 20h ; ' ' ;~ 0204:0B2C
cs=0x204;eip=0x000b2e; 	J(JBE(loc_11144));	// 1545                  jbe     short loc_11144 ;~ 0204:0B2E
cs=0x204;eip=0x000b30; 	T(DEC(di));	// 1546                  dec     di ;~ 0204:0B30
cs=0x204;eip=0x000b31; 	X(*(dw*)(((db*)word_4ae5c)+0x52A) = 0x0A;);	// 1547                  mov     word_4AE5C+52Ah, 0Ah ;~ 0204:0B31
cs=0x204;eip=0x000b37; 	T(CMP(*(raddr(es,di)), 0x78));	// 1548                  cmp     byte ptr es:[di], 78h ; 'x' ;~ 0204:0B37
cs=0x204;eip=0x000b3b; 	J(JZ(loc_1117a));	// 1549                  jz      short loc_1117A ;~ 0204:0B3B
cs=0x204;eip=0x000b3d; 	T(CMP(*(raddr(es,di)), 0x58));	// 1550                  cmp     byte ptr es:[di], 58h ; 'X' ;~ 0204:0B3D
cs=0x204;eip=0x000b41; 	J(JZ(loc_1117a));	// 1551                  jz      short loc_1117A ;~ 0204:0B41
cs=0x204;eip=0x000b43; 	T(CMP(*(raddr(es,di)), 0x24));	// 1552                  cmp     byte ptr es:[di], 24h ; '$' ;~ 0204:0B43
cs=0x204;eip=0x000b47; 	J(JZ(loc_1117a));	// 1553                  jz      short loc_1117A ;~ 0204:0B47
cs=0x204;eip=0x000b49; 	T(CMP(*(dw*)(raddr(es,di)), 0x7830));	// 1554                  cmp     word ptr es:[di], 7830h ;~ 0204:0B49
cs=0x204;eip=0x000b4e; 	J(JZ(loc_11179));	// 1555                  jz      short loc_11179 ;~ 0204:0B4E
cs=0x204;eip=0x000b50; 	T(CMP(*(dw*)(raddr(es,di)), 0x5830));	// 1556                  cmp     word ptr es:[di], 5830h ;~ 0204:0B50
cs=0x204;eip=0x000b55; 	J(JZ(loc_11179));	// 1557                  jz      short loc_11179 ;~ 0204:0B55
cs=0x204;eip=0x000b57; 	J(JNZ(loc_11181));	// 1558                  jnz     short loc_11181 ;~ 0204:0B57
loc_11179:
	// 4418 
cs=0x204;eip=0x000b59; 	T(INC(di));	// 1562                  inc     di ;~ 0204:0B59
loc_1117a:
	// 4419 
cs=0x204;eip=0x000b5a; 	X(*(dw*)(((db*)word_4ae5c)+0x52A) = 0x10;);	// 1566                  mov     word_4AE5C+52Ah, 10h ;~ 0204:0B5A
cs=0x204;eip=0x000b60; 	T(INC(di));	// 1567                  inc     di ;~ 0204:0B60
loc_11181:
	// 4420 
cs=0x204;eip=0x000b61; 	T(MOV(si, *(dw*)(raddr(ds,bx+4))));	// 1570                  mov     si, [bx+4] ;~ 0204:0B61
cs=0x204;eip=0x000b64; 	X(MOV(*(dw*)(raddr(ds,si)), 0));	// 1571                  mov     word ptr [si], 0 ;~ 0204:0B64
loc_11188:
	// 4421 
cs=0x204;eip=0x000b68; 	T(MOV(al, *(raddr(es,di))));	// 1574                  mov     al, es:[di] ;~ 0204:0B68
cs=0x204;eip=0x000b6b; 	T(INC(di));	// 1575                  inc     di ;~ 0204:0B6B
cs=0x204;eip=0x000b6c; 	T(CMP(al, 0));	// 1576                  cmp     al, 0 ;~ 0204:0B6C
cs=0x204;eip=0x000b6e; 	J(JZ(loc_111c3));	// 1577                  jz      short loc_111C3 ;~ 0204:0B6E
cs=0x204;eip=0x000b70; 	T(CMP(al, 0x20));	// 1578                  cmp     al, 20h ; ' ' ;~ 0204:0B70
cs=0x204;eip=0x000b72; 	J(JA(loc_11197));	// 1579                  ja      short loc_11197 ;~ 0204:0B72
cs=0x204;eip=0x000b74; 	J(JMP(loc_110f2));	// 1580                  jmp     loc_110F2 ;~ 0204:0B74
loc_11197:
	// 4422 
cs=0x204;eip=0x000b77; 	T(CMP(al, 0x61));	// 1584                  cmp     al, 61h ; 'a' ;~ 0204:0B77
cs=0x204;eip=0x000b79; 	J(JC(loc_1119d));	// 1585                  jb      short loc_1119D ;~ 0204:0B79
cs=0x204;eip=0x000b7b; 	T(SUB(al, 0x20));	// 1586                  sub     al, 20h ; ' ' ;~ 0204:0B7B
loc_1119d:
	// 4423 
cs=0x204;eip=0x000b7d; 	T(SUB(al, 0x30));	// 1589                  sub     al, 30h ; '0' ;~ 0204:0B7D
cs=0x204;eip=0x000b7f; 	T(CMP(al, 0x0A));	// 1590                  cmp     al, 0Ah ;~ 0204:0B7F
cs=0x204;eip=0x000b81; 	J(JC(loc_111b3));	// 1591                  jb      short loc_111B3 ;~ 0204:0B81
cs=0x204;eip=0x000b83; 	T(CMP(*(dw*)(((db*)word_4ae5c)+0x52A), 0x10));	// 1592                  cmp     word_4AE5C+52Ah, 10h ;~ 0204:0B83
cs=0x204;eip=0x000b88; 	J(JNZ(loc_111b0));	// 1593                  jnz     short loc_111B0 ;~ 0204:0B88
cs=0x204;eip=0x000b8a; 	T(SUB(al, 7));	// 1594                  sub     al, 7 ;~ 0204:0B8A
cs=0x204;eip=0x000b8c; 	T(CMP(al, 0x0F));	// 1595                  cmp     al, 0Fh ;~ 0204:0B8C
cs=0x204;eip=0x000b8e; 	J(JC(loc_111b3));	// 1596                  jb      short loc_111B3 ;~ 0204:0B8E
loc_111b0:
	// 4424 
cs=0x204;eip=0x000b90; 	J(JMP(loc_1111c));	// 1599                  jmp     loc_1111C ;~ 0204:0B90
loc_111b3:
	// 4425 
cs=0x204;eip=0x000b93; 	X(PUSH(ax));	// 1604                  push    ax ;~ 0204:0B93
cs=0x204;eip=0x000b94; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 1605                  mov     ax, [si] ;~ 0204:0B94
cs=0x204;eip=0x000b96; 	X(MUL1_2(*(dw*)(((db*)word_4ae5c)+0x52A)));	// 1606                  mul     word_4AE5C+52Ah ;~ 0204:0B96
cs=0x204;eip=0x000b9a; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 1607                  mov     [si], ax ;~ 0204:0B9A
cs=0x204;eip=0x000b9c; 	X(POP(ax));	// 1608                  pop     ax ;~ 0204:0B9C
cs=0x204;eip=0x000b9d; 	T(XOR(ah, ah));	// 1609                  xor     ah, ah ;~ 0204:0B9D
cs=0x204;eip=0x000b9f; 	X(ADD(*(dw*)(raddr(ds,si)), ax));	// 1610                  add     [si], ax ;~ 0204:0B9F
cs=0x204;eip=0x000ba1; 	J(JMP(loc_11188));	// 1611                  jmp     short loc_11188 ;~ 0204:0BA1
loc_111c3:
	// 4426 
cs=0x204;eip=0x000ba3; 	T(XOR(ax, ax));	// 1616                  xor     ax, ax ;~ 0204:0BA3
cs=0x204;eip=0x000ba5; 	J(RETN(0));	// 1617                  retn ;~ 0204:0BA5

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_110be: 	goto loc_110be;
        case m2c::kloc_110d8: 	goto loc_110d8;
        case m2c::kloc_110dc: 	goto loc_110dc;
        case m2c::kloc_110ec: 	goto loc_110ec;
        case m2c::kloc_110f2: 	goto loc_110f2;
        case m2c::kloc_110fd: 	goto loc_110fd;
        case m2c::kloc_11107: 	goto loc_11107;
        case m2c::kloc_1111c: 	goto loc_1111c;
        case m2c::kloc_11127: 	goto loc_11127;
        case m2c::kloc_11144: 	goto loc_11144;
        case m2c::kloc_11179: 	goto loc_11179;
        case m2c::kloc_1117a: 	goto loc_1117a;
        case m2c::kloc_11181: 	goto loc_11181;
        case m2c::kloc_11188: 	goto loc_11188;
        case m2c::kloc_11197: 	goto loc_11197;
        case m2c::kloc_1119d: 	goto loc_1119d;
        case m2c::kloc_111b0: 	goto loc_111b0;
        case m2c::kloc_111b3: 	goto loc_111b3;
        case m2c::kloc_111c3: 	goto loc_111c3;
        case m2c::ksub_110b0: 	goto sub_110b0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_111c6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_111c6:
    _begin:
#undef var_54
#define var_54 -0x54
	// 1627 var_54          = word ptr -54h ;~ 0204:0BA6
#undef var_52
#define var_52 -0x52
	// 1628 var_52          = word ptr -52h ;~ 0204:0BA6
cs=0x204;eip=0x000ba6; 	X(ENTER(0x54, 0));	// 1630                  enter   54h, 0 ;~ 0204:0BA6
cs=0x204;eip=0x000baa; 	X(PUSH(es));	// 1631                  push    es ;~ 0204:0BAA
cs=0x204;eip=0x000bab; 	T(ax = ss;);	// 1632                  mov     ax, ss ;~ 0204:0BAB
cs=0x204;eip=0x000bad; 	T(es = ax;);	// 1633                  mov     es, ax ;~ 0204:0BAD
cs=0x204;eip=0x000baf; 	T(di = bp+var_54);	// 1634                  lea     di, [bp+var_54] ;~ 0204:0BAF
cs=0x204;eip=0x000bb2; 	T(ax = 0x500;);	// 1635                  mov     ax, 500h ;~ 0204:0BB2
cs=0x204;eip=0x000bb5; 	J(CALL(__dispatch_call,unk_1f35f));	// 1636                  call    near ptr unk_1F35F ;~ 0204:0BB5
cs=0x204;eip=0x000bb8; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_52))));	// 1637                  mov     dx, [bp+var_52] ;~ 0204:0BB8
cs=0x204;eip=0x000bbb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_54))));	// 1638                  mov     ax, [bp+var_54] ;~ 0204:0BBB
cs=0x204;eip=0x000bbe; 	X(PUSH(dx));	// 1639                  push    dx ;~ 0204:0BBE
cs=0x204;eip=0x000bbf; 	X(PUSH(ax));	// 1640                  push    ax ;~ 0204:0BBF
cs=0x204;eip=0x000bc0; 	T(ax = 0x1600;);	// 1641                  mov     ax, 1600h ;~ 0204:0BC0
cs=0x204;eip=0x000bc3; 	S(_INT(0x2F));	// 1642                  int     2Fh             ; - Multiplex - MS WINDOWS - ENHANCED WINDOWS INSTALLATION CHECK ;~ 0204:0BC3
cs=0x204;eip=0x000bc5; 	T(TEST(al, 0x7F));	// 1646                  test    al, 7Fh ;~ 0204:0BC5
cs=0x204;eip=0x000bc7; 	X(POP(ax));	// 1647                  pop     ax ;~ 0204:0BC7
cs=0x204;eip=0x000bc8; 	X(POP(dx));	// 1648                  pop     dx ;~ 0204:0BC8
cs=0x204;eip=0x000bc9; 	J(JZ(loc_11254));	// 1649                  jz      short loc_11254 ;~ 0204:0BC9
cs=0x204;eip=0x000bcb; 	X(PUSH(es));	// 1650                  push    es ;~ 0204:0BCB
cs=0x204;eip=0x000bcc; 	T(SUB(sp, 0x38));	// 1651                  sub     sp, 38h ;~ 0204:0BCC
cs=0x204;eip=0x000bcf; 	T(di = sp;);	// 1652                  mov     di, sp ;~ 0204:0BCF
cs=0x204;eip=0x000bd1; 	X(PUSH(ss));	// 1653                  push    ss ;~ 0204:0BD1
cs=0x204;eip=0x000bd2; 	X(POP(es));	// 1654                  pop     es ;~ 0204:0BD2
cs=0x204;eip=0x000bd3; 	T(CLD);	// 1655                  cld ;~ 0204:0BD3
cs=0x204;eip=0x000bd4; 	T(cx = 0x38;);	// 1656                  mov     cx, 38h ; '8' ;~ 0204:0BD4
cs=0x204;eip=0x000bd7; 	T(XOR(al, al));	// 1657                  xor     al, al ;~ 0204:0BD7
	// 1658                  rep stosb ;~ 0204:0BD9
cs=0x204;eip=0x000bd9; 	X(	REP STOSB);	// 1658                  rep stosb ;~ 0204:0BD9
cs=0x204;eip=0x000bdb; 	T(di = sp;);	// 1659                  mov     di, sp ;~ 0204:0BDB
cs=0x204;eip=0x000bdd; 	X(MOV(*(dw*)(raddr(es,di+0x1C)), 0x4300));	// 1660                  mov     word ptr es:[di+1Ch], 4300h ;~ 0204:0BDD
cs=0x204;eip=0x000be3; 	T(ax = 0x300;);	// 1661                  mov     ax, 300h ;~ 0204:0BE3
cs=0x204;eip=0x000be6; 	T(bx = 0x2F;);	// 1662                  mov     bx, 2Fh ; '/' ;~ 0204:0BE6
cs=0x204;eip=0x000be9; 	T(XOR(cx, cx));	// 1663                  xor     cx, cx ;~ 0204:0BE9
cs=0x204;eip=0x000beb; 	S(_INT(0x31));	// 1664                  int     31h             ; DPMI Services   ax=func xxxxh ;~ 0204:0BEB
cs=0x204;eip=0x000bed; 	T(CMP(*(raddr(es,di+0x1C)), 0x80));	// 1671                  cmp     byte ptr es:[di+1Ch], 80h ;~ 0204:0BED
cs=0x204;eip=0x000bf2; 	J(JNZ(loc_11250));	// 1672                  jnz     short loc_11250 ;~ 0204:0BF2
cs=0x204;eip=0x000bf4; 	X(MOV(*(dw*)(raddr(es,di+0x1C)), 0x4310));	// 1673                  mov     word ptr es:[di+1Ch], 4310h ;~ 0204:0BF4
cs=0x204;eip=0x000bfa; 	T(ax = 0x300;);	// 1674                  mov     ax, 300h ;~ 0204:0BFA
cs=0x204;eip=0x000bfd; 	T(bx = 0x2F;);	// 1675                  mov     bx, 2Fh ; '/' ;~ 0204:0BFD
cs=0x204;eip=0x000c00; 	T(XOR(cx, cx));	// 1676                  xor     cx, cx ;~ 0204:0C00
cs=0x204;eip=0x000c02; 	S(_INT(0x31));	// 1677                  int     31h             ; DPMI Services   ax=func xxxxh ;~ 0204:0C02
cs=0x204;eip=0x000c04; 	T(bx = 0;);	// 1684                  mov     bx, 0 ;~ 0204:0C04
cs=0x204;eip=0x000c07; 	T(MOV(ax, *(dw*)(raddr(es,di+0x22))));	// 1685                  mov     ax, es:[di+22h] ;~ 0204:0C07
cs=0x204;eip=0x000c0b; 	X(MOV(*(dw*)(raddr(es,di+0x2C)), ax));	// 1686                  mov     es:[di+2Ch], ax ;~ 0204:0C0B
cs=0x204;eip=0x000c0f; 	T(MOV(ax, *(dw*)(raddr(es,di+0x10))));	// 1687                  mov     ax, es:[di+10h] ;~ 0204:0C0F
cs=0x204;eip=0x000c13; 	X(MOV(*(dw*)(raddr(es,di+0x2A)), ax));	// 1688                  mov     es:[di+2Ah], ax ;~ 0204:0C13
cs=0x204;eip=0x000c17; 	X(MOV(*(dw*)(raddr(es,di+0x1C)), 0x800));	// 1689                  mov     word ptr es:[di+1Ch], 800h ;~ 0204:0C17
cs=0x204;eip=0x000c1d; 	T(ax = 0x301;);	// 1690                  mov     ax, 301h ;~ 0204:0C1D
cs=0x204;eip=0x000c20; 	T(XOR(cx, cx));	// 1691                  xor     cx, cx ;~ 0204:0C20
cs=0x204;eip=0x000c22; 	S(_INT(0x31));	// 1692                  int     31h             ; DPMI Services   ax=func xxxxh ;~ 0204:0C22
cs=0x204;eip=0x000c24; 	T(MOV(ax, *(dw*)(raddr(es,di+0x14))));	// 1698                  mov     ax, es:[di+14h] ;~ 0204:0C24
cs=0x204;eip=0x000c28; 	T(dx = ax;);	// 1699                  mov     dx, ax ;~ 0204:0C28
cs=0x204;eip=0x000c2a; 	T(SHR(dx, 6));	// 1700                  shr     dx, 6 ;~ 0204:0C2A
cs=0x204;eip=0x000c2d; 	T(SHL(ax, 0x0A));	// 1701                  shl     ax, 0Ah ;~ 0204:0C2D
loc_11250:
	// 4427 
cs=0x204;eip=0x000c30; 	T(ADD(sp, 0x38));	// 1704                  add     sp, 38h ;~ 0204:0C30
cs=0x204;eip=0x000c33; 	X(POP(es));	// 1705                  pop     es ;~ 0204:0C33
loc_11254:
	// 4428 
cs=0x204;eip=0x000c34; 	T(TEST(dx, 0x0FC00));	// 1708                  test    dx, 0FC00h ;~ 0204:0C34
cs=0x204;eip=0x000c38; 	J(JNZ(loc_11264));	// 1709                  jnz     short loc_11264 ;~ 0204:0C38
cs=0x204;eip=0x000c3a; 	T(SHR(ax, 0x0A));	// 1710                  shr     ax, 0Ah ;~ 0204:0C3A
cs=0x204;eip=0x000c3d; 	T(SHL(dx, 6));	// 1711                  shl     dx, 6 ;~ 0204:0C3D
cs=0x204;eip=0x000c40; 	T(OR(ax, dx));	// 1712                  or      ax, dx ;~ 0204:0C40
cs=0x204;eip=0x000c42; 	J(JMP(loc_11267));	// 1713                  jmp     short loc_11267 ;~ 0204:0C42
loc_11264:
	// 4429 
cs=0x204;eip=0x000c44; 	T(ax = 0x0FFFF;);	// 1717                  mov     ax, 0FFFFh ;~ 0204:0C44
loc_11267:
	// 4430 
cs=0x204;eip=0x000c47; 	T(CMP(ax, *(dw*)(((db*)word_4ae5c)+0x47E)));	// 1720                  cmp     ax, word_4AE5C+47Eh ;~ 0204:0C47
cs=0x204;eip=0x000c4b; 	J(JA(loc_11275));	// 1721                  ja      short loc_11275 ;~ 0204:0C4B
cs=0x204;eip=0x000c4d; 	X(*(dw*)(((db*)word_4ae5c)+0x47A) = 0;);	// 1722                  mov     word_4AE5C+47Ah, 0 ;~ 0204:0C4D
cs=0x204;eip=0x000c53; 	J(JMP(loc_11282));	// 1723                  jmp     short loc_11282 ;~ 0204:0C53
loc_11275:
	// 4431 
cs=0x204;eip=0x000c55; 	T(SUB(ax, *(dw*)(((db*)word_4ae5c)+0x47E)));	// 1727                  sub     ax, word_4AE5C+47Eh ;~ 0204:0C55
cs=0x204;eip=0x000c59; 	T(CMP(ax, *(dw*)(((db*)word_4ae5c)+0x47A)));	// 1728                  cmp     ax, word_4AE5C+47Ah ;~ 0204:0C59
cs=0x204;eip=0x000c5d; 	J(JNC(loc_11282));	// 1729                  jnb     short loc_11282 ;~ 0204:0C5D
cs=0x204;eip=0x000c5f; 	X(*(dw*)(((db*)word_4ae5c)+0x47A) = ax;);	// 1730                  mov     word_4AE5C+47Ah, ax ;~ 0204:0C5F
loc_11282:
	// 4432 
cs=0x204;eip=0x000c62; 	X(POP(es));	// 1734                  pop     es ;~ 0204:0C62
cs=0x204;eip=0x000c63; 	T(LEAVE);	// 1735                  leave ;~ 0204:0C63
cs=0x204;eip=0x000c64; 	J(RETN(0));	// 1736                  retn ;~ 0204:0C64

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_11250: 	goto loc_11250;
        case m2c::kloc_11254: 	goto loc_11254;
        case m2c::kloc_11264: 	goto loc_11264;
        case m2c::kloc_11267: 	goto loc_11267;
        case m2c::kloc_11275: 	goto loc_11275;
        case m2c::kloc_11282: 	goto loc_11282;
        case m2c::ksub_111c6: 	goto sub_111c6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_11285(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11285:
    _begin:
cs=0x204;eip=0x000c65; 	X(PUSH(ax));	// 1744                  push    ax ;~ 0204:0C65
cs=0x204;eip=0x000c66; 	X(PUSH(bx));	// 1745                  push    bx ;~ 0204:0C66
cs=0x204;eip=0x000c67; 	X(PUSH(0x0FFFF));	// 1746                  push    0FFFFh ;~ 0204:0C67
cs=0x204;eip=0x000c69; 	J(CALL(__dispatch_call,byte_10ef4));	// 1747                  call    near ptr byte_10EF4 ;~ 0204:0C69
cs=0x204;eip=0x000c6c; 	T(ADD(sp, 2));	// 1748                  add     sp, 2 ;~ 0204:0C6C
cs=0x204;eip=0x000c6f; 	T(CMP(bx, *(dw*)(((db*)word_4ae5c)+0x478)));	// 1749                  cmp     bx, word_4AE5C+478h ;~ 0204:0C6F
cs=0x204;eip=0x000c73; 	J(JA(loc_1129d));	// 1750                  ja      short loc_1129D ;~ 0204:0C73
cs=0x204;eip=0x000c75; 	X(*(dw*)(((db*)word_4ae5c)+0x474) = 0;);	// 1751                  mov     word_4AE5C+474h, 0 ;~ 0204:0C75
cs=0x204;eip=0x000c7b; 	J(JMP(loc_112ab));	// 1752                  jmp     short loc_112AB ;~ 0204:0C7B
loc_1129d:
	// 4433 
cs=0x204;eip=0x000c7d; 	T(SUB(bx, *(dw*)(((db*)word_4ae5c)+0x478)));	// 1756                  sub     bx, word_4AE5C+478h ;~ 0204:0C7D
cs=0x204;eip=0x000c81; 	T(CMP(bx, *(dw*)(((db*)word_4ae5c)+0x474)));	// 1757                  cmp     bx, word_4AE5C+474h ;~ 0204:0C81
cs=0x204;eip=0x000c85; 	J(JNC(loc_112ab));	// 1758                  jnb     short loc_112AB ;~ 0204:0C85
cs=0x204;eip=0x000c87; 	X(*(dw*)(((db*)word_4ae5c)+0x474) = bx;);	// 1759                  mov     word_4AE5C+474h, bx ;~ 0204:0C87
loc_112ab:
	// 4434 
cs=0x204;eip=0x000c8b; 	X(POP(bx));	// 1763                  pop     bx ;~ 0204:0C8B
cs=0x204;eip=0x000c8c; 	X(POP(ax));	// 1764                  pop     ax ;~ 0204:0C8C
cs=0x204;eip=0x000c8d; 	J(RETN(0));	// 1765                  retn ;~ 0204:0C8D

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1129d: 	goto loc_1129d;
        case m2c::kloc_112ab: 	goto loc_112ab;
        case m2c::ksub_11285: 	goto sub_11285;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_112ae(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_112ae:
    _begin:
#undef arg_0
#define arg_0 4
	// 1775 arg_0           = word ptr  4 ;~ 0204:0C8E
cs=0x204;eip=0x000c8e; 	X(ENTER(0, 0));	// 1777                  enter   0, 0 ;~ 0204:0C8E
cs=0x204;eip=0x000c92; 	X(PUSH(si));	// 1778                  push    si ;~ 0204:0C92
cs=0x204;eip=0x000c93; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 1779                  mov     si, [bp+arg_0] ;~ 0204:0C93
cs=0x204;eip=0x000c96; 	T(ax = *(dw*)(((db*)word_4ae5c)+0x482););	// 1780                  mov     ax, word_4AE5C+482h ;~ 0204:0C96
cs=0x204;eip=0x000c99; 	T(SUB(ax, *(dw*)(((db*)word_4ae5c)+0x486)));	// 1781                  sub     ax, word_4AE5C+486h ;~ 0204:0C99
cs=0x204;eip=0x000c9d; 	X(PUSH(ax));	// 1782                  push    ax ;~ 0204:0C9D
cs=0x204;eip=0x000c9e; 	J(CALL(__dispatch_call,byte_10ef4));	// 1783                  call    near ptr byte_10EF4 ;~ 0204:0C9E
cs=0x204;eip=0x000ca1; 	T(ADD(sp, 2));	// 1784                  add     sp, 2 ;~ 0204:0CA1
cs=0x204;eip=0x000ca4; 	T(TEST(ax, ax));	// 1785                  test    ax, ax ;~ 0204:0CA4
cs=0x204;eip=0x000ca6; 	J(JZ(loc_112da));	// 1786                  jz      short loc_112DA ;~ 0204:0CA6
cs=0x204;eip=0x000ca8; 	T(AND(bx, 0x0FFC0));	// 1787                  and     bx, 0FFC0h ;~ 0204:0CA8
cs=0x204;eip=0x000cab; 	T(OR(bx, bx));	// 1788                  or      bx, bx ;~ 0204:0CAB
cs=0x204;eip=0x000cad; 	J(JZ(loc_112ea));	// 1789                  jz      short loc_112EA ;~ 0204:0CAD
cs=0x204;eip=0x000caf; 	X(PUSH(bx));	// 1790                  push    bx ;~ 0204:0CAF
cs=0x204;eip=0x000cb0; 	J(CALL(__dispatch_call,byte_10ef4));	// 1791                  call    near ptr byte_10EF4 ;~ 0204:0CB0
cs=0x204;eip=0x000cb3; 	T(ADD(sp, 2));	// 1792                  add     sp, 2 ;~ 0204:0CB3
cs=0x204;eip=0x000cb6; 	T(TEST(ax, ax));	// 1793                  test    ax, ax ;~ 0204:0CB6
cs=0x204;eip=0x000cb8; 	J(JNZ(loc_112ea));	// 1794                  jnz     short loc_112EA ;~ 0204:0CB8
loc_112da:
	// 4435 
cs=0x204;eip=0x000cba; 	X(MOV(*(dw*)(raddr(ds,si)), cx));	// 1797                  mov     [si], cx ;~ 0204:0CBA
cs=0x204;eip=0x000cbc; 	X(MOV(*(dw*)(raddr(ds,si+2)), bx));	// 1798                  mov     [si+2], bx ;~ 0204:0CBC
cs=0x204;eip=0x000cbf; 	X(ADD(*(dw*)(((db*)word_4ae5c)+0x486), bx));	// 1799                  add     word_4AE5C+486h, bx ;~ 0204:0CBF
cs=0x204;eip=0x000cc3; 	X(PUSH(si));	// 1800                  push    si ;~ 0204:0CC3
cs=0x204;eip=0x000cc4; 	J(CALL(sub_11337,0));	// 1801                  call    sub_11337 ;~ 0204:0CC4
cs=0x204;eip=0x000cc7; 	T(ADD(sp, 2));	// 1802                  add     sp, 2 ;~ 0204:0CC7
loc_112ea:
	// 4436 
cs=0x204;eip=0x000cca; 	X(POP(si));	// 1806                  pop     si ;~ 0204:0CCA
cs=0x204;eip=0x000ccb; 	T(LEAVE);	// 1807                  leave ;~ 0204:0CCB
cs=0x204;eip=0x000ccc; 	J(RETN(0));	// 1808                  retn ;~ 0204:0CCC

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_112da: 	goto loc_112da;
        case m2c::kloc_112ea: 	goto loc_112ea;
        case m2c::ksub_112ae: 	goto sub_112ae;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_112ed(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_112ed:
    _begin:
#undef arg_0
#define arg_0 4
	// 1818 arg_0           = word ptr  4 ;~ 0204:0CCD
cs=0x204;eip=0x000ccd; 	X(ENTER(0, 0));	// 1820                  enter   0, 0 ;~ 0204:0CCD
cs=0x204;eip=0x000cd1; 	X(PUSH(si));	// 1821                  push    si ;~ 0204:0CD1
cs=0x204;eip=0x000cd2; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 1822                  mov     si, [bp+arg_0] ;~ 0204:0CD2
cs=0x204;eip=0x000cd5; 	T(ax = *(dw*)(((db*)word_4ae5c)+0x482););	// 1823                  mov     ax, word_4AE5C+482h ;~ 0204:0CD5
cs=0x204;eip=0x000cd8; 	T(SUB(ax, *(dw*)(((db*)word_4ae5c)+0x486)));	// 1824                  sub     ax, word_4AE5C+486h ;~ 0204:0CD8
cs=0x204;eip=0x000cdc; 	T(ADD(ax, *(dw*)(raddr(ds,si+2))));	// 1825                  add     ax, [si+2] ;~ 0204:0CDC
cs=0x204;eip=0x000cdf; 	X(PUSH(ax));	// 1826                  push    ax ;~ 0204:0CDF
cs=0x204;eip=0x000ce0; 	X(PUSH(*(dw*)(raddr(ds,si))));	// 1827                  push    word ptr [si] ;~ 0204:0CE0
cs=0x204;eip=0x000ce2; 	J(CALL(sub_10fca,0));	// 1828                  call    sub_10FCA ;~ 0204:0CE2
cs=0x204;eip=0x000ce5; 	T(ADD(sp, 4));	// 1829                  add     sp, 4 ;~ 0204:0CE5
cs=0x204;eip=0x000ce8; 	T(TEST(ax, ax));	// 1830                  test    ax, ax ;~ 0204:0CE8
cs=0x204;eip=0x000cea; 	J(JZ(loc_11321));	// 1831                  jz      short loc_11321 ;~ 0204:0CEA
cs=0x204;eip=0x000cec; 	T(AND(bx, 0x0FFC0));	// 1832                  and     bx, 0FFC0h ;~ 0204:0CEC
cs=0x204;eip=0x000cef; 	T(CMP(bx, *(dw*)(raddr(ds,si+2))));	// 1833                  cmp     bx, [si+2] ;~ 0204:0CEF
cs=0x204;eip=0x000cf2; 	J(JBE(loc_11334));	// 1834                  jbe     short loc_11334 ;~ 0204:0CF2
cs=0x204;eip=0x000cf4; 	X(PUSH(bx));	// 1835                  push    bx ;~ 0204:0CF4
cs=0x204;eip=0x000cf5; 	X(PUSH(*(dw*)(raddr(ds,si))));	// 1836                  push    word ptr [si] ;~ 0204:0CF5
cs=0x204;eip=0x000cf7; 	J(CALL(sub_10fca,0));	// 1837                  call    sub_10FCA ;~ 0204:0CF7
cs=0x204;eip=0x000cfa; 	T(ADD(sp, 4));	// 1838                  add     sp, 4 ;~ 0204:0CFA
cs=0x204;eip=0x000cfd; 	T(TEST(ax, ax));	// 1839                  test    ax, ax ;~ 0204:0CFD
cs=0x204;eip=0x000cff; 	J(JNZ(loc_11334));	// 1840                  jnz     short loc_11334 ;~ 0204:0CFF
loc_11321:
	// 4437 
cs=0x204;eip=0x000d01; 	T(MOV(cx, *(dw*)(raddr(ds,si+2))));	// 1843                  mov     cx, [si+2] ;~ 0204:0D01
cs=0x204;eip=0x000d04; 	X(MOV(*(dw*)(raddr(ds,si+2)), bx));	// 1844                  mov     [si+2], bx ;~ 0204:0D04
cs=0x204;eip=0x000d07; 	T(SUB(bx, cx));	// 1845                  sub     bx, cx ;~ 0204:0D07
cs=0x204;eip=0x000d09; 	X(ADD(*(dw*)(((db*)word_4ae5c)+0x486), bx));	// 1846                  add     word_4AE5C+486h, bx ;~ 0204:0D09
cs=0x204;eip=0x000d0d; 	X(PUSH(si));	// 1847                  push    si ;~ 0204:0D0D
cs=0x204;eip=0x000d0e; 	J(CALL(sub_11337,0));	// 1848                  call    sub_11337 ;~ 0204:0D0E
cs=0x204;eip=0x000d11; 	T(ADD(sp, 2));	// 1849                  add     sp, 2 ;~ 0204:0D11
loc_11334:
	// 4438 
cs=0x204;eip=0x000d14; 	X(POP(si));	// 1853                  pop     si ;~ 0204:0D14
cs=0x204;eip=0x000d15; 	T(LEAVE);	// 1854                  leave ;~ 0204:0D15
cs=0x204;eip=0x000d16; 	J(RETN(0));	// 1855                  retn ;~ 0204:0D16

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_11321: 	goto loc_11321;
        case m2c::kloc_11334: 	goto loc_11334;
        case m2c::ksub_112ed: 	goto sub_112ed;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_11337(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11337:
    _begin:
#undef var_4
#define var_4 -4
	// 1866 var_4           = byte ptr -4 ;~ 0204:0D17
#undef arg_0
#define arg_0 4
	// 1867 arg_0           = word ptr  4 ;~ 0204:0D17
cs=0x204;eip=0x000d17; 	X(ENTER(4, 0));	// 1869                  enter   4, 0 ;~ 0204:0D17
cs=0x204;eip=0x000d1b; 	X(PUSH(es));	// 1870                  push    es ;~ 0204:0D1B
cs=0x204;eip=0x000d1c; 	X(PUSH(si));	// 1871                  push    si ;~ 0204:0D1C
cs=0x204;eip=0x000d1d; 	X(PUSH(di));	// 1872                  push    di ;~ 0204:0D1D
cs=0x204;eip=0x000d1e; 	X(PUSH(bx));	// 1873                  push    bx ;~ 0204:0D1E
cs=0x204;eip=0x000d1f; 	X(PUSH(cx));	// 1874                  push    cx ;~ 0204:0D1F
cs=0x204;eip=0x000d20; 	X(PUSH(dx));	// 1875                  push    dx ;~ 0204:0D20
cs=0x204;eip=0x000d21; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 1876                  mov     si, [bp+arg_0] ;~ 0204:0D21
cs=0x204;eip=0x000d24; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 1877                  mov     ax, [si] ;~ 0204:0D24
cs=0x204;eip=0x000d26; 	T(dx = ax;);	// 1878                  mov     dx, ax ;~ 0204:0D26
cs=0x204;eip=0x000d28; 	T(SHL(ax, 4));	// 1879                  shl     ax, 4 ;~ 0204:0D28
cs=0x204;eip=0x000d2b; 	T(SHR(dx, 0x0C));	// 1880                  shr     dx, 0Ch ;~ 0204:0D2B
cs=0x204;eip=0x000d2e; 	T(MOV(bx, *(dw*)(raddr(ds,si+2))));	// 1881                  mov     bx, [si+2] ;~ 0204:0D2E
cs=0x204;eip=0x000d31; 	T(cx = bx;);	// 1882                  mov     cx, bx ;~ 0204:0D31
cs=0x204;eip=0x000d33; 	T(SHL(bx, 4));	// 1883                  shl     bx, 4 ;~ 0204:0D33
cs=0x204;eip=0x000d36; 	T(SHR(cx, 0x0C));	// 1884                  shr     cx, 0Ch ;~ 0204:0D36
cs=0x204;eip=0x000d39; 	T(CMP(*(dw*)(raddr(ds,si+4)), 0));	// 1885                  cmp     word ptr [si+4], 0 ;~ 0204:0D39
cs=0x204;eip=0x000d3d; 	J(JZ(loc_11373));	// 1886                  jz      short loc_11373 ;~ 0204:0D3D
cs=0x204;eip=0x000d3f; 	T(di = bp+var_4);	// 1887                  lea     di, [bp+var_4] ;~ 0204:0D3F
cs=0x204;eip=0x000d42; 	X(PUSH(*(dw*)(((db*)word_4ae5c)+0x480)));	// 1888                  push    word_4AE5C+480h ;~ 0204:0D42
cs=0x204;eip=0x000d46; 	X(PUSH(dx));	// 1889                  push    dx ;~ 0204:0D46
cs=0x204;eip=0x000d47; 	X(PUSH(ax));	// 1890                  push    ax ;~ 0204:0D47
cs=0x204;eip=0x000d48; 	X(PUSH(cx));	// 1891                  push    cx ;~ 0204:0D48
cs=0x204;eip=0x000d49; 	X(PUSH(bx));	// 1892                  push    bx ;~ 0204:0D49
cs=0x204;eip=0x000d4a; 	X(PUSH(ss));	// 1893                  push    ss ;~ 0204:0D4A
cs=0x204;eip=0x000d4b; 	X(PUSH(di));	// 1894                  push    di ;~ 0204:0D4B
cs=0x204;eip=0x000d4c; 	T(NOP);	// 1895                  nop ;~ 0204:0D4C
cs=0x204;eip=0x000d4d; 	X(PUSH(cs));	// 1896                  push    cs ;~ 0204:0D4D
cs=0x204;eip=0x000d4e; 	J(CALL(__dispatch_call,unk_1938d));	// 1897                  call    near ptr unk_1938D ;~ 0204:0D4E
cs=0x204;eip=0x000d51; 	J(JMP(loc_11380));	// 1898                  jmp     short loc_11380 ;~ 0204:0D51
loc_11373:
	// 4439 
cs=0x204;eip=0x000d53; 	X(PUSH(*(dw*)(((db*)word_4ae5c)+0x480)));	// 1902                  push    word_4AE5C+480h ;~ 0204:0D53
cs=0x204;eip=0x000d57; 	X(PUSH(dx));	// 1903                  push    dx ;~ 0204:0D57
cs=0x204;eip=0x000d58; 	X(PUSH(ax));	// 1904                  push    ax ;~ 0204:0D58
cs=0x204;eip=0x000d59; 	X(PUSH(cx));	// 1905                  push    cx ;~ 0204:0D59
cs=0x204;eip=0x000d5a; 	X(PUSH(bx));	// 1906                  push    bx ;~ 0204:0D5A
cs=0x204;eip=0x000d5b; 	T(NOP);	// 1907                  nop ;~ 0204:0D5B
cs=0x204;eip=0x000d5c; 	X(PUSH(cs));	// 1908                  push    cs ;~ 0204:0D5C
cs=0x204;eip=0x000d5d; 	J(CALL(__dispatch_call,unk_1932a));	// 1909                  call    near ptr unk_1932A ;~ 0204:0D5D
loc_11380:
	// 4440 
cs=0x204;eip=0x000d60; 	T(MOV(ax, *(dw*)(raddr(ds,si+2))));	// 1912                  mov     ax, [si+2] ;~ 0204:0D60
cs=0x204;eip=0x000d63; 	X(MOV(*(dw*)(raddr(ds,si+4)), ax));	// 1913                  mov     [si+4], ax ;~ 0204:0D63
cs=0x204;eip=0x000d66; 	X(POP(dx));	// 1914                  pop     dx ;~ 0204:0D66
cs=0x204;eip=0x000d67; 	X(POP(cx));	// 1915                  pop     cx ;~ 0204:0D67
cs=0x204;eip=0x000d68; 	X(POP(bx));	// 1916                  pop     bx ;~ 0204:0D68
cs=0x204;eip=0x000d69; 	X(POP(di));	// 1917                  pop     di ;~ 0204:0D69
cs=0x204;eip=0x000d6a; 	X(POP(si));	// 1918                  pop     si ;~ 0204:0D6A
cs=0x204;eip=0x000d6b; 	X(POP(es));	// 1919                  pop     es ;~ 0204:0D6B
cs=0x204;eip=0x000d6c; 	T(LEAVE);	// 1920                  leave ;~ 0204:0D6C
cs=0x204;eip=0x000d6d; 	J(RETN(0));	// 1921                  retn ;~ 0204:0D6D

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_11373: 	goto loc_11373;
        case m2c::kloc_11380: 	goto loc_11380;
        case m2c::ksub_11337: 	goto sub_11337;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg001_d6e_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg001_d6e_proc:
    _begin:
cs=0x204;eip=0x000d6e; 	X(PUSH(ds));	// 1925                  push    ds ;~ 0204:0D6E
cs=0x204;eip=0x000d6f; 	X(POP(ax));	// 1926                  pop     ax ;~ 0204:0D6F
cs=0x204;eip=0x000d70; 	T(NOP);	// 1927                  nop ;~ 0204:0D70
cs=0x204;eip=0x000d71; 	T(INC(bp));	// 1928                  inc     bp ;~ 0204:0D71
cs=0x204;eip=0x000d72; 	X(PUSH(bp));	// 1929                  push    bp ;~ 0204:0D72
cs=0x204;eip=0x000d73; 	T(bp = sp;);	// 1930                  mov     bp, sp ;~ 0204:0D73
cs=0x204;eip=0x000d75; 	X(PUSH(ds));	// 1931                  push    ds ;~ 0204:0D75
cs=0x204;eip=0x000d76; 	T(ds = ax;);	// 1932                  mov     ds, ax ;~ 0204:0D76
cs=0x204;eip=0x000d78; 	X(PUSH(si));	// 1933                  push    si ;~ 0204:0D78
cs=0x204;eip=0x000d79; 	X(PUSH(di));	// 1934                  push    di ;~ 0204:0D79
cs=0x204;eip=0x000d7a; 	X(PUSH(bx));	// 1935                  push    bx ;~ 0204:0D7A
cs=0x204;eip=0x000d7b; 	X(PUSH(cx));	// 1936                  push    cx ;~ 0204:0D7B
cs=0x204;eip=0x000d7c; 	X(PUSH(dx));	// 1937                  push    dx ;~ 0204:0D7C
cs=0x204;eip=0x000d7d; 	T(si = *(dw*)(((db*)word_4ae5c)+0x482););	// 1938                  mov     si, word_4AE5C+482h ;~ 0204:0D7D
cs=0x204;eip=0x000d81; 	T(CMP(si, *(dw*)(((db*)word_4ae5c)+0x486)));	// 1939                  cmp     si, word_4AE5C+486h ;~ 0204:0D81
cs=0x204;eip=0x000d85; 	J(JBE(loc_113ed));	// 1940                  jbe     short loc_113ED ;~ 0204:0D85
cs=0x204;eip=0x000d87; 	T(SUB(si, *(dw*)(((db*)word_4ae5c)+0x486)));	// 1941                  sub     si, word_4AE5C+486h ;~ 0204:0D87
cs=0x204;eip=0x000d8b; 	T(di = 0x280A;);	// 1942                  mov     di, 280Ah ;~ 0204:0D8B
cs=0x204;eip=0x000d8e; 	T(dx = 0x0A;);	// 1943                  mov     dx, 0Ah ;~ 0204:0D8E
loc_113b1:
	// 4441 
cs=0x204;eip=0x000d91; 	T(ax = *(dw*)(((db*)word_4ae5c)+0x482););	// 1946                  mov     ax, word_4AE5C+482h ;~ 0204:0D91
cs=0x204;eip=0x000d94; 	T(CMP(ax, *(dw*)(((db*)word_4ae5c)+0x486)));	// 1947                  cmp     ax, word_4AE5C+486h ;~ 0204:0D94
cs=0x204;eip=0x000d98; 	J(JBE(loc_113ed));	// 1948                  jbe     short loc_113ED ;~ 0204:0D98
cs=0x204;eip=0x000d9a; 	T(CMP(*(dw*)(raddr(ds,di)), 0));	// 1949                  cmp     word ptr [di], 0 ;~ 0204:0D9A
cs=0x204;eip=0x000d9d; 	J(JZ(loc_113c6));	// 1950                  jz      short loc_113C6 ;~ 0204:0D9D
cs=0x204;eip=0x000d9f; 	X(PUSH(di));	// 1951                  push    di ;~ 0204:0D9F
cs=0x204;eip=0x000da0; 	J(CALL(sub_112ed,0));	// 1952                  call    sub_112ED ;~ 0204:0DA0
cs=0x204;eip=0x000da3; 	T(ADD(sp, 2));	// 1953                  add     sp, 2 ;~ 0204:0DA3
loc_113c6:
	// 4442 
cs=0x204;eip=0x000da6; 	T(ADD(di, 6));	// 1956                  add     di, 6 ;~ 0204:0DA6
cs=0x204;eip=0x000da9; 	T(DEC(dx));	// 1957                  dec     dx ;~ 0204:0DA9
cs=0x204;eip=0x000daa; 	J(JNZ(loc_113b1));	// 1958                  jnz     short loc_113B1 ;~ 0204:0DAA
cs=0x204;eip=0x000dac; 	T(di = 0x280A;);	// 1959                  mov     di, 280Ah ;~ 0204:0DAC
cs=0x204;eip=0x000daf; 	T(dx = 0x0A;);	// 1960                  mov     dx, 0Ah ;~ 0204:0DAF
loc_113d2:
	// 4443 
cs=0x204;eip=0x000db2; 	T(ax = *(dw*)(((db*)word_4ae5c)+0x482););	// 1963                  mov     ax, word_4AE5C+482h ;~ 0204:0DB2
cs=0x204;eip=0x000db5; 	T(CMP(ax, *(dw*)(((db*)word_4ae5c)+0x486)));	// 1964                  cmp     ax, word_4AE5C+486h ;~ 0204:0DB5
cs=0x204;eip=0x000db9; 	J(JBE(loc_113ed));	// 1965                  jbe     short loc_113ED ;~ 0204:0DB9
cs=0x204;eip=0x000dbb; 	T(CMP(*(dw*)(raddr(ds,di)), 0));	// 1966                  cmp     word ptr [di], 0 ;~ 0204:0DBB
cs=0x204;eip=0x000dbe; 	J(JNZ(loc_113e7));	// 1967                  jnz     short loc_113E7 ;~ 0204:0DBE
cs=0x204;eip=0x000dc0; 	X(PUSH(di));	// 1968                  push    di ;~ 0204:0DC0
cs=0x204;eip=0x000dc1; 	J(CALL(sub_112ae,0));	// 1969                  call    sub_112AE ;~ 0204:0DC1
cs=0x204;eip=0x000dc4; 	T(ADD(sp, 2));	// 1970                  add     sp, 2 ;~ 0204:0DC4
loc_113e7:
	// 4444 
cs=0x204;eip=0x000dc7; 	T(ADD(di, 6));	// 1973                  add     di, 6 ;~ 0204:0DC7
cs=0x204;eip=0x000dca; 	T(DEC(dx));	// 1974                  dec     dx ;~ 0204:0DCA
cs=0x204;eip=0x000dcb; 	J(JNZ(loc_113d2));	// 1975                  jnz     short loc_113D2 ;~ 0204:0DCB
loc_113ed:
	// 4445 
cs=0x204;eip=0x000dcd; 	T(XOR(ax, ax));	// 1979                  xor     ax, ax ;~ 0204:0DCD
cs=0x204;eip=0x000dcf; 	X(POP(dx));	// 1980                  pop     dx ;~ 0204:0DCF
cs=0x204;eip=0x000dd0; 	X(POP(cx));	// 1981                  pop     cx ;~ 0204:0DD0
cs=0x204;eip=0x000dd1; 	X(POP(bx));	// 1982                  pop     bx ;~ 0204:0DD1
cs=0x204;eip=0x000dd2; 	X(POP(di));	// 1983                  pop     di ;~ 0204:0DD2
cs=0x204;eip=0x000dd3; 	X(POP(si));	// 1984                  pop     si ;~ 0204:0DD3
cs=0x204;eip=0x000dd4; 	X(POP(ds));	// 1985                  pop     ds ;~ 0204:0DD4
cs=0x204;eip=0x000dd5; 	X(POP(bp));	// 1986                  pop     bp ;~ 0204:0DD5
cs=0x204;eip=0x000dd6; 	T(DEC(bp));	// 1987                  dec     bp ;~ 0204:0DD6
cs=0x204;eip=0x000dd7; 	J(RETF(0));	// 1988                  retf ;~ 0204:0DD7
ret_204_dd8:
	// 4446 
cs=0x204;eip=0x000dd8; 	X(PUSH(ds));	// 1990                  push    ds ;~ 0204:0DD8
cs=0x204;eip=0x000dd9; 	X(POP(ax));	// 1991                  pop     ax ;~ 0204:0DD9
cs=0x204;eip=0x000dda; 	T(NOP);	// 1992                  nop ;~ 0204:0DDA
cs=0x204;eip=0x000ddb; 	T(INC(bp));	// 1993                  inc     bp ;~ 0204:0DDB
cs=0x204;eip=0x000ddc; 	X(PUSH(bp));	// 1994                  push    bp ;~ 0204:0DDC
cs=0x204;eip=0x000ddd; 	T(bp = sp;);	// 1995                  mov     bp, sp ;~ 0204:0DDD
cs=0x204;eip=0x000ddf; 	X(PUSH(ds));	// 1996                  push    ds ;~ 0204:0DDF
cs=0x204;eip=0x000de0; 	T(ds = ax;);	// 1997                  mov     ds, ax ;~ 0204:0DE0
cs=0x204;eip=0x000de2; 	T(SUB(sp, 8));	// 1998                  sub     sp, 8 ;~ 0204:0DE2
cs=0x204;eip=0x000de5; 	X(PUSH(es));	// 1999                  push    es ;~ 0204:0DE5
cs=0x204;eip=0x000de6; 	X(PUSH(di));	// 2000                  push    di ;~ 0204:0DE6
cs=0x204;eip=0x000de7; 	X(PUSH(cx));	// 2001                  push    cx ;~ 0204:0DE7
cs=0x204;eip=0x000de8; 	T(di = 0x2840;);	// 2002                  mov     di, 2840h ;~ 0204:0DE8
cs=0x204;eip=0x000deb; 	T(cx = 0x0A;);	// 2003                  mov     cx, 0Ah ;~ 0204:0DEB
loc_1140e:
	// 4447 
cs=0x204;eip=0x000dee; 	X(PUSH(cx));	// 2006                  push    cx ;~ 0204:0DEE
cs=0x204;eip=0x000def; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 2007                  mov     ax, [di] ;~ 0204:0DEF
cs=0x204;eip=0x000df1; 	T(TEST(ax, ax));	// 2008                  test    ax, ax ;~ 0204:0DF1
cs=0x204;eip=0x000df3; 	J(JZ(loc_1148b));	// 2009                  jz      short loc_1148B ;~ 0204:0DF3
cs=0x204;eip=0x000df5; 	T(dx = ax;);	// 2010                  mov     dx, ax ;~ 0204:0DF5
cs=0x204;eip=0x000df7; 	T(SHL(ax, 4));	// 2011                  shl     ax, 4 ;~ 0204:0DF7
cs=0x204;eip=0x000dfa; 	T(SHR(dx, 0x0C));	// 2012                  shr     dx, 0Ch ;~ 0204:0DFA
cs=0x204;eip=0x000dfd; 	X(MOV(*(dw*)(raddr(ss,bp-4)), dx));	// 2013                  mov     [bp-4], dx ;~ 0204:0DFD
cs=0x204;eip=0x000e00; 	X(MOV(*(dw*)(raddr(ss,bp-6)), ax));	// 2014                  mov     [bp-6], ax ;~ 0204:0E00
cs=0x204;eip=0x000e03; 	T(bx = bp-0x0A);	// 2015                  lea     bx, [bp-0Ah] ;~ 0204:0E03
cs=0x204;eip=0x000e06; 	X(PUSH(*(dw*)(((db*)word_4ae5c)+0x480)));	// 2016                  push    word_4AE5C+480h ;~ 0204:0E06
cs=0x204;eip=0x000e0a; 	X(PUSH(*(dw*)(raddr(ss,bp-4))));	// 2017                  push    word ptr [bp-4] ;~ 0204:0E0A
cs=0x204;eip=0x000e0d; 	X(PUSH(*(dw*)(raddr(ss,bp-6))));	// 2018                  push    word ptr [bp-6] ;~ 0204:0E0D
cs=0x204;eip=0x000e10; 	X(PUSH(0));	// 2019                  push    0 ;~ 0204:0E10
cs=0x204;eip=0x000e12; 	X(PUSH(0));	// 2020                  push    0 ;~ 0204:0E12
cs=0x204;eip=0x000e14; 	X(PUSH(ss));	// 2021                  push    ss ;~ 0204:0E14
cs=0x204;eip=0x000e15; 	X(PUSH(bx));	// 2022                  push    bx ;~ 0204:0E15
cs=0x204;eip=0x000e16; 	T(NOP);	// 2023                  nop ;~ 0204:0E16
cs=0x204;eip=0x000e17; 	X(PUSH(cs));	// 2024                  push    cs ;~ 0204:0E17
cs=0x204;eip=0x000e18; 	J(CALL(__dispatch_call,unk_1938d));	// 2025                  call    near ptr unk_1938D ;~ 0204:0E18
cs=0x204;eip=0x000e1b; 	T(MOV(cx, *(dw*)(raddr(ss,bp-0x0A))));	// 2026                  mov     cx, [bp-0Ah] ;~ 0204:0E1B
cs=0x204;eip=0x000e1e; 	T(MOV(bx, *(dw*)(raddr(ss,bp-8))));	// 2027                  mov     bx, [bp-8] ;~ 0204:0E1E
cs=0x204;eip=0x000e21; 	T(SHR(cx, 4));	// 2028                  shr     cx, 4 ;~ 0204:0E21
cs=0x204;eip=0x000e24; 	T(SHL(bx, 0x0C));	// 2029                  shl     bx, 0Ch ;~ 0204:0E24
cs=0x204;eip=0x000e27; 	T(OR(cx, bx));	// 2030                  or      cx, bx ;~ 0204:0E27
cs=0x204;eip=0x000e29; 	T(MOV(bx, *(dw*)(raddr(ds,di+2))));	// 2031                  mov     bx, [di+2] ;~ 0204:0E29
cs=0x204;eip=0x000e2c; 	T(SUB(bx, cx));	// 2032                  sub     bx, cx ;~ 0204:0E2C
cs=0x204;eip=0x000e2e; 	X(SUB(*(dw*)(((db*)word_4ae5c)+0x486), bx));	// 2033                  sub     word_4AE5C+486h, bx ;~ 0204:0E2E
cs=0x204;eip=0x000e32; 	T(TEST(cx, cx));	// 2034                  test    cx, cx ;~ 0204:0E32
cs=0x204;eip=0x000e34; 	J(JZ(loc_11466));	// 2035                  jz      short loc_11466 ;~ 0204:0E34
cs=0x204;eip=0x000e36; 	X(PUSH(cx));	// 2036                  push    cx ;~ 0204:0E36
cs=0x204;eip=0x000e37; 	X(PUSH(cx));	// 2037                  push    cx ;~ 0204:0E37
cs=0x204;eip=0x000e38; 	X(PUSH(*(dw*)(raddr(ds,di))));	// 2038                  push    word ptr [di] ;~ 0204:0E38
cs=0x204;eip=0x000e3a; 	J(CALL(sub_10fca,0));	// 2039                  call    sub_10FCA ;~ 0204:0E3A
cs=0x204;eip=0x000e3d; 	T(ADD(sp, 4));	// 2040                  add     sp, 4 ;~ 0204:0E3D
cs=0x204;eip=0x000e40; 	X(POP(cx));	// 2041                  pop     cx ;~ 0204:0E40
cs=0x204;eip=0x000e41; 	X(MOV(*(dw*)(raddr(ds,di+2)), cx));	// 2042                  mov     [di+2], cx ;~ 0204:0E41
cs=0x204;eip=0x000e44; 	J(JMP(loc_1148b));	// 2043                  jmp     short loc_1148B ;~ 0204:0E44
loc_11466:
	// 4448 
cs=0x204;eip=0x000e46; 	X(PUSH(*(dw*)(raddr(ds,di))));	// 2047                  push    word ptr [di] ;~ 0204:0E46
cs=0x204;eip=0x000e48; 	J(CALL(sub_10f7a,0));	// 2048                  call    sub_10F7A ;~ 0204:0E48
cs=0x204;eip=0x000e4b; 	T(ADD(sp, 2));	// 2049                  add     sp, 2 ;~ 0204:0E4B
cs=0x204;eip=0x000e4e; 	X(PUSH(*(dw*)(((db*)word_4ae5c)+0x480)));	// 2050                  push    word_4AE5C+480h ;~ 0204:0E4E
cs=0x204;eip=0x000e52; 	X(PUSH(*(dw*)(raddr(ss,bp-4))));	// 2051                  push    word ptr [bp-4] ;~ 0204:0E52
cs=0x204;eip=0x000e55; 	X(PUSH(*(dw*)(raddr(ss,bp-6))));	// 2052                  push    word ptr [bp-6] ;~ 0204:0E55
cs=0x204;eip=0x000e58; 	T(NOP);	// 2053                  nop ;~ 0204:0E58
cs=0x204;eip=0x000e59; 	X(PUSH(cs));	// 2054                  push    cs ;~ 0204:0E59
cs=0x204;eip=0x000e5a; 	J(CALL(__dispatch_call,unk_194cf));	// 2055                  call    near ptr unk_194CF ;~ 0204:0E5A
cs=0x204;eip=0x000e5d; 	X(MOV(*(dw*)(raddr(ds,di)), 0));	// 2056                  mov     word ptr [di], 0 ;~ 0204:0E5D
cs=0x204;eip=0x000e61; 	X(MOV(*(dw*)(raddr(ds,di+2)), 0));	// 2057                  mov     word ptr [di+2], 0 ;~ 0204:0E61
cs=0x204;eip=0x000e66; 	X(MOV(*(dw*)(raddr(ds,di+4)), 0));	// 2058                  mov     word ptr [di+4], 0 ;~ 0204:0E66
loc_1148b:
	// 4449 
cs=0x204;eip=0x000e6b; 	T(SUB(di, 6));	// 2062                  sub     di, 6 ;~ 0204:0E6B
cs=0x204;eip=0x000e6e; 	X(POP(cx));	// 2063                  pop     cx ;~ 0204:0E6E
cs=0x204;eip=0x000e6f; 	J(LOOP(loc_11493));	// 2064                  loop    loc_11493 ;~ 0204:0E6F
cs=0x204;eip=0x000e71; 	J(JMP(loc_11496));	// 2065                  jmp     short loc_11496 ;~ 0204:0E71
loc_11493:
	// 4450 
cs=0x204;eip=0x000e73; 	J(JMP(loc_1140e));	// 2069                  jmp     loc_1140E ;~ 0204:0E73
loc_11496:
	// 4451 
cs=0x204;eip=0x000e76; 	X(POP(cx));	// 2073                  pop     cx ;~ 0204:0E76
cs=0x204;eip=0x000e77; 	X(POP(di));	// 2074                  pop     di ;~ 0204:0E77
cs=0x204;eip=0x000e78; 	X(POP(es));	// 2075                  pop     es ;~ 0204:0E78
cs=0x204;eip=0x000e79; 	T(SUB(bp, 2));	// 2076                  sub     bp, 2 ;~ 0204:0E79
cs=0x204;eip=0x000e7c; 	T(sp = bp;);	// 2077                  mov     sp, bp ;~ 0204:0E7C
cs=0x204;eip=0x000e7e; 	X(POP(ds));	// 2078                  pop     ds ;~ 0204:0E7E
cs=0x204;eip=0x000e7f; 	X(POP(bp));	// 2079                  pop     bp ;~ 0204:0E7F
cs=0x204;eip=0x000e80; 	T(DEC(bp));	// 2080                  dec     bp ;~ 0204:0E80
cs=0x204;eip=0x000e81; 	J(RETF(0));	// 2081                  retf ;~ 0204:0E81

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_113b1: 	goto loc_113b1;
        case m2c::kloc_113c6: 	goto loc_113c6;
        case m2c::kloc_113d2: 	goto loc_113d2;
        case m2c::kloc_113e7: 	goto loc_113e7;
        case m2c::kloc_113ed: 	goto loc_113ed;
        case m2c::kloc_1140e: 	goto loc_1140e;
        case m2c::kloc_11466: 	goto loc_11466;
        case m2c::kloc_1148b: 	goto loc_1148b;
        case m2c::kloc_11493: 	goto loc_11493;
        case m2c::kloc_11496: 	goto loc_11496;
        case m2c::kret_204_dd8: 	goto ret_204_dd8;
        case m2c::kseg001_d6e_proc: 	goto seg001_d6e_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_114a2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_114a2:
    _begin:
cs=0x204;eip=0x000e82; 	X(PUSH(es));	// 2087                  push    es ;~ 0204:0E82
cs=0x204;eip=0x000e83; 	J(CALL(sub_11285,0));	// 2088                  call    sub_11285 ;~ 0204:0E83
cs=0x204;eip=0x000e86; 	T(ax = *(dw*)(((db*)word_4ae5c)+0x474););	// 2089                  mov     ax, word_4AE5C+474h ;~ 0204:0E86
cs=0x204;eip=0x000e89; 	T(CMP(ax, *(dw*)(((db*)word_4ae5c)+0x476)));	// 2090                  cmp     ax, word_4AE5C+476h ;~ 0204:0E89
cs=0x204;eip=0x000e8d; 	J(JC(loc_114d9));	// 2091                  jb      short loc_114D9 ;~ 0204:0E8D
cs=0x204;eip=0x000e8f; 	X(*(dw*)(((db*)word_4ae5c)+0x482) = ax;);	// 2092                  mov     word_4AE5C+482h, ax ;~ 0204:0E8F
cs=0x204;eip=0x000e92; 	X(PUSH(0));	// 2093                  push    0 ;~ 0204:0E92
cs=0x204;eip=0x000e94; 	X(PUSH(0));	// 2094                  push    0 ;~ 0204:0E94
cs=0x204;eip=0x000e96; 	X(PUSH(0));	// 2095                  push    0 ;~ 0204:0E96
cs=0x204;eip=0x000e98; 	X(PUSH(0));	// 2096                  push    0 ;~ 0204:0E98
cs=0x204;eip=0x000e9a; 	X(PUSH(0));	// 2097                  push    0 ;~ 0204:0E9A
cs=0x204;eip=0x000e9c; 	X(PUSH(ds));	// 2098                  push    ds ;~ 0204:0E9C
cs=0x204;eip=0x000e9d; 	X(PUSH(m2c::kloc_28a2a+2));	// 2099                  push    (offset loc_28A2A+2) ;~ 0204:0E9D
cs=0x204;eip=0x000ea0; 	T(NOP);	// 2100                  nop ;~ 0204:0EA0
cs=0x204;eip=0x000ea1; 	X(PUSH(cs));	// 2101                  push    cs ;~ 0204:0EA1
cs=0x204;eip=0x000ea2; 	J(CALL(__dispatch_call,unk_18fd8));	// 2102                  call    near ptr unk_18FD8 ;~ 0204:0EA2
cs=0x204;eip=0x000ea5; 	T(CMP(ax, 0));	// 2103                  cmp     ax, 0 ;~ 0204:0EA5
cs=0x204;eip=0x000ea8; 	J(JNZ(loc_114d7));	// 2104                  jnz     short loc_114D7 ;~ 0204:0EA8
cs=0x204;eip=0x000eaa; 	X(PUSH(*(dw*)(((db*)word_4ae5c)+0x480)));	// 2105                  push    word_4AE5C+480h ;~ 0204:0EAA
cs=0x204;eip=0x000eae; 	X(PUSH(0));	// 2106                  push    0 ;~ 0204:0EAE
cs=0x204;eip=0x000eb0; 	X(PUSH(0));	// 2107                  push    0 ;~ 0204:0EB0
cs=0x204;eip=0x000eb2; 	T(NOP);	// 2108                  nop ;~ 0204:0EB2
cs=0x204;eip=0x000eb3; 	X(PUSH(cs));	// 2109                  push    cs ;~ 0204:0EB3
cs=0x204;eip=0x000eb4; 	J(CALL(__dispatch_call,unk_194cf));	// 2110                  call    near ptr unk_194CF ;~ 0204:0EB4
loc_114d7:
	// 4452 
cs=0x204;eip=0x000eb7; 	X(POP(es));	// 2114                  pop     es ;~ 0204:0EB7
cs=0x204;eip=0x000eb8; 	J(RETN(0));	// 2115                  retn ;~ 0204:0EB8
loc_114d9:
	// 4453 
cs=0x204;eip=0x000eb9; 	T(ax = 1;);	// 2119                  mov     ax, 1 ;~ 0204:0EB9
cs=0x204;eip=0x000ebc; 	J(JMP(loc_114d7));	// 2120                  jmp     short loc_114D7 ;~ 0204:0EBC

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_114d7: 	goto loc_114d7;
        case m2c::kloc_114d9: 	goto loc_114d9;
        case m2c::ksub_114a2: 	goto sub_114a2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_114de(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_114de:
    _begin:
cs=0x204;eip=0x000ebe; 	J(CALL(sub_111c6,0));	// 2128                  call    sub_111C6 ;~ 0204:0EBE
cs=0x204;eip=0x000ec1; 	T(ax = *(dw*)(((db*)word_4ae5c)+0x47A););	// 2129                  mov     ax, word_4AE5C+47Ah ;~ 0204:0EC1
cs=0x204;eip=0x000ec4; 	T(CMP(ax, *(dw*)(((db*)word_4ae5c)+0x47C)));	// 2130                  cmp     ax, word_4AE5C+47Ch ;~ 0204:0EC4
cs=0x204;eip=0x000ec8; 	J(JNC(loc_114ef));	// 2131                  jnb     short loc_114EF ;~ 0204:0EC8
loc_114ea:
	// 4454 
cs=0x204;eip=0x000eca; 	T(ax = 1;);	// 2134                  mov     ax, 1 ;~ 0204:0ECA
cs=0x204;eip=0x000ecd; 	J(JMP(locret_114fa));	// 2135                  jmp     short locret_114FA ;~ 0204:0ECD
loc_114ef:
	// 4455 
cs=0x204;eip=0x000ecf; 	T(CMP(ax, 0x118));	// 2139                  cmp     ax, 118h ;~ 0204:0ECF
cs=0x204;eip=0x000ed2; 	J(JC(loc_114ea));	// 2140                  jb      short loc_114EA ;~ 0204:0ED2
cs=0x204;eip=0x000ed4; 	X(*(dw*)(((db*)word_4ae5c)+0x484) = ax;);	// 2141                  mov     word_4AE5C+484h, ax ;~ 0204:0ED4
cs=0x204;eip=0x000ed7; 	T(ax = 0;);	// 2142                  mov     ax, 0 ;~ 0204:0ED7
locret_114fa:
	// 4456 
cs=0x204;eip=0x000eda; 	J(RETN(0));	// 2145                  retn ;~ 0204:0EDA

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_114ea: 	goto loc_114ea;
        case m2c::kloc_114ef: 	goto loc_114ef;
        case m2c::klocret_114fa: 	goto locret_114fa;
        case m2c::ksub_114de: 	goto sub_114de;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg001_edb_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg001_edb_proc:
    _begin:
cs=0x204;eip=0x000edb; 	J(CALL(sub_110b0,0));	// 2149                  call    sub_110B0 ;~ 0204:0EDB
cs=0x204;eip=0x000ede; 	J(CALL(sub_114de,0));	// 2150                  call    sub_114DE ;~ 0204:0EDE
cs=0x204;eip=0x000ee1; 	T(TEST(ax, ax));	// 2151                  test    ax, ax ;~ 0204:0EE1
cs=0x204;eip=0x000ee3; 	J(JNZ(locret_1150f));	// 2152                  jnz     short locret_1150F ;~ 0204:0EE3
cs=0x204;eip=0x000ee5; 	J(CALL(sub_11050,0));	// 2153                  call    sub_11050 ;~ 0204:0EE5
cs=0x204;eip=0x000ee8; 	T(TEST(ax, ax));	// 2154                  test    ax, ax ;~ 0204:0EE8
cs=0x204;eip=0x000eea; 	J(JNZ(locret_1150f));	// 2155                  jnz     short locret_1150F ;~ 0204:0EEA
cs=0x204;eip=0x000eec; 	J(CALL(sub_114a2,0));	// 2156                  call    sub_114A2 ;~ 0204:0EEC
locret_1150f:
	// 4457 
cs=0x204;eip=0x000eef; 	J(RETN(0));	// 2160                  retn ;~ 0204:0EEF
ret_204_ef0:
	// 4458 
cs=0x204;eip=0x000ef0; 	T(si = *(dw*)(((db*)word_4ae5c)+0x48C););	// 2162                  mov     si, word_4AE5C+48Ch ;~ 0204:0EF0
cs=0x204;eip=0x000ef4; 	T(di = *(dw*)(((db*)word_4ae5c)+0x48A););	// 2163                  mov     di, word_4AE5C+48Ah ;~ 0204:0EF4
cs=0x204;eip=0x000ef8; 	T(ax = 0x502;);	// 2164                  mov     ax, 502h ;~ 0204:0EF8
cs=0x204;eip=0x000efb; 	J(CALL(__dispatch_call,unk_1f35f));	// 2165                  call    near ptr unk_1F35F ;~ 0204:0EFB
cs=0x204;eip=0x000efe; 	J(RETN(0));	// 2166                  retn ;~ 0204:0EFE

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::klocret_1150f: 	goto locret_1150f;
        case m2c::kret_204_ef0: 	goto ret_204_ef0;
        case m2c::kseg001_edb_proc: 	goto seg001_edb_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_11520(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11520:
    _begin:
#undef var_6
#define var_6 -6
	// 2177 var_6           = word ptr -6 ;~ 0204:0F00
#undef var_4
#define var_4 -4
	// 2178 var_4           = word ptr -4 ;~ 0204:0F00
#undef var_2
#define var_2 -2
	// 2179 var_2           = word ptr -2 ;~ 0204:0F00
#undef arg_0
#define arg_0 4
	// 2180 arg_0           = word ptr  4 ;~ 0204:0F00
cs=0x204;eip=0x000f00; 	X(PUSH(bp));	// 2182                  push    bp ;~ 0204:0F00
cs=0x204;eip=0x000f01; 	T(bp = sp;);	// 2183                  mov     bp, sp ;~ 0204:0F01
cs=0x204;eip=0x000f03; 	T(SUB(sp, 6));	// 2184                  sub     sp, 6 ;~ 0204:0F03
cs=0x204;eip=0x000f06; 	X(PUSH(si));	// 2185                  push    si ;~ 0204:0F06
cs=0x204;eip=0x000f07; 	X(PUSH(di));	// 2186                  push    di ;~ 0204:0F07
cs=0x204;eip=0x000f08; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 2187                  mov     si, [bp+arg_0] ;~ 0204:0F08
cs=0x204;eip=0x000f0b; 	T(XOR(di, di));	// 2188                  xor     di, di ;~ 0204:0F0B
cs=0x204;eip=0x000f0d; 	X(PUSH(si));	// 2189                  push    si ;~ 0204:0F0D
cs=0x204;eip=0x000f0e; 	X(PUSH(ss));	// 2190                  push    ss ;~ 0204:0F0E
cs=0x204;eip=0x000f0f; 	T(ax = bp+var_4);	// 2191                  lea     ax, [bp+var_4] ;~ 0204:0F0F
cs=0x204;eip=0x000f12; 	X(PUSH(ax));	// 2192                  push    ax ;~ 0204:0F12
cs=0x204;eip=0x000f13; 	T(NOP);	// 2193                  nop ;~ 0204:0F13
cs=0x204;eip=0x000f14; 	X(PUSH(cs));	// 2194                  push    cs ;~ 0204:0F14
cs=0x204;eip=0x000f15; 	J(CALL(__dispatch_call,unk_1b050));	// 2195                  call    near ptr unk_1B050 ;~ 0204:0F15
cs=0x204;eip=0x000f18; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 2196                  cmp     [bp+var_4], 0 ;~ 0204:0F18
cs=0x204;eip=0x000f1c; 	J(JNZ(loc_11579));	// 2197                  jnz     short loc_11579 ;~ 0204:0F1C
cs=0x204;eip=0x000f1e; 	X(PUSH(si));	// 2198                  push    si ;~ 0204:0F1E
cs=0x204;eip=0x000f1f; 	X(PUSH(ss));	// 2199                  push    ss ;~ 0204:0F1F
cs=0x204;eip=0x000f20; 	T(ax = bp+var_6);	// 2200                  lea     ax, [bp+var_6] ;~ 0204:0F20
cs=0x204;eip=0x000f23; 	X(PUSH(ax));	// 2201                  push    ax ;~ 0204:0F23
cs=0x204;eip=0x000f24; 	T(NOP);	// 2202                  nop ;~ 0204:0F24
cs=0x204;eip=0x000f25; 	X(PUSH(cs));	// 2203                  push    cs ;~ 0204:0F25
cs=0x204;eip=0x000f26; 	J(CALL(__dispatch_call,unk_1aecc));	// 2204                  call    near ptr unk_1AECC ;~ 0204:0F26
cs=0x204;eip=0x000f29; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_6))));	// 2205                  mov     di, [bp+var_6] ;~ 0204:0F29
cs=0x204;eip=0x000f2c; 	T(AND(di, 0x20));	// 2206                  and     di, 20h ;~ 0204:0F2C
cs=0x204;eip=0x000f2f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 2207                  mov     ax, [bp+var_6] ;~ 0204:0F2F
cs=0x204;eip=0x000f32; 	T(OR(ax, 0x1000));	// 2208                  or      ax, 1000h ;~ 0204:0F32
cs=0x204;eip=0x000f35; 	T(AND(ax, 0x0FFDF));	// 2209                  and     ax, 0FFDFh ;~ 0204:0F35
cs=0x204;eip=0x000f38; 	T(OR(ax, 0x8000));	// 2210                  or      ax, 8000h ;~ 0204:0F38
cs=0x204;eip=0x000f3b; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 2211                  mov     [bp+var_6], ax ;~ 0204:0F3B
cs=0x204;eip=0x000f3e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 2212                  mov     ax, [bp+var_2] ;~ 0204:0F3E
cs=0x204;eip=0x000f41; 	T(XOR(dx, dx));	// 2213                  xor     dx, dx ;~ 0204:0F41
cs=0x204;eip=0x000f43; 	T(OR(dx, *(dw*)(raddr(ss,bp+var_6))));	// 2214                  or      dx, [bp+var_6] ;~ 0204:0F43
cs=0x204;eip=0x000f46; 	T(AND(ax, 0x0FFFF));	// 2215                  and     ax, 0FFFFh ;~ 0204:0F46
cs=0x204;eip=0x000f49; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 2216                  mov     [bp+var_2], ax ;~ 0204:0F49
cs=0x204;eip=0x000f4c; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 2217                  mov     [bp+var_4], dx ;~ 0204:0F4C
cs=0x204;eip=0x000f4f; 	X(PUSH(si));	// 2218                  push    si ;~ 0204:0F4F
cs=0x204;eip=0x000f50; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 2219                  push    [bp+var_2] ;~ 0204:0F50
cs=0x204;eip=0x000f53; 	X(PUSH(dx));	// 2220                  push    dx ;~ 0204:0F53
cs=0x204;eip=0x000f54; 	T(NOP);	// 2221                  nop ;~ 0204:0F54
cs=0x204;eip=0x000f55; 	X(PUSH(cs));	// 2222                  push    cs ;~ 0204:0F55
cs=0x204;eip=0x000f56; 	J(CALL(__dispatch_call,unk_1b0a8));	// 2223                  call    near ptr unk_1B0A8 ;~ 0204:0F56
loc_11579:
	// 4459 
cs=0x204;eip=0x000f59; 	T(ax = di;);	// 2226                  mov     ax, di ;~ 0204:0F59
cs=0x204;eip=0x000f5b; 	X(POP(di));	// 2227                  pop     di ;~ 0204:0F5B
cs=0x204;eip=0x000f5c; 	X(POP(si));	// 2228                  pop     si ;~ 0204:0F5C
cs=0x204;eip=0x000f5d; 	T(LEAVE);	// 2229                  leave ;~ 0204:0F5D
cs=0x204;eip=0x000f5e; 	J(RETN(0));	// 2230                  retn ;~ 0204:0F5E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_11579: 	goto loc_11579;
        case m2c::ksub_11520: 	goto sub_11520;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1157f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1157f:
    _begin:
#undef var_4
#define var_4 -4
	// 2241 var_4           = word ptr -4 ;~ 0204:0F5F
#undef var_2
#define var_2 -2
	// 2242 var_2           = word ptr -2 ;~ 0204:0F5F
#undef arg_0
#define arg_0 4
	// 2243 arg_0           = word ptr  4 ;~ 0204:0F5F
cs=0x204;eip=0x000f5f; 	X(PUSH(bp));	// 2245                  push    bp ;~ 0204:0F5F
cs=0x204;eip=0x000f60; 	T(bp = sp;);	// 2246                  mov     bp, sp ;~ 0204:0F60
cs=0x204;eip=0x000f62; 	T(SUB(sp, 4));	// 2247                  sub     sp, 4 ;~ 0204:0F62
cs=0x204;eip=0x000f65; 	X(PUSH(si));	// 2248                  push    si ;~ 0204:0F65
cs=0x204;eip=0x000f66; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 2249                  mov     si, [bp+arg_0] ;~ 0204:0F66
cs=0x204;eip=0x000f69; 	X(PUSH(si));	// 2250                  push    si ;~ 0204:0F69
cs=0x204;eip=0x000f6a; 	X(PUSH(ss));	// 2251                  push    ss ;~ 0204:0F6A
cs=0x204;eip=0x000f6b; 	T(ax = bp+var_4);	// 2252                  lea     ax, [bp+var_4] ;~ 0204:0F6B
cs=0x204;eip=0x000f6e; 	X(PUSH(ax));	// 2253                  push    ax ;~ 0204:0F6E
cs=0x204;eip=0x000f6f; 	T(NOP);	// 2254                  nop ;~ 0204:0F6F
cs=0x204;eip=0x000f70; 	X(PUSH(cs));	// 2255                  push    cs ;~ 0204:0F70
cs=0x204;eip=0x000f71; 	J(CALL(__dispatch_call,unk_1b050));	// 2256                  call    near ptr unk_1B050 ;~ 0204:0F71
cs=0x204;eip=0x000f74; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4))));	// 2257                  mov     dx, [bp+var_4] ;~ 0204:0F74
cs=0x204;eip=0x000f77; 	T(TEST(dx, 0x8000));	// 2258                  test    dx, 8000h ;~ 0204:0F77
cs=0x204;eip=0x000f7b; 	J(JZ(loc_115b8));	// 2259                  jz      short loc_115B8 ;~ 0204:0F7B
cs=0x204;eip=0x000f7d; 	X(PUSH(si));	// 2260                  push    si ;~ 0204:0F7D
cs=0x204;eip=0x000f7e; 	X(PUSH(dx));	// 2261                  push    dx ;~ 0204:0F7E
cs=0x204;eip=0x000f7f; 	T(NOP);	// 2262                  nop ;~ 0204:0F7F
cs=0x204;eip=0x000f80; 	X(PUSH(cs));	// 2263                  push    cs ;~ 0204:0F80
cs=0x204;eip=0x000f81; 	J(CALL(__dispatch_call,unk_1a81b));	// 2264                  call    near ptr unk_1A81B ;~ 0204:0F81
cs=0x204;eip=0x000f84; 	X(AND(*(dw*)(raddr(ss,bp+var_4)), 0));	// 2265                  and     [bp+var_4], 0 ;~ 0204:0F84
cs=0x204;eip=0x000f88; 	X(AND(*(dw*)(raddr(ss,bp+var_2)), 0x0FFFF));	// 2266                  and     [bp+var_2], 0FFFFh ;~ 0204:0F88
cs=0x204;eip=0x000f8c; 	X(PUSH(si));	// 2267                  push    si ;~ 0204:0F8C
cs=0x204;eip=0x000f8d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 2268                  push    [bp+var_2] ;~ 0204:0F8D
cs=0x204;eip=0x000f90; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 2269                  push    [bp+var_4] ;~ 0204:0F90
cs=0x204;eip=0x000f93; 	T(NOP);	// 2270                  nop ;~ 0204:0F93
cs=0x204;eip=0x000f94; 	X(PUSH(cs));	// 2271                  push    cs ;~ 0204:0F94
cs=0x204;eip=0x000f95; 	J(CALL(__dispatch_call,unk_1b0a8));	// 2272                  call    near ptr unk_1B0A8 ;~ 0204:0F95
loc_115b8:
	// 4460 
cs=0x204;eip=0x000f98; 	X(POP(si));	// 2275                  pop     si ;~ 0204:0F98
cs=0x204;eip=0x000f99; 	T(LEAVE);	// 2276                  leave ;~ 0204:0F99
cs=0x204;eip=0x000f9a; 	J(RETN(0));	// 2277                  retn ;~ 0204:0F9A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_115b8: 	goto loc_115b8;
        case m2c::ksub_1157f: 	goto sub_1157f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_115bb(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_115bb:
    _begin:
#undef var_6
#define var_6 -6
	// 2288 var_6           = word ptr -6 ;~ 0204:0F9B
#undef var_4
#define var_4 -4
	// 2289 var_4           = word ptr -4 ;~ 0204:0F9B
#undef arg_0
#define arg_0 4
	// 2290 arg_0           = word ptr  4 ;~ 0204:0F9B
cs=0x204;eip=0x000f9b; 	X(PUSH(bp));	// 2292                  push    bp ;~ 0204:0F9B
cs=0x204;eip=0x000f9c; 	T(bp = sp;);	// 2293                  mov     bp, sp ;~ 0204:0F9C
cs=0x204;eip=0x000f9e; 	T(SUB(sp, 6));	// 2294                  sub     sp, 6 ;~ 0204:0F9E
cs=0x204;eip=0x000fa1; 	X(PUSH(si));	// 2295                  push    si ;~ 0204:0FA1
cs=0x204;eip=0x000fa2; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 2296                  mov     si, [bp+arg_0] ;~ 0204:0FA2
cs=0x204;eip=0x000fa5; 	X(PUSH(si));	// 2297                  push    si ;~ 0204:0FA5
cs=0x204;eip=0x000fa6; 	X(PUSH(ss));	// 2298                  push    ss ;~ 0204:0FA6
cs=0x204;eip=0x000fa7; 	T(ax = bp+var_4);	// 2299                  lea     ax, [bp+var_4] ;~ 0204:0FA7
cs=0x204;eip=0x000faa; 	X(PUSH(ax));	// 2300                  push    ax ;~ 0204:0FAA
cs=0x204;eip=0x000fab; 	T(NOP);	// 2301                  nop ;~ 0204:0FAB
cs=0x204;eip=0x000fac; 	X(PUSH(cs));	// 2302                  push    cs ;~ 0204:0FAC
cs=0x204;eip=0x000fad; 	J(CALL(__dispatch_call,unk_1b050));	// 2303                  call    near ptr unk_1B050 ;~ 0204:0FAD
cs=0x204;eip=0x000fb0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 2304                  mov     ax, [bp+var_4] ;~ 0204:0FB0
cs=0x204;eip=0x000fb3; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 2305                  mov     [bp+var_6], ax ;~ 0204:0FB3
cs=0x204;eip=0x000fb6; 	T(TEST(*(dw*)(raddr(ss,bp+var_6)), 0x8000));	// 2306                  test    [bp+var_6], 8000h ;~ 0204:0FB6
cs=0x204;eip=0x000fbb; 	J(JNZ(loc_115e8));	// 2307                  jnz     short loc_115E8 ;~ 0204:0FBB
cs=0x204;eip=0x000fbd; 	X(PUSH(si));	// 2308                  push    si ;~ 0204:0FBD
cs=0x204;eip=0x000fbe; 	X(PUSH(ss));	// 2309                  push    ss ;~ 0204:0FBE
cs=0x204;eip=0x000fbf; 	T(ax = bp+var_6);	// 2310                  lea     ax, [bp+var_6] ;~ 0204:0FBF
cs=0x204;eip=0x000fc2; 	X(PUSH(ax));	// 2311                  push    ax ;~ 0204:0FC2
cs=0x204;eip=0x000fc3; 	T(NOP);	// 2312                  nop ;~ 0204:0FC3
cs=0x204;eip=0x000fc4; 	X(PUSH(cs));	// 2313                  push    cs ;~ 0204:0FC4
cs=0x204;eip=0x000fc5; 	J(CALL(__dispatch_call,unk_1aecc));	// 2314                  call    near ptr unk_1AECC ;~ 0204:0FC5
loc_115e8:
	// 4461 
cs=0x204;eip=0x000fc8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 2317                  mov     ax, [bp+var_6] ;~ 0204:0FC8
cs=0x204;eip=0x000fcb; 	X(POP(si));	// 2318                  pop     si ;~ 0204:0FCB
cs=0x204;eip=0x000fcc; 	T(LEAVE);	// 2319                  leave ;~ 0204:0FCC
cs=0x204;eip=0x000fcd; 	J(RETN(0));	// 2320                  retn ;~ 0204:0FCD

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_115e8: 	goto loc_115e8;
        case m2c::ksub_115bb: 	goto sub_115bb;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_115ee(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_115ee:
    _begin:
#undef var_4
#define var_4 -4
	// 2330 var_4           = byte ptr -4 ;~ 0204:0FCE
#undef var_2
#define var_2 -2
	// 2331 var_2           = word ptr -2 ;~ 0204:0FCE
#undef arg_0
#define arg_0 4
	// 2332 arg_0           = word ptr  4 ;~ 0204:0FCE
cs=0x204;eip=0x000fce; 	X(PUSH(bp));	// 2334                  push    bp ;~ 0204:0FCE
cs=0x204;eip=0x000fcf; 	T(bp = sp;);	// 2335                  mov     bp, sp ;~ 0204:0FCF
cs=0x204;eip=0x000fd1; 	T(SUB(sp, 4));	// 2336                  sub     sp, 4 ;~ 0204:0FD1
cs=0x204;eip=0x000fd4; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 2337                  push    [bp+arg_0] ;~ 0204:0FD4
cs=0x204;eip=0x000fd7; 	X(PUSH(ss));	// 2338                  push    ss ;~ 0204:0FD7
cs=0x204;eip=0x000fd8; 	T(ax = bp+var_4);	// 2339                  lea     ax, [bp+var_4] ;~ 0204:0FD8
cs=0x204;eip=0x000fdb; 	X(PUSH(ax));	// 2340                  push    ax ;~ 0204:0FDB
cs=0x204;eip=0x000fdc; 	T(NOP);	// 2341                  nop ;~ 0204:0FDC
cs=0x204;eip=0x000fdd; 	X(PUSH(cs));	// 2342                  push    cs ;~ 0204:0FDD
cs=0x204;eip=0x000fde; 	J(CALL(__dispatch_call,unk_1b050));	// 2343                  call    near ptr unk_1B050 ;~ 0204:0FDE
cs=0x204;eip=0x000fe1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 2344                  mov     ax, [bp+var_2] ;~ 0204:0FE1
cs=0x204;eip=0x000fe4; 	T(LEAVE);	// 2345                  leave ;~ 0204:0FE4
cs=0x204;eip=0x000fe5; 	J(RETN(0));	// 2346                  retn ;~ 0204:0FE5

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_115ee: 	goto sub_115ee;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_11606(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11606:
    _begin:
#undef var_4
#define var_4 -4
	// 2356 var_4           = word ptr -4 ;~ 0204:0FE6
#undef var_2
#define var_2 -2
	// 2357 var_2           = word ptr -2 ;~ 0204:0FE6
#undef arg_0
#define arg_0 4
	// 2358 arg_0           = word ptr  4 ;~ 0204:0FE6
cs=0x204;eip=0x000fe6; 	X(PUSH(bp));	// 2360                  push    bp ;~ 0204:0FE6
cs=0x204;eip=0x000fe7; 	T(bp = sp;);	// 2361                  mov     bp, sp ;~ 0204:0FE7
cs=0x204;eip=0x000fe9; 	T(SUB(sp, 4));	// 2362                  sub     sp, 4 ;~ 0204:0FE9
cs=0x204;eip=0x000fec; 	X(PUSH(si));	// 2363                  push    si ;~ 0204:0FEC
cs=0x204;eip=0x000fed; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 2364                  mov     si, [bp+arg_0] ;~ 0204:0FED
cs=0x204;eip=0x000ff0; 	X(PUSH(si));	// 2365                  push    si ;~ 0204:0FF0
cs=0x204;eip=0x000ff1; 	X(PUSH(ss));	// 2366                  push    ss ;~ 0204:0FF1
cs=0x204;eip=0x000ff2; 	T(ax = bp+var_4);	// 2367                  lea     ax, [bp+var_4] ;~ 0204:0FF2
cs=0x204;eip=0x000ff5; 	X(PUSH(ax));	// 2368                  push    ax ;~ 0204:0FF5
cs=0x204;eip=0x000ff6; 	T(NOP);	// 2369                  nop ;~ 0204:0FF6
cs=0x204;eip=0x000ff7; 	X(PUSH(cs));	// 2370                  push    cs ;~ 0204:0FF7
cs=0x204;eip=0x000ff8; 	J(CALL(__dispatch_call,unk_1b050));	// 2371                  call    near ptr unk_1B050 ;~ 0204:0FF8
cs=0x204;eip=0x000ffb; 	X(PUSH(si));	// 2372                  push    si ;~ 0204:0FFB
cs=0x204;eip=0x000ffc; 	J(CALL(sub_115bb,0));	// 2373                  call    sub_115BB ;~ 0204:0FFC
cs=0x204;eip=0x000fff; 	X(POP(cx));	// 2374                  pop     cx ;~ 0204:0FFF
cs=0x204;eip=0x001000; 	T(TEST(ax, 7));	// 2375                  test    ax, 7 ;~ 0204:1000
cs=0x204;eip=0x001003; 	J(JNZ(loc_11639));	// 2376                  jnz     short loc_11639 ;~ 0204:1003
cs=0x204;eip=0x001005; 	X(ADD(*(dw*)(raddr(ss,bp+var_4)), 0));	// 2377                  add     [bp+var_4], 0 ;~ 0204:1005
cs=0x204;eip=0x001009; 	X(ADC(*(dw*)(raddr(ss,bp+var_2)), 1));	// 2378                  adc     [bp+var_2], 1 ;~ 0204:1009
cs=0x204;eip=0x00100d; 	X(PUSH(si));	// 2379                  push    si ;~ 0204:100D
cs=0x204;eip=0x00100e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 2380                  push    [bp+var_2] ;~ 0204:100E
cs=0x204;eip=0x001011; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 2381                  push    [bp+var_4] ;~ 0204:1011
cs=0x204;eip=0x001014; 	T(NOP);	// 2382                  nop ;~ 0204:1014
cs=0x204;eip=0x001015; 	X(PUSH(cs));	// 2383                  push    cs ;~ 0204:1015
cs=0x204;eip=0x001016; 	J(CALL(__dispatch_call,unk_1b0a8));	// 2384                  call    near ptr unk_1B0A8 ;~ 0204:1016
loc_11639:
	// 4462 
cs=0x204;eip=0x001019; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 2387                  mov     ax, [bp+var_2] ;~ 0204:1019
cs=0x204;eip=0x00101c; 	X(POP(si));	// 2388                  pop     si ;~ 0204:101C
cs=0x204;eip=0x00101d; 	T(LEAVE);	// 2389                  leave ;~ 0204:101D
cs=0x204;eip=0x00101e; 	J(RETN(0));	// 2390                  retn ;~ 0204:101E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_11639: 	goto loc_11639;
        case m2c::ksub_11606: 	goto sub_11606;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1163f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1163f:
    _begin:
#undef var_4
#define var_4 -4
	// 2400 var_4           = word ptr -4 ;~ 0204:101F
#undef var_2
#define var_2 -2
	// 2401 var_2           = word ptr -2 ;~ 0204:101F
#undef arg_0
#define arg_0 4
	// 2402 arg_0           = word ptr  4 ;~ 0204:101F
cs=0x204;eip=0x00101f; 	X(PUSH(bp));	// 2404                  push    bp ;~ 0204:101F
cs=0x204;eip=0x001020; 	T(bp = sp;);	// 2405                  mov     bp, sp ;~ 0204:1020
cs=0x204;eip=0x001022; 	T(SUB(sp, 4));	// 2406                  sub     sp, 4 ;~ 0204:1022
cs=0x204;eip=0x001025; 	X(PUSH(si));	// 2407                  push    si ;~ 0204:1025
cs=0x204;eip=0x001026; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 2408                  mov     si, [bp+arg_0] ;~ 0204:1026
cs=0x204;eip=0x001029; 	X(PUSH(si));	// 2409                  push    si ;~ 0204:1029
cs=0x204;eip=0x00102a; 	X(PUSH(ss));	// 2410                  push    ss ;~ 0204:102A
cs=0x204;eip=0x00102b; 	T(ax = bp+var_4);	// 2411                  lea     ax, [bp+var_4] ;~ 0204:102B
cs=0x204;eip=0x00102e; 	X(PUSH(ax));	// 2412                  push    ax ;~ 0204:102E
cs=0x204;eip=0x00102f; 	T(NOP);	// 2413                  nop ;~ 0204:102F
cs=0x204;eip=0x001030; 	X(PUSH(cs));	// 2414                  push    cs ;~ 0204:1030
cs=0x204;eip=0x001031; 	J(CALL(__dispatch_call,unk_1b050));	// 2415                  call    near ptr unk_1B050 ;~ 0204:1031
cs=0x204;eip=0x001034; 	X(PUSH(si));	// 2416                  push    si ;~ 0204:1034
cs=0x204;eip=0x001035; 	J(CALL(sub_115bb,0));	// 2417                  call    sub_115BB ;~ 0204:1035
cs=0x204;eip=0x001038; 	X(POP(cx));	// 2418                  pop     cx ;~ 0204:1038
cs=0x204;eip=0x001039; 	T(TEST(ax, 7));	// 2419                  test    ax, 7 ;~ 0204:1039
cs=0x204;eip=0x00103c; 	J(JNZ(loc_11679));	// 2420                  jnz     short loc_11679 ;~ 0204:103C
cs=0x204;eip=0x00103e; 	T(XOR(ax, ax));	// 2421                  xor     ax, ax ;~ 0204:103E
cs=0x204;eip=0x001040; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_2))));	// 2422                  or      ax, [bp+var_2] ;~ 0204:1040
cs=0x204;eip=0x001043; 	J(JZ(loc_1166d));	// 2423                  jz      short loc_1166D ;~ 0204:1043
cs=0x204;eip=0x001045; 	X(SUB(*(dw*)(raddr(ss,bp+var_4)), 0));	// 2424                  sub     [bp+var_4], 0 ;~ 0204:1045
cs=0x204;eip=0x001049; 	X(SBB(*(dw*)(raddr(ss,bp+var_2)), 1));	// 2425                  sbb     [bp+var_2], 1 ;~ 0204:1049
loc_1166d:
	// 4463 
cs=0x204;eip=0x00104d; 	X(PUSH(si));	// 2428                  push    si ;~ 0204:104D
cs=0x204;eip=0x00104e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 2429                  push    [bp+var_2] ;~ 0204:104E
cs=0x204;eip=0x001051; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 2430                  push    [bp+var_4] ;~ 0204:1051
cs=0x204;eip=0x001054; 	T(NOP);	// 2431                  nop ;~ 0204:1054
cs=0x204;eip=0x001055; 	X(PUSH(cs));	// 2432                  push    cs ;~ 0204:1055
cs=0x204;eip=0x001056; 	J(CALL(__dispatch_call,unk_1b0a8));	// 2433                  call    near ptr unk_1B0A8 ;~ 0204:1056
loc_11679:
	// 4464 
cs=0x204;eip=0x001059; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 2436                  mov     ax, [bp+var_2] ;~ 0204:1059
cs=0x204;eip=0x00105c; 	X(POP(si));	// 2437                  pop     si ;~ 0204:105C
cs=0x204;eip=0x00105d; 	T(LEAVE);	// 2438                  leave ;~ 0204:105D
cs=0x204;eip=0x00105e; 	J(RETN(0));	// 2439                  retn ;~ 0204:105E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1166d: 	goto loc_1166d;
        case m2c::kloc_11679: 	goto loc_11679;
        case m2c::ksub_1163f: 	goto sub_1163f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1167f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1167f:
    _begin:
#undef var_2
#define var_2 -2
	// 2449 var_2           = word ptr -2 ;~ 0204:105F
#undef arg_0
#define arg_0 6
	// 2450 arg_0           = word ptr  6 ;~ 0204:105F
#undef arg_2
#define arg_2 8
	// 2451 arg_2           = word ptr  8 ;~ 0204:105F
cs=0x204;eip=0x00105f; 	T(INC(bp));	// 2453                  inc     bp ;~ 0204:105F
cs=0x204;eip=0x001060; 	X(PUSH(bp));	// 2454                  push    bp ;~ 0204:1060
cs=0x204;eip=0x001061; 	T(bp = sp;);	// 2455                  mov     bp, sp ;~ 0204:1061
cs=0x204;eip=0x001063; 	T(SUB(sp, 2));	// 2456                  sub     sp, 2 ;~ 0204:1063
cs=0x204;eip=0x001066; 	X(PUSH(si));	// 2457                  push    si ;~ 0204:1066
cs=0x204;eip=0x001067; 	X(PUSH(di));	// 2458                  push    di ;~ 0204:1067
cs=0x204;eip=0x001068; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_2))));	// 2459                  mov     di, [bp+arg_2] ;~ 0204:1068
cs=0x204;eip=0x00106b; 	T(ds = *(dw*)(amgraphicexe););	// 2460                  mov     ds, word ptr cs:aMgraphicExe ; "Mgraphic.exe" ;~ 0204:106B
cs=0x204;eip=0x001070; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 2));	// 2462                  cmp     [bp+arg_0], 2 ;~ 0204:1070
cs=0x204;eip=0x001074; 	J(JNZ(loc_116cb));	// 2463                  jnz     short loc_116CB ;~ 0204:1074
cs=0x204;eip=0x001076; 	X(PUSH(di));	// 2464                  push    di ;~ 0204:1076
cs=0x204;eip=0x001077; 	X(PUSH(ss));	// 2465                  push    ss ;~ 0204:1077
cs=0x204;eip=0x001078; 	T(ax = bp+var_2);	// 2466                  lea     ax, [bp+var_2] ;~ 0204:1078
cs=0x204;eip=0x00107b; 	X(PUSH(ax));	// 2467                  push    ax ;~ 0204:107B
cs=0x204;eip=0x00107c; 	T(NOP);	// 2468                  nop ;~ 0204:107C
cs=0x204;eip=0x00107d; 	X(PUSH(cs));	// 2469                  push    cs ;~ 0204:107D
cs=0x204;eip=0x00107e; 	J(CALL(__dispatch_call,unk_1af56));	// 2470                  call    near ptr unk_1AF56 ;~ 0204:107E
cs=0x204;eip=0x001081; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 2471                  push    [bp+var_2] ;~ 0204:1081
cs=0x204;eip=0x001084; 	X(PUSH(ss));	// 2472                  push    ss ;~ 0204:1084
cs=0x204;eip=0x001085; 	T(ax = bp+var_2);	// 2473                  lea     ax, [bp+var_2] ;~ 0204:1085
cs=0x204;eip=0x001088; 	X(PUSH(ax));	// 2474                  push    ax ;~ 0204:1088
cs=0x204;eip=0x001089; 	T(NOP);	// 2475                  nop ;~ 0204:1089
cs=0x204;eip=0x00108a; 	X(PUSH(cs));	// 2476                  push    cs ;~ 0204:108A
cs=0x204;eip=0x00108b; 	J(CALL(__dispatch_call,unk_1e745));	// 2477                  call    near ptr unk_1E745 ;~ 0204:108B
cs=0x204;eip=0x00108e; 	T(XOR(dx, dx));	// 2478                  xor     dx, dx ;~ 0204:108E
cs=0x204;eip=0x001090; 	T(si = 0x3AA4;);	// 2479                  mov     si, 3AA4h ;~ 0204:1090
cs=0x204;eip=0x001093; 	J(JMP(loc_116c6));	// 2480                  jmp     short loc_116C6 ;~ 0204:1093
loc_116b5:
	// 4465 
cs=0x204;eip=0x001095; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 2484                  mov     ax, [si] ;~ 0204:1095
cs=0x204;eip=0x001097; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_2))));	// 2485                  cmp     ax, [bp+var_2] ;~ 0204:1097
cs=0x204;eip=0x00109a; 	J(JNZ(loc_116c2));	// 2486                  jnz     short loc_116C2 ;~ 0204:109A
cs=0x204;eip=0x00109c; 	X(PUSH(di));	// 2487                  push    di ;~ 0204:109C
cs=0x204;eip=0x00109d; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ds,si+2))));	// 2488                  call    dword ptr [si+2] ;~ 0204:109D
cs=0x204;eip=0x0010a0; 	J(JMP(loc_116ce));	// 2489                  jmp     short loc_116CE ;~ 0204:10A0
loc_116c2:
	// 4466 
cs=0x204;eip=0x0010a2; 	T(INC(dx));	// 2493                  inc     dx ;~ 0204:10A2
cs=0x204;eip=0x0010a3; 	T(ADD(si, 6));	// 2494                  add     si, 6 ;~ 0204:10A3
loc_116c6:
	// 4467 
cs=0x204;eip=0x0010a6; 	T(CMP(dx, 0x40));	// 2497                  cmp     dx, 40h ; '@' ;~ 0204:10A6
cs=0x204;eip=0x0010a9; 	J(JL(loc_116b5));	// 2498                  jl      short loc_116B5 ;~ 0204:10A9
loc_116cb:
	// 4468 
cs=0x204;eip=0x0010ab; 	T(ax = 1;);	// 2501                  mov     ax, 1 ;~ 0204:10AB
loc_116ce:
	// 4469 
cs=0x204;eip=0x0010ae; 	X(POP(di));	// 2504                  pop     di ;~ 0204:10AE
cs=0x204;eip=0x0010af; 	X(POP(si));	// 2505                  pop     si ;~ 0204:10AF
cs=0x204;eip=0x0010b0; 	T(LEAVE);	// 2506                  leave ;~ 0204:10B0
cs=0x204;eip=0x0010b1; 	T(DEC(bp));	// 2507                  dec     bp ;~ 0204:10B1
cs=0x204;eip=0x0010b2; 	J(RETF(4));	// 2508                  retf    4 ;~ 0204:10B2

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_116b5: 	goto loc_116b5;
        case m2c::kloc_116c2: 	goto loc_116c2;
        case m2c::kloc_116c6: 	goto loc_116c6;
        case m2c::kloc_116cb: 	goto loc_116cb;
        case m2c::kloc_116ce: 	goto loc_116ce;
        case m2c::ksub_1167f: 	goto sub_1167f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_116d5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_116d5:
    _begin:
#undef arg_0
#define arg_0 4
	// 2518 arg_0           = word ptr  4 ;~ 0204:10B5
cs=0x204;eip=0x0010b5; 	X(PUSH(bp));	// 2520                  push    bp ;~ 0204:10B5
cs=0x204;eip=0x0010b6; 	T(bp = sp;);	// 2521                  mov     bp, sp ;~ 0204:10B6
cs=0x204;eip=0x0010b8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 2522                  mov     ax, [bp+arg_0] ;~ 0204:10B8
cs=0x204;eip=0x0010bb; 	T(TEST(ax, 0x100));	// 2523                  test    ax, 100h ;~ 0204:10BB
cs=0x204;eip=0x0010be; 	J(JZ(loc_116e5));	// 2524                  jz      short loc_116E5 ;~ 0204:10BE
cs=0x204;eip=0x0010c0; 	T(TEST(ax, 2));	// 2525                  test    ax, 2 ;~ 0204:10C0
cs=0x204;eip=0x0010c3; 	J(JZ(loc_116ef));	// 2526                  jz      short loc_116EF ;~ 0204:10C3
loc_116e5:
	// 4470 
cs=0x204;eip=0x0010c5; 	T(TEST(ax, 0x1000));	// 2529                  test    ax, 1000h ;~ 0204:10C5
cs=0x204;eip=0x0010c8; 	J(JZ(loc_116f8));	// 2530                  jz      short loc_116F8 ;~ 0204:10C8
cs=0x204;eip=0x0010ca; 	T(TEST(ax, 0x4000));	// 2531                  test    ax, 4000h ;~ 0204:10CA
cs=0x204;eip=0x0010cd; 	J(JZ(loc_116f8));	// 2532                  jz      short loc_116F8 ;~ 0204:10CD
loc_116ef:
	// 4471 
cs=0x204;eip=0x0010cf; 	T(TEST(ax, 0x80));	// 2535                  test    ax, 80h ;~ 0204:10CF
cs=0x204;eip=0x0010d2; 	J(JNZ(loc_116f8));	// 2536                  jnz     short loc_116F8 ;~ 0204:10D2
cs=0x204;eip=0x0010d4; 	T(XOR(ax, ax));	// 2537                  xor     ax, ax ;~ 0204:10D4
cs=0x204;eip=0x0010d6; 	J(JMP(loc_116fb));	// 2538                  jmp     short loc_116FB ;~ 0204:10D6
loc_116f8:
	// 4472 
cs=0x204;eip=0x0010d8; 	T(ax = 1;);	// 2543                  mov     ax, 1 ;~ 0204:10D8
loc_116fb:
	// 4473 
cs=0x204;eip=0x0010db; 	X(POP(bp));	// 2546                  pop     bp ;~ 0204:10DB
cs=0x204;eip=0x0010dc; 	J(RETN(0));	// 2547                  retn ;~ 0204:10DC

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_116e5: 	goto loc_116e5;
        case m2c::kloc_116ef: 	goto loc_116ef;
        case m2c::kloc_116f8: 	goto loc_116f8;
        case m2c::kloc_116fb: 	goto loc_116fb;
        case m2c::ksub_116d5: 	goto sub_116d5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg001_10dd_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg001_10dd_proc:
    _begin:
cs=0x204;eip=0x0010dd; 	X(PUSH(bp));	// 2551                  push    bp ;~ 0204:10DD
cs=0x204;eip=0x0010de; 	T(bp = sp;);	// 2552                  mov     bp, sp ;~ 0204:10DE
cs=0x204;eip=0x0010e0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+4))));	// 2553                  mov     ax, [bp+4] ;~ 0204:10E0
cs=0x204;eip=0x0010e3; 	T(TEST(ax, 0));	// 2554                  test    ax, 0 ;~ 0204:10E3
cs=0x204;eip=0x0010e6; 	J(JZ(loc_1170d));	// 2555                  jz      short loc_1170D ;~ 0204:10E6
cs=0x204;eip=0x0010e8; 	T(dx = 6;);	// 2556                  mov     dx, 6 ;~ 0204:10E8
cs=0x204;eip=0x0010eb; 	J(JMP(loc_11719));	// 2557                  jmp     short loc_11719 ;~ 0204:10EB
loc_1170d:
	// 4474 
cs=0x204;eip=0x0010ed; 	T(TEST(ax, 0x100));	// 2561                  test    ax, 100h ;~ 0204:10ED
cs=0x204;eip=0x0010f0; 	J(JZ(loc_11716));	// 2562                  jz      short loc_11716 ;~ 0204:10F0
cs=0x204;eip=0x0010f2; 	T(XOR(dx, dx));	// 2563                  xor     dx, dx ;~ 0204:10F2
cs=0x204;eip=0x0010f4; 	J(JMP(loc_11719));	// 2564                  jmp     short loc_11719 ;~ 0204:10F4
loc_11716:
	// 4475 
cs=0x204;eip=0x0010f6; 	T(dx = 2;);	// 2568                  mov     dx, 2 ;~ 0204:10F6
loc_11719:
	// 4476 
cs=0x204;eip=0x0010f9; 	T(ax = dx;);	// 2572                  mov     ax, dx ;~ 0204:10F9
cs=0x204;eip=0x0010fb; 	X(POP(bp));	// 2573                  pop     bp ;~ 0204:10FB
cs=0x204;eip=0x0010fc; 	J(RETN(0));	// 2574                  retn ;~ 0204:10FC

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1170d: 	goto loc_1170d;
        case m2c::kloc_11716: 	goto loc_11716;
        case m2c::kloc_11719: 	goto loc_11719;
        case m2c::kseg001_10dd_proc: 	goto seg001_10dd_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1171d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1171d:
    _begin:
#undef arg_0
#define arg_0 4
	// 2582 arg_0           = word ptr  4 ;~ 0204:10FD
#undef arg_2
#define arg_2 6
	// 2583 arg_2           = word ptr  6 ;~ 0204:10FD
#undef arg_4
#define arg_4 8
	// 2584 arg_4           = word ptr  8 ;~ 0204:10FD
cs=0x204;eip=0x0010fd; 	X(PUSH(bp));	// 2586                  push    bp ;~ 0204:10FD
cs=0x204;eip=0x0010fe; 	T(bp = sp;);	// 2587                  mov     bp, sp ;~ 0204:10FE
cs=0x204;eip=0x001100; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 2588                  push    [bp+arg_4] ;~ 0204:1100
cs=0x204;eip=0x001103; 	X(PUSH(0));	// 2589                  push    0 ;~ 0204:1103
cs=0x204;eip=0x001105; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 2590                  push    [bp+arg_2] ;~ 0204:1105
cs=0x204;eip=0x001108; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 2591                  push    [bp+arg_0] ;~ 0204:1108
cs=0x204;eip=0x00110b; 	T(NOP);	// 2592                  nop ;~ 0204:110B
cs=0x204;eip=0x00110c; 	X(PUSH(cs));	// 2593                  push    cs ;~ 0204:110C
cs=0x204;eip=0x00110d; 	J(CALL(__dispatch_call,unk_1b969));	// 2594                  call    near ptr unk_1B969 ;~ 0204:110D
cs=0x204;eip=0x001110; 	T(ADD(sp, 8));	// 2595                  add     sp, 8 ;~ 0204:1110
cs=0x204;eip=0x001113; 	X(POP(bp));	// 2596                  pop     bp ;~ 0204:1113
cs=0x204;eip=0x001114; 	J(RETN(0));	// 2597                  retn ;~ 0204:1114

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_1171d: 	goto sub_1171d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg001_1115_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg001_1115_proc:
    _begin:
cs=0x204;eip=0x001115; 	X(PUSH(bp));	// 2601                  push    bp ;~ 0204:1115
cs=0x204;eip=0x001116; 	T(bp = sp;);	// 2602                  mov     bp, sp ;~ 0204:1116
cs=0x204;eip=0x001118; 	T(SUB(sp, 2));	// 2603                  sub     sp, 2 ;~ 0204:1118
cs=0x204;eip=0x00111b; 	X(PUSH(di));	// 2604                  push    di ;~ 0204:111B
cs=0x204;eip=0x00111c; 	T(NOP);	// 2605                  nop ;~ 0204:111C
cs=0x204;eip=0x00111d; 	X(PUSH(cs));	// 2606                  push    cs ;~ 0204:111D
cs=0x204;eip=0x00111e; 	J(CALL(__dispatch_call,unk_18946));	// 2607                  call    near ptr unk_18946 ;~ 0204:111E
cs=0x204;eip=0x001121; 	X(MOV(*(dw*)(raddr(ss,bp-2)), ax));	// 2608                  mov     [bp-2], ax ;~ 0204:1121
loc_11744:
	// 4477 
cs=0x204;eip=0x001124; 	T(CMP(*(dw*)(raddr(ss,bp+0x0A)), 0));	// 2611                  cmp     word ptr [bp+0Ah], 0 ;~ 0204:1124
cs=0x204;eip=0x001128; 	J(JC(loc_1176a));	// 2612                  jb      short loc_1176A ;~ 0204:1128
cs=0x204;eip=0x00112a; 	J(JA(loc_11753));	// 2613                  ja      short loc_11753 ;~ 0204:112A
cs=0x204;eip=0x00112c; 	T(CMP(*(dw*)(raddr(ss,bp+8)), 0x0FFFF));	// 2614                  cmp     word ptr [bp+8], 0FFFFh ;~ 0204:112C
cs=0x204;eip=0x001131; 	J(JBE(loc_1176a));	// 2615                  jbe     short loc_1176A ;~ 0204:1131
loc_11753:
	// 4478 
cs=0x204;eip=0x001133; 	X(PUSH(di));	// 2618                  push    di ;~ 0204:1133
cs=0x204;eip=0x001134; 	T(LES(di, *(dw*)(raddr(ss,bp+4))));	// 2619                  les     di, [bp+4] ;~ 0204:1134
cs=0x204;eip=0x001137; 	T(cx = 0x8000;);	// 2620                  mov     cx, 8000h ;~ 0204:1137
cs=0x204;eip=0x00113a; 	T(XOR(ax, ax));	// 2621                  xor     ax, ax ;~ 0204:113A
cs=0x204;eip=0x00113c; 	T(CLD);	// 2622                  cld ;~ 0204:113C
	// 2623                  rep stosw ;~ 0204:113D
cs=0x204;eip=0x00113d; 	X(	REP STOSW);	// 2623                  rep stosw ;~ 0204:113D
cs=0x204;eip=0x00113f; 	X(POP(di));	// 2624                  pop     di ;~ 0204:113F
cs=0x204;eip=0x001140; 	X(SUB(*(dw*)(raddr(ss,bp+8)), 0));	// 2625                  sub     word ptr [bp+8], 0 ;~ 0204:1140
cs=0x204;eip=0x001144; 	X(SBB(*(dw*)(raddr(ss,bp+0x0A)), 1));	// 2626                  sbb     word ptr [bp+0Ah], 1 ;~ 0204:1144
cs=0x204;eip=0x001148; 	J(JMP(loc_11787));	// 2627                  jmp     short loc_11787 ;~ 0204:1148
loc_1176a:
	// 4479 
cs=0x204;eip=0x00114a; 	X(PUSH(*(dw*)(raddr(ss,bp+8))));	// 2632                  push    word ptr [bp+8] ;~ 0204:114A
cs=0x204;eip=0x00114d; 	X(PUSH(0));	// 2633                  push    0 ;~ 0204:114D
cs=0x204;eip=0x00114f; 	X(PUSH(*(dw*)(raddr(ss,bp+6))));	// 2634                  push    word ptr [bp+6] ;~ 0204:114F
cs=0x204;eip=0x001152; 	X(PUSH(*(dw*)(raddr(ss,bp+4))));	// 2635                  push    word ptr [bp+4] ;~ 0204:1152
cs=0x204;eip=0x001155; 	T(NOP);	// 2636                  nop ;~ 0204:1155
cs=0x204;eip=0x001156; 	X(PUSH(cs));	// 2637                  push    cs ;~ 0204:1156
cs=0x204;eip=0x001157; 	J(CALL(__dispatch_call,unk_1b969));	// 2638                  call    near ptr unk_1B969 ;~ 0204:1157
cs=0x204;eip=0x00115a; 	T(ADD(sp, 8));	// 2639                  add     sp, 8 ;~ 0204:115A
cs=0x204;eip=0x00115d; 	X(MOV(*(dw*)(raddr(ss,bp+0x0A)), 0));	// 2640                  mov     word ptr [bp+0Ah], 0 ;~ 0204:115D
cs=0x204;eip=0x001162; 	X(MOV(*(dw*)(raddr(ss,bp+8)), 0));	// 2641                  mov     word ptr [bp+8], 0 ;~ 0204:1162
loc_11787:
	// 4480 
cs=0x204;eip=0x001167; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 2644                  mov     ax, [bp+8] ;~ 0204:1167
cs=0x204;eip=0x00116a; 	T(OR(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 2645                  or      ax, [bp+0Ah] ;~ 0204:116A
cs=0x204;eip=0x00116d; 	J(JZ(loc_1179d));	// 2646                  jz      short loc_1179D ;~ 0204:116D
cs=0x204;eip=0x00116f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 2647                  mov     ax, [bp+6] ;~ 0204:116F
cs=0x204;eip=0x001172; 	T(ADD(ax, *(dw*)(raddr(ss,bp-2))));	// 2648                  add     ax, [bp-2] ;~ 0204:1172
cs=0x204;eip=0x001175; 	X(MOV(*(dw*)(raddr(ss,bp+6)), ax));	// 2649                  mov     [bp+6], ax ;~ 0204:1175
cs=0x204;eip=0x001178; 	X(MOV(*(dw*)(raddr(ss,bp+4)), 0));	// 2650                  mov     word ptr [bp+4], 0 ;~ 0204:1178
loc_1179d:
	// 4481 
cs=0x204;eip=0x00117d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 2653                  mov     ax, [bp+8] ;~ 0204:117D
cs=0x204;eip=0x001180; 	T(OR(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 2654                  or      ax, [bp+0Ah] ;~ 0204:1180
cs=0x204;eip=0x001183; 	J(JNZ(loc_11744));	// 2655                  jnz     short loc_11744 ;~ 0204:1183
cs=0x204;eip=0x001185; 	X(POP(di));	// 2656                  pop     di ;~ 0204:1185
cs=0x204;eip=0x001186; 	T(LEAVE);	// 2657                  leave ;~ 0204:1186
cs=0x204;eip=0x001187; 	J(RETN(0));	// 2658                  retn ;~ 0204:1187
ret_204_1188:
	// 4482 
cs=0x204;eip=0x001188; 	X(PUSH(bp));	// 2660                  push    bp ;~ 0204:1188
cs=0x204;eip=0x001189; 	T(bp = sp;);	// 2661                  mov     bp, sp ;~ 0204:1189
cs=0x204;eip=0x00118b; 	X(PUSH(si));	// 2662                  push    si ;~ 0204:118B
cs=0x204;eip=0x00118c; 	X(PUSH(di));	// 2663                  push    di ;~ 0204:118C
cs=0x204;eip=0x00118d; 	T(NOP);	// 2664                  nop ;~ 0204:118D
cs=0x204;eip=0x00118e; 	X(PUSH(cs));	// 2665                  push    cs ;~ 0204:118E
cs=0x204;eip=0x00118f; 	J(CALL(__dispatch_call,unk_18946));	// 2666                  call    near ptr unk_18946 ;~ 0204:118F
cs=0x204;eip=0x001192; 	T(dx = ax;);	// 2667                  mov     dx, ax ;~ 0204:1192
loc_117b4:
	// 4483 
cs=0x204;eip=0x001194; 	T(CMP(*(dw*)(raddr(ss,bp+0x0E)), 0));	// 2670                  cmp     word ptr [bp+0Eh], 0 ;~ 0204:1194
cs=0x204;eip=0x001198; 	J(JC(loc_117df));	// 2671                  jb      short loc_117DF ;~ 0204:1198
cs=0x204;eip=0x00119a; 	J(JA(loc_117c3));	// 2672                  ja      short loc_117C3 ;~ 0204:119A
cs=0x204;eip=0x00119c; 	T(CMP(*(dw*)(raddr(ss,bp+0x0C)), 0x0FFFF));	// 2673                  cmp     word ptr [bp+0Ch], 0FFFFh ;~ 0204:119C
cs=0x204;eip=0x0011a1; 	J(JBE(loc_117df));	// 2674                  jbe     short loc_117DF ;~ 0204:11A1
loc_117c3:
	// 4484 
cs=0x204;eip=0x0011a3; 	X(PUSH(ds));	// 2677                  push    ds ;~ 0204:11A3
cs=0x204;eip=0x0011a4; 	X(PUSH(di));	// 2678                  push    di ;~ 0204:11A4
cs=0x204;eip=0x0011a5; 	X(PUSH(si));	// 2679                  push    si ;~ 0204:11A5
cs=0x204;eip=0x0011a6; 	T(cx = 0x8000;);	// 2680                  mov     cx, 8000h ;~ 0204:11A6
cs=0x204;eip=0x0011a9; 	T(LES(di, *(dw*)(raddr(ss,bp+4))));	// 2681                  les     di, [bp+4] ;~ 0204:11A9
cs=0x204;eip=0x0011ac; 	T(LDS(si, *(dw*)(raddr(ss,bp+8))));	// 2682                  lds     si, [bp+8] ;~ 0204:11AC
cs=0x204;eip=0x0011af; 	T(CLD);	// 2684                  cld ;~ 0204:11AF
	// 2685                  rep movsw ;~ 0204:11B0
cs=0x204;eip=0x0011b0; 	X(	REP MOVSW);	// 2685                  rep movsw ;~ 0204:11B0
cs=0x204;eip=0x0011b2; 	X(POP(si));	// 2686                  pop     si ;~ 0204:11B2
cs=0x204;eip=0x0011b3; 	X(POP(di));	// 2687                  pop     di ;~ 0204:11B3
cs=0x204;eip=0x0011b4; 	X(POP(ds));	// 2688                  pop     ds ;~ 0204:11B4
cs=0x204;eip=0x0011b5; 	X(SUB(*(dw*)(raddr(ss,bp+0x0C)), 0));	// 2689                  sub     word ptr [bp+0Ch], 0 ;~ 0204:11B5
cs=0x204;eip=0x0011b9; 	X(SBB(*(dw*)(raddr(ss,bp+0x0E)), 1));	// 2690                  sbb     word ptr [bp+0Eh], 1 ;~ 0204:11B9
cs=0x204;eip=0x0011bd; 	J(JMP(loc_117f8));	// 2691                  jmp     short loc_117F8 ;~ 0204:11BD
loc_117df:
	// 4485 
cs=0x204;eip=0x0011bf; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0C))));	// 2696                  push    word ptr [bp+0Ch] ;~ 0204:11BF
cs=0x204;eip=0x0011c2; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0A))));	// 2697                  push    word ptr [bp+0Ah] ;~ 0204:11C2
cs=0x204;eip=0x0011c5; 	X(PUSH(*(dw*)(raddr(ss,bp+8))));	// 2698                  push    word ptr [bp+8] ;~ 0204:11C5
cs=0x204;eip=0x0011c8; 	X(PUSH(*(dw*)(raddr(ss,bp+6))));	// 2699                  push    word ptr [bp+6] ;~ 0204:11C8
cs=0x204;eip=0x0011cb; 	X(PUSH(*(dw*)(raddr(ss,bp+4))));	// 2700                  push    word ptr [bp+4] ;~ 0204:11CB
cs=0x204;eip=0x0011ce; 	T(NOP);	// 2701                  nop ;~ 0204:11CE
cs=0x204;eip=0x0011cf; 	X(PUSH(cs));	// 2702                  push    cs ;~ 0204:11CF
cs=0x204;eip=0x0011d0; 	J(CALL(__dispatch_call,unk_1b921));	// 2703                  call    near ptr unk_1B921 ;~ 0204:11D0
cs=0x204;eip=0x0011d3; 	T(ADD(sp, 0x0A));	// 2704                  add     sp, 0Ah ;~ 0204:11D3
cs=0x204;eip=0x0011d6; 	J(JMP(loc_11814));	// 2705                  jmp     short loc_11814 ;~ 0204:11D6
loc_117f8:
	// 4486 
cs=0x204;eip=0x0011d8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 2709                  mov     ax, [bp+6] ;~ 0204:11D8
cs=0x204;eip=0x0011db; 	T(ADD(ax, dx));	// 2710                  add     ax, dx ;~ 0204:11DB
cs=0x204;eip=0x0011dd; 	X(MOV(*(dw*)(raddr(ss,bp+6)), ax));	// 2711                  mov     [bp+6], ax ;~ 0204:11DD
cs=0x204;eip=0x0011e0; 	X(MOV(*(dw*)(raddr(ss,bp+4)), 0));	// 2712                  mov     word ptr [bp+4], 0 ;~ 0204:11E0
cs=0x204;eip=0x0011e5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 2713                  mov     ax, [bp+0Ah] ;~ 0204:11E5
cs=0x204;eip=0x0011e8; 	T(ADD(ax, dx));	// 2714                  add     ax, dx ;~ 0204:11E8
cs=0x204;eip=0x0011ea; 	X(MOV(*(dw*)(raddr(ss,bp+0x0A)), ax));	// 2715                  mov     [bp+0Ah], ax ;~ 0204:11EA
cs=0x204;eip=0x0011ed; 	X(MOV(*(dw*)(raddr(ss,bp+8)), 0));	// 2716                  mov     word ptr [bp+8], 0 ;~ 0204:11ED
cs=0x204;eip=0x0011f2; 	J(JMP(loc_117b4));	// 2717                  jmp     short loc_117B4 ;~ 0204:11F2
loc_11814:
	// 4487 
cs=0x204;eip=0x0011f4; 	X(POP(di));	// 2721                  pop     di ;~ 0204:11F4
cs=0x204;eip=0x0011f5; 	X(POP(si));	// 2722                  pop     si ;~ 0204:11F5
cs=0x204;eip=0x0011f6; 	X(POP(bp));	// 2723                  pop     bp ;~ 0204:11F6
cs=0x204;eip=0x0011f7; 	J(RETN(0));	// 2724                  retn ;~ 0204:11F7
ret_204_11f8:
	// 4488 
cs=0x204;eip=0x0011f8; 	T(ax = 0x1CE4;);	// 2726                  mov     ax, 1CE4h ;~ 0204:11F8
cs=0x204;eip=0x0011fb; 	T(INC(bp));	// 2727                  inc     bp ;~ 0204:11FB
cs=0x204;eip=0x0011fc; 	X(PUSH(bp));	// 2728                  push    bp ;~ 0204:11FC
cs=0x204;eip=0x0011fd; 	T(bp = sp;);	// 2729                  mov     bp, sp ;~ 0204:11FD
cs=0x204;eip=0x0011ff; 	X(PUSH(ds));	// 2730                  push    ds ;~ 0204:11FF
cs=0x204;eip=0x001200; 	T(ds = ax;);	// 2731                  mov     ds, ax ;~ 0204:1200
cs=0x204;eip=0x001202; 	T(SUB(sp, 6));	// 2733                  sub     sp, 6 ;~ 0204:1202
cs=0x204;eip=0x001205; 	X(PUSH(si));	// 2734                  push    si ;~ 0204:1205
cs=0x204;eip=0x001206; 	T(MOV(si, *(dw*)(raddr(ss,bp+0x0A))));	// 2735                  mov     si, [bp+0Ah] ;~ 0204:1206
cs=0x204;eip=0x001209; 	X(PUSH(si));	// 2736                  push    si ;~ 0204:1209
cs=0x204;eip=0x00120a; 	J(CALL(sub_116d5,0));	// 2737                  call    sub_116D5 ;~ 0204:120A
cs=0x204;eip=0x00120d; 	X(POP(cx));	// 2738                  pop     cx ;~ 0204:120D
cs=0x204;eip=0x00120e; 	X(POP(es));	// 2739                  pop     es ;~ 0204:120E
loc_118b3:
	// 4489 
cs=0x204;eip=0x001293; 	T(MOV(ax, *(dw*)(raddr(ss,bp-4))));	// 2876                  mov     ax, [bp-4] ;~ 0204:1293
cs=0x204;eip=0x001296; 	J(JMP(loc_118fa));	// 2877                  jmp     short loc_118FA ;~ 0204:1296
ret_204_12b8:
	// 4490 
cs=0x204;eip=0x0012b8; 	X(PUSH(*(dw*)(raddr(ss,bp+6))));	// 2912                  push    word ptr [bp+6] ;~ 0204:12B8
cs=0x204;eip=0x0012bb; 	X(PUSH(*(dw*)(raddr(ss,bp-4))));	// 2913                  push    word ptr [bp-4] ;~ 0204:12BB
cs=0x204;eip=0x0012be; 	X(PUSH(0));	// 2914                  push    0 ;~ 0204:12BE
cs=0x204;eip=0x0012c0; 	J(CALL(sub_1171d,0));	// 2915                  call    sub_1171D ;~ 0204:12C0
cs=0x204;eip=0x0012c3; 	T(ADD(sp, 6));	// 2916                  add     sp, 6 ;~ 0204:12C3
cs=0x204;eip=0x0012c6; 	X(PUSH(*(dw*)(raddr(ss,bp-4))));	// 2917                  push    word ptr [bp-4] ;~ 0204:12C6
cs=0x204;eip=0x0012c9; 	J(CALL(sub_11520,0));	// 2918                  call    sub_11520 ;~ 0204:12C9
cs=0x204;eip=0x0012cc; 	X(POP(cx));	// 2919                  pop     cx ;~ 0204:12CC
cs=0x204;eip=0x0012cd; 	T(MOV(es, *(dw*)(raddr(ss,bp-4))));	// 2920                  mov     es, word ptr [bp-4] ;~ 0204:12CD
cs=0x204;eip=0x0012d0; 	X(MOV(*(raddr(es,0)), 0));	// 2921                  mov     byte ptr es:0, 0 ;~ 0204:12D0
cs=0x204;eip=0x0012d6; 	J(JMP(loc_118b3));	// 2922                  jmp     short loc_118B3 ;~ 0204:12D6
ret_204_12d8:
	// 4491 
cs=0x204;eip=0x0012d8; 	T(XOR(ax, ax));	// 2924                  xor     ax, ax ;~ 0204:12D8
loc_118fa:
	// 4492 
cs=0x204;eip=0x0012da; 	X(POP(si));	// 2927                  pop     si ;~ 0204:12DA
cs=0x204;eip=0x0012db; 	T(sp = bp-2);	// 2928                  lea     sp, [bp-2] ;~ 0204:12DB
cs=0x204;eip=0x0012de; 	X(POP(ds));	// 2929                  pop     ds ;~ 0204:12DE
cs=0x204;eip=0x0012df; 	X(POP(bp));	// 2931                  pop     bp ;~ 0204:12DF
cs=0x204;eip=0x0012e0; 	T(DEC(bp));	// 2932                  dec     bp ;~ 0204:12E0
cs=0x204;eip=0x0012e1; 	J(RETF(6));	// 2933                  retf    6 ;~ 0204:12E1
ret_204_12e4:
	// 4493 
cs=0x204;eip=0x0012e4; 	T(ax = 0x1CE4;);	// 2935                  mov     ax, 1CE4h ;~ 0204:12E4
cs=0x204;eip=0x0012e7; 	T(INC(bp));	// 2936                  inc     bp ;~ 0204:12E7
cs=0x204;eip=0x0012e8; 	X(PUSH(bp));	// 2937                  push    bp ;~ 0204:12E8
cs=0x204;eip=0x0012e9; 	T(bp = sp;);	// 2938                  mov     bp, sp ;~ 0204:12E9
cs=0x204;eip=0x0012eb; 	X(PUSH(ds));	// 2939                  push    ds ;~ 0204:12EB
cs=0x204;eip=0x0012ec; 	T(ds = ax;);	// 2940                  mov     ds, ax ;~ 0204:12EC
cs=0x204;eip=0x0012ee; 	T(SUB(sp, 2));	// 2942                  sub     sp, 2 ;~ 0204:12EE
cs=0x204;eip=0x0012f1; 	X(PUSH(si));	// 2943                  push    si ;~ 0204:12F1
cs=0x204;eip=0x0012f2; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 2944                  mov     si, [bp+6] ;~ 0204:12F2
cs=0x204;eip=0x0012f5; 	X(PUSH(si));	// 2945                  push    si ;~ 0204:12F5
cs=0x204;eip=0x0012f6; 	X(PUSH(ss));	// 2946                  push    ss ;~ 0204:12F6
cs=0x204;eip=0x0012f7; 	T(ax = bp-4);	// 2947                  lea     ax, [bp-4] ;~ 0204:12F7
cs=0x204;eip=0x0012fa; 	X(PUSH(ax));	// 2948                  push    ax ;~ 0204:12FA
cs=0x204;eip=0x0012fb; 	T(NOP);	// 2949                  nop ;~ 0204:12FB
cs=0x204;eip=0x0012fc; 	X(PUSH(cs));	// 2950                  push    cs ;~ 0204:12FC
cs=0x204;eip=0x0012fd; 	J(CALL(__dispatch_call,unk_1aecc));	// 2951                  call    near ptr unk_1AECC ;~ 0204:12FD
cs=0x204;eip=0x001300; 	T(OR(ax, ax));	// 2952                  or      ax, ax ;~ 0204:1300
cs=0x204;eip=0x001302; 	J(JNZ(loc_1195b));	// 2953                  jnz     short loc_1195B ;~ 0204:1302
cs=0x204;eip=0x001304; 	X(PUSH(si));	// 2954                  push    si ;~ 0204:1304
cs=0x204;eip=0x001305; 	J(CALL(sub_115ee,0));	// 2955                  call    sub_115EE ;~ 0204:1305
cs=0x204;eip=0x001308; 	X(POP(cx));	// 2956                  pop     cx ;~ 0204:1308
cs=0x204;eip=0x001309; 	T(OR(ax, ax));	// 2957                  or      ax, ax ;~ 0204:1309
cs=0x204;eip=0x00130b; 	J(JNZ(loc_1195b));	// 2958                  jnz     short loc_1195B ;~ 0204:130B
cs=0x204;eip=0x00130d; 	T(MOV(ax, *(dw*)(raddr(ss,bp-4))));	// 2959                  mov     ax, [bp-4] ;~ 0204:130D
cs=0x204;eip=0x001310; 	T(AND(ax, 0x3000));	// 2960                  and     ax, 3000h ;~ 0204:1310
cs=0x204;eip=0x001313; 	T(CMP(ax, 0x3000));	// 2961                  cmp     ax, 3000h ;~ 0204:1313
cs=0x204;eip=0x001316; 	J(JZ(loc_1194d));	// 2962                  jz      short loc_1194D ;~ 0204:1316
cs=0x204;eip=0x001318; 	T(TEST(*(dw*)(raddr(ss,bp-4)), 0x3000));	// 2963                  test    word ptr [bp-4], 3000h ;~ 0204:1318
cs=0x204;eip=0x00131d; 	J(JZ(loc_1194d));	// 2964                  jz      short loc_1194D ;~ 0204:131D
cs=0x204;eip=0x00131f; 	T(TEST(*(dw*)(raddr(ss,bp-4)), 7));	// 2965                  test    word ptr [bp-4], 7 ;~ 0204:131F
cs=0x204;eip=0x001324; 	J(JNZ(loc_1194d));	// 2966                  jnz     short loc_1194D ;~ 0204:1324
cs=0x204;eip=0x001326; 	X(PUSH(si));	// 2967                  push    si ;~ 0204:1326
cs=0x204;eip=0x001327; 	X(PUSH(2));	// 2968                  push    2 ;~ 0204:1327
cs=0x204;eip=0x001329; 	X(PUSH(cs));	// 2969                  push    cs ;~ 0204:1329
cs=0x204;eip=0x00132a; 	J(CALL(sub_1167f,0));	// 2970                  call    near ptr sub_1167F ;~ 0204:132A
loc_1194d:
	// 4494 
cs=0x204;eip=0x00132d; 	X(PUSH(si));	// 2974                  push    si ;~ 0204:132D
cs=0x204;eip=0x00132e; 	T(NOP);	// 2975                  nop ;~ 0204:132E
cs=0x204;eip=0x00132f; 	X(PUSH(cs));	// 2976                  push    cs ;~ 0204:132F
cs=0x204;eip=0x001330; 	J(CALL(__dispatch_call,unk_1a4e7));	// 2977                  call    near ptr unk_1A4E7 ;~ 0204:1330
cs=0x204;eip=0x001333; 	T(OR(ax, ax));	// 2978                  or      ax, ax ;~ 0204:1333
cs=0x204;eip=0x001335; 	J(JNZ(loc_1195b));	// 2979                  jnz     short loc_1195B ;~ 0204:1335
cs=0x204;eip=0x001337; 	T(XOR(ax, ax));	// 2980                  xor     ax, ax ;~ 0204:1337
cs=0x204;eip=0x001339; 	J(JMP(loc_1195d));	// 2981                  jmp     short loc_1195D ;~ 0204:1339
loc_1195b:
	// 4495 
cs=0x204;eip=0x00133b; 	T(ax = si;);	// 2986                  mov     ax, si ;~ 0204:133B
loc_1195d:
	// 4496 
cs=0x204;eip=0x00133d; 	X(POP(si));	// 2989                  pop     si ;~ 0204:133D
cs=0x204;eip=0x00133e; 	X(POP(cx));	// 2990                  pop     cx ;~ 0204:133E
cs=0x204;eip=0x00133f; 	X(POP(ds));	// 2991                  pop     ds ;~ 0204:133F
cs=0x204;eip=0x001340; 	X(POP(bp));	// 2993                  pop     bp ;~ 0204:1340
cs=0x204;eip=0x001341; 	T(DEC(bp));	// 2994                  dec     bp ;~ 0204:1341
cs=0x204;eip=0x001342; 	J(RETF(2));	// 2995                  retf    2 ;~ 0204:1342
ret_204_1345:
	// 4497 
cs=0x204;eip=0x001345; 	T(ax = 0x1CE4;);	// 2997                  mov     ax, 1CE4h ;~ 0204:1345
cs=0x204;eip=0x001348; 	T(INC(bp));	// 2998                  inc     bp ;~ 0204:1348
cs=0x204;eip=0x001349; 	X(PUSH(bp));	// 2999                  push    bp ;~ 0204:1349
cs=0x204;eip=0x00134a; 	T(bp = sp;);	// 3000                  mov     bp, sp ;~ 0204:134A
cs=0x204;eip=0x00134c; 	X(PUSH(ds));	// 3001                  push    ds ;~ 0204:134C
cs=0x204;eip=0x00134d; 	T(ds = ax;);	// 3002                  mov     ds, ax ;~ 0204:134D
cs=0x204;eip=0x00134f; 	T(SUB(sp, 2));	// 3004                  sub     sp, 2 ;~ 0204:134F
cs=0x204;eip=0x001352; 	X(PUSH(si));	// 3005                  push    si ;~ 0204:1352
cs=0x204;eip=0x001353; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 3006                  mov     si, [bp+6] ;~ 0204:1353
cs=0x204;eip=0x001356; 	X(PUSH(si));	// 3007                  push    si ;~ 0204:1356
cs=0x204;eip=0x001357; 	X(PUSH(ss));	// 3008                  push    ss ;~ 0204:1357
cs=0x204;eip=0x001358; 	T(ax = bp-4);	// 3009                  lea     ax, [bp-4] ;~ 0204:1358
cs=0x204;eip=0x00135b; 	X(PUSH(ax));	// 3010                  push    ax ;~ 0204:135B
cs=0x204;eip=0x00135c; 	T(NOP);	// 3011                  nop ;~ 0204:135C
cs=0x204;eip=0x00135d; 	X(PUSH(cs));	// 3012                  push    cs ;~ 0204:135D
cs=0x204;eip=0x00135e; 	J(CALL(__dispatch_call,unk_1aecc));	// 3013                  call    near ptr unk_1AECC ;~ 0204:135E
cs=0x204;eip=0x001361; 	T(OR(ax, ax));	// 3014                  or      ax, ax ;~ 0204:1361
cs=0x204;eip=0x001363; 	J(JZ(loc_11989));	// 3015                  jz      short loc_11989 ;~ 0204:1363
loc_11985:
	// 4498 
cs=0x204;eip=0x001365; 	T(XOR(dx, dx));	// 3018                  xor     dx, dx ;~ 0204:1365
cs=0x204;eip=0x001367; 	J(JMP(loc_119c3));	// 3019                  jmp     short loc_119C3 ;~ 0204:1367
loc_11989:
	// 4499 
cs=0x204;eip=0x001369; 	T(TEST(*(dw*)(raddr(ss,bp-4)), 0x700));	// 3023                  test    word ptr [bp-4], 700h ;~ 0204:1369
cs=0x204;eip=0x00136e; 	J(JNZ(loc_119bc));	// 3024                  jnz     short loc_119BC ;~ 0204:136E
cs=0x204;eip=0x001370; 	X(PUSH(si));	// 3025                  push    si ;~ 0204:1370
cs=0x204;eip=0x001371; 	J(CALL(sub_11520,0));	// 3026                  call    sub_11520 ;~ 0204:1371
cs=0x204;eip=0x001374; 	X(POP(cx));	// 3027                  pop     cx ;~ 0204:1374
cs=0x204;eip=0x001375; 	T(OR(ax, ax));	// 3028                  or      ax, ax ;~ 0204:1375
cs=0x204;eip=0x001377; 	J(JZ(loc_119a1));	// 3029                  jz      short loc_119A1 ;~ 0204:1377
cs=0x204;eip=0x001379; 	T(es = si;);	// 3030                  mov     es, si ;~ 0204:1379
cs=0x204;eip=0x00137b; 	X(MOV(*(raddr(es,0)), 0));	// 3031                  mov     byte ptr es:0, 0 ;~ 0204:137B
loc_119a1:
	// 4500 
cs=0x204;eip=0x001381; 	X(PUSH(si));	// 3034                  push    si ;~ 0204:1381
cs=0x204;eip=0x001382; 	T(MOV(ax, *(dw*)(raddr(ss,bp-4))));	// 3035                  mov     ax, [bp-4] ;~ 0204:1382
cs=0x204;eip=0x001385; 	T(AND(ax, 0x0FFF8));	// 3036                  and     ax, 0FFF8h ;~ 0204:1385
cs=0x204;eip=0x001388; 	T(OR(ax, 2));	// 3037                  or      ax, 2 ;~ 0204:1388
cs=0x204;eip=0x00138b; 	X(PUSH(ax));	// 3038                  push    ax ;~ 0204:138B
cs=0x204;eip=0x00138c; 	T(NOP);	// 3039                  nop ;~ 0204:138C
cs=0x204;eip=0x00138d; 	X(PUSH(cs));	// 3040                  push    cs ;~ 0204:138D
cs=0x204;eip=0x00138e; 	J(CALL(__dispatch_call,unk_1a81b));	// 3041                  call    near ptr unk_1A81B ;~ 0204:138E
cs=0x204;eip=0x001391; 	T(OR(ax, ax));	// 3042                  or      ax, ax ;~ 0204:1391
cs=0x204;eip=0x001393; 	J(JZ(loc_119bc));	// 3043                  jz      short loc_119BC ;~ 0204:1393
cs=0x204;eip=0x001395; 	X(PUSH(si));	// 3044                  push    si ;~ 0204:1395
cs=0x204;eip=0x001396; 	J(CALL(sub_1157f,0));	// 3045                  call    sub_1157F ;~ 0204:1396
cs=0x204;eip=0x001399; 	X(POP(cx));	// 3046                  pop     cx ;~ 0204:1399
cs=0x204;eip=0x00139a; 	J(JMP(loc_11985));	// 3047                  jmp     short loc_11985 ;~ 0204:139A
loc_119bc:
	// 4501 
cs=0x204;eip=0x00139c; 	X(PUSH(si));	// 3052                  push    si ;~ 0204:139C
cs=0x204;eip=0x00139d; 	J(CALL(sub_11606,0));	// 3053                  call    sub_11606 ;~ 0204:139D
cs=0x204;eip=0x0013a0; 	X(POP(cx));	// 3054                  pop     cx ;~ 0204:13A0
cs=0x204;eip=0x0013a1; 	T(dx = si;);	// 3055                  mov     dx, si ;~ 0204:13A1
loc_119c3:
	// 4502 
cs=0x204;eip=0x0013a3; 	T(XOR(ax, ax));	// 3058                  xor     ax, ax ;~ 0204:13A3
cs=0x204;eip=0x0013a5; 	X(POP(si));	// 3059                  pop     si ;~ 0204:13A5
cs=0x204;eip=0x0013a6; 	X(POP(cx));	// 3060                  pop     cx ;~ 0204:13A6
cs=0x204;eip=0x0013a7; 	X(POP(ds));	// 3061                  pop     ds ;~ 0204:13A7
cs=0x204;eip=0x0013a8; 	X(POP(bp));	// 3063                  pop     bp ;~ 0204:13A8
cs=0x204;eip=0x0013a9; 	T(DEC(bp));	// 3064                  dec     bp ;~ 0204:13A9
cs=0x204;eip=0x0013aa; 	J(RETF(2));	// 3065                  retf    2 ;~ 0204:13AA
ret_204_13ad:
	// 4503 
cs=0x204;eip=0x0013ad; 	T(ax = 0x1CE4;);	// 3067                  mov     ax, 1CE4h ;~ 0204:13AD
cs=0x204;eip=0x0013b0; 	T(INC(bp));	// 3068                  inc     bp ;~ 0204:13B0
cs=0x204;eip=0x0013b1; 	X(PUSH(bp));	// 3069                  push    bp ;~ 0204:13B1
cs=0x204;eip=0x0013b2; 	T(bp = sp;);	// 3070                  mov     bp, sp ;~ 0204:13B2
cs=0x204;eip=0x0013b4; 	X(PUSH(ds));	// 3071                  push    ds ;~ 0204:13B4
cs=0x204;eip=0x0013b5; 	T(ds = ax;);	// 3072                  mov     ds, ax ;~ 0204:13B5
cs=0x204;eip=0x0013b7; 	X(PUSH(*(dw*)(raddr(ss,bp+6))));	// 3074                  push    word ptr [bp+6] ;~ 0204:13B7
cs=0x204;eip=0x0013ba; 	T(NOP);	// 3075                  nop ;~ 0204:13BA
cs=0x204;eip=0x0013bb; 	X(PUSH(cs));	// 3076                  push    cs ;~ 0204:13BB
cs=0x204;eip=0x0013bc; 	J(CALL(sub_119e5,0));	// 3077                  call    near ptr sub_119E5 ;~ 0204:13BC
cs=0x204;eip=0x0013bf; 	X(POP(ds));	// 3078                  pop     ds ;~ 0204:13BF
cs=0x204;eip=0x0013c0; 	X(POP(bp));	// 3080                  pop     bp ;~ 0204:13C0
cs=0x204;eip=0x0013c1; 	T(DEC(bp));	// 3081                  dec     bp ;~ 0204:13C1
cs=0x204;eip=0x0013c2; 	J(RETF(2));	// 3082                  retf    2 ;~ 0204:13C2

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_11744: 	goto loc_11744;
        case m2c::kloc_11753: 	goto loc_11753;
        case m2c::kloc_1176a: 	goto loc_1176a;
        case m2c::kloc_11787: 	goto loc_11787;
        case m2c::kloc_1179d: 	goto loc_1179d;
        case m2c::kloc_117b4: 	goto loc_117b4;
        case m2c::kloc_117c3: 	goto loc_117c3;
        case m2c::kloc_117df: 	goto loc_117df;
        case m2c::kloc_117f8: 	goto loc_117f8;
        case m2c::kloc_11814: 	goto loc_11814;
        case m2c::kloc_118b3: 	goto loc_118b3;
        case m2c::kloc_118fa: 	goto loc_118fa;
        case m2c::kloc_1194d: 	goto loc_1194d;
        case m2c::kloc_1195b: 	goto loc_1195b;
        case m2c::kloc_1195d: 	goto loc_1195d;
        case m2c::kloc_11985: 	goto loc_11985;
        case m2c::kloc_11989: 	goto loc_11989;
        case m2c::kloc_119a1: 	goto loc_119a1;
        case m2c::kloc_119bc: 	goto loc_119bc;
        case m2c::kloc_119c3: 	goto loc_119c3;
        case m2c::kret_204_1188: 	goto ret_204_1188;
        case m2c::kret_204_11f8: 	goto ret_204_11f8;
        case m2c::kret_204_12b8: 	goto ret_204_12b8;
        case m2c::kret_204_12d8: 	goto ret_204_12d8;
        case m2c::kret_204_12e4: 	goto ret_204_12e4;
        case m2c::kret_204_1345: 	goto ret_204_1345;
        case m2c::kret_204_13ad: 	goto ret_204_13ad;
        case m2c::kseg001_1115_proc: 	goto seg001_1115_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_119e5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_119e5:
    _begin:
#undef arg_0
#define arg_0 6
	// 3090 arg_0           = word ptr  6 ;~ 0204:13C5
cs=0x204;eip=0x0013c5; 	T(ax = 0x1CE4;);	// 3092                  mov     ax, 1CE4h ;~ 0204:13C5
cs=0x204;eip=0x0013c8; 	T(INC(bp));	// 3093                  inc     bp ;~ 0204:13C8
cs=0x204;eip=0x0013c9; 	X(PUSH(bp));	// 3094                  push    bp ;~ 0204:13C9
cs=0x204;eip=0x0013ca; 	T(bp = sp;);	// 3095                  mov     bp, sp ;~ 0204:13CA
cs=0x204;eip=0x0013cc; 	X(PUSH(ds));	// 3096                  push    ds ;~ 0204:13CC
cs=0x204;eip=0x0013cd; 	T(ds = ax;);	// 3097                  mov     ds, ax ;~ 0204:13CD
cs=0x204;eip=0x0013cf; 	X(PUSH(si));	// 3099                  push    si ;~ 0204:13CF
cs=0x204;eip=0x0013d0; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 3100                  mov     si, [bp+arg_0] ;~ 0204:13D0
cs=0x204;eip=0x0013d3; 	X(PUSH(si));	// 3101                  push    si ;~ 0204:13D3
cs=0x204;eip=0x0013d4; 	J(CALL(sub_1157f,0));	// 3102                  call    sub_1157F ;~ 0204:13D4
cs=0x204;eip=0x0013d7; 	X(POP(cx));	// 3103                  pop     cx ;~ 0204:13D7
cs=0x204;eip=0x0013d8; 	X(PUSH(si));	// 3104                  push    si ;~ 0204:13D8
cs=0x204;eip=0x0013d9; 	J(CALL(sub_1163f,0));	// 3105                  call    sub_1163F ;~ 0204:13D9
cs=0x204;eip=0x0013dc; 	X(POP(cx));	// 3106                  pop     cx ;~ 0204:13DC
cs=0x204;eip=0x0013dd; 	X(POP(si));	// 3107                  pop     si ;~ 0204:13DD
cs=0x204;eip=0x0013de; 	X(POP(ds));	// 3108                  pop     ds ;~ 0204:13DE
cs=0x204;eip=0x0013df; 	X(POP(bp));	// 3110                  pop     bp ;~ 0204:13DF
cs=0x204;eip=0x0013e0; 	T(DEC(bp));	// 3111                  dec     bp ;~ 0204:13E0
cs=0x204;eip=0x0013e1; 	J(RETF(2));	// 3112                  retf    2 ;~ 0204:13E1

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_119e5: 	goto sub_119e5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

