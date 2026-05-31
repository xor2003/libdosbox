/* THIS IS GENERATED FILE */

        
#include "f.exe.h"

                

 bool seg13dd_0_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg13dd_0_proc:
    _begin:
loc_13dd0:
	// 4661 
cs=0x57f;eip=0x000000; 	T(ah = 1;);	// 9555                  mov     ah, 1 ;~ 057F:0000
cs=0x57f;eip=0x000002; 	S(_INT(0x21));	// 9556                  int     21h             ; DOS - KEYBOARD INPUT ;~ 057F:0002
cs=0x57f;eip=0x000004; 	J(RETF(0));	// 9558                  retf ;~ 057F:0004
ret_57f_5:
	// 4662 
cs=0x57f;eip=0x000005; 	T(SUB(ah, ah));	// 9560                  sub     ah, ah ;~ 057F:0005
cs=0x57f;eip=0x000007; 	S(_INT(0x16));	// 9561                  int     16h             ; KEYBOARD - READ CHAR FROM BUFFER, WAIT IF EMPTY ;~ 057F:0007
cs=0x57f;eip=0x000009; 	J(RETF(0));	// 9563                  retf ;~ 057F:0009
ret_57f_a:
	// 4663 
cs=0x57f;eip=0x00000a; 	T(ah = 1;);	// 9565                  mov     ah, 1 ;~ 057F:000A
cs=0x57f;eip=0x00000c; 	S(_INT(0x16));	// 9566                  int     16h             ; KEYBOARD - CHECK BUFFER, DO NOT CLEAR ;~ 057F:000C
cs=0x57f;eip=0x00000e; 	J(JZ(loc_13de3));	// 9570                  jz      short loc_13DE3 ;~ 057F:000E
cs=0x57f;eip=0x000010; 	T(SUB(ax, ax));	// 9571                  sub     ax, ax ;~ 057F:0010
cs=0x57f;eip=0x000012; 	J(RETF(0));	// 9572                  retf ;~ 057F:0012
loc_13de3:
	// 4664 
cs=0x57f;eip=0x000013; 	T(SUB(ax, ax));	// 9576                  sub     ax, ax ;~ 057F:0013
cs=0x57f;eip=0x000015; 	T(NOT(ax));	// 9577                  not     ax ;~ 057F:0015
cs=0x57f;eip=0x000017; 	J(RETF(0));	// 9578                  retf ;~ 057F:0017
ret_57f_18:
	// 4665 
cs=0x57f;eip=0x000018; 	X(PUSH(es));	// 9580                  push    es ;~ 057F:0018
loc_13de9:
	// 4666 
cs=0x57f;eip=0x000019; 	T(SUB(ax, ax));	// 9583                  sub     ax, ax ;~ 057F:0019
cs=0x57f;eip=0x00001b; 	T(es = ax;);	// 9584                  mov     es, ax ;~ 057F:001B
cs=0x57f;eip=0x00001d; 	T(MOV(al, *(raddr(es,0x417))));	// 9585                  mov     al, es:417h ;~ 057F:001D
cs=0x57f;eip=0x000021; 	T(AND(al, 0x0F0));	// 9586                  and     al, 0F0h ;~ 057F:0021
cs=0x57f;eip=0x000023; 	X(MOV(*(raddr(es,0x417)), al));	// 9587                  mov     es:417h, al ;~ 057F:0023
cs=0x57f;eip=0x000027; 	X(POP(es));	// 9588                  pop     es ;~ 057F:0027
cs=0x57f;eip=0x000028; 	J(RETF(0));	// 9589                  retf ;~ 057F:0028
ret_57f_29:
	// 4667 
cs=0x57f;eip=0x000029; 	X(PUSH(bp));	// 9591                  push    bp ;~ 057F:0029
cs=0x57f;eip=0x00002a; 	T(bp = sp;);	// 9592                  mov     bp, sp ;~ 057F:002A
cs=0x57f;eip=0x00002c; 	T(dx = 0x201;);	// 9593                  mov     dx, 201h ;~ 057F:002C
cs=0x57f;eip=0x00002f; 	S(IN(al, dx));	// 9594                  in      al, dx          ; Game I/O port ;~ 057F:002F
cs=0x57f;eip=0x000030; 	T(MOV(cx, *(dw*)(raddr(ss,bp+6))));	// 9597                  mov     cx, [bp+6] ;~ 057F:0030
cs=0x57f;eip=0x000033; 	T(ADD(cx, 4));	// 9598                  add     cx, 4 ;~ 057F:0033
cs=0x57f;eip=0x000036; 	T(SHR(al, cl));	// 9599                  shr     al, cl ;~ 057F:0036
cs=0x57f;eip=0x000038; 	T(AND(al, 1));	// 9600                  and     al, 1 ;~ 057F:0038
cs=0x57f;eip=0x00003a; 	T(SUB(ah, ah));	// 9601                  sub     ah, ah ;~ 057F:003A
cs=0x57f;eip=0x00003c; 	T(XOR(ax, 1));	// 9602                  xor     ax, 1 ;~ 057F:003C
cs=0x57f;eip=0x00003f; 	X(POP(bp));	// 9603                  pop     bp ;~ 057F:003F
cs=0x57f;eip=0x000040; 	J(RETF(0));	// 9604                  retf ;~ 057F:0040
ret_57f_41:
	// 4668 
