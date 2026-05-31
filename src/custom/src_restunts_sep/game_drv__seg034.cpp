/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool file_load_shape2d_fatal(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    file_load_shape2d_fatal:
    _begin:
#undef arg_0
#define arg_0 6
	// 89205 arg_0           = word ptr  6 ;~ 2C3F:0006
cs=0x2c3f;eip=0x000006; 	X(PUSH(bp));	// 89207 push    bp ;~ 2C3F:0006
cs=0x2c3f;eip=0x000007; 	T(MOV(bp, sp));	// 89208 mov     bp, sp ;~ 2C3F:0007
cs=0x2c3f;eip=0x000009; 	T(MOV(ax, 1));	// 89209 mov     ax, 1 ;~ 2C3F:0009
cs=0x2c3f;eip=0x00000c; 	X(PUSH(ax));	// 89210 push    ax ;~ 2C3F:000C
cs=0x2c3f;eip=0x00000d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 89211 push    [bp+arg_0] ;~ 2C3F:000D
cs=0x2c3f;eip=0x000010; 	X(PUSH(cs));	// 89212 push    cs ;~ 2C3F:0010
cs=0x2c3f;eip=0x000011; 	J(CALL(file_load_shape2d,0));	// 89213 call    near ptr file_load_shape2d ;~ 2C3F:0011
cs=0x2c3f;eip=0x000014; 	T(ADD(sp, 4));	// 89214 add     sp, 4 ;~ 2C3F:0014
cs=0x2c3f;eip=0x000017; 	X(POP(bp));	// 89215 pop     bp ;~ 2C3F:0017
cs=0x2c3f;eip=0x000018; 	J(RETF(0));	// 89216 retf ;~ 2C3F:0018

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kfile_load_shape2d_fatal: 	goto file_load_shape2d_fatal;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool file_load_shape2d_nofatal(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    file_load_shape2d_nofatal:
    _begin:
#undef arg_0
#define arg_0 6
	// 89228 arg_0           = word ptr  6 ;~ 2C3F:001A
cs=0x2c3f;eip=0x00001a; 	X(PUSH(bp));	// 89230 push    bp ;~ 2C3F:001A
cs=0x2c3f;eip=0x00001b; 	T(MOV(bp, sp));	// 89231 mov     bp, sp ;~ 2C3F:001B
cs=0x2c3f;eip=0x00001d; 	T(SUB(ax, ax));	// 89232 sub     ax, ax ;~ 2C3F:001D
cs=0x2c3f;eip=0x00001f; 	X(PUSH(ax));	// 89233 push    ax ;~ 2C3F:001F
cs=0x2c3f;eip=0x000020; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 89234 push    [bp+arg_0] ;~ 2C3F:0020
cs=0x2c3f;eip=0x000023; 	X(PUSH(cs));	// 89235 push    cs ;~ 2C3F:0023
cs=0x2c3f;eip=0x000024; 	J(CALL(file_load_shape2d,0));	// 89236 call    near ptr file_load_shape2d ;~ 2C3F:0024
cs=0x2c3f;eip=0x000027; 	T(ADD(sp, 4));	// 89237 add     sp, 4 ;~ 2C3F:0027
cs=0x2c3f;eip=0x00002a; 	X(POP(bp));	// 89238 pop     bp ;~ 2C3F:002A
cs=0x2c3f;eip=0x00002b; 	J(RETF(0));	// 89239 retf ;~ 2C3F:002B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kfile_load_shape2d_nofatal: 	goto file_load_shape2d_nofatal;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool file_load_shape2d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    file_load_shape2d:
    _begin:
#undef var_80
#define var_80 -0x80
	// 89250 var_80          = byte ptr -80h ;~ 2C3F:002C
#undef var_7e
#define var_7e -0x7E
	// 89251 var_7E          = word ptr -7Eh ;~ 2C3F:002C
#undef var_7c
#define var_7c -0x7C
	// 89252 var_7C          = byte ptr -7Ch ;~ 2C3F:002C
#undef var_18
#define var_18 -0x18
	// 89253 var_18          = word ptr -18h ;~ 2C3F:002C
#undef var_16
#define var_16 -0x16
	// 89254 var_16          = word ptr -16h ;~ 2C3F:002C
#undef var_14
#define var_14 -0x14
	// 89255 var_14          = word ptr -14h ;~ 2C3F:002C
#undef var_12
#define var_12 -0x12
	// 89256 var_12          = word ptr -12h ;~ 2C3F:002C
#undef var_10
#define var_10 -0x10
	// 89257 var_10          = dword ptr -10h ;~ 2C3F:002C
#undef var_c
#define var_c -0x0C
	// 89258 var_C           = dword ptr -0Ch ;~ 2C3F:002C
#undef var_4
#define var_4 -4
	// 89259 var_4           = word ptr -4 ;~ 2C3F:002C
#undef var_2
#define var_2 -2
	// 89260 var_2           = word ptr -2 ;~ 2C3F:002C
#undef arg_0
#define arg_0 6
	// 89261 arg_0           = word ptr  6 ;~ 2C3F:002C
#undef arg_2
#define arg_2 8
	// 89262 arg_2           = word ptr  8 ;~ 2C3F:002C
cs=0x2c3f;eip=0x00002c; 	X(PUSH(bp));	// 89264 push    bp ;~ 2C3F:002C
cs=0x2c3f;eip=0x00002d; 	T(MOV(bp, sp));	// 89265 mov     bp, sp ;~ 2C3F:002D
cs=0x2c3f;eip=0x00002f; 	T(SUB(sp, 0x80));	// 89266 sub     sp, 80h ;~ 2C3F:002F
cs=0x2c3f;eip=0x000033; 	X(PUSH(si));	// 89267 push    si              ; char * ;~ 2C3F:0033
cs=0x2c3f;eip=0x000034; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 89268 push    [bp+arg_0] ;~ 2C3F:0034
cs=0x2c3f;eip=0x000037; 	T(ax = bp+var_7c);	// 89269 lea     ax, [bp+var_7C] ;~ 2C3F:0037
cs=0x2c3f;eip=0x00003a; 	X(PUSH(ax));	// 89270 push    ax              ; char * ;~ 2C3F:003A
cs=0x2c3f;eip=0x00003b; 	J(CALLF(_strcpy,0));	// 89271 call    _strcpy ;~ 2C3F:003B
cs=0x2c3f;eip=0x000040; 	T(ADD(sp, 4));	// 89272 add     sp, 4 ;~ 2C3F:0040
cs=0x2c3f;eip=0x000043; 	T(ax = bp+var_7c);	// 89273 lea     ax, [bp+var_7C] ;~ 2C3F:0043
cs=0x2c3f;eip=0x000046; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c))), ax));	// 89274 mov     word ptr [bp+var_C], ax ;~ 2C3F:0046
cs=0x2c3f;eip=0x000049; 	J(JMP(loc_3aa25));	// 89275 jmp     short loc_3AA25 ;~ 2C3F:0049
loc_3aa1c:
	// 9908 
