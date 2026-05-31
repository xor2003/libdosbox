/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool sub_26e6e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_26e6e:
    _begin:
cs=0x1888;eip=0x00000e; 	X(PUSH(si));	// 43268 push    si ;~ 1888:000E
ret_1888_f:
	// 7555 
cs=0x1888;eip=0x00000f; 	X(PUSH(di));	// 43269 push    di ;~ 1888:000F
cs=0x1888;eip=0x000010; 	T(XOR(ax, ax));	// 43270 xor     ax, ax ;~ 1888:0010
cs=0x1888;eip=0x000012; 	R(_INT(0x33));	// 43271 int     33h             ; - MS MOUSE - RESET DRIVER AND READ STATUS ;~ 1888:0012
cs=0x1888;eip=0x000014; 	T(OR(ax, ax));	// 43274 or      ax, ax ;~ 1888:0014
cs=0x1888;eip=0x000016; 	R(JGE(loc_26ebf));	// 43275 jge     short loc_26EBF ;~ 1888:0016
cs=0x1888;eip=0x000018; 	X(PUSH(bx));	// 43276 push    bx ;~ 1888:0018
cs=0x1888;eip=0x000019; 	X(MOV(byte_37b87, 0));	// 43277 mov     byte_37B87, 0 ;~ 1888:0019
cs=0x1888;eip=0x00001e; 	X(MOV(byte_37b86, 1));	// 43278 mov     byte_37B86, 1 ;~ 1888:001E
cs=0x1888;eip=0x000023; 	T(CMP(word_38018, 0));	// 43279 cmp     word_38018, 0 ;~ 1888:0023
cs=0x1888;eip=0x000028; 	R(JZ(loc_26e9f));	// 43280 jz      short loc_26E9F ;~ 1888:0028
cs=0x1888;eip=0x00002a; 	T(MOV(ax, 3));	// 43281 mov     ax, 3 ;~ 1888:002A
cs=0x1888;eip=0x00002d; 	R(_INT(0x33));	// 43282 int     33h             ; - MS MOUSE - RETURN POSITION AND BUTTON STATUS ;~ 1888:002D
cs=0x1888;eip=0x00002f; 	T(MOV(ax, cx));	// 43284 mov     ax, cx ;~ 1888:002F
cs=0x1888;eip=0x000031; 	T(CWD);	// 43285 cwd ;~ 1888:0031
cs=0x1888;eip=0x000032; 	X(DIV2(word_3809c));	// 43286 div     word_3809C ;~ 1888:0032
cs=0x1888;eip=0x000036; 	X(MOV(byte_37b8f, al));	// 43287 mov     byte_37B8F, al ;~ 1888:0036
cs=0x1888;eip=0x000039; 	X(MOV(byte_37b90, ah));	// 43288 mov     byte_37B90, ah ;~ 1888:0039
cs=0x1888;eip=0x00003d; 	R(JMP(loc_26eb4));	// 43289 jmp     short loc_26EB4 ;~ 1888:003D
loc_26e9f:
	// 7556 
cs=0x1888;eip=0x00003f; 	T(MOV(ax, word_38044));	// 43293 mov     ax, word_38044 ;~ 1888:003F
cs=0x1888;eip=0x000042; 	T(SHR(ax, 1));	// 43294 shr     ax, 1 ;~ 1888:0042
cs=0x1888;eip=0x000044; 	T(SHR(ax, 1));	// 43295 shr     ax, 1 ;~ 1888:0044
cs=0x1888;eip=0x000046; 	T(SHR(ax, 1));	// 43296 shr     ax, 1 ;~ 1888:0046
cs=0x1888;eip=0x000048; 	T(XOR(al, 1));	// 43297 xor     al, 1 ;~ 1888:0048
cs=0x1888;eip=0x00004a; 	T(AND(al, 7));	// 43298 and     al, 7 ;~ 1888:004A
cs=0x1888;eip=0x00004c; 	X(MOV(byte_37b8f, al));	// 43299 mov     byte_37B8F, al ;~ 1888:004C
cs=0x1888;eip=0x00004f; 	X(MOV(byte_37b90, 3));	// 43300 mov     byte_37B90, 3 ;~ 1888:004F
loc_26eb4:
	// 7557 
cs=0x1888;eip=0x000054; 	X(POP(ax));	// 43303 pop     ax ;~ 1888:0054
cs=0x1888;eip=0x000055; 	T(OR(ax, ax));	// 43304 or      ax, ax ;~ 1888:0055
cs=0x1888;eip=0x000057; 	R(JG(loc_26ebc));	// 43305 jg      short loc_26EBC ;~ 1888:0057
cs=0x1888;eip=0x000059; 	T(ADD(ax, 3));	// 43306 add     ax, 3 ;~ 1888:0059
loc_26ebc:
	// 7558 
cs=0x1888;eip=0x00005c; 	X(POP(di));	// 43310 pop     di ;~ 1888:005C
cs=0x1888;eip=0x00005d; 	X(POP(si));	// 43311 pop     si ;~ 1888:005D
cs=0x1888;eip=0x00005e; 	R(RETF(0));	// 43312 retf ;~ 1888:005E
loc_26ebf:
	// 7559 
cs=0x1888;eip=0x00005f; 	T(MOV(ax, 0x0FFFF));	// 43316 mov     ax, 0FFFFh ;~ 1888:005F
cs=0x1888;eip=0x000062; 	R(JMP(loc_26ebc));	// 43317 jmp     short loc_26EBC ;~ 1888:0062

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_26e9f: 	goto loc_26e9f;
        case m2c::kloc_26eb4: 	goto loc_26eb4;
        case m2c::kloc_26ebc: 	goto loc_26ebc;
        case m2c::kloc_26ebf: 	goto loc_26ebf;
        case m2c::kret_1888_f: 	goto ret_1888_f;
        case m2c::ksub_26e6e: 	goto sub_26e6e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

