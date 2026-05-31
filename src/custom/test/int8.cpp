/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */
#include <algorithm>
#include <iterator>

#include "int8.h"
//#include <curses.h>

#include "callback.h"
#include <unistd.h>
//namespace int8_ {
namespace m2c{ m2cf* _ENTRY_POINT_ = &_main;}


 bool _main(m2c::_offsets, struct m2c::_STATE* _state){return _group1(m2c::k_main, _state);}

 bool _int8_(m2c::_offsets, struct m2c::_STATE* _state){return _group1(m2c::k_int8, _state);}


 bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    mainproc:
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _begin:
	R(CALL(_main,0));

    return true;
    __dispatch_call:
    switch (__disp) {
        case m2c::kmainproc: 	goto mainproc;
        default: m2c::log_error("Jump to nowhere to 0x%x. See line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    _group1:
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _begin:
cs=0x192;eip=0x000100; _main:	// 12 
cs=0x192;eip=0x000100; 	T(MOV(ax, 0));	// 13 mov     ax, 0 ;~ 0192:0100
cs=0x192;eip=0x000103; 	T(MOV(es, ax));	// 14 mov     es, ax ;~ 0192:0103
cs=0x192;eip=0x000105; 	T(MOV(ax, 0x20));	// 16 mov     ax, 20h ; ' ' ;~ 0192:0105
cs=0x192;eip=0x000108; 	T(MOV(bx, ax));	// 17 mov     bx, ax ;~ 0192:0108
cs=0x192;eip=0x00010a; 	T(si = m2c::k_int8);	// 18 lea     si, _INT8 ;~ 0192:010A
cs=0x192;eip=0x00010e; 	X(MOV(*(dw*)(raddr(es,bx)), si));	// 19 mov     es:[bx], si ;~ 0192:010E
cs=0x192;eip=0x000111; 	T(ADD(bx, 2));	// 20 add     bx, 2 ;~ 0192:0111
cs=0x192;eip=0x000114; 	T(MOV(ax, cs));	// 21 mov     ax, cs ;~ 0192:0114
cs=0x192;eip=0x000116; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 22 mov     es:[bx], ax ;~ 0192:0116
cs=0x192;eip=0x000119; 	T(MOV(al, 0x36));	// 23 mov     al, 36h ; '6' ;~ 0192:0119
cs=0x192;eip=0x00011b; 	R(OUT(0x43, al));	// 24 out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0192:011B
cs=0x192;eip=0x00011d; 	T(MOV(ax, 0x0FFFF));	// 25 mov     ax, 0FFFFh ;~ 0192:011D
cs=0x192;eip=0x000120; 	R(OUT(0x40, al));	// 26 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0192:0120
cs=0x192;eip=0x000122; 	T(MOV(al, ah));	// 27 mov     al, ah ;~ 0192:0122
cs=0x192;eip=0x000124; 	R(OUT(0x40, al));	// 28 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0192:0124

{
//		Bitu call_irq0_=CALLBACK_Allocate();	
//		CALLBACK_Setup(call_irq0_,myINT8_Handler,CB_IRQ0,Real2Phys(RealMake(cs,m2c::k_int8 & 0xffff)),"my IRQ 0 Clock");
}

l:
//cs=0x192;eip=0x000125;T(NOP);
//R(_INT(8));
//goto l;
cs=0x192;eip=0x000126; 	T(MOV(ah, 0));	// 29 mov     ah, 0 ;~ 0192:0126
cs=0x192;eip=0x000128; 	R(_INT(0x16));	// 30 int     16h             ; KEYBOARD - READ CHAR FROM BUFFER, WAIT IF EMPTY ;~ 0192:0128
cs=0x192;eip=0x00012a; 	J(RETN(0));	// 32 RETN(0) ;~ 0192:012A
_int8l:	// 40 
cs=0x192;eip=0x00012b; 	X(PUSHA);	// 41 pusha ;~ 0192:012B
cs=0x192;eip=0x00012c; 	T(MOV(ax, 0x0B800));	// 42 mov     ax, 0B800h ;~ 0192:012C
cs=0x192;eip=0x00012f; 	T(MOV(es, ax));	// 43 mov     es, ax ;~ 0192:012F
cs=0x192;eip=0x000131; 	T(MOV(di, 0));	// 45 mov     di, 0 ;~ 0192:0131
cs=0x192;eip=0x000134; 	X(PUSH(cs));	// 46 push    cs ;~ 0192:0134
cs=0x192;eip=0x000135; 	X(POP(ds));	// 47 pop     ds ;~ 0192:0135
cs=0x192;eip=0x000136; 	T(si = offset(_text,byte_10164));	// 49 lea     si, byte_10164 ;~ 0192:0136
cs=0x192;eip=0x00013a; 	T(MOV(al, *(raddr(ds,si))));	// 50 mov     al, [si] ;~ 0192:013A
cs=0x192;eip=0x00013c; 	T(INC(al));	// 51 inc     al ;~ 0192:013C
cs=0x192;eip=0x00013e; 	T(CMP(al, 'Z'));	// 52 cmp     al, 'Z' ;~ 0192:013E
cs=0x192;eip=0x000140; 	J(JBE(loc_10154));	// 53 jbe     short loc_10154 ;~ 0192:0140
cs=0x192;eip=0x000142; 	T(MOV(al, 'A'));	// 54 mov     al, 'A' ;~ 0192:0142
cs=0x192;eip=0x000144; loc_10154:	// 4369 
cs=0x192;eip=0x000144; 	X(MOV(*(raddr(ds,si)), al));	// 57 mov     [si], al ;~ 0192:0144
cs=0x192;eip=0x000146; 	T(MOV(bl, *(raddr(ds,si))));	// 58 mov     bl, [si] ;~ 0192:0146
cs=0x192;eip=0x000148; 	T(MOV(bh, 0x0F));	// 59 mov     bh, 0Fh ;~ 0192:0148
cs=0x192;eip=0x00014a; 	X(MOV(*(dw*)(raddr(es,di)), bx));	// 60 mov     es:[di], bx ;~ 0192:014A
cs=0x192;eip=0x00014d; 	T(MOV(al, 0x20));	// 61 mov     al, 20h ; ' ' ;~ 0192:014D
cs=0x192;eip=0x00014f; 	R(OUT(0x20, al));	// 62 out     20h, al         ; Interrupt controller, 8259A. ;~ 0192:014F
cs=0x192;eip=0x000151; 	X(POPA);	// 63 popa ;~ 0192:0151
cs=0x192;eip=0x000152; 	T(STI);	// 64 sti ;~ 0192:0152
cs=0x192;eip=0x000153; 	R(IRET);	// 65 iret ;~ 0192:0153

    return true;
    __dispatch_call:
    switch (__disp) {
        case m2c::k_int8: 	goto _int8l;
        case m2c::k_main: 	goto _main;
        case m2c::kloc_10154: 	goto loc_10154;
        default: m2c::log_error("Jump to nowhere to 0x%x. See line %d\n", __disp, __LINE__);/*stackDump();*/ abort();
    };
}



bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state){
    switch (__disp) {
        case m2c::k_main: 	_group1(__disp, _state); break;
        case m2c::kloc_10154: 	_group1(__disp, _state); break;
        case m2c::k_int8: 	_group1(__disp, _state); break;
        case m2c::kmainproc: 	mainproc(0, _state); break;
        default: return false;//m2c::log_error("Call to nowhere to 0x%x. See line %d\n", __disp, __LINE__);stackDump(); abort();
     };
     return true;
}

#include <algorithm>
#include <iterator>
#ifdef DOSBOX_CUSTOM
#include <numeric>

 #define MYCOPY(x) {m2c::set_type(x);m2c::mycopy((db*)&x,(db*)&tmp999,sizeof(tmp999),#x);}

 namespace m2c {
  void   Initializer()
#else
 #define MYCOPY(x) std::copy(std::begin(tmp999),std::end(tmp999),std::begin(x));
 namespace {
  struct Initializer {
   Initializer()
#endif
  {
    {char tmp999[1]={'A'};MYCOPY(byte_10164)}

   }


#ifndef DOSBOX_CUSTOM
  };
 static const Initializer i;
#endif


 }


//} // End of namespace