cs=0x2c3f;eip=0x00004c; 	T(CMP(*(raddr(ss,bp+var_80)), 0x2E));	// 89280 cmp     [bp+var_80], 2Eh ; '.' ;~ 2C3F:004C
cs=0x2c3f;eip=0x000050; 	J(JZ(loc_3aa31));	// 89281 jz      short loc_3AA31 ;~ 2C3F:0050
cs=0x2c3f;eip=0x000052; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_c)))));	// 89282 inc     word ptr [bp+var_C] ;~ 2C3F:0052
loc_3aa25:
	// 9909 
cs=0x2c3f;eip=0x000055; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_c)))));	// 89285 mov     bx, word ptr [bp+var_C] ;~ 2C3F:0055
cs=0x2c3f;eip=0x000058; 	T(MOV(al, *(raddr(ds,bx))));	// 89286 mov     al, [bx] ;~ 2C3F:0058
cs=0x2c3f;eip=0x00005a; 	X(MOV(*(raddr(ss,bp+var_80)), al));	// 89287 mov     [bp+var_80], al ;~ 2C3F:005A
cs=0x2c3f;eip=0x00005d; 	T(OR(al, al));	// 89288 or      al, al ;~ 2C3F:005D
cs=0x2c3f;eip=0x00005f; 	J(JNZ(loc_3aa1c));	// 89289 jnz     short loc_3AA1C ;~ 2C3F:005F
loc_3aa31:
	// 9910 
cs=0x2c3f;eip=0x000061; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_c)))));	// 89292 mov     bx, word ptr [bp+var_C] ;~ 2C3F:0061
cs=0x2c3f;eip=0x000064; 	T(CMP(*(raddr(ds,bx)), 0));	// 89293 cmp     byte ptr [bx], 0 ;~ 2C3F:0064
cs=0x2c3f;eip=0x000067; 	J(JNZ(loc_3aa92));	// 89294 jnz     short loc_3AA92 ;~ 2C3F:0067
cs=0x2c3f;eip=0x000069; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), 0));	// 89295 mov     [bp+var_14], 0 ;~ 2C3F:0069
cs=0x2c3f;eip=0x00006e; 	J(JMP(loc_3aa53));	// 89296 jmp     short loc_3AA53 ;~ 2C3F:006E
loc_3aa40:
	// 9911 
cs=0x2c3f;eip=0x000070; 	T(ax = bp+var_7c);	// 89300 lea     ax, [bp+var_7C] ;~ 2C3F:0070
cs=0x2c3f;eip=0x000073; 	X(PUSH(ax));	// 89301 push    ax ;~ 2C3F:0073
cs=0x2c3f;eip=0x000074; 	J(CALLF(file_find,0));	// 89302 call    file_find ;~ 2C3F:0074
cs=0x2c3f;eip=0x000079; 	T(ADD(sp, 2));	// 89303 add     sp, 2 ;~ 2C3F:0079
cs=0x2c3f;eip=0x00007c; 	T(OR(ax, ax));	// 89304 or      ax, ax ;~ 2C3F:007C
cs=0x2c3f;eip=0x00007e; 	J(JNZ(_try_load_pvs));	// 89305 jnz     short _try_load_pvs ;~ 2C3F:007E
cs=0x2c3f;eip=0x000080; 	X(INC(*(dw*)(raddr(ss,bp+var_14))));	// 89306 inc     [bp+var_14] ;~ 2C3F:0080
loc_3aa53:
	// 9912 
cs=0x2c3f;eip=0x000083; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_14))));	// 89309 mov     bx, [bp+var_14] ;~ 2C3F:0083
cs=0x2c3f;eip=0x000086; 	T(SHL(bx, 1));	// 89310 shl     bx, 1 ;~ 2C3F:0086
cs=0x2c3f;eip=0x000088; 	T(MOV(si, *(dw*)(((db*)&shapeexts)+bx)));	// 89311 mov     si, shapeexts[bx] ;~ 2C3F:0088
cs=0x2c3f;eip=0x00008c; 	T(CMP(*(raddr(ds,si)), 0));	// 89312 cmp     byte ptr [si], 0 ;~ 2C3F:008C
cs=0x2c3f;eip=0x00008f; 	J(JZ(_try_load_pvs));	// 89313 jz      short _try_load_pvs ;~ 2C3F:008F
cs=0x2c3f;eip=0x000091; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_c)))));	// 89314 mov     ax, word ptr [bp+var_C] ;~ 2C3F:0091
cs=0x2c3f;eip=0x000094; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 89315 mov     [bp+var_12], ax ;~ 2C3F:0094
cs=0x2c3f;eip=0x000097; 	X(PUSH(si));	// 89316 push    si ;~ 2C3F:0097
cs=0x2c3f;eip=0x000098; 	X(PUSH(ax));	// 89317 push    ax              ; char * ;~ 2C3F:0098
cs=0x2c3f;eip=0x000099; 	J(CALLF(_strcpy,0));	// 89318 call    _strcpy ;~ 2C3F:0099
cs=0x2c3f;eip=0x00009e; 	T(ADD(sp, 4));	// 89319 add     sp, 4 ;~ 2C3F:009E
cs=0x2c3f;eip=0x0000a1; 	T(ax = bp+var_7c);	// 89320 lea     ax, [bp+var_7C] ;~ 2C3F:00A1
cs=0x2c3f;eip=0x0000a4; 	X(PUSH(ax));	// 89321 push    ax ;~ 2C3F:00A4
cs=0x2c3f;eip=0x0000a5; 	J(CALLF(mmgr_get_chunk_by_name,0));	// 89322 call    mmgr_get_chunk_by_name ;~ 2C3F:00A5
cs=0x2c3f;eip=0x0000aa; 	T(ADD(sp, 2));	// 89323 add     sp, 2 ;~ 2C3F:00AA
cs=0x2c3f;eip=0x0000ad; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 89324 mov     [bp+var_4], ax ;~ 2C3F:00AD
cs=0x2c3f;eip=0x0000b0; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 89325 mov     [bp+var_2], dx ;~ 2C3F:00B0
cs=0x2c3f;eip=0x0000b3; 	T(OR(dx, ax));	// 89326 or      dx, ax ;~ 2C3F:00B3
cs=0x2c3f;eip=0x0000b5; 	J(JZ(loc_3aa40));	// 89327 jz      short loc_3AA40 ;~ 2C3F:00B5
_end_load_2dshape:
	// 9913 
