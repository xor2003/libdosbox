/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

#include "snake.h"



namespace m2c{ m2cf* _ENTRY_POINT_ = &asmmain;}
        
 bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
    X86_REGREF
    if ((__i>>16) == 0) {__i |= ((dd)cs) << 16;}
    __disp=__i;
    switch (__i) {
        case m2c::kmainproc: 	mainproc(0, _state); break;
        case m2c::kmain: 	asmmain(0, _state); break;
        case m2c::kloc_1016f: 	asmmain(__disp, _state); break;
        case m2c::kloc_1012d: 	asmmain(__disp, _state); break;
        case m2c::kloc_10156: 	asmmain(__disp, _state); break;
        case m2c::kloc_10188: 	asmmain(__disp, _state); break;
        case m2c::kdelay: 	delay(0, _state); break;
        case m2c::kloc_10198: 	delay(__disp, _state); break;
        case m2c::kfruitgeneration: 	fruitgeneration(0, _state); break;
        case m2c::kloc_101ab: 	fruitgeneration(__disp, _state); break;
        case m2c::kloc_101ec: 	fruitgeneration(__disp, _state); break;
        case m2c::klocret_10221: 	fruitgeneration(__disp, _state); break;
        case m2c::kdispdigit: 	dispdigit(0, _state); break;
        case m2c::kdispnum: 	dispnum(0, _state); break;
        case m2c::kloc_1023e: 	dispnum(__disp, _state); break;
        case m2c::ksetcursorpos: 	setcursorpos(0, _state); break;
        case m2c::kdraw: 	draw(0, _state); break;
        case m2c::kloc_10279: 	draw(__disp, _state); break;
        case m2c::kloc_10268: 	draw(__disp, _state); break;
        case m2c::kreadchar: 	readchar(0, _state); break;
        case m2c::kloc_10295: 	readchar(__disp, _state); break;
        case m2c::kkeyboardfunctions: 	keyboardfunctions(0, _state); break;
        case m2c::kloc_102c8: 	keyboardfunctions(__disp, _state); break;
        case m2c::kloc_102eb: 	keyboardfunctions(__disp, _state); break;
        case m2c::kloc_102f1: 	keyboardfunctions(__disp, _state); break;
        case m2c::kloc_102da: 	keyboardfunctions(__disp, _state); break;
        case m2c::kloc_102b6: 	keyboardfunctions(__disp, _state); break;
        case m2c::kshiftsnake: 	shiftsnake(0, _state); break;
        case m2c::kloc_1036c: 	shiftsnake(__disp, _state); break;
        case m2c::kloc_1033c: 	shiftsnake(__disp, _state); break;
        case m2c::kloc_1032a: 	shiftsnake(__disp, _state); break;
        case m2c::kloc_1033e: 	shiftsnake(__disp, _state); break;
        case m2c::kloc_10305: 	shiftsnake(__disp, _state); break;
        case m2c::kloc_10371: 	shiftsnake(__disp, _state); break;
        case m2c::kloc_10334: 	shiftsnake(__disp, _state); break;
        case m2c::kloc_10317: 	shiftsnake(__disp, _state); break;
        case m2c::kprintbox: 	printbox(0, _state); break;
        case m2c::kloc_103bc: 	printbox(__disp, _state); break;
        case m2c::kloc_103c6: 	printbox(__disp, _state); break;
        case m2c::kloc_103b2: 	printbox(__disp, _state); break;
        case m2c::kloc_103a8: 	printbox(__disp, _state); break;
        case m2c::kwritecharat: 	writecharat(0, _state); break;
        case m2c::kreadcharat: 	readcharat(0, _state); break;
        case m2c::kwritestringat: 	writestringat(0, _state); break;
        case m2c::kloc_10458: 	writestringat(__disp, _state); break;
        case m2c::kloc_1044a: 	writestringat(__disp, _state); break;
        default: m2c::log_error("Don't know how to call to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
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
 #define MYCOPY(x) memcpy(&x,&tmp999,sizeof(tmp999));
 namespace {
  struct Initializer {
   Initializer()
#endif
{
    {char tmp999[28]="Welcome to the snake game!!";MYCOPY(msg)} // 01a2:0000
    {db tmp999=10;MYCOPY(instructions)} // 01a2:001c
    {char tmp999[41]={'\r','U','s','e',' ','a',',',' ','s',',',' ','d',' ','a','n','d',' ','w',' ','t','o',' ','c','o','n','t','r','o','l',' ','y','o','u','r',' ','s','n','a','k','e','\n'};MYCOPY(dummyb_1a3d)} // 01a2:001c
    {char tmp999[24]={'\r','U','s','e',' ','q',' ','a','n','y','t','i','m','e',' ','t','o',' ','q','u','i','t','\r','\n'};MYCOPY(dummyb_1a66)} // 01a2:001c
    {char tmp999[26]={'P','r','e','s','s',' ','a','n','y',' ','k','e','y',' ','t','o',' ','c','o','n','t','i','n','u','e','$'};MYCOPY(dummyb_1a7e)} // 01a2:001c
    {char tmp999[37]="Thanks for playing! hope you enjoyed";MYCOPY(athanksforplayi)} // 01a2:0078
    {char tmp999[28]="OOPS!! your snake died! :P ";MYCOPY(gameovermsg)} // 01a2:009d
    {char tmp999[8]="Score: ";MYCOPY(scoremsg)} // 01a2:00b9
    {char tmp999[1]={'^'};MYCOPY(head)} // 01a2:00c1
    {db tmp999=10;MYCOPY(dummyb_1ae2)} // 01a2:00c2
    {db tmp999=10;MYCOPY(dummyb_1ae3)} // 01a2:00c3
    {char tmp999[1]={'*'};MYCOPY(body)} // 01a2:00c4
    {db tmp999[32]={10,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(dummyb_1ae5)} // 01a2:00c5
    {db tmp999=1;MYCOPY(segmentcount)} // 01a2:00f4
    {db tmp999=1;MYCOPY(fruitactive)} // 01a2:00f5
    {db tmp999=8;MYCOPY(fruitx)} // 01a2:00f6
    {db tmp999=8;MYCOPY(fruity)} // 01a2:00f7
    {db tmp999=0;MYCOPY(gameover)} // 01a2:00f8
    {db tmp999=0;MYCOPY(quit)} // 01a2:00f9
    {db tmp999=5;MYCOPY(delaytime)} // 01a2:00fa

}
#ifndef DOSBOX_CUSTOM
  };
 static const Initializer i;
#endif
}