cs=0x57f;eip=0x000041; 	X(POP(bp));	// 9606                  pop     bp ;~ 057F:0041
cs=0x57f;eip=0x000042; 	J(RETN(2));	// 9607                  retn    2 ;~ 057F:0042
ret_57f_45:
	// 4669 
cs=0x57f;eip=0x000045; 	X(PUSH(bp));	// 9609                  push    bp ;~ 057F:0045
cs=0x57f;eip=0x000046; 	T(bp = sp;);	// 9610                  mov     bp, sp ;~ 057F:0046
cs=0x57f;eip=0x000048; 	X(PUSH(di));	// 9611                  push    di ;~ 057F:0048
cs=0x57f;eip=0x000049; 	X(PUSH(*(dw*)(raddr(ss,bp+4))));	// 9612                  push    word ptr [bp+4] ;~ 057F:0049
//cs=0x57f;eip=0x00004c; 	J(CALL(__dispatch_call,loc_13de9+1));	// 9613                  call    near ptr loc_13DE9+1 ;~ 057F:004C
cs=0x57f;eip=0x00004f; 	T(OR(ax, ax));	// 9614                  or      ax, ax ;~ 057F:004F
cs=0x57f;eip=0x000051; 	J(JZ(loc_13e37));	// 9615                  jz      short loc_13E37 ;~ 057F:0051
cs=0x57f;eip=0x000053; 	T(XCHG(ax, dx));	// 9616                  xchg    ax, dx ;~ 057F:0053
cs=0x57f;eip=0x000054; 	T(di = dx;);	// 9617                  mov     di, dx ;~ 057F:0054
cs=0x57f;eip=0x000056; 	T(XOR(ax, ax));	// 9618                  xor     ax, ax ;~ 057F:0056
cs=0x57f;eip=0x000058; 	T(cx = 0x0FFFF;);	// 9619                  mov     cx, 0FFFFh ;~ 057F:0058
	// 9620                  repne scasb ;~ 057F:005B
cs=0x57f;eip=0x00005b; 	T(	REPNE SCASB);	// 9620                  repne scasb ;~ 057F:005B
cs=0x57f;eip=0x00005d; 	T(NOT(cx));	// 9621                  not     cx ;~ 057F:005D
cs=0x57f;eip=0x00005f; 	T(DEC(cx));	// 9622                  dec     cx ;~ 057F:005F
cs=0x57f;eip=0x000060; 	T(bx = 2;);	// 9623                  mov     bx, 2 ;~ 057F:0060
cs=0x57f;eip=0x000063; 	T(ah = 0x40;);	// 9624                  mov     ah, 40h ;~ 057F:0063
cs=0x57f;eip=0x000065; 	S(_INT(0x21));	// 9625                  int     21h             ; DOS - 2+ - WRITE TO FILE WITH HANDLE ;~ 057F:0065
loc_13e37:
	// 4670 
cs=0x57f;eip=0x000067; 	X(POP(di));	// 9629                  pop     di ;~ 057F:0067
cs=0x57f;eip=0x000068; 	T(sp = bp;);	// 9630                  mov     sp, bp ;~ 057F:0068
cs=0x57f;eip=0x00006a; 	X(POP(bp));	// 9631                  pop     bp ;~ 057F:006A
cs=0x57f;eip=0x00006b; 	J(RETN(2));	// 9632                  retn    2 ;~ 057F:006B
ret_57f_6e:
	// 4671 