cs=0x2c3f;eip=0x0000b7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 89331 mov     ax, [bp+var_4] ;~ 2C3F:00B7
cs=0x2c3f;eip=0x0000ba; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 89332 mov     dx, [bp+var_2] ;~ 2C3F:00BA
cs=0x2c3f;eip=0x0000bd; 	X(POP(si));	// 89333 pop     si ;~ 2C3F:00BD
cs=0x2c3f;eip=0x0000be; 	T(MOV(sp, bp));	// 89334 mov     sp, bp ;~ 2C3F:00BE
cs=0x2c3f;eip=0x0000c0; 	X(POP(bp));	// 89335 pop     bp ;~ 2C3F:00C0
cs=0x2c3f;eip=0x0000c1; 	J(RETF(0));	// 89336 retf ;~ 2C3F:00C1
loc_3aa92:
	// 9914 
cs=0x2c3f;eip=0x0000c2; 	T(ax = bp+var_7c);	// 89340 lea     ax, [bp+var_7C] ;~ 2C3F:00C2
cs=0x2c3f;eip=0x0000c5; 	X(PUSH(ax));	// 89341 push    ax ;~ 2C3F:00C5
cs=0x2c3f;eip=0x0000c6; 	J(CALLF(mmgr_get_chunk_by_name,0));	// 89342 call    mmgr_get_chunk_by_name ;~ 2C3F:00C6
cs=0x2c3f;eip=0x0000cb; 	T(ADD(sp, 2));	// 89343 add     sp, 2 ;~ 2C3F:00CB
cs=0x2c3f;eip=0x0000ce; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 89344 mov     [bp+var_4], ax ;~ 2C3F:00CE
cs=0x2c3f;eip=0x0000d1; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 89345 mov     [bp+var_2], dx ;~ 2C3F:00D1
cs=0x2c3f;eip=0x0000d4; 	T(OR(dx, ax));	// 89346 or      dx, ax ;~ 2C3F:00D4
cs=0x2c3f;eip=0x0000d6; 	J(JNZ(_end_load_2dshape));	// 89347 jnz     short _end_load_2dshape ;~ 2C3F:00D6
_try_load_pvs:
	// 9915 
