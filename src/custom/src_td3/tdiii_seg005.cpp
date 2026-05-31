/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool _group5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group5:
    _begin:
sub_1c822:
	// 22084 
cs=0xdbe;eip=0x000662; 	T(STI);	// 22085 sti ;~ 0DBE:0662
ret_dbe_663:
	// 5683 
cs=0xdbe;eip=0x000663; 	R(RETF(0));	// 22086 retf ;~ 0DBE:0663
sub_1c824:
	// 22093 
cs=0xdbe;eip=0x000664; 	X(PUSH(si));	// 22095 push    si ;~ 0DBE:0664
ret_dbe_665:
	// 5684 
cs=0xdbe;eip=0x000665; 	X(PUSH(di));	// 22096 push    di ;~ 0DBE:0665
cs=0xdbe;eip=0x000666; 	T(MOV(dx, 0x201));	// 22097 mov     dx, 201h ;~ 0DBE:0666
cs=0xdbe;eip=0x000669; 	T(MOV(cx, 0x0FFF8));	// 22098 mov     cx, 0FFF8h ;~ 0DBE:0669
cs=0xdbe;eip=0x00066c; 	T(MOV(di, 8));	// 22099 mov     di, 8 ;~ 0DBE:066C
cs=0xdbe;eip=0x00066f; 	T(MOV(bl, 3));	// 22100 mov     bl, 3 ;~ 0DBE:066F
cs=0xdbe;eip=0x000671; 	X(PUSH(word_2bee0));	// 22101 push    word_2BEE0 ;~ 0DBE:0671
cs=0xdbe;eip=0x000675; 	R(OUT(dx, al));	// 22102 out     dx, al          ; Game I/O port ;~ 0DBE:0675
loc_1c836:
	// 5685 
cs=0xdbe;eip=0x000676; 	R(IN(al, dx));	// 22107 in      al, dx          ; Game I/O port ;~ 0DBE:0676
cs=0xdbe;eip=0x000677; 	T(ADD(cx, di));	// 22110 add     cx, di ;~ 0DBE:0677
cs=0xdbe;eip=0x000679; 	R(JO(loc_1c86e));	// 22111 jo      short loc_1C86E ;~ 0DBE:0679
cs=0xdbe;eip=0x00067b; 	T(AND(al, bl));	// 22112 and     al, bl ;~ 0DBE:067B
cs=0xdbe;eip=0x00067d; 	T(CMP(al, bl));	// 22113 cmp     al, bl ;~ 0DBE:067D
cs=0xdbe;eip=0x00067f; 	R(JZ(loc_1c836));	// 22114 jz      short loc_1C836 ;~ 0DBE:067F
cs=0xdbe;eip=0x000681; 	T(MOV(si, cx));	// 22115 mov     si, cx ;~ 0DBE:0681
cs=0xdbe;eip=0x000683; 	T(TEST(al, bl));	// 22116 test    al, bl ;~ 0DBE:0683
cs=0xdbe;eip=0x000685; 	R(JZ(loc_1c874));	// 22117 jz      short loc_1C874 ;~ 0DBE:0685
cs=0xdbe;eip=0x000687; 	T(MOV(bl, 2));	// 22118 mov     bl, 2 ;~ 0DBE:0687
cs=0xdbe;eip=0x000689; 	T(TEST(al, bl));	// 22119 test    al, bl ;~ 0DBE:0689
cs=0xdbe;eip=0x00068b; 	R(JNZ(loc_1c85c));	// 22120 jnz     short loc_1C85C ;~ 0DBE:068B
cs=0xdbe;eip=0x00068d; 	T(MOV(bl, 1));	// 22121 mov     bl, 1 ;~ 0DBE:068D
loc_1c84f:
	// 5686 
cs=0xdbe;eip=0x00068f; 	R(IN(al, dx));	// 22124 in      al, dx          ; Game I/O port ;~ 0DBE:068F
cs=0xdbe;eip=0x000690; 	T(ADD(cx, di));	// 22127 add     cx, di ;~ 0DBE:0690
cs=0xdbe;eip=0x000692; 	R(JO(loc_1c869));	// 22128 jo      short loc_1C869 ;~ 0DBE:0692
cs=0xdbe;eip=0x000694; 	T(AND(al, bl));	// 22129 and     al, bl ;~ 0DBE:0694
cs=0xdbe;eip=0x000696; 	T(CMP(al, bl));	// 22130 cmp     al, bl ;~ 0DBE:0696
cs=0xdbe;eip=0x000698; 	R(JZ(loc_1c84f));	// 22131 jz      short loc_1C84F ;~ 0DBE:0698
cs=0xdbe;eip=0x00069a; 	R(JNZ(loc_1c874));	// 22132 jnz     short loc_1C874 ;~ 0DBE:069A
loc_1c85c:
	// 5687 
cs=0xdbe;eip=0x00069c; 	R(IN(al, dx));	// 22136 in      al, dx          ; Game I/O port ;~ 0DBE:069C
cs=0xdbe;eip=0x00069d; 	T(ADD(si, di));	// 22139 add     si, di ;~ 0DBE:069D
cs=0xdbe;eip=0x00069f; 	R(JO(loc_1c871));	// 22140 jo      short loc_1C871 ;~ 0DBE:069F
cs=0xdbe;eip=0x0006a1; 	T(AND(al, bl));	// 22141 and     al, bl ;~ 0DBE:06A1
cs=0xdbe;eip=0x0006a3; 	T(CMP(al, bl));	// 22142 cmp     al, bl ;~ 0DBE:06A3
cs=0xdbe;eip=0x0006a5; 	R(JZ(loc_1c85c));	// 22143 jz      short loc_1C85C ;~ 0DBE:06A5
cs=0xdbe;eip=0x0006a7; 	R(JNZ(loc_1c874));	// 22144 jnz     short loc_1C874 ;~ 0DBE:06A7
loc_1c869:
	// 5688 
cs=0xdbe;eip=0x0006a9; 	T(MOV(cx, 0x0FFFF));	// 22147 mov     cx, 0FFFFh ;~ 0DBE:06A9
cs=0xdbe;eip=0x0006ac; 	R(JMP(loc_1c874));	// 22148 jmp     short loc_1C874 ;~ 0DBE:06AC
loc_1c86e:
	// 5689 
cs=0xdbe;eip=0x0006ae; 	T(MOV(cx, 0x0FFFF));	// 22152 mov     cx, 0FFFFh ;~ 0DBE:06AE
loc_1c871:
	// 5690 
cs=0xdbe;eip=0x0006b1; 	T(MOV(si, 0x0FFFF));	// 22155 mov     si, 0FFFFh ;~ 0DBE:06B1
loc_1c874:
	// 5691 
cs=0xdbe;eip=0x0006b4; 	T(SAR(cx, 1));	// 22159 sar     cx, 1 ;~ 0DBE:06B4
cs=0xdbe;eip=0x0006b6; 	T(SAR(cx, 1));	// 22160 sar     cx, 1 ;~ 0DBE:06B6
cs=0xdbe;eip=0x0006b8; 	T(SAR(cx, 1));	// 22161 sar     cx, 1 ;~ 0DBE:06B8
cs=0xdbe;eip=0x0006ba; 	T(SAR(si, 1));	// 22162 sar     si, 1 ;~ 0DBE:06BA
cs=0xdbe;eip=0x0006bc; 	T(SAR(si, 1));	// 22163 sar     si, 1 ;~ 0DBE:06BC
cs=0xdbe;eip=0x0006be; 	T(SAR(si, 1));	// 22164 sar     si, 1 ;~ 0DBE:06BE
cs=0xdbe;eip=0x0006c0; 	X(POP(ax));	// 22165 pop     ax ;~ 0DBE:06C0
cs=0xdbe;eip=0x0006c1; 	T(CMP(ax, word_2bee0));	// 22166 cmp     ax, word_2BEE0 ;~ 0DBE:06C1
cs=0xdbe;eip=0x0006c5; 	R(JNZ(loc_1c88f));	// 22167 jnz     short loc_1C88F ;~ 0DBE:06C5
cs=0xdbe;eip=0x0006c7; 	X(MOV(word_2bf02, cx));	// 22168 mov     word_2BF02, cx ;~ 0DBE:06C7
cs=0xdbe;eip=0x0006cb; 	X(MOV(word_2bf0c, si));	// 22169 mov     word_2BF0C, si ;~ 0DBE:06CB
loc_1c88f:
	// 5692 
cs=0xdbe;eip=0x0006cf; 	R(IN(al, dx));	// 22172 in      al, dx          ; Game I/O port ;~ 0DBE:06CF
cs=0xdbe;eip=0x0006d0; 	T(NOT(al));	// 22175 not     al ;~ 0DBE:06D0
cs=0xdbe;eip=0x0006d2; 	T(AND(ax, 0x30));	// 22176 and     ax, 30h ;~ 0DBE:06D2
cs=0xdbe;eip=0x0006d5; 	X(POP(di));	// 22177 pop     di ;~ 0DBE:06D5
cs=0xdbe;eip=0x0006d6; 	X(POP(si));	// 22178 pop     si ;~ 0DBE:06D6
cs=0xdbe;eip=0x0006d7; 	R(RETF(0));	// 22179 retf ;~ 0DBE:06D7
sub_1c898:
	// 22186 
cs=0xdbe;eip=0x0006d8; 	R(CALLF(sub_1c824,0));	// 22188 call    sub_1C824 ;~ 0DBE:06D8
ret_dbe_6dd:
	// 5693 
cs=0xdbe;eip=0x0006dd; 	T(MOV(cx, word_2befe));	// 22189 mov     cx, word_2BEFE ;~ 0DBE:06DD
cs=0xdbe;eip=0x0006e1; 	T(SHL(cx, 1));	// 22190 shl     cx, 1 ;~ 0DBE:06E1
cs=0xdbe;eip=0x0006e3; 	T(SHL(cx, 1));	// 22191 shl     cx, 1 ;~ 0DBE:06E3
cs=0xdbe;eip=0x0006e5; 	T(CMP(cx, word_2bf02));	// 22192 cmp     cx, word_2BF02 ;~ 0DBE:06E5
cs=0xdbe;eip=0x0006e9; 	R(JNC(loc_1c8af));	// 22193 jnb     short loc_1C8AF ;~ 0DBE:06E9
cs=0xdbe;eip=0x0006eb; 	X(MOV(word_2bf02, cx));	// 22194 mov     word_2BF02, cx ;~ 0DBE:06EB
loc_1c8af:
	// 5694 
cs=0xdbe;eip=0x0006ef; 	T(MOV(cx, word_2bf08));	// 22197 mov     cx, word_2BF08 ;~ 0DBE:06EF
cs=0xdbe;eip=0x0006f3; 	T(SHL(cx, 1));	// 22198 shl     cx, 1 ;~ 0DBE:06F3
cs=0xdbe;eip=0x0006f5; 	T(SHL(cx, 1));	// 22199 shl     cx, 1 ;~ 0DBE:06F5
cs=0xdbe;eip=0x0006f7; 	T(CMP(cx, word_2bf0c));	// 22200 cmp     cx, word_2BF0C ;~ 0DBE:06F7
cs=0xdbe;eip=0x0006fb; 	R(JNC(locret_1c8c1));	// 22201 jnb     short locret_1C8C1 ;~ 0DBE:06FB
cs=0xdbe;eip=0x0006fd; 	X(MOV(word_2bf0c, cx));	// 22202 mov     word_2BF0C, cx ;~ 0DBE:06FD
locret_1c8c1:
	// 5695 
cs=0xdbe;eip=0x000701; 	R(RETF(0));	// 22205 retf ;~ 0DBE:0701
sub_1c8c2:
	// 22213 
#undef arg_0
#define arg_0 6
	// 22215 arg_0           = word ptr  6 ;~ 0DBE:0702
ret_dbe_702:
	// 5696 
cs=0xdbe;eip=0x000702; 	X(PUSH(bp));	// 22217 push    bp ;~ 0DBE:0702
cs=0xdbe;eip=0x000703; 	T(MOV(bp, sp));	// 22218 mov     bp, sp ;~ 0DBE:0703
cs=0xdbe;eip=0x000705; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 22219 mov     bx, [bp+arg_0] ;~ 0DBE:0705
cs=0xdbe;eip=0x000708; 	T(CLI);	// 22220 cli ;~ 0DBE:0708
cs=0xdbe;eip=0x000709; 	R(IN(al, 0x40));	// 22221 in      al, 40h         ; Timer 8253-5 (AT: 8254.2). ;~ 0DBE:0709
cs=0xdbe;eip=0x00070b; 	T(MOV(ah, al));	// 22222 mov     ah, al ;~ 0DBE:070B
cs=0xdbe;eip=0x00070d; 	R(IN(al, 0x40));	// 22223 in      al, 40h         ; Timer 8253-5 (AT: 8254.2). ;~ 0DBE:070D
cs=0xdbe;eip=0x00070f; 	T(ADD(ah, al));	// 22224 add     ah, al ;~ 0DBE:070F
cs=0xdbe;eip=0x000711; 	R(IN(al, 0x42));	// 22225 in      al, 42h         ; Timer 8253-5 (AT: 8254.2). ;~ 0DBE:0711
cs=0xdbe;eip=0x000713; 	T(ADD(ah, al));	// 22226 add     ah, al ;~ 0DBE:0713
cs=0xdbe;eip=0x000715; 	R(IN(al, 0x42));	// 22227 in      al, 42h         ; Timer 8253-5 (AT: 8254.2). ;~ 0DBE:0715
cs=0xdbe;eip=0x000717; 	T(STI);	// 22228 sti ;~ 0DBE:0717
cs=0xdbe;eip=0x000718; 	T(ADD(ax, bx));	// 22229 add     ax, bx ;~ 0DBE:0718
cs=0xdbe;eip=0x00071a; 	X(POP(bp));	// 22230 pop     bp ;~ 0DBE:071A
cs=0xdbe;eip=0x00071b; 	R(RETF(0));	// 22231 retf ;~ 0DBE:071B
seg005_proc:
	// 22235 
cs=0xdbe;eip=0x00071c; 	X(PUSH(bp));	// 22235 push    bp ;~ 0DBE:071C
ret_dbe_71d:
	// 5697 
cs=0xdbe;eip=0x00071d; 	T(MOV(bp, sp));	// 22236 mov     bp, sp ;~ 0DBE:071D
cs=0xdbe;eip=0x00071f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 22237 mov     ax, [bp+6] ;~ 0DBE:071F
cs=0xdbe;eip=0x000722; 	T(SHR(ax, 1));	// 22238 shr     ax, 1 ;~ 0DBE:0722
cs=0xdbe;eip=0x000724; 	T(SHR(ax, 1));	// 22239 shr     ax, 1 ;~ 0DBE:0724
cs=0xdbe;eip=0x000726; 	T(SHR(ax, 1));	// 22240 shr     ax, 1 ;~ 0DBE:0726
cs=0xdbe;eip=0x000728; 	T(SHR(ax, 1));	// 22241 shr     ax, 1 ;~ 0DBE:0728
cs=0xdbe;eip=0x00072a; 	T(MOV(dx, *(dw*)(raddr(ss,bp+8))));	// 22242 mov     dx, [bp+8] ;~ 0DBE:072A
cs=0xdbe;eip=0x00072d; 	T(ADD(dx, ax));	// 22243 add     dx, ax ;~ 0DBE:072D
cs=0xdbe;eip=0x00072f; 	T(SUB(ax, ax));	// 22244 sub     ax, ax ;~ 0DBE:072F
cs=0xdbe;eip=0x000731; 	X(POP(bp));	// 22245 pop     bp ;~ 0DBE:0731
cs=0xdbe;eip=0x000732; 	R(RETF(0));	// 22246 retf ;~ 0DBE:0732
ret_dbe_e98:
	// 5778 
cs=0xdbe;eip=0x000e98; 	X(PUSH(ax));	// 23440 push    ax ;~ 0DBE:0E98
cs=0xdbe;eip=0x000e99; 	X(PUSH(bx));	// 23441 push    bx ;~ 0DBE:0E99
cs=0xdbe;eip=0x000e9a; 	X(PUSH(ds));	// 23442 push    ds ;~ 0DBE:0E9A
cs=0xdbe;eip=0x000e9b; 	X(PUSH(es));	// 23443 push    es ;~ 0DBE:0E9B
cs=0xdbe;eip=0x000e9c; 	T(CLD);	// 23444 cld ;~ 0DBE:0E9C
cs=0xdbe;eip=0x000e9d; 	T(MOV(ax, seg_offset(dseg)));	// 23445 mov     ax, seg dseg ;~ 0DBE:0E9D
cs=0xdbe;eip=0x000ea0; 	T(MOV(ds, ax));	// 23446 mov     ds, ax ;~ 0DBE:0EA0
cs=0xdbe;eip=0x000ea2; 	T(MOV(ax, 0x40));	// 23447 mov     ax, 40h ; '@' ;~ 0DBE:0EA2
cs=0xdbe;eip=0x000ea5; 	T(MOV(es, ax));	// 23448 mov     es, ax ;~ 0DBE:0EA5
cs=0xdbe;eip=0x000ea7; 	R(IN(al, 0x60));	// 23450 in      al, 60h         ; 8042 keyboard controller data register ;~ 0DBE:0EA7
cs=0xdbe;eip=0x000ea9; 	T(MOV(ah, al));	// 23451 mov     ah, al ;~ 0DBE:0EA9
cs=0xdbe;eip=0x000eab; 	R(IN(al, 0x61));	// 23452 in      al, 61h         ; PC/XT PPI port B bits: ;~ 0DBE:0EAB
cs=0xdbe;eip=0x000ead; 	T(OR(al, 0x80));	// 23460 or      al, 80h ;~ 0DBE:0EAD
cs=0xdbe;eip=0x000eaf; 	R(OUT(0x61, al));	// 23461 out     61h, al         ; PC/XT PPI port B bits: ;~ 0DBE:0EAF
cs=0xdbe;eip=0x000eb1; 	T(AND(al, 0x7F));	// 23469 and     al, 7Fh ;~ 0DBE:0EB1
cs=0xdbe;eip=0x000eb3; 	R(OUT(0x61, al));	// 23470 out     61h, al         ; PC/XT PPI port B bits: ;~ 0DBE:0EB3
cs=0xdbe;eip=0x000eb5; 	T(CMP(byte_34f98, 0x0ED));	// 23478 cmp     byte_34F98, 0EDh ; 'í' ;~ 0DBE:0EB5
cs=0xdbe;eip=0x000eba; 	R(JNZ(loc_1d09c));	// 23479 jnz     short loc_1D09C ;~ 0DBE:0EBA
cs=0xdbe;eip=0x000ebc; 	T(MOV(al, *(raddr(es,0x17))));	// 23480 mov     al, es:17h ;~ 0DBE:0EBC
cs=0xdbe;eip=0x000ec0; 	T(SHR(al, 1));	// 23481 shr     al, 1 ;~ 0DBE:0EC0
cs=0xdbe;eip=0x000ec2; 	T(SHR(al, 1));	// 23482 shr     al, 1 ;~ 0DBE:0EC2
cs=0xdbe;eip=0x000ec4; 	T(SHR(al, 1));	// 23483 shr     al, 1 ;~ 0DBE:0EC4
cs=0xdbe;eip=0x000ec6; 	T(SHR(al, 1));	// 23484 shr     al, 1 ;~ 0DBE:0EC6
cs=0xdbe;eip=0x000ec8; 	T(AND(al, 7));	// 23485 and     al, 7 ;~ 0DBE:0EC8
cs=0xdbe;eip=0x000eca; 	X(AND(*(raddr(es,0x97)), 0x0F8));	// 23486 and     byte ptr es:97h, 0F8h ;~ 0DBE:0ECA
cs=0xdbe;eip=0x000ed0; 	X(OR(*(raddr(es,0x97)), al));	// 23487 or      es:97h, al ;~ 0DBE:0ED0
cs=0xdbe;eip=0x000ed5; 	R(OUT(0x60, al));	// 23488 out     60h, al         ; 8042 keyboard controller data register. ;~ 0DBE:0ED5
cs=0xdbe;eip=0x000ed7; 	X(MOV(byte_34f98, 0));	// 23489 mov     byte_34F98, 0 ;~ 0DBE:0ED7
loc_1d09c:
	// 5779 
cs=0xdbe;eip=0x000edc; 	T(MOV(al, ah));	// 23492 mov     al, ah ;~ 0DBE:0EDC
cs=0xdbe;eip=0x000ede; 	T(CMP(al, 0x0E0));	// 23493 cmp     al, 0E0h ; 'à' ;~ 0DBE:0EDE
cs=0xdbe;eip=0x000ee0; 	R(JC(loc_1d0ae));	// 23494 jb      short loc_1D0AE ;~ 0DBE:0EE0
cs=0xdbe;eip=0x000ee2; 	R(JZ(loc_1d0a8));	// 23495 jz      short loc_1D0A8 ;~ 0DBE:0EE2
cs=0xdbe;eip=0x000ee4; 	T(CMP(al, 0x0E1));	// 23496 cmp     al, 0E1h ; 'á' ;~ 0DBE:0EE4
cs=0xdbe;eip=0x000ee6; 	R(JNZ(loc_1d0ab));	// 23497 jnz     short loc_1D0AB ;~ 0DBE:0EE6
loc_1d0a8:
	// 5780 
cs=0xdbe;eip=0x000ee8; 	X(MOV(byte_34f98, al));	// 23500 mov     byte_34F98, al ;~ 0DBE:0EE8
loc_1d0ab:
	// 5781 
cs=0xdbe;eip=0x000eeb; 	R(JMP(loc_1d252));	// 23504 jmp     loc_1D252 ;~ 0DBE:0EEB
loc_1d0ae:
	// 5782 
cs=0xdbe;eip=0x000eee; 	T(AND(al, 0x7F));	// 23508 and     al, 7Fh ;~ 0DBE:0EEE
cs=0xdbe;eip=0x000ef0; 	T(CMP(al, 0x1D));	// 23509 cmp     al, 1Dh ;~ 0DBE:0EF0
cs=0xdbe;eip=0x000ef2; 	R(JC(loc_1d0c6));	// 23510 jb      short loc_1D0C6 ;~ 0DBE:0EF2
cs=0xdbe;eip=0x000ef4; 	R(JZ(loc_1d0ba));	// 23511 jz      short loc_1D0BA ;~ 0DBE:0EF4
cs=0xdbe;eip=0x000ef6; 	T(CMP(al, 0x61));	// 23512 cmp     al, 61h ; 'a' ;~ 0DBE:0EF6
cs=0xdbe;eip=0x000ef8; 	R(JNZ(loc_1d0c6));	// 23513 jnz     short loc_1D0C6 ;~ 0DBE:0EF8
loc_1d0ba:
	// 5783 
cs=0xdbe;eip=0x000efa; 	T(MOV(bl, 1));	// 23516 mov     bl, 1 ;~ 0DBE:0EFA
cs=0xdbe;eip=0x000efc; 	T(OR(ah, ah));	// 23517 or      ah, ah ;~ 0DBE:0EFC
cs=0xdbe;eip=0x000efe; 	R(JNS(loc_1d0c2));	// 23518 jns     short loc_1D0C2 ;~ 0DBE:0EFE
cs=0xdbe;eip=0x000f00; 	T(DEC(bl));	// 23519 dec     bl ;~ 0DBE:0F00
loc_1d0c2:
	// 5784 
cs=0xdbe;eip=0x000f02; 	X(MOV(byte_34f93, bl));	// 23522 mov     byte_34F93, bl ;~ 0DBE:0F02
loc_1d0c6:
	// 5785 
cs=0xdbe;eip=0x000f06; 	T(AND(al, 0x7F));	// 23526 and     al, 7Fh ;~ 0DBE:0F06
cs=0xdbe;eip=0x000f08; 	T(MOV(bl, 2));	// 23527 mov     bl, 2 ;~ 0DBE:0F08
cs=0xdbe;eip=0x000f0a; 	T(CMP(al, 0x2A));	// 23528 cmp     al, 2Ah ; '*' ;~ 0DBE:0F0A
cs=0xdbe;eip=0x000f0c; 	R(JZ(loc_1d0d4));	// 23529 jz      short loc_1D0D4 ;~ 0DBE:0F0C
cs=0xdbe;eip=0x000f0e; 	T(SHR(bl, 1));	// 23530 shr     bl, 1 ;~ 0DBE:0F0E
cs=0xdbe;eip=0x000f10; 	T(CMP(al, 0x36));	// 23531 cmp     al, 36h ; '6' ;~ 0DBE:0F10
cs=0xdbe;eip=0x000f12; 	R(JNZ(loc_1d0f8));	// 23532 jnz     short loc_1D0F8 ;~ 0DBE:0F12
loc_1d0d4:
	// 5786 
cs=0xdbe;eip=0x000f14; 	T(CMP(byte_34f98, 0x0E0));	// 23535 cmp     byte_34F98, 0E0h ; 'à' ;~ 0DBE:0F14
cs=0xdbe;eip=0x000f19; 	R(JZ(loc_1d0f0));	// 23536 jz      short loc_1D0F0 ;~ 0DBE:0F19
cs=0xdbe;eip=0x000f1b; 	T(TEST(ah, 0x80));	// 23537 test    ah, 80h ;~ 0DBE:0F1B
cs=0xdbe;eip=0x000f1e; 	R(JNZ(loc_1d0e7));	// 23538 jnz     short loc_1D0E7 ;~ 0DBE:0F1E
cs=0xdbe;eip=0x000f20; 	X(OR(*(raddr(es,0x17)), bl));	// 23539 or      es:17h, bl ;~ 0DBE:0F20
cs=0xdbe;eip=0x000f25; 	R(JMP(loc_1d0f8));	// 23540 jmp     short loc_1D0F8 ;~ 0DBE:0F25
loc_1d0e7:
	// 5787 
cs=0xdbe;eip=0x000f27; 	T(NOT(bl));	// 23544 not     bl ;~ 0DBE:0F27
cs=0xdbe;eip=0x000f29; 	X(AND(*(raddr(es,0x17)), bl));	// 23545 and     es:17h, bl ;~ 0DBE:0F29
cs=0xdbe;eip=0x000f2e; 	R(JMP(loc_1d0f8));	// 23546 jmp     short loc_1D0F8 ;~ 0DBE:0F2E
loc_1d0f0:
	// 5788 
cs=0xdbe;eip=0x000f30; 	X(MOV(byte_34f98, 0));	// 23551 mov     byte_34F98, 0 ;~ 0DBE:0F30
cs=0xdbe;eip=0x000f35; 	R(JMP(loc_1d252));	// 23552 jmp     loc_1D252 ;~ 0DBE:0F35
loc_1d0f8:
	// 5789 
cs=0xdbe;eip=0x000f38; 	T(CMP(byte_34f98, 0x0E1));	// 23557 cmp     byte_34F98, 0E1h ; 'á' ;~ 0DBE:0F38
cs=0xdbe;eip=0x000f3d; 	R(JNZ(loc_1d10f));	// 23558 jnz     short loc_1D10F ;~ 0DBE:0F3D
cs=0xdbe;eip=0x000f3f; 	T(CMP(al, 0x1D));	// 23559 cmp     al, 1Dh ;~ 0DBE:0F3F
cs=0xdbe;eip=0x000f41; 	R(JZ(loc_1d0ab));	// 23560 jz      short loc_1D0AB ;~ 0DBE:0F41
cs=0xdbe;eip=0x000f43; 	T(CMP(al, 0x45));	// 23561 cmp     al, 45h ; 'E' ;~ 0DBE:0F43
cs=0xdbe;eip=0x000f45; 	R(JNZ(loc_1d0f0));	// 23562 jnz     short loc_1D0F0 ;~ 0DBE:0F45
cs=0xdbe;eip=0x000f47; 	T(INC(ah));	// 23563 inc     ah ;~ 0DBE:0F47
cs=0xdbe;eip=0x000f49; 	T(INC(al));	// 23564 inc     al ;~ 0DBE:0F49
cs=0xdbe;eip=0x000f4b; 	X(DEC(byte_34f98));	// 23565 dec     byte_34F98 ;~ 0DBE:0F4B
loc_1d10f:
	// 5790 
cs=0xdbe;eip=0x000f4f; 	T(CMP(byte_34f98, 0x0E0));	// 23568 cmp     byte_34F98, 0E0h ; 'à' ;~ 0DBE:0F4F
cs=0xdbe;eip=0x000f54; 	R(JNZ(loc_1d137));	// 23569 jnz     short loc_1D137 ;~ 0DBE:0F54
cs=0xdbe;eip=0x000f56; 	T(SUB(al, 0x1C));	// 23570 sub     al, 1Ch ;~ 0DBE:0F56
cs=0xdbe;eip=0x000f58; 	T(CMP(al, 2));	// 23571 cmp     al, 2 ;~ 0DBE:0F58
cs=0xdbe;eip=0x000f5a; 	R(JC(loc_1d124));	// 23572 jb      short loc_1D124 ;~ 0DBE:0F5A
cs=0xdbe;eip=0x000f5c; 	T(SUB(al, 0x17));	// 23573 sub     al, 17h ;~ 0DBE:0F5C
cs=0xdbe;eip=0x000f5e; 	T(CMP(al, 6));	// 23574 cmp     al, 6 ;~ 0DBE:0F5E
cs=0xdbe;eip=0x000f60; 	R(JC(loc_1d124));	// 23575 jb      short loc_1D124 ;~ 0DBE:0F60
cs=0xdbe;eip=0x000f62; 	T(SUB(al, 0x0D));	// 23576 sub     al, 0Dh ;~ 0DBE:0F62
loc_1d124:
	// 5791 
cs=0xdbe;eip=0x000f64; 	T(MOV(bx, 0x0CAE));	// 23580 mov     bx, 0CAEh ;~ 0DBE:0F64
cs=0xdbe;eip=0x000f67; 	X(XLATP(raddr(cs,bx)));	// 23581 xlat    byte ptr cs:[bx] ;~ 0DBE:0F67
cs=0xdbe;eip=0x000f69; 	T(OR(al, al));	// 23582 or      al, al ;~ 0DBE:0F69
cs=0xdbe;eip=0x000f6b; 	R(JZ(loc_1d0f0));	// 23583 jz      short loc_1D0F0 ;~ 0DBE:0F6B
cs=0xdbe;eip=0x000f6d; 	T(AND(ah, 0x80));	// 23584 and     ah, 80h ;~ 0DBE:0F6D
cs=0xdbe;eip=0x000f70; 	T(OR(ah, al));	// 23585 or      ah, al ;~ 0DBE:0F70
cs=0xdbe;eip=0x000f72; 	X(MOV(byte_34f98, 0));	// 23586 mov     byte_34F98, 0 ;~ 0DBE:0F72
loc_1d137:
	// 5792 
cs=0xdbe;eip=0x000f77; 	T(TEST(ah, 0x80));	// 23589 test    ah, 80h ;~ 0DBE:0F77
cs=0xdbe;eip=0x000f7a; 	R(JNZ(loc_1d145));	// 23590 jnz     short loc_1D145 ;~ 0DBE:0F7A
cs=0xdbe;eip=0x000f7c; 	T(CMP(al, byte_34f99));	// 23591 cmp     al, byte_34F99 ;~ 0DBE:0F7C
cs=0xdbe;eip=0x000f80; 	R(JNZ(loc_1d14b));	// 23592 jnz     short loc_1D14B ;~ 0DBE:0F80
cs=0xdbe;eip=0x000f82; 	R(JMP(loc_1d252));	// 23593 jmp     loc_1D252 ;~ 0DBE:0F82
loc_1d145:
	// 5793 
cs=0xdbe;eip=0x000f85; 	T(CMP(al, byte_34f99));	// 23597 cmp     al, byte_34F99 ;~ 0DBE:0F85
cs=0xdbe;eip=0x000f89; 	R(JNZ(loc_1d14f));	// 23598 jnz     short loc_1D14F ;~ 0DBE:0F89
loc_1d14b:
	// 5794 
cs=0xdbe;eip=0x000f8b; 	X(MOV(byte_34f99, ah));	// 23601 mov     byte_34F99, ah ;~ 0DBE:0F8B
loc_1d14f:
	// 5795 
cs=0xdbe;eip=0x000f8f; 	T(CMP(al, 0x3A));	// 23604 cmp     al, 3Ah ; ':' ;~ 0DBE:0F8F
cs=0xdbe;eip=0x000f91; 	R(JNZ(loc_1d157));	// 23605 jnz     short loc_1D157 ;~ 0DBE:0F91
cs=0xdbe;eip=0x000f93; 	T(MOV(al, 0x40));	// 23606 mov     al, 40h ; '@' ;~ 0DBE:0F93
cs=0xdbe;eip=0x000f95; 	R(JMP(loc_1d165));	// 23607 jmp     short loc_1D165 ;~ 0DBE:0F95
loc_1d157:
	// 5796 
cs=0xdbe;eip=0x000f97; 	T(CMP(al, 0x45));	// 23611 cmp     al, 45h ; 'E' ;~ 0DBE:0F97
cs=0xdbe;eip=0x000f99; 	R(JNZ(loc_1d15f));	// 23612 jnz     short loc_1D15F ;~ 0DBE:0F99
cs=0xdbe;eip=0x000f9b; 	T(MOV(al, 0x20));	// 23613 mov     al, 20h ; ' ' ;~ 0DBE:0F9B
cs=0xdbe;eip=0x000f9d; 	R(JMP(loc_1d165));	// 23614 jmp     short loc_1D165 ;~ 0DBE:0F9D
loc_1d15f:
	// 5797 
cs=0xdbe;eip=0x000f9f; 	T(CMP(al, 0x46));	// 23618 cmp     al, 46h ; 'F' ;~ 0DBE:0F9F
cs=0xdbe;eip=0x000fa1; 	R(JNZ(loc_1d18b));	// 23619 jnz     short loc_1D18B ;~ 0DBE:0FA1
cs=0xdbe;eip=0x000fa3; 	T(MOV(al, 0x10));	// 23620 mov     al, 10h ;~ 0DBE:0FA3
loc_1d165:
	// 5798 
cs=0xdbe;eip=0x000fa5; 	T(TEST(ah, 0x80));	// 23624 test    ah, 80h ;~ 0DBE:0FA5
cs=0xdbe;eip=0x000fa8; 	R(JNZ(loc_1d184));	// 23625 jnz     short loc_1D184 ;~ 0DBE:0FA8
cs=0xdbe;eip=0x000faa; 	T(TEST(*(raddr(es,0x18)), al));	// 23626 test    es:18h, al ;~ 0DBE:0FAA
cs=0xdbe;eip=0x000faf; 	R(JNZ(loc_1d18b));	// 23627 jnz     short loc_1D18B ;~ 0DBE:0FAF
cs=0xdbe;eip=0x000fb1; 	X(OR(*(raddr(es,0x18)), al));	// 23628 or      es:18h, al ;~ 0DBE:0FB1
cs=0xdbe;eip=0x000fb6; 	X(XOR(*(raddr(es,0x17)), al));	// 23629 xor     es:17h, al ;~ 0DBE:0FB6
cs=0xdbe;eip=0x000fbb; 	T(MOV(al, 0x0ED));	// 23630 mov     al, 0EDh ; 'í' ;~ 0DBE:0FBB
cs=0xdbe;eip=0x000fbd; 	R(OUT(0x60, al));	// 23631 out     60h, al         ; 8042 keyboard controller data register. ;~ 0DBE:0FBD
cs=0xdbe;eip=0x000fbf; 	X(MOV(byte_34f98, al));	// 23637 mov     byte_34F98, al ;~ 0DBE:0FBF
cs=0xdbe;eip=0x000fc2; 	R(JMP(loc_1d18b));	// 23638 jmp     short loc_1D18B ;~ 0DBE:0FC2
loc_1d184:
	// 5799 
cs=0xdbe;eip=0x000fc4; 	T(NOT(al));	// 23642 not     al ;~ 0DBE:0FC4
cs=0xdbe;eip=0x000fc6; 	X(AND(*(raddr(es,0x18)), al));	// 23643 and     es:18h, al ;~ 0DBE:0FC6
loc_1d18b:
	// 5800 
cs=0xdbe;eip=0x000fcb; 	T(TEST(ah, 0x80));	// 23647 test    ah, 80h ;~ 0DBE:0FCB
cs=0xdbe;eip=0x000fce; 	R(JNZ(loc_1d1e1));	// 23648 jnz     short loc_1D1E1 ;~ 0DBE:0FCE
cs=0xdbe;eip=0x000fd0; 	T(MOV(al, ah));	// 23649 mov     al, ah ;~ 0DBE:0FD0
cs=0xdbe;eip=0x000fd2; 	T(MOV(bx, 0x0CC2));	// 23650 mov     bx, 0CC2h ;~ 0DBE:0FD2
cs=0xdbe;eip=0x000fd5; 	T(CMP(byte_34f93, 0));	// 23651 cmp     byte_34F93, 0 ;~ 0DBE:0FD5
cs=0xdbe;eip=0x000fda; 	R(JNZ(loc_1d1aa));	// 23652 jnz     short loc_1D1AA ;~ 0DBE:0FDA
cs=0xdbe;eip=0x000fdc; 	T(MOV(bx, 0x0D32));	// 23653 mov     bx, 0D32h ;~ 0DBE:0FDC
cs=0xdbe;eip=0x000fdf; 	T(TEST(*(raddr(es,0x17)), 3));	// 23654 test    byte ptr es:17h, 3 ;~ 0DBE:0FDF
cs=0xdbe;eip=0x000fe5; 	R(JZ(loc_1d1aa));	// 23655 jz      short loc_1D1AA ;~ 0DBE:0FE5
cs=0xdbe;eip=0x000fe7; 	T(MOV(bx, 0x0DA2));	// 23656 mov     bx, 0DA2h ;~ 0DBE:0FE7
loc_1d1aa:
	// 5801 
cs=0xdbe;eip=0x000fea; 	X(XLATP(raddr(cs,bx)));	// 23660 xlat    byte ptr cs:[bx] ;~ 0DBE:0FEA
cs=0xdbe;eip=0x000fec; 	T(TEST(*(raddr(es,0x17)), 0x20));	// 23661 test    byte ptr es:17h, 20h ;~ 0DBE:0FEC
cs=0xdbe;eip=0x000ff2; 	R(JZ(loc_1d1c4));	// 23662 jz      short loc_1D1C4 ;~ 0DBE:0FF2
cs=0xdbe;eip=0x000ff4; 	T(CMP(al, 0x91));	// 23663 cmp     al, 91h ; '‘' ;~ 0DBE:0FF4
cs=0xdbe;eip=0x000ff6; 	R(JC(loc_1d1c4));	// 23664 jb      short loc_1D1C4 ;~ 0DBE:0FF6
cs=0xdbe;eip=0x000ff8; 	T(CMP(al, 0x99));	// 23665 cmp     al, 99h ; '™' ;~ 0DBE:0FF8
cs=0xdbe;eip=0x000ffa; 	R(JA(loc_1d1be));	// 23666 ja      short loc_1D1BE ;~ 0DBE:0FFA
cs=0xdbe;eip=0x000ffc; 	T(SUB(al, 0x70));	// 23667 sub     al, 70h ; 'p' ;~ 0DBE:0FFC
loc_1d1be:
	// 5802 
cs=0xdbe;eip=0x000ffe; 	T(CMP(al, 0x1E));	// 23670 cmp     al, 1Eh ;~ 0DBE:0FFE
cs=0xdbe;eip=0x001000; 	R(JNZ(loc_1d1c4));	// 23671 jnz     short loc_1D1C4 ;~ 0DBE:1000
cs=0xdbe;eip=0x001002; 	T(ADD(al, 0x10));	// 23672 add     al, 10h ;~ 0DBE:1002
loc_1d1c4:
	// 5803 
cs=0xdbe;eip=0x001004; 	T(TEST(*(raddr(es,0x17)), 0x40));	// 23676 test    byte ptr es:17h, 40h ;~ 0DBE:1004
cs=0xdbe;eip=0x00100a; 	R(JZ(loc_1d1de));	// 23677 jz      short loc_1D1DE ;~ 0DBE:100A
cs=0xdbe;eip=0x00100c; 	T(CMP(al, 0x41));	// 23678 cmp     al, 41h ; 'A' ;~ 0DBE:100C
cs=0xdbe;eip=0x00100e; 	R(JC(loc_1d1de));	// 23679 jb      short loc_1D1DE ;~ 0DBE:100E
cs=0xdbe;eip=0x001010; 	T(CMP(al, 0x7A));	// 23680 cmp     al, 7Ah ; 'z' ;~ 0DBE:1010
cs=0xdbe;eip=0x001012; 	R(JA(loc_1d1de));	// 23681 ja      short loc_1D1DE ;~ 0DBE:1012
cs=0xdbe;eip=0x001014; 	T(CMP(al, 0x5B));	// 23682 cmp     al, 5Bh ; '[' ;~ 0DBE:1014
cs=0xdbe;eip=0x001016; 	R(JC(loc_1d1dc));	// 23683 jb      short loc_1D1DC ;~ 0DBE:1016
cs=0xdbe;eip=0x001018; 	T(CMP(al, 0x61));	// 23684 cmp     al, 61h ; 'a' ;~ 0DBE:1018
cs=0xdbe;eip=0x00101a; 	R(JC(loc_1d1de));	// 23685 jb      short loc_1D1DE ;~ 0DBE:101A
loc_1d1dc:
	// 5804 
cs=0xdbe;eip=0x00101c; 	T(XOR(al, 0x20));	// 23688 xor     al, 20h ;~ 0DBE:101C
loc_1d1de:
	// 5805 
cs=0xdbe;eip=0x00101e; 	X(MOV(byte_34f9b, al));	// 23692 mov     byte_34F9B, al ;~ 0DBE:101E
loc_1d1e1:
	// 5806 
cs=0xdbe;eip=0x001021; 	X(MOV(byte_34f9a, ah));	// 23695 mov     byte_34F9A, ah ;~ 0DBE:1021
cs=0xdbe;eip=0x001025; 	T(MOV(bl, ah));	// 23696 mov     bl, ah ;~ 0DBE:1025
cs=0xdbe;eip=0x001027; 	T(AND(bl, 0x7F));	// 23697 and     bl, 7Fh ;~ 0DBE:1027
cs=0xdbe;eip=0x00102a; 	T(MOV(al, byte_34f9c));	// 23698 mov     al, byte_34F9C ;~ 0DBE:102A
cs=0xdbe;eip=0x00102d; 	T(CMP(bl, 0x60));	// 23699 cmp     bl, 60h ; '`' ;~ 0DBE:102D
cs=0xdbe;eip=0x001030; 	R(JZ(loc_1d1f7));	// 23700 jz      short loc_1D1F7 ;~ 0DBE:1030
cs=0xdbe;eip=0x001032; 	T(CMP(bl, 0x1C));	// 23701 cmp     bl, 1Ch ;~ 0DBE:1032
cs=0xdbe;eip=0x001035; 	R(JNZ(loc_1d201));	// 23702 jnz     short loc_1D201 ;~ 0DBE:1035
loc_1d1f7:
	// 5807 
cs=0xdbe;eip=0x001037; 	T(OR(al, 0x10));	// 23705 or      al, 10h ;~ 0DBE:1037
cs=0xdbe;eip=0x001039; 	T(OR(ah, ah));	// 23706 or      ah, ah ;~ 0DBE:1039
cs=0xdbe;eip=0x00103b; 	R(JNS(loc_1d24f));	// 23707 jns     short loc_1D24F ;~ 0DBE:103B
cs=0xdbe;eip=0x00103d; 	T(AND(al, 0x0EF));	// 23708 and     al, 0EFh ;~ 0DBE:103D
cs=0xdbe;eip=0x00103f; 	R(JMP(loc_1d24f));	// 23709 jmp     short loc_1D24F ;~ 0DBE:103F
loc_1d201:
	// 5808 
cs=0xdbe;eip=0x001041; 	T(CMP(bl, 0x39));	// 23713 cmp     bl, 39h ; '9' ;~ 0DBE:1041
cs=0xdbe;eip=0x001044; 	R(JNZ(loc_1d210));	// 23714 jnz     short loc_1D210 ;~ 0DBE:1044
cs=0xdbe;eip=0x001046; 	T(OR(al, 0x20));	// 23715 or      al, 20h ;~ 0DBE:1046
cs=0xdbe;eip=0x001048; 	T(OR(ah, ah));	// 23716 or      ah, ah ;~ 0DBE:1048
cs=0xdbe;eip=0x00104a; 	R(JNS(loc_1d24f));	// 23717 jns     short loc_1D24F ;~ 0DBE:104A
cs=0xdbe;eip=0x00104c; 	T(AND(al, 0x0DF));	// 23718 and     al, 0DFh ;~ 0DBE:104C
cs=0xdbe;eip=0x00104e; 	R(JMP(loc_1d24f));	// 23719 jmp     short loc_1D24F ;~ 0DBE:104E
loc_1d210:
	// 5809 
cs=0xdbe;eip=0x001050; 	T(CMP(bl, 0x29));	// 23723 cmp     bl, 29h ; ')' ;~ 0DBE:1050
cs=0xdbe;eip=0x001053; 	R(JNZ(loc_1d217));	// 23724 jnz     short loc_1D217 ;~ 0DBE:1053
cs=0xdbe;eip=0x001055; 	T(MOV(bl, 0x48));	// 23725 mov     bl, 48h ; 'H' ;~ 0DBE:1055
loc_1d217:
	// 5810 
cs=0xdbe;eip=0x001057; 	T(CMP(bl, 0x2B));	// 23728 cmp     bl, 2Bh ; '+' ;~ 0DBE:1057
cs=0xdbe;eip=0x00105a; 	R(JNZ(loc_1d21e));	// 23729 jnz     short loc_1D21E ;~ 0DBE:105A
cs=0xdbe;eip=0x00105c; 	T(MOV(bl, 0x4B));	// 23730 mov     bl, 4Bh ; 'K' ;~ 0DBE:105C
loc_1d21e:
	// 5811 
cs=0xdbe;eip=0x00105e; 	T(SUB(bl, 0x47));	// 23733 sub     bl, 47h ; 'G' ;~ 0DBE:105E
cs=0xdbe;eip=0x001061; 	R(JS(loc_1d252));	// 23734 js      short loc_1D252 ;~ 0DBE:1061
cs=0xdbe;eip=0x001063; 	T(CMP(bl, 0x0A));	// 23735 cmp     bl, 0Ah ;~ 0DBE:1063
cs=0xdbe;eip=0x001066; 	R(JA(loc_1d231));	// 23736 ja      short loc_1D231 ;~ 0DBE:1066
cs=0xdbe;eip=0x001068; 	T(SUB(bh, bh));	// 23737 sub     bh, bh ;~ 0DBE:1068
cs=0xdbe;eip=0x00106a; 	T(ADD(bx, 0x0E22));	// 23738 add     bx, 0E22h ;~ 0DBE:106A
cs=0xdbe;eip=0x00106e; 	T(MOV(bl, *(raddr(cs,bx))));	// 23739 mov     bl, cs:[bx] ;~ 0DBE:106E
loc_1d231:
	// 5812 
cs=0xdbe;eip=0x001071; 	T(SUB(bl, 0x1F));	// 23742 sub     bl, 1Fh ;~ 0DBE:1071
cs=0xdbe;eip=0x001074; 	R(JS(loc_1d252));	// 23743 js      short loc_1D252 ;~ 0DBE:1074
cs=0xdbe;eip=0x001076; 	T(CMP(bl, 8));	// 23744 cmp     bl, 8 ;~ 0DBE:1076
cs=0xdbe;eip=0x001079; 	R(JNC(loc_1d252));	// 23745 jnb     short loc_1D252 ;~ 0DBE:1079
cs=0xdbe;eip=0x00107b; 	T(SUB(bh, bh));	// 23746 sub     bh, bh ;~ 0DBE:107B
cs=0xdbe;eip=0x00107d; 	T(ADD(bx, 0x0E12));	// 23747 add     bx, 0E12h ;~ 0DBE:107D
cs=0xdbe;eip=0x001081; 	T(OR(al, *(raddr(cs,bx))));	// 23748 or      al, cs:[bx] ;~ 0DBE:1081
cs=0xdbe;eip=0x001084; 	T(OR(ah, ah));	// 23749 or      ah, ah ;~ 0DBE:1084
cs=0xdbe;eip=0x001086; 	R(JNS(loc_1d24f));	// 23750 jns     short loc_1D24F ;~ 0DBE:1086
cs=0xdbe;eip=0x001088; 	T(ADD(bx, 8));	// 23751 add     bx, 8 ;~ 0DBE:1088
cs=0xdbe;eip=0x00108c; 	T(AND(al, *(raddr(cs,bx))));	// 23752 and     al, cs:[bx] ;~ 0DBE:108C
loc_1d24f:
	// 5813 
cs=0xdbe;eip=0x00108f; 	X(MOV(byte_34f9c, al));	// 23756 mov     byte_34F9C, al ;~ 0DBE:108F
loc_1d252:
	// 5814 
cs=0xdbe;eip=0x001092; 	T(MOV(al, 0x20));	// 23760 mov     al, 20h ; ' ' ;~ 0DBE:1092
cs=0xdbe;eip=0x001094; 	R(OUT(0x20, al));	// 23761 out     20h, al         ; Interrupt controller, 8259A. ;~ 0DBE:1094
cs=0xdbe;eip=0x001096; 	X(POP(es));	// 23762 pop     es ;~ 0DBE:1096
cs=0xdbe;eip=0x001097; 	X(POP(ds));	// 23764 pop     ds ;~ 0DBE:1097
cs=0xdbe;eip=0x001098; 	X(POP(bx));	// 23765 pop     bx ;~ 0DBE:1098
cs=0xdbe;eip=0x001099; 	X(POP(ax));	// 23766 pop     ax ;~ 0DBE:1099
cs=0xdbe;eip=0x00109a; 	R(IRET);	// 23767 iret ;~ 0DBE:109A
ret_dbe_10e8:
	// 5817 
cs=0xdbe;eip=0x0010e8; 	X(PUSH(ax));	// 23828 push    ax ;~ 0DBE:10E8
cs=0xdbe;eip=0x0010e9; 	X(PUSH(ds));	// 23829 push    ds ;~ 0DBE:10E9
cs=0xdbe;eip=0x0010ea; 	T(MOV(ax, seg_offset(dseg)));	// 23830 mov     ax, seg dseg ;~ 0DBE:10EA
cs=0xdbe;eip=0x0010ed; 	T(MOV(ds, ax));	// 23831 mov     ds, ax ;~ 0DBE:10ED
cs=0xdbe;eip=0x0010ef; 	R(CALLF(sub_2b0b6,0));	// 23832 call    sub_2B0B6 ;~ 0DBE:10EF
cs=0xdbe;eip=0x0010f4; 	X(INC(word_2bee0));	// 23833 inc     word_2BEE0 ;~ 0DBE:10F4
cs=0xdbe;eip=0x0010f8; 	X(INC(byte_34f9d));	// 23834 inc     byte_34F9D ;~ 0DBE:10F8
cs=0xdbe;eip=0x0010fc; 	X(AND(byte_34f9d, 7));	// 23835 and     byte_34F9D, 7 ;~ 0DBE:10FC
cs=0xdbe;eip=0x001101; 	X(POP(ds));	// 23836 pop     ds ;~ 0DBE:1101
cs=0xdbe;eip=0x001102; 	R(JZ(loc_1d2ca));	// 23837 jz      short loc_1D2CA ;~ 0DBE:1102
cs=0xdbe;eip=0x001104; 	T(MOV(al, 0x20));	// 23838 mov     al, 20h ; ' ' ;~ 0DBE:1104
cs=0xdbe;eip=0x001106; 	R(OUT(0x20, al));	// 23839 out     20h, al         ; Interrupt controller, 8259A. ;~ 0DBE:1106
cs=0xdbe;eip=0x001108; 	X(POP(ax));	// 23840 pop     ax ;~ 0DBE:1108
cs=0xdbe;eip=0x001109; 	R(IRET);	// 23841 iret ;~ 0DBE:1109
loc_1d2ca:
	// 5818 
cs=0xdbe;eip=0x00110a; 	X(POP(ax));	// 23845 pop     ax ;~ 0DBE:110A
	cs=seg_offset(seg005);
cs=0xdbe;eip=0x00110b; __disp=*(dd*)(((db*)&dword_1d25b));
	R(JMP(__dispatch_call));	// 23846 jmp     cs:dword_1D25B ;~ 0DBE:110B
sub_1c8f3:
	// 22252 
#undef arg_0
#define arg_0 6
	// 22255 arg_0           = word ptr  6 ;~ 0DBE:0733
#undef arg_2
#define arg_2 8
	// 22256 arg_2           = word ptr  8 ;~ 0DBE:0733
ret_dbe_733:
	// 5698 
cs=0xdbe;eip=0x000733; 	X(PUSH(bp));	// 22258 push    bp ;~ 0DBE:0733
cs=0xdbe;eip=0x000734; 	T(MOV(bp, sp));	// 22259 mov     bp, sp ;~ 0DBE:0734
cs=0xdbe;eip=0x000736; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 22260 mov     ax, [bp+arg_2] ;~ 0DBE:0736
cs=0xdbe;eip=0x000739; 	T(MOV(ah, al));	// 22261 mov     ah, al ;~ 0DBE:0739
cs=0xdbe;eip=0x00073b; 	T(SUB(al, al));	// 22262 sub     al, al ;~ 0DBE:073B
cs=0xdbe;eip=0x00073d; 	X(MOV(word_34f21, ax));	// 22263 mov     word_34F21, ax ;~ 0DBE:073D
cs=0xdbe;eip=0x000740; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 22264 mov     ax, [bp+arg_0] ;~ 0DBE:0740
cs=0xdbe;eip=0x000743; 	T(MOV(ah, al));	// 22265 mov     ah, al ;~ 0DBE:0743
cs=0xdbe;eip=0x000745; 	T(SUB(al, al));	// 22266 sub     al, al ;~ 0DBE:0745
cs=0xdbe;eip=0x000747; 	X(MOV(word_34f23, ax));	// 22267 mov     word_34F23, ax ;~ 0DBE:0747
cs=0xdbe;eip=0x00074a; 	X(POP(bp));	// 22268 pop     bp ;~ 0DBE:074A
cs=0xdbe;eip=0x00074b; 	R(RETF(0));	// 22269 retf ;~ 0DBE:074B
sub_1c90c:
	// 22277 
#undef arg_0
#define arg_0 6
	// 22280 arg_0           = byte ptr  6 ;~ 0DBE:074C
#undef arg_2
#define arg_2 8
	// 22281 arg_2           = byte ptr  8 ;~ 0DBE:074C
ret_dbe_74c:
	// 5699 
cs=0xdbe;eip=0x00074c; 	X(PUSH(bp));	// 22283 push    bp ;~ 0DBE:074C
cs=0xdbe;eip=0x00074d; 	T(MOV(bp, sp));	// 22284 mov     bp, sp ;~ 0DBE:074D
cs=0xdbe;eip=0x00074f; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 22285 mov     al, [bp+arg_0] ;~ 0DBE:074F
cs=0xdbe;eip=0x000752; 	T(SHL(al, 1));	// 22286 shl     al, 1 ;~ 0DBE:0752
cs=0xdbe;eip=0x000754; 	T(SHL(al, 1));	// 22287 shl     al, 1 ;~ 0DBE:0754
cs=0xdbe;eip=0x000756; 	T(SHL(al, 1));	// 22288 shl     al, 1 ;~ 0DBE:0756
cs=0xdbe;eip=0x000758; 	X(MOV(byte_34f27, al));	// 22289 mov     byte_34F27, al ;~ 0DBE:0758
cs=0xdbe;eip=0x00075b; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 22290 mov     al, [bp+arg_2] ;~ 0DBE:075B
cs=0xdbe;eip=0x00075e; 	T(SUB(ah, ah));	// 22291 sub     ah, ah ;~ 0DBE:075E
cs=0xdbe;eip=0x000760; 	T(SHL(ax, 1));	// 22292 shl     ax, 1 ;~ 0DBE:0760
cs=0xdbe;eip=0x000762; 	T(SHL(ax, 1));	// 22293 shl     ax, 1 ;~ 0DBE:0762
cs=0xdbe;eip=0x000764; 	T(SHL(ax, 1));	// 22294 shl     ax, 1 ;~ 0DBE:0764
cs=0xdbe;eip=0x000766; 	X(MOV(word_34f25, ax));	// 22295 mov     word_34F25, ax ;~ 0DBE:0766
cs=0xdbe;eip=0x000769; 	X(POP(bp));	// 22296 pop     bp ;~ 0DBE:0769
cs=0xdbe;eip=0x00076a; 	R(RETF(0));	// 22297 retf ;~ 0DBE:076A
sub_1c92b:
	// 22305 
#undef arg_0
#define arg_0 6
	// 22308 arg_0           = byte ptr  6 ;~ 0DBE:076B
#undef arg_2
#define arg_2 8
	// 22309 arg_2           = byte ptr  8 ;~ 0DBE:076B
ret_dbe_76b:
	// 5700 
cs=0xdbe;eip=0x00076b; 	X(PUSH(bp));	// 22311 push    bp ;~ 0DBE:076B
cs=0xdbe;eip=0x00076c; 	T(MOV(bp, sp));	// 22312 mov     bp, sp ;~ 0DBE:076C
cs=0xdbe;eip=0x00076e; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 22313 mov     al, [bp+arg_0] ;~ 0DBE:076E
cs=0xdbe;eip=0x000771; 	X(MOV(byte_34f27, al));	// 22314 mov     byte_34F27, al ;~ 0DBE:0771
cs=0xdbe;eip=0x000774; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 22315 mov     al, [bp+arg_2] ;~ 0DBE:0774
cs=0xdbe;eip=0x000777; 	T(SUB(ah, ah));	// 22316 sub     ah, ah ;~ 0DBE:0777
cs=0xdbe;eip=0x000779; 	T(SHL(ax, 1));	// 22317 shl     ax, 1 ;~ 0DBE:0779
cs=0xdbe;eip=0x00077b; 	T(SHL(ax, 1));	// 22318 shl     ax, 1 ;~ 0DBE:077B
cs=0xdbe;eip=0x00077d; 	T(SHL(ax, 1));	// 22319 shl     ax, 1 ;~ 0DBE:077D
cs=0xdbe;eip=0x00077f; 	X(MOV(word_34f25, ax));	// 22320 mov     word_34F25, ax ;~ 0DBE:077F
cs=0xdbe;eip=0x000782; 	X(POP(bp));	// 22321 pop     bp ;~ 0DBE:0782
cs=0xdbe;eip=0x000783; 	R(RETF(0));	// 22322 retf ;~ 0DBE:0783
sub_1c944:
	// 22330 
#undef arg_0
#define arg_0 6
	// 22333 arg_0           = word ptr  6 ;~ 0DBE:0784
ret_dbe_784:
	// 5701 
cs=0xdbe;eip=0x000784; 	X(PUSH(bp));	// 22335 push    bp ;~ 0DBE:0784
cs=0xdbe;eip=0x000785; 	T(MOV(bp, sp));	// 22336 mov     bp, sp ;~ 0DBE:0785
cs=0xdbe;eip=0x000787; 	X(PUSH(es));	// 22337 push    es ;~ 0DBE:0787
cs=0xdbe;eip=0x000788; 	X(PUSH(si));	// 22338 push    si ;~ 0DBE:0788
cs=0xdbe;eip=0x000789; 	X(PUSH(di));	// 22339 push    di ;~ 0DBE:0789
cs=0xdbe;eip=0x00078a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 22340 mov     bx, [bp+arg_0] ;~ 0DBE:078A
cs=0xdbe;eip=0x00078d; 	T(MOV(al, *(raddr(ds,bx))));	// 22341 mov     al, [bx] ;~ 0DBE:078D
cs=0xdbe;eip=0x00078f; 	T(CMP(al, 0x20));	// 22342 cmp     al, 20h ; ' ' ;~ 0DBE:078F
cs=0xdbe;eip=0x000791; 	R(JNC(loc_1c956));	// 22343 jnb     short loc_1C956 ;~ 0DBE:0791
cs=0xdbe;eip=0x000793; 	R(JMP(loc_1c9f1));	// 22344 jmp     loc_1C9F1 ;~ 0DBE:0793
loc_1c956:
	// 5702 
cs=0xdbe;eip=0x000796; 	T(SUB(ah, ah));	// 22348 sub     ah, ah ;~ 0DBE:0796
cs=0xdbe;eip=0x000798; 	T(SHL(ax, 1));	// 22349 shl     ax, 1 ;~ 0DBE:0798
cs=0xdbe;eip=0x00079a; 	T(SHL(ax, 1));	// 22350 shl     ax, 1 ;~ 0DBE:079A
cs=0xdbe;eip=0x00079c; 	T(SHL(ax, 1));	// 22351 shl     ax, 1 ;~ 0DBE:079C
cs=0xdbe;eip=0x00079e; 	T(ADD(ax, 0x362));	// 22352 add     ax, 362h ;~ 0DBE:079E
cs=0xdbe;eip=0x0007a1; 	T(SUB(ax, 0x100));	// 22353 sub     ax, 100h ;~ 0DBE:07A1
cs=0xdbe;eip=0x0007a4; 	X(PUSH(si));	// 22354 push    si ;~ 0DBE:07A4
cs=0xdbe;eip=0x0007a5; 	T(MOV(si, ax));	// 22355 mov     si, ax ;~ 0DBE:07A5
cs=0xdbe;eip=0x0007a7; 	T(MOV(bx, 0x90E8));	// 22356 mov     bx, 90E8h ;~ 0DBE:07A7
cs=0xdbe;eip=0x0007aa; 	T(MOV(dx, bx));	// 22357 mov     dx, bx ;~ 0DBE:07AA
cs=0xdbe;eip=0x0007ac; 	T(MOV(cx, 8));	// 22358 mov     cx, 8 ;~ 0DBE:07AC
loc_1c96f:
	// 5703 
cs=0xdbe;eip=0x0007af; 	T(MOV(al, *(raddr(cs,si))));	// 22361 mov     al, cs:[si] ;~ 0DBE:07AF
cs=0xdbe;eip=0x0007b2; 	T(INC(si));	// 22362 inc     si ;~ 0DBE:07B2
cs=0xdbe;eip=0x0007b3; 	X(MOV(*(raddr(ds,bx)), al));	// 22363 mov     [bx], al ;~ 0DBE:07B3
cs=0xdbe;eip=0x0007b5; 	T(INC(bx));	// 22364 inc     bx ;~ 0DBE:07B5
cs=0xdbe;eip=0x0007b6; 	R(LOOP(loc_1c96f));	// 22365 loop    loc_1C96F ;~ 0DBE:07B6
cs=0xdbe;eip=0x0007b8; 	X(POP(si));	// 22366 pop     si ;~ 0DBE:07B8
cs=0xdbe;eip=0x0007b9; 	T(MOV(al, byte_34f27));	// 22367 mov     al, byte_34F27 ;~ 0DBE:07B9
cs=0xdbe;eip=0x0007bc; 	T(SUB(ah, ah));	// 22368 sub     ah, ah ;~ 0DBE:07BC
cs=0xdbe;eip=0x0007be; 	T(MOV(bx, word_34f25));	// 22369 mov     bx, word_34F25 ;~ 0DBE:07BE
cs=0xdbe;eip=0x0007c2; 	T(ADD(ax, 7));	// 22370 add     ax, 7 ;~ 0DBE:07C2
cs=0xdbe;eip=0x0007c5; 	X(PUSH(dx));	// 22371 push    dx ;~ 0DBE:07C5
cs=0xdbe;eip=0x0007c6; 	X(PUSH(ax));	// 22372 push    ax ;~ 0DBE:07C6
cs=0xdbe;eip=0x0007c7; 	X(PUSH(bx));	// 22373 push    bx ;~ 0DBE:07C7
cs=0xdbe;eip=0x0007c8; 	R(CALLF(sub_26fb8,0));	// 22374 call    sub_26FB8 ;~ 0DBE:07C8
cs=0xdbe;eip=0x0007cd; 	T(ADD(sp, 4));	// 22375 add     sp, 4 ;~ 0DBE:07CD
cs=0xdbe;eip=0x0007d0; 	T(MOV(ax, word_34f23));	// 22376 mov     ax, word_34F23 ;~ 0DBE:07D0
cs=0xdbe;eip=0x0007d3; 	T(MOV(al, ah));	// 22377 mov     al, ah ;~ 0DBE:07D3
cs=0xdbe;eip=0x0007d5; 	T(SUB(ah, ah));	// 22378 sub     ah, ah ;~ 0DBE:07D5
cs=0xdbe;eip=0x0007d7; 	X(PUSH(ax));	// 22379 push    ax ;~ 0DBE:07D7
cs=0xdbe;eip=0x0007d8; 	R(CALLF(sub_27031,0));	// 22380 call    far ptr sub_27031 ;~ 0DBE:07D8
cs=0xdbe;eip=0x0007dd; 	T(ADD(sp, 2));	// 22381 add     sp, 2 ;~ 0DBE:07DD
cs=0xdbe;eip=0x0007e0; 	X(POP(dx));	// 22382 pop     dx ;~ 0DBE:07E0
cs=0xdbe;eip=0x0007e1; 	X(PUSH(dx));	// 22383 push    dx ;~ 0DBE:07E1
cs=0xdbe;eip=0x0007e2; 	T(MOV(ax, 8));	// 22384 mov     ax, 8 ;~ 0DBE:07E2
cs=0xdbe;eip=0x0007e5; 	X(PUSH(ax));	// 22385 push    ax ;~ 0DBE:07E5
cs=0xdbe;eip=0x0007e6; 	T(MOV(al, 1));	// 22386 mov     al, 1 ;~ 0DBE:07E6
cs=0xdbe;eip=0x0007e8; 	X(PUSH(ax));	// 22387 push    ax ;~ 0DBE:07E8
cs=0xdbe;eip=0x0007e9; 	X(PUSH(dx));	// 22388 push    dx ;~ 0DBE:07E9
cs=0xdbe;eip=0x0007ea; 	R(CALLF(sub_285fb,0));	// 22389 call    far ptr sub_285FB ;~ 0DBE:07EA
cs=0xdbe;eip=0x0007ef; 	T(ADD(sp, 6));	// 22390 add     sp, 6 ;~ 0DBE:07EF
cs=0xdbe;eip=0x0007f2; 	T(MOV(ax, word_34f21));	// 22391 mov     ax, word_34F21 ;~ 0DBE:07F2
cs=0xdbe;eip=0x0007f5; 	T(MOV(al, ah));	// 22392 mov     al, ah ;~ 0DBE:07F5
cs=0xdbe;eip=0x0007f7; 	T(SUB(ah, ah));	// 22393 sub     ah, ah ;~ 0DBE:07F7
cs=0xdbe;eip=0x0007f9; 	X(PUSH(ax));	// 22394 push    ax ;~ 0DBE:07F9
cs=0xdbe;eip=0x0007fa; 	R(CALLF(sub_27031,0));	// 22395 call    far ptr sub_27031 ;~ 0DBE:07FA
cs=0xdbe;eip=0x0007ff; 	T(ADD(sp, 2));	// 22396 add     sp, 2 ;~ 0DBE:07FF
cs=0xdbe;eip=0x000802; 	X(POP(dx));	// 22397 pop     dx ;~ 0DBE:0802
cs=0xdbe;eip=0x000803; 	T(CMP(byte_34f20, 0));	// 22398 cmp     byte_34F20, 0 ;~ 0DBE:0803
cs=0xdbe;eip=0x000808; 	R(JNZ(loc_1c9f1));	// 22399 jnz     short loc_1C9F1 ;~ 0DBE:0808
cs=0xdbe;eip=0x00080a; 	X(PUSH(si));	// 22400 push    si ;~ 0DBE:080A
cs=0xdbe;eip=0x00080b; 	T(MOV(si, dx));	// 22401 mov     si, dx ;~ 0DBE:080B
cs=0xdbe;eip=0x00080d; 	T(MOV(dx, 0x90E8));	// 22402 mov     dx, 90E8h ;~ 0DBE:080D
cs=0xdbe;eip=0x000810; 	T(MOV(bx, dx));	// 22403 mov     bx, dx ;~ 0DBE:0810
cs=0xdbe;eip=0x000812; 	T(MOV(cx, 4));	// 22404 mov     cx, 4 ;~ 0DBE:0812
loc_1c9d5:
	// 5704 
cs=0xdbe;eip=0x000815; 	T(LODSW);	// 22407 lodsw ;~ 0DBE:0815
cs=0xdbe;eip=0x000816; 	T(XOR(ax, 0x0FFFF));	// 22408 xor     ax, 0FFFFh ;~ 0DBE:0816
cs=0xdbe;eip=0x000819; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 22409 mov     [bx], ax ;~ 0DBE:0819
cs=0xdbe;eip=0x00081b; 	T(ADD(bx, 2));	// 22410 add     bx, 2 ;~ 0DBE:081B
cs=0xdbe;eip=0x00081e; 	R(LOOP(loc_1c9d5));	// 22411 loop    loc_1C9D5 ;~ 0DBE:081E
cs=0xdbe;eip=0x000820; 	X(POP(si));	// 22412 pop     si ;~ 0DBE:0820
cs=0xdbe;eip=0x000821; 	T(MOV(ax, 8));	// 22413 mov     ax, 8 ;~ 0DBE:0821
cs=0xdbe;eip=0x000824; 	X(PUSH(ax));	// 22414 push    ax ;~ 0DBE:0824
cs=0xdbe;eip=0x000825; 	T(MOV(al, 1));	// 22415 mov     al, 1 ;~ 0DBE:0825
cs=0xdbe;eip=0x000827; 	X(PUSH(ax));	// 22416 push    ax ;~ 0DBE:0827
cs=0xdbe;eip=0x000828; 	X(PUSH(dx));	// 22417 push    dx ;~ 0DBE:0828
cs=0xdbe;eip=0x000829; 	R(CALLF(sub_285fb,0));	// 22418 call    far ptr sub_285FB ;~ 0DBE:0829
cs=0xdbe;eip=0x00082e; 	T(ADD(sp, 6));	// 22419 add     sp, 6 ;~ 0DBE:082E
loc_1c9f1:
	// 5705 
cs=0xdbe;eip=0x000831; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 22423 mov     bx, [bp+arg_0] ;~ 0DBE:0831
cs=0xdbe;eip=0x000834; 	T(MOV(bl, *(raddr(ds,bx))));	// 22424 mov     bl, [bx] ;~ 0DBE:0834
cs=0xdbe;eip=0x000836; 	T(SUB(bh, bh));	// 22425 sub     bh, bh ;~ 0DBE:0836
cs=0xdbe;eip=0x000838; 	T(ADD(bx, 0x2E2));	// 22426 add     bx, 2E2h ;~ 0DBE:0838
cs=0xdbe;eip=0x00083c; 	T(MOV(ax, word_34f25));	// 22427 mov     ax, word_34F25 ;~ 0DBE:083C
cs=0xdbe;eip=0x00083f; 	T(MOV(cl, *(raddr(cs,bx))));	// 22428 mov     cl, cs:[bx] ;~ 0DBE:083F
cs=0xdbe;eip=0x000842; 	T(SUB(ch, ch));	// 22429 sub     ch, ch ;~ 0DBE:0842
cs=0xdbe;eip=0x000844; 	T(ADD(ax, cx));	// 22430 add     ax, cx ;~ 0DBE:0844
cs=0xdbe;eip=0x000846; 	X(MOV(word_34f25, ax));	// 22431 mov     word_34F25, ax ;~ 0DBE:0846
cs=0xdbe;eip=0x000849; 	X(POP(di));	// 22432 pop     di ;~ 0DBE:0849
cs=0xdbe;eip=0x00084a; 	X(POP(si));	// 22433 pop     si ;~ 0DBE:084A
cs=0xdbe;eip=0x00084b; 	X(POP(es));	// 22434 pop     es ;~ 0DBE:084B
cs=0xdbe;eip=0x00084c; 	X(POP(bp));	// 22435 pop     bp ;~ 0DBE:084C
cs=0xdbe;eip=0x00084d; 	R(RETF(0));	// 22436 retf ;~ 0DBE:084D
sub_1ca0e:
	// 22444 
#undef arg_0
#define arg_0 6
	// 22446 arg_0           = word ptr  6 ;~ 0DBE:084E
#undef arg_2
#define arg_2 8
	// 22447 arg_2           = word ptr  8 ;~ 0DBE:084E
#undef arg_4
#define arg_4 0x0A
	// 22448 arg_4           = word ptr  0Ah ;~ 0DBE:084E
ret_dbe_84e:
	// 5706 
cs=0xdbe;eip=0x00084e; 	X(PUSH(bp));	// 22450 push    bp ;~ 0DBE:084E
cs=0xdbe;eip=0x00084f; 	T(MOV(bp, sp));	// 22451 mov     bp, sp ;~ 0DBE:084F
cs=0xdbe;eip=0x000851; 	T(MOV(ax, 0x4200));	// 22452 mov     ax, 4200h ;~ 0DBE:0851
cs=0xdbe;eip=0x000854; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 22453 mov     bx, [bp+arg_0] ;~ 0DBE:0854
cs=0xdbe;eip=0x000857; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_4))));	// 22454 mov     cx, [bp+arg_4] ;~ 0DBE:0857
cs=0xdbe;eip=0x00085a; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 22455 mov     dx, [bp+arg_2] ;~ 0DBE:085A
cs=0xdbe;eip=0x00085d; 	R(_INT(0x21));	// 22456 int     21h             ; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) ;~ 0DBE:085D
cs=0xdbe;eip=0x00085f; 	T(MOV(ax, 1));	// 22458 mov     ax, 1 ;~ 0DBE:085F
cs=0xdbe;eip=0x000862; 	R(JNC(loc_1ca26));	// 22459 jnb     short loc_1CA26 ;~ 0DBE:0862
cs=0xdbe;eip=0x000864; 	T(SUB(ax, ax));	// 22460 sub     ax, ax ;~ 0DBE:0864
loc_1ca26:
	// 5707 
cs=0xdbe;eip=0x000866; 	X(POP(bp));	// 22463 pop     bp ;~ 0DBE:0866
cs=0xdbe;eip=0x000867; 	R(RETF(0));	// 22464 retf ;~ 0DBE:0867
sub_1ca28:
	// 22472 
#undef arg_0
#define arg_0 6
	// 22475 arg_0           = word ptr  6 ;~ 0DBE:0868
ret_dbe_868:
	// 5708 
cs=0xdbe;eip=0x000868; 	X(PUSH(bp));	// 22477 push    bp ;~ 0DBE:0868
cs=0xdbe;eip=0x000869; 	T(MOV(bp, sp));	// 22478 mov     bp, sp ;~ 0DBE:0869
cs=0xdbe;eip=0x00086b; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_0))));	// 22479 mov     dx, [bp+arg_0] ;~ 0DBE:086B
cs=0xdbe;eip=0x00086e; 	T(MOV(ax, 0x3D00));	// 22480 mov     ax, 3D00h ;~ 0DBE:086E
cs=0xdbe;eip=0x000871; 	R(_INT(0x21));	// 22481 int     21h             ; DOS - 2+ - OPEN DISK FILE WITH HANDLE ;~ 0DBE:0871
cs=0xdbe;eip=0x000873; 	R(JNC(loc_1ca38));	// 22485 jnb     short loc_1CA38 ;~ 0DBE:0873
cs=0xdbe;eip=0x000875; 	T(MOV(ax, 0x0FFFF));	// 22486 mov     ax, 0FFFFh ;~ 0DBE:0875
loc_1ca38:
	// 5709 
cs=0xdbe;eip=0x000878; 	X(POP(bp));	// 22489 pop     bp ;~ 0DBE:0878
cs=0xdbe;eip=0x000879; 	R(RETF(0));	// 22490 retf ;~ 0DBE:0879
sub_1ca3a:
	// 22498 
#undef var_2
#define var_2 -2
	// 22501 var_2           = word ptr -2 ;~ 0DBE:087A
#undef arg_0
#define arg_0 6
	// 22502 arg_0           = word ptr  6 ;~ 0DBE:087A
ret_dbe_87a:
	// 5710 
cs=0xdbe;eip=0x00087a; 	X(PUSH(bp));	// 22504 push    bp ;~ 0DBE:087A
cs=0xdbe;eip=0x00087b; 	T(MOV(bp, sp));	// 22505 mov     bp, sp ;~ 0DBE:087B
cs=0xdbe;eip=0x00087d; 	T(SUB(sp, 2));	// 22506 sub     sp, 2 ;~ 0DBE:087D
cs=0xdbe;eip=0x000880; 	T(MOV(ax, 0x4202));	// 22507 mov     ax, 4202h ;~ 0DBE:0880
cs=0xdbe;eip=0x000883; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 22508 mov     bx, [bp+arg_0] ;~ 0DBE:0883
cs=0xdbe;eip=0x000886; 	T(MOV(cx, 0));	// 22509 mov     cx, 0 ;~ 0DBE:0886
cs=0xdbe;eip=0x000889; 	T(MOV(dx, 0));	// 22510 mov     dx, 0 ;~ 0DBE:0889
cs=0xdbe;eip=0x00088c; 	R(_INT(0x21));	// 22511 int     21h             ; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) ;~ 0DBE:088C
cs=0xdbe;eip=0x00088e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 22513 mov     [bp+var_2], ax ;~ 0DBE:088E
cs=0xdbe;eip=0x000891; 	T(MOV(ax, 0x4200));	// 22514 mov     ax, 4200h ;~ 0DBE:0891
cs=0xdbe;eip=0x000894; 	T(MOV(dx, 0));	// 22515 mov     dx, 0 ;~ 0DBE:0894
cs=0xdbe;eip=0x000897; 	R(_INT(0x21));	// 22516 int     21h             ; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) ;~ 0DBE:0897
cs=0xdbe;eip=0x000899; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 22518 mov     ax, [bp+var_2] ;~ 0DBE:0899
cs=0xdbe;eip=0x00089c; 	T(MOV(sp, bp));	// 22519 mov     sp, bp ;~ 0DBE:089C
cs=0xdbe;eip=0x00089e; 	X(POP(bp));	// 22520 pop     bp ;~ 0DBE:089E
cs=0xdbe;eip=0x00089f; 	R(RETF(0));	// 22521 retf ;~ 0DBE:089F
sub_1ca60:
	// 22529 
#undef arg_0
#define arg_0 6
	// 22532 arg_0           = word ptr  6 ;~ 0DBE:08A0
#undef arg_2
#define arg_2 8
	// 22533 arg_2           = word ptr  8 ;~ 0DBE:08A0
#undef arg_4
#define arg_4 0x0A
	// 22534 arg_4           = word ptr  0Ah ;~ 0DBE:08A0
#undef arg_6
#define arg_6 0x0C
	// 22535 arg_6           = word ptr  0Ch ;~ 0DBE:08A0
ret_dbe_8a0:
	// 5711 
cs=0xdbe;eip=0x0008a0; 	X(PUSH(bp));	// 22537 push    bp ;~ 0DBE:08A0
cs=0xdbe;eip=0x0008a1; 	T(MOV(bp, sp));	// 22538 mov     bp, sp ;~ 0DBE:08A1
cs=0xdbe;eip=0x0008a3; 	X(PUSH(ds));	// 22539 push    ds ;~ 0DBE:08A3
cs=0xdbe;eip=0x0008a4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 22540 mov     bx, [bp+arg_6] ;~ 0DBE:08A4
cs=0xdbe;eip=0x0008a7; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_4))));	// 22541 mov     cx, [bp+arg_4] ;~ 0DBE:08A7
cs=0xdbe;eip=0x0008aa; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_0))));	// 22542 mov     dx, [bp+arg_0] ;~ 0DBE:08AA
cs=0xdbe;eip=0x0008ad; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 22543 mov     ax, [bp+arg_2] ;~ 0DBE:08AD
cs=0xdbe;eip=0x0008b0; 	T(MOV(ds, ax));	// 22544 mov     ds, ax ;~ 0DBE:08B0
cs=0xdbe;eip=0x0008b2; 	T(MOV(ah, 0x3F));	// 22545 mov     ah, 3Fh ;~ 0DBE:08B2
cs=0xdbe;eip=0x0008b4; 	R(_INT(0x21));	// 22546 int     21h             ; DOS - 2+ - READ FROM FILE WITH HANDLE ;~ 0DBE:08B4
cs=0xdbe;eip=0x0008b6; 	X(POP(ds));	// 22549 pop     ds ;~ 0DBE:08B6
cs=0xdbe;eip=0x0008b7; 	X(POP(bp));	// 22550 pop     bp ;~ 0DBE:08B7
cs=0xdbe;eip=0x0008b8; 	R(RETF(0));	// 22551 retf ;~ 0DBE:08B8
sub_1ca79:
	// 22559 
#undef arg_0
#define arg_0 6
	// 22562 arg_0           = word ptr  6 ;~ 0DBE:08B9
ret_dbe_8b9:
	// 5712 
cs=0xdbe;eip=0x0008b9; 	X(PUSH(bp));	// 22564 push    bp ;~ 0DBE:08B9
cs=0xdbe;eip=0x0008ba; 	T(MOV(bp, sp));	// 22565 mov     bp, sp ;~ 0DBE:08BA
cs=0xdbe;eip=0x0008bc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 22566 mov     bx, [bp+arg_0] ;~ 0DBE:08BC
cs=0xdbe;eip=0x0008bf; 	T(MOV(ah, 0x3E));	// 22567 mov     ah, 3Eh ;~ 0DBE:08BF
cs=0xdbe;eip=0x0008c1; 	R(_INT(0x21));	// 22568 int     21h             ; DOS - 2+ - CLOSE A FILE WITH HANDLE ;~ 0DBE:08C1
cs=0xdbe;eip=0x0008c3; 	X(POP(bp));	// 22570 pop     bp ;~ 0DBE:08C3
cs=0xdbe;eip=0x0008c4; 	R(RETF(0));	// 22571 retf ;~ 0DBE:08C4
sub_1ca85:
	// 22578 
cs=0xdbe;eip=0x0008c5; 	X(PUSH(es));	// 22579 push    es ;~ 0DBE:08C5
ret_dbe_8c6:
	// 5713 
cs=0xdbe;eip=0x0008c6; 	X(PUSH(si));	// 22580 push    si ;~ 0DBE:08C6
cs=0xdbe;eip=0x0008c7; 	X(PUSH(di));	// 22581 push    di ;~ 0DBE:08C7
cs=0xdbe;eip=0x0008c8; 	X(MOV(word_34f14, si));	// 22582 mov     word_34F14, si ;~ 0DBE:08C8
cs=0xdbe;eip=0x0008cc; 	X(MOV(word_34f16, di));	// 22583 mov     word_34F16, di ;~ 0DBE:08CC
cs=0xdbe;eip=0x0008d0; 	X(MOV(word_34f18, es));	// 22584 mov     word_34F18, es ;~ 0DBE:08D0
cs=0xdbe;eip=0x0008d4; 	R(CALL(sub_1cc65,0));	// 22585 call    sub_1CC65 ;~ 0DBE:08D4
cs=0xdbe;eip=0x0008d7; 	T(CMP(byte_2becc, 0));	// 22586 cmp     byte_2BECC, 0 ;~ 0DBE:08D7
cs=0xdbe;eip=0x0008dc; 	R(JZ(loc_1caa2));	// 22587 jz      short loc_1CAA2 ;~ 0DBE:08DC
cs=0xdbe;eip=0x0008de; 	X(POP(di));	// 22588 pop     di ;~ 0DBE:08DE
cs=0xdbe;eip=0x0008df; 	X(POP(si));	// 22589 pop     si ;~ 0DBE:08DF
cs=0xdbe;eip=0x0008e0; 	X(POP(es));	// 22590 pop     es ;~ 0DBE:08E0
cs=0xdbe;eip=0x0008e1; 	R(RETF(0));	// 22591 retf ;~ 0DBE:08E1
loc_1caa2:
	// 5714 
cs=0xdbe;eip=0x0008e2; 	T(MOV(ax, word_3a178));	// 22595 mov     ax, word_3A178 ;~ 0DBE:08E2
cs=0xdbe;eip=0x0008e5; 	T(CMP(al, 0x0D));	// 22596 cmp     al, 0Dh ;~ 0DBE:08E5
cs=0xdbe;eip=0x0008e7; 	R(JNZ(loc_1caac));	// 22597 jnz     short loc_1CAAC ;~ 0DBE:08E7
cs=0xdbe;eip=0x0008e9; 	R(JMP(loc_1cb24));	// 22598 jmp     short loc_1CB24 ;~ 0DBE:08E9
loc_1caac:
	// 5715 
cs=0xdbe;eip=0x0008ec; 	R(JA(loc_1cab6));	// 22603 ja      short loc_1CAB6 ;~ 0DBE:08EC
cs=0xdbe;eip=0x0008ee; 	R(JMP(loc_1cbc3));	// 22604 jmp     loc_1CBC3 ;~ 0DBE:08EE
loc_1cab1:
	// 5716 
cs=0xdbe;eip=0x0008f1; 	X(POP(bx));	// 22608 pop     bx ;~ 0DBE:08F1
cs=0xdbe;eip=0x0008f2; 	X(POP(di));	// 22609 pop     di ;~ 0DBE:08F2
cs=0xdbe;eip=0x0008f3; 	X(POP(si));	// 22610 pop     si ;~ 0DBE:08F3
cs=0xdbe;eip=0x0008f4; 	X(POP(es));	// 22611 pop     es ;~ 0DBE:08F4
cs=0xdbe;eip=0x0008f5; 	R(RETF(0));	// 22612 retf ;~ 0DBE:08F5
loc_1cab6:
	// 5717 
cs=0xdbe;eip=0x0008f6; 	T(MOV(bx, 0));	// 22616 mov     bx, 0 ;~ 0DBE:08F6
cs=0xdbe;eip=0x0008f9; 	T(MOV(es, word_34f0c));	// 22617 mov     es, word_34F0C ;~ 0DBE:08F9
loc_1cabd:
	// 5718 
cs=0xdbe;eip=0x0008fd; 	X(PUSH(bx));	// 22620 push    bx ;~ 0DBE:08FD
cs=0xdbe;eip=0x0008fe; 	T(MOV(al, *(raddr(ds,bx-0x6F0F))));	// 22621 mov     al, [bx-6F0Fh] ;~ 0DBE:08FE
cs=0xdbe;eip=0x000902; 	T(SUB(ah, ah));	// 22622 sub     ah, ah ;~ 0DBE:0902
cs=0xdbe;eip=0x000904; 	T(AND(bl, 7));	// 22623 and     bl, 7 ;~ 0DBE:0904
cs=0xdbe;eip=0x000907; 	T(SHL(bx, 1));	// 22624 shl     bx, 1 ;~ 0DBE:0907
cs=0xdbe;eip=0x000909; 	T(MOV(di, *(dw*)(raddr(ds,bx-0x6EC5))));	// 22625 mov     di, [bx-6EC5h] ;~ 0DBE:0909
cs=0xdbe;eip=0x00090d; 	T(SHL(di, 1));	// 22626 shl     di, 1 ;~ 0DBE:090D
cs=0xdbe;eip=0x00090f; 	T(SHL(di, 1));	// 22627 shl     di, 1 ;~ 0DBE:090F
cs=0xdbe;eip=0x000911; 	T(SHL(di, 1));	// 22628 shl     di, 1 ;~ 0DBE:0911
cs=0xdbe;eip=0x000913; 	T(ADD(di, ax));	// 22629 add     di, ax ;~ 0DBE:0913
cs=0xdbe;eip=0x000915; 	T(MOV(ax, word_2bee0));	// 22630 mov     ax, word_2BEE0 ;~ 0DBE:0915
cs=0xdbe;eip=0x000918; 	X(PUSH(ax));	// 22631 push    ax ;~ 0DBE:0918
cs=0xdbe;eip=0x000919; 	X(PUSH(ds));	// 22632 push    ds ;~ 0DBE:0919
cs=0xdbe;eip=0x00091a; 	T(MOV(ds, word_34f0e));	// 22633 mov     ds, word_34F0E ;~ 0DBE:091A
cs=0xdbe;eip=0x00091e; 	T(MOV(ah, 0x19));	// 22634 mov     ah, 19h ;~ 0DBE:091E
loc_1cae0:
	// 5719 
cs=0xdbe;eip=0x000920; 	T(MOV(cx, 0x0A));	// 22637 mov     cx, 0Ah ;~ 0DBE:0920
loc_1cae3:
	// 5720 
cs=0xdbe;eip=0x000923; 	T(MOV(si, di));	// 22640 mov     si, di ;~ 0DBE:0923
cs=0xdbe;eip=0x000925; 	X(MOVSB);	// 22641 movsb ;~ 0DBE:0925
cs=0xdbe;eip=0x000926; 	T(ADD(di, 7));	// 22642 add     di, 7 ;~ 0DBE:0926
cs=0xdbe;eip=0x000929; 	T(MOV(si, di));	// 22643 mov     si, di ;~ 0DBE:0929
cs=0xdbe;eip=0x00092b; 	X(MOVSB);	// 22644 movsb ;~ 0DBE:092B
cs=0xdbe;eip=0x00092c; 	T(ADD(di, 7));	// 22645 add     di, 7 ;~ 0DBE:092C
cs=0xdbe;eip=0x00092f; 	T(MOV(si, di));	// 22646 mov     si, di ;~ 0DBE:092F
cs=0xdbe;eip=0x000931; 	X(MOVSB);	// 22647 movsb ;~ 0DBE:0931
cs=0xdbe;eip=0x000932; 	T(ADD(di, 7));	// 22648 add     di, 7 ;~ 0DBE:0932
cs=0xdbe;eip=0x000935; 	T(MOV(si, di));	// 22649 mov     si, di ;~ 0DBE:0935
cs=0xdbe;eip=0x000937; 	X(MOVSB);	// 22650 movsb ;~ 0DBE:0937
cs=0xdbe;eip=0x000938; 	T(ADD(di, 7));	// 22651 add     di, 7 ;~ 0DBE:0938
cs=0xdbe;eip=0x00093b; 	R(LOOP(loc_1cae3));	// 22652 loop    loc_1CAE3 ;~ 0DBE:093B
cs=0xdbe;eip=0x00093d; 	T(ADD(di, 0x8C0));	// 22653 add     di, 8C0h ;~ 0DBE:093D
cs=0xdbe;eip=0x000941; 	T(DEC(ah));	// 22654 dec     ah ;~ 0DBE:0941
cs=0xdbe;eip=0x000943; 	R(JNZ(loc_1cae0));	// 22655 jnz     short loc_1CAE0 ;~ 0DBE:0943
cs=0xdbe;eip=0x000945; 	X(POP(ds));	// 22656 pop     ds ;~ 0DBE:0945
cs=0xdbe;eip=0x000946; 	R(CALL(sub_1cc65,0));	// 22657 call    sub_1CC65 ;~ 0DBE:0946
cs=0xdbe;eip=0x000949; 	X(POP(ax));	// 22658 pop     ax ;~ 0DBE:0949
cs=0xdbe;eip=0x00094a; 	T(CMP(byte_2becc, 0));	// 22659 cmp     byte_2BECC, 0 ;~ 0DBE:094A
cs=0xdbe;eip=0x00094f; 	R(JNZ(loc_1cab1));	// 22660 jnz     short loc_1CAB1 ;~ 0DBE:094F
loc_1cb11:
	// 5721 
cs=0xdbe;eip=0x000951; 	T(MOV(dx, word_2bee0));	// 22663 mov     dx, word_2BEE0 ;~ 0DBE:0951
cs=0xdbe;eip=0x000955; 	T(SUB(dx, ax));	// 22664 sub     dx, ax ;~ 0DBE:0955
cs=0xdbe;eip=0x000957; 	R(JZ(loc_1cb11));	// 22665 jz      short loc_1CB11 ;~ 0DBE:0957
cs=0xdbe;eip=0x000959; 	X(POP(bx));	// 22666 pop     bx ;~ 0DBE:0959
cs=0xdbe;eip=0x00095a; 	T(INC(bx));	// 22667 inc     bx ;~ 0DBE:095A
cs=0xdbe;eip=0x00095b; 	T(CMP(bx, 0x40));	// 22668 cmp     bx, 40h ; '@' ;~ 0DBE:095B
cs=0xdbe;eip=0x00095e; 	R(JC(loc_1cabd));	// 22669 jb      short loc_1CABD ;~ 0DBE:095E
cs=0xdbe;eip=0x000960; 	X(POP(di));	// 22670 pop     di ;~ 0DBE:0960
cs=0xdbe;eip=0x000961; 	X(POP(si));	// 22671 pop     si ;~ 0DBE:0961
cs=0xdbe;eip=0x000962; 	X(POP(es));	// 22672 pop     es ;~ 0DBE:0962
cs=0xdbe;eip=0x000963; 	R(RETF(0));	// 22673 retf ;~ 0DBE:0963
loc_1cb24:
	// 5722 
cs=0xdbe;eip=0x000964; 	T(MOV(dx, 0x3C4));	// 22677 mov     dx, 3C4h ;~ 0DBE:0964
cs=0xdbe;eip=0x000967; 	T(MOV(ax, 0x0F02));	// 22678 mov     ax, 0F02h ;~ 0DBE:0967
cs=0xdbe;eip=0x00096a; 	R(OUT(dx, ax));	// 22679 out     dx, ax          ; EGA: sequencer address reg ;~ 0DBE:096A
cs=0xdbe;eip=0x00096b; 	T(MOV(dx, 0x3CE));	// 22681 mov     dx, 3CEh ;~ 0DBE:096B
cs=0xdbe;eip=0x00096e; 	T(MOV(ax, 5));	// 22682 mov     ax, 5 ;~ 0DBE:096E
cs=0xdbe;eip=0x000971; 	R(OUT(dx, ax));	// 22683 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:0971
cs=0xdbe;eip=0x000972; 	T(MOV(ax, 0x0F01));	// 22690 mov     ax, 0F01h ;~ 0DBE:0972
cs=0xdbe;eip=0x000975; 	R(OUT(dx, ax));	// 22691 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:0975
cs=0xdbe;eip=0x000976; 	T(MOV(ax, 3));	// 22693 mov     ax, 3 ;~ 0DBE:0976
cs=0xdbe;eip=0x000979; 	R(OUT(dx, ax));	// 22694 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:0979
cs=0xdbe;eip=0x00097a; 	T(SUB(bx, bx));	// 22699 sub     bx, bx ;~ 0DBE:097A
cs=0xdbe;eip=0x00097c; 	T(MOV(es, word_34f0c));	// 22700 mov     es, word_34F0C ;~ 0DBE:097C
loc_1cb40:
	// 5723 
cs=0xdbe;eip=0x000980; 	T(MOV(cl, *(raddr(ds,bx-0x6F0F))));	// 22703 mov     cl, [bx-6F0Fh] ;~ 0DBE:0980
cs=0xdbe;eip=0x000984; 	X(PUSH(bx));	// 22704 push    bx ;~ 0DBE:0984
cs=0xdbe;eip=0x000985; 	T(AND(bl, 7));	// 22705 and     bl, 7 ;~ 0DBE:0985
cs=0xdbe;eip=0x000988; 	T(SHL(bx, 1));	// 22706 shl     bx, 1 ;~ 0DBE:0988
cs=0xdbe;eip=0x00098a; 	T(MOV(di, *(dw*)(raddr(ds,bx-0x6EC5))));	// 22707 mov     di, [bx-6EC5h] ;~ 0DBE:098A
cs=0xdbe;eip=0x00098e; 	T(MOV(bl, cl));	// 22708 mov     bl, cl ;~ 0DBE:098E
cs=0xdbe;eip=0x000990; 	T(MOV(ch, *(raddr(ds,bx-0x6ECF))));	// 22709 mov     ch, [bx-6ECFh] ;~ 0DBE:0990
cs=0xdbe;eip=0x000994; 	X(MOV(byte_352ab, 0x19));	// 22710 mov     byte_352AB, 19h ;~ 0DBE:0994
loc_1cb59:
	// 5724 
cs=0xdbe;eip=0x000999; 	X(PUSH(ds));	// 22713 push    ds ;~ 0DBE:0999
cs=0xdbe;eip=0x00099a; 	T(MOV(ds, word_34f0e));	// 22714 mov     ds, word_34F0E ;~ 0DBE:099A
cs=0xdbe;eip=0x00099e; 	T(MOV(cl, 0x28));	// 22715 mov     cl, 28h ; '(' ;~ 0DBE:099E
loc_1cb60:
	// 5725 
cs=0xdbe;eip=0x0009a0; 	T(SUB(bl, bl));	// 22718 sub     bl, bl ;~ 0DBE:09A0
cs=0xdbe;eip=0x0009a2; 	T(MOV(ax, 0x304));	// 22719 mov     ax, 304h ;~ 0DBE:09A2
cs=0xdbe;eip=0x0009a5; 	R(OUT(dx, ax));	// 22720 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:09A5
cs=0xdbe;eip=0x0009a6; 	T(MOV(bh, *(raddr(ds,di))));	// 22722 mov     bh, [di] ;~ 0DBE:09A6
cs=0xdbe;eip=0x0009a8; 	T(AND(bh, ch));	// 22723 and     bh, ch ;~ 0DBE:09A8
cs=0xdbe;eip=0x0009aa; 	T(NEG(bh));	// 22724 neg     bh ;~ 0DBE:09AA
cs=0xdbe;eip=0x0009ac; 	T(DEC(ah));	// 22725 dec     ah ;~ 0DBE:09AC
cs=0xdbe;eip=0x0009ae; 	R(OUT(dx, ax));	// 22726 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:09AE
cs=0xdbe;eip=0x0009af; 	T(ROL(bx, 1));	// 22728 rol     bx, 1 ;~ 0DBE:09AF
cs=0xdbe;eip=0x0009b1; 	T(MOV(bh, *(raddr(ds,di))));	// 22729 mov     bh, [di] ;~ 0DBE:09B1
cs=0xdbe;eip=0x0009b3; 	T(AND(bh, ch));	// 22730 and     bh, ch ;~ 0DBE:09B3
cs=0xdbe;eip=0x0009b5; 	T(NEG(bh));	// 22731 neg     bh ;~ 0DBE:09B5
cs=0xdbe;eip=0x0009b7; 	T(DEC(ah));	// 22732 dec     ah ;~ 0DBE:09B7
cs=0xdbe;eip=0x0009b9; 	R(OUT(dx, ax));	// 22733 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:09B9
cs=0xdbe;eip=0x0009ba; 	T(ROL(bx, 1));	// 22735 rol     bx, 1 ;~ 0DBE:09BA
cs=0xdbe;eip=0x0009bc; 	T(MOV(bh, *(raddr(ds,di))));	// 22736 mov     bh, [di] ;~ 0DBE:09BC
cs=0xdbe;eip=0x0009be; 	T(AND(bh, ch));	// 22737 and     bh, ch ;~ 0DBE:09BE
cs=0xdbe;eip=0x0009c0; 	T(NEG(bh));	// 22738 neg     bh ;~ 0DBE:09C0
cs=0xdbe;eip=0x0009c2; 	T(SUB(ah, ah));	// 22739 sub     ah, ah ;~ 0DBE:09C2
cs=0xdbe;eip=0x0009c4; 	R(OUT(dx, ax));	// 22740 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:09C4
cs=0xdbe;eip=0x0009c5; 	T(ROL(bx, 1));	// 22743 rol     bx, 1 ;~ 0DBE:09C5
cs=0xdbe;eip=0x0009c7; 	T(MOV(bh, *(raddr(ds,di))));	// 22744 mov     bh, [di] ;~ 0DBE:09C7
cs=0xdbe;eip=0x0009c9; 	T(AND(bh, ch));	// 22745 and     bh, ch ;~ 0DBE:09C9
cs=0xdbe;eip=0x0009cb; 	T(NEG(bh));	// 22746 neg     bh ;~ 0DBE:09CB
cs=0xdbe;eip=0x0009cd; 	T(ROL(bx, 1));	// 22747 rol     bx, 1 ;~ 0DBE:09CD
cs=0xdbe;eip=0x0009cf; 	T(MOV(ah, bl));	// 22748 mov     ah, bl ;~ 0DBE:09CF
cs=0xdbe;eip=0x0009d1; 	T(SUB(al, al));	// 22749 sub     al, al ;~ 0DBE:09D1
cs=0xdbe;eip=0x0009d3; 	R(OUT(dx, ax));	// 22750 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:09D3
cs=0xdbe;eip=0x0009d4; 	T(MOV(ah, ch));	// 22753 mov     ah, ch ;~ 0DBE:09D4
cs=0xdbe;eip=0x0009d6; 	T(MOV(al, 8));	// 22754 mov     al, 8 ;~ 0DBE:09D6
cs=0xdbe;eip=0x0009d8; 	R(OUT(dx, ax));	// 22755 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:09D8
cs=0xdbe;eip=0x0009d9; 	X(AND(*(raddr(es,di)), al));	// 22758 and     es:[di], al ;~ 0DBE:09D9
cs=0xdbe;eip=0x0009dc; 	T(INC(di));	// 22759 inc     di ;~ 0DBE:09DC
cs=0xdbe;eip=0x0009dd; 	T(DEC(cl));	// 22760 dec     cl ;~ 0DBE:09DD
cs=0xdbe;eip=0x0009df; 	R(JNZ(loc_1cb60));	// 22761 jnz     short loc_1CB60 ;~ 0DBE:09DF
cs=0xdbe;eip=0x0009e1; 	T(ADD(di, 0x118));	// 22762 add     di, 118h ;~ 0DBE:09E1
cs=0xdbe;eip=0x0009e5; 	X(POP(ds));	// 22763 pop     ds ;~ 0DBE:09E5
cs=0xdbe;eip=0x0009e6; 	X(DEC(byte_352ab));	// 22764 dec     byte_352AB ;~ 0DBE:09E6
cs=0xdbe;eip=0x0009ea; 	R(JNZ(loc_1cb59));	// 22765 jnz     short loc_1CB59 ;~ 0DBE:09EA
cs=0xdbe;eip=0x0009ec; 	R(CALL(sub_1cc65,0));	// 22766 call    sub_1CC65 ;~ 0DBE:09EC
cs=0xdbe;eip=0x0009ef; 	X(POP(bx));	// 22767 pop     bx ;~ 0DBE:09EF
cs=0xdbe;eip=0x0009f0; 	T(CMP(byte_2becc, 0));	// 22768 cmp     byte_2BECC, 0 ;~ 0DBE:09F0
cs=0xdbe;eip=0x0009f5; 	R(JNZ(loc_1cbbf));	// 22769 jnz     short loc_1CBBF ;~ 0DBE:09F5
cs=0xdbe;eip=0x0009f7; 	T(INC(bx));	// 22770 inc     bx ;~ 0DBE:09F7
cs=0xdbe;eip=0x0009f8; 	T(CMP(bl, 0x40));	// 22771 cmp     bl, 40h ; '@' ;~ 0DBE:09F8
cs=0xdbe;eip=0x0009fb; 	R(JNC(loc_1cbbf));	// 22772 jnb     short loc_1CBBF ;~ 0DBE:09FB
cs=0xdbe;eip=0x0009fd; 	R(JMP(loc_1cb40));	// 22773 jmp     short loc_1CB40 ;~ 0DBE:09FD
loc_1cbbf:
	// 5726 
cs=0xdbe;eip=0x0009ff; 	X(POP(di));	// 22778 pop     di ;~ 0DBE:09FF
cs=0xdbe;eip=0x000a00; 	X(POP(si));	// 22779 pop     si ;~ 0DBE:0A00
cs=0xdbe;eip=0x000a01; 	X(POP(es));	// 22780 pop     es ;~ 0DBE:0A01
cs=0xdbe;eip=0x000a02; 	R(RETF(0));	// 22781 retf ;~ 0DBE:0A02
loc_1cbc3:
	// 5727 
cs=0xdbe;eip=0x000a03; 	T(MOV(bx, 0));	// 22785 mov     bx, 0 ;~ 0DBE:0A03
cs=0xdbe;eip=0x000a06; 	T(MOV(es, word_34f0c));	// 22786 mov     es, word_34F0C ;~ 0DBE:0A06
loc_1cbca:
	// 5728 
cs=0xdbe;eip=0x000a0a; 	X(PUSH(bx));	// 22789 push    bx ;~ 0DBE:0A0A
cs=0xdbe;eip=0x000a0b; 	T(MOV(al, *(raddr(ds,bx-0x6F0F))));	// 22790 mov     al, [bx-6F0Fh] ;~ 0DBE:0A0B
cs=0xdbe;eip=0x000a0f; 	T(MOV(dl, al));	// 22791 mov     dl, al ;~ 0DBE:0A0F
cs=0xdbe;eip=0x000a11; 	T(MOV(cl, al));	// 22792 mov     cl, al ;~ 0DBE:0A11
cs=0xdbe;eip=0x000a13; 	T(SHR(cl, 1));	// 22793 shr     cl, 1 ;~ 0DBE:0A13
cs=0xdbe;eip=0x000a15; 	T(SUB(ch, ch));	// 22794 sub     ch, ch ;~ 0DBE:0A15
cs=0xdbe;eip=0x000a17; 	T(MOV(di, cx));	// 22795 mov     di, cx ;~ 0DBE:0A17
cs=0xdbe;eip=0x000a19; 	T(AND(bl, 7));	// 22796 and     bl, 7 ;~ 0DBE:0A19
cs=0xdbe;eip=0x000a1c; 	T(MOV(al, *(raddr(ds,bx-0x6EB5))));	// 22797 mov     al, [bx-6EB5h] ;~ 0DBE:0A1C
cs=0xdbe;eip=0x000a20; 	T(TEST(al, 4));	// 22798 test    al, 4 ;~ 0DBE:0A20
cs=0xdbe;eip=0x000a22; 	R(JZ(loc_1cbe8));	// 22799 jz      short loc_1CBE8 ;~ 0DBE:0A22
cs=0xdbe;eip=0x000a24; 	T(ADD(di, 0x0A0));	// 22800 add     di, 0A0h ; ' ' ;~ 0DBE:0A24
loc_1cbe8:
	// 5729 
cs=0xdbe;eip=0x000a28; 	T(AND(al, 3));	// 22803 and     al, 3 ;~ 0DBE:0A28
cs=0xdbe;eip=0x000a2a; 	T(MOV(ah, al));	// 22804 mov     ah, al ;~ 0DBE:0A2A
cs=0xdbe;eip=0x000a2c; 	T(SUB(al, al));	// 22805 sub     al, al ;~ 0DBE:0A2C
cs=0xdbe;eip=0x000a2e; 	T(ROR(ah, 1));	// 22806 ror     ah, 1 ;~ 0DBE:0A2E
cs=0xdbe;eip=0x000a30; 	T(ROR(ah, 1));	// 22807 ror     ah, 1 ;~ 0DBE:0A30
cs=0xdbe;eip=0x000a32; 	T(ROR(ah, 1));	// 22808 ror     ah, 1 ;~ 0DBE:0A32
cs=0xdbe;eip=0x000a34; 	T(ADD(di, ax));	// 22809 add     di, ax ;~ 0DBE:0A34
cs=0xdbe;eip=0x000a36; 	T(MOV(bl, dl));	// 22810 mov     bl, dl ;~ 0DBE:0A36
cs=0xdbe;eip=0x000a38; 	T(AND(bl, 1));	// 22811 and     bl, 1 ;~ 0DBE:0A38
cs=0xdbe;eip=0x000a3b; 	T(SUB(bh, bh));	// 22812 sub     bh, bh ;~ 0DBE:0A3B
cs=0xdbe;eip=0x000a3d; 	T(MOV(dh, *(raddr(ds,bx-0x6EC7))));	// 22813 mov     dh, [bx-6EC7h] ;~ 0DBE:0A3D
cs=0xdbe;eip=0x000a41; 	T(MOV(dl, dh));	// 22814 mov     dl, dh ;~ 0DBE:0A41
cs=0xdbe;eip=0x000a43; 	T(XOR(dl, 0x0FF));	// 22815 xor     dl, 0FFh ;~ 0DBE:0A43
cs=0xdbe;eip=0x000a46; 	T(MOV(ax, word_2bee0));	// 22816 mov     ax, word_2BEE0 ;~ 0DBE:0A46
cs=0xdbe;eip=0x000a49; 	X(PUSH(ax));	// 22817 push    ax ;~ 0DBE:0A49
cs=0xdbe;eip=0x000a4a; 	X(PUSH(ds));	// 22818 push    ds ;~ 0DBE:0A4A
cs=0xdbe;eip=0x000a4b; 	T(MOV(ds, word_34f0e));	// 22819 mov     ds, word_34F0E ;~ 0DBE:0A4B
cs=0xdbe;eip=0x000a4f; 	T(MOV(bh, 0x19));	// 22820 mov     bh, 19h ;~ 0DBE:0A4F
loc_1cc11:
	// 5730 
cs=0xdbe;eip=0x000a51; 	T(MOV(cx, 0x14));	// 22823 mov     cx, 14h ;~ 0DBE:0A51
loc_1cc14:
	// 5731 
cs=0xdbe;eip=0x000a54; 	T(MOV(si, di));	// 22826 mov     si, di ;~ 0DBE:0A54
cs=0xdbe;eip=0x000a56; 	T(LODSB);	// 22827 lodsb ;~ 0DBE:0A56
cs=0xdbe;eip=0x000a57; 	T(AND(al, dh));	// 22828 and     al, dh ;~ 0DBE:0A57
cs=0xdbe;eip=0x000a59; 	T(MOV(ah, *(raddr(es,di))));	// 22829 mov     ah, es:[di] ;~ 0DBE:0A59
cs=0xdbe;eip=0x000a5c; 	T(AND(ah, dl));	// 22830 and     ah, dl ;~ 0DBE:0A5C
cs=0xdbe;eip=0x000a5e; 	T(OR(al, ah));	// 22831 or      al, ah ;~ 0DBE:0A5E
cs=0xdbe;eip=0x000a60; 	X(STOSB);	// 22832 stosb ;~ 0DBE:0A60
cs=0xdbe;eip=0x000a61; 	T(ADD(di, 3));	// 22833 add     di, 3 ;~ 0DBE:0A61
cs=0xdbe;eip=0x000a64; 	T(MOV(si, di));	// 22834 mov     si, di ;~ 0DBE:0A64
cs=0xdbe;eip=0x000a66; 	T(LODSB);	// 22835 lodsb ;~ 0DBE:0A66
cs=0xdbe;eip=0x000a67; 	T(AND(al, dh));	// 22836 and     al, dh ;~ 0DBE:0A67
cs=0xdbe;eip=0x000a69; 	T(MOV(ah, *(raddr(es,di))));	// 22837 mov     ah, es:[di] ;~ 0DBE:0A69
cs=0xdbe;eip=0x000a6c; 	T(AND(ah, dl));	// 22838 and     ah, dl ;~ 0DBE:0A6C
cs=0xdbe;eip=0x000a6e; 	T(OR(al, ah));	// 22839 or      al, ah ;~ 0DBE:0A6E
cs=0xdbe;eip=0x000a70; 	X(STOSB);	// 22840 stosb ;~ 0DBE:0A70
cs=0xdbe;eip=0x000a71; 	T(ADD(di, 3));	// 22841 add     di, 3 ;~ 0DBE:0A71
cs=0xdbe;eip=0x000a74; 	R(LOOP(loc_1cc14));	// 22842 loop    loc_1CC14 ;~ 0DBE:0A74
cs=0xdbe;eip=0x000a76; 	T(ADD(di, 0x0A0));	// 22843 add     di, 0A0h ; ' ' ;~ 0DBE:0A76
cs=0xdbe;eip=0x000a7a; 	T(DEC(bh));	// 22844 dec     bh ;~ 0DBE:0A7A
cs=0xdbe;eip=0x000a7c; 	R(JNZ(loc_1cc11));	// 22845 jnz     short loc_1CC11 ;~ 0DBE:0A7C
cs=0xdbe;eip=0x000a7e; 	X(POP(ds));	// 22846 pop     ds ;~ 0DBE:0A7E
cs=0xdbe;eip=0x000a7f; 	R(CALL(sub_1cc65,0));	// 22847 call    sub_1CC65 ;~ 0DBE:0A7F
cs=0xdbe;eip=0x000a82; 	X(POP(ax));	// 22848 pop     ax ;~ 0DBE:0A82
cs=0xdbe;eip=0x000a83; 	T(CMP(byte_2becc, 0));	// 22849 cmp     byte_2BECC, 0 ;~ 0DBE:0A83
cs=0xdbe;eip=0x000a88; 	R(JNZ(loc_1cc60));	// 22850 jnz     short loc_1CC60 ;~ 0DBE:0A88
loc_1cc4a:
	// 5732 
cs=0xdbe;eip=0x000a8a; 	T(MOV(dx, word_2bee0));	// 22853 mov     dx, word_2BEE0 ;~ 0DBE:0A8A
cs=0xdbe;eip=0x000a8e; 	T(SUB(dx, ax));	// 22854 sub     dx, ax ;~ 0DBE:0A8E
cs=0xdbe;eip=0x000a90; 	R(JZ(loc_1cc4a));	// 22855 jz      short loc_1CC4A ;~ 0DBE:0A90
cs=0xdbe;eip=0x000a92; 	X(POP(bx));	// 22856 pop     bx ;~ 0DBE:0A92
cs=0xdbe;eip=0x000a93; 	T(INC(bx));	// 22857 inc     bx ;~ 0DBE:0A93
cs=0xdbe;eip=0x000a94; 	T(CMP(bl, 0x40));	// 22858 cmp     bl, 40h ; '@' ;~ 0DBE:0A94
cs=0xdbe;eip=0x000a97; 	R(JNC(loc_1cc5c));	// 22859 jnb     short loc_1CC5C ;~ 0DBE:0A97
cs=0xdbe;eip=0x000a99; 	R(JMP(loc_1cbca));	// 22860 jmp     loc_1CBCA ;~ 0DBE:0A99
loc_1cc5c:
	// 5733 
cs=0xdbe;eip=0x000a9c; 	X(POP(di));	// 22864 pop     di ;~ 0DBE:0A9C
cs=0xdbe;eip=0x000a9d; 	X(POP(si));	// 22865 pop     si ;~ 0DBE:0A9D
cs=0xdbe;eip=0x000a9e; 	X(POP(es));	// 22866 pop     es ;~ 0DBE:0A9E
cs=0xdbe;eip=0x000a9f; 	R(RETF(0));	// 22867 retf ;~ 0DBE:0A9F
loc_1cc60:
	// 5734 
cs=0xdbe;eip=0x000aa0; 	X(POP(bx));	// 22871 pop     bx ;~ 0DBE:0AA0
cs=0xdbe;eip=0x000aa1; 	X(POP(di));	// 22872 pop     di ;~ 0DBE:0AA1
cs=0xdbe;eip=0x000aa2; 	X(POP(si));	// 22873 pop     si ;~ 0DBE:0AA2
cs=0xdbe;eip=0x000aa3; 	X(POP(es));	// 22874 pop     es ;~ 0DBE:0AA3
cs=0xdbe;eip=0x000aa4; 	R(RETF(0));	// 22875 retf ;~ 0DBE:0AA4
sub_1cc65:
	// 22882 
cs=0xdbe;eip=0x000aa5; 	X(PUSH(ax));	// 22884 push    ax ;~ 0DBE:0AA5
ret_dbe_aa6:
	// 5735 
cs=0xdbe;eip=0x000aa6; 	X(PUSH(bx));	// 22885 push    bx ;~ 0DBE:0AA6
cs=0xdbe;eip=0x000aa7; 	X(PUSH(cx));	// 22886 push    cx ;~ 0DBE:0AA7
cs=0xdbe;eip=0x000aa8; 	X(PUSH(dx));	// 22887 push    dx ;~ 0DBE:0AA8
cs=0xdbe;eip=0x000aa9; 	X(PUSH(di));	// 22888 push    di ;~ 0DBE:0AA9
cs=0xdbe;eip=0x000aaa; 	X(PUSH(si));	// 22889 push    si ;~ 0DBE:0AAA
cs=0xdbe;eip=0x000aab; 	X(PUSH(es));	// 22890 push    es ;~ 0DBE:0AAB
cs=0xdbe;eip=0x000aac; 	T(MOV(si, word_34f14));	// 22891 mov     si, word_34F14 ;~ 0DBE:0AAC
cs=0xdbe;eip=0x000ab0; 	T(MOV(di, word_34f16));	// 22892 mov     di, word_34F16 ;~ 0DBE:0AB0
cs=0xdbe;eip=0x000ab4; 	T(MOV(es, word_34f18));	// 22893 mov     es, word_34F18 ;~ 0DBE:0AB4
cs=0xdbe;eip=0x000ab8; 	R(CALLF(sub_10f58,0));	// 22894 call    sub_10F58 ;~ 0DBE:0AB8
cs=0xdbe;eip=0x000abd; 	T(CMP(byte_2bedf, 0));	// 22895 cmp     byte_2BEDF, 0 ;~ 0DBE:0ABD
cs=0xdbe;eip=0x000ac2; 	R(JNZ(loc_1cc8c));	// 22896 jnz     short loc_1CC8C ;~ 0DBE:0AC2
cs=0xdbe;eip=0x000ac4; 	X(MOV(byte_2becc, 0));	// 22897 mov     byte_2BECC, 0 ;~ 0DBE:0AC4
cs=0xdbe;eip=0x000ac9; 	R(JMP(loc_1cc98));	// 22898 jmp     short loc_1CC98 ;~ 0DBE:0AC9
loc_1cc8c:
	// 5736 
cs=0xdbe;eip=0x000acc; 	T(MOV(ax, 0x90DA));	// 22903 mov     ax, 90DAh ;~ 0DBE:0ACC
cs=0xdbe;eip=0x000acf; 	X(PUSH(ax));	// 22904 push    ax ;~ 0DBE:0ACF
cs=0xdbe;eip=0x000ad0; 	R(CALLF(sub_10f80,0));	// 22905 call    sub_10F80 ;~ 0DBE:0AD0
cs=0xdbe;eip=0x000ad5; 	T(ADD(sp, 2));	// 22906 add     sp, 2 ;~ 0DBE:0AD5
loc_1cc98:
	// 5737 
cs=0xdbe;eip=0x000ad8; 	X(POP(es));	// 22909 pop     es ;~ 0DBE:0AD8
cs=0xdbe;eip=0x000ad9; 	X(POP(si));	// 22910 pop     si ;~ 0DBE:0AD9
cs=0xdbe;eip=0x000ada; 	X(POP(di));	// 22911 pop     di ;~ 0DBE:0ADA
cs=0xdbe;eip=0x000adb; 	X(POP(dx));	// 22912 pop     dx ;~ 0DBE:0ADB
cs=0xdbe;eip=0x000adc; 	X(POP(cx));	// 22913 pop     cx ;~ 0DBE:0ADC
cs=0xdbe;eip=0x000add; 	X(POP(bx));	// 22914 pop     bx ;~ 0DBE:0ADD
cs=0xdbe;eip=0x000ade; 	X(POP(ax));	// 22915 pop     ax ;~ 0DBE:0ADE
cs=0xdbe;eip=0x000adf; 	R(RETN(0));	// 22916 retn ;~ 0DBE:0ADF
sub_1cca0:
	// 22923 
cs=0xdbe;eip=0x000ae0; 	X(PUSH(ds));	// 22925 push    ds ;~ 0DBE:0AE0
ret_dbe_ae1:
	// 5738 
cs=0xdbe;eip=0x000ae1; 	T(SUB(bx, bx));	// 22926 sub     bx, bx ;~ 0DBE:0AE1
cs=0xdbe;eip=0x000ae3; 	T(MOV(si, 2));	// 22927 mov     si, 2 ;~ 0DBE:0AE3
cs=0xdbe;eip=0x000ae6; 	T(MOV(ax, cs));	// 22928 mov     ax, cs ;~ 0DBE:0AE6
cs=0xdbe;eip=0x000ae8; 	T(MOV(ds, ax));	// 22929 mov     ds, ax ;~ 0DBE:0AE8
loc_1ccaa:
	// 5739 
cs=0xdbe;eip=0x000aea; 	T(MOV(dx, 0x3DA));	// 22933 mov     dx, 3DAh ;~ 0DBE:0AEA
loc_1ccad:
	// 5740 
cs=0xdbe;eip=0x000aed; 	T(MOV(cx, 6));	// 22936 mov     cx, 6 ;~ 0DBE:0AED
loc_1ccb0:
	// 5741 
cs=0xdbe;eip=0x000af0; 	R(IN(al, dx));	// 22940 in      al, dx          ; Video status bits: ;~ 0DBE:0AF0
cs=0xdbe;eip=0x000af1; 	T(TEST(al, 8));	// 22945 test    al, 8 ;~ 0DBE:0AF1
cs=0xdbe;eip=0x000af3; 	R(JNZ(loc_1ccb0));	// 22946 jnz     short loc_1CCB0 ;~ 0DBE:0AF3
cs=0xdbe;eip=0x000af5; 	T(TEST(al, 1));	// 22947 test    al, 1 ;~ 0DBE:0AF5
cs=0xdbe;eip=0x000af7; 	R(JZ(loc_1ccb0));	// 22948 jz      short loc_1CCB0 ;~ 0DBE:0AF7
cs=0xdbe;eip=0x000af9; 	T(CLI);	// 22949 cli ;~ 0DBE:0AF9
loc_1ccba:
	// 5742 
cs=0xdbe;eip=0x000afa; 	R(IN(al, dx));	// 22952 in      al, dx          ; Video status bits: ;~ 0DBE:0AFA
cs=0xdbe;eip=0x000afb; 	T(TEST(al, 1));	// 22957 test    al, 1 ;~ 0DBE:0AFB
cs=0xdbe;eip=0x000afd; 	R(LOOPNE(loc_1ccba));	// 22958 loopne  loc_1CCBA ;~ 0DBE:0AFD
cs=0xdbe;eip=0x000aff; 	T(STI);	// 22959 sti ;~ 0DBE:0AFF
cs=0xdbe;eip=0x000b00; 	R(JZ(loc_1ccad));	// 22960 jz      short loc_1CCAD ;~ 0DBE:0B00
loc_1ccc2:
	// 5743 
cs=0xdbe;eip=0x000b02; 	T(MOV(dx, 0x3C8));	// 22963 mov     dx, 3C8h ;~ 0DBE:0B02
cs=0xdbe;eip=0x000b05; 	T(MOV(al, bl));	// 22964 mov     al, bl ;~ 0DBE:0B05
cs=0xdbe;eip=0x000b07; 	R(OUT(dx, al));	// 22965 out     dx, al ;~ 0DBE:0B07
cs=0xdbe;eip=0x000b08; 	T(LODSB);	// 22966 lodsb ;~ 0DBE:0B08
cs=0xdbe;eip=0x000b09; 	T(INC(dx));	// 22967 inc     dx ;~ 0DBE:0B09
cs=0xdbe;eip=0x000b0a; 	R(OUT(dx, al));	// 22968 out     dx, al ;~ 0DBE:0B0A
cs=0xdbe;eip=0x000b0b; 	T(LODSW);	// 22969 lodsw ;~ 0DBE:0B0B
cs=0xdbe;eip=0x000b0c; 	R(OUT(dx, al));	// 22970 out     dx, al ;~ 0DBE:0B0C
cs=0xdbe;eip=0x000b0d; 	T(MOV(al, ah));	// 22971 mov     al, ah ;~ 0DBE:0B0D
cs=0xdbe;eip=0x000b0f; 	R(OUT(dx, al));	// 22972 out     dx, al ;~ 0DBE:0B0F
cs=0xdbe;eip=0x000b10; 	T(INC(bl));	// 22973 inc     bl ;~ 0DBE:0B10
cs=0xdbe;eip=0x000b12; 	T(TEST(bl, 0x1F));	// 22974 test    bl, 1Fh ;~ 0DBE:0B12
cs=0xdbe;eip=0x000b15; 	R(JNZ(loc_1ccc2));	// 22975 jnz     short loc_1CCC2 ;~ 0DBE:0B15
cs=0xdbe;eip=0x000b17; 	T(OR(bl, bl));	// 22976 or      bl, bl ;~ 0DBE:0B17
cs=0xdbe;eip=0x000b19; 	R(JNZ(loc_1ccaa));	// 22977 jnz     short loc_1CCAA ;~ 0DBE:0B19
cs=0xdbe;eip=0x000b1b; 	X(POP(ds));	// 22978 pop     ds ;~ 0DBE:0B1B
cs=0xdbe;eip=0x000b1c; 	R(RETN(0));	// 22980 retn ;~ 0DBE:0B1C
sub_1ccdd:
	// 22987 
cs=0xdbe;eip=0x000b1d; 	X(PUSH(ds));	// 22988 push    ds ;~ 0DBE:0B1D
ret_dbe_b1e:
	// 5744 
cs=0xdbe;eip=0x000b1e; 	T(SUB(bx, bx));	// 22989 sub     bx, bx ;~ 0DBE:0B1E
cs=0xdbe;eip=0x000b20; 	T(MOV(si, 2));	// 22990 mov     si, 2 ;~ 0DBE:0B20
cs=0xdbe;eip=0x000b23; 	T(MOV(ax, cs));	// 22991 mov     ax, cs ;~ 0DBE:0B23
cs=0xdbe;eip=0x000b25; 	T(MOV(ds, ax));	// 22992 mov     ds, ax ;~ 0DBE:0B25
loc_1cce7:
	// 5745 
cs=0xdbe;eip=0x000b27; 	T(MOV(dx, 0x3DA));	// 22996 mov     dx, 3DAh ;~ 0DBE:0B27
loc_1ccea:
	// 5746 
cs=0xdbe;eip=0x000b2a; 	T(MOV(cx, 6));	// 22999 mov     cx, 6 ;~ 0DBE:0B2A
loc_1cced:
	// 5747 
cs=0xdbe;eip=0x000b2d; 	R(IN(al, dx));	// 23003 in      al, dx          ; Video status bits: ;~ 0DBE:0B2D
cs=0xdbe;eip=0x000b2e; 	T(TEST(al, 8));	// 23008 test    al, 8 ;~ 0DBE:0B2E
cs=0xdbe;eip=0x000b30; 	R(JNZ(loc_1cced));	// 23009 jnz     short loc_1CCED ;~ 0DBE:0B30
cs=0xdbe;eip=0x000b32; 	T(TEST(al, 1));	// 23010 test    al, 1 ;~ 0DBE:0B32
cs=0xdbe;eip=0x000b34; 	R(JZ(loc_1cced));	// 23011 jz      short loc_1CCED ;~ 0DBE:0B34
cs=0xdbe;eip=0x000b36; 	T(CLI);	// 23012 cli ;~ 0DBE:0B36
loc_1ccf7:
	// 5748 
cs=0xdbe;eip=0x000b37; 	R(IN(al, dx));	// 23015 in      al, dx          ; Video status bits: ;~ 0DBE:0B37
cs=0xdbe;eip=0x000b38; 	T(TEST(al, 1));	// 23020 test    al, 1 ;~ 0DBE:0B38
cs=0xdbe;eip=0x000b3a; 	R(LOOPNE(loc_1ccf7));	// 23021 loopne  loc_1CCF7 ;~ 0DBE:0B3A
cs=0xdbe;eip=0x000b3c; 	T(STI);	// 23022 sti ;~ 0DBE:0B3C
cs=0xdbe;eip=0x000b3d; 	R(JZ(loc_1ccea));	// 23023 jz      short loc_1CCEA ;~ 0DBE:0B3D
loc_1ccff:
	// 5749 
cs=0xdbe;eip=0x000b3f; 	T(MOV(dx, 0x3C8));	// 23026 mov     dx, 3C8h ;~ 0DBE:0B3F
cs=0xdbe;eip=0x000b42; 	T(MOV(al, bl));	// 23027 mov     al, bl ;~ 0DBE:0B42
cs=0xdbe;eip=0x000b44; 	R(OUT(dx, al));	// 23028 out     dx, al ;~ 0DBE:0B44
cs=0xdbe;eip=0x000b45; 	T(LODSB);	// 23029 lodsb ;~ 0DBE:0B45
cs=0xdbe;eip=0x000b46; 	T(INC(dx));	// 23030 inc     dx ;~ 0DBE:0B46
cs=0xdbe;eip=0x000b47; 	R(OUT(dx, al));	// 23031 out     dx, al ;~ 0DBE:0B47
cs=0xdbe;eip=0x000b48; 	T(LODSW);	// 23032 lodsw ;~ 0DBE:0B48
cs=0xdbe;eip=0x000b49; 	R(OUT(dx, al));	// 23033 out     dx, al ;~ 0DBE:0B49
cs=0xdbe;eip=0x000b4a; 	T(MOV(al, ah));	// 23034 mov     al, ah ;~ 0DBE:0B4A
cs=0xdbe;eip=0x000b4c; 	R(OUT(dx, al));	// 23035 out     dx, al ;~ 0DBE:0B4C
cs=0xdbe;eip=0x000b4d; 	T(INC(bl));	// 23036 inc     bl ;~ 0DBE:0B4D
cs=0xdbe;eip=0x000b4f; 	T(TEST(bl, 0x1F));	// 23037 test    bl, 1Fh ;~ 0DBE:0B4F
cs=0xdbe;eip=0x000b52; 	R(JNZ(loc_1ccff));	// 23038 jnz     short loc_1CCFF ;~ 0DBE:0B52
cs=0xdbe;eip=0x000b54; 	T(TEST(bl, 0x7F));	// 23039 test    bl, 7Fh ;~ 0DBE:0B54
cs=0xdbe;eip=0x000b57; 	R(JNZ(loc_1cce7));	// 23040 jnz     short loc_1CCE7 ;~ 0DBE:0B57
cs=0xdbe;eip=0x000b59; 	X(POP(ds));	// 23041 pop     ds ;~ 0DBE:0B59
cs=0xdbe;eip=0x000b5a; 	R(RETN(0));	// 23043 retn ;~ 0DBE:0B5A
sub_1cd1b:
	// 23050 
cs=0xdbe;eip=0x000b5b; 	X(PUSH(si));	// 23051 push    si ;~ 0DBE:0B5B
ret_dbe_b5c:
	// 5750 
cs=0xdbe;eip=0x000b5c; 	T(MOV(dx, 0x0F));	// 23052 mov     dx, 0Fh ;~ 0DBE:0B5C
loc_1cd1f:
	// 5751 
cs=0xdbe;eip=0x000b5f; 	X(PUSH(dx));	// 23055 push    dx ;~ 0DBE:0B5F
cs=0xdbe;eip=0x000b60; 	T(MOV(bx, 2));	// 23056 mov     bx, 2 ;~ 0DBE:0B60
cs=0xdbe;eip=0x000b63; 	T(MOV(cx, 0x300));	// 23057 mov     cx, 300h ;~ 0DBE:0B63
cs=0xdbe;eip=0x000b66; 	T(SUB(si, si));	// 23058 sub     si, si ;~ 0DBE:0B66
loc_1cd28:
	// 5752 
cs=0xdbe;eip=0x000b68; 	T(MOV(al, *(raddr(ds,si+0x0B6A))));	// 23061 mov     al, [si+0B6Ah] ;~ 0DBE:0B68
cs=0xdbe;eip=0x000b6c; 	T(MUL1_1(dl));	// 23062 mul     dl ;~ 0DBE:0B6C
cs=0xdbe;eip=0x000b6e; 	T(ADD(ax, 8));	// 23063 add     ax, 8 ;~ 0DBE:0B6E
cs=0xdbe;eip=0x000b71; 	T(SHR(ax, 1));	// 23064 shr     ax, 1 ;~ 0DBE:0B71
cs=0xdbe;eip=0x000b73; 	T(SHR(ax, 1));	// 23065 shr     ax, 1 ;~ 0DBE:0B73
cs=0xdbe;eip=0x000b75; 	T(SHR(ax, 1));	// 23066 shr     ax, 1 ;~ 0DBE:0B75
cs=0xdbe;eip=0x000b77; 	T(SHR(ax, 1));	// 23067 shr     ax, 1 ;~ 0DBE:0B77
cs=0xdbe;eip=0x000b79; 	X(MOV(*(raddr(cs,bx)), al));	// 23068 mov     cs:[bx], al ;~ 0DBE:0B79
cs=0xdbe;eip=0x000b7c; 	T(INC(bx));	// 23069 inc     bx ;~ 0DBE:0B7C
cs=0xdbe;eip=0x000b7d; 	T(INC(si));	// 23070 inc     si ;~ 0DBE:0B7D
cs=0xdbe;eip=0x000b7e; 	R(LOOP(loc_1cd28));	// 23071 loop    loc_1CD28 ;~ 0DBE:0B7E
cs=0xdbe;eip=0x000b80; 	R(CALL(sub_1cca0,0));	// 23072 call    sub_1CCA0 ;~ 0DBE:0B80
cs=0xdbe;eip=0x000b83; 	X(POP(dx));	// 23073 pop     dx ;~ 0DBE:0B83
cs=0xdbe;eip=0x000b84; 	T(DEC(dx));	// 23074 dec     dx ;~ 0DBE:0B84
cs=0xdbe;eip=0x000b85; 	R(JNS(loc_1cd1f));	// 23075 jns     short loc_1CD1F ;~ 0DBE:0B85
cs=0xdbe;eip=0x000b87; 	X(POP(si));	// 23076 pop     si ;~ 0DBE:0B87
cs=0xdbe;eip=0x000b88; 	R(RETF(0));	// 23077 retf ;~ 0DBE:0B88
sub_1cd49:
	// 23084 
cs=0xdbe;eip=0x000b89; 	X(PUSH(ds));	// 23085 push    ds ;~ 0DBE:0B89
ret_dbe_b8a:
	// 5753 
cs=0xdbe;eip=0x000b8a; 	X(PUSH(es));	// 23086 push    es ;~ 0DBE:0B8A
cs=0xdbe;eip=0x000b8b; 	X(PUSH(di));	// 23087 push    di ;~ 0DBE:0B8B
cs=0xdbe;eip=0x000b8c; 	X(PUSH(si));	// 23088 push    si ;~ 0DBE:0B8C
cs=0xdbe;eip=0x000b8d; 	T(MOV(bx, word_2beda));	// 23089 mov     bx, word_2BEDA ;~ 0DBE:0B8D
cs=0xdbe;eip=0x000b91; 	T(SHL(bx, 1));	// 23090 shl     bx, 1 ;~ 0DBE:0B91
cs=0xdbe;eip=0x000b93; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x6F34))));	// 23091 mov     ax, [bx-6F34h] ;~ 0DBE:0B93
cs=0xdbe;eip=0x000b97; 	T(MOV(es, ax));	// 23092 mov     es, ax ;~ 0DBE:0B97
cs=0xdbe;eip=0x000b99; 	T(MOV(ds, ax));	// 23093 mov     ds, ax ;~ 0DBE:0B99
cs=0xdbe;eip=0x000b9b; 	T(MOV(cx, 0x7D00));	// 23094 mov     cx, 7D00h ;~ 0DBE:0B9B
cs=0xdbe;eip=0x000b9e; 	T(SUB(di, di));	// 23095 sub     di, di ;~ 0DBE:0B9E
cs=0xdbe;eip=0x000ba0; 	T(MOV(si, di));	// 23096 mov     si, di ;~ 0DBE:0BA0
loc_1cd62:
	// 5754 
cs=0xdbe;eip=0x000ba2; 	T(LODSW);	// 23099 lodsw ;~ 0DBE:0BA2
cs=0xdbe;eip=0x000ba3; 	T(OR(al, al));	// 23100 or      al, al ;~ 0DBE:0BA3
cs=0xdbe;eip=0x000ba5; 	R(JS(loc_1cd69));	// 23101 js      short loc_1CD69 ;~ 0DBE:0BA5
cs=0xdbe;eip=0x000ba7; 	T(SUB(al, al));	// 23102 sub     al, al ;~ 0DBE:0BA7
loc_1cd69:
	// 5755 
cs=0xdbe;eip=0x000ba9; 	T(OR(ah, ah));	// 23105 or      ah, ah ;~ 0DBE:0BA9
cs=0xdbe;eip=0x000bab; 	R(JS(loc_1cd6f));	// 23106 js      short loc_1CD6F ;~ 0DBE:0BAB
cs=0xdbe;eip=0x000bad; 	T(SUB(ah, ah));	// 23107 sub     ah, ah ;~ 0DBE:0BAD
loc_1cd6f:
	// 5756 
cs=0xdbe;eip=0x000baf; 	X(STOSW);	// 23110 stosw ;~ 0DBE:0BAF
cs=0xdbe;eip=0x000bb0; 	R(LOOP(loc_1cd62));	// 23111 loop    loc_1CD62 ;~ 0DBE:0BB0
cs=0xdbe;eip=0x000bb2; 	X(POP(si));	// 23112 pop     si ;~ 0DBE:0BB2
cs=0xdbe;eip=0x000bb3; 	X(POP(di));	// 23113 pop     di ;~ 0DBE:0BB3
cs=0xdbe;eip=0x000bb4; 	X(POP(es));	// 23114 pop     es ;~ 0DBE:0BB4
cs=0xdbe;eip=0x000bb5; 	X(POP(ds));	// 23115 pop     ds ;~ 0DBE:0BB5
cs=0xdbe;eip=0x000bb6; 	R(RETF(0));	// 23116 retf ;~ 0DBE:0BB6
sub_1cd77:
	// 23123 
cs=0xdbe;eip=0x000bb7; 	X(PUSH(si));	// 23124 push    si ;~ 0DBE:0BB7
ret_dbe_bb8:
	// 5757 
cs=0xdbe;eip=0x000bb8; 	T(MOV(dx, 0x0F));	// 23125 mov     dx, 0Fh ;~ 0DBE:0BB8
loc_1cd7b:
	// 5758 
cs=0xdbe;eip=0x000bbb; 	X(PUSH(dx));	// 23128 push    dx ;~ 0DBE:0BBB
cs=0xdbe;eip=0x000bbc; 	T(MOV(bx, 2));	// 23129 mov     bx, 2 ;~ 0DBE:0BBC
cs=0xdbe;eip=0x000bbf; 	T(MOV(cx, 0x180));	// 23130 mov     cx, 180h ;~ 0DBE:0BBF
cs=0xdbe;eip=0x000bc2; 	T(SUB(si, si));	// 23131 sub     si, si ;~ 0DBE:0BC2
loc_1cd84:
	// 5759 
cs=0xdbe;eip=0x000bc4; 	T(MOV(al, *(raddr(ds,si+0x0B6A))));	// 23134 mov     al, [si+0B6Ah] ;~ 0DBE:0BC4
cs=0xdbe;eip=0x000bc8; 	T(MUL1_1(dl));	// 23135 mul     dl ;~ 0DBE:0BC8
cs=0xdbe;eip=0x000bca; 	T(ADD(ax, 8));	// 23136 add     ax, 8 ;~ 0DBE:0BCA
cs=0xdbe;eip=0x000bcd; 	T(SHR(ax, 1));	// 23137 shr     ax, 1 ;~ 0DBE:0BCD
cs=0xdbe;eip=0x000bcf; 	T(SHR(ax, 1));	// 23138 shr     ax, 1 ;~ 0DBE:0BCF
cs=0xdbe;eip=0x000bd1; 	T(SHR(ax, 1));	// 23139 shr     ax, 1 ;~ 0DBE:0BD1
cs=0xdbe;eip=0x000bd3; 	T(SHR(ax, 1));	// 23140 shr     ax, 1 ;~ 0DBE:0BD3
cs=0xdbe;eip=0x000bd5; 	X(MOV(*(raddr(cs,bx)), al));	// 23141 mov     cs:[bx], al ;~ 0DBE:0BD5
cs=0xdbe;eip=0x000bd8; 	T(INC(bx));	// 23142 inc     bx ;~ 0DBE:0BD8
cs=0xdbe;eip=0x000bd9; 	T(INC(si));	// 23143 inc     si ;~ 0DBE:0BD9
cs=0xdbe;eip=0x000bda; 	R(LOOP(loc_1cd84));	// 23144 loop    loc_1CD84 ;~ 0DBE:0BDA
cs=0xdbe;eip=0x000bdc; 	R(CALL(sub_1ccdd,0));	// 23145 call    sub_1CCDD ;~ 0DBE:0BDC
cs=0xdbe;eip=0x000bdf; 	X(POP(dx));	// 23146 pop     dx ;~ 0DBE:0BDF
cs=0xdbe;eip=0x000be0; 	T(DEC(dx));	// 23147 dec     dx ;~ 0DBE:0BE0
cs=0xdbe;eip=0x000be1; 	R(JNS(loc_1cd7b));	// 23148 jns     short loc_1CD7B ;~ 0DBE:0BE1
cs=0xdbe;eip=0x000be3; 	X(POP(si));	// 23149 pop     si ;~ 0DBE:0BE3
cs=0xdbe;eip=0x000be4; 	R(RETF(0));	// 23150 retf ;~ 0DBE:0BE4
sub_1cda5:
	// 23157 
cs=0xdbe;eip=0x000be5; 	X(PUSH(si));	// 23158 push    si ;~ 0DBE:0BE5
ret_dbe_be6:
	// 5760 
cs=0xdbe;eip=0x000be6; 	T(MOV(dx, 1));	// 23159 mov     dx, 1 ;~ 0DBE:0BE6
loc_1cda9:
	// 5761 
cs=0xdbe;eip=0x000be9; 	X(PUSH(dx));	// 23162 push    dx ;~ 0DBE:0BE9
cs=0xdbe;eip=0x000bea; 	T(MOV(bx, 2));	// 23163 mov     bx, 2 ;~ 0DBE:0BEA
cs=0xdbe;eip=0x000bed; 	T(MOV(cx, 0x300));	// 23164 mov     cx, 300h ;~ 0DBE:0BED
cs=0xdbe;eip=0x000bf0; 	T(SUB(si, si));	// 23165 sub     si, si ;~ 0DBE:0BF0
loc_1cdb2:
	// 5762 
cs=0xdbe;eip=0x000bf2; 	T(MOV(al, *(raddr(ds,si+0x0B6A))));	// 23168 mov     al, [si+0B6Ah] ;~ 0DBE:0BF2
cs=0xdbe;eip=0x000bf6; 	T(MUL1_1(dl));	// 23169 mul     dl ;~ 0DBE:0BF6
cs=0xdbe;eip=0x000bf8; 	T(ADD(ax, 8));	// 23170 add     ax, 8 ;~ 0DBE:0BF8
cs=0xdbe;eip=0x000bfb; 	T(SHR(ax, 1));	// 23171 shr     ax, 1 ;~ 0DBE:0BFB
cs=0xdbe;eip=0x000bfd; 	T(SHR(ax, 1));	// 23172 shr     ax, 1 ;~ 0DBE:0BFD
cs=0xdbe;eip=0x000bff; 	T(SHR(ax, 1));	// 23173 shr     ax, 1 ;~ 0DBE:0BFF
cs=0xdbe;eip=0x000c01; 	T(SHR(ax, 1));	// 23174 shr     ax, 1 ;~ 0DBE:0C01
cs=0xdbe;eip=0x000c03; 	X(MOV(*(raddr(cs,bx)), al));	// 23175 mov     cs:[bx], al ;~ 0DBE:0C03
cs=0xdbe;eip=0x000c06; 	T(INC(bx));	// 23176 inc     bx ;~ 0DBE:0C06
cs=0xdbe;eip=0x000c07; 	T(INC(si));	// 23177 inc     si ;~ 0DBE:0C07
cs=0xdbe;eip=0x000c08; 	R(LOOP(loc_1cdb2));	// 23178 loop    loc_1CDB2 ;~ 0DBE:0C08
cs=0xdbe;eip=0x000c0a; 	R(CALL(sub_1cca0,0));	// 23179 call    sub_1CCA0 ;~ 0DBE:0C0A
cs=0xdbe;eip=0x000c0d; 	X(POP(dx));	// 23180 pop     dx ;~ 0DBE:0C0D
cs=0xdbe;eip=0x000c0e; 	T(INC(dx));	// 23181 inc     dx ;~ 0DBE:0C0E
cs=0xdbe;eip=0x000c0f; 	T(CMP(dl, 0x11));	// 23182 cmp     dl, 11h ;~ 0DBE:0C0F
cs=0xdbe;eip=0x000c12; 	R(JNZ(loc_1cda9));	// 23183 jnz     short loc_1CDA9 ;~ 0DBE:0C12
cs=0xdbe;eip=0x000c14; 	X(POP(si));	// 23184 pop     si ;~ 0DBE:0C14
cs=0xdbe;eip=0x000c15; 	R(RETF(0));	// 23185 retf ;~ 0DBE:0C15
sub_1cdd6:
	// 23192 
cs=0xdbe;eip=0x000c16; 	X(PUSH(es));	// 23193 push    es ;~ 0DBE:0C16
ret_dbe_c17:
	// 5763 
cs=0xdbe;eip=0x000c17; 	T(MOV(bx, 2));	// 23194 mov     bx, 2 ;~ 0DBE:0C17
cs=0xdbe;eip=0x000c1a; 	T(MOV(cx, 0x300));	// 23195 mov     cx, 300h ;~ 0DBE:0C1A
cs=0xdbe;eip=0x000c1d; 	T(SUB(ax, ax));	// 23196 sub     ax, ax ;~ 0DBE:0C1D
loc_1cddf:
	// 5764 
cs=0xdbe;eip=0x000c1f; 	X(MOV(*(raddr(cs,bx)), al));	// 23199 mov     cs:[bx], al ;~ 0DBE:0C1F
cs=0xdbe;eip=0x000c22; 	T(INC(bx));	// 23200 inc     bx ;~ 0DBE:0C22
cs=0xdbe;eip=0x000c23; 	R(LOOP(loc_1cddf));	// 23201 loop    loc_1CDDF ;~ 0DBE:0C23
cs=0xdbe;eip=0x000c25; 	R(CALL(sub_1cca0,0));	// 23202 call    sub_1CCA0 ;~ 0DBE:0C25
cs=0xdbe;eip=0x000c28; 	X(POP(es));	// 23203 pop     es ;~ 0DBE:0C28
cs=0xdbe;eip=0x000c29; 	R(RETF(0));	// 23204 retf ;~ 0DBE:0C29
sub_1cdea:
	// 23211 
cs=0xdbe;eip=0x000c2a; 	X(PUSH(si));	// 23213 push    si ;~ 0DBE:0C2A
ret_dbe_c2b:
	// 5765 
cs=0xdbe;eip=0x000c2b; 	X(PUSH(es));	// 23214 push    es ;~ 0DBE:0C2B
cs=0xdbe;eip=0x000c2c; 	T(MOV(bx, 2));	// 23215 mov     bx, 2 ;~ 0DBE:0C2C
cs=0xdbe;eip=0x000c2f; 	T(MOV(cx, 0x300));	// 23216 mov     cx, 300h ;~ 0DBE:0C2F
cs=0xdbe;eip=0x000c32; 	T(SUB(si, si));	// 23217 sub     si, si ;~ 0DBE:0C32
loc_1cdf4:
	// 5766 
cs=0xdbe;eip=0x000c34; 	T(MOV(al, *(raddr(ds,si+0x0B6A))));	// 23220 mov     al, [si+0B6Ah] ;~ 0DBE:0C34
cs=0xdbe;eip=0x000c38; 	X(MOV(*(raddr(cs,bx)), al));	// 23221 mov     cs:[bx], al ;~ 0DBE:0C38
cs=0xdbe;eip=0x000c3b; 	T(INC(bx));	// 23222 inc     bx ;~ 0DBE:0C3B
cs=0xdbe;eip=0x000c3c; 	T(INC(si));	// 23223 inc     si ;~ 0DBE:0C3C
cs=0xdbe;eip=0x000c3d; 	R(LOOP(loc_1cdf4));	// 23224 loop    loc_1CDF4 ;~ 0DBE:0C3D
cs=0xdbe;eip=0x000c3f; 	R(CALL(sub_1cca0,0));	// 23225 call    sub_1CCA0 ;~ 0DBE:0C3F
cs=0xdbe;eip=0x000c42; 	X(POP(es));	// 23226 pop     es ;~ 0DBE:0C42
cs=0xdbe;eip=0x000c43; 	X(POP(si));	// 23227 pop     si ;~ 0DBE:0C43
cs=0xdbe;eip=0x000c44; 	R(RETF(0));	// 23228 retf ;~ 0DBE:0C44
sub_1ce05:
	// 23236 
#undef arg_0
#define arg_0 6
	// 23238 arg_0           = word ptr  6 ;~ 0DBE:0C45
#undef arg_2
#define arg_2 8
	// 23239 arg_2           = word ptr  8 ;~ 0DBE:0C45
#undef arg_4
#define arg_4 0x0A
	// 23240 arg_4           = word ptr  0Ah ;~ 0DBE:0C45
#undef arg_6
#define arg_6 0x0C
	// 23241 arg_6           = word ptr  0Ch ;~ 0DBE:0C45
#undef arg_8
#define arg_8 0x0E
	// 23242 arg_8           = word ptr  0Eh ;~ 0DBE:0C45
ret_dbe_c45:
	// 5767 
cs=0xdbe;eip=0x000c45; 	X(PUSH(bp));	// 23244 push    bp ;~ 0DBE:0C45
cs=0xdbe;eip=0x000c46; 	T(MOV(bp, sp));	// 23245 mov     bp, sp ;~ 0DBE:0C46
cs=0xdbe;eip=0x000c48; 	X(PUSH(bp));	// 23246 push    bp ;~ 0DBE:0C48
cs=0xdbe;eip=0x000c49; 	X(PUSH(si));	// 23247 push    si ;~ 0DBE:0C49
cs=0xdbe;eip=0x000c4a; 	X(PUSH(di));	// 23248 push    di ;~ 0DBE:0C4A
cs=0xdbe;eip=0x000c4b; 	X(PUSH(es));	// 23249 push    es ;~ 0DBE:0C4B
cs=0xdbe;eip=0x000c4c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 23250 mov     ax, [bp+arg_8] ;~ 0DBE:0C4C
cs=0xdbe;eip=0x000c4f; 	T(XCHG(al, ah));	// 23251 xchg    al, ah ;~ 0DBE:0C4F
cs=0xdbe;eip=0x000c51; 	T(MOV(di, ax));	// 23252 mov     di, ax ;~ 0DBE:0C51
cs=0xdbe;eip=0x000c53; 	T(SHR(ax, 1));	// 23253 shr     ax, 1 ;~ 0DBE:0C53
cs=0xdbe;eip=0x000c55; 	T(SHR(ax, 1));	// 23254 shr     ax, 1 ;~ 0DBE:0C55
cs=0xdbe;eip=0x000c57; 	T(ADD(di, ax));	// 23255 add     di, ax ;~ 0DBE:0C57
cs=0xdbe;eip=0x000c59; 	T(ADD(di, *(dw*)(raddr(ss,bp+arg_6))));	// 23256 add     di, [bp+arg_6] ;~ 0DBE:0C59
cs=0xdbe;eip=0x000c5c; 	T(MOV(bx, word_2beda));	// 23257 mov     bx, word_2BEDA ;~ 0DBE:0C5C
cs=0xdbe;eip=0x000c60; 	T(SHL(bx, 1));	// 23258 shl     bx, 1 ;~ 0DBE:0C60
cs=0xdbe;eip=0x000c62; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x6F34))));	// 23259 mov     ax, [bx-6F34h] ;~ 0DBE:0C62
cs=0xdbe;eip=0x000c66; 	T(MOV(es, ax));	// 23260 mov     es, ax ;~ 0DBE:0C66
cs=0xdbe;eip=0x000c68; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 23261 mov     si, [bp+arg_0] ;~ 0DBE:0C68
cs=0xdbe;eip=0x000c6b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 23262 mov     bx, [bp+arg_2] ;~ 0DBE:0C6B
cs=0xdbe;eip=0x000c6e; 	T(SUB(dx, dx));	// 23263 sub     dx, dx ;~ 0DBE:0C6E
cs=0xdbe;eip=0x000c70; 	T(MOV(bp, *(dw*)(raddr(ss,bp+arg_4))));	// 23264 mov     bp, [bp+arg_4] ;~ 0DBE:0C70
cs=0xdbe;eip=0x000c73; 	T(SUB(ch, ch));	// 23265 sub     ch, ch ;~ 0DBE:0C73
loc_1ce35:
	// 5768 
cs=0xdbe;eip=0x000c75; 	T(LODSB);	// 23268 lodsb ;~ 0DBE:0C75
cs=0xdbe;eip=0x000c76; 	T(ADD(al, byte_34f30));	// 23269 add     al, byte_34F30 ;~ 0DBE:0C76
cs=0xdbe;eip=0x000c7a; 	T(MOV(ah, al));	// 23270 mov     ah, al ;~ 0DBE:0C7A
cs=0xdbe;eip=0x000c7c; 	T(MOV(cl, *(raddr(ds,si))));	// 23271 mov     cl, [si] ;~ 0DBE:0C7C
cs=0xdbe;eip=0x000c7e; 	T(INC(si));	// 23272 inc     si ;~ 0DBE:0C7E
cs=0xdbe;eip=0x000c7f; 	T(ADD(dx, cx));	// 23273 add     dx, cx ;~ 0DBE:0C7F
loc_1ce41:
	// 5769 
cs=0xdbe;eip=0x000c81; 	T(CMP(dx, bp));	// 23276 cmp     dx, bp ;~ 0DBE:0C81
cs=0xdbe;eip=0x000c83; 	R(JBE(loc_1ce5c));	// 23277 jbe     short loc_1CE5C ;~ 0DBE:0C83
cs=0xdbe;eip=0x000c85; 	T(SUB(dx, bp));	// 23278 sub     dx, bp ;~ 0DBE:0C85
cs=0xdbe;eip=0x000c87; 	T(SUB(cx, dx));	// 23279 sub     cx, dx ;~ 0DBE:0C87
cs=0xdbe;eip=0x000c89; 	T(SHR(cl, 1));	// 23280 shr     cl, 1 ;~ 0DBE:0C89
cs=0xdbe;eip=0x000c8b; 	R(JNC(loc_1ce4e));	// 23281 jnb     short loc_1CE4E ;~ 0DBE:0C8B
cs=0xdbe;eip=0x000c8d; 	X(STOSB);	// 23282 stosb ;~ 0DBE:0C8D
loc_1ce4e:
	// 5770 
cs=0xdbe;eip=0x000c8e; 	R(JZ(loc_1ce52));	// 23285 jz      short loc_1CE52 ;~ 0DBE:0C8E
	// 23286 rep stosw ;~ 0DBE:0C90
cs=0xdbe;eip=0x000c90; 	X(	REP STOSW);	// 23286 rep stosw ;~ 0DBE:0C90
loc_1ce52:
	// 5771 
cs=0xdbe;eip=0x000c92; 	T(SUB(di, 0x140));	// 23289 sub     di, 140h ;~ 0DBE:0C92
cs=0xdbe;eip=0x000c96; 	T(SUB(di, bp));	// 23290 sub     di, bp ;~ 0DBE:0C96
cs=0xdbe;eip=0x000c98; 	T(MOV(cx, dx));	// 23291 mov     cx, dx ;~ 0DBE:0C98
cs=0xdbe;eip=0x000c9a; 	R(JMP(loc_1ce41));	// 23292 jmp     short loc_1CE41 ;~ 0DBE:0C9A
loc_1ce5c:
	// 5772 
cs=0xdbe;eip=0x000c9c; 	T(SHR(cl, 1));	// 23296 shr     cl, 1 ;~ 0DBE:0C9C
cs=0xdbe;eip=0x000c9e; 	R(JNC(loc_1ce61));	// 23297 jnb     short loc_1CE61 ;~ 0DBE:0C9E
cs=0xdbe;eip=0x000ca0; 	X(STOSB);	// 23298 stosb ;~ 0DBE:0CA0
loc_1ce61:
	// 5773 
cs=0xdbe;eip=0x000ca1; 	R(JZ(loc_1ce65));	// 23301 jz      short loc_1CE65 ;~ 0DBE:0CA1
	// 23302 rep stosw ;~ 0DBE:0CA3
cs=0xdbe;eip=0x000ca3; 	X(	REP STOSW);	// 23302 rep stosw ;~ 0DBE:0CA3
loc_1ce65:
	// 5774 
cs=0xdbe;eip=0x000ca5; 	T(DEC(bx));	// 23305 dec     bx ;~ 0DBE:0CA5
cs=0xdbe;eip=0x000ca6; 	R(JNZ(loc_1ce35));	// 23306 jnz     short loc_1CE35 ;~ 0DBE:0CA6
cs=0xdbe;eip=0x000ca8; 	X(POP(es));	// 23307 pop     es ;~ 0DBE:0CA8
cs=0xdbe;eip=0x000ca9; 	X(POP(di));	// 23308 pop     di ;~ 0DBE:0CA9
cs=0xdbe;eip=0x000caa; 	X(POP(si));	// 23309 pop     si ;~ 0DBE:0CAA
cs=0xdbe;eip=0x000cab; 	X(POP(bp));	// 23310 pop     bp ;~ 0DBE:0CAB
cs=0xdbe;eip=0x000cac; 	X(POP(bp));	// 23311 pop     bp ;~ 0DBE:0CAC
cs=0xdbe;eip=0x000cad; 	R(RETF(0));	// 23312 retf ;~ 0DBE:0CAD
sub_1cfed:
	// 23352 
cs=0xdbe;eip=0x000e2d; 	X(PUSH(es));	// 23353 push    es ;~ 0DBE:0E2D
ret_dbe_e2e:
	// 5775 
cs=0xdbe;eip=0x000e2e; 	X(PUSH(ds));	// 23354 push    ds ;~ 0DBE:0E2E
cs=0xdbe;eip=0x000e2f; 	X(PUSH(si));	// 23355 push    si ;~ 0DBE:0E2F
cs=0xdbe;eip=0x000e30; 	T(XOR(ax, ax));	// 23356 xor     ax, ax ;~ 0DBE:0E30
cs=0xdbe;eip=0x000e32; 	T(MOV(es, ax));	// 23357 mov     es, ax ;~ 0DBE:0E32
cs=0xdbe;eip=0x000e34; 	T(MOV(bl, *(raddr(es,0x417))));	// 23359 mov     bl, es:417h ;~ 0DBE:0E34
cs=0xdbe;eip=0x000e39; 	T(AND(bl, 0x0F3));	// 23360 and     bl, 0F3h ;~ 0DBE:0E39
cs=0xdbe;eip=0x000e3c; 	X(MOV(*(raddr(es,0x417)), bl));	// 23361 mov     es:417h, bl ;~ 0DBE:0E3C
cs=0xdbe;eip=0x000e41; 	X(MOV(byte_34f98, al));	// 23362 mov     byte_34F98, al ;~ 0DBE:0E41
cs=0xdbe;eip=0x000e44; 	X(MOV(byte_34f99, al));	// 23363 mov     byte_34F99, al ;~ 0DBE:0E44
cs=0xdbe;eip=0x000e47; 	X(MOV(byte_34f9a, al));	// 23364 mov     byte_34F9A, al ;~ 0DBE:0E47
cs=0xdbe;eip=0x000e4a; 	X(MOV(byte_34f9b, al));	// 23365 mov     byte_34F9B, al ;~ 0DBE:0E4A
cs=0xdbe;eip=0x000e4d; 	X(MOV(byte_34f9c, al));	// 23366 mov     byte_34F9C, al ;~ 0DBE:0E4D
cs=0xdbe;eip=0x000e50; 	T(MOV(ax, 0x3509));	// 23367 mov     ax, 3509h ;~ 0DBE:0E50
cs=0xdbe;eip=0x000e53; 	R(_INT(0x21));	// 23368 int     21h             ; DOS - 2+ - GET INTERRUPT VECTOR ;~ 0DBE:0E53
cs=0xdbe;eip=0x000e55; 	X(MOV(*(dw*)(((db*)&dword_34f94)), bx));	// 23371 mov     word ptr dword_34F94, bx ;~ 0DBE:0E55
cs=0xdbe;eip=0x000e59; 	X(MOV(*(dw*)(((db*)&dword_34f94)+2), es));	// 23372 mov     word ptr dword_34F94+2, es ;~ 0DBE:0E59
cs=0xdbe;eip=0x000e5d; 	T(CLI);	// 23373 cli ;~ 0DBE:0E5D
cs=0xdbe;eip=0x000e5e; 	X(PUSH(ds));	// 23374 push    ds ;~ 0DBE:0E5E
cs=0xdbe;eip=0x000e5f; 	T(MOV(ax, cs));	// 23375 mov     ax, cs ;~ 0DBE:0E5F
cs=0xdbe;eip=0x000e61; 	T(MOV(ds, ax));	// 23376 mov     ds, ax ;~ 0DBE:0E61
cs=0xdbe;eip=0x000e63; 	R(IN(al, 0x61));	// 23378 in      al, 61h         ; PC/XT PPI port B bits: ;~ 0DBE:0E63
cs=0xdbe;eip=0x000e65; 	T(AND(al, 0x7F));	// 23386 and     al, 7Fh ;~ 0DBE:0E65
cs=0xdbe;eip=0x000e67; 	R(OUT(0x61, al));	// 23387 out     61h, al         ; PC/XT PPI port B bits: ;~ 0DBE:0E67
cs=0xdbe;eip=0x000e69; 	T(MOV(dx, 0x0E98));	// 23395 mov     dx, 0E98h ;~ 0DBE:0E69
cs=0xdbe;eip=0x000e6c; 	T(MOV(ax, 0x2509));	// 23396 mov     ax, 2509h ;~ 0DBE:0E6C
cs=0xdbe;eip=0x000e6f; 	R(_INT(0x21));	// 23397 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 0DBE:0E6F
cs=0xdbe;eip=0x000e71; 	X(POP(ds));	// 23400 pop     ds ;~ 0DBE:0E71
cs=0xdbe;eip=0x000e72; 	T(STI);	// 23402 sti ;~ 0DBE:0E72
cs=0xdbe;eip=0x000e73; 	X(MOV(*(dw*)((&unk_2bedd)), 1));	// 23403 mov     word ptr unk_2BEDD, 1 ;~ 0DBE:0E73
cs=0xdbe;eip=0x000e79; 	X(POP(si));	// 23404 pop     si ;~ 0DBE:0E79
cs=0xdbe;eip=0x000e7a; 	X(POP(ds));	// 23405 pop     ds ;~ 0DBE:0E7A
cs=0xdbe;eip=0x000e7b; 	X(POP(es));	// 23406 pop     es ;~ 0DBE:0E7B
cs=0xdbe;eip=0x000e7c; 	R(RETF(0));	// 23408 retf ;~ 0DBE:0E7C
sub_1d03d:
	// 23415 
cs=0xdbe;eip=0x000e7d; 	X(PUSH(es));	// 23417 push    es ;~ 0DBE:0E7D
ret_dbe_e7e:
	// 5776 
cs=0xdbe;eip=0x000e7e; 	X(PUSH(ds));	// 23418 push    ds ;~ 0DBE:0E7E
cs=0xdbe;eip=0x000e7f; 	X(PUSH(si));	// 23419 push    si ;~ 0DBE:0E7F
cs=0xdbe;eip=0x000e80; 	T(CMP(*(dw*)((&unk_2bedd)), 0));	// 23420 cmp     word ptr unk_2BEDD, 0 ;~ 0DBE:0E80
cs=0xdbe;eip=0x000e85; 	R(JZ(loc_1d054));	// 23421 jz      short loc_1D054 ;~ 0DBE:0E85
cs=0xdbe;eip=0x000e87; 	T(CLI);	// 23422 cli ;~ 0DBE:0E87
cs=0xdbe;eip=0x000e88; 	X(PUSH(ds));	// 23423 push    ds ;~ 0DBE:0E88
cs=0xdbe;eip=0x000e89; 	T(LDS(dx, dword_34f94));	// 23424 lds     dx, dword_34F94 ;~ 0DBE:0E89
cs=0xdbe;eip=0x000e8d; 	T(MOV(ax, 0x2509));	// 23425 mov     ax, 2509h ;~ 0DBE:0E8D
cs=0xdbe;eip=0x000e90; 	R(_INT(0x21));	// 23426 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 0DBE:0E90
cs=0xdbe;eip=0x000e92; 	X(POP(ds));	// 23429 pop     ds ;~ 0DBE:0E92
cs=0xdbe;eip=0x000e93; 	T(STI);	// 23430 sti ;~ 0DBE:0E93
loc_1d054:
	// 5777 
cs=0xdbe;eip=0x000e94; 	X(POP(si));	// 23433 pop     si ;~ 0DBE:0E94
cs=0xdbe;eip=0x000e95; 	X(POP(ds));	// 23434 pop     ds ;~ 0DBE:0E95
cs=0xdbe;eip=0x000e96; 	X(POP(es));	// 23435 pop     es ;~ 0DBE:0E96
cs=0xdbe;eip=0x000e97; 	R(RETF(0));	// 23436 retf ;~ 0DBE:0E97
sub_1d25f:
	// 23775 
cs=0xdbe;eip=0x00109f; 	X(PUSH(ds));	// 23776 push    ds ;~ 0DBE:109F
ret_dbe_10a0:
	// 5815 
cs=0xdbe;eip=0x0010a0; 	X(PUSH(cs));	// 23777 push    cs ;~ 0DBE:10A0
cs=0xdbe;eip=0x0010a1; 	X(POP(ds));	// 23778 pop     ds ;~ 0DBE:10A1
cs=0xdbe;eip=0x0010a2; 	T(MOV(ax, 0x3508));	// 23780 mov     ax, 3508h ;~ 0DBE:10A2
cs=0xdbe;eip=0x0010a5; 	R(_INT(0x21));	// 23781 int     21h             ; DOS - 2+ - GET INTERRUPT VECTOR ;~ 0DBE:10A5
	cs=seg_offset(seg005);
cs=0xdbe;eip=0x0010a7; 	X(MOV(*(dw*)(((db*)&dword_1d25b)), bx));	// 23784 mov     word ptr cs:dword_1D25B, bx ;~ 0DBE:10A7
	cs=seg_offset(seg005);
cs=0xdbe;eip=0x0010ac; 	X(MOV(*(dw*)(((db*)&dword_1d25b)+2), es));	// 23785 mov     word ptr cs:dword_1D25B+2, es ;~ 0DBE:10AC
cs=0xdbe;eip=0x0010b1; 	T(MOV(dx, 0x10E8));	// 23786 mov     dx, 10E8h ;~ 0DBE:10B1
cs=0xdbe;eip=0x0010b4; 	T(MOV(ax, 0x2508));	// 23787 mov     ax, 2508h ;~ 0DBE:10B4
cs=0xdbe;eip=0x0010b7; 	R(_INT(0x21));	// 23788 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 0DBE:10B7
cs=0xdbe;eip=0x0010b9; 	T(CLI);	// 23791 cli ;~ 0DBE:10B9
cs=0xdbe;eip=0x0010ba; 	T(MOV(al, 0x36));	// 23792 mov     al, 36h ; '6' ;~ 0DBE:10BA
cs=0xdbe;eip=0x0010bc; 	R(OUT(0x43, al));	// 23793 out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0DBE:10BC
cs=0xdbe;eip=0x0010be; 	X(MOV(*(dw*)(raddr(ds,0x0C5E4)), 0x2000));	// 23794 mov     word ptr ds:0C5E4h, 2000h ;~ 0DBE:10BE
cs=0xdbe;eip=0x0010c4; 	T(SUB(al, al));	// 23795 sub     al, al ;~ 0DBE:10C4
cs=0xdbe;eip=0x0010c6; 	R(OUT(0x40, al));	// 23796 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0DBE:10C6
cs=0xdbe;eip=0x0010c8; 	T(MOV(al, 0x20));	// 23797 mov     al, 20h ; ' ' ;~ 0DBE:10C8
cs=0xdbe;eip=0x0010ca; 	R(OUT(0x40, al));	// 23798 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0DBE:10CA
cs=0xdbe;eip=0x0010cc; 	T(STI);	// 23799 sti ;~ 0DBE:10CC
cs=0xdbe;eip=0x0010cd; 	X(POP(ds));	// 23800 pop     ds ;~ 0DBE:10CD
cs=0xdbe;eip=0x0010ce; 	R(RETF(0));	// 23802 retf ;~ 0DBE:10CE
sub_1d28f:
	// 23809 
cs=0xdbe;eip=0x0010cf; 	T(CLI);	// 23810 cli ;~ 0DBE:10CF
ret_dbe_10d0:
	// 5816 
cs=0xdbe;eip=0x0010d0; 	T(MOV(al, 0x36));	// 23811 mov     al, 36h ; '6' ;~ 0DBE:10D0
cs=0xdbe;eip=0x0010d2; 	R(OUT(0x43, al));	// 23812 out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0DBE:10D2
cs=0xdbe;eip=0x0010d4; 	T(SUB(al, al));	// 23813 sub     al, al ;~ 0DBE:10D4
cs=0xdbe;eip=0x0010d6; 	R(OUT(0x40, al));	// 23814 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0DBE:10D6
cs=0xdbe;eip=0x0010d8; 	R(OUT(0x40, al));	// 23815 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0DBE:10D8
cs=0xdbe;eip=0x0010da; 	T(STI);	// 23816 sti ;~ 0DBE:10DA
cs=0xdbe;eip=0x0010db; 	X(PUSH(ds));	// 23817 push    ds ;~ 0DBE:10DB
	cs=seg_offset(seg005);
cs=0xdbe;eip=0x0010dc; 	T(LDS(dx, *(dd*)(((db*)&dword_1d25b))));	// 23818 lds     dx, cs:dword_1D25B ;~ 0DBE:10DC
cs=0xdbe;eip=0x0010e1; 	T(MOV(ax, 0x2508));	// 23819 mov     ax, 2508h ;~ 0DBE:10E1
cs=0xdbe;eip=0x0010e4; 	R(_INT(0x21));	// 23820 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 0DBE:10E4
cs=0xdbe;eip=0x0010e6; 	X(POP(ds));	// 23823 pop     ds ;~ 0DBE:10E6
cs=0xdbe;eip=0x0010e7; 	R(RETF(0));	// 23824 retf ;~ 0DBE:10E7
sub_1d2d0:
	// 23852 
#undef arg_0
#define arg_0 6
	// 23855 arg_0           = word ptr  6 ;~ 0DBE:1110
ret_dbe_1110:
	// 5819 
cs=0xdbe;eip=0x001110; 	X(PUSH(bp));	// 23857 push    bp ;~ 0DBE:1110
cs=0xdbe;eip=0x001111; 	T(MOV(bp, sp));	// 23858 mov     bp, sp ;~ 0DBE:1111
cs=0xdbe;eip=0x001113; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 23859 mov     ax, [bp+arg_0] ;~ 0DBE:1113
cs=0xdbe;eip=0x001116; 	R(CALLF(sub_1d2dd,0));	// 23860 call    sub_1D2DD ;~ 0DBE:1116
cs=0xdbe;eip=0x00111b; 	X(POP(bp));	// 23861 pop     bp ;~ 0DBE:111B
cs=0xdbe;eip=0x00111c; 	R(RETF(0));	// 23862 retf ;~ 0DBE:111C
sub_1d2dd:
	// 23869 
cs=0xdbe;eip=0x00111d; 	X(PUSH(bx));	// 23871 push    bx ;~ 0DBE:111D
ret_dbe_111e:
	// 5820 
cs=0xdbe;eip=0x00111e; 	T(CMP(byte_2bedc, 1));	// 23872 cmp     byte_2BEDC, 1 ;~ 0DBE:111E
cs=0xdbe;eip=0x001123; 	R(JNZ(loc_1d316));	// 23873 jnz     short loc_1D316 ;~ 0DBE:1123
cs=0xdbe;eip=0x001125; 	T(OR(ax, ax));	// 23874 or      ax, ax ;~ 0DBE:1125
cs=0xdbe;eip=0x001127; 	R(JNZ(loc_1d300));	// 23875 jnz     short loc_1D300 ;~ 0DBE:1127
cs=0xdbe;eip=0x001129; 	T(CLI);	// 23876 cli ;~ 0DBE:1129
cs=0xdbe;eip=0x00112a; 	R(CALLF(sub_2bd52,0));	// 23877 call    sub_2BD52 ;~ 0DBE:112A
cs=0xdbe;eip=0x00112f; 	T(STI);	// 23878 sti ;~ 0DBE:112F
cs=0xdbe;eip=0x001130; 	T(MOV(cx, 0x18));	// 23879 mov     cx, 18h ;~ 0DBE:1130
cs=0xdbe;eip=0x001133; 	T(SUB(bx, bx));	// 23880 sub     bx, bx ;~ 0DBE:1133
cs=0xdbe;eip=0x001135; 	T(MOV(al, 0x0FF));	// 23881 mov     al, 0FFh ;~ 0DBE:1135
loc_1d2f7:
	// 5821 
cs=0xdbe;eip=0x001137; 	X(MOV(*(raddr(ds,bx-0x6E8A)), al));	// 23884 mov     [bx-6E8Ah], al ;~ 0DBE:1137
cs=0xdbe;eip=0x00113b; 	T(INC(bx));	// 23885 inc     bx ;~ 0DBE:113B
cs=0xdbe;eip=0x00113c; 	R(LOOP(loc_1d2f7));	// 23886 loop    loc_1D2F7 ;~ 0DBE:113C
cs=0xdbe;eip=0x00113e; 	X(POP(bx));	// 23887 pop     bx ;~ 0DBE:113E
cs=0xdbe;eip=0x00113f; 	R(RETF(0));	// 23888 retf ;~ 0DBE:113F
loc_1d300:
	// 5822 
cs=0xdbe;eip=0x001140; 	T(CMP(al, 2));	// 23892 cmp     al, 2 ;~ 0DBE:1140
cs=0xdbe;eip=0x001142; 	R(JZ(loc_1d30f));	// 23893 jz      short loc_1D30F ;~ 0DBE:1142
cs=0xdbe;eip=0x001144; 	T(CMP(al, 6));	// 23894 cmp     al, 6 ;~ 0DBE:1144
cs=0xdbe;eip=0x001146; 	R(JZ(loc_1d30f));	// 23895 jz      short loc_1D30F ;~ 0DBE:1146
cs=0xdbe;eip=0x001148; 	T(CMP(byte_352cb, 0));	// 23896 cmp     byte_352CB, 0 ;~ 0DBE:1148
cs=0xdbe;eip=0x00114d; 	R(JNZ(loc_1d316));	// 23897 jnz     short loc_1D316 ;~ 0DBE:114D
loc_1d30f:
	// 5823 
cs=0xdbe;eip=0x00114f; 	T(CMP(*(db*)(((db*)&word_2becf)), 0));	// 23901 cmp     byte ptr word_2BECF, 0 ;~ 0DBE:114F
cs=0xdbe;eip=0x001154; 	R(JZ(loc_1d318));	// 23902 jz      short loc_1D318 ;~ 0DBE:1154
loc_1d316:
	// 5824 
cs=0xdbe;eip=0x001156; 	X(POP(bx));	// 23906 pop     bx ;~ 0DBE:1156
cs=0xdbe;eip=0x001157; 	R(RETF(0));	// 23907 retf ;~ 0DBE:1157
loc_1d318:
	// 5825 
cs=0xdbe;eip=0x001158; 	T(MOV(ah, al));	// 23911 mov     ah, al ;~ 0DBE:1158
cs=0xdbe;eip=0x00115a; 	T(AND(al, 0x7F));	// 23912 and     al, 7Fh ;~ 0DBE:115A
cs=0xdbe;eip=0x00115c; 	T(CMP(al, 0x14));	// 23913 cmp     al, 14h ;~ 0DBE:115C
cs=0xdbe;eip=0x00115e; 	R(JNZ(loc_1d329));	// 23914 jnz     short loc_1D329 ;~ 0DBE:115E
cs=0xdbe;eip=0x001160; 	T(CMP(byte_353d6, 0));	// 23915 cmp     byte_353D6, 0 ;~ 0DBE:1160
cs=0xdbe;eip=0x001165; 	R(JZ(loc_1d329));	// 23916 jz      short loc_1D329 ;~ 0DBE:1165
cs=0xdbe;eip=0x001167; 	T(MOV(al, 0x17));	// 23917 mov     al, 17h ;~ 0DBE:1167
loc_1d329:
	// 5826 
cs=0xdbe;eip=0x001169; 	T(OR(ah, ah));	// 23921 or      ah, ah ;~ 0DBE:1169
cs=0xdbe;eip=0x00116b; 	R(JNS(loc_1d354));	// 23922 jns     short loc_1D354 ;~ 0DBE:116B
cs=0xdbe;eip=0x00116d; 	T(SUB(ah, ah));	// 23923 sub     ah, ah ;~ 0DBE:116D
cs=0xdbe;eip=0x00116f; 	T(MOV(bx, ax));	// 23924 mov     bx, ax ;~ 0DBE:116F
cs=0xdbe;eip=0x001171; 	T(MOV(ah, *(raddr(ds,bx-0x6E8A))));	// 23925 mov     ah, [bx-6E8Ah] ;~ 0DBE:1171
cs=0xdbe;eip=0x001175; 	T(CMP(ah, 0x0FF));	// 23926 cmp     ah, 0FFh ;~ 0DBE:1175
cs=0xdbe;eip=0x001178; 	R(JZ(loc_1d352));	// 23927 jz      short loc_1D352 ;~ 0DBE:1178
cs=0xdbe;eip=0x00117a; 	X(MOV(*(raddr(ds,bx-0x6E8A)), 0x0FF));	// 23928 mov     byte ptr [bx-6E8Ah], 0FFh ;~ 0DBE:117A
cs=0xdbe;eip=0x00117f; 	T(MOV(bl, ah));	// 23929 mov     bl, ah ;~ 0DBE:117F
cs=0xdbe;eip=0x001181; 	T(CMP(*(raddr(ds,bx-0x350B)), al));	// 23930 cmp     [bx-350Bh], al ;~ 0DBE:1181
cs=0xdbe;eip=0x001185; 	R(JNZ(loc_1d352));	// 23931 jnz     short loc_1D352 ;~ 0DBE:1185
cs=0xdbe;eip=0x001187; 	X(PUSH(bx));	// 23932 push    bx ;~ 0DBE:1187
cs=0xdbe;eip=0x001188; 	T(CLI);	// 23933 cli ;~ 0DBE:1188
cs=0xdbe;eip=0x001189; 	R(CALLF(sub_2adcc,0));	// 23934 call    sub_2ADCC ;~ 0DBE:1189
cs=0xdbe;eip=0x00118e; 	T(STI);	// 23935 sti ;~ 0DBE:118E
cs=0xdbe;eip=0x00118f; 	T(ADD(sp, 2));	// 23936 add     sp, 2 ;~ 0DBE:118F
loc_1d352:
	// 5827 
cs=0xdbe;eip=0x001192; 	X(POP(bx));	// 23940 pop     bx ;~ 0DBE:1192
cs=0xdbe;eip=0x001193; 	R(RETF(0));	// 23941 retf ;~ 0DBE:1193
loc_1d354:
	// 5828 
cs=0xdbe;eip=0x001194; 	T(SUB(ah, ah));	// 23945 sub     ah, ah ;~ 0DBE:1194
cs=0xdbe;eip=0x001196; 	T(MOV(bx, ax));	// 23946 mov     bx, ax ;~ 0DBE:1196
cs=0xdbe;eip=0x001198; 	T(CMP(bx, 0x17));	// 23947 cmp     bx, 17h ;~ 0DBE:1198
cs=0xdbe;eip=0x00119b; 	R(JA(loc_1d316));	// 23948 ja      short loc_1D316 ;~ 0DBE:119B
cs=0xdbe;eip=0x00119d; 	T(MOV(al, *(raddr(ds,bx-0x6EA2))));	// 23949 mov     al, [bx-6EA2h] ;~ 0DBE:119D
cs=0xdbe;eip=0x0011a1; 	T(MOV(cl, bl));	// 23950 mov     cl, bl ;~ 0DBE:11A1
cs=0xdbe;eip=0x0011a3; 	T(MOV(ah, *(raddr(ds,bx-0x6E8A))));	// 23951 mov     ah, [bx-6E8Ah] ;~ 0DBE:11A3
cs=0xdbe;eip=0x0011a7; 	T(CMP(ah, 0x0FF));	// 23952 cmp     ah, 0FFh ;~ 0DBE:11A7
cs=0xdbe;eip=0x0011aa; 	R(JZ(loc_1d376));	// 23953 jz      short loc_1D376 ;~ 0DBE:11AA
cs=0xdbe;eip=0x0011ac; 	X(PUSH(bx));	// 23954 push    bx ;~ 0DBE:11AC
cs=0xdbe;eip=0x0011ad; 	T(MOV(bl, ah));	// 23955 mov     bl, ah ;~ 0DBE:11AD
cs=0xdbe;eip=0x0011af; 	T(CMP(*(raddr(ds,bx-0x350B)), cl));	// 23956 cmp     [bx-350Bh], cl ;~ 0DBE:11AF
cs=0xdbe;eip=0x0011b3; 	X(POP(bx));	// 23957 pop     bx ;~ 0DBE:11B3
cs=0xdbe;eip=0x0011b4; 	R(JZ(loc_1d316));	// 23958 jz      short loc_1D316 ;~ 0DBE:11B4
loc_1d376:
	// 5829 
cs=0xdbe;eip=0x0011b6; 	X(PUSH(bx));	// 23961 push    bx ;~ 0DBE:11B6
cs=0xdbe;eip=0x0011b7; 	T(SHL(bx, 1));	// 23962 shl     bx, 1 ;~ 0DBE:11B7
cs=0xdbe;eip=0x0011b9; 	T(MOV(bx, *(dw*)(raddr(ds,bx-0x6E72))));	// 23963 mov     bx, [bx-6E72h] ;~ 0DBE:11B9
cs=0xdbe;eip=0x0011bd; 	X(PUSH(ax));	// 23964 push    ax ;~ 0DBE:11BD
cs=0xdbe;eip=0x0011be; 	X(PUSH(bx));	// 23965 push    bx ;~ 0DBE:11BE
cs=0xdbe;eip=0x0011bf; 	T(CMP(al, 0x7F));	// 23966 cmp     al, 7Fh ;~ 0DBE:11BF
cs=0xdbe;eip=0x0011c1; 	R(JNZ(loc_1d389));	// 23967 jnz     short loc_1D389 ;~ 0DBE:11C1
cs=0xdbe;eip=0x0011c3; 	T(CLI);	// 23968 cli ;~ 0DBE:11C3
cs=0xdbe;eip=0x0011c4; 	R(CALLF(sub_2bd52,0));	// 23969 call    sub_2BD52 ;~ 0DBE:11C4
loc_1d389:
	// 5830 
cs=0xdbe;eip=0x0011c9; 	T(CLI);	// 23972 cli ;~ 0DBE:11C9
cs=0xdbe;eip=0x0011ca; 	R(CALLF(sub_2ba99,0));	// 23973 call    sub_2BA99 ;~ 0DBE:11CA
cs=0xdbe;eip=0x0011cf; 	T(STI);	// 23974 sti ;~ 0DBE:11CF
cs=0xdbe;eip=0x0011d0; 	T(ADD(sp, 4));	// 23975 add     sp, 4 ;~ 0DBE:11D0
cs=0xdbe;eip=0x0011d3; 	X(POP(bx));	// 23976 pop     bx ;~ 0DBE:11D3
cs=0xdbe;eip=0x0011d4; 	T(SUB(bh, bh));	// 23977 sub     bh, bh ;~ 0DBE:11D4
cs=0xdbe;eip=0x0011d6; 	X(MOV(*(raddr(ds,bx-0x6E8A)), al));	// 23978 mov     [bx-6E8Ah], al ;~ 0DBE:11D6
cs=0xdbe;eip=0x0011da; 	T(CMP(al, 0x0FF));	// 23979 cmp     al, 0FFh ;~ 0DBE:11DA
cs=0xdbe;eip=0x0011dc; 	R(JZ(loc_1d3b5));	// 23980 jz      short loc_1D3B5 ;~ 0DBE:11DC
cs=0xdbe;eip=0x0011de; 	T(MOV(cl, bl));	// 23981 mov     cl, bl ;~ 0DBE:11DE
cs=0xdbe;eip=0x0011e0; 	T(MOV(bl, al));	// 23982 mov     bl, al ;~ 0DBE:11E0
cs=0xdbe;eip=0x0011e2; 	X(MOV(*(raddr(ds,bx-0x350B)), cl));	// 23983 mov     [bx-350Bh], cl ;~ 0DBE:11E2
cs=0xdbe;eip=0x0011e6; 	T(CMP(cl, 0x0F));	// 23984 cmp     cl, 0Fh ;~ 0DBE:11E6
cs=0xdbe;eip=0x0011e9; 	R(JZ(loc_1d3b0));	// 23985 jz      short loc_1D3B0 ;~ 0DBE:11E9
cs=0xdbe;eip=0x0011eb; 	T(CMP(cl, 0x10));	// 23986 cmp     cl, 10h ;~ 0DBE:11EB
cs=0xdbe;eip=0x0011ee; 	R(JNZ(loc_1d3b5));	// 23987 jnz     short loc_1D3B5 ;~ 0DBE:11EE
loc_1d3b0:
	// 5831 
cs=0xdbe;eip=0x0011f0; 	X(MOV(byte_34f1e, 1));	// 23990 mov     byte_34F1E, 1 ;~ 0DBE:11F0
loc_1d3b5:
	// 5832 
cs=0xdbe;eip=0x0011f5; 	X(POP(bx));	// 23994 pop     bx ;~ 0DBE:11F5
cs=0xdbe;eip=0x0011f6; 	R(RETF(0));	// 23995 retf ;~ 0DBE:11F6
sub_1d3b7:
	// 24003 
#undef arg_0
#define arg_0 6
	// 24005 arg_0           = word ptr  6 ;~ 0DBE:11F7
#undef arg_2
#define arg_2 8
	// 24006 arg_2           = word ptr  8 ;~ 0DBE:11F7
#undef arg_4
#define arg_4 0x0A
	// 24007 arg_4           = word ptr  0Ah ;~ 0DBE:11F7
#undef arg_6
#define arg_6 0x0C
	// 24008 arg_6           = word ptr  0Ch ;~ 0DBE:11F7
ret_dbe_11f7:
	// 5833 
cs=0xdbe;eip=0x0011f7; 	X(PUSH(bp));	// 24010 push    bp ;~ 0DBE:11F7
cs=0xdbe;eip=0x0011f8; 	T(MOV(bp, sp));	// 24011 mov     bp, sp ;~ 0DBE:11F8
cs=0xdbe;eip=0x0011fa; 	X(PUSH(ds));	// 24012 push    ds ;~ 0DBE:11FA
cs=0xdbe;eip=0x0011fb; 	X(PUSH(di));	// 24013 push    di ;~ 0DBE:11FB
cs=0xdbe;eip=0x0011fc; 	X(PUSH(si));	// 24014 push    si ;~ 0DBE:11FC
cs=0xdbe;eip=0x0011fd; 	X(PUSH(es));	// 24015 push    es ;~ 0DBE:11FD
cs=0xdbe;eip=0x0011fe; 	T(MOV(es, word_34f10));	// 24016 mov     es, word_34F10 ;~ 0DBE:11FE
cs=0xdbe;eip=0x001202; 	T(SUB(di, di));	// 24017 sub     di, di ;~ 0DBE:1202
cs=0xdbe;eip=0x001204; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_6))));	// 24018 mov     cx, [bp+arg_6] ;~ 0DBE:1204
cs=0xdbe;eip=0x001207; 	T(SUB(cx, *(dw*)(raddr(ss,bp+arg_4))));	// 24019 sub     cx, [bp+arg_4] ;~ 0DBE:1207
cs=0xdbe;eip=0x00120a; 	T(INC(cx));	// 24020 inc     cx ;~ 0DBE:120A
cs=0xdbe;eip=0x00120b; 	T(MOV(al, *(db*)(((db*)&word_3a178))));	// 24021 mov     al, byte ptr word_3A178 ;~ 0DBE:120B
cs=0xdbe;eip=0x00120e; 	T(CMP(al, 0x13));	// 24022 cmp     al, 13h ;~ 0DBE:120E
cs=0xdbe;eip=0x001210; 	R(JZ(loc_1d446));	// 24023 jz      short loc_1D446 ;~ 0DBE:1210
cs=0xdbe;eip=0x001212; 	T(CMP(al, 0x0D));	// 24024 cmp     al, 0Dh ;~ 0DBE:1212
cs=0xdbe;eip=0x001214; 	R(JZ(loc_1d3d9));	// 24025 jz      short loc_1D3D9 ;~ 0DBE:1214
cs=0xdbe;eip=0x001216; 	R(JMP(loc_1d483));	// 24026 jmp     loc_1D483 ;~ 0DBE:1216
loc_1d3d9:
	// 5834 
cs=0xdbe;eip=0x001219; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 24030 mov     bx, [bp+arg_4] ;~ 0DBE:1219
cs=0xdbe;eip=0x00121c; 	T(SHL(bx, 1));	// 24031 shl     bx, 1 ;~ 0DBE:121C
cs=0xdbe;eip=0x00121e; 	T(SHL(bx, 1));	// 24032 shl     bx, 1 ;~ 0DBE:121E
cs=0xdbe;eip=0x001220; 	T(SHL(bx, 1));	// 24033 shl     bx, 1 ;~ 0DBE:1220
cs=0xdbe;eip=0x001222; 	T(MOV(ax, bx));	// 24034 mov     ax, bx ;~ 0DBE:1222
cs=0xdbe;eip=0x001224; 	T(SHL(bx, 1));	// 24035 shl     bx, 1 ;~ 0DBE:1224
cs=0xdbe;eip=0x001226; 	T(SHL(bx, 1));	// 24036 shl     bx, 1 ;~ 0DBE:1226
cs=0xdbe;eip=0x001228; 	T(ADD(ax, bx));	// 24037 add     ax, bx ;~ 0DBE:1228
cs=0xdbe;eip=0x00122a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 24038 mov     bx, [bp+arg_0] ;~ 0DBE:122A
cs=0xdbe;eip=0x00122d; 	T(SHR(bx, 1));	// 24039 shr     bx, 1 ;~ 0DBE:122D
cs=0xdbe;eip=0x00122f; 	T(SHR(bx, 1));	// 24040 shr     bx, 1 ;~ 0DBE:122F
cs=0xdbe;eip=0x001231; 	T(SHR(bx, 1));	// 24041 shr     bx, 1 ;~ 0DBE:1231
cs=0xdbe;eip=0x001233; 	T(ADD(ax, bx));	// 24042 add     ax, bx ;~ 0DBE:1233
cs=0xdbe;eip=0x001235; 	T(MOV(si, ax));	// 24043 mov     si, ax ;~ 0DBE:1235
cs=0xdbe;eip=0x001237; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 24044 mov     dx, [bp+arg_2] ;~ 0DBE:1237
cs=0xdbe;eip=0x00123a; 	T(ADD(dx, 7));	// 24045 add     dx, 7 ;~ 0DBE:123A
cs=0xdbe;eip=0x00123d; 	T(SHR(dx, 1));	// 24046 shr     dx, 1 ;~ 0DBE:123D
cs=0xdbe;eip=0x00123f; 	T(SHR(dx, 1));	// 24047 shr     dx, 1 ;~ 0DBE:123F
cs=0xdbe;eip=0x001241; 	T(SHR(dx, 1));	// 24048 shr     dx, 1 ;~ 0DBE:1241
cs=0xdbe;eip=0x001243; 	T(SUB(dx, bx));	// 24049 sub     dx, bx ;~ 0DBE:1243
cs=0xdbe;eip=0x001245; 	T(MOV(bx, word_2beda));	// 24050 mov     bx, word_2BEDA ;~ 0DBE:1245
cs=0xdbe;eip=0x001249; 	T(SHL(bx, 1));	// 24051 shl     bx, 1 ;~ 0DBE:1249
cs=0xdbe;eip=0x00124b; 	T(MOV(ds, *(dw*)(raddr(ds,bx-0x6F34))));	// 24052 mov     ds, word ptr [bx-6F34h] ;~ 0DBE:124B
cs=0xdbe;eip=0x00124f; 	T(MOV(bx, cx));	// 24053 mov     bx, cx ;~ 0DBE:124F
cs=0xdbe;eip=0x001251; 	T(MOV(cx, dx));	// 24054 mov     cx, dx ;~ 0DBE:1251
cs=0xdbe;eip=0x001253; 	T(MOV(dx, 0x3CE));	// 24055 mov     dx, 3CEh ;~ 0DBE:1253
cs=0xdbe;eip=0x001256; 	T(MOV(ax, 5));	// 24056 mov     ax, 5 ;~ 0DBE:1256
cs=0xdbe;eip=0x001259; 	R(OUT(dx, ax));	// 24057 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:1259
loc_1d41a:
	// 5835 
cs=0xdbe;eip=0x00125a; 	X(PUSH(si));	// 24066 push    si ;~ 0DBE:125A
cs=0xdbe;eip=0x00125b; 	X(PUSH(cx));	// 24067 push    cx ;~ 0DBE:125B
loc_1d41c:
	// 5836 
cs=0xdbe;eip=0x00125c; 	T(MOV(ax, 4));	// 24070 mov     ax, 4 ;~ 0DBE:125C
cs=0xdbe;eip=0x00125f; 	R(OUT(dx, ax));	// 24071 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:125F
cs=0xdbe;eip=0x001260; 	T(MOV(al, *(raddr(ds,si))));	// 24074 mov     al, [si] ;~ 0DBE:1260
cs=0xdbe;eip=0x001262; 	X(STOSB);	// 24075 stosb ;~ 0DBE:1262
cs=0xdbe;eip=0x001263; 	T(MOV(ax, 0x104));	// 24076 mov     ax, 104h ;~ 0DBE:1263
cs=0xdbe;eip=0x001266; 	R(OUT(dx, ax));	// 24077 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:1266
cs=0xdbe;eip=0x001267; 	T(MOV(al, *(raddr(ds,si))));	// 24079 mov     al, [si] ;~ 0DBE:1267
cs=0xdbe;eip=0x001269; 	X(STOSB);	// 24080 stosb ;~ 0DBE:1269
cs=0xdbe;eip=0x00126a; 	T(MOV(ax, 0x204));	// 24081 mov     ax, 204h ;~ 0DBE:126A
cs=0xdbe;eip=0x00126d; 	R(OUT(dx, ax));	// 24082 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:126D
cs=0xdbe;eip=0x00126e; 	T(MOV(al, *(raddr(ds,si))));	// 24084 mov     al, [si] ;~ 0DBE:126E
cs=0xdbe;eip=0x001270; 	X(STOSB);	// 24085 stosb ;~ 0DBE:1270
cs=0xdbe;eip=0x001271; 	T(MOV(ax, 0x304));	// 24086 mov     ax, 304h ;~ 0DBE:1271
cs=0xdbe;eip=0x001274; 	R(OUT(dx, ax));	// 24087 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:1274
cs=0xdbe;eip=0x001275; 	X(MOVSB);	// 24089 movsb ;~ 0DBE:1275
cs=0xdbe;eip=0x001276; 	R(LOOP(loc_1d41c));	// 24090 loop    loc_1D41C ;~ 0DBE:1276
cs=0xdbe;eip=0x001278; 	X(POP(cx));	// 24091 pop     cx ;~ 0DBE:1278
cs=0xdbe;eip=0x001279; 	X(POP(si));	// 24092 pop     si ;~ 0DBE:1279
cs=0xdbe;eip=0x00127a; 	T(ADD(si, 0x28));	// 24093 add     si, 28h ; '(' ;~ 0DBE:127A
cs=0xdbe;eip=0x00127d; 	T(DEC(bx));	// 24094 dec     bx ;~ 0DBE:127D
cs=0xdbe;eip=0x00127e; 	R(JNZ(loc_1d41a));	// 24095 jnz     short loc_1D41A ;~ 0DBE:127E
cs=0xdbe;eip=0x001280; 	X(POP(es));	// 24096 pop     es ;~ 0DBE:1280
cs=0xdbe;eip=0x001281; 	X(POP(si));	// 24097 pop     si ;~ 0DBE:1281
cs=0xdbe;eip=0x001282; 	X(POP(di));	// 24098 pop     di ;~ 0DBE:1282
cs=0xdbe;eip=0x001283; 	X(POP(ds));	// 24099 pop     ds ;~ 0DBE:1283
cs=0xdbe;eip=0x001284; 	X(POP(bp));	// 24100 pop     bp ;~ 0DBE:1284
cs=0xdbe;eip=0x001285; 	R(RETF(0));	// 24101 retf ;~ 0DBE:1285
loc_1d446:
	// 5837 
cs=0xdbe;eip=0x001286; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 24105 mov     bx, [bp+arg_4] ;~ 0DBE:1286
cs=0xdbe;eip=0x001289; 	T(XCHG(bl, bh));	// 24106 xchg    bl, bh ;~ 0DBE:1289
cs=0xdbe;eip=0x00128b; 	T(MOV(ax, bx));	// 24107 mov     ax, bx ;~ 0DBE:128B
cs=0xdbe;eip=0x00128d; 	T(SHR(bx, 1));	// 24108 shr     bx, 1 ;~ 0DBE:128D
cs=0xdbe;eip=0x00128f; 	T(SHR(bx, 1));	// 24109 shr     bx, 1 ;~ 0DBE:128F
cs=0xdbe;eip=0x001291; 	T(ADD(ax, bx));	// 24110 add     ax, bx ;~ 0DBE:1291
cs=0xdbe;eip=0x001293; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 24111 add     ax, [bp+arg_0] ;~ 0DBE:1293
cs=0xdbe;eip=0x001296; 	T(MOV(si, ax));	// 24112 mov     si, ax ;~ 0DBE:1296
cs=0xdbe;eip=0x001298; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 24113 mov     dx, [bp+arg_2] ;~ 0DBE:1298
cs=0xdbe;eip=0x00129b; 	T(SUB(dx, *(dw*)(raddr(ss,bp+arg_0))));	// 24114 sub     dx, [bp+arg_0] ;~ 0DBE:129B
cs=0xdbe;eip=0x00129e; 	T(INC(dx));	// 24115 inc     dx ;~ 0DBE:129E
cs=0xdbe;eip=0x00129f; 	T(MOV(bx, word_2beda));	// 24116 mov     bx, word_2BEDA ;~ 0DBE:129F
cs=0xdbe;eip=0x0012a3; 	T(SHL(bx, 1));	// 24117 shl     bx, 1 ;~ 0DBE:12A3
cs=0xdbe;eip=0x0012a5; 	T(MOV(ds, *(dw*)(raddr(ds,bx-0x6F34))));	// 24118 mov     ds, word ptr [bx-6F34h] ;~ 0DBE:12A5
cs=0xdbe;eip=0x0012a9; 	T(MOV(bx, cx));	// 24119 mov     bx, cx ;~ 0DBE:12A9
loc_1d46b:
	// 5838 
cs=0xdbe;eip=0x0012ab; 	X(PUSH(si));	// 24122 push    si ;~ 0DBE:12AB
cs=0xdbe;eip=0x0012ac; 	T(MOV(cx, dx));	// 24123 mov     cx, dx ;~ 0DBE:12AC
cs=0xdbe;eip=0x0012ae; 	T(SHR(cx, 1));	// 24124 shr     cx, 1 ;~ 0DBE:12AE
	// 24125 rep movsw ;~ 0DBE:12B0
cs=0xdbe;eip=0x0012b0; 	X(	REP MOVSW);	// 24125 rep movsw ;~ 0DBE:12B0
cs=0xdbe;eip=0x0012b2; 	R(JNC(loc_1d475));	// 24126 jnb     short loc_1D475 ;~ 0DBE:12B2
cs=0xdbe;eip=0x0012b4; 	X(MOVSB);	// 24127 movsb ;~ 0DBE:12B4
loc_1d475:
	// 5839 
cs=0xdbe;eip=0x0012b5; 	X(POP(si));	// 24130 pop     si ;~ 0DBE:12B5
cs=0xdbe;eip=0x0012b6; 	T(ADD(si, 0x140));	// 24131 add     si, 140h ;~ 0DBE:12B6
cs=0xdbe;eip=0x0012ba; 	T(DEC(bx));	// 24132 dec     bx ;~ 0DBE:12BA
cs=0xdbe;eip=0x0012bb; 	R(JNZ(loc_1d46b));	// 24133 jnz     short loc_1D46B ;~ 0DBE:12BB
cs=0xdbe;eip=0x0012bd; 	X(POP(es));	// 24134 pop     es ;~ 0DBE:12BD
cs=0xdbe;eip=0x0012be; 	X(POP(si));	// 24135 pop     si ;~ 0DBE:12BE
cs=0xdbe;eip=0x0012bf; 	X(POP(di));	// 24136 pop     di ;~ 0DBE:12BF
cs=0xdbe;eip=0x0012c0; 	X(POP(ds));	// 24137 pop     ds ;~ 0DBE:12C0
cs=0xdbe;eip=0x0012c1; 	X(POP(bp));	// 24138 pop     bp ;~ 0DBE:12C1
cs=0xdbe;eip=0x0012c2; 	R(RETF(0));	// 24139 retf ;~ 0DBE:12C2
loc_1d483:
	// 5840 
cs=0xdbe;eip=0x0012c3; 	T(MOV(si, 0x3180));	// 24143 mov     si, 3180h ;~ 0DBE:12C3
cs=0xdbe;eip=0x0012c6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 24144 mov     ax, [bp+arg_0] ;~ 0DBE:12C6
cs=0xdbe;eip=0x0012c9; 	T(AND(ax, 0x0FFFC));	// 24145 and     ax, 0FFFCh ;~ 0DBE:12C9
cs=0xdbe;eip=0x0012cc; 	T(SHR(ax, 1));	// 24146 shr     ax, 1 ;~ 0DBE:12CC
cs=0xdbe;eip=0x0012ce; 	T(ADD(si, ax));	// 24147 add     si, ax ;~ 0DBE:12CE
cs=0xdbe;eip=0x0012d0; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 24148 mov     dx, [bp+arg_2] ;~ 0DBE:12D0
cs=0xdbe;eip=0x0012d3; 	T(ADD(dx, 3));	// 24149 add     dx, 3 ;~ 0DBE:12D3
cs=0xdbe;eip=0x0012d6; 	T(SHR(dx, 1));	// 24150 shr     dx, 1 ;~ 0DBE:12D6
cs=0xdbe;eip=0x0012d8; 	T(SHR(dx, 1));	// 24151 shr     dx, 1 ;~ 0DBE:12D8
cs=0xdbe;eip=0x0012da; 	T(SHR(ax, 1));	// 24152 shr     ax, 1 ;~ 0DBE:12DA
cs=0xdbe;eip=0x0012dc; 	T(SUB(dx, ax));	// 24153 sub     dx, ax ;~ 0DBE:12DC
cs=0xdbe;eip=0x0012de; 	T(MOV(bx, word_2beda));	// 24154 mov     bx, word_2BEDA ;~ 0DBE:12DE
cs=0xdbe;eip=0x0012e2; 	T(SHL(bx, 1));	// 24155 shl     bx, 1 ;~ 0DBE:12E2
cs=0xdbe;eip=0x0012e4; 	T(MOV(ds, *(dw*)(raddr(ds,bx-0x6F34))));	// 24156 mov     ds, word ptr [bx-6F34h] ;~ 0DBE:12E4
cs=0xdbe;eip=0x0012e8; 	T(MOV(bx, cx));	// 24157 mov     bx, cx ;~ 0DBE:12E8
loc_1d4aa:
	// 5841 
cs=0xdbe;eip=0x0012ea; 	X(PUSH(si));	// 24160 push    si ;~ 0DBE:12EA
cs=0xdbe;eip=0x0012eb; 	T(MOV(cx, dx));	// 24161 mov     cx, dx ;~ 0DBE:12EB
	// 24162 rep movsw ;~ 0DBE:12ED
cs=0xdbe;eip=0x0012ed; 	X(	REP MOVSW);	// 24162 rep movsw ;~ 0DBE:12ED
cs=0xdbe;eip=0x0012ef; 	X(POP(si));	// 24163 pop     si ;~ 0DBE:12EF
cs=0xdbe;eip=0x0012f0; 	T(ADD(si, 0x2000));	// 24164 add     si, 2000h ;~ 0DBE:12F0
cs=0xdbe;eip=0x0012f4; 	R(JNS(loc_1d4ba));	// 24165 jns     short loc_1D4BA ;~ 0DBE:12F4
cs=0xdbe;eip=0x0012f6; 	T(ADD(si, 0x80A0));	// 24166 add     si, 80A0h ;~ 0DBE:12F6
loc_1d4ba:
	// 5842 
cs=0xdbe;eip=0x0012fa; 	T(DEC(bx));	// 24169 dec     bx ;~ 0DBE:12FA
cs=0xdbe;eip=0x0012fb; 	R(JNZ(loc_1d4aa));	// 24170 jnz     short loc_1D4AA ;~ 0DBE:12FB
cs=0xdbe;eip=0x0012fd; 	X(POP(es));	// 24171 pop     es ;~ 0DBE:12FD
cs=0xdbe;eip=0x0012fe; 	X(POP(si));	// 24172 pop     si ;~ 0DBE:12FE
cs=0xdbe;eip=0x0012ff; 	X(POP(di));	// 24173 pop     di ;~ 0DBE:12FF
cs=0xdbe;eip=0x001300; 	X(POP(ds));	// 24174 pop     ds ;~ 0DBE:1300
cs=0xdbe;eip=0x001301; 	X(POP(bp));	// 24175 pop     bp ;~ 0DBE:1301
cs=0xdbe;eip=0x001302; 	R(RETF(0));	// 24176 retf ;~ 0DBE:1302
sub_1d4c3:
	// 24184 
#undef arg_0
#define arg_0 6
	// 24186 arg_0           = word ptr  6 ;~ 0DBE:1303
#undef arg_2
#define arg_2 8
	// 24187 arg_2           = word ptr  8 ;~ 0DBE:1303
#undef arg_4
#define arg_4 0x0A
	// 24188 arg_4           = word ptr  0Ah ;~ 0DBE:1303
#undef arg_6
#define arg_6 0x0C
	// 24189 arg_6           = word ptr  0Ch ;~ 0DBE:1303
ret_dbe_1303:
	// 5843 
cs=0xdbe;eip=0x001303; 	X(PUSH(bp));	// 24191 push    bp ;~ 0DBE:1303
cs=0xdbe;eip=0x001304; 	T(MOV(bp, sp));	// 24192 mov     bp, sp ;~ 0DBE:1304
cs=0xdbe;eip=0x001306; 	X(PUSH(ds));	// 24193 push    ds ;~ 0DBE:1306
cs=0xdbe;eip=0x001307; 	X(PUSH(di));	// 24194 push    di ;~ 0DBE:1307
cs=0xdbe;eip=0x001308; 	X(PUSH(si));	// 24195 push    si ;~ 0DBE:1308
cs=0xdbe;eip=0x001309; 	X(PUSH(es));	// 24196 push    es ;~ 0DBE:1309
cs=0xdbe;eip=0x00130a; 	T(SUB(si, si));	// 24197 sub     si, si ;~ 0DBE:130A
cs=0xdbe;eip=0x00130c; 	T(MOV(bx, word_2beda));	// 24198 mov     bx, word_2BEDA ;~ 0DBE:130C
cs=0xdbe;eip=0x001310; 	T(SHL(bx, 1));	// 24199 shl     bx, 1 ;~ 0DBE:1310
cs=0xdbe;eip=0x001312; 	T(MOV(es, *(dw*)(raddr(ds,bx-0x6F34))));	// 24200 mov     es, word ptr [bx-6F34h] ;~ 0DBE:1312
cs=0xdbe;eip=0x001316; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_6))));	// 24201 mov     cx, [bp+arg_6] ;~ 0DBE:1316
cs=0xdbe;eip=0x001319; 	T(SUB(cx, *(dw*)(raddr(ss,bp+arg_4))));	// 24202 sub     cx, [bp+arg_4] ;~ 0DBE:1319
cs=0xdbe;eip=0x00131c; 	T(INC(cx));	// 24203 inc     cx ;~ 0DBE:131C
cs=0xdbe;eip=0x00131d; 	T(MOV(al, *(db*)(((db*)&word_3a178))));	// 24204 mov     al, byte ptr word_3A178 ;~ 0DBE:131D
cs=0xdbe;eip=0x001320; 	T(CMP(al, 0x13));	// 24205 cmp     al, 13h ;~ 0DBE:1320
cs=0xdbe;eip=0x001322; 	R(JNZ(loc_1d4e7));	// 24206 jnz     short loc_1D4E7 ;~ 0DBE:1322
cs=0xdbe;eip=0x001324; 	R(JMP(loc_1d527));	// 24207 jmp     short loc_1D527 ;~ 0DBE:1324
ret_dbe_1326:
	// 5844 
	// 24209 nop ;~ 0DBE:1326
loc_1d4e7:
	// 5845 
cs=0xdbe;eip=0x001327; 	T(CMP(al, 0x0D));	// 24212 cmp     al, 0Dh ;~ 0DBE:1327
cs=0xdbe;eip=0x001329; 	R(JZ(loc_1d4ee));	// 24213 jz      short loc_1D4EE ;~ 0DBE:1329
cs=0xdbe;eip=0x00132b; 	R(JMP(loc_1d55e));	// 24214 jmp     short loc_1D55E ;~ 0DBE:132B
loc_1d4ee:
	// 5846 
cs=0xdbe;eip=0x00132e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 24219 mov     bx, [bp+arg_4] ;~ 0DBE:132E
cs=0xdbe;eip=0x001331; 	T(SHL(bx, 1));	// 24220 shl     bx, 1 ;~ 0DBE:1331
cs=0xdbe;eip=0x001333; 	T(SHL(bx, 1));	// 24221 shl     bx, 1 ;~ 0DBE:1333
cs=0xdbe;eip=0x001335; 	T(SHL(bx, 1));	// 24222 shl     bx, 1 ;~ 0DBE:1335
cs=0xdbe;eip=0x001337; 	T(MOV(ax, bx));	// 24223 mov     ax, bx ;~ 0DBE:1337
cs=0xdbe;eip=0x001339; 	T(SHL(bx, 1));	// 24224 shl     bx, 1 ;~ 0DBE:1339
cs=0xdbe;eip=0x00133b; 	T(SHL(bx, 1));	// 24225 shl     bx, 1 ;~ 0DBE:133B
cs=0xdbe;eip=0x00133d; 	T(ADD(ax, bx));	// 24226 add     ax, bx ;~ 0DBE:133D
cs=0xdbe;eip=0x00133f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 24227 mov     bx, [bp+arg_0] ;~ 0DBE:133F
cs=0xdbe;eip=0x001342; 	T(SHR(bx, 1));	// 24228 shr     bx, 1 ;~ 0DBE:1342
cs=0xdbe;eip=0x001344; 	T(SHR(bx, 1));	// 24229 shr     bx, 1 ;~ 0DBE:1344
cs=0xdbe;eip=0x001346; 	T(SHR(bx, 1));	// 24230 shr     bx, 1 ;~ 0DBE:1346
cs=0xdbe;eip=0x001348; 	T(ADD(ax, bx));	// 24231 add     ax, bx ;~ 0DBE:1348
cs=0xdbe;eip=0x00134a; 	T(MOV(di, ax));	// 24232 mov     di, ax ;~ 0DBE:134A
cs=0xdbe;eip=0x00134c; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 24233 mov     dx, [bp+arg_2] ;~ 0DBE:134C
cs=0xdbe;eip=0x00134f; 	T(ADD(dx, 7));	// 24234 add     dx, 7 ;~ 0DBE:134F
cs=0xdbe;eip=0x001352; 	T(SHR(dx, 1));	// 24235 shr     dx, 1 ;~ 0DBE:1352
cs=0xdbe;eip=0x001354; 	T(SHR(dx, 1));	// 24236 shr     dx, 1 ;~ 0DBE:1354
cs=0xdbe;eip=0x001356; 	T(SHR(dx, 1));	// 24237 shr     dx, 1 ;~ 0DBE:1356
cs=0xdbe;eip=0x001358; 	T(SUB(dx, bx));	// 24238 sub     dx, bx ;~ 0DBE:1358
cs=0xdbe;eip=0x00135a; 	T(MOV(bx, cx));	// 24239 mov     bx, cx ;~ 0DBE:135A
cs=0xdbe;eip=0x00135c; 	T(MOV(cx, dx));	// 24240 mov     cx, dx ;~ 0DBE:135C
cs=0xdbe;eip=0x00135e; 	R(CALL(sub_1d8ca,0));	// 24241 call    sub_1D8CA ;~ 0DBE:135E
cs=0xdbe;eip=0x001361; 	X(POP(es));	// 24242 pop     es ;~ 0DBE:1361
cs=0xdbe;eip=0x001362; 	X(POP(si));	// 24243 pop     si ;~ 0DBE:1362
cs=0xdbe;eip=0x001363; 	X(POP(di));	// 24244 pop     di ;~ 0DBE:1363
cs=0xdbe;eip=0x001364; 	X(POP(ds));	// 24245 pop     ds ;~ 0DBE:1364
cs=0xdbe;eip=0x001365; 	X(POP(bp));	// 24246 pop     bp ;~ 0DBE:1365
cs=0xdbe;eip=0x001366; 	R(RETF(0));	// 24247 retf ;~ 0DBE:1366
loc_1d527:
	// 5847 
cs=0xdbe;eip=0x001367; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 24251 mov     bx, [bp+arg_4] ;~ 0DBE:1367
cs=0xdbe;eip=0x00136a; 	T(XCHG(bl, bh));	// 24252 xchg    bl, bh ;~ 0DBE:136A
cs=0xdbe;eip=0x00136c; 	T(MOV(ax, bx));	// 24253 mov     ax, bx ;~ 0DBE:136C
cs=0xdbe;eip=0x00136e; 	T(SHR(bx, 1));	// 24254 shr     bx, 1 ;~ 0DBE:136E
cs=0xdbe;eip=0x001370; 	T(SHR(bx, 1));	// 24255 shr     bx, 1 ;~ 0DBE:1370
cs=0xdbe;eip=0x001372; 	T(ADD(ax, bx));	// 24256 add     ax, bx ;~ 0DBE:1372
cs=0xdbe;eip=0x001374; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 24257 add     ax, [bp+arg_0] ;~ 0DBE:1374
cs=0xdbe;eip=0x001377; 	T(MOV(di, ax));	// 24258 mov     di, ax ;~ 0DBE:1377
cs=0xdbe;eip=0x001379; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 24259 mov     dx, [bp+arg_2] ;~ 0DBE:1379
cs=0xdbe;eip=0x00137c; 	T(SUB(dx, *(dw*)(raddr(ss,bp+arg_0))));	// 24260 sub     dx, [bp+arg_0] ;~ 0DBE:137C
cs=0xdbe;eip=0x00137f; 	T(INC(dx));	// 24261 inc     dx ;~ 0DBE:137F
cs=0xdbe;eip=0x001380; 	T(MOV(ds, word_34f10));	// 24262 mov     ds, word_34F10 ;~ 0DBE:1380
cs=0xdbe;eip=0x001384; 	T(MOV(bx, cx));	// 24263 mov     bx, cx ;~ 0DBE:1384
loc_1d546:
	// 5848 
cs=0xdbe;eip=0x001386; 	X(PUSH(di));	// 24266 push    di ;~ 0DBE:1386
cs=0xdbe;eip=0x001387; 	T(MOV(cx, dx));	// 24267 mov     cx, dx ;~ 0DBE:1387
cs=0xdbe;eip=0x001389; 	T(SHR(cx, 1));	// 24268 shr     cx, 1 ;~ 0DBE:1389
	// 24269 rep movsw ;~ 0DBE:138B
cs=0xdbe;eip=0x00138b; 	X(	REP MOVSW);	// 24269 rep movsw ;~ 0DBE:138B
cs=0xdbe;eip=0x00138d; 	R(JNC(loc_1d550));	// 24270 jnb     short loc_1D550 ;~ 0DBE:138D
cs=0xdbe;eip=0x00138f; 	X(MOVSB);	// 24271 movsb ;~ 0DBE:138F
loc_1d550:
	// 5849 
cs=0xdbe;eip=0x001390; 	X(POP(di));	// 24274 pop     di ;~ 0DBE:1390
cs=0xdbe;eip=0x001391; 	T(ADD(di, 0x140));	// 24275 add     di, 140h ;~ 0DBE:1391
cs=0xdbe;eip=0x001395; 	T(DEC(bx));	// 24276 dec     bx ;~ 0DBE:1395
cs=0xdbe;eip=0x001396; 	R(JNZ(loc_1d546));	// 24277 jnz     short loc_1D546 ;~ 0DBE:1396
cs=0xdbe;eip=0x001398; 	X(POP(es));	// 24278 pop     es ;~ 0DBE:1398
cs=0xdbe;eip=0x001399; 	X(POP(si));	// 24279 pop     si ;~ 0DBE:1399
cs=0xdbe;eip=0x00139a; 	X(POP(di));	// 24280 pop     di ;~ 0DBE:139A
cs=0xdbe;eip=0x00139b; 	X(POP(ds));	// 24281 pop     ds ;~ 0DBE:139B
cs=0xdbe;eip=0x00139c; 	X(POP(bp));	// 24282 pop     bp ;~ 0DBE:139C
cs=0xdbe;eip=0x00139d; 	R(RETF(0));	// 24283 retf ;~ 0DBE:139D
loc_1d55e:
	// 5850 
cs=0xdbe;eip=0x00139e; 	T(MOV(bx, cx));	// 24287 mov     bx, cx ;~ 0DBE:139E
cs=0xdbe;eip=0x0013a0; 	T(MOV(di, 0x3180));	// 24288 mov     di, 3180h ;~ 0DBE:13A0
cs=0xdbe;eip=0x0013a3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 24289 mov     ax, [bp+arg_0] ;~ 0DBE:13A3
cs=0xdbe;eip=0x0013a6; 	T(AND(ax, 0x0FFFC));	// 24290 and     ax, 0FFFCh ;~ 0DBE:13A6
cs=0xdbe;eip=0x0013a9; 	T(SHR(ax, 1));	// 24291 shr     ax, 1 ;~ 0DBE:13A9
cs=0xdbe;eip=0x0013ab; 	T(ADD(di, ax));	// 24292 add     di, ax ;~ 0DBE:13AB
cs=0xdbe;eip=0x0013ad; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 24293 mov     dx, [bp+arg_2] ;~ 0DBE:13AD
cs=0xdbe;eip=0x0013b0; 	T(ADD(dx, 3));	// 24294 add     dx, 3 ;~ 0DBE:13B0
cs=0xdbe;eip=0x0013b3; 	T(SHR(dx, 1));	// 24295 shr     dx, 1 ;~ 0DBE:13B3
cs=0xdbe;eip=0x0013b5; 	T(SHR(dx, 1));	// 24296 shr     dx, 1 ;~ 0DBE:13B5
cs=0xdbe;eip=0x0013b7; 	T(SHR(ax, 1));	// 24297 shr     ax, 1 ;~ 0DBE:13B7
cs=0xdbe;eip=0x0013b9; 	T(SUB(dx, ax));	// 24298 sub     dx, ax ;~ 0DBE:13B9
cs=0xdbe;eip=0x0013bb; 	T(MOV(ds, word_34f10));	// 24299 mov     ds, word_34F10 ;~ 0DBE:13BB
loc_1d57f:
	// 5851 
cs=0xdbe;eip=0x0013bf; 	X(PUSH(di));	// 24302 push    di ;~ 0DBE:13BF
cs=0xdbe;eip=0x0013c0; 	T(MOV(cx, dx));	// 24303 mov     cx, dx ;~ 0DBE:13C0
	// 24304 rep movsw ;~ 0DBE:13C2
cs=0xdbe;eip=0x0013c2; 	X(	REP MOVSW);	// 24304 rep movsw ;~ 0DBE:13C2
cs=0xdbe;eip=0x0013c4; 	X(POP(di));	// 24305 pop     di ;~ 0DBE:13C4
cs=0xdbe;eip=0x0013c5; 	T(ADD(di, 0x2000));	// 24306 add     di, 2000h ;~ 0DBE:13C5
cs=0xdbe;eip=0x0013c9; 	R(JNS(loc_1d58f));	// 24307 jns     short loc_1D58F ;~ 0DBE:13C9
cs=0xdbe;eip=0x0013cb; 	T(ADD(di, 0x80A0));	// 24308 add     di, 80A0h ;~ 0DBE:13CB
loc_1d58f:
	// 5852 
cs=0xdbe;eip=0x0013cf; 	T(DEC(bx));	// 24311 dec     bx ;~ 0DBE:13CF
cs=0xdbe;eip=0x0013d0; 	R(JNZ(loc_1d57f));	// 24312 jnz     short loc_1D57F ;~ 0DBE:13D0
cs=0xdbe;eip=0x0013d2; 	X(POP(es));	// 24313 pop     es ;~ 0DBE:13D2
cs=0xdbe;eip=0x0013d3; 	X(POP(si));	// 24314 pop     si ;~ 0DBE:13D3
cs=0xdbe;eip=0x0013d4; 	X(POP(di));	// 24315 pop     di ;~ 0DBE:13D4
cs=0xdbe;eip=0x0013d5; 	X(POP(ds));	// 24316 pop     ds ;~ 0DBE:13D5
cs=0xdbe;eip=0x0013d6; 	X(POP(bp));	// 24317 pop     bp ;~ 0DBE:13D6
cs=0xdbe;eip=0x0013d7; 	R(RETF(0));	// 24318 retf ;~ 0DBE:13D7
sub_1d598:
	// 24325 
cs=0xdbe;eip=0x0013d8; 	X(PUSH(ds));	// 24327 push    ds ;~ 0DBE:13D8
ret_dbe_13d9:
	// 5853 
cs=0xdbe;eip=0x0013d9; 	X(PUSH(es));	// 24328 push    es ;~ 0DBE:13D9
cs=0xdbe;eip=0x0013da; 	X(PUSH(si));	// 24329 push    si ;~ 0DBE:13DA
cs=0xdbe;eip=0x0013db; 	X(PUSH(di));	// 24330 push    di ;~ 0DBE:13DB
cs=0xdbe;eip=0x0013dc; 	X(PUSH(bp));	// 24331 push    bp ;~ 0DBE:13DC
cs=0xdbe;eip=0x0013dd; 	R(CALL(sub_1d98d,0));	// 24332 call    sub_1D98D ;~ 0DBE:13DD
cs=0xdbe;eip=0x0013e0; 	T(SUB(si, si));	// 24333 sub     si, si ;~ 0DBE:13E0
cs=0xdbe;eip=0x0013e2; 	T(MOV(cx, word_378d5));	// 24334 mov     cx, word_378D5 ;~ 0DBE:13E2
cs=0xdbe;eip=0x0013e6; 	T(SHR(cx, 1));	// 24335 shr     cx, 1 ;~ 0DBE:13E6
cs=0xdbe;eip=0x0013e8; 	T(SHR(cx, 1));	// 24336 shr     cx, 1 ;~ 0DBE:13E8
cs=0xdbe;eip=0x0013ea; 	T(SHR(cx, 1));	// 24337 shr     cx, 1 ;~ 0DBE:13EA
cs=0xdbe;eip=0x0013ec; 	T(SHR(cx, 1));	// 24338 shr     cx, 1 ;~ 0DBE:13EC
cs=0xdbe;eip=0x0013ee; 	T(SHR(cx, 1));	// 24339 shr     cx, 1 ;~ 0DBE:13EE
cs=0xdbe;eip=0x0013f0; 	T(INC(cx));	// 24340 inc     cx ;~ 0DBE:13F0
cs=0xdbe;eip=0x0013f1; 	T(SHR(cx, 1));	// 24341 shr     cx, 1 ;~ 0DBE:13F1
cs=0xdbe;eip=0x0013f3; 	T(MOV(ax, cx));	// 24342 mov     ax, cx ;~ 0DBE:13F3
cs=0xdbe;eip=0x0013f5; 	T(SUB(ax, 0x0A0));	// 24343 sub     ax, 0A0h ; ' ' ;~ 0DBE:13F5
cs=0xdbe;eip=0x0013f8; 	T(NEG(ax));	// 24344 neg     ax ;~ 0DBE:13F8
cs=0xdbe;eip=0x0013fa; 	T(MOV(bp, ax));	// 24345 mov     bp, ax ;~ 0DBE:13FA
cs=0xdbe;eip=0x0013fc; 	T(SHL(bp, 1));	// 24346 shl     bp, 1 ;~ 0DBE:13FC
cs=0xdbe;eip=0x0013fe; 	T(MOV(di, ax));	// 24347 mov     di, ax ;~ 0DBE:13FE
cs=0xdbe;eip=0x001400; 	T(MOV(ax, word_34f1c));	// 24348 mov     ax, word_34F1C ;~ 0DBE:1400
cs=0xdbe;eip=0x001403; 	T(XCHG(al, ah));	// 24349 xchg    al, ah ;~ 0DBE:1403
cs=0xdbe;eip=0x001405; 	T(ADD(di, ax));	// 24350 add     di, ax ;~ 0DBE:1405
cs=0xdbe;eip=0x001407; 	T(MOV(dx, word_378d1));	// 24351 mov     dx, word_378D1 ;~ 0DBE:1407
cs=0xdbe;eip=0x00140b; 	T(MOV(ax, dx));	// 24352 mov     ax, dx ;~ 0DBE:140B
cs=0xdbe;eip=0x00140d; 	T(SUB(ax, 0x60));	// 24353 sub     ax, 60h ; '`' ;~ 0DBE:140D
cs=0xdbe;eip=0x001410; 	T(NEG(ax));	// 24354 neg     ax ;~ 0DBE:1410
cs=0xdbe;eip=0x001412; 	T(SHR(ax, 1));	// 24355 shr     ax, 1 ;~ 0DBE:1412
cs=0xdbe;eip=0x001414; 	X(PUSH(ax));	// 24356 push    ax ;~ 0DBE:1414
cs=0xdbe;eip=0x001415; 	T(CMP(byte_2c804, 0));	// 24357 cmp     byte_2C804, 0 ;~ 0DBE:1415
cs=0xdbe;eip=0x00141a; 	R(JZ(loc_1d5e0));	// 24358 jz      short loc_1D5E0 ;~ 0DBE:141A
cs=0xdbe;eip=0x00141c; 	T(XCHG(al, ah));	// 24359 xchg    al, ah ;~ 0DBE:141C
cs=0xdbe;eip=0x00141e; 	T(ADD(di, ax));	// 24360 add     di, ax ;~ 0DBE:141E
loc_1d5e0:
	// 5854 
cs=0xdbe;eip=0x001420; 	T(MOV(ax, 0x15));	// 24363 mov     ax, 15h ;~ 0DBE:1420
cs=0xdbe;eip=0x001423; 	T(CMP(byte_378c2, 0));	// 24364 cmp     byte_378C2, 0 ;~ 0DBE:1423
cs=0xdbe;eip=0x001428; 	R(JNZ(loc_1d5fc));	// 24365 jnz     short loc_1D5FC ;~ 0DBE:1428
cs=0xdbe;eip=0x00142a; 	T(MOV(ax, word_37914));	// 24366 mov     ax, word_37914 ;~ 0DBE:142A
cs=0xdbe;eip=0x00142d; 	T(MOV(bx, ax));	// 24367 mov     bx, ax ;~ 0DBE:142D
cs=0xdbe;eip=0x00142f; 	T(CMP(ax, word_37916));	// 24368 cmp     ax, word_37916 ;~ 0DBE:142F
cs=0xdbe;eip=0x001433; 	R(JLE(loc_1d5f8));	// 24369 jle     short loc_1D5F8 ;~ 0DBE:1433
cs=0xdbe;eip=0x001435; 	T(MOV(ax, word_37916));	// 24370 mov     ax, word_37916 ;~ 0DBE:1435
loc_1d5f8:
	// 5855 
cs=0xdbe;eip=0x001438; 	X(MOV(word_37916, bx));	// 24373 mov     word_37916, bx ;~ 0DBE:1438
loc_1d5fc:
	// 5856 
cs=0xdbe;eip=0x00143c; 	X(POP(bx));	// 24376 pop     bx ;~ 0DBE:143C
cs=0xdbe;eip=0x00143d; 	T(SUB(ax, bx));	// 24377 sub     ax, bx ;~ 0DBE:143D
cs=0xdbe;eip=0x00143f; 	R(JS(loc_1d615));	// 24378 js      short loc_1D615 ;~ 0DBE:143F
cs=0xdbe;eip=0x001441; 	T(SUB(dx, ax));	// 24379 sub     dx, ax ;~ 0DBE:1441
cs=0xdbe;eip=0x001443; 	R(JS(loc_1d62f));	// 24380 js      short loc_1D62F ;~ 0DBE:1443
cs=0xdbe;eip=0x001445; 	R(JZ(loc_1d62f));	// 24381 jz      short loc_1D62F ;~ 0DBE:1445
cs=0xdbe;eip=0x001447; 	T(XCHG(al, ah));	// 24382 xchg    al, ah ;~ 0DBE:1447
cs=0xdbe;eip=0x001449; 	T(ADD(di, ax));	// 24383 add     di, ax ;~ 0DBE:1449
cs=0xdbe;eip=0x00144b; 	T(MOV(bx, ax));	// 24384 mov     bx, ax ;~ 0DBE:144B
cs=0xdbe;eip=0x00144d; 	T(SHR(ax, 1));	// 24385 shr     ax, 1 ;~ 0DBE:144D
cs=0xdbe;eip=0x00144f; 	T(SHR(ax, 1));	// 24386 shr     ax, 1 ;~ 0DBE:144F
cs=0xdbe;eip=0x001451; 	T(ADD(ax, bx));	// 24387 add     ax, bx ;~ 0DBE:1451
cs=0xdbe;eip=0x001453; 	T(ADD(si, ax));	// 24388 add     si, ax ;~ 0DBE:1453
loc_1d615:
	// 5857 
cs=0xdbe;eip=0x001455; 	T(MOV(es, word_34f0c));	// 24391 mov     es, word_34F0C ;~ 0DBE:1455
cs=0xdbe;eip=0x001459; 	T(MOV(bx, word_3a178));	// 24392 mov     bx, word_3A178 ;~ 0DBE:1459
cs=0xdbe;eip=0x00145d; 	T(CMP(bl, 0x0D));	// 24393 cmp     bl, 0Dh ;~ 0DBE:145D
cs=0xdbe;eip=0x001460; 	R(JZ(loc_1d635));	// 24394 jz      short loc_1D635 ;~ 0DBE:1460
cs=0xdbe;eip=0x001462; 	T(CMP(bl, 9));	// 24395 cmp     bl, 9 ;~ 0DBE:1462
cs=0xdbe;eip=0x001465; 	R(JZ(loc_1d63e));	// 24396 jz      short loc_1D63E ;~ 0DBE:1465
cs=0xdbe;eip=0x001467; 	T(CMP(bl, 0x13));	// 24397 cmp     bl, 13h ;~ 0DBE:1467
cs=0xdbe;eip=0x00146a; 	R(JNZ(loc_1d62f));	// 24398 jnz     short loc_1D62F ;~ 0DBE:146A
cs=0xdbe;eip=0x00146c; 	R(JMP(loc_1d709));	// 24399 jmp     loc_1D709 ;~ 0DBE:146C
loc_1d62f:
	// 5858 
cs=0xdbe;eip=0x00146f; 	X(POP(bp));	// 24404 pop     bp ;~ 0DBE:146F
cs=0xdbe;eip=0x001470; 	X(POP(di));	// 24405 pop     di ;~ 0DBE:1470
cs=0xdbe;eip=0x001471; 	X(POP(si));	// 24406 pop     si ;~ 0DBE:1471
cs=0xdbe;eip=0x001472; 	X(POP(es));	// 24407 pop     es ;~ 0DBE:1472
cs=0xdbe;eip=0x001473; 	X(POP(ds));	// 24408 pop     ds ;~ 0DBE:1473
cs=0xdbe;eip=0x001474; 	R(RETF(0));	// 24409 retf ;~ 0DBE:1474
loc_1d635:
	// 5859 
cs=0xdbe;eip=0x001475; 	R(CALL(sub_1daf0,0));	// 24413 call    sub_1DAF0 ;~ 0DBE:1475
cs=0xdbe;eip=0x001478; 	X(POP(bp));	// 24414 pop     bp ;~ 0DBE:1478
cs=0xdbe;eip=0x001479; 	X(POP(di));	// 24415 pop     di ;~ 0DBE:1479
cs=0xdbe;eip=0x00147a; 	X(POP(si));	// 24416 pop     si ;~ 0DBE:147A
cs=0xdbe;eip=0x00147b; 	X(POP(es));	// 24417 pop     es ;~ 0DBE:147B
cs=0xdbe;eip=0x00147c; 	X(POP(ds));	// 24418 pop     ds ;~ 0DBE:147C
cs=0xdbe;eip=0x00147d; 	R(RETF(0));	// 24419 retf ;~ 0DBE:147D
loc_1d63e:
	// 5860 
cs=0xdbe;eip=0x00147e; 	T(MOV(ax, di));	// 24423 mov     ax, di ;~ 0DBE:147E
cs=0xdbe;eip=0x001480; 	T(SHR(al, 1));	// 24424 shr     al, 1 ;~ 0DBE:1480
cs=0xdbe;eip=0x001482; 	T(MOV(di, ax));	// 24425 mov     di, ax ;~ 0DBE:1482
cs=0xdbe;eip=0x001484; 	T(SHR(cx, 1));	// 24426 shr     cx, 1 ;~ 0DBE:1484
cs=0xdbe;eip=0x001486; 	T(MOV(ax, di));	// 24427 mov     ax, di ;~ 0DBE:1486
cs=0xdbe;eip=0x001488; 	T(XCHG(al, ah));	// 24428 xchg    al, ah ;~ 0DBE:1488
cs=0xdbe;eip=0x00148a; 	T(MOV(bx, ax));	// 24429 mov     bx, ax ;~ 0DBE:148A
cs=0xdbe;eip=0x00148c; 	T(AND(bx, 3));	// 24430 and     bx, 3 ;~ 0DBE:148C
cs=0xdbe;eip=0x00148f; 	T(ROR(bx, 1));	// 24431 ror     bx, 1 ;~ 0DBE:148F
cs=0xdbe;eip=0x001491; 	T(ROR(bx, 1));	// 24432 ror     bx, 1 ;~ 0DBE:1491
cs=0xdbe;eip=0x001493; 	T(ROR(bx, 1));	// 24433 ror     bx, 1 ;~ 0DBE:1493
cs=0xdbe;eip=0x001495; 	T(AND(di, 0x0FF));	// 24434 and     di, 0FFh ;~ 0DBE:1495
cs=0xdbe;eip=0x001499; 	T(ADD(di, bx));	// 24435 add     di, bx ;~ 0DBE:1499
cs=0xdbe;eip=0x00149b; 	T(AND(ax, 0x0FC));	// 24436 and     ax, 0FCh ;~ 0DBE:149B
cs=0xdbe;eip=0x00149e; 	T(SHL(ax, 1));	// 24437 shl     ax, 1 ;~ 0DBE:149E
cs=0xdbe;eip=0x0014a0; 	T(SHL(ax, 1));	// 24438 shl     ax, 1 ;~ 0DBE:14A0
cs=0xdbe;eip=0x0014a2; 	T(SHL(ax, 1));	// 24439 shl     ax, 1 ;~ 0DBE:14A2
cs=0xdbe;eip=0x0014a4; 	T(ADD(di, ax));	// 24440 add     di, ax ;~ 0DBE:14A4
cs=0xdbe;eip=0x0014a6; 	T(SHL(ax, 1));	// 24441 shl     ax, 1 ;~ 0DBE:14A6
cs=0xdbe;eip=0x0014a8; 	T(SHL(ax, 1));	// 24442 shl     ax, 1 ;~ 0DBE:14A8
cs=0xdbe;eip=0x0014aa; 	T(ADD(di, ax));	// 24443 add     di, ax ;~ 0DBE:14AA
cs=0xdbe;eip=0x0014ac; 	T(CMP(byte_38ad2, 0));	// 24444 cmp     byte_38AD2, 0 ;~ 0DBE:14AC
cs=0xdbe;eip=0x0014b1; 	R(JZ(loc_1d676));	// 24445 jz      short loc_1D676 ;~ 0DBE:14B1
loc_1d673:
	// 5861 
cs=0xdbe;eip=0x0014b3; 	R(JMP(loc_1d6de));	// 24448 jmp     short loc_1D6DE ;~ 0DBE:14B3
loc_1d676:
	// 5862 
cs=0xdbe;eip=0x0014b6; 	T(MOV(dh, *(db*)(((db*)&word_378d1))));	// 24453 mov     dh, byte ptr word_378D1 ;~ 0DBE:14B6
cs=0xdbe;eip=0x0014ba; 	T(SUB(dh, dl));	// 24454 sub     dh, dl ;~ 0DBE:14BA
cs=0xdbe;eip=0x0014bc; 	T(CMP(dh, 0x0E));	// 24455 cmp     dh, 0Eh ;~ 0DBE:14BC
cs=0xdbe;eip=0x0014bf; 	R(JNC(loc_1d673));	// 24456 jnb     short loc_1D673 ;~ 0DBE:14BF
cs=0xdbe;eip=0x0014c1; 	X(PUSH(cx));	// 24457 push    cx ;~ 0DBE:14C1
cs=0xdbe;eip=0x0014c2; 	T(NEG(dh));	// 24458 neg     dh ;~ 0DBE:14C2
cs=0xdbe;eip=0x0014c4; 	T(ADD(dh, 0x0E));	// 24459 add     dh, 0Eh ;~ 0DBE:14C4
cs=0xdbe;eip=0x0014c7; 	X(PUSH(ds));	// 24460 push    ds ;~ 0DBE:14C7
cs=0xdbe;eip=0x0014c8; 	T(CMP(byte_3751c, 0));	// 24461 cmp     byte_3751C, 0 ;~ 0DBE:14C8
cs=0xdbe;eip=0x0014cd; 	T(MOV(ds, word_34f10));	// 24462 mov     ds, word_34F10 ;~ 0DBE:14CD
cs=0xdbe;eip=0x0014d1; 	R(JZ(loc_1d6ba));	// 24463 jz      short loc_1D6BA ;~ 0DBE:14D1
loc_1d693:
	// 5863 
cs=0xdbe;eip=0x0014d3; 	T(MOV(cx, 0x2004));	// 24466 mov     cx, 2004h ;~ 0DBE:14D3
cs=0xdbe;eip=0x0014d6; 	R(CALL(sub_1d8b8,0));	// 24467 call    sub_1D8B8 ;~ 0DBE:14D6
cs=0xdbe;eip=0x0014d9; 	T(ADD(si, 0x58));	// 24468 add     si, 58h ; 'X' ;~ 0DBE:14D9
cs=0xdbe;eip=0x0014dc; 	T(ADD(di, 0x2C));	// 24469 add     di, 2Ch ; ',' ;~ 0DBE:14DC
cs=0xdbe;eip=0x0014df; 	T(MOV(cx, 0x604));	// 24470 mov     cx, 604h ;~ 0DBE:14DF
cs=0xdbe;eip=0x0014e2; 	R(CALL(sub_1d8b8,0));	// 24471 call    sub_1D8B8 ;~ 0DBE:14E2
cs=0xdbe;eip=0x0014e5; 	T(ADD(di, 0x1F88));	// 24472 add     di, 1F88h ;~ 0DBE:14E5
cs=0xdbe;eip=0x0014e9; 	R(JNS(loc_1d6af));	// 24473 jns     short loc_1D6AF ;~ 0DBE:14E9
cs=0xdbe;eip=0x0014eb; 	T(ADD(di, 0x80A0));	// 24474 add     di, 80A0h ;~ 0DBE:14EB
loc_1d6af:
	// 5864 
cs=0xdbe;eip=0x0014ef; 	T(ADD(si, 0x50));	// 24477 add     si, 50h ; 'P' ;~ 0DBE:14EF
cs=0xdbe;eip=0x0014f2; 	T(DEC(dl));	// 24478 dec     dl ;~ 0DBE:14F2
cs=0xdbe;eip=0x0014f4; 	T(DEC(dh));	// 24479 dec     dh ;~ 0DBE:14F4
cs=0xdbe;eip=0x0014f6; 	R(JNZ(loc_1d693));	// 24480 jnz     short loc_1D693 ;~ 0DBE:14F6
cs=0xdbe;eip=0x0014f8; 	R(JMP(loc_1d6dc));	// 24481 jmp     short loc_1D6DC ;~ 0DBE:14F8
loc_1d6ba:
	// 5865 
cs=0xdbe;eip=0x0014fa; 	T(MOV(cx, 0x2A04));	// 24486 mov     cx, 2A04h ;~ 0DBE:14FA
cs=0xdbe;eip=0x0014fd; 	R(CALL(sub_1d8b8,0));	// 24487 call    sub_1D8B8 ;~ 0DBE:14FD
cs=0xdbe;eip=0x001500; 	T(ADD(si, 0x58));	// 24488 add     si, 58h ; 'X' ;~ 0DBE:1500
cs=0xdbe;eip=0x001503; 	T(ADD(di, 0x2C));	// 24489 add     di, 2Ch ; ',' ;~ 0DBE:1503
cs=0xdbe;eip=0x001506; 	T(MOV(cx, 0x1004));	// 24490 mov     cx, 1004h ;~ 0DBE:1506
cs=0xdbe;eip=0x001509; 	R(CALL(sub_1d8b8,0));	// 24491 call    sub_1D8B8 ;~ 0DBE:1509
cs=0xdbe;eip=0x00150c; 	T(ADD(di, 0x1F60));	// 24492 add     di, 1F60h ;~ 0DBE:150C
cs=0xdbe;eip=0x001510; 	R(JNS(loc_1d6d6));	// 24493 jns     short loc_1D6D6 ;~ 0DBE:1510
cs=0xdbe;eip=0x001512; 	T(ADD(di, 0x80A0));	// 24494 add     di, 80A0h ;~ 0DBE:1512
loc_1d6d6:
	// 5866 
cs=0xdbe;eip=0x001516; 	T(DEC(dl));	// 24497 dec     dl ;~ 0DBE:1516
cs=0xdbe;eip=0x001518; 	T(DEC(dh));	// 24498 dec     dh ;~ 0DBE:1518
cs=0xdbe;eip=0x00151a; 	R(JNZ(loc_1d6ba));	// 24499 jnz     short loc_1D6BA ;~ 0DBE:151A
loc_1d6dc:
	// 5867 
cs=0xdbe;eip=0x00151c; 	X(POP(ds));	// 24502 pop     ds ;~ 0DBE:151C
cs=0xdbe;eip=0x00151d; 	X(POP(cx));	// 24503 pop     cx ;~ 0DBE:151D
loc_1d6de:
	// 5868 
cs=0xdbe;eip=0x00151e; 	T(MOV(ds, word_34f10));	// 24506 mov     ds, word_34F10 ;~ 0DBE:151E
cs=0xdbe;eip=0x001522; 	T(MOV(dh, cl));	// 24507 mov     dh, cl ;~ 0DBE:1522
cs=0xdbe;eip=0x001524; 	T(MOV(cl, 4));	// 24508 mov     cl, 4 ;~ 0DBE:1524
loc_1d6e6:
	// 5869 
cs=0xdbe;eip=0x001526; 	T(MOV(ch, dh));	// 24511 mov     ch, dh ;~ 0DBE:1526
cs=0xdbe;eip=0x001528; 	R(CALL(sub_1d8b8,0));	// 24512 call    sub_1D8B8 ;~ 0DBE:1528
cs=0xdbe;eip=0x00152b; 	T(ADD(si, bp));	// 24513 add     si, bp ;~ 0DBE:152B
cs=0xdbe;eip=0x00152d; 	T(MOV(bl, dh));	// 24514 mov     bl, dh ;~ 0DBE:152D
cs=0xdbe;eip=0x00152f; 	T(SUB(bh, bh));	// 24515 sub     bh, bh ;~ 0DBE:152F
cs=0xdbe;eip=0x001531; 	T(SUB(di, bx));	// 24516 sub     di, bx ;~ 0DBE:1531
cs=0xdbe;eip=0x001533; 	T(SUB(di, bx));	// 24517 sub     di, bx ;~ 0DBE:1533
cs=0xdbe;eip=0x001535; 	T(ADD(di, 0x2000));	// 24518 add     di, 2000h ;~ 0DBE:1535
cs=0xdbe;eip=0x001539; 	R(JNS(loc_1d6ff));	// 24519 jns     short loc_1D6FF ;~ 0DBE:1539
cs=0xdbe;eip=0x00153b; 	T(ADD(di, 0x80A0));	// 24520 add     di, 80A0h ;~ 0DBE:153B
loc_1d6ff:
	// 5870 
cs=0xdbe;eip=0x00153f; 	T(DEC(dl));	// 24523 dec     dl ;~ 0DBE:153F
cs=0xdbe;eip=0x001541; 	R(JNZ(loc_1d6e6));	// 24524 jnz     short loc_1D6E6 ;~ 0DBE:1541
cs=0xdbe;eip=0x001543; 	X(POP(bp));	// 24525 pop     bp ;~ 0DBE:1543
cs=0xdbe;eip=0x001544; 	X(POP(di));	// 24526 pop     di ;~ 0DBE:1544
cs=0xdbe;eip=0x001545; 	X(POP(si));	// 24527 pop     si ;~ 0DBE:1545
cs=0xdbe;eip=0x001546; 	X(POP(es));	// 24528 pop     es ;~ 0DBE:1546
cs=0xdbe;eip=0x001547; 	X(POP(ds));	// 24529 pop     ds ;~ 0DBE:1547
cs=0xdbe;eip=0x001548; 	R(RETF(0));	// 24530 retf ;~ 0DBE:1548
loc_1d709:
	// 5871 
cs=0xdbe;eip=0x001549; 	T(MOV(ax, di));	// 24534 mov     ax, di ;~ 0DBE:1549
cs=0xdbe;eip=0x00154b; 	T(SUB(al, al));	// 24535 sub     al, al ;~ 0DBE:154B
cs=0xdbe;eip=0x00154d; 	T(SHR(ax, 1));	// 24536 shr     ax, 1 ;~ 0DBE:154D
cs=0xdbe;eip=0x00154f; 	T(SHR(ax, 1));	// 24537 shr     ax, 1 ;~ 0DBE:154F
cs=0xdbe;eip=0x001551; 	T(ADD(di, ax));	// 24538 add     di, ax ;~ 0DBE:1551
cs=0xdbe;eip=0x001553; 	T(CMP(byte_38ad2, 0));	// 24539 cmp     byte_38AD2, 0 ;~ 0DBE:1553
cs=0xdbe;eip=0x001558; 	R(JZ(loc_1d71d));	// 24540 jz      short loc_1D71D ;~ 0DBE:1558
loc_1d71a:
	// 5872 
cs=0xdbe;eip=0x00155a; 	R(JMP(loc_1d76f));	// 24543 jmp     short loc_1D76F ;~ 0DBE:155A
loc_1d71d:
	// 5873 
cs=0xdbe;eip=0x00155d; 	T(MOV(dh, *(db*)(((db*)&word_378d1))));	// 24549 mov     dh, byte ptr word_378D1 ;~ 0DBE:155D
cs=0xdbe;eip=0x001561; 	T(SUB(dh, dl));	// 24550 sub     dh, dl ;~ 0DBE:1561
cs=0xdbe;eip=0x001563; 	T(CMP(dh, 0x0E));	// 24551 cmp     dh, 0Eh ;~ 0DBE:1563
cs=0xdbe;eip=0x001566; 	R(JNC(loc_1d71a));	// 24552 jnb     short loc_1D71A ;~ 0DBE:1566
cs=0xdbe;eip=0x001568; 	X(PUSH(cx));	// 24553 push    cx ;~ 0DBE:1568
cs=0xdbe;eip=0x001569; 	T(NEG(dh));	// 24554 neg     dh ;~ 0DBE:1569
cs=0xdbe;eip=0x00156b; 	T(ADD(dh, 0x0E));	// 24555 add     dh, 0Eh ;~ 0DBE:156B
cs=0xdbe;eip=0x00156e; 	X(PUSH(ds));	// 24556 push    ds ;~ 0DBE:156E
cs=0xdbe;eip=0x00156f; 	T(MOV(bx, 0x58));	// 24557 mov     bx, 58h ; 'X' ;~ 0DBE:156F
cs=0xdbe;eip=0x001572; 	T(CMP(byte_3751c, 0));	// 24558 cmp     byte_3751C, 0 ;~ 0DBE:1572
cs=0xdbe;eip=0x001577; 	T(MOV(ds, word_34f10));	// 24559 mov     ds, word_34F10 ;~ 0DBE:1577
cs=0xdbe;eip=0x00157b; 	R(JZ(loc_1d759));	// 24560 jz      short loc_1D759 ;~ 0DBE:157B
loc_1d73d:
	// 5874 
cs=0xdbe;eip=0x00157d; 	T(MOV(cx, 0x40));	// 24563 mov     cx, 40h ; '@' ;~ 0DBE:157D
	// 24564 rep movsw ;~ 0DBE:1580
cs=0xdbe;eip=0x001580; 	X(	REP MOVSW);	// 24564 rep movsw ;~ 0DBE:1580
cs=0xdbe;eip=0x001582; 	T(ADD(si, bx));	// 24565 add     si, bx ;~ 0DBE:1582
cs=0xdbe;eip=0x001584; 	T(ADD(di, bx));	// 24566 add     di, bx ;~ 0DBE:1584
cs=0xdbe;eip=0x001586; 	T(MOV(cx, 0x0C));	// 24567 mov     cx, 0Ch ;~ 0DBE:1586
	// 24568 rep movsw ;~ 0DBE:1589
cs=0xdbe;eip=0x001589; 	X(	REP MOVSW);	// 24568 rep movsw ;~ 0DBE:1589
cs=0xdbe;eip=0x00158b; 	T(ADD(di, 0x50));	// 24569 add     di, 50h ; 'P' ;~ 0DBE:158B
cs=0xdbe;eip=0x00158e; 	T(ADD(si, 0x50));	// 24570 add     si, 50h ; 'P' ;~ 0DBE:158E
cs=0xdbe;eip=0x001591; 	T(DEC(dl));	// 24571 dec     dl ;~ 0DBE:1591
cs=0xdbe;eip=0x001593; 	T(DEC(dh));	// 24572 dec     dh ;~ 0DBE:1593
cs=0xdbe;eip=0x001595; 	R(JNZ(loc_1d73d));	// 24573 jnz     short loc_1D73D ;~ 0DBE:1595
cs=0xdbe;eip=0x001597; 	R(JMP(loc_1d76d));	// 24574 jmp     short loc_1D76D ;~ 0DBE:1597
loc_1d759:
	// 5875 
cs=0xdbe;eip=0x001599; 	T(MOV(cx, 0x54));	// 24579 mov     cx, 54h ; 'T' ;~ 0DBE:1599
	// 24580 rep movsw ;~ 0DBE:159C
cs=0xdbe;eip=0x00159c; 	X(	REP MOVSW);	// 24580 rep movsw ;~ 0DBE:159C
cs=0xdbe;eip=0x00159e; 	T(ADD(si, bx));	// 24581 add     si, bx ;~ 0DBE:159E
cs=0xdbe;eip=0x0015a0; 	T(ADD(di, bx));	// 24582 add     di, bx ;~ 0DBE:15A0
cs=0xdbe;eip=0x0015a2; 	T(MOV(cx, 0x20));	// 24583 mov     cx, 20h ; ' ' ;~ 0DBE:15A2
	// 24584 rep movsw ;~ 0DBE:15A5
cs=0xdbe;eip=0x0015a5; 	X(	REP MOVSW);	// 24584 rep movsw ;~ 0DBE:15A5
cs=0xdbe;eip=0x0015a7; 	T(DEC(dl));	// 24585 dec     dl ;~ 0DBE:15A7
cs=0xdbe;eip=0x0015a9; 	T(DEC(dh));	// 24586 dec     dh ;~ 0DBE:15A9
cs=0xdbe;eip=0x0015ab; 	R(JNZ(loc_1d759));	// 24587 jnz     short loc_1D759 ;~ 0DBE:15AB
loc_1d76d:
	// 5876 
cs=0xdbe;eip=0x0015ad; 	X(POP(ds));	// 24590 pop     ds ;~ 0DBE:15AD
cs=0xdbe;eip=0x0015ae; 	X(POP(cx));	// 24591 pop     cx ;~ 0DBE:15AE
loc_1d76f:
	// 5877 
cs=0xdbe;eip=0x0015af; 	T(MOV(ds, word_34f10));	// 24594 mov     ds, word_34F10 ;~ 0DBE:15AF
loc_1d773:
	// 5878 
cs=0xdbe;eip=0x0015b3; 	T(MOV(bx, cx));	// 24597 mov     bx, cx ;~ 0DBE:15B3
	// 24598 rep movsw ;~ 0DBE:15B5
cs=0xdbe;eip=0x0015b5; 	X(	REP MOVSW);	// 24598 rep movsw ;~ 0DBE:15B5
cs=0xdbe;eip=0x0015b7; 	T(MOV(cx, bx));	// 24599 mov     cx, bx ;~ 0DBE:15B7
cs=0xdbe;eip=0x0015b9; 	T(ADD(si, bp));	// 24600 add     si, bp ;~ 0DBE:15B9
cs=0xdbe;eip=0x0015bb; 	T(ADD(di, bp));	// 24601 add     di, bp ;~ 0DBE:15BB
cs=0xdbe;eip=0x0015bd; 	T(DEC(dl));	// 24602 dec     dl ;~ 0DBE:15BD
cs=0xdbe;eip=0x0015bf; 	R(JNZ(loc_1d773));	// 24603 jnz     short loc_1D773 ;~ 0DBE:15BF
cs=0xdbe;eip=0x0015c1; 	X(POP(bp));	// 24604 pop     bp ;~ 0DBE:15C1
cs=0xdbe;eip=0x0015c2; 	X(POP(di));	// 24605 pop     di ;~ 0DBE:15C2
cs=0xdbe;eip=0x0015c3; 	X(POP(si));	// 24606 pop     si ;~ 0DBE:15C3
cs=0xdbe;eip=0x0015c4; 	X(POP(es));	// 24607 pop     es ;~ 0DBE:15C4
cs=0xdbe;eip=0x0015c5; 	X(POP(ds));	// 24608 pop     ds ;~ 0DBE:15C5
cs=0xdbe;eip=0x0015c6; 	R(RETF(0));	// 24609 retf ;~ 0DBE:15C6
sub_1d787:
	// 24616 
cs=0xdbe;eip=0x0015c7; 	X(PUSH(si));	// 24617 push    si ;~ 0DBE:15C7
ret_dbe_15c8:
	// 5879 
cs=0xdbe;eip=0x0015c8; 	X(PUSH(di));	// 24618 push    di ;~ 0DBE:15C8
cs=0xdbe;eip=0x0015c9; 	X(PUSH(es));	// 24619 push    es ;~ 0DBE:15C9
cs=0xdbe;eip=0x0015ca; 	X(PUSH(ds));	// 24620 push    ds ;~ 0DBE:15CA
cs=0xdbe;eip=0x0015cb; 	X(PUSH(bp));	// 24621 push    bp ;~ 0DBE:15CB
cs=0xdbe;eip=0x0015cc; 	T(SUB(si, si));	// 24622 sub     si, si ;~ 0DBE:15CC
cs=0xdbe;eip=0x0015ce; 	T(MOV(bx, word_2beda));	// 24623 mov     bx, word_2BEDA ;~ 0DBE:15CE
cs=0xdbe;eip=0x0015d2; 	T(SHL(bx, 1));	// 24624 shl     bx, 1 ;~ 0DBE:15D2
cs=0xdbe;eip=0x0015d4; 	T(MOV(es, *(dw*)(raddr(ds,bx-0x6F34))));	// 24625 mov     es, word ptr [bx-6F34h] ;~ 0DBE:15D4
cs=0xdbe;eip=0x0015d8; 	T(MOV(bx, word_3a178));	// 24626 mov     bx, word_3A178 ;~ 0DBE:15D8
cs=0xdbe;eip=0x0015dc; 	T(CMP(bl, 0x0D));	// 24627 cmp     bl, 0Dh ;~ 0DBE:15DC
cs=0xdbe;eip=0x0015df; 	R(JZ(loc_1d7dd));	// 24628 jz      short loc_1D7DD ;~ 0DBE:15DF
cs=0xdbe;eip=0x0015e1; 	T(CMP(bl, 9));	// 24629 cmp     bl, 9 ;~ 0DBE:15E1
cs=0xdbe;eip=0x0015e4; 	R(JZ(loc_1d7b1));	// 24630 jz      short loc_1D7B1 ;~ 0DBE:15E4
cs=0xdbe;eip=0x0015e6; 	T(CMP(bl, 0x13));	// 24631 cmp     bl, 13h ;~ 0DBE:15E6
cs=0xdbe;eip=0x0015e9; 	R(JZ(loc_1d7b4));	// 24632 jz      short loc_1D7B4 ;~ 0DBE:15E9
cs=0xdbe;eip=0x0015eb; 	X(POP(bp));	// 24633 pop     bp ;~ 0DBE:15EB
cs=0xdbe;eip=0x0015ec; 	X(POP(ds));	// 24634 pop     ds ;~ 0DBE:15EC
cs=0xdbe;eip=0x0015ed; 	X(POP(es));	// 24635 pop     es ;~ 0DBE:15ED
cs=0xdbe;eip=0x0015ee; 	X(POP(di));	// 24636 pop     di ;~ 0DBE:15EE
cs=0xdbe;eip=0x0015ef; 	X(POP(si));	// 24637 pop     si ;~ 0DBE:15EF
cs=0xdbe;eip=0x0015f0; 	R(RETF(0));	// 24638 retf ;~ 0DBE:15F0
loc_1d7b1:
	// 5880 
cs=0xdbe;eip=0x0015f1; 	R(JMP(loc_1d86b));	// 24642 jmp     loc_1D86B ;~ 0DBE:15F1
loc_1d7b4:
	// 5881 
cs=0xdbe;eip=0x0015f4; 	T(MOV(di, 0x13E));	// 24646 mov     di, 13Eh ;~ 0DBE:15F4
cs=0xdbe;eip=0x0015f7; 	T(MOV(ax, es));	// 24647 mov     ax, es ;~ 0DBE:15F7
cs=0xdbe;eip=0x0015f9; 	T(MOV(ds, ax));	// 24648 mov     ds, ax ;~ 0DBE:15F9
cs=0xdbe;eip=0x0015fb; 	T(MOV(bl, 0x0C8));	// 24649 mov     bl, 0C8h ; 'È' ;~ 0DBE:15FB
loc_1d7bd:
	// 5882 
cs=0xdbe;eip=0x0015fd; 	T(MOV(cx, 0x50));	// 24652 mov     cx, 50h ; 'P' ;~ 0DBE:15FD
loc_1d7c0:
	// 5883 
cs=0xdbe;eip=0x001600; 	T(LODSW);	// 24655 lodsw ;~ 0DBE:1600
cs=0xdbe;eip=0x001601; 	T(XCHG(al, ah));	// 24656 xchg    al, ah ;~ 0DBE:1601
cs=0xdbe;eip=0x001603; 	X(MOV(*(dw*)(raddr(es,di)), ax));	// 24657 mov     es:[di], ax ;~ 0DBE:1603
cs=0xdbe;eip=0x001606; 	T(SUB(di, 2));	// 24658 sub     di, 2 ;~ 0DBE:1606
cs=0xdbe;eip=0x001609; 	R(LOOP(loc_1d7c0));	// 24659 loop    loc_1D7C0 ;~ 0DBE:1609
cs=0xdbe;eip=0x00160b; 	T(ADD(si, 0x0A0));	// 24660 add     si, 0A0h ; ' ' ;~ 0DBE:160B
cs=0xdbe;eip=0x00160f; 	T(ADD(di, 0x1E0));	// 24661 add     di, 1E0h ;~ 0DBE:160F
cs=0xdbe;eip=0x001613; 	T(DEC(bl));	// 24662 dec     bl ;~ 0DBE:1613
cs=0xdbe;eip=0x001615; 	R(JNZ(loc_1d7bd));	// 24663 jnz     short loc_1D7BD ;~ 0DBE:1615
cs=0xdbe;eip=0x001617; 	X(POP(bp));	// 24664 pop     bp ;~ 0DBE:1617
cs=0xdbe;eip=0x001618; 	X(POP(ds));	// 24665 pop     ds ;~ 0DBE:1618
cs=0xdbe;eip=0x001619; 	X(POP(es));	// 24666 pop     es ;~ 0DBE:1619
cs=0xdbe;eip=0x00161a; 	X(POP(di));	// 24667 pop     di ;~ 0DBE:161A
cs=0xdbe;eip=0x00161b; 	X(POP(si));	// 24668 pop     si ;~ 0DBE:161B
cs=0xdbe;eip=0x00161c; 	R(RETF(0));	// 24669 retf ;~ 0DBE:161C
loc_1d7dd:
	// 5884 
cs=0xdbe;eip=0x00161d; 	T(MOV(bl, 0x0C8));	// 24673 mov     bl, 0C8h ; 'È' ;~ 0DBE:161D
cs=0xdbe;eip=0x00161f; 	T(MOV(di, 0x27));	// 24674 mov     di, 27h ; ''' ;~ 0DBE:161F
cs=0xdbe;eip=0x001622; 	T(MOV(dx, 0x3CE));	// 24675 mov     dx, 3CEh ;~ 0DBE:1622
cs=0xdbe;eip=0x001625; 	T(MOV(ax, 5));	// 24676 mov     ax, 5 ;~ 0DBE:1625
cs=0xdbe;eip=0x001628; 	R(OUT(dx, ax));	// 24677 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:1628
cs=0xdbe;eip=0x001629; 	T(MOV(ax, 1));	// 24684 mov     ax, 1 ;~ 0DBE:1629
cs=0xdbe;eip=0x00162c; 	R(OUT(dx, ax));	// 24685 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:162C
cs=0xdbe;eip=0x00162d; 	T(MOV(ax, 0x0FF08));	// 24687 mov     ax, 0FF08h ;~ 0DBE:162D
cs=0xdbe;eip=0x001630; 	R(OUT(dx, ax));	// 24688 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:1630
cs=0xdbe;eip=0x001631; 	T(MOV(ax, 3));	// 24690 mov     ax, 3 ;~ 0DBE:1631
cs=0xdbe;eip=0x001634; 	R(OUT(dx, ax));	// 24691 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:1634
loc_1d7f5:
	// 5885 
cs=0xdbe;eip=0x001635; 	T(MOV(bh, 0x14));	// 24698 mov     bh, 14h ;~ 0DBE:1635
loc_1d7f7:
	// 5886 
cs=0xdbe;eip=0x001637; 	X(PUSH(bx));	// 24701 push    bx ;~ 0DBE:1637
cs=0xdbe;eip=0x001638; 	T(MOV(dx, 0x3CE));	// 24702 mov     dx, 3CEh ;~ 0DBE:1638
cs=0xdbe;eip=0x00163b; 	T(MOV(ax, 4));	// 24703 mov     ax, 4 ;~ 0DBE:163B
cs=0xdbe;eip=0x00163e; 	R(OUT(dx, ax));	// 24704 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:163E
cs=0xdbe;eip=0x00163f; 	T(MOV(bl, *(raddr(es,si))));	// 24707 mov     bl, es:[si] ;~ 0DBE:163F
cs=0xdbe;eip=0x001642; 	T(MOV(ax, 0x104));	// 24708 mov     ax, 104h ;~ 0DBE:1642
cs=0xdbe;eip=0x001645; 	R(OUT(dx, ax));	// 24709 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:1645
cs=0xdbe;eip=0x001646; 	T(MOV(bh, *(raddr(es,si))));	// 24711 mov     bh, es:[si] ;~ 0DBE:1646
cs=0xdbe;eip=0x001649; 	T(MOV(ax, 0x204));	// 24712 mov     ax, 204h ;~ 0DBE:1649
cs=0xdbe;eip=0x00164c; 	R(OUT(dx, ax));	// 24713 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:164C
cs=0xdbe;eip=0x00164d; 	T(MOV(cl, *(raddr(es,si))));	// 24715 mov     cl, es:[si] ;~ 0DBE:164D
cs=0xdbe;eip=0x001650; 	T(MOV(ax, 0x304));	// 24716 mov     ax, 304h ;~ 0DBE:1650
cs=0xdbe;eip=0x001653; 	R(OUT(dx, ax));	// 24717 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:1653
cs=0xdbe;eip=0x001654; 	T(MOV(ch, *(raddr(es,si))));	// 24719 mov     ch, es:[si] ;~ 0DBE:1654
cs=0xdbe;eip=0x001657; 	T(MOV(bp, 8));	// 24720 mov     bp, 8 ;~ 0DBE:1657
cs=0xdbe;eip=0x00165a; 	T(SUB(dx, dx));	// 24721 sub     dx, dx ;~ 0DBE:165A
cs=0xdbe;eip=0x00165c; 	T(SUB(ax, ax));	// 24722 sub     ax, ax ;~ 0DBE:165C
loc_1d81e:
	// 5887 
cs=0xdbe;eip=0x00165e; 	T(SHR(bl, 1));	// 24725 shr     bl, 1 ;~ 0DBE:165E
cs=0xdbe;eip=0x001660; 	T(RCL(al, 1));	// 24726 rcl     al, 1 ;~ 0DBE:1660
cs=0xdbe;eip=0x001662; 	T(SHR(bh, 1));	// 24727 shr     bh, 1 ;~ 0DBE:1662
cs=0xdbe;eip=0x001664; 	T(RCL(ah, 1));	// 24728 rcl     ah, 1 ;~ 0DBE:1664
cs=0xdbe;eip=0x001666; 	T(SHR(cl, 1));	// 24729 shr     cl, 1 ;~ 0DBE:1666
cs=0xdbe;eip=0x001668; 	T(RCL(dl, 1));	// 24730 rcl     dl, 1 ;~ 0DBE:1668
cs=0xdbe;eip=0x00166a; 	T(SHR(ch, 1));	// 24731 shr     ch, 1 ;~ 0DBE:166A
cs=0xdbe;eip=0x00166c; 	T(RCL(dh, 1));	// 24732 rcl     dh, 1 ;~ 0DBE:166C
cs=0xdbe;eip=0x00166e; 	T(DEC(bp));	// 24733 dec     bp ;~ 0DBE:166E
cs=0xdbe;eip=0x00166f; 	R(JNZ(loc_1d81e));	// 24734 jnz     short loc_1D81E ;~ 0DBE:166F
cs=0xdbe;eip=0x001671; 	T(MOV(bx, ax));	// 24735 mov     bx, ax ;~ 0DBE:1671
cs=0xdbe;eip=0x001673; 	T(MOV(cx, dx));	// 24736 mov     cx, dx ;~ 0DBE:1673
cs=0xdbe;eip=0x001675; 	T(MOV(dx, 0x3C4));	// 24737 mov     dx, 3C4h ;~ 0DBE:1675
cs=0xdbe;eip=0x001678; 	T(MOV(ax, 0x102));	// 24738 mov     ax, 102h ;~ 0DBE:1678
cs=0xdbe;eip=0x00167b; 	R(OUT(dx, ax));	// 24739 out     dx, ax          ; EGA: sequencer address reg ;~ 0DBE:167B
cs=0xdbe;eip=0x00167c; 	X(MOV(*(raddr(es,di)), bl));	// 24741 mov     es:[di], bl ;~ 0DBE:167C
cs=0xdbe;eip=0x00167f; 	T(MOV(ax, 0x202));	// 24742 mov     ax, 202h ;~ 0DBE:167F
cs=0xdbe;eip=0x001682; 	R(OUT(dx, ax));	// 24743 out     dx, ax          ; EGA: sequencer address reg ;~ 0DBE:1682
cs=0xdbe;eip=0x001683; 	X(MOV(*(raddr(es,di)), bh));	// 24745 mov     es:[di], bh ;~ 0DBE:1683
cs=0xdbe;eip=0x001686; 	T(MOV(ax, 0x402));	// 24746 mov     ax, 402h ;~ 0DBE:1686
cs=0xdbe;eip=0x001689; 	R(OUT(dx, ax));	// 24747 out     dx, ax          ; EGA: sequencer address reg ;~ 0DBE:1689
cs=0xdbe;eip=0x00168a; 	X(MOV(*(raddr(es,di)), cl));	// 24749 mov     es:[di], cl ;~ 0DBE:168A
cs=0xdbe;eip=0x00168d; 	T(MOV(ax, 0x802));	// 24750 mov     ax, 802h ;~ 0DBE:168D
cs=0xdbe;eip=0x001690; 	R(OUT(dx, ax));	// 24751 out     dx, ax          ; EGA: sequencer address reg ;~ 0DBE:1690
cs=0xdbe;eip=0x001691; 	X(MOV(*(raddr(es,di)), ch));	// 24753 mov     es:[di], ch ;~ 0DBE:1691
cs=0xdbe;eip=0x001694; 	T(INC(si));	// 24754 inc     si ;~ 0DBE:1694
cs=0xdbe;eip=0x001695; 	T(DEC(di));	// 24755 dec     di ;~ 0DBE:1695
cs=0xdbe;eip=0x001696; 	X(POP(bx));	// 24756 pop     bx ;~ 0DBE:1696
cs=0xdbe;eip=0x001697; 	T(DEC(bh));	// 24757 dec     bh ;~ 0DBE:1697
cs=0xdbe;eip=0x001699; 	R(JNZ(loc_1d7f7));	// 24758 jnz     short loc_1D7F7 ;~ 0DBE:1699
cs=0xdbe;eip=0x00169b; 	T(ADD(si, 0x14));	// 24759 add     si, 14h ;~ 0DBE:169B
cs=0xdbe;eip=0x00169e; 	T(ADD(di, 0x3C));	// 24760 add     di, 3Ch ; '<' ;~ 0DBE:169E
cs=0xdbe;eip=0x0016a1; 	T(DEC(bl));	// 24761 dec     bl ;~ 0DBE:16A1
cs=0xdbe;eip=0x0016a3; 	R(JNZ(loc_1d7f5));	// 24762 jnz     short loc_1D7F5 ;~ 0DBE:16A3
cs=0xdbe;eip=0x0016a5; 	X(POP(bp));	// 24763 pop     bp ;~ 0DBE:16A5
cs=0xdbe;eip=0x0016a6; 	X(POP(ds));	// 24764 pop     ds ;~ 0DBE:16A6
cs=0xdbe;eip=0x0016a7; 	X(POP(es));	// 24765 pop     es ;~ 0DBE:16A7
cs=0xdbe;eip=0x0016a8; 	X(POP(di));	// 24766 pop     di ;~ 0DBE:16A8
cs=0xdbe;eip=0x0016a9; 	X(POP(si));	// 24767 pop     si ;~ 0DBE:16A9
cs=0xdbe;eip=0x0016aa; 	R(RETF(0));	// 24768 retf ;~ 0DBE:16AA
loc_1d86b:
	// 5888 
cs=0xdbe;eip=0x0016ab; 	T(MOV(di, 0x9E));	// 24772 mov     di, 9Eh ; 'ž' ;~ 0DBE:16AB
cs=0xdbe;eip=0x0016ae; 	T(MOV(ax, es));	// 24773 mov     ax, es ;~ 0DBE:16AE
cs=0xdbe;eip=0x0016b0; 	T(MOV(ds, ax));	// 24774 mov     ds, ax ;~ 0DBE:16B0
cs=0xdbe;eip=0x0016b2; 	T(MOV(cx, 0x404));	// 24775 mov     cx, 404h ;~ 0DBE:16B2
loc_1d875:
	// 5889 
cs=0xdbe;eip=0x0016b5; 	T(MOV(dh, 0x32));	// 24778 mov     dh, 32h ; '2' ;~ 0DBE:16B5
cs=0xdbe;eip=0x0016b7; 	X(PUSH(si));	// 24779 push    si ;~ 0DBE:16B7
cs=0xdbe;eip=0x0016b8; 	X(PUSH(di));	// 24780 push    di ;~ 0DBE:16B8
loc_1d879:
	// 5890 
cs=0xdbe;eip=0x0016b9; 	T(MOV(dl, 0x14));	// 24783 mov     dl, 14h ;~ 0DBE:16B9
loc_1d87b:
	// 5891 
cs=0xdbe;eip=0x0016bb; 	T(LODSW);	// 24786 lodsw ;~ 0DBE:16BB
cs=0xdbe;eip=0x0016bc; 	T(XCHG(al, ah));	// 24787 xchg    al, ah ;~ 0DBE:16BC
cs=0xdbe;eip=0x0016be; 	T(ROR(al, cl));	// 24788 ror     al, cl ;~ 0DBE:16BE
cs=0xdbe;eip=0x0016c0; 	T(ROR(ah, cl));	// 24789 ror     ah, cl ;~ 0DBE:16C0
cs=0xdbe;eip=0x0016c2; 	X(MOV(*(dw*)(raddr(es,di)), ax));	// 24790 mov     es:[di], ax ;~ 0DBE:16C2
cs=0xdbe;eip=0x0016c5; 	T(SUB(di, 2));	// 24791 sub     di, 2 ;~ 0DBE:16C5
cs=0xdbe;eip=0x0016c8; 	T(LODSW);	// 24792 lodsw ;~ 0DBE:16C8
cs=0xdbe;eip=0x0016c9; 	T(XCHG(al, ah));	// 24793 xchg    al, ah ;~ 0DBE:16C9
cs=0xdbe;eip=0x0016cb; 	T(ROR(al, cl));	// 24794 ror     al, cl ;~ 0DBE:16CB
cs=0xdbe;eip=0x0016cd; 	T(ROR(ah, cl));	// 24795 ror     ah, cl ;~ 0DBE:16CD
cs=0xdbe;eip=0x0016cf; 	X(MOV(*(dw*)(raddr(es,di)), ax));	// 24796 mov     es:[di], ax ;~ 0DBE:16CF
cs=0xdbe;eip=0x0016d2; 	T(SUB(di, 2));	// 24797 sub     di, 2 ;~ 0DBE:16D2
cs=0xdbe;eip=0x0016d5; 	T(DEC(dl));	// 24798 dec     dl ;~ 0DBE:16D5
cs=0xdbe;eip=0x0016d7; 	R(JNZ(loc_1d87b));	// 24799 jnz     short loc_1D87B ;~ 0DBE:16D7
cs=0xdbe;eip=0x0016d9; 	T(ADD(si, 0x50));	// 24800 add     si, 50h ; 'P' ;~ 0DBE:16D9
cs=0xdbe;eip=0x0016dc; 	T(ADD(di, 0x0F0));	// 24801 add     di, 0F0h ; 'ð' ;~ 0DBE:16DC
cs=0xdbe;eip=0x0016e0; 	T(DEC(dh));	// 24802 dec     dh ;~ 0DBE:16E0
cs=0xdbe;eip=0x0016e2; 	R(JNZ(loc_1d879));	// 24803 jnz     short loc_1D879 ;~ 0DBE:16E2
cs=0xdbe;eip=0x0016e4; 	X(POP(di));	// 24804 pop     di ;~ 0DBE:16E4
cs=0xdbe;eip=0x0016e5; 	X(POP(si));	// 24805 pop     si ;~ 0DBE:16E5
cs=0xdbe;eip=0x0016e6; 	T(ADD(si, 0x2000));	// 24806 add     si, 2000h ;~ 0DBE:16E6
cs=0xdbe;eip=0x0016ea; 	T(ADD(di, 0x2000));	// 24807 add     di, 2000h ;~ 0DBE:16EA
cs=0xdbe;eip=0x0016ee; 	T(DEC(ch));	// 24808 dec     ch ;~ 0DBE:16EE
cs=0xdbe;eip=0x0016f0; 	R(JNZ(loc_1d875));	// 24809 jnz     short loc_1D875 ;~ 0DBE:16F0
cs=0xdbe;eip=0x0016f2; 	X(POP(bp));	// 24810 pop     bp ;~ 0DBE:16F2
cs=0xdbe;eip=0x0016f3; 	X(POP(ds));	// 24811 pop     ds ;~ 0DBE:16F3
cs=0xdbe;eip=0x0016f4; 	X(POP(es));	// 24812 pop     es ;~ 0DBE:16F4
cs=0xdbe;eip=0x0016f5; 	X(POP(di));	// 24813 pop     di ;~ 0DBE:16F5
cs=0xdbe;eip=0x0016f6; 	X(POP(si));	// 24814 pop     si ;~ 0DBE:16F6
cs=0xdbe;eip=0x0016f7; 	R(RETF(0));	// 24815 retf ;~ 0DBE:16F7
sub_1d8b8:
	// 24822 
cs=0xdbe;eip=0x0016f8; 	T(LODSW);	// 24824 lodsw ;~ 0DBE:16F8
ret_dbe_16f9:
	// 5892 
cs=0xdbe;eip=0x0016f9; 	T(MOV(bx, ax));	// 24825 mov     bx, ax ;~ 0DBE:16F9
cs=0xdbe;eip=0x0016fb; 	T(LODSW);	// 24826 lodsw ;~ 0DBE:16FB
cs=0xdbe;eip=0x0016fc; 	T(XCHG(bl, ah));	// 24827 xchg    bl, ah ;~ 0DBE:16FC
cs=0xdbe;eip=0x0016fe; 	T(SHL(ax, cl));	// 24828 shl     ax, cl ;~ 0DBE:16FE
cs=0xdbe;eip=0x001700; 	T(OR(ax, bx));	// 24829 or      ax, bx ;~ 0DBE:1700
cs=0xdbe;eip=0x001702; 	T(XCHG(al, ah));	// 24830 xchg    al, ah ;~ 0DBE:1702
cs=0xdbe;eip=0x001704; 	X(STOSW);	// 24831 stosw ;~ 0DBE:1704
cs=0xdbe;eip=0x001705; 	T(DEC(ch));	// 24832 dec     ch ;~ 0DBE:1705
cs=0xdbe;eip=0x001707; 	R(JNZ(sub_1d8b8));	// 24833 jnz     short sub_1D8B8 ;~ 0DBE:1707
cs=0xdbe;eip=0x001709; 	R(RETN(0));	// 24834 retn ;~ 0DBE:1709
sub_1d8ca:
	// 24841 
cs=0xdbe;eip=0x00170a; 	T(MOV(dx, 0x3CE));	// 24842 mov     dx, 3CEh ;~ 0DBE:170A
ret_dbe_170d:
	// 5893 
cs=0xdbe;eip=0x00170d; 	T(MOV(ax, 5));	// 24843 mov     ax, 5 ;~ 0DBE:170D
cs=0xdbe;eip=0x001710; 	R(OUT(dx, ax));	// 24844 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:1710
cs=0xdbe;eip=0x001711; 	T(MOV(ax, 1));	// 24851 mov     ax, 1 ;~ 0DBE:1711
cs=0xdbe;eip=0x001714; 	R(OUT(dx, ax));	// 24852 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:1714
cs=0xdbe;eip=0x001715; 	T(MOV(ax, 0x0FF08));	// 24854 mov     ax, 0FF08h ;~ 0DBE:1715
cs=0xdbe;eip=0x001718; 	R(OUT(dx, ax));	// 24855 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:1718
cs=0xdbe;eip=0x001719; 	T(MOV(ax, 3));	// 24857 mov     ax, 3 ;~ 0DBE:1719
cs=0xdbe;eip=0x00171c; 	R(OUT(dx, ax));	// 24858 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:171C
cs=0xdbe;eip=0x00171d; 	T(MOV(dx, 0x3C4));	// 24863 mov     dx, 3C4h ;~ 0DBE:171D
cs=0xdbe;eip=0x001720; 	T(MOV(ds, word_34f10));	// 24864 mov     ds, word_34F10 ;~ 0DBE:1720
loc_1d8e4:
	// 5894 
cs=0xdbe;eip=0x001724; 	X(PUSH(di));	// 24867 push    di ;~ 0DBE:1724
cs=0xdbe;eip=0x001725; 	X(PUSH(cx));	// 24868 push    cx ;~ 0DBE:1725
loc_1d8e6:
	// 5895 
cs=0xdbe;eip=0x001726; 	T(MOV(ax, 0x102));	// 24871 mov     ax, 102h ;~ 0DBE:1726
cs=0xdbe;eip=0x001729; 	R(OUT(dx, ax));	// 24872 out     dx, ax          ; EGA: sequencer address reg ;~ 0DBE:1729
cs=0xdbe;eip=0x00172a; 	T(LODSB);	// 24874 lodsb ;~ 0DBE:172A
cs=0xdbe;eip=0x00172b; 	X(MOV(*(raddr(es,di)), al));	// 24875 mov     es:[di], al ;~ 0DBE:172B
cs=0xdbe;eip=0x00172e; 	T(MOV(ax, 0x202));	// 24876 mov     ax, 202h ;~ 0DBE:172E
cs=0xdbe;eip=0x001731; 	R(OUT(dx, ax));	// 24877 out     dx, ax          ; EGA: sequencer address reg ;~ 0DBE:1731
cs=0xdbe;eip=0x001732; 	T(LODSB);	// 24879 lodsb ;~ 0DBE:1732
cs=0xdbe;eip=0x001733; 	X(MOV(*(raddr(es,di)), al));	// 24880 mov     es:[di], al ;~ 0DBE:1733
cs=0xdbe;eip=0x001736; 	T(MOV(ax, 0x402));	// 24881 mov     ax, 402h ;~ 0DBE:1736
cs=0xdbe;eip=0x001739; 	R(OUT(dx, ax));	// 24882 out     dx, ax          ; EGA: sequencer address reg ;~ 0DBE:1739
cs=0xdbe;eip=0x00173a; 	T(LODSB);	// 24884 lodsb ;~ 0DBE:173A
cs=0xdbe;eip=0x00173b; 	X(MOV(*(raddr(es,di)), al));	// 24885 mov     es:[di], al ;~ 0DBE:173B
cs=0xdbe;eip=0x00173e; 	T(MOV(ax, 0x802));	// 24886 mov     ax, 802h ;~ 0DBE:173E
cs=0xdbe;eip=0x001741; 	R(OUT(dx, ax));	// 24887 out     dx, ax          ; EGA: sequencer address reg ;~ 0DBE:1741
cs=0xdbe;eip=0x001742; 	X(MOVSB);	// 24889 movsb ;~ 0DBE:1742
cs=0xdbe;eip=0x001743; 	R(LOOP(loc_1d8e6));	// 24890 loop    loc_1D8E6 ;~ 0DBE:1743
cs=0xdbe;eip=0x001745; 	X(POP(cx));	// 24891 pop     cx ;~ 0DBE:1745
cs=0xdbe;eip=0x001746; 	X(POP(di));	// 24892 pop     di ;~ 0DBE:1746
cs=0xdbe;eip=0x001747; 	T(ADD(di, 0x28));	// 24893 add     di, 28h ; '(' ;~ 0DBE:1747
cs=0xdbe;eip=0x00174a; 	T(DEC(bx));	// 24894 dec     bx ;~ 0DBE:174A
cs=0xdbe;eip=0x00174b; 	R(JNZ(loc_1d8e4));	// 24895 jnz     short loc_1D8E4 ;~ 0DBE:174B
cs=0xdbe;eip=0x00174d; 	T(MOV(ax, 0x0F02));	// 24896 mov     ax, 0F02h ;~ 0DBE:174D
cs=0xdbe;eip=0x001750; 	R(OUT(dx, ax));	// 24897 out     dx, ax          ; EGA: sequencer address reg ;~ 0DBE:1750
cs=0xdbe;eip=0x001751; 	T(MOV(dx, 0x3CE));	// 24899 mov     dx, 3CEh ;~ 0DBE:1751
cs=0xdbe;eip=0x001754; 	T(MOV(ax, 0x0FF01));	// 24900 mov     ax, 0FF01h ;~ 0DBE:1754
cs=0xdbe;eip=0x001757; 	R(OUT(dx, ax));	// 24901 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:1757
cs=0xdbe;eip=0x001758; 	R(RETN(0));	// 24903 retn ;~ 0DBE:1758
sub_1d919:
	// 24911 
#undef arg_0
#define arg_0 6
	// 24913 arg_0           = word ptr  6 ;~ 0DBE:1759
#undef arg_2
#define arg_2 8
	// 24914 arg_2           = word ptr  8 ;~ 0DBE:1759
#undef arg_4
#define arg_4 0x0A
	// 24915 arg_4           = word ptr  0Ah ;~ 0DBE:1759
ret_dbe_1759:
	// 5896 
cs=0xdbe;eip=0x001759; 	X(PUSH(bp));	// 24917 push    bp ;~ 0DBE:1759
cs=0xdbe;eip=0x00175a; 	T(MOV(bp, sp));	// 24918 mov     bp, sp ;~ 0DBE:175A
cs=0xdbe;eip=0x00175c; 	X(PUSH(bp));	// 24919 push    bp ;~ 0DBE:175C
cs=0xdbe;eip=0x00175d; 	X(PUSH(si));	// 24920 push    si ;~ 0DBE:175D
cs=0xdbe;eip=0x00175e; 	X(PUSH(di));	// 24921 push    di ;~ 0DBE:175E
cs=0xdbe;eip=0x00175f; 	X(PUSH(es));	// 24922 push    es ;~ 0DBE:175F
cs=0xdbe;eip=0x001760; 	T(MOV(ax, word_34f10));	// 24923 mov     ax, word_34F10 ;~ 0DBE:1760
cs=0xdbe;eip=0x001763; 	T(MOV(es, ax));	// 24924 mov     es, ax ;~ 0DBE:1763
cs=0xdbe;eip=0x001765; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 24925 mov     si, [bp+arg_0] ;~ 0DBE:1765
cs=0xdbe;eip=0x001768; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 24926 mov     ax, [bp+arg_4] ;~ 0DBE:1768
cs=0xdbe;eip=0x00176b; 	T(XCHG(al, ah));	// 24927 xchg    al, ah ;~ 0DBE:176B
cs=0xdbe;eip=0x00176d; 	T(MOV(di, ax));	// 24928 mov     di, ax ;~ 0DBE:176D
cs=0xdbe;eip=0x00176f; 	T(SHR(ax, 1));	// 24929 shr     ax, 1 ;~ 0DBE:176F
cs=0xdbe;eip=0x001771; 	T(SHR(ax, 1));	// 24930 shr     ax, 1 ;~ 0DBE:1771
cs=0xdbe;eip=0x001773; 	T(ADD(di, ax));	// 24931 add     di, ax ;~ 0DBE:1773
cs=0xdbe;eip=0x001775; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 24932 mov     bx, [bp+arg_2] ;~ 0DBE:1775
cs=0xdbe;eip=0x001778; 	T(SUB(bp, bp));	// 24933 sub     bp, bp ;~ 0DBE:1778
cs=0xdbe;eip=0x00177a; 	T(SUB(ch, ch));	// 24934 sub     ch, ch ;~ 0DBE:177A
loc_1d93c:
	// 5897 
cs=0xdbe;eip=0x00177c; 	T(LODSB);	// 24937 lodsb ;~ 0DBE:177C
cs=0xdbe;eip=0x00177d; 	T(MOV(ah, al));	// 24938 mov     ah, al ;~ 0DBE:177D
cs=0xdbe;eip=0x00177f; 	T(MOV(cl, *(raddr(ds,si))));	// 24939 mov     cl, [si] ;~ 0DBE:177F
cs=0xdbe;eip=0x001781; 	T(INC(si));	// 24940 inc     si ;~ 0DBE:1781
cs=0xdbe;eip=0x001782; 	T(ADD(bp, cx));	// 24941 add     bp, cx ;~ 0DBE:1782
cs=0xdbe;eip=0x001784; 	T(CMP(al, 0x0F));	// 24942 cmp     al, 0Fh ;~ 0DBE:1784
cs=0xdbe;eip=0x001786; 	R(JZ(loc_1d975));	// 24943 jz      short loc_1D975 ;~ 0DBE:1786
cs=0xdbe;eip=0x001788; 	T(CMP(bp, 0x140));	// 24944 cmp     bp, 140h ;~ 0DBE:1788
cs=0xdbe;eip=0x00178c; 	R(JBE(loc_1d963));	// 24945 jbe     short loc_1D963 ;~ 0DBE:178C
cs=0xdbe;eip=0x00178e; 	T(SUB(bp, 0x140));	// 24946 sub     bp, 140h ;~ 0DBE:178E
cs=0xdbe;eip=0x001792; 	T(SUB(cx, bp));	// 24947 sub     cx, bp ;~ 0DBE:1792
cs=0xdbe;eip=0x001794; 	T(SHR(cl, 1));	// 24948 shr     cl, 1 ;~ 0DBE:1794
cs=0xdbe;eip=0x001796; 	R(JNC(loc_1d959));	// 24949 jnb     short loc_1D959 ;~ 0DBE:1796
cs=0xdbe;eip=0x001798; 	X(STOSB);	// 24950 stosb ;~ 0DBE:1798
loc_1d959:
	// 5898 
cs=0xdbe;eip=0x001799; 	R(JZ(loc_1d95d));	// 24953 jz      short loc_1D95D ;~ 0DBE:1799
	// 24954 rep stosw ;~ 0DBE:179B
cs=0xdbe;eip=0x00179b; 	X(	REP STOSW);	// 24954 rep stosw ;~ 0DBE:179B
loc_1d95d:
	// 5899 
cs=0xdbe;eip=0x00179d; 	T(SUB(di, 0x280));	// 24957 sub     di, 280h ;~ 0DBE:179D
cs=0xdbe;eip=0x0017a1; 	T(MOV(cx, bp));	// 24958 mov     cx, bp ;~ 0DBE:17A1
loc_1d963:
	// 5900 
cs=0xdbe;eip=0x0017a3; 	T(SHR(cl, 1));	// 24961 shr     cl, 1 ;~ 0DBE:17A3
cs=0xdbe;eip=0x0017a5; 	R(JNC(loc_1d968));	// 24962 jnb     short loc_1D968 ;~ 0DBE:17A5
cs=0xdbe;eip=0x0017a7; 	X(STOSB);	// 24963 stosb ;~ 0DBE:17A7
loc_1d968:
	// 5901 
cs=0xdbe;eip=0x0017a8; 	R(JZ(loc_1d96c));	// 24966 jz      short loc_1D96C ;~ 0DBE:17A8
	// 24967 rep stosw ;~ 0DBE:17AA
cs=0xdbe;eip=0x0017aa; 	X(	REP STOSW);	// 24967 rep stosw ;~ 0DBE:17AA
loc_1d96c:
	// 5902 
cs=0xdbe;eip=0x0017ac; 	T(DEC(bx));	// 24971 dec     bx ;~ 0DBE:17AC
cs=0xdbe;eip=0x0017ad; 	R(JNZ(loc_1d93c));	// 24972 jnz     short loc_1D93C ;~ 0DBE:17AD
cs=0xdbe;eip=0x0017af; 	X(POP(es));	// 24973 pop     es ;~ 0DBE:17AF
cs=0xdbe;eip=0x0017b0; 	X(POP(di));	// 24974 pop     di ;~ 0DBE:17B0
cs=0xdbe;eip=0x0017b1; 	X(POP(si));	// 24975 pop     si ;~ 0DBE:17B1
cs=0xdbe;eip=0x0017b2; 	X(POP(bp));	// 24976 pop     bp ;~ 0DBE:17B2
cs=0xdbe;eip=0x0017b3; 	X(POP(bp));	// 24977 pop     bp ;~ 0DBE:17B3
cs=0xdbe;eip=0x0017b4; 	R(RETF(0));	// 24978 retf ;~ 0DBE:17B4
loc_1d975:
	// 5903 
cs=0xdbe;eip=0x0017b5; 	T(CMP(bp, 0x140));	// 24982 cmp     bp, 140h ;~ 0DBE:17B5
cs=0xdbe;eip=0x0017b9; 	R(JBE(loc_1d989));	// 24983 jbe     short loc_1D989 ;~ 0DBE:17B9
cs=0xdbe;eip=0x0017bb; 	T(SUB(bp, 0x140));	// 24984 sub     bp, 140h ;~ 0DBE:17BB
cs=0xdbe;eip=0x0017bf; 	T(SUB(cx, bp));	// 24985 sub     cx, bp ;~ 0DBE:17BF
cs=0xdbe;eip=0x0017c1; 	T(ADD(di, cx));	// 24986 add     di, cx ;~ 0DBE:17C1
cs=0xdbe;eip=0x0017c3; 	T(SUB(di, 0x280));	// 24987 sub     di, 280h ;~ 0DBE:17C3
cs=0xdbe;eip=0x0017c7; 	T(MOV(cx, bp));	// 24988 mov     cx, bp ;~ 0DBE:17C7
loc_1d989:
	// 5904 
cs=0xdbe;eip=0x0017c9; 	T(ADD(di, cx));	// 24991 add     di, cx ;~ 0DBE:17C9
cs=0xdbe;eip=0x0017cb; 	R(JMP(loc_1d96c));	// 24992 jmp     short loc_1D96C ;~ 0DBE:17CB
sub_1d98d:
	// 24999 
cs=0xdbe;eip=0x0017cd; 	X(PUSH(ds));	// 25000 push    ds ;~ 0DBE:17CD
ret_dbe_17ce:
	// 5905 
cs=0xdbe;eip=0x0017ce; 	X(PUSH(es));	// 25001 push    es ;~ 0DBE:17CE
cs=0xdbe;eip=0x0017cf; 	X(PUSH(si));	// 25002 push    si ;~ 0DBE:17CF
cs=0xdbe;eip=0x0017d0; 	X(PUSH(di));	// 25003 push    di ;~ 0DBE:17D0
cs=0xdbe;eip=0x0017d1; 	X(PUSH(bp));	// 25004 push    bp ;~ 0DBE:17D1
cs=0xdbe;eip=0x0017d2; 	T(CMP(word_3a178, 9));	// 25005 cmp     word_3A178, 9 ;~ 0DBE:17D2
cs=0xdbe;eip=0x0017d7; 	R(
);	// 25006 jnz     short $+2 ;~ 0DBE:17D7
loc_1d999:
	// 5906 
cs=0xdbe;eip=0x0017d9; 	T(MOV(dx, 0x3DA));	// 25010 mov     dx, 3DAh ;~ 0DBE:17D9
cs=0xdbe;eip=0x0017dc; 	R(IN(al, dx));	// 25011 in      al, dx          ; Video status bits: ;~ 0DBE:17DC
cs=0xdbe;eip=0x0017dd; 	T(TEST(al, 8));	// 25016 test    al, 8 ;~ 0DBE:17DD
cs=0xdbe;eip=0x0017df; 	R(JZ(loc_1d999));	// 25017 jz      short loc_1D999 ;~ 0DBE:17DF
cs=0xdbe;eip=0x0017e1; 	T(CMP(byte_37b7f, 0));	// 25018 cmp     byte_37B7F, 0 ;~ 0DBE:17E1
cs=0xdbe;eip=0x0017e6; 	R(JNZ(loc_1d9af));	// 25019 jnz     short loc_1D9AF ;~ 0DBE:17E6
cs=0xdbe;eip=0x0017e8; 	T(CMP(byte_38ad2, 0));	// 25020 cmp     byte_38AD2, 0 ;~ 0DBE:17E8
cs=0xdbe;eip=0x0017ed; 	R(JZ(loc_1d9b5));	// 25021 jz      short loc_1D9B5 ;~ 0DBE:17ED
loc_1d9af:
	// 5907 
cs=0xdbe;eip=0x0017ef; 	X(POP(bp));	// 25025 pop     bp ;~ 0DBE:17EF
cs=0xdbe;eip=0x0017f0; 	X(POP(di));	// 25026 pop     di ;~ 0DBE:17F0
cs=0xdbe;eip=0x0017f1; 	X(POP(si));	// 25027 pop     si ;~ 0DBE:17F1
cs=0xdbe;eip=0x0017f2; 	X(POP(es));	// 25028 pop     es ;~ 0DBE:17F2
cs=0xdbe;eip=0x0017f3; 	X(POP(ds));	// 25029 pop     ds ;~ 0DBE:17F3
cs=0xdbe;eip=0x0017f4; 	R(RETN(0));	// 25030 retn ;~ 0DBE:17F4
loc_1d9b5:
	// 5908 
cs=0xdbe;eip=0x0017f5; 	T(CMP(byte_37512, 0));	// 25034 cmp     byte_37512, 0 ;~ 0DBE:17F5
cs=0xdbe;eip=0x0017fa; 	R(JNZ(loc_1d9c8));	// 25035 jnz     short loc_1D9C8 ;~ 0DBE:17FA
cs=0xdbe;eip=0x0017fc; 	T(CMP(byte_37511, 0));	// 25036 cmp     byte_37511, 0 ;~ 0DBE:17FC
cs=0xdbe;eip=0x001801; 	R(JZ(loc_1d9af));	// 25037 jz      short loc_1D9AF ;~ 0DBE:1801
cs=0xdbe;eip=0x001803; 	X(MOV(byte_37511, 0));	// 25038 mov     byte_37511, 0 ;~ 0DBE:1803
loc_1d9c8:
	// 5909 
cs=0xdbe;eip=0x001808; 	T(MOV(es, word_34f0c));	// 25041 mov     es, word_34F0C ;~ 0DBE:1808
cs=0xdbe;eip=0x00180c; 	T(MOV(ax, word_3a178));	// 25042 mov     ax, word_3A178 ;~ 0DBE:180C
cs=0xdbe;eip=0x00180f; 	T(MOV(ds, word_34f12));	// 25043 mov     ds, word_34F12 ;~ 0DBE:180F
cs=0xdbe;eip=0x001813; 	T(MOV(si, 0x18));	// 25044 mov     si, 18h ;~ 0DBE:1813
cs=0xdbe;eip=0x001816; 	T(CMP(al, 0x0D));	// 25045 cmp     al, 0Dh ;~ 0DBE:1816
cs=0xdbe;eip=0x001818; 	R(JZ(loc_1da3e));	// 25046 jz      short loc_1DA3E ;~ 0DBE:1818
cs=0xdbe;eip=0x00181a; 	T(CMP(al, 9));	// 25047 cmp     al, 9 ;~ 0DBE:181A
cs=0xdbe;eip=0x00181c; 	R(JZ(loc_1d9e8));	// 25048 jz      short loc_1D9E8 ;~ 0DBE:181C
cs=0xdbe;eip=0x00181e; 	T(CMP(al, 0x13));	// 25049 cmp     al, 13h ;~ 0DBE:181E
cs=0xdbe;eip=0x001820; 	R(JZ(loc_1d9eb));	// 25050 jz      short loc_1D9EB ;~ 0DBE:1820
cs=0xdbe;eip=0x001822; 	X(POP(bp));	// 25051 pop     bp ;~ 0DBE:1822
cs=0xdbe;eip=0x001823; 	X(POP(di));	// 25052 pop     di ;~ 0DBE:1823
cs=0xdbe;eip=0x001824; 	X(POP(si));	// 25053 pop     si ;~ 0DBE:1824
cs=0xdbe;eip=0x001825; 	X(POP(es));	// 25054 pop     es ;~ 0DBE:1825
cs=0xdbe;eip=0x001826; 	X(POP(ds));	// 25055 pop     ds ;~ 0DBE:1826
cs=0xdbe;eip=0x001827; 	R(RETN(0));	// 25056 retn ;~ 0DBE:1827
loc_1d9e8:
	// 5910 
cs=0xdbe;eip=0x001828; 	R(JMP(loc_1da92));	// 25060 jmp     loc_1DA92 ;~ 0DBE:1828
loc_1d9eb:
	// 5911 
cs=0xdbe;eip=0x00182b; 	T(MOV(di, 0x0E80));	// 25064 mov     di, 0E80h ;~ 0DBE:182B
cs=0xdbe;eip=0x00182e; 	T(MOV(cx, 0x14));	// 25065 mov     cx, 14h ;~ 0DBE:182E
	// 25066 rep movsw ;~ 0DBE:1831
cs=0xdbe;eip=0x001831; 	X(	REP MOVSW);	// 25066 rep movsw ;~ 0DBE:1831
cs=0xdbe;eip=0x001833; 	T(ADD(di, 0x108));	// 25067 add     di, 108h ;~ 0DBE:1833
cs=0xdbe;eip=0x001837; 	T(ADD(si, 0x20));	// 25068 add     si, 20h ; ' ' ;~ 0DBE:1837
cs=0xdbe;eip=0x00183a; 	T(MOV(cx, 0x24));	// 25069 mov     cx, 24h ; '$' ;~ 0DBE:183A
	// 25070 rep movsw ;~ 0DBE:183D
cs=0xdbe;eip=0x00183d; 	X(	REP MOVSW);	// 25070 rep movsw ;~ 0DBE:183D
cs=0xdbe;eip=0x00183f; 	T(ADD(di, 0x0F6));	// 25071 add     di, 0F6h ; 'ö' ;~ 0DBE:183F
cs=0xdbe;eip=0x001843; 	T(ADD(si, 0x0E));	// 25072 add     si, 0Eh ;~ 0DBE:1843
cs=0xdbe;eip=0x001846; 	T(MOV(cx, 0x26));	// 25073 mov     cx, 26h ; '&' ;~ 0DBE:1846
	// 25074 rep movsw ;~ 0DBE:1849
cs=0xdbe;eip=0x001849; 	X(	REP MOVSW);	// 25074 rep movsw ;~ 0DBE:1849
cs=0xdbe;eip=0x00184b; 	T(ADD(di, 0x0F3));	// 25075 add     di, 0F3h ; 'ó' ;~ 0DBE:184B
cs=0xdbe;eip=0x00184f; 	T(ADD(si, 0x0B));	// 25076 add     si, 0Bh ;~ 0DBE:184F
cs=0xdbe;eip=0x001852; 	T(MOV(cx, 0x27));	// 25077 mov     cx, 27h ; ''' ;~ 0DBE:1852
	// 25078 rep movsw ;~ 0DBE:1855
cs=0xdbe;eip=0x001855; 	X(	REP MOVSW);	// 25078 rep movsw ;~ 0DBE:1855
cs=0xdbe;eip=0x001857; 	T(ADD(di, 0x0F1));	// 25079 add     di, 0F1h ; 'ñ' ;~ 0DBE:1857
cs=0xdbe;eip=0x00185b; 	T(ADD(si, 9));	// 25080 add     si, 9 ;~ 0DBE:185B
cs=0xdbe;eip=0x00185e; 	T(MOV(cx, 0x28));	// 25081 mov     cx, 28h ; '(' ;~ 0DBE:185E
	// 25082 rep movsw ;~ 0DBE:1861
cs=0xdbe;eip=0x001861; 	X(	REP MOVSW);	// 25082 rep movsw ;~ 0DBE:1861
cs=0xdbe;eip=0x001863; 	T(MOV(di, 0x14A8));	// 25083 mov     di, 14A8h ;~ 0DBE:1863
cs=0xdbe;eip=0x001866; 	T(MOV(si, 0x1B8));	// 25084 mov     si, 1B8h ;~ 0DBE:1866
cs=0xdbe;eip=0x001869; 	T(MOV(bl, 0x0E));	// 25085 mov     bl, 0Eh ;~ 0DBE:1869
loc_1da2b:
	// 5912 
cs=0xdbe;eip=0x00186b; 	T(MOV(cx, 0x2C));	// 25088 mov     cx, 2Ch ; ',' ;~ 0DBE:186B
	// 25089 rep movsw ;~ 0DBE:186E
cs=0xdbe;eip=0x00186e; 	X(	REP MOVSW);	// 25089 rep movsw ;~ 0DBE:186E
cs=0xdbe;eip=0x001870; 	T(ADD(di, 0x0E8));	// 25090 add     di, 0E8h ; 'è' ;~ 0DBE:1870
cs=0xdbe;eip=0x001874; 	T(DEC(bl));	// 25091 dec     bl ;~ 0DBE:1874
cs=0xdbe;eip=0x001876; 	R(JNZ(loc_1da2b));	// 25092 jnz     short loc_1DA2B ;~ 0DBE:1876
cs=0xdbe;eip=0x001878; 	X(POP(bp));	// 25093 pop     bp ;~ 0DBE:1878
cs=0xdbe;eip=0x001879; 	X(POP(di));	// 25094 pop     di ;~ 0DBE:1879
cs=0xdbe;eip=0x00187a; 	X(POP(si));	// 25095 pop     si ;~ 0DBE:187A
cs=0xdbe;eip=0x00187b; 	X(POP(es));	// 25096 pop     es ;~ 0DBE:187B
cs=0xdbe;eip=0x00187c; 	X(POP(ds));	// 25097 pop     ds ;~ 0DBE:187C
cs=0xdbe;eip=0x00187d; 	R(RETN(0));	// 25098 retn ;~ 0DBE:187D
loc_1da3e:
	// 5913 
cs=0xdbe;eip=0x00187e; 	T(MOV(di, 0x1D0));	// 25102 mov     di, 1D0h ;~ 0DBE:187E
cs=0xdbe;eip=0x001881; 	T(MOV(bp, 5));	// 25103 mov     bp, 5 ;~ 0DBE:1881
cs=0xdbe;eip=0x001884; 	R(CALL(sub_1dba4,0));	// 25104 call    sub_1DBA4 ;~ 0DBE:1884
cs=0xdbe;eip=0x001887; 	T(MOV(di, 0x1F6));	// 25105 mov     di, 1F6h ;~ 0DBE:1887
cs=0xdbe;eip=0x00188a; 	T(ADD(si, 0x20));	// 25106 add     si, 20h ; ' ' ;~ 0DBE:188A
cs=0xdbe;eip=0x00188d; 	T(MOV(bp, 9));	// 25107 mov     bp, 9 ;~ 0DBE:188D
cs=0xdbe;eip=0x001890; 	R(CALL(sub_1dba4,0));	// 25108 call    sub_1DBA4 ;~ 0DBE:1890
cs=0xdbe;eip=0x001893; 	T(MOV(di, 0x21E));	// 25109 mov     di, 21Eh ;~ 0DBE:1893
cs=0xdbe;eip=0x001896; 	T(ADD(si, 0x10));	// 25110 add     si, 10h ;~ 0DBE:1896
cs=0xdbe;eip=0x001899; 	T(MOV(bp, 9));	// 25111 mov     bp, 9 ;~ 0DBE:1899
cs=0xdbe;eip=0x00189c; 	R(CALL(sub_1dba4,0));	// 25112 call    sub_1DBA4 ;~ 0DBE:189C
cs=0xdbe;eip=0x00189f; 	T(MOV(di, 0x245));	// 25113 mov     di, 245h ;~ 0DBE:189F
cs=0xdbe;eip=0x0018a2; 	T(ADD(si, 8));	// 25114 add     si, 8 ;~ 0DBE:18A2
cs=0xdbe;eip=0x0018a5; 	T(MOV(bp, 0x0B));	// 25115 mov     bp, 0Bh ;~ 0DBE:18A5
cs=0xdbe;eip=0x0018a8; 	R(CALL(sub_1dba4,0));	// 25116 call    sub_1DBA4 ;~ 0DBE:18A8
cs=0xdbe;eip=0x0018ab; 	T(MOV(di, 0x26D));	// 25117 mov     di, 26Dh ;~ 0DBE:18AB
cs=0xdbe;eip=0x0018ae; 	T(ADD(si, 0));	// 25118 add     si, 0 ;~ 0DBE:18AE
cs=0xdbe;eip=0x0018b1; 	T(MOV(bp, 0x0B));	// 25119 mov     bp, 0Bh ;~ 0DBE:18B1
cs=0xdbe;eip=0x0018b4; 	R(CALL(sub_1dba4,0));	// 25120 call    sub_1DBA4 ;~ 0DBE:18B4
cs=0xdbe;eip=0x0018b7; 	T(MOV(di, 0x295));	// 25121 mov     di, 295h ;~ 0DBE:18B7
cs=0xdbe;eip=0x0018ba; 	T(MOV(si, 0x1B8));	// 25122 mov     si, 1B8h ;~ 0DBE:18BA
cs=0xdbe;eip=0x0018bd; 	T(MOV(dl, 0x0E));	// 25123 mov     dl, 0Eh ;~ 0DBE:18BD
loc_1da7f:
	// 5914 
cs=0xdbe;eip=0x0018bf; 	T(MOV(bp, 0x0B));	// 25126 mov     bp, 0Bh ;~ 0DBE:18BF
cs=0xdbe;eip=0x0018c2; 	R(CALL(sub_1dba4,0));	// 25127 call    sub_1DBA4 ;~ 0DBE:18C2
cs=0xdbe;eip=0x0018c5; 	T(ADD(di, 0x1D));	// 25128 add     di, 1Dh ;~ 0DBE:18C5
cs=0xdbe;eip=0x0018c8; 	T(DEC(dl));	// 25129 dec     dl ;~ 0DBE:18C8
cs=0xdbe;eip=0x0018ca; 	R(JNZ(loc_1da7f));	// 25130 jnz     short loc_1DA7F ;~ 0DBE:18CA
cs=0xdbe;eip=0x0018cc; 	X(POP(bp));	// 25131 pop     bp ;~ 0DBE:18CC
cs=0xdbe;eip=0x0018cd; 	X(POP(di));	// 25132 pop     di ;~ 0DBE:18CD
cs=0xdbe;eip=0x0018ce; 	X(POP(si));	// 25133 pop     si ;~ 0DBE:18CE
cs=0xdbe;eip=0x0018cf; 	X(POP(es));	// 25134 pop     es ;~ 0DBE:18CF
cs=0xdbe;eip=0x0018d0; 	X(POP(ds));	// 25135 pop     ds ;~ 0DBE:18D0
cs=0xdbe;eip=0x0018d1; 	R(RETN(0));	// 25136 retn ;~ 0DBE:18D1
loc_1da92:
	// 5915 
cs=0xdbe;eip=0x0018d2; 	T(MOV(di, 0x61A0));	// 25140 mov     di, 61A0h ;~ 0DBE:18D2
cs=0xdbe;eip=0x0018d5; 	T(MOV(cl, 4));	// 25141 mov     cl, 4 ;~ 0DBE:18D5
cs=0xdbe;eip=0x0018d7; 	T(MOV(ch, 0x0A));	// 25142 mov     ch, 0Ah ;~ 0DBE:18D7
cs=0xdbe;eip=0x0018d9; 	R(CALL(sub_1d8b8,0));	// 25143 call    sub_1D8B8 ;~ 0DBE:18D9
cs=0xdbe;eip=0x0018dc; 	T(MOV(di, 0x238));	// 25144 mov     di, 238h ;~ 0DBE:18DC
cs=0xdbe;eip=0x0018df; 	T(ADD(si, 0x20));	// 25145 add     si, 20h ; ' ' ;~ 0DBE:18DF
cs=0xdbe;eip=0x0018e2; 	T(MOV(ch, 0x12));	// 25146 mov     ch, 12h ;~ 0DBE:18E2
cs=0xdbe;eip=0x0018e4; 	R(CALL(sub_1d8b8,0));	// 25147 call    sub_1D8B8 ;~ 0DBE:18E4
cs=0xdbe;eip=0x0018e7; 	T(MOV(di, 0x2237));	// 25148 mov     di, 2237h ;~ 0DBE:18E7
cs=0xdbe;eip=0x0018ea; 	T(ADD(si, 0x0E));	// 25149 add     si, 0Eh ;~ 0DBE:18EA
cs=0xdbe;eip=0x0018ed; 	T(MOV(ch, 0x13));	// 25150 mov     ch, 13h ;~ 0DBE:18ED
cs=0xdbe;eip=0x0018ef; 	R(CALL(sub_1d8b8,0));	// 25151 call    sub_1D8B8 ;~ 0DBE:18EF
cs=0xdbe;eip=0x0018f2; 	T(MOV(di, 0x4236));	// 25152 mov     di, 4236h ;~ 0DBE:18F2
cs=0xdbe;eip=0x0018f5; 	T(ADD(si, 0x0A));	// 25153 add     si, 0Ah ;~ 0DBE:18F5
cs=0xdbe;eip=0x0018f8; 	T(MOV(ch, 0x14));	// 25154 mov     ch, 14h ;~ 0DBE:18F8
cs=0xdbe;eip=0x0018fa; 	R(CALL(sub_1d8b8,0));	// 25155 call    sub_1D8B8 ;~ 0DBE:18FA
cs=0xdbe;eip=0x0018fd; 	T(MOV(di, 0x6236));	// 25156 mov     di, 6236h ;~ 0DBE:18FD
cs=0xdbe;eip=0x001900; 	T(ADD(si, 8));	// 25157 add     si, 8 ;~ 0DBE:1900
cs=0xdbe;eip=0x001903; 	T(MOV(ch, 0x14));	// 25158 mov     ch, 14h ;~ 0DBE:1903
cs=0xdbe;eip=0x001905; 	R(CALL(sub_1d8b8,0));	// 25159 call    sub_1D8B8 ;~ 0DBE:1905
cs=0xdbe;eip=0x001908; 	T(MOV(di, 0x2D4));	// 25160 mov     di, 2D4h ;~ 0DBE:1908
cs=0xdbe;eip=0x00190b; 	T(MOV(si, 0x1B8));	// 25161 mov     si, 1B8h ;~ 0DBE:190B
cs=0xdbe;eip=0x00190e; 	T(MOV(dl, 0x0E));	// 25162 mov     dl, 0Eh ;~ 0DBE:190E
loc_1dad0:
	// 5916 
cs=0xdbe;eip=0x001910; 	T(MOV(dh, 4));	// 25165 mov     dh, 4 ;~ 0DBE:1910
loc_1dad2:
	// 5917 
cs=0xdbe;eip=0x001912; 	T(MOV(cx, 0x1604));	// 25168 mov     cx, 1604h ;~ 0DBE:1912
cs=0xdbe;eip=0x001915; 	R(CALL(sub_1d8b8,0));	// 25169 call    sub_1D8B8 ;~ 0DBE:1915
cs=0xdbe;eip=0x001918; 	T(ADD(di, 0x1FD4));	// 25170 add     di, 1FD4h ;~ 0DBE:1918
cs=0xdbe;eip=0x00191c; 	T(DEC(dl));	// 25171 dec     dl ;~ 0DBE:191C
cs=0xdbe;eip=0x00191e; 	R(JZ(loc_1daea));	// 25172 jz      short loc_1DAEA ;~ 0DBE:191E
cs=0xdbe;eip=0x001920; 	T(DEC(dh));	// 25173 dec     dh ;~ 0DBE:1920
cs=0xdbe;eip=0x001922; 	R(JNZ(loc_1dad2));	// 25174 jnz     short loc_1DAD2 ;~ 0DBE:1922
cs=0xdbe;eip=0x001924; 	T(ADD(di, 0x80A0));	// 25175 add     di, 80A0h ;~ 0DBE:1924
cs=0xdbe;eip=0x001928; 	R(JMP(loc_1dad0));	// 25176 jmp     short loc_1DAD0 ;~ 0DBE:1928
loc_1daea:
	// 5918 
cs=0xdbe;eip=0x00192a; 	X(POP(bp));	// 25180 pop     bp ;~ 0DBE:192A
cs=0xdbe;eip=0x00192b; 	X(POP(di));	// 25181 pop     di ;~ 0DBE:192B
cs=0xdbe;eip=0x00192c; 	X(POP(si));	// 25182 pop     si ;~ 0DBE:192C
cs=0xdbe;eip=0x00192d; 	X(POP(es));	// 25183 pop     es ;~ 0DBE:192D
cs=0xdbe;eip=0x00192e; 	X(POP(ds));	// 25184 pop     ds ;~ 0DBE:192E
cs=0xdbe;eip=0x00192f; 	R(RETN(0));	// 25185 retn ;~ 0DBE:192F
sub_1daf0:
	// 25192 
cs=0xdbe;eip=0x001930; 	X(PUSH(ds));	// 25193 push    ds ;~ 0DBE:1930
ret_dbe_1931:
	// 5919 
cs=0xdbe;eip=0x001931; 	T(MOV(ax, di));	// 25194 mov     ax, di ;~ 0DBE:1931
cs=0xdbe;eip=0x001933; 	T(XCHG(al, ah));	// 25195 xchg    al, ah ;~ 0DBE:1933
cs=0xdbe;eip=0x001935; 	T(SUB(ah, ah));	// 25196 sub     ah, ah ;~ 0DBE:1935
cs=0xdbe;eip=0x001937; 	T(SHL(ax, 1));	// 25197 shl     ax, 1 ;~ 0DBE:1937
cs=0xdbe;eip=0x001939; 	T(SHL(ax, 1));	// 25198 shl     ax, 1 ;~ 0DBE:1939
cs=0xdbe;eip=0x00193b; 	T(SHL(ax, 1));	// 25199 shl     ax, 1 ;~ 0DBE:193B
cs=0xdbe;eip=0x00193d; 	T(MOV(bx, ax));	// 25200 mov     bx, ax ;~ 0DBE:193D
cs=0xdbe;eip=0x00193f; 	T(SHL(ax, 1));	// 25201 shl     ax, 1 ;~ 0DBE:193F
cs=0xdbe;eip=0x001941; 	T(SHL(ax, 1));	// 25202 shl     ax, 1 ;~ 0DBE:1941
cs=0xdbe;eip=0x001943; 	T(ADD(ax, bx));	// 25203 add     ax, bx ;~ 0DBE:1943
cs=0xdbe;eip=0x001945; 	T(AND(di, 0x0FF));	// 25204 and     di, 0FFh ;~ 0DBE:1945
cs=0xdbe;eip=0x001949; 	T(SHR(di, 1));	// 25205 shr     di, 1 ;~ 0DBE:1949
cs=0xdbe;eip=0x00194b; 	T(SHR(di, 1));	// 25206 shr     di, 1 ;~ 0DBE:194B
cs=0xdbe;eip=0x00194d; 	T(SHR(di, 1));	// 25207 shr     di, 1 ;~ 0DBE:194D
cs=0xdbe;eip=0x00194f; 	T(ADD(di, ax));	// 25208 add     di, ax ;~ 0DBE:194F
cs=0xdbe;eip=0x001951; 	T(SHR(cx, 1));	// 25209 shr     cx, 1 ;~ 0DBE:1951
cs=0xdbe;eip=0x001953; 	T(SHR(cx, 1));	// 25210 shr     cx, 1 ;~ 0DBE:1953
cs=0xdbe;eip=0x001955; 	T(SHR(bp, 1));	// 25211 shr     bp, 1 ;~ 0DBE:1955
cs=0xdbe;eip=0x001957; 	T(SHR(bp, 1));	// 25212 shr     bp, 1 ;~ 0DBE:1957
cs=0xdbe;eip=0x001959; 	T(SHR(bp, 1));	// 25213 shr     bp, 1 ;~ 0DBE:1959
cs=0xdbe;eip=0x00195b; 	X(PUSH(dx));	// 25214 push    dx ;~ 0DBE:195B
cs=0xdbe;eip=0x00195c; 	R(CALL(sub_1dd2f,0));	// 25215 call    sub_1DD2F ;~ 0DBE:195C
cs=0xdbe;eip=0x00195f; 	X(POP(dx));	// 25216 pop     dx ;~ 0DBE:195F
cs=0xdbe;eip=0x001960; 	T(CMP(byte_38ad2, 0));	// 25217 cmp     byte_38AD2, 0 ;~ 0DBE:1960
cs=0xdbe;eip=0x001965; 	R(JZ(loc_1db2a));	// 25218 jz      short loc_1DB2A ;~ 0DBE:1965
loc_1db27:
	// 5920 
cs=0xdbe;eip=0x001967; 	R(JMP(loc_1db83));	// 25221 jmp     short loc_1DB83 ;~ 0DBE:1967
loc_1db2a:
	// 5921 
cs=0xdbe;eip=0x00196a; 	T(MOV(dh, *(db*)(((db*)&word_378d1))));	// 25226 mov     dh, byte ptr word_378D1 ;~ 0DBE:196A
cs=0xdbe;eip=0x00196e; 	T(SUB(dh, dl));	// 25227 sub     dh, dl ;~ 0DBE:196E
cs=0xdbe;eip=0x001970; 	T(CMP(dh, 0x0E));	// 25228 cmp     dh, 0Eh ;~ 0DBE:1970
cs=0xdbe;eip=0x001973; 	R(JNC(loc_1db27));	// 25229 jnb     short loc_1DB27 ;~ 0DBE:1973
cs=0xdbe;eip=0x001975; 	X(PUSH(bp));	// 25230 push    bp ;~ 0DBE:1975
cs=0xdbe;eip=0x001976; 	X(PUSH(cx));	// 25231 push    cx ;~ 0DBE:1976
cs=0xdbe;eip=0x001977; 	T(NEG(dh));	// 25232 neg     dh ;~ 0DBE:1977
cs=0xdbe;eip=0x001979; 	T(ADD(dh, 0x0E));	// 25233 add     dh, 0Eh ;~ 0DBE:1979
cs=0xdbe;eip=0x00197c; 	X(PUSH(ds));	// 25234 push    ds ;~ 0DBE:197C
cs=0xdbe;eip=0x00197d; 	T(CMP(byte_3751c, 0));	// 25235 cmp     byte_3751C, 0 ;~ 0DBE:197D
cs=0xdbe;eip=0x001982; 	T(MOV(ds, word_34f10));	// 25236 mov     ds, word_34F10 ;~ 0DBE:1982
cs=0xdbe;eip=0x001986; 	R(JZ(loc_1db68));	// 25237 jz      short loc_1DB68 ;~ 0DBE:1986
loc_1db48:
	// 5922 
cs=0xdbe;eip=0x001988; 	T(MOV(bp, 0x10));	// 25240 mov     bp, 10h ;~ 0DBE:1988
cs=0xdbe;eip=0x00198b; 	R(CALL(sub_1dba4,0));	// 25241 call    sub_1DBA4 ;~ 0DBE:198B
cs=0xdbe;eip=0x00198e; 	T(ADD(si, 0x58));	// 25242 add     si, 58h ; 'X' ;~ 0DBE:198E
cs=0xdbe;eip=0x001991; 	T(ADD(di, 0x0B));	// 25243 add     di, 0Bh ;~ 0DBE:1991
cs=0xdbe;eip=0x001994; 	T(MOV(bp, 3));	// 25244 mov     bp, 3 ;~ 0DBE:1994
cs=0xdbe;eip=0x001997; 	R(CALL(sub_1dba4,0));	// 25245 call    sub_1DBA4 ;~ 0DBE:1997
cs=0xdbe;eip=0x00199a; 	T(ADD(di, 0x0A));	// 25246 add     di, 0Ah ;~ 0DBE:199A
cs=0xdbe;eip=0x00199d; 	T(ADD(si, 0x50));	// 25247 add     si, 50h ; 'P' ;~ 0DBE:199D
cs=0xdbe;eip=0x0019a0; 	T(DEC(dl));	// 25248 dec     dl ;~ 0DBE:19A0
cs=0xdbe;eip=0x0019a2; 	T(DEC(dh));	// 25249 dec     dh ;~ 0DBE:19A2
cs=0xdbe;eip=0x0019a4; 	R(JNZ(loc_1db48));	// 25250 jnz     short loc_1DB48 ;~ 0DBE:19A4
cs=0xdbe;eip=0x0019a6; 	R(JMP(loc_1db80));	// 25251 jmp     short loc_1DB80 ;~ 0DBE:19A6
loc_1db68:
	// 5923 
cs=0xdbe;eip=0x0019a8; 	T(MOV(bp, 0x15));	// 25256 mov     bp, 15h ;~ 0DBE:19A8
cs=0xdbe;eip=0x0019ab; 	R(CALL(sub_1dba4,0));	// 25257 call    sub_1DBA4 ;~ 0DBE:19AB
cs=0xdbe;eip=0x0019ae; 	T(ADD(si, 0x58));	// 25258 add     si, 58h ; 'X' ;~ 0DBE:19AE
cs=0xdbe;eip=0x0019b1; 	T(ADD(di, 0x0B));	// 25259 add     di, 0Bh ;~ 0DBE:19B1
cs=0xdbe;eip=0x0019b4; 	T(MOV(bp, 8));	// 25260 mov     bp, 8 ;~ 0DBE:19B4
cs=0xdbe;eip=0x0019b7; 	R(CALL(sub_1dba4,0));	// 25261 call    sub_1DBA4 ;~ 0DBE:19B7
cs=0xdbe;eip=0x0019ba; 	T(DEC(dl));	// 25262 dec     dl ;~ 0DBE:19BA
cs=0xdbe;eip=0x0019bc; 	T(DEC(dh));	// 25263 dec     dh ;~ 0DBE:19BC
cs=0xdbe;eip=0x0019be; 	R(JNZ(loc_1db68));	// 25264 jnz     short loc_1DB68 ;~ 0DBE:19BE
loc_1db80:
	// 5924 
cs=0xdbe;eip=0x0019c0; 	X(POP(ds));	// 25267 pop     ds ;~ 0DBE:19C0
cs=0xdbe;eip=0x0019c1; 	X(POP(cx));	// 25268 pop     cx ;~ 0DBE:19C1
cs=0xdbe;eip=0x0019c2; 	X(POP(bp));	// 25269 pop     bp ;~ 0DBE:19C2
loc_1db83:
	// 5925 
cs=0xdbe;eip=0x0019c3; 	T(MOV(ds, word_34f10));	// 25272 mov     ds, word_34F10 ;~ 0DBE:19C3
cs=0xdbe;eip=0x0019c7; 	T(MOV(bl, cl));	// 25273 mov     bl, cl ;~ 0DBE:19C7
cs=0xdbe;eip=0x0019c9; 	T(SUB(bh, bh));	// 25274 sub     bh, bh ;~ 0DBE:19C9
cs=0xdbe;eip=0x0019cb; 	X(PUSH(bp));	// 25275 push    bp ;~ 0DBE:19CB
loc_1db8c:
	// 5926 
cs=0xdbe;eip=0x0019cc; 	T(MOV(bp, bx));	// 25278 mov     bp, bx ;~ 0DBE:19CC
cs=0xdbe;eip=0x0019ce; 	R(CALL(sub_1dba4,0));	// 25279 call    sub_1DBA4 ;~ 0DBE:19CE
cs=0xdbe;eip=0x0019d1; 	X(POP(bp));	// 25280 pop     bp ;~ 0DBE:19D1
cs=0xdbe;eip=0x0019d2; 	T(ADD(di, bp));	// 25281 add     di, bp ;~ 0DBE:19D2
cs=0xdbe;eip=0x0019d4; 	X(PUSH(bp));	// 25282 push    bp ;~ 0DBE:19D4
cs=0xdbe;eip=0x0019d5; 	T(SHL(bp, 1));	// 25283 shl     bp, 1 ;~ 0DBE:19D5
cs=0xdbe;eip=0x0019d7; 	T(SHL(bp, 1));	// 25284 shl     bp, 1 ;~ 0DBE:19D7
cs=0xdbe;eip=0x0019d9; 	T(SHL(bp, 1));	// 25285 shl     bp, 1 ;~ 0DBE:19D9
cs=0xdbe;eip=0x0019db; 	T(ADD(si, bp));	// 25286 add     si, bp ;~ 0DBE:19DB
cs=0xdbe;eip=0x0019dd; 	T(DEC(dl));	// 25287 dec     dl ;~ 0DBE:19DD
cs=0xdbe;eip=0x0019df; 	R(JNZ(loc_1db8c));	// 25288 jnz     short loc_1DB8C ;~ 0DBE:19DF
cs=0xdbe;eip=0x0019e1; 	X(POP(bp));	// 25289 pop     bp ;~ 0DBE:19E1
cs=0xdbe;eip=0x0019e2; 	X(POP(ds));	// 25290 pop     ds ;~ 0DBE:19E2
cs=0xdbe;eip=0x0019e3; 	R(RETN(0));	// 25291 retn ;~ 0DBE:19E3
sub_1dba4:
	// 25298 
cs=0xdbe;eip=0x0019e4; 	X(PUSH(bx));	// 25300 push    bx ;~ 0DBE:19E4
ret_dbe_19e5:
	// 5927 
cs=0xdbe;eip=0x0019e5; 	X(PUSH(dx));	// 25301 push    dx ;~ 0DBE:19E5
cs=0xdbe;eip=0x0019e6; 	T(MOV(dx, 0x3CE));	// 25302 mov     dx, 3CEh ;~ 0DBE:19E6
cs=0xdbe;eip=0x0019e9; 	T(MOV(cx, 0x8008));	// 25303 mov     cx, 8008h ;~ 0DBE:19E9
loc_1dbac:
	// 5928 
cs=0xdbe;eip=0x0019ec; 	T(LODSW);	// 25307 lodsw ;~ 0DBE:19EC
cs=0xdbe;eip=0x0019ed; 	T(MOV(bx, ax));	// 25308 mov     bx, ax ;~ 0DBE:19ED
cs=0xdbe;eip=0x0019ef; 	T(LODSW);	// 25309 lodsw ;~ 0DBE:19EF
cs=0xdbe;eip=0x0019f0; 	T(CMP(bl, bh));	// 25310 cmp     bl, bh ;~ 0DBE:19F0
cs=0xdbe;eip=0x0019f2; 	R(JZ(loc_1dc29));	// 25311 jz      short loc_1DC29 ;~ 0DBE:19F2
cs=0xdbe;eip=0x0019f4; 	T(CMP(al, bl));	// 25312 cmp     al, bl ;~ 0DBE:19F4
cs=0xdbe;eip=0x0019f6; 	R(JZ(loc_1dbfc));	// 25313 jz      short loc_1DBFC ;~ 0DBE:19F6
cs=0xdbe;eip=0x0019f8; 	T(XCHG(ax, bx));	// 25314 xchg    ax, bx ;~ 0DBE:19F8
cs=0xdbe;eip=0x0019f9; 	T(MOV(cl, ah));	// 25315 mov     cl, ah ;~ 0DBE:19F9
cs=0xdbe;eip=0x0019fb; 	T(MOV(ah, al));	// 25316 mov     ah, al ;~ 0DBE:19FB
cs=0xdbe;eip=0x0019fd; 	T(SUB(al, al));	// 25317 sub     al, al ;~ 0DBE:19FD
cs=0xdbe;eip=0x0019ff; 	R(OUT(dx, ax));	// 25318 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:19FF
cs=0xdbe;eip=0x001a00; 	T(MOV(ah, ch));	// 25321 mov     ah, ch ;~ 0DBE:1A00
cs=0xdbe;eip=0x001a02; 	T(MOV(al, 8));	// 25322 mov     al, 8 ;~ 0DBE:1A02
cs=0xdbe;eip=0x001a04; 	R(OUT(dx, ax));	// 25323 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:1A04
cs=0xdbe;eip=0x001a05; 	X(AND(*(raddr(es,di)), al));	// 25325 and     es:[di], al ;~ 0DBE:1A05
cs=0xdbe;eip=0x001a08; 	T(ROR(ch, 1));	// 25326 ror     ch, 1 ;~ 0DBE:1A08
cs=0xdbe;eip=0x001a0a; 	T(MOV(ah, cl));	// 25327 mov     ah, cl ;~ 0DBE:1A0A
cs=0xdbe;eip=0x001a0c; 	T(MOV(cl, al));	// 25328 mov     cl, al ;~ 0DBE:1A0C
cs=0xdbe;eip=0x001a0e; 	T(SUB(al, al));	// 25329 sub     al, al ;~ 0DBE:1A0E
cs=0xdbe;eip=0x001a10; 	R(OUT(dx, ax));	// 25330 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:1A10
cs=0xdbe;eip=0x001a11; 	T(MOV(ax, cx));	// 25333 mov     ax, cx ;~ 0DBE:1A11
cs=0xdbe;eip=0x001a13; 	R(OUT(dx, ax));	// 25334 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:1A13
cs=0xdbe;eip=0x001a14; 	X(AND(*(raddr(es,di)), al));	// 25336 and     es:[di], al ;~ 0DBE:1A14
cs=0xdbe;eip=0x001a17; 	T(ROR(ch, 1));	// 25337 ror     ch, 1 ;~ 0DBE:1A17
cs=0xdbe;eip=0x001a19; 	T(MOV(ah, bl));	// 25338 mov     ah, bl ;~ 0DBE:1A19
cs=0xdbe;eip=0x001a1b; 	T(SUB(al, al));	// 25339 sub     al, al ;~ 0DBE:1A1B
cs=0xdbe;eip=0x001a1d; 	R(OUT(dx, ax));	// 25340 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:1A1D
cs=0xdbe;eip=0x001a1e; 	T(MOV(ax, cx));	// 25343 mov     ax, cx ;~ 0DBE:1A1E
cs=0xdbe;eip=0x001a20; 	R(OUT(dx, ax));	// 25344 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:1A20
cs=0xdbe;eip=0x001a21; 	X(AND(*(raddr(es,di)), al));	// 25346 and     es:[di], al ;~ 0DBE:1A21
cs=0xdbe;eip=0x001a24; 	T(ROR(ch, 1));	// 25347 ror     ch, 1 ;~ 0DBE:1A24
cs=0xdbe;eip=0x001a26; 	T(MOV(ah, bh));	// 25348 mov     ah, bh ;~ 0DBE:1A26
cs=0xdbe;eip=0x001a28; 	T(SUB(al, al));	// 25349 sub     al, al ;~ 0DBE:1A28
cs=0xdbe;eip=0x001a2a; 	R(OUT(dx, ax));	// 25350 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:1A2A
cs=0xdbe;eip=0x001a2b; 	T(MOV(ax, cx));	// 25353 mov     ax, cx ;~ 0DBE:1A2B
loc_1dbed:
	// 5929 
cs=0xdbe;eip=0x001a2d; 	R(OUT(dx, ax));	// 25356 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:1A2D
cs=0xdbe;eip=0x001a2e; 	X(AND(*(raddr(es,di)), al));	// 25358 and     es:[di], al ;~ 0DBE:1A2E
cs=0xdbe;eip=0x001a31; 	T(ROR(ch, 1));	// 25359 ror     ch, 1 ;~ 0DBE:1A31
cs=0xdbe;eip=0x001a33; 	R(JNC(loc_1dbac));	// 25360 jnb     short loc_1DBAC ;~ 0DBE:1A33
loc_1dbf5:
	// 5930 
cs=0xdbe;eip=0x001a35; 	T(INC(di));	// 25363 inc     di ;~ 0DBE:1A35
cs=0xdbe;eip=0x001a36; 	T(DEC(bp));	// 25364 dec     bp ;~ 0DBE:1A36
cs=0xdbe;eip=0x001a37; 	R(JNZ(loc_1dbac));	// 25365 jnz     short loc_1DBAC ;~ 0DBE:1A37
cs=0xdbe;eip=0x001a39; 	X(POP(dx));	// 25366 pop     dx ;~ 0DBE:1A39
cs=0xdbe;eip=0x001a3a; 	X(POP(bx));	// 25367 pop     bx ;~ 0DBE:1A3A
cs=0xdbe;eip=0x001a3b; 	R(RETN(0));	// 25368 retn ;~ 0DBE:1A3B
loc_1dbfc:
	// 5931 
cs=0xdbe;eip=0x001a3c; 	T(CMP(ah, bh));	// 25372 cmp     ah, bh ;~ 0DBE:1A3C
cs=0xdbe;eip=0x001a3e; 	R(JNZ(loc_1dc5b));	// 25373 jnz     short loc_1DC5B ;~ 0DBE:1A3E
cs=0xdbe;eip=0x001a40; 	T(OR(ch, ch));	// 25374 or      ch, ch ;~ 0DBE:1A40
cs=0xdbe;eip=0x001a42; 	R(JNS(loc_1dc07));	// 25375 jns     short loc_1DC07 ;~ 0DBE:1A42
cs=0xdbe;eip=0x001a44; 	R(JMP(loc_1dcfc));	// 25376 jmp     loc_1DCFC ;~ 0DBE:1A44
loc_1dc07:
	// 5932 
cs=0xdbe;eip=0x001a47; 	T(MOV(ah, bl));	// 25381 mov     ah, bl ;~ 0DBE:1A47
cs=0xdbe;eip=0x001a49; 	T(SUB(al, al));	// 25382 sub     al, al ;~ 0DBE:1A49
cs=0xdbe;eip=0x001a4b; 	R(OUT(dx, ax));	// 25383 out     dx, ax ;~ 0DBE:1A4B
cs=0xdbe;eip=0x001a4c; 	T(MOV(ax, cx));	// 25384 mov     ax, cx ;~ 0DBE:1A4C
cs=0xdbe;eip=0x001a4e; 	T(ROR(ch, 1));	// 25385 ror     ch, 1 ;~ 0DBE:1A4E
cs=0xdbe;eip=0x001a50; 	T(MOV(bl, ch));	// 25386 mov     bl, ch ;~ 0DBE:1A50
cs=0xdbe;eip=0x001a52; 	T(ROR(ch, 1));	// 25387 ror     ch, 1 ;~ 0DBE:1A52
cs=0xdbe;eip=0x001a54; 	T(OR(ah, ch));	// 25388 or      ah, ch ;~ 0DBE:1A54
cs=0xdbe;eip=0x001a56; 	R(OUT(dx, ax));	// 25389 out     dx, ax ;~ 0DBE:1A56
cs=0xdbe;eip=0x001a57; 	T(ROR(ch, 1));	// 25390 ror     ch, 1 ;~ 0DBE:1A57
cs=0xdbe;eip=0x001a59; 	T(OR(bl, ch));	// 25391 or      bl, ch ;~ 0DBE:1A59
cs=0xdbe;eip=0x001a5b; 	X(AND(*(raddr(es,di)), al));	// 25392 and     es:[di], al ;~ 0DBE:1A5B
cs=0xdbe;eip=0x001a5e; 	T(MOV(ah, bh));	// 25393 mov     ah, bh ;~ 0DBE:1A5E
cs=0xdbe;eip=0x001a60; 	T(SUB(al, al));	// 25394 sub     al, al ;~ 0DBE:1A60
cs=0xdbe;eip=0x001a62; 	R(OUT(dx, ax));	// 25395 out     dx, ax ;~ 0DBE:1A62
cs=0xdbe;eip=0x001a63; 	T(MOV(al, cl));	// 25396 mov     al, cl ;~ 0DBE:1A63
cs=0xdbe;eip=0x001a65; 	T(MOV(ah, bl));	// 25397 mov     ah, bl ;~ 0DBE:1A65
cs=0xdbe;eip=0x001a67; 	R(JMP(loc_1dbed));	// 25398 jmp     short loc_1DBED ;~ 0DBE:1A67
loc_1dc29:
	// 5933 
cs=0xdbe;eip=0x001a69; 	T(CMP(al, bl));	// 25402 cmp     al, bl ;~ 0DBE:1A69
cs=0xdbe;eip=0x001a6b; 	R(JNZ(loc_1dcac));	// 25403 jnz     short loc_1DCAC ;~ 0DBE:1A6B
cs=0xdbe;eip=0x001a6d; 	T(CMP(ah, bl));	// 25404 cmp     ah, bl ;~ 0DBE:1A6D
cs=0xdbe;eip=0x001a6f; 	R(JNZ(loc_1dc8a));	// 25405 jnz     short loc_1DC8A ;~ 0DBE:1A6F
cs=0xdbe;eip=0x001a71; 	T(OR(ch, ch));	// 25406 or      ch, ch ;~ 0DBE:1A71
cs=0xdbe;eip=0x001a73; 	R(JNS(loc_1dc38));	// 25407 jns     short loc_1DC38 ;~ 0DBE:1A73
cs=0xdbe;eip=0x001a75; 	R(JMP(loc_1dcd7));	// 25408 jmp     loc_1DCD7 ;~ 0DBE:1A75
loc_1dc38:
	// 5934 
cs=0xdbe;eip=0x001a78; 	T(SUB(al, al));	// 25413 sub     al, al ;~ 0DBE:1A78
cs=0xdbe;eip=0x001a7a; 	R(OUT(dx, ax));	// 25414 out     dx, ax ;~ 0DBE:1A7A
cs=0xdbe;eip=0x001a7b; 	T(MOV(ax, cx));	// 25415 mov     ax, cx ;~ 0DBE:1A7B
cs=0xdbe;eip=0x001a7d; 	T(ROR(ch, 1));	// 25416 ror     ch, 1 ;~ 0DBE:1A7D
cs=0xdbe;eip=0x001a7f; 	T(OR(ah, ch));	// 25417 or      ah, ch ;~ 0DBE:1A7F
cs=0xdbe;eip=0x001a81; 	T(ROR(ch, 1));	// 25418 ror     ch, 1 ;~ 0DBE:1A81
cs=0xdbe;eip=0x001a83; 	T(OR(ah, ch));	// 25419 or      ah, ch ;~ 0DBE:1A83
cs=0xdbe;eip=0x001a85; 	T(ROR(ch, 1));	// 25420 ror     ch, 1 ;~ 0DBE:1A85
cs=0xdbe;eip=0x001a87; 	T(OR(ah, ch));	// 25421 or      ah, ch ;~ 0DBE:1A87
cs=0xdbe;eip=0x001a89; 	R(OUT(dx, ax));	// 25422 out     dx, ax ;~ 0DBE:1A89
cs=0xdbe;eip=0x001a8a; 	X(AND(*(raddr(es,di)), al));	// 25423 and     es:[di], al ;~ 0DBE:1A8A
loc_1dc4d:
	// 5935 
cs=0xdbe;eip=0x001a8d; 	T(ROR(ch, 1));	// 25427 ror     ch, 1 ;~ 0DBE:1A8D
cs=0xdbe;eip=0x001a8f; 	R(JNC(loc_1dc58));	// 25428 jnb     short loc_1DC58 ;~ 0DBE:1A8F
cs=0xdbe;eip=0x001a91; 	T(INC(di));	// 25429 inc     di ;~ 0DBE:1A91
loc_1dc52:
	// 5936 
cs=0xdbe;eip=0x001a92; 	T(DEC(bp));	// 25432 dec     bp ;~ 0DBE:1A92
cs=0xdbe;eip=0x001a93; 	R(JNZ(loc_1dc58));	// 25433 jnz     short loc_1DC58 ;~ 0DBE:1A93
cs=0xdbe;eip=0x001a95; 	X(POP(dx));	// 25434 pop     dx ;~ 0DBE:1A95
cs=0xdbe;eip=0x001a96; 	X(POP(bx));	// 25435 pop     bx ;~ 0DBE:1A96
cs=0xdbe;eip=0x001a97; 	R(RETN(0));	// 25436 retn ;~ 0DBE:1A97
loc_1dc58:
	// 5937 
cs=0xdbe;eip=0x001a98; 	R(JMP(loc_1dbac));	// 25441 jmp     loc_1DBAC ;~ 0DBE:1A98
loc_1dc5b:
	// 5938 
cs=0xdbe;eip=0x001a9b; 	T(XCHG(ah, bl));	// 25445 xchg    ah, bl ;~ 0DBE:1A9B
cs=0xdbe;eip=0x001a9d; 	T(SUB(al, al));	// 25446 sub     al, al ;~ 0DBE:1A9D
cs=0xdbe;eip=0x001a9f; 	R(OUT(dx, ax));	// 25447 out     dx, ax ;~ 0DBE:1A9F
cs=0xdbe;eip=0x001aa0; 	T(MOV(ax, cx));	// 25448 mov     ax, cx ;~ 0DBE:1AA0
cs=0xdbe;eip=0x001aa2; 	T(ROR(ch, 1));	// 25449 ror     ch, 1 ;~ 0DBE:1AA2
cs=0xdbe;eip=0x001aa4; 	T(ROR(ch, 1));	// 25450 ror     ch, 1 ;~ 0DBE:1AA4
cs=0xdbe;eip=0x001aa6; 	T(OR(ah, ch));	// 25451 or      ah, ch ;~ 0DBE:1AA6
cs=0xdbe;eip=0x001aa8; 	R(OUT(dx, ax));	// 25452 out     dx, ax ;~ 0DBE:1AA8
cs=0xdbe;eip=0x001aa9; 	X(AND(*(raddr(es,di)), al));	// 25453 and     es:[di], al ;~ 0DBE:1AA9
cs=0xdbe;eip=0x001aac; 	T(MOV(ah, bh));	// 25454 mov     ah, bh ;~ 0DBE:1AAC
cs=0xdbe;eip=0x001aae; 	T(SUB(al, al));	// 25455 sub     al, al ;~ 0DBE:1AAE
cs=0xdbe;eip=0x001ab0; 	R(OUT(dx, ax));	// 25456 out     dx, ax ;~ 0DBE:1AB0
cs=0xdbe;eip=0x001ab1; 	T(ROL(ch, 1));	// 25457 rol     ch, 1 ;~ 0DBE:1AB1
cs=0xdbe;eip=0x001ab3; 	T(MOV(ax, cx));	// 25458 mov     ax, cx ;~ 0DBE:1AB3
cs=0xdbe;eip=0x001ab5; 	R(OUT(dx, ax));	// 25459 out     dx, ax ;~ 0DBE:1AB5
cs=0xdbe;eip=0x001ab6; 	X(AND(*(raddr(es,di)), al));	// 25460 and     es:[di], al ;~ 0DBE:1AB6
cs=0xdbe;eip=0x001ab9; 	T(ROR(ch, 1));	// 25461 ror     ch, 1 ;~ 0DBE:1AB9
cs=0xdbe;eip=0x001abb; 	T(ROR(ch, 1));	// 25462 ror     ch, 1 ;~ 0DBE:1ABB
cs=0xdbe;eip=0x001abd; 	T(MOV(ah, bl));	// 25463 mov     ah, bl ;~ 0DBE:1ABD
cs=0xdbe;eip=0x001abf; 	T(SUB(al, al));	// 25464 sub     al, al ;~ 0DBE:1ABF
cs=0xdbe;eip=0x001ac1; 	R(OUT(dx, ax));	// 25465 out     dx, ax ;~ 0DBE:1AC1
cs=0xdbe;eip=0x001ac2; 	T(MOV(ax, cx));	// 25466 mov     ax, cx ;~ 0DBE:1AC2
cs=0xdbe;eip=0x001ac4; 	R(OUT(dx, ax));	// 25467 out     dx, ax ;~ 0DBE:1AC4
cs=0xdbe;eip=0x001ac5; 	X(AND(*(raddr(es,di)), al));	// 25468 and     es:[di], al ;~ 0DBE:1AC5
cs=0xdbe;eip=0x001ac8; 	R(JMP(loc_1dc4d));	// 25469 jmp     short loc_1DC4D ;~ 0DBE:1AC8
loc_1dc8a:
	// 5939 
cs=0xdbe;eip=0x001aca; 	T(XCHG(bh, ah));	// 25473 xchg    bh, ah ;~ 0DBE:1ACA
cs=0xdbe;eip=0x001acc; 	T(SUB(al, al));	// 25474 sub     al, al ;~ 0DBE:1ACC
cs=0xdbe;eip=0x001ace; 	R(OUT(dx, ax));	// 25475 out     dx, ax ;~ 0DBE:1ACE
cs=0xdbe;eip=0x001acf; 	T(MOV(ax, cx));	// 25476 mov     ax, cx ;~ 0DBE:1ACF
cs=0xdbe;eip=0x001ad1; 	T(ROR(ch, 1));	// 25477 ror     ch, 1 ;~ 0DBE:1AD1
cs=0xdbe;eip=0x001ad3; 	T(OR(ah, ch));	// 25478 or      ah, ch ;~ 0DBE:1AD3
cs=0xdbe;eip=0x001ad5; 	T(ROR(ch, 1));	// 25479 ror     ch, 1 ;~ 0DBE:1AD5
cs=0xdbe;eip=0x001ad7; 	T(OR(ah, ch));	// 25480 or      ah, ch ;~ 0DBE:1AD7
cs=0xdbe;eip=0x001ad9; 	R(OUT(dx, ax));	// 25481 out     dx, ax ;~ 0DBE:1AD9
cs=0xdbe;eip=0x001ada; 	X(AND(*(raddr(es,di)), al));	// 25482 and     es:[di], al ;~ 0DBE:1ADA
cs=0xdbe;eip=0x001add; 	T(SUB(al, al));	// 25483 sub     al, al ;~ 0DBE:1ADD
cs=0xdbe;eip=0x001adf; 	T(MOV(ah, bl));	// 25484 mov     ah, bl ;~ 0DBE:1ADF
cs=0xdbe;eip=0x001ae1; 	R(OUT(dx, ax));	// 25485 out     dx, ax ;~ 0DBE:1AE1
cs=0xdbe;eip=0x001ae2; 	T(ROR(ch, 1));	// 25486 ror     ch, 1 ;~ 0DBE:1AE2
cs=0xdbe;eip=0x001ae4; 	T(MOV(ax, cx));	// 25487 mov     ax, cx ;~ 0DBE:1AE4
cs=0xdbe;eip=0x001ae6; 	R(OUT(dx, ax));	// 25488 out     dx, ax ;~ 0DBE:1AE6
cs=0xdbe;eip=0x001ae7; 	X(AND(*(raddr(es,di)), al));	// 25489 and     es:[di], al ;~ 0DBE:1AE7
cs=0xdbe;eip=0x001aea; 	R(JMP(loc_1dc4d));	// 25490 jmp     short loc_1DC4D ;~ 0DBE:1AEA
loc_1dcac:
	// 5940 
cs=0xdbe;eip=0x001aec; 	T(XCHG(ax, bx));	// 25494 xchg    ax, bx ;~ 0DBE:1AEC
cs=0xdbe;eip=0x001aed; 	T(SUB(al, al));	// 25495 sub     al, al ;~ 0DBE:1AED
cs=0xdbe;eip=0x001aef; 	R(OUT(dx, ax));	// 25496 out     dx, ax ;~ 0DBE:1AEF
cs=0xdbe;eip=0x001af0; 	T(MOV(ax, cx));	// 25497 mov     ax, cx ;~ 0DBE:1AF0
cs=0xdbe;eip=0x001af2; 	T(ROR(ch, 1));	// 25498 ror     ch, 1 ;~ 0DBE:1AF2
cs=0xdbe;eip=0x001af4; 	T(OR(ah, ch));	// 25499 or      ah, ch ;~ 0DBE:1AF4
cs=0xdbe;eip=0x001af6; 	R(OUT(dx, ax));	// 25500 out     dx, ax ;~ 0DBE:1AF6
cs=0xdbe;eip=0x001af7; 	X(AND(*(raddr(es,di)), al));	// 25501 and     es:[di], al ;~ 0DBE:1AF7
cs=0xdbe;eip=0x001afa; 	T(ROR(ch, 1));	// 25502 ror     ch, 1 ;~ 0DBE:1AFA
cs=0xdbe;eip=0x001afc; 	T(SUB(al, al));	// 25503 sub     al, al ;~ 0DBE:1AFC
cs=0xdbe;eip=0x001afe; 	T(MOV(ah, bl));	// 25504 mov     ah, bl ;~ 0DBE:1AFE
cs=0xdbe;eip=0x001b00; 	R(OUT(dx, ax));	// 25505 out     dx, ax ;~ 0DBE:1B00
cs=0xdbe;eip=0x001b01; 	T(MOV(ax, cx));	// 25506 mov     ax, cx ;~ 0DBE:1B01
cs=0xdbe;eip=0x001b03; 	R(OUT(dx, ax));	// 25507 out     dx, ax ;~ 0DBE:1B03
cs=0xdbe;eip=0x001b04; 	X(AND(*(raddr(es,di)), al));	// 25508 and     es:[di], al ;~ 0DBE:1B04
cs=0xdbe;eip=0x001b07; 	T(ROR(ch, 1));	// 25509 ror     ch, 1 ;~ 0DBE:1B07
cs=0xdbe;eip=0x001b09; 	T(SUB(al, al));	// 25510 sub     al, al ;~ 0DBE:1B09
cs=0xdbe;eip=0x001b0b; 	T(MOV(ah, bh));	// 25511 mov     ah, bh ;~ 0DBE:1B0B
cs=0xdbe;eip=0x001b0d; 	R(OUT(dx, ax));	// 25512 out     dx, ax ;~ 0DBE:1B0D
cs=0xdbe;eip=0x001b0e; 	T(MOV(ax, cx));	// 25513 mov     ax, cx ;~ 0DBE:1B0E
cs=0xdbe;eip=0x001b10; 	R(OUT(dx, ax));	// 25514 out     dx, ax ;~ 0DBE:1B10
cs=0xdbe;eip=0x001b11; 	X(AND(*(raddr(es,di)), al));	// 25515 and     es:[di], al ;~ 0DBE:1B11
cs=0xdbe;eip=0x001b14; 	R(JMP(loc_1dc4d));	// 25516 jmp     loc_1DC4D ;~ 0DBE:1B14
loc_1dcd7:
	// 5941 
cs=0xdbe;eip=0x001b17; 	T(LODSW);	// 25520 lodsw ;~ 0DBE:1B17
cs=0xdbe;eip=0x001b18; 	T(CMP(ax, bx));	// 25521 cmp     ax, bx ;~ 0DBE:1B18
cs=0xdbe;eip=0x001b1a; 	R(JNZ(loc_1dcf4));	// 25522 jnz     short loc_1DCF4 ;~ 0DBE:1B1A
cs=0xdbe;eip=0x001b1c; 	T(LODSW);	// 25523 lodsw ;~ 0DBE:1B1C
cs=0xdbe;eip=0x001b1d; 	T(CMP(ax, bx));	// 25524 cmp     ax, bx ;~ 0DBE:1B1D
cs=0xdbe;eip=0x001b1f; 	R(JNZ(loc_1dcec));	// 25525 jnz     short loc_1DCEC ;~ 0DBE:1B1F
cs=0xdbe;eip=0x001b21; 	T(SUB(al, al));	// 25526 sub     al, al ;~ 0DBE:1B21
cs=0xdbe;eip=0x001b23; 	R(OUT(dx, ax));	// 25527 out     dx, ax ;~ 0DBE:1B23
cs=0xdbe;eip=0x001b24; 	T(MOV(ax, 0x0FF08));	// 25528 mov     ax, 0FF08h ;~ 0DBE:1B24
cs=0xdbe;eip=0x001b27; 	R(OUT(dx, ax));	// 25529 out     dx, ax ;~ 0DBE:1B27
cs=0xdbe;eip=0x001b28; 	X(STOSB);	// 25530 stosb ;~ 0DBE:1B28
cs=0xdbe;eip=0x001b29; 	R(JMP(loc_1dc52));	// 25531 jmp     loc_1DC52 ;~ 0DBE:1B29
loc_1dcec:
	// 5942 
cs=0xdbe;eip=0x001b2c; 	T(SUB(si, 4));	// 25535 sub     si, 4 ;~ 0DBE:1B2C
cs=0xdbe;eip=0x001b2f; 	T(MOV(ah, bl));	// 25536 mov     ah, bl ;~ 0DBE:1B2F
cs=0xdbe;eip=0x001b31; 	R(JMP(loc_1dc38));	// 25537 jmp     loc_1DC38 ;~ 0DBE:1B31
loc_1dcf4:
	// 5943 
cs=0xdbe;eip=0x001b34; 	T(SUB(si, 2));	// 25541 sub     si, 2 ;~ 0DBE:1B34
cs=0xdbe;eip=0x001b37; 	T(MOV(ah, bl));	// 25542 mov     ah, bl ;~ 0DBE:1B37
cs=0xdbe;eip=0x001b39; 	R(JMP(loc_1dc38));	// 25543 jmp     loc_1DC38 ;~ 0DBE:1B39
loc_1dcfc:
	// 5944 
cs=0xdbe;eip=0x001b3c; 	T(LODSW);	// 25547 lodsw ;~ 0DBE:1B3C
cs=0xdbe;eip=0x001b3d; 	T(CMP(ax, bx));	// 25548 cmp     ax, bx ;~ 0DBE:1B3D
cs=0xdbe;eip=0x001b3f; 	R(JNZ(loc_1dd27));	// 25549 jnz     short loc_1DD27 ;~ 0DBE:1B3F
cs=0xdbe;eip=0x001b41; 	T(LODSW);	// 25550 lodsw ;~ 0DBE:1B41
cs=0xdbe;eip=0x001b42; 	T(CMP(ax, bx));	// 25551 cmp     ax, bx ;~ 0DBE:1B42
cs=0xdbe;eip=0x001b44; 	R(JNZ(loc_1dd1f));	// 25552 jnz     short loc_1DD1F ;~ 0DBE:1B44
cs=0xdbe;eip=0x001b46; 	T(SUB(al, al));	// 25553 sub     al, al ;~ 0DBE:1B46
cs=0xdbe;eip=0x001b48; 	R(OUT(dx, ax));	// 25554 out     dx, ax ;~ 0DBE:1B48
cs=0xdbe;eip=0x001b49; 	T(MOV(ax, 0x5508));	// 25555 mov     ax, 5508h ;~ 0DBE:1B49
cs=0xdbe;eip=0x001b4c; 	R(OUT(dx, ax));	// 25556 out     dx, ax ;~ 0DBE:1B4C
cs=0xdbe;eip=0x001b4d; 	X(AND(*(raddr(es,di)), al));	// 25557 and     es:[di], al ;~ 0DBE:1B4D
cs=0xdbe;eip=0x001b50; 	T(SUB(al, al));	// 25558 sub     al, al ;~ 0DBE:1B50
cs=0xdbe;eip=0x001b52; 	T(MOV(ah, bl));	// 25559 mov     ah, bl ;~ 0DBE:1B52
cs=0xdbe;eip=0x001b54; 	R(OUT(dx, ax));	// 25560 out     dx, ax ;~ 0DBE:1B54
cs=0xdbe;eip=0x001b55; 	T(MOV(ax, 0x0AA08));	// 25561 mov     ax, 0AA08h ;~ 0DBE:1B55
cs=0xdbe;eip=0x001b58; 	R(OUT(dx, ax));	// 25562 out     dx, ax ;~ 0DBE:1B58
cs=0xdbe;eip=0x001b59; 	X(AND(*(raddr(es,di)), al));	// 25563 and     es:[di], al ;~ 0DBE:1B59
cs=0xdbe;eip=0x001b5c; 	R(JMP(loc_1dbf5));	// 25564 jmp     loc_1DBF5 ;~ 0DBE:1B5C
loc_1dd1f:
	// 5945 
cs=0xdbe;eip=0x001b5f; 	T(SUB(si, 4));	// 25568 sub     si, 4 ;~ 0DBE:1B5F
cs=0xdbe;eip=0x001b62; 	T(MOV(ah, bl));	// 25569 mov     ah, bl ;~ 0DBE:1B62
cs=0xdbe;eip=0x001b64; 	R(JMP(loc_1dc07));	// 25570 jmp     loc_1DC07 ;~ 0DBE:1B64
loc_1dd27:
	// 5946 
cs=0xdbe;eip=0x001b67; 	T(SUB(si, 2));	// 25574 sub     si, 2 ;~ 0DBE:1B67
cs=0xdbe;eip=0x001b6a; 	T(MOV(ah, bl));	// 25575 mov     ah, bl ;~ 0DBE:1B6A
cs=0xdbe;eip=0x001b6c; 	R(JMP(loc_1dc07));	// 25576 jmp     loc_1DC07 ;~ 0DBE:1B6C
sub_1dd2f:
	// 25583 
cs=0xdbe;eip=0x001b6f; 	T(MOV(ax, 0x0F02));	// 25585 mov     ax, 0F02h ;~ 0DBE:1B6F
ret_dbe_1b72:
	// 5947 
cs=0xdbe;eip=0x001b72; 	T(MOV(dx, 0x3C4));	// 25586 mov     dx, 3C4h ;~ 0DBE:1B72
cs=0xdbe;eip=0x001b75; 	R(OUT(dx, ax));	// 25587 out     dx, ax          ; EGA: sequencer address reg ;~ 0DBE:1B75
cs=0xdbe;eip=0x001b76; 	T(MOV(ax, 5));	// 25589 mov     ax, 5 ;~ 0DBE:1B76
cs=0xdbe;eip=0x001b79; 	T(MOV(dx, 0x3CE));	// 25590 mov     dx, 3CEh ;~ 0DBE:1B79
cs=0xdbe;eip=0x001b7c; 	R(OUT(dx, ax));	// 25591 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:1B7C
	// 25598 nop ;~ 0DBE:1B7D
	// 25599 nop ;~ 0DBE:1B7E
cs=0xdbe;eip=0x001b7f; 	T(MOV(ax, 8));	// 25600 mov     ax, 8 ;~ 0DBE:1B7F
cs=0xdbe;eip=0x001b82; 	R(OUT(dx, ax));	// 25601 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:1B82
	// 25604 nop ;~ 0DBE:1B83
	// 25605 nop ;~ 0DBE:1B84
cs=0xdbe;eip=0x001b85; 	T(MOV(ax, 3));	// 25606 mov     ax, 3 ;~ 0DBE:1B85
cs=0xdbe;eip=0x001b88; 	R(OUT(dx, ax));	// 25607 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:1B88
cs=0xdbe;eip=0x001b89; 	R(RETN(0));	// 25612 retn ;~ 0DBE:1B89
sub_1dd4a:
	// 25620 
#undef arg_0
#define arg_0 6
	// 25622 arg_0           = word ptr  6 ;~ 0DBE:1B8A
#undef arg_2
#define arg_2 8
	// 25623 arg_2           = word ptr  8 ;~ 0DBE:1B8A
#undef arg_4
#define arg_4 0x0A
	// 25624 arg_4           = word ptr  0Ah ;~ 0DBE:1B8A
#undef arg_6
#define arg_6 0x0C
	// 25625 arg_6           = word ptr  0Ch ;~ 0DBE:1B8A
#undef arg_8
#define arg_8 0x0E
	// 25626 arg_8           = word ptr  0Eh ;~ 0DBE:1B8A
#undef arg_a
#define arg_a 0x10
	// 25627 arg_A           = word ptr  10h ;~ 0DBE:1B8A
ret_dbe_1b8a:
	// 5948 
cs=0xdbe;eip=0x001b8a; 	X(PUSH(bp));	// 25629 push    bp ;~ 0DBE:1B8A
cs=0xdbe;eip=0x001b8b; 	T(MOV(bp, sp));	// 25630 mov     bp, sp ;~ 0DBE:1B8B
cs=0xdbe;eip=0x001b8d; 	X(PUSH(es));	// 25631 push    es ;~ 0DBE:1B8D
cs=0xdbe;eip=0x001b8e; 	X(PUSH(si));	// 25632 push    si ;~ 0DBE:1B8E
cs=0xdbe;eip=0x001b8f; 	X(PUSH(di));	// 25633 push    di ;~ 0DBE:1B8F
cs=0xdbe;eip=0x001b90; 	T(CMP(*(db*)(((db*)&word_3a178)), 9));	// 25634 cmp     byte ptr word_3A178, 9 ;~ 0DBE:1B90
cs=0xdbe;eip=0x001b95; 	R(JZ(loc_1dd9d));	// 25635 jz      short loc_1DD9D ;~ 0DBE:1B95
cs=0xdbe;eip=0x001b97; 	R(CALL(sub_1dd2f,0));	// 25636 call    sub_1DD2F ;~ 0DBE:1B97
cs=0xdbe;eip=0x001b9a; 	X(MOV(word_352a4, 0));	// 25637 mov     word_352A4, 0 ;~ 0DBE:1B9A
cs=0xdbe;eip=0x001ba0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 25638 mov     ax, [bp+arg_8] ;~ 0DBE:1BA0
cs=0xdbe;eip=0x001ba3; 	T(SHL(ax, 1));	// 25639 shl     ax, 1 ;~ 0DBE:1BA3
cs=0xdbe;eip=0x001ba5; 	T(SHL(ax, 1));	// 25640 shl     ax, 1 ;~ 0DBE:1BA5
cs=0xdbe;eip=0x001ba7; 	T(SHL(ax, 1));	// 25641 shl     ax, 1 ;~ 0DBE:1BA7
cs=0xdbe;eip=0x001ba9; 	T(MOV(di, ax));	// 25642 mov     di, ax ;~ 0DBE:1BA9
cs=0xdbe;eip=0x001bab; 	T(SHL(ax, 1));	// 25643 shl     ax, 1 ;~ 0DBE:1BAB
cs=0xdbe;eip=0x001bad; 	T(SHL(ax, 1));	// 25644 shl     ax, 1 ;~ 0DBE:1BAD
cs=0xdbe;eip=0x001baf; 	T(ADD(di, ax));	// 25645 add     di, ax ;~ 0DBE:1BAF
cs=0xdbe;eip=0x001bb1; 	T(MOV(bl, 0x80));	// 25646 mov     bl, 80h ; '€' ;~ 0DBE:1BB1
cs=0xdbe;eip=0x001bb3; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_6))));	// 25647 mov     cx, [bp+arg_6] ;~ 0DBE:1BB3
cs=0xdbe;eip=0x001bb6; 	T(MOV(ax, cx));	// 25648 mov     ax, cx ;~ 0DBE:1BB6
cs=0xdbe;eip=0x001bb8; 	T(AND(cl, 7));	// 25649 and     cl, 7 ;~ 0DBE:1BB8
cs=0xdbe;eip=0x001bbb; 	T(ROR(bl, cl));	// 25650 ror     bl, cl ;~ 0DBE:1BBB
cs=0xdbe;eip=0x001bbd; 	X(MOV(byte_352ab, bl));	// 25651 mov     byte_352AB, bl ;~ 0DBE:1BBD
cs=0xdbe;eip=0x001bc1; 	X(MOV(byte_352ac, bl));	// 25652 mov     byte_352AC, bl ;~ 0DBE:1BC1
cs=0xdbe;eip=0x001bc5; 	T(SHR(ax, 1));	// 25653 shr     ax, 1 ;~ 0DBE:1BC5
cs=0xdbe;eip=0x001bc7; 	T(SHR(ax, 1));	// 25654 shr     ax, 1 ;~ 0DBE:1BC7
cs=0xdbe;eip=0x001bc9; 	T(SHR(ax, 1));	// 25655 shr     ax, 1 ;~ 0DBE:1BC9
cs=0xdbe;eip=0x001bcb; 	T(ADD(di, ax));	// 25656 add     di, ax ;~ 0DBE:1BCB
cs=0xdbe;eip=0x001bcd; 	X(MOV(word_34f1a, di));	// 25657 mov     word_34F1A, di ;~ 0DBE:1BCD
cs=0xdbe;eip=0x001bd1; 	X(MOV(word_352a0, di));	// 25658 mov     word_352A0, di ;~ 0DBE:1BD1
cs=0xdbe;eip=0x001bd5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 25659 mov     ax, [bp+arg_4] ;~ 0DBE:1BD5
cs=0xdbe;eip=0x001bd8; 	X(MOV(word_352a2, ax));	// 25660 mov     word_352A2, ax ;~ 0DBE:1BD8
cs=0xdbe;eip=0x001bdb; 	R(JMP(loc_1dddb));	// 25661 jmp     short loc_1DDDB ;~ 0DBE:1BDB
loc_1dd9d:
	// 5949 
cs=0xdbe;eip=0x001bdd; 	X(MOV(byte_352aa, 0));	// 25665 mov     byte_352AA, 0 ;~ 0DBE:1BDD
cs=0xdbe;eip=0x001be2; 	X(MOV(byte_352ab, 0));	// 25666 mov     byte_352AB, 0 ;~ 0DBE:1BE2
cs=0xdbe;eip=0x001be7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 25667 mov     ax, [bp+arg_8] ;~ 0DBE:1BE7
cs=0xdbe;eip=0x001bea; 	T(MOV(bx, ax));	// 25668 mov     bx, ax ;~ 0DBE:1BEA
cs=0xdbe;eip=0x001bec; 	T(AND(bx, 3));	// 25669 and     bx, 3 ;~ 0DBE:1BEC
cs=0xdbe;eip=0x001bef; 	T(ROR(bx, 1));	// 25670 ror     bx, 1 ;~ 0DBE:1BEF
cs=0xdbe;eip=0x001bf1; 	T(ROR(bx, 1));	// 25671 ror     bx, 1 ;~ 0DBE:1BF1
cs=0xdbe;eip=0x001bf3; 	T(ROR(bx, 1));	// 25672 ror     bx, 1 ;~ 0DBE:1BF3
cs=0xdbe;eip=0x001bf5; 	T(MOV(di, bx));	// 25673 mov     di, bx ;~ 0DBE:1BF5
cs=0xdbe;eip=0x001bf7; 	T(AND(ax, 0x0FC));	// 25674 and     ax, 0FCh ;~ 0DBE:1BF7
cs=0xdbe;eip=0x001bfa; 	T(SHL(ax, 1));	// 25675 shl     ax, 1 ;~ 0DBE:1BFA
cs=0xdbe;eip=0x001bfc; 	T(SHL(ax, 1));	// 25676 shl     ax, 1 ;~ 0DBE:1BFC
cs=0xdbe;eip=0x001bfe; 	T(SHL(ax, 1));	// 25677 shl     ax, 1 ;~ 0DBE:1BFE
cs=0xdbe;eip=0x001c00; 	T(ADD(di, ax));	// 25678 add     di, ax ;~ 0DBE:1C00
cs=0xdbe;eip=0x001c02; 	T(SHL(ax, 1));	// 25679 shl     ax, 1 ;~ 0DBE:1C02
cs=0xdbe;eip=0x001c04; 	T(SHL(ax, 1));	// 25680 shl     ax, 1 ;~ 0DBE:1C04
cs=0xdbe;eip=0x001c06; 	T(ADD(di, ax));	// 25681 add     di, ax ;~ 0DBE:1C06
cs=0xdbe;eip=0x001c08; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 25682 mov     ax, [bp+arg_6] ;~ 0DBE:1C08
cs=0xdbe;eip=0x001c0b; 	T(SHR(ax, 1));	// 25683 shr     ax, 1 ;~ 0DBE:1C0B
cs=0xdbe;eip=0x001c0d; 	T(ADD(di, ax));	// 25684 add     di, ax ;~ 0DBE:1C0D
cs=0xdbe;eip=0x001c0f; 	X(MOV(word_34f1a, di));	// 25685 mov     word_34F1A, di ;~ 0DBE:1C0F
cs=0xdbe;eip=0x001c13; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 25686 mov     ax, [bp+arg_4] ;~ 0DBE:1C13
cs=0xdbe;eip=0x001c16; 	T(SHR(ax, 1));	// 25687 shr     ax, 1 ;~ 0DBE:1C16
cs=0xdbe;eip=0x001c18; 	X(MOV(byte_352ac, al));	// 25688 mov     byte_352AC, al ;~ 0DBE:1C18
loc_1dddb:
	// 5950 
cs=0xdbe;eip=0x001c1b; 	T(SUB(cx, cx));	// 25691 sub     cx, cx ;~ 0DBE:1C1B
cs=0xdbe;eip=0x001c1d; 	X(MOV(word_3528e, cx));	// 25692 mov     word_3528E, cx ;~ 0DBE:1C1D
cs=0xdbe;eip=0x001c21; 	X(MOV(word_35290, cx));	// 25693 mov     word_35290, cx ;~ 0DBE:1C21
cs=0xdbe;eip=0x001c25; 	X(MOV(word_35292, cx));	// 25694 mov     word_35292, cx ;~ 0DBE:1C25
cs=0xdbe;eip=0x001c29; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 25695 mov     ax, [bp+arg_A] ;~ 0DBE:1C29
cs=0xdbe;eip=0x001c2c; 	T(OR(ax, ax));	// 25696 or      ax, ax ;~ 0DBE:1C2C
cs=0xdbe;eip=0x001c2e; 	R(JNZ(loc_1de03));	// 25697 jnz     short loc_1DE03 ;~ 0DBE:1C2E
cs=0xdbe;eip=0x001c30; 	X(MOV(word_3529a, cx));	// 25698 mov     word_3529A, cx ;~ 0DBE:1C30
cs=0xdbe;eip=0x001c34; 	T(MOV(cx, 0x3C0));	// 25699 mov     cx, 3C0h ;~ 0DBE:1C34
cs=0xdbe;eip=0x001c37; 	T(SUB(ax, ax));	// 25700 sub     ax, ax ;~ 0DBE:1C37
cs=0xdbe;eip=0x001c39; 	T(MOV(di, 0x0CEBC));	// 25701 mov     di, 0CEBCh ;~ 0DBE:1C39
loc_1ddfc:
	// 5951 
cs=0xdbe;eip=0x001c3c; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 25704 mov     [di], ax ;~ 0DBE:1C3C
cs=0xdbe;eip=0x001c3e; 	T(ADD(di, 2));	// 25705 add     di, 2 ;~ 0DBE:1C3E
cs=0xdbe;eip=0x001c41; 	R(LOOP(loc_1ddfc));	// 25706 loop    loc_1DDFC ;~ 0DBE:1C41
loc_1de03:
	// 5952 
cs=0xdbe;eip=0x001c43; 	T(MOV(ax, word_35292));	// 25710 mov     ax, word_35292 ;~ 0DBE:1C43
cs=0xdbe;eip=0x001c46; 	T(CMP(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 25711 cmp     ax, [bp+arg_2] ;~ 0DBE:1C46
cs=0xdbe;eip=0x001c49; 	R(JNC(loc_1de37));	// 25712 jnb     short loc_1DE37 ;~ 0DBE:1C49
cs=0xdbe;eip=0x001c4b; 	T(INC(ax));	// 25713 inc     ax ;~ 0DBE:1C4B
cs=0xdbe;eip=0x001c4c; 	X(MOV(word_35292, ax));	// 25714 mov     word_35292, ax ;~ 0DBE:1C4C
cs=0xdbe;eip=0x001c4f; 	T(SUB(cx, cx));	// 25715 sub     cx, cx ;~ 0DBE:1C4F
cs=0xdbe;eip=0x001c51; 	T(SUB(dx, dx));	// 25716 sub     dx, dx ;~ 0DBE:1C51
cs=0xdbe;eip=0x001c53; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 25717 mov     si, [bp+arg_0] ;~ 0DBE:1C53
cs=0xdbe;eip=0x001c56; 	T(LODSW);	// 25718 lodsw ;~ 0DBE:1C56
cs=0xdbe;eip=0x001c57; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), si));	// 25719 mov     [bp+arg_0], si ;~ 0DBE:1C57
cs=0xdbe;eip=0x001c5a; 	T(MOV(dl, al));	// 25720 mov     dl, al ;~ 0DBE:1C5A
cs=0xdbe;eip=0x001c5c; 	T(MOV(cl, ah));	// 25721 mov     cl, ah ;~ 0DBE:1C5C
cs=0xdbe;eip=0x001c5e; 	T(ADD(dl, byte_34f30));	// 25722 add     dl, byte_34F30 ;~ 0DBE:1C5E
loc_1de22:
	// 5953 
cs=0xdbe;eip=0x001c62; 	T(TEST(dl, 0x70));	// 25725 test    dl, 70h ;~ 0DBE:1C62
cs=0xdbe;eip=0x001c65; 	R(JNZ(loc_1de3a));	// 25726 jnz     short loc_1DE3A ;~ 0DBE:1C65
cs=0xdbe;eip=0x001c67; 	T(AND(dl, 0x0F));	// 25727 and     dl, 0Fh ;~ 0DBE:1C67
cs=0xdbe;eip=0x001c6a; 	X(MOV(word_35294, dx));	// 25728 mov     word_35294, dx ;~ 0DBE:1C6A
cs=0xdbe;eip=0x001c6e; 	X(PUSH(dx));	// 25729 push    dx ;~ 0DBE:1C6E
cs=0xdbe;eip=0x001c6f; 	X(PUSH(cx));	// 25730 push    cx ;~ 0DBE:1C6F
cs=0xdbe;eip=0x001c70; 	X(PUSH(bp));	// 25731 push    bp ;~ 0DBE:1C70
cs=0xdbe;eip=0x001c71; 	R(CALL(sub_1e047,0));	// 25732 call    sub_1E047 ;~ 0DBE:1C71
cs=0xdbe;eip=0x001c74; 	R(JMP(loc_1dffb));	// 25733 jmp     loc_1DFFB ;~ 0DBE:1C74
loc_1de37:
	// 5954 
cs=0xdbe;eip=0x001c77; 	R(JMP(loc_1e040));	// 25737 jmp     loc_1E040 ;~ 0DBE:1C77
loc_1de3a:
	// 5955 
cs=0xdbe;eip=0x001c7a; 	T(MOV(si, 0x0CEBC));	// 25741 mov     si, 0CEBCh ;~ 0DBE:1C7A
cs=0xdbe;eip=0x001c7d; 	T(ADD(si, word_3529a));	// 25742 add     si, word_3529A ;~ 0DBE:1C7D
cs=0xdbe;eip=0x001c81; 	T(MOV(bx, word_3528e));	// 25743 mov     bx, word_3528E ;~ 0DBE:1C81
cs=0xdbe;eip=0x001c85; 	T(ADD(si, bx));	// 25744 add     si, bx ;~ 0DBE:1C85
cs=0xdbe;eip=0x001c87; 	T(SHL(bx, 1));	// 25745 shl     bx, 1 ;~ 0DBE:1C87
cs=0xdbe;eip=0x001c89; 	T(ADD(si, bx));	// 25746 add     si, bx ;~ 0DBE:1C89
cs=0xdbe;eip=0x001c8b; 	T(MOV(bx, dx));	// 25747 mov     bx, dx ;~ 0DBE:1C8B
cs=0xdbe;eip=0x001c8d; 	T(SHL(bx, 1));	// 25748 shl     bx, 1 ;~ 0DBE:1C8D
cs=0xdbe;eip=0x001c8f; 	T(ADD(bx, dx));	// 25749 add     bx, dx ;~ 0DBE:1C8F
cs=0xdbe;eip=0x001c91; 	X(PUSH(dx));	// 25750 push    dx ;~ 0DBE:1C91
cs=0xdbe;eip=0x001c92; 	X(PUSH(cx));	// 25751 push    cx ;~ 0DBE:1C92
cs=0xdbe;eip=0x001c93; 	X(PUSH(bp));	// 25752 push    bp ;~ 0DBE:1C93
cs=0xdbe;eip=0x001c94; 	X(PUSH(si));	// 25753 push    si ;~ 0DBE:1C94
cs=0xdbe;eip=0x001c95; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 25754 mov     ax, [si] ;~ 0DBE:1C95
cs=0xdbe;eip=0x001c97; 	T(MOV(cx, *(dw*)(raddr(ds,bx+0x0B6A))));	// 25755 mov     cx, [bx+0B6Ah] ;~ 0DBE:1C97
cs=0xdbe;eip=0x001c9b; 	T(ADD(al, cl));	// 25756 add     al, cl ;~ 0DBE:1C9B
cs=0xdbe;eip=0x001c9d; 	R(JNO(loc_1de61));	// 25757 jno     short loc_1DE61 ;~ 0DBE:1C9D
cs=0xdbe;eip=0x001c9f; 	T(MOV(al, 0x7F));	// 25758 mov     al, 7Fh ;~ 0DBE:1C9F
loc_1de61:
	// 5956 
cs=0xdbe;eip=0x001ca1; 	T(ADD(ah, ch));	// 25761 add     ah, ch ;~ 0DBE:1CA1
cs=0xdbe;eip=0x001ca3; 	R(JNO(loc_1de67));	// 25762 jno     short loc_1DE67 ;~ 0DBE:1CA3
cs=0xdbe;eip=0x001ca5; 	T(MOV(ah, 0x7F));	// 25763 mov     ah, 7Fh ;~ 0DBE:1CA5
loc_1de67:
	// 5957 
cs=0xdbe;eip=0x001ca7; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 25766 mov     [si], ax ;~ 0DBE:1CA7
cs=0xdbe;eip=0x001ca9; 	T(MOV(cl, *(raddr(ds,si+2))));	// 25767 mov     cl, [si+2] ;~ 0DBE:1CA9
cs=0xdbe;eip=0x001cac; 	T(ADD(cl, *(raddr(ds,bx+0x0B6C))));	// 25768 add     cl, [bx+0B6Ch] ;~ 0DBE:1CAC
cs=0xdbe;eip=0x001cb0; 	R(JNO(loc_1de74));	// 25769 jno     short loc_1DE74 ;~ 0DBE:1CB0
cs=0xdbe;eip=0x001cb2; 	T(MOV(cl, 0x7F));	// 25770 mov     cl, 7Fh ;~ 0DBE:1CB2
loc_1de74:
	// 5958 
cs=0xdbe;eip=0x001cb4; 	X(MOV(*(raddr(ds,si+2)), cl));	// 25773 mov     [si+2], cl ;~ 0DBE:1CB4
cs=0xdbe;eip=0x001cb7; 	T(MOV(si, 0x0B6A));	// 25774 mov     si, 0B6Ah ;~ 0DBE:1CB7
cs=0xdbe;eip=0x001cba; 	T(SUB(ch, ch));	// 25775 sub     ch, ch ;~ 0DBE:1CBA
cs=0xdbe;eip=0x001cbc; 	T(MOV(bp, cx));	// 25776 mov     bp, cx ;~ 0DBE:1CBC
cs=0xdbe;eip=0x001cbe; 	T(MOV(cl, ah));	// 25777 mov     cl, ah ;~ 0DBE:1CBE
cs=0xdbe;eip=0x001cc0; 	T(MOV(di, cx));	// 25778 mov     di, cx ;~ 0DBE:1CC0
cs=0xdbe;eip=0x001cc2; 	T(MOV(cl, al));	// 25779 mov     cl, al ;~ 0DBE:1CC2
cs=0xdbe;eip=0x001cc4; 	T(MOV(es, cx));	// 25780 mov     es, cx ;~ 0DBE:1CC4
cs=0xdbe;eip=0x001cc6; 	T(MOV(cx, 0x10));	// 25782 mov     cx, 10h ;~ 0DBE:1CC6
cs=0xdbe;eip=0x001cc9; 	X(MOV(word_3528c, 0x1F40));	// 25783 mov     word_3528C, 1F40h ;~ 0DBE:1CC9
loc_1de8f:
	// 5959 
cs=0xdbe;eip=0x001ccf; 	T(LODSW);	// 25786 lodsw ;~ 0DBE:1CCF
cs=0xdbe;eip=0x001cd0; 	T(MOV(bx, es));	// 25787 mov     bx, es ;~ 0DBE:1CD0
cs=0xdbe;eip=0x001cd2; 	T(SUB(bl, al));	// 25788 sub     bl, al ;~ 0DBE:1CD2
cs=0xdbe;eip=0x001cd4; 	R(JNS(loc_1de98));	// 25789 jns     short loc_1DE98 ;~ 0DBE:1CD4
cs=0xdbe;eip=0x001cd6; 	T(NEG(bl));	// 25790 neg     bl ;~ 0DBE:1CD6
loc_1de98:
	// 5960 
cs=0xdbe;eip=0x001cd8; 	T(MOV(dx, bx));	// 25793 mov     dx, bx ;~ 0DBE:1CD8
cs=0xdbe;eip=0x001cda; 	T(MOV(bx, di));	// 25794 mov     bx, di ;~ 0DBE:1CDA
cs=0xdbe;eip=0x001cdc; 	T(SUB(bl, ah));	// 25795 sub     bl, ah ;~ 0DBE:1CDC
cs=0xdbe;eip=0x001cde; 	R(JNS(loc_1dea2));	// 25796 jns     short loc_1DEA2 ;~ 0DBE:1CDE
cs=0xdbe;eip=0x001ce0; 	T(NEG(bl));	// 25797 neg     bl ;~ 0DBE:1CE0
loc_1dea2:
	// 5961 
cs=0xdbe;eip=0x001ce2; 	T(ADD(dx, bx));	// 25800 add     dx, bx ;~ 0DBE:1CE2
cs=0xdbe;eip=0x001ce4; 	T(MOV(bx, bp));	// 25801 mov     bx, bp ;~ 0DBE:1CE4
cs=0xdbe;eip=0x001ce6; 	T(LODSB);	// 25802 lodsb ;~ 0DBE:1CE6
cs=0xdbe;eip=0x001ce7; 	T(SUB(bl, al));	// 25803 sub     bl, al ;~ 0DBE:1CE7
cs=0xdbe;eip=0x001ce9; 	R(JNS(loc_1dead));	// 25804 jns     short loc_1DEAD ;~ 0DBE:1CE9
cs=0xdbe;eip=0x001ceb; 	T(NEG(bl));	// 25805 neg     bl ;~ 0DBE:1CEB
loc_1dead:
	// 5962 
cs=0xdbe;eip=0x001ced; 	T(ADD(dx, bx));	// 25808 add     dx, bx ;~ 0DBE:1CED
cs=0xdbe;eip=0x001cef; 	T(CMP(dx, word_3528c));	// 25809 cmp     dx, word_3528C ;~ 0DBE:1CEF
cs=0xdbe;eip=0x001cf3; 	R(JL(loc_1deb9));	// 25810 jl      short loc_1DEB9 ;~ 0DBE:1CF3
loc_1deb5:
	// 5963 
cs=0xdbe;eip=0x001cf5; 	R(LOOP(loc_1de8f));	// 25813 loop    loc_1DE8F ;~ 0DBE:1CF5
cs=0xdbe;eip=0x001cf7; 	R(JMP(loc_1dec7));	// 25814 jmp     short loc_1DEC7 ;~ 0DBE:1CF7
loc_1deb9:
	// 5964 
cs=0xdbe;eip=0x001cf9; 	X(MOV(word_3528c, dx));	// 25818 mov     word_3528C, dx ;~ 0DBE:1CF9
cs=0xdbe;eip=0x001cfd; 	T(MOV(ax, 0x10));	// 25819 mov     ax, 10h ;~ 0DBE:1CFD
cs=0xdbe;eip=0x001d00; 	T(SUB(ax, cx));	// 25820 sub     ax, cx ;~ 0DBE:1D00
cs=0xdbe;eip=0x001d02; 	X(MOV(word_35294, ax));	// 25821 mov     word_35294, ax ;~ 0DBE:1D02
cs=0xdbe;eip=0x001d05; 	R(JMP(loc_1deb5));	// 25822 jmp     short loc_1DEB5 ;~ 0DBE:1D05
loc_1dec7:
	// 5965 
cs=0xdbe;eip=0x001d07; 	R(CALL(sub_1e047,0));	// 25826 call    sub_1E047 ;~ 0DBE:1D07
cs=0xdbe;eip=0x001d0a; 	X(POP(si));	// 25827 pop     si ;~ 0DBE:1D0A
cs=0xdbe;eip=0x001d0b; 	T(MOV(bx, word_35294));	// 25828 mov     bx, word_35294 ;~ 0DBE:1D0B
cs=0xdbe;eip=0x001d0f; 	T(MOV(ax, bx));	// 25829 mov     ax, bx ;~ 0DBE:1D0F
cs=0xdbe;eip=0x001d11; 	T(SHL(bx, 1));	// 25830 shl     bx, 1 ;~ 0DBE:1D11
cs=0xdbe;eip=0x001d13; 	T(ADD(bx, ax));	// 25831 add     bx, ax ;~ 0DBE:1D13
cs=0xdbe;eip=0x001d15; 	T(LODSW);	// 25832 lodsw ;~ 0DBE:1D15
cs=0xdbe;eip=0x001d16; 	T(MOV(cx, *(dw*)(raddr(ds,bx+0x0B6A))));	// 25833 mov     cx, [bx+0B6Ah] ;~ 0DBE:1D16
cs=0xdbe;eip=0x001d1a; 	T(SUB(al, cl));	// 25834 sub     al, cl ;~ 0DBE:1D1A
cs=0xdbe;eip=0x001d1c; 	T(SUB(ah, ch));	// 25835 sub     ah, ch ;~ 0DBE:1D1C
cs=0xdbe;eip=0x001d1e; 	T(MOV(cl, ah));	// 25836 mov     cl, ah ;~ 0DBE:1D1E
cs=0xdbe;eip=0x001d20; 	T(CBW);	// 25837 cbw ;~ 0DBE:1D20
cs=0xdbe;eip=0x001d21; 	T(INC(ax));	// 25838 inc     ax ;~ 0DBE:1D21
cs=0xdbe;eip=0x001d22; 	T(SAR(ax, 1));	// 25839 sar     ax, 1 ;~ 0DBE:1D22
cs=0xdbe;eip=0x001d24; 	T(MOV(dx, ax));	// 25840 mov     dx, ax ;~ 0DBE:1D24
cs=0xdbe;eip=0x001d26; 	T(SAR(ax, 1));	// 25841 sar     ax, 1 ;~ 0DBE:1D26
cs=0xdbe;eip=0x001d28; 	T(SAR(ax, 1));	// 25842 sar     ax, 1 ;~ 0DBE:1D28
cs=0xdbe;eip=0x001d2a; 	T(SUB(dx, ax));	// 25843 sub     dx, ax ;~ 0DBE:1D2A
cs=0xdbe;eip=0x001d2c; 	T(MOV(es, dx));	// 25844 mov     es, dx ;~ 0DBE:1D2C
cs=0xdbe;eip=0x001d2e; 	T(MOV(al, cl));	// 25846 mov     al, cl ;~ 0DBE:1D2E
cs=0xdbe;eip=0x001d30; 	T(CBW);	// 25847 cbw ;~ 0DBE:1D30
cs=0xdbe;eip=0x001d31; 	T(INC(ax));	// 25848 inc     ax ;~ 0DBE:1D31
cs=0xdbe;eip=0x001d32; 	T(SAR(ax, 1));	// 25849 sar     ax, 1 ;~ 0DBE:1D32
cs=0xdbe;eip=0x001d34; 	T(MOV(cx, ax));	// 25850 mov     cx, ax ;~ 0DBE:1D34
cs=0xdbe;eip=0x001d36; 	T(SAR(ax, 1));	// 25851 sar     ax, 1 ;~ 0DBE:1D36
cs=0xdbe;eip=0x001d38; 	T(SAR(ax, 1));	// 25852 sar     ax, 1 ;~ 0DBE:1D38
cs=0xdbe;eip=0x001d3a; 	T(SUB(cx, ax));	// 25853 sub     cx, ax ;~ 0DBE:1D3A
cs=0xdbe;eip=0x001d3c; 	T(LODSB);	// 25854 lodsb ;~ 0DBE:1D3C
cs=0xdbe;eip=0x001d3d; 	T(SUB(al, *(raddr(ds,bx+0x0B6C))));	// 25855 sub     al, [bx+0B6Ch] ;~ 0DBE:1D3D
cs=0xdbe;eip=0x001d41; 	T(CBW);	// 25856 cbw ;~ 0DBE:1D41
cs=0xdbe;eip=0x001d42; 	T(INC(ax));	// 25857 inc     ax ;~ 0DBE:1D42
cs=0xdbe;eip=0x001d43; 	T(SAR(ax, 1));	// 25858 sar     ax, 1 ;~ 0DBE:1D43
cs=0xdbe;eip=0x001d45; 	T(MOV(dx, ax));	// 25859 mov     dx, ax ;~ 0DBE:1D45
cs=0xdbe;eip=0x001d47; 	T(SAR(ax, 1));	// 25860 sar     ax, 1 ;~ 0DBE:1D47
cs=0xdbe;eip=0x001d49; 	T(SAR(ax, 1));	// 25861 sar     ax, 1 ;~ 0DBE:1D49
cs=0xdbe;eip=0x001d4b; 	T(SUB(dx, ax));	// 25862 sub     dx, ax ;~ 0DBE:1D4B
cs=0xdbe;eip=0x001d4d; 	T(MOV(bx, es));	// 25863 mov     bx, es ;~ 0DBE:1D4D
cs=0xdbe;eip=0x001d4f; 	T(MOV(bp, 0x7F));	// 25864 mov     bp, 7Fh ;~ 0DBE:1D4F
cs=0xdbe;eip=0x001d52; 	T(MOV(di, 0x0FFC0));	// 25865 mov     di, 0FFC0h ;~ 0DBE:1D52
cs=0xdbe;eip=0x001d55; 	T(MOV(al, *(raddr(ds,si))));	// 25866 mov     al, [si] ;~ 0DBE:1D55
cs=0xdbe;eip=0x001d57; 	T(CBW);	// 25867 cbw ;~ 0DBE:1D57
cs=0xdbe;eip=0x001d58; 	T(ADD(ax, bx));	// 25868 add     ax, bx ;~ 0DBE:1D58
cs=0xdbe;eip=0x001d5a; 	T(CMP(ax, bp));	// 25869 cmp     ax, bp ;~ 0DBE:1D5A
cs=0xdbe;eip=0x001d5c; 	R(JG(loc_1df26));	// 25870 jg      short loc_1DF26 ;~ 0DBE:1D5C
cs=0xdbe;eip=0x001d5e; 	T(CMP(ax, di));	// 25871 cmp     ax, di ;~ 0DBE:1D5E
cs=0xdbe;eip=0x001d60; 	R(JGE(loc_1df28));	// 25872 jge     short loc_1DF28 ;~ 0DBE:1D60
cs=0xdbe;eip=0x001d62; 	T(MOV(ax, di));	// 25873 mov     ax, di ;~ 0DBE:1D62
cs=0xdbe;eip=0x001d64; 	R(JMP(loc_1df28));	// 25874 jmp     short loc_1DF28 ;~ 0DBE:1D64
loc_1df26:
	// 5966 
cs=0xdbe;eip=0x001d66; 	T(MOV(ax, bp));	// 25878 mov     ax, bp ;~ 0DBE:1D66
loc_1df28:
	// 5967 
cs=0xdbe;eip=0x001d68; 	X(MOV(*(raddr(ds,si)), al));	// 25882 mov     [si], al ;~ 0DBE:1D68
cs=0xdbe;eip=0x001d6a; 	T(MOV(al, *(raddr(ds,si+1))));	// 25883 mov     al, [si+1] ;~ 0DBE:1D6A
cs=0xdbe;eip=0x001d6d; 	T(CBW);	// 25884 cbw ;~ 0DBE:1D6D
cs=0xdbe;eip=0x001d6e; 	T(ADD(ax, cx));	// 25885 add     ax, cx ;~ 0DBE:1D6E
cs=0xdbe;eip=0x001d70; 	T(CMP(ax, bp));	// 25886 cmp     ax, bp ;~ 0DBE:1D70
cs=0xdbe;eip=0x001d72; 	R(JG(loc_1df3c));	// 25887 jg      short loc_1DF3C ;~ 0DBE:1D72
cs=0xdbe;eip=0x001d74; 	T(CMP(ax, di));	// 25888 cmp     ax, di ;~ 0DBE:1D74
cs=0xdbe;eip=0x001d76; 	R(JGE(loc_1df3e));	// 25889 jge     short loc_1DF3E ;~ 0DBE:1D76
cs=0xdbe;eip=0x001d78; 	T(MOV(ax, di));	// 25890 mov     ax, di ;~ 0DBE:1D78
cs=0xdbe;eip=0x001d7a; 	R(JMP(loc_1df3e));	// 25891 jmp     short loc_1DF3E ;~ 0DBE:1D7A
loc_1df3c:
	// 5968 
cs=0xdbe;eip=0x001d7c; 	T(MOV(ax, bp));	// 25895 mov     ax, bp ;~ 0DBE:1D7C
loc_1df3e:
	// 5969 
cs=0xdbe;eip=0x001d7e; 	X(MOV(*(raddr(ds,si+1)), al));	// 25899 mov     [si+1], al ;~ 0DBE:1D7E
cs=0xdbe;eip=0x001d81; 	T(MOV(al, *(raddr(ds,si+2))));	// 25900 mov     al, [si+2] ;~ 0DBE:1D81
cs=0xdbe;eip=0x001d84; 	T(CBW);	// 25901 cbw ;~ 0DBE:1D84
cs=0xdbe;eip=0x001d85; 	T(ADD(ax, dx));	// 25902 add     ax, dx ;~ 0DBE:1D85
cs=0xdbe;eip=0x001d87; 	T(CMP(ax, bp));	// 25903 cmp     ax, bp ;~ 0DBE:1D87
cs=0xdbe;eip=0x001d89; 	R(JG(loc_1df53));	// 25904 jg      short loc_1DF53 ;~ 0DBE:1D89
cs=0xdbe;eip=0x001d8b; 	T(CMP(ax, di));	// 25905 cmp     ax, di ;~ 0DBE:1D8B
cs=0xdbe;eip=0x001d8d; 	R(JGE(loc_1df55));	// 25906 jge     short loc_1DF55 ;~ 0DBE:1D8D
cs=0xdbe;eip=0x001d8f; 	T(MOV(ax, di));	// 25907 mov     ax, di ;~ 0DBE:1D8F
cs=0xdbe;eip=0x001d91; 	R(JMP(loc_1df55));	// 25908 jmp     short loc_1DF55 ;~ 0DBE:1D91
loc_1df53:
	// 5970 
cs=0xdbe;eip=0x001d93; 	T(MOV(ax, bp));	// 25912 mov     ax, bp ;~ 0DBE:1D93
loc_1df55:
	// 5971 
cs=0xdbe;eip=0x001d95; 	X(MOV(*(raddr(ds,si+2)), al));	// 25916 mov     [si+2], al ;~ 0DBE:1D95
cs=0xdbe;eip=0x001d98; 	T(SUB(si, 3));	// 25917 sub     si, 3 ;~ 0DBE:1D98
cs=0xdbe;eip=0x001d9b; 	T(CMP(word_3529a, 0));	// 25918 cmp     word_3529A, 0 ;~ 0DBE:1D9B
cs=0xdbe;eip=0x001da0; 	R(JZ(loc_1df68));	// 25919 jz      short loc_1DF68 ;~ 0DBE:1DA0
cs=0xdbe;eip=0x001da2; 	T(SUB(si, 0x3C0));	// 25920 sub     si, 3C0h ;~ 0DBE:1DA2
cs=0xdbe;eip=0x001da6; 	R(JMP(loc_1df6c));	// 25921 jmp     short loc_1DF6C ;~ 0DBE:1DA6
loc_1df68:
	// 5972 
cs=0xdbe;eip=0x001da8; 	T(ADD(si, 0x3C0));	// 25925 add     si, 3C0h ;~ 0DBE:1DA8
loc_1df6c:
	// 5973 
cs=0xdbe;eip=0x001dac; 	T(MOV(al, *(raddr(ds,si))));	// 25928 mov     al, [si] ;~ 0DBE:1DAC
cs=0xdbe;eip=0x001dae; 	T(CBW);	// 25929 cbw ;~ 0DBE:1DAE
cs=0xdbe;eip=0x001daf; 	T(ADD(ax, bx));	// 25930 add     ax, bx ;~ 0DBE:1DAF
cs=0xdbe;eip=0x001db1; 	T(CMP(ax, bp));	// 25931 cmp     ax, bp ;~ 0DBE:1DB1
cs=0xdbe;eip=0x001db3; 	R(JG(loc_1df7d));	// 25932 jg      short loc_1DF7D ;~ 0DBE:1DB3
cs=0xdbe;eip=0x001db5; 	T(CMP(ax, di));	// 25933 cmp     ax, di ;~ 0DBE:1DB5
cs=0xdbe;eip=0x001db7; 	R(JGE(loc_1df7f));	// 25934 jge     short loc_1DF7F ;~ 0DBE:1DB7
cs=0xdbe;eip=0x001db9; 	T(MOV(ax, di));	// 25935 mov     ax, di ;~ 0DBE:1DB9
cs=0xdbe;eip=0x001dbb; 	R(JMP(loc_1df7f));	// 25936 jmp     short loc_1DF7F ;~ 0DBE:1DBB
loc_1df7d:
	// 5974 
cs=0xdbe;eip=0x001dbd; 	T(MOV(ax, bp));	// 25940 mov     ax, bp ;~ 0DBE:1DBD
loc_1df7f:
	// 5975 
cs=0xdbe;eip=0x001dbf; 	X(MOV(*(raddr(ds,si)), al));	// 25944 mov     [si], al ;~ 0DBE:1DBF
cs=0xdbe;eip=0x001dc1; 	T(MOV(al, *(raddr(ds,si+1))));	// 25945 mov     al, [si+1] ;~ 0DBE:1DC1
cs=0xdbe;eip=0x001dc4; 	T(CBW);	// 25946 cbw ;~ 0DBE:1DC4
cs=0xdbe;eip=0x001dc5; 	T(ADD(ax, cx));	// 25947 add     ax, cx ;~ 0DBE:1DC5
cs=0xdbe;eip=0x001dc7; 	T(CMP(ax, bp));	// 25948 cmp     ax, bp ;~ 0DBE:1DC7
cs=0xdbe;eip=0x001dc9; 	R(JG(loc_1df93));	// 25949 jg      short loc_1DF93 ;~ 0DBE:1DC9
cs=0xdbe;eip=0x001dcb; 	T(CMP(ax, di));	// 25950 cmp     ax, di ;~ 0DBE:1DCB
cs=0xdbe;eip=0x001dcd; 	R(JGE(loc_1df95));	// 25951 jge     short loc_1DF95 ;~ 0DBE:1DCD
cs=0xdbe;eip=0x001dcf; 	T(MOV(ax, di));	// 25952 mov     ax, di ;~ 0DBE:1DCF
cs=0xdbe;eip=0x001dd1; 	R(JMP(loc_1df95));	// 25953 jmp     short loc_1DF95 ;~ 0DBE:1DD1
loc_1df93:
	// 5976 
cs=0xdbe;eip=0x001dd3; 	T(MOV(ax, bp));	// 25957 mov     ax, bp ;~ 0DBE:1DD3
loc_1df95:
	// 5977 
cs=0xdbe;eip=0x001dd5; 	X(MOV(*(raddr(ds,si+1)), al));	// 25961 mov     [si+1], al ;~ 0DBE:1DD5
cs=0xdbe;eip=0x001dd8; 	T(MOV(al, *(raddr(ds,si+2))));	// 25962 mov     al, [si+2] ;~ 0DBE:1DD8
cs=0xdbe;eip=0x001ddb; 	T(CBW);	// 25963 cbw ;~ 0DBE:1DDB
cs=0xdbe;eip=0x001ddc; 	T(ADD(ax, dx));	// 25964 add     ax, dx ;~ 0DBE:1DDC
cs=0xdbe;eip=0x001dde; 	T(CMP(ax, bp));	// 25965 cmp     ax, bp ;~ 0DBE:1DDE
cs=0xdbe;eip=0x001de0; 	R(JG(loc_1dfaa));	// 25966 jg      short loc_1DFAA ;~ 0DBE:1DE0
cs=0xdbe;eip=0x001de2; 	T(CMP(ax, di));	// 25967 cmp     ax, di ;~ 0DBE:1DE2
cs=0xdbe;eip=0x001de4; 	R(JGE(loc_1dfac));	// 25968 jge     short loc_1DFAC ;~ 0DBE:1DE4
cs=0xdbe;eip=0x001de6; 	T(MOV(ax, di));	// 25969 mov     ax, di ;~ 0DBE:1DE6
cs=0xdbe;eip=0x001de8; 	R(JMP(loc_1dfac));	// 25970 jmp     short loc_1DFAC ;~ 0DBE:1DE8
loc_1dfaa:
	// 5978 
cs=0xdbe;eip=0x001dea; 	T(MOV(ax, bp));	// 25974 mov     ax, bp ;~ 0DBE:1DEA
loc_1dfac:
	// 5979 
cs=0xdbe;eip=0x001dec; 	X(MOV(*(raddr(ds,si+2)), al));	// 25978 mov     [si+2], al ;~ 0DBE:1DEC
cs=0xdbe;eip=0x001def; 	T(ADD(si, 3));	// 25979 add     si, 3 ;~ 0DBE:1DEF
cs=0xdbe;eip=0x001df2; 	T(SAR(bx, 1));	// 25980 sar     bx, 1 ;~ 0DBE:1DF2
cs=0xdbe;eip=0x001df4; 	T(SAR(cx, 1));	// 25981 sar     cx, 1 ;~ 0DBE:1DF4
cs=0xdbe;eip=0x001df6; 	T(SAR(dx, 1));	// 25982 sar     dx, 1 ;~ 0DBE:1DF6
cs=0xdbe;eip=0x001df8; 	T(MOV(al, *(raddr(ds,si))));	// 25983 mov     al, [si] ;~ 0DBE:1DF8
cs=0xdbe;eip=0x001dfa; 	T(CBW);	// 25984 cbw ;~ 0DBE:1DFA
cs=0xdbe;eip=0x001dfb; 	T(ADD(ax, bx));	// 25985 add     ax, bx ;~ 0DBE:1DFB
cs=0xdbe;eip=0x001dfd; 	T(CMP(ax, bp));	// 25986 cmp     ax, bp ;~ 0DBE:1DFD
cs=0xdbe;eip=0x001dff; 	R(JG(loc_1dfc9));	// 25987 jg      short loc_1DFC9 ;~ 0DBE:1DFF
cs=0xdbe;eip=0x001e01; 	T(CMP(ax, di));	// 25988 cmp     ax, di ;~ 0DBE:1E01
cs=0xdbe;eip=0x001e03; 	R(JGE(loc_1dfcb));	// 25989 jge     short loc_1DFCB ;~ 0DBE:1E03
cs=0xdbe;eip=0x001e05; 	T(MOV(ax, di));	// 25990 mov     ax, di ;~ 0DBE:1E05
cs=0xdbe;eip=0x001e07; 	R(JMP(loc_1dfcb));	// 25991 jmp     short loc_1DFCB ;~ 0DBE:1E07
loc_1dfc9:
	// 5980 
cs=0xdbe;eip=0x001e09; 	T(MOV(ax, bp));	// 25995 mov     ax, bp ;~ 0DBE:1E09
loc_1dfcb:
	// 5981 
cs=0xdbe;eip=0x001e0b; 	X(MOV(*(raddr(ds,si)), al));	// 25999 mov     [si], al ;~ 0DBE:1E0B
cs=0xdbe;eip=0x001e0d; 	T(MOV(al, *(raddr(ds,si+1))));	// 26000 mov     al, [si+1] ;~ 0DBE:1E0D
cs=0xdbe;eip=0x001e10; 	T(CBW);	// 26001 cbw ;~ 0DBE:1E10
cs=0xdbe;eip=0x001e11; 	T(ADD(ax, cx));	// 26002 add     ax, cx ;~ 0DBE:1E11
cs=0xdbe;eip=0x001e13; 	T(CMP(ax, bp));	// 26003 cmp     ax, bp ;~ 0DBE:1E13
cs=0xdbe;eip=0x001e15; 	R(JG(loc_1dfdf));	// 26004 jg      short loc_1DFDF ;~ 0DBE:1E15
cs=0xdbe;eip=0x001e17; 	T(CMP(ax, di));	// 26005 cmp     ax, di ;~ 0DBE:1E17
cs=0xdbe;eip=0x001e19; 	R(JGE(loc_1dfe1));	// 26006 jge     short loc_1DFE1 ;~ 0DBE:1E19
cs=0xdbe;eip=0x001e1b; 	T(MOV(ax, di));	// 26007 mov     ax, di ;~ 0DBE:1E1B
cs=0xdbe;eip=0x001e1d; 	R(JMP(loc_1dfe1));	// 26008 jmp     short loc_1DFE1 ;~ 0DBE:1E1D
loc_1dfdf:
	// 5982 
cs=0xdbe;eip=0x001e1f; 	T(MOV(ax, bp));	// 26012 mov     ax, bp ;~ 0DBE:1E1F
loc_1dfe1:
	// 5983 
cs=0xdbe;eip=0x001e21; 	X(MOV(*(raddr(ds,si+1)), al));	// 26016 mov     [si+1], al ;~ 0DBE:1E21
cs=0xdbe;eip=0x001e24; 	T(MOV(al, *(raddr(ds,si+2))));	// 26017 mov     al, [si+2] ;~ 0DBE:1E24
cs=0xdbe;eip=0x001e27; 	T(CBW);	// 26018 cbw ;~ 0DBE:1E27
cs=0xdbe;eip=0x001e28; 	T(ADD(ax, dx));	// 26019 add     ax, dx ;~ 0DBE:1E28
cs=0xdbe;eip=0x001e2a; 	T(CMP(ax, bp));	// 26020 cmp     ax, bp ;~ 0DBE:1E2A
cs=0xdbe;eip=0x001e2c; 	R(JG(loc_1dff6));	// 26021 jg      short loc_1DFF6 ;~ 0DBE:1E2C
cs=0xdbe;eip=0x001e2e; 	T(CMP(ax, di));	// 26022 cmp     ax, di ;~ 0DBE:1E2E
cs=0xdbe;eip=0x001e30; 	R(JGE(loc_1dff8));	// 26023 jge     short loc_1DFF8 ;~ 0DBE:1E30
cs=0xdbe;eip=0x001e32; 	T(MOV(ax, di));	// 26024 mov     ax, di ;~ 0DBE:1E32
cs=0xdbe;eip=0x001e34; 	R(JMP(loc_1dff8));	// 26025 jmp     short loc_1DFF8 ;~ 0DBE:1E34
loc_1dff6:
	// 5984 
cs=0xdbe;eip=0x001e36; 	T(MOV(ax, bp));	// 26029 mov     ax, bp ;~ 0DBE:1E36
loc_1dff8:
	// 5985 
cs=0xdbe;eip=0x001e38; 	X(MOV(*(raddr(ds,si+2)), al));	// 26033 mov     [si+2], al ;~ 0DBE:1E38
loc_1dffb:
	// 5986 
cs=0xdbe;eip=0x001e3b; 	T(MOV(ax, word_3528e));	// 26036 mov     ax, word_3528E ;~ 0DBE:1E3B
cs=0xdbe;eip=0x001e3e; 	T(INC(ax));	// 26037 inc     ax ;~ 0DBE:1E3E
cs=0xdbe;eip=0x001e3f; 	X(MOV(word_3528e, ax));	// 26038 mov     word_3528E, ax ;~ 0DBE:1E3F
cs=0xdbe;eip=0x001e42; 	X(POP(bp));	// 26039 pop     bp ;~ 0DBE:1E42
cs=0xdbe;eip=0x001e43; 	T(CMP(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 26040 cmp     ax, [bp+arg_4] ;~ 0DBE:1E43
cs=0xdbe;eip=0x001e46; 	R(JNZ(loc_1e035));	// 26041 jnz     short loc_1E035 ;~ 0DBE:1E46
cs=0xdbe;eip=0x001e48; 	X(MOV(word_3528e, 0));	// 26042 mov     word_3528E, 0 ;~ 0DBE:1E48
cs=0xdbe;eip=0x001e4e; 	X(INC(word_35290));	// 26043 inc     word_35290 ;~ 0DBE:1E4E
cs=0xdbe;eip=0x001e52; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 26044 mov     ax, [bp+arg_4] ;~ 0DBE:1E52
cs=0xdbe;eip=0x001e55; 	T(MOV(cx, ax));	// 26045 mov     cx, ax ;~ 0DBE:1E55
cs=0xdbe;eip=0x001e57; 	T(SHL(cx, 1));	// 26046 shl     cx, 1 ;~ 0DBE:1E57
cs=0xdbe;eip=0x001e59; 	T(ADD(cx, ax));	// 26047 add     cx, ax ;~ 0DBE:1E59
cs=0xdbe;eip=0x001e5b; 	T(MOV(di, 0x0CEBC));	// 26048 mov     di, 0CEBCh ;~ 0DBE:1E5B
cs=0xdbe;eip=0x001e5e; 	T(ADD(di, word_3529a));	// 26049 add     di, word_3529A ;~ 0DBE:1E5E
cs=0xdbe;eip=0x001e62; 	T(MOV(ax, ds));	// 26050 mov     ax, ds ;~ 0DBE:1E62
cs=0xdbe;eip=0x001e64; 	T(MOV(es, ax));	// 26051 mov     es, ax ;~ 0DBE:1E64
cs=0xdbe;eip=0x001e66; 	T(SUB(ax, ax));	// 26053 sub     ax, ax ;~ 0DBE:1E66
cs=0xdbe;eip=0x001e68; 	T(SHR(cx, 1));	// 26054 shr     cx, 1 ;~ 0DBE:1E68
cs=0xdbe;eip=0x001e6a; 	R(JNC(loc_1e02d));	// 26055 jnb     short loc_1E02D ;~ 0DBE:1E6A
cs=0xdbe;eip=0x001e6c; 	X(STOSB);	// 26056 stosb ;~ 0DBE:1E6C
loc_1e02d:
	// 5987 
	// 26059 rep stosw ;~ 0DBE:1E6D
cs=0xdbe;eip=0x001e6d; 	X(	REP STOSW);	// 26059 rep stosw ;~ 0DBE:1E6D
cs=0xdbe;eip=0x001e6f; 	X(XOR(word_3529a, 0x3C0));	// 26060 xor     word_3529A, 3C0h ;~ 0DBE:1E6F
loc_1e035:
	// 5988 
cs=0xdbe;eip=0x001e75; 	X(POP(cx));	// 26063 pop     cx ;~ 0DBE:1E75
cs=0xdbe;eip=0x001e76; 	X(POP(dx));	// 26064 pop     dx ;~ 0DBE:1E76
cs=0xdbe;eip=0x001e77; 	T(DEC(cx));	// 26065 dec     cx ;~ 0DBE:1E77
cs=0xdbe;eip=0x001e78; 	R(JZ(loc_1e03d));	// 26066 jz      short loc_1E03D ;~ 0DBE:1E78
cs=0xdbe;eip=0x001e7a; 	R(JMP(loc_1de22));	// 26067 jmp     loc_1DE22 ;~ 0DBE:1E7A
loc_1e03d:
	// 5989 
cs=0xdbe;eip=0x001e7d; 	R(JMP(loc_1de03));	// 26071 jmp     loc_1DE03 ;~ 0DBE:1E7D
loc_1e040:
	// 5990 
cs=0xdbe;eip=0x001e80; 	X(POP(di));	// 26075 pop     di ;~ 0DBE:1E80
cs=0xdbe;eip=0x001e81; 	X(POP(si));	// 26076 pop     si ;~ 0DBE:1E81
cs=0xdbe;eip=0x001e82; 	X(POP(es));	// 26077 pop     es ;~ 0DBE:1E82
cs=0xdbe;eip=0x001e83; 	T(MOV(sp, bp));	// 26079 mov     sp, bp ;~ 0DBE:1E83
cs=0xdbe;eip=0x001e85; 	X(POP(bp));	// 26080 pop     bp ;~ 0DBE:1E85
cs=0xdbe;eip=0x001e86; 	R(RETF(0));	// 26081 retf ;~ 0DBE:1E86
sub_1e047:
	// 26088 
cs=0xdbe;eip=0x001e87; 	T(CMP(*(db*)(((db*)&word_3a178)), 9));	// 26090 cmp     byte ptr word_3A178, 9 ;~ 0DBE:1E87
ret_dbe_1e8c:
	// 5991 
cs=0xdbe;eip=0x001e8c; 	R(JZ(loc_1e09f));	// 26091 jz      short loc_1E09F ;~ 0DBE:1E8C
cs=0xdbe;eip=0x001e8e; 	T(MOV(bx, word_2beda));	// 26092 mov     bx, word_2BEDA ;~ 0DBE:1E8E
cs=0xdbe;eip=0x001e92; 	T(SHL(bx, 1));	// 26093 shl     bx, 1 ;~ 0DBE:1E92
cs=0xdbe;eip=0x001e94; 	T(MOV(es, *(dw*)(raddr(ds,bx-0x6F34))));	// 26094 mov     es, word ptr [bx-6F34h] ;~ 0DBE:1E94
cs=0xdbe;eip=0x001e98; 	T(MOV(di, word_34f1a));	// 26095 mov     di, word_34F1A ;~ 0DBE:1E98
cs=0xdbe;eip=0x001e9c; 	T(MOV(dx, 0x3CE));	// 26096 mov     dx, 3CEh ;~ 0DBE:1E9C
cs=0xdbe;eip=0x001e9f; 	T(MOV(al, 8));	// 26097 mov     al, 8 ;~ 0DBE:1E9F
cs=0xdbe;eip=0x001ea1; 	T(MOV(ah, byte_352ab));	// 26098 mov     ah, byte_352AB ;~ 0DBE:1EA1
cs=0xdbe;eip=0x001ea5; 	T(MOV(bl, ah));	// 26099 mov     bl, ah ;~ 0DBE:1EA5
cs=0xdbe;eip=0x001ea7; 	R(OUT(dx, ax));	// 26100 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:1EA7
cs=0xdbe;eip=0x001ea8; 	T(SUB(al, al));	// 26103 sub     al, al ;~ 0DBE:1EA8
cs=0xdbe;eip=0x001eaa; 	T(MOV(ah, *(db*)(((db*)&word_35294))));	// 26104 mov     ah, byte ptr word_35294 ;~ 0DBE:1EAA
cs=0xdbe;eip=0x001eae; 	R(OUT(dx, ax));	// 26105 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0DBE:1EAE
cs=0xdbe;eip=0x001eaf; 	X(AND(*(raddr(es,di)), al));	// 26108 and     es:[di], al ;~ 0DBE:1EAF
cs=0xdbe;eip=0x001eb2; 	T(ROR(bl, 1));	// 26109 ror     bl, 1 ;~ 0DBE:1EB2
cs=0xdbe;eip=0x001eb4; 	R(JNC(loc_1e077));	// 26110 jnb     short loc_1E077 ;~ 0DBE:1EB4
cs=0xdbe;eip=0x001eb6; 	T(INC(di));	// 26111 inc     di ;~ 0DBE:1EB6
loc_1e077:
	// 5992 
cs=0xdbe;eip=0x001eb7; 	T(MOV(ax, word_352a4));	// 26114 mov     ax, word_352A4 ;~ 0DBE:1EB7
cs=0xdbe;eip=0x001eba; 	T(INC(ax));	// 26115 inc     ax ;~ 0DBE:1EBA
cs=0xdbe;eip=0x001ebb; 	T(CMP(ax, word_352a2));	// 26116 cmp     ax, word_352A2 ;~ 0DBE:1EBB
cs=0xdbe;eip=0x001ebf; 	R(JC(loc_1e092));	// 26117 jb      short loc_1E092 ;~ 0DBE:1EBF
cs=0xdbe;eip=0x001ec1; 	T(SUB(ax, ax));	// 26118 sub     ax, ax ;~ 0DBE:1EC1
cs=0xdbe;eip=0x001ec3; 	T(MOV(di, word_352a0));	// 26119 mov     di, word_352A0 ;~ 0DBE:1EC3
cs=0xdbe;eip=0x001ec7; 	T(SUB(di, 0x28));	// 26120 sub     di, 28h ; '(' ;~ 0DBE:1EC7
cs=0xdbe;eip=0x001eca; 	X(MOV(word_352a0, di));	// 26121 mov     word_352A0, di ;~ 0DBE:1ECA
cs=0xdbe;eip=0x001ece; 	T(MOV(bl, byte_352ac));	// 26122 mov     bl, byte_352AC ;~ 0DBE:1ECE
loc_1e092:
	// 5993 
cs=0xdbe;eip=0x001ed2; 	X(MOV(word_34f1a, di));	// 26125 mov     word_34F1A, di ;~ 0DBE:1ED2
cs=0xdbe;eip=0x001ed6; 	X(MOV(word_352a4, ax));	// 26126 mov     word_352A4, ax ;~ 0DBE:1ED6
cs=0xdbe;eip=0x001ed9; 	X(MOV(byte_352ab, bl));	// 26127 mov     byte_352AB, bl ;~ 0DBE:1ED9
cs=0xdbe;eip=0x001edd; 	R(JMP(locret_1e0f1));	// 26128 jmp     short locret_1E0F1 ;~ 0DBE:1EDD
loc_1e09f:
	// 5994 
cs=0xdbe;eip=0x001edf; 	T(MOV(ah, byte_35296));	// 26132 mov     ah, byte_35296 ;~ 0DBE:1EDF
cs=0xdbe;eip=0x001ee3; 	T(MOV(al, *(db*)(((db*)&word_35294))));	// 26133 mov     al, byte ptr word_35294 ;~ 0DBE:1EE3
cs=0xdbe;eip=0x001ee6; 	X(MOV(byte_35296, al));	// 26134 mov     byte_35296, al ;~ 0DBE:1EE6
cs=0xdbe;eip=0x001ee9; 	X(INC(byte_352aa));	// 26135 inc     byte_352AA ;~ 0DBE:1EE9
cs=0xdbe;eip=0x001eed; 	T(TEST(byte_352aa, 1));	// 26136 test    byte_352AA, 1 ;~ 0DBE:1EED
cs=0xdbe;eip=0x001ef2; 	R(JNZ(locret_1e0f1));	// 26137 jnz     short locret_1E0F1 ;~ 0DBE:1EF2
cs=0xdbe;eip=0x001ef4; 	T(MOV(bx, word_2beda));	// 26138 mov     bx, word_2BEDA ;~ 0DBE:1EF4
cs=0xdbe;eip=0x001ef8; 	T(SHL(bx, 1));	// 26139 shl     bx, 1 ;~ 0DBE:1EF8
cs=0xdbe;eip=0x001efa; 	T(MOV(es, *(dw*)(raddr(ds,bx-0x6F34))));	// 26140 mov     es, word ptr [bx-6F34h] ;~ 0DBE:1EFA
cs=0xdbe;eip=0x001efe; 	T(SHL(ah, 1));	// 26141 shl     ah, 1 ;~ 0DBE:1EFE
cs=0xdbe;eip=0x001f00; 	T(SHL(ah, 1));	// 26142 shl     ah, 1 ;~ 0DBE:1F00
cs=0xdbe;eip=0x001f02; 	T(SHL(ah, 1));	// 26143 shl     ah, 1 ;~ 0DBE:1F02
cs=0xdbe;eip=0x001f04; 	T(SHL(ah, 1));	// 26144 shl     ah, 1 ;~ 0DBE:1F04
cs=0xdbe;eip=0x001f06; 	T(OR(al, ah));	// 26145 or      al, ah ;~ 0DBE:1F06
cs=0xdbe;eip=0x001f08; 	T(MOV(di, word_34f1a));	// 26146 mov     di, word_34F1A ;~ 0DBE:1F08
cs=0xdbe;eip=0x001f0c; 	X(STOSB);	// 26147 stosb ;~ 0DBE:1F0C
cs=0xdbe;eip=0x001f0d; 	T(MOV(bl, byte_352ab));	// 26148 mov     bl, byte_352AB ;~ 0DBE:1F0D
cs=0xdbe;eip=0x001f11; 	T(INC(bl));	// 26149 inc     bl ;~ 0DBE:1F11
cs=0xdbe;eip=0x001f13; 	T(CMP(bl, byte_352ac));	// 26150 cmp     bl, byte_352AC ;~ 0DBE:1F13
cs=0xdbe;eip=0x001f17; 	R(JNZ(loc_1e0e9));	// 26151 jnz     short loc_1E0E9 ;~ 0DBE:1F17
cs=0xdbe;eip=0x001f19; 	T(SUB(bh, bh));	// 26152 sub     bh, bh ;~ 0DBE:1F19
cs=0xdbe;eip=0x001f1b; 	T(SUB(di, bx));	// 26153 sub     di, bx ;~ 0DBE:1F1B
cs=0xdbe;eip=0x001f1d; 	T(SUB(bl, bl));	// 26154 sub     bl, bl ;~ 0DBE:1F1D
cs=0xdbe;eip=0x001f1f; 	T(SUB(di, 0x2000));	// 26155 sub     di, 2000h ;~ 0DBE:1F1F
cs=0xdbe;eip=0x001f23; 	R(JNS(loc_1e0e9));	// 26156 jns     short loc_1E0E9 ;~ 0DBE:1F23
cs=0xdbe;eip=0x001f25; 	T(ADD(di, 0x7F60));	// 26157 add     di, 7F60h ;~ 0DBE:1F25
loc_1e0e9:
	// 5995 
cs=0xdbe;eip=0x001f29; 	X(MOV(word_34f1a, di));	// 26161 mov     word_34F1A, di ;~ 0DBE:1F29
cs=0xdbe;eip=0x001f2d; 	X(MOV(byte_352ab, bl));	// 26162 mov     byte_352AB, bl ;~ 0DBE:1F2D
locret_1e0f1:
	// 5996 
cs=0xdbe;eip=0x001f31; 	R(RETN(0));	// 26166 retn ;~ 0DBE:1F31
sub_1e0f2:
	// 26174 
#undef arg_0
#define arg_0 6
	// 26177 arg_0           = word ptr  6 ;~ 0DBE:1F32
#undef arg_2
#define arg_2 8
	// 26178 arg_2           = byte ptr  8 ;~ 0DBE:1F32
#undef arg_4
#define arg_4 0x0A
	// 26179 arg_4           = byte ptr  0Ah ;~ 0DBE:1F32
ret_dbe_1f32:
	// 5997 
cs=0xdbe;eip=0x001f32; 	X(PUSH(bp));	// 26181 push    bp ;~ 0DBE:1F32
cs=0xdbe;eip=0x001f33; 	T(MOV(bp, sp));	// 26182 mov     bp, sp ;~ 0DBE:1F33
cs=0xdbe;eip=0x001f35; 	X(PUSH(ds));	// 26183 push    ds ;~ 0DBE:1F35
cs=0xdbe;eip=0x001f36; 	X(PUSH(si));	// 26184 push    si ;~ 0DBE:1F36
cs=0xdbe;eip=0x001f37; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 26185 mov     si, [bp+arg_0] ;~ 0DBE:1F37
loc_1e0fa:
	// 5998 
cs=0xdbe;eip=0x001f3a; 	T(MOV(ah, 2));	// 26188 mov     ah, 2 ;~ 0DBE:1F3A
cs=0xdbe;eip=0x001f3c; 	T(MOV(bh, 0));	// 26189 mov     bh, 0 ;~ 0DBE:1F3C
cs=0xdbe;eip=0x001f3e; 	T(MOV(dh, *(raddr(ss,bp+arg_4))));	// 26190 mov     dh, [bp+arg_4] ;~ 0DBE:1F3E
cs=0xdbe;eip=0x001f41; 	T(MOV(dl, *(raddr(ss,bp+arg_2))));	// 26191 mov     dl, [bp+arg_2] ;~ 0DBE:1F41
cs=0xdbe;eip=0x001f44; 	R(_INT(0x10));	// 26192 int     10h             ; - VIDEO - SET CURSOR POSITION ;~ 0DBE:1F44
cs=0xdbe;eip=0x001f46; 	T(LODSB);	// 26195 lodsb ;~ 0DBE:1F46
cs=0xdbe;eip=0x001f47; 	T(CMP(al, 0));	// 26196 cmp     al, 0 ;~ 0DBE:1F47
cs=0xdbe;eip=0x001f49; 	R(JZ(loc_1e11b));	// 26197 jz      short loc_1E11B ;~ 0DBE:1F49
cs=0xdbe;eip=0x001f4b; 	T(MOV(ah, 9));	// 26198 mov     ah, 9 ;~ 0DBE:1F4B
cs=0xdbe;eip=0x001f4d; 	T(MOV(bh, 0));	// 26199 mov     bh, 0 ;~ 0DBE:1F4D
cs=0xdbe;eip=0x001f4f; 	T(MOV(bl, 0x0F));	// 26200 mov     bl, 0Fh ;~ 0DBE:1F4F
cs=0xdbe;eip=0x001f51; 	T(MOV(cx, 1));	// 26201 mov     cx, 1 ;~ 0DBE:1F51
cs=0xdbe;eip=0x001f54; 	R(_INT(0x10));	// 26202 int     10h             ; - VIDEO - WRITE ATTRIBUTES/CHARACTERS AT CURSOR POSITION ;~ 0DBE:1F54
cs=0xdbe;eip=0x001f56; 	X(INC(*(raddr(ss,bp+arg_2))));	// 26206 inc     [bp+arg_2] ;~ 0DBE:1F56
cs=0xdbe;eip=0x001f59; 	R(JMP(loc_1e0fa));	// 26207 jmp     short loc_1E0FA ;~ 0DBE:1F59
loc_1e11b:
	// 5999 
cs=0xdbe;eip=0x001f5b; 	X(POP(si));	// 26211 pop     si ;~ 0DBE:1F5B
cs=0xdbe;eip=0x001f5c; 	X(POP(ds));	// 26212 pop     ds ;~ 0DBE:1F5C
cs=0xdbe;eip=0x001f5d; 	X(POP(bp));	// 26213 pop     bp ;~ 0DBE:1F5D
cs=0xdbe;eip=0x001f5e; 	R(RETF(0));	// 26214 retf ;~ 0DBE:1F5E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_1c836: 	goto loc_1c836;
        case m2c::kloc_1c84f: 	goto loc_1c84f;
        case m2c::kloc_1c85c: 	goto loc_1c85c;
        case m2c::kloc_1c869: 	goto loc_1c869;
        case m2c::kloc_1c86e: 	goto loc_1c86e;
        case m2c::kloc_1c871: 	goto loc_1c871;
        case m2c::kloc_1c874: 	goto loc_1c874;
        case m2c::kloc_1c88f: 	goto loc_1c88f;
        case m2c::kloc_1c8af: 	goto loc_1c8af;
        case m2c::kloc_1c956: 	goto loc_1c956;
        case m2c::kloc_1c96f: 	goto loc_1c96f;
        case m2c::kloc_1c9d5: 	goto loc_1c9d5;
        case m2c::kloc_1c9f1: 	goto loc_1c9f1;
        case m2c::kloc_1ca26: 	goto loc_1ca26;
        case m2c::kloc_1ca38: 	goto loc_1ca38;
        case m2c::kloc_1caa2: 	goto loc_1caa2;
        case m2c::kloc_1caac: 	goto loc_1caac;
        case m2c::kloc_1cab1: 	goto loc_1cab1;
        case m2c::kloc_1cab6: 	goto loc_1cab6;
        case m2c::kloc_1cabd: 	goto loc_1cabd;
        case m2c::kloc_1cae0: 	goto loc_1cae0;
        case m2c::kloc_1cae3: 	goto loc_1cae3;
        case m2c::kloc_1cb11: 	goto loc_1cb11;
        case m2c::kloc_1cb24: 	goto loc_1cb24;
        case m2c::kloc_1cb40: 	goto loc_1cb40;
        case m2c::kloc_1cb59: 	goto loc_1cb59;
        case m2c::kloc_1cb60: 	goto loc_1cb60;
        case m2c::kloc_1cbbf: 	goto loc_1cbbf;
        case m2c::kloc_1cbc3: 	goto loc_1cbc3;
        case m2c::kloc_1cbca: 	goto loc_1cbca;
        case m2c::kloc_1cbe8: 	goto loc_1cbe8;
        case m2c::kloc_1cc11: 	goto loc_1cc11;
        case m2c::kloc_1cc14: 	goto loc_1cc14;
        case m2c::kloc_1cc4a: 	goto loc_1cc4a;
        case m2c::kloc_1cc5c: 	goto loc_1cc5c;
        case m2c::kloc_1cc60: 	goto loc_1cc60;
        case m2c::kloc_1cc8c: 	goto loc_1cc8c;
        case m2c::kloc_1cc98: 	goto loc_1cc98;
        case m2c::kloc_1ccaa: 	goto loc_1ccaa;
        case m2c::kloc_1ccad: 	goto loc_1ccad;
        case m2c::kloc_1ccb0: 	goto loc_1ccb0;
        case m2c::kloc_1ccba: 	goto loc_1ccba;
        case m2c::kloc_1ccc2: 	goto loc_1ccc2;
        case m2c::kloc_1cce7: 	goto loc_1cce7;
        case m2c::kloc_1ccea: 	goto loc_1ccea;
        case m2c::kloc_1cced: 	goto loc_1cced;
        case m2c::kloc_1ccf7: 	goto loc_1ccf7;
        case m2c::kloc_1ccff: 	goto loc_1ccff;
        case m2c::kloc_1cd1f: 	goto loc_1cd1f;
        case m2c::kloc_1cd28: 	goto loc_1cd28;
        case m2c::kloc_1cd62: 	goto loc_1cd62;
        case m2c::kloc_1cd69: 	goto loc_1cd69;
        case m2c::kloc_1cd6f: 	goto loc_1cd6f;
        case m2c::kloc_1cd7b: 	goto loc_1cd7b;
        case m2c::kloc_1cd84: 	goto loc_1cd84;
        case m2c::kloc_1cda9: 	goto loc_1cda9;
        case m2c::kloc_1cdb2: 	goto loc_1cdb2;
        case m2c::kloc_1cddf: 	goto loc_1cddf;
        case m2c::kloc_1cdf4: 	goto loc_1cdf4;
        case m2c::kloc_1ce35: 	goto loc_1ce35;
        case m2c::kloc_1ce41: 	goto loc_1ce41;
        case m2c::kloc_1ce4e: 	goto loc_1ce4e;
        case m2c::kloc_1ce52: 	goto loc_1ce52;
        case m2c::kloc_1ce5c: 	goto loc_1ce5c;
        case m2c::kloc_1ce61: 	goto loc_1ce61;
        case m2c::kloc_1ce65: 	goto loc_1ce65;
        case m2c::kloc_1d054: 	goto loc_1d054;
        case m2c::kloc_1d09c: 	goto loc_1d09c;
        case m2c::kloc_1d0a8: 	goto loc_1d0a8;
        case m2c::kloc_1d0ab: 	goto loc_1d0ab;
        case m2c::kloc_1d0ae: 	goto loc_1d0ae;
        case m2c::kloc_1d0ba: 	goto loc_1d0ba;
        case m2c::kloc_1d0c2: 	goto loc_1d0c2;
        case m2c::kloc_1d0c6: 	goto loc_1d0c6;
        case m2c::kloc_1d0d4: 	goto loc_1d0d4;
        case m2c::kloc_1d0e7: 	goto loc_1d0e7;
        case m2c::kloc_1d0f0: 	goto loc_1d0f0;
        case m2c::kloc_1d0f8: 	goto loc_1d0f8;
        case m2c::kloc_1d10f: 	goto loc_1d10f;
        case m2c::kloc_1d124: 	goto loc_1d124;
        case m2c::kloc_1d137: 	goto loc_1d137;
        case m2c::kloc_1d145: 	goto loc_1d145;
        case m2c::kloc_1d14b: 	goto loc_1d14b;
        case m2c::kloc_1d14f: 	goto loc_1d14f;
        case m2c::kloc_1d157: 	goto loc_1d157;
        case m2c::kloc_1d15f: 	goto loc_1d15f;
        case m2c::kloc_1d165: 	goto loc_1d165;
        case m2c::kloc_1d184: 	goto loc_1d184;
        case m2c::kloc_1d18b: 	goto loc_1d18b;
        case m2c::kloc_1d1aa: 	goto loc_1d1aa;
        case m2c::kloc_1d1be: 	goto loc_1d1be;
        case m2c::kloc_1d1c4: 	goto loc_1d1c4;
        case m2c::kloc_1d1dc: 	goto loc_1d1dc;
        case m2c::kloc_1d1de: 	goto loc_1d1de;
        case m2c::kloc_1d1e1: 	goto loc_1d1e1;
        case m2c::kloc_1d1f7: 	goto loc_1d1f7;
        case m2c::kloc_1d201: 	goto loc_1d201;
        case m2c::kloc_1d210: 	goto loc_1d210;
        case m2c::kloc_1d217: 	goto loc_1d217;
        case m2c::kloc_1d21e: 	goto loc_1d21e;
        case m2c::kloc_1d231: 	goto loc_1d231;
        case m2c::kloc_1d24f: 	goto loc_1d24f;
        case m2c::kloc_1d252: 	goto loc_1d252;
        case m2c::kloc_1d2ca: 	goto loc_1d2ca;
        case m2c::kloc_1d2f7: 	goto loc_1d2f7;
        case m2c::kloc_1d300: 	goto loc_1d300;
        case m2c::kloc_1d30f: 	goto loc_1d30f;
        case m2c::kloc_1d316: 	goto loc_1d316;
        case m2c::kloc_1d318: 	goto loc_1d318;
        case m2c::kloc_1d329: 	goto loc_1d329;
        case m2c::kloc_1d352: 	goto loc_1d352;
        case m2c::kloc_1d354: 	goto loc_1d354;
        case m2c::kloc_1d376: 	goto loc_1d376;
        case m2c::kloc_1d389: 	goto loc_1d389;
        case m2c::kloc_1d3b0: 	goto loc_1d3b0;
        case m2c::kloc_1d3b5: 	goto loc_1d3b5;
        case m2c::kloc_1d3d9: 	goto loc_1d3d9;
        case m2c::kloc_1d41a: 	goto loc_1d41a;
        case m2c::kloc_1d41c: 	goto loc_1d41c;
        case m2c::kloc_1d446: 	goto loc_1d446;
        case m2c::kloc_1d46b: 	goto loc_1d46b;
        case m2c::kloc_1d475: 	goto loc_1d475;
        case m2c::kloc_1d483: 	goto loc_1d483;
        case m2c::kloc_1d4aa: 	goto loc_1d4aa;
        case m2c::kloc_1d4ba: 	goto loc_1d4ba;
        case m2c::kloc_1d4e7: 	goto loc_1d4e7;
        case m2c::kloc_1d4ee: 	goto loc_1d4ee;
        case m2c::kloc_1d527: 	goto loc_1d527;
        case m2c::kloc_1d546: 	goto loc_1d546;
        case m2c::kloc_1d550: 	goto loc_1d550;
        case m2c::kloc_1d55e: 	goto loc_1d55e;
        case m2c::kloc_1d57f: 	goto loc_1d57f;
        case m2c::kloc_1d58f: 	goto loc_1d58f;
        case m2c::kloc_1d5e0: 	goto loc_1d5e0;
        case m2c::kloc_1d5f8: 	goto loc_1d5f8;
        case m2c::kloc_1d5fc: 	goto loc_1d5fc;
        case m2c::kloc_1d615: 	goto loc_1d615;
        case m2c::kloc_1d62f: 	goto loc_1d62f;
        case m2c::kloc_1d635: 	goto loc_1d635;
        case m2c::kloc_1d63e: 	goto loc_1d63e;
        case m2c::kloc_1d673: 	goto loc_1d673;
        case m2c::kloc_1d676: 	goto loc_1d676;
        case m2c::kloc_1d693: 	goto loc_1d693;
        case m2c::kloc_1d6af: 	goto loc_1d6af;
        case m2c::kloc_1d6ba: 	goto loc_1d6ba;
        case m2c::kloc_1d6d6: 	goto loc_1d6d6;
        case m2c::kloc_1d6dc: 	goto loc_1d6dc;
        case m2c::kloc_1d6de: 	goto loc_1d6de;
        case m2c::kloc_1d6e6: 	goto loc_1d6e6;
        case m2c::kloc_1d6ff: 	goto loc_1d6ff;
        case m2c::kloc_1d709: 	goto loc_1d709;
        case m2c::kloc_1d71a: 	goto loc_1d71a;
        case m2c::kloc_1d71d: 	goto loc_1d71d;
        case m2c::kloc_1d73d: 	goto loc_1d73d;
        case m2c::kloc_1d759: 	goto loc_1d759;
        case m2c::kloc_1d76d: 	goto loc_1d76d;
        case m2c::kloc_1d76f: 	goto loc_1d76f;
        case m2c::kloc_1d773: 	goto loc_1d773;
        case m2c::kloc_1d7b1: 	goto loc_1d7b1;
        case m2c::kloc_1d7b4: 	goto loc_1d7b4;
        case m2c::kloc_1d7bd: 	goto loc_1d7bd;
        case m2c::kloc_1d7c0: 	goto loc_1d7c0;
        case m2c::kloc_1d7dd: 	goto loc_1d7dd;
        case m2c::kloc_1d7f5: 	goto loc_1d7f5;
        case m2c::kloc_1d7f7: 	goto loc_1d7f7;
        case m2c::kloc_1d81e: 	goto loc_1d81e;
        case m2c::kloc_1d86b: 	goto loc_1d86b;
        case m2c::kloc_1d875: 	goto loc_1d875;
        case m2c::kloc_1d879: 	goto loc_1d879;
        case m2c::kloc_1d87b: 	goto loc_1d87b;
        case m2c::kloc_1d8e4: 	goto loc_1d8e4;
        case m2c::kloc_1d8e6: 	goto loc_1d8e6;
        case m2c::kloc_1d93c: 	goto loc_1d93c;
        case m2c::kloc_1d959: 	goto loc_1d959;
        case m2c::kloc_1d95d: 	goto loc_1d95d;
        case m2c::kloc_1d963: 	goto loc_1d963;
        case m2c::kloc_1d968: 	goto loc_1d968;
        case m2c::kloc_1d96c: 	goto loc_1d96c;
        case m2c::kloc_1d975: 	goto loc_1d975;
        case m2c::kloc_1d989: 	goto loc_1d989;
        case m2c::kloc_1d999: 	goto loc_1d999;
        case m2c::kloc_1d9af: 	goto loc_1d9af;
        case m2c::kloc_1d9b5: 	goto loc_1d9b5;
        case m2c::kloc_1d9c8: 	goto loc_1d9c8;
        case m2c::kloc_1d9e8: 	goto loc_1d9e8;
        case m2c::kloc_1d9eb: 	goto loc_1d9eb;
        case m2c::kloc_1da2b: 	goto loc_1da2b;
        case m2c::kloc_1da3e: 	goto loc_1da3e;
        case m2c::kloc_1da7f: 	goto loc_1da7f;
        case m2c::kloc_1da92: 	goto loc_1da92;
        case m2c::kloc_1dad0: 	goto loc_1dad0;
        case m2c::kloc_1dad2: 	goto loc_1dad2;
        case m2c::kloc_1daea: 	goto loc_1daea;
        case m2c::kloc_1db27: 	goto loc_1db27;
        case m2c::kloc_1db2a: 	goto loc_1db2a;
        case m2c::kloc_1db48: 	goto loc_1db48;
        case m2c::kloc_1db68: 	goto loc_1db68;
        case m2c::kloc_1db80: 	goto loc_1db80;
        case m2c::kloc_1db83: 	goto loc_1db83;
        case m2c::kloc_1db8c: 	goto loc_1db8c;
        case m2c::kloc_1dbac: 	goto loc_1dbac;
        case m2c::kloc_1dbed: 	goto loc_1dbed;
        case m2c::kloc_1dbf5: 	goto loc_1dbf5;
        case m2c::kloc_1dbfc: 	goto loc_1dbfc;
        case m2c::kloc_1dc07: 	goto loc_1dc07;
        case m2c::kloc_1dc29: 	goto loc_1dc29;
        case m2c::kloc_1dc38: 	goto loc_1dc38;
        case m2c::kloc_1dc4d: 	goto loc_1dc4d;
        case m2c::kloc_1dc52: 	goto loc_1dc52;
        case m2c::kloc_1dc58: 	goto loc_1dc58;
        case m2c::kloc_1dc5b: 	goto loc_1dc5b;
        case m2c::kloc_1dc8a: 	goto loc_1dc8a;
        case m2c::kloc_1dcac: 	goto loc_1dcac;
        case m2c::kloc_1dcd7: 	goto loc_1dcd7;
        case m2c::kloc_1dcec: 	goto loc_1dcec;
        case m2c::kloc_1dcf4: 	goto loc_1dcf4;
        case m2c::kloc_1dcfc: 	goto loc_1dcfc;
        case m2c::kloc_1dd1f: 	goto loc_1dd1f;
        case m2c::kloc_1dd27: 	goto loc_1dd27;
        case m2c::kloc_1dd9d: 	goto loc_1dd9d;
        case m2c::kloc_1dddb: 	goto loc_1dddb;
        case m2c::kloc_1ddfc: 	goto loc_1ddfc;
        case m2c::kloc_1de03: 	goto loc_1de03;
        case m2c::kloc_1de22: 	goto loc_1de22;
        case m2c::kloc_1de37: 	goto loc_1de37;
        case m2c::kloc_1de3a: 	goto loc_1de3a;
        case m2c::kloc_1de61: 	goto loc_1de61;
        case m2c::kloc_1de67: 	goto loc_1de67;
        case m2c::kloc_1de74: 	goto loc_1de74;
        case m2c::kloc_1de8f: 	goto loc_1de8f;
        case m2c::kloc_1de98: 	goto loc_1de98;
        case m2c::kloc_1dea2: 	goto loc_1dea2;
        case m2c::kloc_1dead: 	goto loc_1dead;
        case m2c::kloc_1deb5: 	goto loc_1deb5;
        case m2c::kloc_1deb9: 	goto loc_1deb9;
        case m2c::kloc_1dec7: 	goto loc_1dec7;
        case m2c::kloc_1df26: 	goto loc_1df26;
        case m2c::kloc_1df28: 	goto loc_1df28;
        case m2c::kloc_1df3c: 	goto loc_1df3c;
        case m2c::kloc_1df3e: 	goto loc_1df3e;
        case m2c::kloc_1df53: 	goto loc_1df53;
        case m2c::kloc_1df55: 	goto loc_1df55;
        case m2c::kloc_1df68: 	goto loc_1df68;
        case m2c::kloc_1df6c: 	goto loc_1df6c;
        case m2c::kloc_1df7d: 	goto loc_1df7d;
        case m2c::kloc_1df7f: 	goto loc_1df7f;
        case m2c::kloc_1df93: 	goto loc_1df93;
        case m2c::kloc_1df95: 	goto loc_1df95;
        case m2c::kloc_1dfaa: 	goto loc_1dfaa;
        case m2c::kloc_1dfac: 	goto loc_1dfac;
        case m2c::kloc_1dfc9: 	goto loc_1dfc9;
        case m2c::kloc_1dfcb: 	goto loc_1dfcb;
        case m2c::kloc_1dfdf: 	goto loc_1dfdf;
        case m2c::kloc_1dfe1: 	goto loc_1dfe1;
        case m2c::kloc_1dff6: 	goto loc_1dff6;
        case m2c::kloc_1dff8: 	goto loc_1dff8;
        case m2c::kloc_1dffb: 	goto loc_1dffb;
        case m2c::kloc_1e02d: 	goto loc_1e02d;
        case m2c::kloc_1e035: 	goto loc_1e035;
        case m2c::kloc_1e03d: 	goto loc_1e03d;
        case m2c::kloc_1e040: 	goto loc_1e040;
        case m2c::kloc_1e077: 	goto loc_1e077;
        case m2c::kloc_1e092: 	goto loc_1e092;
        case m2c::kloc_1e09f: 	goto loc_1e09f;
        case m2c::kloc_1e0e9: 	goto loc_1e0e9;
        case m2c::kloc_1e0fa: 	goto loc_1e0fa;
        case m2c::kloc_1e11b: 	goto loc_1e11b;
        case m2c::klocret_1c8c1: 	goto locret_1c8c1;
        case m2c::klocret_1e0f1: 	goto locret_1e0f1;
        case m2c::kret_dbe_10a0: 	goto ret_dbe_10a0;
        case m2c::kret_dbe_10d0: 	goto ret_dbe_10d0;
        case m2c::kret_dbe_10e8: 	goto ret_dbe_10e8;
        case m2c::kret_dbe_1110: 	goto ret_dbe_1110;
        case m2c::kret_dbe_111e: 	goto ret_dbe_111e;
        case m2c::kret_dbe_11f7: 	goto ret_dbe_11f7;
        case m2c::kret_dbe_1303: 	goto ret_dbe_1303;
        case m2c::kret_dbe_1326: 	goto ret_dbe_1326;
        case m2c::kret_dbe_13d9: 	goto ret_dbe_13d9;
        case m2c::kret_dbe_15c8: 	goto ret_dbe_15c8;
        case m2c::kret_dbe_16f9: 	goto ret_dbe_16f9;
        case m2c::kret_dbe_170d: 	goto ret_dbe_170d;
        case m2c::kret_dbe_1759: 	goto ret_dbe_1759;
        case m2c::kret_dbe_17ce: 	goto ret_dbe_17ce;
        case m2c::kret_dbe_1931: 	goto ret_dbe_1931;
        case m2c::kret_dbe_19e5: 	goto ret_dbe_19e5;
        case m2c::kret_dbe_1b72: 	goto ret_dbe_1b72;
        case m2c::kret_dbe_1b8a: 	goto ret_dbe_1b8a;
        case m2c::kret_dbe_1e8c: 	goto ret_dbe_1e8c;
        case m2c::kret_dbe_1f32: 	goto ret_dbe_1f32;
        case m2c::kret_dbe_663: 	goto ret_dbe_663;
        case m2c::kret_dbe_665: 	goto ret_dbe_665;
        case m2c::kret_dbe_6dd: 	goto ret_dbe_6dd;
        case m2c::kret_dbe_71d: 	goto ret_dbe_71d;
        case m2c::kret_dbe_733: 	goto ret_dbe_733;
        case m2c::kret_dbe_784: 	goto ret_dbe_784;
        case m2c::kret_dbe_868: 	goto ret_dbe_868;
        case m2c::kret_dbe_87a: 	goto ret_dbe_87a;
        case m2c::kret_dbe_8a0: 	goto ret_dbe_8a0;
        case m2c::kret_dbe_8b9: 	goto ret_dbe_8b9;
        case m2c::kret_dbe_8c6: 	goto ret_dbe_8c6;
        case m2c::kret_dbe_aa6: 	goto ret_dbe_aa6;
        case m2c::kret_dbe_ae1: 	goto ret_dbe_ae1;
        case m2c::kret_dbe_b1e: 	goto ret_dbe_b1e;
        case m2c::kret_dbe_b5c: 	goto ret_dbe_b5c;
        case m2c::kret_dbe_b8a: 	goto ret_dbe_b8a;
        case m2c::kret_dbe_bb8: 	goto ret_dbe_bb8;
        case m2c::kret_dbe_be6: 	goto ret_dbe_be6;
        case m2c::kret_dbe_c17: 	goto ret_dbe_c17;
        case m2c::kret_dbe_c2b: 	goto ret_dbe_c2b;
        case m2c::kret_dbe_e2e: 	goto ret_dbe_e2e;
        case m2c::kret_dbe_e7e: 	goto ret_dbe_e7e;
        case m2c::kret_dbe_e98: 	goto ret_dbe_e98;
        case m2c::kseg005_proc: 	goto seg005_proc;
        case m2c::ksub_1c822: 	goto sub_1c822;
        case m2c::ksub_1c824: 	goto sub_1c824;
        case m2c::ksub_1c898: 	goto sub_1c898;
        case m2c::ksub_1c8c2: 	goto sub_1c8c2;
        case m2c::ksub_1c90c: 	goto sub_1c90c;
        case m2c::ksub_1c92b: 	goto sub_1c92b;
        case m2c::ksub_1ca0e: 	goto sub_1ca0e;
        case m2c::ksub_1ca85: 	goto sub_1ca85;
        case m2c::ksub_1cc65: 	goto sub_1cc65;
        case m2c::ksub_1cca0: 	goto sub_1cca0;
        case m2c::ksub_1ccdd: 	goto sub_1ccdd;
        case m2c::ksub_1cd1b: 	goto sub_1cd1b;
        case m2c::ksub_1cd49: 	goto sub_1cd49;
        case m2c::ksub_1cd77: 	goto sub_1cd77;
        case m2c::ksub_1cda5: 	goto sub_1cda5;
        case m2c::ksub_1cdd6: 	goto sub_1cdd6;
        case m2c::ksub_1cdea: 	goto sub_1cdea;
        case m2c::ksub_1ce05: 	goto sub_1ce05;
        case m2c::ksub_1cfed: 	goto sub_1cfed;
        case m2c::ksub_1d03d: 	goto sub_1d03d;
        case m2c::ksub_1d25f: 	goto sub_1d25f;
        case m2c::ksub_1d28f: 	goto sub_1d28f;
        case m2c::ksub_1d2dd: 	goto sub_1d2dd;
        case m2c::ksub_1d598: 	goto sub_1d598;
        case m2c::ksub_1d787: 	goto sub_1d787;
        case m2c::ksub_1d8b8: 	goto sub_1d8b8;
        case m2c::ksub_1d8ca: 	goto sub_1d8ca;
        case m2c::ksub_1d98d: 	goto sub_1d98d;
        case m2c::ksub_1daf0: 	goto sub_1daf0;
        case m2c::ksub_1dba4: 	goto sub_1dba4;
        case m2c::ksub_1dd2f: 	goto sub_1dd2f;
        case m2c::ksub_1e047: 	goto sub_1e047;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

