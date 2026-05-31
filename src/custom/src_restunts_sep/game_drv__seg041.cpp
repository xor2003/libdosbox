/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool seg041_0_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg041_0_proc:
    _begin:
loc_46490:
	// 9961 
cs=0x37eb;eip=0x000000; 	J(return seg041_a7e_proc(m2c::kloc_46f0e, _state););	// 118156 jmp     loc_46F0E ;~ 37EB:0000
ret_37eb_3:
	// 9962 
cs=0x37eb;eip=0x000003; 	J(return seg041_a7e_proc(m2c::kloc_46f6a, _state););	// 118158 jmp     loc_46F6A ;~ 37EB:0003
ret_37eb_6:
	// 9963 
cs=0x37eb;eip=0x000006; 	J(return seg041_5b_proc(m2c::kloc_464eb, _state););	// 118160 jmp     short loc_464EB ;~ 37EB:0006
ret_37eb_9:
	// 9964 
cs=0x37eb;eip=0x000009; 	J(return seg041_5b_proc(m2c::kloc_4659b, _state););	// 118164 jmp     loc_4659B ;~ 37EB:0009
ret_37eb_c:
	// 9965 
cs=0x37eb;eip=0x00000c; 	J(return seg041_5b_proc(m2c::kloc_4667f, _state););	// 118166 jmp     loc_4667F ;~ 37EB:000C
ret_37eb_f:
	// 9966 
cs=0x37eb;eip=0x00000f; 	J(return seg041_5b_proc(m2c::kloc_466a3, _state););	// 118168 jmp     loc_466A3 ;~ 37EB:000F
ret_37eb_12:
	// 9967 
cs=0x37eb;eip=0x000012; 	J(return seg041_5b_proc(m2c::kloc_46850, _state););	// 118170 jmp     loc_46850 ;~ 37EB:0012
ret_37eb_15:
	// 9968 
cs=0x37eb;eip=0x000015; 	J(return seg041_5b_proc(m2c::kloc_466e0, _state););	// 118172 jmp     loc_466E0 ;~ 37EB:0015
ret_37eb_18:
	// 9969 
cs=0x37eb;eip=0x000018; 	J(return seg041_5b_proc(m2c::kloc_46982, _state););	// 118174 jmp     loc_46982 ;~ 37EB:0018
ret_37eb_1b:
	// 9970 
cs=0x37eb;eip=0x00001b; 	J(return seg041_5b_proc(m2c::kloc_46982, _state););	// 118176 jmp     loc_46982 ;~ 37EB:001B
ret_37eb_1e:
	// 9971 
cs=0x37eb;eip=0x00001e; 	J(return seg041_5b_proc(m2c::kloc_46585, _state););	// 118178 jmp     loc_46585 ;~ 37EB:001E
ret_37eb_21:
	// 9972 
cs=0x37eb;eip=0x000021; 	J(return seg041_5b_proc(m2c::kloc_464fb, _state););	// 118180 jmp     short loc_464FB ;~ 37EB:0021
ret_37eb_24:
	// 9973 
cs=0x37eb;eip=0x000024; 	J(return seg041_5b_proc(m2c::kloc_46938, _state););	// 118183 jmp     loc_46938 ;~ 37EB:0024
ret_37eb_27:
	// 9974 
cs=0x37eb;eip=0x000027; 	J(return seg041_5b_proc(m2c::kloc_46756, _state););	// 118185 jmp     loc_46756 ;~ 37EB:0027
ret_37eb_2a:
	// 9975 
cs=0x37eb;eip=0x00002a; 	J(return seg041_5b_proc(m2c::kloc_468d9, _state););	// 118187 jmp     loc_468D9 ;~ 37EB:002A
ret_37eb_2d:
	// 9976 
cs=0x37eb;eip=0x00002d; 	J(return seg041_5b_proc(m2c::kloc_46879, _state););	// 118189 jmp     loc_46879 ;~ 37EB:002D
ret_37eb_30:
	// 9977 
cs=0x37eb;eip=0x000030; 	J(return seg041_5b_proc(m2c::kloc_46982, _state););	// 118191 jmp     loc_46982 ;~ 37EB:0030
ret_37eb_33:
	// 9978 
cs=0x37eb;eip=0x000033; 	J(return seg041_5b_proc(m2c::kloc_468e7, _state););	// 118193 jmp     loc_468E7 ;~ 37EB:0033
ret_37eb_36:
	// 9979 
cs=0x37eb;eip=0x000036; 	J(return seg041_5b_proc(m2c::kloc_46925, _state););	// 118195 jmp     loc_46925 ;~ 37EB:0036
ret_37eb_39:
	// 9980 
cs=0x37eb;eip=0x000039; 	J(return seg041_5b_proc(m2c::kloc_46982, _state););	// 118197 jmp     loc_46982 ;~ 37EB:0039
ret_37eb_3c:
	// 9981 
cs=0x37eb;eip=0x00003c; 	J(return seg041_5b_proc(m2c::kloc_46982, _state););	// 118199 jmp     loc_46982 ;~ 37EB:003C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_46490: 	goto loc_46490;
        case m2c::kret_37eb_12: 	goto ret_37eb_12;
        case m2c::kret_37eb_15: 	goto ret_37eb_15;
        case m2c::kret_37eb_18: 	goto ret_37eb_18;
        case m2c::kret_37eb_1b: 	goto ret_37eb_1b;
        case m2c::kret_37eb_1e: 	goto ret_37eb_1e;
        case m2c::kret_37eb_21: 	goto ret_37eb_21;
        case m2c::kret_37eb_24: 	goto ret_37eb_24;
        case m2c::kret_37eb_27: 	goto ret_37eb_27;
        case m2c::kret_37eb_2a: 	goto ret_37eb_2a;
        case m2c::kret_37eb_2d: 	goto ret_37eb_2d;
        case m2c::kret_37eb_3: 	goto ret_37eb_3;
        case m2c::kret_37eb_30: 	goto ret_37eb_30;
        case m2c::kret_37eb_33: 	goto ret_37eb_33;
        case m2c::kret_37eb_36: 	goto ret_37eb_36;
        case m2c::kret_37eb_39: 	goto ret_37eb_39;
        case m2c::kret_37eb_3c: 	goto ret_37eb_3c;
        case m2c::kret_37eb_6: 	goto ret_37eb_6;
        case m2c::kret_37eb_9: 	goto ret_37eb_9;
        case m2c::kret_37eb_c: 	goto ret_37eb_c;
        case m2c::kret_37eb_f: 	goto ret_37eb_f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_464cf(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_464cf:
    _begin:
cs=0x37eb;eip=0x00003f; 	X(PUSH(si));	// 118205 push    si ;~ 37EB:003F
cs=0x37eb;eip=0x000040; 	T(MOV(cx, 0x0FF));	// 118206 mov     cx, 0FFh ;~ 37EB:0040
cs=0x37eb;eip=0x000043; 	T(MOV(ax, 0));	// 118207 mov     ax, 0 ;~ 37EB:0043
cs=0x37eb;eip=0x000046; 	T(MOV(si, ax));	// 118208 mov     si, ax ;~ 37EB:0046
loc_464d8:
	// 9982 
cs=0x37eb;eip=0x000048; 	T(MOV(al, 1));	// 118211 mov     al, 1 ;~ 37EB:0048
cs=0x37eb;eip=0x00004a; 	X(MOV(*(raddr(cs,si+0x97D)), al));	// 118212 mov     cs:[si+97Dh], al ;~ 37EB:004A
cs=0x37eb;eip=0x00004f; 	T(MOV(al, 0));	// 118213 mov     al, 0 ;~ 37EB:004F
cs=0x37eb;eip=0x000051; 	J(CALL(sub_46c57,0));	// 118214 call    sub_46C57 ;~ 37EB:0051
cs=0x37eb;eip=0x000054; 	T(INC(ah));	// 118215 inc     ah ;~ 37EB:0054
cs=0x37eb;eip=0x000056; 	T(INC(si));	// 118216 inc     si ;~ 37EB:0056
cs=0x37eb;eip=0x000057; 	J(LOOP(loc_464d8));	// 118217 loop    loc_464D8 ;~ 37EB:0057
cs=0x37eb;eip=0x000059; 	X(POP(si));	// 118218 pop     si ;~ 37EB:0059
cs=0x37eb;eip=0x00005a; 	J(RETN(0));	// 118219 retn ;~ 37EB:005A

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_464d8: 	goto loc_464d8;
        case m2c::ksub_464cf: 	goto sub_464cf;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg041_5b_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg041_5b_proc:
    _begin:
loc_464eb:
	// 9983 
cs=0x37eb;eip=0x00005b; 	T(MOV(ax, 0));	// 118225 mov     ax, 0 ;~ 37EB:005B
loc_464ee:
	// 9984 
cs=0x37eb;eip=0x00005e; 	J(CALL(sub_469b8,0));	// 118228 call    sub_469B8 ;~ 37EB:005E
cs=0x37eb;eip=0x000061; 	T(INC(ax));	// 118229 inc     ax ;~ 37EB:0061
cs=0x37eb;eip=0x000062; 	T(CMP(ax, 9));	// 118230 cmp     ax, 9 ;~ 37EB:0062
cs=0x37eb;eip=0x000065; 	J(JC(loc_464ee));	// 118231 jb      short loc_464EE ;~ 37EB:0065
cs=0x37eb;eip=0x000067; 	J(CALL(sub_47154,0));	// 118232 call    sub_47154 ;~ 37EB:0067
cs=0x37eb;eip=0x00006a; 	J(RETF(0));	// 118233 retf ;~ 37EB:006A
loc_464fb:
	// 9985 
cs=0x37eb;eip=0x00006b; 	X(PUSH(bp));	// 118237 push    bp ;~ 37EB:006B
cs=0x37eb;eip=0x00006c; 	T(MOV(bp, sp));	// 118238 mov     bp, sp ;~ 37EB:006C
cs=0x37eb;eip=0x00006e; 	X(PUSH(di));	// 118239 push    di ;~ 37EB:006E
cs=0x37eb;eip=0x00006f; 	X(PUSH(si));	// 118240 push    si ;~ 37EB:006F
cs=0x37eb;eip=0x000070; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 118241 mov     ax, [bp+6] ;~ 37EB:0070
cs=0x37eb;eip=0x000073; 	T(CMP(ax, 0));	// 118242 cmp     ax, 0 ;~ 37EB:0073
cs=0x37eb;eip=0x000076; 	J(JNZ(loc_4650c));	// 118243 jnz     short loc_4650C ;~ 37EB:0076
cs=0x37eb;eip=0x000078; 	X(POP(si));	// 118244 pop     si ;~ 37EB:0078
cs=0x37eb;eip=0x000079; 	X(POP(di));	// 118245 pop     di ;~ 37EB:0079
cs=0x37eb;eip=0x00007a; 	X(POP(bp));	// 118246 pop     bp ;~ 37EB:007A
cs=0x37eb;eip=0x00007b; 	J(RETF(0));	// 118247 retf ;~ 37EB:007B
loc_4650c:
	// 9986 
cs=0x37eb;eip=0x00007c; 	T(DEC(ax));	// 118251 dec     ax ;~ 37EB:007C
cs=0x37eb;eip=0x00007d; 	T(MOV(si, *(dw*)(raddr(ss,bp+0x0A))));	// 118252 mov     si, [bp+0Ah] ;~ 37EB:007D
cs=0x37eb;eip=0x000080; 	T(LES(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 118253 les     bx, [bp+0Ch] ;~ 37EB:0080
cs=0x37eb;eip=0x000083; 	X(PUSH(ax));	// 118254 push    ax ;~ 37EB:0083
cs=0x37eb;eip=0x000084; 	T(MOV(ah, al));	// 118255 mov     ah, al ;~ 37EB:0084
cs=0x37eb;eip=0x000086; 	T(ADD(ah, 0x0C0));	// 118256 add     ah, 0C0h ; 'À' ;~ 37EB:0086
cs=0x37eb;eip=0x000089; 	T(MOV(al, *(raddr(es,bx+0x45))));	// 118257 mov     al, es:[bx+45h] ;~ 37EB:0089
cs=0x37eb;eip=0x00008d; 	T(MOV(cl, 1));	// 118258 mov     cl, 1 ;~ 37EB:008D
cs=0x37eb;eip=0x00008f; 	T(SHL(al, cl));	// 118259 shl     al, cl ;~ 37EB:008F
cs=0x37eb;eip=0x000091; 	T(OR(al, *(raddr(es,bx+0x44))));	// 118260 or      al, es:[bx+44h] ;~ 37EB:0091
cs=0x37eb;eip=0x000095; 	J(CALL(sub_46c57,0));	// 118261 call    sub_46C57 ;~ 37EB:0095
cs=0x37eb;eip=0x000098; 	X(POP(ax));	// 118262 pop     ax ;~ 37EB:0098
cs=0x37eb;eip=0x000099; 	X(PUSH(ax));	// 118263 push    ax ;~ 37EB:0099
cs=0x37eb;eip=0x00009a; 	X(PUSH(bx));	// 118264 push    bx ;~ 37EB:009A
cs=0x37eb;eip=0x00009b; 	T(SHL(ax, 1));	// 118265 shl     ax, 1 ;~ 37EB:009B
cs=0x37eb;eip=0x00009d; 	T(MOV(di, ax));	// 118266 mov     di, ax ;~ 37EB:009D
cs=0x37eb;eip=0x00009f; 	T(MOV(ah, *(raddr(cs,di+0x870))));	// 118267 mov     ah, cs:[di+870h] ;~ 37EB:009F
cs=0x37eb;eip=0x0000a4; 	T(ADD(bx, 0x46));	// 118268 add     bx, 46h ; 'F' ;~ 37EB:00A4
cs=0x37eb;eip=0x0000a7; 	J(CALL(sub_46a15,0));	// 118269 call    sub_46A15 ;~ 37EB:00A7
cs=0x37eb;eip=0x0000aa; 	X(POP(bx));	// 118270 pop     bx ;~ 37EB:00AA
cs=0x37eb;eip=0x0000ab; 	X(POP(ax));	// 118271 pop     ax ;~ 37EB:00AB
cs=0x37eb;eip=0x0000ac; 	X(PUSH(ax));	// 118272 push    ax ;~ 37EB:00AC
cs=0x37eb;eip=0x0000ad; 	X(PUSH(bx));	// 118273 push    bx ;~ 37EB:00AD
cs=0x37eb;eip=0x0000ae; 	T(SHL(ax, 1));	// 118274 shl     ax, 1 ;~ 37EB:00AE
cs=0x37eb;eip=0x0000b0; 	T(INC(ax));	// 118275 inc     ax ;~ 37EB:00B0
cs=0x37eb;eip=0x0000b1; 	T(MOV(di, ax));	// 118276 mov     di, ax ;~ 37EB:00B1
cs=0x37eb;eip=0x0000b3; 	T(MOV(ah, *(raddr(cs,di+0x870))));	// 118277 mov     ah, cs:[di+870h] ;~ 37EB:00B3
cs=0x37eb;eip=0x0000b8; 	T(ADD(bx, 0x52));	// 118278 add     bx, 52h ; 'R' ;~ 37EB:00B8
cs=0x37eb;eip=0x0000bb; 	J(CALL(sub_46a15,0));	// 118279 call    sub_46A15 ;~ 37EB:00BB
cs=0x37eb;eip=0x0000be; 	X(POP(bx));	// 118280 pop     bx ;~ 37EB:00BE
cs=0x37eb;eip=0x0000bf; 	X(POP(ax));	// 118281 pop     ax ;~ 37EB:00BF
cs=0x37eb;eip=0x0000c0; 	T(XOR(cx, cx));	// 118282 xor     cx, cx ;~ 37EB:00C0
cs=0x37eb;eip=0x0000c2; 	T(XOR(dx, dx));	// 118283 xor     dx, dx ;~ 37EB:00C2
cs=0x37eb;eip=0x0000c4; 	T(MOV(dl, *(raddr(ds,si+0x29))));	// 118284 mov     dl, [si+29h] ;~ 37EB:00C4
cs=0x37eb;eip=0x0000c7; 	T(CMP(dx, 0));	// 118285 cmp     dx, 0 ;~ 37EB:00C7
cs=0x37eb;eip=0x0000ca; 	J(JZ(loc_46563));	// 118286 jz      short loc_46563 ;~ 37EB:00CA
cs=0x37eb;eip=0x0000cc; 	T(MOV(cl, *(raddr(es,bx+0x16))));	// 118287 mov     cl, es:[bx+16h] ;~ 37EB:00CC
cs=0x37eb;eip=0x0000d0; 	J(CALL(sub_46b5b,0));	// 118288 call    sub_46B5B ;~ 37EB:00D0
loc_46563:
	// 9987 
cs=0x37eb;eip=0x0000d3; 	T(MOV(dl, *(raddr(ds,si+0x2B))));	// 118291 mov     dl, [si+2Bh] ;~ 37EB:00D3
cs=0x37eb;eip=0x0000d6; 	T(CMP(dx, 0));	// 118292 cmp     dx, 0 ;~ 37EB:00D6
cs=0x37eb;eip=0x0000d9; 	J(JZ(loc_46572));	// 118293 jz      short loc_46572 ;~ 37EB:00D9
cs=0x37eb;eip=0x0000db; 	T(MOV(cl, *(raddr(es,bx+0x17))));	// 118294 mov     cl, es:[bx+17h] ;~ 37EB:00DB
cs=0x37eb;eip=0x0000df; 	J(CALL(sub_46b5b,0));	// 118295 call    sub_46B5B ;~ 37EB:00DF
loc_46572:
	// 9988 
cs=0x37eb;eip=0x0000e2; 	T(MOV(dl, *(raddr(ds,si+0x2C))));	// 118298 mov     dl, [si+2Ch] ;~ 37EB:00E2
cs=0x37eb;eip=0x0000e5; 	T(CMP(dx, 0));	// 118299 cmp     dx, 0 ;~ 37EB:00E5
cs=0x37eb;eip=0x0000e8; 	J(JZ(loc_46581));	// 118300 jz      short loc_46581 ;~ 37EB:00E8
cs=0x37eb;eip=0x0000ea; 	T(MOV(cl, *(raddr(es,bx+0x18))));	// 118301 mov     cl, es:[bx+18h] ;~ 37EB:00EA
cs=0x37eb;eip=0x0000ee; 	J(CALL(sub_46b5b,0));	// 118302 call    sub_46B5B ;~ 37EB:00EE
loc_46581:
	// 9989 
cs=0x37eb;eip=0x0000f1; 	X(POP(si));	// 118305 pop     si ;~ 37EB:00F1
cs=0x37eb;eip=0x0000f2; 	X(POP(di));	// 118306 pop     di ;~ 37EB:00F2
cs=0x37eb;eip=0x0000f3; 	X(POP(bp));	// 118307 pop     bp ;~ 37EB:00F3
cs=0x37eb;eip=0x0000f4; 	J(RETF(0));	// 118308 retf ;~ 37EB:00F4
loc_46585:
	// 9990 
cs=0x37eb;eip=0x0000f5; 	X(PUSH(bp));	// 118312 push    bp ;~ 37EB:00F5
cs=0x37eb;eip=0x0000f6; 	T(MOV(bp, sp));	// 118313 mov     bp, sp ;~ 37EB:00F6
cs=0x37eb;eip=0x0000f8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 118314 mov     ax, [bp+6] ;~ 37EB:00F8
cs=0x37eb;eip=0x0000fb; 	T(CMP(ax, 0));	// 118315 cmp     ax, 0 ;~ 37EB:00FB
cs=0x37eb;eip=0x0000fe; 	J(JNZ(loc_46595));	// 118316 jnz     short loc_46595 ;~ 37EB:00FE
cs=0x37eb;eip=0x000100; 	J(CALL(sub_47154,0));	// 118317 call    sub_47154 ;~ 37EB:0100
cs=0x37eb;eip=0x000103; 	X(POP(bp));	// 118318 pop     bp ;~ 37EB:0103
cs=0x37eb;eip=0x000104; 	J(RETF(0));	// 118319 retf ;~ 37EB:0104
loc_46595:
	// 9991 
cs=0x37eb;eip=0x000105; 	T(DEC(ax));	// 118323 dec     ax ;~ 37EB:0105
cs=0x37eb;eip=0x000106; 	J(CALL(sub_469b8,0));	// 118324 call    sub_469B8 ;~ 37EB:0106
cs=0x37eb;eip=0x000109; 	X(POP(bp));	// 118325 pop     bp ;~ 37EB:0109
cs=0x37eb;eip=0x00010a; 	J(RETF(0));	// 118326 retf ;~ 37EB:010A
loc_4659b:
	// 9992 
cs=0x37eb;eip=0x00010b; 	X(PUSH(bp));	// 118330 push    bp ;~ 37EB:010B
cs=0x37eb;eip=0x00010c; 	T(MOV(bp, sp));	// 118331 mov     bp, sp ;~ 37EB:010C
cs=0x37eb;eip=0x00010e; 	X(PUSH(di));	// 118332 push    di ;~ 37EB:010E
cs=0x37eb;eip=0x00010f; 	X(PUSH(si));	// 118333 push    si ;~ 37EB:010F
cs=0x37eb;eip=0x000110; 	T(LES(bx, *(dw*)(raddr(ss,bp+0x10))));	// 118334 les     bx, [bp+10h] ;~ 37EB:0110
cs=0x37eb;eip=0x000113; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 118335 mov     di, [bp+8] ;~ 37EB:0113
cs=0x37eb;eip=0x000116; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 118336 mov     ax, [bp+6] ;~ 37EB:0116
cs=0x37eb;eip=0x000119; 	T(CMP(ax, 0));	// 118337 cmp     ax, 0 ;~ 37EB:0119
cs=0x37eb;eip=0x00011c; 	J(JNZ(loc_465fc));	// 118338 jnz     short loc_465FC ;~ 37EB:011C
cs=0x37eb;eip=0x00011e; 	T(CMP(*(raddr(es,bx+0x0A)), 0));	// 118339 cmp     byte ptr es:[bx+0Ah], 0 ;~ 37EB:011E
cs=0x37eb;eip=0x000123; 	J(JZ(loc_465f8));	// 118340 jz      short loc_465F8 ;~ 37EB:0123
cs=0x37eb;eip=0x000125; 	T(MOV(al, *(raddr(ss,bp+0x0C))));	// 118341 mov     al, [bp+0Ch] ;~ 37EB:0125
cs=0x37eb;eip=0x000128; 	X(MOV(*(raddr(ds,di+3)), al));	// 118342 mov     [di+3], al ;~ 37EB:0128
cs=0x37eb;eip=0x00012b; 	J(CALL(sub_46bb0,0));	// 118343 call    sub_46BB0 ;~ 37EB:012B
cs=0x37eb;eip=0x00012e; 	X(MOV(*(dw*)(raddr(ds,di+4)), cx));	// 118344 mov     [di+4], cx ;~ 37EB:012E
cs=0x37eb;eip=0x000131; 	T(MOV(al, *(raddr(es,bx+0x11))));	// 118345 mov     al, es:[bx+11h] ;~ 37EB:0131
cs=0x37eb;eip=0x000135; 	T(CBW);	// 118346 cbw ;~ 37EB:0135
cs=0x37eb;eip=0x000136; 	T(ADD(cx, ax));	// 118347 add     cx, ax ;~ 37EB:0136
cs=0x37eb;eip=0x000138; 	X(MOV(*(dw*)(raddr(ds,di+6)), cx));	// 118348 mov     [di+6], cx ;~ 37EB:0138
cs=0x37eb;eip=0x00013b; 	T(LES(bx, *(dw*)(raddr(es,bx+6))));	// 118349 les     bx, es:[bx+6] ;~ 37EB:013B
cs=0x37eb;eip=0x00013f; 	T(CMP(*(raddr(es,bx+5)), 1));	// 118350 cmp     byte ptr es:[bx+5], 1 ;~ 37EB:013F
cs=0x37eb;eip=0x000144; 	J(JNZ(loc_465f8));	// 118351 jnz     short loc_465F8 ;~ 37EB:0144
cs=0x37eb;eip=0x000146; 	T(CMP(*(raddr(es,bx+4)), 1));	// 118352 cmp     byte ptr es:[bx+4], 1 ;~ 37EB:0146
cs=0x37eb;eip=0x00014b; 	J(JNZ(loc_465f8));	// 118353 jnz     short loc_465F8 ;~ 37EB:014B
cs=0x37eb;eip=0x00014d; 	T(CMP(*(raddr(es,bx+6)), 1));	// 118354 cmp     byte ptr es:[bx+6], 1 ;~ 37EB:014D
cs=0x37eb;eip=0x000152; 	J(JNZ(loc_465f8));	// 118355 jnz     short loc_465F8 ;~ 37EB:0152
cs=0x37eb;eip=0x000154; 	X(PUSH(ds));	// 118356 push    ds ;~ 37EB:0154
cs=0x37eb;eip=0x000155; 	T(LDS(ax, *(dw*)(raddr(es,bx+8))));	// 118357 lds     ax, es:[bx+8] ;~ 37EB:0155
cs=0x37eb;eip=0x000159; 	T(MOV(dx, ds));	// 118358 mov     dx, ds ;~ 37EB:0159
cs=0x37eb;eip=0x00015b; 	X(POP(ds));	// 118359 pop     ds ;~ 37EB:015B
cs=0x37eb;eip=0x00015c; 	T(MOV(bx, 1));	// 118360 mov     bx, 1 ;~ 37EB:015C
cs=0x37eb;eip=0x00015f; 	T(di = bx+0x32);	// 118361 lea     di, [bx+32h] ;~ 37EB:015F
cs=0x37eb;eip=0x000162; 	J(CALL(sub_47154,0));	// 118362 call    sub_47154 ;~ 37EB:0162
cs=0x37eb;eip=0x000165; 	J(CALL(sub_46f7a,0));	// 118363 call    sub_46F7A ;~ 37EB:0165
loc_465f8:
	// 9993 
cs=0x37eb;eip=0x000168; 	X(POP(si));	// 118367 pop     si ;~ 37EB:0168
cs=0x37eb;eip=0x000169; 	X(POP(di));	// 118368 pop     di ;~ 37EB:0169
cs=0x37eb;eip=0x00016a; 	X(POP(bp));	// 118369 pop     bp ;~ 37EB:016A
cs=0x37eb;eip=0x00016b; 	J(RETF(0));	// 118370 retf ;~ 37EB:016B
loc_465fc:
	// 9994 
cs=0x37eb;eip=0x00016c; 	T(MOV(al, *(raddr(ss,bp+0x0C))));	// 118374 mov     al, [bp+0Ch] ;~ 37EB:016C
cs=0x37eb;eip=0x00016f; 	X(MOV(*(raddr(ds,di+3)), al));	// 118375 mov     [di+3], al ;~ 37EB:016F
cs=0x37eb;eip=0x000172; 	T(XOR(ah, ah));	// 118376 xor     ah, ah ;~ 37EB:0172
cs=0x37eb;eip=0x000174; 	T(CMP(al, 0x0FF));	// 118377 cmp     al, 0FFh ;~ 37EB:0174
cs=0x37eb;eip=0x000176; 	J(JZ(loc_4661a));	// 118378 jz      short loc_4661A ;~ 37EB:0176
cs=0x37eb;eip=0x000178; 	J(CALL(sub_46b89,0));	// 118379 call    sub_46B89 ;~ 37EB:0178
cs=0x37eb;eip=0x00017b; 	T(MOV(dx, ax));	// 118380 mov     dx, ax ;~ 37EB:017B
cs=0x37eb;eip=0x00017d; 	X(MOV(*(dw*)(raddr(ds,di+4)), dx));	// 118381 mov     [di+4], dx ;~ 37EB:017D
cs=0x37eb;eip=0x000180; 	T(MOV(al, *(raddr(es,bx+0x11))));	// 118382 mov     al, es:[bx+11h] ;~ 37EB:0180
cs=0x37eb;eip=0x000184; 	T(CBW);	// 118383 cbw ;~ 37EB:0184
cs=0x37eb;eip=0x000185; 	T(ADD(dx, ax));	// 118384 add     dx, ax ;~ 37EB:0185
cs=0x37eb;eip=0x000187; 	X(MOV(*(dw*)(raddr(ds,di+6)), dx));	// 118385 mov     [di+6], dx ;~ 37EB:0187
loc_4661a:
	// 9995 
cs=0x37eb;eip=0x00018a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 118388 mov     ax, [bp+6] ;~ 37EB:018A
cs=0x37eb;eip=0x00018d; 	T(DEC(ax));	// 118389 dec     ax ;~ 37EB:018D
cs=0x37eb;eip=0x00018e; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0A))));	// 118390 mov     di, [bp+0Ah] ;~ 37EB:018E
cs=0x37eb;eip=0x000191; 	X(PUSH(ax));	// 118391 push    ax ;~ 37EB:0191
cs=0x37eb;eip=0x000192; 	T(SHL(ax, 1));	// 118392 shl     ax, 1 ;~ 37EB:0192
cs=0x37eb;eip=0x000194; 	T(MOV(si, ax));	// 118393 mov     si, ax ;~ 37EB:0194
cs=0x37eb;eip=0x000196; 	T(MOV(ah, *(raddr(cs,si+0x870))));	// 118394 mov     ah, cs:[si+870h] ;~ 37EB:0196
cs=0x37eb;eip=0x00019b; 	T(ADD(ah, 0x40));	// 118395 add     ah, 40h ; '@' ;~ 37EB:019B
cs=0x37eb;eip=0x00019e; 	T(MOV(al, 0x3F));	// 118396 mov     al, 3Fh ; '?' ;~ 37EB:019E
cs=0x37eb;eip=0x0001a0; 	J(CALL(sub_46c57,0));	// 118397 call    sub_46C57 ;~ 37EB:01A0
cs=0x37eb;eip=0x0001a3; 	X(POP(ax));	// 118398 pop     ax ;~ 37EB:01A3
cs=0x37eb;eip=0x0001a4; 	X(PUSH(ax));	// 118399 push    ax ;~ 37EB:01A4
cs=0x37eb;eip=0x0001a5; 	T(SHL(ax, 1));	// 118400 shl     ax, 1 ;~ 37EB:01A5
cs=0x37eb;eip=0x0001a7; 	T(INC(ax));	// 118401 inc     ax ;~ 37EB:01A7
cs=0x37eb;eip=0x0001a8; 	T(MOV(si, ax));	// 118402 mov     si, ax ;~ 37EB:01A8
cs=0x37eb;eip=0x0001aa; 	T(MOV(ah, *(raddr(cs,si+0x870))));	// 118403 mov     ah, cs:[si+870h] ;~ 37EB:01AA
cs=0x37eb;eip=0x0001af; 	T(ADD(ah, 0x40));	// 118404 add     ah, 40h ; '@' ;~ 37EB:01AF
cs=0x37eb;eip=0x0001b2; 	T(MOV(al, 0x3F));	// 118405 mov     al, 3Fh ; '?' ;~ 37EB:01B2
cs=0x37eb;eip=0x0001b4; 	J(CALL(sub_46c57,0));	// 118406 call    sub_46C57 ;~ 37EB:01B4
cs=0x37eb;eip=0x0001b7; 	X(POP(ax));	// 118407 pop     ax ;~ 37EB:01B7
cs=0x37eb;eip=0x0001b8; 	X(PUSH(ax));	// 118408 push    ax ;~ 37EB:01B8
cs=0x37eb;eip=0x0001b9; 	T(MOV(ah, al));	// 118409 mov     ah, al ;~ 37EB:01B9
cs=0x37eb;eip=0x0001bb; 	T(ADD(ah, 0x0A0));	// 118410 add     ah, 0A0h ; ' ' ;~ 37EB:01BB
cs=0x37eb;eip=0x0001be; 	T(MOV(al, dl));	// 118411 mov     al, dl ;~ 37EB:01BE
cs=0x37eb;eip=0x0001c0; 	J(CALL(sub_46c57,0));	// 118412 call    sub_46C57 ;~ 37EB:01C0
cs=0x37eb;eip=0x0001c3; 	X(POP(ax));	// 118413 pop     ax ;~ 37EB:01C3
cs=0x37eb;eip=0x0001c4; 	X(PUSH(ax));	// 118414 push    ax ;~ 37EB:01C4
cs=0x37eb;eip=0x0001c5; 	T(MOV(ah, al));	// 118415 mov     ah, al ;~ 37EB:01C5
cs=0x37eb;eip=0x0001c7; 	T(ADD(ah, 0x0B0));	// 118416 add     ah, 0B0h ; '°' ;~ 37EB:01C7
cs=0x37eb;eip=0x0001ca; 	T(MOV(al, 0x20));	// 118417 mov     al, 20h ; ' ' ;~ 37EB:01CA
cs=0x37eb;eip=0x0001cc; 	T(OR(al, dh));	// 118418 or      al, dh ;~ 37EB:01CC
cs=0x37eb;eip=0x0001ce; 	J(CALL(sub_46c57,0));	// 118419 call    sub_46C57 ;~ 37EB:01CE
cs=0x37eb;eip=0x0001d1; 	X(POP(ax));	// 118420 pop     ax ;~ 37EB:01D1
cs=0x37eb;eip=0x0001d2; 	T(MOV(cl, 0x7F));	// 118421 mov     cl, 7Fh ;~ 37EB:01D2
cs=0x37eb;eip=0x0001d4; 	T(CMP(*(raddr(es,bx+0x15)), 0));	// 118422 cmp     byte ptr es:[bx+15h], 0 ;~ 37EB:01D4
cs=0x37eb;eip=0x0001d9; 	J(JZ(loc_4666e));	// 118423 jz      short loc_4666E ;~ 37EB:01D9
cs=0x37eb;eip=0x0001db; 	T(MOV(cl, *(raddr(ss,bp+0x0E))));	// 118424 mov     cl, [bp+0Eh] ;~ 37EB:01DB
loc_4666e:
	// 9996 