cs=0x2c3f;eip=0x0000d8; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_c)))));	// 89351 push    word ptr [bp+var_C] ;~ 2C3F:00D8
cs=0x2c3f;eip=0x0000db; 	T(ax = bp+var_c+2);	// 89352 lea     ax, [bp+var_C+2] ;~ 2C3F:00DB
cs=0x2c3f;eip=0x0000de; 	X(PUSH(ax));	// 89353 push    ax              ; char * ;~ 2C3F:00DE
cs=0x2c3f;eip=0x0000df; 	J(CALLF(_strcpy,0));	// 89354 call    _strcpy ;~ 2C3F:00DF
cs=0x2c3f;eip=0x0000e4; 	T(ADD(sp, 4));	// 89355 add     sp, 4 ;~ 2C3F:00E4
cs=0x2c3f;eip=0x0000e7; 	T(MOV(ax, offset(dseg,a_pvs)));	// 89356 mov     ax, offset a_pvs ; ".PVS" ;~ 2C3F:00E7
cs=0x2c3f;eip=0x0000ea; 	X(PUSH(ax));	// 89357 push    ax ;~ 2C3F:00EA
cs=0x2c3f;eip=0x0000eb; 	T(ax = bp+var_c+2);	// 89358 lea     ax, [bp+var_C+2] ;~ 2C3F:00EB
cs=0x2c3f;eip=0x0000ee; 	X(PUSH(ax));	// 89359 push    ax              ; char * ;~ 2C3F:00EE
cs=0x2c3f;eip=0x0000ef; 	J(CALLF(_stricmp,0));	// 89360 call    _stricmp ;~ 2C3F:00EF
cs=0x2c3f;eip=0x0000f4; 	T(ADD(sp, 4));	// 89361 add     sp, 4 ;~ 2C3F:00F4
cs=0x2c3f;eip=0x0000f7; 	T(OR(ax, ax));	// 89362 or      ax, ax ;~ 2C3F:00F7
cs=0x2c3f;eip=0x0000f9; 	J(JNZ(_try_load_xvs));	// 89363 jnz     short _try_load_xvs ;~ 2C3F:00F9
cs=0x2c3f;eip=0x0000fb; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 89364 push    [bp+arg_2] ;~ 2C3F:00FB
cs=0x2c3f;eip=0x0000fe; 	T(ax = bp+var_7c);	// 89365 lea     ax, [bp+var_7C] ;~ 2C3F:00FE
cs=0x2c3f;eip=0x000101; 	X(PUSH(ax));	// 89366 push    ax ;~ 2C3F:0101
cs=0x2c3f;eip=0x000102; 	J(CALLF(file_decomp,0));	// 89367 call    file_decomp ;~ 2C3F:0102
cs=0x2c3f;eip=0x000107; 	T(ADD(sp, 4));	// 89368 add     sp, 4 ;~ 2C3F:0107
cs=0x2c3f;eip=0x00010a; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 89369 mov     [bp+var_4], ax ;~ 2C3F:010A
cs=0x2c3f;eip=0x00010d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 89370 mov     [bp+var_2], dx ;~ 2C3F:010D
cs=0x2c3f;eip=0x000110; 	T(OR(ax, dx));	// 89371 or      ax, dx ;~ 2C3F:0110
cs=0x2c3f;eip=0x000112; 	J(JZ(_end_load_2dshape));	// 89372 jz      short _end_load_2dshape ;~ 2C3F:0112
cs=0x2c3f;eip=0x000114; 	X(PUSH(dx));	// 89373 push    dx ;~ 2C3F:0114
cs=0x2c3f;eip=0x000115; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 89374 push    [bp+var_4] ;~ 2C3F:0115
cs=0x2c3f;eip=0x000118; 	J(CALLF(file_get_unflip_size,0));	// 89375 call    file_get_unflip_size ;~ 2C3F:0118
cs=0x2c3f;eip=0x00011d; 	T(ADD(sp, 4));	// 89376 add     sp, 4 ;~ 2C3F:011D
cs=0x2c3f;eip=0x000120; 	X(PUSH(ax));	// 89377 push    ax ;~ 2C3F:0120
cs=0x2c3f;eip=0x000121; 	T(MOV(ax, offset(dseg,aunflip_0)));	// 89378 mov     ax, offset aUnflip_0 ; "UNFLIP" ;~ 2C3F:0121
cs=0x2c3f;eip=0x000124; 	X(PUSH(ax));	// 89379 push    ax ;~ 2C3F:0124
cs=0x2c3f;eip=0x000125; 	J(CALLF(mmgr_alloc_pages,0));	// 89380 call    mmgr_alloc_pages ;~ 2C3F:0125
cs=0x2c3f;eip=0x00012a; 	T(ADD(sp, 4));	// 89381 add     sp, 4 ;~ 2C3F:012A
cs=0x2c3f;eip=0x00012d; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10))), ax));	// 89382 mov     word ptr [bp+var_10], ax ;~ 2C3F:012D
cs=0x2c3f;eip=0x000130; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10+2))), dx));	// 89383 mov     word ptr [bp+var_10+2], dx ;~ 2C3F:0130
cs=0x2c3f;eip=0x000133; 	X(PUSH(dx));	// 89384 push    dx ;~ 2C3F:0133
cs=0x2c3f;eip=0x000134; 	X(PUSH(ax));	// 89385 push    ax ;~ 2C3F:0134
cs=0x2c3f;eip=0x000135; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 89386 push    [bp+var_2] ;~ 2C3F:0135
cs=0x2c3f;eip=0x000138; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 89387 push    [bp+var_4] ;~ 2C3F:0138
cs=0x2c3f;eip=0x00013b; 	J(CALLF(file_unflip_shape2d,0));	// 89388 call    file_unflip_shape2d ;~ 2C3F:013B
cs=0x2c3f;eip=0x000140; 	T(ADD(sp, 8));	// 89389 add     sp, 8 ;~ 2C3F:0140
cs=0x2c3f;eip=0x000143; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_10+2)))));	// 89390 push    word ptr [bp+var_10+2] ;~ 2C3F:0143
cs=0x2c3f;eip=0x000146; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_10)))));	// 89391 push    word ptr [bp+var_10] ;~ 2C3F:0146
cs=0x2c3f;eip=0x000149; 	J(CALLF(mmgr_release,0));	// 89392 call    mmgr_release ;~ 2C3F:0149
cs=0x2c3f;eip=0x00014e; 	T(ADD(sp, 4));	// 89393 add     sp, 4 ;~ 2C3F:014E
cs=0x2c3f;eip=0x000151; 	J(JMP(_end_load_2dshape));	// 89394 jmp     _end_load_2dshape ;~ 2C3F:0151
_try_load_xvs:
	// 9916 
cs=0x2c3f;eip=0x000154; 	T(MOV(ax, offset(dseg,a_xvs)));	// 89398 mov     ax, offset a_xvs ; ".XVS" ;~ 2C3F:0154
cs=0x2c3f;eip=0x000157; 	X(PUSH(ax));	// 89399 push    ax ;~ 2C3F:0157
cs=0x2c3f;eip=0x000158; 	T(ax = bp+var_c+2);	// 89400 lea     ax, [bp+var_C+2] ;~ 2C3F:0158
cs=0x2c3f;eip=0x00015b; 	X(PUSH(ax));	// 89401 push    ax              ; char * ;~ 2C3F:015B
cs=0x2c3f;eip=0x00015c; 	J(CALLF(_stricmp,0));	// 89402 call    _stricmp ;~ 2C3F:015C
cs=0x2c3f;eip=0x000161; 	T(ADD(sp, 4));	// 89403 add     sp, 4 ;~ 2C3F:0161
cs=0x2c3f;eip=0x000164; 	T(OR(ax, ax));	// 89404 or      ax, ax ;~ 2C3F:0164
cs=0x2c3f;eip=0x000166; 	J(JNZ(_try_load_pes));	// 89405 jnz     short _try_load_pes ;~ 2C3F:0166
cs=0x2c3f;eip=0x000168; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 89406 push    [bp+arg_2] ;~ 2C3F:0168
cs=0x2c3f;eip=0x00016b; 	T(ax = bp+var_7c);	// 89407 lea     ax, [bp+var_7C] ;~ 2C3F:016B
cs=0x2c3f;eip=0x00016e; 	X(PUSH(ax));	// 89408 push    ax ;~ 2C3F:016E
cs=0x2c3f;eip=0x00016f; 	J(CALLF(file_decomp,0));	// 89409 call    file_decomp ;~ 2C3F:016F
_do_end_load_2dshape:
	// 9917 
