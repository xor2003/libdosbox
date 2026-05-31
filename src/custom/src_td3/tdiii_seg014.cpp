/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool sub_26f58(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_26f58:
    _begin:
#undef arg_0
#define arg_0 6
	// 43480 arg_0           = word ptr  6 ;~ 1897:0008
ret_1897_8:
	// 7564 
cs=0x1897;eip=0x000008; 	X(PUSH(bp));	// 43482 push    bp ;~ 1897:0008
cs=0x1897;eip=0x000009; 	T(MOV(bp, sp));	// 43483 mov     bp, sp ;~ 1897:0009
cs=0x1897;eip=0x00000b; 	X(PUSH(si));	// 43484 push    si ;~ 1897:000B
cs=0x1897;eip=0x00000c; 	X(PUSH(di));	// 43485 push    di ;~ 1897:000C
cs=0x1897;eip=0x00000d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 43486 mov     ax, [bp+arg_0] ;~ 1897:000D
cs=0x1897;eip=0x000010; 	T(AND(ax, 1));	// 43487 and     ax, 1 ;~ 1897:0010
cs=0x1897;eip=0x000013; 	T(CMP(al, byte_37b87));	// 43488 cmp     al, byte_37B87 ;~ 1897:0013
cs=0x1897;eip=0x000017; 	R(JZ(loc_26fb2));	// 43489 jz      short loc_26FB2 ;~ 1897:0017
cs=0x1897;eip=0x000019; 	X(MOV(byte_37b87, al));	// 43490 mov     byte_37B87, al ;~ 1897:0019
cs=0x1897;eip=0x00001c; 	T(MOV(dx, ax));	// 43491 mov     dx, ax ;~ 1897:001C
cs=0x1897;eip=0x00001e; 	T(MOV(ax, 2));	// 43492 mov     ax, 2 ;~ 1897:001E
cs=0x1897;eip=0x000021; 	T(SUB(ax, dx));	// 43493 sub     ax, dx ;~ 1897:0021
cs=0x1897;eip=0x000023; 	R(_INT(0x33));	// 43494 int     33h             ; - MS MOUSE - ;~ 1897:0023
cs=0x1897;eip=0x000025; 	T(CMP(byte_37b87, 0));	// 43495 cmp     byte_37B87, 0 ;~ 1897:0025
cs=0x1897;eip=0x00002a; 	R(JNZ(loc_26fb2));	// 43496 jnz     short loc_26FB2 ;~ 1897:002A
cs=0x1897;eip=0x00002c; 	T(CMP(byte_37b89, 0x0D));	// 43497 cmp     byte_37B89, 0Dh ;~ 1897:002C
cs=0x1897;eip=0x000031; 	R(JL(loc_26fb2));	// 43498 jl      short loc_26FB2 ;~ 1897:0031
cs=0x1897;eip=0x000033; 	T(CMP(byte_37b89, 0x12));	// 43499 cmp     byte_37B89, 12h ;~ 1897:0033
cs=0x1897;eip=0x000038; 	R(JG(loc_26fb2));	// 43500 jg      short loc_26FB2 ;~ 1897:0038
cs=0x1897;eip=0x00003a; 	T(MOV(cl, byte_37b81));	// 43501 mov     cl, byte_37B81 ;~ 1897:003A
cs=0x1897;eip=0x00003e; 	X(PUSH(ax));	// 43502 push    ax ;~ 1897:003E
cs=0x1897;eip=0x00003f; 	T(MOV(al, 0));	// 43503 mov     al, 0 ;~ 1897:003F
cs=0x1897;eip=0x000041; 	T(MOV(ah, cl));	// 43504 mov     ah, cl ;~ 1897:0041
cs=0x1897;eip=0x000043; 	X(PUSH(dx));	// 43505 push    dx ;~ 1897:0043
cs=0x1897;eip=0x000044; 	T(MOV(dx, 0x3CE));	// 43506 mov     dx, 3CEh ;~ 1897:0044
cs=0x1897;eip=0x000047; 	R(OUT(dx, ax));	// 43507 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1897:0047
cs=0x1897;eip=0x000048; 	X(POP(dx));	// 43510 pop     dx ;~ 1897:0048
cs=0x1897;eip=0x000049; 	X(POP(ax));	// 43511 pop     ax ;~ 1897:0049
cs=0x1897;eip=0x00004a; 	X(PUSH(ax));	// 43512 push    ax ;~ 1897:004A
cs=0x1897;eip=0x00004b; 	T(MOV(al, 1));	// 43513 mov     al, 1 ;~ 1897:004B
cs=0x1897;eip=0x00004d; 	T(MOV(ah, 0x0F));	// 43514 mov     ah, 0Fh ;~ 1897:004D
cs=0x1897;eip=0x00004f; 	X(PUSH(dx));	// 43515 push    dx ;~ 1897:004F
cs=0x1897;eip=0x000050; 	T(MOV(dx, 0x3CE));	// 43516 mov     dx, 3CEh ;~ 1897:0050
cs=0x1897;eip=0x000053; 	R(OUT(dx, ax));	// 43517 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1897:0053
cs=0x1897;eip=0x000054; 	X(POP(dx));	// 43519 pop     dx ;~ 1897:0054
cs=0x1897;eip=0x000055; 	X(POP(ax));	// 43520 pop     ax ;~ 1897:0055
cs=0x1897;eip=0x000056; 	X(PUSH(ax));	// 43521 push    ax ;~ 1897:0056
cs=0x1897;eip=0x000057; 	T(MOV(al, 2));	// 43522 mov     al, 2 ;~ 1897:0057
cs=0x1897;eip=0x000059; 	T(MOV(ah, cl));	// 43523 mov     ah, cl ;~ 1897:0059
cs=0x1897;eip=0x00005b; 	X(PUSH(dx));	// 43524 push    dx ;~ 1897:005B
cs=0x1897;eip=0x00005c; 	T(MOV(dx, 0x3CE));	// 43525 mov     dx, 3CEh ;~ 1897:005C
cs=0x1897;eip=0x00005f; 	R(OUT(dx, ax));	// 43526 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1897:005F
cs=0x1897;eip=0x000060; 	X(POP(dx));	// 43529 pop     dx ;~ 1897:0060
cs=0x1897;eip=0x000061; 	X(POP(ax));	// 43530 pop     ax ;~ 1897:0061
loc_26fb2:
	// 7565 
cs=0x1897;eip=0x000062; 	T(XOR(ax, ax));	// 43534 xor     ax, ax ;~ 1897:0062
cs=0x1897;eip=0x000064; 	X(POP(di));	// 43535 pop     di ;~ 1897:0064
cs=0x1897;eip=0x000065; 	X(POP(si));	// 43536 pop     si ;~ 1897:0065
cs=0x1897;eip=0x000066; 	X(POP(bp));	// 43537 pop     bp ;~ 1897:0066
cs=0x1897;eip=0x000067; 	R(RETF(0));	// 43538 retf ;~ 1897:0067

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_26fb2: 	goto loc_26fb2;
        case m2c::ksub_26f58: 	goto sub_26f58;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