cs=0x37eb;eip=0x0001de; 	T(MOV(si, ax));	// 118427 mov     si, ax ;~ 37EB:01DE
cs=0x37eb;eip=0x0001e0; 	X(MOV(*(raddr(cs,si+0x974)), cl));	// 118428 mov     cs:[si+974h], cl ;~ 37EB:01E0
cs=0x37eb;eip=0x0001e5; 	T(MOV(ch, *(raddr(ds,di+0x28))));	// 118429 mov     ch, [di+28h] ;~ 37EB:01E5
cs=0x37eb;eip=0x0001e8; 	J(CALL(sub_46bc0,0));	// 118430 call    sub_46BC0 ;~ 37EB:01E8
cs=0x37eb;eip=0x0001eb; 	X(POP(si));	// 118431 pop     si ;~ 37EB:01EB
cs=0x37eb;eip=0x0001ec; 	X(POP(di));	// 118432 pop     di ;~ 37EB:01EC
cs=0x37eb;eip=0x0001ed; 	X(POP(bp));	// 118433 pop     bp ;~ 37EB:01ED
cs=0x37eb;eip=0x0001ee; 	J(RETF(0));	// 118434 retf ;~ 37EB:01EE
loc_4667f:
	// 9997 
cs=0x37eb;eip=0x0001ef; 	X(PUSH(bp));	// 118438 push    bp ;~ 37EB:01EF
cs=0x37eb;eip=0x0001f0; 	T(MOV(bp, sp));	// 118439 mov     bp, sp ;~ 37EB:01F0
cs=0x37eb;eip=0x0001f2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 118440 mov     ax, [bp+6] ;~ 37EB:01F2
cs=0x37eb;eip=0x0001f5; 	T(CMP(ax, 0));	// 118441 cmp     ax, 0 ;~ 37EB:01F5
cs=0x37eb;eip=0x0001f8; 	J(JNZ(loc_4668c));	// 118442 jnz     short loc_4668C ;~ 37EB:01F8
cs=0x37eb;eip=0x0001fa; 	X(POP(bp));	// 118443 pop     bp ;~ 37EB:01FA
cs=0x37eb;eip=0x0001fb; 	J(RETF(0));	// 118444 retf ;~ 37EB:01FB
loc_4668c:
	// 9998 
cs=0x37eb;eip=0x0001fc; 	T(DEC(ax));	// 118448 dec     ax ;~ 37EB:01FC
cs=0x37eb;eip=0x0001fd; 	T(MOV(bx, *(dw*)(raddr(ss,bp+8))));	// 118449 mov     bx, [bp+8] ;~ 37EB:01FD
cs=0x37eb;eip=0x000200; 	T(MOV(dx, *(dw*)(raddr(ds,bx+6))));	// 118450 mov     dx, [bx+6] ;~ 37EB:0200
cs=0x37eb;eip=0x000203; 	X(PUSH(ax));	// 118451 push    ax ;~ 37EB:0203
cs=0x37eb;eip=0x000204; 	T(MOV(ah, al));	// 118452 mov     ah, al ;~ 37EB:0204
cs=0x37eb;eip=0x000206; 	T(ADD(ah, 0x0B0));	// 118453 add     ah, 0B0h ; '°' ;~ 37EB:0206
cs=0x37eb;eip=0x000209; 	T(MOV(al, 0));	// 118454 mov     al, 0 ;~ 37EB:0209
cs=0x37eb;eip=0x00020b; 	T(OR(al, dh));	// 118455 or      al, dh ;~ 37EB:020B
cs=0x37eb;eip=0x00020d; 	J(CALL(sub_46c57,0));	// 118456 call    sub_46C57 ;~ 37EB:020D
cs=0x37eb;eip=0x000210; 	X(POP(ax));	// 118457 pop     ax ;~ 37EB:0210
cs=0x37eb;eip=0x000211; 	X(POP(bp));	// 118458 pop     bp ;~ 37EB:0211
cs=0x37eb;eip=0x000212; 	J(RETF(0));	// 118459 retf ;~ 37EB:0212
loc_466a3:
	// 9999 
cs=0x37eb;eip=0x000213; 	X(PUSH(bp));	// 118463 push    bp ;~ 37EB:0213
cs=0x37eb;eip=0x000214; 	T(MOV(bp, sp));	// 118464 mov     bp, sp ;~ 37EB:0214
cs=0x37eb;eip=0x000216; 	X(PUSH(si));	// 118465 push    si ;~ 37EB:0216
cs=0x37eb;eip=0x000217; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 118466 mov     ax, [bp+6] ;~ 37EB:0217
cs=0x37eb;eip=0x00021a; 	T(CMP(ax, 0));	// 118467 cmp     ax, 0 ;~ 37EB:021A
cs=0x37eb;eip=0x00021d; 	J(JNZ(loc_466b5));	// 118468 jnz     short loc_466B5 ;~ 37EB:021D
cs=0x37eb;eip=0x00021f; 	J(CALL(sub_47154,0));	// 118469 call    sub_47154 ;~ 37EB:021F
cs=0x37eb;eip=0x000222; 	X(POP(si));	// 118470 pop     si ;~ 37EB:0222
cs=0x37eb;eip=0x000223; 	X(POP(bp));	// 118471 pop     bp ;~ 37EB:0223
cs=0x37eb;eip=0x000224; 	J(RETF(0));	// 118472 retf ;~ 37EB:0224
loc_466b5:
	// 10000 
cs=0x37eb;eip=0x000225; 	T(DEC(ax));	// 118476 dec     ax ;~ 37EB:0225
cs=0x37eb;eip=0x000226; 	X(PUSH(ax));	// 118477 push    ax ;~ 37EB:0226
cs=0x37eb;eip=0x000227; 	T(SHL(ax, 1));	// 118478 shl     ax, 1 ;~ 37EB:0227
cs=0x37eb;eip=0x000229; 	T(MOV(si, ax));	// 118479 mov     si, ax ;~ 37EB:0229
cs=0x37eb;eip=0x00022b; 	T(MOV(ah, *(raddr(cs,si+0x870))));	// 118480 mov     ah, cs:[si+870h] ;~ 37EB:022B
cs=0x37eb;eip=0x000230; 	T(ADD(ah, 0x40));	// 118481 add     ah, 40h ; '@' ;~ 37EB:0230
cs=0x37eb;eip=0x000233; 	T(MOV(al, 0x3F));	// 118482 mov     al, 3Fh ; '?' ;~ 37EB:0233
cs=0x37eb;eip=0x000235; 	J(CALL(sub_46c57,0));	// 118483 call    sub_46C57 ;~ 37EB:0235
cs=0x37eb;eip=0x000238; 	X(POP(ax));	// 118484 pop     ax ;~ 37EB:0238
cs=0x37eb;eip=0x000239; 	X(PUSH(ax));	// 118485 push    ax ;~ 37EB:0239
cs=0x37eb;eip=0x00023a; 	T(SHL(ax, 1));	// 118486 shl     ax, 1 ;~ 37EB:023A
cs=0x37eb;eip=0x00023c; 	T(INC(ax));	// 118487 inc     ax ;~ 37EB:023C
cs=0x37eb;eip=0x00023d; 	T(MOV(si, ax));	// 118488 mov     si, ax ;~ 37EB:023D
cs=0x37eb;eip=0x00023f; 	T(MOV(ah, *(raddr(cs,si+0x870))));	// 118489 mov     ah, cs:[si+870h] ;~ 37EB:023F
cs=0x37eb;eip=0x000244; 	T(ADD(ah, 0x40));	// 118490 add     ah, 40h ; '@' ;~ 37EB:0244
cs=0x37eb;eip=0x000247; 	T(MOV(al, 0x3F));	// 118491 mov     al, 3Fh ; '?' ;~ 37EB:0247
cs=0x37eb;eip=0x000249; 	J(CALL(sub_46c57,0));	// 118492 call    sub_46C57 ;~ 37EB:0249
cs=0x37eb;eip=0x00024c; 	X(POP(ax));	// 118493 pop     ax ;~ 37EB:024C
cs=0x37eb;eip=0x00024d; 	X(POP(si));	// 118494 pop     si ;~ 37EB:024D
cs=0x37eb;eip=0x00024e; 	X(POP(bp));	// 118495 pop     bp ;~ 37EB:024E
cs=0x37eb;eip=0x00024f; 	J(RETF(0));	// 118496 retf ;~ 37EB:024F
loc_466e0:
	// 10001 
cs=0x37eb;eip=0x000250; 	X(PUSH(bp));	// 118500 push    bp ;~ 37EB:0250
cs=0x37eb;eip=0x000251; 	T(MOV(bp, sp));	// 118501 mov     bp, sp ;~ 37EB:0251
cs=0x37eb;eip=0x000253; 	X(PUSH(di));	// 118502 push    di ;~ 37EB:0253
cs=0x37eb;eip=0x000254; 	X(PUSH(si));	// 118503 push    si ;~ 37EB:0254
cs=0x37eb;eip=0x000255; 	T(MOV(si, *(dw*)(raddr(ss,bp+8))));	// 118504 mov     si, [bp+8] ;~ 37EB:0255
cs=0x37eb;eip=0x000258; 	T(CMP(*(raddr(ds,si+1)), 0));	// 118505 cmp     byte ptr [si+1], 0 ;~ 37EB:0258
cs=0x37eb;eip=0x00025c; 	J(JNZ(loc_466f2));	// 118506 jnz     short loc_466F2 ;~ 37EB:025C
cs=0x37eb;eip=0x00025e; 	X(POP(si));	// 118507 pop     si ;~ 37EB:025E
cs=0x37eb;eip=0x00025f; 	X(POP(di));	// 118508 pop     di ;~ 37EB:025F
cs=0x37eb;eip=0x000260; 	X(POP(bp));	// 118509 pop     bp ;~ 37EB:0260
cs=0x37eb;eip=0x000261; 	J(RETF(0));	// 118510 retf ;~ 37EB:0261
loc_466f2:
	// 10002 
cs=0x37eb;eip=0x000262; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 118514 mov     ax, [bp+6] ;~ 37EB:0262
cs=0x37eb;eip=0x000265; 	T(CMP(ax, 0));	// 118515 cmp     ax, 0 ;~ 37EB:0265
cs=0x37eb;eip=0x000268; 	J(JNZ(loc_466fe));	// 118516 jnz     short loc_466FE ;~ 37EB:0268
cs=0x37eb;eip=0x00026a; 	X(POP(si));	// 118517 pop     si ;~ 37EB:026A
cs=0x37eb;eip=0x00026b; 	X(POP(di));	// 118518 pop     di ;~ 37EB:026B
cs=0x37eb;eip=0x00026c; 	X(POP(bp));	// 118519 pop     bp ;~ 37EB:026C
cs=0x37eb;eip=0x00026d; 	J(RETF(0));	// 118520 retf ;~ 37EB:026D
loc_466fe:
	// 10003 
cs=0x37eb;eip=0x00026e; 	T(DEC(ax));	// 118524 dec     ax ;~ 37EB:026E
cs=0x37eb;eip=0x00026f; 	T(LES(bx, *(dw*)(raddr(ds,si+0x10))));	// 118525 les     bx, [si+10h] ;~ 37EB:026F
cs=0x37eb;eip=0x000272; 	T(MOV(cl, *(raddr(ss,bp+0x0A))));	// 118526 mov     cl, [bp+0Ah] ;~ 37EB:0272
cs=0x37eb;eip=0x000275; 	T(XOR(ch, ch));	// 118527 xor     ch, ch ;~ 37EB:0275
cs=0x37eb;eip=0x000277; 	T(MOV(dl, *(raddr(ss,bp+0x0C))));	// 118528 mov     dl, [bp+0Ch] ;~ 37EB:0277
cs=0x37eb;eip=0x00027a; 	T(XOR(dh, dh));	// 118529 xor     dh, dh ;~ 37EB:027A
cs=0x37eb;eip=0x00027c; 	T(CMP(cx, 1));	// 118530 cmp     cx, 1 ;~ 37EB:027C
cs=0x37eb;eip=0x00027f; 	J(JNZ(loc_4671c));	// 118531 jnz     short loc_4671C ;~ 37EB:027F
cs=0x37eb;eip=0x000281; 	T(MOV(cl, *(raddr(es,bx+0x16))));	// 118532 mov     cl, es:[bx+16h] ;~ 37EB:0281
cs=0x37eb;eip=0x000285; 	J(CALL(sub_46b5b,0));	// 118533 call    sub_46B5B ;~ 37EB:0285
cs=0x37eb;eip=0x000288; 	X(POP(si));	// 118534 pop     si ;~ 37EB:0288
cs=0x37eb;eip=0x000289; 	X(POP(di));	// 118535 pop     di ;~ 37EB:0289
cs=0x37eb;eip=0x00028a; 	X(POP(bp));	// 118536 pop     bp ;~ 37EB:028A
cs=0x37eb;eip=0x00028b; 	J(RETF(0));	// 118537 retf ;~ 37EB:028B
loc_4671c:
	// 10004 
cs=0x37eb;eip=0x00028c; 	T(CMP(cx, 7));	// 118541 cmp     cx, 7 ;~ 37EB:028C
cs=0x37eb;eip=0x00028f; 	J(JNZ(loc_46732));	// 118542 jnz     short loc_46732 ;~ 37EB:028F
cs=0x37eb;eip=0x000291; 	T(MOV(di, ax));	// 118543 mov     di, ax ;~ 37EB:0291
cs=0x37eb;eip=0x000293; 	T(MOV(cl, *(raddr(cs,di+0x974))));	// 118544 mov     cl, cs:[di+974h] ;~ 37EB:0293
cs=0x37eb;eip=0x000298; 	T(MOV(ch, *(raddr(ss,bp+0x0C))));	// 118545 mov     ch, [bp+0Ch] ;~ 37EB:0298
cs=0x37eb;eip=0x00029b; 	J(CALL(sub_46bc0,0));	// 118546 call    sub_46BC0 ;~ 37EB:029B
cs=0x37eb;eip=0x00029e; 	X(POP(si));	// 118547 pop     si ;~ 37EB:029E
cs=0x37eb;eip=0x00029f; 	X(POP(di));	// 118548 pop     di ;~ 37EB:029F
cs=0x37eb;eip=0x0002a0; 	X(POP(bp));	// 118549 pop     bp ;~ 37EB:02A0
cs=0x37eb;eip=0x0002a1; 	J(RETF(0));	// 118550 retf ;~ 37EB:02A1
loc_46732:
	// 10005 