cs=0x2c3f;eip=0x000174; 	T(ADD(sp, 4));	// 89412 add     sp, 4 ;~ 2C3F:0174
cs=0x2c3f;eip=0x000177; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 89413 mov     [bp+var_4], ax ;~ 2C3F:0177
cs=0x2c3f;eip=0x00017a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 89414 mov     [bp+var_2], dx ;~ 2C3F:017A
cs=0x2c3f;eip=0x00017d; 	J(JMP(_end_load_2dshape));	// 89415 jmp     _end_load_2dshape ;~ 2C3F:017D
_try_load_pes:
	// 9918 
cs=0x2c3f;eip=0x000180; 	T(MOV(ax, offset(dseg,a_pes)));	// 89419 mov     ax, offset a_pes ; ".PES" ;~ 2C3F:0180
cs=0x2c3f;eip=0x000183; 	X(PUSH(ax));	// 89420 push    ax ;~ 2C3F:0183
cs=0x2c3f;eip=0x000184; 	T(ax = bp+var_c+2);	// 89421 lea     ax, [bp+var_C+2] ;~ 2C3F:0184
cs=0x2c3f;eip=0x000187; 	X(PUSH(ax));	// 89422 push    ax              ; char * ;~ 2C3F:0187
cs=0x2c3f;eip=0x000188; 	J(CALLF(_stricmp,0));	// 89423 call    _stricmp ;~ 2C3F:0188
cs=0x2c3f;eip=0x00018d; 	T(ADD(sp, 4));	// 89424 add     sp, 4 ;~ 2C3F:018D
cs=0x2c3f;eip=0x000190; 	T(OR(ax, ax));	// 89425 or      ax, ax ;~ 2C3F:0190
cs=0x2c3f;eip=0x000192; 	J(JZ(loc_3ab67));	// 89426 jz      short loc_3AB67 ;~ 2C3F:0192
cs=0x2c3f;eip=0x000194; 	J(JMP(_try_load_esh));	// 89427 jmp     _try_load_esh ;~ 2C3F:0194
loc_3ab67:
	// 9919 
cs=0x2c3f;eip=0x000197; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 89431 push    [bp+arg_2] ;~ 2C3F:0197
cs=0x2c3f;eip=0x00019a; 	T(ax = bp+var_7c);	// 89432 lea     ax, [bp+var_7C] ;~ 2C3F:019A
cs=0x2c3f;eip=0x00019d; 	X(PUSH(ax));	// 89433 push    ax ;~ 2C3F:019D
cs=0x2c3f;eip=0x00019e; 	J(CALLF(file_decomp,0));	// 89434 call    file_decomp ;~ 2C3F:019E
cs=0x2c3f;eip=0x0001a3; 	T(ADD(sp, 4));	// 89435 add     sp, 4 ;~ 2C3F:01A3
cs=0x2c3f;eip=0x0001a6; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 89436 mov     [bp+var_4], ax ;~ 2C3F:01A6
cs=0x2c3f;eip=0x0001a9; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 89437 mov     [bp+var_2], dx ;~ 2C3F:01A9
cs=0x2c3f;eip=0x0001ac; 	T(OR(ax, dx));	// 89438 or      ax, dx ;~ 2C3F:01AC
cs=0x2c3f;eip=0x0001ae; 	J(JNZ(loc_3ab83));	// 89439 jnz     short loc_3AB83 ;~ 2C3F:01AE
cs=0x2c3f;eip=0x0001b0; 	J(JMP(_end_load_2dshape));	// 89440 jmp     _end_load_2dshape ;~ 2C3F:01B0
loc_3ab83:
	// 9920 
cs=0x2c3f;eip=0x0001b3; 	T(MOV(ax, 0x3E8));	// 89444 mov     ax, 3E8h ;~ 2C3F:01B3
cs=0x2c3f;eip=0x0001b6; 	X(PUSH(ax));	// 89445 push    ax ;~ 2C3F:01B6
cs=0x2c3f;eip=0x0001b7; 	T(MOV(ax, offset(dseg,aunflip)));	// 89446 mov     ax, offset aUnflip ; "UNFLIP" ;~ 2C3F:01B7
cs=0x2c3f;eip=0x0001ba; 	X(PUSH(ax));	// 89447 push    ax ;~ 2C3F:01BA
cs=0x2c3f;eip=0x0001bb; 	J(CALLF(mmgr_alloc_pages,0));	// 89448 call    mmgr_alloc_pages ;~ 2C3F:01BB
cs=0x2c3f;eip=0x0001c0; 	T(ADD(sp, 4));	// 89449 add     sp, 4 ;~ 2C3F:01C0
cs=0x2c3f;eip=0x0001c3; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10))), ax));	// 89450 mov     word ptr [bp+var_10], ax ;~ 2C3F:01C3
cs=0x2c3f;eip=0x0001c6; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10+2))), dx));	// 89451 mov     word ptr [bp+var_10+2], dx ;~ 2C3F:01C6
cs=0x2c3f;eip=0x0001c9; 	X(PUSH(dx));	// 89452 push    dx ;~ 2C3F:01C9
cs=0x2c3f;eip=0x0001ca; 	X(PUSH(ax));	// 89453 push    ax ;~ 2C3F:01CA
cs=0x2c3f;eip=0x0001cb; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 89454 push    [bp+var_2] ;~ 2C3F:01CB
cs=0x2c3f;eip=0x0001ce; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 89455 push    [bp+var_4] ;~ 2C3F:01CE
cs=0x2c3f;eip=0x0001d1; 	J(CALLF(file_unflip_shape2d_pes,0));	// 89456 call    file_unflip_shape2d_pes ;~ 2C3F:01D1
cs=0x2c3f;eip=0x0001d6; 	T(ADD(sp, 8));	// 89457 add     sp, 8 ;~ 2C3F:01D6
cs=0x2c3f;eip=0x0001d9; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_10+2)))));	// 89458 push    word ptr [bp+var_10+2] ;~ 2C3F:01D9
cs=0x2c3f;eip=0x0001dc; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_10)))));	// 89459 push    word ptr [bp+var_10] ;~ 2C3F:01DC
cs=0x2c3f;eip=0x0001df; 	J(CALLF(mmgr_release,0));	// 89460 call    mmgr_release ;~ 2C3F:01DF
cs=0x2c3f;eip=0x0001e4; 	T(ADD(sp, 4));	// 89461 add     sp, 4 ;~ 2C3F:01E4
loc_3abb7:
	// 9921 
