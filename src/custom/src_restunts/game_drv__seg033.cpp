/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool _group22(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group22:
    _begin:
setup_mcgawnd1:
	// 89146 
cs=0x2c37;eip=0x000008; 	T(MOV(ax, *(dw*)(((db*)&mcgawndsprite))));	// 89148 mov     ax, word ptr mcgawndsprite ;~ 2C37:0008
ret_2c37_b:
	// 10505 
cs=0x2c37;eip=0x00000b; 	T(OR(ax, *(dw*)(((db*)&mcgawndsprite)+2)));	// 89149 or      ax, word ptr mcgawndsprite+2 ;~ 2C37:000B
cs=0x2c37;eip=0x00000f; 	R(JNZ(loc_3a97c));	// 89150 jnz     short loc_3A97C ;~ 2C37:000F
cs=0x2c37;eip=0x000011; 	T(MOV(ax, 0x0F));	// 89151 mov     ax, 0Fh ;~ 2C37:0011
cs=0x2c37;eip=0x000014; 	X(PUSH(ax));	// 89152 push    ax ;~ 2C37:0014
cs=0x2c37;eip=0x000015; 	T(MOV(ax, 200));	// 89153 mov     ax, 200 ;~ 2C37:0015
cs=0x2c37;eip=0x000018; 	X(PUSH(ax));	// 89154 push    ax ;~ 2C37:0018
cs=0x2c37;eip=0x000019; 	T(MOV(ax, 320));	// 89155 mov     ax, 320 ;~ 2C37:0019
cs=0x2c37;eip=0x00001c; 	X(PUSH(ax));	// 89156 push    ax ;~ 2C37:001C
cs=0x2c37;eip=0x00001d; 	R(CALLF(sprite_make_wnd,0));	// 89157 call    sprite_make_wnd ;~ 2C37:001D
cs=0x2c37;eip=0x000022; 	T(ADD(sp, 6));	// 89158 add     sp, 6 ;~ 2C37:0022
cs=0x2c37;eip=0x000025; 	X(MOV(*(dw*)(((db*)&mcgawndsprite)), ax));	// 89159 mov     word ptr mcgawndsprite, ax ;~ 2C37:0025
cs=0x2c37;eip=0x000028; 	X(MOV(*(dw*)(((db*)&mcgawndsprite)+2), dx));	// 89160 mov     word ptr mcgawndsprite+2, dx ;~ 2C37:0028
loc_3a97c:
	// 10506 
cs=0x2c37;eip=0x00002c; 	T(MOV(ax, offset(seg012,sprite2)));	// 89163 mov     ax, offset sprite2 ;~ 2C37:002C
cs=0x2c37;eip=0x00002f; 	T(MOV(dx, seg_offset(seg012)));	// 89164 mov     dx, seg seg012 ;~ 2C37:002F
cs=0x2c37;eip=0x000032; 	X(PUSH(dx));	// 89165 push    dx ;~ 2C37:0032
cs=0x2c37;eip=0x000033; 	X(PUSH(ax));	// 89166 push    ax ;~ 2C37:0033
cs=0x2c37;eip=0x000034; 	R(CALLF(sprite_set_1_from_argptr,0));	// 89167 call    sprite_set_1_from_argptr ;~ 2C37:0034
cs=0x2c37;eip=0x000039; 	T(ADD(sp, 4));	// 89168 add     sp, 4 ;~ 2C37:0039
cs=0x2c37;eip=0x00003c; 	T(LES(bx, mcgawndsprite));	// 89169 les     bx, mcgawndsprite ;~ 2C37:003C
cs=0x2c37;eip=0x000040; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 89170 push    word ptr es:[bx+2] ;~ 2C37:0040
cs=0x2c37;eip=0x000044; 	X(PUSH(*(dw*)(raddr(es,bx+0))));	// 89171 push    word ptr es:[bx+0] ;~ 2C37:0044
cs=0x2c37;eip=0x000047; 	R(CALLF(sprite_putimage,0));	// 89172 call    sprite_putimage ;~ 2C37:0047
cs=0x2c37;eip=0x00004c; 	T(ADD(sp, 4));	// 89173 add     sp, 4 ;~ 2C37:004C
cs=0x2c37;eip=0x00004f; 	R(RETF(0));	// 89174 retf ;~ 2C37:004F
setup_mcgawnd2:
	// 89181 
cs=0x2c37;eip=0x000050; 	T(MOV(ax, *(dw*)(((db*)&mcgawndsprite))));	// 89183 mov     ax, word ptr mcgawndsprite ;~ 2C37:0050
ret_2c37_53:
	// 10507 
cs=0x2c37;eip=0x000053; 	T(OR(ax, *(dw*)(((db*)&mcgawndsprite)+2)));	// 89184 or      ax, word ptr mcgawndsprite+2 ;~ 2C37:0053
cs=0x2c37;eip=0x000057; 	R(JNZ(loc_3a9c4));	// 89185 jnz     short loc_3A9C4 ;~ 2C37:0057
cs=0x2c37;eip=0x000059; 	T(MOV(ax, 0x0F));	// 89186 mov     ax, 0Fh ;~ 2C37:0059
cs=0x2c37;eip=0x00005c; 	X(PUSH(ax));	// 89187 push    ax ;~ 2C37:005C
cs=0x2c37;eip=0x00005d; 	T(MOV(ax, 200));	// 89188 mov     ax, 200 ;~ 2C37:005D
cs=0x2c37;eip=0x000060; 	X(PUSH(ax));	// 89189 push    ax ;~ 2C37:0060
cs=0x2c37;eip=0x000061; 	T(MOV(ax, 320));	// 89190 mov     ax, 320 ;~ 2C37:0061
cs=0x2c37;eip=0x000064; 	X(PUSH(ax));	// 89191 push    ax ;~ 2C37:0064
cs=0x2c37;eip=0x000065; 	R(CALLF(sprite_make_wnd,0));	// 89192 call    sprite_make_wnd ;~ 2C37:0065
cs=0x2c37;eip=0x00006a; 	T(ADD(sp, 6));	// 89193 add     sp, 6 ;~ 2C37:006A
cs=0x2c37;eip=0x00006d; 	X(MOV(*(dw*)(((db*)&mcgawndsprite)), ax));	// 89194 mov     word ptr mcgawndsprite, ax ;~ 2C37:006D
cs=0x2c37;eip=0x000070; 	X(MOV(*(dw*)(((db*)&mcgawndsprite)+2), dx));	// 89195 mov     word ptr mcgawndsprite+2, dx ;~ 2C37:0070
loc_3a9c4:
	// 10508 
cs=0x2c37;eip=0x000074; 	X(PUSH(*(dw*)(((db*)&mcgawndsprite)+2)));	// 89198 push    word ptr mcgawndsprite+2 ;~ 2C37:0074
cs=0x2c37;eip=0x000078; 	X(PUSH(*(dw*)(((db*)&mcgawndsprite))));	// 89199 push    word ptr mcgawndsprite ;~ 2C37:0078
cs=0x2c37;eip=0x00007c; 	R(CALLF(sprite_set_1_from_argptr,0));	// 89200 call    sprite_set_1_from_argptr ;~ 2C37:007C
cs=0x2c37;eip=0x000081; 	T(ADD(sp, 4));	// 89201 add     sp, 4 ;~ 2C37:0081
cs=0x2c37;eip=0x000084; 	R(RETF(0));	// 89202 retf ;~ 2C37:0084

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return true;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_3a97c: 	goto loc_3a97c;
        case m2c::kloc_3a9c4: 	goto loc_3a9c4;
        case m2c::kret_2c37_53: 	goto ret_2c37_53;
        case m2c::kret_2c37_b: 	goto ret_2c37_b;
        case m2c::ksetup_mcgawnd1: 	goto setup_mcgawnd1;
        case m2c::ksetup_mcgawnd2: 	goto setup_mcgawnd2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