cs=0x37eb;eip=0x0002a2; 	T(CMP(cx, 0x0B));	// 118554 cmp     cx, 0Bh ;~ 37EB:02A2
cs=0x37eb;eip=0x0002a5; 	J(JNZ(loc_46742));	// 118555 jnz     short loc_46742 ;~ 37EB:02A5
cs=0x37eb;eip=0x0002a7; 	T(MOV(cl, *(raddr(es,bx+0x17))));	// 118556 mov     cl, es:[bx+17h] ;~ 37EB:02A7
cs=0x37eb;eip=0x0002ab; 	J(CALL(sub_46b5b,0));	// 118557 call    sub_46B5B ;~ 37EB:02AB
cs=0x37eb;eip=0x0002ae; 	X(POP(si));	// 118558 pop     si ;~ 37EB:02AE
cs=0x37eb;eip=0x0002af; 	X(POP(di));	// 118559 pop     di ;~ 37EB:02AF
cs=0x37eb;eip=0x0002b0; 	X(POP(bp));	// 118560 pop     bp ;~ 37EB:02B0
cs=0x37eb;eip=0x0002b1; 	J(RETF(0));	// 118561 retf ;~ 37EB:02B1
loc_46742:
	// 10006 
cs=0x37eb;eip=0x0002b2; 	T(CMP(cx, 0x0C));	// 118565 cmp     cx, 0Ch ;~ 37EB:02B2
cs=0x37eb;eip=0x0002b5; 	J(JNZ(loc_46752));	// 118566 jnz     short loc_46752 ;~ 37EB:02B5
cs=0x37eb;eip=0x0002b7; 	T(MOV(cl, *(raddr(es,bx+0x18))));	// 118567 mov     cl, es:[bx+18h] ;~ 37EB:02B7
cs=0x37eb;eip=0x0002bb; 	J(CALL(sub_46b5b,0));	// 118568 call    sub_46B5B ;~ 37EB:02BB
cs=0x37eb;eip=0x0002be; 	X(POP(si));	// 118569 pop     si ;~ 37EB:02BE
cs=0x37eb;eip=0x0002bf; 	X(POP(di));	// 118570 pop     di ;~ 37EB:02BF
cs=0x37eb;eip=0x0002c0; 	X(POP(bp));	// 118571 pop     bp ;~ 37EB:02C0
cs=0x37eb;eip=0x0002c1; 	J(RETF(0));	// 118572 retf ;~ 37EB:02C1
loc_46752:
	// 10007 
cs=0x37eb;eip=0x0002c2; 	X(POP(si));	// 118576 pop     si ;~ 37EB:02C2
cs=0x37eb;eip=0x0002c3; 	X(POP(di));	// 118577 pop     di ;~ 37EB:02C3
cs=0x37eb;eip=0x0002c4; 	X(POP(bp));	// 118578 pop     bp ;~ 37EB:02C4
cs=0x37eb;eip=0x0002c5; 	J(RETF(0));	// 118579 retf ;~ 37EB:02C5
loc_46756:
	// 10008 
cs=0x37eb;eip=0x0002c6; 	X(PUSH(bp));	// 118583 push    bp ;~ 37EB:02C6
cs=0x37eb;eip=0x0002c7; 	T(MOV(bp, sp));	// 118584 mov     bp, sp ;~ 37EB:02C7
cs=0x37eb;eip=0x0002c9; 	X(PUSH(di));	// 118585 push    di ;~ 37EB:02C9
cs=0x37eb;eip=0x0002ca; 	X(PUSH(si));	// 118586 push    si ;~ 37EB:02CA
cs=0x37eb;eip=0x0002cb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 118587 mov     ax, [bp+6] ;~ 37EB:02CB
cs=0x37eb;eip=0x0002ce; 	T(CMP(ax, 0));	// 118588 cmp     ax, 0 ;~ 37EB:02CE
cs=0x37eb;eip=0x0002d1; 	J(JNZ(loc_46767));	// 118589 jnz     short loc_46767 ;~ 37EB:02D1
cs=0x37eb;eip=0x0002d3; 	X(POP(si));	// 118590 pop     si ;~ 37EB:02D3
cs=0x37eb;eip=0x0002d4; 	X(POP(di));	// 118591 pop     di ;~ 37EB:02D4
cs=0x37eb;eip=0x0002d5; 	X(POP(bp));	// 118592 pop     bp ;~ 37EB:02D5
cs=0x37eb;eip=0x0002d6; 	J(RETF(0));	// 118593 retf ;~ 37EB:02D6
loc_46767:
	// 10009 
cs=0x37eb;eip=0x0002d7; 	T(DEC(ax));	// 118597 dec     ax ;~ 37EB:02D7
cs=0x37eb;eip=0x0002d8; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 118598 mov     di, [bp+8] ;~ 37EB:02D8
cs=0x37eb;eip=0x0002db; 	T(MOV(si, *(dw*)(raddr(ss,bp+0x0A))));	// 118599 mov     si, [bp+0Ah] ;~ 37EB:02DB
cs=0x37eb;eip=0x0002de; 	T(LES(bx, *(dw*)(raddr(ds,di+0x10))));	// 118600 les     bx, [di+10h] ;~ 37EB:02DE
cs=0x37eb;eip=0x0002e1; 	T(CMP(*(raddr(ds,di+1)), 0));	// 118601 cmp     byte ptr [di+1], 0 ;~ 37EB:02E1
cs=0x37eb;eip=0x0002e5; 	J(JNZ(loc_4677b));	// 118602 jnz     short loc_4677B ;~ 37EB:02E5
cs=0x37eb;eip=0x0002e7; 	X(POP(si));	// 118603 pop     si ;~ 37EB:02E7
cs=0x37eb;eip=0x0002e8; 	X(POP(di));	// 118604 pop     di ;~ 37EB:02E8
cs=0x37eb;eip=0x0002e9; 	X(POP(bp));	// 118605 pop     bp ;~ 37EB:02E9
cs=0x37eb;eip=0x0002ea; 	J(RETF(0));	// 118606 retf ;~ 37EB:02EA
loc_4677b:
	// 10010 
cs=0x37eb;eip=0x0002eb; 	T(MOV(dx, *(dw*)(raddr(ds,di+4))));	// 118610 mov     dx, [di+4] ;~ 37EB:02EB
cs=0x37eb;eip=0x0002ee; 	T(CMP(*(raddr(es,bx+0x35)), 0x91));	// 118611 cmp     byte ptr es:[bx+35h], 91h ; '‘' ;~ 37EB:02EE
cs=0x37eb;eip=0x0002f3; 	J(JNZ(loc_46794));	// 118612 jnz     short loc_46794 ;~ 37EB:02F3
cs=0x37eb;eip=0x0002f5; 	X(PUSH(ax));	// 118613 push    ax ;~ 37EB:02F5
cs=0x37eb;eip=0x0002f6; 	T(MOV(al, *(raddr(ds,di+3))));	// 118614 mov     al, [di+3] ;~ 37EB:02F6
cs=0x37eb;eip=0x0002f9; 	T(ADD(al, *(raddr(ds,di+0x22))));	// 118615 add     al, [di+22h] ;~ 37EB:02F9
cs=0x37eb;eip=0x0002fc; 	T(XOR(ah, ah));	// 118616 xor     ah, ah ;~ 37EB:02FC
cs=0x37eb;eip=0x0002fe; 	J(CALL(sub_46b89,0));	// 118617 call    sub_46B89 ;~ 37EB:02FE
cs=0x37eb;eip=0x000301; 	T(MOV(dx, ax));	// 118618 mov     dx, ax ;~ 37EB:0301
cs=0x37eb;eip=0x000303; 	X(POP(ax));	// 118619 pop     ax ;~ 37EB:0303
loc_46794:
	// 10011 
cs=0x37eb;eip=0x000304; 	T(CMP(*(raddr(es,bx+0x28)), 0x90));	// 118622 cmp     byte ptr es:[bx+28h], 90h ; '' ;~ 37EB:0304
cs=0x37eb;eip=0x000309; 	J(JNZ(loc_4679e));	// 118623 jnz     short loc_4679E ;~ 37EB:0309
cs=0x37eb;eip=0x00030b; 	T(ADD(dx, *(dw*)(raddr(ds,di+0x1C))));	// 118624 add     dx, [di+1Ch] ;~ 37EB:030B
loc_4679e:
	// 10012 
cs=0x37eb;eip=0x00030e; 	T(CMP(*(raddr(es,bx+0x19)), 0x90));	// 118627 cmp     byte ptr es:[bx+19h], 90h ; '' ;~ 37EB:030E
cs=0x37eb;eip=0x000313; 	J(JNZ(loc_467a8));	// 118628 jnz     short loc_467A8 ;~ 37EB:0313
cs=0x37eb;eip=0x000315; 	T(ADD(dx, *(dw*)(raddr(ds,di+0x14))));	// 118629 add     dx, [di+14h] ;~ 37EB:0315
loc_467a8:
	// 10013 
cs=0x37eb;eip=0x000318; 	T(MOV(cx, *(dw*)(raddr(ds,si+0x26))));	// 118632 mov     cx, [si+26h] ;~ 37EB:0318
cs=0x37eb;eip=0x00031b; 	T(CMP(cx, 0));	// 118633 cmp     cx, 0 ;~ 37EB:031B
cs=0x37eb;eip=0x00031e; 	J(JLE(loc_467d1));	// 118634 jle     short loc_467D1 ;~ 37EB:031E
cs=0x37eb;eip=0x000320; 	X(PUSH(ax));	// 118635 push    ax ;~ 37EB:0320
cs=0x37eb;eip=0x000321; 	T(MOV(al, *(raddr(ds,di+3))));	// 118636 mov     al, [di+3] ;~ 37EB:0321
cs=0x37eb;eip=0x000324; 	T(MOV(ah, *(raddr(es,bx+0x12))));	// 118637 mov     ah, es:[bx+12h] ;~ 37EB:0324
cs=0x37eb;eip=0x000328; 	J(CALL(sub_46b89,0));	// 118638 call    sub_46B89 ;~ 37EB:0328
cs=0x37eb;eip=0x00032b; 	T(SUB(ax, dx));	// 118639 sub     ax, dx ;~ 37EB:032B
cs=0x37eb;eip=0x00032d; 	X(PUSH(dx));	// 118640 push    dx ;~ 37EB:032D
cs=0x37eb;eip=0x00032e; 	T(IMUL1_2(cx));	// 118641 imul    cx ;~ 37EB:032E
cs=0x37eb;eip=0x000330; 	T(MOV(cx, 5));	// 118642 mov     cx, 5 ;~ 37EB:0330
loc_467c3:
	// 10014 
cs=0x37eb;eip=0x000333; 	T(SAR(dx, 1));	// 118645 sar     dx, 1 ;~ 37EB:0333
cs=0x37eb;eip=0x000335; 	T(RCR(ax, 1));	// 118646 rcr     ax, 1 ;~ 37EB:0335
cs=0x37eb;eip=0x000337; 	J(LOOP(loc_467c3));	// 118647 loop    loc_467C3 ;~ 37EB:0337
cs=0x37eb;eip=0x000339; 	T(MOV(al, ah));	// 118648 mov     al, ah ;~ 37EB:0339
cs=0x37eb;eip=0x00033b; 	T(MOV(ah, dl));	// 118649 mov     ah, dl ;~ 37EB:033B
cs=0x37eb;eip=0x00033d; 	X(POP(dx));	// 118650 pop     dx ;~ 37EB:033D
cs=0x37eb;eip=0x00033e; 	T(ADD(dx, ax));	// 118651 add     dx, ax ;~ 37EB:033E
cs=0x37eb;eip=0x000340; 	X(POP(ax));	// 118652 pop     ax ;~ 37EB:0340
loc_467d1:
	// 10015 
cs=0x37eb;eip=0x000341; 	T(CMP(cx, 0));	// 118655 cmp     cx, 0 ;~ 37EB:0341
cs=0x37eb;eip=0x000344; 	J(JGE(loc_467fd));	// 118656 jge     short loc_467FD ;~ 37EB:0344
cs=0x37eb;eip=0x000346; 	T(NEG(cx));	// 118657 neg     cx ;~ 37EB:0346
cs=0x37eb;eip=0x000348; 	X(PUSH(ax));	// 118658 push    ax ;~ 37EB:0348
cs=0x37eb;eip=0x000349; 	T(MOV(al, *(raddr(ds,di+3))));	// 118659 mov     al, [di+3] ;~ 37EB:0349
cs=0x37eb;eip=0x00034c; 	T(MOV(ah, *(raddr(es,bx+0x12))));	// 118660 mov     ah, es:[bx+12h] ;~ 37EB:034C
cs=0x37eb;eip=0x000350; 	T(NEG(ah));	// 118661 neg     ah ;~ 37EB:0350
cs=0x37eb;eip=0x000352; 	J(CALL(sub_46b89,0));	// 118662 call    sub_46B89 ;~ 37EB:0352
cs=0x37eb;eip=0x000355; 	T(SUB(ax, dx));	// 118663 sub     ax, dx ;~ 37EB:0355
cs=0x37eb;eip=0x000357; 	T(NEG(ax));	// 118664 neg     ax ;~ 37EB:0357
cs=0x37eb;eip=0x000359; 	X(PUSH(dx));	// 118665 push    dx ;~ 37EB:0359
cs=0x37eb;eip=0x00035a; 	T(IMUL1_2(cx));	// 118666 imul    cx ;~ 37EB:035A
cs=0x37eb;eip=0x00035c; 	T(MOV(cx, 5));	// 118667 mov     cx, 5 ;~ 37EB:035C
loc_467ef:
	// 10016 
cs=0x37eb;eip=0x00035f; 	T(SAR(dx, 1));	// 118670 sar     dx, 1 ;~ 37EB:035F
cs=0x37eb;eip=0x000361; 	T(RCR(ax, 1));	// 118671 rcr     ax, 1 ;~ 37EB:0361
cs=0x37eb;eip=0x000363; 	J(LOOP(loc_467ef));	// 118672 loop    loc_467EF ;~ 37EB:0363
cs=0x37eb;eip=0x000365; 	T(MOV(al, ah));	// 118673 mov     al, ah ;~ 37EB:0365
cs=0x37eb;eip=0x000367; 	T(MOV(ah, dl));	// 118674 mov     ah, dl ;~ 37EB:0367
cs=0x37eb;eip=0x000369; 	X(POP(dx));	// 118675 pop     dx ;~ 37EB:0369
cs=0x37eb;eip=0x00036a; 	T(SUB(dx, ax));	// 118676 sub     dx, ax ;~ 37EB:036A
cs=0x37eb;eip=0x00036c; 	X(POP(ax));	// 118677 pop     ax ;~ 37EB:036C
loc_467fd:
	// 10017 
cs=0x37eb;eip=0x00036d; 	X(PUSH(ax));	// 118680 push    ax ;~ 37EB:036D
cs=0x37eb;eip=0x00036e; 	T(MOV(al, *(raddr(es,bx+0x11))));	// 118681 mov     al, es:[bx+11h] ;~ 37EB:036E
cs=0x37eb;eip=0x000372; 	T(CBW);	// 118682 cbw ;~ 37EB:0372
cs=0x37eb;eip=0x000373; 	T(ADD(dx, ax));	// 118683 add     dx, ax ;~ 37EB:0373
cs=0x37eb;eip=0x000375; 	X(MOV(*(dw*)(raddr(ds,di+6)), dx));	// 118684 mov     [di+6], dx ;~ 37EB:0375
cs=0x37eb;eip=0x000378; 	X(POP(ax));	// 118685 pop     ax ;~ 37EB:0378
cs=0x37eb;eip=0x000379; 	X(PUSH(ax));	// 118686 push    ax ;~ 37EB:0379
cs=0x37eb;eip=0x00037a; 	T(MOV(ah, al));	// 118687 mov     ah, al ;~ 37EB:037A
cs=0x37eb;eip=0x00037c; 	T(ADD(ah, 0x0A0));	// 118688 add     ah, 0A0h ; ' ' ;~ 37EB:037C
cs=0x37eb;eip=0x00037f; 	T(MOV(al, dl));	// 118689 mov     al, dl ;~ 37EB:037F
cs=0x37eb;eip=0x000381; 	J(CALL(sub_46c57,0));	// 118690 call    sub_46C57 ;~ 37EB:0381
cs=0x37eb;eip=0x000384; 	X(POP(ax));	// 118691 pop     ax ;~ 37EB:0384
cs=0x37eb;eip=0x000385; 	X(PUSH(ax));	// 118692 push    ax ;~ 37EB:0385
cs=0x37eb;eip=0x000386; 	T(MOV(ah, al));	// 118693 mov     ah, al ;~ 37EB:0386
cs=0x37eb;eip=0x000388; 	T(ADD(ah, 0x0B0));	// 118694 add     ah, 0B0h ; '°' ;~ 37EB:0388
cs=0x37eb;eip=0x00038b; 	T(MOV(al, 2));	// 118695 mov     al, 2 ;~ 37EB:038B
cs=0x37eb;eip=0x00038d; 	T(SUB(al, *(raddr(ds,di+1))));	// 118696 sub     al, [di+1] ;~ 37EB:038D
cs=0x37eb;eip=0x000390; 	T(MOV(cl, 5));	// 118697 mov     cl, 5 ;~ 37EB:0390
cs=0x37eb;eip=0x000392; 	T(SHL(al, cl));	// 118698 shl     al, cl ;~ 37EB:0392
cs=0x37eb;eip=0x000394; 	T(OR(al, dh));	// 118699 or      al, dh ;~ 37EB:0394
cs=0x37eb;eip=0x000396; 	J(CALL(sub_46c57,0));	// 118700 call    sub_46C57 ;~ 37EB:0396
cs=0x37eb;eip=0x000399; 	X(POP(ax));	// 118701 pop     ax ;~ 37EB:0399
cs=0x37eb;eip=0x00039a; 	T(XOR(cx, cx));	// 118702 xor     cx, cx ;~ 37EB:039A
cs=0x37eb;eip=0x00039c; 	T(XOR(dx, dx));	// 118703 xor     dx, dx ;~ 37EB:039C
cs=0x37eb;eip=0x00039e; 	T(MOV(cl, *(raddr(es,bx+0x35))));	// 118704 mov     cl, es:[bx+35h] ;~ 37EB:039E
cs=0x37eb;eip=0x0003a2; 	T(MOV(dl, *(raddr(ds,di+0x22))));	// 118705 mov     dl, [di+22h] ;~ 37EB:03A2
cs=0x37eb;eip=0x0003a5; 	J(CALL(sub_46b5b,0));	// 118706 call    sub_46B5B ;~ 37EB:03A5
cs=0x37eb;eip=0x0003a8; 	T(MOV(cl, *(raddr(es,bx+0x28))));	// 118707 mov     cl, es:[bx+28h] ;~ 37EB:03A8
cs=0x37eb;eip=0x0003ac; 	T(MOV(dx, *(dw*)(raddr(ds,di+0x1C))));	// 118708 mov     dx, [di+1Ch] ;~ 37EB:03AC
cs=0x37eb;eip=0x0003af; 	J(CALL(sub_46b5b,0));	// 118709 call    sub_46B5B ;~ 37EB:03AF
cs=0x37eb;eip=0x0003b2; 	T(MOV(cl, *(raddr(es,bx+0x19))));	// 118710 mov     cl, es:[bx+19h] ;~ 37EB:03B2
cs=0x37eb;eip=0x0003b6; 	T(MOV(dx, *(dw*)(raddr(ds,di+0x14))));	// 118711 mov     dx, [di+14h] ;~ 37EB:03B6
cs=0x37eb;eip=0x0003b9; 	J(CALL(sub_46b5b,0));	// 118712 call    sub_46B5B ;~ 37EB:03B9
cs=0x37eb;eip=0x0003bc; 	X(POP(si));	// 118713 pop     si ;~ 37EB:03BC
cs=0x37eb;eip=0x0003bd; 	X(POP(di));	// 118714 pop     di ;~ 37EB:03BD
cs=0x37eb;eip=0x0003be; 	X(POP(bp));	// 118715 pop     bp ;~ 37EB:03BE
cs=0x37eb;eip=0x0003bf; 	J(RETF(0));	// 118716 retf ;~ 37EB:03BF
loc_46850:
	// 10018 
cs=0x37eb;eip=0x0003c0; 	X(PUSH(bp));	// 118720 push    bp ;~ 37EB:03C0
cs=0x37eb;eip=0x0003c1; 	T(MOV(bp, sp));	// 118721 mov     bp, sp ;~ 37EB:03C1
cs=0x37eb;eip=0x0003c3; 	X(PUSH(di));	// 118722 push    di ;~ 37EB:03C3
cs=0x37eb;eip=0x0003c4; 	X(PUSH(si));	// 118723 push    si ;~ 37EB:03C4
cs=0x37eb;eip=0x0003c5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 118724 mov     ax, [bp+6] ;~ 37EB:03C5
cs=0x37eb;eip=0x0003c8; 	T(CMP(ax, 0));	// 118725 cmp     ax, 0 ;~ 37EB:03C8
cs=0x37eb;eip=0x0003cb; 	J(JNZ(loc_46861));	// 118726 jnz     short loc_46861 ;~ 37EB:03CB
cs=0x37eb;eip=0x0003cd; 	X(POP(si));	// 118727 pop     si ;~ 37EB:03CD
cs=0x37eb;eip=0x0003ce; 	X(POP(di));	// 118728 pop     di ;~ 37EB:03CE
cs=0x37eb;eip=0x0003cf; 	X(POP(bp));	// 118729 pop     bp ;~ 37EB:03CF
cs=0x37eb;eip=0x0003d0; 	J(RETF(0));	// 118730 retf ;~ 37EB:03D0
loc_46861:
	// 10019 
cs=0x37eb;eip=0x0003d1; 	T(DEC(ax));	// 118734 dec     ax ;~ 37EB:03D1
cs=0x37eb;eip=0x0003d2; 	T(MOV(si, *(dw*)(raddr(ss,bp+8))));	// 118735 mov     si, [bp+8] ;~ 37EB:03D2
cs=0x37eb;eip=0x0003d5; 	T(LES(bx, *(dw*)(raddr(ds,si+0x10))));	// 118736 les     bx, [si+10h] ;~ 37EB:03D5
cs=0x37eb;eip=0x0003d8; 	T(MOV(di, ax));	// 118737 mov     di, ax ;~ 37EB:03D8
cs=0x37eb;eip=0x0003da; 	T(MOV(cl, *(raddr(cs,di+0x974))));	// 118738 mov     cl, cs:[di+974h] ;~ 37EB:03DA
cs=0x37eb;eip=0x0003df; 	T(MOV(ch, *(raddr(ss,bp+0x0A))));	// 118739 mov     ch, [bp+0Ah] ;~ 37EB:03DF
cs=0x37eb;eip=0x0003e2; 	J(CALL(sub_46bc0,0));	// 118740 call    sub_46BC0 ;~ 37EB:03E2
cs=0x37eb;eip=0x0003e5; 	X(POP(si));	// 118741 pop     si ;~ 37EB:03E5
cs=0x37eb;eip=0x0003e6; 	X(POP(di));	// 118742 pop     di ;~ 37EB:03E6
cs=0x37eb;eip=0x0003e7; 	X(POP(bp));	// 118743 pop     bp ;~ 37EB:03E7
cs=0x37eb;eip=0x0003e8; 	J(RETF(0));	// 118744 retf ;~ 37EB:03E8
loc_46879:
	// 10020 