cs=0x2c3f;eip=0x0001e7; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 89464 push    [bp+var_2] ;~ 2C3F:01E7
cs=0x2c3f;eip=0x0001ea; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 89465 push    [bp+var_4] ;~ 2C3F:01EA
cs=0x2c3f;eip=0x0001ed; 	J(CALLF(file_load_shape2d_expandedsize,0));	// 89466 call    file_load_shape2d_expandedsize ;~ 2C3F:01ED
cs=0x2c3f;eip=0x0001f2; 	T(ADD(sp, 4));	// 89467 add     sp, 4 ;~ 2C3F:01F2
cs=0x2c3f;eip=0x0001f5; 	X(MOV(*(dw*)(raddr(ss,bp+var_7e)), ax));	// 89468 mov     [bp+var_7E], ax ;~ 2C3F:01F5
cs=0x2c3f;eip=0x0001f8; 	T(MOV(ax, offset(dseg,amga)));	// 89469 mov     ax, offset aMga ; "!MGA" ;~ 2C3F:01F8
cs=0x2c3f;eip=0x0001fb; 	X(PUSH(ax));	// 89470 push    ax ;~ 2C3F:01FB
cs=0x2c3f;eip=0x0001fc; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 89471 push    [bp+var_2] ;~ 2C3F:01FC
cs=0x2c3f;eip=0x0001ff; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 89472 push    [bp+var_4] ;~ 2C3F:01FF
cs=0x2c3f;eip=0x000202; 	J(CALLF(locate_shape_nofatal,0));	// 89473 call    locate_shape_nofatal ;~ 2C3F:0202
cs=0x2c3f;eip=0x000207; 	T(ADD(sp, 6));	// 89474 add     sp, 6 ;~ 2C3F:0207
cs=0x2c3f;eip=0x00020a; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 89475 mov     [bp+var_18], ax ;~ 2C3F:020A
cs=0x2c3f;eip=0x00020d; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), dx));	// 89476 mov     [bp+var_16], dx ;~ 2C3F:020D
cs=0x2c3f;eip=0x000210; 	T(OR(ax, dx));	// 89477 or      ax, dx ;~ 2C3F:0210
cs=0x2c3f;eip=0x000212; 	J(JZ(loc_3abf3));	// 89478 jz      short loc_3ABF3 ;~ 2C3F:0212
cs=0x2c3f;eip=0x000214; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 89479 mov     ax, [bp+var_18] ;~ 2C3F:0214
cs=0x2c3f;eip=0x000217; 	T(ADD(ax, 0x10));	// 89480 add     ax, 10h ;~ 2C3F:0217
cs=0x2c3f;eip=0x00021a; 	X(PUSH(dx));	// 89481 push    dx ;~ 2C3F:021A
cs=0x2c3f;eip=0x00021b; 	X(PUSH(ax));	// 89482 push    ax ;~ 2C3F:021B
cs=0x2c3f;eip=0x00021c; 	X(PUSH(cs));	// 89483 push    cs ;~ 2C3F:021C
cs=0x2c3f;eip=0x00021d; 	J(CALL(file_load_shape2d_palmap_init,0));	// 89484 call    near ptr file_load_shape2d_palmap_init ;~ 2C3F:021D
cs=0x2c3f;eip=0x000220; 	T(ADD(sp, 4));	// 89485 add     sp, 4 ;~ 2C3F:0220
loc_3abf3:
	// 9922 
cs=0x2c3f;eip=0x000223; 	X(PUSH(*(dw*)(raddr(ss,bp+var_7e))));	// 89488 push    [bp+var_7E] ;~ 2C3F:0223
cs=0x2c3f;eip=0x000226; 	T(ax = bp+var_7c);	// 89489 lea     ax, [bp+var_7C] ;~ 2C3F:0226
cs=0x2c3f;eip=0x000229; 	X(PUSH(ax));	// 89490 push    ax ;~ 2C3F:0229
cs=0x2c3f;eip=0x00022a; 	J(CALLF(mmgr_alloc_pages,0));	// 89491 call    mmgr_alloc_pages ;~ 2C3F:022A
cs=0x2c3f;eip=0x00022f; 	T(ADD(sp, 4));	// 89492 add     sp, 4 ;~ 2C3F:022F
cs=0x2c3f;eip=0x000232; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10))), ax));	// 89493 mov     word ptr [bp+var_10], ax ;~ 2C3F:0232
cs=0x2c3f;eip=0x000235; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10+2))), dx));	// 89494 mov     word ptr [bp+var_10+2], dx ;~ 2C3F:0235
cs=0x2c3f;eip=0x000238; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_10))));	// 89495 les     bx, [bp+var_10] ;~ 2C3F:0238
cs=0x2c3f;eip=0x00023b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_7e))));	// 89496 mov     ax, [bp+var_7E] ;~ 2C3F:023B
cs=0x2c3f;eip=0x00023e; 	T(SUB(dx, dx));	// 89497 sub     dx, dx ;~ 2C3F:023E
cs=0x2c3f;eip=0x000240; 	T(MOV(cl, 4));	// 89498 mov     cl, 4 ;~ 2C3F:0240
loc_3ac12:
	// 9923 
cs=0x2c3f;eip=0x000242; 	T(SHL(ax, 1));	// 89501 shl     ax, 1 ;~ 2C3F:0242
cs=0x2c3f;eip=0x000244; 	T(RCL(dx, 1));	// 89502 rcl     dx, 1 ;~ 2C3F:0244
cs=0x2c3f;eip=0x000246; 	T(DEC(cl));	// 89503 dec     cl ;~ 2C3F:0246
cs=0x2c3f;eip=0x000248; 	J(JZ(loc_3ac60));	// 89504 jz      short loc_3AC60 ;~ 2C3F:0248
cs=0x2c3f;eip=0x00024a; 	J(JMP(loc_3ac12));	// 89505 jmp     short loc_3AC12 ;~ 2C3F:024A
_try_load_esh:
	// 9924 