cs=0x57f;eip=0x00006e; 	X(PUSH(bp));	// 9634                  push    bp ;~ 057F:006E
cs=0x57f;eip=0x00006f; 	T(bp = sp;);	// 9635                  mov     bp, sp ;~ 057F:006F
cs=0x57f;eip=0x000071; 	X(PUSH(si));	// 9636                  push    si ;~ 057F:0071
cs=0x57f;eip=0x000072; 	T(MOV(si, *(dw*)(raddr(ss,bp+4))));	// 9637                  mov     si, [bp+4] ;~ 057F:0072
cs=0x57f;eip=0x000075; 	T(TEST(*(raddr(ds,si+6)), 0x83));	// 9638                  test    byte ptr [si+6], 83h ;~ 057F:0075
cs=0x57f;eip=0x000079; 	J(JZ(loc_13e68));	// 9639                  jz      short loc_13E68 ;~ 057F:0079
cs=0x57f;eip=0x00007b; 	T(TEST(*(raddr(ds,si+6)), 8));	// 9640                  test    byte ptr [si+6], 8 ;~ 057F:007B
cs=0x57f;eip=0x00007f; 	J(JZ(loc_13e68));	// 9641                  jz      short loc_13E68 ;~ 057F:007F
cs=0x57f;eip=0x000081; 	X(PUSH(*(dw*)(raddr(ds,si+4))));	// 9642                  push    word ptr [si+4] ;~ 057F:0081
cs=0x57f;eip=0x000084; 	J(CALL(__dispatch_call,byte_1448c));	// 9643                  call    near ptr byte_1448C ;~ 057F:0084
cs=0x57f;eip=0x000087; 	T(ADD(sp, 2));	// 9644                  add     sp, 2 ;~ 057F:0087
cs=0x57f;eip=0x00008a; 	X(AND(*(raddr(ds,si+6)), 0x0F7));	// 9645                  and     byte ptr [si+6], 0F7h ;~ 057F:008A
cs=0x57f;eip=0x00008e; 	T(SUB(ax, ax));	// 9646                  sub     ax, ax ;~ 057F:008E
cs=0x57f;eip=0x000090; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 9647                  mov     [si], ax ;~ 057F:0090
cs=0x57f;eip=0x000092; 	X(MOV(*(dw*)(raddr(ds,si+4)), ax));	// 9648                  mov     [si+4], ax ;~ 057F:0092
cs=0x57f;eip=0x000095; 	X(MOV(*(dw*)(raddr(ds,si+2)), ax));	// 9649                  mov     [si+2], ax ;~ 057F:0095
loc_13e68:
	// 4672 
cs=0x57f;eip=0x000098; 	X(POP(si));	// 9653                  pop     si ;~ 057F:0098
cs=0x57f;eip=0x000099; 	X(POP(bp));	// 9654                  pop     bp ;~ 057F:0099
cs=0x57f;eip=0x00009a; 	J(RETN(0));	// 9655                  retn ;~ 057F:009A
ret_57f_9b:
	// 4673 
cs=0x57f;eip=0x00009b; 	T(NOP);	// 9657                  nop ;~ 057F:009B
cs=0x57f;eip=0x00009c; 	X(PUSH(bp));	// 9658                  push    bp ;~ 057F:009C
cs=0x57f;eip=0x00009d; 	T(bp = sp;);	// 9659                  mov     bp, sp ;~ 057F:009D
cs=0x57f;eip=0x00009f; 	T(SUB(sp, 0x0A));	// 9660                  sub     sp, 0Ah ;~ 057F:009F
cs=0x57f;eip=0x0000a2; 	X(PUSH(di));	// 9661                  push    di ;~ 057F:00A2
cs=0x57f;eip=0x0000a3; 	X(PUSH(si));	// 9662                  push    si ;~ 057F:00A3
cs=0x57f;eip=0x0000a4; 	T(MOV(si, *(dw*)(raddr(ss,bp+8))));	// 9663                  mov     si, [bp+8] ;~ 057F:00A4
cs=0x57f;eip=0x0000a7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 9664                  mov     bx, [bp+6] ;~ 057F:00A7
cs=0x57f;eip=0x0000aa; 	T(MOV(al, *(raddr(ds,bx))));	// 9665                  mov     al, [bx] ;~ 057F:00AA
cs=0x57f;eip=0x0000ac; 	T(CBW);	// 9666                  cbw ;~ 057F:00AC
cs=0x57f;eip=0x0000ad; 	T(CMP(ax, 0x61));	// 9667                  cmp     ax, 61h ; 'a' ;~ 057F:00AD
cs=0x57f;eip=0x0000b0; 	T(DEC(bp));	// 9668                  dec     bp ;~ 057F:00B0

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_13de3: 	goto loc_13de3;
        case m2c::kloc_13de9: 	goto loc_13de9;
        case m2c::kloc_13e37: 	goto loc_13e37;
        case m2c::kloc_13e68: 	goto loc_13e68;
        case m2c::kret_57f_18: 	goto ret_57f_18;
        case m2c::kret_57f_29: 	goto ret_57f_29;
        case m2c::kret_57f_41: 	goto ret_57f_41;
        case m2c::kret_57f_45: 	goto ret_57f_45;
        case m2c::kret_57f_5: 	goto ret_57f_5;
        case m2c::kret_57f_6e: 	goto ret_57f_6e;
        case m2c::kret_57f_9b: 	goto ret_57f_9b;
        case m2c::kret_57f_a: 	goto ret_57f_a;
        case m2c::kseg13dd_0_proc: 	goto seg13dd_0_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