cs=0x37eb;eip=0x0003e9; 	X(PUSH(bp));	// 118748 push    bp ;~ 37EB:03E9
cs=0x37eb;eip=0x0003ea; 	T(MOV(bp, sp));	// 118749 mov     bp, sp ;~ 37EB:03EA
cs=0x37eb;eip=0x0003ec; 	T(MOV(al, *(raddr(ss,bp+8))));	// 118750 mov     al, [bp+8] ;~ 37EB:03EC
cs=0x37eb;eip=0x0003ef; 	T(XOR(ah, ah));	// 118751 xor     ah, ah ;~ 37EB:03EF
cs=0x37eb;eip=0x0003f1; 	J(CALL(sub_46b89,0));	// 118752 call    sub_46B89 ;~ 37EB:03F1
cs=0x37eb;eip=0x0003f4; 	T(MOV(dx, ax));	// 118753 mov     dx, ax ;~ 37EB:03F4
cs=0x37eb;eip=0x0003f6; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0A))));	// 118754 mov     cx, [bp+0Ah] ;~ 37EB:03F6
cs=0x37eb;eip=0x0003f9; 	T(CMP(cx, 0));	// 118755 cmp     cx, 0 ;~ 37EB:03F9
cs=0x37eb;eip=0x0003fc; 	J(JLE(loc_468ac));	// 118756 jle     short loc_468AC ;~ 37EB:03FC
cs=0x37eb;eip=0x0003fe; 	T(MOV(al, *(raddr(ss,bp+8))));	// 118757 mov     al, [bp+8] ;~ 37EB:03FE
cs=0x37eb;eip=0x000401; 	T(MOV(ah, *(raddr(ss,bp+0x0C))));	// 118758 mov     ah, [bp+0Ch] ;~ 37EB:0401
cs=0x37eb;eip=0x000404; 	J(CALL(sub_46b89,0));	// 118759 call    sub_46B89 ;~ 37EB:0404
cs=0x37eb;eip=0x000407; 	T(SUB(ax, dx));	// 118760 sub     ax, dx ;~ 37EB:0407
cs=0x37eb;eip=0x000409; 	X(PUSH(dx));	// 118761 push    dx ;~ 37EB:0409
cs=0x37eb;eip=0x00040a; 	T(IMUL1_2(cx));	// 118762 imul    cx ;~ 37EB:040A
cs=0x37eb;eip=0x00040c; 	T(MOV(cx, 5));	// 118763 mov     cx, 5 ;~ 37EB:040C
loc_4689f:
	// 10021 
cs=0x37eb;eip=0x00040f; 	T(SAR(dx, 1));	// 118766 sar     dx, 1 ;~ 37EB:040F
cs=0x37eb;eip=0x000411; 	T(RCR(ax, 1));	// 118767 rcr     ax, 1 ;~ 37EB:0411
cs=0x37eb;eip=0x000413; 	J(LOOP(loc_4689f));	// 118768 loop    loc_4689F ;~ 37EB:0413
cs=0x37eb;eip=0x000415; 	T(MOV(al, ah));	// 118769 mov     al, ah ;~ 37EB:0415
cs=0x37eb;eip=0x000417; 	T(MOV(ah, dl));	// 118770 mov     ah, dl ;~ 37EB:0417
cs=0x37eb;eip=0x000419; 	X(POP(dx));	// 118771 pop     dx ;~ 37EB:0419
cs=0x37eb;eip=0x00041a; 	T(ADD(dx, ax));	// 118772 add     dx, ax ;~ 37EB:041A
loc_468ac:
	// 10022 
cs=0x37eb;eip=0x00041c; 	T(CMP(cx, 0));	// 118775 cmp     cx, 0 ;~ 37EB:041C
cs=0x37eb;eip=0x00041f; 	J(JGE(loc_468d5));	// 118776 jge     short loc_468D5 ;~ 37EB:041F
cs=0x37eb;eip=0x000421; 	T(NEG(cx));	// 118777 neg     cx ;~ 37EB:0421
cs=0x37eb;eip=0x000423; 	T(MOV(al, *(raddr(ss,bp+8))));	// 118778 mov     al, [bp+8] ;~ 37EB:0423
cs=0x37eb;eip=0x000426; 	T(MOV(ah, *(raddr(ss,bp+0x0C))));	// 118779 mov     ah, [bp+0Ch] ;~ 37EB:0426
cs=0x37eb;eip=0x000429; 	T(NEG(ah));	// 118780 neg     ah ;~ 37EB:0429
cs=0x37eb;eip=0x00042b; 	J(CALL(sub_46b89,0));	// 118781 call    sub_46B89 ;~ 37EB:042B
cs=0x37eb;eip=0x00042e; 	T(SUB(ax, dx));	// 118782 sub     ax, dx ;~ 37EB:042E
cs=0x37eb;eip=0x000430; 	T(NEG(ax));	// 118783 neg     ax ;~ 37EB:0430
cs=0x37eb;eip=0x000432; 	X(PUSH(dx));	// 118784 push    dx ;~ 37EB:0432
cs=0x37eb;eip=0x000433; 	T(IMUL1_2(cx));	// 118785 imul    cx ;~ 37EB:0433
cs=0x37eb;eip=0x000435; 	T(MOV(cx, 5));	// 118786 mov     cx, 5 ;~ 37EB:0435
loc_468c8:
	// 10023 
cs=0x37eb;eip=0x000438; 	T(SAR(dx, 1));	// 118789 sar     dx, 1 ;~ 37EB:0438
cs=0x37eb;eip=0x00043a; 	T(RCR(ax, 1));	// 118790 rcr     ax, 1 ;~ 37EB:043A
cs=0x37eb;eip=0x00043c; 	J(LOOP(loc_468c8));	// 118791 loop    loc_468C8 ;~ 37EB:043C
cs=0x37eb;eip=0x00043e; 	T(MOV(al, ah));	// 118792 mov     al, ah ;~ 37EB:043E
cs=0x37eb;eip=0x000440; 	T(MOV(ah, dl));	// 118793 mov     ah, dl ;~ 37EB:0440
cs=0x37eb;eip=0x000442; 	X(POP(dx));	// 118794 pop     dx ;~ 37EB:0442
cs=0x37eb;eip=0x000443; 	T(SUB(dx, ax));	// 118795 sub     dx, ax ;~ 37EB:0443
loc_468d5:
	// 10024 
cs=0x37eb;eip=0x000445; 	T(MOV(ax, dx));	// 118798 mov     ax, dx ;~ 37EB:0445
cs=0x37eb;eip=0x000447; 	X(POP(bp));	// 118799 pop     bp ;~ 37EB:0447
cs=0x37eb;eip=0x000448; 	J(RETF(0));	// 118800 retf ;~ 37EB:0448
loc_468d9:
	// 10025 
cs=0x37eb;eip=0x000449; 	X(PUSH(bp));	// 118804 push    bp ;~ 37EB:0449
cs=0x37eb;eip=0x00044a; 	T(MOV(bp, sp));	// 118805 mov     bp, sp ;~ 37EB:044A
cs=0x37eb;eip=0x00044c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+8))));	// 118806 mov     bx, [bp+8] ;~ 37EB:044C
cs=0x37eb;eip=0x00044f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 118807 mov     ax, [bp+0Ah] ;~ 37EB:044F
cs=0x37eb;eip=0x000452; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 118808 mov     [bx+4], ax ;~ 37EB:0452
cs=0x37eb;eip=0x000455; 	X(POP(bp));	// 118809 pop     bp ;~ 37EB:0455
cs=0x37eb;eip=0x000456; 	J(RETF(0));	// 118810 retf ;~ 37EB:0456
loc_468e7:
	// 10026 
cs=0x37eb;eip=0x000457; 	X(PUSH(bp));	// 118814 push    bp ;~ 37EB:0457
cs=0x37eb;eip=0x000458; 	T(MOV(bp, sp));	// 118815 mov     bp, sp ;~ 37EB:0458
cs=0x37eb;eip=0x00045a; 	X(PUSH(di));	// 118816 push    di ;~ 37EB:045A
cs=0x37eb;eip=0x00045b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 118817 mov     ax, [bp+6] ;~ 37EB:045B
cs=0x37eb;eip=0x00045e; 	T(CMP(ax, 0));	// 118818 cmp     ax, 0 ;~ 37EB:045E
cs=0x37eb;eip=0x000461; 	J(JNZ(loc_46922));	// 118819 jnz     short loc_46922 ;~ 37EB:0461
cs=0x37eb;eip=0x000463; 	T(LES(bx, *(dw*)(raddr(ss,bp+8))));	// 118820 les     bx, [bp+8] ;~ 37EB:0463
cs=0x37eb;eip=0x000466; 	T(CMP(*(raddr(es,bx+5)), 1));	// 118821 cmp     byte ptr es:[bx+5], 1 ;~ 37EB:0466
cs=0x37eb;eip=0x00046b; 	J(JNZ(loc_46922));	// 118822 jnz     short loc_46922 ;~ 37EB:046B
cs=0x37eb;eip=0x00046d; 	T(CMP(*(raddr(es,bx+4)), 1));	// 118823 cmp     byte ptr es:[bx+4], 1 ;~ 37EB:046D
cs=0x37eb;eip=0x000472; 	J(JNZ(loc_46922));	// 118824 jnz     short loc_46922 ;~ 37EB:0472
cs=0x37eb;eip=0x000474; 	T(CMP(*(raddr(es,bx+6)), 1));	// 118825 cmp     byte ptr es:[bx+6], 1 ;~ 37EB:0474
cs=0x37eb;eip=0x000479; 	J(JNZ(loc_46922));	// 118826 jnz     short loc_46922 ;~ 37EB:0479
cs=0x37eb;eip=0x00047b; 	X(PUSH(ds));	// 118827 push    ds ;~ 37EB:047B
cs=0x37eb;eip=0x00047c; 	T(LDS(ax, *(dw*)(raddr(es,bx+8))));	// 118828 lds     ax, es:[bx+8] ;~ 37EB:047C
cs=0x37eb;eip=0x000480; 	T(MOV(dx, ds));	// 118829 mov     dx, ds ;~ 37EB:0480
cs=0x37eb;eip=0x000482; 	X(POP(ds));	// 118830 pop     ds ;~ 37EB:0482
cs=0x37eb;eip=0x000483; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0E))));	// 118831 mov     bx, [bp+0Eh] ;~ 37EB:0483
cs=0x37eb;eip=0x000486; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0C))));	// 118832 mov     cx, [bp+0Ch] ;~ 37EB:0486
cs=0x37eb;eip=0x000489; 	T(di = bx+0x32);	// 118833 lea     di, [bx+32h] ;~ 37EB:0489
cs=0x37eb;eip=0x00048c; 	J(CALL(sub_47154,0));	// 118834 call    sub_47154 ;~ 37EB:048C
cs=0x37eb;eip=0x00048f; 	J(CALL(sub_46f7a,0));	// 118835 call    sub_46F7A ;~ 37EB:048F
loc_46922:
	// 10027 
cs=0x37eb;eip=0x000492; 	X(POP(di));	// 118839 pop     di ;~ 37EB:0492
cs=0x37eb;eip=0x000493; 	X(POP(bp));	// 118840 pop     bp ;~ 37EB:0493
cs=0x37eb;eip=0x000494; 	J(RETF(0));	// 118841 retf ;~ 37EB:0494
loc_46925:
	// 10028 
cs=0x37eb;eip=0x000495; 	X(PUSH(bp));	// 118845 push    bp ;~ 37EB:0495
cs=0x37eb;eip=0x000496; 	T(MOV(bp, sp));	// 118846 mov     bp, sp ;~ 37EB:0496
cs=0x37eb;eip=0x000498; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 118847 mov     ax, [bp+6] ;~ 37EB:0498
cs=0x37eb;eip=0x00049b; 	T(CMP(ax, 0));	// 118848 cmp     ax, 0 ;~ 37EB:049B
cs=0x37eb;eip=0x00049e; 	J(JZ(loc_46932));	// 118849 jz      short loc_46932 ;~ 37EB:049E
cs=0x37eb;eip=0x0004a0; 	X(POP(bp));	// 118850 pop     bp ;~ 37EB:04A0
cs=0x37eb;eip=0x0004a1; 	J(RETF(0));	// 118851 retf ;~ 37EB:04A1
loc_46932:
	// 10029 
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x0004a2; 	T(MOV(ax, *(dw*)(((db*)&word_47177))));	// 118855 mov     ax, cs:word_47177 ;~ 37EB:04A2
cs=0x37eb;eip=0x0004a6; 	X(POP(bp));	// 118856 pop     bp ;~ 37EB:04A6
cs=0x37eb;eip=0x0004a7; 	J(RETF(0));	// 118857 retf ;~ 37EB:04A7
loc_46938:
	// 10030 
cs=0x37eb;eip=0x0004a8; 	X(PUSH(bp));	// 118861 push    bp ;~ 37EB:04A8
cs=0x37eb;eip=0x0004a9; 	T(MOV(bp, sp));	// 118862 mov     bp, sp ;~ 37EB:04A9
cs=0x37eb;eip=0x0004ab; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 118863 mov     ax, [bp+6] ;~ 37EB:04AB
cs=0x37eb;eip=0x0004ae; 	T(CMP(ax, 0));	// 118864 cmp     ax, 0 ;~ 37EB:04AE
cs=0x37eb;eip=0x0004b1; 	J(JNZ(loc_46945));	// 118865 jnz     short loc_46945 ;~ 37EB:04B1
cs=0x37eb;eip=0x0004b3; 	X(POP(bp));	// 118866 pop     bp ;~ 37EB:04B3
cs=0x37eb;eip=0x0004b4; 	J(RETF(0));	// 118867 retf ;~ 37EB:04B4
loc_46945:
	// 10031 
cs=0x37eb;eip=0x0004b5; 	T(MOV(ax, 0));	// 118871 mov     ax, 0 ;~ 37EB:04B5
cs=0x37eb;eip=0x0004b8; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x0A))));	// 118872 mov     dx, [bp+0Ah] ;~ 37EB:04B8
cs=0x37eb;eip=0x0004bb; 	T(MOV(cx, 0));	// 118873 mov     cx, 0 ;~ 37EB:04BB
loc_4694e:
	// 10032 
cs=0x37eb;eip=0x0004be; 	T(CMP(dx, 0x185));	// 118876 cmp     dx, 185h ;~ 37EB:04BE
cs=0x37eb;eip=0x0004c2; 	J(JBE(loc_4695b));	// 118877 jbe     short loc_4695B ;~ 37EB:04C2
cs=0x37eb;eip=0x0004c4; 	T(SHR(dx, 1));	// 118878 shr     dx, 1 ;~ 37EB:04C4
cs=0x37eb;eip=0x0004c6; 	T(RCR(ax, 1));	// 118879 rcr     ax, 1 ;~ 37EB:04C6
cs=0x37eb;eip=0x0004c8; 	T(INC(cx));	// 118880 inc     cx ;~ 37EB:04C8
cs=0x37eb;eip=0x0004c9; 	J(JMP(loc_4694e));	// 118881 jmp     short loc_4694E ;~ 37EB:04C9
loc_4695b:
	// 10033 
cs=0x37eb;eip=0x0004cb; 	J(JC(loc_46969));	// 118886 jb      short loc_46969 ;~ 37EB:04CB
cs=0x37eb;eip=0x0004cd; 	T(CMP(ax, 0x0DCB0));	// 118887 cmp     ax, 0DCB0h ;~ 37EB:04CD
cs=0x37eb;eip=0x0004d0; 	J(JBE(loc_46969));	// 118888 jbe     short loc_46969 ;~ 37EB:04D0
cs=0x37eb;eip=0x0004d2; 	T(SHR(dx, 1));	// 118889 shr     dx, 1 ;~ 37EB:04D2
cs=0x37eb;eip=0x0004d4; 	T(RCR(ax, 1));	// 118890 rcr     ax, 1 ;~ 37EB:04D4
cs=0x37eb;eip=0x0004d6; 	T(INC(cx));	// 118891 inc     cx ;~ 37EB:04D6
cs=0x37eb;eip=0x0004d7; 	J(JMP(loc_4695b));	// 118892 jmp     short loc_4695B ;~ 37EB:04D7
loc_46969:
	// 10034 
cs=0x37eb;eip=0x0004d9; 	T(MOV(bx, cx));	// 118897 mov     bx, cx ;~ 37EB:04D9
cs=0x37eb;eip=0x0004db; 	T(MOV(cx, 0x0C350));	// 118898 mov     cx, 0C350h ;~ 37EB:04DB
cs=0x37eb;eip=0x0004de; 	T(DIV2(cx));	// 118899 div     cx ;~ 37EB:04DE
cs=0x37eb;eip=0x0004e0; 	T(MOV(cx, 2));	// 118900 mov     cx, 2 ;~ 37EB:04E0
cs=0x37eb;eip=0x0004e3; 	T(SHL(bl, cl));	// 118901 shl     bl, cl ;~ 37EB:04E3
cs=0x37eb;eip=0x0004e5; 	T(OR(ah, bl));	// 118902 or      ah, bl ;~ 37EB:04E5
cs=0x37eb;eip=0x0004e7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+8))));	// 118903 mov     bx, [bp+8] ;~ 37EB:04E7
cs=0x37eb;eip=0x0004ea; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 118904 mov     [bx+4], ax ;~ 37EB:04EA
cs=0x37eb;eip=0x0004ed; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 118905 mov     [bx+6], ax ;~ 37EB:04ED
cs=0x37eb;eip=0x0004f0; 	X(POP(bp));	// 118906 pop     bp ;~ 37EB:04F0
cs=0x37eb;eip=0x0004f1; 	J(RETF(0));	// 118907 retf ;~ 37EB:04F1
loc_46982:
	// 10035 