cs=0x2c3f;eip=0x00024c; 	T(MOV(ax, offset(dseg,a_esh)));	// 89509 mov     ax, offset a_esh ; ".ESH" ;~ 2C3F:024C
cs=0x2c3f;eip=0x00024f; 	X(PUSH(ax));	// 89510 push    ax ;~ 2C3F:024F
cs=0x2c3f;eip=0x000250; 	T(ax = bp+var_c+2);	// 89511 lea     ax, [bp+var_C+2] ;~ 2C3F:0250
cs=0x2c3f;eip=0x000253; 	X(PUSH(ax));	// 89512 push    ax              ; char * ;~ 2C3F:0253
cs=0x2c3f;eip=0x000254; 	J(CALLF(_stricmp,0));	// 89513 call    _stricmp ;~ 2C3F:0254
cs=0x2c3f;eip=0x000259; 	T(ADD(sp, 4));	// 89514 add     sp, 4 ;~ 2C3F:0259
cs=0x2c3f;eip=0x00025c; 	T(OR(ax, ax));	// 89515 or      ax, ax ;~ 2C3F:025C
cs=0x2c3f;eip=0x00025e; 	J(JNZ(loc_3ac50));	// 89516 jnz     short loc_3AC50 ;~ 2C3F:025E
cs=0x2c3f;eip=0x000260; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 89517 push    [bp+arg_2] ;~ 2C3F:0260
cs=0x2c3f;eip=0x000263; 	T(ax = bp+var_7c);	// 89518 lea     ax, [bp+var_7C] ;~ 2C3F:0263
cs=0x2c3f;eip=0x000266; 	X(PUSH(ax));	// 89519 push    ax ;~ 2C3F:0266
cs=0x2c3f;eip=0x000267; 	J(CALLF(file_load_binary,0));	// 89520 call    file_load_binary ;~ 2C3F:0267
cs=0x2c3f;eip=0x00026c; 	T(ADD(sp, 4));	// 89521 add     sp, 4 ;~ 2C3F:026C
cs=0x2c3f;eip=0x00026f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 89522 mov     [bp+var_4], ax ;~ 2C3F:026F
cs=0x2c3f;eip=0x000272; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 89523 mov     [bp+var_2], dx ;~ 2C3F:0272
cs=0x2c3f;eip=0x000275; 	T(OR(ax, dx));	// 89524 or      ax, dx ;~ 2C3F:0275
cs=0x2c3f;eip=0x000277; 	J(JZ(loc_3ac4c));	// 89525 jz      short loc_3AC4C ;~ 2C3F:0277
cs=0x2c3f;eip=0x000279; 	J(JMP(loc_3abb7));	// 89526 jmp     loc_3ABB7 ;~ 2C3F:0279
loc_3ac4c:
	// 9925 
cs=0x2c3f;eip=0x00027c; 	J(JMP(_end_load_2dshape));	// 89530 jmp     _end_load_2dshape ;~ 2C3F:027C
loc_3ac50:
	// 9926 
cs=0x2c3f;eip=0x000280; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 89535 push    [bp+arg_2] ;~ 2C3F:0280
cs=0x2c3f;eip=0x000283; 	T(ax = bp+var_7c);	// 89536 lea     ax, [bp+var_7C] ;~ 2C3F:0283
cs=0x2c3f;eip=0x000286; 	X(PUSH(ax));	// 89537 push    ax ;~ 2C3F:0286
cs=0x2c3f;eip=0x000287; 	J(CALLF(file_load_binary,0));	// 89538 call    file_load_binary ;~ 2C3F:0287
cs=0x2c3f;eip=0x00028c; 	J(JMP(_do_end_load_2dshape));	// 89539 jmp     _do_end_load_2dshape ;~ 2C3F:028C
loc_3ac60:
	// 9927 
cs=0x2c3f;eip=0x000290; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 89544 mov     es:[bx], ax ;~ 2C3F:0290
cs=0x2c3f;eip=0x000293; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 89545 mov     es:[bx+2], dx ;~ 2C3F:0293
cs=0x2c3f;eip=0x000297; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_10+2)))));	// 89546 push    word ptr [bp+var_10+2] ;~ 2C3F:0297
cs=0x2c3f;eip=0x00029a; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_10)))));	// 89547 push    word ptr [bp+var_10] ;~ 2C3F:029A
cs=0x2c3f;eip=0x00029d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 89548 push    [bp+var_2] ;~ 2C3F:029D
cs=0x2c3f;eip=0x0002a0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 89549 push    [bp+var_4] ;~ 2C3F:02A0
cs=0x2c3f;eip=0x0002a3; 	J(CALLF(file_load_shape2d_expand,0));	// 89550 call    file_load_shape2d_expand ;~ 2C3F:02A3
cs=0x2c3f;eip=0x0002a8; 	T(ADD(sp, 8));	// 89551 add     sp, 8 ;~ 2C3F:02A8
cs=0x2c3f;eip=0x0002ab; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 89552 push    [bp+var_2] ;~ 2C3F:02AB
cs=0x2c3f;eip=0x0002ae; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 89553 push    [bp+var_4] ;~ 2C3F:02AE
cs=0x2c3f;eip=0x0002b1; 	J(CALLF(mmgr_release,0));	// 89554 call    mmgr_release ;~ 2C3F:02B1
cs=0x2c3f;eip=0x0002b6; 	T(ADD(sp, 4));	// 89555 add     sp, 4 ;~ 2C3F:02B6
cs=0x2c3f;eip=0x0002b9; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_10+2)))));	// 89556 push    word ptr [bp+var_10+2] ;~ 2C3F:02B9
cs=0x2c3f;eip=0x0002bc; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_10)))));	// 89557 push    word ptr [bp+var_10] ;~ 2C3F:02BC
cs=0x2c3f;eip=0x0002bf; 	J(CALLF(mmgr_op_unk,0));	// 89558 call    mmgr_op_unk ;~ 2C3F:02BF
cs=0x2c3f;eip=0x0002c4; 	T(ADD(sp, 4));	// 89559 add     sp, 4 ;~ 2C3F:02C4
cs=0x2c3f;eip=0x0002c7; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 89560 mov     [bp+var_4], ax ;~ 2C3F:02C7
cs=0x2c3f;eip=0x0002ca; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 89561 mov     [bp+var_2], dx ;~ 2C3F:02CA
cs=0x2c3f;eip=0x0002cd; 	T(MOV(ax, offset(dseg,palmap)));	// 89562 mov     ax, offset palmap ;~ 2C3F:02CD
cs=0x2c3f;eip=0x0002d0; 	X(PUSH(ax));	// 89563 push    ax ;~ 2C3F:02D0
cs=0x2c3f;eip=0x0002d1; 	X(PUSH(dx));	// 89564 push    dx ;~ 2C3F:02D1
cs=0x2c3f;eip=0x0002d2; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 89565 push    [bp+var_4] ;~ 2C3F:02D2
cs=0x2c3f;eip=0x0002d5; 	J(CALLF(file_load_shape2d_palmap_apply,0));	// 89566 call    file_load_shape2d_palmap_apply ;~ 2C3F:02D5
cs=0x2c3f;eip=0x0002da; 	T(ADD(sp, 6));	// 89567 add     sp, 6 ;~ 2C3F:02DA
cs=0x2c3f;eip=0x0002dd; 	J(JMP(_end_load_2dshape));	// 89568 jmp     _end_load_2dshape ;~ 2C3F:02DD

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_do_end_load_2dshape: 	goto _do_end_load_2dshape;
        case m2c::k_end_load_2dshape: 	goto _end_load_2dshape;
        case m2c::k_try_load_esh: 	goto _try_load_esh;
        case m2c::k_try_load_pes: 	goto _try_load_pes;
        case m2c::k_try_load_pvs: 	goto _try_load_pvs;
        case m2c::k_try_load_xvs: 	goto _try_load_xvs;
        case m2c::kfile_load_shape2d: 	goto file_load_shape2d;
        case m2c::kloc_3aa1c: 	goto loc_3aa1c;
        case m2c::kloc_3aa25: 	goto loc_3aa25;
        case m2c::kloc_3aa31: 	goto loc_3aa31;
        case m2c::kloc_3aa40: 	goto loc_3aa40;
        case m2c::kloc_3aa53: 	goto loc_3aa53;
        case m2c::kloc_3aa92: 	goto loc_3aa92;
        case m2c::kloc_3ab67: 	goto loc_3ab67;
        case m2c::kloc_3ab83: 	goto loc_3ab83;
        case m2c::kloc_3abb7: 	goto loc_3abb7;
        case m2c::kloc_3abf3: 	goto loc_3abf3;
        case m2c::kloc_3ac12: 	goto loc_3ac12;
        case m2c::kloc_3ac4c: 	goto loc_3ac4c;
        case m2c::kloc_3ac50: 	goto loc_3ac50;
        case m2c::kloc_3ac60: 	goto loc_3ac60;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool file_load_shape2d_palmap_init(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    file_load_shape2d_palmap_init:
    _begin:
#undef var_2
#define var_2 -2
	// 89578 var_2           = word ptr -2 ;~ 2C3F:02E0
#undef arg_0
#define arg_0 6
	// 89579 arg_0           = dword ptr  6 ;~ 2C3F:02E0
cs=0x2c3f;eip=0x0002e0; 	X(PUSH(bp));	// 89581 push    bp ;~ 2C3F:02E0
cs=0x2c3f;eip=0x0002e1; 	T(MOV(bp, sp));	// 89582 mov     bp, sp ;~ 2C3F:02E1
cs=0x2c3f;eip=0x0002e3; 	T(SUB(sp, 2));	// 89583 sub     sp, 2 ;~ 2C3F:02E3
cs=0x2c3f;eip=0x0002e6; 	X(PUSH(si));	// 89584 push    si ;~ 2C3F:02E6
cs=0x2c3f;eip=0x0002e7; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 89585 mov     [bp+var_2], 0 ;~ 2C3F:02E7
loc_3acbc:
	// 9928 
cs=0x2c3f;eip=0x0002ec; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 89588 mov     bx, [bp+var_2] ;~ 2C3F:02EC
cs=0x2c3f;eip=0x0002ef; 	T(LES(si, *(dd*)(raddr(ss,bp+arg_0))));	// 89589 les     si, [bp+arg_0] ;~ 2C3F:02EF
cs=0x2c3f;eip=0x0002f2; 	T(MOV(al, *(raddr(es,bx+si))));	// 89590 mov     al, es:[bx+si] ;~ 2C3F:02F2
cs=0x2c3f;eip=0x0002f5; 	X(MOV(*((palmap)+bx), al));	// 89591 mov     palmap[bx], al ;~ 2C3F:02F5
cs=0x2c3f;eip=0x0002f9; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 89592 inc     [bp+var_2] ;~ 2C3F:02F9
cs=0x2c3f;eip=0x0002fc; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x10));	// 89593 cmp     [bp+var_2], 10h ;~ 2C3F:02FC
cs=0x2c3f;eip=0x000300; 	J(JL(loc_3acbc));	// 89594 jl      short loc_3ACBC ;~ 2C3F:0300
cs=0x2c3f;eip=0x000302; 	X(POP(si));	// 89595 pop     si ;~ 2C3F:0302
cs=0x2c3f;eip=0x000303; 	T(MOV(sp, bp));	// 89596 mov     sp, bp ;~ 2C3F:0303
cs=0x2c3f;eip=0x000305; 	X(POP(bp));	// 89597 pop     bp ;~ 2C3F:0305
cs=0x2c3f;eip=0x000306; 	J(RETF(0));	// 89598 retf ;~ 2C3F:0306

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kfile_load_shape2d_palmap_init: 	goto file_load_shape2d_palmap_init;
        case m2c::kloc_3acbc: 	goto loc_3acbc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