cs=0x37eb;eip=0x0004f2; 	T(MOV(ax, 0x0FFFF));	// 118912 mov     ax, 0FFFFh ;~ 37EB:04F2
cs=0x37eb;eip=0x0004f5; 	J(RETF(0));	// 118913 retf ;~ 37EB:04F5

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_464eb: 	goto loc_464eb;
        case m2c::kloc_464ee: 	goto loc_464ee;
        case m2c::kloc_464fb: 	goto loc_464fb;
        case m2c::kloc_4650c: 	goto loc_4650c;
        case m2c::kloc_46563: 	goto loc_46563;
        case m2c::kloc_46572: 	goto loc_46572;
        case m2c::kloc_46581: 	goto loc_46581;
        case m2c::kloc_46585: 	goto loc_46585;
        case m2c::kloc_46595: 	goto loc_46595;
        case m2c::kloc_4659b: 	goto loc_4659b;
        case m2c::kloc_465f8: 	goto loc_465f8;
        case m2c::kloc_465fc: 	goto loc_465fc;
        case m2c::kloc_4661a: 	goto loc_4661a;
        case m2c::kloc_4666e: 	goto loc_4666e;
        case m2c::kloc_4667f: 	goto loc_4667f;
        case m2c::kloc_4668c: 	goto loc_4668c;
        case m2c::kloc_466a3: 	goto loc_466a3;
        case m2c::kloc_466b5: 	goto loc_466b5;
        case m2c::kloc_466e0: 	goto loc_466e0;
        case m2c::kloc_466f2: 	goto loc_466f2;
        case m2c::kloc_466fe: 	goto loc_466fe;
        case m2c::kloc_4671c: 	goto loc_4671c;
        case m2c::kloc_46732: 	goto loc_46732;
        case m2c::kloc_46742: 	goto loc_46742;
        case m2c::kloc_46752: 	goto loc_46752;
        case m2c::kloc_46756: 	goto loc_46756;
        case m2c::kloc_46767: 	goto loc_46767;
        case m2c::kloc_4677b: 	goto loc_4677b;
        case m2c::kloc_46794: 	goto loc_46794;
        case m2c::kloc_4679e: 	goto loc_4679e;
        case m2c::kloc_467a8: 	goto loc_467a8;
        case m2c::kloc_467c3: 	goto loc_467c3;
        case m2c::kloc_467d1: 	goto loc_467d1;
        case m2c::kloc_467ef: 	goto loc_467ef;
        case m2c::kloc_467fd: 	goto loc_467fd;
        case m2c::kloc_46850: 	goto loc_46850;
        case m2c::kloc_46861: 	goto loc_46861;
        case m2c::kloc_46879: 	goto loc_46879;
        case m2c::kloc_4689f: 	goto loc_4689f;
        case m2c::kloc_468ac: 	goto loc_468ac;
        case m2c::kloc_468c8: 	goto loc_468c8;
        case m2c::kloc_468d5: 	goto loc_468d5;
        case m2c::kloc_468d9: 	goto loc_468d9;
        case m2c::kloc_468e7: 	goto loc_468e7;
        case m2c::kloc_46922: 	goto loc_46922;
        case m2c::kloc_46925: 	goto loc_46925;
        case m2c::kloc_46932: 	goto loc_46932;
        case m2c::kloc_46938: 	goto loc_46938;
        case m2c::kloc_46945: 	goto loc_46945;
        case m2c::kloc_4694e: 	goto loc_4694e;
        case m2c::kloc_4695b: 	goto loc_4695b;
        case m2c::kloc_46969: 	goto loc_46969;
        case m2c::kloc_46982: 	goto loc_46982;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_46986(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_46986:
    _begin:
cs=0x37eb;eip=0x0004f6; 	X(PUSH(ax));	// 118920 push    ax ;~ 37EB:04F6
cs=0x37eb;eip=0x0004f7; 	X(PUSH(cx));	// 118921 push    cx ;~ 37EB:04F7
cs=0x37eb;eip=0x0004f8; 	T(NEG(ax));	// 118922 neg     ax ;~ 37EB:04F8
cs=0x37eb;eip=0x0004fa; 	T(ADD(ax, 0x0FFFF));	// 118923 add     ax, 0FFFFh ;~ 37EB:04FA
cs=0x37eb;eip=0x0004fd; 	T(MOV(cx, ax));	// 118924 mov     cx, ax ;~ 37EB:04FD
cs=0x37eb;eip=0x0004ff; 	T(MOV(al, 0x0B6));	// 118925 mov     al, 0B6h ; '¶' ;~ 37EB:04FF
cs=0x37eb;eip=0x000501; 	S(OUT(0x43, al));	// 118926 out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0501
cs=0x37eb;eip=0x000503; 	T(MOV(al, 0x0FF));	// 118927 mov     al, 0FFh ;~ 37EB:0503
cs=0x37eb;eip=0x000505; 	S(OUT(0x42, al));	// 118928 out     42h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0505
cs=0x37eb;eip=0x000507; 	S(OUT(0x42, al));	// 118929 out     42h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0507
cs=0x37eb;eip=0x000509; 	S(IN(al, 0x61));	// 118930 in      al, 61h         ; PC/XT PPI port B bits: ;~ 37EB:0509
cs=0x37eb;eip=0x00050b; 	T(OR(al, 1));	// 118938 or      al, 1 ;~ 37EB:050B
cs=0x37eb;eip=0x00050d; 	S(OUT(0x61, al));	// 118939 out     61h, al         ; PC/XT PPI port B bits: ;~ 37EB:050D
loc_4699f:
	// 10036 
cs=0x37eb;eip=0x00050f; 	T(MOV(al, 0x80));	// 118949 mov     al, 80h ; '€' ;~ 37EB:050F
cs=0x37eb;eip=0x000511; 	S(OUT(0x43, al));	// 118950 out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0511
cs=0x37eb;eip=0x000513; 	S(IN(al, 0x42));	// 118951 in      al, 42h         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0513
cs=0x37eb;eip=0x000515; 	T(XCHG(al, ah));	// 118952 xchg    al, ah ;~ 37EB:0515
cs=0x37eb;eip=0x000517; 	S(IN(al, 0x42));	// 118953 in      al, 42h         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0517
cs=0x37eb;eip=0x000519; 	T(XCHG(al, ah));	// 118954 xchg    al, ah ;~ 37EB:0519
cs=0x37eb;eip=0x00051b; 	T(CMP(ax, cx));	// 118955 cmp     ax, cx ;~ 37EB:051B
//printf("Wait %x %x\n",ax,cx);
//cs=0x37eb;eip=0x00051d; 	J(JNC(loc_4699f));	// 118956 jnb     short loc_4699F ;~ 37EB:051D
cs=0x37eb;eip=0x00051f; 	S(IN(al, 0x61));	// 118957 in      al, 61h         ; PC/XT PPI port B bits: ;~ 37EB:051F
cs=0x37eb;eip=0x000521; 	T(AND(al, 0x0FE));	// 118965 and     al, 0FEh ;~ 37EB:0521
cs=0x37eb;eip=0x000523; 	S(OUT(0x61, al));	// 118966 out     61h, al         ; PC/XT PPI port B bits: ;~ 37EB:0523
cs=0x37eb;eip=0x000525; 	X(POP(cx));	// 118974 pop     cx ;~ 37EB:0525
cs=0x37eb;eip=0x000526; 	X(POP(ax));	// 118975 pop     ax ;~ 37EB:0526
cs=0x37eb;eip=0x000527; 	J(RETN(0));	// 118976 retn ;~ 37EB:0527

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_4699f: 	goto loc_4699f;
        case m2c::ksub_46986: 	goto sub_46986;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_469b8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_469b8:
    _begin:
cs=0x37eb;eip=0x000528; 	X(PUSH(si));	// 118985 push    si ;~ 37EB:0528
cs=0x37eb;eip=0x000529; 	X(PUSH(ax));	// 118986 push    ax ;~ 37EB:0529
cs=0x37eb;eip=0x00052a; 	T(SHL(ax, 1));	// 118987 shl     ax, 1 ;~ 37EB:052A
cs=0x37eb;eip=0x00052c; 	T(MOV(si, ax));	// 118988 mov     si, ax ;~ 37EB:052C
cs=0x37eb;eip=0x00052e; 	T(MOV(ah, *(raddr(cs,si+0x870))));	// 118989 mov     ah, cs:[si+870h] ;~ 37EB:052E
cs=0x37eb;eip=0x000533; 	T(ADD(ah, 0x40));	// 118990 add     ah, 40h ; '@' ;~ 37EB:0533
cs=0x37eb;eip=0x000536; 	T(MOV(al, 0x3F));	// 118991 mov     al, 3Fh ; '?' ;~ 37EB:0536
cs=0x37eb;eip=0x000538; 	J(CALL(sub_46c57,0));	// 118992 call    sub_46C57 ;~ 37EB:0538
cs=0x37eb;eip=0x00053b; 	X(POP(ax));	// 118993 pop     ax ;~ 37EB:053B
cs=0x37eb;eip=0x00053c; 	X(PUSH(ax));	// 118994 push    ax ;~ 37EB:053C
cs=0x37eb;eip=0x00053d; 	T(SHL(ax, 1));	// 118995 shl     ax, 1 ;~ 37EB:053D
cs=0x37eb;eip=0x00053f; 	T(INC(ax));	// 118996 inc     ax ;~ 37EB:053F
cs=0x37eb;eip=0x000540; 	T(MOV(si, ax));	// 118997 mov     si, ax ;~ 37EB:0540
cs=0x37eb;eip=0x000542; 	T(MOV(ah, *(raddr(cs,si+0x870))));	// 118998 mov     ah, cs:[si+870h] ;~ 37EB:0542
cs=0x37eb;eip=0x000547; 	T(ADD(ah, 0x40));	// 118999 add     ah, 40h ; '@' ;~ 37EB:0547
cs=0x37eb;eip=0x00054a; 	T(MOV(al, 0x3F));	// 119000 mov     al, 3Fh ; '?' ;~ 37EB:054A
cs=0x37eb;eip=0x00054c; 	J(CALL(sub_46c57,0));	// 119001 call    sub_46C57 ;~ 37EB:054C
cs=0x37eb;eip=0x00054f; 	X(POP(ax));	// 119002 pop     ax ;~ 37EB:054F
cs=0x37eb;eip=0x000550; 	X(PUSH(ax));	// 119003 push    ax ;~ 37EB:0550
cs=0x37eb;eip=0x000551; 	T(SHL(ax, 1));	// 119004 shl     ax, 1 ;~ 37EB:0551
cs=0x37eb;eip=0x000553; 	T(MOV(si, ax));	// 119005 mov     si, ax ;~ 37EB:0553
cs=0x37eb;eip=0x000555; 	T(MOV(ah, *(raddr(cs,si+0x870))));	// 119006 mov     ah, cs:[si+870h] ;~ 37EB:0555
cs=0x37eb;eip=0x00055a; 	T(ADD(ah, 0x80));	// 119007 add     ah, 80h ; '€' ;~ 37EB:055A
cs=0x37eb;eip=0x00055d; 	T(MOV(al, 0x0A));	// 119008 mov     al, 0Ah ;~ 37EB:055D
cs=0x37eb;eip=0x00055f; 	J(CALL(sub_46c57,0));	// 119009 call    sub_46C57 ;~ 37EB:055F
cs=0x37eb;eip=0x000562; 	X(POP(ax));	// 119010 pop     ax ;~ 37EB:0562
cs=0x37eb;eip=0x000563; 	X(PUSH(ax));	// 119011 push    ax ;~ 37EB:0563
cs=0x37eb;eip=0x000564; 	T(SHL(ax, 1));	// 119012 shl     ax, 1 ;~ 37EB:0564
cs=0x37eb;eip=0x000566; 	T(INC(ax));	// 119013 inc     ax ;~ 37EB:0566
cs=0x37eb;eip=0x000567; 	T(MOV(si, ax));	// 119014 mov     si, ax ;~ 37EB:0567
cs=0x37eb;eip=0x000569; 	T(MOV(ah, *(raddr(cs,si+0x870))));	// 119015 mov     ah, cs:[si+870h] ;~ 37EB:0569
cs=0x37eb;eip=0x00056e; 	T(ADD(ah, 0x80));	// 119016 add     ah, 80h ; '€' ;~ 37EB:056E
cs=0x37eb;eip=0x000571; 	T(MOV(al, 0x0A));	// 119017 mov     al, 0Ah ;~ 37EB:0571
cs=0x37eb;eip=0x000573; 	J(CALL(sub_46c57,0));	// 119018 call    sub_46C57 ;~ 37EB:0573
cs=0x37eb;eip=0x000576; 	X(POP(ax));	// 119019 pop     ax ;~ 37EB:0576
cs=0x37eb;eip=0x000577; 	X(PUSH(ax));	// 119020 push    ax ;~ 37EB:0577
cs=0x37eb;eip=0x000578; 	T(MOV(ah, al));	// 119021 mov     ah, al ;~ 37EB:0578
cs=0x37eb;eip=0x00057a; 	T(ADD(ah, 0x0B0));	// 119022 add     ah, 0B0h ; '°' ;~ 37EB:057A
cs=0x37eb;eip=0x00057d; 	T(MOV(al, 1));	// 119023 mov     al, 1 ;~ 37EB:057D
cs=0x37eb;eip=0x00057f; 	J(CALL(sub_46c57,0));	// 119024 call    sub_46C57 ;~ 37EB:057F
cs=0x37eb;eip=0x000582; 	X(POP(ax));	// 119025 pop     ax ;~ 37EB:0582
cs=0x37eb;eip=0x000583; 	X(POP(si));	// 119026 pop     si ;~ 37EB:0583
cs=0x37eb;eip=0x000584; 	J(RETN(0));	// 119027 retn ;~ 37EB:0584

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_469b8: 	goto sub_469b8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_46a15(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_46a15:
    _begin:
cs=0x37eb;eip=0x000585; 	X(PUSH(cx));	// 119036 push    cx ;~ 37EB:0585
cs=0x37eb;eip=0x000586; 	X(PUSH(ax));	// 119037 push    ax ;~ 37EB:0586
cs=0x37eb;eip=0x000587; 	T(ADD(ah, 0x20));	// 119038 add     ah, 20h ; ' ' ;~ 37EB:0587
cs=0x37eb;eip=0x00058a; 	T(MOV(al, *(raddr(es,bx+0x0A))));	// 119039 mov     al, es:[bx+0Ah] ;~ 37EB:058A
cs=0x37eb;eip=0x00058e; 	T(MOV(cl, 1));	// 119040 mov     cl, 1 ;~ 37EB:058E
cs=0x37eb;eip=0x000590; 	T(SHL(al, cl));	// 119041 shl     al, cl ;~ 37EB:0590
cs=0x37eb;eip=0x000592; 	T(OR(al, *(raddr(es,bx+9))));	// 119042 or      al, es:[bx+9] ;~ 37EB:0592
cs=0x37eb;eip=0x000596; 	T(MOV(cl, 1));	// 119043 mov     cl, 1 ;~ 37EB:0596
cs=0x37eb;eip=0x000598; 	T(SHL(al, cl));	// 119044 shl     al, cl ;~ 37EB:0598
cs=0x37eb;eip=0x00059a; 	T(OR(al, *(raddr(es,bx+8))));	// 119045 or      al, es:[bx+8] ;~ 37EB:059A
cs=0x37eb;eip=0x00059e; 	T(MOV(cl, 1));	// 119046 mov     cl, 1 ;~ 37EB:059E
cs=0x37eb;eip=0x0005a0; 	T(SHL(al, cl));	// 119047 shl     al, cl ;~ 37EB:05A0
cs=0x37eb;eip=0x0005a2; 	T(OR(al, *(raddr(es,bx+7))));	// 119048 or      al, es:[bx+7] ;~ 37EB:05A2
cs=0x37eb;eip=0x0005a6; 	T(MOV(cl, 4));	// 119049 mov     cl, 4 ;~ 37EB:05A6
cs=0x37eb;eip=0x0005a8; 	T(SHL(al, cl));	// 119050 shl     al, cl ;~ 37EB:05A8
cs=0x37eb;eip=0x0005aa; 	T(OR(al, *(raddr(es,bx+6))));	// 119051 or      al, es:[bx+6] ;~ 37EB:05AA
cs=0x37eb;eip=0x0005ae; 	J(CALL(sub_46c57,0));	// 119052 call    sub_46C57 ;~ 37EB:05AE
cs=0x37eb;eip=0x0005b1; 	X(POP(ax));	// 119053 pop     ax ;~ 37EB:05B1
cs=0x37eb;eip=0x0005b2; 	X(PUSH(ax));	// 119054 push    ax ;~ 37EB:05B2
cs=0x37eb;eip=0x0005b3; 	T(ADD(ah, 0x40));	// 119055 add     ah, 40h ; '@' ;~ 37EB:05B3
cs=0x37eb;eip=0x0005b6; 	T(MOV(al, *(raddr(es,bx+5))));	// 119056 mov     al, es:[bx+5] ;~ 37EB:05B6
cs=0x37eb;eip=0x0005ba; 	T(MOV(cl, 6));	// 119057 mov     cl, 6 ;~ 37EB:05BA
cs=0x37eb;eip=0x0005bc; 	T(SHL(al, cl));	// 119058 shl     al, cl ;~ 37EB:05BC
cs=0x37eb;eip=0x0005be; 	T(OR(al, *(raddr(es,bx+4))));	// 119059 or      al, es:[bx+4] ;~ 37EB:05BE
cs=0x37eb;eip=0x0005c2; 	J(CALL(sub_46c57,0));	// 119060 call    sub_46C57 ;~ 37EB:05C2
cs=0x37eb;eip=0x0005c5; 	X(POP(ax));	// 119061 pop     ax ;~ 37EB:05C5
cs=0x37eb;eip=0x0005c6; 	X(PUSH(ax));	// 119062 push    ax ;~ 37EB:05C6
cs=0x37eb;eip=0x0005c7; 	T(ADD(ah, 0x60));	// 119063 add     ah, 60h ; '`' ;~ 37EB:05C7
cs=0x37eb;eip=0x0005ca; 	T(MOV(al, *(raddr(es,bx))));	// 119064 mov     al, es:[bx] ;~ 37EB:05CA
cs=0x37eb;eip=0x0005cd; 	T(MOV(cl, 4));	// 119065 mov     cl, 4 ;~ 37EB:05CD
cs=0x37eb;eip=0x0005cf; 	T(SHL(al, cl));	// 119066 shl     al, cl ;~ 37EB:05CF
cs=0x37eb;eip=0x0005d1; 	T(OR(al, *(raddr(es,bx+1))));	// 119067 or      al, es:[bx+1] ;~ 37EB:05D1
cs=0x37eb;eip=0x0005d5; 	J(CALL(sub_46c57,0));	// 119068 call    sub_46C57 ;~ 37EB:05D5
cs=0x37eb;eip=0x0005d8; 	X(POP(ax));	// 119069 pop     ax ;~ 37EB:05D8
cs=0x37eb;eip=0x0005d9; 	X(PUSH(ax));	// 119070 push    ax ;~ 37EB:05D9
cs=0x37eb;eip=0x0005da; 	T(ADD(ah, 0x80));	// 119071 add     ah, 80h ; '€' ;~ 37EB:05DA
cs=0x37eb;eip=0x0005dd; 	T(MOV(al, *(raddr(es,bx+2))));	// 119072 mov     al, es:[bx+2] ;~ 37EB:05DD
cs=0x37eb;eip=0x0005e1; 	T(MOV(cl, 4));	// 119073 mov     cl, 4 ;~ 37EB:05E1
cs=0x37eb;eip=0x0005e3; 	T(SHL(al, cl));	// 119074 shl     al, cl ;~ 37EB:05E3
cs=0x37eb;eip=0x0005e5; 	T(OR(al, *(raddr(es,bx+3))));	// 119075 or      al, es:[bx+3] ;~ 37EB:05E5
cs=0x37eb;eip=0x0005e9; 	J(CALL(sub_46c57,0));	// 119076 call    sub_46C57 ;~ 37EB:05E9
cs=0x37eb;eip=0x0005ec; 	X(POP(ax));	// 119077 pop     ax ;~ 37EB:05EC
cs=0x37eb;eip=0x0005ed; 	X(PUSH(ax));	// 119078 push    ax ;~ 37EB:05ED
cs=0x37eb;eip=0x0005ee; 	T(ADD(ah, 0x0E0));	// 119079 add     ah, 0E0h ; 'à' ;~ 37EB:05EE
cs=0x37eb;eip=0x0005f1; 	T(MOV(al, *(raddr(es,bx+0x0B))));	// 119080 mov     al, es:[bx+0Bh] ;~ 37EB:05F1
cs=0x37eb;eip=0x0005f5; 	J(CALL(sub_46c57,0));	// 119081 call    sub_46C57 ;~ 37EB:05F5
cs=0x37eb;eip=0x0005f8; 	X(POP(ax));	// 119082 pop     ax ;~ 37EB:05F8
cs=0x37eb;eip=0x0005f9; 	X(POP(cx));	// 119083 pop     cx ;~ 37EB:05F9
cs=0x37eb;eip=0x0005fa; 	J(RETN(0));	// 119084 retn ;~ 37EB:05FA

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_46a15: 	goto sub_46a15;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_46a8b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_46a8b:
    _begin:
cs=0x37eb;eip=0x0005fb; 	X(PUSH(ax));	// 119093 push    ax ;~ 37EB:05FB
cs=0x37eb;eip=0x0005fc; 	X(PUSH(cx));	// 119094 push    cx ;~ 37EB:05FC
cs=0x37eb;eip=0x0005fd; 	X(PUSH(dx));	// 119095 push    dx ;~ 37EB:05FD
cs=0x37eb;eip=0x0005fe; 	T(ADD(ah, 0x20));	// 119096 add     ah, 20h ; ' ' ;~ 37EB:05FE
cs=0x37eb;eip=0x000601; 	T(MOV(al, *(raddr(es,bx+0x0A))));	// 119097 mov     al, es:[bx+0Ah] ;~ 37EB:0601
cs=0x37eb;eip=0x000605; 	T(MOV(cl, 1));	// 119098 mov     cl, 1 ;~ 37EB:0605
cs=0x37eb;eip=0x000607; 	T(SHL(al, cl));	// 119099 shl     al, cl ;~ 37EB:0607
cs=0x37eb;eip=0x000609; 	T(OR(al, *(raddr(es,bx+9))));	// 119100 or      al, es:[bx+9] ;~ 37EB:0609
cs=0x37eb;eip=0x00060d; 	T(MOV(cl, 1));	// 119101 mov     cl, 1 ;~ 37EB:060D
cs=0x37eb;eip=0x00060f; 	T(SHL(al, cl));	// 119102 shl     al, cl ;~ 37EB:060F
cs=0x37eb;eip=0x000611; 	T(OR(al, *(raddr(es,bx+8))));	// 119103 or      al, es:[bx+8] ;~ 37EB:0611
cs=0x37eb;eip=0x000615; 	T(MOV(cl, 1));	// 119104 mov     cl, 1 ;~ 37EB:0615
cs=0x37eb;eip=0x000617; 	T(SHL(al, cl));	// 119105 shl     al, cl ;~ 37EB:0617
cs=0x37eb;eip=0x000619; 	T(OR(al, *(raddr(es,bx+7))));	// 119106 or      al, es:[bx+7] ;~ 37EB:0619
cs=0x37eb;eip=0x00061d; 	T(MOV(cl, 4));	// 119107 mov     cl, 4 ;~ 37EB:061D
cs=0x37eb;eip=0x00061f; 	T(SHL(al, cl));	// 119108 shl     al, cl ;~ 37EB:061F
cs=0x37eb;eip=0x000621; 	T(MOV(cl, 3));	// 119109 mov     cl, 3 ;~ 37EB:0621
cs=0x37eb;eip=0x000623; 	T(SHR(dl, cl));	// 119110 shr     dl, cl ;~ 37EB:0623
cs=0x37eb;eip=0x000625; 	T(AND(dl, 7));	// 119111 and     dl, 7 ;~ 37EB:0625
cs=0x37eb;eip=0x000628; 	T(OR(al, dl));	// 119112 or      al, dl ;~ 37EB:0628
cs=0x37eb;eip=0x00062a; 	J(CALL(sub_46c57,0));	// 119113 call    sub_46C57 ;~ 37EB:062A
cs=0x37eb;eip=0x00062d; 	X(POP(dx));	// 119114 pop     dx ;~ 37EB:062D
cs=0x37eb;eip=0x00062e; 	X(POP(cx));	// 119115 pop     cx ;~ 37EB:062E
cs=0x37eb;eip=0x00062f; 	X(POP(ax));	// 119116 pop     ax ;~ 37EB:062F
cs=0x37eb;eip=0x000630; 	J(RETN(0));	// 119117 retn ;~ 37EB:0630

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_46a8b: 	goto sub_46a8b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_46ac1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_46ac1:
    _begin:
cs=0x37eb;eip=0x000631; 	X(PUSH(ax));	// 119126 push    ax ;~ 37EB:0631
cs=0x37eb;eip=0x000632; 	X(PUSH(bx));	// 119127 push    bx ;~ 37EB:0632
cs=0x37eb;eip=0x000633; 	X(PUSH(si));	// 119128 push    si ;~ 37EB:0633
cs=0x37eb;eip=0x000634; 	T(SHL(ax, 1));	// 119129 shl     ax, 1 ;~ 37EB:0634
cs=0x37eb;eip=0x000636; 	T(MOV(si, ax));	// 119130 mov     si, ax ;~ 37EB:0636
cs=0x37eb;eip=0x000638; 	T(MOV(ah, *(raddr(cs,si+0x870))));	// 119131 mov     ah, cs:[si+870h] ;~ 37EB:0638
cs=0x37eb;eip=0x00063d; 	T(ADD(bx, 0x46));	// 119132 add     bx, 46h ; 'F' ;~ 37EB:063D
cs=0x37eb;eip=0x000640; 	J(CALL(sub_46a8b,0));	// 119133 call    sub_46A8B ;~ 37EB:0640
cs=0x37eb;eip=0x000643; 	X(POP(si));	// 119134 pop     si ;~ 37EB:0643
cs=0x37eb;eip=0x000644; 	X(POP(bx));	// 119135 pop     bx ;~ 37EB:0644
cs=0x37eb;eip=0x000645; 	X(POP(ax));	// 119136 pop     ax ;~ 37EB:0645
cs=0x37eb;eip=0x000646; 	J(RETN(0));	// 119137 retn ;~ 37EB:0646

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_46ac1: 	goto sub_46ac1;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_46ad7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_46ad7:
    _begin:
cs=0x37eb;eip=0x000647; 	X(PUSH(ax));	// 119146 push    ax ;~ 37EB:0647
cs=0x37eb;eip=0x000648; 	X(PUSH(bx));	// 119147 push    bx ;~ 37EB:0648
cs=0x37eb;eip=0x000649; 	X(PUSH(si));	// 119148 push    si ;~ 37EB:0649
cs=0x37eb;eip=0x00064a; 	T(SHL(ax, 1));	// 119149 shl     ax, 1 ;~ 37EB:064A
cs=0x37eb;eip=0x00064c; 	T(INC(ax));	// 119150 inc     ax ;~ 37EB:064C
cs=0x37eb;eip=0x00064d; 	T(MOV(si, ax));	// 119151 mov     si, ax ;~ 37EB:064D
cs=0x37eb;eip=0x00064f; 	T(MOV(ah, *(raddr(cs,si+0x870))));	// 119152 mov     ah, cs:[si+870h] ;~ 37EB:064F
cs=0x37eb;eip=0x000654; 	T(ADD(bx, 0x52));	// 119153 add     bx, 52h ; 'R' ;~ 37EB:0654
cs=0x37eb;eip=0x000657; 	J(CALL(sub_46a8b,0));	// 119154 call    sub_46A8B ;~ 37EB:0657
cs=0x37eb;eip=0x00065a; 	X(POP(si));	// 119155 pop     si ;~ 37EB:065A
cs=0x37eb;eip=0x00065b; 	X(POP(bx));	// 119156 pop     bx ;~ 37EB:065B
cs=0x37eb;eip=0x00065c; 	X(POP(ax));	// 119157 pop     ax ;~ 37EB:065C
cs=0x37eb;eip=0x00065d; 	J(RETN(0));	// 119158 retn ;~ 37EB:065D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_46ad7: 	goto sub_46ad7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_46aee(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_46aee:
    _begin:
cs=0x37eb;eip=0x00065e; 	X(PUSH(ax));	// 119167 push    ax ;~ 37EB:065E
cs=0x37eb;eip=0x00065f; 	X(PUSH(cx));	// 119168 push    cx ;~ 37EB:065F
cs=0x37eb;eip=0x000660; 	X(PUSH(dx));	// 119169 push    dx ;~ 37EB:0660
cs=0x37eb;eip=0x000661; 	T(ADD(ah, 0x40));	// 119170 add     ah, 40h ; '@' ;~ 37EB:0661
cs=0x37eb;eip=0x000664; 	T(MOV(al, *(raddr(es,bx+5))));	// 119171 mov     al, es:[bx+5] ;~ 37EB:0664
cs=0x37eb;eip=0x000668; 	T(MOV(cl, 6));	// 119172 mov     cl, 6 ;~ 37EB:0668
cs=0x37eb;eip=0x00066a; 	T(SHL(al, cl));	// 119173 shl     al, cl ;~ 37EB:066A
cs=0x37eb;eip=0x00066c; 	T(MOV(dh, 0x7F));	// 119174 mov     dh, 7Fh ;~ 37EB:066C
cs=0x37eb;eip=0x00066e; 	T(SUB(dh, dl));	// 119175 sub     dh, dl ;~ 37EB:066E
cs=0x37eb;eip=0x000670; 	T(SHR(dh, 1));	// 119176 shr     dh, 1 ;~ 37EB:0670
cs=0x37eb;eip=0x000672; 	T(AND(dh, 0x3F));	// 119177 and     dh, 3Fh ;~ 37EB:0672
cs=0x37eb;eip=0x000675; 	T(OR(al, dh));	// 119178 or      al, dh ;~ 37EB:0675
cs=0x37eb;eip=0x000677; 	J(CALL(sub_46c57,0));	// 119179 call    sub_46C57 ;~ 37EB:0677
cs=0x37eb;eip=0x00067a; 	X(POP(dx));	// 119180 pop     dx ;~ 37EB:067A
cs=0x37eb;eip=0x00067b; 	X(POP(cx));	// 119181 pop     cx ;~ 37EB:067B
cs=0x37eb;eip=0x00067c; 	X(POP(ax));	// 119182 pop     ax ;~ 37EB:067C
cs=0x37eb;eip=0x00067d; 	J(RETN(0));	// 119183 retn ;~ 37EB:067D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_46aee: 	goto sub_46aee;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_46b0e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_46b0e:
    _begin:
cs=0x37eb;eip=0x00067e; 	X(PUSH(ax));	// 119192 push    ax ;~ 37EB:067E
cs=0x37eb;eip=0x00067f; 	X(PUSH(bx));	// 119193 push    bx ;~ 37EB:067F
cs=0x37eb;eip=0x000680; 	X(PUSH(si));	// 119194 push    si ;~ 37EB:0680
cs=0x37eb;eip=0x000681; 	T(SHL(ax, 1));	// 119195 shl     ax, 1 ;~ 37EB:0681
cs=0x37eb;eip=0x000683; 	T(MOV(si, ax));	// 119196 mov     si, ax ;~ 37EB:0683
cs=0x37eb;eip=0x000685; 	T(MOV(ah, *(raddr(cs,si+0x870))));	// 119197 mov     ah, cs:[si+870h] ;~ 37EB:0685
cs=0x37eb;eip=0x00068a; 	T(ADD(bx, 0x46));	// 119198 add     bx, 46h ; 'F' ;~ 37EB:068A
cs=0x37eb;eip=0x00068d; 	J(CALL(sub_46aee,0));	// 119199 call    sub_46AEE ;~ 37EB:068D
cs=0x37eb;eip=0x000690; 	X(POP(si));	// 119200 pop     si ;~ 37EB:0690
cs=0x37eb;eip=0x000691; 	X(POP(bx));	// 119201 pop     bx ;~ 37EB:0691
cs=0x37eb;eip=0x000692; 	X(POP(ax));	// 119202 pop     ax ;~ 37EB:0692
cs=0x37eb;eip=0x000693; 	J(RETN(0));	// 119203 retn ;~ 37EB:0693

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_46b0e: 	goto sub_46b0e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_46b24(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_46b24:
    _begin:
cs=0x37eb;eip=0x000694; 	X(PUSH(ax));	// 119212 push    ax ;~ 37EB:0694
cs=0x37eb;eip=0x000695; 	X(PUSH(bx));	// 119213 push    bx ;~ 37EB:0695
cs=0x37eb;eip=0x000696; 	X(PUSH(si));	// 119214 push    si ;~ 37EB:0696
cs=0x37eb;eip=0x000697; 	T(SHL(ax, 1));	// 119215 shl     ax, 1 ;~ 37EB:0697
cs=0x37eb;eip=0x000699; 	T(INC(ax));	// 119216 inc     ax ;~ 37EB:0699
cs=0x37eb;eip=0x00069a; 	T(MOV(si, ax));	// 119217 mov     si, ax ;~ 37EB:069A
cs=0x37eb;eip=0x00069c; 	T(MOV(ah, *(raddr(cs,si+0x870))));	// 119218 mov     ah, cs:[si+870h] ;~ 37EB:069C
cs=0x37eb;eip=0x0006a1; 	T(ADD(bx, 0x52));	// 119219 add     bx, 52h ; 'R' ;~ 37EB:06A1
cs=0x37eb;eip=0x0006a4; 	J(CALL(sub_46aee,0));	// 119220 call    sub_46AEE ;~ 37EB:06A4
cs=0x37eb;eip=0x0006a7; 	X(POP(si));	// 119221 pop     si ;~ 37EB:06A7
cs=0x37eb;eip=0x0006a8; 	X(POP(bx));	// 119222 pop     bx ;~ 37EB:06A8
cs=0x37eb;eip=0x0006a9; 	X(POP(ax));	// 119223 pop     ax ;~ 37EB:06A9
cs=0x37eb;eip=0x0006aa; 	J(RETN(0));	// 119224 retn ;~ 37EB:06AA

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_46b24: 	goto sub_46b24;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_46b3b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_46b3b:
    _begin:
cs=0x37eb;eip=0x0006ab; 	X(PUSH(ax));	// 119233 push    ax ;~ 37EB:06AB
cs=0x37eb;eip=0x0006ac; 	X(PUSH(cx));	// 119234 push    cx ;~ 37EB:06AC
cs=0x37eb;eip=0x0006ad; 	X(PUSH(dx));	// 119235 push    dx ;~ 37EB:06AD
cs=0x37eb;eip=0x0006ae; 	T(MOV(ah, al));	// 119236 mov     ah, al ;~ 37EB:06AE
cs=0x37eb;eip=0x0006b0; 	T(ADD(ah, 0x0C0));	// 119237 add     ah, 0C0h ; 'À' ;~ 37EB:06B0
cs=0x37eb;eip=0x0006b3; 	T(MOV(cl, 4));	// 119238 mov     cl, 4 ;~ 37EB:06B3
cs=0x37eb;eip=0x0006b5; 	T(SHR(dl, cl));	// 119239 shr     dl, cl ;~ 37EB:06B5
cs=0x37eb;eip=0x0006b7; 	T(AND(dl, 7));	// 119240 and     dl, 7 ;~ 37EB:06B7
cs=0x37eb;eip=0x0006ba; 	T(MOV(al, dl));	// 119241 mov     al, dl ;~ 37EB:06BA
cs=0x37eb;eip=0x0006bc; 	T(MOV(cl, 1));	// 119242 mov     cl, 1 ;~ 37EB:06BC
cs=0x37eb;eip=0x0006be; 	T(SHL(al, cl));	// 119243 shl     al, cl ;~ 37EB:06BE
cs=0x37eb;eip=0x0006c0; 	T(OR(al, *(raddr(es,bx+0x44))));	// 119244 or      al, es:[bx+44h] ;~ 37EB:06C0
cs=0x37eb;eip=0x0006c4; 	J(CALL(sub_46c57,0));	// 119245 call    sub_46C57 ;~ 37EB:06C4
cs=0x37eb;eip=0x0006c7; 	X(POP(dx));	// 119246 pop     dx ;~ 37EB:06C7
cs=0x37eb;eip=0x0006c8; 	X(POP(cx));	// 119247 pop     cx ;~ 37EB:06C8
cs=0x37eb;eip=0x0006c9; 	X(POP(ax));	// 119248 pop     ax ;~ 37EB:06C9
cs=0x37eb;eip=0x0006ca; 	J(RETN(0));	// 119249 retn ;~ 37EB:06CA

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_46b3b: 	goto sub_46b3b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_46b5b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_46b5b:
    _begin:
cs=0x37eb;eip=0x0006cb; 	X(PUSH(cx));	// 119258 push    cx ;~ 37EB:06CB
cs=0x37eb;eip=0x0006cc; 	X(PUSH(si));	// 119259 push    si ;~ 37EB:06CC
cs=0x37eb;eip=0x0006cd; 	T(CMP(cx, 0x81));	// 119260 cmp     cx, 81h ; '' ;~ 37EB:06CD
cs=0x37eb;eip=0x0006d1; 	J(JNC(loc_46b66));	// 119261 jnb     short loc_46B66 ;~ 37EB:06D1
cs=0x37eb;eip=0x0006d3; 	X(POP(si));	// 119262 pop     si ;~ 37EB:06D3
cs=0x37eb;eip=0x0006d4; 	X(POP(cx));	// 119263 pop     cx ;~ 37EB:06D4
cs=0x37eb;eip=0x0006d5; 	J(RETN(0));	// 119264 retn ;~ 37EB:06D5
loc_46b66:
	// 10037 
cs=0x37eb;eip=0x0006d6; 	T(CMP(cx, 0x85));	// 119268 cmp     cx, 85h ; '…' ;~ 37EB:06D6
cs=0x37eb;eip=0x0006da; 	J(JBE(loc_46b6f));	// 119269 jbe     short loc_46B6F ;~ 37EB:06DA
cs=0x37eb;eip=0x0006dc; 	X(POP(si));	// 119270 pop     si ;~ 37EB:06DC
cs=0x37eb;eip=0x0006dd; 	X(POP(cx));	// 119271 pop     cx ;~ 37EB:06DD
cs=0x37eb;eip=0x0006de; 	J(RETN(0));	// 119272 retn ;~ 37EB:06DE
loc_46b6f:
	// 10038 
cs=0x37eb;eip=0x0006df; 	T(SUB(cx, 0x81));	// 119276 sub     cx, 81h ; '' ;~ 37EB:06DF
cs=0x37eb;eip=0x0006e3; 	T(SHL(cx, 1));	// 119277 shl     cx, 1 ;~ 37EB:06E3
cs=0x37eb;eip=0x0006e5; 	T(MOV(si, cx));	// 119278 mov     si, cx ;~ 37EB:06E5
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x0006e7; 	J(CALL(__dispatch_call,*(dw*)(((db*)&funcs_46b77)+si)));	// 119279 call    cs:funcs_46B77[si] ;~ 37EB:06E7
cs=0x37eb;eip=0x0006ec; 	X(POP(si));	// 119280 pop     si ;~ 37EB:06EC
cs=0x37eb;eip=0x0006ed; 	X(POP(cx));	// 119281 pop     cx ;~ 37EB:06ED
cs=0x37eb;eip=0x0006ee; 	J(RETN(0));	// 119282 retn ;~ 37EB:06EE

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_46b66: 	goto loc_46b66;
        case m2c::kloc_46b6f: 	goto loc_46b6f;
        case m2c::ksub_46b5b: 	goto sub_46b5b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_46b89(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_46b89:
    _begin:
cs=0x37eb;eip=0x0006f9; 	X(PUSH(bx));	// 119297 push    bx ;~ 37EB:06F9
cs=0x37eb;eip=0x0006fa; 	X(PUSH(cx));	// 119298 push    cx ;~ 37EB:06FA
cs=0x37eb;eip=0x0006fb; 	X(PUSH(dx));	// 119299 push    dx ;~ 37EB:06FB
cs=0x37eb;eip=0x0006fc; 	T(MOV(dh, ah));	// 119300 mov     dh, ah ;~ 37EB:06FC
cs=0x37eb;eip=0x0006fe; 	T(XOR(ah, ah));	// 119301 xor     ah, ah ;~ 37EB:06FE
cs=0x37eb;eip=0x000700; 	T(MOV(cl, 0x0C));	// 119302 mov     cl, 0Ch ;~ 37EB:0700
cs=0x37eb;eip=0x000702; 	T(DIV1(cl));	// 119303 div     cl ;~ 37EB:0702
cs=0x37eb;eip=0x000704; 	T(MOV(dl, al));	// 119304 mov     dl, al ;~ 37EB:0704
cs=0x37eb;eip=0x000706; 	T(MOV(al, ah));	// 119305 mov     al, ah ;~ 37EB:0706
cs=0x37eb;eip=0x000708; 	T(ADD(al, dh));	// 119306 add     al, dh ;~ 37EB:0708
cs=0x37eb;eip=0x00070a; 	T(CBW);	// 119307 cbw ;~ 37EB:070A
cs=0x37eb;eip=0x00070b; 	T(SHL(ax, 1));	// 119308 shl     ax, 1 ;~ 37EB:070B
cs=0x37eb;eip=0x00070d; 	T(MOV(bx, ax));	// 119309 mov     bx, ax ;~ 37EB:070D
cs=0x37eb;eip=0x00070f; 	T(MOV(ax, *(dw*)(raddr(cs,bx+0x8B2))));	// 119310 mov     ax, cs:[bx+8B2h] ;~ 37EB:070F
cs=0x37eb;eip=0x000714; 	T(XOR(dh, dh));	// 119311 xor     dh, dh ;~ 37EB:0714
cs=0x37eb;eip=0x000716; 	T(MOV(cl, 0x0A));	// 119312 mov     cl, 0Ah ;~ 37EB:0716
cs=0x37eb;eip=0x000718; 	T(SHL(dx, cl));	// 119313 shl     dx, cl ;~ 37EB:0718
cs=0x37eb;eip=0x00071a; 	T(OR(ax, dx));	// 119314 or      ax, dx ;~ 37EB:071A
cs=0x37eb;eip=0x00071c; 	X(POP(dx));	// 119315 pop     dx ;~ 37EB:071C
cs=0x37eb;eip=0x00071d; 	X(POP(cx));	// 119316 pop     cx ;~ 37EB:071D
cs=0x37eb;eip=0x00071e; 	X(POP(bx));	// 119317 pop     bx ;~ 37EB:071E
cs=0x37eb;eip=0x00071f; 	J(RETN(0));	// 119318 retn ;~ 37EB:071F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_46b89: 	goto sub_46b89;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_46bb0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_46bb0:
    _begin:
cs=0x37eb;eip=0x000720; 	X(PUSH(ax));	// 119326 push    ax ;~ 37EB:0720
cs=0x37eb;eip=0x000721; 	X(PUSH(si));	// 119327 push    si ;~ 37EB:0721
cs=0x37eb;eip=0x000722; 	T(XOR(ah, ah));	// 119328 xor     ah, ah ;~ 37EB:0722
cs=0x37eb;eip=0x000724; 	T(SHL(ax, 1));	// 119329 shl     ax, 1 ;~ 37EB:0724
cs=0x37eb;eip=0x000726; 	T(MOV(si, ax));	// 119330 mov     si, ax ;~ 37EB:0726
cs=0x37eb;eip=0x000728; 	T(MOV(cx, *(dw*)(raddr(cs,si+0x8FA))));	// 119331 mov     cx, cs:[si+8FAh] ;~ 37EB:0728
cs=0x37eb;eip=0x00072d; 	X(POP(si));	// 119332 pop     si ;~ 37EB:072D
cs=0x37eb;eip=0x00072e; 	X(POP(ax));	// 119333 pop     ax ;~ 37EB:072E
cs=0x37eb;eip=0x00072f; 	J(RETN(0));	// 119334 retn ;~ 37EB:072F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_46bb0: 	goto sub_46bb0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_46bc0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_46bc0:
    _begin:
cs=0x37eb;eip=0x000730; 	X(PUSH(cx));	// 119343 push    cx ;~ 37EB:0730
cs=0x37eb;eip=0x000731; 	X(PUSH(dx));	// 119344 push    dx ;~ 37EB:0731
cs=0x37eb;eip=0x000732; 	X(PUSH(si));	// 119345 push    si ;~ 37EB:0732
cs=0x37eb;eip=0x000733; 	T(MOV(dx, cx));	// 119346 mov     dx, cx ;~ 37EB:0733
cs=0x37eb;eip=0x000735; 	X(PUSH(ax));	// 119347 push    ax ;~ 37EB:0735
cs=0x37eb;eip=0x000736; 	T(SHL(ax, 1));	// 119348 shl     ax, 1 ;~ 37EB:0736
cs=0x37eb;eip=0x000738; 	T(MOV(si, ax));	// 119349 mov     si, ax ;~ 37EB:0738
cs=0x37eb;eip=0x00073a; 	T(MOV(ah, *(raddr(cs,si+0x870))));	// 119350 mov     ah, cs:[si+870h] ;~ 37EB:073A
cs=0x37eb;eip=0x00073f; 	T(ADD(ah, 0x40));	// 119351 add     ah, 40h ; '@' ;~ 37EB:073F
cs=0x37eb;eip=0x000742; 	T(MOV(al, *(raddr(es,bx+0x4B))));	// 119352 mov     al, es:[bx+4Bh] ;~ 37EB:0742
cs=0x37eb;eip=0x000746; 	T(MOV(cl, 6));	// 119353 mov     cl, 6 ;~ 37EB:0746
cs=0x37eb;eip=0x000748; 	T(SHL(al, cl));	// 119354 shl     al, cl ;~ 37EB:0748
cs=0x37eb;eip=0x00074a; 	T(MOV(cl, *(raddr(es,bx+0x4A))));	// 119355 mov     cl, es:[bx+4Ah] ;~ 37EB:074A
cs=0x37eb;eip=0x00074e; 	T(CMP(*(raddr(es,bx+0x44)), 1));	// 119356 cmp     byte ptr es:[bx+44h], 1 ;~ 37EB:074E
cs=0x37eb;eip=0x000753; 	J(JNZ(loc_46c0b));	// 119357 jnz     short loc_46C0B ;~ 37EB:0753
cs=0x37eb;eip=0x000755; 	X(PUSH(ax));	// 119358 push    ax ;~ 37EB:0755
cs=0x37eb;eip=0x000756; 	T(MOV(al, dh));	// 119359 mov     al, dh ;~ 37EB:0756
cs=0x37eb;eip=0x000758; 	T(XOR(ah, ah));	// 119360 xor     ah, ah ;~ 37EB:0758
cs=0x37eb;eip=0x00075a; 	T(MUL1_1(dl));	// 119361 mul     dl ;~ 37EB:075A
cs=0x37eb;eip=0x00075c; 	T(MOV(cl, 6));	// 119362 mov     cl, 6 ;~ 37EB:075C
cs=0x37eb;eip=0x00075e; 	T(SHR(ax, cl));	// 119363 shr     ax, cl ;~ 37EB:075E
cs=0x37eb;eip=0x000760; 	T(INC(ax));	// 119364 inc     ax ;~ 37EB:0760
cs=0x37eb;eip=0x000761; 	T(SHR(ax, 1));	// 119365 shr     ax, 1 ;~ 37EB:0761
cs=0x37eb;eip=0x000763; 	T(MOV(cl, 0x3F));	// 119366 mov     cl, 3Fh ; '?' ;~ 37EB:0763
cs=0x37eb;eip=0x000765; 	T(SUB(cl, *(raddr(es,bx+0x4A))));	// 119367 sub     cl, es:[bx+4Ah] ;~ 37EB:0765
cs=0x37eb;eip=0x000769; 	T(MUL1_1(cl));	// 119368 mul     cl ;~ 37EB:0769
cs=0x37eb;eip=0x00076b; 	T(MOV(cl, 6));	// 119369 mov     cl, 6 ;~ 37EB:076B
cs=0x37eb;eip=0x00076d; 	T(SHR(ax, cl));	// 119370 shr     ax, cl ;~ 37EB:076D
cs=0x37eb;eip=0x00076f; 	T(INC(ax));	// 119371 inc     ax ;~ 37EB:076F
cs=0x37eb;eip=0x000770; 	T(SHR(ax, 1));	// 119372 shr     ax, 1 ;~ 37EB:0770
cs=0x37eb;eip=0x000772; 	T(AND(ax, 0x3F));	// 119373 and     ax, 3Fh ;~ 37EB:0772
cs=0x37eb;eip=0x000775; 	T(MOV(cx, 0x3F));	// 119374 mov     cx, 3Fh ; '?' ;~ 37EB:0775
cs=0x37eb;eip=0x000778; 	T(SUB(cx, ax));	// 119375 sub     cx, ax ;~ 37EB:0778
cs=0x37eb;eip=0x00077a; 	X(POP(ax));	// 119376 pop     ax ;~ 37EB:077A
loc_46c0b:
	// 10039 
cs=0x37eb;eip=0x00077b; 	T(OR(al, cl));	// 119379 or      al, cl ;~ 37EB:077B
cs=0x37eb;eip=0x00077d; 	J(CALL(sub_46c57,0));	// 119380 call    sub_46C57 ;~ 37EB:077D
cs=0x37eb;eip=0x000780; 	X(POP(ax));	// 119381 pop     ax ;~ 37EB:0780
cs=0x37eb;eip=0x000781; 	X(PUSH(ax));	// 119382 push    ax ;~ 37EB:0781
cs=0x37eb;eip=0x000782; 	T(SHL(ax, 1));	// 119383 shl     ax, 1 ;~ 37EB:0782
cs=0x37eb;eip=0x000784; 	T(INC(ax));	// 119384 inc     ax ;~ 37EB:0784
cs=0x37eb;eip=0x000785; 	T(MOV(si, ax));	// 119385 mov     si, ax ;~ 37EB:0785
cs=0x37eb;eip=0x000787; 	T(MOV(ah, *(raddr(cs,si+0x870))));	// 119386 mov     ah, cs:[si+870h] ;~ 37EB:0787
cs=0x37eb;eip=0x00078c; 	T(ADD(ah, 0x40));	// 119387 add     ah, 40h ; '@' ;~ 37EB:078C
cs=0x37eb;eip=0x00078f; 	T(MOV(al, *(raddr(es,bx+0x57))));	// 119388 mov     al, es:[bx+57h] ;~ 37EB:078F
cs=0x37eb;eip=0x000793; 	T(MOV(cl, 6));	// 119389 mov     cl, 6 ;~ 37EB:0793
cs=0x37eb;eip=0x000795; 	T(SHL(al, cl));	// 119390 shl     al, cl ;~ 37EB:0795
cs=0x37eb;eip=0x000797; 	X(PUSH(ax));	// 119391 push    ax ;~ 37EB:0797
cs=0x37eb;eip=0x000798; 	T(MOV(al, dh));	// 119392 mov     al, dh ;~ 37EB:0798
cs=0x37eb;eip=0x00079a; 	T(XOR(ah, ah));	// 119393 xor     ah, ah ;~ 37EB:079A
cs=0x37eb;eip=0x00079c; 	T(MUL1_1(dl));	// 119394 mul     dl ;~ 37EB:079C
cs=0x37eb;eip=0x00079e; 	T(MOV(cl, 6));	// 119395 mov     cl, 6 ;~ 37EB:079E
cs=0x37eb;eip=0x0007a0; 	T(SHR(ax, cl));	// 119396 shr     ax, cl ;~ 37EB:07A0
cs=0x37eb;eip=0x0007a2; 	T(INC(ax));	// 119397 inc     ax ;~ 37EB:07A2
cs=0x37eb;eip=0x0007a3; 	T(SHR(ax, 1));	// 119398 shr     ax, 1 ;~ 37EB:07A3
cs=0x37eb;eip=0x0007a5; 	T(MOV(cl, 0x3F));	// 119399 mov     cl, 3Fh ; '?' ;~ 37EB:07A5
cs=0x37eb;eip=0x0007a7; 	T(SUB(cl, *(raddr(es,bx+0x56))));	// 119400 sub     cl, es:[bx+56h] ;~ 37EB:07A7
cs=0x37eb;eip=0x0007ab; 	T(MUL1_1(cl));	// 119401 mul     cl ;~ 37EB:07AB
cs=0x37eb;eip=0x0007ad; 	T(MOV(cl, 6));	// 119402 mov     cl, 6 ;~ 37EB:07AD
cs=0x37eb;eip=0x0007af; 	T(SHR(ax, cl));	// 119403 shr     ax, cl ;~ 37EB:07AF
cs=0x37eb;eip=0x0007b1; 	T(INC(ax));	// 119404 inc     ax ;~ 37EB:07B1
cs=0x37eb;eip=0x0007b2; 	T(SHR(ax, 1));	// 119405 shr     ax, 1 ;~ 37EB:07B2
cs=0x37eb;eip=0x0007b4; 	T(AND(ax, 0x3F));	// 119406 and     ax, 3Fh ;~ 37EB:07B4
cs=0x37eb;eip=0x0007b7; 	T(MOV(cx, 0x3F));	// 119407 mov     cx, 3Fh ; '?' ;~ 37EB:07B7
cs=0x37eb;eip=0x0007ba; 	T(SUB(cx, ax));	// 119408 sub     cx, ax ;~ 37EB:07BA
cs=0x37eb;eip=0x0007bc; 	X(POP(ax));	// 119409 pop     ax ;~ 37EB:07BC
cs=0x37eb;eip=0x0007bd; 	T(OR(al, cl));	// 119410 or      al, cl ;~ 37EB:07BD
cs=0x37eb;eip=0x0007bf; 	J(CALL(sub_46c57,0));	// 119411 call    sub_46C57 ;~ 37EB:07BF
cs=0x37eb;eip=0x0007c2; 	X(POP(ax));	// 119412 pop     ax ;~ 37EB:07C2
cs=0x37eb;eip=0x0007c3; 	X(POP(si));	// 119413 pop     si ;~ 37EB:07C3
cs=0x37eb;eip=0x0007c4; 	X(POP(dx));	// 119414 pop     dx ;~ 37EB:07C4
cs=0x37eb;eip=0x0007c5; 	X(POP(cx));	// 119415 pop     cx ;~ 37EB:07C5
cs=0x37eb;eip=0x0007c6; 	J(RETN(0));	// 119416 retn ;~ 37EB:07C6

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_46c0b: 	goto loc_46c0b;
        case m2c::ksub_46bc0: 	goto sub_46bc0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_46c57(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_46c57:
    _begin:
cs=0x37eb;eip=0x0007c7; 	X(PUSH(si));	// 119425 push    si ;~ 37EB:07C7
cs=0x37eb;eip=0x0007c8; 	X(PUSH(dx));	// 119426 push    dx ;~ 37EB:07C8
cs=0x37eb;eip=0x0007c9; 	X(PUSH(cx));	// 119427 push    cx ;~ 37EB:07C9
cs=0x37eb;eip=0x0007ca; 	X(PUSH(ax));	// 119428 push    ax ;~ 37EB:07CA
cs=0x37eb;eip=0x0007cb; 	T(MOV(cx, ax));	// 119429 mov     cx, ax ;~ 37EB:07CB
cs=0x37eb;eip=0x0007cd; 	T(MOV(al, ah));	// 119430 mov     al, ah ;~ 37EB:07CD
cs=0x37eb;eip=0x0007cf; 	T(XOR(ah, ah));	// 119431 xor     ah, ah ;~ 37EB:07CF
cs=0x37eb;eip=0x0007d1; 	T(MOV(si, ax));	// 119432 mov     si, ax ;~ 37EB:07D1
cs=0x37eb;eip=0x0007d3; 	T(MOV(al, *(raddr(cs,si+0x97D))));	// 119433 mov     al, cs:[si+97Dh] ;~ 37EB:07D3
cs=0x37eb;eip=0x0007d8; 	T(CMP(al, cl));	// 119434 cmp     al, cl ;~ 37EB:07D8
cs=0x37eb;eip=0x0007da; 	J(JNZ(loc_46c71));	// 119435 jnz     short loc_46C71 ;~ 37EB:07DA
cs=0x37eb;eip=0x0007dc; 	X(POP(ax));	// 119436 pop     ax ;~ 37EB:07DC
cs=0x37eb;eip=0x0007dd; 	X(POP(cx));	// 119437 pop     cx ;~ 37EB:07DD
cs=0x37eb;eip=0x0007de; 	X(POP(dx));	// 119438 pop     dx ;~ 37EB:07DE
cs=0x37eb;eip=0x0007df; 	X(POP(si));	// 119439 pop     si ;~ 37EB:07DF
cs=0x37eb;eip=0x0007e0; 	J(RETN(0));	// 119440 retn ;~ 37EB:07E0
loc_46c71:
	// 10040 
cs=0x37eb;eip=0x0007e1; 	T(MOV(ax, cx));	// 119444 mov     ax, cx ;~ 37EB:07E1
cs=0x37eb;eip=0x0007e3; 	X(MOV(*(raddr(cs,si+0x97D)), al));	// 119445 mov     cs:[si+97Dh], al ;~ 37EB:07E3
cs=0x37eb;eip=0x0007e8; 	T(MOV(al, ah));	// 119446 mov     al, ah ;~ 37EB:07E8
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x0007ea; 	T(MOV(dx, *(dw*)(((db*)&word_46e02))));	// 119447 mov     dx, cs:word_46E02 ;~ 37EB:07EA
cs=0x37eb;eip=0x0007ef; 	S(OUT(dx, al));	// 119448 out     dx, al ;~ 37EB:07EF
cs=0x37eb;eip=0x0007f0; 	T(MOV(ax, 1));	// 119449 mov     ax, 1 ;~ 37EB:07F0
cs=0x37eb;eip=0x0007f3; 	J(CALL(sub_46986,0));	// 119450 call    sub_46986 ;~ 37EB:07F3
cs=0x37eb;eip=0x0007f6; 	X(POP(ax));	// 119451 pop     ax ;~ 37EB:07F6
cs=0x37eb;eip=0x0007f7; 	T(INC(dx));	// 119452 inc     dx ;~ 37EB:07F7
cs=0x37eb;eip=0x0007f8; 	S(OUT(dx, al));	// 119453 out     dx, al ;~ 37EB:07F8
cs=0x37eb;eip=0x0007f9; 	X(PUSH(ax));	// 119454 push    ax ;~ 37EB:07F9
cs=0x37eb;eip=0x0007fa; 	T(MOV(ax, 1));	// 119455 mov     ax, 1 ;~ 37EB:07FA
cs=0x37eb;eip=0x0007fd; 	J(CALL(sub_46986,0));	// 119456 call    sub_46986 ;~ 37EB:07FD
cs=0x37eb;eip=0x000800; 	X(POP(ax));	// 119457 pop     ax ;~ 37EB:0800
cs=0x37eb;eip=0x000801; 	X(POP(cx));	// 119458 pop     cx ;~ 37EB:0801
cs=0x37eb;eip=0x000802; 	X(POP(dx));	// 119459 pop     dx ;~ 37EB:0802
cs=0x37eb;eip=0x000803; 	X(POP(si));	// 119460 pop     si ;~ 37EB:0803
cs=0x37eb;eip=0x000804; 	J(RETN(0));	// 119461 retn ;~ 37EB:0804

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_46c71: 	goto loc_46c71;
        case m2c::ksub_46c57: 	goto sub_46c57;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_46c95(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_46c95:
    _begin:
cs=0x37eb;eip=0x000805; 	X(PUSH(dx));	// 119470 push    dx ;~ 37EB:0805
cs=0x37eb;eip=0x000806; 	T(XOR(ax, ax));	// 119471 xor     ax, ax ;~ 37EB:0806
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000808; 	T(MOV(dx, *(dw*)(((db*)&word_46e02))));	// 119472 mov     dx, cs:word_46E02 ;~ 37EB:0808
cs=0x37eb;eip=0x00080d; 	S(IN(al, dx));	// 119473 in      al, dx ;~ 37EB:080D
cs=0x37eb;eip=0x00080e; 	X(POP(dx));	// 119474 pop     dx ;~ 37EB:080E
cs=0x37eb;eip=0x00080f; 	J(RETN(0));	// 119475 retn ;~ 37EB:080F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_46c95: 	goto sub_46c95;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_46ca0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_46ca0:
    _begin:
cs=0x37eb;eip=0x000810; 	X(PUSH(ax));	// 119484 push    ax ;~ 37EB:0810
cs=0x37eb;eip=0x000811; 	X(PUSH(cx));	// 119485 push    cx ;~ 37EB:0811
cs=0x37eb;eip=0x000812; 	X(PUSH(dx));	// 119486 push    dx ;~ 37EB:0812
cs=0x37eb;eip=0x000813; 	T(MOV(ah, 1));	// 119487 mov     ah, 1 ;~ 37EB:0813
cs=0x37eb;eip=0x000815; 	T(MOV(al, 0));	// 119488 mov     al, 0 ;~ 37EB:0815
cs=0x37eb;eip=0x000817; 	J(CALL(sub_46c57,0));	// 119489 call    sub_46C57 ;~ 37EB:0817
cs=0x37eb;eip=0x00081a; 	T(MOV(ah, 4));	// 119490 mov     ah, 4 ;~ 37EB:081A
cs=0x37eb;eip=0x00081c; 	T(MOV(al, 0x60));	// 119491 mov     al, 60h ; '`' ;~ 37EB:081C
cs=0x37eb;eip=0x00081e; 	J(CALL(sub_46c57,0));	// 119492 call    sub_46C57 ;~ 37EB:081E
cs=0x37eb;eip=0x000821; 	T(MOV(ah, 4));	// 119493 mov     ah, 4 ;~ 37EB:0821
cs=0x37eb;eip=0x000823; 	T(MOV(al, 0x80));	// 119494 mov     al, 80h ; '€' ;~ 37EB:0823
cs=0x37eb;eip=0x000825; 	J(CALL(sub_46c57,0));	// 119495 call    sub_46C57 ;~ 37EB:0825
cs=0x37eb;eip=0x000828; 	J(CALL(sub_46c95,0));	// 119496 call    sub_46C95 ;~ 37EB:0828
cs=0x37eb;eip=0x00082b; 	T(MOV(dx, ax));	// 119497 mov     dx, ax ;~ 37EB:082B
cs=0x37eb;eip=0x00082d; 	T(MOV(ah, 2));	// 119498 mov     ah, 2 ;~ 37EB:082D
cs=0x37eb;eip=0x00082f; 	T(MOV(al, 0x0FF));	// 119499 mov     al, 0FFh ;~ 37EB:082F
cs=0x37eb;eip=0x000831; 	J(CALL(sub_46c57,0));	// 119500 call    sub_46C57 ;~ 37EB:0831
cs=0x37eb;eip=0x000834; 	T(MOV(ah, 4));	// 119501 mov     ah, 4 ;~ 37EB:0834
cs=0x37eb;eip=0x000836; 	T(MOV(al, 0x21));	// 119502 mov     al, 21h ; '!' ;~ 37EB:0836
cs=0x37eb;eip=0x000838; 	J(CALL(sub_46c57,0));	// 119503 call    sub_46C57 ;~ 37EB:0838
cs=0x37eb;eip=0x00083b; 	T(MOV(cx, 0x12C));	// 119504 mov     cx, 12Ch ;~ 37EB:083B
loc_46cce:
	// 10041 
cs=0x37eb;eip=0x00083e; 	J(CALL(sub_46c95,0));	// 119507 call    sub_46C95 ;~ 37EB:083E
cs=0x37eb;eip=0x000841; 	T(AND(al, 0x0E0));	// 119508 and     al, 0E0h ;~ 37EB:0841
cs=0x37eb;eip=0x000843; 	T(CMP(al, 0x0C0));	// 119509 cmp     al, 0C0h ; 'À' ;~ 37EB:0843
cs=0x37eb;eip=0x000845; 	J(JZ(loc_46cd9));	// 119510 jz      short loc_46CD9 ;~ 37EB:0845
cs=0x37eb;eip=0x000847; 	J(LOOP(loc_46cce));	// 119511 loop    loc_46CCE ;~ 37EB:0847
loc_46cd9:
	// 10042 
cs=0x37eb;eip=0x000849; 	T(MOV(cx, ax));	// 119514 mov     cx, ax ;~ 37EB:0849
cs=0x37eb;eip=0x00084b; 	T(MOV(ah, 4));	// 119515 mov     ah, 4 ;~ 37EB:084B
cs=0x37eb;eip=0x00084d; 	T(MOV(al, 0x60));	// 119516 mov     al, 60h ; '`' ;~ 37EB:084D
cs=0x37eb;eip=0x00084f; 	J(CALL(sub_46c57,0));	// 119517 call    sub_46C57 ;~ 37EB:084F
cs=0x37eb;eip=0x000852; 	T(MOV(ah, 4));	// 119518 mov     ah, 4 ;~ 37EB:0852
cs=0x37eb;eip=0x000854; 	T(MOV(al, 0x80));	// 119519 mov     al, 80h ; '€' ;~ 37EB:0854
cs=0x37eb;eip=0x000856; 	J(CALL(sub_46c57,0));	// 119520 call    sub_46C57 ;~ 37EB:0856
cs=0x37eb;eip=0x000859; 	T(AND(dl, 0x0E0));	// 119521 and     dl, 0E0h ;~ 37EB:0859
cs=0x37eb;eip=0x00085c; 	T(CMP(dl, 0));	// 119522 cmp     dl, 0 ;~ 37EB:085C
cs=0x37eb;eip=0x00085f; 	T(STC);	// 119523 stc ;~ 37EB:085F
cs=0x37eb;eip=0x000860; 	J(JNZ(loc_46cfc));	// 119524 jnz     short loc_46CFC ;~ 37EB:0860
cs=0x37eb;eip=0x000862; 	T(AND(cl, 0x0E0));	// 119525 and     cl, 0E0h ;~ 37EB:0862
cs=0x37eb;eip=0x000865; 	T(CMP(cl, 0x0C0));	// 119526 cmp     cl, 0C0h ; 'À' ;~ 37EB:0865
cs=0x37eb;eip=0x000868; 	T(STC);	// 119527 stc ;~ 37EB:0868
cs=0x37eb;eip=0x000869; 	J(JNZ(loc_46cfc));	// 119528 jnz     short loc_46CFC ;~ 37EB:0869
cs=0x37eb;eip=0x00086b; 	T(CLC);	// 119529 clc ;~ 37EB:086B
loc_46cfc:
	// 10043 
cs=0x37eb;eip=0x00086c; 	X(POP(dx));	// 119533 pop     dx ;~ 37EB:086C
cs=0x37eb;eip=0x00086d; 	X(POP(cx));	// 119534 pop     cx ;~ 37EB:086D
cs=0x37eb;eip=0x00086e; 	X(POP(ax));	// 119535 pop     ax ;~ 37EB:086E
cs=0x37eb;eip=0x00086f; 	J(RETN(0));	// 119536 retn ;~ 37EB:086F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_46cce: 	goto loc_46cce;
        case m2c::kloc_46cd9: 	goto loc_46cd9;
        case m2c::kloc_46cfc: 	goto loc_46cfc;
        case m2c::ksub_46ca0: 	goto sub_46ca0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg041_a7e_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg041_a7e_proc:
    _begin:
loc_46f0e:
	// 10044 
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000a7e; 	X(MOV(*(dw*)(((db*)&word_46e02)), 0x388));	// 119568 mov     cs:word_46E02, 388h ;~ 37EB:0A7E
cs=0x37eb;eip=0x000a85; 	J(CALL(sub_46ca0,0));	// 119569 call    sub_46CA0 ;~ 37EB:0A85
cs=0x37eb;eip=0x000a88; 	J(JNC(loc_46f42));	// 119570 jnb     short loc_46F42 ;~ 37EB:0A88
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000a8a; 	X(MOV(*(dw*)(((db*)&word_46e02)), 0x318));	// 119571 mov     cs:word_46E02, 318h ;~ 37EB:0A8A
cs=0x37eb;eip=0x000a91; 	J(CALL(sub_46ca0,0));	// 119572 call    sub_46CA0 ;~ 37EB:0A91
cs=0x37eb;eip=0x000a94; 	J(JNC(loc_46f42));	// 119573 jnb     short loc_46F42 ;~ 37EB:0A94
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000a96; 	X(MOV(*(dw*)(((db*)&word_46e02)), 0x288));	// 119574 mov     cs:word_46E02, 288h ;~ 37EB:0A96
cs=0x37eb;eip=0x000a9d; 	J(CALL(sub_46ca0,0));	// 119575 call    sub_46CA0 ;~ 37EB:0A9D
cs=0x37eb;eip=0x000aa0; 	J(JNC(loc_46f42));	// 119576 jnb     short loc_46F42 ;~ 37EB:0AA0
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000aa2; 	X(MOV(*(dw*)(((db*)&word_46e02)), 0x218));	// 119577 mov     cs:word_46E02, 218h ;~ 37EB:0AA2
cs=0x37eb;eip=0x000aa9; 	J(CALL(sub_46ca0,0));	// 119578 call    sub_46CA0 ;~ 37EB:0AA9
cs=0x37eb;eip=0x000aac; 	J(JNC(loc_46f42));	// 119579 jnb     short loc_46F42 ;~ 37EB:0AAC
cs=0x37eb;eip=0x000aae; 	T(MOV(ax, 0));	// 119580 mov     ax, 0 ;~ 37EB:0AAE
cs=0x37eb;eip=0x000ab1; 	J(RETF(0));	// 119581 retf ;~ 37EB:0AB1
loc_46f42:
	// 10045 
cs=0x37eb;eip=0x000ab2; 	J(CALL(sub_464cf,0));	// 119586 call    sub_464CF ;~ 37EB:0AB2
cs=0x37eb;eip=0x000ab5; 	T(MOV(ah, 1));	// 119587 mov     ah, 1 ;~ 37EB:0AB5
cs=0x37eb;eip=0x000ab7; 	T(MOV(al, 0x20));	// 119588 mov     al, 20h ; ' ' ;~ 37EB:0AB7
cs=0x37eb;eip=0x000ab9; 	J(CALL(sub_46c57,0));	// 119589 call    sub_46C57 ;~ 37EB:0AB9
cs=0x37eb;eip=0x000abc; 	T(MOV(ah, 8));	// 119590 mov     ah, 8 ;~ 37EB:0ABC
cs=0x37eb;eip=0x000abe; 	T(MOV(al, 0));	// 119591 mov     al, 0 ;~ 37EB:0ABE
cs=0x37eb;eip=0x000ac0; 	J(CALL(sub_46c57,0));	// 119592 call    sub_46C57 ;~ 37EB:0AC0
cs=0x37eb;eip=0x000ac3; 	T(MOV(ah, 0x0BD));	// 119593 mov     ah, 0BDh ; '½' ;~ 37EB:0AC3
cs=0x37eb;eip=0x000ac5; 	T(MOV(al, 0));	// 119594 mov     al, 0 ;~ 37EB:0AC5
cs=0x37eb;eip=0x000ac7; 	J(CALL(sub_46c57,0));	// 119595 call    sub_46C57 ;~ 37EB:0AC7
cs=0x37eb;eip=0x000aca; 	T(MOV(ax, 0));	// 119596 mov     ax, 0 ;~ 37EB:0ACA
loc_46f5d:
	// 10046 
cs=0x37eb;eip=0x000acd; 	J(CALL(sub_469b8,0));	// 119599 call    sub_469B8 ;~ 37EB:0ACD
cs=0x37eb;eip=0x000ad0; 	T(INC(ax));	// 119600 inc     ax ;~ 37EB:0AD0
cs=0x37eb;eip=0x000ad1; 	T(CMP(ax, 9));	// 119601 cmp     ax, 9 ;~ 37EB:0AD1
cs=0x37eb;eip=0x000ad4; 	J(JC(loc_46f5d));	// 119602 jb      short loc_46F5D ;~ 37EB:0AD4
cs=0x37eb;eip=0x000ad6; 	T(MOV(ax, 0x0A));	// 119603 mov     ax, 0Ah ;~ 37EB:0AD6
cs=0x37eb;eip=0x000ad9; 	J(RETF(0));	// 119604 retf ;~ 37EB:0AD9
loc_46f6a:
	// 10047 
cs=0x37eb;eip=0x000ada; 	T(MOV(ax, 0));	// 119608 mov     ax, 0 ;~ 37EB:0ADA
loc_46f6d:
	// 10048 
cs=0x37eb;eip=0x000add; 	J(CALL(sub_469b8,0));	// 119611 call    sub_469B8 ;~ 37EB:0ADD
cs=0x37eb;eip=0x000ae0; 	T(INC(ax));	// 119612 inc     ax ;~ 37EB:0AE0
cs=0x37eb;eip=0x000ae1; 	T(CMP(ax, 9));	// 119613 cmp     ax, 9 ;~ 37EB:0AE1
cs=0x37eb;eip=0x000ae4; 	J(JC(loc_46f6d));	// 119614 jb      short loc_46F6D ;~ 37EB:0AE4
cs=0x37eb;eip=0x000ae6; 	J(CALL(sub_47154,0));	// 119615 call    sub_47154 ;~ 37EB:0AE6
cs=0x37eb;eip=0x000ae9; 	J(RETF(0));	// 119616 retf ;~ 37EB:0AE9

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_46f42: 	goto loc_46f42;
        case m2c::kloc_46f5d: 	goto loc_46f5d;
        case m2c::kloc_46f6a: 	goto loc_46f6a;
        case m2c::kloc_46f6d: 	goto loc_46f6d;
        case m2c::kseg041_a7e_proc: 	goto seg041_a7e_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_46f7a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_46f7a:
    _begin:
cs=0x37eb;eip=0x000aea; 	X(PUSH(ax));	// 119623 push    ax ;~ 37EB:0AEA
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000aeb; 	X(MOV(*(dw*)(((db*)&dword_47167)), di));	// 119624 mov     word ptr cs:dword_47167, di ;~ 37EB:0AEB
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000af0; 	X(MOV(*(dw*)(((db*)&dword_47167)+2), es));	// 119625 mov     word ptr cs:dword_47167+2, es ;~ 37EB:0AF0
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000af5; 	X(MOV(*(dw*)(((db*)&dword_47173)), di));	// 119626 mov     word ptr cs:dword_47173, di ;~ 37EB:0AF5
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000afa; 	X(MOV(*(dw*)(((db*)&dword_47173)+2), es));	// 119627 mov     word ptr cs:dword_47173+2, es ;~ 37EB:0AFA
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000aff; 	X(MOV(*(dw*)(((db*)&dword_4716b)), ax));	// 119628 mov     word ptr cs:dword_4716B, ax ;~ 37EB:0AFF
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000b03; 	X(MOV(*(dw*)(((db*)&dword_4716b)+2), dx));	// 119629 mov     word ptr cs:dword_4716B+2, dx ;~ 37EB:0B03
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000b08; 	X(MOV(*(dw*)(((db*)&word_4716f)), ax));	// 119630 mov     cs:word_4716F, ax ;~ 37EB:0B08
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000b0c; 	X(MOV(*(dw*)(((db*)&word_47171)), dx));	// 119631 mov     cs:word_47171, dx ;~ 37EB:0B0C
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000b11; 	X(MOV(*(dw*)(((db*)&word_47179)), bx));	// 119632 mov     cs:word_47179, bx ;~ 37EB:0B11
cs=0x37eb;eip=0x000b16; 	X(PUSH(cx));	// 119633 push    cx ;~ 37EB:0B16
cs=0x37eb;eip=0x000b17; 	T(MOV(ax, 0x120));	// 119634 mov     ax, 120h ;~ 37EB:0B17
cs=0x37eb;eip=0x000b1a; 	J(CALL(sub_46c57,0));	// 119635 call    sub_46C57 ;~ 37EB:0B1A
cs=0x37eb;eip=0x000b1d; 	T(MOV(ax, 0x2021));	// 119636 mov     ax, 2021h ;~ 37EB:0B1D
cs=0x37eb;eip=0x000b20; 	J(CALL(sub_46c57,0));	// 119637 call    sub_46C57 ;~ 37EB:0B20
cs=0x37eb;eip=0x000b23; 	T(MOV(ax, 0x60F0));	// 119638 mov     ax, 60F0h ;~ 37EB:0B23
cs=0x37eb;eip=0x000b26; 	J(CALL(sub_46c57,0));	// 119639 call    sub_46C57 ;~ 37EB:0B26
cs=0x37eb;eip=0x000b29; 	T(MOV(ax, 0x80F0));	// 119640 mov     ax, 80F0h ;~ 37EB:0B29
cs=0x37eb;eip=0x000b2c; 	J(CALL(sub_46c57,0));	// 119641 call    sub_46C57 ;~ 37EB:0B2C
cs=0x37eb;eip=0x000b2f; 	T(MOV(ax, 0x0C001));	// 119642 mov     ax, 0C001h ;~ 37EB:0B2F
cs=0x37eb;eip=0x000b32; 	J(CALL(sub_46c57,0));	// 119643 call    sub_46C57 ;~ 37EB:0B32
cs=0x37eb;eip=0x000b35; 	T(MOV(ax, 0x0E000));	// 119644 mov     ax, 0E000h ;~ 37EB:0B35
cs=0x37eb;eip=0x000b38; 	J(CALL(sub_46c57,0));	// 119645 call    sub_46C57 ;~ 37EB:0B38
cs=0x37eb;eip=0x000b3b; 	T(MOV(ax, 0x433F));	// 119646 mov     ax, 433Fh ;~ 37EB:0B3B
cs=0x37eb;eip=0x000b3e; 	J(CALL(sub_46c57,0));	// 119647 call    sub_46C57 ;~ 37EB:0B3E
cs=0x37eb;eip=0x000b41; 	T(MOV(ax, 0x0B001));	// 119648 mov     ax, 0B001h ;~ 37EB:0B41
cs=0x37eb;eip=0x000b44; 	T(CLI);	// 119649 cli ;~ 37EB:0B44
cs=0x37eb;eip=0x000b45; 	T(MOV(ax, 0x0A08F));	// 119650 mov     ax, 0A08Fh ;~ 37EB:0B45
cs=0x37eb;eip=0x000b48; 	J(CALL(sub_46c57,0));	// 119651 call    sub_46C57 ;~ 37EB:0B48
cs=0x37eb;eip=0x000b4b; 	T(MOV(ax, 0x0B02E));	// 119652 mov     ax, 0B02Eh ;~ 37EB:0B4B
cs=0x37eb;eip=0x000b4e; 	J(CALL(sub_46c57,0));	// 119653 call    sub_46C57 ;~ 37EB:0B4E
cs=0x37eb;eip=0x000b51; 	T(MOV(al, 0x36));	// 119654 mov     al, 36h ; '6' ;~ 37EB:0B51
cs=0x37eb;eip=0x000b53; 	S(OUT(0x43, al));	// 119655 out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0B53
cs=0x37eb;eip=0x000b55; 	T(XOR(al, al));	// 119656 xor     al, al ;~ 37EB:0B55
cs=0x37eb;eip=0x000b57; 	S(OUT(0x40, al));	// 119657 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0B57
cs=0x37eb;eip=0x000b59; 	S(OUT(0x40, al));	// 119658 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0B59
loc_46feb:
	// 10049 
cs=0x37eb;eip=0x000b5b; 	T(MOV(al, 6));	// 119661 mov     al, 6 ;~ 37EB:0B5B
cs=0x37eb;eip=0x000b5d; 	S(OUT(0x43, al));	// 119662 out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0B5D
cs=0x37eb;eip=0x000b5f; 	S(IN(al, 0x40));	// 119663 in      al, 40h         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0B5F
cs=0x37eb;eip=0x000b61; 	T(MOV(cl, al));	// 119664 mov     cl, al ;~ 37EB:0B61
cs=0x37eb;eip=0x000b63; 	S(IN(al, 0x40));	// 119665 in      al, 40h         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0B63
cs=0x37eb;eip=0x000b65; 	T(MOV(ch, al));	// 119666 mov     ch, al ;~ 37EB:0B65
cs=0x37eb;eip=0x000b67; 	T(CMP(cx, 0x0F6AD));	// 119667 cmp     cx, 0F6ADh ;~ 37EB:0B67
cs=0x37eb;eip=0x000b6b; 	J(JG(loc_46feb));	// 119668 jg      short loc_46FEB ;~ 37EB:0B6B
cs=0x37eb;eip=0x000b6d; 	T(MOV(ax, 0x0B020));	// 119669 mov     ax, 0B020h ;~ 37EB:0B6D
cs=0x37eb;eip=0x000b70; 	J(CALL(sub_46c57,0));	// 119670 call    sub_46C57 ;~ 37EB:0B70
cs=0x37eb;eip=0x000b73; 	T(MOV(ax, 0x0A000));	// 119671 mov     ax, 0A000h ;~ 37EB:0B73
cs=0x37eb;eip=0x000b76; 	J(CALL(sub_46c57,0));	// 119672 call    sub_46C57 ;~ 37EB:0B76
cs=0x37eb;eip=0x000b79; 	X(POP(cx));	// 119673 pop     cx ;~ 37EB:0B79
cs=0x37eb;eip=0x000b7a; 	J(CALL(sub_47017,0));	// 119674 call    sub_47017 ;~ 37EB:0B7A
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000b7d; 	X(MOV(*(dw*)(((db*)&word_47177)), 0));	// 119675 mov     cs:word_47177, 0 ;~ 37EB:0B7D
cs=0x37eb;eip=0x000b84; 	T(STI);	// 119676 sti ;~ 37EB:0B84
cs=0x37eb;eip=0x000b85; 	X(POP(ax));	// 119677 pop     ax ;~ 37EB:0B85
cs=0x37eb;eip=0x000b86; 	J(RETN(0));	// 119678 retn ;~ 37EB:0B86

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_46feb: 	goto loc_46feb;
        case m2c::ksub_46f7a: 	goto sub_46f7a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_47017(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_47017:
    _begin:
cs=0x37eb;eip=0x000b87; 	X(PUSH(ax));	// 119686 push    ax ;~ 37EB:0B87
cs=0x37eb;eip=0x000b88; 	X(PUSH(cx));	// 119687 push    cx ;~ 37EB:0B88
cs=0x37eb;eip=0x000b89; 	X(PUSH(dx));	// 119688 push    dx ;~ 37EB:0B89
cs=0x37eb;eip=0x000b8a; 	X(PUSH(si));	// 119689 push    si ;~ 37EB:0B8A
cs=0x37eb;eip=0x000b8b; 	X(PUSH(ds));	// 119690 push    ds ;~ 37EB:0B8B
cs=0x37eb;eip=0x000b8c; 	T(MOV(dx, 0x12));	// 119691 mov     dx, 12h ;~ 37EB:0B8C
cs=0x37eb;eip=0x000b8f; 	T(MOV(ax, 0x34DC));	// 119692 mov     ax, 34DCh ;~ 37EB:0B8F
cs=0x37eb;eip=0x000b92; 	T(DIV2(cx));	// 119693 div     cx ;~ 37EB:0B92
cs=0x37eb;eip=0x000b94; 	T(SHR(cx, 1));	// 119694 shr     cx, 1 ;~ 37EB:0B94
cs=0x37eb;eip=0x000b96; 	T(CMP(cx, dx));	// 119695 cmp     cx, dx ;~ 37EB:0B96
cs=0x37eb;eip=0x000b98; 	T(ADC(ax, 0));	// 119696 adc     ax, 0 ;~ 37EB:0B98
cs=0x37eb;eip=0x000b9b; 	T(MOV(cx, ax));	// 119697 mov     cx, ax ;~ 37EB:0B9B
cs=0x37eb;eip=0x000b9d; 	T(MOV(al, 0x36));	// 119698 mov     al, 36h ; '6' ;~ 37EB:0B9D
cs=0x37eb;eip=0x000b9f; 	S(OUT(0x43, al));	// 119699 out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0B9F
cs=0x37eb;eip=0x000ba1; 	T(MOV(al, cl));	// 119700 mov     al, cl ;~ 37EB:0BA1
cs=0x37eb;eip=0x000ba3; 	S(OUT(0x40, al));	// 119701 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0BA3
cs=0x37eb;eip=0x000ba5; 	T(MOV(al, ch));	// 119702 mov     al, ch ;~ 37EB:0BA5
cs=0x37eb;eip=0x000ba7; 	S(OUT(0x40, al));	// 119703 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0BA7
cs=0x37eb;eip=0x000ba9; 	T(MOV(ax, 0x2E9C));	// 119704 mov     ax, 2E9Ch ;~ 37EB:0BA9
cs=0x37eb;eip=0x000bac; 	T(XOR(dx, dx));	// 119705 xor     dx, dx ;~ 37EB:0BAC
cs=0x37eb;eip=0x000bae; 	T(DIV2(cx));	// 119706 div     cx ;~ 37EB:0BAE
cs=0x37eb;eip=0x000bb0; 	T(SHR(cx, 1));	// 119707 shr     cx, 1 ;~ 37EB:0BB0
cs=0x37eb;eip=0x000bb2; 	T(CMP(cx, dx));	// 119708 cmp     cx, dx ;~ 37EB:0BB2
cs=0x37eb;eip=0x000bb4; 	T(ADC(ax, 0));	// 119709 adc     ax, 0 ;~ 37EB:0BB4
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000bb7; 	X(MOV(*(dw*)(((db*)&word_4717f)), ax));	// 119710 mov     cs:word_4717F, ax ;~ 37EB:0BB7
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000bbb; 	X(MOV(*(dw*)(((db*)&word_47181)), ax));	// 119711 mov     cs:word_47181, ax ;~ 37EB:0BBB
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000bbf; 	T(MOV(ax, *(dw*)(((db*)&dword_4717b)+2)));	// 119712 mov     ax, word ptr cs:dword_4717B+2 ;~ 37EB:0BBF
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000bc3; 	T(OR(ax, *(dw*)(((db*)&dword_4717b))));	// 119713 or      ax, word ptr cs:dword_4717B ;~ 37EB:0BC3
cs=0x37eb;eip=0x000bc8; 	J(JNZ(loc_47075));	// 119714 jnz     short loc_47075 ;~ 37EB:0BC8
cs=0x37eb;eip=0x000bca; 	T(XOR(ax, ax));	// 119715 xor     ax, ax ;~ 37EB:0BCA
cs=0x37eb;eip=0x000bcc; 	T(MOV(ds, ax));	// 119716 mov     ds, ax ;~ 37EB:0BCC
cs=0x37eb;eip=0x000bce; 	T(MOV(si, 0x20));	// 119718 mov     si, 20h ; ' ' ;~ 37EB:0BCE
cs=0x37eb;eip=0x000bd1; 	T(MOV(ax, *(dw*)(raddr(ds,si+2))));	// 119719 mov     ax, [si+2] ;~ 37EB:0BD1
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000bd4; 	X(MOV(*(dw*)(((db*)&dword_4717b)+2), ax));	// 119720 mov     word ptr cs:dword_4717B+2, ax ;~ 37EB:0BD4
cs=0x37eb;eip=0x000bd8; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 119721 mov     ax, [si] ;~ 37EB:0BD8
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000bda; 	X(MOV(*(dw*)(((db*)&dword_4717b)), ax));	// 119722 mov     word ptr cs:dword_4717B, ax ;~ 37EB:0BDA
cs=0x37eb;eip=0x000bde; 	X(MOV(*(dw*)(raddr(ds,si)), 0x0C2E));	// 119723 mov     word ptr [si], 0C2Eh ;~ 37EB:0BDE
cs=0x37eb;eip=0x000be2; 	X(MOV(*(dw*)(raddr(ds,si+2)), cs));	// 119724 mov     word ptr [si+2], cs ;~ 37EB:0BE2
loc_47075:
	// 10050 
cs=0x37eb;eip=0x000be5; 	X(POP(ds));	// 119727 pop     ds ;~ 37EB:0BE5
cs=0x37eb;eip=0x000be6; 	X(POP(si));	// 119729 pop     si ;~ 37EB:0BE6
cs=0x37eb;eip=0x000be7; 	X(POP(dx));	// 119730 pop     dx ;~ 37EB:0BE7
cs=0x37eb;eip=0x000be8; 	X(POP(cx));	// 119731 pop     cx ;~ 37EB:0BE8
cs=0x37eb;eip=0x000be9; 	X(POP(ax));	// 119732 pop     ax ;~ 37EB:0BE9
cs=0x37eb;eip=0x000bea; 	J(RETN(0));	// 119733 retn ;~ 37EB:0BEA

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_47075: 	goto loc_47075;
        case m2c::ksub_47017: 	goto sub_47017;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_4707b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_4707b:
    _begin:
cs=0x37eb;eip=0x000beb; 	X(PUSH(ax));	// 119741 push    ax ;~ 37EB:0BEB
cs=0x37eb;eip=0x000bec; 	X(PUSH(di));	// 119742 push    di ;~ 37EB:0BEC
cs=0x37eb;eip=0x000bed; 	X(PUSH(ds));	// 119743 push    ds ;~ 37EB:0BED
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000bee; 	T(MOV(ax, *(dw*)(((db*)&dword_4717b)+2)));	// 119744 mov     ax, word ptr cs:dword_4717B+2 ;~ 37EB:0BEE
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000bf2; 	T(OR(ax, *(dw*)(((db*)&dword_4717b))));	// 119745 or      ax, word ptr cs:dword_4717B ;~ 37EB:0BF2
cs=0x37eb;eip=0x000bf7; 	J(JZ(loc_470ba));	// 119746 jz      short loc_470BA ;~ 37EB:0BF7
cs=0x37eb;eip=0x000bf9; 	T(CLI);	// 119747 cli ;~ 37EB:0BF9
cs=0x37eb;eip=0x000bfa; 	T(MOV(al, 0x36));	// 119748 mov     al, 36h ; '6' ;~ 37EB:0BFA
cs=0x37eb;eip=0x000bfc; 	S(OUT(0x43, al));	// 119749 out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0BFC
cs=0x37eb;eip=0x000bfe; 	T(MOV(ax, 0x2E9C));	// 119750 mov     ax, 2E9Ch ;~ 37EB:0BFE
cs=0x37eb;eip=0x000c01; 	S(OUT(0x40, al));	// 119751 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0C01
cs=0x37eb;eip=0x000c03; 	T(MOV(al, ah));	// 119752 mov     al, ah ;~ 37EB:0C03
cs=0x37eb;eip=0x000c05; 	S(OUT(0x40, al));	// 119753 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0C05
cs=0x37eb;eip=0x000c07; 	T(XOR(ax, ax));	// 119754 xor     ax, ax ;~ 37EB:0C07
cs=0x37eb;eip=0x000c09; 	T(MOV(ds, ax));	// 119755 mov     ds, ax ;~ 37EB:0C09
cs=0x37eb;eip=0x000c0b; 	T(MOV(di, 0x20));	// 119757 mov     di, 20h ; ' ' ;~ 37EB:0C0B
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c0e; 	T(MOV(ax, *(dw*)(((db*)&dword_4717b)+2)));	// 119758 mov     ax, word ptr cs:dword_4717B+2 ;~ 37EB:0C0E
cs=0x37eb;eip=0x000c12; 	X(MOV(*(dw*)(raddr(ds,di+2)), ax));	// 119759 mov     [di+2], ax ;~ 37EB:0C12
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c15; 	T(MOV(ax, *(dw*)(((db*)&dword_4717b))));	// 119760 mov     ax, word ptr cs:dword_4717B ;~ 37EB:0C15
cs=0x37eb;eip=0x000c19; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 119761 mov     [di], ax ;~ 37EB:0C19
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c1b; 	X(MOV(*(dw*)(((db*)&dword_4717b)+2), 0));	// 119762 mov     word ptr cs:dword_4717B+2, 0 ;~ 37EB:0C1B
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c22; 	X(MOV(*(dw*)(((db*)&dword_4717b)), 0));	// 119763 mov     word ptr cs:dword_4717B, 0 ;~ 37EB:0C22
cs=0x37eb;eip=0x000c29; 	T(STI);	// 119764 sti ;~ 37EB:0C29
loc_470ba:
	// 10051 
cs=0x37eb;eip=0x000c2a; 	X(POP(ds));	// 119767 pop     ds ;~ 37EB:0C2A
cs=0x37eb;eip=0x000c2b; 	X(POP(di));	// 119769 pop     di ;~ 37EB:0C2B
cs=0x37eb;eip=0x000c2c; 	X(POP(ax));	// 119770 pop     ax ;~ 37EB:0C2C
cs=0x37eb;eip=0x000c2d; 	J(RETN(0));	// 119771 retn ;~ 37EB:0C2D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_470ba: 	goto loc_470ba;
        case m2c::ksub_4707b: 	goto sub_4707b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg041_c2e_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg041_c2e_proc:
    _begin:
cs=0x37eb;eip=0x000c2e; 	X(PUSH(ax));	// 119775 push    ax ;~ 37EB:0C2E
cs=0x37eb;eip=0x000c2f; 	X(PUSH(bx));	// 119776 push    bx ;~ 37EB:0C2F
cs=0x37eb;eip=0x000c30; 	X(PUSH(cx));	// 119777 push    cx ;~ 37EB:0C30
cs=0x37eb;eip=0x000c31; 	X(PUSH(dx));	// 119778 push    dx ;~ 37EB:0C31
cs=0x37eb;eip=0x000c32; 	X(PUSH(si));	// 119779 push    si ;~ 37EB:0C32
cs=0x37eb;eip=0x000c33; 	X(PUSH(es));	// 119780 push    es ;~ 37EB:0C33
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c34; 	T(MOV(ax, *(dw*)(((db*)&word_4716f))));	// 119781 mov     ax, cs:word_4716F ;~ 37EB:0C34
cs=0x37eb;eip=0x000c38; 	T(OR(ax, ax));	// 119782 or      ax, ax ;~ 37EB:0C38
cs=0x37eb;eip=0x000c3a; 	J(JZ(loc_470fb));	// 119783 jz      short loc_470FB ;~ 37EB:0C3A
cs=0x37eb;eip=0x000c3c; 	T(MOV(al, 0x40));	// 119784 mov     al, 40h ; '@' ;~ 37EB:0C3C
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c3e; 	T(MOV(dx, *(dw*)(((db*)&word_46e02))));	// 119785 mov     dx, cs:word_46E02 ;~ 37EB:0C3E
cs=0x37eb;eip=0x000c43; 	S(OUT(dx, al));	// 119786 out     dx, al ;~ 37EB:0C43
cs=0x37eb;eip=0x000c44; 	T(MOV(cx, 0x0A));	// 119787 mov     cx, 0Ah ;~ 37EB:0C44
loc_470d7:
	// 10052 
cs=0x37eb;eip=0x000c47; 	S(IN(al, dx));	// 119790 in      al, dx ;~ 37EB:0C47
cs=0x37eb;eip=0x000c48; 	J(LOOP(loc_470d7));	// 119791 loop    loc_470D7 ;~ 37EB:0C48
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c4a; 	T(LES(bx, *(dd*)(((db*)&dword_47173))));	// 119792 les     bx, cs:dword_47173 ;~ 37EB:0C4A
cs=0x37eb;eip=0x000c4f; 	T(MOV(al, *(raddr(es,bx))));	// 119793 mov     al, es:[bx] ;~ 37EB:0C4F
cs=0x37eb;eip=0x000c52; 	T(XOR(ah, ah));	// 119794 xor     ah, ah ;~ 37EB:0C52
cs=0x37eb;eip=0x000c54; 	T(MOV(si, ax));	// 119795 mov     si, ax ;~ 37EB:0C54
cs=0x37eb;eip=0x000c56; 	T(MOV(al, *(raddr(cs,si+0x0CF3))));	// 119796 mov     al, cs:[si+0CF3h] ;~ 37EB:0C56
cs=0x37eb;eip=0x000c5b; 	T(INC(dx));	// 119797 inc     dx ;~ 37EB:0C5B
cs=0x37eb;eip=0x000c5c; 	S(OUT(dx, al));	// 119798 out     dx, al ;~ 37EB:0C5C
cs=0x37eb;eip=0x000c5d; 	T(INC(bx));	// 119799 inc     bx ;~ 37EB:0C5D
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c5e; 	X(MOV(*(dw*)(((db*)&dword_47173)), bx));	// 119800 mov     word ptr cs:dword_47173, bx ;~ 37EB:0C5E
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c63; 	X(SUB(*(dw*)(((db*)&word_4716f)), 1));	// 119801 sub     cs:word_4716F, 1 ;~ 37EB:0C63
cs=0x37eb;eip=0x000c69; 	J(JMP(loc_4712f));	// 119802 jmp     short loc_4712F ;~ 37EB:0C69
loc_470fb:
	// 10053 
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c6b; 	T(CMP(*(dw*)(((db*)&word_47179)), 0));	// 119806 cmp     cs:word_47179, 0 ;~ 37EB:0C6B
cs=0x37eb;eip=0x000c71; 	J(JZ(loc_4710a));	// 119807 jz      short loc_4710A ;~ 37EB:0C71
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c73; 	X(DEC(*(dw*)(((db*)&word_47179))));	// 119808 dec     cs:word_47179 ;~ 37EB:0C73
cs=0x37eb;eip=0x000c78; 	J(JZ(loc_4712a));	// 119809 jz      short loc_4712A ;~ 37EB:0C78
loc_4710a:
	// 10054 
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c7a; 	T(LES(bx, *(dd*)(((db*)&dword_47167))));	// 119812 les     bx, cs:dword_47167 ;~ 37EB:0C7A
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c7f; 	X(MOV(*(dw*)(((db*)&dword_47173)), bx));	// 119813 mov     word ptr cs:dword_47173, bx ;~ 37EB:0C7F
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c84; 	X(MOV(*(dw*)(((db*)&dword_47173)+2), es));	// 119814 mov     word ptr cs:dword_47173+2, es ;~ 37EB:0C84
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c89; 	T(LES(bx, *(dd*)(((db*)&dword_4716b))));	// 119815 les     bx, cs:dword_4716B ;~ 37EB:0C89
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c8e; 	X(MOV(*(dw*)(((db*)&word_4716f)), bx));	// 119816 mov     cs:word_4716F, bx ;~ 37EB:0C8E
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c93; 	X(MOV(*(dw*)(((db*)&word_47171)), es));	// 119817 mov     cs:word_47171, es ;~ 37EB:0C93
cs=0x37eb;eip=0x000c98; 	J(JMP(loc_4712f));	// 119818 jmp     short loc_4712F ;~ 37EB:0C98
loc_4712a:
	// 10055 
cs=0x37eb;eip=0x000c9a; 	J(CALL(sub_47154,0));	// 119822 call    sub_47154 ;~ 37EB:0C9A
cs=0x37eb;eip=0x000c9d; 	J(JMP(loc_47149));	// 119823 jmp     short loc_47149 ;~ 37EB:0C9D
loc_4712f:
	// 10056 
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c9f; 	X(DEC(*(dw*)(((db*)&word_47181))));	// 119828 dec     cs:word_47181 ;~ 37EB:0C9F
cs=0x37eb;eip=0x000ca4; 	J(JNZ(loc_47149));	// 119829 jnz     short loc_47149 ;~ 37EB:0CA4
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000ca6; 	T(MOV(ax, *(dw*)(((db*)&word_4717f))));	// 119830 mov     ax, cs:word_4717F ;~ 37EB:0CA6
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000caa; 	X(MOV(*(dw*)(((db*)&word_47181)), ax));	// 119831 mov     cs:word_47181, ax ;~ 37EB:0CAA
cs=0x37eb;eip=0x000cae; 	X(POP(es));	// 119832 pop     es ;~ 37EB:0CAE
cs=0x37eb;eip=0x000caf; 	X(POP(si));	// 119833 pop     si ;~ 37EB:0CAF
cs=0x37eb;eip=0x000cb0; 	X(POP(dx));	// 119834 pop     dx ;~ 37EB:0CB0
cs=0x37eb;eip=0x000cb1; 	X(POP(cx));	// 119835 pop     cx ;~ 37EB:0CB1
cs=0x37eb;eip=0x000cb2; 	X(POP(bx));	// 119836 pop     bx ;~ 37EB:0CB2
cs=0x37eb;eip=0x000cb3; 	X(POP(ax));	// 119837 pop     ax ;~ 37EB:0CB3
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000cb4; __disp=*(dd*)(((db*)&dword_4717b));
	J(return __dispatch_call(__disp, _state););	// 119838 jmp     cs:dword_4717B ;~ 37EB:0CB4
loc_47149:
	// 10057 
cs=0x37eb;eip=0x000cb9; 	T(MOV(al, 0x20));	// 119843 mov     al, 20h ; ' ' ;~ 37EB:0CB9
cs=0x37eb;eip=0x000cbb; 	S(OUT(0x20, al));	// 119844 out     20h, al         ; Interrupt controller, 8259A. ;~ 37EB:0CBB
cs=0x37eb;eip=0x000cbd; 	X(POP(es));	// 119845 pop     es ;~ 37EB:0CBD
cs=0x37eb;eip=0x000cbe; 	X(POP(si));	// 119846 pop     si ;~ 37EB:0CBE
cs=0x37eb;eip=0x000cbf; 	X(POP(dx));	// 119847 pop     dx ;~ 37EB:0CBF
cs=0x37eb;eip=0x000cc0; 	X(POP(cx));	// 119848 pop     cx ;~ 37EB:0CC0
cs=0x37eb;eip=0x000cc1; 	X(POP(bx));	// 119849 pop     bx ;~ 37EB:0CC1
cs=0x37eb;eip=0x000cc2; 	X(POP(ax));	// 119850 pop     ax ;~ 37EB:0CC2
cs=0x37eb;eip=0x000cc3; 	J(IRET);	// 119851 iret ;~ 37EB:0CC3

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_470d7: 	goto loc_470d7;
        case m2c::kloc_470fb: 	goto loc_470fb;
        case m2c::kloc_4710a: 	goto loc_4710a;
        case m2c::kloc_4712a: 	goto loc_4712a;
        case m2c::kloc_4712f: 	goto loc_4712f;
        case m2c::kloc_47149: 	goto loc_47149;
        case m2c::kseg041_c2e_proc: 	goto seg041_c2e_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_47154(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_47154:
    _begin:
cs=0x37eb;eip=0x000cc4; 	X(PUSH(ax));	// 119858 push    ax ;~ 37EB:0CC4
cs=0x37eb;eip=0x000cc5; 	J(CALL(sub_4707b,0));	// 119859 call    sub_4707B ;~ 37EB:0CC5
cs=0x37eb;eip=0x000cc8; 	T(MOV(ax, 0x0B001));	// 119860 mov     ax, 0B001h ;~ 37EB:0CC8
cs=0x37eb;eip=0x000ccb; 	J(CALL(sub_46c57,0));	// 119861 call    sub_46C57 ;~ 37EB:0CCB
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000cce; 	X(MOV(*(dw*)(((db*)&word_47177)), 1));	// 119862 mov     cs:word_47177, 1 ;~ 37EB:0CCE
cs=0x37eb;eip=0x000cd5; 	X(POP(ax));	// 119863 pop     ax ;~ 37EB:0CD5
cs=0x37eb;eip=0x000cd6; 	J(RETN(0));	// 119864 retn ;~ 37EB:0CD6

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_47154: 	goto sub_47154;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

